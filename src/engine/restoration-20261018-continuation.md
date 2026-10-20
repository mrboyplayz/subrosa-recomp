# Continued restoration, 2026-10-18

Verified checkpoint: **80 additional routines**, following the four in
`restoration-20261018.md` (**84 restored this session**). The 28 new native
comparison suites exercise 85 linked client entry points: the 84 restored
ones and the already-restored block event 15. The final mutation collection
contains **414 detected changes**, including the first batch's 33. All 414
replacement anchors are unique against the final source tree.

This log follows `restoration-20261018.md`. The installed reference executable
is SHA-256 `cc667f7d3c765a36940a8fcc583c7ee189fd1bdbf167e56e59ac3a9f6873ad12`.
Each batch keeps the current client entry points and compiles their actual
wrapper bodies in the native comparison harness. The harness automatically
uses the installed `ccache` when available; unchanged objects are cached with
their compiler inputs and header dependencies.

## Area and visibility queries

| Original | Engine function |
| --- | --- |
| `0x14011B8F0` | `corporation_contains_point` |
| `0x14011B960` | `corporation_vault_contains_point` |
| `0x14011B9F0` | `world_region_contains_point` |
| `0x14011BAD0` | `area_view_contains_point` |

The first three were removed from the engine in the preceding repository
cleanup; they have been restored and rechecked against the installed build.
Corporation interiors check x/z only; vaults and regions check x/y/z.
Lower bounds are inclusive and reject NaNs. Upper bounds are exclusive and
accept NaNs, matching the native branch instructions rather than the
decompiler's apparent conjunction. The camera query accepts an unordered
distance at each of its five planes.

The direct ports matched 4,000 cases per entry point, and the actual client
wrappers matched 13,000 (65,001 output lines with the added boundary tests).
All 22 mutations were
detected. One initial test gap was repaired with cancellation cases at a
rotated side plane: these detect reassociating the plane's three additions.
The unchanged ordinary cases remain in the fixture. Tests include boundary
neighbors, NaNs (including signaling values), infinities, signed zeros,
independent DAZ/FTZ modes, all rounding modes and read-only state checks.

```powershell
$env:SUBROSA_GAME_DIR = (Resolve-Path '..').Path
python tools/native-compare/run.py areabounds --cases 4000
python tools/native-compare/run.py areabounds --client-wrappers --cases 13000
python tools/native-compare/mutate.py areabounds area_bounds.c tools/native-compare/areabounds.mutations --cases 4000
```

## Packet bit streams

| Original | Engine function |
| --- | --- |
| `0x140115AE0` | `net_read_bits` |
| `0x140115C20` | `net_read_bits_scaled` |
| `0x140115D90` | `net_write_bits` |
| `0x140115E80` | `net_write_bits_scaled` |
| `0x140115E60` | `net_write_bits_always_success` |
| `0x140115F70` | `net_write_bits_always_success_alt` |

All six implementations and their client wrappers match 13,000 cases per
routine (156,001 lines). All 22 mutations were detected at 2,200 cases each.
Tests include negative/zero/32/64 bit widths, dirty bytes, full buffers,
initial cursors outside 0..7, arguments aliasing the packet data and cursor
fields, and wrapping scaled values. The entire buffers and guard storage are
hashed after every call, with all cursor words and full-width return values
reported. No recording stubs are needed.

The zero mask produced by an x86 shift of 32 is deliberately retained.
The basic writer clears its bit range; the scaled writer replaces a byte at
bit zero and only ORs when the byte is partially filled. The two adapters
report success even when the basic writer reports a full buffer.

```powershell
python tools/native-compare/run.py packetbits --cases 13000
python tools/native-compare/run.py packetbits --client-wrappers --cases 13000
python tools/native-compare/mutate.py packetbits net_bits.c tools/native-compare/packetbits.mutations --cases 2200
```

## Aligned packet bytes and angle encoding

`net_read_bytes` (`0x14007ADF0`), `net_write_bytes` (`0x14007B180`) and
`net_write_angle` (`0x14010E610`) match 8,000 direct and client-wrapper cases
each. The angle tests detect all eight mutations at 2,000 cases. All twelve
byte-transfer mutations were detected at 4,000 cases.

Byte transfers preserve the length check before input alignment, alignment
only for a positive bit cursor, the wrapped 32-bit size/count product,
overlapping copies, and the cursor reread after an aliased destination.
The native CRT copy is run directly in the reference process.

