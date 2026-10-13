/* Bullets in flight. */
#ifndef SR_ENGINE_BULLET_H
#define SR_ENGINE_BULLET_H

#include <stdint.h>
#include "memory.h"

#define BULLET_CAPACITY 0x4000

/* 0x1A8A879C0, 92 bytes each (RosaServer: Bullet). */
typedef struct Bullet {
    int32_t type;                        /* bullet type */
    int32_t lifetime;                    /* ticks; 600 when fired */
    int32_t player;                      /* who fired it, -1: none */
    float unknown_c;                     /* the type's first value (see bullet_type_value) */
    float unknown_10;                    /* 0.0027222 when fired */
    float previous_position[3];          /* RosaServer: lastPos */
    float position[3];
    float velocity[3];
    float side[3];                       /* across the direction of flight (see world_fire_bullet) */
    float up[3];
    float back[3];                       /* opposite to the velocity, length 1 */
} Bullet;

_Static_assert(sizeof(Bullet) == 92, "Bullet size");

#define world_bullets (&SR_GLOBAL(Bullet, 0x1A8A879C0ULL))
#define world_bullet_count SR_GLOBAL(int32_t, 0x1A8E379D4ULL)
/* Bullets fired since the game began (a statistic?). */
#define world_bullets_fired SR_GLOBAL(int32_t, 0x183E93530ULL)
/* A bullet type's first value, 24-byte records from 0x1A8A873C0 (its
   mass: guns recoil by twice its share of their own mass). */
#define bullet_type_value(type) SR_GLOBAL(float, 0x1A8A873C0ULL + 24ULL * (uint64_t)(int64_t)(type))

/* Fires a bullet of `type` from `from` with `velocity` for `player`: a new
   record, everything else cleared, its frame worked out (back is the
   reversed velocity made length 1; side is the cross product of world x,
   or world y when back's y is under 0.707 or not a number, with back; up
   is back across side; each made length 1). Returns its index, or
   UINT32_MAX when all 16,384 are in flight. 0x14004E8A0 */
uint32_t world_fire_bullet(int type, const float from[3], const float velocity[3], int player);

#endif
