# Game network transport and computer paths — 2026-10-12

Seven networking routines and one computer routine now have readable C
implementations and client entry-point wrappers.

| Address | Readable routine | Source |
| --- | --- | --- |
| `0x14008EAD0` | `net_open_udp` | `src/engine/net_transport.c` |
| `0x14008EB80` | `net_bind_udp` | same |
| `0x1400805E0` | `net_close_udp` | same |
| `0x14015AFD0` | `net_packet_transfer` | same |
| `0x140130350` | `net_send_packet` | same |
| `0x14011BD70` | `net_accept_fragment` | same |
| `0x14011C760` | `net_receive_packet` | same |
| `0x1400C6B30` | `computer_format_drive_path` | `src/engine/items/computer_path.c` |

The networking code covers the send/receive path used by master requests,
game updates and connection UI. `net_transport.h` names the socket state,
packet streams, remote peer and fragment queue. It asserts the original
16-byte socket address, `0x10010`-byte scratch stream and `0x1000C`-byte
fragment-record layouts. The existing bit codecs remain in `net_bits.c`.

## Behavior preserved

UDP setup copies the configured port, creates an IPv4 datagram socket,
sets byte order and nonblocking mode, and optionally binds it. The bound
path enables the socket only after a successful bind. Other error handling
and caller-visible return words follow the original. Closing clears the
enabled flag after the close call.

Packet byte transfer rounds a positive bit cursor to the next byte before
checking capacity. A transfer whose end equals 65,536 is rejected, as in
the original. The mode selects read or write; multiplication/addition use
wrapping 32-bit arithmetic, and the cursor is reloaded after copying.
Directed alias cases copy data into that cursor itself.

Regular sends use the original 1,200-byte threshold. Larger messages are
sent as `7DFF` frames with a little-endian 16-bit packet id, an index and
count byte, and 1,024-byte payload chunks. The count is `length / 1024 + 1`,
so an exact multiple has an empty final fragment. The sender retains the
original id rollover, partial-byte rounding, socket-enabled checks, and
UDP/Steam choice. It reloads lengths after byte-order calls and preserves
scratch-mode/header readbacks between fragments.

Reassembly uses a 64-slot ring keyed by packet id. Matching pending records
are reused; a full ring discards its oldest pending record. Indices below
16 and counts up to 16 follow the native acceptance rules, including count
zero. Duplicate/out-of-order fragments update the received mask and retain
the greatest payload end. Completion restores the message and sets its
read cursor to byte four. Scratch metadata changes before invalid headers
are rejected, as in the original.

Receive polling checks UDP when enabled, then falls back to Steam after
a nonpositive UDP result. Invalid marker/type frames and incomplete
fragment sets are skipped. Remote IPv4 address, port, Steam peer, length
and read cursor updates retain their native order. Marker comparisons
preserve the original signed marker-byte behavior. Negative final lengths
retain the legacy zero extension to the return register.

The computer path formatter resolves drives A and C, prints the drive
prefix, and appends directory names with separators. It caches the resolved
disk but reloads path depth after formatting/copies. Invalid drives clear
only the first output byte. The original unbounded string-copy behavior
is retained.

## Verification

The final `nettransport` and `computerpath` fixtures run 5,000 cases per
routine both against direct engine code and through the frozen client's
own wrappers: **80,000 primary routine comparisons and 790,996 identical
output lines**. Extra cases repeat fragments and compose send, receive and
reassembly into packet round trips.

Round-trip checks reconstruct the complete input bytes over both UDP and
Steam, including reverse-order fragments and exact-multiple empty tails.
They cover messages from four bytes to 16,383 bytes. Larger sender cases
also compare its native behavior through the 64-KB boundary. Fixtures
cover socket errors/returns, partial cursors, transfer capacity, cursor
aliasing, id rollover, invalid fragment headers, matching/new records,
full-ring eviction, queue wraparound, failed polls and transport fallback.

Checks include callback arguments/order, wire lengths and complete wire
payload hashes, output buffers, stream metadata, socket/peer state,
fragment masks/lengths, queue head/tail, helper returns and MXCSR. The final
check hashes the complete fragment table, including untouched tails.

The only controlled network boundaries are Winsock and Steam callbacks;
the actual packet transfer, fragment logic and original CRT byte-copy
callee execute in both images. No remote service is contacted. Adjacent
six-byte Winsock thunks are intercepted through their import-table slots,
avoiding overlapping code hooks. The path fixture controls only formatting
and executes the restored drive resolver normally.

The first mutation pass exposed two fixture gaps: queue cursors were not
printed, and its 500-case baseline did not fill the ring. The final fixture
adds cursor checks and directed full-ring cases; all comparisons and mutation
baselines were regenerated afterward. An initial code-hook overlap was
likewise corrected in the fixture before the successful comparisons.

All **55 final deliberate mutations** build and produce differing output
against passing 500-case baselines: 43 networking and 12 path mutations.
None is missed; none requires a fault or timeout. The final wrong-drive
mutation changes only a valid A-drive lookup, so malformed drive indices
retain the original early exit.

Related `netbits`, `missionscreens` and `computerjobs` suites each pass at
5,000 cases, adding 184,384 identical lines. The combined client build
links with zero unresolved symbols and zero duplicate definitions, with
2,455 existing compiler warnings. Both new engine C files compile with
`-O2 -Wall -Wextra -Werror` without diagnostics.

Results, mutation coverage, source hashes and captured compiled wrapper
body hashes are recorded in
`reports/codex-networktransport-20261012/verification.json`. The frozen
client is that directory's `integrated-link-probe.exe`. Comparisons use
private engine/object snapshots and frozen runners. These are finite
routine tests, not complete networking equivalence or a multiplayer
session test. This batch did not install the executable or restart the
user's game.

## Reproduction (PowerShell)

```powershell
$env:TESTS = 'nettransport computerpath netbits missionscreens computerjobs'
$env:CASES = '5000'
$env:NATIVE_COMPARE_OUT = "$PWD/build/native-compare-codex-networktransport-reproduction"
$env:NATIVE_COMPARE_ENGINE_DIR = "$PWD/build/codex-networktransport-engine-snapshot"
$env:RECOMP_EXE = "$PWD/reports/codex-networktransport-20261012/integrated-link-probe.exe"
& 'C:/Program Files/Git/bin/bash.exe' reports/codex-networktransport-20261012/run.sh
$env:TESTS = 'nettransport computerpath'
& 'C:/Program Files/Git/bin/bash.exe' reports/codex-networktransport-20261012/run_linked.sh
```

The final expanded fixtures can also be rebuilt against the frozen objects
with `python reports/codex-networktransport-20261012/compare_v2.py`.
Final mutation results are in
`build/native-compare-codex-networktransport-mutations-v2/mut/`.
