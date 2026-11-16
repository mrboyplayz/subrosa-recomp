/* Token scanners 0x1400C8AD0 / 0x1400C8BA0, copied from the original
 * executable. */
#include "recovery_0c0000.h"

/* The body the two scanners share; allow_dot selects the only difference
 * between them, the '.' compare of 0x1400C8AD0's copy loop (the original
 * has it as cmp $0x2e,%cl at 0x1400C8B5C; 0x1400C8BA0 has no such test).
 *
 * Skips characters that are not alnum (a NUL stops the skip too) until
 * *cursor reaches 62, then copies token characters into out until a NUL
 * (which is not copied) or *cursor reaches 62. *cursor advances past
 * every character consumed, on both paths. out is NUL terminated at the
 * token length even when nothing was read, and the result is 1 only when
 * at least one character was copied. */
static int recovery_scan_token_body(uint8_t *out, const uint8_t *src, int *cursor, int allow_dot)
{
    int pos = *cursor;
    int n = 0;

    if (pos < 62) {
        while (pos < 62) {
            unsigned int c = src[pos];
            if ((uint8_t)(c - 'a') <= 0x19u || (uint8_t)(c - 'A') <= 0x19u
                || (uint8_t)(c - '0') <= 9u || c == 0)
                break;
            (*cursor)++;
            pos++;
        }
        if (pos < 62) {
            while (pos < 62) {
                unsigned int c = src[pos];
                if ((uint8_t)(c - 'a') > 0x19u && (uint8_t)(c - 'A') > 0x19u
                    && (uint8_t)(c - '0') > 9u && !(allow_dot && c == '.'))
                    break;
                if (c == 0)
                    break;
                out[n] = (uint8_t)c;
                n++;
                (*cursor)++;
                pos++;
            }
        }
    }
    out[n] = 0;
    return n > 0;
}

/* 0x1400C8AD0: '.' is part of a token. */
int recovery_scan_token(uint8_t *out, const uint8_t *src, int *cursor)
{
    return recovery_scan_token_body(out, src, cursor, 1);
}

/* 0x1400C8BA0: alnum only; the '.' case is absent from the original. */
int recovery_scan_token_no_dot(uint8_t *out, const uint8_t *src, int *cursor)
{
    return recovery_scan_token_body(out, src, cursor, 0);
}
