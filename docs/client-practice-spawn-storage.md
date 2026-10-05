Practice spawned invalid bodies before its first physics update. The original
client's first body had an identity rotation and zero velocity. The previous
rebuild instead supplied a rotation containing `8.59e9` and a nonzero Z velocity;
vehicle positions and wheel inertia also contained uninitialized values. Those
values sent the vehicle spatial scan through an enormous range of cells.

`repair_client_practice_spawn_storage.py` reconstructs seven contiguous stack
objects from the pinned native instructions:

- `ResetGame` (RVA `0x127910`): general spawn position, player position, and
  the nine-word rotation assembled from two four-word stores and a final word.
- Human creation (`0x53840`): the three-word initial zero velocity.
- Vehicle creation (`0x5bca0`): three-word inertia and the three-word joint offset.
- Train spawning (`0x61950`): its nine-word rotation and a local `{0,1,0}` axis,
  preserving the native constant's layout despite separately relocated globals.

Native comparison fixtures pass 2,048 Practice spawn instruction blocks,
256 complete human constructors, 1,024 complete vehicle constructors, and
512 complete train spawn handlers. They compare constructor arguments including
all nine rotation words, positions, velocities, inertia and joint offsets. Entity
creation, rotation in the train fixture, and dependent setup helpers are controlled.
These fixtures do not demonstrate complete physics or playable Practice.

Evidence: `reports/client-practice-spawn-storage-20261004`,
`reports/client-practice-body-reference-20261004/before0.bin`, and
`reports/client-practice-body-rebuilt-20261004/before0.bin`. Native integration
captures use the original file; rebuild captures use the candidate EXE. Neither
capture modifies the production original. The root client remains the working
Character build until the new Practice build is verified interactively.

Build-cache storage: D: ran out of free space while compiling this candidate.
The generated `units` directories for the base-vertex, shape and human-tick
builds were moved to `C:/Users/junin/AppData/Local/Temp/sr-practice-build-cache-20261004`
and junctions preserve their original report paths. Source and report manifests
remain in place. The interrupted candidate build and fixtures are rerun.
