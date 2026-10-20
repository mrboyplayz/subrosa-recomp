#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (0000000140048090) ----------------------------------------------------
__int64            sr_collision_find_free_contact(__int64 a1)
{
  return collision_find_free_contact((const CollisionShapeContacts *)(uintptr_t)a1);
}

