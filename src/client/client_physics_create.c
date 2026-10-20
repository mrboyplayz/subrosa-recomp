#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (000000014004E160) ----------------------------------------------------
__int64            sr_physics_create_distance_bond(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  return physics_create_distance_bond(a1, a2, (const float *)a3, (const float *)a4, COERCE_FLOAT(a5));
}

//----- (000000014004E2E0) ----------------------------------------------------
__int64            sr_physics_create_level_bond(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  return physics_create_level_bond(a1, (const float *)a2, (const float *)a3);
}

//----- (000000014004E430) ----------------------------------------------------
__int64            sr_physics_create_body_bond(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  return physics_create_body_bond(a1, a2, (const float *)a3, (const float *)a4);
}

//----- (000000014004E5B0) ----------------------------------------------------
__int64            sr_physics_create_rotation_bond(unsigned int a1, unsigned int a2)
{
  return physics_create_rotation_bond(a1, a2);
}

//----- (000000014005CBB0) ----------------------------------------------------
__int64            sr_physics_create_point(unsigned int a1, unsigned int *a2, unsigned int *a3, float a4, unsigned int a5)
{
  return physics_create_point(a1, (const float *)a2, (const float *)a3, a4, a5);
}

//----- (000000014005CF80) ----------------------------------------------------
__int64            sr_physics_create_body(
        unsigned int a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  return physics_create_body(a1, (const float *)a2, (const float *)a3, (const float *)a4, COERCE_FLOAT(a5), (const float *)a6);
}

//----- (00000001400A4440) ----------------------------------------------------
__int64 sr_physics_find_free_bond()
{
  return physics_find_free_bond();
}

