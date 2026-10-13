/* What a human's hands do with items, doors and other humans, once a tick.
 *
 * For each hand (hands[0] goes with bone 9, hands[1] with bone 6):
 *  - an item more than 1.75 from the hand, or any item while health is
 *    below 50, is let go;
 *  - a held item: type 28 gets the hand's target worked out, type 36 is let
 *    go without input flag 0x800, type 39 when it is more than a unit from
 *    the pelvis's line or on a click; types 19-24 are hung on the nearest
 *    free type 39 in front of the head on a click; the item's use flags get
 *    the trigger bits from the input;
 *  - an empty hand: hand 0 on a click queues picking up the nearest free
 *    item in front of the head; a click on a door block of the player's
 *    corporation, from inside its area, opens or closes the door; while
 *    input flag 0x800 holds, the grip on another human is renewed as a bond
 *    between the two bones, and lost once they drift apart or stamina runs
 *    out.
 * Then input flag 0x2000 swaps what the hands hold, and every carried item
 * has its unknown_8 cleared.
 *
 * "A click" is bit 0 of last_input_flags set while bit 0 of input_flags is
 * clear.
 */
#include <string.h>
#include "arith.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "math3d.h"
#include "physics.h"
#include "world.h"

/* ---- still recompiled code ------------------------------------------------- */

/* World item routines (src/engine/world_items.c and item_state.c ports), called
   through the client so tests can stand in for them. */
extern void sub_1400CA7C0(int item, int human, int slot);       /* world_take_item */
extern long long sub_1400CA9B0(int item, int parent);           /* world_detach_item */
extern long long sub_1400E35D0(int item, int child, int human, int slot); /* item_transfer */
/* Sweeps the level from `from` to `to`; nonzero on a hit, which it leaves in
   item_hit_layer / item_hit_voxel / item_hit_unknown_7c. */
extern int sub_1400DC050(float *from, float *to, int unknown);
/* The block at a voxel of a level layer. */
extern long long sub_140016590(int layer, int x, int y, int z);
/* Whether a position is within a corporation's area, with a margin. */
extern long long sub_14011B8F0(float *position, int corporation, float margin);
/* Sends the event that a corporation's door opens (1) or closes (0). */
extern long long sub_1400518B0(int corporation, int open);
/* A free PhysicsBond, -1: none. */
extern long long sub_1400A4440(void);

/* ---- fields used only here -------------------------------------------------- */

/* Bits the hand sets in a held item for the item's own update: 1 used,
   2 input flag 0x1000. Item + 0x150 */
#define item_use_flags(i) SR_GLOBAL(uint32_t, 0x182BBB2D0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
/* Item type 28: the point the hand's target starts from. Item + 0x300 */
#define item_hold_base(i) (&SR_GLOBAL(float, 0x182BBB480ULL + 0x1B80ULL * (uint64_t)(int64_t)(i)))
/* An item type's hold points, 12 bytes each. Item type + 0x80 */
#define item_type_hold_point(type, point) \
    (&SR_GLOBAL(float, 0x182A7E200ULL + 0x13D0ULL * (uint64_t)(int64_t)(type) + 12ULL * (uint64_t)(int64_t)(point)))

/* The player's corporation (RosaServer: Player.team). Player + 0x84 */
#define player_team(p) SR_GLOBAL(int32_t, 0x151620CE4ULL + 0x3834ULL * (uint64_t)(int64_t)(p))
/* RosaServer: Corporation.isDoorOpen; corporations at 0x183EBFD60, 0x5BC4 bytes each. */
#define corporation_door_open(c) SR_GLOBAL(int32_t, 0x183EBFDC0ULL + 0x5BC4ULL * (uint64_t)(int64_t)(c))
/* The first and last block ids of a door, compared with the top bit set. */
#define door_block_first SR_GLOBAL(uint32_t, 0x14500CA14ULL)
#define door_block_last SR_GLOBAL(uint32_t, 0x14500CA20ULL)

enum {
    ITEM_TYPE_28 = 28,
    ITEM_TYPE_36 = 36,
    ITEM_TYPE_39 = 39,                   /* other items hang on it */
    GAME_TYPE_5 = 5,
    GAME_STATE_PLAYING = 2,
    ACTION_PICK_UP = 3,
    ACTION_TAKE_OFF = 4,
};

static const float up_axis[3] = { 0.0f, 1.0f, 0.0f };

/* Takes item out of the hand, slot or item that holds it, counting the change
   when connected. Indices above 1023 are left alone. */
