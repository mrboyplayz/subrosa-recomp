#include "state_forward.h"
#include <stdint.h>

/* The still-unrestored city state read the original forwards to. */
extern int64_t sub_14009DE80(void);

/* 0x1400A54F0: the forwarding routine the original kept for this state read:
 * a call to 0x14009DE80 with its result truncated to the low sixteen bits,
 * zero-extended into the return register. */
unsigned int state_forward_u16(void)
{
    extern int64_t sub_14009DE80(void);
    return (unsigned int)(unsigned short)sub_14009DE80();
}
