#include "text_helpers.h"
#include "arith.h"

uint32_t text_compare_bytes(const unsigned char *first, const unsigned char *second)
{
    for (;;) {
        unsigned char a = *first++, b = *second++;
        if (a != b)
            return a < b ? UINT32_MAX : 1u;
        if (!a)
            return 0;
    }
}

uint32_t text_label_id(const unsigned char *text, uint32_t seed)
{
    uint32_t *table = text_label_crc_table;
    if (!table[0]) {
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t crc = i;
            for (int bit = 0; bit < 8; bit++)
                crc = (crc >> 1) ^ ((0u - (crc & 1u)) & 0xEDB88320u);
            table[i] = crc;
        }
    }
    while (*text) {
        seed = (seed >> 8) ^ table[(uint8_t)seed ^ *text];
        text++;
    }
    return ~seed;
}

int text_scan_matches(const unsigned char *needle)
{
    int32_t position = text_scan->position;
    while (position < text_scan->length && *needle && *needle == text_scan->data[position]) {
        position = add_int(position, 1);
        needle++;
    }
    return *needle == 0;
}

int text_scan_past(const unsigned char *needle)
{
    int32_t position = text_scan->position;
    int32_t length = text_scan->length;
    while (position < length) {
        if (text_scan_matches(needle))
            break;
        position = add_int(position, 1);
        text_scan->position = position;
    }
    uint32_t needle_length = 0;
    while (needle[needle_length])
        needle_length++;
    position = add_int(position, (int32_t)needle_length);
    text_scan->position = position;
    return position < length;
}

uint32_t text_copy_visible_label(unsigned char *out, const unsigned char *source)
{
    unsigned char *at = out;
    unsigned char byte;
    do {
        byte = *source++;
        *at++ = byte;
    } while (byte);

    uint32_t visible = 0;
    while (visible < 255 && out[visible] && !(out[visible] == '#' && out[visible + 1] == '#'))
        visible++;
    out[visible] = 0;
    return visible;
}
