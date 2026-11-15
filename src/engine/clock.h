/* The millisecond clock. See clock.c. */
#ifndef SR_ENGINE_CLOCK_H
#define SR_ENGINE_CLOCK_H

#include "memory.h"
#include <stdint.h>

/* The clock's enabled flag, its frequency and its base counter, in the
   shared state (0x160FC4828, 0x160FC4830, 0x160FC4838), read at use. */
#define clock_enabled SR_GLOBAL(uint32_t, 0x160FC4828ULL)
#define clock_frequency SR_GLOBAL(int64_t, 0x160FC4830ULL)
#define clock_base SR_GLOBAL(int64_t, 0x160FC4838ULL)

/* Milliseconds since the clock's base counter, or 0 while the clock is
   disabled. 0x14007C980 */
int64_t clock_milliseconds(void);

#endif /* SR_ENGINE_CLOCK_H */
