#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"
#include "../engine/clock.h"

//----- (000000014007C980) ----------------------------------------------------
__int64 sr_clock_milliseconds()
{
  /* Clean implementation: src/engine/clock.c, checked against the original
     executable (tools/native-compare). This wrapper keeps the entry point the
     recompiled callers use. */
  return clock_milliseconds();
}

