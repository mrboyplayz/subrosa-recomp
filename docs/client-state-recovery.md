# Storage, CPU ABI, startup inspection and coercion recovery

Updated: 2026-10-02. Reference: the pinned vanilla Windows client.

The current object compiles with **zero errors**, 2,604 warnings and four
notes. Linking has progressed from 175 through 60, 35, 34, 32, 27, 16 and 14 to **zero unresolved symbols**, with
no duplicate definitions. The first full-client launch reached a fatal
"Out of memory - aborting" dialog before game initialization. This pass repairs
specific behavior and storage; complete startup and game integration remain
unfinished.

The final register and shared-jump recovery replaces 41 definitions with
relocatable assembly. All 123 client tests pass after file enumeration, timestamp, sorter, item-set, mesh, model loader, procedural/quad/layered shapes and extrusion recovery. The linked PE's 7,913 instructions,
1,346 relative fixups, 68 read-only windows and 47 unwind entries are checked.
See [final linker recovery and verification limits](client-native-link.md).

The first [warning recovery batch](client-warning-recovery.md) restores the
fread buffer/stream boundaries, removing 739 diagnostics. Its wrapper passes
4,096 native argument/return comparisons; complete CRT file I/O remains unverified.

The next warning batch removes 1,529 additional diagnostics. Its 1,271
full-width pointer stores produce identical baseline/cast objects. Byte-fill
and bounded comparison repairs pass 49,409 and 67,617 native cases, including
unaligned destinations and protected page boundaries.

## Codec options, shader status and file output, 2026-10-02

The codec option dispatcher now consumes native eight-byte vararg slots,
loads full-width getter pointers and returns the native zero-extended EAX
status. 1,508 comparisons cover option values, output buffers, delegated calls
and statuses; reset option 4028 and complete codec behavior remain unverified.

The shader compile helper returns its record status instead of a fabricated
cookie check. 256 native comparisons cover source-stage combinations, logs,
record fields, GL call traces and return values with GL/format boundaries
controlled. The next launch passes that helper and reaches shader log writing.

The file formatter wrapper requires a contiguous 1,144-byte context. The
export had split it into small locals, leaving its stream at offset 1,128
outside the actual allocation. 512 native comparisons verify context fields,
locale cleanup, temporary-buffer guard and result forwarding with the format
processor controlled. Camera cache empty-log/open-failure/close return paths
pass 1,024 native comparisons with shader stages deliberately returning failure.
Its six inverse-resolution uploads now use a contiguous vec2; successful-stage
GL behavior remains unverified by this fixture.

The next live launch reaches `putc` and exposes an unsigned countdown that
bypasses flushing when the stream buffer is empty. Its native instruction tests
the sign of the decremented 32-bit count; the repair restores this branch.
2,048 native byte/count/guard comparisons cover this write-or-flush boundary.
The next launch clears shader logging and reaches world-generation setup.
Three native MOVDQU stores had become alignment-requiring C vector writes;
48 comparisons cover the original/recovered stores at all sixteen byte alignments
and preserve surrounding guards. The client still has no verified menu or
interactive gameplay.

The generation-store launch then reaches item-type initialization. All 23
vector writes in that function map to original MOVDQU/MOVUPS instructions;
the repair preserves alignment tolerance for constant copies and shared-state
copies. 368 comparisons cover their original/recovered byte output and guards
at all sixteen destination alignments. The next launch gets past those stores
and exposes four inertia pointers still based on the original EXE image address.
They now reference recovered data storage. 32,768 native comparisons check field
relocation, float output, dimension branches and guards across four rounding modes;
item-specific overrides are excluded. The subsequent live launch reaches the
end of item initialization, exposing a fabricated cookie return. Its sole native
caller discards RAX; the initializer now has a void interface. Thirteen following
world-default copies preserve original MOVDQU/MOVUPS writes and pass 208
original/recovered copy comparisons across all destination alignments.
Native Y/Z unordered comparisons and scalar
float division are preserved in this calculation.

## Vehicle storage and convex-weight vectors, 2026-10-02

After item initialization and the following defaults, startup enters vehicle
asset loading. Six loader pointers still included the original EXE image base;
their read destinations/cursors now reference recovered shared storage. All
reviewed callers use this loader for side effects, so its fabricated cookie
return is replaced by a void interface.

768 native comparisons cover versions 0–5, 32 vehicle indices, controlled
vertex/face counts, read destination/order/size and the entire 180,288-byte
record through file close. Reads are controlled and the fixture stops before
geometry postprocessing; full `.sbv` behavior is not established by this test.
The next live launch clears the reads and reaches vehicle convex weights.

The convex-weight helper has five native MOVUPS loads and five MOVUPS stores
that had become aligned vector dereferences. They now use unaligned intrinsics.
2,304 full-helper native comparisons cover 0–32 points, all sixteen buffer
alignments, three input shapes and four rounding modes. Output bytes, unchanged
inputs/center and guards agree. Its incidental unused RAX is excluded. The next live launch passes this helper
and reaches the end of vehicle initialization. The initializer also returned a
fabricated cookie check; its sole native caller discards RAX, so it now uses a
void return. Vehicle integration, menu display and interactive play are still
unverified.

## Train and item-set storage aliases, 2026-10-02

The base vehicle initializer fix clears its epilogue. Train setup then reveals
two geometry cursors based on the original image address. They now address the
relocated vehicle records, preserving byte offsets and the 180,288-byte stride.
4,096 comparisons check both original LEA instructions against the actual
prepared pointer expressions, with storage above 4 GB. Complete train behavior
is outside this address fixture; the subsequent launch passes train setup.

The next live blocker is the `.sis` item-set scanner: five rotation arguments
still used a fixed original image base. They now reference the original field
through recovered storage and preserve the 116-byte record stride. Its sole
native caller discards RAX, so the fabricated cookie return is replaced with a
void scanner return. 384 comparisons cover the three original LEA sites, record
stride, high addresses and reads; complete scanner behavior is excluded.

## Startup text and presentation recovery, 2026-10-02

The matrix batch clears its first-render blocker. Startup status text then
exposes the slash formatter's fabricated cookie return. Its native return is
the emitted byte count; conversion scratch storage is 1,024 contiguous bytes.
`sr_text_draw_recovered` restores the actual x/y/size float inputs, stack flags
and four float colors. The two `sr_ClientMain` generating/connecting calls now
supply the native (512,160,20), center flag 1 and RGBA=(1,1,1,1). Original text
wrappers had lost their stack arguments and misclassified Y as a pointer.
**The remaining 320 legacy text call sites and their wrapper are not yet
recovered; this change only binds the two startup calls to the recovered ABI.**
The helper supports native horizontal/vertical alignment, shadow offsets and
reverse geometry, and its 16 font GL calls now have complete native signatures,
including attribute strides/offsets, normalized flags and null index pointers.
2,048 comparisons against native text wrapper plus emitter check full GL traces,
colors and vertex bytes across all 256 style flags, active/missing fonts and
four strings. The slash formatter is controlled in that fixture.

`client-link-text-startup-20261002` compiles with zero errors, 2,633 warnings,
four notes and zero linker gaps. It clears the text path and reaches
SDL_GL_SwapWindow, whose argumentless export receives float Y bits as its
window handle. All eight original call sites load the same qword at
0x160fc47c8. A preparation pass restores that load and full pointer forwarding;
2,048 comparisons check native load/argument/RAX forwarding at a controlled
SDL boundary. Original EXE/DLLs remain unchanged. Menu visibility, generation,
connection, audio processing and interaction are still unverified.

## Audio startup and first render setup, 2026-10-02

The audio batch (`client-link-audio-startup-20261002`) compiles with zero errors,
2,604 warnings/four notes, and links without unresolved or duplicate symbols.
Its native PE and dependency checks pass; original SHA-256 is unchanged.
The full client suite passes **94 tests in 85.995 seconds** before the next
matrix repair. Startup now passes PNG font/UI loading, joystick initialization
and audio setup, reaching `sr_ClientMain` and first render setup. Playback and
capture SDL threads appear in the debugger; this is not evidence of functional
sound, menu rendering or interactive play.

Audio setup now passes playback/capture device indices, semaphore count,
thread entry/name/userdata and Windows CRT begin/end callbacks, complete 32-byte
SDL desired/obtained audio specs, playback/capture callback addresses, allowed
changes and pause-device arguments. Its 32 native comparisons control HRTF/SDL
boundaries and compare all affected state, including failed opens and format
rejection. The HRTF initializer's generated cookie artifact is removed from its
void return; its existing data-processing body is retained and not separately
proved by the audio fixture. Audio worker/capture/playback behavior remains
unverified.

The next fault is the matrix multiplication helper `0x14007a0e0` returning a
fabricated cookie call. A repair computes into a complete 64-byte temporary,
preserves native left-to-right scalar MULSS/ADDSS order, supports overlapping
and unaligned buffers, and retains native incidental RAX=right+48. It passes
49,152 native float-bit, overlapping-output, byte-alignment, four-rounding-mode
and MXCSR comparisons. Native fixture cookie validation preserves RAX.

## PNG decompression and joystick startup recovery, 2026-10-02

Dynamic Huffman setup now has a contiguous 19-byte code-length scratch array
and propagates all three builder failures. Its 2,064 native comparisons check
full table/context output, consumed bits, failure status and helper call counts.
PNG's inflater is one 4,096-byte object: output/current/base/end at 24/32/40,
expandable flag at 48, and Huffman tables at 52/2072. Native RBP is final
RSP+0x100, so exported declarations suggesting thousands of bytes between these
fields were incorrect. Two length-table aliases now use native windows at
0x26fcd0/0x26fd50 with symbol bias 257. The repaired emitter passes 129 native
comparisons and zlib reference output checks, including the first dynamic block
of `font/vcr.png`. Native emission uses controlled bit-refill, slow-decode,
fill and growth boundaries; fixed/uncompressed blocks and growth remain outside
this fixture's coverage. The fixture retains zlib's footer as native read-ahead
requires it.

PNG loader status exits preserve native EAX instead of calling a cookie checker
with fabricated frame locals. The filter wrapper propagates direct-filter
success/failure and passes 256 native argument/status cases with a controlled
filter callee. Full interlaced PNG scratch arrays still need recovery.
The `client-link-png-status-20261002` launch clears font/UI loading and reaches
joystick initialization. SDL mapping import calls had lost the file path,
`rb` mode, returned stream and ownership flag. The next repair restores all
14 mapping/enumeration/open/instance/name/capability calls. Its 32 native cases
compare call traces and all 20,480 bytes around joystick globals, using zero
through 40 devices, controller/plain branches, failed opens, null mapping
streams, high pointer values and instance-ID clamping. External SDL behavior
is controlled in that fixture. Original game binary and DLLs remain unchanged.

## Latest Huffman table recovery, 2026-10-02

`repair_client_huffman.py` recovers native zero returns for bad sizes and bad
codelengths, and one for successful table construction at `0x14016f730`. The
native cookie epilogue preserves EAX; exported C instead returned a checker
call with uninitialized frame locals. All three generated returns now preserve
the native result. Count storage is 17 contiguous 32-bit entries (68 bytes),
matching the original 64-byte histogram and its adjacent initialized word.

The actual prepared builder passes 8,421 comparisons with native instructions:
fixed literal/distance tables, empty/nonpositive input, uniform lengths, random
valid prefix trees, random invalid and oversubscribed counts. Full 2,048-byte
output windows and adjacent guard bytes are compared, along with full-width
returns and failure classification. Inputs are confined to code lengths 0..15;
undefined/out-of-contract lengths are not newly constrained. Native TLS error
sinks are controlled fixture boundaries; the original cookie checker boundary
checks the actual frame cookie while preserving EAX. Complete decompression
and production TLS diagnostic behavior remain outside this fixture.

All 89 client tests pass on the regenerated source (79.326 seconds). The object
has zero errors, 2,604 warnings and four notes; linking has zero unresolved or
duplicate symbols. Native PE and dependency verification pass. The original
EXE hash is unchanged. Latest EXE SHA256:
`afd8e922004ff461acbe6690e4e734b4e7837c798a0a78bd8d3affc3e858998e`.

Actual launch clears the Huffman-builder fault. The next fault is the caller
`sub_14015cf70`, which decodes a dynamic Huffman block and still exports two
cookie returns. It also splits a contiguous 19-byte code-length array into a
16-byte local, a word and a byte. Native control flow checks the returns from
both final Huffman builds; the prepared source does not preserve that complete
result flow. Recovering this scratch layout and all success/failure propagation
is the next target. The failure handler faults at unaligned `RtlCaptureContext`.
Successful font decode and the menu remain unverified.

Evidence: `reports/client-link-huffman-20261002/` and
`reports/client-huffman-20261002/`.

## PNG input and UI return recovery, 2026-10-02 (previous milestone)

