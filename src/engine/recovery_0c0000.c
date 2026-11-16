/* Token scanners 0x1400C8AD0 / 0x1400C8BA0 and the bilinear value noise
 * 0x1400D47A0, copied from the original executable. */
#include "recovery_0c0000.h"
#include "arith.h"

/* Corner value of the noise lattice: the 15731 / 789221 / 771171059 hash
 * chain of the original's 0x1400D48xx. The 32-bit products wrap exactly
 * as the IMULs do (arith.h), and the result scales by 2^-30 (the float
 * 0x30800000 at 0x140278050; 1.0f is at 0x1402783F4). */
static float recovery_noise_corner(int32_t node)
{
    /* XOR the node with itself shifted left 13, then the hash chain. */
    uint32_t k = (uint32_t)node;
    k ^= k << 13;
    uint32_t t = multiply_int(15731, multiply_int((int32_t)k, (int32_t)k)) + 789221u;
    uint32_t r = (multiply_int((int32_t)t, (int32_t)t) - 771171059u) & 0x7FFFFFFFu;
    return 1.0f - (float)r * 9.3132257461547851e-10f;
}

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

/* 0x1400D47A0: bilinear blend of four hashed lattice corners. The lattice
 * row is 57 values wide (IMUL $0x39), and the wrap applies the mask after
 * the +1, so x1 = (x0+1) & mask and y1 = (y0+1) & mask. The blends use
 * the fractional parts directly (no smoothstep), in the original's order
 * of floating-point operations: top = n00*(1-fx) + n10*fx, then
 * top*(1-fy) + bottom*fy. */
__m128 recovery_noise_bilinear(float x, float y, int mask)
{
    int32_t x0 = truncate_float(x);
    int32_t y0 = truncate_float(y);
    int32_t x1 = add_int(x0, 1) & mask;
    int32_t y1 = add_int(y0, 1) & mask;

    int32_t row0 = multiply_int(y0, 57);
    int32_t row1 = multiply_int(y1, 57);
    int32_t n00 = add_int(row0, x0);
    int32_t n10 = add_int(row0, x1);
    int32_t n01 = add_int(row1, x0);
    int32_t n11 = add_int(row1, x1);

    float fx = x - (float)x0;
    float fy = y - (float)y0;
    float top = recovery_noise_corner(n00) * (1.0f - fx) + recovery_noise_corner(n10) * fx;
    float bottom = recovery_noise_corner(n01) * (1.0f - fx) + recovery_noise_corner(n11) * fx;
    return _mm_set_ss(top * (1.0f - fy) + bottom * fy);
}
