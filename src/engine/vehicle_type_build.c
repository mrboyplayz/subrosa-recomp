/* Vehicle types: the routines that put a type together piece by piece when
   the types are set up. See vehicle.h. */
#include "vehicle.h"

void vehicle_type_add_edge(int type, uint32_t value, uint32_t point_a, uint32_t point_b)
{
    int32_t count = vehicle_type_edge_count(type);
    VehicleTypeEdge *edges = vehicle_type_edges(type);

    for (int32_t i = 0; i < count; i++) {
        if (point_a == edges[i].point_a && point_b == edges[i].point_b)
            return;
        if (point_a == edges[i].point_b && point_b == edges[i].point_a)
            return;
    }
    edges[count].value = value;
    edges[vehicle_type_edge_count(type)].point_a = point_a;
    edges[vehicle_type_edge_count(type)].point_b = point_b;
    vehicle_type_edge_count(type)++;
}

void vehicle_type_add_part(int type, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g)
{
    uint32_t (*parts)[16] = (uint32_t (*)[16])(void *)&VEHICLE_TYPE_FIELD(int32_t, 0x145CULL, type);

    parts[vehicle_type_part_count(type)][0] = a;
    parts[vehicle_type_part_count(type)][1] = b;
    parts[vehicle_type_part_count(type)][2] = c;
    parts[vehicle_type_part_count(type)][3] = d;
    parts[vehicle_type_part_count(type)][4] = e;
    parts[vehicle_type_part_count(type)][5] = 0xFFFFFFFFu;
    parts[vehicle_type_part_count(type)][6] = 0xFFFFFFFFu;
    parts[vehicle_type_part_count(type)][7] = 0xFFFFFFFFu;
    parts[vehicle_type_part_count(type)][8] = 0xFFFFFFFFu;
    parts[vehicle_type_part_count(type)][13] = f;
    parts[vehicle_type_part_count(type)][14] = g;
    vehicle_type_part_count(type)++;
}

int vehicle_type_add_wheel(int type, uint32_t unknown_0, int point_a, int point_b, const float where[2], uint32_t radius,
                           uint32_t mass, uint32_t unknown_1c, float extension, uint32_t spring, uint32_t damping,
                           uint32_t grip)
{
#define NEW_WHEEL ((uint32_t *)(void *)&vehicle_type_wheels(type)[vehicle_type_wheel_count(type)])
    const float *a = vehicle_type_points(type)[point_a];
    const float *b = vehicle_type_points(type)[point_b];
    float along;
    float *mount;
    int32_t wheel;

    NEW_WHEEL[0] = unknown_0;
    NEW_WHEEL[1] = (uint32_t)point_a;
    NEW_WHEEL[2] = (uint32_t)point_b;
    NEW_WHEEL[3] = ((const uint32_t *)(const void *)where)[0];
    NEW_WHEEL[4] = ((const uint32_t *)(const void *)where)[1];
    NEW_WHEEL[6] = radius;
    NEW_WHEEL[5] = mass;
    NEW_WHEEL[7] = unknown_1c;
    ((float *)(void *)NEW_WHEEL)[11] = extension;
    NEW_WHEEL[12] = spring;
    NEW_WHEEL[13] = damping;
    NEW_WHEEL[14] = grip;

    /* Where the wheel sits: that far from the first point to the second,
       lower by the extension. */
    along = where[1];
    mount = (float *)(void *)NEW_WHEEL + 8;
    mount[0] = (b[0] - a[0]) * along + a[0];
    mount[1] = (b[1] - a[1]) * along + a[1];
    mount[2] = (b[2] - a[2]) * along + a[2];
    wheel = vehicle_type_wheel_count(type);
    mount = (float *)(void *)&vehicle_type_wheels(type)[wheel] + 8;
    mount[1] = extension + mount[1];
    vehicle_type_wheel_count(type)++;
    return wheel;
#undef NEW_WHEEL
}
