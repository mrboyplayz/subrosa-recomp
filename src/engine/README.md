# Engine (clean C)

A rewrite of the Sub Rosa client as ordinary, readable C, one routine at a
time. The goal is the same game exactly: the same data files, the same
simulation results on every tick, the same OpenGL calls, the same network
packets.

`src/client/` is the recompiled client: decompiler output repaired until it
runs. This directory replaces it piece by piece. The game stays playable
throughout because both halves share one memory layout (see `memory.h`), so a
routine can move here without anything else changing.

## Status

The table records the recovered routines by original address. Recovery is incomplete.

| File | Contents | Original routines |
|---|---|---|
| `renderer.c` | 2D drawing: the vertex batch behind lines and shapes, textured and flat rectangles, atlas sprites; the radix sort that orders things back to front | 0x14007D420, 0x14007D230, 0x14007D520, 0x14007D320, 0x14006E0D0, 0x14006E2D0, 0x14006CFF0, 0x14006D660, 0x14006D300, 0x14007D710 |
| `renderer_state.c`, `renderer_state.h` | the fixed-function render-pass state setups: stencil-notequal, stencil-equal, opaque and shadow-volume depth/stencil state, every GL call the passes issue | 0x1400A6DF0, 0x1400A6E90, 0x1400A6F30, 0x1400A6FB0 |
| `camera.c` | window letterbox, viewport and scissor from canvas rectangles, 2D/orthographic/perspective setup, view and model matrices and their products | 0x14006C780, 0x14007BB00, 0x14007A2C0, 0x14007A570, 0x14007BE20, 0x14007B990, 0x14007B6F0, 0x14007B7E0 |
| `math3d.c` | the frame across a direction (shared by bullets and decals), vector normalize and rotation, angle difference, triangle normal, point-to-segment distance, vector-matrix and matrix products, orthographic matrix, rotation of a basis about an axis | 0x14007A240, 0x14007B4D0, 0x14000B5F0, 0x14006EC40, 0x14007ABA0, 0x14007B0F0, 0x140079D60, 0x14007A010, 0x14007AE70, 0x14007A0E0, 0x140079F00, 0x14007B2A0, quaternion product 0x140105930 |
| `text.c` | text drawing and measuring | 0x14006D930, 0x14006DB90, 0x14006E530, 0x14006F060 |
| `physics.c`, `physics_bonds.c` | joint preparation, point and joint impulse kernels, bond expiry and removal, contacts against the level and between two bodies | 0x14001C780, 0x14001CBB0, 0x14001BF70, 0x14001FB90, 0x14007F370, 0x140005160, 0x1400052C0 |
| `physics_motion.c` | tangential velocity limits and sliding work, a velocity change applied at a body point, and velocity at a body point | 0x14002D820, 0x14002D9B0, 0x14012B090, 0x14012B170 |
| `area_bounds.c`, `area_bounds.h` | corporation interiors and vaults, world-region membership, and the five-plane camera visibility query | 0x14011B8F0, 0x14011B960, 0x14011B9F0, 0x14011BAD0 |
| `net_bits.c`, `net_bytes.c`, `net_angle.c` | packet bit reads/writes and scaling, the two always-success write adapters, aligned byte transfers, and signed-magnitude angle encoding | 0x140115AE0, 0x140115C20, 0x140115D90, 0x140115E80, 0x140115E60, 0x140115F70, 0x14007ADF0, 0x14007B180, 0x14010E610 |
| `replay.c`, `replay.h` | replay playback: the recorded-frame read that refills the net read buffer, applies header or state frames and counts the live-record flags | 0x140127300 |
| `text_helpers.c`, `text_helpers.h` | label CRC IDs, the two unsigned-byte comparators, parser prefix/search, visible-label copying, and thousands grouping of an unsigned value | 0x14004C4C0, 0x14006C980, 0x14006C670, 0x14006C870, 0x14006E4C0, 0x14006F120, 0x140158B10 |
| `clock.c`, `clock.h` | monotonic milliseconds since startup | 0x14007C980 |
| `physics_create.c` | free-bond lookup; body, point, body-bond, rotation-bond, distance-bond and world-anchor creation | 0x1400A4440, 0x14005CF80, 0x14005CBB0, 0x14004E430, 0x14004E5B0, 0x14004E160, 0x14004E2E0 |
| `events.c`, `events.h` | bullet/hit, message, block-update/hit, sound, corporation door, mission, vehicle removal, player, type-21 and stock-price event constructors; event 15 uses `world_event_block_gone` | 0x140051230, 0x1400512D0, 0x140051480, 0x140051560, 0x1400515E0, 0x140051650, 0x140051730, 0x1400518B0, 0x1400519F0, 0x140051B00, 0x140051BD0, 0x140051CF0, 0x140051DC0, 0x140051F50, 0x140051FF0, 0x140052090 |
| `disk.c`, `disk_files.c`, `disk.h` | disk allocation, item drive lookup, file appending, and finding a file by name in a directory | 0x140050EF0, 0x14004C960, 0x140080690, 0x140080820 |
| `physics_kernels.c`, `physics_kernels.h` | scalar/SIMD inverse inertia and sphere intersection roots | 0x14002CF10, 0x14002D2D0, 0x14011C640, 0x14011C6B0 |
| `physics_body.c` | gravity, translation and the rotation boundary for active unsettled bodies; also used by the full tick | 0x14012B220 |
| `menu.c`, `menu.h`, `menu_text.c`, `menu_slider.c`, `menu_state.c`, `menu_clip.c` | widget allocation/layout, buttons, selectable buttons, toggles and masks, groups, text caret/measurement, integer sliders, size stack/reset/grid, and nested clipping | 0x140070380, 0x14006F1F0, 0x14006F5A0, 0x140071910, 0x140071AA0, 0x14006FD10, 0x140074C50, 0x140074CE0, 0x140071440, 0x140075930, 0x1400755F0, 0x1400753C0, 0x140070B90, 0x140075650, 0x140075460, 0x140075340 |
| `net_vector.c` | signed-magnitude scalar encoding, three-component deltas, and compressed direction encoding | 0x1401151C0, 0x1401150E0, 0x140115230 |
| `menu_labels.c` | queued text at the layout cursor or an explicitly aligned position | 0x140071640, 0x1400764B0 |
| `menu_widgets.c`, `menu_widgets.h` | the menu edit buffer: deleting the selected range and collapsing the caret/anchor onto it | 0x1400722C0 |
| `audio.c`, `audio.h` | capture ring availability/writes, per-sound buffer availability and positional sound channel allocation | 0x140069580, 0x14006A380, 0x140069FA0, 0x14007D6C0 |
| `math_integer.c` | raw-word matrix transpose and fixed-point 2D rotation | 0x14007CA00, 0x14007D0B0 |
| `collision_plane.c`, `collision_contacts.c` | segment/plane intersection and first-free persistent contact lookup | 0x140077B30, 0x140048090 |
| `collision_polygon.c` | directed line/quad and segment/triangle face tests, including aliased outputs and NaN edge rejection | 0x140077C80, 0x140078230 |
| `physics_points.c` | point masses: movement and gravity, lifetimes (removal with renumbering of bonds, vehicles and humans) | 0x1401154D0, 0x140115830 |
| `physics_solve.c` | the bond solver of a tick | 0x14001D080 |
| `physics_rotation.c` | rotation of a body over a tick (fourth-order Runge-Kutta) | 0x14012B2D0 |
| `physics_tick.c` | the physics tick: order of its stages, gravity, grid clearing, item voxels and lifetimes | 0x140116210 |
| `world_grid.c` | insertion into the spatial grid and deduplicated item queries over a voxel box | 0x140037DE0, 0x140038230 |
| `world_items.c` | tick stage: items follow their bodies; boxes and voxels they occupy; removing an item, detaching it from its parent, taking it out of a human's hand or slot | 0x1400C9D20, 0x14007F970, 0x1400CA9B0, 0x1400CA7C0 |
| `item_contacts.c`, `item_state.c`, `item.h` | item/item and item/human contacts, cash insertion/removal and valuation, inventory append, item attachment/transfer and link registration, broken block parts becoming items and returning to their origins | 0x1400CA1C0, 0x1400CA430, 0x1400CA740, 0x1400C3AB0, 0x1400C3BA0, 0x1400C3D10, 0x1400C3C90, 0x1400E38A0, 0x1400E35D0, 0x1400CDBD0, 0x1400CDFF0 |
| `item_physics.c` | item physics for a tick: expiry, held/static bodies, world contacts and settling | 0x1400CE370 |
| `world_blocks.c` | block id and gone-parts lookups in the level's layers; block parts broken loose by vehicles and humans; tick stage: humans' bones follow their bodies, capsule boxes and voxels | 0x140016870, 0x1400169B0, 0x1400B95E0 |
| `world_vehicles.c` | tick stages: vehicles follow their bodies (boxes, voxels, block parts they break off); lifetimes and removal; wheel joints (suspension, grip, axle); drivetrain (engine curve, brakes, driven wheels) | 0x1401069C0, 0x14010BE50, 0x14010D610, 0x140107ED0 |
| `vehicle_state.c`, `vehicle_state.h` | vehicle spawn and net-replication state: the first free record of the 1024-record vehicle slot table, a named entry of the 256-slot spawn-name list, and the per-type part dedup list | 0x14004DA50, 0x1400588F0, 0x14010C850 |
| `world_streets.c`, `world_streets.h` | World map ("test2") streets: street patches, railway segments, filing streets into the 64 x 64 street cells, the railway route with its stops, the race track | 0x14005F6E0, 0x1400603A0, 0x1401899F0, 0x14002A9A0, 0x14002A680 |
| `world_street_mesh.c` | the three street meshes (embankments, ground between the rails, track) and their GL upload; the Steam encrypted app ticket staged for the master handshake | 0x140188B80, 0x1401880C0 |
| `collision.c`, `collision.h` | swept-sphere collision: segment-segment, line-plane, line-triangle, sphere-triangle; sweeps against vehicle hulls and trains (faces and unbroken windows); rays against vehicles (faces, windows, wheels); a hit point's weights in a triangle; face-only sphere sweep | 0x1400D6890, 0x1400779F0, 0x140077FA0, 0x140035690, 0x140035B70, 0x14002D370, 0x140035E50, 0x140037220, 0x1400DFB70, 0x1400DF380 |
| `collision_mesh.c` | contact between two convex meshes (vehicle type 17 against items), with the original's overlapping frame tables; its parts: mesh transform, point sweep against faces, closest points of two edges, edge side test; point sweep against a placed mesh | 0x140048DA0, 0x14004A480, 0x14004A1D0, 0x14008CEB0, 0x140187410, 0x14004A130 |
| `collision_placed.c`, `collision_placed.h` | item mesh placement and capsule contacts against its grouped triangles and quads | 0x14011BF40, 0x140033BE0 |
| `world_particles.c`, `particle.h` | particles (pieces thrown off vehicles): spawning one with a random spin; the tick's flight, bounce off the level, landing sound and coming to rest in two static lists; the upload and drawing of those lists | 0x14005F150, 0x140158CD0, 0x1401259B0 |
| `human_ragdoll.c`, `human.h` | the active ragdoll: target poses of a human's joints (the look pose) and the per-tick drive | 0x1400AD030, 0x1400AD2B0 |
| `human_walk.c` | walking: the ground probe (level and near vehicles), the ground ahead (how level it is, how it rises, the vehicle stood on), the walk point's height, the walk point's move from the player's input (speed by mode, stamina, leans, the pull of a held item of type 28) | 0x1400B91E0, 0x1400AC890, 0x1400B2440, 0x1400B40B0 |
| `human_body.c` | the skeleton's joints; per tick the body's centre, mean velocities and the smoothed rotation of the pelvis | 0x1400AB7B0, 0x1400ABB10 |
| `human_feet.c` | a foot's ground bond for a tick (height, grip, the foot's turn), and the start of a jump from a planted foot | 0x1400B5460 |
| `human_legs.c` | where the feet are sent: sitting in a vehicle, lying down; the legs' states on foot (which foot steps next, landing, losing the ground, getting up); a stepping leg (where the step lands and the arc the foot follows) | 0x1400B9D90, 0x1400BA210, 0x1400BAA40, 0x1400BB6B0 |
| `human_balance.c` | how a planted leg holds the body up: the velocity and turn wanted of the body, limited, as the point the hip is sent to and the turn of the hip joint | 0x1400BBF30 |
| `human_stand.c` | the legs of a human on its feet: standing or falling, the walk point, steps, each leg's balance or swing, and the inverse kinematics that sends each foot where its leg's state says | 0x1400BCA30 |
| `human_jump.c` | the tick a jump leaves the ground: the push-off through the legs, the launch velocity and spin of every bone's body | 0x1400B78F0 |
| `human_collide.c` | a human's bones against the level's triangles, the items near it and the bones of other humans: a contact for each hit | 0x1400B2E70 |
| `human_hits.c` | a human struck by a vehicle: contacts of its bones with the hull, the harm of a hard blow, the event and score of a fatal one | 0x1400B3A80 |
| `human_health.c` | health for a tick: death, the looseness of a hurt body, recovery, bleeding and its event | 0x1400B5E70 |
| `world_blocks.c` (additions), `world.h` | the level's layers and block records as structs; a voxel's record and its other words (with links to an origin voxel followed); setting a voxel's gone-parts mask, its unknown_3008 and unknown_4808 words (the latter frees its quarter's mesh), a record's unknown_6024 flag; block event 15; creating a chunk slot and a block record | 0x140013020, 0x1400129D0, 0x140012B10, 0x140016450, 0x140016590, 0x140012DE0, 0x140012CA0, 0x140016720, 0x140017110, 0x140016E30, 0x140017260, 0x1400173C0, 0x1400516B0, 0x140010020, 0x140012490 |
| `world_bullets.c` (additions) | bullet lifetimes and removal | 0x14002CE50 |
| `human_body.c` (additions) | the bond of a joint between two bones, kept in the human's bond list | 0x140055FA0 |
| `world_streets.c` (additions) | street triangles near a box: one street's range, and every street filed in the box's cells | 0x140188720, 0x140188900 |
| `item_tick.c` | item states for a tick: type-26 lists, children following parents, lifetimes, type 27's vehicle, phones, computers, type 40, grenades, radios, type 30, first aid | 0x1400CC610 |
| `item_phone.c`, `item_carry.c`, `item_grenade.c`, `item_gun.c`, `item_text.c` | a phone's state event; items carried on the body; a grenade going off; guns (loading, firing, recoil); colored and raw item text records | 0x140051940, 0x1401380F0, 0x1400A70B0, 0x1400CF670, 0x140050F90, 0x140051170 |
| `world_bullets.c`, `bullet.h` | firing a bullet | 0x14004E8A0 |
| `world_effects.c`, `effect.h` | world effects: adding one (bullet holes, blood drops, sparks, tracers); moving them for a tick (drag, gravity, bouncing off the level, the three-point EFFECT_4 body, drops landing as blood stains, EFFECT_3 marks) | 0x14005EE40, 0x1401597F0 |
| `world_effects_draw.c` | drawing the world effects in depth order: holes, blood drops and sparks as textured quads, EFFECT_3/EFFECT_4 pieces as a lit mesh, tracers as smooth lines | 0x140125DB0 |
| `audio.c` (additions), `audio_mixer.c` | the sound record's buffer allocation and 16-bit PCM loading; the twins that start a sound or a positional sound on a channel; the per-voice resampling and interpolation mix into the channel ring; the per-emitter clearing, remixing and releasing pass (the still-unported spatializer stays resolved at its address) | 0x14007D610, 0x140069930, 0x14006A140, 0x14006A240, 0x14006B4C0, 0x14006B6F0 |
| `math_curve.c`, `math_random.c`, `text_parser.c`, `text_parser.h` | the Bernstein-basis curve point and derivative (degrees 1-3), the Mersenne Twister seed, and the embedded-text parser's prefix match, token search and 32/64-bit number reads | 0x14008EC40, 0x140187180, 0x1401872F0, 0x1400C2D50, 0x14003C6F0, 0x140091DF0, 0x140115360, 0x140115410 |
| `net_decode.c`, `net_decode.h`, `net_replication.c`, `net_replication.h` | packet decoders over the bit reader: sign-magnitude angles over a full turn, scaled fractions, adaptive base deltas, and the adaptive value reader with a no-change flag, two widths, sign-extended add, histogram byte and pointer-valued return; and the replication layer's per-peer rings and item-state stream twins | 0x14018D440, 0x140192560, 0x14018D510, 0x14018D5E0, 0x1401060F0, 0x140105AB0, 0x14010EF40, 0x14018DB20 |
| `net_rotation.c`, `net_readers.c` | quaternion packet encoders, the variable-bits and 13-bit variants, that quantize a rotation matrix's quaternion from math_quat_from_mat3 into packet integers, out[0] the index of the dropped largest component and the following slots the quantized remaining three written in the order of the original's runtime order tables (0x140301DC8 for 13 bits, 0x140301DE8 general), plus the signed-bits and optional-index readers over the bit stream | 0x140114E90, 0x140114D40, 0x140115D20, 0x140115BD0 |
| `terminal.c` | the computer item's terminal: the share of its twenty-six mission slots that is present and owned by the slot, the word copied between the raw record text and a screen line through the letter-to-slot table (raw and coloured paths), the selection list rows around the selected slot, and the snake game's keys | 0x1400C58E0, 0x1400C5610, 0x1400C5360, 0x1400C9120 |
| `world_particles.c` (addition) | one flying piece drawn from its mesh on the lit, land-mask and stencil passes, the model matrix restored afterwards | 0x140124840 |
| `net_stream_fields.c`, `net_stream_fields.h` | optional-index and signed packet-stream fields, with original return semantics and write passthrough | 0x14006C510, 0x14006C570 |
| `record_slots.c`, `record_slots.h` | first-free item tracking and replication snapshot slots | 0x1400A4560, 0x140132E00 |
| `math_random_double.c`, `math_random_double.h` | closed, half-open, open, and 53-bit random doubles with native unsigned conversions and exact constants | 0x14009DFB0, 0x14009DFD0, 0x14009DFF0, 0x14009E020 |
| `world_block_maintenance.c`, `world_block_maintenance.h` | per-voxel unknown_808 reads/writes, quarter-mesh release and block mesh invalidation | 0x140012F30, 0x140017C40, 0x140012940, 0x140017890 |
| `round_settings.c`, `round_settings.h` | round mode settings: defaults, config_round.txt load and save through the parser window, and the round length (1..60 minutes) and team damage (0..200) clamps | 0x1400EC410 |
| `round_update.c`, `round_update.h` | the round mode tick: lobby spawning, ready jump and round set-up (vehicles, desk phones, manager announcements), the running round's hourly resets, speed-ups, door opening and end, and the round-over announcements and manager choice | 0x1400F6C50 |
| `config_io.c`, `config_io.h` | the generic config-file entry helpers the mode files inline: one "key=value" line written to or read from the open config file | 0x14010E080, 0x14010E0D0 |
| `audio_voice.c`, `audio_voice.h` | the voice chat codecs: the encoder and decoder lifecycle, the per-player packet slots, and the encode/decode adapters | 0x14010E190, 0x14010E230, 0x14010E2B0, 0x14010E330 |
| `player_stocks.c`, `player_stocks.h` | a player buying their corporation's shares, capped at 10,000 | 0x1401189F0 |
| `startup.c` (addition), `startup.h` | removing a mesh index record by moving the last one into its place | 0x140184AB0 |
| `roads.c`, `roads.h` | the road records: a random road with both +0x30/+0x34 words at most 3, and queueing a road's links | 0x140130000, 0x14018C250 |
| `block_chunks.c`, `block_chunks.h` | the sparse 8 x 8 x 8 block chunk table: a block's cell, last matching record wins | 0x1400D5950 |
| `human_net_fields.c`, `human_net_fields.h` | the human state fields packed into the outgoing packet in the original's order and widths, the last transfer a tail call | 0x14010EE20 |
| `gl_proc.c`, `gl_proc.h` | the GL module's procedure resolver: the zero-handle early return, the custom hook tried first, and the GetProcAddress fallback with the handle re-read | 0x14009E190 |
| `state_forward.c`, `state_forward.h` | the unsigned short state read the original kept as a forwarding routine | 0x1400A54F0 |
| `gl_loader.c`, `gl_loader.h` | the OpenGL function loaders, one table per version: a version flag read as a dword gates a list of names, each handed to the resolver and stored in its slot (zero when the driver lacks it), plus the glClipControl loader that returns its argument when the flag is clear | 0x1400E3B90, 0x1400E3BC0, 0x1400E3EE0, 0x1400E3FD0, 0x1400E4030, 0x1400E40E0, 0x1400E4190, 0x1400E42E0, 0x1400E48D0, 0x1400E4950, 0x1400E4EB0, 0x1400E4FC0, 0x1400E5110 |
| `vehicle_hull.c`, `vehicle_hull.h` | the collision hull lists of a vehicle type: an edge appended unless present in either direction, and a face appended with its four links set to -1 | 0x14010C850, 0x14010C900 |
| `city_names.c`, `city_names.h` | the city name lists matched against four game tables: the last equal entry's index, zero for none | 0x140027690, 0x140027A60, 0x140027B40, 0x140027C20 |
| `spawn_requests.c`, `spawn_requests.h` | the queue of 1,024 spawn requests: the first free record cleared and filled | 0x14004DA50 |
| `net_slots.c`, `net_slots.h` | a peer's eight outgoing slots: the pick (first free, or the ratio test the original performs, which can only ever offer slot 0) and the claim | 0x1400A4620, 0x140007490 |
| `item_phone.c` | a phone put out of use by number, its partner cleared first and re-read for every write, as the original does | 0x1400F3D10 |
| `math_value_noise.c` | 2D value noise on a wrapping lattice, bit for bit including the smoothstep weights and the 32-bit corner hash | 0x1401305F0 |
| `math_random_direction.c` | a random point on the unit circle scaled by a random length, three draws of the noise generator | 0x1400A5510 |
| `world_blocks.c` | a tagged block value with its block-hit event and the shifted bit; the two voxels of a corporation record set or cleared and marked | 0x14000B7D0, 0x140023A20 |
| `world_vehicles.c` | a vehicle's countdown that records the removal event when it runs out | 0x14000B650 |
| `scene_queue.c`, `scene_queue.h` | the queue of 4,096 scene objects to draw: one record appended | 0x140092140 |
| `vehicle_slots.c`, `vehicle_slots.h` | a corporation's parked-vehicle slots: the first free one marked used and a vehicle made there | 0x1400F00D0 |
| `corner_flip.c` | the 4 x 12 corner table turned one step per count with the face tag along its cycle | 0x14001B5C0 |
| `item_text.c` | a row of an item's text filled from a string, padded with spaces, with a colour per cell | 0x1400C6AB0 |
| `texture_solid.c`, `texture_solid.h` | a texture record made 1 x 1 in one colour, its old pixels freed | 0x140138590 |
| `texture_upload.c` | a texture record uploaded: the bind, the four sampler words and one image call per level, freeing the level pointers when asked | 0x14014D3E0 |
| `atlas_create.c`, `atlas_create.h` | the first atlas texture: buffer of 0xFF, texture object, clamped linear filtering | 0x14006CA30 |
| `model_draw.c`, `model_draw.h` | a loaded mesh drawn at a position: the camera's model set and scaled, the matrix uniform, the vertex buffer and attribute setup, the draw, then the model reset to the identity | 0x140125270 |
| `camera.c` (fixed) | the model from the original's identity rows, the position and the untransposed rotation, and the reset the mesh draw ends with | 0x14007B990, 0x14007B6F0 |
| `gl.h` | OpenGL entry points with their real prototypes | |
| `memory.h` | access to the game state shared with `src/client/` | |
| `arith.h` | integer and conversion arithmetic as the original's instructions do it | |

