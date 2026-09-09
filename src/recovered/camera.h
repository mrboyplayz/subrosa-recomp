#ifndef SR_RECOVERED_CAMERA_H
#define SR_RECOVERED_CAMERA_H

#include <stdint.h>

/* Field names describe observed predicates, not recovered original symbols. */
typedef struct {
    uint32_t active;
    int32_t positive_state;
    uint32_t category;
} SrSpectatorSubject;

typedef struct {
    int32_t mode;
    uint32_t local_enabled;
    int32_t local_state;
    int32_t selected;
    uint32_t enabled;
    uint32_t inhibit_a, inhibit_b;
    int32_t connection_state;
    uint8_t current_keys[323], previous_keys[323];
    SrSpectatorSubject subjects[256];
} SrSpectatorState;

/* 0x14000B5F0: scalar low-XMM lanes, not IDA's guessed double/vector ABI. */
float sr_recovered_angle_difference(float first, float second);
/* 0x1400A3770: only selected/enabled are modified. */
void sr_recovered_spectator_step(SrSpectatorState *state);

#endif
