#include <string.h>
#include "spawn_requests.h"

int32_t spawn_request_add(int32_t kind, const float position[3], float angle)
{
    int32_t index = 0;
    while (spawn_requests[index].used) {
        if (++index >= SPAWN_REQUEST_COUNT)
            return -1;
    }
    SpawnRequest *request = &spawn_requests[index];
    memset(&request->kind, 0, sizeof *request - sizeof request->used);
    request->used = 1;
    request->kind = kind;
    /* The words are copied as bits, so a signaling NaN keeps its payload. */
    memcpy(&request->position[0], &position[0], 4);
    memcpy(&request->position[1], &position[1], 4);
    memcpy(&request->position[2], &position[2], 4);
    request->angle = angle;
    request->unknown_8 = -1;
    request->human = -1;
    return index;
}
