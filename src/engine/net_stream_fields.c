#include "net_stream_fields.h"

/* Unrestored stream transfer boundary; preserves the client's ABI. */
extern int64_t sub_14006C360(int stream, uint32_t *value, int bits, int writing);

/* 0x14006C510: the all-ones field represents an absent index. As with the
 * original x86 shift, only the low five bits of the width participate. */
uint64_t net_stream_optional_index(int stream, uint32_t *value, char bits, int writing)
{
    if (writing)
        return (uint64_t)sub_14006C360(stream, value, bits, writing);
    uint32_t field;
    sub_14006C360(stream, &field, bits, 0);
    if (field == (1u << ((unsigned char)bits & 31u)) - 1u)
        field = UINT32_MAX;
    *value = field;
    return field;
}

/* 0x14006C570: sign extension with the original masked shift counts and
 * zero-extended EAX compatibility return. */
uint64_t net_stream_signed_field(int stream, uint32_t *value, char bits, int writing)
{
    if (writing)
        return (uint64_t)sub_14006C360(stream, value, bits, writing);
    uint32_t field;
    sub_14006C360(stream, &field, bits, 0);
    uint32_t sign = 1u << (((unsigned char)bits - 1u) & 31u);
    uint32_t result = field & sign;
    if (result == sign) {
        field |= UINT32_MAX << ((unsigned char)bits & 31u);
        result = field;
    }
    *value = field;
    return result;
}
