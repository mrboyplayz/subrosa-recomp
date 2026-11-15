/* The unsigned short state forward: a call to the still-unrestored
   0x14009DE80 with its result truncated to the low sixteen bits and
   zero-extended into the return register. Repeated calls exercise the
   state the read depends on. */
// NC_WRAPPERS: 1400A54F0
#include <string.h>
#include "nc.h"

#ifdef NC_NATIVE
#define state_u16() ((long long (*)(void))NC_ADDR(0x1400A54F0))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400A54F0(void);
#define state_u16() sub_1400A54F0()
#else
unsigned int state_forward_u16(void);
#define state_u16() state_forward_u16()
#endif

static void run_case(int n)
{
    nc_set_mxcsr(0x1F80);
    long long result = state_u16();
    nc_line("n%d %016llx", n, (unsigned long long)result);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(1000); n++)
        run_case(n);
    return 0;
}
