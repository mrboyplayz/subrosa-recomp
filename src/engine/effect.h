/* Short-lived world effects: bullet holes, blood drops, sparks, tracers. */
#ifndef SR_ENGINE_EFFECT_H
#define SR_ENGINE_EFFECT_H

#include <stdint.h>
#include "memory.h"

enum {
    EFFECT_BULLET_HOLE = 0,              /* a mark on the surface a bullet hit */
    EFFECT_BLOOD_DROP = 1,               /* falls, and leaves a stain where it lands */
    EFFECT_SPARK = 2,                    /* from bullets hitting metal */
    EFFECT_3 = 3,                        /* made by 0x140067970; meaning not settled */
    EFFECT_4 = 4,                        /* made by 0x1400689A0; meaning not settled */
    EFFECT_TRACER = 5                    /* a bullet's streak, three ticks */
};

#define EFFECT_CAPACITY 0x4000

/* 0x1A771F380, 148 bytes each, count at 0x1A7971D80. */
typedef struct Effect {
    int32_t type;                        /* EFFECT_* */
    int32_t lifetime;                    /* ticks left; 0xFFFF: until it lands or is replaced */
    float gravity;                       /* taken off the vertical speed each tick */
    float position[3];
    float velocity[3];
    float unknown_24[3];
    union {
        struct {
            float side[3];               /* the quad's axes: across the surface for holes and */
            float up[3];                 /* stains, facing the camera for drops in flight */
            float normal[3];             /* the surface it lies on */
        };
        float frame[9];                  /* side, up, normal as the rows of a matrix */
        float points[3][3];              /* EFFECT_4: its three corners */
    };
    float point_velocity[3][3];          /* EFFECT_4 */
    float rest_length[3];                /* EFFECT_4: edges 0-1, 1-2, 2-0. EFFECT_3: a spin axis */
    float spin;                          /* EFFECT_3: turns (0x14012BD30) while above 1/240 */
    float drag;                          /* velocity kept per tick */
    float size;                          /* half the quad's width */
    float size_2;
} Effect;

_Static_assert(sizeof(Effect) == 148, "Effect size");
_Static_assert(__builtin_offsetof(Effect, point_velocity) == 0x54 && __builtin_offsetof(Effect, spin) == 0x84,
               "Effect layout");

#define world_effects (&SR_GLOBAL(Effect, 0x1A771F380ULL))
#define world_effect_count SR_GLOBAL(int32_t, 0x1A7971D80ULL)

/* Marks left where effects come to rest, drawn as quads (four vertices
   each, at most 16,000 vertices per mesh). Blood stains carry texture
   coordinates; EFFECT_3 marks carry the surface normal. */
#define EFFECT_MARK_VERTEX_CAPACITY 16000

typedef struct StainVertex {
    float position[3];
    float u, v;
} StainVertex;

typedef struct MarkVertex {
    float position[3];
    float normal[3];
} MarkVertex;

#define blood_stain_count SR_GLOBAL(int32_t, 0x1A724E720ULL)
#define blood_stains (&SR_GLOBAL(StainVertex, 0x1A724E724ULL))
#define effect_mark_count SR_GLOBAL(int32_t, 0x1A729E724ULL)
#define effect_marks (&SR_GLOBAL(MarkVertex, 0x1A729E728ULL))

/* The camera's axes (side, up, depth), which drops in flight face. */
#define camera_axes (&SR_GLOBAL(float, 0x183F7C550ULL))

/* Adds an effect of `type` at `position` moving at `velocity` (none: still),
   `size` across; for a bullet hole, `velocity` is the surface's normal: the
   hole lies on that surface a 64th of a unit off it. Returns its index, or
   UINT32_MAX when all 16,384 are in use. 0x14005EE40 */
uint32_t world_add_effect(int type, const float position[3], const float velocity[3], float size);

/* Moves the effects for a tick: sparks fall, slow and bounce off the level;
   an EFFECT_4 body's corners fall and bounce and its edges pull them back
   to length; drops and EFFECT_3 marks fall until they hit the level, then
   lie on it (drops leave a blood stain, marks lying on the floor a mark;
   EFFECT_3 bounces off walls and ceilings), and while they fly they face
   the camera. 0x1401597F0 */
void world_update_effects(void);

/* Draws the effects, back to front: holes, drops and sparks as textured
   quads (holes black, drops a dark red, sparks yellowish, all fading over
   their last 32 ticks), EFFECT_3 and EFFECT_4 pieces as a lit mesh, and
   tracers as smooth lines. 0x140125DB0 */
void world_draw_effects(void);

#endif
