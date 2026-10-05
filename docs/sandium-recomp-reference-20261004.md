# Sandium knowledge for the C recompilation

Reviewed 2026-10-04 from the local `../Suitium` checkout. `../sandium` is a
Windows junction to that checkout. Reference: vanilla Windows `subrosa.exe`,
SHA256 `e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
Current target: C; Rust remains deferred. These notes supplement the existing
[native checks and discrepancies](sandium-recovery-notes.md).

The repeatable index records **63 client address candidates: 28 functions and
35 globals**, their Windows type/signature declarations, source lines, PE
sections and hashes of 28 reviewed source files. Regenerate with
`python scripts/collect_sandium_references.py`; output:
`reports/sandium-reference/client-addresses.json`. This establishes address
and declaration provenance, not ABI or behavioral equivalence. No candidates
were promoted into the verified ABI book. No Sandium source was edited.

## Reading Sandium correctly

`Sandium/Address.hpp:10` makes `DYNADDR(windows, linux)` select the first argument
on Windows. `Sandium/Addresses.cpp:94` starts the client branch; its dedicated
branch starts at line 180 and uses different addresses. All addresses below are
**RVAs**: native VA = loaded image base + RVA; IDA base is `0x140000000`.
Rebuilt C globals must refer to relocated storage, never original absolute VAs.

`Base`, `IsDedicated` and `MenuOptionsSectionID` are Sandium-owned state,
excluded from the image-global index. `ItemType::CustomData`,
`VehicleType::CustomData`, resource expansion, custom models, Lua hooks, FOV
changes and forced authentication are additions. Typedefs and source comments
remain candidates until native instructions and callers confirm them.

## Function crosswalk

Sources: `Sandium/Addresses.cpp:144`, `Sandium/Addresses.hpp:75`.
Exact proposed argument lists, including platform-specific text/list signatures,
are preserved in the JSON index. This table supplies names and call boundaries.

| Sandium name | Client RVA | Recovery use |
| --- | --- | --- |
| ClientMainFunc | 0x96440 | Main loop, input, generation/render transition |
| ResetGameFunc | 0x127910 | Generation, spawning and world reset |
| SetupItemTypesFunc | 0x1402C0 | Item defaults and native type count |
| SetupVehicleTypesFunc | 0x145BB0 | Vehicle defaults |
| CreateItemFunc | 0x54130 | Type, position, velocity, orientation |
| AttachItemFunc | 0xE35D0 | Item, parent item, human, inventory slot |
| CreateVehicleFunc | 0x5BCA0 | Type, position, velocity, orientation, color |
| HumanLimbIKFunc | 0xB1450 | Limb solver; mixed float/integer/stack arguments |
| LoadCMOFunc | 0xE9A60 | Render-resource ID is separate from item-type ID |
| BindItemModelFunc | 0x13FCD0 | Item-type-to-model association |
| LoadTextureFunc | 0xEDED0 | Mipmaps, wrapping and filters |
| RegisterSoundPCMFunc | 0x69930 | Mono signed-16 PCM registration |
| PlayPositionedSoundFunc | 0x69FA0 | Sound, position, volume, pitch, loop |
| LineIntersectLevelFunc | 0xDC050 | Raycast with shared result storage |
| SurfaceMaterialLookupFunc | 0x12DE0 | Area/block coordinates plus face slot |
| CreateEventBulletHitFunc | 0x512D0 | Native event-ring writer |
| ConnectMasterServerFunc | 0xA3F30 | Native Boolean result despite Sandium's void typedef |
| DrawHUDFunc | 0x86000 | Windows HUD boundary |
| CSDrawAtlasEntryFunc | 0x6D300 | Atlas/entry, rectangle, flags and RGBA |
| CSDrawTextFunc | 0x6D930 | Windows variadic text ABI with float arguments |
| DrawMenuFunc | 0x72450 | Menu dispatcher |
| DrawMenuButtonFunc | 0x6F1F0 | Practice button boundary |
| DrawMenuButtonSelectableFunc | 0x6F5A0 | Selection pointer and comparison value |
| DrawMenuListFunc | 0x6F8D0 | Platform-specific signature; verify stack arguments |
| DrawMenuSliderFunc | 0x71440 | Integer pointer, bounds and extra argument |
| DrawMenuTextBoxFunc | 0x70060 | Integer entry |
| DrawMenuTextEntryFunc | 0x70200 | String buffer and maximum length |
| DrawMenuToggleFunc | 0x71910 | Integer-backed toggle |

`hooks/ResetGame.hpp:22` wraps the native reset with pre/post Lua hooks. It does
not implement generation. Sandium proposes a no-argument void reset; confirm
native live-ins before replacing the decompiler's three inferred arguments.
`Tools/boxing_port_notes.md` has physics names, but explicitly unfinished Windows
offsets. Its Linux IK signature differs from the current Windows declaration.

## Layout candidates measured from current headers

Compiled a MinGW Win64 layout probe instead of relying on comments:
`reports/sandium-reference/layout-probe.cpp` and `layout-probe.txt`.
These sizes/offsets establish **Sandium's declarations**, not full native parity.

| Declaration | Declared bytes | Important fields / table candidate |
| --- | --- | --- |
| CBoolean | 4 | Four bool bytes; cannot replace with one C bool |
| CVector3 | 12 | Three contiguous floats |
| COrientation | 36 | right/up/back, three contiguous vec3 values |
| Bone | 312 | position +4; orientation +52 |
| InventorySlot | 40 | Place count and two item IDs |
| Human | 28,664 | 256 entries at RVA 0x4329E308 |
| Item | 7,040 | 1,024 entries at RVA 0x42BBB180 |
| Vehicle | 20,840 | 512 entries at RVA 0x1F2D9200 |
| ItemType | 5,072 | 46 native entries at 0x42A7E180; 64 is mod expansion |
| VehicleType | 99,776 | 17 entries at RVA 0x52E9A680 |
| LineIntersectResult | 112 | Shared result at RVA 0x11A84880 |

| Record | Useful declared byte offsets |
| --- | --- |
| Human | position 128; viewYaw/Pitch 152/156; inputFlags 532; bones 544; inventorySlots 27,344; health 27,984; headHealth 28,004; modelID 28,568 |
| Item | typeID 20; rigidBodyID 88; position 92; velocity 116; orientation 164; ammoCount 324 |
| Vehicle | position 44; orientation 68; velocity 108; numberOfSeats 20,700 |
| ItemType | price 4; mass 8; isGun 16; name 48; right/left hand offsets 128/140; boundsCenter 260; linkableMap 284; gunHoldPosition 5,012 |
| VehicleType | name 20; mass 56 |
| LineIntersectResult | position 0; normal 12; fraction 24; areaID 84; blockX/Y/Z 88/92/96; materialID 100; materialScratch 104; faceMaterialSlot 108 |

Sources: `structs/Common.hpp`, `Human.hpp`, `Item.hpp`, `Vehicle.hpp`,
`ItemType.hpp`, `VehicleType.hpp`, `LineIntersectResult.hpp`.
The native item-loader fixtures independently establish the 5,072-byte stride.
Other fields need comparisons at actual native read/write sites. Address-taking
vector/matrix arguments need complete contiguous storage; separate decompiler
locals do not preserve native stack adjacency.

**Atlas discrepancy:** Sandium declares CSTexture as **49,166 bytes**, whereas
the native stride is **196,664 bytes**: width/height 0/4, GL ID 32, upload pointer
40, count 48, and 4,096 48-byte entries from 56. The probe reproduces Sandium's
wrong total. Use the independently recovered native stride for atlas indexing.

## Rendering, shader capture and model resources

Sources: `Addresses.hpp:50`, `Addresses.cpp:121`, `ItemModels.cpp:150`,
`ShaderLights.cpp:17`, `api/GLUniforms.cpp:59`.

| Global / routine | Client RVA | Interpretation from Sandium |
| --- | --- | --- |
| ModelResourceCount | 0x43EBB0C0 | Native mesh-resource allocator count |
| ModelTextureResources | 0x43E977C4 | Texture mappings for first 1,024 model resources |
| ItemModelResources | 0x43EBB6C4 | Item type to complete model resource |
| Per-type skin table | 0x43EBF580 | Item renderer skin lookup |
| LevelTextureCount | 0x64CFF560 | Material-name catalog count |
| LevelTextureNames | 0x64CFFCF8 | 184-byte entries beginning with a name |
| GL resolver | 0xE42E0 | Stored entry points populated before late injection |
| glShaderSource slot | 0x4042D8 | Exact slot identified by ShaderLights |
| glCompileShader slot | 0x4042C8 | Exact slot identified by ShaderLights |

Sandium distinguishes the 8,192-entry mesh pool from the first 1,024 resources
with texture mappings. `ItemModels.cpp` warns that a nonnegative LoadCMO item-type
argument also copies into two fixed 64-entry arrays in ItemType; large meshes
can overwrite collision fields. It uses itemTypeID=-1 for a standalone upload.
That workaround is mod behavior; separate native copy/upload paths are useful
recovery targets.

It identifies vanilla textured-item gates: types through 45, mask
`0x200800002000`, instructions near RVAs 0x223FB/0x2248B/0x22846. Its widened
gates for custom types must not become vanilla behavior. LoadTexture's third
argument enables the mip chain; the mod skin loader uses repeat wrapping,
linear magnification and mipmapped minification.

The renderer uses shader matrices. Fixed-function GL matrices do not describe
its camera. Sandium captures uniforms **per program**, keyed by program and
location: `modelviewprojectionmatrix`, `viewposition`, `viewmatrix`,
`projectionmatrix`, `atmoconstant`. World, reflection and shadow programs can
upload different cameras using identical uniform names. `BestProgram()` at
`api/GLUniforms.cpp:612` chooses a program with MVP and view position; this is
an overlay heuristic, not a native pass-selection rule.

FOV scaling and ShaderLights' injected GLSL are modifications. Preserve original
shader extraction for parity. Capture each pass's own matrices, samplers,
attribute constants, framebuffer attachments and buffers for diagnosis.
The scanner's memory-page restrictions are injection mechanics; the recomp
should use typed GL dispatch directly.

## Camera, menu and input

`NativeFreecam.cpp:26` maps the giant DWORD array using
`RVA = 0x404A6C + 4 * index`.

| DWORD index | Sandium interpretation |
| --- | --- |
| 19065870 | Camera override flag |
| 19065878 | Selected camera slot |
| 284021982 | Camera target ID |
| 284024388 | Active camera position/angles |
| 284024395 | Third-person camera, seven-float slot |
| 284024765 | Current 512-byte SDL key state |
| 283785913 | Local chat buffer |

Named globals: IsInGame 0x43EBFAA0, MenuTypeID 0x43EBFAA4, GamePaused
0x43EBFAA8, SDLWindowPtr 0x20FC47C8, menu position/size
0x10F610D8..0x10F610E4, menu key 0x10F610F4.
`CSKeyboard.hpp` declares 115 keys; `NativeFreecam.cpp:51` describes a separate
512-byte SDL state. Do not assume the smaller declaration covers every input
access. `LocalHuman.hpp` chooses the active human nearest the captured camera,
with first-active fallback; this also is a mod heuristic.

## Collision, events, audio and skeletal clues

`NativeBloodEvents.cpp` treats the event ring as 65,536 128-byte records:
type +0, position +8, hitType +0x24, 16-bit cursor wrap. Table/cursor RVAs:
0x473DE460/0x49C1DC64. Its 512-event backlog cutoff and blood classification
are mod policy. Saving/restoring LineIntersectResult around its raycast is
useful evidence that the raycast writes shared state.

`Footsteps.cpp:284` identifies loose city objects at 0x6796F380, stride 84,
and model data at 0x675FE780, stride 9,240. Face count +0xC08, face records
+0xC0C, stride 24 are candidates for collision comparison. Sound IDs from 4,000
and material-dependent footstep policy are additions. Native PCM register/record
checks are in the earlier notes; positioned-sound behavior still needs parity.

`BrokenBones.cpp:65` describes a distinct **244-byte joint record**, not the
312-byte Bone declaration: 16 records per human spawn, candidate strength
+0x70, value 0.00390625. Its scanner is heuristic and strength edits alter
gameplay. It maps head to bone 3, torso to 0..2, arms to 4..6/7..9 and legs to
10..12/13..15. Footsteps uses foot bones 12/15. Verify native spawn/IK accesses
before naming all fields.

`Tools/cmc_notes.md` identifies CMod version 2, 16 pivots, 24-byte vertices and
12-byte normals in one sample, but marks its large per-part region and bone
names unfinished. `PaperdollGeometry.hpp` helps mesh exploration; neither
establishes complete CMC parity.

`Tools/cs_auth_re_notes.md` covers the H/I master exchange; the earlier notes
record native state-machine comparisons. Custom endpoints, dummy tickets and
forced status in `Hotfixes.cpp` are outside vanilla recovery, as are its train
collision changes and allowance for additional menu IDs.

## Application to the current Practice failure

1. Trace generation separately from the first world render. ResetGame's name
   locates generation; the last displayed label need not locate the fault.
2. Verify complete native-sized vector/matrix workspaces at spawn and physics
   calls, using these layout candidates as leads.
3. Compare state per shader program. Preserve original resource limits,
   material tables and shader code.
4. Keep atlas/keyboard discrepancies explicit; do not bulk-copy Sandium
   padding, typedefs or expanded tables into C.

Current observation: synchronous tracing locates the crash in
`sub_1400D2B90(3)`, called by `sub_1400D22E0(1)` from `sub_140123190`, at a
terrain draw with program 24, 361 vertices and 1,944 indices. **472 preceding
wrapped draws completed** in `reports/client-world-draws-20261004`.
The original and C build have identical captured vertex/index/mask bytes and
identical queried state immediately before the draw: all four active uniforms,
framebuffer attachments, texture filters and disabled attribute constants.
Captures in `reports/client-reference-shadow-inputs-20261004` and
`reports/client-shadow-inputs-20261004` deliberately stop before drawing.
This narrows the investigation but does not fix it. Prior driver state, shader
sources, object storage and unqueried context state still need comparison.
Practice remains unplayable; remaining assembly entries still need C ports.
