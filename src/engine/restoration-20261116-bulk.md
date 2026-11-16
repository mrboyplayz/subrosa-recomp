# Restoration batch of 2026-11-16

Forty routines moved to engine C, progress 317 to 357 of 1,119 game
routines. Every routine has its own native comparison, identical to the
original both as the engine port and behind the client wrappers, and a
mutation set in which every kept mutation is detected. Open pull request 14
(the long-running stack) was read first: none of the addresses it touches is
in this batch.

| Original address | Engine routine | Behavior |
|---|---|---|
| 0x1400E3B90 | gl_load_clip_control | Loads glClipControl behind its flag; with the flag clear it returns the resolver it was given. |
| 0x1400E3BC0 to 0x1400E5110 (12 loaders) | gl_load_1_0 ... gl_load_3_3 | One table per GL version: the flag, read as a dword, gates the names; each result goes in its slot. |
| 0x14010C850 | vehicle_hull_add_edge | Appends an edge unless present in either direction. |
| 0x14010C900 | vehicle_hull_add_face | Appends a face, links set to -1. |
| 0x140027690, 0x140027A60, 0x140027B40, 0x140027C20 | city_match_names_a to d | Last equal entry's index per name. |
| 0x14004DA50 | spawn_request_add | First free of 1,024 requests. |
| 0x1400A4620 | net_slot_pick | First free slot, else slot 0 when its ratio is above the limit. |
| 0x140007490 | net_slot_claim | Claims the picked slot. |
| 0x1400F3D10 | item_drop_phones_of_number | Puts phones with one of two numbers out of use. |
| 0x1401305F0 | math_value_noise_2d | 2D value noise. |
| 0x1400A5510 | math_random_direction_2d | Random circle point and length. |
| 0x14000B7D0 | world_set_block_tagged | Tagged block value and its event. |
| 0x140023A20 | world_set_marked_voxel_pair | Two voxels set or cleared and marked. |
| 0x14000B650 | world_vehicle_countdown | Countdown and removal event. |
| 0x140092140 | scene_queue_add | Appends a scene record. |
| 0x1400F00D0 | vehicle_slot_spawn | Claims a parked-vehicle slot and makes a vehicle. |
| 0x14001B5C0 | corner_table_rotate | Turns the corner table and the face tag. |
| 0x1400C6AB0 | item_text_fill_row | Fills a text row. |
| 0x140138590 | texture_make_solid | 1 x 1 texture of one colour. |

## Findings worth keeping

- The slot walk in 0x1400A4620 looks like a search for the smallest ratio,
  but each step compares the running ratio with the ratio of the slot it came
  from, so it never moves. With all slots used the routine can only offer
  slot 0. The port keeps that, and says so.
- 0x1400F3D10 re-reads an item's partner field before every write, so a phone
  that is its own partner writes to item -1 after the first clear. The first
  port cached the partner and the comparison caught it.
- The GL version flags are dwords the client declared as `char`; they are
  `int` now. A byte test would miss a flag whose low byte is zero.
- Left without a caller in the executable (ported anyway, nothing runs them):
  0x140027A60, 0x140027B40, 0x140027C20, 0x14004DA50, and the GL loaders other
  than the four 0x1400A6700 calls.
- A negative count in 0x140092140 passes the original's signed check and
  writes before the table. No caller produces one and the test does not drive
  it.

```
python tools/native-compare/run.py glloader vehiclehull citynames spawnrequests netslots dropphones valuenoise randomdirection blocktagged voxelpair vehiclecountdown scenequeue vehicleslots cornerflip textrow texturesolid --out D:/nc
python tools/native-compare/run.py <same suites> --client-wrappers --out D:/nc
```

`--out` takes a short path: with the full list the build command line passes
the Windows limit otherwise.

Not verified: a gameplay launch. The quick build compiles and links.
`effectsdraw` differs on a clean checkout of master as well (one buffer-data
hash); it is unrelated to this batch.