The file image callback was incorrectly routed through the isolated leaf's
MinGW `fread`, which was given a recovered CRT stream object with a different
layout. `client_leaf_adapter.inc` now calls recovered `fread_sr` with element
size one and the signed count promoted to `size_t`, matching the original
tail call at `0x1400012b1`. The isolated leaf retains its own ordinary C-runtime
fixture; production recovered stream objects use their recovered CRT.

After routing the call correctly, a debugger dump confirmed the real PNG header
in the reader's buffer. The parser reported `unknown image type`: its signature
routine compared signed `char` -119 with unsigned byte 137, rejecting PNG byte
0x89. The original `CMP CL,[RDI+RSI]` compares eight-bit values. The scoped
repair makes the signature local unsigned.

Heap faults during reads/cleanup exposed another dropped size in CRT stream
buffer setup at `0x140253ef8`. The original moves 4096 into RCX before malloc;
the export called `malloc_base()` without arguments. The repaired call uses
`sr_path_malloc(4096)` and preserves native allocation-failure inline-buffer
fallback and flags.

The UI asset loader at `0x140078610` now returns zero on failure and one after
its final successful setup, as its native EAX paths do. Its fabricated cookie
return used uninitialized locals rather than the original frame cookie. The
recovered C function returns its result directly.

Fixtures pass 4,096 native callback argument/return cases, 1,024 native UI
index/load-failure cases, 147,528 PNG byte/prefix/refill cases and 512 native
stream buffer size/flags/counter/fallback/return cases. UI success is checked
against native instructions and placement in the prepared source, not full
asset rendering. The PNG fixture controls the native TLS error sink and tests
signature/refill flow, not full decompression. The stream fixture controls
malloc and free; allocator behavior is covered by the separate native suite.

All 88 client tests pass on the regenerated source (95.250 seconds). There
are zero compiler errors, 2,604 warnings, four notes, zero unresolved or
duplicate symbols. Native PE and dependency checks pass. Original EXE hash
remains unchanged. Latest EXE SHA256:
`a462099ba332832d625906908a22908a420b92deaa474b8375be40bb1dc19022`.

The ordinary launch remained alive for the first eight-second observation
then exited. Debugger launch now enters PNG decompression and reaches Huffman
table setup at `0x14016f730`. Its exported returns still call the original
cookie checker using independent uninitialized locals; native epilogue recovers
the real frame cookie at `0x14016f963` and preserves EAX. The resulting failure
handler faults at unaligned `RtlCaptureContext`. Recovering this routine's
return paths and table layout is next. The font has not decoded successfully
and no menu has been observed.

Latest evidence: `reports/client-link-png-stream-20261002/` and
`reports/client-ui-return-20261002/`. Intermediate CRT-routing evidence,
including the real PNG bytes and earlier error string, is retained in
`reports/client-link-ui-read-20261002/`.

## File image-reader recovery, 2026-10-02 (previous milestone)

`repair_client_image_reader.py` restores the file image loader at
`0x140170c30` using the native contiguous 224-byte context. Callback slots are
at offsets 16/24/32, the file pointer at 40, state/capacity at 48/52, the
128-byte buffer at 56, the consumed count at 184 and four buffer pointers at
192/200/208/216. Compile-time assertions check layout. The original callback
table identifies targets `0x1400012a0`, `0x1400012c0` and `0x140001300`;
the repair uses explicit function targets rather than reading adjacent C globals.

The wrapper returns the decoded pointer after seek and close, as native
`MOV RAX,RDI` at `0x140170d90` does. The fabricated cookie call is removed
from this reconstructed wrapper. GCC supplies its own frame conventions.

The actual prepared wrapper passes 258 comparisons with the original native
wrapper across 129 initial read lengths and decode success/failure. Controlled
file/decode callbacks check offsets, original/current/end pointers, bytes,
callback targets, seek/close order and full-width returned pointers. This fixture
does not exercise the complete PNG decoder, file-open failure TLS branch or
other STB reader wrappers, which still contain fragmented stack objects.

All 84 client tests pass on the final source (67.123 seconds). Compilation has
zero errors and 2,604 warnings, five fewer. Linking has zero unresolved or
duplicate symbols. Native PE/dependency verification passes; the original
executable hash remains unchanged. Rebuilt executable SHA256:
`e3af0941cb6c2464c520062e2f423af0c1d84c6e0cb0dd683df13344858c3616`.

Actual launch clears the invalid callback jump. A breakpoint/finish trace shows
`font/vcr.png` returns a null decoded pointer, so successful font loading is
not established. Startup then reaches the UI loader's fabricated cookie call,
enters its failure handler and faults at an unaligned `RtlCaptureContext`
destination. Native UI epilogue instructions at `0x14007911e` recover their
cookie from the actual original frame and preserve EAX through the checker;
the generated call instead uses uninitialized independent locals. Recovering
that return flow and diagnosing the PNG failure are the next tasks. The menu
has not been reached.

Evidence: `reports/client-link-image-reader-20261002/` and
`reports/client-image-reader-20261002/`.

## Shader-source ABI recovery, 2026-10-02 (previous milestone)

`repair_client_shader_source.py` restores the explicit null fourth length
pointer in all five shader-source calls, three in `0x14004c4e0` and two in
`0x140077710`. It verifies the pinned original and each indirect call target
and R9 zeroing instruction before applying typed call boundaries. Two startup
shader-text assignments also retain their full-width pointer types. The
original source bytes and shader code are preserved.

The fixture compares the actual prepared startup shader prefix with its original
machine code for 256 identifier patterns. It checks creation, source bytes,
null lengths, compilation/attachment order, written identifiers and pointers
above 4 GiB. Controlled GL callbacks replace the driver in this fixture; it
does not verify shader compiler output or complete rendering.

All 83 targeted client tests pass on the final regenerated source. The object
has zero errors and 2,640 warnings (seven fewer); linking has zero unresolved
or duplicate symbols. Native code, fixups, data windows, unwind coverage and
the dependency fixture pass. The executable SHA256 is
`c19b1173d54b8dd3db24b16c7857d1a61c64ed1d5f1885ce9cbcba7a090d5a19`.
The original executable hash is unchanged.

Launch clears the previous driver fault and reaches `ui_load_base_assets_candidate`.
The next fault is an indirect image-reader callback at address `0x7f` while
loading `font/vcr.png`. A breakpoint captures context `0x5ff220`, with `0x7f`
at offset 16, before `sub_14016D910` calls it. The caller `sub_140170C30`
represents the original contiguous 224-byte reader context as a 16-byte array
and unrelated stack locals, including its callback slots and 128-byte buffer.
That layout needs recovery; the callback table and caller return path must
also be checked during the next repair. No menu has been observed.

Evidence: `reports/client-link-shader-source-20261002/` and
`reports/client-shader-source-20261002/`.

## Allocation-size recovery, 2026-10-02 (previous milestone)

`repair_client_malloc_calls.py` redirects 167 malloc-thunk callers whose size
expressions were recovered to the existing typed native allocator. Fifteen
callers with missing size expressions remain queued; the old argumentless
allocator is not globally repaired. The pass also restores the `realloc(NULL,
size)` branch to pass its full-width size into the same allocator. Native bytes
at `0x14025a0d1` show `MOV RCX,RDX` before calling malloc.

The first launch after repairing the 167 calls still failed during extension
cleanup. A debugger boundary trace showed `realloc(NULL, 3232)` before the
extension string allocations. Its recovered null-block path still called
`malloc_base()` without a size, undersizing the pointer table. Repairing that
path lets launch pass extension collection and cleanup.

The expanded fixture compares actual prepared malloc/realloc bodies against
the original native functions in 2,304 cases. Controlled heap boundaries cover
zero sizes, upper limits, pointers and sizes above 4 GiB, allocation failure,
new-handler retry, zero-size free, errno and complete return bits. These are
boundary comparisons, not proof of the complete game allocator system.

The latest executable has SHA256
`2d8618adea0f3d39c8aa480a44a9ada5148b840d37eadf5055357b77c981fc19`.
It compiles with zero errors and 2,647 warnings, links with zero unresolved or
duplicate symbols, and passes native PE and dependency verification. The
82-test client gate passed before the additional realloc repair; the expanded
allocator test was rerun successfully on the final regenerated source.
The original executable's pinned hash remains unchanged.

Launch now reaches `sub_140077710` shader setup. A driver worker faults reading
through address 2; an all-thread trace places the application thread in that
setup function. Both recovered shader-source calls supply three arguments;
the original clears R9 at `0x14007774f` and `0x14007779d`, supplying a null
fourth length-pointer argument. This confirmed ABI omission is the next repair;
its role in the observed driver fault must be verified after rebuilding.
The menu has not been reached. Evidence:
`reports/client-link-malloc-realloc-20261002/` and
`reports/client-malloc-calls-20261002/`.

## First launch: Windows command-line bridge (historical evidence)

The first linked client was launched on 2026-10-02 from the game's directory.
The exported `WinMain_0` dropped arguments at all five SDL import thunks:
allocation, wide-string length, UTF-16LE to UTF-8 conversion, main-ready
notification and cleanup. In particular, the original requests `(argc + 1)`
elements of eight bytes; the recovered call supplied no allocation arguments.

`repair_client_startup_arguments.py` replaces this bridge using typed SDL
import aliases, preserving the original failure message/return and normal
cleanup. It verifies the original hash, IAT thunk identities, allocation setup
and encoding strings. The actual game SDL DLL passes command-line tests with
empty arguments, spaces, quotes, backslashes, Arabic, Japanese and emoji.
Injected allocation/conversion failures reproduce the original fatal path.
The bridge test substitutes
the application entry to inspect arguments; it does not verify game startup.

The repaired bridge reached `app_main_utf8_candidate`, where the next launch
faulted at `app_main_utf8_candidate+1308`: a generated `MOVAPS` store. The
original six startup vector stores are RIP-relative `MOVDQU`, allowing
unaligned destinations. The same recovery pass restores all six as explicit
`_mm_storeu_si128` operations after verifying their original destination
addresses. A C fixture checks the six original constant vectors at every
byte alignment (96 stores), including surrounding guard bytes. The targeted
client suite now contains 59 tests. Debugger evidence is retained in
`reports/client-link-startup-20261002/startup-instructions.txt`.

The next build, `reports/client-link-startup-alignment-20261002/`, compiles
with zero errors and 2,684 warnings, links without gaps/duplicates, and passes
native PE/dependency verification. Its actual launch passes the repaired
startup stores but exits with access violation `0xC0000005`. GDB traces this
through `getdrive()` and the stack-cookie failure path into
`RtlCaptureContext`. The recovered `getdrive()` declares `Buffer` as one
`__int16`, then clears 0x20A bytes and asks `GetCurrentDirectoryW` to write
261 wide characters into it. This overwrites the local stack; return-address
slots in the backtrace contain UTF-16 directory text. Its buffer shape,
return-value recovery, dynamic allocation arguments and cookie epilogue
need repair before the next game launch. No menu or gameplay was reached.

## Directory buffer and drive return recovery

`repair_client_directory.py` restores `getdrive()` at `0x14026426c`:

- A 261-element `wchar_t` buffer replaces the two-byte exported local.
- The original EDI drive computation and EAX return are restored, including
  ASCII lowercase conversion and the zero return for paths without a drive.
- Long paths receive a zeroed allocation of `(required + 1)` two-byte elements.
  A scoped typed copy of the recovered allocator retains its CRT heap,
  overflow, errno and new-handler policy without changing other callers.
- Allocation/conversion failures set errno 12, release the temporary buffer
  as the original does, and return zero.
- The native frame-specific cookie expression is replaced by the C drive
  return. The original cookie helper preserves EAX; it is not the return value.

The test executes the original 248-byte routine with controlled Windows and
allocator boundaries. **93,630 native comparisons** check returns, errno,
buffer capacities, allocation count/width and cleanup across short/long paths,
allocation failures and directory-query failures. The original frame cookie
is checked while preserving EAX; the C fixture enables stack protection.
The fixture tests directory behavior with a controlled allocator, rather than
claiming complete CRT heap or thread-local-state recovery. All 60 targeted
client tests pass. Evidence: `reports/client-directory-20261002/`.

The directory build compiles with zero errors and 2,683 warnings and links
with zero unresolved/duplicate symbols. Native PE verification, dependency
fixtures and preparation audit pass. The launch now returns from `getdrive()`
and reaches the full-path API lookup. It faults at the indirect call in
`sub_14024EDA4`, which asks `try_get_function` for `AreFileApisANSI`.

GDB confirms `_security_cookie = 0x2b992ddfa232` and the first dynamic API
cache entry at original address `0x144cbf230` is zero. The lookup decodes it
as `ROR64(cache XOR cookie, cookie & 63)`, yielding `0xae64b77e88c8000`, exactly
the invalid RAX call target. The original initializer `sub_14024FAF0` fills
34 entries with the cookie, representing encoded null pointers. Recovering
this original startup initialization is the next target. No menu was reached.
Evidence: `reports/client-link-directory-20261002/launch.json`,
`startup-backtrace.txt` and `api-cache-diagnosis.txt` in that directory.

