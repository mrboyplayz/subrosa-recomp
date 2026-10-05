# Rust recovery with Bevy

2026-10-03. Original executable SHA256:
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.

The user selected Bevy for the client. Cargo.lock resolves Bevy 0.19.1.
The official [Bevy setup guide](https://bevy.org/learn/quick-start/getting-started/)
was checked when adding the dependency. Downloaded source is in the project's
`tools/rust/cargo/registry/src/` cache. Bevy engine core currently provides
presentation scheduling and async asset loading; window/render/audio integration
is still outstanding.

## New native comparisons

| Rust module | Original routine(s) | Comparison | Scope |
| --- | --- | --- | --- |
| network_bits.rs | 140115ae0, 140115d20, 14018d510, 14018d5e0 | 44,640 cases; exact values/cursors | Valid reads, signed fields, position/component deltas, wrapping arithmetic |
| pose.rs | 14010e370, 14011c340, 1400c2f90 | 2,100 cases; bit-exact output/storage | Finite rotations/factors, extrapolation, three output alias arrangements |
| physics.rs | 14001cbb0 | 1,024 cases; bit-exact body bytes | Distinct-body anchor corrections, asymmetric ratios, zero/large targets, one/32 repetitions |
| bevy_runtime.rs | Presentation adapter | Bevy schedule test passes | Recovered matrix output is updated through a real Bevy plugin/system |
| point_state.rs | 1401154d0 | 2,496 cases; bit-exact entire records | Position/velocity history, per-mode acceleration, scalar/unrolled boundaries |
| joints.rs | 14004e160, 14004e2e0, 14004e430, 14004e5b0 | 224 cases; exact entire pools | Four constructors, first-free selection, unknown payload clearing, pool exhaustion |
| joints.rs | 14004de30 | 1,152 cases; exact pools and ownership | Point links, duplicate rejection, point adjacency, vehicle registration, capacity failures |
| physics.rs | 14001c780, 14001bf70 | 4,096 preparation cases, 29,568 solver steps | Kind-10 anchors, displacement limits, angular cap, damping, axis bias, distinct-body solving |
| physics.rs | 14001cbb0 storage adapter | 1,792 cases | Prepared kind-7 work mapped onto original rigid-body fields |
| physics.rs | 14001d080 body clearing/accumulation fragments | 4,224 accumulation passes and 256 clearing passes | Complete 8,192-body pool, activation flags, angular-state caps, orientation/diagonal conversion |
| physics.rs | 14001d080 restricted full pass | 144 scenes, 32 iterations each | Kind-10-only scenes, work metadata, iteration masks, delta clearing/application and joint release |
| physics.rs | 14001d080 mixed rigid constraints | 144 scenes | Kind-7 rest-length anchors mixed with kind 10; body categories and correction strengths |
| physics.rs | 14001d080 angular constraints | 288 scenes | Kinds 7/8/10, both angular modes, caps/damping, axis projection/bias |
| physics.rs | 14001d080 single-body anchors | 288 scenes | Kinds 4/7/8/10, direct single-body corrections, unused second-body fields preserved |
| physics.rs | 14001d080 point/rigid constraints | 288 scenes | Kinds 0/4/7/8/10, 0–8 points, both native point modes, shared points and bodies, full pool comparison |
| contacts.rs + physics.rs | 14001d080 all response kinds | 288 scenes | All kinds 0–10 exercised; complete body/point/joint/work pools; both angular and point modes |
| contacts.rs | 140005160, 1400052c0 | 112 cases | Single/pair contact creation, first-free selection, payload preservation, mass ratios, exhaustion |
| geometry.rs | 1400779f0, 140077fa0 | 8,192 cases | One-sided segment/plane/triangle queries, failed-query writes, edge and degenerate cases |
| geometry.rs | 1400dad20 | 4,096 cases | Triangle/quad splitting, stored normal transformation, native face order and strict earliest-hit selection |
| geometry.rs | 14008ceb0, 140187410 | 16,384 cases | Interior segment-pair closest points, unchanged failed outputs, two-sided triangle crossing, endpoints and degeneracy |
| collision.rs | 14004a7a0 | 1,536 scenes; 3,883 generated contacts | Ordered vertex/face and edge/edge passes, cube and dimension-generated item meshes, transforms, multiple parts, full joint/work pools and pool exhaustion |
| collision.rs | 1401402c0 startup fragment, 14007a240 | 1,024 cases | Default item box geometry, native topology, normals, degenerate dimensions, signed zeros and untouched opaque words |

The kind-10 solver fixture compares all body and work bytes after every
iteration, with one or 32 iterations per case. Native instruction order corrected
two misleading expressions in Ghidra's C output: the axis correction is added
as a grouped sum, and the second body's angular correction scales the correction
by the work factor before multiplying by its signed mass ratio. These differences
were observable at individual float bits. Same-body solving remains unimplemented.

Bevy now owns `RecoveredPointWorld` with point, joint, work and owner storage.
Its explicit `RecoveredPointStep` schedule advances the recovered point pass;
ordinary presentation updates do not implicitly advance it. The integration test
creates a joint through the resource, checks duplicate prevention and advances
two passes through Bevy. The original tick cadence and intervening game passes
are still outstanding, so this is not the complete simulation schedule.

`apply_body_deltas` retains accumulated deltas, adds linear corrections, caps
angular state at the original per-body limit multiplied by 8, and derives angular
velocity through the original orientation/diagonal equations. It leaves body
positions unchanged. The native clearing pass clears active bodies even when
their +8 flag suppresses accumulation. Both passes compare full pool bytes.

`step_kind10` now combines preparation, metadata propagation, the original 32
constraint iterations and final joint release. Its scene fixture executes the
full original `14001d080` in isolated memory with zero points and vehicle
callbacks explicitly replaced by RET. All 8,192 bodies and 16,384 joint/work
records match across 144 finite-input scenes. This proves the restricted path;
it does not verify vehicle callbacks, contact generation, point constraints or
the other joint kinds. Inactive records, disabled bodies, iteration masks
0/1/2/3/7/15/31/256/-1, shared bodies across different joints, and release flags
are exercised. Same-body joints remain rejected in Rust.

`RecoveredRigidPlugin` exposes the recovered paths in Bevy's explicit
`RecoveredRigidStep` schedule and records its result on `RecoveredRigidWorld`.
The Bevy integration test checks that presentation alone does not execute it,
that unsupported active kinds report an error before physics mutation, and
that a valid kind-10 scene advances. The resource now also owns points, point
scratch and vehicle-owner link storage. A point link created through the resource
runs through the same 32-iteration schedule; the test checks momentum, original
iteration-mask behavior, unchanged positions and retained adjacency. Eight
crate/schedule tests pass.

The broader native scenes recover point-link preparation/solving, single-body
anchors, rest-length body anchors and angular constraints. Both native angular
modes are compared, including body-category/type-dependent limits. Native
instructions revealed that kind-8 preparation multiplies mass ratios by a scale
selected with MINSS; the decompiler's C omitted those final multiplications.
Full-pass comparisons exposed the error before integration.

Point scenes cover the native scalar and four-lane point modes, 0–8 points,
coincident point positions and shared links. Rust stores the three velocity
components used by the game and does not reproduce the unused scratch lane.
Point positions remain the responsibility of the separate integration pass.
The native fixture disables vehicle callbacks, so vehicle behavior remains
unverified. Same-body rigid joints, contact generation, non-finite input parity
and alternate floating-point environments remain outstanding.

`contacts.rs` now implements the remaining response kinds: point against target
velocity (1), point pairs (2), weighted three-point surfaces (3), single-body
contact with friction loss (5), rigid pairs (6), and body contact with angular
bias (9). The kind-5 response includes the native friction cap and per-body loss
accumulator. Its tangent normalization order was corrected from native SSE
instructions after the fixture exposed a one-bit error in decompiled grouping.

The combined fixture compares the full original `14001d080` with all eleven
kinds across 288 scenes. It records active instances and eligible solver calls
per kind and fails if any kind is unexercised. This establishes the compared
finite/default-FP response paths, not complete collision or gameplay parity.

The single/pair rigid-contact constructors also match entire persistent/work
pools across 112 cases. Their lifetime is zero: a frame creates, solves and
releases these transient records. Bevy exposes creation on the shared world;
the schedule test checks native response and end-of-pass release. Geometry
generation is now recovered for processed mesh pairs. Ghidra xrefs show pair-contact creation in
human update `1400be010`, item update `140108930` and several geometry helpers;
`reports/human-pose-trace-20261003/1400052c0-xrefs.json` records those callers.

`geometry.rs` now provides the original segment/plane, segment/triangle and
ordered mesh queries used by geometry traversal. The mesh fixture builds native
part/face structures and compares all seven output floats and surrounding guards.
On a miss, the original mesh query writes t=1 and preserves the other output
fields. A failed triangle query can retain the plane candidate in its output;
Rust retains that behavior. Invalid mesh indices/counts are safely rejected and
are outside the native malformed-state parity claim.

`collision.rs` recovers caller `14004a7a0`: transforms both vertex sets, runs
both ordered vertex/face passes, then ordered edge/edge filtering and contacts.
The 1,536-scene fixture exercises 324 edge-only contacts, 1,890 vertex-only
contacts and 121 detections with an exhausted pool. It compares entire joint/work
pools against untouched native collision code in isolated memory. Native geometry
helpers, stack probing and the successful security-cookie check execute; only
memset is bridged to the host. Nonbinary matrix/position values exposed decompiler
grouping errors in the vertex and center transforms, corrected from SSE instructions.

Bevy's rigid resource now generates mesh-pair contacts from its original body
position/orientation fields. A real Bevy test runs generation, then the explicit
constraint schedule, checks response and transient-record release. Ten Rust/Bevy
tests pass. This does not select broad-phase pairs or load processed geometry from
assets. Native vertex capacity is conservatively limited to 512 and edge count to
64: higher culling bitset words are uninitialized in the original. Invalid storage
shapes are rejected before pool writes, outside the native malformed-state claim.

Default item meshes are constructed during startup from half extents, rather
than read directly from a CMO render file. `ItemBox` now recovers that path,
including the executable's face/edge tables and face normal construction. Its
fixture executes original instructions 143981..144417 and the native normalizer,
bridging only the exit and allocator. All geometry bytes match in 1,024 cases,
with 2,304 degenerate faces and opaque allocator fields preserved. The collision
fixture includes 791 contacts generated from this recovered geometry. Special
item types 42/44/45 and complete item-definition/startup loading remain pending.

The Ghidra evidence export now includes 31,971 instructions from 61 functions,
with every byte checked against the pinned original and no mismatches. Asset-to-
collision mesh conversion, spatial broad phase, other geometry generators,
vehicles and complete collision/gameplay parity remain outstanding.

## Model files and Bevy assets

`models.rs` parses CMO versions 1–3 and CMC version 2 as borrowed file views.
It preserves opaque vertex/face/tail words rather than guessing their full
material meaning. CMC views expose pivots, triangular indices and the first
four positive bone influences, with sequential normalization and caller-supplied
local-position scale. The original scale constant is 1.125. The 104-byte skin
record represents the selection phase; later native bind-pose baking, normal
generation and GPU upload are still outstanding. Unused influence slots are
zeroed in Rust; native stale-slot behavior is unverified.

All **61 installed files** matched the independent structural inventory for
counts, exact byte consumption, face-size distribution, positive-weight
histograms and selected bone counts. This is asset coverage, not native loader
parity. Installed vanilla/mod provenance remains unverified. The Rust parser
strictly checks magic, bounds and part count; native malformed-file parity is
not claimed.

`bevy_models.rs` registers CMO/CMC loading with Bevy's AssetServer. The async
integration fixture loaded all 61 assets, preserved every input byte, and
checked complete consumption. This is a real Bevy asset pipeline, not a rendered
scene or full gameplay client.

All native fixtures check the reference executable's hash before copying
reviewed code into isolated process memory. The installed executable is not
patched. These cases use the default floating-point environment. They do not
prove whole-system behavior, non-finite handling, alternate rounding modes,
complete packet compatibility or full physics parity.

Safe Rust bit reads explicitly reject unsupported widths and insufficient data.
Original decoder failure/cursor/statistics behavior is not silently claimed as
recovered. Physics is the recovered original kernel; its angular-state delta
must pass through the remaining original integration equations before it can
be treated as angular velocity.

## Evidence

- `reports/rust-network-bits-20261003/result.json`
- `reports/rust-pose-interpolation-20261003/result.json`
- `reports/rust-anchor-constraint-20261003/result.json`
- `reports/rust-bevy-schedule-20261003/`
- `reports/rust-model-assets-20261003/result.json`
- `reports/rust-point-state-20261003/result.json`
- `reports/rust-joint-creation-20261003/result.json`
- `reports/rust-point-links-20261003/result.json`
- `reports/rust-anchor-preparation-20261003/result.json`
- `reports/rust-body-accumulation-20261003/result.json`
- `reports/rust-kind10-step-20261003/result.json`
- `reports/rust-rigid-constraints-20261003/result.json`
- `reports/rust-angular-constraints-20261003/result.json`
- `reports/rust-single-anchor-20261003/result.json`
- `reports/rust-point-constraints-20261003/result.json`
- `reports/rust-point-contacts-20261003/result.json`
- `reports/rust-surface-contacts-20261003/result.json`
- `reports/rust-all-constraint-kinds-20261003/result.json`
- `reports/rust-contact-creation-20261003/result.json`
- `reports/rust-segment-geometry-20261003/result.json`
- `reports/rust-mesh-geometry-20261003/result.json`
- `docs/human-pose-trace.md` for surrounding original call/data paths.

## Remaining game work

### Original player construction

The Rust game library now contains the original rigid-body allocator and the
human's 16-body / 15-joint construction routines in `physics.rs` and `human.rs`.
Full-record native comparisons passed: 576 allocator cases, 256 human body
cases and 128 skeleton joint cases. Bevy's recovered world exposes these
routines. See `docs/human-pose-trace.md` for addresses, storage mappings and
the explicit scopes. These routines provide articulated construction; they do
not yet establish active ragdoll movement or change the single-body test EXE.
The original startup templates are captured from `0x140138770` and included as
Rust constants in `human_templates.rs`; both construction suites also compare
with this original data. Release compilation and all 10 existing Bevy/library
tests passed after the construction integration; sheet preflight has no errors.

### Player harness correction

The initial desktop harness used custom gravity, floor clamping and procedural
gait; those were not original player physics. It now advances one body through
the recovered linear integration, kind-4 input target response, kind-5 floor
contact and 32-iteration constraint solver. Linear integration matched the
original bytes across 1,024 full-pool passes (8,388,608 records); the comparison
explicitly excludes the angular callback. See
`reports/rust-linear-body-step-20261003/result.json`.

The packaged harness smoke test passed movement, jump and screenshot checks
(`reports/player-test-20261003/result.json`, jump height 1.3291836 metres).
Its input targets, jump impulse, support bookkeeping and 60 Hz cadence are
temporary choices. The static display pose, single body and missing original
controller mean this is still **not original active-ragdoll player physics**.
The smoke test establishes harness operation, not player equivalence.

Complete contact generation, vehicle callbacks, same-body constraint behavior,
rigid orientation integration and controller states; complete model/world asset
semantics and Bevy uploads; recover tick,
network ownership, gameplay, weapons, vehicles, cameras, rendering, UI, audio,
persistence and lifecycle. Compare controlled original-client scenarios as
systems become integrated. Existing function-book entries remain partial;
function counts and successful builds are not completion percentages.

The Rust client is not yet a playable game. The existing C recovery and original
executable remain useful evidence during this rewrite.
