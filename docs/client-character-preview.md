# Character menu preview in the C rebuild

The 2026-10-04 candidate restores the original Character menu's 3D head and
hair. The deployed client is `../client-link-probe.exe`. The original
`../subrosa.exe` is preserved; the old game-folder candidate is backed up at
`reports/client-character-preview-20261004/previous-game-root-client.exe`.
Practice repair remains paused at the user's request.

## Recovered behavior

The native draw at RVA `0xFBA50` uses contiguous position, 3x3 rotation, 4x4
transform and lighting-direction objects. The decompiler split each into
independent locals, so pointer consumers read unrelated stack words. The
shared unit-Y rotation axis at RVA `0x2F6188` was also exported as independent
scalars. This preview now supplies the original three-float axis as a local
constant. Its native gray clear color is passed through the float ABI.

The perspective setup at RVA `0x7A570` multiplies 32-bit integer words, then
converts the result as signed with `CVTDQ2PS`. Unsigned C globals changed its
negative Y coordinate to 65,536. Restoring signed interpretation produces the
original viewport: `(0, -120, 1920, 1200)` for this 1920x1080 capture.

These changes are persisted in `scripts/repair_client_character_preview.py`
and the normal client preparation pipeline. They retain the original meshes,
textures, shaders, camera and resource selection.

## Verification

`python scripts/test_client_character_preview.py` passes:

- 1,024 executions of the pinned native perspective routine versus C,
  comparing viewport and six matrices, including both presentation modes,
  negative coordinates and wrapped integer products.
- 512 executions of the complete pinned native preview versus C, comparing
  head/hair selection, uniforms, colors, lighting, transforms, draw counts
  and GL state changes. Both gender tables and appearance selectors vary.
  GPU callbacks, camera setup and the sine/cosine boundary are controlled
  identically on both sides; this fixture is separate from GPU verification.

The actual rebuilt client was then run through the Character transition.
GL readback confirms that its first head draw's active uniforms, projection,
rotation, viewport and clear color match the original. The presented frame
shows the head and hair. Captures:
`reports/client-link-character-20261004/frame.png` and
`reports/client-reference-character-frame-20261004/frame.png`.
The preview comparison report records 94 differing pixels in a 128,000-pixel
region containing the game cursor; the cursor positions differ.
An alternate female head, hair, eye color and palette also render in the live
client: `reports/client-character-female-20261004/frame.png`. Appearance inputs
for that capture were set through the diagnostic menu command file.
The deployed game-folder EXE then completed 2,283 counted frame swaps in the
Character menu during a 15-second observation without the diagnostic DLL.
The debugger detached successfully and left this rebuilt client running;
see `reports/client-character-delivered-20261004/launch-status.json`.

The clean C object build and final link pass with zero errors or unresolved
symbols. Native link verification passes for 7,913 instructions, 1,346
relative fixups, 68 read-only windows and 45 unwind entries. The client still
contains the previously documented native assembly bindings, so this is not
a claim of complete all-C game parity. No Practice integration run was made
for this change.

Candidate SHA256:
`6859dd05cd4fbc5dbe221f3c6c99e7131ee203c7f075541286145d6a35dfe29d`.
Original SHA256 remains
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.

The frame readback helper is diagnostic-only and is never linked into the
client. `--capture-frame` on `scripts/debug_client_launch.py` captures after
the menu transition settles; it requires GL tracing and the diagnostic DLL.
