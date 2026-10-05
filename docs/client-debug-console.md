# Recomp debug console

The rebuilt client opens a Win32 console at startup and writes the same
timestamped diagnostics to `subrosa-recomp-debug.log` in its working directory
(the game folder when launched normally). Each launch replaces the log.

It records startup, the Practice selection, ResetGame, map loading, render
resource setup, game spawning and the first four physics ticks. Later physics
ticks are summarized every 300 calls. A separate native thread reports the
current step, time spent there and started/completed physics counts every five
seconds, so a stalled main thread leaves a useful indication.

The first four ticks check active body positions, velocity/delta values, rotations
and angular velocities
for NaN/infinity before the spatial scans and after constraint solving. The
logger reports the first invalid record and its word offset without modifying
it. Hardware exceptions such as access violations record the exception code,
instruction address, module offsets, memory operation, current step and available
stack addresses. An abrupt driver abort, process termination or fast-fail may
bypass this exception handler; the last progress/status lines remain in the log.
The console closes with the process; the saved log remains available.

Native diagnostics live in `src/rebuild/client_debug_console.c` and use Win32
file/console handles and the host CRT independently of recovered import glue.
The client build enables `SR_CLIENT_DEBUG_CONSOLE`; isolated equivalence fixtures
leave its instrumentation disabled. This adds diagnostics, not a Practice fix.

Validation: `scripts/test_client_debug_console.py` launches native probes to
verify console allocation, file output, periodic status, invalid-body reporting
without mutation, normal shutdown and access-violation recording without
swallowing the original exception.

The installed build was exercised through the real Practice menu transition
under GDB. `reports/client-practice-debug-console-release-20261005` records that
level and game generation complete with 93 finite active bodies. The first
constraint solve then produces a NaN velocity for body 77, and later human
spatial-bound scans spend many seconds in a huge cell range. The console reports
these stages and keeps writing status while the main thread scans. This remains
an unresolved Practice failure, not a successful playable-mode validation.

The console/build/source checks pass 14 tests; the three native Practice spawn
tests and tick-scheduling test also pass. The final PE links with no unresolved
or duplicate symbols, and native-link verification passes. The previous root
executable is preserved as `../subrosa-recomp.before-debug-console-20261005.exe`.
