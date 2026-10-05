# Human tick collision workspaces

After the paired shape repair, the 90-second Practice observation stopped
without a crash but never presented its first world frame. The sampled main
thread was inside RVA 0x31530, called by 0x33FE0 from the human update at
0xBE010. Its two input vectors were independently allocated scalar locals.
Their contiguous native counterparts are RBP+0x80 and RSP+0x78.

`repair_client_human_tick_storage.py` restores four three-float objects for
endpoints, body offsets and normals, plus the human update's 36-byte rotation
matrix. It also restores the item contact caller at 0xCA1C0's 513-dword
candidate list. Candidate gathering at 0x38230 writes a count plus up to 256
eight-byte records; a single char local cannot hold those records.

`test_client_human_tick_storage.py` compares all seven float argument bits
at the actual native limb query instruction block in 4,096 cases. Query
execution is controlled; it does not claim full human update parity. Another
1,536 cases compare the entire native item contact consumer with controlled
candidate gathering and narrowphase, including the 256-candidate capacity,
overlap/type rejection and activation changes. Evidence:
`reports/client-human-tick-storage-20261004`.

The preceding candidate is `reports/client-link-shape-20261004`; the next
candidate needs a fresh integrated run and input verification. The deployed
game-folder EXE is still the verified Character build until Practice works.
