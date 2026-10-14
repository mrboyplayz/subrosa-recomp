/* Seven packet serializers, direct engine and actual client adapters.
 * Includes native shift counts, dirty bytes, failed reads, aliases, full
 * buffers, crossing the end and floating-point angle edge cases. */
#include <string.h>
#include "nc.h"
#include "net_bits.h"

#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((int (*) signature)NC_ADDR(address))(__VA_ARGS__)
#elif defined(NC_CLIENT_WRAPPERS)
#define CALL(address, name, signature, ...) ((int (*) signature)nc_client_wrapper(address))(__VA_ARGS__)
#else
#define CALL(address, name, signature, ...) name(__VA_ARGS__)
#endif

int main(void)
{
    static const int counts[] = {-3,-1,0,1,2,7,8,9,15,16,24,30,31,32,33,40,63,64,65,127,128,255,256};
    static const int positions[] = {0,1,17,32767,65528,65534,65535,65536,65537};
    static const int bit_positions[] = {0,1,2,3,7,8,9,13,31,32,-1};
    nc_map_image();
    memset(net_write_buffer, 0xA5, NET_BUFFER_SIZE + 128);
    memset(net_read_buffer, 0x5A, NET_BUFFER_SIZE + 128);
    int cases = nc_cases(20000);
    for (int op = 0; op < 7; op++) for (int n = 0; n < cases; n++) {
        nc_seed((uint64_t)op * 1000000u + (uint64_t)n);
        int start = positions[n % 9];
        int bit = bit_positions[(n / 9) % 11];
        int bits = counts[(n / 99) % 23];
        if (n % 3 == 1) bits = counts[nc_rand_below(23)];
        for (int k = 0; k < 96; k++) {
            net_write_buffer[start + k] = (uint8_t)nc_rand();
            net_read_buffer[start + k] = (uint8_t)nc_rand();
        }
        /* The read cursor follows the write buffer in the original image;
         * dirtying a window beyond the write end also dirties that cursor. */
        net_write_position = net_read_position = start;
        net_write_bit = net_read_bit = bit;
        net_read_length = n % 5 == 0 ? start - 1 : n % 5 == 1 ? start : n % 5 == 2 ? start + 1 : NET_BUFFER_SIZE;
        uint32_t input = (uint32_t)nc_rand(), output = (uint32_t)nc_rand();
        uint32_t divisor = n % 13 == 0 ? UINT32_MAX : (uint32_t)nc_rand_below(1024) + 1;
        float angle = nc_float(-1000.0f, 1000.0f);
        const uint32_t *in = n % 17 == 0 ? (const uint32_t *)(net_write_buffer + start) : &input;
        uint32_t *out = n % 17 == 0 ? (uint32_t *)(net_read_buffer + start) : &output;
        if (n % 31 == 1) out = (uint32_t *)&net_read_position;
        if (n % 31 == 2) out = (uint32_t *)&net_read_bit;
        nc_set_mxcsr(0x1F80);
        int result;
        switch (op) {
        case 0: result = CALL(0x140115AE0, net_read_bits, (uint32_t*,int), out,bits); break;
        case 1: result = CALL(0x140115C20, net_read_bits_scaled, (uint32_t*,int,uint32_t), out,bits,divisor); break;
        case 2: result = CALL(0x140115D90, net_write_bits, (const uint32_t*,int), in,bits); break;
        case 3: result = CALL(0x140115E80, net_write_bits_scaled, (const uint32_t*,int,uint32_t), in,bits,divisor); break;
        case 4: result = CALL(0x140115E60, net_write_bits_e60, (const uint32_t*,int), in,bits); break;
        case 5: result = CALL(0x140115F70, net_write_bits_f70, (const uint32_t*,int), in,bits); break;
        default: result = CALL(0x14010E610, net_write_angle, (const float*,int), &angle,bits); break;
        }
        uint32_t csr = nc_get_mxcsr();
        nc_line("op %d case %d bits %d result %d output %08x cursor %d/%d %d/%d csr %08x",op,n,bits,
                result,output,net_write_position,net_write_bit,net_read_position,net_read_bit,csr);
        nc_bytes("write", net_write_buffer+start, 96);
        nc_bytes("read", net_read_buffer+start, 96);
    }
    nc_line("whole buffers %016llx %016llx", (unsigned long long)nc_hash(net_write_buffer,NET_BUFFER_SIZE+128),
            (unsigned long long)nc_hash(net_read_buffer,NET_BUFFER_SIZE+128));
    return 0;
}
