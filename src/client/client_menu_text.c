#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140074C50) ----------------------------------------------------
__int64            sr_menu_text_hit_index(int a1, float a2)
{
  return menu_text_hit_index(a1, a2);
}

//----- (0000000140074CE0) ----------------------------------------------------
float            sr_menu_text_prefix_width(int a1, int a2)
{
  return menu_text_prefix_width(a1, a2);
}

