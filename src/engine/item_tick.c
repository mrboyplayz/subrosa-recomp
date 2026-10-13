/* The per-tick item update. 0x1400CC610

   1. Walkie-talkies are filed by channel; items worn on a body follow it.
   2. Items attached to an item take its position and rotation, then sit
      where that item puts them (cash in a briefcase, disks in a computer).
   3. Each item: its lifetime, then the work of its type (items/). */
#include "item_tick.h"
#include "items/items.h"

/* Rope, Cash (both) and Cell Phone: a lone item of these types never runs
   out. */
static int lifetime_kept(int32_t type)
{
    return (uint32_t)type <= ITEM_ROPE && ((0x1002060000ULL >> type) & 1);
}

/* The original compares the slot unsigned, so negative slots count as body
   slots too. The item turns with the chest: its first row is the chest's
   first, its second the chest's third reversed, its third the chest's
   second. It sits a quarter unit back along its second row and an eighth
   along its first. */
void item_follow_holder(int i, int h)
{
    WorldItem *item = &world_items[i];
    if ((uint32_t)item->slot <= 1)
        return;
    const WorldHuman *human = &world_humans[h];
    const HumanBone *chest = &human->bones[HUMAN_BONE_CHEST];
    const HumanBone *pelvis = &human->bones[HUMAN_BONE_PELVIS];
    float *r = item->rotation;
    for (int k = 0; k < 3; k++) {
        r[k] = chest->rotation[k];
        r[3 + k] = -chest->rotation[6 + k];
        r[6 + k] = chest->rotation[3 + k];
    }
    for (int axis = 0; axis < 3; axis++)
        item->position[axis] = chest->position[axis] - r[3 + axis] * 0.25f;
    for (int axis = 0; axis < 3; axis++)
        item->position[axis] = r[axis] * 0.125f + item->position[axis];

    /* Where it was: at the pelvis, or the vehicle the holder sits in. */
    for (int axis = 0; axis < 3; axis++)
        item->previous_position[axis] = pelvis->position[axis];
    if (human->vehicle != -1)
        for (int axis = 0; axis < 3; axis++)
            item->previous_position[axis] = physics_vehicles[human->vehicle].position[axis];

    PhysicsBody *body = &physics_bodies[item->body];
    for (int axis = 0; axis < 3; axis++) {
        item->velocity[axis] = pelvis->velocity[axis];
        body->velocity[axis] = pelvis->velocity[axis];
        body->angular_momentum[axis] = 0.0f;
        body->angular_velocity[axis] = 0.0f;
    }
}

static void follow_parents(void)
{
    for (int i = 0; i < WORLD_ITEM_CAPACITY; i++) {
        WorldItem *item = &world_items[i];
        if (!item->active || item->parent == -1)
            continue;
        WorldItem *parent = &world_items[item->parent];
        float position[3];
        for (int axis = 0; axis < 3; axis++) {
            position[axis] = parent->position[axis];
            item->position[axis] = position[axis];
        }
        for (int k = 0; k < 9; k++)
            item->rotation[k] = parent->rotation[k];
        int32_t parent_type = parent->type;
        if ((uint32_t)parent_type - ITEM_BRIEFCASE <= 1u) {
            briefcase_place_child(item, position);
        } else if (parent_type == ITEM_COMPUTER) {
            computer_place_child(item, parent, position);
        } else {
            /* Anything else hangs a sixteenth of a unit back along the
               parent's second row. */
            const float *r = item->rotation;
            for (int axis = 0; axis < 3; axis++)
                position[axis] = position[axis] - r[3 + axis] * 0.0625f;
        }
        for (int axis = 0; axis < 3; axis++)
            item->position[axis] = position[axis];
        for (int axis = 0; axis < 3; axis++)
            item->previous_position[axis] = position[axis];
    }
}

/* Counts the lifetime down (from at most 18000), or holds it at 0xFFFF,
   where it never runs out. */
static void update_lifetime(WorldItem *item)
{
    int32_t holder = item->holder;
    int counts_down;
    if (holder == -1 && item->parent == -1 && !lifetime_kept(item->type)) {
        counts_down = 1;
    } else {
        /* Attached to a gun that nobody holds. */
        counts_down = 0;
        int32_t parent = item->parent;
        if (parent != -1 && item_type_is_gun(world_items[parent].type) != 0)
            counts_down = world_items[parent].holder == -1;
    }
    int32_t type = item->type;
    if ((uint32_t)type - ITEM_BLACK_DISK <= ITEM_RED_DISK - ITEM_BLACK_DISK)
        counts_down = 0;                 /* disks never run out */
    int32_t lifetime = item->lifetime;
    if (lifetime >= 0x10000) {
        if (holder == -1)
            goto hold;
        item->lifetime = 18000;
        lifetime = 18000;
    }
    if (!counts_down)
        goto hold;
    if (lifetime > 18000)
        lifetime = 18000;
    if ((type == ITEM_BIG_BOX || type == ITEM_WATERMELON) && lifetime > 18000)
        lifetime = 18000;
    lifetime = (int32_t)((uint32_t)lifetime - 1u);
    if (item->child_count > 0)
        lifetime = 18000;
    item->lifetime = lifetime;
    /* Game types 3 and 5 keep every item. */
    if ((((uint32_t)game_type - 3u) & ~2u) == 0 && lifetime > 0)
        item->lifetime = 0xFFFF;
    return;
hold:
    if ((uint32_t)lifetime - 1u <= 0xFFFEu)
        item->lifetime = 0xFFFF;
}

static void update_item(int i)
{
    WorldItem *item = &world_items[i];
    int32_t type = item->type;
    update_lifetime(item);
    if (item_type_is_gun(type) != 0)
        gun_update(i);

    type = item->type;
    if (type == ITEM_KEY)
        key_update(i);
    else if (type == ITEM_WALKIE_TALKIE)
        walkie_talkie_update(i);
    else if (item_is_phone(type))
        phone_update(i);

    if (item->type == ITEM_COMPUTER)
        computer_update(i);

    type = item->type;
    if (type == ITEM_ARCADE)
        arcade_update(i);
    else if (type == ITEM_GRENADE && game_state == 2)
        grenade_update(i);

    uint32_t bits = item_input_flags(i);
    int held_down = bits & 1;
    if (held_down && !(item_last_input_flags(i) & 1))
        briefcase_toggle(i);

    int used = 0;
    type = item->type;
    if (type == ITEM_BURGER)
        used = burger_update(i, held_down, item_last_input_flags(i) & 1);
    else if (type == ITEM_BANDAGE)
        used = bandage_update(i, held_down);
    if (used) {
        item_bullets(i)--;
        if (item_bullets(i) <= 0)
            item->lifetime = 0;
    }

    item_last_input_flags(i) = bits;
    item_input_flags(i) = 0;
}

void item_update(void)
{
    for (int channel = 0; channel < WALKIE_TALKIE_CHANNELS; channel++)
        walkie_talkie_list_count(channel) = 0;
    for (int i = 0; i < WORLD_ITEM_CAPACITY; i++) {
        WorldItem *item = &world_items[i];
        if (!item->active)
            continue;
        if (item->type == ITEM_WALKIE_TALKIE)
            walkie_talkie_file(i);
        int32_t holder = item->holder;
        if (holder != -1)
            item_follow_holder(i, holder);
    }

    follow_parents();

    for (int i = 0; i < WORLD_ITEM_CAPACITY; i++)
        if (world_items[i].active)
            update_item(i);
}
