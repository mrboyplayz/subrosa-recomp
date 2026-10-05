#include "client_leaf.h"
#include <string.h>
#include <emmintrin.h>

__attribute__((naked)) intptr_t sr_client_guard_dispatch(uintptr_t ignored) {
    __asm__("jmp *%rax");
}
/* Export spelling bound by the recovered guard pointer; same x64 ABI. */
extern int64_t guard_dispatch_icall_nop(uint64_t)
    __attribute__((alias("sr_client_guard_dispatch")));

uint32_t sr_client_initialize_timezone(uint32_t *timezone, uint32_t *daylight,
                                      uint32_t *dstbias, uintptr_t *names,
                                      uintptr_t default_names) {
    *timezone = 0x7080;
    *daylight = 1;
    *dstbias = 0xfffff1f0u;
    memcpy(names, &default_names, sizeof(default_names));
    return 0;
}

int sr_client_angle_pair_prepare(uint64_t input_bits, __m128 *result) {
    __m128 input = _mm_castsi128_ps(_mm_cvtsi64_si128((int64_t)input_bits));
    __m128 absolute = _mm_and_ps(input, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, 0x7fffffff)));
    __m128 threshold = _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, 0x39000000));
    unsigned char below;
    /* JB also takes the unordered case; a C less-than expression would lose
       that behavior. COMISS sets the original invalid-operation status. */
    __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(below)
                     : "x"(absolute), "x"(threshold) : "cc");
    if (below) {
        __m128 square = _mm_mul_ps(absolute, absolute);
        __m128 half = _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, 0x3f000000));
        __m128 one = _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, 0x3f800000));
        *result = _mm_unpacklo_ps(input, _mm_sub_ps(one, _mm_mul_ps(square, half)));
        return 1;
    }
    __m128 shift = _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, 0x3fc90fdb));
    __m128 shifted = _mm_add_ss(absolute, shift);
    *result = _mm_unpacklo_ps(input, shifted);
    return 0;
}

int sr_client_double_angle_pair_prepare(uint64_t input_bits, __m128d *result) {
    __m128d input = _mm_castsi128_pd(_mm_cvtsi64_si128((int64_t)input_bits));
    __m128d absolute = _mm_and_pd(input, _mm_castsi128_pd(_mm_set_epi64x(0, INT64_MAX)));
    __m128d threshold = _mm_castsi128_pd(_mm_set_epi64x(0, INT64_C(0x3e40000000000000)));
    unsigned char below;
    __asm__ volatile("comisd %2, %1; setb %0" : "=qm"(below)
                     : "x"(absolute), "x"(threshold) : "cc");
    if (below) {
        __m128d square = _mm_mul_pd(absolute, absolute);
        __m128d half = _mm_castsi128_pd(_mm_set_epi64x(0, INT64_C(0x3fe0000000000000)));
        __m128d one = _mm_castsi128_pd(_mm_set_epi64x(0, INT64_C(0x3ff0000000000000)));
        *result = _mm_unpacklo_pd(input, _mm_sub_pd(one, _mm_mul_pd(square, half)));
        return 1;
    }
    __m128d shift = _mm_castsi128_pd(_mm_set_epi64x(0, INT64_C(0x3ff921fb54442d18)));
    *result = _mm_unpacklo_pd(input, _mm_add_sd(absolute, shift));
    return 0;
}

static void cpu_leaf1(uint32_t *eax, uint32_t *edx, uint32_t *ecx) {
    uint32_t a = 1, b, c = 0, d;
    __asm__ volatile("cpuid" : "+a"(a), "=b"(b), "+c"(c), "=d"(d));
    *eax = a; *edx = d; *ecx = c;
}

uint32_t sr_client_cpu_leaf1_edx(void) {
    uint32_t a, d, c; cpu_leaf1(&a, &d, &c); return d;
}

uint32_t sr_client_cpu_sse2_probe(void) {
    return (sr_client_cpu_leaf1_edx() >> 26) & 1;
}

uint32_t sr_client_cpu_sse41_probe(void) {
    uint32_t a, d, c; cpu_leaf1(&a, &d, &c);
    /* The original unusually tests leaf 1's EAX before querying leaf 1 again. */
    if ((int32_t)a < 1) return 0;
    cpu_leaf1(&a, &d, &c);
    return (c >> 19) & 1;
}

uint32_t sr_client_initialize_math_cpu(uint32_t *primary, uint32_t *secondary) {
    uint32_t a, d, c, enabled = 0;
    *primary = 0;
    cpu_leaf1(&a, &d, &c);
    if ((c & 0x18001000u) == 0x18001000u) {
        uint32_t low, high;
        __asm__ volatile(".byte 0x0f, 0x01, 0xd0" : "=a"(low), "=d"(high) : "c"(0));
        if ((low & 6) == 6) enabled = 1;
        *primary = enabled;
    }
    *secondary = enabled;
    return 0;
}

static uint16_t image_word(const unsigned char *p) {
    uint16_t v; memcpy(&v, p, sizeof(v)); return v;
}
static uint32_t image_dword(const unsigned char *p) {
    uint32_t v; memcpy(&v, p, sizeof(v)); return v;
}

int sr_client_image_address_readonly(const void *image, uintptr_t address) {
    const unsigned char *base = image;
    if (!base || image_word(base) != 0x5a4d) return 0;
    int32_t nt_offset = (int32_t)image_dword(base + 0x3c);
    const unsigned char *nt = (const unsigned char *)((uintptr_t)base + (intptr_t)nt_offset);
    if (image_dword(nt) != 0x4550 || image_word(nt + 0x18) != 0x20b) return 0;
    const unsigned char *section = nt + 0x18 + image_word(nt + 0x14);
    unsigned count = image_word(nt + 6);
    uintptr_t rva = address - (uintptr_t)base;
    for (unsigned i = 0; i < count; ++i, section += 40) {
        uint32_t start = image_dword(section + 12);
        uint32_t end = start + image_dword(section + 8);
        if (rva >= start && rva < end)
            return (image_dword(section + 36) & 0x80000000u) == 0;
    }
    return 0;
}

void sr_client_virtual_abort(void *self) {
    void (**vtable)(void *);
    memcpy(&vtable, self, sizeof(vtable));
    vtable[1](self);
}

uint32_t sr_client_u32_at_16(const void *object) {
    uint32_t value;
    memcpy(&value, (const unsigned char *)object + 16, sizeof(value));
    return value;
}

uint8_t sr_client_initialize_global_variables(void *slot, const void *locale_info) {
    memcpy(slot, &locale_info, sizeof(locale_info));
    return 1;
}

uint32_t sr_client_zero_callback(void) {
    return 0;
}

size_t sr_client_fread_bytes(FILE *stream, void *destination, int count) {
    return fread(destination, 1, (size_t)count, stream);
}

uintptr_t sr_client_call_funclet(uintptr_t address, const uintptr_t *frame,
                               unsigned code, int final_notification) {
    uintptr_t (*callback)(uintptr_t, uintptr_t, unsigned, uintptr_t);
    memcpy(&callback, &address, sizeof(callback));
    uintptr_t result = callback(address, *frame, code, 0x19930520u);
    if (final_notification) {
        /* The original longer entry reloads the frame after the callback.
           Retain the read, including its possible fault, before returning. */
        (void)*(const volatile uintptr_t *)frame;
    }
    return result;
}
