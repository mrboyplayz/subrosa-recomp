/* Cars kept for their keys in a world game (game type 4): when a player's
 * inventory is saved, each car key's car is noted here so it can be made
 * again and the key given back with it.
 */
#ifndef SR_ENGINE_SAVED_CARS_H
#define SR_ENGINE_SAVED_CARS_H

#include <stdint.h>
#include "memory.h"

/* 0x16B2A2EE4, 0x40 bytes each, right after the count at 0x16B2A2EE0. */
typedef struct SavedCar {
    int32_t type;                        /* vehicle type */
    uint32_t color;
    int32_t vehicle;                     /* the car made again from this record */
    int32_t old_vehicle;                 /* the car the key belonged to, as kept in the player's inventory */
    float position[3];
    float rotation[9];
} SavedCar;

_Static_assert(sizeof(SavedCar) == 0x40, "SavedCar size");

#define saved_car_count SR_GLOBAL(int32_t, 0x16B2A2EE0ULL)
#define saved_cars      (&SR_GLOBAL(SavedCar, 0x16B2A2EE4ULL))

#endif
