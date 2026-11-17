/* DRAFT, NOT COMPILED, NOT VERIFIED. Replay control keys: 0x1400A3970.
 * Read from the disassembly (the decompiled C in client_replay.c matches it).
 * Runs once per pass while replay_active (caller: client_widgets.c).
 *
 * To finish: engine file (e.g. replay_controls.c), rewire sub_1400A3970 in
 * src/client/client_replay.c (it returns 0, callers ignore it; the decompiled
 * a1/a2/a3 are leftover registers, drop them), t_replaycontrols.c with
 * NC_WRAPPERS: 1400A3970, redirect 0x140105180 / 0x140105470 / 0x14002EDF0
 * with nc_redirect, mutate.
 *
 * Key map (held byte at X, latched copy at X - 0x200: a rising edge acts):
 *   0x183F7C973 / 0x183F7C773  toggle game_paused
 *   0x183F7C972 / 0x183F7C772  set game_single_step to 1 on a rising edge
 *   0x183F7C96C / 0x183F7C76C  toggle frame_slow_pacing
 *   0x183F7C995                camera selection := -1 while held
 *   0x183F7C97E                camera := -1 and mode := 1 (free camera)
 *   0x183F7C97F                mode := 2 (record a camera keyframe if 0x183F7CA41)
 *   0x183F7C980                mode := 3 (same, other keyframe slot)
 *   0x183F7C98C / 0x183F7C78C  step the followed human (direction by 0x183F7CA41)
 * 0x183F7CA41 is game_unknown_183f7ca41 in frame.h: the reverse-direction key.
 */
#include <stdint.h>
#include "memory.h"
#include "frame.h"
#include "math3d.h"

#define held(a)    SR_GLOBAL(uint8_t, a)
#define reverse_key held(0x183F7CA41ULL)
#define camera_mode      SR_GLOBAL(int32_t, 0x144CBFAC4ULL)   /* g_144CBFAC4: 1 free, 2, 3 */
#define followed_human   SR_GLOBAL(int32_t, 0x183F79DE4ULL)   /* -1: none */
#define keyframe_source(i) (&SR_GLOBAL(float, 0x183F7C37CULL))[i]   /* 3 floats */
#define keyframe_yaw     SR_GLOBAL(float, 0x183F7C388ULL)
#define keyframe_pitch   SR_GLOBAL(float, 0x183F7C38CULL)
#define keyframe_scale   SR_GLOBAL(float, 0x183F7C390ULL)
/* Camera slots: 0x183F7C360 + 28 * mode, seven floats each. */
#define camera_slot(m)   (&SR_GLOBAL(float, 0x183F7C360ULL + 28ULL * (uint64_t)(int64_t)(m)))

extern void sub_140105180(int mode);                /* 0x140105180 free camera step */
extern void sub_140105470(int mode);                /* 0x140105470 other modes */
extern void sub_14002EDF0(int mode, void *human);   /* 0x14002EDF0, human + 0x80 */

static void record_keyframe(int mode, uint32_t save_address)
{
    float matrix[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};   /* 0x140278D30 identity rows */

    for (int i = 0; i < 3; i++)                       /* keyframe copy to the save slot */
        SR_GLOBAL(float, save_address + 4 * i) = keyframe_source(i);
    math_mat3_rotate_rows(matrix, &matrix[3], keyframe_yaw);
    math_mat3_rotate_rows(matrix, &matrix[0], keyframe_pitch);
    float *slot = camera_slot(mode);
    slot[0] = matrix[6] * keyframe_scale + slot[0];
    slot[1] = matrix[7] * keyframe_scale + slot[1];
    slot[2] = matrix[8] * keyframe_scale + slot[2];
    slot[3] = keyframe_yaw;
    slot[4] = keyframe_pitch;
}

void replay_controls(void)
{
    if (held(0x183F7C973) && !held(0x183F7C773)) game_paused ^= 1;
    if (held(0x183F7C972)) {
        int32_t step = game_single_step;
        if (!held(0x183F7C772)) step = 1;
        game_single_step = step;
    }
    if (held(0x183F7C96C) && !held(0x183F7C76C)) frame_slow_pacing ^= 1;

    int32_t human = followed_human;
    if (held(0x183F7C995)) human = -1;
    followed_human = human;

    int32_t mode;
    if (held(0x183F7C97E)) {
        human = -1;
        camera_mode = 1;
        followed_human = -1;
        mode = 1;
    } else {
        mode = camera_mode;
    }
    if (held(0x183F7C97F)) {
        mode = 2;
        camera_mode = 2;
        if (reverse_key) { record_keyframe(2, 0x183F7C398); human = followed_human; }
    }
    if (held(0x183F7C980)) {
        mode = 3;
        camera_mode = 3;
        if (reverse_key) { record_keyframe(3, 0x183F7C3B4); human = followed_human; }
    }

    if (held(0x183F7C98C) && !held(0x183F7C78C)) {
        /* Step to the next (or previous) active human with health and the
           states <= 2, wrapping on 8 bits; stop after one lap. */
        uint8_t start, stop;
        if (human < 0) { start = 0; stop = 0xFF; }
        else { start = (uint8_t)(human + (reverse_key ? -1 : 1)); stop = (uint8_t)human; }
        uint8_t i = start;
        for (;;) {
            if (human_int(i, 0) && human_int(i, 0x3C) > 0 && (uint32_t)human_int(i, 0x6F7C) <= 2) {
                human = i;
                followed_human = i;
                break;
            }
            i = (uint8_t)(i + (reverse_key ? -1 : 1));
            if (i == stop) break;
        }
    }

    if (mode == 1) {
        sub_140105180(1);
    } else {
        sub_140105470(mode);
        if (human != -1)
            sub_14002EDF0(mode, &human_int(human, 0x80));
    }
}
