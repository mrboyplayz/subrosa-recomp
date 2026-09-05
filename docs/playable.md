# Playable Reconstruction

Run `build/sr_play.exe`. This is a native C/OpenGL gameplay prototype, not a
recompiled original client. It uses the installed original 9mm CMO mesh, rendered
with placeholder colors. The small environment, gameplay rules, and HUD are new
reconstruction code, not recovered original behavior or the original map.

## Controls

- Enter or click: resume; Escape: pause and release mouse.
- WASD: walk; mouse: look; Shift: sprint; Space: jump.
- Left click: fire; R: reload (unlimited reserve ammunition).
- E: collect the case near spawn, then deliver it to the green marker.
- F5: restart; F10: quit.

Shoot all three red targets at the far end of the street and deliver the case to
complete the contract. Buildings and crates block movement and shots. Jumping
is currently visual/vertical movement only: it does not allow climbing obstacles.
There are no NPCs, vehicles, multiplayer, sound, ragdolls, or original game modes.
Losing focus pauses the game. Asset paths are resolved relative to the executable,
so launching from a different working directory is supported.

## Build and Test

```powershell
cmake -S . -B build
cmake --build build --target sr_play sr_play_test
ctest --test-dir build --output-on-failure
```

`sr_play_test` checks movement, solid collision, jumping/landing, shooting,
cooldown, reload, and pickup/delivery. `sr_play.exe --smoke-test` opens the real
OpenGL renderer, saves `sr_play_smoke.ppm` in the working directory, checks for
nonuniform pixels and OpenGL errors, and exits with zero on success.
