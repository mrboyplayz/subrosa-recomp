/* Low-bit-first packet serialization, with x86 shift counts and wrapping
 * arithmetic. A zero or negative bit count still performs the initial
 * bounds check; a successful read of it writes zero to the destination. */
#include <math.h>
#include "net_bits.h"
#include "arith.h"

static uint32_t low_mask(int bits)
{
    return ~(UINT32_MAX << ((uint32_t)bits & 31u));
}

static uint8_t shift_byte(uint8_t value, uint32_t count)
{
    count &= 31u;
    return count >= 8 ? 0 : (uint8_t)(value << count);
}

int net_read_bits(uint32_t *value, int bits)
{
    int32_t position = net_read_position;
    uint32_t result = 0, shift = 0;
    if (position >= NET_BUFFER_SIZE || add_int(position, bits >> 3) > net_read_length)
        return 0;
    int32_t bit = net_read_bit;
    while (bits > 0) {
        result |= ((net_read_buffer[position] >> ((uint32_t)net_read_bit & 31u)) & low_mask(bits)) << (shift & 31u);
        uint32_t room = 8u - (uint32_t)bit;
        if ((uint32_t)bits < room) {
            net_read_bit = add_int(bit, bits);
            break;
        }
        if ((uint32_t)bits == room) {
            net_read_bit = 0;
            net_read_position = add_int(position, 1);
            break;
        }
        position = add_int(position, 1);
        net_read_position = position;
        bits = (int32_t)((uint32_t)bits - room);
        shift += room;
        bit = net_read_bit = 0;
    }
    *value = result;
    return 1;
}

int net_read_bits_scaled(uint32_t *value, int bits, uint32_t scale)
{
    uint32_t result;
    if (!net_read_bits(&result, bits)) return 0;
    *value = result * scale;
    return 1;
}

int net_write_bits(const uint32_t *value, int bits)
{
    int32_t position = net_write_position;
    if (position >= NET_BUFFER_SIZE) return 0;
    uint32_t remaining = *value & low_mask(bits);
    int32_t bit = net_write_bit;
    while (bits > 0) {
        uint8_t mask = shift_byte((uint8_t)(shift_byte(1, (uint32_t)bits) - 1), (uint32_t)bit);
        net_write_buffer[position] &= (uint8_t)~mask;
        net_write_buffer[net_write_position] |= shift_byte((uint8_t)remaining, (uint32_t)net_write_bit);
        uint32_t room = 8u - (uint32_t)net_write_bit;
        if ((uint32_t)bits < room) {
            net_write_bit = add_int(net_write_bit, bits);
            return 1;
        }
        if ((uint32_t)bits == room) {
            net_write_position = add_int(net_write_position, 1);
            net_write_bit = 0;
            return 1;
        }
        position = add_int(net_write_position, 1);
        remaining >>= room & 31u;
        bits = (int32_t)((uint32_t)bits - room);
        net_write_position = position;
        bit = net_write_bit = 0;
    }
    return 1;
}

int net_write_bits_scaled(const uint32_t *value, int bits, uint32_t divisor)
{
    int32_t position = net_write_position;
    if (position >= NET_BUFFER_SIZE) return 0;
    uint32_t remaining = (*value / divisor) & low_mask(bits);
    int32_t bit = net_write_bit;
    while (bits > 0) {
        /* This writer replaces a byte at bit zero, but only ORs it when
         * continuing a partial byte. It does not use the clearing mask. */
        if (bit == 0)
            net_write_buffer[position] = (uint8_t)remaining;
        else
            net_write_buffer[position] |= shift_byte((uint8_t)remaining, (uint32_t)bit);
        uint32_t room = 8u - (uint32_t)net_write_bit;
        if ((uint32_t)bits < room) {
            net_write_bit = add_int(net_write_bit, bits);
            return 1;
        }
        if ((uint32_t)bits == room) {
            net_write_position = add_int(net_write_position, 1);
            net_write_bit = 0;
            return 1;
        }
        position = add_int(net_write_position, 1);
        remaining >>= room & 31u;
        bits = (int32_t)((uint32_t)bits - room);
        net_write_position = position;
        bit = net_write_bit = 0;
    }
    return 1;
}

int net_write_bits_e60(const uint32_t *value, int bits)
{
    net_write_bits(value, bits);
    return 1;
}

int net_write_bits_f70(const uint32_t *value, int bits)
{
    net_write_bits(value, bits);
    return 1;
}

int net_write_angle(const float *angle, int bits)
{
    uint32_t sign = (1u << ((uint32_t)bits & 31u)) >> 1;
    double turns = (double)fabsf(*angle) * ((double)(float)(int64_t)sign * 0.15915494309188485);
    /* CVTTSD2SI is 64-bit here, including its indefinite value on overflow. */
    uint32_t value = (uint32_t)_mm_cvttsd_si64(_mm_set_sd(turns)) & (sign - 1u);
    if (!(*angle >= 0.0f)) value |= sign;
    return net_write_bits(&value, bits);
}
