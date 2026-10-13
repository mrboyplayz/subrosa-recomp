/* Bit streams of network packets: the one being written and the one being
 * read, each a byte position, a bit position within that byte and a 64 KB
 * buffer. Bits go in from the lowest bit of each byte up.
 */
#include "net.h"
#include "memory.h"

#define write_position SR_GLOBAL(int32_t, 0x18539D3FCULL)
#define write_bit SR_GLOBAL(int32_t, 0x18539D400ULL)
#define write_buffer (&SR_GLOBAL(uint8_t, 0x18539D404ULL))
#define read_length SR_GLOBAL(int32_t, 0x1853AD418ULL)
#define read_position SR_GLOBAL(int32_t, 0x1853AD41CULL)
#define read_bit SR_GLOBAL(int32_t, 0x1853AD420ULL)
#define read_buffer (&SR_GLOBAL(uint8_t, 0x1853AD424ULL))

#define NET_BUFFER_SIZE 0x10000

/* The original's shifts: 32-bit counts are taken modulo 32, and a byte
   shifted by 8 or more (modulo 32) is 0. */
static uint32_t shift_left(uint32_t value, uint32_t count)
{
    return value << (count & 31);
}

static uint32_t shift_right(uint32_t value, uint32_t count)
{
    return value >> (count & 31);
}

static uint8_t byte_shift_left(uint8_t value, uint32_t count)
{
    count &= 31;
    return count >= 8 ? 0 : (uint8_t)(value << count);
}

int net_write_bits(const uint32_t *value, int bits)
{
    int32_t position = write_position, bit;
    uint32_t v;

    if (position >= NET_BUFFER_SIZE)
        return 0;
    v = *value & ~shift_left(0xFFFFFFFFu, (uint32_t)bits);
    if (bits <= 0)
        return 1;
    bit = write_bit;
    for (;;) {
        uint32_t room;

        /* Clear the bits about to be written, then write them. */
        write_buffer[position] &= (uint8_t)~byte_shift_left((uint8_t)(byte_shift_left(1, (uint32_t)bits) - 1),
                                                             (uint32_t)bit);
        write_buffer[write_position] |= byte_shift_left((uint8_t)v, (uint32_t)write_bit);
        room = 8u - (uint32_t)write_bit;
        if ((uint32_t)bits < room) {
            write_bit += bits;
            return 1;
        }
        if ((uint32_t)bits == room) {
            write_position++;
            write_bit = 0;
            return 1;
        }
        position = write_position + 1;
        v = shift_right(v, room);
        bits -= (int)room;
        write_position = position;
        write_bit = 0;
        bit = 0;
        if (bits <= 0)
            return 1;
    }
}

int net_write_bits_scaled(const uint32_t *value, int bits, uint32_t divisor)
{
    int32_t position = write_position, bit;
    uint32_t v;

    if (position >= NET_BUFFER_SIZE)
        return 0;
    v = (*value / divisor) & ~shift_left(0xFFFFFFFFu, (uint32_t)bits);
    if (bits <= 0)
        return 1;
    bit = write_bit;
    for (;;) {
        uint32_t room;

        /* Unlike net_write_bits(), the byte is not cleared first: a write at
           bit 0 replaces it, later ones are ORed in. */
        if (bit == 0)
            write_buffer[position] = (uint8_t)v;
        else
            write_buffer[position] |= byte_shift_left((uint8_t)v, (uint32_t)bit);
        room = 8u - (uint32_t)write_bit;
        if ((uint32_t)bits < room) {
            write_bit += bits;
            return 1;
        }
        if ((uint32_t)bits == room) {
            write_position++;
            write_bit = 0;
            return 1;
        }
        position = write_position + 1;
        v = shift_right(v, room);
        bits -= (int)room;
        write_position = position;
        write_bit = 0;
        bit = 0;
        if (bits <= 0)
            return 1;
    }
}

int net_write_angle(const float *angle, int bits)
{
    uint32_t half = shift_left(1, (uint32_t)bits) >> 1, v;
    double turns = (double)__builtin_fabsf(*angle) * ((double)(float)(int64_t)half * 0.15915494309188485);

    v = (uint32_t)(int64_t)turns & (half - 1);
    if (!(*angle >= 0.0f))
        v |= half;
    return net_write_bits(&v, bits);
}

int net_read_bits(uint32_t *value, int bits)
{
    int32_t position = read_position, bit;
    uint32_t v = 0, shift = 0;

    if (position >= NET_BUFFER_SIZE || (int32_t)((uint32_t)position + (uint32_t)(bits >> 3)) > read_length)
        return 0;
    if (bits > 0) {
        bit = read_bit;
        for (;;) {
            uint32_t room;

            v |= shift_left(shift_right(read_buffer[position], (uint8_t)read_bit) &
                                ~shift_left(0xFFFFFFFFu, (uint32_t)bits),
                            shift);
            room = 8u - (uint32_t)bit;
            if ((uint32_t)bits < room) {
                read_bit = bit + bits;
                break;
            }
            if ((uint32_t)bits == room) {
                read_bit = 0;
                read_position = position + 1;
                break;
            }
            position++;
            bit = 0;
            bits -= (int)room;
            read_position = position;
            shift += room;
            read_bit = 0;
            if (bits <= 0)
                break;
        }
    }
    *value = v;
    return 1;
}

int net_read_bits_scaled(uint32_t *value, int bits, int32_t scale)
{
    uint32_t v;

    if (!net_read_bits(&v, bits))
        return 0;
    *value = (uint32_t)scale * v;
    return 1;
}

int net_read_bits_or_none(int32_t *value, int bits)
{
    uint32_t v = 0;   /* the original leaves this unset when the read fails */

    net_read_bits(&v, bits);
    *value = v == shift_left(1, (uint32_t)bits) - 1 ? -1 : (int32_t)v;
    return 1;
}

int net_read_bits_signed(int32_t *value, int bits)
{
    uint32_t v = 0;   /* the original leaves this unset when the read fails */
    uint32_t sign = shift_left(1, (uint32_t)(bits - 1));

    net_read_bits(&v, bits);
    *value = (int32_t)((v & sign) == sign ? v | shift_left(0xFFFFFFFFu, (uint32_t)bits) : v);
    return 1;
}
