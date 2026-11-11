/* The embedded-text reader at the parser cursor window: prefix match, token
 * search and number parsing. See text_parser.h. The integer parser the
 * 32-bit reader calls and the CRT sscanf the 64-bit reader calls are still
 * unported, so the engine keeps their exact original prototypes and both
 * resolve to the original machine code until they are rewritten.
 */
#include "text_parser.h"

int parser_token_matches(const unsigned char *token)
{
    int32_t position = parser_scan->position;
    int32_t length = parser_scan->length;
    int32_t matched = 0;
    if (position < length) {
        do {
            if (!token[matched])
                break;
            if (token[matched] != parser_scan->data[position])
                break;
            matched++;
            position++;
        } while (position < length);
    }
    return token[matched] == 0;
}

int parser_skip_to_token(const unsigned char *token)
{
    int32_t position = parser_scan->position;
    int32_t length = parser_scan->length;
    while (position < length) {
        if (parser_token_matches(token))
            break;
        position++;
        parser_scan->position = position;
    }
    int32_t token_length = 0;
    while (token[token_length])
        token_length++;
    position += token_length;
    parser_scan->position = position;
    return position < length;
}

/* The original's integer parser over a NUL-terminated byte string, still in
   src/client/. 0x1400A5400 */
extern long long sub_1400A5400(long long text);
/* The original CRT's sscanf entry, still in src/client/. 0x14015B070 */
extern long long crt_sscanf(long long text, char *format, ...);

/* The shared scan of the number readers: advances the cursor to the first
   digit or '-' at or after it (stopping there, or at the length), then
   copies the run of digits and '-' characters into the scratch buffer (at
   most 255 characters, NUL-terminated), advancing the cursor past each
   copied character. */
static void scan_number_text(void)
{
    int32_t position = parser_scan->position;
    int32_t length = parser_scan->length;
    while (position < length) {
        unsigned char character = parser_scan->data[position];
        if ((uint8_t)(character - '0') <= 9 || character == '-')
            break;
        position++;
        parser_scan->position = position;
    }
    int32_t copied = 0;
    if (position < length) {
        do {
            if (copied >= 255)
                break;
            unsigned char character = parser_scan->data[position];
            if ((uint8_t)(character - '0') > 9 && character != '-')
                break;
            parser_number_text[copied] = character;
            copied++;
            position++;
            parser_scan->position = position;
        } while (position < length);
    }
    parser_number_text[copied] = 0;
}

uint32_t parser_read_number(void)
{
    scan_number_text();
    return (uint32_t)sub_1400A5400((long long)(uintptr_t)parser_number_text);
}

uint64_t parser_read_number64(void)
{
    uint64_t parsed = 0;
    scan_number_text();
    crt_sscanf((long long)(uintptr_t)parser_number_text, "%I64u", &parsed);
    return parsed;
}
