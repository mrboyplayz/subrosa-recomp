#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014006C510) ----------------------------------------------------
__int64            sub_14006C510(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result;
  unsigned int callee_output_word;

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &callee_output_word, a3, 0);
  result = callee_output_word;
  if ( callee_output_word == (1 << a3) - 1 )
    result = 0xFFFFFFFFLL;
  *a2 = result;
  return result;
}

//----- (000000014006C570) ----------------------------------------------------
__int64            sub_14006C570(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result;
  int callee_output_word;

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &callee_output_word, a3, 0);
  result = callee_output_word & (unsigned int)(1 << (a3 - 1));
  if ( (_DWORD)result == 1 << (a3 - 1) )
  {
    result = callee_output_word | (unsigned int)(-1 << a3);
    *a2 = result;
  }
  else
  {
    *a2 = callee_output_word;
  }
  return result;
}