The engine objects are linked into the client. Restored routines retain
their original client entry points, including helpers with no current
exported callers. `renderer_batch_vertex2f` (0x14007D230) still has no wrapper.

The rows above added on 2026-10-12/13 were compared against the installed
Steam build (`cc667f7d…`, see `scripts/client_target.py`) with the rebuilt
harness in `tools/native-compare/` (`run.py`, `mutate.py`). Earlier rows were
verified against the export build (`e9500422…`) with the earlier, lost harness;
of those, 0x1400A56B0, 0x14007A240, 0x14007B4D0, 0x14006EC40, 0x14007ABA0 and
0x1400C3BA0 have been re-checked against the installed build so far.

## Rules

1. **A routine moves here only when it is proven equal to the original.**
   `tools/native-compare/run.sh` runs the original executable's routine and the
   one here with the same inputs and compares results, resulting state and
   every OpenGL call. A port is done when that comparison is identical, and
   changing any single operation of the port makes it differ (unless the
   change is equivalent, such as `x * -2` for `-(x + x)`).
2. **Floating-point expressions keep the original's order of operations.**
   `(a + b) + c` and `a + (b + c)` round differently, and physics diverges
   from a single different bit. Names and structure are free; the arithmetic
   is not.
3. **No addresses outside the headers.** State is reached through a named
   struct or accessor declared next to its address (`renderer_batch`,
   `renderer_ui_program`). Fields whose meaning is not known yet are called
   `unknown_<offset>` and say so.
