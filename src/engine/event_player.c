/* Player events for the clients. Checked against the original machine code
 * at 0x140051DC0, 0x140051F50 and 0x140051480.
 */
#include <string.h>
#include "events.h"
#include "frame.h"
#include "player.h"

static WorldEvent *next_event(int type)
{
    int32_t count = world_event_count;
    WorldEvent *event = &world_events[count];

    world_event_count = (int32_t)(((uint32_t)count + 1u) & 0xFFFF);
    event->type = type;
    event->tick = game_tick;
    return event;
}

void event_update_player(int index)
{
    const Player *player = &world_players[index];
    WorldEvent *event;
    uint32_t flags, face, clothes;

    if (!game_connected)
        return;
    event = next_event(WORLD_EVENT_UPDATE_PLAYER);

    /* All in 32-bit arithmetic that wraps, as the original's is. */
    flags = (uint32_t)player->is_bot + 2u * ((uint32_t)player->active + 2u * ((uint32_t)player->team + 1u));
    event->a = (int32_t)((uint32_t)index + (flags << 8));
    event->b = player->human;
    face = (uint32_t)player->gender
         + 2u * ((uint32_t)player->head + 32u * ((uint32_t)player->skin_color + 8u * (uint32_t)player->hair));
    event->c = (int32_t)face;
    clothes = (uint32_t)player->eye_color
            + 8u * ((uint32_t)player->hair_color
            + 16u * ((uint32_t)player->model
            + 32u * ((uint32_t)player->suit_color
            + 16u * ((uint32_t)player->tie_color + 16u * (uint32_t)player->necklace))));
    world_event_d(event) = (int32_t)clothes;
    memcpy(world_event_message(event), player->name, 31);
    world_event_message(event)[31] = 0;
}

void event_update_player_finance(int index)
{
    const Player *player = &world_players[index];
    WorldEvent *event;

    if (!game_connected)
        return;
    event = next_event(WORLD_EVENT_UPDATE_PLAYER_FINANCE);
    event->a = index;
    event->b = player->money;
    event->c = player->stocks;
    world_event_d(event) = (int32_t)player->phone_number;
}

void event_message(int kind, const char *text, int speaker, int volume)
{
    WorldEvent *event;
    int length;

    if (!game_connected)
        return;
    length = (int)strlen(text);
    if (length > 63)
        length = 63;
    event = next_event(WORLD_EVENT_MESSAGE);
    memcpy(world_event_message(event), text, (size_t)length);
    world_event_message(event)[length] = 0;
    event->a = length;
    event->b = kind;
    event->c = speaker;
    world_event_d(event) = volume;
}
