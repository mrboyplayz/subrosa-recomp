/* Item states for a tick (0x1400CC610). See item.h. */
#include "arith.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "physics.h"

/* ---- still recompiled code ------------------------------------------------- */

extern int rand(void);                          /* the original's own, 0x14023B1B0 */
extern void sr_item_follow_body(int item, int human); /* a held item follows its holder */
extern void sr_item_gun_tick(int item);            /* a gun's tick (the original also leaves
                                                   'lying free' in EDX, which it does not read) */
extern void sr_item_phone_changed(int item);            /* marks an item's state changed */
extern void sub_1400C3ED0(int item);            /* sets up a computer */
extern void sub_1400C5750(int item);            /* computers ... */
extern void sr_item_link_text_line(int item, int unknown);
extern void sub_1400C8500(int item);
extern void sub_1400C9820(int item);
extern void sr_item_grenade_explode(int item);            /* a grenade goes off */

/* Fields of a human this file uses that human.h does not name yet: what
   item type 30 changes (+0x14 up to 105, +0x20 up to 255, +0x18 a wait of
   300 ticks before the next use). */
#define human_unknown_14(h) SR_GLOBAL(int32_t, 0x18329E31CULL + 0x6FF8ULL * (uint64_t)(int64_t)(h))
#define human_unknown_18(h) SR_GLOBAL(int32_t, 0x18329E320ULL + 0x6FF8ULL * (uint64_t)(int64_t)(h))
#define human_unknown_20(h) SR_GLOBAL(int32_t, 0x18329E328ULL + 0x6FF8ULL * (uint64_t)(int64_t)(h))

#define LIFETIME_FOREVER 0xFFFF
#define LIFETIME_LOOSE   18000                  /* five minutes for an item lying free */

static int pressed(int item, uint32_t button)
{
    return (item_input(item) & button) && !(item_previous_input(item) & button);
}

static int is_phone(const WorldItem *item)
{
    return item->type == ITEM_TYPE_PHONE || item->type == ITEM_TYPE_PHONE_2;
}

static WorldEvent *add_event(void)
{
    int32_t count = world_event_count;
    world_event_count = (int32_t)((uint32_t)count + 1u) & 0xFFFF;
    return &world_events[count];
}

static void ring_event(int32_t tick, int32_t sound, int item, float unknown_30)
{
    WorldEvent *event = add_event();
    event->type = 19;
    event->tick = tick;
    event->a = sound;
    event->b = item;
    event->unknown_30 = unknown_30;
    event->unknown_34 = 1.0f;
}

/* ---- children follow their parents ----------------------------------------- */

static void follow_parent(WorldItem *item)
{
    const WorldItem *p = &world_items[item->parent];
    float px, py, pz, r[9], x, y, z;

    item->position[0] = px = p->position[0];
    item->position[1] = py = p->position[1];
    item->position[2] = pz = p->position[2];
    for (int k = 0; k < 9; k++)
        item->rotation[k] = r[k] = p->rotation[k];

    if ((uint32_t)p->type - 15u <= 1u) {
        /* In a radio (15, 16): parts 17 and 18 sit along its first row by slot. */
        x = px; y = py; z = pz;
        if (item->type == 17 || item->type == 18) {
            float along = (float)item->slot * 0.10546875f - 0.2109375f;
            x = r[0] * along + px;
            y = r[1] * along + py;
            z = r[2] * along + pz;
            item->position[0] = x;
            item->position[1] = y;
            item->position[2] = z;
        }
    } else if (p->type == 39) {
        float c = item_type39_child_offset;
        float nx = r[3] * c + px, ny = r[4] * c + py, nz = r[5] * c + pz;
        item->position[0] = nx;
        item->position[1] = ny;
        item->position[2] = nz;
        float along = item_type_unknown_524(p->type);
        x = r[6] * along + nx;
        y = r[7] * along + ny;
        z = r[8] * along + nz;
        item->position[0] = x;
        item->position[1] = y;
        item->position[2] = z;
    } else {
        x = px - r[3] * 0.0625f;
        y = py - r[4] * 0.0625f;
        z = pz - r[5] * 0.0625f;
        item->position[0] = x;
        item->position[1] = y;
        item->position[2] = z;
    }
    item->previous_position[0] = x;
    item->previous_position[1] = y;
    item->previous_position[2] = z;
}

/* ---- lifetimes ------------------------------------------------------------- */

/* Whether the item lies free: held by no one, in nothing and not of types
   17, 18, 25 or 36; or attached to a gun no one holds. */
