#include "camera.h"
#include "original_fixture.h"
#include <inttypes.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>

static uint32_t random_state = 0x79b042d1;
static uint32_t random32(void) {
    random_state ^= random_state << 13;
    random_state ^= random_state >> 17;
    random_state ^= random_state << 5;
    return random_state;
}
static float as_float(uint32_t value) { float f; memcpy(&f, &value, sizeof(f)); return f; }
static uint32_t as_bits(float f) { uint32_t value; memcpy(&value, &f, sizeof(value)); return value; }
static unsigned angle_cases, spectator_cases;

static int angle_case(SrOriginalFixture *fixture, uint32_t a, uint32_t b) {
    uint32_t expected = as_bits(sr_original_angle(fixture, as_float(a), as_float(b)));
    uint32_t actual = as_bits(sr_recovered_angle_difference(as_float(a), as_float(b)));
    ++angle_cases;
    if (actual == expected) return 1;
    fprintf(stderr, "Angle mismatch: a=%08" PRIx32 " b=%08" PRIx32
            " original=%08" PRIx32 " C=%08" PRIx32 " mxcsr=%08x\n",
            a, b, expected, actual, _mm_getcsr());
    return 0;
}

static int test_angles(SrOriginalFixture *fixture) {
    static const uint32_t edges[] = {
        0,0x80000000,1,0x80000001,0x007fffff,0x00800000,0x3f800000,0xbf800000,
        0x40490fda,0x40490fdb,0x40490fdc,0xc0490fda,0xc0490fdb,0xc0490fdc,
        0x40c90fda,0x40c90fdb,0x40c90fdc,0xc0c90fdb,0x7f7fffff,0xff7fffff,
        0x7f800000,0xff800000,0x7fc00000,0x7fc00123,0xffc00456
    };
    unsigned saved = _mm_getcsr();
    for (unsigned rounding = 0; rounding < 4; ++rounding) {
        /* Keep exceptions masked while exercising the hardware rounding modes. */
        _mm_setcsr(0x1f80u | (rounding << 13));
        for (unsigned a = 0; a < sizeof(edges)/sizeof(edges[0]); ++a)
            for (unsigned b = 0; b < sizeof(edges)/sizeof(edges[0]); ++b)
                if (!angle_case(fixture, edges[a], edges[b])) goto fail;
        for (unsigned i = 0; i < 50000; ++i) {
            uint32_t a = random32(), b = random32();
            /* Broad finite bit patterns, not only small normalized angles. */
            if ((a & 0x7f800000) == 0x7f800000) a ^= 0x00800000;
            if ((b & 0x7f800000) == 0x7f800000) b ^= 0x00800000;
            if (!angle_case(fixture, a, b)) goto fail;
        }
    }
    _mm_setcsr(saved);
    return 1;
fail:
    _mm_setcsr(saved);
    return 0;
}

static int spectator_case(SrOriginalFixture *f, const SrSpectatorState *input, unsigned player) {
    SrSpectatorState actual = *input;
    /* RVAs and widths below come from the original loads/stores, independently
       of the compact C state representation. The original player's stride is
       0x3834 bytes; spectator subjects have stride 0x6ff8 bytes. */
    sr_fixture_write32(f, 0x43ebfaac, (uint32_t)input->mode);
    sr_fixture_write32(f, 0x11620c94 + player * 0x3834, input->local_enabled);
    sr_fixture_write32(f, 0x11620dc4 + player * 0x3834, (uint32_t)input->local_state);
    sr_fixture_write32(f, 0x43f79de4, (uint32_t)input->selected);
    sr_fixture_write32(f, 0x43f79de8, input->inhibit_a);
    sr_fixture_write32(f, 0x43f79dec, input->enabled);
    sr_fixture_write32(f, 0x4329b180, input->inhibit_b);
    sr_fixture_write32(f, 0x43ebfccc, (uint32_t)input->connection_state);
    memcpy(f->base + 0x43f7c960, input->current_keys, sizeof(input->current_keys));
    memcpy(f->base + 0x43f7c760, input->previous_keys, sizeof(input->previous_keys));
    for (unsigned i = 0; i < 256; ++i) {
        sr_fixture_write32(f, 0x4329e308 + i * 0x6ff8, input->subjects[i].active);
        sr_fixture_write32(f, 0x4329e344 + i * 0x6ff8, (uint32_t)input->subjects[i].positive_state);
        sr_fixture_write32(f, 0x432a5284 + i * 0x6ff8, input->subjects[i].category);
    }
    sr_original_spectator(f, (int)player);
    sr_recovered_spectator_step(&actual);
    uint32_t expected_selected = sr_fixture_read32(f, 0x43f79de4);
    uint32_t expected_enabled = sr_fixture_read32(f, 0x43f79dec);
    ++spectator_cases;
    if ((uint32_t)actual.selected != expected_selected || actual.enabled != expected_enabled) {
        fprintf(stderr, "Spectator mismatch case %u: mode=%d player=%u before=%d/%u original=%d/%u C=%d/%u\n",
                spectator_cases, input->mode, player, input->selected, input->enabled,
                (int32_t)expected_selected, expected_enabled, actual.selected, actual.enabled);
        return 0;
    }
    actual.selected = input->selected;
    actual.enabled = input->enabled;
    if (memcmp(&actual, input, sizeof(actual))) {
        fprintf(stderr, "Reconstructed controller modified an input field\n"); return 0;
    }
    return 1;
}

