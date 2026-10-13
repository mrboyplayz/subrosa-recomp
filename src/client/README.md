# Client C modules

These are the maintained C sources for the recomp executable. Edit these
files directly. The build compiles each file independently without generating
or reading a combined `subrosa.c`.

`client_data.c` owns shared storage. `shared_client.h` declares the common
C interface, and `import_shim.c` supplies import glue during linking.
`manifest.json` and `sources.cmake` list the compilation units. Function
ownership lives in `sheets/02-plan.tsv` and `sheets/03-impl.tsv`.

Build from the project directory:

```powershell
python scripts/check-rebuild.py --binary client --object --debug --lenient --compiler C:/Users/junin/mingw64/bin/gcc.exe --output reports/client-object
python scripts/link_client.py --object-report reports/client-object/client-prepared.json --output reports/client-link
```

These commands compile and link the C files; they do not rewrite them.
The former client preparation generator is disabled. Native comparison
fixtures read these same files and select functions by their address comments.

| C file | Functions |
| --- | ---: |
| [client_audio.c](client_audio.c) | 1 |
| [client_blocks.c](client_blocks.c) | 59 |
| [client_character.c](client_character.c) | 2 |
| [client_city.c](client_city.c) | 20 |
| [client_collision.c](client_collision.c) | 34 |
| [client_data.c](client_data.c) | 0 |
| [client_effects.c](client_effects.c) | 2 |
| [client_gl_loader.c](client_gl_loader.c) | 13 |
| [client_gpu_buffers.c](client_gpu_buffers.c) | 4 |
| [client_hud.c](client_hud.c) | 3 |
| [client_humans.c](client_humans.c) | 52 |
| [client_input.c](client_input.c) | 4 |
| [client_items.c](client_items.c) | 11 |
| [client_main.c](client_main.c) | 1 |
| [client_master_network.c](client_master_network.c) | 3 |
| [client_math.c](client_math.c) | 4 |
| [client_network.c](client_network.c) | 7 |
| [client_physics.c](client_physics.c) | 17 |
| [client_practice.c](client_practice.c) | 2 |
| [client_recovery_000000.c](client_recovery_000000.c) | 32 |
| [client_recovery_020000.c](client_recovery_020000.c) | 35 |
| [client_recovery_040000.c](client_recovery_040000.c) | 73 |
| [client_recovery_060000.c](client_recovery_060000.c) | 107 |
| [client_recovery_080000.c](client_recovery_080000.c) | 61 |
| [client_recovery_0a0000.c](client_recovery_0a0000.c) | 34 |
| [client_recovery_0c0000.c](client_recovery_0c0000.c) | 57 |
| [client_recovery_0e0000.c](client_recovery_0e0000.c) | 62 |
| [client_recovery_100000.c](client_recovery_100000.c) | 83 |
| [client_recovery_120000.c](client_recovery_120000.c) | 37 |
| [client_recovery_140000.c](client_recovery_140000.c) | 11 |
| [client_recovery_160000.c](client_recovery_160000.c) | 0 |
| [client_recovery_180000.c](client_recovery_180000.c) | 42 |
| [client_renderer.c](client_renderer.c) | 73 |
| [client_replay.c](client_replay.c) | 3 |
| [client_runtime_180000.c](client_runtime_180000.c) | 164 |
| [client_runtime_1a0000.c](client_runtime_1a0000.c) | 161 |
| [client_runtime_1c0000.c](client_runtime_1c0000.c) | 133 |
| [client_runtime_1e0000.c](client_runtime_1e0000.c) | 333 |
| [client_runtime_200000.c](client_runtime_200000.c) | 519 |
| [client_runtime_220000.c](client_runtime_220000.c) | 492 |
| [client_runtime_240000.c](client_runtime_240000.c) | 683 |
| [client_runtime_260000.c](client_runtime_260000.c) | 329 |
| [client_startup.c](client_startup.c) | 18 |
| [client_stb_image.c](client_stb_image.c) | 184 |
| [client_stb_truetype.c](client_stb_truetype.c) | 139 |
| [client_terminal.c](client_terminal.c) | 27 |
| [client_terrain.c](client_terrain.c) | 5 |
| [client_ui.c](client_ui.c) | 14 |
| [client_vehicles.c](client_vehicles.c) | 79 |
| [client_widgets.c](client_widgets.c) | 27 |
| [client_world_assets.c](client_world_assets.c) | 4 |
| [client_world_generation.c](client_world_generation.c) | 2 |