static int lying_free(const WorldItem *item)
{
    if (item->holder == -1 && item->parent == -1) {
        uint32_t type = (uint32_t)item->type;
        if (type > 36 || !((0x1002060000ULL >> type) & 1))
            return 1;
    }
    if (item->parent != -1) {
        const WorldItem *p = &world_items[item->parent];
        if (item_type_is_gun(p->type))
            return p->holder == -1;
    }
    return 0;
}

static void update_lifetime(WorldItem *item, int loose)
{
    /* Types 19 to 24 never run out by lying free. */
    int expires = (uint32_t)item->type - 19u > 5u ? loose : 0;
    int32_t lifetime = item->lifetime;

    if (lifetime >= 0x10000) {
        if (item->holder == -1)
            goto unless_running;
        item->lifetime = lifetime = LIFETIME_LOOSE;
    }
    if (!expires)
        goto unless_running;
    if (lifetime > LIFETIME_LOOSE)
        lifetime = LIFETIME_LOOSE;
    /* (The original clamps types 38 and 45 a second time.) */
    lifetime--;
    if (item->child_count > 0)
        lifetime = LIFETIME_LOOSE;
    item->lifetime = lifetime;
    if ((((uint32_t)game_type - 3u) & ~2u) == 0 && lifetime > 0)
        item->lifetime = LIFETIME_FOREVER;           /* game types 3 and 5 */
    return;

unless_running:
    if ((uint32_t)lifetime - 1u <= 0xFFFEu)
        item->lifetime = LIFETIME_FOREVER;
}

/* ---- phones ---------------------------------------------------------------- */

static void hang_up(int item)
{
    int32_t partner = item_call_partner(item);
    item_call_state(item) = 0;
    item_call_state(partner) = 0;
    item_call_partner(item_call_partner(item)) = -1;
    item_call_number(item_call_partner(item)) = 0;
    sr_item_phone_changed(item_call_partner(item));
    item_call_number(item) = 0;
    item_call_partner(item) = -1;
    sr_item_phone_changed(item);
}

static void phone_dial(int item)
{
    int32_t number = item_dialled_number(item);
    int other;

    if (number < 1000)
        return;
    item_dialled_number(item) = 0;
    item_timer(item) = 180;
    for (other = 0; other < WORLD_ITEM_CAPACITY; other++) {
        const WorldItem *o = &world_items[other];
        if (o->active && other != item && is_phone(o) && number == item_phone_number(other))
            break;
    }
    if (other == WORLD_ITEM_CAPACITY)
        return;
    if (item_call_partner(other) != -1) {
        item_call_state(item) = 4;                   /* engaged */
        item_call_number(item) = 0;
        sr_item_phone_changed(item);
        return;
    }
    item_call_state(item) = 2;
    item_call_state(other) = 2;
    item_call_partner(item) = other;
    item_call_number(item) = 0;
    item_call_number(other) = item_phone_number(item);
    sr_item_phone_changed(item);
    sr_item_phone_changed(other);
}

static void phone_states(int item)
{
    if (item_timer(item) > 0)
        item_timer(item)--;

    int32_t state = item_call_state(item);
    if (state == 0) {
        item_call_ticks(item) = 0;
        if (pressed(item, 1)) {
            item_call_state(item) = 1;
            item_call_number(item) = 0;
            item_dialled_number(item) = 0;
            sr_item_phone_changed(item);
        }
        return;
    }
    if (state == 4) {
        int32_t ticks = item_call_ticks(item) + 1;
        int32_t tick = game_tick;
        item_call_ticks(item) = ticks;
        if ((tick & 0x3F) == 0 && game_connected)
            ring_event(tick, item_event_ring, item, 1.0f);
        if (ticks >= 360 || pressed(item, 1)) {
            item_call_state(item) = 0;
            item_call_ticks(item) = 0;
            item_call_number(item) = 0;
            item_dialled_number(item) = 0;
            item_call_partner(item) = -1;
            sr_item_phone_changed(item);
        }
        return;
    }
    if (state == 1) {
        item_call_ticks(item) = 0;
        if (pressed(item, 1)) {
            item_call_state(item) = 0;
            item_call_number(item) = 0;
            item_dialled_number(item) = 0;
            sr_item_phone_changed(item);
        }
        phone_dial(item);
        return;
    }

    if (state == 3) {
        int32_t partner = item_call_partner(item);
        if (partner == -1 || !world_items[partner].active) {
            item_call_state(item) = 0;
            item_call_partner(item) = -1;
            item_call_number(item) = 0;
            sr_item_phone_changed(item);
            state = 0;
        }
    }
    if (state == 2) {
        int32_t partner = item_call_partner(item);
        if (partner == -1 || item_call_partner(partner) != -1) {
            item_call_ticks(item) = 0;               /* the called phone, or the call broke */
        } else {
            int32_t tick = game_tick;
            if ((tick & 0x7F) == 0 && game_connected) {
                int32_t sound = item_event_ring_back;
                ring_event(tick, sound, partner, 1.0f);
                ring_event(tick, sound, item, 0.5f);
            }
            if (++item_call_ticks(item) >= 768) {   /* no answer */
                item_call_state(item) = 0;
                item_call_state(partner) = 0;
                item_call_number(item_call_partner(item)) = 0;
                sr_item_phone_changed(item_call_partner(item));
                item_call_partner(item) = -1;
                item_call_number(item) = 0;
                sr_item_phone_changed(item);
            }
        }
    }

    if (!pressed(item, 1))
        return;
    if (item_call_partner(item) != -1) {
        hang_up(item);
        return;
    }
    /* Answer: every phone ringing this one. */
    for (int other = 0; other < WORLD_ITEM_CAPACITY; other++) {
        const WorldItem *o = &world_items[other];
        if (o->active && other != item && is_phone(o) && item_call_partner(other) == item) {
            item_call_state(item) = 3;
            item_call_state(other) = 3;
            item_call_partner(item) = other;
            item_call_number(item) = item_phone_number(other);
            sr_item_phone_changed(item);
            item_call_number(other) = item_phone_number(item);
            sr_item_phone_changed(other);
        }
    }
}