## Encoded API cache initialization

`repair_client_api_cache.py` restores `sub_14024FAF0()` before `WinMain_0`
at the rebuilt `WinMain_sr` entry boundary. The original registers this
initializer at `0x140289fd0`; its 52-byte body fills the 34 eight-byte API
cache entries with `_security_cookie`, which decodes as a null pointer.
The pass checks the pinned original hash, initializer bytes, registration
and recovered cache bounds before inserting the call.

The fixture compares the C initializer with the original machine code for
4,096 cookie values and verifies all 34 decoded nulls and surrounding guards.
It also executes the repaired entry with an application-entry stub to check
initialization order and return forwarding, then exercises the actual
recovered `try_get_function` against Windows for `AreFileApisANSI`, a cache
hit, and a missing-function negative cache. All 61 targeted client tests
pass. Evidence: `reports/client-api-cache-20261002/`. This recovers one
original CRT initializer; complete original CRT startup remains unfinished.

The API-cache build has zero compiler errors, 2,683 warnings and zero linker
gaps/duplicates. The preparation audit and linked-native/dependency checks
pass. Its actual launch gets past the previous `AreFileApisANSI` indirect-call
fault. GDB records the API cache populated with an encoded resolved pointer.

The next failure is the exported cookie epilogue in the narrow full-path
conversion routine at `0x14024a574`, through `sub_1401F8B20` and the fail-fast
context capture. Its C export returns a frame-specific cookie check using
uninitialized `v23`, rather than a recovered conversion result. Its buffer
structures are also exported as separate adjacent locals, so their layout
must be audited when restoring the result and frame semantics. No menu or
gameplay was reached. Next target: the full-path conversion's structure
layout and legitimate return behavior. Evidence:
`reports/client-link-api-cache-20261002/launch.json` and `startup-backtrace.txt`.

## Full-path conversion and caller layout recovery

`repair_client_full_path.py` restores the pipeline rooted at `0x14024a574`.
The CRT buffer is now one 48-byte object: initial buffer at offset 0, initial
capacity at 8, active buffer at 16, capacity at 24, size at 32, and ownership
byte at 40. The locale-update object is 32 bytes with its changed flag at 24.
Static assertions enforce these native layouts. Both internal wide buffers
and the `getcwd` caller at `0x14024af64` now use contiguous objects.

The recovered C returns each stage's error code as the original does through
EBX/EAX. It no longer substitutes a frame-specific cookie expression using
uninitialized C locals. The native fixture retains a working frame-cookie
check, and the C fixture enables stack protection.

The pass also restores the missing multibyte code-page argument, complete
Win32 conversion arguments, the original code-page flag policy, and the
wide-buffer growth allocation size. Scoped typed allocator/conversion copies
retain the existing CRT heap and errno policy. The existing eight-argument
wide conversion wrapper now forwards all eight arguments to Windows.

The fixture executes the original six-function pipeline against the actual
Windows conversion/full-path APIs with controlled locale, allocation, free
and errno boundaries. **1,152 comparisons** check successful and failed
conversions, ANSI/OEM/UTF-8 selection, empty/null and long input, output limits,
allocation failures, buffer contents, sizes, locale flags and cleanup.
Another **378 original caller comparisons** check its contiguous buffer
object and return forwarding. All 62 targeted client tests pass. Evidence:
`reports/client-full-path-20261002/`. Complete CRT heap/thread-state startup
and error-number mapping are not established by the controlled boundaries.

The resulting object has zero errors and 2,678 warnings; linking succeeds
without unresolved/duplicate symbols. Native PE checks, dependency fixtures
and the preparation audit pass. The actual launch gets past full-path
conversion, then fails in the directory-change routine `sub_14024C22C`.
Its exported cookie epilogue uses uninitialized `v15`; the routine also
constructs a CRT buffer from split locals and exports its backing storage
with a suspiciously small declaration. That routine's native buffer shape,
conversion arguments, environment-update behavior and success/failure return
need recovery next. No menu or gameplay was reached. Evidence:
`reports/client-link-full-path-20261002/launch.json` and `startup-backtrace.txt`.

## Directory-change chain and process heap

`repair_client_chdir.py` restores `sub_14024C22C` and its narrow directory /
environment conversion chain. The directory-change backing buffer is now
272 bytes (261-byte logical capacity), and all CRT buffers and locale objects
are contiguous structs. The four-byte hidden drive-variable name is formed
as `=X:` followed by a null byte. UNC paths skip that environment update.
The C routines return the native success/failure result retained in EBX/EAX,
instead of an uninitialized machine-frame cookie expression.

The dependent SetCurrentDirectory and SetEnvironmentVariable wrappers now
pass the actual code-page and conversion arguments. Current-directory wide
and narrow growth use the original allocation sizes through the typed CRT
allocator. The original registered process-heap initializer `sub_140260A78`
at `0x14028a000` executes before the game entry, establishing the process heap
used by these recovered allocations.

The fixture executes nine original code regions for **3,600 comparisons**
covering null/invalid input, Unicode, ANSI/OEM/UTF-8 policy, UNC paths, long
directories, allocation failures, query / directory-set / environment-set
failures, error returns, ownership cleanup and environment arguments. OS
directory/environment writes are controlled in the fixture; actual Windows
text conversions run. The native frame cookie is checked, and C stack
protection is enabled. A separate original-machine-code comparison checks
the real GetProcessHeap handle and initializer result. All 63 targeted tests
pass. Evidence: `reports/client-chdir-20261002/` and the API-cache fixture.

The directory-change build has zero errors, 2,676 warnings and zero linker
gaps/duplicates. Native PE verification, dependency fixtures and the
preparation audit pass. The regenerated entry fixture also confirms the
process heap is initialized before the application entry.

The actual launch now passes directory changes and reaches the profile/config
loader `player_load_profile_config_candidate` at original `0x1400eaa00`.
Its next fault is a generated `MOVAPS` store at compiled function offset 879
to a destination ending in `0x14` (unaligned to 16 bytes). The vector contains
the default screen/settings values. Next target: original-versus-rebuilt
global-storage alignment and the profile initialization stores. No menu or
gameplay was reached. Evidence: `reports/client-link-chdir-20261002/launch.json`,
`startup-backtrace.txt` and `profile-fault-instructions.txt`.

## Profile default copies

`repair_client_profile_stores.py` verifies the pinned native profile routine
at `0x1400eaa00` and restores three MOVDQU stores plus one MOVUPS copy.
The generated aligned vector lvalues become explicit unaligned stores; the
16-byte scalar copy uses `__builtin_memcpy`. All destinations and widths match
the native RIP-relative stores. The global storage layout is unchanged.

The fixture executes the actual original load/store instruction pairs with
relocated source and destination displacements. It compares all 64 bytes of
the destination region against each prepared C statement at all 16 alignments.
**64 native/recovered copy comparisons pass**, including guard bytes. Evidence:
`reports/client-profile-stores-20261002/profile_fixture.c` and executable.
The complete targeted client suite passes **64 tests**.

The rebuilt profile batch compiles with zero errors and 2,676 warnings, links
with zero unresolved/duplicate symbols, and passes native PE and dependency
verification. The preparation audit records 7,157 edits and 17,132 counter
events. Executable SHA-256:
`f19d4ce23cfa8889c83e230b7478f9a5eaeceaf3128b1f2c9eac67e6c813c19d`.

The actual launch passes the first two repaired profile vector stores, then
faults in `try_get_function`, called through the time helper
`sub_14024F1F8` / `sub_140237378` / `sub_140237448`. The original wrapper
passes R8=`0x14028ad18` and R9=`0x14028ad1c`: a contiguous one-element
unsigned module-index range containing 8. The recovered C instead passes
`(unsigned int *)"\b"` and the address of a separate `dword_14028AD1C`.
This loses the original begin/end relationship and permits traversal beyond
the module list. Recovering that resolver argument/storage relationship is
the next blocker; the third vector and scalar copies are verified in the
isolated fixture but are not yet reached in the full-client launch.
No menu or gameplay was reached. Launch/debugger reports:
`reports/client-link-profile-20261002/{launch.json,startup-backtrace.txt}`.

## CRT API module-candidate ranges

`repair_client_api_ranges.py` restores all 49 recovered calls in 36 functions using
`try_get_function`. Each pair of original R8/R9 RIP-relative LEAs is decoded
and its read-only unsigned module-index range recovered from the pinned PE.
Callers now own contiguous static arrays and pass the array plus its true
one-past-end pointer. This restores the resolver's traversal bounds after
decompiler literal/scalar substitutions broke the begin/end relationship.
Function names, resolver slot IDs, module search order and fallback branches
are retained. Shared module and encoded-function caches are unchanged.

The range fixture executes the original R8/R9 LEA instructions with relocated
displacements and compares the actual prepared C begin/end arguments and
candidate contents for **49 ranges**. The API-cache fixture also extracts the
actual repaired `sub_14024F1F8` time wrapper, resolves the real Windows precise
time API, checks its FILETIME result against a bounded system-time interval,
and repeats the call through the populated cache. Evidence:
`reports/client-api-ranges-20261002/` and
`reports/client-api-cache-20261002/`.

The first range-only launch passes the precise-time lookup, then reaches
`srand` and faults in `LoadLibraryExW` through `sub_14024F02C` (FlsSetValue).
Module-table slot 1 was exported as absolute pointer `0x140284918`, outside
the relocated replacement image. The recovery pass now restores all 20 module
names as original UTF-16 code-unit arrays and binds the existing pointer table
to that storage. The API fixture checks every actual prepared table entry
against the original, then exercises the actual recovered FlsSetValue/FlsGetValue wrappers using
a real Windows fiber-storage slot.
It also uses this actual table for all earlier Windows lookup tests.
Range-only launch evidence is retained under
`reports/client-link-api-ranges-20261002/`.

The final module-table build has **zero compiler errors, 2,657 warnings**
(19 fewer) and four notes. It links with zero unresolved/duplicate symbols.
All **65 client tests** pass. Linked native instructions/unwind metadata,
SDL dependencies and preparation provenance checks pass. The audit records
7,157 edits and 17,201 counter events. Executable SHA-256:
`f11e3d1d7dcd320e864900e6c3c54f470e3f751c846032ef14de423d01600574`.

The actual launch now passes the original precise-time resolver and module
loading, then aborts in `sub_140255A70` while `srand` requests CRT per-thread
data. A breakpoint before `abort` confirms `dword_140302410` is still
`0xffffffff` (no allocated fiber-storage slot). The subsequent abort path
enters an uninitialized critical section and faults. Recover remaining CRT
fiber-slot, per-thread data allocation arguments and lock initialization
before the next launch. No menu/gameplay has been reached. Reports:
`reports/client-link-api-modules-20261002/{launch.json,startup-backtrace.txt,thread-state-abort.txt}`;
object, warning inventory and preparation audit use the same `api-modules` tag.

## CRT locks, fiber slot and thread allocation

`repair_client_thread_startup.py` restores the registered initializer order:
encoded API cache, locks, process heap, then fiber/thread data. It validates
the corresponding original table entries at RVAs `0x289fd0`, `0x289ff0`,
`0x28a000` and `0x28a020`. The existing lock and PTD initializer bodies run
before the application. Failed initialization rolls back the completed heap
and lock stages; the original executable's CRT failure route uses fast-fail 7.
This restores selected required stages; other CRT initialization/shutdown
stages remain separate recovery work.

Five thread getters at `0x140255818`, `0x1402558b8`, `0x140255a70`,
`0x140255b44` and `0x140255bec` dropped both native calloc arguments.
Each now calls the scoped recovered CRT allocator with count 1 and width
`0x3c8` (968 bytes), verified from original ECX/EDX setup. Existing getter
cache, sentinel, error preservation, ownership and failure paths are retained.

The differential fixture executes all five original getter bodies, the
original fiber/PTD initializer and uninitializer, and the original lock
initializer/uninitializer with controlled API/allocation boundaries.
**1,951 comparisons** cover slot/cached-pointer states, allocation failures,
fiber storage failures, last-error preservation, all 14 lock failure positions,
reverse cleanup and successful initialization. PTD contents/locale acquisition
are controlled at the initialization boundary, rather than claimed as a
complete locale/CRT comparison. A second fixture compares the actual repaired
entry against the original initializer dispatcher for normal startup and each
of three failed stages (**four order/rollback cases**).
Evidence: `reports/client-thread-startup-20261002/`.

The regenerated allocator has an explicit 64-bit declaration before the
thread getters; this preserves the full pointer return despite the scoped
allocator definition appearing later in the generated source. The final
object has zero errors, 2,657 warnings and four notes. Link gaps/duplicates
remain zero. All **67 client tests** pass. Native PE and dependency verification
pass; preparation provenance records 7,157 edits and 17,209 counter events.
Executable SHA-256:
`a8fda3fe76fc4308d7c1e084ecd33ee65c34e6fb81ef5854f1289867fc95948c`.

