#include "client_leaf.h"
#include "original_fixture.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* The original SIMD helper receives XMM0 directly. Windows x64's normal
   __m128 argument convention would pass a pointer, so bind the register. */
__attribute__((naked, noinline)) static __m128 native_angle_pair(uint64_t bits, const void *entry) {
    __asm__("movq %rcx, %xmm0\n\t"
            "sub $40, %rsp\n\t"
            "call *%rdx\n\t"
            "add $40, %rsp\n\t"
            "ret");
}

__attribute__((naked, noinline)) static uintptr_t dispatch_probe(
    uintptr_t entry, uintptr_t target, const uintptr_t *arguments) {
    __asm__("mov %rcx, %r10\n\t"
            "mov %rdx, %rax\n\t"
            "mov %r8, %r11\n\t"
            "mov 0(%r11), %rcx\n\t"
            "mov 8(%r11), %rdx\n\t"
            "mov 16(%r11), %r8\n\t"
            "mov 24(%r11), %r9\n\t"
            "jmp *%r10");
}

static uint32_t state = 0xa54f12c3u;
static unsigned abort_calls;
static void ignore_abort(void *self) { (void)self; }
static void record_abort(void *self) {
    if (self) ++abort_calls;
}
static uintptr_t funclet_inputs[4];
static uintptr_t funclet_result;
static uintptr_t record_dispatch(uintptr_t a, uintptr_t b, uintptr_t c, uintptr_t d) {
    funclet_inputs[0] = a; funclet_inputs[1] = b;
    funclet_inputs[2] = c; funclet_inputs[3] = d;
    return funclet_result;
}
static uintptr_t record_funclet(uintptr_t address, uintptr_t frame,
                               unsigned code, uintptr_t magic) {
    funclet_inputs[0] = address;
    funclet_inputs[1] = frame;
    funclet_inputs[2] = code;
    funclet_inputs[3] = magic;
    return funclet_result;
}
static uint32_t random32(void) {
    state ^= state << 13;
    state ^= state >> 17;
    state ^= state << 5;
    return state;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: sr_client_leaf_diff_test subrosa.exe\n");
        return 2;
    }
    SrOriginalFixture fixture;
    if (!sr_original_fixture_open(&fixture, argv[1])) return 2;
    unsigned saved_mxcsr = _mm_getcsr();
    unsigned angle_comparisons = 0;
    for (unsigned mode = 0; mode < 16; ++mode) {
        unsigned control = 0x1f80 | ((mode & 3) << 13) |
                           ((mode & 4) ? 0x8000 : 0) | ((mode & 8) ? 0x40 : 0);
        for (unsigned i = 0; i < 4096; ++i) {
            static const uint32_t edges[] = {0, 0x80000000u, 1, 0x80000001u,
                0x007fffffu, 0x00800000u, 0x38ffffffu, 0xb8ffffffu,
                0x7fc00000u, 0x7f800001u};
            uint32_t low = random32() % 0x39000000;
            if (i % 8 == 0) low = 0x7f800001u | (random32() & 0x007fffffu);
            if (i % 8 == 1) low = i & 1 ? 0x38ffffffu : 1;
            low |= random32() & 0x80000000u;
            if (i < sizeof(edges) / sizeof(edges[0])) low = edges[i];
            uint64_t input = ((uint64_t)random32() << 32) | low;
            _mm_setcsr(control);
            __m128 native = native_angle_pair(input, fixture.base + 0x1f8ac0);
            unsigned native_status = _mm_getcsr();
            _mm_setcsr(control);
            __m128 recovered;
            int completed = sr_client_angle_pair_prepare(input, &recovered);
            unsigned recovered_status = _mm_getcsr();
            if (!completed || memcmp(&native, &recovered, sizeof(native)) || native_status != recovered_status) {
                _mm_setcsr(saved_mxcsr);
                fprintf(stderr, "Angle SIMD mismatch mode %u input %llx status %x/%x\n",
                        mode, (unsigned long long)input, native_status, recovered_status);
                sr_original_fixture_close(&fixture); return 1;
            }
            ++angle_comparisons;
        }
    }
    _mm_setcsr(saved_mxcsr);
    unsigned double_comparisons = 0;
    for (unsigned mode = 0; mode < 16; ++mode) {
        unsigned control = 0x1f80 | ((mode & 3) << 13) |
                           ((mode & 4) ? 0x8000 : 0) | ((mode & 8) ? 0x40 : 0);
        for (unsigned i = 0; i < 4096; ++i) {
            static const uint64_t edges[] = {0, UINT64_C(0x8000000000000000), 1,
                UINT64_C(0x8000000000000001), UINT64_C(0x000fffffffffffff),
                UINT64_C(0x0010000000000000), UINT64_C(0x3e3fffffffffffff),
                UINT64_C(0xbe3fffffffffffff), UINT64_C(0x7ff8000000000000),
                UINT64_C(0x7ff0000000000001)};
            uint64_t bits = ((uint64_t)random32() << 32) | random32();
            uint64_t input = bits % UINT64_C(0x3e40000000000000);
            if (i % 8 == 0) input = UINT64_C(0x7ff0000000000001) | (bits & UINT64_C(0x000fffffffffffff));
            input |= bits & UINT64_C(0x8000000000000000);
            if (i < sizeof(edges) / sizeof(edges[0])) input = edges[i];
            _mm_setcsr(control);
            __m128d native = (__m128d)native_angle_pair(input, fixture.base + 0x1f8a50);
            unsigned native_status = _mm_getcsr();
            _mm_setcsr(control);
            __m128d recovered;
            int completed = sr_client_double_angle_pair_prepare(input, &recovered);
            unsigned recovered_status = _mm_getcsr();
            if (!completed || memcmp(&native, &recovered, sizeof(native)) || native_status != recovered_status) {
                _mm_setcsr(saved_mxcsr);
                fprintf(stderr, "Double angle mismatch mode %u input %llx status %x/%x\n",
                        mode, (unsigned long long)input, native_status, recovered_status);
                sr_original_fixture_close(&fixture); return 1;
            }
            ++double_comparisons;
        }
    }
    _mm_setcsr(saved_mxcsr);
    printf("%u original double-angle SIMD and MXCSR comparisons pass\n", double_comparisons);
    printf("%u original angle SIMD comparisons pass, including NaNs and MXCSR\n", angle_comparisons);
    uint32_t (*original_cpu_edx)(void), (*original_sse41)(void), (*original_sse2)(void);
    uint8_t (*original_readonly)(uintptr_t);
    void *probe_address = fixture.base + 0x15e240;
    memcpy(&original_cpu_edx, &probe_address, sizeof(original_cpu_edx));
    probe_address = fixture.base + 0x68f80;
    memcpy(&original_sse41, &probe_address, sizeof(original_sse41));
    probe_address = fixture.base + 0x16e150;
    memcpy(&original_sse2, &probe_address, sizeof(original_sse2));
    probe_address = fixture.base + 0x1f8ff8;
    memcpy(&original_readonly, &probe_address, sizeof(original_readonly));
    for (unsigned trial = 0; trial < 4096; ++trial) {
        uintptr_t query = (uintptr_t)fixture.base + random32();
        if (original_cpu_edx() != sr_client_cpu_leaf1_edx() ||
            original_sse41() != sr_client_cpu_sse41_probe() ||
            original_sse2() != sr_client_cpu_sse2_probe() ||
            !!original_readonly(query) != sr_client_image_address_readonly(fixture.base, query)) {
            fprintf(stderr, "CPU/startup mismatch at trial %u\n", trial);
            sr_original_fixture_close(&fixture); return 1;
        }
    }
    uint32_t nt_offset; memcpy(&nt_offset, fixture.base + 0x3c, 4);
    uint16_t count, optional_size;
    memcpy(&count, fixture.base + nt_offset + 6, 2);
    memcpy(&optional_size, fixture.base + nt_offset + 0x14, 2);
    const unsigned char *section = fixture.base + nt_offset + 0x18 + optional_size;
    for (unsigned i = 0; i < count; ++i, section += 40) {
        uint32_t start, size; memcpy(&start, section + 12, 4); memcpy(&size, section + 8, 4);
        uintptr_t queries[] = {(uintptr_t)fixture.base + start - 1,
            (uintptr_t)fixture.base + start, (uintptr_t)fixture.base + start + size - 1,
            (uintptr_t)fixture.base + start + size};
        for (unsigned j = 0; j < 4; ++j)
            if (!!original_readonly(queries[j]) != sr_client_image_address_readonly(fixture.base, queries[j])) {
                fprintf(stderr, "PE section boundary mismatch\n");
                sr_original_fixture_close(&fixture); return 1;
            }
    }
    printf("16384 CPU/startup comparisons and %u PE boundary checks pass\n", count * 4);
    uint32_t (*original_math_cpu)(void);
    probe_address = fixture.base + 0x25c460;
    memcpy(&original_math_cpu, &probe_address, sizeof(original_math_cpu));
    for (unsigned i = 0; i < 4096; ++i) {
        uint32_t primary = random32(), secondary = random32();
        memcpy(fixture.base + 0x4cbf9e8, &primary, 4);
        memcpy(fixture.base + 0x4cbf9ec, &secondary, 4);
        uint32_t native_return = original_math_cpu();
        uint32_t recovered_return = sr_client_initialize_math_cpu(&primary, &secondary);
        if (native_return != recovered_return ||
            primary != sr_fixture_read32(&fixture, 0x4cbf9e8) ||
            secondary != sr_fixture_read32(&fixture, 0x4cbf9ec)) {
            fprintf(stderr, "Math CPU initialization mismatch\n");
            sr_original_fixture_close(&fixture); return 1;
        }
    }
    printf("4096 original math CPU initialization comparisons pass\n");
    uint32_t (*original_timezone)(void), (*original_startup_zero)(void);
    probe_address = fixture.base + 0x2370d4;
    memcpy(&original_timezone, &probe_address, sizeof(original_timezone));
    probe_address = fixture.base + 0x1fc140;
    memcpy(&original_startup_zero, &probe_address, sizeof(original_startup_zero));
    for (unsigned i = 0; i < 4096; ++i) {
        uint32_t recovered_state[8];
        for (unsigned j = 0; j < 8; ++j) recovered_state[j] = random32();
        memcpy(fixture.base + 0x4cbe6c0, recovered_state, sizeof(recovered_state));
        uint32_t native_result = original_timezone();
        uint32_t recovered_result = sr_client_initialize_timezone(&recovered_state[0],
            &recovered_state[1], &recovered_state[2], (uintptr_t *)&recovered_state[4],
            (uintptr_t)fixture.base + 0x302270);
        if (native_result != recovered_result ||
            memcmp(recovered_state, fixture.base + 0x4cbe6c0, sizeof(recovered_state)) ||
            original_startup_zero() != sr_client_zero_callback()) {
            fprintf(stderr, "Timezone initializer/thunk mismatch\n");
            sr_original_fixture_close(&fixture); return 1;
        }
    }
    printf("8192 original timezone initializer and startup thunk comparisons pass\n");
    for (unsigned i = 0; i < 4096; ++i) {
        uintptr_t arguments[4];
        for (unsigned j = 0; j < 4; ++j) arguments[j] = ((uintptr_t)random32() << 32) | random32();
        funclet_result = ((uintptr_t)random32() << 32) | random32();
        uintptr_t expected = dispatch_probe((uintptr_t)fixture.base + 0x26cf90,
            (uintptr_t)record_dispatch, arguments);
        if (expected != funclet_result || memcmp(arguments, funclet_inputs, sizeof(arguments)) ||
            dispatch_probe((uintptr_t)sr_client_guard_dispatch, (uintptr_t)record_dispatch, arguments) != expected ||
            memcmp(arguments, funclet_inputs, sizeof(arguments))) {
            fprintf(stderr, "Guard dispatch register/return mismatch\n");
            sr_original_fixture_close(&fixture); return 1;
        }
    }
    printf("4096 original guard-dispatch register and return comparisons pass\n");
    uint32_t (*original_read)(const void *);
    uint32_t (*original_zero)(void);
    void (*original_abort)(void *);
    uint8_t (*original_init)(void);
    void *address = fixture.base + 0x205c34;
    memcpy(&original_read, &address, sizeof(original_read));
    address = fixture.base + 0x247cfc;
    memcpy(&original_zero, &address, sizeof(original_zero));
    address = fixture.base + 0x198500;
    memcpy(&original_abort, &address, sizeof(original_abort));
    address = fixture.base + 0x247248;
    memcpy(&original_init, &address, sizeof(original_init));

    unsigned char object[32];
    for (unsigned trial = 0; trial < 4096; ++trial) {
        for (unsigned i = 0; i < sizeof(object); ++i)
            object[i] = (unsigned char)random32();
        if (original_read(object) != sr_client_u32_at_16(object) ||
            original_zero() != sr_client_zero_callback()) {
            fprintf(stderr, "Client leaf mismatch at trial %u\n", trial);
            sr_original_fixture_close(&fixture);
            return 1;
        }
    }
    void (*methods[2])(void *) = {ignore_abort, record_abort};
    struct { void (**vtable)(void *); } virtual_object = {methods};
    original_abort(&virtual_object);
    sr_client_virtual_abort(&virtual_object);
    if (abort_calls != 2) {
        fprintf(stderr, "Virtual abort dispatch mismatch\n");
        sr_original_fixture_close(&fixture);
        return 1;
    }
    void *slot = NULL;
    uint8_t *slot_address = fixture.base + 0x4cbf778;
    if (original_init() != 1) {
        fprintf(stderr, "Original global initializer returned the wrong value\n");
        sr_original_fixture_close(&fixture);
        return 1;
    }
    memcpy(&slot, slot_address, sizeof(slot));
    if (slot != fixture.base + 0x302420) {
        fprintf(stderr, "Original global initializer wrote the wrong address\n");
        sr_original_fixture_close(&fixture);
        return 1;
    }
    memset(slot_address, 0, sizeof(slot));
    if (sr_client_initialize_global_variables(slot_address, fixture.base + 0x302420) != 1) {
        fprintf(stderr, "Recovered global initializer returned the wrong value\n");
        sr_original_fixture_close(&fixture);
        return 1;
    }
    memcpy(&slot, slot_address, sizeof(slot));
    if (slot != fixture.base + 0x302420) {
        fprintf(stderr, "Recovered global initializer wrote the wrong address\n");
        sr_original_fixture_close(&fixture);
        return 1;
    }
    uintptr_t (*callback)(uintptr_t, uintptr_t, unsigned, uintptr_t) = record_funclet;
    uintptr_t callback_address;
    memcpy(&callback_address, &callback, sizeof(callback_address));
    for (unsigned variant = 0; variant < 2; ++variant) {
        uintptr_t (*original_funclet)(uintptr_t, const uintptr_t *, unsigned);
        address = fixture.base + (variant ? 0x20ae90 : 0x20aee0);
        memcpy(&original_funclet, &address, sizeof(original_funclet));
        for (unsigned trial = 0; trial < 4096; ++trial) {
            uintptr_t frame = ((uintptr_t)random32() << 32) | random32();
            unsigned code = random32();
            funclet_result = ((uintptr_t)random32() << 32) | random32();
            uintptr_t original_result = original_funclet(callback_address, &frame, code);
            uintptr_t original_inputs[4];
            memcpy(original_inputs, funclet_inputs, sizeof(original_inputs));
            uintptr_t recovered_result = sr_client_call_funclet(callback_address, &frame, code, variant);
            if (original_result != funclet_result || recovered_result != original_result ||
                memcmp(original_inputs, funclet_inputs, sizeof(original_inputs)) ||
                funclet_inputs[0] != callback_address || funclet_inputs[1] != frame ||
                funclet_inputs[2] != code || funclet_inputs[3] != 0x19930520u) {
                fprintf(stderr, "Funclet mismatch at variant %u trial %u\n", variant, trial);
                sr_original_fixture_close(&fixture);
                return 1;
            }
        }
    }
    sr_original_fixture_close(&fixture);
    printf("4096 original-code leaf comparisons and 8192 funclet comparisons passed, including dispatch and global initialization.\n");
    return 0;
}
