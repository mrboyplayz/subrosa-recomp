/* A level pass's culling and depth-testing change: 0x140094690.

   The original is four successive calls through the client's GL import
   slots: glDisable with 0xB44, glDisable with 0xB71, glEnable with 0xB44,
   and a tail call to glEnable with 0xB71. The slots are recording stubs in
   both builds, so the fixture compares the call log, not pixels.

   The slots live in the shared state at 0x144980D60 and 0x144980D68 (see
   gl.h), which nc_map_image() has mapped in both builds, so writing them
   here reaches the original routine and the port alike. */
// NC_WRAPPERS: 140094690
#include <stdint.h>
#include "nc.h"

#ifdef NC_NATIVE
#define state_change() ((void (*)(void))NC_ADDR(0x140094690))()
#else
#include "gl.h"
#include "gl_state.h"
#define state_change gl_state_disable_then_enable_cull_depth
#endif

static void record_disable(uint32_t capability) { nc_line("glDisable %#x", capability); }
static void record_enable(uint32_t capability) { nc_line("glEnable %#x", capability); }

int main(void)
{
    nc_map_image();
    *(void **)(uintptr_t)0x144980D60ULL = (void *)record_disable;
    *(void **)(uintptr_t)0x144980D68ULL = (void *)record_enable;
    /* The routine takes no arguments and reads no state: one call is the
       whole behaviour. Repeated so a slot that gets swapped out is caught. */
    for (int n = 0; n < 3; n++) {
        nc_line("call %d", n);
        state_change();
    }
    return 0;
}