The full launch now records fiber slot `0x6` and lock count `0xe` (14).
It passes thread acquisition and `srand`, then fails while formatting the
profile's default agent name through `sub_140158AB0` / `sub_1402250AC`.
The first fault is `sub_140218994+74`, dereferencing address `0x4100` while
following the locale/ctype pointer chain. The original instructions also
follow this three-load chain, so the next investigation is its caller's
formatter context and locale storage/initialization. No menu/gameplay was
reached. Evidence:
`reports/client-link-thread-startup-final-20261002/{launch.json,startup-backtrace.txt}`.
The object, warning inventory and preparation audit use the same
`thread-startup-final` report tag.

## Narrow formatter objects and default locale backing

`repair_client_formatter.py` replaces the split locals in the snprintf wrapper
at `0x14020e60c` with contiguous objects matching native stack offsets:
32-byte locale update, 32-byte output adapter, and 1,144-byte format processor.
The processor's scratch allocation, adapter pointer and pass count are at
1120, 1128 and 1136. Only fields initialized by the original are initialized;
the processor scratch workspace is retained. The wrapper preserves the native
termination/truncation branches and returns native zero-extended EAX instead
of an uninitialized frame-cookie expression.

Default locale pointers at `0x140302578` and `0x140302580` now share one
16-byte object. Assembly aliases retain both original symbol names. Native
character classifications at `0x14028b810` are restored for all 256 byte values
and the preceding EOF word; the 33-element export was incomplete. The new
257-word backing retains the original public table address at offset two.
This repairs these backing objects, not every CRT locale object or initializer.

The wrapper fixture executes the original routine with controlled locale and
format-processor boundaries, checking native object construction, output bytes,
full-width result, error/invalid-argument handling, temporary allocation release,
locale flag cleanup and guard bytes. **23,328 comparisons pass** across option
bits, capacities, used counts, signed processor results, null pointers and
locale/temporary-storage states. The original stack cookie is checked; the C
fixture enables stack protection. A second fixture checks all **257 original
ctype words**, alias offsets, and **16 actual prepared locale-constructor
cases** for default/provided locales and per-thread flag handling. Format
parsing/conversion itself remains outside this wrapper comparison.
Evidence: `reports/client-formatter-20261002/`.

The formatter build compiles and links without errors or gaps, with 2,657
warnings. All 69 targeted client tests pass. Its launch passes the prior
locale/context fault and reaches `unknown_libname_586` (`0x140224060`), where
another fake frame-cookie return causes stack-cookie failure. The menu is
still unreached. Evidence: `reports/client-link-formatter-20261002/`.

## Narrow formatter emission return

`repair_client_format_emission.py` recovers the observed `MOV AL,1` return
from `0x140224060`. The exported cookie expression read an uninitialized
local and called the cookie checker with it. The replacement uses a byte
return and lets the compiler generate stack protection. It retains the
native narrow/wide branches, six-byte conversion capacity, EAX-only conversion
status checks, error handling,
and output-adapter calls. The extra fifth stack argument in the native caller
is unused by `0x14022475c`; its four live arguments are complete.

The fixture executes both original emission and adapter instructions and
compares them with recovered C across **24,480 cases**: character counts,
capacities, exhausted buffers, count-only output, signed initial results,
and injected conversion failure/empty output at different positions. It
checks AL, emitted bytes, counts, pointer movement, conversion/copy calls,
and guard bytes. Injected conversion results include nonzero upper register
bits to verify that only EAX controls the error branch. The original cookie
is validated and the C fixture enables
stack protection. Conversion and copy APIs are controlled boundaries;
complete locale conversion and format parsing remain unverified. Upper RAX
bits are incidental in the native byte return and are not compared.
Evidence: `reports/client-format-emission-20261002/`.

The resulting object compiles with zero errors and 2,656 warnings; linking
has zero unresolved/duplicate symbols. Native-link and SDL dependency checks
pass. The EXE SHA256 is
`ceb898c7ac0e64a8b41e5394a0eaee6fb7beb2bbc4f4f65d99e05c1114fc2a86`.
An actual launch passes agent-name formatting and reaches profile file opening.
GDB catches a null stream-table dereference in
`find_or_allocate_unused_stream_nolock` (`0x14025068c`): its table base is zero,
so the first dynamic-stream slot resolves to address `0x18`.

The stream table is initialized by `0x14020b408`, registered at
`0x14026e6e8` in the original executable. The low-level file initializer
`0x140250554` is registered at `0x14028a030`; neither stage is yet invoked by
the experimental entry bridge. Recovery also needs their allocation ABI,
standard-stream backing, failure cleanup and native ordering; merely inserting
calls has not been validated. The allocator itself still drops its dynamic
stream calloc arguments. The menu remains unreached. Evidence and the next
recovery queue: `reports/client-link-format-emission-20261002/`.

## File and standard-stream initialization

`repair_client_stdio.py` restores four typed allocation calls: 64 low-level
descriptors of 72 bytes, a dynamic 88-byte stream, and both pointer-table
allocation attempts (eight bytes per entry). Three standard streams now share
their original 264-byte initialized backing. Public symbols at the beginning
and offset 24 remain aliases into that backing. The inherited-handle routine
uses the complete 104-byte Windows startup-info object and reads its handle
metadata pointer at original offset 72.

The experimental entry runs the registered low-level file initializer after
thread initialization and before the C stream initializer. Low-level failure
uninitializes completed PTD, heap and lock stages before fast-fail 7. A failed
C stream initializer returns 255, matching the original `_initterm_e` startup
route. This is a scoped addition; other native startup stages remain incomplete.

A differential fixture executes seven original routines with controlled
allocation, locking and Windows handle APIs. **960 pipeline cases pass** across
configured stream counts, allocation failures, inherited handle metadata and
invalid/valid standard handles. It compares allocation arguments, descriptor
and stream bytes, table entries, stream reservation, API calls and return
values. The Windows startup-info stub writes all 104 bytes; the C fixture
enables stack protection. Another fixture checks **six startup order, rollback
and C-initializer failure routes** using the original CRT dispatcher and
`_initterm_e` instructions. Real file opening and subsequent I/O remain outside
these controlled API fixtures. Evidence: `reports/client-stdio-20261002/`.

The full stdio build compiles with zero errors, 2,655 warnings and four notes;
linking has zero unresolved/duplicate symbols. All **72 client tests**, native
PE verification and SDL dependency checks pass. The EXE SHA256 is
`387c35302e23033818b047892eae871f92355c5a2ad7f619661367f337f60ed9`.
Launch passes the former null stream-table fault and reaches `sopen_nolock`
and multibyte filename conversion (`0x140238394`). GDB catches a dereference
of the truncated filename pointer. The caller `0x140251044` casts both the
filename and output file-handle pointer to 32 bits; native instructions retain
full pointers. Its mode stack object and the conversion adapter's locale/buffer
objects also need recovery, along with dropped conversion/allocation arguments.
No menu was reached. Launch, backtrace, original instruction listings and the
next recovery queue are in `reports/client-link-stdio-20261002/`.

## File-open pointer widths and filename conversion

`repair_client_file_open.py` replaces the narrow file-open wrapper at
`0x140251044`. Filename and descriptor-output pointers retain their native
64-bit width. The mode parser gets a complete 12-byte result object, matching
the original eight-byte copy plus trailing four-byte slot. The wrapper preserves
the accepted-mode branch, sharing mode, permission value 384, stream count
increment, atomic stream flags, descriptor and cleared fields.

The narrow adapter at `0x140266274` now has actual 32-byte locale and 48-byte
conversion objects. It selects UTF-8 for a UTF-8 locale; otherwise Windows
file API policy selects ANSI or OEM. It clears the temporary locale flag before
conversion, passes the code page into the existing `sr_path_mbs` recovery,
forwards the converted buffer to wide opening, and frees owned temporary storage.
Conversion errors retain the native zero-extended EAX result of -1.

**3,456 comparisons pass** through original file-open, secure-dispatch,
narrow-adapter and multibyte-conversion instructions. The fixture uses the real
Windows conversion API, including Unicode, long names and invalid UTF-8.
Allocation failure, accepted/rejected mode results, stream flags, wide-open
results, lock ownership, descriptor cleanup, locale cleanup, pointer returns,
stream and allocation guards are checked. Filename literals are verified to
reside above 4 GiB. Mode parsing and wide file opening are controlled boundaries;
this fixture does not establish complete mode parsing, wide opening or file I/O.
Evidence: `reports/client-file-open-20261002/`.

The first file-open build has zero errors or linker gaps, 2,650 warnings and
73 passing client tests. Its actual launch passes filename conversion and
returns a profile stream, then faults on the first `getc` call. The exported
`0x14020bac8` decrements an unsigned count and compares it with zero, so an
empty stream never takes the native signed refill branch. This batch also
restores the 32-bit wrapping decrement followed by an explicit signed check.
**4,096 native comparisons pass** for all byte values, null/non-null streams,
and signed boundary counts, including INT_MIN wraparound. The fixture checks
full return-register propagation through a controlled refill callback, count,
pointer movement, errno/invalid-argument handling and stream bytes. Actual
refill and low-level reading remain outside that helper fixture. Evidence:
`reports/client-file-open-20261002/getc-stdout.txt`.

The combined build compiles with zero errors, 2,650 warnings and four notes;
linking has zero unresolved/duplicate symbols. All **74 client tests**, native
PE verification and SDL dependency checks pass. The EXE SHA256 is
`464c32673b04902e512f881680005a33418259c2edd0ae917d90dfbbb3078a71`.
Launch passes the filename conversion and first-read faults and reaches profile
text parsing through `sub_14015b070` and `sub_140236bf4`. The formatted-input
wrapper at `0x140236bf4` still constructs locale, input-adapter and processor
objects from separate C locals, then returns an uninitialized frame-cookie
expression. GDB catches its stack-cookie failure route. Recovery needs these
objects, the real scanner result from `0x1402338b8`, and native locale cleanup.
The menu remains unreached. Current launch/backtrace and the next instruction
queue are in `reports/client-link-file-open-20261002/`; the initial getc fault
is retained separately in `startup-before-getc.txt`.

## Narrow string-input scanner objects and return

`repair_client_scan_input.py` recovers the wrapper at `0x140236bf4` with a
32-byte locale object, 24-byte begin/end/current string adapter, and 144-byte
processor. The processor preserves both copies of the options, format pointer,
native zero-initialized fields and 32-byte workspace, the locale-pair pointer
at offset 120, arguments at 128 and assignment counter at 136. Padding that
the native constructor does not initialize is left for its consumers.

The wrapper validates input and format, computes the bounded string end,
calls the scanner with its real processor, clears the temporary locale flag,
and returns its zero-extended EAX. This replaces the uninitialized exported
frame-cookie expression; the compiler supplies normal stack protection.

**38,400 native comparisons pass** for input strings and byte limits, options,
signed scanner results, null pointers, provided/default locale and thread
flags. The controlled scanner boundary checks every initialized field and
writes through the first/last workspace bytes, current pointer and assignment
counter. Both implementations enable/check stack protection. Length, locale
and scanner callbacks are controlled boundaries; complete format parsing and
numeric conversion remain outside this wrapper fixture. Evidence:
`reports/client-scan-input-20261002/`.

The initial scanner build has zero errors or linker gaps, 2,650 warnings and
75 passing client tests. Launch passes the wrapper cookie failure and reaches
integer conversion. Its nested routine at `0x14022be60` has another split
locale object, which produces an invalid character-table pointer in
`0x140236ed8`. The same pass now gives this routine a contiguous 32-byte locale
object and uses explicit unsigned negation for the native 64-bit wrapping sign
conversion, including INT64_MIN.

**36,288 native integer conversion comparisons pass** using the original
conversion, range-check and character-classification routines. Fixtures cover
radices 0/2/8/10/16/36 and invalid bases, width limits, whitespace, prefixes,
signs, signed/unsigned limits and overflow, consumed counts, input cursor,
status, errno, and temporary locale cleanup. The character table contains the
original 257 words. Locale and invalid-argument handlers are controlled
boundaries. Evidence: `reports/client-scan-input-20261002/integer-stdout.txt`.
The initial nested-locale failure is retained in
`reports/client-link-scan-input-20261002/startup-before-integer-locale.txt`.

The combined scanner/integer build passes **76 client tests**, has zero
compiler errors and linker gaps, and retains 2,650 warnings. Its executable
SHA-256 is `7096d53788d1699f4800c2940208a1a82be957536e5b6496875ed77ec2581a7f`.
The next launch passes integer conversion and faults at an aligned SIMD
store in the world configuration default routine `0x1400ecd70`. The original
uses three MOVDQU stores at `0x1400ecda7`, `0x1400ecdbc` and `0x1400ecdcb`.
The menu remains unreached. Build and launch evidence is retained in
`reports/client-link-scan-input-20261002/`.

