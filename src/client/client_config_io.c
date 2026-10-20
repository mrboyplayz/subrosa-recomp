#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (000000014010E080) ----------------------------------------------------
__int64            sub_14010E080(_DWORD *a1, char *a2, __int64 a3, int a4)
{
  __int64 result;

  if ( a4 )
    return sub_1400920F0(a3, "%s%d\r\n", a2, *a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    result = sub_1400A3D70();
    *a1 = result;
  }
  g_1862AE020 = 0;
  return result;
}

//----- (000000014010E0D0) ----------------------------------------------------
__int64            sub_14010E0D0(char *a1, char *a2, int a3, __int64 a4, int a5)
{
  __int64 result;
  signed int parser_position;
  int copied_character_count;
  char *destination_cursor;
  char source_character;

  if ( a5 )
    return sub_1400920F0(a4, "%s%s\r\n", a2, a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    parser_position = g_1862AE020;
    copied_character_count = 0;
    if ( (int)g_1862AE020 < (int)g_1862AE024 )
    {
      destination_cursor = a1;
      do
      {
        if ( copied_character_count >= a3 - 1 )
          break;
        source_character = *((_BYTE *)&g_1862AE028 + parser_position);
        if ( source_character == 13 )
          break;
        if ( source_character == 10 )
          break;
        *destination_cursor = source_character;
        ++copied_character_count;
        ++destination_cursor;
        parser_position = ++g_1862AE020;
      }
      while ( (int)g_1862AE020 < (int)g_1862AE024 );
    }
    result = copied_character_count;
    a1[copied_character_count] = 0;
  }
  g_1862AE020 = 0;
  return result;
}

