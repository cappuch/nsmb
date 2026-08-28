# Decompilation blockers

- `BootScene::func_ov001_020cc4b4()` (~89.6%): semantics and control flow are equivalent; remaining differences are MWCC register allocation, scheduling/code shape, loop induction, and conditional lowering. Do not revisit without new evidence.
- `WmController::moveEntities()`: register-allocation/relocation blocker.
- `StageEntity::func_ov000_0209ccd0()`: register-allocation blocker.
- `StageEntity::stopVelocity()`: speculative reconstruction; do not use without new evidence.
- `App::initBoot()`: `OVERLAY_MISC` literal-pool relocation blocker.
- `Object156::onUpdate_0()`: relocation/local-symbol blocker.
