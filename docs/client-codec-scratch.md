# Main codec scratch recovery

After FFT-window recovery, the client stops in the output write of
`sub_1401F3F90`. A frame-pointer capture identifies the filter caller and
shows valid coefficients but a null output destination. The main codec
`sub_1401E5400` allocates scratch storage, then copies sample history over
its scalar frame header. This can overwrite its saved output pointer.

`scripts/repair_client_codec_scratch.py` binds all three scratch pointers
to their allocations and directs the initial history copy into the first
buffer. Allocation-pointer stores and the native copy destination are
pinned to original machine instructions. Other codec stack records and
its exported return paths still need recovery; the whole encoder remains
partial.

The original history-copy instruction block and the recovered allocation
and copy pass 128 comparisons across channel counts, history lengths,
allocation extents and destination alignments. Entire output buffers and
guards are compared. This fixture verifies the history-copy block, not
complete encoding or all consumers of the remaining scratch buffers.
Evidence: `reports/client-codec-scratch-fixture-20261003/`.

The bounded debugger now also records the current frame's memory and
resolves its saved return address. This identifies callers where ordinary
stack unwinding is incomplete.

The full suite passed 152 tests after this repair. The next launch cleared
the null output write and stopped at the filter's fabricated cookie return;
the subsequent filter repair is recorded in `client-audio-filter.md`.
