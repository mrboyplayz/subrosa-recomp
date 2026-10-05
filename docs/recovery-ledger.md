# Windows Client Recovery Ledger

Target: the installed `subrosa.exe` pinned in
[reference-baseline.md](reference-baseline.md). A successful source build is
only one gate; each subsystem also needs comparison with the original.

| Area | Current state | Next evidence needed |
| --- | --- | --- |
| Reference inputs | 736 game/runtime files hashed; PE imports, sections, and host environment captured | Record configuration, chosen display/audio device, and outputs for each controlled reference run |
| Preparation pipeline | 7,157 edits plus scoped counters audited; 67 client tooling/helper tests pass; 41 definitions use recovered assembly; 1,271 pointer stores produce identical baseline/cast objects; native directory, API cache, full-path and directory-change comparisons pass | Review parser findings, upstream overlap records handled by two complete-expression repairs, and high-risk signature/data rewrites |
| Client compilation/link | Latest visibility-draw build passes with zero errors and 2,547 warnings; zero unresolved or duplicate symbols; 30 compiled C units with 4,255 functions and 1,286 storage definitions | Recover remaining incompatible call signatures, pointer-width casts and complete runtime behavior |
| Code inventory | 5,760 unwind entries compared to 4,269 exported starts; four outside starts and five missing pointer-target leaves inspected | Find the math helper's caller and classify all remaining executable bytes |
| Static data | 112 math constants restored; 115 byte aliases verified across 85,706 bytes; 139 codec aliases across 36,708 bytes with 73 pointer relocations; 704-byte time object with 87 pointers and 876-byte backing; four-slot DName vtable and nine RTTI objects; earlier strings/startup/timezone storage verified | Verify complete object aliasing, initialization order and runtime consumers |
| Asset formats | Existing parser and round-trip work is partial | Verify every installed format version and loaded runtime state |
| Startup and frame loop | PE section guard and four CPU entries recovered; 20,480 direct comparisons plus 24 PE boundary checks pass; TLS argument and contiguous initializer storage restored; 12,288 additional timezone/thunk/guard comparisons pass | Trace entry, TLS, remaining configuration, initialization, frame order, shutdown, and failure paths; validate CPU branches beyond current host |
| Angle math ABI | 199 float-lane containers repaired; 65,536 float and 65,536 double small-angle/NaN SIMD and MXCSR comparisons pass; packed double input widths corrected | Recover remaining inferred angle locals and verify packed large-angle polynomial and range reduction behavior |
| Scalar square root | 562 sites across 180 functions matched to native SQRTSS; 65,536 result-bit and MXCSR comparisons pass | Verify surrounding computations and callers |
| CRT helpers/control flow | Four original thunk targets bound; nine qword fills recovered; 49,152 native x87 remainder comparisons pass; 63 INT3 sites and three tail calls restored; 73,729 ASCII comparison cases pass; final shared jumps and register routines restored as assembly; 245,760 math and 49,152 bounded-length comparisons pass | Verify complete CRT operations, exceptional math inputs, exception/failure paths and game integration |
| DName virtual calls | Four missing targets restored; 32,768 native comparisons pass; vtable and complete local RTTI graph relocated | Verify demangler integration, invalid copy ranges and C++ RTTI consumers |
| Simulation | Rotation integration, block/combined collision queries and actor consumer, transformed mesh query and human averaging pass 39,680 additional native cases at documented boundaries | Recover complete collision helpers, upstream body state, exceptional inputs and long-run gameplay |
| Rendering/UI/audio | Main menu renders; user confirms Options works. Native mouse, text, quad, font and six control drawing comparisons pass; see client-menu-startup.md | Validate live fonts/cursor, all menu actions, complete graphics state and audio events |
| Networking | Supplied protocol reference crosswalk exists | Verify framing, serialization, timing, and state transitions in the pinned executable |
| Integrated replacement | Main menu and Options open; bounded Credits, Copy System Info and Join handler exercises survive. Practice passes loading/reset and repaired simulation paths, then aborts in an NVIDIA OpenGL worker during world rendering | Recover the remaining graphics state/data failure, then validate Practice gameplay and complete scenarios |

