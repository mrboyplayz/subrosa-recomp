# Sub Rosa player test

Run `SubRosaPlayerTest.exe` beside its `assets` folder. This standalone Rust/Bevy
test uses the installed game's original `msuit1.cmc`, `mhead1.cmo`, `mhair1.cmo`
and palette texture. It does not need Steam, SDL2, lua51.dll or the original EXE.

## Controls

| Input | Action |
| --- | --- |
| WASD | Walk relative to the camera |
| Shift | Run |
| Space | Jump |
| Hold right mouse and move | Orbit third-person camera |
| Arrow keys | Orbit camera using keyboard |
| Mouse wheel | Zoom |
| R | Reset player position |
| F6 | Toggle automatic walking/jumping demonstration |
| F12 | Save `player-test.png` beside the EXE |
| Escape | Quit |

The model geometry is original. The harness now uses recovered linear gravity,
kind-4 drive response, kind-5 ground contact and the original 32-iteration solver
for one rigid body. The temporary custom gravity/floor clamp and procedural walk
animation have been removed. Input targets, jump impulse, 60 Hz harness cadence,
camera and material mapping are temporary harness choices. This is not recovered
1:1 player movement: the original controller, angular integration, full articulated
body setup and bone feedback remain pending. The player currently has a static
display pose. The ground is a test plane and the
boxes are visual markers. Networking, original maps, weapons and gameplay are
not included in this test.

Build/package: `pwsh -File scripts/build-player-test.ps1` from the recovery project.
Automated visual/control check: `SubRosaPlayerTest.exe --smoke-test --screenshot PATH.png`.
That mode runs the player, jumps, saves a rendered screenshot and a JSON result,
then exits. It verifies this harness, not original-client equivalence.
