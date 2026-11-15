// NC_WRAPPERS: 14007C980
/* The millisecond clock: the disabled-clock early return, the scripted
   QueryPerformanceCounter (bound over the original's import in the native
   build, linked over the name here), the signed 64-bit 1000 *
   (counter - base) / frequency with its wrap and signed division, and the
   shared-state frequency and base at 0x160FC4830 and 0x160FC4838. */
#include <windows.h>
#include "nc.h"
#include "clock.h"

static int64_t scripted_counter;

static void counter_stub(int64_t *out)
{
    *out = scripted_counter;
}

#ifndef NC_NATIVE
/* The port build links this over the kernel32 import, so both builds read
   the same scripted counter. */
int QueryPerformanceCounter(LARGE_INTEGER *out)
{
    counter_stub(&out->QuadPart);
    return 1;
}
#endif

#ifdef NC_CLIENT_WRAPPERS
long long sr_clock_milliseconds(void);
#endif

static void run_case(int n)
{
    static const int64_t frequencies[] = {
        1, 2, 3, 1000, 3597, 1000000, 0x7FFFFFFF, 0x4000000000000000LL, -2, -1000
    };
    int64_t base;
    int64_t counter;
    long long result;
    unsigned int enabled;

    nc_seed((uint64_t)n * 7 + 5);
    base = (int64_t)nc_rand();
    counter = base + (int64_t)(nc_rand() % 2000000001ULL) - 1000000000LL;
    if (n % 5 == 0)
        counter = base;
    if (n % 7 == 0)
        counter = (int64_t)nc_rand();
    enabled = n % 3 == 0 ? 0u : n % 3 == 1 ? 1u : 0x80000000u;
    scripted_counter = counter;
    clock_enabled = enabled;
    clock_frequency = frequencies[n % 10];
    clock_base = base;
#ifdef NC_NATIVE
    result = ((long long (*)(void))NC_ADDR(0x14007C980))();
#elif defined(NC_CLIENT_WRAPPERS)
    result = sr_clock_milliseconds();
#else
    result = clock_milliseconds();
#endif
    nc_line("clock n%d ret%lld en%u f%lld b%lld c%lld", n, result, clock_enabled,
            (long long)clock_frequency, (long long)clock_base, (long long)scripted_counter);
}

int main(void)
{
#ifdef NC_NATIVE
    nc_bind_import("KERNEL32.dll", "QueryPerformanceCounter", counter_stub);
#endif
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); n++)
        run_case(n);
    return 0;
}
