#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140075930) ----------------------------------------------------
signed int *           sr_menu_slider_from_x(int a1, float a2)
{
  return menu_slider_from_x(a1, a2);
}