Angle encoding preserves the exact double scale constant, the 64-bit
truncating conversion (including its indefinite result), the sign handling
for NaNs and negative zero, and the writer's return value. Tests exercise
all rounding/DAZ/FTZ modes and complete packet output, without stubbing the
underlying bit writer.

The angle entry point's decompiler-inferred `char` width was corrected to
`int` in the wrapper and both shared declarations: the machine code consumes
all of EDX. Expanded tests include widths -129, 127, 128, 129, 255, 256 and
257; 8,000 direct and wrapper cases match (hash `2c736b8297db6503`), with all
eight angle mutations detected again.

```powershell
python tools/native-compare/run.py packetbytes packetangle --cases 8000
python tools/native-compare/run.py packetbytes packetangle --client-wrappers --cases 8000
python tools/native-compare/mutate.py packetbytes net_bytes.c tools/native-compare/packetbytes.mutations --cases 4000
python tools/native-compare/mutate.py packetangle net_angle.c tools/native-compare/packetangle.mutations --cases 2000
```

## Text helpers

Six client entry points now use `text_helpers.c`: the unsigned-byte
comparators `0x14004C4C0`/`0x14006C980`, label CRC `0x14006C670`, parser
prefix/search `0x14006C870`/`0x14006E4C0`, and label copying `0x14006F120`.
The two comparator wrappers preserve zero extension of the negative EAX
word. CRC initialization preserves the native table[0] test, even though
regeneration writes zero back into that entry. Label copying writes the
entire source first, then truncates its visible prefix at ## or 255 bytes.

Direct and actual-wrapper comparisons match at 6,000 cases per routine.
All twenty mutations are detected at 1,500 cases, including a directed test
for a prefix beginning exactly at the parser's length. Cases include bytes
above 127, empty and long labels, single hashes, every hidden-marker scan
position, dirty/preinitialized CRC tables, and safe forward-copy overlap.

```powershell
python tools/native-compare/run.py texthelpers --client-wrappers --cases 6000
python tools/native-compare/mutate.py texthelpers text_helpers.c tools/native-compare/texthelpers.mutations --cases 1500
```

## Physics allocation

Five entries use `physics_create.c`: free-bond lookup `0x1400A4440`, body
creation `0x14005CF80`, point creation `0x14005CBB0`, and body/rotation bonds
`0x14004E430`/`0x14004E5B0`. These ports were recovered from the preceding
revision and rechecked against the installed reference executable.

Direct and actual-wrapper comparisons match at 400 cases per routine.
All twelve mutations are detected at 400 cases each. Tests compare complete
pools and constraints, including full-pool exits with null input pointers,
negative active flags, first/last free slots, optional velocities, aliased
inputs, signaling/quiet NaNs, subnormal moments, every rounding mode and
independent DAZ/FTZ. The body wrapper retains mass as raw float bits in its
original integer stack argument.

```powershell
python tools/native-compare/run.py physicsalloc --client-wrappers --cases 400
python tools/native-compare/mutate.py physicsalloc physics_create.c tools/native-compare/physicsalloc.mutations --cases 400
```

## Gameplay event constructors

Sixteen additional entries from `0x140051230` through `0x140052090` now have
ports in `events.c`. The suite also rechecks the already-restored event 15
through `world_event_block_gone`. All seventeen direct comparisons match at
2,000 cases (714,002 lines); the actual client wrappers match the same output,
hash `93761c62c186ecc5`. All 28 mutations were detected at 350 cases per
constructor.

The suite checks the entire reused event record, nearby slots, the final
complete ring, source player/mission/stock records, and FP status. It covers
ring wraparound, disabled generation with null pointers, optional vectors,
ordered overlapping vector copies, packed-coordinate carries, signed
mission time, boundary-length mission chunks, and all six stock conversions
(only five of which enter the packet). Native CRT copies run directly.

Events are checked as procedures: incidental return-register leftovers are
not included in the oracle. Existing inferred non-void wrappers return zero;
message and stock events also return zero in the enabled native path.

```powershell
python tools/native-compare/run.py eventrecords --client-wrappers --cases 2000
python tools/native-compare/mutate.py eventrecords events.c tools/native-compare/eventrecords.mutations --cases 350
```

## Disk and file helpers

`disk.c`/`disk_files.c` restore disk allocation `0x140050EF0`, an item's drive
lookup `0x14004C960`, and file append `0x140080690`. The direct disk/file
comparisons match 500 cases. Actual-wrapper comparisons match 500 allocation
cases and 2,000 drive/file cases. All five allocation mutations (120 cases)
and nine file/drive mutations (600 cases) are detected.

