# IDA Workflow

## Session

Current IDA MCP session opened for `subrosa.exe`: `6e34c40b`

## Naming Discipline

- Rename only after at least two pieces of evidence: strings, imports, call sites, constants, or data layout.
- Prefer subsystem prefixes from `docs/roadmap.md`.
- Add comments with evidence and uncertainty.
- Save snapshots before broad renaming passes.

## Initial Queries

Good first string searches:

- `data/`
- `.sbl`
- `.sbb`
- `.cmo`
- `.sbv`
- `SDL_`
- `socket`
- `modelviewprojectionmatrix`
- `lightdirection`

Good first import groups:

- SDL window/input/render/audio calls.
- Winsock send/recv/select calls.
- Steam callbacks.

## Export Policy

Small function summaries, prototypes, names, offsets, and struct hypotheses are fine. Do not export bulk decompiler pseudocode into Git.
