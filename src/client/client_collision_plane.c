#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140077B30) ----------------------------------------------------
__int64            sr_collision_segment_plane(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  return collision_segment_plane(a1, a2, a3, a4, a5, a6);
}

