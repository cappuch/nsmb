from pathlib import Path
from concurrent.futures import ThreadPoolExecutor, as_completed
import subprocess
import yaml

USER_DIR = Path.home()

GHIDRA = Path(r"C:\ghidra_12.1.2_PUBLIC")
PROJECT_DIR = USER_DIR / "ghidra-projects"

ROOT = USER_DIR / "nsmb"
OVERLAY_DIR = ROOT / "extracted" / "A2DE" / "arm9_overlays"
YAML = OVERLAY_DIR / "overlays.yaml"

ANALYZE = GHIDRA / "support" / "analyzeHeadless.bat"

# Number of Ghidra instances at once.
WORKERS = 4

PROJECT_DIR.mkdir(parents=True, exist_ok=True)

with YAML.open("r", encoding="utf-8") as f:
    overlays = yaml.safe_load(f)["overlays"]


def import_overlay(ov):
    ov_id = ov["id"]
    binary = OVERLAY_DIR / ov["file_name"]
    base = f"0x{ov['base_address']:08X}"

    # Separate project per overlay.
    # Avoids multiple Ghidra processes fighting over one project lock.
    project_name = f"NSMB_A2DE_ov{ov_id:03d}"

    cmd = [
        str(ANALYZE),
        str(PROJECT_DIR),
        project_name,
        "-import", str(binary),
        "-processor", "ARM:LE:32:v5t",
        "-loader", "BinaryLoader",
        "-loader-baseAddr", base,
        "-overwrite",
    ]

    result = subprocess.run(
        cmd,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.STDOUT,
    )

    return ov_id, base, result.returncode


print(
    f"Importing {len(overlays)} overlays "
    f"with {WORKERS} parallel Ghidra instances...\n"
)

failed = []

with ThreadPoolExecutor(max_workers=WORKERS) as executor:
    futures = [
        executor.submit(import_overlay, ov)
        for ov in overlays
    ]

    for future in as_completed(futures):
        ov_id, base, code = future.result()

        if code == 0:
            print(f"[OK]     ov{ov_id:03d} @ {base}")
        else:
            print(f"[FAILED] ov{ov_id:03d} @ {base}")
            failed.append(ov_id)


print()

if failed:
    print("FAILED:", ", ".join(
        f"ov{x:03d}" for x in failed
    ))
else:
    print("ALL OVERLAYS IMPORTED SUCCESSFULLY")