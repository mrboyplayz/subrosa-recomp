/* The millisecond clock. See clock.h. */
#include <stdint.h>

#include "clock.h"

/* kernel32!QueryPerformanceCounter, as the original's clock calls it
   (through the import slot at 0x14026E320). Declared without the OS header
   so the engine stays portable: the client build links the real import, and
   the native-compare port build links its own stub over the name. */
int QueryPerformanceCounter(void *counter);

int64_t clock_milliseconds(void)
{
    int64_t counter;

    if (!clock_enabled)
        return 0;
    QueryPerformanceCounter(&counter);
    return 1000 * (counter - clock_base) / clock_frequency;
}
