#include "shared_client.h"
#include "../engine/area_bounds.h"

//----- (000000014011B8F0) ----------------------------------------------------
_BOOL8            sr_corporation_contains_point(float *a1, int a2, float a3)
{
  return corporation_contains_point(a1, a2, a3);
}

//----- (000000014011B960) ----------------------------------------------------
_BOOL8            sr_corporation_vault_contains_point(float *a1, int a2, float a3)
{
  return corporation_vault_contains_point(a1, a2, a3);
}

//----- (000000014011B9F0) ----------------------------------------------------
_BOOL8            sr_world_region_contains_point(int a1, float *a2, float a3)
{
  return world_region_contains_point(a1, a2, a3);
}

//----- (000000014011BAD0) ----------------------------------------------------
_BOOL8            sr_area_view_contains_point(float *a1)
{
  return area_view_contains_point(a1);
}

