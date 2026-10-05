# Client font, cursor and menu recovery — updated 2026-10-04

Target: the pinned vanilla Windows executable. These changes are applied by
`prepare_rebuild.py`; raw decompiler exports and the original executable are preserved.

## Current integration state — 2026-10-04

The client reaches the main menu. Options was confirmed by the user. Bounded
debugger exercises entered Credits, Copy System Info and Join without a crash
for 12, 12 and 15 seconds respectively. Only button results were controlled;
the original transitions and handlers ran. These checks do not verify OS mouse
clicks, visual font/cursor correctness, a server connection or long sessions.

Practice passes asset loading, world initialization and the repaired rotation,
collision, transformed mesh and human orientation paths. It still aborts on an
NVIDIA OpenGL worker with exception `0xc0000409`. It is not playable. The latest
clean candidate is `reports/client-link-human-orientation-20261004/`; its
Practice launch report records this remaining failure. Graphics tracing reaches
the visibility and shadow passes, followed by another world material draw.
Values captured after an interrupted debugger function call are invalid
diagnostic state and must not be treated as game draw arguments or buffer sizes.

The latest source recovers 265 dynamic data references, four vehicle creation
aliases, twelve unaligned item-ring stores, block raycast results, the Practice
spawn index, 161 ignored cookie-return artifacts in 109 functions and the
orientation blend. Rendering follow-up restores eleven initial world GL call
sites, seventy other vertex layouts, three computed vertex offsets, three
element offsets, nineteen scalar/draw call sites and seven contiguous render
workspaces totaling 300 bytes. These are scoped repairs, not whole-game parity.

Simulation follow-up restores the rotational integrator's vectors, matrix,
float operation widths and void exits; block/combined collision result paths
and contiguous contact storage; a 3,072-byte transformed vertex workspace and
triangle vectors; and the paired float normalization and unaligned quaternion
store in human averaging. The clean preparation retains all four repair groups.

The client builds with zero errors and 2,547 warnings and links with zero
unresolved or duplicate symbols. Its 4,255 functions and 1,286 storage definitions
are split into thirty compiled C units.

| Additional comparison | Result | Boundary |
| --- | --- | --- |
| Orientation blend | 2,100 native cases pass | Complete blend, result bits, MXCSR, aliases and input guards |
| World/shadow GL argument blocks | 420 native cases pass | Clear/depth/masks, vertex layouts, constant colors and visibility element draw; driver controlled |
| Computed buffer offsets | 3,072 native cases pass | Signed table addressing, wrapping arithmetic and six GL argument blocks |
| Batch setup | 768 native cases pass | Modes 0/1/2, early exits and ordered calls; material loop empty |
| Visibility matrices and clip planes | 256 native cases pass | Geometry disabled; GL, projection and world draw boundaries controlled; matrices and both clip uploads compared |
| Rotational integration | 12,288 native cases pass | Complete integrator and rotation leaf; sine/cosine boundary shared |
| Block/combined queries and actor consumer | 16,640 native cases pass | Complete functions; geometry, broadphase and contact creation boundaries controlled |
| Transformed mesh query | 6,144 native cases pass | Complete query; triangle intersection boundary controlled; 0–256 vertices |
| Human orientation averaging | 4,608 native cases pass | Entire 28,664-byte human state and conversion leaves; finite rotations/weights, four MXCSR modes |

Evidence: `reports/client-world-gl-calls-20261004/`,
`reports/client-indexed-gl-calls-20261004/`,
`reports/client-render-workspaces-20261004/`,
`reports/client-gl-index-trace-20261004/` and
`reports/client-gl-sync-trace-20261004/`.

Simulation evidence: `reports/client-rotation-step-20261004/`,
`reports/client-collision-query-20261004/`, `reports/client-mesh-query-20261004/`
and `reports/client-human-orientation-20261004/`. The four comparisons were
rerun successfully after clean preparation; their individual documents state
the controlled boundaries and unverified behavior.

## Recovered behavior

