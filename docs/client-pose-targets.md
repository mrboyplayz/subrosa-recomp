# Pose targets and skeleton anchors

The Practice candidate's rigid-body constraint work developed NaNs before its
first world frame. Hardware watchpoints traced the first bad work bias through
0xAD2B0 to the pose quaternion produced by 0xAD030. That export had lost its
second argument, a float delivered in XMM1, and split its quaternion into
independent scalar locals. Native XMM8 <- XMM1 at 0xAD05E and the call sequence
at 0xAE27F establish the float ABI.

`repair_client_pose_targets.py` restores that argument, the contiguous four-word
quaternion workspace, the caller's float lane, and single-precision multiplication
by -0.5. The skeleton constructor at 0xAB7B0 also gets its contiguous three-word
anchor back; the exported split locals had passed stack contents to joint creation.

Evidence: `reports/client-pose-targets-20261005`. The pose fixture compares
2,048 complete native executions and their trig inputs across four MXCSR modes.
The skeleton fixture compares 128 complete native constructor executions,
including pool exhaustion and their joint/work-pool writes.

Integrated candidate: `reports/client-link-pose-targets-20261005`, EXE SHA-256
`e50096c8810be7ccc3bfc2ee77973c07a4ba9545e24950743986857228bd43a9`.
It linked and passed native-link verification, but the Practice observation still
stalled in the human bounding-cell scan at 0xB95E0 on the second physics tick.
Practice is not fixed. Resume first-invalid-value diagnosis after the requested
borderless-mode work. Do not mask NaNs or cap cell scanning without native evidence.

Correct constraint-work base is RVA 0x74037C40 (dword index 485543029).
Some diagnostic dumps begin ten words earlier as a guard; do not treat their
first word as record zero. Joint base is RVA 0x74287C80, with 244-byte records.
