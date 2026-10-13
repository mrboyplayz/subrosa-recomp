/* What a player keeps of their human's inventory between humans, the
 * player's mute toggle, and a corporation's cars. Checked against the
 * original machine code at 0x140117340, 0x140117020, 0x140117820 and
 * 0x1400F00D0.
 */
#include "player.h"
#include "corporation.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "physics.h"
#include "saved_cars.h"
#include "vehicle.h"

extern uint64_t sr_CreateItem(int32_t type, const float position[3], const float *velocity, const float rotation[9]);

#define GAME_TYPE_WORLD 4
#define INVENTORY_SLOTS 7                /* the two hands and five slots on the body */
#define ITEM_LAST_GUN_TYPE 14            /* types up to here are guns and their magazines */
#define ITEM_TYPE_CASH 18
#define ITEM_TYPE_CAR_KEY 27
#define PARKING_TEAMS 3                  /* only teams 0 to 2 get a car back for a key */

#define item_bullets(i) SR_GLOBAL(int32_t, 0x182BBB2C4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
/* Rounds a magazine of the type holds (RosaServer: magazineAmmo). */
#define item_type_magazine_ammo(type) SR_GLOBAL(int32_t, 0x182A7E1A4ULL + 0x13D0ULL * (uint64_t)(int64_t)(type))

/* Whether the local player has muted each player, and the phone numbers of
   everyone muted (kept across reconnections). */
#define MAX_MUTED 1024
#define player_muted(p) SR_GLOBAL(int32_t, 0x183F7AEF4ULL + 4ULL * (uint64_t)(int64_t)(p))
#define muted_count SR_GLOBAL(int32_t, 0x183F7B2F4ULL)
#define muted_phone_numbers (&SR_GLOBAL(uint32_t, 0x183F7B2F8ULL))

/* Entry n of the player's saved slot, without the C array bound: the count
   is not checked against the eight entries there are room for. */
static int32_t *saved_entry(PlayerInventorySlot *slot, int n)
{
    return &slot->entries[0][0] + 3 * (int64_t)n;
}

void player_save_inventory(int index)
{
    Player *player = &world_players[index];
    int human, slot;

    for (slot = 0; slot < INVENTORY_SLOTS; slot++)
        player->inventory[slot].count = 0;
    human = player->human;
    if (human == -1)
        return;

    for (slot = 0; slot < INVENTORY_SLOTS; slot++) {
        PlayerInventorySlot *saved = &player->inventory[slot];
        int count = item_inventory_slot(human, slot)->count;
        int i;

        for (i = 0; i < count; i++) {
            int item = item_inventory_entry(human, slot, i);
            int type = world_items[item].type;
            int32_t *entry = saved_entry(saved, saved->count);

            if (type <= ITEM_LAST_GUN_TYPE) {
                entry[0] = type;
                entry[1] = 0;
                entry[2] = 0;
                if (world_items[item].child_count <= 0) {
                    entry[2] = item_bullets(item);
                } else {
                    /* entry[1]: a magazine is in, entry[2] its rounds and
                       one in the chamber if it fits. */
                    int magazine = world_items[item].children[0];
                    int rounds = item_bullets(magazine);
                    int chambered = item_bullets(item) > 0;

                    entry[1] = 1;
                    entry[2] = rounds;
                    if (chambered &&
                        rounds < (int32_t)((uint32_t)item_type_magazine_ammo(world_items[magazine].type) + 1u))
                        entry[2]++;
                }
                saved->count++;
            } else if (type == ITEM_TYPE_CAR_KEY) {
                int vehicle = world_item_vehicle(item);
                int32_t vehicle_type;
                uint32_t color;

                if (vehicle == -1 || physics_vehicles[vehicle].health <= 0)
                    continue;
                entry[0] = ITEM_TYPE_CAR_KEY;
                color = vehicle_color(vehicle);
                vehicle_type = physics_vehicles[vehicle].type;
                if (game_type == GAME_TYPE_WORLD) {
                    SavedCar *car;
                    int k;

                    entry[1] = vehicle;
                    saved->count++;
                    car = &saved_cars[saved_car_count];
                    car->type = vehicle_type;
                    car->color = color;
                    car->old_vehicle = vehicle;
                    for (k = 0; k < 3; k++)
                        car->position[k] = physics_vehicles[vehicle].position[k];
                    for (k = 0; k < 9; k++)
                        car->rotation[k] = physics_vehicles[vehicle].rotation[k];
                    saved_car_count++;
                } else {
                    entry[1] = vehicle_type;
                    entry[2] = (int32_t)color;
                    saved->count++;
                }
            } else if (type == ITEM_TYPE_CASH) {
                entry[0] = ITEM_TYPE_CASH;
                entry[1] = item_cash_bill_count(item);
                entry[2] = (int32_t)item_cash_bill_values(item);
                saved->count++;
            }
        }
    }
}

