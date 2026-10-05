# Native audio and CMO findings (0.38f)

Binary SHA-256: `e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`

## Positional audio

- `0x140069630` opens the SDL output at 48 kHz, float stereo, 1024 frames and
  starts the native mixing thread.
- `0x140069A00` loads `default-48000.mhr`. This is the HRTF data used by the
  game; native 3D audio is not plain left/right panning.
- `0x140069DE0` loads WAV resources and converts them to 48 kHz mono float.
- `0x140069930` registers caller-provided signed 16-bit mono PCM as a sound
  resource: `(soundID, byteLength, samples, referenceDistance)`.
- `0x140069FA0` allocates one of 64 native sources:
  `(soundID, position, volume, pitch, loop)`.
- `0x14006B4C0` reads/resamples the mono resource into the source ring buffer.
- `0x14006A5F0` computes listener-relative distance, elevation and azimuth,
  selects/interpolates the MHR filters and convolves the source into stereo.
- The source position fields are at dword offsets `606302..606304` within a
  source record. Source stride is `278720` dwords; active and gain are at
  offsets `327697` and `327699`.

Sandium's radio now decodes MP3 to 48 kHz signed 16-bit mono, registers resource
4095, and plays it through these native functions. It updates the native source
from the vehicle transform and applies the requested four-unit cutoff while the
source timeline continues.

## CMO loader

- Native loader: `0x1400E9A60(modelResourceID, itemTypeID, name)`. Passing
  `-1` as the item type loads a standalone model; passing an item ID also
  writes the parsed mesh into that item definition before upload.
- The nonnegative-item path copies into two fixed arrays embedded in each
  5,072-byte `ItemType`: 64 positions at `+0x600` and 64 face records at
  `+0x908`. It performs no bounds checks. Loading the 1,189-vertex,
  1,678-face revolver through this path overwrote the collision count/pointer
  at `+0xF08/+0xF10` and caused the spawn crash at `subrosa+0xC9FD2`.
- Detailed custom meshes must therefore use standalone mode. This does not
  impose the 64/64 limit: the complete mesh is uploaded to the 8,192-entry
  renderer resource pool while the cloned base item retains its native
  collision representation.
- Path is always `data/model/<name>.cmo`; callers pass a base name, not a path.
- Magic is `CMod`; versions 1 through 3 are accepted.
- Version 3 vertex: `float position[3]`, `float uv[2]`, `u32 extra` (24 bytes).
- Face: `u32 count`, `u32 indices[count]`, `u32 flags`, and, for version 2+, a
  second `u32` field. The file ends with an additional `u32` count followed by
  that many `u32` values.
- `0x14013FCD0(itemTypeID, modelResourceID)` builds/uploads the item type's
  render mesh into the selected model resource. CMO does not contain a texture
  filename; PNG loading and texture resource assignment are separate.
- Model resources are not limited to the 46 vanilla item types. Mesh records
  use a 3,632-byte stride in an 8,192-entry pool. The first 1,024 model IDs map
  to dedicated texture resources through `0x183E977C4`; the next model ID is
  held at `0x183EBB0C0`.
- The renderer resolves an item's model through the 256-entry lookup at
  `0x183EBB6C4[itemTypeID]`. `ItemType:SetModel` now updates this lookup after
  standalone upload, which gives expanded IDs their own high-detail resource
  instead of inheriting a vanilla weapon model.
- Native PNG loading at `0x1400EDED0` takes eight arguments: texture resource,
  path, mipmap flag, wrap S/T, min/mag filters, and a reserved zero.
- The boombox and revolver files were structurally valid, but their signed mesh
  volumes had the opposite sign from shipped models. Their OBJ face winding was
  reversed relative to Sub Rosa, so native back-face culling treated the model
  exterior as the inside. `Tools/obj_to_cmo.py` now reverses OBJ triangles.
- The revolver CMO is generated at `--scale 0.125`, producing a 0.285-unit
  length versus 0.208 for the shipped 9mm model. Its winding is reversed during
  conversion to match Sub Rosa's native culling convention.

## Item skin pipeline (black-gun root cause, 2026-09-20 late)

