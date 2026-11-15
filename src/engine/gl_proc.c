#include "gl_proc.h"
#include "memory.h"
#include <stdint.h>

/* kernel32!GetProcAddress, as the original's resolver tail-jumps to it
   (through the import slot at 0x14026E300). Declared without the OS header
   so the engine stays portable: the client build links the real import, and
   the native-compare port build links its own stub over the name. */
long long GetProcAddress(void *module, const char *name);

/* The GL module's procedure resolver (the loader's callback): a zero module
 * handle returns zero; a custom resolver hook is tried first and its
 * non-zero result wins; the fallback re-reads the handle — the hook may have
 * changed it — and tail-jumps to GetProcAddress. 0x14009E190 */
long long gl_proc_resolve(const char *name)
{
    if (!SR_GLOBAL(uint64_t, 0x144980D88ULL))
        return 0;
    uint64_t hook = SR_GLOBAL(uint64_t, 0x144980D90ULL);
    if (hook) {
        long long resolved = ((long long (*)(const char *))hook)(name);
        if (resolved)
            return resolved;
    }
    return GetProcAddress((void *)(uintptr_t)SR_GLOBAL(uint64_t, 0x144980D88ULL), name);
}
