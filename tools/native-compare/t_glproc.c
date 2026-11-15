/* The GL module's procedure resolver: the zero-handle early return, the
   custom hook tried first (its non-zero result wins, a zero result falls
   through), the handle re-read after the hook ran, and the tail call to the
   real GetProcAddress (kernel32, reached through the original's import in
   the native build and through the import the port links in the port build).
   The hook may rewrite the module handle to another real module to prove the
   fallback re-reads it. */
// NC_WRAPPERS: 14009E190
#include <string.h>
#include <windows.h>
#include "nc.h"
#include "memory.h"

#ifdef NC_NATIVE
#define proc_resolve(n) ((long long (*)(const char *))NC_ADDR(0x14009E190))(n)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14009E190(long long);
#define proc_resolve(n) sub_14009E190((long long)(uintptr_t)(n))
#else
long long gl_proc_resolve(const char *name);
#define proc_resolve(n) gl_proc_resolve(n)
#endif

static const char *names[] = {"CreateFileW", "glBegin", "", "GetModuleHandleA"};

/* The hook: returns a scripted value and may rewrite the module handle to
   another real module (the harness exe) to prove the fallback re-reads it. */
static long long hook_value;
static int hook_rewrites_handle;
static long long hook(const char *name)
{
    (void)name;
    if (hook_rewrites_handle)
        SR_GLOBAL(uint64_t, 0x144980D88ULL) = (uint64_t)(uintptr_t)GetModuleHandleA(NULL);
    return hook_value;
}

static void run_case(int n)
{
    nc_seed((uint64_t)n * 7 + 3);
    const char *name = names[n % 4];
    uintptr_t handle = (n % 4 == 1) ? 0 : (uintptr_t)GetModuleHandleA("kernel32.dll");
    hook_value = (n % 3 == 0) ? 0 : (long long)(0x6E000000ULL + (uintptr_t)(n & 0xFFFF));
    hook_rewrites_handle = (n % 5 == 0);
    SR_GLOBAL(uint64_t, 0x144980D88ULL) = handle;
    SR_GLOBAL(uint64_t, 0x144980D90ULL) = (n % 7 == 0) ? 0 : (uint64_t)(uintptr_t)hook;
    long long result = proc_resolve(name);
    nc_line("n%d h%llx hook%llx rw%d %016llx handle%llx", n,
            (unsigned long long)handle, (unsigned long long)hook_value,
            hook_rewrites_handle, (unsigned long long)result,
            (unsigned long long)SR_GLOBAL(uint64_t, 0x144980D88ULL));
}

int main(void)
{
#ifdef NC_NATIVE
    nc_bind_import("KERNEL32.dll", "GetProcAddress", (void *)GetProcAddress);
#endif
    nc_map_image();
    for (int n = 0; n < nc_cases(1000); n++)
        run_case(n);
    return 0;
}
