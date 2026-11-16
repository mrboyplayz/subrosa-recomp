/* Queued spawns: 1,024 records of 0x328 bytes from 0x1601172A0. A record is
 * free while its first word is zero. A request holds the kind (word 1), the
 * human made for it (word 3, -1 until made), a position and an angle. */
#ifndef SR_ENGINE_SPAWN_REQUESTS_H
#define SR_ENGINE_SPAWN_REQUESTS_H
#include "memory.h"

#define SPAWN_REQUEST_COUNT 1024
typedef struct SpawnRequest {
    int32_t used;
    int32_t kind;
    int32_t unknown_8;
    int32_t human;
    uint8_t unknown_10[4];
    float position[3];
    float angle;
    uint8_t unknown_24[0x328 - 0x24];
} SpawnRequest;
_Static_assert(sizeof(SpawnRequest) == 0x328, "spawn request stride");
#define spawn_requests (&SR_GLOBAL(SpawnRequest, 0x1601172A0ULL))

/* Claims the first free record: cleared but for its used flag, then the
 * kind, position and angle, human -1 and word 2 -1. Returns its index, or -1
 * when all are used. 0x14004DA50 */
int32_t spawn_request_add(int32_t kind, const float position[3], float angle);
#endif
