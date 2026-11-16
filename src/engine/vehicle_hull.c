#include "vehicle_hull.h"

/* The result of the original is the existing edge's last word, or, for a new
 * edge, a byte offset it leaves in rax; both callers drop it. */
void vehicle_hull_add_edge(int32_t type, uint32_t kind, uint32_t a, uint32_t b)
{
    int32_t count = vehicle_hull_edge_count(type);
    HullEdge *edges = vehicle_hull_edges(type);
    for (int32_t i = 0; i < count; i++) {
        if ((a == edges[i].a && b == edges[i].b) || (a == edges[i].b && b == edges[i].a))
            return;
    }
    edges[count].kind = kind;
    edges[count].a = a;
    edges[count].b = b;
    vehicle_hull_edge_count(type)++;
}

void vehicle_hull_add_face(int32_t type, uint32_t w0, uint32_t w1, uint32_t w2, uint32_t w3, uint32_t w4,
                           uint32_t value_34, uint32_t value_38)
{
    int32_t count = vehicle_hull_face_count(type);
    HullFace *face = &vehicle_hull_faces(type)[count];
    face->words[0] = w0;
    face->words[1] = w1;
    face->words[2] = w2;
    face->words[3] = w3;
    face->words[4] = w4;
    for (int k = 0; k < 4; k++)
        face->links[k] = -1;
    face->value_34 = value_34;
    face->value_38 = value_38;
    vehicle_hull_face_count(type)++;
}
