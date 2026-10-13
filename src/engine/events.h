/* Events the game records for its clients (RosaServer: Event and the
   createEvent* routines). WorldEvent, world_events and world_event_count
   are in world.h. */
#ifndef SR_ENGINE_EVENTS_H
#define SR_ENGINE_EVENTS_H

#include "world.h"

/* RosaServer: Event.d, floatA and floatB (for sounds: volume and pitch). */
#define world_event_d(e) (*(int32_t *)((uint8_t *)(e) + 0x2C))
#define world_event_float_a(e) (*(float *)((uint8_t *)(e) + 0x30))
#define world_event_float_b(e) (*(float *)((uint8_t *)(e) + 0x34))
/* RosaServer: Event.message, 64 characters. */
#define world_event_message(e) ((char *)(e) + 0x40)

#define WORLD_EVENT_BULLET 0
#define WORLD_EVENT_MESSAGE 2
#define WORLD_EVENT_UPDATE_ITEM_INFO 6
#define WORLD_EVENT_UPDATE_PLAYER 7
#define WORLD_EVENT_UPDATE_PLAYER_FINANCE 8
#define WORLD_EVENT_SOUND_ITEM 19
#define WORLD_EVENT_EXPLOSION 20

/* When connected, records event 6 for an item (a: the item, b: its phone
   status, c: its displayed number, d: its phone texture) and counts the item
   as changed (RosaServer: createEventUpdateItemInfo). Items above 1023 are
   ignored. 0x140051940 */
void event_update_item_info(int item);

#define WORLD_EVENT_SOUND 9

/* When connected, records event 9: a sound of the given type at a place
   (RosaServer: createEventSound; a = sound type, floatA = volume, floatB =
   pitch). 0x1400515E0 */
void event_sound(int sound, const float position[3], float volume, float pitch);

/* When connected, records event 7 for a player (RosaServer:
   createEventUpdatePlayer): a = the player, with is_bot, active and team + 1
   packed above it; b = its human; c and d = its appearance packed into bit
   fields; message = the first 31 characters of its name. 0x140051DC0 */
void event_update_player(int player);

/* When connected, records event 8 (RosaServer:
   createEventUpdatePlayerFinance): a = the player, b = money, c = stocks,
   d = phone number. 0x140051F50 */
void event_update_player_finance(int player);

/* Who says an event 2 message (RosaServer createEventMessage's type). */
enum {
    EVENT_MESSAGE_PLAYER = 0,            /* speaker: a player; heard by everyone */
    EVENT_MESSAGE_HUMAN = 1,             /* speaker: a human; heard around it */
    EVENT_MESSAGE_ITEM = 2,              /* speaker: a phone or walkie-talkie */
};

/* When connected, records event 2: a = the message's length (at most 63),
   b = kind (EVENT_MESSAGE_*), c = speaker, d = volume (0 whisper, 1 talk,
   2 yell), message = text cut to 63 characters. 0x140051480 */
void event_message(int kind, const char *text, int speaker, int volume);

#endif