4. **OpenGL is called through `gl.h` only**, so every call has a prototype.
   Many rendering bugs in the recompiled client came from calls without one.

## How a routine is replaced

The client keeps an ABI-compatible entry point in a module named for its
purpose. Its body calls the implementation in this directory:

    void sr_math_mat3_rotate_rows(__int64 matrix, float *axis, double angle_lane)
    {
      extern void math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle);
      math_mat3_rotate_rows((float *)matrix, axis, *(float *)&angle_lane);
    }

`src/client/names.tsv` records recovered names by original address. Renames
are applied consistently to callers, prototypes, assembly, engine references
and native fixtures. `src/client/function_modules.tsv` records explicit
module ownership; `tools/cleanup/split_client_modules.py --check` validates
ownership, unique address markers, names and the CMake source list. The
original address comments remain available to native comparison fixtures.

## Build

`scripts/build.py` compiles every `*.c` in this directory and links
the objects into the client. Unlike the recompiled sources these files are
built with optimization (`-O2`); they must stay free of undefined behaviour.
`-fno-strict-aliasing` is required because the shared state is one array
viewed through structs.

## Known limits of the comparison

- Results are compared bit for bit, except that any not-a-number result
  counts as equal to any other. Which of two NaN operands a processor
  propagates depends on operand order, which the compiler chooses.
