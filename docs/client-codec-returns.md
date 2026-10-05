# Main encoder result recovery

`sub_1401E5400` now returns the native 32-bit EAX result: encoded size,
one-byte header size, invalid-input error -1, insufficient capacity -2,
or encoding failure -3. The export merged distinct early guards and
replaced every return with an uninitialized security-cookie check.
The missing final packet-padding failure now returns -3.

Every recovered exit is pinned to original EAX instructions. A differential
fixture executes the original complete function for invalid-input guards
and the original final instruction block with a controlled padding leaf.
Its 69 cases compare return values, state clearing and padding-call counts.
Other encoding branches remain partial; byte-identical packets and complete
gameplay parity have not been established.

Evidence: `reports/client-codec-returns-fixture-20261003/`.