Tests compare entire pools or neighboring disk records, including negative
used flags, full-pool/full-directory sentinels, null names on full directories,
filename lengths beyond the nominal 16-byte field, forward-copy overlap,
source content overwritten before copying, negative child counts and invalid
drive selectors. The native unbounded filename copy is intentionally kept.

```powershell
python tools/native-compare/run.py diskfiles --client-wrappers --cases 2000
python tools/native-compare/run.py diskalloc --client-wrappers --cases 500
python tools/native-compare/mutate.py diskfiles disk_files.c tools/native-compare/diskfiles.mutations --cases 600
python tools/native-compare/mutate.py diskalloc disk.c tools/native-compare/diskalloc.mutations --cases 120
```

## Inertia and sphere kernels

Four entries have direct ports in `physics_kernels.c`: scalar/SIMD inverse
inertia `0x14002CF10`/`0x14002D2D0`, sphere exit `0x14011C640` and sphere entry
`0x14011C6B0`. Direct comparisons match 6,000 cases per routine, including all
SIMD lanes and MXCSR. The actual client wrappers match the same 48,001 lines,
hash `d01f158322115589`. All twenty mutations were detected at 1,500 cases.
Tests include streamed scalar stores with overlapping inputs, aligned SIMD
buffers, the extra matrix word used by the fourth lane, signed zeros, NaNs,
and independent DAZ/FTZ and rounding modes. These entry points are linked;
the exported client currently has no callers for these four helpers.

```powershell
python tools/native-compare/run.py physicskernels --client-wrappers --cases 6000
python tools/native-compare/mutate.py physicskernels physics_kernels.c tools/native-compare/physicskernels.mutations --cases 1500
```

## Raw text records

`item_allocate_text_record` restores `0x140051170` alongside the existing
colored screen-line allocator. Direct and actual-wrapper comparisons match
1,000 cases, hash `3ae5bd942c577cc5`. All seven mutations are detected at
300 cases. Tests cover the entire 16,384-record pool, full-pool exits,
dirty unused bytes, the separate raw-text source offset, the native 64-byte
cap, wrapped line offsets and a source overlapping its destination header.

```powershell
python tools/native-compare/run.py rawtext --client-wrappers --cases 1000
python tools/native-compare/mutate.py rawtext item_text.c tools/native-compare/rawtext.mutations --cases 300
```

## Body motion stage

`physics_integrate_bodies` restores `0x14012B220`. The full tick now shares
this implementation instead of keeping a private duplicate. Native and
actual-wrapper comparisons match 1,000 cases, 13,991 lines with hash
`3d3c17836fe5b580`. All nine mutations are detected at 200 cases. An initial
miss for skipping the final body led to adding an explicitly moving final
slot; that mutation then failed as intended.

The comparison replaces the rotation callee with the same recording stub
in both builds. It checks the entire body pool, entry arguments, state at
each call and MXCSR, including changes a callee makes to later body flags.
The existing separately documented rotation FP-status limitation remains
outside this stage's proof.

```powershell
python tools/native-compare/run.py bodymotion --client-wrappers --cases 1000
python tools/native-compare/mutate.py bodymotion physics_body.c tools/native-compare/bodymotion.mutations --cases 200
```

## Build checkpoint

The complete client built successfully after the menu, body-motion and
anchor-bond integration, using `python scripts/build.py --assets '..' --jobs 8`.
Log: `build/restore-menu-physics-20261018-build.log`. SDL 2.0.12 and the asset
junctions are present in `dist/`; no gameplay session was launched.

## Distance and world anchors

`physics_create_distance_bond` (`0x14004E160`) and
`physics_create_level_bond` (`0x14004E2E0`) extend `physics_create.c`.
Direct and actual-wrapper comparisons match, the latter at 1,000 cases per
routine (2,001 lines, hash `1d99726b1f47236b`). All twelve mutations are
detected at 300 cases. Checks include complete bond/constraint pools,
full-pool exits with null pointers, dirty records, negative active flags,
raw distance bits and scalar copies that overlap newly written fields.
The world anchor intentionally leaves other_body and unknown_a0 at zero.

```powershell
python tools/native-compare/run.py bondanchors --client-wrappers --cases 1000
python tools/native-compare/mutate.py bondanchors physics_create.c tools/native-compare/bondanchors.mutations --cases 300
```