- A routine that calls routines not ported yet is compared with those
  replaced, in both programs, by the same recording stub. That proves the
  routine's own work and its calls, not what the callees do.
- The comparison runs code that computes and that calls OpenGL. It cannot yet
  run code that reads files or talks to the operating system, and OpenGL calls
  are recorded, not drawn.

The 2026-10-11 item batches are documented in `../../docs/client-itemactions-20261011.md`, `../../docs/client-iteminventory-20261011.md` and `../../docs/client-itemphysics-20261011.md`. Their wrappers are integrated into the combined executable. The existing linked rotation helper has a documented FP-status mismatch; the cash/inventory routines do not use that boundary.

The four collision helpers restored after Claude stopped, and the quiet-NaN FP-status correction in vector normalization, are documented in `../../docs/client-collisionhelpers-20261011.md`.

The four physics helpers added on 2026-10-18 are documented in
`restoration-20261018.md`. Their native comparisons also exercise the actual
client wrappers, including the float result carried in a double word.

The 2026-10-20 module split, behavior names, two additional matrix entry
points and two polygon queries are documented in `restoration-20261020.md`.

The six quaternion, relative-rotation and interpolation routines restored on
2026-10-22 live in `math_rotation.c` and `math_interpolation.c`, with typed
interfaces in `math3d.h`. Their native comparisons, overlap behavior and
client adapters are documented in `restoration-20261022.md`.

