#include <string.h>
#include "scene_queue.h"

int64_t scene_queue_add(uint32_t model, const uint32_t textures[4], uint32_t flags, const float position[3],
                        const float rotation[9])
{
    int32_t index = scene_queue_count;
    if (index >= SCENE_QUEUE_CAPACITY)
        return index;
    SceneEntry *entry = &scene_queue[index];
    entry->model = (int32_t)model;
    entry->model_copy = (int32_t)model;
    /* Words are copied as bits (signaling NaN payloads and signed zeros survive). */
    memcpy(entry->textures, textures, sizeof entry->textures);
    entry->flags = (int32_t)flags;
    memcpy(entry->position, position, sizeof entry->position);
    memcpy(entry->rotation, rotation, sizeof entry->rotation);
    for (int k = 0; k < 6; k++)
        entry->scale[k] = 1.0f;
    for (int k = 0; k < 4; k++)
        entry->unknown_68[k] = 0.0f;
    scene_queue_count = index + 1;
    return index;
}
