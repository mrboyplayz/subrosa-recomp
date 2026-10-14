/* Native comparison harness.
 *
 * A test program is built twice from the same source:
 *
 *   native  (NC_NATIVE defined): the routine under test is the original
 *           machine code, called at its address in subrosa.exe;
 *   port:   the routine is the C port from src/engine/.
 *
 * In both builds nc_map_image() maps the installed subrosa.exe at its
 * preferred base 0x140000000, so the game state (and the original's
 * initialized data) is at the addresses the disassembly shows. The port
 * build is linked with every global and every unported routine it mentions
 * (dword_1402B2960, sub_140188900, ...) defined as that absolute address,
 * so a port reads the same memory and can call the original's unported
 * callees. Each build prints what it observes; run.py compares the two
 * outputs line by line.
 *
 * Test programs are linked at 0x1B5000000, just above the original image,
 * so code in them reaches all of it with 32-bit displacements.
 */
#ifndef NC_H
#define NC_H

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#define NC_IMAGE_BASE 0x140000000ULL

/* Map the original executable; exits on failure. Imports are bound to traps
 * that report the import and exit, unless nc_bind_import() replaced one. */
void nc_map_image(void);
/* Before nc_map_image(): bind DLL!name to target instead of a trap. */
void nc_bind_import(const char *dll, const char *name, void *target);

/* Address of original code or data. */
#define NC_ADDR(address) ((void *)(uintptr_t)(address))

/* Supplied by run.py --client-wrappers from the current client sources. */
void *nc_client_wrapper(uint64_t address);

/* Overwrite the original routine at address with a jump to target. Used to
 * put the same recording stub behind a callee in both builds (the port build
 * reaches the original callee through its absolute symbol, which then lands
 * on the same jump). */
void nc_redirect(uint64_t address, void *target);

/* Ranges of state a test changes, saved once and put back before each case
 * so every case starts from the same memory. */
void nc_save(void *address, size_t size);   /* remember a range */
void nc_restore(void);                      /* put all remembered ranges back */

/* Floating-point control/status. */
uint32_t nc_get_mxcsr(void);
void nc_set_mxcsr(uint32_t value);

/* Deterministic generator (same sequence in both builds). */
void nc_seed(uint64_t seed);
uint64_t nc_rand(void);
uint32_t nc_rand_below(uint32_t n);
int nc_chance(int percent);
/* A float that is usually ordinary in [lo, hi], sometimes an edge value
 * (zero, negative zero, tiny, huge, infinity, NaN). */
float nc_float(float lo, float hi);
float nc_float_plain(float lo, float hi);

/* Output. Every line goes to stdout; run.py diffs the two builds. */
void nc_line(const char *format, ...) __attribute__((format(printf, 1, 2)));
void nc_bytes(const char *label, const void *data, size_t size);
/* Floats are printed as bit patterns; any NaN prints as "nan" (the processor
 * may propagate either NaN operand, see src/engine/README.md). */
void nc_floats(const char *label, const float *values, size_t count);
uint64_t nc_hash(const void *data, size_t size);

/* Recording stubs keep a call log. */
void nc_call(const char *name, int count, const uint64_t *args);

/* Number of cases (CASES environment variable, default given). */
int nc_cases(int fallback);

#ifdef NC_NATIVE
#define NC_BUILD "native"
#else
#define NC_BUILD "port"
#endif

#endif
