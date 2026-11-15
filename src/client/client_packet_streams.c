#include "shared_client.h"
#include "../engine/net_stream_fields.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014006C510) ----------------------------------------------------
__int64            sub_14006C510(int a1, _DWORD *a2, char a3, int a4)
{
  return net_stream_optional_index(a1, a2, a3, a4);
}

//----- (000000014006C570) ----------------------------------------------------
__int64            sub_14006C570(int a1, _DWORD *a2, char a3, int a4)
{
  return net_stream_signed_field(a1, a2, a3, a4);
}

