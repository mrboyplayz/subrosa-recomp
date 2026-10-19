/* Event records sent to clients. Original entry points are listed below.
 * Only fields actually written by an event are changed; the rest of the
 * reused 128-byte record retains its previous contents. */
#ifndef SR_ENGINE_EVENTS_H
#define SR_ENGINE_EVENTS_H

#include <stddef.h>
#include "world.h"
#include "frame.h"

#define EVENT_CAPACITY 65536u
#define event_message_bytes(e) ((char *)(e) + 0x40)

/* The source records needed by the player and mission events. */
#define event_player_word(i, offset) ((uint32_t)player_field(i, offset))
#define event_player_active(i) event_player_word(i, 0x0)
#define event_player_phone(i) event_player_word(i, 0x30)
#define event_player_money(i) event_player_word(i, 0x4C)
#define event_player_team(i) event_player_word(i, 0x84)
#define event_player_stocks(i) event_player_word(i, 0x8C)
#define event_player_human(i) event_player_word(i, 0x9C)
#define event_player_is_bot(i) event_player_word(i, 0x2D18)
#define event_player_gender(i) event_player_word(i, 0x37AC)
#define event_player_skin_color(i) event_player_word(i, 0x37B0)
#define event_player_hair_color(i) event_player_word(i, 0x37B4)
#define event_player_hair(i) event_player_word(i, 0x37B8)
#define event_player_eye_color(i) event_player_word(i, 0x37BC)
#define event_player_model(i) event_player_word(i, 0x37C0)
#define event_player_suit_color(i) event_player_word(i, 0x37C4)
#define event_player_tie_color(i) event_player_word(i, 0x37C8)
#define event_player_head(i) event_player_word(i, 0x37D0)
#define event_player_necklace(i) event_player_word(i, 0x37D4)
#define event_player_name(i) (&SR_GLOBAL(char, 0x151620C64ULL + 0x3834ULL * (uint64_t)(int64_t)(i)))

typedef struct EventMission {
    int32_t active;
    uint8_t unknown_04[8];
    int32_t type, item;
    uint8_t unknown_14[8];
    int32_t teams[2];
    uint8_t unknown_24[24];
    int32_t disk_type, value;
    uint32_t sun_time;
    int32_t location, provided_cash;
    uint8_t unknown_50[12];
    char text[1024];
} EventMission;
_Static_assert(sizeof(EventMission) == 0x45C, "mission stride");
_Static_assert(offsetof(EventMission, text) == 0x5C, "mission text");
#define event_mission(c, m) (&SR_GLOBAL(EventMission, 0x183EBFEFCULL + 0x5BC4ULL * (uint64_t)(int64_t)(c) + 0x45CULL * (uint64_t)(int64_t)(m)))

typedef struct EventStock {
    int32_t shares;
    float price;
    int32_t unknown_08;
    int32_t price_tenths;
    int32_t unknown_10, cash_paid;
} EventStock;
_Static_assert(sizeof(EventStock) == 0x18, "stock stride");
#define event_stocks (&SR_GLOBAL(EventStock, 0x19021F0C0ULL))

/* All routines are no-ops when game_connected is zero. Vector arguments
 * are copied as bits. Optional vectors are explicitly identified. */
void event_bullet(uint32_t type, const float position[3], const float velocity[3], uint32_t player); /* 0x140051230 */
void event_bullet_hit(uint32_t a, uint32_t b, const float position[3], const float *normal); /* 0x1400512D0; optional normal */
void event_message(uint32_t kind, const char *text, uint32_t speaker, uint32_t volume); /* 0x140051480 */
void event_block_update(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t block); /* 0x140051560 */
void event_sound(uint32_t sound, const float position[3], float volume, float pitch); /* 0x1400515E0 */
void event_item_sound(uint32_t sound, uint32_t item, float volume, float pitch); /* 0x140051650 */
#define event_block_parts world_event_block_gone /* existing verified event 15 */
void event_block_hit(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t a, uint32_t b,
                     const float *position, const float *velocity); /* 0x140051730; both vectors optional */
void event_corporation_door(uint32_t corporation, uint32_t open); /* 0x1400518B0 */
void event_mission_update(int corporation, int mission); /* 0x1400519F0 */
void event_mission_text_line(int corporation, int mission, uint32_t line, int length); /* 0x140051B00; nonnegative length */
void event_mission_text(int corporation, int mission); /* 0x140051BD0 */
void event_vehicle_removed(uint32_t vehicle, uint32_t a, uint32_t b, const float *position,
                           const float *velocity); /* 0x140051CF0; both vectors optional */
void event_player_update(int player); /* 0x140051DC0 */
void event_player_finance(int player); /* 0x140051F50 */
void event_type21(uint32_t a, uint32_t b, uint32_t c, uint32_t d, const float *position); /* 0x140051FF0; optional position; meaning unresolved */
void event_stock_prices(void); /* 0x140052090 */

#endif
