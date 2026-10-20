#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140075340) ----------------------------------------------------
void sr_menu_pop_clip()
{
  menu_pop_clip();
}

//----- (0000000140075460) ----------------------------------------------------
__int64            sr_menu_push_clip(float a1, float a2, float a3, float a4)
{
  return menu_push_clip(a1, a2, a3, a4);
}

