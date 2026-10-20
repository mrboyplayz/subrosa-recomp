#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"

//----- (000000014002CF10) ----------------------------------------------------
float *           sr_physics_apply_inverse_inertia(__int64 a1, float *a2, __int64 a3, float *a4, float *a5)
{
  return (float *)(void *)physics_apply_inverse_inertia((float *)a1, a2, a4, a5);
}

//----- (000000014002D2D0) ----------------------------------------------------
__m128 *           sr_physics_apply_inverse_inertia4(__m128 *a1, __m128 *a2, __int64 a3, __int64 a4, __m128 *a5)
{
  return (__m128 *)(void *)physics_apply_inverse_inertia4((float *)a1, (const float *)a2, (const float *)a4, (const float *)a5);
}

//----- (000000014011C640) ----------------------------------------------------
float            sr_physics_sphere_exit_distance(float *a1, float *a2, float a3)
{
  return physics_sphere_exit_distance(a1, a2, a3);
}

//----- (000000014011C6B0) ----------------------------------------------------
__m128            sr_physics_sphere_entry_distance(__int64 a1, float *a2, float a3)
{
  return physics_sphere_entry_distance((const float *)a1, a2, a3);
}

