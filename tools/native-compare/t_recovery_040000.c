/* Shape builders for the mesh being built: the three zero-and-fill
   entries, compared against the original at their addresses. The state
   seeded per case covers the mesh build counters, the cursor words and
   the triangle record region; the lines hash those areas and the calls
   the builders make. */
// NC_WRAPPERS: 1400521A0 14005D4C0 14005F370
#include <string.h>
#include <windows.h>
#include "nc.h"
#include "memory.h"

#ifdef NC_CLIENT_WRAPPERS
double sub_1400521A0(int, float, float, float);
double sub_14005D4C0(int, float, float, float);
double sub_14005F370(int, int);
#elif defined(NC_NATIVE)
#define recovery_mesh_builder_03125 ((double (*)(int, float, float, float))NC_ADDR(0x1400521A0))
#define recovery_mesh_builder_origin ((double (*)(int, float, float, float))NC_ADDR(0x14005D4C0))
#define recovery_mesh_builder_020 ((double (*)(int, int))NC_ADDR(0x14005F370))
#else
#include "recovery_040000.h"
#endif

/* The state around the mesh build, from the counters at 0x16A7DBDA0 to
   the last triangle record word. */
#define MESH_BUILD_BASE ((void *)&SR_GLOBAL(uint32_t, 0x16A7DBDA0ULL))
#define MESH_BUILD_END ((void *)&SR_GLOBAL(uint32_t, 0x16AD03DB8ULL))
#define RECORD_WORDS (6u * 40u)

int main(void)
{
#ifdef NC_NATIVE
    /* The tail-called record reader allocates through the CRT (its unwind
       and heap paths reach KERNEL32), so the fixture binds the imports the
       original reaches to the host's own. */
    nc_bind_import("KERNEL32.dll", "HeapAlloc", (void *)HeapAlloc);
    nc_bind_import("KERNEL32.dll", "HeapFree", (void *)HeapFree);
    nc_bind_import("KERNEL32.dll", "HeapReAlloc", (void *)HeapReAlloc);
    nc_bind_import("KERNEL32.dll", "HeapSize", (void *)HeapSize);
    nc_bind_import("KERNEL32.dll", "GetProcessHeap", (void *)GetProcessHeap);
    nc_bind_import("KERNEL32.dll", "RtlCaptureContext", (void *)RtlCaptureContext);
    nc_bind_import("KERNEL32.dll", "RtlLookupFunctionEntry", (void *)RtlLookupFunctionEntry);
    nc_bind_import("KERNEL32.dll", "RtlVirtualUnwind", (void *)RtlVirtualUnwind);
    nc_bind_import("KERNEL32.dll", "IsProcessorFeaturePresent", (void *)IsProcessorFeaturePresent);
#endif
    nc_map_image();
    nc_save(MESH_BUILD_BASE, (size_t)((unsigned char *)MESH_BUILD_END - (unsigned char *)MESH_BUILD_BASE));
    nc_save((void *)&SR_GLOBAL(uint32_t, 0x16AB13DB4ULL), RECORD_WORDS * 4u);

    for (int n = 0; n < nc_cases(1024); ++n) {
        nc_seed((uint64_t)n);
        /* Pre-fill the mesh build area: ordinary counters and records, so
           the builders' zeroing and the builder's vertex write both show. */
        uint32_t *counter = (uint32_t *)MESH_BUILD_BASE;
        for (size_t i = 0; i < (size_t)((uint32_t *)MESH_BUILD_END - (uint32_t *)MESH_BUILD_BASE); ++i)
            counter[i] = (uint32_t)nc_rand();
        uint32_t *records = &SR_GLOBAL(uint32_t, 0x16AB13DB4ULL);
        for (size_t i = 0; i < RECORD_WORDS; ++i)
            records[i] = (uint32_t)nc_rand();

        int kind = n % 4;
        double result;
        if (kind == 0) {
            float a2 = nc_float(-8.0f, 8.0f), a3 = nc_float(-8.0f, 8.0f), a4 = nc_float(-8.0f, 8.0f);
            result = recovery_mesh_builder_origin(n, a2, a3, a4);
        } else if (kind == 1) {
            int a2 = (int)(nc_rand() % 4) - 1; /* 0 and 1 in most cases */
            result = recovery_mesh_builder_020(n, a2);
        } else if (kind == 2) {
            float a2 = nc_float(-8.0f, 8.0f), a3 = nc_float(-8.0f, 8.0f), a4 = nc_float(-8.0f, 8.0f);
            result = recovery_mesh_builder_03125(n, a2, a3, a4);
        } else {
            /* The zero-triangle case: the builders' record loop must not run. */
            counter[0] = 0; /* 0x16A7DBDA0 */
            counter[1] = 0; /* 0x16A91BDA8 */
            result = recovery_mesh_builder_origin(n, 1.0f, 2.0f, nc_float(-4.0f, 4.0f));
        }

        nc_line("build %d %016llx %016llx %016llx %016llx %016llx", n,
                (unsigned long long)nc_hash(MESH_BUILD_BASE,
                    (size_t)((unsigned char *)MESH_BUILD_END - (unsigned char *)MESH_BUILD_BASE)),
                (unsigned long long)nc_hash(records, RECORD_WORDS * 4u),
                (unsigned long long)*(uint64_t *)&SR_GLOBAL(uint32_t, 0x16AB13DB0ULL),
                (unsigned long long)*(uint64_t *)&SR_GLOBAL(uint32_t, 0x16AB13DB4ULL),
                (unsigned long long)nc_hash(&result, sizeof result));
        nc_restore();
    }
    return 0;
}
