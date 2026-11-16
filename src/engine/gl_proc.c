#include "gl_proc.h"
#include "memory.h"
#include <stddef.h>
#include <stdint.h>

/* kernel32!GetProcAddress and kernel32!LoadLibraryW, as the original's
   resolver tail-jumps to the first (through the import slot at 0x14026E300)
   and loads the GL module with the second. Declared without the OS header
   so the engine stays portable: the client build links the real imports,
   and the native-compare port build links its own stubs over the names. */
long long GetProcAddress(void *module, const char *name);
void *LoadLibraryW(const wchar_t *name);

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

/* Loads opengl32.dll and resolves wglGetProcAddress through it: the module
 * handle lands at 0x144980D88 — the slot gl_proc_resolve reads — and the
 * procedure address at 0x144980D90. Returns whether the resolution
 * succeeded; a failed load returns the failed handle, zero. 0x14010E030 */
long long gl_load_opengl32(void)
{
    void *module = LoadLibraryW(L"opengl32.dll");
    SR_GLOBAL(uint64_t, 0x144980D88ULL) = (uint64_t)(uintptr_t)module;
    if (module) {
        SR_GLOBAL(uint64_t, 0x144980D90ULL) =
            (uint64_t)(uintptr_t)GetProcAddress(module, "wglGetProcAddress");
        return SR_GLOBAL(uint64_t, 0x144980D90ULL) != 0;
    }
    return (long long)(uintptr_t)module;
}
