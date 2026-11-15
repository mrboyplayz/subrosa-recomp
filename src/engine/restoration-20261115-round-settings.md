# Round mode settings

Round mode is game type 3 (the server menu's "Round Mode" button and the
server list's "Round" label). This batch restores its settings file; progress
is 307/1,119 game routines.

| Original address | Engine routine | Behavior |
|---|---|---|
| 0x1400EC410 | round_settings_file | Saves the five round settings to config_round.txt, or resets them to the defaults and reads the file over them, then clamps the round length and team damage. |

The five words at 0x183F7A5AC are `roundtime=` (minutes), `startcash=`,
`weekly=`, `bonusratio=` and `teamdamage=`. Defaults are 10, 250, 0 and 1
from the original's constant at 0x140278EC0, then 50 for team damage. Round
length is kept within 1..60 and team damage within 0..200. A failed open
for writing returns before the clamps. The original's return value is
whatever its last call left in xmm0, and its only caller (the config loader
at 0x1400EAA00) ignores it.

How the round code uses the values: the round update at 0x1400F6C50 starts
its timer at 3600 ticks per minute of `roundtime`, and when `weekly` is
nonzero, 0x140095B00 gives joining players `startcash`. The meanings of
`bonusratio` and `teamdamage` have not been established.

The original inlines the parser's token search (0x140091DF0) five times. The
port calls `parser_skip_to_token` instead. The first search continues from
the cursor the loader left, and every later one restarts from 0. The cursor
is left at 0 after loading.

`roundsettings` stubs fopen, fclose, the fprintf at 0x1400920F0, the file
loader at 0x1400ED940 and the number reader at 0x1400A3D70 in both builds,
and logs their arguments as text. The generated config text mixes whole
keys, keys cut short or with one byte changed, digits, line ends, NUL bytes
and noise. Its length can stop inside a key or right after one, and can be
zero or negative. The loader stub sometimes leaves a nonzero cursor, and
the number stub moves the cursor and returns edge values with garbage upper
bits. The settings start from edge or random values, and the 16 bytes on
each side are randomized and hashed to catch stray writes.

Validation commands (SUBROSA_GAME_DIR points to the installed game):

```
python tools/native-compare/run.py roundsettings --cases 4096
python tools/native-compare/run.py roundsettings --cases 4096 --client-wrappers
python tools/native-compare/mutate.py roundsettings round_settings.c tools/native-compare/roundsettings.mutations --cases 600
python scripts/build_quick.py --compile-only
```

Both comparisons matched: 37,018 lines, digest `819c2d4bdd332f15`. Across
4,096 cases there were 2,991 number reads, 1,673 save attempts (419 with a
failed open), and 18 cases that read all five keys. Clamps were hit at
both ends of both ranges. All ten deliberate mutations were detected. The
quick build compiles and links. Gameplay launch has not been verified.

This batch also restores the `record_slots.c` and `math_random_double.c`
rows of `src/engine/README.md`, which were dropped when an earlier merge's
conflict was resolved.

Next for round mode: the round update itself, 0x1400F6C50, called from the
game update dispatcher at 0x1400F5820. It covers the warmup countdown, the
announcements at 1250, 1200 and then every 120 ticks down to 120
(0x1400F0160), the round timer, spawning, and the end-of-round reset.
