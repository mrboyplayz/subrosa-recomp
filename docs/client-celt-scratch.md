# CELT encoder scratch recovery

After the audio filter fix, `sub_14019B2E0` reads a pointer overwritten with
sample data. Its export binds 17 dynamic allocations to the address of one
scalar local. Native LEA/store pairs identify all 17 separate buffer bindings.
The repair also fixes direct buffer arguments for clearing, normalization
and table initialization. Each binding is pinned to original machine bytes.

A native scratch-clear instruction block and the recovered allocated buffer
pass 112 comparisons across seven lengths, four channel counts and four
alignments, comparing the complete destination and guard bytes. This fixture
covers clearing and buffer extent, not the complete encoder or every consumer
of all 17 buffers. Full encoder behavior and return paths remain partial.

Evidence: `reports/client-celt-scratch-fixture-20261003/`.
