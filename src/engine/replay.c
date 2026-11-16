/* Replay-mode tick control: pause/single-step/slow-motion key latches, the
   editor camera branches, and the prev/next player walk. 0x1400A3970.
   All state lives in the flat client region, so the port reads and writes
   the same addresses through SR_GLOBAL. */
#include "memory.h"
#include "math3d.h"

/* Original callees retained at the boundary, with their machine-code ABI. */
extern void sub_140105180(int mode, int64_t record_offset, double unused_a3);      /* 0x140105180 */
extern void sub_140105470(int mode, int64_t record_offset, double unused_a3);      /* 0x140105470 */
extern void sub_14002EDF0(int mode, float *rotation);                              /* 0x14002EDF0 */

/* 0x140278D30: four zero floats, the identity basis the editor branches copy. */
extern const float identity_row[4] __asm__("xmmword_140278D30");

#define replay_record_state(index)  SR_GLOBAL(uint32_t, 0x140404A6CULL + 4u * (uint32_t)(index))
#define replay_edit_rotation(index) SR_GLOBAL(float, 0x183F7C360ULL + 4u * (uint32_t)(index))

int64_t replay_handle_mode_keys(int64_t a1, int64_t a2, double a3)
{
    int32_t selected;   /* g_183F79DE4: selected player, -1 when none */
    int32_t edit_mode;  /* g_144CBFAC4: active edit mode 1/2/3 */
    uint8_t edit_target;/* BYTE1 of g_183F7CA40: the edit key is held */
    int32_t walk_from;  /* the selection the walk starts from */
    int32_t walk_step;
    int32_t walk_index;
    uint8_t walk_saved;
    int64_t record_off = 0;

    /* Toggle pause: the pause key held since it last acted. */
    if (SR_GLOBAL(uint8_t, 0x183F7C970ULL) != 0 && SR_GLOBAL(uint8_t, 0x183F7C770ULL) == 0)
        SR_GLOBAL(uint32_t, 0x183EBFD48ULL) ^= 1u;

    /* Single step: latch on while the key is held. */
    if (SR_GLOBAL(uint8_t, 0x183F7C971ULL) != 0) {
        uint32_t step = SR_GLOBAL(uint32_t, 0x183EBFD4CULL);
        if (SR_GLOBAL(uint8_t, 0x183F7C771ULL) == 0)
            step = 1;
        SR_GLOBAL(uint32_t, 0x183EBFD4CULL) = step;
    }

    /* Slow pacing toggle, same held/latched pair. */
    if (SR_GLOBAL(uint8_t, 0x183F7C96CULL) != 0 && SR_GLOBAL(uint8_t, 0x183F7C76CULL) == 0)
        SR_GLOBAL(uint32_t, 0x183EBFD50ULL) ^= 1u;

    selected = (int32_t)SR_GLOBAL(uint32_t, 0x183F79DE4ULL);
    if (SR_GLOBAL(uint8_t, 0x183F7C994ULL) != 0)
        selected = -1;
    SR_GLOBAL(uint32_t, 0x183F79DE4ULL) = (uint32_t)selected;

    /* Mode 1: a fresh edit target, replay rewinds to its head. */
    if (SR_GLOBAL(uint8_t, 0x183F7C97DULL) != 0) {
        SR_GLOBAL(uint32_t, 0x144CBFAC4ULL) = 1;
        selected = -1;
        edit_mode = 1;
    } else {
        edit_mode = (int32_t)SR_GLOBAL(uint32_t, 0x144CBFAC4ULL);
    }

    edit_target = (uint8_t)SR_GLOBAL(uint32_t, 0x183F7CA40ULL);

    /* Mode 2: the edit key plants the camera basis on the record slot. */
    if (SR_GLOBAL(uint8_t, 0x183F7C97EULL) != 0) {
        edit_mode = 2;
        SR_GLOBAL(uint32_t, 0x144CBFAC4ULL) = 2;
        if (edit_target != 0) {
            float basis[12];    /* nine matrix floats then the axis at +48 */
            float *axis = &basis[9];

            SR_GLOBAL(uint32_t, 0x183F7C398ULL) = SR_GLOBAL(uint32_t, 0x183F7C37CULL);
            SR_GLOBAL(uint32_t, 0x183F7C39CULL) = SR_GLOBAL(uint32_t, 0x183F7C380ULL);
            SR_GLOBAL(uint32_t, 0x183F7C3A0ULL) = SR_GLOBAL(uint32_t, 0x183F7C384ULL);

            basis[0] = identity_row[0]; basis[1] = identity_row[1];
            basis[2] = identity_row[2]; basis[3] = identity_row[3];
            basis[4] = 0.0f; basis[5] = 0.0f; basis[6] = 0.0f;
            basis[7] = 0.0f; basis[8] = 0.0f;
            axis[0] = identity_row[0]; axis[1] = identity_row[1]; axis[2] = identity_row[2];

            math_mat3_rotate_rows(basis, axis, (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C388ULL));
            math_mat3_rotate_rows(basis, axis, (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C38CULL));

            edit_mode = (int32_t)SR_GLOBAL(uint32_t, 0x144CBFAC4ULL);
            edit_target = (uint8_t)SR_GLOBAL(uint32_t, 0x183F7CA40ULL);
            selected = (int32_t)SR_GLOBAL(uint32_t, 0x183F79DE4ULL);

            int32_t walk_step = 7 * edit_mode;
            replay_edit_rotation(walk_step + 0) += basis[10] * SR_GLOBAL(float, 0x183F7C390ULL);
            replay_edit_rotation(walk_step + 1) += basis[11] * SR_GLOBAL(float, 0x183F7C390ULL);
            replay_edit_rotation(walk_step + 2) += axis[0] * SR_GLOBAL(float, 0x183F7C390ULL);
            replay_edit_rotation(walk_step + 3) = (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C388ULL);
            replay_edit_rotation(walk_step + 4) = (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C38CULL);
        }
    }

    /* Mode 3: the same camera basis on the second record slot. */
    if (SR_GLOBAL(uint8_t, 0x183F7C980ULL) != 0) {
        edit_mode = 3;
        SR_GLOBAL(uint32_t, 0x144CBFAC4ULL) = 3;
        if (edit_target != 0) {
            float basis[12];    /* nine matrix floats then the axis at +48 */
            float *axis = &basis[9];

            SR_GLOBAL(uint32_t, 0x183F7C3B4ULL) = SR_GLOBAL(uint32_t, 0x183F7C37CULL);
            SR_GLOBAL(uint32_t, 0x183F7C3B8ULL) = SR_GLOBAL(uint32_t, 0x183F7C380ULL);
            SR_GLOBAL(uint32_t, 0x183F7C3BCULL) = SR_GLOBAL(uint32_t, 0x183F7C384ULL);

            basis[0] = identity_row[0]; basis[1] = identity_row[1];
            basis[2] = identity_row[2]; basis[3] = identity_row[3];
            basis[4] = 0.0f; basis[5] = 0.0f; basis[6] = 0.0f;
            basis[7] = 0.0f; basis[8] = 0.0f;
            axis[0] = identity_row[0]; axis[1] = identity_row[1]; axis[2] = identity_row[2];

            math_mat3_rotate_rows(basis, axis, (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C388ULL));
            math_mat3_rotate_rows(basis, axis, (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C38CULL));

            edit_mode = (int32_t)SR_GLOBAL(uint32_t, 0x144CBFAC4ULL);
            edit_target = (uint8_t)SR_GLOBAL(uint32_t, 0x183F7CA40ULL);
            selected = (int32_t)SR_GLOBAL(uint32_t, 0x183F79DE4ULL);

            int32_t walk_step = 7 * edit_mode;
            replay_edit_rotation(walk_step + 0) += basis[10] * SR_GLOBAL(float, 0x183F7C390ULL);
            replay_edit_rotation(walk_step + 1) += basis[11] * SR_GLOBAL(float, 0x183F7C390ULL);
            replay_edit_rotation(walk_step + 2) += axis[0] * SR_GLOBAL(float, 0x183F7C390ULL);
            replay_edit_rotation(walk_step + 3) = (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C388ULL);
            replay_edit_rotation(walk_step + 4) = (float)(uint32_t)SR_GLOBAL(uint32_t, 0x183F7C38CULL);
        }
    }

    /* The selection walk: players with a record and a live slot, skipping
       to the next or previous index. The start is unsigned and wraps at
       eight bits; a full loop lands back on it and keeps the selection. */
    if (SR_GLOBAL(uint8_t, 0x183F7C98CULL) != 0 && SR_GLOBAL(uint8_t, 0x183F7C78CULL) == 0) {
        walk_saved = (uint8_t)selected;
        if (selected >= 0) {
            walk_index = (uint8_t)(selected + (edit_target != 0 ? -1 : 1));
        } else {
            walk_index = 0;
            walk_saved = (uint8_t)-1;
        }
        while (1) {
            int64_t record_off = 7166LL * (int32_t)walk_index;
            if (replay_record_state(record_off + 280651303) != 0) {
                if ((int32_t)replay_record_state(record_off + 280651318) > 0
                    && replay_record_state(record_off + 280651322) <= 2)
                    break;
            }
            walk_step = edit_target != 0 ? -1 : 1;
            walk_index = (uint8_t)(walk_index + walk_step);
            if ((uint8_t)walk_index == walk_saved)
                goto walk_done;
        }
        selected = walk_index;
        SR_GLOBAL(uint32_t, 0x183F79DE4ULL) = (uint32_t)walk_index;
    }
walk_done:
    /* 0x140105180 wins only for mode 1; the record offset in RDX was set
       by the walk and is uninitialized residue otherwise. */
    if (edit_mode == 1) {
        sub_140105180(1, (int64_t)(record_off * 4), a3);
    } else {
        sub_140105470(edit_mode, (int64_t)(record_off * 4), a3);
        if (selected != -1)
            sub_14002EDF0(edit_mode, &SR_GLOBAL(float, 0x140404A6CULL
                + 4u * (7166 * selected + 280651335)));
    }
    return 0; /* the reviewed callers discard this result */
}