## World configuration unaligned defaults

The preparation pass now restores the three native MOVDQU stores in
`0x1400ecd70` with explicit unaligned 16-byte writes. It verifies the pinned
original instruction inventory and the exact three destinations before editing
generated source. The profile fixture now compares all seven repaired
profile/world stores with original load/store instructions at every destination
alignment: **112 byte-for-byte comparisons**, including untouched guard bytes.

The final build passes **76 client tests**, has zero compiler errors and linker
gaps, and retains **2,650 warnings**, four notes and 250 diagnostic families.
Native link and dependency verification pass; the original executable is
unchanged. The latest executable SHA-256 is
`5fb9bb9b9e46093ad2adf2e62605ed7110b235a952e7816e7c82ae06e1c9f302`.
Evidence: `reports/client-link-world-defaults-20261002/`,
`reports/client-object-world-defaults-20261002/` and
`reports/client-preparation-world-defaults-20261002.md`.

Launch passes the world default fault and reaches `0x1400ec7e0`, where an
aligned SIMD write to destination index 284022499 faults. The original at
`0x1400ec840` uses MOVDQU with constant `0x140278e10`. This next configuration
store remains unrepaired; the menu remains unreached. The launch, debugger
trace and native instruction evidence are retained in the latest link report.

## Versus configuration defaults and SDL startup boundary

The versus default store in `0x1400ec7e0` now uses an explicit unaligned
16-byte write matching original MOVDQU at `0x1400ec840`. The preparation pass
checks the original instruction and destination before applying the repair.
The native fixture now checks all eight repaired configuration copies at
every alignment, including neighboring guard bytes: **128 comparisons pass**.

All **76 client tests** pass. Compiler errors and unresolved/duplicate symbols
remain zero; warnings remain **2,650**, with four notes and 250 families.
Native link and dependency verification pass. Latest executable SHA-256:
`42819855bf149d8f50e53f9f5fa072517862cd866ac68560caed109fc5d74fa7`.
Evidence: `reports/client-link-versus-defaults-20261002/`,
`reports/client-object-versus-defaults-20261002/`,
`reports/client-preparation-versus-defaults-20261002.md` and
`reports/client-profile-stores-20261002/stdout.txt`.

The launch passes the versus store and reaches Steam/SDL startup. The debugger
reports a fault inside SDL with RCX=1, reached through `sub_140198ECF`, the
SDL_GetWindowSize thunk. Its recovered definition calls SDL_GetWindowSize
without arguments. Neighboring SDL_CreateWindow and SDL_GL_SetAttribute
thunks also drop arguments, so the window setup chain needs native ABI
recovery. This batch repairs the versus store only; it does not establish a
valid SDL window or a visible menu. See the latest debugger trace and original
startup call instructions in the link report.

## SDL startup window and context arguments

`repair_client_sdl_window.py` now restores 18 startup call sites: SDL_Init
flags `0x2231`, hidden cursor, eleven ordered GL attributes, both window
creation branches, fullscreen size output pointers, context creation and
the original conditional swap interval. Typed startup import aliases preserve
full 64-bit window/context handles. Other callers of the old SDL thunks remain
outside this repair. The original import targets and executable hash are
checked before editing generated source.

The fixture executes the original window/attribute/context instruction sequence
against controlled SDL boundaries. **1,296 comparisons pass**, covering
windowed/fullscreen flags, dimensions, depth/stencil, high-address handles,
size outputs, null window/context results, ordered calls and global storage.
It verifies creation result handling; real SDL error dialogs and the surrounding
CRT return paths are not covered by this fixture. Init/cursor/swap arguments
are recovered from native instructions but are outside that sequence fixture.

All **77 client tests** pass. Compiler errors and linker gaps remain zero;
warnings remain **2,650**, with four notes and 250 families. Native link and
dependency verification pass; the original executable remains unchanged.
Latest executable SHA-256:
`b6df4da56c903d551d8eb7618ac0cf307ebe8e21f3ad6aef6685cba760968485`.
Evidence: `reports/client-link-sdl-window-20261002/`,
`reports/client-object-sdl-window-20261002/`,
`reports/client-preparation-sdl-window-20261002.md` and
`reports/client-sdl-window-20261002/stdout.txt`.

The real launch now passes window and context creation and enters OpenGL
version parsing. The next fault is `sub_140256DC0+62`, dereferencing a null
multibyte-locale pointer through PTD offset `0x90` and `sub_140255D2C`. The
stack includes the scanner and GL version loader `0x140091880` / `0x1400a6700`.
The version scanner also has truncated output-pointer casts that need native
ABI review. The menu remains unreached. Debugger and native helper instructions
are retained in the latest link report.

## Default C locale descriptor, initializer and GL scanner pointers

The SDL batch's initial diagnosis named a multibyte-locale fault. Inspection
established that PTD offset `0x90` is the C locale descriptor: the neighboring
multibyte descriptor is at `0x88`. Both the PTD locale and global locale slot
were null because registered initializer `0x140247248` was skipped.

`repair_client_locale.py` restores this initializer before the API cache and
PTD startup stages, matching registration at `0x140289fb0`. It restores the
full **344-byte** default C locale descriptor at `0x140302420`, including its
scalar fields and **ten relocated pointers**, and **768 bytes** of native
lower/upper case maps with their signed-character prefixes. The C locale name
has its original four bytes. The existing recovered time object remains the
time pointer target. Nested locale-convention backing and other locale mutation
paths remain outside this repair.

The fixture compares descriptor bytes after pointer rebinding, both case maps,
the original native initializer, and **24 native locale getter/update cases**
with controlled PTD and update boundaries. The GL scanner's two output arguments
now retain all 64 address bits; a fixture checks destinations above 4 GiB.
The file startup dispatcher fixture now includes the global initializer before
the cache, locks, heap and PTD stages.

All **79 client tests** pass. There are zero compiler errors or linker gaps;
warnings decrease by three to **2,647**, with four notes and 250 families.
Native link and dependency verification pass, and the original executable is
unchanged. Latest executable SHA-256:
`8d35eb908c18f3c2345054706cf2966ec3e4740335f7843aa55507ea9cfc28da`.
Evidence: `reports/client-link-locale-20261002/`,
`reports/client-object-locale-20261002/`,
`reports/client-preparation-locale-20261002.md` and
`reports/client-locale-20261002/`.

Launch passes the null locale dereference and reaches the GL version loader's
exported cookie return. `0x140091880` passes an uninitialized `v21[3]` frame
value into `sub_1401F8B20`, entering the security-failure path and then faulting
in RtlCaptureContext. The original epilogue at `0x140091b74` reads its real
stack cookie and preserves EAX across the check. This return flow is the next
recovery target. The menu remains unreached; the latest debugger trace and
native GL version instructions are retained in the link report.

## OpenGL version loader return flow

`repair_client_gl_version.py` restores both native return paths in
`0x140091880`: zero when glGetString returns null, and the zero-extended
EAX major version after parsing. The original loader reads a real stack
cookie in its own frame; the exported C passed an uninitialized `v21[3]`
value to that checker and attempted to return its result. The recovered C
now returns its actual result directly and uses its compiled frame.

**384 comparisons** against the complete original native loader pass,
covering desktop and OpenGL ES prefixes, null strings, capability flags,
the effective-version clamp to 3.3, and the full return value for signed
boundary major/minor values. glGetString, string comparison and scanner
calls are controlled fixture boundaries. The native checker compares its
real cookie and preserves EAX/RAX; the fixture also compiles with GCC stack
protection. Capability storage width and malformed/partial scan input are
outside this fixture.

All **80 client tests** pass. Compiler errors and linker gaps remain zero;
warnings remain **2,647**, with four notes and 250 diagnostic families.
Native link and dependency verification pass. Latest executable SHA-256:
`457798955e0f7f76f6fe74fdbbab11d8ea3527318f8be3adef0b74ed9209c4c8`.
Evidence: `reports/client-link-gl-version-20261002/`,
`reports/client-object-gl-version-20261002/`,
`reports/client-preparation-gl-version-20261002.md` and
`reports/client-gl-version-20261002/stdout.txt`.

The launch passes the version loader's cookie fault and reaches extension
collection in `0x140091ba0`. The next fault is `sub_1401FC920+1519`, an
aligned MOVDQA load from an unaligned source during a 27-byte extension-name
copy. The original helper uses MOVUPS for its 17..32-byte path at
`0x1401fc960`. The copy helper's unaligned accesses and return flow are the
next recovery target. The menu remains unreached; debugger and original
copy instructions are retained in the latest link report.

## Unaligned copy helper and forward source/return registers

`repair_client_copy.py` restores **35 SIMD loads**, **31 SIMD stores** and
eight streaming-store destination addresses in `0x1401fc920`. Unaligned
intrinsics and 16-byte bit-copy helpers preserve the original bytes without
requiring aligned buffers. The scalar, overlap, alignment, threshold and
streaming algorithm remains in the recovered C. Pointer ordering and source
offset arithmetic use full-width integer addresses.

The forward REP fallback at `0x1401fc900` previously copied from an undefined
local and returned another undefined local. Its recovered forward byte loop
uses the source derived from the caller's full-width offset and returns the
destination, matching native R10/R11 flow. It preserves forward overlap behavior;
it does not reproduce REP instruction timing.

**174,530 native comparisons pass**, covering sizes through 4,096 bytes,
all independent source/destination alignments in the 16..32-byte path,
both overlap directions, equal pointers, CPU dispatch flag 0/2, thresholds
0/1/32, streaming stores, zero-length null buffers, protected page ends and
the full destination return. Whole-buffer comparisons include surrounding
bytes and an independent memmove reference. The fixture executes original
copy code and its actual small-copy jump table.

All **81 client tests** pass. Compiler errors and linker gaps remain zero;
warnings remain **2,647**, with four notes and 250 diagnostic families.
Native link and dependency verification pass. Latest executable SHA-256:
`be5027a22ce72a059e33bdd36693d5898bc54045a33d83bc94ee02164b06c6eb`.
Evidence: `reports/client-link-copy-20261002/`,
`reports/client-object-copy-20261002/`,
`reports/client-preparation-copy-20261002.md` and
`reports/client-copy-20261002/stdout.txt`.

The launch passes the copy alignment fault. Extension collection then reaches
freeing its strings, where Windows heap validation reports a block requested
for one byte that was modified beyond its allocation. The extension loader
passes the string length to `j__malloc_base`, but that recovered thunk has no
parameters and calls `malloc_base()` without the size. The native at
`0x14023acf8` tail-jumps to `0x140253f60`, preserving RCX. This dropped allocation
argument is the next recovery target. The menu remains unreached; debugger
heap warnings and original thunk instructions are retained in the link report.

## Time object, DName vtable and additional shared tails

The C locale time object at `0x14028b0e0` is now declared as its complete
**704-byte** storage. It contains **87 relocated string pointers** and the
original packed calendar/refcount words. Its **876-byte** ASCII/UTF-16 backing
at `0x14028b3a0` remains contiguous with the structure. Seven full weekday
spellings point into the earlier shared read-only byte window; their seven
new aliases preserve the original storage identity instead of duplicating
the strings. The fixture verifies every slot, backing byte, scalar, alignment
and the 704-byte displacement between the object and its local strings.
Complete time formatting and locale mutation remain unverified.

The missing vtable at `0x140284768` binds four recovered functions: two
32-bit reads at object offset 12, a status-dependent final character, and
bounded copying of the four-byte ` ?? ` spelling. **32,768 function
comparisons** against original instructions pass, including unaligned objects,
status values, output boundaries and zero/full/truncated copy capacities.
Copy comparisons cover valid nonnegative capacities; invalid pointer ranges
and the enclosing demangler remain unverified.

The vtable's preceding RTTI pointer also has a real binding. Its closed graph
contains nine objects: the complete-object locator, two type descriptors,
two class hierarchies, two base arrays and two base descriptors. Relative
image offsets use IMAGE_REL_AMD64_ADDR32NB relocations, and the type descriptors
retain writable cache fields and the original type_info vtable binding.
The fixture verifies all nine objects, relocated fields, alignments and writable
cache storage. It uses an address anchor for that existing type_info vtable;
its methods and complete C++ dynamic-cast behavior are not executed by this
storage fixture.

The ASCII comparison tail at `0x140265434` preserves byte folding, bounded
iteration and the original raw EAX return, including zero extension through
the inferred 64-bit wrapper. **73,729 native comparisons** cover every possible
byte pair, generated bounded strings and null pointers with a zero count.
The surrounding locale and invalid-input branches remain unverified.

The DLL exception-filter tail at `0x140245018` forwards only exception code
`0xe06d7363` to the existing CRT filter. Its return declaration now reflects
the native EAX result. The instruction bytes and forwarding target are
checked; complete exception handling remains unverified. These two repairs
left **four JUMPOUT sites**, subsequently recovered as assembly in the final pass.

