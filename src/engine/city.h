/* The city's road network: intersections on a grid and the streets between
 * them. Layouts and names follow RosaServer's StreetIntersection (0x88 bytes)
 * and Street (0x630 bytes); only the fields the ported code reads are named.
 */
#ifndef SR_ENGINE_CITY_H
#define SR_ENGINE_CITY_H

#include <stdint.h>
#include "memory.h"

/* Which side of an intersection a street leaves from, the order of
   CityIntersection.streets (RosaServer: streetEast, South, West, North).
   Going round the list one step at a time turns by a right angle. */
enum { CITY_EAST = 0, CITY_SOUTH = 1, CITY_WEST = 2, CITY_NORTH = 3 };

typedef struct CityIntersection {
    int32_t cell[3];                     /* grid column, (unused here), grid row */
    float position[3];
    int32_t streets[4];                  /* CityStreet per side (CITY_EAST..), -1: none */
    uint8_t pad_28[0x88 - 0x28];
} CityIntersection;

typedef struct CityStreet {
    char name[32];
    int32_t pad_20;
    int32_t intersections[2];            /* the street's two ends (RosaServer intersectionA, B) */
    uint8_t pad_2c[0x630 - 0x2C];
} CityStreet;

#define city_intersection_count SR_GLOBAL(int32_t, 0x175FD145CULL)
#define city_intersections      (&SR_GLOBAL(CityIntersection, 0x175FD1464ULL))
#define city_streets            (&SR_GLOBAL(CityStreet, 0x175FF3468ULL))

_Static_assert(sizeof(CityIntersection) == 0x88, "CityIntersection size");
_Static_assert(sizeof(CityStreet) == 0x630, "CityStreet size");
_Static_assert(__builtin_offsetof(CityIntersection, streets) == 0x18, "CityIntersection layout");
_Static_assert(__builtin_offsetof(CityStreet, intersections) == 0x24, "CityStreet layout");

#endif
