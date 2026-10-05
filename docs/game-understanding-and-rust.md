# Understand the original game before the Rust rewrite

Direction accepted on 2026-10-03: first recover the game's behavior and data
contracts, then rewrite the Windows client in Rust. C recovery, existing parsers
and Sandium are evidence sources. Compilation and function counts do not prove
complete understanding. The user selected Bevy for the Rust implementation.
Recovered physics and protocol logic remain dedicated modules; Bevy's default
math/timing behavior is not an automatic substitute for original behavior.

Reference executable SHA256:
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
Installed assets include modded files and original backups; establish each
sample's provenance before treating it as vanilla. Custom Lua and mod hooks
are outside the vanilla behavior specification.

## System coverage and required evidence

| System | Existing evidence | Work needed before porting |
| --- | --- | --- |
| Startup and timing | Native startup fixtures, recovered frame-loop candidates | Tick frequency, accumulator, frame ordering, loading phases, shutdown and error behavior |
| Asset discovery and lifetime | Map pipeline specs, file loaders, local asset tree | Search order, names/IDs, dependencies, ownership, caching, release and missing-file behavior |
| Maps and collision | CSX/SBC/SBB/SBL parsers and scoped comparisons | Full load graph, collision construction, coordinate systems, materials, streaming and unload |
| Models and clothing | CMO first-pass spec, CMC notes, Sandium model tools | Every supported version, variable face records, bindings, normals, materials, body parts and GPU upload |
| Human skeleton | Sandium Human/Bone fields; native limb solver entry | Bone hierarchy and identities, transforms, rest poses, model-to-bone mapping and pose composition |
| Active ragdolls | Limb IK candidate and rigid-body allocator | Desired pose generation, motor/constraint equations, gains, limits, contact response, balance and transitions |
| Physics | Scoped rigid-body creation comparisons | Integration, broad/narrow phase, joints, solver ordering/iterations, friction, restitution, sleeping and timestep sensitivity |
| Characters and gameplay | Entity layouts and recovered C bodies | Movement, stamina, health, damage, inventory, grabbing, climbing, vehicle entry, spawn/despawn and game modes |
| Items and weapons | Item-type layout and loader fixtures | Attachments, recoil, ammunition, projectiles/hits, interaction timing and authoritative state |
| Vehicles | SBV spec, vehicle layouts | Wheel/contact forces, suspension, drivetrain, damage, occupants and networking |
| Networking and Steam | Supplied protocol references; startup API recovery | Serialization, message/state ownership, ordering, interpolation, reconciliation, failure/reconnect and vanilla compatibility |
| Rendering and UI | Shaders, atlas layout, resource candidates | Draw order, cameras, lighting, animation presentation, text, menus, HUD and input flow |
| Audio | Recent scoped native encoder/mixer comparisons | Asset loading, spatialization, mixing, events, codec behavior and device lifecycle |
| Persistence and tools | Configuration and asset parsers | Saves, replay/state formats, version handling, editors and deterministic reproduction |

For each entry, record native addresses, callers, field offsets, units,
state transitions, equations, boundary behavior and an observable comparison.
Mark inferred facts and unresolved fields explicitly. Existing spreadsheet
function rows remain partial until their behavior is demonstrated.

## First investigation: model loading and human pose control

1. Trace `LoadCMO` at `0x1400e9a60` from filename construction through reads,
   transformations, normals/triangulation, resource registration and upload.
2. Trace CMC loading and how clothing/body parts bind to human bones.
3. Trace callers of `HumanLimbIK` at `0x1400b1450` back to movement/pose targets.
4. Follow its outputs into physics constraints and into rendered bone matrices.
5. Capture standing, walking, turning, jumping, falling, grabbing, impacts,
   incapacitation and vehicle transitions using the original executable.
6. Compare controlled poses, joint limits and contacts. An IK solver by itself
   does not establish the active ragdoll controller.

Fresh CLI evidence:
`reports/ghidra-cli-model-loader-20261003.json` and
`reports/ghidra-cli-human-limb-ik-20261003.json`.
Initial findings and uncertainty are in
`../notes/model-and-ragdoll-investigation-20261003.md`.

## Rust implementation gates

Start a subsystem only after its inputs, outputs, storage, timing, dependencies
and baseline scenarios are specified. Keep original numeric precision and
operation ordering wherever they affect simulation or network behavior.
Choose renderer and physics dependencies after checking whether they can
express the recovered behavior. General-purpose replacement physics must be
compared before assuming it matches the original solver.

Bevy engine core is now connected through `rust-client/src/bevy_runtime.rs`.
The pose and network-bit modules have isolated native comparisons; the full
asset, simulation, rendering, input and audio integration is still outstanding.

Port in dependency order: file/data contracts, math and state storage, physics,
pose/ragdoll control, world/entities, gameplay, network replication, rendering,
audio and UI. Maintain original executable scenarios as the comparison oracle.
Completion requires asset coverage, scenario/state comparisons, multiplayer
compatibility where intended, and prolonged runtime checks. Unexplained behavior
is outstanding recovery work; it must not become a guessed implementation.
