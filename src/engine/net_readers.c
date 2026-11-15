/* Packet readers over the bit stream. See net_rotation.h. */

#include "net_bits.h"
#include "net_rotation.h"

/* 0x140115D20 */
int net_read_signed_bits(int32_t *value, int bits)
{
    uint32_t encoded = 0;
    int32_t decoded;

    net_read_bits(&encoded, bits);
    decoded = (int32_t)encoded;
    if ((decoded & (1 << (bits - 1))) == (1 << (bits - 1)))
        decoded = decoded | (-1 << bits);
    *value = decoded;
    return 1;
}

/* 0x140115BD0 */
int net_read_optional_index(int32_t *value, int bits)
{
    uint32_t encoded = 0;
    int32_t decoded;

    net_read_bits(&encoded, bits);
    decoded = (int32_t)encoded;
    if (decoded == (1 << bits) - 1)
        decoded = -1;
    *value = decoded;
    return 1;
}
