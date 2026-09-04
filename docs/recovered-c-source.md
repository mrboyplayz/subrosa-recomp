# Recovered C Source

The `src/` tree contains clean-room C reconstructions based on observed binary behavior, sample files, and the format notes under `specs/`.

This is intentionally not a raw Hex-Rays export. The files are meant to be readable, buildable, and safe to publish as original reconstruction work:

- `sr_binary.c/.h` - little-endian binary reader helpers.
- `sr_sbb.c` - first-pass `.sbb` building header parser.
- `sr_sbl.c` - first-pass `.sbl` block header parser.
- `sr_sbc.c` - first-pass `.sbc` city preview/parser skeleton.
- `sr_sbv.c` - first-pass `.sbv` vehicle point parser.
- `sr_runtime.c/.h` - first-pass runtime structs for input, camera, player profile, and UI state.
- `main.c` - `sr_probe` command-line entry point.

## Build

```sh
cmake -S . -B build -G Ninja
cmake --build build
```

## Probe Examples

```sh
./build/sr_probe ../data/test2/building/bank.sbb
./build/sr_probe ../data/round/buildblock/house.sbl
./build/sr_probe ../data/rivercity/city2.sbc
./build/sr_probe ../data/beamer2.sbv
```

## Verification

The first build completed with MinGW GCC 16.1.0, and `sr_probe.exe` successfully parsed representative `.sbb`, `.sbl`, `.sbc`, `.sbv`, and `.srv` samples from the local install.
