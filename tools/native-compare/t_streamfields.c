// NC_WRAPPERS: 14006C510 14006C570
#include "nc.h"
#include "net_stream_fields.h"

#ifdef NC_NATIVE
#define optional_index ((uint64_t (*)(int, uint32_t *, char, int))NC_ADDR(0x14006C510))
#define signed_field ((uint64_t (*)(int, uint32_t *, char, int))NC_ADDR(0x14006C570))
#elif defined(NC_CLIENT_WRAPPERS)
int64_t sub_14006C510(int, uint32_t *, char, int);
#define optional_index sub_14006C510
int64_t sub_14006C570(int, uint32_t *, char, int);
#define signed_field sub_14006C570
#else
#define optional_index net_stream_optional_index
#define signed_field net_stream_signed_field
#endif

static uint32_t supplied;
static uint64_t transfer_result;
static uint32_t *caller_value;

static int64_t transfer(int stream, uint32_t *value, int bits, int writing)
{
    /* Do not read the uninitialized local passed on the read path. */
    nc_line("transfer %d %d %d %d %08x", stream, (int)bits, writing,
            value == caller_value, writing ? *value : 0);
    *value = supplied;
    return (int64_t)transfer_result;
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x14006C360, transfer);
    for (int n = 0; n < nc_cases(16384); ++n) {
        nc_seed(n);
        char bits = (char)(n & 255);
        uint32_t mask = (1u << ((unsigned char)bits & 31u)) - 1u;
        uint32_t words[3] = {0x12345678, (uint32_t)nc_rand(), 0x87654321};
        caller_value = &words[1];
        switch ((n / 256) % 4) {
        case 0: supplied = mask; break;
        case 1: supplied = mask ^ 1u; break;
        case 2: supplied = 0; break;
        default: supplied = (uint32_t)nc_rand(); break;
        }
        transfer_result = nc_rand();
        int writing = (n / 1024) % 3 == 0 ? 0 : ((n / 1024) % 3 == 1 ? 1 : -7);
        uint64_t result = optional_index((int)nc_rand(), caller_value, bits, writing);
        nc_line("optional %d %016llx %08x %08x %08x", n,
                (unsigned long long)result, words[0], words[1], words[2]);
        result = signed_field((int)nc_rand(), caller_value, bits, writing);
        nc_line("signed %d %016llx %08x %08x %08x", n,
                (unsigned long long)result, words[0], words[1], words[2]);
    }
    return 0;
}
