/* The queue of scene objects to draw: up to 4,096 records of 0x78 bytes from
 * 0x1841821B8, the count at 0x18417E1B4. */
#ifndef SR_ENGINE_SCENE_QUEUE_H
#define SR_ENGINE_SCENE_QUEUE_H
#include "memory.h"

#define SCENE_QUEUE_CAPACITY 4096
typedef struct SceneEntry {
    int32_t model;          /* word 0, repeated at +4 */
    int32_t model_copy;
    uint8_t unknown_8[4];
    int32_t flags;          /* +0xC */
    uint32_t textures[4];   /* +0x10 */
    float position[3];      /* +0x20 */
    float rotation[9];      /* +0x2C, three rows */
    float scale[6];         /* +0x50, all 1.0 */
    float unknown_68[4];    /* all 0 */
} SceneEntry;
_Static_assert(sizeof(SceneEntry) == 0x78, "scene entry stride");
#define scene_queue_count SR_GLOBAL(int32_t, 0x18417E1B4ULL)
#define scene_queue (&SR_GLOBAL(SceneEntry, 0x1841821B8ULL))

/* Appends an entry unless the queue is full (4,096): the model twice, the
 * four texture words, flags, position and rotation, scale 1 and four zeros.
 * Returns the count as it was. A negative count passes the original's signed
 * check and writes before the table; no caller produces one. 0x140092140 */
int64_t scene_queue_add(uint32_t model, const uint32_t textures[4], uint32_t flags, const float position[3],
                        const float rotation[9]);
#endif