/* ---- computers, grenades, type 30, first aid ------------------------------- */

static void computer_states(int item)
{
    int32_t state = item_computer_state(item);
    if (state == 0) {
        sub_1400C3ED0(item);
        state = item_computer_state(item);
    }
    if (state == 1 && item_computer_countdown(item) > 0) {
        int32_t left = item_computer_countdown(item) - 1;
        item_computer_countdown(item) = left;
        if (left == 0) {
            int tries = 0;
            int pick = rand() % 26;
            for (;;) {
                int32_t k = item_computer_slot(item, pick);
                if (item_computer_used(item, k) && item_computer_owner(item, k) == -1)
                    break;
                pick = rand() % 26;
                if (++tries >= 1000)
                    break;
            }
            item_computer_owner(item, item_computer_slot(item, pick)) = pick;
            sub_1400C5750(item);
            item_unknown_3b4(item) = 0;
            sr_item_link_text_line(item, 1);
            state = item_computer_state(item);
        }
    }
    if (state == 2) {
        sub_1400C8500(item);
        state = item_computer_state(item);
    }
    if (state == 3)
        sub_1400C9820(item);
}

static void grenade_states(int index, WorldItem *item)
{
    if (item_charges(index) > 0) {                   /* pin in: the second button pulls it */
        if (pressed(index, 2)) {
            item_timer(index) = 240;
            item_charges(index) = 0;
            if (item->holder != -1)
                item_player(index) = world_humans[item->holder].player;
        }
        return;
    }
    int32_t fuse = item_timer(index);
    if (fuse <= 0)
        return;
    if (fuse == 240) {                               /* held with the pin out: put it back, or let go */
        if (pressed(index, 2)) {
            item_charges(index) = 1;
            item_player(index) = -1;
        } else if (item->holder == -1) {
            item_timer(index) = 239;
        }
        return;
    }
    item_timer(index) = --fuse;
    if (fuse != 1)
        return;
    item->lifetime = 0;
    if (game_connected) {
        WorldEvent *event = add_event();
        event->type = 20;
        event->tick = game_tick;
        event->a = 0;
        event->vector_a[0] = item->position[0];
        event->vector_a[1] = item->position[1];
        event->vector_a[2] = item->position[2];
    }
    sr_item_grenade_explode(index);
}

static void use_up(int index, WorldItem *item)
{
    if (--item_charges(index) <= 0)
        item->lifetime = 0;
}

/* Type 30, on letting go of the button, if its holder may use one again. */
static void type30_use(int index, WorldItem *item)
{
    int32_t h = item->holder;
    if (h == -1 || human_unknown_18(h) != 0)
        return;
    human_unknown_20(h) += 16;
    int32_t value = human_unknown_20(h);
    human_unknown_18(h) = 300;
    if (value > 255)
        value = 255;
    human_unknown_14(h) += 8;
    human_unknown_20(h) = value;
    value = human_unknown_14(h);
    if (value > 105)
        value = 105;
    human_unknown_14(h) = value;
    use_up(index, item);
}

