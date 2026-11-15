/* Minimal probe: does the original 0x140139560 crash with pristine state? */
#include <string.h>
#include "nc.h"
#include "terrain.h"

static void run_case(int n)
{
    long long result = ((long long (*)(void))NC_ADDR(0x140139560))();
    nc_line("n%d %016llx", n, (unsigned long long)result);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < 3; n++)
        run_case(n);
    return 0;
}
