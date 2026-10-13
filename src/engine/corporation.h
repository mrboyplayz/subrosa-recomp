/* Corporations (RosaServer: Corporation): 0x183EBFD60, 0x5BC4 bytes each. */
#ifndef SR_ENGINE_CORPORATION_H
#define SR_ENGINE_CORPORATION_H

#include <stdint.h>
#include "memory.h"

/* A corporation's mission (RosaServer: Mission), 0x45C bytes. */
typedef struct CorporationMission {
    int32_t active;
    uint8_t pad_04[0x0C - 0x04];
    int32_t type;
    int32_t item;
    uint8_t pad_14[0x1C - 0x14];
    int32_t teams[2];
    uint8_t pad_24[0x3C - 0x24];
    int32_t disk_type;
    int32_t value;
    uint32_t sun_time;
    int32_t location;
    int32_t provided_cash;               /* money the corporation's stocks paid in for it */
    uint8_t pad_50[0x45C - 0x50];
} CorporationMission;

_Static_assert(sizeof(CorporationMission) == 0x45C, "CorporationMission size");

/* A place in front of the corporation where one of its cars can be made,
   0x34 bytes. */
typedef struct CorporationParking {
    int32_t in_use;
    float position[3];
    float rotation[9];
} CorporationParking;

_Static_assert(sizeof(CorporationParking) == 0x34, "CorporationParking size");

typedef struct Corporation {
    float interior_min[3];               /* the building's inside, from corner A to corner B */
    float interior_max[3];
    float vault_min[3];
    float vault_max[3];
    float table_orientation;
    float table_position[3];
    float spawn_position[3];
    uint8_t pad_4c[0x54 - 0x4C];
    int32_t player_count;                /* RosaServer players */
    uint8_t pad_58[0x60 - 0x58];
    int32_t door_open;
    int32_t manager;                     /* RosaServer managerPlayerID, -1: none */
    uint8_t pad_68[0x19C - 0x68];
    CorporationMission missions[16];
    uint8_t pad_475c[0x4BB8 - 0x475C];
    int32_t parking_count;
    CorporationParking parking[64];
    int32_t barred_count;                /* accounts the manager keeps from joining */
    int32_t barred_accounts[128];
    uint8_t pad_5ac0[0x5BC4 - 0x5AC0];
} Corporation;

_Static_assert(sizeof(Corporation) == 0x5BC4, "Corporation size");
_Static_assert(__builtin_offsetof(Corporation, barred_count) == 0x58BC, "Corporation layout");
_Static_assert(__builtin_offsetof(Corporation, missions) == 0x19C, "Corporation missions");
_Static_assert(__builtin_offsetof(Corporation, door_open) == 0x60, "Corporation door");
_Static_assert(__builtin_offsetof(Corporation, parking) == 0x4BBC, "Corporation parking");

#define world_corporations (&SR_GLOBAL(Corporation, 0x183EBFD60ULL))

/* Whether position's x and z lie within the corporation's interior widened
   by margin on every side; the far edges are exclusive. A NaN far edge lets
   the position through, as the original's COMISS + JAE do. 0x14011B8F0 */
int corporation_contains(const float position[3], int corporation, float margin);

/* When connected, queues event 10: the corporation's door opens (1) or
   closes (0). 0x1400518B0 */
void corporation_door_event(int corporation, int open);

/* Makes a car of a type and colour on the corporation's first free
   parking place and marks the place taken. Returns the vehicle, or -1
   when corporation is -1 or every place is taken. 0x1400F00D0 */
int corporation_spawn_car(int corporation, int type, uint32_t color);

#endif
