/* Recording gameplay events, 0x140051230--0x140052090. */
#include <string.h>
#include "events.h"
#include "arith.h"

static WorldEvent *begin_event(int type)
{
    WorldEvent *event = &world_events[world_event_count];
    event->type = type;
    event->tick = game_tick;
    return event;
}

static void advance_event(void)
{
    world_event_count = (int32_t)(((uint32_t)world_event_count + 1u) & (EVENT_CAPACITY - 1u));
}

static void copy_vector(float out[3], const float *in)
{
    /* Keep the original's three ordered word copies, including overlapping
     * inputs, signed zero and signaling-NaN payloads. */
    for (int k = 0; k < 3; k++)
        memcpy(&out[k], &in[k], sizeof(float));
}

static void optional_vector(float out[3], const float *in)
{
    if (in)
        copy_vector(out, in);
    else
        memset(out, 0, 3 * sizeof(float));
}

static uint32_t pack_pair(uint32_t low, uint32_t high)
{
    /* Addition, not OR: carries from a wide low input are significant. */
    return low + (high << 16);
}

void event_bullet(uint32_t type, const float position[3], const float velocity[3], uint32_t player)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(0);
    copy_vector(e->vector_a, position);
    copy_vector(e->vector_b, velocity);
    e->a = (int32_t)type;
    advance_event();
    e->b = (int32_t)player;
}

void event_bullet_hit(uint32_t a, uint32_t b, const float position[3], const float *normal)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(1);
    copy_vector(e->vector_a, position);
    optional_vector(e->vector_b, normal);
    e->a = (int32_t)a;
    e->b = (int32_t)b;
    advance_event();
}

void event_message(uint32_t kind, const char *text, uint32_t speaker, uint32_t volume)
{
    if (!game_connected) return;
    size_t length = strlen(text);
    if (length > 63) length = 63;
    WorldEvent *e = begin_event(2);
    memcpy(event_message_bytes(e), text, length);
    event_message_bytes(e)[length] = 0;
    e->a = (int32_t)length;
    e->b = (int32_t)kind;
    e->c = (int32_t)speaker;
    e->unknown_2c = (int32_t)volume;
    advance_event();
}

void event_block_update(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t block)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(18);
    e->a = (int32_t)pack_pair(layer, x);
    e->b = (int32_t)pack_pair(y, z);
    e->c = (int32_t)block;
    advance_event();
}

void event_sound(uint32_t sound, const float position[3], float volume, float pitch)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(9);
    e->a = (int32_t)sound;
    copy_vector(e->vector_a, position);
    e->unknown_30 = volume;
    advance_event();
    e->unknown_34 = pitch;
}

void event_item_sound(uint32_t sound, uint32_t item, float volume, float pitch)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(19);
    e->a = (int32_t)sound;
    e->b = (int32_t)item;
    e->unknown_30 = volume;
    e->unknown_34 = pitch;
    advance_event();
}

void event_block_parts(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t gone, uint32_t flags)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(15);
    e->a = (int32_t)pack_pair(layer, x);
    e->b = (int32_t)pack_pair(y, z);
    e->c = (int32_t)gone;
    e->unknown_2c = (int32_t)flags;
    advance_event();
}

void event_block_hit(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t a, uint32_t b,
                     const float *position, const float *velocity)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(16);
    e->a = (int32_t)pack_pair(layer, x);
    e->b = (int32_t)pack_pair(y, z);
    e->c = (int32_t)a;
    e->unknown_2c = (int32_t)b;
    optional_vector(e->vector_a, position);
    optional_vector(e->vector_b, velocity);
    advance_event();
}

void event_corporation_door(uint32_t corporation, uint32_t open)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(10);
    e->a = (int32_t)corporation;
    advance_event();
    e->b = (int32_t)open;
}