void player_restore_inventory(int index)
{
    static const float upright[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
    Player *player = &world_players[index];
    int human = player->human;
    uint32_t team = (uint32_t)player->team;
    float position[3];
    int slot, k;

    if (human == -1)
        return;
    for (k = 0; k < 3; k++)
        position[k] = world_humans[human].bones[HUMAN_BONE_PELVIS].position[k];

    for (slot = 0; slot < INVENTORY_SLOTS; slot++) {
        PlayerInventorySlot *saved = &player->inventory[slot];
        int i;

        for (i = 0; i < saved->count; i++) {
            int32_t *entry = saved_entry(saved, i);
            int type = entry[0];
            int item;

            if (type <= ITEM_LAST_GUN_TYPE) {
                item = (int32_t)sr_CreateItem(type, position, 0, upright);
                if (item_type_is_gun(type)) {
                    if (entry[1] > 0) {
                        int magazine = (int32_t)sr_CreateItem(type + 1, position, 0, upright);

                        item_bullets(magazine) = entry[2];
                        item_transfer(item, magazine, -1, 0);
                    }
                } else {
                    item_bullets(item) = entry[2];
                }
                item_transfer(item, -1, human, slot);
            } else if (type == ITEM_TYPE_CAR_KEY) {
                if (game_type == GAME_TYPE_WORLD) {
                    int old_vehicle = entry[1];
                    int count, n;

                    item = (int32_t)sr_CreateItem(ITEM_TYPE_CAR_KEY, position, 0, upright);
                    item_transfer(item, -1, human, slot);
                    count = saved_car_count;
                    for (n = 0; n < count; n++)
                        if (saved_cars[n].old_vehicle == old_vehicle)
                            world_item_vehicle(item) = saved_cars[n].vehicle;
                } else if (team < PARKING_TEAMS) {
                    int vehicle = corporation_spawn_car((int)team, entry[1], (uint32_t)entry[2]);

                    if (vehicle != -1) {
                        item = (int32_t)sr_CreateItem(ITEM_TYPE_CAR_KEY, position, 0, upright);
                        world_item_vehicle(item) = vehicle;
                        item_transfer(item, -1, human, slot);
                    }
                }
            } else if (type == ITEM_TYPE_CASH) {
                item = (int32_t)sr_CreateItem(ITEM_TYPE_CASH, position, 0, upright);
                item_cash_bill_count(item) = entry[1];
                item_cash_bill_values(item) = (uint32_t)entry[2];
                item_transfer(item, -1, human, slot);
            }
        }
    }
}

void player_toggle_mute(uint32_t index)
{
    uint32_t phone_number;
    int was_muted, i;

    if (index > 255)
        return;
    was_muted = player_muted(index) == 1;
    player_muted(index) ^= 1;
    phone_number = world_players[index].phone_number;

    if (was_muted) {
        /* Every entry for the number goes; the last entry fills its place. */
        i = 0;
        while (i < muted_count) {
            if (muted_phone_numbers[i] == phone_number) {
                muted_count--;
                muted_phone_numbers[i] = muted_phone_numbers[muted_count];
            } else {
                i++;
            }
        }
    } else {
        for (i = 0; i < muted_count; i++)
            if (muted_phone_numbers[i] == phone_number)
                return;
        if (muted_count < MAX_MUTED) {
            muted_phone_numbers[muted_count] = phone_number;
            muted_count++;
        }
    }
}

int corporation_spawn_car(int corporation, int type, uint32_t color)
{
    Corporation *c;
    int place;

    if (corporation == -1)
        return -1;
    c = &world_corporations[corporation];
    if (c->parking_count <= 0)
        return -1;
    for (place = 0; c->parking[place].in_use; place++)
        if (place + 1 >= c->parking_count)
            return -1;
    c->parking[place].in_use = 1;
    return vehicle_create(type, c->parking[place].position, 0, c->parking[place].rotation, color);
}
