/* Read-side packet decoders: sign words, adaptive deltas and scaled
   fractions over the seeded stream. Bit counts cover the whole sign-word
   range including the zero-denominator widths; the fraction sees NaN, inf
   and subnormal scales; outputs alias the read buffer and the cursor
   words. Every decoder's first bit read must succeed (the original
   consumes its prior stack slot otherwise); later delta reads may fail
   and keep the flag word, so short lengths are driven there only. */
// NC_WRAPPERS: 14018D440 140192560 14018D510
#include <limits.h>
#include <string.h>
#include "nc.h"
#include "net_bits.h"
#include "net_decode.h"

#ifdef NC_NATIVE
#define angle_read(o,b) ((uint64_t (*)(float *, int))NC_ADDR(0x14018D440))(o,b)
#define fraction_read(o,s,b) ((uint64_t (*)(float *, float, int))NC_ADDR(0x140192560))(o,s,b)
#define delta_read(o,t,b) ((uint64_t (*)(uint32_t *, int32_t, int))NC_ADDR(0x14018D510))(o,t,b)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_net_read_angle(float *, int);
long long sr_net_read_scaled_fraction(float *, float, int);
long long sr_net_read_delta(uint32_t *, int, int);
#define angle_read sr_net_read_angle
#define fraction_read sr_net_read_scaled_fraction
#define delta_read sr_net_read_delta
#else
#define angle_read net_read_angle
#define fraction_read net_read_scaled_fraction
#define delta_read net_read_delta
#endif

static const int widths[] = {-129,-3,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
    16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,40,64,127,128,255,256};
static const int starts[] = {0,1,4,32,60000,65512,65520,65528,65530,65535};
static const int bit_offsets[] = {0,1,2,3,4,5,6,7,8,9,13,31,32,-1};
static const uint32_t scale_edges[] = {0x00000000,0x80000000,0x00000001,0x3F800000,
    0xBF800000,0x40C90FDB,0xC0C90FDB,0x7F7FFFFF,0xFF7FFFFF,0x7F800000,0xFF800000,
    0x7FC12345,0x7FA12345,0x00800000,0x0E000000};
static const int32_t base_edges[] = {0,1,-1,INT32_MIN,INT32_MAX,0x1FC,-0x8000,0x7FFF};

static void run_case(int op, int n)
{
    nc_seed((uint64_t)op * 1000003u + (uint64_t)n);
    int bits = widths[n % 44];
    int start = starts[(n / 44) % 10];
    int bit = bit_offsets[(n / 13) % 14];
    float scale = 0.0f;
    if (op == 1) {
        if (n % 17 == 5)
            memcpy(&scale, &scale_edges[n % 15], 4);
        else
            scale = nc_float(-2000.0f, 2000.0f);
    }
    int32_t base = 0;
    if (op == 2 && n % 13 == 7)
        base = base_edges[n % 8];
    else if (op == 2)
        base = (int32_t)nc_rand_below(0x10000u) - 0x8000u;
    /* Reinitialize the stream periodically; every case resets its cursor. */
    if (n % 97 == 0) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_read_buffer[i] = (uint8_t)nc_rand();
    }
    /* The angle and fraction decoders read their whole word first, so a
       failing read must stay excluded: clamp the position and keep the
       length sufficient. The delta's first flag read only needs a valid
       position; later reads may fail by keeping the length tight. */
    if (op != 2) {
        if (bits >= 0 && start + (bits >> 3) > NET_BUFFER_SIZE)
            start -= start + (bits >> 3) - NET_BUFFER_SIZE;
    } else if (bit >= 0 && bit <= 6 && start < NET_BUFFER_SIZE) {
        /* Craft the leading flag pair so every delta path is certain. */
        int pattern = (n / 6) % 4;
        if (pattern != 2) {
            uint8_t byte = net_read_buffer[start];
            net_read_buffer[start] = (uint8_t)((byte & ~(uint8_t)(3u << bit)) | (uint8_t)(pattern << bit));
        }
    }
    net_read_position = start;
    net_read_bit = bit;
    net_read_length = NET_BUFFER_SIZE;
    if (op != 2) {
        if (n % 5 == 4 && bits >= 0)
            net_read_length = start + (bits >> 3);
    } else {
        if (n % 4 == 1)
            net_read_length = start;
        else if (n % 4 == 2)
            net_read_length = start + 1;
        else if (n % 4 == 3)
            net_read_length = start + 2;
    }
    float out_value = -1.25f;
    uint32_t word_value = 0x5A5A5A5Au;
    float *out = &out_value;
    uint32_t *word_out = &word_value;
    switch ((n / 97) % 6) {
    case 1: out = (float *)(void *)(net_read_buffer + 12); break;
    case 2: out = (float *)(void *)(net_read_buffer + (start < NET_BUFFER_SIZE ? start : 0)); break;
    case 3: out = (float *)(void *)&net_read_position; break;
    case 4: out = (float *)(void *)&net_read_bit; break;
    case 5: out = (float *)(void *)&net_read_length; break;
    }
    if (op == 2)
        word_out = (uint32_t *)(void *)out;
    nc_set_mxcsr(0x1F80u | ((n & 3u) << 13) | ((n & 4u) ? 0x40u : 0u) | ((n & 8u) ? 0x8000u : 0u));
    uint64_t result;
    if (op == 0)
        result = angle_read(out, bits);
    else if (op == 1)
        result = fraction_read(out, scale, bits);
    else
        result = delta_read(word_out, base, bits);
    uint32_t status = nc_get_mxcsr();
    nc_set_mxcsr(0x1F80);
    uint32_t out_bits;
    memcpy(&out_bits, op == 2 ? (void *)word_out : (void *)out, 4);
    nc_line("%d %d %016llx %08x r%d/%d/%d %08x", op, n,
            (unsigned long long)result, out_bits, net_read_position, net_read_bit,
            net_read_length, status);
    nc_line("buffers %016llx", (unsigned long long)nc_hash(net_read_buffer, NET_BUFFER_SIZE + 16));
}

int main(void)
{
    nc_map_image();
    for (int op = 0; op < 3; op++)
        for (int n = 0; n < nc_cases(2000); n++)
            run_case(op, n);
    return 0;
}
