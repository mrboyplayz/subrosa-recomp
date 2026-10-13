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
| [client_audio.c](client_audio.c) | 28 |
| [client_blocks.c](client_blocks.c) | 75 |
| [client_bullets.c](client_bullets.c) | 3 |
| [client_character.c](client_character.c) | 2 |
| [client_city.c](client_city.c) | 34 |
| [client_collision.c](client_collision.c) | 81 |
| [client_config.c](client_config.c) | 18 |
| [client_corporations.c](client_corporations.c) | 10 |
| [client_cxx_support.c](client_cxx_support.c) | 6 |
| [client_data.c](client_data.c) | 0 |
| [client_editor.c](client_editor.c) | 15 |
| [client_effects.c](client_effects.c) | 4 |
| [client_events.c](client_events.c) | 18 |
| [client_game_modes.c](client_game_modes.c) | 7 |
| [client_gl_loader.c](client_gl_loader.c) | 23 |
| [client_gpu_buffers.c](client_gpu_buffers.c) | 4 |
| [client_hud.c](client_hud.c) | 13 |
| [client_humans.c](client_humans.c) | 64 |
| [client_input.c](client_input.c) | 4 |
| [client_items.c](client_items.c) | 33 |
| [client_main.c](client_main.c) | 3 |
| [client_master_network.c](client_master_network.c) | 7 |
| [client_math.c](client_math.c) | 53 |
| [client_mesh_builder.c](client_mesh_builder.c) | 35 |
| [client_missions.c](client_missions.c) | 29 |
| [client_network.c](client_network.c) | 63 |
| [client_physics.c](client_physics.c) | 34 |
| [client_players.c](client_players.c) | 30 |
| [client_practice.c](client_practice.c) | 2 |
| [client_recovery_0c0000.c](client_recovery_0c0000.c) | 1 |
| [client_renderer.c](client_renderer.c) | 110 |
| [client_replay.c](client_replay.c) | 5 |
| [client_runtime_180000.c](client_runtime_180000.c) | 164 |
| [client_runtime_1a0000.c](client_runtime_1a0000.c) | 161 |
| [client_runtime_1c0000.c](client_runtime_1c0000.c) | 133 |
| [client_runtime_1e0000.c](client_runtime_1e0000.c) | 333 |
| [client_runtime_200000.c](client_runtime_200000.c) | 519 |
| [client_runtime_220000.c](client_runtime_220000.c) | 492 |
| [client_runtime_240000.c](client_runtime_240000.c) | 683 |
| [client_runtime_260000.c](client_runtime_260000.c) | 329 |
| [client_shaders.c](client_shaders.c) | 2 |
| [client_startup.c](client_startup.c) | 23 |
| [client_stb_image.c](client_stb_image.c) | 186 |
| [client_stb_truetype.c](client_stb_truetype.c) | 139 |
| [client_terminal.c](client_terminal.c) | 41 |
| [client_terrain.c](client_terrain.c) | 11 |
| [client_text.c](client_text.c) | 13 |
| [client_textures.c](client_textures.c) | 17 |
| [client_time.c](client_time.c) | 3 |
| [client_ui.c](client_ui.c) | 25 |
| [client_vehicles.c](client_vehicles.c) | 95 |
| [client_widgets.c](client_widgets.c) | 57 |
| [client_world_assets.c](client_world_assets.c) | 20 |
| [client_world_generation.c](client_world_generation.c) | 2 |
