# Practice health HUD pose recovery

The manually entered Practice run in `reports/client-borderless-menu-20261005`
reached world rendering, then crashed in 0xA7C70 while dereferencing its Human
health state. Its Human offset and frame pointer had been overwritten by bone
pose generation. This is independent of the desktop-window mode change.

The native stack contains 16 three-float positions (192 bytes), followed by
16 nine-float rotations (576 bytes). The export had reduced those to scalar
fragments and one nine-float matrix, while retaining the loop that writes all
15 child bones and reads parent indices. The 36-byte basis matrix and XYZ draw
vertices also require contiguous backing.

`repair_client_health_pose.py` reconstructs those objects. It restores the
capsule renderer at 0xA77C0's five float arguments and the caller's XMM1/XMM2
values at 0xA82EF/0xA82E3. Health colors use native MULSS precision.

The common matrix product at 0x7A010 also had a split ninth float. Its native
final copy reads RSP+0x20; a contiguous nine-word product fixes that storage.

`test_client_health_pose.py` compares 128 complete native executions of the
health HUD with recovered C. It runs the actual native matrix operations and
varies Human index, bone parent hierarchy, angles, health and screen position.
Every XYZ vertex, color, texture binding and flush-state value matches.
Trig and GPU submission are shared controlled boundaries; this fixture does
not establish complete Practice or whole-renderer parity.

Evidence: `reports/client-health-pose-20261005`. Integrated candidate:
`reports/client-link-health-pose-20261005`, SHA-256
`16a5af332579269999ef12df46a2a17dd113565f472daf6de02818d47de8415d`.
The subsequent Practice run is recorded in
`reports/client-practice-health-pose-20261005`.
