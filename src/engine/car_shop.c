/* Buying a car at a car shop. Checked against the original machine code at
 * 0x1400EFD20.
 */
#include "player.h"
#include "events.h"
#include "frame.h"
#include "item.h"
#include "math3d.h"
#include "vehicle.h"
#include "items/items.h"

extern uint64_t sr_CreateItem(int32_t type, const float position[3], const float *velocity, const float rotation[9]);
/* The world's up direction, (0, 1, 0). */
extern const float world_up[3] __asm__("dword_1402F6188");

#define MAX_VEHICLES_BOUGHT 3
#define GAME_TYPE_ROUND 3
#define FIRST_BODY_SLOT 2
#define INVENTORY_SLOTS 7

/* A car a shop offers (RosaServer: ShopCar). */
typedef struct ShopCar {
    int32_t type;                        /* vehicle type */
    int32_t price;
    uint32_t color;
} ShopCar;

/* Car shop fields of a building (item.h's ItemBlockRegion, RosaServer's
   Building, at 0x1760C5638, 0xDB0C bytes apart; offsets as RosaServer's). */
#define BUILDING_FIELD(type, offset, b) SR_GLOBAL(type, 0x1760C5638ULL + (offset) + 0xDB0CULL * (uint64_t)(int64_t)(b))
/* RosaServer spawnRot: cars bought here take it, turned a quarter turn
   about the vertical. */
#define building_car_rotation(b)       (&BUILDING_FIELD(float, 0x1CULL, b))
#define building_shop_car_count(b)     BUILDING_FIELD(int32_t, 0xC9F4ULL, b)
/* Numbered from 1. */
#define building_shop_car(b, n)        (&BUILDING_FIELD(ShopCar, 0xC9ECULL + 12ULL * (uint64_t)(int64_t)(n), b))
/* Cars sold so far, counted 0 to 7: each one is made 4 units further back
   from the spawn point along the rotation's third row, then it starts
   again. */
#define building_shop_car_sales(b)     BUILDING_FIELD(int32_t, 0xCAB8ULL, b)
#define building_car_spawn_position(b) (&BUILDING_FIELD(float, 0xCABCULL, b))

void player_buy_car(int index, int choice)
{
    Player *player = &world_players[index];
    int human = player->human;
    int building, vehicle, key, slot, count;
    const float *row;
    float back, position[3], rotation[9];
    ShopCar *car;

    if (human == -1 || player->vehicles_bought >= MAX_VEHICLES_BOUGHT)
        return;
    building = player->menu_tab_building;
    car = building_shop_car(building, choice);
    if (player->money < car->price)
        return;

    row = &building_car_rotation(building)[6];
    back = (float)(int32_t)(0u - (uint32_t)building_shop_car_sales(building)) * 4.0f;
    position[0] = back * row[0] + building_car_spawn_position(building)[0];
    position[2] = back * row[2] + building_car_spawn_position(building)[2];
    position[1] = back * row[1] + building_car_spawn_position(building)[1];
    building_shop_car_sales(building) = (int32_t)(((uint32_t)building_shop_car_sales(building) + 1u) & 7u);
    for (int k = 0; k < 9; k++)
        rotation[k] = building_car_rotation(building)[k];
    math_mat3_rotate_rows(rotation, world_up, 1.57079637f);

    vehicle = vehicle_create(car->type, position, 0, rotation, car->color);
    if (vehicle != -1)
        vehicle_keyholder_player(vehicle) = index;
    player->money -= car->price;

    /* The key goes into the first body slot that takes it. */
    key = (int32_t)sr_CreateItem(ITEM_KEY, position, 0, rotation);
    world_item_vehicle(key) = vehicle;
    for (slot = FIRST_BODY_SLOT; slot < INVENTORY_SLOTS; slot++)
        if ((uint32_t)item_transfer(key, -1, human, slot))
            break;

    player->vehicles_bought++;
    event_update_player(index);
    if (game_type == GAME_TYPE_ROUND)
        event_update_player_finance(index);

    /* The car is off the list: the last one takes its place. */
    count = building_shop_car_count(building);
    if (count > 0) {
        building_shop_car_count(building) = count - 1;
        *building_shop_car(building, choice) = *building_shop_car(building, count);
    }
}
