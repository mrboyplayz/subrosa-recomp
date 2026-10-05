# Current `.sbl` Block Format

Status: structurally recovered from the current `block/%s.sbl` loader at
`0x1400E6E50`; checked against installed version-2 files with both patches and
solids. This is distinct from the legacy `buildblock/%s.sbl` loader path.

## Header

All fields observed so far are little-endian 32-bit values. The first word is
the version (`1` or `2`); the next nine words are block-level values. The
loader reads the patch count at offset `0x28`.

| Offset | Type | Meaning |
| ---: | --- | --- |
| `0x00` | `u32` | version; current loader accepts 1 and 2 |
| `0x04`–`0x24` | 9 × `u32` | block-level dimensions/parameters; semantic meanings still being mapped |
| `0x28` | `u32` | patch count |

## Patch records

Each on-disk patch record is 344 bytes:

1. Four prefix `u32` values (16 bytes).
2. A 4×4 control grid of 16 records (320 bytes). Each record is five `f32`
   values: three position-like components followed by two UV-like components.
3. Two suffix `u32` values (8 bytes).

The destination table in the executable uses a 348-byte stride, which includes
four bytes not present in each serialized record. Do not serialize the
destination stride as the disk record size.

After all patches, version 2 has a `u32` solid count followed by 124-byte
records. Each record contains eight 3D points (96 bytes) plus seven `u32`
values (28 bytes). The precise solid flags/material semantics are not fully
identified yet.

## Validation and caveats

`sr_maptool roundtrip` is byte-identical on installed patch-bearing examples
such as `data/test2/block/ramp.sbl` and `data/test2/block/garagerampcircular.sbl`,
and on the generated Smallotown shell. It also round-trips solid-bearing
current blocks. This validates the serialized structure, not rendering,
collision, material interpretation, or city integration.

The same extension appears under `buildblock/`, but that is a different legacy
resource/loader family. A legacy file failing this current-block decoder is
expected; it does not imply the current `block/` decoder is invalid.
