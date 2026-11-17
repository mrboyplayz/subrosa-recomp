/* DRAFT — city/block-maintenance routines recovered from the executable.
 *
 * Five targets were picked from the decompiled C (see HANDOFF.md).  After
 * reading the disassembly of each, the verdicts are:
 *
 *   0x140ABCD  sr_grid_insert     ALREADY DONE upstream
 *                              (src/engine/cpu_engine.c, t_worldgrid.c)
 *   0x140DEAD  vertex_builder     DRAFT, NOT VERIFIED (see below)
 *   0x140BEEF  vertex_builder_b   DRAFT, NOT VERIFIED (see below)
 *   0x140CAFE  vertex_builder_c   DRAFT, NOT VERIFIED (see below)
 *   0x140077710 renderer_init     full recovery, suite t_init.c
 *
 * The three skipped routines are one family: each builds float vertex data
 * (two arrays of 24 floats and 132 floats, handed in as gprs) from state at
 * 0x1A0C*block + 0x120xx / 0x88, with 0x0223-style bit fields.  None of
 * them is called anywhere in the client, so there is no way to learn what
 * feeds the inputs, and any values written would be guesses.  The three are
 * skipped rather than half-finished; they can be finished if a caller ever
 * shows up.
 *
 * HANDOFF.md records the whole story; this file only carries the one suite
 * that can actually pass.
 */