static void let_go(int item)
{
    const WorldItem *it;

    if ((uint32_t)item > 0x3FF)
        return;
    it = &world_items[item];
    if (it->parent != -1)
        sub_1400CA9B0(item, it->parent);
    else if (it->holder != -1)
        sub_1400CA7C0(item, it->holder, it->slot);
    else
        return;
    if (game_connected)
        world_item_change_count(item) = add_int(world_item_change_count(item), 1);
}

static int clicked(const WorldHuman *h)
{
    return !(h->input_flags & 1) && (h->last_input_flags & 1);
}

/* The head's point and a point `reach` ahead of it, against its third row. */
static void head_reach(const WorldHuman *h, float reach, float out[3])
{
    const HumanBone *head = &h->bones[HUMAN_BONE_HEAD];

    out[0] = head->position[0] - head->rotation[6] * reach;
    out[1] = head->position[1] - head->rotation[7] * reach;
    out[2] = head->position[2] - head->rotation[8] * reach;
}

/* v (a row vector) times rotation r. */
static void rotate_point(float v[3], const float r[9])
{
    float x = v[0], y = v[1], z = v[2];

    v[0] = (x * r[0] + y * r[3]) + z * r[6];
    v[1] = (y * r[4] + x * r[1]) + z * r[7];
    v[2] = (y * r[5] + x * r[2]) + z * r[8];
}

/* Item type 28: the hand goes to the item's base point plus half its yaw's
   first row plus the hold point turned by the yaw. */
static void aim_type_28(WorldHuman *h, int hand, int item)
{
    float m[9] = { 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f };
    HumanGrip *grip = &h->grips[hand];
    const float *base = item_hold_base(item);
    int type;

    math_mat3_rotate_rows(m, up_axis, h->input_turn_yaw);
    type = world_items[item].type;
    grip->target[1] = m[1] * 0.5f + base[1];
    grip->target[2] = m[2] * 0.5f + base[2];
    grip->target[0] = m[0] * 0.5f + base[0];
    for (int k = 0; k < 3; k++) {
        float along = item_type_hold_point(type, h->hands[hand].hold_point)[k];
        grip->target[0] = m[3 * k] * along + grip->target[0];
        grip->target[1] = m[3 * k + 1] * along + grip->target[1];
        grip->target[2] = m[3 * k + 2] * along + grip->target[2];
    }
    grip->target_yaw = h->input_turn_yaw;
}

/* Distance of an item from the line from the head to 1.5 ahead of it. */
static float distance_ahead(const WorldHuman *h, const float reach[3], int item)
{
    return math_point_segment_distance(h->bones[HUMAN_BONE_HEAD].position, reach, world_items[item].position);
}

/* The nearest free item type 39 within 1/2 of the line ahead of the head;
   -1: none. A NaN distance counts as nearer, as the original's COMISS + JAE
   have it. */
static int nearest_hook(const WorldHuman *h)
{
    float reach[3], best = 0.5f;
    int found = -1;

    head_reach(h, 1.5f, reach);
    for (int i = 0; i < 1024; i++) {
        const WorldItem *it = &world_items[i];
        float distance;

        if (!it->active || it->type != ITEM_TYPE_39 || it->holder != -1)
            continue;
        distance = distance_ahead(h, reach, i);
        if (!(distance >= best)) {
            best = distance;
            found = i;
        }
    }
    return found;
}

/* The same for any item no one holds, directly or through its parent. */
static int nearest_loose_item(const WorldHuman *h)
{
    float reach[3], best = 0.5f;
    int found = -1;

    head_reach(h, 1.5f, reach);
    for (int i = 0; i < 1024; i++) {
        const WorldItem *it = &world_items[i];
        float distance;

        if (!it->active || it->holder != -1)
            continue;
        distance = distance_ahead(h, reach, i);
        if (!(distance >= best) && (it->parent == -1 || world_items[it->parent].holder == -1)) {
            best = distance;
            found = i;
        }
    }
    return found;
}