Advance an area only when its evidence is recorded. The local reports under
`reports/` carry compiler diagnostics and machine-generated inventories;
tracked documents summarize verified findings and open questions.

## 2026-10-04 current follow-up

The current candidate and remaining Practice failure are recorded in
`reports/client-link-human-orientation-20261004/launch-status.json`. Rendering
recovery now includes 70 additional vertex layouts, six table-derived offsets,
19 scalar/draw calls and seven shared stack objects totaling 300 bytes, following
the eleven initial world GL argument repairs. The visibility element draw now
supplies the native zero index offset. This repair did not eliminate the driver
abort; no stable Practice gameplay is claimed.

The clean preparation also retains four further simulation repair groups:
rotation integration (12,288 comparisons), block/combined collision and actor
contact consumption (16,640), transformed mesh queries (6,144), and human
orientation averaging (4,608). All pass again against the clean generated
source. Native geometry/trigonometry/contact boundaries remain controlled in
the fixtures that document them. Practice passes the previously faulting
functions but still encounters the driver abort; no gameplay parity is claimed.

The graphics comparisons pass 420 argument blocks, 3,072 computed-offset cases,
768 batch setup/empty-material cases and 256 visibility matrix/clip-plane cases.
Their controlled boundaries and live integration limits are listed in
`client-menu-startup.md`. The orientation comparison passes 2,100 cases; menu
controls/server rows/Credits and four installed CSX archives still pass.

The recognized-function sheet inventory covers all 4,296 planned rows after
refresh; every implementation row remains partial. This is recognized inventory
coverage, not complete executable coverage or behavioral verification. The raw
exports and pinned original executable are unchanged.

The dated sections below retain the results of earlier candidates.

## 2026-10-03 audio and encoder recovery

The subsequent client now gets through initialization and two SDL swaps,
then executes audio encoding. The filter build links with zero unresolved
and duplicate symbols and reports 2606 distinct compiler warnings. It still
crashes in the CELT encoder before the third swap; a working menu and full
behavioral parity have not been established.

Recovered spatial audio, PCM conversion, resampling, the FFT input window,
main codec history buffers, and the biquad filter. Their new fixtures total
4425 native comparisons; some cover bounded instruction blocks rather than
complete functions. The preceding aggregate suite passed 152 tests, and the
complete filter fixture passed independently. Details and limits are in
`client-spatial-audio.md`, `client-audio-buffer.md`,
`client-audio-resample.md`, `client-audio-window.md`,
`client-codec-scratch.md`, and `client-audio-filter.md`.

The next integrated build includes 17 recovered CELT scratch bindings and
three direct buffer arguments, plus main encoder result paths and the missing
packet-padding error. Separate fixtures pass 112 scratch-clear comparisons
and 69 return-path comparisons. Combined launch and regression results are
recorded under `reports/client-*-codec-returns-20261003*`.

## 2026-10-03 Practice asset initialization follow-up

The latest clean client build compiles with zero errors (2,547 warnings) and
links with zero unresolved or duplicate symbols. It reaches the main menu and
is left running. Practice's heightmap clear, vertex-normal workspace, tile
material lookup, block indexing, proximity pass and mesh face vectors used
stale original-image addresses; 16 references across eight functions now point
into the relocated global image. The 17 street-name pointers also use rebuilt
C strings. The CSX native comparison still passes for all four installed test archives (3,551
records and 1,060,912 bytes of state). The next live check is continuing the
user-triggered Practice load past this repaired stage. The reported Copy System
Info, Join and Credits interactions still need confirmation in the running
build. The client currently commits about 4.19 GB while open, so memory use
remains a practical risk during longer Practice and Join runs.

The next linked candidate adds the block-index and mesh-normal relocations,
street-name pointers, and native return fixes for the texture-reset and text
paths. It compiles with 2,547 warnings and links with no unresolved or duplicate
symbols. Its launch record is
`reports/client-link-weapon-seed-exit-20261003/launch-status.json`; it reaches
the menu and remains running. Menu-control and CSX fixtures pass. Practice
loading past this stage and Copy System Info, Join and Credits still need live
verification.
