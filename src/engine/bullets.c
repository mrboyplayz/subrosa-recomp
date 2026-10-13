/* Bullets in flight. */
#include "bullets.h"
#include "math3d.h"

/* Taken off a bullet's vertical velocity every tick (0x3B326750). */
#define BULLET_GRAVITY 0x1.64cea0p-9f
#define BULLET_TIME 600

uint32_t bullet_create(int type, const float position[3], const float velocity[3], int player)
{
    int32_t index = bullet_count;
    if (index >= BULLET_CAPACITY)
        return 0xFFFFFFFFu;
    Bullet *bullet = &bullets[index];
    __builtin_memset((uint8_t *)bullet + sizeof bullet->type, 0, sizeof *bullet - sizeof bullet->type);
    bullet->type = type;
    bullet->player = player;
    bullet->time = BULLET_TIME;
    for (int axis = 0; axis < 3; axis++)
        bullet->last_position[axis] = position[axis];
    for (int axis = 0; axis < 3; axis++)
        bullet->position[axis] = position[axis];

    /* The frame: back against the flight; across it, from the world's y
       axis, or its x axis when the flight is steep; and up from those two. */
    for (int axis = 0; axis < 3; axis++)
        bullet->back[axis] = -velocity[axis];
    math_vec3_normalize(bullet->back, bullet->back);
    const float *back = bullet->back;
    float *side = bullet->side, *up = bullet->up;
    if (__builtin_fabsf(back[1]) >= 0.707f) {
        side[0] = world_x_axis_y * back[2] - world_x_axis_z * back[1];
        side[1] = world_x_axis_z * back[0] - world_x_axis_x * back[2];
        side[2] = world_x_axis_x * back[1] - world_x_axis_y * back[0];
    } else {
        side[0] = world_y_axis_y * back[2] - world_y_axis_z * back[1];
        side[1] = world_y_axis_z * back[0] - world_y_axis_x * back[2];
        side[2] = world_y_axis_x * back[1] - world_y_axis_y * back[0];
    }
    math_vec3_normalize(side, side);
    up[0] = back[1] * side[2] - back[2] * side[1];
    up[1] = side[0] * back[2] - back[0] * side[2];
    up[2] = back[0] * side[1] - side[0] * back[1];
    math_vec3_normalize(up, up);

    for (int axis = 0; axis < 3; axis++)
        bullet->velocity[axis] = velocity[axis];
    bullets_created++;
    bullet->mass = bullet_type_mass(type);
    bullet->gravity = BULLET_GRAVITY;
    bullet_count = index + 1;
    return (uint32_t)index;
}
