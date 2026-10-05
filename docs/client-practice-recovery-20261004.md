# Practice recovery and C coverage, 2026-10-04

2026-10-05 continuation: the installed `subrosa-recomp.exe` now opens a native
debug console and saves `subrosa-recomp-debug.log` beside the game when launched
normally. Level/game generation finish with 93 finite active bodies; the first
constraint solve corrupts body 77's velocity, and subsequent human spatial
scans process an enormous cell range. Practice is still unfinished. See
`docs/client-debug-console.md` and
`reports/client-practice-debug-console-release-20261005` for the current trace.

Hardware-watchpoint evidence narrows propagation through joint 35 (body 77/78):
`client-practice-body77-20261005` catches its velocity becoming NaN in the
`0x1D080` accumulation loop; `client-practice-body77-delta-20261005` catches
its delta in `0x1BF70`. Watches on joint 35's linear/angular biases catch later
NaNs in `0x1C780` and Human 1's `0xAD2B0`, after corrupted body data is already
present. These later observations do not establish the original producer.
The next recovery gate is a complete first-tick constraint/input comparison,
including the helpers previously controlled by isolated fixtures. Do not mask
NaNs or cap the spatial scan without native evidence.

Practice remains under repair. Three missing base-vertex draw argument sets
caused the previously observed NVIDIA driver abort; these are now restored
and pass 1,536 native comparisons. The resulting clean candidate reaches
the first game tick and stops at the shape-contact handler's reconstructed
return. That handler's buffers and collision returns are now restored too,
with 12,032 native comparisons passing. The next integration run no longer
crashes there but remains in a swept query during human update. Its split
vectors/matrix and the item-contact candidate list are now restored, with
5,632 native comparisons passing; another integration run is in progress.
Do not treat the candidate as playable yet. Details:
`docs/client-base-vertex-draws.md`, `docs/client-shape-contacts.md` and
`docs/client-human-tick-storage.md`.

The next integration check found corrupt body transforms already present before
the first physics update. Native snapshots isolated split spawn storage in
ResetGame, human/vehicle creation and train spawning. Seven complete objects and
the train's unit-Y axis are now restored. The native argument comparisons pass;
see `docs/client-practice-spawn-storage.md`. A usable world is still required
before this candidate can replace the working Character build.

Integration subsequently confirmed finite spawn data and progressed through
the first physics update. The static sphere query's Boolean exits and seven
objects are restored (5,760 native comparisons). The next failure was the effects
update's ignored cookie pseudo-result. Four remaining tick callees now have
byte-pinned ignored-result contracts, and the effects/particle workspaces pass
512 native comparisons. The sphere narrowphase helpers additionally restore
22 vectors and three voxel tables, passing 16,384 native comparisons with actual
triangle/segment helpers. The next world startup remains to be tested. Details:
`docs/client-static-sphere-query.md`, `docs/client-tick-effect-storage.md`, and
`docs/client-sphere-geometry-storage.md`.

This session restores the stored DEFLATE block's contiguous four-byte header
and the swept collision queries' Boolean results and vector workspaces.
The inflater now matches the original for all captured Practice PNG streams
and generated stored/sync-flush streams: 66 complete image streams and 129
emission cases. The combined swept query passes 4,096 native comparisons
with controlled geometry. Its deeper geometry paths still need comparisons.

The view translation and reflection camera now use contiguous matrix/vector
storage. The view helper passes 4,096 native comparisons. Twenty-one remaining
GL color-mask calls restore all four Boolean arguments from machine code.
Three remaining scalar shader calls now supply their float argument: the
cubemap mip level and shadow scales 32 and 64.
The Practice terrain vertex/index buffers and integer mask match the original
byte for byte. Captured camera uniforms also match at the failing shadow draw.

Joint rotation and vector outputs now occupy complete native-sized objects.
The joint consumer passes 1,024 comparisons with controlled rotation helpers.
Its terrain-contact caller restores the 49,160-byte triangle workspace and
the adjacent vector/list objects; 80 native comparisons include the maximum
1,024 triangles. Geometry and broadphase helpers are controlled in that test.

The main loop now passes the tick's input flag and uses its Boolean return,
instead of testing uninitialized decompiler locals. Scheduling passes 768
comparisons with the original instruction block. Per-frame controller polling
restores 21 SDL calls' handles, device/axis/button indices and pointer returns,
plus both 64-bit hat-state clears. Its 35 native comparisons cover controllers,
joysticks, hotplug, failed opens, high pointer values and the 32-device cap.

Five assembly-backed functions are now C implementations: image channel
conversion, `strcmp_sr`, `abs`, `strnlen_sr` and the bounded wide-string helper.
They pass 166,360 comparisons against native instructions, including image
ownership/allocation errors, CPU dispatch values, alignment and length limits.
The clean preparation emits 4,260 C function definitions, including recovery
helpers. Thirty-six recognized function entries still use recovered assembly.
Function counts are not proof that every executable path is implemented or
behaviorally equivalent; all book entries retain partial verification status.
The remaining-entry list is `reports/client-c-coverage-20261004.json`.
Ghidra's tick body now includes its original tail fragments; that recovery is
available locally in `reports/ghidra-tick-full-20261004.c`, but the tick body
and the remaining CRT math helpers still need C implementation and validation.

The standalone renderer is described in `docs/standalone-render-test.md`.
Its successful replay narrows the integrated failure to surrounding client
state or preceding draws. It does not fix the client by itself.

Evidence: `reports/client-font-inflate-fixture-20261003`,
`reports/client-swept-collision-20261004`, `reports/client-view-storage-20261004`,
`reports/client-c-primitives-20261004`, `reports/client-reference-state-20261004`,
`reports/client-rebuilt-state-20261004`, `reports/client-joint-storage-20261004`,
`reports/client-joint-collision-storage-20261004`,
`reports/client-tick-calls-20261004`, `reports/client-joystick-frame-20261004`,
and `reports/render-test-20261004`.
