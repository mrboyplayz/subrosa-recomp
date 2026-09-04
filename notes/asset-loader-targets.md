# Asset Loader Targets

IDA session: `6e34c40b`

## Building Blocks

String evidence:

- `0x1402739e8`: `block/%s.sbl`
- Referenced by `sub_1400E6E50` at `0x1400e6e6e`
- Function size: 1,042 bytes
- Basic blocks: 22
- Complexity: 12
- Other strings: `rb`

Initial hypothesis: `.sbl` block loader. It likely receives a block name, formats `block/%s.sbl`, opens in binary read mode, and populates an in-memory block/mesh descriptor.

Next steps:

- Inspect call sites to determine owner subsystem and destination struct.
- Identify all reads and their sizes/order.
- Compare against sample files in `../data/rivercity/block/` and `../data/test2/block/`.

## Buildings

String evidence:

- `0x140273a00`: `building/%s.sbb`
- Referenced by `sub_140026830` at `0x140026883`
- Prototype currently inferred by IDA: `__int64 __fastcall(void *Buffer)`
- Function size: 1,600 bytes
- Basic blocks: 36
- Complexity: 25
- Other strings: `rb`

Initial hypothesis: `.sbb` building loader. The function writes `4` to `[rcx+0x54]` early, so `rcx` is probably a building asset object or load context.

Next steps:

- Rename argument once struct role is clearer.
- Mark fixed offsets from `rcx` as a tentative `BuildingAsset` struct.
- Find functions that allocate or initialize objects passed into `sub_140026830`.

## Other Format Strings To Trace

- `0x140273a10`: `buildblock/%s.sbl`
- `0x140274938`: `data/%s/building/*.sbb`
- `0x140276294`: `*.sis`
- `0x140276380`: `data/%s/city2.sbc`
- `0x140276398`: `city2.sbc`
- `0x1402768f8`: `data/model/%s.cmc`
- `0x140277338`: `test.srm`
- `0x140277f18`: `data/%s.sbv`

## Naming Candidates

Use tentative names only after inspecting the bodies:

- `sub_1400E6E50` -> `asset_load_block_sbl_candidate`
- `sub_140026830` -> `asset_load_building_sbb_candidate`

Keep the `_candidate` suffix until return values, arguments, and side effects are understood.
