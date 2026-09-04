# `.sbb` Building Format

Status: first-pass skeleton from `asset_load_building_sbb_candidate` at `0x140026830`.

Sample: `../data/test2/building/bank.sbb`

## Known Header

All observed scalar fields are little-endian.

| Offset | Type | Sample Value | Meaning |
| ---: | --- | ---: | --- |
| `0x00` | `u32` | `14` | version; loader accepts `12`, `13`, `14` |
| `0x04` | `u8[64]` | mostly zero in sample | name or fixed string/blob copied to asset base |
| `0x44` | `u32` | `16` | dimension/count candidate |
| `0x48` | `u32` | `16` | dimension/count candidate |
| `0x4c` | `u32` | `2` | dimension/count candidate |
| `0x50` | `u32` | `4` | present when version >= 13 |
| `0x54` | `u32` | `0` | present when version >= 13 |
| `0x58` | `u32` | `4` | present when version >= 13 |

The loader initializes several defaults before reading:

- offset `0x40`: `24`
- offset `0x44`: overwritten by file
- offset `0x48`: `4`, overwritten by file
- offset `0x4c`: `4`, overwritten by file for version >= 13
- offset `0x50`: `4`, overwritten by file for version >= 13
- offset `0x54`: `4`, overwritten by file for version >= 13

## Body Shape

When the third argument is false, the loader continues after the header and reads several counted string tables:

- count at object offset `47187628`, followed by `count * 64` bytes.
- count at object offset `47208112`, followed by `count * 64` bytes.
- count at object offset `47277748`, followed by `count * 64` bytes.
- count at object offset `47282872`, followed by `count * 64` bytes.

It then loops over a 3D grid controlled by the header dimensions. Each cell stride appears to be `60` bytes inside a `3840`-byte row/slice stride and contains:

- six `u32` values at cell-relative offsets `0x58..0x6c`
- twelve `u16` values at cell-relative offsets `0x70..0x86`
- additional fields after the current decompiler truncation point

## Next Work

- Force a cleaner struct type for the building object so huge absolute offsets become named regions.
- Finish the post-`0x140026ca6` read list.
- Compare multiple `.sbb` samples to label dimensions and optional versioned fields.
