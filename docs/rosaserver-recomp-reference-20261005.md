# RosaServer references for Human and Vehicle recovery

Upstream checked out in `third_party/rosaserver`:
https://github.com/RosaServer/RosaServer, commit
`4cea2dd1f42f4b6f5337ac874741d98a7d75d4c8`.
The separate CMO port is https://github.com/jpxs-intl/RosaServer at
`0b90bf7aee42cd8a8131a06bc00f6ec5ad5a9bf1`.
Neither checkout was changed during this research.

Useful files are `RosaServer/structs.h`, `engine.h`, and `api.cpp`. They describe
layouts, function contracts, and wrapper behavior; they do not implement the
game's physics engine. Linux server addresses and version-specific capacities
must be checked against the pinned Windows client before use.

| Structure | Size | Useful fields/offsets |
| --- | ---: | --- |
| Human | 28,664 | playerID 0x08, vehicleID 0x28, seat 0x2C, position 0x80, second position 0x8C, input flags 0x214/0x218, 16 bones at 0x220 |
| Bone | 312 | bodyID 0x00, position 0x04, second position 0x10, velocity 0x1C, rotation 0x34 |
| RigidBody | 188 | active 0x00, type 0x04, mass 0x14, position 0x18, velocity 0x24, initial velocity 0x30, rotation 0x3C, angular velocity 0x60 |
| Bond | 244 | type 0x04, global anchor 0x2C, local anchors 0x38/0x44, body IDs 0x98/0x9C |
| Vehicle | 20,840 | bodyID 0x28, position 0x2C, second position 0x38, rotation 0x44, velocity 0x6C, controls at 0x3600..0x360C, seat count 0x50DC |
| VehicleType | 99,776 | Reconcile individual fields before recovering model-specific behavior |

Windows client bases observed in the recovery source:
Human RVA 0x4329E308; bones 0x4329E528; rigid bodies 0x049816E0;
joints 0x74287C80; vehicles 0x1F2D9200; vehicle types 0x52E9A680.
The matching strides helped distinguish body velocity and angular fields during
Practice's first-NaN investigation.

`engine.h` gives createHuman(position, rotation, playerID),
createVehicle(type, position, velocity, rotation, color), and
createRigidBody(type, position, rotation, velocity, scale, mass) contracts.
Confirm the Windows calling convention and float register placement independently.

`api.cpp`'s Human teleport wrapper moves both positions of all 16 bones and each
bone's rigid-body position by the same delta. Human getRigidBody resolves through
the selected bone's bodyID; Vehicle uses its bodyID directly. Bond constructors
return -1 on exhaustion, which wrappers translate to no result. These behaviors
are useful cross-checks for recovered creation and movement calls.

The existing `rosaserver_layout_test.cpp` checks Player/Connection layouts only;
it does not establish complete Human, Vehicle, or simulation parity.

Source SHA-256 values for the upstream checkout:

- structs.h: `ba9d19bf643700d3e84eeeac4bafa03ad0229e92ef6b6681776ba18064712052`
- engine.h: `b2c295c528c7882a7b22c7cdbfa391661f49a629d1c7792da9279a1a9149d1d7`
- api.cpp: `e3371857cf512374b773a654178cc70cad5c7314efa67c655987191a41e05200`

Primary reference: https://github.com/RosaServer/RosaServer/blob/4cea2dd1f42f4b6f5337ac874741d98a7d75d4c8/RosaServer/structs.h