Evidence for that earlier milestone is under `reports/client-object-time-dname-20261001/` and
`reports/client-link-time-dname-20261001/`. All **53 client tooling/helper
tests**, the dependency fixture and four selected native suites pass.
That link failed on **14 symbols**: `JUMPOUT` and thirteen register
placeholders. Its initial register inventory recorded twelve math
functions plus three already scoped CPU functions; the final pass also
identified two bounded string routines through the `_EAX` alias. No rebuilt client was
executed, and warning cleanup has not begun.

## Linker continuation: codec storage and remaining helpers

Four exported CRT thunks now call the local bodies at their original rel32
targets: narrow/wide wildcard expansion, wide environment mutation, and
unlocked 64-bit file seek. Every native jump and its padding is checked against
the pinned binary. The bodies' complete CRT behavior remains unverified.
The nine exported `memset64` calls correspond to REP STOSQ. Their helper fills
64-bit words using the native instruction; 4,096 cases check full-width values,
word counts, unaligned destinations, untouched boundaries and single evaluation.

Codec tables now occupy two shared read-only windows totaling **36,708 bytes**
at `0x140279bb4..0x140279bc0` and `0x140279c00..0x140282b58`. The preparation
pass replaces 129 standalone definitions with external declarations. A linked
storage object defines **139 aliases** and **73 internal x64 pointer relocations**.
This restores table interiors and indexed pointer tables, including ten missing
symbols. The dependency fixture independently compares every byte after
relocation and checks all alias offsets and alignments. The constant generator
excludes these aliases so each original object has one shared backing.
Complete codec decoding behavior still requires comparison with the client.

The fmod fallback at `0x140240b80..0x140240bbc` now keeps FFREE, both FLD
inputs, FNCLEX, repeated FPREM, the C2 status test and both FSTP operations
together. The exported uninitialized status local and per-iteration C double
rounding are removed. **49,152 comparisons** against the original instruction
bytes verify output bits and x87 status across four rounding modes and three
precision settings, including zeros, extreme exponents, infinities and NaNs.
The enclosing fmod SSE computation and error paths remain unverified.

63 exported JUMPOUT destinations are native INT3 instructions and now retain
those traps. Two SDL tail calls restore the semaphore pointer and zero
joystick-event argument; a chained free thunk calls its existing local body.
Six unresolved JUMPOUT sites remain, spanning shared game/CRT control flow.

The preceding reports are `reports/client-object-codec-fprem-20261001/` and
`reports/client-link-codec-fprem-20261001/`. All **51 client tooling/helper
tests**, the dependency fixture and four selected native suites pass.
That milestone's **16 linker symbols** were `JUMPOUT`, `off_140284768`,
`unk_14028B3A0`, and thirteen register placeholders. No client executable
has linked or launched. Warning cleanup has not begun.

## Final coercions, double-angle preparation and scalar square root

All seven remaining narrow double coercions are resolved. Three inputs now
retain their float words in explicit containers: the original callees consume
XMM2 through CVTSS2SD at `0x1400821d3` and `0x14008925c`. Four constant
coercions belonged to phantom input registers or overwritten scratch locals;
their unused arguments are now explicit zero values. The checked production
`COERCE_DOUBLE` macro rejects widening and compiles throughout the client.
The float-word call inventory is now **199** sites.

The double-angle dispatcher at `0x1401f8a50` preserves COMISD/JB unordered
routing and the packed small-angle calculation. **65,536 comparisons** match
all sixteen output bytes and MXCSR with the original instructions across
rounding modes, FTZ/DAZ, signed zero, denormals, threshold edges and NaNs.
Its two packed polynomial callees now receive a complete 128-bit input;
the previous double declaration discarded the second lane and exposed an
out-of-bounds sixteen-byte read. Complete large-angle polynomial and range
reduction accuracy still require native comparison.

All **562** exported `fsqrt` calls in **180** functions correspond to scalar
SQRTSS instructions. The helper now returns a float using that instruction.
An independent audit checks the original and prepared call counts against
the hash-pinned binary and records every instruction address. Another
**65,536 comparisons** verify result bits and MXCSR, including negative
inputs, infinities, NaNs and denormals. This verifies the helper operation;
complete surrounding functions remain unverified.

These changes remove `COERCE_DOUBLE` and `fsqrt` from the linker queue.
The current compiler, linker, dependency and square-root inventory reports
are under `reports/client-object-coercion-sqrt-20261001/`,
`reports/client-link-coercion-sqrt-20261001/` and
`reports/client-sqrt-recovery-20261001/`.

The user-supplied Ghidra screenshots also match the pinned binary's six
import modules and entry point. A fresh independent PE audit verifies all
203 imported names and IAT addresses against the existing inventory, after
normalizing IDA's `__imp_` decoration on the 22 Winsock symbols. Module counts
are SDL2 65, USER32 1, SHELL32 3, WSOCK32 22, steam_api64 10 and KERNEL32 102;
there are no delay-import descriptors. Entry `0x1401f9460` calls
`0x1401fc2a4` and tail-jumps to `0x1401f9284`, exactly as pictured.
The report is `reports/client-import-check-20261001/verification.json`;
rerun with `python scripts/audit_client_imports.py`. Installed SDL/Steam
exports and their DLL hashes are checked by the dependency gate. Import
matching alone does not validate API argument layouts or complete startup.

## Additional CRT storage, angle ABI and startup repairs

The latest pass restores 24 terminated UTF-16 strings (1,144 bytes), including
Windows API-set/module names, two language spellings, an empty locale string,
and the two writable decimal-point strings. IDA item names and xrefs were read
from an isolated database; the checked manifest records addresses, widths and
byte hashes. Each generated string preserves native section protection and
alignment. The fixture compares bytes independently with the pinned EXE.

The floating-point formatting table at `0x14028b000` was exported as one
pointer despite indexed access to sixteen slots. It is now a declared array
backed by sixteen symbolic x64 relocations. Four uses now index the array with
the correct eight-byte stride. Shared spellings occupy the original 73-byte
backing at `0x14028b080`. Every slot, spelling, shared target and alignment is
checked in the linked fixture. This verifies storage; complete CRT formatting
still depends on other recovered code and tables.

135 third-argument bit casts into `0x1400054f0`, `0x14007b2a0`, and
`0x14012bd30` now preserve the original float word. Native evidence is
CVTSS2SD from XMM15 at `0x1400055bf` after the XMM2 copy, and MOVSS from
XMM2 at `0x14007b2ba` and `0x14012bd4a`. The exported double declarations
are retained as explicit bit containers for their reused locals; the helper
copies the reviewed low word into that container without numeric promotion.
A native XMM2/MOVD fixture checks 4,096 patterns and single evaluation.
This does not validate every other angle expression or inferred caller local.

The preparation part of `0x1401f8ac0` now constructs its SIMD lanes explicitly,
avoiding the exported 16-byte read from an eight-byte local. COMISS/JB routes
unordered inputs down the original small-angle path. The small-angle output,
all four lanes, and MXCSR match the original instructions over **65,536 cases**
covering four rounding modes, FTZ/DAZ combinations, signed zero, denormals,
threshold-adjacent values and quiet/signaling NaNs. The large-angle preparation
still dispatches to the existing packed math functions, whose complete
register ABI and accuracy remain unverified.

Startup `0x1401f9284` now supplies the TLS callback's omitted third null
argument. The original setup is XOR R8D at `0x1401f9335`, EDX=2 at
`0x1401f9338`, and XOR ECX at `0x1401f933c`. This is an instruction-grounded
boundary repair, not a full startup execution check. The following pass restores those initializer windows, as described below.

## Startup initializer and guard continuation

Both original initializer ranges now share one 96-byte read-only allocation
at the recovered aliases `unk_14026E6B0`, `unk_14026E6C8`, `First`, and `Last`.
The C++ range contains a null slot and two callbacks; the C range contains a
null slot and six callbacks. Eight non-null entries use symbolic x64 function
relocations, preserving order and the original sentinel addresses. The linked
fixture checks all twelve slots and the four alias offsets. It uses address
anchors to inspect these relocations and **does not run the application/CRT
initializer functions**.

The previously absent entry `0x1402370d4` initializes timezone, daylight and
DST-bias words to `0x7080`, `1`, and `0xfffff1f0`, followed by the relocated
name-table pointer and an EAX=0 return. Its adapter writes the original global
slots. The name table points to two writable 64-byte buffers initially holding
`PST` and `PDT`. Their 128 bytes, two pointer targets, offsets, alignment and
shared writability are checked. This preserves the pinned client's initial
state; later timezone updates still require integration verification.

The missing initializer passes **4,096 direct original-code comparisons**,
including randomized initial memory, untouched padding and adjacent bytes.
The startup thunk at `0x1401fc140` jumps to the original XOR EAX,EAX;RET entry
at `0x1401fc1b0`; another **4,096 comparisons** verify its zero return.
Initializer `0x1401f918c` now captures that return and declares its actual int
result. Its exported out-of-bounds JUMPOUT is replaced with the native INT3
failure boundary. The unrelated inferred receiver of a constant-return helper
is replaced with a null value. The complete configuration/failure path is
still unverified.

The indirect-call guard at `0x14026cf90` is the native two-byte JMP RAX. A naked
implementation and export alias preserve that register contract; the linker
checks both symbols have the same object address. **4,096 native comparisons**
verify full-width RCX/RDX/R8/R9 arguments and returned RAX through the jump.
This removes one genuine linker gap without a no-op call replacement.

61 additional UI-coordinate, size and angle bit casts now use reviewed float
word containers. Evidence includes ADDSS/SUBSS at `0x14006d06b` and
`0x14006d085`, CVTSS2SD at `0x140081e4b` and `0x14018c76c`, and MOVSS at
`0x14007b4e6`, `0x140066ee8`, `0x1400555d0`, and `0x140054760`. There are now
196 repaired boundary casts at that milestone. Native XMM0/XMM1/XMM2 register-move fixtures
check their bit preservation. These repairs do not establish the correctness
of other inferred coordinates, widths, stack locals, GL calls or rendering.
The strict widening probe then fell from 59 to seven remaining failures;
the continuation above resolves those seven sites.

## Storage aliases and shader addresses

All 112 formerly unresolved `sr_mem_...` names have been accounted for:

| Disposition | Count | Evidence |
| --- | ---: | --- |
| Byte-comparison aliases in read-only storage | 79 | Exact 38,512-byte window at `0x14026e908..0x140277f78`, no PE relocations |
| Shader source aliases in writable storage | 29 | Two windows of 46,656 and 538 bytes; original LEA references |
| Pointer-containing initialized objects | 2 | Original initializer bytes and symbolic x64 address relocations |
| Incorrect PE-header aliases removed from startup helper | 2 | Original word/dword header accesses recovered in a clean implementation |

The byte windows preserve original address differences and alignment modulo
16. They are emitted in read-only or writable sections matching the original.
The generator rejects unbacked ranges, executable storage, protection changes,
and base relocations in the byte windows. The dependency fixture independently
compares **108 aliases and 85,706 bytes** with the pinned file, checks offsets
and alignment, and verifies shared writable shader storage.

The shader calls had another defect beyond unresolved names. Preparation
turned `MEMORY[VA]` into an eight-byte load, even when the original instruction
was LEA. That passed the first eight source-text characters as an integer
instead of a source pointer. All 27 source operands in `0x14014b2a0` are
confirmed LEA, as are two operands at `0x140077752` and `0x14007775e` in
`0x140077710`. Those 29 expressions now pass addresses. The original bytes
were not changed. Complete shader compilation and rendering are still separate
verification work.

Two writable objects contain relocated pointers:

- `0x1403022a0` initially points to `0x14028bd14`. Its recovered initializer
  is a symbolic pointer to the existing recovered `wctype` array plus four
  bytes. The original use at `0x140249945` is a QWORD MOV, so the pointer load
  is retained.
- `0x140302de0` contains a pointer to the existing `off_140283488` vtable
  followed by eight zero bytes. The original use at `0x1401fd35f` is LEA,
  passing the object's address. The full 16-byte initializer is restored.

Both pointer objects preserve alignment and use `IMAGE_REL_AMD64_ADDR64`
relocations to the real recovered symbols. Their original bytes and COFF
relocations are recorded. They are not included in the byte-window runtime
fixture: live class behavior and complete locale/exception initialization
remain unverified. No original numerical pointer was copied as a replacement
process address.

## CPU register ABI and runtime dispatch

The exported CPU detection code used external globals named `_RAX`, `_RBX`,
`_RCX`, and `_RDX` as scratch registers. Original XOR ECX setup was also absent
from the pseudocode. Reusing CPUID's ECX output as a later subleaf or XGETBV
index can query the wrong leaf or fault.

Three remaining larger entries now use local scratch variables and explicit
ECX=0 before their six CPUID calls and one XGETBV call:

