#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014007CA00) ----------------------------------------------------
void            sr_math_mat3_transpose(_DWORD *a1, int *a2)
{
  math_mat3_transpose((float *)a1, (const float *)a2);
}

//----- (000000014007D0B0) ----------------------------------------------------
__int64            sr_math_fixed_vec2_rotate(int *a1, unsigned __int16 a2)
{
  return math_fixed_vec2_rotate(a1, a2);
}

