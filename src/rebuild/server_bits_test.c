#include "server_bits.h"
#include <stdio.h>
#include <cpuid.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #x); return 1; } } while (0)
int main(void) {
    uint32_t a, b, c, d, ea, eb, ec, ed;
    sr_server_cpuid(0, 0, &a, &b, &c, &d);
    __cpuid_count(0, 0, ea, eb, ec, ed);
    CHECK(a == ea && b == eb && c == ec && d == ed);
    sr_server_cpuid(1, 0, &a, &b, &c, &d);
    __cpuid_count(1, 0, ea, eb, ec, ed);
    /* EBX contains a logical processor ID which can change after migration. */
    CHECK(a == ea && (b & 0x00ffffffu) == (eb & 0x00ffffffu) && c == ec && d == ed);
    const uint32_t patterns[] = {0, 0x80000000u, 1, 0x7f800000u, 0xff800000u, 0x7fc12345u};
    for (unsigned i = 0; i < sizeof(patterns) / sizeof(patterns[0]); ++i) {
        float value = COERCE_FLOAT(patterns[i]);
        CHECK(COERCE_UNSIGNED_INT(value) == patterns[i]);
    }
    uint64_t bits = UINT64_C(0xfff8123456789abc), actual;
    double value = COERCE_DOUBLE(bits);
    memcpy(&actual, &value, sizeof(actual));
    CHECK(actual == bits);
    unsigned calls = 0;
    CHECK(COERCE_UNSIGNED_INT((++calls, -0.0f)) == 0x80000000u);
    CHECK(calls == 1);
    uint32_t low = 0, high = 0;
    __SET_PAIR__(high, low, (++calls, UINT64_C(0xabcdef0187654321)));
    CHECK(calls == 2 && high == 0xabcdef01u && low == 0x87654321u);
    uint32_t lanes[4] = {0, 0xffffffffu, 0x80000000u, 0};
    CHECK(SDWORD1(lanes) == -1 && SDWORD2(lanes) == INT32_MIN);
    SDWORD1(lanes) = 7;
    CHECK(lanes[1] == 7);
    puts("PASS: server bit casts, signed lanes and pair splitting.");
    return 0;
}
