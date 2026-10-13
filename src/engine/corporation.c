/* Corporations: their areas and door events. */
#include "corporation.h"
#include "frame.h"
#include "world.h"

int corporation_contains(const float position[3], int corporation, float margin)
{
    const Corporation *c = &world_corporations[corporation];
    float x = position[0], z = position[2];

    if (!(x >= c->interior_min[0] - margin) || x >= margin + c->interior_max[0])
        return 0;
    if (!(z >= c->interior_min[2] - margin) || z >= margin + c->interior_max[2])
        return 0;
    return 1;
}

void corporation_door_event(int corporation, int open)
{
    int32_t count;
    WorldEvent *event;

    if (!game_connected)
        return;
    count = world_event_count;
    event = &world_events[count];
    world_event_count = (count + 1) & 0xFFFF;
    event->type = 10;
    event->tick = game_tick;
    event->a = corporation;
    event->b = open;
}
