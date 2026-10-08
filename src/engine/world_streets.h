/* Streets of the World map ("test2"): the race track east of the city and
 * the railway. Each street is one curved patch built from a quad; a quad is
 * four corners, x y z each, in the order near-left, near-right, far-right,
 * far-left. The far edge of one quad is the near edge of the next.
 */
#ifndef SR_ENGINE_WORLD_STREETS_H
#define SR_ENGINE_WORLD_STREETS_H

#include <stdint.h>
#include "memory.h"

typedef struct StreetQuad {
    float corner[4][3];
} StreetQuad;

#define STREET_GRID 17                               /* points along each side of a patch */
#define STREET_VERTEX_CAPACITY 1024
#define STREET_TRIANGLE_CAPACITY 1024

/* 0x195AD08E0, 61,728 bytes each. */
typedef struct Street {
    int32_t kind;                                    /* 0 railway, 1 track surface */
    uint32_t unknown_4;
    float centre[3];                                 /* mean of the four corners */
    int32_t vertex_count;
    float vertex[STREET_VERTEX_CAPACITY][3];
    int32_t triangle_count;
    /* Triangle ranges [first, end) the street mesh 0x140188B80 draws in its
       passes; a new street covers everything with range 2. */
    int32_t range_first[4];
    int32_t range_end[4];
    int32_t triangle[STREET_TRIANGLE_CAPACITY][3];
    float triangle_normal[STREET_TRIANGLE_CAPACITY][3];
    float triangle_bounds[STREET_TRIANGLE_CAPACITY][6];   /* min x y z, max x y z */
    uint8_t unknown_f03c[0xF0FC - 0xF03C];
    int32_t previous, next;                          /* railway: neighbouring segments of the route */
    float bounds_min[3], bounds_max[3];
    float straightness;                              /* railway: cos^4 of the turn between the ends;
                                                        the train slows where it is small */
} Street;

_Static_assert(sizeof(Street) == 61728, "Street layout");

#define world_streets (&SR_GLOBAL(Street, 0x195AD08E0ULL))
#define world_street_count SR_GLOBAL(int32_t, 0x1A4BF08E0ULL)

/* Adds a street of the given kind: a 17 x 17 grid of points on a cubic patch
   through the quad's corners whose sides leave the near and far edges at
   right angles, and 512 triangles over it. raise lifts the control points
   next to the near edge and lower drops the ones next to the far edge, each
   by a third of the value. Points on the left and right sides get height 23.
   0x14005F6E0 */
void world_add_street(unsigned int kind, const StreetQuad *quad, float lower, float raise);

/* Adds a railway segment of the given kind from `start` to `end`, leaving
   them in directions start_direction and end_direction (unit vectors): a
   cubic curve sampled 16 times. Triangle range 0 is the ground between the
   rails, range 1 the two rails (half a unit high, `width` apart; the track
   passes 1.435, standard gauge), range 2 the embankment, 8 units across the
   top and 2 deep. Returns the new street's index. 0x1400603A0 */
int world_add_rail(unsigned int kind, const float start[3], const float end[3], const float start_direction[3],
                   const float end_direction[3], float width);

/* Train stops: 0x15B1AC808, 20 bytes each, count at 0x15B1AC800. */
typedef struct TrainStop {
    float position[3];
    float angle;                                     /* facing, radians */
    uint32_t unknown_10;
} TrainStop;

#define world_train_stops (&SR_GLOBAL(TrainStop, 0x15B1AC808ULL))
#define world_train_stop_count SR_GLOBAL(int32_t, 0x15B1AC800ULL)

/* The streets each 64 x 64 cell of the map touches, at most 8 (more are
   dropped): 0x17CE4B5F8, 64 rows of 64 cells, row = z / 64, column = x / 64. */
#define STREET_CELL_SIZE 64.0f
#define STREET_CELLS_ACROSS 64
#define STREET_CELL_CAPACITY 8

typedef struct StreetCell {
    int32_t count;
    int32_t street[STREET_CELL_CAPACITY];
} StreetCell;

#define world_street_cells (&SR_GLOBAL(StreetCell, 0x17CE4B5F8ULL))

/* Works out street `index`'s bounding box and each triangle's normal and box,
   and enters the street in every cell its box overlaps. 0x1401899F0 */
void world_file_street(int index);

/* The current map's name, compared with "test2" (the World map). */
#define world_map_name (&SR_GLOBAL(char, 0x183EBFAB0ULL))

/* Builds the World map's railway: clears the street list, lays a loop of
   104 segments from x 2480, z 1021 (straights of 28 and 28.57 units, four
   90-degree bends of radius 114.75, a dip and a rise), links the segments
   into a ring, eases each one's straightness towards its neighbours', and
   places five train stops. On the "test2" map it then lays the race track.
   0x14002A9A0 */
void world_build_train_route(void);

/* ---- GPU meshes (world_street_mesh.c) ------------------------------------- */

/* The client's scratch mesh, 0x193AD08A0: `count` vertices of `stride`
   floats each. Shared with other mesh builders. */
typedef struct MeshScratch {
    int32_t stride;
    int32_t count;
    float data[];
} MeshScratch;

#define mesh_scratch SR_GLOBAL(MeshScratch, 0x193AD08A0ULL)

/* GL buffer names, 0x183E9B0C0, one per 8 bytes. */
#define gl_buffer_name(index) (&SR_GLOBAL(uint32_t, 0x183E9B0C0ULL))[2 * (index)]

/* The streets' three meshes: 0 railway embankments, 1 ground between the
   rails, 2 track surface. Which GL buffer each goes in (0x183E977A4) and the
   size uploaded (0x195AD08C0). */
typedef struct MeshSize {
    int32_t stride;
    int32_t count;
} MeshSize;

#define street_mesh_buffer (&SR_GLOBAL(int32_t, 0x183E977A4ULL))
#define street_mesh_size (&SR_GLOBAL(MeshSize, 0x195AD08C0ULL))

/* Builds the three street meshes from the street list and uploads them.
   0x140188B80 */
void world_build_street_meshes(void);

/* Lays the race track: a 32-unit-wide loop of 22 quads starting at
   x 3056..3088, z 1184 and turning in 45-degree steps, with raised and
   banked pieces. 0x14002A680 */
void world_build_race_track(void);

#endif
