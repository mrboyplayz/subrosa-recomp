# Steam ticket staging restoration, 2026-11-14

One client routine now calls a typed engine implementation. It leaves the
address-ordered recovery files (368 remain).

| Original address | Client entry point | Engine implementation |
| --- | --- | --- |
| `0x1401880C0` | `sr_steam_ticket_stage` | `world_street_mesh.c`: Steam encrypted app ticket staged for the master handshake |

## Native behavior retained

0x1401880C0 sits among the street routines in the binary (0x140188720,
0x140188900, 0x140188B80) but is Steam's encrypted-app-ticket callback. The
master-server auth update 0x14006BED0 registers it as the call result
(callback ID 154, `EncryptedAppTicketResponse_t`) through 0x140198D20, which
asks Steam for the ticket with no additional data; the dispatcher
0x140198300 reads the response with GetEncryptedAppTicket into a 1024-byte
buffer and calls the callback with the ticket data and its length. The
callback stores the length word (0x1829F8BD4), copies up to 1024 bytes into
the staging buffer (0x1829F8BD8, immediately followed by the flag) and
raises the received flag (0x1829F8FD8): the status line shows
"Steam Ticket..." while the flag is clear, and the auth update drains the
ticket into packet type 72 behind the 32-byte player name. Lengths over the
1024-byte cap are dropped whole.

The skip path leaves the original's result register unset. No caller reads a
result there (the call-result dispatcher discards it, and the routine's only
other reference is its address as a callback), so the port returns a defined
NULL and the comparison prints the staged path's return only, with the guard
that decides which path happened printed as the same input-derived logic in
both builds.

## Verification

The suite `streetbuf` drives the callback over 2,000 cases with lengths 0,
1, 0x3FF, 0x400, 0x401, wild unsigned words, and random values over
0..0x401, and random-word tickets. The staged state (length word, 1024-byte
buffer, received flag — one contiguous 0x408-byte range) is random junk
before each call, so the skip path's untouched bytes and everything past
`length` on the staged path compare as well as what the copy writes.

    streetbuf  8,001 identical lines  (2,000 cases, before and after the
    client wrapper received its engine body)

Mutation checks plant 8 deliberate bugs across the new suite — the cap
compared with `<` instead of `<=`, the cap raised to 0x500, the length word
not stored, the copy always 1024 bytes, the copy short by one byte, the
received flag set to the length, the flag never raised, and NULL returned on
the staged path — all detected at 500 cases.
