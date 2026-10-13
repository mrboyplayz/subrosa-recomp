# Computer disk jobs and mission application — 2026-10-12

Four more routines have readable implementations and client wrappers. They
extend the computer item code left by Claude s28, and have passed direct
and linked-wrapper comparisons against the original executable.

| Original address | Readable routine | Source |
| --- | --- | --- |
| `0x14004C960` | `computer_resolve_drive` | `src/engine/disk.c` |
| `0x140080690` | `disk_append_file` | `src/engine/disk.c` |
| `0x1400C3ED0` | `computer_update_disk_job` | `src/engine/items/computer.c` |
| `0x1400C8500` | `computer_update_program` | `src/engine/items/computer.c` |

Layouts/prototypes are in `disk.h` and `items/items.h`. The wrappers are in
`client_recovery_040000.c`, `client_recovery_080000.c` and
`client_terminal.c`. The computer item continues to use one implementation
file for its type; disk storage is shared with disk items and other callers.

## Behavior preserved

Drive 0 resolves the first attached item when its child count is positive.
Drive 2 uses the computer's own disk index. Other drives and an empty drive
0 return `UINT32_MAX`. Both helper returns retain the native zero extension
to 64 bits at their legacy wrappers.

Disk records are 10,280 bytes apart. Their directory entries occupy 16 bytes
(12-byte name and parent); file entries occupy 24 bytes (content id,
16-byte name and directory id). Both tables hold 256 entries. The append
routine rejects counts at or above 256, copies the name including its NUL
without imposing a new length limit, and reloads the count where the
original reloads it. Directed cases cover names longer than the name field,
overlapping source/destination, and a count of -1. That last case aliases the
directory write with the count itself, so using the initial count for the
final increment/return would be wrong. The implementation preserves this
behavior with a byte accessor and wrapping arithmetic.

The disk-job tick waits for its countdown to reach zero, then performs a
copy or prints the next matching directory/file. Directories precede files;
listing entries wait four ticks. Directory rows retain the original eleven
characters before the `<DIR>` suffix. Completion clears only the specified
line/command bytes and resumes queued keys, or an Enter key when none are
queued. Queue length is reloaded after every key callback. The copy branch
prints the native success message even when the disk append is rejected at
capacity. A key callback can start a listing in the same tick; these are
independent stages.

The mission application preserves the cached team argument, timer and
sixteen-tick screen cadence, callback-driven timer/submenu changes, and
all seven document-content checks. It allows multiple matches, so the last
matching document wins. Disk index and selected file are reloaded between
document callbacks. Team, connection timer and submenu names correspond
to the local RosaServer struct; other fields are named from their behavior.

The disk-job's incidental native return register is discarded by all
reviewed callers. Its readable interface is void and its legacy wrapper
returns zero; that unused register is not compared. The used drive/file
helper returns are preserved and compared.

## Composed item-tick fixture repaired

Claude's stop note identified stale hooks for the now-restored letter list,
snake level setup and snake drawing. `t_itemtick.c` now removes those hooks,
and also the two computer hooks made obsolete by this batch. The restored
callees execute normally in both images; the original CRT formatter is
routed to the same host formatter, as in `t_snake.c`.

The whole-tick fixture keeps disk jobs one tick before completion and
mission apps without a team. Their deeper behavior is tested separately
by `computerjobs`, which exercises the real restored drive/file/new-line
helpers with identical recording callbacks for terminal keys, mission
screens and document decoding. This avoids pretending the composed fixture
proves those still-unported UI/input/decoder routines.

Old s28 item-tick mutation baselines must be regenerated with this changed
fixture. This batch does not claim that s28's unfinished terminal/cipher/
snake mutation reruns have been completed.

## Verification

- Direct and linked-wrapper suites each passed **5,000 cases per routine**:
  **40,000 routine comparisons and 102,330 identical output lines**.
- All **43 deliberate mutations** were detected against an identical
  500-case baseline: ten disk/drive mutations and 33 computer mutations.
  Every mutation built; none was missed.
- Eight regressions passed at 1,000 cases each: `itemtick`, `terminal`,
  `cipher`, `snake`, `linelink`, `gun`, `itemsupport` and `itemphysics`.
- Both changed engine C files compile at `-O2 -Wall -Wextra -Werror` without
  diagnostics. All three wrapper modules compile with zero errors and
  existing decompiler warnings.
- The private combined client build succeeded with **zero unresolved and
  zero duplicate symbols**. It includes the s28 item wrappers present at
  build time. The executable was neither installed nor launched as a game.

The comparisons check complete selected item/disk/text records and change
counter hashes, callback arguments/order, helper returns and MXCSR from
`0x1F80`. They also hash the entire item array after the final case. Cases
include first/last item indices, unavailable drives, full and last-free
disks, listing exhaustion, queue/countdown boundaries, mission callback
state changes, duplicate document keys and both sides of the frame masks.

Tests execute isolated mapped images. Host string formatting and recording
callbacks are controlled boundaries. These are finite directed/generated
tests, not exhaustive game-wide equivalence or an in-game smoke test.

The four owned engine source/header files match their tested snapshot byte
for byte. Another session changed unrelated portions of
`client_recovery_040000.c` after this private build. The new drive wrapper's
canonical body still matches the captured compiled/preprocessed input;
full-file and wrapper hashes are recorded separately. The other two wrapper
files remained unchanged at verification time.

Results, hashes, object diagnostics and mutation records are in
`reports/codex-computerjobs-20261012/verification.json`. The frozen executable
is `reports/codex-computerjobs-20261012/integrated-link-probe.exe`. The shared
probe and other sessions' source/build folders were left available.

## Reproduction (PowerShell)

```powershell
$env:TESTS = 'computerjobs computerjobs_wrapped'
$env:CASES = '5000'
$env:NATIVE_COMPARE_OUT = "$PWD/build/native-compare-codex-computerjobs-final"
$env:NATIVE_COMPARE_ENGINE_DIR = "$PWD/build/codex-computerjobs-engine-snapshot"
$env:RECOMP_EXE = "$PWD/reports/codex-computerjobs-20261012/integrated-link-probe.exe"
& 'C:/Program Files/Git/bin/bash.exe' tools/native-compare/run.sh
```

Run a separate 500-case `computerjobs` baseline in
`build/native-compare-codex-computerjobs-mutations`, then:

```powershell
python tools/native-compare/mutate_snapshot.py computerjobs build/codex-computerjobs-engine-snapshot/disk.c tools/native-compare/computerjobs-disk.mutations --out build/native-compare-codex-computerjobs-mutations --recomp reports/codex-computerjobs-20261012/integrated-link-probe.exe --cases 500 --label disk
python tools/native-compare/mutate_snapshot.py computerjobs build/codex-computerjobs-engine-snapshot/items/computer.c tools/native-compare/computerjobs-computer.mutations --out build/native-compare-codex-computerjobs-mutations --recomp reports/codex-computerjobs-20261012/integrated-link-probe.exe --cases 500 --label computer
```

The mutation runner uses private copies and includes the snapshot's nested
item headers. The default suite list now includes `computerjobs` and the
corrected `itemtick` fixture. Terminal input handling, mission screens and
document decoding remain useful nearby restoration targets; other sessions'
claims are recorded in `CODEX-CLAUDE.md`.
