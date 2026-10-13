# Engine network replication — 2026-10-12

Six original routines are restored in `src/engine/net_replication.c/.h`.
This batch follows the user's engine-first direction. No client wrappers,
client-source changes, installation or game restart were performed by Codex.

| Original address | Engine function | Behavior |
| --- | --- | --- |
| 0x14018D440 | `net_read_angle` | Magnitude/sign angle decoding |
| 0x14018D510 | `net_read_position_delta` | Signed 4/9-bit delta or unsigned absolute position |
| 0x14018D5E0 | `net_read_component_delta` | Optional unchanged flag, configurable signed deltas, signed absolute value and delta histogram |
| 0x140191F90 | `net_decode_rotation` | Reconstruct and normalize a packed quaternion, then build its matrix |
| 0x14018D6D0 | `net_read_item_update` | Baseline snapshot, position/orientation, interpolation history and type-specific item state |
| 0x14018DB20 | `net_read_item_spawn` | Item type, attachment/holder/slot and computer screen row state |

The item-update path calls the real readable bit reader, delta decoders,
quaternion decoder and existing `math_mat3_from_quat`. No callee hooks or
network traffic are used by the comparison fixture. Original comparisons
execute the original machine-code callees inside the isolated PE loader.

## Preserved details

- Snapshot frames are 0x4DC00 **bytes** apart and item records are 36 bytes;
  the decompiler's mixed byte/word indexing was checked against machine code.
- Positions use signed integer-to-float conversion, 1/4096 units and a 4096
  bias on x/z only. The first received update initializes both interpolation
  endpoints. Later updates retain the previous tick and position.
- A baseline equal to the destination frame is supported; deltas consume
  the old values before storing each component.
- Position deltas return the stored word, while absolute reads return the
  reader's status. Component deltas preserve the original's unusual status,
  delta+128 or statistics-base-pointer return, and histogram byte indexing
  with wrapping unsigned counters.
- Shift counts use x86 modulo-32 behavior and integer additions wrap.
- Angle and quaternion constants are the original IEEE double values.
  Quaternion protocol order is mutable .data, initially w/y/z/x. The exact
  sequence of double reconstruction, float pair sums, double square root
  and reciprocal, and float normalization is retained.
- Spawn parent/holder 1023 means -1. Computer link 4095 means -1. Cash,
  walkie-talkie and computer fields retain their original widths and order.
- Layout assertions check the snapshot, interpolation and used item fields.

## Verification

`reports/codex-engine-replication-20261012/` contains frozen runners, fixture,
comparison scripts, logs, output hashes and `verification.json`.
`build/codex-engine-replication-snapshot/` contains the engine sources used
for comparisons. Existing modules were copied from the preceding validated
transport snapshot to isolate this batch from concurrent Claude edits.

| Comparison | Cases | Identical output lines |
| --- | ---: | ---: |
| Six new routines, engine -O2 | 10,000 per routine | 210,000 |
| New module rebuilt -O0, other engine modules -O2 | 500 per routine | 10,500 |
| Existing bit-stream suite | 5,000 | 5,000 |
| Existing math suite | 5,000 | 5,000 |

The primary run makes 60,000 routine comparisons; the -O0 check adds 3,000.
Each fixture case checks all six routines, cursor and packet state, raw
float bits, MXCSR flags, full-item/guard checksums, snapshot words,
interpolation, type-specific fields and histogram state. Coverage includes
all four rounding modes, protocol-order permutations, all omitted quaternion
components, zero/large quantized rotations, delta sign boundaries, wrapped
arithmetic/counters, same-frame baselines, item slots 0/1023, both history
initialization states, sentinel values and widths including 0/negative/32+.

All **49 isolated mutations** built and produced different normal output:
zero misses, crashes, timeouts or build failures, on passing 500-case
baselines. The mutation source, fixture and executable hashes are recorded
in the saved result JSON. The new module compiles with `-Wall -Wextra -Werror`
at -O2 and -O0. Both owned source files match the comparison snapshot.

Comparisons use the frozen, previously linked client only as a storage image:
`reports/codex-networktransport-20261012/integrated-link-probe.exe`, SHA256
`a319c9fcde5b056e6a06bce427d76a692f7dbd84a5c2d3239f1cfd7f4630c26e`.
The new routines are invoked directly from the engine comparison programs.
They are not yet dispatched by the playable client executable.

Complete packets and valid quaternion index/order are the parity contract.
For failed reads that consumed an unset native local, the engine initializes
that local to zero; later failures retain its last decoded value. No claim
is made for the native uninitialized-stack behavior or full game parity.

## Reproduce

With MinGW gcc/nm and Python in PATH, run the frozen runner through Git Bash:

```sh
TESTS='netreplication netbits math' CASES=500 \
NATIVE_COMPARE_OUT="$PWD/build/codex-engine-replication-baseline" \
NATIVE_COMPARE_ENGINE_DIR="$PWD/build/codex-engine-replication-snapshot" \
RECOMP_EXE="$PWD/reports/codex-networktransport-20261012/integrated-link-probe.exe" \
bash reports/codex-engine-replication-20261012/run.sh
python reports/codex-engine-replication-20261012/compare.py
python reports/codex-engine-replication-20261012/mutate_snapshot.py \
  netreplication build/codex-engine-replication-snapshot/net_replication.c \
  reports/codex-engine-replication-20261012/mutations.txt \
  --out build/codex-engine-replication-baseline \
  --recomp reports/codex-networktransport-20261012/integrated-link-probe.exe \
  --cases 500
```

Follow-up candidates, not claimed in this batch: configurable rotation decode
0x140192160 and the surrounding human/vehicle replication routines. Check
`CODEX-CLAUDE.md` before claiming them; the two Claude sessions currently own
player/bot and wheel/level work.
