# Windows Client Preparation Audit

Run `python scripts/audit_client_preparation.py` after preparing and checking
the client. It verifies that the provenance record, prepared C source, and
compiler report refer to identical bytes, then writes a detailed local queue
to `reports/preparation-audit/client.md`.

The 2026-09-30 audit found 7,157 individual edit records. The largest groups
were 3,886 SIMD lane writes/views, 2,330 function bindings, 414 SIMD reads,
170 data-object bindings, and 135 function-definition bindings. It also found
71 vector moves, 47 renamed duplicate definitions, 37 scalar data-object
bindings, 28 variadic signature changes, 22 prototype drops, and 17 function
address casts. The preprocessor counted zero remaining unknown float replacements
and zero unknown initializers, 1,550 stripped `const` tokens, and 190 wrapped assembly
blocks. Four overlapping edits were left unresolved. Forty-eight `__noreturn`
annotations were preserved as GCC attributes and hidden-parameter annotations
were removed from the build copy; the prepared source still has 29 C parser
errors. The audit report lists their locations.

An additional 54 former `?flt` placeholders in one global table have now
been recovered from the pinned binary as exact `0x00000001` words. The other
three came from a falsely merged TLS-index vector: its first four bytes are
`0xffffffff`, and its final half overlaps a separate exported pointer.
The preparation pass now declares a four-byte index and rewrites its 17
low-word accesses, with the binary hash and surrounding bytes checked first.
The empty `wctype` initializer was a 257-word character classification table
at `0x14028bd10`. Its separately exported `byte_14028BD12` symbol points
inside that table. The preparation pass extracts the exact words and
preserves the interior alias from the pinned binary.
See the [float-table evidence](recovered-float-table.md) and
[character-table evidence](recovered-wctype.md). The lenient compiler
error count fell from 295 to 294; this is a syntax milestone, not a fidelity
measure.

The template `operator()` cleanup now produces one valid C identifier for
the function at `0x14026b148`, allowing the combined export's body to be
recognized instead of appended a second time. Empty inferred type names are
excluded from generated forward declarations. Three locally defined floating
point environment functions are scoped away from conflicting host C headers.
Together these repairs reduced lenient compiler errors from 294 to 274 and
prepared-source parser errors from 52 to 29. See the
[missing pointer-target leaves](client-pointer-leaves.md) for the next set of
address-backed function findings.

The five pointer-target leaves are now adapted into the generated translation
unit, removing their undeclared-symbol errors. A separate 12-entry SIMD table
is reconstructed from 192 checked bytes with a GCC-valid vector initializer;
the test compares the compiled array byte for byte with the pinned client.
That pass reduced the lenient check to 267 compiler errors.

The paired-double helper at `0x1401f8a50` returns two binary64 lanes in
`xmm0`; inspected callers copy that register without conversion. A guarded
bit cast resolves 69 `__m128d`-to-`__m128` assignments while preserving
the register contents. That lenient check reported 198
compiler errors. See [the return-register evidence](paired-double-return.md).

Seven reviewed memory `movss` loads now preserve their raw low-word bits
and clear the upper lanes. Five byte-comparison expressions now group the
pointer displacement to match the original register subtraction. These
repairs reduced the current lenient check to 186 errors, with 5,032 warnings
and 29 parser errors. All 30 preparation tests pass. Their counters are
included in the audit alongside the 69 paired-double return casts. See
[the load and address evidence](client-load-and-address-repairs.md).

The subsequent scoped expression and ABI pass reduced errors from 186 to
zero in the lenient C syntax check, with 5,027 warnings. All 35 preparation
tests pass. The audit includes counters for each additional repair class,
and the compiler report matches the prepared source SHA256. The two nested
expression repairs address the four upstream skipped edit records; those
records remain visible rather than being deleted from provenance. The 29
Tree-sitter parser findings remain. Two recovered funclet entries also pass
8,192 direct original-code comparisons. See
[the detailed expression evidence](client-expression-repairs.md).

The following object-compilation pass produced a Windows x64 object with
zero compiler or assembler errors, 5,032 warnings, and four notes. All 36
preparation tests and four diagnostic-tool tests pass. The audit now compares
the regenerated source hash with the final object report in
`reports/client-object-final-20260930/`. Assembly separators, dump-notation
regular expressions, and MASM comments were repaired without discarding
instructions. The 190 wrappers still require register and frame recovery.
See [the object evidence](client-object-compilation.md).

These are workload counts. None is a measure of behavioral equivalence. In
particular, a variadic signature can conceal a misrecovered ABI.
The audit therefore classifies each transformation by the evidence it still
needs rather than declaring the generated C semantics-preserving.

## Review order

1. Locate the parse-error regions and the four skipped overlapping edits.
2. Verify the recovered static tables' types, aliases, and initialization
   lifetimes against all users.
3. Check the 28 variadic signature changes against call sites and machine code.
4. Check vector moves and wrapped assembly for register and upper-lane effects.
5. Recover global storage, initialization, and aliasing for data-object edits.
6. Verify function bindings, dropped prototypes, and remaining pointer casts.

Each correction must link a function address or data address to the original
instructions and a focused comparison. A lower compiler error count alone
does not close any item in this queue.
