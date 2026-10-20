#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (00000001400753C0) ----------------------------------------------------
__int64 sr_menu_pop_size()
{
  return menu_pop_size();
}

//----- (00000001400755F0) ----------------------------------------------------
__int64            sr_menu_push_size(float a1, float a2)
{
  return menu_push_size(a1, a2);
}

//----- (0000000140075650) ----------------------------------------------------
_WORD *sr_menu_reset()
{
  return (_WORD *)menu_reset();
}

