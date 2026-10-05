# Recovered C Source

The `src/` tree contains clean-room C reconstructions based on observed binary behavior, sample files, and the format notes under `specs/`.

This is intentionally not a raw Hex-Rays export. The files are meant to be readable, buildable, and safe to publish as original reconstruction work:

- `sr_binary.c/.h` - little-endian binary reader helpers.
- `sr_sbb.c` - first-pass `.sbb` building header parser.
- `sr_sbl.c` - first-pass `.sbl` block header parser.
- `sr_sbc.c` - first-pass `.sbc` city preview/parser skeleton.
- `sr_sbv.c` - first-pass `.sbv` vehicle point parser.
- `sr_runtime.c/.h` - first-pass runtime structs for input, camera, player profile, and UI state.
- `sr_ui_original.c/.h` - recovered C reconstruction of the original immediate-mode UI widget table and options menu.
- `sr_ui_win.c` - native Windows C renderer for trying the reconstructed HUD/menu/map/options UI visually.
- `sr_geometry.c/.h` - recovered mesh loaders for `.cmo` vertex/face data and `.sbv` vehicle points.
- `sr_3d_win.c` - native Windows C 3D wireframe viewer for recovered model/vehicle geometry.
- `main.c` - `sr_probe` command-line entry point.
- `sr_maptool.c` - read-only CSX bundle inspector, SBB/SBC record dumper, and
  byte-exact round-trip verifier for reconstructed `.sbl`, `.sbb`, and `.sbc` codecs.

## Build

```sh
cmake -S . -B build -G Ninja
cmake --build build
```

This produces:

- `build/sr_probe.exe` for parsers/debug output.
- `build/sr_ui.exe` for the visual UI window.
- `build/sr_3d.exe` for the visual 3D geometry viewer.
- `build/sr_maptool.exe` for native map asset inspection and round-trip checks.

## Probe Examples

```sh
./build/sr_probe ../data/test2/building/bank.sbb
./build/sr_probe ../data/round/buildblock/house.sbl
./build/sr_probe ../data/rivercity/city2.sbc
./build/sr_probe ../data/beamer2.sbv
./build/sr_probe ../data/model/9mm.cmo
./build/sr_maptool inspect ../data/test2/block/wallright.sbl
./build/sr_maptool roundtrip ../data/test2/building/bank.sbb
./build/sr_maptool roundtrip ../data/test2/city2.sbc
./build/sr_maptool inspect ../data/test2/test.csx
./build/sr_maptool dump ../data/test2/city2.sbc
./build/sr_probe --ui-options
./build/sr_ui
./build/sr_3d
```

## Verification

The first build completed with MinGW GCC 16.1.0, and `sr_probe.exe` successfully parsed representative `.sbb`, `.sbl`, `.sbc`, `.sbv`, and `.srv` samples from the local install.
