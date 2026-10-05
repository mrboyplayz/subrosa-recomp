The static sphere query's narrowphase routines still passed separate C locals as
three-component vectors. The cube helper also read shared geometry through small
independently relocated symbols, although the original tables are contiguous.

`repair_client_sphere_geometry_storage.py` restores 22 vectors across the brush
(`0x152750`), prop (`0x153850`), cube (`0x1543c0`) and mesh (`0x1564a0`) helpers.
The cube helper gets three pinned native tables: eight cube vertices, six face
normals and six four-index faces. The normal and index pointers preserve their
original offsets within those tables.

16,384 complete native narrowphase comparisons pass, including 730 cube,
1,111 mesh, 462 brush and 462 prop hits. The fixture uses the actual original
triangle and segment helpers and compares every output word and nearest-hit
result. Mesh/brush/prop fixtures use a single planar quad; complex meshes,
other primitives and every material combination are outside its scope.

Evidence: `reports/client-sphere-geometry-storage-20261004`. This repair is also
registered in clean preparation. For the next iteration it was applied through
its repair function to the newly emitted source after preparation stopped at
kernel registration; a final clean preparation remains required before deployment.

The new tick-effects compiler output uses the build cache on C: through a
junction in its `units` directory, keeping D: free for source and reports.