- `0x183EBF580[type]` (GPT's "perTypeColor") is the **per-item-type texture
  resource table**. The vanilla loader (`0x1400E7C40`) sprintfs
  `data/item/%s`, then `LoadTextureFunc(table[type], path, ...)`. The item
  renderer (`sub_1400212E0`) samples it for the held/world item skin.
- The renderer gates the table on `cmp ecx, 0x2D` (types > 45 skip it) plus a
  hard-coded textured-type bitmask `mov r8, 0x200800002000` at rva 0x223FB and
  0x22846. Types past 45 fall through to a black default — the "black gun".
- `ItemModels::Set` now patches the bound (byte at 0x2248D: 0x2D -> 0x3F),
  ORs bit `1 << itemTypeID` into both mask immediates, and writes
  `table[type] = textureResource` after loading the skin.
- `LoadTextureFunc` only builds/uploads the GL texture when its mipmap arg is
  nonzero (gates `0x14009A370`); vanilla always passes 1. Passing 0 leaves the
  GL name empty -> black. Vanilla args: (id, path, 1, REPEAT, REPEAT, LINEAR,
  LINEAR_MIPMAP_NEAREST, 0).
- The native PNG decoder only handles **RGBA (colortype 6)** files reliably;
  an RGB (colortype 2) PNG decodes to a dark smear. Re-encode custom skins as
  plain 8-bit RGBA.
- `0x43E9B0C0` is a **GL buffer name pair table** (VBO/IBO per resource id,
  stride 8, `glBindBuffer(0x8892/0x8893, ...)`), NOT a texture table; and
  `0x43E977C4` is the model -> vertex-resource table. GPT's labels were wrong.
- Texture records: stride 0xB0 at `0x43F7CC00`; +0x2C = pre-created GL texture
  name (resource_id + 2, assigned at init for all 1024).
- Shipped CMO winding: all shipped models have negative signed volume; the
  converter's reversed winding matches. Muzzle convention: +Z (9mm reference).

## Revolver right-hand hold + dedicated-server port plan (2026-09-20 night)

### Right-hand hold
- The hold code reads `ItemType.rightHandOffset` (offset 0x80, layout
  confirmed) generically for ANY type — readers at 0xAC5C5, 0xAF784, 0xB099B,
  0xB2B29, 0xB4AE7, 0xB66F1 (no type gate). The offset behaves like a
  hand->item shift: negative z slid the gun BACK (user-confirmed), so the
  shipped value is now (0, +0.0571, +0.1057).
- Live tuning WITHOUT rebuilds: chat command `grip <x> <y> <z>` sets
  ItemTypes[46].rightHandOffset immediately and persists to sandium_grip.txt
  (re-applied on every launch). Delete the file to fall back to defaults.
- CBoolean is 4 bytes (not 1) — corrected field offsets: handCount@124,
  rightHandOffset@128, leftHandOffset@140, primaryGripStiffness@176,
  primaryGripRotation@188, secondaryGripStiffness@192,
  secondaryGripRotation@204, name@48, gunHoldPosition@4874 (runtime layout,
  stride 5072). The vanilla 9mm is item type 11; magnum is 5.

### Dedicated-server port (SCOPED, not started)
- subrosadicated.exe: image base 0x140000000, .text 0x1000 (0xF192C bytes),
  state section RVA 0x104000 (vsz 0x5A9D4660 — room for an expanded table,
  e.g. at 0x60000000 like the client's 0x75000000).
- Server ItemType table = base + 0x501220C0 (confirmed two ways: existing
  DYNADDR registration + imul-0x13D0 stride sites reference 0x501220C8/F0).
- Only 7 imul*5072 stride sites in server .text (client had 1215 table refs);
  the server relocation scan should enumerate all refs into
  [0x501220C0 .. +46*5072] (base+disp AND rip-relative), patch them to the
  expanded allocation, then register it and drop the IsDedicated throw in
  ItemModels::Set. GPU/texture loading has no meaning server-side; CMO load
  only matters if the server needs hit geometry (verify — shots already
  register in MP, so likely client-authoritative).
- The VPS runs the LINUX dedicated binary — needs its own scan (DYNADDR
  linux slots exist for some addresses already).

### Linux/VPS dedicated port (completed 2026-09-21)

- Exact deployed ELF SHA-256: `e8033e35d004cfdcf3829d6ee45d96bb06f05a27390c4f4ac51ed587de850155`
  (the live join-patched build).
- Linux ItemType table: `base+0x5A60D7C0`; native setup routine:
  `base+0x72CE0`. A Capstone/pyelftools scan found 659 RIP-relative references
  into the vanilla 46-entry range.
- Relocation is unnecessary on Linux: the extension
  `[base+0x5A646720, base+0x5A65CBC0)` needed for entries 46-63 is unused BSS,
  has no decoded code references, and remains before the next known server
  allocation. The native table can safely grow in place.
- RosaServer commit `f3354fd` hooks the native setup routine and recreates
  type 46 after every setup by cloning Magnum gameplay/collision data, setting
  six rounds, and copying the 9mm pose fields with the tuned right-hand offset.
  The server intentionally does not load CMO/PNG resources because it has no
  renderer; those remain client-side while both peers share item ID 46.
- RosaServer now exposes all 64 wire-valid item types and provides
  `itemTypes.register(name, baseType)` for slots 47-63.
- Deployed library SHA-256:
  `bfe96646f75b699383dda510b61e9be5ef9e557364a540f973d69173cb3f9994`.
  Rollback copy: `/opt/subrosa/librosaserver.so.bak-cmo-item64-20260921`.
- Live verification: `subrosa.service` active on UDP 27584; process memory at
  type 46 reads name `Revolver`, ammo `6`, right-hand offset
  `(0, 0.0571, 0.1057)`. Compiled `Lua::itemTypes::getCount()` returns 64.
