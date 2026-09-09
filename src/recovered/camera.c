#include "camera.h"

float sr_recovered_angle_difference(float first, float second) {
    /* Exact .rdata doubles at 0x1402785E8 and 0x140278620. Single-pass
       adjustment is deliberate: this is not a general modulo operation. */
    const double pi = 0x1.921fb54442eeap+1;
    const double tau = 0x1.921fb54442eeap+2;
    if ((double)(second - first) >= pi)
        first = (float)((double)first + tau);
    if ((double)(first - second) >= pi)
        second = (float)((double)second + tau);
    return first - second;
}

static int32_t next_subject(const SrSpectatorState *s, int32_t selected, int restricted) {
    const int direction = s->current_keys[0xe1] ? -1 : 1;
    const uint8_t stop = (uint8_t)selected;
    uint8_t candidate = selected < 0 ? 0 : (uint8_t)((uint32_t)selected + direction);
    /* The original checks before advancing, then stops before revisiting stop.
       With selected == -1 this also means subject 255 is not revisited. */
    for (;;) {
        const SrSpectatorSubject *subject = &s->subjects[candidate];
        if (subject->active && subject->positive_state > 0 &&
            (!restricted || subject->category <= 2))
            return candidate;
        candidate = (uint8_t)(candidate + direction);
        if (candidate == (selected < 0 ? 255 : stop))
            return selected;
    }
}

void sr_recovered_spectator_step(SrSpectatorState *s) {
    if (s->mode == 4 && s->local_enabled) {
        if (s->local_state == 1 && s->current_keys[0x27] && !s->previous_keys[0x27])
            s->enabled ^= 1u;
        if (s->enabled) {
            if (s->current_keys[0x1e])
                s->selected = -1;
            if (s->current_keys[0x2c] && !s->previous_keys[0x2c])
                s->selected = next_subject(s, s->selected, 0);
        }
        return;
    }
    s->enabled = 0;
    if ((s->mode == 3 || (uint32_t)s->mode - 5u <= 2u) && !s->inhibit_a && !s->inhibit_b) {
        if (s->current_keys[0x1e])
            s->selected = -1;
        if (s->current_keys[0x2c] && !s->previous_keys[0x2c])
            s->selected = next_subject(s, s->selected, 1);
        if (s->connection_state != 2)
            s->selected = -1;
    }
}