## Menu records and controls

The widget allocator `0x140070380`, button `0x14006F1F0`, selectable button
`0x14006F5A0` and toggle `0x140071910` now use `menu.c` and its checked
488-byte record layout. Direct comparisons match; the actual wrappers match
3,500 cases per routine (28,001 lines, hash `da27452ec5b178c5`). All 45 final
mutations are detected at 700 cases. A mutation selector was narrowed after
adding the related mask toggle, so it still changes only the original toggle.

The fixture checks the complete widget pool, layout, shortcut and navigation
tables, CRC table, results and FP status. Cases include last-match reuse,
negative occupied flags, a full pool, alignment priorities, signed grid
indices, one-shot flags, stale attachments, all activation routes, input
source restrictions, disabled controls and all rounding/DAZ/FTZ modes.

The collapsible group `0x14006FD10` and masked toggle `0x140071AA0` match
through their real wrappers at 2,500 cases each (15,001 lines, hash
`366251c0a4d79f22`). All eleven mutations are detected at 600 cases. The
fixture retains the native signed group-depth comparison, including a
negative depth that aliases the depth word itself. A zero-mask click was
made independent of the click-disabled cases after its first mutation missed.

```powershell
python tools/native-compare/run.py menuwidgets --client-wrappers --cases 3500
python tools/native-compare/mutate.py menuwidgets menu.c tools/native-compare/menuwidgets.mutations --cases 700
python tools/native-compare/run.py menucontrols --client-wrappers --cases 2500
python tools/native-compare/mutate.py menucontrols menu.c tools/native-compare/menucontrols.mutations --cases 600
```

## Packet vectors

`net_vector.c` restores scalar magnitude `0x1401151C0`, vector delta
`0x1401150E0` and direction compression `0x140115230`. Direct comparisons
match 2,000 cases per entry point. Actual client wrappers match 14,000
(42,001 lines, hash `e20d7c1cd3570c6f`). All nineteen final mutations are
detected at 3,500 cases. An ineffective intermediate-division precision
probe was replaced with a scaling regrouping that changes rounding.

Tests check the packet bytes and cursors, complete input/output arenas,
full return registers, MXCSR, every axis/tie/sign, NaNs, infinities, subnormal
values, aliased outputs and stream writes modifying later vector inputs.
Both formerly inferred `char` width arguments are now `int` in the client
definitions and declarations: native code consumes all 32 argument bits.
Widths include values beyond the signed/unsigned byte range.

```powershell
python tools/native-compare/run.py packetvector --client-wrappers --cases 14000
python tools/native-compare/mutate.py packetvector net_vector.c tools/native-compare/packetvector.mutations --cases 3500
```

## Menu text measurement

`menu_text_hit_index` (`0x140074C50`) and `menu_text_prefix_width`
(`0x140074CE0`) match direct and actual-wrapper comparisons at 10,000 cases
per routine, 40,001 lines with hash `704776289741f6c7`. All twelve mutations
are detected at 3,000 cases. The wrapper check also caught a missing menu
header; adding it preserves the float return ABI.

Both helpers use unsigned character metrics without a loaded-font check.
Only prefix width substitutes '*' for password text. Caret lookup's native
COMISS/JB stops for NaN as well as x below the accumulated width, which the
decompiler's ordered comparison did not preserve. Cases include negative
limits, empty strings, every byte value, boundary neighbors, signed font
indices and all independent FP modes.

```powershell
python tools/native-compare/run.py menutext --client-wrappers --cases 10000
python tools/native-compare/mutate.py menutext menu_text.c tools/native-compare/menutext.mutations --cases 3000
```

After the text/anchor additions, the existing `physicsalloc` and `itemtext`
suites still match 600 cases per operation. Log:
`build/restore-physics-text-regression-20261018.log`.

## Integer sliders

`menu_slider` (`0x140071440`) and `menu_slider_from_x` (`0x140075930`)
match direct comparisons and 3,500 actual-wrapper cases per routine,
14,292 lines with hash `61a60fb28182a76c`. All twelve arithmetic mutations
and eight widget mutations are detected at 1,000 cases. The fixture checks
wrapped integer ranges and candidate sums, negative steps, the 32-bit
truncating conversion, all FP modes, aliased output, and the native write to
the record preceding the pool when widget allocation fails. Native IDIV's
INT_MIN/-1 fault is excluded from valid division inputs.

