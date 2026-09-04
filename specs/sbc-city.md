# `.sbc` City Format

Status: first-pass skeleton from reader/writer candidates.

Samples:

- `../data/rivercity/city2.sbc`
- `../data/round/city2.sbc`
- `../data/test2/city2.sbc`

## Known Header

All observed scalar fields are little-endian.

The `asset_save_city_sbc_candidate` function at `0x1400D62A0` writes version `12` to `data/%s/city2.sbc` using binary write mode. Existing sample `rivercity/city2.sbc` begins with version `10`.

First observed `rivercity/city2.sbc` fields as `u32`:

```text
10, 0, 120, 386, 6, 288, 386, 6, 256, 256, 6, 256, 256, 6, 320, 256, 6, 288, 256, 6
```

## Writer Body Shape

The writer serializes:

- version `12`.
- one count followed by `count * 64` bytes.
- one count followed by `count` records of three 32-bit fields.
- one count followed by `count` records of five 32-bit fields plus a 32-byte string/blob.
- one count followed by `count` records of one 64-byte string/blob and four 32-bit fields.
- one count followed by complex city/building records:
  - 64-byte name/string.
  - count.
  - repeated groups of eight 64-byte string/blob fields per subrecord.

## Candidate Functions

- Reader: `asset_load_city_sbc_candidate` at `0x1400D5A50`
- Writer: `asset_save_city_sbc_candidate` at `0x1400D62A0`

## Next Work

- Diff reader and writer to recover exact field names.
- Build a one-record synthetic `.sbc` fixture once counts are fully known.
- Label version differences between sample version `10` and writer version `12`.
