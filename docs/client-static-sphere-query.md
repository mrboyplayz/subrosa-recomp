The next Practice run reached its first physics update with finite body data,
then stopped in `sub_140151190` (static-world sphere collision). The exported C
mistook ten native Boolean exits for calls to the security-cookie checker.

`repair_client_static_sphere_query.py` reconstructs those results: seven early
misses, the final `COMISS`/`JA` test for a distance below 65,536, and two immediate
brush hits. It restores seven contiguous objects: point, normal, origin, cell,
displaced cell, local center and nine-word rotation. Five rotation calls use
a local native unit-Y axis. The production cookie checker remains enabled.

The complete handler passes 5,760 comparisons with the pinned native code.
Outputs, state, return values, cell coordinates, radius and helper arguments are
compared across four map indices, rejection cases, both material layers and
brush/prop paths. Narrowphase, rotation and identifier helpers are controlled;
the fixture does not establish full collision or gameplay equivalence.

Evidence: `reports/client-static-sphere-query-20261004` and
`reports/client-practice-body-spawn-20261004/live-debug.txt`. The spawn candidate
passes the initial integration step without nonfinite body values but has not
reached a playable world. Train positioning still differs from the native snapshot
and requires a separate map-data investigation.
