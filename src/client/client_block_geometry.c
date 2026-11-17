#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (00000001400689A0) ----------------------------------------------------
__int64            sub_1400689A0(int a1, int a2, int a3, int a4, int a5, signed int a6, unsigned int *a7, float *a8)
{
    sr_block_geometry_add_effect_4(a1, a2, a3, a4, a5, a6, a7, a8);
    return 0; /* compatibility result discarded by all reviewed callers */
}

