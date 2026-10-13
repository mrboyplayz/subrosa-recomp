/* Bullets in flight (RosaServer: Bullet, bullets, numBullets). */
#ifndef SR_ENGINE_BULLETS_H
#define SR_ENGINE_BULLETS_H

#include "memory.h"

/* 0x1A8A879C0, 92 bytes each. */
typedef struct Bullet {
    int32_t type;                        /* bullet type (bullet_type_mass etc.) */
    int32_t time;                        /* ticks left to fly; 600 when fired */
    int32_t player;                      /* the player who fired it */
    float mass;                          /* the bullet type's, when fired */
    float gravity;                       /* taken off velocity[1] every tick */
    float last_position[3];
    float position[3];
    float velocity[3];
    /* A frame for drawing it: rows across, up, and back along its flight. */
    float side[3];
    float up[3];
    float back[3];
} Bullet;

_Static_assert(sizeof(Bullet) == 0x5C, "Bullet size");

#define BULLET_CAPACITY 0x4000
#define bullets (&SR_GLOBAL(Bullet, 0x1A8A879C0ULL))
#define bullet_count SR_GLOBAL(int32_t, 0x1A8E379D4ULL)
/* Counts every bullet created. Read nowhere by address in the client. */
#define bullets_created SR_GLOBAL(int32_t, 0x183E93530ULL)

/* Bullet types, 24 bytes each from 0x1A8A873C0. The first field is the
   bullet's mass: the type setup multiplies it by a gun's bullet velocity
   (0x140140655), a new bullet keeps it, and a gun recoils by twice it over
   its own mass. */
#define bullet_type_mass(b) SR_GLOBAL(float, 0x1A8A873C0ULL + 0x18ULL * (uint64_t)(int64_t)(b))

/* The x and y axes of the world, (1, 0, 0) and (0, 1, 0), kept in writable
   data; the original reads them every time. The recompiled client holds
   each component as a symbol of its own. */
extern int32_t dword_1402F6178, dword_1402F617C, dword_1402F6180;
extern int32_t dword_1402F6188, dword_1402F618C, dword_1402F6190;
#define world_x_axis_x (*(const float *)&dword_1402F6178)
#define world_x_axis_y (*(const float *)&dword_1402F617C)
#define world_x_axis_z (*(const float *)&dword_1402F6180)
#define world_y_axis_x (*(const float *)&dword_1402F6188)
#define world_y_axis_y (*(const float *)&dword_1402F618C)
#define world_y_axis_z (*(const float *)&dword_1402F6190)

/* Fires a bullet of a type from a position with a velocity, for a player
   (RosaServer: createBullet). Returns its index, or 0xFFFFFFFF when all
   16384 are in flight. 0x14004E8A0 */
uint32_t bullet_create(int type, const float position[3], const float velocity[3], int player);

#endif