```powershell
python tools/native-compare/run.py menuslider --client-wrappers --cases 3500
python tools/native-compare/mutate.py menuslider menu_slider.c tools/native-compare/menuslider.mutations --cases 1000
python tools/native-compare/mutate.py menuslider menu.c tools/native-compare/menuslider_widget.mutations --cases 1000
```

## Menu state and clipping

Size push/pop `0x1400755F0`/`0x1400753C0`, grid initialization `0x140070B90`
and reset `0x140075650` match 1,500 actual-wrapper cases each, hash
`43756ce31255eb7e`. All twenty final mutations are detected at 300 cases.
Tests hash the complete menu state region, including unused fields and
guards. They cover negative depths, the height slot aliasing the depth
counter, distinct push/pop return extension, stack overflow boundaries and
reset's deliberately preserved fields. The return-extension probe was moved
to the return itself after the first version was overwritten by a later
native-equivalent assignment.

Clip push/pop `0x140075460`/`0x140075340` match 10,000 actual-wrapper cases
each, 31,208 lines with hash `73b4dd5a9b0b1423`. All thirteen mutations are
detected at 2,000 cases. These comparisons include the actual camera scissor
conversion and record every glEnable, glDisable and glScissor call. Tests
cover letterboxing, rejected and zero-area rectangles, negative/positive
depths, NaNs, infinities, and all FP modes. Volatile vertical-bound temporaries
preserve the native exceptions even when the horizontal interval rejects;
without them GCC deferred the vertical calculations past the early exit.
Clip pop is declared void after reviewing its tail calls and all callers.

```powershell
python tools/native-compare/run.py menustate --client-wrappers --cases 1500
python tools/native-compare/mutate.py menustate menu_state.c tools/native-compare/menustate.mutations --cases 300
python tools/native-compare/run.py menuclip --client-wrappers --cases 10000
python tools/native-compare/mutate.py menuclip menu_clip.c tools/native-compare/menuclip.mutations --cases 2000
```

The related menu/widget/control/text suites still match 700 actual-wrapper
cases after slider and state integration. The full client builds with every
entry above integrated: `build/restore-menu-state-20261018-build.log`.

## Queued menu text

`menu_label` (`0x140071640`) and `menu_label_at` (`0x1400764B0`) match
6,000 actual-wrapper cases each (12,001 lines, hash `c31a688e827c29cd`).
All sixteen mutations are detected at 1,500 cases. The tests check the
entire queue plus guards, dirty record bytes, full-queue/null exits, signed
negative indices with accessible storage, forward overlap, label lengths
through 511 bytes, parent transforms, both layout directions, all alignment
priorities, loaded/unloaded fonts and all FP modes. They run the native and
ported text-width callees as part of the comparison.

```powershell
python tools/native-compare/run.py menulabels --client-wrappers --cases 6000
python tools/native-compare/mutate.py menulabels menu_labels.c tools/native-compare/menulabels.mutations --cases 1500
```

## Audio capture and sound allocation

`audio_capture_available` (`0x140069580`) and `audio_capture_write`
(`0x14006A380`) match 2,500 actual-wrapper cases each (5,001 lines, hash
`fbd2262cde4da3d3`). All ten mutations are detected at 2,000 cases. Tests
include the signed half-ring threshold, wrapped integer differences, odd
byte counts, exact end-of-ring pointers, full-ring copies, forward/backward
overlap, and a first copy changing the source of the wrapped second copy.

`audio_play_at` (`0x140069FA0`) matches 1,000 wrapper cases, 57,002 lines
with hash `f20f2d8f217cb3b7`. All thirteen mutations are detected at 300
cases. Checks include negative nonzero output/loaded/occupied flags, full
56-channel capacity with null position, the complete selected record and
sound record, every active flag, the final complete channel pool, raw gain
and pitch bits, and input positions aliasing freshly initialized fields.
No device API or live playback is invoked by these comparisons.

```powershell
python tools/native-compare/run.py audiocapture --client-wrappers --cases 2500
python tools/native-compare/run.py audioalloc --client-wrappers --cases 1000
python tools/native-compare/mutate.py audiocapture audio.c tools/native-compare/audiocapture.mutations --cases 2000
python tools/native-compare/mutate.py audioalloc audio.c tools/native-compare/audioalloc.mutations --cases 300
```

Per-sound availability `audio_sound_available` (`0x14007D6C0`) matches
12,000 wrapper cases, hash `d89837723cbda684`. All five mutations are
detected at 3,000 cases, including signed/odd negative lengths, wrapped
cursors, inclusive half-buffer boundaries and unloaded sounds. This helper
intentionally performs no loaded/output flag check.

