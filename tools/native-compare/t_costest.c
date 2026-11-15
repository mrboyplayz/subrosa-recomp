// NC_WRAPPERS:
#include <math.h>
#include <string.h>
#include "nc.h"

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    nc_map_image();
    static const uint32_t edges[] = {
        0,0x80000000,0x00000001,0x007fffff,0x00800000,
        0x3f000000,0x3f7fffff,0x3f800000,0x3f800001,
        0xbf800000,0xbf800001,0x40000000,0xc0000000,
        0x40490fdb,0xc0490fdb,0x33800000,0xb3380000,
        0x40800000,0xc0800000,0x41100000,0x42c80000
    };
    for (unsigned i = 0; i < sizeof edges / sizeof edges[0]; i++) {
        double x;
        uint32_t w = edges[i];
        memcpy(&x, &w, 4);
        double original = ((double (*)(double))NC_ADDR(0x14023FC70))(x);
        double mingw = cos(x);
        unsigned long long obits, mbits;
        memcpy(&obits, &original, 8);
        memcpy(&mbits, &mingw, 8);
        nc_line("edge %08x orig %016llx mingw %016llx", w, obits, mbits);
    }
    for (int n = 0; n < 4000; n++) {
        nc_seed(n);
        double x = nc_float(-4, 4);
        double original = ((double (*)(double))NC_ADDR(0x14023FC70))(x);
        double mingw = cos(x);
        unsigned long long obits, mbits;
        memcpy(&obits, &original, 8);
        memcpy(&mbits, &mingw, 8);
        nc_line("rand %d in %.9g orig %016llx mingw %016llx", n, x, obits, mbits);
    }
    return 0;
}