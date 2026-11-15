# Quick routine unlocks

Six small routines now delegate from their client entry points to engine
C. Progress is 315/1,119 game routines.

| Original address | Engine routine | Behavior |
|---|---|---|
| 0x140080820 | disk_find_file | The first file of a directory whose name equals the text. |
| 0x1401189F0 | player_buy_shares | A player buys shares of their team's stock, capped at 10,000 held. |
| 0x140184AB0 | startup_mesh_remove_record | Removes a mesh index record by moving the last one into its place. |
| 0x140130000 | road_pick_random | A random road whose words at +0x30 and +0x34 are both at most 3. |
| 0x14018C250 | road_queue_links | Appends a road's links to the scratch list at 0x15FD06204. |
| 0x1400D5950 | block_chunk_cell | A block's cell in the sparse 8 x 8 x 8 chunk table. |

## Details kept from the original

- `disk_find_file` compares bytes up to the text's NUL, so a stored name
  of 16 characters runs into the entry's directory word, as in the
  original.
- `player_buy_shares` buys only when the cash, converted to float, is
  strictly above count × price. An unordered comparison (a NaN price)
  buys nothing. The cash left is truncated with `cvttss2si`. The sums of
  the held and requested shares, and the stock's share total, wrap in 32
  bits.
- `startup_mesh_remove_record` compares the record with the count as
  signed, so a count with the top bit set removes nothing. It copies the
  record's four index words, its tag and flag words, and the three words
  at 0x15134B768, which the block mesh's merge pass reads as floats.
- `road_pick_random` draws with `rand() % road_count` and redraws while
  either word is above 3. After 1,024 redraws it returns the last draw
  unchecked. With no roads it returns 0 without drawing.
- `block_chunk_cell` keeps the last matching record, not the first. Its
  chunk keys are the block coordinates shifted right by 3, which rounds
  negative coordinates down.

0x140080720 (the directory lookup next to the file lookup), 0x14018C2B0 (a
3 × 3 transpose) and 0x140127900 (a callback that returns its second
argument) were also small. The first two have no reference anywhere in
the executable, so they were left out, as with earlier unreferenced code.
The callback is only taken by address, in a decoder table, and is not
included either.

## Verification

Each group has its own native comparison, built as the original, the port
and the client wrappers:
- `diskfind`: counts from 0 to 256 and -1, names from a small alphabet
  including a byte above 0x7F, queries that equal a stored name, are one
  byte short or one byte long.
- `buyshares`: teams -2..5, held shares around the cap and at the integer
  limits, cash and prices including NaN, infinities, negative and huge
  values, and exact ties between cash and cost.
- `meshremove`: records -1, count - 1, count, count + 1 and the sign bit,
  counts up to 50,000 and 0x80000000.
- `roads`: road counts 0, 1, 2, 5, 40, 300 and -3, cases where no road
  qualifies (1,025 draws), link counts 0..300 and -1. `rand` is a
  recording stub in both builds. The queue count starts at 0, 3 or 1000.
  A start of -1, which no caller produces, makes the first store overwrite
  the count; the original then writes to an arbitrary index and crashes.
- `blockchunks`: up to 64 records over few distinct keys (repeated
  matches), negative block coordinates and counts of 0 and -1.

```
python tools/native-compare/run.py diskfind buyshares meshremove roads blockchunks --cases 4096
python tools/native-compare/run.py diskfind buyshares meshremove roads blockchunks --cases 4096 --client-wrappers
python tools/native-compare/mutate.py <suite> <file> tools/native-compare/<suite>.mutations --cases 1000
python scripts/build_quick.py --compile-only
```

All five comparisons matched in both modes, over 4,096 cases each (8,192
lines for `roads`). All 35 mutations were detected: 6 each for `diskfind` and
`blockchunks`, 8 each for `buyshares` and `meshremove`, 7 for `roads`. One
more `buyshares` candidate, the share cap tested with `>` instead of
`>=`, was dropped as equivalent: at exactly 10,000 the capped count
equals the requested count.

The quick build compiles and links. Gameplay launch has not been verified.
