# Recovery and module organization, 2026-10-20

This batch renames 269 client functions by behavior and moves 330 original
routines into C modules named for their purpose. Of those moves, 251 leave
the address-based recovery files. The entire `client_recovery_060000.c`
bucket is split; its audio, text, widgets, math, camera, geometry and packet
helpers now have separate owners. The empty `client_recovery_160000.c` and
`client_effects.c` files are removed.

There are still 383 original routines in the remaining recovery buckets.
Their behavior and types need further investigation. Giving a known
function a behavior name does not imply that all of its local variables or
shared state have been recovered.

## Names and ownership

`../client/names.tsv` retains the original-address/name correspondence.
`sr_` names distinguish ABI-compatible client entry points from typed engine
functions. For example:

| Original address | Client entry point | Module |
| --- | --- | --- |
| `0x14010E610` | `sr_net_write_angle` | `client_net_angle.c` |
| `0x140115AE0` | `sr_net_read_bits` | `client_net_bits.c` |
| `0x14007ADF0` | `sr_net_read_bytes` | `client_net_bytes.c` |
| `0x140115230` | `sr_net_encode_direction` | `client_net_vector.c` |
| `0x14010E190` | `sr_audio_voice_decode` | `client_audio_voice.c` |
| `0x140069400` | `sr_audio_output_callback` | `client_audio_mixer.c` |
| `0x14007C980` | `sr_clock_milliseconds` | `client_timing.c` |
| `0x14007DDF0` | `sr_renderer_draw_wire_box` | `client_renderer_primitives.c` |

The bit-writer adapters also have behavior names in the engine:
`net_write_bits_always_success` and `net_write_bits_always_success_alt`.
Both preserve the original unconditional success result even when the
underlying writer rejects a full buffer.

`../client/function_modules.tsv` records 334 explicit routine owners.
`tools/cleanup/split_client_modules.py` previews/applies those moves and
checks ownership, unique original addresses, the symbol registry and the
CMake source list. Whole function blocks travel with their stack macros and
source-local headers. `rename_client_functions.py` now updates engine
references, assembly and native fixtures as well as client declarations and
callers. Running it again reports `nothing to rename`.

The maintained client README lists all 131 C compilation units and their
actual function counts. It replaces references to unavailable legacy
generators and manifests with the current build and ownership tools.

## Additional restored entry points

| Original address | Client entry point | Readable implementation |
| --- | --- | --- |
| `0x140077C80` | `sr_collision_line_quad` | `collision_polygon.c`: directed line against a convex quad |
| `0x140078230` | `sr_collision_segment_triangle` | `collision_polygon.c`: segment against a triangle |
| `0x140105770` | `sr_math_mat3_multiply_copy` | Existing `math_mat3_multiply`: staged 3x3 product |
| `0x140105840` | `sr_math_mat4_multiply_copy` | Existing `math_mat4_multiply`: staged 4x4 product |

These four client bodies now call their readable implementations. Matrix
entry points retain their existing compatibility return values; the native
matrix comparisons check the meaningful buffer results and floating-point
status, not unspecified RAX contents. The existing matrix implementations
were reused only after checking these additional original addresses.

Polygon tests retain plane-query output writes even when an edge rejects
the hit. All edge comparisons reject NaN as the original COMISS/JB does;
the decompiler's `< 0` spelling obscured that rule. The tests call the actual
plane routines, without replacing them with recording stubs.

The new alias cases also exposed a defect in the existing
`collision_line_plane`: reloading `*fraction` between coordinate writes
changed results when it overlapped the point output. It now retains the
computed fraction locally, matching the original register use and scalar
store order. Its denominator test uses the quiet unordered comparison
corresponding to the original UCOMISS/JE.

## Verification

The source snapshot is in `build/restoration-20261020/before/`. Before the
new wrappers were installed, all **4,229** original address-marked function
blocks matched that snapshot exactly after reversing symbol renames.
The final comparison still preserves every address exactly once; 4,222
blocks are unchanged after function-name normalization. The seven intentional
block changes are the four restored wrappers, parameter names in
`sr_net_write_angle`, and the two audio local-name cleanups described below.
The audit is saved in
`build/restoration-20261020/structural-verification.json`.

