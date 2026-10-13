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
| `renderer.c` | 2D drawing: the vertex batch behind lines and shapes, textured and flat rectangles, atlas sprites | 0x14007D420, 0x14007D230, 0x14007D520, 0x14007D320, 0x14006E0D0, 0x14006E2D0, 0x14006CFF0, 0x14006D660, 0x14006D300 |
| `camera.c` | window letterbox, viewport and scissor from canvas rectangles, 2D/orthographic/perspective setup, view and model matrices and their products | 0x14006C780, 0x14007BB00, 0x14007A2C0, 0x14007A570, 0x14007BE20, 0x14007B990, 0x14007B6F0, 0x14007B7E0 |
| `math3d.c` | vector normalize and rotation, angle difference, triangle normal, point-to-segment distance, vector-matrix and matrix products, orthographic matrix, rotation of a basis about an axis | 0x14007A240, 0x14007B4D0, 0x14000B5F0, 0x14006EC40, 0x14007ABA0, 0x14007B0F0, 0x140079D60, 0x14007A010, 0x14007AE70, 0x14007A0E0, 0x140079F00, 0x14007B2A0, quaternion product 0x140105930 |
| `text.c` | text drawing and measuring | 0x14006D930, 0x14006DB90, 0x14006E530, 0x14006F060 |
| `physics.c`, `physics_bonds.c` | joint preparation, point and joint impulse kernels, bond expiry and removal, contacts against the level and between two bodies | 0x14001C780, 0x14001CBB0, 0x14001BF70, 0x14001FB90, 0x14007F370, 0x140005160, 0x1400052C0 |
| `physics_points.c` | point masses: movement and gravity, lifetimes (removal with renumbering of bonds, vehicles and humans) | 0x1401154D0, 0x140115830 |
| `physics_solve.c` | the bond solver of a tick | 0x14001D080 |
| `physics_rotation.c` | rotation of a body over a tick (fourth-order Runge-Kutta) | 0x14012B2D0 |
| `physics_tick.c` | the physics tick: order of its stages, gravity, grid clearing, item voxels and lifetimes | 0x140116210 |
| `world_grid.c` | insertion into the spatial grid and deduplicated item queries over a voxel box | 0x140037DE0, 0x140038230 |
| `world_items.c` | tick stage: items follow their bodies; boxes and voxels they occupy; removing an item, detaching it from its parent, taking it out of a human's hand or slot | 0x1400C9D20, 0x14007F970, 0x1400CA9B0, 0x1400CA7C0 |
| `item_contacts.c`, `item_state.c`, `item.h` | item/item and item/human contacts, cash insertion/removal and valuation, inventory append, item attachment/transfer and link registration, broken block parts becoming items and returning to their origins | 0x1400CA1C0, 0x1400CA430, 0x1400CA740, 0x1400C3AB0, 0x1400C3BA0, 0x1400C3D10, 0x1400C3C90, 0x1400E38A0, 0x1400E35D0, 0x1400CDBD0, 0x1400CDFF0 |
| `item_physics.c` | item physics for a tick: expiry, held/static bodies, world contacts and settling | 0x1400CE370 |
| `item_tick.c`, `items/` | the item update of a tick: walkie-talkie lists, worn items following the holder's chest, attached items following their parents, lifetimes, then each type's work, one file per type: `gun.c` (every gun: trigger, chambering, the bullet, recoil), `phone.c` (Cell Phone, Pay Phone), `walkie_talkie.c`, `key.c`, `computer.c` (states, cipher screen), `computer_snake.c` (SNAKE.EXE), `briefcase.c` (with the cash inside), `grenade.c` (fuse and blast), `bandage.c`, `burger.c`, `arcade.c`; `items/items.h` names every item type | 0x1400CC610, 0x1401380F0, 0x1400CF670, 0x1400A70B0, 0x1400C5750, 0x1400C9820 |
| `bullets.c`, `bullets.h` | firing a bullet: its record and the frame it is drawn with | 0x14004E8A0 |
| `events.c`, `events.h` | events the game records for its clients: the item-info event | 0x140051940 |
| `world_blocks.c` | block id and gone-parts lookups in the level's layers; block parts broken loose by vehicles and humans; tick stage: humans' bones follow their bodies, capsule boxes and voxels | 0x140016870, 0x1400169B0, 0x1400B95E0 |
| `world_vehicles.c` | tick stages: vehicles follow their bodies (boxes, voxels, block parts they break off); lifetimes and removal; wheel joints (suspension, grip, axle); drivetrain (engine curve, brakes, driven wheels) | 0x1401069C0, 0x14010BE50, 0x14010D610, 0x140107ED0 |
| `world_streets.c`, `world_streets.h` | World map ("test2") streets: street patches, railway segments, filing streets into the 64 x 64 street cells, the railway route with its stops, the race track | 0x14005F6E0, 0x1400603A0, 0x1401899F0, 0x14002A9A0, 0x14002A680 |
| `world_street_mesh.c` | the three street meshes (embankments, ground between the rails, track) and their GL upload | 0x140188B80 |
| `collision.c`, `collision.h` | swept-sphere collision: segment-segment, line-plane, line-triangle, sphere-triangle; sweeps against vehicle hulls and trains (faces and unbroken windows); rays against vehicles (faces, windows, wheels); a hit point's weights in a triangle; face-only sphere sweep | 0x1400D6890, 0x1400779F0, 0x140077FA0, 0x140035690, 0x140035B70, 0x14002D370, 0x140035E50, 0x140037220, 0x1400DFB70, 0x1400DF380 |
| `collision_mesh.c` | contact between two convex meshes (vehicle type 17 against items), with the original's overlapping frame tables; its parts: mesh transform, point sweep against faces, closest points of two edges, edge side test; point sweep against a placed mesh | 0x140048DA0, 0x14004A480, 0x14004A1D0, 0x14008CEB0, 0x140187410, 0x14004A130 |
| `collision_placed.c`, `collision_placed.h` | item mesh placement and capsule contacts against its grouped triangles and quads | 0x14011BF40, 0x140033BE0 |
| `world_particles.c`, `particle.h` | particles (pieces thrown off vehicles): spawning one with a random spin; the tick's flight, bounce off the level, landing sound and coming to rest in two static lists; the upload and drawing of those lists | 0x14005F150, 0x140158CD0, 0x1401259B0 |
| `human_ragdoll.c`, `human.h` | the active ragdoll: target poses of a human's joints (so far the look pose; the per-tick drive 0x1400AD2B0 is next) | 0x1400AD030 |
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
| `vehicle_tick.c`, `vehicle.h` | the vehicle stage of a tick, over all vehicles: crash noise and damage from sudden changes of velocity, drag (stronger under water), then per vehicle its controls, a train's engine and timetable of stops, each wheel (how it hangs, skid, turn), hull corners against the level (breaking block parts), the swivelling part of type 17, hull against items, hull corners against other vehicles; breaking a part off a block | 0x140108930, 0x14000B7D0 |
| `vehicle_controls.c`, `vehicle_damage.c`, `event_sound.c` | a car's controls (pedals, clutch, gear stick and automatic gearbox, gear ratios, the turn of both front wheels); damage to a vehicle's health and the destroyed event; the sound event | 0x14010AA70, 0x14000B650, 0x1400515E0 |
| `vehicle_helicopter.c` | a helicopter: rotor run-up with a pilot aboard, the bond that levels the rotor, drag on the body, and sixteen blade elements whose lift (collective and cyclic) and drag push the rotor's body | 0x14010AF90 |
| `vehicle_train.c` | a train car: its bogies' swivel bonds, wheel places against the rails' triangles, the rail street it is on; a street's triangles by range | 0x14010C110, 0x1401885C0 |
| `vehicle_wheels.c`, `collision_wheel.c` | a wheel against the ground (two discs, one at each end of its axle, against the level and the road triangles near it); a disc against one triangle and a list of triangles; an edge through a plane | 0x14010D0D0, 0x14003F0B0, 0x14003D830, 0x140077B30 |
| `collision_hull_ray.c` | a ray against a vehicle's hull mesh | 0x1400E21F0 |
| `vehicle_spawn.c`, `physics_create.c`, `physics_create.h` | making a vehicle of a type (hull, wheel, rotor and bogie bodies with their bonds, seats, the created event); making a body; making the rotation and point bonds that hold two bodies together | 0x14005BCA0, 0x14005CF80, 0x14004E5B0, 0x14004E430 |
| `traffic_route.c`, `traffic.h` | traffic cars: the route search over the road network's nodes, planning a car's route with its turns at each crossing, the speed a car may keep behind the cars ahead of it on a street, listing a street's cars, drawing a random street | 0x14012C1F0, 0x140008E40, 0x140008BB0, 0x14018C250, 0x140130000, 0x140009340 (building the network from the streets) |
| `traffic_car.c` | traffic cars: how one drives for a tick (keeping and changing lane, slowing for the end of the street, the lights and the traffic ahead, the curve over a crossing, a new route when the old one runs out) | 0x140009E30 |
| `traffic_tick.c` | traffic cars: the traffic stage of the tick (crossing lights, driving the bots' cars, making and dropping the vehicles as players come and go, moving a car without a vehicle, working the controls of one with a vehicle) and filing the cars on the streets | 0x14018A3E0, 0x14018B680 |
| `traffic_spawn.c` | traffic cars: making one on a street, filling the city with them, and a bot player driving a vehicle that is one | 0x14012CEB0, 0x14012E960, 0x140009A00 |
| `vehicle_type_build.c` | vehicle types: adding an edge, a part and a wheel while a type is put together | 0x14010C850, 0x14010C900, 0x14010CAC0 |
| `world_vehicles.c`, `vehicle_train.c`, `human_ragdoll.c` (additions 2026-10-13) | removing a vehicle at once; a vehicle's turning from its points; a train at every train stop; a random direction in a plane | 0x14007FE00, 0x1400A48D0, 0x140061950, 0x1400A5510 |
| `collision_wheel_level.c`, `collision_wheel_blocks.c`, `collision_wheel_level.h` | a wheel against the level: the terrain under it gathered as a mesh with shared corners, the wheel against such a mesh, against a cube block and a block shape in a voxel, against a whole block layer (both shape entries of every voxel its box covers), and the test that puts terrain and layers together | 0x14003DE80, 0x1400D05B0, 0x14003DAE0, 0x14003C760, 0x14003E100, 0x14003E4B0 |
| `net_transport.c`, `net_transport.h` | UDP socket lifecycle, byte transfer, UDP/Steam send and receive, 1,024-byte fragmentation and 64-slot reassembly | 0x14008EAD0, 0x14008EB80, 0x1400805E0, 0x14015AFD0, 0x140130350, 0x14011BD70, 0x14011C760 |

Additional computer routines restored on 2026-10-12:

| File | Contents | Original routines |
| --- | --- | --- |
| `disk.c`, `disk.h` | resolving a computer drive and appending an in-memory disk file | 0x14004C960, 0x140080690 |
| `items/computer.c` | pending disk copy/list jobs and the mission application's per-tick state machine | 0x1400C3ED0, 0x1400C8500 |
| `items/computer_mission.c` | intel/project menu, document status view, upload listing/progress, and padded screen rows | 0x1400C7890, 0x1400C7FC0, 0x1400C86D0, 0x1400C6AB0 |
| `items/computer_path.c` | formatting the current drive and directory path | 0x1400C6B30 |
| `bot.c`, `bot.h`, `city.h` | bots: picking the next street at an intersection (toward the target intersection, never back the way it came), planning a whole route of up to 32 waypoints; the player's waypoint list; city road tables | 0x1400090C0, 0x1400096B0 |
| `player.c`, `player.h` | players: taking a free slot and setting up a new player (random face and hair), tidying a joining player's name, removing one (corporation lists, managed corporations, saving to the account, letting its human go); Player and Account records after RosaServer | 0x14005CCF0, 0x1400802F0, 0x140091E60 |
| `player_input.c` | the local player's keys and mouse buttons as actions: inventory keys (R, E, Q, 1-5, Shift for the hand), the left-click primary input; queueing inventory and chat actions; keys typed on a computer (letters, symbols with Shift, Ctrl, Enter, Backspace, arrows) | 0x14009EA20, 0x140116A40, 0x140116B00, 0x1400A1640 |
| `stocks.c`, `stocks.h` | corporation stocks and team money: a player buying shares (up to 10000) and selling them (price less what active missions drew beyond what the stocks paid in, 95% or 98%), a team's money shared out into its players' corporate ratings when the manager goes; corporation missions in `corporation.h` | 0x1401189F0, 0x14011AF80, 0x140194C10 |
| `player_team.c` | a player changing team (a manager leaving gives up the corporation, the team's suit and tie, bought suit colours kept) and taking back the damage done to a teammate | 0x140138430, 0x14011B7F0 |
| `event_player.c` | events 7 and 8 for the clients: a player's state and appearance packed into bit fields, and its money, stocks and phone number; event 2, a message (63 characters at most) | 0x140051DC0, 0x140051F50, 0x140051480 |
| `player_chat.c` | what a player says: to everyone while restarting or without a living human, otherwise through the human, a phone connected both ways in the first hand and every other walkie-talkie on the channel of one in hand | 0x1401164B0 |
| `player_inventory.c`, `saved_cars.h` | what a player keeps of their human's inventory between humans (guns with magazine and chambered round, cash, car keys: in world games the car itself is saved and made again, otherwise teams 0 to 2 get a new car from their corporation's parking), the local player's mute list, a corporation making a car on a free parking place | 0x140117340, 0x140117020, 0x140117820, 0x1400F00D0 |
| `car_shop.c` | a player buying a car at a car shop: made at the shop's spawn point (stepping back 4 units per sale, 8 places), the key into the first free body slot, the price paid, the car off the shop list; RosaServer Building fields (spawnRot, shop cars, sales) | 0x1400EFD20 |

Verification and the corrected composed item-tick fixture are documented in `../../docs/client-computerjobs-20261012.md`.


Mission screen comparisons are documented in `../../docs/client-missionscreens-20261012.md`.

Network transport and drive-path proof: `../../docs/client-networktransport-20261012.md`.

Engine replication restored on 2026-10-12 (direct engine comparisons; client integration pending):

| File | Contents | Original routines |
| --- | --- | --- |
| `net_replication.c`, `net_replication.h` | angle, position/component delta codecs, packed quaternion rotation, item spawn and item snapshot/interpolation updates | 0x14018D440, 0x14018D510, 0x14018D5E0, 0x140191F90, 0x14018D6D0, 0x14018DB20 |

Evidence: `../../docs/engine-network-replication-20261012.md`.
