#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014007C980) ----------------------------------------------------
__int64 sr_clock_milliseconds()
{
  __int64 PerformanceCount;

  if ( !g_160FC4828 )
    return 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return 1000 * (PerformanceCount - g_160FC4838) / g_160FC4830;
}