static int test_spectator(SrOriginalFixture *f) {
    SrSpectatorState s;
    /* Sparse boundary cases catch wrap direction, the -1 sentinel, and the
       original's stop-before-revisit behavior even when only slot 255 is live. */
    for (unsigned branch = 0; branch < 2; ++branch)
        for (unsigned reverse = 0; reverse < 2; ++reverse)
            for (int selected = -1; selected < 256; ++selected) {
                memset(&s, 0, sizeof(s));
                s.mode = branch ? 4 : 3; s.local_enabled = 1; s.enabled = 1;
                s.connection_state = 2; s.selected = selected;
                s.current_keys[0x2c] = 1; s.current_keys[0xe1] = (uint8_t)reverse;
                if (!spectator_case(f, &s, 255)) return 0;
                s.subjects[255].active = 1; s.subjects[255].positive_state = 1;
                if (!spectator_case(f, &s, 255)) return 0;
                s.subjects[0] = s.subjects[255];
                if (!spectator_case(f, &s, 255)) return 0;
            }
    /* Explicit key-edge, gate and mode combinations, including nonboolean
       enabled values: the executable XORs the low bit, not logical NOT. */
    for (int mode = -1; mode <= 9; ++mode)
        for (unsigned flags = 0; flags < 1024; ++flags) {
            memset(&s, 0, sizeof(s));
            s.mode = mode; s.selected = 4; s.enabled = flags & 3;
            s.local_enabled = flags & 4; s.local_state = (flags & 8) ? 1 : 2;
            s.inhibit_a = flags & 16; s.inhibit_b = flags & 32;
            s.current_keys[0x27] = (flags & 64) != 0;
            s.previous_keys[0x27] = (flags & 128) != 0;
            s.current_keys[0x2c] = (flags & 256) != 0;
            s.previous_keys[0x2c] = (flags & 512) != 0;
            s.connection_state = 2; s.subjects[5].active = 1; s.subjects[5].positive_state = 1;
            if (!spectator_case(f, &s, flags & 255)) return 0;
        }
    for (unsigned trial = 0; trial < 10000; ++trial) {
        memset(&s, 0, sizeof(s));
        s.mode = (int32_t)(random32() % 10); s.local_enabled = random32() & 1;
        s.local_state = (int32_t)(random32() % 3); s.selected = (int32_t)(random32() % 258) - 2;
        s.enabled = random32() & 3; s.inhibit_a = (random32() & 7) == 0;
        s.inhibit_b = (random32() & 7) == 0; s.connection_state = (int32_t)(random32() % 4);
        for (unsigned i = 0; i < 323; ++i) {
            s.current_keys[i] = (uint8_t)(random32() & 1);
            s.previous_keys[i] = (uint8_t)(random32() & 1);
        }
        for (unsigned i = 0; i < 256; ++i) {
            s.subjects[i].active = (random32() & 7) == 0;
            s.subjects[i].positive_state = (int32_t)(random32() % 4) - 1;
            s.subjects[i].category = random32() % 5;
        }
        if (!spectator_case(f, &s, trial & 255)) return 0;
    }
    return 1;
}

int main(int argc, char **argv) {
    if (argc != 2) { fprintf(stderr, "Usage: sr_camera_diff_test path/to/subrosa.exe\n"); return 2; }
    SrOriginalFixture f;
    if (!sr_original_fixture_open(&f, argv[1])) return 2;
    int ok = test_angles(&f) && test_spectator(&f);
    sr_original_fixture_close(&f);
    printf("%s: %u angle and %u spectator cases compared against original machine code.\n",
           ok ? "PASS" : "FAIL", angle_cases, spectator_cases);
    return ok ? 0 : 1;
}