void event_mission_update(int corporation, int mission)
{
    if (!game_connected) return;
    const EventMission *m = event_mission(corporation, mission);
    WorldEvent *e = begin_event(12);
    advance_event();
    e->a = (int32_t)((uint32_t)m->active + 2u * ((uint32_t)mission + 8u * ((uint32_t)corporation
                   + 16u * ((uint32_t)m->type + ((uint32_t)m->disk_type << 8)))));
    e->b = (int32_t)((uint32_t)m->teams[0] + 16u * ((uint32_t)m->teams[1] + 16u * (uint32_t)m->value));
    e->c = (int32_t)((uint32_t)((int32_t)m->sun_time / 60) + (((uint32_t)m->location + 1u) << 16));
    e->unknown_2c = m->provided_cash;
}

void event_mission_text_line(int corporation, int mission, uint32_t line, int length)
{
    if (!game_connected) return;
    if (length > 64) length = 64;
    WorldEvent *e = begin_event(22);
    e->a = (int32_t)((uint32_t)corporation + ((uint32_t)mission << 8));
    e->b = (int32_t)line;
    e->c = length;
    memcpy(event_message_bytes(e), event_mission(corporation, mission)->text + (int32_t)(line << 6), (size_t)length);
    advance_event();
}

void event_mission_text(int corporation, int mission)
{
    if (!game_connected) return;
    const char *text = event_mission(corporation, mission)->text;
    int32_t last = add_int((int32_t)strlen(text), 1) >> 6;
    /* The inclusive bound deliberately emits another 64-byte record when
     * the terminating zero is at byte 63, 127, ... . */
    for (int32_t line = 0; line <= last; line++) {
        WorldEvent *e = begin_event(22);
        advance_event();
        e->a = (int32_t)((uint32_t)corporation + ((uint32_t)mission << 8));
        e->b = line;
        e->c = 64;
        memcpy(event_message_bytes(e), text + 64 * line, 64);
    }
}

void event_vehicle_removed(uint32_t vehicle, uint32_t a, uint32_t b, const float *position, const float *velocity)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(4);
    e->a = (int32_t)vehicle;
    e->b = (int32_t)a;
    e->c = (int32_t)b;
    optional_vector(e->vector_a, position);
    optional_vector(e->vector_b, velocity);
    advance_event();
}

void event_player_update(int player)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(7);
    advance_event();
    uint32_t flags = event_player_is_bot(player)
                   + 2u * (event_player_active(player) + 2u * (event_player_team(player) + 1u));
    e->a = (int32_t)((uint32_t)player + (flags << 8));
    e->b = (int32_t)event_player_human(player);
    e->c = (int32_t)(event_player_gender(player) + 2u * (event_player_head(player)
                   + 32u * (event_player_skin_color(player) + 8u * event_player_hair(player))));
    e->unknown_2c = (int32_t)(event_player_eye_color(player) + 8u * (event_player_hair_color(player)
                   + 16u * (event_player_model(player) + 32u * (event_player_suit_color(player)
                   + 16u * (event_player_tie_color(player) + 16u * event_player_necklace(player))))));
    memcpy(event_message_bytes(e), event_player_name(player), 31);
    event_message_bytes(e)[31] = 0;
}

void event_player_finance(int player)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(8);
    advance_event();
    e->a = player;
    e->b = (int32_t)event_player_money(player);
    e->c = (int32_t)event_player_stocks(player);
    e->unknown_2c = (int32_t)event_player_phone(player);
}

void event_type21(uint32_t a, uint32_t b, uint32_t c, uint32_t d, const float *position)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(21);
    e->a = (int32_t)a;
    e->b = (int32_t)b;
    e->c = (int32_t)c;
    e->unknown_2c = (int32_t)d;
    optional_vector(e->vector_a, position);
    advance_event();
}

void event_stock_prices(void)
{
    if (!game_connected) return;
    WorldEvent *e = begin_event(13);
    advance_event();
    for (int k = 0; k < 6; k++)
        event_stocks[k].price_tenths = truncate_float(event_stocks[k].price * 10.0f);
    e->a = (int32_t)pack_pair((uint32_t)event_stocks[0].price_tenths, (uint32_t)event_stocks[1].price_tenths);
    e->b = (int32_t)pack_pair((uint32_t)event_stocks[2].price_tenths, (uint32_t)event_stocks[3].price_tenths);
    /* The sixth conversion is a state update only; no field carries it. */
    e->c = event_stocks[4].price_tenths;
}