Native comparisons use the installed executable, SHA-256
`cc667f7d3c765a36940a8fcc583c7ee189fd1bdbf167e56e59ac3a9f6873ad12`.
All **17 suites** pass, comparing **525,763 output lines**:

| Suites | Cases | Entry points |
| --- | ---: | --- |
| `polygon`, `matrixvariants`, `lineplane`, `segmentplane`, `physicsmotion` | 6,000 | Actual current client wrappers, compiled with client flags |
| `packetbits`, `packetangle`, `packetbytes`, `packetvector` | 13,000 | Actual current client wrappers |
| `math`, `integergeometry`, `physicskernels`, `audioalloc`, `audiocapture`, `menustate`, `menuclip`, `texthelpers` | 1,500 | Engine regression comparisons |

As in the existing harness, NaN payloads are normalized for float output;
ordinary float results, complete buffer writes, return values where defined
and MXCSR status are compared. New polygon and matrix cases cover partial
and complete input/output overlap, face boundaries, misses, exceptional
floats, all rounding modes and independent DAZ/FTZ controls.

The final mutation sets detect **20 deliberate bugs**: 12 polygon edge,
normal and boundary changes; four matrix arithmetic changes; and four
line-plane fraction/denominator changes. An initial mutation changing only
the quiet comparison spelling was excluded because the suite could not
distinguish it; it is not counted among the 20 detected mutations.

Run from the project directory in PowerShell:

```powershell
$env:SUBROSA_GAME_DIR = (Resolve-Path '..').Path
python tools/cleanup/split_client_modules.py --check
python tools/native-compare/run.py polygon matrixvariants lineplane segmentplane physicsmotion --client-wrappers --cases 6000 --out build/restoration-20261020/wrappers
python tools/native-compare/run.py packetbits packetangle packetbytes packetvector --client-wrappers --cases 13000 --out build/restoration-20261020/packets
python tools/native-compare/run.py math integergeometry physicskernels audioalloc audiocapture menustate menuclip texthelpers --cases 1500 --out build/restoration-20261020/regression
python tools/native-compare/mutate.py polygon collision_polygon.c tools/native-compare/polygon.mutations --cases 600
python tools/native-compare/mutate.py matrixvariants math3d.c tools/native-compare/matrixvariants.mutations --cases 600
python tools/native-compare/mutate.py lineplane collision.c tools/native-compare/lineplane.mutations --cases 600
python scripts/build.py --jobs 8
```

The full client compiles and links, producing `dist/subrosa-recomp.exe`
and `dist/SDL2.dll`. This batch has not been manually tested in gameplay.

## Audio local names

The pasted declaration block belonged to `0x140065AE0`, now
`sr_audio_generate_synth_sound` in `client_audio_synthesis.c`. All 116
decompiler temporaries have role names: oscillator frequencies and phases,
tone envelope, sawtooth/harmonic phases, filter stages, per-sample values in
the eight-sample unroll, and PCM/vector cursors. Declarations sit beside
their first assignments. `client_audio_synthesis.h` names the runtime sound
IDs and shared waveform workspace used here.

`0x140069930` is now `sr_audio_load_pcm16` in `client_audio_samples.c`.
Its six temporaries and four arguments also have descriptive names. The
synthesis routine's two arguments are named `sound_id` and `sound_gain`.
`../client/local_names.tsv` records all 128 scoped local/argument mappings,
and the module validator verifies that every mapping has been applied.

This is a readability cleanup of existing client code, without new engine
arithmetic. Normalizing names, storage aliases and declaration placement
reproduces every original expression, constant and statement in both
routines; the full client rebuild passes. The audit is saved in
`build/restoration-20261020/local-verification.json`. No claim of a new
native-equivalence recovery is made for these two audio routines.

The subsequent complete local-identifier pass is documented in
`../client/local_naming_20261020.md`. All maintained C/header `v<number>`
identifiers are replaced with role/operation names, with an exact source and
compiled-section comparison against the saved pre-cleanup build.
