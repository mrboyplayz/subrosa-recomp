# Sub Rosa Map Pipeline (Current Working Model)

## Runtime layout observed in the installed data tree

A map is a directory below `data/<map-name>/`, not one monolithic mesh:

```text
data/<map-name>/
  test.csx             bundled map resources (SBB/SBL/PNG entries)
  city2.sbc            city-level placement / street / chunk data
  building/*.sbb       reusable building prefabs
  block/*.sbl          current renderable block resources
  buildblock/*.sbl     legacy building-editor block resources
  texture/*            textures referenced by block/building resources
  model/*               models referenced by building resources
  buildblock/*          portals and other building-resource geometry
```

Some maps keep these resources loose; others bundle them in `test.csx`. The
CSX archive has a 12-byte header (`0xC5F17E01`, lookup-table offset, entry
count) and 64-byte lookup records identifying SBB, SBL, or texture payloads.
The exact folders present vary between maps and game versions. The same
`.sbl` extension is used by at least two different loaders: the current
`block/<name>.sbl` format and a legacy `buildblock/<name>.sbl` format. Do not
assume a decoder for one path accepts the other.

## Formats decoded and verified so far

- **SBL current block:** version 1 or 2, nine 32-bit header words followed by a
  patch count; each 344-byte serialized patch has four prefix words, a 4×4 grid
  of position/UV control points, then two suffix words. Version 2 adds solid
  records. Exact re-encoding matches installed patch-bearing examples and
  solid-bearing version-2 samples byte-for-byte. The experimental Smallotown
  shell also decodes and re-encodes byte-for-byte, but that does not prove the
  game renders it correctly.
- **SBB building:** versions 12-14; fixed name, grid dimensions, four counted
  64-byte resource-name tables, grid cells, and version-14 path extensions.
  The current decoder round-trips an installed version-14 sample byte-for-byte.
- **SBC city:** versions 7-12; counted name/triple/area/building tables,
  versioned groups, large city chunks, and a final triple table in newer
  variants. The current decoder round-trips installed version-10 and version-12
  samples byte-for-byte.

## Practical build pipeline

1. Convert BSP world surfaces and displacement meshes to **current block**
   geometry, split into manageable `.sbl` resources, and convert their
   materials to Sub Rosa texture assets.
2. Build `.sbb` prefabs that reference those resources and preserve useful
   building/collision/gameplay cells. Source props need separate model or
   prefab conversion; they are not carried by world geometry alone.
3. Build or adapt `city2.sbc` to place those prefabs/areas and define the city
   chunks. Keep dimensions and coordinates within the target engine's limits.
4. Package under a new `data/<map-name>/` directory, run structural checks,
   then verify in game only after a minimal fixture passes.

## Current Smallotown command-line experiment

The BSP-to-scene import is currently performed with SourceIO in Blender. The
following headless Blender command converts world/displacement meshes from that
scene into an experimental SBL plus extracted textures (props are intentionally
not included in the shell):

```powershell
& 'C:\Program Files\Blender Foundation\Blender 5.0\blender.exe' --background `
  --python decompilation\work\smallotown-visual-port\export_world_sbl.py -- `
  --blend 'decompilation\exports\smallotown-visual-port\Smallotown_Source_Import_With_Props.blend' `
  --out 'decompilation\exports\smallotown-visual-port\SubRosa_Intermediate'
```

Then validate the generated block structure with:

```powershell
decompilation\build\sr_maptool.exe inspect `
  decompilation\exports\smallotown-visual-port\SubRosa_Intermediate\block\smallotown_shell.sbl
decompilation\build\sr_maptool.exe roundtrip `
  decompilation\exports\smallotown-visual-port\SubRosa_Intermediate\block\smallotown_shell.sbl
```

This is a reproducible conversion and format-checking path, not yet a complete
map packager: the shell is not linked from an `.sbc` city layout or `.sbb`
building, and runtime loading has not been proven.

The game developer described the later city editor as 3D and capable of hills,
tunnels, subways, and freeways, and separately described the newer building
editor's window/door system. This agrees with the split city/building/block
asset model above. The older community `rosedit` documentation is explicitly
for alpha 0.25, so its editor controls are historical evidence, not a guide to
the current file layout.

## Confidence / remaining unknowns

The local `sr_maptool` currently provides **read-only inspect** for CSX
bundles, **dump** for city/building records, and **roundtrip** for `.sbl`,
`.sbb`, and `.sbc`. Roundtrip proves that the decoder/encoder preserves the tested
samples; it does not by itself validate semantics or runtime rendering.
The legacy `buildblock/*.sbl` layout, some building cell flags/material IDs,
city chunk semantics, collision behavior, and exact placement axes still need
comparison against a minimal in-game fixture. The experimental Source BSP shell
is not a playable map and has not been installed or loaded in Sub Rosa.

## External references

- Cryptic Sea's [2016 development update](https://crypticsea.blogspot.com/2016/08/sub-rosa-plan-81516.html) describes the newer 3D city editor and updated building editor.
- The community [rosedit repository](https://github.com/Defaultplayer001/rosedit) documents the much older alpha-0.25 in-game editor and its city/building editing workflow.
