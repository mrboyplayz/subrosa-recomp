Practice completed its first physics update after the static sphere-query fix,
then failed at `sub_1401597F0`'s reconstructed cookie epilogue. Native tick
instructions at `0x3be56` discard that update's EAX and immediately call the
particle update at `0x3be5b`, whose exported exit had the same problem.

The ignored-result manifest now also covers those two functions, the queued
texture reload (`0xe65f0`, tick call at `0x3bb5d`) and the event update (`0x42930`,
tick call at `0x3bd9d`). All recognized C references are declarations/definitions;
these calls originate in the recovered native tick. The byte-pinned caller
windows are checked alongside the epilogues, and their compatibility results
are discarded. The actual cookie checker remains enabled.

`repair_client_tick_effect_storage.py` restores three complete objects: the
effect's previous position and nine-word rotation, and the particle direction.
512 comparisons of complete native effect/particle updates pass, including empty
updates and one moving object of each kind. Full record state and raycast/
rotation inputs are compared; those two helpers are controlled. Other effect
types and collision response are outside this fixture's scope.

Evidence: `reports/client-tick-effect-storage-20261004`,
`reports/client-practice-static-sphere-20261004/live-debug.txt`, and
`src/rebuild/client_ignored_cookie_exits.json`.