## Integer geometry

`math_mat3_transpose` (`0x14007CA00`) and `math_fixed_vec2_rotate`
(`0x14007D0B0`) match 20,000 actual-wrapper cases each, 40,001 lines with
hash `91cc2fd6f161e979`. All thirteen final mutations are detected at 4,000
cases. Transpose snapshots all nine raw words and permits every overlap
offset, preserving signaling-NaN bits without FP operations. Fixed rotation
uses the installed signed 16.16 sine table, quarter-turn index wrapping,
32-bit negation before multiplication, separate product rounding and wrapped
32-bit final sums. Cases cover coordinate extremes, quadrant seams and the
complete return word. Two selectors were narrowed to exclude the substring
inside 'cosine'; an ineffective return cast was replaced with a wrong-result
probe, since the function's uint32_t return type already enforces extension.

```powershell
python tools/native-compare/run.py integergeometry --client-wrappers --cases 20000
python tools/native-compare/mutate.py integergeometry math_integer.c tools/native-compare/integergeometry.mutations --cases 4000
python tools/native-compare/run.py audioavailable --client-wrappers --cases 12000
python tools/native-compare/mutate.py audioavailable audio.c tools/native-compare/audioavailable.mutations --cases 3000
```

## Segment/plane and contact slots

`collision_segment_plane` (`0x140077B30`) matches 24,000 ordinary wrapper
cases plus 32 directed cases, 24,033 lines with hash `acd2090d21eb76d1`.
All thirteen final mutations are detected at 5,000 ordinary cases plus the
directed cases. Tests cover both endpoint orders, endpoint touches, same-side
rejection, zero and unordered denominators, partial fraction writes, all
output/input overlaps and all FP modes. The added directed case underflows
the end-distance product, then aliases *fraction to the normal so the later
denominator cannot repeat that exception. It detects skipping the native
distance calculation even when the start distance is zero. Simply removing
volatile was an ineffective probe with this compiler and was replaced by
that explicit skipped-evaluation mutation.

`collision_find_free_contact` (`0x140048090`) matches 6,000 actual-wrapper
cases, hash `2e7c729160489ca0`. All four mutations are detected at 1,500
cases. It reads the 64 contact records at offset 9,740, stride 72, treating
every nonzero kind as occupied. Tests check all hole positions, full-table
sentinel, negative kinds, complete input state and full return extension.

```powershell
python tools/native-compare/run.py segmentplane --client-wrappers --cases 24000
python tools/native-compare/mutate.py segmentplane collision_plane.c tools/native-compare/segmentplane.mutations --cases 5000
python tools/native-compare/run.py contactslot --client-wrappers --cases 6000
python tools/native-compare/mutate.py contactslot collision_contacts.c tools/native-compare/contactslot.mutations --cases 1500
```

## Final integration checkpoint

The complete final source builds successfully with
`python scripts/build.py --assets '..' --jobs 8`; the log is
`build/restore-final-20261018-build.log`. The final header integration exposed
four legacy local collision prototypes using void pointers. Their redundant
declarations were removed and their casts now use the canonical collision
types. No argument order or runtime behavior changed.

The executable's symbol table contains every one of the 85 exercised client
entry points. `dist/subrosa-recomp.exe` is 11,986,280 bytes with SHA-256
`e05727d1fccd01e456ff8ace3d9623022e64cbf0624067cfeb3ff0fabe099af9`.
The packaged DLL reports SDL 2.0.12, and data/font/sound/texture junctions
target the installed game. The reference executable's hash is unchanged.
All 65,536 sine-table words in the packaged executable match the installed
reference byte for byte (table SHA-256
`7387c47e39fe8d33c56fdff9b6fab31d17d9ab60bb5c93e61d0d3edf9b8b06e3`).
No live gameplay, rendered OpenGL session or audio device session was run.

Existing math and block suites still match 1,000 cases per operation:
`build/restore-final-regression-20261018.log`. The two physics-allocation
mutation anchors affected by the later anchor constructors were narrowed
and rechecked at 400 cases; both were detected. The known pre-existing
effects-update/rotation FP-status limitations remain documented in the
earlier restoration report and are outside the new routines' proofs.

Work stopped at the user's requested usage boundary: the five-hour account
meter reported 100% used at 2026-10-18 20:22 UTC. All restored routines above
are integrated, verified and included in the successful final build.
