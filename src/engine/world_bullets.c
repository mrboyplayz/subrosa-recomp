/* Bullets: firing one (0x14004E8A0) and their lifetimes (0x14002CE50). See
   bullet.h. */
#include <string.h>
#include "bullet.h"
#include "math3d.h"

uint32_t world_fire_bullet(int type, const float from[3], const float velocity[3], int player)
{
    int32_t index = world_bullet_count;
    if (index >= BULLET_CAPACITY)
        return UINT32_MAX;
    Bullet *b = &world_bullets[index];

    memset((uint8_t *)b + 4, 0, sizeof *b - 4);
    b->type = type;
    b->player = player;
    b->lifetime = 600;
    memcpy(b->previous_position, from, 12);
    memcpy(b->position, from, 12);
    b->back[0] = -velocity[0];
    b->back[1] = -velocity[1];
    b->back[2] = -velocity[2];
    math_vec3_normalize(b->back, b->back);

    math_frame_across(b->back, b->side, b->up);

    b->velocity[0] = velocity[0];
    b->velocity[1] = velocity[1];
    world_bullets_fired++;
    b->velocity[2] = velocity[2];
    b->unknown_c = bullet_type_value(type);
    b->unknown_10 = 0.0027222224f;
    world_bullet_count = index + 1;
    return (uint32_t)index;
}

void world_expire_bullets(void)
{
    int32_t count = world_bullet_count;

    for (int32_t i = 0; i < count;) {
        Bullet *b = &world_bullets[i];
        int32_t lifetime = b->lifetime;

        if (lifetime < 0x10000)
            b->lifetime = --lifetime;
        if (lifetime > 0) {
            i++;
            continue;
        }
        /* The last bullet takes the slot and has its own lifetime counted
           down next. */
        count--;
        if (i == count)
            break;
        *b = world_bullets[count];
    }
    world_bullet_count = count;
}
