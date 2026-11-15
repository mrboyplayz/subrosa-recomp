#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"
#include "../engine/config_io.h"

//----- (000000014010E080) ----------------------------------------------------
__int64            sub_14010E080(_DWORD *a1, char *a2, __int64 a3, int a4)
{
  return config_int_entry(a1, a2, a3, a4);
}

//----- (000000014010E0D0) ----------------------------------------------------
__int64            sub_14010E0D0(char *a1, char *a2, int a3, __int64 a4, int a5)
{
  return config_string_entry(a1, a2, a3, a4, a5);
}
