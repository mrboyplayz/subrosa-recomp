#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (0000000140115360) ----------------------------------------------------
__int64 sub_140115360()
{
  int i;
  char scanned_character;
  int number_text_length;
  __int64 number_text_offset;
  char number_character;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    scanned_character = *((_BYTE *)&g_1862AE028 + i);
    if ( (unsigned __int8)(scanned_character - 48) <= 9u )
      break;
    if ( scanned_character == 45 )
      break;
  }
  number_text_length = 0;
  if ( i < (int)g_1862AE024 )
  {
    number_text_offset = 0;
    do
    {
      if ( number_text_offset >= 255 )
        break;
      number_character = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(number_character - 48) > 9u && number_character != 45 )
        break;
      *((_BYTE *)&g_1863AE028 + number_text_offset) = number_character;
      ++number_text_length;
      ++number_text_offset;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + number_text_length) = 0;
  return sub_1400A5400((__int64)&g_1863AE028);
}

//----- (0000000140115410) ----------------------------------------------------
__int64 sub_140115410()
{
  int i;
  char scanned_character;
  int number_text_length;
  __int64 number_text_offset;
  char number_character;
  __int64 parsed_number;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    scanned_character = *((_BYTE *)&g_1862AE028 + i);
    if ( (unsigned __int8)(scanned_character - 48) <= 9u )
      break;
    if ( scanned_character == 45 )
      break;
  }
  number_text_length = 0;
  if ( i < (int)g_1862AE024 )
  {
    number_text_offset = 0;
    do
    {
      if ( number_text_offset >= 255 )
        break;
      number_character = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(number_character - 48) > 9u && number_character != 45 )
        break;
      *((_BYTE *)&g_1863AE028 + number_text_offset) = number_character;
      ++number_text_length;
      ++number_text_offset;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + number_text_length) = 0;
  crt_sscanf((__int64)&g_1863AE028, "%I64u", &parsed_number);
  return parsed_number;
}