- Application entry `0x140001330`.
- Dispatch installer `0x14016dfd0`.
- CRT CPU initializer `0x1401f8b64`, including leaf 7, subleaf 0, and XCR0.

Four smaller CPU entries use reviewed clean implementations in
`src/recovered/client_leaf.c`:

- `0x140068f80`: SSE4.1 probe. The original tests leaf 1's EAX before querying
  leaf 1 again; that unusual behavior is preserved.
- `0x14015e240`: returns leaf 1's EDX bits.
- `0x14016e150`: returns EDX bit 26.
- `0x14025c460`: initializes both math-runtime feature words. The missing
  branch now sets the words when CPUID ECX matches `0x18001000` and XCR0's
  low bits include both bits 1 and 2. XGETBV is executed only after the original
  CPU/OS checks and uses ECX=0. The initial primary-word zero store, secondary
  store, and zero return are retained.

Original executable bytes are copied into the isolated, hash-checked native
fixture with their relative addressing intact. For the math initializer,
both original destination words are committed and compared with recovered
outputs after randomized initial state. The four CPU entries and the startup
entry below pass **20,480 direct comparisons**, plus 24 PE boundary checks.
These CPU comparisons cover the current host. They do not prove every CPU/OS
dispatch branch or the behavior of the larger startup/dispatch callers.

Thirteen pseudo-register symbols remain in the link queue. They belong to
other incomplete math/assembly behavior. No zero-valued global substitutes
were added for them. The 190 basic assembly wrappers still need actual
operand, clobber, frame and calling-convention recovery.

## Startup PE-section inspection

`0x1401f8ff8` checks whether an address lies in a non-writable section of
the current image. The export incorrectly read the DOS signature and PE
header offset as QWORDs and performed arithmetic from a fixed image address.

The clean implementation follows the original instructions:

- WORD DOS signature `0x5a4d`.
- Signed DWORD `e_lfanew`.
- DWORD PE signature `0x4550` and WORD PE32+ magic `0x20b`.
- WORD optional-header length and section count.
- 40-byte section records, original DWORD RVA/end arithmetic, and the section
  write flag.

The adapter supplies the current executable's module base rather than the
reference process address. The original fixture receives the pinned headers
at its own mapped base, so RIP-relative header accesses remain valid. Random
address queries and every section's start/end neighbors match the original.

This recovers one startup guard. It does not complete CRT/TLS construction,
security-cookie initialization, exception unwinding, command-line conversion,
shutdown, or the original PE entry at `0x1401f9460`. The link probe's existing
MinGW startup and WinMain name binding remain experimental.

## Ambiguous coercions

Three float inputs previously reached eight-byte bit coercions without their
original numeric conversion:

- `0x14023f704`: CVTSS2SD at `0x14023f737` and `0x14023f745` promotes both
  inputs before the exponent-bit extraction at `0x14023f771..0x14023f783`.
- `0x14025c2f8`: the float saved in XMM6 is promoted by CVTPS2PD at
  `0x14025c3d0` and stored as a double argument at `0x14025c3dc` before the
  math-error call.

Those three expressions now perform the float-to-double conversion before
copying the eight result bytes. The checked C macros for signed/unsigned
64-bit coercions are enabled; they still reject a source smaller than the
destination. A 4,096-pattern fixture compares promotion bits and MXCSR with
native CVTSS2SD, including the generated NaN and subnormal inputs.

The earlier strict double bit-copy probe recorded seven narrow-source failures,
down from 149 through 59, in
`reports/client-coercion-startup-20260930/probe.json`. Those seven sites are
now repaired as described above. The production macro uses the same checked
bit-copy rule, and the full object compiles without widening failures.

## Verification and remaining work

All 57 client tooling/helper tests and four selected native comparison suites pass.
Math and string fixtures add 245,760 and 49,152 comparisons. The dependency fixture verifies five
SDL import-slot checks and 4,096 SDL memory comparisons.

Reproduce the final gates:

```powershell
python scripts/prepare_rebuild.py --binary client
python scripts/check-rebuild.py --binary client --prepared --lenient --object --output reports/client-object-pointer-memory-20261002
python scripts/link_client.py --object-report reports/client-object-pointer-memory-20261002/client-prepared.json --output reports/client-link-pointer-memory-20261002
python scripts/verify_client_native_link.py --directory reports/client-link-pointer-memory-20261002
python scripts/verify_client_dependencies.py --report reports/client-link-pointer-memory-20261002/dependencies.json
python scripts/audit_client_sqrt.py
```

The final link report exits successfully with an empty recovery queue.
All 21 previously unresolved named strings
are now bound to checked data. Reports retain the recovery
queue, initializer bytes, pointer relocations, source/object hashes, command
lines and fixture outcomes. Preparation counters record every scoped repair
class and are included in the updated preparation audit.

A previous broader discovery run also included unrelated server preparation tests:
68 of 70 passed; two fail because their fixture reports omit `data_objects`.
The current targeted 57-test client gate passes. Server fixtures were not changed
in this client recovery pass.

## File enumeration recovery, 2026-10-02

The find-first path now uses native 32-byte locale, 48-byte conversion and 560-byte wide metadata objects. It forwards the selected code page and returns the full search handle or -1; the wide metadata wrapper has a contiguous WIN32_FIND_DATAW object. FILETIME conversion returns the original epoch result or -1. The dynamic wide-to-narrow converter uses the recovered allocator ABI. Native fixtures pass 768 find-first wrapper cases, 320 metadata/time cases and 48 complete name-conversion cases, including allocation failure and Unicode names. API/time boundaries are controlled where stated. The find-files build has zero errors, 2,604 warnings and zero linker gaps. It reaches timezone initialization, exposing an omitted registered initializer in the replacement startup path. The next pass restores that initializer; complete menu and gameplay remain unverified.

## Time-zone and epoch recovery, 2026-10-02

The replacement client entry now calls the original registered time-zone initializer after stream initialization. The native dispatcher fixture checks seven startup/failure routes. Time-zone setup has a void return (both native consumers discard RAX), and optional TZ environment allocation uses the recovered allocator ABI. Local-time-to-epoch conversion restores arithmetic omitted by the export, native 1970..3001 limits, signed time-zone/DST biases and explicit/automatic DST selection. It passes 59,136 full native comparisons with controlled leap/time-zone/DST boundaries. All 115 tests pass for this source stage. A launch passes time-zone setup and timestamps and reaches the paired find-next wrapper. A further pass restores its 32-byte locale object and zero/-1 EAX statuses, plus FindClose's lost 64-bit handle argument. The paired native fixture passes 704 cases; a full prepared build including that last pass is pending.

## Sorter and generation epilogues, 2026-10-02

The fully prepared enumeration build compiles with zero errors, 2,604 warnings and zero linker gaps. It completes find-first, timestamp conversion, find-next and search-handle close, then reaches the item-set sorter. Four comparator calls lose fabricated extra arguments, and its two cookie exits become void. The entire original sorter passes 74,308 output, duplicate ordering, callback ordering, alignment and invalid-input comparisons. Native RAX is unused by all exported consumers and is excluded from this fixture. Time-zone environment setup also passes 512 native dispatch/allocation/cleanup comparisons. The generation pass additionally validates both original caller blocks and restores its void epilogue; neither caller reads RAX before its next call. The new prepared build and startup run are pending.

## Item-set loader, 2026-10-02

The sorter build compiles with zero errors, 2,604 warnings and zero linker gaps; all 118 client tests pass. Its launch passes enumeration and sorting and reaches the item-set content loader. That loader has one original caller, which discards RAX. The recovered void epilogue passes 3,840 complete native comparisons covering read destination offsets/sizes/order, 3,792-byte set records, 116-byte entry records, type-name resolution, file-open failure, directory results, closure and guard bytes with controlled file/directory boundaries. The prepared loader build has zero errors, 2,604 warnings and no linker gaps. Startup passes the loader and reaches mesh generation.


## Mesh storage and index object, 2026-10-02

Four fixed preferred-base mesh cursors now address relocated shared storage, including the paired mesh builder. The two shape calls receive a contiguous 12-byte position; the mesh builder has its original void epilogues. These changes pass 4,352 native cursor/stride/high-pointer and shape-call comparisons; all 120 client tests pass. The resulting build has zero errors, 2,604 warnings and zero linker gaps. Startup reaches mesh normal generation but encounters an invalid triangle vertex index. A subsequent diagnostic also catches the mesh helper reading outside its index input.

The original caller writes two adjacent 16-byte vectors at RBP-0x80 and RBP-0x70, then passes their address as one eight-index object. Recovery now preserves those indices in one 32-byte array. The extended fixture passes 4,608 native comparisons. The rebuilt client passes mesh generation and reaches the CMO model loader. This fixture covers the caller object; complete mesh behavior and usable menu startup remain unverified.


## CMO model loader and procedural shapes, 2026-10-02

The model loader uses its actual 64-byte filename array for both append scans; recovered C previously derived the cursors from an unrelated local array. Its two epilogues are void. All 40 original caller blocks are checked for unused RAX before their next call. The complete original loader passes 960 filename, empty/populated model, triangle/quad, invalid-magic, version, read-order, close and final-helper comparisons. File and final-helper boundaries are controlled. All 121 client tests pass. The model-loader build has zero errors, 2,604 warnings and no linker gaps; its native linked instructions/fixups/readonly windows/unwind entries and preparation source hash are audited. Startup passes model loading and reaches the procedural shape builder.

The procedural builder's position (12 bytes) and matrix (36 bytes) are recovered as contiguous arrays. Both original callers discard RAX, and its void epilogue is restored. Its complete native fixture passes 512 position/matrix, rotation/shape argument, face-clear and final-helper comparisons with controlled construction and rotation helpers. The production launch passes both repaired procedural calls, reaches and then passes the quad builder after its own repair. The extended fixture passes 768 comparisons across both builders, including quad triangulation and copied face attributes. The quad-builder build passes all 122 client tests, compiles with zero errors and 2,604 warnings, links without unresolved symbols and passes linked-native, SDL dependency and preparation audits. Neither a usable menu nor full gameplay fidelity is established.


## Quad extrusion, 2026-10-02

The quad-builder launch reaches the extrusion helper through the generated-shape initializer. Its only two native consumers overwrite RAX after the call; recovery restores its void epilogue and makes both caller translation vectors contiguous 12-byte objects. The complete native extrusion routine passes 24,576 vertex, translation, connectivity, count, alignment and rounding-mode comparisons. These compare all written vertex and quad records, without a controlled geometry helper boundary. The production extrusion build passes all 123 client tests and its linked-native and preparation audits, with zero errors, 2,604 warnings and zero linker gaps. Startup passes extrusion and reaches the layered builder; the full caller routines are not established by this helper fixture.


## Layered and branching models, 2026-10-02

The layered builder restores one contiguous position, one contiguous matrix and its native void epilogue. The extended full-native dispatcher fixture passes 1,024 comparisons across procedural, quad and layered builders, including each layer's shape arguments and face attributes. Construction and rotation helpers remain controlled boundaries. Its production launch passes layered construction and reaches the branching builder; all 123 client tests and linked-native/preparation audits pass.

The branching builder restores two positions, a three-float rotation axis and two nine-word matrices. Its sole original caller discards RAX, so the cookie epilogue is void. The extended native fixture passes 1,280 comparisons across all four builders, including matrix copies, updated positions and rotation-axis propagation. The branching production build passes all 123 client tests, linked-native, SDL dependency and preparation audits, with zero errors, 2,604 warnings and no linker gaps. Startup passes branching construction and reaches a model copy that reads through a null UV pointer. Full constructor internals, menu interaction and gameplay fidelity remain unverified.


## ITM header corruption, 2026-10-02

A debugger watchpoint establishes that item 9 never receives a nonzero vertex count, while it receives a populated face list. The original uzi.itm has 973 vertices. Inspection of the rebuilt item reader shows its four-byte header read writing into a one-byte local immediately before the saved item index: the three extra bytes zero the low three bytes of that index. Vertex cache reads then target item zero; later code restores the intended item index and stores faces there. The header is now a native four-byte object.

The complete original ITM loader passes 1,728 comparisons covering 16 target item identities, header words, read order, allocations, vertex/UV buffers, triangles/quads, markers, all 16 item records and guard memory. File and allocator boundaries are controlled; the unused native return is excluded. The production header build and launch are pending.
### Render setup cookie artifact (2026-10-02)

The client render setup routine at `0x14009C680` had a decompiler-generated return through `sub_1401F8B20` using an uninitialized local (`v56`). That made every normal render frame enter the fatal stack-cookie handler. The preparation pipeline now removes only this synthetic return; the native stack-cookie helper remains intact for actual corruption paths. The rebuilt client passes compilation, links with zero unresolved symbols, and reaches the renderer before the next GPU-side fault.

### PNG and immediate geometry recovery (2026-10-03)

