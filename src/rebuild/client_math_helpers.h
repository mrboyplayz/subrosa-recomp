#ifndef SR_CLIENT_MATH_HELPERS_H
#define SR_CLIENT_MATH_HELPERS_H
#include <stdint.h>
#include <stddef.h>

/* Native ASCII comparison at 140265434 returns through EAX. Return the raw
   word so its inferred 64-bit wrapper preserves native zero extension. */
static inline uint32_t sr_client_ascii_strnicmp(const unsigned char *first,
                                               const unsigned char *second, size_t count) {
    while (count) {
        uint32_t left = *first++, right = *second++;
        if (left - 65u <= 25u) left += 32u;
        if (right - 65u <= 25u) right += 32u;
        uint32_t difference = left - right;
        if (difference || !left) return difference;
        --count;
    }
    return 0;
}

/* Native fmod fallback at 140240B80..140240BBC. Keep the x87 FPREM loop,
   status-bit test, exception reset and both pops together: the export lost
   the status output and represented it as an uninitialized C local. */
static inline double sr_client_fmod_x87_tail(double x, double y) {
    __asm__ volatile(
        "ffree %%st(0)\n\t"
        "ffree %%st(1)\n\t"
        "fldl %1\n\t"
        "fldl %0\n\t"
        "fnclex\n\t"
        "1: fprem\n\t"
        "fnstsw %%ax\n\t"
        "andw $0x400, %%ax\n\t"
        "cmpw $0x400, %%ax\n\t"
        "je 1b\n\t"
        "fstpl %0\n\t"
        "fstpl %1"
        : "+m"(x), "+m"(y)
        :
        : "ax", "st", "st(1)", "cc", "memory");
    return x;
}

#endif
