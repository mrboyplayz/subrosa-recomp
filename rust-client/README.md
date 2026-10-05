# Rust client recovery with Bevy

The user resumed behavior recovery and Rust implementation on 2026-10-03 and
selected Bevy. Port recovered contracts while tracing remaining game systems.

This directory contains partial Rust implementations of ABI helpers, CPU probes,
mapped-PE checks, packed angle preparation, 8-bit PNG row reconstruction, mono
audio conversion, texture packing and default C-locale integer parsing.
It is not a complete game. The optional Rust linker flag is experimental; normal
C builds continue to use `src/recovered/client_leaf.c`.

New recovered modules:

- `network_bits.rs`: unsigned/signed reads and both delta formats; 44,640
  valid-input native comparisons including values, cursors and wrapping arithmetic.
- `pose.rs`: matrix/quaternion conversion and pose interpolation; 2,100
  bit-exact native comparisons, including destination aliasing.
- `physics.rs`: limited anchor correction; 1,024 bit-exact native comparisons
  with distinct bodies and one/32 repetitions. Full physics integration is pending.
- `point_state.rs`: point-pool integration and history fields; 2,496 bit-exact cases.
- `joints.rs`: four body-joint constructors and point-link creation; 224 and
  1,152 complete-pool comparisons, including adjacency and vehicle ownership.
- `physics.rs`: kind-10 preparation and angular/linear solving; 4,096 preparation
  cases and 29,568 native solver steps. Kind-7 raw-storage adapter: 1,792 cases.
- `physics.rs`: body clearing/accumulation and a complete restricted kind-10
  constraint pass; 144 native scenes compare all body, joint and work pool bytes.
- `physics.rs`: mixed kinds 0/4/7/8/10 with shared point/rigid pools, rest lengths,
  category-dependent gains, both angular modes, projection/bias and single-body
  corrections; 288 mixed native scenes compare all point/body/joint/work bytes.
- `contacts.rs`: remaining point/surface/rigid contact responses. The combined
  constraint pass now supports all kinds 0–10, checked in 288 native scenes.
  Single/pair contact constructors pass 112 complete-pool comparisons.
- `geometry.rs`: one-sided segment/plane/triangle queries (8,192 comparisons),
  ordered mesh hit selection (4,096), segment-pair and two-sided triangle
  queries (16,384).
- `collision.rs`: ordered mesh-pair contact generation, including vertex/face
  and edge/edge passes; 1,536 native scenes compare complete contact pools.
  Default item box construction matches 1,024 original startup cases.
  Asset conversion, broad-phase selection and other collision generators remain pending.
- `models.rs`: CMO/CMC file views and influence selection; 61 structural comparisons.
- `bevy_models.rs`: real async Bevy asset loading; all 61 model files loaded.
- `bevy_runtime.rs`: Bevy plugin applies recovered orientation interpolation
  to pose components, and an explicit point-state schedule operates on recovered
  resource storage. The `RecoveredRigidStep` schedule runs the recovered mixed pass
  and reports unsupported scenes before mutation. It is not a full client loop.

Bevy 0.19.1 is locked in Cargo.lock. `bevy-client` currently enables the engine
core and async assets; desktop rendering/input/audio integration will
extend the feature set as their original behavior is recovered.

## Standalone player test

`desktop-test` adds a separate visual/control harness using the installed
Sub Rosa suit, head and hair meshes. Build/package with
`pwsh -File scripts/build-player-test.ps1`; run `test-client/SubRosaPlayerTest.exe`.
Controls and limitations are in `docs/player-test.md`. This harness uses
temporary movement/animation and does not establish original gameplay parity.

Build the native-comparison library:
`pwsh -File scripts/rust-client.ps1 build --release --no-default-features`

Verify new modules:
`python scripts/test_rust_network_bits.py`
`python scripts/test_rust_pose_interpolation.py`
`python scripts/test_rust_anchor_constraint.py`
`python scripts/test_rust_point_state.py`
`python scripts/test_rust_joint_creation.py`
`python scripts/test_rust_point_links.py`
`python scripts/test_rust_anchor_preparation.py`
`python scripts/test_rust_body_accumulation.py`
`python scripts/test_rust_kind10_step.py`
`python scripts/test_rust_rigid_constraints.py`
`python scripts/test_rust_angular_constraints.py`
`python scripts/test_rust_single_anchor.py`
`python scripts/test_rust_point_constraints.py`
`python scripts/test_rust_point_contacts.py`
`python scripts/test_rust_surface_contacts.py`
`python scripts/test_rust_all_constraint_kinds.py`
`python scripts/test_rust_contact_creation.py`
`python scripts/test_rust_segment_geometry.py`
`python scripts/test_rust_mesh_geometry.py`
`python scripts/test_rust_edge_geometry.py`
`python scripts/test_rust_mesh_collision.py`
`python scripts/test_rust_item_box.py`
`python scripts/verify_rust_model_assets.py`

Verify Bevy scheduling:
`pwsh -File scripts/rust-client.ps1 test --features bevy-client`

Verification: `python scripts/verify_rust_client.py` from the decompilation directory.
Detailed scope and artifacts are in `reports/rust-client-verification-20261003/`.
Earlier hybrid launch reports are historical C recovery evidence. These Rust
modules and the Bevy scheduling fixture do not establish gameplay parity.
