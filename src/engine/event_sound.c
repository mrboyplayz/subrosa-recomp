/* The sound event. See events.h. */
#include "events.h"
#include "frame.h"
#include <string.h>

void event_sound(int sound, const float position[3], float volume, float pitch)
{
    WorldEvent *event;
    int32_t count;

    if (!game_connected)
        return;
    count = world_event_count;
    event = &world_events[count];
    event->type = WORLD_EVENT_SOUND;
    event->tick = game_tick;
    event->a = sound;
    memcpy(event->vector_a, position, sizeof event->vector_a);
    world_event_float_a(event) = volume;
    world_event_count = (count + 1) & 0xFFFF;
    world_event_float_b(event) = pitch;
}
