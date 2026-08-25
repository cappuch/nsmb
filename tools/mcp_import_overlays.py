from pathlib import Path
import json
import urllib.request
import urllib.parse
import yaml

ROOT = Path.home() / "nsmb"
OVERLAY_DIR = ROOT / "extracted" / "A2DE" / "arm9_overlays"
YAML = OVERLAY_DIR / "overlays.yaml"

MCP = "http://127.0.0.1:8089"


def post(path, data=None, query=None):
    url = MCP + path

    if query:
        url += "?" + urllib.parse.urlencode(query)

    body = json.dumps(data or {}).encode("utf-8")

    req = urllib.request.Request(
        url,
        data=body,
        headers={"Content-Type": "application/json"},
        method="POST",
    )

    with urllib.request.urlopen(req) as r:
        return json.loads(r.read())


def get(path, query=None):
    url = MCP + path

    if query:
        url += "?" + urllib.parse.urlencode(query)

    with urllib.request.urlopen(url) as r:
        return json.loads(r.read())


with YAML.open("r", encoding="utf-8") as f:
    overlays = yaml.safe_load(f)["overlays"]

print()

for i, ov in enumerate(overlays, 1):
    binary = OVERLAY_DIR / ov["file_name"]
    name = ov["file_name"]
    base = f"0x{ov['base_address']:08X}"

    print(f"[{i}/{len(overlays)}] {name} -> {base}")

    try:
        # Import into CURRENT Ghidra project.
        result = post("/import_file", {
            "file_path": str(binary),
            "project_folder": "/overlays",
            "language": "ARM:LE:32:v5t",
            "compiler_spec": "default",
            "auto_analyze": False,
        })

        print("  imported")

        # Rebase imported program.
        post(
            "/set_image_base",
            {"base_address": base},
            {"program": name},
        )

        print("  rebased")

        # Now analyze it at the correct addresses.
        post(
            "/reanalyze",
            {},
            {"program": name},
        )

        print("  analyzed")

        # Persist changes.
        get(
            "/save_program",
            {"program": name},
        )

        print("  saved")

    except Exception as e:
        print(f"  FAILED: {e}")
        raise

print("\nDONE")