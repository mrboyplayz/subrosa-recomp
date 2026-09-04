# File Format Index

Observed extensions under `../data`:

| Extension | Count | Initial Guess |
| --- | ---: | --- |
| `.sbl` | 83 | Building block / geometry piece |
| `.sbb` | 61 | Building definition |
| `.png` | 60 | Texture/material image |
| `.cmo` | 43 | Character/item model |
| `.cmc` | 12 | Character clothing/material config |
| `.sbv` | 7 | Vehicle definition |
| `.csx` | 3 | Scene/map script or config |
| `.it3` | 3 | Item/object definition |
| `.itm` | 3 | Item definition |
| `.sbc` | 3 | City/building collection |
| `.sis` | 2 | Item set |
| `.tst` | 2 | Test scene/config |
| `.srm` | 1 | Mission definition |
| `.srv` | 1 | Server/world vehicle or config |

Each spec should include:

- Sample paths.
- Header bytes.
- Primitive sizes and endian assumptions.
- Field table.
- Cross references from loader functions.
- Synthetic fixture tests.
