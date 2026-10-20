#include "shared_client.h"

//----- (0000000140220004) ----------------------------------------------------
char            sub_140220004(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  char unknown_libname_290_result;
  int option_flags;
  unsigned __int64 integer_difference_6;
  unsigned __int64 loaded_word_2;
  __int64 selection_flag;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  selection_flag = 0;
  switch ( selection_code )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_290_result = sub_14020EDA4(a1, &selection_flag);
      else
        unknown_libname_290_result = sub_14020F0EC(a1, &selection_flag);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_290_result = sub_14020F434(a1, &selection_flag);
      else
        unknown_libname_290_result = sub_14020F914(a1, &selection_flag);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_290_result = sub_14020FC5C(a1, &selection_flag);
      else
        unknown_libname_290_result = sub_14020FF9C(a1, &selection_flag);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_290_result = unknown_libname_290(a1, &selection_flag);
      else
        unknown_libname_290_result = unknown_libname_298(a1, &selection_flag);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  if ( !unknown_libname_290_result )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    option_flags = *(_DWORD *)(a1 + 48);
    integer_difference_6 = selection_flag;
    if ( (option_flags & 0x10) != 0 && selection_flag < 0 )
    {
      integer_difference_6 = -selection_flag;
      option_flags |= 0x40u;
      *(_DWORD *)(a1 + 48) = option_flags;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      loaded_word_2 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
      sub_14020EB80(a1 + 88, loaded_word_2);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !integer_difference_6 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 1;
    if ( selection_code == 8 )
      unknown_libname_366(a1, integer_difference_6, a2, a3);
    else
      unknown_libname_354(a1, integer_difference_6, a2, a3);
    if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
    {
      *(_QWORD *)(a1 + 72) -= 2LL;
      **(_WORD **)(a1 + 72) = 48;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  return 1;
}

//----- (000000014022020C) ----------------------------------------------------
char            sub_14022020C(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( selection_code == 8 )
    unknown_libname_367(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_355(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
  {
    *(_QWORD *)(a1 + 72) -= 2LL;
    **(_WORD **)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

//----- (00000001402203D8) ----------------------------------------------------
char            sub_1402203D8(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( selection_code == 8 )
    unknown_libname_368(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_356(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
  {
    *(_QWORD *)(a1 + 72) -= 2LL;
    **(_WORD **)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

//----- (00000001402205A4) ----------------------------------------------------
char            sub_1402205A4(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  char unknown_libname_291_result;
  int option_flags;
  unsigned __int64 integer_difference_6;
  unsigned __int64 loaded_word_2;
  __int64 selection_flag;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  selection_flag = 0;
  switch ( selection_code )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_291_result = sub_14020EE64(a1, &selection_flag);
      else
        unknown_libname_291_result = sub_14020F1AC(a1, &selection_flag);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_291_result = sub_14020F4F4(a1, &selection_flag);
      else
        unknown_libname_291_result = sub_14020F9D4(a1, &selection_flag);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_291_result = sub_14020FD18(a1, &selection_flag);
      else
        unknown_libname_291_result = sub_140210058(a1, &selection_flag);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_291_result = unknown_libname_291(a1, &selection_flag);
      else
        unknown_libname_291_result = unknown_libname_299(a1, &selection_flag);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  if ( !unknown_libname_291_result )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    option_flags = *(_DWORD *)(a1 + 48);
    integer_difference_6 = selection_flag;
    if ( (option_flags & 0x10) != 0 && selection_flag < 0 )
    {
      integer_difference_6 = -selection_flag;
      option_flags |= 0x40u;
      *(_DWORD *)(a1 + 48) = option_flags;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      loaded_word_2 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
      sub_14020EB80(a1 + 88, loaded_word_2);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !integer_difference_6 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 1;
    if ( selection_code == 8 )
      unknown_libname_369(a1, integer_difference_6, a2, a3);
    else
      unknown_libname_357(a1, integer_difference_6, a2, a3);
    if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
    {
      *(_QWORD *)(a1 + 72) -= 2LL;
      **(_WORD **)(a1 + 72) = 48;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  return 1;
}

//----- (00000001402207AC) ----------------------------------------------------
char            sub_1402207AC(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( selection_code == 8 )
    unknown_libname_370(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_358(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
  {
    *(_QWORD *)(a1 + 72) -= 2LL;
    **(_WORD **)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

//----- (0000000140220978) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_527(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140220A54) ----------------------------------------------------
char            sub_140220A54(__int64 a1)
{
  __int64 selection_code;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;
  _QWORD *loaded_record_pointer;

  selection_code = 0;
  loaded_record_pointer = nullptr;
  if ( !unknown_libname_276(a1, &loaded_record_pointer) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_21;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_21;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_21;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_21:
      selection_code = 8;
      goto LABEL_22;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_22;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_22;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_22;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_21;
LABEL_22:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
          goto LABEL_6;
        *loaded_record_pointer = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140220B58) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_528(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140220C34) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_529(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140220D10) ----------------------------------------------------
char            sub_140220D10(__int64 a1)
{
  __int64 selection_code;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;
  _QWORD *loaded_record_pointer;

  selection_code = 0;
  loaded_record_pointer = nullptr;
  if ( !unknown_libname_277(a1, &loaded_record_pointer) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_21;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_21;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_21;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_21:
      selection_code = 8;
      goto LABEL_22;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_22;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_22;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_22;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_21;
LABEL_22:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
          goto LABEL_6;
        *loaded_record_pointer = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140220E14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_530(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140220EF0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_531(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140220FCC) ----------------------------------------------------
char            sub_140220FCC(__int64 a1)
{
  __int64 selection_code;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;
  _QWORD *loaded_record_pointer;

  selection_code = 0;
  loaded_record_pointer = nullptr;
  if ( !unknown_libname_278(a1, &loaded_record_pointer) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_21;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_21;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_21;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_21:
      selection_code = 8;
      goto LABEL_22;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_22;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_22;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_22;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_21;
LABEL_22:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
          goto LABEL_6;
        *loaded_record_pointer = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (00000001402210D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_532(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (00000001402211AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_533(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140221288) ----------------------------------------------------
char            sub_140221288(__int64 a1)
{
  __int64 selection_code;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;
  _QWORD *loaded_record_pointer;

  selection_code = 0;
  loaded_record_pointer = nullptr;
  if ( !unknown_libname_279(a1, &loaded_record_pointer) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_21;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_21;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_21;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_21:
      selection_code = 8;
      goto LABEL_22;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_22;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_22;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_22;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_21;
LABEL_22:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
          goto LABEL_6;
        *loaded_record_pointer = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (000000014022138C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_534(__int64 a1)
{
  __int64 selection_code;
  _QWORD *unused_written_slot;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  __int64 integer_difference_6;
  __int64 integer_difference_7;
  __int64 integer_difference_8;

  selection_code = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  unused_written_slot = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
      goto LABEL_18;
    if ( !loaded_word )
      goto LABEL_17;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_18;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_18;
    }
LABEL_8:
    integer_difference_3 = integer_difference_2 - 1;
    if ( integer_difference_3 )
    {
      if ( integer_difference_3 != 1 )
        selection_code = 0;
      goto LABEL_18;
    }
LABEL_17:
    selection_code = 4;
    goto LABEL_18;
  }
  integer_difference_4 = loaded_word - 6;
  if ( integer_difference_4 )
  {
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_2 = integer_difference_5 - 2;
      if ( integer_difference_2 )
        goto LABEL_8;
    }
  }
LABEL_18:
  integer_difference_6 = selection_code - 1;
  if ( integer_difference_6 )
  {
    integer_difference_7 = integer_difference_6 - 1;
    if ( integer_difference_7 )
    {
      integer_difference_8 = integer_difference_7 - 2;
      if ( integer_difference_8 )
      {
        if ( integer_difference_8 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0;
        }
        *unused_written_slot = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)unused_written_slot = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)unused_written_slot = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)unused_written_slot = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

//----- (0000000140221708) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_535(__int64 a1)
{
  int loaded_word;
  __m128i *loaded_record_pointer;
  int loaded_word_2;
  int integer_difference;
  int integer_difference_2;
  bool comparison_result;
  unsigned int strnlen_sr_result;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_record_pointer = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(loaded_record_pointer);
  integer_difference = loaded_word_2 - 2;
  if ( !integer_difference )
  {
    comparison_result = 0;
LABEL_9:
    if ( comparison_result )
    {
LABEL_10:
      if ( !loaded_record_pointer )
      {
        loaded_record_pointer = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      strnlen_sr_result = sub_140254F48(loaded_record_pointer, loaded_word);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference_2 = integer_difference - 1;
  if ( !integer_difference_2 || integer_difference_2 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !loaded_record_pointer )
  {
    loaded_record_pointer = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  strnlen_sr_result = (unsigned int)strnlen_sr(loaded_record_pointer, loaded_word);
LABEL_16:
  *(_DWORD *)(a1 + 80) = strnlen_sr_result;
  return 1;
}

//----- (00000001402217A0) ----------------------------------------------------
char            sub_1402217A0(__int64 a1)
{
  __m128i **packed_vector;
  char result;
  int loaded_word;
  bool comparison_result;
  __m128i *loaded_word_2;
  unsigned int strnlen_sr_result;
  __m128i *loaded_word_3;

  packed_vector = (__m128i **)(a1 + 72);
  result = unknown_libname_252(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    loaded_word = *(_DWORD *)(a1 + 56);
    if ( loaded_word == -1 )
      loaded_word = 0x7FFFFFFF;
    switch ( *(_DWORD *)(a1 + 60) )
    {
      case 2:
        comparison_result = 0;
        break;
      case 3:
      case 0xC:
LABEL_13:
        loaded_word_2 = *packed_vector;
        if ( !*packed_vector )
        {
          loaded_word_2 = (__m128i *)L"(null)";
          *packed_vector = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        strnlen_sr_result = sub_140254F48(loaded_word_2, loaded_word);
LABEL_19:
        *(_DWORD *)(a1 + 80) = strnlen_sr_result;
        return 1;
      case 0xD:
LABEL_16:
        loaded_word_3 = *packed_vector;
        if ( !*packed_vector )
        {
          loaded_word_3 = (__m128i *)"(null)";
          *packed_vector = (__m128i *)"(null)";
        }
        strnlen_sr_result = (unsigned int)strnlen_sr(loaded_word_3, loaded_word);
        goto LABEL_19;
      default:
        comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
        break;
    }
    if ( comparison_result )
      goto LABEL_13;
    goto LABEL_16;
  }
  return result;
}

//----- (0000000140221858) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_536(__int64 a1)
{
  int loaded_word;
  __m128i *loaded_record_pointer;
  int loaded_word_2;
  int integer_difference;
  int integer_difference_2;
  bool comparison_result;
  unsigned int strnlen_sr_result;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_record_pointer = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(loaded_record_pointer);
  integer_difference = loaded_word_2 - 2;
  if ( !integer_difference )
  {
    comparison_result = 0;
LABEL_9:
    if ( comparison_result )
    {
LABEL_10:
      if ( !loaded_record_pointer )
      {
        loaded_record_pointer = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      strnlen_sr_result = sub_140254F48(loaded_record_pointer, loaded_word);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference_2 = integer_difference - 1;
  if ( !integer_difference_2 || integer_difference_2 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !loaded_record_pointer )
  {
    loaded_record_pointer = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  strnlen_sr_result = (unsigned int)strnlen_sr(loaded_record_pointer, loaded_word);
LABEL_16:
  *(_DWORD *)(a1 + 80) = strnlen_sr_result;
  return 1;
}

//----- (00000001402218F0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_537(__int64 a1)
{
  int loaded_word;
  __m128i *loaded_record_pointer;
  int loaded_word_2;
  int integer_difference;
  int integer_difference_2;
  bool comparison_result;
  unsigned int strnlen_sr_result;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_record_pointer = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(loaded_record_pointer);
  integer_difference = loaded_word_2 - 2;
  if ( !integer_difference )
  {
    comparison_result = 0;
LABEL_9:
    if ( comparison_result )
    {
LABEL_10:
      if ( !loaded_record_pointer )
      {
        loaded_record_pointer = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      strnlen_sr_result = sub_140254F48(loaded_record_pointer, loaded_word);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference_2 = integer_difference - 1;
  if ( !integer_difference_2 || integer_difference_2 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !loaded_record_pointer )
  {
    loaded_record_pointer = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  strnlen_sr_result = (unsigned int)strnlen_sr(loaded_record_pointer, loaded_word);
LABEL_16:
  *(_DWORD *)(a1 + 80) = strnlen_sr_result;
  return 1;
}

//----- (0000000140221988) ----------------------------------------------------
char            sub_140221988(__int64 a1)
{
  __m128i **packed_vector;
  char result;
  int loaded_word;
  bool comparison_result;
  __m128i *loaded_word_2;
  unsigned int strnlen_sr_result;
  __m128i *loaded_word_3;

  packed_vector = (__m128i **)(a1 + 72);
  result = unknown_libname_253(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    loaded_word = *(_DWORD *)(a1 + 56);
    if ( loaded_word == -1 )
      loaded_word = 0x7FFFFFFF;
    switch ( *(_DWORD *)(a1 + 60) )
    {
      case 2:
        comparison_result = 0;
        break;
      case 3:
      case 0xC:
LABEL_13:
        loaded_word_2 = *packed_vector;
        if ( !*packed_vector )
        {
          loaded_word_2 = (__m128i *)L"(null)";
          *packed_vector = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        strnlen_sr_result = sub_140254F48(loaded_word_2, loaded_word);
LABEL_19:
        *(_DWORD *)(a1 + 80) = strnlen_sr_result;
        return 1;
      case 0xD:
LABEL_16:
        loaded_word_3 = *packed_vector;
        if ( !*packed_vector )
        {
          loaded_word_3 = (__m128i *)"(null)";
          *packed_vector = (__m128i *)"(null)";
        }
        strnlen_sr_result = (unsigned int)strnlen_sr(loaded_word_3, loaded_word);
        goto LABEL_19;
      default:
        comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
        break;
    }
    if ( comparison_result )
      goto LABEL_13;
    goto LABEL_16;
  }
  return result;
}

//----- (0000000140221A40) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_538(__int64 a1)
{
  int loaded_word;
  __m128i *loaded_record_pointer;
  int loaded_word_2;
  int integer_difference;
  int integer_difference_2;
  bool comparison_result;
  unsigned int strnlen_sr_result;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_record_pointer = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(loaded_record_pointer);
  integer_difference = loaded_word_2 - 2;
  if ( !integer_difference )
  {
    comparison_result = 0;
LABEL_9:
    if ( comparison_result )
    {
LABEL_10:
      if ( !loaded_record_pointer )
      {
        loaded_record_pointer = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      strnlen_sr_result = sub_140254F48(loaded_record_pointer, loaded_word);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference_2 = integer_difference - 1;
  if ( !integer_difference_2 || integer_difference_2 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !loaded_record_pointer )
  {
    loaded_record_pointer = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  strnlen_sr_result = (unsigned int)strnlen_sr(loaded_record_pointer, loaded_word);
LABEL_16:
  *(_DWORD *)(a1 + 80) = strnlen_sr_result;
  return 1;
}

//----- (0000000140221AD8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_539(__int64 a1)
{
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __m128i *state_address;
  int cached_i;
  int i;
  __m128i *state_address_2;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  loaded_word_3 = *(_WORD *)(a1 + 66);
  state_address = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(state_address);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, loaded_word_3, loaded_word_2) )
  {
    if ( !state_address )
    {
      state_address = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    cached_i = sub_140254F48(state_address, loaded_word);
  }
  else
  {
    if ( !state_address )
    {
      state_address = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < loaded_word; state_address = (__m128i *)&SR_VEC_PTR_LANES(128, state_address_2, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, state_address, i8)[0] )
        break;
      state_address_2 = (__m128i *)&SR_VEC_PTR_LANES(128, state_address, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, state_address, u8)[0]) & 0x8000) == 0 )
        state_address_2 = state_address;
      ++i;
    }
    cached_i = i;
  }
  *(_DWORD *)(a1 + 80) = cached_i;
  return 1;
}

//----- (0000000140221BA0) ----------------------------------------------------
char            sub_140221BA0(__int64 a1)
{
  __m128i **packed_vector;
  char result;
  int loaded_word;
  __m128i *state_address;
  int cached_i;
  int i;
  __m128i *state_address_2;

  packed_vector = (__m128i **)(a1 + 72);
  result = unknown_libname_254(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = *(_DWORD *)(a1 + 56);
      if ( loaded_word == -1 )
        loaded_word = 0x7FFFFFFF;
      state_address = *packed_vector;
      if ( sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60)) )
      {
        if ( !state_address )
        {
          state_address = (__m128i *)L"(null)";
          *packed_vector = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        cached_i = sub_140254F48(state_address, loaded_word);
      }
      else
      {
        if ( !state_address )
        {
          state_address = (__m128i *)"(null)";
          *packed_vector = (__m128i *)"(null)";
        }
        for ( i = 0; i < loaded_word; state_address = (__m128i *)&SR_VEC_PTR_LANES(128, state_address_2, i8)[1] )
        {
          if ( !SR_VEC_PTR_LANES(128, state_address, i8)[0] )
            break;
          state_address_2 = (__m128i *)&SR_VEC_PTR_LANES(128, state_address, i8)[1];
          if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, state_address, u8)[0]) & 0x8000) == 0 )
            state_address_2 = state_address;
          ++i;
        }
        cached_i = i;
      }
      *(_DWORD *)(a1 + 80) = cached_i;
    }
    return 1;
  }
  return result;
}

//----- (0000000140221C8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_540(__int64 a1)
{
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __m128i *state_address;
  int cached_i;
  int i;
  __m128i *state_address_2;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  loaded_word_3 = *(_WORD *)(a1 + 66);
  state_address = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(state_address);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, loaded_word_3, loaded_word_2) )
  {
    if ( !state_address )
    {
      state_address = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    cached_i = sub_140254F48(state_address, loaded_word);
  }
  else
  {
    if ( !state_address )
    {
      state_address = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < loaded_word; state_address = (__m128i *)&SR_VEC_PTR_LANES(128, state_address_2, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, state_address, i8)[0] )
        break;
      state_address_2 = (__m128i *)&SR_VEC_PTR_LANES(128, state_address, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, state_address, u8)[0]) & 0x8000) == 0 )
        state_address_2 = state_address;
      ++i;
    }
    cached_i = i;
  }
  *(_DWORD *)(a1 + 80) = cached_i;
  return 1;
}

//----- (0000000140221D54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_541(__int64 a1)
{
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __m128i *state_address;
  int cached_i;
  int i;
  __m128i *state_address_2;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  loaded_word_3 = *(_WORD *)(a1 + 66);
  state_address = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(state_address);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, loaded_word_3, loaded_word_2) )
  {
    if ( !state_address )
    {
      state_address = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    cached_i = sub_140254F48(state_address, loaded_word);
  }
  else
  {
    if ( !state_address )
    {
      state_address = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < loaded_word; state_address = (__m128i *)&SR_VEC_PTR_LANES(128, state_address_2, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, state_address, i8)[0] )
        break;
      state_address_2 = (__m128i *)&SR_VEC_PTR_LANES(128, state_address, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, state_address, u8)[0]) & 0x8000) == 0 )
        state_address_2 = state_address;
      ++i;
    }
    cached_i = i;
  }
  *(_DWORD *)(a1 + 80) = cached_i;
  return 1;
}

//----- (0000000140221E1C) ----------------------------------------------------
char            sub_140221E1C(__int64 a1)
{
  __m128i **packed_vector;
  char result;
  int loaded_word;
  __m128i *state_address;
  int cached_i;
  int i;
  __m128i *state_address_2;

  packed_vector = (__m128i **)(a1 + 72);
  result = unknown_libname_255(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = *(_DWORD *)(a1 + 56);
      if ( loaded_word == -1 )
        loaded_word = 0x7FFFFFFF;
      state_address = *packed_vector;
      if ( sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60)) )
      {
        if ( !state_address )
        {
          state_address = (__m128i *)L"(null)";
          *packed_vector = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        cached_i = sub_140254F48(state_address, loaded_word);
      }
      else
      {
        if ( !state_address )
        {
          state_address = (__m128i *)"(null)";
          *packed_vector = (__m128i *)"(null)";
        }
        for ( i = 0; i < loaded_word; state_address = (__m128i *)&SR_VEC_PTR_LANES(128, state_address_2, i8)[1] )
        {
          if ( !SR_VEC_PTR_LANES(128, state_address, i8)[0] )
            break;
          state_address_2 = (__m128i *)&SR_VEC_PTR_LANES(128, state_address, i8)[1];
          if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, state_address, u8)[0]) & 0x8000) == 0 )
            state_address_2 = state_address;
          ++i;
        }
        cached_i = i;
      }
      *(_DWORD *)(a1 + 80) = cached_i;
    }
    return 1;
  }
  return result;
}

//----- (0000000140221F08) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_542(__int64 a1)
{
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __m128i *state_address;
  int cached_i;
  int i;
  __m128i *state_address_2;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_DWORD *)(a1 + 56);
  loaded_word_2 = *(_DWORD *)(a1 + 60);
  loaded_word_3 = *(_WORD *)(a1 + 66);
  state_address = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(state_address);
  if ( loaded_word == -1 )
    loaded_word = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, loaded_word_3, loaded_word_2) )
  {
    if ( !state_address )
    {
      state_address = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    cached_i = sub_140254F48(state_address, loaded_word);
  }
  else
  {
    if ( !state_address )
    {
      state_address = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < loaded_word; state_address = (__m128i *)&SR_VEC_PTR_LANES(128, state_address_2, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, state_address, i8)[0] )
        break;
      state_address_2 = (__m128i *)&SR_VEC_PTR_LANES(128, state_address, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, state_address, u8)[0]) & 0x8000) == 0 )
        state_address_2 = state_address;
      ++i;
    }
    cached_i = i;
  }
  *(_DWORD *)(a1 + 80) = cached_i;
  return 1;
}

//----- (0000000140222018) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_549(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  unsigned int i;
  _BYTE *saved_loaded_record_pointer;

  loaded_record_pointer = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; loaded_record_pointer = saved_loaded_record_pointer + 1 )
  {
    if ( !*loaded_record_pointer )
      break;
    saved_loaded_record_pointer = loaded_record_pointer + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*loaded_record_pointer) & 0x8000) == 0 )
      saved_loaded_record_pointer = loaded_record_pointer;
    ++i;
  }
  return i;
}

//----- (000000014022206C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_550(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  unsigned int i;
  _BYTE *saved_loaded_record_pointer;

  loaded_record_pointer = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; loaded_record_pointer = saved_loaded_record_pointer + 1 )
  {
    if ( !*loaded_record_pointer )
      break;
    saved_loaded_record_pointer = loaded_record_pointer + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*loaded_record_pointer) & 0x8000) == 0 )
      saved_loaded_record_pointer = loaded_record_pointer;
    ++i;
  }
  return i;
}

//----- (00000001402220C0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_551(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  unsigned int i;
  _BYTE *saved_loaded_record_pointer;

  loaded_record_pointer = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; loaded_record_pointer = saved_loaded_record_pointer + 1 )
  {
    if ( !*loaded_record_pointer )
      break;
    saved_loaded_record_pointer = loaded_record_pointer + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*loaded_record_pointer) & 0x8000) == 0 )
      saved_loaded_record_pointer = loaded_record_pointer;
    ++i;
  }
  return i;
}

//----- (0000000140222114) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_552(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  unsigned int i;
  _BYTE *saved_loaded_record_pointer;

  loaded_record_pointer = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; loaded_record_pointer = saved_loaded_record_pointer + 1 )
  {
    if ( !*loaded_record_pointer )
      break;
    saved_loaded_record_pointer = loaded_record_pointer + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*loaded_record_pointer) & 0x8000) == 0 )
      saved_loaded_record_pointer = loaded_record_pointer;
    ++i;
  }
  return i;
}

//----- (0000000140222168) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_553(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  unsigned int i;
  _BYTE *saved_loaded_record_pointer;

  loaded_record_pointer = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; loaded_record_pointer = saved_loaded_record_pointer + 1 )
  {
    if ( !*loaded_record_pointer )
      break;
    saved_loaded_record_pointer = loaded_record_pointer + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*loaded_record_pointer) & 0x8000) == 0 )
      saved_loaded_record_pointer = loaded_record_pointer;
    ++i;
  }
  return i;
}

//----- (00000001402221BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_554(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  unsigned int i;
  _BYTE *saved_loaded_record_pointer;

  loaded_record_pointer = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; loaded_record_pointer = saved_loaded_record_pointer + 1 )
  {
    if ( !*loaded_record_pointer )
      break;
    saved_loaded_record_pointer = loaded_record_pointer + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*loaded_record_pointer) & 0x8000) == 0 )
      saved_loaded_record_pointer = loaded_record_pointer;
    ++i;
  }
  return i;
}

//----- (0000000140222390) ----------------------------------------------------
char            sub_140222390(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _BYTE *byte_cursor;
  int integer_difference;
  int loaded_word_2;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index;
  _BYTE *byte_cursor_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(_QWORD *)(a1 + 24);
    unused_written_slot = 0;
    byte_cursor_2 = nullptr;
    masked_bits = sub_14023CCCC(loaded_word, (__int64 *)&byte_cursor_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    byte_cursor = byte_cursor_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(byte_cursor_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *byte_cursor != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = masked_bits - 1;
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_BYTE *)(a1 + 65);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word_2 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_2;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214A64(a1, scaled_index, 1, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_BYTE *)(scaled_index + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402224A8) ----------------------------------------------------
char            sub_1402224A8(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _BYTE *byte_cursor;
  int integer_difference;
  int loaded_word_2;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index;
  _BYTE *byte_cursor_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(_QWORD *)(a1 + 24);
    unused_written_slot = 0;
    byte_cursor_2 = nullptr;
    masked_bits = sub_14023CCCC(loaded_word, (__int64 *)&byte_cursor_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    byte_cursor = byte_cursor_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(byte_cursor_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *byte_cursor != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = masked_bits - 1;
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_BYTE *)(a1 + 65);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word_2 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_2;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214C94(a1, scaled_index, 1, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_BYTE *)(scaled_index + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402225C0) ----------------------------------------------------
char            sub_1402225C0(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _WORD *record_pointer;
  int integer_difference;
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __int64 scaled_index;
  _WORD *record_pointer_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
    unused_written_slot = 0;
    record_pointer_2 = nullptr;
    masked_bits = sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    record_pointer = record_pointer_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *record_pointer != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word = masked_bits - 1;
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_WORD *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402226D8) ----------------------------------------------------
char            sub_1402226D8(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _WORD *record_pointer;
  int integer_difference;
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __int64 scaled_index;
  _WORD *record_pointer_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
    unused_written_slot = 0;
    record_pointer_2 = nullptr;
    masked_bits = sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    record_pointer = record_pointer_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *record_pointer != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word = masked_bits - 1;
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_WORD *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140222840) ----------------------------------------------------
char            sub_140222840(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _BYTE *byte_cursor;
  int integer_difference;
  int loaded_word_2;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index;
  _BYTE *byte_cursor_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(_QWORD *)(a1 + 24);
    unused_written_slot = 0;
    byte_cursor_2 = nullptr;
    masked_bits = sub_14023CCCC(loaded_word, (__int64 *)&byte_cursor_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    byte_cursor = byte_cursor_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(byte_cursor_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *byte_cursor != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = masked_bits - 1;
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_BYTE *)(a1 + 65);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word_2 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_2;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214A64(a1, scaled_index, 1, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_BYTE *)(scaled_index + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140222958) ----------------------------------------------------
char            sub_140222958(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _BYTE *byte_cursor;
  int integer_difference;
  int loaded_word_2;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index;
  _BYTE *byte_cursor_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(_QWORD *)(a1 + 24);
    unused_written_slot = 0;
    byte_cursor_2 = nullptr;
    masked_bits = sub_14023CCCC(loaded_word, (__int64 *)&byte_cursor_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    byte_cursor = byte_cursor_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(byte_cursor_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *byte_cursor != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = masked_bits - 1;
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_BYTE *)(a1 + 65);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word_2 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_2;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214C94(a1, scaled_index, 1, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_BYTE *)(scaled_index + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140222A70) ----------------------------------------------------
char            sub_140222A70(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _WORD *record_pointer;
  int integer_difference;
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __int64 scaled_index;
  _WORD *record_pointer_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
    unused_written_slot = 0;
    record_pointer_2 = nullptr;
    masked_bits = sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    record_pointer = record_pointer_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *record_pointer != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word = masked_bits - 1;
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_WORD *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140222B88) ----------------------------------------------------
char            sub_140222B88(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  char unused_written_slot;
  int masked_bits;
  bool comparison_result;
  _WORD *record_pointer;
  int integer_difference;
  int loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  __int64 scaled_index;
  _WORD *record_pointer_2;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
    unused_written_slot = 0;
    record_pointer_2 = nullptr;
    masked_bits = sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_2, 0xAu);
    comparison_result = *(_DWORD *)(a1 + 1144) == 1;
    record_pointer = record_pointer_2;
    integer_difference = masked_bits - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer_2 + 1);
    if ( !comparison_result )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * integer_difference + 1168);
      return 1;
    }
    if ( integer_difference < 0 || *record_pointer != 36 || integer_difference >= 100 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word = masked_bits - 1;
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    if ( integer_difference <= *(_DWORD *)(a1 + 3560) )
      loaded_word = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word;
    scaled_index = a1 + 8 * (integer_difference + 2LL * integer_difference + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 1;
      *(_WORD *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140222CF0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_563(__int64 *a1)
{
  __int64 loaded_word;

  loaded_word = *a1;
  if ( loaded_word )
    return sub_14022389C(loaded_word);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222D1C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_564(_QWORD *a1)
{
  if ( *a1 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222D44) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_565(_QWORD *a1)
{
  if ( *a1 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222D6C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_566(_QWORD *a1)
{
  if ( *a1 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222D94) ----------------------------------------------------
char            sub_140222D94(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 16) = a5;
    return 1;
  }
  if ( sub_140214A64(a1, a2, a3, a4, a5) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222DD4) ----------------------------------------------------
char            sub_140222DD4(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 16) = a5;
    return 1;
  }
  if ( sub_140214C94(a1, a2, a3, a4, a5) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222E14) ----------------------------------------------------
char            sub_140222E14(_QWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_WORD *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 16) = a5;
    return 1;
  }
  if ( sub_140214EC4(a1, a2, a3, a4, a5) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222E54) ----------------------------------------------------
char            sub_140222E54(_QWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_WORD *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 16) = a5;
    return 1;
  }
  if ( sub_1402150C4(a1, a2, a3, a4, a5) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222E94) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_567(__int64 a1)
{
  char *loaded_record_pointer;
  char input_byte;
  int loaded_word;
  int masked_bits;
  bool comparison_result;
  _BYTE *byte_cursor;
  int loaded_word_2;
  _BYTE *byte_cursor_2;
  _BYTE *byte_cursor_3;

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  if ( *loaded_record_pointer == 37 )
    return 1;
  loaded_word = *(_DWORD *)(a1 + 1148);
  if ( loaded_word )
  {
LABEL_13:
    if ( loaded_word == 2 )
      goto LABEL_14;
    return 1;
  }
  byte_cursor_2 = nullptr;
  if ( (unsigned __int8)(input_byte - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    loaded_word = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CCCC((__int64)loaded_record_pointer, (__int64 *)&byte_cursor_2, 0xAu) <= 0 || *byte_cursor_2 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  loaded_record_pointer = *(char **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  byte_cursor_3 = nullptr;
  masked_bits = sub_14023CCCC((__int64)loaded_record_pointer, (__int64 *)&byte_cursor_3, 0xAu);
  comparison_result = *(_DWORD *)(a1 + 1144) == 1;
  byte_cursor = byte_cursor_3;
  loaded_word_2 = masked_bits - 1;
  *(_DWORD *)(a1 + 3564) = masked_bits - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(byte_cursor + 1);
  if ( !comparison_result )
    return 1;
  if ( loaded_word_2 >= 0 && *byte_cursor == 36 && loaded_word_2 < 100 )
  {
    if ( loaded_word_2 <= *(_DWORD *)(a1 + 3560) )
      loaded_word_2 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_2;
    return 1;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140222FA0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_568(__int64 a1)
{
  char *loaded_record_pointer;
  char input_byte;
  int loaded_word;
  int masked_bits;
  bool comparison_result;
  _BYTE *byte_cursor;
  int loaded_word_2;
  _BYTE *byte_cursor_2;
  _BYTE *byte_cursor_3;

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  if ( *loaded_record_pointer == 37 )
    return 1;
  loaded_word = *(_DWORD *)(a1 + 1148);
  if ( loaded_word )
  {
LABEL_13:
    if ( loaded_word == 2 )
      goto LABEL_14;
    return 1;
  }
  byte_cursor_2 = nullptr;
  if ( (unsigned __int8)(input_byte - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    loaded_word = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CCCC((__int64)loaded_record_pointer, (__int64 *)&byte_cursor_2, 0xAu) <= 0 || *byte_cursor_2 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  loaded_record_pointer = *(char **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  byte_cursor_3 = nullptr;
  masked_bits = sub_14023CCCC((__int64)loaded_record_pointer, (__int64 *)&byte_cursor_3, 0xAu);
  comparison_result = *(_DWORD *)(a1 + 1144) == 1;
  byte_cursor = byte_cursor_3;
  loaded_word_2 = masked_bits - 1;
  *(_DWORD *)(a1 + 3564) = masked_bits - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(byte_cursor + 1);
  if ( !comparison_result )
    return 1;
  if ( loaded_word_2 >= 0 && *byte_cursor == 36 && loaded_word_2 < 100 )
  {
    if ( loaded_word_2 <= *(_DWORD *)(a1 + 3560) )
      loaded_word_2 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_2;
    return 1;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402230AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_569(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  unsigned __int16 loaded_word;
  int loaded_word_2;
  int masked_bits;
  bool comparison_result;
  _WORD *record_pointer;
  int loaded_word_3;
  _WORD *record_pointer_2;
  _WORD *record_pointer_3;

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
  loaded_word = *loaded_record_pointer;
  if ( *loaded_record_pointer == 37 )
    return 1;
  loaded_word_2 = *(_DWORD *)(a1 + 1148);
  if ( loaded_word_2 )
  {
LABEL_13:
    if ( loaded_word_2 == 2 )
      goto LABEL_14;
    return 1;
  }
  record_pointer_2 = nullptr;
  if ( (unsigned __int16)(loaded_word - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    loaded_word_2 = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_2, 0xAu) <= 0 || *record_pointer_2 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  record_pointer_3 = nullptr;
  masked_bits = sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_3, 0xAu);
  comparison_result = *(_DWORD *)(a1 + 1144) == 1;
  record_pointer = record_pointer_3;
  loaded_word_3 = masked_bits - 1;
  *(_DWORD *)(a1 + 3564) = masked_bits - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer + 1);
  if ( !comparison_result )
    return 1;
  if ( loaded_word_3 >= 0 && *record_pointer == 36 && loaded_word_3 < 100 )
  {
    if ( loaded_word_3 <= *(_DWORD *)(a1 + 3560) )
      loaded_word_3 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_3;
    return 1;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402231C0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_570(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  unsigned __int16 loaded_word;
  int loaded_word_2;
  int masked_bits;
  bool comparison_result;
  _WORD *record_pointer;
  int loaded_word_3;
  _WORD *record_pointer_2;
  _WORD *record_pointer_3;

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
  loaded_word = *loaded_record_pointer;
  if ( *loaded_record_pointer == 37 )
    return 1;
  loaded_word_2 = *(_DWORD *)(a1 + 1148);
  if ( loaded_word_2 )
  {
LABEL_13:
    if ( loaded_word_2 == 2 )
      goto LABEL_14;
    return 1;
  }
  record_pointer_2 = nullptr;
  if ( (unsigned __int16)(loaded_word - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    loaded_word_2 = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_2, 0xAu) <= 0 || *record_pointer_2 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  loaded_record_pointer = *(unsigned __int16 **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  record_pointer_3 = nullptr;
  masked_bits = sub_14023CDD4(loaded_record_pointer, (unsigned __int16 *)&record_pointer_3, 0xAu);
  comparison_result = *(_DWORD *)(a1 + 1144) == 1;
  record_pointer = record_pointer_3;
  loaded_word_3 = masked_bits - 1;
  *(_DWORD *)(a1 + 3564) = masked_bits - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer + 1);
  if ( !comparison_result )
    return 1;
  if ( loaded_word_3 >= 0 && *record_pointer == 36 && loaded_word_3 < 100 )
  {
    if ( loaded_word_3 <= *(_DWORD *)(a1 + 3560) )
      loaded_word_3 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = loaded_word_3;
    return 1;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402232E4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_571(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140223310) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_572(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014022333C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_573(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140223368) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_574(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140223394) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_575(__int64 a1)
{
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 saved_record_byte_offset;

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    record_byte_offset = a1 + 1160;
    loaded_word = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(record_byte_offset + 8) = loaded_word_2;
        saved_record_byte_offset = record_byte_offset;
        if ( *(_DWORD *)record_byte_offset != 1 && *(_DWORD *)record_byte_offset != 2 && (unsigned int)(*(_DWORD *)record_byte_offset - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        loaded_word_2 = *(_QWORD *)(a1 + 32);
        record_byte_offset += 24;
        if ( saved_record_byte_offset == a1 + 1160 + 8 * loaded_word )
          return 1;
      }
      goto LABEL_3;
    }
  }
  return 1;
}

//----- (0000000140223430) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_576(__int64 a1)
{
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 saved_record_byte_offset;

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    record_byte_offset = a1 + 1160;
    loaded_word = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(record_byte_offset + 8) = loaded_word_2;
        saved_record_byte_offset = record_byte_offset;
        if ( *(_DWORD *)record_byte_offset != 1 && *(_DWORD *)record_byte_offset != 2 && (unsigned int)(*(_DWORD *)record_byte_offset - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        loaded_word_2 = *(_QWORD *)(a1 + 32);
        record_byte_offset += 24;
        if ( saved_record_byte_offset == a1 + 1160 + 8 * loaded_word )
          return 1;
      }
      goto LABEL_3;
    }
  }
  return 1;
}

//----- (00000001402234CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_577(__int64 a1)
{
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 saved_record_byte_offset;

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    record_byte_offset = a1 + 1160;
    loaded_word = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(record_byte_offset + 8) = loaded_word_2;
        saved_record_byte_offset = record_byte_offset;
        if ( *(_DWORD *)record_byte_offset != 1 && *(_DWORD *)record_byte_offset != 2 && (unsigned int)(*(_DWORD *)record_byte_offset - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        loaded_word_2 = *(_QWORD *)(a1 + 32);
        record_byte_offset += 24;
        if ( saved_record_byte_offset == a1 + 1160 + 8 * loaded_word )
          return 1;
      }
      goto LABEL_3;
    }
  }
  return 1;
}

//----- (0000000140223568) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_578(__int64 a1)
{
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 saved_record_byte_offset;

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    record_byte_offset = a1 + 1160;
    loaded_word = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(record_byte_offset + 8) = loaded_word_2;
        saved_record_byte_offset = record_byte_offset;
        if ( *(_DWORD *)record_byte_offset != 1 && *(_DWORD *)record_byte_offset != 2 && (unsigned int)(*(_DWORD *)record_byte_offset - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        loaded_word_2 = *(_QWORD *)(a1 + 32);
        record_byte_offset += 24;
        if ( saved_record_byte_offset == a1 + 1160 + 8 * loaded_word )
          return 1;
      }
      goto LABEL_3;
    }
  }
  return 1;
}

//----- (0000000140223614) ----------------------------------------------------
char            sub_140223614(__int64 a1)
{
  __int64 loaded_word;
  int loaded_word_2;
  char loaded_word_3;
  char unused_written_slot;
  __int64 scaled_index;

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    unused_written_slot = 0;
    scaled_index = a1 + 8 * (loaded_word + 2 * loaded_word + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214A64(a1, scaled_index, 4, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 4;
      *(_BYTE *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  return 1;
}

//----- (00000001402236B0) ----------------------------------------------------
char            sub_1402236B0(__int64 a1)
{
  __int64 loaded_word;
  int loaded_word_2;
  char loaded_word_3;
  char unused_written_slot;
  __int64 scaled_index;

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    unused_written_slot = 0;
    scaled_index = a1 + 8 * (loaded_word + 2 * loaded_word + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214C94(a1, scaled_index, 4, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 4;
      *(_BYTE *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  return 1;
}

//----- (000000014022374C) ----------------------------------------------------
char            sub_14022374C(__int64 a1)
{
  __int64 loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  char unused_written_slot;
  __int64 scaled_index;

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    unused_written_slot = 0;
    scaled_index = a1 + 8 * (loaded_word + 2 * loaded_word + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index, 4, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 4;
      *(_WORD *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  return 1;
}

//----- (00000001402237EC) ----------------------------------------------------
char            sub_1402237EC(__int64 a1)
{
  __int64 loaded_word;
  int loaded_word_2;
  __int16 loaded_word_3;
  char unused_written_slot;
  __int64 scaled_index;

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    unused_written_slot = 0;
    scaled_index = a1 + 8 * (loaded_word + 2 * loaded_word + 145);
    if ( *(_DWORD *)scaled_index )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index, 4, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index = 4;
      *(_WORD *)(scaled_index + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index + 16) = loaded_word_2;
    }
    return 1;
  }
  return 1;
}

//----- (000000014022389C) ----------------------------------------------------
char            sub_14022389C(__int64 a1)
{
  int fileno_result;
  _BYTE *state_address;
  _BYTE *comparison_result;

  if ( (*(_DWORD *)(a1 + 20) & 0x1000) != 0 )
    return 1;
  fileno_result = fileno((FILE *)a1);
  state_address = &unk_1403022C0;
  comparison_result = (unsigned int)(fileno_result + 2) <= 1
     ? &unk_1403022C0
     : (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
  if ( !comparison_result[57] )
  {
    if ( (unsigned int)(fileno_result + 2) > 1 )
      state_address = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
    if ( (state_address[61] & 1) == 0 )
      return 1;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014022399C) ----------------------------------------------------
__int64            sub_14022399C(__int64 *a1, unsigned __int8 a2, _DWORD *a3)
{
  __int64 result;

  if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || (result = *a1, *(_QWORD *)(*a1 + 8)))
    && (result = unknown_libname_207(a2, *a1), (_DWORD)result == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}

//----- (00000001402239E4) ----------------------------------------------------
__int64            sub_1402239E4(__int64 *a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 result;

  if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || (result = *a1, *(_QWORD *)(*a1 + 8)))
    && (result = sub_140256B38(a2, *a1), (_WORD)result == 0xFFFF) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}

//----- (0000000140223AC0) ----------------------------------------------------
bool            sub_140223AC0(__int64 *a1, unsigned __int8 a2)
{
  bool result;

  result = 1;
  if ( (*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8) )
    return (unsigned int)unknown_libname_207(a2, *a1) != -1;
  return result;
}

//----- (0000000140223B00) ----------------------------------------------------
bool            sub_140223B00(__int64 *a1, unsigned __int16 a2)
{
  bool result;

  result = 1;
  if ( (*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8) )
    return (unsigned __int16)sub_140256B38(a2, *a1) != 0xFFFF;
  return result;
}

//----- (0000000140223B44) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_581(__int64 a1)
{
  unsigned __int16 *buffer_cursor;
  int iteration_count;
  void *record_pointer;
  _DWORD *running_total;
  int loaded_word;
  int **record_pointer_2;
  _DWORD *running_total_2;
  __int64 unused_local;
  int selection_flag;
  char scratch_buffer[12];
  __int64 unused_local_2;

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    buffer_cursor = *(unsigned __int16 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      record_pointer = (void *)*buffer_cursor;
      selection_flag = 0;
      ++buffer_cursor;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&selection_flag, (     struct DLGTEMPLATE *)scratch_buffer, (struct CWnd *)6, record_pointer)
        || !selection_flag )
      {
        break;
      }
      running_total = (_DWORD *)(a1 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL) )
        sub_1402248A8((int **)(a1 + 1128), scratch_buffer, selection_flag, running_total, (int **)(a1 + 16));
      else
        *running_total += selection_flag;
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223C46: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    loaded_word = *(_DWORD *)(a1 + 80);
    record_pointer_2 = (int **)(a1 + 1128);
    running_total_2 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*record_pointer_2 + 1) )
      sub_1402248A8(record_pointer_2, *(char **)(a1 + 72), loaded_word, running_total_2, (int **)(a1 + 16));
    else
      *running_total_2 += loaded_word;
  }
  return 1; /* 0x140223C46: mov al, 1 */
}

// 140223B82: conditional instruction was optimized away because eax.4>=1

//----- (0000000140223C68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_582(__int64 a1)
{
  unsigned __int16 *buffer_cursor;
  int iteration_count;
  void *record_pointer;
  _DWORD *running_total;
  int loaded_word;
  int **record_pointer_2;
  _DWORD *running_total_2;
  __int64 unused_local;
  int selection_flag;
  char scratch_buffer[12];
  __int64 unused_local_2;

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    buffer_cursor = *(unsigned __int16 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      record_pointer = (void *)*buffer_cursor;
      selection_flag = 0;
      ++buffer_cursor;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&selection_flag, (     struct DLGTEMPLATE *)scratch_buffer, (struct CWnd *)6, record_pointer)
        || !selection_flag )
      {
        break;
      }
      running_total = (_DWORD *)(a1 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL) )
        sub_1402248A8((int **)(a1 + 1128), scratch_buffer, selection_flag, running_total, (int **)(a1 + 16));
      else
        *running_total += selection_flag;
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223D6A: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    loaded_word = *(_DWORD *)(a1 + 80);
    record_pointer_2 = (int **)(a1 + 1128);
    running_total_2 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*record_pointer_2 + 1) )
      sub_1402248A8(record_pointer_2, *(char **)(a1 + 72), loaded_word, running_total_2, (int **)(a1 + 16));
    else
      *running_total_2 += loaded_word;
  }
  return 1; /* 0x140223D6A: mov al, 1 */
}

// 140223CA6: conditional instruction was optimized away because eax.4>=1

//----- (0000000140223D8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_583(__int64 a1)
{
  unsigned __int16 *buffer_cursor;
  int iteration_count;
  void *record_pointer;
  _DWORD *running_total;
  int loaded_word;
  int **record_pointer_2;
  _DWORD *running_total_2;
  __int64 unused_local;
  int selection_flag;
  char scratch_buffer[12];
  __int64 unused_local_2;

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    buffer_cursor = *(unsigned __int16 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      record_pointer = (void *)*buffer_cursor;
      selection_flag = 0;
      ++buffer_cursor;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&selection_flag, (     struct DLGTEMPLATE *)scratch_buffer, (struct CWnd *)6, record_pointer)
        || !selection_flag )
      {
        break;
      }
      running_total = (_DWORD *)(a1 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL) )
        sub_1402248A8((int **)(a1 + 1128), scratch_buffer, selection_flag, running_total, (int **)(a1 + 16));
      else
        *running_total += selection_flag;
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223E8E: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    loaded_word = *(_DWORD *)(a1 + 80);
    record_pointer_2 = (int **)(a1 + 1128);
    running_total_2 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*record_pointer_2 + 1) )
      sub_1402248A8(record_pointer_2, *(char **)(a1 + 72), loaded_word, running_total_2, (int **)(a1 + 16));
    else
      *running_total_2 += loaded_word;
  }
  return 1; /* 0x140223E8E: mov al, 1 */
}

// 140223DCA: conditional instruction was optimized away because eax.4>=1

//----- (0000000140223EB0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_584(__int64 a1)
{
  unsigned __int16 *buffer_cursor;
  int iteration_count;
  void *record_pointer;
  int loaded_word;
       __m128i *loaded_record_pointer;
  __int64 unused_local;
  __int64 unused_written_slot;
  int selection_flag;
  _BYTE scratch_buffer[12];
  __int64 unused_local_2;

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    buffer_cursor = *(unsigned __int16 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      record_pointer = (void *)*buffer_cursor;
      selection_flag = 0;
      ++buffer_cursor;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&selection_flag, (     struct DLGTEMPLATE *)scratch_buffer, (struct CWnd *)6, record_pointer)
        || !selection_flag )
      {
        break;
      }
      unused_written_slot = a1 + 16;
      unknown_libname_593(a1 + 1128, (     __m128i *)scratch_buffer, selection_flag, (_DWORD *)(a1 + 40));
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223F66: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    loaded_word = *(_DWORD *)(a1 + 80);
    loaded_record_pointer = *(     __m128i **)(a1 + 72);
    unused_written_slot = a1 + 16;
    unknown_libname_593(a1 + 1128, loaded_record_pointer, loaded_word, (_DWORD *)(a1 + 40));
  }
  return 1; /* 0x140223F66: mov al, 1 */
}

// 140223EE6: conditional instruction was optimized away because eax.4>=1

//----- (0000000140223F88) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_585(__int64 a1)
{
  unsigned __int16 *buffer_cursor;
  int iteration_count;
  void *record_pointer;
  int loaded_word;
       __m128i *loaded_record_pointer;
  __int64 unused_local;
  __int64 unused_written_slot;
  int selection_flag;
  _BYTE scratch_buffer[12];
  __int64 unused_local_2;

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    buffer_cursor = *(unsigned __int16 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      record_pointer = (void *)*buffer_cursor;
      selection_flag = 0;
      ++buffer_cursor;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&selection_flag, (     struct DLGTEMPLATE *)scratch_buffer, (struct CWnd *)6, record_pointer)
        || !selection_flag )
      {
        break;
      }
      unused_written_slot = a1 + 16;
      unknown_libname_593(a1 + 1128, (     __m128i *)scratch_buffer, selection_flag, (_DWORD *)(a1 + 40));
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x14022403E: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    loaded_word = *(_DWORD *)(a1 + 80);
    loaded_record_pointer = *(     __m128i **)(a1 + 72);
    unused_written_slot = a1 + 16;
    unknown_libname_593(a1 + 1128, loaded_record_pointer, loaded_word, (_DWORD *)(a1 + 40));
  }
  return 1; /* 0x14022403E: mov al, 1 */
}

// 140223FBE: conditional instruction was optimized away because eax.4>=1

//----- (0000000140224060) ----------------------------------------------------
unsigned char unknown_libname_586(__int64 processor)
{
  int count=*(_DWORD *)(processor+80);
  if (*(_BYTE *)(processor+84) && count>0)
  {
    const unsigned short *text=*(const unsigned short **)(processor+72);
    int index=0;
    do
    {
      int bytes=0;
      unsigned char converted[12];
      if ((unsigned int)CDialog__CreateIndirect((CDialog *)&bytes,
            (struct DLGTEMPLATE *)converted,(struct CWnd *)6,(void *)(uintptr_t)*text++) || !bytes)
      {
        *(_DWORD *)(processor+40)=UINT32_MAX;
        break;
      }
      /* The native caller supplies processor+16 as a fifth argument, but
         0x14022475C never reads it. Its four live arguments are complete. */
      unknown_libname_593(processor+1128,(__m128i *)converted,bytes,
                         (_DWORD *)(processor+40));
    } while (++index!=*(_DWORD *)(processor+80));
  }
  else
    unknown_libname_593(processor+1128,*(__m128i **)(processor+72),count,
                       (_DWORD *)(processor+40));
  /* Original MOV AL,1; compiler supplies its own valid stack protection. */
  return 1;
}

//----- (0000000140224138) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_587(__int64 a1)
{
  sr_anon_49 *loaded_record_pointer;
  int iteration_count;
  __int64 loaded_word;
  int mbtowc_l_result;
  __int64 saved_mbtowc_l_result;
  int loaded_word_2;
  int **record_pointer;
  _DWORD *running_total;
  unsigned __int16 selection_flag;

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 80);
    record_pointer = (int **)(a1 + 1128);
    running_total = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*record_pointer + 1) )
      sub_1402249A0(record_pointer, *(unsigned __int16 **)(a1 + 72), loaded_word_2, running_total, (int **)(a1 + 16));
    else
      *running_total += loaded_word_2;
  }
  else
  {
    loaded_record_pointer = *(sr_anon_49 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      selection_flag = 0;
      mbtowc_l_result = mbtowc_l((sr_anon_115 *)&selection_flag, loaded_record_pointer, (char *)*(int *)(*(_QWORD *)loaded_word + 8LL), (struct __crt_locale_pointers *)loaded_word);
      saved_mbtowc_l_result = mbtowc_l_result;
      if ( mbtowc_l_result <= 0 )
        break;
      if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
        && (unsigned __int16)sub_140256B38(selection_flag, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
      {
        *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
      }
      loaded_record_pointer = (sr_anon_49 *)((char *)loaded_record_pointer + saved_mbtowc_l_result);
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

//----- (0000000140224240) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_588(__int64 a1)
{
  sr_anon_49 *loaded_record_pointer;
  int iteration_count;
  __int64 loaded_word;
  int mbtowc_l_result;
  __int64 saved_mbtowc_l_result;
  int loaded_word_2;
  int **record_pointer;
  _DWORD *running_total;
  unsigned __int16 selection_flag;

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 80);
    record_pointer = (int **)(a1 + 1128);
    running_total = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*record_pointer + 1) )
      sub_1402249A0(record_pointer, *(unsigned __int16 **)(a1 + 72), loaded_word_2, running_total, (int **)(a1 + 16));
    else
      *running_total += loaded_word_2;
  }
  else
  {
    loaded_record_pointer = *(sr_anon_49 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      selection_flag = 0;
      mbtowc_l_result = mbtowc_l((sr_anon_115 *)&selection_flag, loaded_record_pointer, (char *)*(int *)(*(_QWORD *)loaded_word + 8LL), (struct __crt_locale_pointers *)loaded_word);
      saved_mbtowc_l_result = mbtowc_l_result;
      if ( mbtowc_l_result <= 0 )
        break;
      if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
        && (unsigned __int16)sub_140256B38(selection_flag, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
      {
        *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
      }
      loaded_record_pointer = (sr_anon_49 *)((char *)loaded_record_pointer + saved_mbtowc_l_result);
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

//----- (0000000140224348) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_589(__int64 a1)
{
  sr_anon_49 *loaded_record_pointer;
  int iteration_count;
  __int64 loaded_word;
  int mbtowc_l_result;
  __int64 saved_mbtowc_l_result;
  int loaded_word_2;
  int **record_pointer;
  _DWORD *running_total;
  unsigned __int16 selection_flag;

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 80);
    record_pointer = (int **)(a1 + 1128);
    running_total = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*record_pointer + 1) )
      sub_1402249A0(record_pointer, *(unsigned __int16 **)(a1 + 72), loaded_word_2, running_total, (int **)(a1 + 16));
    else
      *running_total += loaded_word_2;
  }
  else
  {
    loaded_record_pointer = *(sr_anon_49 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      selection_flag = 0;
      mbtowc_l_result = mbtowc_l((sr_anon_115 *)&selection_flag, loaded_record_pointer, (char *)*(int *)(*(_QWORD *)loaded_word + 8LL), (struct __crt_locale_pointers *)loaded_word);
      saved_mbtowc_l_result = mbtowc_l_result;
      if ( mbtowc_l_result <= 0 )
        break;
      if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
        && (unsigned __int16)sub_140256B38(selection_flag, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
      {
        *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
      }
      loaded_record_pointer = (sr_anon_49 *)((char *)loaded_record_pointer + saved_mbtowc_l_result);
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

//----- (0000000140224450) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_590(__int64 a1)
{
  sr_anon_49 *loaded_record_pointer;
  int iteration_count;
  __int64 loaded_word;
  int mbtowc_l_result;
  __int64 loaded_word_2;
  __int16 cached_selection_flag;
  __int16 selection_flag;

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    unknown_libname_594(a1 + 1128, *(     __m128i **)(a1 + 72), *(_DWORD *)(a1 + 80), (_DWORD *)(a1 + 40));
  }
  else
  {
    loaded_record_pointer = *(sr_anon_49 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      selection_flag = 0;
      mbtowc_l_result = mbtowc_l((sr_anon_115 *)&selection_flag, loaded_record_pointer, (char *)*(int *)(*(_QWORD *)loaded_word + 8LL), (struct __crt_locale_pointers *)loaded_word);
      if ( mbtowc_l_result <= 0 )
        break;
      loaded_word_2 = *(_QWORD *)(a1 + 1128);
      cached_selection_flag = selection_flag;
      if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
      {
        if ( *(_BYTE *)(loaded_word_2 + 24) )
          ++*(_DWORD *)(a1 + 40);
        else
          *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
        ++*(_QWORD *)(loaded_word_2 + 16);
        ***(_WORD ***)(a1 + 1128) = cached_selection_flag;
        **(_QWORD **)(a1 + 1128) += 2LL;
      }
      loaded_record_pointer = (sr_anon_49 *)((char *)loaded_record_pointer + mbtowc_l_result);
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

//----- (000000014022453C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_591(__int64 a1)
{
  sr_anon_49 *loaded_record_pointer;
  int iteration_count;
  __int64 loaded_word;
  int mbtowc_l_result;
  __int64 loaded_word_2;
  __int16 cached_selection_flag;
  __int16 selection_flag;

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    unknown_libname_594(a1 + 1128, *(     __m128i **)(a1 + 72), *(_DWORD *)(a1 + 80), (_DWORD *)(a1 + 40));
  }
  else
  {
    loaded_record_pointer = *(sr_anon_49 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      selection_flag = 0;
      mbtowc_l_result = mbtowc_l((sr_anon_115 *)&selection_flag, loaded_record_pointer, (char *)*(int *)(*(_QWORD *)loaded_word + 8LL), (struct __crt_locale_pointers *)loaded_word);
      if ( mbtowc_l_result <= 0 )
        break;
      loaded_word_2 = *(_QWORD *)(a1 + 1128);
      cached_selection_flag = selection_flag;
      if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
      {
        if ( *(_BYTE *)(loaded_word_2 + 24) )
          ++*(_DWORD *)(a1 + 40);
        else
          *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
        ++*(_QWORD *)(loaded_word_2 + 16);
        ***(_WORD ***)(a1 + 1128) = cached_selection_flag;
        **(_QWORD **)(a1 + 1128) += 2LL;
      }
      loaded_record_pointer = (sr_anon_49 *)((char *)loaded_record_pointer + mbtowc_l_result);
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

//----- (0000000140224628) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_592(__int64 a1)
{
  sr_anon_49 *loaded_record_pointer;
  int iteration_count;
  __int64 loaded_word;
  int mbtowc_l_result;
  __int64 loaded_word_2;
  __int16 cached_selection_flag;
  __int16 selection_flag;

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    unknown_libname_594(a1 + 1128, *(     __m128i **)(a1 + 72), *(_DWORD *)(a1 + 80), (_DWORD *)(a1 + 40));
  }
  else
  {
    loaded_record_pointer = *(sr_anon_49 **)(a1 + 72);
    iteration_count = 0;
    while ( 1 )
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      selection_flag = 0;
      mbtowc_l_result = mbtowc_l((sr_anon_115 *)&selection_flag, loaded_record_pointer, (char *)*(int *)(*(_QWORD *)loaded_word + 8LL), (struct __crt_locale_pointers *)loaded_word);
      if ( mbtowc_l_result <= 0 )
        break;
      loaded_word_2 = *(_QWORD *)(a1 + 1128);
      cached_selection_flag = selection_flag;
      if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
      {
        if ( *(_BYTE *)(loaded_word_2 + 24) )
          ++*(_DWORD *)(a1 + 40);
        else
          *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
        ++*(_QWORD *)(loaded_word_2 + 16);
        ***(_WORD ***)(a1 + 1128) = cached_selection_flag;
        **(_QWORD **)(a1 + 1128) += 2LL;
      }
      loaded_record_pointer = (sr_anon_49 *)((char *)loaded_record_pointer + mbtowc_l_result);
      if ( ++iteration_count == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

//----- (000000014022475C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_593(__int64 a1,      __m128i *a2, int a3, _DWORD *a4)
{
  __int64 input_value;
  _QWORD *loaded_word;
  __int64 table_value;
  unsigned __int64 integer_difference;
  unsigned __int64 byte_count;
  __m128i *destination_buffer;

  if ( a3 )
  {
    input_value = a3;
    loaded_word = *(_QWORD **)a1;
    table_value = loaded_word[1];
    if ( loaded_word[2] == table_value )
    {
      if ( *((_BYTE *)loaded_word + 24) )
        *a4 += a3;
      else
        *a4 = -1;
    }
    else
    {
      integer_difference = table_value - loaded_word[2];
      byte_count = a3;
      destination_buffer = (__m128i *)*loaded_word;
      if ( integer_difference < a3 )
        byte_count = integer_difference;
      crt_memcpy(destination_buffer, a2, byte_count);
      **(_QWORD **)a1 += byte_count;
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) += byte_count;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 24LL) )
      {
        *a4 += input_value;
      }
      else if ( byte_count == input_value )
      {
        *a4 += byte_count;
      }
      else
      {
        *a4 = -1;
      }
    }
  }
}

//----- (0000000140224800) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_594(__int64 a1,      __m128i *a2, int a3, _DWORD *a4)
{
  __int64 input_value;
  _QWORD *loaded_word;
  __int64 table_value;
  unsigned __int64 integer_difference;
  unsigned __int64 input_value_2;
  __m128i *destination_buffer;

  if ( a3 )
  {
    input_value = a3;
    loaded_word = *(_QWORD **)a1;
    table_value = loaded_word[1];
    if ( loaded_word[2] == table_value )
    {
      if ( *((_BYTE *)loaded_word + 24) )
        *a4 += a3;
      else
        *a4 = -1;
    }
    else
    {
      integer_difference = table_value - loaded_word[2];
      input_value_2 = a3;
      destination_buffer = (__m128i *)*loaded_word;
      if ( integer_difference < a3 )
        input_value_2 = integer_difference;
      crt_memcpy(destination_buffer, a2, 2 * input_value_2);
      **(_QWORD **)a1 += 2 * input_value_2;
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) += input_value_2;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 24LL) )
      {
        *a4 += input_value;
      }
      else if ( input_value_2 == input_value )
      {
        *a4 += input_value_2;
      }
      else
      {
        *a4 = -1;
      }
    }
  }
}

//----- (00000001402248A8) ----------------------------------------------------
int *           sub_1402248A8(int **a1, char *a2, int a3, _DWORD *a4, int **a5)
{
  int *result;
  __int64 input_value;
  int *loaded_word;
  int loaded_word_2;
  char *state_address;
  _UNKNOWN *retaddr;

  result = (int *)&retaddr;
  input_value = a3;
  loaded_word = *a5;
  if ( !*a5 )
  {
    result = errno_sr();
    loaded_word = result;
    *a5 = result;
  }
  loaded_word_2 = *loaded_word;
  *loaded_word = 0;
  state_address = &a2[input_value];
  while ( a2 != state_address )
  {
    if ( ((*a1)[5] & 0x1000) != 0 )
    {
      result = *a1;
      if ( !*((_QWORD *)*a1 + 1) )
        goto LABEL_13;
    }
    result = (int *)unknown_libname_207(*a2, (__int64)*a1);
    if ( (_DWORD)result != -1 )
      goto LABEL_13;
    result = *a5;
    if ( !*a5 )
    {
      result = errno_sr();
      *a5 = result;
    }
    if ( *result != 42 )
    {
      *a4 = -1;
      break;
    }
    if ( (((*a1)[5] & 0x1000) == 0 || (result = *a1, *((_QWORD *)*a1 + 1)))
      && (result = (int *)unknown_libname_207(0x3Fu, (__int64)*a1), (_DWORD)result == -1) )
    {
      *a4 = -1;
    }
    else
    {
LABEL_13:
      ++*a4;
    }
    ++a2;
  }
  if ( !*loaded_word )
  {
    if ( loaded_word_2 )
      *loaded_word = loaded_word_2;
  }
  return result;
}

//----- (00000001402249A0) ----------------------------------------------------
int *           sub_1402249A0(int **a1, unsigned __int16 *a2, int a3, _DWORD *a4, int **a5)
{
  int *result;
  __int64 input_value;
  int *loaded_word;
  int loaded_word_2;
  unsigned __int16 *state_address;
  _UNKNOWN *retaddr;

  result = (int *)&retaddr;
  input_value = a3;
  loaded_word = *a5;
  if ( !*a5 )
  {
    result = errno_sr();
    loaded_word = result;
    *a5 = result;
  }
  loaded_word_2 = *loaded_word;
  *loaded_word = 0;
  state_address = &a2[input_value];
  while ( a2 != state_address )
  {
    if ( ((*a1)[5] & 0x1000) != 0 )
    {
      result = *a1;
      if ( !*((_QWORD *)*a1 + 1) )
        goto LABEL_13;
    }
    result = (int *)sub_140256B38(*a2, (__int64)*a1);
    if ( (_WORD)result != 0xFFFF )
      goto LABEL_13;
    result = *a5;
    if ( !*a5 )
    {
      result = errno_sr();
      *a5 = result;
    }
    if ( *result != 42 )
    {
      *a4 = -1;
      break;
    }
    if ( (((*a1)[5] & 0x1000) == 0 || (result = *a1, *((_QWORD *)*a1 + 1)))
      && (result = (int *)sub_140256B38(0x3Fu, (__int64)*a1), (_WORD)result == 0xFFFF) )
    {
      *a4 = -1;
    }
    else
    {
LABEL_13:
      ++*a4;
    }
    ++a2;
  }
  if ( !*loaded_word )
  {
    if ( loaded_word_2 )
      *loaded_word = loaded_word_2;
  }
  return result;
}

//----- (0000000140224AEC) ----------------------------------------------------
__int64            sub_140224AEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  __int64 *scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_5 = a4;
  input_value_7 = a3;
  input_value_4 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = &input_value_4;
    input_value_3 = a2;
    scratch_buffer[1] = &input_value_5;
    scratch_buffer[2] = &input_value_6;
    scratch_buffer[3] = &input_value_7;
    scratch_buffer[4] = &input_value;
    return sub_14020D808((__int64)&a5, &input_value_3, scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140224B78) ----------------------------------------------------
__int64            sub_140224B78(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  __int64 *scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_5 = a4;
  input_value_7 = a3;
  input_value_4 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = &input_value_4;
    input_value_3 = a2;
    scratch_buffer[1] = &input_value_5;
    scratch_buffer[2] = &input_value_6;
    scratch_buffer[3] = &input_value_7;
    scratch_buffer[4] = &input_value;
    return sub_14020D7C8((__int64)&a5, &input_value_3, scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140224C04) ----------------------------------------------------
__int64            sub_140224C04(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  __int64 *scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_5 = a4;
  input_value_7 = a3;
  input_value_4 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = &input_value_4;
    input_value_3 = a2;
    scratch_buffer[1] = &input_value_5;
    scratch_buffer[2] = &input_value_6;
    scratch_buffer[3] = &input_value_7;
    scratch_buffer[4] = &input_value;
    return sub_14020D788((__int64)&a5, &input_value_3, scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140224C90) ----------------------------------------------------
__int64            sub_140224C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  __int64 *scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_5 = a4;
  input_value_7 = a3;
  input_value_4 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = &input_value_4;
    input_value_3 = a2;
    scratch_buffer[1] = &input_value_5;
    scratch_buffer[2] = &input_value_6;
    scratch_buffer[3] = &input_value_7;
    scratch_buffer[4] = &input_value;
    return sub_14020D708((__int64)&a5, &input_value_3, scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140224D1C) ----------------------------------------------------
__int64            sub_140224D1C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  __int64 *scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_5 = a4;
  input_value_7 = a3;
  input_value_4 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = &input_value_4;
    input_value_3 = a2;
    scratch_buffer[1] = &input_value_5;
    scratch_buffer[2] = &input_value_6;
    scratch_buffer[3] = &input_value_7;
    scratch_buffer[4] = &input_value;
    return sub_14020D748((__int64)&a5, &input_value_3, scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140224DA8) ----------------------------------------------------
__int64            sub_140224DA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  __int64 *scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_5 = a4;
  input_value_7 = a3;
  input_value_4 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = &input_value_4;
    input_value_3 = a2;
    scratch_buffer[1] = &input_value_5;
    scratch_buffer[2] = &input_value_6;
    scratch_buffer[3] = &input_value_7;
    scratch_buffer[4] = &input_value;
    return sub_14020D6C8((__int64)&a5, &input_value_3, scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140224E34) ----------------------------------------------------
__int64            sub_140224E34(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct __crt_locale_pointers *a6,
        __int64 a7)
{
  int *errno_sr_result;
  unsigned int unused_written_slot;
  int selection_flag;
  int loaded_word;
  int call_result;

  if ( !a5 )
  {
    errno_sr_result = errno_sr();
LABEL_3:
    *errno_sr_result = 22;
    crt_invalid_parameter_noinfo();
    return (unsigned int)-1;
  }
  if ( a4 )
  {
    if ( !a2 )
      goto LABEL_12;
  }
  else if ( !a2 )
  {
    if ( !a3 )
      return 0;
    goto LABEL_12;
  }
  if ( a3 )
  {
    selection_flag = 1;
    goto LABEL_13;
  }
LABEL_12:
  selection_flag = 0;
LABEL_13:
  errno_sr_result = errno_sr();
  if ( !selection_flag )
    goto LABEL_3;
  loaded_word = *errno_sr_result;
  unused_written_slot = -1;
  if ( a3 > a4 )
  {
    call_result = sub_14020DE94(a1, a2, a4 + 1, a5, a6, a7);
    if ( call_result == -2 )
    {
      if ( *errno_sr() == 34 )
        *errno_sr() = loaded_word;
      return (unsigned int)-1;
    }
    goto LABEL_22;
  }
  call_result = sub_14020DE94(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( call_result != -2 )
  {
LABEL_22:
    if ( call_result >= 0 )
      return (unsigned int)call_result;
    goto LABEL_23;
  }
  if ( a4 != -1 )
  {
LABEL_23:
    *a2 = 0;
    if ( call_result == -2 )
    {
      *errno_sr() = 34;
      crt_invalid_parameter_noinfo();
    }
    return unused_written_slot;
  }
  if ( *errno_sr() == 34 )
    *errno_sr() = loaded_word;
  return unused_written_slot;
}

//----- (0000000140224F68) ----------------------------------------------------
__int64            sub_140224F68(
        __int64 a1,
        _WORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct __crt_locale_pointers *a6,
        __int64 a7)
{
  int *errno_sr_result;
  unsigned int unused_written_slot;
  int selection_flag;
  int loaded_word;
  int call_result;

  if ( !a5 )
  {
    errno_sr_result = errno_sr();
LABEL_3:
    *errno_sr_result = 22;
    crt_invalid_parameter_noinfo();
    return (unsigned int)-1;
  }
  if ( !a4 )
  {
    if ( !a2 )
    {
      if ( !a3 )
        return 0;
      goto LABEL_11;
    }
LABEL_10:
    selection_flag = 1;
    if ( a3 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( a2 )
    goto LABEL_10;
LABEL_11:
  selection_flag = 0;
LABEL_12:
  errno_sr_result = errno_sr();
  if ( !selection_flag )
    goto LABEL_3;
  loaded_word = *errno_sr_result;
  unused_written_slot = -1;
  if ( a3 > a4 )
  {
    call_result = sub_14020E060(a1, a2, a4 + 1, a5, a6, a7);
    if ( call_result == -2 )
    {
      if ( *errno_sr() == 34 )
        *errno_sr() = loaded_word;
      return (unsigned int)-1;
    }
    goto LABEL_21;
  }
  call_result = sub_14020E060(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( call_result != -2 )
  {
LABEL_21:
    if ( call_result >= 0 )
      return (unsigned int)call_result;
    goto LABEL_22;
  }
  if ( a4 != -1 )
  {
LABEL_22:
    *a2 = 0;
    if ( call_result == -2 )
    {
      *errno_sr() = 34;
      crt_invalid_parameter_noinfo();
    }
    return unused_written_slot;
  }
  if ( *errno_sr() == 34 )
    *errno_sr() = loaded_word;
  return unused_written_slot;
}

//----- (00000001402250AC) ----------------------------------------------------
// attributes: thunk
__int64            sub_1402250AC(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  return sub_14020E60C(a1, a2, a3, a4, a5, a6);
}

//----- (00000001402250BC) ----------------------------------------------------
__int64            sub_1402250BC(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 result;

  if ( !a4 || !a2 || !a3 )
  {
    *errno_sr() = 22;
    goto LABEL_9;
  }
  result = sub_14020DE94(a1, a2, a3, a4, a5, a6);
  if ( (int)result < 0 )
    *a2 = 0;
  if ( (_DWORD)result == -2 )
  {
    *errno_sr() = 34;
LABEL_9:
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  return result;
}

//----- (0000000140225120) ----------------------------------------------------
// attributes: thunk
__int64            sub_140225120(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  return sub_14020E7D8(a1, a2, a3, a4, a5, a6);
}

//----- (0000000140225130) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_595(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 result;

  if ( !a4 || !a2 || !a3 )
  {
    *errno_sr() = 22;
    goto LABEL_9;
  }
  result = sub_14020E060(a1, a2, a3, a4, a5, a6);
  if ( (int)result < 0 )
    *a2 = 0;
  if ( (_DWORD)result == -2 )
  {
    *errno_sr() = 34;
LABEL_9:
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  return result;
}

//----- (00000001402251E4) ----------------------------------------------------
__int64            sub_1402251E4(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = _lambda_f3caf1ecae5fe01a9a1a6239afa44510___operator_call(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (0000000140225224) ----------------------------------------------------
__int64            sub_140225224(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = unknown_libname_647(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (0000000140225264) ----------------------------------------------------
__int64            sub_140225264(__int64 a1, __int64 a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140225224((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014022528C) ----------------------------------------------------
__int64            sub_14022528C(__int64 a1, __int64 a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_1402251E4((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (00000001402253B4) ----------------------------------------------------
__int64 sub_1402253B4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  _QWORD callee_output_word[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    callee_output_word[0] = (uint64)(uintptr_t)(&input_value_6);
    input_value_2 = a2;
    callee_output_word[1] = (uint64)(uintptr_t)(&input_value_4);
    callee_output_word[2] = (uint64)(uintptr_t)(&input_value_3);
    callee_output_word[3] = (uint64)(uintptr_t)(&input_value_5);
    memcpy(&callee_output_word[4], &va, sizeof(va));
    return sub_1402251E4((__int64)scratch_buffer, &input_value_2, (__int64)callee_output_word, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014022543C) ----------------------------------------------------
__int64 sub_14022543C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  _QWORD callee_output_word[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    callee_output_word[0] = (uint64)(uintptr_t)(&input_value_6);
    input_value_2 = a2;
    callee_output_word[1] = (uint64)(uintptr_t)(&input_value_4);
    callee_output_word[2] = (uint64)(uintptr_t)(&input_value_3);
    callee_output_word[3] = (uint64)(uintptr_t)(&input_value_5);
    memcpy(&callee_output_word[4], &va, sizeof(va));
    return sub_140225224((__int64)scratch_buffer, &input_value_2, (__int64)callee_output_word, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (00000001402254C4) ----------------------------------------------------
__int64            sub_1402254C4(
        __int64 a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  char *strnlen_sr_result;
  __int64 unused_local;
  __int128 packed_vector;
  __m128i *unused_written_slot;
  __int64 callee_output_word;
  _BYTE scratch_buffer[32];
  __int64 input_value;
  __int128 unused_written_slot_2;
  __m128i *unused_written_slot_3;
  __int64 unused_written_slot_4;
  __int64 unused_written_slot_5;
  int unused_written_slot_6;
  int unused_written_slot_7;
  __int16 unused_written_slot_8;
  char unused_written_slot_9;
  __int64 unused_written_slot_10;
  int unused_written_slot_11;
  char unused_written_slot_12;
  int unused_written_slot_13;
  _WORD scratch_buffer_2[18];
  _BYTE *unused_written_slot_14;
  __int64 unused_written_slot_15;
  __int64 unused_written_slot_16;
  __int64 unused_local_2;

  if ( a2 && a4 )
  {
    strnlen_sr_result = strnlen_sr(a2, a3);
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
    unused_written_slot_6 = 0;
    *((_QWORD *)&packed_vector + 1) = (uint64)(uintptr_t)(&strnlen_sr_result[(_QWORD)a2]);
    *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(a2);
    unused_written_slot = a2;
    unused_written_slot_2 = packed_vector;
    input_value = a1;
    unused_written_slot_3 = a2;
    unused_written_slot_4 = a1;
    unused_written_slot_5 = a4;
    crt_memset((void *)(uintptr_t)(scratch_buffer_2), 0, 0x20u);
    unused_written_slot_7 = 0;
    unused_written_slot_8 = 0;
    unused_written_slot_10 = 0;
    unused_written_slot_11 = 0;
    unused_written_slot_13 = 0;
    unused_written_slot_16 = 0;
    unused_written_slot_14 = scratch_buffer;
    unused_written_slot_15 = a6;
    unused_written_slot_9 = 0;
    unused_written_slot_12 = 0;
    sub_1402338B8((__int64)&input_value);
    if ( scratch_buffer[16] )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

//----- (00000001402255EC) ----------------------------------------------------
__int64            sub_1402255EC(
        __int64 a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 call_result;
  unsigned int unused_written_slot;
  __int128 packed_vector;
  __int64 input_value;
  __int128 unused_written_slot_2;
  __m128i *unused_written_slot_3;
  __int64 unused_written_slot_4;
  __int64 unused_written_slot_5;
  __int64 unused_written_slot_6;
  int unused_written_slot_7;
  char unused_written_slot_8;
  __int64 unused_written_slot_9;
  int unused_written_slot_10;
  char unused_written_slot_11;
  int unused_written_slot_12;
  void *Block;
  _BYTE *unused_written_slot_13;
  __int64 unused_written_slot_14;
  __int64 unused_written_slot_15;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];

  if ( a2 && a4 )
  {
    call_result = sub_140254F48(a2, a3);
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
    *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(a2);
    *((_QWORD *)&packed_vector + 1) = (uint64)(uintptr_t)((char *)a2 + 2 * call_result);
    unused_written_slot_13 = scratch_buffer;
    unused_written_slot_14 = a6;
    input_value = a1;
    unused_written_slot_2 = packed_vector;
    unused_written_slot_4 = a1;
    unused_written_slot_3 = a2;
    unused_written_slot_5 = a4;
    unused_written_slot_6 = 0;
    Block = nullptr;
    unused_written_slot_7 = 0;
    unused_written_slot_8 = 0;
    unused_written_slot_9 = 0;
    unused_written_slot_10 = 0;
    unused_written_slot_11 = 0;
    unused_written_slot_12 = 0;
    unused_written_slot_15 = 0;
    unused_written_slot = sub_140233A68((__int64)&input_value);
    free_base(Block);
    Block = nullptr;
    if ( scratch_buffer[16] )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140225704) ----------------------------------------------------
__int64            sub_140225704(_DWORD *a1, __int64 a2)
{
  __int64 input_value;
  char unused_written_slot;

  input_value = a2;
  unused_written_slot = 0;
  return sub_14023023C(a1, (__crt_strtox__floating_point_value *)&input_value);
}

//----- (0000000140225724) ----------------------------------------------------
__int64            sub_140225724(_DWORD *a1, __int64 a2)
{
  __int64 input_value;
  char unused_written_slot;

  input_value = a2;
  unused_written_slot = 1;
  return sub_14023023C(a1, (__crt_strtox__floating_point_value *)&input_value);
}

//----- (0000000140225744) ----------------------------------------------------
__int64            __crt_strtox__convert_hexadecimal_string_to_floating_type__float(__int64 a1, __int64 a2)
{
  __int64 input_value;
  char unused_written_slot;

  input_value = a2;
  unused_written_slot = 0;
  return sub_140231FC0(a1, (__int64)&input_value);
}

//----- (0000000140225764) ----------------------------------------------------
__int64            __crt_strtox__convert_hexadecimal_string_to_floating_type__double(__int64 a1, __int64 a2)
{
  __int64 input_value;
  char unused_written_slot;

  input_value = a2;
  unused_written_slot = 1;
  return sub_140231FC0(a1, (__int64)&input_value);
}

//----- (00000001402257B4) ----------------------------------------------------
bool            sub_1402257B4(char a1, unsigned __int64 a2)
{
  unsigned __int64 comparison_result;
  bool result;

  result = true;
  if ( (a1 & 4) == 0 )
  {
    if ( (a1 & 1) == 0 )
      return false;
    comparison_result = (a1 & 2) != 0 ? 0x8000000000000000uLL : 0x7FFFFFFFFFFFFFFFLL;
    if ( a2 <= comparison_result )
      return false;
  }
  return result;
}

//----- (000000014022587C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_600(struct __crt_locale_pointers *a1, __int64 a2, unsigned int *a3)
{
  _BYTE *loaded_record_pointer;
  int call_result;
  _BYTE *loaded_record_pointer_2;
  __int64 unused_local;
  int scratch_buffer[196];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_140225DBC(a1, a2, scratch_buffer);
    __int64 sr_result = sub_14022AD78(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    loaded_record_pointer_2 = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer_2 && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    loaded_record_pointer = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (0000000140225924) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_601(struct __crt_locale_pointers *a1, __int64 a2, unsigned __int64 *a3)
{
  _BYTE *loaded_record_pointer;
  int call_result;
  _BYTE *loaded_record_pointer_2;
  __int64 unused_local;
  int scratch_buffer[196];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_140225DBC(a1, a2, scratch_buffer);
    __int64 sr_result = sub_14022AEE8(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    loaded_record_pointer_2 = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer_2 && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    loaded_record_pointer = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (00000001402259CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_602(__int64 a1, __int64 a2, unsigned int *a3)
{
  _BYTE *loaded_record_pointer;
  int call_result;
  _BYTE *loaded_record_pointer_2;
  __int64 unused_local;
  _BYTE scratch_buffer[784];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_140226624(a1, (FILE ***)a2, (__int64)scratch_buffer);
    __int64 sr_result = sub_14022AD78(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    loaded_record_pointer_2 = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer_2 && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    loaded_record_pointer = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (0000000140225A74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_603(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _BYTE *loaded_record_pointer;
  int call_result;
  _BYTE *loaded_record_pointer_2;
  __int64 unused_local;
  _BYTE scratch_buffer[784];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_140226624(a1, (FILE ***)a2, (__int64)scratch_buffer);
    __int64 sr_result = sub_14022AEE8(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    loaded_record_pointer_2 = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer_2 && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    loaded_record_pointer = *(_BYTE **)(a2 + 24);
    if ( loaded_record_pointer && !*(_QWORD *)(a2 + 16) )
      *loaded_record_pointer = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (0000000140225B1C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_604(struct __crt_locale_pointers *a1, _QWORD *a2, unsigned int *a3)
{
  _BYTE *table_value;
  int call_result;
  _BYTE *table_value_2;
  __int64 unused_local;
  _BYTE scratch_buffer[784];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_140227894(a1, a2, (__int64)scratch_buffer);
    __int64 sr_result = sub_14022AD78(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    table_value_2 = (_BYTE *)a2[3];
    if ( table_value_2 && !a2[2] )
      *table_value_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    table_value = (_BYTE *)a2[3];
    if ( table_value && !a2[2] )
      *table_value = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (0000000140225BC4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_605(struct __crt_locale_pointers *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _BYTE *table_value;
  int call_result;
  _BYTE *table_value_2;
  __int64 unused_local;
  _BYTE scratch_buffer[784];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_140227894(a1, a2, (__int64)scratch_buffer);
    __int64 sr_result = sub_14022AEE8(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    table_value_2 = (_BYTE *)a2[3];
    if ( table_value_2 && !a2[2] )
      *table_value_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    table_value = (_BYTE *)a2[3];
    if ( table_value && !a2[2] )
      *table_value = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (0000000140225C6C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_606(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  _BYTE *table_value;
  int call_result;
  _BYTE *table_value_2;
  __int64 unused_local;
  _BYTE scratch_buffer[784];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_1402280D0(a1, a2, (__int64)scratch_buffer);
    __int64 sr_result = sub_14022AD78(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    table_value_2 = (_BYTE *)a2[3];
    if ( table_value_2 && !a2[2] )
      *table_value_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    table_value = (_BYTE *)a2[3];
    if ( table_value && !a2[2] )
      *table_value = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (0000000140225D14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_607(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _BYTE *table_value;
  int call_result;
  _BYTE *table_value_2;
  __int64 unused_local;
  _BYTE scratch_buffer[784];
  __int64 unused_local_2;

  if ( a3 && a1 )
  {
    call_result = sub_1402280D0(a1, a2, (__int64)scratch_buffer);
    __int64 sr_result = sub_14022AEE8(call_result, (__int64)scratch_buffer, a3); /* the result stays in rax */
    table_value_2 = (_BYTE *)a2[3];
    if ( table_value_2 && !a2[2] )
      *table_value_2 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    table_value = (_BYTE *)a2[3];
    if ( table_value && !a2[2] )
      *table_value = 0;
  }
  return 1; /* mov eax, 1 */
}

//----- (0000000140225DBC) ----------------------------------------------------
__int64            sub_140225DBC(struct __crt_locale_pointers *a1, __int64 a2, int *a3)
{
  FILE **loaded_word;
  bool comparison_result;
  unsigned __int64 loaded_word_2;
  int getc_nolock_result;
  unsigned __int64 loaded_word_3;
  FILE **loaded_word_4;
  int getc_nolock_result_2;
  int *record_pointer;
  unsigned __int64 loaded_word_5;
  FILE **loaded_word_6;
  unsigned __int64 loaded_word_7;
  FILE **loaded_word_8;
  int getc_nolock_result_3;
  char saved_getc_nolock_result;
  unsigned __int64 loaded_word_9;
  FILE **loaded_word_10;
  int getc_nolock_result_4;
  unsigned __int64 loaded_word_11;
  FILE **loaded_word_12;
  int *record_pointer_2;
  char selection_flag;
  unsigned __int64 loaded_word_13;
  FILE **loaded_word_14;
  int getc_nolock_result_5;
  int *saved_comparison_result;
  int iteration_count;
  unsigned int comparison_result_2;
  unsigned int comparison_result_3;
  unsigned __int64 loaded_word_15;
  FILE **loaded_word_16;
  int getc_nolock_result_6;
  unsigned __int64 loaded_word_17;
  FILE **loaded_word_18;
  int getc_nolock_result_7;
  int *saved_comparison_result_2;
  char saved_getc_nolock_result_2;
  unsigned __int64 loaded_word_19;
  FILE **loaded_word_20;
  int getc_nolock_result_8;
  unsigned int comparison_result_4;
  unsigned __int64 loaded_word_21;
  FILE **loaded_word_22;
  int getc_nolock_result_9;
  unsigned __int64 loaded_word_23;
  unsigned __int64 loaded_word_24;
  int saved_getc_nolock_result_3;
  FILE **loaded_word_25;
  unsigned __int64 loaded_word_26;
  unsigned __int64 loaded_word_27;
  int saved_getc_nolock_result_4;
  FILE **loaded_word_28;
  FILE **loaded_word_29;
  int getc_nolock_result_10;
  char xor_value;
  unsigned __int8 return_value;
  int scaled_index;
  unsigned __int64 loaded_word_30;
  FILE **loaded_word_31;
  int getc_nolock_result_11;
  char saved_getc_nolock_result_5;
  char saved_getc_nolock_result_6;
  unsigned __int64 loaded_word_32;
  FILE **loaded_word_33;
  int getc_nolock_result_12;
  char selection_flag_2;
  unsigned __int64 loaded_word_34;
  FILE **loaded_word_35;
  int getc_nolock_result_13;
  unsigned int comparison_result_5;
  unsigned __int64 loaded_word_36;
  FILE **loaded_word_37;
  int getc_nolock_result_14;
  unsigned int comparison_result_6;
  unsigned __int64 loaded_word_38;
  FILE **loaded_word_39;
  int getc_nolock_result_15;
  int integer_difference;
  unsigned __int64 loaded_word_40;
  int cached_getc_nolock_result;
  FILE **loaded_word_41;
  unsigned __int64 integer_sum;
  FILE **loaded_word_42;
  int getc_nolock_result_16;
  unsigned __int64 loaded_word_43;
  FILE **loaded_word_44;
  int *record_pointer_3;
  int *record_pointer_4;
  int *record_pointer_5;
  int *record_pointer_6;
  int comparison_result_7;
  int remaining_count;
  int *record_pointer_7;
  int *record_pointer_8;
  unsigned __int64 saved_loaded_word;
  char saved_getc_nolock_result_7;
  int *saved_comparison_result_3;
  char selection_flag_3;

  saved_comparison_result_3 = a3;
  loaded_word = *(FILE ***)a2;
  if ( !*(_QWORD *)a2 || !*(_QWORD *)(a2 + 24) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 7;
  }
  comparison_result = *(_QWORD *)(a2 + 8) == 0;
  loaded_word_2 = *(_QWORD *)(a2 + 16);
  saved_loaded_word = loaded_word_2;
  *(_QWORD *)(a2 + 16) = loaded_word_2 + 1;
  if ( !comparison_result && loaded_word_2 + 1 > *(_QWORD *)(a2 + 8) || (getc_nolock_result = getc_nolock(*loaded_word), getc_nolock_result == -1) )
    LOBYTE(getc_nolock_result) = 0;
  else
    loaded_word[1] = (FILE *)((char *)loaded_word[1] + 1);
  while ( 1 )
  {
    saved_getc_nolock_result_7 = getc_nolock_result;
    if ( !(unsigned int)crt_isctype_l((unsigned __int8)getc_nolock_result, 8, a1) )
      break;
    loaded_word_3 = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_3;
    if ( !comparison_result && loaded_word_3 > *(_QWORD *)(a2 + 8) || (loaded_word_4 = *(FILE ***)a2, getc_nolock_result = getc_nolock(**(FILE ***)a2), getc_nolock_result == -1) )
      LOBYTE(getc_nolock_result) = 0;
    else
      loaded_word_4[1] = (FILE *)((char *)loaded_word_4[1] + 1);
  }
  LOBYTE(getc_nolock_result_2) = saved_getc_nolock_result_7;
  record_pointer = a3 + 194;
  *((_BYTE *)a3 + 776) = saved_getc_nolock_result_7 == 45;
  if ( (((_BYTE)getc_nolock_result_2 - 43) & 0xFD) == 0 )
  {
    loaded_word_5 = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_5;
    if ( !comparison_result && loaded_word_5 > *(_QWORD *)(a2 + 8) || (loaded_word_6 = *(FILE ***)a2, getc_nolock_result_2 = getc_nolock(**(FILE ***)a2), getc_nolock_result_2 == -1) )
      LOBYTE(getc_nolock_result_2) = 0;
    else
      loaded_word_6[1] = (FILE *)((char *)loaded_word_6[1] + 1);
    saved_getc_nolock_result_7 = getc_nolock_result_2;
  }
  if ( (((_BYTE)getc_nolock_result_2 - 73) & 0xDF) == 0 )
    return sub_1402292F0(&saved_getc_nolock_result_7, a2, loaded_word_2);
  if ( (((_BYTE)getc_nolock_result_2 - 78) & 0xDF) == 0 )
    return sub_140229CC0(&saved_getc_nolock_result_7, a2, loaded_word_2);
  selection_flag_3 = 0;
  if ( (_BYTE)getc_nolock_result_2 != 48 )
    goto LABEL_44;
  comparison_result = *(_QWORD *)(a2 + 8) == 0;
  loaded_word_7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = loaded_word_7 + 1;
  if ( !comparison_result && loaded_word_7 + 1 > *(_QWORD *)(a2 + 8) )
    goto LABEL_38;
  loaded_word_8 = *(FILE ***)a2;
  getc_nolock_result_3 = getc_nolock(**(FILE ***)a2);
  saved_getc_nolock_result = getc_nolock_result_3;
  if ( getc_nolock_result_3 == -1 )
  {
    LOBYTE(getc_nolock_result_2) = saved_getc_nolock_result_7;
LABEL_38:
    saved_getc_nolock_result = 0;
LABEL_39:
    loaded_word_11 = *(_QWORD *)(a2 + 16) - 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_11;
    if ( (comparison_result || loaded_word_11 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(saved_getc_nolock_result + 1) > 1u )
    {
      loaded_word_12 = *(FILE ***)a2;
      if ( saved_getc_nolock_result != -1 )
      {
        loaded_word_12[1] = (FILE *)((char *)loaded_word_12[1] - 1);
        sub_14020CE90(saved_getc_nolock_result, (__int64)*loaded_word_12);
        LOBYTE(getc_nolock_result_2) = saved_getc_nolock_result_7;
      }
    }
    goto LABEL_44;
  }
  loaded_word_8[1] = (FILE *)((char *)loaded_word_8[1] + 1);
  if ( (((_BYTE)getc_nolock_result_3 - 88) & 0xDF) != 0 )
  {
    LOBYTE(getc_nolock_result_2) = saved_getc_nolock_result_7;
    goto LABEL_39;
  }
  loaded_word_9 = *(_QWORD *)(a2 + 16) + 1LL;
  selection_flag_3 = 1;
  comparison_result = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = loaded_word_9;
  if ( !comparison_result && loaded_word_9 > *(_QWORD *)(a2 + 8) || (loaded_word_10 = *(FILE ***)a2, getc_nolock_result_4 = getc_nolock(**(FILE ***)a2), getc_nolock_result_4 == -1) )
    LOBYTE(getc_nolock_result_4) = 0;
  else
    loaded_word_10[1] = (FILE *)((char *)loaded_word_10[1] + 1);
  LOBYTE(getc_nolock_result_2) = getc_nolock_result_4;
  saved_getc_nolock_result_7 = getc_nolock_result_4;
  saved_loaded_word = loaded_word_7;
LABEL_44:
  record_pointer_2 = a3 + 2;
  selection_flag = 0;
  record_pointer_7 = record_pointer_2;
  if ( (_BYTE)getc_nolock_result_2 == 48 )
  {
    selection_flag = 1;
    while ( 1 )
    {
      loaded_word_13 = *(_QWORD *)(a2 + 16) + 1LL;
      comparison_result = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = loaded_word_13;
      if ( !comparison_result && loaded_word_13 > *(_QWORD *)(a2 + 8) )
        break;
      loaded_word_14 = *(FILE ***)a2;
      getc_nolock_result_5 = getc_nolock(**(FILE ***)a2);
      if ( getc_nolock_result_5 == -1 )
        break;
      loaded_word_14[1] = (FILE *)((char *)loaded_word_14[1] + 1);
      LOBYTE(getc_nolock_result_2) = getc_nolock_result_5;
      saved_getc_nolock_result_7 = getc_nolock_result_5;
      if ( (_BYTE)getc_nolock_result_5 != 48 )
        goto LABEL_52;
    }
    LOBYTE(getc_nolock_result_2) = 0;
    saved_getc_nolock_result_7 = 0;
  }
LABEL_52:
  saved_comparison_result = record_pointer_7;
  iteration_count = 0;
  comparison_result_2 = selection_flag_3 != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( (unsigned __int8)(getc_nolock_result_2 - 48) > 9u )
    {
      if ( (unsigned __int8)(getc_nolock_result_2 - 97) > 0x19u )
        comparison_result_3 = (unsigned __int8)(getc_nolock_result_2 - 65) > 0x19u ? -1 : (char)getc_nolock_result_2 - 55;
      else
        comparison_result_3 = (char)getc_nolock_result_2 - 87;
    }
    else
    {
      comparison_result_3 = (char)getc_nolock_result_2 - 48;
    }
    if ( comparison_result_3 > comparison_result_2 )
      break;
    selection_flag = 1;
    if ( saved_comparison_result != record_pointer )
    {
      *(_BYTE *)saved_comparison_result = comparison_result_3;
      saved_comparison_result = (int *)((char *)saved_comparison_result + 1);
    }
    ++iteration_count;
    loaded_word_15 = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_15;
    if ( !comparison_result && loaded_word_15 > *(_QWORD *)(a2 + 8) || (loaded_word_16 = *(FILE ***)a2, getc_nolock_result_6 = getc_nolock(**(FILE ***)a2), getc_nolock_result_6 == -1) )
      LOBYTE(getc_nolock_result_6) = 0;
    else
      loaded_word_16[1] = (FILE *)((char *)loaded_word_16[1] + 1);
    LOBYTE(getc_nolock_result_2) = getc_nolock_result_6;
    saved_getc_nolock_result_7 = getc_nolock_result_6;
  }
  record_pointer_8 = saved_comparison_result;
  remaining_count = iteration_count;
  if ( (_BYTE)getc_nolock_result_2 == ***(_BYTE ***)(*(_QWORD *)a1 + 248LL) )
  {
    loaded_word_17 = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_17;
    if ( !comparison_result && loaded_word_17 > *(_QWORD *)(a2 + 8) || (loaded_word_18 = *(FILE ***)a2, getc_nolock_result_7 = getc_nolock(**(FILE ***)a2), getc_nolock_result_7 == -1) )
      LOBYTE(getc_nolock_result_7) = 0;
    else
      loaded_word_18[1] = (FILE *)((char *)loaded_word_18[1] + 1);
    LOBYTE(getc_nolock_result_2) = getc_nolock_result_7;
    saved_comparison_result_2 = saved_comparison_result;
    saved_getc_nolock_result_7 = getc_nolock_result_7;
    saved_getc_nolock_result_2 = getc_nolock_result_7;
    if ( saved_comparison_result == saved_comparison_result_3 + 2 && (_BYTE)getc_nolock_result_7 == 48 )
    {
      selection_flag = 1;
      while ( 1 )
      {
        --remaining_count;
        loaded_word_19 = *(_QWORD *)(a2 + 16) + 1LL;
        comparison_result = *(_QWORD *)(a2 + 8) == 0;
        *(_QWORD *)(a2 + 16) = loaded_word_19;
        if ( !comparison_result && loaded_word_19 > *(_QWORD *)(a2 + 8) )
          break;
        loaded_word_20 = *(FILE ***)a2;
        getc_nolock_result_8 = getc_nolock(**(FILE ***)a2);
        saved_getc_nolock_result_2 = getc_nolock_result_8;
        if ( getc_nolock_result_8 == -1 )
          break;
        loaded_word_20[1] = (FILE *)((char *)loaded_word_20[1] + 1);
        LOBYTE(getc_nolock_result_2) = getc_nolock_result_8;
        saved_getc_nolock_result_7 = getc_nolock_result_8;
        if ( (_BYTE)getc_nolock_result_8 != 48 )
          goto LABEL_84;
      }
      saved_getc_nolock_result_2 = 0;
      LOBYTE(getc_nolock_result_2) = 0;
      saved_getc_nolock_result_7 = 0;
LABEL_84:
      saved_comparison_result_2 = saved_comparison_result;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(saved_getc_nolock_result_2 - 48) > 9u )
      {
        if ( (unsigned __int8)(saved_getc_nolock_result_2 - 97) > 0x19u )
          comparison_result_4 = (unsigned __int8)(saved_getc_nolock_result_2 - 65) > 0x19u ? -1 : saved_getc_nolock_result_2 - 55;
        else
          comparison_result_4 = saved_getc_nolock_result_2 - 87;
      }
      else
      {
        comparison_result_4 = saved_getc_nolock_result_2 - 48;
      }
      if ( comparison_result_4 > comparison_result_2 )
        break;
      selection_flag = 1;
      if ( saved_comparison_result_2 != record_pointer )
      {
        *(_BYTE *)saved_comparison_result_2 = comparison_result_4;
        saved_comparison_result_2 = (int *)((char *)saved_comparison_result_2 + 1);
        record_pointer_8 = saved_comparison_result_2;
      }
      loaded_word_21 = *(_QWORD *)(a2 + 16) + 1LL;
      comparison_result = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = loaded_word_21;
      if ( !comparison_result && loaded_word_21 > *(_QWORD *)(a2 + 8)
        || (loaded_word_22 = *(FILE ***)a2, getc_nolock_result_9 = getc_nolock(**(FILE ***)a2), saved_comparison_result_2 = record_pointer_8, getc_nolock_result_9 == -1) )
      {
        LOBYTE(getc_nolock_result_9) = 0;
      }
      else
      {
        loaded_word_22[1] = (FILE *)((char *)loaded_word_22[1] + 1);
      }
      LOBYTE(getc_nolock_result_2) = getc_nolock_result_9;
      saved_getc_nolock_result_7 = getc_nolock_result_9;
      saved_getc_nolock_result_2 = getc_nolock_result_9;
    }
  }
  loaded_word_23 = *(_QWORD *)(a2 + 8);
  loaded_word_24 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = loaded_word_24;
  if ( !selection_flag )
  {
    if ( !loaded_word_23 || loaded_word_24 <= loaded_word_23 )
    {
      if ( (_BYTE)getc_nolock_result_2 )
      {
        if ( (_BYTE)getc_nolock_result_2 != 0xFF )
        {
          saved_getc_nolock_result_3 = (char)getc_nolock_result_2;
          loaded_word_25 = *(FILE ***)a2;
          if ( saved_getc_nolock_result_3 != -1 )
          {
            loaded_word_25[1] = (FILE *)((char *)loaded_word_25[1] - 1);
            sub_14020CE90(saved_getc_nolock_result_3, (__int64)*loaded_word_25);
            loaded_word_24 = *(_QWORD *)(a2 + 16);
          }
        }
      }
    }
    if ( saved_loaded_word == loaded_word_24 )
    {
      if ( !selection_flag_3 )
        return 7;
      return 2;
    }
LABEL_192:
    **(_BYTE **)(a2 + 24) = 0;
    return 7;
  }
  if ( !loaded_word_23 || (loaded_word_26 = loaded_word_24, loaded_word_27 = loaded_word_23, loaded_word_24 <= loaded_word_23) )
  {
    loaded_word_26 = loaded_word_24;
    loaded_word_27 = loaded_word_23;
    if ( (_BYTE)getc_nolock_result_2 )
    {
      if ( (_BYTE)getc_nolock_result_2 != 0xFF )
      {
        saved_getc_nolock_result_4 = (char)getc_nolock_result_2;
        loaded_word_28 = *(FILE ***)a2;
        if ( saved_getc_nolock_result_4 != -1 )
        {
          loaded_word_28[1] = (FILE *)((char *)loaded_word_28[1] - 1);
          sub_14020CE90(saved_getc_nolock_result_4, (__int64)*loaded_word_28);
          loaded_word_27 = *(_QWORD *)(a2 + 8);
          loaded_word_26 = *(_QWORD *)(a2 + 16);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = loaded_word_26 + 1;
  if ( loaded_word_27 && loaded_word_26 + 1 > loaded_word_27 || (loaded_word_29 = *(FILE ***)a2, getc_nolock_result_10 = getc_nolock(**(FILE ***)a2), getc_nolock_result_10 == -1) )
    LOBYTE(getc_nolock_result_10) = 0;
  else
    loaded_word_29[1] = (FILE *)((char *)loaded_word_29[1] + 1);
  xor_value = 0;
  saved_getc_nolock_result_7 = getc_nolock_result_10;
  switch ( (_BYTE)getc_nolock_result_10 )
  {
    case 'E':
      goto LABEL_127;
    case 'P':
LABEL_126:
      return_value = selection_flag_3;
      xor_value = selection_flag_3;
      break;
    case 'e':
LABEL_127:
      return_value = selection_flag_3;
      xor_value = selection_flag_3 ^ 1;
      break;
    case 'p':
      goto LABEL_126;
    default:
      return_value = selection_flag_3;
      break;
  }
  scaled_index = 0;
  if ( xor_value )
  {
    loaded_word_30 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = loaded_word_30;
    if ( *(_QWORD *)(a2 + 8) && loaded_word_30 > *(_QWORD *)(a2 + 8)
      || (loaded_word_31 = *(FILE ***)a2, getc_nolock_result_11 = getc_nolock(**(FILE ***)a2), saved_getc_nolock_result_5 = getc_nolock_result_11, getc_nolock_result_11 == -1) )
    {
      saved_getc_nolock_result_5 = 0;
      saved_getc_nolock_result_6 = 0;
      LOBYTE(getc_nolock_result_10) = 0;
    }
    else
    {
      loaded_word_31[1] = (FILE *)((char *)loaded_word_31[1] + 1);
      saved_getc_nolock_result_6 = getc_nolock_result_11;
      saved_getc_nolock_result_7 = getc_nolock_result_11;
      if ( (_BYTE)getc_nolock_result_11 != 43 )
      {
        LOBYTE(getc_nolock_result_10) = getc_nolock_result_11;
        if ( (_BYTE)getc_nolock_result_11 != 45 )
        {
LABEL_143:
          selection_flag_2 = 0;
          if ( (_BYTE)getc_nolock_result_10 != 48 )
            goto LABEL_151;
          selection_flag_2 = 1;
          while ( 1 )
          {
            loaded_word_34 = *(_QWORD *)(a2 + 16) + 1LL;
            *(_QWORD *)(a2 + 16) = loaded_word_34;
            if ( *(_QWORD *)(a2 + 8) )
            {
              if ( loaded_word_34 > *(_QWORD *)(a2 + 8) )
                break;
            }
            loaded_word_35 = *(FILE ***)a2;
            getc_nolock_result_13 = getc_nolock(**(FILE ***)a2);
            LOBYTE(getc_nolock_result_10) = getc_nolock_result_13;
            if ( getc_nolock_result_13 == -1 )
              break;
            loaded_word_35[1] = (FILE *)((char *)loaded_word_35[1] + 1);
            saved_getc_nolock_result_6 = getc_nolock_result_13;
            saved_getc_nolock_result_7 = getc_nolock_result_13;
            if ( (_BYTE)getc_nolock_result_13 != 48 )
              goto LABEL_151;
          }
          LOBYTE(getc_nolock_result_10) = 0;
          saved_getc_nolock_result_6 = 0;
          saved_getc_nolock_result_7 = 0;
LABEL_151:
          while ( 1 )
          {
            if ( (unsigned __int8)(getc_nolock_result_10 - 48) > 9u )
            {
              if ( (unsigned __int8)(getc_nolock_result_10 - 97) > 0x19u )
                comparison_result_5 = (unsigned __int8)(getc_nolock_result_10 - 65) > 0x19u ? -1 : (char)getc_nolock_result_10 - 55;
              else
                comparison_result_5 = (char)getc_nolock_result_10 - 87;
            }
            else
            {
              comparison_result_5 = (char)getc_nolock_result_10 - 48;
            }
            if ( comparison_result_5 >= 0xA )
              break;
            selection_flag_2 = 1;
            scaled_index = comparison_result_5 + 10 * scaled_index;
            if ( scaled_index > 5200 )
            {
              scaled_index = 5201;
              break;
            }
            loaded_word_36 = *(_QWORD *)(a2 + 16) + 1LL;
            comparison_result = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = loaded_word_36;
            if ( !comparison_result && loaded_word_36 > *(_QWORD *)(a2 + 8) || (loaded_word_37 = *(FILE ***)a2, getc_nolock_result_14 = getc_nolock(**(FILE ***)a2), getc_nolock_result_14 == -1) )
              LOBYTE(getc_nolock_result_14) = 0;
            else
              loaded_word_37[1] = (FILE *)((char *)loaded_word_37[1] + 1);
            saved_getc_nolock_result_6 = getc_nolock_result_14;
            saved_getc_nolock_result_7 = getc_nolock_result_14;
            LOBYTE(getc_nolock_result_10) = getc_nolock_result_14;
          }
          while ( 1 )
          {
            if ( saved_getc_nolock_result_6 < 48 || (char)getc_nolock_result_10 > 57 )
            {
              if ( (unsigned __int8)(getc_nolock_result_10 - 97) > 0x19u )
                comparison_result_6 = (unsigned __int8)(getc_nolock_result_10 - 65) > 0x19u ? -1 : (char)getc_nolock_result_10 - 55;
              else
                comparison_result_6 = (char)getc_nolock_result_10 - 87;
            }
            else
            {
              comparison_result_6 = (char)getc_nolock_result_10 - 48;
            }
            if ( comparison_result_6 >= 0xA )
              break;
            loaded_word_38 = *(_QWORD *)(a2 + 16) + 1LL;
            comparison_result = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = loaded_word_38;
            if ( !comparison_result && loaded_word_38 > *(_QWORD *)(a2 + 8) || (loaded_word_39 = *(FILE ***)a2, getc_nolock_result_15 = getc_nolock(**(FILE ***)a2), getc_nolock_result_15 == -1) )
              LOBYTE(getc_nolock_result_15) = 0;
            else
              loaded_word_39[1] = (FILE *)((char *)loaded_word_39[1] + 1);
            saved_getc_nolock_result_6 = getc_nolock_result_15;
            saved_getc_nolock_result_7 = getc_nolock_result_15;
            LOBYTE(getc_nolock_result_10) = getc_nolock_result_15;
          }
          integer_difference = -scaled_index;
          if ( saved_getc_nolock_result_5 != 45 )
            integer_difference = scaled_index;
          scaled_index = integer_difference;
          if ( !selection_flag_2 )
          {
            loaded_word_40 = *(_QWORD *)(a2 + 16) - 1LL;
            comparison_result = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = loaded_word_40;
            if ( comparison_result || loaded_word_40 <= *(_QWORD *)(a2 + 8) )
            {
              if ( saved_getc_nolock_result_6 )
              {
                if ( saved_getc_nolock_result_6 != -1 )
                {
                  cached_getc_nolock_result = saved_getc_nolock_result_6;
                  loaded_word_41 = *(FILE ***)a2;
                  if ( cached_getc_nolock_result != -1 )
                  {
                    loaded_word_41[1] = (FILE *)((char *)loaded_word_41[1] - 1);
                    sub_14020CE90(cached_getc_nolock_result, (__int64)*loaded_word_41);
                    loaded_word_40 = *(_QWORD *)(a2 + 16);
                  }
                }
              }
            }
            if ( loaded_word_26 != loaded_word_40 )
              goto LABEL_192;
            integer_sum = loaded_word_40 + 1;
            comparison_result = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = integer_sum;
            if ( !comparison_result && integer_sum > *(_QWORD *)(a2 + 8) || (loaded_word_42 = *(FILE ***)a2, getc_nolock_result_16 = getc_nolock(**(FILE ***)a2), getc_nolock_result_16 == -1) )
              LOBYTE(getc_nolock_result_16) = 0;
            else
              loaded_word_42[1] = (FILE *)((char *)loaded_word_42[1] + 1);
            saved_getc_nolock_result_7 = getc_nolock_result_16;
            LOBYTE(getc_nolock_result_10) = getc_nolock_result_16;
          }
          goto LABEL_199;
        }
      }
      loaded_word_32 = *(_QWORD *)(a2 + 16) + 1LL;
      *(_QWORD *)(a2 + 16) = loaded_word_32;
      if ( *(_QWORD *)(a2 + 8) && loaded_word_32 > *(_QWORD *)(a2 + 8)
        || (loaded_word_33 = *(FILE ***)a2, getc_nolock_result_12 = getc_nolock(**(FILE ***)a2), saved_getc_nolock_result_6 = getc_nolock_result_12, getc_nolock_result_12 == -1) )
      {
        saved_getc_nolock_result_6 = 0;
      }
      else
      {
        loaded_word_33[1] = (FILE *)((char *)loaded_word_33[1] + 1);
      }
      LOBYTE(getc_nolock_result_10) = saved_getc_nolock_result_6;
    }
    saved_getc_nolock_result_7 = saved_getc_nolock_result_6;
    goto LABEL_143;
  }
LABEL_199:
  loaded_word_43 = *(_QWORD *)(a2 + 16) - 1LL;
  comparison_result = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = loaded_word_43;
  if ( (comparison_result || loaded_word_43 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(getc_nolock_result_10 + 1) > 1u )
  {
    loaded_word_44 = *(FILE ***)a2;
    if ( (char)getc_nolock_result_10 != -1 )
    {
      loaded_word_44[1] = (FILE *)((char *)loaded_word_44[1] - 1);
      sub_14020CE90((char)getc_nolock_result_10, (__int64)*loaded_word_44);
    }
  }
  record_pointer_3 = saved_comparison_result_3;
  record_pointer_4 = record_pointer_8;
  record_pointer_5 = saved_comparison_result_3 + 2;
  if ( record_pointer_8 == saved_comparison_result_3 + 2 )
    return 2;
  do
  {
    record_pointer_6 = (int *)((char *)record_pointer_4 - 1);
    if ( *((_BYTE *)record_pointer_4 - 1) )
      break;
    record_pointer_4 = (int *)((char *)record_pointer_4 - 1);
  }
  while ( record_pointer_6 != record_pointer_5 );
  if ( record_pointer_4 == record_pointer_5 )
    return 2;
  if ( scaled_index <= 5200 )
  {
    if ( scaled_index < -5200 )
      return 8;
    comparison_result_7 = remaining_count * (return_value != 0 ? 4 : 1) + scaled_index;
    if ( comparison_result_7 <= 5200 )
    {
      if ( comparison_result_7 >= -5200 )
      {
        *saved_comparison_result_3 = comparison_result_7;
        record_pointer_3[1] = (_DWORD)record_pointer_4 - (_DWORD)record_pointer_5;
        return return_value;
      }
      return 8;
    }
  }
  return 9;
}

//----- (0000000140226624) ----------------------------------------------------
__int64            sub_140226624(__int64 a1, FILE ***a2, __int64 a3)
{
  FILE **loaded_word;
  FILE **table_value;
  unsigned __int16 call_result;
  FILE **table_value_2;
  unsigned __int16 call_result_2;
  FILE **loaded_word_2;
  __int64 integer_difference;
  _BYTE *byte_cursor;
  FILE **table_value_3;
  FILE **loaded_word_3;
  unsigned __int16 call_result_3;
  char selection_flag;
  FILE **table_value_4;
  __int64 cached_call_result;
  FILE **loaded_word_4;
  unsigned __int16 call_result_4;
  FILE **table_value_5;
  FILE **loaded_word_5;
  unsigned __int16 call_result_5;
  FILE **table_value_6;
  FILE **loaded_word_6;
  char selection_flag_2;
  FILE **table_value_7;
  FILE **loaded_word_7;
  unsigned __int16 call_result_6;
  _BYTE *buffer_cursor;
  int iteration_count;
  unsigned int comparison_result;
  int selection_code;
  unsigned int integer_difference_2;
  unsigned int integer_difference_3;
  int integer_difference_4;
  FILE **table_value_8;
  FILE **loaded_word_8;
  unsigned __int16 call_result_7;
  FILE **file_handle;
  FILE **table_value_9;
  unsigned __int16 call_result_8;
  FILE **loaded_word_9;
  _BYTE *buffer_cursor_2;
  unsigned __int16 call_result_9;
  FILE **table_value_10;
  FILE **loaded_word_10;
  unsigned int integer_difference_5;
  int selection_code_2;
  unsigned int integer_difference_6;
  int integer_difference_7;
  FILE **table_value_11;
  FILE **loaded_word_11;
  unsigned __int16 call_result_10;
  FILE **table_value_12;
  FILE **table_value_13;
  FILE **loaded_word_12;
  FILE **table_value_14;
  FILE **table_value_15;
  FILE **loaded_word_13;
  __int64 cached_call_result_2;
  FILE **loaded_word_14;
  unsigned __int16 call_result_11;
  char xor_value;
  unsigned __int8 return_value;
  int scaled_index;
  FILE **table_value_16;
  unsigned __int16 call_result_12;
  FILE **loaded_word_15;
  unsigned __int16 call_result_13;
  FILE **table_value_17;
  FILE **loaded_word_16;
  unsigned __int16 call_result_14;
  bool comparison_result_2;
  FILE **table_value_18;
  FILE **loaded_word_17;
  unsigned __int16 call_result_15;
  int selection_code_3;
  unsigned int integer_difference_8;
  int integer_difference_9;
  FILE **table_value_19;
  FILE **loaded_word_18;
  unsigned int integer_difference_10;
  int selection_code_4;
  int integer_difference_11;
  FILE **table_value_20;
  FILE **loaded_word_19;
  unsigned __int16 call_result_16;
  FILE **file_handle_2;
  FILE **table_value_21;
  FILE **loaded_word_20;
  FILE **file_handle_3;
  FILE **loaded_word_21;
  unsigned __int16 call_result_17;
  FILE **table_value_22;
  FILE **loaded_word_22;
  _BYTE *buffer_cursor_3;
  _BYTE *byte_cursor_2;
  _BYTE *byte_cursor_3;
  int comparison_result_3;
  _WORD scratch_buffer[2];
  int remaining_count;
  int cached_scaled_index;
  int cached_call_result_3;
  _BYTE *saved_buffer_cursor;
  FILE **file_handle_4;
  char selection_flag_3;
  FILE **file_handle_5;
  char selection_flag_4;

  loaded_word = *a2;
  if ( !*a2 || !a2[3] )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 7;
  }
  table_value = a2[2];
  file_handle_5 = table_value;
  a2[2] = (FILE **)((char *)table_value + 1);
  if ( a2[1] && (FILE **)((char *)table_value + 1) > a2[1] )
  {
    call_result = 0;
  }
  else
  {
    call_result = j__fgetwc_nolock(*loaded_word);
    if ( call_result == 0xFFFF )
      call_result = 0;
    else
      loaded_word[1] = (FILE *)((char *)loaded_word[1] + 1);
  }
  scratch_buffer[0] = call_result;
  if ( (unsigned int)sub_140256E00(call_result, 8) )
  {
    do
    {
      table_value_2 = (FILE **)((char *)a2[2] + 1);
      a2[2] = table_value_2;
      if ( a2[1] && table_value_2 > a2[1] )
      {
        call_result_2 = 0;
      }
      else
      {
        loaded_word_2 = *a2;
        call_result_2 = j__fgetwc_nolock(**a2);
        if ( call_result_2 == 0xFFFF )
          call_result_2 = 0;
        else
          loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
      }
      scratch_buffer[0] = call_result_2;
    }
    while ( (unsigned int)sub_140256E00(call_result_2, 8) );
  }
  integer_difference = scratch_buffer[0];
  byte_cursor = (_BYTE *)(a3 + 776);
  *(_BYTE *)(a3 + 776) = scratch_buffer[0] == 45;
  if ( (((_WORD)integer_difference - 43) & 0xFFFD) == 0 )
  {
    table_value_3 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_3;
    if ( a2[1] && table_value_3 > a2[1] )
    {
      integer_difference = 0;
    }
    else
    {
      loaded_word_3 = *a2;
      call_result_3 = j__fgetwc_nolock(**a2);
      if ( call_result_3 == 0xFFFF )
      {
        integer_difference = 0;
      }
      else
      {
        loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] + 1);
        integer_difference = call_result_3;
      }
    }
    scratch_buffer[0] = integer_difference;
  }
  if ( (((_WORD)integer_difference - 73) & 0xFFDF) == 0 )
    return sub_140229798((unsigned __int64)scratch_buffer, a2, table_value);
  if ( (((_WORD)integer_difference - 78) & 0xFFDF) == 0 )
    return sub_14022A27C((__int64)scratch_buffer, a2, (__int64 *)table_value);
  selection_flag_3 = 0;
  selection_flag = 0;
  if ( (_WORD)integer_difference != 48 )
    goto LABEL_48;
  table_value_4 = a2[2];
  a2[2] = (FILE **)((char *)table_value_4 + 1);
  if ( a2[1] && (FILE **)((char *)table_value_4 + 1) > a2[1] )
  {
    cached_call_result = 0;
    goto LABEL_44;
  }
  loaded_word_4 = *a2;
  call_result_4 = j__fgetwc_nolock(**a2);
  cached_call_result = call_result_4;
  if ( call_result_4 == 0xFFFF )
  {
    cached_call_result = 0;
    goto LABEL_43;
  }
  loaded_word_4[1] = (FILE *)((char *)loaded_word_4[1] + 1);
  if ( ((call_result_4 - 88) & 0xFFDF) != 0 )
  {
LABEL_43:
    integer_difference = scratch_buffer[0];
LABEL_44:
    table_value_6 = (FILE **)((char *)a2[2] - 1);
    a2[2] = table_value_6;
    if ( (!a2[1] || table_value_6 <= a2[1]) && (unsigned __int16)(cached_call_result - 1) <= 0xFFFDu )
    {
      loaded_word_6 = *a2;
      loaded_word_6[1] = (FILE *)((char *)loaded_word_6[1] - 1);
      ungetwc_nolock(cached_call_result, *loaded_word_6, integer_difference);
      integer_difference = scratch_buffer[0];
    }
    goto LABEL_48;
  }
  selection_flag = 1;
  table_value_5 = (FILE **)((char *)a2[2] + 1);
  selection_flag_3 = 1;
  a2[2] = table_value_5;
  if ( a2[1] && table_value_5 > a2[1] )
  {
    integer_difference = 0;
  }
  else
  {
    loaded_word_5 = *a2;
    call_result_5 = j__fgetwc_nolock(**a2);
    integer_difference = call_result_5;
    if ( call_result_5 == 0xFFFF )
      integer_difference = 0;
    else
      loaded_word_5[1] = (FILE *)((char *)loaded_word_5[1] + 1);
  }
  scratch_buffer[0] = integer_difference;
  file_handle_5 = table_value_4;
LABEL_48:
  remaining_count = 0;
  saved_buffer_cursor = (_BYTE *)(a3 + 8);
  selection_flag_2 = 0;
  if ( (_WORD)integer_difference == 48 )
  {
    selection_flag_2 = 1;
    while ( 1 )
    {
      table_value_7 = (FILE **)((char *)a2[2] + 1);
      a2[2] = table_value_7;
      if ( a2[1] )
      {
        if ( table_value_7 > a2[1] )
          break;
      }
      loaded_word_7 = *a2;
      call_result_6 = j__fgetwc_nolock(**a2);
      if ( call_result_6 == 0xFFFF )
        break;
      integer_difference = call_result_6;
      loaded_word_7[1] = (FILE *)((char *)loaded_word_7[1] + 1);
      scratch_buffer[0] = call_result_6;
      if ( call_result_6 != 48 )
        goto LABEL_56;
    }
    integer_difference = 0;
    scratch_buffer[0] = 0;
  }
LABEL_56:
  buffer_cursor = saved_buffer_cursor;
  iteration_count = remaining_count;
  comparison_result = selection_flag != 0 ? 15 : 9;
  while ( 1 )
  {
    selection_code = 65296;
    if ( (unsigned __int16)integer_difference >= 0x30u )
    {
      if ( (unsigned __int16)integer_difference < 0x3Au )
      {
        integer_difference_2 = (unsigned __int16)integer_difference - 48;
        goto LABEL_100;
      }
      if ( (unsigned __int16)integer_difference >= 0xFF10u )
      {
        if ( (unsigned __int16)integer_difference < 0xFF1Au )
LABEL_75:
          integer_difference_2 = (unsigned __int16)integer_difference - selection_code;
        else
          integer_difference_2 = -1;
LABEL_100:
        if ( integer_difference_2 != -1 )
          goto LABEL_107;
        goto LABEL_101;
      }
      if ( (unsigned __int16)integer_difference >= 0x660u )
      {
        if ( (unsigned __int16)integer_difference < 0x66Au )
        {
          integer_difference_2 = (unsigned __int16)integer_difference - 1632;
          goto LABEL_100;
        }
        if ( (unsigned __int16)integer_difference >= 0x6F0u )
        {
          if ( (unsigned __int16)integer_difference < 0x6FAu )
          {
            integer_difference_2 = (unsigned __int16)integer_difference - 1776;
            goto LABEL_100;
          }
          if ( (unsigned __int16)integer_difference >= 0x966u )
          {
            if ( (unsigned __int16)integer_difference < 0x970u )
            {
              integer_difference_2 = (unsigned __int16)integer_difference - 2406;
              goto LABEL_100;
            }
            if ( (unsigned __int16)integer_difference >= 0x9E6u )
            {
              if ( (unsigned __int16)integer_difference < 0x9F0u )
              {
                integer_difference_2 = (unsigned __int16)integer_difference - 2534;
                goto LABEL_100;
              }
              selection_code = 2662;
              if ( (unsigned __int16)integer_difference >= 0xA66u )
              {
                if ( (unsigned __int16)integer_difference < 0xA70u )
                  goto LABEL_75;
                selection_code = 2790;
                if ( (unsigned __int16)integer_difference >= 0xAE6u )
                {
                  if ( (unsigned __int16)integer_difference < 0xAF0u )
                    goto LABEL_75;
                  selection_code = 2918;
                  if ( (unsigned __int16)integer_difference >= 0xB66u )
                  {
                    if ( (unsigned __int16)integer_difference < 0xB70u )
                      goto LABEL_75;
                    selection_code = 3174;
                    if ( (unsigned __int16)integer_difference >= 0xC66u )
                    {
                      if ( (unsigned __int16)integer_difference < 0xC70u )
                        goto LABEL_75;
                      selection_code = 3302;
                      if ( (unsigned __int16)integer_difference >= 0xCE6u )
                      {
                        if ( (unsigned __int16)integer_difference < 0xCF0u )
                          goto LABEL_75;
                        selection_code = 3430;
                        if ( (unsigned __int16)integer_difference >= 0xD66u )
                        {
                          if ( (unsigned __int16)integer_difference < 0xD70u )
                            goto LABEL_75;
                          selection_code = 3664;
                          if ( (unsigned __int16)integer_difference >= 0xE50u )
                          {
                            if ( (unsigned __int16)integer_difference < 0xE5Au )
                              goto LABEL_75;
                            selection_code = 3792;
                            if ( (unsigned __int16)integer_difference >= 0xED0u )
                            {
                              if ( (unsigned __int16)integer_difference < 0xEDAu )
                                goto LABEL_75;
                              selection_code = 3872;
                              if ( (unsigned __int16)integer_difference >= 0xF20u )
                              {
                                if ( (unsigned __int16)integer_difference < 0xF2Au )
                                  goto LABEL_75;
                                selection_code = 4160;
                                if ( (unsigned __int16)integer_difference >= 0x1040u )
                                {
                                  if ( (unsigned __int16)integer_difference < 0x104Au )
                                    goto LABEL_75;
                                  selection_code = 6112;
                                  if ( (unsigned __int16)integer_difference >= 0x17E0u )
                                  {
                                    if ( (unsigned __int16)integer_difference < 0x17EAu )
                                      goto LABEL_75;
                                    selection_code = 6160;
                                    if ( (unsigned __int16)(integer_difference - 6160) <= 9u )
                                      goto LABEL_75;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_101:
    integer_difference_3 = (unsigned __int16)integer_difference - 97;
    if ( (unsigned int)(unsigned __int16)integer_difference - 65 <= 0x19 || integer_difference_3 <= 0x19 )
    {
      integer_difference_4 = (unsigned __int16)integer_difference - 32;
      if ( integer_difference_3 > 0x19 )
        integer_difference_4 = (unsigned __int16)integer_difference;
      integer_difference_2 = integer_difference_4 - 55;
    }
    else
    {
      integer_difference_2 = -1;
    }
LABEL_107:
    if ( integer_difference_2 > comparison_result )
      break;
    selection_flag_2 = 1;
    if ( buffer_cursor != byte_cursor )
      *buffer_cursor++ = integer_difference_2;
    ++iteration_count;
    table_value_8 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_8;
    if ( a2[1] && table_value_8 > a2[1] )
    {
      integer_difference = 0;
    }
    else
    {
      loaded_word_8 = *a2;
      call_result_7 = j__fgetwc_nolock(**a2);
      integer_difference = call_result_7;
      if ( call_result_7 == 0xFFFF )
        integer_difference = 0;
      else
        loaded_word_8[1] = (FILE *)((char *)loaded_word_8[1] + 1);
    }
    scratch_buffer[0] = integer_difference;
  }
  saved_buffer_cursor = buffer_cursor;
  remaining_count = iteration_count;
  file_handle = file_handle_5;
  if ( (unsigned __int16)integer_difference != ***(char ***)(*(_QWORD *)a1 + 248LL) )
    goto LABEL_193;
  table_value_9 = (FILE **)((char *)a2[2] + 1);
  a2[2] = table_value_9;
  if ( a2[1] && table_value_9 > a2[1] )
  {
    call_result_8 = 0;
  }
  else
  {
    loaded_word_9 = *a2;
    call_result_8 = j__fgetwc_nolock(**a2);
    if ( call_result_8 == 0xFFFF )
      call_result_8 = 0;
    else
      loaded_word_9[1] = (FILE *)((char *)loaded_word_9[1] + 1);
  }
  integer_difference = call_result_8;
  buffer_cursor_2 = saved_buffer_cursor;
  scratch_buffer[0] = call_result_8;
  call_result_9 = call_result_8;
  if ( saved_buffer_cursor == (_BYTE *)(a3 + 8) && call_result_8 == 48 )
  {
    selection_flag_2 = 1;
    while ( 1 )
    {
      --remaining_count;
      table_value_10 = (FILE **)((char *)a2[2] + 1);
      a2[2] = table_value_10;
      if ( a2[1] )
      {
        if ( table_value_10 > a2[1] )
          break;
      }
      loaded_word_10 = *a2;
      call_result_9 = j__fgetwc_nolock(**a2);
      if ( call_result_9 == 0xFFFF )
      {
        call_result_9 = 0;
        goto LABEL_134;
      }
      loaded_word_10[1] = (FILE *)((char *)loaded_word_10[1] + 1);
      integer_difference = call_result_9;
      scratch_buffer[0] = call_result_9;
      if ( call_result_9 != 48 )
        goto LABEL_135;
    }
    call_result_9 = 0;
LABEL_134:
    scratch_buffer[0] = 0;
    integer_difference = 0;
LABEL_135:
    buffer_cursor_2 = saved_buffer_cursor;
  }
  while ( 2 )
  {
    if ( call_result_9 < 0x30u )
      goto LABEL_176;
    if ( call_result_9 < 0x3Au )
    {
      integer_difference_5 = call_result_9 - 48;
      goto LABEL_175;
    }
    selection_code_2 = 65296;
    if ( call_result_9 < 0xFF10u )
    {
      selection_code_2 = 1632;
      if ( call_result_9 >= 0x660u )
      {
        if ( call_result_9 < 0x66Au )
          goto LABEL_142;
        selection_code_2 = 1776;
        if ( call_result_9 >= 0x6F0u )
        {
          if ( call_result_9 < 0x6FAu )
            goto LABEL_142;
          selection_code_2 = 2406;
          if ( call_result_9 >= 0x966u )
          {
            if ( call_result_9 < 0x970u )
              goto LABEL_142;
            selection_code_2 = 2534;
            if ( call_result_9 >= 0x9E6u )
            {
              if ( call_result_9 < 0x9F0u )
                goto LABEL_142;
              selection_code_2 = 2662;
              if ( call_result_9 >= 0xA66u )
              {
                if ( call_result_9 < 0xA70u )
                  goto LABEL_142;
                selection_code_2 = 2790;
                if ( call_result_9 >= 0xAE6u )
                {
                  if ( call_result_9 < 0xAF0u )
                    goto LABEL_142;
                  selection_code_2 = 2918;
                  if ( call_result_9 >= 0xB66u )
                  {
                    if ( call_result_9 < 0xB70u )
                      goto LABEL_142;
                    selection_code_2 = 3174;
                    if ( call_result_9 >= 0xC66u )
                    {
                      if ( call_result_9 < 0xC70u )
                        goto LABEL_142;
                      selection_code_2 = 3302;
                      if ( call_result_9 >= 0xCE6u )
                      {
                        if ( call_result_9 < 0xCF0u
                          || (selection_code_2 = 3430, call_result_9 >= 0xD66u)
                          && (call_result_9 < 0xD70u
                           || (selection_code_2 = 3664, call_result_9 >= 0xE50u)
                           && (call_result_9 < 0xE5Au
                            || (selection_code_2 = 3792, call_result_9 >= 0xED0u)
                            && (call_result_9 < 0xEDAu
                             || (selection_code_2 = 3872, call_result_9 >= 0xF20u)
                             && (call_result_9 < 0xF2Au
                              || (selection_code_2 = 4160, call_result_9 >= 0x1040u)
                              && (call_result_9 < 0x104Au
                               || (selection_code_2 = 6112, call_result_9 >= 0x17E0u)
                               && (call_result_9 < 0x17EAu || (selection_code_2 = 6160, (unsigned __int16)(call_result_9 - 6160) <= 9u))))))) )
                        {
LABEL_142:
                          integer_difference_5 = call_result_9 - selection_code_2;
                          goto LABEL_175;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_176;
    }
    if ( call_result_9 < 0xFF1Au )
      goto LABEL_142;
    integer_difference_5 = -1;
LABEL_175:
    if ( integer_difference_5 == -1 )
    {
LABEL_176:
      integer_difference_6 = (unsigned __int16)integer_difference - 97;
      if ( (unsigned int)(unsigned __int16)integer_difference - 65 <= 0x19 || integer_difference_6 <= 0x19 )
      {
        integer_difference_7 = (unsigned __int16)integer_difference - 32;
        if ( integer_difference_6 > 0x19 )
          integer_difference_7 = (unsigned __int16)integer_difference;
        integer_difference_5 = integer_difference_7 - 55;
      }
      else
      {
        integer_difference_5 = -1;
      }
    }
    if ( integer_difference_5 <= comparison_result )
    {
      selection_flag_2 = 1;
      if ( buffer_cursor_2 != byte_cursor )
      {
        *buffer_cursor_2++ = integer_difference_5;
        saved_buffer_cursor = buffer_cursor_2;
      }
      table_value_11 = (FILE **)((char *)a2[2] + 1);
      a2[2] = table_value_11;
      if ( a2[1] && table_value_11 > a2[1] )
      {
        call_result_9 = 0;
      }
      else
      {
        loaded_word_11 = *a2;
        call_result_10 = j__fgetwc_nolock(**a2);
        buffer_cursor_2 = saved_buffer_cursor;
        call_result_9 = call_result_10;
        if ( call_result_10 == 0xFFFF )
          call_result_9 = 0;
        else
          loaded_word_11[1] = (FILE *)((char *)loaded_word_11[1] + 1);
      }
      integer_difference = call_result_9;
      scratch_buffer[0] = call_result_9;
      continue;
    }
    break;
  }
  file_handle = file_handle_5;
LABEL_193:
  table_value_12 = a2[1];
  table_value_13 = (FILE **)((char *)a2[2] - 1);
  a2[2] = table_value_13;
  if ( !selection_flag_2 )
  {
    if ( (!table_value_12 || table_value_13 <= table_value_12) && (_WORD)integer_difference && (_WORD)integer_difference != 0xFFFF )
    {
      loaded_word_12 = *a2;
      loaded_word_12[1] = (FILE *)((char *)loaded_word_12[1] - 1);
      ungetwc_nolock((unsigned __int16)integer_difference, *loaded_word_12, integer_difference);
      table_value_13 = a2[2];
    }
    if ( file_handle != table_value_13 )
      goto LABEL_370;
    if ( !selection_flag_3 )
      return 7;
    return 2;
  }
  if ( !table_value_12 || (file_handle_4 = table_value_13, table_value_14 = table_value_13, table_value_15 = table_value_12, table_value_13 <= table_value_12) )
  {
    file_handle_4 = table_value_13;
    table_value_14 = table_value_13;
    table_value_15 = table_value_12;
    if ( (_WORD)integer_difference )
    {
      file_handle_4 = table_value_13;
      if ( (_WORD)integer_difference != 0xFFFF )
      {
        loaded_word_13 = *a2;
        loaded_word_13[1] = (FILE *)((char *)loaded_word_13[1] - 1);
        ungetwc_nolock((unsigned __int16)integer_difference, *loaded_word_13, integer_difference);
        table_value_14 = a2[2];
        table_value_15 = a2[1];
        file_handle_4 = table_value_14;
      }
    }
  }
  a2[2] = (FILE **)((char *)table_value_14 + 1);
  if ( table_value_15 && (FILE **)((char *)table_value_14 + 1) > table_value_15 )
  {
    cached_call_result_2 = 0;
  }
  else
  {
    loaded_word_14 = *a2;
    call_result_11 = j__fgetwc_nolock(**a2);
    cached_call_result_2 = call_result_11;
    if ( call_result_11 == 0xFFFF )
      cached_call_result_2 = 0;
    else
      loaded_word_14[1] = (FILE *)((char *)loaded_word_14[1] + 1);
  }
  scratch_buffer[0] = cached_call_result_2;
  xor_value = 0;
  switch ( (_WORD)cached_call_result_2 )
  {
    case 'E':
      goto LABEL_218;
    case 'P':
      goto LABEL_217;
    case 'e':
LABEL_218:
      return_value = selection_flag_3;
      xor_value = selection_flag_3 ^ 1;
      break;
    case 'p':
LABEL_217:
      return_value = selection_flag_3;
      xor_value = selection_flag_3;
      break;
    default:
      return_value = selection_flag_3;
      break;
  }
  cached_scaled_index = 0;
  scaled_index = 0;
  if ( !xor_value )
    goto LABEL_378;
  table_value_16 = (FILE **)((char *)a2[2] + 1);
  a2[2] = table_value_16;
  if ( a2[1] && table_value_16 > a2[1] )
  {
    cached_call_result_3 = 0;
    goto LABEL_224;
  }
  loaded_word_15 = *a2;
  call_result_13 = j__fgetwc_nolock(**a2);
  cached_call_result_3 = call_result_13;
  if ( call_result_13 == 0xFFFF )
  {
    cached_call_result_3 = 0;
LABEL_224:
    cached_call_result_2 = 0;
    call_result_12 = 0;
    scratch_buffer[0] = 0;
  }
  else
  {
    loaded_word_15[1] = (FILE *)((char *)loaded_word_15[1] + 1);
    cached_call_result_2 = call_result_13;
    scratch_buffer[0] = call_result_13;
    if ( call_result_13 == 43 || (call_result_12 = call_result_13, call_result_13 == 45) )
    {
      table_value_17 = (FILE **)((char *)a2[2] + 1);
      a2[2] = table_value_17;
      if ( a2[1] && table_value_17 > a2[1] )
      {
        call_result_12 = 0;
      }
      else
      {
        loaded_word_16 = *a2;
        call_result_14 = j__fgetwc_nolock(**a2);
        if ( call_result_14 == 0xFFFF )
        {
          call_result_12 = 0;
        }
        else
        {
          loaded_word_16[1] = (FILE *)((char *)loaded_word_16[1] + 1);
          call_result_12 = call_result_14;
        }
      }
      cached_call_result_2 = call_result_12;
      scratch_buffer[0] = call_result_12;
    }
  }
  selection_flag_4 = 0;
  comparison_result_2 = call_result_12 < 0x30u;
  if ( call_result_12 != 48 )
    goto LABEL_247;
  selection_flag_4 = 1;
  while ( 2 )
  {
    table_value_18 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_18;
    if ( a2[1] && table_value_18 > a2[1] )
    {
      call_result_12 = 0;
LABEL_245:
      cached_call_result_2 = 0;
      scratch_buffer[0] = 0;
      goto LABEL_246;
    }
    loaded_word_17 = *a2;
    call_result_15 = j__fgetwc_nolock(**a2);
    call_result_12 = call_result_15;
    if ( call_result_15 == 0xFFFF )
    {
      call_result_12 = 0;
      goto LABEL_245;
    }
    cached_call_result_2 = call_result_15;
    loaded_word_17[1] = (FILE *)((char *)loaded_word_17[1] + 1);
    scratch_buffer[0] = call_result_15;
    comparison_result_2 = call_result_15 < 0x30u;
    if ( call_result_15 == 48 )
      continue;
    break;
  }
LABEL_247:
  while ( 2 )
  {
    if ( comparison_result_2 )
      goto LABEL_287;
    if ( call_result_12 < 0x3Au )
    {
      integer_difference = (unsigned int)call_result_12 - 48;
      goto LABEL_286;
    }
    selection_code_3 = 65296;
    if ( call_result_12 < 0xFF10u )
    {
      selection_code_3 = 1632;
      if ( call_result_12 < 0x660u )
        goto LABEL_287;
      if ( call_result_12 < 0x66Au )
        goto LABEL_253;
      selection_code_3 = 1776;
      if ( call_result_12 < 0x6F0u )
        goto LABEL_287;
      if ( call_result_12 >= 0x6FAu )
      {
        selection_code_3 = 2406;
        if ( call_result_12 < 0x966u )
          goto LABEL_287;
        if ( call_result_12 >= 0x970u )
        {
          selection_code_3 = 2534;
          if ( call_result_12 < 0x9E6u )
            goto LABEL_287;
          if ( call_result_12 >= 0x9F0u )
          {
            selection_code_3 = 2662;
            if ( call_result_12 < 0xA66u )
              goto LABEL_287;
            if ( call_result_12 >= 0xA70u )
            {
              selection_code_3 = 2790;
              if ( call_result_12 < 0xAE6u )
                goto LABEL_287;
              if ( call_result_12 >= 0xAF0u )
              {
                selection_code_3 = 2918;
                if ( call_result_12 < 0xB66u )
                  goto LABEL_287;
                if ( call_result_12 >= 0xB70u )
                {
                  selection_code_3 = 3174;
                  if ( call_result_12 < 0xC66u )
                    goto LABEL_287;
                  if ( call_result_12 >= 0xC70u )
                  {
                    selection_code_3 = 3302;
                    if ( call_result_12 < 0xCE6u )
                      goto LABEL_287;
                    if ( call_result_12 >= 0xCF0u )
                    {
                      selection_code_3 = 3430;
                      if ( call_result_12 < 0xD66u )
                        goto LABEL_287;
                      if ( call_result_12 >= 0xD70u )
                      {
                        selection_code_3 = 3664;
                        if ( call_result_12 < 0xE50u )
                          goto LABEL_287;
                        if ( call_result_12 >= 0xE5Au )
                        {
                          selection_code_3 = 3792;
                          if ( call_result_12 < 0xED0u )
                            goto LABEL_287;
                          if ( call_result_12 >= 0xEDAu )
                          {
                            selection_code_3 = 3872;
                            if ( call_result_12 < 0xF20u )
                              goto LABEL_287;
                            if ( call_result_12 >= 0xF2Au )
                            {
                              selection_code_3 = 4160;
                              if ( call_result_12 < 0x1040u )
                                goto LABEL_287;
                              if ( call_result_12 >= 0x104Au )
                              {
                                selection_code_3 = 6112;
                                if ( call_result_12 < 0x17E0u )
                                  goto LABEL_287;
                                if ( call_result_12 >= 0x17EAu )
                                {
                                  if ( (unsigned __int16)(call_result_12 - 6160) <= 9u )
                                  {
                                    integer_difference = (unsigned int)call_result_12 - 6160;
                                    goto LABEL_286;
                                  }
                                  goto LABEL_287;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_253:
      integer_difference = (unsigned int)call_result_12 - selection_code_3;
      goto LABEL_286;
    }
    if ( call_result_12 < 0xFF1Au )
      goto LABEL_253;
    integer_difference = 0xFFFFFFFFLL;
LABEL_286:
    if ( (_DWORD)integer_difference == -1 )
    {
LABEL_287:
      integer_difference_8 = (unsigned __int16)cached_call_result_2 - 97;
      if ( (unsigned int)(unsigned __int16)cached_call_result_2 - 65 <= 0x19 || integer_difference_8 <= 0x19 )
      {
        integer_difference_9 = (unsigned __int16)cached_call_result_2 - 32;
        if ( integer_difference_8 > 0x19 )
          integer_difference_9 = (unsigned __int16)cached_call_result_2;
        integer_difference = (unsigned int)(integer_difference_9 - 55);
      }
      else
      {
        integer_difference = 0xFFFFFFFFLL;
      }
    }
    if ( (unsigned int)integer_difference >= 0xA )
      goto LABEL_303;
    selection_flag_4 = 1;
    scaled_index = integer_difference + 10 * scaled_index;
    cached_scaled_index = scaled_index;
    if ( scaled_index <= 5200 )
    {
      table_value_19 = (FILE **)((char *)a2[2] + 1);
      a2[2] = table_value_19;
      if ( a2[1] && table_value_19 > a2[1] )
      {
        call_result_12 = 0;
      }
      else
      {
        loaded_word_18 = *a2;
        call_result_12 = j__fgetwc_nolock(**a2);
        if ( call_result_12 == 0xFFFF )
          call_result_12 = 0;
        else
          loaded_word_18[1] = (FILE *)((char *)loaded_word_18[1] + 1);
      }
      cached_call_result_2 = call_result_12;
      scratch_buffer[0] = call_result_12;
LABEL_246:
      comparison_result_2 = call_result_12 < 0x30u;
      continue;
    }
    break;
  }
  cached_scaled_index = 5201;
LABEL_303:
  while ( 2 )
  {
    if ( (unsigned __int16)cached_call_result_2 < 0x30u )
      goto LABEL_347;
    if ( (unsigned __int16)cached_call_result_2 < 0x3Au )
    {
      integer_difference_10 = (unsigned __int16)cached_call_result_2 - 48;
      goto LABEL_346;
    }
    if ( (unsigned __int16)cached_call_result_2 < 0xFF10u )
    {
      if ( (unsigned __int16)cached_call_result_2 >= 0x660u )
      {
        if ( (unsigned __int16)cached_call_result_2 < 0x66Au )
        {
          integer_difference_10 = (unsigned __int16)cached_call_result_2 - 1632;
          goto LABEL_346;
        }
        if ( (unsigned __int16)cached_call_result_2 >= 0x6F0u )
        {
          if ( (unsigned __int16)cached_call_result_2 < 0x6FAu )
          {
            integer_difference_10 = (unsigned __int16)cached_call_result_2 - 1776;
            goto LABEL_346;
          }
          if ( (unsigned __int16)cached_call_result_2 >= 0x966u )
          {
            if ( (unsigned __int16)cached_call_result_2 < 0x970u )
            {
              integer_difference_10 = (unsigned __int16)cached_call_result_2 - 2406;
              goto LABEL_346;
            }
            selection_code_4 = 2534;
            if ( (unsigned __int16)cached_call_result_2 >= 0x9E6u )
            {
              if ( (unsigned __int16)cached_call_result_2 < 0x9F0u )
                goto LABEL_318;
              selection_code_4 = 2662;
              if ( (unsigned __int16)cached_call_result_2 >= 0xA66u )
              {
                if ( (unsigned __int16)cached_call_result_2 < 0xA70u )
                  goto LABEL_318;
                selection_code_4 = 2790;
                if ( (unsigned __int16)cached_call_result_2 >= 0xAE6u )
                {
                  if ( (unsigned __int16)cached_call_result_2 < 0xAF0u )
                    goto LABEL_318;
                  selection_code_4 = 2918;
                  if ( (unsigned __int16)cached_call_result_2 >= 0xB66u )
                  {
                    if ( (unsigned __int16)cached_call_result_2 < 0xB70u )
                      goto LABEL_318;
                    selection_code_4 = 3174;
                    if ( (unsigned __int16)cached_call_result_2 >= 0xC66u )
                    {
                      if ( (unsigned __int16)cached_call_result_2 < 0xC70u )
                        goto LABEL_318;
                      selection_code_4 = 3302;
                      if ( (unsigned __int16)cached_call_result_2 >= 0xCE6u )
                      {
                        if ( (unsigned __int16)cached_call_result_2 < 0xCF0u )
                          goto LABEL_318;
                        selection_code_4 = 3430;
                        if ( (unsigned __int16)cached_call_result_2 >= 0xD66u )
                        {
                          if ( (unsigned __int16)cached_call_result_2 < 0xD70u
                            || (selection_code_4 = 3664, (unsigned __int16)cached_call_result_2 >= 0xE50u)
                            && ((unsigned __int16)cached_call_result_2 < 0xE5Au
                             || (selection_code_4 = 3792, (unsigned __int16)cached_call_result_2 >= 0xED0u)
                             && ((unsigned __int16)cached_call_result_2 < 0xEDAu
                              || (selection_code_4 = 3872, (unsigned __int16)cached_call_result_2 >= 0xF20u)
                              && ((unsigned __int16)cached_call_result_2 < 0xF2Au
                               || (selection_code_4 = 4160, (unsigned __int16)cached_call_result_2 >= 0x1040u)
                               && ((unsigned __int16)cached_call_result_2 < 0x104Au
                                || (selection_code_4 = 6112, (unsigned __int16)cached_call_result_2 >= 0x17E0u)
                                && ((unsigned __int16)cached_call_result_2 < 0x17EAu
                                 || (selection_code_4 = 6160, integer_difference = 9, (unsigned __int16)(cached_call_result_2 - 6160) <= 9u)))))) )
                          {
LABEL_318:
                            integer_difference_10 = (unsigned __int16)cached_call_result_2 - selection_code_4;
                            goto LABEL_346;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_347;
    }
    if ( (unsigned __int16)cached_call_result_2 >= 0xFF1Au )
      integer_difference_10 = -1;
    else
      integer_difference_10 = (unsigned __int16)cached_call_result_2 - 65296;
LABEL_346:
    if ( integer_difference_10 == -1 )
    {
LABEL_347:
      integer_difference = (unsigned int)(unsigned __int16)cached_call_result_2 - 97;
      if ( (unsigned int)(unsigned __int16)cached_call_result_2 - 65 <= 0x19 || (unsigned int)integer_difference <= 0x19 )
      {
        integer_difference_11 = (unsigned __int16)cached_call_result_2 - 32;
        if ( (unsigned int)integer_difference > 0x19 )
          integer_difference_11 = (unsigned __int16)cached_call_result_2;
        integer_difference_10 = integer_difference_11 - 55;
      }
      else
      {
        integer_difference_10 = -1;
      }
    }
    if ( integer_difference_10 < 0xA )
    {
      table_value_20 = (FILE **)((char *)a2[2] + 1);
      a2[2] = table_value_20;
      if ( a2[1] && table_value_20 > a2[1] )
      {
        cached_call_result_2 = 0;
      }
      else
      {
        loaded_word_19 = *a2;
        call_result_16 = j__fgetwc_nolock(**a2);
        cached_call_result_2 = call_result_16;
        if ( call_result_16 == 0xFFFF )
          cached_call_result_2 = 0;
        else
          loaded_word_19[1] = (FILE *)((char *)loaded_word_19[1] + 1);
      }
      scratch_buffer[0] = cached_call_result_2;
      continue;
    }
    break;
  }
  scaled_index = -cached_scaled_index;
  file_handle_2 = file_handle_4;
  return_value = selection_flag_3;
  if ( (_WORD)cached_call_result_3 != 45 )
    scaled_index = cached_scaled_index;
  if ( !selection_flag_4 )
  {
    table_value_21 = (FILE **)((char *)a2[2] - 1);
    a2[2] = table_value_21;
    if ( (!a2[1] || table_value_21 <= a2[1]) && (_WORD)cached_call_result_2 && (_WORD)cached_call_result_2 != 0xFFFF )
    {
      loaded_word_20 = *a2;
      loaded_word_20[1] = (FILE *)((char *)loaded_word_20[1] - 1);
      ungetwc_nolock(cached_call_result_2, *loaded_word_20, integer_difference);
      table_value_21 = a2[2];
    }
    if ( file_handle_2 != table_value_21 )
    {
LABEL_370:
      *(_BYTE *)a2[3] = 0;
      return 7;
    }
    file_handle_3 = (FILE **)((char *)table_value_21 + 1);
    a2[2] = file_handle_3;
    if ( a2[1] && file_handle_3 > a2[1] )
    {
      cached_call_result_2 = 0;
    }
    else
    {
      loaded_word_21 = *a2;
      call_result_17 = j__fgetwc_nolock(**a2);
      cached_call_result_2 = call_result_17;
      if ( call_result_17 == 0xFFFF )
        cached_call_result_2 = 0;
      else
        loaded_word_21[1] = (FILE *)((char *)loaded_word_21[1] + 1);
    }
    scratch_buffer[0] = cached_call_result_2;
  }
LABEL_378:
  table_value_22 = (FILE **)((char *)a2[2] - 1);
  a2[2] = table_value_22;
  if ( (!a2[1] || table_value_22 <= a2[1]) && (unsigned __int16)(cached_call_result_2 - 1) <= 0xFFFDu )
  {
    loaded_word_22 = *a2;
    loaded_word_22[1] = (FILE *)((char *)loaded_word_22[1] - 1);
    ungetwc_nolock(cached_call_result_2, *loaded_word_22, integer_difference);
  }
  buffer_cursor_3 = saved_buffer_cursor;
  byte_cursor_2 = (_BYTE *)(a3 + 8);
  if ( saved_buffer_cursor == (_BYTE *)(a3 + 8) )
    return 2;
  do
  {
    byte_cursor_3 = buffer_cursor_3 - 1;
    if ( *(buffer_cursor_3 - 1) )
      break;
    --buffer_cursor_3;
  }
  while ( byte_cursor_3 != byte_cursor_2 );
  if ( buffer_cursor_3 == byte_cursor_2 )
    return 2;
  if ( scaled_index > 5200 )
    return 9;
  if ( scaled_index < -5200 )
    return 8;
  comparison_result_3 = remaining_count * (return_value != 0 ? 4 : 1) + scaled_index;
  if ( comparison_result_3 > 5200 )
    return 9;
  if ( comparison_result_3 >= -5200 )
  {
    *(_DWORD *)a3 = comparison_result_3;
    *(_DWORD *)(a3 + 4) = (_DWORD)buffer_cursor_3 - (_DWORD)byte_cursor_2;
    return return_value;
  }
  return 8;
}

//----- (0000000140227894) ----------------------------------------------------
__int64            sub_140227894(struct __crt_locale_pointers *a1, _QWORD *a2, __int64 a3)
{
  __int64 loaded_word;
  __int64 table_value;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word_2;
  unsigned __int8 saved_loaded_word;
  unsigned __int64 table_value_2;
  unsigned __int8 *loaded_record_pointer_2;
  int *saved_comparison_result;
  _BYTE *byte_cursor;
  unsigned __int64 table_value_3;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned __int8 selection_flag;
  __int64 table_value_4;
  char *loaded_record_pointer_4;
  char input_byte;
  unsigned __int64 table_value_5;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int64 integer_difference;
  __int64 loaded_word_3;
  int remaining_count;
  _BYTE *byte_cursor_2;
  char selection_flag_2;
  _BYTE *buffer_cursor;
  unsigned __int64 table_value_6;
  unsigned __int8 *loaded_record_pointer_6;
  unsigned int comparison_result;
  unsigned int comparison_result_2;
  unsigned __int64 table_value_7;
  unsigned __int8 *loaded_record_pointer_7;
  __int64 loaded_word_4;
  unsigned __int64 table_value_8;
  unsigned __int8 *loaded_record_pointer_8;
  unsigned __int8 saved_loaded_word_2;
  unsigned __int64 table_value_9;
  unsigned __int8 *loaded_record_pointer_9;
  unsigned int comparison_result_3;
  unsigned __int64 table_value_10;
  unsigned __int8 *loaded_record_pointer_10;
  unsigned __int64 table_value_11;
  unsigned __int64 integer_difference_2;
  __int64 loaded_word_5;
  unsigned __int64 table_value_12;
  unsigned __int64 table_value_13;
  __int64 loaded_word_6;
  char *loaded_record_pointer_11;
  char input_byte_2;
  char xor_value;
  int scaled_index;
  unsigned __int64 table_value_14;
  char *loaded_record_pointer_12;
  char saved_input_byte;
  char saved_input_byte_2;
  unsigned __int64 table_value_15;
  char *loaded_record_pointer_13;
  char selection_flag_3;
  unsigned __int64 table_value_16;
  char *loaded_record_pointer_14;
  unsigned int comparison_result_4;
  unsigned __int64 table_value_17;
  char *loaded_record_pointer_15;
  unsigned int comparison_result_5;
  unsigned __int64 table_value_18;
  char *loaded_record_pointer_16;
  int integer_difference_3;
  unsigned __int64 integer_difference_4;
  __int64 loaded_word_7;
  unsigned __int64 integer_sum;
  char *loaded_record_pointer_17;
  unsigned __int64 integer_difference_5;
  __int64 loaded_word_8;
  _BYTE *byte_cursor_3;
  _BYTE *saved_buffer_cursor;
  bool comparison_result_6;
  int comparison_result_7;
  int saved_remaining_count;
  __int64 input_value;

  input_value = a3;
  loaded_word = *a2;
  if ( !loaded_word || !a2[3] )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 7;
  }
  table_value = a2[2];
  a2[2] = table_value + 1;
  if ( a2[1] && (unsigned __int64)(table_value + 1) > a2[1]
    || (loaded_record_pointer = *(unsigned __int8 **)(loaded_word + 16), loaded_record_pointer == *(unsigned __int8 **)(loaded_word + 8)) )
  {
    loaded_word_2 = 0;
  }
  else
  {
    loaded_word_2 = *loaded_record_pointer;
    *(_QWORD *)(loaded_word + 16) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  }
  LOBYTE(saved_remaining_count) = loaded_word_2;
  saved_loaded_word = loaded_word_2;
  if ( (unsigned int)crt_isctype_l(loaded_word_2, 8, a1) )
  {
    do
    {
      table_value_2 = a2[2] + 1LL;
      a2[2] = table_value_2;
      if ( a2[1] && table_value_2 > a2[1] || (loaded_record_pointer_2 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_2 == *(unsigned __int8 **)(*a2 + 8LL)) )
      {
        loaded_word_2 = 0;
      }
      else
      {
        loaded_word_2 = *loaded_record_pointer_2;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
      }
      LOBYTE(saved_remaining_count) = loaded_word_2;
    }
    while ( (unsigned int)crt_isctype_l(loaded_word_2, 8, a1) );
    saved_loaded_word = loaded_word_2;
  }
  saved_comparison_result = (int *)input_value;
  byte_cursor = (_BYTE *)(input_value + 776);
  *(_BYTE *)(input_value + 776) = saved_loaded_word == 45;
  if ( saved_loaded_word == 45 || saved_loaded_word == 43 )
  {
    table_value_3 = a2[2] + 1LL;
    a2[2] = table_value_3;
    if ( a2[1] && table_value_3 > a2[1] || (loaded_record_pointer_3 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_3 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      loaded_word_2 = 0;
    }
    else
    {
      loaded_word_2 = *loaded_record_pointer_3;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    }
    LOBYTE(saved_remaining_count) = loaded_word_2;
    saved_loaded_word = loaded_word_2;
  }
  if ( ((saved_loaded_word - 73) & 0xDF) == 0 )
    return sub_140229560((char *)&saved_remaining_count, (__int64)a2, table_value);
  if ( ((saved_loaded_word - 78) & 0xDF) == 0 )
    return sub_140229F5C((char *)&saved_remaining_count, a2, table_value);
  selection_flag = 0;
  if ( saved_loaded_word != 48 )
    goto LABEL_46;
  table_value_4 = a2[2];
  a2[2] = table_value_4 + 1;
  if ( a2[1] && (unsigned __int64)(table_value_4 + 1) > a2[1] || (loaded_record_pointer_4 = *(char **)(*a2 + 16LL), loaded_record_pointer_4 == *(char **)(*a2 + 8LL)) )
  {
    input_byte = 0;
LABEL_41:
    integer_difference = a2[2] - 1LL;
    a2[2] = integer_difference;
    if ( (!a2[1] || integer_difference <= a2[1]) && input_byte != -1 && input_byte != 0 )
    {
      loaded_word_3 = *(_QWORD *)(*a2 + 16LL);
      if ( loaded_word_3 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16LL) = loaded_word_3 - 1;
    }
    goto LABEL_46;
  }
  input_byte = *loaded_record_pointer_4;
  *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
  if ( input_byte != 120 && input_byte != 88 )
    goto LABEL_41;
  selection_flag = 1;
  table_value_5 = a2[2] + 1LL;
  a2[2] = table_value_5;
  if ( a2[1] && table_value_5 > a2[1] || (loaded_record_pointer_5 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_5 == *(unsigned __int8 **)(*a2 + 8LL)) )
  {
    loaded_word_2 = 0;
  }
  else
  {
    loaded_word_2 = *loaded_record_pointer_5;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
  }
  table_value = table_value_4;
LABEL_46:
  remaining_count = 0;
  byte_cursor_2 = saved_comparison_result + 2;
  selection_flag_2 = 0;
  buffer_cursor = saved_comparison_result + 2;
  if ( loaded_word_2 == 48 )
  {
    selection_flag_2 = 1;
    while ( 1 )
    {
      table_value_6 = a2[2] + 1LL;
      a2[2] = table_value_6;
      if ( a2[1] )
      {
        if ( table_value_6 > a2[1] )
          break;
      }
      loaded_record_pointer_6 = *(unsigned __int8 **)(*a2 + 16LL);
      if ( loaded_record_pointer_6 == *(unsigned __int8 **)(*a2 + 8LL) )
        break;
      loaded_word_2 = *loaded_record_pointer_6;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
      if ( loaded_word_2 != 48 )
        goto LABEL_54;
    }
    loaded_word_2 = 0;
  }
LABEL_54:
  comparison_result = selection_flag != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( (unsigned __int8)(loaded_word_2 - 48) > 9u )
    {
      if ( (unsigned __int8)(loaded_word_2 - 97) > 0x19u )
        comparison_result_2 = (unsigned __int8)(loaded_word_2 - 65) > 0x19u ? -1 : (char)loaded_word_2 - 55;
      else
        comparison_result_2 = (char)loaded_word_2 - 87;
    }
    else
    {
      comparison_result_2 = (char)loaded_word_2 - 48;
    }
    if ( comparison_result_2 > comparison_result )
      break;
    selection_flag_2 = 1;
    if ( buffer_cursor != byte_cursor )
      *buffer_cursor++ = comparison_result_2;
    ++remaining_count;
    table_value_7 = a2[2] + 1LL;
    comparison_result_6 = a2[1] == 0;
    a2[2] = table_value_7;
    if ( !comparison_result_6 && table_value_7 > a2[1] || (loaded_record_pointer_7 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_7 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      loaded_word_2 = 0;
    }
    else
    {
      loaded_word_2 = *loaded_record_pointer_7;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
    }
  }
  loaded_word_4 = *(_QWORD *)a1;
  saved_remaining_count = remaining_count;
  if ( loaded_word_2 == ***(_BYTE ***)(loaded_word_4 + 248) )
  {
    table_value_8 = a2[2] + 1LL;
    a2[2] = table_value_8;
    if ( a2[1] && table_value_8 > a2[1] || (loaded_record_pointer_8 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_8 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      loaded_word_2 = 0;
    }
    else
    {
      loaded_word_2 = *loaded_record_pointer_8;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
    }
    saved_loaded_word_2 = loaded_word_2;
    if ( buffer_cursor == byte_cursor_2 && loaded_word_2 == 48 )
    {
      selection_flag_2 = 1;
      while ( 1 )
      {
        --remaining_count;
        table_value_9 = a2[2] + 1LL;
        saved_remaining_count = remaining_count;
        a2[2] = table_value_9;
        if ( a2[1] )
        {
          if ( table_value_9 > a2[1] )
            break;
        }
        loaded_record_pointer_9 = *(unsigned __int8 **)(*a2 + 16LL);
        if ( loaded_record_pointer_9 == *(unsigned __int8 **)(*a2 + 8LL) )
          break;
        loaded_word_2 = *loaded_record_pointer_9;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
        saved_loaded_word_2 = loaded_word_2;
        if ( loaded_word_2 != 48 )
          goto LABEL_85;
      }
      loaded_word_2 = 0;
      saved_loaded_word_2 = 0;
    }
LABEL_85:
    while ( 1 )
    {
      if ( (unsigned __int8)(saved_loaded_word_2 - 48) > 9u )
      {
        if ( (unsigned __int8)(saved_loaded_word_2 - 97) > 0x19u )
          comparison_result_3 = (unsigned __int8)(saved_loaded_word_2 - 65) > 0x19u ? -1 : (char)saved_loaded_word_2 - 55;
        else
          comparison_result_3 = (char)saved_loaded_word_2 - 87;
      }
      else
      {
        comparison_result_3 = (char)saved_loaded_word_2 - 48;
      }
      if ( comparison_result_3 > comparison_result )
        break;
      selection_flag_2 = 1;
      if ( buffer_cursor != byte_cursor )
        *buffer_cursor++ = comparison_result_3;
      table_value_10 = a2[2] + 1LL;
      a2[2] = table_value_10;
      if ( a2[1] && table_value_10 > a2[1] || (loaded_record_pointer_10 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_10 == *(unsigned __int8 **)(*a2 + 8LL)) )
      {
        loaded_word_2 = 0;
      }
      else
      {
        loaded_word_2 = *loaded_record_pointer_10;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
      }
      saved_loaded_word_2 = loaded_word_2;
    }
  }
  table_value_11 = a2[1];
  integer_difference_2 = a2[2] - 1LL;
  a2[2] = integer_difference_2;
  if ( !selection_flag_2 )
  {
    if ( !table_value_11 || integer_difference_2 <= table_value_11 )
    {
      if ( loaded_word_2 )
      {
        if ( loaded_word_2 != 0xFF )
        {
          loaded_word_5 = *(_QWORD *)(*a2 + 16LL);
          if ( loaded_word_5 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16LL) = loaded_word_5 - 1;
            integer_difference_2 = a2[2];
          }
        }
      }
    }
    if ( table_value == integer_difference_2 )
    {
      if ( !selection_flag )
        return 7;
      return 2;
    }
LABEL_189:
    *(_BYTE *)a2[3] = 0;
    return 7;
  }
  if ( !table_value_11 || (table_value_12 = integer_difference_2, table_value_13 = table_value_11, integer_difference_2 <= table_value_11) )
  {
    table_value_12 = integer_difference_2;
    table_value_13 = table_value_11;
    if ( loaded_word_2 )
    {
      if ( loaded_word_2 != 0xFF )
      {
        loaded_word_6 = *(_QWORD *)(*a2 + 16LL);
        if ( loaded_word_6 != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16LL) = loaded_word_6 - 1;
          table_value_12 = a2[2];
          table_value_13 = a2[1];
        }
      }
    }
  }
  a2[2] = table_value_12 + 1;
  if ( table_value_13 && table_value_12 + 1 > table_value_13 || (loaded_record_pointer_11 = *(char **)(*a2 + 16LL), loaded_record_pointer_11 == *(char **)(*a2 + 8LL)) )
  {
    xor_value = 0;
    input_byte_2 = 0;
    goto LABEL_127;
  }
  input_byte_2 = *loaded_record_pointer_11;
  *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1);
  xor_value = 0;
  switch ( input_byte_2 )
  {
    case 'E':
      goto LABEL_125;
    case 'P':
LABEL_124:
      xor_value = selection_flag;
      break;
    case 'e':
LABEL_125:
      xor_value = selection_flag ^ 1;
      break;
    case 'p':
      goto LABEL_124;
  }
LABEL_127:
  scaled_index = 0;
  if ( xor_value )
  {
    table_value_14 = a2[2] + 1LL;
    a2[2] = table_value_14;
    if ( a2[1] && table_value_14 > a2[1] || (loaded_record_pointer_12 = *(char **)(*a2 + 16LL), loaded_record_pointer_12 == *(char **)(*a2 + 8LL)) )
    {
      input_byte_2 = 0;
      saved_input_byte = 0;
      saved_input_byte_2 = 0;
    }
    else
    {
      input_byte_2 = *loaded_record_pointer_12;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_12 + 1);
      saved_input_byte = input_byte_2;
      saved_input_byte_2 = input_byte_2;
      if ( input_byte_2 == 43 || input_byte_2 == 45 )
      {
        table_value_15 = a2[2] + 1LL;
        a2[2] = table_value_15;
        if ( a2[1] && table_value_15 > a2[1] || (loaded_record_pointer_13 = *(char **)(*a2 + 16LL), loaded_record_pointer_13 == *(char **)(*a2 + 8LL)) )
        {
          input_byte_2 = 0;
        }
        else
        {
          input_byte_2 = *loaded_record_pointer_13;
          *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_13 + 1);
        }
        saved_input_byte = input_byte_2;
      }
    }
    selection_flag_3 = 0;
    if ( input_byte_2 == 48 )
    {
      selection_flag_3 = 1;
      while ( 1 )
      {
        table_value_16 = a2[2] + 1LL;
        a2[2] = table_value_16;
        if ( a2[1] )
        {
          if ( table_value_16 > a2[1] )
            break;
        }
        loaded_record_pointer_14 = *(char **)(*a2 + 16LL);
        if ( loaded_record_pointer_14 == *(char **)(*a2 + 8LL) )
          break;
        input_byte_2 = *loaded_record_pointer_14;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_14 + 1);
        saved_input_byte = input_byte_2;
        if ( input_byte_2 != 48 )
          goto LABEL_148;
      }
      saved_input_byte = 0;
      input_byte_2 = 0;
    }
LABEL_148:
    while ( 1 )
    {
      if ( (unsigned __int8)(input_byte_2 - 48) > 9u )
      {
        if ( (unsigned __int8)(input_byte_2 - 97) > 0x19u )
          comparison_result_4 = (unsigned __int8)(input_byte_2 - 65) > 0x19u ? -1 : input_byte_2 - 55;
        else
          comparison_result_4 = input_byte_2 - 87;
      }
      else
      {
        comparison_result_4 = input_byte_2 - 48;
      }
      if ( comparison_result_4 >= 0xA )
        break;
      selection_flag_3 = 1;
      scaled_index = comparison_result_4 + 10 * scaled_index;
      if ( scaled_index > 5200 )
      {
        scaled_index = 5201;
        break;
      }
      table_value_17 = a2[2] + 1LL;
      a2[2] = table_value_17;
      if ( a2[1] && table_value_17 > a2[1] || (loaded_record_pointer_15 = *(char **)(*a2 + 16LL), loaded_record_pointer_15 == *(char **)(*a2 + 8LL)) )
      {
        input_byte_2 = 0;
      }
      else
      {
        input_byte_2 = *loaded_record_pointer_15;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_15 + 1);
      }
      saved_input_byte = input_byte_2;
    }
    while ( 1 )
    {
      if ( saved_input_byte < 48 || input_byte_2 > 57 )
      {
        if ( (unsigned __int8)(input_byte_2 - 97) > 0x19u )
          comparison_result_5 = (unsigned __int8)(input_byte_2 - 65) > 0x19u ? -1 : input_byte_2 - 55;
        else
          comparison_result_5 = input_byte_2 - 87;
      }
      else
      {
        comparison_result_5 = input_byte_2 - 48;
      }
      if ( comparison_result_5 >= 0xA )
        break;
      table_value_18 = a2[2] + 1LL;
      a2[2] = table_value_18;
      if ( a2[1] && table_value_18 > a2[1] || (loaded_record_pointer_16 = *(char **)(*a2 + 16LL), loaded_record_pointer_16 == *(char **)(*a2 + 8LL)) )
      {
        input_byte_2 = 0;
      }
      else
      {
        input_byte_2 = *loaded_record_pointer_16;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_16 + 1);
      }
      saved_input_byte = input_byte_2;
    }
    integer_difference_3 = -scaled_index;
    if ( saved_input_byte_2 != 45 )
      integer_difference_3 = scaled_index;
    scaled_index = integer_difference_3;
    if ( !selection_flag_3 )
    {
      integer_difference_4 = a2[2] - 1LL;
      a2[2] = integer_difference_4;
      if ( !a2[1] || integer_difference_4 <= a2[1] )
      {
        if ( saved_input_byte )
        {
          if ( saved_input_byte != -1 )
          {
            loaded_word_7 = *(_QWORD *)(*a2 + 16LL);
            if ( loaded_word_7 != *(_QWORD *)*a2 )
            {
              *(_QWORD *)(*a2 + 16LL) = loaded_word_7 - 1;
              integer_difference_4 = a2[2];
            }
          }
        }
      }
      if ( table_value_12 != integer_difference_4 )
        goto LABEL_189;
      integer_sum = integer_difference_4 + 1;
      a2[2] = integer_sum;
      if ( a2[1] && integer_sum > a2[1] || (loaded_record_pointer_17 = *(char **)(*a2 + 16LL), loaded_record_pointer_17 == *(char **)(*a2 + 8LL)) )
      {
        input_byte_2 = 0;
      }
      else
      {
        input_byte_2 = *loaded_record_pointer_17;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_17 + 1);
      }
    }
    saved_comparison_result = (int *)input_value;
    remaining_count = saved_remaining_count;
  }
  integer_difference_5 = a2[2] - 1LL;
  a2[2] = integer_difference_5;
  if ( (!a2[1] || integer_difference_5 <= a2[1]) && input_byte_2 != -1 && input_byte_2 != 0 )
  {
    loaded_word_8 = *(_QWORD *)(*a2 + 16LL);
    if ( loaded_word_8 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = loaded_word_8 - 1;
  }
  if ( buffer_cursor == byte_cursor_2 )
    return 2;
  while ( 1 )
  {
    byte_cursor_3 = buffer_cursor - 1;
    saved_buffer_cursor = buffer_cursor;
    comparison_result_6 = *(buffer_cursor - 1) == 0;
    if ( *(buffer_cursor - 1) )
      break;
    --buffer_cursor;
    if ( byte_cursor_3 == byte_cursor_2 )
    {
      comparison_result_6 = *byte_cursor_3 == 0;
      break;
    }
  }
  if ( !comparison_result_6 )
    byte_cursor_3 = saved_buffer_cursor;
  if ( byte_cursor_3 == byte_cursor_2 )
    return 2;
  if ( scaled_index <= 5200 )
  {
    if ( scaled_index < -5200 )
      return 8;
    comparison_result_7 = remaining_count * (selection_flag != 0 ? 4 : 1) + scaled_index;
    if ( comparison_result_7 <= 5200 )
    {
      if ( comparison_result_7 >= -5200 )
      {
        *saved_comparison_result = comparison_result_7;
        saved_comparison_result[1] = (_DWORD)buffer_cursor - (_DWORD)byte_cursor_2;
        return selection_flag;
      }
      return 8;
    }
  }
  return 9;
}

//----- (00000001402280D0) ----------------------------------------------------
__int64            sub_1402280D0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 loaded_word;
  __int64 table_value;
  unsigned __int16 loaded_word_2;
  unsigned __int16 *loaded_record_pointer;
  __int16 loaded_word_3;
  unsigned __int16 i;
  unsigned __int64 table_value_2;
  __int16 *loaded_record_pointer_2;
  __int16 loaded_word_4;
  __int64 cached_input_value;
  _BYTE *byte_cursor;
  unsigned __int64 table_value_3;
  __int16 *loaded_record_pointer_3;
  char selection_flag;
  unsigned __int64 table_value_4;
  __int16 loaded_word_5;
  __int16 *loaded_record_pointer_4;
  unsigned __int64 table_value_5;
  unsigned __int16 *loaded_record_pointer_5;
  unsigned __int64 integer_difference;
  __int64 loaded_word_6;
  _BYTE *buffer_cursor;
  int remaining_count;
  char selection_flag_2;
  int selection_code;
  unsigned __int64 table_value_6;
  unsigned __int16 *loaded_record_pointer_6;
  unsigned __int16 loaded_word_7;
  unsigned int comparison_result;
  unsigned int integer_difference_2;
  unsigned int integer_difference_3;
  int saved_loaded_word;
  unsigned __int64 table_value_7;
  unsigned __int16 *loaded_record_pointer_7;
  int *saved_comparison_result;
  unsigned __int64 cached_table_value;
  unsigned __int8 return_value;
  _BYTE *byte_cursor_2;
  unsigned __int64 table_value_8;
  unsigned __int16 loaded_word_8;
  unsigned __int16 *loaded_record_pointer_8;
  unsigned __int16 loaded_word_9;
  unsigned __int64 table_value_9;
  unsigned __int16 *loaded_record_pointer_9;
  unsigned int integer_difference_4;
  int selection_code_2;
  unsigned int integer_difference_5;
  int saved_loaded_word_2;
  unsigned __int64 table_value_10;
  unsigned __int16 *loaded_record_pointer_10;
  unsigned __int64 table_value_11;
  unsigned __int64 integer_difference_6;
  __int64 loaded_word_10;
  unsigned __int64 table_value_12;
  unsigned __int64 table_value_13;
  __int64 loaded_word_11;
  unsigned __int16 loaded_word_12;
  unsigned __int16 *loaded_record_pointer_11;
  char xor_value;
  int scaled_index;
  unsigned __int64 table_value_14;
  unsigned __int16 *loaded_record_pointer_12;
  unsigned __int16 loaded_word_13;
  unsigned __int16 loaded_word_14;
  unsigned __int64 table_value_15;
  unsigned __int16 *loaded_record_pointer_13;
  unsigned __int16 loaded_word_15;
  int selection_code_3;
  bool comparison_result_2;
  unsigned __int64 table_value_16;
  unsigned __int16 *loaded_record_pointer_14;
  unsigned int integer_difference_7;
  unsigned int integer_difference_8;
  int saved_loaded_word_3;
  unsigned __int64 table_value_17;
  unsigned __int16 *loaded_record_pointer_15;
  unsigned int integer_difference_9;
  int selection_code_4;
  unsigned int integer_difference_10;
  int saved_loaded_word_4;
  unsigned __int64 table_value_18;
  unsigned __int16 *loaded_record_pointer_16;
  unsigned __int64 integer_difference_11;
  __int64 loaded_word_16;
  unsigned __int64 integer_sum;
  unsigned __int16 *loaded_record_pointer_17;
  unsigned __int64 integer_difference_12;
  __int64 loaded_word_17;
  _BYTE *byte_cursor_3;
  _BYTE *saved_buffer_cursor;
  bool comparison_result_3;
  int comparison_result_4;
  int cached_scaled_index;
  unsigned __int16 loaded_word_18;
  int saved_remaining_count;
  unsigned __int64 cached_table_value_2;
  unsigned __int64 cached_integer_difference;
  _BYTE *saved_buffer_cursor_2;
  _BYTE *byte_cursor_4;
  __int16 saved_loaded_word_5;
  __int64 input_value;
  int selection_code_5;

  input_value = a3;
  loaded_word = *a2;
  if ( !loaded_word || !a2[3] )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 7;
  }
  table_value = a2[2];
  cached_table_value_2 = table_value;
  a2[2] = table_value + 1;
  if ( a2[1] && table_value + 1 > a2[1] )
  {
    loaded_word_2 = 0;
  }
  else
  {
    loaded_record_pointer = *(unsigned __int16 **)(loaded_word + 16);
    if ( loaded_record_pointer == *(unsigned __int16 **)(loaded_word + 8) || (loaded_word_2 = *loaded_record_pointer, *(_QWORD *)(loaded_word + 16) = (uint64)(uintptr_t)(loaded_record_pointer + 1), loaded_word_2 == 0xFFFF) )
      loaded_word_2 = 0;
  }
  loaded_word_3 = loaded_word_2;
  for ( i = loaded_word_2; ; i = loaded_word_3 )
  {
    saved_loaded_word_5 = loaded_word_2;
    if ( !(unsigned int)sub_140256E00(i, 8) )
      break;
    table_value_2 = a2[2] + 1;
    a2[2] = table_value_2;
    if ( a2[1] && table_value_2 > a2[1] )
    {
      loaded_word_3 = 0;
    }
    else
    {
      loaded_record_pointer_2 = *(__int16 **)(*a2 + 16);
      if ( loaded_record_pointer_2 == *(__int16 **)(*a2 + 8) || (loaded_word_4 = *loaded_record_pointer_2, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1), loaded_word_3 = loaded_word_4, loaded_word_4 == -1) )
        loaded_word_3 = 0;
    }
    loaded_word_2 = loaded_word_3;
  }
  cached_input_value = input_value;
  byte_cursor = (_BYTE *)(input_value + 776);
  *(_BYTE *)(input_value + 776) = loaded_word_3 == 45;
  if ( loaded_word_3 == 45 || loaded_word_3 == 43 )
  {
    table_value_3 = a2[2] + 1;
    a2[2] = table_value_3;
    if ( a2[1] && table_value_3 > a2[1] )
    {
      loaded_word_3 = 0;
    }
    else
    {
      loaded_record_pointer_3 = *(__int16 **)(*a2 + 16);
      if ( loaded_record_pointer_3 == *(__int16 **)(*a2 + 8) || (loaded_word_3 = *loaded_record_pointer_3, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1), loaded_word_3 == -1) )
        loaded_word_3 = 0;
    }
    loaded_word_2 = loaded_word_3;
    saved_loaded_word_5 = loaded_word_3;
  }
  if ( ((loaded_word_3 - 73) & 0xFFDF) == 0 )
    return sub_140229A30(&saved_loaded_word_5, a2, table_value);
  if ( ((loaded_word_3 - 78) & 0xFFDF) == 0 )
    return sub_14022A55C((unsigned __int16 *)&saved_loaded_word_5, a2, table_value);
  LOBYTE(saved_loaded_word_5) = 0;
  selection_flag = 0;
  if ( loaded_word_3 != 48 )
    goto LABEL_51;
  table_value_4 = a2[2];
  a2[2] = table_value_4 + 1;
  if ( a2[1] && table_value_4 + 1 > a2[1] )
  {
    loaded_word_5 = 0;
  }
  else
  {
    loaded_record_pointer_4 = *(__int16 **)(*a2 + 16);
    if ( loaded_record_pointer_4 == *(__int16 **)(*a2 + 8) || (loaded_word_5 = *loaded_record_pointer_4, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1), loaded_word_5 == -1) )
    {
      loaded_word_5 = 0;
    }
    else if ( ((loaded_word_5 - 88) & 0xFFDF) == 0 )
    {
      selection_flag = 1;
      table_value_5 = a2[2] + 1;
      LOBYTE(saved_loaded_word_5) = 1;
      a2[2] = table_value_5;
      if ( a2[1] && table_value_5 > a2[1] )
      {
        loaded_word_2 = 0;
      }
      else
      {
        loaded_record_pointer_5 = *(unsigned __int16 **)(*a2 + 16);
        if ( loaded_record_pointer_5 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_2 = *loaded_record_pointer_5, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1), loaded_word_2 == 0xFFFF) )
          loaded_word_2 = 0;
      }
      cached_table_value_2 = table_value_4;
      goto LABEL_51;
    }
  }
  integer_difference = a2[2] - 1;
  a2[2] = integer_difference;
  if ( (!a2[1] || integer_difference <= a2[1]) && (unsigned __int16)(loaded_word_5 - 1) <= 0xFFFDu )
  {
    loaded_word_6 = *(_QWORD *)(*a2 + 16);
    if ( loaded_word_6 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16) = loaded_word_6 - 2;
  }
LABEL_51:
  byte_cursor_4 = (_BYTE *)(cached_input_value + 8);
  buffer_cursor = (_BYTE *)(cached_input_value + 8);
  remaining_count = 0;
  selection_flag_2 = 0;
  selection_code = 48;
  if ( loaded_word_2 == 48 )
  {
    selection_flag_2 = 1;
    while ( 1 )
    {
      table_value_6 = a2[2] + 1;
      a2[2] = table_value_6;
      if ( a2[1] )
      {
        if ( table_value_6 > a2[1] )
          break;
      }
      loaded_record_pointer_6 = *(unsigned __int16 **)(*a2 + 16);
      if ( loaded_record_pointer_6 == *(unsigned __int16 **)(*a2 + 8) )
      {
        selection_code = 48;
        break;
      }
      loaded_word_7 = *loaded_record_pointer_6;
      *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
      selection_code = 48;
      if ( loaded_word_7 == 0xFFFF )
        break;
      loaded_word_2 = loaded_word_7;
      if ( loaded_word_7 != 48 )
        goto LABEL_62;
    }
    loaded_word_2 = 0;
  }
LABEL_62:
  selection_code_5 = 9;
  comparison_result = selection_flag != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( loaded_word_2 >= 0x30u )
    {
      if ( loaded_word_2 < 0x3Au )
        goto LABEL_65;
      if ( loaded_word_2 >= 0xFF10u )
      {
        if ( loaded_word_2 >= 0xFF1Au )
          integer_difference_2 = -1;
        else
          integer_difference_2 = loaded_word_2 - 65296;
LABEL_106:
        if ( integer_difference_2 != -1 )
          goto LABEL_113;
        goto LABEL_107;
      }
      if ( loaded_word_2 >= 0x660u )
      {
        if ( loaded_word_2 < 0x66Au )
        {
          integer_difference_2 = loaded_word_2 - 1632;
          goto LABEL_106;
        }
        if ( loaded_word_2 >= 0x6F0u )
        {
          if ( loaded_word_2 < 0x6FAu )
          {
            integer_difference_2 = loaded_word_2 - 1776;
            goto LABEL_106;
          }
          if ( loaded_word_2 >= 0x966u )
          {
            if ( loaded_word_2 < 0x970u )
            {
              integer_difference_2 = loaded_word_2 - 2406;
              goto LABEL_106;
            }
            if ( loaded_word_2 >= 0x9E6u )
            {
              if ( loaded_word_2 < 0x9F0u )
              {
                integer_difference_2 = loaded_word_2 - 2534;
                goto LABEL_106;
              }
              selection_code = 2662;
              if ( loaded_word_2 >= 0xA66u )
              {
                if ( loaded_word_2 < 0xA70u )
                  goto LABEL_65;
                selection_code = 2790;
                if ( loaded_word_2 >= 0xAE6u )
                {
                  if ( loaded_word_2 < 0xAF0u )
                    goto LABEL_65;
                  selection_code = 2918;
                  if ( loaded_word_2 >= 0xB66u )
                  {
                    if ( loaded_word_2 < 0xB70u )
                      goto LABEL_65;
                    selection_code = 3174;
                    if ( loaded_word_2 >= 0xC66u )
                    {
                      if ( loaded_word_2 < 0xC70u )
                        goto LABEL_65;
                      selection_code = 3302;
                      if ( loaded_word_2 >= 0xCE6u )
                      {
                        if ( loaded_word_2 < 0xCF0u
                          || (selection_code = 3430, loaded_word_2 >= 0xD66u)
                          && (loaded_word_2 < 0xD70u
                           || (selection_code = 3664, loaded_word_2 >= 0xE50u)
                           && (loaded_word_2 < 0xE5Au
                            || (selection_code = 3792, loaded_word_2 >= 0xED0u)
                            && (loaded_word_2 < 0xEDAu
                             || (selection_code = 3872, loaded_word_2 >= 0xF20u)
                             && (loaded_word_2 < 0xF2Au
                              || (selection_code = 4160, loaded_word_2 >= 0x1040u)
                              && (loaded_word_2 < 0x104Au
                               || (selection_code = 6112, loaded_word_2 >= 0x17E0u)
                               && (loaded_word_2 < 0x17EAu || (selection_code = 6160, (unsigned __int16)(loaded_word_2 - 6160) <= 9u))))))) )
                        {
LABEL_65:
                          integer_difference_2 = loaded_word_2 - selection_code;
                          goto LABEL_106;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_107:
    integer_difference_3 = loaded_word_2 - 97;
    if ( (unsigned int)loaded_word_2 - 65 <= 0x19 || integer_difference_3 <= 0x19 )
    {
      saved_loaded_word = loaded_word_2 - 32;
      if ( integer_difference_3 > 0x19 )
        saved_loaded_word = loaded_word_2;
      integer_difference_2 = saved_loaded_word - 55;
    }
    else
    {
      integer_difference_2 = -1;
    }
LABEL_113:
    if ( integer_difference_2 > comparison_result )
      break;
    selection_flag_2 = 1;
    if ( buffer_cursor != byte_cursor )
      *buffer_cursor++ = integer_difference_2;
    ++remaining_count;
    table_value_7 = a2[2] + 1;
    a2[2] = table_value_7;
    if ( a2[1] && table_value_7 > a2[1] )
    {
      loaded_word_2 = 0;
    }
    else
    {
      loaded_record_pointer_7 = *(unsigned __int16 **)(*a2 + 16);
      if ( loaded_record_pointer_7 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_2 = *loaded_record_pointer_7, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1), loaded_word_2 == 0xFFFF) )
        loaded_word_2 = 0;
    }
    selection_code = 48;
  }
  saved_comparison_result = (int *)input_value;
  cached_table_value = cached_table_value_2;
  return_value = saved_loaded_word_5;
  saved_remaining_count = remaining_count;
  byte_cursor_2 = (_BYTE *)(input_value + 8);
  saved_buffer_cursor_2 = buffer_cursor;
  if ( loaded_word_2 != ***(char ***)(*(_QWORD *)a1 + 248LL) )
    goto LABEL_202;
  table_value_8 = a2[2] + 1;
  a2[2] = table_value_8;
  if ( a2[1] && table_value_8 > a2[1] )
  {
    loaded_word_8 = 0;
  }
  else
  {
    loaded_record_pointer_8 = *(unsigned __int16 **)(*a2 + 16);
    if ( loaded_record_pointer_8 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_8 = *loaded_record_pointer_8, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1), loaded_word_8 == 0xFFFF) )
      loaded_word_8 = 0;
  }
  loaded_word_2 = loaded_word_8;
  loaded_word_9 = loaded_word_8;
  if ( buffer_cursor == byte_cursor_2 && loaded_word_8 == 48 )
  {
    selection_flag_2 = 1;
    while ( 1 )
    {
      --remaining_count;
      table_value_9 = a2[2] + 1;
      saved_remaining_count = remaining_count;
      a2[2] = table_value_9;
      if ( a2[1] )
      {
        if ( table_value_9 > a2[1] )
          break;
      }
      loaded_record_pointer_9 = *(unsigned __int16 **)(*a2 + 16);
      if ( loaded_record_pointer_9 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_9 = *loaded_record_pointer_9, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1), loaded_word_9 == 0xFFFF) )
      {
        loaded_word_9 = 0;
        goto LABEL_141;
      }
      loaded_word_2 = loaded_word_9;
      if ( loaded_word_9 != 48 )
        goto LABEL_142;
    }
    loaded_word_9 = 0;
LABEL_141:
    loaded_word_2 = 0;
  }
LABEL_142:
  while ( 2 )
  {
    if ( loaded_word_9 < 0x30u )
      goto LABEL_185;
    if ( loaded_word_9 < 0x3Au )
    {
      integer_difference_4 = loaded_word_9 - 48;
      goto LABEL_184;
    }
    if ( loaded_word_9 < 0xFF10u )
    {
      if ( loaded_word_9 >= 0x660u )
      {
        if ( loaded_word_9 < 0x66Au )
        {
          integer_difference_4 = loaded_word_9 - 1632;
          goto LABEL_184;
        }
        if ( loaded_word_9 >= 0x6F0u )
        {
          if ( loaded_word_9 < 0x6FAu )
          {
            integer_difference_4 = loaded_word_9 - 1776;
            goto LABEL_184;
          }
          selection_code_2 = 2406;
          if ( loaded_word_9 >= 0x966u )
          {
            if ( loaded_word_9 < 0x970u )
              goto LABEL_154;
            selection_code_2 = 2534;
            if ( loaded_word_9 >= 0x9E6u )
            {
              if ( loaded_word_9 < 0x9F0u )
                goto LABEL_154;
              selection_code_2 = 2662;
              if ( loaded_word_9 >= 0xA66u )
              {
                if ( loaded_word_9 < 0xA70u )
                  goto LABEL_154;
                selection_code_2 = 2790;
                if ( loaded_word_9 >= 0xAE6u )
                {
                  if ( loaded_word_9 < 0xAF0u )
                    goto LABEL_154;
                  selection_code_2 = 2918;
                  if ( loaded_word_9 >= 0xB66u )
                  {
                    if ( loaded_word_9 < 0xB70u )
                      goto LABEL_154;
                    selection_code_2 = 3174;
                    if ( loaded_word_9 >= 0xC66u )
                    {
                      if ( loaded_word_9 < 0xC70u )
                        goto LABEL_154;
                      selection_code_2 = 3302;
                      if ( loaded_word_9 >= 0xCE6u )
                      {
                        if ( loaded_word_9 < 0xCF0u
                          || (selection_code_2 = 3430, loaded_word_9 >= 0xD66u)
                          && (loaded_word_9 < 0xD70u
                           || (selection_code_2 = 3664, loaded_word_9 >= 0xE50u)
                           && (loaded_word_9 < 0xE5Au
                            || (selection_code_2 = 3792, loaded_word_9 >= 0xED0u)
                            && (loaded_word_9 < 0xEDAu
                             || (selection_code_2 = 3872, loaded_word_9 >= 0xF20u)
                             && (loaded_word_9 < 0xF2Au
                              || (selection_code_2 = 4160, loaded_word_9 >= 0x1040u)
                              && (loaded_word_9 < 0x104Au
                               || (selection_code_2 = 6112, loaded_word_9 >= 0x17E0u)
                               && (loaded_word_9 < 0x17EAu
                                || (selection_code_2 = 6160, (unsigned __int16)(loaded_word_9 - 6160) <= (unsigned __int16)selection_code_5))))))) )
                        {
LABEL_154:
                          integer_difference_4 = loaded_word_9 - selection_code_2;
                          goto LABEL_184;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_185;
    }
    if ( loaded_word_9 >= 0xFF1Au )
      integer_difference_4 = -1;
    else
      integer_difference_4 = loaded_word_9 - 65296;
LABEL_184:
    if ( integer_difference_4 == -1 )
    {
LABEL_185:
      integer_difference_5 = loaded_word_2 - 97;
      if ( (unsigned int)loaded_word_2 - 65 <= 0x19 || integer_difference_5 <= 0x19 )
      {
        saved_loaded_word_2 = loaded_word_2 - 32;
        if ( integer_difference_5 > 0x19 )
          saved_loaded_word_2 = loaded_word_2;
        integer_difference_4 = saved_loaded_word_2 - 55;
      }
      else
      {
        integer_difference_4 = -1;
      }
    }
    if ( integer_difference_4 <= comparison_result )
    {
      selection_flag_2 = 1;
      if ( buffer_cursor != byte_cursor )
        *buffer_cursor++ = integer_difference_4;
      table_value_10 = a2[2] + 1;
      a2[2] = table_value_10;
      if ( a2[1] && table_value_10 > a2[1] )
      {
        loaded_word_9 = 0;
      }
      else
      {
        loaded_record_pointer_10 = *(unsigned __int16 **)(*a2 + 16);
        if ( loaded_record_pointer_10 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_9 = *loaded_record_pointer_10, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1), loaded_word_9 == 0xFFFF) )
          loaded_word_9 = 0;
      }
      loaded_word_2 = loaded_word_9;
      continue;
    }
    break;
  }
  cached_table_value = cached_table_value_2;
  byte_cursor_2 = byte_cursor_4;
  return_value = saved_loaded_word_5;
  saved_comparison_result = (int *)input_value;
  saved_buffer_cursor_2 = buffer_cursor;
LABEL_202:
  table_value_11 = a2[1];
  integer_difference_6 = a2[2] - 1;
  a2[2] = integer_difference_6;
  if ( !selection_flag_2 )
  {
    if ( !table_value_11 || integer_difference_6 <= table_value_11 )
    {
      if ( loaded_word_2 )
      {
        if ( loaded_word_2 != 0xFFFF )
        {
          loaded_word_10 = *(_QWORD *)(*a2 + 16);
          if ( loaded_word_10 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16) = loaded_word_10 - 2;
            integer_difference_6 = a2[2];
          }
        }
      }
    }
    if ( cached_table_value != integer_difference_6 )
      goto LABEL_384;
    if ( !return_value )
      return 7;
    return 2;
  }
  if ( !table_value_11 || (cached_integer_difference = integer_difference_6, table_value_12 = integer_difference_6, table_value_13 = table_value_11, integer_difference_6 <= table_value_11) )
  {
    cached_integer_difference = integer_difference_6;
    table_value_12 = integer_difference_6;
    table_value_13 = table_value_11;
    if ( loaded_word_2 )
    {
      cached_integer_difference = integer_difference_6;
      if ( loaded_word_2 != 0xFFFF )
      {
        cached_integer_difference = integer_difference_6;
        loaded_word_11 = *(_QWORD *)(*a2 + 16);
        if ( loaded_word_11 != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16) = loaded_word_11 - 2;
          table_value_12 = a2[2];
          table_value_13 = a2[1];
          cached_integer_difference = table_value_12;
        }
      }
    }
  }
  a2[2] = table_value_12 + 1;
  if ( table_value_13 && table_value_12 + 1 > table_value_13 )
  {
    loaded_word_12 = 0;
  }
  else
  {
    loaded_record_pointer_11 = *(unsigned __int16 **)(*a2 + 16);
    if ( loaded_record_pointer_11 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_12 = *loaded_record_pointer_11, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1), loaded_word_12 == 0xFFFF) )
      loaded_word_12 = 0;
  }
  xor_value = 0;
  switch ( loaded_word_12 )
  {
    case 'E':
      goto LABEL_229;
    case 'P':
      goto LABEL_228;
    case 'e':
LABEL_229:
      xor_value = return_value ^ 1;
      break;
    case 'p':
LABEL_228:
      xor_value = return_value;
      break;
  }
  cached_scaled_index = 0;
  scaled_index = 0;
  if ( !xor_value )
    goto LABEL_392;
  table_value_14 = a2[2] + 1;
  a2[2] = table_value_14;
  if ( a2[1] && table_value_14 > a2[1] )
  {
    loaded_word_18 = 0;
    goto LABEL_246;
  }
  loaded_record_pointer_12 = *(unsigned __int16 **)(*a2 + 16);
  if ( loaded_record_pointer_12 == *(unsigned __int16 **)(*a2 + 8)
    || (loaded_word_13 = *loaded_record_pointer_12, loaded_word_18 = *loaded_record_pointer_12, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_12 + 1), loaded_word_13 == 0xFFFF) )
  {
    loaded_word_18 = 0;
LABEL_246:
    loaded_word_14 = 0;
    loaded_word_12 = 0;
  }
  else
  {
    loaded_word_12 = loaded_word_13;
    if ( loaded_word_13 == 43 || (loaded_word_14 = loaded_word_13, loaded_word_13 == 45) )
    {
      table_value_15 = a2[2] + 1;
      a2[2] = table_value_15;
      if ( a2[1] && table_value_15 > a2[1] )
      {
        loaded_word_14 = 0;
      }
      else
      {
        loaded_record_pointer_13 = *(unsigned __int16 **)(*a2 + 16);
        if ( loaded_record_pointer_13 == *(unsigned __int16 **)(*a2 + 8)
          || (loaded_word_15 = *loaded_record_pointer_13, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_13 + 1), loaded_word_14 = loaded_word_15, loaded_word_15 == 0xFFFF) )
        {
          loaded_word_14 = 0;
        }
      }
      loaded_word_12 = loaded_word_14;
    }
  }
  selection_code_3 = 48;
  LOBYTE(selection_code_5) = 0;
  comparison_result_2 = loaded_word_14 < 0x30u;
  if ( loaded_word_14 != 48 )
    goto LABEL_259;
  LOBYTE(selection_code_5) = 1;
  while ( 2 )
  {
    table_value_16 = a2[2] + 1;
    a2[2] = table_value_16;
    if ( a2[1] && table_value_16 > a2[1] )
    {
      loaded_word_14 = 0;
LABEL_257:
      loaded_word_12 = 0;
      goto LABEL_258;
    }
    loaded_record_pointer_14 = *(unsigned __int16 **)(*a2 + 16);
    if ( loaded_record_pointer_14 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_14 = *loaded_record_pointer_14, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_14 + 1), loaded_word_14 == 0xFFFF) )
    {
      loaded_word_14 = 0;
      goto LABEL_257;
    }
    selection_code_3 = 48;
    loaded_word_12 = loaded_word_14;
    comparison_result_2 = loaded_word_14 < 0x30u;
    if ( loaded_word_14 == 48 )
      continue;
    break;
  }
LABEL_259:
  while ( 2 )
  {
    if ( comparison_result_2 )
      goto LABEL_298;
    if ( loaded_word_14 < 0x3Au )
      goto LABEL_261;
    selection_code_3 = 65296;
    if ( loaded_word_14 < 0xFF10u )
    {
      selection_code_3 = 1632;
      if ( loaded_word_14 >= 0x660u )
      {
        if ( loaded_word_14 < 0x66Au )
          goto LABEL_261;
        selection_code_3 = 1776;
        if ( loaded_word_14 >= 0x6F0u )
        {
          if ( loaded_word_14 < 0x6FAu )
            goto LABEL_261;
          selection_code_3 = 2406;
          if ( loaded_word_14 >= 0x966u )
          {
            if ( loaded_word_14 < 0x970u )
              goto LABEL_261;
            selection_code_3 = 2534;
            if ( loaded_word_14 >= 0x9E6u )
            {
              if ( loaded_word_14 < 0x9F0u )
                goto LABEL_261;
              selection_code_3 = 2662;
              if ( loaded_word_14 >= 0xA66u )
              {
                if ( loaded_word_14 < 0xA70u )
                  goto LABEL_261;
                selection_code_3 = 2790;
                if ( loaded_word_14 >= 0xAE6u )
                {
                  if ( loaded_word_14 < 0xAF0u )
                    goto LABEL_261;
                  selection_code_3 = 2918;
                  if ( loaded_word_14 >= 0xB66u )
                  {
                    if ( loaded_word_14 < 0xB70u )
                      goto LABEL_261;
                    selection_code_3 = 3174;
                    if ( loaded_word_14 >= 0xC66u )
                    {
                      if ( loaded_word_14 < 0xC70u )
                        goto LABEL_261;
                      selection_code_3 = 3302;
                      if ( loaded_word_14 >= 0xCE6u )
                      {
                        if ( loaded_word_14 < 0xCF0u )
                          goto LABEL_261;
                        selection_code_3 = 3430;
                        if ( loaded_word_14 >= 0xD66u )
                        {
                          if ( loaded_word_14 < 0xD70u )
                            goto LABEL_261;
                          selection_code_3 = 3664;
                          if ( loaded_word_14 >= 0xE50u )
                          {
                            if ( loaded_word_14 < 0xE5Au )
                              goto LABEL_261;
                            selection_code_3 = 3792;
                            if ( loaded_word_14 >= 0xED0u )
                            {
                              if ( loaded_word_14 < 0xEDAu )
                                goto LABEL_261;
                              selection_code_3 = 3872;
                              if ( loaded_word_14 >= 0xF20u )
                              {
                                if ( loaded_word_14 < 0xF2Au )
                                  goto LABEL_261;
                                selection_code_3 = 4160;
                                if ( loaded_word_14 >= 0x1040u )
                                {
                                  if ( loaded_word_14 < 0x104Au )
                                    goto LABEL_261;
                                  selection_code_3 = 6112;
                                  if ( loaded_word_14 >= 0x17E0u )
                                  {
                                    if ( loaded_word_14 < 0x17EAu )
                                      goto LABEL_261;
                                    if ( (unsigned __int16)(loaded_word_14 - 6160) <= 9u )
                                    {
                                      selection_code_3 = 6160;
                                      goto LABEL_261;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_298;
    }
    if ( loaded_word_14 < 0xFF1Au )
LABEL_261:
      integer_difference_7 = loaded_word_14 - selection_code_3;
    else
      integer_difference_7 = -1;
    if ( integer_difference_7 == -1 )
    {
LABEL_298:
      integer_difference_8 = loaded_word_12 - 97;
      if ( (unsigned int)loaded_word_12 - 65 <= 0x19 || integer_difference_8 <= 0x19 )
      {
        saved_loaded_word_3 = loaded_word_12 - 32;
        if ( integer_difference_8 > 0x19 )
          saved_loaded_word_3 = loaded_word_12;
        integer_difference_7 = saved_loaded_word_3 - 55;
      }
      else
      {
        integer_difference_7 = -1;
      }
    }
    if ( integer_difference_7 >= 0xA )
      goto LABEL_314;
    LOBYTE(selection_code_5) = 1;
    scaled_index = integer_difference_7 + 10 * scaled_index;
    cached_scaled_index = scaled_index;
    if ( scaled_index <= 5200 )
    {
      table_value_17 = a2[2] + 1;
      a2[2] = table_value_17;
      if ( a2[1] && table_value_17 > a2[1] )
      {
        loaded_word_14 = 0;
      }
      else
      {
        loaded_record_pointer_15 = *(unsigned __int16 **)(*a2 + 16);
        if ( loaded_record_pointer_15 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_14 = *loaded_record_pointer_15, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_15 + 1), loaded_word_14 == 0xFFFF) )
          loaded_word_14 = 0;
      }
      loaded_word_12 = loaded_word_14;
LABEL_258:
      selection_code_3 = 48;
      comparison_result_2 = loaded_word_14 < 0x30u;
      continue;
    }
    break;
  }
  cached_scaled_index = 5201;
LABEL_314:
  while ( 2 )
  {
    if ( loaded_word_12 < 0x30u )
      goto LABEL_361;
    if ( loaded_word_12 < 0x3Au )
    {
      integer_difference_9 = loaded_word_12 - 48;
      goto LABEL_360;
    }
    if ( loaded_word_12 < 0xFF10u )
    {
      if ( loaded_word_12 >= 0x660u )
      {
        if ( loaded_word_12 < 0x66Au )
        {
          integer_difference_9 = loaded_word_12 - 1632;
          goto LABEL_360;
        }
        if ( loaded_word_12 >= 0x6F0u )
        {
          if ( loaded_word_12 < 0x6FAu )
          {
            integer_difference_9 = loaded_word_12 - 1776;
            goto LABEL_360;
          }
          if ( loaded_word_12 >= 0x966u )
          {
            if ( loaded_word_12 < 0x970u )
            {
              integer_difference_9 = loaded_word_12 - 2406;
              goto LABEL_360;
            }
            if ( loaded_word_12 >= 0x9E6u )
            {
              if ( loaded_word_12 < 0x9F0u )
              {
                integer_difference_9 = loaded_word_12 - 2534;
                goto LABEL_360;
              }
              if ( loaded_word_12 >= 0xA66u )
              {
                if ( loaded_word_12 < 0xA70u )
                {
                  integer_difference_9 = loaded_word_12 - 2662;
                  goto LABEL_360;
                }
                if ( loaded_word_12 >= 0xAE6u )
                {
                  if ( loaded_word_12 < 0xAF0u )
                  {
                    integer_difference_9 = loaded_word_12 - 2790;
                    goto LABEL_360;
                  }
                  selection_code_4 = 2918;
                  if ( loaded_word_12 >= 0xB66u )
                  {
                    if ( loaded_word_12 < 0xB70u )
                      goto LABEL_338;
                    selection_code_4 = 3174;
                    if ( loaded_word_12 >= 0xC66u )
                    {
                      if ( loaded_word_12 < 0xC70u )
                        goto LABEL_338;
                      selection_code_4 = 3302;
                      if ( loaded_word_12 >= 0xCE6u )
                      {
                        if ( loaded_word_12 < 0xCF0u
                          || (selection_code_4 = 3430, loaded_word_12 >= 0xD66u)
                          && (loaded_word_12 < 0xD70u
                           || (selection_code_4 = 3664, loaded_word_12 >= 0xE50u)
                           && (loaded_word_12 < 0xE5Au
                            || (selection_code_4 = 3792, loaded_word_12 >= 0xED0u)
                            && (loaded_word_12 < 0xEDAu
                             || (selection_code_4 = 3872, loaded_word_12 >= 0xF20u)
                             && (loaded_word_12 < 0xF2Au
                              || (selection_code_4 = 4160, loaded_word_12 >= 0x1040u)
                              && (loaded_word_12 < 0x104Au
                               || (selection_code_4 = 6112, loaded_word_12 >= 0x17E0u)
                               && (loaded_word_12 < 0x17EAu || (selection_code_4 = 6160, (unsigned __int16)(loaded_word_12 - 6160) <= 9u))))))) )
                        {
LABEL_338:
                          integer_difference_9 = loaded_word_12 - selection_code_4;
                          goto LABEL_360;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_361;
    }
    if ( loaded_word_12 >= 0xFF1Au )
      integer_difference_9 = -1;
    else
      integer_difference_9 = loaded_word_12 - 65296;
LABEL_360:
    if ( integer_difference_9 == -1 )
    {
LABEL_361:
      integer_difference_10 = loaded_word_12 - 97;
      if ( (unsigned int)loaded_word_12 - 65 <= 0x19 || integer_difference_10 <= 0x19 )
      {
        saved_loaded_word_4 = loaded_word_12 - 32;
        if ( integer_difference_10 > 0x19 )
          saved_loaded_word_4 = loaded_word_12;
        integer_difference_9 = saved_loaded_word_4 - 55;
      }
      else
      {
        integer_difference_9 = -1;
      }
    }
    if ( integer_difference_9 < 0xA )
    {
      table_value_18 = a2[2] + 1;
      a2[2] = table_value_18;
      if ( a2[1] && table_value_18 > a2[1] )
      {
        loaded_word_12 = 0;
      }
      else
      {
        loaded_record_pointer_16 = *(unsigned __int16 **)(*a2 + 16);
        if ( loaded_record_pointer_16 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_12 = *loaded_record_pointer_16, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_16 + 1), loaded_word_12 == 0xFFFF) )
          loaded_word_12 = 0;
      }
      continue;
    }
    break;
  }
  scaled_index = -cached_scaled_index;
  buffer_cursor = saved_buffer_cursor_2;
  if ( loaded_word_18 != 45 )
    scaled_index = cached_scaled_index;
  byte_cursor_2 = byte_cursor_4;
  return_value = saved_loaded_word_5;
  if ( !(_BYTE)selection_code_5 )
  {
    integer_difference_11 = a2[2] - 1;
    a2[2] = integer_difference_11;
    if ( !a2[1] || integer_difference_11 <= a2[1] )
    {
      if ( loaded_word_12 )
      {
        if ( loaded_word_12 != 0xFFFF )
        {
          loaded_word_16 = *(_QWORD *)(*a2 + 16);
          if ( loaded_word_16 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16) = loaded_word_16 - 2;
            integer_difference_11 = a2[2];
          }
        }
      }
    }
    if ( cached_integer_difference != integer_difference_11 )
    {
LABEL_384:
      *(_BYTE *)a2[3] = 0;
      return 7;
    }
    integer_sum = integer_difference_11 + 1;
    a2[2] = integer_sum;
    if ( a2[1] && integer_sum > a2[1] )
    {
      loaded_word_12 = 0;
    }
    else
    {
      loaded_record_pointer_17 = *(unsigned __int16 **)(*a2 + 16);
      if ( loaded_record_pointer_17 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_12 = *loaded_record_pointer_17, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_17 + 1), loaded_word_12 == 0xFFFF) )
        loaded_word_12 = 0;
    }
  }
  saved_comparison_result = (int *)input_value;
LABEL_392:
  integer_difference_12 = a2[2] - 1;
  a2[2] = integer_difference_12;
  if ( (!a2[1] || integer_difference_12 <= a2[1]) && (unsigned __int16)(loaded_word_12 - 1) <= 0xFFFDu )
  {
    loaded_word_17 = *(_QWORD *)(*a2 + 16);
    if ( loaded_word_17 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16) = loaded_word_17 - 2;
  }
  if ( buffer_cursor == byte_cursor_2 )
    return 2;
  while ( 1 )
  {
    byte_cursor_3 = buffer_cursor - 1;
    saved_buffer_cursor = buffer_cursor;
    comparison_result_3 = *(buffer_cursor - 1) == 0;
    if ( *(buffer_cursor - 1) )
      break;
    --buffer_cursor;
    if ( byte_cursor_3 == byte_cursor_2 )
    {
      comparison_result_3 = *byte_cursor_3 == 0;
      break;
    }
  }
  if ( !comparison_result_3 )
    byte_cursor_3 = saved_buffer_cursor;
  if ( byte_cursor_3 == byte_cursor_2 )
    return 2;
  if ( scaled_index > 5200 )
    return 9;
  if ( scaled_index < -5200 )
    return 8;
  comparison_result_4 = saved_remaining_count * (return_value != 0 ? 4 : 1) + scaled_index;
  if ( comparison_result_4 > 5200 )
    return 9;
  if ( comparison_result_4 >= -5200 )
  {
    *saved_comparison_result = comparison_result_4;
    saved_comparison_result[1] = (_DWORD)buffer_cursor - (_DWORD)byte_cursor_2;
    return return_value;
  }
  return 8;
}

//----- (00000001402292F0) ----------------------------------------------------
__int64            sub_1402292F0(char *a1, __int64 a2, __int64 a3)
{
  __int64 element_index;
  char saved_getc_nolock_result;
  char input_byte;
  unsigned int unused_written_slot;
  unsigned __int64 loaded_word;
  bool comparison_result;
  FILE **loaded_word_2;
  int getc_nolock_result;
  unsigned __int64 loaded_word_3;
  unsigned __int64 loaded_word_4;
  unsigned __int64 loaded_word_5;
  unsigned __int64 loaded_word_6;
  int saved_input_byte;
  FILE **loaded_word_7;
  FILE **loaded_word_8;
  int getc_nolock_result_2;
  unsigned __int64 loaded_word_9;
  FILE **loaded_word_10;
  __int64 element_index_2;
  int getc_nolock_result_3;
  unsigned __int64 loaded_word_11;
  FILE **loaded_word_12;
  unsigned __int64 loaded_word_13;
  FILE **loaded_word_14;
  unsigned __int64 loaded_word_15;
  FILE **loaded_word_16;

  element_index = 0;
  saved_getc_nolock_result = *a1;
  input_byte = *a1;
  unused_written_slot = 3;
  do
  {
    if ( saved_getc_nolock_result != byte_140285934[element_index] && saved_getc_nolock_result != byte_140285934[element_index + 4] )
    {
      loaded_word_9 = *(_QWORD *)(a2 + 16) - 1LL;
      comparison_result = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = loaded_word_9;
      if ( (comparison_result || loaded_word_9 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(input_byte + 1) > 1u )
      {
        loaded_word_10 = *(FILE ***)a2;
        if ( input_byte != -1 )
        {
          loaded_word_10[1] = (FILE *)((char *)loaded_word_10[1] - 1);
          sub_14020CE90(input_byte, (__int64)*loaded_word_10);
        }
      }
      *a1 = 0;
      if ( a3 != *(_QWORD *)(a2 + 16) )
        **(_BYTE **)(a2 + 24) = 0;
      return 7;
    }
    loaded_word = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word;
    if ( !comparison_result && loaded_word > *(_QWORD *)(a2 + 8)
      || (loaded_word_2 = *(FILE ***)a2, getc_nolock_result = getc_nolock(**(FILE ***)a2), saved_getc_nolock_result = getc_nolock_result, getc_nolock_result == -1) )
    {
      saved_getc_nolock_result = 0;
    }
    else
    {
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
    }
    ++element_index;
    *a1 = saved_getc_nolock_result;
    input_byte = saved_getc_nolock_result;
  }
  while ( element_index != 3 );
  loaded_word_3 = *(_QWORD *)(a2 + 8);
  loaded_word_4 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = loaded_word_4;
  if ( !loaded_word_3 || (loaded_word_5 = loaded_word_4, loaded_word_6 = loaded_word_3, loaded_word_4 <= loaded_word_3) )
  {
    loaded_word_5 = loaded_word_4;
    loaded_word_6 = loaded_word_3;
    if ( saved_getc_nolock_result )
    {
      if ( saved_getc_nolock_result != -1 )
      {
        saved_input_byte = saved_getc_nolock_result;
        loaded_word_7 = *(FILE ***)a2;
        if ( saved_input_byte != -1 )
        {
          loaded_word_7[1] = (FILE *)((char *)loaded_word_7[1] - 1);
          sub_14020CE90(saved_input_byte, (__int64)*loaded_word_7);
          loaded_word_6 = *(_QWORD *)(a2 + 8);
          loaded_word_5 = *(_QWORD *)(a2 + 16);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = loaded_word_5 + 1;
  if ( loaded_word_6 && loaded_word_5 + 1 > loaded_word_6 || (loaded_word_8 = *(FILE ***)a2, getc_nolock_result_2 = getc_nolock(**(FILE ***)a2), getc_nolock_result_2 == -1) )
    LOBYTE(getc_nolock_result_2) = 0;
  else
    loaded_word_8[1] = (FILE *)((char *)loaded_word_8[1] + 1);
  *a1 = getc_nolock_result_2;
  element_index_2 = 0;
  LOBYTE(getc_nolock_result_3) = getc_nolock_result_2;
  while ( (_BYTE)getc_nolock_result_2 == byte_140285934[element_index_2 + 8] || (_BYTE)getc_nolock_result_2 == byte_140285934[element_index_2 + 16] )
  {
    loaded_word_11 = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_11;
    if ( !comparison_result && loaded_word_11 > *(_QWORD *)(a2 + 8) || (loaded_word_12 = *(FILE ***)a2, getc_nolock_result_3 = getc_nolock(**(FILE ***)a2), getc_nolock_result_3 == -1) )
      LOBYTE(getc_nolock_result_3) = 0;
    else
      loaded_word_12[1] = (FILE *)((char *)loaded_word_12[1] + 1);
    ++element_index_2;
    *a1 = getc_nolock_result_3;
    LOBYTE(getc_nolock_result_2) = getc_nolock_result_3;
    if ( element_index_2 == 5 )
    {
      loaded_word_13 = *(_QWORD *)(a2 + 16) - 1LL;
      comparison_result = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = loaded_word_13;
      if ( (comparison_result || loaded_word_13 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(getc_nolock_result_3 + 1) > 1u )
      {
        loaded_word_14 = *(FILE ***)a2;
        if ( (char)getc_nolock_result_3 != -1 )
        {
          loaded_word_14[1] = (FILE *)((char *)loaded_word_14[1] - 1);
          sub_14020CE90((char)getc_nolock_result_3, (__int64)*loaded_word_14);
        }
      }
      return unused_written_slot;
    }
  }
  loaded_word_15 = *(_QWORD *)(a2 + 16) - 1LL;
  comparison_result = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = loaded_word_15;
  if ( (comparison_result || loaded_word_15 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(getc_nolock_result_3 + 1) > 1u )
  {
    loaded_word_16 = *(FILE ***)a2;
    if ( (char)getc_nolock_result_3 != -1 )
    {
      loaded_word_16[1] = (FILE *)((char *)loaded_word_16[1] - 1);
      sub_14020CE90((char)getc_nolock_result_3, (__int64)*loaded_word_16);
    }
  }
  *a1 = 0;
  if ( loaded_word_5 != *(_QWORD *)(a2 + 16) )
  {
    unused_written_slot = 7;
    **(_BYTE **)(a2 + 24) = 0;
  }
  return unused_written_slot;
}

//----- (0000000140229560) ----------------------------------------------------
__int64            sub_140229560(char *a1, __int64 a2, __int64 a3)
{
  char input_byte;
  __int64 element_index;
  char input_byte_2;
  unsigned int unused_written_slot;
  unsigned __int64 loaded_word;
  bool comparison_result;
  char *loaded_record_pointer;
  unsigned __int64 loaded_word_2;
  unsigned __int64 loaded_word_3;
  unsigned __int64 loaded_word_4;
  unsigned __int64 loaded_word_5;
  __int64 loaded_word_6;
  char *loaded_record_pointer_2;
  char input_byte_3;
  unsigned __int64 loaded_word_7;
  __int64 loaded_word_8;
  __int64 element_index_2;
  char saved_input_byte;
  unsigned __int64 loaded_word_9;
  char *loaded_record_pointer_3;
  unsigned __int64 loaded_word_10;
  __int64 loaded_word_11;
  unsigned __int64 loaded_word_12;
  __int64 loaded_word_13;

  input_byte = *a1;
  element_index = 0;
  input_byte_2 = *a1;
  unused_written_slot = 3;
  do
  {
    if ( input_byte != byte_1402858D4[element_index] && input_byte != byte_1402858D4[element_index + 4] )
    {
      loaded_word_7 = *(_QWORD *)(a2 + 16) - 1LL;
      comparison_result = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = loaded_word_7;
      if ( (comparison_result || loaded_word_7 <= *(_QWORD *)(a2 + 8)) && input_byte_2 != -1 && input_byte_2 != 0 )
      {
        loaded_word_8 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( loaded_word_8 != **(_QWORD **)a2 )
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = loaded_word_8 - 1;
      }
      *a1 = 0;
      if ( a3 != *(_QWORD *)(a2 + 16) )
        **(_BYTE **)(a2 + 24) = 0;
      return 7;
    }
    loaded_word = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word;
    if ( !comparison_result && loaded_word > *(_QWORD *)(a2 + 8)
      || (loaded_record_pointer = *(char **)(*(_QWORD *)a2 + 16LL), loaded_record_pointer == *(char **)(*(_QWORD *)a2 + 8LL)) )
    {
      input_byte = 0;
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    ++element_index;
    *a1 = input_byte;
    input_byte_2 = input_byte;
  }
  while ( element_index != 3 );
  loaded_word_2 = *(_QWORD *)(a2 + 8);
  loaded_word_3 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = loaded_word_3;
  if ( !loaded_word_2 || (loaded_word_4 = loaded_word_3, loaded_word_5 = loaded_word_2, loaded_word_3 <= loaded_word_2) )
  {
    loaded_word_4 = loaded_word_3;
    loaded_word_5 = loaded_word_2;
    if ( input_byte )
    {
      if ( input_byte != -1 )
      {
        loaded_word_6 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( loaded_word_6 != **(_QWORD **)a2 )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = loaded_word_6 - 1;
          loaded_word_4 = *(_QWORD *)(a2 + 16);
          loaded_word_5 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = loaded_word_4 + 1;
  if ( loaded_word_5 && loaded_word_4 + 1 > loaded_word_5 || (loaded_record_pointer_2 = *(char **)(*(_QWORD *)a2 + 16LL), loaded_record_pointer_2 == *(char **)(*(_QWORD *)a2 + 8LL)) )
  {
    input_byte_3 = 0;
  }
  else
  {
    input_byte_3 = *loaded_record_pointer_2;
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  }
  *a1 = input_byte_3;
  element_index_2 = 0;
  saved_input_byte = input_byte_3;
  while ( input_byte_3 == byte_1402858D4[element_index_2 + 8] || input_byte_3 == byte_1402858D4[element_index_2 + 16] )
  {
    loaded_word_9 = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_9;
    if ( !comparison_result && loaded_word_9 > *(_QWORD *)(a2 + 8)
      || (loaded_record_pointer_3 = *(char **)(*(_QWORD *)a2 + 16LL), loaded_record_pointer_3 == *(char **)(*(_QWORD *)a2 + 8LL)) )
    {
      input_byte_3 = 0;
    }
    else
    {
      input_byte_3 = *loaded_record_pointer_3;
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    }
    ++element_index_2;
    *a1 = input_byte_3;
    saved_input_byte = input_byte_3;
    if ( element_index_2 == 5 )
    {
      loaded_word_10 = *(_QWORD *)(a2 + 16) - 1LL;
      comparison_result = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = loaded_word_10;
      if ( (comparison_result || loaded_word_10 <= *(_QWORD *)(a2 + 8)) && input_byte_3 != -1 && input_byte_3 != 0 )
      {
        loaded_word_11 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( loaded_word_11 != **(_QWORD **)a2 )
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = loaded_word_11 - 1;
      }
      return unused_written_slot;
    }
  }
  loaded_word_12 = *(_QWORD *)(a2 + 16) - 1LL;
  comparison_result = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = loaded_word_12;
  if ( (comparison_result || loaded_word_12 <= *(_QWORD *)(a2 + 8)) && saved_input_byte != -1 && saved_input_byte != 0 )
  {
    loaded_word_13 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( loaded_word_13 != **(_QWORD **)a2 )
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = loaded_word_13 - 1;
  }
  *a1 = 0;
  if ( loaded_word_4 != *(_QWORD *)(a2 + 16) )
  {
    unused_written_slot = 7;
    **(_BYTE **)(a2 + 24) = 0;
  }
  return unused_written_slot;
}

//----- (0000000140229798) ----------------------------------------------------
__int64            sub_140229798(unsigned __int64 a1, FILE ***a2, FILE **a3)
{
  _WORD *unused_written_slot;
  __int64 running_total;
  unsigned __int16 input_value;
  FILE **table_value;
  FILE **loaded_word;
  unsigned __int16 call_result;
  FILE **table_value_2;
  FILE **table_value_3;
  FILE **table_value_4;
  FILE **table_value_5;
  FILE **loaded_word_2;
  FILE **table_value_6;
  FILE **loaded_word_3;
  unsigned __int16 call_result_2;
  FILE **loaded_word_4;
  __int64 running_total_2;
  __int64 cached_call_result;
  FILE **table_value_7;
  FILE **loaded_word_5;
  unsigned __int16 call_result_3;
  FILE **table_value_8;
  FILE **loaded_word_6;
  FILE **table_value_9;
  FILE **loaded_word_7;

  unused_written_slot = (_WORD *)a1;
  LOWORD(a1) = *(_WORD *)a1;
  running_total = 0;
  input_value = a1;
  while ( (_WORD)a1 == *(_WORD *)&byte_1402858D4[running_total + 32] || (_WORD)a1 == *(_WORD *)&byte_1402858D4[running_total + 40] )
  {
    table_value = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] )
    {
      a1 = 0;
    }
    else
    {
      loaded_word = *a2;
      call_result = j__fgetwc_nolock(**a2);
      if ( call_result == 0xFFFF )
      {
        a1 = 0;
      }
      else
      {
        loaded_word[1] = (FILE *)((char *)loaded_word[1] + 1);
        a1 = call_result;
      }
    }
    running_total += 2;
    *unused_written_slot = a1;
    input_value = a1;
    if ( running_total == 6 )
    {
      table_value_2 = a2[1];
      table_value_3 = (FILE **)((char *)a2[2] - 1);
      a2[2] = table_value_3;
      if ( !table_value_2 || (table_value_4 = table_value_3, table_value_5 = table_value_2, table_value_3 <= table_value_2) )
      {
        table_value_4 = table_value_3;
        table_value_5 = table_value_2;
        if ( (_WORD)a1 )
        {
          loaded_word_2 = *a2;
          loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] - 1);
          ungetwc_nolock(a1, *loaded_word_2, table_value_2);
          table_value_5 = a2[1];
          table_value_4 = a2[2];
        }
      }
      a2[2] = (FILE **)((char *)table_value_4 + 1);
      if ( table_value_5 && (FILE **)((char *)table_value_4 + 1) > table_value_5 )
      {
        call_result_2 = 0;
      }
      else
      {
        loaded_word_4 = *a2;
        call_result_2 = j__fgetwc_nolock(**a2);
        if ( call_result_2 == 0xFFFF )
          call_result_2 = 0;
        else
          loaded_word_4[1] = (FILE *)((char *)loaded_word_4[1] + 1);
      }
      *unused_written_slot = call_result_2;
      running_total_2 = 0;
      cached_call_result = call_result_2;
      while ( call_result_2 == *(_WORD *)&byte_1402858D4[running_total_2 + 52] || call_result_2 == *(_WORD *)&byte_1402858D4[running_total_2 + 68] )
      {
        table_value_7 = (FILE **)((char *)a2[2] + 1);
        a2[2] = table_value_7;
        if ( a2[1] && table_value_7 > a2[1] )
        {
          cached_call_result = 0;
        }
        else
        {
          loaded_word_5 = *a2;
          call_result_3 = j__fgetwc_nolock(**a2);
          if ( call_result_3 == 0xFFFF )
          {
            cached_call_result = 0;
          }
          else
          {
            loaded_word_5[1] = (FILE *)((char *)loaded_word_5[1] + 1);
            cached_call_result = call_result_3;
          }
        }
        running_total_2 += 2;
        *unused_written_slot = cached_call_result;
        call_result_2 = cached_call_result;
        if ( running_total_2 == 10 )
        {
          table_value_8 = (FILE **)((char *)a2[2] - 1);
          a2[2] = table_value_8;
          if ( (!a2[1] || table_value_8 <= a2[1]) && (unsigned __int16)(cached_call_result - 1) <= 0xFFFDu )
          {
            loaded_word_6 = *a2;
            loaded_word_6[1] = (FILE *)((char *)loaded_word_6[1] - 1);
            ungetwc_nolock(cached_call_result, *loaded_word_6, table_value_2);
          }
          return 3;
        }
      }
      table_value_9 = (FILE **)((char *)a2[2] - 1);
      a2[2] = table_value_9;
      if ( (!a2[1] || table_value_9 <= a2[1]) && (unsigned __int16)(cached_call_result - 1) <= 0xFFFDu )
      {
        loaded_word_7 = *a2;
        loaded_word_7[1] = (FILE *)((char *)loaded_word_7[1] - 1);
        ungetwc_nolock(cached_call_result, *loaded_word_7, table_value_2);
      }
      *unused_written_slot = 0;
      if ( table_value_4 == a2[2] )
        return 3;
      goto LABEL_20;
    }
  }
  table_value_6 = (FILE **)((char *)a2[2] - 1);
  a2[2] = table_value_6;
  if ( (!a2[1] || table_value_6 <= a2[1]) && (unsigned __int16)(input_value - 1) <= 0xFFFDu )
  {
    loaded_word_3 = *a2;
    loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] - 1);
    ungetwc_nolock(input_value, *loaded_word_3, a3);
  }
  *unused_written_slot = 0;
  if ( a3 != a2[2] )
LABEL_20:
    *(_BYTE *)a2[3] = 0;
  return 7;
}

// 140229875: conditional instruction was optimized away because cx.2 is in (1..FFFE)

//----- (0000000140229A30) ----------------------------------------------------
__int64            sub_140229A30(__int16 *a1, _QWORD *a2, __int64 a3)
{
  __int16 loaded_word;
  __int16 loaded_word_2;
  __int64 running_total;
  unsigned __int64 table_value;
  __int16 *loaded_record_pointer;
  __int16 loaded_word_3;
  unsigned __int64 table_value_2;
  unsigned __int64 integer_difference;
  unsigned __int64 table_value_3;
  unsigned __int64 table_value_4;
  __int64 loaded_word_4;
  __int16 loaded_word_5;
  unsigned __int64 integer_difference_2;
  __int64 loaded_word_6;
  __int16 *loaded_record_pointer_2;
  __int64 running_total_2;
  __int16 saved_loaded_word;
  unsigned __int64 table_value_5;
  __int16 *loaded_record_pointer_3;
  __int16 loaded_word_7;
  unsigned __int64 integer_difference_3;
  __int64 loaded_word_8;
  unsigned __int64 integer_difference_4;
  __int64 loaded_word_9;

  loaded_word = *a1;
  loaded_word_2 = *a1;
  running_total = 0;
  while ( loaded_word == *(_WORD *)((char *)&unk_140285898 + running_total) || loaded_word == *(_WORD *)((char *)&unk_1402858A0 + running_total) )
  {
    table_value = a2[2] + 1LL;
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_record_pointer = *(__int16 **)(*a2 + 16LL);
      if ( loaded_record_pointer == *(__int16 **)(*a2 + 8LL) || (loaded_word_3 = *loaded_record_pointer, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1), loaded_word = loaded_word_3, loaded_word_3 == -1) )
        loaded_word = 0;
    }
    running_total += 2;
    *a1 = loaded_word;
    loaded_word_2 = loaded_word;
    if ( running_total == 6 )
    {
      table_value_2 = a2[1];
      integer_difference = a2[2] - 1LL;
      a2[2] = integer_difference;
      if ( !table_value_2 || (table_value_3 = integer_difference, table_value_4 = table_value_2, integer_difference <= table_value_2) )
      {
        table_value_3 = integer_difference;
        table_value_4 = table_value_2;
        if ( loaded_word )
        {
          if ( loaded_word != -1 )
          {
            loaded_word_4 = *(_QWORD *)(*a2 + 16LL);
            if ( loaded_word_4 != *(_QWORD *)*a2 )
            {
              *(_QWORD *)(*a2 + 16LL) = loaded_word_4 - 2;
              table_value_3 = a2[2];
              table_value_4 = a2[1];
            }
          }
        }
      }
      a2[2] = table_value_3 + 1;
      if ( table_value_4 && table_value_3 + 1 > table_value_4 )
      {
        loaded_word_5 = 0;
      }
      else
      {
        loaded_record_pointer_2 = *(__int16 **)(*a2 + 16LL);
        if ( loaded_record_pointer_2 == *(__int16 **)(*a2 + 8LL) || (loaded_word_5 = *loaded_record_pointer_2, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1), loaded_word_5 == -1) )
          loaded_word_5 = 0;
      }
      *a1 = loaded_word_5;
      running_total_2 = 0;
      saved_loaded_word = loaded_word_5;
      while ( loaded_word_5 == *(_WORD *)((char *)&unk_1402858A8 + running_total_2) || loaded_word_5 == *(_WORD *)((char *)&unk_1402858B8 + running_total_2) )
      {
        table_value_5 = a2[2] + 1LL;
        a2[2] = table_value_5;
        if ( a2[1] && table_value_5 > a2[1] )
        {
          saved_loaded_word = 0;
        }
        else
        {
          loaded_record_pointer_3 = *(__int16 **)(*a2 + 16LL);
          if ( loaded_record_pointer_3 == *(__int16 **)(*a2 + 8LL) || (loaded_word_7 = *loaded_record_pointer_3, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1), saved_loaded_word = loaded_word_7, loaded_word_7 == -1) )
            saved_loaded_word = 0;
        }
        running_total_2 += 2;
        *a1 = saved_loaded_word;
        loaded_word_5 = saved_loaded_word;
        if ( running_total_2 == 10 )
        {
          integer_difference_3 = a2[2] - 1LL;
          a2[2] = integer_difference_3;
          if ( (!a2[1] || integer_difference_3 <= a2[1]) && (unsigned __int16)(saved_loaded_word - 1) <= 0xFFFDu )
          {
            loaded_word_8 = *(_QWORD *)(*a2 + 16LL);
            if ( loaded_word_8 != *(_QWORD *)*a2 )
              *(_QWORD *)(*a2 + 16LL) = loaded_word_8 - 2;
          }
          return 3;
        }
      }
      integer_difference_4 = a2[2] - 1LL;
      a2[2] = integer_difference_4;
      if ( (!a2[1] || integer_difference_4 <= a2[1]) && (unsigned __int16)(saved_loaded_word - 1) <= 0xFFFDu )
      {
        loaded_word_9 = *(_QWORD *)(*a2 + 16LL);
        if ( loaded_word_9 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = loaded_word_9 - 2;
      }
      *a1 = 0;
      if ( table_value_3 == a2[2] )
        return 3;
      goto LABEL_26;
    }
  }
  integer_difference_2 = a2[2] - 1LL;
  a2[2] = integer_difference_2;
  if ( (!a2[1] || integer_difference_2 <= a2[1]) && (unsigned __int16)(loaded_word_2 - 1) <= 0xFFFDu )
  {
    loaded_word_6 = *(_QWORD *)(*a2 + 16LL);
    if ( loaded_word_6 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = loaded_word_6 - 2;
  }
  *a1 = 0;
  if ( a3 != a2[2] )
LABEL_26:
    *(_BYTE *)a2[3] = 0;
  return 7;
}

//----- (0000000140229CC0) ----------------------------------------------------
__int64            sub_140229CC0(char *a1, __int64 a2, unsigned __int64 a3)
{
  char saved_getc_nolock_result;
  __int64 i;
  unsigned __int64 loaded_word;
  bool comparison_result;
  FILE **loaded_word_2;
  int getc_nolock_result;
  unsigned __int64 loaded_word_3;
  unsigned __int64 loaded_word_4;
  unsigned __int64 loaded_word_5;
  unsigned __int64 loaded_word_6;
  int saved_input_byte;
  FILE **loaded_word_7;
  unsigned __int64 integer_sum;
  FILE **loaded_word_8;
  int getc_nolock_result_2;
  unsigned __int64 loaded_word_9;
  FILE **loaded_word_10;
  int getc_nolock_result_3;
  char input_byte;
  unsigned __int64 loaded_word_11;
  FILE **loaded_word_12;
  char call_result;
  int getc_nolock_result_4;
  unsigned __int64 loaded_word_13;
  FILE **loaded_word_14;
  unsigned __int64 loaded_word_15;
  FILE **loaded_word_16;
  __int64 scratch_buffer[7];
  unsigned __int64 saved_loaded_word;

  saved_loaded_word = a3;
  scratch_buffer[0] = a2;
  scratch_buffer[2] = (__int64)&saved_loaded_word;
  saved_getc_nolock_result = *a1;
  scratch_buffer[1] = (__int64)a1;
  for ( i = 0; i != 3; ++i )
  {
    if ( saved_getc_nolock_result != byte_140285934[i + 24] && saved_getc_nolock_result != byte_140285934[i + 28] )
    {
      sub_14022EB44(scratch_buffer);
      return 7;
    }
    loaded_word = *(_QWORD *)(a2 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word;
    if ( !comparison_result && loaded_word > *(_QWORD *)(a2 + 8) || (loaded_word_2 = *(FILE ***)a2, getc_nolock_result = getc_nolock(**(FILE ***)a2), saved_getc_nolock_result = getc_nolock_result, getc_nolock_result == -1) )
      saved_getc_nolock_result = 0;
    else
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
    *a1 = saved_getc_nolock_result;
  }
  loaded_word_3 = *(_QWORD *)(a2 + 8);
  loaded_word_4 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = loaded_word_4;
  if ( !loaded_word_3 || (loaded_word_5 = loaded_word_4, loaded_word_6 = loaded_word_3, loaded_word_4 <= loaded_word_3) )
  {
    loaded_word_5 = loaded_word_4;
    loaded_word_6 = loaded_word_3;
    if ( saved_getc_nolock_result )
    {
      if ( saved_getc_nolock_result != -1 )
      {
        saved_input_byte = saved_getc_nolock_result;
        loaded_word_7 = *(FILE ***)a2;
        if ( saved_input_byte != -1 )
        {
          loaded_word_7[1] = (FILE *)((char *)loaded_word_7[1] - 1);
          sub_14020CE90(saved_input_byte, (__int64)*loaded_word_7);
          loaded_word_5 = *(_QWORD *)(a2 + 16);
          loaded_word_6 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  saved_loaded_word = loaded_word_5;
  integer_sum = loaded_word_5 + 1;
  *(_QWORD *)(a2 + 16) = integer_sum;
  if ( loaded_word_6 && integer_sum > loaded_word_6 || (loaded_word_8 = *(FILE ***)a2, getc_nolock_result_2 = getc_nolock(**(FILE ***)a2), getc_nolock_result_2 == -1) )
    LOBYTE(getc_nolock_result_2) = 0;
  else
    loaded_word_8[1] = (FILE *)((char *)loaded_word_8[1] + 1);
  *a1 = getc_nolock_result_2;
  if ( (_BYTE)getc_nolock_result_2 != 40 )
    return sub_14022EB44(scratch_buffer) != 0 ? 4 : 7;
  loaded_word_9 = *(_QWORD *)(a2 + 16) + 1LL;
  comparison_result = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = loaded_word_9;
  if ( !comparison_result && loaded_word_9 > *(_QWORD *)(a2 + 8) || (loaded_word_10 = *(FILE ***)a2, getc_nolock_result_3 = getc_nolock(**(FILE ***)a2), getc_nolock_result_3 == -1) )
    LOBYTE(getc_nolock_result_3) = 0;
  else
    loaded_word_10[1] = (FILE *)((char *)loaded_word_10[1] + 1);
  *a1 = getc_nolock_result_3;
  if ( sub_14022AB34(a1, a2) )
  {
    input_byte = *a1;
    loaded_word_11 = *(_QWORD *)(a2 + 16) - 1LL;
    comparison_result = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = loaded_word_11;
    if ( (comparison_result || loaded_word_11 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(input_byte + 1) > 1u )
    {
      loaded_word_12 = *(FILE ***)a2;
      if ( input_byte != -1 )
      {
        loaded_word_12[1] = (FILE *)((char *)loaded_word_12[1] - 1);
        sub_14020CE90(input_byte, (__int64)*loaded_word_12);
      }
    }
    return 5;
  }
  else
  {
    call_result = sub_14022A8F0(a1, a2);
    LOBYTE(getc_nolock_result_4) = *a1;
    if ( call_result )
    {
      loaded_word_13 = *(_QWORD *)(a2 + 16) - 1LL;
      comparison_result = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = loaded_word_13;
      if ( (comparison_result || loaded_word_13 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(getc_nolock_result_4 + 1) > 1u )
      {
        loaded_word_14 = *(FILE ***)a2;
        if ( (char)getc_nolock_result_4 != -1 )
        {
          loaded_word_14[1] = (FILE *)((char *)loaded_word_14[1] - 1);
          sub_14020CE90((char)getc_nolock_result_4, (__int64)*loaded_word_14);
        }
      }
      return 6;
    }
    else
    {
      while ( (_BYTE)getc_nolock_result_4 != 41 )
      {
        if ( !(_BYTE)getc_nolock_result_4
          || (unsigned __int8)(getc_nolock_result_4 - 48) > 9u
          && (unsigned __int8)(getc_nolock_result_4 - 97) > 0x19u
          && (unsigned __int8)(getc_nolock_result_4 - 65) > 0x19u
          && (_BYTE)getc_nolock_result_4 != 95 )
        {
          return sub_14022EB44(scratch_buffer) != 0 ? 4 : 7;
        }
        loaded_word_15 = *(_QWORD *)(a2 + 16) + 1LL;
        comparison_result = *(_QWORD *)(a2 + 8) == 0;
        *(_QWORD *)(a2 + 16) = loaded_word_15;
        if ( !comparison_result && loaded_word_15 > *(_QWORD *)(a2 + 8) || (loaded_word_16 = *(FILE ***)a2, getc_nolock_result_4 = getc_nolock(**(FILE ***)a2), getc_nolock_result_4 == -1) )
          LOBYTE(getc_nolock_result_4) = 0;
        else
          loaded_word_16[1] = (FILE *)((char *)loaded_word_16[1] + 1);
        *a1 = getc_nolock_result_4;
      }
      return 4;
    }
  }
}

//----- (0000000140229F5C) ----------------------------------------------------
__int64            sub_140229F5C(char *a1, _QWORD *a2, __int64 a3)
{
  char input_byte;
  char selection_flag;
  char input_byte_2;
  __int64 i;
  unsigned __int64 table_value;
  char *loaded_record_pointer;
  unsigned __int64 table_value_2;
  unsigned __int64 integer_difference;
  unsigned __int64 table_value_3;
  unsigned __int64 table_value_4;
  __int64 loaded_word;
  char *loaded_record_pointer_2;
  char input_byte_3;
  unsigned __int64 integer_difference_2;
  __int64 loaded_word_2;
  __int64 table_value_5;
  unsigned __int64 table_value_6;
  unsigned __int64 integer_difference_3;
  bool comparison_result;
  __int64 loaded_word_3;
  char *loaded_record_pointer_3;
  char input_byte_4;
  char input_byte_5;
  unsigned __int64 integer_difference_4;
  __int64 loaded_word_4;
  char call_result;
  char input_byte_6;
  unsigned __int64 integer_difference_5;
  __int64 loaded_word_5;
  char input_byte_7;
  unsigned __int64 table_value_7;
  char *loaded_record_pointer_4;
  unsigned __int64 integer_difference_6;

  input_byte = *a1;
  selection_flag = 0;
  input_byte_2 = *a1;
  for ( i = 0; i != 3; ++i )
  {
    if ( input_byte != byte_1402858D4[i + 24] && input_byte != byte_1402858D4[i + 28] )
    {
      integer_difference_2 = a2[2] - 1LL;
      a2[2] = integer_difference_2;
      if ( (!a2[1] || integer_difference_2 <= a2[1]) && input_byte_2 != -1 && input_byte_2 != 0 )
      {
        loaded_word_2 = *(_QWORD *)(*a2 + 16LL);
        if ( loaded_word_2 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = loaded_word_2 - 1;
      }
      *a1 = 0;
      if ( a3 != a2[2] )
        *(_BYTE *)a2[3] = 0;
      return 7;
    }
    table_value = a2[2] + 1LL;
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] || (loaded_record_pointer = *(char **)(*a2 + 16LL), loaded_record_pointer == *(char **)(*a2 + 8LL)) )
    {
      input_byte = 0;
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    *a1 = input_byte;
    input_byte_2 = input_byte;
  }
  table_value_2 = a2[1];
  integer_difference = a2[2] - 1LL;
  a2[2] = integer_difference;
  if ( !table_value_2 || (table_value_3 = integer_difference, table_value_4 = table_value_2, integer_difference <= table_value_2) )
  {
    table_value_3 = integer_difference;
    table_value_4 = table_value_2;
    if ( input_byte )
    {
      if ( input_byte != -1 )
      {
        loaded_word = *(_QWORD *)(*a2 + 16LL);
        if ( loaded_word != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16LL) = loaded_word - 1;
          table_value_3 = a2[2];
          table_value_4 = a2[1];
        }
      }
    }
  }
  a2[2] = table_value_3 + 1;
  if ( table_value_4 && table_value_3 + 1 > table_value_4 || (loaded_record_pointer_2 = *(char **)(*a2 + 16LL), loaded_record_pointer_2 == *(char **)(*a2 + 8LL)) )
  {
    input_byte_3 = 0;
  }
  else
  {
    input_byte_3 = *loaded_record_pointer_2;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  }
  *a1 = input_byte_3;
  table_value_5 = a2[2];
  table_value_6 = a2[1];
  if ( input_byte_3 != 40 )
  {
    integer_difference_3 = table_value_5 - 1;
    a2[2] = integer_difference_3;
    if ( table_value_6 )
    {
      comparison_result = integer_difference_3 <= table_value_6;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  a2[2] = table_value_5 + 1;
  if ( table_value_6 && table_value_5 + 1 > table_value_6 || (loaded_record_pointer_3 = *(char **)(*a2 + 16LL), loaded_record_pointer_3 == *(char **)(*a2 + 8LL)) )
  {
    input_byte_4 = 0;
  }
  else
  {
    input_byte_4 = *loaded_record_pointer_3;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
  }
  *a1 = input_byte_4;
  if ( sub_14022ABCC(a1, a2) )
  {
    input_byte_5 = *a1;
    integer_difference_4 = a2[2] - 1LL;
    a2[2] = integer_difference_4;
    if ( (!a2[1] || integer_difference_4 <= a2[1]) && input_byte_5 != -1 && input_byte_5 != 0 )
    {
      loaded_word_4 = *(_QWORD *)(*a2 + 16LL);
      if ( loaded_word_4 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16LL) = loaded_word_4 - 1;
    }
    return 5;
  }
  else
  {
    call_result = sub_14022A988(a1, a2);
    input_byte_6 = *a1;
    if ( !call_result )
    {
      input_byte_3 = *a1;
      if ( input_byte_6 == 41 )
        return 4;
      input_byte_7 = *a1;
      while ( input_byte_7
           && ((unsigned __int8)(input_byte_7 - 48) <= 9u
            || (unsigned __int8)(input_byte_7 - 97) <= 0x19u
            || (unsigned __int8)(input_byte_7 - 65) <= 0x19u
            || input_byte_7 == 95) )
      {
        table_value_7 = a2[2] + 1LL;
        a2[2] = table_value_7;
        if ( a2[1] && table_value_7 > a2[1] || (loaded_record_pointer_4 = *(char **)(*a2 + 16LL), loaded_record_pointer_4 == *(char **)(*a2 + 8LL)) )
        {
          input_byte_3 = 0;
        }
        else
        {
          input_byte_3 = *loaded_record_pointer_4;
          *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
        }
        *a1 = input_byte_3;
        input_byte_7 = input_byte_3;
        if ( input_byte_3 == 41 )
          return 4;
      }
      integer_difference_6 = a2[2] - 1LL;
      a2[2] = integer_difference_6;
      if ( !a2[1] )
        goto LABEL_33;
      comparison_result = integer_difference_6 <= a2[1];
LABEL_32:
      if ( comparison_result )
      {
LABEL_33:
        if ( input_byte_3 != -1 && input_byte_3 != 0 )
        {
          loaded_word_3 = *(_QWORD *)(*a2 + 16LL);
          if ( loaded_word_3 != *(_QWORD *)*a2 )
            *(_QWORD *)(*a2 + 16LL) = loaded_word_3 - 1;
        }
      }
      *a1 = 0;
      if ( table_value_3 == a2[2] )
        selection_flag = 1;
      else
        *(_BYTE *)a2[3] = 0;
      return selection_flag != 0 ? 4 : 7;
    }
    integer_difference_5 = a2[2] - 1LL;
    a2[2] = integer_difference_5;
    if ( (!a2[1] || integer_difference_5 <= a2[1]) && input_byte_6 != -1 && input_byte_6 != 0 )
    {
      loaded_word_5 = *(_QWORD *)(*a2 + 16LL);
      if ( loaded_word_5 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16LL) = loaded_word_5 - 1;
    }
    return 6;
  }
}

//----- (000000014022A27C) ----------------------------------------------------
__int64            sub_14022A27C(__int64 a1, FILE ***a2, __int64 *a3)
{
  __int16 *input_cursor;
  __int64 i;
  FILE **table_value;
  FILE **loaded_word;
  unsigned __int16 call_result;
  FILE **table_value_2;
  FILE **table_value_3;
  FILE **table_value_4;
  FILE **table_value_5;
  FILE **loaded_word_2;
  FILE **file_handle;
  __int16 call_result_2;
  FILE **loaded_word_3;
  FILE **table_value_6;
  __int16 call_result_3;
  FILE **loaded_word_4;
  __int64 scaled_index;
  FILE **table_value_7;
  FILE **loaded_word_5;
  char call_result_4;
  __int64 scaled_index_2;
  FILE **table_value_8;
  FILE **loaded_word_6;
  FILE **table_value_9;
  FILE **loaded_word_7;
  __int16 call_result_5;
  __int64 scratch_buffer[4];
  __int64 *input_cursor_2;

  input_cursor_2 = a3;
  scratch_buffer[1] = a1;
  scratch_buffer[0] = (__int64)a2;
  input_cursor = (__int16 *)a1;
  scratch_buffer[2] = (__int64)&input_cursor_2;
  LOWORD(a1) = *(_WORD *)a1;
  for ( i = 0; i != 6; i += 2 )
  {
    if ( (_WORD)a1 != *(_WORD *)&byte_1402858D4[i + 80] && (_WORD)a1 != *(_WORD *)&byte_1402858D4[i + 88] )
    {
      _lambda_2869a9057330eafa474e853b0696fc23___operator_call(scratch_buffer);
      return 7;
    }
    table_value = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] )
    {
      a1 = 0;
    }
    else
    {
      loaded_word = *a2;
      call_result = j__fgetwc_nolock(**a2);
      if ( call_result == 0xFFFF )
      {
        a1 = 0;
      }
      else
      {
        loaded_word[1] = (FILE *)((char *)loaded_word[1] + 1);
        a1 = call_result;
      }
    }
    *input_cursor = a1;
  }
  table_value_2 = a2[1];
  table_value_3 = (FILE **)((char *)a2[2] - 1);
  a2[2] = table_value_3;
  if ( !table_value_2 || (table_value_4 = table_value_3, table_value_5 = table_value_2, table_value_3 <= table_value_2) )
  {
    table_value_4 = table_value_3;
    table_value_5 = table_value_2;
    if ( (_WORD)a1 )
    {
      loaded_word_2 = *a2;
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] - 1);
      ungetwc_nolock(a1, *loaded_word_2, table_value_3);
      table_value_4 = a2[2];
      table_value_5 = a2[1];
    }
  }
  input_cursor_2 = (__int64 *)table_value_4;
  file_handle = (FILE **)((char *)table_value_4 + 1);
  a2[2] = file_handle;
  if ( table_value_5 && file_handle > table_value_5 )
  {
    call_result_2 = 0;
  }
  else
  {
    loaded_word_3 = *a2;
    call_result_2 = j__fgetwc_nolock(**a2);
    if ( call_result_2 == -1 )
      call_result_2 = 0;
    else
      loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] + 1);
  }
  *input_cursor = call_result_2;
  if ( call_result_2 != 40 )
    return _lambda_2869a9057330eafa474e853b0696fc23___operator_call(scratch_buffer) != 0 ? 4 : 7;
  table_value_6 = (FILE **)((char *)a2[2] + 1);
  a2[2] = table_value_6;
  if ( a2[1] && table_value_6 > a2[1] )
  {
    call_result_3 = 0;
  }
  else
  {
    loaded_word_4 = *a2;
    call_result_3 = j__fgetwc_nolock(**a2);
    if ( call_result_3 == -1 )
      call_result_3 = 0;
    else
      loaded_word_4[1] = (FILE *)((char *)loaded_word_4[1] + 1);
  }
  *input_cursor = call_result_3;
  if ( sub_14022AC44(input_cursor, (__int64)a2) )
  {
    scaled_index = (unsigned __int16)*input_cursor;
    table_value_7 = (FILE **)((char *)a2[2] - 1);
    a2[2] = table_value_7;
    if ( (!a2[1] || table_value_7 <= a2[1]) && (unsigned __int16)(scaled_index - 1) <= 0xFFFDu )
    {
      loaded_word_5 = *a2;
      loaded_word_5[1] = (FILE *)((char *)loaded_word_5[1] - 1);
      ungetwc_nolock(scaled_index, *loaded_word_5, 65533);
    }
    return 5;
  }
  else
  {
    call_result_4 = sub_14022AA00(input_cursor, (__int64)a2);
    scaled_index_2 = (unsigned __int16)*input_cursor;
    if ( call_result_4 )
    {
      table_value_8 = (FILE **)((char *)a2[2] - 1);
      a2[2] = table_value_8;
      if ( (!a2[1] || table_value_8 <= a2[1]) && (unsigned __int16)(scaled_index_2 - 1) <= 0xFFFDu )
      {
        loaded_word_6 = *a2;
        loaded_word_6[1] = (FILE *)((char *)loaded_word_6[1] - 1);
        ungetwc_nolock(scaled_index_2, *loaded_word_6, 65533);
      }
      return 6;
    }
    else
    {
      while ( (_WORD)scaled_index_2 != 41 )
      {
        if ( !(_WORD)scaled_index_2
          || (unsigned int)(unsigned __int16)scaled_index_2 - 48 > 9
          && (unsigned int)(unsigned __int16)scaled_index_2 - 97 > 0x19
          && (unsigned int)(unsigned __int16)scaled_index_2 - 65 > 0x19
          && (_WORD)scaled_index_2 != 95 )
        {
          return _lambda_2869a9057330eafa474e853b0696fc23___operator_call(scratch_buffer) != 0 ? 4 : 7;
        }
        table_value_9 = (FILE **)((char *)a2[2] + 1);
        a2[2] = table_value_9;
        if ( a2[1] && table_value_9 > a2[1] )
        {
          LOWORD(scaled_index_2) = 0;
        }
        else
        {
          loaded_word_7 = *a2;
          call_result_5 = j__fgetwc_nolock(**a2);
          if ( call_result_5 == -1 )
          {
            LOWORD(scaled_index_2) = 0;
          }
          else
          {
            loaded_word_7[1] = (FILE *)((char *)loaded_word_7[1] + 1);
            LOWORD(scaled_index_2) = call_result_5;
          }
        }
        *input_cursor = scaled_index_2;
      }
      return 4;
    }
  }
}

// 14022A358: conditional instruction was optimized away because cx.2 is in (1..FFFE)

//----- (000000014022A55C) ----------------------------------------------------
__int64            sub_14022A55C(unsigned __int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int16 loaded_word;
  char selection_flag;
  unsigned __int16 loaded_word_2;
  __int64 i;
  unsigned __int64 table_value;
  unsigned __int16 *loaded_record_pointer;
  unsigned __int64 table_value_2;
  unsigned __int64 integer_difference;
  unsigned __int64 table_value_3;
  unsigned __int64 table_value_4;
  __int64 loaded_word_3;
  unsigned __int16 loaded_word_4;
  unsigned __int64 integer_difference_2;
  __int64 loaded_word_5;
  unsigned __int16 *loaded_record_pointer_2;
  unsigned __int64 table_value_5;
  unsigned __int64 table_value_6;
  unsigned __int64 integer_difference_3;
  bool comparison_result;
  __int64 loaded_word_6;
  unsigned __int16 loaded_word_7;
  unsigned __int16 *loaded_record_pointer_3;
  unsigned __int16 loaded_word_8;
  unsigned __int64 integer_difference_4;
  __int64 loaded_word_9;
  char call_result;
  __int16 loaded_word_10;
  unsigned __int64 integer_difference_5;
  __int64 loaded_word_11;
  unsigned __int16 loaded_word_12;
  unsigned __int64 table_value_7;
  unsigned __int16 *loaded_record_pointer_4;
  unsigned __int16 loaded_word_13;
  unsigned __int64 integer_difference_6;

  loaded_word = *a1;
  selection_flag = 0;
  loaded_word_2 = *a1;
  for ( i = 0; i != 6; i += 2 )
  {
    if ( loaded_word != *(_WORD *)((char *)&unk_1402858C4 + i) && loaded_word != *(_WORD *)((char *)&unk_1402858CC + i) )
    {
      integer_difference_2 = a2[2] - 1;
      a2[2] = integer_difference_2;
      if ( (!a2[1] || integer_difference_2 <= a2[1]) && (unsigned __int16)(loaded_word_2 - 1) <= 0xFFFDu )
      {
        loaded_word_5 = *(_QWORD *)(*a2 + 16);
        if ( loaded_word_5 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16) = loaded_word_5 - 2;
      }
      *a1 = 0;
      if ( a3 != a2[2] )
        *(_BYTE *)a2[3] = 0;
      return 7;
    }
    table_value = a2[2] + 1;
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_record_pointer = *(unsigned __int16 **)(*a2 + 16);
      if ( loaded_record_pointer == *(unsigned __int16 **)(*a2 + 8) || (loaded_word = *loaded_record_pointer, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer + 1), loaded_word == 0xFFFF) )
        loaded_word = 0;
    }
    *a1 = loaded_word;
    loaded_word_2 = loaded_word;
  }
  table_value_2 = a2[1];
  integer_difference = a2[2] - 1;
  a2[2] = integer_difference;
  if ( !table_value_2 || (table_value_3 = integer_difference, table_value_4 = table_value_2, integer_difference <= table_value_2) )
  {
    table_value_3 = integer_difference;
    table_value_4 = table_value_2;
    if ( loaded_word )
    {
      loaded_word_3 = *(_QWORD *)(*a2 + 16);
      if ( loaded_word_3 != *(_QWORD *)*a2 )
      {
        *(_QWORD *)(*a2 + 16) = loaded_word_3 - 2;
        table_value_3 = a2[2];
        table_value_4 = a2[1];
      }
    }
  }
  a2[2] = table_value_3 + 1;
  if ( table_value_4 && table_value_3 + 1 > table_value_4 )
  {
    loaded_word_4 = 0;
  }
  else
  {
    loaded_record_pointer_2 = *(unsigned __int16 **)(*a2 + 16);
    if ( loaded_record_pointer_2 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_4 = *loaded_record_pointer_2, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1), loaded_word_4 == 0xFFFF) )
      loaded_word_4 = 0;
  }
  *a1 = loaded_word_4;
  table_value_5 = a2[2];
  table_value_6 = a2[1];
  if ( loaded_word_4 != 40 )
  {
    integer_difference_3 = table_value_5 - 1;
    a2[2] = integer_difference_3;
    if ( table_value_6 )
    {
      comparison_result = integer_difference_3 <= table_value_6;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  a2[2] = table_value_5 + 1;
  if ( table_value_6 && table_value_5 + 1 > table_value_6 )
  {
    loaded_word_7 = 0;
  }
  else
  {
    loaded_record_pointer_3 = *(unsigned __int16 **)(*a2 + 16);
    if ( loaded_record_pointer_3 == *(unsigned __int16 **)(*a2 + 8) || (loaded_word_7 = *loaded_record_pointer_3, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1), loaded_word_7 == 0xFFFF) )
      loaded_word_7 = 0;
  }
  *a1 = loaded_word_7;
  if ( sub_14022ACE8((__int16 *)a1, a2) )
  {
    loaded_word_8 = *a1;
    integer_difference_4 = a2[2] - 1;
    a2[2] = integer_difference_4;
    if ( (!a2[1] || integer_difference_4 <= a2[1]) && (unsigned __int16)(loaded_word_8 - 1) <= 0xFFFDu )
    {
      loaded_word_9 = *(_QWORD *)(*a2 + 16);
      if ( loaded_word_9 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16) = loaded_word_9 - 2;
    }
    return 5;
  }
  else
  {
    call_result = sub_14022AAA4((__int16 *)a1, a2);
    loaded_word_10 = *a1;
    if ( !call_result )
    {
      loaded_word_4 = *a1;
      if ( loaded_word_10 == 41 )
        return 4;
      loaded_word_12 = *a1;
      while ( loaded_word_12
           && ((unsigned int)loaded_word_12 - 48 <= 9
            || (unsigned int)loaded_word_12 - 97 <= 0x19
            || (unsigned int)loaded_word_12 - 65 <= 0x19
            || loaded_word_12 == 95) )
      {
        table_value_7 = a2[2] + 1;
        a2[2] = table_value_7;
        if ( a2[1] && table_value_7 > a2[1] )
        {
          loaded_word_4 = 0;
        }
        else
        {
          loaded_record_pointer_4 = *(unsigned __int16 **)(*a2 + 16);
          if ( loaded_record_pointer_4 == *(unsigned __int16 **)(*a2 + 8)
            || (loaded_word_13 = *loaded_record_pointer_4, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1), loaded_word_4 = loaded_word_13, loaded_word_13 == 0xFFFF) )
          {
            loaded_word_4 = 0;
          }
        }
        *a1 = loaded_word_4;
        loaded_word_12 = loaded_word_4;
        if ( loaded_word_4 == 41 )
          return 4;
      }
      integer_difference_6 = a2[2] - 1;
      a2[2] = integer_difference_6;
      if ( !a2[1] )
        goto LABEL_34;
      comparison_result = integer_difference_6 <= a2[1];
LABEL_33:
      if ( comparison_result )
      {
LABEL_34:
        if ( (unsigned __int16)(loaded_word_4 - 1) <= 0xFFFDu )
        {
          loaded_word_6 = *(_QWORD *)(*a2 + 16);
          if ( loaded_word_6 != *(_QWORD *)*a2 )
            *(_QWORD *)(*a2 + 16) = loaded_word_6 - 2;
        }
      }
      *a1 = 0;
      if ( table_value_3 == a2[2] )
        selection_flag = 1;
      else
        *(_BYTE *)a2[3] = 0;
      return selection_flag != 0 ? 4 : 7;
    }
    integer_difference_5 = a2[2] - 1;
    a2[2] = integer_difference_5;
    if ( (!a2[1] || integer_difference_5 <= a2[1]) && (unsigned __int16)(loaded_word_10 - 1) <= 0xFFFDu )
    {
      loaded_word_11 = *(_QWORD *)(*a2 + 16);
      if ( loaded_word_11 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16) = loaded_word_11 - 2;
    }
    return 6;
  }
}

// 14022A629: conditional instruction was optimized away because dx.2 is in (1..FFFE)

//----- (000000014022A8F0) ----------------------------------------------------
char            sub_14022A8F0(_BYTE *a1, __int64 a2)
{
  int getc_nolock_result;
  char unused_written_slot;
  __int64 element_index;
  unsigned __int64 loaded_word;
  FILE **loaded_word_2;

  LOBYTE(getc_nolock_result) = *a1;
  unused_written_slot = 0;
  element_index = 0;
  while ( (_BYTE)getc_nolock_result == byte_140285934[element_index + 172] || (_BYTE)getc_nolock_result == byte_140285934[element_index + 176] )
  {
    loaded_word = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = loaded_word;
    if ( *(_QWORD *)(a2 + 8) && loaded_word > *(_QWORD *)(a2 + 8)
      || (loaded_word_2 = *(FILE ***)a2, getc_nolock_result = getc_nolock(**(FILE ***)a2), getc_nolock_result == -1) )
    {
      LOBYTE(getc_nolock_result) = 0;
    }
    else
    {
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
    }
    ++element_index;
    *a1 = getc_nolock_result;
    if ( element_index == 4 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022A988) ----------------------------------------------------
char            sub_14022A988(char *a1, _QWORD *a2)
{
  char input_byte;
  char unused_written_slot;
  __int64 element_index;
  unsigned __int64 table_value;
  char *loaded_record_pointer;

  input_byte = *a1;
  unused_written_slot = 0;
  element_index = 0;
  while ( input_byte == byte_140285934[element_index + 100] || input_byte == byte_140285934[element_index + 104] )
  {
    table_value = a2[2] + 1LL;
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] || (loaded_record_pointer = *(char **)(*a2 + 16LL), loaded_record_pointer == *(char **)(*a2 + 8LL)) )
    {
      input_byte = 0;
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    ++element_index;
    *a1 = input_byte;
    if ( element_index == 4 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022AA00) ----------------------------------------------------
char            sub_14022AA00(__int16 *a1, __int64 a2)
{
  __int16 loaded_word;
  char unused_written_slot;
  __int64 running_total;
  unsigned __int64 loaded_word_2;
  FILE **loaded_word_3;

  loaded_word = *a1;
  unused_written_slot = 0;
  running_total = 0;
  while ( loaded_word == *(_WORD *)&byte_140285934[running_total + 140] || loaded_word == *(_WORD *)&byte_140285934[running_total + 148] )
  {
    loaded_word_2 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = loaded_word_2;
    if ( *(_QWORD *)(a2 + 8) && loaded_word_2 > *(_QWORD *)(a2 + 8) )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word_3 = *(FILE ***)a2;
      loaded_word = j__fgetwc_nolock(**(FILE ***)a2);
      if ( loaded_word == -1 )
        loaded_word = 0;
      else
        loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] + 1);
    }
    running_total += 2;
    *a1 = loaded_word;
    if ( running_total == 8 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022AAA4) ----------------------------------------------------
char            sub_14022AAA4(__int16 *a1, _QWORD *a2)
{
  __int16 loaded_word;
  char unused_written_slot;
  __int64 running_total;
  unsigned __int64 table_value;
  __int16 *loaded_record_pointer;
  __int16 loaded_word_2;

  loaded_word = *a1;
  unused_written_slot = 0;
  running_total = 0;
  while ( loaded_word == *(_WORD *)&byte_140285934[running_total + 68] || loaded_word == *(_WORD *)&byte_140285934[running_total + 76] )
  {
    table_value = a2[2] + 1LL;
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_record_pointer = *(__int16 **)(*a2 + 16LL);
      if ( loaded_record_pointer == *(__int16 **)(*a2 + 8LL) || (loaded_word_2 = *loaded_record_pointer, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1), loaded_word = loaded_word_2, loaded_word_2 == -1) )
        loaded_word = 0;
    }
    running_total += 2;
    *a1 = loaded_word;
    if ( running_total == 8 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022AB34) ----------------------------------------------------
char            sub_14022AB34(_BYTE *a1, __int64 a2)
{
  int getc_nolock_result;
  char unused_written_slot;
  __int64 element_index;
  unsigned __int64 loaded_word;
  FILE **loaded_word_2;

  LOBYTE(getc_nolock_result) = *a1;
  unused_written_slot = 0;
  element_index = 0;
  while ( (_BYTE)getc_nolock_result == byte_140285934[element_index + 156] || (_BYTE)getc_nolock_result == byte_140285934[element_index + 164] )
  {
    loaded_word = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = loaded_word;
    if ( *(_QWORD *)(a2 + 8) && loaded_word > *(_QWORD *)(a2 + 8)
      || (loaded_word_2 = *(FILE ***)a2, getc_nolock_result = getc_nolock(**(FILE ***)a2), getc_nolock_result == -1) )
    {
      LOBYTE(getc_nolock_result) = 0;
    }
    else
    {
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
    }
    ++element_index;
    *a1 = getc_nolock_result;
    if ( element_index == 5 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022ABCC) ----------------------------------------------------
char            sub_14022ABCC(char *a1, _QWORD *a2)
{
  char input_byte;
  char unused_written_slot;
  __int64 element_index;
  unsigned __int64 table_value;
  char *loaded_record_pointer;

  input_byte = *a1;
  unused_written_slot = 0;
  element_index = 0;
  while ( input_byte == byte_140285934[element_index + 84] || input_byte == byte_140285934[element_index + 92] )
  {
    table_value = a2[2] + 1LL;
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] || (loaded_record_pointer = *(char **)(*a2 + 16LL), loaded_record_pointer == *(char **)(*a2 + 8LL)) )
    {
      input_byte = 0;
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    ++element_index;
    *a1 = input_byte;
    if ( element_index == 5 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022AC44) ----------------------------------------------------
char            sub_14022AC44(__int16 *a1, __int64 a2)
{
  __int16 loaded_word;
  char unused_written_slot;
  __int64 running_total;
  unsigned __int64 loaded_word_2;
  FILE **loaded_word_3;

  loaded_word = *a1;
  unused_written_slot = 0;
  running_total = 0;
  while ( loaded_word == *(_WORD *)&byte_140285934[running_total + 108] || loaded_word == *(_WORD *)&byte_140285934[running_total + 124] )
  {
    loaded_word_2 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = loaded_word_2;
    if ( *(_QWORD *)(a2 + 8) && loaded_word_2 > *(_QWORD *)(a2 + 8) )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word_3 = *(FILE ***)a2;
      loaded_word = j__fgetwc_nolock(**(FILE ***)a2);
      if ( loaded_word == -1 )
        loaded_word = 0;
      else
        loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] + 1);
    }
    running_total += 2;
    *a1 = loaded_word;
    if ( running_total == 10 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022ACE8) ----------------------------------------------------
char            sub_14022ACE8(__int16 *a1, _QWORD *a2)
{
  __int16 loaded_word;
  char unused_written_slot;
  __int64 running_total;
  unsigned __int64 table_value;
  __int16 *loaded_record_pointer;
  __int16 loaded_word_2;

  loaded_word = *a1;
  unused_written_slot = 0;
  running_total = 0;
  while ( loaded_word == *(_WORD *)&byte_140285934[running_total + 36] || loaded_word == *(_WORD *)&byte_140285934[running_total + 52] )
  {
    table_value = a2[2] + 1LL;
    a2[2] = table_value;
    if ( a2[1] && table_value > a2[1] )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_record_pointer = *(__int16 **)(*a2 + 16LL);
      if ( loaded_record_pointer == *(__int16 **)(*a2 + 8LL) || (loaded_word_2 = *loaded_record_pointer, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1), loaded_word = loaded_word_2, loaded_word_2 == -1) )
        loaded_word = 0;
    }
    running_total += 2;
    *a1 = loaded_word;
    if ( running_total == 10 )
      return 1;
  }
  return unused_written_slot;
}

//----- (000000014022AD78) ----------------------------------------------------
__int64            sub_14022AD78(int a1, __int64 a2, unsigned int *a3)
{
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  unsigned int comparison_result;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  unsigned int *input_cursor;
  char unused_written_slot;

  if ( a1 > 5 )
  {
    integer_difference_4 = a1 - 6;
    if ( !integer_difference_4 )
    {
      *a3 = -4194304;
      return 0;
    }
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_6 = integer_difference_5 - 1;
      if ( !integer_difference_6 )
      {
        *a3 = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
        return 2;
      }
      if ( integer_difference_6 == 1 )
      {
        *a3 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800000;
        return 3;
      }
    }
    else
    {
      *a3 = 0;
    }
    return 1;
  }
  if ( a1 == 5 )
  {
    comparison_result = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800001 | 1;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    input_cursor = a3;
    unused_written_slot = 0;
    return sub_14023023C((_DWORD *)a2, (__crt_strtox__floating_point_value *)&input_cursor);
  }
  integer_difference = a1 - 1;
  if ( !integer_difference )
  {
    input_cursor = a3;
    unused_written_slot = 0;
    return sub_140231FC0(a2, (__int64)&input_cursor);
  }
  integer_difference_2 = integer_difference - 1;
  if ( !integer_difference_2 )
  {
    comparison_result = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
    goto LABEL_9;
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
    comparison_result = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800000;
    goto LABEL_9;
  }
  if ( integer_difference_3 != 1 )
    return 1;
  comparison_result = *(_BYTE *)(a2 + 776) != 0 ? -1 : 0x7FFFFFFF;
LABEL_9:
  *a3 = comparison_result;
  return 0;
}

//----- (000000014022AEE8) ----------------------------------------------------
__int64            sub_14022AEE8(int a1, __int64 a2, unsigned __int64 *a3)
{
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  unsigned __int64 comparison_result;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  unsigned __int64 *input_cursor;
  char unused_written_slot;

  if ( a1 > 5 )
  {
    integer_difference_4 = a1 - 6;
    if ( !integer_difference_4 )
    {
      *a3 = 0xFFF8000000000000uLL;
      return 0;
    }
    integer_difference_5 = integer_difference_4 - 1;
    if ( integer_difference_5 )
    {
      integer_difference_6 = integer_difference_5 - 1;
      if ( !integer_difference_6 )
      {
        *a3 = -(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL;
        return 2;
      }
      if ( integer_difference_6 == 1 )
      {
        *a3 = *a3 & 0x7FF0000000000000LL
            | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
            & 0xFFF0000000000000uLL;
        return 3;
      }
    }
    else
    {
      *a3 = 0;
    }
    return 1;
  }
  if ( a1 == 5 )
  {
    comparison_result = *a3 & 0x7FF0000000000000LL
       | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
       & 0xFFF0000000000001uLL
       | 1;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    input_cursor = a3;
    unused_written_slot = 1;
    return sub_14023023C((_DWORD *)a2, (__crt_strtox__floating_point_value *)&input_cursor);
  }
  integer_difference = a1 - 1;
  if ( !integer_difference )
  {
    input_cursor = a3;
    unused_written_slot = 1;
    return sub_140231FC0(a2, (__int64)&input_cursor);
  }
  integer_difference_2 = integer_difference - 1;
  if ( !integer_difference_2 )
  {
    comparison_result = -(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL;
    goto LABEL_9;
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
    comparison_result = *a3 & 0x7FF0000000000000LL
       | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
       & 0xFFF0000000000000uLL;
    goto LABEL_9;
  }
  if ( integer_difference_3 != 1 )
    return 1;
  comparison_result = (-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
  *a3 = comparison_result;
  return 0;
}

//----- (000000014022B0C8) ----------------------------------------------------
unsigned __int64            sub_14022B0C8(
        struct __crt_locale_pointers *a1,
        FILE ***a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int input_value;
  FILE **table_value;
  unsigned __int64 scaled_index;
  FILE **loaded_word;
  FILE **packed_word_bits;
  FILE **table_value_2;
  int getc_nolock_result;
  int option_flags;
  FILE **table_value_3;
  int getc_nolock_result_2;
  int integer_difference;
  int cached_input_value;
  FILE **table_value_4;
  FILE **loaded_word_2;
  int getc_nolock_result_3;
  char saved_getc_nolock_result;
  int cached_input_value_2;
  FILE **table_value_5;
  int getc_nolock_result_4;
  int cached_input_value_3;
  FILE **table_value_6;
  int cached_getc_nolock_result;
  FILE **loaded_word_3;
  unsigned __int64 integer_quotient;
  unsigned int comparison_result;
  __int64 saved_comparison_result;
  FILE **table_value_7;
  bool comparison_result_2;
  int getc_nolock_result_5;
  FILE **table_value_8;
  FILE **loaded_word_4;
  FILE **table_value_9;
  FILE **table_value_10;
  FILE **table_value_11;
  FILE **table_value_12;
  __int64 callee_output_word;
  char scratch_buffer[16];
  char unrecovered_register_value;
  FILE **table_value_13;

  input_value = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    table_value = a2[3];
    if ( table_value )
    {
      if ( !a2[2] )
        *(_BYTE *)table_value = 0;
    }
    return 0;
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a1);
  table_value_13 = a2[2];
  scaled_index = 0;
  a2[2] = (FILE **)((char *)table_value_13 + 1);
  if ( a2[1] && (FILE **)((char *)table_value_13 + 1) > a2[1] || (loaded_word = *a2, LODWORD(packed_word_bits) = getc_nolock(**a2), (_DWORD)packed_word_bits == -1) )
    LOBYTE(packed_word_bits) = 0;
  else
    loaded_word[1] = (FILE *)((char *)loaded_word[1] + 1);
  while ( (unsigned int)crt_isctype_l((unsigned __int8)packed_word_bits, 8, (struct __crt_locale_pointers *)scratch_buffer) )
  {
    table_value_2 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_2;
    if ( a2[1] && table_value_2 > a2[1] || (packed_word_bits = *a2, getc_nolock_result = getc_nolock(**a2), getc_nolock_result == -1) )
    {
      LOBYTE(packed_word_bits) = 0;
    }
    else
    {
      packed_word_bits[1] = (FILE *)((char *)packed_word_bits[1] + 1);
      LOBYTE(packed_word_bits) = getc_nolock_result;
    }
  }
  option_flags = a4 | 2;
  if ( (_BYTE)packed_word_bits != 45 )
    option_flags = a4;
  if ( (((_BYTE)packed_word_bits - 43) & 0xFD) == 0 )
  {
    table_value_3 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_3;
    if ( a2[1] && table_value_3 > a2[1] || (packed_word_bits = *a2, getc_nolock_result_2 = getc_nolock(**a2), getc_nolock_result_2 == -1) )
    {
      LOBYTE(packed_word_bits) = 0;
    }
    else
    {
      packed_word_bits[1] = (FILE *)((char *)packed_word_bits[1] + 1);
      LOBYTE(packed_word_bits) = getc_nolock_result_2;
    }
  }
  if ( (input_value & 0xFFFFFFEF) != 0 )
    goto LABEL_59;
  if ( (unsigned __int8)((_BYTE)packed_word_bits - 48) > 9u )
  {
    if ( (unsigned __int8)((_BYTE)packed_word_bits - 97) > 0x19u )
    {
      if ( (unsigned __int8)((_BYTE)packed_word_bits - 65) > 0x19u )
        integer_difference = -1;
      else
        integer_difference = (char)packed_word_bits - 55;
    }
    else
    {
      integer_difference = (char)packed_word_bits - 87;
    }
  }
  else
  {
    integer_difference = (char)packed_word_bits - 48;
  }
  if ( !integer_difference )
  {
    table_value_4 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_4;
    if ( a2[1] && table_value_4 > a2[1] || (loaded_word_2 = *a2, getc_nolock_result_3 = getc_nolock(**a2), saved_getc_nolock_result = getc_nolock_result_3, getc_nolock_result_3 == -1) )
    {
      saved_getc_nolock_result = 0;
    }
    else
    {
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
      if ( (((_BYTE)getc_nolock_result_3 - 88) & 0xDF) == 0 )
      {
        cached_input_value_2 = 16;
        if ( input_value )
          cached_input_value_2 = input_value;
        input_value = cached_input_value_2;
        table_value_5 = (FILE **)((char *)a2[2] + 1);
        a2[2] = table_value_5;
        if ( a2[1] && table_value_5 > a2[1] || (packed_word_bits = *a2, getc_nolock_result_4 = getc_nolock(**a2), getc_nolock_result_4 == -1) )
        {
          LOBYTE(packed_word_bits) = 0;
        }
        else
        {
          packed_word_bits[1] = (FILE *)((char *)packed_word_bits[1] + 1);
          LOBYTE(packed_word_bits) = getc_nolock_result_4;
        }
        goto LABEL_59;
      }
    }
    cached_input_value_3 = 8;
    if ( input_value )
      cached_input_value_3 = input_value;
    input_value = cached_input_value_3;
    table_value_6 = (FILE **)((char *)a2[2] - 1);
    a2[2] = table_value_6;
    if ( (!a2[1] || table_value_6 <= a2[1]) && (unsigned __int8)(saved_getc_nolock_result + 1) > 1u )
    {
      cached_getc_nolock_result = saved_getc_nolock_result;
      loaded_word_3 = *a2;
      if ( cached_getc_nolock_result != -1 )
      {
        loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] - 1);
        sub_14020CE90(cached_getc_nolock_result, (__int64)*loaded_word_3);
      }
    }
    goto LABEL_59;
  }
  cached_input_value = 10;
  if ( input_value )
    cached_input_value = input_value;
  input_value = cached_input_value;
LABEL_59:
  integer_quotient = 0xFFFFFFFFFFFFFFFFuLL / input_value;
  while ( 1 )
  {
    if ( (unsigned __int8)((_BYTE)packed_word_bits - 48) > 9u )
    {
      if ( (unsigned __int8)((_BYTE)packed_word_bits - 97) > 0x19u )
        comparison_result = (unsigned __int8)((_BYTE)packed_word_bits - 65) > 0x19u ? -1 : (char)packed_word_bits - 55;
      else
        comparison_result = (char)packed_word_bits - 87;
    }
    else
    {
      comparison_result = (char)packed_word_bits - 48;
    }
    if ( comparison_result == -1 || comparison_result >= input_value )
      break;
    option_flags |= 8u;
    if ( scaled_index < integer_quotient )
    {
      saved_comparison_result = comparison_result;
LABEL_74:
      scaled_index = saved_comparison_result + input_value * scaled_index;
      goto LABEL_75;
    }
    if ( scaled_index == integer_quotient )
    {
      saved_comparison_result = comparison_result;
      if ( comparison_result <= 0xFFFFFFFFFFFFFFFFuLL % input_value )
        goto LABEL_74;
    }
    option_flags |= 4u;
LABEL_75:
    table_value_7 = (FILE **)((char *)a2[2] + 1);
    comparison_result_2 = a2[1] == nullptr;
    a2[2] = table_value_7;
    if ( !comparison_result_2 && table_value_7 > a2[1] || (packed_word_bits = *a2, getc_nolock_result_5 = getc_nolock(**a2), getc_nolock_result_5 == -1) )
    {
      LOBYTE(packed_word_bits) = 0;
    }
    else
    {
      packed_word_bits[1] = (FILE *)((char *)packed_word_bits[1] + 1);
      LOBYTE(packed_word_bits) = getc_nolock_result_5;
    }
  }
  table_value_8 = (FILE **)((char *)a2[2] - 1);
  a2[2] = table_value_8;
  if ( (!a2[1] || table_value_8 <= a2[1]) && (unsigned __int8)((_BYTE)packed_word_bits + 1) > 1u )
  {
    loaded_word_4 = *a2;
    if ( (char)packed_word_bits != -1 )
    {
      loaded_word_4[1] = (FILE *)((char *)loaded_word_4[1] - 1);
      sub_14020CE90((char)packed_word_bits, (__int64)*loaded_word_4);
    }
  }
  if ( (option_flags & 8) != 0 )
  {
    if ( sub_1402257B4(option_flags, scaled_index) )
    {
      *errno_sr() = 34;
      if ( (option_flags & 1) != 0 )
      {
        if ( (option_flags & 2) != 0 )
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(callee_output_word + 936) &= ~2u;
          table_value_10 = a2[3];
          if ( table_value_10 && !a2[2] )
            *(_BYTE *)table_value_10 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(callee_output_word + 936) &= ~2u;
          table_value_11 = a2[3];
          if ( table_value_11 && !a2[2] )
            *(_BYTE *)table_value_11 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      scaled_index = -1;
    }
    else if ( (option_flags & 2) != 0 )
    {
      scaled_index = -(__int64)scaled_index;
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
    table_value_12 = a2[3];
    if ( table_value_12 && !a2[2] )
      *(_BYTE *)table_value_12 = 0;
    return scaled_index;
  }
  if ( table_value_13 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  table_value_9 = a2[3];
  if ( table_value_9 && !a2[2] )
    *(_BYTE *)table_value_9 = 0;
  return 0;
}

//----- (000000014022B534) ----------------------------------------------------
unsigned __int64            sub_14022B534(
        struct __crt_locale_pointers *a1,
        FILE ***a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int input_value;
  FILE **table_value;
  unsigned __int64 scaled_index;
  unsigned __int64 integer_sum;
  FILE **loaded_word;
  unsigned __int16 call_result;
  FILE **table_value_2;
  FILE **loaded_word_2;
  unsigned __int16 call_result_2;
  int option_flags;
  FILE **table_value_3;
  int selection_code;
  __int64 selection_code_2;
  int integer_difference;
  FILE **loaded_word_3;
  unsigned __int16 call_result_3;
  unsigned int integer_difference_2;
  int integer_difference_3;
  int cached_input_value;
  FILE **table_value_4;
  __int64 cached_call_result;
  FILE **loaded_word_4;
  unsigned __int16 call_result_4;
  int cached_input_value_2;
  FILE **table_value_5;
  FILE **loaded_word_5;
  unsigned __int16 call_result_5;
  int cached_input_value_3;
  FILE **table_value_6;
  FILE **loaded_word_6;
  unsigned __int64 integer_quotient;
  int selection_code_3;
  unsigned int integer_difference_4;
  unsigned int integer_difference_5;
  int integer_difference_6;
  __int64 cached_integer_difference;
  FILE **table_value_7;
  FILE **loaded_word_7;
  unsigned __int16 call_result_6;
  FILE **table_value_8;
  FILE **loaded_word_8;
  FILE **table_value_9;
  FILE **table_value_10;
  FILE **table_value_11;
  FILE **table_value_12;
  __int64 scratch_buffer[3];
  char unrecovered_register_value;
  FILE **table_value_13;

  input_value = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    table_value = a2[3];
    if ( table_value )
    {
      if ( !a2[2] )
        *(_BYTE *)table_value = 0;
    }
    return 0;
  }
  crt_locale_update((_LocaleUpdate *)scratch_buffer, a1);
  scaled_index = 0;
  table_value_13 = a2[2];
  integer_sum = (unsigned __int64)table_value_13 + 1;
  a2[2] = (FILE **)((char *)table_value_13 + 1);
  if ( a2[1] && integer_sum > (unsigned __int64)a2[1] )
    goto LABEL_18;
  loaded_word = *a2;
  call_result = j__fgetwc_nolock(**a2);
  if ( call_result == 0xFFFF )
    call_result = 0;
  else
    loaded_word[1] = (FILE *)((char *)loaded_word[1] + 1);
  while ( (unsigned int)sub_140256E00(call_result, 8) )
  {
    table_value_2 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_2;
    if ( a2[1] && table_value_2 > a2[1] || (loaded_word_2 = *a2, call_result_2 = j__fgetwc_nolock(**a2), call_result_2 == 0xFFFF) )
    {
LABEL_18:
      call_result = 0;
    }
    else
    {
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
      call_result = call_result_2;
    }
  }
  option_flags = a4 | 2;
  if ( call_result != 45 )
    option_flags = a4;
  if ( ((call_result - 43) & 0xFFFD) == 0 )
  {
    table_value_3 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_3;
    if ( a2[1] && table_value_3 > a2[1] )
    {
      call_result = 0;
    }
    else
    {
      loaded_word_3 = *a2;
      call_result_3 = j__fgetwc_nolock(**a2);
      if ( call_result_3 == 0xFFFF )
      {
        call_result = 0;
      }
      else
      {
        loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] + 1);
        call_result = call_result_3;
      }
    }
  }
  selection_code = 48;
  selection_code_2 = 1632;
  if ( (input_value & 0xFFFFFFEF) != 0 )
    goto LABEL_105;
  if ( call_result >= 0x30u )
  {
    if ( call_result < 0x3Au )
    {
LABEL_29:
      integer_difference = call_result - selection_code;
      goto LABEL_75;
    }
    if ( call_result >= 0xFF10u )
    {
      if ( call_result >= 0xFF1Au )
        integer_difference = -1;
      else
        integer_difference = call_result - 65296;
LABEL_75:
      if ( integer_difference != -1 )
        goto LABEL_82;
      goto LABEL_76;
    }
    if ( call_result >= 0x660u )
    {
      if ( call_result < 0x66Au )
      {
        integer_difference = call_result - 1632;
        goto LABEL_75;
      }
      if ( call_result >= 0x6F0u )
      {
        if ( call_result < 0x6FAu )
        {
          integer_difference = call_result - 1776;
          goto LABEL_75;
        }
        if ( call_result >= 0x966u )
        {
          if ( call_result < 0x970u )
          {
            integer_difference = call_result - 2406;
            goto LABEL_75;
          }
          if ( call_result >= 0x9E6u )
          {
            if ( call_result < 0x9F0u )
            {
              integer_difference = call_result - 2534;
              goto LABEL_75;
            }
            if ( call_result >= 0xA66u )
            {
              if ( call_result < 0xA70u )
              {
                integer_difference = call_result - 2662;
                goto LABEL_75;
              }
              if ( call_result >= 0xAE6u )
              {
                if ( call_result < 0xAF0u )
                {
                  integer_difference = call_result - 2790;
                  goto LABEL_75;
                }
                selection_code = 2918;
                if ( call_result >= 0xB66u )
                {
                  if ( call_result < 0xB70u )
                    goto LABEL_29;
                  selection_code = 3174;
                  if ( call_result >= 0xC66u )
                  {
                    if ( call_result < 0xC70u )
                      goto LABEL_29;
                    selection_code = 3302;
                    if ( call_result >= 0xCE6u )
                    {
                      if ( call_result < 0xCF0u )
                        goto LABEL_29;
                      selection_code = 3430;
                      if ( call_result >= 0xD66u )
                      {
                        if ( call_result < 0xD70u )
                          goto LABEL_29;
                        selection_code = 3664;
                        if ( call_result >= 0xE50u )
                        {
                          if ( call_result < 0xE5Au )
                            goto LABEL_29;
                          selection_code = 3792;
                          if ( call_result >= 0xED0u )
                          {
                            if ( call_result < 0xEDAu )
                              goto LABEL_29;
                            selection_code = 3872;
                            if ( call_result >= 0xF20u )
                            {
                              if ( call_result < 0xF2Au )
                                goto LABEL_29;
                              selection_code = 4160;
                              if ( call_result >= 0x1040u )
                              {
                                if ( call_result < 0x104Au )
                                  goto LABEL_29;
                                selection_code = 6112;
                                if ( call_result >= 0x17E0u )
                                {
                                  if ( call_result < 0x17EAu )
                                    goto LABEL_29;
                                  selection_code = 6160;
                                  if ( (unsigned __int16)(call_result - 6160) <= 9u )
                                    goto LABEL_29;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_76:
  integer_difference_2 = call_result - 97;
  if ( (unsigned int)call_result - 65 <= 0x19 || integer_difference_2 <= 0x19 )
  {
    integer_difference_3 = call_result - 32;
    if ( integer_difference_2 > 0x19 )
      integer_difference_3 = call_result;
    integer_difference = integer_difference_3 - 55;
  }
  else
  {
    integer_difference = -1;
  }
LABEL_82:
  if ( integer_difference )
  {
    cached_input_value = 10;
    if ( input_value )
      cached_input_value = input_value;
    input_value = cached_input_value;
  }
  else
  {
    table_value_4 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_4;
    if ( a2[1] && table_value_4 > a2[1] )
    {
      cached_call_result = 0;
    }
    else
    {
      loaded_word_4 = *a2;
      call_result_4 = j__fgetwc_nolock(**a2);
      cached_call_result = call_result_4;
      if ( call_result_4 == 0xFFFF )
      {
        cached_call_result = 0;
      }
      else
      {
        loaded_word_4[1] = (FILE *)((char *)loaded_word_4[1] + 1);
        if ( ((call_result_4 - 88) & 0xFFDF) == 0 )
        {
          cached_input_value_2 = 16;
          if ( input_value )
            cached_input_value_2 = input_value;
          input_value = cached_input_value_2;
          table_value_5 = (FILE **)((char *)a2[2] + 1);
          a2[2] = table_value_5;
          if ( a2[1] && table_value_5 > a2[1] || (loaded_word_5 = *a2, call_result_5 = j__fgetwc_nolock(**a2), call_result_5 == 0xFFFF) )
          {
            call_result = 0;
          }
          else
          {
            loaded_word_5[1] = (FILE *)((char *)loaded_word_5[1] + 1);
            call_result = call_result_5;
          }
          goto LABEL_105;
        }
      }
    }
    cached_input_value_3 = 8;
    if ( input_value )
      cached_input_value_3 = input_value;
    input_value = cached_input_value_3;
    table_value_6 = (FILE **)((char *)a2[2] - 1);
    a2[2] = table_value_6;
    if ( (!a2[1] || table_value_6 <= a2[1]) && (unsigned __int16)(cached_call_result - 1) <= 0xFFFDu )
    {
      loaded_word_6 = *a2;
      loaded_word_6[1] = (FILE *)((char *)loaded_word_6[1] - 1);
      ungetwc_nolock(cached_call_result, *loaded_word_6, selection_code_2);
    }
  }
LABEL_105:
  integer_quotient = 0xFFFFFFFFFFFFFFFFuLL / input_value;
  while ( 1 )
  {
    selection_code_3 = 48;
    if ( call_result >= 0x30u )
    {
      if ( call_result < 0x3Au )
        goto LABEL_108;
      selection_code_3 = 65296;
      if ( call_result >= 0xFF10u )
      {
        if ( call_result < 0xFF1Au )
LABEL_108:
          integer_difference_4 = call_result - selection_code_3;
        else
          integer_difference_4 = -1;
LABEL_144:
        if ( integer_difference_4 != -1 )
          goto LABEL_151;
        goto LABEL_145;
      }
      selection_code_3 = 1632;
      if ( call_result >= 0x660u )
      {
        if ( call_result < 0x66Au )
          goto LABEL_108;
        selection_code_3 = 1776;
        if ( call_result >= 0x6F0u )
        {
          if ( call_result < 0x6FAu )
            goto LABEL_108;
          selection_code_3 = 2406;
          if ( call_result >= 0x966u )
          {
            if ( call_result < 0x970u )
              goto LABEL_108;
            selection_code_3 = 2534;
            if ( call_result >= 0x9E6u )
            {
              if ( call_result < 0x9F0u )
                goto LABEL_108;
              selection_code_3 = 2662;
              if ( call_result >= 0xA66u )
              {
                if ( call_result < 0xA70u )
                  goto LABEL_108;
                selection_code_3 = 2790;
                if ( call_result >= 0xAE6u )
                {
                  if ( call_result < 0xAF0u )
                    goto LABEL_108;
                  selection_code_3 = 2918;
                  if ( call_result >= 0xB66u )
                  {
                    if ( call_result < 0xB70u )
                      goto LABEL_108;
                    selection_code_3 = 3174;
                    if ( call_result >= 0xC66u )
                    {
                      if ( call_result < 0xC70u )
                        goto LABEL_108;
                      selection_code_3 = 3302;
                      if ( call_result >= 0xCE6u )
                      {
                        if ( call_result < 0xCF0u )
                          goto LABEL_108;
                        selection_code_3 = 3430;
                        if ( call_result >= 0xD66u )
                        {
                          if ( call_result < 0xD70u )
                            goto LABEL_108;
                          selection_code_3 = 3664;
                          if ( call_result >= 0xE50u )
                          {
                            if ( call_result < 0xE5Au )
                              goto LABEL_108;
                            selection_code_3 = 3792;
                            if ( call_result >= 0xED0u )
                            {
                              if ( call_result < 0xEDAu )
                                goto LABEL_108;
                              selection_code_3 = 3872;
                              if ( call_result >= 0xF20u )
                              {
                                if ( call_result < 0xF2Au )
                                  goto LABEL_108;
                                selection_code_3 = 4160;
                                if ( call_result >= 0x1040u )
                                {
                                  if ( call_result < 0x104Au )
                                    goto LABEL_108;
                                  selection_code_3 = 6112;
                                  if ( call_result >= 0x17E0u )
                                  {
                                    if ( call_result < 0x17EAu )
                                      goto LABEL_108;
                                    if ( (unsigned __int16)(call_result - 6160) <= 9u )
                                    {
                                      integer_difference_4 = call_result - 6160;
                                      goto LABEL_144;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_145:
    integer_difference_5 = call_result - 97;
    if ( (unsigned int)call_result - 65 <= 0x19 || integer_difference_5 <= 0x19 )
    {
      integer_difference_6 = call_result - 32;
      if ( integer_difference_5 > 0x19 )
        integer_difference_6 = call_result;
      integer_difference_4 = integer_difference_6 - 55;
    }
    else
    {
      integer_difference_4 = -1;
    }
LABEL_151:
    if ( integer_difference_4 == -1 || integer_difference_4 >= input_value )
      break;
    option_flags |= 8u;
    if ( scaled_index < integer_quotient )
    {
      cached_integer_difference = integer_difference_4;
    }
    else if ( scaled_index != integer_quotient || (cached_integer_difference = integer_difference_4, integer_difference_4 > 0xFFFFFFFFFFFFFFFFuLL % input_value) )
    {
      option_flags |= 4u;
      goto LABEL_159;
    }
    scaled_index = cached_integer_difference + input_value * scaled_index;
LABEL_159:
    table_value_7 = (FILE **)((char *)a2[2] + 1);
    a2[2] = table_value_7;
    if ( a2[1] && table_value_7 > a2[1] )
    {
      call_result = 0;
    }
    else
    {
      loaded_word_7 = *a2;
      call_result_6 = j__fgetwc_nolock(**a2);
      if ( call_result_6 == 0xFFFF )
        call_result_6 = 0;
      else
        loaded_word_7[1] = (FILE *)((char *)loaded_word_7[1] + 1);
      call_result = call_result_6;
    }
  }
  table_value_8 = (FILE **)((char *)a2[2] - 1);
  a2[2] = table_value_8;
  if ( (!a2[1] || table_value_8 <= a2[1]) && (unsigned __int16)(call_result - 1) <= 0xFFFDu )
  {
    loaded_word_8 = *a2;
    loaded_word_8[1] = (FILE *)((char *)loaded_word_8[1] - 1);
    ungetwc_nolock(call_result, *loaded_word_8, 1);
  }
  if ( (option_flags & 8) != 0 )
  {
    if ( sub_1402257B4(option_flags, scaled_index) )
    {
      *errno_sr() = 34;
      if ( (option_flags & 1) != 0 )
      {
        if ( (option_flags & 2) != 0 )
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
          table_value_10 = a2[3];
          if ( table_value_10 && !a2[2] )
            *(_BYTE *)table_value_10 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
          table_value_11 = a2[3];
          if ( table_value_11 && !a2[2] )
            *(_BYTE *)table_value_11 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      scaled_index = -1;
    }
    else if ( (option_flags & 2) != 0 )
    {
      scaled_index = -(__int64)scaled_index;
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
    table_value_12 = a2[3];
    if ( table_value_12 && !a2[2] )
      *(_BYTE *)table_value_12 = 0;
    return scaled_index;
  }
  if ( table_value_13 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
  table_value_9 = a2[3];
  if ( table_value_9 && !a2[2] )
    *(_BYTE *)table_value_9 = 0;
  return 0;
}

//----- (000000014022BE60) ----------------------------------------------------
unsigned __int64            sub_14022BE60(
        struct __crt_locale_pointers *a1,
        _QWORD *a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int input_value;
  __int64 table_value;
  unsigned __int64 scaled_index;
  unsigned __int64 i;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word;
  int input_value_2;
  int option_flags;
  unsigned __int64 table_value_2;
  unsigned __int8 *loaded_record_pointer_2;
  int integer_difference;
  int cached_input_value;
  unsigned __int64 table_value_3;
  unsigned __int64 table_value_4;
  char input_byte;
  char *loaded_record_pointer_3;
  int cached_input_value_2;
  unsigned __int64 integer_difference_2;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  _BYTE *byte_cursor;
  int cached_input_value_3;
  unsigned __int64 integer_sum;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned __int64 integer_quotient;
  unsigned int comparison_result;
  __int64 saved_comparison_result;
  unsigned __int64 table_value_5;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int64 integer_difference_3;
  __int64 loaded_word_4;
  _BYTE *table_value_6;
  _BYTE *table_value_7;
  _BYTE *table_value_8;
  _BYTE *table_value_9;
  struct { uint64_t thread, pair[2]; unsigned char changed, padding[7]; } number_locale;
  _Static_assert(sizeof(number_locale)==32, "Native integer locale");

  input_value = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_86;
  }
  crt_locale_update((_LocaleUpdate *)&number_locale, a1);
  table_value = a2[2];
  scaled_index = 0;
  for ( i = table_value + 1; ; i = a2[2] + 1LL )
  {
    if ( (a2[2] = i, a2[1]) && i > a2[1]
      || (loaded_record_pointer = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word = *loaded_record_pointer;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    if ( !(unsigned int)crt_isctype_l(loaded_word, 8, (struct __crt_locale_pointers *)number_locale.pair) )
      break;
  }
  input_value_2 = a4;
  option_flags = a4 | 2;
  if ( loaded_word != 45 )
    option_flags = input_value_2;
  if ( ((loaded_word - 43) & 0xFD) == 0 )
  {
    table_value_2 = a2[2] + 1LL;
    a2[2] = table_value_2;
    if ( a2[1] && table_value_2 > a2[1] || (loaded_record_pointer_2 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_2 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word = *loaded_record_pointer_2;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    }
  }
  if ( (input_value & 0xFFFFFFEF) != 0 )
    goto LABEL_55;
  if ( (unsigned __int8)(loaded_word - 48) > 9u )
  {
    if ( (unsigned __int8)(loaded_word - 97) > 0x19u )
    {
      if ( (unsigned __int8)(loaded_word - 65) > 0x19u )
        integer_difference = -1;
      else
        integer_difference = (char)loaded_word - 55;
    }
    else
    {
      integer_difference = (char)loaded_word - 87;
    }
  }
  else
  {
    integer_difference = (char)loaded_word - 48;
  }
  if ( integer_difference )
  {
    cached_input_value = 10;
    if ( input_value )
      cached_input_value = input_value;
    input_value = cached_input_value;
    goto LABEL_55;
  }
  table_value_3 = a2[1];
  table_value_4 = a2[2] + 1LL;
  a2[2] = table_value_4;
  if ( table_value_3 && table_value_4 > table_value_3 || (loaded_record_pointer_3 = *(char **)(*a2 + 16LL), loaded_record_pointer_3 == *(char **)(*a2 + 8LL)) )
  {
    input_byte = 0;
  }
  else
  {
    input_byte = *loaded_record_pointer_3;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    table_value_4 = a2[2];
    table_value_3 = a2[1];
  }
  if ( ((input_byte - 88) & 0xDF) != 0 )
  {
    cached_input_value_2 = 8;
    if ( input_value )
      cached_input_value_2 = input_value;
    integer_difference_2 = table_value_4 - 1;
    a2[2] = integer_difference_2;
    input_value = cached_input_value_2;
    if ( table_value_3 && integer_difference_2 > table_value_3 )
      goto LABEL_55;
    if ( (unsigned __int8)(input_byte + 1) <= 1u )
      goto LABEL_55;
    loaded_word_2 = *a2;
    loaded_word_3 = *(_QWORD *)(*a2 + 16LL);
    if ( loaded_word_3 == *(_QWORD *)*a2 )
      goto LABEL_55;
    byte_cursor = (_BYTE *)(loaded_word_3 - 1);
  }
  else
  {
    cached_input_value_3 = 16;
    if ( input_value )
      cached_input_value_3 = input_value;
    integer_sum = table_value_4 + 1;
    a2[2] = integer_sum;
    input_value = cached_input_value_3;
    if ( table_value_3 && integer_sum > table_value_3
      || (loaded_word_2 = *a2, loaded_record_pointer_4 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_4 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      loaded_word = 0;
      goto LABEL_55;
    }
    loaded_word = *loaded_record_pointer_4;
    byte_cursor = loaded_record_pointer_4 + 1;
  }
  *(_QWORD *)(loaded_word_2 + 16) = (uint64)(uintptr_t)(byte_cursor);
LABEL_55:
  integer_quotient = 0xFFFFFFFFFFFFFFFFuLL / input_value;
  while ( 1 )
  {
    if ( (unsigned __int8)(loaded_word - 48) > 9u )
    {
      if ( (unsigned __int8)(loaded_word - 97) > 0x19u )
        comparison_result = (unsigned __int8)(loaded_word - 65) > 0x19u ? -1 : (char)loaded_word - 55;
      else
        comparison_result = (char)loaded_word - 87;
    }
    else
    {
      comparison_result = (char)loaded_word - 48;
    }
    if ( comparison_result == -1 || comparison_result >= input_value )
      break;
    option_flags |= 8u;
    if ( scaled_index < integer_quotient )
    {
      saved_comparison_result = comparison_result;
LABEL_70:
      scaled_index = saved_comparison_result + input_value * scaled_index;
      goto LABEL_71;
    }
    if ( scaled_index == integer_quotient )
    {
      saved_comparison_result = comparison_result;
      if ( comparison_result <= 0xFFFFFFFFFFFFFFFFuLL % input_value )
        goto LABEL_70;
    }
    option_flags |= 4u;
LABEL_71:
    table_value_5 = a2[2] + 1LL;
    a2[2] = table_value_5;
    if ( a2[1] && table_value_5 > a2[1] || (loaded_record_pointer_5 = *(unsigned __int8 **)(*a2 + 16LL), loaded_record_pointer_5 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word = *loaded_record_pointer_5;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
    }
  }
  integer_difference_3 = a2[2] - 1LL;
  a2[2] = integer_difference_3;
  if ( (!a2[1] || integer_difference_3 <= a2[1]) && (unsigned __int8)(loaded_word + 1) > 1u )
  {
    loaded_word_4 = *(_QWORD *)(*a2 + 16LL);
    if ( loaded_word_4 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = loaded_word_4 - 1;
  }
  if ( (option_flags & 8) != 0 )
  {
    if ( sub_1402257B4(option_flags, scaled_index) )
    {
      *errno_sr() = 34;
      if ( (option_flags & 1) != 0 )
      {
        if ( (option_flags & 2) != 0 )
        {
          if ( number_locale.changed )
            *(_DWORD *)(number_locale.thread + 936) &= ~2u;
          table_value_7 = (_BYTE *)a2[3];
          if ( table_value_7 && !a2[2] )
            *table_value_7 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( number_locale.changed )
            *(_DWORD *)(number_locale.thread + 936) &= ~2u;
          table_value_8 = (_BYTE *)a2[3];
          if ( table_value_8 && !a2[2] )
            *table_value_8 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      scaled_index = -1;
    }
    else if ( (option_flags & 2) != 0 )
    {
      scaled_index = 0ULL - scaled_index;
    }
    if ( number_locale.changed )
      *(_DWORD *)(number_locale.thread + 936) &= ~2u;
    table_value_9 = (_BYTE *)a2[3];
    if ( table_value_9 && !a2[2] )
      *table_value_9 = 0;
    return scaled_index;
  }
  if ( table_value != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( number_locale.changed )
    *(_DWORD *)(number_locale.thread + 936) &= ~2u;
LABEL_86:
  table_value_6 = (_BYTE *)a2[3];
  if ( table_value_6 )
  {
    if ( !a2[2] )
      *table_value_6 = 0;
  }
  return 0;
}

//----- (000000014022C26C) ----------------------------------------------------
unsigned __int64            sub_14022C26C(
        struct __crt_locale_pointers *a1,
        _QWORD *a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int input_value;
  unsigned __int64 scaled_index;
  unsigned __int16 *loaded_record_pointer;
  unsigned __int16 loaded_word;
  unsigned __int64 table_value;
  unsigned __int16 *loaded_record_pointer_2;
  unsigned __int16 loaded_word_2;
  int input_value_2;
  int option_flags;
  unsigned __int64 table_value_2;
  unsigned __int16 *loaded_record_pointer_3;
  unsigned __int16 loaded_word_3;
  int selection_code;
  int integer_difference;
  unsigned int integer_difference_2;
  int saved_loaded_word;
  int cached_input_value;
  unsigned __int64 table_value_3;
  unsigned __int64 table_value_4;
  __int16 saved_loaded_word_2;
  __int16 *loaded_record_pointer_4;
  __int16 loaded_word_4;
  int cached_input_value_2;
  unsigned __int64 integer_difference_3;
  __int64 loaded_word_5;
  int cached_input_value_3;
  unsigned __int64 integer_sum;
  unsigned __int16 *loaded_record_pointer_5;
  unsigned __int16 loaded_word_6;
  unsigned __int64 integer_quotient;
  unsigned int integer_difference_4;
  int selection_code_2;
  unsigned int integer_difference_5;
  int saved_loaded_word_3;
  __int64 cached_integer_difference;
  unsigned __int64 table_value_5;
  unsigned __int16 *loaded_record_pointer_6;
  unsigned __int16 loaded_word_7;
  unsigned __int64 integer_difference_6;
  __int64 loaded_word_8;
  _BYTE *table_value_6;
  _BYTE *table_value_7;
  _BYTE *table_value_8;
  _BYTE *table_value_9;
  __int64 scratch_buffer[3];
  char unrecovered_register_value;
  __int64 table_value_10;

  input_value = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_172;
  }
  crt_locale_update((_LocaleUpdate *)scratch_buffer, a1);
  scaled_index = 0;
  table_value_10 = a2[2];
  a2[2] = table_value_10 + 1;
  if ( a2[1] && (unsigned __int64)(table_value_10 + 1) > a2[1] )
    goto LABEL_15;
  loaded_record_pointer = *(unsigned __int16 **)(*a2 + 16LL);
  if ( loaded_record_pointer == *(unsigned __int16 **)(*a2 + 8LL) || (loaded_word = *loaded_record_pointer, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1), loaded_word == 0xFFFF) )
    loaded_word = 0;
  while ( (unsigned int)sub_140256E00(loaded_word, 8) )
  {
    table_value = a2[2] + 1LL;
    a2[2] = table_value;
    if ( !a2[1] || table_value <= a2[1] )
    {
      loaded_record_pointer_2 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( loaded_record_pointer_2 != *(unsigned __int16 **)(*a2 + 8LL) )
      {
        loaded_word_2 = *loaded_record_pointer_2;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
        loaded_word = loaded_word_2;
        if ( loaded_word_2 != 0xFFFF )
          continue;
      }
    }
LABEL_15:
    loaded_word = 0;
  }
  input_value_2 = a4;
  option_flags = a4 | 2;
  if ( loaded_word != 45 )
    option_flags = input_value_2;
  if ( ((loaded_word - 43) & 0xFFFD) == 0 )
  {
    if ( (table_value_2 = a2[2] + 1LL, a2[2] = table_value_2, a2[1]) && table_value_2 > a2[1]
      || (loaded_record_pointer_3 = *(unsigned __int16 **)(*a2 + 16LL), loaded_record_pointer_3 == *(unsigned __int16 **)(*a2 + 8LL))
      || (loaded_word_3 = *loaded_record_pointer_3, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1), loaded_word = loaded_word_3, loaded_word_3 == 0xFFFF) )
    {
      loaded_word = 0;
    }
  }
  selection_code = 48;
  if ( (input_value & 0xFFFFFFEF) != 0 )
    goto LABEL_101;
  if ( loaded_word < 0x30u )
    goto LABEL_69;
  if ( loaded_word < 0x3Au )
    goto LABEL_28;
  if ( loaded_word < 0xFF10u )
  {
    if ( loaded_word >= 0x660u )
    {
      if ( loaded_word < 0x66Au )
      {
        integer_difference = loaded_word - 1632;
        goto LABEL_68;
      }
      if ( loaded_word >= 0x6F0u )
      {
        if ( loaded_word < 0x6FAu )
        {
          integer_difference = loaded_word - 1776;
          goto LABEL_68;
        }
        if ( loaded_word >= 0x966u )
        {
          if ( loaded_word < 0x970u )
          {
            integer_difference = loaded_word - 2406;
            goto LABEL_68;
          }
          selection_code = 2534;
          if ( loaded_word >= 0x9E6u )
          {
            if ( loaded_word < 0x9F0u )
              goto LABEL_28;
            selection_code = 2662;
            if ( loaded_word >= 0xA66u )
            {
              if ( loaded_word < 0xA70u )
                goto LABEL_28;
              selection_code = 2790;
              if ( loaded_word >= 0xAE6u )
              {
                if ( loaded_word < 0xAF0u )
                  goto LABEL_28;
                selection_code = 2918;
                if ( loaded_word >= 0xB66u )
                {
                  if ( loaded_word < 0xB70u )
                    goto LABEL_28;
                  selection_code = 3174;
                  if ( loaded_word >= 0xC66u )
                  {
                    if ( loaded_word < 0xC70u )
                      goto LABEL_28;
                    selection_code = 3302;
                    if ( loaded_word >= 0xCE6u )
                    {
                      if ( loaded_word < 0xCF0u
                        || (selection_code = 3430, loaded_word >= 0xD66u)
                        && (loaded_word < 0xD70u
                         || (selection_code = 3664, loaded_word >= 0xE50u)
                         && (loaded_word < 0xE5Au
                          || (selection_code = 3792, loaded_word >= 0xED0u)
                          && (loaded_word < 0xEDAu
                           || (selection_code = 3872, loaded_word >= 0xF20u)
                           && (loaded_word < 0xF2Au
                            || (selection_code = 4160, loaded_word >= 0x1040u)
                            && (loaded_word < 0x104Au
                             || (selection_code = 6112, loaded_word >= 0x17E0u)
                             && (loaded_word < 0x17EAu || (selection_code = 6160, (unsigned __int16)(loaded_word - 6160) <= 9u))))))) )
                      {
LABEL_28:
                        integer_difference = loaded_word - selection_code;
                        goto LABEL_68;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_69:
    integer_difference_2 = loaded_word - 97;
    if ( (unsigned int)loaded_word - 65 <= 0x19 || integer_difference_2 <= 0x19 )
    {
      saved_loaded_word = loaded_word - 32;
      if ( integer_difference_2 > 0x19 )
        saved_loaded_word = loaded_word;
      integer_difference = saved_loaded_word - 55;
    }
    else
    {
      integer_difference = -1;
    }
    goto LABEL_75;
  }
  if ( loaded_word >= 0xFF1Au )
    integer_difference = -1;
  else
    integer_difference = loaded_word - 65296;
LABEL_68:
  if ( integer_difference == -1 )
    goto LABEL_69;
LABEL_75:
  if ( integer_difference )
  {
    cached_input_value = 10;
    if ( input_value )
      cached_input_value = input_value;
    input_value = cached_input_value;
  }
  else
  {
    table_value_3 = a2[1];
    table_value_4 = a2[2] + 1LL;
    a2[2] = table_value_4;
    if ( table_value_3 && table_value_4 > table_value_3 )
    {
      saved_loaded_word_2 = 0;
    }
    else
    {
      loaded_record_pointer_4 = *(__int16 **)(*a2 + 16LL);
      if ( loaded_record_pointer_4 == *(__int16 **)(*a2 + 8LL)
        || (loaded_word_4 = *loaded_record_pointer_4, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1), table_value_4 = a2[2], table_value_3 = a2[1], loaded_word_4 == -1) )
      {
        saved_loaded_word_2 = 0;
      }
      else
      {
        saved_loaded_word_2 = loaded_word_4;
      }
    }
    if ( ((saved_loaded_word_2 - 88) & 0xFFDF) != 0 )
    {
      cached_input_value_2 = 8;
      if ( input_value )
        cached_input_value_2 = input_value;
      integer_difference_3 = table_value_4 - 1;
      a2[2] = integer_difference_3;
      input_value = cached_input_value_2;
      if ( (!table_value_3 || integer_difference_3 <= table_value_3) && (unsigned __int16)(saved_loaded_word_2 - 1) <= 0xFFFDu )
      {
        loaded_word_5 = *(_QWORD *)(*a2 + 16LL);
        if ( loaded_word_5 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = loaded_word_5 - 2;
      }
    }
    else
    {
      cached_input_value_3 = 16;
      if ( input_value )
        cached_input_value_3 = input_value;
      integer_sum = table_value_4 + 1;
      a2[2] = integer_sum;
      input_value = cached_input_value_3;
      if ( table_value_3 && integer_sum > table_value_3
        || (loaded_record_pointer_5 = *(unsigned __int16 **)(*a2 + 16LL), loaded_record_pointer_5 == *(unsigned __int16 **)(*a2 + 8LL))
        || (loaded_word_6 = *loaded_record_pointer_5, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1), loaded_word = loaded_word_6, loaded_word_6 == 0xFFFF) )
      {
        loaded_word = 0;
      }
    }
  }
LABEL_101:
  integer_quotient = 0xFFFFFFFFFFFFFFFFuLL / input_value;
  while ( 1 )
  {
    if ( loaded_word >= 0x30u )
    {
      if ( loaded_word < 0x3Au )
      {
        integer_difference_4 = loaded_word - 48;
        goto LABEL_141;
      }
      selection_code_2 = 65296;
      if ( loaded_word >= 0xFF10u )
      {
        if ( loaded_word < 0xFF1Au )
LABEL_108:
          integer_difference_4 = loaded_word - selection_code_2;
        else
          integer_difference_4 = -1;
LABEL_141:
        if ( integer_difference_4 != -1 )
          goto LABEL_148;
        goto LABEL_142;
      }
      selection_code_2 = 1632;
      if ( loaded_word >= 0x660u )
      {
        if ( loaded_word < 0x66Au )
          goto LABEL_108;
        selection_code_2 = 1776;
        if ( loaded_word >= 0x6F0u )
        {
          if ( loaded_word < 0x6FAu )
            goto LABEL_108;
          selection_code_2 = 2406;
          if ( loaded_word >= 0x966u )
          {
            if ( loaded_word < 0x970u )
              goto LABEL_108;
            selection_code_2 = 2534;
            if ( loaded_word >= 0x9E6u )
            {
              if ( loaded_word < 0x9F0u )
                goto LABEL_108;
              selection_code_2 = 2662;
              if ( loaded_word >= 0xA66u )
              {
                if ( loaded_word < 0xA70u )
                  goto LABEL_108;
                selection_code_2 = 2790;
                if ( loaded_word >= 0xAE6u )
                {
                  if ( loaded_word < 0xAF0u )
                    goto LABEL_108;
                  selection_code_2 = 2918;
                  if ( loaded_word >= 0xB66u )
                  {
                    if ( loaded_word < 0xB70u )
                      goto LABEL_108;
                    selection_code_2 = 3174;
                    if ( loaded_word >= 0xC66u )
                    {
                      if ( loaded_word < 0xC70u )
                        goto LABEL_108;
                      selection_code_2 = 3302;
                      if ( loaded_word >= 0xCE6u )
                      {
                        if ( loaded_word < 0xCF0u )
                          goto LABEL_108;
                        selection_code_2 = 3430;
                        if ( loaded_word >= 0xD66u )
                        {
                          if ( loaded_word < 0xD70u )
                            goto LABEL_108;
                          selection_code_2 = 3664;
                          if ( loaded_word >= 0xE50u )
                          {
                            if ( loaded_word < 0xE5Au )
                              goto LABEL_108;
                            selection_code_2 = 3792;
                            if ( loaded_word >= 0xED0u )
                            {
                              if ( loaded_word < 0xEDAu )
                                goto LABEL_108;
                              selection_code_2 = 3872;
                              if ( loaded_word >= 0xF20u )
                              {
                                if ( loaded_word < 0xF2Au )
                                  goto LABEL_108;
                                selection_code_2 = 4160;
                                if ( loaded_word >= 0x1040u )
                                {
                                  if ( loaded_word < 0x104Au )
                                    goto LABEL_108;
                                  selection_code_2 = 6112;
                                  if ( loaded_word >= 0x17E0u )
                                  {
                                    if ( loaded_word < 0x17EAu )
                                      goto LABEL_108;
                                    if ( (unsigned __int16)(loaded_word - 6160) <= 9u )
                                    {
                                      integer_difference_4 = loaded_word - 6160;
                                      goto LABEL_141;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_142:
    integer_difference_5 = loaded_word - 97;
    if ( (unsigned int)loaded_word - 65 <= 0x19 || integer_difference_5 <= 0x19 )
    {
      saved_loaded_word_3 = loaded_word - 32;
      if ( integer_difference_5 > 0x19 )
        saved_loaded_word_3 = loaded_word;
      integer_difference_4 = saved_loaded_word_3 - 55;
    }
    else
    {
      integer_difference_4 = -1;
    }
LABEL_148:
    if ( integer_difference_4 == -1 || integer_difference_4 >= input_value )
      break;
    option_flags |= 8u;
    if ( scaled_index < integer_quotient )
    {
      cached_integer_difference = integer_difference_4;
LABEL_155:
      scaled_index = cached_integer_difference + input_value * scaled_index;
      goto LABEL_156;
    }
    if ( scaled_index == integer_quotient )
    {
      cached_integer_difference = integer_difference_4;
      if ( integer_difference_4 <= 0xFFFFFFFFFFFFFFFFuLL % input_value )
        goto LABEL_155;
    }
    option_flags |= 4u;
LABEL_156:
    table_value_5 = a2[2] + 1LL;
    a2[2] = table_value_5;
    if ( a2[1] && table_value_5 > a2[1]
      || (loaded_record_pointer_6 = *(unsigned __int16 **)(*a2 + 16LL), loaded_record_pointer_6 == *(unsigned __int16 **)(*a2 + 8LL))
      || (loaded_word_7 = *loaded_record_pointer_6, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1), loaded_word_7 == 0xFFFF) )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word = loaded_word_7;
    }
  }
  integer_difference_6 = a2[2] - 1LL;
  a2[2] = integer_difference_6;
  if ( (!a2[1] || integer_difference_6 <= a2[1]) && (unsigned __int16)(loaded_word - 1) <= 0xFFFDu )
  {
    loaded_word_8 = *(_QWORD *)(*a2 + 16LL);
    if ( loaded_word_8 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = loaded_word_8 - 2;
  }
  if ( (option_flags & 8) != 0 )
  {
    if ( sub_1402257B4(option_flags, scaled_index) )
    {
      *errno_sr() = 34;
      if ( (option_flags & 1) != 0 )
      {
        if ( (option_flags & 2) != 0 )
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
          table_value_7 = (_BYTE *)a2[3];
          if ( table_value_7 && !a2[2] )
            *table_value_7 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
          table_value_8 = (_BYTE *)a2[3];
          if ( table_value_8 && !a2[2] )
            *table_value_8 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      scaled_index = -1;
    }
    else if ( (option_flags & 2) != 0 )
    {
      scaled_index = -(__int64)scaled_index;
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
    table_value_9 = (_BYTE *)a2[3];
    if ( table_value_9 && !a2[2] )
      *table_value_9 = 0;
    return scaled_index;
  }
  if ( table_value_10 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
LABEL_172:
  table_value_6 = (_BYTE *)a2[3];
  if ( table_value_6 )
  {
    if ( !a2[2] )
      *table_value_6 = 0;
  }
  return 0;
}

//----- (000000014022CA88) ----------------------------------------------------
char            sub_14022CA88(__int64 a1, _BYTE *a2, _BYTE *a3, char *a4, __int64 a5)
{
  char saved_getc_nolock_result;
  _BYTE *buffer_cursor;
  __int64 integer_difference;
  unsigned __int64 loaded_word;
  bool comparison_result;
  FILE **loaded_word_2;
  int getc_nolock_result;

  if ( !a3 )
    return 1;
  saved_getc_nolock_result = *a4;
  buffer_cursor = a2;
  integer_difference = a1 - (_QWORD)a2;
  while ( saved_getc_nolock_result == buffer_cursor[integer_difference] || saved_getc_nolock_result == *buffer_cursor )
  {
    loaded_word = *(_QWORD *)(a5 + 16) + 1LL;
    comparison_result = *(_QWORD *)(a5 + 8) == 0;
    *(_QWORD *)(a5 + 16) = loaded_word;
    if ( !comparison_result && loaded_word > *(_QWORD *)(a5 + 8)
      || (loaded_word_2 = *(FILE ***)a5, getc_nolock_result = getc_nolock(**(FILE ***)a5), saved_getc_nolock_result = getc_nolock_result, getc_nolock_result == -1) )
    {
      saved_getc_nolock_result = 0;
    }
    else
    {
      loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
    }
    ++buffer_cursor;
    *a4 = saved_getc_nolock_result;
    if ( (_BYTE *)(buffer_cursor - a2) == a3 )
      return 1;
  }
  return 0;
}

//----- (000000014022CB3C) ----------------------------------------------------
char            sub_14022CB3C(__int64 a1, _BYTE *a2, _BYTE *a3, char *a4, _QWORD *a5)
{
  char input_byte;
  _BYTE *buffer_cursor;
  unsigned __int64 table_value;
  bool comparison_result;
  char *loaded_record_pointer;

  if ( !a3 )
    return 1;
  input_byte = *a4;
  buffer_cursor = a2;
  while ( input_byte == buffer_cursor[a1 - (_QWORD)a2] || input_byte == *buffer_cursor )
  {
    table_value = a5[2] + 1LL;
    comparison_result = a5[1] == 0;
    a5[2] = table_value;
    if ( !comparison_result && table_value > a5[1] || (loaded_record_pointer = *(char **)(*a5 + 16LL), loaded_record_pointer == *(char **)(*a5 + 8LL)) )
    {
      input_byte = 0;
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(*a5 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    ++buffer_cursor;
    *a4 = input_byte;
    if ( (_BYTE *)(buffer_cursor - a2) == a3 )
      return 1;
  }
  return 0;
}

//----- (000000014022CBC0) ----------------------------------------------------
char            sub_14022CBC0(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4, __int64 a5)
{
  _WORD *buffer_cursor;
  __int64 iteration_count;
  __int16 loaded_word;
  __int64 integer_difference;
  unsigned __int64 loaded_word_2;
  FILE **loaded_word_3;

  buffer_cursor = a2;
  iteration_count = 0;
  if ( !a3 )
    return 1;
  loaded_word = *a4;
  integer_difference = a1 - (_QWORD)a2;
  while ( loaded_word == *(_WORD *)((char *)buffer_cursor + integer_difference) || loaded_word == *buffer_cursor )
  {
    loaded_word_2 = *(_QWORD *)(a5 + 16) + 1LL;
    *(_QWORD *)(a5 + 16) = loaded_word_2;
    if ( *(_QWORD *)(a5 + 8) && loaded_word_2 > *(_QWORD *)(a5 + 8) )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word_3 = *(FILE ***)a5;
      loaded_word = j__fgetwc_nolock(**(FILE ***)a5);
      if ( loaded_word == -1 )
        loaded_word = 0;
      else
        loaded_word_3[1] = (FILE *)((char *)loaded_word_3[1] + 1);
    }
    ++iteration_count;
    *a4 = loaded_word;
    ++buffer_cursor;
    if ( iteration_count == a3 )
      return 1;
  }
  return 0;
}

//----- (000000014022CC78) ----------------------------------------------------
char            sub_14022CC78(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4, _QWORD *a5)
{
  __int64 iteration_count;
  __int16 loaded_word;
  __int64 integer_difference;
  unsigned __int64 table_value;
  __int16 *loaded_record_pointer;
  __int16 loaded_word_2;

  iteration_count = 0;
  if ( !a3 )
    return 1;
  loaded_word = *a4;
  integer_difference = a1 - (_QWORD)a2;
  while ( loaded_word == *(_WORD *)((char *)a2 + integer_difference) || loaded_word == *a2 )
  {
    table_value = a5[2] + 1LL;
    a5[2] = table_value;
    if ( a5[1] && table_value > a5[1] )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_record_pointer = *(__int16 **)(*a5 + 16LL);
      if ( loaded_record_pointer == *(__int16 **)(*a5 + 8LL) || (loaded_word_2 = *loaded_record_pointer, *(_QWORD *)(*a5 + 16LL) = (uint64)(uintptr_t)(loaded_record_pointer + 1), loaded_word = loaded_word_2, loaded_word_2 == -1) )
        loaded_word = 0;
    }
    ++iteration_count;
    *a4 = loaded_word;
    ++a2;
    if ( iteration_count == a3 )
      return 1;
  }
  return 0;
}

//----- (000000014022CD20) ----------------------------------------------------
char            sub_14022CD20(__int64 a1)
{
  struct __crt_locale_pointers *loaded_record_pointer;
  char unused_written_slot;
  int unknown_libname_600_result;
  _DWORD *loaded_record_pointer_2;
  _QWORD scratch_buffer[5];
  char selection_flag;
  unsigned int selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 56);
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 112);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_600_result = unknown_libname_600(loaded_record_pointer, (__int64)scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_600_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  *(_QWORD *)(a1 + 120) += 8LL;
  loaded_record_pointer_2 = *(_DWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( loaded_record_pointer_2 )
  {
    unused_written_slot = 1;
    *loaded_record_pointer_2 = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022CDC0) ----------------------------------------------------
char            sub_14022CDC0(__int64 a1)
{
  struct __crt_locale_pointers *loaded_record_pointer;
  char unused_written_slot;
  int unknown_libname_604_result;
  _DWORD *loaded_record_pointer_2;
  _QWORD scratch_buffer[5];
  char selection_flag;
  unsigned int selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 64);
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 120);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_604_result = unknown_libname_604(loaded_record_pointer, scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_604_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  *(_QWORD *)(a1 + 128) += 8LL;
  loaded_record_pointer_2 = *(_DWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( loaded_record_pointer_2 )
  {
    unused_written_slot = 1;
    *loaded_record_pointer_2 = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022CE64) ----------------------------------------------------
char            sub_14022CE64(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int unknown_libname_602_result;
  _DWORD *loaded_record_pointer;
  _QWORD scratch_buffer[5];
  char selection_flag;
  unsigned int selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 56);
  loaded_word = *(_QWORD *)(a1 + 88);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_602_result = unknown_libname_602(loaded_word, (__int64)scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_602_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  *(_QWORD *)(a1 + 96) += 8LL;
  loaded_record_pointer = *(_DWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( loaded_record_pointer )
  {
    unused_written_slot = 1;
    *loaded_record_pointer = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022CF04) ----------------------------------------------------
char            sub_14022CF04(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int unknown_libname_606_result;
  _DWORD *loaded_record_pointer;
  unsigned __int64 scratch_buffer[5];
  char selection_flag;
  unsigned int selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 64);
  loaded_word = *(_QWORD *)(a1 + 96);
  scratch_buffer[3] = (unsigned __int64)&selection_flag;
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_606_result = unknown_libname_606(loaded_word, scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_606_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  *(_QWORD *)(a1 + 104) += 8LL;
  loaded_record_pointer = *(_DWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( loaded_record_pointer )
  {
    unused_written_slot = 1;
    *loaded_record_pointer = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022CFA4) ----------------------------------------------------
char            sub_14022CFA4(__int64 a1)
{
  struct __crt_locale_pointers *loaded_record_pointer;
  char unused_written_slot;
  int unknown_libname_601_result;
  _QWORD *loaded_record_pointer_2;
  _QWORD scratch_buffer[5];
  char selection_flag;
  unsigned __int64 selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 56);
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 112);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_601_result = unknown_libname_601(loaded_record_pointer, (__int64)scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_601_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  *(_QWORD *)(a1 + 120) += 8LL;
  loaded_record_pointer_2 = *(_QWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( loaded_record_pointer_2 )
  {
    unused_written_slot = 1;
    *loaded_record_pointer_2 = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022D044) ----------------------------------------------------
char            sub_14022D044(__int64 a1)
{
  struct __crt_locale_pointers *loaded_record_pointer;
  char unused_written_slot;
  int unknown_libname_605_result;
  _QWORD *loaded_record_pointer_2;
  _QWORD scratch_buffer[5];
  char selection_flag;
  unsigned __int64 selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 64);
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 120);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_605_result = unknown_libname_605(loaded_record_pointer, scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_605_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  *(_QWORD *)(a1 + 128) += 8LL;
  loaded_record_pointer_2 = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( loaded_record_pointer_2 )
  {
    unused_written_slot = 1;
    *loaded_record_pointer_2 = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022D0EC) ----------------------------------------------------
char            sub_14022D0EC(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int unknown_libname_603_result;
  _QWORD *loaded_record_pointer;
  _QWORD scratch_buffer[5];
  char selection_flag;
  unsigned __int64 selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 56);
  loaded_word = *(_QWORD *)(a1 + 88);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_603_result = unknown_libname_603(loaded_word, (__int64)scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_603_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  *(_QWORD *)(a1 + 96) += 8LL;
  loaded_record_pointer = *(_QWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( loaded_record_pointer )
  {
    unused_written_slot = 1;
    *loaded_record_pointer = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022D18C) ----------------------------------------------------
char            sub_14022D18C(__int64 a1)
{
  __int64 loaded_word;
  char unused_written_slot;
  int unknown_libname_607_result;
  _QWORD *loaded_record_pointer;
  unsigned __int64 scratch_buffer[5];
  char selection_flag;
  unsigned __int64 selection_flag_2;

  selection_flag = 1;
  scratch_buffer[0] = a1 + 8;
  scratch_buffer[1] = *(_QWORD *)(a1 + 64);
  loaded_word = *(_QWORD *)(a1 + 96);
  scratch_buffer[3] = (unsigned __int64)&selection_flag;
  unused_written_slot = 0;
  selection_flag_2 = 0;
  scratch_buffer[2] = 0;
  unknown_libname_607_result = unknown_libname_607(loaded_word, scratch_buffer, &selection_flag_2);
  if ( !selection_flag || unknown_libname_607_result == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  *(_QWORD *)(a1 + 104) += 8LL;
  loaded_record_pointer = *(_QWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( loaded_record_pointer )
  {
    unused_written_slot = 1;
    *loaded_record_pointer = selection_flag_2;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014022D22C) ----------------------------------------------------
char            sub_14022D22C(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  _BYTE *buffer_cursor;
  __int64 remaining_count;
  __int64 i;
  int getc_nolock_result;
  bool comparison_result;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 50) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 120) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 120);
  loaded_record_pointer = *(_BYTE **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 120) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( getc_nolock(*(FILE **)(a1 + 8)) != -1 )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_3 = *(_QWORD *)(a1 + 56);
  buffer_cursor = loaded_record_pointer;
  remaining_count = loaded_word_2;
  if ( a2 && loaded_word_2 != -1 )
    remaining_count = loaded_word_2 - 1;
  for ( i = 0; !loaded_word_3 || i != loaded_word_3; ++i )
  {
    getc_nolock_result = getc_nolock(*(FILE **)(a1 + 8));
    if ( getc_nolock_result == -1 )
      goto LABEL_34;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned int)(getc_nolock_result - 9) <= 4 )
          goto LABEL_34;
        comparison_result = getc_nolock_result == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_34;
        comparison_result = ((unsigned __int8)(1 << (getc_nolock_result & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)getc_nolock_result >> 3) + a1 + 76)) == 0;
      }
      if ( comparison_result )
      {
LABEL_34:
        if ( getc_nolock_result != -1 )
        {
          --*(_QWORD *)(a1 + 16);
          sub_14020CE90(getc_nolock_result, *(_QWORD *)(a1 + 8));
        }
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 50) )
    {
      if ( !remaining_count )
      {
        if ( loaded_word_2 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *buffer_cursor++ = getc_nolock_result;
      --remaining_count;
    }
  }
  if ( !i || !a2 && i != loaded_word_3 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 50) && a2 )
    *buffer_cursor = 0;
  return 1;
}

//----- (000000014022D3C8) ----------------------------------------------------
char            sub_14022D3C8(__int64 a1, int a2)
{
  _BYTE *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  _BYTE *buffer_cursor;
  __int64 remaining_count;
  __int64 i;
  unsigned __int8 *buffer_cursor_2;
  unsigned __int64 packed_word_bits;
  char selection_flag;
  bool comparison_result;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 58) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 128) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 128);
  loaded_record_pointer = *(_BYTE **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 128) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      loaded_word_3 = *(_QWORD *)(a1 + 24);
      if ( loaded_word_3 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = loaded_word_3 + 1;
LABEL_12:
      *loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_4 = *(_QWORD *)(a1 + 64);
  buffer_cursor = loaded_record_pointer;
  remaining_count = loaded_word_2;
  if ( a2 && loaded_word_2 != -1 )
    remaining_count = loaded_word_2 - 1;
  for ( i = 0; !loaded_word_4 || i != loaded_word_4; ++i )
  {
    buffer_cursor_2 = *(unsigned __int8 **)(a1 + 24);
    if ( buffer_cursor_2 == *(unsigned __int8 **)(a1 + 16) )
    {
      LODWORD(packed_word_bits) = -1;
LABEL_38:
      if ( buffer_cursor_2 != *(unsigned __int8 **)(a1 + 8) && (buffer_cursor_2 != *(unsigned __int8 **)(a1 + 16) || (_DWORD)packed_word_bits != -1) )
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor_2 - 1);
      break;
    }
    packed_word_bits = *buffer_cursor_2++;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor_2);
    if ( !a2 )
    {
      selection_flag = 1;
LABEL_29:
      comparison_result = selection_flag == 0;
      goto LABEL_30;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 8 )
      {
        comparison_result = ((unsigned __int8)(1 << (packed_word_bits & 7)) & *(_BYTE *)((packed_word_bits >> 3) + a1 + 84)) == 0;
        goto LABEL_30;
      }
      selection_flag = 0;
      goto LABEL_29;
    }
    if ( (unsigned int)(packed_word_bits - 9) <= 4 )
      goto LABEL_38;
    comparison_result = (_DWORD)packed_word_bits == 32;
LABEL_30:
    if ( comparison_result )
      goto LABEL_38;
    if ( !*(_BYTE *)(a1 + 58) )
    {
      if ( !remaining_count )
      {
        if ( loaded_word_2 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *buffer_cursor++ = packed_word_bits;
      --remaining_count;
    }
  }
  if ( !i || !a2 && i != loaded_word_4 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 58) && a2 )
    *buffer_cursor = 0;
  return 1;
}

//----- (000000014022D584) ----------------------------------------------------
char            sub_14022D584(__int64 a1, int a2)
{
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  struct CWnd *saved_loaded_word;
  __int64 i;
  unsigned __int16 loaded_word_4;
  __int64 unrecovered_register_value;
  unsigned __int16 saved_loaded_word_2;
  bool comparison_result;
       struct DLGTEMPLATE *saved_loaded_record_pointer;
  __int64 saved_loaded_word_3;
  struct CWnd *saved_loaded_word_4;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 52) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 96) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 96);
  loaded_record_pointer = *(     struct DLGTEMPLATE **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 96) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( (unsigned __int16)j__fgetwc_nolock(*(FILE **)(a1 + 8)) != 0xFFFF )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *(_BYTE *)loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_3 = *(_QWORD *)(a1 + 56);
  saved_loaded_word = (struct CWnd *)loaded_word_2;
  saved_loaded_word_3 = loaded_word_3;
  saved_loaded_record_pointer = loaded_record_pointer;
  saved_loaded_word_4 = (struct CWnd *)loaded_word_2;
  if ( a2 && loaded_word_2 != -1 )
  {
    saved_loaded_word = (struct CWnd *)(loaded_word_2 - 1);
    saved_loaded_word_4 = (struct CWnd *)(loaded_word_2 - 1);
  }
  for ( i = 0; !loaded_word_3 || i != loaded_word_3; ++i )
  {
    loaded_word_4 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    saved_loaded_word_2 = loaded_word_4;
    if ( loaded_word_4 == 0xFFFF )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(loaded_word_4 - 9) <= 4u )
          goto LABEL_35;
        comparison_result = loaded_word_4 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        comparison_result = !sub_140236014((void **)(a1 + 80), loaded_word_4);
      }
      if ( comparison_result )
      {
LABEL_35:
        if ( saved_loaded_word_2 != 0xFFFF )
        {
          --*(_QWORD *)(a1 + 16);
          ungetwc_nolock(saved_loaded_word_2, *(_QWORD *)(a1 + 8), unrecovered_register_value);
        }
LABEL_37:
        loaded_word_3 = saved_loaded_word_3;
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 52) )
    {
      if ( !saved_loaded_word )
      {
        if ( loaded_word_2 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !unknown_libname_671_sr(a1, loaded_record_pointer, loaded_word_2, &saved_loaded_record_pointer, &saved_loaded_word_4, saved_loaded_word_2) )
        goto LABEL_37;
      saved_loaded_word = saved_loaded_word_4;
    }
    loaded_word_3 = saved_loaded_word_3;
  }
  if ( !i || !a2 && i != loaded_word_3 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 52) && a2 )
    *(_BYTE *)saved_loaded_record_pointer = 0;
  return 1;
}

//----- (000000014022D774) ----------------------------------------------------
char            sub_14022D774(__int64 a1, int a2)
{
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  struct CWnd *saved_loaded_word;
  __int64 i;
  unsigned __int16 *loaded_record_pointer_2;
  unsigned __int16 loaded_word_5;
  bool comparison_result;
  __int64 loaded_word_6;
  struct CWnd *saved_loaded_word_2;
       struct DLGTEMPLATE *saved_loaded_record_pointer;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 60) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 104) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 104);
  loaded_record_pointer = *(     struct DLGTEMPLATE **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 104) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      loaded_word_3 = *(_QWORD *)(a1 + 24);
      if ( loaded_word_3 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = loaded_word_3 + 2;
LABEL_12:
      *(_BYTE *)loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_4 = *(_QWORD *)(a1 + 64);
  saved_loaded_word = (struct CWnd *)loaded_word_2;
  saved_loaded_record_pointer = loaded_record_pointer;
  saved_loaded_word_2 = (struct CWnd *)loaded_word_2;
  if ( a2 && loaded_word_2 != -1 )
  {
    saved_loaded_word = (struct CWnd *)(loaded_word_2 - 1);
    saved_loaded_word_2 = (struct CWnd *)(loaded_word_2 - 1);
  }
  for ( i = 0; !loaded_word_4 || i != loaded_word_4; ++i )
  {
    loaded_record_pointer_2 = *(unsigned __int16 **)(a1 + 24);
    if ( loaded_record_pointer_2 == *(unsigned __int16 **)(a1 + 16) )
    {
      loaded_word_5 = -1;
LABEL_37:
      loaded_word_6 = *(_QWORD *)(a1 + 24);
      if ( loaded_word_6 != *(_QWORD *)(a1 + 8) && (loaded_word_6 != *(_QWORD *)(a1 + 16) || loaded_word_5 != 0xFFFF) )
        *(_QWORD *)(a1 + 24) = loaded_word_6 - 2;
      break;
    }
    loaded_word_5 = *loaded_record_pointer_2;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    if ( loaded_word_5 == 0xFFFF )
      goto LABEL_37;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(loaded_word_5 - 9) <= 4u )
          goto LABEL_37;
        comparison_result = loaded_word_5 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_37;
        comparison_result = !sub_140236014((void **)(a1 + 88), loaded_word_5);
      }
      if ( comparison_result )
        goto LABEL_37;
    }
    if ( !*(_BYTE *)(a1 + 60) )
    {
      if ( !saved_loaded_word )
      {
        if ( loaded_word_2 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !unknown_libname_673_sr(a1, loaded_record_pointer, loaded_word_2, &saved_loaded_record_pointer, &saved_loaded_word_2, loaded_word_5) )
        break;
      saved_loaded_word = saved_loaded_word_2;
    }
  }
  if ( !i || !a2 && i != loaded_word_4 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 60) && a2 )
    *(_BYTE *)saved_loaded_record_pointer = 0;
  return 1;
}

//----- (000000014022D954) ----------------------------------------------------
char            sub_14022D954(__int64 a1, int a2)
{
  _WORD *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 saved_loaded_word;
  __int64 i;
  int getc_nolock_result;
  bool comparison_result;
  __int16 unrecovered_register_value;
  __int64 saved_loaded_word_2;
  _WORD *saved_loaded_record_pointer;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 50) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 120) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 120);
  loaded_record_pointer = *(_WORD **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 120) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( getc_nolock(*(FILE **)(a1 + 8)) != -1 )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_3 = *(_QWORD *)(a1 + 56);
  saved_loaded_word = loaded_word_2;
  saved_loaded_record_pointer = loaded_record_pointer;
  saved_loaded_word_2 = loaded_word_2;
  if ( a2 && loaded_word_2 != -1 )
  {
    saved_loaded_word = loaded_word_2 - 1;
    saved_loaded_word_2 = loaded_word_2 - 1;
  }
  for ( i = 0; !loaded_word_3 || i != loaded_word_3; ++i )
  {
    getc_nolock_result = getc_nolock(*(FILE **)(a1 + 8));
    if ( getc_nolock_result == -1 )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned int)(getc_nolock_result - 9) <= 4 )
          goto LABEL_35;
        comparison_result = getc_nolock_result == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        comparison_result = ((unsigned __int8)(1 << (getc_nolock_result & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)getc_nolock_result >> 3) + a1 + 76)) == 0;
      }
      if ( comparison_result )
      {
LABEL_35:
        if ( getc_nolock_result != -1 )
        {
          --*(_QWORD *)(a1 + 16);
          sub_14020CE90(getc_nolock_result, *(_QWORD *)(a1 + 8));
        }
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 50) )
    {
      if ( !saved_loaded_word )
      {
        if ( loaded_word_2 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      LOBYTE(unrecovered_register_value) = getc_nolock_result;
      if ( !__crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_character(
              a1,
              (__int64)loaded_record_pointer,
              loaded_word_2,
              &saved_loaded_record_pointer,
              &saved_loaded_word_2,
              unrecovered_register_value) )
        break;
      saved_loaded_word = saved_loaded_word_2;
    }
  }
  if ( !i || !a2 && i != loaded_word_3 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 50) && a2 )
    *saved_loaded_record_pointer = 0;
  return 1;
}

//----- (000000014022DB28) ----------------------------------------------------
char            sub_14022DB28(__int64 a1, int a2)
{
  _WORD *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  __int64 saved_loaded_word;
  __int64 i;
  unsigned __int8 *buffer_cursor;
  unsigned __int64 packed_word_bits;
  char selection_flag;
  bool comparison_result;
  __int16 unrecovered_register_value;
  __int64 saved_loaded_word_2;
  _WORD *saved_loaded_record_pointer;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 58) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 128) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 128);
  loaded_record_pointer = *(_WORD **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 128) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      loaded_word_3 = *(_QWORD *)(a1 + 24);
      if ( loaded_word_3 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = loaded_word_3 + 1;
LABEL_12:
      *loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_4 = *(_QWORD *)(a1 + 64);
  saved_loaded_word = loaded_word_2;
  saved_loaded_record_pointer = loaded_record_pointer;
  saved_loaded_word_2 = loaded_word_2;
  if ( a2 && loaded_word_2 != -1 )
  {
    saved_loaded_word = loaded_word_2 - 1;
    saved_loaded_word_2 = loaded_word_2 - 1;
  }
  for ( i = 0; !loaded_word_4 || i != loaded_word_4; ++i )
  {
    buffer_cursor = *(unsigned __int8 **)(a1 + 24);
    if ( buffer_cursor == *(unsigned __int8 **)(a1 + 16) )
    {
      LODWORD(packed_word_bits) = -1;
LABEL_39:
      if ( buffer_cursor != *(unsigned __int8 **)(a1 + 8) && (buffer_cursor != *(unsigned __int8 **)(a1 + 16) || (_DWORD)packed_word_bits != -1) )
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor - 1);
      break;
    }
    packed_word_bits = *buffer_cursor++;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor);
    if ( !a2 )
    {
      selection_flag = 1;
LABEL_29:
      comparison_result = selection_flag == 0;
      goto LABEL_30;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 8 )
      {
        comparison_result = ((unsigned __int8)(1 << (packed_word_bits & 7)) & *(_BYTE *)((packed_word_bits >> 3) + a1 + 84)) == 0;
        goto LABEL_30;
      }
      selection_flag = 0;
      goto LABEL_29;
    }
    if ( (unsigned int)(packed_word_bits - 9) <= 4 )
      goto LABEL_39;
    comparison_result = (_DWORD)packed_word_bits == 32;
LABEL_30:
    if ( comparison_result )
      goto LABEL_39;
    if ( !*(_BYTE *)(a1 + 58) )
    {
      if ( !saved_loaded_word )
      {
        if ( loaded_word_2 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      LOBYTE(unrecovered_register_value) = packed_word_bits;
      if ( !sub_1402366A0((_QWORD *)a1, (__int64)loaded_record_pointer, loaded_word_2, &saved_loaded_record_pointer, &saved_loaded_word_2, unrecovered_register_value) )
        break;
      saved_loaded_word = saved_loaded_word_2;
    }
  }
  if ( !i || !a2 && i != loaded_word_4 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 58) && a2 )
    *saved_loaded_record_pointer = 0;
  return 1;
}

//----- (000000014022DD14) ----------------------------------------------------
char            sub_14022DD14(__int64 a1, int a2)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  unsigned __int16 *unused_written_slot;
  __int64 remaining_count;
  __int64 i;
  unsigned __int16 loaded_word_4;
  __int64 unrecovered_register_value;
  unsigned __int16 saved_loaded_word;
  bool comparison_result;
  __int64 loaded_word_5;
  unsigned __int16 *buffer_cursor;
  __int64 saved_loaded_word_2;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 52) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 96) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 96);
  loaded_record_pointer = *(unsigned __int16 **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 96) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( (unsigned __int16)j__fgetwc_nolock(*(FILE **)(a1 + 8)) != 0xFFFF )
        ++*(_QWORD *)(a1 + 16);
      *loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_3 = *(_QWORD *)(a1 + 56);
  unused_written_slot = loaded_record_pointer;
  saved_loaded_word_2 = loaded_word_3;
  remaining_count = loaded_word_2;
  buffer_cursor = loaded_record_pointer;
  if ( a2 && loaded_word_2 != -1 )
    remaining_count = loaded_word_2 - 1;
  for ( i = 0; !loaded_word_3 || i != loaded_word_3; ++i )
  {
    loaded_word_4 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    saved_loaded_word = loaded_word_4;
    if ( loaded_word_4 == 0xFFFF )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(loaded_word_4 - 9) <= 4u )
          goto LABEL_35;
        comparison_result = loaded_word_4 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        comparison_result = !sub_140236014((void **)(a1 + 80), loaded_word_4);
      }
      if ( comparison_result )
      {
LABEL_35:
        if ( saved_loaded_word != 0xFFFF )
        {
          loaded_word_5 = *(_QWORD *)(a1 + 8);
          --*(_QWORD *)(a1 + 16);
          ungetwc_nolock(saved_loaded_word, loaded_word_5, unrecovered_register_value);
        }
        loaded_word_3 = saved_loaded_word_2;
        unused_written_slot = buffer_cursor;
        break;
      }
    }
    if ( *(_BYTE *)(a1 + 52) )
    {
      unused_written_slot = buffer_cursor;
    }
    else
    {
      if ( !remaining_count )
      {
        if ( loaded_word_2 != -1 )
          *loaded_record_pointer = 0;
        goto LABEL_13;
      }
      *buffer_cursor = saved_loaded_word;
      unused_written_slot = ++buffer_cursor;
      --remaining_count;
    }
    loaded_word_3 = saved_loaded_word_2;
  }
  if ( !i || !a2 && i != loaded_word_3 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 52) && a2 )
    *unused_written_slot = 0;
  return 1;
}

//----- (000000014022DED8) ----------------------------------------------------
char            sub_14022DED8(__int64 a1, int a2)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  __int64 integer_sum;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  unsigned __int16 *buffer_cursor;
  __int64 remaining_count;
  __int64 i;
  unsigned __int16 *loaded_record_pointer_2;
  unsigned __int16 loaded_word_5;
  bool comparison_result;
  __int64 loaded_word_6;
  __int64 saved_loaded_word;

  loaded_record_pointer = nullptr;
  if ( *(_BYTE *)(a1 + 60) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 104) += 8LL;
  loaded_word = *(_QWORD *)(a1 + 104);
  loaded_record_pointer = *(unsigned __int16 **)(loaded_word - 8);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    loaded_word_2 = -1;
  }
  else
  {
    integer_sum = loaded_word + 8;
    *(_QWORD *)(a1 + 104) = integer_sum;
    loaded_word_2 = *(unsigned int *)(integer_sum - 8);
  }
  if ( !loaded_word_2 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      loaded_word_3 = *(_QWORD *)(a1 + 24);
      if ( loaded_word_3 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = loaded_word_3 + 2;
LABEL_12:
      *loaded_record_pointer = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  loaded_word_4 = *(_QWORD *)(a1 + 64);
  buffer_cursor = loaded_record_pointer;
  saved_loaded_word = loaded_word_4;
  remaining_count = loaded_word_2;
  if ( a2 && loaded_word_2 != -1 )
    remaining_count = loaded_word_2 - 1;
  for ( i = 0; !loaded_word_4 || i != loaded_word_4; ++i )
  {
    loaded_record_pointer_2 = *(unsigned __int16 **)(a1 + 24);
    if ( loaded_record_pointer_2 == *(unsigned __int16 **)(a1 + 16) )
    {
      loaded_word_5 = -1;
LABEL_36:
      loaded_word_6 = *(_QWORD *)(a1 + 24);
      if ( loaded_word_6 != *(_QWORD *)(a1 + 8) && (loaded_word_6 != *(_QWORD *)(a1 + 16) || loaded_word_5 != 0xFFFF) )
        *(_QWORD *)(a1 + 24) = loaded_word_6 - 2;
      loaded_word_4 = saved_loaded_word;
      break;
    }
    loaded_word_5 = *loaded_record_pointer_2;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    if ( loaded_word_5 == 0xFFFF )
      goto LABEL_36;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(loaded_word_5 - 9) <= 4u )
          goto LABEL_36;
        comparison_result = loaded_word_5 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_36;
        comparison_result = !sub_140236014((void **)(a1 + 88), loaded_word_5);
      }
      if ( comparison_result )
        goto LABEL_36;
    }
    if ( !*(_BYTE *)(a1 + 60) )
    {
      if ( !remaining_count )
      {
        if ( loaded_word_2 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *buffer_cursor++ = loaded_word_5;
      --remaining_count;
    }
    loaded_word_4 = saved_loaded_word;
  }
  if ( !i || !a2 && i != loaded_word_4 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 60) && a2 )
    *buffer_cursor = 0;
  return 1;
}

//----- (000000014022E0F4) ----------------------------------------------------
__int64            sub_14022E0F4(__int64 a1, struct __crt_locale_pointers *a2)
{
  int getc_nolock_result;
  unsigned int unused_written_slot;

  do
  {
    getc_nolock_result = getc_nolock(*(FILE **)a1);
    unused_written_slot = getc_nolock_result;
    if ( getc_nolock_result == -1 )
      break;
    ++*(_QWORD *)(a1 + 8);
  }
  while ( (unsigned int)crt_isctype_l((unsigned __int8)getc_nolock_result, 8, a2) );
  return unused_written_slot;
}

//----- (000000014022E144) ----------------------------------------------------
__int64            sub_14022E144(FILE **a1)
{
  unsigned __int16 call_result;

  do
  {
    call_result = j__fgetwc_nolock(*a1);
    if ( call_result == 0xFFFF )
      break;
    a1[1] = (FILE *)((char *)a1[1] + 1);
  }
  while ( (unsigned int)sub_140256E00(call_result, 8) );
  return call_result;
}

//----- (000000014022E18C) ----------------------------------------------------
__int64            sub_14022E18C(__int64 a1, struct __crt_locale_pointers *a2)
{
  unsigned __int8 *loaded_record_pointer;
  unsigned int loaded_word;

  while ( 1 )
  {
    loaded_record_pointer = *(unsigned __int8 **)(a1 + 16);
    if ( loaded_record_pointer == *(unsigned __int8 **)(a1 + 8) )
      break;
    loaded_word = *loaded_record_pointer;
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    if ( !(unsigned int)crt_isctype_l(loaded_word, 8, a2) )
      return loaded_word;
  }
  return (unsigned int)-1;
}

//----- (000000014022E1E0) ----------------------------------------------------
__int64            sub_14022E1E0(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  unsigned __int16 loaded_word;

  while ( 1 )
  {
    loaded_record_pointer = *(unsigned __int16 **)(a1 + 16);
    if ( loaded_record_pointer == *(unsigned __int16 **)(a1 + 8) )
      break;
    loaded_word = *loaded_record_pointer;
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    if ( loaded_word == 0xFFFF || !(unsigned int)sub_140256E00(loaded_word, 8) )
      return loaded_word;
  }
  return (unsigned __int16)-1;
}

//----- (000000014022E28C) ----------------------------------------------------
char            sub_14022E28C(__int64 a1, _DWORD *a2)
{
  _DWORD *loaded_word;

  *(_QWORD *)(a1 + 120) += 8LL;
  loaded_word = *(_DWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E2C4) ----------------------------------------------------
char            sub_14022E2C4(__int64 a1, _DWORD *a2)
{
  _DWORD *loaded_word;

  *(_QWORD *)(a1 + 128) += 8LL;
  loaded_word = *(_DWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E300) ----------------------------------------------------
char            sub_14022E300(__int64 a1, _DWORD *a2)
{
  _DWORD *loaded_word;

  *(_QWORD *)(a1 + 96) += 8LL;
  loaded_word = *(_DWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E338) ----------------------------------------------------
char            sub_14022E338(__int64 a1, _DWORD *a2)
{
  _DWORD *loaded_word;

  *(_QWORD *)(a1 + 104) += 8LL;
  loaded_word = *(_DWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E370) ----------------------------------------------------
char            sub_14022E370(__int64 a1, _QWORD *a2)
{
  _QWORD *loaded_word;

  *(_QWORD *)(a1 + 120) += 8LL;
  loaded_word = *(_QWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E3A8) ----------------------------------------------------
char            sub_14022E3A8(__int64 a1, _QWORD *a2)
{
  _QWORD *loaded_word;

  *(_QWORD *)(a1 + 128) += 8LL;
  loaded_word = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E3E8) ----------------------------------------------------
char            sub_14022E3E8(__int64 a1, _QWORD *a2)
{
  _QWORD *loaded_word;

  *(_QWORD *)(a1 + 96) += 8LL;
  loaded_word = *(_QWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E420) ----------------------------------------------------
char            sub_14022E420(__int64 a1, _QWORD *a2)
{
  _QWORD *loaded_word;

  *(_QWORD *)(a1 + 104) += 8LL;
  loaded_word = *(_QWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( loaded_word )
  {
    *loaded_word = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (000000014022E598) ----------------------------------------------------
__int64            sub_14022E598(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 52)), 0, 0x20u);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  return a1;
}

//----- (000000014022E68C) ----------------------------------------------------
__int64            sub_14022E68C(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_QWORD *)a1 = a3;
  *(_OWORD *)(a1 + 8) = *a2;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 76)), 0, 0x20u);
  *(_DWORD *)(a1 + 44) = 0;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 50) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 112) = a5;
  *(_QWORD *)(a1 + 120) = a6;
  return a1;
}

//----- (000000014022E6FC) ----------------------------------------------------
__int64            sub_14022E6FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_QWORD *)a1 = a3;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 84)), 0, 0x20u);
  *(_DWORD *)(a1 + 52) = 0;
  *(_WORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 58) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 120) = a5;
  *(_QWORD *)(a1 + 128) = a6;
  return a1;
}

//----- (000000014022E818) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
_WORD *           unknown_libname_634(_WORD *a1)
{
  crt_memset((void *)(uintptr_t)(a1), 0, 0x20u);
  return a1;
}

//----- (000000014022E840) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
_WORD *           unknown_libname_635(_WORD *a1)
{
  crt_memset((void *)(uintptr_t)(a1), 0, 0x20u);
  return a1;
}

//----- (000000014022E8B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
_DWORD *           unknown_libname_638(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_140236F50((__m128i *)(a1 + 1), 0x1CCu, (     __m128i *)(a2 + 1), 4LL * (unsigned int)*a2);
  return a1;
}

//----- (000000014022E904) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1013(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014022E920) ----------------------------------------------------
void            sub_14022E920(__int64 a1)
{
  free_base(*(void **)(a1 + 56));
  *(_QWORD *)(a1 + 56) = 0;
}

//----- (000000014022E990) ----------------------------------------------------
void            sub_14022E990(__int64 a1)
{
  free_base(*(void **)(a1 + 80));
  *(_QWORD *)(a1 + 80) = 0;
}

//----- (000000014022E9B0) ----------------------------------------------------
void            sub_14022E9B0(__int64 a1)
{
  free_base(*(void **)(a1 + 88));
  *(_QWORD *)(a1 + 88) = 0;
}

//----- (000000014022E9D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1014(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014022E9EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1015(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014022EA08) ----------------------------------------------------
void **           __crt_unique_heap_ptr__wchar_t____crt_internal_free_policy__operator_assign_dup2(void **a1, void **a2)
{
  free_base(*a1);
  *a1 = nullptr;
  *a1 = *a2;
  *a2 = nullptr;
  return a1;
}

//----- (000000014022EA40) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
_DWORD *           unknown_libname_646(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_140236F50((__m128i *)(a1 + 1), 0x1CCu, (     __m128i *)(a2 + 1), 4LL * (unsigned int)*a2);
  return a1;
}

//----- (000000014022EAC0) ----------------------------------------------------
char            _lambda_1232a416a9149be513dc40db5f8b835d___operator_call(__int64 *a1)
{
  char unused_written_slot;
  __int64 loaded_word;
  char loaded_word_2;
  unsigned __int64 loaded_word_3;
  __int64 *buffer_cursor;

  unused_written_slot = 0;
  loaded_word = *a1;
  loaded_word_2 = *(_BYTE *)a1[1];
  loaded_word_3 = *(_QWORD *)(loaded_word + 16) - 1LL;
  *(_QWORD *)(loaded_word + 16) = loaded_word_3;
  if ( (!*(_QWORD *)(loaded_word + 8) || loaded_word_3 <= *(_QWORD *)(loaded_word + 8)) && (unsigned __int8)(loaded_word_2 + 1) > 1u )
  {
    buffer_cursor = *(__int64 **)loaded_word;
    if ( loaded_word_2 != -1 )
    {
      --buffer_cursor[1];
      sub_14020CE90(loaded_word_2, *buffer_cursor);
    }
  }
  *(_BYTE *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return unused_written_slot;
}

//----- (000000014022EB44) ----------------------------------------------------
char            sub_14022EB44(__int64 *a1)
{
  char unused_written_slot;
  __int64 loaded_word;
  char loaded_word_2;
  unsigned __int64 loaded_word_3;
  __int64 *buffer_cursor;

  unused_written_slot = 0;
  loaded_word = *a1;
  loaded_word_2 = *(_BYTE *)a1[1];
  loaded_word_3 = *(_QWORD *)(loaded_word + 16) - 1LL;
  *(_QWORD *)(loaded_word + 16) = loaded_word_3;
  if ( (!*(_QWORD *)(loaded_word + 8) || loaded_word_3 <= *(_QWORD *)(loaded_word + 8)) && (unsigned __int8)(loaded_word_2 + 1) > 1u )
  {
    buffer_cursor = *(__int64 **)loaded_word;
    if ( loaded_word_2 != -1 )
    {
      --buffer_cursor[1];
      sub_14020CE90(loaded_word_2, *buffer_cursor);
    }
  }
  *(_BYTE *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return unused_written_slot;
}

//----- (000000014022EC98) ----------------------------------------------------
char            sub_14022EC98(__int64 *a1)
{
  char unused_written_slot;
  _QWORD *record_pointer;
  __int64 loaded_word;
  unsigned __int64 integer_difference;
  _QWORD *buffer_cursor;

  unused_written_slot = 0;
  record_pointer = (_QWORD *)*a1;
  loaded_word = *(unsigned __int16 *)a1[1];
  integer_difference = record_pointer[2] - 1LL;
  record_pointer[2] = integer_difference;
  if ( (!record_pointer[1] || integer_difference <= record_pointer[1]) && (unsigned __int16)(loaded_word - 1) <= 0xFFFDu )
  {
    buffer_cursor = (_QWORD *)*record_pointer;
    --buffer_cursor[1];
    ungetwc_nolock(loaded_word, *buffer_cursor, 65533);
  }
  *(_WORD *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return unused_written_slot;
}

//----- (000000014022ED14) ----------------------------------------------------
char            _lambda_2869a9057330eafa474e853b0696fc23___operator_call(__int64 *a1)
{
  char unused_written_slot;
  _QWORD *record_pointer;
  __int64 loaded_word;
  unsigned __int64 integer_difference;
  _QWORD *buffer_cursor;

  unused_written_slot = 0;
  record_pointer = (_QWORD *)*a1;
  loaded_word = *(unsigned __int16 *)a1[1];
  integer_difference = record_pointer[2] - 1LL;
  record_pointer[2] = integer_difference;
  if ( (!record_pointer[1] || integer_difference <= record_pointer[1]) && (unsigned __int16)(loaded_word - 1) <= 0xFFFDu )
  {
    buffer_cursor = (_QWORD *)*record_pointer;
    --buffer_cursor[1];
    ungetwc_nolock(loaded_word, *buffer_cursor, 65533);
  }
  *(_WORD *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return unused_written_slot;
}

//----- (000000014022ED90) ----------------------------------------------------
char            _lambda_2869a9057330eafa474e853b0696fc23___operator_call_dup2(__int64 *a1)
{
  char unused_written_slot;
  _QWORD *record_pointer;
  __int64 loaded_word;
  unsigned __int64 integer_difference;
  _QWORD *buffer_cursor;

  unused_written_slot = 0;
  record_pointer = (_QWORD *)*a1;
  loaded_word = *(unsigned __int16 *)a1[1];
  integer_difference = record_pointer[2] - 1LL;
  record_pointer[2] = integer_difference;
  if ( (!record_pointer[1] || integer_difference <= record_pointer[1]) && (unsigned __int16)(loaded_word - 1) <= 0xFFFDu )
  {
    buffer_cursor = (_QWORD *)*record_pointer;
    --buffer_cursor[1];
    ungetwc_nolock(loaded_word, *buffer_cursor, 65533);
  }
  *(_WORD *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return unused_written_slot;
}

//----- (000000014022EE0C) ----------------------------------------------------
char            sub_14022EE0C(__int64 *a1)
{
  char unused_written_slot;
  __int64 loaded_word;
  char loaded_word_2;
  unsigned __int64 loaded_word_3;
  __int64 *buffer_cursor;

  unused_written_slot = 0;
  loaded_word = *a1;
  loaded_word_2 = *(_BYTE *)a1[1];
  loaded_word_3 = *(_QWORD *)(loaded_word + 16) - 1LL;
  *(_QWORD *)(loaded_word + 16) = loaded_word_3;
  if ( (!*(_QWORD *)(loaded_word + 8) || loaded_word_3 <= *(_QWORD *)(loaded_word + 8)) && (unsigned __int8)(loaded_word_2 + 1) > 1u )
  {
    buffer_cursor = *(__int64 **)loaded_word;
    if ( loaded_word_2 != -1 )
    {
      --buffer_cursor[1];
      sub_14020CE90(loaded_word_2, *buffer_cursor);
    }
  }
  *(_BYTE *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return unused_written_slot;
}

//----- (000000014022EF60) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_647(__int64 a1)
{
  __int128 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  unsigned int unused_written_slot;
  __int64 loaded_word_4;
  __int128 unused_written_slot_2;
  __int64 unused_written_slot_3;
  __int64 unused_written_slot_4;
  __int64 unused_written_slot_5;
  int unused_written_slot_6;
  char unused_written_slot_7;
  __int64 unused_written_slot_8;
  int unused_written_slot_9;
  char unused_written_slot_10;
  int unused_written_slot_11;
  void *Block;
  _BYTE *unused_written_slot_12;
  __int64 unused_written_slot_13;
  __int64 unused_written_slot_14;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];

  crt_locale_update((_LocaleUpdate *)&callee_output_word, **(struct __crt_locale_pointers *     **)a1);
  loaded_word = **(unsigned __int64 **)(a1 + 8);
  loaded_word_2 = **(_QWORD **)(a1 + 32);
  loaded_word_3 = **(_QWORD **)(a1 + 24);
  loaded_word_4 = **(_QWORD **)(a1 + 16);
  unused_written_slot_3 = loaded_word_4;
  unused_written_slot_2 = loaded_word;
  unused_written_slot_4 = loaded_word_3;
  unused_written_slot_5 = 0;
  Block = nullptr;
  unused_written_slot_6 = 0;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  unused_written_slot_10 = 0;
  unused_written_slot_11 = 0;
  unused_written_slot_12 = scratch_buffer;
  unused_written_slot_13 = loaded_word_2;
  unused_written_slot_14 = 0;
  unused_written_slot = sub_1402339A4((__int64)&loaded_word_4);
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return unused_written_slot;
}

//----- (000000014022F104) ----------------------------------------------------
__int64            _lambda_f3caf1ecae5fe01a9a1a6239afa44510___operator_call(__int64 a1)
{
  __int64 *loaded_record_pointer;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 unused_local;
  __int128 loaded_word_3;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];
  __int64 loaded_word_4;
  __int128 unused_written_slot;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  int unused_written_slot_4;
  int unused_written_slot_5;
  __int16 unused_written_slot_6;
  char unused_written_slot_7;
  __int64 unused_written_slot_8;
  int unused_written_slot_9;
  char unused_written_slot_10;
  int unused_written_slot_11;
  _WORD scratch_buffer_2[18];
  _BYTE *unused_written_slot_12;
  __int64 unused_written_slot_13;
  __int64 unused_written_slot_14;
  __int64 unused_local_2;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, **(struct __crt_locale_pointers *     **)a1);
  loaded_record_pointer = *(__int64 **)(a1 + 32);
  loaded_word_3 = **(unsigned __int64 **)(a1 + 8);
  loaded_word = *loaded_record_pointer;
  loaded_word_2 = **(_QWORD **)(a1 + 24);
  loaded_word_4 = **(_QWORD **)(a1 + 16);
  unused_written_slot_2 = loaded_word_4;
  unused_written_slot_3 = loaded_word_2;
  unused_written_slot = loaded_word_3;
  unused_written_slot_4 = 0;
  crt_memset((void *)(uintptr_t)(scratch_buffer_2), 0, 0x20u);
  unused_written_slot_5 = 0;
  unused_written_slot_12 = scratch_buffer;
  unused_written_slot_6 = 0;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  unused_written_slot_10 = 0;
  unused_written_slot_11 = 0;
  unused_written_slot_13 = loaded_word;
  unused_written_slot_14 = 0;
  __int64 sr_result = sub_1402337F8((__int64)&loaded_word_4); /* 0x14022F1B9: the result stays in rax */
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return sr_result; /* 0x14022F1B9: the call's result stays in rax */
}

//----- (000000014022F1F4) ----------------------------------------------------
void            sub_14022F1F4(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int *a3)
{
  unsigned __int64 packed_word_bits;
  unsigned int iteration_count;
  unsigned __int8 *buffer_cursor;
  unsigned int loaded_word;
  unsigned __int64 packed_word_bits_2;
  __int64 integer_sum;
  unsigned __int64 scaled_index;
  __int64 loaded_word_2;
  __int64 integer_sum_2;
  unsigned __int64 table_value;
  int loaded_word_3;
  unsigned int integer_quotient;
  unsigned int remaining_amount;
  int saved_remaining_amount;
  __int64 integer_difference;
  __int64 lookup_index;
  __int64 scaled_index_2;
  unsigned __int64 byte_count;
  __int64 packed_word_bits_3;
  unsigned int loaded_word_4;
  unsigned __int64 packed_word_bits_4;
  __int64 table_value_2;
  __int64 integer_sum_3;
  unsigned __int64 scaled_index_3;
  char selection_flag;
  __int64 table_value_3;
  unsigned __int64 byte_count_2;
  __m128i *destination_buffer;
  unsigned int loaded_word_5;
  __int64 integer_sum_4;
  unsigned __int64 scaled_index_4;
  bool comparison_result;
  __m128i *cached_src;
  unsigned int loaded_word_6;
  __m128i *cached_src_2;
  unsigned int integer_sum_5;
  __int64 integer_sum_6;
  __int64 table_value_4;
  unsigned __int64 packed_word_bits_5;
  unsigned int element_index;
  __int64 saved_element_index;
  __int64 integer_difference_2;
  unsigned __int64 scaled_index_5;
  __int64 saved_element_index_2;
  unsigned __int64 table_value_5;
  unsigned __int64 byte_count_3;
  __m128i *destination_buffer_2;
  int scaled_index_6;
  unsigned int integer_difference_3;
  unsigned int loaded_word_7;
  unsigned __int64 packed_word_bits_6;
  __int64 integer_sum_7;
  unsigned __int64 scaled_index_7;
  __int64 loaded_word_8;
  __int64 integer_sum_8;
  unsigned __int64 table_value_6;
  __int64 unused_local;
  unsigned int saved_loaded_word;
  unsigned int saved_remaining_amount_2;
  int cached_remaining_amount;
  unsigned int integer_quotient_2;
  __m128i *saved_cached_src;
  __m128i *saved_cached_src_2;
  unsigned int integer_sum_9;
  __m128i source_buffer;
  unsigned int scaled_index_8;
  __m128i Src[28];
  __int64 unused_local_2;

  if ( a1 != a2 )
  {
    LODWORD(packed_word_bits) = 0;
    iteration_count = 0;
    buffer_cursor = a1;
    do
    {
      if ( iteration_count == 9 )
      {
        loaded_word = *a3;
        if ( *a3 )
        {
          LODWORD(packed_word_bits_2) = 0;
          integer_sum = 0;
          do
          {
            scaled_index = (unsigned int)packed_word_bits_2 + 1000000000LL * a3[integer_sum + 1];
            a3[integer_sum + 1] = scaled_index;
            packed_word_bits_2 = HIDWORD(scaled_index);
            integer_sum = (unsigned int)(integer_sum + 1);
          }
          while ( (_DWORD)integer_sum != loaded_word );
          if ( HIDWORD(scaled_index) )
          {
            if ( *a3 >= 0x73 )
              *a3 = 0;
            else
              a3[++*a3] = HIDWORD(scaled_index);
          }
        }
        if ( (_DWORD)packed_word_bits )
        {
          loaded_word_2 = *a3;
          integer_sum_2 = 0;
          if ( (_DWORD)loaded_word_2 )
          {
            do
            {
              table_value = (unsigned int)packed_word_bits + (unsigned __int64)a3[integer_sum_2 + 1];
              a3[integer_sum_2 + 1] = table_value;
              loaded_word_2 = *a3;
              integer_sum_2 = (unsigned int)(integer_sum_2 + 1);
              packed_word_bits = HIDWORD(table_value);
            }
            while ( (_DWORD)integer_sum_2 != (_DWORD)loaded_word_2 );
          }
          if ( (_DWORD)packed_word_bits )
          {
            if ( (unsigned int)loaded_word_2 >= 0x73 )
            {
              *a3 = 0;
            }
            else
            {
              a3[loaded_word_2 + 1] = packed_word_bits;
              ++*a3;
            }
          }
        }
        LODWORD(packed_word_bits) = 0;
        iteration_count = 0;
      }
      loaded_word_3 = *buffer_cursor;
      ++iteration_count;
      ++buffer_cursor;
      LODWORD(packed_word_bits) = loaded_word_3 + 10 * packed_word_bits;
    }
    while ( buffer_cursor != a2 );
    if ( iteration_count )
    {
      integer_quotient = iteration_count / 0xA;
      integer_quotient_2 = iteration_count / 0xA;
      remaining_amount = iteration_count / 0xA;
      saved_remaining_amount_2 = iteration_count / 0xA;
      if ( iteration_count / 0xA )
      {
        while ( 1 )
        {
          saved_remaining_amount = remaining_amount;
          if ( remaining_amount > 0x26 )
            saved_remaining_amount = 38;
          cached_remaining_amount = saved_remaining_amount;
          integer_difference = (unsigned int)(saved_remaining_amount - 1);
          lookup_index = (unsigned int)integer_difference;
          scaled_index_2 = (unsigned __int8)byte_1402855F3[4 * integer_difference];
          byte_count = 4LL * (unsigned __int8)byte_1402855F2[4 * integer_difference];
          scaled_index_8 = scaled_index_2 + (unsigned __int8)byte_1402855F2[4 * integer_difference];
          crt_memset((void *)(uintptr_t)(Src), 0, byte_count);
          crt_memcpy(
            (__m128i *)((char *)Src + byte_count),
            (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_1402855F0[2 * lookup_index]),
            4 * scaled_index_2);
          packed_word_bits_3 = scaled_index_8;
          if ( scaled_index_8 <= 1 )
          {
            if ( !SR_VEC_LANES(128, Src[0], i32)[0] )
              goto LABEL_26;
            if ( SR_VEC_LANES(128, Src[0], i32)[0] == 1 )
              goto LABEL_82;
            loaded_word_4 = *a3;
            if ( !*a3 )
              goto LABEL_82;
            LODWORD(packed_word_bits_4) = 0;
            table_value_2 = SR_VEC_LANES(128, Src[0], u32)[0];
            integer_sum_3 = 0;
            do
            {
              scaled_index_3 = (unsigned int)packed_word_bits_4 + table_value_2 * a3[integer_sum_3 + 1];
              a3[integer_sum_3 + 1] = scaled_index_3;
              packed_word_bits_4 = HIDWORD(scaled_index_3);
              integer_sum_3 = (unsigned int)(integer_sum_3 + 1);
            }
            while ( (_DWORD)integer_sum_3 != loaded_word_4 );
            goto LABEL_31;
          }
          if ( *a3 > 1 )
          {
            comparison_result = scaled_index_8 < *a3;
            cached_src = Src;
            loaded_word_6 = *a3;
            cached_src_2 = Src;
            if ( scaled_index_8 >= *a3 )
              cached_src = (__m128i *)(a3 + 1);
            else
              loaded_word_6 = scaled_index_8;
            if ( scaled_index_8 < *a3 )
              cached_src_2 = (__m128i *)(a3 + 1);
            saved_cached_src_2 = cached_src;
            saved_cached_src = cached_src_2;
            saved_loaded_word = loaded_word_6;
            if ( comparison_result )
              LODWORD(packed_word_bits_3) = *a3;
            integer_sum_5 = 0;
            integer_sum_6 = 0;
            integer_sum_9 = 0;
            if ( loaded_word_6 )
            {
              while ( 1 )
              {
                table_value_4 = SR_VEC_PTR_LANES(128, cached_src, u32)[integer_sum_6];
                if ( (_DWORD)table_value_4 )
                {
                  LODWORD(packed_word_bits_5) = 0;
                  element_index = integer_sum_6;
                  if ( (_DWORD)packed_word_bits_3 )
                  {
                    do
                    {
                      if ( element_index == 115 )
                        break;
                      saved_element_index = element_index;
                      if ( element_index == integer_sum_5 )
                      {
                        SR_VEC_LANES(128, source_buffer, i32)[element_index] = 0;
                        integer_sum_9 = element_index + 1;
                      }
                      integer_difference_2 = element_index - (unsigned int)integer_sum_6;
                      ++element_index;
                      scaled_index_5 = (unsigned int)packed_word_bits_5 + SR_VEC_LANES(128, source_buffer, u32)[saved_element_index] + table_value_4 * SR_VEC_PTR_LANES(128, saved_cached_src, u32)[integer_difference_2];
                      SR_VEC_LANES(128, source_buffer, i32)[saved_element_index] = scaled_index_5;
                      packed_word_bits_5 = HIDWORD(scaled_index_5);
                      integer_sum_5 = integer_sum_9;
                    }
                    while ( element_index - (_DWORD)integer_sum_6 != (_DWORD)packed_word_bits_3 );
                    if ( (_DWORD)packed_word_bits_5 )
                    {
                      while ( element_index != 115 )
                      {
                        saved_element_index_2 = element_index;
                        if ( element_index == integer_sum_5 )
                        {
                          SR_VEC_LANES(128, source_buffer, i32)[element_index] = 0;
                          integer_sum_9 = element_index + 1;
                        }
                        ++element_index;
                        table_value_5 = (unsigned int)packed_word_bits_5 + (unsigned __int64)SR_VEC_LANES(128, source_buffer, u32)[saved_element_index_2];
                        SR_VEC_LANES(128, source_buffer, i32)[saved_element_index_2] = table_value_5;
                        integer_sum_5 = integer_sum_9;
                        LODWORD(packed_word_bits_5) = HIDWORD(table_value_5);
                        if ( !HIDWORD(table_value_5) )
                          goto LABEL_70;
                      }
LABEL_95:
                      *a3 = 0;
                      goto LABEL_96;
                    }
LABEL_70:
                    loaded_word_6 = saved_loaded_word;
                  }
                  if ( element_index == 115 )
                    goto LABEL_95;
                  cached_src = saved_cached_src_2;
                }
                else if ( (_DWORD)integer_sum_6 == integer_sum_5 )
                {
                  SR_VEC_LANES(128, source_buffer, i32)[integer_sum_6] = 0;
                  integer_sum_5 = integer_sum_6 + 1;
                  integer_sum_9 = integer_sum_6 + 1;
                }
                integer_sum_6 = (unsigned int)(integer_sum_6 + 1);
                if ( (_DWORD)integer_sum_6 == loaded_word_6 )
                {
                  remaining_amount = saved_remaining_amount_2;
                  break;
                }
              }
            }
            byte_count_3 = 4LL * integer_sum_5;
            *a3 = integer_sum_5;
            if ( !byte_count_3 )
              goto LABEL_82;
            if ( a3 == (unsigned int *)-4LL )
            {
              *errno_sr() = 22;
            }
            else
            {
              destination_buffer_2 = (__m128i *)(a3 + 1);
              if ( byte_count_3 <= 0x1CC )
              {
                crt_memcpy(destination_buffer_2, &source_buffer, byte_count_3);
                goto LABEL_82;
              }
              crt_memset((void *)(uintptr_t)(destination_buffer_2), 0, 0x1CCu);
              *errno_sr() = 34;
            }
            crt_invalid_parameter_noinfo();
            goto LABEL_82;
          }
          table_value_3 = a3[1];
          byte_count_2 = 4LL * scaled_index_8;
          *a3 = scaled_index_8;
          if ( 4 * packed_word_bits_3 )
          {
            if ( a3 == (unsigned int *)-4LL )
            {
              *errno_sr() = 22;
LABEL_42:
              crt_invalid_parameter_noinfo();
              goto LABEL_43;
            }
            destination_buffer = (__m128i *)(a3 + 1);
            if ( byte_count_2 > 0x1CC )
            {
              crt_memset((void *)(uintptr_t)(destination_buffer), 0, 0x1CCu);
              *errno_sr() = 34;
              goto LABEL_42;
            }
            crt_memcpy(destination_buffer, Src, byte_count_2);
          }
LABEL_43:
          if ( !(_DWORD)table_value_3 )
          {
LABEL_26:
            *a3 = 0;
LABEL_82:
            selection_flag = 1;
            goto LABEL_83;
          }
          if ( (_DWORD)table_value_3 == 1 )
            goto LABEL_82;
          loaded_word_5 = *a3;
          if ( !*a3 )
            goto LABEL_82;
          LODWORD(packed_word_bits_4) = 0;
          integer_sum_4 = 0;
          do
          {
            scaled_index_4 = (unsigned int)packed_word_bits_4 + table_value_3 * a3[integer_sum_4 + 1];
            a3[integer_sum_4 + 1] = scaled_index_4;
            packed_word_bits_4 = HIDWORD(scaled_index_4);
            integer_sum_4 = (unsigned int)(integer_sum_4 + 1);
          }
          while ( (_DWORD)integer_sum_4 != loaded_word_5 );
LABEL_31:
          if ( !(_DWORD)packed_word_bits_4 )
            goto LABEL_82;
          if ( *a3 < 0x73 )
          {
            a3[++*a3] = packed_word_bits_4;
            goto LABEL_82;
          }
          *a3 = 0;
          selection_flag = 0;
LABEL_83:
          if ( !selection_flag )
            goto LABEL_95;
          remaining_amount -= cached_remaining_amount;
          saved_remaining_amount_2 = remaining_amount;
          if ( !remaining_amount )
          {
            integer_quotient = integer_quotient_2;
            break;
          }
        }
      }
      scaled_index_6 = iteration_count - 10 * integer_quotient;
      if ( scaled_index_6 )
      {
        integer_difference_3 = dword_140285688[scaled_index_6 - 1];
        if ( !integer_difference_3 )
          goto LABEL_95;
        if ( integer_difference_3 != 1 )
        {
          loaded_word_7 = *a3;
          if ( *a3 )
          {
            LODWORD(packed_word_bits_6) = 0;
            integer_sum_7 = 0;
            do
            {
              scaled_index_7 = (unsigned int)packed_word_bits_6 + integer_difference_3 * (unsigned __int64)a3[integer_sum_7 + 1];
              a3[integer_sum_7 + 1] = scaled_index_7;
              packed_word_bits_6 = HIDWORD(scaled_index_7);
              integer_sum_7 = (unsigned int)(integer_sum_7 + 1);
            }
            while ( (_DWORD)integer_sum_7 != loaded_word_7 );
            if ( HIDWORD(scaled_index_7) )
            {
              if ( *a3 >= 0x73 )
                goto LABEL_95;
              a3[++*a3] = HIDWORD(scaled_index_7);
            }
          }
        }
      }
LABEL_96:
      if ( (_DWORD)packed_word_bits )
      {
        loaded_word_8 = *a3;
        integer_sum_8 = 0;
        if ( (_DWORD)loaded_word_8 )
        {
          do
          {
            table_value_6 = (unsigned int)packed_word_bits + (unsigned __int64)a3[integer_sum_8 + 1];
            a3[integer_sum_8 + 1] = table_value_6;
            integer_sum_8 = (unsigned int)(integer_sum_8 + 1);
            loaded_word_8 = *a3;
            LODWORD(packed_word_bits) = HIDWORD(table_value_6);
          }
          while ( (_DWORD)integer_sum_8 != (_DWORD)loaded_word_8 );
        }
        if ( (_DWORD)packed_word_bits )
        {
          if ( (unsigned int)loaded_word_8 >= 0x73 )
          {
            *a3 = 0;
          }
          else
          {
            a3[loaded_word_8 + 1] = packed_word_bits;
            ++*a3;
          }
        }
      }
    }
  }
}

//----- (000000014022F790) ----------------------------------------------------
char            sub_14022F790(__crt_strtox *this, struct __crt_strtox__big_integer *a2)
{
  unsigned __int64 packed_word_bits;
  __int64 loaded_word;
  unsigned int iteration_count;
  __int64 integer_sum;
  unsigned __int64 loaded_word_2;
  _BYTE scratch_buffer[468];

  LODWORD(packed_word_bits) = (_DWORD)a2;
  if ( !(_DWORD)a2 )
    return 1;
  loaded_word = *(unsigned int *)this;
  iteration_count = 0;
  if ( (_DWORD)loaded_word )
  {
    do
    {
      integer_sum = iteration_count++;
      loaded_word_2 = (unsigned int)packed_word_bits + (unsigned __int64)*((unsigned int *)this + integer_sum + 1);
      *((_DWORD *)this + integer_sum + 1) = loaded_word_2;
      loaded_word = *(unsigned int *)this;
      packed_word_bits = HIDWORD(loaded_word_2);
    }
    while ( iteration_count != (_DWORD)loaded_word );
  }
  if ( !(_DWORD)packed_word_bits )
    return 1;
  if ( (unsigned int)loaded_word < 0x73 )
  {
    *((_DWORD *)this + loaded_word + 1) = packed_word_bits;
    ++*(_DWORD *)this;
    return 1;
  }
  *(_DWORD *)this = 0;
  sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)scratch_buffer, 0);
  return 0;
}

//----- (000000014022F860) ----------------------------------------------------
char            sub_14022F860(__int64 a1)
{
  _BYTE *loaded_record_pointer;
  int call_result;
  unsigned __int8 *loaded_record_pointer_2;
  int loaded_word;
  char unused_written_slot;
  _BYTE *byte_cursor;
  _BYTE *loaded_record_pointer_3;
  _BYTE *loaded_record_pointer_4;

  if ( *(_DWORD *)(a1 + 16) )
    return 0;
  loaded_record_pointer = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  if ( !*loaded_record_pointer )
  {
    *(_DWORD *)(a1 + 20) = 1;
    return 0;
  }
  call_result = sub_1402577B4((unsigned __int8)*loaded_record_pointer);
  loaded_record_pointer_2 = *(unsigned __int8 **)(a1 + 8);
  if ( call_result )
  {
    *(_DWORD *)(a1 + 20) = 2;
    loaded_word = sub_1402577B4(*loaded_record_pointer_2);
    unused_written_slot = 1;
    while ( loaded_word )
      loaded_word = sub_1402577B4(*(unsigned __int8 *)++*(_QWORD *)(a1 + 8));
    return unused_written_slot;
  }
  if ( *loaded_record_pointer_2 != 37 || (byte_cursor = loaded_record_pointer_2 + 1, loaded_record_pointer_2[1] == 37) )
  {
    *(_DWORD *)(a1 + 20) = 3;
    unused_written_slot = 1;
    *(_BYTE *)(a1 + 24) = *loaded_record_pointer_2;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&loaded_record_pointer_2[(*loaded_record_pointer_2 == 37) + 1]);
    if ( (sub_140256DC0()[*(unsigned __int8 *)(a1 + 24)] & 0x8000u) != 0 )
    {
      loaded_record_pointer_4 = *(_BYTE **)(a1 + 8);
      if ( *loaded_record_pointer_4 )
      {
        *(_BYTE *)(a1 + 25) = *loaded_record_pointer_4;
        *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
      }
      else
      {
        *(_QWORD *)(a1 + 16) = 42;
        unused_written_slot = 0;
        *(_WORD *)(a1 + 24) = 0;
        *(_BYTE *)(a1 + 26) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        *(_DWORD *)(a1 + 40) = 0;
        *(_BYTE *)(a1 + 44) = 0;
        *(_DWORD *)(a1 + 48) = 0;
      }
    }
    return unused_written_slot;
  }
  *(_DWORD *)(a1 + 20) = 4;
  unused_written_slot = 1;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(byte_cursor);
  if ( *byte_cursor == 42 )
  {
    *(_BYTE *)(a1 + 26) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 2);
  }
  if ( !sub_1402352B4(a1) )
    return 0;
  sub_1402355CC(a1);
  loaded_record_pointer_3 = *(_BYTE **)(a1 + 8);
  if ( *loaded_record_pointer_3 == 119 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
LABEL_18:
    *(_BYTE *)(a1 + 44) = 1;
    goto LABEL_19;
  }
  if ( ((*loaded_record_pointer_3 - 67) & 0xEF) == 0 )
    goto LABEL_18;
LABEL_19:
  if ( !sub_140234F00(a1) )
    return 0;
  if ( !byte_140285820[12 * *(int *)(a1 + 48) + *(int *)(a1 + 40)] )
  {
    *(_QWORD *)(a1 + 16) = 22;
    *(_WORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 26) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    return 0;
  }
  return unused_written_slot;
}

//----- (000000014022FA28) ----------------------------------------------------
char            sub_14022FA28(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  int call_result;
  unsigned __int16 *loaded_record_pointer_2;
  unsigned __int16 i;
  _WORD *record_pointer;
  _WORD *loaded_record_pointer_3;
  bool comparison_result;
  __int64 selection_code;

  if ( *(_DWORD *)(a1 + 16) )
    return 0;
  loaded_record_pointer = *(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  if ( !*loaded_record_pointer )
  {
    *(_DWORD *)(a1 + 20) = 1;
    return 0;
  }
  call_result = sub_140256E00(*loaded_record_pointer, 8);
  loaded_record_pointer_2 = *(unsigned __int16 **)(a1 + 8);
  if ( call_result )
  {
    *(_DWORD *)(a1 + 20) = 2;
    for ( i = *loaded_record_pointer_2; (unsigned int)sub_140256E00(i, 8); i = **(_WORD **)(a1 + 8) )
      *(_QWORD *)(a1 + 8) += 2LL;
    return 1;
  }
  if ( *loaded_record_pointer_2 != 37 || (record_pointer = loaded_record_pointer_2 + 1, loaded_record_pointer_2[1] == 37) )
  {
    *(_DWORD *)(a1 + 20) = 3;
    *(_WORD *)(a1 + 24) = *loaded_record_pointer_2;
    selection_code = 2;
    if ( *loaded_record_pointer_2 != 37 )
      selection_code = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&loaded_record_pointer_2[selection_code]);
    return 1;
  }
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(record_pointer);
  *(_DWORD *)(a1 + 20) = 4;
  if ( *record_pointer == 42 )
  {
    *(_BYTE *)(a1 + 28) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 2);
  }
  if ( !sub_14023535C(a1) )
    return 0;
  sub_140235704(a1);
  loaded_record_pointer_3 = *(_WORD **)(a1 + 8);
  if ( *loaded_record_pointer_3 == 119 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
LABEL_22:
    *(_BYTE *)(a1 + 44) = 1;
    goto LABEL_23;
  }
  if ( ((*loaded_record_pointer_3 - 67) & 0xFFEF) != 0 )
  {
    if ( *(_DWORD *)(a1 + 40) == 11 )
      goto LABEL_22;
    comparison_result = (*(_BYTE *)a1 & 2) != 0;
  }
  else
  {
    comparison_result = 0;
  }
  if ( comparison_result )
    goto LABEL_22;
LABEL_23:
  if ( !sub_1402350A4(a1) )
    return 0;
  if ( !byte_140285820[12 * *(int *)(a1 + 48) + *(int *)(a1 + 40)] )
  {
    *(_QWORD *)(a1 + 16) = 22;
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 28) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    return 0;
  }
  return 1;
}

//----- (000000014022FBC0) ----------------------------------------------------
__int64            sub_14022FBC0(__crt_strtox__floating_point_value *this)
{
  if ( !*((_BYTE *)this + 8) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return *(_QWORD *)this;
}

// 14022FBF3: control flows out of bounds to 14022FBF8

//----- (000000014022FBFC) ----------------------------------------------------
__int64            sub_14022FBFC(__crt_strtox__floating_point_value *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return *(_QWORD *)this;
}

// 14022FC2F: control flows out of bounds to 14022FC34

//----- (000000014022FC68) ----------------------------------------------------
__int64            sub_14022FC68(unsigned __int64 a1, int a2, unsigned __int8 a3, char a4, __int64 a5)
{
  int input_value;
  unsigned __int64 remaining_bits;
  bool bitscanreverse_result;
  int integer_sum;
  int integer_sum_2;
  unsigned __int64 **input_cursor;
  char loaded_word;
  int comparison_result;
  int iteration_count;
  int comparison_result_2;
  int integer_difference;
  int integer_difference_2;
  __int64 shifted_bits;
  bool comparison_result_3;
  int fegetround_0_result;
  unsigned __int8 xor_value;
  unsigned __int64 *unused_written_slot;
  char comparison_result_4;
  unsigned int comparison_result_5;
  __int64 shifted_bits_2;
  bool comparison_result_6;
  int fegetround_0_result_2;
  unsigned __int8 xor_value_2;
  unsigned __int64 *unused_written_slot_2;
  unsigned __int64 *unused_written_slot_3;
  __int64 comparison_result_7;
  int cached_integer_difference;

  input_value = a2;
  remaining_bits = a1;
  if ( a1 <= 0xFFFFFFFF )
  {
    bitscanreverse_result = !_BitScanReverse((unsigned int *)&a1, a1);
    if ( bitscanreverse_result )
      integer_sum_2 = 0;
    else
      integer_sum_2 = a1 + 1;
  }
  else
  {
    bitscanreverse_result = !_BitScanReverse((unsigned int *)&a1, HIDWORD(a1));
    if ( bitscanreverse_result )
      integer_sum = 0;
    else
      integer_sum = a1 + 1;
    integer_sum_2 = integer_sum + 32;
  }
  input_cursor = (unsigned __int64 **)a5;
  loaded_word = *(_BYTE *)(a5 + 8);
  comparison_result = (loaded_word != 0 ? 53 : 24) - integer_sum_2;
  iteration_count = input_value - comparison_result;
  comparison_result_2 = loaded_word != 0 ? 1023 : 127;
  if ( input_value - comparison_result > comparison_result_2 )
    goto LABEL_63;
  if ( iteration_count < (loaded_word != 0 ? -1022 : -126) )
  {
    integer_difference = comparison_result_2 + input_value - 1;
    iteration_count = -comparison_result_2;
    cached_integer_difference = integer_difference;
    if ( integer_difference < 0 )
    {
      integer_difference_2 = -integer_difference;
      if ( (unsigned int)-integer_difference >= 0x40 )
      {
        remaining_bits = 0;
LABEL_33:
        if ( !remaining_bits )
        {
          unused_written_slot = *input_cursor;
          if ( loaded_word )
            *unused_written_slot = (unsigned __int64)a3 << 63;
          else
            *(_DWORD *)unused_written_slot = a3 << 31;
          return 2;
        }
        if ( remaining_bits > (-(__int64)(loaded_word != 0) & 0xFFFFFFF800000uLL) + 0x7FFFFF )
          iteration_count = input_value - integer_difference - comparison_result - 1;
        goto LABEL_70;
      }
      shifted_bits = remaining_bits & (1LL << ((unsigned __int8)integer_difference_2 - 1));
      comparison_result_3 = !a4 || (((1LL << ((unsigned __int8)integer_difference_2 - 1)) - 1) & remaining_bits) != 0;
      if ( !shifted_bits && !comparison_result_3 )
        goto LABEL_31;
      fegetround_0_result = fegetround_0();
      if ( fegetround_0_result )
      {
        if ( fegetround_0_result != 256 )
        {
          integer_difference = cached_integer_difference;
          input_value = a2;
          if ( fegetround_0_result == 512 )
          {
            xor_value = a3 ^ 1;
LABEL_32:
            input_cursor = (unsigned __int64 **)a5;
            remaining_bits = xor_value + (remaining_bits >> integer_difference_2);
            loaded_word = *(_BYTE *)(a5 + 8);
            goto LABEL_33;
          }
LABEL_31:
          xor_value = 0;
          goto LABEL_32;
        }
        xor_value = a3;
      }
      else
      {
        if ( !shifted_bits || !comparison_result_3 && (remaining_bits & (1LL << integer_difference_2)) == 0 )
        {
          integer_difference = cached_integer_difference;
          input_value = a2;
          goto LABEL_31;
        }
        xor_value = 1;
      }
      integer_difference = cached_integer_difference;
      input_value = a2;
      goto LABEL_32;
    }
    comparison_result_4 = comparison_result_2 + input_value - 1;
    goto LABEL_69;
  }
  if ( comparison_result >= 0 )
  {
    if ( comparison_result > 0 )
    {
      comparison_result_4 = (loaded_word != 0 ? 53 : 24) - integer_sum_2;
LABEL_69:
      remaining_bits <<= comparison_result_4;
    }
LABEL_70:
    unused_written_slot_3 = *input_cursor;
    comparison_result_7 = remaining_bits & ((-(__int64)(loaded_word != 0) & 0xFFFFFFF800000LL) + 0x7FFFFF);
    if ( loaded_word )
      *unused_written_slot_3 = comparison_result_7 | ((((unsigned __int64)a3 << 11) | ((_WORD)iteration_count + 1023) & 0x7FF) << 52);
    else
      *(_DWORD *)unused_written_slot_3 = comparison_result_7 & 0x7FFFFF | (a3 << 31) | ((iteration_count + 127) << 23) & 0x7F800000;
    return 0;
  }
  comparison_result_5 = integer_sum_2 - (*(_BYTE *)(a5 + 8) != 0 ? 53 : 24);
  if ( comparison_result_5 < 0x40 )
  {
    shifted_bits_2 = remaining_bits & (1LL << ((unsigned __int8)comparison_result_5 - 1));
    comparison_result_6 = !a4 || (((1LL << ((unsigned __int8)comparison_result_5 - 1)) - 1) & remaining_bits) != 0;
    if ( shifted_bits_2 || comparison_result_6 )
    {
      fegetround_0_result_2 = fegetround_0();
      if ( fegetround_0_result_2 )
      {
        if ( fegetround_0_result_2 == 256 )
        {
          xor_value_2 = a3;
          goto LABEL_60;
        }
        if ( fegetround_0_result_2 == 512 )
        {
          xor_value_2 = a3 ^ 1;
LABEL_60:
          input_cursor = (unsigned __int64 **)a5;
          remaining_bits = xor_value_2 + (remaining_bits >> comparison_result_5);
          loaded_word = *(_BYTE *)(a5 + 8);
          goto LABEL_61;
        }
      }
      else if ( shifted_bits_2 && (comparison_result_6 || (remaining_bits & (1LL << comparison_result_5)) != 0) )
      {
        xor_value_2 = 1;
        goto LABEL_60;
      }
    }
    xor_value_2 = 0;
    goto LABEL_60;
  }
  remaining_bits = 0;
LABEL_61:
  if ( remaining_bits <= (-(__int64)(loaded_word != 0) & 0x1FFFFFFF000000uLL) + 0xFFFFFF )
    goto LABEL_70;
  remaining_bits >>= 1;
  if ( ++iteration_count <= (loaded_word != 0 ? 1023 : 127) )
    goto LABEL_70;
LABEL_63:
  unused_written_slot_2 = *input_cursor;
  if ( loaded_word )
    *unused_written_slot_2 = ((unsigned __int64)a3 << 63) | 0x7FF0000000000000LL;
  else
    *(_DWORD *)unused_written_slot_2 = (a3 << 31) | 0x7F800000;
  return 3;
}

//----- (0000000140230010) ----------------------------------------------------
__int64            sub_140230010(_DWORD *a1, unsigned int a2, unsigned __int8 a3, char a4, __int64 a5)
{
  unsigned int table_value;
  int comparison_result;
  __int64 table_value_2;
  char xor_value;
  unsigned __int64 shifted_bits;
  char input_value;
  __int64 shifted_bits_2;
  __int64 integer_difference;
  __int64 table_value_3;
  __int64 integer_difference_2;
  int scaled_index;
  int masked_bits;
  unsigned __int64 shifted_bits_3;
  int element_index;
  char saved_xor_value;
  int integer_sum;
  __int64 table_value_4;
  __int64 shifted_bits_4;
  char selected_word;
  int element_index_2;
  char selected_word_2;

  table_value = 0;
  comparison_result = *(_BYTE *)(a5 + 8) != 0 ? 52 : 23;
  if ( a2 > 0x40 )
  {
    input_value = a2;
    shifted_bits_2 = a2 >> 5;
    integer_difference = (unsigned int)(shifted_bits_2 - 2);
    table_value_3 = (unsigned int)a1[integer_difference + 1];
    integer_difference_2 = (unsigned int)a1[(unsigned int)(shifted_bits_2 - 1) + 1];
    scaled_index = 32 * (shifted_bits_2 - 2);
    masked_bits = input_value & 0x1F;
    if ( masked_bits )
    {
      integer_sum = comparison_result + masked_bits + scaled_index;
      table_value_4 = (unsigned int)a1[shifted_bits_2 + 1];
      shifted_bits_4 = (unsigned int)((1 << masked_bits) - 1);
      shifted_bits_3 = ((unsigned __int64)((unsigned int)table_value_3 & ~((1 << masked_bits) - 1)) >> masked_bits)
          + ((shifted_bits_4 & table_value_4) << (64 - (unsigned __int8)masked_bits))
          + (integer_difference_2 << (64 - (unsigned __int8)masked_bits - 32));
      if ( a4 || (selected_word = 1, ((unsigned int)table_value_3 & (unsigned int)shifted_bits_4) != 0) )
        selected_word = 0;
      element_index_2 = 0;
      if ( (_DWORD)integer_difference )
      {
        do
        {
          selected_word_2 = 0;
          if ( !a1[element_index_2 + 1] )
            selected_word_2 = selected_word;
          ++element_index_2;
          selected_word = selected_word_2;
        }
        while ( element_index_2 != (_DWORD)integer_difference );
      }
      xor_value = selected_word;
      comparison_result = integer_sum;
    }
    else
    {
      comparison_result += scaled_index;
      shifted_bits_3 = table_value_3 + (integer_difference_2 << 32);
      xor_value = a4 ^ 1;
      element_index = 0;
      if ( (_DWORD)integer_difference )
      {
        do
        {
          saved_xor_value = 0;
          if ( !a1[element_index + 1] )
            saved_xor_value = xor_value;
          ++element_index;
          xor_value = saved_xor_value;
        }
        while ( element_index != (_DWORD)integer_difference );
      }
    }
    shifted_bits = shifted_bits_3;
  }
  else
  {
    if ( *a1 )
      table_value_2 = (unsigned int)a1[1];
    else
      table_value_2 = 0;
    if ( *a1 > 1u )
      table_value = a1[2];
    xor_value = a4 ^ 1;
    shifted_bits = table_value_2 + ((unsigned __int64)table_value << 32);
  }
  return sub_14022FC68(shifted_bits, comparison_result, a3, xor_value, a5);
}

//----- (000000014023023C) ----------------------------------------------------
__int64 sub_14023023C(_DWORD *a1, __crt_strtox__floating_point_value *a2)
{
  extern long long crt_convert_decimal(const void *number, const void *target);
  /* src/engine/crt_strtod.c */
  return crt_convert_decimal(a1, a2);
}
// 140231940: control flows out of bounds to 140231947
// 140231BF3: conditional instruction was optimized away because r9d.4<73u
// 140231DDA: conditional instruction was optimized away because ebx.4<73u
// 140230668: conditional instruction was optimized away because r12d.4>=2u
// 140230B9B: conditional instruction was optimized away because r15d.4>=2u
// 140231240: conditional instruction was optimized away because ebx.4>=2u
// 140231827: conditional instruction was optimized away because ebx.4>=2u

//----- (0000000140231FC0) ----------------------------------------------------
__int64            sub_140231FC0(__int64 a1, __int64 a2)
{
  unsigned __int64 scaled_index;
  unsigned __int8 *buffer_cursor;
  __int64 loaded_word;
  int comparison_result;
  unsigned __int64 comparison_result_2;
  __int64 loaded_word_2;
  char i;
  char input_byte;

  scaled_index = 0;
  buffer_cursor = (unsigned __int8 *)(a1 + 8);
  loaded_word = *(unsigned int *)(a1 + 4) + a1 + 8;
  comparison_result = *(_DWORD *)a1 + (*(_BYTE *)(a2 + 8) != 0 ? 52 : 23);
  if ( a1 + 8 != loaded_word )
  {
    comparison_result_2 = (-(__int64)(*(_BYTE *)(a2 + 8) != 0) & 0x1FFFFFFF000000LL) + 0xFFFFFF;
    do
    {
      if ( scaled_index > comparison_result_2 )
        break;
      loaded_word_2 = *buffer_cursor;
      comparison_result -= 4;
      ++buffer_cursor;
      scaled_index = loaded_word_2 + 16 * scaled_index;
    }
    while ( buffer_cursor != (unsigned __int8 *)loaded_word );
  }
  for ( i = 1; buffer_cursor != (unsigned __int8 *)loaded_word && i; i = input_byte == 0 )
    input_byte = *buffer_cursor++;
  return sub_14022FC68(scaled_index, comparison_result, *(_BYTE *)(a1 + 776), i, a2);
}

//----- (0000000140232088) ----------------------------------------------------
void *           sub_140232088(void **a1)
{
  void *result;
  void *calloc_base_result;

  result = *a1;
  if ( !*a1 )
  {
    calloc_base_result = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = calloc_base_result;
    free_base(nullptr);
    return *a1;
  }
  return result;
}

//----- (00000001402320F0) ----------------------------------------------------
__int64            sub_1402320F0(
        __crt_strtox *this,
        struct __crt_strtox__big_integer *a2,
             struct __crt_strtox__big_integer *a3)
{
  unsigned int loaded_word;
  __int64 packed_word_bits;
  unsigned int integer_difference;
  unsigned __int64 loaded_word_2;
  int selection_flag;
  unsigned int unused_written_slot;
  unsigned int loaded_word_3;
  __int64 shifted_bits;
  unsigned __int64 selected_word;
  __int64 loaded_word_4;
  unsigned __int64 shifted_bits_2;
  __int64 remaining_count;
  int iteration_count;
  int remaining_count_2;
  __int64 scaled_index;
  _DWORD *buffer_cursor;
  unsigned int loaded_word_5;
  unsigned int loaded_word_6;
  bool bitscanreverse_result;
  int callee_output_word;
  int integer_difference_2;
  char integer_difference_3;
  unsigned int shifted_bits_3;
  unsigned int shifted_bits_4;
  unsigned int shifted_bits_5;
  int remaining_count_3;
  __int64 shifted_bits_6;
  unsigned __int64 saved_loaded_word;
  __int64 integer_difference_4;
  unsigned int loaded_word_7;
  __int64 shifted_bits_7;
  unsigned __int64 shifted_bits_8;
  unsigned __int64 integer_quotient;
  unsigned __int64 running_total;
  __int64 remaining_count_4;
  unsigned __int64 remaining_amount;
  unsigned __int64 integer_sum;
  unsigned int iteration_count_2;
  unsigned int *buffer_cursor_2;
  __int64 loaded_word_8;
  unsigned __int64 scaled_index_2;
  unsigned int cached_scaled_index;
  __int64 integer_sum_2;
  unsigned int loaded_word_9;
  unsigned __int64 comparison_operand;
  unsigned int iteration_count_3;
  unsigned __int64 selected_word_2;
  unsigned int *buffer_cursor_3;
  __int64 integer_sum_3;
  __int64 loaded_word_10;
  char *byte_cursor;
  __int64 loaded_word_11;
  unsigned __int64 integer_sum_4;
  __int64 packed_word_bits_2;
  unsigned int i;
  __int64 integer_sum_5;
  char integer_difference_5;
  unsigned __int64 packed_word_bits_3;
  char integer_difference_6;
  unsigned __int64 saved_loaded_word_2;
  __m128i Source[29];
  unsigned int shifted_bits_9;
  int cached_integer_difference;
  unsigned int saved_loaded_word_3;

  if ( !*(_DWORD *)this )
    return 0;
  loaded_word = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
    return 0;
  packed_word_bits = (unsigned int)(*(_DWORD *)this - 1);
  integer_difference = loaded_word - 1;
  if ( loaded_word == 1 )
  {
    loaded_word_2 = *((unsigned int *)a2 + 1);
    selection_flag = 0;
    if ( (_DWORD)loaded_word_2 == 1 )
    {
      unused_written_slot = *((_DWORD *)this + 1);
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      return unused_written_slot;
    }
    else if ( *(_DWORD *)this == 1 )
    {
      loaded_word_3 = *((_DWORD *)this + 1);
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      *((_DWORD *)this + 1) = loaded_word_3 % (unsigned int)loaded_word_2;
      LOBYTE(selection_flag) = loaded_word_3 % (unsigned int)loaded_word_2 != 0;
      *(_DWORD *)this = selection_flag;
      return loaded_word_3 / (unsigned int)loaded_word_2;
    }
    else
    {
      shifted_bits = 0;
      selected_word = 0;
      if ( *(_DWORD *)this )
      {
        do
        {
          loaded_word_4 = *((unsigned int *)this + packed_word_bits + 1);
          packed_word_bits = (unsigned int)(packed_word_bits - 1);
          shifted_bits_2 = (selected_word << 32) | loaded_word_4;
          selected_word = shifted_bits_2 % loaded_word_2;
          shifted_bits = (unsigned int)(shifted_bits_2 / loaded_word_2) + (shifted_bits << 32);
        }
        while ( (_DWORD)packed_word_bits != -1 );
      }
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      *(_QWORD *)((char *)this + 4) = selected_word;
      LOBYTE(selection_flag) = HIDWORD(selected_word) != 0;
      *(_DWORD *)this = selection_flag + 1;
      return shifted_bits;
    }
  }
  if ( integer_difference > (unsigned int)packed_word_bits )
    return 0;
  remaining_count = (int)packed_word_bits;
  iteration_count = packed_word_bits - integer_difference;
  remaining_count_2 = *(_DWORD *)this - 1;
  if ( (int)packed_word_bits < (__int64)(int)(packed_word_bits - integer_difference) )
    goto LABEL_18;
  scaled_index = (intptr_t)((uintptr_t)a2 - 4 * (uintptr_t)iteration_count - (uintptr_t)this);
  buffer_cursor = (_DWORD *)((char *)this + 4 * (int)packed_word_bits + 4);
  while ( *(_DWORD *)((char *)buffer_cursor + scaled_index) == *buffer_cursor )
  {
    --remaining_count_2;
    --remaining_count;
    --buffer_cursor;
    if ( remaining_count < iteration_count )
      goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + remaining_count_2 - iteration_count + 1) < *((_DWORD *)this + remaining_count_2 + 1) )
LABEL_18:
    ++iteration_count;
  if ( !iteration_count )
    return 0;
  loaded_word_5 = *((_DWORD *)a2 + loaded_word);
  loaded_word_6 = *((_DWORD *)a2 + loaded_word - 1);
  bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word, loaded_word_5);
  shifted_bits_9 = loaded_word_6;
  if ( bitscanreverse_result )
    integer_difference_2 = 32;
  else
    integer_difference_2 = 31 - callee_output_word;
  integer_difference_3 = 32 - integer_difference_2;
  cached_integer_difference = integer_difference_2;
  integer_difference_5 = 32 - integer_difference_2;
  if ( integer_difference_2 )
  {
    shifted_bits_3 = loaded_word_5 << integer_difference_2;
    shifted_bits_4 = loaded_word_6 >> integer_difference_3;
    shifted_bits_5 = loaded_word_6 << integer_difference_2;
    loaded_word_5 = shifted_bits_3 | shifted_bits_4;
    shifted_bits_9 = shifted_bits_5;
    if ( loaded_word > 2 )
      shifted_bits_9 = (*((_DWORD *)a2 + loaded_word - 2) >> integer_difference_3) | shifted_bits_5;
  }
  remaining_count_3 = iteration_count - 1;
  shifted_bits_6 = 0;
  if ( iteration_count - 1 >= 0 )
  {
    saved_loaded_word = loaded_word_5;
    integer_difference_4 = remaining_count_3 + loaded_word;
    saved_loaded_word_2 = loaded_word_5;
    integer_difference_6 = 32 - integer_difference_2;
    do
    {
      if ( (unsigned int)integer_difference_4 > (unsigned int)packed_word_bits )
        loaded_word_7 = 0;
      else
        loaded_word_7 = *((_DWORD *)this + integer_difference_4 + 1);
      saved_loaded_word_3 = loaded_word_7;
      shifted_bits_7 = *((unsigned int *)this + (unsigned int)(integer_difference_4 - 2) + 1);
      LODWORD(packed_word_bits_3) = *((_DWORD *)this + (unsigned int)(integer_difference_4 - 1) + 1);
      HIDWORD(packed_word_bits_3) = loaded_word_7;
      if ( cached_integer_difference )
      {
        shifted_bits_8 = (packed_word_bits_3 << cached_integer_difference) | ((unsigned __int64)(unsigned int)shifted_bits_7 >> integer_difference_6);
        shifted_bits_7 = (unsigned int)((_DWORD)shifted_bits_7 << cached_integer_difference);
        if ( (unsigned int)integer_difference_4 >= 3 )
          shifted_bits_7 = (*((_DWORD *)this + (unsigned int)(integer_difference_4 - 3) + 1) >> integer_difference_5) | (unsigned int)shifted_bits_7;
      }
      else
      {
        shifted_bits_8 = packed_word_bits_3;
      }
      integer_quotient = shifted_bits_8 / saved_loaded_word;
      running_total = (unsigned int)(shifted_bits_8 % saved_loaded_word);
      remaining_count_4 = integer_quotient;
      if ( integer_quotient > 0xFFFFFFFF )
      {
        remaining_count_4 = 0xFFFFFFFFLL;
        running_total += saved_loaded_word * (integer_quotient - 0xFFFFFFFF);
      }
      if ( running_total <= 0xFFFFFFFF )
      {
        remaining_amount = remaining_count_4 * shifted_bits_9;
        do
        {
          if ( remaining_amount <= (shifted_bits_7 | (running_total << 32)) )
            break;
          --remaining_count_4;
          remaining_amount -= shifted_bits_9;
          running_total += saved_loaded_word;
        }
        while ( running_total <= 0xFFFFFFFF );
      }
      if ( remaining_count_4 )
      {
        integer_sum = 0;
        iteration_count_2 = 0;
        if ( loaded_word )
        {
          buffer_cursor_2 = (unsigned int *)((char *)a2 + 4);
          do
          {
            loaded_word_8 = *buffer_cursor_2++;
            scaled_index_2 = remaining_count_4 * loaded_word_8 + integer_sum;
            cached_scaled_index = scaled_index_2;
            integer_sum_2 = iteration_count_2 + remaining_count_3;
            loaded_word_9 = *((_DWORD *)this + integer_sum_2 + 1);
            comparison_operand = HIDWORD(scaled_index_2);
            integer_sum = HIDWORD(scaled_index_2) + 1;
            if ( loaded_word_9 >= cached_scaled_index )
              integer_sum = comparison_operand;
            ++iteration_count_2;
            *((_DWORD *)this + integer_sum_2 + 1) = loaded_word_9 - cached_scaled_index;
          }
          while ( iteration_count_2 < loaded_word );
          saved_loaded_word = saved_loaded_word_2;
        }
        if ( saved_loaded_word_3 < integer_sum )
        {
          iteration_count_3 = 0;
          if ( loaded_word )
          {
            selected_word_2 = 0;
            buffer_cursor_3 = (unsigned int *)((char *)a2 + 4);
            do
            {
              integer_sum_3 = iteration_count_3 + remaining_count_3;
              ++iteration_count_3;
              loaded_word_10 = *((unsigned int *)this + integer_sum_3 + 1);
              byte_cursor = (char *)this + 4 * integer_sum_3;
              loaded_word_11 = *buffer_cursor_3++;
              integer_sum_4 = loaded_word_10 + loaded_word_11 + selected_word_2;
              *((_DWORD *)byte_cursor + 1) = integer_sum_4;
              selected_word_2 = HIDWORD(integer_sum_4);
            }
            while ( iteration_count_3 < loaded_word );
          }
          LODWORD(remaining_count_4) = remaining_count_4 - 1;
        }
        LODWORD(packed_word_bits) = integer_difference_4 - 1;
      }
      integer_difference_4 = (unsigned int)(integer_difference_4 - 1);
      shifted_bits_6 = (unsigned int)remaining_count_4 + (shifted_bits_6 << 32);
      --remaining_count_3;
    }
    while ( remaining_count_3 >= 0 );
  }
  LODWORD(packed_word_bits_2) = packed_word_bits + 1;
  for ( i = packed_word_bits + 1; i < *(_DWORD *)this; *((_DWORD *)this + integer_sum_5 + 1) = 0 )
    integer_sum_5 = i++;
  *(_DWORD *)this = packed_word_bits_2;
  if ( (_DWORD)packed_word_bits != -1 )
  {
    do
    {
      packed_word_bits_2 = (unsigned int)(packed_word_bits_2 - 1);
      if ( *((_DWORD *)this + packed_word_bits_2 + 1) )
        break;
      *(_DWORD *)this = packed_word_bits_2;
    }
    while ( (_DWORD)packed_word_bits_2 );
  }
  return shifted_bits_6;
}

//----- (0000000140232538) ----------------------------------------------------
char            sub_140232538(__int64 a1)
{
  unsigned __int64 loaded_word;
  bool comparison_result;
  FILE **loaded_word_2;
  int getc_nolock_result;

  loaded_word = *(_QWORD *)(a1 + 16) + 1LL;
  comparison_result = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 16) = loaded_word;
  if ( !comparison_result && loaded_word > *(_QWORD *)(a1 + 8) || (loaded_word_2 = *(FILE ***)a1, getc_nolock_result = getc_nolock(**(FILE ***)a1), getc_nolock_result == -1) )
    LOBYTE(getc_nolock_result) = 0;
  else
    loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
  return getc_nolock_result;
}

//----- (0000000140232574) ----------------------------------------------------
__int64            sub_140232574(__int64 a1)
{
  unsigned __int64 loaded_word;
  FILE **loaded_word_2;
  __int64 result;

  loaded_word = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = loaded_word;
  if ( *(_QWORD *)(a1 + 8) && loaded_word > *(_QWORD *)(a1 + 8) )
    return 0;
  loaded_word_2 = *(FILE ***)a1;
  result = j__fgetwc_nolock(**(FILE ***)a1);
  if ( (_WORD)result == 0xFFFF )
    return 0;
  loaded_word_2[1] = (FILE *)((char *)loaded_word_2[1] + 1);
  return result;
}

//----- (0000000140232638) ----------------------------------------------------
int            sub_140232638(__int64 a1)
{
  int result;

  result = getc_nolock(*(FILE **)a1);
  if ( result != -1 )
    ++*(_QWORD *)(a1 + 8);
  return result;
}

//----- (0000000140232658) ----------------------------------------------------
__int64            sub_140232658(FILE **a1)
{
  __int64 result;

  result = j__fgetwc_nolock(*a1);
  if ( (_WORD)result != 0xFFFF )
    a1[1] = (FILE *)((char *)a1[1] + 1);
  return result;
}

//----- (00000001402326E8) ----------------------------------------------------
char *           sub_1402326E8(char **a1)
{
  char *input_byte;
  char *calloc_base_result;
  char *result;
  char *text_cursor;

  input_byte = *a1;
  if ( !*a1 )
  {
    calloc_base_result = (char *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = calloc_base_result;
    free_base(nullptr);
    input_byte = *a1;
  }
  result = input_byte + 0x2000;
  text_cursor = input_byte;
  if ( input_byte < input_byte + 0x2000 )
  {
    do
    {
      *text_cursor = ~*text_cursor;
      result = (char *)(++text_cursor - input_byte);
    }
    while ( text_cursor - input_byte != (input_byte + 0x2000 >= input_byte ? 0x2000 : 0) );
  }
  return result;
}

//----- (00000001402327F8) ----------------------------------------------------
char            sub_1402327F8(__int64 a1, int a2, unsigned __int16 a3)
{
  int integer_difference;

  if ( a3 == 0xFFFF )
    return 0;
  if ( a2 )
  {
    integer_difference = a2 - 1;
    if ( integer_difference )
    {
      if ( integer_difference != 7 || !sub_140236014((void **)(a1 + 80), a3) )
        return 0;
    }
    else if ( (unsigned __int16)(a3 - 9) <= 4u || a3 == 32 )
    {
      return 0;
    }
  }
  return 1;
}

//----- (0000000140232844) ----------------------------------------------------
char            sub_140232844(__int64 a1, int a2, unsigned __int16 a3)
{
  int integer_difference;

  if ( a3 == 0xFFFF )
    return 0;
  if ( a2 )
  {
    integer_difference = a2 - 1;
    if ( integer_difference )
    {
      if ( integer_difference != 7 || !sub_140236014((void **)(a1 + 88), a3) )
        return 0;
    }
    else if ( (unsigned __int16)(a3 - 9) <= 4u || a3 == 32 )
    {
      return 0;
    }
  }
  return 1;
}

//----- (00000001402328D8) ----------------------------------------------------
bool            sub_1402328D8(sr_anon_107 *this, struct __crt_locale_pointers *a2, struct sr_anon_68 *     a3)
{
  return (unsigned int)crt_isctype_l((unsigned __int8)this, 8, a2) != 0;
}

//----- (00000001402328F8) ----------------------------------------------------
bool            sub_1402328F8(unsigned __int16 a1)
{
  return (unsigned int)sub_140256E00(a1, 8) != 0;
}

//----- (0000000140232918) ----------------------------------------------------
bool            sub_140232918(void **a1)
{
  bool comparison_result;
  void *calloc_base_result;

  comparison_result = *a1 == nullptr;
  if ( !*a1 )
  {
    calloc_base_result = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = calloc_base_result;
    free_base(nullptr);
    comparison_result = *a1 == nullptr;
  }
  return !comparison_result;
}

//----- (0000000140232974) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_649(__int64 a1)
{
  int loaded_word;
  __int64 unused_written_slot;
  int loaded_word_2;
  int loaded_word_3;
  int integer_difference;
  int integer_difference_2;
  bool comparison_result;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;

  loaded_word = *(_DWORD *)(a1 + 48);
  if ( loaded_word < 0 )
    return 0;
  if ( loaded_word > 1 )
  {
    unused_written_slot = 8;
    if ( loaded_word <= 6 )
    {
LABEL_13:
      loaded_word_3 = *(_DWORD *)(a1 + 40);
      if ( loaded_word_3 > 5 )
      {
        integer_difference_4 = loaded_word_3 - 6;
        if ( !integer_difference_4 )
          return unused_written_slot;
        integer_difference_5 = integer_difference_4 - 1;
        if ( !integer_difference_5 )
          return unused_written_slot;
        integer_difference_3 = integer_difference_5 - 2;
        comparison_result = integer_difference_3 == 0;
LABEL_19:
        if ( !comparison_result )
        {
          if ( integer_difference_3 != 1 )
            return 0;
          return unused_written_slot;
        }
        return 4;
      }
      if ( loaded_word_3 == 5 )
        return unused_written_slot;
      if ( loaded_word_3 )
      {
        integer_difference = loaded_word_3 - 1;
        if ( !integer_difference )
          return 1;
        integer_difference_2 = integer_difference - 1;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          comparison_result = integer_difference_3 == 0;
          goto LABEL_19;
        }
        return 2;
      }
      return 4;
    }
    if ( loaded_word == 7 )
    {
      loaded_word_2 = *(_DWORD *)(a1 + 40);
      if ( loaded_word_2 )
      {
        if ( loaded_word_2 != 3 && loaded_word_2 != 8 )
          return 0;
        return unused_written_slot;
      }
      return 4;
    }
    if ( loaded_word != 8 )
    {
      if ( loaded_word != 9 )
        return 0;
      goto LABEL_13;
    }
  }
  return (*(_BYTE *)(a1 + 44) != 0) + 1LL;
}

//----- (0000000140232A10) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_650(__int64 a1)
{
  int loaded_word;
  __int64 unused_written_slot;
  int loaded_word_2;
  int loaded_word_3;
  int integer_difference;
  int integer_difference_2;
  bool comparison_result;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;

  loaded_word = *(_DWORD *)(a1 + 48);
  if ( loaded_word < 0 )
    return 0;
  if ( loaded_word > 1 )
  {
    unused_written_slot = 8;
    if ( loaded_word <= 6 )
    {
LABEL_13:
      loaded_word_3 = *(_DWORD *)(a1 + 40);
      if ( loaded_word_3 > 5 )
      {
        integer_difference_4 = loaded_word_3 - 6;
        if ( !integer_difference_4 )
          return unused_written_slot;
        integer_difference_5 = integer_difference_4 - 1;
        if ( !integer_difference_5 )
          return unused_written_slot;
        integer_difference_3 = integer_difference_5 - 2;
        comparison_result = integer_difference_3 == 0;
LABEL_19:
        if ( !comparison_result )
        {
          if ( integer_difference_3 != 1 )
            return 0;
          return unused_written_slot;
        }
        return 4;
      }
      if ( loaded_word_3 == 5 )
        return unused_written_slot;
      if ( loaded_word_3 )
      {
        integer_difference = loaded_word_3 - 1;
        if ( !integer_difference )
          return 1;
        integer_difference_2 = integer_difference - 1;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          comparison_result = integer_difference_3 == 0;
          goto LABEL_19;
        }
        return 2;
      }
      return 4;
    }
    if ( loaded_word == 7 )
    {
      loaded_word_2 = *(_DWORD *)(a1 + 40);
      if ( loaded_word_2 )
      {
        if ( loaded_word_2 != 3 && loaded_word_2 != 8 )
          return 0;
        return unused_written_slot;
      }
      return 4;
    }
    if ( loaded_word != 8 )
    {
      if ( loaded_word != 9 )
        return 0;
      goto LABEL_13;
    }
  }
  return (*(_BYTE *)(a1 + 44) != 0) + 1LL;
}

//----- (0000000140232B30) ----------------------------------------------------
__int64            sub_140232B30(
        sr_anon_107 *this,
        struct __crt_strtox__big_integer *a2,
             struct __crt_strtox__big_integer *a3)
{
  unsigned int loaded_word;
  int loaded_word_2;
  unsigned int loaded_word_3;
  char *byte_cursor;
  unsigned __int64 packed_word_bits;
  unsigned int iteration_count;
  __int64 loaded_word_4;
  __int64 integer_sum;
  unsigned __int64 masked_bits;
  __int64 loaded_word_5;
  unsigned int *record_pointer;
  unsigned int saved_loaded_word;
  __int64 loaded_word_6;
  unsigned int loaded_word_7;
  unsigned __int64 packed_word_bits_2;
  unsigned int iteration_count_2;
  __int64 integer_sum_2;
  unsigned __int64 scaled_index;
  __int64 loaded_word_8;
  unsigned int loaded_word_9;
  sr_anon_107 *cached_this;
  sr_anon_107 *cached_this_2;
  char *byte_cursor_2;
  unsigned int integer_sum_3;
  unsigned int element_index;
  char *byte_cursor_3;
  __int64 masked_bits_2;
  unsigned __int64 packed_word_bits_3;
  unsigned int element_index_2;
  __int64 saved_element_index;
  __int64 integer_difference;
  unsigned __int64 masked_bits_3;
  __int64 saved_element_index_2;
  unsigned __int64 table_value;
  __int64 unused_local;
  unsigned int saved_loaded_word_2;
  char *byte_cursor_4;
  int unused_written_slot;
  char scratch_buffer[460];
  unsigned int integer_sum_4;
  __m128i Source[28];
  __int64 unused_local_2;

  loaded_word = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 1u )
  {
    record_pointer = (unsigned int *)((char *)this + 4);
    saved_loaded_word = *(_DWORD *)this;
    if ( *(_DWORD *)this > 1u )
    {
      loaded_word_9 = *(_DWORD *)a2;
      cached_this = a2;
      cached_this_2 = this;
      if ( loaded_word >= saved_loaded_word )
        cached_this = this;
      byte_cursor_2 = (char *)cached_this + 4;
      byte_cursor_4 = byte_cursor_2;
      if ( loaded_word >= saved_loaded_word )
      {
        loaded_word_9 = saved_loaded_word;
        cached_this_2 = a2;
        saved_loaded_word = loaded_word;
      }
      saved_loaded_word_2 = loaded_word_9;
      integer_sum_3 = 0;
      element_index = 0;
      integer_sum_4 = 0;
      byte_cursor_3 = (char *)cached_this_2 + 4;
      if ( loaded_word_9 )
      {
        do
        {
          masked_bits_2 = *(unsigned int *)&byte_cursor_2[4 * element_index];
          if ( (_DWORD)masked_bits_2 )
          {
            LODWORD(packed_word_bits_3) = 0;
            element_index_2 = element_index;
            if ( saved_loaded_word )
            {
              do
              {
                if ( element_index_2 == 115 )
                  break;
                saved_element_index = element_index_2;
                if ( element_index_2 == integer_sum_3 )
                {
                  SR_VEC_LANES(128, Source[0], i32)[element_index_2] = 0;
                  integer_sum_4 = element_index_2 + 1;
                }
                integer_difference = element_index_2 - element_index;
                ++element_index_2;
                masked_bits_3 = SR_VEC_LANES(128, Source[0], u32)[saved_element_index] + (unsigned int)packed_word_bits_3 + masked_bits_2 * *(unsigned int *)&byte_cursor_3[4 * integer_difference];
                SR_VEC_LANES(128, Source[0], i32)[saved_element_index] = masked_bits_3;
                packed_word_bits_3 = HIDWORD(masked_bits_3);
                integer_sum_3 = integer_sum_4;
              }
              while ( element_index_2 - element_index != saved_loaded_word );
              if ( (_DWORD)packed_word_bits_3 )
              {
                do
                {
                  if ( element_index_2 == 115 )
                    break;
                  saved_element_index_2 = element_index_2;
                  if ( element_index_2 == integer_sum_3 )
                  {
                    SR_VEC_LANES(128, Source[0], i32)[element_index_2] = 0;
                    integer_sum_4 = element_index_2 + 1;
                  }
                  ++element_index_2;
                  table_value = (unsigned int)packed_word_bits_3 + (unsigned __int64)SR_VEC_LANES(128, Source[0], u32)[saved_element_index_2];
                  SR_VEC_LANES(128, Source[0], i32)[saved_element_index_2] = table_value;
                  integer_sum_3 = integer_sum_4;
                  LODWORD(packed_word_bits_3) = HIDWORD(table_value);
                }
                while ( HIDWORD(table_value) );
              }
              loaded_word_9 = saved_loaded_word_2;
            }
            if ( element_index_2 == 115 )
            {
              unused_written_slot = 0;
              *(_DWORD *)this = 0;
              sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)scratch_buffer, 0);
              return 0; /* the function has no caller */
            }
            byte_cursor_2 = byte_cursor_4;
          }
          else if ( element_index == integer_sum_3 )
          {
            integer_sum_3 = element_index + 1;
            SR_VEC_LANES(128, Source[0], i32)[element_index] = 0;
            integer_sum_4 = element_index + 1;
          }
          ++element_index;
        }
        while ( element_index != loaded_word_9 );
      }
      *(_DWORD *)this = integer_sum_3;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 4LL * integer_sum_3);
    }
    else
    {
      loaded_word_6 = *record_pointer;
      *(_DWORD *)this = loaded_word;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)((char *)a2 + 4), 4LL * *(unsigned int *)a2);
      if ( !(_DWORD)loaded_word_6 )
      {
        integer_sum_4 = 0;
        *(_DWORD *)this = 0;
        sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
        return 0; /* the function has no caller */
      }
      if ( (_DWORD)loaded_word_6 != 1 )
      {
        loaded_word_7 = *(_DWORD *)this;
        if ( *(_DWORD *)this )
        {
          LODWORD(packed_word_bits_2) = 0;
          iteration_count_2 = 0;
          do
          {
            integer_sum_2 = iteration_count_2++;
            scaled_index = (unsigned int)packed_word_bits_2 + loaded_word_6 * record_pointer[integer_sum_2];
            record_pointer[integer_sum_2] = scaled_index;
            packed_word_bits_2 = HIDWORD(scaled_index);
          }
          while ( iteration_count_2 != loaded_word_7 );
          if ( HIDWORD(scaled_index) )
          {
            loaded_word_8 = *(unsigned int *)this;
            if ( (unsigned int)loaded_word_8 < 0x73 )
            {
              *((_DWORD *)this + loaded_word_8 + 1) = HIDWORD(scaled_index);
              ++*(_DWORD *)this;
              return 0; /* the function has no caller */
            }
            goto LABEL_12;
          }
        }
      }
    }
  }
  else
  {
    loaded_word_2 = *((_DWORD *)a2 + 1);
    if ( !loaded_word_2 )
    {
      integer_sum_4 = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      return 0; /* the function has no caller */
    }
    if ( loaded_word_2 != 1 )
    {
      loaded_word_3 = *(_DWORD *)this;
      if ( *(_DWORD *)this )
      {
        byte_cursor = (char *)this + 4;
        LODWORD(packed_word_bits) = 0;
        iteration_count = 0;
        loaded_word_4 = *((unsigned int *)a2 + 1);
        do
        {
          integer_sum = iteration_count++;
          masked_bits = (unsigned int)packed_word_bits + loaded_word_4 * *(unsigned int *)&byte_cursor[4 * integer_sum];
          *(_DWORD *)&byte_cursor[4 * integer_sum] = masked_bits;
          packed_word_bits = HIDWORD(masked_bits);
        }
        while ( iteration_count != loaded_word_3 );
        if ( HIDWORD(masked_bits) )
        {
          loaded_word_5 = *(unsigned int *)this;
          if ( (unsigned int)loaded_word_5 < 0x73 )
          {
            *((_DWORD *)this + loaded_word_5 + 1) = HIDWORD(masked_bits);
            ++*(_DWORD *)this;
            return 0; /* the function has no caller */
          }
LABEL_12:
          integer_sum_4 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
        }
      }
    }
  }
  return 0; /* the function has no caller */
}

//----- (0000000140232EE0) ----------------------------------------------------
char            sub_140232EE0(sr_anon_107 *this, struct __crt_strtox__big_integer *a2)
{
  int loaded_word;
  unsigned __int64 packed_word_bits;
  __int64 input_value;
  unsigned int iteration_count;
  __m128i *packed_vector;
  __int64 integer_sum;
  unsigned __int64 scaled_index;
  __int64 loaded_word_2;
  __m128i Source[28];

  if ( !(_DWORD)a2 )
  {
    *(_DWORD *)this = 0;
    sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
    return 1;
  }
  if ( (_DWORD)a2 != 1 )
  {
    loaded_word = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      LODWORD(packed_word_bits) = 0;
      input_value = (unsigned int)a2;
      iteration_count = 0;
      packed_vector = (__m128i *)((char *)this + 4);
      do
      {
        integer_sum = iteration_count++;
        scaled_index = (unsigned int)packed_word_bits + input_value * SR_VEC_PTR_LANES(128, packed_vector, u32)[integer_sum];
        SR_VEC_PTR_LANES(128, packed_vector, i32)[integer_sum] = scaled_index;
        packed_word_bits = HIDWORD(scaled_index);
      }
      while ( iteration_count != loaded_word );
      if ( HIDWORD(scaled_index) )
      {
        loaded_word_2 = *(unsigned int *)this;
        if ( (unsigned int)loaded_word_2 >= 0x73 )
        {
          *(_DWORD *)this = 0;
          sub_140236F50(packed_vector, 0x1CCu, Source, 0);
          return 0;
        }
        *((_DWORD *)this + loaded_word_2 + 1) = HIDWORD(scaled_index);
        ++*(_DWORD *)this;
      }
    }
  }
  return 1;
}

//----- (0000000140232FE0) ----------------------------------------------------
__int64            sub_140232FE0(sr_anon_107 *this, struct __crt_strtox__big_integer *a2)
{
  int input_value;
  unsigned int integer_quotient;
  unsigned int remaining_amount;
  int saved_remaining_amount;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 scaled_index;
  __int64 cached_integer_sum;
  int loaded_word_3;
  char *byte_cursor;
  unsigned __int64 packed_word_bits;
  unsigned int iteration_count;
  __int64 table_value;
  __int64 integer_sum;
  unsigned __int64 masked_bits;
  __int64 loaded_word_4;
  char selection_flag;
  unsigned int loaded_word_5;
  unsigned int *record_pointer;
  __int64 loaded_word_6;
  int loaded_word_7;
  unsigned __int64 packed_word_bits_2;
  unsigned int iteration_count_2;
  __int64 integer_sum_2;
  unsigned __int64 scaled_index_2;
  __int64 loaded_word_8;
  __m128i *packed_vector;
  __m128i *packed_vector_2;
  unsigned int saved_loaded_word;
  unsigned int integer_sum_3;
  __int64 integer_sum_4;
  __int64 table_value_2;
  unsigned __int64 packed_word_bits_3;
  unsigned int element_index;
  __int64 saved_element_index;
  __int64 integer_difference;
  unsigned __int64 scaled_index_3;
  __int64 saved_element_index_2;
  unsigned __int64 table_value_3;
  int scaled_index_4;
  __int64 integer_difference_2;
  int loaded_word_9;
  char *byte_cursor_2;
  unsigned __int64 packed_word_bits_4;
  unsigned int iteration_count_3;
  __int64 cached_integer_difference;
  __int64 integer_sum_5;
  unsigned __int64 masked_bits_2;
  __int64 loaded_word_10;
  __int64 unused_local;
  unsigned int saved_remaining_amount_2;
  int cached_remaining_amount;
  unsigned int integer_quotient_2;
  int input_value_2;
  __m128i *packed_vector_3;
  int unused_written_slot;
  __m128i scratch_buffer[28];
  unsigned int integer_sum_6;
  _DWORD scratch_buffer_2[115];
  unsigned int integer_sum_7;
  __m128i scratch_buffer_3[28];
  __int64 unused_local_2;

  input_value = (int)a2;
  input_value_2 = (int)a2;
  integer_quotient = (unsigned int)a2 / 0xA;
  integer_quotient_2 = (unsigned int)a2 / 0xA;
  remaining_amount = (unsigned int)a2 / 0xA;
  saved_remaining_amount_2 = (unsigned int)a2 / 0xA;
  if ( (unsigned int)a2 / 0xA )
  {
    while ( 1 )
    {
      saved_remaining_amount = remaining_amount;
      if ( remaining_amount > 0x26 )
        saved_remaining_amount = 38;
      cached_remaining_amount = saved_remaining_amount;
      loaded_word = *(unsigned __int8 *)(0x140000002LL + 4LL * (unsigned int)(saved_remaining_amount - 1) + 2643440);
      loaded_word_2 = *(unsigned __int8 *)(0x140000003LL + 4LL * (unsigned int)(saved_remaining_amount - 1) + 2643440);
      scaled_index = 4 * loaded_word;
      integer_sum_7 = loaded_word_2 + loaded_word;
      crt_memset((void *)(uintptr_t)(scratch_buffer_3), 0, 4 * loaded_word);
      crt_memcpy(
        (__m128i *)((char *)scratch_buffer_3 + scaled_index),
        (     __m128i *)((char *)&unk_140284CE0
                        + 4 * *(unsigned __int16 *)(0x140000000LL + 4LL * (unsigned int)(saved_remaining_amount - 1) + 2643440)),
        4 * loaded_word_2);
      cached_integer_sum = integer_sum_7;
      if ( integer_sum_7 <= 1 )
      {
        if ( SR_VEC_LANES(128, scratch_buffer_3[0], i32)[0] )
        {
          if ( SR_VEC_LANES(128, scratch_buffer_3[0], i32)[0] != 1 )
          {
            loaded_word_3 = *(_DWORD *)this;
            if ( *(_DWORD *)this )
            {
              byte_cursor = (char *)this + 4;
              LODWORD(packed_word_bits) = 0;
              iteration_count = 0;
              table_value = SR_VEC_LANES(128, scratch_buffer_3[0], u32)[0];
              do
              {
                integer_sum = iteration_count++;
                masked_bits = (unsigned int)packed_word_bits + table_value * *(unsigned int *)&byte_cursor[4 * integer_sum];
                *(_DWORD *)&byte_cursor[4 * integer_sum] = masked_bits;
                packed_word_bits = HIDWORD(masked_bits);
              }
              while ( iteration_count != loaded_word_3 );
              if ( HIDWORD(masked_bits) )
              {
                loaded_word_4 = *(unsigned int *)this;
                if ( (unsigned int)loaded_word_4 >= 0x73 )
                {
                  integer_sum_7 = 0;
                  *(_DWORD *)this = 0;
                  sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, scratch_buffer_3, 0);
                  selection_flag = 0;
                  goto LABEL_51;
                }
                *((_DWORD *)this + loaded_word_4 + 1) = HIDWORD(masked_bits);
                ++*(_DWORD *)this;
              }
            }
          }
        }
        else
        {
          integer_sum_6 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)scratch_buffer_2, 0);
        }
        goto LABEL_50;
      }
      loaded_word_5 = *(_DWORD *)this;
      record_pointer = (unsigned int *)((char *)this + 4);
      if ( *(_DWORD *)this <= 1u )
      {
        loaded_word_6 = *record_pointer;
        *(_DWORD *)this = integer_sum_7;
        sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, scratch_buffer_3, 4 * cached_integer_sum);
        if ( (_DWORD)loaded_word_6 )
        {
          if ( (_DWORD)loaded_word_6 != 1 )
          {
            loaded_word_7 = *(_DWORD *)this;
            if ( *(_DWORD *)this )
            {
              LODWORD(packed_word_bits_2) = 0;
              iteration_count_2 = 0;
              do
              {
                integer_sum_2 = iteration_count_2++;
                scaled_index_2 = (unsigned int)packed_word_bits_2 + loaded_word_6 * record_pointer[integer_sum_2];
                record_pointer[integer_sum_2] = scaled_index_2;
                packed_word_bits_2 = HIDWORD(scaled_index_2);
              }
              while ( iteration_count_2 != loaded_word_7 );
              if ( HIDWORD(scaled_index_2) )
              {
                loaded_word_8 = *(unsigned int *)this;
                if ( (unsigned int)loaded_word_8 >= 0x73 )
                {
                  integer_sum_7 = 0;
                  *(_DWORD *)this = 0;
                  sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, scratch_buffer_3, 0);
                  remaining_amount = saved_remaining_amount_2;
                  selection_flag = 0;
                }
                else
                {
                  remaining_amount = saved_remaining_amount_2;
                  *((_DWORD *)this + loaded_word_8 + 1) = HIDWORD(scaled_index_2);
                  selection_flag = 1;
                  ++*(_DWORD *)this;
                }
                goto LABEL_51;
              }
            }
          }
        }
        else
        {
          integer_sum_7 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, scratch_buffer_3, 0);
        }
        remaining_amount = saved_remaining_amount_2;
        selection_flag = 1;
        goto LABEL_51;
      }
      packed_vector = scratch_buffer_3;
      if ( integer_sum_7 >= loaded_word_5 )
        packed_vector = (__m128i *)((char *)this + 4);
      packed_vector_3 = packed_vector;
      if ( integer_sum_7 >= loaded_word_5 )
      {
        saved_loaded_word = loaded_word_5;
        packed_vector_2 = scratch_buffer_3;
        loaded_word_5 = integer_sum_7;
      }
      else
      {
        packed_vector_2 = (__m128i *)((char *)this + 4);
        saved_loaded_word = integer_sum_7;
      }
      integer_sum_3 = 0;
      integer_sum_4 = 0;
      integer_sum_6 = 0;
      if ( !saved_loaded_word )
      {
LABEL_49:
        *(_DWORD *)this = integer_sum_3;
        sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)scratch_buffer_2, 4LL * integer_sum_3);
        remaining_amount = saved_remaining_amount_2;
        saved_remaining_amount = cached_remaining_amount;
LABEL_50:
        selection_flag = 1;
        goto LABEL_51;
      }
      while ( 1 )
      {
        table_value_2 = SR_VEC_PTR_LANES(128, packed_vector, u32)[integer_sum_4];
        if ( !(_DWORD)table_value_2 )
        {
          if ( (_DWORD)integer_sum_4 == integer_sum_3 )
          {
            integer_sum_3 = integer_sum_4 + 1;
            scratch_buffer_2[integer_sum_4] = 0;
            integer_sum_6 = integer_sum_4 + 1;
          }
          goto LABEL_48;
        }
        LODWORD(packed_word_bits_3) = 0;
        element_index = integer_sum_4;
        if ( loaded_word_5 )
        {
          do
          {
            if ( element_index == 115 )
              break;
            saved_element_index = element_index;
            if ( element_index == integer_sum_3 )
            {
              scratch_buffer_2[element_index] = 0;
              integer_sum_6 = element_index + 1;
            }
            integer_difference = element_index - (unsigned int)integer_sum_4;
            ++element_index;
            scaled_index_3 = (unsigned int)scratch_buffer_2[saved_element_index] + (unsigned int)packed_word_bits_3 + table_value_2 * SR_VEC_PTR_LANES(128, packed_vector_2, u32)[integer_difference];
            scratch_buffer_2[saved_element_index] = scaled_index_3;
            packed_word_bits_3 = HIDWORD(scaled_index_3);
            integer_sum_3 = integer_sum_6;
          }
          while ( element_index - (_DWORD)integer_sum_4 != loaded_word_5 );
          if ( (_DWORD)packed_word_bits_3 )
            break;
        }
LABEL_46:
        if ( element_index == 115 )
          goto LABEL_58;
        packed_vector = packed_vector_3;
LABEL_48:
        integer_sum_4 = (unsigned int)(integer_sum_4 + 1);
        if ( (_DWORD)integer_sum_4 == saved_loaded_word )
          goto LABEL_49;
      }
      while ( element_index != 115 )
      {
        saved_element_index_2 = element_index;
        if ( element_index == integer_sum_3 )
        {
          scratch_buffer_2[element_index] = 0;
          integer_sum_6 = element_index + 1;
        }
        ++element_index;
        table_value_3 = (unsigned int)packed_word_bits_3 + (unsigned __int64)(unsigned int)scratch_buffer_2[saved_element_index_2];
        scratch_buffer_2[saved_element_index_2] = table_value_3;
        integer_sum_3 = integer_sum_6;
        LODWORD(packed_word_bits_3) = HIDWORD(table_value_3);
        if ( !HIDWORD(table_value_3) )
          goto LABEL_46;
      }
LABEL_58:
      unused_written_slot = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, scratch_buffer, 0);
      remaining_amount = saved_remaining_amount_2;
      selection_flag = 0;
      saved_remaining_amount = cached_remaining_amount;
LABEL_51:
      if ( !selection_flag )
        goto LABEL_56;
      remaining_amount -= saved_remaining_amount;
      saved_remaining_amount_2 = remaining_amount;
      if ( !remaining_amount )
      {
        integer_quotient = integer_quotient_2;
        input_value = input_value_2;
        break;
      }
    }
  }
  scaled_index_4 = input_value - 10 * integer_quotient;
  if ( scaled_index_4 )
  {
    integer_difference_2 = (unsigned int)dword_140285688[scaled_index_4 - 1];
    if ( !(_DWORD)integer_difference_2 )
    {
LABEL_56:
      unused_written_slot = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, scratch_buffer, 0);
      return 0; /* the function has no caller */
    }
    if ( (_DWORD)integer_difference_2 != 1 )
    {
      loaded_word_9 = *(_DWORD *)this;
      if ( *(_DWORD *)this )
      {
        byte_cursor_2 = (char *)this + 4;
        LODWORD(packed_word_bits_4) = 0;
        iteration_count_3 = 0;
        cached_integer_difference = integer_difference_2;
        do
        {
          integer_sum_5 = iteration_count_3++;
          masked_bits_2 = (unsigned int)packed_word_bits_4 + cached_integer_difference * *(unsigned int *)&byte_cursor_2[4 * integer_sum_5];
          *(_DWORD *)&byte_cursor_2[4 * integer_sum_5] = masked_bits_2;
          packed_word_bits_4 = HIDWORD(masked_bits_2);
        }
        while ( iteration_count_3 != loaded_word_9 );
        if ( HIDWORD(masked_bits_2) )
        {
          loaded_word_10 = *(unsigned int *)this;
          if ( (unsigned int)loaded_word_10 < 0x73 )
          {
            *((_DWORD *)this + loaded_word_10 + 1) = HIDWORD(masked_bits_2);
            ++*(_DWORD *)this;
            return 0; /* the function has no caller */
          }
          goto LABEL_56;
        }
      }
    }
  }
  return 0; /* the function has no caller */
}

//----- (0000000140233590) ----------------------------------------------------
unsigned __int64            sub_140233590(sr_anon_107 *this, unsigned int *     a2, unsigned int a3)
{
  unsigned __int64 result;
  int input_value;
  unsigned int iteration_count;
  __int64 input_value_2;
  __int64 integer_sum;
  unsigned __int64 loaded_word;

  result = 0;
  input_value = (int)a2;
  iteration_count = 0;
  if ( (_DWORD)a2 )
  {
    input_value_2 = a3;
    do
    {
      integer_sum = iteration_count++;
      loaded_word = (unsigned int)result + input_value_2 * *((unsigned int *)this + integer_sum);
      *((_DWORD *)this + integer_sum) = loaded_word;
      result = HIDWORD(loaded_word);
    }
    while ( iteration_count != input_value );
  }
  return result;
}

//----- (00000001402337F8) ----------------------------------------------------
__int64            sub_1402337F8(__int64 a1)
{
  __int64 loaded_word;
  unsigned int unused_written_slot;
  int getc_nolock_result;
  int loaded_word_2;

  loaded_word = *(_QWORD *)(a1 + 8);
  if ( !loaded_word )
    goto LABEL_2;
  if ( !sub_14022389C(loaded_word) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 32) )
  {
LABEL_2:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  while ( sub_14022F860(a1 + 24)
       && __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_state(a1) )
    ;
  unused_written_slot = *(_DWORD *)(a1 + 128);
  if ( !*(_QWORD *)(a1 + 128) && *(_DWORD *)(a1 + 44) != 1 )
  {
    getc_nolock_result = getc_nolock(*(FILE **)(a1 + 8));
    if ( getc_nolock_result == -1 )
      unused_written_slot = -1;
    else
      ++*(_QWORD *)(a1 + 16);
    if ( getc_nolock_result != -1 )
    {
      --*(_QWORD *)(a1 + 16);
      sub_14020CE90(getc_nolock_result, *(_QWORD *)(a1 + 8));
    }
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 40);
    if ( loaded_word_2 )
    {
      *errno_sr() = loaded_word_2;
      crt_invalid_parameter_noinfo();
    }
  }
  return unused_written_slot;
}

//----- (00000001402338B8) ----------------------------------------------------
__int64            sub_1402338B8(__int64 a1)
{
  unsigned __int64 loaded_word;
  unsigned int unused_written_slot;
  __int64 i;
  unsigned int loaded_word_2;
  unsigned __int8 *buffer_cursor;
  int loaded_word_3;
  int loaded_word_4;

  loaded_word = *(_QWORD *)(a1 + 24);
  if ( !loaded_word || loaded_word > *(_QWORD *)(a1 + 16) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    unused_written_slot = -1;
    *errno_sr() = 22;
LABEL_22:
    crt_invalid_parameter_noinfo();
    return unused_written_slot;
  }
  for ( i = a1 + 32;
        sub_14022F860(i)
     && __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_state(a1);
        i = a1 + 32 )
  {
    ;
  }
  loaded_word_2 = *(_DWORD *)(a1 + 136);
  if ( !*(_QWORD *)(a1 + 136) && *(_DWORD *)(a1 + 52) != 1 )
  {
    buffer_cursor = *(unsigned __int8 **)(a1 + 24);
    if ( buffer_cursor == *(unsigned __int8 **)(a1 + 16) )
    {
      loaded_word_2 = -1;
      loaded_word_3 = -1;
    }
    else
    {
      loaded_word_3 = *buffer_cursor++;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor);
    }
    if ( buffer_cursor != *(unsigned __int8 **)(a1 + 8) && (buffer_cursor != *(unsigned __int8 **)(a1 + 16) || loaded_word_3 != -1) )
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor - 1);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    loaded_word_4 = *(_DWORD *)(a1 + 48);
    if ( loaded_word_4 )
    {
      unused_written_slot = loaded_word_2;
      *errno_sr() = loaded_word_4;
      goto LABEL_22;
    }
  }
  return loaded_word_2;
}

//----- (00000001402339A4) ----------------------------------------------------
__int64            sub_1402339A4(__int64 a1)
{
  unsigned int unused_written_slot;
  __int64 i;
  unsigned int loaded_word;
  unsigned __int16 loaded_word_2;
  __int64 unrecovered_register_value;
  int loaded_word_3;

  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) )
  {
    unused_written_slot = -1;
    *errno_sr() = 22;
LABEL_18:
    crt_invalid_parameter_noinfo();
    return unused_written_slot;
  }
  for ( i = a1 + 24;
        sub_14022FA28(i)
     && __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_state(a1);
        i = a1 + 24 )
  {
    ;
  }
  loaded_word = *(_DWORD *)(a1 + 104);
  if ( !*(_QWORD *)(a1 + 104) && *(_DWORD *)(a1 + 44) != 1 )
  {
    loaded_word_2 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    if ( loaded_word_2 == 0xFFFF )
      loaded_word = -1;
    else
      ++*(_QWORD *)(a1 + 16);
    if ( loaded_word_2 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(loaded_word_2, *(_QWORD *)(a1 + 8), unrecovered_register_value);
    }
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    loaded_word_3 = *(_DWORD *)(a1 + 40);
    if ( loaded_word_3 )
    {
      unused_written_slot = loaded_word;
      *errno_sr() = loaded_word_3;
      goto LABEL_18;
    }
  }
  return loaded_word;
}

//----- (0000000140233A68) ----------------------------------------------------
__int64            sub_140233A68(__int64 a1)
{
  unsigned __int64 loaded_word;
  unsigned int unused_written_slot;
  __int64 i;
  __int16 *buffer_cursor;
  __int16 loaded_word_2;
  int loaded_word_3;

  loaded_word = *(_QWORD *)(a1 + 24);
  if ( !loaded_word || loaded_word > *(_QWORD *)(a1 + 16) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    unused_written_slot = -1;
    *errno_sr() = 22;
    goto LABEL_23;
  }
  for ( i = a1 + 32;
        sub_14022FA28(i)
     && __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_state(a1);
        i = a1 + 32 )
  {
    ;
  }
  unused_written_slot = *(_DWORD *)(a1 + 112);
  if ( !*(_QWORD *)(a1 + 112) && *(_DWORD *)(a1 + 52) != 1 )
  {
    buffer_cursor = *(__int16 **)(a1 + 24);
    if ( buffer_cursor == *(__int16 **)(a1 + 16) )
    {
      loaded_word_2 = -1;
    }
    else
    {
      loaded_word_2 = *buffer_cursor++;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor);
      if ( loaded_word_2 != -1 )
      {
LABEL_16:
        if ( buffer_cursor != *(__int16 **)(a1 + 8) && (buffer_cursor != *(__int16 **)(a1 + 16) || loaded_word_2 != -1) )
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor - 1);
        goto LABEL_20;
      }
    }
    unused_written_slot = -1;
    goto LABEL_16;
  }
LABEL_20:
  if ( (*(_BYTE *)a1 & 1) == 0 )
    return unused_written_slot;
  loaded_word_3 = *(_DWORD *)(a1 + 48);
  if ( !loaded_word_3 )
    return unused_written_slot;
  *errno_sr() = loaded_word_3;
LABEL_23:
  crt_invalid_parameter_noinfo();
  return unused_written_slot;
}

//----- (0000000140233BA8) ----------------------------------------------------
char            sub_140233BA8(__int64 a1)
{
  int loaded_word;
  char unused_written_slot;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  signed int selection_code;
  unsigned __int8 selection_flag;
  __int64 unknown_libname_649_result;
  int selection_code_2;
  int selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  __int64 unknown_libname_649_result_2;

  loaded_word = *(_DWORD *)(a1 + 72);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
    {
      selection_code = 10;
      goto LABEL_37;
    }
    unused_written_slot = 0;
    if ( loaded_word )
    {
      integer_difference = loaded_word - 1;
      if ( !integer_difference )
        return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_string_specifier(
                 (__int64 *)a1,
                 1);
      integer_difference_2 = integer_difference - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          if ( integer_difference_3 == 1 )
          {
            selection_code = 8;
LABEL_37:
            selection_flag = 0;
            return sub_1402341DC(a1, selection_code, selection_flag);
          }
          return 0;
        }
        selection_code = 10;
      }
      else
      {
        selection_code = 0;
      }
      selection_flag = 1;
      return sub_1402341DC(a1, selection_code, selection_flag);
    }
    unknown_libname_649_result = unknown_libname_649(a1 + 24) - 1;
    if ( unknown_libname_649_result )
    {
      if ( unknown_libname_649_result != 1 )
        return unused_written_slot;
      selection_code_2 = 0;
      return sub_14022D954(a1, selection_code_2);
    }
    selection_code_3 = 0;
    return sub_14022D22C(a1, selection_code_3);
  }
  integer_difference_4 = loaded_word - 6;
  if ( !integer_difference_4 )
  {
    selection_code = 16;
    goto LABEL_37;
  }
  integer_difference_5 = integer_difference_4 - 1;
  if ( !integer_difference_5 )
    return sub_140234024((__int64 *)a1);
  integer_difference_6 = integer_difference_5 - 1;
  if ( !integer_difference_6 )
  {
    unknown_libname_649_result_2 = unknown_libname_649(a1 + 24) - 1;
    if ( unknown_libname_649_result_2 )
    {
      if ( unknown_libname_649_result_2 != 1 )
        return 0;
      selection_code_2 = 8;
      return sub_14022D954(a1, selection_code_2);
    }
    selection_code_3 = 8;
    return sub_14022D22C(a1, selection_code_3);
  }
  if ( integer_difference_6 != 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  else
    return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_integer(
             a1,
             *(_QWORD *)(a1 + 16));
}

//----- (0000000140233CC4) ----------------------------------------------------
char            sub_140233CC4(__int64 a1)
{
  int loaded_word;
  char unused_written_slot;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  signed int selection_code;
  unsigned __int8 selection_flag;
  __int64 unknown_libname_649_result;
  int selection_code_2;
  int selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  __int64 unknown_libname_649_result_2;

  loaded_word = *(_DWORD *)(a1 + 80);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
    {
      selection_code = 10;
      goto LABEL_37;
    }
    unused_written_slot = 0;
    if ( loaded_word )
    {
      integer_difference = loaded_word - 1;
      if ( !integer_difference )
        return __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_string_specifier(
                 (_QWORD *)a1,
                 1);
      integer_difference_2 = integer_difference - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          if ( integer_difference_3 == 1 )
          {
            selection_code = 8;
LABEL_37:
            selection_flag = 0;
            return sub_140234288(a1, selection_code, selection_flag);
          }
          return 0;
        }
        selection_code = 10;
      }
      else
      {
        selection_code = 0;
      }
      selection_flag = 1;
      return sub_140234288(a1, selection_code, selection_flag);
    }
    unknown_libname_649_result = unknown_libname_649(a1 + 32) - 1;
    if ( unknown_libname_649_result )
    {
      if ( unknown_libname_649_result != 1 )
        return unused_written_slot;
      selection_code_2 = 0;
      return sub_14022DB28(a1, selection_code_2);
    }
    selection_code_3 = 0;
    return sub_14022D3C8(a1, selection_code_3);
  }
  integer_difference_4 = loaded_word - 6;
  if ( !integer_difference_4 )
  {
    selection_code = 16;
    goto LABEL_37;
  }
  integer_difference_5 = integer_difference_4 - 1;
  if ( !integer_difference_5 )
    return sub_140234088((_QWORD *)a1);
  integer_difference_6 = integer_difference_5 - 1;
  if ( !integer_difference_6 )
  {
    unknown_libname_649_result_2 = unknown_libname_649(a1 + 32) - 1;
    if ( unknown_libname_649_result_2 )
    {
      if ( unknown_libname_649_result_2 != 1 )
        return 0;
      selection_code_2 = 8;
      return sub_14022DB28(a1, selection_code_2);
    }
    selection_code_3 = 8;
    return sub_14022D3C8(a1, selection_code_3);
  }
  if ( integer_difference_6 != 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  else
    return __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____write_integer(
             a1,
             *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8));
}

//----- (0000000140233DE4) ----------------------------------------------------
char            sub_140233DE4(__int64 a1)
{
  int loaded_word;
  char unused_written_slot;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  signed int selection_code;
  unsigned __int8 selection_flag;
  __int64 unknown_libname_650_result;
  int selection_code_2;
  int selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  __int64 unknown_libname_650_result_2;

  loaded_word = *(_DWORD *)(a1 + 72);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
    {
      selection_code = 10;
      goto LABEL_37;
    }
    unused_written_slot = 0;
    if ( loaded_word )
    {
      integer_difference = loaded_word - 1;
      if ( !integer_difference )
        return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_string_specifier(
                 a1,
                 1);
      integer_difference_2 = integer_difference - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          if ( integer_difference_3 == 1 )
          {
            selection_code = 8;
LABEL_37:
            selection_flag = 0;
            return sub_140234340(a1, selection_code, selection_flag);
          }
          return 0;
        }
        selection_code = 10;
      }
      else
      {
        selection_code = 0;
      }
      selection_flag = 1;
      return sub_140234340(a1, selection_code, selection_flag);
    }
    unknown_libname_650_result = unknown_libname_650(a1 + 24) - 1;
    if ( unknown_libname_650_result )
    {
      if ( unknown_libname_650_result != 1 )
        return unused_written_slot;
      selection_code_2 = 0;
      return sub_14022DD14(a1, selection_code_2);
    }
    selection_code_3 = 0;
    return sub_14022D584(a1, selection_code_3);
  }
  integer_difference_4 = loaded_word - 6;
  if ( !integer_difference_4 )
  {
    selection_code = 16;
    goto LABEL_37;
  }
  integer_difference_5 = integer_difference_4 - 1;
  if ( !integer_difference_5 )
    return sub_1402340F8(a1);
  integer_difference_6 = integer_difference_5 - 1;
  if ( !integer_difference_6 )
  {
    unknown_libname_650_result_2 = unknown_libname_650(a1 + 24) - 1;
    if ( unknown_libname_650_result_2 )
    {
      if ( unknown_libname_650_result_2 != 1 )
        return 0;
      selection_code_2 = 8;
      return sub_14022DD14(a1, selection_code_2);
    }
    selection_code_3 = 8;
    return sub_14022D584(a1, selection_code_3);
  }
  if ( integer_difference_6 != 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  else
    return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____write_integer(
             a1,
             *(_QWORD *)(a1 + 16));
}

//----- (0000000140233F00) ----------------------------------------------------
char            sub_140233F00(__int64 a1)
{
  int loaded_word;
  char unused_written_slot;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  signed int selection_code;
  unsigned __int8 selection_flag;
  __int64 unknown_libname_650_result;
  int selection_code_2;
  int selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  __int64 unknown_libname_650_result_2;

  loaded_word = *(_DWORD *)(a1 + 80);
  if ( loaded_word <= 5 )
  {
    if ( loaded_word == 5 )
    {
      selection_code = 10;
      goto LABEL_37;
    }
    unused_written_slot = 0;
    if ( loaded_word )
    {
      integer_difference = loaded_word - 1;
      if ( !integer_difference )
        return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_string_specifier(
                 (_QWORD *)a1,
                 1);
      integer_difference_2 = integer_difference - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          if ( integer_difference_3 == 1 )
          {
            selection_code = 8;
LABEL_37:
            selection_flag = 0;
            return sub_1402343F4(a1, selection_code, selection_flag);
          }
          return 0;
        }
        selection_code = 10;
      }
      else
      {
        selection_code = 0;
      }
      selection_flag = 1;
      return sub_1402343F4(a1, selection_code, selection_flag);
    }
    unknown_libname_650_result = unknown_libname_650(a1 + 32) - 1;
    if ( unknown_libname_650_result )
    {
      if ( unknown_libname_650_result != 1 )
        return unused_written_slot;
      selection_code_2 = 0;
      return sub_14022DED8(a1, selection_code_2);
    }
    selection_code_3 = 0;
    return sub_14022D774(a1, selection_code_3);
  }
  integer_difference_4 = loaded_word - 6;
  if ( !integer_difference_4 )
  {
    selection_code = 16;
    goto LABEL_37;
  }
  integer_difference_5 = integer_difference_4 - 1;
  if ( !integer_difference_5 )
    return sub_140234164((_QWORD *)a1);
  integer_difference_6 = integer_difference_5 - 1;
  if ( !integer_difference_6 )
  {
    unknown_libname_650_result_2 = unknown_libname_650(a1 + 32) - 1;
    if ( unknown_libname_650_result_2 )
    {
      if ( unknown_libname_650_result_2 != 1 )
        return 0;
      selection_code_2 = 8;
      return sub_14022DED8(a1, selection_code_2);
    }
    selection_code_3 = 8;
    return sub_14022D774(a1, selection_code_3);
  }
  if ( integer_difference_6 != 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  else
    return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____write_integer(
             a1,
             (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8)) >> 1);
}

//----- (0000000140234024) ----------------------------------------------------
char            sub_140234024(__int64 *a1)
{
  int call_result;
  __int64 unknown_libname_649_result;

  call_result = sub_14022E0F4((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[14]);
  if ( call_result != -1 )
  {
    --a1[2];
    sub_14020CE90(call_result, a1[1]);
  }
  unknown_libname_649_result = unknown_libname_649((__int64)(a1 + 3));
  if ( unknown_libname_649_result == 4 )
    return sub_14022CD20((__int64)a1);
  if ( unknown_libname_649_result == 8 )
    return sub_14022CFA4((__int64)a1);
  return 0;
}

//----- (0000000140234088) ----------------------------------------------------
char            sub_140234088(_QWORD *a1)
{
  int call_result;
  __int64 table_value;
  __int64 unknown_libname_649_result;

  call_result = sub_14022E18C((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[15]);
  table_value = a1[3];
  if ( table_value != a1[1] && (table_value != a1[2] || call_result != -1) )
    a1[3] = table_value - 1;
  unknown_libname_649_result = unknown_libname_649((__int64)(a1 + 4));
  if ( unknown_libname_649_result == 4 )
    return sub_14022CDC0((__int64)a1);
  if ( unknown_libname_649_result == 8 )
    return sub_14022D044((__int64)a1);
  return 0;
}

//----- (00000001402340F8) ----------------------------------------------------
char            sub_1402340F8(__int64 a1)
{
  unsigned __int16 call_result;
  __int64 unrecovered_register_value;
  __int64 unknown_libname_650_result;

  call_result = sub_14022E144((FILE **)(a1 + 8));
  if ( call_result != 0xFFFF )
  {
    --*(_QWORD *)(a1 + 16);
    ungetwc_nolock(call_result, *(_QWORD *)(a1 + 8), unrecovered_register_value);
  }
  unknown_libname_650_result = unknown_libname_650(a1 + 24);
  if ( unknown_libname_650_result == 4 )
    return sub_14022CE64(a1);
  if ( unknown_libname_650_result == 8 )
    return sub_14022D0EC(a1);
  return 0;
}

//----- (0000000140234164) ----------------------------------------------------
char            sub_140234164(_QWORD *a1)
{
  __int16 call_result;
  __int64 table_value;
  __int64 unknown_libname_650_result;

  call_result = sub_14022E1E0((__int64)(a1 + 1));
  table_value = a1[3];
  if ( table_value != a1[1] && (table_value != a1[2] || call_result != -1) )
    a1[3] = table_value - 2;
  unknown_libname_650_result = unknown_libname_650((__int64)(a1 + 4));
  if ( unknown_libname_650_result == 4 )
    return sub_14022CF04((__int64)a1);
  if ( unknown_libname_650_result == 8 )
    return sub_14022D18C((__int64)a1);
  return 0;
}

//----- (00000001402341DC) ----------------------------------------------------
char            sub_1402341DC(__int64 a1, signed int a2, unsigned __int8 a3)
{
  __int64 *buffer_cursor;
  int loaded_word;
  struct __crt_locale_pointers *loaded_record_pointer;
  unsigned __int64 call_result;
  FILE **scratch_buffer[5];
  char selection_flag;

  buffer_cursor = (__int64 *)(a1 + 8);
  loaded_word = sub_14022E0F4(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 112));
  if ( loaded_word != -1 )
  {
    --buffer_cursor[1];
    sub_14020CE90(loaded_word, *buffer_cursor);
  }
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 112);
  scratch_buffer[1] = *(FILE ***)(a1 + 56);
  scratch_buffer[0] = (FILE **)buffer_cursor;
  scratch_buffer[3] = (FILE **)&selection_flag;
  scratch_buffer[2] = nullptr;
  selection_flag = 1;
  call_result = sub_14022B0C8(loaded_record_pointer, scratch_buffer, a2, a3);
  if ( !selection_flag )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_integer(a1, call_result);
}

//----- (0000000140234288) ----------------------------------------------------
char            sub_140234288(__int64 a1, signed int a2, unsigned __int8 a3)
{
  _QWORD *record_pointer;
  int loaded_word;
  __int64 table_value;
  struct __crt_locale_pointers *loaded_record_pointer;
  unsigned __int64 call_result;
  _QWORD scratch_buffer[5];
  char selection_flag;

  record_pointer = (_QWORD *)(a1 + 8);
  loaded_word = sub_14022E18C(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 120));
  table_value = record_pointer[2];
  if ( table_value != *record_pointer && (table_value != record_pointer[1] || loaded_word != -1) )
    record_pointer[2] = table_value - 1;
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 120);
  scratch_buffer[1] = *(_QWORD *)(a1 + 64);
  scratch_buffer[0] = (uint64)(uintptr_t)(record_pointer);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  scratch_buffer[2] = 0;
  selection_flag = 1;
  call_result = sub_14022BE60(loaded_record_pointer, scratch_buffer, a2, a3);
  if ( !selection_flag )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  return __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____write_integer(a1, call_result);
}

//----- (0000000140234340) ----------------------------------------------------
char            sub_140234340(__int64 a1, signed int a2, unsigned __int8 a3)
{
  FILE **file_handle;
  unsigned __int16 call_result;
  __int64 unrecovered_register_value;
  struct __crt_locale_pointers *loaded_record_pointer;
  unsigned __int64 call_result_2;
  FILE **scratch_buffer[5];
  char selection_flag;

  file_handle = (FILE **)(a1 + 8);
  call_result = sub_14022E144((FILE **)(a1 + 8));
  if ( call_result != 0xFFFF )
  {
    file_handle[1] = (FILE *)((char *)file_handle[1] - 1);
    ungetwc_nolock(call_result, *file_handle, unrecovered_register_value);
  }
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 88);
  scratch_buffer[1] = *(FILE ***)(a1 + 56);
  scratch_buffer[0] = file_handle;
  scratch_buffer[3] = (FILE **)&selection_flag;
  scratch_buffer[2] = nullptr;
  selection_flag = 1;
  call_result_2 = sub_14022B534(loaded_record_pointer, scratch_buffer, a2, a3);
  if ( !selection_flag )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____write_integer(
           a1,
           call_result_2);
}

//----- (00000001402343F4) ----------------------------------------------------
char            sub_1402343F4(__int64 a1, signed int a2, unsigned __int8 a3)
{
  _QWORD *record_pointer;
  __int16 call_result;
  __int64 table_value;
  struct __crt_locale_pointers *loaded_record_pointer;
  unsigned __int64 call_result_2;
  _QWORD scratch_buffer[5];
  char selection_flag;

  record_pointer = (_QWORD *)(a1 + 8);
  call_result = sub_14022E1E0(a1 + 8);
  table_value = record_pointer[2];
  if ( table_value != *record_pointer && (table_value != record_pointer[1] || call_result != -1) )
    record_pointer[2] = table_value - 2;
  loaded_record_pointer = *(struct __crt_locale_pointers **)(a1 + 96);
  scratch_buffer[1] = *(_QWORD *)(a1 + 64);
  scratch_buffer[0] = (uint64)(uintptr_t)(record_pointer);
  scratch_buffer[3] = (uint64)(uintptr_t)(&selection_flag);
  scratch_buffer[2] = 0;
  selection_flag = 1;
  call_result_2 = sub_14022C26C(loaded_record_pointer, scratch_buffer, a2, a3);
  if ( !selection_flag )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____write_integer(
           a1,
           call_result_2);
}

//----- (00000001402344B4) ----------------------------------------------------
char            sub_1402344B4(__int64 a1)
{
  int getc_nolock_result;
  __int64 loaded_word;
  __int64 integer_difference;
  __int64 loaded_word_2;

  getc_nolock_result = getc_nolock(*(FILE **)(a1 + 8));
  if ( getc_nolock_result == -1 )
    return 0;
  loaded_word = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = loaded_word;
  if ( getc_nolock_result != *(unsigned __int8 *)(a1 + 48) )
  {
    integer_difference = loaded_word - 1;
    loaded_word_2 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = integer_difference;
    sub_14020CE90(getc_nolock_result, loaded_word_2);
    return 0;
  }
  return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_literal_character_tchar(
           a1,
           getc_nolock_result);
}

//----- (0000000140234538) ----------------------------------------------------
char            sub_140234538(__int64 a1)
{
  unsigned __int16 loaded_word;
  __int64 unrecovered_register_value;
  __int64 loaded_word_2;
  __int64 loaded_word_3;

  loaded_word = j__fgetwc_nolock(*(FILE **)(a1 + 8));
  if ( loaded_word == 0xFFFF )
    return 0;
  loaded_word_2 = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = loaded_word_2;
  if ( loaded_word != *(_WORD *)(a1 + 48) )
  {
    loaded_word_3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = loaded_word_2 - 1;
    ungetwc_nolock(loaded_word, loaded_word_3, unrecovered_register_value);
    return 0;
  }
  return 1;
}

//----- (00000001402345C0) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_literal_character_tchar(
        __int64 a1,
        unsigned __int8 a2)
{
  int getc_nolock_result;

  if ( (sub_140256DC0()[a2] & 0x8000u) == 0 )
    return 1;
  getc_nolock_result = getc_nolock(*(FILE **)(a1 + 8));
  if ( getc_nolock_result != -1 )
    ++*(_QWORD *)(a1 + 16);
  if ( getc_nolock_result == *(unsigned __int8 *)(a1 + 49) )
    return 1;
  if ( getc_nolock_result != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90(getc_nolock_result, *(_QWORD *)(a1 + 8));
  }
  if ( (char)a2 != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90((char)a2, *(_QWORD *)(a1 + 8));
  }
  return 0;
}

//----- (0000000140234634) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_literal_character_tchar(
        __int64 a1,
        unsigned __int8 a2)
{
  unsigned __int8 *buffer_cursor;
  int loaded_word;

  if ( (sub_140256DC0()[a2] & 0x8000u) == 0 )
    return 1;
  buffer_cursor = *(unsigned __int8 **)(a1 + 24);
  if ( buffer_cursor == *(unsigned __int8 **)(a1 + 16) )
  {
    loaded_word = -1;
  }
  else
  {
    loaded_word = *buffer_cursor++;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor);
  }
  if ( loaded_word == *(unsigned __int8 *)(a1 + 57) )
    return 1;
  if ( buffer_cursor != *(unsigned __int8 **)(a1 + 8) )
  {
    if ( buffer_cursor != *(unsigned __int8 **)(a1 + 16) || loaded_word != -1 )
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(--buffer_cursor);
    if ( buffer_cursor != *(unsigned __int8 **)(a1 + 8) && (buffer_cursor != *(unsigned __int8 **)(a1 + 16) || a2 != 0xFF) )
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor - 1);
  }
  return 0;
}

//----- (00000001402346C0) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_state(
        __int64 a1)
{
  int loaded_word;
  int integer_difference;
  char call_result;
  int getc_nolock_result;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  int loaded_word_4;

  loaded_word = *(_DWORD *)(a1 + 44) - 2;
  if ( loaded_word )
  {
    integer_difference = loaded_word - 1;
    if ( integer_difference )
    {
      if ( integer_difference == 1 )
      {
        call_result = sub_140233BA8(a1);
        if ( call_result && *(_DWORD *)(a1 + 72) != 9 && !*(_BYTE *)(a1 + 50) )
          ++*(_QWORD *)(a1 + 128);
        return call_result;
      }
    }
    else
    {
      getc_nolock_result = getc_nolock(*(FILE **)(a1 + 8));
      if ( getc_nolock_result != -1 )
      {
        loaded_word_2 = *(_QWORD *)(a1 + 16) + 1LL;
        *(_QWORD *)(a1 + 16) = loaded_word_2;
        if ( getc_nolock_result == *(unsigned __int8 *)(a1 + 48) )
          return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_literal_character_tchar(
                   a1,
                   getc_nolock_result);
        loaded_word_3 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 16) = loaded_word_2 - 1;
        sub_14020CE90(getc_nolock_result, loaded_word_3);
      }
    }
    return 0;
  }
  loaded_word_4 = sub_14022E0F4(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 112));
  if ( loaded_word_4 != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90(loaded_word_4, *(_QWORD *)(a1 + 8));
  }
  return 1;
}

//----- (000000014023477C) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_state(
        __int64 a1)
{
  int loaded_word;
  int integer_difference;
  char call_result;
  unsigned __int8 *loaded_record_pointer;
  int loaded_word_2;
  int loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *(_DWORD *)(a1 + 52) - 2;
  if ( loaded_word )
  {
    integer_difference = loaded_word - 1;
    if ( integer_difference )
    {
      if ( integer_difference == 1 )
      {
        call_result = sub_140233CC4(a1);
        if ( call_result && *(_DWORD *)(a1 + 80) != 9 && !*(_BYTE *)(a1 + 58) )
          ++*(_QWORD *)(a1 + 136);
        return call_result;
      }
    }
    else
    {
      loaded_record_pointer = *(unsigned __int8 **)(a1 + 24);
      if ( loaded_record_pointer != *(unsigned __int8 **)(a1 + 16) )
      {
        loaded_word_2 = *loaded_record_pointer;
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
        if ( loaded_word_2 == *(unsigned __int8 *)(a1 + 56) )
          return __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_literal_character_tchar(
                   a1,
                   loaded_word_2);
        if ( loaded_record_pointer + 1 != *(unsigned __int8 **)(a1 + 8) )
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer);
      }
    }
    return 0;
  }
  loaded_word_3 = sub_14022E18C(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 120));
  loaded_word_4 = *(_QWORD *)(a1 + 24);
  if ( loaded_word_4 != *(_QWORD *)(a1 + 8) && (loaded_word_4 != *(_QWORD *)(a1 + 16) || loaded_word_3 != -1) )
    *(_QWORD *)(a1 + 24) = loaded_word_4 - 1;
  return 1;
}

//----- (0000000140234834) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_state(
        __int64 a1)
{
  int loaded_word;
  int integer_difference;
  char call_result;
  unsigned __int16 loaded_word_2;
  __int64 saved_loaded_word;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  unsigned __int16 call_result_2;
  __int64 unrecovered_register_value;

  loaded_word = *(_DWORD *)(a1 + 44) - 2;
  if ( !loaded_word )
  {
    call_result_2 = sub_14022E144((FILE **)(a1 + 8));
    if ( call_result_2 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(call_result_2, *(_QWORD *)(a1 + 8), unrecovered_register_value);
    }
    return 1;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference )
  {
    loaded_word_2 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    saved_loaded_word = loaded_word_2;
    if ( loaded_word_2 == 0xFFFF )
      return 0;
    loaded_word_3 = *(_QWORD *)(a1 + 16) + 1LL;
    *(_QWORD *)(a1 + 16) = loaded_word_3;
    if ( (_WORD)saved_loaded_word != *(_WORD *)(a1 + 48) )
    {
      loaded_word_4 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = loaded_word_3 - 1;
      ungetwc_nolock((unsigned __int16)saved_loaded_word, loaded_word_4, saved_loaded_word);
      return 0;
    }
    return 1;
  }
  if ( integer_difference != 1 )
    return 0;
  call_result = sub_140233DE4(a1);
  if ( call_result && *(_DWORD *)(a1 + 72) != 9 && !*(_BYTE *)(a1 + 52) )
    ++*(_QWORD *)(a1 + 104);
  return call_result;
}

//----- (00000001402348F4) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_state(
        __int64 a1)
{
  int loaded_word;
  int integer_difference;
  char call_result;
  __int16 *loaded_record_pointer;
  __int16 loaded_word_2;
  _WORD *record_pointer;
  __int16 call_result_2;
  __int64 loaded_word_3;

  loaded_word = *(_DWORD *)(a1 + 52) - 2;
  if ( !loaded_word )
  {
    call_result_2 = sub_14022E1E0(a1 + 8);
    loaded_word_3 = *(_QWORD *)(a1 + 24);
    if ( loaded_word_3 != *(_QWORD *)(a1 + 8) && (loaded_word_3 != *(_QWORD *)(a1 + 16) || call_result_2 != -1) )
      *(_QWORD *)(a1 + 24) = loaded_word_3 - 2;
    return 1;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference )
  {
    loaded_record_pointer = *(__int16 **)(a1 + 24);
    if ( loaded_record_pointer == *(__int16 **)(a1 + 16) )
      return 0;
    loaded_word_2 = *loaded_record_pointer;
    record_pointer = loaded_record_pointer + 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer);
    if ( loaded_word_2 == -1 )
      return 0;
    if ( loaded_word_2 != *(_WORD *)(a1 + 56) )
    {
      if ( record_pointer != *(_WORD **)(a1 + 8) )
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(record_pointer - 1);
      return 0;
    }
    return 1;
  }
  if ( integer_difference != 1 )
    return 0;
  call_result = sub_140233F00(a1);
  if ( call_result && *(_DWORD *)(a1 + 80) != 9 && !*(_BYTE *)(a1 + 60) )
    ++*(_QWORD *)(a1 + 112);
  return call_result;
}

//----- (00000001402349B4) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_string_specifier(
        __int64 *a1,
        int a2)
{
  int call_result;
  __int64 unknown_libname_649_result;

  if ( a2 == 1 )
  {
    call_result = sub_14022E0F4((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[14]);
    if ( call_result != -1 )
    {
      --a1[2];
      sub_14020CE90(call_result, a1[1]);
    }
  }
  unknown_libname_649_result = unknown_libname_649((__int64)(a1 + 3)) - 1;
  if ( !unknown_libname_649_result )
    return sub_14022D22C((__int64)a1, a2);
  if ( unknown_libname_649_result == 1 )
    return sub_14022D954((__int64)a1, a2);
  return 0;
}

//----- (0000000140234A34) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_string_specifier(
        _QWORD *a1,
        int a2)
{
  int call_result;
  __int64 table_value;
  __int64 unknown_libname_649_result;

  if ( a2 == 1 )
  {
    call_result = sub_14022E18C((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[15]);
    table_value = a1[3];
    if ( table_value != a1[1] && (table_value != a1[2] || call_result != -1) )
      a1[3] = table_value - 1;
  }
  unknown_libname_649_result = unknown_libname_649((__int64)(a1 + 4)) - 1;
  if ( !unknown_libname_649_result )
    return sub_14022D3C8((__int64)a1, a2);
  if ( unknown_libname_649_result == 1 )
    return sub_14022DB28((__int64)a1, a2);
  return 0;
}

//----- (0000000140234AC0) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_string_specifier(
        __int64 a1,
        int a2)
{
  unsigned __int16 call_result;
  __int64 unrecovered_register_value;
  __int64 unknown_libname_650_result;

  if ( a2 == 1 )
  {
    call_result = sub_14022E144((FILE **)(a1 + 8));
    if ( call_result != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(call_result, *(_QWORD *)(a1 + 8), unrecovered_register_value);
    }
  }
  unknown_libname_650_result = unknown_libname_650(a1 + 24) - 1;
  if ( !unknown_libname_650_result )
    return sub_14022D584(a1, a2);
  if ( unknown_libname_650_result == 1 )
    return sub_14022DD14(a1, a2);
  return 0;
}

//----- (0000000140234B48) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_string_specifier(
        _QWORD *a1,
        int a2)
{
  __int16 call_result;
  __int64 table_value;
  __int64 unknown_libname_650_result;

  if ( a2 == 1 )
  {
    call_result = sub_14022E1E0((__int64)(a1 + 1));
    table_value = a1[3];
    if ( table_value != a1[1] && (table_value != a1[2] || call_result != -1) )
      a1[3] = table_value - 2;
  }
  unknown_libname_650_result = unknown_libname_650((__int64)(a1 + 4)) - 1;
  if ( !unknown_libname_650_result )
    return sub_14022D774((__int64)a1, a2);
  if ( unknown_libname_650_result == 1 )
    return sub_14022DED8((__int64)a1, a2);
  return 0;
}

//----- (0000000140234BD8) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_whitespace(
        __int64 a1)
{
  __int64 *buffer_cursor;
  int loaded_word;

  buffer_cursor = (__int64 *)(a1 + 8);
  loaded_word = sub_14022E0F4(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 112));
  if ( loaded_word != -1 )
  {
    --buffer_cursor[1];
    sub_14020CE90(loaded_word, *buffer_cursor);
  }
  return 1;
}

//----- (0000000140234C0C) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_whitespace(
        __int64 a1)
{
  _QWORD *record_pointer;
  int loaded_word;
  __int64 table_value;

  record_pointer = (_QWORD *)(a1 + 8);
  loaded_word = sub_14022E18C(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 120));
  table_value = record_pointer[2];
  if ( table_value != *record_pointer && (table_value != record_pointer[1] || loaded_word != -1) )
    record_pointer[2] = table_value - 1;
  return 1;
}

//----- (0000000140234C48) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_whitespace(
        __int64 a1)
{
  _QWORD *buffer_cursor;
  unsigned __int16 call_result;
  __int64 unrecovered_register_value;

  buffer_cursor = (_QWORD *)(a1 + 8);
  call_result = sub_14022E144((FILE **)(a1 + 8));
  if ( call_result != 0xFFFF )
  {
    --buffer_cursor[1];
    ungetwc_nolock(call_result, *buffer_cursor, unrecovered_register_value);
  }
  return 1;
}

//----- (0000000140234C80) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_whitespace(
        __int64 a1)
{
  _QWORD *record_pointer;
  __int16 call_result;
  __int64 table_value;

  record_pointer = (_QWORD *)(a1 + 8);
  call_result = sub_14022E1E0(a1 + 8);
  table_value = record_pointer[2];
  if ( table_value != *record_pointer && (table_value != record_pointer[1] || call_result != -1) )
    record_pointer[2] = table_value - 2;
  return 1;
}

//----- (0000000140234CC4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1016(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140234CE0) ----------------------------------------------------
void            AfxSafeArrayInit_sr(struct COleSafeArray *a1)
{
  if ( a1 )
    crt_memset((void *)(uintptr_t)(a1), 0, 0x20u);
}

//----- (0000000140234CFC) ----------------------------------------------------
void            sub_140234CFC(void **a1)
{
  _WORD *loaded_word;
  void *calloc_base_result;

  loaded_word = *a1;
  if ( loaded_word || (calloc_base_result = (void *)calloc_base(0x2000, 1), free_base(*a1), *a1 = calloc_base_result, free_base(nullptr), (loaded_word = *a1) != nullptr) )
    crt_memset((void *)(uintptr_t)(loaded_word), 0, 0x2000u);
}

//----- (0000000140234E14) ----------------------------------------------------
unsigned __int64            sub_140234E14(sr_anon_107 *this, unsigned __int64 a2, unsigned int a3, char a4)
{
  char input_value;
  unsigned __int8 cached_this;
  __int64 shifted_bits;
  unsigned __int8 saved_cached_this;
  __int64 shifted_bits_2;
  char selection_flag;
  int fegetround_0_result;

  input_value = a3;
  cached_this = (unsigned __int8)this;
  if ( a3 >= 0x40 )
    return 0;
  shifted_bits = a2 & (1LL << a3);
  saved_cached_this = 0;
  shifted_bits_2 = a2 & (1LL << ((unsigned __int8)a3 - 1));
  if ( !a4 || (selection_flag = 0, (((1LL << ((unsigned __int8)a3 - 1)) - 1) & a2) != 0) )
    selection_flag = 1;
  if ( shifted_bits_2 || selection_flag )
  {
    fegetround_0_result = fegetround_0();
    switch ( fegetround_0_result )
    {
      case 0:
        if ( shifted_bits_2 && (selection_flag || shifted_bits) )
          saved_cached_this = 1;
        return (a2 >> input_value) + saved_cached_this;
      case 256:
        goto LABEL_12;
      case 512:
        cached_this ^= 1u;
LABEL_12:
        saved_cached_this = cached_this;
        break;
    }
  }
  return (a2 >> input_value) + saved_cached_this;
}

//----- (0000000140234F00) ----------------------------------------------------
char            sub_140234F00(__int64 a1)
{
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  int loaded_word_4;

  loaded_record_pointer = *(unsigned __int8 **)(a1 + 8);
  loaded_word = *loaded_record_pointer;
  if ( *loaded_record_pointer > 0x64u )
  {
    if ( loaded_word <= 0x67u )
      goto LABEL_50;
    switch ( loaded_word )
    {
      case 'i':
LABEL_49:
        *(_DWORD *)(a1 + 48) = 2;
        goto LABEL_51;
      case 'n':
        *(_DWORD *)(a1 + 48) = 9;
        goto LABEL_51;
      case 'o':
        *(_DWORD *)(a1 + 48) = 4;
        goto LABEL_51;
      case 'p':
        *(_DWORD *)(a1 + 40) = 10;
        break;
      case 's':
        goto LABEL_40;
      case 'u':
        *(_DWORD *)(a1 + 48) = 5;
        goto LABEL_51;
      case 'x':
        break;
      default:
        goto LABEL_10;
    }
    goto LABEL_38;
  }
  if ( *loaded_record_pointer == 100 )
  {
    *(_DWORD *)(a1 + 48) = 3;
LABEL_51:
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    return 1;
  }
  if ( loaded_word <= 0x53u )
  {
    if ( loaded_word != 83 )
    {
      if ( loaded_word == 65 )
        goto LABEL_50;
      if ( loaded_word != 67 )
      {
        if ( loaded_word <= 0x44u )
        {
LABEL_10:
          *(_QWORD *)(a1 + 16) = 22;
          *(_WORD *)(a1 + 24) = 0;
          *(_BYTE *)(a1 + 26) = 0;
          *(_QWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 40) = 0;
          *(_BYTE *)(a1 + 44) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          return 0;
        }
        if ( loaded_word > 0x47u )
        {
          if ( loaded_word != 73 )
            goto LABEL_10;
          goto LABEL_49;
        }
LABEL_50:
        *(_DWORD *)(a1 + 48) = 7;
        goto LABEL_51;
      }
LABEL_15:
      if ( !*(_QWORD *)(a1 + 32) )
        *(_QWORD *)(a1 + 32) = 1;
      loaded_word_2 = *(_DWORD *)(a1 + 40);
      if ( loaded_word_2 == 2 )
        *(_BYTE *)(a1 + 44) = 0;
      if ( ((loaded_word_2 - 3) & 0xFFFFFFFA) == 0 && loaded_word_2 != 7 )
        *(_BYTE *)(a1 + 44) = 1;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      return 1;
    }
LABEL_40:
    loaded_word_4 = *(_DWORD *)(a1 + 40);
    if ( loaded_word_4 == 2 )
      *(_BYTE *)(a1 + 44) = 0;
    if ( ((loaded_word_4 - 3) & 0xFFFFFFFA) == 0 && loaded_word_4 != 7 )
      *(_BYTE *)(a1 + 44) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    return 1;
  }
  if ( loaded_word == 88 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 48) = 6;
    goto LABEL_51;
  }
  if ( loaded_word != 91 )
  {
    if ( loaded_word == 97 )
      goto LABEL_50;
    if ( loaded_word != 99 )
      goto LABEL_10;
    goto LABEL_15;
  }
  loaded_word_3 = *(_DWORD *)(a1 + 40);
  if ( loaded_word_3 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  if ( ((loaded_word_3 - 3) & 0xFFFFFFFA) == 0 && loaded_word_3 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  *(_DWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  return sub_140235928(a1);
}

//----- (00000001402350A4) ----------------------------------------------------
char            sub_1402350A4(__int64 a1)
{
  _WORD *loaded_record_pointer;
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;

  loaded_record_pointer = *(_WORD **)(a1 + 8);
  if ( *loaded_record_pointer > 0x64u )
  {
    if ( *loaded_record_pointer <= 0x67u )
      goto LABEL_50;
    switch ( *loaded_record_pointer )
    {
      case 'i':
LABEL_49:
        *(_DWORD *)(a1 + 48) = 2;
        goto LABEL_51;
      case 'n':
        *(_DWORD *)(a1 + 48) = 9;
        goto LABEL_51;
      case 'o':
        *(_DWORD *)(a1 + 48) = 4;
        goto LABEL_51;
      case 'p':
        *(_DWORD *)(a1 + 40) = 10;
        break;
      case 's':
        goto LABEL_40;
      case 'u':
        *(_DWORD *)(a1 + 48) = 5;
        goto LABEL_51;
      case 'x':
        break;
      default:
        goto LABEL_10;
    }
    goto LABEL_38;
  }
  if ( *loaded_record_pointer == 100 )
  {
    *(_DWORD *)(a1 + 48) = 3;
LABEL_51:
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    return 1;
  }
  if ( *loaded_record_pointer <= 0x53u )
  {
    if ( *loaded_record_pointer != 83 )
    {
      if ( *loaded_record_pointer == 65 )
        goto LABEL_50;
      if ( *loaded_record_pointer != 67 )
      {
        if ( *loaded_record_pointer <= 0x44u )
        {
LABEL_10:
          *(_QWORD *)(a1 + 16) = 22;
          *(_DWORD *)(a1 + 24) = 0;
          *(_BYTE *)(a1 + 28) = 0;
          *(_QWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 40) = 0;
          *(_BYTE *)(a1 + 44) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          return 0;
        }
        if ( *loaded_record_pointer > 0x47u )
        {
          if ( *loaded_record_pointer != 73 )
            goto LABEL_10;
          goto LABEL_49;
        }
LABEL_50:
        *(_DWORD *)(a1 + 48) = 7;
        goto LABEL_51;
      }
LABEL_15:
      if ( !*(_QWORD *)(a1 + 32) )
        *(_QWORD *)(a1 + 32) = 1;
      loaded_word = *(_DWORD *)(a1 + 40);
      if ( loaded_word == 2 )
        *(_BYTE *)(a1 + 44) = 0;
      if ( ((loaded_word - 3) & 0xFFFFFFFA) == 0 && loaded_word != 7 )
        *(_BYTE *)(a1 + 44) = 1;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      return 1;
    }
LABEL_40:
    loaded_word_3 = *(_DWORD *)(a1 + 40);
    if ( loaded_word_3 == 2 )
      *(_BYTE *)(a1 + 44) = 0;
    if ( ((loaded_word_3 - 3) & 0xFFFFFFFA) == 0 && loaded_word_3 != 7 )
      *(_BYTE *)(a1 + 44) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    return 1;
  }
  if ( *loaded_record_pointer == 88 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 48) = 6;
    goto LABEL_51;
  }
  if ( *loaded_record_pointer != 91 )
  {
    if ( *loaded_record_pointer == 97 )
      goto LABEL_50;
    if ( *loaded_record_pointer != 99 )
      goto LABEL_10;
    goto LABEL_15;
  }
  loaded_word_2 = *(_DWORD *)(a1 + 40);
  if ( loaded_word_2 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  if ( ((loaded_word_2 - 3) & 0xFFFFFFFA) == 0 && loaded_word_2 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  *(_DWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  return sub_140235ADC(a1);
}

//----- (00000001402352B4) ----------------------------------------------------
char            sub_1402352B4(__int64 a1)
{
  char *loaded_record_pointer;
  unsigned int scaled_index;
  unsigned __int64 masked_bits;
  __int64 cached_selection_flag;
  __int64 selection_flag;

  loaded_record_pointer = *(char **)(a1 + 8);
  if ( (unsigned __int8)(*loaded_record_pointer - 48) > 9u )
  {
    if ( (unsigned __int8)(*loaded_record_pointer - 97) > 0x19u )
    {
      if ( (unsigned __int8)(*loaded_record_pointer - 65) > 0x19u )
        scaled_index = -1;
      else
        scaled_index = *loaded_record_pointer - 55;
    }
    else
    {
      scaled_index = *loaded_record_pointer - 87;
    }
  }
  else
  {
    scaled_index = *loaded_record_pointer - 48;
  }
  if ( scaled_index > 9 )
    return 1;
  selection_flag = 0;
  masked_bits = sub_14023CD50(loaded_record_pointer, (char *)&selection_flag, 10);
  if ( masked_bits )
  {
    cached_selection_flag = selection_flag;
    if ( selection_flag != *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 32) = masked_bits;
      *(_QWORD *)(a1 + 8) = cached_selection_flag;
      return 1;
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 16) = 22;
  return 0;
}

//----- (000000014023535C) ----------------------------------------------------
char            sub_14023535C(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  int selection_code;
  unsigned int scaled_index;
  int loaded_word;
  unsigned int integer_difference;
  int loaded_word_2;
  unsigned __int64 masked_bits;
  __int64 cached_selection_flag;
  __int64 selection_flag;

  loaded_record_pointer = *(unsigned __int16 **)(a1 + 8);
  selection_code = 48;
  if ( *loaded_record_pointer >= 0x30u )
  {
    if ( *loaded_record_pointer < 0x3Au )
      goto LABEL_3;
    selection_code = 65296;
    if ( *loaded_record_pointer >= 0xFF10u )
    {
      if ( *loaded_record_pointer >= 0xFF1Au )
      {
        scaled_index = -1;
LABEL_39:
        if ( scaled_index != -1 )
          goto LABEL_46;
        goto LABEL_40;
      }
LABEL_3:
      scaled_index = *loaded_record_pointer - selection_code;
      goto LABEL_39;
    }
    selection_code = 1632;
    if ( *loaded_record_pointer >= 0x660u )
    {
      if ( *loaded_record_pointer < 0x66Au )
        goto LABEL_3;
      selection_code = 1776;
      if ( *loaded_record_pointer >= 0x6F0u )
      {
        if ( *loaded_record_pointer < 0x6FAu )
          goto LABEL_3;
        selection_code = 2406;
        if ( *loaded_record_pointer >= 0x966u )
        {
          if ( *loaded_record_pointer < 0x970u )
            goto LABEL_3;
          selection_code = 2534;
          if ( *loaded_record_pointer >= 0x9E6u )
          {
            if ( *loaded_record_pointer < 0x9F0u )
              goto LABEL_3;
            selection_code = 2662;
            if ( *loaded_record_pointer >= 0xA66u )
            {
              if ( *loaded_record_pointer < 0xA70u )
                goto LABEL_3;
              selection_code = 2790;
              if ( *loaded_record_pointer >= 0xAE6u )
              {
                if ( *loaded_record_pointer < 0xAF0u )
                  goto LABEL_3;
                selection_code = 2918;
                if ( *loaded_record_pointer >= 0xB66u )
                {
                  if ( *loaded_record_pointer < 0xB70u )
                    goto LABEL_3;
                  selection_code = 3174;
                  if ( *loaded_record_pointer >= 0xC66u )
                  {
                    if ( *loaded_record_pointer < 0xC70u )
                      goto LABEL_3;
                    selection_code = 3302;
                    if ( *loaded_record_pointer >= 0xCE6u )
                    {
                      if ( *loaded_record_pointer < 0xCF0u )
                        goto LABEL_3;
                      selection_code = 3430;
                      if ( *loaded_record_pointer >= 0xD66u )
                      {
                        if ( *loaded_record_pointer < 0xD70u )
                          goto LABEL_3;
                        selection_code = 3664;
                        if ( *loaded_record_pointer >= 0xE50u )
                        {
                          if ( *loaded_record_pointer < 0xE5Au )
                            goto LABEL_3;
                          selection_code = 3792;
                          if ( *loaded_record_pointer >= 0xED0u )
                          {
                            if ( *loaded_record_pointer < 0xEDAu )
                              goto LABEL_3;
                            selection_code = 3872;
                            if ( *loaded_record_pointer >= 0xF20u )
                            {
                              if ( *loaded_record_pointer < 0xF2Au )
                                goto LABEL_3;
                              selection_code = 4160;
                              if ( *loaded_record_pointer >= 0x1040u )
                              {
                                if ( *loaded_record_pointer < 0x104Au )
                                  goto LABEL_3;
                                selection_code = 6112;
                                if ( *loaded_record_pointer >= 0x17E0u )
                                {
                                  if ( *loaded_record_pointer < 0x17EAu )
                                    goto LABEL_3;
                                  selection_code = 6160;
                                  if ( (unsigned __int16)(*loaded_record_pointer - 6160) <= 9u )
                                    goto LABEL_3;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_40:
  loaded_word = *loaded_record_pointer;
  integer_difference = loaded_word - 97;
  if ( (unsigned int)(loaded_word - 65) <= 0x19 || integer_difference <= 0x19 )
  {
    loaded_word_2 = loaded_word - 32;
    if ( integer_difference > 0x19 )
      loaded_word_2 = *loaded_record_pointer;
    scaled_index = loaded_word_2 - 55;
  }
  else
  {
    scaled_index = -1;
  }
LABEL_46:
  if ( scaled_index > 9 )
    return 1;
  selection_flag = 0;
  masked_bits = sub_14023CE58(loaded_record_pointer, (unsigned __int16 *)&selection_flag, 10);
  if ( masked_bits )
  {
    cached_selection_flag = selection_flag;
    if ( selection_flag != *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 32) = masked_bits;
      *(_QWORD *)(a1 + 8) = cached_selection_flag;
      return 1;
    }
  }
  *(_QWORD *)(a1 + 16) = 22;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  return 0;
}

//----- (00000001402355CC) ----------------------------------------------------
char            sub_1402355CC(__int64 a1)
{
  unsigned __int64 state_address;
  _BYTE *loaded_record_pointer;
  char table_value;
  char table_value_2;
  _BYTE *byte_cursor;
  char table_value_3;
  __int64 selection_code;

  loaded_record_pointer = *(_BYTE **)(a1 + 8);
  LOBYTE(state_address) = *loaded_record_pointer;
  if ( *loaded_record_pointer == 73 )
  {
    byte_cursor = loaded_record_pointer + 1;
    table_value_3 = loaded_record_pointer[1];
    if ( table_value_3 == 51 )
    {
      if ( loaded_record_pointer[2] == 50 )
      {
        *(_DWORD *)(a1 + 40) = 9;
        *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 3);
        LOBYTE(state_address) = (_BYTE)loaded_record_pointer + 3;
        return state_address;
      }
    }
    else if ( table_value_3 == 54 && loaded_record_pointer[2] == 52 )
    {
      LOBYTE(state_address) = (_BYTE)loaded_record_pointer + 3;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 3);
      goto LABEL_25;
    }
    LOBYTE(state_address) = table_value_3 - 88;
    if ( (unsigned __int8)state_address > 0x20u )
      return state_address;
    selection_code = 0x120821001LL;
    if ( !_bittest64(&selection_code, state_address) )
      return state_address;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(byte_cursor);
LABEL_25:
    *(_DWORD *)(a1 + 40) = 10;
    return state_address;
  }
  switch ( (_BYTE)state_address )
  {
    case 'L':
      *(_DWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      LOBYTE(state_address) = (_BYTE)loaded_record_pointer + 1;
      break;
    case 'T':
      *(_DWORD *)(a1 + 40) = 11;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      LOBYTE(state_address) = (_BYTE)loaded_record_pointer + 1;
      break;
    case 'h':
      table_value_2 = loaded_record_pointer[1];
      state_address = (unsigned __int64)&loaded_record_pointer[(table_value_2 == 104) + 1];
      *(_QWORD *)(a1 + 8) = state_address;
      *(_DWORD *)(a1 + 40) = (table_value_2 != 104) + 1;
      break;
    case 'j':
      *(_DWORD *)(a1 + 40) = 5;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      LOBYTE(state_address) = (_BYTE)loaded_record_pointer + 1;
      break;
    case 'l':
      table_value = loaded_record_pointer[1];
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&loaded_record_pointer[(table_value == 108) + 1]);
      LODWORD(state_address) = 4 - (table_value != 108);
      *(_DWORD *)(a1 + 40) = state_address;
      break;
    case 't':
      *(_DWORD *)(a1 + 40) = 7;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      LOBYTE(state_address) = (_BYTE)loaded_record_pointer + 1;
      break;
    case 'z':
      *(_DWORD *)(a1 + 40) = 6;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      LOBYTE(state_address) = (_BYTE)loaded_record_pointer + 1;
      break;
  }
  return state_address;
}

//----- (0000000140235704) ----------------------------------------------------
void            sub_140235704(__int64 a1)
{
  _WORD *loaded_record_pointer;
  __int16 table_value;
  __int64 selection_code;
  int comparison_result;
  __int16 table_value_2;
  __int64 selection_code_2;
  _WORD *record_pointer;
  unsigned __int64 table_value_3;
  __int64 selection_code_3;

  loaded_record_pointer = *(_WORD **)(a1 + 8);
  if ( *loaded_record_pointer != 73 )
  {
    if ( *loaded_record_pointer == 76 )
    {
      *(_DWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      return;
    }
    if ( *loaded_record_pointer == 84 )
    {
      *(_DWORD *)(a1 + 40) = 11;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      return;
    }
    if ( *loaded_record_pointer == 104 )
    {
      table_value_2 = loaded_record_pointer[1];
      selection_code_2 = 2;
      if ( table_value_2 != 104 )
        selection_code_2 = 1;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&loaded_record_pointer[selection_code_2]);
      comparison_result = (table_value_2 != 104) + 1;
    }
    else
    {
      if ( *loaded_record_pointer == 106 )
      {
        *(_DWORD *)(a1 + 40) = 5;
        *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
        return;
      }
      if ( *loaded_record_pointer != 108 )
      {
        if ( *loaded_record_pointer == 116 )
        {
          *(_DWORD *)(a1 + 40) = 7;
          *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
        }
        else if ( *loaded_record_pointer == 122 )
        {
          *(_DWORD *)(a1 + 40) = 6;
          *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
        }
        return;
      }
      table_value = loaded_record_pointer[1];
      selection_code = 2;
      if ( table_value != 108 )
        selection_code = 1;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&loaded_record_pointer[selection_code]);
      comparison_result = 4 - (table_value != 108);
    }
    *(_DWORD *)(a1 + 40) = comparison_result;
    return;
  }
  record_pointer = loaded_record_pointer + 1;
  table_value_3 = (unsigned __int16)loaded_record_pointer[1];
  if ( (_WORD)table_value_3 == 51 )
  {
    if ( loaded_record_pointer[2] == 50 )
    {
      *(_DWORD *)(a1 + 40) = 9;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 3);
      return;
    }
  }
  else if ( (_WORD)table_value_3 == 54 && loaded_record_pointer[2] == 52 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 3);
LABEL_30:
    *(_DWORD *)(a1 + 40) = 10;
    return;
  }
  LOWORD(table_value_3) = table_value_3 - 88;
  if ( (unsigned __int16)table_value_3 <= 0x20u )
  {
    selection_code_3 = 0x120821001LL;
    if ( _bittest64(&selection_code_3, table_value_3) )
    {
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(record_pointer);
      goto LABEL_30;
    }
  }
}

//----- (0000000140235864) ----------------------------------------------------
char            sub_140235864(__int64 a1)
{
  _BYTE *loaded_record_pointer;

  if ( (sub_140256DC0()[*(unsigned __int8 *)(a1 + 24)] & 0x8000u) != 0 )
  {
    loaded_record_pointer = *(_BYTE **)(a1 + 8);
    if ( !*loaded_record_pointer )
    {
      *(_QWORD *)(a1 + 16) = 42;
      *(_WORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 26) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_BYTE *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      return 0;
    }
    *(_BYTE *)(a1 + 25) = *loaded_record_pointer;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  }
  return 1;
}

//----- (0000000140235928) ----------------------------------------------------
char            sub_140235928(__int64 a1)
{
  unsigned __int64 integer_sum;
  _BYTE *buffer_cursor;
  _BYTE *saved_buffer_cursor;
  char input_byte;
  unsigned __int8 loaded_word;
  _BYTE *byte_cursor;
  _BYTE *saved_buffer_cursor_2;
  unsigned __int8 scaled_index;
  unsigned __int8 table_value;
  unsigned __int8 iteration_count;
  char integer_sum_2;
  _BYTE *buffer_cursor_2;

  integer_sum = a1 + 52;
  if ( a1 == -52 )
  {
    *(_QWORD *)((uintptr_t)a1 + 16) = 12;
    *(_WORD *)((uintptr_t)a1 + 24) = 0;
    *(_BYTE *)((uintptr_t)a1 + 26) = 0;
    *(_QWORD *)((uintptr_t)a1 + 32) = 0;
    *(_DWORD *)((uintptr_t)a1 + 40) = 0;
    *(_BYTE *)((uintptr_t)a1 + 44) = 0;
    *(_DWORD *)((uintptr_t)a1 + 48) = 0;
    return 0;
  }
  crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 52)), 0, 0x20u);
  buffer_cursor = *(_BYTE **)(a1 + 8);
  saved_buffer_cursor = buffer_cursor;
  input_byte = *buffer_cursor;
  loaded_word = *buffer_cursor;
  if ( *buffer_cursor == 94 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(++buffer_cursor);
    saved_buffer_cursor = buffer_cursor;
    loaded_word = *buffer_cursor;
  }
  if ( loaded_word == 93 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(++buffer_cursor);
    *(_BYTE *)(a1 + 63) |= 0x20u;
    saved_buffer_cursor = buffer_cursor;
    loaded_word = *buffer_cursor;
  }
  byte_cursor = nullptr;
  if ( loaded_word != 93 )
  {
    saved_buffer_cursor_2 = buffer_cursor;
    do
    {
      if ( !loaded_word )
        break;
      if ( loaded_word != 45 || saved_buffer_cursor_2 - 1 == byte_cursor || saved_buffer_cursor_2 == buffer_cursor || saved_buffer_cursor_2[1] == 93 )
      {
        *(_BYTE *)(((unsigned __int64)loaded_word >> 3) + a1 + 52) |= 1 << (loaded_word & 7);
      }
      else
      {
        scaled_index = *(saved_buffer_cursor_2 - 1);
        byte_cursor = saved_buffer_cursor_2 + 1;
        table_value = scaled_index;
        iteration_count = saved_buffer_cursor_2[1];
        if ( scaled_index <= iteration_count )
          table_value = saved_buffer_cursor_2[1];
        integer_sum_2 = table_value + 1;
        if ( scaled_index <= saved_buffer_cursor_2[1] )
          iteration_count = *(saved_buffer_cursor_2 - 1);
        while ( iteration_count != integer_sum_2 )
        {
          *(_BYTE *)(((unsigned __int64)iteration_count >> 3) + a1 + 52) |= 1 << (iteration_count & 7);
          ++iteration_count;
        }
      }
      saved_buffer_cursor = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(saved_buffer_cursor);
      saved_buffer_cursor_2 = saved_buffer_cursor;
      loaded_word = *saved_buffer_cursor;
    }
    while ( *saved_buffer_cursor != 93 );
  }
  if ( !*saved_buffer_cursor )
  {
    *(_QWORD *)(a1 + 16) = 22;
    *(_WORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 26) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    return 0;
  }
  if ( input_byte == 94 )
  {
    buffer_cursor_2 = (_BYTE *)integer_sum;
    if ( integer_sum < integer_sum + 32 )
    {
      do
      {
        *buffer_cursor_2 = ~*buffer_cursor_2;
        ++buffer_cursor_2;
      }
      while ( &buffer_cursor_2[-integer_sum] != (_BYTE *)(integer_sum + 32 >= integer_sum ? 0x20 : 0) );
      saved_buffer_cursor = *(_BYTE **)(a1 + 8);
    }
  }
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(saved_buffer_cursor + 1);
  return 1;
}

//----- (0000000140235ADC) ----------------------------------------------------
char            sub_140235ADC(__int64 a1)
{
  void **saved_calloc_base_result;
  _WORD *loaded_word;
  __int64 calloc_base_result;
  unsigned __int16 *buffer_cursor;
  unsigned __int16 *saved_buffer_cursor;
  unsigned __int16 loaded_word_2;
  unsigned __int16 loaded_word_3;
  unsigned __int16 *record_pointer;
  unsigned __int16 *saved_buffer_cursor_2;
  unsigned __int16 *record_pointer_2;
  unsigned __int16 iteration_count;
  unsigned __int16 loaded_word_4;
  __int16 integer_sum;
  unsigned __int16 loaded_word_5;

  saved_calloc_base_result = (void **)(a1 + 56);
  loaded_word = *(_WORD **)(a1 + 56);
  if ( !loaded_word )
  {
    calloc_base_result = calloc_base(0x2000, 1);
    free_base(*saved_calloc_base_result);
    *saved_calloc_base_result = (void *)calloc_base_result;
    free_base(nullptr);
    loaded_word = *saved_calloc_base_result;
    if ( !*saved_calloc_base_result )
    {
      *(_QWORD *)(a1 + 16) = 12;
      *(_DWORD *)(a1 + 24) = 0;
LABEL_4:
      *(_BYTE *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_BYTE *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      return 0;
    }
  }
  crt_memset((void *)(uintptr_t)(loaded_word), 0, 0x2000u);
  buffer_cursor = *(unsigned __int16 **)(a1 + 8);
  saved_buffer_cursor = buffer_cursor;
  loaded_word_2 = *buffer_cursor;
  loaded_word_5 = *buffer_cursor;
  loaded_word_3 = *buffer_cursor;
  if ( *buffer_cursor == 94 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(++buffer_cursor);
    saved_buffer_cursor = buffer_cursor;
    loaded_word_3 = *buffer_cursor;
  }
  if ( loaded_word_3 == 93 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(buffer_cursor + 1);
    sub_140235D1C(saved_calloc_base_result, 0x5Du);
    buffer_cursor = *(unsigned __int16 **)(a1 + 8);
    saved_buffer_cursor = buffer_cursor;
    loaded_word_3 = *buffer_cursor;
  }
  record_pointer = nullptr;
  if ( loaded_word_3 != 93 )
  {
    saved_buffer_cursor_2 = buffer_cursor;
    do
    {
      if ( !loaded_word_3 )
        break;
      if ( loaded_word_3 != 45 || (record_pointer_2 = saved_buffer_cursor_2 - 1, saved_buffer_cursor_2 - 1 == record_pointer) || saved_buffer_cursor_2 == buffer_cursor || (iteration_count = saved_buffer_cursor_2[1], iteration_count == 93) )
      {
        sub_140235D1C(saved_calloc_base_result, loaded_word_3);
      }
      else
      {
        loaded_word_4 = *record_pointer_2;
        record_pointer = saved_buffer_cursor_2 + 1;
        if ( *record_pointer_2 <= iteration_count )
          loaded_word_4 = saved_buffer_cursor_2[1];
        integer_sum = loaded_word_4 + 1;
        if ( *record_pointer_2 <= iteration_count )
          iteration_count = *record_pointer_2;
        for ( ; iteration_count != integer_sum; ++iteration_count )
          sub_140235D1C(saved_calloc_base_result, iteration_count);
      }
      saved_buffer_cursor = (unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 2LL);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(saved_buffer_cursor);
      saved_buffer_cursor_2 = saved_buffer_cursor;
      loaded_word_3 = *saved_buffer_cursor;
    }
    while ( *saved_buffer_cursor != 93 );
    loaded_word_2 = loaded_word_5;
  }
  if ( !*saved_buffer_cursor )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = 22;
    goto LABEL_4;
  }
  if ( loaded_word_2 == 94 )
  {
    sub_1402326E8((char **)saved_calloc_base_result);
    saved_buffer_cursor = *(unsigned __int16 **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(saved_buffer_cursor + 1);
  return 1;
}

//----- (0000000140235D1C) ----------------------------------------------------
__int64            sub_140235D1C(void **a1, unsigned __int16 a2)
{
  _BYTE *loaded_word;
  void *calloc_base_result;
  __int64 result;

  loaded_word = *a1;
  if ( !*a1 )
  {
    calloc_base_result = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = calloc_base_result;
    free_base(nullptr);
    loaded_word = *a1;
  }
  result = a2 & 7;
  loaded_word[(unsigned __int64)a2 >> 3] |= 1 << result;
  return result;
}

//----- (0000000140235D88) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_657(__int64 a1)
{
  int loaded_word;
  __int64 result;

  loaded_word = *(_DWORD *)(a1 + 40);
  if ( loaded_word == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  result = (unsigned int)(loaded_word - 3);
  if ( (result & 0xFFFFFFFA) == 0 && loaded_word != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  return result;
}

//----- (0000000140235DD0) ----------------------------------------------------
char            sub_140235DD0(sr_anon_107 *this, struct __crt_strtox__big_integer *a2)
{
  unsigned int masked_bits;
  unsigned int shifted_bits;
  int loaded_word;
  int callee_output_word;
  int integer_sum;
  unsigned int integer_difference;
  bool comparison_result;
  int integer_sum_2;
  unsigned int remaining_count;
  __int64 integer_difference_2;
  __int64 integer_difference_3;
  int comparison_result_2;
  int comparison_result_3;
  __int64 integer_difference_4;
  unsigned int iteration_count;
  __int64 integer_sum_3;
  int integer_sum_4;
  __m128i Source;

  masked_bits = (unsigned __int8)a2 & 0x1F;
  shifted_bits = (unsigned int)a2 >> 5;
  loaded_word = *(_DWORD *)this;
  if ( !_BitScanReverse((unsigned int *)&callee_output_word, *((_DWORD *)this + (unsigned int)(*(_DWORD *)this - 1) + 1)) )
    integer_sum = 0;
  else
    integer_sum = callee_output_word + 1;
  integer_difference = 32 - integer_sum;
  comparison_result = loaded_word + shifted_bits <= 0x73;
  if ( loaded_word + shifted_bits == 115 )
  {
    if ( masked_bits > integer_difference )
    {
LABEL_24:
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, &Source, 0);
      return 0;
    }
    comparison_result = 1;
  }
  if ( !comparison_result )
    goto LABEL_24;
  integer_sum_2 = 114;
  if ( loaded_word + shifted_bits < 0x72 )
    integer_sum_2 = loaded_word + shifted_bits;
  remaining_count = integer_sum_2;
  do
  {
    if ( remaining_count < shifted_bits )
      break;
    integer_difference_2 = remaining_count - shifted_bits;
    integer_difference_3 = (unsigned int)(integer_difference_2 - 1);
    comparison_result_2 = (unsigned int)integer_difference_2 >= *(_DWORD *)this ? 0 : *((_DWORD *)this + integer_difference_2 + 1);
    comparison_result_3 = (unsigned int)integer_difference_3 >= *(_DWORD *)this ? 0 : *((_DWORD *)this + integer_difference_3 + 1);
    integer_difference_4 = remaining_count--;
    *((_DWORD *)this + integer_difference_4 + 1) = ((((unsigned int)(1LL << (32 - (unsigned __int8)masked_bits)) - 1) & comparison_result_2) << masked_bits)
                                | ((~((unsigned int)(1LL << (32 - (unsigned __int8)masked_bits)) - 1) & comparison_result_3) >> (32 - masked_bits));
  }
  while ( remaining_count != -1 );
  iteration_count = 0;
  if ( shifted_bits )
  {
    do
    {
      integer_sum_3 = iteration_count++;
      *((_DWORD *)this + integer_sum_3 + 1) = 0;
    }
    while ( iteration_count != shifted_bits );
  }
  integer_sum_4 = integer_sum_2 + 1;
  if ( masked_bits <= integer_difference )
    integer_sum_4 = integer_sum_2;
  *(_DWORD *)this = integer_sum_4;
  return 1;
}

// 140235E5C: conditional instruction was optimized away because ebx.4<73u

//----- (0000000140235F50) ----------------------------------------------------
char            sub_140235F50(__crt_strtox *this, char a2, char a3, char a4)
{
  char unused_written_slot;
  char cached_this;
  int fegetround_0_result;

  unused_written_slot = 0;
  cached_this = (char)this;
  if ( !a3 && !a4 )
    return 0;
  fegetround_0_result = fegetround_0();
  if ( fegetround_0_result )
  {
    if ( fegetround_0_result == 256 )
    {
      return cached_this;
    }
    else
    {
      if ( fegetround_0_result != 512 )
        return 0;
      return cached_this ^ 1;
    }
  }
  else
  {
    if ( a3 && (a4 || a2) )
      return 1;
    return unused_written_slot;
  }
}

//----- (0000000140236014) ----------------------------------------------------
bool            sub_140236014(void **a1, unsigned __int16 a2)
{
  _BYTE *loaded_word;
  void *calloc_base_result;

  loaded_word = *a1;
  if ( !*a1 )
  {
    calloc_base_result = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = calloc_base_result;
    free_base(nullptr);
    loaded_word = *a1;
  }
  return ((unsigned __int8)(1 << (a2 & 7)) & loaded_word[(unsigned __int64)a2 >> 3]) != 0;
}

//----- (00000001402360F4) ----------------------------------------------------
unsigned __int64            sub_1402360F4(__int64 a1, int a2)
{
  unsigned __int64 result;
  bool comparison_result;
  __int64 *buffer_cursor;

  result = *(_QWORD *)(a1 + 16) - 1LL;
  comparison_result = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 16) = result;
  if ( comparison_result || result <= *(_QWORD *)(a1 + 8) )
  {
    result = (unsigned int)(a2 + 1);
    if ( (unsigned __int8)(a2 + 1) > 1u )
    {
      result = (unsigned int)(char)a2;
      buffer_cursor = *(__int64 **)a1;
      if ( (_DWORD)result != -1 )
      {
        --buffer_cursor[1];
        return sub_14020CE90(result, *buffer_cursor);
      }
    }
  }
  return result;
}

//----- (0000000140236138) ----------------------------------------------------
unsigned __int64            sub_140236138(__int64 **a1, unsigned __int16 a2)
{
  __int64 input_value;
  unsigned __int64 result;
  bool comparison_result;
  _QWORD *buffer_cursor;

  input_value = a2;
  result = (unsigned __int64)a1[2] - 1;
  comparison_result = a1[1] == nullptr;
  a1[2] = (__int64 *)result;
  if ( comparison_result || result <= (unsigned __int64)a1[1] )
  {
    result = (unsigned int)a2 - 1;
    if ( (unsigned __int16)(a2 - 1) <= 0xFFFDu )
    {
      buffer_cursor = *a1;
      --buffer_cursor[1];
      return ungetwc_nolock((unsigned __int16)input_value, *buffer_cursor, input_value);
    }
  }
  return result;
}

//----- (00000001402361F0) ----------------------------------------------------
__int64            __crt_stdio_input__stream_input_adapter__char__unget(__int64 *a1, unsigned int a2)
{
  __int64 result;

  result = a2;
  if ( a2 != -1 )
  {
    --a1[1];
    return sub_14020CE90(a2, *a1);
  }
  return result;
}

//----- (0000000140236210) ----------------------------------------------------
__int64            __crt_stdio_input__stream_input_adapter__wchar_t__unget(
        __int64 *a1,
        unsigned __int16 a2,
        __int64 a3)
{
  __int64 result;

  result = a2;
  if ( a2 != 0xFFFF )
  {
    --a1[1];
    return ungetwc_nolock(a2, *a1, a3);
  }
  return result;
}

//----- (0000000140236278) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_659(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402362A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_660(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402362C8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_661(_QWORD *a1)
{
  if ( *a1 && a1[3] )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402362F4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_662(_QWORD *a1)
{
  if ( *a1 && a1[3] )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140236320) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_663(_QWORD *a1)
{
  if ( *a1 && a1[3] )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014023634C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_664(_QWORD *a1)
{
  if ( *a1 && a1[3] )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140236378) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_665(__int64 *a1)
{
  __int64 loaded_word;

  loaded_word = *a1;
  if ( loaded_word )
    return sub_14022389C(loaded_word);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402363A4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_666(_QWORD *a1)
{
  if ( *a1 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402363CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_667(__int64 a1)
{
  unsigned __int64 loaded_word;

  loaded_word = *(_QWORD *)(a1 + 16);
  if ( loaded_word && loaded_word <= *(_QWORD *)(a1 + 8) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402363FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_668(__int64 a1)
{
  unsigned __int64 loaded_word;

  loaded_word = *(_QWORD *)(a1 + 16);
  if ( loaded_word && loaded_word <= *(_QWORD *)(a1 + 8) )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402365F4) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_character(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD **a4,
        _QWORD *a5,
        __int16 a6)
{
  __int64 input_value;
  int getc_nolock_result;
  __int64 loaded_word;
  __int16 selection_code;

  input_value = (unsigned __int8)a6;
  HIBYTE(a6) = 0;
  if ( (sub_140256DC0()[input_value] & 0x8000u) != 0 )
  {
    getc_nolock_result = getc_nolock(*(FILE **)(a1 + 8));
    if ( getc_nolock_result != -1 )
      ++*(_QWORD *)(a1 + 16);
    HIBYTE(a6) = getc_nolock_result;
  }
  loaded_word = *(_QWORD *)(a1 + 112);
  selection_code = 63;
  mbtowc_l((sr_anon_115 *)&selection_code, (sr_anon_49 *)&a6, (char *)*(int *)(*(_QWORD *)loaded_word + 8LL), (struct __crt_locale_pointers *)loaded_word);
  *(*a4)++ = (char)input_value;
  --*a5;
  return 1;
}

//----- (00000001402366A0) ----------------------------------------------------
char            sub_1402366A0(_QWORD *a1, __int64 a2, __int64 a3, _WORD **a4, _QWORD *a5, __int16 a6)
{
  __int64 input_value;
  char *table_value;
  char input_byte;
  __int64 table_value_2;
  _QWORD *input_cursor;
  __int16 selection_code;

  input_value = (unsigned __int8)a6;
  HIBYTE(a6) = 0;
  if ( (sub_140256DC0()[input_value] & 0x8000u) != 0 )
  {
    table_value = (char *)a1[3];
    if ( table_value == (char *)a1[2] )
    {
      input_byte = -1;
    }
    else
    {
      input_byte = *table_value;
      a1[3] = (uint64)(uintptr_t)(table_value + 1);
    }
    HIBYTE(a6) = input_byte;
  }
  table_value_2 = a1[15];
  selection_code = 63;
  mbtowc_l((sr_anon_115 *)&selection_code, (sr_anon_49 *)&a6, (char *)*(int *)(*(_QWORD *)table_value_2 + 8LL), (struct __crt_locale_pointers *)table_value_2);
  **a4 = (char)input_value;
  input_cursor = a5;
  ++*a4;
  --*input_cursor;
  return 1;
}

//----- (0000000140236738) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_671_sr(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
             struct DLGTEMPLATE **a4,
        struct CWnd **a5,
        unsigned __int16 a6)
{
       struct DLGTEMPLATE *loaded_word;
  int Indirect;
  __int64 cached_selection_flag;
  struct CWnd **input_cursor;
  struct CWnd **input_cursor_2;
  __int64 cached_selection_flag_2;
  int selection_flag;

  selection_flag = 0;
  loaded_word = *a4;
  if ( a3 == -1 )
  {
    Indirect = CDialog__CreateIndirect((CDialog *)&selection_flag, loaded_word, (struct CWnd *)5, (void *)a6);
    if ( Indirect )
    {
      if ( Indirect == 22 || Indirect == 34 )
      {
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
    else
    {
      cached_selection_flag = selection_flag;
      input_cursor = a5;
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + selection_flag);
      *input_cursor = (struct CWnd *)((char *)*input_cursor - cached_selection_flag);
    }
  }
  else
  {
    input_cursor_2 = a5;
    if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&selection_flag, loaded_word, *a5, (void *)a6) == 34 )
    {
      *a2 = 0;
      return 0;
    }
    cached_selection_flag_2 = selection_flag;
    if ( selection_flag > 0 )
    {
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + selection_flag);
      *input_cursor_2 = (struct CWnd *)((char *)*input_cursor_2 - cached_selection_flag_2);
    }
  }
  return 1;
}

// 1402367DC: control flows out of bounds to 1402367E1

//----- (0000000140236800) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_673_sr(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
             struct DLGTEMPLATE **a4,
        struct CWnd **a5,
        unsigned __int16 a6)
{
       struct DLGTEMPLATE *loaded_word;
  int Indirect;
  __int64 cached_selection_flag;
  struct CWnd **input_cursor;
  struct CWnd **input_cursor_2;
  __int64 cached_selection_flag_2;
  int selection_flag;

  selection_flag = 0;
  loaded_word = *a4;
  if ( a3 == -1 )
  {
    Indirect = CDialog__CreateIndirect((CDialog *)&selection_flag, loaded_word, (struct CWnd *)5, (void *)a6);
    if ( Indirect )
    {
      if ( Indirect == 22 || Indirect == 34 )
      {
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
    else
    {
      cached_selection_flag = selection_flag;
      input_cursor = a5;
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + selection_flag);
      *input_cursor = (struct CWnd *)((char *)*input_cursor - cached_selection_flag);
    }
  }
  else
  {
    input_cursor_2 = a5;
    if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&selection_flag, loaded_word, *a5, (void *)a6) == 34 )
    {
      *a2 = 0;
      return 0;
    }
    cached_selection_flag_2 = selection_flag;
    if ( selection_flag > 0 )
    {
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + selection_flag);
      *input_cursor_2 = (struct CWnd *)((char *)*input_cursor_2 - cached_selection_flag_2);
    }
  }
  return 1;
}

// 1402368A4: control flows out of bounds to 1402368A9

//----- (00000001402368C8) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *loaded_record_pointer;
  __int64 unknown_libname_649_result;
  __int64 integer_difference;
  __int64 integer_difference_2;

  *(_QWORD *)(a1 + 120) += 8LL;
  loaded_record_pointer = *(_QWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  unknown_libname_649_result = unknown_libname_649(a1 + 24) - 1;
  if ( unknown_libname_649_result )
  {
    integer_difference = unknown_libname_649_result - 1;
    if ( integer_difference )
    {
      integer_difference_2 = integer_difference - 2;
      if ( integer_difference_2 )
      {
        if ( integer_difference_2 != 4 )
          return 0;
        *loaded_record_pointer = a2;
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = a2;
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = a2;
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = a2;
  }
  return 1;
}

//----- (000000014023693C) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *loaded_record_pointer;
  __int64 unknown_libname_649_result;
  __int64 integer_difference;
  __int64 integer_difference_2;

  *(_QWORD *)(a1 + 128) += 8LL;
  loaded_record_pointer = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  unknown_libname_649_result = unknown_libname_649(a1 + 32) - 1;
  if ( unknown_libname_649_result )
  {
    integer_difference = unknown_libname_649_result - 1;
    if ( integer_difference )
    {
      integer_difference_2 = integer_difference - 2;
      if ( integer_difference_2 )
      {
        if ( integer_difference_2 != 4 )
          return 0;
        *loaded_record_pointer = a2;
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = a2;
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = a2;
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = a2;
  }
  return 1;
}

//----- (00000001402369B4) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *loaded_record_pointer;
  __int64 unknown_libname_650_result;
  __int64 integer_difference;
  __int64 integer_difference_2;

  *(_QWORD *)(a1 + 96) += 8LL;
  loaded_record_pointer = *(_QWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  unknown_libname_650_result = unknown_libname_650(a1 + 24) - 1;
  if ( unknown_libname_650_result )
  {
    integer_difference = unknown_libname_650_result - 1;
    if ( integer_difference )
    {
      integer_difference_2 = integer_difference - 2;
      if ( integer_difference_2 )
      {
        if ( integer_difference_2 != 4 )
          return 0;
        *loaded_record_pointer = a2;
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = a2;
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = a2;
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = a2;
  }
  return 1;
}

//----- (0000000140236A28) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *loaded_record_pointer;
  __int64 unknown_libname_650_result;
  __int64 integer_difference;
  __int64 integer_difference_2;

  *(_QWORD *)(a1 + 104) += 8LL;
  loaded_record_pointer = *(_QWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( !loaded_record_pointer )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  unknown_libname_650_result = unknown_libname_650(a1 + 32) - 1;
  if ( unknown_libname_650_result )
  {
    integer_difference = unknown_libname_650_result - 1;
    if ( integer_difference )
    {
      integer_difference_2 = integer_difference - 2;
      if ( integer_difference_2 )
      {
        if ( integer_difference_2 != 4 )
          return 0;
        *loaded_record_pointer = a2;
      }
      else
      {
        *(_DWORD *)loaded_record_pointer = a2;
      }
    }
    else
    {
      *(_WORD *)loaded_record_pointer = a2;
    }
  }
  else
  {
    *(_BYTE *)loaded_record_pointer = a2;
  }
  return 1;
}

//----- (0000000140236ADC) ----------------------------------------------------
__int64            sub_140236ADC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  _QWORD scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_4 = a4;
  input_value_7 = a3;
  input_value_5 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = (uint64)(uintptr_t)(&input_value_4);
    input_value_3 = a2;
    scratch_buffer[1] = (uint64)(uintptr_t)(&input_value_5);
    scratch_buffer[2] = (uint64)(uintptr_t)(&input_value_6);
    scratch_buffer[3] = (uint64)(uintptr_t)(&input_value_7);
    scratch_buffer[4] = (uint64)(uintptr_t)(&input_value);
    return sub_1402251E4((__int64)&a5, &input_value_3, (__int64)scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140236B68) ----------------------------------------------------
__int64            sub_140236B68(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  _QWORD scratch_buffer[5];
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  __int64 input_value_7;

  input_value = a5;
  input_value_4 = a4;
  input_value_7 = a3;
  input_value_5 = a2;
  input_value_6 = a1;
  if ( a2 && a3 )
  {
    input_value_2 = a2;
    scratch_buffer[0] = (uint64)(uintptr_t)(&input_value_4);
    input_value_3 = a2;
    scratch_buffer[1] = (uint64)(uintptr_t)(&input_value_5);
    scratch_buffer[2] = (uint64)(uintptr_t)(&input_value_6);
    scratch_buffer[3] = (uint64)(uintptr_t)(&input_value_7);
    scratch_buffer[4] = (uint64)(uintptr_t)(&input_value);
    return sub_140225224((__int64)&a5, &input_value_3, (__int64)scratch_buffer, &input_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

__int64 sub_140236BF4(__int64 options,__m128i *input,unsigned __int64 limit,
                     __int64 format,struct __crt_locale_pointers *provided,__int64 arguments)
{
  sr_scan_locale locale;
  sr_scan_processor processor;
  uintptr_t length;
  unsigned int result;
  if (!input || !format)
  {
    *errno_sr()=22;
    crt_invalid_parameter_noinfo();
    return UINT32_MAX;
  }
  length=(uintptr_t)strnlen_sr(input,limit);
  crt_locale_update((_LocaleUpdate *)(void *)&locale,provided);
  processor.options=options;
  processor.input.begin=(uintptr_t)input;
  processor.input.end=(uintptr_t)input+length;
  processor.input.current=(uintptr_t)input;
  processor.options_copy=options;
  processor.format=format;
  processor.field48=processor.field52=0;
  processor.field56=processor.field58=0;
  processor.field64=0;
  processor.field72=processor.field76=processor.field80=0;
  memset(processor.workspace,0,sizeof processor.workspace);
  processor.locale=locale.pair;
  processor.arguments=arguments;
  processor.assignments=0;
  result=(unsigned int)sub_1402338B8((__int64)(uintptr_t)&processor);
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  /* Original cookie checker preserves the scanner's zero-extended EAX. */
  return result;
}

//----- (0000000140236D1C) ----------------------------------------------------
__int64            sub_140236D1C(
        __int64 a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  unsigned int unused_written_slot;
  __int64 call_result;
  __int128 packed_vector;
  __int64 input_value;
  __int128 unused_written_slot_2;
  __m128i *unused_written_slot_3;
  __int64 unused_written_slot_4;
  __int64 unused_written_slot_5;
  __int64 unused_written_slot_6;
  int unused_written_slot_7;
  char unused_written_slot_8;
  __int64 unused_written_slot_9;
  int unused_written_slot_10;
  char unused_written_slot_11;
  int unused_written_slot_12;
  void *Block;
  _BYTE *unused_written_slot_13;
  __int64 unused_written_slot_14;
  __int64 unused_written_slot_15;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];

  if ( a2 && a4 )
  {
    call_result = sub_140254F48(a2, a3);
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
    *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(a2);
    *((_QWORD *)&packed_vector + 1) = (uint64)(uintptr_t)((char *)a2 + 2 * call_result);
    unused_written_slot_13 = scratch_buffer;
    unused_written_slot_14 = a6;
    input_value = a1;
    unused_written_slot_2 = packed_vector;
    unused_written_slot_4 = a1;
    unused_written_slot_3 = a2;
    unused_written_slot_5 = a4;
    unused_written_slot_6 = 0;
    Block = nullptr;
    unused_written_slot_7 = 0;
    unused_written_slot_8 = 0;
    unused_written_slot_9 = 0;
    unused_written_slot_10 = 0;
    unused_written_slot_11 = 0;
    unused_written_slot_12 = 0;
    unused_written_slot_15 = 0;
    unused_written_slot = sub_140233A68((__int64)&input_value);
    free_base(Block);
    Block = nullptr;
    if ( scratch_buffer[16] )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return (unsigned int)-1;
  }
  return unused_written_slot;
}

//----- (0000000140236E34) ----------------------------------------------------
__int64            sub_140236E34(int a1, int a2, _QWORD **a3)
{
  __int64 input_value;
  unsigned int unused_written_slot;
  unsigned int integer_sum;
  unsigned int loaded_word;
       unsigned __int16 *returned_pointer;

  input_value = a1;
  unused_written_slot = 0;
  integer_sum = a1 + 1;
  if ( a3 )
  {
    if ( integer_sum <= 0x100 )
    {
      loaded_word = *(unsigned __int16 *)(**a3 + 2LL * a1);
      return a2 & loaded_word;
    }
  }
  else
  {
    returned_pointer = sub_140256DC0();
    if ( integer_sum <= 0x100 )
    {
      loaded_word = returned_pointer[input_value];
      return a2 & loaded_word;
    }
  }
  return unused_written_slot;
}

//----- (0000000140236E98) ----------------------------------------------------
__int64            sub_140236E98(unsigned int a1, int a2, int a3)
{
  if ( a1 && (a1 == a2 || a1 == a3) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return a1;
}

// 140236ECF: control flows out of bounds to 140236ED4

//----- (0000000140236ED8) ----------------------------------------------------
__int64            crt_isctype_l(unsigned int a1, __int16 a2, struct __crt_locale_pointers *a3)
{
  __int64 input_value;
  unsigned int unused_written_slot;
  unsigned int integer_sum;
  __int64 loaded_word;
       unsigned __int16 *returned_pointer;

  input_value = (int)a1;
  unused_written_slot = 0;
  integer_sum = a1 + 1;
  if ( a3 )
  {
    loaded_word = *(_QWORD *)a3;
    if ( integer_sum > 0x100 )
    {
      if ( *(int *)(loaded_word + 8) <= 1 )
        return 0;
      else
        return isctype_l(a1, a2, a3);
    }
    else
    {
      return (unsigned __int16)(a2 & *(_WORD *)(*(_QWORD *)loaded_word + 2LL * (int)a1));
    }
  }
  else
  {
    returned_pointer = sub_140256DC0();
    if ( integer_sum <= 0x100 )
      return (unsigned __int16)(a2 & returned_pointer[input_value]);
    return unused_written_slot;
  }
}

//----- (0000000140236F50) ----------------------------------------------------
__int64            sub_140236F50(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    crt_memcpy(a1, a3, a4);
    return 0;
  }
  crt_memset((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  if ( a2 < a4 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_5;
  }
  return 22;
}

//----- (0000000140236FF0) ----------------------------------------------------
__int64            strncmp_sr(const char *left, const char *right, unsigned __int64 a3)
{
  const _QWORD *a1 = (const _QWORD *)(const void *)left;
  uintptr_t a2 = (uintptr_t)right;
  uintptr_t integer_difference;
  unsigned __int8 loaded_word;
  uint64_t loaded_word_2;
  bool comparison_result;

  integer_difference = a2 - (_QWORD)a1;
  if ( !a3 )
    return 0;
  if ( ((uintptr_t)a1 & 7) != 0 )
    goto comp_head_loop_begin;
_qword_loop_begin:
  while ( ((integer_difference + (uintptr_t)a1) & 0xFFFu) <= 0xFF8 )
  {
    loaded_word_2 = *a1;
    if ( *a1 != *(_QWORD *)((char *)a1 + integer_difference) )
      break;
    ++a1;
    comparison_result = a3 <= 8;
    a3 -= 8LL;
    if ( comparison_result || ((loaded_word_2 - 0x101010101010101LL) & ~loaded_word_2 & 0x8080808080808080uLL) != 0 )
      return 0;
  }
comp_head_loop_begin:
  while ( 1 )
  {
    loaded_word = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 != *((_BYTE *)a1 + integer_difference) )
      return -(__int64)(loaded_word < *((_BYTE *)a1 + integer_difference)) | 1;
    a1 = (_QWORD *)((char *)a1 + 1);
    if ( !--a3 || !loaded_word )
      return 0;
    if ( ((uintptr_t)a1 & 7) == 0 )
      goto _qword_loop_begin;
  }
}

// 140236FF0: invalid function type 'int __cdecl strncmp(const char *Str1, const char *Str2, #66 MaxCount)' has been ignored

//----- (0000000140237078) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_675(_DWORD *a1, int a2)
{
  unsigned __int64 result;
  _DWORD *buffer_cursor;
  __int64 i;

  result = (unsigned __int64)(a1 + 1);
  if ( a1 < a1 + 1 )
  {
    buffer_cursor = a1;
    result = a2;
    for ( i = a1 < a1 + 1; i; --i )
      *buffer_cursor++ = a2;
  }
  return result;
}

//----- (00000001402370A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_676(_DWORD *a1, int a2)
{
  unsigned __int64 result;
  _DWORD *buffer_cursor;
  __int64 i;

  result = (unsigned __int64)(a1 + 1);
  if ( a1 < a1 + 1 )
  {
    buffer_cursor = a1;
    result = a2;
    for ( i = a1 < a1 + 1; i; --i )
      *buffer_cursor++ = a2;
  }
  return result;
}

//----- (0000000140237118) ----------------------------------------------------
unsigned int *sub_140237118()
{
  return &g_144CBE6C4;
}

//----- (0000000140237120) ----------------------------------------------------
unsigned int *sub_140237120()
{
  return &g_144CBE6C8;
}

//----- (0000000140237128) ----------------------------------------------------
unsigned int *sub_140237128()
{
  return &g_144CBE6C0;
}

//----- (0000000140237130) ----------------------------------------------------
__int64 sub_140237130()
{
  return g_144CBE6D0;
}

//----- (0000000140237138) ----------------------------------------------------
__int64            sub_140237138(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = g_144CBE6C4;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (0000000140237168) ----------------------------------------------------
__int64            sub_140237168(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = g_144CBE6C8;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (0000000140237198) ----------------------------------------------------
__int64            sub_140237198(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = g_144CBE6C0;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (00000001402371C8) ----------------------------------------------------
__int64            sub_1402371C8(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, signed int a4)
{
  __int64 iteration_count;
  unsigned __int64 integer_sum;

  if ( a2 )
  {
    if ( a3 )
      goto LABEL_3;
LABEL_12:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  if ( a3 )
    goto LABEL_12;
LABEL_3:
  if ( a2 )
    *a2 = 0;
  if ( !a1 || (unsigned int)a4 > 1 )
    goto LABEL_12;
  iteration_count = -1;
  do
    ++iteration_count;
  while ( *(_BYTE *)(*(_QWORD *)(g_144CBE6D0 + 8LL * a4) + iteration_count) );
  integer_sum = iteration_count + 1;
  *a1 = integer_sum;
  if ( !a2 )
    return 0;
  if ( integer_sum <= a3 )
    return strcpy_s_sr(a2, a3, *(_QWORD *)(g_144CBE6D0 + 8LL * a4));
  return 34;
}

//----- (0000000140237268) ----------------------------------------------------
__int64            sub_140237268(unsigned int *a1)
{
  int call_result;
  unsigned int integer_difference;
  __int64 selection_flag;

  selection_flag = 0;
  call_result = sub_1402372E4(&selection_flag, 1);
  integer_difference = selection_flag;
  if ( call_result != 1 )
    integer_difference = -1;
  if ( a1 )
    *a1 = integer_difference;
  return integer_difference;
}

//----- (00000001402372A4) ----------------------------------------------------
__int64            sub_1402372A4(__int64 *a1)
{
  int call_result;
  __int64 integer_difference;
  __int64 scratch_buffer[3];

  scratch_buffer[0] = 0;
  call_result = sub_140237378((__int64)scratch_buffer, 1);
  integer_difference = scratch_buffer[0];
  if ( call_result != 1 )
    integer_difference = -1;
  if ( a1 )
    *a1 = integer_difference;
  return integer_difference;
}

//----- (00000001402372E4) ----------------------------------------------------
__int64            sub_1402372E4(_DWORD *a1, int a2)
{
  __int64 integer_difference;
  __int64 selection_flag;

  if ( !a1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  selection_flag = 0;
  sub_14024F1F8((__int64)&selection_flag);
  integer_difference = selection_flag - 116444736000000000LL;
  if ( selection_flag - 116444736000000000LL >= 21474720000000000LL )
    return 0;
  *a1 = integer_difference / 10000000;
  a1[1] = 100 * (integer_difference % 10000000);
  return 1;
}

//----- (0000000140237378) ----------------------------------------------------
__int64            sub_140237378(__int64 a1, int a2)
{
  int integer_sum;
  __int64 integer_quotient;
  __int64 selection_flag;

  if ( !a1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  selection_flag = 0;
  sub_14024F1F8((__int64)&selection_flag);
  integer_sum = selection_flag + 717324288;
  integer_quotient = (selection_flag - 116444736000000000LL) / 10000000 + selection_flag - 116444736000000000LL;
  if ( integer_quotient > 0x793582AFFLL )
    return 0;
  *(_QWORD *)a1 = integer_quotient;
  *(_DWORD *)(a1 + 8) = 100 * (integer_sum - 10000000 * integer_quotient);
  return 1;
}

//----- (000000014023740C) ----------------------------------------------------
__int64            sub_14023740C(unsigned int *a1)
{
  int call_result;
  unsigned int integer_difference;
  __int64 selection_flag;

  selection_flag = 0;
  call_result = sub_1402372E4(&selection_flag, 1);
  integer_difference = selection_flag;
  if ( call_result != 1 )
    integer_difference = -1;
  if ( a1 )
    *a1 = integer_difference;
  return integer_difference;
}

//----- (0000000140237448) ----------------------------------------------------
__int64            sub_140237448(__int64 *a1)
{
  int call_result;
  __int64 integer_difference;
  __int64 scratch_buffer[3];

  scratch_buffer[0] = 0;
  call_result = sub_140237378((__int64)scratch_buffer, 1);
  integer_difference = scratch_buffer[0];
  if ( call_result != 1 )
    integer_difference = -1;
  if ( a1 )
    *a1 = integer_difference;
  return integer_difference;
}

//----- (00000001402374E4) ----------------------------------------------------
bool            sub_1402374E4(int a1)
{
  return !(a1 % 4) && a1 != 100 * (a1 / 100) || a1 + 1900 == 400 * ((a1 + 1900) / 400);
}

//----- (0000000140237544) ----------------------------------------------------
__int64            sub_140237544(struct tm *     a1)
{
  unsigned int selection_flag;
  int loaded_word;
  int hiword_result;
  int loword_result;
  int hiword_result_2;
  int loword_result_2;
  __int64 hiword_result_3;
  int table_value;
  int hiword_result_4;
  int selection_flag_2;
  int loword_result_3;
  int hiword_result_5;
  int selection_code;
  int loaded_word_2;
  int record_word_offset;
  int selection_flag_3;

  selection_flag = 0;
  selection_flag_3 = 0;
  if ( (unsigned int)sub_140237138(&selection_flag_3) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  if ( !selection_flag_3 )
    return 0;
  loaded_word = *((_DWORD *)a1 + 5);
  if ( loaded_word != dword_140302280 || loaded_word != dword_140302290 )
  {
    if ( g_144CBE6E0 )
    {
      if ( LOWORD(g_144CBE788) )
      {
        hiword_result = HIWORD(g_144CBE794);
        loword_result = LOWORD(g_144CBE794);
        hiword_result_2 = HIWORD(g_144CBE790);
        loword_result_2 = LOWORD(g_144CBE790);
        hiword_result_3 = HIWORD(g_144CBE788);
        if ( sub_1402374E4(loaded_word) )
          table_value = dword_14028BF4C[hiword_result_3];
        else
          table_value = dword_14028BF14[hiword_result_3];
        dword_140302280 = loaded_word;
        dword_140302284 = table_value + HIWORD(g_144CBE78C);
        dword_140302288 = hiword_result + 1000 * (loword_result + 60 * (hiword_result_2 + 60 * loword_result_2));
      }
      else
      {
        sub_140237880(
          0,
          1,
          loaded_word,
          HIWORD(g_144CBE788),
          HIWORD(g_144CBE78C),
          LOWORD(g_144CBE78C),
          0,
          LOWORD(g_144CBE790),
          HIWORD(g_144CBE790),
          LOWORD(g_144CBE794),
          HIWORD(g_144CBE794));
      }
      if ( LOWORD(g_144CBE734) )
      {
        hiword_result_5 = HIWORD(g_144CBE738);
        selection_flag_2 = 0;
        hiword_result_4 = 0;
        loword_result_3 = 0;
      }
      else
      {
        hiword_result_4 = HIWORD(g_144CBE738);
        selection_flag_2 = 1;
        loword_result_3 = LOWORD(g_144CBE738);
        hiword_result_5 = 0;
      }
      sub_140237880(
        1,
        selection_flag_2,
        *((_DWORD *)a1 + 5),
        HIWORD(g_144CBE734),
        hiword_result_4,
        loword_result_3,
        hiword_result_5,
        LOWORD(g_144CBE73C),
        HIWORD(g_144CBE73C),
        LOWORD(g_144CBE740),
        HIWORD(g_144CBE740));
    }
    else
    {
      sub_140237880(0, 1, loaded_word, (loaded_word < 107) + 3, (loaded_word >= 107) + 1, 0, 0, 2, 0, 0, 0);
      selection_code = 5;
      if ( loaded_word >= 107 )
        selection_code = 1;
      sub_140237880(1, 1, *((_DWORD *)a1 + 5), (loaded_word >= 107) + 10, selection_code, 0, 0, 2, 0, 0, 0);
    }
  }
  loaded_word_2 = *((_DWORD *)a1 + 7);
  if ( dword_140302284 >= dword_140302294 )
  {
    if ( loaded_word_2 < dword_140302294 || loaded_word_2 > dword_140302284 )
      return 1;
    if ( loaded_word_2 <= dword_140302294 || loaded_word_2 >= dword_140302284 )
      goto LABEL_29;
    return 0;
  }
  if ( loaded_word_2 < dword_140302284 || loaded_word_2 > dword_140302294 )
    return 0;
  if ( loaded_word_2 > dword_140302284 && loaded_word_2 < dword_140302294 )
    return 1;
LABEL_29:
  record_word_offset = 1000 * (*(_DWORD *)a1 + 60 * (*((_DWORD *)a1 + 1) + 60 * *((_DWORD *)a1 + 2)));
  if ( loaded_word_2 == dword_140302284 )
    LOBYTE(selection_flag) = record_word_offset >= dword_140302288;
  else
    LOBYTE(selection_flag) = record_word_offset < dword_140302298;
  return selection_flag;
}

// 140237830: control flows out of bounds to 140237835

//----- (0000000140237838) ----------------------------------------------------
unsigned int *           sub_140237838(unsigned int a1)
{
  unsigned int *result;

  result = sub_140237118();
  *result = a1;
  return result;
}

//----- (0000000140237850) ----------------------------------------------------
unsigned int *           sub_140237850(unsigned int a1)
{
  unsigned int *result;

  result = sub_140237120();
  *result = a1;
  return result;
}

//----- (0000000140237868) ----------------------------------------------------
unsigned int *           sub_140237868(unsigned int a1)
{
  unsigned int *result;

  result = sub_140237128();
  *result = a1;
  return result;
}

//----- (0000000140237880) ----------------------------------------------------
__int64            sub_140237880(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 input_value;
  bool call_result;
  bool condition_flag;
  int table_value;
  int integer_sum;
  int integer_quotient;
  int scaled_index;
  int table_value_2;
  int integer_difference;
  int table_value_3;
  __int64 result;
  bool comparison_result;
  int selection_flag;

  selection_flag = 0;
  input_value = a4;
  call_result = sub_1402374E4(a3);
  condition_flag = call_result;
  if ( a2 == 1 )
  {
    if ( call_result )
      table_value = dword_14028BF4C[input_value];
    else
      table_value = dword_14028BF14[input_value];
    integer_sum = table_value + 1;
    integer_quotient = (365 * a3 - 25563 + (a3 + 299) / 400 - (a3 - 1) / 100 + integer_sum + (a3 - 1) / 4) % 7;
    scaled_index = a6 + integer_sum + 7 * a5 - integer_quotient - 7;
    if ( integer_quotient > a6 )
      scaled_index = a6 + integer_sum + 7 * a5 - integer_quotient;
    if ( condition_flag )
      table_value_2 = dword_14028BF50[input_value];
    else
      table_value_2 = dword_14028BF18[input_value];
    integer_difference = scaled_index;
    if ( a5 == 5 && scaled_index > table_value_2 )
      integer_difference = scaled_index - 7;
  }
  else
  {
    if ( call_result )
      table_value_3 = dword_14028BF4C[input_value];
    else
      table_value_3 = dword_14028BF14[input_value];
    integer_difference = a7 + table_value_3;
  }
  result = (unsigned int)(a9 + 60 * a8);
  if ( !a1 )
  {
    dword_140302284 = integer_difference;
    dword_140302288 = a11 + 1000 * (a10 + 60 * result);
    dword_140302280 = a3;
    return result;
  }
  dword_140302298 = a11 + 1000 * (a10 + 60 * result);
  dword_140302294 = integer_difference;
  if ( (unsigned int)sub_140237168(&selection_flag) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  comparison_result = 1000 * selection_flag + dword_140302298 < 0;
  result = (unsigned int)(1000 * selection_flag + dword_140302298);
  dword_140302298 += 1000 * selection_flag;
  if ( comparison_result )
  {
    result = (unsigned int)(result + 86400000);
    --dword_140302294;
LABEL_24:
    dword_140302298 = result;
    goto LABEL_25;
  }
  if ( (int)result >= 86400000 )
  {
    result = (unsigned int)(result - 86400000);
    ++dword_140302294;
    goto LABEL_24;
  }
LABEL_25:
  dword_140302290 = a3;
  return result;
}

// 140237A6F: control flows out of bounds to 140237A74

//----- (0000000140237A80) ----------------------------------------------------
char *           get_tz_environment_variable(char (*a1)[256])
{
  int getenv_s_sr_result;
  _BYTE *malloc_base_result;
  void *saved_malloc_base_result;
  void *record_pointer;
  unsigned __int64 RequiredCount;
  unsigned __int64 callee_output_word;

  getenv_s_sr_result = getenv_s_sr(&RequiredCount, (char *)a1, 0x100u, (__int64)"TZ");
  if ( !getenv_s_sr_result )
    return *a1;
  if ( getenv_s_sr_result != 34 )
    return nullptr;
  malloc_base_result = (_BYTE *)malloc_base(RequiredCount);
  saved_malloc_base_result = malloc_base_result;
  if ( !malloc_base_result || (unsigned int)getenv_s_sr(&callee_output_word, malloc_base_result, RequiredCount, (__int64)"TZ") )
  {
    record_pointer = nullptr;
  }
  else
  {
    record_pointer = saved_malloc_base_result;
    saved_malloc_base_result = nullptr;
  }
  free_base(saved_malloc_base_result);
  return (char *)record_pointer;
}

//----- (0000000140237B08) ----------------------------------------------------
void            sub_140237B08(char *Source)
{
  __int64 call_result;
  __int64 cached_call_result;
  __int64 element_index;
  __int64 element_index_2;
  __int64 remaining_count;
  char scaled_index;
  char *cached_source;
  int unknown_libname_852_result;
  int unknown_libname_852_result_2;
  char input_byte;
  char input_byte_2;
  int unknown_libname_852_result_3;
  bool comparison_result;
  unsigned int saved_running_total;
  unsigned int saved_comparison_result;
  int saved_unknown_libname_852_result;
  BOOL comparison_result_2;

  call_result = sub_140237130();
  saved_unknown_libname_852_result = 0;
  comparison_result_2 = 0;
  cached_call_result = call_result;
  if ( (unsigned int)sub_140237198(&saved_unknown_libname_852_result) || (unsigned int)sub_140237138(&comparison_result_2) )
    goto LABEL_37;
  if ( !g_144CBE6D8 || strcmp_sr(Source, *(     char **)(unsigned int *)&g_144CBE6D8) )
  {
    free_base(*(void **)&g_144CBE6D8);
    element_index = -1;
    element_index_2 = -1;
    do
      ++element_index_2;
    while ( Source[element_index_2] );
    g_144CBE6D8 = malloc_base(element_index_2 + 1);
    free_base(nullptr);
    if ( g_144CBE6D8 )
    {
      do
        ++element_index;
      while ( Source[element_index] );
      if ( !(unsigned int)strcpy_s_sr(g_144CBE6D8, element_index + 1, Source) )
      {
        remaining_count = 3;
        if ( !(unsigned int)strncpy_s_sr(*(_QWORD *)cached_call_result, 64, Source, 3) )
        {
          do
          {
            if ( !*Source )
              break;
            ++Source;
            --remaining_count;
          }
          while ( remaining_count );
          scaled_index = *Source;
          cached_source = Source + 1;
          if ( *Source != 45 )
            cached_source = Source;
          unknown_libname_852_result = 3600 * unknown_libname_852((__int64)cached_source);
          saved_unknown_libname_852_result = unknown_libname_852_result;
          while ( *cached_source == 43 || (unsigned __int8)(*cached_source - 48) <= 9u )
            ++cached_source;
          if ( *cached_source == 58 )
          {
            unknown_libname_852_result_2 = 60 * unknown_libname_852((__int64)++cached_source);
            input_byte = *cached_source;
            unknown_libname_852_result = unknown_libname_852_result_2 + saved_unknown_libname_852_result;
            saved_unknown_libname_852_result += unknown_libname_852_result_2;
            if ( input_byte >= 48 )
            {
              input_byte_2 = input_byte;
              do
              {
                input_byte = input_byte_2;
                if ( input_byte_2 > 57 )
                  break;
                input_byte = *++cached_source;
                input_byte_2 = *cached_source;
              }
              while ( *cached_source >= 48 );
            }
            if ( input_byte == 58 )
            {
              unknown_libname_852_result_3 = unknown_libname_852((__int64)++cached_source);
              unknown_libname_852_result = unknown_libname_852_result_3 + saved_unknown_libname_852_result;
              saved_unknown_libname_852_result += unknown_libname_852_result_3;
              while ( *cached_source >= 48 && *cached_source <= 57 )
                ++cached_source;
            }
          }
          if ( scaled_index == 45 )
            saved_unknown_libname_852_result = -unknown_libname_852_result;
          comparison_result = *cached_source == 0;
          comparison_result_2 = *cached_source != 0;
          if ( comparison_result )
          {
            **(_BYTE **)(cached_call_result + 8) = 0;
LABEL_35:
            saved_running_total = saved_unknown_libname_852_result;
            *sub_140237128() = saved_running_total;
            saved_comparison_result = comparison_result_2;
            *sub_140237118() = saved_comparison_result;
            return;
          }
          if ( !(unsigned int)strncpy_s_sr(*(_QWORD *)(cached_call_result + 8), 64, cached_source, 3) )
            goto LABEL_35;
        }
      }
LABEL_37:
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
}

// 140237D08: control flows out of bounds to 140237D0D

//----- (0000000140237D10) ----------------------------------------------------
unsigned int *tzset_from_system_nolock()
{
  __int64 call_result;
  __int64 *record_pointer;
  int selection_flag;
  unsigned int scaled_index;
  unsigned int call_result_2;
  unsigned int cached_scaled_index;
  unsigned int cached_callee_output_word;
  unsigned int cached_callee_output_word_2;
  unsigned int *result;
  __int64 packed_word_bits = 0;
  __int64 packed_word_bits_2 = 0;
  unsigned int scaled_index_2;
  int callee_output_word;
  unsigned int callee_output_word_2;
  unsigned int callee_output_word_3;

  call_result = sub_140237130();
  scaled_index_2 = 0;
  record_pointer = (__int64 *)call_result;
  callee_output_word_2 = 0;
  callee_output_word_3 = 0;
  if ( (unsigned int)sub_140237198(&scaled_index_2) || (unsigned int)sub_140237138(&callee_output_word_2) || (unsigned int)sub_140237168(&callee_output_word_3) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  free_base(*(void **)&g_144CBE6D8);
  g_144CBE6D8 = 0;
  if ( (unsigned int)((__int64 (           *)(unsigned int *))GetTimeZoneInformation)(&g_144CBE6F0) != -1 )
  {
    selection_flag = 1;
    g_144CBE6E0 = 1;
    scaled_index_2 = 60 * g_144CBE6F0;
    if ( HIWORD(g_144CBE734) )
      scaled_index_2 = 60 * g_144CBE6F0 + 60 * g_144CBE744;
    if ( HIWORD(g_144CBE788) && g_144CBE798 )
    {
      scaled_index = 60 * (g_144CBE798 - g_144CBE744);
    }
    else
    {
      scaled_index = 0;
      selection_flag = 0;
    }
    callee_output_word_2 = selection_flag;
    callee_output_word_3 = scaled_index;
    call_result_2 = sub_140258CA0();
    LODWORD(packed_word_bits) = 63;
    if ( !(unsigned int)crt_wide_char_to_multi_byte(
                          call_result_2,
                          0,
                          (__int64)&g_144CBE6F4,
                          0xFFFFFFFFLL,
                          *record_pointer,
                          packed_word_bits,
                          0,
                          (__int64)&callee_output_word)
      || callee_output_word )
    {
      *(_BYTE *)*record_pointer = 0;
    }
    else
    {
      *(_BYTE *)(*record_pointer + 63) = 0;
    }
    LODWORD(packed_word_bits_2) = 63;
    if ( !(unsigned int)crt_wide_char_to_multi_byte(
                          call_result_2,
                          0,
                          (__int64)&g_144CBE748,
                          0xFFFFFFFFLL,
                          record_pointer[1],
                          packed_word_bits_2,
                          0,
                          (__int64)&callee_output_word)
      || callee_output_word )
    {
      *(_BYTE *)record_pointer[1] = 0;
    }
    else
    {
      *(_BYTE *)(record_pointer[1] + 63) = 0;
    }
  }
  cached_scaled_index = scaled_index_2;
  *sub_140237128() = cached_scaled_index;
  cached_callee_output_word = callee_output_word_2;
  *sub_140237118() = cached_callee_output_word;
  cached_callee_output_word_2 = callee_output_word_3;
  result = sub_140237120();
  *result = cached_callee_output_word_2;
  return result;
}

//----- (0000000140237EB8) ----------------------------------------------------
void sub_140237EB8()
{
  int getenv_s_sr_result;
  char *cached_buffer;
  char *allocated_buffer;
  char *saved_cached_buffer;
  char *saved_cached_buffer_2;
  __int64 unused_local;
  unsigned __int64 Size;
  unsigned __int64 RequiredCount;
  char Buffer[256];
  __int64 unused_local_2;

  dword_140302290 = -1;
  g_144CBE6E0 = 0;
  dword_140302280 = -1;
  getenv_s_sr_result = getenv_s_sr(&Size, Buffer, 0x100u, (__int64)"TZ");
  if ( !getenv_s_sr_result )
  {
    cached_buffer = Buffer;
    goto LABEL_11;
  }
  if ( getenv_s_sr_result != 34 )
    goto LABEL_4;
  allocated_buffer = (char *)sr_path_malloc(Size);
  cached_buffer = allocated_buffer;
  if ( !allocated_buffer )
  {
    saved_cached_buffer = nullptr;
LABEL_7:
    free_base(saved_cached_buffer);
LABEL_4:
    cached_buffer = nullptr;
    goto LABEL_11;
  }
  if ( (unsigned int)getenv_s_sr(&RequiredCount, allocated_buffer, Size, (__int64)"TZ") )
  {
    saved_cached_buffer = cached_buffer;
    goto LABEL_7;
  }
  free_base(nullptr);
LABEL_11:
  saved_cached_buffer_2 = cached_buffer;
  if ( cached_buffer == Buffer )
    saved_cached_buffer_2 = nullptr;
  if ( cached_buffer && *cached_buffer )
    sub_140237B08(cached_buffer);
  else
    tzset_from_system_nolock();
  free_base(saved_cached_buffer_2);
  return;
}

//----- (0000000140237FC0) ----------------------------------------------------
__int64 sub_140237FC0()
{
  __int64 result;

  result = g_144CBE79C;
  if ( !g_144CBE79C )
  {
    crt_lock(6);
    if ( !g_144CBE79C )
    {
      sub_140237EB8();
      _InterlockedIncrement((volatile signed __int32 *)&g_144CBE79C);
    }
    return crt_unlock(6);
  }
  return result;
}

//----- (0000000140238000) ----------------------------------------------------
void            sub_140238000(int a1)
{
  if ( a1 )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
}

// 14023802B: control flows out of bounds to 140238030

//----- (0000000140238034) ----------------------------------------------------
__int64            sub_140238034(struct tm *a1)
{
  crt_lock(6);
  LODWORD(a1) = sub_140237544(a1);
  crt_unlock(6);
  return (unsigned int)a1;
}

//----- (0000000140238064) ----------------------------------------------------
void         sub_140238064()
{
  crt_lock(6);
  sub_140237EB8();
  crt_unlock(6);
}

//----- (000000014023808C) ----------------------------------------------------
__int64            sub_14023808C(_BYTE *a1, __int64 a2)
{
  __int64 malloc_base_result;
  __int64 result;
  int multi_byte_to_wide_char_result;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 saved_multi_byte_to_wide_char_result;
  unsigned int int64_result;
  __int64 malloc_base_result_2;
  __int64 cached_multi_byte_to_wide_char_result;
  int multi_byte_to_wide_char_result_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
    if ( multi_byte_to_wide_char_result )
    {
      if ( (unsigned __int64)multi_byte_to_wide_char_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        malloc_base_result_2 = malloc_base(2 * saved_multi_byte_to_wide_char_result);
        *(_QWORD *)(a2 + 16) = malloc_base_result_2;
        cached_multi_byte_to_wide_char_result = 0;
        result = malloc_base_result_2 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          cached_multi_byte_to_wide_char_result = saved_multi_byte_to_wide_char_result;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = cached_multi_byte_to_wide_char_result;
        if ( (_DWORD)result )
          return result;
      }
      multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
      if ( multi_byte_to_wide_char_result_2 )
      {
        *(_QWORD *)(a2 + 32) = multi_byte_to_wide_char_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (           *)(__int64, __int64))GetLastError)(unrecovered_register_value_2, unrecovered_register_value);
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  malloc_base_result = malloc_base(2);
  *(_QWORD *)(a2 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_WORD **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238208) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_d8593a27d1aa8c02be35c86a17d324c4_____crt_win32_buffer_internal_dynamic_resizing(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 malloc_base_result;
  __int64 result;
  int wide_char_to_multi_byte_result;
  unsigned __int64 saved_wide_char_to_multi_byte_result;
  unsigned int int64_result;
  unsigned __int64 loaded_word;
  __int64 malloc_base_result_2;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    saved_wide_char_to_multi_byte_result = wide_char_to_multi_byte_result;
    if ( wide_char_to_multi_byte_result )
    {
      loaded_word = *(_QWORD *)(a2 + 24);
      if ( wide_char_to_multi_byte_result > loaded_word )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        malloc_base_result_2 = malloc_base(saved_wide_char_to_multi_byte_result);
        *(_QWORD *)(a2 + 16) = malloc_base_result_2;
        loaded_word = 0;
        result = malloc_base_result_2 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          loaded_word = saved_wide_char_to_multi_byte_result;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = loaded_word;
        if ( (_DWORD)result )
          return result;
      }
      LODWORD(packed_word_bits_2) = loaded_word;
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_2, 0, 0);
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  malloc_base_result = malloc_base(1);
  *(_QWORD *)(a2 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238394) ----------------------------------------------------
__int64            sub_140238394(_BYTE *a1, __int64 a2)
{
  unsigned int unused_written_slot;
  __int64 malloc_base_result;
  unsigned int comparison_result;
  int multi_byte_to_wide_char_result;
  __int64 unrecovered_register_value;
  __int64 saved_multi_byte_to_wide_char_result;
  __int64 saved_multi_byte_to_wide_char_result_2;
  unsigned int int64_result;
  __int64 malloc_base_result_2;
  __int64 cached_multi_byte_to_wide_char_result;
  __int64 integer_difference;
  int multi_byte_to_wide_char_result_2;

  unused_written_slot = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    saved_multi_byte_to_wide_char_result_2 = multi_byte_to_wide_char_result;
    if ( multi_byte_to_wide_char_result )
    {
      if ( (unsigned __int64)multi_byte_to_wide_char_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        malloc_base_result_2 = malloc_base(2 * saved_multi_byte_to_wide_char_result_2);
        *(_QWORD *)(a2 + 16) = malloc_base_result_2;
        cached_multi_byte_to_wide_char_result = 0;
        integer_difference = -malloc_base_result_2;
        comparison_result = integer_difference == 0 ? 0xC : 0;
        if ( (integer_difference == 0 ? 0xC : 0) == 0 )
          cached_multi_byte_to_wide_char_result = saved_multi_byte_to_wide_char_result_2;
        *(_BYTE *)(a2 + 40) = comparison_result == 0;
        *(_QWORD *)(a2 + 24) = cached_multi_byte_to_wide_char_result;
        if ( (integer_difference == 0 ? 0xC : 0) != 0 )
          return comparison_result;
      }
      multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
      saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result_2;
      if ( multi_byte_to_wide_char_result_2 )
      {
        *(_QWORD *)(a2 + 32) = multi_byte_to_wide_char_result_2 - 1LL;
        return unused_written_slot;
      }
    }
    int64_result = ((__int64 (           *)(__int64, __int64))GetLastError)(saved_multi_byte_to_wide_char_result, unrecovered_register_value);
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    malloc_base_result = malloc_base(2);
    *(_QWORD *)(a2 + 16) = malloc_base_result;
    comparison_result = malloc_base_result == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = comparison_result == 0;
    *(_QWORD *)(a2 + 24) = comparison_result == 0;
    if ( (malloc_base_result == 0 ? 0xC : 0) != 0 )
      return comparison_result;
  }
  **(_WORD **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return unused_written_slot;
}

//----- (000000014023850C) ----------------------------------------------------
__int64            __acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
        _WORD *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int unused_written_slot;
  __int64 allocated_buffer;
  unsigned int comparison_result;
  int wide_char_to_multi_byte_result;
  unsigned __int64 allocation_size;
  unsigned int int64_result;
  unsigned __int64 saved_allocation_size;
  __int64 allocated_buffer_2;
  __int64 integer_difference;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits = 0;
  __int64 packed_word_bits_2 = 0;

  unused_written_slot = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    allocation_size = wide_char_to_multi_byte_result;
    if ( wide_char_to_multi_byte_result )
    {
      saved_allocation_size = *(_QWORD *)(a2 + 24);
      if ( wide_char_to_multi_byte_result > saved_allocation_size )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        allocated_buffer_2 = sr_path_malloc(allocation_size);
        *(_QWORD *)(a2 + 16) = allocated_buffer_2;
        saved_allocation_size = 0;
        integer_difference = -allocated_buffer_2;
        comparison_result = integer_difference == 0 ? 0xC : 0;
        if ( (integer_difference == 0 ? 0xC : 0) == 0 )
          saved_allocation_size = allocation_size;
        *(_BYTE *)(a2 + 40) = comparison_result == 0;
        *(_QWORD *)(a2 + 24) = saved_allocation_size;
        if ( (integer_difference == 0 ? 0xC : 0) != 0 )
          return comparison_result;
      }
      LODWORD(packed_word_bits_2) = saved_allocation_size;
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_2, 0, 0);
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return unused_written_slot;
      }
    }
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    allocated_buffer = sr_path_malloc(1);
    *(_QWORD *)(a2 + 16) = allocated_buffer;
    comparison_result = allocated_buffer == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = comparison_result == 0;
    *(_QWORD *)(a2 + 24) = comparison_result == 0;
    if ( (allocated_buffer == 0 ? 0xC : 0) != 0 )
      return comparison_result;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return unused_written_slot;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238698) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata32_t___finddata32_t(_BYTE *a1, _DWORD *a2, unsigned int a3)
{
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _DWORD scratch_buffer_2[136];
  __int64 unused_local_2;

  if ( a2 )
  {
    scratch_buffer[0] = 0;
    scratch_buffer[1] = 0;
    Block = nullptr;
    unused_written_slot = 0;
    unused_written_slot_2 = 0;
    selection_flag = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)scratch_buffer) && sub_1402389D8((__int64)Block, scratch_buffer_2) != -1 )
      sub_140239710((__int64)scratch_buffer_2, a2, a3);
    if ( selection_flag )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

//----- (0000000140238768) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata32i64_t___finddata32i64_t(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _BYTE scratch_buffer_2[544];
  __int64 unused_local_2;

  if ( a2 )
  {
    scratch_buffer[0] = 0;
    scratch_buffer[1] = 0;
    Block = nullptr;
    unused_written_slot = 0;
    unused_written_slot_2 = 0;
    selection_flag = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)scratch_buffer) && sub_140238B20((__int64)Block, (__int64)scratch_buffer_2) != -1 )
      sub_1402397C0((__int64)scratch_buffer_2, a2, a3);
    if ( selection_flag )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

//----- (0000000140238838) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata64_t____finddata64_t(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _BYTE scratch_buffer_2[560];
  __int64 unused_local_2;

  if ( a2 )
  {
    scratch_buffer[0] = 0;
    scratch_buffer[1] = 0;
    Block = nullptr;
    unused_written_slot = 0;
    unused_written_slot_2 = 0;
    selection_flag = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)scratch_buffer) && sub_140238C74((__int64)Block, (__int64)scratch_buffer_2) != -1 )
      sub_140239870((__int64)scratch_buffer_2, a2, a3);
    if ( selection_flag )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

//----- (0000000140238908) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata64i32_t___finddata64i32_t(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _BYTE scratch_buffer_2[560];
  __int64 unused_local_2;

  if ( a2 )
  {
    scratch_buffer[0] = 0;
    scratch_buffer[1] = 0;
    Block = nullptr;
    unused_written_slot = 0;
    unused_written_slot_2 = 0;
    selection_flag = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)scratch_buffer) && sub_140238DC8((__int64)Block, (__int64)scratch_buffer_2) != -1 )
      sub_140239928((__int64)scratch_buffer_2, a2, a3);
    if ( selection_flag )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

//----- (00000001402389D8) ----------------------------------------------------
__int64            sub_1402389D8(__int64 a1, _DWORD *a2)
{
  unsigned int int64_result;
  int cached_findfiledata;
  _QWORD scratch_buffer[5];
  int FindFileData;
  _DWORD scratch_buffer_2[2];
  _DWORD scratch_buffer_3[2];
  _DWORD scratch_buffer_4[6];
  _BYTE Source[548];
  __int64 unused_local;

  if ( a2 && a1 )
  {
    __int64 sr_handle = ((__int64 (           *)(__int64, _QWORD, int *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
           a1,
           0,
           &FindFileData,
           0,
           0,
           0); /* mov rdi, rax */
    if ( sr_handle == -1 )
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      if ( int64_result >= 2 )
      {
        if ( int64_result <= 3 )
          goto LABEL_12;
        if ( int64_result == 8 )
        {
          *errno_sr() = 12;
          return -1; /* or rax, 0xffffffffffffffff */
        }
        if ( int64_result == 18 )
        {
LABEL_12:
          *errno_sr() = 2;
          return -1; /* or rax, 0xffffffffffffffff */
        }
      }
      *errno_sr() = 22;
    }
    else
    {
      cached_findfiledata = FindFileData;
      if ( FindFileData == 128 )
        cached_findfiledata = 0;
      *a2 = cached_findfiledata;
      a2[1] = sub_140239580(scratch_buffer_2);
      a2[2] = sub_140239580(scratch_buffer_3);
      a2[3] = sub_140239580(scratch_buffer_4);
      a2[4] = scratch_buffer_4[3];
      if ( (unsigned int)sub_140259444((_WORD *)a2 + 10, 260, (__int64)Source) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      return sr_handle; /* mov rax, rdi */
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return -1; /* or rax, 0xffffffffffffffff */
}

// 140238B17: control flows out of bounds to 140238B1C
// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238B20) ----------------------------------------------------
__int64            sub_140238B20(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  int cached_findfiledata;
  int call_result;
  unsigned __int64 shifted_bits;
  _QWORD scratch_buffer[5];
  int FindFileData;
  _DWORD scratch_buffer_2[2];
  _DWORD scratch_buffer_3[2];
  _DWORD scratch_buffer_4[6];
  _BYTE Source[548];
  __int64 unused_local;

  if ( a2 && a1 )
  {
    __int64 sr_handle = ((__int64 (           *)(__int64, _QWORD, int *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
           a1,
           0,
           &FindFileData,
           0,
           0,
           0); /* mov rdi, rax */
    if ( sr_handle == -1 )
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      if ( int64_result >= 2 )
      {
        if ( int64_result <= 3 )
          goto LABEL_12;
        if ( int64_result == 8 )
        {
          *errno_sr() = 12;
          return -1; /* or rax, 0xffffffffffffffff */
        }
        if ( int64_result == 18 )
        {
LABEL_12:
          *errno_sr() = 2;
          return -1; /* or rax, 0xffffffffffffffff */
        }
      }
      *errno_sr() = 22;
    }
    else
    {
      cached_findfiledata = FindFileData;
      if ( FindFileData == 128 )
        cached_findfiledata = 0;
      *(_DWORD *)a2 = cached_findfiledata;
      *(_DWORD *)(a2 + 4) = sub_140239580(scratch_buffer_2);
      *(_DWORD *)(a2 + 8) = sub_140239580(scratch_buffer_3);
      call_result = sub_140239580(scratch_buffer_4);
      shifted_bits = (unsigned __int64)scratch_buffer_4[2] << 32;
      *(_DWORD *)(a2 + 12) = call_result;
      *(_QWORD *)(a2 + 16) = scratch_buffer_4[3] + shifted_bits;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 24), 260, (__int64)Source) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      return sr_handle; /* mov rax, rdi */
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return -1; /* or rax, 0xffffffffffffffff */
}

// 140238C6B: control flows out of bounds to 140238C70
// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238C74) ----------------------------------------------------
__int64            sub_140238C74(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  int cached_findfiledata;
  __int64 call_result;
  unsigned __int64 shifted_bits;
  _QWORD scratch_buffer[5];
  int FindFileData;
  _DWORD scratch_buffer_2[2];
  _DWORD scratch_buffer_3[2];
  _DWORD scratch_buffer_4[6];
  _BYTE scratch_buffer_5[548];
  __int64 unused_local;

  if ( a2 && a1 )
  {
    __int64 sr_handle = ((__int64 (           *)(__int64, _QWORD, int *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
           a1,
           0,
           &FindFileData,
           0,
           0,
           0); /* mov rdi, rax */
    if ( sr_handle == -1 )
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      if ( int64_result >= 2 )
      {
        if ( int64_result <= 3 )
          goto LABEL_12;
        if ( int64_result == 8 )
        {
          *errno_sr() = 12;
          return -1; /* or rax, 0xffffffffffffffff */
        }
        if ( int64_result == 18 )
        {
LABEL_12:
          *errno_sr() = 2;
          return -1; /* or rax, 0xffffffffffffffff */
        }
      }
      *errno_sr() = 22;
    }
    else
    {
      cached_findfiledata = FindFileData;
      if ( FindFileData == 128 )
        cached_findfiledata = 0;
      *(_DWORD *)a2 = cached_findfiledata;
      *(_QWORD *)(a2 + 8) = sub_140239610(scratch_buffer_2);
      *(_QWORD *)(a2 + 16) = sub_140239610(scratch_buffer_3);
      call_result = sub_140239610(scratch_buffer_4);
      shifted_bits = (unsigned __int64)scratch_buffer_4[2] << 32;
      *(_QWORD *)(a2 + 24) = call_result;
      *(_QWORD *)(a2 + 32) = scratch_buffer_4[3] + shifted_bits;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 40), 260, (__int64)scratch_buffer_5) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        __debugbreak();
      }
      return sr_handle; /* mov rax, rdi */
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return -1; /* or rax, 0xffffffffffffffff */
}

// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238DC8)
__int64 sub_140238DC8(__int64 a1,__int64 a2)
{
 WIN32_FIND_DATAW data;
 if(!a1 || !a2){*errno_sr()=22;crt_invalid_parameter_noinfo();return -1;}
 HANDLE handle=FindFirstFileExW((LPCWSTR)(uintptr_t)a1,FindExInfoStandard,&data,FindExSearchNameMatch,NULL,0);
 if(handle==INVALID_HANDLE_VALUE){
   DWORD error=GetLastError();
   *errno_sr()=error==8?12:((error==2 || error==3 || error==18)?2:22);
   return -1;
 }
 *(_DWORD *)a2=data.dwFileAttributes==128?0:data.dwFileAttributes;
 *(_QWORD *)(a2+8)=sub_140239610((_DWORD *)&data.ftCreationTime);
 *(_QWORD *)(a2+16)=sub_140239610((_DWORD *)&data.ftLastAccessTime);
 *(_QWORD *)(a2+24)=sub_140239610((_DWORD *)&data.ftLastWriteTime);
 *(_DWORD *)(a2+32)=data.nFileSizeLow;
 if((unsigned int)sub_140259444((_WORD *)(a2+36),260,(__int64)(uintptr_t)data.cFileName)){
   crt_invoke_watson();__debugbreak();
 }
 return (__int64)(intptr_t)handle;
}

//----- (0000000140238F10) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata32_t___finddata32_t(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 unused_local;
  _DWORD scratch_buffer[136];
  __int64 unused_local_2;

  if ( (unsigned int)sub_1402390C0(a1, scratch_buffer) != -1 )
    sub_140239710((__int64)scratch_buffer, a2, a3);
  return 0; /* the function has no caller */
}

//----- (0000000140238F7C) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata32i64_t___finddata32i64_t(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 unused_local;
  _BYTE scratch_buffer[544];
  __int64 unused_local_2;

  if ( (unsigned int)sub_1402391E4(a1, (__int64)scratch_buffer) != -1 )
    sub_1402397C0((__int64)scratch_buffer, a2, a3);
  return 0; /* the function has no caller */
}

//----- (0000000140238FE8) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata64_t____finddata64_t(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 unused_local;
  _BYTE scratch_buffer[560];
  __int64 unused_local_2;

  if ( (unsigned int)sub_140239314(a1, (__int64)scratch_buffer) != -1 )
    sub_140239870((__int64)scratch_buffer, a2, a3);
  return 0; /* the function has no caller */
}

//----- (0000000140239054) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata64i32_t___finddata64i32_t(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 unused_local;
  _BYTE scratch_buffer[560];
  __int64 unused_local_2;

  if ( (unsigned int)sub_140239448(a1, (__int64)scratch_buffer) != -1 )
    sub_140239928((__int64)scratch_buffer, a2, a3);
  return 0; /* the function has no caller */
}

//----- (00000001402390C0) ----------------------------------------------------
__int64            sub_1402390C0(__int64 a1, _DWORD *a2)
{
  unsigned int int64_result;
  int table_value;
  _QWORD scratch_buffer[6];
  _DWORD FindFileData[148];
  __int64 unused_local;

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      table_value = FindFileData[0];
      if ( FindFileData[0] == 128 )
        table_value = 0;
      *a2 = table_value;
      a2[1] = sub_140239580(&FindFileData[1]);
      a2[2] = sub_140239580(&FindFileData[3]);
      a2[3] = sub_140239580(&FindFileData[5]);
      a2[4] = FindFileData[8];
      if ( (unsigned int)sub_140259444((_WORD *)a2 + 10, 260, (__int64)&FindFileData[11]) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        __debugbreak();
      }
      return 0; /* the name copy returned 0 and nothing wrote eax since */
    }
    else
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      if ( int64_result >= 2 )
      {
        if ( int64_result <= 3 )
          goto LABEL_13;
        if ( int64_result == 8 )
        {
          *errno_sr() = 12;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
        if ( int64_result == 18 )
        {
LABEL_13:
          *errno_sr() = 2;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
      }
      *errno_sr() = 22;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return (unsigned int)-1; /* or eax, 0xffffffff */
}

// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001402391E4) ----------------------------------------------------
__int64            sub_1402391E4(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  int table_value;
  int call_result;
  unsigned __int64 shifted_bits;
  _QWORD scratch_buffer[6];
  _DWORD FindFileData[148];
  __int64 unused_local;

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      table_value = FindFileData[0];
      if ( FindFileData[0] == 128 )
        table_value = 0;
      *(_DWORD *)a2 = table_value;
      *(_DWORD *)(a2 + 4) = sub_140239580(&FindFileData[1]);
      *(_DWORD *)(a2 + 8) = sub_140239580(&FindFileData[3]);
      call_result = sub_140239580(&FindFileData[5]);
      shifted_bits = (unsigned __int64)FindFileData[7] << 32;
      *(_DWORD *)(a2 + 12) = call_result;
      *(_QWORD *)(a2 + 16) = FindFileData[8] + shifted_bits;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 24), 260, (__int64)&FindFileData[11]) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        __debugbreak();
      }
      return 0; /* the name copy returned 0 and nothing wrote eax since */
    }
    else
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      if ( int64_result >= 2 )
      {
        if ( int64_result <= 3 )
          goto LABEL_13;
        if ( int64_result == 8 )
        {
          *errno_sr() = 12;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
        if ( int64_result == 18 )
        {
LABEL_13:
          *errno_sr() = 2;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
      }
      *errno_sr() = 22;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return (unsigned int)-1; /* or eax, 0xffffffff */
}

// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140239314) ----------------------------------------------------
__int64            sub_140239314(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  int table_value;
  __int64 call_result;
  unsigned __int64 shifted_bits;
  _QWORD scratch_buffer[6];
  _DWORD FindFileData[148];
  __int64 unused_local;

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      table_value = FindFileData[0];
      if ( FindFileData[0] == 128 )
        table_value = 0;
      *(_DWORD *)a2 = table_value;
      *(_QWORD *)(a2 + 8) = sub_140239610(&FindFileData[1]);
      *(_QWORD *)(a2 + 16) = sub_140239610(&FindFileData[3]);
      call_result = sub_140239610(&FindFileData[5]);
      shifted_bits = (unsigned __int64)FindFileData[7] << 32;
      *(_QWORD *)(a2 + 24) = call_result;
      *(_QWORD *)(a2 + 32) = FindFileData[8] + shifted_bits;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 40), 260, (__int64)&FindFileData[11]) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      return 0; /* the name copy returned 0 and nothing wrote eax since */
    }
    else
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      if ( int64_result >= 2 )
      {
        if ( int64_result <= 3 )
          goto LABEL_13;
        if ( int64_result == 8 )
        {
          *errno_sr() = 12;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
        if ( int64_result == 18 )
        {
LABEL_13:
          *errno_sr() = 2;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
      }
      *errno_sr() = 22;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return (unsigned int)-1; /* or eax, 0xffffffff */
}

// 140239441: control flows out of bounds to 140239446
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140239448) ----------------------------------------------------
__int64            sub_140239448(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  int table_value;
  unsigned int status=0xffffffffu;
  _QWORD scratch_buffer[6];
  _DWORD FindFileData[148];
  __int64 unused_local;

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      status=0;
      table_value = FindFileData[0];
      if ( FindFileData[0] == 128 )
        table_value = 0;
      *(_DWORD *)a2 = table_value;
      *(_QWORD *)(a2 + 8) = sub_140239610(&FindFileData[1]);
      *(_QWORD *)(a2 + 16) = sub_140239610(&FindFileData[3]);
      *(_QWORD *)(a2 + 24) = sub_140239610(&FindFileData[5]);
      *(_DWORD *)(a2 + 32) = FindFileData[8];
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 36), 260, (__int64)&FindFileData[11]) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
    else
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      if ( int64_result >= 2 )
      {
        if ( int64_result <= 3 )
          goto LABEL_13;
        if ( int64_result == 8 )
        {
          *errno_sr() = 12;
          return 0xffffffffu;
        }
        if ( int64_result == 18 )
        {
LABEL_13:
          *errno_sr() = 2;
          return 0xffffffffu;
        }
      }
      *errno_sr() = 22;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return status;
}

// 140239569: control flows out of bounds to 14023956E
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140239580) ----------------------------------------------------
__int64            sub_140239580(_DWORD *a1)
{
  __int64 unused_local;
  _WORD LocalTime[8];
  __int128 SystemTime;
  __int64 unused_local_2;

  if ( (*a1 || a1[1])
    && (unsigned int)((__int64 (           *)(_DWORD *, __int128 *))FileTimeToSystemTime)(a1, &SystemTime)
    && (unsigned int)((__int64 (           *)(_QWORD, __int128 *, _WORD *))SystemTimeToTzSpecificLocalTime)(
                       0,
                       &SystemTime,
                       LocalTime) )
  {
    return _loctotime32_t_sr(LocalTime[0], LocalTime[1], LocalTime[3], LocalTime[4], LocalTime[5], LocalTime[6], -1); /* 0x1402395F2: the call's result stays in rax */
  }
  return (unsigned int)-1; /* 0x1402395F9: or eax, 0xffffffff */
}

// 14026E1C0: invalid function type 'BOOL (__stdcall *FileTimeToSystemTime)(const FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime)' has been ignored
// 14026E1C8: invalid function type 'BOOL (__stdcall *SystemTimeToTzSpecificLocalTime)(const TIME_ZONE_INFORMATION *lpTimeZoneInformation, const SYSTEMTIME *lpUniversalTime, LPSYSTEMTIME lpLocalTime)' has been ignored

//----- (0000000140239610)
__int64 sub_140239610(_DWORD *a1)
{
 SYSTEMTIME utc,local;
 if((a1[0] || a1[1]) && FileTimeToSystemTime((const FILETIME *)a1,&utc) &&
    SystemTimeToTzSpecificLocalTime(NULL,&utc,&local))
   return _loctotime64_t_sr(local.wYear,local.wMonth,local.wDay,local.wHour,local.wMinute,local.wSecond,-1);
 return -1;
}

//----- (00000001402396A0) ----------------------------------------------------
__int64            convert_system_time_to_time_t__long(unsigned __int16 *a1)
{
  return _loctotime32_t_sr(*a1, a1[1], a1[3], a1[4], a1[5], a1[6], -1);
}

//----- (00000001402396D8) ----------------------------------------------------
__int64            convert_system_time_to_time_t____int64(unsigned __int16 *a1)
{
  return _loctotime64_t_sr(*a1, a1[1], a1[3], a1[4], a1[5], a1[6], -1);
}

//----- (0000000140239710) ----------------------------------------------------
char            sub_140239710(__int64 a1, _DWORD *a2, unsigned int a3)
{
  char unused_written_slot;
  _QWORD scratch_buffer[2];
  char *Source;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  char selection_flag;

  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  Source = nullptr;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  selection_flag = 0;
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
                       (_WORD *)(a1 + 20),
                       (__int64)scratch_buffer,
                       a3) )
  {
    unused_written_slot = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s_sr(a2 + 5, 260, Source) )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    *a2 = *(_DWORD *)a1;
    a2[1] = *(_DWORD *)(a1 + 4);
    a2[2] = *(_DWORD *)(a1 + 8);
    a2[3] = *(_DWORD *)(a1 + 12);
    a2[4] = *(_DWORD *)(a1 + 16);
    unused_written_slot = 1;
  }
  if ( selection_flag )
    free_base(Source);
  return unused_written_slot;
}

// 1402397B7: control flows out of bounds to 1402397BC

//----- (00000001402397C0) ----------------------------------------------------
char            sub_1402397C0(__int64 a1, __int64 a2, unsigned int a3)
{
  char unused_written_slot;
  _QWORD scratch_buffer[2];
  char *Source;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  char selection_flag;

  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  Source = nullptr;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  selection_flag = 0;
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
                       (_WORD *)(a1 + 24),
                       (__int64)scratch_buffer,
                       a3) )
  {
    unused_written_slot = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s_sr(a2 + 24, 260, Source) )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
    unused_written_slot = 1;
  }
  if ( selection_flag )
    free_base(Source);
  return unused_written_slot;
}

// 140239869: control flows out of bounds to 14023986E

//----- (0000000140239870) ----------------------------------------------------
char            sub_140239870(__int64 a1, __int64 a2, unsigned int a3)
{
  char unused_written_slot;
  _QWORD scratch_buffer[2];
  char *Source;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  char selection_flag;

  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  Source = nullptr;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  selection_flag = 0;
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
                       (_WORD *)(a1 + 40),
                       (__int64)scratch_buffer,
                       a3) )
  {
    unused_written_slot = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s_sr(a2 + 40, 260, Source) )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
    unused_written_slot = 1;
  }
  if ( selection_flag )
    free_base(Source);
  return unused_written_slot;
}

// 14023991F: control flows out of bounds to 140239924

//----- (0000000140239928)
char sub_140239928(__int64 a1,__int64 a2,unsigned int a3)
{
 sr_find_buffer path={0};
 char result=0;
 if(!(unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
      (_WORD *)(a1+36),(__int64)(uintptr_t)&path,a3)){
   if((unsigned int)strcpy_s_sr(a2+36,260,path.buffer)){
     crt_invoke_watson();__debugbreak();
   }
   *(_DWORD *)a2=*(_DWORD *)a1;
   *(_QWORD *)(a2+8)=*(_QWORD *)(a1+8);
   *(_QWORD *)(a2+16)=*(_QWORD *)(a1+16);
   *(_QWORD *)(a2+24)=*(_QWORD *)(a1+24);
   *(_DWORD *)(a2+32)=*(_DWORD *)(a1+32);
   result=1;
 }
 if(path.owned)free_base(path.buffer);
 return result;
}

//----- (0000000140239A14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_681(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (0000000140239A38) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_682(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (0000000140239A5C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_683()
{
  return crt_multi_byte_to_wide_char();
}

//----- (0000000140239A84) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_684(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = a5;
  return crt_wide_char_to_multi_byte(a2, 0, a3, 0xFFFFFFFFLL, a4, packed_word_bits, 0, 0);
}

//----- (0000000140239AB4) ----------------------------------------------------
__int64 sub_140239AB4()
{
  unsigned int unused_written_slot;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  unused_written_slot = 65001;
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) != 65001 )
    unused_written_slot = sub_14024EDA4() == 0;
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return unused_written_slot;
}

//----- (0000000140239B00) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_685(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (0000000140239B24) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_686(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (0000000140239B48) ----------------------------------------------------
__int64            __crt_win32_buffer__char____crt_win32_buffer_internal_dynamic_resizing__allocate(
        __int64 a1,
        __int64 a2)
{
  __int64 malloc_base_result;
  __int64 result;

  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  malloc_base_result = malloc_base(a2);
  *(_QWORD *)(a1 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = a2;
    return 0;
  }
  return result;
}

//----- (0000000140239BA4) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_internal_dynamic_resizing__allocate(
        __int64 a1,
        __int64 a2)
{
  __int64 malloc_base_result;
  __int64 result;

  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  malloc_base_result = malloc_base(2 * a2);
  *(_QWORD *)(a1 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = a2;
    return 0;
  }
  return result;
}

//----- (0000000140239C00) ----------------------------------------------------
__int64            sub_140239C00(__int64 *a1, __int64 a2)
{
  __int64 malloc_base_result;

  malloc_base_result = malloc_base(a2);
  *a1 = malloc_base_result;
  return malloc_base_result == 0 ? 0xC : 0;
}

//----- (0000000140239C54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_992(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}

//----- (0000000140239C88) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_993(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}

//----- (0000000140239CCC) ----------------------------------------------------
__int64 sub_140239CCC(__int64 handle)
{
  if ( (unsigned int)FindClose((HANDLE)(intptr_t)handle) )
    return 0;
  *errno_sr() = 22;
  return 0xFFFFFFFFLL;
}

// 140239CCC: invalid function type 'int __cdecl sub_140239CCC(intptr_t FindHandle)' has been ignored
// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (0000000140239CF4) ----------------------------------------------------
__int64            sub_140239CF4(_BYTE *a1, _DWORD *a2)
{
  unsigned int selection_code;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _QWORD scratch_buffer_2[3];
  char unrecovered_register_value;
  _DWORD scratch_buffer_3[136];
  __int64 unused_local_2;

  crt_locale_update((_LocaleUpdate *)scratch_buffer_2, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer_2[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0; /* the function has no caller */
  }
  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  Block = nullptr;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  selection_flag = 0;
  if ( (unsigned int)sub_140238394(a1, (__int64)scratch_buffer) )
  {
    if ( !selection_flag )
      return 0; /* the function has no caller */
    goto LABEL_22;
  }
  if ( sub_1402389D8((__int64)Block, scratch_buffer_3) == -1 || !sub_140239710((__int64)scratch_buffer_3, a2, selection_code) )
  {
    if ( selection_flag )
      goto LABEL_22;
  }
  else if ( selection_flag )
  {
LABEL_22:
    free_base(Block);
  }
  return 0; /* the function has no caller */
}

// 140239CF4: invalid function type 'intptr_t __cdecl sub_140239CF4(const char *FileName, struct _finddata32_t *FindData)' has been ignored

//----- (0000000140239E80) ----------------------------------------------------
__int64            sub_140239E80(_BYTE *a1, __int64 a2)
{
  unsigned int selection_code;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _QWORD scratch_buffer_2[3];
  char unrecovered_register_value;
  _BYTE scratch_buffer_3[544];
  __int64 unused_local_2;

  crt_locale_update((_LocaleUpdate *)scratch_buffer_2, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer_2[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0; /* the function has no caller */
  }
  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  Block = nullptr;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  selection_flag = 0;
  if ( (unsigned int)sub_140238394(a1, (__int64)scratch_buffer) )
  {
    if ( !selection_flag )
      return 0; /* the function has no caller */
    goto LABEL_22;
  }
  if ( sub_140238B20((__int64)Block, (__int64)scratch_buffer_3) == -1 || !sub_1402397C0((__int64)scratch_buffer_3, a2, selection_code) )
  {
    if ( selection_flag )
      goto LABEL_22;
  }
  else if ( selection_flag )
  {
LABEL_22:
    free_base(Block);
  }
  return 0; /* the function has no caller */
}

// 140239E80: invalid function type 'intptr_t __cdecl sub_140239E80(const char *FileName, struct _finddata32i64_t *FindData)' has been ignored

//----- (000000014023A00C) ----------------------------------------------------
__int64            sub_14023A00C(_BYTE *a1, __int64 a2)
{
  unsigned int selection_code;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _QWORD scratch_buffer_2[3];
  char unrecovered_register_value;
  _BYTE scratch_buffer_3[560];
  __int64 unused_local_2;

  crt_locale_update((_LocaleUpdate *)scratch_buffer_2, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer_2[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0; /* the function has no caller */
  }
  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  Block = nullptr;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  selection_flag = 0;
  if ( (unsigned int)sub_140238394(a1, (__int64)scratch_buffer) )
  {
    if ( !selection_flag )
      return 0; /* the function has no caller */
    goto LABEL_22;
  }
  if ( sub_140238C74((__int64)Block, (__int64)scratch_buffer_3) == -1 || !sub_140239870((__int64)scratch_buffer_3, a2, selection_code) )
  {
    if ( selection_flag )
      goto LABEL_22;
  }
  else if ( selection_flag )
  {
LABEL_22:
    free_base(Block);
  }
  return 0; /* the function has no caller */
}

//----- (000000014023A198)
__int64 sub_14023A198(_BYTE *a1,__int64 a2)
{
 struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
 sr_find_buffer path={0};
 unsigned char wide[560];
 unsigned int cp=65001;
 __int64 result=-1;
 crt_locale_update((_LocaleUpdate *)&locale,NULL);
 if(*(_DWORD *)(locale.locale+12)!=65001)cp=(unsigned int)sub_14024EDA4()?0:1;
 if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
 if(!a2){*errno_sr()=22;crt_invalid_parameter_noinfo();return -1;}
 if(!(unsigned int)sr_path_mbs(a1,(__int64)(uintptr_t)&path,cp)){
   __int64 handle=sub_140238DC8((__int64)(uintptr_t)path.buffer,(__int64)(uintptr_t)wide);
   if(handle!=-1 && sub_140239928((__int64)(uintptr_t)wide,a2,cp))result=handle;
 }
 if(path.owned)free_base(path.buffer);
 return result;
}

//----- (000000014023A324) ----------------------------------------------------
__int64            sub_14023A324(__int64 a1, _DWORD *a2)
{
  unsigned int selection_code;
  __int64 unused_local;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  _DWORD scratch_buffer_2[136];
  __int64 unused_local_2;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  if ( (unsigned int)sub_1402390C0(a1, scratch_buffer_2) != -1 )
    sub_140239710((__int64)scratch_buffer_2, a2, selection_code);
  return 0; /* the function has no caller */
}

//----- (000000014023A404) ----------------------------------------------------
__int64            sub_14023A404(__int64 a1, __int64 a2)
{
  unsigned int selection_code;
  __int64 unused_local;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  _BYTE scratch_buffer_2[544];
  __int64 unused_local_2;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  if ( (unsigned int)sub_1402391E4(a1, (__int64)scratch_buffer_2) != -1 )
    sub_1402397C0((__int64)scratch_buffer_2, a2, selection_code);
  return 0; /* the function has no caller */
}

//----- (000000014023A4E4) ----------------------------------------------------
__int64            sub_14023A4E4(__int64 a1, __int64 a2)
{
  unsigned int selection_code;
  __int64 unused_local;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  _BYTE scratch_buffer_2[560];
  __int64 unused_local_2;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  if ( (unsigned int)sub_140239314(a1, (__int64)scratch_buffer_2) != -1 )
    sub_140239870((__int64)scratch_buffer_2, a2, selection_code);
  return 0; /* the function has no caller */
}

//----- (000000014023A5C4)
__int64 sub_14023A5C4(__int64 a1,__int64 a2)
{
 struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
 unsigned char wide[560];
 unsigned int cp=65001,result=0xffffffffu;
 crt_locale_update((_LocaleUpdate *)&locale,NULL);
 if(*(_DWORD *)(locale.locale+12)!=65001)cp=(unsigned int)sub_14024EDA4()?0:1;
 if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
 unsigned int status=(unsigned int)sub_140239448(a1,(__int64)(uintptr_t)wide);
 if(status!=0xffffffffu && sub_140239928((__int64)(uintptr_t)wide,a2,cp))result=status;
 return result;
}

//----- (000000014023A6E4) ----------------------------------------------------
__int64            sub_14023A6E4(unsigned int a1, unsigned int a2, struct __crt_locale_pointers *a3)
{
  __int64 result;
  unsigned int byte1_result;
  int selection_code;
  int *unused_written_slot;
  int masked_bits;
  __int64 callee_output_word;
  __int128 packed_vector;
  char unrecovered_register_value;
  char byte1_result_2;
  char unused_written_slot_2;
  char unused_written_slot_3;
  __int64 callee_output_word_2;

  result = 0xFFFFFFFFLL;
  byte1_result = a1;
  if ( a1 != -1 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a3);
    if ( byte1_result >= 0x100 )
    {
      unused_written_slot_3 = 0;
      if ( *(int *)(packed_vector + 8) > 1 && (unsigned int)isleadbyte_l(BYTE1(byte1_result), &packed_vector) )
      {
        byte1_result_2 = BYTE1(byte1_result);
        selection_code = 2;
        unused_written_slot_2 = byte1_result;
        unused_written_slot_3 = 0;
      }
      else
      {
        unused_written_slot = errno_sr();
        selection_code = 1;
        *unused_written_slot = 42;
        byte1_result_2 = byte1_result;
        unused_written_slot_2 = 0;
      }
      LOWORD(callee_output_word_2) = 0;
      BYTE2(callee_output_word_2) = 0;
      masked_bits = sub_14025A004(
             (struct __crt_locale_pointers *)&packed_vector,
             *(_QWORD *)(packed_vector + 312),
             a2,
             (__int64)&byte1_result_2,
             selection_code,
             &callee_output_word_2,
             3,
             *(_DWORD *)(packed_vector + 12),
             1);
      if ( masked_bits )
      {
        byte1_result = (unsigned __int8)callee_output_word_2;
        if ( masked_bits != 1 )
          byte1_result = BYTE1(callee_output_word_2) | ((unsigned __int8)callee_output_word_2 << 8);
      }
    }
    else
    {
      byte1_result = *(unsigned __int8 *)(*(_QWORD *)(packed_vector + 272) + (unsigned __int8)byte1_result);
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
    return byte1_result;
  }
  return result;
}

//----- (000000014023A7F8) ----------------------------------------------------
__int64            sub_14023A7F8(unsigned int a1, unsigned int a2, struct __crt_locale_pointers *a3)
{
  __int64 result;
  unsigned int byte1_result;
  int selection_code;
  int *unused_written_slot;
  int masked_bits;
  __int64 callee_output_word;
  __int128 packed_vector;
  char unrecovered_register_value;
  char byte1_result_2;
  char unused_written_slot_2;
  char unused_written_slot_3;
  __int64 callee_output_word_2;

  result = 0xFFFFFFFFLL;
  byte1_result = a1;
  if ( a1 != -1 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a3);
    if ( byte1_result >= 0x100 )
    {
      unused_written_slot_3 = 0;
      if ( *(int *)(packed_vector + 8) > 1 && (unsigned int)isleadbyte_l(BYTE1(byte1_result), &packed_vector) )
      {
        byte1_result_2 = BYTE1(byte1_result);
        selection_code = 2;
        unused_written_slot_2 = byte1_result;
        unused_written_slot_3 = 0;
      }
      else
      {
        unused_written_slot = errno_sr();
        selection_code = 1;
        *unused_written_slot = 42;
        byte1_result_2 = byte1_result;
        unused_written_slot_2 = 0;
      }
      LOWORD(callee_output_word_2) = 0;
      BYTE2(callee_output_word_2) = 0;
      masked_bits = sub_14025A004(
             (struct __crt_locale_pointers *)&packed_vector,
             *(_QWORD *)(packed_vector + 312),
             a2,
             (__int64)&byte1_result_2,
             selection_code,
             &callee_output_word_2,
             3,
             *(_DWORD *)(packed_vector + 12),
             1);
      if ( masked_bits )
      {
        byte1_result = (unsigned __int8)callee_output_word_2;
        if ( masked_bits != 1 )
          byte1_result = BYTE1(callee_output_word_2) | ((unsigned __int8)callee_output_word_2 << 8);
      }
    }
    else
    {
      byte1_result = *(unsigned __int8 *)(*(_QWORD *)(packed_vector + 280) + (unsigned __int8)byte1_result);
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
    return byte1_result;
  }
  return result;
}

//----- (000000014023A90C) ----------------------------------------------------
__int64            sub_14023A90C(int a1, unsigned int a2, struct __crt_locale_pointers *     a3)
{
  __int64 loaded_word;
  int shifted_bits;
  int selection_code;
  int *unused_written_slot;
  __int64 loaded_word_2;
  int masked_bits;
  __int64 result;
  bool comparison_result;
  char saved_shifted_bits;
  char unused_written_slot_2;
  char unused_written_slot_3;
  __int64 callee_output_word;

  loaded_word = *(_QWORD *)a3;
  unused_written_slot_3 = 0;
  if ( *(int *)(loaded_word + 8) > 1 && (shifted_bits = a1 >> 8, (unsigned int)isleadbyte_l(BYTE1(a1), a3)) )
  {
    saved_shifted_bits = shifted_bits;
    selection_code = 2;
    unused_written_slot_2 = a1;
    unused_written_slot_3 = 0;
  }
  else
  {
    unused_written_slot = errno_sr();
    selection_code = 1;
    *unused_written_slot = 42;
    saved_shifted_bits = a1;
    unused_written_slot_2 = 0;
  }
  loaded_word_2 = *(_QWORD *)a3;
  LOWORD(callee_output_word) = 0;
  BYTE2(callee_output_word) = 0;
  masked_bits = sub_14025A004(a3, *(_QWORD *)(loaded_word_2 + 312), a2, (__int64)&saved_shifted_bits, selection_code, &callee_output_word, 3, *(_DWORD *)(loaded_word_2 + 12), 1);
  if ( !masked_bits )
    return (unsigned int)a1;
  comparison_result = masked_bits == 1;
  result = (unsigned __int8)callee_output_word;
  if ( !comparison_result )
    return BYTE1(callee_output_word) | ((unsigned __int8)callee_output_word << 8);
  return result;
}

//----- (000000014023A9FC) ----------------------------------------------------
__int64            sub_14023A9FC(unsigned int a1, struct __crt_locale_pointers *a2)
{
  unsigned int unused_written_slot;
  int selection_code;
  int *unused_written_slot_2;
  int masked_bits;
  __int64 callee_output_word;
  _QWORD scratch_buffer[2];
  char unrecovered_register_value;
  char byte1_result;
  char unused_written_slot_3;
  char unused_written_slot_4;
  __int64 callee_output_word_2;

  unused_written_slot = -1;
  if ( a1 != -1 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
    if ( a1 >= 0x100 )
    {
      unused_written_slot_4 = 0;
      if ( *(int *)(scratch_buffer[0] + 8LL) > 1 && (unsigned int)isleadbyte_l(BYTE1(a1), scratch_buffer) )
      {
        byte1_result = BYTE1(a1);
        selection_code = 2;
        unused_written_slot_3 = a1;
        unused_written_slot_4 = 0;
      }
      else
      {
        unused_written_slot_2 = errno_sr();
        selection_code = 1;
        *unused_written_slot_2 = 42;
        byte1_result = a1;
        unused_written_slot_3 = 0;
      }
      LOWORD(callee_output_word_2) = 0;
      BYTE2(callee_output_word_2) = 0;
      masked_bits = sub_14025A004(
             (struct __crt_locale_pointers *)scratch_buffer,
             *(_QWORD *)(scratch_buffer[0] + 312LL),
             0x100u,
             (__int64)&byte1_result,
             selection_code,
             &callee_output_word_2,
             3,
             *(_DWORD *)(scratch_buffer[0] + 12LL),
             1);
      if ( masked_bits )
      {
        unused_written_slot = (unsigned __int8)callee_output_word_2;
        if ( masked_bits != 1 )
          unused_written_slot = BYTE1(callee_output_word_2) | ((unsigned __int8)callee_output_word_2 << 8);
      }
      else
      {
        unused_written_slot = a1;
      }
      if ( unrecovered_register_value )
        *(_DWORD *)(callee_output_word + 936) &= ~2u;
    }
    else
    {
      unused_written_slot = *(unsigned __int8 *)(*(_QWORD *)(scratch_buffer[0] + 272LL) + (unsigned __int8)a1);
      if ( unrecovered_register_value )
        *(_DWORD *)(callee_output_word + 936) &= ~2u;
    }
  }
  return unused_written_slot;
}

//----- (000000014023AB50) ----------------------------------------------------
__int64            sub_14023AB50(unsigned int a1, struct __crt_locale_pointers *a2)
{
  unsigned int unused_written_slot;
  int selection_code;
  int *unused_written_slot_2;
  int masked_bits;
  __int64 callee_output_word;
  _QWORD scratch_buffer[2];
  char unrecovered_register_value;
  char byte1_result;
  char unused_written_slot_3;
  char unused_written_slot_4;
  __int64 callee_output_word_2;

  unused_written_slot = -1;
  if ( a1 != -1 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
    if ( a1 >= 0x100 )
    {
      unused_written_slot_4 = 0;
      if ( *(int *)(scratch_buffer[0] + 8LL) > 1 && (unsigned int)isleadbyte_l(BYTE1(a1), scratch_buffer) )
      {
        byte1_result = BYTE1(a1);
        selection_code = 2;
        unused_written_slot_3 = a1;
        unused_written_slot_4 = 0;
      }
      else
      {
        unused_written_slot_2 = errno_sr();
        selection_code = 1;
        *unused_written_slot_2 = 42;
        byte1_result = a1;
        unused_written_slot_3 = 0;
      }
      LOWORD(callee_output_word_2) = 0;
      BYTE2(callee_output_word_2) = 0;
      masked_bits = sub_14025A004(
             (struct __crt_locale_pointers *)scratch_buffer,
             *(_QWORD *)(scratch_buffer[0] + 312LL),
             0x200u,
             (__int64)&byte1_result,
             selection_code,
             &callee_output_word_2,
             3,
             *(_DWORD *)(scratch_buffer[0] + 12LL),
             1);
      if ( masked_bits )
      {
        unused_written_slot = (unsigned __int8)callee_output_word_2;
        if ( masked_bits != 1 )
          unused_written_slot = BYTE1(callee_output_word_2) | ((unsigned __int8)callee_output_word_2 << 8);
      }
      else
      {
        unused_written_slot = a1;
      }
      if ( unrecovered_register_value )
        *(_DWORD *)(callee_output_word + 936) &= ~2u;
    }
    else
    {
      unused_written_slot = *(unsigned __int8 *)(*(_QWORD *)(scratch_buffer[0] + 280LL) + (unsigned __int8)a1);
      if ( unrecovered_register_value )
        *(_DWORD *)(callee_output_word + 936) &= ~2u;
    }
  }
  return unused_written_slot;
}

//----- (000000014023AC8C) ----------------------------------------------------
int         tolower(int C)
{
  if ( g_144CBF178 )
    return sub_14023A9FC(C, nullptr);
  if ( (unsigned int)(C - 65) <= 0x19 )
    C += 32;
  return C;
}

//----- (000000014023ACB8) ----------------------------------------------------
int         toupper(int C)
{
  if ( g_144CBF178 )
    return sub_14023AB50(C, nullptr);
  if ( (unsigned int)(C - 97) <= 0x19 )
    C -= 32;
  return C;
}

//----- (000000014023ACE4) ----------------------------------------------------
void         free(void *Block)
{
  free_base(Block);
}

// 14023ACE4: ignored the value written to the shadow area of the succeeding call

//----- (000000014023ACF8) ----------------------------------------------------
// attributes: thunk
__int64            j__malloc_base()
{
  return malloc_base();
}

//----- (000000014023AD00) ----------------------------------------------------
// attributes: thunk
__int64            j__realloc_base_sr(__int64 a1, __int64 a2)
{
  return realloc_base(a1, a2);
}

//----- (000000014023AD10) ----------------------------------------------------
void            shortsort(char *a1, char *a2, __int64 a3, int (           *a4)(char *, char *))
{
  char *remaining_amount;
  char *state_address;
  char *cached_i;
  char *i;
  __int64 remaining_count;
  char *text_cursor;
  signed __int64 integer_difference;
  char table_value;

  if ( a2 > a1 )
  {
    remaining_amount = a2;
    state_address = &a1[a3];
    do
    {
      cached_i = a1;
      for ( i = state_address; i <= remaining_amount; i += a3 )
      {
        if ( a4(i, cached_i) > 0 )
          cached_i = i;
      }
      remaining_count = a3;
      text_cursor = remaining_amount;
      if ( cached_i != remaining_amount && a3 )
      {
        integer_difference = cached_i - remaining_amount;
        do
        {
          table_value = text_cursor[integer_difference];
          text_cursor[integer_difference] = *text_cursor;
          *text_cursor++ = table_value;
          --remaining_count;
        }
        while ( remaining_count );
      }
      remaining_amount -= a3;
    }
    while ( remaining_amount > a1 );
  }
}

//----- (000000014023AE00) ----------------------------------------------------
void            sub_14023AE00(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int (           *a4)(unsigned __int64, _BYTE *))
{
  unsigned __int64 saved_running_total;
  unsigned __int64 remaining_amount;
  __int64 remaining_count;
  unsigned __int64 integer_quotient;
  _BYTE *cached_i;
  unsigned __int64 i;
  unsigned __int64 remaining_count_2;
  _BYTE *buffer_cursor;
  _BYTE *state_address;
  char table_value;
  __int64 integer_difference;
  unsigned __int64 shifted_bits;
  _BYTE *byte_cursor;
  _BYTE *buffer_cursor_2;
  unsigned __int64 remaining_count_3;
  char integer_difference_2;
  unsigned __int64 remaining_count_4;
  _BYTE *buffer_cursor_3;
  unsigned __int64 integer_difference_3;
  char table_value_2;
  unsigned __int64 remaining_count_5;
  _BYTE *buffer_cursor_4;
  _BYTE *state_address_2;
  char table_value_3;
  unsigned __int64 running_total;
  unsigned __int64 remaining_amount_2;
  unsigned __int64 remaining_amount_3;
  _BYTE *buffer_cursor_5;
  unsigned __int64 integer_difference_4;
  char table_value_4;
  _BYTE *saved_running_total_2;
  __int64 unused_local;
  __int64 saved_remaining_count;
  _QWORD scratch_buffer[127];

  saved_running_total = a1;
  if ( (a1 || !a2) && a3 && a4 )
  {
    if ( a2 >= 2 )
    {
      remaining_amount = a1 + a3 * (a2 - 1);
      remaining_count = 0;
      saved_remaining_count = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          integer_quotient = (remaining_amount - saved_running_total) / a3 + 1;
          if ( integer_quotient <= 8 )
          {
            if ( remaining_amount > saved_running_total )
            {
              do
              {
                cached_i = (_BYTE *)saved_running_total;
                for ( i = a3 + saved_running_total; i <= remaining_amount; i += a3 )
                {
                  if ( a4(i, cached_i) > 0 )
                    cached_i = (_BYTE *)i;
                }
                remaining_count_2 = a3;
                buffer_cursor = (_BYTE *)remaining_amount;
                if ( cached_i != (_BYTE *)remaining_amount )
                {
                  state_address = &cached_i[-remaining_amount];
                  do
                  {
                    table_value = buffer_cursor[(_QWORD)state_address];
                    buffer_cursor[(_QWORD)state_address] = *buffer_cursor;
                    *buffer_cursor++ = table_value;
                    --remaining_count_2;
                  }
                  while ( remaining_count_2 );
                }
                remaining_amount -= a3;
              }
              while ( remaining_amount > saved_running_total );
              remaining_count = saved_remaining_count;
            }
            goto LABEL_19;
          }
          shifted_bits = a3 * (integer_quotient >> 1);
          byte_cursor = (_BYTE *)(shifted_bits + saved_running_total);
          if ( a4(saved_running_total, (_BYTE *)(shifted_bits + saved_running_total)) > 0 )
          {
            remaining_count_3 = a3;
            buffer_cursor_2 = (_BYTE *)(shifted_bits + saved_running_total);
            if ( (_BYTE *)saved_running_total != byte_cursor )
            {
              do
              {
                integer_difference_2 = buffer_cursor_2[-shifted_bits];
                buffer_cursor_2[-shifted_bits] = *buffer_cursor_2;
                *buffer_cursor_2++ = integer_difference_2;
                --remaining_count_3;
              }
              while ( remaining_count_3 );
            }
          }
          if ( a4(saved_running_total, (_BYTE *)remaining_amount) > 0 )
          {
            remaining_count_4 = a3;
            buffer_cursor_3 = (_BYTE *)remaining_amount;
            if ( saved_running_total != remaining_amount )
            {
              integer_difference_3 = saved_running_total - remaining_amount;
              do
              {
                table_value_2 = buffer_cursor_3[integer_difference_3];
                buffer_cursor_3[integer_difference_3] = *buffer_cursor_3;
                *buffer_cursor_3++ = table_value_2;
                --remaining_count_4;
              }
              while ( remaining_count_4 );
            }
          }
          if ( a4(shifted_bits + saved_running_total, (_BYTE *)remaining_amount) > 0 )
          {
            remaining_count_5 = a3;
            buffer_cursor_4 = (_BYTE *)remaining_amount;
            if ( byte_cursor != (_BYTE *)remaining_amount )
            {
              state_address_2 = &byte_cursor[-remaining_amount];
              do
              {
                table_value_3 = buffer_cursor_4[(_QWORD)state_address_2];
                buffer_cursor_4[(_QWORD)state_address_2] = *buffer_cursor_4;
                *buffer_cursor_4++ = table_value_3;
                --remaining_count_5;
              }
              while ( remaining_count_5 );
            }
          }
          running_total = saved_running_total;
          remaining_amount_2 = remaining_amount;
          while ( 1 )
          {
            if ( (unsigned __int64)byte_cursor > running_total )
            {
              while ( 1 )
              {
                running_total += a3;
                if ( running_total >= (unsigned __int64)byte_cursor )
                  break;
                if ( a4(running_total, byte_cursor) > 0 )
                {
                  if ( (unsigned __int64)byte_cursor > running_total )
                    goto LABEL_39;
                  goto LABEL_37;
                }
              }
            }
            do
LABEL_37:
              running_total += a3;
            while ( running_total <= remaining_amount
                 && a4(running_total, byte_cursor) <= 0 );
            do
            {
LABEL_39:
              remaining_amount_3 = remaining_amount_2;
              remaining_amount_2 -= a3;
            }
            while ( remaining_amount_2 > (unsigned __int64)byte_cursor && a4(remaining_amount_2, byte_cursor) > 0 );
            if ( remaining_amount_2 < running_total )
              break;
            remaining_count_5 = a3;
            buffer_cursor_5 = (_BYTE *)remaining_amount_2;
            if ( remaining_amount_2 != running_total )
            {
              integer_difference_4 = running_total - remaining_amount_2;
              do
              {
                table_value_4 = buffer_cursor_5[integer_difference_4];
                buffer_cursor_5[integer_difference_4] = *buffer_cursor_5;
                *buffer_cursor_5++ = table_value_4;
                --remaining_count_5;
              }
              while ( remaining_count_5 );
            }
            saved_running_total_2 = (_BYTE *)running_total;
            if ( byte_cursor != (_BYTE *)remaining_amount_2 )
              saved_running_total_2 = byte_cursor;
            byte_cursor = saved_running_total_2;
          }
          if ( (unsigned __int64)byte_cursor < remaining_amount_3 )
          {
            while ( 1 )
            {
              remaining_amount_3 -= a3;
              if ( remaining_amount_3 <= (unsigned __int64)byte_cursor )
                break;
              if ( a4(remaining_amount_3, byte_cursor) )
              {
                if ( (unsigned __int64)byte_cursor < remaining_amount_3 )
                  goto LABEL_54;
                goto LABEL_52;
              }
            }
          }
          do
LABEL_52:
            remaining_amount_3 -= a3;
          while ( remaining_amount_3 > saved_running_total && !a4(remaining_amount_3, byte_cursor) );
LABEL_54:
          remaining_count = saved_remaining_count;
          if ( (__int64)(remaining_amount_3 - saved_running_total) >= (__int64)(remaining_amount - running_total) )
            break;
          if ( running_total < remaining_amount )
          {
            scratch_buffer[saved_remaining_count] = running_total;
            scratch_buffer[remaining_count++ + 62] = remaining_amount;
            saved_remaining_count = remaining_count;
          }
          if ( saved_running_total >= remaining_amount_3 )
          {
LABEL_19:
            integer_difference = remaining_count--;
            saved_remaining_count = remaining_count;
            if ( integer_difference <= 0 )
              return;
            saved_running_total = scratch_buffer[remaining_count];
            remaining_amount = scratch_buffer[remaining_count + 62];
          }
          else
          {
            remaining_amount = remaining_amount_3;
          }
        }
        if ( saved_running_total < remaining_amount_3 )
        {
          scratch_buffer[saved_remaining_count] = saved_running_total;
          scratch_buffer[remaining_count++ + 62] = remaining_amount_3;
          saved_remaining_count = remaining_count;
        }
        if ( running_total >= remaining_amount )
          goto LABEL_19;
        saved_running_total = running_total;
      }
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return;
}

//----- (000000014023B1B0) ----------------------------------------------------
int         rand()
{
  unsigned __int64 call_result;
  unsigned int loaded_word;

  call_result = sub_140255A70();
  loaded_word = 214013 * *(_DWORD *)(call_result + 40) + 2531011;
  *(_DWORD *)(call_result + 40) = loaded_word;
  return HIWORD(loaded_word) & 0x7FFF;
}

//----- (000000014023B1DC) ----------------------------------------------------
void         srand(unsigned int Seed)
{
  *(_DWORD *)(sub_140255A70() + 40) = Seed;
}

//----- (000000014023B240) ----------------------------------------------------
__int64            sub_14023B240(struct __crt_locale_pointers *a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int input_value;
  __int64 loaded_word;
  unsigned int scaled_index;
  unsigned int loaded_word_2;
  __int64 i;
  char input_value_2;
  char option_flags;
  int integer_difference;
  int cached_input_value;
  char loaded_word_3;
  _BYTE *byte_cursor;
  int cached_input_value_2;
  _BYTE *byte_cursor_2;
  unsigned int integer_quotient;
  unsigned int comparison_result;
  char selection_code;
  _BYTE *byte_cursor_3;
  bool cached_changed;
  _QWORD *loaded_word_4;
  int masked_bits;
  int masked_bits_2;
  _QWORD *loaded_word_5;
  _QWORD *loaded_word_6;
  _QWORD *loaded_word_7;
  sr_format_locale sr_integer_locale;

  input_value = a3;
  if ( !*a2 || a3 && a3 - 2 > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
LABEL_54:
    loaded_word_4 = (_QWORD *)a2[1];
    if ( loaded_word_4 )
      *loaded_word_4 = *a2;
    return 0;
  }
  crt_locale_update((_LocaleUpdate *)&sr_integer_locale, a1);
  loaded_word = *a2;
  scaled_index = 0;
  loaded_word_2 = *(unsigned __int8 *)*a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)crt_isctype_l(loaded_word_2, 8, (struct __crt_locale_pointers *)sr_integer_locale.pair) )
      break;
    loaded_word_2 = *(unsigned __int8 *)*a2;
  }
  input_value_2 = a4;
  option_flags = a4 | 2;
  if ( (_BYTE)loaded_word_2 != 45 )
    option_flags = input_value_2;
  if ( (((_BYTE)loaded_word_2 - 43) & 0xFD) == 0 )
    LOBYTE(loaded_word_2) = *(_BYTE *)(*a2)++;
  if ( (input_value & 0xFFFFFFEF) == 0 )
  {
    if ( (unsigned __int8)(loaded_word_2 - 48) > 9u )
    {
      if ( (unsigned __int8)(loaded_word_2 - 97) > 0x19u )
      {
        if ( (unsigned __int8)(loaded_word_2 - 65) > 0x19u )
          integer_difference = -1;
        else
          integer_difference = (char)loaded_word_2 - 55;
      }
      else
      {
        integer_difference = (char)loaded_word_2 - 87;
      }
    }
    else
    {
      integer_difference = (char)loaded_word_2 - 48;
    }
    if ( integer_difference )
    {
      cached_input_value = 10;
LABEL_29:
      if ( input_value )
        cached_input_value = input_value;
      input_value = cached_input_value;
      goto LABEL_32;
    }
    loaded_word_3 = *(_BYTE *)*a2;
    byte_cursor = (_BYTE *)(*a2 + 1);
    *a2 = (__int64)byte_cursor;
    if ( ((loaded_word_3 - 88) & 0xDF) == 0 )
    {
      LOBYTE(loaded_word_2) = *byte_cursor;
      *a2 = (__int64)(byte_cursor + 1);
      cached_input_value = 16;
      goto LABEL_29;
    }
    cached_input_value_2 = 8;
    if ( input_value )
      cached_input_value_2 = input_value;
    byte_cursor_2 = byte_cursor - 1;
    *a2 = (__int64)byte_cursor_2;
    input_value = cached_input_value_2;
    if ( loaded_word_3 && *byte_cursor_2 != loaded_word_3 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
    }
  }
LABEL_32:
  integer_quotient = 0xFFFFFFFF / input_value;
  while ( 1 )
  {
    if ( (unsigned __int8)(loaded_word_2 - 48) > 9u )
    {
      if ( (unsigned __int8)(loaded_word_2 - 97) > 0x19u )
        comparison_result = (unsigned __int8)(loaded_word_2 - 65) > 0x19u ? -1 : (char)loaded_word_2 - 55;
      else
        comparison_result = (char)loaded_word_2 - 87;
    }
    else
    {
      comparison_result = (char)loaded_word_2 - 48;
    }
    if ( comparison_result == -1 || comparison_result >= input_value )
      break;
    if ( scaled_index < integer_quotient || scaled_index == integer_quotient && comparison_result <= 0xFFFFFFFF % input_value )
    {
      scaled_index = comparison_result + input_value * scaled_index;
      selection_code = 8;
    }
    else
    {
      selection_code = 12;
    }
    LOBYTE(loaded_word_2) = *(_BYTE *)(*a2)++;
    option_flags |= selection_code;
  }
  byte_cursor_3 = (_BYTE *)(*a2 - 1);
  *a2 = (__int64)byte_cursor_3;
  if ( (_BYTE)loaded_word_2 && *byte_cursor_3 != (_BYTE)loaded_word_2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  if ( (option_flags & 8) == 0 )
  {
    cached_changed = sr_integer_locale.changed == 0;
    *a2 = loaded_word;
    if ( !cached_changed )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    goto LABEL_54;
  }
  masked_bits = option_flags & 1;
  if ( (option_flags & 4) == 0 )
  {
    if ( (option_flags & 1) == 0 )
      goto LABEL_69;
    if ( (option_flags & 2) != 0 )
    {
      if ( scaled_index > 0x80000000 )
        goto LABEL_61;
LABEL_69:
      if ( (option_flags & 2) != 0 )
        scaled_index = -scaled_index;
      goto LABEL_63;
    }
    if ( scaled_index <= 0x7FFFFFFF )
      goto LABEL_69;
  }
LABEL_61:
  masked_bits_2 = option_flags & 2;
  *errno_sr() = 34;
  if ( !masked_bits )
  {
    scaled_index = -1;
LABEL_63:
    if ( sr_integer_locale.changed )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    loaded_word_5 = (_QWORD *)a2[1];
    if ( loaded_word_5 )
      *loaded_word_5 = *a2;
    return scaled_index;
  }
  if ( masked_bits_2 )
  {
    if ( sr_integer_locale.changed )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    loaded_word_6 = (_QWORD *)a2[1];
    if ( loaded_word_6 )
      *loaded_word_6 = *a2;
    return 0x80000000LL;
  }
  else
  {
    if ( sr_integer_locale.changed )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    loaded_word_7 = (_QWORD *)a2[1];
    if ( loaded_word_7 )
      *loaded_word_7 = *a2;
    return 0x7FFFFFFF;
  }
}

//----- (000000014023B548) ----------------------------------------------------
__int64            sub_14023B548(struct __crt_locale_pointers *a1, unsigned __int16 **a2, unsigned int a3, char a4)
{
  unsigned int input_value;
  unsigned int scaled_index;
  unsigned __int16 loaded_word;
  unsigned __int16 *i;
  char input_value_2;
  char option_flags;
  int selection_code;
  int integer_difference;
  unsigned int integer_difference_2;
  int saved_loaded_word;
  int cached_input_value;
  __int16 scaled_index_2;
  unsigned __int16 *record_pointer;
  int cached_input_value_2;
  unsigned __int16 *record_pointer_2;
  unsigned int integer_quotient;
  unsigned int integer_difference_3;
  int selection_code_2;
  unsigned int integer_difference_4;
  int saved_loaded_word_2;
  char selection_code_3;
  unsigned __int16 *record_pointer_3;
  unsigned __int16 *table_value;
  int masked_bits;
  int masked_bits_2;
  unsigned __int16 *table_value_2;
  unsigned __int16 *table_value_3;
  unsigned __int16 *table_value_4;
  __int64 scratch_buffer[3];
  char unrecovered_register_value;
  unsigned __int16 *loaded_word_2;

  input_value = a3;
  if ( !*a2 || a3 && a3 - 2 > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_138;
  }
  crt_locale_update((_LocaleUpdate *)scratch_buffer, a1);
  scaled_index = 0;
  loaded_word_2 = *a2;
  loaded_word = **a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140256E00(loaded_word, 8) )
      break;
    loaded_word = **a2;
  }
  input_value_2 = a4;
  option_flags = a4 | 2;
  if ( loaded_word != 45 )
    option_flags = input_value_2;
  if ( ((loaded_word - 43) & 0xFFFD) == 0 )
    loaded_word = *(*a2)++;
  selection_code = 65296;
  if ( (input_value & 0xFFFFFFEF) != 0 )
    goto LABEL_75;
  if ( loaded_word >= 0x30u )
  {
    if ( loaded_word < 0x3Au )
    {
      integer_difference = loaded_word - 48;
      goto LABEL_56;
    }
    if ( loaded_word >= 0xFF10u )
    {
      if ( loaded_word >= 0xFF1Au )
      {
        integer_difference = -1;
LABEL_56:
        if ( integer_difference != -1 )
          goto LABEL_63;
        goto LABEL_57;
      }
LABEL_31:
      integer_difference = loaded_word - selection_code;
      goto LABEL_56;
    }
    if ( loaded_word >= 0x660u )
    {
      if ( loaded_word < 0x66Au )
      {
        integer_difference = loaded_word - 1632;
        goto LABEL_56;
      }
      if ( loaded_word >= 0x6F0u )
      {
        if ( loaded_word < 0x6FAu )
        {
          integer_difference = loaded_word - 1776;
          goto LABEL_56;
        }
        if ( loaded_word >= 0x966u )
        {
          if ( loaded_word < 0x970u )
          {
            integer_difference = loaded_word - 2406;
            goto LABEL_56;
          }
          if ( loaded_word >= 0x9E6u )
          {
            if ( loaded_word < 0x9F0u )
            {
              integer_difference = loaded_word - 2534;
              goto LABEL_56;
            }
            selection_code = 2662;
            if ( loaded_word >= 0xA66u )
            {
              if ( loaded_word < 0xA70u )
                goto LABEL_31;
              selection_code = 2790;
              if ( loaded_word >= 0xAE6u )
              {
                if ( loaded_word < 0xAF0u )
                  goto LABEL_31;
                selection_code = 2918;
                if ( loaded_word >= 0xB66u )
                {
                  if ( loaded_word < 0xB70u )
                    goto LABEL_31;
                  selection_code = 3174;
                  if ( loaded_word >= 0xC66u )
                  {
                    if ( loaded_word < 0xC70u )
                      goto LABEL_31;
                    selection_code = 3302;
                    if ( loaded_word >= 0xCE6u )
                    {
                      if ( loaded_word < 0xCF0u )
                        goto LABEL_31;
                      selection_code = 3430;
                      if ( loaded_word >= 0xD66u )
                      {
                        if ( loaded_word < 0xD70u )
                          goto LABEL_31;
                        selection_code = 3664;
                        if ( loaded_word >= 0xE50u )
                        {
                          if ( loaded_word < 0xE5Au )
                            goto LABEL_31;
                          selection_code = 3792;
                          if ( loaded_word >= 0xED0u )
                          {
                            if ( loaded_word < 0xEDAu )
                              goto LABEL_31;
                            selection_code = 3872;
                            if ( loaded_word >= 0xF20u )
                            {
                              if ( loaded_word < 0xF2Au )
                                goto LABEL_31;
                              selection_code = 4160;
                              if ( loaded_word >= 0x1040u )
                              {
                                if ( loaded_word < 0x104Au )
                                  goto LABEL_31;
                                selection_code = 6112;
                                if ( loaded_word >= 0x17E0u )
                                {
                                  if ( loaded_word < 0x17EAu )
                                    goto LABEL_31;
                                  selection_code = 6160;
                                  if ( (unsigned __int16)(loaded_word - 6160) <= 9u )
                                    goto LABEL_31;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_57:
  integer_difference_2 = loaded_word - 97;
  if ( (unsigned int)loaded_word - 65 <= 0x19 || integer_difference_2 <= 0x19 )
  {
    saved_loaded_word = loaded_word - 32;
    if ( integer_difference_2 > 0x19 )
      saved_loaded_word = loaded_word;
    integer_difference = saved_loaded_word - 55;
  }
  else
  {
    integer_difference = -1;
  }
LABEL_63:
  if ( integer_difference )
  {
    cached_input_value = 10;
  }
  else
  {
    scaled_index_2 = **a2;
    record_pointer = *a2 + 1;
    *a2 = record_pointer;
    if ( ((scaled_index_2 - 88) & 0xFFDF) != 0 )
    {
      cached_input_value_2 = 8;
      if ( input_value )
        cached_input_value_2 = input_value;
      record_pointer_2 = record_pointer - 1;
      *a2 = record_pointer_2;
      input_value = cached_input_value_2;
      if ( scaled_index_2 && *record_pointer_2 != scaled_index_2 )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
      }
      goto LABEL_75;
    }
    loaded_word = *record_pointer;
    *a2 = record_pointer + 1;
    cached_input_value = 16;
  }
  if ( input_value )
    cached_input_value = input_value;
  input_value = cached_input_value;
LABEL_75:
  integer_quotient = 0xFFFFFFFF / input_value;
  while ( 1 )
  {
    if ( loaded_word >= 0x30u )
    {
      if ( loaded_word < 0x3Au )
      {
        integer_difference_3 = loaded_word - 48;
        goto LABEL_117;
      }
      if ( loaded_word >= 0xFF10u )
      {
        if ( loaded_word >= 0xFF1Au )
          integer_difference_3 = -1;
        else
          integer_difference_3 = loaded_word - 65296;
LABEL_117:
        if ( integer_difference_3 != -1 )
          goto LABEL_124;
        goto LABEL_118;
      }
      if ( loaded_word >= 0x660u )
      {
        if ( loaded_word < 0x66Au )
        {
          integer_difference_3 = loaded_word - 1632;
          goto LABEL_117;
        }
        selection_code_2 = 1776;
        if ( loaded_word >= 0x6F0u )
        {
          if ( loaded_word < 0x6FAu )
            goto LABEL_85;
          selection_code_2 = 2406;
          if ( loaded_word >= 0x966u )
          {
            if ( loaded_word < 0x970u )
              goto LABEL_85;
            selection_code_2 = 2534;
            if ( loaded_word >= 0x9E6u )
            {
              if ( loaded_word < 0x9F0u )
                goto LABEL_85;
              selection_code_2 = 2662;
              if ( loaded_word >= 0xA66u )
              {
                if ( loaded_word < 0xA70u )
                  goto LABEL_85;
                selection_code_2 = 2790;
                if ( loaded_word >= 0xAE6u )
                {
                  if ( loaded_word < 0xAF0u )
                    goto LABEL_85;
                  selection_code_2 = 2918;
                  if ( loaded_word >= 0xB66u )
                  {
                    if ( loaded_word < 0xB70u )
                      goto LABEL_85;
                    selection_code_2 = 3174;
                    if ( loaded_word >= 0xC66u )
                    {
                      if ( loaded_word < 0xC70u )
                        goto LABEL_85;
                      selection_code_2 = 3302;
                      if ( loaded_word >= 0xCE6u )
                      {
                        if ( loaded_word < 0xCF0u )
                          goto LABEL_85;
                        selection_code_2 = 3430;
                        if ( loaded_word >= 0xD66u )
                        {
                          if ( loaded_word < 0xD70u )
                            goto LABEL_85;
                          selection_code_2 = 3664;
                          if ( loaded_word >= 0xE50u )
                          {
                            if ( loaded_word < 0xE5Au )
                              goto LABEL_85;
                            selection_code_2 = 3792;
                            if ( loaded_word >= 0xED0u )
                            {
                              if ( loaded_word < 0xEDAu )
                                goto LABEL_85;
                              selection_code_2 = 3872;
                              if ( loaded_word >= 0xF20u )
                              {
                                if ( loaded_word < 0xF2Au )
                                  goto LABEL_85;
                                selection_code_2 = 4160;
                                if ( loaded_word >= 0x1040u )
                                {
                                  if ( loaded_word < 0x104Au )
                                    goto LABEL_85;
                                  selection_code_2 = 6112;
                                  if ( loaded_word >= 0x17E0u )
                                  {
                                    if ( loaded_word < 0x17EAu )
                                    {
LABEL_85:
                                      integer_difference_3 = loaded_word - selection_code_2;
                                      goto LABEL_117;
                                    }
                                    if ( (unsigned __int16)(loaded_word - 6160) <= 9u )
                                    {
                                      integer_difference_3 = loaded_word - 6160;
                                      goto LABEL_117;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_118:
    integer_difference_4 = loaded_word - 97;
    if ( (unsigned int)loaded_word - 65 <= 0x19 || integer_difference_4 <= 0x19 )
    {
      saved_loaded_word_2 = loaded_word - 32;
      if ( integer_difference_4 > 0x19 )
        saved_loaded_word_2 = loaded_word;
      integer_difference_3 = saved_loaded_word_2 - 55;
    }
    else
    {
      integer_difference_3 = -1;
    }
LABEL_124:
    if ( integer_difference_3 == -1 || integer_difference_3 >= input_value )
      break;
    if ( scaled_index < integer_quotient || scaled_index == integer_quotient && integer_difference_3 <= 0xFFFFFFFF % input_value )
    {
      scaled_index = integer_difference_3 + input_value * scaled_index;
      selection_code_3 = 8;
    }
    else
    {
      selection_code_3 = 12;
    }
    loaded_word = *(*a2)++;
    option_flags |= selection_code_3;
  }
  record_pointer_3 = *a2 - 1;
  *a2 = record_pointer_3;
  if ( loaded_word && *record_pointer_3 != loaded_word )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  if ( (option_flags & 8) != 0 )
  {
    masked_bits = option_flags & 1;
    if ( (option_flags & 4) == 0 )
    {
      if ( (option_flags & 1) != 0 )
      {
        if ( (option_flags & 2) != 0 )
        {
          if ( scaled_index > 0x80000000 )
            goto LABEL_145;
        }
        else if ( scaled_index > 0x7FFFFFFF )
        {
          goto LABEL_145;
        }
      }
      if ( (option_flags & 2) != 0 )
        scaled_index = -scaled_index;
      goto LABEL_147;
    }
LABEL_145:
    masked_bits_2 = option_flags & 2;
    *errno_sr() = 34;
    if ( masked_bits )
    {
      if ( masked_bits_2 )
      {
        if ( unrecovered_register_value )
          *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
        table_value_3 = a2[1];
        if ( table_value_3 )
          *(_QWORD *)table_value_3 = (uint64)(uintptr_t)(*a2);
        return 0x80000000LL;
      }
      else
      {
        if ( unrecovered_register_value )
          *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
        table_value_4 = a2[1];
        if ( table_value_4 )
          *(_QWORD *)table_value_4 = (uint64)(uintptr_t)(*a2);
        return 0x7FFFFFFF;
      }
    }
    scaled_index = -1;
LABEL_147:
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
    table_value_2 = a2[1];
    if ( table_value_2 )
      *(_QWORD *)table_value_2 = (uint64)(uintptr_t)(*a2);
    return scaled_index;
  }
  *a2 = loaded_word_2;
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
LABEL_138:
  table_value = a2[1];
  if ( table_value )
    *(_QWORD *)table_value = (uint64)(uintptr_t)(*a2);
  return 0;
}

//----- (000000014023BBF0) ----------------------------------------------------
unsigned __int64            sub_14023BBF0(
        struct __crt_locale_pointers *a1,
        char **a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int input_value;
  unsigned __int8 *record_pointer;
  unsigned __int64 scaled_index;
  unsigned int scaled_index_2;
  char *i;
  int input_value_2;
  int option_flags;
  int integer_difference;
  int cached_input_value;
  char scaled_index_3;
  char *byte_cursor;
  int cached_input_value_2;
  char *byte_cursor_2;
  unsigned __int64 integer_quotient;
  unsigned int comparison_result;
  __int64 saved_comparison_result;
  char *byte_cursor_3;
  bool comparison_result_2;
  char *table_value;
  char *table_value_2;
  char *table_value_3;
  char *table_value_4;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  input_value = a3;
  if ( !*a2 || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_55;
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a1);
  record_pointer = (unsigned __int8 *)*a2;
  scaled_index = 0;
  scaled_index_2 = (unsigned __int8)**a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)crt_isctype_l(scaled_index_2, 8, (struct __crt_locale_pointers *)&callee_output_word_2) )
      break;
    scaled_index_2 = (unsigned __int8)**a2;
  }
  input_value_2 = a4;
  option_flags = a4 | 2;
  if ( (_BYTE)scaled_index_2 != 45 )
    option_flags = input_value_2;
  if ( (((_BYTE)scaled_index_2 - 43) & 0xFD) == 0 )
    LOBYTE(scaled_index_2) = *(*a2)++;
  if ( (input_value & 0xFFFFFFEF) != 0 )
    goto LABEL_32;
  if ( (unsigned __int8)(scaled_index_2 - 48) > 9u )
  {
    if ( (unsigned __int8)(scaled_index_2 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(scaled_index_2 - 65) > 0x19u )
        integer_difference = -1;
      else
        integer_difference = (char)scaled_index_2 - 55;
    }
    else
    {
      integer_difference = (char)scaled_index_2 - 87;
    }
  }
  else
  {
    integer_difference = (char)scaled_index_2 - 48;
  }
  if ( integer_difference )
  {
    cached_input_value = 10;
  }
  else
  {
    scaled_index_3 = **a2;
    byte_cursor = *a2 + 1;
    *a2 = byte_cursor;
    if ( ((scaled_index_3 - 88) & 0xDF) != 0 )
    {
      cached_input_value_2 = 8;
      if ( input_value )
        cached_input_value_2 = input_value;
      byte_cursor_2 = byte_cursor - 1;
      *a2 = byte_cursor_2;
      input_value = cached_input_value_2;
      if ( scaled_index_3 && *byte_cursor_2 != scaled_index_3 )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
      }
      goto LABEL_32;
    }
    LOBYTE(scaled_index_2) = *byte_cursor;
    *a2 = byte_cursor + 1;
    cached_input_value = 16;
  }
  if ( input_value )
    cached_input_value = input_value;
  input_value = cached_input_value;
LABEL_32:
  integer_quotient = 0xFFFFFFFFFFFFFFFFuLL / input_value;
  while ( 1 )
  {
    if ( (unsigned __int8)(scaled_index_2 - 48) > 9u )
    {
      if ( (unsigned __int8)(scaled_index_2 - 97) > 0x19u )
        comparison_result = (unsigned __int8)(scaled_index_2 - 65) > 0x19u ? -1 : (char)scaled_index_2 - 55;
      else
        comparison_result = (char)scaled_index_2 - 87;
    }
    else
    {
      comparison_result = (char)scaled_index_2 - 48;
    }
    if ( comparison_result == -1 || comparison_result >= input_value )
      break;
    option_flags |= 8u;
    if ( scaled_index < integer_quotient )
    {
      saved_comparison_result = comparison_result;
    }
    else if ( scaled_index != integer_quotient || (saved_comparison_result = comparison_result, comparison_result > 0xFFFFFFFFFFFFFFFFuLL % input_value) )
    {
      option_flags |= 4u;
      goto LABEL_48;
    }
    scaled_index = saved_comparison_result + input_value * scaled_index;
LABEL_48:
    LOBYTE(scaled_index_2) = *(*a2)++;
  }
  byte_cursor_3 = *a2 - 1;
  *a2 = byte_cursor_3;
  if ( (_BYTE)scaled_index_2 && *byte_cursor_3 != (_BYTE)scaled_index_2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  if ( (option_flags & 8) != 0 )
  {
    if ( sub_1402257B4(option_flags, scaled_index) )
    {
      *errno_sr() = 34;
      if ( (option_flags & 1) != 0 )
      {
        if ( (option_flags & 2) != 0 )
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(callee_output_word + 936) &= ~2u;
          table_value_2 = a2[1];
          if ( table_value_2 )
            *(_QWORD *)table_value_2 = (uint64)(uintptr_t)(*a2);
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(callee_output_word + 936) &= ~2u;
          table_value_3 = a2[1];
          if ( table_value_3 )
            *(_QWORD *)table_value_3 = (uint64)(uintptr_t)(*a2);
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      scaled_index = -1;
    }
    else if ( (option_flags & 2) != 0 )
    {
      scaled_index = -(__int64)scaled_index;
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
    table_value_4 = a2[1];
    if ( table_value_4 )
      *(_QWORD *)table_value_4 = (uint64)(uintptr_t)(*a2);
    return scaled_index;
  }
  comparison_result_2 = unrecovered_register_value == 0;
  *a2 = (char *)record_pointer;
  if ( !comparison_result_2 )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
LABEL_55:
  table_value = a2[1];
  if ( table_value )
    *(_QWORD *)table_value = (uint64)(uintptr_t)(*a2);
  return 0;
}

//----- (000000014023BEE0) ----------------------------------------------------
unsigned __int64            sub_14023BEE0(
        struct __crt_locale_pointers *a1,
        unsigned __int16 **a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int input_value;
  unsigned __int64 scaled_index;
  unsigned __int16 loaded_word;
  unsigned __int16 *i;
  int input_value_2;
  int option_flags;
  int selection_code;
  int integer_difference;
  unsigned int integer_difference_2;
  int saved_loaded_word;
  int cached_input_value;
  __int16 scaled_index_2;
  unsigned __int16 *record_pointer;
  int cached_input_value_2;
  unsigned __int16 *record_pointer_2;
  unsigned __int64 integer_quotient;
  unsigned int integer_difference_3;
  int selection_code_2;
  unsigned int integer_difference_4;
  int saved_loaded_word_2;
  __int64 cached_integer_difference;
  unsigned __int16 *saved_loaded_word_3;
  unsigned __int16 *record_pointer_3;
  unsigned __int16 *table_value;
  unsigned __int16 *table_value_2;
  unsigned __int16 *table_value_3;
  unsigned __int16 *table_value_4;
  __int64 scratch_buffer[3];
  char unrecovered_register_value;
  unsigned __int16 *loaded_word_2;

  input_value = a3;
  if ( !*a2 || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_140;
  }
  crt_locale_update((_LocaleUpdate *)scratch_buffer, a1);
  scaled_index = 0;
  loaded_word_2 = *a2;
  loaded_word = *loaded_word_2;
  for ( i = loaded_word_2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140256E00(loaded_word, 8) )
      break;
    loaded_word = **a2;
  }
  input_value_2 = a4;
  option_flags = a4 | 2;
  if ( loaded_word != 45 )
    option_flags = input_value_2;
  if ( ((loaded_word - 43) & 0xFFFD) == 0 )
    loaded_word = *(*a2)++;
  selection_code = 65296;
  if ( (input_value & 0xFFFFFFEF) != 0 )
    goto LABEL_76;
  if ( loaded_word >= 0x30u )
  {
    if ( loaded_word < 0x3Au )
    {
      integer_difference = loaded_word - 48;
      goto LABEL_57;
    }
    if ( loaded_word >= 0xFF10u )
    {
      if ( loaded_word >= 0xFF1Au )
      {
        integer_difference = -1;
LABEL_57:
        if ( integer_difference != -1 )
          goto LABEL_64;
        goto LABEL_58;
      }
LABEL_34:
      integer_difference = loaded_word - selection_code;
      goto LABEL_57;
    }
    if ( loaded_word >= 0x660u )
    {
      if ( loaded_word < 0x66Au )
      {
        integer_difference = loaded_word - 1632;
        goto LABEL_57;
      }
      if ( loaded_word >= 0x6F0u )
      {
        if ( loaded_word < 0x6FAu )
        {
          integer_difference = loaded_word - 1776;
          goto LABEL_57;
        }
        if ( loaded_word >= 0x966u )
        {
          if ( loaded_word < 0x970u )
          {
            integer_difference = loaded_word - 2406;
            goto LABEL_57;
          }
          if ( loaded_word >= 0x9E6u )
          {
            if ( loaded_word < 0x9F0u )
            {
              integer_difference = loaded_word - 2534;
              goto LABEL_57;
            }
            if ( loaded_word >= 0xA66u )
            {
              if ( loaded_word < 0xA70u )
              {
                integer_difference = loaded_word - 2662;
                goto LABEL_57;
              }
              selection_code = 2790;
              if ( loaded_word >= 0xAE6u )
              {
                if ( loaded_word < 0xAF0u )
                  goto LABEL_34;
                selection_code = 2918;
                if ( loaded_word >= 0xB66u )
                {
                  if ( loaded_word < 0xB70u )
                    goto LABEL_34;
                  selection_code = 3174;
                  if ( loaded_word >= 0xC66u )
                  {
                    if ( loaded_word < 0xC70u )
                      goto LABEL_34;
                    selection_code = 3302;
                    if ( loaded_word >= 0xCE6u )
                    {
                      if ( loaded_word < 0xCF0u )
                        goto LABEL_34;
                      selection_code = 3430;
                      if ( loaded_word >= 0xD66u )
                      {
                        if ( loaded_word < 0xD70u )
                          goto LABEL_34;
                        selection_code = 3664;
                        if ( loaded_word >= 0xE50u )
                        {
                          if ( loaded_word < 0xE5Au )
                            goto LABEL_34;
                          selection_code = 3792;
                          if ( loaded_word >= 0xED0u )
                          {
                            if ( loaded_word < 0xEDAu )
                              goto LABEL_34;
                            selection_code = 3872;
                            if ( loaded_word >= 0xF20u )
                            {
                              if ( loaded_word < 0xF2Au )
                                goto LABEL_34;
                              selection_code = 4160;
                              if ( loaded_word >= 0x1040u )
                              {
                                if ( loaded_word < 0x104Au )
                                  goto LABEL_34;
                                selection_code = 6112;
                                if ( loaded_word >= 0x17E0u )
                                {
                                  if ( loaded_word < 0x17EAu )
                                    goto LABEL_34;
                                  selection_code = 6160;
                                  if ( (unsigned __int16)(loaded_word - 6160) <= 9u )
                                    goto LABEL_34;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_58:
  integer_difference_2 = loaded_word - 97;
  if ( (unsigned int)loaded_word - 65 <= 0x19 || integer_difference_2 <= 0x19 )
  {
    saved_loaded_word = loaded_word - 32;
    if ( integer_difference_2 > 0x19 )
      saved_loaded_word = loaded_word;
    integer_difference = saved_loaded_word - 55;
  }
  else
  {
    integer_difference = -1;
  }
LABEL_64:
  if ( integer_difference )
  {
    cached_input_value = 10;
  }
  else
  {
    scaled_index_2 = **a2;
    record_pointer = *a2 + 1;
    *a2 = record_pointer;
    if ( ((scaled_index_2 - 88) & 0xFFDF) != 0 )
    {
      cached_input_value_2 = 8;
      if ( input_value )
        cached_input_value_2 = input_value;
      record_pointer_2 = record_pointer - 1;
      *a2 = record_pointer_2;
      input_value = cached_input_value_2;
      if ( scaled_index_2 && *record_pointer_2 != scaled_index_2 )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
      }
      goto LABEL_76;
    }
    loaded_word = *record_pointer;
    *a2 = record_pointer + 1;
    cached_input_value = 16;
  }
  if ( input_value )
    cached_input_value = input_value;
  input_value = cached_input_value;
LABEL_76:
  integer_quotient = 0xFFFFFFFFFFFFFFFFuLL / input_value;
  while ( 1 )
  {
    if ( loaded_word >= 0x30u )
    {
      if ( loaded_word < 0x3Au )
      {
        integer_difference_3 = loaded_word - 48;
        goto LABEL_118;
      }
      if ( loaded_word >= 0xFF10u )
      {
        if ( loaded_word >= 0xFF1Au )
          integer_difference_3 = -1;
        else
          integer_difference_3 = loaded_word - 65296;
LABEL_118:
        if ( integer_difference_3 != -1 )
          goto LABEL_125;
        goto LABEL_119;
      }
      if ( loaded_word >= 0x660u )
      {
        if ( loaded_word < 0x66Au )
        {
          integer_difference_3 = loaded_word - 1632;
          goto LABEL_118;
        }
        selection_code_2 = 1776;
        if ( loaded_word >= 0x6F0u )
        {
          if ( loaded_word < 0x6FAu )
            goto LABEL_86;
          selection_code_2 = 2406;
          if ( loaded_word >= 0x966u )
          {
            if ( loaded_word < 0x970u )
              goto LABEL_86;
            selection_code_2 = 2534;
            if ( loaded_word >= 0x9E6u )
            {
              if ( loaded_word < 0x9F0u )
                goto LABEL_86;
              selection_code_2 = 2662;
              if ( loaded_word >= 0xA66u )
              {
                if ( loaded_word < 0xA70u )
                  goto LABEL_86;
                selection_code_2 = 2790;
                if ( loaded_word >= 0xAE6u )
                {
                  if ( loaded_word < 0xAF0u )
                    goto LABEL_86;
                  selection_code_2 = 2918;
                  if ( loaded_word >= 0xB66u )
                  {
                    if ( loaded_word < 0xB70u )
                      goto LABEL_86;
                    selection_code_2 = 3174;
                    if ( loaded_word >= 0xC66u )
                    {
                      if ( loaded_word < 0xC70u )
                        goto LABEL_86;
                      selection_code_2 = 3302;
                      if ( loaded_word >= 0xCE6u )
                      {
                        if ( loaded_word < 0xCF0u )
                          goto LABEL_86;
                        selection_code_2 = 3430;
                        if ( loaded_word >= 0xD66u )
                        {
                          if ( loaded_word < 0xD70u )
                            goto LABEL_86;
                          selection_code_2 = 3664;
                          if ( loaded_word >= 0xE50u )
                          {
                            if ( loaded_word < 0xE5Au )
                              goto LABEL_86;
                            selection_code_2 = 3792;
                            if ( loaded_word >= 0xED0u )
                            {
                              if ( loaded_word < 0xEDAu )
                                goto LABEL_86;
                              selection_code_2 = 3872;
                              if ( loaded_word >= 0xF20u )
                              {
                                if ( loaded_word < 0xF2Au )
                                  goto LABEL_86;
                                selection_code_2 = 4160;
                                if ( loaded_word >= 0x1040u )
                                {
                                  if ( loaded_word < 0x104Au )
                                    goto LABEL_86;
                                  selection_code_2 = 6112;
                                  if ( loaded_word >= 0x17E0u )
                                  {
                                    if ( loaded_word < 0x17EAu )
                                    {
LABEL_86:
                                      integer_difference_3 = loaded_word - selection_code_2;
                                      goto LABEL_118;
                                    }
                                    if ( (unsigned __int16)(loaded_word - 6160) <= 9u )
                                    {
                                      integer_difference_3 = loaded_word - 6160;
                                      goto LABEL_118;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_119:
    integer_difference_4 = loaded_word - 97;
    if ( (unsigned int)loaded_word - 65 <= 0x19 || integer_difference_4 <= 0x19 )
    {
      saved_loaded_word_2 = loaded_word - 32;
      if ( integer_difference_4 > 0x19 )
        saved_loaded_word_2 = loaded_word;
      integer_difference_3 = saved_loaded_word_2 - 55;
    }
    else
    {
      integer_difference_3 = -1;
    }
LABEL_125:
    if ( integer_difference_3 == -1 || integer_difference_3 >= input_value )
      break;
    option_flags |= 8u;
    if ( scaled_index < integer_quotient )
    {
      cached_integer_difference = integer_difference_3;
    }
    else if ( scaled_index != integer_quotient || (cached_integer_difference = integer_difference_3, integer_difference_3 > 0xFFFFFFFFFFFFFFFFuLL % input_value) )
    {
      option_flags |= 4u;
      goto LABEL_133;
    }
    scaled_index = cached_integer_difference + input_value * scaled_index;
LABEL_133:
    loaded_word = *(*a2)++;
  }
  saved_loaded_word_3 = loaded_word_2;
  record_pointer_3 = *a2 - 1;
  *a2 = record_pointer_3;
  if ( loaded_word && *record_pointer_3 != loaded_word )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  if ( (option_flags & 8) != 0 )
  {
    if ( sub_1402257B4(option_flags, scaled_index) )
    {
      *errno_sr() = 34;
      if ( (option_flags & 1) != 0 )
      {
        if ( (option_flags & 2) != 0 )
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
          table_value_2 = a2[1];
          if ( table_value_2 )
            *(_QWORD *)table_value_2 = (uint64)(uintptr_t)(*a2);
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( unrecovered_register_value )
            *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
          table_value_3 = a2[1];
          if ( table_value_3 )
            *(_QWORD *)table_value_3 = (uint64)(uintptr_t)(*a2);
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      scaled_index = -1;
    }
    else if ( (option_flags & 2) != 0 )
    {
      scaled_index = -(__int64)scaled_index;
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
    table_value_4 = a2[1];
    if ( table_value_4 )
      *(_QWORD *)table_value_4 = (uint64)(uintptr_t)(*a2);
    return scaled_index;
  }
  *a2 = saved_loaded_word_3;
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936) &= ~2u;
LABEL_140:
  table_value = a2[1];
  if ( table_value )
    *(_QWORD *)table_value = (uint64)(uintptr_t)(*a2);
  return 0;
}

//----- (000000014023C638) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_689(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, scratch_buffer, a3, 1);
}

//----- (000000014023C668) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_690(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, scratch_buffer, a3, 1);
}

//----- (000000014023C698) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_691(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, scratch_buffer, a3, 0);
}

//----- (000000014023C6C8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_692(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, scratch_buffer, a3, 0);
}

//----- (000000014023C6F8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_693(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023C728) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_694(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023C758) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_695(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023C788) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_696(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023C844) ----------------------------------------------------
_BYTE *           __crt_strtox__c_string_character_source__char__unget(_QWORD *a1, char a2)
{
  _BYTE *result;

  result = (_BYTE *)(*a1 - 1LL);
  *a1 = (uint64)(uintptr_t)(result);
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *errno_sr() = 22;
      return (_BYTE *)crt_invalid_parameter_noinfo();
    }
  }
  return result;
}

//----- (000000014023C870) ----------------------------------------------------
_WORD *           __crt_strtox__c_string_character_source__wchar_t__unget(_QWORD *a1, __int16 a2)
{
  _WORD *result;

  result = (_WORD *)(*a1 - 2LL);
  *a1 = (uint64)(uintptr_t)(result);
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *errno_sr() = 22;
      return (_WORD *)crt_invalid_parameter_noinfo();
    }
  }
  return result;
}

//----- (000000014023C8A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_701(_QWORD *a1)
{
  if ( *a1 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014023C8C8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_702(_QWORD *a1)
{
  if ( *a1 )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014023C8F0) ----------------------------------------------------
unsigned __int64            sub_14023C8F0(char *a1, char *a2, signed int a3)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, scratch_buffer, a3, 1u);
}

//----- (000000014023C91C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_703(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023C94C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_704(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023C97C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_705(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, scratch_buffer, a3, 1);
}

//----- (000000014023C9AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_706(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023C9DC) ----------------------------------------------------
unsigned __int64            sub_14023C9DC(char *a1, char *a2, signed int a3)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CA08) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_707(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CA38) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_708(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CA68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_709(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CA98) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_710(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CAC8) ----------------------------------------------------
unsigned __int64            sub_14023CAC8(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, scratch_buffer, a3, 1u);
}

//----- (000000014023CAF4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_711(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023CB24) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_712(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023CB54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_713(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, scratch_buffer, a3, 1);
}

//----- (000000014023CB84) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_714(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014023CBB4) ----------------------------------------------------
unsigned __int64            sub_14023CBB4(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CBE0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_715(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CC10) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_716(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CC40) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_717(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CC70) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_718(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 0);
}

//----- (000000014023CCA0) ----------------------------------------------------
unsigned __int64            sub_14023CCA0(char *a1, char *a2, signed int a3)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, scratch_buffer, a3, 1u);
}

//----- (000000014023CCCC) ----------------------------------------------------
__int64            sub_14023CCCC(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(nullptr, scratch_buffer, a3, 1);
}

//----- (000000014023CCF8) ----------------------------------------------------
unsigned __int64            sub_14023CCF8(char *a1, char *a2, signed int a3)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, scratch_buffer, a3, 1u);
}

//----- (000000014023CD24) ----------------------------------------------------
__int64            sub_14023CD24(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CD50) ----------------------------------------------------
unsigned __int64            sub_14023CD50(char *a1, char *a2, signed int a3)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CD7C) ----------------------------------------------------
unsigned __int64            sub_14023CD7C(char *a1, char *a2, signed int a3)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CDA8) ----------------------------------------------------
unsigned __int64            sub_14023CDA8(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, scratch_buffer, a3, 1u);
}

//----- (000000014023CDD4) ----------------------------------------------------
__int64            sub_14023CDD4(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(nullptr, scratch_buffer, a3, 1);
}

//----- (000000014023CE00) ----------------------------------------------------
unsigned __int64            sub_14023CE00(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, scratch_buffer, a3, 1u);
}

//----- (000000014023CE2C) ----------------------------------------------------
__int64            sub_14023CE2C(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CE58) ----------------------------------------------------
unsigned __int64            sub_14023CE58(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CE84) ----------------------------------------------------
unsigned __int64            sub_14023CE84(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, scratch_buffer, a3, 0);
}

//----- (000000014023CEB8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            __attribute__((noreturn)) unknown_libname_719(__int64 a1)
{
  unsigned int int64_result;
  unsigned int int64_result_2;

  if ( !a1 )
  {
    int64_result = ((__int64 (*)(void))GetLastError)();
    ((void (           __attribute__((noreturn)) *)(_QWORD))ExitThread)(int64_result);
  }
  *(_QWORD *)(sub_140255A70() + 960) = a1;
  if ( (unsigned int)sub_14025A2E0() == 2 )
    *(_BYTE *)(a1 + 32) = (unsigned int)sub_14024F744(1u) == 0;
  int64_result_2 = (*(__int64 (           **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  sub_14023D33C(int64_result_2);
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1A8: invalid function type 'void (__stdcall __noreturn *ExitThread)(DWORD dwExitCode)' has been ignored

//----- (000000014023CF20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            __attribute__((noreturn)) StartAddress(__int64 a1)
{
  unsigned int int64_result;

  if ( !a1 )
  {
    int64_result = ((__int64 (*)(void))GetLastError)();
    ((void (           __attribute__((noreturn)) *)(_QWORD))ExitThread)(int64_result);
  }
  *(_QWORD *)(sub_140255A70() + 960) = a1;
  if ( (unsigned int)sub_14025A2E0() == 2 )
    *(_BYTE *)(a1 + 32) = (unsigned int)sub_14024F744(1u) == 0;
  (*(void (           **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  sub_14023D33C(0);
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1A8: invalid function type 'void (__stdcall __noreturn *ExitThread)(DWORD dwExitCode)' has been ignored

//----- (000000014023CF98) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1017(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014023CFB4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_722(_QWORD **a1)
{
  _QWORD *loaded_word;

  loaded_word = *a1;
  if ( *a1 )
  {
    if ( loaded_word[2] )
      ((void (*)(void))CloseHandle)();
    if ( loaded_word[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(loaded_word);
  }
  *a1 = nullptr;
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (000000014023D008) ----------------------------------------------------
void            _anonymous_namespace___thread_parameter_free_policy__operator_call(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    if ( a2[2] )
      ((void (*)(void))CloseHandle)();
    if ( a2[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(a2);
  }
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (000000014023D044) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14023D044(unsigned int a1)
{
  unsigned __int64 call_result;
  __int64 loaded_word;
  __int64 loaded_word_2;

  call_result = sub_140255BEC();
  if ( call_result )
  {
    loaded_word = *(_QWORD *)(call_result + 960);
    if ( loaded_word )
    {
      if ( *(_BYTE *)(loaded_word + 32) )
        sub_14024F784();
      if ( (unsigned __int64)(*(_QWORD *)(loaded_word + 16) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        ((void (*)(void))CloseHandle)();
      loaded_word_2 = *(_QWORD *)(loaded_word + 24);
      if ( (unsigned __int64)(loaded_word_2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        ((void (           __attribute__((noreturn)) *)(__int64, _QWORD))FreeLibraryAndExitThread)(loaded_word_2, a1);
    }
  }
  ((void (           __attribute__((noreturn)) *)(_QWORD))ExitThread)(a1);
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E198: invalid function type 'void (__stdcall __noreturn *FreeLibraryAndExitThread)(HMODULE hLibModule, DWORD dwExitCode)' has been ignored
// 14026E1A8: invalid function type 'void (__stdcall __noreturn *ExitThread)(DWORD dwExitCode)' has been ignored

//----- (000000014023D0A8) ----------------------------------------------------
_QWORD *           sub_14023D0A8(__int64 a1, __int64 a2)
{
  _QWORD *calloc_base_result;
  _QWORD *result;

  calloc_base_result = (_QWORD *)calloc_base(1, 40);
  free_base(nullptr);
  result = nullptr;
  if ( calloc_base_result )
  {
    *calloc_base_result = a1;
    calloc_base_result[1] = a2;
    ((void (           *)(__int64, __int64, _QWORD *))GetModuleHandleExW)(4, a1, calloc_base_result + 3);
    return calloc_base_result;
  }
  return result;
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored

//----- (000000014023D124) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1018(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014023D140) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_726(_QWORD **a1)
{
  _QWORD *loaded_word;

  loaded_word = *a1;
  if ( *a1 )
  {
    if ( loaded_word[2] )
      ((void (*)(void))CloseHandle)();
    if ( loaded_word[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(loaded_word);
  }
  *a1 = nullptr;
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (000000014023D18C) ----------------------------------------------------
__int64            sub_14023D18C(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 input_value;
  _QWORD *returned_pointer;
  __int64 void_result;
  __int64 unused_written_slot;
  unsigned int int64_result;
  __int64 ThreadId;

  input_value = a2;
  if ( !a1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return -1;
  }
  returned_pointer = sub_14023D0A8(a1, a3);
  if ( returned_pointer )
  {
    LODWORD(ThreadId) = 0;
    void_result = ((__int64 (           *)(_QWORD, __int64, void (           __attribute__((noreturn)) *)(__int64), _QWORD *, int, __int64 *))CreateThread)(
           0,
           input_value,
           StartAddress,
           returned_pointer,
           4,
           &ThreadId);
    unused_written_slot = void_result;
    if ( void_result )
    {
      returned_pointer[2] = void_result;
      if ( (unsigned int)((__int64 (           *)(__int64))ResumeThread)(void_result) != -1 )
      {
        returned_pointer = nullptr;
        goto LABEL_7;
      }
    }
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
  }
  unused_written_slot = -1;
LABEL_7:
  if ( returned_pointer )
  {
    if ( returned_pointer[2] )
      ((void (*)(void))CloseHandle)();
    if ( returned_pointer[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(returned_pointer);
  }
  return unused_written_slot;
}

// 14023D18C: invalid function type '?' has been ignored
// 14026E1B0: invalid function type 'HANDLE (__stdcall *CreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E1A0: invalid function type 'DWORD (__stdcall *ResumeThread)(HANDLE hThread)' has been ignored

//----- (000000014023D25C) ----------------------------------------------------
__int64            sub_14023D25C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 input_value;
  _QWORD *returned_pointer;
  __int64 void_result;
  unsigned int int64_result;
  __int128 ThreadId;

  input_value = a2;
  if ( !a3 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  returned_pointer = sub_14023D0A8(a3, a4);
  if ( returned_pointer )
  {
    void_result = ((__int64 (           *)(__int64, __int64, void (           __attribute__((noreturn)) *)(__int64), _QWORD *, _DWORD, __int128 *))CreateThread)(
            a1,
            input_value,
            unknown_libname_719,
            returned_pointer,
            a5,
            &ThreadId);
    if ( void_result )
    {
      if ( a6 )
        *a6 = ThreadId;
      returned_pointer = nullptr;
      goto LABEL_7;
    }
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
  }
  void_result = 0;
LABEL_7:
  if ( returned_pointer )
  {
    if ( returned_pointer[2] )
      ((void (*)(void))CloseHandle)();
    if ( returned_pointer[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(returned_pointer);
  }
  return void_result;
}

// 14026E1B0: invalid function type 'HANDLE (__stdcall *CreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (000000014023D330) ----------------------------------------------------
void         __attribute__((noreturn)) _report_rangecheckfailure_0()
{
  sub_14023D044(0);
}

//----- (000000014023D33C) ----------------------------------------------------
void         __attribute__((noreturn)) sub_14023D33C(unsigned int ReturnCode)
{
  sub_14023D044(ReturnCode);
}

//----- (000000014023D348) ----------------------------------------------------
__int64            common_assert__char(char *a1, char *a2, unsigned int a3, __int64 a4)
{
  int set_error_mode_result;

  set_error_mode_result = set_error_mode(3);
  if ( set_error_mode_result == 1 || !set_error_mode_result && (unsigned int)sub_14024774C() == 1 )
    sub_14023DF6C((__int64)a1, (__int64)a2, a3);
  return sub_14023D430(a1, a2, a3, a4);
}

//----- (000000014023D3BC) ----------------------------------------------------
__int64            common_assert__wchar_t(char *a1, char *a2, unsigned int a3, __int64 a4)
{
  int set_error_mode_result;

  set_error_mode_result = set_error_mode(3);
  if ( set_error_mode_result == 1 || !set_error_mode_result && (unsigned int)sub_14024774C() == 1 )
    sub_14023E008((__int64)a1, (__int64)a2, a3);
  return sub_14023D4F4(a1, a2, a3, a4);
}

//----- (000000014023D430) ----------------------------------------------------
__int64            sub_14023D430(char *a1, char *a2, int a3, __int64 a4)
{
  int unknown_libname_891_result;
  int integer_difference;
  __int64 unused_local;
  _WORD scratch_buffer[288];
  __int64 unused_local_2;

  crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 0x240u);
  sub_14023D5B8(scratch_buffer, 0x240u, a1, a2, a3, a4);
  unknown_libname_891_result = unknown_libname_891((__int64)scratch_buffer, (__int64)"Microsoft Visual C++ Runtime Library", 0x12012u) - 3;
  if ( !unknown_libname_891_result )
  {
    sub_14025BC64(0x16u);
    COleServerDoc__NotifyClosed((COleServerDoc *)3);
    __debugbreak();
  }
  integer_difference = unknown_libname_891_result - 1;
  if ( integer_difference )
  {
    if ( integer_difference != 1 )
      abort();
  }
  else
  {
    __debugbreak();
  }
  return 0; /* no result: rax is residue of the dispatch at 0x14023D4A9 */
}

//----- (000000014023D4F4) ----------------------------------------------------
__int64            sub_14023D4F4(char *a1, char *a2, int a3, __int64 a4)
{
  int unknown_libname_892_result;
  int integer_difference;
  __int64 unused_local;
  _WORD scratch_buffer[576];
  __int64 unused_local_2;

  crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 0x480u);
  sub_14023DA68((char *)scratch_buffer, 0x240u, a1, a2, a3, a4);
  unknown_libname_892_result = unknown_libname_892((__int64)scratch_buffer, (__int64)L"Microsoft Visual C++ Runtime Library", 0x12012u) - 3;
  if ( !unknown_libname_892_result )
  {
    sub_14025BC64(0x16u);
    COleServerDoc__NotifyClosed((COleServerDoc *)3);
    __debugbreak();
  }
  integer_difference = unknown_libname_892_result - 1;
  if ( integer_difference )
  {
    if ( integer_difference != 1 )
      abort();
  }
  else
  {
    __debugbreak();
  }
  return 0; /* no result: rax is residue of the dispatch at 0x14023D56D */
}

//----- (000000014023D5B8) ----------------------------------------------------
__int64            sub_14023D5B8(
        _BYTE *a1,
        unsigned __int64 a2,
        char *a3,
        char *a4,
        unsigned int Value,
        __int64 lpModuleName)
{
  int int64_result;
  __int64 element_index;
  char *cached_destination;
  __int64 element_index_2;
  unsigned __int64 byte_count;
  __int64 element_index_3;
  unsigned __int64 element_index_4;
  char input_byte;
  unsigned __int64 element_index_5;
  char *text_cursor;
  bool comparison_result;
  char *input_cursor;
  unsigned __int64 input_value;
  _BYTE *input_cursor_2;
  int strcat_s_sr_result;
  __int64 element_index_6;
  __int64 element_index_7;
  __int64 element_index_8;
  __int64 integer_sum;
       char *literal_text;
  unsigned __int64 input_value_2;
  _BYTE *input_cursor_3;
  char *state_address;
  _BYTE callee_output_word[32];
  __int128 Reserved;
  __int128 phModule;
  char Destination[261];
  char callee_output_word_2;
  __int64 unused_local;

  if ( (unsigned int)strcpy_s_sr(a1, a2, "Assertion failed!") )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, word_140276948) )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, "Program: ") )
    goto LABEL_67;
  crt_memset((void *)(uintptr_t)(Destination), 0, 0x105u);
  *(_QWORD *)&phModule = 0;
  int64_result = ((__int64 (           *)(__int64, __int64, __int128 *))GetModuleHandleExW)(6, lpModuleName, &phModule);
  *(_QWORD *)&phModule = phModule & -(__int64)(int64_result != 0);
  if ( !(unsigned int)sub_14025B344(phModule, (__int64)Destination, 0x105u) )
  {
    if ( (unsigned int)strcpy_s_sr(Destination, 261, "<program name unknown>") )
      goto LABEL_67;
  }
  element_index = -1;
  cached_destination = Destination;
  element_index_2 = -1;
  do
    ++element_index_2;
  while ( Destination[element_index_2] );
  if ( (unsigned __int64)(element_index_2 + 11) > 0x40 )
  {
    cached_destination = &callee_output_word[element_index_2 + 11];
    byte_count = (intptr_t)((uintptr_t)(&callee_output_word_2) - (uintptr_t)(&callee_output_word[element_index_2 + 11]));
    if ( !&callee_output_word[element_index_2 + 11] )
    {
      *errno_sr() = 22;
      goto LABEL_66;
    }
    if ( byte_count < 3 )
    {
      crt_memset((void *)(uintptr_t)(cached_destination), 0, byte_count);
      *errno_sr() = 34;
LABEL_66:
      crt_invalid_parameter_noinfo();
      *(_QWORD *)&Reserved = 0;
      crt_invoke_watson();
      __debugbreak();
    }
    qmemcpy(cached_destination, "...", 3);
  }
  if ( (unsigned int)strcat_s_sr(a1, a2, cached_destination)
    || (unsigned int)strcat_s_sr(a1, a2, word_140276980)
    || (unsigned int)strcat_s_sr(a1, a2, "File: ") )
  {
    goto LABEL_67;
  }
  element_index_3 = -1;
  do
    ++element_index_3;
  while ( a4[element_index_3] );
  if ( (unsigned __int64)(element_index_3 + 8) <= 0x40 )
  {
    state_address = a4;
LABEL_64:
    strcat_s_sr_result = strcat_s_sr(a1, a2, state_address);
    goto LABEL_35;
  }
  element_index_4 = -1;
  do
    ++element_index_4;
  while ( a4[element_index_4] );
  input_byte = a4[element_index_4 - 1];
  element_index_5 = 1;
  if ( input_byte != 92 )
  {
    text_cursor = &a4[element_index_4 - 1];
    do
    {
      if ( input_byte == 47 )
        break;
      if ( element_index_5 >= element_index_4 )
        break;
      --text_cursor;
      ++element_index_5;
      input_byte = *text_cursor;
    }
    while ( *text_cursor != 92 );
  }
  comparison_result = element_index_4 - element_index_5 < 0x26;
  if ( element_index_4 - element_index_5 > 0x26 )
  {
    if ( element_index_5 < 0x12 )
    {
      input_cursor = a4;
      input_value = a2;
      input_cursor_2 = a1;
      goto LABEL_32;
    }
    comparison_result = element_index_4 - element_index_5 < 0x26;
  }
  input_cursor = a4;
  input_value = a2;
  input_cursor_2 = a1;
  if ( !comparison_result )
  {
    if ( (unsigned int)strncat_s_sr(a1, a2, a4, 35)
      || (unsigned int)strcat_s_sr(a1, a2, "...")
      || (unsigned int)strncat_s_sr(a1, a2, &a4[element_index_4 - element_index_5], 8)
      || (unsigned int)strcat_s_sr(a1, a2, "...") )
    {
      goto LABEL_67;
    }
    state_address = &a4[element_index_4 - 7];
    goto LABEL_64;
  }
  element_index_5 >>= 1;
LABEL_32:
  if ( (unsigned int)strncat_s_sr(input_cursor_2, input_value, input_cursor, 53 - element_index_5) || (unsigned int)strcat_s_sr(a1, a2, "...") )
    goto LABEL_67;
  strcat_s_sr_result = strcat_s_sr(a1, a2, &a4[element_index_4 - element_index_5]);
LABEL_35:
  if ( strcat_s_sr_result )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, word_140276980) )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, "Line: ") )
    goto LABEL_67;
  element_index_6 = -1;
  do
    ++element_index_6;
  while ( a1[element_index_6] );
  element_index_7 = -1;
  do
    ++element_index_7;
  while ( a1[element_index_7] );
  if ( (unsigned int)itoa_s(Value, &a1[element_index_7], a2 - element_index_6, 10)
    || (unsigned int)strcat_s_sr(a1, a2, word_140276948)
    || (unsigned int)strcat_s_sr(a1, a2, "Expression: ") )
  {
    goto LABEL_67;
  }
  element_index_8 = -1;
  do
    ++element_index_8;
  while ( a1[element_index_8] );
  integer_sum = element_index_8 + 176;
  do
    ++element_index;
  while ( a3[element_index] );
  literal_text = a3;
  input_value_2 = a2;
  input_cursor_3 = a1;
  if ( integer_sum + element_index > a2 )
  {
    if ( (unsigned int)strncat_s_sr(a1, a2, a3, a2 - integer_sum - 3) )
      goto LABEL_67;
    literal_text = "...";
    input_value_2 = a2;
    input_cursor_3 = a1;
  }
  if ( (unsigned int)strcat_s_sr(input_cursor_3, input_value_2, literal_text)
    || (unsigned int)strcat_s_sr(a1, a2, word_140276948)
    || (unsigned int)strcat_s_sr(
                       a1,
                       a2,
                       "For information on how your program can cause an assertion\n"
                       "failure, see the Visual C++ documentation on asserts")
    || (unsigned int)strcat_s_sr(a1, a2, word_140276948)
    || (unsigned int)strcat_s_sr(a1, a2, "(Press Retry to debug the application - JIT must be enabled)") )
  {
LABEL_67:
    *(_QWORD *)&Reserved = 0;
    crt_invoke_watson();
    __debugbreak();
  }
  return 0; /* no caller reads the result */
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored

//----- (000000014023DA68) ----------------------------------------------------
__int64            sub_14023DA68(
        char *a1,
        unsigned __int64 a2,
        char *a3,
        char *a4,
        unsigned int Value,
        __int64 lpModuleName)
{
  int int64_result;
  __int64 element_index;
  _WORD *cached_filename;
  __int64 element_index_2;
  __int64 scaled_index;
  unsigned __int64 byte_count;
  __int64 element_index_3;
  unsigned __int64 element_index_4;
  __int16 masked_bits;
  unsigned __int64 iteration_count;
  char *state_address;
  unsigned __int64 integer_difference;
  bool comparison_result;
  char *state_address_2;
  unsigned __int64 shifted_bits;
  int masked_bits_2;
  __int64 element_index_5;
  __int64 element_index_6;
  __int64 element_index_7;
  __int64 integer_sum;
       __int16 *cached_asc_140285e10;
  __int64 input_value;
  char *input_cursor;
  __int64 unused_local;
  __int128 Reserved;
  __int128 phModule;
  _WORD Filename[264];
  __int64 unused_local_2;

  if ( (unsigned int)sub_140259444(a1, a2, (__int64)L"Assertion failed!") )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"\n\n") )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"Program: ") )
    goto LABEL_66;
  crt_memset((void *)(uintptr_t)(Filename), 0, 0x20Au);
  *(_QWORD *)&phModule = 0;
  int64_result = ((__int64 (           *)(__int64, __int64, __int128 *))GetModuleHandleExW)(6, lpModuleName, &phModule);
  *(_QWORD *)&phModule = phModule & -(__int64)(int64_result != 0);
  if ( !(unsigned int)((__int64 (           *)(_QWORD, _WORD *, __int64))GetModuleFileNameW)(phModule, Filename, 261) )
  {
    if ( (unsigned int)sub_140259444(Filename, 261, (__int64)L"<program name unknown>") )
      goto LABEL_66;
  }
  element_index = -1;
  cached_filename = Filename;
  element_index_2 = -1;
  do
    ++element_index_2;
  while ( Filename[element_index_2] );
  if ( (unsigned __int64)(element_index_2 + 11) > 0x40 )
  {
    scaled_index = 2 * element_index_2 - 106;
    byte_count = 522 - scaled_index;
    cached_filename = (_WORD *)((char *)Filename + scaled_index);
    if ( !(_WORD *)((char *)Filename + scaled_index) )
    {
      *errno_sr() = 22;
      goto LABEL_68;
    }
    if ( byte_count < 6 )
    {
      crt_memset((void *)(uintptr_t)(cached_filename), 0, byte_count);
      *errno_sr() = 34;
LABEL_68:
      crt_invalid_parameter_noinfo();
      *(_QWORD *)&Reserved = 0;
      crt_invoke_watson();
      __debugbreak();
    }
    *(_DWORD *)cached_filename = *(_DWORD *)asc_140285E10;
    cached_filename[2] = 46;
  }
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)cached_filename)
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)&unk_140285E18)
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"File: ") )
  {
    goto LABEL_66;
  }
  element_index_3 = -1;
  do
    ++element_index_3;
  while ( *(_WORD *)&a4[2 * element_index_3] );
  if ( (unsigned __int64)(element_index_3 + 8) <= 0x40 )
  {
    state_address_2 = a4;
LABEL_65:
    masked_bits_2 = sub_14025ACB4(a1, a2, (__int64)state_address_2);
    goto LABEL_36;
  }
  element_index_4 = -1;
  do
    ++element_index_4;
  while ( *(_WORD *)&a4[2 * element_index_4] );
  masked_bits = *(_WORD *)&a4[2 * element_index_4 - 2];
  iteration_count = 1;
  if ( masked_bits != 92 )
  {
    state_address = &a4[2 * element_index_4 - 2];
    do
    {
      if ( masked_bits == 47 )
        break;
      if ( iteration_count >= element_index_4 )
        break;
      state_address -= 2;
      ++iteration_count;
      masked_bits = *(_WORD *)state_address;
    }
    while ( *(_WORD *)state_address != 92 );
  }
  integer_difference = element_index_4 - iteration_count;
  comparison_result = element_index_4 - iteration_count < 0x26;
  if ( element_index_4 - iteration_count > 0x26 )
  {
    if ( iteration_count < 0x12 )
    {
      if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 53 - iteration_count)
        || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10) )
      {
        goto LABEL_66;
      }
      state_address_2 = &a4[2 * integer_difference];
      goto LABEL_65;
    }
    comparison_result = integer_difference < 0x26;
  }
  if ( !comparison_result )
  {
    if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 35)
      || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10)
      || (unsigned int)sub_14025AE2C(a1, a2, &a4[2 * integer_difference], 8)
      || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10) )
    {
      goto LABEL_66;
    }
    state_address_2 = &a4[2 * element_index_4 - 14];
    goto LABEL_65;
  }
  shifted_bits = iteration_count >> 1;
  if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 53 - shifted_bits) || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10) )
    goto LABEL_66;
  masked_bits_2 = sub_14025ACB4(a1, a2, (__int64)&a4[2 * (element_index_4 - shifted_bits)]);
LABEL_36:
  if ( masked_bits_2 )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)&unk_140285E18) )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"Line: ") )
    goto LABEL_66;
  element_index_5 = -1;
  do
    ++element_index_5;
  while ( *(_WORD *)&a1[2 * element_index_5] );
  element_index_6 = -1;
  do
    ++element_index_6;
  while ( *(_WORD *)&a1[2 * element_index_6] );
  if ( (unsigned int)itow_s(Value, &a1[2 * element_index_6], a2 - element_index_5, 10)
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"\n\n")
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"Expression: ") )
  {
    goto LABEL_66;
  }
  element_index_7 = -1;
  do
    ++element_index_7;
  while ( *(_WORD *)&a1[2 * element_index_7] );
  integer_sum = element_index_7 + 176;
  do
    ++element_index;
  while ( *(_WORD *)&a3[2 * element_index] );
  cached_asc_140285e10 = (     __int16 *)a3;
  input_value = a2;
  input_cursor = a1;
  if ( integer_sum + element_index > a2 )
  {
    if ( (unsigned int)sub_14025AE2C(a1, a2, a3, a2 - integer_sum - 3) )
      goto LABEL_66;
    cached_asc_140285e10 = asc_140285E10;
    input_value = a2;
    input_cursor = a1;
  }
  if ( (unsigned int)sub_14025ACB4(input_cursor, input_value, (__int64)cached_asc_140285e10)
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"\n\n")
    || (unsigned int)sub_14025ACB4(
                       a1,
                       a2,
                       (__int64)L"For information on how your program can cause an assertion\n"
                                 "failure, see the Visual C++ documentation on asserts")
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"\n\n")
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"(Press Retry to debug the application - JIT must be enabled)") )
  {
LABEL_66:
    *(_QWORD *)&Reserved = 0;
    crt_invoke_watson();
    __debugbreak();
  }
  return 0; /* no caller reads the result */
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored
// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored

//----- (000000014023DF6C) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14023DF6C(__int64 a1, __int64 a2, int a3)
{
  char *returned_pointer;
  char *returned_pointer_2;
  char *returned_pointer_3;
  __int64 unrecovered_register_value;
  __int64 scratch_buffer[3];
  __int64 input_value;
  __int64 input_value_2;
  int input_value_3;
       char *returned_pointer_4;

  input_value_3 = a3;
  input_value_2 = a2;
  input_value = a1;
  if ( (*((_DWORD *)sub_14020B528(2u) + 5) & 0x4C0) == 0 )
  {
    returned_pointer = sub_14020B528(2u);
    setvbuf_sr(returned_pointer, 0, 4, 0);
  }
  returned_pointer_4 = sub_14023E448();
  returned_pointer_2 = sub_14020B528(2u);
  sub_14023E158(scratch_buffer, &returned_pointer_4, &input_value, &input_value_2, &input_value_3, unrecovered_register_value, (__int64)returned_pointer_2, scratch_buffer[1], scratch_buffer[2]);
  returned_pointer_3 = sub_14020B528(2u);
  fflush((FILE *)returned_pointer_3);
  abort();
}

//----- (000000014023E008) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14023E008(__int64 a1, __int64 a2, int a3)
{
  __int64 int64_result;
  __int64 saved_int64_result;
  __int64 element_index;
  char *returned_pointer;
  char *returned_pointer_2;
  __int64 packed_word_bits;
  __int64 NumberOfCharsWritten;
  __int64 packed_word_bits_2;
  __int64 input_value;
  __int64 input_value_2;
       __int16 *returned_pointer_3;
  char *returned_pointer_4;
  _WORD Buffer[576];

  input_value_2 = a1;
  input_value = a2;
  LODWORD(packed_word_bits_2) = a3;
  int64_result = ((__int64 (           *)(__int64))GetStdHandle)(4294967284LL);
  saved_int64_result = int64_result;
  if ( (unsigned __int64)(int64_result - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (unsigned int)((__int64 (           *)(__int64))GetFileType)(int64_result) == 2 )
  {
    LODWORD(packed_word_bits) = a3;
    if ( (int)swprintf_0_sr(Buffer, 576, L"Assertion failed: %Ts, file %Ts, line %d\n", a1, a2) >= 0 )
    {
      element_index = -1;
      do
        ++element_index;
      while ( Buffer[element_index] );
      LODWORD(NumberOfCharsWritten) = 0;
      if ( (unsigned int)((__int64 (           *)(__int64, _WORD *, _QWORD, __int64 *, _QWORD))WriteConsoleW)(
                           saved_int64_result,
                           Buffer,
                           (unsigned int)element_index,
                           &NumberOfCharsWritten,
                           0) )
        abort();
    }
  }
  if ( (*((_DWORD *)sub_14020B528(2u) + 5) & 0x4C0) == 0 )
  {
    returned_pointer = sub_14020B528(2u);
    setvbuf_sr(returned_pointer, 0, 4, 0);
  }
  returned_pointer_3 = sub_14023E450();
  returned_pointer_4 = sub_14020B528(2u);
  sub_14023E178((__int64 *)&returned_pointer_4, (__int64 *)&returned_pointer_3, &input_value_2, &input_value, &packed_word_bits_2, packed_word_bits, NumberOfCharsWritten, packed_word_bits_2, input_value);
  returned_pointer_2 = sub_14020B528(2u);
  fflush((FILE *)returned_pointer_2);
  abort();
}

// 14026E188: invalid function type 'HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored

//----- (000000014023E158) ----------------------------------------------------
__int64            sub_14023E158(
        __int64 *a1,
             char **a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  LODWORD(a5) = *a5;
  return sub_1400920F0(*a1, *a2, *a3, *a4, a5, a6, a7, a8, a9);
}

//----- (000000014023E178) ----------------------------------------------------
__int64            sub_14023E178(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  LODWORD(a5) = *a5;
  return sub_14023E6B4(*a1, *a2, *a3, *a4, a5, a6, a7, a8, a9);
}

//----- (000000014023E370) ----------------------------------------------------
__int64            sub_14023E370(__int64 a1, __int64 a2, int a3)
{
  __int64 int64_result;
  __int64 saved_int64_result;
  __int64 element_index;
  __int64 unused_local;
  __int64 packed_word_bits;
  __int128 NumberOfCharsWritten;
  _WORD Buffer[576];
  __int64 unused_local_2;

  int64_result = ((__int64 (           *)(__int64))GetStdHandle)(4294967284LL);
  saved_int64_result = int64_result;
  if ( (unsigned __int64)(int64_result - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (unsigned int)((__int64 (           *)(__int64))GetFileType)(int64_result) == 2 )
  {
    LODWORD(packed_word_bits) = a3;
    if ( (int)swprintf_0_sr(Buffer, 576, L"Assertion failed: %Ts, file %Ts, line %d\n", a1, a2, packed_word_bits) >= 0 )
    {
      element_index = -1;
      do
        ++element_index;
      while ( Buffer[element_index] );
      LODWORD(NumberOfCharsWritten) = 0;
      if ( (unsigned int)((__int64 (           *)(__int64, _WORD *, _QWORD, __int128 *, _QWORD))WriteConsoleW)(
                           saved_int64_result,
                           Buffer,
                           (unsigned int)element_index,
                           &NumberOfCharsWritten,
                           0) )
        abort();
    }
  }
  return 0; /* the function has no caller */
}

// 14026E188: invalid function type 'HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored

//----- (000000014023E448) ----------------------------------------------------
     char *sub_14023E448()
{
  return "Assertion failed: %Ts, file %Ts, line %d\n";
}

//----- (000000014023E450) ----------------------------------------------------
     __int16 *sub_14023E450()
{
  return L"Assertion failed: %Ts, file %Ts, line %d\n";
}

//----- (000000014023E518) ----------------------------------------------------
__int64            sub_14023E518(char *a1, char *a2, int a3)
{
  int set_error_mode_result;
  __int64 retaddr;

  set_error_mode_result = set_error_mode(3);
  if ( set_error_mode_result == 1 || !set_error_mode_result && (unsigned int)sub_14024774C() == 1 )
    sub_14023DF6C((__int64)a1, (__int64)a2, a3);
  return sub_14023D430(a1, a2, a3, retaddr);
}

//----- (000000014023E58C) ----------------------------------------------------
__int64            vsprintf_s_l_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *returned_pointer;

  returned_pointer = (__int64 *)sub_140001BB0();
  return sub_140224C90(*returned_pointer, a1, a2, a3, a4);
}

// 14023E58C: invalid function type 'int __cdecl vsprintf_s_l_0(char *const Buffer, const #66 BufferCount, const char *const Format, const #71 Locale, #67 ArgList)' has been ignored

//----- (000000014023E5DC) ----------------------------------------------------
__int64            vswprintf_c_l_0(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        struct __crt_locale_pointers *a4,
        __int64 ArgList)
{
  __int64 *returned_pointer;
  __int64 result;

  returned_pointer = (__int64 *)sub_140001BB0();
  result = sub_140225120(*returned_pointer, a1, a2, a3, a4, ArgList);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

// 14023E5DC: invalid function type 'int __cdecl vswprintf_c_l_0(#49 *const Buffer, const #66 BufferCount, const #49 *const Format, const _locale_t Locale, #67 ArgList)' has been ignored

//----- (000000014023E640) ----------------------------------------------------
__int64            crt_assert(char *a1, char *a2, int a3)
{
  int set_error_mode_result;
  __int64 retaddr;

  set_error_mode_result = set_error_mode(3);
  if ( set_error_mode_result == 1 || !set_error_mode_result && (unsigned int)sub_14024774C() == 1 )
    sub_14023E008((__int64)a1, (__int64)a2, a3);
  return sub_14023D4F4(a1, a2, a3, retaddr);
}

//----- (000000014023E6B4) ----------------------------------------------------
__int64 sub_14023E6B4(__int64 a1, __int64 a2, ...)
{
  __int64 *returned_pointer;
  va_list va;

  va_start(va, a2);
  returned_pointer = (__int64 *)sub_140001BB0();
  return sub_140224C90(*returned_pointer, a1, a2, 0, (__int64)va);
}

//----- (000000014023E6F8) ----------------------------------------------------
__int64            sub_14023E6F8(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    crt_memcpy(a1, a3, a4);
    return 0;
  }
  crt_memset((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  if ( a2 < a4 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_5;
  }
  return 22;
}

//----- (000000014023E780) ----------------------------------------------------
__int64 swprintf_0_sr(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 *returned_pointer;
  __int64 result;
  va_list va;

  va_start(va, a3);
  returned_pointer = (__int64 *)sub_140001BB0();
  result = sub_140225120(*returned_pointer, a1, a2, a3, nullptr, (__int64)va);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

//----- (000000014023E7D4) ----------------------------------------------------
double         acos(double X)
{
  __int64 state_address;
  double unused_written_slot;
  double cached_x;
  double squared_value;
  double saved_square_root;
  double combined_products;
  double square_root;
  double squared_component;

  square_root = 0.0;
  state_address = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
    return handle_nan_sr(*(__int64 *)&X);
  if ( (unsigned int)state_address < 0x3C7 )
  {
    unused_written_slot = 1.570796326794897;
LABEL_10:
    set_statfp(32);
    return unused_written_slot;
  }
  if ( (unsigned int)state_address < 0x3FF )
  {
    cached_x = X;
    if ( X < 0.0 )
      cached_x = -X;
    if ( (unsigned int)state_address < 0x3FE )
    {
      saved_square_root = 0.0;
      squared_value = cached_x * cached_x;
      squared_component = cached_x * cached_x;
    }
    else
    {
      squared_value = (1.0 - cached_x) * 0.5;
      squared_component = squared_value;
      square_root = sqrt(squared_value);
      saved_square_root = square_root;
      cached_x = square_root;
    }
    combined_products = (((((squared_value * 0.0000482901920344787 + 0.001092426972350747) * squared_value - 0.05499898092356859) * squared_value + 0.2755581752569377)
         * squared_value
         - 0.4450172168676356)
        * squared_value
        + 0.227485835556935)
       * squared_value
       / ((((squared_value * 0.1058694220872044 - 0.9436391370324927) * squared_value + 2.76568859157271) * squared_value - 3.284315057209587) * squared_value
        + 1.36491501334161);
    if ( (unsigned int)state_address < 0x3FE )
    {
      return 1.570796326794897 - (X - (6.123233995736766e-17 - combined_products * X));
    }
    else if ( X >= 0.0 )
    {
      return (cached_x + cached_x) * combined_products
           + (squared_component
            - COERCE_DOUBLE(*(_QWORD *)&saved_square_root & 0xFFFFFFFF00000000uLL)
            * COERCE_DOUBLE(*(_QWORD *)&saved_square_root & 0xFFFFFFFF00000000uLL))
           / (COERCE_DOUBLE(*(_QWORD *)&saved_square_root & 0xFFFFFFFF00000000uLL) + square_root)
           + (squared_component
            - COERCE_DOUBLE(*(_QWORD *)&saved_square_root & 0xFFFFFFFF00000000uLL)
            * COERCE_DOUBLE(*(_QWORD *)&saved_square_root & 0xFFFFFFFF00000000uLL))
           / (COERCE_DOUBLE(*(_QWORD *)&saved_square_root & 0xFFFFFFFF00000000uLL) + square_root)
           + COERCE_DOUBLE(*(_QWORD *)&saved_square_root & 0xFFFFFFFF00000000uLL) * 2.0;
    }
    else
    {
      return 3.141592653589793 - (combined_products * cached_x - 6.123233995736766e-17 + saved_square_root + combined_products * cached_x - 6.123233995736766e-17 + saved_square_root);
    }
  }
  else
  {
    if ( X == 1.0 )
      return 0.0;
    if ( X == -1.0 )
    {
      unused_written_slot = 3.141592653589793;
      goto LABEL_10;
    }
    return handle_error((__int64)"acos", 13, 0xFFF8000000000000uLL, 1, 8, 0x21u, X, 0, 1); /* 0x14023E8C8: its result stays in xmm0 */
  }
  return X;
}

//----- (000000014023EAC0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
double            unknown_libname_734(double a1, char a2)
{
  /* The original keeps the double argument (xmm0) in xmm6 across set_statfp and returns it. */
  char masked_bits;
  char saved_masked_bits;
  char cached_masked_bits;
  char flags;

  masked_bits = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    masked_bits = 8 * (a2 & 1);
  saved_masked_bits = masked_bits | 4;
  if ( (a2 & 4) == 0 )
    saved_masked_bits = masked_bits;
  cached_masked_bits = saved_masked_bits | 1;
  if ( (a2 & 8) == 0 )
    cached_masked_bits = saved_masked_bits;
  flags = cached_masked_bits | 0x20;
  if ( (a2 & 0x10) == 0 )
    flags = cached_masked_bits;
  set_statfp(flags);
  return a1;
}

//----- (000000014023EB20) ----------------------------------------------------
float            sub_14023EB20(float a1)
{
  /* Clean implementation (asinf): src/engine/crt_math.c, checked against the original executable
     (tools/native-compare suite crt). The decompiled body did several steps in double precision. */
  extern float crt_asinf(float x);
  return crt_asinf(a1);
}

//----- (000000014023ED84) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
double            unknown_libname_735(double a1, char a2)
{
  /* The original keeps the double argument (xmm0) in xmm6 across set_statfp and returns it. */
  char masked_bits;
  char saved_masked_bits;
  char cached_masked_bits;
  char flags;

  masked_bits = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    masked_bits = 8 * (a2 & 1);
  saved_masked_bits = masked_bits | 4;
  if ( (a2 & 4) == 0 )
    saved_masked_bits = masked_bits;
  cached_masked_bits = saved_masked_bits | 1;
  if ( (a2 & 8) == 0 )
    cached_masked_bits = saved_masked_bits;
  flags = cached_masked_bits | 0x20;
  if ( (a2 & 0x10) == 0 )
    flags = cached_masked_bits;
  set_statfp(flags);
  return a1;
}

//----- (000000014023EDE4) ----------------------------------------------------
double            sub_14023EDE4(double result, double a2)
{
  double component_delta;
  __int64 masked_bits;
  double component_delta_2;
  __int64 state_address;
  __int64 masked_bits_2;
  int state_address_2;
  unsigned __int64 masked_bits_3;
  double saved_call_status;
  unsigned __int64 shifted_bits;
  __int64 masked_bits_4;
  double weighted_sum;
  unsigned __int64 masked_bits_5;
  __int64 callee_output_word;
  double weighted_sum_2;
  double saved_weighted_sum;
  double absolute_value;
  __int64 shifted_bits_2;
  unsigned __int64 masked_bits_6;
  double masked_bits_7;
  int selection_flag;
  double saved_component_delta;
  double squared_length;
  __int64 packed_word_bits;
  double comparison_operand;
  double component_delta_3;
  double weighted_sum_3;
  int shifted_bits_3;
  double shifted_bits_4;
  double shifted_bits_5;
  double integer_sum;

  component_delta = result;
  masked_bits = *(_QWORD *)&result;
  component_delta_2 = a2;
  state_address = (*(_QWORD *)&a2 >> 52) & 0x7FFLL;
  masked_bits_2 = *(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFLL;
  state_address_2 = ((*(_QWORD *)&result >> 52) & 0x7FF) - state_address;
  masked_bits_3 = *(_QWORD *)&result & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    saved_call_status = a2;
    return handle_nan_sr(*(__int64 *)&saved_call_status);
  }
  if ( masked_bits_3 > 0x7FF0000000000000LL )
  {
    saved_call_status = result;
    return handle_nan_sr(*(__int64 *)&saved_call_status);
  }
  shifted_bits = 0;
  if ( !masked_bits_3 )
  {
    if ( a2 >= 0.0 )
      return result;
    goto LABEL_48;
  }
  if ( !masked_bits_2 )
  {
    set_statfp(32);
    if ( result < 0.0 )
      return -1.570796326794897;
    masked_bits_2 = *(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (unsigned int)state_address < 0x3FD && ((unsigned __int16)(*(_QWORD *)&result >> 52) & 0x7FFu) < 0x3FD )
  {
    if ( (*(_QWORD *)&a2 & 0x7FF0000000000000LL) != 0 )
    {
      masked_bits_5 = *(_QWORD *)&a2 + 0x4000000000000000LL;
    }
    else
    {
      masked_bits_4 = *(_QWORD *)&a2 | 0x4010000000000000LL;
      if ( a2 >= 0.0 )
        weighted_sum = *(double *)&masked_bits_4 + -4.0;
      else
        weighted_sum = *(double *)&masked_bits_4 + 4.0;
      *(double *)&masked_bits_5 = weighted_sum;
    }
    if ( (masked_bits & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&saved_weighted_sum = masked_bits + 0x4000000000000000LL;
    }
    else
    {
      callee_output_word = masked_bits | 0x4010000000000000LL;
      if ( masked_bits >= 0 )
        weighted_sum_2 = *(double *)&callee_output_word + -4.0;
      else
        weighted_sum_2 = *(double *)&callee_output_word + 4.0;
      saved_weighted_sum = weighted_sum_2;
    }
    component_delta_2 = *(double *)&masked_bits_5;
    component_delta = saved_weighted_sum;
    state_address_2 = ((*(_QWORD *)&saved_weighted_sum >> 52) & 0x7FF) - ((masked_bits_5 >> 52) & 0x7FF);
  }
  if ( state_address_2 > 56 )
  {
    set_statfp(32);
    if ( masked_bits >= 0 )
      return 1.570796326794897;
    return -1.570796326794897;
  }
  if ( state_address_2 >= -28 || a2 < 0.0 )
  {
    if ( state_address_2 < -56 && a2 < 0.0 )
    {
LABEL_48:
      set_statfp(32);
      if ( masked_bits >= 0 )
        return 3.141592653589793;
      else
        return -3.141592653589793;
    }
    if ( masked_bits_3 == 0x7FF0000000000000LL && masked_bits_2 == 0x7FF0000000000000LL )
    {
      set_statfp(32);
      if ( a2 >= 0.0 )
      {
        if ( masked_bits >= 0 )
          return 0.7853981633974483;
        else
          return -0.7853981633974483;
      }
      else if ( masked_bits >= 0 )
      {
        return 2.356194490192345;
      }
      else
      {
        return -2.356194490192345;
      }
    }
    else
    {
      if ( a2 < 0.0 )
        component_delta_2 = -component_delta_2;
      if ( masked_bits < 0 )
        component_delta = -component_delta;
      selection_flag = 0;
      LOBYTE(selection_flag) = component_delta > component_delta_2;
      if ( component_delta > component_delta_2 )
      {
        saved_component_delta = component_delta_2;
        component_delta_2 = component_delta;
        component_delta = saved_component_delta;
      }
      squared_length = component_delta / component_delta_2;
      if ( component_delta / component_delta_2 <= 0.0625 )
      {
        component_delta_3 = 0.0;
        if ( squared_length >= 0.00000001 )
          squared_length = (component_delta
               - COERCE_DOUBLE(*(_QWORD *)&squared_length & 0xFFFFFFFF00000000uLL)
               * COERCE_DOUBLE(*(_QWORD *)&component_delta_2 & 0xFFFFFFFF00000000uLL)
               - (component_delta_2 - COERCE_DOUBLE(*(_QWORD *)&component_delta_2 & 0xFFFFFFFF00000000uLL))
               * COERCE_DOUBLE(*(_QWORD *)&squared_length & 0xFFFFFFFF00000000uLL)
               - (squared_length - COERCE_DOUBLE(*(_QWORD *)&squared_length & 0xFFFFFFFF00000000uLL)) * component_delta_2)
              / component_delta_2
              - (0.3333333333333317
               - (0.1999999999939322
                - (0.1428571356180717 - (0.1111073628351453 - squared_length * squared_length * 0.09002981028544979) * (squared_length * squared_length))
                * (squared_length
                 * squared_length))
               * (squared_length
                * squared_length))
              * (squared_length
               * squared_length
               * squared_length)
              + squared_length;
      }
      else
      {
        packed_word_bits = (unsigned int)((int)(squared_length * 256.0 + 0.5) - 16);
        comparison_operand = qword_1402866C0[packed_word_bits];
        component_delta_3 = qword_140285F30[packed_word_bits];
        weighted_sum_3 = (double)(int)(squared_length * 256.0 + 0.5) * 0.00390625;
        shifted_bits_3 = 1023 - ((*(_QWORD *)&component_delta_2 >> 52) & 0x7FF);
        LODWORD(packed_word_bits) = shifted_bits_3 - shifted_bits_3 / 2;
        shifted_bits_4 = COERCE_DOUBLE((shifted_bits_3 / 2 + 1023LL) << 52) * component_delta * COERCE_DOUBLE(((int)packed_word_bits + 1023LL) << 52);
        shifted_bits_5 = (shifted_bits_4
             - COERCE_DOUBLE(
                 COERCE_UNSIGNED_INT64(COERCE_DOUBLE((shifted_bits_3 / 2 + 1023LL) << 52) * component_delta_2 * COERCE_DOUBLE(((int)packed_word_bits + 1023LL) << 52))
               & 0xFFFFFFFFF8000000uLL)
             * weighted_sum_3
             - (COERCE_DOUBLE((shifted_bits_3 / 2 + 1023LL) << 52) * component_delta_2 * COERCE_DOUBLE(((int)packed_word_bits + 1023LL) << 52)
              - COERCE_DOUBLE(
                  COERCE_UNSIGNED_INT64(COERCE_DOUBLE((shifted_bits_3 / 2 + 1023LL) << 52) * component_delta_2 * COERCE_DOUBLE(((int)packed_word_bits + 1023LL) << 52))
                & 0xFFFFFFFFF8000000uLL))
             * weighted_sum_3)
            / (weighted_sum_3 * shifted_bits_4 + COERCE_DOUBLE((shifted_bits_3 / 2 + 1023LL) << 52) * component_delta_2 * COERCE_DOUBLE(((int)packed_word_bits + 1023LL) << 52));
        squared_length = shifted_bits_5 + comparison_operand - (0.333333333332241 - shifted_bits_5 * shifted_bits_5 * 0.1999991803898914) * (shifted_bits_5 * shifted_bits_5) * shifted_bits_5;
      }
      if ( selection_flag )
      {
        component_delta_3 = 1.570796326794897 - component_delta_3;
        squared_length = 6.123233995736766e-17 - squared_length;
      }
      if ( a2 < 0.0 )
      {
        component_delta_3 = 3.141592621803284 - component_delta_3;
        squared_length = 0.00000003178650954705639 - squared_length;
      }
      integer_sum = component_delta_3 + squared_length;
      if ( masked_bits < 0 )
        return -integer_sum;
      return integer_sum;
    }
  }
  else if ( state_address_2 >= -1074 )
  {
    if ( state_address_2 >= -1022 )
    {
      return component_delta / component_delta_2;
    }
    else
    {
      absolute_value = fabs(1.267650600228229e30 * component_delta / component_delta_2);
      shifted_bits_2 = *(_QWORD *)&absolute_value >> 52;
      if ( (unsigned int)(*(_QWORD *)&absolute_value >> 52) <= 0x64 )
      {
        masked_bits_6 = *(_QWORD *)&absolute_value & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 101 - (int)shifted_bits_2 <= 54 )
          shifted_bits = ((masked_bits_6 >> (101 - (unsigned __int8)shifted_bits_2 - 1)) & 1) + (masked_bits_6 >> (101 - (unsigned __int8)shifted_bits_2 - 1) >> 1);
      }
      else
      {
        shifted_bits = *(_QWORD *)&absolute_value & 0x800FFFFFFFFFFFFFuLL | ((shifted_bits_2 - 100) << 52);
      }
      *(_QWORD *)&masked_bits_7 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * component_delta / component_delta_2) & 0x8000000000000000uLL | shifted_bits;
      if ( (*(_QWORD *)&masked_bits_7 & 0x7FF0000000000000LL) == 0 )
        set_statfp(32);
      return masked_bits_7;
    }
  }
  else
  {
    set_statfp(32);
    if ( masked_bits >= 0 )
      return 0.0;
    else
      return -0.0;
  }
}

//----- (000000014023F6A4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
double            unknown_libname_736(double a1, char a2)
{
  /* The original keeps the double argument (xmm0) in xmm6 across set_statfp and returns it. */
  char masked_bits;
  char saved_masked_bits;
  char cached_masked_bits;
  char flags;

  masked_bits = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    masked_bits = 8 * (a2 & 1);
  saved_masked_bits = masked_bits | 4;
  if ( (a2 & 4) == 0 )
    saved_masked_bits = masked_bits;
  cached_masked_bits = saved_masked_bits | 1;
  if ( (a2 & 8) == 0 )
    cached_masked_bits = saved_masked_bits;
  flags = cached_masked_bits | 0x20;
  if ( (a2 & 0x10) == 0 )
    flags = cached_masked_bits;
  set_statfp(flags);
  return a1;
}

//----- (000000014023F704) ----------------------------------------------------
float            sub_14023F704(float result, float a2)
{
  double component_delta;
  double saved_call_status;
  double input_value;
  double saved_call_status_2;
  int shifted_bits;
  double absolute_value;
  double absolute_value_2;
  unsigned __int64 shifted_bits_2;
  double absolute_value_3;
  unsigned __int64 masked_bits;
  __int64 shifted_bits_3;
  unsigned __int64 masked_bits_2;
  float unused_written_slot;
  int selection_flag;
  double saved_component_delta;
  double integer_quotient;
  int scaled_index;
  double combined_products;
  double squared_component;
  float saved_call_status_3;

  component_delta = a2;
  saved_call_status = result;
  input_value = a2;
  saved_call_status_2 = result;
  shifted_bits = ((COERCE_UNSIGNED_INT64((double)result) >> 52) & 0x7FF) - ((COERCE_UNSIGNED_INT64((double)a2) >> 52) & 0x7FF);
  absolute_value = fabs(a2);
  absolute_value_2 = fabs(result);
  if ( *(_QWORD *)&absolute_value > 0x7FF0000000000000uLL )
  {
    saved_call_status_3 = a2;
    return handle_nanf_sr(SLODWORD(saved_call_status_3));
  }
  if ( *(_QWORD *)&absolute_value_2 > 0x7FF0000000000000uLL )
  {
    saved_call_status_3 = result;
    return handle_nanf_sr(SLODWORD(saved_call_status_3));
  }
  shifted_bits_2 = 0;
  if ( absolute_value_2 == 0.0 )
  {
    if ( input_value < 0.0 )
    {
LABEL_33:
      set_statfp(32);
      if ( saved_call_status_2 >= 0.0 )
        return 3.1415927;
      else
        return -3.1415927;
    }
    return saved_call_status;
  }
  if ( absolute_value == 0.0 )
  {
    set_statfp(32);
    if ( saved_call_status_2 < 0.0 )
      return -1.5707964;
  }
  if ( shifted_bits > 26 )
  {
    set_statfp(32);
    if ( saved_call_status_2 >= 0.0 )
      return 1.5707964;
    return -1.5707964;
  }
  if ( shifted_bits >= -13 || input_value < 0.0 )
  {
    if ( shifted_bits < -26 && input_value < 0.0 )
      goto LABEL_33;
    if ( absolute_value_2 == INFINITY && absolute_value == INFINITY )
    {
      set_statfp(32);
      if ( input_value >= 0.0 )
      {
        if ( saved_call_status_2 >= 0.0 )
          return 0.78539819;
        else
          return -0.78539819;
      }
      else if ( saved_call_status_2 >= 0.0 )
      {
        return 2.3561945;
      }
      else
      {
        return -2.3561945;
      }
    }
    if ( input_value < 0.0 )
      component_delta = -component_delta;
    if ( saved_call_status_2 < 0.0 )
      saved_call_status = -saved_call_status;
    selection_flag = 0;
    LOBYTE(selection_flag) = saved_call_status > component_delta;
    if ( saved_call_status > component_delta )
    {
      saved_component_delta = component_delta;
      component_delta = saved_call_status;
      saved_call_status = saved_component_delta;
    }
    integer_quotient = saved_call_status / component_delta;
    if ( saved_call_status / component_delta <= 0.0625 )
    {
      if ( integer_quotient < 0.0001 )
      {
LABEL_56:
        if ( selection_flag )
          integer_quotient = 1.570796326794897 - integer_quotient;
        if ( input_value < 0.0 )
          integer_quotient = 3.141592653589793 - integer_quotient;
        if ( saved_call_status_2 < 0.0 )
          return -integer_quotient;
        return integer_quotient;
      }
      squared_component = (0.3333333333333317 - (0.1999999999939322 - integer_quotient * integer_quotient * 0.1428571356180717) * (integer_quotient * integer_quotient))
          * (integer_quotient
           * integer_quotient
           * integer_quotient);
    }
    else
    {
      scaled_index = (int)(integer_quotient * 256.0 + 0.5);
      combined_products = (saved_call_status * 256.0 - (double)scaled_index * component_delta) / ((double)scaled_index * saved_call_status + component_delta * 256.0);
      integer_quotient = combined_products + dbl_140286F10[scaled_index - 16];
      squared_component = combined_products * combined_products * combined_products * 0.333333333332241;
    }
    integer_quotient = integer_quotient - squared_component;
    goto LABEL_56;
  }
  if ( shifted_bits >= -150 )
  {
    if ( shifted_bits >= -126 )
      return saved_call_status / component_delta;
    absolute_value_3 = fabs(1.267650600228229e30 * saved_call_status / component_delta);
    masked_bits = COERCE_UNSIGNED_INT64(1.267650600228229e30 * saved_call_status / component_delta) & 0x8000000000000000uLL;
    shifted_bits_3 = *(_QWORD *)&absolute_value_3 >> 52;
    if ( (unsigned int)(*(_QWORD *)&absolute_value_3 >> 52) <= 0x64 )
    {
      masked_bits_2 = *(_QWORD *)&absolute_value_3 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
      if ( 101 - (int)shifted_bits_3 <= 54 )
        shifted_bits_2 = ((masked_bits_2 >> (101 - (unsigned __int8)shifted_bits_3 - 1)) & 1) + (masked_bits_2 >> (101 - (unsigned __int8)shifted_bits_3 - 1) >> 1);
    }
    else
    {
      shifted_bits_2 = *(_QWORD *)&absolute_value_3 & 0x800FFFFFFFFFFFFFuLL | ((shifted_bits_3 - 100) << 52);
    }
    unused_written_slot = COERCE_DOUBLE(masked_bits | shifted_bits_2);
    if ( ((masked_bits | shifted_bits_2) & 0x7FF0000000000000LL) == 0 )
      set_statfp(48);
    return unused_written_slot;
  }
  else
  {
    set_statfp(48);
    if ( saved_call_status_2 >= 0.0 )
      return 0.0;
    else
      return -0.0;
  }
}

//----- (000000014023FC08) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
double            unknown_libname_737(double a1, char a2)
{
  /* The original keeps the double argument (xmm0) in xmm6 across set_statfp and returns it. */
  char masked_bits;
  char saved_masked_bits;
  char cached_masked_bits;
  char flags;

  masked_bits = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    masked_bits = 8 * (a2 & 1);
  saved_masked_bits = masked_bits | 4;
  if ( (a2 & 4) == 0 )
    saved_masked_bits = masked_bits;
  cached_masked_bits = saved_masked_bits | 1;
  if ( (a2 & 8) == 0 )
    cached_masked_bits = saved_masked_bits;
  flags = cached_masked_bits | 0x20;
  if ( (a2 & 0x10) == 0 )
    flags = cached_masked_bits;
  set_statfp(flags);
  return a1;
}
