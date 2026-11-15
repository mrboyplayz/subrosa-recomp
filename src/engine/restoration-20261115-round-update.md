# Round mode update

The per-tick update of round mode (game type 3), called by the game update
dispatcher at 0x1400F5820, is now `round_update` in `round_update.c`.
Progress is 308/1,119 game routines. This builds on the round settings
batch (0x1400EC410).

| Original address | Engine routine | Behavior |
|---|---|---|
| 0x1400F6C50 | round_update | One tick of round mode. `game_state` selects the lobby, the running round or the round-over phase. |

## What the phases do

Every tick, each active player's word at +0x88 counts down to 0.

**Lobby (state 1).**
- Counts active non-bot players on a corporation (team 0..2), and checks
  whether all of them are ready (+0x48).
- Below 5400 ticks, spawns each such player without a human at their
  corporation's spawn point, with ±3 units of random offset on x and z and
  0.25 units lower. The player faces the corporation's angle plus π/2 and
  gets model 1 and team colours.
- When the timer equals the door-close tick (0x183EBFCDC), all three
  corporation doors close (event 10, open 0).
- The timer counts down. With nobody on a team, 5401..6899 resets to 6900.
  When everyone is ready, the timer jumps to 5400.
- At 5400 the round is set up: the eight records at 0x19021F244 are partly
  refilled, each corporation's manager is announced ("%s Manager: %s"),
  and each corporation gets a vehicle (a second one with more than four
  members) and two desk phones numbered 1111·(c+1) and 1111·c+1112.
- Below 5400, the timer runs 7 ticks faster while every human on a team
  sits in a vehicle.
- At 0, active missions are updated, all doors open, `game_state` becomes
  2, and the timer becomes 3600 × `round_settings->round_minutes`.

**Round (state 2).**
- Every 3600 ticks, the player words at +0x68 and +0x70 are cleared and
  +0x6C counts down.
- After 7200 ticks, the timer runs 9 ticks faster while some valuable item
  (types 17 and 19..24) is outside every corporation interior and every
  human is inside their own corporation's interior.
- A corporation whose players have no humans has its door opened.
- With every valuable in a vault, or no living non-bot player, the timer
  drops to at most 60.
- At 0, 0x1400F3E60 runs, `game_state` becomes 3 and the timer becomes the
  round-over length (0x183EBFD30).

**Round over (state 3).**
- Announcements (0x1400F0160) go out at ticks 1250, 1200, 1080, 960, 840,
  720, 600, 480, 360, 240 and 120. The timer is read again after each one.
- At 0, each corporation's richest player becomes its manager and gets the
  flag at +0x90. With the weekly setting, wealth is the bank account
  balance; otherwise it is shares × the corporation's share price + cash.
  A new manager clears the corporation's word at +0x58BC.
- Every active non-bot player then goes through 0x140117340, and the game
  is reset.

## Details kept from the original

- Event type 10 is the corporation door event, so the original's inlined
  event writes go through `event_corporation_door`. The manager
  announcement goes through `event_message`.
- The bound tests follow the original's COMISS branches, not the
  decompiler's C. A NaN coordinate or lower bound fails, and a NaN upper
  bound passes. The exception is the item checks for corporations 0 and 1,
  whose last test is an ordered "upper above z". The winner test skips only
  on an ordered `best >= worth`, so a NaN worth wins and stores the
  `cvttss2si` result.
- A failed human or vehicle creation (-1) is still written through with a
  signed index, as the original does.
- The second desk phone is placed from the first phone's saved position
  and the rotation as the callee left it.
- Timer arithmetic wraps the way the original's 32-bit instructions do.
- The client wrapper declares `round_update` locally rather than including
  the header, so `frame.h` does not redefine the client's state macros in
  `client_recovery_0e0000.c`.

## Verification

`roundupdate` puts recording stubs behind every callee except the matrix
rotation (0x14007B2A0, which runs as the original in both builds),
including `rand`, sprintf, vehicle, item and human creation, the
announcement (which sometimes changes the timer) and the reset. Each case
builds a fresh scenario:
- the phase, with the timer on its boundaries (5400/5401/6899/6900, hour
  marks, 60/61, announcement ticks, 0/1);
- 0..9 players with mixed teams, bots, ready flags, humans and names;
- humans in vehicles or not, inside or outside their own interior;
- 0..5 items of valuable and other types, placed inside, on the edge of or
  outside interiors and vaults;
- bounds with occasional NaNs;
- parking spots, members, missions, managers, share prices (including NaN),
  accounts, connected or not;
- the event ring near its wrap.

The output hashes player fields, the corporation records, the round
records, the event slots and every written word of the other records,
including the -1 slots.

Validation commands (SUBROSA_GAME_DIR points to the installed game):

```
python tools/native-compare/run.py roundupdate --cases 4096
python tools/native-compare/run.py roundupdate --cases 4096 --client-wrappers
python tools/native-compare/mutate.py roundupdate round_update.c tools/native-compare/roundupdate.mutations --cases 600
python scripts/build_quick.py --compile-only
```

Both comparisons matched: 107,129 lines, digest `c70d967e54a078ab`.
Across 4,096 cases:
- lobby: 228 cases start the round, 226 set it up (182 through the ready
  jump), 387 spawn players, 184 run the aboard speed-up and 78 hit the
  6900 reset;
- running round: 284 run the 9-tick speed-up, 588 hit the 60 clamp and
  255 end the round;
- round over: 213 choose managers and reset.

One case in five leans on unordered comparisons. These cases are in the
running round, with everyone placed strictly inside their own interior and
valuables strictly inside the third corporation's interior, whose upper z
bound is then set to NaN. Account balances repeat and include zero, so
ties are exercised.

All 25 mutations were detected at 600 cases. One more candidate, the
weekly setting read once before the loop instead of per corporation, was
dropped: nothing in the loop writes the setting, so it is equivalent.

The quick build compiles and links. Gameplay launch has not been verified.

The remaining round-mode routines named in the earlier notes (purchases,
per-player sync at 0x14011B2A0, joining at 0x140095B00) are still
decompiler output.
