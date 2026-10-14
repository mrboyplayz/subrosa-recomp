/* Real bit reads, delta decoders, quaternion decoder and matrix construction:
   no callee hooks. Compares all six engine routines with the original PE. */
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS uint64_t net_read_angle(float *, int);
MS uint64_t net_read_position_delta(uint32_t *, int32_t, int);
MS uint64_t net_read_component_delta(int32_t *, int32_t, int);
MS void net_decode_rotation(float *, const int32_t *);
MS uint64_t net_read_item_update(int, int);
MS uint64_t net_read_item_spawn(int);
#endif
#define G(type, address) (*(type *)D(address))
#define RBUF 0x1853AD424ULL
#define RPOS 0x1853AD41CULL
#define RBIT 0x1853AD420ULL
#define RLEN 0x1853AD418ULL
#define HIST 0x16B2A2254ULL
#define SMALL 0x165D84960ULL
#define LARGE 0x165D84964ULL
#define UNCHANGED 0x16B2A224CULL
#define TICK 0x183EBFD34ULL
#define ITEM(i) (0x182BBB180ULL + 0x1B80ULL * (uint64_t)(i))
#define SNAP(f, i) (0x160FFF568ULL + 0x4DC00ULL * (uint64_t)(f) + 36ULL * (uint64_t)(i))
static uint32_t random_state = 0x13572;
static uint32_t random_word(void) {
    random_state = random_state * 1664525u + 1013904223u;
    return random_state;
}
static uint32_t checksum(uint64_t address, size_t bytes) {
    uint32_t h = 2166136261u;
    const uint8_t *data = D(address);
    for (size_t i = 0; i < bytes; ++i) h = (h ^ data[i]) * 16777619u;
    return h;
}
static void print_words(const char *label, uint64_t address, int count) {
    printf("%s", label);
    for (int i = 0; i < count; ++i) printf(" %08x", G(uint32_t, address + 4u * i));
    putchar('\n');
}
static unsigned write_cursor;
static void field(uint32_t value, int bits) {
    for (int i = 0; i < bits; ++i, ++write_cursor) {
        uint8_t *byte = D(RBUF + write_cursor / 8);
        unsigned mask = 1u << (write_cursor & 7u);
        *byte = (uint8_t)((*byte & ~mask) | (((value >> ((unsigned)i & 31u)) & 1u) * mask));
    }
}
static void begin_packet(int c) {
    for (int i = 0; i < 128; ++i) G(uint8_t, RBUF + i) = (uint8_t)random_word();
    int byte = c % 9, bit = (c / 9) % 8;
    G(int32_t, RPOS) = byte; G(int32_t, RBIT) = bit; G(int32_t, RLEN) = 128;
    write_cursor = byte * 8u + bit;
}
static void position_field(int kind, int bits, uint32_t value) {
    field(kind != 0, 1);
    if (kind) field(kind == 2, 1);
    field(value, kind == 0 ? 4 : kind == 1 ? 9 : bits);
}
static void component_field(int kind, int bits, uint32_t value) {
    if (G(int32_t, UNCHANGED)) {
        field(kind != 3, 1);
        if (kind == 3) return;
    }
    field(kind != 0, 1);
    if (kind) field(kind == 2, 1);
    field(value, kind == 0 ? G(int32_t, SMALL) : kind == 1 ? G(int32_t, LARGE) : bits);
}
static int width(int c) {
    static const int widths[] = {4, 9, 14, 28, 1, 8, 31, 0, 32, 33, 40, -1};
    return widths[c % 12];
}
static uint32_t boundary_value(int c) {
    static const uint32_t values[] = {
        0, 1, 7, 8, 15, 127, 128, 255, 256, 511, 1022, 1023,
        4094, 4095, 8191, 8192, 16383, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF
    };
    return c % 2 ? random_word() : values[(c / 2) % 20];
}
static uint64_t normalized(uint64_t value) {
    return value == (uint64_t)(uintptr_t)D(0x16B165F60ULL) ? 0x16B165F60ULL : value;
}
static void cursor(const char *label, uint64_t result) {
    printf("%s ret %016" PRIx64 " cursor %d/%d mxcsr %08x packet %08x\n", label,
           normalized(result), G(int32_t, RPOS), G(int32_t, RBIT), _mm_getcsr(), checksum(RBUF, 128));
}
static void quaternion_order(int c) {
    int order[4] = {3, 1, 2, 0};
    if (c % 3) {
        for (int i = 3; i > 0; --i) {
            int other = random_word() % (i + 1), temp = order[i];
            order[i] = order[other]; order[other] = temp;
        }
    }
    for (int i = 0; i < 4; ++i) G(int32_t, 0x140301DD8ULL + 4u * i) = order[i];
    print_words("order", 0x140301DD8ULL, 4);
}
int main(int argc, char **argv) {
    init_image(argc, argv);
    setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    int cases = argc > 3 ? atoi(argv[3]) : 10000;
    for (int c = 0; c < cases; ++c) {
        printf("== case %d\n", c);
        unsigned rounding = ((c / 12) % 4) << 13;
        uint32_t input = boundary_value(c), baseline = boundary_value(c + 4), output = 0xDEADBEEF;
        uint64_t result;
        int bits = width(c), kind = (c / 12) % 3;
        G(int32_t, UNCHANGED) = (c / 3) % 2;
        G(int32_t, SMALL) = width(c + 5); G(int32_t, LARGE) = width(c + 8);
        for (int i = 0; i < 256; ++i) G(uint32_t, HIST + 4u * i) = c % 11 ? random_word() : 0xFFFFFFFFu;
        begin_packet(c); field(input, bits);
        _mm_setcsr(0x1F80 | rounding);
        float angle = 0.0f;
#ifdef ENGINE
        result = net_read_angle(&angle, bits);
#else
        result = ((MS uint64_t (*)(float *, int))F(0x14018D440ULL))(&angle, bits);
#endif
        memcpy(&output, &angle, 4);
        printf("angle bits %d input %08x out %08x\n", bits, input, output);
        cursor("angle", result);

        begin_packet(c + 1); position_field(kind, bits, input);
        output = 0xDEADBEEF; _mm_setcsr(0x1F80 | rounding);
#ifdef ENGINE
        result = net_read_position_delta(&output, (int32_t)baseline, bits);
#else
        result = ((MS uint64_t (*)(uint32_t *, int32_t, int))F(0x14018D510ULL))(&output, (int32_t)baseline, bits);
#endif
        printf("position kind %d bits %d base %08x in %08x out %08x\n", kind, bits, baseline, input, output);
        cursor("position", result);

        kind = (c / 12) % (G(int32_t, UNCHANGED) ? 4 : 3);
        begin_packet(c + 2); component_field(kind, bits, input);
        output = 0xDEADBEEF; _mm_setcsr(0x1F80 | rounding);
#ifdef ENGINE
        result = net_read_component_delta((int32_t *)&output, (int32_t)baseline, bits);
#else
        result = ((MS uint64_t (*)(int32_t *, int32_t, int))F(0x14018D5E0ULL))((int32_t *)&output, (int32_t)baseline, bits);
#endif
        printf("component kind %d bits %d small %d large %d unchanged %d base %08x in %08x out %08x hist %08x\n",
               kind, bits, G(int32_t, SMALL), G(int32_t, LARGE), G(int32_t, UNCHANGED), baseline, input, output, checksum(HIST, 1024));
        cursor("component", result);

        quaternion_order(c);
        int32_t packed[4] = {c % 4, (int32_t)boundary_value(c + 6), (int32_t)boundary_value(c + 8), (int32_t)boundary_value(c + 10)};
        if (c % 3) for (int i = 1; i < 4; ++i) packed[i] = (int32_t)(random_word() % 8193) - 4096;
        if (c % 19 == 0) packed[1] = packed[2] = packed[3] = 0;
        float rotation[11]; for (int i = 0; i < 11; ++i) memcpy(&rotation[i], &baseline, 4);
        _mm_setcsr(0x1F80 | rounding);
#ifdef ENGINE
        net_decode_rotation(rotation + 1, packed);
#else
        ((MS void (*)(float *, const int32_t *))F(0x140191F90ULL))(rotation + 1, packed);
#endif
        printf("rotation packed %d %d %d %d mxcsr %08x:", packed[0], packed[1], packed[2], packed[3], _mm_getcsr());
        for (int i = 0; i < 11; ++i) { uint32_t word; memcpy(&word, &rotation[i], 4); printf(" %08x", word); } putchar('\n');

        int item = c % 3 == 0 ? 0 : c % 3 == 1 ? 1023 : (int)(random_word() % 1024);
        uint64_t address = ITEM(item);
        for (int i = -16; i < 0x1B90; ++i) G(uint8_t, address + i) = (uint8_t)random_word();
        int types[] = {18, 26, 39, 0, 45, 255};
        int type = types[c % 6];
        begin_packet(c + 3); field(type, 8); field(input, 10); field(baseline, 10); field(input >> 3, 4);
        if (type == 39) { field(input >> 7, 5); field(baseline >> 6, 5); }
        _mm_setcsr(0x1F80 | rounding);
#ifdef ENGINE
        result = net_read_item_spawn(item);
#else
        result = ((MS uint64_t (*)(int))F(0x14018DB20ULL))(item);
#endif
        printf("spawn item %d hash %08x guards %08x/%08x\n", item, checksum(address, 0x1B80), checksum(address - 16, 16), checksum(address + 0x1B80, 16));
        print_words("spawn header", address, 13); print_words("spawn fields", address + 0x344, 12);
        cursor("spawn", result);

        int frame = c % 256, previous = c % 7 == 0 ? frame : (int)(random_word() % 256);
        uint64_t current = SNAP(frame, item), prior = SNAP(previous, item);
        for (int i = -8; i < 44; i += 4) {
            G(uint32_t, current + i) = random_word(); G(uint32_t, prior + i) = random_word();
        }
        for (int i = 0; i < 3; ++i) {
            G(int32_t, prior + 4u * i) = (int32_t)boundary_value(c + i);
            G(int32_t, prior + 16u + 4u * i) = (int32_t)(random_word() % 6001) - 3000;
        }
        G(int32_t, address + 0x14) = type;
        G(int32_t, address + 0x354) = (c / 6) % 3 == 0 ? 0 : (int32_t)random_word();
        G(int32_t, TICK) = (int32_t)baseline;
        G(int32_t, SMALL) = 4; G(int32_t, LARGE) = 9;
        begin_packet(c + 4); field(previous, 8);
        for (int i = 0; i < 3; ++i) position_field((c + i) % 3, 28, boundary_value(c + i + 3));
        field(c % 4, 2);
        for (int i = 0; i < 3; ++i) component_field((c + i) % (G(int32_t, UNCHANGED) ? 4 : 3), 14, boundary_value(c + i + 7));
        if (type == 18) { field(input, 4); field(baseline, 4); field(input, 30); }
        if (type == 26) field(input, 1);
        if (type == 39) field((c / 6) % 3 == 0 ? 4095u : input, 12);
        _mm_setcsr(0x1F80 | rounding);
#ifdef ENGINE
        result = net_read_item_update(frame, item);
#else
        result = ((MS uint64_t (*)(int, int))F(0x14018D6D0ULL))(frame, item);
#endif
        printf("update item %d frame %d prior %d type %d hash %08x guards %08x/%08x hist %08x\n", item, frame, previous, type,
               checksum(address, 0x1B80), checksum(address - 16, 16), checksum(address + 0x1B80, 16), checksum(HIST, 1024));
        print_words("current", current - 8, 13); print_words("baseline", prior - 8, 13);
        print_words("position", address + 0x5C, 3); print_words("matrix", address + 0xA4, 9);
        print_words("cash", address + 0x2A0, 3); print_words("history", address + 0x344, 12);
        cursor("update", result);
    }
    fprintf(stderr, "[%s] %d cases, six routines with real callees\n", img_name, cases);
    return 0;
}
