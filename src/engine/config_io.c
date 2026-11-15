/* The generic config-file entry helpers the mode files inline: one "key="
 * line written to or read from the open config file. See config_io.h.
 * The CRT fprintf the write branch tail-calls and the game's number parser
 * at the cursor are still unported, so they keep their exact original
 * prototypes and resolve to the original machine code.
 * 0x14010E080, 0x14010E0D0. */
#include "config_io.h"
#include "text_parser.h"

/* Existing client boundaries, with their original prototypes. */
extern long long sub_1400920F0(long long file, char *format, ...);  /* fprintf */
extern long long sub_1400A3D70(void);    /* number at the cursor, as a 32-bit word */

long long config_int_entry(int32_t *value, const char *key, long long file, int save)
{
    long long result;

    if (save)
        return sub_1400920F0(file, "%s%d\r\n", key, *value);

    result = parser_skip_to_token((const unsigned char *)key);
    if (result) {
        result = sub_1400A3D70();
        *value = (int32_t)result;
    }
    parser_scan->position = 0;
    return result;
}

long long config_string_entry(char *value, const char *key, int value_size, long long file, int save)
{
    long long result;

    if (save)
        return sub_1400920F0(file, "%s%s\r\n", key, value);

    result = parser_skip_to_token((const unsigned char *)key);
    if (result) {
        int32_t position = parser_scan->position;
        int copied = 0;
        if (parser_scan->position < parser_scan->length) {
            char *cursor = value;
            do {
                if (copied >= value_size - 1)
                    break;
                char character = parser_scan->data[position];
                if (character == '\r' || character == '\n')
                    break;
                *cursor = character;
                copied++;
                cursor++;
                position++;
                parser_scan->position = position;
            } while (parser_scan->position < parser_scan->length);
        }
        result = copied;
        value[copied] = 0;
    }
    parser_scan->position = 0;
    return result;
}
