# Client C modules

These are the maintained C sources for the recomp executable. Edit them
directly; the build compiles each file independently.

`client_data.c` owns shared storage. `shared_client.h` declares the client
ABI, and `import_shim.c` supplies import glue. Restored implementations in
`../engine/` use typed, readable C; their `sr_` client entry points retain
the original ABI, including float bits carried in double-sized arguments.

Identified routines are grouped by behavior: packet bits/bytes/angles and
replication, audio mixing/capture/voice, math, camera, collision queries,
physics, items, humans, text, menus and world systems. The remaining
`client_recovery_*.c` files contain routines awaiting classification;
`client_runtime_*.c` contains the recovered runtime libraries.

- `names.tsv` maps original addresses to recovered names. For example,
  `0x14010E610` is `sr_net_write_angle` in `client_net_angle.c`.
- `function_modules.tsv` records explicitly assigned module owners.
- `local_names.tsv` records recovered local/argument roles by function address;
  all maintained C files and headers are free of `v<number>` identifiers.
  Names describe established domain roles or observed operations/storage.
  See [the complete naming audit](local_naming_20261020.md).
- `sources.cmake` lists every client compilation unit.
- Each original routine retains its `//----- (address)` marker, used by the
  native comparison harness to extract the actual client wrappers.

From the project directory:

```powershell
python scripts/build.py --jobs 8
python tools/cleanup/split_client_modules.py --check
python tools/cleanup/recover_client_locals.py --check
```

For another reviewed recovery batch, add behavior names to `names.tsv` and
owners to `function_modules.tsv`, then run:

```powershell
python tools/cleanup/rename_client_functions.py
python tools/cleanup/split_client_modules.py             # preview moves
python tools/cleanup/split_client_modules.py --apply
python tools/cleanup/split_client_modules.py --check
```

The splitter stages complete function blocks, includes their source-local
headers and stack-frame macros, and refuses to write if a function block is
lost, duplicated or changed. It refreshes `sources.cmake`. The name tool also
updates engine references and native comparison/mutation fixtures.

See `../engine/restoration-20261020.md` for the module organization batch and
`../engine/restoration-20261022.md` for the six rotation/interpolation restorations.

