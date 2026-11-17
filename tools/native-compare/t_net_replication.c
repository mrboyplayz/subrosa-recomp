// NC_WRAPPERS: 140105BD0
/* The replication layer's outgoing encoders. The client entry points are
 * the decompiled bodies in src/client/client_net_replication.c; in the port
 * build NC_CLIENT_WRAPPERS recompiles them against the engine ports.
 * nc_save() ranges are put back before every case so the cases are
 * independent. */
#include <math.h>
#include <string.h>
#include "nc.h"
#include "net_replication_encode.h"

#ifdef NC_NATIVE
#define distance_priority(d) \
    ((unsigned int(__fastcall *)(float))NC_ADDR(0x140105BD0))(d)
#else
#define distance_priority net_replication_distance_priority
#endif

/* The outgoing packet writer state (0x18539D3FC, 4108 bytes with the
 * buffer).  Only routines that write the stream need it. */
static void save_packet_state(void)
{
    nc_save(&SR_GLOBAL(int32_t, 0x18539D3FCULL), 8);
    nc_save(&SR_GLOBAL(uint8_t, 0x18539D404ULL), 65536);
}

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    nc_map_image();
    save_packet_state();

    int cases = nc_cases(600);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        float d;
        if (n < 200) {
            /* All bit patterns: bit-exactness must hold for every float. */
            uint32_t bits = (uint32_t)nc_rand();
            memcpy(&d, &bits, 4);
        } else if (n < 400) {
            /* Ordinary distances: subnormal through huge, plus NaN. */
            d = nc_float(0.0f, 100000.0f);
        } else {
            /* Small structured distances around the 256 cut-off. */
            d = nc_float(0.0f, 400.0f);
        }
        unsigned int result = distance_priority(d);
        uint32_t printed;
        memcpy(&printed, &d, 4);
        nc_line("case %d bits %08x result %u", n, printed, result);
        nc_restore();
    }
    return 0;
}

/* NEXT ROUTINE */
