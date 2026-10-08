/* Math routines of the original's C runtime. See crt.h. */
#include <string.h>
#include "arith.h"
#include "crt.h"

float crt_asinf(float x)
{
    uint32_t bits;
    unsigned exponent;
    float a, z, s = 0.0f, p, result;

    memcpy(&bits, &x, sizeof bits);
    exponent = (bits >> 23) & 0xFF;
    if ((bits & 0x7FFFFFFF) > 0x7F800000)
        return handle_nanf_sr((int)bits);
    if (exponent < 0x71) {                   /* |x| below 2^-14: asin(x) is x, inexact */
        set_statfp(0x20);
        return x;
    }
    if (exponent >= 0x7F) {                  /* |x| at least 1 */
        if (x == 1.0f) {
            set_statfp(0x20);
            return 0x1.921fb6p+0f;
        }
        if (x == -1.0f) {
            set_statfp(0x20);
            return -0x1.921fb6p+0f;
        }
        return handle_errorf("asinf", 14, (int)0xFFC00000, 1, 8, 0x21, x, 0.0f, 1);
    }

    a = (int32_t)bits < 0 ? -x : x;
    if (exponent >= 0x7E) {                  /* |x| from 1/2: asin(a) = pi/2 - 2 asin(sqrt((1 - a) / 2)) */
        z = (1.0f - a) * 0.5f;
        s = sqrt_float(z);
        a = s;
    } else {
        z = a * a;
    }
    p = ((((-0x1.b67fc2p-7f - z * 0x1.039cd6p-8f) * z - 0x1.cf17bap-5f) * z + 0x1.7929b8p-3f) * z)
        / (0x1.1adf4ap+0f - z * 0x1.ac3e1ap-1f);
    if (exponent < 0x7E) {
        result = p * a + a;
    } else {
        /* s split into a high part f and s - f, for an extra-precise 2 sqrt(z) */
        uint32_t f_bits;
        float f, c;

        memcpy(&f_bits, &s, sizeof f_bits);
        f_bits &= 0xFFFF0000;
        memcpy(&f, &f_bits, sizeof f);
        c = (z - f * f) / (f + s);
        c = 0x1.4442d0p-24f - (c + c);
        result = 0x1.921fb4p-1f - (((s * 2.0f) * p - c) - (0x1.921fb4p-1f - f * 2.0f));
    }
    if ((int32_t)bits < 0)
        result = -result;
    return result;
}
