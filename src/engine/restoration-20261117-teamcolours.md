# Team colours on the end-of-round screens

The three end-of-round screens drew every corporation name, money readout and
player row plain white. The colours were not missing from the game: the
routines had them, but their text calls went through a four-argument stub that
could not pass them.

| Screen | Original routine |
|---|---|
| Scoreboard, three corporation columns and their players | 0x140089430 |
| Vote summary with the "wins" banner | 0x14008A110 |
| Round result with the winner's name | 0x14008B050 |

## What was wrong

`0x14006D930` (the text call, `sr_CSDrawText` in the client) is variadic:

```
format (rcx), x (xmm1), y (xmm2), size (xmm3),
flags  [rsp+20h], red [rsp+28h], green [rsp+30h], blue [rsp+38h],
alpha [rsp+40h], then the format's arguments from [rsp+48h]
```

The recompiled calls used `sr_CSDrawText(format, x, y, size)`, four arguments,
so `sr_CSDrawText` fell back to flags 0 and white at alpha 1. Everything the
builders had computed, the colours derived from the corporation table
`dword_1402B2830/34/38`, sat in registers the four-argument stub never read.

`sr_text_draw_recovered` already takes the full argument list, so each site was
changed to call it with the values the original passes. The decompiled bodies
were already filling the right frame slots (`float_word_4`, `scaled_value_4/5/6`,
`selection_code`, `scaled_index_14`); those are now handed to the call instead
of being computed and dropped.

## What each site draws

Scoreboard, per column (`element_index`), with the corporation colour
`dword_1402B2830/34/38[3 * element]` in red/green/blue order:

- 0x140089616 the corporation name, flags 0x60
- 0x1400896F0 / 0x140089776 the money readout, flags 0x22
- 0x14008982D the column's ordinal ("1." "2." "3."), flags 0x20
- 0x140089F7D a player's name, flags 0x60, colour halved while the record's
  +0x44 word is zero
- 0x14008A01C a player's cash, flags 0x22, colour not halved

The fourth column has no corporation: it draws white (0x1400897BA) and its
name string is the empty one at 0x140270199, not `Parameters`.

Vote summary (0x14008A110) and round result (0x14008B050) are the same pattern
with these differences:

- the third corporation's column is brightened 1.5x (0x14008A39F, 0x14008B243)
- the "wins" banner (0x14008A2FD, 0x14008B20D) is drawn in the winner's own
  colour with flags 0x21. The recompiled call had 0x20, which also left it
  uncentred
- the player rows dim to half brightness for an unselected player under
  game_state 1 (0x14008AE04, 0x14008BC37)

Several calls also lost their format arguments: the money readout's value and
percent, the bonus, and the cash total. Those are passed again, so the numbers
appear next to the colours.

## How it is checked

`tools/native-compare/t_teamscreens.c` runs the three screens with
`0x14006D930` overwritten by a recorder that prints the format, flags, the four
colour components and the arguments the format consumes. The native build runs
the original routines; the port build runs the recompiled ones through
`--client-wrappers`. The corporation table holds distinct markers per
corporation and channel, so a transposed channel cannot pass.

```
python tools/native-compare/run.py teamscreens --client-wrappers
python tools/native-compare/mutate.py teamscreens ...   (see below)
```

The suite compares 74 lines identical, covering every corporation heading,
money readout, bonus, total, winner banner and player row. Its 14 mutations
(`tools/native-compare/teamscreens.mutations`) are all detected: swapped red
and blue, dropped centring flags, white headings, a white banner, the banner's
flag 0x21, the third-column brightness, the fourth column's white, the money
readout's flags and percent, the row dimming, the row flags, the row cash
colour, a white badge number, and a dropped cash total.

`mutate.py` only rewrites `src/engine`, so these were applied to
`src/client/client_recovery_080000.c` by hand with the same block format.

## The player rows

The rows needed six planted players for the loops to run. Each player record's
text starts at 0x151620C64 with a stride of 0x3834, and the scanner includes a
player only when the word at +0x2D14 is zero. Corporation (+0x80), badge
(+0x2C), cash (+0x48), total (+0x60) and the dimming flag (+0x44) are written
from that base.

Two calls are stand-ins in both builds and so are outside the comparison: the
original's own sprintf (0x140158AB0), which faults without its runtime set up,
and the per-row icon draw (0x14006D300) and mouse-over handler (0x140117820).
None of them carries a colour.

`terminal` fails in `run.py` on unmodified master as well (the original exits
with a crash), so it is not a regression from this change.
