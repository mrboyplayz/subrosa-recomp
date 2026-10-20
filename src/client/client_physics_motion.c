#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"

//----- (000000014002D820) ----------------------------------------------------
double            sr_physics_limit_slide(float *a1, float *a2, float a3)
{
  float work = physics_limit_slide(a1, a2, a3);
  /* The client carries the native float result in the low word of a double. */
  return COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(work));
}

//----- (000000014002D9B0) ----------------------------------------------------
double            sr_physics_limit_slide_capped(float *a1, float *a2, float a3, float a4)
{
  float work = physics_limit_slide_capped(a1, a2, a3, a4);
  return COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(work));
}

//----- (000000014012B090) ----------------------------------------------------
unsigned int *           sr_physics_apply_point_velocity(int a1, float *a2, float *a3)
{
  return (unsigned int *)(void *)physics_apply_point_velocity(a1, a2, a3);
}

//----- (000000014012B170) ----------------------------------------------------
unsigned int *           sr_physics_point_velocity(float *a1, int a2, float *a3)
{
  return (unsigned int *)(void *)physics_point_velocity(a1, a2, a3);
}

