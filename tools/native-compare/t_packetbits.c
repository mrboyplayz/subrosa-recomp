/* Complete packet state, including initial limits, dirty output bytes,
   zero/negative/32+ bit counts, unusual cursors and overlapping arguments. */
// NC_WRAPPERS: 140115AE0 140115C20 140115D90 140115E80 140115E60 140115F70
#include <string.h>
#include "nc.h"
#include "net_bits.h"

#ifdef NC_NATIVE
#define read_bits(v,b) ((uint64_t (*)(uint32_t *, int))NC_ADDR(0x140115AE0))(v,b)
#define read_scaled(v,b,s) ((uint64_t (*)(uint32_t *, int, uint32_t))NC_ADDR(0x140115C20))(v,b,s)
#define write_bits(v,b) ((uint64_t (*)(const uint32_t *, int))NC_ADDR(0x140115D90))(v,b)
#define write_scaled(v,b,d) ((uint64_t (*)(const uint32_t *, int, uint32_t))NC_ADDR(0x140115E80))(v,b,d)
#define write_e60(v,b) ((uint64_t (*)(const uint32_t *, int))NC_ADDR(0x140115E60))(v,b)
#define write_f70(v,b) ((uint64_t (*)(const uint32_t *, int))NC_ADDR(0x140115F70))(v,b)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_net_read_bits(uint32_t *, int);
long long sr_net_read_bits_scaled(uint32_t *, int, int);
long long sr_net_write_bits(uint32_t *, int);
long long sr_net_write_bits_scaled(uint32_t *, int, uint32_t);
long long sr_net_write_bits_always_success(uint32_t *, int);
long long sr_net_write_bits_always_success_alt(uint32_t *, int);
#define read_bits sr_net_read_bits
#define read_scaled sr_net_read_bits_scaled
#define write_bits sr_net_write_bits
#define write_scaled sr_net_write_bits_scaled
#define write_e60 sr_net_write_bits_always_success
#define write_f70 sr_net_write_bits_always_success_alt
#else
#define read_bits net_read_bits
#define read_scaled net_read_bits_scaled
#define write_bits net_write_bits
#define write_scaled net_write_bits_scaled
#define write_e60 net_write_bits_always_success
#define write_f70 net_write_bits_always_success_alt
#endif

static void run_case(int op, int n)
{
    static const int counts[] = {-3,-1,0,1,2,7,8,9,15,16,17,24,31,32,33,40,64};
    static const int positions[] = {0,1,4,32,65530,65534,65535,65536,65537};
    static const int offsets[] = {0,1,2,3,4,5,6,7,8,9,13,31,32,-1};
    nc_seed((uint64_t)op * 1000000 + n);
    int bits = counts[n % 17];
    int start = positions[(n / 17) % 9];
    int bit = offsets[(n / 153) % 14];
    /* Reinitialize the buffers periodically; every case resets its cursors. */
    if (n % 97 == 0) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++) {
            net_write_buffer[i] = (uint8_t)nc_rand();
            net_read_buffer[i] = (uint8_t)nc_rand();
        }
    }
    net_read_position = net_write_position = start;
    net_read_bit = net_write_bit = bit;
    net_read_length = n % 5 == 0 ? start : n % 5 == 1 ? start - 1 : NET_BUFFER_SIZE;
    uint32_t value = (uint32_t)nc_rand();
    uint32_t scale = (uint32_t)nc_rand();
    uint32_t divisor = 1u + (uint32_t)nc_rand_below(65535);
    uint32_t *argument = &value;
    switch ((n / 2142) % 6) {
    case 1: argument = (uint32_t *)(void *)(op < 2 ? net_read_buffer + 12 : net_write_buffer + 12); break;
    case 2: argument = (uint32_t *)(void *)(op < 2 ? net_read_buffer + (start < 65536 ? start : 0)
                                                                 : net_write_buffer + (start < 65536 ? start : 0)); break;
    case 3: argument = (uint32_t *)(void *)(op < 2 ? &net_read_position : &net_write_position); break;
    case 4: argument = (uint32_t *)(void *)(op < 2 ? &net_read_bit : &net_write_bit); break;
    case 5: argument = (uint32_t *)(void *)&net_read_length; break;
    }
    if (op == 3 && start >= NET_BUFFER_SIZE) divisor = 0; /* bounds check precedes division */
    nc_set_mxcsr(0x1F80);
    uint64_t result;
    switch (op) {
    case 0: result = read_bits(argument, bits); break;
    case 1: result = read_scaled(argument, bits, scale); break;
    case 2: result = write_bits(argument, bits); break;
    case 3: result = write_scaled(argument, bits, divisor); break;
    case 4: result = write_e60(argument, bits); break;
    default: result = write_f70(argument, bits); break;
    }
    nc_line("%d %d %016llx v%08x r%d/%d/%d w%d/%d csr%08x", op, n,
            (unsigned long long)result, value, net_read_position, net_read_bit,
            net_read_length, net_write_position, net_write_bit, nc_get_mxcsr());
    /* Hash all bytes, including guard storage. No NaN normalization here. */
    nc_line("buffers %016llx %016llx", (unsigned long long)nc_hash(net_read_buffer, NET_BUFFER_SIZE + 16),
            (unsigned long long)nc_hash(net_write_buffer, NET_BUFFER_SIZE + 16));
}

int main(void)
{
    nc_map_image();
    for (int op = 0; op < 6; op++)
        for (int n = 0; n < nc_cases(13000); n++)
            run_case(op, n);
    return 0;
}
