#include "shared_client.h"


//----- (0000000140220004) ----------------------------------------------------
char            sub_140220004(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  int v15; // ecx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_15;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_15:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  v18 = 0;
  switch ( v10 )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020EDA4(a1, &v18);
      else
        v14 = sub_14020F0EC(a1, &v18);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020F434(a1, &v18);
      else
        v14 = sub_14020F914(a1, &v18);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020FC5C(a1, &v18);
      else
        v14 = sub_14020FF9C(a1, &v18);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = unknown_libname_290(a1, &v18);
      else
        v14 = unknown_libname_298(a1, &v18);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  if ( !v14 )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    v15 = *(_DWORD *)(a1 + 48);
    v16 = v18;
    if ( (v15 & 0x10) != 0 && v18 < 0 )
    {
      v16 = -v18;
      v15 |= 0x40u;
      *(_DWORD *)(a1 + 48) = v15;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      v17 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = v15 & 0xFFFFFFF7;
      sub_14020EB80(a1 + 88, v17);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !v16 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 1;
    if ( v10 == 8 )
      unknown_libname_366(a1, v16, a2, a3);
    else
      unknown_libname_354(a1, v16, a2, a3);
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
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( v10 == 8 )
    unknown_libname_367(a1, v14, a2, a3);
  else
    unknown_libname_355(a1, v14, a2, a3);
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
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( v10 == 8 )
    unknown_libname_368(a1, v14, a2, a3);
  else
    unknown_libname_356(a1, v14, a2, a3);
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
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  int v15; // ecx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_15;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_15:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  v18 = 0;
  switch ( v10 )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020EE64(a1, &v18);
      else
        v14 = sub_14020F1AC(a1, &v18);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020F4F4(a1, &v18);
      else
        v14 = sub_14020F9D4(a1, &v18);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020FD18(a1, &v18);
      else
        v14 = sub_140210058(a1, &v18);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = unknown_libname_291(a1, &v18);
      else
        v14 = unknown_libname_299(a1, &v18);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  if ( !v14 )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    v15 = *(_DWORD *)(a1 + 48);
    v16 = v18;
    if ( (v15 & 0x10) != 0 && v18 < 0 )
    {
      v16 = -v18;
      v15 |= 0x40u;
      *(_DWORD *)(a1 + 48) = v15;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      v17 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = v15 & 0xFFFFFFF7;
      sub_14020EB80(a1 + 88, v17);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !v16 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 1;
    if ( v10 == 8 )
      unknown_libname_369(a1, v16, a2, a3);
    else
      unknown_libname_357(a1, v16, a2, a3);
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
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( v10 == 8 )
    unknown_libname_370(a1, v14, a2, a3);
  else
    unknown_libname_358(a1, v14, a2, a3);
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
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140220A54) ----------------------------------------------------
char            sub_140220A54(__int64 a1)
{
  __int64 v1; // rbx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  _QWORD *v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v13 = nullptr;
  if ( !unknown_libname_276(a1, &v13) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 60);
  if ( v4 > 5 )
  {
    v8 = v4 - 6;
    if ( !v8 )
      goto LABEL_21;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_21;
    v6 = v9 - 2;
    if ( !v6 )
      goto LABEL_21;
  }
  else
  {
    if ( v4 == 5 )
    {
LABEL_21:
      v1 = 8;
      goto LABEL_22;
    }
    if ( !v4 )
      goto LABEL_15;
    v5 = v4 - 1;
    if ( !v5 )
    {
      v1 = 1;
      goto LABEL_22;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 2;
      goto LABEL_22;
    }
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_15:
    v1 = 4;
    goto LABEL_22;
  }
  if ( v7 == 1 )
    goto LABEL_21;
LABEL_22:
  v10 = v1 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 != 4 )
          goto LABEL_6;
        *v13 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v13 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v13 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v13 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140220B58) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_528(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140220C34) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_529(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140220D10) ----------------------------------------------------
char            sub_140220D10(__int64 a1)
{
  __int64 v1; // rbx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  _QWORD *v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v13 = nullptr;
  if ( !unknown_libname_277(a1, &v13) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 60);
  if ( v4 > 5 )
  {
    v8 = v4 - 6;
    if ( !v8 )
      goto LABEL_21;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_21;
    v6 = v9 - 2;
    if ( !v6 )
      goto LABEL_21;
  }
  else
  {
    if ( v4 == 5 )
    {
LABEL_21:
      v1 = 8;
      goto LABEL_22;
    }
    if ( !v4 )
      goto LABEL_15;
    v5 = v4 - 1;
    if ( !v5 )
    {
      v1 = 1;
      goto LABEL_22;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 2;
      goto LABEL_22;
    }
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_15:
    v1 = 4;
    goto LABEL_22;
  }
  if ( v7 == 1 )
    goto LABEL_21;
LABEL_22:
  v10 = v1 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 != 4 )
          goto LABEL_6;
        *v13 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v13 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v13 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v13 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140220E14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_530(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140220EF0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_531(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140220FCC) ----------------------------------------------------
char            sub_140220FCC(__int64 a1)
{
  __int64 v1; // rbx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  _QWORD *v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v13 = nullptr;
  if ( !unknown_libname_278(a1, &v13) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 60);
  if ( v4 > 5 )
  {
    v8 = v4 - 6;
    if ( !v8 )
      goto LABEL_21;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_21;
    v6 = v9 - 2;
    if ( !v6 )
      goto LABEL_21;
  }
  else
  {
    if ( v4 == 5 )
    {
LABEL_21:
      v1 = 8;
      goto LABEL_22;
    }
    if ( !v4 )
      goto LABEL_15;
    v5 = v4 - 1;
    if ( !v5 )
    {
      v1 = 1;
      goto LABEL_22;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 2;
      goto LABEL_22;
    }
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_15:
    v1 = 4;
    goto LABEL_22;
  }
  if ( v7 == 1 )
    goto LABEL_21;
LABEL_22:
  v10 = v1 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 != 4 )
          goto LABEL_6;
        *v13 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v13 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v13 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v13 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (00000001402210D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_532(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (00000001402211AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_533(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140221288) ----------------------------------------------------
char            sub_140221288(__int64 a1)
{
  __int64 v1; // rbx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  _QWORD *v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v13 = nullptr;
  if ( !unknown_libname_279(a1, &v13) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 60);
  if ( v4 > 5 )
  {
    v8 = v4 - 6;
    if ( !v8 )
      goto LABEL_21;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_21;
    v6 = v9 - 2;
    if ( !v6 )
      goto LABEL_21;
  }
  else
  {
    if ( v4 == 5 )
    {
LABEL_21:
      v1 = 8;
      goto LABEL_22;
    }
    if ( !v4 )
      goto LABEL_15;
    v5 = v4 - 1;
    if ( !v5 )
    {
      v1 = 1;
      goto LABEL_22;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 2;
      goto LABEL_22;
    }
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_15:
    v1 = 4;
    goto LABEL_22;
  }
  if ( v7 == 1 )
    goto LABEL_21;
LABEL_22:
  v10 = v1 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 != 4 )
          goto LABEL_6;
        *v13 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v13 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v13 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v13 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (000000014022138C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_534(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 <= 5 )
  {
    if ( v5 == 5 )
      goto LABEL_18;
    if ( !v5 )
      goto LABEL_17;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v9 = v5 - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v7 = v10 - 2;
      if ( v7 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
LABEL_2:
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}


//----- (0000000140221708) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_535(__int64 a1)
{
  int v2; // r8d
  __m128i *v3; // rcx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // al
  unsigned int v8; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v3);
  v5 = v4 - 2;
  if ( !v5 )
  {
    v7 = 0;
LABEL_9:
    if ( v7 )
    {
LABEL_10:
      if ( !v3 )
      {
        v3 = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      v8 = sub_140254F48(v3, v2);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 || v6 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v7 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !v3 )
  {
    v3 = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  v8 = (unsigned int)strnlen_sr(v3, v2);
LABEL_16:
  *(_DWORD *)(a1 + 80) = v8;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (00000001402217A0) ----------------------------------------------------
char            sub_1402217A0(__int64 a1)
{
  __m128i **v1; // rdi
  char result; // al
  int v4; // edx
  bool v5; // al
  __m128i *v6; // rcx
  unsigned int v7; // eax
  __m128i *v8; // rcx

  v1 = (__m128i **)(a1 + 72);
  result = unknown_libname_252(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v4 = *(_DWORD *)(a1 + 56);
    if ( v4 == -1 )
      v4 = 0x7FFFFFFF;
    switch ( *(_DWORD *)(a1 + 60) )
    {
      case 2:
        v5 = 0;
        break;
      case 3:
      case 0xC:
LABEL_13:
        v6 = *v1;
        if ( !*v1 )
        {
          v6 = (__m128i *)L"(null)";
          *v1 = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        v7 = sub_140254F48(v6, v4);
LABEL_19:
        *(_DWORD *)(a1 + 80) = v7;
        return 1;
      case 0xD:
LABEL_16:
        v8 = *v1;
        if ( !*v1 )
        {
          v8 = (__m128i *)"(null)";
          *v1 = (__m128i *)"(null)";
        }
        v7 = (unsigned int)strnlen_sr(v8, v4);
        goto LABEL_19;
      default:
        v5 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
        break;
    }
    if ( v5 )
      goto LABEL_13;
    goto LABEL_16;
  }
  return result;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221858) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_536(__int64 a1)
{
  int v2; // r8d
  __m128i *v3; // rcx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // al
  unsigned int v8; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v3);
  v5 = v4 - 2;
  if ( !v5 )
  {
    v7 = 0;
LABEL_9:
    if ( v7 )
    {
LABEL_10:
      if ( !v3 )
      {
        v3 = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      v8 = sub_140254F48(v3, v2);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 || v6 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v7 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !v3 )
  {
    v3 = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  v8 = (unsigned int)strnlen_sr(v3, v2);
LABEL_16:
  *(_DWORD *)(a1 + 80) = v8;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (00000001402218F0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_537(__int64 a1)
{
  int v2; // r8d
  __m128i *v3; // rcx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // al
  unsigned int v8; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v3);
  v5 = v4 - 2;
  if ( !v5 )
  {
    v7 = 0;
LABEL_9:
    if ( v7 )
    {
LABEL_10:
      if ( !v3 )
      {
        v3 = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      v8 = sub_140254F48(v3, v2);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 || v6 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v7 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !v3 )
  {
    v3 = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  v8 = (unsigned int)strnlen_sr(v3, v2);
LABEL_16:
  *(_DWORD *)(a1 + 80) = v8;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221988) ----------------------------------------------------
char            sub_140221988(__int64 a1)
{
  __m128i **v1; // rdi
  char result; // al
  int v4; // edx
  bool v5; // al
  __m128i *v6; // rcx
  unsigned int v7; // eax
  __m128i *v8; // rcx

  v1 = (__m128i **)(a1 + 72);
  result = unknown_libname_253(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v4 = *(_DWORD *)(a1 + 56);
    if ( v4 == -1 )
      v4 = 0x7FFFFFFF;
    switch ( *(_DWORD *)(a1 + 60) )
    {
      case 2:
        v5 = 0;
        break;
      case 3:
      case 0xC:
LABEL_13:
        v6 = *v1;
        if ( !*v1 )
        {
          v6 = (__m128i *)L"(null)";
          *v1 = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        v7 = sub_140254F48(v6, v4);
LABEL_19:
        *(_DWORD *)(a1 + 80) = v7;
        return 1;
      case 0xD:
LABEL_16:
        v8 = *v1;
        if ( !*v1 )
        {
          v8 = (__m128i *)"(null)";
          *v1 = (__m128i *)"(null)";
        }
        v7 = (unsigned int)strnlen_sr(v8, v4);
        goto LABEL_19;
      default:
        v5 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
        break;
    }
    if ( v5 )
      goto LABEL_13;
    goto LABEL_16;
  }
  return result;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221A40) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_538(__int64 a1)
{
  int v2; // r8d
  __m128i *v3; // rcx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // al
  unsigned int v8; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v3);
  v5 = v4 - 2;
  if ( !v5 )
  {
    v7 = 0;
LABEL_9:
    if ( v7 )
    {
LABEL_10:
      if ( !v3 )
      {
        v3 = (__m128i *)L"(null)";
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
      }
      *(_BYTE *)(a1 + 84) = 1;
      v8 = sub_140254F48(v3, v2);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 || v6 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v7 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !v3 )
  {
    v3 = (__m128i *)"(null)";
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
  }
  v8 = (unsigned int)strnlen_sr(v3, v2);
LABEL_16:
  *(_DWORD *)(a1 + 80) = v8;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221AD8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_539(__int64 a1)
{
  int v2; // esi
  int v3; // r8d
  __int16 v4; // dx
  __m128i *v5; // rbx
  int v6; // eax
  int i; // r9d
  __m128i *v8; // rcx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 60);
  v4 = *(_WORD *)(a1 + 66);
  v5 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v5);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, v4, v3) )
  {
    if ( !v5 )
    {
      v5 = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    v6 = sub_140254F48(v5, v2);
  }
  else
  {
    if ( !v5 )
    {
      v5 = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < v2; v5 = (__m128i *)&SR_VEC_PTR_LANES(128, v8, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, v5, i8)[0] )
        break;
      v8 = (__m128i *)&SR_VEC_PTR_LANES(128, v5, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, v5, u8)[0]) & 0x8000) == 0 )
        v8 = v5;
      ++i;
    }
    v6 = i;
  }
  *(_DWORD *)(a1 + 80) = v6;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221BA0) ----------------------------------------------------
char            sub_140221BA0(__int64 a1)
{
  __m128i **v1; // rsi
  char result; // al
  int v4; // ebp
  __m128i *v5; // rbx
  int v6; // eax
  int i; // r8d
  __m128i *v8; // rax

  v1 = (__m128i **)(a1 + 72);
  result = unknown_libname_254(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v4 = *(_DWORD *)(a1 + 56);
      if ( v4 == -1 )
        v4 = 0x7FFFFFFF;
      v5 = *v1;
      if ( sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60)) )
      {
        if ( !v5 )
        {
          v5 = (__m128i *)L"(null)";
          *v1 = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        v6 = sub_140254F48(v5, v4);
      }
      else
      {
        if ( !v5 )
        {
          v5 = (__m128i *)"(null)";
          *v1 = (__m128i *)"(null)";
        }
        for ( i = 0; i < v4; v5 = (__m128i *)&SR_VEC_PTR_LANES(128, v8, i8)[1] )
        {
          if ( !SR_VEC_PTR_LANES(128, v5, i8)[0] )
            break;
          v8 = (__m128i *)&SR_VEC_PTR_LANES(128, v5, i8)[1];
          if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, v5, u8)[0]) & 0x8000) == 0 )
            v8 = v5;
          ++i;
        }
        v6 = i;
      }
      *(_DWORD *)(a1 + 80) = v6;
    }
    return 1;
  }
  return result;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221C8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_540(__int64 a1)
{
  int v2; // esi
  int v3; // r8d
  __int16 v4; // dx
  __m128i *v5; // rbx
  int v6; // eax
  int i; // r9d
  __m128i *v8; // rcx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 60);
  v4 = *(_WORD *)(a1 + 66);
  v5 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v5);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, v4, v3) )
  {
    if ( !v5 )
    {
      v5 = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    v6 = sub_140254F48(v5, v2);
  }
  else
  {
    if ( !v5 )
    {
      v5 = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < v2; v5 = (__m128i *)&SR_VEC_PTR_LANES(128, v8, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, v5, i8)[0] )
        break;
      v8 = (__m128i *)&SR_VEC_PTR_LANES(128, v5, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, v5, u8)[0]) & 0x8000) == 0 )
        v8 = v5;
      ++i;
    }
    v6 = i;
  }
  *(_DWORD *)(a1 + 80) = v6;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221D54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_541(__int64 a1)
{
  int v2; // esi
  int v3; // r8d
  __int16 v4; // dx
  __m128i *v5; // rbx
  int v6; // eax
  int i; // r9d
  __m128i *v8; // rcx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 60);
  v4 = *(_WORD *)(a1 + 66);
  v5 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v5);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, v4, v3) )
  {
    if ( !v5 )
    {
      v5 = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    v6 = sub_140254F48(v5, v2);
  }
  else
  {
    if ( !v5 )
    {
      v5 = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < v2; v5 = (__m128i *)&SR_VEC_PTR_LANES(128, v8, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, v5, i8)[0] )
        break;
      v8 = (__m128i *)&SR_VEC_PTR_LANES(128, v5, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, v5, u8)[0]) & 0x8000) == 0 )
        v8 = v5;
      ++i;
    }
    v6 = i;
  }
  *(_DWORD *)(a1 + 80) = v6;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221E1C) ----------------------------------------------------
char            sub_140221E1C(__int64 a1)
{
  __m128i **v1; // rsi
  char result; // al
  int v4; // ebp
  __m128i *v5; // rbx
  int v6; // eax
  int i; // r8d
  __m128i *v8; // rax

  v1 = (__m128i **)(a1 + 72);
  result = unknown_libname_255(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v4 = *(_DWORD *)(a1 + 56);
      if ( v4 == -1 )
        v4 = 0x7FFFFFFF;
      v5 = *v1;
      if ( sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60)) )
      {
        if ( !v5 )
        {
          v5 = (__m128i *)L"(null)";
          *v1 = (__m128i *)L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        v6 = sub_140254F48(v5, v4);
      }
      else
      {
        if ( !v5 )
        {
          v5 = (__m128i *)"(null)";
          *v1 = (__m128i *)"(null)";
        }
        for ( i = 0; i < v4; v5 = (__m128i *)&SR_VEC_PTR_LANES(128, v8, i8)[1] )
        {
          if ( !SR_VEC_PTR_LANES(128, v5, i8)[0] )
            break;
          v8 = (__m128i *)&SR_VEC_PTR_LANES(128, v5, i8)[1];
          if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, v5, u8)[0]) & 0x8000) == 0 )
            v8 = v5;
          ++i;
        }
        v6 = i;
      }
      *(_DWORD *)(a1 + 80) = v6;
    }
    return 1;
  }
  return result;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140221F08) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_542(__int64 a1)
{
  int v2; // esi
  int v3; // r8d
  __int16 v4; // dx
  __m128i *v5; // rbx
  int v6; // eax
  int i; // r9d
  __m128i *v8; // rcx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 60);
  v4 = *(_WORD *)(a1 + 66);
  v5 = *(__m128i **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(v5);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( sub_140211A94(*(_QWORD *)a1, v4, v3) )
  {
    if ( !v5 )
    {
      v5 = (__m128i *)L"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(L"(null)");
    }
    *(_BYTE *)(a1 + 84) = 1;
    v6 = sub_140254F48(v5, v2);
  }
  else
  {
    if ( !v5 )
    {
      v5 = (__m128i *)"(null)";
      *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    }
    for ( i = 0; i < v2; v5 = (__m128i *)&SR_VEC_PTR_LANES(128, v8, i8)[1] )
    {
      if ( !SR_VEC_PTR_LANES(128, v5, i8)[0] )
        break;
      v8 = (__m128i *)&SR_VEC_PTR_LANES(128, v5, i8)[1];
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * SR_VEC_PTR_LANES(128, v5, u8)[0]) & 0x8000) == 0 )
        v8 = v5;
      ++i;
    }
    v6 = i;
  }
  *(_DWORD *)(a1 + 80) = v6;
  return 1;
}

// 140284CC0: using guessed type __int16[7];

//----- (0000000140222018) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_549(__int64 a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int i; // r10d
  _BYTE *v5; // rcx

  v2 = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; v2 = v5 + 1 )
  {
    if ( !*v2 )
      break;
    v5 = v2 + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*v2) & 0x8000) == 0 )
      v5 = v2;
    ++i;
  }
  return i;
}


//----- (000000014022206C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_550(__int64 a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int i; // r10d
  _BYTE *v5; // rcx

  v2 = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; v2 = v5 + 1 )
  {
    if ( !*v2 )
      break;
    v5 = v2 + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*v2) & 0x8000) == 0 )
      v5 = v2;
    ++i;
  }
  return i;
}


//----- (00000001402220C0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_551(__int64 a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int i; // r10d
  _BYTE *v5; // rcx

  v2 = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; v2 = v5 + 1 )
  {
    if ( !*v2 )
      break;
    v5 = v2 + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*v2) & 0x8000) == 0 )
      v5 = v2;
    ++i;
  }
  return i;
}


//----- (0000000140222114) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_552(__int64 a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int i; // r10d
  _BYTE *v5; // rcx

  v2 = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; v2 = v5 + 1 )
  {
    if ( !*v2 )
      break;
    v5 = v2 + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*v2) & 0x8000) == 0 )
      v5 = v2;
    ++i;
  }
  return i;
}


//----- (0000000140222168) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_553(__int64 a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int i; // r10d
  _BYTE *v5; // rcx

  v2 = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; v2 = v5 + 1 )
  {
    if ( !*v2 )
      break;
    v5 = v2 + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*v2) & 0x8000) == 0 )
      v5 = v2;
    ++i;
  }
  return i;
}


//----- (00000001402221BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_554(__int64 a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int i; // r10d
  _BYTE *v5; // rcx

  v2 = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; v2 = v5 + 1 )
  {
    if ( !*v2 )
      break;
    v5 = v2 + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*v2) & 0x8000) == 0 )
      v5 = v2;
    ++i;
  }
  return i;
}


//----- (0000000140222390) ----------------------------------------------------
char            sub_140222390(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _BYTE *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  char v10; // r9
  __int64 v11; // rdx
  _BYTE *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CCCC(v2, (__int64 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_BYTE *)(a1 + 65);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_140214A64(a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_BYTE *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _BYTE *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  char v10; // r9
  __int64 v11; // rdx
  _BYTE *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CCCC(v2, (__int64 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_BYTE *)(a1 + 65);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_140214C94(a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_BYTE *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  unsigned __int16 *v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _WORD *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  __int16 v10; // r9
  __int64 v11; // rdx
  _WORD *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(unsigned __int16 **)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CDD4(v2, (unsigned __int16 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_WORD *)(a1 + 66);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_WORD *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  unsigned __int16 *v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _WORD *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  __int16 v10; // r9
  __int64 v11; // rdx
  _WORD *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(unsigned __int16 **)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CDD4(v2, (unsigned __int16 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 52) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_WORD *)(a1 + 66);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_WORD *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _BYTE *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  char v10; // r9
  __int64 v11; // rdx
  _BYTE *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CCCC(v2, (__int64 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_BYTE *)(a1 + 65);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_140214A64(a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_BYTE *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _BYTE *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  char v10; // r9
  __int64 v11; // rdx
  _BYTE *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CCCC(v2, (__int64 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_BYTE *)(a1 + 65);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_140214C94(a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_BYTE *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  unsigned __int16 *v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _WORD *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  __int16 v10; // r9
  __int64 v11; // rdx
  _WORD *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(unsigned __int16 **)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CDD4(v2, (unsigned __int16 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_WORD *)(a1 + 66);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_WORD *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  unsigned __int16 *v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _WORD *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  __int16 v10; // r9
  __int64 v11; // rdx
  _WORD *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(unsigned __int16 **)(a1 + 24);
    v3 = 0;
    v13 = nullptr;
    v4 = sub_14023CDD4(v2, (unsigned __int16 *)&v13, 0xAu);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v13;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_WORD *)(a1 + 66);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v11, 1, v10, v9) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_WORD *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
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
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    return sub_14022389C(v1);
  *errno_sr() = 22;
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
  return 0;
}


//----- (0000000140222E94) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_567(__int64 a1)
{
  char *v2; // rcx
  char v3; // al
  int v4; // edx
  int v6; // eax
  bool v7; // zf
  _BYTE *v8; // rcx
  int v9; // edx
  _BYTE *v10; // [rsp+30h] [rbp+8h] BYREF
  _BYTE *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  v2 = *(char **)(a1 + 24);
  v3 = *v2;
  if ( *v2 == 37 )
    return 1;
  v4 = *(_DWORD *)(a1 + 1148);
  if ( v4 )
  {
LABEL_13:
    if ( v4 == 2 )
      goto LABEL_14;
    return 1;
  }
  v10 = nullptr;
  if ( (unsigned __int8)(v3 - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    v4 = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CCCC((__int64)v2, (__int64 *)&v10, 0xAu) <= 0 || *v10 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  v2 = *(char **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  v11 = nullptr;
  v6 = sub_14023CCCC((__int64)v2, (__int64 *)&v11, 0xAu);
  v7 = *(_DWORD *)(a1 + 1144) == 1;
  v8 = v11;
  v9 = v6 - 1;
  *(_DWORD *)(a1 + 3564) = v6 - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 1);
  if ( !v7 )
    return 1;
  if ( v9 >= 0 && *v8 == 36 && v9 < 100 )
  {
    if ( v9 <= *(_DWORD *)(a1 + 3560) )
      v9 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v9;
    return 1;
  }
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (0000000140222FA0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_568(__int64 a1)
{
  char *v2; // rcx
  char v3; // al
  int v4; // edx
  int v6; // eax
  bool v7; // zf
  _BYTE *v8; // rcx
  int v9; // edx
  _BYTE *v10; // [rsp+30h] [rbp+8h] BYREF
  _BYTE *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  v2 = *(char **)(a1 + 24);
  v3 = *v2;
  if ( *v2 == 37 )
    return 1;
  v4 = *(_DWORD *)(a1 + 1148);
  if ( v4 )
  {
LABEL_13:
    if ( v4 == 2 )
      goto LABEL_14;
    return 1;
  }
  v10 = nullptr;
  if ( (unsigned __int8)(v3 - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    v4 = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CCCC((__int64)v2, (__int64 *)&v10, 0xAu) <= 0 || *v10 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  v2 = *(char **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  v11 = nullptr;
  v6 = sub_14023CCCC((__int64)v2, (__int64 *)&v11, 0xAu);
  v7 = *(_DWORD *)(a1 + 1144) == 1;
  v8 = v11;
  v9 = v6 - 1;
  *(_DWORD *)(a1 + 3564) = v6 - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 1);
  if ( !v7 )
    return 1;
  if ( v9 >= 0 && *v8 == 36 && v9 < 100 )
  {
    if ( v9 <= *(_DWORD *)(a1 + 3560) )
      v9 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v9;
    return 1;
  }
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (00000001402230AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_569(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  unsigned __int16 v3; // ax
  int v4; // edx
  int v6; // eax
  bool v7; // zf
  _WORD *v8; // rcx
  int v9; // edx
  _WORD *v10; // [rsp+30h] [rbp+8h] BYREF
  _WORD *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  v2 = *(unsigned __int16 **)(a1 + 24);
  v3 = *v2;
  if ( *v2 == 37 )
    return 1;
  v4 = *(_DWORD *)(a1 + 1148);
  if ( v4 )
  {
LABEL_13:
    if ( v4 == 2 )
      goto LABEL_14;
    return 1;
  }
  v10 = nullptr;
  if ( (unsigned __int16)(v3 - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    v4 = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CDD4(v2, (unsigned __int16 *)&v10, 0xAu) <= 0 || *v10 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  v2 = *(unsigned __int16 **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  v11 = nullptr;
  v6 = sub_14023CDD4(v2, (unsigned __int16 *)&v11, 0xAu);
  v7 = *(_DWORD *)(a1 + 1144) == 1;
  v8 = v11;
  v9 = v6 - 1;
  *(_DWORD *)(a1 + 3564) = v6 - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 1);
  if ( !v7 )
    return 1;
  if ( v9 >= 0 && *v8 == 36 && v9 < 100 )
  {
    if ( v9 <= *(_DWORD *)(a1 + 3560) )
      v9 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v9;
    return 1;
  }
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (00000001402231C0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_570(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  unsigned __int16 v3; // ax
  int v4; // edx
  int v6; // eax
  bool v7; // zf
  _WORD *v8; // rcx
  int v9; // edx
  _WORD *v10; // [rsp+30h] [rbp+8h] BYREF
  _WORD *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  v2 = *(unsigned __int16 **)(a1 + 24);
  v3 = *v2;
  if ( *v2 == 37 )
    return 1;
  v4 = *(_DWORD *)(a1 + 1148);
  if ( v4 )
  {
LABEL_13:
    if ( v4 == 2 )
      goto LABEL_14;
    return 1;
  }
  v10 = nullptr;
  if ( (unsigned __int16)(v3 - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    v4 = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CDD4(v2, (unsigned __int16 *)&v10, 0xAu) <= 0 || *v10 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 1160)), 0, 0x960u);
  v2 = *(unsigned __int16 **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  v11 = nullptr;
  v6 = sub_14023CDD4(v2, (unsigned __int16 *)&v11, 0xAu);
  v7 = *(_DWORD *)(a1 + 1144) == 1;
  v8 = v11;
  v9 = v6 - 1;
  *(_DWORD *)(a1 + 3564) = v6 - 1;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 1);
  if ( !v7 )
    return 1;
  if ( v9 >= 0 && *v8 == 36 && v9 < 100 )
  {
    if ( v9 <= *(_DWORD *)(a1 + 3560) )
      v9 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v9;
    return 1;
  }
  *errno_sr() = 22;
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
  return 0;
}


//----- (0000000140223394) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_575(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v2 = a1 + 1160;
    v3 = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(v2 + 8) = v4;
        v5 = v2;
        if ( *(_DWORD *)v2 != 1 && *(_DWORD *)v2 != 2 && (unsigned int)(*(_DWORD *)v2 - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        v4 = *(_QWORD *)(a1 + 32);
        v2 += 24;
        if ( v5 == a1 + 1160 + 8 * v3 )
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
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v2 = a1 + 1160;
    v3 = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(v2 + 8) = v4;
        v5 = v2;
        if ( *(_DWORD *)v2 != 1 && *(_DWORD *)v2 != 2 && (unsigned int)(*(_DWORD *)v2 - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        v4 = *(_QWORD *)(a1 + 32);
        v2 += 24;
        if ( v5 == a1 + 1160 + 8 * v3 )
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
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v2 = a1 + 1160;
    v3 = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(v2 + 8) = v4;
        v5 = v2;
        if ( *(_DWORD *)v2 != 1 && *(_DWORD *)v2 != 2 && (unsigned int)(*(_DWORD *)v2 - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        v4 = *(_QWORD *)(a1 + 32);
        v2 += 24;
        if ( v5 == a1 + 1160 + 8 * v3 )
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
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v2 = a1 + 1160;
    v3 = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(v2 + 8) = v4;
        v5 = v2;
        if ( *(_DWORD *)v2 != 1 && *(_DWORD *)v2 != 2 && (unsigned int)(*(_DWORD *)v2 - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        v4 = *(_QWORD *)(a1 + 32);
        v2 += 24;
        if ( v5 == a1 + 1160 + 8 * v3 )
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
  __int64 v1; // rax
  int v3; // r8d
  char v4; // r9
  char v5; // bl
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v1 = *(int *)(a1 + 3564);
    if ( (unsigned int)v1 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v3 = *(_DWORD *)(a1 + 60);
    v4 = *(_BYTE *)(a1 + 65);
    v5 = 0;
    v6 = a1 + 8 * (v1 + 2 * v1 + 145);
    if ( *(_DWORD *)v6 )
    {
      if ( !sub_140214A64(a1, v6, 4, v4, v3) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v5;
      }
    }
    else
    {
      *(_DWORD *)v6 = 4;
      *(_BYTE *)(v6 + 4) = v4;
      *(_DWORD *)(v6 + 16) = v3;
    }
    return 1;
  }
  return 1;
}


//----- (00000001402236B0) ----------------------------------------------------
char            sub_1402236B0(__int64 a1)
{
  __int64 v1; // rax
  int v3; // r8d
  char v4; // r9
  char v5; // bl
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v1 = *(int *)(a1 + 3564);
    if ( (unsigned int)v1 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v3 = *(_DWORD *)(a1 + 60);
    v4 = *(_BYTE *)(a1 + 65);
    v5 = 0;
    v6 = a1 + 8 * (v1 + 2 * v1 + 145);
    if ( *(_DWORD *)v6 )
    {
      if ( !sub_140214C94(a1, v6, 4, v4, v3) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v5;
      }
    }
    else
    {
      *(_DWORD *)v6 = 4;
      *(_BYTE *)(v6 + 4) = v4;
      *(_DWORD *)(v6 + 16) = v3;
    }
    return 1;
  }
  return 1;
}


//----- (000000014022374C) ----------------------------------------------------
char            sub_14022374C(__int64 a1)
{
  __int64 v1; // rax
  int v3; // r8d
  __int16 v4; // r9
  char v5; // bl
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v1 = *(int *)(a1 + 3564);
    if ( (unsigned int)v1 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v3 = *(_DWORD *)(a1 + 60);
    v4 = *(_WORD *)(a1 + 66);
    v5 = 0;
    v6 = a1 + 8 * (v1 + 2 * v1 + 145);
    if ( *(_DWORD *)v6 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v6, 4, v4, v3) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v5;
      }
    }
    else
    {
      *(_DWORD *)v6 = 4;
      *(_WORD *)(v6 + 4) = v4;
      *(_DWORD *)(v6 + 16) = v3;
    }
    return 1;
  }
  return 1;
}


//----- (00000001402237EC) ----------------------------------------------------
char            sub_1402237EC(__int64 a1)
{
  __int64 v1; // rax
  int v3; // r8d
  __int16 v4; // r9
  char v5; // bl
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v1 = *(int *)(a1 + 3564);
    if ( (unsigned int)v1 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v3 = *(_DWORD *)(a1 + 60);
    v4 = *(_WORD *)(a1 + 66);
    v5 = 0;
    v6 = a1 + 8 * (v1 + 2 * v1 + 145);
    if ( *(_DWORD *)v6 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v6, 4, v4, v3) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v5;
      }
    }
    else
    {
      *(_DWORD *)v6 = 4;
      *(_WORD *)(v6 + 4) = v4;
      *(_DWORD *)(v6 + 16) = v3;
    }
    return 1;
  }
  return 1;
}


//----- (000000014022389C) ----------------------------------------------------
char            sub_14022389C(__int64 a1)
{
  int v1; // eax
  _BYTE *v2; // r10
  _BYTE *v3; // rdx

  if ( (*(_DWORD *)(a1 + 20) & 0x1000) != 0 )
    return 1;
  v1 = fileno((FILE *)a1);
  v2 = &unk_1403022C0;
  v3 = (unsigned int)(v1 + 2) <= 1
     ? &unk_1403022C0
     : (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v1 >> 6) + 19065401] + 72LL * (v1 & 0x3F));
  if ( !v3[57] )
  {
    if ( (unsigned int)(v1 + 2) > 1 )
      v2 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v1 >> 6) + 19065401] + 72LL * (v1 & 0x3F));
    if ( (v2[61] & 1) == 0 )
      return 1;
  }
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014022399C) ----------------------------------------------------
__int64            sub_14022399C(__int64 *a1, unsigned __int8 a2, _DWORD *a3)
{
  __int64 result; // rax

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
  __int64 result; // rax

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
  bool result; // al

  result = 1;
  if ( (*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8) )
    return (unsigned int)unknown_libname_207(a2, *a1) != -1;
  return result;
}


//----- (0000000140223B00) ----------------------------------------------------
bool            sub_140223B00(__int64 *a1, unsigned __int16 a2)
{
  bool result; // al

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
  unsigned __int16 *v2; // rsi
  int v3; // edi
  void *v4; // r9
  _DWORD *v5; // r9
  int v6; // r8d
  int **v7; // r10
  _DWORD *v8; // r9
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  char v12[12]; // [rsp+34h] [rbp-24h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    v2 = *(unsigned __int16 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = (void *)*v2;
      v11 = 0;
      ++v2;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&v11, (     struct DLGTEMPLATE *)v12, (struct CWnd *)6, v4)
        || !v11 )
      {
        break;
      }
      v5 = (_DWORD *)(a1 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL) )
        sub_1402248A8((int **)(a1 + 1128), v12, v11, v5, (int **)(a1 + 16));
      else
        *v5 += v11;
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223C46: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 80);
    v7 = (int **)(a1 + 1128);
    v8 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*v7 + 1) )
      sub_1402248A8(v7, *(char **)(a1 + 72), v6, v8, (int **)(a1 + 16));
    else
      *v8 += v6;
  }
  return 1; /* 0x140223C46: mov al, 1 */
}

// 140223B82: conditional instruction was optimized away because eax.4>=1
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (0000000140223C68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_582(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  int v3; // edi
  void *v4; // r9
  _DWORD *v5; // r9
  int v6; // r8d
  int **v7; // r10
  _DWORD *v8; // r9
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  char v12[12]; // [rsp+34h] [rbp-24h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    v2 = *(unsigned __int16 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = (void *)*v2;
      v11 = 0;
      ++v2;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&v11, (     struct DLGTEMPLATE *)v12, (struct CWnd *)6, v4)
        || !v11 )
      {
        break;
      }
      v5 = (_DWORD *)(a1 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL) )
        sub_1402248A8((int **)(a1 + 1128), v12, v11, v5, (int **)(a1 + 16));
      else
        *v5 += v11;
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223D6A: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 80);
    v7 = (int **)(a1 + 1128);
    v8 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*v7 + 1) )
      sub_1402248A8(v7, *(char **)(a1 + 72), v6, v8, (int **)(a1 + 16));
    else
      *v8 += v6;
  }
  return 1; /* 0x140223D6A: mov al, 1 */
}

// 140223CA6: conditional instruction was optimized away because eax.4>=1
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (0000000140223D8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_583(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  int v3; // edi
  void *v4; // r9
  _DWORD *v5; // r9
  int v6; // r8d
  int **v7; // r10
  _DWORD *v8; // r9
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  char v12[12]; // [rsp+34h] [rbp-24h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    v2 = *(unsigned __int16 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = (void *)*v2;
      v11 = 0;
      ++v2;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&v11, (     struct DLGTEMPLATE *)v12, (struct CWnd *)6, v4)
        || !v11 )
      {
        break;
      }
      v5 = (_DWORD *)(a1 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL) )
        sub_1402248A8((int **)(a1 + 1128), v12, v11, v5, (int **)(a1 + 16));
      else
        *v5 += v11;
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223E8E: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 80);
    v7 = (int **)(a1 + 1128);
    v8 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*v7 + 1) )
      sub_1402248A8(v7, *(char **)(a1 + 72), v6, v8, (int **)(a1 + 16));
    else
      *v8 += v6;
  }
  return 1; /* 0x140223E8E: mov al, 1 */
}

// 140223DCA: conditional instruction was optimized away because eax.4>=1
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (0000000140223EB0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_584(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  int v3; // edi
  void *v4; // r9
  int v5; // r8d
       __m128i *v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v11[12]; // [rsp+34h] [rbp-24h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    v2 = *(unsigned __int16 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = (void *)*v2;
      v10 = 0;
      ++v2;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&v10, (     struct DLGTEMPLATE *)v11, (struct CWnd *)6, v4)
        || !v10 )
      {
        break;
      }
      v9 = a1 + 16;
      unknown_libname_593(a1 + 1128, (     __m128i *)v11, v10, (_DWORD *)(a1 + 40));
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x140223F66: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 80);
    v6 = *(     __m128i **)(a1 + 72);
    v9 = a1 + 16;
    unknown_libname_593(a1 + 1128, v6, v5, (_DWORD *)(a1 + 40));
  }
  return 1; /* 0x140223F66: mov al, 1 */
}

// 140223EE6: conditional instruction was optimized away because eax.4>=1
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (0000000140223F88) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_585(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  int v3; // edi
  void *v4; // r9
  int v5; // r8d
       __m128i *v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v11[12]; // [rsp+34h] [rbp-24h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    v2 = *(unsigned __int16 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = (void *)*v2;
      v10 = 0;
      ++v2;
      if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&v10, (     struct DLGTEMPLATE *)v11, (struct CWnd *)6, v4)
        || !v10 )
      {
        break;
      }
      v9 = a1 + 16;
      unknown_libname_593(a1 + 1128, (     __m128i *)v11, v10, (_DWORD *)(a1 + 40));
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1; /* 0x14022403E: mov al, 1 */
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 80);
    v6 = *(     __m128i **)(a1 + 72);
    v9 = a1 + 16;
    unknown_libname_593(a1 + 1128, v6, v5, (_DWORD *)(a1 + 40));
  }
  return 1; /* 0x14022403E: mov al, 1 */
}

// 140223FBE: conditional instruction was optimized away because eax.4>=1
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

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
  sr_anon_49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rbp
  int v7; // r8d
  int **v8; // r10
  _DWORD *v9; // r9
  unsigned __int16 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    v7 = *(_DWORD *)(a1 + 80);
    v8 = (int **)(a1 + 1128);
    v9 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*v8 + 1) )
      sub_1402249A0(v8, *(unsigned __int16 **)(a1 + 72), v7, v9, (int **)(a1 + 16));
    else
      *v9 += v7;
  }
  else
  {
    v2 = *(sr_anon_49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v11 = 0;
      v5 = mbtowc_l((sr_anon_115 *)&v11, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL), (struct __crt_locale_pointers *)v4);
      v6 = v5;
      if ( v5 <= 0 )
        break;
      if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
        && (unsigned __int16)sub_140256B38(v11, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
      {
        *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
      }
      v2 = (sr_anon_49 *)((char *)v2 + v6);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (0000000140224240) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_588(__int64 a1)
{
  sr_anon_49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rbp
  int v7; // r8d
  int **v8; // r10
  _DWORD *v9; // r9
  unsigned __int16 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    v7 = *(_DWORD *)(a1 + 80);
    v8 = (int **)(a1 + 1128);
    v9 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*v8 + 1) )
      sub_1402249A0(v8, *(unsigned __int16 **)(a1 + 72), v7, v9, (int **)(a1 + 16));
    else
      *v9 += v7;
  }
  else
  {
    v2 = *(sr_anon_49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v11 = 0;
      v5 = mbtowc_l((sr_anon_115 *)&v11, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL), (struct __crt_locale_pointers *)v4);
      v6 = v5;
      if ( v5 <= 0 )
        break;
      if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
        && (unsigned __int16)sub_140256B38(v11, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
      {
        *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
      }
      v2 = (sr_anon_49 *)((char *)v2 + v6);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (0000000140224348) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_589(__int64 a1)
{
  sr_anon_49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rbp
  int v7; // r8d
  int **v8; // r10
  _DWORD *v9; // r9
  unsigned __int16 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    v7 = *(_DWORD *)(a1 + 80);
    v8 = (int **)(a1 + 1128);
    v9 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *((_QWORD *)*v8 + 1) )
      sub_1402249A0(v8, *(unsigned __int16 **)(a1 + 72), v7, v9, (int **)(a1 + 16));
    else
      *v9 += v7;
  }
  else
  {
    v2 = *(sr_anon_49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v11 = 0;
      v5 = mbtowc_l((sr_anon_115 *)&v11, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL), (struct __crt_locale_pointers *)v4);
      v6 = v5;
      if ( v5 <= 0 )
        break;
      if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
        && (unsigned __int16)sub_140256B38(v11, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
      {
        *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
      }
      v2 = (sr_anon_49 *)((char *)v2 + v6);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (0000000140224450) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_590(__int64 a1)
{
  sr_anon_49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rcx
  __int16 v7; // dx
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    unknown_libname_594(a1 + 1128, *(     __m128i **)(a1 + 72), *(_DWORD *)(a1 + 80), (_DWORD *)(a1 + 40));
  }
  else
  {
    v2 = *(sr_anon_49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v9 = 0;
      v5 = mbtowc_l((sr_anon_115 *)&v9, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL), (struct __crt_locale_pointers *)v4);
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(a1 + 1128);
      v7 = v9;
      if ( *(_QWORD *)(v6 + 16) == *(_QWORD *)(v6 + 8) )
      {
        if ( *(_BYTE *)(v6 + 24) )
          ++*(_DWORD *)(a1 + 40);
        else
          *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
        ++*(_QWORD *)(v6 + 16);
        ***(_WORD ***)(a1 + 1128) = v7;
        **(_QWORD **)(a1 + 1128) += 2LL;
      }
      v2 = (sr_anon_49 *)((char *)v2 + v5);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014022453C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_591(__int64 a1)
{
  sr_anon_49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rcx
  __int16 v7; // dx
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    unknown_libname_594(a1 + 1128, *(     __m128i **)(a1 + 72), *(_DWORD *)(a1 + 80), (_DWORD *)(a1 + 40));
  }
  else
  {
    v2 = *(sr_anon_49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v9 = 0;
      v5 = mbtowc_l((sr_anon_115 *)&v9, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL), (struct __crt_locale_pointers *)v4);
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(a1 + 1128);
      v7 = v9;
      if ( *(_QWORD *)(v6 + 16) == *(_QWORD *)(v6 + 8) )
      {
        if ( *(_BYTE *)(v6 + 24) )
          ++*(_DWORD *)(a1 + 40);
        else
          *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
        ++*(_QWORD *)(v6 + 16);
        ***(_WORD ***)(a1 + 1128) = v7;
        **(_QWORD **)(a1 + 1128) += 2LL;
      }
      v2 = (sr_anon_49 *)((char *)v2 + v5);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (0000000140224628) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_592(__int64 a1)
{
  sr_anon_49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rcx
  __int16 v7; // dx
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    unknown_libname_594(a1 + 1128, *(     __m128i **)(a1 + 72), *(_DWORD *)(a1 + 80), (_DWORD *)(a1 + 40));
  }
  else
  {
    v2 = *(sr_anon_49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v9 = 0;
      v5 = mbtowc_l((sr_anon_115 *)&v9, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL), (struct __crt_locale_pointers *)v4);
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(a1 + 1128);
      v7 = v9;
      if ( *(_QWORD *)(v6 + 16) == *(_QWORD *)(v6 + 8) )
      {
        if ( *(_BYTE *)(v6 + 24) )
          ++*(_DWORD *)(a1 + 40);
        else
          *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
        ++*(_QWORD *)(v6 + 16);
        ***(_WORD ***)(a1 + 1128) = v7;
        **(_QWORD **)(a1 + 1128) += 2LL;
      }
      v2 = (sr_anon_49 *)((char *)v2 + v5);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014022475C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_593(__int64 a1,      __m128i *a2, int a3, _DWORD *a4)
{
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __m128i *v11; // rcx

  if ( a3 )
  {
    v5 = a3;
    v6 = *(_QWORD **)a1;
    v8 = v6[1];
    if ( v6[2] == v8 )
    {
      if ( *((_BYTE *)v6 + 24) )
        *a4 += a3;
      else
        *a4 = -1;
    }
    else
    {
      v9 = v8 - v6[2];
      v10 = a3;
      v11 = (__m128i *)*v6;
      if ( v9 < a3 )
        v10 = v9;
      sub_1401FC920(v11, a2, v10);
      **(_QWORD **)a1 += v10;
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) += v10;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 24LL) )
      {
        *a4 += v5;
      }
      else if ( v10 == v5 )
      {
        *a4 += v10;
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
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  __m128i *v11; // rcx

  if ( a3 )
  {
    v5 = a3;
    v6 = *(_QWORD **)a1;
    v8 = v6[1];
    if ( v6[2] == v8 )
    {
      if ( *((_BYTE *)v6 + 24) )
        *a4 += a3;
      else
        *a4 = -1;
    }
    else
    {
      v9 = v8 - v6[2];
      v10 = a3;
      v11 = (__m128i *)*v6;
      if ( v9 < a3 )
        v10 = v9;
      sub_1401FC920(v11, a2, 2 * v10);
      **(_QWORD **)a1 += 2 * v10;
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) += v10;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 24LL) )
      {
        *a4 += v5;
      }
      else if ( v10 == v5 )
      {
        *a4 += v10;
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
  int *result; // rax
  __int64 v7; // rbp
  int *v10; // rbx
  int v11; // r12d
  char *v12; // rbp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (int *)&retaddr;
  v7 = a3;
  v10 = *a5;
  if ( !*a5 )
  {
    result = errno_sr();
    v10 = result;
    *a5 = result;
  }
  v11 = *v10;
  *v10 = 0;
  v12 = &a2[v7];
  while ( a2 != v12 )
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
  if ( !*v10 )
  {
    if ( v11 )
      *v10 = v11;
  }
  return result;
}


//----- (00000001402249A0) ----------------------------------------------------
int *           sub_1402249A0(int **a1, unsigned __int16 *a2, int a3, _DWORD *a4, int **a5)
{
  int *result; // rax
  __int64 v7; // r12
  int *v10; // rbx
  int v11; // ebp
  unsigned __int16 *v12; // r12
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (int *)&retaddr;
  v7 = a3;
  v10 = *a5;
  if ( !*a5 )
  {
    result = errno_sr();
    v10 = result;
    *a5 = result;
  }
  v11 = *v10;
  *v10 = 0;
  v12 = &a2[v7];
  while ( a2 != v12 )
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
  if ( !*v10 )
  {
    if ( v11 )
      *v10 = v11;
  }
  return result;
}


//----- (0000000140224AEC) ----------------------------------------------------
__int64            sub_140224AEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v11 = a4;
  v13 = a3;
  v10 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = &v10;
    v8 = a2;
    v9[1] = &v11;
    v9[2] = &v12;
    v9[3] = &v13;
    v9[4] = &v6;
    return sub_14020D808((__int64)&a5, &v8, v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (0000000140224B78) ----------------------------------------------------
__int64            sub_140224B78(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v11 = a4;
  v13 = a3;
  v10 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = &v10;
    v8 = a2;
    v9[1] = &v11;
    v9[2] = &v12;
    v9[3] = &v13;
    v9[4] = &v6;
    return sub_14020D7C8((__int64)&a5, &v8, v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (0000000140224C04) ----------------------------------------------------
__int64            sub_140224C04(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v11 = a4;
  v13 = a3;
  v10 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = &v10;
    v8 = a2;
    v9[1] = &v11;
    v9[2] = &v12;
    v9[3] = &v13;
    v9[4] = &v6;
    return sub_14020D788((__int64)&a5, &v8, v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (0000000140224C90) ----------------------------------------------------
__int64            sub_140224C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v11 = a4;
  v13 = a3;
  v10 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = &v10;
    v8 = a2;
    v9[1] = &v11;
    v9[2] = &v12;
    v9[3] = &v13;
    v9[4] = &v6;
    return sub_14020D708((__int64)&a5, &v8, v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (0000000140224D1C) ----------------------------------------------------
__int64            sub_140224D1C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v11 = a4;
  v13 = a3;
  v10 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = &v10;
    v8 = a2;
    v9[1] = &v11;
    v9[2] = &v12;
    v9[3] = &v13;
    v9[4] = &v6;
    return sub_14020D748((__int64)&a5, &v8, v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (0000000140224DA8) ----------------------------------------------------
__int64            sub_140224DA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v11 = a4;
  v13 = a3;
  v10 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = &v10;
    v8 = a2;
    v9[1] = &v11;
    v9[2] = &v12;
    v9[3] = &v13;
    v9[4] = &v6;
    return sub_14020D6C8((__int64)&a5, &v8, v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
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
  int *v11; // rax
  unsigned int v12; // ebx
  int v13; // ebx
  int v14; // r14d
  int v15; // eax

  if ( !a5 )
  {
    v11 = errno_sr();
LABEL_3:
    *v11 = 22;
    sub_14024CF6C();
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
    v13 = 1;
    goto LABEL_13;
  }
LABEL_12:
  v13 = 0;
LABEL_13:
  v11 = errno_sr();
  if ( !v13 )
    goto LABEL_3;
  v14 = *v11;
  v12 = -1;
  if ( a3 > a4 )
  {
    v15 = sub_14020DE94(a1, a2, a4 + 1, a5, a6, a7);
    if ( v15 == -2 )
    {
      if ( *errno_sr() == 34 )
        *errno_sr() = v14;
      return (unsigned int)-1;
    }
    goto LABEL_22;
  }
  v15 = sub_14020DE94(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( v15 != -2 )
  {
LABEL_22:
    if ( v15 >= 0 )
      return (unsigned int)v15;
    goto LABEL_23;
  }
  if ( a4 != -1 )
  {
LABEL_23:
    *a2 = 0;
    if ( v15 == -2 )
    {
      *errno_sr() = 34;
      sub_14024CF6C();
    }
    return v12;
  }
  if ( *errno_sr() == 34 )
    *errno_sr() = v14;
  return v12;
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
  int *v11; // rax
  unsigned int v12; // ebx
  int v13; // ebx
  int v14; // r14d
  int v15; // eax

  if ( !a5 )
  {
    v11 = errno_sr();
LABEL_3:
    *v11 = 22;
    sub_14024CF6C();
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
    v13 = 1;
    if ( a3 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( a2 )
    goto LABEL_10;
LABEL_11:
  v13 = 0;
LABEL_12:
  v11 = errno_sr();
  if ( !v13 )
    goto LABEL_3;
  v14 = *v11;
  v12 = -1;
  if ( a3 > a4 )
  {
    v15 = sub_14020E060(a1, a2, a4 + 1, a5, a6, a7);
    if ( v15 == -2 )
    {
      if ( *errno_sr() == 34 )
        *errno_sr() = v14;
      return (unsigned int)-1;
    }
    goto LABEL_21;
  }
  v15 = sub_14020E060(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( v15 != -2 )
  {
LABEL_21:
    if ( v15 >= 0 )
      return (unsigned int)v15;
    goto LABEL_22;
  }
  if ( a4 != -1 )
  {
LABEL_22:
    *a2 = 0;
    if ( v15 == -2 )
    {
      *errno_sr() = 34;
      sub_14024CF6C();
    }
    return v12;
  }
  if ( *errno_sr() == 34 )
    *errno_sr() = v14;
  return v12;
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
  __int64 result; // rax

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
    sub_14024CF6C();
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
  __int64 result; // rax

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
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  return result;
}


//----- (00000001402251E4) ----------------------------------------------------
__int64            sub_1402251E4(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = _lambda_f3caf1ecae5fe01a9a1a6239afa44510___operator_call(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (0000000140225224) ----------------------------------------------------
__int64            sub_140225224(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = unknown_libname_647(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (0000000140225264) ----------------------------------------------------
__int64            sub_140225264(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140225224((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014022528C) ----------------------------------------------------
__int64            sub_14022528C(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_1402251E4((__int64)&v3, &v5, a2, &v4);
}


//----- (00000001402253B4) ----------------------------------------------------
__int64 sub_1402253B4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = (uint64)(uintptr_t)(&v12);
    v7 = a2;
    v8[1] = (uint64)(uintptr_t)(&v10);
    v8[2] = (uint64)(uintptr_t)(&v9);
    v8[3] = (uint64)(uintptr_t)(&v11);
    memcpy(&v8[4], &va, sizeof(va));
    return sub_1402251E4((__int64)v5, &v7, (__int64)v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014022543C) ----------------------------------------------------
__int64 sub_14022543C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = (uint64)(uintptr_t)(&v12);
    v7 = a2;
    v8[1] = (uint64)(uintptr_t)(&v10);
    v8[2] = (uint64)(uintptr_t)(&v9);
    v8[3] = (uint64)(uintptr_t)(&v11);
    memcpy(&v8[4], &va, sizeof(va));
    return sub_140225224((__int64)v5, &v7, (__int64)v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
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
  char *v9; // rbx
  __int64 v11; // [rsp+0h] [rbp-C9h] BYREF
  __int128 v12; // [rsp+20h] [rbp-A9h]
  __m128i *v13; // [rsp+30h] [rbp-99h]
  __int64 v14; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v16; // [rsp+60h] [rbp-69h] BYREF
  __int128 v17; // [rsp+68h] [rbp-61h]
  __m128i *v18; // [rsp+78h] [rbp-51h]
  __int64 v19; // [rsp+80h] [rbp-49h]
  __int64 v20; // [rsp+88h] [rbp-41h]
  int v21; // [rsp+90h] [rbp-39h]
  int v22; // [rsp+94h] [rbp-35h]
  __int16 v23; // [rsp+98h] [rbp-31h]
  char v24; // [rsp+9Ah] [rbp-2Fh]
  __int64 v25; // [rsp+A0h] [rbp-29h]
  int v26; // [rsp+A8h] [rbp-21h]
  char v27; // [rsp+ACh] [rbp-1Dh]
  int v28; // [rsp+B0h] [rbp-19h]
  _WORD v29[18]; // [rsp+B4h] [rbp-15h] BYREF
  _BYTE *v30; // [rsp+D8h] [rbp+Fh]
  __int64 v31; // [rsp+E0h] [rbp+17h]
  __int64 v32; // [rsp+E8h] [rbp+1Fh]
  __int64 v33; // [rsp+F0h] [rbp+27h]

  if ( a2 && a4 )
  {
    v9 = strnlen_sr(a2, a3);
    sub_140213644((_LocaleUpdate *)&v14, a5);
    v21 = 0;
    *((_QWORD *)&v12 + 1) = (uint64)(uintptr_t)(&v9[(_QWORD)a2]);
    *(_QWORD *)&v12 = (uint64)(uintptr_t)(a2);
    v13 = a2;
    v17 = v12;
    v16 = a1;
    v18 = a2;
    v19 = a1;
    v20 = a4;
    sub_1401FCD30((void *)(uintptr_t)(v29), 0, 0x20u);
    v22 = 0;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    v28 = 0;
    v32 = 0;
    v30 = v15;
    v31 = a6;
    v24 = 0;
    v27 = 0;
    sub_1402338B8((__int64)&v16);
    if ( v15[16] )
      *(_DWORD *)(v14 + 936) &= ~2u;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return 0; /* the function has no caller */
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (00000001402255EC) ----------------------------------------------------
__int64            sub_1402255EC(
        __int64 a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int128 v12; // [rsp+28h] [rbp-89h]
  __int64 v13; // [rsp+48h] [rbp-69h] BYREF
  __int128 v14; // [rsp+50h] [rbp-61h]
  __m128i *v15; // [rsp+60h] [rbp-51h]
  __int64 v16; // [rsp+68h] [rbp-49h]
  __int64 v17; // [rsp+70h] [rbp-41h]
  __int64 v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+80h] [rbp-31h]
  char v20; // [rsp+84h] [rbp-2Dh]
  __int64 v21; // [rsp+88h] [rbp-29h]
  int v22; // [rsp+90h] [rbp-21h]
  char v23; // [rsp+94h] [rbp-1Dh]
  int v24; // [rsp+98h] [rbp-19h]
  void *Block; // [rsp+A0h] [rbp-11h]
  _BYTE *v26; // [rsp+A8h] [rbp-9h]
  __int64 v27; // [rsp+B0h] [rbp-1h]
  __int64 v28; // [rsp+B8h] [rbp+7h]
  __int64 v29; // [rsp+C8h] [rbp+17h] BYREF
  _BYTE v30[24]; // [rsp+D0h] [rbp+1Fh] BYREF

  if ( a2 && a4 )
  {
    v10 = sub_140254F48(a2, a3);
    sub_140213644((_LocaleUpdate *)&v29, a5);
    *(_QWORD *)&v12 = (uint64)(uintptr_t)(a2);
    *((_QWORD *)&v12 + 1) = (uint64)(uintptr_t)((char *)a2 + 2 * v10);
    v26 = v30;
    v27 = a6;
    v13 = a1;
    v14 = v12;
    v16 = a1;
    v15 = a2;
    v17 = a4;
    v18 = 0;
    Block = nullptr;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v28 = 0;
    v11 = sub_140233A68((__int64)&v13);
    free_base(Block);
    Block = nullptr;
    if ( v30[16] )
      *(_DWORD *)(v29 + 936) &= ~2u;
    return v11;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140225704) ----------------------------------------------------
__int64            sub_140225704(_DWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = 0;
  return sub_14023023C(a1, (__crt_strtox__floating_point_value *)&v3);
}


//----- (0000000140225724) ----------------------------------------------------
__int64            sub_140225724(_DWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = 1;
  return sub_14023023C(a1, (__crt_strtox__floating_point_value *)&v3);
}


//----- (0000000140225744) ----------------------------------------------------
__int64            __crt_strtox__convert_hexadecimal_string_to_floating_type__float(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = 0;
  return sub_140231FC0(a1, (__int64)&v3);
}


//----- (0000000140225764) ----------------------------------------------------
__int64            __crt_strtox__convert_hexadecimal_string_to_floating_type__double(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = 1;
  return sub_140231FC0(a1, (__int64)&v3);
}


//----- (00000001402257B4) ----------------------------------------------------
bool            sub_1402257B4(char a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  bool result; // al

  result = true;
  if ( (a1 & 4) == 0 )
  {
    if ( (a1 & 1) == 0 )
      return false;
    v2 = (a1 & 2) != 0 ? 0x8000000000000000uLL : 0x7FFFFFFFFFFFFFFFLL;
    if ( a2 <= v2 )
      return false;
  }
  return result;
}


//----- (000000014022587C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_600(struct __crt_locale_pointers *a1, __int64 a2, unsigned int *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  int v10[196]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_140225DBC(a1, a2, v10);
    __int64 sr_result = sub_14022AD78(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = *(_BYTE **)(a2 + 24);
    if ( v7 && !*(_QWORD *)(a2 + 16) )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = *(_BYTE **)(a2 + 24);
    if ( v5 && !*(_QWORD *)(a2 + 16) )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (0000000140225924) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_601(struct __crt_locale_pointers *a1, __int64 a2, unsigned __int64 *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  int v10[196]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_140225DBC(a1, a2, v10);
    __int64 sr_result = sub_14022AEE8(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = *(_BYTE **)(a2 + 24);
    if ( v7 && !*(_QWORD *)(a2 + 16) )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = *(_BYTE **)(a2 + 24);
    if ( v5 && !*(_QWORD *)(a2 + 16) )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (00000001402259CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_602(__int64 a1, __int64 a2, unsigned int *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v10[784]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_140226624(a1, (FILE ***)a2, (__int64)v10);
    __int64 sr_result = sub_14022AD78(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = *(_BYTE **)(a2 + 24);
    if ( v7 && !*(_QWORD *)(a2 + 16) )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = *(_BYTE **)(a2 + 24);
    if ( v5 && !*(_QWORD *)(a2 + 16) )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (0000000140225A74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_603(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v10[784]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_140226624(a1, (FILE ***)a2, (__int64)v10);
    __int64 sr_result = sub_14022AEE8(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = *(_BYTE **)(a2 + 24);
    if ( v7 && !*(_QWORD *)(a2 + 16) )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = *(_BYTE **)(a2 + 24);
    if ( v5 && !*(_QWORD *)(a2 + 16) )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (0000000140225B1C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_604(struct __crt_locale_pointers *a1, _QWORD *a2, unsigned int *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v10[784]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_140227894(a1, a2, (__int64)v10);
    __int64 sr_result = sub_14022AD78(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = (_BYTE *)a2[3];
    if ( v7 && !a2[2] )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = (_BYTE *)a2[3];
    if ( v5 && !a2[2] )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (0000000140225BC4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_605(struct __crt_locale_pointers *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v10[784]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_140227894(a1, a2, (__int64)v10);
    __int64 sr_result = sub_14022AEE8(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = (_BYTE *)a2[3];
    if ( v7 && !a2[2] )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = (_BYTE *)a2[3];
    if ( v5 && !a2[2] )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (0000000140225C6C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_606(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v10[784]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_1402280D0(a1, a2, (__int64)v10);
    __int64 sr_result = sub_14022AD78(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = (_BYTE *)a2[3];
    if ( v7 && !a2[2] )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = (_BYTE *)a2[3];
    if ( v5 && !a2[2] )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (0000000140225D14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_607(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v10[784]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v11; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v6 = sub_1402280D0(a1, a2, (__int64)v10);
    __int64 sr_result = sub_14022AEE8(v6, (__int64)v10, a3); /* the result stays in rax */
    v7 = (_BYTE *)a2[3];
    if ( v7 && !a2[2] )
      *v7 = 0;
    return sr_result;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v5 = (_BYTE *)a2[3];
    if ( v5 && !a2[2] )
      *v5 = 0;
  }
  return 1; /* mov eax, 1 */
}


//----- (0000000140225DBC) ----------------------------------------------------
__int64            sub_140225DBC(struct __crt_locale_pointers *a1, __int64 a2, int *a3)
{
  FILE **v3; // rdi
  bool v8; // zf
  unsigned __int64 v9; // r13
  int v10; // eax
  unsigned __int64 v11; // rax
  FILE **v12; // rdi
  int v13; // edx
  int *v14; // r12
  unsigned __int64 v15; // rax
  FILE **v16; // rdi
  unsigned __int64 v17; // rsi
  FILE **v18; // rdi
  int v19; // eax
  char v20; // r8
  unsigned __int64 v21; // rax
  FILE **v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rax
  FILE **v25; // rax
  int *v26; // rax
  char v27; // r15
  unsigned __int64 v28; // rax
  FILE **v29; // rdi
  int v30; // eax
  int *v31; // r14
  int v32; // r13d
  unsigned int v33; // esi
  unsigned int v34; // eax
  unsigned __int64 v35; // rax
  FILE **v36; // rdi
  int v37; // eax
  unsigned __int64 v38; // rax
  FILE **v39; // rdi
  int v40; // eax
  int *v41; // r8
  char v42; // cl
  unsigned __int64 v43; // rax
  FILE **v44; // rdi
  int v45; // eax
  unsigned int v46; // eax
  unsigned __int64 v47; // rax
  FILE **v48; // rdi
  int v49; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // ecx
  FILE **v53; // rdx
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // r8
  int v56; // r9d
  FILE **v57; // rdx
  FILE **v58; // rdi
  int v59; // ecx
  char v60; // al
  unsigned __int8 v61; // r12
  int v62; // esi
  unsigned __int64 v63; // rax
  FILE **v64; // rdi
  int v65; // eax
  char v66; // r14
  char v67; // dl
  unsigned __int64 v68; // rax
  FILE **v69; // rdi
  int v70; // eax
  char v71; // r15
  unsigned __int64 v72; // rax
  FILE **v73; // rdi
  int v74; // eax
  unsigned int v75; // r8d
  unsigned __int64 v76; // rax
  FILE **v77; // rdi
  int v78; // eax
  unsigned int v79; // eax
  unsigned __int64 v80; // rax
  FILE **v81; // rdi
  int v82; // eax
  int v83; // eax
  unsigned __int64 v84; // rax
  int v85; // ecx
  FILE **v86; // rdx
  unsigned __int64 v87; // rax
  FILE **v88; // rdi
  int v89; // eax
  unsigned __int64 v90; // rax
  FILE **v91; // rdx
  int *v92; // r9
  int *v93; // rdx
  int *v94; // r8
  int *v95; // rax
  int v96; // esi
  int v97; // [rsp+20h] [rbp-28h]
  int *v98; // [rsp+28h] [rbp-20h]
  int *v99; // [rsp+28h] [rbp-20h]
  unsigned __int64 v100; // [rsp+30h] [rbp-18h]
  char v102; // [rsp+98h] [rbp+50h] BYREF
  int *v103; // [rsp+A0h] [rbp+58h]
  char v104; // [rsp+A8h] [rbp+60h]

  v103 = a3;
  v3 = *(FILE ***)a2;
  if ( !*(_QWORD *)a2 || !*(_QWORD *)(a2 + 24) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 7;
  }
  v8 = *(_QWORD *)(a2 + 8) == 0;
  v9 = *(_QWORD *)(a2 + 16);
  v100 = v9;
  *(_QWORD *)(a2 + 16) = v9 + 1;
  if ( !v8 && v9 + 1 > *(_QWORD *)(a2 + 8) || (v10 = getc_nolock(*v3), v10 == -1) )
    LOBYTE(v10) = 0;
  else
    v3[1] = (FILE *)((char *)v3[1] + 1);
  while ( 1 )
  {
    v102 = v10;
    if ( !(unsigned int)sub_140236ED8((unsigned __int8)v10, 8, a1) )
      break;
    v11 = *(_QWORD *)(a2 + 16) + 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v11;
    if ( !v8 && v11 > *(_QWORD *)(a2 + 8) || (v12 = *(FILE ***)a2, v10 = getc_nolock(**(FILE ***)a2), v10 == -1) )
      LOBYTE(v10) = 0;
    else
      v12[1] = (FILE *)((char *)v12[1] + 1);
  }
  LOBYTE(v13) = v102;
  v14 = a3 + 194;
  *((_BYTE *)a3 + 776) = v102 == 45;
  if ( (((_BYTE)v13 - 43) & 0xFD) == 0 )
  {
    v15 = *(_QWORD *)(a2 + 16) + 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v15;
    if ( !v8 && v15 > *(_QWORD *)(a2 + 8) || (v16 = *(FILE ***)a2, v13 = getc_nolock(**(FILE ***)a2), v13 == -1) )
      LOBYTE(v13) = 0;
    else
      v16[1] = (FILE *)((char *)v16[1] + 1);
    v102 = v13;
  }
  if ( (((_BYTE)v13 - 73) & 0xDF) == 0 )
    return sub_1402292F0(&v102, a2, v9);
  if ( (((_BYTE)v13 - 78) & 0xDF) == 0 )
    return sub_140229CC0(&v102, a2, v9);
  v104 = 0;
  if ( (_BYTE)v13 != 48 )
    goto LABEL_44;
  v8 = *(_QWORD *)(a2 + 8) == 0;
  v17 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v17 + 1;
  if ( !v8 && v17 + 1 > *(_QWORD *)(a2 + 8) )
    goto LABEL_38;
  v18 = *(FILE ***)a2;
  v19 = getc_nolock(**(FILE ***)a2);
  v20 = v19;
  if ( v19 == -1 )
  {
    LOBYTE(v13) = v102;
LABEL_38:
    v20 = 0;
LABEL_39:
    v24 = *(_QWORD *)(a2 + 16) - 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v24;
    if ( (v8 || v24 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v20 + 1) > 1u )
    {
      v25 = *(FILE ***)a2;
      if ( v20 != -1 )
      {
        v25[1] = (FILE *)((char *)v25[1] - 1);
        sub_14020CE90(v20, (__int64)*v25);
        LOBYTE(v13) = v102;
      }
    }
    goto LABEL_44;
  }
  v18[1] = (FILE *)((char *)v18[1] + 1);
  if ( (((_BYTE)v19 - 88) & 0xDF) != 0 )
  {
    LOBYTE(v13) = v102;
    goto LABEL_39;
  }
  v21 = *(_QWORD *)(a2 + 16) + 1LL;
  v104 = 1;
  v8 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v21;
  if ( !v8 && v21 > *(_QWORD *)(a2 + 8) || (v22 = *(FILE ***)a2, v23 = getc_nolock(**(FILE ***)a2), v23 == -1) )
    LOBYTE(v23) = 0;
  else
    v22[1] = (FILE *)((char *)v22[1] + 1);
  LOBYTE(v13) = v23;
  v102 = v23;
  v100 = v17;
LABEL_44:
  v26 = a3 + 2;
  v27 = 0;
  v98 = v26;
  if ( (_BYTE)v13 == 48 )
  {
    v27 = 1;
    while ( 1 )
    {
      v28 = *(_QWORD *)(a2 + 16) + 1LL;
      v8 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v28;
      if ( !v8 && v28 > *(_QWORD *)(a2 + 8) )
        break;
      v29 = *(FILE ***)a2;
      v30 = getc_nolock(**(FILE ***)a2);
      if ( v30 == -1 )
        break;
      v29[1] = (FILE *)((char *)v29[1] + 1);
      LOBYTE(v13) = v30;
      v102 = v30;
      if ( (_BYTE)v30 != 48 )
        goto LABEL_52;
    }
    LOBYTE(v13) = 0;
    v102 = 0;
  }
LABEL_52:
  v31 = v98;
  v32 = 0;
  v33 = v104 != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( (unsigned __int8)(v13 - 48) > 9u )
    {
      if ( (unsigned __int8)(v13 - 97) > 0x19u )
        v34 = (unsigned __int8)(v13 - 65) > 0x19u ? -1 : (char)v13 - 55;
      else
        v34 = (char)v13 - 87;
    }
    else
    {
      v34 = (char)v13 - 48;
    }
    if ( v34 > v33 )
      break;
    v27 = 1;
    if ( v31 != v14 )
    {
      *(_BYTE *)v31 = v34;
      v31 = (int *)((char *)v31 + 1);
    }
    ++v32;
    v35 = *(_QWORD *)(a2 + 16) + 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v35;
    if ( !v8 && v35 > *(_QWORD *)(a2 + 8) || (v36 = *(FILE ***)a2, v37 = getc_nolock(**(FILE ***)a2), v37 == -1) )
      LOBYTE(v37) = 0;
    else
      v36[1] = (FILE *)((char *)v36[1] + 1);
    LOBYTE(v13) = v37;
    v102 = v37;
  }
  v99 = v31;
  v97 = v32;
  if ( (_BYTE)v13 == ***(_BYTE ***)(*(_QWORD *)a1 + 248LL) )
  {
    v38 = *(_QWORD *)(a2 + 16) + 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v38;
    if ( !v8 && v38 > *(_QWORD *)(a2 + 8) || (v39 = *(FILE ***)a2, v40 = getc_nolock(**(FILE ***)a2), v40 == -1) )
      LOBYTE(v40) = 0;
    else
      v39[1] = (FILE *)((char *)v39[1] + 1);
    LOBYTE(v13) = v40;
    v41 = v31;
    v102 = v40;
    v42 = v40;
    if ( v31 == v103 + 2 && (_BYTE)v40 == 48 )
    {
      v27 = 1;
      while ( 1 )
      {
        --v97;
        v43 = *(_QWORD *)(a2 + 16) + 1LL;
        v8 = *(_QWORD *)(a2 + 8) == 0;
        *(_QWORD *)(a2 + 16) = v43;
        if ( !v8 && v43 > *(_QWORD *)(a2 + 8) )
          break;
        v44 = *(FILE ***)a2;
        v45 = getc_nolock(**(FILE ***)a2);
        v42 = v45;
        if ( v45 == -1 )
          break;
        v44[1] = (FILE *)((char *)v44[1] + 1);
        LOBYTE(v13) = v45;
        v102 = v45;
        if ( (_BYTE)v45 != 48 )
          goto LABEL_84;
      }
      v42 = 0;
      LOBYTE(v13) = 0;
      v102 = 0;
LABEL_84:
      v41 = v31;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(v42 - 48) > 9u )
      {
        if ( (unsigned __int8)(v42 - 97) > 0x19u )
          v46 = (unsigned __int8)(v42 - 65) > 0x19u ? -1 : v42 - 55;
        else
          v46 = v42 - 87;
      }
      else
      {
        v46 = v42 - 48;
      }
      if ( v46 > v33 )
        break;
      v27 = 1;
      if ( v41 != v14 )
      {
        *(_BYTE *)v41 = v46;
        v41 = (int *)((char *)v41 + 1);
        v99 = v41;
      }
      v47 = *(_QWORD *)(a2 + 16) + 1LL;
      v8 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v47;
      if ( !v8 && v47 > *(_QWORD *)(a2 + 8)
        || (v48 = *(FILE ***)a2, v49 = getc_nolock(**(FILE ***)a2), v41 = v99, v49 == -1) )
      {
        LOBYTE(v49) = 0;
      }
      else
      {
        v48[1] = (FILE *)((char *)v48[1] + 1);
      }
      LOBYTE(v13) = v49;
      v102 = v49;
      v42 = v49;
    }
  }
  v50 = *(_QWORD *)(a2 + 8);
  v51 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v51;
  if ( !v27 )
  {
    if ( !v50 || v51 <= v50 )
    {
      if ( (_BYTE)v13 )
      {
        if ( (_BYTE)v13 != 0xFF )
        {
          v52 = (char)v13;
          v53 = *(FILE ***)a2;
          if ( v52 != -1 )
          {
            v53[1] = (FILE *)((char *)v53[1] - 1);
            sub_14020CE90(v52, (__int64)*v53);
            v51 = *(_QWORD *)(a2 + 16);
          }
        }
      }
    }
    if ( v100 == v51 )
    {
      if ( !v104 )
        return 7;
      return 2;
    }
LABEL_192:
    **(_BYTE **)(a2 + 24) = 0;
    return 7;
  }
  if ( !v50 || (v54 = v51, v55 = v50, v51 <= v50) )
  {
    v54 = v51;
    v55 = v50;
    if ( (_BYTE)v13 )
    {
      if ( (_BYTE)v13 != 0xFF )
      {
        v56 = (char)v13;
        v57 = *(FILE ***)a2;
        if ( v56 != -1 )
        {
          v57[1] = (FILE *)((char *)v57[1] - 1);
          sub_14020CE90(v56, (__int64)*v57);
          v55 = *(_QWORD *)(a2 + 8);
          v54 = *(_QWORD *)(a2 + 16);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v54 + 1;
  if ( v55 && v54 + 1 > v55 || (v58 = *(FILE ***)a2, v59 = getc_nolock(**(FILE ***)a2), v59 == -1) )
    LOBYTE(v59) = 0;
  else
    v58[1] = (FILE *)((char *)v58[1] + 1);
  v60 = 0;
  v102 = v59;
  switch ( (_BYTE)v59 )
  {
    case 'E':
      goto LABEL_127;
    case 'P':
LABEL_126:
      v61 = v104;
      v60 = v104;
      break;
    case 'e':
LABEL_127:
      v61 = v104;
      v60 = v104 ^ 1;
      break;
    case 'p':
      goto LABEL_126;
    default:
      v61 = v104;
      break;
  }
  v62 = 0;
  if ( v60 )
  {
    v63 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v63;
    if ( *(_QWORD *)(a2 + 8) && v63 > *(_QWORD *)(a2 + 8)
      || (v64 = *(FILE ***)a2, v65 = getc_nolock(**(FILE ***)a2), v66 = v65, v65 == -1) )
    {
      v66 = 0;
      v67 = 0;
      LOBYTE(v59) = 0;
    }
    else
    {
      v64[1] = (FILE *)((char *)v64[1] + 1);
      v67 = v65;
      v102 = v65;
      if ( (_BYTE)v65 != 43 )
      {
        LOBYTE(v59) = v65;
        if ( (_BYTE)v65 != 45 )
        {
LABEL_143:
          v71 = 0;
          if ( (_BYTE)v59 != 48 )
            goto LABEL_151;
          v71 = 1;
          while ( 1 )
          {
            v72 = *(_QWORD *)(a2 + 16) + 1LL;
            *(_QWORD *)(a2 + 16) = v72;
            if ( *(_QWORD *)(a2 + 8) )
            {
              if ( v72 > *(_QWORD *)(a2 + 8) )
                break;
            }
            v73 = *(FILE ***)a2;
            v74 = getc_nolock(**(FILE ***)a2);
            LOBYTE(v59) = v74;
            if ( v74 == -1 )
              break;
            v73[1] = (FILE *)((char *)v73[1] + 1);
            v67 = v74;
            v102 = v74;
            if ( (_BYTE)v74 != 48 )
              goto LABEL_151;
          }
          LOBYTE(v59) = 0;
          v67 = 0;
          v102 = 0;
LABEL_151:
          while ( 1 )
          {
            if ( (unsigned __int8)(v59 - 48) > 9u )
            {
              if ( (unsigned __int8)(v59 - 97) > 0x19u )
                v75 = (unsigned __int8)(v59 - 65) > 0x19u ? -1 : (char)v59 - 55;
              else
                v75 = (char)v59 - 87;
            }
            else
            {
              v75 = (char)v59 - 48;
            }
            if ( v75 >= 0xA )
              break;
            v71 = 1;
            v62 = v75 + 10 * v62;
            if ( v62 > 5200 )
            {
              v62 = 5201;
              break;
            }
            v76 = *(_QWORD *)(a2 + 16) + 1LL;
            v8 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v76;
            if ( !v8 && v76 > *(_QWORD *)(a2 + 8) || (v77 = *(FILE ***)a2, v78 = getc_nolock(**(FILE ***)a2), v78 == -1) )
              LOBYTE(v78) = 0;
            else
              v77[1] = (FILE *)((char *)v77[1] + 1);
            v67 = v78;
            v102 = v78;
            LOBYTE(v59) = v78;
          }
          while ( 1 )
          {
            if ( v67 < 48 || (char)v59 > 57 )
            {
              if ( (unsigned __int8)(v59 - 97) > 0x19u )
                v79 = (unsigned __int8)(v59 - 65) > 0x19u ? -1 : (char)v59 - 55;
              else
                v79 = (char)v59 - 87;
            }
            else
            {
              v79 = (char)v59 - 48;
            }
            if ( v79 >= 0xA )
              break;
            v80 = *(_QWORD *)(a2 + 16) + 1LL;
            v8 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v80;
            if ( !v8 && v80 > *(_QWORD *)(a2 + 8) || (v81 = *(FILE ***)a2, v82 = getc_nolock(**(FILE ***)a2), v82 == -1) )
              LOBYTE(v82) = 0;
            else
              v81[1] = (FILE *)((char *)v81[1] + 1);
            v67 = v82;
            v102 = v82;
            LOBYTE(v59) = v82;
          }
          v83 = -v62;
          if ( v66 != 45 )
            v83 = v62;
          v62 = v83;
          if ( !v71 )
          {
            v84 = *(_QWORD *)(a2 + 16) - 1LL;
            v8 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v84;
            if ( v8 || v84 <= *(_QWORD *)(a2 + 8) )
            {
              if ( v67 )
              {
                if ( v67 != -1 )
                {
                  v85 = v67;
                  v86 = *(FILE ***)a2;
                  if ( v85 != -1 )
                  {
                    v86[1] = (FILE *)((char *)v86[1] - 1);
                    sub_14020CE90(v85, (__int64)*v86);
                    v84 = *(_QWORD *)(a2 + 16);
                  }
                }
              }
            }
            if ( v54 != v84 )
              goto LABEL_192;
            v87 = v84 + 1;
            v8 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v87;
            if ( !v8 && v87 > *(_QWORD *)(a2 + 8) || (v88 = *(FILE ***)a2, v89 = getc_nolock(**(FILE ***)a2), v89 == -1) )
              LOBYTE(v89) = 0;
            else
              v88[1] = (FILE *)((char *)v88[1] + 1);
            v102 = v89;
            LOBYTE(v59) = v89;
          }
          goto LABEL_199;
        }
      }
      v68 = *(_QWORD *)(a2 + 16) + 1LL;
      *(_QWORD *)(a2 + 16) = v68;
      if ( *(_QWORD *)(a2 + 8) && v68 > *(_QWORD *)(a2 + 8)
        || (v69 = *(FILE ***)a2, v70 = getc_nolock(**(FILE ***)a2), v67 = v70, v70 == -1) )
      {
        v67 = 0;
      }
      else
      {
        v69[1] = (FILE *)((char *)v69[1] + 1);
      }
      LOBYTE(v59) = v67;
    }
    v102 = v67;
    goto LABEL_143;
  }
LABEL_199:
  v90 = *(_QWORD *)(a2 + 16) - 1LL;
  v8 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v90;
  if ( (v8 || v90 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v59 + 1) > 1u )
  {
    v91 = *(FILE ***)a2;
    if ( (char)v59 != -1 )
    {
      v91[1] = (FILE *)((char *)v91[1] - 1);
      sub_14020CE90((char)v59, (__int64)*v91);
    }
  }
  v92 = v103;
  v93 = v99;
  v94 = v103 + 2;
  if ( v99 == v103 + 2 )
    return 2;
  do
  {
    v95 = (int *)((char *)v93 - 1);
    if ( *((_BYTE *)v93 - 1) )
      break;
    v93 = (int *)((char *)v93 - 1);
  }
  while ( v95 != v94 );
  if ( v93 == v94 )
    return 2;
  if ( v62 <= 5200 )
  {
    if ( v62 < -5200 )
      return 8;
    v96 = v97 * (v61 != 0 ? 4 : 1) + v62;
    if ( v96 <= 5200 )
    {
      if ( v96 >= -5200 )
      {
        *v103 = v96;
        v92[1] = (_DWORD)v93 - (_DWORD)v94;
        return v61;
      }
      return 8;
    }
  }
  return 9;
}


//----- (0000000140226624) ----------------------------------------------------
__int64            sub_140226624(__int64 a1, FILE ***a2, __int64 a3)
{
  FILE **v3; // rdi
  FILE **v7; // r15
  unsigned __int16 v8; // ax
  FILE **v9; // rax
  unsigned __int16 v10; // ax
  FILE **v11; // rdi
  __int64 v12; // r8
  _BYTE *v13; // r13
  FILE **v14; // rax
  FILE **v15; // rdi
  unsigned __int16 v16; // ax
  char v17; // r12
  FILE **v18; // rsi
  __int64 v19; // rcx
  FILE **v20; // rdi
  unsigned __int16 v21; // ax
  FILE **v22; // rax
  FILE **v23; // rdi
  unsigned __int16 v24; // ax
  FILE **v25; // rax
  FILE **v26; // rdx
  char v27; // si
  FILE **v28; // rax
  FILE **v29; // rdi
  unsigned __int16 v30; // ax
  _BYTE *v31; // r14
  int v32; // r15d
  unsigned int v33; // r12d
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // eax
  FILE **v38; // rax
  FILE **v39; // rdi
  unsigned __int16 v40; // ax
  FILE **v41; // r15
  FILE **v42; // rax
  unsigned __int16 v43; // ax
  FILE **v44; // rdi
  _BYTE *v45; // r9
  unsigned __int16 v46; // cx
  FILE **v47; // rax
  FILE **v48; // rdi
  unsigned int v49; // eax
  int v50; // edx
  unsigned int v51; // edx
  int v52; // eax
  FILE **v53; // rax
  FILE **v54; // rdi
  unsigned __int16 v55; // ax
  FILE **v56; // rcx
  FILE **v57; // rax
  FILE **v58; // rdx
  FILE **v59; // r13
  FILE **v60; // rdx
  FILE **v61; // rdx
  __int64 v62; // rcx
  FILE **v63; // rdi
  unsigned __int16 v64; // ax
  char v65; // al
  unsigned __int8 v66; // r12
  int v67; // esi
  FILE **v68; // rax
  unsigned __int16 v69; // dx
  FILE **v70; // rdi
  unsigned __int16 v71; // ax
  FILE **v72; // rax
  FILE **v73; // rdi
  unsigned __int16 v74; // ax
  bool v75; // cf
  FILE **v76; // rax
  FILE **v77; // rdi
  unsigned __int16 v78; // ax
  int v79; // eax
  unsigned int v80; // eax
  int v81; // r8d
  FILE **v82; // rax
  FILE **v83; // rdi
  unsigned int v84; // eax
  int v85; // edx
  int v86; // eax
  FILE **v87; // rax
  FILE **v88; // rdi
  unsigned __int16 v89; // ax
  FILE **v90; // r13
  FILE **v91; // rax
  FILE **v92; // rdx
  FILE **v93; // rax
  FILE **v94; // rdi
  unsigned __int16 v95; // ax
  FILE **v96; // rax
  FILE **v97; // rdx
  _BYTE *v98; // rdx
  _BYTE *v99; // r8
  _BYTE *v100; // rax
  int v101; // esi
  _WORD v102[2]; // [rsp+20h] [rbp-28h] BYREF
  int v103; // [rsp+24h] [rbp-24h]
  int v104; // [rsp+28h] [rbp-20h]
  int v105; // [rsp+2Ch] [rbp-1Ch]
  _BYTE *v106; // [rsp+30h] [rbp-18h]
  FILE **v107; // [rsp+38h] [rbp-10h]
  char v109; // [rsp+98h] [rbp+50h]
  FILE **v111; // [rsp+A8h] [rbp+60h]
  char v112; // [rsp+A8h] [rbp+60h]

  v3 = *a2;
  if ( !*a2 || !a2[3] )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 7;
  }
  v7 = a2[2];
  v111 = v7;
  a2[2] = (FILE **)((char *)v7 + 1);
  if ( a2[1] && (FILE **)((char *)v7 + 1) > a2[1] )
  {
    v8 = 0;
  }
  else
  {
    v8 = j__fgetwc_nolock(*v3);
    if ( v8 == 0xFFFF )
      v8 = 0;
    else
      v3[1] = (FILE *)((char *)v3[1] + 1);
  }
  v102[0] = v8;
  if ( (unsigned int)sub_140256E00(v8, 8) )
  {
    do
    {
      v9 = (FILE **)((char *)a2[2] + 1);
      a2[2] = v9;
      if ( a2[1] && v9 > a2[1] )
      {
        v10 = 0;
      }
      else
      {
        v11 = *a2;
        v10 = j__fgetwc_nolock(**a2);
        if ( v10 == 0xFFFF )
          v10 = 0;
        else
          v11[1] = (FILE *)((char *)v11[1] + 1);
      }
      v102[0] = v10;
    }
    while ( (unsigned int)sub_140256E00(v10, 8) );
  }
  v12 = v102[0];
  v13 = (_BYTE *)(a3 + 776);
  *(_BYTE *)(a3 + 776) = v102[0] == 45;
  if ( (((_WORD)v12 - 43) & 0xFFFD) == 0 )
  {
    v14 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v14;
    if ( a2[1] && v14 > a2[1] )
    {
      v12 = 0;
    }
    else
    {
      v15 = *a2;
      v16 = j__fgetwc_nolock(**a2);
      if ( v16 == 0xFFFF )
      {
        v12 = 0;
      }
      else
      {
        v15[1] = (FILE *)((char *)v15[1] + 1);
        v12 = v16;
      }
    }
    v102[0] = v12;
  }
  if ( (((_WORD)v12 - 73) & 0xFFDF) == 0 )
    return sub_140229798((unsigned __int64)v102, a2, v7);
  if ( (((_WORD)v12 - 78) & 0xFFDF) == 0 )
    return sub_14022A27C((__int64)v102, a2, (__int64 *)v7);
  v109 = 0;
  v17 = 0;
  if ( (_WORD)v12 != 48 )
    goto LABEL_48;
  v18 = a2[2];
  a2[2] = (FILE **)((char *)v18 + 1);
  if ( a2[1] && (FILE **)((char *)v18 + 1) > a2[1] )
  {
    v19 = 0;
    goto LABEL_44;
  }
  v20 = *a2;
  v21 = j__fgetwc_nolock(**a2);
  v19 = v21;
  if ( v21 == 0xFFFF )
  {
    v19 = 0;
    goto LABEL_43;
  }
  v20[1] = (FILE *)((char *)v20[1] + 1);
  if ( ((v21 - 88) & 0xFFDF) != 0 )
  {
LABEL_43:
    v12 = v102[0];
LABEL_44:
    v25 = (FILE **)((char *)a2[2] - 1);
    a2[2] = v25;
    if ( (!a2[1] || v25 <= a2[1]) && (unsigned __int16)(v19 - 1) <= 0xFFFDu )
    {
      v26 = *a2;
      v26[1] = (FILE *)((char *)v26[1] - 1);
      ungetwc_nolock(v19, *v26, v12);
      v12 = v102[0];
    }
    goto LABEL_48;
  }
  v17 = 1;
  v22 = (FILE **)((char *)a2[2] + 1);
  v109 = 1;
  a2[2] = v22;
  if ( a2[1] && v22 > a2[1] )
  {
    v12 = 0;
  }
  else
  {
    v23 = *a2;
    v24 = j__fgetwc_nolock(**a2);
    v12 = v24;
    if ( v24 == 0xFFFF )
      v12 = 0;
    else
      v23[1] = (FILE *)((char *)v23[1] + 1);
  }
  v102[0] = v12;
  v111 = v18;
LABEL_48:
  v103 = 0;
  v106 = (_BYTE *)(a3 + 8);
  v27 = 0;
  if ( (_WORD)v12 == 48 )
  {
    v27 = 1;
    while ( 1 )
    {
      v28 = (FILE **)((char *)a2[2] + 1);
      a2[2] = v28;
      if ( a2[1] )
      {
        if ( v28 > a2[1] )
          break;
      }
      v29 = *a2;
      v30 = j__fgetwc_nolock(**a2);
      if ( v30 == 0xFFFF )
        break;
      v12 = v30;
      v29[1] = (FILE *)((char *)v29[1] + 1);
      v102[0] = v30;
      if ( v30 != 48 )
        goto LABEL_56;
    }
    v12 = 0;
    v102[0] = 0;
  }
LABEL_56:
  v31 = v106;
  v32 = v103;
  v33 = v17 != 0 ? 15 : 9;
  while ( 1 )
  {
    v34 = 65296;
    if ( (unsigned __int16)v12 >= 0x30u )
    {
      if ( (unsigned __int16)v12 < 0x3Au )
      {
        v35 = (unsigned __int16)v12 - 48;
        goto LABEL_100;
      }
      if ( (unsigned __int16)v12 >= 0xFF10u )
      {
        if ( (unsigned __int16)v12 < 0xFF1Au )
LABEL_75:
          v35 = (unsigned __int16)v12 - v34;
        else
          v35 = -1;
LABEL_100:
        if ( v35 != -1 )
          goto LABEL_107;
        goto LABEL_101;
      }
      if ( (unsigned __int16)v12 >= 0x660u )
      {
        if ( (unsigned __int16)v12 < 0x66Au )
        {
          v35 = (unsigned __int16)v12 - 1632;
          goto LABEL_100;
        }
        if ( (unsigned __int16)v12 >= 0x6F0u )
        {
          if ( (unsigned __int16)v12 < 0x6FAu )
          {
            v35 = (unsigned __int16)v12 - 1776;
            goto LABEL_100;
          }
          if ( (unsigned __int16)v12 >= 0x966u )
          {
            if ( (unsigned __int16)v12 < 0x970u )
            {
              v35 = (unsigned __int16)v12 - 2406;
              goto LABEL_100;
            }
            if ( (unsigned __int16)v12 >= 0x9E6u )
            {
              if ( (unsigned __int16)v12 < 0x9F0u )
              {
                v35 = (unsigned __int16)v12 - 2534;
                goto LABEL_100;
              }
              v34 = 2662;
              if ( (unsigned __int16)v12 >= 0xA66u )
              {
                if ( (unsigned __int16)v12 < 0xA70u )
                  goto LABEL_75;
                v34 = 2790;
                if ( (unsigned __int16)v12 >= 0xAE6u )
                {
                  if ( (unsigned __int16)v12 < 0xAF0u )
                    goto LABEL_75;
                  v34 = 2918;
                  if ( (unsigned __int16)v12 >= 0xB66u )
                  {
                    if ( (unsigned __int16)v12 < 0xB70u )
                      goto LABEL_75;
                    v34 = 3174;
                    if ( (unsigned __int16)v12 >= 0xC66u )
                    {
                      if ( (unsigned __int16)v12 < 0xC70u )
                        goto LABEL_75;
                      v34 = 3302;
                      if ( (unsigned __int16)v12 >= 0xCE6u )
                      {
                        if ( (unsigned __int16)v12 < 0xCF0u )
                          goto LABEL_75;
                        v34 = 3430;
                        if ( (unsigned __int16)v12 >= 0xD66u )
                        {
                          if ( (unsigned __int16)v12 < 0xD70u )
                            goto LABEL_75;
                          v34 = 3664;
                          if ( (unsigned __int16)v12 >= 0xE50u )
                          {
                            if ( (unsigned __int16)v12 < 0xE5Au )
                              goto LABEL_75;
                            v34 = 3792;
                            if ( (unsigned __int16)v12 >= 0xED0u )
                            {
                              if ( (unsigned __int16)v12 < 0xEDAu )
                                goto LABEL_75;
                              v34 = 3872;
                              if ( (unsigned __int16)v12 >= 0xF20u )
                              {
                                if ( (unsigned __int16)v12 < 0xF2Au )
                                  goto LABEL_75;
                                v34 = 4160;
                                if ( (unsigned __int16)v12 >= 0x1040u )
                                {
                                  if ( (unsigned __int16)v12 < 0x104Au )
                                    goto LABEL_75;
                                  v34 = 6112;
                                  if ( (unsigned __int16)v12 >= 0x17E0u )
                                  {
                                    if ( (unsigned __int16)v12 < 0x17EAu )
                                      goto LABEL_75;
                                    v34 = 6160;
                                    if ( (unsigned __int16)(v12 - 6160) <= 9u )
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
    v36 = (unsigned __int16)v12 - 97;
    if ( (unsigned int)(unsigned __int16)v12 - 65 <= 0x19 || v36 <= 0x19 )
    {
      v37 = (unsigned __int16)v12 - 32;
      if ( v36 > 0x19 )
        v37 = (unsigned __int16)v12;
      v35 = v37 - 55;
    }
    else
    {
      v35 = -1;
    }
LABEL_107:
    if ( v35 > v33 )
      break;
    v27 = 1;
    if ( v31 != v13 )
      *v31++ = v35;
    ++v32;
    v38 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v38;
    if ( a2[1] && v38 > a2[1] )
    {
      v12 = 0;
    }
    else
    {
      v39 = *a2;
      v40 = j__fgetwc_nolock(**a2);
      v12 = v40;
      if ( v40 == 0xFFFF )
        v12 = 0;
      else
        v39[1] = (FILE *)((char *)v39[1] + 1);
    }
    v102[0] = v12;
  }
  v106 = v31;
  v103 = v32;
  v41 = v111;
  if ( (unsigned __int16)v12 != ***(char ***)(*(_QWORD *)a1 + 248LL) )
    goto LABEL_193;
  v42 = (FILE **)((char *)a2[2] + 1);
  a2[2] = v42;
  if ( a2[1] && v42 > a2[1] )
  {
    v43 = 0;
  }
  else
  {
    v44 = *a2;
    v43 = j__fgetwc_nolock(**a2);
    if ( v43 == 0xFFFF )
      v43 = 0;
    else
      v44[1] = (FILE *)((char *)v44[1] + 1);
  }
  v12 = v43;
  v45 = v106;
  v102[0] = v43;
  v46 = v43;
  if ( v106 == (_BYTE *)(a3 + 8) && v43 == 48 )
  {
    v27 = 1;
    while ( 1 )
    {
      --v103;
      v47 = (FILE **)((char *)a2[2] + 1);
      a2[2] = v47;
      if ( a2[1] )
      {
        if ( v47 > a2[1] )
          break;
      }
      v48 = *a2;
      v46 = j__fgetwc_nolock(**a2);
      if ( v46 == 0xFFFF )
      {
        v46 = 0;
        goto LABEL_134;
      }
      v48[1] = (FILE *)((char *)v48[1] + 1);
      v12 = v46;
      v102[0] = v46;
      if ( v46 != 48 )
        goto LABEL_135;
    }
    v46 = 0;
LABEL_134:
    v102[0] = 0;
    v12 = 0;
LABEL_135:
    v45 = v106;
  }
  while ( 2 )
  {
    if ( v46 < 0x30u )
      goto LABEL_176;
    if ( v46 < 0x3Au )
    {
      v49 = v46 - 48;
      goto LABEL_175;
    }
    v50 = 65296;
    if ( v46 < 0xFF10u )
    {
      v50 = 1632;
      if ( v46 >= 0x660u )
      {
        if ( v46 < 0x66Au )
          goto LABEL_142;
        v50 = 1776;
        if ( v46 >= 0x6F0u )
        {
          if ( v46 < 0x6FAu )
            goto LABEL_142;
          v50 = 2406;
          if ( v46 >= 0x966u )
          {
            if ( v46 < 0x970u )
              goto LABEL_142;
            v50 = 2534;
            if ( v46 >= 0x9E6u )
            {
              if ( v46 < 0x9F0u )
                goto LABEL_142;
              v50 = 2662;
              if ( v46 >= 0xA66u )
              {
                if ( v46 < 0xA70u )
                  goto LABEL_142;
                v50 = 2790;
                if ( v46 >= 0xAE6u )
                {
                  if ( v46 < 0xAF0u )
                    goto LABEL_142;
                  v50 = 2918;
                  if ( v46 >= 0xB66u )
                  {
                    if ( v46 < 0xB70u )
                      goto LABEL_142;
                    v50 = 3174;
                    if ( v46 >= 0xC66u )
                    {
                      if ( v46 < 0xC70u )
                        goto LABEL_142;
                      v50 = 3302;
                      if ( v46 >= 0xCE6u )
                      {
                        if ( v46 < 0xCF0u
                          || (v50 = 3430, v46 >= 0xD66u)
                          && (v46 < 0xD70u
                           || (v50 = 3664, v46 >= 0xE50u)
                           && (v46 < 0xE5Au
                            || (v50 = 3792, v46 >= 0xED0u)
                            && (v46 < 0xEDAu
                             || (v50 = 3872, v46 >= 0xF20u)
                             && (v46 < 0xF2Au
                              || (v50 = 4160, v46 >= 0x1040u)
                              && (v46 < 0x104Au
                               || (v50 = 6112, v46 >= 0x17E0u)
                               && (v46 < 0x17EAu || (v50 = 6160, (unsigned __int16)(v46 - 6160) <= 9u))))))) )
                        {
LABEL_142:
                          v49 = v46 - v50;
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
    if ( v46 < 0xFF1Au )
      goto LABEL_142;
    v49 = -1;
LABEL_175:
    if ( v49 == -1 )
    {
LABEL_176:
      v51 = (unsigned __int16)v12 - 97;
      if ( (unsigned int)(unsigned __int16)v12 - 65 <= 0x19 || v51 <= 0x19 )
      {
        v52 = (unsigned __int16)v12 - 32;
        if ( v51 > 0x19 )
          v52 = (unsigned __int16)v12;
        v49 = v52 - 55;
      }
      else
      {
        v49 = -1;
      }
    }
    if ( v49 <= v33 )
    {
      v27 = 1;
      if ( v45 != v13 )
      {
        *v45++ = v49;
        v106 = v45;
      }
      v53 = (FILE **)((char *)a2[2] + 1);
      a2[2] = v53;
      if ( a2[1] && v53 > a2[1] )
      {
        v46 = 0;
      }
      else
      {
        v54 = *a2;
        v55 = j__fgetwc_nolock(**a2);
        v45 = v106;
        v46 = v55;
        if ( v55 == 0xFFFF )
          v46 = 0;
        else
          v54[1] = (FILE *)((char *)v54[1] + 1);
      }
      v12 = v46;
      v102[0] = v46;
      continue;
    }
    break;
  }
  v41 = v111;
LABEL_193:
  v56 = a2[1];
  v57 = (FILE **)((char *)a2[2] - 1);
  a2[2] = v57;
  if ( !v27 )
  {
    if ( (!v56 || v57 <= v56) && (_WORD)v12 && (_WORD)v12 != 0xFFFF )
    {
      v58 = *a2;
      v58[1] = (FILE *)((char *)v58[1] - 1);
      ungetwc_nolock((unsigned __int16)v12, *v58, v12);
      v57 = a2[2];
    }
    if ( v41 != v57 )
      goto LABEL_370;
    if ( !v109 )
      return 7;
    return 2;
  }
  if ( !v56 || (v107 = v57, v59 = v57, v60 = v56, v57 <= v56) )
  {
    v107 = v57;
    v59 = v57;
    v60 = v56;
    if ( (_WORD)v12 )
    {
      v107 = v57;
      if ( (_WORD)v12 != 0xFFFF )
      {
        v61 = *a2;
        v61[1] = (FILE *)((char *)v61[1] - 1);
        ungetwc_nolock((unsigned __int16)v12, *v61, v12);
        v59 = a2[2];
        v60 = a2[1];
        v107 = v59;
      }
    }
  }
  a2[2] = (FILE **)((char *)v59 + 1);
  if ( v60 && (FILE **)((char *)v59 + 1) > v60 )
  {
    v62 = 0;
  }
  else
  {
    v63 = *a2;
    v64 = j__fgetwc_nolock(**a2);
    v62 = v64;
    if ( v64 == 0xFFFF )
      v62 = 0;
    else
      v63[1] = (FILE *)((char *)v63[1] + 1);
  }
  v102[0] = v62;
  v65 = 0;
  switch ( (_WORD)v62 )
  {
    case 'E':
      goto LABEL_218;
    case 'P':
      goto LABEL_217;
    case 'e':
LABEL_218:
      v66 = v109;
      v65 = v109 ^ 1;
      break;
    case 'p':
LABEL_217:
      v66 = v109;
      v65 = v109;
      break;
    default:
      v66 = v109;
      break;
  }
  v104 = 0;
  v67 = 0;
  if ( !v65 )
    goto LABEL_378;
  v68 = (FILE **)((char *)a2[2] + 1);
  a2[2] = v68;
  if ( a2[1] && v68 > a2[1] )
  {
    v105 = 0;
    goto LABEL_224;
  }
  v70 = *a2;
  v71 = j__fgetwc_nolock(**a2);
  v105 = v71;
  if ( v71 == 0xFFFF )
  {
    v105 = 0;
LABEL_224:
    v62 = 0;
    v69 = 0;
    v102[0] = 0;
  }
  else
  {
    v70[1] = (FILE *)((char *)v70[1] + 1);
    v62 = v71;
    v102[0] = v71;
    if ( v71 == 43 || (v69 = v71, v71 == 45) )
    {
      v72 = (FILE **)((char *)a2[2] + 1);
      a2[2] = v72;
      if ( a2[1] && v72 > a2[1] )
      {
        v69 = 0;
      }
      else
      {
        v73 = *a2;
        v74 = j__fgetwc_nolock(**a2);
        if ( v74 == 0xFFFF )
        {
          v69 = 0;
        }
        else
        {
          v73[1] = (FILE *)((char *)v73[1] + 1);
          v69 = v74;
        }
      }
      v62 = v69;
      v102[0] = v69;
    }
  }
  v112 = 0;
  v75 = v69 < 0x30u;
  if ( v69 != 48 )
    goto LABEL_247;
  v112 = 1;
  while ( 2 )
  {
    v76 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v76;
    if ( a2[1] && v76 > a2[1] )
    {
      v69 = 0;
LABEL_245:
      v62 = 0;
      v102[0] = 0;
      goto LABEL_246;
    }
    v77 = *a2;
    v78 = j__fgetwc_nolock(**a2);
    v69 = v78;
    if ( v78 == 0xFFFF )
    {
      v69 = 0;
      goto LABEL_245;
    }
    v62 = v78;
    v77[1] = (FILE *)((char *)v77[1] + 1);
    v102[0] = v78;
    v75 = v78 < 0x30u;
    if ( v78 == 48 )
      continue;
    break;
  }
LABEL_247:
  while ( 2 )
  {
    if ( v75 )
      goto LABEL_287;
    if ( v69 < 0x3Au )
    {
      v12 = (unsigned int)v69 - 48;
      goto LABEL_286;
    }
    v79 = 65296;
    if ( v69 < 0xFF10u )
    {
      v79 = 1632;
      if ( v69 < 0x660u )
        goto LABEL_287;
      if ( v69 < 0x66Au )
        goto LABEL_253;
      v79 = 1776;
      if ( v69 < 0x6F0u )
        goto LABEL_287;
      if ( v69 >= 0x6FAu )
      {
        v79 = 2406;
        if ( v69 < 0x966u )
          goto LABEL_287;
        if ( v69 >= 0x970u )
        {
          v79 = 2534;
          if ( v69 < 0x9E6u )
            goto LABEL_287;
          if ( v69 >= 0x9F0u )
          {
            v79 = 2662;
            if ( v69 < 0xA66u )
              goto LABEL_287;
            if ( v69 >= 0xA70u )
            {
              v79 = 2790;
              if ( v69 < 0xAE6u )
                goto LABEL_287;
              if ( v69 >= 0xAF0u )
              {
                v79 = 2918;
                if ( v69 < 0xB66u )
                  goto LABEL_287;
                if ( v69 >= 0xB70u )
                {
                  v79 = 3174;
                  if ( v69 < 0xC66u )
                    goto LABEL_287;
                  if ( v69 >= 0xC70u )
                  {
                    v79 = 3302;
                    if ( v69 < 0xCE6u )
                      goto LABEL_287;
                    if ( v69 >= 0xCF0u )
                    {
                      v79 = 3430;
                      if ( v69 < 0xD66u )
                        goto LABEL_287;
                      if ( v69 >= 0xD70u )
                      {
                        v79 = 3664;
                        if ( v69 < 0xE50u )
                          goto LABEL_287;
                        if ( v69 >= 0xE5Au )
                        {
                          v79 = 3792;
                          if ( v69 < 0xED0u )
                            goto LABEL_287;
                          if ( v69 >= 0xEDAu )
                          {
                            v79 = 3872;
                            if ( v69 < 0xF20u )
                              goto LABEL_287;
                            if ( v69 >= 0xF2Au )
                            {
                              v79 = 4160;
                              if ( v69 < 0x1040u )
                                goto LABEL_287;
                              if ( v69 >= 0x104Au )
                              {
                                v79 = 6112;
                                if ( v69 < 0x17E0u )
                                  goto LABEL_287;
                                if ( v69 >= 0x17EAu )
                                {
                                  if ( (unsigned __int16)(v69 - 6160) <= 9u )
                                  {
                                    v12 = (unsigned int)v69 - 6160;
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
      v12 = (unsigned int)v69 - v79;
      goto LABEL_286;
    }
    if ( v69 < 0xFF1Au )
      goto LABEL_253;
    v12 = 0xFFFFFFFFLL;
LABEL_286:
    if ( (_DWORD)v12 == -1 )
    {
LABEL_287:
      v80 = (unsigned __int16)v62 - 97;
      if ( (unsigned int)(unsigned __int16)v62 - 65 <= 0x19 || v80 <= 0x19 )
      {
        v81 = (unsigned __int16)v62 - 32;
        if ( v80 > 0x19 )
          v81 = (unsigned __int16)v62;
        v12 = (unsigned int)(v81 - 55);
      }
      else
      {
        v12 = 0xFFFFFFFFLL;
      }
    }
    if ( (unsigned int)v12 >= 0xA )
      goto LABEL_303;
    v112 = 1;
    v67 = v12 + 10 * v67;
    v104 = v67;
    if ( v67 <= 5200 )
    {
      v82 = (FILE **)((char *)a2[2] + 1);
      a2[2] = v82;
      if ( a2[1] && v82 > a2[1] )
      {
        v69 = 0;
      }
      else
      {
        v83 = *a2;
        v69 = j__fgetwc_nolock(**a2);
        if ( v69 == 0xFFFF )
          v69 = 0;
        else
          v83[1] = (FILE *)((char *)v83[1] + 1);
      }
      v62 = v69;
      v102[0] = v69;
LABEL_246:
      v75 = v69 < 0x30u;
      continue;
    }
    break;
  }
  v104 = 5201;
LABEL_303:
  while ( 2 )
  {
    if ( (unsigned __int16)v62 < 0x30u )
      goto LABEL_347;
    if ( (unsigned __int16)v62 < 0x3Au )
    {
      v84 = (unsigned __int16)v62 - 48;
      goto LABEL_346;
    }
    if ( (unsigned __int16)v62 < 0xFF10u )
    {
      if ( (unsigned __int16)v62 >= 0x660u )
      {
        if ( (unsigned __int16)v62 < 0x66Au )
        {
          v84 = (unsigned __int16)v62 - 1632;
          goto LABEL_346;
        }
        if ( (unsigned __int16)v62 >= 0x6F0u )
        {
          if ( (unsigned __int16)v62 < 0x6FAu )
          {
            v84 = (unsigned __int16)v62 - 1776;
            goto LABEL_346;
          }
          if ( (unsigned __int16)v62 >= 0x966u )
          {
            if ( (unsigned __int16)v62 < 0x970u )
            {
              v84 = (unsigned __int16)v62 - 2406;
              goto LABEL_346;
            }
            v85 = 2534;
            if ( (unsigned __int16)v62 >= 0x9E6u )
            {
              if ( (unsigned __int16)v62 < 0x9F0u )
                goto LABEL_318;
              v85 = 2662;
              if ( (unsigned __int16)v62 >= 0xA66u )
              {
                if ( (unsigned __int16)v62 < 0xA70u )
                  goto LABEL_318;
                v85 = 2790;
                if ( (unsigned __int16)v62 >= 0xAE6u )
                {
                  if ( (unsigned __int16)v62 < 0xAF0u )
                    goto LABEL_318;
                  v85 = 2918;
                  if ( (unsigned __int16)v62 >= 0xB66u )
                  {
                    if ( (unsigned __int16)v62 < 0xB70u )
                      goto LABEL_318;
                    v85 = 3174;
                    if ( (unsigned __int16)v62 >= 0xC66u )
                    {
                      if ( (unsigned __int16)v62 < 0xC70u )
                        goto LABEL_318;
                      v85 = 3302;
                      if ( (unsigned __int16)v62 >= 0xCE6u )
                      {
                        if ( (unsigned __int16)v62 < 0xCF0u )
                          goto LABEL_318;
                        v85 = 3430;
                        if ( (unsigned __int16)v62 >= 0xD66u )
                        {
                          if ( (unsigned __int16)v62 < 0xD70u
                            || (v85 = 3664, (unsigned __int16)v62 >= 0xE50u)
                            && ((unsigned __int16)v62 < 0xE5Au
                             || (v85 = 3792, (unsigned __int16)v62 >= 0xED0u)
                             && ((unsigned __int16)v62 < 0xEDAu
                              || (v85 = 3872, (unsigned __int16)v62 >= 0xF20u)
                              && ((unsigned __int16)v62 < 0xF2Au
                               || (v85 = 4160, (unsigned __int16)v62 >= 0x1040u)
                               && ((unsigned __int16)v62 < 0x104Au
                                || (v85 = 6112, (unsigned __int16)v62 >= 0x17E0u)
                                && ((unsigned __int16)v62 < 0x17EAu
                                 || (v85 = 6160, v12 = 9, (unsigned __int16)(v62 - 6160) <= 9u)))))) )
                          {
LABEL_318:
                            v84 = (unsigned __int16)v62 - v85;
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
    if ( (unsigned __int16)v62 >= 0xFF1Au )
      v84 = -1;
    else
      v84 = (unsigned __int16)v62 - 65296;
LABEL_346:
    if ( v84 == -1 )
    {
LABEL_347:
      v12 = (unsigned int)(unsigned __int16)v62 - 97;
      if ( (unsigned int)(unsigned __int16)v62 - 65 <= 0x19 || (unsigned int)v12 <= 0x19 )
      {
        v86 = (unsigned __int16)v62 - 32;
        if ( (unsigned int)v12 > 0x19 )
          v86 = (unsigned __int16)v62;
        v84 = v86 - 55;
      }
      else
      {
        v84 = -1;
      }
    }
    if ( v84 < 0xA )
    {
      v87 = (FILE **)((char *)a2[2] + 1);
      a2[2] = v87;
      if ( a2[1] && v87 > a2[1] )
      {
        v62 = 0;
      }
      else
      {
        v88 = *a2;
        v89 = j__fgetwc_nolock(**a2);
        v62 = v89;
        if ( v89 == 0xFFFF )
          v62 = 0;
        else
          v88[1] = (FILE *)((char *)v88[1] + 1);
      }
      v102[0] = v62;
      continue;
    }
    break;
  }
  v67 = -v104;
  v90 = v107;
  v66 = v109;
  if ( (_WORD)v105 != 45 )
    v67 = v104;
  if ( !v112 )
  {
    v91 = (FILE **)((char *)a2[2] - 1);
    a2[2] = v91;
    if ( (!a2[1] || v91 <= a2[1]) && (_WORD)v62 && (_WORD)v62 != 0xFFFF )
    {
      v92 = *a2;
      v92[1] = (FILE *)((char *)v92[1] - 1);
      ungetwc_nolock(v62, *v92, v12);
      v91 = a2[2];
    }
    if ( v90 != v91 )
    {
LABEL_370:
      *(_BYTE *)a2[3] = 0;
      return 7;
    }
    v93 = (FILE **)((char *)v91 + 1);
    a2[2] = v93;
    if ( a2[1] && v93 > a2[1] )
    {
      v62 = 0;
    }
    else
    {
      v94 = *a2;
      v95 = j__fgetwc_nolock(**a2);
      v62 = v95;
      if ( v95 == 0xFFFF )
        v62 = 0;
      else
        v94[1] = (FILE *)((char *)v94[1] + 1);
    }
    v102[0] = v62;
  }
LABEL_378:
  v96 = (FILE **)((char *)a2[2] - 1);
  a2[2] = v96;
  if ( (!a2[1] || v96 <= a2[1]) && (unsigned __int16)(v62 - 1) <= 0xFFFDu )
  {
    v97 = *a2;
    v97[1] = (FILE *)((char *)v97[1] - 1);
    ungetwc_nolock(v62, *v97, v12);
  }
  v98 = v106;
  v99 = (_BYTE *)(a3 + 8);
  if ( v106 == (_BYTE *)(a3 + 8) )
    return 2;
  do
  {
    v100 = v98 - 1;
    if ( *(v98 - 1) )
      break;
    --v98;
  }
  while ( v100 != v99 );
  if ( v98 == v99 )
    return 2;
  if ( v67 > 5200 )
    return 9;
  if ( v67 < -5200 )
    return 8;
  v101 = v103 * (v66 != 0 ? 4 : 1) + v67;
  if ( v101 > 5200 )
    return 9;
  if ( v101 >= -5200 )
  {
    *(_DWORD *)a3 = v101;
    *(_DWORD *)(a3 + 4) = (_DWORD)v98 - (_DWORD)v99;
    return v66;
  }
  return 8;
}

// 140227733: variable 'v12' is possibly undefined
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (0000000140227894) ----------------------------------------------------
__int64            sub_140227894(struct __crt_locale_pointers *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v7; // rbp
  unsigned __int8 *v8; // rax
  unsigned __int8 v9; // di
  unsigned __int8 v10; // si
  unsigned __int64 v11; // rax
  unsigned __int8 *v12; // rax
  int *v13; // r11
  _BYTE *v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int8 *v16; // rax
  unsigned __int8 v17; // r13
  __int64 v18; // r8
  char *v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r10d
  _BYTE *v26; // r12
  char v27; // r8
  _BYTE *v28; // r15
  unsigned __int64 v29; // rax
  unsigned __int8 *v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int8 *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int8 *v37; // rax
  unsigned __int8 v38; // cl
  unsigned __int64 v39; // rax
  unsigned __int8 *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // rax
  unsigned __int8 *v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // r9
  char *v50; // rax
  char v51; // cl
  char v52; // al
  int v53; // r9d
  unsigned __int64 v54; // rax
  char *v55; // rax
  char v56; // r8
  char v57; // r11
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v60; // r10
  unsigned __int64 v61; // rax
  char *v62; // rax
  unsigned int v63; // edx
  unsigned __int64 v64; // rax
  char *v65; // rax
  unsigned int v66; // eax
  unsigned __int64 v67; // rax
  char *v68; // rax
  int v69; // eax
  unsigned __int64 v70; // rax
  __int64 v71; // r8
  unsigned __int64 v72; // rax
  char *v73; // rax
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  _BYTE *v76; // rax
  _BYTE *v77; // rcx
  bool v78; // zf
  int v79; // r9d
  int v80; // [rsp+68h] [rbp+10h] BYREF
  __int64 v81; // [rsp+70h] [rbp+18h]

  v81 = a3;
  v4 = *a2;
  if ( !v4 || !a2[3] )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 7;
  }
  v7 = a2[2];
  a2[2] = v7 + 1;
  if ( a2[1] && (unsigned __int64)(v7 + 1) > a2[1]
    || (v8 = *(unsigned __int8 **)(v4 + 16), v8 == *(unsigned __int8 **)(v4 + 8)) )
  {
    v9 = 0;
  }
  else
  {
    v9 = *v8;
    *(_QWORD *)(v4 + 16) = (uint64)(uintptr_t)(v8 + 1);
  }
  LOBYTE(v80) = v9;
  v10 = v9;
  if ( (unsigned int)sub_140236ED8(v9, 8, a1) )
  {
    do
    {
      v11 = a2[2] + 1LL;
      a2[2] = v11;
      if ( a2[1] && v11 > a2[1] || (v12 = *(unsigned __int8 **)(*a2 + 16LL), v12 == *(unsigned __int8 **)(*a2 + 8LL)) )
      {
        v9 = 0;
      }
      else
      {
        v9 = *v12;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v12 + 1);
      }
      LOBYTE(v80) = v9;
    }
    while ( (unsigned int)sub_140236ED8(v9, 8, a1) );
    v10 = v9;
  }
  v13 = (int *)v81;
  v14 = (_BYTE *)(v81 + 776);
  *(_BYTE *)(v81 + 776) = v10 == 45;
  if ( v10 == 45 || v10 == 43 )
  {
    v15 = a2[2] + 1LL;
    a2[2] = v15;
    if ( a2[1] && v15 > a2[1] || (v16 = *(unsigned __int8 **)(*a2 + 16LL), v16 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v9 = 0;
    }
    else
    {
      v9 = *v16;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v16 + 1);
    }
    LOBYTE(v80) = v9;
    v10 = v9;
  }
  if ( ((v10 - 73) & 0xDF) == 0 )
    return sub_140229560((char *)&v80, (__int64)a2, v7);
  if ( ((v10 - 78) & 0xDF) == 0 )
    return sub_140229F5C((char *)&v80, a2, v7);
  v17 = 0;
  if ( v10 != 48 )
    goto LABEL_46;
  v18 = a2[2];
  a2[2] = v18 + 1;
  if ( a2[1] && (unsigned __int64)(v18 + 1) > a2[1] || (v19 = *(char **)(*a2 + 16LL), v19 == *(char **)(*a2 + 8LL)) )
  {
    v20 = 0;
LABEL_41:
    v23 = a2[2] - 1LL;
    a2[2] = v23;
    if ( (!a2[1] || v23 <= a2[1]) && v20 != -1 && v20 != 0 )
    {
      v24 = *(_QWORD *)(*a2 + 16LL);
      if ( v24 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16LL) = v24 - 1;
    }
    goto LABEL_46;
  }
  v20 = *v19;
  *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v19 + 1);
  if ( v20 != 120 && v20 != 88 )
    goto LABEL_41;
  v17 = 1;
  v21 = a2[2] + 1LL;
  a2[2] = v21;
  if ( a2[1] && v21 > a2[1] || (v22 = *(unsigned __int8 **)(*a2 + 16LL), v22 == *(unsigned __int8 **)(*a2 + 8LL)) )
  {
    v9 = 0;
  }
  else
  {
    v9 = *v22;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v22 + 1);
  }
  v7 = v18;
LABEL_46:
  v25 = 0;
  v26 = v13 + 2;
  v27 = 0;
  v28 = v13 + 2;
  if ( v9 == 48 )
  {
    v27 = 1;
    while ( 1 )
    {
      v29 = a2[2] + 1LL;
      a2[2] = v29;
      if ( a2[1] )
      {
        if ( v29 > a2[1] )
          break;
      }
      v30 = *(unsigned __int8 **)(*a2 + 16LL);
      if ( v30 == *(unsigned __int8 **)(*a2 + 8LL) )
        break;
      v9 = *v30;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v30 + 1);
      if ( v9 != 48 )
        goto LABEL_54;
    }
    v9 = 0;
  }
LABEL_54:
  v31 = v17 != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v32 = (unsigned __int8)(v9 - 65) > 0x19u ? -1 : (char)v9 - 55;
      else
        v32 = (char)v9 - 87;
    }
    else
    {
      v32 = (char)v9 - 48;
    }
    if ( v32 > v31 )
      break;
    v27 = 1;
    if ( v28 != v14 )
      *v28++ = v32;
    ++v25;
    v33 = a2[2] + 1LL;
    v78 = a2[1] == 0;
    a2[2] = v33;
    if ( !v78 && v33 > a2[1] || (v34 = *(unsigned __int8 **)(*a2 + 16LL), v34 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v9 = 0;
    }
    else
    {
      v9 = *v34;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v34 + 1);
    }
  }
  v35 = *(_QWORD *)a1;
  v80 = v25;
  if ( v9 == ***(_BYTE ***)(v35 + 248) )
  {
    v36 = a2[2] + 1LL;
    a2[2] = v36;
    if ( a2[1] && v36 > a2[1] || (v37 = *(unsigned __int8 **)(*a2 + 16LL), v37 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v9 = 0;
    }
    else
    {
      v9 = *v37;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v37 + 1);
    }
    v38 = v9;
    if ( v28 == v26 && v9 == 48 )
    {
      v27 = 1;
      while ( 1 )
      {
        --v25;
        v39 = a2[2] + 1LL;
        v80 = v25;
        a2[2] = v39;
        if ( a2[1] )
        {
          if ( v39 > a2[1] )
            break;
        }
        v40 = *(unsigned __int8 **)(*a2 + 16LL);
        if ( v40 == *(unsigned __int8 **)(*a2 + 8LL) )
          break;
        v9 = *v40;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v40 + 1);
        v38 = v9;
        if ( v9 != 48 )
          goto LABEL_85;
      }
      v9 = 0;
      v38 = 0;
    }
LABEL_85:
    while ( 1 )
    {
      if ( (unsigned __int8)(v38 - 48) > 9u )
      {
        if ( (unsigned __int8)(v38 - 97) > 0x19u )
          v41 = (unsigned __int8)(v38 - 65) > 0x19u ? -1 : (char)v38 - 55;
        else
          v41 = (char)v38 - 87;
      }
      else
      {
        v41 = (char)v38 - 48;
      }
      if ( v41 > v31 )
        break;
      v27 = 1;
      if ( v28 != v14 )
        *v28++ = v41;
      v42 = a2[2] + 1LL;
      a2[2] = v42;
      if ( a2[1] && v42 > a2[1] || (v43 = *(unsigned __int8 **)(*a2 + 16LL), v43 == *(unsigned __int8 **)(*a2 + 8LL)) )
      {
        v9 = 0;
      }
      else
      {
        v9 = *v43;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v43 + 1);
      }
      v38 = v9;
    }
  }
  v44 = a2[1];
  v45 = a2[2] - 1LL;
  a2[2] = v45;
  if ( !v27 )
  {
    if ( !v44 || v45 <= v44 )
    {
      if ( v9 )
      {
        if ( v9 != 0xFF )
        {
          v46 = *(_QWORD *)(*a2 + 16LL);
          if ( v46 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16LL) = v46 - 1;
            v45 = a2[2];
          }
        }
      }
    }
    if ( v7 == v45 )
    {
      if ( !v17 )
        return 7;
      return 2;
    }
LABEL_189:
    *(_BYTE *)a2[3] = 0;
    return 7;
  }
  if ( !v44 || (v47 = v45, v48 = v44, v45 <= v44) )
  {
    v47 = v45;
    v48 = v44;
    if ( v9 )
    {
      if ( v9 != 0xFF )
      {
        v49 = *(_QWORD *)(*a2 + 16LL);
        if ( v49 != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16LL) = v49 - 1;
          v47 = a2[2];
          v48 = a2[1];
        }
      }
    }
  }
  a2[2] = v47 + 1;
  if ( v48 && v47 + 1 > v48 || (v50 = *(char **)(*a2 + 16LL), v50 == *(char **)(*a2 + 8LL)) )
  {
    v52 = 0;
    v51 = 0;
    goto LABEL_127;
  }
  v51 = *v50;
  *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v50 + 1);
  v52 = 0;
  switch ( v51 )
  {
    case 'E':
      goto LABEL_125;
    case 'P':
LABEL_124:
      v52 = v17;
      break;
    case 'e':
LABEL_125:
      v52 = v17 ^ 1;
      break;
    case 'p':
      goto LABEL_124;
  }
LABEL_127:
  v53 = 0;
  if ( v52 )
  {
    v54 = a2[2] + 1LL;
    a2[2] = v54;
    if ( a2[1] && v54 > a2[1] || (v55 = *(char **)(*a2 + 16LL), v55 == *(char **)(*a2 + 8LL)) )
    {
      v51 = 0;
      v56 = 0;
      v57 = 0;
    }
    else
    {
      v51 = *v55;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v55 + 1);
      v56 = v51;
      v57 = v51;
      if ( v51 == 43 || v51 == 45 )
      {
        v58 = a2[2] + 1LL;
        a2[2] = v58;
        if ( a2[1] && v58 > a2[1] || (v59 = *(char **)(*a2 + 16LL), v59 == *(char **)(*a2 + 8LL)) )
        {
          v51 = 0;
        }
        else
        {
          v51 = *v59;
          *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v59 + 1);
        }
        v56 = v51;
      }
    }
    v60 = 0;
    if ( v51 == 48 )
    {
      v60 = 1;
      while ( 1 )
      {
        v61 = a2[2] + 1LL;
        a2[2] = v61;
        if ( a2[1] )
        {
          if ( v61 > a2[1] )
            break;
        }
        v62 = *(char **)(*a2 + 16LL);
        if ( v62 == *(char **)(*a2 + 8LL) )
          break;
        v51 = *v62;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v62 + 1);
        v56 = v51;
        if ( v51 != 48 )
          goto LABEL_148;
      }
      v56 = 0;
      v51 = 0;
    }
LABEL_148:
    while ( 1 )
    {
      if ( (unsigned __int8)(v51 - 48) > 9u )
      {
        if ( (unsigned __int8)(v51 - 97) > 0x19u )
          v63 = (unsigned __int8)(v51 - 65) > 0x19u ? -1 : v51 - 55;
        else
          v63 = v51 - 87;
      }
      else
      {
        v63 = v51 - 48;
      }
      if ( v63 >= 0xA )
        break;
      v60 = 1;
      v53 = v63 + 10 * v53;
      if ( v53 > 5200 )
      {
        v53 = 5201;
        break;
      }
      v64 = a2[2] + 1LL;
      a2[2] = v64;
      if ( a2[1] && v64 > a2[1] || (v65 = *(char **)(*a2 + 16LL), v65 == *(char **)(*a2 + 8LL)) )
      {
        v51 = 0;
      }
      else
      {
        v51 = *v65;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v65 + 1);
      }
      v56 = v51;
    }
    while ( 1 )
    {
      if ( v56 < 48 || v51 > 57 )
      {
        if ( (unsigned __int8)(v51 - 97) > 0x19u )
          v66 = (unsigned __int8)(v51 - 65) > 0x19u ? -1 : v51 - 55;
        else
          v66 = v51 - 87;
      }
      else
      {
        v66 = v51 - 48;
      }
      if ( v66 >= 0xA )
        break;
      v67 = a2[2] + 1LL;
      a2[2] = v67;
      if ( a2[1] && v67 > a2[1] || (v68 = *(char **)(*a2 + 16LL), v68 == *(char **)(*a2 + 8LL)) )
      {
        v51 = 0;
      }
      else
      {
        v51 = *v68;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v68 + 1);
      }
      v56 = v51;
    }
    v69 = -v53;
    if ( v57 != 45 )
      v69 = v53;
    v53 = v69;
    if ( !v60 )
    {
      v70 = a2[2] - 1LL;
      a2[2] = v70;
      if ( !a2[1] || v70 <= a2[1] )
      {
        if ( v56 )
        {
          if ( v56 != -1 )
          {
            v71 = *(_QWORD *)(*a2 + 16LL);
            if ( v71 != *(_QWORD *)*a2 )
            {
              *(_QWORD *)(*a2 + 16LL) = v71 - 1;
              v70 = a2[2];
            }
          }
        }
      }
      if ( v47 != v70 )
        goto LABEL_189;
      v72 = v70 + 1;
      a2[2] = v72;
      if ( a2[1] && v72 > a2[1] || (v73 = *(char **)(*a2 + 16LL), v73 == *(char **)(*a2 + 8LL)) )
      {
        v51 = 0;
      }
      else
      {
        v51 = *v73;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v73 + 1);
      }
    }
    v13 = (int *)v81;
    v25 = v80;
  }
  v74 = a2[2] - 1LL;
  a2[2] = v74;
  if ( (!a2[1] || v74 <= a2[1]) && v51 != -1 && v51 != 0 )
  {
    v75 = *(_QWORD *)(*a2 + 16LL);
    if ( v75 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v75 - 1;
  }
  if ( v28 == v26 )
    return 2;
  while ( 1 )
  {
    v76 = v28 - 1;
    v77 = v28;
    v78 = *(v28 - 1) == 0;
    if ( *(v28 - 1) )
      break;
    --v28;
    if ( v76 == v26 )
    {
      v78 = *v76 == 0;
      break;
    }
  }
  if ( !v78 )
    v76 = v77;
  if ( v76 == v26 )
    return 2;
  if ( v53 <= 5200 )
  {
    if ( v53 < -5200 )
      return 8;
    v79 = v25 * (v17 != 0 ? 4 : 1) + v53;
    if ( v79 <= 5200 )
    {
      if ( v79 >= -5200 )
      {
        *v13 = v79;
        v13[1] = (_DWORD)v28 - (_DWORD)v26;
        return v17;
      }
      return 8;
    }
  }
  return 9;
}


//----- (00000001402280D0) ----------------------------------------------------
__int64            sub_1402280D0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rbp
  unsigned __int16 v7; // bx
  unsigned __int16 *v8; // rax
  __int16 v9; // di
  unsigned __int16 i; // cx
  unsigned __int64 v11; // rax
  __int16 *v12; // rax
  __int16 v13; // dx
  __int64 v14; // r11
  _BYTE *v15; // r10
  unsigned __int64 v16; // rax
  __int16 *v17; // rax
  char v18; // r13
  unsigned __int64 v19; // r8
  __int16 v20; // cx
  __int16 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int16 *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  _BYTE *v26; // r15
  int v27; // edi
  char v28; // r8
  int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned __int16 *v31; // rax
  unsigned __int16 v32; // dx
  unsigned int v33; // r9d
  unsigned int v34; // eax
  unsigned int v35; // edx
  int v36; // eax
  unsigned __int64 v37; // rax
  unsigned __int16 *v38; // rax
  int *v39; // r11
  unsigned __int64 v40; // rbp
  unsigned __int8 v41; // r13
  _BYTE *v42; // r12
  unsigned __int64 v43; // rax
  unsigned __int16 v44; // dx
  unsigned __int16 *v45; // rax
  unsigned __int16 v46; // cx
  unsigned __int64 v47; // rax
  unsigned __int16 *v48; // rax
  unsigned int v49; // eax
  int v50; // edx
  unsigned int v51; // edx
  int v52; // eax
  unsigned __int64 v53; // rax
  unsigned __int16 *v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  unsigned __int16 v61; // dx
  unsigned __int16 *v62; // rax
  char v63; // al
  int v64; // r9d
  unsigned __int64 v65; // rax
  unsigned __int16 *v66; // rax
  unsigned __int16 v67; // r11
  unsigned __int16 v68; // cx
  unsigned __int64 v69; // rax
  unsigned __int16 *v70; // rax
  unsigned __int16 v71; // dx
  int v72; // eax
  bool v73; // cf
  unsigned __int64 v74; // rax
  unsigned __int16 *v75; // rax
  unsigned int v76; // r8d
  unsigned int v77; // eax
  int v78; // r8d
  unsigned __int64 v79; // rax
  unsigned __int16 *v80; // rax
  unsigned int v81; // eax
  int v82; // ecx
  unsigned int v83; // r8d
  int v84; // eax
  unsigned __int64 v85; // rax
  unsigned __int16 *v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // r8
  unsigned __int64 v89; // rax
  unsigned __int16 *v90; // rax
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  _BYTE *v93; // rax
  _BYTE *v94; // rcx
  bool v95; // zf
  int v96; // r9d
  int v97; // [rsp+20h] [rbp-78h]
  unsigned __int16 v98; // [rsp+24h] [rbp-74h]
  int v99; // [rsp+28h] [rbp-70h]
  unsigned __int64 v100; // [rsp+30h] [rbp-68h]
  unsigned __int64 v101; // [rsp+30h] [rbp-68h]
  _BYTE *v102; // [rsp+38h] [rbp-60h]
  _BYTE *v103; // [rsp+40h] [rbp-58h]
  __int16 v105; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v106; // [rsp+B0h] [rbp+18h]
  int v107; // [rsp+B8h] [rbp+20h]

  v106 = a3;
  v4 = *a2;
  if ( !v4 || !a2[3] )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 7;
  }
  v6 = a2[2];
  v100 = v6;
  a2[2] = v6 + 1;
  if ( a2[1] && v6 + 1 > a2[1] )
  {
    v7 = 0;
  }
  else
  {
    v8 = *(unsigned __int16 **)(v4 + 16);
    if ( v8 == *(unsigned __int16 **)(v4 + 8) || (v7 = *v8, *(_QWORD *)(v4 + 16) = (uint64)(uintptr_t)(v8 + 1), v7 == 0xFFFF) )
      v7 = 0;
  }
  v9 = v7;
  for ( i = v7; ; i = v9 )
  {
    v105 = v7;
    if ( !(unsigned int)sub_140256E00(i, 8) )
      break;
    v11 = a2[2] + 1;
    a2[2] = v11;
    if ( a2[1] && v11 > a2[1] )
    {
      v9 = 0;
    }
    else
    {
      v12 = *(__int16 **)(*a2 + 16);
      if ( v12 == *(__int16 **)(*a2 + 8) || (v13 = *v12, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v12 + 1), v9 = v13, v13 == -1) )
        v9 = 0;
    }
    v7 = v9;
  }
  v14 = v106;
  v15 = (_BYTE *)(v106 + 776);
  *(_BYTE *)(v106 + 776) = v9 == 45;
  if ( v9 == 45 || v9 == 43 )
  {
    v16 = a2[2] + 1;
    a2[2] = v16;
    if ( a2[1] && v16 > a2[1] )
    {
      v9 = 0;
    }
    else
    {
      v17 = *(__int16 **)(*a2 + 16);
      if ( v17 == *(__int16 **)(*a2 + 8) || (v9 = *v17, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v17 + 1), v9 == -1) )
        v9 = 0;
    }
    v7 = v9;
    v105 = v9;
  }
  if ( ((v9 - 73) & 0xFFDF) == 0 )
    return sub_140229A30(&v105, a2, v6);
  if ( ((v9 - 78) & 0xFFDF) == 0 )
    return sub_14022A55C((unsigned __int16 *)&v105, a2, v6);
  LOBYTE(v105) = 0;
  v18 = 0;
  if ( v9 != 48 )
    goto LABEL_51;
  v19 = a2[2];
  a2[2] = v19 + 1;
  if ( a2[1] && v19 + 1 > a2[1] )
  {
    v20 = 0;
  }
  else
  {
    v21 = *(__int16 **)(*a2 + 16);
    if ( v21 == *(__int16 **)(*a2 + 8) || (v20 = *v21, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v21 + 1), v20 == -1) )
    {
      v20 = 0;
    }
    else if ( ((v20 - 88) & 0xFFDF) == 0 )
    {
      v18 = 1;
      v22 = a2[2] + 1;
      LOBYTE(v105) = 1;
      a2[2] = v22;
      if ( a2[1] && v22 > a2[1] )
      {
        v7 = 0;
      }
      else
      {
        v23 = *(unsigned __int16 **)(*a2 + 16);
        if ( v23 == *(unsigned __int16 **)(*a2 + 8) || (v7 = *v23, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v23 + 1), v7 == 0xFFFF) )
          v7 = 0;
      }
      v100 = v19;
      goto LABEL_51;
    }
  }
  v24 = a2[2] - 1;
  a2[2] = v24;
  if ( (!a2[1] || v24 <= a2[1]) && (unsigned __int16)(v20 - 1) <= 0xFFFDu )
  {
    v25 = *(_QWORD *)(*a2 + 16);
    if ( v25 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16) = v25 - 2;
  }
LABEL_51:
  v103 = (_BYTE *)(v14 + 8);
  v26 = (_BYTE *)(v14 + 8);
  v27 = 0;
  v28 = 0;
  v29 = 48;
  if ( v7 == 48 )
  {
    v28 = 1;
    while ( 1 )
    {
      v30 = a2[2] + 1;
      a2[2] = v30;
      if ( a2[1] )
      {
        if ( v30 > a2[1] )
          break;
      }
      v31 = *(unsigned __int16 **)(*a2 + 16);
      if ( v31 == *(unsigned __int16 **)(*a2 + 8) )
      {
        v29 = 48;
        break;
      }
      v32 = *v31;
      *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v31 + 1);
      v29 = 48;
      if ( v32 == 0xFFFF )
        break;
      v7 = v32;
      if ( v32 != 48 )
        goto LABEL_62;
    }
    v7 = 0;
  }
LABEL_62:
  v107 = 9;
  v33 = v18 != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( v7 >= 0x30u )
    {
      if ( v7 < 0x3Au )
        goto LABEL_65;
      if ( v7 >= 0xFF10u )
      {
        if ( v7 >= 0xFF1Au )
          v34 = -1;
        else
          v34 = v7 - 65296;
LABEL_106:
        if ( v34 != -1 )
          goto LABEL_113;
        goto LABEL_107;
      }
      if ( v7 >= 0x660u )
      {
        if ( v7 < 0x66Au )
        {
          v34 = v7 - 1632;
          goto LABEL_106;
        }
        if ( v7 >= 0x6F0u )
        {
          if ( v7 < 0x6FAu )
          {
            v34 = v7 - 1776;
            goto LABEL_106;
          }
          if ( v7 >= 0x966u )
          {
            if ( v7 < 0x970u )
            {
              v34 = v7 - 2406;
              goto LABEL_106;
            }
            if ( v7 >= 0x9E6u )
            {
              if ( v7 < 0x9F0u )
              {
                v34 = v7 - 2534;
                goto LABEL_106;
              }
              v29 = 2662;
              if ( v7 >= 0xA66u )
              {
                if ( v7 < 0xA70u )
                  goto LABEL_65;
                v29 = 2790;
                if ( v7 >= 0xAE6u )
                {
                  if ( v7 < 0xAF0u )
                    goto LABEL_65;
                  v29 = 2918;
                  if ( v7 >= 0xB66u )
                  {
                    if ( v7 < 0xB70u )
                      goto LABEL_65;
                    v29 = 3174;
                    if ( v7 >= 0xC66u )
                    {
                      if ( v7 < 0xC70u )
                        goto LABEL_65;
                      v29 = 3302;
                      if ( v7 >= 0xCE6u )
                      {
                        if ( v7 < 0xCF0u
                          || (v29 = 3430, v7 >= 0xD66u)
                          && (v7 < 0xD70u
                           || (v29 = 3664, v7 >= 0xE50u)
                           && (v7 < 0xE5Au
                            || (v29 = 3792, v7 >= 0xED0u)
                            && (v7 < 0xEDAu
                             || (v29 = 3872, v7 >= 0xF20u)
                             && (v7 < 0xF2Au
                              || (v29 = 4160, v7 >= 0x1040u)
                              && (v7 < 0x104Au
                               || (v29 = 6112, v7 >= 0x17E0u)
                               && (v7 < 0x17EAu || (v29 = 6160, (unsigned __int16)(v7 - 6160) <= 9u))))))) )
                        {
LABEL_65:
                          v34 = v7 - v29;
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
    v35 = v7 - 97;
    if ( (unsigned int)v7 - 65 <= 0x19 || v35 <= 0x19 )
    {
      v36 = v7 - 32;
      if ( v35 > 0x19 )
        v36 = v7;
      v34 = v36 - 55;
    }
    else
    {
      v34 = -1;
    }
LABEL_113:
    if ( v34 > v33 )
      break;
    v28 = 1;
    if ( v26 != v15 )
      *v26++ = v34;
    ++v27;
    v37 = a2[2] + 1;
    a2[2] = v37;
    if ( a2[1] && v37 > a2[1] )
    {
      v7 = 0;
    }
    else
    {
      v38 = *(unsigned __int16 **)(*a2 + 16);
      if ( v38 == *(unsigned __int16 **)(*a2 + 8) || (v7 = *v38, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v38 + 1), v7 == 0xFFFF) )
        v7 = 0;
    }
    v29 = 48;
  }
  v39 = (int *)v106;
  v40 = v100;
  v41 = v105;
  v99 = v27;
  v42 = (_BYTE *)(v106 + 8);
  v102 = v26;
  if ( v7 != ***(char ***)(*(_QWORD *)a1 + 248LL) )
    goto LABEL_202;
  v43 = a2[2] + 1;
  a2[2] = v43;
  if ( a2[1] && v43 > a2[1] )
  {
    v44 = 0;
  }
  else
  {
    v45 = *(unsigned __int16 **)(*a2 + 16);
    if ( v45 == *(unsigned __int16 **)(*a2 + 8) || (v44 = *v45, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v45 + 1), v44 == 0xFFFF) )
      v44 = 0;
  }
  v7 = v44;
  v46 = v44;
  if ( v26 == v42 && v44 == 48 )
  {
    v28 = 1;
    while ( 1 )
    {
      --v27;
      v47 = a2[2] + 1;
      v99 = v27;
      a2[2] = v47;
      if ( a2[1] )
      {
        if ( v47 > a2[1] )
          break;
      }
      v48 = *(unsigned __int16 **)(*a2 + 16);
      if ( v48 == *(unsigned __int16 **)(*a2 + 8) || (v46 = *v48, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v48 + 1), v46 == 0xFFFF) )
      {
        v46 = 0;
        goto LABEL_141;
      }
      v7 = v46;
      if ( v46 != 48 )
        goto LABEL_142;
    }
    v46 = 0;
LABEL_141:
    v7 = 0;
  }
LABEL_142:
  while ( 2 )
  {
    if ( v46 < 0x30u )
      goto LABEL_185;
    if ( v46 < 0x3Au )
    {
      v49 = v46 - 48;
      goto LABEL_184;
    }
    if ( v46 < 0xFF10u )
    {
      if ( v46 >= 0x660u )
      {
        if ( v46 < 0x66Au )
        {
          v49 = v46 - 1632;
          goto LABEL_184;
        }
        if ( v46 >= 0x6F0u )
        {
          if ( v46 < 0x6FAu )
          {
            v49 = v46 - 1776;
            goto LABEL_184;
          }
          v50 = 2406;
          if ( v46 >= 0x966u )
          {
            if ( v46 < 0x970u )
              goto LABEL_154;
            v50 = 2534;
            if ( v46 >= 0x9E6u )
            {
              if ( v46 < 0x9F0u )
                goto LABEL_154;
              v50 = 2662;
              if ( v46 >= 0xA66u )
              {
                if ( v46 < 0xA70u )
                  goto LABEL_154;
                v50 = 2790;
                if ( v46 >= 0xAE6u )
                {
                  if ( v46 < 0xAF0u )
                    goto LABEL_154;
                  v50 = 2918;
                  if ( v46 >= 0xB66u )
                  {
                    if ( v46 < 0xB70u )
                      goto LABEL_154;
                    v50 = 3174;
                    if ( v46 >= 0xC66u )
                    {
                      if ( v46 < 0xC70u )
                        goto LABEL_154;
                      v50 = 3302;
                      if ( v46 >= 0xCE6u )
                      {
                        if ( v46 < 0xCF0u
                          || (v50 = 3430, v46 >= 0xD66u)
                          && (v46 < 0xD70u
                           || (v50 = 3664, v46 >= 0xE50u)
                           && (v46 < 0xE5Au
                            || (v50 = 3792, v46 >= 0xED0u)
                            && (v46 < 0xEDAu
                             || (v50 = 3872, v46 >= 0xF20u)
                             && (v46 < 0xF2Au
                              || (v50 = 4160, v46 >= 0x1040u)
                              && (v46 < 0x104Au
                               || (v50 = 6112, v46 >= 0x17E0u)
                               && (v46 < 0x17EAu
                                || (v50 = 6160, (unsigned __int16)(v46 - 6160) <= (unsigned __int16)v107))))))) )
                        {
LABEL_154:
                          v49 = v46 - v50;
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
    if ( v46 >= 0xFF1Au )
      v49 = -1;
    else
      v49 = v46 - 65296;
LABEL_184:
    if ( v49 == -1 )
    {
LABEL_185:
      v51 = v7 - 97;
      if ( (unsigned int)v7 - 65 <= 0x19 || v51 <= 0x19 )
      {
        v52 = v7 - 32;
        if ( v51 > 0x19 )
          v52 = v7;
        v49 = v52 - 55;
      }
      else
      {
        v49 = -1;
      }
    }
    if ( v49 <= v33 )
    {
      v28 = 1;
      if ( v26 != v15 )
        *v26++ = v49;
      v53 = a2[2] + 1;
      a2[2] = v53;
      if ( a2[1] && v53 > a2[1] )
      {
        v46 = 0;
      }
      else
      {
        v54 = *(unsigned __int16 **)(*a2 + 16);
        if ( v54 == *(unsigned __int16 **)(*a2 + 8) || (v46 = *v54, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v54 + 1), v46 == 0xFFFF) )
          v46 = 0;
      }
      v7 = v46;
      continue;
    }
    break;
  }
  v40 = v100;
  v42 = v103;
  v41 = v105;
  v39 = (int *)v106;
  v102 = v26;
LABEL_202:
  v55 = a2[1];
  v56 = a2[2] - 1;
  a2[2] = v56;
  if ( !v28 )
  {
    if ( !v55 || v56 <= v55 )
    {
      if ( v7 )
      {
        if ( v7 != 0xFFFF )
        {
          v57 = *(_QWORD *)(*a2 + 16);
          if ( v57 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16) = v57 - 2;
            v56 = a2[2];
          }
        }
      }
    }
    if ( v40 != v56 )
      goto LABEL_384;
    if ( !v41 )
      return 7;
    return 2;
  }
  if ( !v55 || (v101 = v56, v58 = v56, v59 = v55, v56 <= v55) )
  {
    v101 = v56;
    v58 = v56;
    v59 = v55;
    if ( v7 )
    {
      v101 = v56;
      if ( v7 != 0xFFFF )
      {
        v101 = v56;
        v60 = *(_QWORD *)(*a2 + 16);
        if ( v60 != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16) = v60 - 2;
          v58 = a2[2];
          v59 = a2[1];
          v101 = v58;
        }
      }
    }
  }
  a2[2] = v58 + 1;
  if ( v59 && v58 + 1 > v59 )
  {
    v61 = 0;
  }
  else
  {
    v62 = *(unsigned __int16 **)(*a2 + 16);
    if ( v62 == *(unsigned __int16 **)(*a2 + 8) || (v61 = *v62, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v62 + 1), v61 == 0xFFFF) )
      v61 = 0;
  }
  v63 = 0;
  switch ( v61 )
  {
    case 'E':
      goto LABEL_229;
    case 'P':
      goto LABEL_228;
    case 'e':
LABEL_229:
      v63 = v41 ^ 1;
      break;
    case 'p':
LABEL_228:
      v63 = v41;
      break;
  }
  v97 = 0;
  v64 = 0;
  if ( !v63 )
    goto LABEL_392;
  v65 = a2[2] + 1;
  a2[2] = v65;
  if ( a2[1] && v65 > a2[1] )
  {
    v98 = 0;
    goto LABEL_246;
  }
  v66 = *(unsigned __int16 **)(*a2 + 16);
  if ( v66 == *(unsigned __int16 **)(*a2 + 8)
    || (v67 = *v66, v98 = *v66, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v66 + 1), v67 == 0xFFFF) )
  {
    v98 = 0;
LABEL_246:
    v68 = 0;
    v61 = 0;
  }
  else
  {
    v61 = v67;
    if ( v67 == 43 || (v68 = v67, v67 == 45) )
    {
      v69 = a2[2] + 1;
      a2[2] = v69;
      if ( a2[1] && v69 > a2[1] )
      {
        v68 = 0;
      }
      else
      {
        v70 = *(unsigned __int16 **)(*a2 + 16);
        if ( v70 == *(unsigned __int16 **)(*a2 + 8)
          || (v71 = *v70, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v70 + 1), v68 = v71, v71 == 0xFFFF) )
        {
          v68 = 0;
        }
      }
      v61 = v68;
    }
  }
  v72 = 48;
  LOBYTE(v107) = 0;
  v73 = v68 < 0x30u;
  if ( v68 != 48 )
    goto LABEL_259;
  LOBYTE(v107) = 1;
  while ( 2 )
  {
    v74 = a2[2] + 1;
    a2[2] = v74;
    if ( a2[1] && v74 > a2[1] )
    {
      v68 = 0;
LABEL_257:
      v61 = 0;
      goto LABEL_258;
    }
    v75 = *(unsigned __int16 **)(*a2 + 16);
    if ( v75 == *(unsigned __int16 **)(*a2 + 8) || (v68 = *v75, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v75 + 1), v68 == 0xFFFF) )
    {
      v68 = 0;
      goto LABEL_257;
    }
    v72 = 48;
    v61 = v68;
    v73 = v68 < 0x30u;
    if ( v68 == 48 )
      continue;
    break;
  }
LABEL_259:
  while ( 2 )
  {
    if ( v73 )
      goto LABEL_298;
    if ( v68 < 0x3Au )
      goto LABEL_261;
    v72 = 65296;
    if ( v68 < 0xFF10u )
    {
      v72 = 1632;
      if ( v68 >= 0x660u )
      {
        if ( v68 < 0x66Au )
          goto LABEL_261;
        v72 = 1776;
        if ( v68 >= 0x6F0u )
        {
          if ( v68 < 0x6FAu )
            goto LABEL_261;
          v72 = 2406;
          if ( v68 >= 0x966u )
          {
            if ( v68 < 0x970u )
              goto LABEL_261;
            v72 = 2534;
            if ( v68 >= 0x9E6u )
            {
              if ( v68 < 0x9F0u )
                goto LABEL_261;
              v72 = 2662;
              if ( v68 >= 0xA66u )
              {
                if ( v68 < 0xA70u )
                  goto LABEL_261;
                v72 = 2790;
                if ( v68 >= 0xAE6u )
                {
                  if ( v68 < 0xAF0u )
                    goto LABEL_261;
                  v72 = 2918;
                  if ( v68 >= 0xB66u )
                  {
                    if ( v68 < 0xB70u )
                      goto LABEL_261;
                    v72 = 3174;
                    if ( v68 >= 0xC66u )
                    {
                      if ( v68 < 0xC70u )
                        goto LABEL_261;
                      v72 = 3302;
                      if ( v68 >= 0xCE6u )
                      {
                        if ( v68 < 0xCF0u )
                          goto LABEL_261;
                        v72 = 3430;
                        if ( v68 >= 0xD66u )
                        {
                          if ( v68 < 0xD70u )
                            goto LABEL_261;
                          v72 = 3664;
                          if ( v68 >= 0xE50u )
                          {
                            if ( v68 < 0xE5Au )
                              goto LABEL_261;
                            v72 = 3792;
                            if ( v68 >= 0xED0u )
                            {
                              if ( v68 < 0xEDAu )
                                goto LABEL_261;
                              v72 = 3872;
                              if ( v68 >= 0xF20u )
                              {
                                if ( v68 < 0xF2Au )
                                  goto LABEL_261;
                                v72 = 4160;
                                if ( v68 >= 0x1040u )
                                {
                                  if ( v68 < 0x104Au )
                                    goto LABEL_261;
                                  v72 = 6112;
                                  if ( v68 >= 0x17E0u )
                                  {
                                    if ( v68 < 0x17EAu )
                                      goto LABEL_261;
                                    if ( (unsigned __int16)(v68 - 6160) <= 9u )
                                    {
                                      v72 = 6160;
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
    if ( v68 < 0xFF1Au )
LABEL_261:
      v76 = v68 - v72;
    else
      v76 = -1;
    if ( v76 == -1 )
    {
LABEL_298:
      v77 = v61 - 97;
      if ( (unsigned int)v61 - 65 <= 0x19 || v77 <= 0x19 )
      {
        v78 = v61 - 32;
        if ( v77 > 0x19 )
          v78 = v61;
        v76 = v78 - 55;
      }
      else
      {
        v76 = -1;
      }
    }
    if ( v76 >= 0xA )
      goto LABEL_314;
    LOBYTE(v107) = 1;
    v64 = v76 + 10 * v64;
    v97 = v64;
    if ( v64 <= 5200 )
    {
      v79 = a2[2] + 1;
      a2[2] = v79;
      if ( a2[1] && v79 > a2[1] )
      {
        v68 = 0;
      }
      else
      {
        v80 = *(unsigned __int16 **)(*a2 + 16);
        if ( v80 == *(unsigned __int16 **)(*a2 + 8) || (v68 = *v80, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v80 + 1), v68 == 0xFFFF) )
          v68 = 0;
      }
      v61 = v68;
LABEL_258:
      v72 = 48;
      v73 = v68 < 0x30u;
      continue;
    }
    break;
  }
  v97 = 5201;
LABEL_314:
  while ( 2 )
  {
    if ( v61 < 0x30u )
      goto LABEL_361;
    if ( v61 < 0x3Au )
    {
      v81 = v61 - 48;
      goto LABEL_360;
    }
    if ( v61 < 0xFF10u )
    {
      if ( v61 >= 0x660u )
      {
        if ( v61 < 0x66Au )
        {
          v81 = v61 - 1632;
          goto LABEL_360;
        }
        if ( v61 >= 0x6F0u )
        {
          if ( v61 < 0x6FAu )
          {
            v81 = v61 - 1776;
            goto LABEL_360;
          }
          if ( v61 >= 0x966u )
          {
            if ( v61 < 0x970u )
            {
              v81 = v61 - 2406;
              goto LABEL_360;
            }
            if ( v61 >= 0x9E6u )
            {
              if ( v61 < 0x9F0u )
              {
                v81 = v61 - 2534;
                goto LABEL_360;
              }
              if ( v61 >= 0xA66u )
              {
                if ( v61 < 0xA70u )
                {
                  v81 = v61 - 2662;
                  goto LABEL_360;
                }
                if ( v61 >= 0xAE6u )
                {
                  if ( v61 < 0xAF0u )
                  {
                    v81 = v61 - 2790;
                    goto LABEL_360;
                  }
                  v82 = 2918;
                  if ( v61 >= 0xB66u )
                  {
                    if ( v61 < 0xB70u )
                      goto LABEL_338;
                    v82 = 3174;
                    if ( v61 >= 0xC66u )
                    {
                      if ( v61 < 0xC70u )
                        goto LABEL_338;
                      v82 = 3302;
                      if ( v61 >= 0xCE6u )
                      {
                        if ( v61 < 0xCF0u
                          || (v82 = 3430, v61 >= 0xD66u)
                          && (v61 < 0xD70u
                           || (v82 = 3664, v61 >= 0xE50u)
                           && (v61 < 0xE5Au
                            || (v82 = 3792, v61 >= 0xED0u)
                            && (v61 < 0xEDAu
                             || (v82 = 3872, v61 >= 0xF20u)
                             && (v61 < 0xF2Au
                              || (v82 = 4160, v61 >= 0x1040u)
                              && (v61 < 0x104Au
                               || (v82 = 6112, v61 >= 0x17E0u)
                               && (v61 < 0x17EAu || (v82 = 6160, (unsigned __int16)(v61 - 6160) <= 9u))))))) )
                        {
LABEL_338:
                          v81 = v61 - v82;
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
    if ( v61 >= 0xFF1Au )
      v81 = -1;
    else
      v81 = v61 - 65296;
LABEL_360:
    if ( v81 == -1 )
    {
LABEL_361:
      v83 = v61 - 97;
      if ( (unsigned int)v61 - 65 <= 0x19 || v83 <= 0x19 )
      {
        v84 = v61 - 32;
        if ( v83 > 0x19 )
          v84 = v61;
        v81 = v84 - 55;
      }
      else
      {
        v81 = -1;
      }
    }
    if ( v81 < 0xA )
    {
      v85 = a2[2] + 1;
      a2[2] = v85;
      if ( a2[1] && v85 > a2[1] )
      {
        v61 = 0;
      }
      else
      {
        v86 = *(unsigned __int16 **)(*a2 + 16);
        if ( v86 == *(unsigned __int16 **)(*a2 + 8) || (v61 = *v86, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v86 + 1), v61 == 0xFFFF) )
          v61 = 0;
      }
      continue;
    }
    break;
  }
  v64 = -v97;
  v26 = v102;
  if ( v98 != 45 )
    v64 = v97;
  v42 = v103;
  v41 = v105;
  if ( !(_BYTE)v107 )
  {
    v87 = a2[2] - 1;
    a2[2] = v87;
    if ( !a2[1] || v87 <= a2[1] )
    {
      if ( v61 )
      {
        if ( v61 != 0xFFFF )
        {
          v88 = *(_QWORD *)(*a2 + 16);
          if ( v88 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16) = v88 - 2;
            v87 = a2[2];
          }
        }
      }
    }
    if ( v101 != v87 )
    {
LABEL_384:
      *(_BYTE *)a2[3] = 0;
      return 7;
    }
    v89 = v87 + 1;
    a2[2] = v89;
    if ( a2[1] && v89 > a2[1] )
    {
      v61 = 0;
    }
    else
    {
      v90 = *(unsigned __int16 **)(*a2 + 16);
      if ( v90 == *(unsigned __int16 **)(*a2 + 8) || (v61 = *v90, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v90 + 1), v61 == 0xFFFF) )
        v61 = 0;
    }
  }
  v39 = (int *)v106;
LABEL_392:
  v91 = a2[2] - 1;
  a2[2] = v91;
  if ( (!a2[1] || v91 <= a2[1]) && (unsigned __int16)(v61 - 1) <= 0xFFFDu )
  {
    v92 = *(_QWORD *)(*a2 + 16);
    if ( v92 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16) = v92 - 2;
  }
  if ( v26 == v42 )
    return 2;
  while ( 1 )
  {
    v93 = v26 - 1;
    v94 = v26;
    v95 = *(v26 - 1) == 0;
    if ( *(v26 - 1) )
      break;
    --v26;
    if ( v93 == v42 )
    {
      v95 = *v93 == 0;
      break;
    }
  }
  if ( !v95 )
    v93 = v94;
  if ( v93 == v42 )
    return 2;
  if ( v64 > 5200 )
    return 9;
  if ( v64 < -5200 )
    return 8;
  v96 = v99 * (v41 != 0 ? 4 : 1) + v64;
  if ( v96 > 5200 )
    return 9;
  if ( v96 >= -5200 )
  {
    *v39 = v96;
    v39[1] = (_DWORD)v26 - (_DWORD)v42;
    return v41;
  }
  return 8;
}


//----- (00000001402292F0) ----------------------------------------------------
__int64            sub_1402292F0(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v6; // dl
  char v8; // r9
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  bool v11; // zf
  FILE **v12; // r14
  int v13; // eax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  int v18; // ecx
  FILE **v19; // rdx
  FILE **v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // rax
  FILE **v23; // rdx
  __int64 v25; // rsi
  int v26; // ecx
  unsigned __int64 v27; // rax
  FILE **v28; // r14
  unsigned __int64 v29; // rax
  FILE **v30; // rdx
  unsigned __int64 v31; // rax
  FILE **v32; // rdx

  v3 = 0;
  v6 = *a1;
  v8 = *a1;
  v9 = 3;
  do
  {
    if ( v6 != byte_140285934[v3] && v6 != byte_140285934[v3 + 4] )
    {
      v22 = *(_QWORD *)(a2 + 16) - 1LL;
      v11 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v22;
      if ( (v11 || v22 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v8 + 1) > 1u )
      {
        v23 = *(FILE ***)a2;
        if ( v8 != -1 )
        {
          v23[1] = (FILE *)((char *)v23[1] - 1);
          sub_14020CE90(v8, (__int64)*v23);
        }
      }
      *a1 = 0;
      if ( a3 != *(_QWORD *)(a2 + 16) )
        **(_BYTE **)(a2 + 24) = 0;
      return 7;
    }
    v10 = *(_QWORD *)(a2 + 16) + 1LL;
    v11 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v10;
    if ( !v11 && v10 > *(_QWORD *)(a2 + 8)
      || (v12 = *(FILE ***)a2, v13 = getc_nolock(**(FILE ***)a2), v6 = v13, v13 == -1) )
    {
      v6 = 0;
    }
    else
    {
      v12[1] = (FILE *)((char *)v12[1] + 1);
    }
    ++v3;
    *a1 = v6;
    v8 = v6;
  }
  while ( v3 != 3 );
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v15;
  if ( !v14 || (v16 = v15, v17 = v14, v15 <= v14) )
  {
    v16 = v15;
    v17 = v14;
    if ( v6 )
    {
      if ( v6 != -1 )
      {
        v18 = v6;
        v19 = *(FILE ***)a2;
        if ( v18 != -1 )
        {
          v19[1] = (FILE *)((char *)v19[1] - 1);
          sub_14020CE90(v18, (__int64)*v19);
          v17 = *(_QWORD *)(a2 + 8);
          v16 = *(_QWORD *)(a2 + 16);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v16 + 1;
  if ( v17 && v16 + 1 > v17 || (v20 = *(FILE ***)a2, v21 = getc_nolock(**(FILE ***)a2), v21 == -1) )
    LOBYTE(v21) = 0;
  else
    v20[1] = (FILE *)((char *)v20[1] + 1);
  *a1 = v21;
  v25 = 0;
  LOBYTE(v26) = v21;
  while ( (_BYTE)v21 == byte_140285934[v25 + 8] || (_BYTE)v21 == byte_140285934[v25 + 16] )
  {
    v27 = *(_QWORD *)(a2 + 16) + 1LL;
    v11 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v27;
    if ( !v11 && v27 > *(_QWORD *)(a2 + 8) || (v28 = *(FILE ***)a2, v26 = getc_nolock(**(FILE ***)a2), v26 == -1) )
      LOBYTE(v26) = 0;
    else
      v28[1] = (FILE *)((char *)v28[1] + 1);
    ++v25;
    *a1 = v26;
    LOBYTE(v21) = v26;
    if ( v25 == 5 )
    {
      v29 = *(_QWORD *)(a2 + 16) - 1LL;
      v11 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v29;
      if ( (v11 || v29 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v26 + 1) > 1u )
      {
        v30 = *(FILE ***)a2;
        if ( (char)v26 != -1 )
        {
          v30[1] = (FILE *)((char *)v30[1] - 1);
          sub_14020CE90((char)v26, (__int64)*v30);
        }
      }
      return v9;
    }
  }
  v31 = *(_QWORD *)(a2 + 16) - 1LL;
  v11 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v31;
  if ( (v11 || v31 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v26 + 1) > 1u )
  {
    v32 = *(FILE ***)a2;
    if ( (char)v26 != -1 )
    {
      v32[1] = (FILE *)((char *)v32[1] - 1);
      sub_14020CE90((char)v26, (__int64)*v32);
    }
  }
  *a1 = 0;
  if ( v16 != *(_QWORD *)(a2 + 16) )
  {
    v9 = 7;
    **(_BYTE **)(a2 + 24) = 0;
  }
  return v9;
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (0000000140229560) ----------------------------------------------------
__int64            sub_140229560(char *a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  __int64 v4; // rbx
  char v6; // r10
  unsigned int v7; // r11d
  unsigned __int64 v8; // rax
  bool v9; // zf
  char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  char *v16; // rax
  char v17; // cl
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // r9
  char v22; // r8
  unsigned __int64 v23; // rax
  char *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax

  v3 = *a1;
  v4 = 0;
  v6 = *a1;
  v7 = 3;
  do
  {
    if ( v3 != byte_1402858D4[v4] && v3 != byte_1402858D4[v4 + 4] )
    {
      v18 = *(_QWORD *)(a2 + 16) - 1LL;
      v9 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v18;
      if ( (v9 || v18 <= *(_QWORD *)(a2 + 8)) && v6 != -1 && v6 != 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v19 != **(_QWORD **)a2 )
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v19 - 1;
      }
      *a1 = 0;
      if ( a3 != *(_QWORD *)(a2 + 16) )
        **(_BYTE **)(a2 + 24) = 0;
      return 7;
    }
    v8 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v8;
    if ( !v9 && v8 > *(_QWORD *)(a2 + 8)
      || (v10 = *(char **)(*(_QWORD *)a2 + 16LL), v10 == *(char **)(*(_QWORD *)a2 + 8LL)) )
    {
      v3 = 0;
    }
    else
    {
      v3 = *v10;
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = (uint64)(uintptr_t)(v10 + 1);
    }
    ++v4;
    *a1 = v3;
    v6 = v3;
  }
  while ( v4 != 3 );
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v3 )
    {
      if ( v3 != -1 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v15 != **(_QWORD **)a2 )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v15 - 1;
          v13 = *(_QWORD *)(a2 + 16);
          v14 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v13 + 1;
  if ( v14 && v13 + 1 > v14 || (v16 = *(char **)(*(_QWORD *)a2 + 16LL), v16 == *(char **)(*(_QWORD *)a2 + 8LL)) )
  {
    v17 = 0;
  }
  else
  {
    v17 = *v16;
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) = (uint64)(uintptr_t)(v16 + 1);
  }
  *a1 = v17;
  v21 = 0;
  v22 = v17;
  while ( v17 == byte_1402858D4[v21 + 8] || v17 == byte_1402858D4[v21 + 16] )
  {
    v23 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v23;
    if ( !v9 && v23 > *(_QWORD *)(a2 + 8)
      || (v24 = *(char **)(*(_QWORD *)a2 + 16LL), v24 == *(char **)(*(_QWORD *)a2 + 8LL)) )
    {
      v17 = 0;
    }
    else
    {
      v17 = *v24;
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = (uint64)(uintptr_t)(v24 + 1);
    }
    ++v21;
    *a1 = v17;
    v22 = v17;
    if ( v21 == 5 )
    {
      v25 = *(_QWORD *)(a2 + 16) - 1LL;
      v9 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v25;
      if ( (v9 || v25 <= *(_QWORD *)(a2 + 8)) && v17 != -1 && v17 != 0 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v26 != **(_QWORD **)a2 )
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v26 - 1;
      }
      return v7;
    }
  }
  v27 = *(_QWORD *)(a2 + 16) - 1LL;
  v9 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v27;
  if ( (v9 || v27 <= *(_QWORD *)(a2 + 8)) && v22 != -1 && v22 != 0 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( v28 != **(_QWORD **)a2 )
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v28 - 1;
  }
  *a1 = 0;
  if ( v13 != *(_QWORD *)(a2 + 16) )
  {
    v7 = 7;
    **(_BYTE **)(a2 + 24) = 0;
  }
  return v7;
}

// 1402858D4: using guessed type _BYTE byte_1402858D4[96];

//----- (0000000140229798) ----------------------------------------------------
__int64            sub_140229798(unsigned __int64 a1, FILE ***a2, FILE **a3)
{
  _WORD *v3; // r14
  __int64 v6; // rdi
  unsigned __int16 v7; // r9
  FILE **v8; // rax
  FILE **v9; // rsi
  unsigned __int16 v10; // ax
  FILE **v11; // r8
  FILE **v12; // rdx
  FILE **v13; // rbp
  FILE **v14; // rax
  FILE **v15; // rdx
  FILE **v16; // rax
  FILE **v17; // rdx
  unsigned __int16 v19; // ax
  FILE **v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rcx
  FILE **v23; // rax
  FILE **v24; // rsi
  unsigned __int16 v25; // ax
  FILE **v26; // rax
  FILE **v27; // rdx
  FILE **v28; // rax
  FILE **v29; // rdx

  v3 = (_WORD *)a1;
  LOWORD(a1) = *(_WORD *)a1;
  v6 = 0;
  v7 = a1;
  while ( (_WORD)a1 == *(_WORD *)&byte_1402858D4[v6 + 32] || (_WORD)a1 == *(_WORD *)&byte_1402858D4[v6 + 40] )
  {
    v8 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v8;
    if ( a2[1] && v8 > a2[1] )
    {
      a1 = 0;
    }
    else
    {
      v9 = *a2;
      v10 = j__fgetwc_nolock(**a2);
      if ( v10 == 0xFFFF )
      {
        a1 = 0;
      }
      else
      {
        v9[1] = (FILE *)((char *)v9[1] + 1);
        a1 = v10;
      }
    }
    v6 += 2;
    *v3 = a1;
    v7 = a1;
    if ( v6 == 6 )
    {
      v11 = a2[1];
      v12 = (FILE **)((char *)a2[2] - 1);
      a2[2] = v12;
      if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
      {
        v13 = v12;
        v14 = v11;
        if ( (_WORD)a1 )
        {
          v15 = *a2;
          v15[1] = (FILE *)((char *)v15[1] - 1);
          ungetwc_nolock(a1, *v15, v11);
          v14 = a2[1];
          v13 = a2[2];
        }
      }
      a2[2] = (FILE **)((char *)v13 + 1);
      if ( v14 && (FILE **)((char *)v13 + 1) > v14 )
      {
        v19 = 0;
      }
      else
      {
        v20 = *a2;
        v19 = j__fgetwc_nolock(**a2);
        if ( v19 == 0xFFFF )
          v19 = 0;
        else
          v20[1] = (FILE *)((char *)v20[1] + 1);
      }
      *v3 = v19;
      v21 = 0;
      v22 = v19;
      while ( v19 == *(_WORD *)&byte_1402858D4[v21 + 52] || v19 == *(_WORD *)&byte_1402858D4[v21 + 68] )
      {
        v23 = (FILE **)((char *)a2[2] + 1);
        a2[2] = v23;
        if ( a2[1] && v23 > a2[1] )
        {
          v22 = 0;
        }
        else
        {
          v24 = *a2;
          v25 = j__fgetwc_nolock(**a2);
          if ( v25 == 0xFFFF )
          {
            v22 = 0;
          }
          else
          {
            v24[1] = (FILE *)((char *)v24[1] + 1);
            v22 = v25;
          }
        }
        v21 += 2;
        *v3 = v22;
        v19 = v22;
        if ( v21 == 10 )
        {
          v26 = (FILE **)((char *)a2[2] - 1);
          a2[2] = v26;
          if ( (!a2[1] || v26 <= a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
          {
            v27 = *a2;
            v27[1] = (FILE *)((char *)v27[1] - 1);
            ungetwc_nolock(v22, *v27, v11);
          }
          return 3;
        }
      }
      v28 = (FILE **)((char *)a2[2] - 1);
      a2[2] = v28;
      if ( (!a2[1] || v28 <= a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
      {
        v29 = *a2;
        v29[1] = (FILE *)((char *)v29[1] - 1);
        ungetwc_nolock(v22, *v29, v11);
      }
      *v3 = 0;
      if ( v13 == a2[2] )
        return 3;
      goto LABEL_20;
    }
  }
  v16 = (FILE **)((char *)a2[2] - 1);
  a2[2] = v16;
  if ( (!a2[1] || v16 <= a2[1]) && (unsigned __int16)(v7 - 1) <= 0xFFFDu )
  {
    v17 = *a2;
    v17[1] = (FILE *)((char *)v17[1] - 1);
    ungetwc_nolock(v7, *v17, a3);
  }
  *v3 = 0;
  if ( a3 != a2[2] )
LABEL_20:
    *(_BYTE *)a2[3] = 0;
  return 7;
}

// 140229875: conditional instruction was optimized away because cx.2 is in (1..FFFE)
// 1402298C7: variable 'a3' is possibly undefined
// 1402299C2: variable 'v11' is possibly undefined
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);
// 1402858D4: using guessed type _BYTE byte_1402858D4[96];

//----- (0000000140229A30) ----------------------------------------------------
__int64            sub_140229A30(__int16 *a1, _QWORD *a2, __int64 a3)
{
  __int16 v3; // r9
  __int16 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v8; // rax
  __int16 *v9; // rax
  __int16 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  __int16 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int16 *v20; // rax
  __int64 v21; // r9
  __int16 v22; // cx
  unsigned __int64 v23; // rax
  __int16 *v24; // rax
  __int16 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax

  v3 = *a1;
  v4 = *a1;
  v5 = 0;
  while ( v3 == *(_WORD *)((char *)&unk_140285898 + v5) || v3 == *(_WORD *)((char *)&unk_1402858A0 + v5) )
  {
    v8 = a2[2] + 1LL;
    a2[2] = v8;
    if ( a2[1] && v8 > a2[1] )
    {
      v3 = 0;
    }
    else
    {
      v9 = *(__int16 **)(*a2 + 16LL);
      if ( v9 == *(__int16 **)(*a2 + 8LL) || (v10 = *v9, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v9 + 1), v3 = v10, v10 == -1) )
        v3 = 0;
    }
    v5 += 2;
    *a1 = v3;
    v4 = v3;
    if ( v5 == 6 )
    {
      v11 = a2[1];
      v12 = a2[2] - 1LL;
      a2[2] = v12;
      if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
      {
        v13 = v12;
        v14 = v11;
        if ( v3 )
        {
          if ( v3 != -1 )
          {
            v15 = *(_QWORD *)(*a2 + 16LL);
            if ( v15 != *(_QWORD *)*a2 )
            {
              *(_QWORD *)(*a2 + 16LL) = v15 - 2;
              v13 = a2[2];
              v14 = a2[1];
            }
          }
        }
      }
      a2[2] = v13 + 1;
      if ( v14 && v13 + 1 > v14 )
      {
        v16 = 0;
      }
      else
      {
        v20 = *(__int16 **)(*a2 + 16LL);
        if ( v20 == *(__int16 **)(*a2 + 8LL) || (v16 = *v20, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v20 + 1), v16 == -1) )
          v16 = 0;
      }
      *a1 = v16;
      v21 = 0;
      v22 = v16;
      while ( v16 == *(_WORD *)((char *)&unk_1402858A8 + v21) || v16 == *(_WORD *)((char *)&unk_1402858B8 + v21) )
      {
        v23 = a2[2] + 1LL;
        a2[2] = v23;
        if ( a2[1] && v23 > a2[1] )
        {
          v22 = 0;
        }
        else
        {
          v24 = *(__int16 **)(*a2 + 16LL);
          if ( v24 == *(__int16 **)(*a2 + 8LL) || (v25 = *v24, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v24 + 1), v22 = v25, v25 == -1) )
            v22 = 0;
        }
        v21 += 2;
        *a1 = v22;
        v16 = v22;
        if ( v21 == 10 )
        {
          v26 = a2[2] - 1LL;
          a2[2] = v26;
          if ( (!a2[1] || v26 <= a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
          {
            v27 = *(_QWORD *)(*a2 + 16LL);
            if ( v27 != *(_QWORD *)*a2 )
              *(_QWORD *)(*a2 + 16LL) = v27 - 2;
          }
          return 3;
        }
      }
      v28 = a2[2] - 1LL;
      a2[2] = v28;
      if ( (!a2[1] || v28 <= a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
      {
        v29 = *(_QWORD *)(*a2 + 16LL);
        if ( v29 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = v29 - 2;
      }
      *a1 = 0;
      if ( v13 == a2[2] )
        return 3;
      goto LABEL_26;
    }
  }
  v17 = a2[2] - 1LL;
  a2[2] = v17;
  if ( (!a2[1] || v17 <= a2[1]) && (unsigned __int16)(v4 - 1) <= 0xFFFDu )
  {
    v18 = *(_QWORD *)(*a2 + 16LL);
    if ( v18 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v18 - 2;
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
  char v4; // dl
  __int64 i; // rdi
  unsigned __int64 v7; // rax
  bool v8; // zf
  FILE **v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // r10d
  FILE **v16; // rdx
  unsigned __int64 v17; // rcx
  FILE **v18; // rdi
  int v19; // eax
  unsigned __int64 v21; // rax
  FILE **v22; // rdi
  int v23; // eax
  char v24; // cl
  unsigned __int64 v25; // rax
  FILE **v26; // rdx
  char v27; // al
  int v28; // ecx
  unsigned __int64 v29; // rax
  FILE **v30; // rdx
  unsigned __int64 v31; // rax
  FILE **v32; // rdi
  __int64 v33[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp+18h] BYREF

  v34 = a3;
  v33[0] = a2;
  v33[2] = (__int64)&v34;
  v4 = *a1;
  v33[1] = (__int64)a1;
  for ( i = 0; i != 3; ++i )
  {
    if ( v4 != byte_140285934[i + 24] && v4 != byte_140285934[i + 28] )
    {
      sub_14022EB44(v33);
      return 7;
    }
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v7;
    if ( !v8 && v7 > *(_QWORD *)(a2 + 8) || (v9 = *(FILE ***)a2, v10 = getc_nolock(**(FILE ***)a2), v4 = v10, v10 == -1) )
      v4 = 0;
    else
      v9[1] = (FILE *)((char *)v9[1] + 1);
    *a1 = v4;
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v4 )
    {
      if ( v4 != -1 )
      {
        v15 = v4;
        v16 = *(FILE ***)a2;
        if ( v15 != -1 )
        {
          v16[1] = (FILE *)((char *)v16[1] - 1);
          sub_14020CE90(v15, (__int64)*v16);
          v13 = *(_QWORD *)(a2 + 16);
          v14 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  v34 = v13;
  v17 = v13 + 1;
  *(_QWORD *)(a2 + 16) = v17;
  if ( v14 && v17 > v14 || (v18 = *(FILE ***)a2, v19 = getc_nolock(**(FILE ***)a2), v19 == -1) )
    LOBYTE(v19) = 0;
  else
    v18[1] = (FILE *)((char *)v18[1] + 1);
  *a1 = v19;
  if ( (_BYTE)v19 != 40 )
    return sub_14022EB44(v33) != 0 ? 4 : 7;
  v21 = *(_QWORD *)(a2 + 16) + 1LL;
  v8 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v21;
  if ( !v8 && v21 > *(_QWORD *)(a2 + 8) || (v22 = *(FILE ***)a2, v23 = getc_nolock(**(FILE ***)a2), v23 == -1) )
    LOBYTE(v23) = 0;
  else
    v22[1] = (FILE *)((char *)v22[1] + 1);
  *a1 = v23;
  if ( sub_14022AB34(a1, a2) )
  {
    v24 = *a1;
    v25 = *(_QWORD *)(a2 + 16) - 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v25;
    if ( (v8 || v25 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v24 + 1) > 1u )
    {
      v26 = *(FILE ***)a2;
      if ( v24 != -1 )
      {
        v26[1] = (FILE *)((char *)v26[1] - 1);
        sub_14020CE90(v24, (__int64)*v26);
      }
    }
    return 5;
  }
  else
  {
    v27 = sub_14022A8F0(a1, a2);
    LOBYTE(v28) = *a1;
    if ( v27 )
    {
      v29 = *(_QWORD *)(a2 + 16) - 1LL;
      v8 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v29;
      if ( (v8 || v29 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v28 + 1) > 1u )
      {
        v30 = *(FILE ***)a2;
        if ( (char)v28 != -1 )
        {
          v30[1] = (FILE *)((char *)v30[1] - 1);
          sub_14020CE90((char)v28, (__int64)*v30);
        }
      }
      return 6;
    }
    else
    {
      while ( (_BYTE)v28 != 41 )
      {
        if ( !(_BYTE)v28
          || (unsigned __int8)(v28 - 48) > 9u
          && (unsigned __int8)(v28 - 97) > 0x19u
          && (unsigned __int8)(v28 - 65) > 0x19u
          && (_BYTE)v28 != 95 )
        {
          return sub_14022EB44(v33) != 0 ? 4 : 7;
        }
        v31 = *(_QWORD *)(a2 + 16) + 1LL;
        v8 = *(_QWORD *)(a2 + 8) == 0;
        *(_QWORD *)(a2 + 16) = v31;
        if ( !v8 && v31 > *(_QWORD *)(a2 + 8) || (v32 = *(FILE ***)a2, v28 = getc_nolock(**(FILE ***)a2), v28 == -1) )
          LOBYTE(v28) = 0;
        else
          v32[1] = (FILE *)((char *)v32[1] + 1);
        *a1 = v28;
      }
      return 4;
    }
  }
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (0000000140229F5C) ----------------------------------------------------
__int64            sub_140229F5C(char *a1, _QWORD *a2, __int64 a3)
{
  char v4; // dl
  char v5; // di
  char v6; // r9
  __int64 i; // r10
  unsigned __int64 v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  char *v16; // rax
  char v17; // cl
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  bool v24; // cc
  __int64 v25; // rax
  char *v26; // rax
  char v27; // cl
  char v28; // cl
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  char v31; // al
  char v32; // dl
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  char v35; // r8
  unsigned __int64 v36; // rax
  char *v37; // rax
  unsigned __int64 v38; // rax

  v4 = *a1;
  v5 = 0;
  v6 = *a1;
  for ( i = 0; i != 3; ++i )
  {
    if ( v4 != byte_1402858D4[i + 24] && v4 != byte_1402858D4[i + 28] )
    {
      v18 = a2[2] - 1LL;
      a2[2] = v18;
      if ( (!a2[1] || v18 <= a2[1]) && v6 != -1 && v6 != 0 )
      {
        v19 = *(_QWORD *)(*a2 + 16LL);
        if ( v19 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = v19 - 1;
      }
      *a1 = 0;
      if ( a3 != a2[2] )
        *(_BYTE *)a2[3] = 0;
      return 7;
    }
    v9 = a2[2] + 1LL;
    a2[2] = v9;
    if ( a2[1] && v9 > a2[1] || (v10 = *(char **)(*a2 + 16LL), v10 == *(char **)(*a2 + 8LL)) )
    {
      v4 = 0;
    }
    else
    {
      v4 = *v10;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v10 + 1);
    }
    *a1 = v4;
    v6 = v4;
  }
  v11 = a2[1];
  v12 = a2[2] - 1LL;
  a2[2] = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v4 )
    {
      if ( v4 != -1 )
      {
        v15 = *(_QWORD *)(*a2 + 16LL);
        if ( v15 != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16LL) = v15 - 1;
          v13 = a2[2];
          v14 = a2[1];
        }
      }
    }
  }
  a2[2] = v13 + 1;
  if ( v14 && v13 + 1 > v14 || (v16 = *(char **)(*a2 + 16LL), v16 == *(char **)(*a2 + 8LL)) )
  {
    v17 = 0;
  }
  else
  {
    v17 = *v16;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v16 + 1);
  }
  *a1 = v17;
  v21 = a2[2];
  v22 = a2[1];
  if ( v17 != 40 )
  {
    v23 = v21 - 1;
    a2[2] = v23;
    if ( v22 )
    {
      v24 = v23 <= v22;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  a2[2] = v21 + 1;
  if ( v22 && v21 + 1 > v22 || (v26 = *(char **)(*a2 + 16LL), v26 == *(char **)(*a2 + 8LL)) )
  {
    v27 = 0;
  }
  else
  {
    v27 = *v26;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v26 + 1);
  }
  *a1 = v27;
  if ( sub_14022ABCC(a1, a2) )
  {
    v28 = *a1;
    v29 = a2[2] - 1LL;
    a2[2] = v29;
    if ( (!a2[1] || v29 <= a2[1]) && v28 != -1 && v28 != 0 )
    {
      v30 = *(_QWORD *)(*a2 + 16LL);
      if ( v30 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16LL) = v30 - 1;
    }
    return 5;
  }
  else
  {
    v31 = sub_14022A988(a1, a2);
    v32 = *a1;
    if ( !v31 )
    {
      v17 = *a1;
      if ( v32 == 41 )
        return 4;
      v35 = *a1;
      while ( v35
           && ((unsigned __int8)(v35 - 48) <= 9u
            || (unsigned __int8)(v35 - 97) <= 0x19u
            || (unsigned __int8)(v35 - 65) <= 0x19u
            || v35 == 95) )
      {
        v36 = a2[2] + 1LL;
        a2[2] = v36;
        if ( a2[1] && v36 > a2[1] || (v37 = *(char **)(*a2 + 16LL), v37 == *(char **)(*a2 + 8LL)) )
        {
          v17 = 0;
        }
        else
        {
          v17 = *v37;
          *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v37 + 1);
        }
        *a1 = v17;
        v35 = v17;
        if ( v17 == 41 )
          return 4;
      }
      v38 = a2[2] - 1LL;
      a2[2] = v38;
      if ( !a2[1] )
        goto LABEL_33;
      v24 = v38 <= a2[1];
LABEL_32:
      if ( v24 )
      {
LABEL_33:
        if ( v17 != -1 && v17 != 0 )
        {
          v25 = *(_QWORD *)(*a2 + 16LL);
          if ( v25 != *(_QWORD *)*a2 )
            *(_QWORD *)(*a2 + 16LL) = v25 - 1;
        }
      }
      *a1 = 0;
      if ( v13 == a2[2] )
        v5 = 1;
      else
        *(_BYTE *)a2[3] = 0;
      return v5 != 0 ? 4 : 7;
    }
    v33 = a2[2] - 1LL;
    a2[2] = v33;
    if ( (!a2[1] || v33 <= a2[1]) && v32 != -1 && v32 != 0 )
    {
      v34 = *(_QWORD *)(*a2 + 16LL);
      if ( v34 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16LL) = v34 - 1;
    }
    return 6;
  }
}

// 1402858D4: using guessed type _BYTE byte_1402858D4[96];

//----- (000000014022A27C) ----------------------------------------------------
__int64            sub_14022A27C(__int64 a1, FILE ***a2, __int64 *a3)
{
  __int16 *v3; // r14
  __int64 i; // rdi
  FILE **v6; // rax
  FILE **v7; // rsi
  unsigned __int16 v8; // ax
  FILE **v9; // r9
  FILE **v10; // r8
  FILE **v11; // rdx
  FILE **v12; // rax
  FILE **v13; // rdx
  FILE **v14; // rdx
  __int16 v15; // ax
  FILE **v17; // rdi
  FILE **v18; // rax
  __int16 v19; // ax
  FILE **v20; // rdi
  __int64 v21; // rcx
  FILE **v22; // rax
  FILE **v23; // rdx
  char v24; // al
  __int64 v25; // rcx
  FILE **v26; // rax
  FILE **v27; // rdx
  FILE **v28; // rax
  FILE **v29; // rdi
  __int16 v30; // ax
  __int64 v31[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v32; // [rsp+80h] [rbp+18h] BYREF

  v32 = a3;
  v31[1] = a1;
  v31[0] = (__int64)a2;
  v3 = (__int16 *)a1;
  v31[2] = (__int64)&v32;
  LOWORD(a1) = *(_WORD *)a1;
  for ( i = 0; i != 6; i += 2 )
  {
    if ( (_WORD)a1 != *(_WORD *)&byte_1402858D4[i + 80] && (_WORD)a1 != *(_WORD *)&byte_1402858D4[i + 88] )
    {
      _lambda_2869a9057330eafa474e853b0696fc23___operator_call(v31);
      return 7;
    }
    v6 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v6;
    if ( a2[1] && v6 > a2[1] )
    {
      a1 = 0;
    }
    else
    {
      v7 = *a2;
      v8 = j__fgetwc_nolock(**a2);
      if ( v8 == 0xFFFF )
      {
        a1 = 0;
      }
      else
      {
        v7[1] = (FILE *)((char *)v7[1] + 1);
        a1 = v8;
      }
    }
    *v3 = a1;
  }
  v9 = a2[1];
  v10 = (FILE **)((char *)a2[2] - 1);
  a2[2] = v10;
  if ( !v9 || (v11 = v10, v12 = v9, v10 <= v9) )
  {
    v11 = v10;
    v12 = v9;
    if ( (_WORD)a1 )
    {
      v13 = *a2;
      v13[1] = (FILE *)((char *)v13[1] - 1);
      ungetwc_nolock(a1, *v13, v10);
      v11 = a2[2];
      v12 = a2[1];
    }
  }
  v32 = (__int64 *)v11;
  v14 = (FILE **)((char *)v11 + 1);
  a2[2] = v14;
  if ( v12 && v14 > v12 )
  {
    v15 = 0;
  }
  else
  {
    v17 = *a2;
    v15 = j__fgetwc_nolock(**a2);
    if ( v15 == -1 )
      v15 = 0;
    else
      v17[1] = (FILE *)((char *)v17[1] + 1);
  }
  *v3 = v15;
  if ( v15 != 40 )
    return _lambda_2869a9057330eafa474e853b0696fc23___operator_call(v31) != 0 ? 4 : 7;
  v18 = (FILE **)((char *)a2[2] + 1);
  a2[2] = v18;
  if ( a2[1] && v18 > a2[1] )
  {
    v19 = 0;
  }
  else
  {
    v20 = *a2;
    v19 = j__fgetwc_nolock(**a2);
    if ( v19 == -1 )
      v19 = 0;
    else
      v20[1] = (FILE *)((char *)v20[1] + 1);
  }
  *v3 = v19;
  if ( sub_14022AC44(v3, (__int64)a2) )
  {
    v21 = (unsigned __int16)*v3;
    v22 = (FILE **)((char *)a2[2] - 1);
    a2[2] = v22;
    if ( (!a2[1] || v22 <= a2[1]) && (unsigned __int16)(v21 - 1) <= 0xFFFDu )
    {
      v23 = *a2;
      v23[1] = (FILE *)((char *)v23[1] - 1);
      ungetwc_nolock(v21, *v23, 65533);
    }
    return 5;
  }
  else
  {
    v24 = sub_14022AA00(v3, (__int64)a2);
    v25 = (unsigned __int16)*v3;
    if ( v24 )
    {
      v26 = (FILE **)((char *)a2[2] - 1);
      a2[2] = v26;
      if ( (!a2[1] || v26 <= a2[1]) && (unsigned __int16)(v25 - 1) <= 0xFFFDu )
      {
        v27 = *a2;
        v27[1] = (FILE *)((char *)v27[1] - 1);
        ungetwc_nolock(v25, *v27, 65533);
      }
      return 6;
    }
    else
    {
      while ( (_WORD)v25 != 41 )
      {
        if ( !(_WORD)v25
          || (unsigned int)(unsigned __int16)v25 - 48 > 9
          && (unsigned int)(unsigned __int16)v25 - 97 > 0x19
          && (unsigned int)(unsigned __int16)v25 - 65 > 0x19
          && (_WORD)v25 != 95 )
        {
          return _lambda_2869a9057330eafa474e853b0696fc23___operator_call(v31) != 0 ? 4 : 7;
        }
        v28 = (FILE **)((char *)a2[2] + 1);
        a2[2] = v28;
        if ( a2[1] && v28 > a2[1] )
        {
          LOWORD(v25) = 0;
        }
        else
        {
          v29 = *a2;
          v30 = j__fgetwc_nolock(**a2);
          if ( v30 == -1 )
          {
            LOWORD(v25) = 0;
          }
          else
          {
            v29[1] = (FILE *)((char *)v29[1] + 1);
            LOWORD(v25) = v30;
          }
        }
        *v3 = v25;
      }
      return 4;
    }
  }
}

// 14022A358: conditional instruction was optimized away because cx.2 is in (1..FFFE)
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);
// 1402858D4: using guessed type _BYTE byte_1402858D4[96];

//----- (000000014022A55C) ----------------------------------------------------
__int64            sub_14022A55C(unsigned __int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int16 v4; // dx
  char v5; // di
  unsigned __int16 v6; // r9
  __int64 i; // r10
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  bool v24; // cc
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  unsigned __int16 *v27; // rax
  unsigned __int16 v28; // cx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  char v31; // al
  __int16 v32; // dx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int16 v35; // r8
  unsigned __int64 v36; // rax
  unsigned __int16 *v37; // rax
  unsigned __int16 v38; // dx
  unsigned __int64 v39; // rax

  v4 = *a1;
  v5 = 0;
  v6 = *a1;
  for ( i = 0; i != 6; i += 2 )
  {
    if ( v4 != *(_WORD *)((char *)&unk_1402858C4 + i) && v4 != *(_WORD *)((char *)&unk_1402858CC + i) )
    {
      v17 = a2[2] - 1;
      a2[2] = v17;
      if ( (!a2[1] || v17 <= a2[1]) && (unsigned __int16)(v6 - 1) <= 0xFFFDu )
      {
        v18 = *(_QWORD *)(*a2 + 16);
        if ( v18 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16) = v18 - 2;
      }
      *a1 = 0;
      if ( a3 != a2[2] )
        *(_BYTE *)a2[3] = 0;
      return 7;
    }
    v9 = a2[2] + 1;
    a2[2] = v9;
    if ( a2[1] && v9 > a2[1] )
    {
      v4 = 0;
    }
    else
    {
      v10 = *(unsigned __int16 **)(*a2 + 16);
      if ( v10 == *(unsigned __int16 **)(*a2 + 8) || (v4 = *v10, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v10 + 1), v4 == 0xFFFF) )
        v4 = 0;
    }
    *a1 = v4;
    v6 = v4;
  }
  v11 = a2[1];
  v12 = a2[2] - 1;
  a2[2] = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v4 )
    {
      v15 = *(_QWORD *)(*a2 + 16);
      if ( v15 != *(_QWORD *)*a2 )
      {
        *(_QWORD *)(*a2 + 16) = v15 - 2;
        v13 = a2[2];
        v14 = a2[1];
      }
    }
  }
  a2[2] = v13 + 1;
  if ( v14 && v13 + 1 > v14 )
  {
    v16 = 0;
  }
  else
  {
    v20 = *(unsigned __int16 **)(*a2 + 16);
    if ( v20 == *(unsigned __int16 **)(*a2 + 8) || (v16 = *v20, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v20 + 1), v16 == 0xFFFF) )
      v16 = 0;
  }
  *a1 = v16;
  v21 = a2[2];
  v22 = a2[1];
  if ( v16 != 40 )
  {
    v23 = v21 - 1;
    a2[2] = v23;
    if ( v22 )
    {
      v24 = v23 <= v22;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  a2[2] = v21 + 1;
  if ( v22 && v21 + 1 > v22 )
  {
    v26 = 0;
  }
  else
  {
    v27 = *(unsigned __int16 **)(*a2 + 16);
    if ( v27 == *(unsigned __int16 **)(*a2 + 8) || (v26 = *v27, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v27 + 1), v26 == 0xFFFF) )
      v26 = 0;
  }
  *a1 = v26;
  if ( sub_14022ACE8((__int16 *)a1, a2) )
  {
    v28 = *a1;
    v29 = a2[2] - 1;
    a2[2] = v29;
    if ( (!a2[1] || v29 <= a2[1]) && (unsigned __int16)(v28 - 1) <= 0xFFFDu )
    {
      v30 = *(_QWORD *)(*a2 + 16);
      if ( v30 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16) = v30 - 2;
    }
    return 5;
  }
  else
  {
    v31 = sub_14022AAA4((__int16 *)a1, a2);
    v32 = *a1;
    if ( !v31 )
    {
      v16 = *a1;
      if ( v32 == 41 )
        return 4;
      v35 = *a1;
      while ( v35
           && ((unsigned int)v35 - 48 <= 9
            || (unsigned int)v35 - 97 <= 0x19
            || (unsigned int)v35 - 65 <= 0x19
            || v35 == 95) )
      {
        v36 = a2[2] + 1;
        a2[2] = v36;
        if ( a2[1] && v36 > a2[1] )
        {
          v16 = 0;
        }
        else
        {
          v37 = *(unsigned __int16 **)(*a2 + 16);
          if ( v37 == *(unsigned __int16 **)(*a2 + 8)
            || (v38 = *v37, *(_QWORD *)(*a2 + 16) = (uint64)(uintptr_t)(v37 + 1), v16 = v38, v38 == 0xFFFF) )
          {
            v16 = 0;
          }
        }
        *a1 = v16;
        v35 = v16;
        if ( v16 == 41 )
          return 4;
      }
      v39 = a2[2] - 1;
      a2[2] = v39;
      if ( !a2[1] )
        goto LABEL_34;
      v24 = v39 <= a2[1];
LABEL_33:
      if ( v24 )
      {
LABEL_34:
        if ( (unsigned __int16)(v16 - 1) <= 0xFFFDu )
        {
          v25 = *(_QWORD *)(*a2 + 16);
          if ( v25 != *(_QWORD *)*a2 )
            *(_QWORD *)(*a2 + 16) = v25 - 2;
        }
      }
      *a1 = 0;
      if ( v13 == a2[2] )
        v5 = 1;
      else
        *(_BYTE *)a2[3] = 0;
      return v5 != 0 ? 4 : 7;
    }
    v33 = a2[2] - 1;
    a2[2] = v33;
    if ( (!a2[1] || v33 <= a2[1]) && (unsigned __int16)(v32 - 1) <= 0xFFFDu )
    {
      v34 = *(_QWORD *)(*a2 + 16);
      if ( v34 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16) = v34 - 2;
    }
    return 6;
  }
}

// 14022A629: conditional instruction was optimized away because dx.2 is in (1..FFFE)

//----- (000000014022A8F0) ----------------------------------------------------
char            sub_14022A8F0(_BYTE *a1, __int64 a2)
{
  int v2; // eax
  char v3; // bl
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  FILE **v8; // rsi

  LOBYTE(v2) = *a1;
  v3 = 0;
  v5 = 0;
  while ( (_BYTE)v2 == byte_140285934[v5 + 172] || (_BYTE)v2 == byte_140285934[v5 + 176] )
  {
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v7;
    if ( *(_QWORD *)(a2 + 8) && v7 > *(_QWORD *)(a2 + 8)
      || (v8 = *(FILE ***)a2, v2 = getc_nolock(**(FILE ***)a2), v2 == -1) )
    {
      LOBYTE(v2) = 0;
    }
    else
    {
      v8[1] = (FILE *)((char *)v8[1] + 1);
    }
    ++v5;
    *a1 = v2;
    if ( v5 == 4 )
      return 1;
  }
  return v3;
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022A988) ----------------------------------------------------
char            sub_14022A988(char *a1, _QWORD *a2)
{
  char v2; // r9
  char v3; // r8
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  char *v6; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0;
  while ( v2 == byte_140285934[v4 + 100] || v2 == byte_140285934[v4 + 104] )
  {
    v5 = a2[2] + 1LL;
    a2[2] = v5;
    if ( a2[1] && v5 > a2[1] || (v6 = *(char **)(*a2 + 16LL), v6 == *(char **)(*a2 + 8LL)) )
    {
      v2 = 0;
    }
    else
    {
      v2 = *v6;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v6 + 1);
    }
    ++v4;
    *a1 = v2;
    if ( v4 == 4 )
      return 1;
  }
  return v3;
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022AA00) ----------------------------------------------------
char            sub_14022AA00(__int16 *a1, __int64 a2)
{
  __int16 v2; // ax
  char v3; // bl
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  FILE **v8; // rsi

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  while ( v2 == *(_WORD *)&byte_140285934[v5 + 140] || v2 == *(_WORD *)&byte_140285934[v5 + 148] )
  {
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v7;
    if ( *(_QWORD *)(a2 + 8) && v7 > *(_QWORD *)(a2 + 8) )
    {
      v2 = 0;
    }
    else
    {
      v8 = *(FILE ***)a2;
      v2 = j__fgetwc_nolock(**(FILE ***)a2);
      if ( v2 == -1 )
        v2 = 0;
      else
        v8[1] = (FILE *)((char *)v8[1] + 1);
    }
    v5 += 2;
    *a1 = v2;
    if ( v5 == 8 )
      return 1;
  }
  return v3;
}

// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022AAA4) ----------------------------------------------------
char            sub_14022AAA4(__int16 *a1, _QWORD *a2)
{
  __int16 v2; // ax
  char v3; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int16 *v7; // rax
  __int16 v8; // dx

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  while ( v2 == *(_WORD *)&byte_140285934[v5 + 68] || v2 == *(_WORD *)&byte_140285934[v5 + 76] )
  {
    v6 = a2[2] + 1LL;
    a2[2] = v6;
    if ( a2[1] && v6 > a2[1] )
    {
      v2 = 0;
    }
    else
    {
      v7 = *(__int16 **)(*a2 + 16LL);
      if ( v7 == *(__int16 **)(*a2 + 8LL) || (v8 = *v7, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v7 + 1), v2 = v8, v8 == -1) )
        v2 = 0;
    }
    v5 += 2;
    *a1 = v2;
    if ( v5 == 8 )
      return 1;
  }
  return v3;
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022AB34) ----------------------------------------------------
char            sub_14022AB34(_BYTE *a1, __int64 a2)
{
  int v2; // eax
  char v3; // bl
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  FILE **v8; // rsi

  LOBYTE(v2) = *a1;
  v3 = 0;
  v5 = 0;
  while ( (_BYTE)v2 == byte_140285934[v5 + 156] || (_BYTE)v2 == byte_140285934[v5 + 164] )
  {
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v7;
    if ( *(_QWORD *)(a2 + 8) && v7 > *(_QWORD *)(a2 + 8)
      || (v8 = *(FILE ***)a2, v2 = getc_nolock(**(FILE ***)a2), v2 == -1) )
    {
      LOBYTE(v2) = 0;
    }
    else
    {
      v8[1] = (FILE *)((char *)v8[1] + 1);
    }
    ++v5;
    *a1 = v2;
    if ( v5 == 5 )
      return 1;
  }
  return v3;
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022ABCC) ----------------------------------------------------
char            sub_14022ABCC(char *a1, _QWORD *a2)
{
  char v2; // r9
  char v3; // r8
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  char *v6; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0;
  while ( v2 == byte_140285934[v4 + 84] || v2 == byte_140285934[v4 + 92] )
  {
    v5 = a2[2] + 1LL;
    a2[2] = v5;
    if ( a2[1] && v5 > a2[1] || (v6 = *(char **)(*a2 + 16LL), v6 == *(char **)(*a2 + 8LL)) )
    {
      v2 = 0;
    }
    else
    {
      v2 = *v6;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v6 + 1);
    }
    ++v4;
    *a1 = v2;
    if ( v4 == 5 )
      return 1;
  }
  return v3;
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022AC44) ----------------------------------------------------
char            sub_14022AC44(__int16 *a1, __int64 a2)
{
  __int16 v2; // ax
  char v3; // bl
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  FILE **v8; // rsi

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  while ( v2 == *(_WORD *)&byte_140285934[v5 + 108] || v2 == *(_WORD *)&byte_140285934[v5 + 124] )
  {
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v7;
    if ( *(_QWORD *)(a2 + 8) && v7 > *(_QWORD *)(a2 + 8) )
    {
      v2 = 0;
    }
    else
    {
      v8 = *(FILE ***)a2;
      v2 = j__fgetwc_nolock(**(FILE ***)a2);
      if ( v2 == -1 )
        v2 = 0;
      else
        v8[1] = (FILE *)((char *)v8[1] + 1);
    }
    v5 += 2;
    *a1 = v2;
    if ( v5 == 10 )
      return 1;
  }
  return v3;
}

// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022ACE8) ----------------------------------------------------
char            sub_14022ACE8(__int16 *a1, _QWORD *a2)
{
  __int16 v2; // ax
  char v3; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int16 *v7; // rax
  __int16 v8; // dx

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  while ( v2 == *(_WORD *)&byte_140285934[v5 + 36] || v2 == *(_WORD *)&byte_140285934[v5 + 52] )
  {
    v6 = a2[2] + 1LL;
    a2[2] = v6;
    if ( a2[1] && v6 > a2[1] )
    {
      v2 = 0;
    }
    else
    {
      v7 = *(__int16 **)(*a2 + 16LL);
      if ( v7 == *(__int16 **)(*a2 + 8LL) || (v8 = *v7, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v7 + 1), v2 = v8, v8 == -1) )
        v2 = 0;
    }
    v5 += 2;
    *a1 = v2;
    if ( v5 == 10 )
      return 1;
  }
  return v3;
}

// 140285934: using guessed type _BYTE byte_140285934[244];

//----- (000000014022AD78) ----------------------------------------------------
__int64            sub_14022AD78(int a1, __int64 a2, unsigned int *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( a1 > 5 )
  {
    v8 = a1 - 6;
    if ( !v8 )
    {
      *a3 = -4194304;
      return 0;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        *a3 = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
        return 2;
      }
      if ( v10 == 1 )
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
    v6 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800001 | 1;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    v11 = a3;
    v12 = 0;
    return sub_14023023C((_DWORD *)a2, (__crt_strtox__floating_point_value *)&v11);
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    v11 = a3;
    v12 = 0;
    return sub_140231FC0(a2, (__int64)&v11);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800000;
    goto LABEL_9;
  }
  if ( v5 != 1 )
    return 1;
  v6 = *(_BYTE *)(a2 + 776) != 0 ? -1 : 0x7FFFFFFF;
LABEL_9:
  *a3 = v6;
  return 0;
}


//----- (000000014022AEE8) ----------------------------------------------------
__int64            sub_14022AEE8(int a1, __int64 a2, unsigned __int64 *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned __int64 v6; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( a1 > 5 )
  {
    v8 = a1 - 6;
    if ( !v8 )
    {
      *a3 = 0xFFF8000000000000uLL;
      return 0;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        *a3 = -(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL;
        return 2;
      }
      if ( v10 == 1 )
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
    v6 = *a3 & 0x7FF0000000000000LL
       | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
       & 0xFFF0000000000001uLL
       | 1;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    v11 = a3;
    v12 = 1;
    return sub_14023023C((_DWORD *)a2, (__crt_strtox__floating_point_value *)&v11);
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    v11 = a3;
    v12 = 1;
    return sub_140231FC0(a2, (__int64)&v11);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = -(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL;
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *a3 & 0x7FF0000000000000LL
       | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
       & 0xFFF0000000000000uLL;
    goto LABEL_9;
  }
  if ( v5 != 1 )
    return 1;
  v6 = (-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
  *a3 = v6;
  return 0;
}


//----- (000000014022B0C8) ----------------------------------------------------
unsigned __int64            sub_14022B0C8(
        struct __crt_locale_pointers *a1,
        FILE ***a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int v5; // esi
  FILE **v7; // rax
  unsigned __int64 v8; // rbp
  FILE **v9; // r14
  FILE **v10; // rdi
  FILE **v11; // rax
  int v12; // eax
  int v13; // r14d
  FILE **v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  FILE **v18; // rax
  FILE **v19; // r15
  int v20; // eax
  char v21; // dl
  int v22; // eax
  FILE **v23; // rax
  int v24; // eax
  int v25; // eax
  FILE **v26; // rax
  int v27; // ecx
  FILE **v28; // rdx
  unsigned __int64 v29; // r15
  unsigned int v30; // ecx
  __int64 v31; // rdx
  FILE **v32; // rax
  bool v33; // zf
  int v34; // eax
  FILE **v35; // rax
  FILE **v36; // rdx
  FILE **v37; // rax
  FILE **v39; // rax
  FILE **v40; // rax
  FILE **v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-48h] BYREF
  char v43[16]; // [rsp+28h] [rbp-40h] BYREF
  char v44; // [rsp+38h] [rbp-30h]
  FILE **v45; // [rsp+78h] [rbp+10h]

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v7 = a2[3];
    if ( v7 )
    {
      if ( !a2[2] )
        *(_BYTE *)v7 = 0;
    }
    return 0;
  }
  sub_140213644((_LocaleUpdate *)&v42, a1);
  v45 = a2[2];
  v8 = 0;
  a2[2] = (FILE **)((char *)v45 + 1);
  if ( a2[1] && (FILE **)((char *)v45 + 1) > a2[1] || (v9 = *a2, LODWORD(v10) = getc_nolock(**a2), (_DWORD)v10 == -1) )
    LOBYTE(v10) = 0;
  else
    v9[1] = (FILE *)((char *)v9[1] + 1);
  while ( (unsigned int)sub_140236ED8((unsigned __int8)v10, 8, (struct __crt_locale_pointers *)v43) )
  {
    v11 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v11;
    if ( a2[1] && v11 > a2[1] || (v10 = *a2, v12 = getc_nolock(**a2), v12 == -1) )
    {
      LOBYTE(v10) = 0;
    }
    else
    {
      v10[1] = (FILE *)((char *)v10[1] + 1);
      LOBYTE(v10) = v12;
    }
  }
  v13 = a4 | 2;
  if ( (_BYTE)v10 != 45 )
    v13 = a4;
  if ( (((_BYTE)v10 - 43) & 0xFD) == 0 )
  {
    v14 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v14;
    if ( a2[1] && v14 > a2[1] || (v10 = *a2, v15 = getc_nolock(**a2), v15 == -1) )
    {
      LOBYTE(v10) = 0;
    }
    else
    {
      v10[1] = (FILE *)((char *)v10[1] + 1);
      LOBYTE(v10) = v15;
    }
  }
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_59;
  if ( (unsigned __int8)((_BYTE)v10 - 48) > 9u )
  {
    if ( (unsigned __int8)((_BYTE)v10 - 97) > 0x19u )
    {
      if ( (unsigned __int8)((_BYTE)v10 - 65) > 0x19u )
        v16 = -1;
      else
        v16 = (char)v10 - 55;
    }
    else
    {
      v16 = (char)v10 - 87;
    }
  }
  else
  {
    v16 = (char)v10 - 48;
  }
  if ( !v16 )
  {
    v18 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v18;
    if ( a2[1] && v18 > a2[1] || (v19 = *a2, v20 = getc_nolock(**a2), v21 = v20, v20 == -1) )
    {
      v21 = 0;
    }
    else
    {
      v19[1] = (FILE *)((char *)v19[1] + 1);
      if ( (((_BYTE)v20 - 88) & 0xDF) == 0 )
      {
        v22 = 16;
        if ( v5 )
          v22 = v5;
        v5 = v22;
        v23 = (FILE **)((char *)a2[2] + 1);
        a2[2] = v23;
        if ( a2[1] && v23 > a2[1] || (v10 = *a2, v24 = getc_nolock(**a2), v24 == -1) )
        {
          LOBYTE(v10) = 0;
        }
        else
        {
          v10[1] = (FILE *)((char *)v10[1] + 1);
          LOBYTE(v10) = v24;
        }
        goto LABEL_59;
      }
    }
    v25 = 8;
    if ( v5 )
      v25 = v5;
    v5 = v25;
    v26 = (FILE **)((char *)a2[2] - 1);
    a2[2] = v26;
    if ( (!a2[1] || v26 <= a2[1]) && (unsigned __int8)(v21 + 1) > 1u )
    {
      v27 = v21;
      v28 = *a2;
      if ( v27 != -1 )
      {
        v28[1] = (FILE *)((char *)v28[1] - 1);
        sub_14020CE90(v27, (__int64)*v28);
      }
    }
    goto LABEL_59;
  }
  v17 = 10;
  if ( v5 )
    v17 = v5;
  v5 = v17;
LABEL_59:
  v29 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)((_BYTE)v10 - 48) > 9u )
    {
      if ( (unsigned __int8)((_BYTE)v10 - 97) > 0x19u )
        v30 = (unsigned __int8)((_BYTE)v10 - 65) > 0x19u ? -1 : (char)v10 - 55;
      else
        v30 = (char)v10 - 87;
    }
    else
    {
      v30 = (char)v10 - 48;
    }
    if ( v30 == -1 || v30 >= v5 )
      break;
    v13 |= 8u;
    if ( v8 < v29 )
    {
      v31 = v30;
LABEL_74:
      v8 = v31 + v5 * v8;
      goto LABEL_75;
    }
    if ( v8 == v29 )
    {
      v31 = v30;
      if ( v30 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_74;
    }
    v13 |= 4u;
LABEL_75:
    v32 = (FILE **)((char *)a2[2] + 1);
    v33 = a2[1] == nullptr;
    a2[2] = v32;
    if ( !v33 && v32 > a2[1] || (v10 = *a2, v34 = getc_nolock(**a2), v34 == -1) )
    {
      LOBYTE(v10) = 0;
    }
    else
    {
      v10[1] = (FILE *)((char *)v10[1] + 1);
      LOBYTE(v10) = v34;
    }
  }
  v35 = (FILE **)((char *)a2[2] - 1);
  a2[2] = v35;
  if ( (!a2[1] || v35 <= a2[1]) && (unsigned __int8)((_BYTE)v10 + 1) > 1u )
  {
    v36 = *a2;
    if ( (char)v10 != -1 )
    {
      v36[1] = (FILE *)((char *)v36[1] - 1);
      sub_14020CE90((char)v10, (__int64)*v36);
    }
  }
  if ( (v13 & 8) != 0 )
  {
    if ( sub_1402257B4(v13, v8) )
    {
      *errno_sr() = 34;
      if ( (v13 & 1) != 0 )
      {
        if ( (v13 & 2) != 0 )
        {
          if ( v44 )
            *(_DWORD *)(v42 + 936) &= ~2u;
          v39 = a2[3];
          if ( v39 && !a2[2] )
            *(_BYTE *)v39 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v44 )
            *(_DWORD *)(v42 + 936) &= ~2u;
          v40 = a2[3];
          if ( v40 && !a2[2] )
            *(_BYTE *)v40 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v8 = -1;
    }
    else if ( (v13 & 2) != 0 )
    {
      v8 = -(__int64)v8;
    }
    if ( v44 )
      *(_DWORD *)(v42 + 936) &= ~2u;
    v41 = a2[3];
    if ( v41 && !a2[2] )
      *(_BYTE *)v41 = 0;
    return v8;
  }
  if ( v45 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( v44 )
    *(_DWORD *)(v42 + 936) &= ~2u;
  v37 = a2[3];
  if ( v37 && !a2[2] )
    *(_BYTE *)v37 = 0;
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014022B534) ----------------------------------------------------
unsigned __int64            sub_14022B534(
        struct __crt_locale_pointers *a1,
        FILE ***a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int v5; // r13d
  FILE **v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  FILE **v10; // rsi
  unsigned __int16 v11; // bx
  FILE **v12; // rax
  FILE **v13; // rbx
  unsigned __int16 v14; // ax
  int v15; // r15d
  FILE **v16; // rax
  int v17; // ecx
  __int64 v18; // r8
  int v19; // eax
  FILE **v20; // rbx
  unsigned __int16 v21; // ax
  unsigned int v22; // edx
  int v23; // eax
  int v24; // eax
  FILE **v25; // rax
  __int64 v26; // rcx
  FILE **v27; // rsi
  unsigned __int16 v28; // ax
  int v29; // eax
  FILE **v30; // rax
  FILE **v31; // rbx
  unsigned __int16 v32; // ax
  int v33; // eax
  FILE **v34; // rax
  FILE **v35; // rdx
  unsigned __int64 v36; // rsi
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // ecx
  __int64 v41; // rdx
  FILE **v42; // rax
  FILE **v43; // rbx
  unsigned __int16 v44; // ax
  FILE **v45; // rax
  FILE **v46; // rdx
  FILE **v47; // rax
  FILE **v49; // rax
  FILE **v50; // rax
  FILE **v51; // rcx
  __int64 v52[3]; // [rsp+70h] [rbp-58h] BYREF
  char v53; // [rsp+88h] [rbp-40h]
  FILE **v54; // [rsp+90h] [rbp-38h]

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    v7 = a2[3];
    if ( v7 )
    {
      if ( !a2[2] )
        *(_BYTE *)v7 = 0;
    }
    return 0;
  }
  sub_140213644((_LocaleUpdate *)v52, a1);
  v8 = 0;
  v54 = a2[2];
  v9 = (unsigned __int64)v54 + 1;
  a2[2] = (FILE **)((char *)v54 + 1);
  if ( a2[1] && v9 > (unsigned __int64)a2[1] )
    goto LABEL_18;
  v10 = *a2;
  v11 = j__fgetwc_nolock(**a2);
  if ( v11 == 0xFFFF )
    v11 = 0;
  else
    v10[1] = (FILE *)((char *)v10[1] + 1);
  while ( (unsigned int)sub_140256E00(v11, 8) )
  {
    v12 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v12;
    if ( a2[1] && v12 > a2[1] || (v13 = *a2, v14 = j__fgetwc_nolock(**a2), v14 == 0xFFFF) )
    {
LABEL_18:
      v11 = 0;
    }
    else
    {
      v13[1] = (FILE *)((char *)v13[1] + 1);
      v11 = v14;
    }
  }
  v15 = a4 | 2;
  if ( v11 != 45 )
    v15 = a4;
  if ( ((v11 - 43) & 0xFFFD) == 0 )
  {
    v16 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v16;
    if ( a2[1] && v16 > a2[1] )
    {
      v11 = 0;
    }
    else
    {
      v20 = *a2;
      v21 = j__fgetwc_nolock(**a2);
      if ( v21 == 0xFFFF )
      {
        v11 = 0;
      }
      else
      {
        v20[1] = (FILE *)((char *)v20[1] + 1);
        v11 = v21;
      }
    }
  }
  v17 = 48;
  v18 = 1632;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_105;
  if ( v11 >= 0x30u )
  {
    if ( v11 < 0x3Au )
    {
LABEL_29:
      v19 = v11 - v17;
      goto LABEL_75;
    }
    if ( v11 >= 0xFF10u )
    {
      if ( v11 >= 0xFF1Au )
        v19 = -1;
      else
        v19 = v11 - 65296;
LABEL_75:
      if ( v19 != -1 )
        goto LABEL_82;
      goto LABEL_76;
    }
    if ( v11 >= 0x660u )
    {
      if ( v11 < 0x66Au )
      {
        v19 = v11 - 1632;
        goto LABEL_75;
      }
      if ( v11 >= 0x6F0u )
      {
        if ( v11 < 0x6FAu )
        {
          v19 = v11 - 1776;
          goto LABEL_75;
        }
        if ( v11 >= 0x966u )
        {
          if ( v11 < 0x970u )
          {
            v19 = v11 - 2406;
            goto LABEL_75;
          }
          if ( v11 >= 0x9E6u )
          {
            if ( v11 < 0x9F0u )
            {
              v19 = v11 - 2534;
              goto LABEL_75;
            }
            if ( v11 >= 0xA66u )
            {
              if ( v11 < 0xA70u )
              {
                v19 = v11 - 2662;
                goto LABEL_75;
              }
              if ( v11 >= 0xAE6u )
              {
                if ( v11 < 0xAF0u )
                {
                  v19 = v11 - 2790;
                  goto LABEL_75;
                }
                v17 = 2918;
                if ( v11 >= 0xB66u )
                {
                  if ( v11 < 0xB70u )
                    goto LABEL_29;
                  v17 = 3174;
                  if ( v11 >= 0xC66u )
                  {
                    if ( v11 < 0xC70u )
                      goto LABEL_29;
                    v17 = 3302;
                    if ( v11 >= 0xCE6u )
                    {
                      if ( v11 < 0xCF0u )
                        goto LABEL_29;
                      v17 = 3430;
                      if ( v11 >= 0xD66u )
                      {
                        if ( v11 < 0xD70u )
                          goto LABEL_29;
                        v17 = 3664;
                        if ( v11 >= 0xE50u )
                        {
                          if ( v11 < 0xE5Au )
                            goto LABEL_29;
                          v17 = 3792;
                          if ( v11 >= 0xED0u )
                          {
                            if ( v11 < 0xEDAu )
                              goto LABEL_29;
                            v17 = 3872;
                            if ( v11 >= 0xF20u )
                            {
                              if ( v11 < 0xF2Au )
                                goto LABEL_29;
                              v17 = 4160;
                              if ( v11 >= 0x1040u )
                              {
                                if ( v11 < 0x104Au )
                                  goto LABEL_29;
                                v17 = 6112;
                                if ( v11 >= 0x17E0u )
                                {
                                  if ( v11 < 0x17EAu )
                                    goto LABEL_29;
                                  v17 = 6160;
                                  if ( (unsigned __int16)(v11 - 6160) <= 9u )
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
  v22 = v11 - 97;
  if ( (unsigned int)v11 - 65 <= 0x19 || v22 <= 0x19 )
  {
    v23 = v11 - 32;
    if ( v22 > 0x19 )
      v23 = v11;
    v19 = v23 - 55;
  }
  else
  {
    v19 = -1;
  }
LABEL_82:
  if ( v19 )
  {
    v24 = 10;
    if ( v5 )
      v24 = v5;
    v5 = v24;
  }
  else
  {
    v25 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v25;
    if ( a2[1] && v25 > a2[1] )
    {
      v26 = 0;
    }
    else
    {
      v27 = *a2;
      v28 = j__fgetwc_nolock(**a2);
      v26 = v28;
      if ( v28 == 0xFFFF )
      {
        v26 = 0;
      }
      else
      {
        v27[1] = (FILE *)((char *)v27[1] + 1);
        if ( ((v28 - 88) & 0xFFDF) == 0 )
        {
          v29 = 16;
          if ( v5 )
            v29 = v5;
          v5 = v29;
          v30 = (FILE **)((char *)a2[2] + 1);
          a2[2] = v30;
          if ( a2[1] && v30 > a2[1] || (v31 = *a2, v32 = j__fgetwc_nolock(**a2), v32 == 0xFFFF) )
          {
            v11 = 0;
          }
          else
          {
            v31[1] = (FILE *)((char *)v31[1] + 1);
            v11 = v32;
          }
          goto LABEL_105;
        }
      }
    }
    v33 = 8;
    if ( v5 )
      v33 = v5;
    v5 = v33;
    v34 = (FILE **)((char *)a2[2] - 1);
    a2[2] = v34;
    if ( (!a2[1] || v34 <= a2[1]) && (unsigned __int16)(v26 - 1) <= 0xFFFDu )
    {
      v35 = *a2;
      v35[1] = (FILE *)((char *)v35[1] - 1);
      ungetwc_nolock(v26, *v35, v18);
    }
  }
LABEL_105:
  v36 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    v37 = 48;
    if ( v11 >= 0x30u )
    {
      if ( v11 < 0x3Au )
        goto LABEL_108;
      v37 = 65296;
      if ( v11 >= 0xFF10u )
      {
        if ( v11 < 0xFF1Au )
LABEL_108:
          v38 = v11 - v37;
        else
          v38 = -1;
LABEL_144:
        if ( v38 != -1 )
          goto LABEL_151;
        goto LABEL_145;
      }
      v37 = 1632;
      if ( v11 >= 0x660u )
      {
        if ( v11 < 0x66Au )
          goto LABEL_108;
        v37 = 1776;
        if ( v11 >= 0x6F0u )
        {
          if ( v11 < 0x6FAu )
            goto LABEL_108;
          v37 = 2406;
          if ( v11 >= 0x966u )
          {
            if ( v11 < 0x970u )
              goto LABEL_108;
            v37 = 2534;
            if ( v11 >= 0x9E6u )
            {
              if ( v11 < 0x9F0u )
                goto LABEL_108;
              v37 = 2662;
              if ( v11 >= 0xA66u )
              {
                if ( v11 < 0xA70u )
                  goto LABEL_108;
                v37 = 2790;
                if ( v11 >= 0xAE6u )
                {
                  if ( v11 < 0xAF0u )
                    goto LABEL_108;
                  v37 = 2918;
                  if ( v11 >= 0xB66u )
                  {
                    if ( v11 < 0xB70u )
                      goto LABEL_108;
                    v37 = 3174;
                    if ( v11 >= 0xC66u )
                    {
                      if ( v11 < 0xC70u )
                        goto LABEL_108;
                      v37 = 3302;
                      if ( v11 >= 0xCE6u )
                      {
                        if ( v11 < 0xCF0u )
                          goto LABEL_108;
                        v37 = 3430;
                        if ( v11 >= 0xD66u )
                        {
                          if ( v11 < 0xD70u )
                            goto LABEL_108;
                          v37 = 3664;
                          if ( v11 >= 0xE50u )
                          {
                            if ( v11 < 0xE5Au )
                              goto LABEL_108;
                            v37 = 3792;
                            if ( v11 >= 0xED0u )
                            {
                              if ( v11 < 0xEDAu )
                                goto LABEL_108;
                              v37 = 3872;
                              if ( v11 >= 0xF20u )
                              {
                                if ( v11 < 0xF2Au )
                                  goto LABEL_108;
                                v37 = 4160;
                                if ( v11 >= 0x1040u )
                                {
                                  if ( v11 < 0x104Au )
                                    goto LABEL_108;
                                  v37 = 6112;
                                  if ( v11 >= 0x17E0u )
                                  {
                                    if ( v11 < 0x17EAu )
                                      goto LABEL_108;
                                    if ( (unsigned __int16)(v11 - 6160) <= 9u )
                                    {
                                      v38 = v11 - 6160;
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
    v39 = v11 - 97;
    if ( (unsigned int)v11 - 65 <= 0x19 || v39 <= 0x19 )
    {
      v40 = v11 - 32;
      if ( v39 > 0x19 )
        v40 = v11;
      v38 = v40 - 55;
    }
    else
    {
      v38 = -1;
    }
LABEL_151:
    if ( v38 == -1 || v38 >= v5 )
      break;
    v15 |= 8u;
    if ( v8 < v36 )
    {
      v41 = v38;
    }
    else if ( v8 != v36 || (v41 = v38, v38 > 0xFFFFFFFFFFFFFFFFuLL % v5) )
    {
      v15 |= 4u;
      goto LABEL_159;
    }
    v8 = v41 + v5 * v8;
LABEL_159:
    v42 = (FILE **)((char *)a2[2] + 1);
    a2[2] = v42;
    if ( a2[1] && v42 > a2[1] )
    {
      v11 = 0;
    }
    else
    {
      v43 = *a2;
      v44 = j__fgetwc_nolock(**a2);
      if ( v44 == 0xFFFF )
        v44 = 0;
      else
        v43[1] = (FILE *)((char *)v43[1] + 1);
      v11 = v44;
    }
  }
  v45 = (FILE **)((char *)a2[2] - 1);
  a2[2] = v45;
  if ( (!a2[1] || v45 <= a2[1]) && (unsigned __int16)(v11 - 1) <= 0xFFFDu )
  {
    v46 = *a2;
    v46[1] = (FILE *)((char *)v46[1] - 1);
    ungetwc_nolock(v11, *v46, 1);
  }
  if ( (v15 & 8) != 0 )
  {
    if ( sub_1402257B4(v15, v8) )
    {
      *errno_sr() = 34;
      if ( (v15 & 1) != 0 )
      {
        if ( (v15 & 2) != 0 )
        {
          if ( v53 )
            *(_DWORD *)(v52[0] + 936) &= ~2u;
          v49 = a2[3];
          if ( v49 && !a2[2] )
            *(_BYTE *)v49 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v53 )
            *(_DWORD *)(v52[0] + 936) &= ~2u;
          v50 = a2[3];
          if ( v50 && !a2[2] )
            *(_BYTE *)v50 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v8 = -1;
    }
    else if ( (v15 & 2) != 0 )
    {
      v8 = -(__int64)v8;
    }
    if ( v53 )
      *(_DWORD *)(v52[0] + 936) &= ~2u;
    v51 = a2[3];
    if ( v51 && !a2[2] )
      *(_BYTE *)v51 = 0;
    return v8;
  }
  if ( v54 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( v53 )
    *(_DWORD *)(v52[0] + 936) &= ~2u;
  v47 = a2[3];
  if ( v47 && !a2[2] )
    *(_BYTE *)v47 = 0;
  return 0;
}

// 14022BA88: variable 'v18' is possibly undefined
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (000000014022BE60) ----------------------------------------------------
unsigned __int64            sub_14022BE60(
        struct __crt_locale_pointers *a1,
        _QWORD *a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int v5; // esi
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 i; // rax
  unsigned __int8 *v10; // rax
  unsigned __int8 v11; // di
  int v12; // eax
  int v13; // r14d
  unsigned __int64 v14; // rax
  unsigned __int8 *v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  char v20; // dl
  char *v21; // rax
  int v22; // eax
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE *v26; // rax
  int v27; // eax
  unsigned __int64 v28; // r8
  unsigned __int8 *v29; // rax
  unsigned __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int8 *v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // rax
  _BYTE *v39; // rax
  _BYTE *v40; // rax
  _BYTE *v41; // rcx
  struct { uint64_t thread, pair[2]; unsigned char changed, padding[7]; } number_locale;
  _Static_assert(sizeof(number_locale)==32, "Native integer locale");

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_86;
  }
  sub_140213644((_LocaleUpdate *)&number_locale, a1);
  v7 = a2[2];
  v8 = 0;
  for ( i = v7 + 1; ; i = a2[2] + 1LL )
  {
    if ( (a2[2] = i, a2[1]) && i > a2[1]
      || (v10 = *(unsigned __int8 **)(*a2 + 16LL), v10 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v11 = 0;
    }
    else
    {
      v11 = *v10;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v10 + 1);
    }
    if ( !(unsigned int)sub_140236ED8(v11, 8, (struct __crt_locale_pointers *)number_locale.pair) )
      break;
  }
  v12 = a4;
  v13 = a4 | 2;
  if ( v11 != 45 )
    v13 = v12;
  if ( ((v11 - 43) & 0xFD) == 0 )
  {
    v14 = a2[2] + 1LL;
    a2[2] = v14;
    if ( a2[1] && v14 > a2[1] || (v15 = *(unsigned __int8 **)(*a2 + 16LL), v15 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v11 = 0;
    }
    else
    {
      v11 = *v15;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v15 + 1);
    }
  }
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_55;
  if ( (unsigned __int8)(v11 - 48) > 9u )
  {
    if ( (unsigned __int8)(v11 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v11 - 65) > 0x19u )
        v16 = -1;
      else
        v16 = (char)v11 - 55;
    }
    else
    {
      v16 = (char)v11 - 87;
    }
  }
  else
  {
    v16 = (char)v11 - 48;
  }
  if ( v16 )
  {
    v17 = 10;
    if ( v5 )
      v17 = v5;
    v5 = v17;
    goto LABEL_55;
  }
  v18 = a2[1];
  v19 = a2[2] + 1LL;
  a2[2] = v19;
  if ( v18 && v19 > v18 || (v21 = *(char **)(*a2 + 16LL), v21 == *(char **)(*a2 + 8LL)) )
  {
    v20 = 0;
  }
  else
  {
    v20 = *v21;
    *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v21 + 1);
    v19 = a2[2];
    v18 = a2[1];
  }
  if ( ((v20 - 88) & 0xDF) != 0 )
  {
    v22 = 8;
    if ( v5 )
      v22 = v5;
    v23 = v19 - 1;
    a2[2] = v23;
    v5 = v22;
    if ( v18 && v23 > v18 )
      goto LABEL_55;
    if ( (unsigned __int8)(v20 + 1) <= 1u )
      goto LABEL_55;
    v24 = *a2;
    v25 = *(_QWORD *)(*a2 + 16LL);
    if ( v25 == *(_QWORD *)*a2 )
      goto LABEL_55;
    v26 = (_BYTE *)(v25 - 1);
  }
  else
  {
    v27 = 16;
    if ( v5 )
      v27 = v5;
    v28 = v19 + 1;
    a2[2] = v28;
    v5 = v27;
    if ( v18 && v28 > v18
      || (v24 = *a2, v29 = *(unsigned __int8 **)(*a2 + 16LL), v29 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v11 = 0;
      goto LABEL_55;
    }
    v11 = *v29;
    v26 = v29 + 1;
  }
  *(_QWORD *)(v24 + 16) = (uint64)(uintptr_t)(v26);
LABEL_55:
  v30 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)(v11 - 48) > 9u )
    {
      if ( (unsigned __int8)(v11 - 97) > 0x19u )
        v31 = (unsigned __int8)(v11 - 65) > 0x19u ? -1 : (char)v11 - 55;
      else
        v31 = (char)v11 - 87;
    }
    else
    {
      v31 = (char)v11 - 48;
    }
    if ( v31 == -1 || v31 >= v5 )
      break;
    v13 |= 8u;
    if ( v8 < v30 )
    {
      v32 = v31;
LABEL_70:
      v8 = v32 + v5 * v8;
      goto LABEL_71;
    }
    if ( v8 == v30 )
    {
      v32 = v31;
      if ( v31 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_70;
    }
    v13 |= 4u;
LABEL_71:
    v33 = a2[2] + 1LL;
    a2[2] = v33;
    if ( a2[1] && v33 > a2[1] || (v34 = *(unsigned __int8 **)(*a2 + 16LL), v34 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v11 = 0;
    }
    else
    {
      v11 = *v34;
      *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v34 + 1);
    }
  }
  v35 = a2[2] - 1LL;
  a2[2] = v35;
  if ( (!a2[1] || v35 <= a2[1]) && (unsigned __int8)(v11 + 1) > 1u )
  {
    v36 = *(_QWORD *)(*a2 + 16LL);
    if ( v36 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v36 - 1;
  }
  if ( (v13 & 8) != 0 )
  {
    if ( sub_1402257B4(v13, v8) )
    {
      *errno_sr() = 34;
      if ( (v13 & 1) != 0 )
      {
        if ( (v13 & 2) != 0 )
        {
          if ( number_locale.changed )
            *(_DWORD *)(number_locale.thread + 936) &= ~2u;
          v39 = (_BYTE *)a2[3];
          if ( v39 && !a2[2] )
            *v39 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( number_locale.changed )
            *(_DWORD *)(number_locale.thread + 936) &= ~2u;
          v40 = (_BYTE *)a2[3];
          if ( v40 && !a2[2] )
            *v40 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v8 = -1;
    }
    else if ( (v13 & 2) != 0 )
    {
      v8 = 0ULL - v8;
    }
    if ( number_locale.changed )
      *(_DWORD *)(number_locale.thread + 936) &= ~2u;
    v41 = (_BYTE *)a2[3];
    if ( v41 && !a2[2] )
      *v41 = 0;
    return v8;
  }
  if ( v7 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( number_locale.changed )
    *(_DWORD *)(number_locale.thread + 936) &= ~2u;
LABEL_86:
  v37 = (_BYTE *)a2[3];
  if ( v37 )
  {
    if ( !a2[2] )
      *v37 = 0;
  }
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014022C26C) ----------------------------------------------------
unsigned __int64            sub_14022C26C(
        struct __crt_locale_pointers *a1,
        _QWORD *a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int v5; // r14d
  unsigned __int64 v7; // rbp
  unsigned __int16 *v8; // rax
  unsigned __int16 v9; // bx
  unsigned __int64 v10; // rax
  unsigned __int16 *v11; // rax
  unsigned __int16 v12; // dx
  int v13; // eax
  int v14; // esi
  unsigned __int64 v15; // rax
  unsigned __int16 *v16; // rax
  unsigned __int16 v17; // dx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int16 v25; // r8
  __int16 *v26; // rax
  __int16 v27; // r9
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rdx
  unsigned __int16 *v33; // rax
  unsigned __int16 v34; // dx
  unsigned __int64 v35; // r8
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // eax
  int v39; // ecx
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int16 *v42; // rax
  unsigned __int16 v43; // dx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  _BYTE *v46; // rax
  _BYTE *v48; // rax
  _BYTE *v49; // rax
  _BYTE *v50; // rcx
  __int64 v51[3]; // [rsp+20h] [rbp-48h] BYREF
  char v52; // [rsp+38h] [rbp-30h]
  __int64 v53; // [rsp+78h] [rbp+10h]

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_172;
  }
  sub_140213644((_LocaleUpdate *)v51, a1);
  v7 = 0;
  v53 = a2[2];
  a2[2] = v53 + 1;
  if ( a2[1] && (unsigned __int64)(v53 + 1) > a2[1] )
    goto LABEL_15;
  v8 = *(unsigned __int16 **)(*a2 + 16LL);
  if ( v8 == *(unsigned __int16 **)(*a2 + 8LL) || (v9 = *v8, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v8 + 1), v9 == 0xFFFF) )
    v9 = 0;
  while ( (unsigned int)sub_140256E00(v9, 8) )
  {
    v10 = a2[2] + 1LL;
    a2[2] = v10;
    if ( !a2[1] || v10 <= a2[1] )
    {
      v11 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v11 != *(unsigned __int16 **)(*a2 + 8LL) )
      {
        v12 = *v11;
        *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v11 + 1);
        v9 = v12;
        if ( v12 != 0xFFFF )
          continue;
      }
    }
LABEL_15:
    v9 = 0;
  }
  v13 = a4;
  v14 = a4 | 2;
  if ( v9 != 45 )
    v14 = v13;
  if ( ((v9 - 43) & 0xFFFD) == 0 )
  {
    if ( (v15 = a2[2] + 1LL, a2[2] = v15, a2[1]) && v15 > a2[1]
      || (v16 = *(unsigned __int16 **)(*a2 + 16LL), v16 == *(unsigned __int16 **)(*a2 + 8LL))
      || (v17 = *v16, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v16 + 1), v9 = v17, v17 == 0xFFFF) )
    {
      v9 = 0;
    }
  }
  v18 = 48;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_101;
  if ( v9 < 0x30u )
    goto LABEL_69;
  if ( v9 < 0x3Au )
    goto LABEL_28;
  if ( v9 < 0xFF10u )
  {
    if ( v9 >= 0x660u )
    {
      if ( v9 < 0x66Au )
      {
        v19 = v9 - 1632;
        goto LABEL_68;
      }
      if ( v9 >= 0x6F0u )
      {
        if ( v9 < 0x6FAu )
        {
          v19 = v9 - 1776;
          goto LABEL_68;
        }
        if ( v9 >= 0x966u )
        {
          if ( v9 < 0x970u )
          {
            v19 = v9 - 2406;
            goto LABEL_68;
          }
          v18 = 2534;
          if ( v9 >= 0x9E6u )
          {
            if ( v9 < 0x9F0u )
              goto LABEL_28;
            v18 = 2662;
            if ( v9 >= 0xA66u )
            {
              if ( v9 < 0xA70u )
                goto LABEL_28;
              v18 = 2790;
              if ( v9 >= 0xAE6u )
              {
                if ( v9 < 0xAF0u )
                  goto LABEL_28;
                v18 = 2918;
                if ( v9 >= 0xB66u )
                {
                  if ( v9 < 0xB70u )
                    goto LABEL_28;
                  v18 = 3174;
                  if ( v9 >= 0xC66u )
                  {
                    if ( v9 < 0xC70u )
                      goto LABEL_28;
                    v18 = 3302;
                    if ( v9 >= 0xCE6u )
                    {
                      if ( v9 < 0xCF0u
                        || (v18 = 3430, v9 >= 0xD66u)
                        && (v9 < 0xD70u
                         || (v18 = 3664, v9 >= 0xE50u)
                         && (v9 < 0xE5Au
                          || (v18 = 3792, v9 >= 0xED0u)
                          && (v9 < 0xEDAu
                           || (v18 = 3872, v9 >= 0xF20u)
                           && (v9 < 0xF2Au
                            || (v18 = 4160, v9 >= 0x1040u)
                            && (v9 < 0x104Au
                             || (v18 = 6112, v9 >= 0x17E0u)
                             && (v9 < 0x17EAu || (v18 = 6160, (unsigned __int16)(v9 - 6160) <= 9u))))))) )
                      {
LABEL_28:
                        v19 = v9 - v18;
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
    v20 = v9 - 97;
    if ( (unsigned int)v9 - 65 <= 0x19 || v20 <= 0x19 )
    {
      v21 = v9 - 32;
      if ( v20 > 0x19 )
        v21 = v9;
      v19 = v21 - 55;
    }
    else
    {
      v19 = -1;
    }
    goto LABEL_75;
  }
  if ( v9 >= 0xFF1Au )
    v19 = -1;
  else
    v19 = v9 - 65296;
LABEL_68:
  if ( v19 == -1 )
    goto LABEL_69;
LABEL_75:
  if ( v19 )
  {
    v22 = 10;
    if ( v5 )
      v22 = v5;
    v5 = v22;
  }
  else
  {
    v23 = a2[1];
    v24 = a2[2] + 1LL;
    a2[2] = v24;
    if ( v23 && v24 > v23 )
    {
      v25 = 0;
    }
    else
    {
      v26 = *(__int16 **)(*a2 + 16LL);
      if ( v26 == *(__int16 **)(*a2 + 8LL)
        || (v27 = *v26, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v26 + 1), v24 = a2[2], v23 = a2[1], v27 == -1) )
      {
        v25 = 0;
      }
      else
      {
        v25 = v27;
      }
    }
    if ( ((v25 - 88) & 0xFFDF) != 0 )
    {
      v28 = 8;
      if ( v5 )
        v28 = v5;
      v29 = v24 - 1;
      a2[2] = v29;
      v5 = v28;
      if ( (!v23 || v29 <= v23) && (unsigned __int16)(v25 - 1) <= 0xFFFDu )
      {
        v30 = *(_QWORD *)(*a2 + 16LL);
        if ( v30 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = v30 - 2;
      }
    }
    else
    {
      v31 = 16;
      if ( v5 )
        v31 = v5;
      v32 = v24 + 1;
      a2[2] = v32;
      v5 = v31;
      if ( v23 && v32 > v23
        || (v33 = *(unsigned __int16 **)(*a2 + 16LL), v33 == *(unsigned __int16 **)(*a2 + 8LL))
        || (v34 = *v33, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v33 + 1), v9 = v34, v34 == 0xFFFF) )
      {
        v9 = 0;
      }
    }
  }
LABEL_101:
  v35 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( v9 >= 0x30u )
    {
      if ( v9 < 0x3Au )
      {
        v36 = v9 - 48;
        goto LABEL_141;
      }
      v37 = 65296;
      if ( v9 >= 0xFF10u )
      {
        if ( v9 < 0xFF1Au )
LABEL_108:
          v36 = v9 - v37;
        else
          v36 = -1;
LABEL_141:
        if ( v36 != -1 )
          goto LABEL_148;
        goto LABEL_142;
      }
      v37 = 1632;
      if ( v9 >= 0x660u )
      {
        if ( v9 < 0x66Au )
          goto LABEL_108;
        v37 = 1776;
        if ( v9 >= 0x6F0u )
        {
          if ( v9 < 0x6FAu )
            goto LABEL_108;
          v37 = 2406;
          if ( v9 >= 0x966u )
          {
            if ( v9 < 0x970u )
              goto LABEL_108;
            v37 = 2534;
            if ( v9 >= 0x9E6u )
            {
              if ( v9 < 0x9F0u )
                goto LABEL_108;
              v37 = 2662;
              if ( v9 >= 0xA66u )
              {
                if ( v9 < 0xA70u )
                  goto LABEL_108;
                v37 = 2790;
                if ( v9 >= 0xAE6u )
                {
                  if ( v9 < 0xAF0u )
                    goto LABEL_108;
                  v37 = 2918;
                  if ( v9 >= 0xB66u )
                  {
                    if ( v9 < 0xB70u )
                      goto LABEL_108;
                    v37 = 3174;
                    if ( v9 >= 0xC66u )
                    {
                      if ( v9 < 0xC70u )
                        goto LABEL_108;
                      v37 = 3302;
                      if ( v9 >= 0xCE6u )
                      {
                        if ( v9 < 0xCF0u )
                          goto LABEL_108;
                        v37 = 3430;
                        if ( v9 >= 0xD66u )
                        {
                          if ( v9 < 0xD70u )
                            goto LABEL_108;
                          v37 = 3664;
                          if ( v9 >= 0xE50u )
                          {
                            if ( v9 < 0xE5Au )
                              goto LABEL_108;
                            v37 = 3792;
                            if ( v9 >= 0xED0u )
                            {
                              if ( v9 < 0xEDAu )
                                goto LABEL_108;
                              v37 = 3872;
                              if ( v9 >= 0xF20u )
                              {
                                if ( v9 < 0xF2Au )
                                  goto LABEL_108;
                                v37 = 4160;
                                if ( v9 >= 0x1040u )
                                {
                                  if ( v9 < 0x104Au )
                                    goto LABEL_108;
                                  v37 = 6112;
                                  if ( v9 >= 0x17E0u )
                                  {
                                    if ( v9 < 0x17EAu )
                                      goto LABEL_108;
                                    if ( (unsigned __int16)(v9 - 6160) <= 9u )
                                    {
                                      v36 = v9 - 6160;
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
    v38 = v9 - 97;
    if ( (unsigned int)v9 - 65 <= 0x19 || v38 <= 0x19 )
    {
      v39 = v9 - 32;
      if ( v38 > 0x19 )
        v39 = v9;
      v36 = v39 - 55;
    }
    else
    {
      v36 = -1;
    }
LABEL_148:
    if ( v36 == -1 || v36 >= v5 )
      break;
    v14 |= 8u;
    if ( v7 < v35 )
    {
      v40 = v36;
LABEL_155:
      v7 = v40 + v5 * v7;
      goto LABEL_156;
    }
    if ( v7 == v35 )
    {
      v40 = v36;
      if ( v36 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_155;
    }
    v14 |= 4u;
LABEL_156:
    v41 = a2[2] + 1LL;
    a2[2] = v41;
    if ( a2[1] && v41 > a2[1]
      || (v42 = *(unsigned __int16 **)(*a2 + 16LL), v42 == *(unsigned __int16 **)(*a2 + 8LL))
      || (v43 = *v42, *(_QWORD *)(*a2 + 16LL) = (uint64)(uintptr_t)(v42 + 1), v43 == 0xFFFF) )
    {
      v9 = 0;
    }
    else
    {
      v9 = v43;
    }
  }
  v44 = a2[2] - 1LL;
  a2[2] = v44;
  if ( (!a2[1] || v44 <= a2[1]) && (unsigned __int16)(v9 - 1) <= 0xFFFDu )
  {
    v45 = *(_QWORD *)(*a2 + 16LL);
    if ( v45 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v45 - 2;
  }
  if ( (v14 & 8) != 0 )
  {
    if ( sub_1402257B4(v14, v7) )
    {
      *errno_sr() = 34;
      if ( (v14 & 1) != 0 )
      {
        if ( (v14 & 2) != 0 )
        {
          if ( v52 )
            *(_DWORD *)(v51[0] + 936) &= ~2u;
          v48 = (_BYTE *)a2[3];
          if ( v48 && !a2[2] )
            *v48 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v52 )
            *(_DWORD *)(v51[0] + 936) &= ~2u;
          v49 = (_BYTE *)a2[3];
          if ( v49 && !a2[2] )
            *v49 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v7 = -1;
    }
    else if ( (v14 & 2) != 0 )
    {
      v7 = -(__int64)v7;
    }
    if ( v52 )
      *(_DWORD *)(v51[0] + 936) &= ~2u;
    v50 = (_BYTE *)a2[3];
    if ( v50 && !a2[2] )
      *v50 = 0;
    return v7;
  }
  if ( v53 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( v52 )
    *(_DWORD *)(v51[0] + 936) &= ~2u;
LABEL_172:
  v46 = (_BYTE *)a2[3];
  if ( v46 )
  {
    if ( !a2[2] )
      *v46 = 0;
  }
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014022CA88) ----------------------------------------------------
char            sub_14022CA88(__int64 a1, _BYTE *a2, _BYTE *a3, char *a4, __int64 a5)
{
  char v8; // r10
  _BYTE *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  bool v12; // zf
  FILE **v13; // rdi
  int v14; // eax

  if ( !a3 )
    return 1;
  v8 = *a4;
  v9 = a2;
  v10 = a1 - (_QWORD)a2;
  while ( v8 == v9[v10] || v8 == *v9 )
  {
    v11 = *(_QWORD *)(a5 + 16) + 1LL;
    v12 = *(_QWORD *)(a5 + 8) == 0;
    *(_QWORD *)(a5 + 16) = v11;
    if ( !v12 && v11 > *(_QWORD *)(a5 + 8)
      || (v13 = *(FILE ***)a5, v14 = getc_nolock(**(FILE ***)a5), v8 = v14, v14 == -1) )
    {
      v8 = 0;
    }
    else
    {
      v13[1] = (FILE *)((char *)v13[1] + 1);
    }
    ++v9;
    *a4 = v8;
    if ( (_BYTE *)(v9 - a2) == a3 )
      return 1;
  }
  return 0;
}


//----- (000000014022CB3C) ----------------------------------------------------
char            sub_14022CB3C(__int64 a1, _BYTE *a2, _BYTE *a3, char *a4, _QWORD *a5)
{
  char v5; // r10
  _BYTE *v6; // r11
  unsigned __int64 v7; // rax
  bool v8; // zf
  char *v9; // rax

  if ( !a3 )
    return 1;
  v5 = *a4;
  v6 = a2;
  while ( v5 == v6[a1 - (_QWORD)a2] || v5 == *v6 )
  {
    v7 = a5[2] + 1LL;
    v8 = a5[1] == 0;
    a5[2] = v7;
    if ( !v8 && v7 > a5[1] || (v9 = *(char **)(*a5 + 16LL), v9 == *(char **)(*a5 + 8LL)) )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v9;
      *(_QWORD *)(*a5 + 16LL) = (uint64)(uintptr_t)(v9 + 1);
    }
    ++v6;
    *a4 = v5;
    if ( (_BYTE *)(v6 - a2) == a3 )
      return 1;
  }
  return 0;
}


//----- (000000014022CBC0) ----------------------------------------------------
char            sub_14022CBC0(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4, __int64 a5)
{
  _WORD *v7; // rbx
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  FILE **v12; // rdi

  v7 = a2;
  v8 = 0;
  if ( !a3 )
    return 1;
  v9 = *a4;
  v10 = a1 - (_QWORD)a2;
  while ( v9 == *(_WORD *)((char *)v7 + v10) || v9 == *v7 )
  {
    v11 = *(_QWORD *)(a5 + 16) + 1LL;
    *(_QWORD *)(a5 + 16) = v11;
    if ( *(_QWORD *)(a5 + 8) && v11 > *(_QWORD *)(a5 + 8) )
    {
      v9 = 0;
    }
    else
    {
      v12 = *(FILE ***)a5;
      v9 = j__fgetwc_nolock(**(FILE ***)a5);
      if ( v9 == -1 )
        v9 = 0;
      else
        v12[1] = (FILE *)((char *)v12[1] + 1);
    }
    ++v8;
    *a4 = v9;
    ++v7;
    if ( v8 == a3 )
      return 1;
  }
  return 0;
}

// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);

//----- (000000014022CC78) ----------------------------------------------------
char            sub_14022CC78(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4, _QWORD *a5)
{
  __int64 v6; // r10
  __int16 v7; // ax
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int16 *v10; // rax
  __int16 v11; // r8

  v6 = 0;
  if ( !a3 )
    return 1;
  v7 = *a4;
  v8 = a1 - (_QWORD)a2;
  while ( v7 == *(_WORD *)((char *)a2 + v8) || v7 == *a2 )
  {
    v9 = a5[2] + 1LL;
    a5[2] = v9;
    if ( a5[1] && v9 > a5[1] )
    {
      v7 = 0;
    }
    else
    {
      v10 = *(__int16 **)(*a5 + 16LL);
      if ( v10 == *(__int16 **)(*a5 + 8LL) || (v11 = *v10, *(_QWORD *)(*a5 + 16LL) = (uint64)(uintptr_t)(v10 + 1), v7 = v11, v11 == -1) )
        v7 = 0;
    }
    ++v6;
    *a4 = v7;
    ++a2;
    if ( v6 == a3 )
      return 1;
  }
  return 0;
}


//----- (000000014022CD20) ----------------------------------------------------
char            sub_14022CD20(__int64 a1)
{
  struct __crt_locale_pointers *v2; // rcx
  char v3; // bl
  int v4; // eax
  _DWORD *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 56);
  v2 = *(struct __crt_locale_pointers **)(a1 + 112);
  v7[3] = (uint64)(uintptr_t)(&v8);
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_600(v2, (__int64)v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  *(_QWORD *)(a1 + 120) += 8LL;
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022CDC0) ----------------------------------------------------
char            sub_14022CDC0(__int64 a1)
{
  struct __crt_locale_pointers *v2; // rcx
  char v3; // bl
  int v4; // eax
  _DWORD *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 64);
  v2 = *(struct __crt_locale_pointers **)(a1 + 120);
  v7[3] = (uint64)(uintptr_t)(&v8);
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_604(v2, v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  *(_QWORD *)(a1 + 128) += 8LL;
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022CE64) ----------------------------------------------------
char            sub_14022CE64(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // bl
  int v4; // eax
  _DWORD *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 88);
  v7[3] = (uint64)(uintptr_t)(&v8);
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_602(v2, (__int64)v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  *(_QWORD *)(a1 + 96) += 8LL;
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022CF04) ----------------------------------------------------
char            sub_14022CF04(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // bl
  int v4; // eax
  _DWORD *v6; // rcx
  unsigned __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 96);
  v7[3] = (unsigned __int64)&v8;
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_606(v2, v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  *(_QWORD *)(a1 + 104) += 8LL;
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022CFA4) ----------------------------------------------------
char            sub_14022CFA4(__int64 a1)
{
  struct __crt_locale_pointers *v2; // rcx
  char v3; // bl
  int v4; // eax
  _QWORD *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 56);
  v2 = *(struct __crt_locale_pointers **)(a1 + 112);
  v7[3] = (uint64)(uintptr_t)(&v8);
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_601(v2, (__int64)v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  *(_QWORD *)(a1 + 120) += 8LL;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022D044) ----------------------------------------------------
char            sub_14022D044(__int64 a1)
{
  struct __crt_locale_pointers *v2; // rcx
  char v3; // bl
  int v4; // eax
  _QWORD *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 64);
  v2 = *(struct __crt_locale_pointers **)(a1 + 120);
  v7[3] = (uint64)(uintptr_t)(&v8);
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_605(v2, v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  *(_QWORD *)(a1 + 128) += 8LL;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022D0EC) ----------------------------------------------------
char            sub_14022D0EC(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // bl
  int v4; // eax
  _QWORD *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 88);
  v7[3] = (uint64)(uintptr_t)(&v8);
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_603(v2, (__int64)v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  *(_QWORD *)(a1 + 96) += 8LL;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022D18C) ----------------------------------------------------
char            sub_14022D18C(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // bl
  int v4; // eax
  _QWORD *v6; // rcx
  unsigned __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 1;
  v7[0] = a1 + 8;
  v7[1] = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 96);
  v7[3] = (unsigned __int64)&v8;
  v3 = 0;
  v9 = 0;
  v7[2] = 0;
  v4 = unknown_libname_607(v2, v7, &v9);
  if ( !v8 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  *(_QWORD *)(a1 + 104) += 8LL;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014022D22C) ----------------------------------------------------
char            sub_14022D22C(__int64 a1, int a2)
{
  _BYTE *v2; // rsi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  _BYTE *v10; // r12
  __int64 v11; // r15
  __int64 i; // rbp
  int v13; // r9d
  bool v14; // zf

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 50) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 120) += 8LL;
  v5 = *(_QWORD *)(a1 + 120);
  v2 = *(_BYTE **)(v5 - 8);
  if ( !v2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    v7 = v5 + 8;
    *(_QWORD *)(a1 + 120) = v7;
    v8 = *(unsigned int *)(v7 - 8);
  }
  if ( !v8 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( getc_nolock(*(FILE **)(a1 + 8)) != -1 )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *v2 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 56);
  v10 = v2;
  v11 = v8;
  if ( a2 && v8 != -1 )
    v11 = v8 - 1;
  for ( i = 0; !v9 || i != v9; ++i )
  {
    v13 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v13 == -1 )
      goto LABEL_34;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned int)(v13 - 9) <= 4 )
          goto LABEL_34;
        v14 = v13 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_34;
        v14 = ((unsigned __int8)(1 << (v13 & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v13 >> 3) + a1 + 76)) == 0;
      }
      if ( v14 )
      {
LABEL_34:
        if ( v13 != -1 )
        {
          --*(_QWORD *)(a1 + 16);
          sub_14020CE90(v13, *(_QWORD *)(a1 + 8));
        }
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 50) )
    {
      if ( !v11 )
      {
        if ( v8 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *v10++ = v13;
      --v11;
    }
  }
  if ( !i || !a2 && i != v9 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 50) && a2 )
    *v10 = 0;
  return 1;
}


//----- (000000014022D3C8) ----------------------------------------------------
char            sub_14022D3C8(__int64 a1, int a2)
{
  _BYTE *v2; // r11
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r12
  _BYTE *v9; // r15
  __int64 v10; // rbp
  __int64 i; // rdi
  unsigned __int8 *v12; // rbx
  unsigned __int64 v13; // rsi
  char v14; // al
  bool v15; // zf

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 58) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 128) += 8LL;
  v3 = *(_QWORD *)(a1 + 128);
  v2 = *(_BYTE **)(v3 - 8);
  if ( !v2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v6 = -1;
  }
  else
  {
    v5 = v3 + 8;
    *(_QWORD *)(a1 + 128) = v5;
    v6 = *(unsigned int *)(v5 - 8);
  }
  if ( !v6 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      if ( v7 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = v7 + 1;
LABEL_12:
      *v2 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = v2;
  v10 = v6;
  if ( a2 && v6 != -1 )
    v10 = v6 - 1;
  for ( i = 0; !v8 || i != v8; ++i )
  {
    v12 = *(unsigned __int8 **)(a1 + 24);
    if ( v12 == *(unsigned __int8 **)(a1 + 16) )
    {
      LODWORD(v13) = -1;
LABEL_38:
      if ( v12 != *(unsigned __int8 **)(a1 + 8) && (v12 != *(unsigned __int8 **)(a1 + 16) || (_DWORD)v13 != -1) )
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v12 - 1);
      break;
    }
    v13 = *v12++;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v12);
    if ( !a2 )
    {
      v14 = 1;
LABEL_29:
      v15 = v14 == 0;
      goto LABEL_30;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 8 )
      {
        v15 = ((unsigned __int8)(1 << (v13 & 7)) & *(_BYTE *)((v13 >> 3) + a1 + 84)) == 0;
        goto LABEL_30;
      }
      v14 = 0;
      goto LABEL_29;
    }
    if ( (unsigned int)(v13 - 9) <= 4 )
      goto LABEL_38;
    v15 = (_DWORD)v13 == 32;
LABEL_30:
    if ( v15 )
      goto LABEL_38;
    if ( !*(_BYTE *)(a1 + 58) )
    {
      if ( !v10 )
      {
        if ( v6 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *v9++ = v13;
      --v10;
    }
  }
  if ( !i || !a2 && i != v8 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 58) && a2 )
    *v9 = 0;
  return 1;
}


//----- (000000014022D584) ----------------------------------------------------
char            sub_14022D584(__int64 a1, int a2)
{
       struct DLGTEMPLATE *v2; // rsi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  struct CWnd *v10; // rbp
  __int64 i; // r15
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  unsigned __int16 v14; // r14
  bool v15; // zf
       struct DLGTEMPLATE *v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h]
  struct CWnd *v18; // [rsp+98h] [rbp+20h] BYREF

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 52) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 96) += 8LL;
  v5 = *(_QWORD *)(a1 + 96);
  v2 = *(     struct DLGTEMPLATE **)(v5 - 8);
  if ( !v2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    v7 = v5 + 8;
    *(_QWORD *)(a1 + 96) = v7;
    v8 = *(unsigned int *)(v7 - 8);
  }
  if ( !v8 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( (unsigned __int16)j__fgetwc_nolock(*(FILE **)(a1 + 8)) != 0xFFFF )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *(_BYTE *)v2 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 56);
  v10 = (struct CWnd *)v8;
  v17 = v9;
  v16 = v2;
  v18 = (struct CWnd *)v8;
  if ( a2 && v8 != -1 )
  {
    v10 = (struct CWnd *)(v8 - 1);
    v18 = (struct CWnd *)(v8 - 1);
  }
  for ( i = 0; !v9 || i != v9; ++i )
  {
    v12 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    v14 = v12;
    if ( v12 == 0xFFFF )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v12 - 9) <= 4u )
          goto LABEL_35;
        v15 = v12 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        v15 = !sub_140236014((void **)(a1 + 80), v12);
      }
      if ( v15 )
      {
LABEL_35:
        if ( v14 != 0xFFFF )
        {
          --*(_QWORD *)(a1 + 16);
          ungetwc_nolock(v14, *(_QWORD *)(a1 + 8), v13);
        }
LABEL_37:
        v9 = v17;
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 52) )
    {
      if ( !v10 )
      {
        if ( v8 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !unknown_libname_671_sr(a1, v2, v8, &v16, &v18, v14) )
        goto LABEL_37;
      v10 = v18;
    }
    v9 = v17;
  }
  if ( !i || !a2 && i != v9 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 52) && a2 )
    *(_BYTE *)v16 = 0;
  return 1;
}

// 14022D731: variable 'v13' is possibly undefined
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (000000014022D774) ----------------------------------------------------
char            sub_14022D774(__int64 a1, int a2)
{
       struct DLGTEMPLATE *v2; // rsi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  struct CWnd *v11; // r14
  __int64 i; // r15
  unsigned __int16 *v13; // rax
  unsigned __int16 v14; // bp
  bool v15; // zf
  __int64 v16; // rax
  struct CWnd *v17; // [rsp+70h] [rbp+8h] BYREF
       struct DLGTEMPLATE *v18; // [rsp+88h] [rbp+20h] BYREF

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 60) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 104) += 8LL;
  v5 = *(_QWORD *)(a1 + 104);
  v2 = *(     struct DLGTEMPLATE **)(v5 - 8);
  if ( !v2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    v7 = v5 + 8;
    *(_QWORD *)(a1 + 104) = v7;
    v8 = *(unsigned int *)(v7 - 8);
  }
  if ( !v8 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( v9 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = v9 + 2;
LABEL_12:
      *(_BYTE *)v2 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 64);
  v11 = (struct CWnd *)v8;
  v18 = v2;
  v17 = (struct CWnd *)v8;
  if ( a2 && v8 != -1 )
  {
    v11 = (struct CWnd *)(v8 - 1);
    v17 = (struct CWnd *)(v8 - 1);
  }
  for ( i = 0; !v10 || i != v10; ++i )
  {
    v13 = *(unsigned __int16 **)(a1 + 24);
    if ( v13 == *(unsigned __int16 **)(a1 + 16) )
    {
      v14 = -1;
LABEL_37:
      v16 = *(_QWORD *)(a1 + 24);
      if ( v16 != *(_QWORD *)(a1 + 8) && (v16 != *(_QWORD *)(a1 + 16) || v14 != 0xFFFF) )
        *(_QWORD *)(a1 + 24) = v16 - 2;
      break;
    }
    v14 = *v13;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 + 1);
    if ( v14 == 0xFFFF )
      goto LABEL_37;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v14 - 9) <= 4u )
          goto LABEL_37;
        v15 = v14 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_37;
        v15 = !sub_140236014((void **)(a1 + 88), v14);
      }
      if ( v15 )
        goto LABEL_37;
    }
    if ( !*(_BYTE *)(a1 + 60) )
    {
      if ( !v11 )
      {
        if ( v8 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !unknown_libname_673_sr(a1, v2, v8, &v18, &v17, v14) )
        break;
      v11 = v17;
    }
  }
  if ( !i || !a2 && i != v10 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 60) && a2 )
    *(_BYTE *)v18 = 0;
  return 1;
}


//----- (000000014022D954) ----------------------------------------------------
char            sub_14022D954(__int64 a1, int a2)
{
  _WORD *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 i; // r14
  int v12; // r9d
  bool v13; // zf
  __int16 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  _WORD *v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 50) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 120) += 8LL;
  v5 = *(_QWORD *)(a1 + 120);
  v4 = *(_WORD **)(v5 - 8);
  if ( !v4 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    v7 = v5 + 8;
    *(_QWORD *)(a1 + 120) = v7;
    v8 = *(unsigned int *)(v7 - 8);
  }
  if ( !v8 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( getc_nolock(*(FILE **)(a1 + 8)) != -1 )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *v4 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 56);
  v10 = v8;
  v16 = v4;
  v15 = v8;
  if ( a2 && v8 != -1 )
  {
    v10 = v8 - 1;
    v15 = v8 - 1;
  }
  for ( i = 0; !v9 || i != v9; ++i )
  {
    v12 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v12 == -1 )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned int)(v12 - 9) <= 4 )
          goto LABEL_35;
        v13 = v12 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        v13 = ((unsigned __int8)(1 << (v12 & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v12 >> 3) + a1 + 76)) == 0;
      }
      if ( v13 )
      {
LABEL_35:
        if ( v12 != -1 )
        {
          --*(_QWORD *)(a1 + 16);
          sub_14020CE90(v12, *(_QWORD *)(a1 + 8));
        }
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 50) )
    {
      if ( !v10 )
      {
        if ( v8 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      LOBYTE(v14) = v12;
      if ( !__crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_character(
              a1,
              (__int64)v4,
              v8,
              &v16,
              &v15,
              v14) )
        break;
      v10 = v15;
    }
  }
  if ( !i || !a2 && i != v9 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 50) && a2 )
    *v16 = 0;
  return 1;
}

// 14022DAB1: variable 'v14' is possibly undefined

//----- (000000014022DB28) ----------------------------------------------------
char            sub_14022DB28(__int64 a1, int a2)
{
  _WORD *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 i; // rbp
  unsigned __int8 *v13; // r9
  unsigned __int64 v14; // r11
  char v15; // al
  bool v16; // zf
  __int16 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  _WORD *v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 58) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 128) += 8LL;
  v5 = *(_QWORD *)(a1 + 128);
  v4 = *(_WORD **)(v5 - 8);
  if ( !v4 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    v7 = v5 + 8;
    *(_QWORD *)(a1 + 128) = v7;
    v8 = *(unsigned int *)(v7 - 8);
  }
  if ( !v8 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( v9 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = v9 + 1;
LABEL_12:
      *v4 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 64);
  v11 = v8;
  v19 = v4;
  v18 = v8;
  if ( a2 && v8 != -1 )
  {
    v11 = v8 - 1;
    v18 = v8 - 1;
  }
  for ( i = 0; !v10 || i != v10; ++i )
  {
    v13 = *(unsigned __int8 **)(a1 + 24);
    if ( v13 == *(unsigned __int8 **)(a1 + 16) )
    {
      LODWORD(v14) = -1;
LABEL_39:
      if ( v13 != *(unsigned __int8 **)(a1 + 8) && (v13 != *(unsigned __int8 **)(a1 + 16) || (_DWORD)v14 != -1) )
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13 - 1);
      break;
    }
    v14 = *v13++;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v13);
    if ( !a2 )
    {
      v15 = 1;
LABEL_29:
      v16 = v15 == 0;
      goto LABEL_30;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 8 )
      {
        v16 = ((unsigned __int8)(1 << (v14 & 7)) & *(_BYTE *)((v14 >> 3) + a1 + 84)) == 0;
        goto LABEL_30;
      }
      v15 = 0;
      goto LABEL_29;
    }
    if ( (unsigned int)(v14 - 9) <= 4 )
      goto LABEL_39;
    v16 = (_DWORD)v14 == 32;
LABEL_30:
    if ( v16 )
      goto LABEL_39;
    if ( !*(_BYTE *)(a1 + 58) )
    {
      if ( !v11 )
      {
        if ( v8 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      LOBYTE(v17) = v14;
      if ( !sub_1402366A0((_QWORD *)a1, (__int64)v4, v8, &v19, &v18, v17) )
        break;
      v11 = v18;
    }
  }
  if ( !i || !a2 && i != v10 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 58) && a2 )
    *v19 = 0;
  return 1;
}

// 14022DC98: variable 'v17' is possibly undefined

//----- (000000014022DD14) ----------------------------------------------------
char            sub_14022DD14(__int64 a1, int a2)
{
  unsigned __int16 *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // r12
  __int64 i; // r14
  unsigned __int16 v13; // ax
  __int64 v14; // r8
  unsigned __int16 v15; // bp
  bool v16; // zf
  __int64 v17; // rdx
  unsigned __int16 *v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+20h]

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 52) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 96) += 8LL;
  v5 = *(_QWORD *)(a1 + 96);
  v4 = *(unsigned __int16 **)(v5 - 8);
  if ( !v4 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    v7 = v5 + 8;
    *(_QWORD *)(a1 + 96) = v7;
    v8 = *(unsigned int *)(v7 - 8);
  }
  if ( !v8 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( (unsigned __int16)j__fgetwc_nolock(*(FILE **)(a1 + 8)) != 0xFFFF )
        ++*(_QWORD *)(a1 + 16);
      *v4 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 56);
  v10 = v4;
  v19 = v9;
  v11 = v8;
  v18 = v4;
  if ( a2 && v8 != -1 )
    v11 = v8 - 1;
  for ( i = 0; !v9 || i != v9; ++i )
  {
    v13 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    v15 = v13;
    if ( v13 == 0xFFFF )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v13 - 9) <= 4u )
          goto LABEL_35;
        v16 = v13 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        v16 = !sub_140236014((void **)(a1 + 80), v13);
      }
      if ( v16 )
      {
LABEL_35:
        if ( v15 != 0xFFFF )
        {
          v17 = *(_QWORD *)(a1 + 8);
          --*(_QWORD *)(a1 + 16);
          ungetwc_nolock(v15, v17, v14);
        }
        v9 = v19;
        v10 = v18;
        break;
      }
    }
    if ( *(_BYTE *)(a1 + 52) )
    {
      v10 = v18;
    }
    else
    {
      if ( !v11 )
      {
        if ( v8 != -1 )
          *v4 = 0;
        goto LABEL_13;
      }
      *v18 = v15;
      v10 = ++v18;
      --v11;
    }
    v9 = v19;
  }
  if ( !i || !a2 && i != v9 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 52) && a2 )
    *v10 = 0;
  return 1;
}

// 14022DE95: variable 'v14' is possibly undefined
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (000000014022DED8) ----------------------------------------------------
char            sub_14022DED8(__int64 a1, int a2)
{
  unsigned __int16 *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int16 *v11; // r13
  __int64 v12; // r12
  __int64 i; // r14
  unsigned __int16 *v14; // rax
  unsigned __int16 v15; // bp
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp+8h]

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 60) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 104) += 8LL;
  v5 = *(_QWORD *)(a1 + 104);
  v4 = *(unsigned __int16 **)(v5 - 8);
  if ( !v4 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    v7 = v5 + 8;
    *(_QWORD *)(a1 + 104) = v7;
    v8 = *(unsigned int *)(v7 - 8);
  }
  if ( !v8 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( v9 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = v9 + 2;
LABEL_12:
      *v4 = 0;
    }
LABEL_13:
    *errno_sr() = 12;
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 64);
  v11 = v4;
  v18 = v10;
  v12 = v8;
  if ( a2 && v8 != -1 )
    v12 = v8 - 1;
  for ( i = 0; !v10 || i != v10; ++i )
  {
    v14 = *(unsigned __int16 **)(a1 + 24);
    if ( v14 == *(unsigned __int16 **)(a1 + 16) )
    {
      v15 = -1;
LABEL_36:
      v17 = *(_QWORD *)(a1 + 24);
      if ( v17 != *(_QWORD *)(a1 + 8) && (v17 != *(_QWORD *)(a1 + 16) || v15 != 0xFFFF) )
        *(_QWORD *)(a1 + 24) = v17 - 2;
      v10 = v18;
      break;
    }
    v15 = *v14;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v14 + 1);
    if ( v15 == 0xFFFF )
      goto LABEL_36;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v15 - 9) <= 4u )
          goto LABEL_36;
        v16 = v15 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_36;
        v16 = !sub_140236014((void **)(a1 + 88), v15);
      }
      if ( v16 )
        goto LABEL_36;
    }
    if ( !*(_BYTE *)(a1 + 60) )
    {
      if ( !v12 )
      {
        if ( v8 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *v11++ = v15;
      --v12;
    }
    v10 = v18;
  }
  if ( !i || !a2 && i != v10 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 60) && a2 )
    *v11 = 0;
  return 1;
}


//----- (000000014022E0F4) ----------------------------------------------------
__int64            sub_14022E0F4(__int64 a1, struct __crt_locale_pointers *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  do
  {
    v4 = getc_nolock(*(FILE **)a1);
    v5 = v4;
    if ( v4 == -1 )
      break;
    ++*(_QWORD *)(a1 + 8);
  }
  while ( (unsigned int)sub_140236ED8((unsigned __int8)v4, 8, a2) );
  return v5;
}


//----- (000000014022E144) ----------------------------------------------------
__int64            sub_14022E144(FILE **a1)
{
  unsigned __int16 v2; // bx

  do
  {
    v2 = j__fgetwc_nolock(*a1);
    if ( v2 == 0xFFFF )
      break;
    a1[1] = (FILE *)((char *)a1[1] + 1);
  }
  while ( (unsigned int)sub_140256E00(v2, 8) );
  return v2;
}

// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);

//----- (000000014022E18C) ----------------------------------------------------
__int64            sub_14022E18C(__int64 a1, struct __crt_locale_pointers *a2)
{
  unsigned __int8 *v4; // rax
  unsigned int v5; // ebx

  while ( 1 )
  {
    v4 = *(unsigned __int8 **)(a1 + 16);
    if ( v4 == *(unsigned __int8 **)(a1 + 8) )
      break;
    v5 = *v4;
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v4 + 1);
    if ( !(unsigned int)sub_140236ED8(v5, 8, a2) )
      return v5;
  }
  return (unsigned int)-1;
}


//----- (000000014022E1E0) ----------------------------------------------------
__int64            sub_14022E1E0(__int64 a1)
{
  unsigned __int16 *v2; // rax
  unsigned __int16 v3; // bx

  while ( 1 )
  {
    v2 = *(unsigned __int16 **)(a1 + 16);
    if ( v2 == *(unsigned __int16 **)(a1 + 8) )
      break;
    v3 = *v2;
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2 + 1);
    if ( v3 == 0xFFFF || !(unsigned int)sub_140256E00(v3, 8) )
      return v3;
  }
  return (unsigned __int16)-1;
}


//----- (000000014022E28C) ----------------------------------------------------
char            sub_14022E28C(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx

  *(_QWORD *)(a1 + 120) += 8LL;
  v2 = *(_DWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E2C4) ----------------------------------------------------
char            sub_14022E2C4(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx

  *(_QWORD *)(a1 + 128) += 8LL;
  v2 = *(_DWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E300) ----------------------------------------------------
char            sub_14022E300(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx

  *(_QWORD *)(a1 + 96) += 8LL;
  v2 = *(_DWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E338) ----------------------------------------------------
char            sub_14022E338(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx

  *(_QWORD *)(a1 + 104) += 8LL;
  v2 = *(_DWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E370) ----------------------------------------------------
char            sub_14022E370(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx

  *(_QWORD *)(a1 + 120) += 8LL;
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E3A8) ----------------------------------------------------
char            sub_14022E3A8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx

  *(_QWORD *)(a1 + 128) += 8LL;
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E3E8) ----------------------------------------------------
char            sub_14022E3E8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx

  *(_QWORD *)(a1 + 96) += 8LL;
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E420) ----------------------------------------------------
char            sub_14022E420(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx

  *(_QWORD *)(a1 + 104) += 8LL;
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (000000014022E598) ----------------------------------------------------
__int64            sub_14022E598(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 52)), 0, 0x20u);
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
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 76)), 0, 0x20u);
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
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 84)), 0, 0x20u);
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
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, 0x20u);
  return a1;
}


//----- (000000014022E840) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
_WORD *           unknown_libname_635(_WORD *a1)
{
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, 0x20u);
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
  char v2; // bl
  __int64 v3; // rdx
  char v4; // cl
  unsigned __int64 v5; // rax
  __int64 *v6; // rdx

  v2 = 0;
  v3 = *a1;
  v4 = *(_BYTE *)a1[1];
  v5 = *(_QWORD *)(v3 + 16) - 1LL;
  *(_QWORD *)(v3 + 16) = v5;
  if ( (!*(_QWORD *)(v3 + 8) || v5 <= *(_QWORD *)(v3 + 8)) && (unsigned __int8)(v4 + 1) > 1u )
  {
    v6 = *(__int64 **)v3;
    if ( v4 != -1 )
    {
      --v6[1];
      sub_14020CE90(v4, *v6);
    }
  }
  *(_BYTE *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return v2;
}


//----- (000000014022EB44) ----------------------------------------------------
char            sub_14022EB44(__int64 *a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v4; // cl
  unsigned __int64 v5; // rax
  __int64 *v6; // rdx

  v2 = 0;
  v3 = *a1;
  v4 = *(_BYTE *)a1[1];
  v5 = *(_QWORD *)(v3 + 16) - 1LL;
  *(_QWORD *)(v3 + 16) = v5;
  if ( (!*(_QWORD *)(v3 + 8) || v5 <= *(_QWORD *)(v3 + 8)) && (unsigned __int8)(v4 + 1) > 1u )
  {
    v6 = *(__int64 **)v3;
    if ( v4 != -1 )
    {
      --v6[1];
      sub_14020CE90(v4, *v6);
    }
  }
  *(_BYTE *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return v2;
}


//----- (000000014022EC98) ----------------------------------------------------
char            sub_14022EC98(__int64 *a1)
{
  char v2; // bl
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx

  v2 = 0;
  v3 = (_QWORD *)*a1;
  v4 = *(unsigned __int16 *)a1[1];
  v5 = v3[2] - 1LL;
  v3[2] = v5;
  if ( (!v3[1] || v5 <= v3[1]) && (unsigned __int16)(v4 - 1) <= 0xFFFDu )
  {
    v6 = (_QWORD *)*v3;
    --v6[1];
    ungetwc_nolock(v4, *v6, 65533);
  }
  *(_WORD *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return v2;
}

// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (000000014022ED14) ----------------------------------------------------
char            _lambda_2869a9057330eafa474e853b0696fc23___operator_call(__int64 *a1)
{
  char v2; // bl
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx

  v2 = 0;
  v3 = (_QWORD *)*a1;
  v4 = *(unsigned __int16 *)a1[1];
  v5 = v3[2] - 1LL;
  v3[2] = v5;
  if ( (!v3[1] || v5 <= v3[1]) && (unsigned __int16)(v4 - 1) <= 0xFFFDu )
  {
    v6 = (_QWORD *)*v3;
    --v6[1];
    ungetwc_nolock(v4, *v6, 65533);
  }
  *(_WORD *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return v2;
}

// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (000000014022ED90) ----------------------------------------------------
char            _lambda_2869a9057330eafa474e853b0696fc23___operator_call_dup2(__int64 *a1)
{
  char v2; // bl
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx

  v2 = 0;
  v3 = (_QWORD *)*a1;
  v4 = *(unsigned __int16 *)a1[1];
  v5 = v3[2] - 1LL;
  v3[2] = v5;
  if ( (!v3[1] || v5 <= v3[1]) && (unsigned __int16)(v4 - 1) <= 0xFFFDu )
  {
    v6 = (_QWORD *)*v3;
    --v6[1];
    ungetwc_nolock(v4, *v6, 65533);
  }
  *(_WORD *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return v2;
}

// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (000000014022EE0C) ----------------------------------------------------
char            sub_14022EE0C(__int64 *a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v4; // cl
  unsigned __int64 v5; // rax
  __int64 *v6; // rdx

  v2 = 0;
  v3 = *a1;
  v4 = *(_BYTE *)a1[1];
  v5 = *(_QWORD *)(v3 + 16) - 1LL;
  *(_QWORD *)(v3 + 16) = v5;
  if ( (!*(_QWORD *)(v3 + 8) || v5 <= *(_QWORD *)(v3 + 8)) && (unsigned __int8)(v4 + 1) > 1u )
  {
    v6 = *(__int64 **)v3;
    if ( v4 != -1 )
    {
      --v6[1];
      sub_14020CE90(v4, *v6);
    }
  }
  *(_BYTE *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return v2;
}


//----- (000000014022EF60) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_647(__int64 a1)
{
  __int128 v2; // xmm0
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-39h] BYREF
  __int128 v8; // [rsp+38h] [rbp-31h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  int v12; // [rsp+60h] [rbp-9h]
  char v13; // [rsp+64h] [rbp-5h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+70h] [rbp+7h]
  char v16; // [rsp+74h] [rbp+Bh]
  int v17; // [rsp+78h] [rbp+Fh]
  void *Block; // [rsp+80h] [rbp+17h]
  _BYTE *v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]
  __int64 v22; // [rsp+A0h] [rbp+37h] BYREF
  _BYTE v23[24]; // [rsp+A8h] [rbp+3Fh] BYREF

  sub_140213644((_LocaleUpdate *)&v22, **(struct __crt_locale_pointers *     **)a1);
  v2 = **(unsigned __int64 **)(a1 + 8);
  v3 = **(_QWORD **)(a1 + 32);
  v4 = **(_QWORD **)(a1 + 24);
  v7 = **(_QWORD **)(a1 + 16);
  v9 = v7;
  v8 = v2;
  v10 = v4;
  v11 = 0;
  Block = nullptr;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = v23;
  v20 = v3;
  v21 = 0;
  v5 = sub_1402339A4((__int64)&v7);
  free_base(Block);
  Block = nullptr;
  if ( v23[16] )
    *(_DWORD *)(v22 + 936) &= ~2u;
  return v5;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014022F104) ----------------------------------------------------
__int64            _lambda_f3caf1ecae5fe01a9a1a6239afa44510___operator_call(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-99h] BYREF
  __int128 v7; // [rsp+28h] [rbp-79h]
  __int64 v8; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v10; // [rsp+58h] [rbp-49h] BYREF
  __int128 v11; // [rsp+60h] [rbp-41h]
  __int64 v12; // [rsp+70h] [rbp-31h]
  __int64 v13; // [rsp+78h] [rbp-29h]
  int v14; // [rsp+80h] [rbp-21h]
  int v15; // [rsp+84h] [rbp-1Dh]
  __int16 v16; // [rsp+88h] [rbp-19h]
  char v17; // [rsp+8Ah] [rbp-17h]
  __int64 v18; // [rsp+90h] [rbp-11h]
  int v19; // [rsp+98h] [rbp-9h]
  char v20; // [rsp+9Ch] [rbp-5h]
  int v21; // [rsp+A0h] [rbp-1h]
  _WORD v22[18]; // [rsp+A4h] [rbp+3h] BYREF
  _BYTE *v23; // [rsp+C8h] [rbp+27h]
  __int64 v24; // [rsp+D0h] [rbp+2Fh]
  __int64 v25; // [rsp+D8h] [rbp+37h]
  __int64 v26; // [rsp+E8h] [rbp+47h]

  sub_140213644((_LocaleUpdate *)&v8, **(struct __crt_locale_pointers *     **)a1);
  v2 = *(__int64 **)(a1 + 32);
  v7 = **(unsigned __int64 **)(a1 + 8);
  v3 = *v2;
  v4 = **(_QWORD **)(a1 + 24);
  v10 = **(_QWORD **)(a1 + 16);
  v12 = v10;
  v13 = v4;
  v11 = v7;
  v14 = 0;
  sub_1401FCD30((void *)(uintptr_t)(v22), 0, 0x20u);
  v15 = 0;
  v23 = v9;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v24 = v3;
  v25 = 0;
  __int64 sr_result = sub_1402337F8((__int64)&v10); /* 0x14022F1B9: the result stays in rax */
  if ( v9[16] )
    *(_DWORD *)(v8 + 936) &= ~2u;
  return sr_result; /* 0x14022F1B9: the call's result stays in rax */
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014022F1F4) ----------------------------------------------------
void            sub_14022F1F4(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int *a3)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // r13d
  unsigned __int8 *v6; // r9
  unsigned int v7; // r11d
  unsigned __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  __int64 v22; // r11
  unsigned int v23; // r10d
  unsigned __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rbx
  unsigned __int64 v30; // r8
  __m128i *v31; // rcx
  unsigned int v32; // r10d
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  bool v35; // cf
  __m128i *v36; // rdx
  unsigned int v37; // edi
  __m128i *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // r10
  __int64 v41; // r12
  unsigned __int64 v42; // rbx
  unsigned int v43; // r8d
  __int64 v44; // rsi
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  __m128i *v50; // rcx
  int v51; // r13d
  unsigned int v52; // eax
  unsigned int v53; // r10d
  unsigned __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  __int64 v60; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v61; // [rsp+20h] [rbp-E0h]
  unsigned int v62; // [rsp+24h] [rbp-DCh]
  int v63; // [rsp+28h] [rbp-D8h]
  unsigned int v64; // [rsp+2Ch] [rbp-D4h]
  __m128i *v65; // [rsp+30h] [rbp-D0h]
  __m128i *v66; // [rsp+38h] [rbp-C8h]
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  __m128i v68; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v69; // [rsp+210h] [rbp+110h]
  __m128i Src[28]; // [rsp+214h] [rbp+114h] BYREF
  __int64 v71; // [rsp+3E0h] [rbp+2E0h]

  if ( a1 != a2 )
  {
    LODWORD(v3) = 0;
    v5 = 0;
    v6 = a1;
    do
    {
      if ( v5 == 9 )
      {
        v7 = *a3;
        if ( *a3 )
        {
          LODWORD(v8) = 0;
          v9 = 0;
          do
          {
            v10 = (unsigned int)v8 + 1000000000LL * a3[v9 + 1];
            a3[v9 + 1] = v10;
            v8 = HIDWORD(v10);
            v9 = (unsigned int)(v9 + 1);
          }
          while ( (_DWORD)v9 != v7 );
          if ( HIDWORD(v10) )
          {
            if ( *a3 >= 0x73 )
              *a3 = 0;
            else
              a3[++*a3] = HIDWORD(v10);
          }
        }
        if ( (_DWORD)v3 )
        {
          v11 = *a3;
          v12 = 0;
          if ( (_DWORD)v11 )
          {
            do
            {
              v13 = (unsigned int)v3 + (unsigned __int64)a3[v12 + 1];
              a3[v12 + 1] = v13;
              v11 = *a3;
              v12 = (unsigned int)(v12 + 1);
              v3 = HIDWORD(v13);
            }
            while ( (_DWORD)v12 != (_DWORD)v11 );
          }
          if ( (_DWORD)v3 )
          {
            if ( (unsigned int)v11 >= 0x73 )
            {
              *a3 = 0;
            }
            else
            {
              a3[v11 + 1] = v3;
              ++*a3;
            }
          }
        }
        LODWORD(v3) = 0;
        v5 = 0;
      }
      v14 = *v6;
      ++v5;
      ++v6;
      LODWORD(v3) = v14 + 10 * v3;
    }
    while ( v6 != a2 );
    if ( v5 )
    {
      v15 = v5 / 0xA;
      v64 = v5 / 0xA;
      v16 = v5 / 0xA;
      v62 = v5 / 0xA;
      if ( v5 / 0xA )
      {
        while ( 1 )
        {
          v17 = v16;
          if ( v16 > 0x26 )
            v17 = 38;
          v63 = v17;
          v18 = (unsigned int)(v17 - 1);
          v19 = (unsigned int)v18;
          v20 = (unsigned __int8)byte_1402855F3[4 * v18];
          v21 = 4LL * (unsigned __int8)byte_1402855F2[4 * v18];
          v69 = v20 + (unsigned __int8)byte_1402855F2[4 * v18];
          sub_1401FCD30((void *)(uintptr_t)(Src), 0, v21);
          sub_1401FC920(
            (__m128i *)((char *)Src + v21),
            (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_1402855F0[2 * v19]),
            4 * v20);
          v22 = v69;
          if ( v69 <= 1 )
          {
            if ( !SR_VEC_LANES(128, Src[0], i32)[0] )
              goto LABEL_26;
            if ( SR_VEC_LANES(128, Src[0], i32)[0] == 1 )
              goto LABEL_82;
            v23 = *a3;
            if ( !*a3 )
              goto LABEL_82;
            LODWORD(v24) = 0;
            v25 = SR_VEC_LANES(128, Src[0], u32)[0];
            v26 = 0;
            do
            {
              v27 = (unsigned int)v24 + v25 * a3[v26 + 1];
              a3[v26 + 1] = v27;
              v24 = HIDWORD(v27);
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (_DWORD)v26 != v23 );
            goto LABEL_31;
          }
          if ( *a3 > 1 )
          {
            v35 = v69 < *a3;
            v36 = Src;
            v37 = *a3;
            v38 = Src;
            if ( v69 >= *a3 )
              v36 = (__m128i *)(a3 + 1);
            else
              v37 = v69;
            if ( v69 < *a3 )
              v38 = (__m128i *)(a3 + 1);
            v66 = v36;
            v65 = v38;
            v61 = v37;
            if ( v35 )
              LODWORD(v22) = *a3;
            v39 = 0;
            v40 = 0;
            v67 = 0;
            if ( v37 )
            {
              while ( 1 )
              {
                v41 = SR_VEC_PTR_LANES(128, v36, u32)[v40];
                if ( (_DWORD)v41 )
                {
                  LODWORD(v42) = 0;
                  v43 = v40;
                  if ( (_DWORD)v22 )
                  {
                    do
                    {
                      if ( v43 == 115 )
                        break;
                      v44 = v43;
                      if ( v43 == v39 )
                      {
                        SR_VEC_LANES(128, v68, i32)[v43] = 0;
                        v67 = v43 + 1;
                      }
                      v45 = v43 - (unsigned int)v40;
                      ++v43;
                      v46 = (unsigned int)v42 + SR_VEC_LANES(128, v68, u32)[v44] + v41 * SR_VEC_PTR_LANES(128, v65, u32)[v45];
                      SR_VEC_LANES(128, v68, i32)[v44] = v46;
                      v42 = HIDWORD(v46);
                      v39 = v67;
                    }
                    while ( v43 - (_DWORD)v40 != (_DWORD)v22 );
                    if ( (_DWORD)v42 )
                    {
                      while ( v43 != 115 )
                      {
                        v47 = v43;
                        if ( v43 == v39 )
                        {
                          SR_VEC_LANES(128, v68, i32)[v43] = 0;
                          v67 = v43 + 1;
                        }
                        ++v43;
                        v48 = (unsigned int)v42 + (unsigned __int64)SR_VEC_LANES(128, v68, u32)[v47];
                        SR_VEC_LANES(128, v68, i32)[v47] = v48;
                        v39 = v67;
                        LODWORD(v42) = HIDWORD(v48);
                        if ( !HIDWORD(v48) )
                          goto LABEL_70;
                      }
LABEL_95:
                      *a3 = 0;
                      goto LABEL_96;
                    }
LABEL_70:
                    v37 = v61;
                  }
                  if ( v43 == 115 )
                    goto LABEL_95;
                  v36 = v66;
                }
                else if ( (_DWORD)v40 == v39 )
                {
                  SR_VEC_LANES(128, v68, i32)[v40] = 0;
                  v39 = v40 + 1;
                  v67 = v40 + 1;
                }
                v40 = (unsigned int)(v40 + 1);
                if ( (_DWORD)v40 == v37 )
                {
                  v16 = v62;
                  break;
                }
              }
            }
            v49 = 4LL * v39;
            *a3 = v39;
            if ( !v49 )
              goto LABEL_82;
            if ( a3 == (unsigned int *)-4LL )
            {
              *errno_sr() = 22;
            }
            else
            {
              v50 = (__m128i *)(a3 + 1);
              if ( v49 <= 0x1CC )
              {
                sub_1401FC920(v50, &v68, v49);
                goto LABEL_82;
              }
              sub_1401FCD30((void *)(uintptr_t)(v50), 0, 0x1CCu);
              *errno_sr() = 34;
            }
            sub_14024CF6C();
            goto LABEL_82;
          }
          v29 = a3[1];
          v30 = 4LL * v69;
          *a3 = v69;
          if ( 4 * v22 )
          {
            if ( a3 == (unsigned int *)-4LL )
            {
              *errno_sr() = 22;
LABEL_42:
              sub_14024CF6C();
              goto LABEL_43;
            }
            v31 = (__m128i *)(a3 + 1);
            if ( v30 > 0x1CC )
            {
              sub_1401FCD30((void *)(uintptr_t)(v31), 0, 0x1CCu);
              *errno_sr() = 34;
              goto LABEL_42;
            }
            sub_1401FC920(v31, Src, v30);
          }
LABEL_43:
          if ( !(_DWORD)v29 )
          {
LABEL_26:
            *a3 = 0;
LABEL_82:
            v28 = 1;
            goto LABEL_83;
          }
          if ( (_DWORD)v29 == 1 )
            goto LABEL_82;
          v32 = *a3;
          if ( !*a3 )
            goto LABEL_82;
          LODWORD(v24) = 0;
          v33 = 0;
          do
          {
            v34 = (unsigned int)v24 + v29 * a3[v33 + 1];
            a3[v33 + 1] = v34;
            v24 = HIDWORD(v34);
            v33 = (unsigned int)(v33 + 1);
          }
          while ( (_DWORD)v33 != v32 );
LABEL_31:
          if ( !(_DWORD)v24 )
            goto LABEL_82;
          if ( *a3 < 0x73 )
          {
            a3[++*a3] = v24;
            goto LABEL_82;
          }
          *a3 = 0;
          v28 = 0;
LABEL_83:
          if ( !v28 )
            goto LABEL_95;
          v16 -= v63;
          v62 = v16;
          if ( !v16 )
          {
            v15 = v64;
            break;
          }
        }
      }
      v51 = v5 - 10 * v15;
      if ( v51 )
      {
        v52 = dword_140285688[v51 - 1];
        if ( !v52 )
          goto LABEL_95;
        if ( v52 != 1 )
        {
          v53 = *a3;
          if ( *a3 )
          {
            LODWORD(v54) = 0;
            v55 = 0;
            do
            {
              v56 = (unsigned int)v54 + v52 * (unsigned __int64)a3[v55 + 1];
              a3[v55 + 1] = v56;
              v54 = HIDWORD(v56);
              v55 = (unsigned int)(v55 + 1);
            }
            while ( (_DWORD)v55 != v53 );
            if ( HIDWORD(v56) )
            {
              if ( *a3 >= 0x73 )
                goto LABEL_95;
              a3[++*a3] = HIDWORD(v56);
            }
          }
        }
      }
LABEL_96:
      if ( (_DWORD)v3 )
      {
        v57 = *a3;
        v58 = 0;
        if ( (_DWORD)v57 )
        {
          do
          {
            v59 = (unsigned int)v3 + (unsigned __int64)a3[v58 + 1];
            a3[v58 + 1] = v59;
            v58 = (unsigned int)(v58 + 1);
            v57 = *a3;
            LODWORD(v3) = HIDWORD(v59);
          }
          while ( (_DWORD)v58 != (_DWORD)v57 );
        }
        if ( (_DWORD)v3 )
        {
          if ( (unsigned int)v57 >= 0x73 )
          {
            *a3 = 0;
          }
          else
          {
            a3[v57 + 1] = v3;
            ++*a3;
          }
        }
      }
    }
  }
}

// 1402855F0: using guessed type __int16 word_1402855F0[];
// 140285688: using guessed type int dword_140285688[10];

//----- (000000014022F790) ----------------------------------------------------
char            sub_14022F790(__crt_strtox *this, struct __crt_strtox__big_integer *a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _BYTE v8[468]; // [rsp+24h] [rbp-1D4h] BYREF

  LODWORD(v2) = (_DWORD)a2;
  if ( !(_DWORD)a2 )
    return 1;
  v3 = *(unsigned int *)this;
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    do
    {
      v5 = v4++;
      v6 = (unsigned int)v2 + (unsigned __int64)*((unsigned int *)this + v5 + 1);
      *((_DWORD *)this + v5 + 1) = v6;
      v3 = *(unsigned int *)this;
      v2 = HIDWORD(v6);
    }
    while ( v4 != (_DWORD)v3 );
  }
  if ( !(_DWORD)v2 )
    return 1;
  if ( (unsigned int)v3 < 0x73 )
  {
    *((_DWORD *)this + v3 + 1) = v2;
    ++*(_DWORD *)this;
    return 1;
  }
  *(_DWORD *)this = 0;
  sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)v8, 0);
  return 0;
}


//----- (000000014022F860) ----------------------------------------------------
char            sub_14022F860(__int64 a1)
{
  _BYTE *v2; // rax
  int v4; // eax
  unsigned __int8 *v5; // rcx
  int v6; // eax
  char v7; // di
  _BYTE *v8; // rax
  _BYTE *v9; // rcx
  _BYTE *v10; // rax

  if ( *(_DWORD *)(a1 + 16) )
    return 0;
  v2 = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  if ( !*v2 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    return 0;
  }
  v4 = sub_1402577B4((unsigned __int8)*v2);
  v5 = *(unsigned __int8 **)(a1 + 8);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 20) = 2;
    v6 = sub_1402577B4(*v5);
    v7 = 1;
    while ( v6 )
      v6 = sub_1402577B4(*(unsigned __int8 *)++*(_QWORD *)(a1 + 8));
    return v7;
  }
  if ( *v5 != 37 || (v8 = v5 + 1, v5[1] == 37) )
  {
    *(_DWORD *)(a1 + 20) = 3;
    v7 = 1;
    *(_BYTE *)(a1 + 24) = *v5;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&v5[(*v5 == 37) + 1]);
    if ( (sub_140256DC0()[*(unsigned __int8 *)(a1 + 24)] & 0x8000u) != 0 )
    {
      v10 = *(_BYTE **)(a1 + 8);
      if ( *v10 )
      {
        *(_BYTE *)(a1 + 25) = *v10;
        *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v10 + 1);
      }
      else
      {
        *(_QWORD *)(a1 + 16) = 42;
        v7 = 0;
        *(_WORD *)(a1 + 24) = 0;
        *(_BYTE *)(a1 + 26) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        *(_DWORD *)(a1 + 40) = 0;
        *(_BYTE *)(a1 + 44) = 0;
        *(_DWORD *)(a1 + 48) = 0;
      }
    }
    return v7;
  }
  *(_DWORD *)(a1 + 20) = 4;
  v7 = 1;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v8);
  if ( *v8 == 42 )
  {
    *(_BYTE *)(a1 + 26) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v5 + 2);
  }
  if ( !sub_1402352B4(a1) )
    return 0;
  sub_1402355CC(a1);
  v9 = *(_BYTE **)(a1 + 8);
  if ( *v9 == 119 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v9 + 1);
LABEL_18:
    *(_BYTE *)(a1 + 44) = 1;
    goto LABEL_19;
  }
  if ( ((*v9 - 67) & 0xEF) == 0 )
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
  return v7;
}

// 140285820: using guessed type _BYTE byte_140285820[120];

//----- (000000014022FA28) ----------------------------------------------------
char            sub_14022FA28(__int64 a1)
{
  unsigned __int16 *v2; // rax
  int v4; // eax
  unsigned __int16 *v5; // rcx
  unsigned __int16 i; // cx
  _WORD *v7; // rdx
  _WORD *v8; // rcx
  bool v9; // al
  __int64 v10; // rax

  if ( *(_DWORD *)(a1 + 16) )
    return 0;
  v2 = *(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  if ( !*v2 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    return 0;
  }
  v4 = sub_140256E00(*v2, 8);
  v5 = *(unsigned __int16 **)(a1 + 8);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 20) = 2;
    for ( i = *v5; (unsigned int)sub_140256E00(i, 8); i = **(_WORD **)(a1 + 8) )
      *(_QWORD *)(a1 + 8) += 2LL;
    return 1;
  }
  if ( *v5 != 37 || (v7 = v5 + 1, v5[1] == 37) )
  {
    *(_DWORD *)(a1 + 20) = 3;
    *(_WORD *)(a1 + 24) = *v5;
    v10 = 2;
    if ( *v5 != 37 )
      v10 = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&v5[v10]);
    return 1;
  }
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v7);
  *(_DWORD *)(a1 + 20) = 4;
  if ( *v7 == 42 )
  {
    *(_BYTE *)(a1 + 28) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v5 + 2);
  }
  if ( !sub_14023535C(a1) )
    return 0;
  sub_140235704(a1);
  v8 = *(_WORD **)(a1 + 8);
  if ( *v8 == 119 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v8 + 1);
LABEL_22:
    *(_BYTE *)(a1 + 44) = 1;
    goto LABEL_23;
  }
  if ( ((*v8 - 67) & 0xFFEF) != 0 )
  {
    if ( *(_DWORD *)(a1 + 40) == 11 )
      goto LABEL_22;
    v9 = (*(_BYTE *)a1 & 2) != 0;
  }
  else
  {
    v9 = 0;
  }
  if ( v9 )
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

// 140285820: using guessed type _BYTE byte_140285820[120];

//----- (000000014022FBC0) ----------------------------------------------------
__int64            sub_14022FBC0(__crt_strtox__floating_point_value *this)
{
  if ( !*((_BYTE *)this + 8) )
  {
    sub_14024CFBC();
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
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return *(_QWORD *)this;
}

// 14022FC2F: control flows out of bounds to 14022FC34

//----- (000000014022FC68) ----------------------------------------------------
__int64            sub_14022FC68(unsigned __int64 a1, int a2, unsigned __int8 a3, char a4, __int64 a5)
{
  int v7; // r11d
  unsigned __int64 v8; // rbx
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 **v12; // r15
  char v13; // dl
  int v14; // r14d
  int v15; // edi
  int v16; // r8d
  int v17; // r9d
  int v18; // r13d
  __int64 v19; // r12
  bool v20; // r15
  int v21; // eax
  unsigned __int8 v22; // al
  unsigned __int64 *v23; // rcx
  char v25; // cl
  unsigned int v26; // r14d
  __int64 v27; // r12
  bool v28; // r15
  int v29; // eax
  unsigned __int8 v30; // al
  unsigned __int64 *v31; // r8
  unsigned __int64 *v32; // r9
  __int64 v33; // r8
  int v34; // [rsp+70h] [rbp+8h]

  v7 = a2;
  v8 = a1;
  if ( a1 <= 0xFFFFFFFF )
  {
    v9 = !_BitScanReverse((unsigned int *)&a1, a1);
    if ( v9 )
      v11 = 0;
    else
      v11 = a1 + 1;
  }
  else
  {
    v9 = !_BitScanReverse((unsigned int *)&a1, HIDWORD(a1));
    if ( v9 )
      v10 = 0;
    else
      v10 = a1 + 1;
    v11 = v10 + 32;
  }
  v12 = (unsigned __int64 **)a5;
  v13 = *(_BYTE *)(a5 + 8);
  v14 = (v13 != 0 ? 53 : 24) - v11;
  v15 = v7 - v14;
  v16 = v13 != 0 ? 1023 : 127;
  if ( v7 - v14 > v16 )
    goto LABEL_63;
  if ( v15 < (v13 != 0 ? -1022 : -126) )
  {
    v17 = v16 + v7 - 1;
    v15 = -v16;
    v34 = v17;
    if ( v17 < 0 )
    {
      v18 = -v17;
      if ( (unsigned int)-v17 >= 0x40 )
      {
        v8 = 0;
LABEL_33:
        if ( !v8 )
        {
          v23 = *v12;
          if ( v13 )
            *v23 = (unsigned __int64)a3 << 63;
          else
            *(_DWORD *)v23 = a3 << 31;
          return 2;
        }
        if ( v8 > (-(__int64)(v13 != 0) & 0xFFFFFFF800000uLL) + 0x7FFFFF )
          v15 = v7 - v17 - v14 - 1;
        goto LABEL_70;
      }
      v19 = v8 & (1LL << ((unsigned __int8)v18 - 1));
      v20 = !a4 || (((1LL << ((unsigned __int8)v18 - 1)) - 1) & v8) != 0;
      if ( !v19 && !v20 )
        goto LABEL_31;
      v21 = fegetround_0();
      if ( v21 )
      {
        if ( v21 != 256 )
        {
          v17 = v34;
          v7 = a2;
          if ( v21 == 512 )
          {
            v22 = a3 ^ 1;
LABEL_32:
            v12 = (unsigned __int64 **)a5;
            v8 = v22 + (v8 >> v18);
            v13 = *(_BYTE *)(a5 + 8);
            goto LABEL_33;
          }
LABEL_31:
          v22 = 0;
          goto LABEL_32;
        }
        v22 = a3;
      }
      else
      {
        if ( !v19 || !v20 && (v8 & (1LL << v18)) == 0 )
        {
          v17 = v34;
          v7 = a2;
          goto LABEL_31;
        }
        v22 = 1;
      }
      v17 = v34;
      v7 = a2;
      goto LABEL_32;
    }
    v25 = v16 + v7 - 1;
    goto LABEL_69;
  }
  if ( v14 >= 0 )
  {
    if ( v14 > 0 )
    {
      v25 = (v13 != 0 ? 53 : 24) - v11;
LABEL_69:
      v8 <<= v25;
    }
LABEL_70:
    v32 = *v12;
    v33 = v8 & ((-(__int64)(v13 != 0) & 0xFFFFFFF800000LL) + 0x7FFFFF);
    if ( v13 )
      *v32 = v33 | ((((unsigned __int64)a3 << 11) | ((_WORD)v15 + 1023) & 0x7FF) << 52);
    else
      *(_DWORD *)v32 = v33 & 0x7FFFFF | (a3 << 31) | ((v15 + 127) << 23) & 0x7F800000;
    return 0;
  }
  v26 = v11 - (*(_BYTE *)(a5 + 8) != 0 ? 53 : 24);
  if ( v26 < 0x40 )
  {
    v27 = v8 & (1LL << ((unsigned __int8)v26 - 1));
    v28 = !a4 || (((1LL << ((unsigned __int8)v26 - 1)) - 1) & v8) != 0;
    if ( v27 || v28 )
    {
      v29 = fegetround_0();
      if ( v29 )
      {
        if ( v29 == 256 )
        {
          v30 = a3;
          goto LABEL_60;
        }
        if ( v29 == 512 )
        {
          v30 = a3 ^ 1;
LABEL_60:
          v12 = (unsigned __int64 **)a5;
          v8 = v30 + (v8 >> v26);
          v13 = *(_BYTE *)(a5 + 8);
          goto LABEL_61;
        }
      }
      else if ( v27 && (v28 || (v8 & (1LL << v26)) != 0) )
      {
        v30 = 1;
        goto LABEL_60;
      }
    }
    v30 = 0;
    goto LABEL_60;
  }
  v8 = 0;
LABEL_61:
  if ( v8 <= (-(__int64)(v13 != 0) & 0x1FFFFFFF000000uLL) + 0xFFFFFF )
    goto LABEL_70;
  v8 >>= 1;
  if ( ++v15 <= (v13 != 0 ? 1023 : 127) )
    goto LABEL_70;
LABEL_63:
  v31 = *v12;
  if ( v13 )
    *v31 = ((unsigned __int64)a3 << 63) | 0x7FF0000000000000LL;
  else
    *(_DWORD *)v31 = (a3 << 31) | 0x7F800000;
  return 3;
}


//----- (0000000140230010) ----------------------------------------------------
__int64            sub_140230010(_DWORD *a1, unsigned int a2, unsigned __int8 a3, char a4, __int64 a5)
{
  unsigned int v8; // r10d
  int v9; // edx
  __int64 v10; // rax
  char v11; // r9
  unsigned __int64 v12; // rcx
  char v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rbx
  int v18; // r14d
  int v19; // r8d
  unsigned __int64 v20; // rbx
  int v21; // edi
  char v22; // r8
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rdi
  char v26; // al
  int v27; // ecx
  char v28; // r9

  v8 = 0;
  v9 = *(_BYTE *)(a5 + 8) != 0 ? 52 : 23;
  if ( a2 > 0x40 )
  {
    v13 = a2;
    v14 = a2 >> 5;
    v15 = (unsigned int)(v14 - 2);
    v16 = (unsigned int)a1[v15 + 1];
    v17 = (unsigned int)a1[(unsigned int)(v14 - 1) + 1];
    v18 = 32 * (v14 - 2);
    v19 = v13 & 0x1F;
    if ( v19 )
    {
      v23 = v9 + v19 + v18;
      v24 = (unsigned int)a1[v14 + 1];
      v25 = (unsigned int)((1 << v19) - 1);
      v20 = ((unsigned __int64)((unsigned int)v16 & ~((1 << v19) - 1)) >> v19)
          + ((v25 & v24) << (64 - (unsigned __int8)v19))
          + (v17 << (64 - (unsigned __int8)v19 - 32));
      if ( a4 || (v26 = 1, ((unsigned int)v16 & (unsigned int)v25) != 0) )
        v26 = 0;
      v27 = 0;
      if ( (_DWORD)v15 )
      {
        do
        {
          v28 = 0;
          if ( !a1[v27 + 1] )
            v28 = v26;
          ++v27;
          v26 = v28;
        }
        while ( v27 != (_DWORD)v15 );
      }
      v11 = v26;
      v9 = v23;
    }
    else
    {
      v9 += v18;
      v20 = v16 + (v17 << 32);
      v11 = a4 ^ 1;
      v21 = 0;
      if ( (_DWORD)v15 )
      {
        do
        {
          v22 = 0;
          if ( !a1[v21 + 1] )
            v22 = v11;
          ++v21;
          v11 = v22;
        }
        while ( v21 != (_DWORD)v15 );
      }
    }
    v12 = v20;
  }
  else
  {
    if ( *a1 )
      v10 = (unsigned int)a1[1];
    else
      v10 = 0;
    if ( *a1 > 1u )
      v8 = a1[2];
    v11 = a4 ^ 1;
    v12 = v10 + ((unsigned __int64)v8 << 32);
  }
  return sub_14022FC68(v12, v9, a3, v11, a5);
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
// 140231EA2: variable 'v213' is possibly undefined
// 1402855F0: using guessed type __int16 word_1402855F0[];
// 140285688: using guessed type int dword_140285688[10];

//----- (0000000140231FC0) ----------------------------------------------------
__int64            sub_140231FC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int8 *v5; // r8
  __int64 v6; // r11
  int v7; // r10d
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  char i; // r9
  char v11; // al

  v3 = 0;
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 4) + a1 + 8;
  v7 = *(_DWORD *)a1 + (*(_BYTE *)(a2 + 8) != 0 ? 52 : 23);
  if ( a1 + 8 != v6 )
  {
    v8 = (-(__int64)(*(_BYTE *)(a2 + 8) != 0) & 0x1FFFFFFF000000LL) + 0xFFFFFF;
    do
    {
      if ( v3 > v8 )
        break;
      v9 = *v5;
      v7 -= 4;
      ++v5;
      v3 = v9 + 16 * v3;
    }
    while ( v5 != (unsigned __int8 *)v6 );
  }
  for ( i = 1; v5 != (unsigned __int8 *)v6 && i; i = v11 == 0 )
    v11 = *v5++;
  return sub_14022FC68(v3, v7, *(_BYTE *)(a1 + 776), i, a2);
}


//----- (0000000140232088) ----------------------------------------------------
void *           sub_140232088(void **a1)
{
  void *result; // rax
  void *v3; // rbx

  result = *a1;
  if ( !*a1 )
  {
    v3 = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = v3;
    free_base(nullptr);
    return *a1;
  }
  return result;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (00000001402320F0) ----------------------------------------------------
__int64            sub_1402320F0(
        __crt_strtox *this,
        struct __crt_strtox__big_integer *a2,
             struct __crt_strtox__big_integer *a3)
{
  unsigned int v5; // edi
  __int64 v6; // r10
  unsigned int v7; // eax
  unsigned __int64 v8; // r12
  int v9; // ebp
  unsigned int v10; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rtt
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r11
  _DWORD *v21; // rcx
  unsigned int v22; // r9d
  unsigned int v23; // ebp
  bool v24; // zf
  int v25; // eax
  int v26; // r11d
  char v27; // bl
  unsigned int v28; // eax
  unsigned int v29; // r9d
  unsigned int v30; // ebp
  int v31; // r14d
  __int64 v32; // r12
  unsigned __int64 v33; // rbx
  __int64 v34; // r13
  unsigned int v35; // edx
  __int64 v36; // r11
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  unsigned int v43; // r11d
  unsigned int *v44; // rbx
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  unsigned int v47; // r8d
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int64 v50; // rdx
  unsigned int v51; // r10d
  unsigned __int64 v52; // r8
  unsigned int *v53; // r11
  __int64 v54; // rax
  __int64 v55; // rcx
  char *v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rdx
  unsigned int i; // ecx
  __int64 v61; // rax
  char v62; // [rsp+20h] [rbp-238h]
  unsigned __int64 v63; // [rsp+28h] [rbp-230h]
  char v64; // [rsp+30h] [rbp-228h]
  unsigned __int64 v65; // [rsp+38h] [rbp-220h]
  __m128i Source[29]; // [rsp+44h] [rbp-214h] BYREF
  unsigned int v67; // [rsp+260h] [rbp+8h]
  int v69; // [rsp+270h] [rbp+18h]
  unsigned int v70; // [rsp+278h] [rbp+20h]

  if ( !*(_DWORD *)this )
    return 0;
  v5 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
    return 0;
  v6 = (unsigned int)(*(_DWORD *)this - 1);
  v7 = v5 - 1;
  if ( v5 == 1 )
  {
    v8 = *((unsigned int *)a2 + 1);
    v9 = 0;
    if ( (_DWORD)v8 == 1 )
    {
      v10 = *((_DWORD *)this + 1);
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      return v10;
    }
    else if ( *(_DWORD *)this == 1 )
    {
      v12 = *((_DWORD *)this + 1);
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      *((_DWORD *)this + 1) = v12 % (unsigned int)v8;
      LOBYTE(v9) = v12 % (unsigned int)v8 != 0;
      *(_DWORD *)this = v9;
      return v12 / (unsigned int)v8;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      if ( *(_DWORD *)this )
      {
        do
        {
          v15 = *((unsigned int *)this + v6 + 1);
          v6 = (unsigned int)(v6 - 1);
          v16 = (v14 << 32) | v15;
          v14 = v16 % v8;
          v13 = (unsigned int)(v16 / v8) + (v13 << 32);
        }
        while ( (_DWORD)v6 != -1 );
      }
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      *(_QWORD *)((char *)this + 4) = v14;
      LOBYTE(v9) = HIDWORD(v14) != 0;
      *(_DWORD *)this = v9 + 1;
      return v13;
    }
  }
  if ( v7 > (unsigned int)v6 )
    return 0;
  v17 = (int)v6;
  v18 = v6 - v7;
  v19 = *(_DWORD *)this - 1;
  if ( (int)v6 < (__int64)(int)(v6 - v7) )
    goto LABEL_18;
  v20 = (intptr_t)((uintptr_t)a2 - 4 * (uintptr_t)v18 - (uintptr_t)this);
  v21 = (_DWORD *)((char *)this + 4 * (int)v6 + 4);
  while ( *(_DWORD *)((char *)v21 + v20) == *v21 )
  {
    --v19;
    --v17;
    --v21;
    if ( v17 < v18 )
      goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + v19 - v18 + 1) < *((_DWORD *)this + v19 + 1) )
LABEL_18:
    ++v18;
  if ( !v18 )
    return 0;
  v22 = *((_DWORD *)a2 + v5);
  v23 = *((_DWORD *)a2 + v5 - 1);
  v24 = !_BitScanReverse((unsigned int *)&v25, v22);
  v67 = v23;
  if ( v24 )
    v26 = 32;
  else
    v26 = 31 - v25;
  v27 = 32 - v26;
  v69 = v26;
  v62 = 32 - v26;
  if ( v26 )
  {
    v28 = v22 << v26;
    v29 = v23 >> v27;
    v30 = v23 << v26;
    v22 = v28 | v29;
    v67 = v30;
    if ( v5 > 2 )
      v67 = (*((_DWORD *)a2 + v5 - 2) >> v27) | v30;
  }
  v31 = v18 - 1;
  v32 = 0;
  if ( v18 - 1 >= 0 )
  {
    v33 = v22;
    v34 = v31 + v5;
    v65 = v22;
    v64 = 32 - v26;
    do
    {
      if ( (unsigned int)v34 > (unsigned int)v6 )
        v35 = 0;
      else
        v35 = *((_DWORD *)this + v34 + 1);
      v70 = v35;
      v36 = *((unsigned int *)this + (unsigned int)(v34 - 2) + 1);
      LODWORD(v63) = *((_DWORD *)this + (unsigned int)(v34 - 1) + 1);
      HIDWORD(v63) = v35;
      if ( v69 )
      {
        v37 = (v63 << v69) | ((unsigned __int64)(unsigned int)v36 >> v64);
        v36 = (unsigned int)((_DWORD)v36 << v69);
        if ( (unsigned int)v34 >= 3 )
          v36 = (*((_DWORD *)this + (unsigned int)(v34 - 3) + 1) >> v62) | (unsigned int)v36;
      }
      else
      {
        v37 = v63;
      }
      v38 = v37 / v33;
      v39 = (unsigned int)(v37 % v33);
      v40 = v38;
      if ( v38 > 0xFFFFFFFF )
      {
        v40 = 0xFFFFFFFFLL;
        v39 += v33 * (v38 - 0xFFFFFFFF);
      }
      if ( v39 <= 0xFFFFFFFF )
      {
        v41 = v40 * v67;
        do
        {
          if ( v41 <= (v36 | (v39 << 32)) )
            break;
          --v40;
          v41 -= v67;
          v39 += v33;
        }
        while ( v39 <= 0xFFFFFFFF );
      }
      if ( v40 )
      {
        v42 = 0;
        v43 = 0;
        if ( v5 )
        {
          v44 = (unsigned int *)((char *)a2 + 4);
          do
          {
            v45 = *v44++;
            v46 = v40 * v45 + v42;
            v47 = v46;
            v48 = v43 + v31;
            v49 = *((_DWORD *)this + v48 + 1);
            v50 = HIDWORD(v46);
            v42 = HIDWORD(v46) + 1;
            if ( v49 >= v47 )
              v42 = v50;
            ++v43;
            *((_DWORD *)this + v48 + 1) = v49 - v47;
          }
          while ( v43 < v5 );
          v33 = v65;
        }
        if ( v70 < v42 )
        {
          v51 = 0;
          if ( v5 )
          {
            v52 = 0;
            v53 = (unsigned int *)((char *)a2 + 4);
            do
            {
              v54 = v51 + v31;
              ++v51;
              v55 = *((unsigned int *)this + v54 + 1);
              v56 = (char *)this + 4 * v54;
              v57 = *v53++;
              v58 = v55 + v57 + v52;
              *((_DWORD *)v56 + 1) = v58;
              v52 = HIDWORD(v58);
            }
            while ( v51 < v5 );
          }
          LODWORD(v40) = v40 - 1;
        }
        LODWORD(v6) = v34 - 1;
      }
      v34 = (unsigned int)(v34 - 1);
      v32 = (unsigned int)v40 + (v32 << 32);
      --v31;
    }
    while ( v31 >= 0 );
  }
  LODWORD(v59) = v6 + 1;
  for ( i = v6 + 1; i < *(_DWORD *)this; *((_DWORD *)this + v61 + 1) = 0 )
    v61 = i++;
  *(_DWORD *)this = v59;
  if ( (_DWORD)v6 != -1 )
  {
    do
    {
      v59 = (unsigned int)(v59 - 1);
      if ( *((_DWORD *)this + v59 + 1) )
        break;
      *(_DWORD *)this = v59;
    }
    while ( (_DWORD)v59 );
  }
  return v32;
}


//----- (0000000140232538) ----------------------------------------------------
char            sub_140232538(__int64 a1)
{
  unsigned __int64 v1; // rax
  bool v2; // zf
  FILE **v3; // rbx
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 16) + 1LL;
  v2 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 16) = v1;
  if ( !v2 && v1 > *(_QWORD *)(a1 + 8) || (v3 = *(FILE ***)a1, v4 = getc_nolock(**(FILE ***)a1), v4 == -1) )
    LOBYTE(v4) = 0;
  else
    v3[1] = (FILE *)((char *)v3[1] + 1);
  return v4;
}


//----- (0000000140232574) ----------------------------------------------------
__int64            sub_140232574(__int64 a1)
{
  unsigned __int64 v1; // rax
  FILE **v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = v1;
  if ( *(_QWORD *)(a1 + 8) && v1 > *(_QWORD *)(a1 + 8) )
    return 0;
  v2 = *(FILE ***)a1;
  result = j__fgetwc_nolock(**(FILE ***)a1);
  if ( (_WORD)result == 0xFFFF )
    return 0;
  v2[1] = (FILE *)((char *)v2[1] + 1);
  return result;
}

// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);

//----- (0000000140232638) ----------------------------------------------------
int            sub_140232638(__int64 a1)
{
  int result; // eax

  result = getc_nolock(*(FILE **)a1);
  if ( result != -1 )
    ++*(_QWORD *)(a1 + 8);
  return result;
}


//----- (0000000140232658) ----------------------------------------------------
__int64            sub_140232658(FILE **a1)
{
  __int64 result; // rax

  result = j__fgetwc_nolock(*a1);
  if ( (_WORD)result != 0xFFFF )
    a1[1] = (FILE *)((char *)a1[1] + 1);
  return result;
}

// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);

//----- (00000001402326E8) ----------------------------------------------------
char *           sub_1402326E8(char **a1)
{
  char *v1; // rdx
  char *v3; // rbx
  char *result; // rax
  char *v5; // rcx

  v1 = *a1;
  if ( !*a1 )
  {
    v3 = (char *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = v3;
    free_base(nullptr);
    v1 = *a1;
  }
  result = v1 + 0x2000;
  v5 = v1;
  if ( v1 < v1 + 0x2000 )
  {
    do
    {
      *v5 = ~*v5;
      result = (char *)(++v5 - v1);
    }
    while ( v5 - v1 != (v1 + 0x2000 >= v1 ? 0x2000 : 0) );
  }
  return result;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (00000001402327F8) ----------------------------------------------------
char            sub_1402327F8(__int64 a1, int a2, unsigned __int16 a3)
{
  int v3; // edx

  if ( a3 == 0xFFFF )
    return 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 7 || !sub_140236014((void **)(a1 + 80), a3) )
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
  int v3; // edx

  if ( a3 == 0xFFFF )
    return 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 7 || !sub_140236014((void **)(a1 + 88), a3) )
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
  return (unsigned int)sub_140236ED8((unsigned __int8)this, 8, a2) != 0;
}


//----- (00000001402328F8) ----------------------------------------------------
bool            sub_1402328F8(unsigned __int16 a1)
{
  return (unsigned int)sub_140256E00(a1, 8) != 0;
}


//----- (0000000140232918) ----------------------------------------------------
bool            sub_140232918(void **a1)
{
  bool v2; // zf
  void *v3; // rbx

  v2 = *a1 == nullptr;
  if ( !*a1 )
  {
    v3 = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = v3;
    free_base(nullptr);
    v2 = *a1 == nullptr;
  }
  return !v2;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140232974) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_649(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 < 0 )
    return 0;
  if ( v1 > 1 )
  {
    v2 = 8;
    if ( v1 <= 6 )
    {
LABEL_13:
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 > 5 )
      {
        v10 = v5 - 6;
        if ( !v10 )
          return v2;
        v11 = v10 - 1;
        if ( !v11 )
          return v2;
        v9 = v11 - 2;
        v8 = v9 == 0;
LABEL_19:
        if ( !v8 )
        {
          if ( v9 != 1 )
            return 0;
          return v2;
        }
        return 4;
      }
      if ( v5 == 5 )
        return v2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          return 1;
        v7 = v6 - 1;
        if ( v7 )
        {
          v9 = v7 - 1;
          v8 = v9 == 0;
          goto LABEL_19;
        }
        return 2;
      }
      return 4;
    }
    if ( v1 == 7 )
    {
      v4 = *(_DWORD *)(a1 + 40);
      if ( v4 )
      {
        if ( v4 != 3 && v4 != 8 )
          return 0;
        return v2;
      }
      return 4;
    }
    if ( v1 != 8 )
    {
      if ( v1 != 9 )
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
  int v1; // eax
  __int64 v2; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 < 0 )
    return 0;
  if ( v1 > 1 )
  {
    v2 = 8;
    if ( v1 <= 6 )
    {
LABEL_13:
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 > 5 )
      {
        v10 = v5 - 6;
        if ( !v10 )
          return v2;
        v11 = v10 - 1;
        if ( !v11 )
          return v2;
        v9 = v11 - 2;
        v8 = v9 == 0;
LABEL_19:
        if ( !v8 )
        {
          if ( v9 != 1 )
            return 0;
          return v2;
        }
        return 4;
      }
      if ( v5 == 5 )
        return v2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          return 1;
        v7 = v6 - 1;
        if ( v7 )
        {
          v9 = v7 - 1;
          v8 = v9 == 0;
          goto LABEL_19;
        }
        return 2;
      }
      return 4;
    }
    if ( v1 == 7 )
    {
      v4 = *(_DWORD *)(a1 + 40);
      if ( v4 )
      {
        if ( v4 != 3 && v4 != 8 )
          return 0;
        return v2;
      }
      return 4;
    }
    if ( v1 != 8 )
    {
      if ( v1 != 9 )
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
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // r11d
  char *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned int v9; // r10d
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // r12
  unsigned int v15; // r15d
  __int64 v16; // rbx
  unsigned int v17; // r11d
  unsigned __int64 v18; // r8
  unsigned int v19; // r10d
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r11d
  sr_anon_107 *v24; // r8
  sr_anon_107 *v25; // rax
  char *v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  char *v29; // r13
  __int64 v30; // r14
  unsigned __int64 v31; // r10
  unsigned int v32; // eax
  __int64 v33; // r11
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v39; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  char *v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  char v43[460]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v44; // [rsp+200h] [rbp+100h]
  __m128i Source[28]; // [rsp+204h] [rbp+104h] BYREF
  __int64 v46; // [rsp+3D0h] [rbp+2D0h]

  v4 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 1u )
  {
    v14 = (unsigned int *)((char *)this + 4);
    v15 = *(_DWORD *)this;
    if ( *(_DWORD *)this > 1u )
    {
      v23 = *(_DWORD *)a2;
      v24 = a2;
      v25 = this;
      if ( v4 >= v15 )
        v24 = this;
      v26 = (char *)v24 + 4;
      v41 = v26;
      if ( v4 >= v15 )
      {
        v23 = v15;
        v25 = a2;
        v15 = v4;
      }
      v40 = v23;
      v27 = 0;
      v28 = 0;
      v44 = 0;
      v29 = (char *)v25 + 4;
      if ( v23 )
      {
        do
        {
          v30 = *(unsigned int *)&v26[4 * v28];
          if ( (_DWORD)v30 )
          {
            LODWORD(v31) = 0;
            v32 = v28;
            if ( v15 )
            {
              do
              {
                if ( v32 == 115 )
                  break;
                v33 = v32;
                if ( v32 == v27 )
                {
                  SR_VEC_LANES(128, Source[0], i32)[v32] = 0;
                  v44 = v32 + 1;
                }
                v34 = v32 - v28;
                ++v32;
                v35 = SR_VEC_LANES(128, Source[0], u32)[v33] + (unsigned int)v31 + v30 * *(unsigned int *)&v29[4 * v34];
                SR_VEC_LANES(128, Source[0], i32)[v33] = v35;
                v31 = HIDWORD(v35);
                v27 = v44;
              }
              while ( v32 - v28 != v15 );
              if ( (_DWORD)v31 )
              {
                do
                {
                  if ( v32 == 115 )
                    break;
                  v36 = v32;
                  if ( v32 == v27 )
                  {
                    SR_VEC_LANES(128, Source[0], i32)[v32] = 0;
                    v44 = v32 + 1;
                  }
                  ++v32;
                  v37 = (unsigned int)v31 + (unsigned __int64)SR_VEC_LANES(128, Source[0], u32)[v36];
                  SR_VEC_LANES(128, Source[0], i32)[v36] = v37;
                  v27 = v44;
                  LODWORD(v31) = HIDWORD(v37);
                }
                while ( HIDWORD(v37) );
              }
              v23 = v40;
            }
            if ( v32 == 115 )
            {
              v42 = 0;
              *(_DWORD *)this = 0;
              sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)v43, 0);
              return 0; /* the function has no caller */
            }
            v26 = v41;
          }
          else if ( v28 == v27 )
          {
            v27 = v28 + 1;
            SR_VEC_LANES(128, Source[0], i32)[v28] = 0;
            v44 = v28 + 1;
          }
          ++v28;
        }
        while ( v28 != v23 );
      }
      *(_DWORD *)this = v27;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 4LL * v27);
    }
    else
    {
      v16 = *v14;
      *(_DWORD *)this = v4;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)((char *)a2 + 4), 4LL * *(unsigned int *)a2);
      if ( !(_DWORD)v16 )
      {
        v44 = 0;
        *(_DWORD *)this = 0;
        sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
        return 0; /* the function has no caller */
      }
      if ( (_DWORD)v16 != 1 )
      {
        v17 = *(_DWORD *)this;
        if ( *(_DWORD *)this )
        {
          LODWORD(v18) = 0;
          v19 = 0;
          do
          {
            v20 = v19++;
            v21 = (unsigned int)v18 + v16 * v14[v20];
            v14[v20] = v21;
            v18 = HIDWORD(v21);
          }
          while ( v19 != v17 );
          if ( HIDWORD(v21) )
          {
            v22 = *(unsigned int *)this;
            if ( (unsigned int)v22 < 0x73 )
            {
              *((_DWORD *)this + v22 + 1) = HIDWORD(v21);
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
    v5 = *((_DWORD *)a2 + 1);
    if ( !v5 )
    {
      v44 = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
      return 0; /* the function has no caller */
    }
    if ( v5 != 1 )
    {
      v6 = *(_DWORD *)this;
      if ( *(_DWORD *)this )
      {
        v7 = (char *)this + 4;
        LODWORD(v8) = 0;
        v9 = 0;
        v10 = *((unsigned int *)a2 + 1);
        do
        {
          v11 = v9++;
          v12 = (unsigned int)v8 + v10 * *(unsigned int *)&v7[4 * v11];
          *(_DWORD *)&v7[4 * v11] = v12;
          v8 = HIDWORD(v12);
        }
        while ( v9 != v6 );
        if ( HIDWORD(v12) )
        {
          v13 = *(unsigned int *)this;
          if ( (unsigned int)v13 < 0x73 )
          {
            *((_DWORD *)this + v13 + 1) = HIDWORD(v12);
            ++*(_DWORD *)this;
            return 0; /* the function has no caller */
          }
LABEL_12:
          v44 = 0;
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
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rsi
  unsigned int v6; // r11d
  __m128i *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __m128i Source[28]; // [rsp+24h] [rbp-1D4h] BYREF

  if ( !(_DWORD)a2 )
  {
    *(_DWORD *)this = 0;
    sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, Source, 0);
    return 1;
  }
  if ( (_DWORD)a2 != 1 )
  {
    v3 = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      LODWORD(v4) = 0;
      v5 = (unsigned int)a2;
      v6 = 0;
      v7 = (__m128i *)((char *)this + 4);
      do
      {
        v8 = v6++;
        v9 = (unsigned int)v4 + v5 * SR_VEC_PTR_LANES(128, v7, u32)[v8];
        SR_VEC_PTR_LANES(128, v7, i32)[v8] = v9;
        v4 = HIDWORD(v9);
      }
      while ( v6 != v3 );
      if ( HIDWORD(v9) )
      {
        v10 = *(unsigned int *)this;
        if ( (unsigned int)v10 >= 0x73 )
        {
          *(_DWORD *)this = 0;
          sub_140236F50(v7, 0x1CCu, Source, 0);
          return 0;
        }
        *((_DWORD *)this + v10 + 1) = HIDWORD(v9);
        ++*(_DWORD *)this;
      }
    }
  }
  return 1;
}


//----- (0000000140232FE0) ----------------------------------------------------
__int64            sub_140232FE0(sr_anon_107 *this, struct __crt_strtox__big_integer *a2)
{
  int v2; // r8d
  unsigned int v4; // eax
  unsigned int v5; // r15d
  int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // r10d
  char *v12; // r11
  unsigned __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // al
  unsigned int v20; // esi
  unsigned int *v21; // r15
  __int64 v22; // rbx
  int v23; // r10d
  unsigned __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __m128i *v29; // rdx
  __m128i *v30; // r12
  unsigned int v31; // r13d
  unsigned int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // rdi
  unsigned __int64 v35; // r10
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  int v42; // r8d
  __int64 v43; // rax
  int v45; // r10d
  char *v46; // r11
  unsigned __int64 v47; // r8
  unsigned int v48; // r9d
  __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+24h] [rbp-DCh]
  unsigned int v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+2Ch] [rbp-D4h]
  __m128i *v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+40h] [rbp-C0h]
  __m128i v60[28]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v61; // [rsp+210h] [rbp+110h]
  _DWORD v62[115]; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v63; // [rsp+3E0h] [rbp+2E0h]
  __m128i v64[28]; // [rsp+3E4h] [rbp+2E4h] BYREF
  __int64 v65; // [rsp+5B0h] [rbp+4B0h]

  v2 = (int)a2;
  v57 = (int)a2;
  v4 = (unsigned int)a2 / 0xA;
  v56 = (unsigned int)a2 / 0xA;
  v5 = (unsigned int)a2 / 0xA;
  v54 = (unsigned int)a2 / 0xA;
  if ( (unsigned int)a2 / 0xA )
  {
    while ( 1 )
    {
      v6 = v5;
      if ( v5 > 0x26 )
        v6 = 38;
      v55 = v6;
      v7 = *(unsigned __int8 *)(0x140000002LL + 4LL * (unsigned int)(v6 - 1) + 2643440);
      v8 = *(unsigned __int8 *)(0x140000003LL + 4LL * (unsigned int)(v6 - 1) + 2643440);
      v9 = 4 * v7;
      v63 = v8 + v7;
      sub_1401FCD30((void *)(uintptr_t)(v64), 0, 4 * v7);
      sub_1401FC920(
        (__m128i *)((char *)v64 + v9),
        (     __m128i *)((char *)&unk_140284CE0
                        + 4 * *(unsigned __int16 *)(0x140000000LL + 4LL * (unsigned int)(v6 - 1) + 2643440)),
        4 * v8);
      v10 = v63;
      if ( v63 <= 1 )
      {
        if ( SR_VEC_LANES(128, v64[0], i32)[0] )
        {
          if ( SR_VEC_LANES(128, v64[0], i32)[0] != 1 )
          {
            v11 = *(_DWORD *)this;
            if ( *(_DWORD *)this )
            {
              v12 = (char *)this + 4;
              LODWORD(v13) = 0;
              v14 = 0;
              v15 = SR_VEC_LANES(128, v64[0], u32)[0];
              do
              {
                v16 = v14++;
                v17 = (unsigned int)v13 + v15 * *(unsigned int *)&v12[4 * v16];
                *(_DWORD *)&v12[4 * v16] = v17;
                v13 = HIDWORD(v17);
              }
              while ( v14 != v11 );
              if ( HIDWORD(v17) )
              {
                v18 = *(unsigned int *)this;
                if ( (unsigned int)v18 >= 0x73 )
                {
                  v63 = 0;
                  *(_DWORD *)this = 0;
                  sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, v64, 0);
                  v19 = 0;
                  goto LABEL_51;
                }
                *((_DWORD *)this + v18 + 1) = HIDWORD(v17);
                ++*(_DWORD *)this;
              }
            }
          }
        }
        else
        {
          v61 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)v62, 0);
        }
        goto LABEL_50;
      }
      v20 = *(_DWORD *)this;
      v21 = (unsigned int *)((char *)this + 4);
      if ( *(_DWORD *)this <= 1u )
      {
        v22 = *v21;
        *(_DWORD *)this = v63;
        sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, v64, 4 * v10);
        if ( (_DWORD)v22 )
        {
          if ( (_DWORD)v22 != 1 )
          {
            v23 = *(_DWORD *)this;
            if ( *(_DWORD *)this )
            {
              LODWORD(v24) = 0;
              v25 = 0;
              do
              {
                v26 = v25++;
                v27 = (unsigned int)v24 + v22 * v21[v26];
                v21[v26] = v27;
                v24 = HIDWORD(v27);
              }
              while ( v25 != v23 );
              if ( HIDWORD(v27) )
              {
                v28 = *(unsigned int *)this;
                if ( (unsigned int)v28 >= 0x73 )
                {
                  v63 = 0;
                  *(_DWORD *)this = 0;
                  sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, v64, 0);
                  v5 = v54;
                  v19 = 0;
                }
                else
                {
                  v5 = v54;
                  *((_DWORD *)this + v28 + 1) = HIDWORD(v27);
                  v19 = 1;
                  ++*(_DWORD *)this;
                }
                goto LABEL_51;
              }
            }
          }
        }
        else
        {
          v63 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, v64, 0);
        }
        v5 = v54;
        v19 = 1;
        goto LABEL_51;
      }
      v29 = v64;
      if ( v63 >= v20 )
        v29 = (__m128i *)((char *)this + 4);
      v58 = v29;
      if ( v63 >= v20 )
      {
        v31 = v20;
        v30 = v64;
        v20 = v63;
      }
      else
      {
        v30 = (__m128i *)((char *)this + 4);
        v31 = v63;
      }
      v32 = 0;
      v33 = 0;
      v61 = 0;
      if ( !v31 )
      {
LABEL_49:
        *(_DWORD *)this = v32;
        sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, (     __m128i *)v62, 4LL * v32);
        v5 = v54;
        v6 = v55;
LABEL_50:
        v19 = 1;
        goto LABEL_51;
      }
      while ( 1 )
      {
        v34 = SR_VEC_PTR_LANES(128, v29, u32)[v33];
        if ( !(_DWORD)v34 )
        {
          if ( (_DWORD)v33 == v32 )
          {
            v32 = v33 + 1;
            v62[v33] = 0;
            v61 = v33 + 1;
          }
          goto LABEL_48;
        }
        LODWORD(v35) = 0;
        v36 = v33;
        if ( v20 )
        {
          do
          {
            if ( v36 == 115 )
              break;
            v37 = v36;
            if ( v36 == v32 )
            {
              v62[v36] = 0;
              v61 = v36 + 1;
            }
            v38 = v36 - (unsigned int)v33;
            ++v36;
            v39 = (unsigned int)v62[v37] + (unsigned int)v35 + v34 * SR_VEC_PTR_LANES(128, v30, u32)[v38];
            v62[v37] = v39;
            v35 = HIDWORD(v39);
            v32 = v61;
          }
          while ( v36 - (_DWORD)v33 != v20 );
          if ( (_DWORD)v35 )
            break;
        }
LABEL_46:
        if ( v36 == 115 )
          goto LABEL_58;
        v29 = v58;
LABEL_48:
        v33 = (unsigned int)(v33 + 1);
        if ( (_DWORD)v33 == v31 )
          goto LABEL_49;
      }
      while ( v36 != 115 )
      {
        v40 = v36;
        if ( v36 == v32 )
        {
          v62[v36] = 0;
          v61 = v36 + 1;
        }
        ++v36;
        v41 = (unsigned int)v35 + (unsigned __int64)(unsigned int)v62[v40];
        v62[v40] = v41;
        v32 = v61;
        LODWORD(v35) = HIDWORD(v41);
        if ( !HIDWORD(v41) )
          goto LABEL_46;
      }
LABEL_58:
      v59 = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, v60, 0);
      v5 = v54;
      v19 = 0;
      v6 = v55;
LABEL_51:
      if ( !v19 )
        goto LABEL_56;
      v5 -= v6;
      v54 = v5;
      if ( !v5 )
      {
        v4 = v56;
        v2 = v57;
        break;
      }
    }
  }
  v42 = v2 - 10 * v4;
  if ( v42 )
  {
    v43 = (unsigned int)dword_140285688[v42 - 1];
    if ( !(_DWORD)v43 )
    {
LABEL_56:
      v59 = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, v60, 0);
      return 0; /* the function has no caller */
    }
    if ( (_DWORD)v43 != 1 )
    {
      v45 = *(_DWORD *)this;
      if ( *(_DWORD *)this )
      {
        v46 = (char *)this + 4;
        LODWORD(v47) = 0;
        v48 = 0;
        v49 = v43;
        do
        {
          v50 = v48++;
          v51 = (unsigned int)v47 + v49 * *(unsigned int *)&v46[4 * v50];
          *(_DWORD *)&v46[4 * v50] = v51;
          v47 = HIDWORD(v51);
        }
        while ( v48 != v45 );
        if ( HIDWORD(v51) )
        {
          v52 = *(unsigned int *)this;
          if ( (unsigned int)v52 < 0x73 )
          {
            *((_DWORD *)this + v52 + 1) = HIDWORD(v51);
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

// 140285688: using guessed type int dword_140285688[10];

//----- (0000000140233590) ----------------------------------------------------
unsigned __int64            sub_140233590(sr_anon_107 *this, unsigned int *     a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // rdx

  result = 0;
  v4 = (int)a2;
  v5 = 0;
  if ( (_DWORD)a2 )
  {
    v6 = a3;
    do
    {
      v7 = v5++;
      v8 = (unsigned int)result + v6 * *((unsigned int *)this + v7);
      *((_DWORD *)this + v7) = v8;
      result = HIDWORD(v8);
    }
    while ( v5 != v4 );
  }
  return result;
}


//----- (00000001402337F8) ----------------------------------------------------
__int64            sub_1402337F8(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v4; // edi
  int v5; // eax
  int v6; // ebx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    goto LABEL_2;
  if ( !sub_14022389C(v2) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 32) )
  {
LABEL_2:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  while ( sub_14022F860(a1 + 24)
       && __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_state(a1) )
    ;
  v4 = *(_DWORD *)(a1 + 128);
  if ( !*(_QWORD *)(a1 + 128) && *(_DWORD *)(a1 + 44) != 1 )
  {
    v5 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v5 == -1 )
      v4 = -1;
    else
      ++*(_QWORD *)(a1 + 16);
    if ( v5 != -1 )
    {
      --*(_QWORD *)(a1 + 16);
      sub_14020CE90(v5, *(_QWORD *)(a1 + 8));
    }
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 40);
    if ( v6 )
    {
      *errno_sr() = v6;
      sub_14024CF6C();
    }
  }
  return v4;
}


//----- (00000001402338B8) ----------------------------------------------------
__int64            sub_1402338B8(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v4; // edi
  __int64 i; // rcx
  unsigned int v6; // esi
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // ebx

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 || v1 > *(_QWORD *)(a1 + 16) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v4 = -1;
    *errno_sr() = 22;
LABEL_22:
    sub_14024CF6C();
    return v4;
  }
  for ( i = a1 + 32;
        sub_14022F860(i)
     && __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_state(a1);
        i = a1 + 32 )
  {
    ;
  }
  v6 = *(_DWORD *)(a1 + 136);
  if ( !*(_QWORD *)(a1 + 136) && *(_DWORD *)(a1 + 52) != 1 )
  {
    v7 = *(unsigned __int8 **)(a1 + 24);
    if ( v7 == *(unsigned __int8 **)(a1 + 16) )
    {
      v6 = -1;
      v8 = -1;
    }
    else
    {
      v8 = *v7++;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v7);
    }
    if ( v7 != *(unsigned __int8 **)(a1 + 8) && (v7 != *(unsigned __int8 **)(a1 + 16) || v8 != -1) )
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v7 - 1);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 48);
    if ( v9 )
    {
      v4 = v6;
      *errno_sr() = v9;
      goto LABEL_22;
    }
  }
  return v6;
}


//----- (00000001402339A4) ----------------------------------------------------
__int64            sub_1402339A4(__int64 a1)
{
  unsigned int v2; // edi
  __int64 i; // rcx
  unsigned int v4; // esi
  unsigned __int16 v5; // ax
  __int64 v6; // r8
  int v7; // ebx

  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) )
  {
    v2 = -1;
    *errno_sr() = 22;
LABEL_18:
    sub_14024CF6C();
    return v2;
  }
  for ( i = a1 + 24;
        sub_14022FA28(i)
     && __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_state(a1);
        i = a1 + 24 )
  {
    ;
  }
  v4 = *(_DWORD *)(a1 + 104);
  if ( !*(_QWORD *)(a1 + 104) && *(_DWORD *)(a1 + 44) != 1 )
  {
    v5 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    if ( v5 == 0xFFFF )
      v4 = -1;
    else
      ++*(_QWORD *)(a1 + 16);
    if ( v5 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(v5, *(_QWORD *)(a1 + 8), v6);
    }
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 )
    {
      v2 = v4;
      *errno_sr() = v7;
      goto LABEL_18;
    }
  }
  return v4;
}

// 140233A33: variable 'v6' is possibly undefined
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (0000000140233A68) ----------------------------------------------------
__int64            sub_140233A68(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v4; // edi
  __int64 i; // rcx
  __int16 *v6; // rax
  __int16 v7; // dx
  int v8; // ebx

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 || v1 > *(_QWORD *)(a1 + 16) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v4 = -1;
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
  v4 = *(_DWORD *)(a1 + 112);
  if ( !*(_QWORD *)(a1 + 112) && *(_DWORD *)(a1 + 52) != 1 )
  {
    v6 = *(__int16 **)(a1 + 24);
    if ( v6 == *(__int16 **)(a1 + 16) )
    {
      v7 = -1;
    }
    else
    {
      v7 = *v6++;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6);
      if ( v7 != -1 )
      {
LABEL_16:
        if ( v6 != *(__int16 **)(a1 + 8) && (v6 != *(__int16 **)(a1 + 16) || v7 != -1) )
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 - 1);
        goto LABEL_20;
      }
    }
    v4 = -1;
    goto LABEL_16;
  }
LABEL_20:
  if ( (*(_BYTE *)a1 & 1) == 0 )
    return v4;
  v8 = *(_DWORD *)(a1 + 48);
  if ( !v8 )
    return v4;
  *errno_sr() = v8;
LABEL_23:
  sub_14024CF6C();
  return v4;
}


//----- (0000000140233BA8) ----------------------------------------------------
char            sub_140233BA8(__int64 a1)
{
  int v1; // edx
  char v3; // di
  int v4; // edx
  int v5; // edx
  int v6; // edx
  signed int v7; // edx
  unsigned __int8 v8; // r8
  __int64 v10; // rax
  int v11; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax

  v1 = *(_DWORD *)(a1 + 72);
  if ( v1 <= 5 )
  {
    if ( v1 == 5 )
    {
      v7 = 10;
      goto LABEL_37;
    }
    v3 = 0;
    if ( v1 )
    {
      v4 = v1 - 1;
      if ( !v4 )
        return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_string_specifier(
                 (__int64 *)a1,
                 1);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            v7 = 8;
LABEL_37:
            v8 = 0;
            return sub_1402341DC(a1, v7, v8);
          }
          return 0;
        }
        v7 = 10;
      }
      else
      {
        v7 = 0;
      }
      v8 = 1;
      return sub_1402341DC(a1, v7, v8);
    }
    v10 = unknown_libname_649(a1 + 24) - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v11 = 0;
      return sub_14022D954(a1, v11);
    }
    v13 = 0;
    return sub_14022D22C(a1, v13);
  }
  v14 = v1 - 6;
  if ( !v14 )
  {
    v7 = 16;
    goto LABEL_37;
  }
  v15 = v14 - 1;
  if ( !v15 )
    return sub_140234024((__int64 *)a1);
  v16 = v15 - 1;
  if ( !v16 )
  {
    v17 = unknown_libname_649(a1 + 24) - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return 0;
      v11 = 8;
      return sub_14022D954(a1, v11);
    }
    v13 = 8;
    return sub_14022D22C(a1, v13);
  }
  if ( v16 != 1 )
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
  int v1; // edx
  char v3; // di
  int v4; // edx
  int v5; // edx
  int v6; // edx
  signed int v7; // edx
  unsigned __int8 v8; // r8
  __int64 v10; // rax
  int v11; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax

  v1 = *(_DWORD *)(a1 + 80);
  if ( v1 <= 5 )
  {
    if ( v1 == 5 )
    {
      v7 = 10;
      goto LABEL_37;
    }
    v3 = 0;
    if ( v1 )
    {
      v4 = v1 - 1;
      if ( !v4 )
        return __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_string_specifier(
                 (_QWORD *)a1,
                 1);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            v7 = 8;
LABEL_37:
            v8 = 0;
            return sub_140234288(a1, v7, v8);
          }
          return 0;
        }
        v7 = 10;
      }
      else
      {
        v7 = 0;
      }
      v8 = 1;
      return sub_140234288(a1, v7, v8);
    }
    v10 = unknown_libname_649(a1 + 32) - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v11 = 0;
      return sub_14022DB28(a1, v11);
    }
    v13 = 0;
    return sub_14022D3C8(a1, v13);
  }
  v14 = v1 - 6;
  if ( !v14 )
  {
    v7 = 16;
    goto LABEL_37;
  }
  v15 = v14 - 1;
  if ( !v15 )
    return sub_140234088((_QWORD *)a1);
  v16 = v15 - 1;
  if ( !v16 )
  {
    v17 = unknown_libname_649(a1 + 32) - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return 0;
      v11 = 8;
      return sub_14022DB28(a1, v11);
    }
    v13 = 8;
    return sub_14022D3C8(a1, v13);
  }
  if ( v16 != 1 )
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
  int v1; // edx
  char v3; // di
  int v4; // edx
  int v5; // edx
  int v6; // edx
  signed int v7; // edx
  unsigned __int8 v8; // r8
  __int64 v10; // rax
  int v11; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax

  v1 = *(_DWORD *)(a1 + 72);
  if ( v1 <= 5 )
  {
    if ( v1 == 5 )
    {
      v7 = 10;
      goto LABEL_37;
    }
    v3 = 0;
    if ( v1 )
    {
      v4 = v1 - 1;
      if ( !v4 )
        return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_string_specifier(
                 a1,
                 1);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            v7 = 8;
LABEL_37:
            v8 = 0;
            return sub_140234340(a1, v7, v8);
          }
          return 0;
        }
        v7 = 10;
      }
      else
      {
        v7 = 0;
      }
      v8 = 1;
      return sub_140234340(a1, v7, v8);
    }
    v10 = unknown_libname_650(a1 + 24) - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v11 = 0;
      return sub_14022DD14(a1, v11);
    }
    v13 = 0;
    return sub_14022D584(a1, v13);
  }
  v14 = v1 - 6;
  if ( !v14 )
  {
    v7 = 16;
    goto LABEL_37;
  }
  v15 = v14 - 1;
  if ( !v15 )
    return sub_1402340F8(a1);
  v16 = v15 - 1;
  if ( !v16 )
  {
    v17 = unknown_libname_650(a1 + 24) - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return 0;
      v11 = 8;
      return sub_14022DD14(a1, v11);
    }
    v13 = 8;
    return sub_14022D584(a1, v13);
  }
  if ( v16 != 1 )
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
  int v1; // edx
  char v3; // di
  int v4; // edx
  int v5; // edx
  int v6; // edx
  signed int v7; // edx
  unsigned __int8 v8; // r8
  __int64 v10; // rax
  int v11; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax

  v1 = *(_DWORD *)(a1 + 80);
  if ( v1 <= 5 )
  {
    if ( v1 == 5 )
    {
      v7 = 10;
      goto LABEL_37;
    }
    v3 = 0;
    if ( v1 )
    {
      v4 = v1 - 1;
      if ( !v4 )
        return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_string_specifier(
                 (_QWORD *)a1,
                 1);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            v7 = 8;
LABEL_37:
            v8 = 0;
            return sub_1402343F4(a1, v7, v8);
          }
          return 0;
        }
        v7 = 10;
      }
      else
      {
        v7 = 0;
      }
      v8 = 1;
      return sub_1402343F4(a1, v7, v8);
    }
    v10 = unknown_libname_650(a1 + 32) - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v11 = 0;
      return sub_14022DED8(a1, v11);
    }
    v13 = 0;
    return sub_14022D774(a1, v13);
  }
  v14 = v1 - 6;
  if ( !v14 )
  {
    v7 = 16;
    goto LABEL_37;
  }
  v15 = v14 - 1;
  if ( !v15 )
    return sub_140234164((_QWORD *)a1);
  v16 = v15 - 1;
  if ( !v16 )
  {
    v17 = unknown_libname_650(a1 + 32) - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return 0;
      v11 = 8;
      return sub_14022DED8(a1, v11);
    }
    v13 = 8;
    return sub_14022D774(a1, v13);
  }
  if ( v16 != 1 )
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
  int v2; // eax
  __int64 v3; // rax

  v2 = sub_14022E0F4((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[14]);
  if ( v2 != -1 )
  {
    --a1[2];
    sub_14020CE90(v2, a1[1]);
  }
  v3 = unknown_libname_649((__int64)(a1 + 3));
  if ( v3 == 4 )
    return sub_14022CD20((__int64)a1);
  if ( v3 == 8 )
    return sub_14022CFA4((__int64)a1);
  return 0;
}


//----- (0000000140234088) ----------------------------------------------------
char            sub_140234088(_QWORD *a1)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = sub_14022E18C((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[15]);
  v3 = a1[3];
  if ( v3 != a1[1] && (v3 != a1[2] || v2 != -1) )
    a1[3] = v3 - 1;
  v4 = unknown_libname_649((__int64)(a1 + 4));
  if ( v4 == 4 )
    return sub_14022CDC0((__int64)a1);
  if ( v4 == 8 )
    return sub_14022D044((__int64)a1);
  return 0;
}


//----- (00000001402340F8) ----------------------------------------------------
char            sub_1402340F8(__int64 a1)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = sub_14022E144((FILE **)(a1 + 8));
  if ( v2 != 0xFFFF )
  {
    --*(_QWORD *)(a1 + 16);
    ungetwc_nolock(v2, *(_QWORD *)(a1 + 8), v3);
  }
  v4 = unknown_libname_650(a1 + 24);
  if ( v4 == 4 )
    return sub_14022CE64(a1);
  if ( v4 == 8 )
    return sub_14022D0EC(a1);
  return 0;
}

// 140234127: variable 'v3' is possibly undefined
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (0000000140234164) ----------------------------------------------------
char            sub_140234164(_QWORD *a1)
{
  __int16 v2; // cx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = sub_14022E1E0((__int64)(a1 + 1));
  v3 = a1[3];
  if ( v3 != a1[1] && (v3 != a1[2] || v2 != -1) )
    a1[3] = v3 - 2;
  v4 = unknown_libname_650((__int64)(a1 + 4));
  if ( v4 == 4 )
    return sub_14022CF04((__int64)a1);
  if ( v4 == 8 )
    return sub_14022D18C((__int64)a1);
  return 0;
}


//----- (00000001402341DC) ----------------------------------------------------
char            sub_1402341DC(__int64 a1, signed int a2, unsigned __int8 a3)
{
  __int64 *v4; // rdi
  int v7; // eax
  struct __crt_locale_pointers *v8; // rcx
  unsigned __int64 v9; // rax
  FILE **v11[5]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)(a1 + 8);
  v7 = sub_14022E0F4(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 112));
  if ( v7 != -1 )
  {
    --v4[1];
    sub_14020CE90(v7, *v4);
  }
  v8 = *(struct __crt_locale_pointers **)(a1 + 112);
  v11[1] = *(FILE ***)(a1 + 56);
  v11[0] = (FILE **)v4;
  v11[3] = (FILE **)&v12;
  v11[2] = nullptr;
  v12 = 1;
  v9 = sub_14022B0C8(v8, v11, a2, a3);
  if ( !v12 )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_integer(a1, v9);
}


//----- (0000000140234288) ----------------------------------------------------
char            sub_140234288(__int64 a1, signed int a2, unsigned __int8 a3)
{
  _QWORD *v4; // rdi
  int v7; // ecx
  __int64 v8; // rax
  struct __crt_locale_pointers *v9; // rcx
  unsigned __int64 v10; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 8);
  v7 = sub_14022E18C(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 120));
  v8 = v4[2];
  if ( v8 != *v4 && (v8 != v4[1] || v7 != -1) )
    v4[2] = v8 - 1;
  v9 = *(struct __crt_locale_pointers **)(a1 + 120);
  v12[1] = *(_QWORD *)(a1 + 64);
  v12[0] = (uint64)(uintptr_t)(v4);
  v12[3] = (uint64)(uintptr_t)(&v13);
  v12[2] = 0;
  v13 = 1;
  v10 = sub_14022BE60(v9, v12, a2, a3);
  if ( !v13 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  return __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____write_integer(a1, v10);
}


//----- (0000000140234340) ----------------------------------------------------
char            sub_140234340(__int64 a1, signed int a2, unsigned __int8 a3)
{
  FILE **v4; // rdi
  unsigned __int16 v7; // ax
  __int64 v8; // r8
  struct __crt_locale_pointers *v9; // rcx
  unsigned __int64 v10; // rax
  FILE **v12[5]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = (FILE **)(a1 + 8);
  v7 = sub_14022E144((FILE **)(a1 + 8));
  if ( v7 != 0xFFFF )
  {
    v4[1] = (FILE *)((char *)v4[1] - 1);
    ungetwc_nolock(v7, *v4, v8);
  }
  v9 = *(struct __crt_locale_pointers **)(a1 + 88);
  v12[1] = *(FILE ***)(a1 + 56);
  v12[0] = v4;
  v12[3] = (FILE **)&v13;
  v12[2] = nullptr;
  v13 = 1;
  v10 = sub_14022B534(v9, v12, a2, a3);
  if ( !v13 )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____write_integer(
           a1,
           v10);
}

// 140234380: variable 'v8' is possibly undefined
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (00000001402343F4) ----------------------------------------------------
char            sub_1402343F4(__int64 a1, signed int a2, unsigned __int8 a3)
{
  _QWORD *v4; // rdi
  __int16 v7; // cx
  __int64 v8; // rax
  struct __crt_locale_pointers *v9; // rcx
  unsigned __int64 v10; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 8);
  v7 = sub_14022E1E0(a1 + 8);
  v8 = v4[2];
  if ( v8 != *v4 && (v8 != v4[1] || v7 != -1) )
    v4[2] = v8 - 2;
  v9 = *(struct __crt_locale_pointers **)(a1 + 96);
  v12[1] = *(_QWORD *)(a1 + 64);
  v12[0] = (uint64)(uintptr_t)(v4);
  v12[3] = (uint64)(uintptr_t)(&v13);
  v12[2] = 0;
  v13 = 1;
  v10 = sub_14022C26C(v9, v12, a2, a3);
  if ( !v13 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  return __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____write_integer(
           a1,
           v10);
}


//----- (00000001402344B4) ----------------------------------------------------
char            sub_1402344B4(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = getc_nolock(*(FILE **)(a1 + 8));
  if ( v2 == -1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = v3;
  if ( v2 != *(unsigned __int8 *)(a1 + 48) )
  {
    v4 = v3 - 1;
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v4;
    sub_14020CE90(v2, v5);
    return 0;
  }
  return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_literal_character_tchar(
           a1,
           v2);
}


//----- (0000000140234538) ----------------------------------------------------
char            sub_140234538(__int64 a1)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
  if ( v2 == 0xFFFF )
    return 0;
  v4 = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = v4;
  if ( v2 != *(_WORD *)(a1 + 48) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v4 - 1;
    ungetwc_nolock(v2, v5, v3);
    return 0;
  }
  return 1;
}

// 140234573: variable 'v3' is possibly undefined
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (00000001402345C0) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_literal_character_tchar(
        __int64 a1,
        unsigned __int8 a2)
{
  int v4; // eax

  if ( (sub_140256DC0()[a2] & 0x8000u) == 0 )
    return 1;
  v4 = getc_nolock(*(FILE **)(a1 + 8));
  if ( v4 != -1 )
    ++*(_QWORD *)(a1 + 16);
  if ( v4 == *(unsigned __int8 *)(a1 + 49) )
    return 1;
  if ( v4 != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90(v4, *(_QWORD *)(a1 + 8));
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
  unsigned __int8 *v4; // r8
  int v5; // ecx

  if ( (sub_140256DC0()[a2] & 0x8000u) == 0 )
    return 1;
  v4 = *(unsigned __int8 **)(a1 + 24);
  if ( v4 == *(unsigned __int8 **)(a1 + 16) )
  {
    v5 = -1;
  }
  else
  {
    v5 = *v4++;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4);
  }
  if ( v5 == *(unsigned __int8 *)(a1 + 57) )
    return 1;
  if ( v4 != *(unsigned __int8 **)(a1 + 8) )
  {
    if ( v4 != *(unsigned __int8 **)(a1 + 16) || v5 != -1 )
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(--v4);
    if ( v4 != *(unsigned __int8 **)(a1 + 8) && (v4 != *(unsigned __int8 **)(a1 + 16) || a2 != 0xFF) )
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4 - 1);
  }
  return 0;
}


//----- (00000001402346C0) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax

  v2 = *(_DWORD *)(a1 + 44) - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = sub_140233BA8(a1);
        if ( v4 && *(_DWORD *)(a1 + 72) != 9 && !*(_BYTE *)(a1 + 50) )
          ++*(_QWORD *)(a1 + 128);
        return v4;
      }
    }
    else
    {
      v6 = getc_nolock(*(FILE **)(a1 + 8));
      if ( v6 != -1 )
      {
        v7 = *(_QWORD *)(a1 + 16) + 1LL;
        *(_QWORD *)(a1 + 16) = v7;
        if ( v6 == *(unsigned __int8 *)(a1 + 48) )
          return __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_literal_character_tchar(
                   a1,
                   v6);
        v8 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 16) = v7 - 1;
        sub_14020CE90(v6, v8);
      }
    }
    return 0;
  }
  v9 = sub_14022E0F4(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 112));
  if ( v9 != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90(v9, *(_QWORD *)(a1 + 8));
  }
  return 1;
}


//----- (000000014023477C) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  unsigned __int8 *v6; // rax
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax

  v2 = *(_DWORD *)(a1 + 52) - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = sub_140233CC4(a1);
        if ( v4 && *(_DWORD *)(a1 + 80) != 9 && !*(_BYTE *)(a1 + 58) )
          ++*(_QWORD *)(a1 + 136);
        return v4;
      }
    }
    else
    {
      v6 = *(unsigned __int8 **)(a1 + 24);
      if ( v6 != *(unsigned __int8 **)(a1 + 16) )
      {
        v7 = *v6;
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 1);
        if ( v7 == *(unsigned __int8 *)(a1 + 56) )
          return __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_literal_character_tchar(
                   a1,
                   v7);
        if ( v6 + 1 != *(unsigned __int8 **)(a1 + 8) )
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6);
      }
    }
    return 0;
  }
  v8 = sub_14022E18C(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 120));
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 != *(_QWORD *)(a1 + 8) && (v9 != *(_QWORD *)(a1 + 16) || v8 != -1) )
    *(_QWORD *)(a1 + 24) = v9 - 1;
  return 1;
}


//----- (0000000140234834) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  unsigned __int16 v6; // ax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  __int64 v11; // r8

  v2 = *(_DWORD *)(a1 + 44) - 2;
  if ( !v2 )
  {
    v10 = sub_14022E144((FILE **)(a1 + 8));
    if ( v10 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(v10, *(_QWORD *)(a1 + 8), v11);
    }
    return 1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v6 = j__fgetwc_nolock(*(FILE **)(a1 + 8));
    v7 = v6;
    if ( v6 == 0xFFFF )
      return 0;
    v8 = *(_QWORD *)(a1 + 16) + 1LL;
    *(_QWORD *)(a1 + 16) = v8;
    if ( (_WORD)v7 != *(_WORD *)(a1 + 48) )
    {
      v9 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = v8 - 1;
      ungetwc_nolock((unsigned __int16)v7, v9, v7);
      return 0;
    }
    return 1;
  }
  if ( v3 != 1 )
    return 0;
  v4 = sub_140233DE4(a1);
  if ( v4 && *(_DWORD *)(a1 + 72) != 9 && !*(_BYTE *)(a1 + 52) )
    ++*(_QWORD *)(a1 + 104);
  return v4;
}

// 1402348DE: variable 'v11' is possibly undefined
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (00000001402348F4) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  __int16 *v6; // rax
  __int16 v7; // dx
  _WORD *v8; // rax
  __int16 v9; // dx
  __int64 v10; // rax

  v2 = *(_DWORD *)(a1 + 52) - 2;
  if ( !v2 )
  {
    v9 = sub_14022E1E0(a1 + 8);
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 != *(_QWORD *)(a1 + 8) && (v10 != *(_QWORD *)(a1 + 16) || v9 != -1) )
      *(_QWORD *)(a1 + 24) = v10 - 2;
    return 1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v6 = *(__int16 **)(a1 + 24);
    if ( v6 == *(__int16 **)(a1 + 16) )
      return 0;
    v7 = *v6;
    v8 = v6 + 1;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8);
    if ( v7 == -1 )
      return 0;
    if ( v7 != *(_WORD *)(a1 + 56) )
    {
      if ( v8 != *(_WORD **)(a1 + 8) )
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 - 1);
      return 0;
    }
    return 1;
  }
  if ( v3 != 1 )
    return 0;
  v4 = sub_140233F00(a1);
  if ( v4 && *(_DWORD *)(a1 + 80) != 9 && !*(_BYTE *)(a1 + 60) )
    ++*(_QWORD *)(a1 + 112);
  return v4;
}


//----- (00000001402349B4) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_string_specifier(
        __int64 *a1,
        int a2)
{
  int v4; // eax
  __int64 v5; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E0F4((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[14]);
    if ( v4 != -1 )
    {
      --a1[2];
      sub_14020CE90(v4, a1[1]);
    }
  }
  v5 = unknown_libname_649((__int64)(a1 + 3)) - 1;
  if ( !v5 )
    return sub_14022D22C((__int64)a1, a2);
  if ( v5 == 1 )
    return sub_14022D954((__int64)a1, a2);
  return 0;
}


//----- (0000000140234A34) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_string_specifier(
        _QWORD *a1,
        int a2)
{
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E18C((__int64)(a1 + 1), (struct __crt_locale_pointers *)a1[15]);
    v5 = a1[3];
    if ( v5 != a1[1] && (v5 != a1[2] || v4 != -1) )
      a1[3] = v5 - 1;
  }
  v6 = unknown_libname_649((__int64)(a1 + 4)) - 1;
  if ( !v6 )
    return sub_14022D3C8((__int64)a1, a2);
  if ( v6 == 1 )
    return sub_14022DB28((__int64)a1, a2);
  return 0;
}


//----- (0000000140234AC0) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_string_specifier(
        __int64 a1,
        int a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // r8
  __int64 v6; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E144((FILE **)(a1 + 8));
    if ( v4 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(v4, *(_QWORD *)(a1 + 8), v5);
    }
  }
  v6 = unknown_libname_650(a1 + 24) - 1;
  if ( !v6 )
    return sub_14022D584(a1, a2);
  if ( v6 == 1 )
    return sub_14022DD14(a1, a2);
  return 0;
}

// 140234AFB: variable 'v5' is possibly undefined
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (0000000140234B48) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_string_specifier(
        _QWORD *a1,
        int a2)
{
  __int16 v4; // cx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E1E0((__int64)(a1 + 1));
    v5 = a1[3];
    if ( v5 != a1[1] && (v5 != a1[2] || v4 != -1) )
      a1[3] = v5 - 2;
  }
  v6 = unknown_libname_650((__int64)(a1 + 4)) - 1;
  if ( !v6 )
    return sub_14022D774((__int64)a1, a2);
  if ( v6 == 1 )
    return sub_14022DED8((__int64)a1, a2);
  return 0;
}


//----- (0000000140234BD8) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____process_whitespace(
        __int64 a1)
{
  __int64 *v1; // rbx
  int v2; // eax

  v1 = (__int64 *)(a1 + 8);
  v2 = sub_14022E0F4(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 112));
  if ( v2 != -1 )
  {
    --v1[1];
    sub_14020CE90(v2, *v1);
  }
  return 1;
}


//----- (0000000140234C0C) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____process_whitespace(
        __int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // ecx
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 8);
  v2 = sub_14022E18C(a1 + 8, *(struct __crt_locale_pointers **)(a1 + 120));
  v3 = v1[2];
  if ( v3 != *v1 && (v3 != v1[1] || v2 != -1) )
    v1[2] = v3 - 1;
  return 1;
}


//----- (0000000140234C48) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____process_whitespace(
        __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned __int16 v2; // ax
  __int64 v3; // r8

  v1 = (_QWORD *)(a1 + 8);
  v2 = sub_14022E144((FILE **)(a1 + 8));
  if ( v2 != 0xFFFF )
  {
    --v1[1];
    ungetwc_nolock(v2, *v1, v3);
  }
  return 1;
}

// 140234C72: variable 'v3' is possibly undefined
// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (0000000140234C80) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____process_whitespace(
        __int64 a1)
{
  _QWORD *v1; // rbx
  __int16 v2; // cx
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 8);
  v2 = sub_14022E1E0(a1 + 8);
  v3 = v1[2];
  if ( v3 != *v1 && (v3 != v1[1] || v2 != -1) )
    v1[2] = v3 - 2;
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
    sub_1401FCD30((void *)(uintptr_t)(a1), 0, 0x20u);
}


//----- (0000000140234CFC) ----------------------------------------------------
void            sub_140234CFC(void **a1)
{
  _WORD *v2; // rcx
  void *v3; // rbx

  v2 = *a1;
  if ( v2 || (v3 = (void *)calloc_base(0x2000, 1), free_base(*a1), *a1 = v3, free_base(nullptr), (v2 = *a1) != nullptr) )
    sub_1401FCD30((void *)(uintptr_t)(v2), 0, 0x2000u);
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140234E14) ----------------------------------------------------
unsigned __int64            sub_140234E14(sr_anon_107 *this, unsigned __int64 a2, unsigned int a3, char a4)
{
  char v4; // r15
  unsigned __int8 v6; // si
  __int64 v8; // r12
  unsigned __int8 v9; // bl
  __int64 v10; // r14
  char v11; // bp
  int v12; // eax

  v4 = a3;
  v6 = (unsigned __int8)this;
  if ( a3 >= 0x40 )
    return 0;
  v8 = a2 & (1LL << a3);
  v9 = 0;
  v10 = a2 & (1LL << ((unsigned __int8)a3 - 1));
  if ( !a4 || (v11 = 0, (((1LL << ((unsigned __int8)a3 - 1)) - 1) & a2) != 0) )
    v11 = 1;
  if ( v10 || v11 )
  {
    v12 = fegetround_0();
    switch ( v12 )
    {
      case 0:
        if ( v10 && (v11 || v8) )
          v9 = 1;
        return (a2 >> v4) + v9;
      case 256:
        goto LABEL_12;
      case 512:
        v6 ^= 1u;
LABEL_12:
        v9 = v6;
        break;
    }
  }
  return (a2 >> v4) + v9;
}


//----- (0000000140234F00) ----------------------------------------------------
char            sub_140234F00(__int64 a1)
{
  unsigned __int8 *v1; // r8
  unsigned __int8 v3; // al
  int v5; // r9d
  int v6; // ecx
  int v7; // ecx

  v1 = *(unsigned __int8 **)(a1 + 8);
  v3 = *v1;
  if ( *v1 > 0x64u )
  {
    if ( v3 <= 0x67u )
      goto LABEL_50;
    switch ( v3 )
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
  if ( *v1 == 100 )
  {
    *(_DWORD *)(a1 + 48) = 3;
LABEL_51:
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
    return 1;
  }
  if ( v3 <= 0x53u )
  {
    if ( v3 != 83 )
    {
      if ( v3 == 65 )
        goto LABEL_50;
      if ( v3 != 67 )
      {
        if ( v3 <= 0x44u )
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
        if ( v3 > 0x47u )
        {
          if ( v3 != 73 )
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
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 == 2 )
        *(_BYTE *)(a1 + 44) = 0;
      if ( ((v5 - 3) & 0xFFFFFFFA) == 0 && v5 != 7 )
        *(_BYTE *)(a1 + 44) = 1;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
      return 1;
    }
LABEL_40:
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 == 2 )
      *(_BYTE *)(a1 + 44) = 0;
    if ( ((v7 - 3) & 0xFFFFFFFA) == 0 && v7 != 7 )
      *(_BYTE *)(a1 + 44) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
    return 1;
  }
  if ( v3 == 88 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 48) = 6;
    goto LABEL_51;
  }
  if ( v3 != 91 )
  {
    if ( v3 == 97 )
      goto LABEL_50;
    if ( v3 != 99 )
      goto LABEL_10;
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  if ( ((v6 - 3) & 0xFFFFFFFA) == 0 && v6 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  *(_DWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
  return sub_140235928(a1);
}


//----- (00000001402350A4) ----------------------------------------------------
char            sub_1402350A4(__int64 a1)
{
  _WORD *v1; // r8
  int v4; // r9d
  int v5; // ecx
  int v6; // ecx

  v1 = *(_WORD **)(a1 + 8);
  if ( *v1 > 0x64u )
  {
    if ( *v1 <= 0x67u )
      goto LABEL_50;
    switch ( *v1 )
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
  if ( *v1 == 100 )
  {
    *(_DWORD *)(a1 + 48) = 3;
LABEL_51:
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
    return 1;
  }
  if ( *v1 <= 0x53u )
  {
    if ( *v1 != 83 )
    {
      if ( *v1 == 65 )
        goto LABEL_50;
      if ( *v1 != 67 )
      {
        if ( *v1 <= 0x44u )
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
        if ( *v1 > 0x47u )
        {
          if ( *v1 != 73 )
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
      v4 = *(_DWORD *)(a1 + 40);
      if ( v4 == 2 )
        *(_BYTE *)(a1 + 44) = 0;
      if ( ((v4 - 3) & 0xFFFFFFFA) == 0 && v4 != 7 )
        *(_BYTE *)(a1 + 44) = 1;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
      return 1;
    }
LABEL_40:
    v6 = *(_DWORD *)(a1 + 40);
    if ( v6 == 2 )
      *(_BYTE *)(a1 + 44) = 0;
    if ( ((v6 - 3) & 0xFFFFFFFA) == 0 && v6 != 7 )
      *(_BYTE *)(a1 + 44) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
    return 1;
  }
  if ( *v1 == 88 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 48) = 6;
    goto LABEL_51;
  }
  if ( *v1 != 91 )
  {
    if ( *v1 == 97 )
      goto LABEL_50;
    if ( *v1 != 99 )
      goto LABEL_10;
    goto LABEL_15;
  }
  v5 = *(_DWORD *)(a1 + 40);
  if ( v5 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  if ( ((v5 - 3) & 0xFFFFFFFA) == 0 && v5 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  *(_DWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
  return sub_140235ADC(a1);
}


//----- (00000001402352B4) ----------------------------------------------------
char            sub_1402352B4(__int64 a1)
{
  char *v2; // rcx
  unsigned int v3; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(char **)(a1 + 8);
  if ( (unsigned __int8)(*v2 - 48) > 9u )
  {
    if ( (unsigned __int8)(*v2 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(*v2 - 65) > 0x19u )
        v3 = -1;
      else
        v3 = *v2 - 55;
    }
    else
    {
      v3 = *v2 - 87;
    }
  }
  else
  {
    v3 = *v2 - 48;
  }
  if ( v3 > 9 )
    return 1;
  v7 = 0;
  v5 = sub_14023CD50(v2, (char *)&v7, 10);
  if ( v5 )
  {
    v6 = v7;
    if ( v7 != *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 32) = v5;
      *(_QWORD *)(a1 + 8) = v6;
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
  unsigned __int16 *v1; // r9
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v3 = 48;
  if ( *v1 >= 0x30u )
  {
    if ( *v1 < 0x3Au )
      goto LABEL_3;
    v3 = 65296;
    if ( *v1 >= 0xFF10u )
    {
      if ( *v1 >= 0xFF1Au )
      {
        v4 = -1;
LABEL_39:
        if ( v4 != -1 )
          goto LABEL_46;
        goto LABEL_40;
      }
LABEL_3:
      v4 = *v1 - v3;
      goto LABEL_39;
    }
    v3 = 1632;
    if ( *v1 >= 0x660u )
    {
      if ( *v1 < 0x66Au )
        goto LABEL_3;
      v3 = 1776;
      if ( *v1 >= 0x6F0u )
      {
        if ( *v1 < 0x6FAu )
          goto LABEL_3;
        v3 = 2406;
        if ( *v1 >= 0x966u )
        {
          if ( *v1 < 0x970u )
            goto LABEL_3;
          v3 = 2534;
          if ( *v1 >= 0x9E6u )
          {
            if ( *v1 < 0x9F0u )
              goto LABEL_3;
            v3 = 2662;
            if ( *v1 >= 0xA66u )
            {
              if ( *v1 < 0xA70u )
                goto LABEL_3;
              v3 = 2790;
              if ( *v1 >= 0xAE6u )
              {
                if ( *v1 < 0xAF0u )
                  goto LABEL_3;
                v3 = 2918;
                if ( *v1 >= 0xB66u )
                {
                  if ( *v1 < 0xB70u )
                    goto LABEL_3;
                  v3 = 3174;
                  if ( *v1 >= 0xC66u )
                  {
                    if ( *v1 < 0xC70u )
                      goto LABEL_3;
                    v3 = 3302;
                    if ( *v1 >= 0xCE6u )
                    {
                      if ( *v1 < 0xCF0u )
                        goto LABEL_3;
                      v3 = 3430;
                      if ( *v1 >= 0xD66u )
                      {
                        if ( *v1 < 0xD70u )
                          goto LABEL_3;
                        v3 = 3664;
                        if ( *v1 >= 0xE50u )
                        {
                          if ( *v1 < 0xE5Au )
                            goto LABEL_3;
                          v3 = 3792;
                          if ( *v1 >= 0xED0u )
                          {
                            if ( *v1 < 0xEDAu )
                              goto LABEL_3;
                            v3 = 3872;
                            if ( *v1 >= 0xF20u )
                            {
                              if ( *v1 < 0xF2Au )
                                goto LABEL_3;
                              v3 = 4160;
                              if ( *v1 >= 0x1040u )
                              {
                                if ( *v1 < 0x104Au )
                                  goto LABEL_3;
                                v3 = 6112;
                                if ( *v1 >= 0x17E0u )
                                {
                                  if ( *v1 < 0x17EAu )
                                    goto LABEL_3;
                                  v3 = 6160;
                                  if ( (unsigned __int16)(*v1 - 6160) <= 9u )
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
  v5 = *v1;
  v6 = v5 - 97;
  if ( (unsigned int)(v5 - 65) <= 0x19 || v6 <= 0x19 )
  {
    v7 = v5 - 32;
    if ( v6 > 0x19 )
      v7 = *v1;
    v4 = v7 - 55;
  }
  else
  {
    v4 = -1;
  }
LABEL_46:
  if ( v4 > 9 )
    return 1;
  v11 = 0;
  v9 = sub_14023CE58(v1, (unsigned __int16 *)&v11, 10);
  if ( v9 )
  {
    v10 = v11;
    if ( v11 != *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 32) = v9;
      *(_QWORD *)(a1 + 8) = v10;
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
  unsigned __int64 v1; // rax
  _BYTE *v2; // r8
  char v4; // al
  char v5; // cl
  _BYTE *v6; // rcx
  char v7; // al
  __int64 v8; // r8

  v2 = *(_BYTE **)(a1 + 8);
  LOBYTE(v1) = *v2;
  if ( *v2 == 73 )
  {
    v6 = v2 + 1;
    v7 = v2[1];
    if ( v7 == 51 )
    {
      if ( v2[2] == 50 )
      {
        *(_DWORD *)(a1 + 40) = 9;
        *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 3);
        LOBYTE(v1) = (_BYTE)v2 + 3;
        return v1;
      }
    }
    else if ( v7 == 54 && v2[2] == 52 )
    {
      LOBYTE(v1) = (_BYTE)v2 + 3;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 3);
      goto LABEL_25;
    }
    LOBYTE(v1) = v7 - 88;
    if ( (unsigned __int8)v1 > 0x20u )
      return v1;
    v8 = 0x120821001LL;
    if ( !_bittest64(&v8, v1) )
      return v1;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v6);
LABEL_25:
    *(_DWORD *)(a1 + 40) = 10;
    return v1;
  }
  switch ( (_BYTE)v1 )
  {
    case 'L':
      *(_DWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 1);
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'T':
      *(_DWORD *)(a1 + 40) = 11;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 1);
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'h':
      v5 = v2[1];
      v1 = (unsigned __int64)&v2[(v5 == 104) + 1];
      *(_QWORD *)(a1 + 8) = v1;
      *(_DWORD *)(a1 + 40) = (v5 != 104) + 1;
      break;
    case 'j':
      *(_DWORD *)(a1 + 40) = 5;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 1);
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'l':
      v4 = v2[1];
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&v2[(v4 == 108) + 1]);
      LODWORD(v1) = 4 - (v4 != 108);
      *(_DWORD *)(a1 + 40) = v1;
      break;
    case 't':
      *(_DWORD *)(a1 + 40) = 7;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 1);
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'z':
      *(_DWORD *)(a1 + 40) = 6;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 1);
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
  }
  return v1;
}

// 1402356EF: variable 'v1' is possibly undefined

//----- (0000000140235704) ----------------------------------------------------
void            sub_140235704(__int64 a1)
{
  _WORD *v1; // r8
  __int16 v3; // cx
  __int64 v4; // rax
  int v5; // eax
  __int16 v6; // cx
  __int64 v7; // r9
  _WORD *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r8

  v1 = *(_WORD **)(a1 + 8);
  if ( *v1 != 73 )
  {
    if ( *v1 == 76 )
    {
      *(_DWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
      return;
    }
    if ( *v1 == 84 )
    {
      *(_DWORD *)(a1 + 40) = 11;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
      return;
    }
    if ( *v1 == 104 )
    {
      v6 = v1[1];
      v7 = 2;
      if ( v6 != 104 )
        v7 = 1;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&v1[v7]);
      v5 = (v6 != 104) + 1;
    }
    else
    {
      if ( *v1 == 106 )
      {
        *(_DWORD *)(a1 + 40) = 5;
        *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
        return;
      }
      if ( *v1 != 108 )
      {
        if ( *v1 == 116 )
        {
          *(_DWORD *)(a1 + 40) = 7;
          *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
        }
        else if ( *v1 == 122 )
        {
          *(_DWORD *)(a1 + 40) = 6;
          *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 1);
        }
        return;
      }
      v3 = v1[1];
      v4 = 2;
      if ( v3 != 108 )
        v4 = 1;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(&v1[v4]);
      v5 = 4 - (v3 != 108);
    }
    *(_DWORD *)(a1 + 40) = v5;
    return;
  }
  v8 = v1 + 1;
  v9 = (unsigned __int16)v1[1];
  if ( (_WORD)v9 == 51 )
  {
    if ( v1[2] == 50 )
    {
      *(_DWORD *)(a1 + 40) = 9;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 3);
      return;
    }
  }
  else if ( (_WORD)v9 == 54 && v1[2] == 52 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v1 + 3);
LABEL_30:
    *(_DWORD *)(a1 + 40) = 10;
    return;
  }
  LOWORD(v9) = v9 - 88;
  if ( (unsigned __int16)v9 <= 0x20u )
  {
    v10 = 0x120821001LL;
    if ( _bittest64(&v10, v9) )
    {
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v8);
      goto LABEL_30;
    }
  }
}


//----- (0000000140235864) ----------------------------------------------------
char            sub_140235864(__int64 a1)
{
  _BYTE *v2; // rax

  if ( (sub_140256DC0()[*(unsigned __int8 *)(a1 + 24)] & 0x8000u) != 0 )
  {
    v2 = *(_BYTE **)(a1 + 8);
    if ( !*v2 )
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
    *(_BYTE *)(a1 + 25) = *v2;
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2 + 1);
  }
  return 1;
}


//----- (0000000140235928) ----------------------------------------------------
char            sub_140235928(__int64 a1)
{
  unsigned __int64 v1; // rdi
  _BYTE *v4; // r8
  _BYTE *v5; // rcx
  char v6; // r11
  unsigned __int8 v7; // al
  _BYTE *v8; // rsi
  _BYTE *v9; // rdx
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r9
  char v13; // r10
  _BYTE *v14; // rdx

  v1 = a1 + 52;
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
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 52)), 0, 0x20u);
  v4 = *(_BYTE **)(a1 + 8);
  v5 = v4;
  v6 = *v4;
  v7 = *v4;
  if ( *v4 == 94 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(++v4);
    v5 = v4;
    v7 = *v4;
  }
  if ( v7 == 93 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(++v4);
    *(_BYTE *)(a1 + 63) |= 0x20u;
    v5 = v4;
    v7 = *v4;
  }
  v8 = nullptr;
  if ( v7 != 93 )
  {
    v9 = v4;
    do
    {
      if ( !v7 )
        break;
      if ( v7 != 45 || v9 - 1 == v8 || v9 == v4 || v9[1] == 93 )
      {
        *(_BYTE *)(((unsigned __int64)v7 >> 3) + a1 + 52) |= 1 << (v7 & 7);
      }
      else
      {
        v10 = *(v9 - 1);
        v8 = v9 + 1;
        v11 = v10;
        v12 = v9[1];
        if ( v10 <= v12 )
          v11 = v9[1];
        v13 = v11 + 1;
        if ( v10 <= v9[1] )
          v12 = *(v9 - 1);
        while ( v12 != v13 )
        {
          *(_BYTE *)(((unsigned __int64)v12 >> 3) + a1 + 52) |= 1 << (v12 & 7);
          ++v12;
        }
      }
      v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v5);
      v9 = v5;
      v7 = *v5;
    }
    while ( *v5 != 93 );
  }
  if ( !*v5 )
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
  if ( v6 == 94 )
  {
    v14 = (_BYTE *)v1;
    if ( v1 < v1 + 32 )
    {
      do
      {
        *v14 = ~*v14;
        ++v14;
      }
      while ( &v14[-v1] != (_BYTE *)(v1 + 32 >= v1 ? 0x20 : 0) );
      v5 = *(_BYTE **)(a1 + 8);
    }
  }
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v5 + 1);
  return 1;
}


//----- (0000000140235ADC) ----------------------------------------------------
char            sub_140235ADC(__int64 a1)
{
  void **v1; // rsi
  _WORD *v3; // rcx
  __int64 v4; // rbx
  unsigned __int16 *v6; // rbx
  unsigned __int16 *v7; // rcx
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // r12
  unsigned __int16 *v11; // rdx
  unsigned __int16 *v12; // rcx
  unsigned __int16 v13; // bp
  unsigned __int16 v14; // r14
  __int16 v15; // r14
  unsigned __int16 v16; // [rsp+50h] [rbp+8h]

  v1 = (void **)(a1 + 56);
  v3 = *(_WORD **)(a1 + 56);
  if ( !v3 )
  {
    v4 = calloc_base(0x2000, 1);
    free_base(*v1);
    *v1 = (void *)v4;
    free_base(nullptr);
    v3 = *v1;
    if ( !*v1 )
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
  sub_1401FCD30((void *)(uintptr_t)(v3), 0, 0x2000u);
  v6 = *(unsigned __int16 **)(a1 + 8);
  v7 = v6;
  v8 = *v6;
  v16 = *v6;
  v9 = *v6;
  if ( *v6 == 94 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(++v6);
    v7 = v6;
    v9 = *v6;
  }
  if ( v9 == 93 )
  {
    *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v6 + 1);
    sub_140235D1C(v1, 0x5Du);
    v6 = *(unsigned __int16 **)(a1 + 8);
    v7 = v6;
    v9 = *v6;
  }
  v10 = nullptr;
  if ( v9 != 93 )
  {
    v11 = v6;
    do
    {
      if ( !v9 )
        break;
      if ( v9 != 45 || (v12 = v11 - 1, v11 - 1 == v10) || v11 == v6 || (v13 = v11[1], v13 == 93) )
      {
        sub_140235D1C(v1, v9);
      }
      else
      {
        v14 = *v12;
        v10 = v11 + 1;
        if ( *v12 <= v13 )
          v14 = v11[1];
        v15 = v14 + 1;
        if ( *v12 <= v13 )
          v13 = *v12;
        for ( ; v13 != v15; ++v13 )
          sub_140235D1C(v1, v13);
      }
      v7 = (unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 2LL);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v7);
      v11 = v7;
      v9 = *v7;
    }
    while ( *v7 != 93 );
    v8 = v16;
  }
  if ( !*v7 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = 22;
    goto LABEL_4;
  }
  if ( v8 == 94 )
  {
    sub_1402326E8((char **)v1);
    v7 = *(unsigned __int16 **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v7 + 1);
  return 1;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140235D1C) ----------------------------------------------------
__int64            sub_140235D1C(void **a1, unsigned __int16 a2)
{
  _BYTE *v2; // r8
  void *v5; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( !*a1 )
  {
    v5 = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = v5;
    free_base(nullptr);
    v2 = *a1;
  }
  result = a2 & 7;
  v2[(unsigned __int64)a2 >> 3] |= 1 << result;
  return result;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140235D88) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_657(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  result = (unsigned int)(v1 - 3);
  if ( (result & 0xFFFFFFFA) == 0 && v1 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  return result;
}


//----- (0000000140235DD0) ----------------------------------------------------
char            sub_140235DD0(sr_anon_107 *this, struct __crt_strtox__big_integer *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // r11d
  int v5; // edx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  bool v10; // cc
  int v11; // ebx
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __m128i Source; // [rsp+24h] [rbp-1F4h] BYREF

  v3 = (unsigned __int8)a2 & 0x1F;
  v4 = (unsigned int)a2 >> 5;
  v5 = *(_DWORD *)this;
  if ( !_BitScanReverse((unsigned int *)&v7, *((_DWORD *)this + (unsigned int)(*(_DWORD *)this - 1) + 1)) )
    v8 = 0;
  else
    v8 = v7 + 1;
  v9 = 32 - v8;
  v10 = v5 + v4 <= 0x73;
  if ( v5 + v4 == 115 )
  {
    if ( v3 > v9 )
    {
LABEL_24:
      *(_DWORD *)this = 0;
      sub_140236F50((__m128i *)((char *)this + 4), 0x1CCu, &Source, 0);
      return 0;
    }
    v10 = 1;
  }
  if ( !v10 )
    goto LABEL_24;
  v11 = 114;
  if ( v5 + v4 < 0x72 )
    v11 = v5 + v4;
  v12 = v11;
  do
  {
    if ( v12 < v4 )
      break;
    v13 = v12 - v4;
    v14 = (unsigned int)(v13 - 1);
    v15 = (unsigned int)v13 >= *(_DWORD *)this ? 0 : *((_DWORD *)this + v13 + 1);
    v16 = (unsigned int)v14 >= *(_DWORD *)this ? 0 : *((_DWORD *)this + v14 + 1);
    v17 = v12--;
    *((_DWORD *)this + v17 + 1) = ((((unsigned int)(1LL << (32 - (unsigned __int8)v3)) - 1) & v15) << v3)
                                | ((~((unsigned int)(1LL << (32 - (unsigned __int8)v3)) - 1) & v16) >> (32 - v3));
  }
  while ( v12 != -1 );
  v18 = 0;
  if ( v4 )
  {
    do
    {
      v19 = v18++;
      *((_DWORD *)this + v19 + 1) = 0;
    }
    while ( v18 != v4 );
  }
  v20 = v11 + 1;
  if ( v3 <= v9 )
    v20 = v11;
  *(_DWORD *)this = v20;
  return 1;
}

// 140235E5C: conditional instruction was optimized away because ebx.4<73u

//----- (0000000140235F50) ----------------------------------------------------
char            sub_140235F50(__crt_strtox *this, char a2, char a3, char a4)
{
  char v4; // bl
  char v8; // di
  int v9; // eax

  v4 = 0;
  v8 = (char)this;
  if ( !a3 && !a4 )
    return 0;
  v9 = fegetround_0();
  if ( v9 )
  {
    if ( v9 == 256 )
    {
      return v8;
    }
    else
    {
      if ( v9 != 512 )
        return 0;
      return v8 ^ 1;
    }
  }
  else
  {
    if ( a3 && (a4 || a2) )
      return 1;
    return v4;
  }
}


//----- (0000000140236014) ----------------------------------------------------
bool            sub_140236014(void **a1, unsigned __int16 a2)
{
  _BYTE *v2; // r8
  void *v5; // rbx

  v2 = *a1;
  if ( !*a1 )
  {
    v5 = (void *)calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = v5;
    free_base(nullptr);
    v2 = *a1;
  }
  return ((unsigned __int8)(1 << (a2 & 7)) & v2[(unsigned __int64)a2 >> 3]) != 0;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (00000001402360F4) ----------------------------------------------------
unsigned __int64            sub_1402360F4(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  bool v3; // zf
  __int64 *v4; // rdx

  result = *(_QWORD *)(a1 + 16) - 1LL;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 16) = result;
  if ( v3 || result <= *(_QWORD *)(a1 + 8) )
  {
    result = (unsigned int)(a2 + 1);
    if ( (unsigned __int8)(a2 + 1) > 1u )
    {
      result = (unsigned int)(char)a2;
      v4 = *(__int64 **)a1;
      if ( (_DWORD)result != -1 )
      {
        --v4[1];
        return sub_14020CE90(result, *v4);
      }
    }
  }
  return result;
}


//----- (0000000140236138) ----------------------------------------------------
unsigned __int64            sub_140236138(__int64 **a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  bool v4; // zf
  _QWORD *v5; // rdx

  v2 = a2;
  result = (unsigned __int64)a1[2] - 1;
  v4 = a1[1] == nullptr;
  a1[2] = (__int64 *)result;
  if ( v4 || result <= (unsigned __int64)a1[1] )
  {
    result = (unsigned int)a2 - 1;
    if ( (unsigned __int16)(a2 - 1) <= 0xFFFDu )
    {
      v5 = *a1;
      --v5[1];
      return ungetwc_nolock((unsigned __int16)v2, *v5, v2);
    }
  }
  return result;
}

// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (00000001402361F0) ----------------------------------------------------
__int64            __crt_stdio_input__stream_input_adapter__char__unget(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax

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
  __int64 result; // rax

  result = a2;
  if ( a2 != 0xFFFF )
  {
    --a1[1];
    return ungetwc_nolock(a2, *a1, a3);
  }
  return result;
}

// 140257CD0: using guessed type __int64 __fastcall ungetwc_nolock(_QWORD, _QWORD, _QWORD);

//----- (0000000140236278) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_659(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
  return 0;
}


//----- (0000000140236378) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_665(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    return sub_14022389C(v1);
  *errno_sr() = 22;
  sub_14024CF6C();
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
  sub_14024CF6C();
  return 0;
}


//----- (00000001402363CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_667(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 && v1 <= *(_QWORD *)(a1 + 8) )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (00000001402363FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_668(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 && v1 <= *(_QWORD *)(a1 + 8) )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
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
  __int64 v6; // rdi
  int v9; // eax
  __int64 v10; // r9
  __int16 v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = (unsigned __int8)a6;
  HIBYTE(a6) = 0;
  if ( (sub_140256DC0()[v6] & 0x8000u) != 0 )
  {
    v9 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v9 != -1 )
      ++*(_QWORD *)(a1 + 16);
    HIBYTE(a6) = v9;
  }
  v10 = *(_QWORD *)(a1 + 112);
  v12 = 63;
  mbtowc_l((sr_anon_115 *)&v12, (sr_anon_49 *)&a6, (char *)*(int *)(*(_QWORD *)v10 + 8LL), (struct __crt_locale_pointers *)v10);
  *(*a4)++ = (char)v6;
  --*a5;
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (00000001402366A0) ----------------------------------------------------
char            sub_1402366A0(_QWORD *a1, __int64 a2, __int64 a3, _WORD **a4, _QWORD *a5, __int16 a6)
{
  __int64 v6; // rdi
  char *v9; // rax
  char v10; // cl
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int16 v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = (unsigned __int8)a6;
  HIBYTE(a6) = 0;
  if ( (sub_140256DC0()[v6] & 0x8000u) != 0 )
  {
    v9 = (char *)a1[3];
    if ( v9 == (char *)a1[2] )
    {
      v10 = -1;
    }
    else
    {
      v10 = *v9;
      a1[3] = (uint64)(uintptr_t)(v9 + 1);
    }
    HIBYTE(a6) = v10;
  }
  v11 = a1[15];
  v14 = 63;
  mbtowc_l((sr_anon_115 *)&v14, (sr_anon_49 *)&a6, (char *)*(int *)(*(_QWORD *)v11 + 8LL), (struct __crt_locale_pointers *)v11);
  **a4 = (char)v6;
  v12 = a5;
  ++*a4;
  --*v12;
  return 1;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

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
       struct DLGTEMPLATE *v8; // rdx
  int Indirect; // eax
  __int64 v10; // rcx
  struct CWnd **v11; // rax
  struct CWnd **v12; // rdi
  __int64 v14; // rax
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  v8 = *a4;
  if ( a3 == -1 )
  {
    Indirect = CDialog__CreateIndirect((CDialog *)&v15, v8, (struct CWnd *)5, (void *)a6);
    if ( Indirect )
    {
      if ( Indirect == 22 || Indirect == 34 )
      {
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
    else
    {
      v10 = v15;
      v11 = a5;
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + v15);
      *v11 = (struct CWnd *)((char *)*v11 - v10);
    }
  }
  else
  {
    v12 = a5;
    if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&v15, v8, *a5, (void *)a6) == 34 )
    {
      *a2 = 0;
      return 0;
    }
    v14 = v15;
    if ( v15 > 0 )
    {
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + v15);
      *v12 = (struct CWnd *)((char *)*v12 - v14);
    }
  }
  return 1;
}

// 1402367DC: control flows out of bounds to 1402367E1
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

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
       struct DLGTEMPLATE *v8; // rdx
  int Indirect; // eax
  __int64 v10; // rcx
  struct CWnd **v11; // rax
  struct CWnd **v12; // rdi
  __int64 v14; // rax
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  v8 = *a4;
  if ( a3 == -1 )
  {
    Indirect = CDialog__CreateIndirect((CDialog *)&v15, v8, (struct CWnd *)5, (void *)a6);
    if ( Indirect )
    {
      if ( Indirect == 22 || Indirect == 34 )
      {
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
    else
    {
      v10 = v15;
      v11 = a5;
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + v15);
      *v11 = (struct CWnd *)((char *)*v11 - v10);
    }
  }
  else
  {
    v12 = a5;
    if ( (unsigned int)CDialog__CreateIndirect((CDialog *)&v15, v8, *a5, (void *)a6) == 34 )
    {
      *a2 = 0;
      return 0;
    }
    v14 = v15;
    if ( v15 > 0 )
    {
      *a4 = (     struct DLGTEMPLATE *)((char *)*a4 + v15);
      *v12 = (struct CWnd *)((char *)*v12 - v14);
    }
  }
  return 1;
}

// 1402368A4: control flows out of bounds to 1402368A9
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (00000001402368C8) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__stream_input_adapter__char____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)(a1 + 120) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
  if ( !v3 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v5 = unknown_libname_649(a1 + 24) - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0;
        *v3 = a2;
      }
      else
      {
        *(_DWORD *)v3 = a2;
      }
    }
    else
    {
      *(_WORD *)v3 = a2;
    }
  }
  else
  {
    *(_BYTE *)v3 = a2;
  }
  return 1;
}


//----- (000000014023693C) ----------------------------------------------------
char            __crt_stdio_input__input_processor__char____crt_stdio_input__string_input_adapter__char____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)(a1 + 128) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( !v3 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v5 = unknown_libname_649(a1 + 32) - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0;
        *v3 = a2;
      }
      else
      {
        *(_DWORD *)v3 = a2;
      }
    }
    else
    {
      *(_WORD *)v3 = a2;
    }
  }
  else
  {
    *(_BYTE *)v3 = a2;
  }
  return 1;
}


//----- (00000001402369B4) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__stream_input_adapter__wchar_t____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)(a1 + 96) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( !v3 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v5 = unknown_libname_650(a1 + 24) - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0;
        *v3 = a2;
      }
      else
      {
        *(_DWORD *)v3 = a2;
      }
    }
    else
    {
      *(_WORD *)v3 = a2;
    }
  }
  else
  {
    *(_BYTE *)v3 = a2;
  }
  return 1;
}


//----- (0000000140236A28) ----------------------------------------------------
char            __crt_stdio_input__input_processor__wchar_t____crt_stdio_input__string_input_adapter__wchar_t____write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)(a1 + 104) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( !v3 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v5 = unknown_libname_650(a1 + 32) - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0;
        *v3 = a2;
      }
      else
      {
        *(_DWORD *)v3 = a2;
      }
    }
    else
    {
      *(_WORD *)v3 = a2;
    }
  }
  else
  {
    *(_BYTE *)v3 = a2;
  }
  return 1;
}


//----- (0000000140236ADC) ----------------------------------------------------
__int64            sub_140236ADC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v10 = a4;
  v13 = a3;
  v11 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = (uint64)(uintptr_t)(&v10);
    v8 = a2;
    v9[1] = (uint64)(uintptr_t)(&v11);
    v9[2] = (uint64)(uintptr_t)(&v12);
    v9[3] = (uint64)(uintptr_t)(&v13);
    v9[4] = (uint64)(uintptr_t)(&v6);
    return sub_1402251E4((__int64)&a5, &v8, (__int64)v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (0000000140236B68) ----------------------------------------------------
__int64            sub_140236B68(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v10 = a4;
  v13 = a3;
  v11 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = (uint64)(uintptr_t)(&v10);
    v8 = a2;
    v9[1] = (uint64)(uintptr_t)(&v11);
    v9[2] = (uint64)(uintptr_t)(&v12);
    v9[3] = (uint64)(uintptr_t)(&v13);
    v9[4] = (uint64)(uintptr_t)(&v6);
    return sub_140225224((__int64)&a5, &v8, (__int64)v9, &v7);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
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
    sub_14024CF6C();
    return UINT32_MAX;
  }
  length=(uintptr_t)strnlen_sr(input,limit);
  sub_140213644((_LocaleUpdate *)(void *)&locale,provided);
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
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int128 v12; // [rsp+28h] [rbp-89h]
  __int64 v13; // [rsp+48h] [rbp-69h] BYREF
  __int128 v14; // [rsp+50h] [rbp-61h]
  __m128i *v15; // [rsp+60h] [rbp-51h]
  __int64 v16; // [rsp+68h] [rbp-49h]
  __int64 v17; // [rsp+70h] [rbp-41h]
  __int64 v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+80h] [rbp-31h]
  char v20; // [rsp+84h] [rbp-2Dh]
  __int64 v21; // [rsp+88h] [rbp-29h]
  int v22; // [rsp+90h] [rbp-21h]
  char v23; // [rsp+94h] [rbp-1Dh]
  int v24; // [rsp+98h] [rbp-19h]
  void *Block; // [rsp+A0h] [rbp-11h]
  _BYTE *v26; // [rsp+A8h] [rbp-9h]
  __int64 v27; // [rsp+B0h] [rbp-1h]
  __int64 v28; // [rsp+B8h] [rbp+7h]
  __int64 v29; // [rsp+C8h] [rbp+17h] BYREF
  _BYTE v30[24]; // [rsp+D0h] [rbp+1Fh] BYREF

  if ( a2 && a4 )
  {
    v10 = sub_140254F48(a2, a3);
    sub_140213644((_LocaleUpdate *)&v29, a5);
    *(_QWORD *)&v12 = (uint64)(uintptr_t)(a2);
    *((_QWORD *)&v12 + 1) = (uint64)(uintptr_t)((char *)a2 + 2 * v10);
    v26 = v30;
    v27 = a6;
    v13 = a1;
    v14 = v12;
    v16 = a1;
    v15 = a2;
    v17 = a4;
    v18 = 0;
    Block = nullptr;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v28 = 0;
    v9 = sub_140233A68((__int64)&v13);
    free_base(Block);
    Block = nullptr;
    if ( v30[16] )
      *(_DWORD *)(v29 + 936) &= ~2u;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return (unsigned int)-1;
  }
  return v9;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140236E34) ----------------------------------------------------
__int64            sub_140236E34(int a1, int a2, _QWORD **a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebx
       unsigned __int16 *v8; // rax

  v3 = a1;
  v4 = 0;
  v6 = a1 + 1;
  if ( a3 )
  {
    if ( v6 <= 0x100 )
    {
      v7 = *(unsigned __int16 *)(**a3 + 2LL * a1);
      return a2 & v7;
    }
  }
  else
  {
    v8 = sub_140256DC0();
    if ( v6 <= 0x100 )
    {
      v7 = v8[v3];
      return a2 & v7;
    }
  }
  return v4;
}


//----- (0000000140236E98) ----------------------------------------------------
__int64            sub_140236E98(unsigned int a1, int a2, int a3)
{
  if ( a1 && (a1 == a2 || a1 == a3) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return a1;
}

// 140236ECF: control flows out of bounds to 140236ED4

//----- (0000000140236ED8) ----------------------------------------------------
__int64            sub_140236ED8(unsigned int a1, __int16 a2, struct __crt_locale_pointers *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rax
       unsigned __int16 *v9; // rax

  v3 = (int)a1;
  v4 = 0;
  v6 = a1 + 1;
  if ( a3 )
  {
    v7 = *(_QWORD *)a3;
    if ( v6 > 0x100 )
    {
      if ( *(int *)(v7 + 8) <= 1 )
        return 0;
      else
        return isctype_l(a1, a2, a3);
    }
    else
    {
      return (unsigned __int16)(a2 & *(_WORD *)(*(_QWORD *)v7 + 2LL * (int)a1));
    }
  }
  else
  {
    v9 = sub_140256DC0();
    if ( v6 <= 0x100 )
      return (unsigned __int16)(a2 & v9[v3]);
    return v4;
  }
}

// 140256EA0: using guessed type __int64 __fastcall isctype_l(_QWORD);

//----- (0000000140236F50) ----------------------------------------------------
__int64            sub_140236F50(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    sub_1401FC920(a1, a3, a4);
    return 0;
  }
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = errno_sr();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    sub_14024CF6C();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = errno_sr();
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}


//----- (0000000140236FF0) ----------------------------------------------------
__int64            strncmp_sr(const char *left, const char *right, unsigned __int64 a3)
{
  const _QWORD *a1 = (const _QWORD *)(const void *)left;
  uintptr_t a2 = (uintptr_t)right;
  uintptr_t v3; // rdx
  unsigned __int8 v4; // al
  uint64_t v5; // rax
  bool v6; // cc

  v3 = a2 - (_QWORD)a1;
  if ( !a3 )
    return 0;
  if ( ((uintptr_t)a1 & 7) != 0 )
    goto comp_head_loop_begin;
_qword_loop_begin:
  while ( ((v3 + (uintptr_t)a1) & 0xFFFu) <= 0xFF8 )
  {
    v5 = *a1;
    if ( *a1 != *(_QWORD *)((char *)a1 + v3) )
      break;
    ++a1;
    v6 = a3 <= 8;
    a3 -= 8LL;
    if ( v6 || ((v5 - 0x101010101010101LL) & ~v5 & 0x8080808080808080uLL) != 0 )
      return 0;
  }
comp_head_loop_begin:
  while ( 1 )
  {
    v4 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 != *((_BYTE *)a1 + v3) )
      return -(__int64)(v4 < *((_BYTE *)a1 + v3)) | 1;
    a1 = (_QWORD *)((char *)a1 + 1);
    if ( !--a3 || !v4 )
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
  unsigned __int64 result; // rax
  _DWORD *v3; // rdi
  __int64 i; // rcx

  result = (unsigned __int64)(a1 + 1);
  if ( a1 < a1 + 1 )
  {
    v3 = a1;
    result = a2;
    for ( i = a1 < a1 + 1; i; --i )
      *v3++ = a2;
  }
  return result;
}


//----- (00000001402370A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_676(_DWORD *a1, int a2)
{
  unsigned __int64 result; // rax
  _DWORD *v3; // rdi
  __int64 i; // rcx

  result = (unsigned __int64)(a1 + 1);
  if ( a1 < a1 + 1 )
  {
    v3 = a1;
    result = a2;
    for ( i = a1 < a1 + 1; i; --i )
      *v3++ = a2;
  }
  return result;
}


//----- (0000000140237118) ----------------------------------------------------
unsigned int *sub_140237118()
{
  return &dword_140404A6C[19064598];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140237120) ----------------------------------------------------
unsigned int *sub_140237120()
{
  return &dword_140404A6C[19064599];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140237128) ----------------------------------------------------
unsigned int *sub_140237128()
{
  return &dword_140404A6C[19064597];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140237130) ----------------------------------------------------
__int64 sub_140237130()
{
  return *(_QWORD *)&dword_140404A6C[19064601];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6D0: using guessed type unsigned int;

//----- (0000000140237138) ----------------------------------------------------
__int64            sub_140237138(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_140404A6C[19064598];
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6C4: using guessed type unsigned int;

//----- (0000000140237168) ----------------------------------------------------
__int64            sub_140237168(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_140404A6C[19064599];
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6C8: using guessed type unsigned int;

//----- (0000000140237198) ----------------------------------------------------
__int64            sub_140237198(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_140404A6C[19064597];
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6C0: using guessed type unsigned int;

//----- (00000001402371C8) ----------------------------------------------------
__int64            sub_1402371C8(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, signed int a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax

  if ( a2 )
  {
    if ( a3 )
      goto LABEL_3;
LABEL_12:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  if ( a3 )
    goto LABEL_12;
LABEL_3:
  if ( a2 )
    *a2 = 0;
  if ( !a1 || (unsigned int)a4 > 1 )
    goto LABEL_12;
  v4 = -1;
  do
    ++v4;
  while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064601] + 8LL * a4) + v4) );
  v5 = v4 + 1;
  *a1 = v5;
  if ( !a2 )
    return 0;
  if ( v5 <= a3 )
    return strcpy_s_sr(a2, a3, *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064601] + 8LL * a4));
  return 34;
}

// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140237268) ----------------------------------------------------
__int64            sub_140237268(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = sub_1402372E4(&v5, 1);
  v3 = v5;
  if ( v2 != 1 )
    v3 = -1;
  if ( a1 )
    *a1 = v3;
  return v3;
}


//----- (00000001402372A4) ----------------------------------------------------
__int64            sub_1402372A4(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0;
  v2 = sub_140237378((__int64)v5, 1);
  v3 = v5[0];
  if ( v2 != 1 )
    v3 = -1;
  if ( a1 )
    *a1 = v3;
  return v3;
}


//----- (00000001402372E4) ----------------------------------------------------
__int64            sub_1402372E4(_DWORD *a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  v5 = 0;
  sub_14024F1F8((__int64)&v5);
  v4 = v5 - 116444736000000000LL;
  if ( v5 - 116444736000000000LL >= 21474720000000000LL )
    return 0;
  *a1 = v4 / 10000000;
  a1[1] = 100 * (v4 % 10000000);
  return 1;
}


//----- (0000000140237378) ----------------------------------------------------
__int64            sub_140237378(__int64 a1, int a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  v6 = 0;
  sub_14024F1F8((__int64)&v6);
  v4 = v6 + 717324288;
  v5 = (v6 - 116444736000000000LL) / 10000000 + v6 - 116444736000000000LL;
  if ( v5 > 0x793582AFFLL )
    return 0;
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 8) = 100 * (v4 - 10000000 * v5);
  return 1;
}


//----- (000000014023740C) ----------------------------------------------------
__int64            sub_14023740C(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = sub_1402372E4(&v5, 1);
  v3 = v5;
  if ( v2 != 1 )
    v3 = -1;
  if ( a1 )
    *a1 = v3;
  return v3;
}


//----- (0000000140237448) ----------------------------------------------------
__int64            sub_140237448(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0;
  v2 = sub_140237378((__int64)v5, 1);
  v3 = v5[0];
  if ( v2 != 1 )
    v3 = -1;
  if ( a1 )
    *a1 = v3;
  return v3;
}


//----- (00000001402374E4) ----------------------------------------------------
bool            sub_1402374E4(int a1)
{
  return !(a1 % 4) && a1 != 100 * (a1 / 100) || a1 + 1900 == 400 * ((a1 + 1900) / 400);
}


//----- (0000000140237544) ----------------------------------------------------
__int64            sub_140237544(struct tm *     a1)
{
  unsigned int v2; // edi
  int v3; // esi
  int v4; // r14d
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v17; // ecx
  int v18; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0;
  if ( (unsigned int)sub_140237138(&v18) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  if ( !v18 )
    return 0;
  v3 = *((_DWORD *)a1 + 5);
  if ( v3 != dword_140302280 || v3 != dword_140302290 )
  {
    if ( dword_140404A6C[19064605] )
    {
      if ( LOWORD(dword_140404A6C[19064647]) )
      {
        v4 = HIWORD(dword_140404A6C[19064650]);
        v5 = LOWORD(dword_140404A6C[19064650]);
        v6 = HIWORD(dword_140404A6C[19064649]);
        v7 = LOWORD(dword_140404A6C[19064649]);
        v8 = HIWORD(dword_140404A6C[19064647]);
        if ( sub_1402374E4(v3) )
          v9 = dword_14028BF4C[v8];
        else
          v9 = dword_14028BF14[v8];
        dword_140302280 = v3;
        dword_140302284 = v9 + HIWORD(dword_140404A6C[19064648]);
        dword_140302288 = v4 + 1000 * (v5 + 60 * (v6 + 60 * v7));
      }
      else
      {
        sub_140237880(
          0,
          1,
          v3,
          HIWORD(dword_140404A6C[19064647]),
          HIWORD(dword_140404A6C[19064648]),
          LOWORD(dword_140404A6C[19064648]),
          0,
          LOWORD(dword_140404A6C[19064649]),
          HIWORD(dword_140404A6C[19064649]),
          LOWORD(dword_140404A6C[19064650]),
          HIWORD(dword_140404A6C[19064650]));
      }
      if ( LOWORD(dword_140404A6C[19064626]) )
      {
        v13 = HIWORD(dword_140404A6C[19064627]);
        v11 = 0;
        v10 = 0;
        v12 = 0;
      }
      else
      {
        v10 = HIWORD(dword_140404A6C[19064627]);
        v11 = 1;
        v12 = LOWORD(dword_140404A6C[19064627]);
        v13 = 0;
      }
      sub_140237880(
        1,
        v11,
        *((_DWORD *)a1 + 5),
        HIWORD(dword_140404A6C[19064626]),
        v10,
        v12,
        v13,
        LOWORD(dword_140404A6C[19064628]),
        HIWORD(dword_140404A6C[19064628]),
        LOWORD(dword_140404A6C[19064629]),
        HIWORD(dword_140404A6C[19064629]));
    }
    else
    {
      sub_140237880(0, 1, v3, (v3 < 107) + 3, (v3 >= 107) + 1, 0, 0, 2, 0, 0, 0);
      v14 = 5;
      if ( v3 >= 107 )
        v14 = 1;
      sub_140237880(1, 1, *((_DWORD *)a1 + 5), (v3 >= 107) + 10, v14, 0, 0, 2, 0, 0, 0);
    }
  }
  v15 = *((_DWORD *)a1 + 7);
  if ( dword_140302284 >= dword_140302294 )
  {
    if ( v15 < dword_140302294 || v15 > dword_140302284 )
      return 1;
    if ( v15 <= dword_140302294 || v15 >= dword_140302284 )
      goto LABEL_29;
    return 0;
  }
  if ( v15 < dword_140302284 || v15 > dword_140302294 )
    return 0;
  if ( v15 > dword_140302284 && v15 < dword_140302294 )
    return 1;
LABEL_29:
  v17 = 1000 * (*(_DWORD *)a1 + 60 * (*((_DWORD *)a1 + 1) + 60 * *((_DWORD *)a1 + 2)));
  if ( v15 == dword_140302284 )
    LOBYTE(v2) = v17 >= dword_140302288;
  else
    LOBYTE(v2) = v17 < dword_140302298;
  return v2;
}

// 140237830: control flows out of bounds to 140237835
// 140237544: using guessed type __int64 __fastcall sub_140237544(struct tm *const a1);
// 14028BF14: using guessed type int dword_14028BF14[];
// 14028BF4C: using guessed type int dword_14028BF4C[];
// 140302280: using guessed type int dword_140302280;
// 140302284: using guessed type int dword_140302284;
// 140302288: using guessed type int dword_140302288;
// 140302290: using guessed type int dword_140302290;
// 140302294: using guessed type int dword_140302294;
// 140302298: using guessed type int dword_140302298;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140237838) ----------------------------------------------------
unsigned int *           sub_140237838(unsigned int a1)
{
  unsigned int *result; // rax

  result = sub_140237118();
  *result = a1;
  return result;
}


//----- (0000000140237850) ----------------------------------------------------
unsigned int *           sub_140237850(unsigned int a1)
{
  unsigned int *result; // rax

  result = sub_140237120();
  *result = a1;
  return result;
}


//----- (0000000140237868) ----------------------------------------------------
unsigned int *           sub_140237868(unsigned int a1)
{
  unsigned int *result; // rax

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
  __int64 v12; // rbx
  bool v15; // al
  bool v16; // bp
  int v17; // r10d
  int v18; // r10d
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  int v23; // r8d
  __int64 result; // rax
  bool v25; // sf
  int v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = 0;
  v12 = a4;
  v15 = sub_1402374E4(a3);
  v16 = v15;
  if ( a2 == 1 )
  {
    if ( v15 )
      v17 = dword_14028BF4C[v12];
    else
      v17 = dword_14028BF14[v12];
    v18 = v17 + 1;
    v19 = (365 * a3 - 25563 + (a3 + 299) / 400 - (a3 - 1) / 100 + v18 + (a3 - 1) / 4) % 7;
    v20 = a6 + v18 + 7 * a5 - v19 - 7;
    if ( v19 > a6 )
      v20 = a6 + v18 + 7 * a5 - v19;
    if ( v16 )
      v21 = dword_14028BF50[v12];
    else
      v21 = dword_14028BF18[v12];
    v22 = v20;
    if ( a5 == 5 && v20 > v21 )
      v22 = v20 - 7;
  }
  else
  {
    if ( v15 )
      v23 = dword_14028BF4C[v12];
    else
      v23 = dword_14028BF14[v12];
    v22 = a7 + v23;
  }
  result = (unsigned int)(a9 + 60 * a8);
  if ( !a1 )
  {
    dword_140302284 = v22;
    dword_140302288 = a11 + 1000 * (a10 + 60 * result);
    dword_140302280 = a3;
    return result;
  }
  dword_140302298 = a11 + 1000 * (a10 + 60 * result);
  dword_140302294 = v22;
  if ( (unsigned int)sub_140237168(&v26) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  v25 = 1000 * v26 + dword_140302298 < 0;
  result = (unsigned int)(1000 * v26 + dword_140302298);
  dword_140302298 += 1000 * v26;
  if ( v25 )
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
// 14028BF14: using guessed type int dword_14028BF14[];
// 14028BF18: using guessed type int dword_14028BF18[13];
// 14028BF4C: using guessed type int dword_14028BF4C[];
// 14028BF50: using guessed type int dword_14028BF50[16];
// 140302280: using guessed type int dword_140302280;
// 140302284: using guessed type int dword_140302284;
// 140302288: using guessed type int dword_140302288;
// 140302290: using guessed type int dword_140302290;
// 140302294: using guessed type int dword_140302294;
// 140302298: using guessed type int dword_140302298;

//----- (0000000140237A80) ----------------------------------------------------
char *           get_tz_environment_variable(char (*a1)[256])
{
  int v2; // eax
  _BYTE *v4; // rax
  void *v5; // rbx
  void *v6; // rdi
  unsigned __int64 RequiredCount; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = getenv_s_sr(&RequiredCount, (char *)a1, 0x100u, (__int64)"TZ");
  if ( !v2 )
    return *a1;
  if ( v2 != 34 )
    return nullptr;
  v4 = (_BYTE *)malloc_base(RequiredCount);
  v5 = v4;
  if ( !v4 || (unsigned int)getenv_s_sr(&v8, v4, RequiredCount, (__int64)"TZ") )
  {
    v6 = nullptr;
  }
  else
  {
    v6 = v5;
    v5 = nullptr;
  }
  free_base(v5);
  return (char *)v6;
}

// 140237A80: using guessed type char *__fastcall get_tz_environment_variable(char (*a1)[256]);
// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

//----- (0000000140237B08) ----------------------------------------------------
void            sub_140237B08(char *Source)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  char v7; // si
  char *v8; // rbx
  int v9; // edx
  int v10; // ecx
  char v11; // al
  char v12; // cl
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int v17; // [rsp+68h] [rbp+38h] BYREF
  BOOL v18; // [rsp+70h] [rbp+40h] BYREF

  v2 = sub_140237130();
  v17 = 0;
  v18 = 0;
  v3 = v2;
  if ( (unsigned int)sub_140237198(&v17) || (unsigned int)sub_140237138(&v18) )
    goto LABEL_37;
  if ( !*(_QWORD *)&dword_140404A6C[19064603] || strcmp_sr(Source, *(     char **)&dword_140404A6C[19064603]) )
  {
    free_base(*(void **)&dword_140404A6C[19064603]);
    v4 = -1;
    v5 = -1;
    do
      ++v5;
    while ( Source[v5] );
    *(_QWORD *)&dword_140404A6C[19064603] = malloc_base(v5 + 1);
    free_base(nullptr);
    if ( *(_QWORD *)&dword_140404A6C[19064603] )
    {
      do
        ++v4;
      while ( Source[v4] );
      if ( !(unsigned int)strcpy_s_sr(*(_QWORD *)&dword_140404A6C[19064603], v4 + 1, Source) )
      {
        v6 = 3;
        if ( !(unsigned int)strncpy_s_sr(*(_QWORD *)v3, 64, Source, 3) )
        {
          do
          {
            if ( !*Source )
              break;
            ++Source;
            --v6;
          }
          while ( v6 );
          v7 = *Source;
          v8 = Source + 1;
          if ( *Source != 45 )
            v8 = Source;
          v9 = 3600 * unknown_libname_852((__int64)v8);
          v17 = v9;
          while ( *v8 == 43 || (unsigned __int8)(*v8 - 48) <= 9u )
            ++v8;
          if ( *v8 == 58 )
          {
            v10 = 60 * unknown_libname_852((__int64)++v8);
            v11 = *v8;
            v9 = v10 + v17;
            v17 += v10;
            if ( v11 >= 48 )
            {
              v12 = v11;
              do
              {
                v11 = v12;
                if ( v12 > 57 )
                  break;
                v11 = *++v8;
                v12 = *v8;
              }
              while ( *v8 >= 48 );
            }
            if ( v11 == 58 )
            {
              v13 = unknown_libname_852((__int64)++v8);
              v9 = v13 + v17;
              v17 += v13;
              while ( *v8 >= 48 && *v8 <= 57 )
                ++v8;
            }
          }
          if ( v7 == 45 )
            v17 = -v9;
          v14 = *v8 == 0;
          v18 = *v8 != 0;
          if ( v14 )
          {
            **(_BYTE **)(v3 + 8) = 0;
LABEL_35:
            v15 = v17;
            *sub_140237128() = v15;
            v16 = v18;
            *sub_140237118() = v16;
            return;
          }
          if ( !(unsigned int)strncpy_s_sr(*(_QWORD *)(v3 + 8), 64, v8, 3) )
            goto LABEL_35;
        }
      }
LABEL_37:
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
}

// 140237D08: control flows out of bounds to 140237D0D
// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);
// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);
// 14025896C: using guessed type __int64 __fastcall strncpy_s(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140237D10) ----------------------------------------------------
unsigned int *tzset_from_system_nolock()
{
  __int64 v0; // rax
  __int64 *v1; // rbx
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int *result; // rax
  __int64 v9 = 0; // [rsp+28h] [rbp-20h]
  __int64 v10 = 0; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+70h] [rbp+28h] BYREF
  int v12; // [rsp+78h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+40h] BYREF

  v0 = sub_140237130();
  v11 = 0;
  v1 = (__int64 *)v0;
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)sub_140237198(&v11) || (unsigned int)sub_140237138(&v13) || (unsigned int)sub_140237168(&v14) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  free_base(*(void **)&dword_140404A6C[19064603]);
  *(_QWORD *)&dword_140404A6C[19064603] = 0;
  if ( (unsigned int)((__int64 (           *)(unsigned int *))GetTimeZoneInformation)(&dword_140404A6C[19064609]) != -1 )
  {
    v2 = 1;
    dword_140404A6C[19064605] = 1;
    v11 = 60 * dword_140404A6C[19064609];
    if ( HIWORD(dword_140404A6C[19064626]) )
      v11 = 60 * dword_140404A6C[19064609] + 60 * dword_140404A6C[19064630];
    if ( HIWORD(dword_140404A6C[19064647]) && dword_140404A6C[19064651] )
    {
      v3 = 60 * (dword_140404A6C[19064651] - dword_140404A6C[19064630]);
    }
    else
    {
      v3 = 0;
      v2 = 0;
    }
    v13 = v2;
    v14 = v3;
    v4 = sub_140258CA0();
    LODWORD(v9) = 63;
    if ( !(unsigned int)sub_140258A84(
                          v4,
                          0,
                          (__int64)&dword_140404A6C[19064610],
                          0xFFFFFFFFLL,
                          *v1,
                          v9,
                          0,
                          (__int64)&v12)
      || v12 )
    {
      *(_BYTE *)*v1 = 0;
    }
    else
    {
      *(_BYTE *)(*v1 + 63) = 0;
    }
    LODWORD(v10) = 63;
    if ( !(unsigned int)sub_140258A84(
                          v4,
                          0,
                          (__int64)&dword_140404A6C[19064631],
                          0xFFFFFFFFLL,
                          v1[1],
                          v10,
                          0,
                          (__int64)&v12)
      || v12 )
    {
      *(_BYTE *)v1[1] = 0;
    }
    else
    {
      *(_BYTE *)(v1[1] + 63) = 0;
    }
  }
  v5 = v11;
  *sub_140237128() = v5;
  v6 = v13;
  *sub_140237118() = v6;
  v7 = v14;
  result = sub_140237120();
  *result = v7;
  return result;
}

//----- (0000000140237EB8) ----------------------------------------------------
void sub_140237EB8()
{
  int v0; // eax
  char *v1; // rdi
  char *v2; // rax
  char *v3; // rcx
  char *v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int64 Size; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 RequiredCount; // [rsp+28h] [rbp-120h] BYREF
  char Buffer[256]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v10; // [rsp+130h] [rbp-18h]

  dword_140302290 = -1;
  dword_140404A6C[19064605] = 0;
  dword_140302280 = -1;
  v0 = getenv_s_sr(&Size, Buffer, 0x100u, (__int64)"TZ");
  if ( !v0 )
  {
    v1 = Buffer;
    goto LABEL_11;
  }
  if ( v0 != 34 )
    goto LABEL_4;
  v2 = (char *)sr_path_malloc(Size);
  v1 = v2;
  if ( !v2 )
  {
    v3 = nullptr;
LABEL_7:
    free_base(v3);
LABEL_4:
    v1 = nullptr;
    goto LABEL_11;
  }
  if ( (unsigned int)getenv_s_sr(&RequiredCount, v2, Size, (__int64)"TZ") )
  {
    v3 = v1;
    goto LABEL_7;
  }
  free_base(nullptr);
LABEL_11:
  v4 = v1;
  if ( v1 == Buffer )
    v4 = nullptr;
  if ( v1 && *v1 )
    sub_140237B08(v1);
  else
    tzset_from_system_nolock();
  free_base(v4);
  return;
}

// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);
// 140302280: using guessed type int dword_140302280;
// 140302290: using guessed type int dword_140302290;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6E0: using guessed type unsigned int;

//----- (0000000140237FC0) ----------------------------------------------------
__int64 sub_140237FC0()
{
  __int64 result; // rax

  result = dword_140404A6C[19064652];
  if ( !dword_140404A6C[19064652] )
  {
    sub_140258B64(6);
    if ( !dword_140404A6C[19064652] )
    {
      sub_140237EB8();
      _InterlockedIncrement((volatile signed __int32 *)&dword_140404A6C[19064652]);
    }
    return sub_140258BB8(6);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140238000) ----------------------------------------------------
void            sub_140238000(int a1)
{
  if ( a1 )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
}

// 14023802B: control flows out of bounds to 140238030

//----- (0000000140238034) ----------------------------------------------------
__int64            sub_140238034(struct tm *a1)
{
  sub_140258B64(6);
  LODWORD(a1) = sub_140237544(a1);
  sub_140258BB8(6);
  return (unsigned int)a1;
}

// 140237544: using guessed type __int64 __fastcall sub_140237544(struct tm *const a1);

//----- (0000000140238064) ----------------------------------------------------
void         sub_140238064()
{
  sub_140258B64(6);
  sub_140237EB8();
  sub_140258BB8(6);
}


//----- (000000014023808C) ----------------------------------------------------
__int64            sub_14023808C(_BYTE *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax

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
    v5 = sub_140259504();
    v8 = v5;
    if ( v5 )
    {
      if ( (unsigned __int64)v5 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v10 = malloc_base(2 * v8);
        *(_QWORD *)(a2 + 16) = v10;
        v11 = 0;
        result = v10 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          v11 = v8;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = v11;
        if ( (_DWORD)result )
          return result;
      }
      v12 = sub_140259504();
      if ( v12 )
      {
        *(_QWORD *)(a2 + 32) = v12 - 1LL;
        return 0;
      }
    }
    v9 = ((__int64 (           *)(__int64, __int64))GetLastError)(v7, v6);
    sub_14024D14C(v9);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  v3 = malloc_base(2);
  *(_QWORD *)(a2 + 16) = v3;
  result = v3 == 0 ? 0xC : 0;
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
// 140238157: variable 'v7' is possibly undefined
// 140238157: variable 'v6' is possibly undefined
// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

//----- (0000000140238208) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_d8593a27d1aa8c02be35c86a17d324c4_____crt_win32_buffer_internal_dynamic_resizing(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+28h] [rbp-20h]

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
    LODWORD(v15) = 0;
    v9 = sub_140258A84(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, v15, 0, 0);
    v10 = v9;
    if ( v9 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( v9 > v12 )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v13 = malloc_base(v10);
        *(_QWORD *)(a2 + 16) = v13;
        v12 = 0;
        result = v13 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          v12 = v10;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = v12;
        if ( (_DWORD)result )
          return result;
      }
      LODWORD(v16) = v12;
      v14 = sub_140258A84(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), v16, 0, 0);
      if ( v14 )
      {
        *(_QWORD *)(a2 + 32) = v14 - 1LL;
        return 0;
      }
    }
    v11 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v11);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  v7 = malloc_base(1);
  *(_QWORD *)(a2 + 16) = v7;
  result = v7 == 0 ? 0xC : 0;
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
// 1402382CF: variable 'v15' is possibly undefined
// 14023835F: variable 'v16' is possibly undefined
// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

//----- (0000000140238394) ----------------------------------------------------
__int64            sub_140238394(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax

  v2 = 0;
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
    v6 = sub_140259504();
    v9 = v6;
    if ( v6 )
    {
      if ( (unsigned __int64)v6 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v11 = malloc_base(2 * v9);
        *(_QWORD *)(a2 + 16) = v11;
        v12 = 0;
        v13 = -v11;
        v5 = v13 == 0 ? 0xC : 0;
        if ( (v13 == 0 ? 0xC : 0) == 0 )
          v12 = v9;
        *(_BYTE *)(a2 + 40) = v5 == 0;
        *(_QWORD *)(a2 + 24) = v12;
        if ( (v13 == 0 ? 0xC : 0) != 0 )
          return v5;
      }
      v14 = sub_140259504();
      v8 = v14;
      if ( v14 )
      {
        *(_QWORD *)(a2 + 32) = v14 - 1LL;
        return v2;
      }
    }
    v10 = ((__int64 (           *)(__int64, __int64))GetLastError)(v8, v7);
    sub_14024D14C(v10);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v4 = malloc_base(2);
    *(_QWORD *)(a2 + 16) = v4;
    v5 = v4 == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = v5 == 0;
    *(_QWORD *)(a2 + 24) = v5 == 0;
    if ( (v4 == 0 ? 0xC : 0) != 0 )
      return v5;
  }
  **(_WORD **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return v2;
}

//----- (000000014023850C) ----------------------------------------------------
__int64            __acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
        _WORD *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v17 = 0; // [rsp+28h] [rbp-20h]
  __int64 v18 = 0; // [rsp+28h] [rbp-20h]

  v3 = 0;
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
    LODWORD(v17) = 0;
    v9 = sub_140258A84(a3, 0, (__int64)a1, 0xFFFFFFFFLL, 0, v17, 0, 0);
    v10 = v9;
    if ( v9 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( v9 > v12 )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v13 = sr_path_malloc(v10);
        *(_QWORD *)(a2 + 16) = v13;
        v12 = 0;
        v14 = -v13;
        v8 = v14 == 0 ? 0xC : 0;
        if ( (v14 == 0 ? 0xC : 0) == 0 )
          v12 = v10;
        *(_BYTE *)(a2 + 40) = v8 == 0;
        *(_QWORD *)(a2 + 24) = v12;
        if ( (v14 == 0 ? 0xC : 0) != 0 )
          return v8;
      }
      LODWORD(v18) = v12;
      v15 = sub_140258A84(a3, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), v18, 0, 0);
      if ( v15 )
      {
        *(_QWORD *)(a2 + 32) = v15 - 1LL;
        return v3;
      }
    }
    v11 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v11);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v7 = sr_path_malloc(1);
    *(_QWORD *)(a2 + 16) = v7;
    v8 = v7 == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = v8 == 0;
    *(_QWORD *)(a2 + 24) = v8 == 0;
    if ( (v7 == 0 ? 0xC : 0) != 0 )
      return v8;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return v3;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 1402385CF: variable 'v17' is possibly undefined
// 140238662: variable 'v18' is possibly undefined
// 140253F60: using guessed type __int64 __fastcall sr_path_malloc(_QWORD);

//----- (0000000140238698) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata32_t___finddata32_t(_BYTE *a1, _DWORD *a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-298h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-278h] BYREF
  void *Block; // [rsp+30h] [rbp-268h]
  __int64 v9; // [rsp+38h] [rbp-260h]
  __int64 v10; // [rsp+40h] [rbp-258h]
  char v11; // [rsp+48h] [rbp-250h]
  _DWORD v12[136]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v13; // [rsp+270h] [rbp-28h]

  if ( a2 )
  {
    v7[0] = 0;
    v7[1] = 0;
    Block = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)v7) && sub_1402389D8((__int64)Block, v12) != -1 )
      sub_140239710((__int64)v12, a2, a3);
    if ( v11 )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return 0; /* the function has no caller */
}


//----- (0000000140238768) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata32i64_t___finddata32i64_t(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-298h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-278h] BYREF
  void *Block; // [rsp+30h] [rbp-268h]
  __int64 v9; // [rsp+38h] [rbp-260h]
  __int64 v10; // [rsp+40h] [rbp-258h]
  char v11; // [rsp+48h] [rbp-250h]
  _BYTE v12[544]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v13; // [rsp+270h] [rbp-28h]

  if ( a2 )
  {
    v7[0] = 0;
    v7[1] = 0;
    Block = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)v7) && sub_140238B20((__int64)Block, (__int64)v12) != -1 )
      sub_1402397C0((__int64)v12, a2, a3);
    if ( v11 )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return 0; /* the function has no caller */
}


//----- (0000000140238838) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata64_t____finddata64_t(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-2A8h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-288h] BYREF
  void *Block; // [rsp+30h] [rbp-278h]
  __int64 v9; // [rsp+38h] [rbp-270h]
  __int64 v10; // [rsp+40h] [rbp-268h]
  char v11; // [rsp+48h] [rbp-260h]
  _BYTE v12[560]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v13; // [rsp+280h] [rbp-28h]

  if ( a2 )
  {
    v7[0] = 0;
    v7[1] = 0;
    Block = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)v7) && sub_140238C74((__int64)Block, (__int64)v12) != -1 )
      sub_140239870((__int64)v12, a2, a3);
    if ( v11 )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return 0; /* the function has no caller */
}


//----- (0000000140238908) ----------------------------------------------------
__int64            common_find_first_narrow___wfinddata64i32_t___finddata64i32_t(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-2A8h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-288h] BYREF
  void *Block; // [rsp+30h] [rbp-278h]
  __int64 v9; // [rsp+38h] [rbp-270h]
  __int64 v10; // [rsp+40h] [rbp-268h]
  char v11; // [rsp+48h] [rbp-260h]
  _BYTE v12[560]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v13; // [rsp+280h] [rbp-28h]

  if ( a2 )
  {
    v7[0] = 0;
    v7[1] = 0;
    Block = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)v7) && sub_140238DC8((__int64)Block, (__int64)v12) != -1 )
      sub_140239928((__int64)v12, a2, a3);
    if ( v11 )
      free_base(Block);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return 0; /* the function has no caller */
}


//----- (00000001402389D8) ----------------------------------------------------
__int64            sub_1402389D8(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // eax
  int v5; // eax
  _QWORD v6[5]; // [rsp+0h] [rbp-298h] BYREF
  int FindFileData; // [rsp+30h] [rbp-268h] BYREF
  _DWORD v8[2]; // [rsp+34h] [rbp-264h] BYREF
  _DWORD v9[2]; // [rsp+3Ch] [rbp-25Ch] BYREF
  _DWORD v10[6]; // [rsp+44h] [rbp-254h] BYREF
  _BYTE Source[548]; // [rsp+5Ch] [rbp-23Ch] BYREF
  __int64 v12; // [rsp+280h] [rbp-18h]

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
      v4 = ((__int64 (*)(void))GetLastError)();
      if ( v4 >= 2 )
      {
        if ( v4 <= 3 )
          goto LABEL_12;
        if ( v4 == 8 )
        {
          *errno_sr() = 12;
          return -1; /* or rax, 0xffffffffffffffff */
        }
        if ( v4 == 18 )
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
      v5 = FindFileData;
      if ( FindFileData == 128 )
        v5 = 0;
      *a2 = v5;
      a2[1] = sub_140239580(v8);
      a2[2] = sub_140239580(v9);
      a2[3] = sub_140239580(v10);
      a2[4] = v10[3];
      if ( (unsigned int)sub_140259444((_WORD *)a2 + 10, 260, (__int64)Source) )
      {
        v6[4] = 0;
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      return sr_handle; /* mov rax, rdi */
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return -1; /* or rax, 0xffffffffffffffff */
}

// 140238B17: control flows out of bounds to 140238B1C
// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238B20) ----------------------------------------------------
__int64            sub_140238B20(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+0h] [rbp-298h] BYREF
  int FindFileData; // [rsp+30h] [rbp-268h] BYREF
  _DWORD v10[2]; // [rsp+34h] [rbp-264h] BYREF
  _DWORD v11[2]; // [rsp+3Ch] [rbp-25Ch] BYREF
  _DWORD v12[6]; // [rsp+44h] [rbp-254h] BYREF
  _BYTE Source[548]; // [rsp+5Ch] [rbp-23Ch] BYREF
  __int64 v14; // [rsp+280h] [rbp-18h]

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
      v4 = ((__int64 (*)(void))GetLastError)();
      if ( v4 >= 2 )
      {
        if ( v4 <= 3 )
          goto LABEL_12;
        if ( v4 == 8 )
        {
          *errno_sr() = 12;
          return -1; /* or rax, 0xffffffffffffffff */
        }
        if ( v4 == 18 )
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
      v5 = FindFileData;
      if ( FindFileData == 128 )
        v5 = 0;
      *(_DWORD *)a2 = v5;
      *(_DWORD *)(a2 + 4) = sub_140239580(v10);
      *(_DWORD *)(a2 + 8) = sub_140239580(v11);
      v6 = sub_140239580(v12);
      v7 = (unsigned __int64)v12[2] << 32;
      *(_DWORD *)(a2 + 12) = v6;
      *(_QWORD *)(a2 + 16) = v12[3] + v7;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 24), 260, (__int64)Source) )
      {
        v8[4] = 0;
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      return sr_handle; /* mov rax, rdi */
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return -1; /* or rax, 0xffffffffffffffff */
}

// 140238C6B: control flows out of bounds to 140238C70
// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238C74) ----------------------------------------------------
__int64            sub_140238C74(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+0h] [rbp-298h] BYREF
  int FindFileData; // [rsp+30h] [rbp-268h] BYREF
  _DWORD v10[2]; // [rsp+34h] [rbp-264h] BYREF
  _DWORD v11[2]; // [rsp+3Ch] [rbp-25Ch] BYREF
  _DWORD v12[6]; // [rsp+44h] [rbp-254h] BYREF
  _BYTE v13[548]; // [rsp+5Ch] [rbp-23Ch] BYREF
  __int64 v14; // [rsp+280h] [rbp-18h]

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
      v4 = ((__int64 (*)(void))GetLastError)();
      if ( v4 >= 2 )
      {
        if ( v4 <= 3 )
          goto LABEL_12;
        if ( v4 == 8 )
        {
          *errno_sr() = 12;
          return -1; /* or rax, 0xffffffffffffffff */
        }
        if ( v4 == 18 )
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
      v5 = FindFileData;
      if ( FindFileData == 128 )
        v5 = 0;
      *(_DWORD *)a2 = v5;
      *(_QWORD *)(a2 + 8) = sub_140239610(v10);
      *(_QWORD *)(a2 + 16) = sub_140239610(v11);
      v6 = sub_140239610(v12);
      v7 = (unsigned __int64)v12[2] << 32;
      *(_QWORD *)(a2 + 24) = v6;
      *(_QWORD *)(a2 + 32) = v12[3] + v7;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 40), 260, (__int64)v13) )
      {
        v8[4] = 0;
        sub_14024CFBC();
        __debugbreak();
      }
      return sr_handle; /* mov rax, rdi */
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return -1; /* or rax, 0xffffffffffffffff */
}

// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140238DC8)
__int64 sub_140238DC8(__int64 a1,__int64 a2)
{
 WIN32_FIND_DATAW data;
 if(!a1 || !a2){*errno_sr()=22;sub_14024CF6C();return -1;}
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
   sub_14024CFBC();__debugbreak();
 }
 return (__int64)(intptr_t)handle;
}

//----- (0000000140238F10) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata32_t___finddata32_t(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-268h] BYREF
  _DWORD v7[136]; // [rsp+20h] [rbp-248h] BYREF
  __int64 v8; // [rsp+240h] [rbp-28h]

  if ( (unsigned int)sub_1402390C0(a1, v7) != -1 )
    sub_140239710((__int64)v7, a2, a3);
  return 0; /* the function has no caller */
}


//----- (0000000140238F7C) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata32i64_t___finddata32i64_t(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-268h] BYREF
  _BYTE v7[544]; // [rsp+20h] [rbp-248h] BYREF
  __int64 v8; // [rsp+240h] [rbp-28h]

  if ( (unsigned int)sub_1402391E4(a1, (__int64)v7) != -1 )
    sub_1402397C0((__int64)v7, a2, a3);
  return 0; /* the function has no caller */
}


//----- (0000000140238FE8) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata64_t____finddata64_t(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-278h] BYREF
  _BYTE v7[560]; // [rsp+20h] [rbp-258h] BYREF
  __int64 v8; // [rsp+250h] [rbp-28h]

  if ( (unsigned int)sub_140239314(a1, (__int64)v7) != -1 )
    sub_140239870((__int64)v7, a2, a3);
  return 0; /* the function has no caller */
}


//----- (0000000140239054) ----------------------------------------------------
__int64            common_find_next_narrow___wfinddata64i32_t___finddata64i32_t(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-278h] BYREF
  _BYTE v7[560]; // [rsp+20h] [rbp-258h] BYREF
  __int64 v8; // [rsp+250h] [rbp-28h]

  if ( (unsigned int)sub_140239448(a1, (__int64)v7) != -1 )
    sub_140239928((__int64)v7, a2, a3);
  return 0; /* the function has no caller */
}


//----- (00000001402390C0) ----------------------------------------------------
__int64            sub_1402390C0(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // eax
  int v5; // eax
  _QWORD v6[6]; // [rsp+0h] [rbp-298h] BYREF
  _DWORD FindFileData[148]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v8; // [rsp+280h] [rbp-18h]

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      v5 = FindFileData[0];
      if ( FindFileData[0] == 128 )
        v5 = 0;
      *a2 = v5;
      a2[1] = sub_140239580(&FindFileData[1]);
      a2[2] = sub_140239580(&FindFileData[3]);
      a2[3] = sub_140239580(&FindFileData[5]);
      a2[4] = FindFileData[8];
      if ( (unsigned int)sub_140259444((_WORD *)a2 + 10, 260, (__int64)&FindFileData[11]) )
      {
        v6[4] = 0;
        sub_14024CFBC();
        __debugbreak();
      }
      return 0; /* the name copy returned 0 and nothing wrote eax since */
    }
    else
    {
      v4 = ((__int64 (*)(void))GetLastError)();
      if ( v4 >= 2 )
      {
        if ( v4 <= 3 )
          goto LABEL_13;
        if ( v4 == 8 )
        {
          *errno_sr() = 12;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
        if ( v4 == 18 )
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
    sub_14024CF6C();
  }
  return (unsigned int)-1; /* or eax, 0xffffffff */
}

// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001402391E4) ----------------------------------------------------
__int64            sub_1402391E4(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // rcx
  _QWORD v8[6]; // [rsp+0h] [rbp-298h] BYREF
  _DWORD FindFileData[148]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v10; // [rsp+280h] [rbp-18h]

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      v5 = FindFileData[0];
      if ( FindFileData[0] == 128 )
        v5 = 0;
      *(_DWORD *)a2 = v5;
      *(_DWORD *)(a2 + 4) = sub_140239580(&FindFileData[1]);
      *(_DWORD *)(a2 + 8) = sub_140239580(&FindFileData[3]);
      v6 = sub_140239580(&FindFileData[5]);
      v7 = (unsigned __int64)FindFileData[7] << 32;
      *(_DWORD *)(a2 + 12) = v6;
      *(_QWORD *)(a2 + 16) = FindFileData[8] + v7;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 24), 260, (__int64)&FindFileData[11]) )
      {
        v8[4] = 0;
        sub_14024CFBC();
        __debugbreak();
      }
      return 0; /* the name copy returned 0 and nothing wrote eax since */
    }
    else
    {
      v4 = ((__int64 (*)(void))GetLastError)();
      if ( v4 >= 2 )
      {
        if ( v4 <= 3 )
          goto LABEL_13;
        if ( v4 == 8 )
        {
          *errno_sr() = 12;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
        if ( v4 == 18 )
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
    sub_14024CF6C();
  }
  return (unsigned int)-1; /* or eax, 0xffffffff */
}

// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140239314) ----------------------------------------------------
__int64            sub_140239314(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD v8[6]; // [rsp+0h] [rbp-298h] BYREF
  _DWORD FindFileData[148]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v10; // [rsp+280h] [rbp-18h]

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      v5 = FindFileData[0];
      if ( FindFileData[0] == 128 )
        v5 = 0;
      *(_DWORD *)a2 = v5;
      *(_QWORD *)(a2 + 8) = sub_140239610(&FindFileData[1]);
      *(_QWORD *)(a2 + 16) = sub_140239610(&FindFileData[3]);
      v6 = sub_140239610(&FindFileData[5]);
      v7 = (unsigned __int64)FindFileData[7] << 32;
      *(_QWORD *)(a2 + 24) = v6;
      *(_QWORD *)(a2 + 32) = FindFileData[8] + v7;
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 40), 260, (__int64)&FindFileData[11]) )
      {
        v8[4] = 0;
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      return 0; /* the name copy returned 0 and nothing wrote eax since */
    }
    else
    {
      v4 = ((__int64 (*)(void))GetLastError)();
      if ( v4 >= 2 )
      {
        if ( v4 <= 3 )
          goto LABEL_13;
        if ( v4 == 8 )
        {
          *errno_sr() = 12;
          return (unsigned int)-1; /* or eax, 0xffffffff */
        }
        if ( v4 == 18 )
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
    sub_14024CF6C();
  }
  return (unsigned int)-1; /* or eax, 0xffffffff */
}

// 140239441: control flows out of bounds to 140239446
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140239448) ----------------------------------------------------
__int64            sub_140239448(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // eax
  unsigned int status=0xffffffffu;
  _QWORD v6[6]; // [rsp+0h] [rbp-298h] BYREF
  _DWORD FindFileData[148]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v8; // [rsp+280h] [rbp-18h]

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      status=0;
      v5 = FindFileData[0];
      if ( FindFileData[0] == 128 )
        v5 = 0;
      *(_DWORD *)a2 = v5;
      *(_QWORD *)(a2 + 8) = sub_140239610(&FindFileData[1]);
      *(_QWORD *)(a2 + 16) = sub_140239610(&FindFileData[3]);
      *(_QWORD *)(a2 + 24) = sub_140239610(&FindFileData[5]);
      *(_DWORD *)(a2 + 32) = FindFileData[8];
      if ( (unsigned int)sub_140259444((_WORD *)(a2 + 36), 260, (__int64)&FindFileData[11]) )
      {
        v6[4] = 0;
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
    else
    {
      v4 = ((__int64 (*)(void))GetLastError)();
      if ( v4 >= 2 )
      {
        if ( v4 <= 3 )
          goto LABEL_13;
        if ( v4 == 8 )
        {
          *errno_sr() = 12;
          return 0xffffffffu;
        }
        if ( v4 == 18 )
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
    sub_14024CF6C();
  }
  return status;
}

// 140239569: control flows out of bounds to 14023956E
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140239580) ----------------------------------------------------
__int64            sub_140239580(_DWORD *a1)
{
  __int64 v2; // [rsp+0h] [rbp-78h] BYREF
  _WORD LocalTime[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 SystemTime; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

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
  char v5; // bl
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  char *Source; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  char v11; // [rsp+58h] [rbp-10h]

  v7[0] = 0;
  v7[1] = 0;
  Source = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
                       (_WORD *)(a1 + 20),
                       (__int64)v7,
                       a3) )
  {
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s_sr(a2 + 5, 260, Source) )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    *a2 = *(_DWORD *)a1;
    a2[1] = *(_DWORD *)(a1 + 4);
    a2[2] = *(_DWORD *)(a1 + 8);
    a2[3] = *(_DWORD *)(a1 + 12);
    a2[4] = *(_DWORD *)(a1 + 16);
    v5 = 1;
  }
  if ( v11 )
    free_base(Source);
  return v5;
}

// 1402397B7: control flows out of bounds to 1402397BC
// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);

//----- (00000001402397C0) ----------------------------------------------------
char            sub_1402397C0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // bl
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  char *Source; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  char v11; // [rsp+58h] [rbp-10h]

  v7[0] = 0;
  v7[1] = 0;
  Source = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
                       (_WORD *)(a1 + 24),
                       (__int64)v7,
                       a3) )
  {
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s_sr(a2 + 24, 260, Source) )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
    v5 = 1;
  }
  if ( v11 )
    free_base(Source);
  return v5;
}

// 140239869: control flows out of bounds to 14023986E
// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);

//----- (0000000140239870) ----------------------------------------------------
char            sub_140239870(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // bl
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  char *Source; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  char v11; // [rsp+58h] [rbp-10h]

  v7[0] = 0;
  v7[1] = 0;
  Source = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
                       (_WORD *)(a1 + 40),
                       (__int64)v7,
                       a3) )
  {
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s_sr(a2 + 40, 260, Source) )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
    v5 = 1;
  }
  if ( v11 )
    free_base(Source);
  return v5;
}

// 14023991F: control flows out of bounds to 140239924
// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);

//----- (0000000140239928)
char sub_140239928(__int64 a1,__int64 a2,unsigned int a3)
{
 sr_find_buffer path={0};
 char result=0;
 if(!(unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
      (_WORD *)(a1+36),(__int64)(uintptr_t)&path,a3)){
   if((unsigned int)strcpy_s_sr(a2+36,260,path.buffer)){
     sub_14024CFBC();__debugbreak();
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
  return sub_140259504();
}


//----- (0000000140239A84) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_684(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // [rsp+28h] [rbp-20h]

  LODWORD(v6) = a5;
  return sub_140258A84(a2, 0, a3, 0xFFFFFFFFLL, a4, v6, 0, 0);
}

// 140239AA9: variable 'v6' is possibly undefined

//----- (0000000140239AB4) ----------------------------------------------------
__int64 sub_140239AB4()
{
  unsigned int v0; // edx
  _QWORD v2[3]; // [rsp+20h] [rbp-28h] BYREF
  char v3; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v2, nullptr);
  v0 = 65001;
  if ( *(_DWORD *)(v2[1] + 12LL) != 65001 )
    v0 = sub_14024EDA4() == 0;
  if ( v3 )
    *(_DWORD *)(v2[0] + 936LL) &= ~2u;
  return v0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

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
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v4 = malloc_base(a2);
  *(_QWORD *)(a1 + 16) = v4;
  result = v4 == 0 ? 0xC : 0;
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

// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

//----- (0000000140239BA4) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_internal_dynamic_resizing__allocate(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v4 = malloc_base(2 * a2);
  *(_QWORD *)(a1 + 16) = v4;
  result = v4 == 0 ? 0xC : 0;
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

// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

//----- (0000000140239C00) ----------------------------------------------------
__int64            sub_140239C00(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = malloc_base(a2);
  *a1 = v3;
  return v3 == 0 ? 0xC : 0;
}

// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

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
  unsigned int v4; // r14d
  __int64 v6; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  void *Block; // [rsp+30h] [rbp-D0h]
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+40h] [rbp-C0h]
  char v11; // [rsp+48h] [rbp-B8h]
  _QWORD v12[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+68h] [rbp-98h]
  _DWORD v14[136]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+290h] [rbp+190h]

  sub_140213644((_LocaleUpdate *)v12, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v12[1] + 12LL) == 65001 )
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0; /* the function has no caller */
  }
  v7[0] = 0;
  v7[1] = 0;
  Block = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)sub_140238394(a1, (__int64)v7) )
  {
    if ( !v11 )
      return 0; /* the function has no caller */
    goto LABEL_22;
  }
  if ( sub_1402389D8((__int64)Block, v14) == -1 || !sub_140239710((__int64)v14, a2, v4) )
  {
    if ( v11 )
      goto LABEL_22;
  }
  else if ( v11 )
  {
LABEL_22:
    free_base(Block);
  }
  return 0; /* the function has no caller */
}

// 140239CF4: invalid function type 'intptr_t __cdecl sub_140239CF4(const char *FileName, struct _finddata32_t *FindData)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140239E80) ----------------------------------------------------
__int64            sub_140239E80(_BYTE *a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 v6; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  void *Block; // [rsp+30h] [rbp-D0h]
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+40h] [rbp-C0h]
  char v11; // [rsp+48h] [rbp-B8h]
  _QWORD v12[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+68h] [rbp-98h]
  _BYTE v14[544]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+290h] [rbp+190h]

  sub_140213644((_LocaleUpdate *)v12, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v12[1] + 12LL) == 65001 )
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0; /* the function has no caller */
  }
  v7[0] = 0;
  v7[1] = 0;
  Block = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)sub_140238394(a1, (__int64)v7) )
  {
    if ( !v11 )
      return 0; /* the function has no caller */
    goto LABEL_22;
  }
  if ( sub_140238B20((__int64)Block, (__int64)v14) == -1 || !sub_1402397C0((__int64)v14, a2, v4) )
  {
    if ( v11 )
      goto LABEL_22;
  }
  else if ( v11 )
  {
LABEL_22:
    free_base(Block);
  }
  return 0; /* the function has no caller */
}

// 140239E80: invalid function type 'intptr_t __cdecl sub_140239E80(const char *FileName, struct _finddata32i64_t *FindData)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023A00C) ----------------------------------------------------
__int64            sub_14023A00C(_BYTE *a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 v6; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  void *Block; // [rsp+30h] [rbp-D0h]
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+40h] [rbp-C0h]
  char v11; // [rsp+48h] [rbp-B8h]
  _QWORD v12[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+68h] [rbp-98h]
  _BYTE v14[560]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+2A0h] [rbp+1A0h]

  sub_140213644((_LocaleUpdate *)v12, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v12[1] + 12LL) == 65001 )
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v13 )
      *(_DWORD *)(v12[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0; /* the function has no caller */
  }
  v7[0] = 0;
  v7[1] = 0;
  Block = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)sub_140238394(a1, (__int64)v7) )
  {
    if ( !v11 )
      return 0; /* the function has no caller */
    goto LABEL_22;
  }
  if ( sub_140238C74((__int64)Block, (__int64)v14) == -1 || !sub_140239870((__int64)v14, a2, v4) )
  {
    if ( v11 )
      goto LABEL_22;
  }
  else if ( v11 )
  {
LABEL_22:
    free_base(Block);
  }
  return 0; /* the function has no caller */
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023A198)
__int64 sub_14023A198(_BYTE *a1,__int64 a2)
{
 struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
 sr_find_buffer path={0};
 unsigned char wide[560];
 unsigned int cp=65001;
 __int64 result=-1;
 sub_140213644((_LocaleUpdate *)&locale,NULL);
 if(*(_DWORD *)(locale.locale+12)!=65001)cp=(unsigned int)sub_14024EDA4()?0:1;
 if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
 if(!a2){*errno_sr()=22;sub_14024CF6C();return -1;}
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
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-288h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-268h] BYREF
  char v8; // [rsp+38h] [rbp-250h]
  _DWORD v9[136]; // [rsp+40h] [rbp-248h] BYREF
  __int64 v10; // [rsp+260h] [rbp-28h]

  sub_140213644((_LocaleUpdate *)v7, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v7[1] + 12LL) == 65001 )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( (unsigned int)sub_1402390C0(a1, v9) != -1 )
    sub_140239710((__int64)v9, a2, v4);
  return 0; /* the function has no caller */
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023A404) ----------------------------------------------------
__int64            sub_14023A404(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-288h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-268h] BYREF
  char v8; // [rsp+38h] [rbp-250h]
  _BYTE v9[544]; // [rsp+40h] [rbp-248h] BYREF
  __int64 v10; // [rsp+260h] [rbp-28h]

  sub_140213644((_LocaleUpdate *)v7, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v7[1] + 12LL) == 65001 )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( (unsigned int)sub_1402391E4(a1, (__int64)v9) != -1 )
    sub_1402397C0((__int64)v9, a2, v4);
  return 0; /* the function has no caller */
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023A4E4) ----------------------------------------------------
__int64            sub_14023A4E4(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-298h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-278h] BYREF
  char v8; // [rsp+38h] [rbp-260h]
  _BYTE v9[560]; // [rsp+40h] [rbp-258h] BYREF
  __int64 v10; // [rsp+270h] [rbp-28h]

  sub_140213644((_LocaleUpdate *)v7, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v7[1] + 12LL) == 65001 )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( (unsigned int)sub_140239314(a1, (__int64)v9) != -1 )
    sub_140239870((__int64)v9, a2, v4);
  return 0; /* the function has no caller */
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023A5C4)
__int64 sub_14023A5C4(__int64 a1,__int64 a2)
{
 struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
 unsigned char wide[560];
 unsigned int cp=65001,result=0xffffffffu;
 sub_140213644((_LocaleUpdate *)&locale,NULL);
 if(*(_DWORD *)(locale.locale+12)!=65001)cp=(unsigned int)sub_14024EDA4()?0:1;
 if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
 unsigned int status=(unsigned int)sub_140239448(a1,(__int64)(uintptr_t)wide);
 if(status!=0xffffffffu && sub_140239928((__int64)(uintptr_t)wide,a2,cp))result=status;
 return result;
}

//----- (000000014023A6E4) ----------------------------------------------------
__int64            sub_14023A6E4(unsigned int a1, unsigned int a2, struct __crt_locale_pointers *a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  int v6; // ecx
  int *v7; // rax
  int v8; // eax
  __int64 v9; // [rsp+50h] [rbp-20h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h] BYREF
  char v11; // [rsp+68h] [rbp-8h]
  char v12; // [rsp+90h] [rbp+20h] BYREF
  char v13; // [rsp+91h] [rbp+21h]
  char v14; // [rsp+92h] [rbp+22h]
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF

  result = 0xFFFFFFFFLL;
  v4 = a1;
  if ( a1 != -1 )
  {
    sub_140213644((_LocaleUpdate *)&v9, a3);
    if ( v4 >= 0x100 )
    {
      v14 = 0;
      if ( *(int *)(v10 + 8) > 1 && (unsigned int)isleadbyte_l(BYTE1(v4), &v10) )
      {
        v12 = BYTE1(v4);
        v6 = 2;
        v13 = v4;
        v14 = 0;
      }
      else
      {
        v7 = errno_sr();
        v6 = 1;
        *v7 = 42;
        v12 = v4;
        v13 = 0;
      }
      LOWORD(v15) = 0;
      BYTE2(v15) = 0;
      v8 = sub_14025A004(
             (struct __crt_locale_pointers *)&v10,
             *(_QWORD *)(v10 + 312),
             a2,
             (__int64)&v12,
             v6,
             &v15,
             3,
             *(_DWORD *)(v10 + 12),
             1);
      if ( v8 )
      {
        v4 = (unsigned __int8)v15;
        if ( v8 != 1 )
          v4 = BYTE1(v15) | ((unsigned __int8)v15 << 8);
      }
    }
    else
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(v10 + 272) + (unsigned __int8)v4);
    }
    if ( v11 )
      *(_DWORD *)(v9 + 936) &= ~2u;
    return v4;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140259A50: using guessed type __int64 __fastcall isleadbyte_l(_QWORD, _QWORD);

//----- (000000014023A7F8) ----------------------------------------------------
__int64            sub_14023A7F8(unsigned int a1, unsigned int a2, struct __crt_locale_pointers *a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  int v6; // ecx
  int *v7; // rax
  int v8; // eax
  __int64 v9; // [rsp+50h] [rbp-20h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h] BYREF
  char v11; // [rsp+68h] [rbp-8h]
  char v12; // [rsp+90h] [rbp+20h] BYREF
  char v13; // [rsp+91h] [rbp+21h]
  char v14; // [rsp+92h] [rbp+22h]
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF

  result = 0xFFFFFFFFLL;
  v4 = a1;
  if ( a1 != -1 )
  {
    sub_140213644((_LocaleUpdate *)&v9, a3);
    if ( v4 >= 0x100 )
    {
      v14 = 0;
      if ( *(int *)(v10 + 8) > 1 && (unsigned int)isleadbyte_l(BYTE1(v4), &v10) )
      {
        v12 = BYTE1(v4);
        v6 = 2;
        v13 = v4;
        v14 = 0;
      }
      else
      {
        v7 = errno_sr();
        v6 = 1;
        *v7 = 42;
        v12 = v4;
        v13 = 0;
      }
      LOWORD(v15) = 0;
      BYTE2(v15) = 0;
      v8 = sub_14025A004(
             (struct __crt_locale_pointers *)&v10,
             *(_QWORD *)(v10 + 312),
             a2,
             (__int64)&v12,
             v6,
             &v15,
             3,
             *(_DWORD *)(v10 + 12),
             1);
      if ( v8 )
      {
        v4 = (unsigned __int8)v15;
        if ( v8 != 1 )
          v4 = BYTE1(v15) | ((unsigned __int8)v15 << 8);
      }
    }
    else
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(v10 + 280) + (unsigned __int8)v4);
    }
    if ( v11 )
      *(_DWORD *)(v9 + 936) &= ~2u;
    return v4;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140259A50: using guessed type __int64 __fastcall isleadbyte_l(_QWORD, _QWORD);

//----- (000000014023A90C) ----------------------------------------------------
__int64            sub_14023A90C(int a1, unsigned int a2, struct __crt_locale_pointers *     a3)
{
  __int64 v3; // rax
  int v7; // edi
  int v8; // ecx
  int *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 result; // rax
  bool v13; // zf
  char v14; // [rsp+80h] [rbp+30h] BYREF
  char v15; // [rsp+81h] [rbp+31h]
  char v16; // [rsp+82h] [rbp+32h]
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v3 = *(_QWORD *)a3;
  v16 = 0;
  if ( *(int *)(v3 + 8) > 1 && (v7 = a1 >> 8, (unsigned int)isleadbyte_l(BYTE1(a1), a3)) )
  {
    v14 = v7;
    v8 = 2;
    v15 = a1;
    v16 = 0;
  }
  else
  {
    v9 = errno_sr();
    v8 = 1;
    *v9 = 42;
    v14 = a1;
    v15 = 0;
  }
  v10 = *(_QWORD *)a3;
  LOWORD(v17) = 0;
  BYTE2(v17) = 0;
  v11 = sub_14025A004(a3, *(_QWORD *)(v10 + 312), a2, (__int64)&v14, v8, &v17, 3, *(_DWORD *)(v10 + 12), 1);
  if ( !v11 )
    return (unsigned int)a1;
  v13 = v11 == 1;
  result = (unsigned __int8)v17;
  if ( !v13 )
    return BYTE1(v17) | ((unsigned __int8)v17 << 8);
  return result;
}

// 140259A50: using guessed type __int64 __fastcall isleadbyte_l(_QWORD, _QWORD);

//----- (000000014023A9FC) ----------------------------------------------------
__int64            sub_14023A9FC(unsigned int a1, struct __crt_locale_pointers *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int *v5; // rax
  int v6; // eax
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+58h] [rbp-18h] BYREF
  char v10; // [rsp+68h] [rbp-8h]
  char v11; // [rsp+80h] [rbp+10h] BYREF
  char v12; // [rsp+81h] [rbp+11h]
  char v13; // [rsp+82h] [rbp+12h]
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF

  v2 = -1;
  if ( a1 != -1 )
  {
    sub_140213644((_LocaleUpdate *)&v8, a2);
    if ( a1 >= 0x100 )
    {
      v13 = 0;
      if ( *(int *)(v9[0] + 8LL) > 1 && (unsigned int)isleadbyte_l(BYTE1(a1), v9) )
      {
        v11 = BYTE1(a1);
        v4 = 2;
        v12 = a1;
        v13 = 0;
      }
      else
      {
        v5 = errno_sr();
        v4 = 1;
        *v5 = 42;
        v11 = a1;
        v12 = 0;
      }
      LOWORD(v14) = 0;
      BYTE2(v14) = 0;
      v6 = sub_14025A004(
             (struct __crt_locale_pointers *)v9,
             *(_QWORD *)(v9[0] + 312LL),
             0x100u,
             (__int64)&v11,
             v4,
             &v14,
             3,
             *(_DWORD *)(v9[0] + 12LL),
             1);
      if ( v6 )
      {
        v2 = (unsigned __int8)v14;
        if ( v6 != 1 )
          v2 = BYTE1(v14) | ((unsigned __int8)v14 << 8);
      }
      else
      {
        v2 = a1;
      }
      if ( v10 )
        *(_DWORD *)(v8 + 936) &= ~2u;
    }
    else
    {
      v2 = *(unsigned __int8 *)(*(_QWORD *)(v9[0] + 272LL) + (unsigned __int8)a1);
      if ( v10 )
        *(_DWORD *)(v8 + 936) &= ~2u;
    }
  }
  return v2;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140259A50: using guessed type __int64 __fastcall isleadbyte_l(_QWORD, _QWORD);

//----- (000000014023AB50) ----------------------------------------------------
__int64            sub_14023AB50(unsigned int a1, struct __crt_locale_pointers *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int *v5; // rax
  int v6; // eax
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+58h] [rbp-18h] BYREF
  char v10; // [rsp+68h] [rbp-8h]
  char v11; // [rsp+80h] [rbp+10h] BYREF
  char v12; // [rsp+81h] [rbp+11h]
  char v13; // [rsp+82h] [rbp+12h]
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF

  v2 = -1;
  if ( a1 != -1 )
  {
    sub_140213644((_LocaleUpdate *)&v8, a2);
    if ( a1 >= 0x100 )
    {
      v13 = 0;
      if ( *(int *)(v9[0] + 8LL) > 1 && (unsigned int)isleadbyte_l(BYTE1(a1), v9) )
      {
        v11 = BYTE1(a1);
        v4 = 2;
        v12 = a1;
        v13 = 0;
      }
      else
      {
        v5 = errno_sr();
        v4 = 1;
        *v5 = 42;
        v11 = a1;
        v12 = 0;
      }
      LOWORD(v14) = 0;
      BYTE2(v14) = 0;
      v6 = sub_14025A004(
             (struct __crt_locale_pointers *)v9,
             *(_QWORD *)(v9[0] + 312LL),
             0x200u,
             (__int64)&v11,
             v4,
             &v14,
             3,
             *(_DWORD *)(v9[0] + 12LL),
             1);
      if ( v6 )
      {
        v2 = (unsigned __int8)v14;
        if ( v6 != 1 )
          v2 = BYTE1(v14) | ((unsigned __int8)v14 << 8);
      }
      else
      {
        v2 = a1;
      }
      if ( v10 )
        *(_DWORD *)(v8 + 936) &= ~2u;
    }
    else
    {
      v2 = *(unsigned __int8 *)(*(_QWORD *)(v9[0] + 280LL) + (unsigned __int8)a1);
      if ( v10 )
        *(_DWORD *)(v8 + 936) &= ~2u;
    }
  }
  return v2;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140259A50: using guessed type __int64 __fastcall isleadbyte_l(_QWORD, _QWORD);

//----- (000000014023AC8C) ----------------------------------------------------
int         tolower(int C)
{
  if ( dword_140404A6C[19065283] )
    return sub_14023A9FC(C, nullptr);
  if ( (unsigned int)(C - 65) <= 0x19 )
    C += 32;
  return C;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014023ACB8) ----------------------------------------------------
int         toupper(int C)
{
  if ( dword_140404A6C[19065283] )
    return sub_14023AB50(C, nullptr);
  if ( (unsigned int)(C - 97) <= 0x19 )
    C -= 32;
  return C;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 14025A0BC: using guessed type __int64 __fastcall realloc_base(_QWORD, _QWORD);

//----- (000000014023AD10) ----------------------------------------------------
void            shortsort(char *a1, char *a2, __int64 a3, int (           *a4)(char *, char *))
{
  char *v6; // rdi
  char *v7; // r12
  char *v9; // rbx
  char *i; // rsi
  __int64 v11; // r8
  char *v12; // rax
  signed __int64 v13; // rbx
  char v14; // dl

  if ( a2 > a1 )
  {
    v6 = a2;
    v7 = &a1[a3];
    do
    {
      v9 = a1;
      for ( i = v7; i <= v6; i += a3 )
      {
        if ( a4(i, v9) > 0 )
          v9 = i;
      }
      v11 = a3;
      v12 = v6;
      if ( v9 != v6 && a3 )
      {
        v13 = v9 - v6;
        do
        {
          v14 = v12[v13];
          v12[v13] = *v12;
          *v12++ = v14;
          --v11;
        }
        while ( v11 );
      }
      v6 -= a3;
    }
    while ( v6 > a1 );
  }
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014023AE00) ----------------------------------------------------
void            sub_14023AE00(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int (           *a4)(unsigned __int64, _BYTE *))
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  _BYTE *v10; // rbx
  unsigned __int64 i; // rdi
  unsigned __int64 v12; // r8
  _BYTE *v13; // rdx
  _BYTE *v14; // rbx
  char v15; // cl
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  _BYTE *v18; // rdi
  _BYTE *v19; // r8
  unsigned __int64 v20; // r9
  char v21; // cl
  unsigned __int64 v22; // r8
  _BYTE *v23; // rdx
  unsigned __int64 v24; // r9
  char v25; // cl
  unsigned __int64 v26; // r8
  _BYTE *v27; // rdx
  _BYTE *v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rbp
  _BYTE *v33; // rdx
  unsigned __int64 v34; // r9
  char v35; // cl
  _BYTE *v36; // rax
  __int64 v38; // [rsp+0h] [rbp-468h] BYREF
  __int64 v39; // [rsp+20h] [rbp-448h]
  _QWORD v40[127]; // [rsp+30h] [rbp-438h]

  v6 = a1;
  if ( (a1 || !a2) && a3 && a4 )
  {
    if ( a2 >= 2 )
    {
      v7 = a1 + a3 * (a2 - 1);
      v8 = 0;
      v39 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v7 - v6) / a3 + 1;
          if ( v9 <= 8 )
          {
            if ( v7 > v6 )
            {
              do
              {
                v10 = (_BYTE *)v6;
                for ( i = a3 + v6; i <= v7; i += a3 )
                {
                  if ( a4(i, v10) > 0 )
                    v10 = (_BYTE *)i;
                }
                v12 = a3;
                v13 = (_BYTE *)v7;
                if ( v10 != (_BYTE *)v7 )
                {
                  v14 = &v10[-v7];
                  do
                  {
                    v15 = v13[(_QWORD)v14];
                    v13[(_QWORD)v14] = *v13;
                    *v13++ = v15;
                    --v12;
                  }
                  while ( v12 );
                }
                v7 -= a3;
              }
              while ( v7 > v6 );
              v8 = v39;
            }
            goto LABEL_19;
          }
          v17 = a3 * (v9 >> 1);
          v18 = (_BYTE *)(v17 + v6);
          if ( a4(v6, (_BYTE *)(v17 + v6)) > 0 )
          {
            v20 = a3;
            v19 = (_BYTE *)(v17 + v6);
            if ( (_BYTE *)v6 != v18 )
            {
              do
              {
                v21 = v19[-v17];
                v19[-v17] = *v19;
                *v19++ = v21;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( a4(v6, (_BYTE *)v7) > 0 )
          {
            v22 = a3;
            v23 = (_BYTE *)v7;
            if ( v6 != v7 )
            {
              v24 = v6 - v7;
              do
              {
                v25 = v23[v24];
                v23[v24] = *v23;
                *v23++ = v25;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( a4(v17 + v6, (_BYTE *)v7) > 0 )
          {
            v26 = a3;
            v27 = (_BYTE *)v7;
            if ( v18 != (_BYTE *)v7 )
            {
              v28 = &v18[-v7];
              do
              {
                v29 = v27[(_QWORD)v28];
                v27[(_QWORD)v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          v30 = v6;
          v31 = v7;
          while ( 1 )
          {
            if ( (unsigned __int64)v18 > v30 )
            {
              while ( 1 )
              {
                v30 += a3;
                if ( v30 >= (unsigned __int64)v18 )
                  break;
                if ( a4(v30, v18) > 0 )
                {
                  if ( (unsigned __int64)v18 > v30 )
                    goto LABEL_39;
                  goto LABEL_37;
                }
              }
            }
            do
LABEL_37:
              v30 += a3;
            while ( v30 <= v7
                 && a4(v30, v18) <= 0 );
            do
            {
LABEL_39:
              v32 = v31;
              v31 -= a3;
            }
            while ( v31 > (unsigned __int64)v18 && a4(v31, v18) > 0 );
            if ( v31 < v30 )
              break;
            v26 = a3;
            v33 = (_BYTE *)v31;
            if ( v31 != v30 )
            {
              v34 = v30 - v31;
              do
              {
                v35 = v33[v34];
                v33[v34] = *v33;
                *v33++ = v35;
                --v26;
              }
              while ( v26 );
            }
            v36 = (_BYTE *)v30;
            if ( v18 != (_BYTE *)v31 )
              v36 = v18;
            v18 = v36;
          }
          if ( (unsigned __int64)v18 < v32 )
          {
            while ( 1 )
            {
              v32 -= a3;
              if ( v32 <= (unsigned __int64)v18 )
                break;
              if ( a4(v32, v18) )
              {
                if ( (unsigned __int64)v18 < v32 )
                  goto LABEL_54;
                goto LABEL_52;
              }
            }
          }
          do
LABEL_52:
            v32 -= a3;
          while ( v32 > v6 && !a4(v32, v18) );
LABEL_54:
          v8 = v39;
          if ( (__int64)(v32 - v6) >= (__int64)(v7 - v30) )
            break;
          if ( v30 < v7 )
          {
            v40[v39] = v30;
            v40[v8++ + 62] = v7;
            v39 = v8;
          }
          if ( v6 >= v32 )
          {
LABEL_19:
            v16 = v8--;
            v39 = v8;
            if ( v16 <= 0 )
              return;
            v6 = v40[v8];
            v7 = v40[v8 + 62];
          }
          else
          {
            v7 = v32;
          }
        }
        if ( v6 < v32 )
        {
          v40[v39] = v6;
          v40[v8++ + 62] = v32;
          v39 = v8;
        }
        if ( v30 >= v7 )
          goto LABEL_19;
        v6 = v30;
      }
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return;
}

// 14023AFA4: variable 'v19' is possibly undefined
// 14023AFA4: variable 'v20' is possibly undefined
// 14023AFE1: variable 'v22' is possibly undefined
// 14023B036: variable 'v26' is possibly undefined
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014023B1B0) ----------------------------------------------------
int         rand()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // ecx

  v0 = sub_140255A70();
  v1 = 214013 * *(_DWORD *)(v0 + 40) + 2531011;
  *(_DWORD *)(v0 + 40) = v1;
  return HIWORD(v1) & 0x7FFF;
}


//----- (000000014023B1DC) ----------------------------------------------------
void         srand(unsigned int Seed)
{
  *(_DWORD *)(sub_140255A70() + 40) = Seed;
}


//----- (000000014023B240) ----------------------------------------------------
__int64            sub_14023B240(struct __crt_locale_pointers *a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v5; // r14d
  __int64 v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int64 i; // rax
  char v11; // al
  char v12; // bp
  int v13; // eax
  int v14; // eax
  char v15; // dl
  _BYTE *v16; // rcx
  int v17; // eax
  _BYTE *v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  char v21; // cl
  _BYTE *v22; // rax
  bool v23; // zf
  _QWORD *v24; // rcx
  int v26; // edi
  int v27; // ebp
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  sr_format_locale sr_integer_locale;

  v5 = a3;
  if ( !*a2 || a3 && a3 - 2 > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
LABEL_54:
    v24 = (_QWORD *)a2[1];
    if ( v24 )
      *v24 = *a2;
    return 0;
  }
  sub_140213644((_LocaleUpdate *)&sr_integer_locale, a1);
  v7 = *a2;
  v8 = 0;
  v9 = *(unsigned __int8 *)*a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140236ED8(v9, 8, (struct __crt_locale_pointers *)sr_integer_locale.pair) )
      break;
    v9 = *(unsigned __int8 *)*a2;
  }
  v11 = a4;
  v12 = a4 | 2;
  if ( (_BYTE)v9 != 45 )
    v12 = v11;
  if ( (((_BYTE)v9 - 43) & 0xFD) == 0 )
    LOBYTE(v9) = *(_BYTE *)(*a2)++;
  if ( (v5 & 0xFFFFFFEF) == 0 )
  {
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
      {
        if ( (unsigned __int8)(v9 - 65) > 0x19u )
          v13 = -1;
        else
          v13 = (char)v9 - 55;
      }
      else
      {
        v13 = (char)v9 - 87;
      }
    }
    else
    {
      v13 = (char)v9 - 48;
    }
    if ( v13 )
    {
      v14 = 10;
LABEL_29:
      if ( v5 )
        v14 = v5;
      v5 = v14;
      goto LABEL_32;
    }
    v15 = *(_BYTE *)*a2;
    v16 = (_BYTE *)(*a2 + 1);
    *a2 = (__int64)v16;
    if ( ((v15 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v9) = *v16;
      *a2 = (__int64)(v16 + 1);
      v14 = 16;
      goto LABEL_29;
    }
    v17 = 8;
    if ( v5 )
      v17 = v5;
    v18 = v16 - 1;
    *a2 = (__int64)v18;
    v5 = v17;
    if ( v15 && *v18 != v15 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
    }
  }
LABEL_32:
  v19 = 0xFFFFFFFF / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v20 = (unsigned __int8)(v9 - 65) > 0x19u ? -1 : (char)v9 - 55;
      else
        v20 = (char)v9 - 87;
    }
    else
    {
      v20 = (char)v9 - 48;
    }
    if ( v20 == -1 || v20 >= v5 )
      break;
    if ( v8 < v19 || v8 == v19 && v20 <= 0xFFFFFFFF % v5 )
    {
      v8 = v20 + v5 * v8;
      v21 = 8;
    }
    else
    {
      v21 = 12;
    }
    LOBYTE(v9) = *(_BYTE *)(*a2)++;
    v12 |= v21;
  }
  v22 = (_BYTE *)(*a2 - 1);
  *a2 = (__int64)v22;
  if ( (_BYTE)v9 && *v22 != (_BYTE)v9 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  if ( (v12 & 8) == 0 )
  {
    v23 = sr_integer_locale.changed == 0;
    *a2 = v7;
    if ( !v23 )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    goto LABEL_54;
  }
  v26 = v12 & 1;
  if ( (v12 & 4) == 0 )
  {
    if ( (v12 & 1) == 0 )
      goto LABEL_69;
    if ( (v12 & 2) != 0 )
    {
      if ( v8 > 0x80000000 )
        goto LABEL_61;
LABEL_69:
      if ( (v12 & 2) != 0 )
        v8 = -v8;
      goto LABEL_63;
    }
    if ( v8 <= 0x7FFFFFFF )
      goto LABEL_69;
  }
LABEL_61:
  v27 = v12 & 2;
  *errno_sr() = 34;
  if ( !v26 )
  {
    v8 = -1;
LABEL_63:
    if ( sr_integer_locale.changed )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    v28 = (_QWORD *)a2[1];
    if ( v28 )
      *v28 = *a2;
    return v8;
  }
  if ( v27 )
  {
    if ( sr_integer_locale.changed )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    v29 = (_QWORD *)a2[1];
    if ( v29 )
      *v29 = *a2;
    return 0x80000000LL;
  }
  else
  {
    if ( sr_integer_locale.changed )
      *(_DWORD *)(sr_integer_locale.thread + 936) &= ~2u;
    v30 = (_QWORD *)a2[1];
    if ( v30 )
      *v30 = *a2;
    return 0x7FFFFFFF;
  }
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023B548) ----------------------------------------------------
__int64            sub_14023B548(struct __crt_locale_pointers *a1, unsigned __int16 **a2, unsigned int a3, char a4)
{
  unsigned int v5; // r14d
  unsigned int v7; // ebp
  unsigned __int16 v8; // bx
  unsigned __int16 *i; // rax
  char v10; // al
  char v11; // si
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // eax
  __int16 v17; // dx
  unsigned __int16 *v18; // rcx
  int v19; // eax
  unsigned __int16 *v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  char v26; // cl
  unsigned __int16 *v27; // rax
  unsigned __int16 *v28; // rcx
  int v30; // ebx
  int v31; // esi
  unsigned __int16 *v32; // rdx
  unsigned __int16 *v33; // rdx
  unsigned __int16 *v34; // rdx
  __int64 v35[3]; // [rsp+20h] [rbp-48h] BYREF
  char v36; // [rsp+38h] [rbp-30h]
  unsigned __int16 *v37; // [rsp+78h] [rbp+10h]

  v5 = a3;
  if ( !*a2 || a3 && a3 - 2 > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_138;
  }
  sub_140213644((_LocaleUpdate *)v35, a1);
  v7 = 0;
  v37 = *a2;
  v8 = **a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140256E00(v8, 8) )
      break;
    v8 = **a2;
  }
  v10 = a4;
  v11 = a4 | 2;
  if ( v8 != 45 )
    v11 = v10;
  if ( ((v8 - 43) & 0xFFFD) == 0 )
    v8 = *(*a2)++;
  v12 = 65296;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_75;
  if ( v8 >= 0x30u )
  {
    if ( v8 < 0x3Au )
    {
      v13 = v8 - 48;
      goto LABEL_56;
    }
    if ( v8 >= 0xFF10u )
    {
      if ( v8 >= 0xFF1Au )
      {
        v13 = -1;
LABEL_56:
        if ( v13 != -1 )
          goto LABEL_63;
        goto LABEL_57;
      }
LABEL_31:
      v13 = v8 - v12;
      goto LABEL_56;
    }
    if ( v8 >= 0x660u )
    {
      if ( v8 < 0x66Au )
      {
        v13 = v8 - 1632;
        goto LABEL_56;
      }
      if ( v8 >= 0x6F0u )
      {
        if ( v8 < 0x6FAu )
        {
          v13 = v8 - 1776;
          goto LABEL_56;
        }
        if ( v8 >= 0x966u )
        {
          if ( v8 < 0x970u )
          {
            v13 = v8 - 2406;
            goto LABEL_56;
          }
          if ( v8 >= 0x9E6u )
          {
            if ( v8 < 0x9F0u )
            {
              v13 = v8 - 2534;
              goto LABEL_56;
            }
            v12 = 2662;
            if ( v8 >= 0xA66u )
            {
              if ( v8 < 0xA70u )
                goto LABEL_31;
              v12 = 2790;
              if ( v8 >= 0xAE6u )
              {
                if ( v8 < 0xAF0u )
                  goto LABEL_31;
                v12 = 2918;
                if ( v8 >= 0xB66u )
                {
                  if ( v8 < 0xB70u )
                    goto LABEL_31;
                  v12 = 3174;
                  if ( v8 >= 0xC66u )
                  {
                    if ( v8 < 0xC70u )
                      goto LABEL_31;
                    v12 = 3302;
                    if ( v8 >= 0xCE6u )
                    {
                      if ( v8 < 0xCF0u )
                        goto LABEL_31;
                      v12 = 3430;
                      if ( v8 >= 0xD66u )
                      {
                        if ( v8 < 0xD70u )
                          goto LABEL_31;
                        v12 = 3664;
                        if ( v8 >= 0xE50u )
                        {
                          if ( v8 < 0xE5Au )
                            goto LABEL_31;
                          v12 = 3792;
                          if ( v8 >= 0xED0u )
                          {
                            if ( v8 < 0xEDAu )
                              goto LABEL_31;
                            v12 = 3872;
                            if ( v8 >= 0xF20u )
                            {
                              if ( v8 < 0xF2Au )
                                goto LABEL_31;
                              v12 = 4160;
                              if ( v8 >= 0x1040u )
                              {
                                if ( v8 < 0x104Au )
                                  goto LABEL_31;
                                v12 = 6112;
                                if ( v8 >= 0x17E0u )
                                {
                                  if ( v8 < 0x17EAu )
                                    goto LABEL_31;
                                  v12 = 6160;
                                  if ( (unsigned __int16)(v8 - 6160) <= 9u )
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
  v14 = v8 - 97;
  if ( (unsigned int)v8 - 65 <= 0x19 || v14 <= 0x19 )
  {
    v15 = v8 - 32;
    if ( v14 > 0x19 )
      v15 = v8;
    v13 = v15 - 55;
  }
  else
  {
    v13 = -1;
  }
LABEL_63:
  if ( v13 )
  {
    v16 = 10;
  }
  else
  {
    v17 = **a2;
    v18 = *a2 + 1;
    *a2 = v18;
    if ( ((v17 - 88) & 0xFFDF) != 0 )
    {
      v19 = 8;
      if ( v5 )
        v19 = v5;
      v20 = v18 - 1;
      *a2 = v20;
      v5 = v19;
      if ( v17 && *v20 != v17 )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
      }
      goto LABEL_75;
    }
    v8 = *v18;
    *a2 = v18 + 1;
    v16 = 16;
  }
  if ( v5 )
    v16 = v5;
  v5 = v16;
LABEL_75:
  v21 = 0xFFFFFFFF / v5;
  while ( 1 )
  {
    if ( v8 >= 0x30u )
    {
      if ( v8 < 0x3Au )
      {
        v22 = v8 - 48;
        goto LABEL_117;
      }
      if ( v8 >= 0xFF10u )
      {
        if ( v8 >= 0xFF1Au )
          v22 = -1;
        else
          v22 = v8 - 65296;
LABEL_117:
        if ( v22 != -1 )
          goto LABEL_124;
        goto LABEL_118;
      }
      if ( v8 >= 0x660u )
      {
        if ( v8 < 0x66Au )
        {
          v22 = v8 - 1632;
          goto LABEL_117;
        }
        v23 = 1776;
        if ( v8 >= 0x6F0u )
        {
          if ( v8 < 0x6FAu )
            goto LABEL_85;
          v23 = 2406;
          if ( v8 >= 0x966u )
          {
            if ( v8 < 0x970u )
              goto LABEL_85;
            v23 = 2534;
            if ( v8 >= 0x9E6u )
            {
              if ( v8 < 0x9F0u )
                goto LABEL_85;
              v23 = 2662;
              if ( v8 >= 0xA66u )
              {
                if ( v8 < 0xA70u )
                  goto LABEL_85;
                v23 = 2790;
                if ( v8 >= 0xAE6u )
                {
                  if ( v8 < 0xAF0u )
                    goto LABEL_85;
                  v23 = 2918;
                  if ( v8 >= 0xB66u )
                  {
                    if ( v8 < 0xB70u )
                      goto LABEL_85;
                    v23 = 3174;
                    if ( v8 >= 0xC66u )
                    {
                      if ( v8 < 0xC70u )
                        goto LABEL_85;
                      v23 = 3302;
                      if ( v8 >= 0xCE6u )
                      {
                        if ( v8 < 0xCF0u )
                          goto LABEL_85;
                        v23 = 3430;
                        if ( v8 >= 0xD66u )
                        {
                          if ( v8 < 0xD70u )
                            goto LABEL_85;
                          v23 = 3664;
                          if ( v8 >= 0xE50u )
                          {
                            if ( v8 < 0xE5Au )
                              goto LABEL_85;
                            v23 = 3792;
                            if ( v8 >= 0xED0u )
                            {
                              if ( v8 < 0xEDAu )
                                goto LABEL_85;
                              v23 = 3872;
                              if ( v8 >= 0xF20u )
                              {
                                if ( v8 < 0xF2Au )
                                  goto LABEL_85;
                                v23 = 4160;
                                if ( v8 >= 0x1040u )
                                {
                                  if ( v8 < 0x104Au )
                                    goto LABEL_85;
                                  v23 = 6112;
                                  if ( v8 >= 0x17E0u )
                                  {
                                    if ( v8 < 0x17EAu )
                                    {
LABEL_85:
                                      v22 = v8 - v23;
                                      goto LABEL_117;
                                    }
                                    if ( (unsigned __int16)(v8 - 6160) <= 9u )
                                    {
                                      v22 = v8 - 6160;
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
    v24 = v8 - 97;
    if ( (unsigned int)v8 - 65 <= 0x19 || v24 <= 0x19 )
    {
      v25 = v8 - 32;
      if ( v24 > 0x19 )
        v25 = v8;
      v22 = v25 - 55;
    }
    else
    {
      v22 = -1;
    }
LABEL_124:
    if ( v22 == -1 || v22 >= v5 )
      break;
    if ( v7 < v21 || v7 == v21 && v22 <= 0xFFFFFFFF % v5 )
    {
      v7 = v22 + v5 * v7;
      v26 = 8;
    }
    else
    {
      v26 = 12;
    }
    v8 = *(*a2)++;
    v11 |= v26;
  }
  v27 = *a2 - 1;
  *a2 = v27;
  if ( v8 && *v27 != v8 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  if ( (v11 & 8) != 0 )
  {
    v30 = v11 & 1;
    if ( (v11 & 4) == 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 2) != 0 )
        {
          if ( v7 > 0x80000000 )
            goto LABEL_145;
        }
        else if ( v7 > 0x7FFFFFFF )
        {
          goto LABEL_145;
        }
      }
      if ( (v11 & 2) != 0 )
        v7 = -v7;
      goto LABEL_147;
    }
LABEL_145:
    v31 = v11 & 2;
    *errno_sr() = 34;
    if ( v30 )
    {
      if ( v31 )
      {
        if ( v36 )
          *(_DWORD *)(v35[0] + 936) &= ~2u;
        v33 = a2[1];
        if ( v33 )
          *(_QWORD *)v33 = (uint64)(uintptr_t)(*a2);
        return 0x80000000LL;
      }
      else
      {
        if ( v36 )
          *(_DWORD *)(v35[0] + 936) &= ~2u;
        v34 = a2[1];
        if ( v34 )
          *(_QWORD *)v34 = (uint64)(uintptr_t)(*a2);
        return 0x7FFFFFFF;
      }
    }
    v7 = -1;
LABEL_147:
    if ( v36 )
      *(_DWORD *)(v35[0] + 936) &= ~2u;
    v32 = a2[1];
    if ( v32 )
      *(_QWORD *)v32 = (uint64)(uintptr_t)(*a2);
    return v7;
  }
  *a2 = v37;
  if ( v36 )
    *(_DWORD *)(v35[0] + 936) &= ~2u;
LABEL_138:
  v28 = a2[1];
  if ( v28 )
    *(_QWORD *)v28 = (uint64)(uintptr_t)(*a2);
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023BBF0) ----------------------------------------------------
unsigned __int64            sub_14023BBF0(
        struct __crt_locale_pointers *a1,
        char **a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int v5; // r14d
  unsigned __int8 *v7; // r15
  unsigned __int64 v8; // rsi
  unsigned int v9; // edi
  char *i; // rax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  char v15; // dl
  char *v16; // rcx
  int v17; // eax
  char *v18; // rcx
  unsigned __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rdx
  char *v22; // rax
  bool v23; // zf
  char *v24; // rcx
  char *v26; // rcx
  char *v27; // rcx
  char *v28; // rax
  __int64 v29; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+28h] [rbp-30h] BYREF
  char v31; // [rsp+38h] [rbp-20h]

  v5 = a3;
  if ( !*a2 || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_55;
  }
  sub_140213644((_LocaleUpdate *)&v29, a1);
  v7 = (unsigned __int8 *)*a2;
  v8 = 0;
  v9 = (unsigned __int8)**a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140236ED8(v9, 8, (struct __crt_locale_pointers *)&v30) )
      break;
    v9 = (unsigned __int8)**a2;
  }
  v11 = a4;
  v12 = a4 | 2;
  if ( (_BYTE)v9 != 45 )
    v12 = v11;
  if ( (((_BYTE)v9 - 43) & 0xFD) == 0 )
    LOBYTE(v9) = *(*a2)++;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_32;
  if ( (unsigned __int8)(v9 - 48) > 9u )
  {
    if ( (unsigned __int8)(v9 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v9 - 65) > 0x19u )
        v13 = -1;
      else
        v13 = (char)v9 - 55;
    }
    else
    {
      v13 = (char)v9 - 87;
    }
  }
  else
  {
    v13 = (char)v9 - 48;
  }
  if ( v13 )
  {
    v14 = 10;
  }
  else
  {
    v15 = **a2;
    v16 = *a2 + 1;
    *a2 = v16;
    if ( ((v15 - 88) & 0xDF) != 0 )
    {
      v17 = 8;
      if ( v5 )
        v17 = v5;
      v18 = v16 - 1;
      *a2 = v18;
      v5 = v17;
      if ( v15 && *v18 != v15 )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
      }
      goto LABEL_32;
    }
    LOBYTE(v9) = *v16;
    *a2 = v16 + 1;
    v14 = 16;
  }
  if ( v5 )
    v14 = v5;
  v5 = v14;
LABEL_32:
  v19 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v20 = (unsigned __int8)(v9 - 65) > 0x19u ? -1 : (char)v9 - 55;
      else
        v20 = (char)v9 - 87;
    }
    else
    {
      v20 = (char)v9 - 48;
    }
    if ( v20 == -1 || v20 >= v5 )
      break;
    v12 |= 8u;
    if ( v8 < v19 )
    {
      v21 = v20;
    }
    else if ( v8 != v19 || (v21 = v20, v20 > 0xFFFFFFFFFFFFFFFFuLL % v5) )
    {
      v12 |= 4u;
      goto LABEL_48;
    }
    v8 = v21 + v5 * v8;
LABEL_48:
    LOBYTE(v9) = *(*a2)++;
  }
  v22 = *a2 - 1;
  *a2 = v22;
  if ( (_BYTE)v9 && *v22 != (_BYTE)v9 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  if ( (v12 & 8) != 0 )
  {
    if ( sub_1402257B4(v12, v8) )
    {
      *errno_sr() = 34;
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 2) != 0 )
        {
          if ( v31 )
            *(_DWORD *)(v29 + 936) &= ~2u;
          v26 = a2[1];
          if ( v26 )
            *(_QWORD *)v26 = (uint64)(uintptr_t)(*a2);
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v31 )
            *(_DWORD *)(v29 + 936) &= ~2u;
          v27 = a2[1];
          if ( v27 )
            *(_QWORD *)v27 = (uint64)(uintptr_t)(*a2);
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v8 = -1;
    }
    else if ( (v12 & 2) != 0 )
    {
      v8 = -(__int64)v8;
    }
    if ( v31 )
      *(_DWORD *)(v29 + 936) &= ~2u;
    v28 = a2[1];
    if ( v28 )
      *(_QWORD *)v28 = (uint64)(uintptr_t)(*a2);
    return v8;
  }
  v23 = v31 == 0;
  *a2 = (char *)v7;
  if ( !v23 )
    *(_DWORD *)(v29 + 936) &= ~2u;
LABEL_55:
  v24 = a2[1];
  if ( v24 )
    *(_QWORD *)v24 = (uint64)(uintptr_t)(*a2);
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023BEE0) ----------------------------------------------------
unsigned __int64            sub_14023BEE0(
        struct __crt_locale_pointers *a1,
        unsigned __int16 **a2,
        signed int a3,
        unsigned __int8 a4)
{
  signed int v5; // r14d
  unsigned __int64 v7; // rbp
  unsigned __int16 v8; // bx
  unsigned __int16 *i; // rax
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // eax
  __int16 v17; // dx
  unsigned __int16 *v18; // rcx
  int v19; // eax
  unsigned __int16 *v20; // rcx
  unsigned __int64 v21; // r8
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  __int64 v26; // rdx
  unsigned __int16 *v27; // r15
  unsigned __int16 *v28; // rax
  unsigned __int16 *v29; // rcx
  unsigned __int16 *v31; // rcx
  unsigned __int16 *v32; // rcx
  unsigned __int16 *v33; // rdx
  __int64 v34[3]; // [rsp+78h] [rbp-50h] BYREF
  char v35; // [rsp+90h] [rbp-38h]
  unsigned __int16 *v36; // [rsp+98h] [rbp-30h]

  v5 = a3;
  if ( !*a2 || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_140;
  }
  sub_140213644((_LocaleUpdate *)v34, a1);
  v7 = 0;
  v36 = *a2;
  v8 = *v36;
  for ( i = v36 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140256E00(v8, 8) )
      break;
    v8 = **a2;
  }
  v10 = a4;
  v11 = a4 | 2;
  if ( v8 != 45 )
    v11 = v10;
  if ( ((v8 - 43) & 0xFFFD) == 0 )
    v8 = *(*a2)++;
  v12 = 65296;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_76;
  if ( v8 >= 0x30u )
  {
    if ( v8 < 0x3Au )
    {
      v13 = v8 - 48;
      goto LABEL_57;
    }
    if ( v8 >= 0xFF10u )
    {
      if ( v8 >= 0xFF1Au )
      {
        v13 = -1;
LABEL_57:
        if ( v13 != -1 )
          goto LABEL_64;
        goto LABEL_58;
      }
LABEL_34:
      v13 = v8 - v12;
      goto LABEL_57;
    }
    if ( v8 >= 0x660u )
    {
      if ( v8 < 0x66Au )
      {
        v13 = v8 - 1632;
        goto LABEL_57;
      }
      if ( v8 >= 0x6F0u )
      {
        if ( v8 < 0x6FAu )
        {
          v13 = v8 - 1776;
          goto LABEL_57;
        }
        if ( v8 >= 0x966u )
        {
          if ( v8 < 0x970u )
          {
            v13 = v8 - 2406;
            goto LABEL_57;
          }
          if ( v8 >= 0x9E6u )
          {
            if ( v8 < 0x9F0u )
            {
              v13 = v8 - 2534;
              goto LABEL_57;
            }
            if ( v8 >= 0xA66u )
            {
              if ( v8 < 0xA70u )
              {
                v13 = v8 - 2662;
                goto LABEL_57;
              }
              v12 = 2790;
              if ( v8 >= 0xAE6u )
              {
                if ( v8 < 0xAF0u )
                  goto LABEL_34;
                v12 = 2918;
                if ( v8 >= 0xB66u )
                {
                  if ( v8 < 0xB70u )
                    goto LABEL_34;
                  v12 = 3174;
                  if ( v8 >= 0xC66u )
                  {
                    if ( v8 < 0xC70u )
                      goto LABEL_34;
                    v12 = 3302;
                    if ( v8 >= 0xCE6u )
                    {
                      if ( v8 < 0xCF0u )
                        goto LABEL_34;
                      v12 = 3430;
                      if ( v8 >= 0xD66u )
                      {
                        if ( v8 < 0xD70u )
                          goto LABEL_34;
                        v12 = 3664;
                        if ( v8 >= 0xE50u )
                        {
                          if ( v8 < 0xE5Au )
                            goto LABEL_34;
                          v12 = 3792;
                          if ( v8 >= 0xED0u )
                          {
                            if ( v8 < 0xEDAu )
                              goto LABEL_34;
                            v12 = 3872;
                            if ( v8 >= 0xF20u )
                            {
                              if ( v8 < 0xF2Au )
                                goto LABEL_34;
                              v12 = 4160;
                              if ( v8 >= 0x1040u )
                              {
                                if ( v8 < 0x104Au )
                                  goto LABEL_34;
                                v12 = 6112;
                                if ( v8 >= 0x17E0u )
                                {
                                  if ( v8 < 0x17EAu )
                                    goto LABEL_34;
                                  v12 = 6160;
                                  if ( (unsigned __int16)(v8 - 6160) <= 9u )
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
  v14 = v8 - 97;
  if ( (unsigned int)v8 - 65 <= 0x19 || v14 <= 0x19 )
  {
    v15 = v8 - 32;
    if ( v14 > 0x19 )
      v15 = v8;
    v13 = v15 - 55;
  }
  else
  {
    v13 = -1;
  }
LABEL_64:
  if ( v13 )
  {
    v16 = 10;
  }
  else
  {
    v17 = **a2;
    v18 = *a2 + 1;
    *a2 = v18;
    if ( ((v17 - 88) & 0xFFDF) != 0 )
    {
      v19 = 8;
      if ( v5 )
        v19 = v5;
      v20 = v18 - 1;
      *a2 = v20;
      v5 = v19;
      if ( v17 && *v20 != v17 )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
      }
      goto LABEL_76;
    }
    v8 = *v18;
    *a2 = v18 + 1;
    v16 = 16;
  }
  if ( v5 )
    v16 = v5;
  v5 = v16;
LABEL_76:
  v21 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( v8 >= 0x30u )
    {
      if ( v8 < 0x3Au )
      {
        v22 = v8 - 48;
        goto LABEL_118;
      }
      if ( v8 >= 0xFF10u )
      {
        if ( v8 >= 0xFF1Au )
          v22 = -1;
        else
          v22 = v8 - 65296;
LABEL_118:
        if ( v22 != -1 )
          goto LABEL_125;
        goto LABEL_119;
      }
      if ( v8 >= 0x660u )
      {
        if ( v8 < 0x66Au )
        {
          v22 = v8 - 1632;
          goto LABEL_118;
        }
        v23 = 1776;
        if ( v8 >= 0x6F0u )
        {
          if ( v8 < 0x6FAu )
            goto LABEL_86;
          v23 = 2406;
          if ( v8 >= 0x966u )
          {
            if ( v8 < 0x970u )
              goto LABEL_86;
            v23 = 2534;
            if ( v8 >= 0x9E6u )
            {
              if ( v8 < 0x9F0u )
                goto LABEL_86;
              v23 = 2662;
              if ( v8 >= 0xA66u )
              {
                if ( v8 < 0xA70u )
                  goto LABEL_86;
                v23 = 2790;
                if ( v8 >= 0xAE6u )
                {
                  if ( v8 < 0xAF0u )
                    goto LABEL_86;
                  v23 = 2918;
                  if ( v8 >= 0xB66u )
                  {
                    if ( v8 < 0xB70u )
                      goto LABEL_86;
                    v23 = 3174;
                    if ( v8 >= 0xC66u )
                    {
                      if ( v8 < 0xC70u )
                        goto LABEL_86;
                      v23 = 3302;
                      if ( v8 >= 0xCE6u )
                      {
                        if ( v8 < 0xCF0u )
                          goto LABEL_86;
                        v23 = 3430;
                        if ( v8 >= 0xD66u )
                        {
                          if ( v8 < 0xD70u )
                            goto LABEL_86;
                          v23 = 3664;
                          if ( v8 >= 0xE50u )
                          {
                            if ( v8 < 0xE5Au )
                              goto LABEL_86;
                            v23 = 3792;
                            if ( v8 >= 0xED0u )
                            {
                              if ( v8 < 0xEDAu )
                                goto LABEL_86;
                              v23 = 3872;
                              if ( v8 >= 0xF20u )
                              {
                                if ( v8 < 0xF2Au )
                                  goto LABEL_86;
                                v23 = 4160;
                                if ( v8 >= 0x1040u )
                                {
                                  if ( v8 < 0x104Au )
                                    goto LABEL_86;
                                  v23 = 6112;
                                  if ( v8 >= 0x17E0u )
                                  {
                                    if ( v8 < 0x17EAu )
                                    {
LABEL_86:
                                      v22 = v8 - v23;
                                      goto LABEL_118;
                                    }
                                    if ( (unsigned __int16)(v8 - 6160) <= 9u )
                                    {
                                      v22 = v8 - 6160;
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
    v24 = v8 - 97;
    if ( (unsigned int)v8 - 65 <= 0x19 || v24 <= 0x19 )
    {
      v25 = v8 - 32;
      if ( v24 > 0x19 )
        v25 = v8;
      v22 = v25 - 55;
    }
    else
    {
      v22 = -1;
    }
LABEL_125:
    if ( v22 == -1 || v22 >= v5 )
      break;
    v11 |= 8u;
    if ( v7 < v21 )
    {
      v26 = v22;
    }
    else if ( v7 != v21 || (v26 = v22, v22 > 0xFFFFFFFFFFFFFFFFuLL % v5) )
    {
      v11 |= 4u;
      goto LABEL_133;
    }
    v7 = v26 + v5 * v7;
LABEL_133:
    v8 = *(*a2)++;
  }
  v27 = v36;
  v28 = *a2 - 1;
  *a2 = v28;
  if ( v8 && *v28 != v8 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  if ( (v11 & 8) != 0 )
  {
    if ( sub_1402257B4(v11, v7) )
    {
      *errno_sr() = 34;
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 2) != 0 )
        {
          if ( v35 )
            *(_DWORD *)(v34[0] + 936) &= ~2u;
          v31 = a2[1];
          if ( v31 )
            *(_QWORD *)v31 = (uint64)(uintptr_t)(*a2);
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v35 )
            *(_DWORD *)(v34[0] + 936) &= ~2u;
          v32 = a2[1];
          if ( v32 )
            *(_QWORD *)v32 = (uint64)(uintptr_t)(*a2);
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v7 = -1;
    }
    else if ( (v11 & 2) != 0 )
    {
      v7 = -(__int64)v7;
    }
    if ( v35 )
      *(_DWORD *)(v34[0] + 936) &= ~2u;
    v33 = a2[1];
    if ( v33 )
      *(_QWORD *)v33 = (uint64)(uintptr_t)(*a2);
    return v7;
  }
  *a2 = v27;
  if ( v35 )
    *(_DWORD *)(v34[0] + 936) &= ~2u;
LABEL_140:
  v29 = a2[1];
  if ( v29 )
    *(_QWORD *)v29 = (uint64)(uintptr_t)(*a2);
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014023C638) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_689(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, v5, a3, 1);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, v5, a3, 1);
}


//----- (000000014023C698) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_691(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, v5, a3, 0);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, v5, a3, 0);
}


//----- (000000014023C6F8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_693(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 1u);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 1u);
}


//----- (000000014023C758) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_695(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 0);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 0);
}


//----- (000000014023C844) ----------------------------------------------------
_BYTE *           __crt_strtox__c_string_character_source__char__unget(_QWORD *a1, char a2)
{
  _BYTE *result; // rax

  result = (_BYTE *)(*a1 - 1LL);
  *a1 = (uint64)(uintptr_t)(result);
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *errno_sr() = 22;
      return (_BYTE *)sub_14024CF6C();
    }
  }
  return result;
}


//----- (000000014023C870) ----------------------------------------------------
_WORD *           __crt_strtox__c_string_character_source__wchar_t__unget(_QWORD *a1, __int16 a2)
{
  _WORD *result; // rax

  result = (_WORD *)(*a1 - 2LL);
  *a1 = (uint64)(uintptr_t)(result);
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *errno_sr() = 22;
      return (_WORD *)sub_14024CF6C();
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
  sub_14024CF6C();
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
  sub_14024CF6C();
  return 0;
}


//----- (000000014023C8F0) ----------------------------------------------------
unsigned __int64            sub_14023C8F0(char *a1, char *a2, signed int a3)
{
  char *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, v4, a3, 1u);
}


//----- (000000014023C91C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_703(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 1u);
}


//----- (000000014023C94C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_704(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 1u);
}


//----- (000000014023C97C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_705(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, v5, a3, 1);
}


//----- (000000014023C9AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_706(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 1u);
}


//----- (000000014023C9DC) ----------------------------------------------------
unsigned __int64            sub_14023C9DC(char *a1, char *a2, signed int a3)
{
  char *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, v4, a3, 0);
}


//----- (000000014023CA08) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_707(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 0);
}


//----- (000000014023CA38) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_708(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, v5, a3, 0);
}


//----- (000000014023CA68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_709(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 0);
}


//----- (000000014023CA98) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_710(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 0);
}


//----- (000000014023CAC8) ----------------------------------------------------
unsigned __int64            sub_14023CAC8(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, v4, a3, 1u);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 1u);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 1u);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, v5, a3, 1);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 1u);
}


//----- (000000014023CBB4) ----------------------------------------------------
unsigned __int64            sub_14023CBB4(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, v4, a3, 0);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 0);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, v5, a3, 0);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 0);
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
  unsigned __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, v5, a3, 0);
}


//----- (000000014023CCA0) ----------------------------------------------------
unsigned __int64            sub_14023CCA0(char *a1, char *a2, signed int a3)
{
  char *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, v4, a3, 1u);
}


//----- (000000014023CCCC) ----------------------------------------------------
__int64            sub_14023CCCC(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(nullptr, v4, a3, 1);
}


//----- (000000014023CCF8) ----------------------------------------------------
unsigned __int64            sub_14023CCF8(char *a1, char *a2, signed int a3)
{
  char *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, v4, a3, 1u);
}


//----- (000000014023CD24) ----------------------------------------------------
__int64            sub_14023CD24(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(nullptr, v4, a3, 0);
}


//----- (000000014023CD50) ----------------------------------------------------
unsigned __int64            sub_14023CD50(char *a1, char *a2, signed int a3)
{
  char *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, v4, a3, 0);
}


//----- (000000014023CD7C) ----------------------------------------------------
unsigned __int64            sub_14023CD7C(char *a1, char *a2, signed int a3)
{
  char *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(nullptr, v4, a3, 0);
}


//----- (000000014023CDA8) ----------------------------------------------------
unsigned __int64            sub_14023CDA8(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, v4, a3, 1u);
}


//----- (000000014023CDD4) ----------------------------------------------------
__int64            sub_14023CDD4(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(nullptr, v4, a3, 1);
}


//----- (000000014023CE00) ----------------------------------------------------
unsigned __int64            sub_14023CE00(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, v4, a3, 1u);
}


//----- (000000014023CE2C) ----------------------------------------------------
__int64            sub_14023CE2C(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(nullptr, v4, a3, 0);
}


//----- (000000014023CE58) ----------------------------------------------------
unsigned __int64            sub_14023CE58(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, v4, a3, 0);
}


//----- (000000014023CE84) ----------------------------------------------------
unsigned __int64            sub_14023CE84(unsigned __int16 *a1, unsigned __int16 *a2, signed int a3)
{
  unsigned __int16 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(nullptr, v4, a3, 0);
}


//----- (000000014023CEB8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            __attribute__((noreturn)) unknown_libname_719(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  if ( !a1 )
  {
    v2 = ((__int64 (*)(void))GetLastError)();
    ((void (           __attribute__((noreturn)) *)(_QWORD))ExitThread)(v2);
  }
  *(_QWORD *)(sub_140255A70() + 960) = a1;
  if ( (unsigned int)sub_14025A2E0() == 2 )
    *(_BYTE *)(a1 + 32) = (unsigned int)sub_14024F744(1u) == 0;
  v3 = (*(__int64 (           **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  sub_14023D33C(v3);
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1A8: invalid function type 'void (__stdcall __noreturn *ExitThread)(DWORD dwExitCode)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014023CF20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            __attribute__((noreturn)) StartAddress(__int64 a1)
{
  unsigned int v2; // eax

  if ( !a1 )
  {
    v2 = ((__int64 (*)(void))GetLastError)();
    ((void (           __attribute__((noreturn)) *)(_QWORD))ExitThread)(v2);
  }
  *(_QWORD *)(sub_140255A70() + 960) = a1;
  if ( (unsigned int)sub_14025A2E0() == 2 )
    *(_BYTE *)(a1 + 32) = (unsigned int)sub_14024F744(1u) == 0;
  (*(void (           **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  sub_14023D33C(0);
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1A8: invalid function type 'void (__stdcall __noreturn *ExitThread)(DWORD dwExitCode)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

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
  _QWORD *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1[2] )
      ((void (*)(void))CloseHandle)();
    if ( v1[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(v1);
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
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  v2 = sub_140255BEC();
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 960);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 32) )
        sub_14024F784();
      if ( (unsigned __int64)(*(_QWORD *)(v3 + 16) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        ((void (*)(void))CloseHandle)();
      v4 = *(_QWORD *)(v3 + 24);
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        ((void (           __attribute__((noreturn)) *)(__int64, _QWORD))FreeLibraryAndExitThread)(v4, a1);
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
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  v4 = (_QWORD *)calloc_base(1, 40);
  free_base(nullptr);
  result = nullptr;
  if ( v4 )
  {
    *v4 = a1;
    v4[1] = a2;
    ((void (           *)(__int64, __int64, _QWORD *))GetModuleHandleExW)(4, a1, v4 + 3);
    return v4;
  }
  return result;
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored
// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

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
  _QWORD *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1[2] )
      ((void (*)(void))CloseHandle)();
    if ( v1[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(v1);
  }
  *a1 = nullptr;
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (000000014023D18C) ----------------------------------------------------
__int64            sub_14023D18C(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return -1;
  }
  v5 = sub_14023D0A8(a1, a3);
  if ( v5 )
  {
    LODWORD(ThreadId) = 0;
    v6 = ((__int64 (           *)(_QWORD, __int64, void (           __attribute__((noreturn)) *)(__int64), _QWORD *, int, __int64 *))CreateThread)(
           0,
           v3,
           StartAddress,
           v5,
           4,
           &ThreadId);
    v7 = v6;
    if ( v6 )
    {
      v5[2] = v6;
      if ( (unsigned int)((__int64 (           *)(__int64))ResumeThread)(v6) != -1 )
      {
        v5 = nullptr;
        goto LABEL_7;
      }
    }
    v8 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v8);
  }
  v7 = -1;
LABEL_7:
  if ( v5 )
  {
    if ( v5[2] )
      ((void (*)(void))CloseHandle)();
    if ( v5[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(v5);
  }
  return v7;
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
  __int64 v6; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int128 ThreadId; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  if ( !a3 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v9 = sub_14023D0A8(a3, a4);
  if ( v9 )
  {
    v10 = ((__int64 (           *)(__int64, __int64, void (           __attribute__((noreturn)) *)(__int64), _QWORD *, _DWORD, __int128 *))CreateThread)(
            a1,
            v6,
            unknown_libname_719,
            v9,
            a5,
            &ThreadId);
    if ( v10 )
    {
      if ( a6 )
        *a6 = ThreadId;
      v9 = nullptr;
      goto LABEL_7;
    }
    v11 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v11);
  }
  v10 = 0;
LABEL_7:
  if ( v9 )
  {
    if ( v9[2] )
      ((void (*)(void))CloseHandle)();
    if ( v9[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(v9);
  }
  return v10;
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
  int v8; // eax

  v8 = set_error_mode(3);
  if ( v8 == 1 || !v8 && (unsigned int)sub_14024774C() == 1 )
    sub_14023DF6C((__int64)a1, (__int64)a2, a3);
  return sub_14023D430(a1, a2, a3, a4);
}


//----- (000000014023D3BC) ----------------------------------------------------
__int64            common_assert__wchar_t(char *a1, char *a2, unsigned int a3, __int64 a4)
{
  int v8; // eax

  v8 = set_error_mode(3);
  if ( v8 == 1 || !v8 && (unsigned int)sub_14024774C() == 1 )
    sub_14023E008((__int64)a1, (__int64)a2, a3);
  return sub_14023D4F4(a1, a2, a3, a4);
}


//----- (000000014023D430) ----------------------------------------------------
__int64            sub_14023D430(char *a1, char *a2, int a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-298h] BYREF
  _WORD v12[288]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v13; // [rsp+270h] [rbp-28h]

  sub_1401FCD30((void *)(uintptr_t)(v12), 0, 0x240u);
  sub_14023D5B8(v12, 0x240u, a1, a2, a3, a4);
  v8 = unknown_libname_891((__int64)v12, (__int64)"Microsoft Visual C++ Runtime Library", 0x12012u) - 3;
  if ( !v8 )
  {
    sub_14025BC64(0x16u);
    COleServerDoc__NotifyClosed((COleServerDoc *)3);
    __debugbreak();
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
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
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-4D8h] BYREF
  _WORD v12[576]; // [rsp+30h] [rbp-4A8h] BYREF
  __int64 v13; // [rsp+4B0h] [rbp-28h]

  sub_1401FCD30((void *)(uintptr_t)(v12), 0, 0x480u);
  sub_14023DA68((char *)v12, 0x240u, a1, a2, a3, a4);
  v8 = unknown_libname_892((__int64)v12, (__int64)L"Microsoft Visual C++ Runtime Library", 0x12012u) - 3;
  if ( !v8 )
  {
    sub_14025BC64(0x16u);
    COleServerDoc__NotifyClosed((COleServerDoc *)3);
    __debugbreak();
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      abort();
  }
  else
  {
    __debugbreak();
  }
  return 0; /* no result: rax is residue of the dispatch at 0x14023D56D */
}

// 140285AE0: using guessed type __int16[37];

//----- (000000014023D5B8) ----------------------------------------------------
__int64            sub_14023D5B8(
        _BYTE *a1,
        unsigned __int64 a2,
        char *a3,
        char *a4,
        unsigned int Value,
        __int64 lpModuleName)
{
  int v10; // eax
  __int64 v11; // r14
  char *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  char v17; // al
  unsigned __int64 v18; // r12
  char *v19; // rcx
  bool v20; // cf
  char *v21; // r8
  unsigned __int64 v22; // rdx
  _BYTE *v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
       char *v29; // r8
  unsigned __int64 v30; // rdx
  _BYTE *v31; // rcx
  char *v32; // r8
  _BYTE v34[32]; // [rsp+0h] [rbp-100h] BYREF
  __int128 Reserved; // [rsp+20h] [rbp-E0h]
  __int128 phModule; // [rsp+30h] [rbp-D0h] BYREF
  char Destination[261]; // [rsp+40h] [rbp-C0h] BYREF
  char v38; // [rsp+145h] [rbp+45h] BYREF
  __int64 v39; // [rsp+150h] [rbp+50h]

  if ( (unsigned int)strcpy_s_sr(a1, a2, "Assertion failed!") )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, word_140276948) )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, "Program: ") )
    goto LABEL_67;
  sub_1401FCD30((void *)(uintptr_t)(Destination), 0, 0x105u);
  *(_QWORD *)&phModule = 0;
  v10 = ((__int64 (           *)(__int64, __int64, __int128 *))GetModuleHandleExW)(6, lpModuleName, &phModule);
  *(_QWORD *)&phModule = phModule & -(__int64)(v10 != 0);
  if ( !(unsigned int)sub_14025B344(phModule, (__int64)Destination, 0x105u) )
  {
    if ( (unsigned int)strcpy_s_sr(Destination, 261, "<program name unknown>") )
      goto LABEL_67;
  }
  v11 = -1;
  v12 = Destination;
  v13 = -1;
  do
    ++v13;
  while ( Destination[v13] );
  if ( (unsigned __int64)(v13 + 11) > 0x40 )
  {
    v12 = &v34[v13 + 11];
    v14 = (intptr_t)((uintptr_t)(&v38) - (uintptr_t)(&v34[v13 + 11]));
    if ( !&v34[v13 + 11] )
    {
      *errno_sr() = 22;
      goto LABEL_66;
    }
    if ( v14 < 3 )
    {
      sub_1401FCD30((void *)(uintptr_t)(v12), 0, v14);
      *errno_sr() = 34;
LABEL_66:
      sub_14024CF6C();
      *(_QWORD *)&Reserved = 0;
      sub_14024CFBC();
      __debugbreak();
    }
    qmemcpy(v12, "...", 3);
  }
  if ( (unsigned int)strcat_s_sr(a1, a2, v12)
    || (unsigned int)strcat_s_sr(a1, a2, word_140276980)
    || (unsigned int)strcat_s_sr(a1, a2, "File: ") )
  {
    goto LABEL_67;
  }
  v15 = -1;
  do
    ++v15;
  while ( a4[v15] );
  if ( (unsigned __int64)(v15 + 8) <= 0x40 )
  {
    v32 = a4;
LABEL_64:
    v24 = strcat_s_sr(a1, a2, v32);
    goto LABEL_35;
  }
  v16 = -1;
  do
    ++v16;
  while ( a4[v16] );
  v17 = a4[v16 - 1];
  v18 = 1;
  if ( v17 != 92 )
  {
    v19 = &a4[v16 - 1];
    do
    {
      if ( v17 == 47 )
        break;
      if ( v18 >= v16 )
        break;
      --v19;
      ++v18;
      v17 = *v19;
    }
    while ( *v19 != 92 );
  }
  v20 = v16 - v18 < 0x26;
  if ( v16 - v18 > 0x26 )
  {
    if ( v18 < 0x12 )
    {
      v21 = a4;
      v22 = a2;
      v23 = a1;
      goto LABEL_32;
    }
    v20 = v16 - v18 < 0x26;
  }
  v21 = a4;
  v22 = a2;
  v23 = a1;
  if ( !v20 )
  {
    if ( (unsigned int)strncat_s_sr(a1, a2, a4, 35)
      || (unsigned int)strcat_s_sr(a1, a2, "...")
      || (unsigned int)strncat_s_sr(a1, a2, &a4[v16 - v18], 8)
      || (unsigned int)strcat_s_sr(a1, a2, "...") )
    {
      goto LABEL_67;
    }
    v32 = &a4[v16 - 7];
    goto LABEL_64;
  }
  v18 >>= 1;
LABEL_32:
  if ( (unsigned int)strncat_s_sr(v23, v22, v21, 53 - v18) || (unsigned int)strcat_s_sr(a1, a2, "...") )
    goto LABEL_67;
  v24 = strcat_s_sr(a1, a2, &a4[v16 - v18]);
LABEL_35:
  if ( v24 )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, word_140276980) )
    goto LABEL_67;
  if ( (unsigned int)strcat_s_sr(a1, a2, "Line: ") )
    goto LABEL_67;
  v25 = -1;
  do
    ++v25;
  while ( a1[v25] );
  v26 = -1;
  do
    ++v26;
  while ( a1[v26] );
  if ( (unsigned int)itoa_s(Value, &a1[v26], a2 - v25, 10)
    || (unsigned int)strcat_s_sr(a1, a2, word_140276948)
    || (unsigned int)strcat_s_sr(a1, a2, "Expression: ") )
  {
    goto LABEL_67;
  }
  v27 = -1;
  do
    ++v27;
  while ( a1[v27] );
  v28 = v27 + 176;
  do
    ++v11;
  while ( a3[v11] );
  v29 = a3;
  v30 = a2;
  v31 = a1;
  if ( v28 + v11 > a2 )
  {
    if ( (unsigned int)strncat_s_sr(a1, a2, a3, a2 - v28 - 3) )
      goto LABEL_67;
    v29 = "...";
    v30 = a2;
    v31 = a1;
  }
  if ( (unsigned int)strcat_s_sr(v31, v30, v29)
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
    sub_14024CFBC();
    __debugbreak();
  }
  return 0; /* no caller reads the result */
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored
// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);
// 14025A9FC: using guessed type __int64 __fastcall itoa_s(_QWORD, _QWORD, _QWORD, _QWORD);
// 14025AFAC: using guessed type __int64 __fastcall strcat_s(_QWORD, _QWORD, _QWORD);
// 14025B100: using guessed type __int64 __fastcall strncat_s(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (000000014023DA68) ----------------------------------------------------
__int64            sub_14023DA68(
        char *a1,
        unsigned __int64 a2,
        char *a3,
        char *a4,
        unsigned int Value,
        __int64 lpModuleName)
{
  int v10; // eax
  __int64 v11; // rbp
  _WORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int16 v18; // ax
  unsigned __int64 v19; // r14
  char *v20; // rcx
  unsigned __int64 v21; // r12
  bool v22; // cf
  char *v23; // r8
  unsigned __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
       __int16 *v30; // r8
  __int64 v31; // rdx
  char *v32; // rcx
  __int64 v34; // [rsp+0h] [rbp-2A8h] BYREF
  __int128 Reserved; // [rsp+20h] [rbp-288h]
  __int128 phModule; // [rsp+30h] [rbp-278h] BYREF
  _WORD Filename[264]; // [rsp+40h] [rbp-268h] BYREF
  __int64 v38; // [rsp+250h] [rbp-58h]

  if ( (unsigned int)sub_140259444(a1, a2, (__int64)L"Assertion failed!") )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"\n\n") )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"Program: ") )
    goto LABEL_66;
  sub_1401FCD30((void *)(uintptr_t)(Filename), 0, 0x20Au);
  *(_QWORD *)&phModule = 0;
  v10 = ((__int64 (           *)(__int64, __int64, __int128 *))GetModuleHandleExW)(6, lpModuleName, &phModule);
  *(_QWORD *)&phModule = phModule & -(__int64)(v10 != 0);
  if ( !(unsigned int)((__int64 (           *)(_QWORD, _WORD *, __int64))GetModuleFileNameW)(phModule, Filename, 261) )
  {
    if ( (unsigned int)sub_140259444(Filename, 261, (__int64)L"<program name unknown>") )
      goto LABEL_66;
  }
  v11 = -1;
  v12 = Filename;
  v13 = -1;
  do
    ++v13;
  while ( Filename[v13] );
  if ( (unsigned __int64)(v13 + 11) > 0x40 )
  {
    v14 = 2 * v13 - 106;
    v15 = 522 - v14;
    v12 = (_WORD *)((char *)Filename + v14);
    if ( !(_WORD *)((char *)Filename + v14) )
    {
      *errno_sr() = 22;
      goto LABEL_68;
    }
    if ( v15 < 6 )
    {
      sub_1401FCD30((void *)(uintptr_t)(v12), 0, v15);
      *errno_sr() = 34;
LABEL_68:
      sub_14024CF6C();
      *(_QWORD *)&Reserved = 0;
      sub_14024CFBC();
      __debugbreak();
    }
    *(_DWORD *)v12 = *(_DWORD *)asc_140285E10;
    v12[2] = 46;
  }
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)v12)
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)&unk_140285E18)
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"File: ") )
  {
    goto LABEL_66;
  }
  v16 = -1;
  do
    ++v16;
  while ( *(_WORD *)&a4[2 * v16] );
  if ( (unsigned __int64)(v16 + 8) <= 0x40 )
  {
    v23 = a4;
LABEL_65:
    v25 = sub_14025ACB4(a1, a2, (__int64)v23);
    goto LABEL_36;
  }
  v17 = -1;
  do
    ++v17;
  while ( *(_WORD *)&a4[2 * v17] );
  v18 = *(_WORD *)&a4[2 * v17 - 2];
  v19 = 1;
  if ( v18 != 92 )
  {
    v20 = &a4[2 * v17 - 2];
    do
    {
      if ( v18 == 47 )
        break;
      if ( v19 >= v17 )
        break;
      v20 -= 2;
      ++v19;
      v18 = *(_WORD *)v20;
    }
    while ( *(_WORD *)v20 != 92 );
  }
  v21 = v17 - v19;
  v22 = v17 - v19 < 0x26;
  if ( v17 - v19 > 0x26 )
  {
    if ( v19 < 0x12 )
    {
      if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 53 - v19)
        || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10) )
      {
        goto LABEL_66;
      }
      v23 = &a4[2 * v21];
      goto LABEL_65;
    }
    v22 = v21 < 0x26;
  }
  if ( !v22 )
  {
    if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 35)
      || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10)
      || (unsigned int)sub_14025AE2C(a1, a2, &a4[2 * v21], 8)
      || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10) )
    {
      goto LABEL_66;
    }
    v23 = &a4[2 * v17 - 14];
    goto LABEL_65;
  }
  v24 = v19 >> 1;
  if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 53 - v24) || (unsigned int)sub_14025ACB4(a1, a2, (__int64)asc_140285E10) )
    goto LABEL_66;
  v25 = sub_14025ACB4(a1, a2, (__int64)&a4[2 * (v17 - v24)]);
LABEL_36:
  if ( v25 )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)&unk_140285E18) )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"Line: ") )
    goto LABEL_66;
  v26 = -1;
  do
    ++v26;
  while ( *(_WORD *)&a1[2 * v26] );
  v27 = -1;
  do
    ++v27;
  while ( *(_WORD *)&a1[2 * v27] );
  if ( (unsigned int)itow_s(Value, &a1[2 * v27], a2 - v26, 10)
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"\n\n")
    || (unsigned int)sub_14025ACB4(a1, a2, (__int64)L"Expression: ") )
  {
    goto LABEL_66;
  }
  v28 = -1;
  do
    ++v28;
  while ( *(_WORD *)&a1[2 * v28] );
  v29 = v28 + 176;
  do
    ++v11;
  while ( *(_WORD *)&a3[2 * v11] );
  v30 = (     __int16 *)a3;
  v31 = a2;
  v32 = a1;
  if ( v29 + v11 > a2 )
  {
    if ( (unsigned int)sub_14025AE2C(a1, a2, a3, a2 - v29 - 3) )
      goto LABEL_66;
    v30 = asc_140285E10;
    v31 = a2;
    v32 = a1;
  }
  if ( (unsigned int)sub_14025ACB4(v32, v31, (__int64)v30)
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
    sub_14024CFBC();
    __debugbreak();
  }
  return 0; /* no caller reads the result */
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored
// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored
// 14025AA4C: using guessed type __int64 __fastcall itow_s(_QWORD, _QWORD, _QWORD, _QWORD);
// 140285B48: using guessed type __int16[18];
// 140285B80: using guessed type __int16[10];
// 140285BA0: using guessed type __int16[7];
// 140285BB8: using guessed type __int16[7];
// 140285BD8: using guessed type __int16[13];
// 140285C70: using guessed type __int16[112];
// 140285D90: using guessed type __int16[61];
// 140285E10: using guessed type __int16 asc_140285E10[2];
// 140285E1C: using guessed type __int16 asc_140285E1C[3];
// 140285E40: using guessed type __int16[23];

//----- (000000014023DF6C) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14023DF6C(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
       char *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = a1;
  if ( (*((_DWORD *)sub_14020B528(2u) + 5) & 0x4C0) == 0 )
  {
    v3 = sub_14020B528(2u);
    setvbuf_sr(v3, 0, 4, 0);
  }
  v11 = sub_14023E448();
  v4 = sub_14020B528(2u);
  sub_14023E158(v7, &v11, &v8, &v9, &v10, v6, (__int64)v4, v7[1], v7[2]);
  v5 = sub_14020B528(2u);
  fflush((FILE *)v5);
  abort();
}

// 14023DFE8: variable 'v6' is possibly undefined
// 14025B8F8: using guessed type __int64 __fastcall setvbuf(_QWORD, _QWORD, _QWORD);

//----- (000000014023E008) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14023E008(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 NumberOfCharsWritten; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
       __int16 *v16; // [rsp+50h] [rbp-B0h] BYREF
  char *v17; // [rsp+58h] [rbp-A8h] BYREF
  _WORD Buffer[576]; // [rsp+60h] [rbp-A0h] BYREF

  v15 = a1;
  v14 = a2;
  LODWORD(v13) = a3;
  v6 = ((__int64 (           *)(__int64))GetStdHandle)(4294967284LL);
  v7 = v6;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (unsigned int)((__int64 (           *)(__int64))GetFileType)(v6) == 2 )
  {
    LODWORD(v11) = a3;
    if ( (int)swprintf_0_sr(Buffer, 576, L"Assertion failed: %Ts, file %Ts, line %d\n", a1, a2) >= 0 )
    {
      v8 = -1;
      do
        ++v8;
      while ( Buffer[v8] );
      LODWORD(NumberOfCharsWritten) = 0;
      if ( (unsigned int)((__int64 (           *)(__int64, _WORD *, _QWORD, __int64 *, _QWORD))WriteConsoleW)(
                           v7,
                           Buffer,
                           (unsigned int)v8,
                           &NumberOfCharsWritten,
                           0) )
        abort();
    }
  }
  if ( (*((_DWORD *)sub_14020B528(2u) + 5) & 0x4C0) == 0 )
  {
    v9 = sub_14020B528(2u);
    setvbuf_sr(v9, 0, 4, 0);
  }
  v16 = sub_14023E450();
  v17 = sub_14020B528(2u);
  sub_14023E178((__int64 *)&v17, (__int64 *)&v16, &v15, &v14, &v13, v11, NumberOfCharsWritten, v13, v14);
  v10 = sub_14020B528(2u);
  fflush((FILE *)v10);
  abort();
}

// 14026E188: invalid function type 'HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored
// 14023E13A: variable 'v11' is possibly undefined
// 14023E780: using guessed type __int64 swprintf_0(_QWORD, _QWORD, _QWORD, ...);
// 14025B8F8: using guessed type __int64 __fastcall setvbuf(_QWORD, _QWORD, _QWORD);
// 140285A60: using guessed type __int16 Format[42];

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
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-4E8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-4C0h]
  __int128 NumberOfCharsWritten; // [rsp+30h] [rbp-4B8h] BYREF
  _WORD Buffer[576]; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 v14; // [rsp+4C0h] [rbp-28h]

  v6 = ((__int64 (           *)(__int64))GetStdHandle)(4294967284LL);
  v7 = v6;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (unsigned int)((__int64 (           *)(__int64))GetFileType)(v6) == 2 )
  {
    LODWORD(v11) = a3;
    if ( (int)swprintf_0_sr(Buffer, 576, L"Assertion failed: %Ts, file %Ts, line %d\n", a1, a2, v11) >= 0 )
    {
      v8 = -1;
      do
        ++v8;
      while ( Buffer[v8] );
      LODWORD(NumberOfCharsWritten) = 0;
      if ( (unsigned int)((__int64 (           *)(__int64, _WORD *, _QWORD, __int128 *, _QWORD))WriteConsoleW)(
                           v7,
                           Buffer,
                           (unsigned int)v8,
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
// 14023E780: using guessed type __int64 swprintf_0(_QWORD, _QWORD, _QWORD, ...);
// 140285A60: using guessed type __int16 Format[42];

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

// 140285A60: using guessed type __int16 Format[42];

//----- (000000014023E518) ----------------------------------------------------
__int64            sub_14023E518(char *a1, char *a2, int a3)
{
  int v6; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v6 = set_error_mode(3);
  if ( v6 == 1 || !v6 && (unsigned int)sub_14024774C() == 1 )
    sub_14023DF6C((__int64)a1, (__int64)a2, a3);
  return sub_14023D430(a1, a2, a3, retaddr);
}


//----- (000000014023E58C) ----------------------------------------------------
__int64            vsprintf_s_l_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // rax

  v8 = (__int64 *)sub_140001BB0();
  return sub_140224C90(*v8, a1, a2, a3, a4);
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
  __int64 *v9; // rax
  __int64 result; // rax

  v9 = (__int64 *)sub_140001BB0();
  result = sub_140225120(*v9, a1, a2, a3, a4, ArgList);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

// 14023E5DC: invalid function type 'int __cdecl vswprintf_c_l_0(#49 *const Buffer, const #66 BufferCount, const #49 *const Format, const _locale_t Locale, #67 ArgList)' has been ignored

//----- (000000014023E640) ----------------------------------------------------
__int64            sub_14023E640(char *a1, char *a2, int a3)
{
  int v6; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v6 = set_error_mode(3);
  if ( v6 == 1 || !v6 && (unsigned int)sub_14024774C() == 1 )
    sub_14023E008((__int64)a1, (__int64)a2, a3);
  return sub_14023D4F4(a1, a2, a3, retaddr);
}


//----- (000000014023E6B4) ----------------------------------------------------
__int64 sub_14023E6B4(__int64 a1, __int64 a2, ...)
{
  __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = (__int64 *)sub_140001BB0();
  return sub_140224C90(*v4, a1, a2, 0, (__int64)va);
}


//----- (000000014023E6F8) ----------------------------------------------------
__int64            sub_14023E6F8(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    sub_1401FC920(a1, a3, a4);
    return 0;
  }
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = errno_sr();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    sub_14024CF6C();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = errno_sr();
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}


//----- (000000014023E780) ----------------------------------------------------
__int64 swprintf_0_sr(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 *v6; // rax
  __int64 result; // rax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = (__int64 *)sub_140001BB0();
  result = sub_140225120(*v6, a1, a2, a3, nullptr, (__int64)va);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

// 14023E780: using guessed type __int64 swprintf_0(_QWORD, _QWORD, _QWORD, ...);

//----- (000000014023E7D4) ----------------------------------------------------
double         acos(double X)
{
  __int64 v1; // rdx
  double v2; // xmm6_8
  double v3; // xmm5_8
  double v4; // xmm6_8
  double v5; // xmm1_8
  double v6; // xmm4_8
  double v7; // [rsp+70h] [rbp+8h]
  double v8; // [rsp+78h] [rbp+10h]

  v7 = 0.0;
  v1 = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
    return handle_nan_sr(*(__int64 *)&X);
  if ( (unsigned int)v1 < 0x3C7 )
  {
    v2 = 1.570796326794897;
LABEL_10:
    set_statfp(32);
    return v2;
  }
  if ( (unsigned int)v1 < 0x3FF )
  {
    v3 = X;
    if ( X < 0.0 )
      v3 = -X;
    if ( (unsigned int)v1 < 0x3FE )
    {
      v5 = 0.0;
      v4 = v3 * v3;
      v8 = v3 * v3;
    }
    else
    {
      v4 = (1.0 - v3) * 0.5;
      v8 = v4;
      v7 = sqrt(v4);
      v5 = v7;
      v3 = v7;
    }
    v6 = (((((v4 * 0.0000482901920344787 + 0.001092426972350747) * v4 - 0.05499898092356859) * v4 + 0.2755581752569377)
         * v4
         - 0.4450172168676356)
        * v4
        + 0.227485835556935)
       * v4
       / ((((v4 * 0.1058694220872044 - 0.9436391370324927) * v4 + 2.76568859157271) * v4 - 3.284315057209587) * v4
        + 1.36491501334161);
    if ( (unsigned int)v1 < 0x3FE )
    {
      return 1.570796326794897 - (X - (6.123233995736766e-17 - v6 * X));
    }
    else if ( X >= 0.0 )
    {
      return (v3 + v3) * v6
           + (v8
            - COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL)
            * COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL))
           / (COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL) + v7)
           + (v8
            - COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL)
            * COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL))
           / (COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL) + v7)
           + COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL) * 2.0;
    }
    else
    {
      return 3.141592653589793 - (v6 * v3 - 6.123233995736766e-17 + v5 + v6 * v3 - 6.123233995736766e-17 + v5);
    }
  }
  else
  {
    if ( X == 1.0 )
      return 0.0;
    if ( X == -1.0 )
    {
      v2 = 3.141592653589793;
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
  char v3; // r8
  char v4; // cl
  char v6; // dl
  char v7; // cl

  v3 = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    v3 = 8 * (a2 & 1);
  v4 = v3 | 4;
  if ( (a2 & 4) == 0 )
    v4 = v3;
  v6 = v4 | 1;
  if ( (a2 & 8) == 0 )
    v6 = v4;
  v7 = v6 | 0x20;
  if ( (a2 & 0x10) == 0 )
    v7 = v6;
  set_statfp(v7);
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
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014023ED84) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
double            unknown_libname_735(double a1, char a2)
{
  /* The original keeps the double argument (xmm0) in xmm6 across set_statfp and returns it. */
  char v3; // r8
  char v4; // cl
  char v6; // dl
  char v7; // cl

  v3 = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    v3 = 8 * (a2 & 1);
  v4 = v3 | 4;
  if ( (a2 & 4) == 0 )
    v4 = v3;
  v6 = v4 | 1;
  if ( (a2 & 8) == 0 )
    v6 = v4;
  v7 = v6 | 0x20;
  if ( (a2 & 0x10) == 0 )
    v7 = v6;
  set_statfp(v7);
  return a1;
}


//----- (000000014023EDE4) ----------------------------------------------------
double            sub_14023EDE4(double result, double a2)
{
  double v2; // xmm8_8
  __int64 v3; // rdi
  double v4; // xmm9_8
  __int64 v5; // r15
  __int64 v6; // rdx
  int v7; // esi
  unsigned __int64 v8; // r13
  double v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // xmm0_8
  double v12; // xmm0_8
  unsigned __int64 v13; // rcx
  __int64 v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // rsi
  double v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  double v20; // rbx
  int v21; // r8d
  double v22; // xmm0_8
  double v23; // xmm5_8
  __int64 v24; // rcx
  double v25; // xmm7_8
  double v26; // xmm10_8
  double v27; // xmm6_8
  int v28; // kr00_4
  double v29; // xmm3_8
  double v30; // xmm4_8
  double v31; // xmm10_8

  v2 = result;
  v3 = *(_QWORD *)&result;
  v4 = a2;
  v5 = (*(_QWORD *)&a2 >> 52) & 0x7FFLL;
  v6 = *(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFLL;
  v7 = ((*(_QWORD *)&result >> 52) & 0x7FF) - v5;
  v8 = *(_QWORD *)&result & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    v9 = a2;
    return handle_nan_sr(*(__int64 *)&v9);
  }
  if ( v8 > 0x7FF0000000000000LL )
  {
    v9 = result;
    return handle_nan_sr(*(__int64 *)&v9);
  }
  v10 = 0;
  if ( !v8 )
  {
    if ( a2 >= 0.0 )
      return result;
    goto LABEL_48;
  }
  if ( !v6 )
  {
    set_statfp(32);
    if ( result < 0.0 )
      return -1.570796326794897;
    v6 = *(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (unsigned int)v5 < 0x3FD && ((unsigned __int16)(*(_QWORD *)&result >> 52) & 0x7FFu) < 0x3FD )
  {
    if ( (*(_QWORD *)&a2 & 0x7FF0000000000000LL) != 0 )
    {
      v13 = *(_QWORD *)&a2 + 0x4000000000000000LL;
    }
    else
    {
      v11 = *(_QWORD *)&a2 | 0x4010000000000000LL;
      if ( a2 >= 0.0 )
        v12 = *(double *)&v11 + -4.0;
      else
        v12 = *(double *)&v11 + 4.0;
      *(double *)&v13 = v12;
    }
    if ( (v3 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v16 = v3 + 0x4000000000000000LL;
    }
    else
    {
      v14 = v3 | 0x4010000000000000LL;
      if ( v3 >= 0 )
        v15 = *(double *)&v14 + -4.0;
      else
        v15 = *(double *)&v14 + 4.0;
      v16 = v15;
    }
    v4 = *(double *)&v13;
    v2 = v16;
    v7 = ((*(_QWORD *)&v16 >> 52) & 0x7FF) - ((v13 >> 52) & 0x7FF);
  }
  if ( v7 > 56 )
  {
    set_statfp(32);
    if ( v3 >= 0 )
      return 1.570796326794897;
    return -1.570796326794897;
  }
  if ( v7 >= -28 || a2 < 0.0 )
  {
    if ( v7 < -56 && a2 < 0.0 )
    {
LABEL_48:
      set_statfp(32);
      if ( v3 >= 0 )
        return 3.141592653589793;
      else
        return -3.141592653589793;
    }
    if ( v8 == 0x7FF0000000000000LL && v6 == 0x7FF0000000000000LL )
    {
      set_statfp(32);
      if ( a2 >= 0.0 )
      {
        if ( v3 >= 0 )
          return 0.7853981633974483;
        else
          return -0.7853981633974483;
      }
      else if ( v3 >= 0 )
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
        v4 = -v4;
      if ( v3 < 0 )
        v2 = -v2;
      v21 = 0;
      LOBYTE(v21) = v2 > v4;
      if ( v2 > v4 )
      {
        v22 = v4;
        v4 = v2;
        v2 = v22;
      }
      v23 = v2 / v4;
      if ( v2 / v4 <= 0.0625 )
      {
        v26 = 0.0;
        if ( v23 >= 0.00000001 )
          v23 = (v2
               - COERCE_DOUBLE(*(_QWORD *)&v23 & 0xFFFFFFFF00000000uLL)
               * COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL)
               - (v4 - COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL))
               * COERCE_DOUBLE(*(_QWORD *)&v23 & 0xFFFFFFFF00000000uLL)
               - (v23 - COERCE_DOUBLE(*(_QWORD *)&v23 & 0xFFFFFFFF00000000uLL)) * v4)
              / v4
              - (0.3333333333333317
               - (0.1999999999939322
                - (0.1428571356180717 - (0.1111073628351453 - v23 * v23 * 0.09002981028544979) * (v23 * v23))
                * (v23
                 * v23))
               * (v23
                * v23))
              * (v23
               * v23
               * v23)
              + v23;
      }
      else
      {
        v24 = (unsigned int)((int)(v23 * 256.0 + 0.5) - 16);
        v25 = qword_1402866C0[v24];
        v26 = qword_140285F30[v24];
        v27 = (double)(int)(v23 * 256.0 + 0.5) * 0.00390625;
        v28 = 1023 - ((*(_QWORD *)&v4 >> 52) & 0x7FF);
        LODWORD(v24) = v28 - v28 / 2;
        v29 = COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v2 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52);
        v30 = (v29
             - COERCE_DOUBLE(
                 COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52))
               & 0xFFFFFFFFF8000000uLL)
             * v27
             - (COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52)
              - COERCE_DOUBLE(
                  COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52))
                & 0xFFFFFFFFF8000000uLL))
             * v27)
            / (v27 * v29 + COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52));
        v23 = v30 + v25 - (0.333333333332241 - v30 * v30 * 0.1999991803898914) * (v30 * v30) * v30;
      }
      if ( v21 )
      {
        v26 = 1.570796326794897 - v26;
        v23 = 6.123233995736766e-17 - v23;
      }
      if ( a2 < 0.0 )
      {
        v26 = 3.141592621803284 - v26;
        v23 = 0.00000003178650954705639 - v23;
      }
      v31 = v26 + v23;
      if ( v3 < 0 )
        return -v31;
      return v31;
    }
  }
  else if ( v7 >= -1074 )
  {
    if ( v7 >= -1022 )
    {
      return v2 / v4;
    }
    else
    {
      v17 = fabs(1.267650600228229e30 * v2 / v4);
      v18 = *(_QWORD *)&v17 >> 52;
      if ( (unsigned int)(*(_QWORD *)&v17 >> 52) <= 0x64 )
      {
        v19 = *(_QWORD *)&v17 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 101 - (int)v18 <= 54 )
          v10 = ((v19 >> (101 - (unsigned __int8)v18 - 1)) & 1) + (v19 >> (101 - (unsigned __int8)v18 - 1) >> 1);
      }
      else
      {
        v10 = *(_QWORD *)&v17 & 0x800FFFFFFFFFFFFFuLL | ((v18 - 100) << 52);
      }
      *(_QWORD *)&v20 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v2 / v4) & 0x8000000000000000uLL | v10;
      if ( (*(_QWORD *)&v20 & 0x7FF0000000000000LL) == 0 )
        set_statfp(32);
      return v20;
    }
  }
  else
  {
    set_statfp(32);
    if ( v3 >= 0 )
      return 0.0;
    else
      return -0.0;
  }
}

// 140285F30: using guessed type double qword_140285F30[242];
// 1402866C0: using guessed type double qword_1402866C0[249];

//----- (000000014023F6A4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
double            unknown_libname_736(double a1, char a2)
{
  /* The original keeps the double argument (xmm0) in xmm6 across set_statfp and returns it. */
  char v3; // r8
  char v4; // cl
  char v6; // dl
  char v7; // cl

  v3 = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    v3 = 8 * (a2 & 1);
  v4 = v3 | 4;
  if ( (a2 & 4) == 0 )
    v4 = v3;
  v6 = v4 | 1;
  if ( (a2 & 8) == 0 )
    v6 = v4;
  v7 = v6 | 0x20;
  if ( (a2 & 0x10) == 0 )
    v7 = v6;
  set_statfp(v7);
  return a1;
}


//----- (000000014023F704) ----------------------------------------------------
float            sub_14023F704(float result, float a2)
{
  double v2; // xmm7_8
  double v3; // xmm6_8
  double v4; // r14
  double v5; // rdi
  int v6; // esi
  double v7; // r12
  double v8; // r15
  unsigned __int64 v10; // rbx
  double v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  float v15; // xmm6_4
  int v16; // edx
  double v17; // xmm0_8
  double v18; // xmm4_8
  int v19; // eax
  double v20; // xmm3_8
  double v21; // xmm0_8
  float v22; // [rsp+80h] [rbp+8h]

  v2 = a2;
  v3 = result;
  v4 = a2;
  v5 = result;
  v6 = ((COERCE_UNSIGNED_INT64((double)result) >> 52) & 0x7FF) - ((COERCE_UNSIGNED_INT64((double)a2) >> 52) & 0x7FF);
  v7 = fabs(a2);
  v8 = fabs(result);
  if ( *(_QWORD *)&v7 > 0x7FF0000000000000uLL )
  {
    v22 = a2;
    return handle_nanf_sr(SLODWORD(v22));
  }
  if ( *(_QWORD *)&v8 > 0x7FF0000000000000uLL )
  {
    v22 = result;
    return handle_nanf_sr(SLODWORD(v22));
  }
  v10 = 0;
  if ( v8 == 0.0 )
  {
    if ( v4 < 0.0 )
    {
LABEL_33:
      set_statfp(32);
      if ( v5 >= 0.0 )
        return 3.1415927;
      else
        return -3.1415927;
    }
    return v3;
  }
  if ( v7 == 0.0 )
  {
    set_statfp(32);
    if ( v5 < 0.0 )
      return -1.5707964;
  }
  if ( v6 > 26 )
  {
    set_statfp(32);
    if ( v5 >= 0.0 )
      return 1.5707964;
    return -1.5707964;
  }
  if ( v6 >= -13 || v4 < 0.0 )
  {
    if ( v6 < -26 && v4 < 0.0 )
      goto LABEL_33;
    if ( v8 == INFINITY && v7 == INFINITY )
    {
      set_statfp(32);
      if ( v4 >= 0.0 )
      {
        if ( v5 >= 0.0 )
          return 0.78539819;
        else
          return -0.78539819;
      }
      else if ( v5 >= 0.0 )
      {
        return 2.3561945;
      }
      else
      {
        return -2.3561945;
      }
    }
    if ( v4 < 0.0 )
      v2 = -v2;
    if ( v5 < 0.0 )
      v3 = -v3;
    v16 = 0;
    LOBYTE(v16) = v3 > v2;
    if ( v3 > v2 )
    {
      v17 = v2;
      v2 = v3;
      v3 = v17;
    }
    v18 = v3 / v2;
    if ( v3 / v2 <= 0.0625 )
    {
      if ( v18 < 0.0001 )
      {
LABEL_56:
        if ( v16 )
          v18 = 1.570796326794897 - v18;
        if ( v4 < 0.0 )
          v18 = 3.141592653589793 - v18;
        if ( v5 < 0.0 )
          return -v18;
        return v18;
      }
      v21 = (0.3333333333333317 - (0.1999999999939322 - v18 * v18 * 0.1428571356180717) * (v18 * v18))
          * (v18
           * v18
           * v18);
    }
    else
    {
      v19 = (int)(v18 * 256.0 + 0.5);
      v20 = (v3 * 256.0 - (double)v19 * v2) / ((double)v19 * v3 + v2 * 256.0);
      v18 = v20 + dbl_140286F10[v19 - 16];
      v21 = v20 * v20 * v20 * 0.333333333332241;
    }
    v18 = v18 - v21;
    goto LABEL_56;
  }
  if ( v6 >= -150 )
  {
    if ( v6 >= -126 )
      return v3 / v2;
    v11 = fabs(1.267650600228229e30 * v3 / v2);
    v12 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v3 / v2) & 0x8000000000000000uLL;
    v13 = *(_QWORD *)&v11 >> 52;
    if ( (unsigned int)(*(_QWORD *)&v11 >> 52) <= 0x64 )
    {
      v14 = *(_QWORD *)&v11 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
      if ( 101 - (int)v13 <= 54 )
        v10 = ((v14 >> (101 - (unsigned __int8)v13 - 1)) & 1) + (v14 >> (101 - (unsigned __int8)v13 - 1) >> 1);
    }
    else
    {
      v10 = *(_QWORD *)&v11 & 0x800FFFFFFFFFFFFFuLL | ((v13 - 100) << 52);
    }
    v15 = COERCE_DOUBLE(v12 | v10);
    if ( ((v12 | v10) & 0x7FF0000000000000LL) == 0 )
      set_statfp(48);
    return v15;
  }
  else
  {
    set_statfp(48);
    if ( v5 >= 0.0 )
      return 0.0;
    else
      return -0.0;
  }
}

// 140286F10: using guessed type double dbl_140286F10[245];

//----- (000000014023FC08) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
double            unknown_libname_737(double a1, char a2)
{
  /* The original keeps the double argument (xmm0) in xmm6 across set_statfp and returns it. */
  char v3; // r8
  char v4; // cl
  char v6; // dl
  char v7; // cl

  v3 = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    v3 = 8 * (a2 & 1);
  v4 = v3 | 4;
  if ( (a2 & 4) == 0 )
    v4 = v3;
  v6 = v4 | 1;
  if ( (a2 & 8) == 0 )
    v6 = v4;
  v7 = v6 | 0x20;
  if ( (a2 & 0x10) == 0 )
    v7 = v6;
  set_statfp(v7);
  return a1;
}