- Restore all 32 DEFLATE distance extra-bit entries and a contiguous 40-byte PNG descriptor. Five complete installed font image streams match the original decompressor output.
- Recover the numeric CSV output pointer and returned integer, and the complete chunked image row flip. Seven additional numeric configuration scanner output pointers retain their full 64-bit addresses. Ordinary Windows launches exposed truncation that a low debugger stack concealed.
- Route 153 image decoder TLS accesses to the original zero-initialized, aligned 24-byte per-thread storage. Copying the old binary’s TLS index into a newly linked executable selected unrelated compiler storage. Nonzero heap bytes falsely enabled decoder row flipping; the explicit asset loader then flipped the atlas again.
- Recover both output pointers to `SDL_GetMouseState`, signed coordinate scaling, mouse button bits, and the 32-pixel cursor width.
- Recover Options and server browser void exits, fullscreen and VSync arguments, and two complete 32-byte SDL audio device specifications with pause/close/open/unpause calls.
- Recover checkbox drawing, integer and float sliders, the shared control dispatcher, and text input drawing. This includes all quad dimensions and colors, text flags and formatting arguments, seven callback arguments, masked text, the caret and selection rectangle.
- Recover grid and toggle drawing, six popup dimensions and two popup labels. Restore the three Practice generation labels and their clear colors.
- Restore native void exits in the CSX opener, city loader, level initialization and game reset. The exported code incorrectly tried to check original stack cookies using uninitialized C locals. The latter three retain ignored integer compatibility results pending review of surrounding return chains.
- Restore seven more native void epilogues on the Practice asset path, including the traced `buildblock/house.sbl` loader. Restore the unaligned level-default vector write.
- Relocate the block asset reader's vector destination and CSX texture filename pointer from fixed old-image addresses into the rebuilt global storage.
- Restore the memory texture loader's contiguous 224-byte image context, including seven fields previously split into unrelated stack locals. Restore its native zero result. The traced failure had reached PNG signature reading with an invalid `0xb8` input pointer.
- Relocate 16 Practice and block image addresses across eight functions, covering the heightmap clear, vertex workspace, tile/material indices, block lookup/proximity tables and mesh face vectors.
- Relocate block-index and proximity-weighting pointers plus four mesh-normal face-vector pointers. Convert the 17-entry street-name table to real C pointers; the invalid `First Street` address was still anchored to the original executable image.
- Restore the native material index returned by the Practice allocator and remove false security-cookie returns from the ignored-return paths in Practice setup, mesh generation, text drawing and renderer reset. The original epilogues were checked in each repair before changing the generated C.
- Restore the full text-buffer pointer to `SDL_SetClipboardText`, all eleven Credits label calls, and the seven-argument server-row callback with two quads, nine label sites and five numeric format slots.
- Link the compiler runtime statically so the new TLS helper does not add an external `libwinpthread-1.dll` requirement.

## Evidence and limits

| Comparison | Result | Boundary |
| --- | --- | --- |
| Mouse polling and scaling | 1,664 native cases pass | SDL poll outputs controlled |
| Complete main menu dispatch | 512 native cases pass | UI/platform/network/practice boundaries controlled |
| Checkbox, sliders, text input, grid and toggle | 960 native cases pass | Draw, clipping and caret width boundaries controlled |
| Complete server-row callback | 768 native cases pass | Draw/text boundaries controlled; flags, modes, passwords and indices varied |
| Complete Credits handler | All eleven native label calls match | Text boundary controlled |
| Complete CSX opener | Four installed archives, 3,551 records pass | Entire 1,060,912-byte state and file-call trace compared; CRT I/O and native cookie boundary redirected |
| CSV numeric reader | 512 native cases pass | Decimal scanner controlled; high addresses included |
| Complete image row flip | 560 native cases pass | Original instructions execute; unaligned/chunk/guard bytes compared |
| Static image TLS | Nine concurrent Windows threads, zero failures | Zero template, alignment, stable address and isolation checked |

Reports: `reports/client-menu-recovery-20261003/`,
`reports/client-options-controls-fixture-20261003/`,
`reports/client-ui-mouse-fixture-20261003/`,
`reports/client-font-startup-fixture-20261003/` and
`reports/client-image-tls-fixture-20261003/`.

The shared dispatcher and Options audio/settings branches are pinned to original
instructions. The 960-case fixture covers six draw routines. The user confirmed
that Options opens and works. Practice now passes loading and reaches world
rendering, where the driver abort described above remains. Bounded live handler
checks for Copy System Info, Join and Credits pass. Popup traversal,
remaining legacy text callers, Practice gameplay, server hosting/joining and
complete game parity remain unverified. The 2026-10-04
[Character preview repair](client-character-preview.md) restores head/hair
rendering and includes a live capture showing the menu, fonts and cursor.
