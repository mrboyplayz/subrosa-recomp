# `.sbl` Block Format

Status: first-pass skeleton from `asset_load_block_sbl_candidate` at `0x1400E6E50`.

Sample: `../data/round/buildblock/house.sbl`

## Known Header

All observed scalar fields are little-endian.

| Offset | Type | Sample Value | Meaning |
| ---: | --- | ---: | --- |
| `0x00` | `u32` | `1` | version; loader accepts `1` and `2` |
| `0x04` | `u32` | `0` | global block field 0 |
| `0x08` | `u32/f32` | `0.0625` | global block field 1 |
| `0x0c` | `u32/f32` | `0.875` | global block field 2 |
| `0x10` | `u32/f32` | `0.25` | global block field 3 |
| `0x14` | `u32/f32` | `0.5` | global block field 4 |
| `0x18` | `u32/f32` | `0` | global block field 5 |
| `0x1c` | `u32` | `3` | entry count candidate |

The loader reads ten 32-bit header fields after the version into globals, then iterates `entry_count`.

## Entry Shape

Each main entry has a stride of `348` bytes in the destination table. The loader reads:

- four 32-bit values near the start of the entry.
- two additional 32-bit values near entry offsets around `0x150`.
- a nested `4 x 4` loop:
  - reads three `u32/f32` values into a 12-byte vector-like area.
  - reads two `u32/f32` values into an 8-byte UV-like area.

For version >= 2, the loader reads an extra count and then `count` extra records with a stride of `124` bytes:

- eight 3-component vector-like records.
- six 32-bit scalar fields.
- one trailing 32-bit scalar.

## Next Work

- Confirm whether the vector-like fields are vertices/normals and whether the 2-component fields are UVs.
- Compare `block/%s.sbl` and `buildblock/%s.sbl` call paths.
- Find renderer upload code that consumes the destination globals.
