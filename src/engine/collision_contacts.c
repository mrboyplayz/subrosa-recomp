#include "collision.h"

uint32_t collision_find_free_contact(const CollisionShapeContacts *shape)
{
    for (uint32_t index = 0; index < 64; ++index)
        if (!shape->slots[index].kind) return index;
    return UINT32_MAX;
}
