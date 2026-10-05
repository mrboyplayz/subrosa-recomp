#include "rigid_body.h"
#include "original_fixture.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <xmmintrin.h>

static uint32_t random_state = 0x18474ac9;
static uint32_t random32(void) {
    random_state ^= random_state << 13;
    random_state ^= random_state >> 17;
    random_state ^= random_state << 5;
    return random_state;
}
static float bits_float(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }

int main(int argc, char **argv) {
    if (argc != 2) { fprintf(stderr, "Usage: sr_rigid_body_diff_test subrosa.exe\n"); return 2; }
    SrOriginalFixture f;
    if (!sr_original_fixture_open(&f, argv[1])) return 2;
    SrRigidBody *bodies = malloc(sizeof(*bodies) * SR_RIGID_BODY_COUNT);
    if (!bodies) { sr_original_fixture_close(&f); return 2; }
    uint32_t (*original)(uint32_t, const SrCVector3 *, const SrCOrientation *, const SrCVector3 *, float, const SrCVector3 *);
    void *address = f.base + 0x5cf80;
    memcpy(&original, &address, sizeof(original));
    static const uint32_t scales[] = {
        0,0x80000000,1,0x80000001,0x3f800000,0xbf800000,0x7f800000,0xff800000,
        0x7fc00123,0xffc00123,0x3e800000,0x7f7fffff
    };
    unsigned saved = _mm_getcsr(), cases = 0;
    int result = 0;
    for (unsigned rounding = 0; rounding < 4; ++rounding) {
        _mm_setcsr(0x1f80u | (rounding << 13));
        for (unsigned trial = 0; trial < 512; ++trial) {
            int free_slot = trial == 0 ? -1 : trial == 1 ? 0 : trial == 2 ? 8191 : (int)(random32() % 8192);
            memset(bodies, 0xa5, sizeof(*bodies) * SR_RIGID_BODY_COUNT);
            if (free_slot >= 0) bodies[free_slot].active = 0;
            /* Extra later holes test first-free semantics, not just any free. */
            if (free_slot >= 0 && free_slot < 8190) bodies[free_slot+1].active = 0;
            memcpy(f.base + 0x49816e0, bodies, sizeof(*bodies) * SR_RIGID_BODY_COUNT);
            SrCVector3 position = {(float)(int32_t)random32(), (float)trial, -0.0f};
            SrCVector3 velocity = {bits_float(0x7fc00321), 2.25f, -0.75f};
            SrCOrientation orientation = {{1,0,0},{0,1,0},{0,0,1}};
            SrCVector3 scale = {bits_float(scales[trial % 12]), bits_float(scales[(trial/12) % 12]), bits_float(random32())};
            float mass = bits_float(random32());
            uint32_t kind = random32();
            const SrCVector3 *optional_velocity = trial & 1 ? &velocity : NULL;
            uint32_t expected = original(kind, &position, &orientation, optional_velocity, mass, &scale);
            uint32_t actual = (uint32_t)sr_rigid_body_create(bodies, kind, &position, &orientation, optional_velocity, mass, &scale);
            ++cases;
            if (expected != actual || memcmp(f.base + 0x49816e0, bodies, sizeof(*bodies) * SR_RIGID_BODY_COUNT)) {
                fprintf(stderr, "Mismatch trial %u rounding %u: expected slot %u, actual %u\n", trial, rounding, expected, actual);
                result = 1; goto finish;
            }
        }
    }
finish:
    _mm_setcsr(saved);
    printf("%s: %u rigid-body allocation cases; all 8192 records compared byte-for-byte.\n", result ? "FAIL" : "PASS", cases);
    free(bodies); sr_original_fixture_close(&f); return result;
}
