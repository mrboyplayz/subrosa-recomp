#include "net_bits.h"
#include "arith.h"

/* SHL masks its count to five bits. In particular, count 32 makes this
   mask zero; replacing it with UINT32_MAX would change the protocol. */
static uint32_t low_mask(int bits)
{
    return ~(UINT32_MAX << ((uint32_t)bits & 31u));
}

static uint8_t shifted_byte(uint32_t value, uint32_t bit)
{
    return (uint8_t)((value & 255u) << (bit & 31u));
}

int net_read_bits(uint32_t *value, int bits)
{
    int32_t position = net_read_position;
    if (position >= NET_BUFFER_SIZE || add_int(position, bits >> 3) > net_read_length)
        return 0;
    uint32_t result = 0, shift = 0;
    uint32_t bit = (uint32_t)net_read_bit;
    while (bits > 0) {
        uint32_t part = net_read_buffer[position] >> ((uint32_t)net_read_bit & 31u);
        result |= (part & low_mask(bits)) << (shift & 31u);
        uint32_t room = 8u - bit;
        if ((uint32_t)bits < room) {
            net_read_bit = add_int((int32_t)bit, bits);
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
        bit = 0;
        net_read_bit = 0;
    }
    *value = result;
    return 1;
}

int net_read_bits_scaled(uint32_t *value, int bits, uint32_t scale)
{
    uint32_t result;
    if (!net_read_bits(&result, bits))
        return 0;
    *value = result * scale;
    return 1;
}

int net_write_bits(const uint32_t *value, int bits)
{
    int32_t position = net_write_position;
    if (position >= NET_BUFFER_SIZE)
        return 0;
    uint32_t remaining = *value & low_mask(bits);
    uint32_t bit = (uint32_t)net_write_bit;
    while (bits > 0) {
        uint8_t clear = (uint8_t)(low_mask(bits) << (bit & 31u));
        net_write_buffer[position] &= (uint8_t)~clear;
        net_write_buffer[net_write_position] |= shifted_byte(remaining, (uint32_t)net_write_bit);
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
        bit = 0;
        net_write_bit = 0;
    }
    return 1;
}

int net_write_bits_scaled(const uint32_t *value, int bits, uint32_t divisor)
{
    int32_t position = net_write_position;
    if (position >= NET_BUFFER_SIZE)
        return 0;
    uint32_t remaining = (*value / divisor) & low_mask(bits);
    uint32_t bit = (uint32_t)net_write_bit;
    while (bits > 0) {
        /* The scaled writer replaces at bit zero and ORs at other bit
           positions. It does not clear the range like the basic writer. */
        if (bit == 0)
            net_write_buffer[position] = (uint8_t)remaining;
        else
            net_write_buffer[position] |= shifted_byte(remaining, bit);
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
        bit = 0;
        net_write_bit = 0;
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
