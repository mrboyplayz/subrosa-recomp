# Scene raycast recovery

Native function `0x1400dc050` selects the closest terrain, map, transient or
collected mesh hit. It returns a Boolean in EAX: `COMISS`, `SETB`, then a
security-cookie check that preserves the result. Its C export had replaced
that result with a call using fabricated stack-cookie locals. The production
debugger catches that mismatch directly in `sub_1400DC050`.

`scripts/repair_client_scene_raycast.py` restores:

- The Boolean result, preserving the native unordered comparison.
- One contiguous 28-byte hit record and two contiguous three-float bounds.
- A 12,292-DWORD scratch extent, with its secondary count at index 12,289.
  The export had doubled the inferred stack displacement.
- Two `MOVUPS` stores through `memcpy`, including when relocation changes
  the global's alignment.

The repair pins the vanilla SHA256 and the native return, cookie, count and
store instructions. Its counters are included in the preparation audit.

The complete native wrapper and recovered C pass **110,592 comparisons**
in `scripts/test_client_scene_raycast.py`. The matrix includes all hit-family
masks, four distance policies, all map enable masks, optional transient
dispatch, transient patterns, six ray configurations and three broadphase
populations. It compares returns, calls and arguments, closest-hit records,
velocity copying, first-hit ties, both scratch counts, the 64-candidate cap,
input preservation and an output page with guard bytes. C storage rotates
through four DWORD alignment offsets.

Intersection and collection leaf routines are controlled, so this verifies
the wrapper's selection/dispatch/layout under those inputs. It does not
establish complete collision or gameplay parity. Reports are under
`reports/client-scene-raycast-fixture-20261003/`.

Ghidra MCP assembly and call references were retrieved from the verified
`boii:/subrosa-vanilla.exe`, rather than the differently hashed Noxus program.
The signature is recorded in `sheets/abi.tsv`; it was applied through MCP and
read back successfully in `reports/ghidra-scene-abi-readback-20261003.json`.

## Integrated launch after repair

The prepared client compiles with 2,606 distinct warnings, links with zero
unresolved symbols and zero duplicate definitions, and passes all 147 tests.
The bounded GDB launch no longer stops in this scene raycast wrapper. It
reaches a cookie mismatch called from `sub_14014FCF0` before the third SDL
swap. The client is still not confirmed usable. Evidence is in
`reports/client-link-scene-raycast-20261003/launch-status.json` and
`live-debug.txt`; the next function requires its own recovery evidence.
