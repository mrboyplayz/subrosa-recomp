# Native base-vertex draws

The integrated Practice driver abort was caused by three reconstructed
`glDrawElementsBaseVertex` calls missing their fourth and fifth arguments.
Tracing only plain indexed draws attributed the asynchronous failure to
the next terrain shadow draw. The diagnostic wrapper now traces base-vertex
draws too; draw 478 received a stale DLL address as its index offset.

`repair_client_base_vertex_draws.py` restores the zero index offsets and
region vertex bases at RVAs 0xD22E0 and 0xD2C90. At 0x11DDB0 it restores
both the vertex and element resource-table offsets, byte-to-index conversion,
and all five arguments. Native 32-bit wrapping arithmetic and signed
division toward zero are retained. The original EXE remains unchanged.

`test_client_base_vertex_draws.py` compares the three complete handlers
against the pinned native instructions in 1,536 cases. GPU callbacks are
controlled; vertex and element resource tables are independent. The fixture
checks selection, GL argument traces, signed offsets and integer wrapping.
Evidence: `reports/client-base-vertex-20261004`.

The clean candidate in `reports/client-link-base-vertex-20261004` passes
object/link/native-layout checks. Its Practice integration run gets beyond
the former driver failure and stops at the reconstructed shape-contact
return, RVA 0x4A7A0. It is not a playable Practice build yet.