| C file | Original routines |
| --- | ---: |
| [client_area_bounds.c](client_area_bounds.c) | 4 |
| [client_audio.c](client_audio.c) | 6 |
| [client_audio_mixer.c](client_audio_mixer.c) | 12 |
| [client_audio_samples.c](client_audio_samples.c) | 1 |
| [client_audio_synthesis.c](client_audio_synthesis.c) | 1 |
| [client_audio_voice.c](client_audio_voice.c) | 4 |
| [client_auth.c](client_auth.c) | 1 |
| [client_block_geometry.c](client_block_geometry.c) | 1 |
| [client_blocks.c](client_blocks.c) | 41 |
| [client_camera.c](client_camera.c) | 8 |
| [client_character.c](client_character.c) | 2 |
| [client_city.c](client_city.c) | 15 |
| [client_collision.c](client_collision.c) | 29 |
| [client_collision_contacts.c](client_collision_contacts.c) | 1 |
| [client_collision_mesh.c](client_collision_mesh.c) | 6 |
| [client_collision_placed.c](client_collision_placed.c) | 2 |
| [client_collision_plane.c](client_collision_plane.c) | 1 |
| [client_collision_polygon.c](client_collision_polygon.c) | 2 |
| [client_collision_queries.c](client_collision_queries.c) | 10 |
| [client_config_io.c](client_config_io.c) | 2 |
| [client_data.c](client_data.c) | 0 |
| [client_disk.c](client_disk.c) | 1 |
| [client_disk_files.c](client_disk_files.c) | 2 |
| [client_events.c](client_events.c) | 16 |
| [client_frame.c](client_frame.c) | 1 |
| [client_gl_loader.c](client_gl_loader.c) | 14 |
| [client_gpu_buffers.c](client_gpu_buffers.c) | 4 |
| [client_hud.c](client_hud.c) | 3 |
| [client_human_balance.c](client_human_balance.c) | 1 |
| [client_human_body.c](client_human_body.c) | 3 |
| [client_human_collide.c](client_human_collide.c) | 1 |
| [client_human_feet.c](client_human_feet.c) | 1 |
| [client_human_health.c](client_human_health.c) | 1 |
| [client_human_hits.c](client_human_hits.c) | 1 |
| [client_human_jump.c](client_human_jump.c) | 1 |
| [client_human_legs.c](client_human_legs.c) | 4 |
| [client_human_ragdoll.c](client_human_ragdoll.c) | 11 |
| [client_human_stand.c](client_human_stand.c) | 1 |
| [client_human_walk.c](client_human_walk.c) | 4 |
| [client_humans.c](client_humans.c) | 34 |
| [client_input.c](client_input.c) | 4 |
| [client_item_carry.c](client_item_carry.c) | 1 |
| [client_item_contacts.c](client_item_contacts.c) | 2 |
| [client_item_grenade.c](client_item_grenade.c) | 1 |
| [client_item_gun.c](client_item_gun.c) | 1 |
| [client_item_phone.c](client_item_phone.c) | 1 |
| [client_item_physics.c](client_item_physics.c) | 1 |
| [client_item_state.c](client_item_state.c) | 9 |
| [client_item_text.c](client_item_text.c) | 2 |
| [client_item_tick.c](client_item_tick.c) | 1 |
| [client_items.c](client_items.c) | 9 |
| [client_main.c](client_main.c) | 1 |
| [client_master_network.c](client_master_network.c) | 3 |
| [client_math.c](client_math.c) | 18 |
| [client_math_integer.c](client_math_integer.c) | 2 |
| [client_math_interpolation.c](client_math_interpolation.c) | 2 |
| [client_math_rotation.c](client_math_rotation.c) | 4 |
| [client_menu.c](client_menu.c) | 7 |
| [client_menu_clip.c](client_menu_clip.c) | 2 |
| [client_menu_labels.c](client_menu_labels.c) | 2 |
| [client_menu_slider.c](client_menu_slider.c) | 1 |
| [client_menu_state.c](client_menu_state.c) | 3 |
| [client_menu_text.c](client_menu_text.c) | 2 |
| [client_menu_widgets.c](client_menu_widgets.c) | 20 |
| [client_mesh_build.c](client_mesh_build.c) | 12 |
| [client_net_angle.c](client_net_angle.c) | 1 |
| [client_net_bits.c](client_net_bits.c) | 8 |
| [client_net_bytes.c](client_net_bytes.c) | 2 |
| [client_net_replication.c](client_net_replication.c) | 10 |
| [client_net_rotation.c](client_net_rotation.c) | 2 |
| [client_net_vector.c](client_net_vector.c) | 3 |
| [client_network.c](client_network.c) | 10 |
| [client_packet_streams.c](client_packet_streams.c) | 2 |
| [client_physics.c](client_physics.c) | 7 |
| [client_physics_body.c](client_physics_body.c) | 1 |
| [client_physics_bonds.c](client_physics_bonds.c) | 4 |
| [client_physics_create.c](client_physics_create.c) | 7 |
| [client_physics_joints.c](client_physics_joints.c) | 3 |
| [client_physics_kernels.c](client_physics_kernels.c) | 4 |
| [client_physics_motion.c](client_physics_motion.c) | 4 |
| [client_physics_points.c](client_physics_points.c) | 2 |
| [client_physics_rotation.c](client_physics_rotation.c) | 1 |
| [client_physics_solve.c](client_physics_solve.c) | 1 |
| [client_physics_tick.c](client_physics_tick.c) | 1 |
| [client_practice.c](client_practice.c) | 2 |
| [client_recovery_000000.c](client_recovery_000000.c) | 24 |
| [client_recovery_020000.c](client_recovery_020000.c) | 24 |
| [client_recovery_040000.c](client_recovery_040000.c) | 38 |
| [client_recovery_080000.c](client_recovery_080000.c) | 59 |
| [client_recovery_0a0000.c](client_recovery_0a0000.c) | 22 |
| [client_recovery_0c0000.c](client_recovery_0c0000.c) | 44 |
| [client_recovery_0e0000.c](client_recovery_0e0000.c) | 60 |
| [client_recovery_100000.c](client_recovery_100000.c) | 20 |
| [client_recovery_120000.c](client_recovery_120000.c) | 37 |
| [client_recovery_140000.c](client_recovery_140000.c) | 11 |
| [client_recovery_180000.c](client_recovery_180000.c) | 40 |
| [client_renderer.c](client_renderer.c) | 70 |
| [client_renderer_primitives.c](client_renderer_primitives.c) | 10 |
| [client_replay.c](client_replay.c) | 3 |
| [client_runtime_180000.c](client_runtime_180000.c) | 157 |
| [client_runtime_1a0000.c](client_runtime_1a0000.c) | 161 |
| [client_runtime_1c0000.c](client_runtime_1c0000.c) | 133 |
| [client_runtime_1e0000.c](client_runtime_1e0000.c) | 331 |
| [client_runtime_200000.c](client_runtime_200000.c) | 518 |
| [client_runtime_220000.c](client_runtime_220000.c) | 491 |
| [client_runtime_240000.c](client_runtime_240000.c) | 675 |
| [client_runtime_260000.c](client_runtime_260000.c) | 321 |
| [client_startup.c](client_startup.c) | 16 |
| [client_stb_image.c](client_stb_image.c) | 184 |
| [client_stb_truetype.c](client_stb_truetype.c) | 139 |
| [client_terminal.c](client_terminal.c) | 25 |
| [client_terrain.c](client_terrain.c) | 5 |
| [client_text.c](client_text.c) | 5 |
| [client_text_helpers.c](client_text_helpers.c) | 6 |
| [client_text_parser.c](client_text_parser.c) | 2 |
| [client_texture_atlas.c](client_texture_atlas.c) | 2 |
| [client_textures.c](client_textures.c) | 3 |
| [client_timing.c](client_timing.c) | 1 |
| [client_ui.c](client_ui.c) | 7 |
| [client_vehicles.c](client_vehicles.c) | 76 |
| [client_widgets.c](client_widgets.c) | 21 |
| [client_world_assets.c](client_world_assets.c) | 4 |
| [client_world_blocks.c](client_world_blocks.c) | 18 |
| [client_world_bullets.c](client_world_bullets.c) | 2 |
| [client_world_effects.c](client_world_effects.c) | 2 |
| [client_world_effects_draw.c](client_world_effects_draw.c) | 1 |
| [client_world_generation.c](client_world_generation.c) | 2 |
| [client_world_grid.c](client_world_grid.c) | 1 |
| [client_world_items.c](client_world_items.c) | 4 |
| [client_world_particles.c](client_world_particles.c) | 3 |
| [client_world_street_mesh.c](client_world_street_mesh.c) | 1 |
| [client_world_streets.c](client_world_streets.c) | 7 |
| [client_world_vehicles.c](client_world_vehicles.c) | 4 |

Total: 4229 unique original routine addresses.