static void use_held_item(WorldHuman *h, int hand, int item, int action, int want_use)
{
    WorldItem *it = &world_items[item];
    int type = it->type;
    uint32_t flags;

    if (type == ITEM_TYPE_28) {
        aim_type_28(h, hand, item);
        type = it->type;
    }
    if (type == ITEM_TYPE_36 && !(h->input_flags & 0x800))
        let_go(item);
    if (it->type == ITEM_TYPE_39) {
        const HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
        float end[3];

        end[0] = pelvis->position[0] - (pelvis->rotation[6] + pelvis->rotation[6]);
        end[1] = pelvis->position[1] - (pelvis->rotation[7] + pelvis->rotation[7]);
        end[2] = pelvis->position[2] - (pelvis->rotation[8] + pelvis->rotation[8]);
        if (math_point_segment_distance(pelvis->position, end, it->position) > 1.0f || clicked(h))
            let_go(item);
    }
    if ((uint32_t)(it->type - 19) <= 5 && clicked(h)) {
        int hook = nearest_hook(h);
        if (hook != -1 && world_items[hook].child_count == 0) {
            let_go(item);
            sub_1400E35D0(hook, item, -1, 0);
        }
    }

    flags = (uint32_t)h->input_flags;
    if (flags & 0x1000)
        item_use_flags(item) |= 2;
    if (!(flags & 0x1020) && action == -1 && want_use)
        item_use_flags(item) |= 1;
}

/* Hand 0, empty, on a click: queues picking up the nearest loose item ahead
   (taking it off an item type 39 first; other holders keep theirs). */
static void reach_for_item(WorldHuman *h)
{
    int found = nearest_loose_item(h);
    int parent;

    if (found == -1)
        return;
    parent = world_items[found].parent;
    if (parent != -1) {
        if (world_items[parent].type != ITEM_TYPE_39)
            return;
        sub_1400E35D0(found, -1, -1, 0);
    }
    h->actions[h->next_action].kind = world_items[found].type == ITEM_TYPE_39 ? ACTION_TAKE_OFF : ACTION_PICK_UP;
    h->actions[h->next_action].argument_28 = 0;
    h->actions[h->next_action].argument_2c = 0;
    h->actions[h->next_action].argument_4 = 0;
    h->next_action = (h->next_action + 1) & 7;
}

/* A click on a door block within 2.5 ahead of the head opens the door of the
   player's corporation when it is shut (any hit of kind 6 too), or shuts it
   when open, if the human stands in the corporation's area. Returns whether
   it did. */
static int use_door(WorldHuman *h, int player)
{
    float reach[3];
    uint32_t block, first, last;
    int corporation, in_range;

    head_reach(h, 2.5f, reach);
    if (!sub_1400DC050(h->bones[HUMAN_BONE_HEAD].position, reach, 0) || item_hit_layer == -1)
        return 0;
    block = (uint32_t)sub_140016590(item_hit_layer, item_hit_voxel[0], item_hit_voxel[1], item_hit_voxel[2]) &
            0xFCFFFFFFu;
    if (game_state != GAME_STATE_PLAYING || game_type == GAME_TYPE_5)
        return 0;
    corporation = player_team(player);
    if ((uint32_t)corporation > 5 || !(int)sub_14011B8F0((float *)h->position, corporation, 4.0f))
        return 0;
    first = door_block_first | 0x80000000u;
    last = door_block_last | 0x80000000u;
    in_range = block >= first && block <= last;
    if ((item_hit_unknown_7c == 6 || in_range) && !corporation_door_open(corporation)) {
        sub_1400518B0(corporation, 1);
        corporation_door_open(corporation) = 1;
        return 1;
    }
    if (in_range && corporation_door_open(corporation) == 1) {
        sub_1400518B0(corporation, 0);
        corporation_door_open(corporation) = 0;
        return 1;
    }
    return 0;
}

/* Renews the grip on another human: a fresh bond holding the hand's centre to
   the gripped point, made live only while the grip holds. It is dropped when
   the other human is gone, the two points are more than 1/8 apart, or
   stamina is below 8; holding costs a point of stamina every fourth tick. */
