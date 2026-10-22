# Rotation and interpolation restoration, 2026-10-22

Six client routines now call typed engine implementations. Four leave the
address-based recovery files, reducing the remaining recovery routines from
383 to 379. The other two previously named quaternion conversions now have
verified engine implementations too.

| Original address | Client entry point | Engine implementation |
| --- | --- | --- |
| `0x14011C300` | `sr_math_quat_to_axis_angle` | `math_rotation.c`: normalize xyz, return the angle in radians |
| `0x14011C490` | `sr_math_quat_to_rotation_vector` | `math_rotation.c`: axis scaled by radians |
| `0x14002D050` | `sr_math_mat3_relative_axis_angle` | `math_rotation.c`: relative matrix rotation as axis and angle |
| `0x1400ACD90` | `sr_math_mat3_relative_rotation_vector` | `math_rotation.c`: relative matrix rotation as a rotation vector |
| `0x1400C30E0` | `sr_math_vec3_lerp` | `math_interpolation.c`: vector interpolation and extrapolation |
| `0x1400C2F90` | `sr_math_mat3_nlerp` | `math_interpolation.c`: normalized quaternion interpolation between matrices |

The client adapters live in `../client/client_math_rotation.c` and
`../client/client_math_interpolation.c`. Names, owners, shared declarations,
callers and `sources.cmake` are updated together. Wrapper parameters have
role names; the 50 superseded decompiler-local mappings are replaced by 18
parameter mappings in `local_names.tsv`. Their former source and mappings
remain in the saved snapshot.

## Native behavior retained

The quaternion conversions write the normalized axis before reading the
quaternion's scalar component. A partially overlapping output can change
that component, and the restored implementations retain that behavior.
Angles clamp the scalar with the native MAXSS/MINSS rules, call the game's
double-precision `acos`, double the result in double precision, then round
to float before scaling the axis.

Relative rotations match quaternion hemispheres using the original
COMISS/JAE unordered branch, conjugate the second quaternion and retain
the native product and normalization order. A zero or unordered axis
length follows the quiet UCOMISS/JE branch. The rotation-vector entry point
uses its two input matrices in the opposite order to the axis-angle entry
point, matching the original addresses.

Vector interpolation captures all three differences before storing, but
reloads each base component between output stores. Matrix interpolation
consumes both inputs before writing, picks matching quaternion hemispheres,
and normalizes with a double-precision square root, reciprocal and component
products. Zero or unordered length selects the identity quaternion. The
fraction is not clamped, and the client matrix adapter still accepts float
bits in a double-sized argument.

The matrix adapter retains its prior pointer-typed compatibility result
(`out`). The native comparison checks its buffer and floating-point status,
not the original routine's incidental stack-address value left in RAX.

## Verification

The original executable has SHA-256
`cc667f7d3c765a36940a8fcc583c7ee189fd1bdbf167e56e59ac3a9f6873ad12`.

`rotationangles` and `interpolation` compare the actual client wrappers,
compiled with the client flags, against the installed machine code. At
8,000 cases per entry point all **48,000 routine calls** match, producing
**128,002 identical output lines**. Cases cover input/output overlap,
identical and partially overlapping matrix inputs, identity and half-turn
rotations, malformed matrices, interpolation and extrapolation, signed
zeros, subnormal values, infinities, quiet and signaling NaNs, all four
rounding modes and independently enabled DAZ/FTZ.

Both builds execute the actual original `acos` boundary. Quaternion matrix
conversion and vector normalization also execute their real implementations;
no recording stubs replace these callees. Float output normalizes NaN
payloads as elsewhere in this harness; other float bits and MXCSR status
are compared exactly. This is finite test coverage, not a proof for every
possible input.

Related `math`, `matrixvariants` and `integergeometry` regression suites
also match at 2,000 cases each, producing 28,003 identical output lines.

Mutation checks detect **18 deliberate bugs**: ten angle, clamp, overlap,
hemisphere, conjugation, product-sign, normalization and direction changes;
and eight vector-delta, interpolation-weight, overlap, hemisphere,
normalization-precision and identity-fallback changes. An initial candidate
that only changed the fallback quaternion's scalar was equivalent after
matrix conversion and was replaced with a nonidentity fallback mutation;
it is not counted among the detected bugs.

The snapshot is `build/restoration-20261022/before/`. The structural audit
in `build/restoration-20261022/structural-verification.json` verifies all
4,229 original addresses occur exactly once. After reversing the four new
function names, 4,223 function blocks are unchanged; only these six wrappers
have new bodies. The module and local-name validators pass, and the complete
client compiles and links to `dist/subrosa-recomp.exe` with `dist/SDL2.dll`.
Gameplay has not been manually tested for this batch.

Reproduce from the project directory in PowerShell:

```powershell
$env:SUBROSA_GAME_DIR = (Resolve-Path '..').Path
python tools/cleanup/split_client_modules.py --check
python tools/cleanup/recover_client_locals.py --check
python tools/native-compare/run.py rotationangles interpolation --client-wrappers --cases 8000 --out build/restoration-20261022/wrappers
python tools/native-compare/run.py math matrixvariants integergeometry --cases 2000 --out build/restoration-20261022/regression
python tools/native-compare/mutate.py rotationangles math_rotation.c tools/native-compare/rotationangles.mutations --cases 1500
python tools/native-compare/mutate.py interpolation math_interpolation.c tools/native-compare/interpolation.mutations --cases 1500
python scripts/build.py --jobs 8
```
