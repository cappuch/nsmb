# Session Plan — Continue autonomous decomp (agent/decomp)

## Plan (draft)

Baseline (fresh report): matched_code=87970, matched_functions=1528, fuzzy=4.32%.

Strategy:
1. Regenerate report (done) and establish baseline.
2. Prospect programmatically from report.json (per-function fuzzy_match_percent available for 2138 fns).
3. Attack strongest significant targets: prefer partial matches (fuzzy 20-99.9%) with size 100-1000+ in coherent clusters, then unmatched large functions with clear semantics.
4. Use subagents for parallel prospecting/investigation; I (coordinator) do the reverse engineering + edits + builds + verification.
5. Verify every win (rebuild, objdiff, report, no regression), commit significant verified wins.

Top candidates identified (non-stub, non-gap):
- StageEntity cluster (src/Bases/StageEntity.cpp): onUpdate_8 (352B @93.89%), func_0209e5a8 (184@66.5), isPlayerInZone (144@65.4), _18 (412@60.6), func_0209ccd0 (108@68.3), func_0209aa04 (88@79.6)
- VsStar cluster (src/Bases/VSStar.cpp): damagePlayer (64@98.75), onRender (304@75.68), many funcs
- BootScene::func_ov001_020cc4b4 (204@64.1)
- Coin::func_ov010_020d9004 (496@49.2)
- Item::onRender (1492 unmatched)
- StageScene::func_ov000_020a1d3c (2160 unmatched)

Known blockers (avoid unless new evidence): WmController::moveEntities, tryNormalizeVec3, Object156::onUpdate_0, MGScene_338::onDestroy, PlayerActor/Object240 destructor ABI, Scene/Collider/layout/VSStar quick attempts.

## Steps

- [x] Regenerate report, read baseline (88438 / 1530 current authoritative)
- [x] Write prospecting script (.maiku/prospect.py)
- [x] Produce ranked candidate list
- [x] Attack StageEntity::onUpdate_8 (352B @93.89%) first
- [x] Dispatch subagents for parallel prospecting
- [x] Iterate: implement -> build -> objdiff -> verify -> commit
- [x] QA verify and push clean commits to origin/qa
- [x] Return to agent/decomp
- [ ] Continue next target
- [ ] Final report

## Findings
- report.json has per-function fuzzy_match_percent for 2138 functions (partial/matched); unmatched fns have no key.
- Units: 832. Helper scripts already in .maiku/ (listfns, unitfuncs, sidediff, fndump, probe).
- Subagents identified StageEntity::_18, Coin state handlers, and worldmap player model as the strongest concrete clusters; gap-only functions are generally lower-confidence.
- Fresh session baseline remained 88438 matched bytes / 1530 functions.
- QA was fast-forwarded to origin/qa, then commits were cherry-picked, rebuilt, globally reported at 88438/1530, and pushed as fc0171a.
- StageEntity::_18 was abandoned as a target after informed Ghidra/objdiff review; its experimental changes were restored.

## Intellect
- StageEntity::onUpdate_8 was semantically close but differed due to source structure: squished branch calls `_35`, and grounded handling must be nested under the bounce-mask branch. Explicit velocity negation reproduces MWCC's instruction sequence.
- Calls to helpers only became relocatable after declaring them as StageEntity members; this improved the function from 99.83% to 100%.
- StageEntity::_18 improved from 60.57% to 64.41% by recovering the PlayerBase carrying flag, Game::getPlayer, collision tile query, and edge offset; remaining mismatch is compiler/source-shape and not yet exact.
- WmPlayerModel::render is a shell-state render wrapper that forwards matrix/scale, palette, and global render parameters to the ov011 PlayerModel routine.


## Changes
- d86f2ad: StageEntity::onUpdate_8 exact (+352 bytes, +1 function).
- cbe3d6e: corrected StageEntity helper ownership declaration.
- 824f8db: WmPlayerModel::render exact (+116 bytes, +1 function).
- StageEntity::_18 experiment was discarded (not exact; source restored).
- Fresh report after rebuild: matched_code 87970 -> 88438 (+468), matched_functions 1528 -> 1530 (+2); exact functions are onUpdate_8 and WmPlayerModel::render.
- QA promotion: origin/qa now contains the verified StageEntity and WmPlayerModel changes; agent/decomp was pushed through 932f266.


## Objectives
- [x] Significant readable 100%-matched decomp committed
- [x] Zero regression
- [x] QA nominations identified (d86f2ad/824f8db; QA equivalents 225fab9/fc0171a) (d86f2ad, 824f8db)