static void hold_human(WorldHuman *h, int human, int hand)
{
    HumanGrip *grip = &h->grips[hand];
    int active = grip->active, other, bone, index, hand_bone = 3 * (3 - hand);
    const HumanBone *own, *held;
    PhysicsBond *b;

    if (!active || grip->human == -1)
        return;
    other = grip->human;
    if (!world_humans[other].active) {
        grip->active = 0;
        active = 0;
    }
    index = (int)sub_1400A4440();
    if (index == -1)
        return;
    b = &physics_bonds[index];
    memset(b, 0, sizeof *b);
    bone = grip->bone;
    own = &h->bones[hand_bone];
    held = &world_humans[other].bones[bone];

    b->unknown_a0 = other;
    b->body = human;
    b->unknown_a4 = bone;
    b->other_body = hand_bone;
    b->stiffness = 0.1875f;
    b->damping = 0.1875f;
    b->pass_mask = 0;
    b->local_point[0] = 0.0f;
    b->local_point[1] = 0.0f;
    b->local_point[2] = 0.0f;
    b->other_local_point[0] = grip->point[0];
    b->other_local_point[1] = grip->point[1];
    b->other_local_point[2] = grip->point[2];
    rotate_point(b->local_point, own->rotation);
    rotate_point(b->other_local_point, held->rotation);
    {
        float ax = b->local_point[0] + own->position[0];
        float ay = b->local_point[1] + own->position[1];
        float az = b->local_point[2] + own->position[2];
        float dx = (b->other_local_point[0] + held->position[0]) - ax;
        float dy = (b->other_local_point[1] + held->position[1]) - ay;
        float dz = (b->other_local_point[2] + held->position[2]) - az;

        if (sqrt_float((dy * dy + dx * dx) + dz * dz) > 0.125f) {
            grip->active = 0;
            active = 0;
        }
    }
    if (h->stamina < 8) {
        grip->active = 0;
        active = 0;
    }
    {
        float own_mass = own->mass, held_mass = held->mass;
        float share = 1.0f / (held_mass + own_mass);
        /* Type 7 bonds: each body's share of the correction. */
        b->point_weight[1] = share * own_mass;
        b->point_weight[0] = share * held_mass;
    }
    if (!active)
        return;
    b->active = 1;
    b->type = PHYSICS_BOND_BODIES;
    b->lifetime = 0;
    b->pass_mask = 0;
    b->body = own->body;
    b->other_body = held->body;
    b->stiffness = 0.0625f;
    b->damping = 0.1875f;
    if (!(game_tick & 3) && h->stamina > 0)
        h->stamina--;
}

/* 0x1400B62E0 */
void human_use_hands(int human)
{
    WorldHuman *h = &world_humans[human];
    int player = h->player != -1 ? h->player : 0;
    int door_used = 0;

    if (h->arm_cooldown > 0)
        h->arm_cooldown--;

    for (int hand = 0; hand < 2; hand++) {
        HumanHand *slot = &h->hands[hand];
        uint32_t flags;
        int want_use = 0, action;

        if (slot->count > 0) {
            int item = slot->items[0];
            const float *at = h->bones[3 * (3 - hand)].position, *it = world_items[item].position;
            float dx = at[0] - it[0], dy = at[1] - it[1], dz = at[2] - it[2];

            if (sqrt_float((dy * dy + dx * dx) + dz * dz) > 1.75f)
                let_go(item);
        }

        flags = (uint32_t)h->input_flags;
        if (flags & 1) {
            if (hand == 0)
                want_use = !(flags & 0x10);
            else if (hand == 1)
                want_use = (flags & 0x10) != 0;
        }
        flags = (uint32_t)h->input_flags;
        action = flags & 0x40 ? 0 : -1;
        if (flags & 0x80)
            action = 1;
        if (flags & 0x100)
            action = 2;
        if (flags & 0x200)
            action = 3;
        if (flags & 0x400)
            action = 4;

        if (h->health < 50 && slot->count > 0)
            let_go(slot->items[0]);

        if (slot->count > 0) {
            use_held_item(h, hand, slot->items[0], action, want_use);
            continue;
        }

        if (hand == 0 && clicked(h) && slot->count == 0)
            reach_for_item(h);
        if (action == -1 && slot->count == 0 && !h->grips[hand].active && clicked(h) && !door_used)
            door_used = use_door(h, player);
        if (!(h->input_flags & 0x800))
            h->grips[hand].active = 0;
        hold_human(h, human, hand);
    }

    if ((h->input_flags & 0x2000) && !(h->last_input_flags & 0x2000)) {
        int count = h->hands[0].count;

        if (count > 0) {
            int first = h->hands[0].items[0];
            if (h->hands[1].count != 0) {
                int second = h->hands[1].items[0];
                sub_1400E35D0(first, -1, -1, 0);
                sub_1400E35D0(second, -1, human, 0);
            }
            sub_1400E35D0(first, -1, human, 1);
        } else if (h->hands[1].count > 0 && count == 0) {
            sub_1400E35D0(h->hands[1].items[0], -1, human, 0);
        }
    }

    for (int s = 0; s < 7; s++)
        for (int j = 0; j < item_inventory_slot(human, s)->count; j++) {
            int item = item_inventory_entry(human, s, j);
            int type = world_items[item].type;

            world_items[item].unknown_8 = 0;
            if (item_type_is_gun(type))
                h->spawn_protection = 0;
        }
}