/* First aid (type 14), while the button is held: the nearest living human
   within 2 units who bleeds or is nearly dead; after 256 ticks it stops the
   bleeding. Its holder sees the progress. */
static void first_aid(int index, WorldItem *item)
{
    int best = -1;
    float best_distance = 2.0f;

    for (int h = 0; h < 256; h++) {
        const WorldHuman *human = &world_humans[h];
        if (!human->active || human->unknown_3c <= 0 || (!human->bleeding && human->unknown_3c >= 10))
            continue;
        float dx = ((const float *)human->unknown_80)[0] - item->position[0];
        float dy = ((const float *)human->unknown_80)[1] - item->position[1];
        float dz = ((const float *)human->unknown_80)[2] - item->position[2];
        float distance = sqrt_float((dy * dy + dx * dx) + dz * dz);
        if (best_distance > distance) {
            best = h;
            best_distance = distance;
        }
    }
    if (best == -1)
        return;
    int32_t progress = item_timer(index) + 1;
    item_timer(index) = progress;
    if (item->holder != -1)
        world_humans[item->holder].unknown_6ddc = (int32_t)((uint32_t)progress << 8) / 256;
    if (progress < 256)
        return;
    item_timer(index) = 0;
    WorldHuman *patient = &world_humans[best];
    int32_t alive = patient->unknown_3c;
    patient->bleeding = 0;
    if (alive < 10)
        patient->unknown_3c = 10;
    use_up(index, item);
}

/* ---- the tick -------------------------------------------------------------- */

void item_tick_states(void)
{
    for (int list = 0; list < 128; list++)
        item_type26_lists[list].count = 0;

    for (int i = 0; i < WORLD_ITEM_CAPACITY; i++) {
        WorldItem *item = &world_items[i];
        if (!item->active)
            continue;
        if (item->type == 26) {
            ItemList *list = &item_type26_lists[item_unknown_368(i) & 0x7F];
            if (list->count < 256)
                list->items[list->count++] = i;
        }
        if (item->holder != -1)
            sr_item_follow_body(i, item->holder);
    }

    for (int i = 0; i < WORLD_ITEM_CAPACITY; i++) {
        WorldItem *item = &world_items[i];
        if (item->active && item->parent != -1)
            follow_parent(item);
    }

    for (int i = 0; i < WORLD_ITEM_CAPACITY; i++) {
        WorldItem *item = &world_items[i];
        if (!item->active)
            continue;

        int loose = lying_free(item);
        int32_t type = item->type;
        update_lifetime(item, loose);
        if (item_type_is_gun(type))
            sr_item_gun_tick(i);

        type = item->type;
        if (type == WORLD_ITEM_TYPE_27) {
            int32_t vehicle = world_item_vehicle(i);
            if ((uint32_t)vehicle <= 0x1FF) {
                if (physics_vehicles[vehicle].active)
                    item->lifetime = LIFETIME_FOREVER;
                int32_t holder = item->holder;
                vehicle_unknown_20(vehicle) = 1;
                if (holder != -1 && world_humans[holder].vehicle == vehicle) {
                    vehicle_unknown_24(vehicle) = world_humans[holder].player;
                    vehicle_unknown_20(vehicle) = 0;
                }
            }
        } else if (type == 26) {
            item_unknown_36c(i) = 0;
            if (item_input(i) & 1)
                item_unknown_36c(i) = 1;
        } else if (type == ITEM_TYPE_PHONE || type == ITEM_TYPE_PHONE_2) {
            phone_states(i);
        }

        if (item->type == 39)
            computer_states(i);

        type = item->type;
        if (type == 40) {
            item_unknown_36c(i) = 64;
            item_unknown_368(i) = (uint8_t)(item_unknown_368(i) + 1);
        } else if (type == 13 && game_state == 2) {
            grenade_states(i, item);
        }

        uint32_t input = item_input(i);
        uint32_t use = input & 1;
        if (use && !(item_previous_input(i) & 1)) {
            int toggled = 1;
            if (item->type == 15)
                item->type = 16;                     /* radio on and off */
            else if (item->type == 16)
                item->type = 15;
            else
                toggled = 0;
            if (toggled && game_connected && (uint32_t)i <= 0x3FF)
                world_item_change_count(i)++;
        }
        if (item->type == 30) {
            if (!use && (item_previous_input(i) & 1))
                type30_use(i, item);
        } else if (item->type == 14) {
            if (use)
                first_aid(i, item);
            else
                item_timer(i) = 0;
        }
        item_previous_input(i) = input;
        item_input(i) = 0;
    }
}
