/* The collision hull of each vehicle type: a list of edges (a kind word and
 * the two points it joins) and a list of faces (five words, four -1 links
 * and two floats). Types are 0x185C0 bytes apart; the edge count is at
 * 0x192E9AED4 and the face count at 0x192E9BAD8. */
#ifndef SR_ENGINE_VEHICLE_HULL_H
#define SR_ENGINE_VEHICLE_HULL_H
#include "memory.h"

typedef struct HullEdge {
    uint32_t kind;
    uint32_t a, b;
} HullEdge;

typedef struct HullFace {
    uint32_t words[5];
    int32_t links[4];     /* set to -1 */
    uint32_t unknown_24[4];
    uint32_t value_34;    /* the seventh argument */
    uint32_t value_38;    /* the eighth */
    uint32_t unknown_3c;
} HullFace;
_Static_assert(sizeof(HullFace) == 64, "hull face stride");

#define VEHICLE_HULL_STRIDE 0x185C0ULL
#define vehicle_hull_edge_count(type) \
    SR_GLOBAL(int32_t, 0x192E9AED4ULL + VEHICLE_HULL_STRIDE * (uint64_t)(int64_t)(type))
#define vehicle_hull_edges(type) \
    (&SR_GLOBAL(HullEdge, 0x192E9AED8ULL + VEHICLE_HULL_STRIDE * (uint64_t)(int64_t)(type)))
#define vehicle_hull_face_count(type) \
    SR_GLOBAL(int32_t, 0x192E9BAD8ULL + VEHICLE_HULL_STRIDE * (uint64_t)(int64_t)(type))
#define vehicle_hull_faces(type) \
    (&SR_GLOBAL(HullFace, 0x192E9BADCULL + VEHICLE_HULL_STRIDE * (uint64_t)(int64_t)(type)))

/* Appends the edge (a, b) of the given kind unless the type already has it
 * in either direction. No bound is checked. 0x14010C850 */
void vehicle_hull_add_edge(int32_t type, uint32_t kind, uint32_t a, uint32_t b);
/* Appends a face; no bound is checked. 0x14010C900 */
void vehicle_hull_add_face(int32_t type, uint32_t w0, uint32_t w1, uint32_t w2, uint32_t w3, uint32_t w4,
                           uint32_t value_34, uint32_t value_38);
#endif