The twenty-two routines restored on 2026-11-11 (the sound pipeline, the
Bézier curve and the random seed, the embedded-text parser, the packet
decode and replication layer, and one flying particle piece) live in
`audio.c` (additions), `audio_mixer.c`, `math_curve.c`, `math_random.c`,
`text_parser.c`, `net_decode.c`, `net_replication.c` and `world_particles.c`
(addition), with typed interfaces in `text_parser.h`, `net_decode.h` and
`net_replication.h`. Their native comparisons, the malloc-boundary stubs,
the exclusion of the decoders' uninitialized-stack domains and this
machine's pre-existing one-bit `effectsdraw`/`effectsupdate` MXCSR
divergence are documented in `restoration-20261111.md`. Progress is
268 of 1,119 game routines (`python scripts/progress.py`).

The four routines restored on 2026-11-15 (the two quaternion packet
encoders, the variable-bits and 13-bit variants, and the two packet
readers) live in `net_rotation.c` and `net_readers.c`, with the shared
interface in `net_rotation.h`. Their native comparison is the `netrotation`
suite, 10,001 output lines identical to the original both as the engine
port and behind the actual client wrappers: the largest component is
selected with strict comparisons that never update the index for a NaN
operand (the original's seta/cmova after comisd), the running maximum is
MAXSD whose second operand wins on NaN, the original's runtime order tables
at 0x140301DC8 and 0x140301DE8 are mapped from the installed executable and
deterministically mutated per case to prove the port reads them, the final
order-table write does not advance the write count, and the 13-bit variant
uses the compiler-folded constant 5791.911644699011 in one multiply. The
same session verified the three matrix-copy twins,
sr_math_mat3_multiply_copy (0x140105770), sr_math_mat4_multiply_copy
(0x140105840) and sr_math_mat3_multiply_transposed_alt (0x14011C080), equal
to the existing `math3d.c` implementations with the `matcopy` suite (9,001
output lines), covering every MXCSR rounding mode plus independent DAZ/FTZ
controls, NaN/infinity/negative-zero bit patterns, and output offsets that
partially or completely overlap either input in a 128-float arena. The
mutation sets, 17 deliberate bugs across the encoder port, the readers and
`math3d.c`, are all detected. Progress is
274 of 1,119 game routines (`python scripts/progress.py`).

The four routines restored on 2026-11-15 (the terminal's mission-slot
ratio, the mapped word copy, the selection list and the snake keys) live in
`terminal.c`. Their native comparison is the `terminal` suite, 6,264 output
lines identical to the original both as the engine port and behind the
actual client wrappers: the per-item records, the text link record pool
head and the peer and local link masks are restored per case and filled
with random junk, the computer slots (which are the letter-to-slot table,
'A'..'Z' over the same words) stay in the owner table's range, the link
values in the record pool's, the owners are small enough to sometimes match
their slot or be -1, the selected slot and the snake direction stay in
their enums, and an empty terminal (all missions gone, no owners) returns
the 1.0 share of nothing. The engine port reads the computer-used counts as
the full dwords the original reads, not as bytes. The mutation sets, 8
deliberate bugs across the mission ratio, the word copy, the selection list
and the snake keys, are all detected at 500 cases. Progress is
297 of 1,119 game routines (`python scripts/progress.py`).

The two routines restored on 2026-11-19 (the monotonic milliseconds clock
and the thousands grouping of an unsigned value) live in `clock.c` and
`text_helpers.c`, with the shared interface in `clock.h` and
`text_helpers.h`. Their native comparison is the `t_clockms` and
`t_thousands` suites, outputs identical to the original both as the engine
port and behind the actual client wrappers, with the recording stub masking
group arguments to 32 bits. The mutation sets are running separately.

The six routines restored on 2026-11-16 (the generic config-file entry
helpers and the voice chat codecs) live in `config_io.c` and
`audio_voice.c`, with the shared interfaces in `config_io.h` and
`audio_voice.h`. The config entries keep the CRT fprintf tail call of the
write branch and reset the parser cursor either way; the codecs keep the
exact prototypes of the still-decompiled embedded codec and its per-player
packet records (received counts at 0x189C3BCC0, sent counts at
0x187BDE974). Build-tested on the fork's CI.