The earlier experimental GL zero-fill, generic attribute defaults and image-context rejection guards were removed from preparation. Native immediate geometry functions at `0x14006E0D0` and `0x14006E2D0` use a nine-float vertex stride, offsets 0/12/20, and a null index-buffer offset. Those arguments are recovered explicitly for these two functions. Existing unrelated six-argument attribute calls retain their original recovered arguments.

The PNG filter at `0x14015E5F0` writes valid output addresses that may be unaligned. Eight typed SIMD assignments incorrectly became aligned stores; the original uses MOVDQU. Preparation now emits 16-byte memcpy stores, preserving the computed values and unaligned-address semantics. The complete native filter fixture passes 1,300 output comparisons across widths 17..81, one to four channels, five filters and four-row images. This fixture establishes those 8-bit filter cases, not every PNG format.

The PNG-restored production build has zero compiler errors, 2,604 warnings and no unresolved or duplicate symbols. Its debugger launch passes the previous PNG and GPU faults and reaches the atlas function `0x14009B1A0`. That function's exported cookie local is never initialized. Native prologue/epilogue bytes show the saved compiler cookie, and the sole native caller at `0x14013BBFF` discards RAX. Preparation restores its void signature and return, with pinned assembly checks. Verification of the atlas production build and its next startup boundary is pending. A usable menu and full gameplay fidelity are still unverified.

### Texture, WAV loading and integer locale recovery (2026-10-03)

The atlas production build passes startup's atlas return. The next texture packer
at 0x140068FC0 had cookie artifacts hiding its native EAX result. Its successful
exit returns the prior slot count; failure returns 0xFFFFFFFF. Restoring those
values passes 390 complete native packing/record/pixel/upload comparisons, with
image decoding and GL boundaries controlled. Cases that read uninitialized
native scratch beyond the atlas width are excluded.

WAV loading at 0x1400EE400 lost SDL_RWFromFile, SDL_LoadWAV_RW and SDL_FreeWAV
arguments. Recovery restores path, stream ownership, output length/buffer and a
contiguous 32-byte AudioSpec. The complete native loader passes 1,700 conversion,
record, allocation and ownership comparisons with SDL and directory boundaries
controlled. Its production launch remains blocked earlier in filename formatting.

The integer scanner at 0x14023B240 splits its native 32-byte LocaleUpdate object
into unrelated locals. Its constructor overwrites adjacent stack data, producing
a bogus character-classification pointer. The repair restores object storage,
pair offset 8 and cleanup flag offset 24. It passes 11,264 native integer-value,
overflow, end-pointer, errno and locale-cleanup comparisons with constructor and
classifier boundaries controlled. The C-only production launch now passes this
scanner and the WAV loader.

Rust work was paused at the user's request; the C pipeline remains the active
recovery target. Sandium's address, structure and ABI references are indexed in
reports/sandium-reference/client-addresses.json, with limitations and concrete
native cross-checks in docs/sandium-recovery-notes.md. A usable menu and full
gameplay fidelity remain unverified.

### Procedural audio and SBB startup recovery (2026-10-03)

The procedural sound generator at 0x140065AE0 had four aligned C SIMD stores
where the original uses MOVDQU. Restoring unaligned stores exposed a second
accuracy issue: four MULSS coefficients were translated as double constants.
Their exact float literals are now restored at 158 uses. The complete generator
passes 152 native output, guard, PCM-registration and alignment comparisons for
dial/ring IDs, no-op IDs and two reference distances, with sine and registration
boundaries controlled. The production client passes procedural audio startup.

That C build has zero compiler errors, 2,604 warnings and zero unresolved or
duplicate symbols. All 131 tests pass. Native-link verification checks 7,913
instructions, 1,346 relative fixups, 68 readonly windows and 47 unwind entries;
the dependency fixture passes 4,096 SDL memory comparisons. The preparation
audit records 7,157 edit records and 26,611 counter events.

The next debugger failure is the SBB loader at 0x140026830. Both recovered exits
incorrectly pass an uninitialized local to the compiler's cookie helper. Native
epilogue bytes and all five direct native callers establish unused results.
Its void signature and exits are restored without changing the cookie helper.
The complete loader passes 360 full-destination, header, name-table, tile,
waypoint, file-position and finalizer-dispatch comparisons with file/finalizer
boundaries controlled. Its production build passes the SBB loader, retains zero
errors/2,604 warnings/no linker gaps, and passes all 132 tests. Startup then
reaches the building catalog routine at 0x14013CDF0.

The catalog's native file-enumeration output begins at rsp+0x30, with its filename
at rsp+0x54. The export splits a 296-byte find-data object into a 36-byte array
and a one-byte local, allowing writes into unrelated C locals. Recovery restores
one aligned object, accesses the filename at offset 36 and restores the void
exit established by both native callers. The full catalog passes 128 native
comparisons covering directory filtering, sorting, short/long filenames, header
metadata, template matching, chdir results and all committed data-page guards.
Enumeration, sorting, loader and directory boundaries are controlled. Its
production launch now passes catalog initialization and reaches the master HTTP
connection routine. All 133 tests pass; compilation retains zero errors and
2,604 warnings, with no unresolved or duplicate linker symbols. Native-link and
SDL dependency verification also pass. The preparation audit includes 26,615
counter events.

### Master HTTP exchange recovery (2026-10-03)

At 0x1400A3F30, Sandium supplies the ConnectMasterServer name but an inaccurate
void signature. Native EAX returns zero on failure (0xA41DA) and one after the
IP/port/server-list parse (0xA43FB); vanilla callers use it to select a fallback
master address. The recovered C function restores these results, one 16-byte
sockaddr object, a 520-byte unaligned fd_set copy and full-width scanner output
pointers. The native Winsock service lookup arguments were already intact.

The complete function passes 144 native HTTP/retry/socket/DNS/service/IP/port/
server-list/result/guard comparisons with Winsock, delay, formatter and scanner
boundaries controlled. Paths depending on the native pre-retry uninitialized
stack counter are excluded. Production launch now passes master HTTP/fallback
handling and reaches Steam context initialization. The build has zero compiler
errors, 2,602 warnings, no linker gaps and all 134 tests passing. This fixture
does not establish Internet service availability or UDP multiplayer parity.

### Steam context storage (2026-10-03)

The next production failure calls address 0x1 inside SteamInternal_ContextInit,
while obtaining the Steam friends interface in 0x140198AF0. The five caches at
RVAs 0x301E10/28/40/58/70 were exported as single eight-byte function pointers.
Each native cache occupies 24 bytes: callback at zero, generation counter at
eight and interface pointer at sixteen. Steam wrote cache state across adjacent
exported callback pointers, explaining the invalid 0x1 target.

Preparation restores five complete caches and asserts their size/offsets.
The original five callbacks and cache objects pass 1,920 comparisons against
the C callbacks/caches using the actual bundled SteamInternal_ContextInit API.
The fixture covers all 32 populated-interface masks, four counter values,
forward/reverse/repeated requests, callback results and all five neighboring
cache states. User-handle and interface-factory boundaries are controlled.
The production build passes Steam context initialization and reaches friend
enumeration. All 135 tests pass, with zero compiler errors, 2,602 warnings and
no unresolved or duplicate symbols. Full Steam friends/networking behavior is
not established by this cache fixture.

### Steam friend output relocation (2026-10-03)

The next crash at 0x140198820 writes a friend ID to absolute address
0x1829F8FE0. Three exported call sites retain original image addresses instead
of rebuilt global storage. Native callers calculate image base + RVA
0x429F8FE0 + 528*index. Preparation restores the corresponding DWORD alias at
278384989 + 132*index; the existing name destination remains twelve bytes later.

The complete native wrapper passes 144 friend-ID, name, virtual-dispatch,
index/flags, disabled-state, record and committed-page guard comparisons. Cases
include indices through 1,023 and names through 511 bytes. Context lookup and
friend virtual methods are controlled. The production client passes friend
enumeration and reaches its main event loop. All 136 tests pass, with zero
compiler errors, 2,602 warnings and no unresolved or duplicate symbols.

### SDL event pump main-loop blocker (2026-10-03)

The client process stays responsive without an exception after the friend fix,
but this is not a usable-menu result. Window capture showed the desktop rather
than a rendered game. A controlled debugger interrupt places the main thread in
SDL polling through input_poll_events_candidate at 0x14007CC30. A frame-swap
breakpoint counted only two startup swaps and never reached the third swap.
The trace is saved in reports/client-link-steam-friend-20261003/live-debug.txt.

The export calls SDL_PollEvent without its output argument and splits the native
event union into unrelated scalar locals. It also drops the resize, restore and
fullscreen operation arguments, and exports a synthetic cookie return.
Preparation restores a 56-byte event object, offsets 0/12/16/20/24, seven typed
SDL calls, and a void exit established by the sole native caller. The complete
event pump passes 480 native key/wheel/resize/fullscreen/quit/ring-wrap/viewport/
guard comparisons with SDL queue and window boundaries controlled. Production
passes the event pump and reaches master authentication. All 137 tests pass,
with zero compiler errors, 2,602 warnings and no unresolved or duplicate symbols.
Menu and gameplay remain unverified.

### Master authentication exits (2026-10-03)

The next production crash is the synthetic stack-cookie return in
sub_14006BED0. Native cookie setup/epilogue and the sole caller establish a void
routine. Preparation restores three void exits, preserving the H/I packet
construction, retry timing, Steam ticket registration, reply parsing and phone
state transitions. The complete native routine passes 1,536 comparisons over
two frames with controlled ticket, clock, packet-builder, transport and directory
boundaries. Cases cover four states, Steam readiness, accepted flags, four ticket
lengths, retry boundaries and six reply sequences. All committed state pages
and guards are compared; truncated replies are excluded. Production validation
of this repair passes and reaches sub_1400FE1B0, the main menu builder. All 138
tests pass; compiler errors remain zero, warnings remain 2,602, and linking has
no unresolved or duplicate symbols. The third frame swap has not been reached.

### Main menu practice mouse ABI and exit (2026-10-03)

The menu builder crashes on its fabricated cookie return. Its practice path
also drops the SDL relative-mouse output pointers and converts the resulting
DWORDs as unsigned floats. Native instructions supply two stack pointers and
convert signed coordinates with CVTDQ2PS. Preparation recovers both calls, signed
conversions and the void epilogue. A complete native fixture passes 512 cases
covering all 128 button-result combinations, four layout stack depths,
positive/negative mouse coordinates, DNS failures and up to 17 candidate local
addresses (the native loop accepts at most 16). State pages, the complete
0x2270864-byte join reset and guards match. UI button rendering, platform calls,
reset and practice initialization are controlled boundaries; their internals are
not claimed verified by this fixture. Production passes the menu builder and
reaches terrain raycasting in the menu's background scene. All 139 tests pass.

### Final-frame presentation ABI (2026-10-03)

The main frame export loses four float clear-color arguments and eight of the
ten framebuffer-blit arguments. Native XMM9 is zeroed before the main loop;
glClearColor receives four float zeros. glBlitFramebuffer receives the render
rectangle, the centered destination rectangle, GL_COLOR_BUFFER_BIT and GL_NEAREST.
Preparation restores the typed calls. The original presentation instruction
block from 0x98EA4 through the swap at 0x98F84 passes 5,184 dispatch/argument
comparisons, including odd-size centering, window/render dimensions, four
framebuffer indices and full-width window handles. The fixture establishes the
original zero registers and image base, then captures GL/SDL calls; actual GPU
rendering and surrounding frame logic are outside this comparison. Production
verification passes compilation/linking, linked-native checks, SDL dependency
comparisons and preparation auditing. All 140 tests pass. The launch reaches the
same terrain raycast cookie failure before a third frame swap, so actual GPU
presentation remains unverified. Compiler errors remain zero, warnings 2,602,
and unresolved/duplicate symbols zero.

### Terrain raycast result and vector storage (2026-10-03)

The next live stack is sub_1400D1830 -> sub_1400DC050 -> sub_14014FCF0 ->
sr_ClientMain. The terrain routine's two exported cookie returns hide a native
bool result: COMISS branches to EAX=1 for an output distance below one; traversal
exhaustion returns EAX=0. Preparation restores those results and ten contiguous
direction, cell-coordinate, walk-vector, normal and triangle temporary groups.
The complete native terrain routine passes 1,152 comparisons across 16 rays,
three heightfield shapes, three occupancy patterns, four controlled triangle
hit modes and two fractional world origins. Cases include signed coordinates,
tile boundaries, reversed rays, zero-length rays, closest-hit selection, dispatch
vectors/normals and output guards. Triangle intersection internals are controlled
and excluded from this equivalence claim. Production verification is pending.

Sandium references are preserved in docs/sandium-recovery-notes.md; resource
layout assertions live in src/recovered/client_resource_layout.h. Sandium's
atlas declaration has a byte/word stride discrepancy, so only verified native
offsets are adopted. Rust stays paused. Menu and gameplay remain unverified.
