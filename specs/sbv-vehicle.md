# `.sbv` Vehicle Format

Status: first-pass skeleton from `asset_load_vehicle_sbv_candidate` at `0x140192EC0`.

Sample: `../data/beamer2.sbv`

## Known Header

All observed scalar fields are little-endian.

| Offset | Type | Sample Value | Meaning |
| ---: | --- | ---: | --- |
| `0x00` | `u32` | `3` | version candidate |
| `0x04` | `u32` | `20` | vertex/point count candidate |
| `0x08` | `f32` | `-0.8125` | first geometry coordinate |
| `0x0c` | `f32` | `-0.3125` | first geometry coordinate |
| `0x10` | `f32` | `-1.1875` | first geometry coordinate |
| `0x14` | `f32` | `1.0` | scalar or fourth coordinate |

The first geometry block reads naturally as repeated four-float tuples:

```text
(-0.8125, -0.3125, -1.1875, 1.0)
( 0.8125, -0.3125, -1.1875, 1.0)
( 0.8125, -0.3125,  1.4375, 1.0)
(-0.8125, -0.3125,  1.4375, 1.0)
```

## Candidate Function

`asset_load_vehicle_sbv_candidate` at `0x140192EC0`.

Properties:

- Formats `data/%s.sbv`.
- Opens in binary read mode.
- Large parser: 4,370 bytes, 156 basic blocks.
- Calls an allocation helper and a post-load setup helper.

## Next Work

- Split the loader into read phases by offsets and call sites.
- Identify the allocation target and destination vehicle struct.
- Compare all seven `.sbv` files for count and version consistency.
