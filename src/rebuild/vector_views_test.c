#include "vector_views.h"
#include <emmintrin.h>
#include <stdio.h>
#include <string.h>

#define CHECK(condition) do { if (!(condition)) { \
    fprintf(stderr, "Check failed on line %d: %s\n", __LINE__, #condition); return 1; \
} } while (0)

int main(void) {
    __m128 values[2] = {_mm_set_ps(4, 3, 2, 1), _mm_setzero_ps()};
    __m128i integers = _mm_set_epi32(40, 30, 20, 10);
    __m128d doubles = _mm_set_pd(2.5, 1.25);
    __m128 *pointer = values;
    const __m128 readonly = _mm_set1_ps(6);
    volatile __m128 observed = _mm_setzero_ps();
    _Static_assert(_Generic(&SR_VEC_LANES(128, readonly, f32)[0], const float *: 1, default: 0), "retain const");
    _Static_assert(_Generic(&SR_VEC_LANES(128, observed, f32)[0], volatile float *: 1, default: 0), "retain volatile");
    int index = 0;
    float floats[4];
    uint32_t words[4];
    CHECK(SR_VEC_LANES(128, values[0], f32)[2] == 3);
    SR_VEC_LANES(128, values[index++], f32)[1] = 9;
    CHECK(index == 1);
    SR_VEC_PTR_LANES(128, pointer++, f32)[3] = 7;
    CHECK(pointer == values + 1);
    _mm_storeu_ps(floats, _mm_add_ps(values[0], _mm_set1_ps(1)));
    CHECK(floats[0] == 2 && floats[1] == 10 && floats[2] == 4 && floats[3] == 8);
    SR_VEC_LANES(128, integers, u32)[2] = 0xFFFFFFFFu;
    memcpy(words, &integers, sizeof(words));
    CHECK(words[0] == 10 && words[1] == 20 && words[2] == 0xFFFFFFFFu && words[3] == 40);
    SR_VEC_LANES(128, values[1], u32)[0] = 0x80000000u;
    memcpy(words, &values[1], sizeof(words));
    CHECK(words[0] == 0x80000000u && words[1] == 0 && words[2] == 0 && words[3] == 0);
    CHECK(SR_VEC_LANES(128, doubles, f64)[1] == 2.5);
    SR_VEC_LANES(128, doubles, f64)[0] = -4.5;
    CHECK(_mm_cvtsd_f64(doubles) == -4.5);
    puts("SIMD lane reads, writes, bit patterns, and single evaluation passed.");
    return 0;
}
