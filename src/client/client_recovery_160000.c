#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140160180) ----------------------------------------------------
__int64            sub_140160180(void **a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 *v5; // rbx
  int v8; // esi
  __int64 v9; // rax
  void *v10; // r14
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v5 = (unsigned __int8 *)a1[3];
  v8 = *(_DWORD *)*a1 * *((_DWORD *)*a1 + 1);
  if ( v8 < 0
    || a4 < 0
    || a4 && v8 > (int)(0x7FFFFFFFu / a4)
    || (v9 = sr_path_malloc(a4 * v8), (v10 = (void *)v9) == nullptr) )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  else
  {
    if ( v8 )
    {
      v11 = (unsigned int)v8;
      v12 = v9 + 2;
      if ( a4 == 3 )
      {
        do
        {
          v13 = *v5;
          v12 += 3;
          ++v5;
          *(_BYTE *)(v12 - 5) = *(_BYTE *)(a2 + 4 * v13);
          *(_BYTE *)(v12 - 4) = *(_BYTE *)(a2 + 4 * v13 + 1);
          *(_BYTE *)(v12 - 3) = *(_BYTE *)(a2 + 4 * v13 + 2);
          --v11;
        }
        while ( v11 );
      }
      else
      {
        do
        {
          v14 = *v5;
          v12 += 4;
          ++v5;
          *(_BYTE *)(v12 - 6) = *(_BYTE *)(a2 + 4 * v14);
          *(_BYTE *)(v12 - 5) = *(_BYTE *)(a2 + 4 * v14 + 1);
          *(_BYTE *)(v12 - 4) = *(_BYTE *)(a2 + 4 * v14 + 2);
          *(_BYTE *)(v12 - 3) = *(_BYTE *)(a2 + 4 * v14 + 3);
          --v11;
        }
        while ( v11 );
      }
    }
    free(a1[3]);
    a1[3] = v10;
    return 1;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401602C0) ----------------------------------------------------
__int64            sub_1401602C0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  int v5; // r9d
  int v6; // r8d
  int v7; // edx

  v2 = a2;
  if ( *(_DWORD *)(a1 + 18468) < a2 )
    sub_140161D20((_QWORD *)a1);
  v4 = *(_DWORD *)(a1 + 18464);
  v5 = __ROL4__(v4, v2);
  if ( (unsigned int)v2 > 0x10 )
    return 0;
  *(_DWORD *)(a1 + 18468) -= v2;
  v6 = dword_14026FC40[v2] & ~(v4 >> 31);
  v7 = v5 & dword_14026FBF0[v2];
  *(_DWORD *)(a1 + 18464) = v5 & ~dword_14026FBF0[v2];
  return (unsigned int)(v7 + v6);
}

// 14026FBF0: using guessed type int dword_14026FBF0[20];
// 14026FC40: using guessed type int dword_14026FC40[16];

//----- (0000000140160350) ----------------------------------------------------
__int64            sub_140160350(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 result; // rax
  int v3; // r8d
  unsigned __int64 v4; // r10
  unsigned __int8 *v5; // rcx
  unsigned __int8 v6; // dl
  int v7; // edx

  v1 = *(_DWORD *)(a1 + 20);
  result = a1;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v1 >= 1 << v3 )
  {
LABEL_8:
    *(_QWORD *)result = *(_QWORD *)(result + 8);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v5 = *(unsigned __int8 **)result;
      if ( *(_QWORD *)result < v4 )
      {
        v6 = *v5;
        *(_QWORD *)result = (uint64)(uintptr_t)(v5 + 1);
      }
      else
      {
        v6 = 0;
      }
      v7 = v6 << v3;
      v3 += 8;
      v1 |= v7;
      *(_DWORD *)(result + 16) = v3;
      *(_DWORD *)(result + 20) = v1;
      if ( v3 > 24 )
        break;
      if ( v1 >= 1 << v3 )
        goto LABEL_8;
    }
  }
  return result;
}


//----- (00000001401603C0) ----------------------------------------------------
void sub_1401603C0(__m128i *a1, unsigned int *a2, unsigned int *a3, int *a4, int a5)
{
  __int64 v6; // r11
  __int64 result; // rax
  int v8; // r9d

  v6 = sr_client_static_tls();
  if ( *(_DWORD *)(v6 + 8) )
    result = *(unsigned int *)(v6 + 12);
  else
    result = dword_140404A6C[18215120];
  if ( (_DWORD)result && a1 )
  {
    v8 = a5;
    if ( !a5 )
      v8 = *a4;
    sub_14016F470(a1, *a2, *a3, 4 * v8);
    return;
  }
  return;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140160430) ----------------------------------------------------
__int64            sub_140160430(char *a1, char *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_14020B8E4(&v5, a1, a2);
  v3 = v5;
  if ( v2 )
    return 0;
  return v3;
}


//----- (0000000140160460) ----------------------------------------------------
__int64            sub_140160460(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx

  if ( a2 > 0 )
  {
    v4 = a1 + 18136;
    v5 = (unsigned int)a2;
    do
    {
      if ( *(_QWORD *)v4 )
      {
        free(*(void **)v4);
        *(_QWORD *)v4 = 0;
        *(_QWORD *)(v4 - 8) = 0;
      }
      v6 = *(void **)(v4 + 8);
      if ( v6 )
      {
        free(v6);
        *(_QWORD *)(v4 + 8) = 0;
        *(_QWORD *)(v4 + 24) = 0;
      }
      v7 = *(void **)(v4 + 16);
      if ( v7 )
      {
        free(v7);
        *(_QWORD *)(v4 + 16) = 0;
      }
      v4 += 96;
      --v5;
    }
    while ( v5 );
  }
  return a3;
}


//----- (00000001401604F0) ----------------------------------------------------
__int64            sub_1401604F0(__int64 a1)
{
  unsigned __int8 *v1; // rax
  unsigned __int64 v3; // rcx
  unsigned __int8 v4; // dl
  unsigned __int8 *v5; // rax
  int v6; // edi
  unsigned __int8 v7; // cl
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl

  v1 = *(unsigned __int8 **)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v1 >= v3 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v6 = 0;
      goto LABEL_7;
    }
    sub_14016D910(a1);
    v1 = *(unsigned __int8 **)(a1 + 192);
    v3 = *(_QWORD *)(a1 + 200);
  }
  v4 = *v1;
  v5 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  v6 = v4;
  if ( (unsigned __int64)v5 < v3 )
  {
    v7 = *v5;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    return (v4 << 8) + (unsigned int)v7;
  }
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
    return (unsigned int)(v6 << 8);
  sub_14016D910(a1);
  v9 = *(unsigned __int8 **)(a1 + 192);
  v10 = *v9;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
  return (v6 << 8) + (unsigned int)v10;
}


//----- (00000001401605B0) ----------------------------------------------------
__int64            sub_1401605B0(__int64 a1)
{
  unsigned __int8 *v1; // rax
  unsigned __int64 v3; // rcx
  unsigned __int8 v4; // dl
  unsigned __int8 *v5; // rax
  unsigned int v6; // edi
  unsigned __int8 v7; // cl
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl

  v1 = *(unsigned __int8 **)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v1 >= v3 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v6 = 0;
      goto LABEL_7;
    }
    sub_14016D910(a1);
    v1 = *(unsigned __int8 **)(a1 + 192);
    v3 = *(_QWORD *)(a1 + 200);
  }
  v4 = *v1;
  v5 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  v6 = v4;
  if ( (unsigned __int64)v5 < v3 )
  {
    v7 = *v5;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    return v4 + (v7 << 8);
  }
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
    return v6;
  sub_14016D910(a1);
  v9 = *(unsigned __int8 **)(a1 + 192);
  v10 = *v9;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
  return v6 + (v10 << 8);
}


//----- (0000000140160670) ----------------------------------------------------
__int64            sub_140160670(__int64 a1)
{
  int v2; // edi

  v2 = sub_1401604F0(a1);
  return (v2 << 16) + (unsigned int)sub_1401604F0(a1);
}


//----- (00000001401606A0) ----------------------------------------------------
__int64            sub_1401606A0(__int64 a1)
{
  int v2; // edi

  v2 = sub_1401605B0(a1);
  return v2 + ((unsigned int)sub_1401605B0(a1) << 16);
}


//----- (00000001401606D0) ----------------------------------------------------
char            sub_1401606D0(__int64 a1)
{
  char *v1; // rdx
  char result; // al
  char *v4; // rcx

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v4 = *(char **)(a1 + 192);
      result = *v4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = *v1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v1 + 1);
  }
  return result;
}


//----- (0000000140160730) ----------------------------------------------------
unsigned __int64            sub_140160730(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // edi
  int v4; // ebx

  v2 = sub_1401604F0(a1);
  v3 = sub_1401604F0(a1) + (v2 << 16);
  v4 = sub_1401604F0(a1);
  return v3 | ((unsigned __int64)((v4 << 16) + (unsigned int)sub_1401604F0(a1)) << 32);
}


//----- (0000000140160790) ----------------------------------------------------
char            sub_140160790(_BYTE *a1)
{
  char result; // al
  __int64 v3; // rbx
  char *v4; // rax
  char v5; // cl
  __int64 v6; // rbx
  char *v7; // rax
  char v8; // cl

  result = a1[18472];
  if ( result != -1 )
  {
    a1[18472] = -1;
    return result;
  }
  v3 = *(_QWORD *)a1;
  v4 = *(char **)(*(_QWORD *)a1 + 192LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
  {
    if ( !*(_DWORD *)(v3 + 48) )
      return -1;
    sub_14016D910(*(_QWORD *)a1);
    v4 = *(char **)(v3 + 192);
  }
  v5 = *v4;
  *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v4 + 1);
  if ( v5 == -1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)a1;
      v7 = *(char **)(*(_QWORD *)a1 + 192LL);
      if ( (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
      {
        if ( !*(_DWORD *)(v6 + 48) )
          return 0;
        sub_14016D910(*(_QWORD *)a1);
        v7 = *(char **)(v6 + 192);
      }
      v8 = *v7;
      *(_QWORD *)(v6 + 192) = (uint64)(uintptr_t)(v7 + 1);
      if ( v8 != -1 )
        return v8;
    }
  }
  return -1;
}


//----- (0000000140160860) ----------------------------------------------------
_BOOL8            sub_140160860(__int64 a1, __m128i *a2, int a3)
{
  __int64 v4; // rbp
  int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
       __m128i *v10; // rdx

  v4 = a3;
  if ( *(_QWORD *)(a1 + 16) && (v6 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v6 < a3) )
  {
    sub_1401FC920(a2, *(     __m128i **)(a1 + 192), v6);
    v7 = v4 - v6;
    v8 = (*(__int64 (           **)(_QWORD, __int8 *, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 40), &SR_VEC_PTR_LANES(128, a2, i8)[v6], v7);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    return v8 == v7;
  }
  else
  {
    v10 = *(     __m128i **)(a1 + 192);
    if ( (unsigned __int64)SR_VEC_PTR_LANES(128, v10, u64) + a3 > *(_QWORD *)(a1 + 200) )
    {
      return 0;
    }
    else
    {
      sub_1401FC920(a2, v10, a3);
      *(_QWORD *)(a1 + 192) += v4;
      return 1;
    }
  }
}


//----- (0000000140160930) ----------------------------------------------------
__int64            sub_140160930(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char *v4; // rax
  char v9; // cl
  char *v10; // rax
  char v11; // cl
  char *v12; // rax
  char v13; // cl
  char *v14; // rax
  char v15; // cl
  char *v16; // rax
  char v17; // cl
  char *v18; // rax
  char v19; // dl
  _QWORD *v20; // rsi
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // cl
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rax
  unsigned __int8 v25; // cl
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rax
  unsigned __int8 v28; // cl
  unsigned __int8 *v29; // rax
  bool v30; // cc
  int v31; // eax

  v4 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1);
    v4 = *(char **)(a1 + 192);
  }
  v9 = *v4;
  v10 = v4 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10);
  if ( v9 != 71 )
    goto LABEL_49;
  if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1);
    v10 = *(char **)(a1 + 192);
  }
  v11 = *v10;
  v12 = v10 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12);
  if ( v11 != 73 )
    goto LABEL_49;
  if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1);
    v12 = *(char **)(a1 + 192);
  }
  v13 = *v12;
  v14 = v12 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v14);
  if ( v13 != 70 )
    goto LABEL_49;
  if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1);
    v14 = *(char **)(a1 + 192);
  }
  v15 = *v14;
  v16 = v14 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v16);
  if ( v15 != 56 )
    goto LABEL_49;
  if ( (unsigned __int64)v16 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1);
    v16 = *(char **)(a1 + 192);
  }
  v17 = *v16;
  v18 = v16 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v18);
  if ( ((v17 - 55) & 0xFD) != 0 )
    goto LABEL_49;
  if ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 200) )
    goto LABEL_24;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_49:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not GIF");
    return 0;
  }
  sub_14016D910(a1);
  v18 = *(char **)(a1 + 192);
LABEL_24:
  v19 = *v18;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v18 + 1);
  if ( v19 != 97 )
    goto LABEL_49;
  v20 = (_QWORD *)(sr_client_static_tls() + 16LL);
  *v20 = (uint64)(uintptr_t)(Parameters);
  *a2 = sub_1401605B0(a1);
  a2[1] = sub_1401605B0(a1);
  v21 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v23 = *(unsigned __int8 **)(a1 + 192);
      v22 = *v23;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v23 + 1);
    }
    else
    {
      v22 = 0;
    }
  }
  else
  {
    v22 = *v21;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21 + 1);
  }
  a2[8] = v22;
  v24 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v26 = *(unsigned __int8 **)(a1 + 192);
      v25 = *v26;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v26 + 1);
    }
    else
    {
      v25 = 0;
    }
  }
  else
  {
    v25 = *v24;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v24 + 1);
  }
  a2[9] = v25;
  v27 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v29 = *(unsigned __int8 **)(a1 + 192);
      v28 = *v29;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v29 + 1);
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v28 = *v27;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v27 + 1);
  }
  v30 = *a2 <= 0x1000000;
  a2[10] = v28;
  a2[11] = -1;
  if ( v30 && (int)a2[1] <= 0x1000000 )
  {
    if ( a3 )
      *a3 = 4;
    if ( !a4 )
    {
      v31 = a2[8];
      if ( (v31 & 0x80u) != 0 )
        sub_140161A30(a1, (__int64)(a2 + 13), 2 << (v31 & 7), -1);
    }
    return 1;
  }
  else
  {
    *v20 = (uint64)(uintptr_t)("too large");
    return 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140160CA0) ----------------------------------------------------
__int64            sub_140160CA0(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v8; // rdi

  v8 = (_DWORD *)sr_path_malloc(34928);
  if ( (unsigned int)sub_140160930((__int64)a1, v8, a4, 1) )
  {
    if ( a2 )
      *a2 = *v8;
    if ( a3 )
      *a3 = v8[1];
    free(v8);
    return 1;
  }
  else
  {
    free(v8);
    a1[24] = a1[26];
    a1[25] = a1[27];
    return 0;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140160D50) ----------------------------------------------------
__int64            sub_140160D50(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v8; // rdi

  v8 = (_DWORD *)sr_path_malloc(34928);
  if ( (unsigned int)sub_140160930((__int64)a1, v8, a4, 1) )
  {
    if ( a2 )
      *a2 = *v8;
    if ( a3 )
      *a3 = v8[1];
    free(v8);
    return 1;
  }
  else
  {
    free(v8);
    a1[24] = a1[26];
    a1[25] = a1[27];
    return 0;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140160E00) ----------------------------------------------------
__int64            sub_140160E00(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  unsigned int v4; // esi
  __int64 v9; // rax
  char *v10; // rbx
  int v12; // r9d
  int v13; // eax
  __int64 v14; // [rsp-20h] [rbp-11188h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140160E00[35040];
#define v15 (*(int (*)[2])(void *)(sr_frame_140160E00 + 0)) /* [rsp+10h] */
#define Block (*(void * (*))(void *)(sr_frame_140160E00 + 8)) /* [rsp+18h] */
#define v17 (*(void * (*))(void *)(sr_frame_140160E00 + 16)) /* [rsp+20h] */
#define v18 (*(void * (*))(void *)(sr_frame_140160E00 + 24)) /* [rsp+28h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140160E00 + 34928)) /* [rsp+8880h] */
#define v20 (*(unsigned int (*))(void *)(sr_frame_140160E00 + 35024)) /* [rsp+88E0h] */

  v4 = v20;
  sub_1401FCD30((void *)(uintptr_t)(v15), 0, 0x8870u);
  v9 = sub_140160EF0(a1, v15, a4, v4, 0);
  v10 = (char *)v9;
  if ( v9 == a1 || !v9 )
  {
    if ( Block )
      free(Block);
  }
  else
  {
    v12 = v15[0];
    v13 = v15[1];
    *a2 = v15[0];
    *a3 = v13;
    if ( (v4 & 0xFFFFFFFB) != 0 )
      sub_14015D7E0(v10, 4, v4, v12, v13);
  }
  free(v18);
  free(v17);
  return sub_1401F8B20((unsigned __int64)&v14 ^ v19);
}
#undef v15
#undef Block
#undef v17
#undef v18
#undef v19
#undef v20


//----- (0000000140160EF0) ----------------------------------------------------
__int64            sub_140160EF0(__int64 a1, int *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  int v8; // edi
  int v9; // ecx
  int v10; // r8d
  int v11; // edi
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  _WORD *v14; // rcx
  __int64 v15; // rax
       char *v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // r8
  __int64 i; // rdx
  __int64 j; // rdx
  char *v22; // rax
  int v23; // eax
  char v24; // cl
  unsigned __int8 *v25; // rax
  int v26; // eax
  unsigned __int8 v27; // dl
  unsigned __int8 *v28; // rax
  unsigned __int8 *v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int8 v31; // r8
  unsigned __int8 *v32; // rax
  __int64 v33; // rax
  unsigned __int8 v34; // dl
  unsigned __int8 *v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int8 *v37; // rax
  unsigned __int8 v38; // dl
  unsigned __int8 *v39; // rax
  int v40; // edi
  unsigned __int8 v41; // cl
  unsigned __int8 *v42; // rax
  __int64 v43; // rax
  unsigned __int8 *v44; // rax
  unsigned __int8 v45; // cl
  unsigned __int8 *v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int8 *v48; // rcx
  unsigned __int8 v49; // r8
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rcx
  int v53; // eax
  unsigned __int8 *v54; // rax
  __int64 v55; // rax
  int v56; // r8d
  __int64 v57; // rcx
  unsigned __int64 v59; // rcx
  unsigned __int8 v60; // dl
  unsigned __int8 *v61; // rax
  int v62; // edi
  int v63; // r14d
  unsigned __int8 v64; // dl
  unsigned __int8 *v65; // rax
  unsigned __int8 v66; // dl
  unsigned __int8 *v67; // rax
  int v68; // ebp
  int v69; // edi
  unsigned __int8 v70; // dl
  unsigned __int8 *v71; // rax
  unsigned __int8 v72; // dl
  unsigned __int8 *v73; // rax
  int v74; // ebp
  int v75; // r15d
  int v76; // r13d
  unsigned __int8 v77; // r8
  unsigned __int8 *v78; // rax
  unsigned __int8 *v79; // rax
  int v80; // ebp
  unsigned __int8 v81; // cl
  unsigned __int8 *v82; // rax
  int v83; // r9d
  int v84; // edx
  int v85; // r8d
  char *v86; // rax
  char v87; // cl
  char *v88; // rax
  int v89; // edx
  int v90; // r8d
  int v91; // eax
  int v92; // r15d
  char *v93; // rdi
  int v94; // ebp
  __int64 v95; // r14
  char *v96; // rax
  char v97; // cl
  char *v98; // rax
  char *v99; // rax
  char v100; // cl
  char *v101; // rax
  char *v102; // rax
  char v103; // cl
  char *v104; // rax
  char v105; // al
  __int64 v106; // rax
  __int64 v107; // r8
  int v108; // eax
  int v109; // [rsp+58h] [rbp+10h]

  v5 = 0;
  v109 = 0;
  if ( *((_QWORD *)a2 + 1) )
  {
    v17 = a2[1] * *a2;
    v18 = (a2[12] >> 2) & 7;
    if ( v18 != 3 || a5 )
    {
      v19 = v17;
      if ( v18 == 3 )
      {
        if ( v17 > 0 )
        {
          for ( i = 0; i < v17; ++i )
          {
            if ( *(_BYTE *)(i + *((_QWORD *)a2 + 3)) )
              *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * i) = *(_DWORD *)(a5 + 4 * i);
          }
        }
        goto LABEL_33;
      }
      if ( v18 != 2 )
      {
LABEL_33:
        sub_1401FC920(*((__m128i **)a2 + 2), *((     __m128i **)a2 + 1), 4 * a2[1] * *a2);
        goto LABEL_34;
      }
    }
    else
    {
      v19 = v17;
    }
    if ( v19 > 0 )
    {
      for ( j = 0; j < v19; ++j )
      {
        if ( *(_BYTE *)(j + *((_QWORD *)a2 + 3)) )
          *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * j) = *(_DWORD *)(*((_QWORD *)a2 + 2) + 4 * j);
      }
    }
    goto LABEL_33;
  }
  if ( !(unsigned int)sub_140160930(a1, a2, a3, 0) )
    return 0;
  v8 = *a2;
  v9 = a2[1];
  if ( *a2 < 0 )
    goto LABEL_16;
  if ( v8 )
  {
    if ( 0x7FFFFFFF / v8 < 4 )
      goto LABEL_16;
    v10 = 4 * v8;
    if ( (v8 & 0x20000000) != 0 )
      goto LABEL_16;
  }
  else
  {
    v10 = 0;
  }
  if ( v9 < 0 || v9 && v10 > 0x7FFFFFFF / v9 )
  {
LABEL_16:
    v15 = sr_client_static_tls();
    v16 = "too large";
    goto LABEL_186;
  }
  v11 = v9 * v8;
  v12 = 4 * v11;
  *((_QWORD *)a2 + 1) = sr_path_malloc(v12);
  *((_QWORD *)a2 + 2) = sr_path_malloc(v12);
  v13 = sr_path_malloc(v11);
  v14 = *((_WORD **)a2 + 1);
  *((_QWORD *)a2 + 3) = v13;
  if ( !v14 || !*((_QWORD *)a2 + 2) || !v13 )
  {
    v15 = sr_client_static_tls();
    v16 = "outofmem";
LABEL_186:
    *(_QWORD *)(v15 + 16) = (uint64)(uintptr_t)(v16);
    return 0;
  }
  sub_1401FCD30((void *)(uintptr_t)(v14), 0, v12);
  sub_1401FCD30((void *)(uintptr_t)(*((_WORD **)a2 + 2)), 0, v12);
  sub_1401FCD30((void *)(uintptr_t)(*((_WORD **)a2 + 3)), 0, v11);
  v109 = 1;
LABEL_34:
  sub_1401FCD30((void *)(uintptr_t)(*((_WORD **)a2 + 3)), 0, a2[1] * *a2);
  while ( 1 )
  {
    v22 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_185;
      v23 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v23 )
      {
        *(_QWORD *)(a1 + 200) = v23 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v22 = *(char **)(a1 + 192);
    }
    v24 = *v22;
    v25 = (unsigned __int8 *)(v22 + 1);
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v25);
    if ( v24 != 33 )
      break;
    if ( (unsigned __int64)v25 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_78;
      v26 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v26 )
      {
        *(_QWORD *)(a1 + 200) = v26 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v25 = *(unsigned __int8 **)(a1 + 192);
    }
    v27 = *v25;
    v28 = v25 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v28);
    v29 = v28;
    if ( v27 != 0xF9 )
      goto LABEL_78;
    v30 = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)v28 >= v30 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v32 = *(unsigned __int8 **)(a1 + 192);
        v30 = *(_QWORD *)(a1 + 200);
        v31 = *v32;
        v29 = v32 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v32 + 1);
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
      v31 = *v28;
      v29 = v28 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v28 + 1);
    }
    v33 = v31;
    if ( v31 == 4 )
    {
      if ( (unsigned __int64)v29 >= v30 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v35 = *(unsigned __int8 **)(a1 + 192);
          v34 = *v35;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v35 + 1);
        }
        else
        {
          v34 = 0;
        }
      }
      else
      {
        v34 = *v29;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v29 + 1);
      }
      a2[12] = v34;
      v36 = *(_QWORD *)(a1 + 200);
      v37 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v37 >= v36 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v40 = 0;
LABEL_66:
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1);
            v42 = *(unsigned __int8 **)(a1 + 192);
            v41 = *v42;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v42 + 1);
          }
          else
          {
            v41 = 0;
          }
          goto LABEL_69;
        }
        sub_14016D910(a1);
        v37 = *(unsigned __int8 **)(a1 + 192);
        v36 = *(_QWORD *)(a1 + 200);
      }
      v38 = *v37;
      v39 = v37 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v39);
      v40 = v38;
      if ( (unsigned __int64)v39 >= v36 )
        goto LABEL_66;
      v41 = *v39;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v39 + 1);
LABEL_69:
      a2[8730] = 10 * (v40 + (v41 << 8));
      v43 = a2[11];
      if ( (int)v43 >= 0 )
        HIBYTE(a2[v43 + 13]) = -1;
      if ( (a2[12] & 1) != 0 )
      {
        v44 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v44 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1);
            v46 = *(unsigned __int8 **)(a1 + 192);
            v45 = *v46;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v46 + 1);
          }
          else
          {
            v45 = 0;
          }
        }
        else
        {
          v45 = *v44;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v44 + 1);
        }
        a2[11] = v45;
        HIBYTE(a2[v45 + 13]) = 0;
      }
      else if ( *(_QWORD *)(a1 + 16) && (v50 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v50 < 1) )
      {
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(1 - v50));
        a2[11] = -1;
      }
      else
      {
        ++*(_QWORD *)(a1 + 192);
        a2[11] = -1;
      }
      while ( 1 )
      {
LABEL_78:
        v47 = *(_QWORD *)(a1 + 200);
        v48 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v48 >= v47 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v53 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v53 )
            {
              v47 = v53 + a1 + 56;
              *(_QWORD *)(a1 + 200) = v47;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
              v47 = *(_QWORD *)(a1 + 200);
            }
            v54 = *(unsigned __int8 **)(a1 + 192);
            v49 = *v54;
            v48 = v54 + 1;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v54 + 1);
          }
          else
          {
            v49 = 0;
          }
        }
        else
        {
          v49 = *v48++;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v48);
        }
        v55 = v49;
        if ( !v49 )
          break;
        if ( *(_QWORD *)(a1 + 16) && (v56 = v47 - (_DWORD)v48, (int)v47 - (int)v48 < (int)v55) )
        {
          v57 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = v47;
          (*(void (           **)(__int64, _QWORD))(a1 + 24))(v57, (unsigned int)(v55 - v56));
        }
        else
        {
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&v48[v55]);
        }
      }
    }
    else if ( v31 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v51 = v30 - (_DWORD)v29, (int)v30 - (int)v29 < (int)v33) )
      {
        v52 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = v30;
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(v52, (unsigned int)(v33 - v51));
      }
      else
      {
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&v29[v33]);
      }
    }
  }
  if ( v24 != 44 )
  {
    if ( v24 == 59 )
      return a1;
LABEL_185:
    v15 = sr_client_static_tls();
    v16 = "unknown code";
    goto LABEL_186;
  }
  v59 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v25 >= v59 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v25 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_106;
    }
    v62 = 0;
    v63 = 0;
LABEL_109:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v61 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_111;
    }
LABEL_116:
    v68 = 0;
    v69 = 0;
    goto LABEL_117;
  }
LABEL_106:
  v60 = *v25;
  v61 = v25 + 1;
  v62 = v60;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v61);
  v63 = v60;
  if ( (unsigned __int64)v61 >= v59 )
    goto LABEL_109;
LABEL_111:
  v64 = *v61;
  v65 = v61 + 1;
  v63 = v62 + (v64 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v65);
  if ( (unsigned __int64)v65 >= v59 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_116;
    sub_14016D910(a1);
    v65 = *(unsigned __int8 **)(a1 + 192);
    v59 = *(_QWORD *)(a1 + 200);
  }
  v66 = *v65;
  v67 = v65 + 1;
  v68 = v66;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v67);
  v69 = v66;
  if ( (unsigned __int64)v67 >= v59 )
  {
LABEL_117:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v67 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_119;
    }
LABEL_124:
    v74 = 0;
    v75 = 0;
LABEL_125:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v73 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_127;
    }
    v76 = v75;
    goto LABEL_130;
  }
LABEL_119:
  v70 = *v67;
  v71 = v67 + 1;
  v69 = v68 + (v70 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v71);
  if ( (unsigned __int64)v71 < v59 )
    goto LABEL_122;
  if ( !*(_DWORD *)(a1 + 48) )
    goto LABEL_124;
  sub_14016D910(a1);
  v71 = *(unsigned __int8 **)(a1 + 192);
  v59 = *(_QWORD *)(a1 + 200);
LABEL_122:
  v72 = *v71;
  v73 = v71 + 1;
  v74 = v72;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v73);
  v75 = v72;
  if ( (unsigned __int64)v73 >= v59 )
    goto LABEL_125;
LABEL_127:
  v75 = v74 + (*v73 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v73 + 1);
  v76 = v75;
  if ( (unsigned __int64)(v73 + 1) < v59 )
  {
    v77 = v73[1];
    v78 = v73 + 2;
    goto LABEL_132;
  }
LABEL_130:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v79 = *(unsigned __int8 **)(a1 + 192);
    v59 = *(_QWORD *)(a1 + 200);
    v77 = *v79;
    v78 = v79 + 1;
LABEL_132:
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v78);
    v80 = v77;
    if ( (unsigned __int64)v78 < v59 )
    {
      v81 = *v78;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v78 + 1);
      goto LABEL_138;
    }
  }
  else
  {
    v80 = 0;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v82 = *(unsigned __int8 **)(a1 + 192);
    v81 = *v82;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v82 + 1);
  }
  else
  {
    v81 = 0;
  }
LABEL_138:
  v83 = v80 + (v81 << 8);
  if ( v63 + v76 > *a2 || v83 + v69 > a2[1] )
  {
    v15 = sr_client_static_tls();
    v16 = "bad Image Descriptor";
    goto LABEL_186;
  }
  v84 = 4 * *a2;
  a2[8729] = v84;
  a2[8723] = 4 * v63;
  a2[8725] = 4 * v63 + 4 * v76;
  v85 = v69 * v84;
  a2[8727] = 4 * v63;
  a2[8724] = v69 * v84;
  if ( !v75 )
    v85 = v83 * v84 + v69 * v84;
  a2[8726] = v83 * v84 + v69 * v84;
  a2[8728] = v85;
  v86 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v86 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v88 = *(char **)(a1 + 192);
      v87 = *v88;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v88 + 1);
    }
    else
    {
      v87 = 0;
    }
  }
  else
  {
    v87 = *v86;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v86 + 1);
  }
  v89 = a2[8729];
  a2[8722] = (unsigned __int8)v87;
  v90 = v87 & 0x40;
  v91 = 8 * v89;
  if ( !v90 )
    v91 = v89;
  a2[8721] = v91;
  a2[8720] = v90 != 0 ? 3 : 0;
  if ( v87 >= 0 )
  {
    if ( *((char *)a2 + 32) >= 0 )
    {
      v15 = sr_client_static_tls();
      v16 = "missing color table";
      goto LABEL_186;
    }
    v106 = 13;
  }
  else
  {
    if ( (a2[12] & 1) != 0 )
      v92 = a2[11];
    else
      v92 = -1;
    v93 = (char *)a2 + 1077;
    v94 = 0;
    v95 = 2 << (v87 & 7);
    do
    {
      v96 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v96 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v98 = *(char **)(a1 + 192);
          v97 = *v98;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v98 + 1);
        }
        else
        {
          v97 = 0;
        }
      }
      else
      {
        v97 = *v96;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v96 + 1);
      }
      v93[1] = v97;
      v99 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v99 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v101 = *(char **)(a1 + 192);
          v100 = *v101;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v101 + 1);
        }
        else
        {
          v100 = 0;
        }
      }
      else
      {
        v100 = *v99;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v99 + 1);
      }
      *v93 = v100;
      v102 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v102 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v104 = *(char **)(a1 + 192);
          v103 = *v104;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v104 + 1);
        }
        else
        {
          v103 = 0;
        }
      }
      else
      {
        v103 = *v102;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v102 + 1);
      }
      *(v93 - 1) = v103;
      v105 = -1;
      if ( v92 == v94 )
        v105 = 0;
      ++v94;
      v93[2] = v105;
      v93 += 4;
      --v95;
    }
    while ( v95 );
    v106 = 269;
  }
  *((_QWORD *)a2 + 4359) = (uint64)(uintptr_t)(&a2[v106]);
  v107 = sub_14016B5F0(a1, (__int64)a2);
  if ( !v107 )
    return 0;
  if ( v109 )
  {
    if ( a2[9] > 0 )
    {
      v108 = a2[1] * *a2;
      if ( v108 > 0 )
      {
        do
        {
          if ( !*(_BYTE *)(v5 + *((_QWORD *)a2 + 3)) )
          {
            HIBYTE(a2[a2[9] + 13]) = -1;
            *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * v5) = a2[a2[9] + 13];
          }
          ++v5;
        }
        while ( v5 < v108 );
      }
    }
  }
  return v107;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140161A30) ----------------------------------------------------
void            sub_140161A30(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // esi
  __int64 v5; // rbp
  _BYTE *v7; // rdi
  char *v9; // rax
  char v10; // cl
  char *v11; // rax
  char *v12; // rax
  char v13; // cl
  char *v14; // rax
  char *v15; // rax
  char v16; // cl
  char *v17; // rax
  char v18; // al

  if ( a3 > 0 )
  {
    v4 = 0;
    v5 = a3;
    v7 = (_BYTE *)(a2 + 1);
    do
    {
      v9 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v11 = *(char **)(a1 + 192);
          v10 = *v11;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = *v9;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
      }
      v7[1] = v10;
      v12 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v14 = *(char **)(a1 + 192);
          v13 = *v14;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v14 + 1);
        }
        else
        {
          v13 = 0;
        }
      }
      else
      {
        v13 = *v12;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
      }
      *v7 = v13;
      v15 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v17 = *(char **)(a1 + 192);
          v16 = *v17;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v17 + 1);
        }
        else
        {
          v16 = 0;
        }
      }
      else
      {
        v16 = *v15;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 1);
      }
      *(v7 - 1) = v16;
      v18 = -1;
      if ( a4 == v4 )
        v18 = 0;
      ++v4;
      v7[2] = v18;
      v7 += 4;
      --v5;
    }
    while ( v5 );
  }
}


//----- (0000000140161B80) ----------------------------------------------------
__int64            sub_140161B80(_QWORD *a1)
{
  __int64 result; // rax

  result = sub_140161BB0((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return result;
}


//----- (0000000140161BB0) ----------------------------------------------------
__int64            sub_140161BB0(__int64 a1)
{
  char *v1; // rax
  char v3; // cl
  char *v4; // rax
  char v5; // cl
  char *v6; // rax
  char v7; // cl
  char *v8; // rax
  char v9; // cl
  char *v10; // rax
  char v11; // cl
  char *v12; // rax
  char v13; // cl

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      return 0;
    sub_14016D910(a1);
    v1 = *(char **)(a1 + 192);
  }
  v3 = *v1;
  v4 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  if ( v3 == 71 )
  {
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        return 0;
      sub_14016D910(a1);
      v4 = *(char **)(a1 + 192);
    }
    v5 = *v4;
    v6 = v4 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6);
    if ( v5 == 73 )
    {
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 200) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          return 0;
        sub_14016D910(a1);
        v6 = *(char **)(a1 + 192);
      }
      v7 = *v6;
      v8 = v6 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8);
      if ( v7 == 70 )
      {
        if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            return 0;
          sub_14016D910(a1);
          v8 = *(char **)(a1 + 192);
        }
        v9 = *v8;
        v10 = v8 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10);
        if ( v9 == 56 )
        {
          if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            sub_14016D910(a1);
            v10 = *(char **)(a1 + 192);
          }
          v11 = *v10;
          v12 = v10 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12);
          if ( v11 != 57 && v11 != 55 )
            return 0;
          if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            sub_14016D910(a1);
            v12 = *(char **)(a1 + 192);
          }
          v13 = *v12;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
          if ( v13 == 97 )
            return 1;
        }
      }
    }
  }
  return 0;
}


//----- (0000000140161D20) ----------------------------------------------------
__int64            sub_140161D20(_QWORD *a1)
{
  int v2; // ebp
  __int64 v3; // rbx
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // cl
  unsigned __int8 *v6; // rax
  __int64 v7; // rbx
  unsigned __int8 *v8; // rax
  unsigned __int8 v9; // cl
  unsigned __int8 *v10; // rax
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned __int8 *v13; // rax
  unsigned __int8 v14; // cl
  int v15; // eax
  unsigned __int8 *v16; // rax
  int v17; // edx

  while ( *((_DWORD *)a1 + 4619) )
  {
    v2 = 0;
LABEL_25:
    v17 = *((_DWORD *)a1 + 4617);
    *((_DWORD *)a1 + 4616) |= v2 << (24 - v17);
    result = (unsigned int)(v17 + 8);
    *((_DWORD *)a1 + 4617) = result;
    if ( (int)result > 24 )
      return result;
  }
  v3 = *a1;
  v4 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v3 + 48) )
    {
      sub_14016D910(*a1);
      v6 = *(unsigned __int8 **)(v3 + 192);
      v5 = *v6;
      *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v6 + 1);
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *v4;
    *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v4 + 1);
  }
  v2 = v5;
  if ( v5 != 255 )
    goto LABEL_25;
  v7 = *a1;
  v8 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v7 + 48) )
    {
      sub_14016D910(*a1);
      v10 = *(unsigned __int8 **)(v7 + 192);
      v9 = *v10;
      *(_QWORD *)(v7 + 192) = (uint64)(uintptr_t)(v10 + 1);
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = *v8;
    *(_QWORD *)(v7 + 192) = (uint64)(uintptr_t)(v8 + 1);
  }
  result = v9;
  if ( v9 == 255 )
  {
    do
    {
      v12 = *a1;
      v13 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 200LL) )
      {
        if ( *(_DWORD *)(v12 + 48) )
        {
          v15 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(v12 + 16))(
                  *(_QWORD *)(v12 + 40),
                  v12 + 56,
                  *(unsigned int *)(v12 + 52));
          *(_DWORD *)(v12 + 184) += *(_DWORD *)(v12 + 192) - *(_DWORD *)(v12 + 208);
          *(_QWORD *)(v12 + 192) = v12 + 56;
          if ( v15 )
          {
            *(_QWORD *)(v12 + 200) = v15 + v12 + 56;
          }
          else
          {
            *(_DWORD *)(v12 + 48) = 0;
            *(_QWORD *)(v12 + 200) = v12 + 57;
            *(_BYTE *)(v12 + 56) = 0;
          }
          v16 = *(unsigned __int8 **)(v12 + 192);
          v14 = *v16;
          *(_QWORD *)(v12 + 192) = (uint64)(uintptr_t)(v16 + 1);
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = *v13;
        *(_QWORD *)(v12 + 192) = (uint64)(uintptr_t)(v13 + 1);
      }
      result = v14;
    }
    while ( v14 == 255 );
  }
  if ( !(_DWORD)result )
    goto LABEL_25;
  *((_BYTE *)a1 + 18472) = result;
  *((_DWORD *)a1 + 4619) = 1;
  return result;
}


//----- (0000000140161F00) ----------------------------------------------------
__int64            sub_140161F00(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 result; // rax
  float v7; // xmm2_4

  result = a2[3];
  if ( (_BYTE)result )
  {
    sub_14020B23C(1.0, result - 136);
    v7 = 1.0;
    if ( a3 > 2 )
    {
      *(float *)a1 = (float)*a2 * v7;
      *(float *)(a1 + 4) = (float)a2[1] * v7;
      result = a2[2];
      *(float *)(a1 + 8) = (float)a2[2] * v7;
      if ( a3 == 4 )
        *(_DWORD *)(a1 + 12) = 1065353216;
    }
    else
    {
      result = *a2;
      *(float *)a1 = (float)((float)(*a2 + a2[1] + a2[2]) * v7) * 0.33333334;
      if ( a3 == 2 )
        *(_DWORD *)(a1 + 4) = 1065353216;
    }
    return result;
  }
  if ( a3 == 1 )
  {
LABEL_14:
    *(_DWORD *)a1 = 0;
    return 0;
  }
  if ( a3 == 2 )
  {
    *(_DWORD *)(a1 + 4) = 1065353216;
    goto LABEL_14;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 )
      return result;
    *(_DWORD *)(a1 + 12) = 1065353216;
  }
  *(_QWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  return 0;
}


//----- (0000000140162030) ----------------------------------------------------
__int64            sub_140162030(__int64 a1, __int64 a2)
{
  char *v2; // rax
  int v5; // ebp
  char v6; // di
  char *v7; // rax
  __int64 v8; // rsi
  char *v9; // rax
  int v10; // eax
  char *v11; // rax
  char *v12; // rax
  unsigned __int64 v13; // rcx
  char v14; // cl

  v2 = *(char **)(a1 + 192);
  v5 = 0;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v7 = *(char **)(a1 + 192);
      v6 = *v7;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = *v2;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v2 + 1);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_11;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_11:
    if ( v6 == 10 )
      break;
    *(_BYTE *)(v8 + a2) = v6;
    ++v5;
    if ( ++v8 == 1023 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_25;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          break;
        v12 = *(char **)(a1 + 192);
        v13 = *(_QWORD *)(a1 + 200);
LABEL_26:
        if ( (unsigned __int64)v12 < v13 )
        {
LABEL_29:
          v14 = *v12;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
          if ( v14 == 10 )
            goto LABEL_30;
        }
        else if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v12 = *(char **)(a1 + 192);
          goto LABEL_29;
        }
      }
      if ( !*(_DWORD *)(a1 + 48) )
        break;
LABEL_25:
      v12 = *(char **)(a1 + 192);
      v13 = *(_QWORD *)(a1 + 200);
      if ( (unsigned __int64)v12 >= v13 )
        break;
      goto LABEL_26;
    }
    v9 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v10 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 200) = v10 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v11 = *(char **)(a1 + 192);
        v6 = *v11;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = *v9;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
    }
  }
LABEL_30:
  *(_BYTE *)(v5 + a2) = 0;
  return a2;
}


//----- (0000000140162220) ----------------------------------------------------
__int64            sub_140162220(_QWORD *a1, char *a2, char *a3, char *a4)
{
  int v4; // edi
  char *v5; // r14
  char *v6; // rsi
  char *v7; // r15
       char *v9; // rax
  int v10; // eax
  _BYTE *v11; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140162220[1088];
#define v13 (*(__int64 (*))(void *)(sr_frame_140162220 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE * (*))(void *)(sr_frame_140162220 + 32)) /* [rsp+20h] */
#define v15 (*(char (*))(void *)(sr_frame_140162220 + 40)) /* [rsp+28h] */
#define v16 (*(_BYTE (*)[1024])(void *)(sr_frame_140162220 + 48)) /* [rsp+30h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140162220 + 1072)) /* [rsp+430h] */

  v4 = 0;
  v5 = &v15;
  v6 = &v15;
  v7 = &v15;
  if ( a2 )
    v5 = a2;
  if ( a3 )
    v6 = a3;
  if ( a4 )
    v7 = a4;
  if ( (unsigned int)sub_140162BB0((__int64)a1) )
  {
    v9 = (     char *)sub_140162030((__int64)a1, (__int64)v16);
    v14 = v9;
    if ( !*v9 )
      goto LABEL_19;
    do
    {
      if ( !strcmp_sr(v9, "FORMAT=32-bit_rle_rgbe") )
        v4 = 1;
      v9 = (     char *)sub_140162030((__int64)a1, (__int64)v16);
      v14 = v9;
    }
    while ( *v9 );
    if ( !v4 )
      goto LABEL_19;
    v14 = (_BYTE *)sub_140162030((__int64)a1, (__int64)v16);
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v14), (const char *)(uintptr_t)("-Y "), 3) )
      goto LABEL_19;
    v14 += 3;
    v10 = sub_14023CCCC((__int64)v14, (__int64 *)&v14, 0xAu);
    v11 = v14;
    for ( *(_DWORD *)v6 = v10; *v11 == 32; v14 = v11 )
      ++v11;
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v11), (const char *)(uintptr_t)("+X "), 3) )
    {
      v14 += 3;
      *(_DWORD *)v5 = sub_14023CCCC((__int64)v14, nullptr, 0xAu);
      *(_DWORD *)v7 = 3;
    }
    else
    {
LABEL_19:
      a1[24] = a1[26];
      a1[25] = a1[27];
    }
  }
  else
  {
    a1[24] = a1[26];
    a1[25] = a1[27];
  }
  return sub_1401F8B20((unsigned __int64)&v13 ^ v17);
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);

//----- (00000001401623E0) ----------------------------------------------------
__int64            sub_1401623E0(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4, unsigned int a5)
{
  int v9; // edi
       char *v10; // rsi
  __int64 v11; // rcx
  char v12; // al
       char *v13; // rax
  __int32 v14; // eax
  _BYTE *v15; // rcx
  int v16; // esi
  __int64 v17; // r13
  __int64 v18; // r15
  char *v19; // r12
  char *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // r14
  int v23; // r15d
  unsigned __int8 v24; // si
  int v25; // ebp
  char v26; // cl
  char *v27; // rax
  int v28; // edi
  unsigned __int8 v29; // cl
  unsigned __int8 *v30; // rax
  __int64 v31; // r15
  int v32; // ebp
  __int64 v33; // r14
  unsigned int v34; // esi
  unsigned __int8 *v35; // rax
  unsigned __int8 v36; // di
  char *v37; // rax
  char v38; // dl
  char *v39; // rax
  unsigned __int8 v40; // di
  char *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  char *v44; // rdi
  __int64 v45; // rsi
  char *v46; // rax
  char v47; // cl
  char *v48; // rax
  unsigned __int8 *v49; // rdi
  __int64 v50; // rbp
  int v51; // r15d
  __int64 v52; // r14
  char *v53; // rsi
  __int64 v54; // rax
       char *v55; // rdx
  char v57; // cl
  char *v58; // rax
  int v59; // edi
  int v60; // esi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401623E0[1136];
#define v61 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 8)) /* [rsp+0h] */
#define v62 (*(int (*))(void *)(sr_frame_1401623E0 + 56)) /* [rsp+30h] */
#define v63 (*(_BYTE * (*))(void *)(sr_frame_1401623E0 + 64)) /* [rsp+38h] */
#define Block (*(void * (*))(void *)(sr_frame_1401623E0 + 72)) /* [rsp+40h] */
#define v65 (*(__m128i (*))(void *)(sr_frame_1401623E0 + 80)) /* [rsp+48h] */
#define v66 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 96)) /* [rsp+58h] */
#define v67 (*(_BYTE (*)[1024])(void *)(sr_frame_1401623E0 + 104)) /* [rsp+60h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 1128)) /* [rsp+460h] */

  v9 = 0;
  v10 = (     char *)sub_140162030(a1, (__int64)v67);
  if ( !strcmp_sr(v10, "#?RADIANCE") )
  {
LABEL_5:
    v13 = (     char *)sub_140162030(a1, (__int64)v67);
    v63 = v13;
    if ( !*v13 )
      goto LABEL_111;
    do
    {
      if ( !strcmp_sr(v13, "FORMAT=32-bit_rle_rgbe") )
        v9 = 1;
      v13 = (     char *)sub_140162030(a1, (__int64)v67);
      v63 = v13;
    }
    while ( *v13 );
    if ( !v9 )
    {
LABEL_111:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported format");
      return sub_1401F8B20((unsigned __int64)&v61 ^ v68);
    }
    v63 = (_BYTE *)sub_140162030(a1, (__int64)v67);
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v63), (const char *)(uintptr_t)("-Y "), 3) )
      goto LABEL_11;
    v63 += 3;
    v14 = sub_14023CCCC((__int64)v63, (__int64 *)&v63, 0xAu);
    v15 = v63;
    v16 = v14;
    for ( SR_VEC_LANES(128, v65, i32)[2] = v14; *v15 == 32; v63 = v15 )
      ++v15;
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v15), (const char *)(uintptr_t)("+X "), 3) )
    {
LABEL_11:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported data layout");
      return sub_1401F8B20((unsigned __int64)&v61 ^ v68);
    }
    v63 += 3;
    v17 = (unsigned int)sub_14023CCCC((__int64)v63, nullptr, 0xAu);
    if ( v16 > 0x1000000 || (int)v17 > 0x1000000 )
      goto LABEL_110;
    *a2 = v17;
    v18 = 3;
    *a3 = v16;
    if ( a4 )
      *a4 = 3;
    if ( a5 )
      v18 = a5;
    if ( (v66 = v18, (int)v17 < 0)
      || v16 < 0
      || v16 && (int)v17 > 0x7FFFFFFF / v16
      || v16 * (int)v17 < 0
      || (int)v18 < 0
      || v16 * (int)v17 > 0x7FFFFFFF / (int)v18
      || (SR_VEC_LANES(128, v65, i32)[0] = v17 * v18, (unsigned int)(v16 * v17 * v18) >= 0x20000000) )
    {
LABEL_110:
      v54 = sr_client_static_tls();
      v55 = "too large";
LABEL_94:
      *(_QWORD *)(v54 + 16) = (uint64)(uintptr_t)(v55);
      return sub_1401F8B20((unsigned __int64)&v61 ^ v68);
    }
    Block = (void *)sub_140167010(v17, v16, v18, 4, 0);
    if ( !Block )
    {
LABEL_93:
      v54 = sr_client_static_tls();
      v55 = "outofmem";
      goto LABEL_94;
    }
    if ( (unsigned int)(v17 - 8) > 0x7FF7 )
    {
      v59 = 0;
      goto LABEL_105;
    }
    v19 = nullptr;
    SR_VEC_LANES(128, v65, i32)[1] = 0;
    if ( v16 <= 0 )
      return sub_1401F8B20((unsigned __int64)&v61 ^ v68);
    v62 = 0;
LABEL_34:
    v20 = *(char **)(a1 + 192);
    v21 = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)v20 >= v21 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v22 = 0;
        v23 = 0;
LABEL_40:
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v24 = 0;
          v25 = 0;
          goto LABEL_45;
        }
        sub_14016D910(a1);
        v20 = *(char **)(a1 + 192);
        v21 = *(_QWORD *)(a1 + 200);
LABEL_42:
        v24 = *v20++;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
        v25 = v24;
        if ( (unsigned __int64)v20 < v21 )
        {
          v26 = *v20++;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
LABEL_48:
          if ( v23 != 2 || v25 != 2 || v26 < 0 )
          {
            LOBYTE(v62) = v22;
            BYTE1(v62) = v24;
            BYTE2(v62) = v26;
            if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1);
                v58 = *(char **)(a1 + 192);
                v57 = *v58;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v58 + 1);
              }
              else
              {
                v57 = 0;
              }
            }
            else
            {
              v57 = *v20;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20 + 1);
            }
            LODWORD(v18) = v66;
            HIBYTE(v62) = v57;
            sub_140161F00((__int64)Block, (unsigned __int8 *)&v62, v66);
            v59 = 0;
            free(v19);
            v60 = 1;
            while ( 1 )
            {
              sub_140160860(a1, &v65, 4);
              sub_140161F00(
                (__int64)Block + 4 * v60 * (int)v18 + 4 * (__int64)((int)v17 * v59 * (int)v18),
                (unsigned __int8 *)&v65,
                v18);
              ++v60;
              while ( v60 >= (int)v17 )
              {
                v16 = SR_VEC_LANES(128, v65, i32)[2];
                ++v59;
LABEL_105:
                if ( v59 >= v16 )
                  return sub_1401F8B20((unsigned __int64)&v61 ^ v68);
                v60 = 0;
              }
            }
          }
          v28 = (unsigned __int8)v26 << 8;
          if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              sub_14016D910(a1);
              v30 = *(unsigned __int8 **)(a1 + 192);
              v29 = *v30;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v30 + 1);
            }
            else
            {
              v29 = 0;
            }
          }
          else
          {
            v29 = *v20;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20 + 1);
          }
          if ( (v28 | v29) != (_DWORD)v17 )
          {
            free(Block);
            free(v19);
            v54 = sr_client_static_tls();
            v55 = "invalid decoded scanline length";
            goto LABEL_94;
          }
          if ( !v19 )
          {
            v19 = (char *)sr_path_malloc(4 * (int)v17);
            if ( !v19 )
            {
              free(Block);
              goto LABEL_93;
            }
          }
          v31 = 0;
LABEL_60:
          v32 = 0;
          v33 = 0;
          v34 = v17;
          while ( 1 )
          {
            v35 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 200) )
            {
              if ( !*(_DWORD *)(a1 + 48) )
              {
                v36 = 0;
                goto LABEL_76;
              }
              sub_14016D910(a1);
              v35 = *(unsigned __int8 **)(a1 + 192);
            }
            v36 = *v35;
            v37 = (char *)(v35 + 1);
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v37);
            if ( v36 > 0x80u )
            {
              if ( (unsigned __int64)v37 >= *(_QWORD *)(a1 + 200) )
              {
                if ( *(_DWORD *)(a1 + 48) )
                {
                  sub_14016D910(a1);
                  v39 = *(char **)(a1 + 192);
                  v38 = *v39;
                  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v39 + 1);
                }
                else
                {
                  v38 = 0;
                }
              }
              else
              {
                v38 = *v37;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v37 + 1);
              }
              v40 = v36 + 0x80;
              if ( v40 > v34 )
              {
LABEL_96:
                free(Block);
                free(v19);
                v54 = sr_client_static_tls();
                v55 = "corrupt";
                goto LABEL_94;
              }
              if ( v40 )
              {
                v32 += v40;
                v41 = &v19[4 * v33 + v31];
                v42 = v40;
                v33 += v40;
                do
                {
                  *v41 = v38;
                  v41 += 4;
                  --v42;
                }
                while ( v42 );
              }
              goto LABEL_85;
            }
LABEL_76:
            v43 = v36;
            if ( v36 > v34 )
              goto LABEL_96;
            if ( v36 )
            {
              v32 += v36;
              v44 = &v19[4 * v33 + v31];
              v45 = (unsigned int)v43;
              v33 += v43;
              do
              {
                v46 = *(char **)(a1 + 192);
                if ( (unsigned __int64)v46 >= *(_QWORD *)(a1 + 200) )
                {
                  if ( *(_DWORD *)(a1 + 48) )
                  {
                    sub_14016D910(a1);
                    v48 = *(char **)(a1 + 192);
                    v47 = *v48;
                    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v48 + 1);
                  }
                  else
                  {
                    v47 = 0;
                  }
                }
                else
                {
                  v47 = *v46;
                  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v46 + 1);
                }
                *v44 = v47;
                v44 += 4;
                --v45;
              }
              while ( v45 );
            }
LABEL_85:
            v34 = v17 - v32;
            if ( (int)v17 - v32 <= 0 )
            {
              if ( ++v31 < 4 )
                goto LABEL_60;
              v49 = (unsigned __int8 *)v19;
              v50 = v17;
              v51 = v66;
              v52 = 4LL * (int)v66;
              v53 = (char *)Block + 4 * v62;
              do
              {
                sub_140161F00((__int64)v53, v49, v51);
                v53 += v52;
                v49 += 4;
                --v50;
              }
              while ( v50 );
              v62 += SR_VEC_LANES(128, v65, i32)[0];
              if ( ++SR_VEC_LANES(128, v65, i32)[1] >= SR_VEC_LANES(128, v65, i32)[2] )
              {
                free(v19);
                return sub_1401F8B20((unsigned __int64)&v61 ^ v68);
              }
              goto LABEL_34;
            }
          }
        }
LABEL_45:
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v27 = *(char **)(a1 + 192);
          v26 = *v27;
          v20 = v27 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
        }
        else
        {
          v26 = 0;
        }
        goto LABEL_48;
      }
      sub_14016D910(a1);
      v20 = *(char **)(a1 + 192);
      v21 = *(_QWORD *)(a1 + 200);
    }
    v22 = *v20++;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
    v23 = v22;
    if ( (unsigned __int64)v20 < v21 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = v10[v11++];
    if ( v12 != sr_mem_140272dc4[v11 - 1] )
      break;
    if ( v11 == 7 )
      goto LABEL_5;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not HDR");
  return sub_1401F8B20((unsigned __int64)&v61 ^ v68);
}
#undef v61
#undef v62
#undef v63
#undef Block
#undef v65
#undef v66
#undef v67
#undef v68

// 140162620: conditional instruction was optimized away because r15d.4>=1
// 1401627FB: conditional instruction was optimized away because r13d.4 is in (8..7FFF)
// 14016295E: conditional instruction was optimized away because r13d.4 is in (8..7FFF)
// 1401629BA: conditional instruction was optimized away because r12.8!=0
// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140162BB0) ----------------------------------------------------
__int64            sub_140162BB0(__int64 a1)
{
  unsigned __int8 **v2; // rdi
       char *v3; // rbx
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // dl
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = (unsigned __int8 **)(a1 + 192);
  v3 = "#?RADIANCE\n";
  while ( 1 )
  {
    v4 = *v2;
    if ( (unsigned __int64)*v2 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v5 = *(*v2)++;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v5 = *v4;
      *v2 = v4 + 1;
    }
    if ( v5 != *v3 )
      break;
    if ( !*++v3 )
    {
      result = 1;
      goto LABEL_11;
    }
  }
  *v2 = *(unsigned __int8 **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  result = sub_140162C90(a1, "#?RGBE\n");
LABEL_11:
  v7 = *(_QWORD *)(a1 + 216);
  *v2 = *(unsigned __int8 **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = v7;
  return result;
}


//----- (0000000140162C90) ----------------------------------------------------
__int64            sub_140162C90(__int64 a1, char *a2)
{
  char *v2; // rdi
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // dl
  unsigned __int8 *v6; // rax

  v2 = a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v4 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v6 = *(unsigned __int8 **)(a1 + 192);
          v5 = *v6;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6 + 1);
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        v5 = *v4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
      }
      if ( v5 != *v2 )
        return 0;
      if ( !*++v2 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 1;
  }
}


//----- (0000000140162D40) ----------------------------------------------------
__int64            sub_140162D40(void *Block, int a2, int a3, int a4)
{
  __int64 v4; // rsi
  void *v5; // rdi
  int v6; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r10
  __int64 v10; // r9
  int v11; // r13d
  __int64 v12; // r14
  float *v13; // r15
  float v14; // xmm9_4
  __int64 v15; // rdx
  float v16; // xmm10_4
  __int64 v17; // r12
  int v18; // ebp
  __int64 v19; // rbx
  float *v20; // rdi
  float v21; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140162D40[32];
#define v23 (*(int (*))(void *)(sr_frame_140162D40 + 0)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140162D40 + 8)) /* [rsp+28h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140162D40 + 16)) /* [rsp+30h] */

  v4 = a4;
  v5 = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (v6 = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && v6 > (int)(0x7FFFFFFFu / a4)
    || (v25 = sr_path_malloc(a4 * v6), (v7 = v25) == 0) )
  {
    free(v5);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  v8 = v4;
  if ( (v4 & 1) == 0 )
    v8 = v4 - 1;
  v23 = v8;
  if ( v6 > 0 )
  {
    v9 = 4 * v4;
    v10 = v4;
    v11 = 0;
    v12 = v25;
    v13 = (float *)v5;
    v14 = flt_140301840;
    v15 = (unsigned int)v6;
    v16 = *(float *)&dword_140301844;
    v17 = v8;
    v24 = (unsigned int)v6;
    do
    {
      v18 = 0;
      if ( v17 > 0 )
      {
        v19 = 0;
        v20 = v13;
        v18 = v8;
        do
        {
          v21 = powf(v16 * *v20++, v14);
          *(_BYTE *)(v12 + v19++) = (int)fminf(fmaxf((float)(v21 * 255.0) + 0.5, 0.0), 255.0);
        }
        while ( v19 < v17 );
        v15 = v24;
        v10 = v4;
        v5 = Block;
        v7 = v25;
        v9 = 4 * v4;
      }
      if ( v18 < (int)v4 )
        *(_BYTE *)(v18 + v11 + v7) = (int)fminf(fmaxf((float)(*((float *)v5 + v18 + v11) * 255.0) + 0.5, 0.0), 255.0);
      v8 = v23;
      v11 += v4;
      v13 = (float *)((char *)v13 + v9);
      v12 += v10;
      v24 = --v15;
    }
    while ( v15 );
  }
  free(v5);
  return v25;
}
#undef v23
#undef v24
#undef v25

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140301844: using guessed type int dword_140301844;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140162FB0) ----------------------------------------------------
__int64            sub_140162FB0(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // ecx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v3 = HIWORD(a1);
  v4 = 16;
  if ( a1 < 0x10000 )
  {
    v3 = a1;
    v4 = 0;
  }
  if ( v3 >= 0x100 )
  {
    v4 += 8;
    v3 >>= 8;
  }
  v5 = v4 + 4;
  v6 = v3 >> 4;
  if ( v3 < 0x10 )
  {
    v5 = v4;
    v6 = v3;
  }
  v7 = v5 + 2;
  if ( v6 < 4 )
    v7 = v5;
  v8 = v6 >> 2;
  if ( v6 < 4 )
    v8 = v6;
  result = v7 + 1;
  if ( v8 < 2 )
    return v7;
  return result;
}


//----- (0000000140163020) ----------------------------------------------------
__int64            sub_140163020(__int64 a1, int a2, __int64 a3)
{
  int *v3; // rbp
  __int16 *v4; // rax
  int v5; // ebx
  int v6; // ecx
  int v7; // r13d
  int v8; // edx
  int v9; // r11d
  int v10; // r9d
  int v11; // edx
  int v12; // r14d
  int v13; // esi
  int v14; // r13d
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // r9d
  int v19; // r10d
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  int v23; // r13d
  int v24; // r12d
  int v25; // r13d
  int v26; // r10d
  int v27; // edi
  int v28; // r15d
  int v29; // ebx
  int v30; // ecx
  int v31; // edi
  int v32; // edx
  int v33; // r9d
  int v34; // r11d
  int v35; // r8d
  int v36; // r9d
  int v37; // r10d
  int v38; // edx
  int v39; // ebx
  int v40; // ecx
  int v41; // r13d
  int v42; // edx
  int v43; // r11d
  int v44; // r9d
  int v45; // edx
  int v46; // r14d
  int v47; // esi
  int v48; // r13d
  int v49; // r8d
  int v50; // ecx
  int v51; // edx
  int v52; // r9d
  int v53; // r10d
  int v54; // ecx
  int v55; // edx
  int v56; // r8d
  int v57; // r13d
  int v58; // r12d
  int v59; // r13d
  int v60; // r10d
  int v61; // edi
  int v62; // r15d
  int v63; // ebx
  int v64; // ecx
  int v65; // edi
  int v66; // edx
  int v67; // r9d
  int v68; // r11d
  int v69; // r8d
  int v70; // r9d
  int v71; // r10d
  int v72; // edx
  __int64 *v73; // r11
  _BYTE *v74; // r13
  int v75; // r8d
  int v76; // esi
  int v77; // edi
  int v78; // r10d
  int v79; // r14d
  int v80; // r9d
  int v81; // eax
  int v82; // ecx
  int v83; // r15d
  int v84; // r14d
  int v85; // r12d
  int v86; // r14d
  int v87; // r9d
  int v88; // ebp
  int v89; // r12d
  int v90; // r14d
  int v91; // r15d
  int v92; // r11d
  int v93; // eax
  int v94; // ebx
  int v95; // ecx
  int v96; // r8d
  int v97; // r9d
  int v98; // edx
  int v99; // ecx
  int v100; // edx
  int v101; // eax
  int v102; // ebp
  int v103; // eax
  int v104; // r12d
  int v105; // eax
  int v106; // r14d
  int v107; // eax
  int v108; // r15d
  __int64 v109; // rcx
  bool v110; // zf
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163020[304];
#define v112 (*(int (*))(void *)(sr_frame_140163020 + 0)) /* [rsp+0h] */
#define v113 (*(__int64 (*))(void *)(sr_frame_140163020 + 8)) /* [rsp+8h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_140163020 + 16)) /* [rsp+10h] */
#define v115 (*(int (*))(void *)(sr_frame_140163020 + 24)) /* [rsp+18h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_140163020 + 56)) /* [rsp+38h] */
#define v117 (*(_QWORD (*)[29])(void *)(sr_frame_140163020 + 64)) /* [rsp+40h] */

  v115 = a2;
  v3 = (int *)v117;
  v114 = a1;
  v4 = (__int16 *)(a3 + 32);
  v113 = 4;
  do
  {
    v5 = *(v4 - 8);
    if ( __PAIR32__(*(v4 - 8), v5) == (unsigned __int16)*v4
      && v4[8] == (_WORD)v5
      && v4[16] == (_WORD)v5
      && v4[24] == (_WORD)v5
      && v4[32] == (_WORD)v5
      && v4[40] == (_WORD)v5 )
    {
      v6 = 4 * *(v4 - 16);
      v3[48] = v6;
      v7 = v6;
      v3[40] = v6;
      v8 = v6;
      v3[8] = v6;
      *v3 = v6;
      *(v3 - 8) = v6;
    }
    else
    {
      v9 = v4[8];
      v10 = *v4;
      v11 = v4[32];
      v12 = v4[40];
      v13 = v4[24];
      v14 = *(v4 - 16);
      v15 = 2217 * (v11 + v10);
      v16 = 7567 * v11;
      v17 = 3135 * v10;
      v18 = v13 + v5;
      v19 = v15 - v16;
      v20 = v4[16];
      v21 = v15 + v17;
      v22 = (v20 + v14) << 12;
      v23 = (v14 - v20) << 12;
      v24 = v19 + v23;
      v112 = v22 - v21;
      v25 = v23 - v19;
      v26 = v5;
      v27 = 4816 * (v13 + v5 + v12 + v9);
      v28 = v22 + v21 + 512;
      v24 += 512;
      v25 += 512;
      v29 = v27 - 3685 * (v12 + v5);
      v30 = -1597 * v18;
      v31 = v27 - 10497 * (v13 + v9);
      v32 = -8034 * (v12 + v9);
      v33 = v32 + 12586 * v9;
      v34 = v32 + v29 + 1223 * v12;
      v35 = v29 + v30 + 6149 * v26;
      v36 = v31 + v33;
      v37 = v31 + v30 + 8410 * v13;
      v38 = v112 + 512;
      *(v3 - 8) = (v28 + v35) >> 10;
      *v3 = (v24 + v36) >> 10;
      v3[8] = (v37 + v25) >> 10;
      v6 = (v38 + v34) >> 10;
      v7 = (v25 - v37) >> 10;
      v8 = (v38 - v34) >> 10;
      v3[48] = (v28 - v35) >> 10;
      v3[40] = (v24 - v36) >> 10;
    }
    v3[24] = v8;
    v3[32] = v7;
    v3[16] = v6;
    v39 = *(v4 - 7);
    if ( __PAIR32__(*(v4 - 7), v39) == (unsigned __int16)v4[1]
      && v4[9] == (_WORD)v39
      && v4[17] == (_WORD)v39
      && v4[25] == (_WORD)v39
      && v4[33] == (_WORD)v39
      && v4[41] == (_WORD)v39 )
    {
      v40 = 4 * *(v4 - 15);
      v3[49] = v40;
      v41 = v40;
      v3[41] = v40;
      v42 = v40;
      v3[9] = v40;
      v3[1] = v40;
      *(v3 - 7) = v40;
    }
    else
    {
      v43 = v4[9];
      v44 = v4[1];
      v45 = v4[33];
      v46 = v4[41];
      v47 = v4[25];
      v48 = *(v4 - 15);
      v49 = 2217 * (v45 + v44);
      v50 = 7567 * v45;
      v51 = 3135 * v44;
      v52 = v47 + v39;
      v53 = v49 - v50;
      v54 = v4[17];
      v55 = v49 + v51;
      v56 = (v54 + v48) << 12;
      v57 = (v48 - v54) << 12;
      v58 = v53 + v57;
      v112 = v56 - v55;
      v59 = v57 - v53;
      v60 = v39;
      v61 = 4816 * (v47 + v39 + v46 + v43);
      v62 = v56 + v55 + 512;
      v58 += 512;
      v59 += 512;
      v63 = v61 - 3685 * (v46 + v39);
      v64 = -1597 * v52;
      v65 = v61 - 10497 * (v47 + v43);
      v66 = -8034 * (v46 + v43);
      v67 = v66 + 12586 * v43;
      v68 = v66 + v63 + 1223 * v46;
      v69 = v63 + v64 + 6149 * v60;
      v70 = v65 + v67;
      v71 = v65 + v64 + 8410 * v47;
      v72 = v112 + 512;
      *(v3 - 7) = (v62 + v69) >> 10;
      v3[1] = (v58 + v70) >> 10;
      v3[9] = (v71 + v59) >> 10;
      v40 = (v72 + v68) >> 10;
      v41 = (v59 - v71) >> 10;
      v42 = (v72 - v68) >> 10;
      v3[49] = (v62 - v69) >> 10;
      v3[41] = (v58 - v70) >> 10;
    }
    v3[25] = v42;
    v4 += 2;
    v3[33] = v41;
    v3[17] = v40;
    v3 += 2;
    --v113;
  }
  while ( v113 );
  v73 = &v116;
  v113 = (__int64)&v116;
  v74 = (_BYTE *)(v114 + 1);
  v114 = 8;
  do
  {
    v75 = *((_DWORD *)v73 - 4);
    v76 = *((_DWORD *)v73 + 1);
    v77 = *((_DWORD *)v73 - 1);
    v78 = *((_DWORD *)v73 - 3);
    v79 = *((_DWORD *)v73 - 6);
    v80 = 2217 * (*(_DWORD *)v73 + v75) - 7567 * *(_DWORD *)v73;
    v81 = *((_DWORD *)v73 - 2);
    v82 = 2217 * (*(_DWORD *)v73 + v75) + 3135 * v75;
    v83 = v81 + v79;
    v84 = (v79 - v81) << 12;
    v83 <<= 12;
    v85 = v84 + v80;
    v86 = v84 - v80;
    v87 = *((_DWORD *)v73 - 5);
    v88 = v83 + v82 + 16842752;
    v89 = v85 + 16842752;
    v90 = v86 + 16842752;
    v91 = v83 - v82 + 16842752;
    v92 = 4816 * (v77 + v87 + v76 + v78) - 3685 * (v76 + v87);
    v93 = -1597 * (v77 + v87);
    v94 = 4816 * (v77 + v87 + v76 + v78) - 10497 * (v77 + v78);
    v95 = -8034 * (v76 + v78);
    v96 = v94 + v93 + 8410 * v77;
    v112 = v92 + v93 + 6149 * v87;
    v97 = v95 + v92 + 1223 * v76;
    v98 = v95 + 12586 * v78;
    v99 = v112;
    v100 = v94 + v98;
    v101 = (v112 + v88) >> 17;
    if ( (unsigned int)v101 > 0xFF )
    {
      if ( v101 >= 0 )
        LOBYTE(v101) = -1;
      else
        LOBYTE(v101) = 0;
    }
    *(v74 - 1) = v101;
    v102 = (v88 - v99) >> 17;
    if ( (unsigned int)v102 > 0xFF )
    {
      if ( v102 >= 0 )
        LOBYTE(v102) = -1;
      else
        LOBYTE(v102) = 0;
    }
    v74[6] = v102;
    v103 = (v89 + v100) >> 17;
    if ( (unsigned int)v103 > 0xFF )
    {
      if ( v103 >= 0 )
        LOBYTE(v103) = -1;
      else
        LOBYTE(v103) = 0;
    }
    *v74 = v103;
    v104 = (v89 - v100) >> 17;
    if ( (unsigned int)v104 > 0xFF )
    {
      if ( v104 >= 0 )
        LOBYTE(v104) = -1;
      else
        LOBYTE(v104) = 0;
    }
    v74[5] = v104;
    v105 = (v90 + v96) >> 17;
    if ( (unsigned int)v105 > 0xFF )
    {
      if ( v105 >= 0 )
        LOBYTE(v105) = -1;
      else
        LOBYTE(v105) = 0;
    }
    v74[1] = v105;
    v106 = (v90 - v96) >> 17;
    if ( (unsigned int)v106 > 0xFF )
    {
      if ( v106 >= 0 )
        LOBYTE(v106) = -1;
      else
        LOBYTE(v106) = 0;
    }
    v74[4] = v106;
    v107 = (v91 + v97) >> 17;
    if ( (unsigned int)v107 > 0xFF )
    {
      if ( v107 >= 0 )
        LOBYTE(v107) = -1;
      else
        LOBYTE(v107) = 0;
    }
    v74[2] = v107;
    v108 = (v91 - v97) >> 17;
    if ( (unsigned int)v108 > 0xFF )
    {
      if ( v108 >= 0 )
        LOBYTE(v108) = -1;
      else
        LOBYTE(v108) = 0;
    }
    v109 = v115;
    v73 = (__int64 *)(v113 + 32);
    v74[3] = v108;
    v74 += v109;
    v110 = v114-- == 1;
    v113 = (__int64)v73;
  }
  while ( !v110 );
  return sub_1401F8B20((unsigned __int64)&v112 ^ v117[28]);
}
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117

// 1401634D2: conditional instruction was optimized away because eax.4>=100
// 1401634F6: conditional instruction was optimized away because ebp.4>=100
// 14016351A: conditional instruction was optimized away because eax.4>=100
// 140163543: conditional instruction was optimized away because r12d.4>=100
// 140163567: conditional instruction was optimized away because eax.4>=100
// 140163590: conditional instruction was optimized away because r14d.4>=100
// 1401635B4: conditional instruction was optimized away because eax.4>=100
// 1401635DD: conditional instruction was optimized away because r15d.4>=100

//----- (0000000140163640) ----------------------------------------------------
__int64            sub_140163640(_QWORD *a1, int a2,      __m128i *a3)
{
  __m128i v3; // xmm3
  __m128i v4; // xmm5
  __m128i v5; // xmm4
  __m128i v6; // xmm2
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __m128i v9; // xmm6
  __m128i v10; // xmm10
  __m128i v11; // xmm11
  __m128i v12; // xmm8
  __m128i v13; // xmm0
  __m128i v14; // xmm10
  __m128i v15; // xmm2
  __m128i v16; // xmm14
  __m128i v17; // xmm13
  __m128i v18; // xmm1
  __m128i v19; // xmm15
  __m128i v20; // xmm6
  __m128i v21; // xmm7
  __m128i v22; // xmm5
  __m128i v23; // xmm0
  __m128i v24; // xmm11
  __m128i v25; // xmm8
  __m128i v26; // xmm2
  __m128i v27; // xmm8
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm12
  __m128i v32; // xmm3
  __m128i v33; // xmm15
  __m128i v34; // xmm9
  __m128i v35; // xmm10
  __m128i v36; // xmm13
  __m128i v37; // xmm11
  __m128i si128; // xmm4
  __m128i v39; // xmm6
  __m128i v40; // xmm8
  __m128i v41; // xmm7
  __m128i v42; // xmm0
  __m128i v43; // xmm2
  __m128i v44; // xmm8
  __m128i v45; // xmm5
  __m128i v46; // xmm6
  __m128i v47; // xmm5
  __m128i v48; // xmm6
  __m128i v49; // xmm2
  __m128i v50; // xmm8
  __m128i v51; // xmm1
  __m128i v52; // xmm15
  __m128i v53; // xmm14
  __m128i v54; // xmm5
  __m128i v55; // xmm0
  __m128i v56; // xmm15
  __m128i v57; // xmm1
  __m128i v58; // xmm4
  __m128i v59; // xmm3
  __m128i v60; // xmm0
  __m128i v61; // xmm2
  __m128i v62; // xmm7
  __m128i v63; // xmm6
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm2
  __m128i v67; // xmm3
  __m128i v68; // xmm14
  __m128i v69; // xmm6
  __m128i v70; // xmm7
  __m128i v71; // xmm0
  __m128i v72; // xmm2
  __m128i v73; // xmm1
  __m128i v74; // xmm14
  __m128i v75; // xmm3
  __m128i v76; // xmm6
  __m128i v77; // xmm15
  __m128i v78; // xmm7
  __m128i v79; // xmm4
  __m128i v80; // xmm5
  __m128i v81; // xmm8
  __m128i v82; // xmm5
  __m128i v83; // xmm0
  __m128i v84; // xmm2
  __m128i v85; // xmm13
  __m128i v86; // xmm15
  __m128i v87; // xmm9
  __m128i v88; // xmm13
  __m128i v89; // xmm0
  __m128i v90; // xmm3
  __m128i v91; // xmm4
  __m128i v92; // xmm14
  __m128i v93; // xmm12
  __m128i v94; // xmm8
  __m128i v95; // xmm5
  __m128i v96; // xmm0
  __m128i v97; // xmm10
  __m128i v98; // xmm1
  __m128i v99; // xmm15
  __m128i v100; // xmm0
  __m128i v101; // xmm8
  __m128i v102; // xmm14
  __m128i v103; // xmm2
  __m128i v104; // xmm3
  __m128i v105; // xmm11
  __m128i v106; // xmm5
  __m128i v107; // xmm4
  __m128i v108; // xmm7
  __m128i v109; // xmm5
  __m128i v110; // xmm6
  __m128i v111; // xmm7
  __m128i v112; // xmm8
  __m128i v113; // xmm12
  __m128i v114; // xmm2
  __m128i v115; // xmm12
  __m128i v116; // xmm9
  __m128i v117; // xmm3
  __m128i v118; // xmm11
  __m128i v119; // xmm1
  __m128i v120; // xmm8
  __m128i v121; // xmm0
  __m128i v122; // xmm12
  __m128i v123; // xmm11
  __m128i v124; // xmm4
  __m128i v125; // xmm3
  __m128i v126; // xmm14
  __m128i v127; // xmm9
  __m128i v128; // xmm2
  __m128i v130; // xmm12
  __m128i v131; // xmm1
  __m128i v132; // xmm0
  __m128i v133; // xmm4
  __m128i v134; // xmm9
  __m128i v135; // xmm3
  __m128i v136; // xmm4
  __m128i v137; // xmm2
  __m128i v138; // xmm0
  __m128i v139; // xmm1
  _QWORD *v140; // rcx
  __m128i v141; // xmm3
  __m128i v142; // xmm9
  __m128i v143; // xmm2
  __m128i v144; // xmm4
  _QWORD *v145; // rcx
  _QWORD *v146; // rcx
  _QWORD *v147; // rcx
  _QWORD *v148; // rcx
  _QWORD *v149; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163640[128];
#define v150 (*(__m128i (*))(void *)(sr_frame_140163640 + 0)) /* [rsp+0h] */
#define v151 (*(__m128i (*))(void *)(sr_frame_140163640 + 16)) /* [rsp+10h] */
#define v152 (*(__m128i (*))(void *)(sr_frame_140163640 + 32)) /* [rsp+20h] */
#define v153 (*(__m128i (*))(void *)(sr_frame_140163640 + 48)) /* [rsp+30h] */
#define v154 (*(__m128i (*))(void *)(sr_frame_140163640 + 64)) /* [rsp+40h] */
#define v155 (*(__m128i (*))(void *)(sr_frame_140163640 + 80)) /* [rsp+50h] */
#define v156 (*(__m128i (*))(void *)(sr_frame_140163640 + 96)) /* [rsp+60h] */
#define v157 (*(__m128i (*))(void *)(sr_frame_140163640 + 112)) /* [rsp+70h] */

  v3 = _mm_loadu_si128(a3 + 1);
  v4 = _mm_loadu_si128(a3 + 5);
  v5 = _mm_loadu_si128(a3 + 3);
  v6 = _mm_loadu_si128(a3);
  v7 = _mm_loadu_si128(a3 + 2);
  v8 = _mm_unpackhi_epi16(v7, a3[6]);
  v9 = _mm_unpacklo_epi16(v7, a3[6]);
  v10 = _mm_loadu_si128(a3 + 7);
  v156 = _mm_madd_epi16(v8, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v11 = v10;
  v12 = _mm_add_epi16(v10, v3);
  v13 = _mm_add_epi16(_mm_loadu_si128(a3 + 4), v6);
  v14 = _mm_unpacklo_epi16(v10, v5);
  v15 = _mm_sub_epi16(v6, a3[4]);
  v16 = v9;
  v17 = _mm_madd_epi16(v14, _mm_load_si128((const __m128i *)&xmmword_140279940));
  v153 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v13), 4u);
  v155 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v15), 4u);
  v18 = _mm_srai_epi32(_mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v13), 4u);
  v19 = _mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v15);
  v152 = _mm_madd_epi16(v9, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v20 = _mm_unpacklo_epi16(v4, v3);
  v154 = _mm_madd_epi16(v8, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v21 = _mm_unpackhi_epi16(v4, v3);
  v22 = _mm_add_epi16(v4, v5);
  v23 = _mm_unpacklo_epi16(v12, v22);
  v24 = _mm_unpackhi_epi16(v11, v5);
  v25 = _mm_unpackhi_epi16(v12, v22);
  v26 = _mm_madd_epi16(v25, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v27 = _mm_madd_epi16(v25, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v151 = v18;
  v28 = v23;
  v29 = _mm_madd_epi16(v23, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v30 = _mm_madd_epi16(v28, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v31 = _mm_add_epi32(_mm_madd_epi16(v24, _mm_load_si128((const __m128i *)&xmmword_140279940)), v26);
  v157 = _mm_madd_epi16(v16, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v32 = _mm_add_epi32(_mm_madd_epi16(v21, _mm_load_si128((const __m128i *)&xmmword_140279980)), v27);
  v33 = _mm_srai_epi32(v19, 4u);
  v34 = _mm_add_epi32(_mm_madd_epi16(v20, _mm_load_si128((const __m128i *)&xmmword_140279980)), v29);
  v35 = _mm_add_epi32(_mm_madd_epi16(v14, _mm_load_si128((const __m128i *)&xmmword_140279210)), v29);
  v36 = _mm_add_epi32(v17, v30);
  v37 = _mm_add_epi32(_mm_madd_epi16(v24, _mm_load_si128((const __m128i *)&xmmword_140279210)), v27);
  si128 = _mm_load_si128((     __m128i *)&xmmword_1402791A0);
  v39 = _mm_add_epi32(_mm_madd_epi16(v20, _mm_load_si128((const __m128i *)&xmmword_140279220)), v30);
  v40 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&v153), v152), si128);
  v41 = _mm_add_epi32(_mm_madd_epi16(v21, _mm_load_si128((const __m128i *)&xmmword_140279220)), v26);
  v42 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&v151), v154), si128);
  v43 = _mm_srai_epi32(_mm_add_epi32(v40, v39), 0xAu);
  v44 = _mm_sub_epi32(v40, v39);
  v45 = _mm_load_si128(&v155);
  v46 = _mm_sub_epi32(v45, v157);
  v47 = _mm_add_epi32(_mm_add_epi32(v45, v157), si128);
  v150 = _mm_packs_epi32(v43, _mm_srai_epi32(_mm_add_epi32(v42, v41), 0xAu));
  v48 = _mm_add_epi32(v46, si128);
  v49 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&v153), v152), _mm_load_si128((const __m128i *)&xmmword_1402791A0));
  v50 = _mm_packs_epi32(_mm_srai_epi32(v44, 0xAu), _mm_srai_epi32(_mm_sub_epi32(v42, v41), 0xAu));
  v51 = _mm_add_epi32(_mm_add_epi32(v33, v156), si128);
  v52 = _mm_add_epi32(_mm_sub_epi32(v33, v156), si128);
  v53 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v47, v35), 0xAu), _mm_srai_epi32(_mm_add_epi32(v51, v37), 0xAu));
  v54 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v47, v35), 0xAu), _mm_srai_epi32(_mm_sub_epi32(v51, v37), 0xAu));
  v55 = _mm_add_epi32(v52, v32);
  v56 = _mm_sub_epi32(v52, v32);
  v57 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&v151), v154), _mm_load_si128((const __m128i *)&xmmword_1402791A0));
  v58 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v48, v34), 0xAu), _mm_srai_epi32(v55, 0xAu));
  v59 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v49, v36), 0xAu), _mm_srai_epi32(_mm_add_epi32(v57, v31), 0xAu));
  v60 = _mm_load_si128(&v150);
  v61 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v49, v36), 0xAu), _mm_srai_epi32(_mm_sub_epi32(v57, v31), 0xAu));
  v62 = _mm_unpacklo_epi16(v60, v61);
  v63 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v48, v34), 0xAu), _mm_srai_epi32(v56, 0xAu));
  v150 = _mm_unpackhi_epi16(v60, v61);
  v64 = _mm_unpacklo_epi16(v59, v50);
  v65 = _mm_unpacklo_epi16(v58, v54);
  v66 = _mm_unpacklo_epi16(v53, v63);
  v67 = _mm_unpackhi_epi16(v59, v50);
  v68 = _mm_unpackhi_epi16(v53, v63);
  v69 = _mm_unpacklo_epi16(v62, v65);
  v70 = _mm_unpackhi_epi16(v62, v65);
  v71 = _mm_unpacklo_epi16(v66, v64);
  v72 = _mm_unpackhi_epi16(v66, v64);
  v73 = _mm_unpacklo_epi16(v68, v67);
  v74 = _mm_unpackhi_epi16(v68, v67);
  v75 = _mm_unpacklo_epi16(v69, v71);
  v76 = _mm_unpackhi_epi16(v69, v71);
  v77 = _mm_unpacklo_epi16(v70, v72);
  v78 = _mm_unpackhi_epi16(v70, v72);
  v79 = _mm_unpackhi_epi16(v58, v54);
  v80 = _mm_load_si128(&v150);
  v81 = _mm_unpackhi_epi16(v80, v79);
  v82 = _mm_unpacklo_epi16(v80, v79);
  v83 = _mm_unpacklo_epi16(v81, v74);
  v84 = _mm_unpacklo_epi16(v82, v73);
  v85 = _mm_unpacklo_epi16(v77, v83);
  v86 = _mm_unpackhi_epi16(v77, v83);
  v87 = _mm_madd_epi16(v85, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v88 = _mm_madd_epi16(v85, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v89 = _mm_add_epi16(v84, v75);
  v90 = _mm_sub_epi16(v75, v84);
  v91 = _mm_unpackhi_epi16(v81, v74);
  v92 = _mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v89);
  v93 = _mm_unpackhi_epi16(v82, v73);
  v153 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v90), 4u);
  v94 = _mm_add_epi16(v91, v76);
  v152 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v89), 4u);
  v95 = _mm_add_epi16(v93, v78);
  v151 = _mm_srai_epi32(_mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v90), 4u);
  v96 = _mm_unpacklo_epi16(v94, v95);
  v97 = _mm_madd_epi16(v86, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v98 = _mm_madd_epi16(v96, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v99 = _mm_madd_epi16(v86, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v100 = _mm_madd_epi16(v96, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v101 = _mm_unpackhi_epi16(v94, v95);
  v102 = _mm_srai_epi32(v92, 4u);
  v103 = _mm_madd_epi16(v101, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v104 = _mm_unpacklo_epi16(v91, v78);
  v105 = _mm_unpacklo_epi16(v93, v76);
  v106 = _mm_unpackhi_epi16(v91, v78);
  v107 = _mm_madd_epi16(v106, _mm_load_si128((const __m128i *)&xmmword_140279210));
  v108 = _mm_unpackhi_epi16(v93, v76);
  v150 = _mm_madd_epi16(v101, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v109 = _mm_add_epi32(_mm_madd_epi16(v106, _mm_load_si128((const __m128i *)&xmmword_140279940)), v103);
  v154 = _mm_add_epi32(_mm_madd_epi16(v108, _mm_load_si128((const __m128i *)&xmmword_140279220)), v103);
  v110 = _mm_add_epi32(_mm_madd_epi16(v104, _mm_load_si128((const __m128i *)&xmmword_140279940)), v98);
  v111 = _mm_add_epi32(_mm_madd_epi16(v108, _mm_load_si128((const __m128i *)&xmmword_140279980)), v150);
  v112 = v105;
  v113 = _mm_load_si128(&v153);
  v114 = _mm_sub_epi32(v113, v87);
  v115 = _mm_add_epi32(v113, v87);
  v155 = _mm_add_epi32(v107, v150);
  v116 = _mm_sub_epi32(_mm_load_si128(&v151), v97);
  v156 = _mm_add_epi32(_mm_madd_epi16(v104, _mm_load_si128((const __m128i *)&xmmword_140279210)), v100);
  v117 = _mm_load_si128(&v151);
  v118 = _mm_add_epi32(_mm_madd_epi16(v105, _mm_load_si128((const __m128i *)&xmmword_140279220)), v98);
  v119 = _mm_load_si128((     __m128i *)&xmmword_1402791E0);
  v120 = _mm_add_epi32(_mm_madd_epi16(v112, _mm_load_si128((const __m128i *)&xmmword_140279980)), v100);
  v121 = _mm_load_si128(&v152);
  v151 = _mm_add_epi32(v116, v119);
  v122 = _mm_add_epi32(v115, v119);
  v157 = v118;
  v153 = _mm_add_epi32(v114, v119);
  v152 = _mm_add_epi32(_mm_sub_epi32(v121, v88), v119);
  v123 = _mm_add_epi32(_mm_add_epi32(v121, v88), v119);
  v124 = _mm_add_epi32(_mm_add_epi32(v102, v99), v119);
  v125 = _mm_add_epi32(_mm_add_epi32(v117, v97), v119);
  v126 = _mm_add_epi32(_mm_sub_epi32(v102, v99), v119);
  v127 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v123, v157), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v124, v154), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v122, v156), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v125, v155), 0x11u)));
  v128 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v153, v120), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&v151), v111), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&v152), v110), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v126, v109), 0x11u)));
  v130 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(v122, v156), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v125, v155), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(v123, v157), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v124, v154), 0x11u)));
  v131 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v152), v110), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v126, v109), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v153), v120), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v151), v111), 0x11u)));
  v132 = _mm_unpacklo_epi8(v128, v130);
  v133 = _mm_unpacklo_epi8(v127, v131);
  v134 = _mm_unpackhi_epi8(v127, v131);
  v135 = _mm_unpacklo_epi8(v133, v132);
  v136 = _mm_unpackhi_epi8(v133, v132);
  v137 = _mm_unpackhi_epi8(v128, v130);
  v138 = _mm_unpacklo_epi8(v134, v137);
  v139 = _mm_unpacklo_epi8(v135, v138);
  *a1 = SR_VEC_LANES(128, v139, i64)[0];
  v140 = (_QWORD *)((char *)a1 + a2);
  v141 = _mm_unpackhi_epi8(v135, v138);
  v142 = _mm_unpackhi_epi8(v134, v137);
  v143 = _mm_unpacklo_epi8(v136, v142);
  v144 = _mm_unpackhi_epi8(v136, v142);
  *v140 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v139, 78), u64)[0];
  v145 = (_QWORD *)((char *)v140 + a2);
  *v145 = SR_VEC_LANES(128, v141, i64)[0];
  v146 = (_QWORD *)((char *)v145 + a2);
  *v146 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v141, 78), u64)[0];
  v147 = (_QWORD *)((char *)v146 + a2);
  *v147 = SR_VEC_LANES(128, v143, i64)[0];
  v148 = (_QWORD *)((char *)v147 + a2);
  *v148 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v143, 78), u64)[0];
  v149 = (_QWORD *)((char *)v148 + a2);
  *v149 = SR_VEC_LANES(128, v144, i64)[0];
  *(_QWORD *)((char *)v149 + a2) = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v144, 78), u64)[0];
  return a2;
}
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157

// 1402791A0: using guessed type __int128 xmmword_1402791A0;
// 1402791E0: using guessed type __int128 xmmword_1402791E0;
// 1402791F0: using guessed type __int128 xmmword_1402791F0;
// 140279210: using guessed type __int128 xmmword_140279210;
// 140279220: using guessed type __int128 xmmword_140279220;
// 140279230: using guessed type __int128 xmmword_140279230;
// 140279940: using guessed type __int128 xmmword_140279940;
// 140279950: using guessed type __int128 xmmword_140279950;
// 140279960: using guessed type __int128 xmmword_140279960;
// 140279980: using guessed type __int128 xmmword_140279980;

//----- (0000000140163E70) ----------------------------------------------------
__int64            sub_140163E70(__int64 a1, char *a2, char *a3, unsigned int *a4)
{
  int *v7; // r14
  __int64 *v8; // rbx
  int *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int *v13; // rbx
  _QWORD *v14; // r13
  __int64 *v15; // r12
  __int64 v16; // rax
  int *v17; // rax
  char *v18; // rax
  unsigned int *v19; // rax
  int v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // ebx
  int *v26; // rax
  char *v27; // rax
  unsigned int *v28; // rax
       char *v29; // rax
  int v30; // eax
  _DWORD *i; // rcx
  int v32; // eax
  __int64 v33; // r10
  unsigned int v34; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163E70[1168];
#define v36 (*(__int64 (*))(void *)(sr_frame_140163E70 + 0)) /* [rsp+0h] */
#define v37 (*(char (*))(void *)(sr_frame_140163E70 + 32)) /* [rsp+20h] */
#define v38 (*(_DWORD * (*))(void *)(sr_frame_140163E70 + 40)) /* [rsp+28h] */
#define v39 (*(int * (*))(void *)(sr_frame_140163E70 + 48)) /* [rsp+30h] */
#define v40 (*(_DWORD * (*))(void *)(sr_frame_140163E70 + 56)) /* [rsp+38h] */
#define v41 (*(char * (*))(void *)(sr_frame_140163E70 + 64)) /* [rsp+40h] */
#define v42 (*(unsigned int * (*))(void *)(sr_frame_140163E70 + 72)) /* [rsp+48h] */
#define v43 (*(_QWORD (*)[3])(void *)(sr_frame_140163E70 + 80)) /* [rsp+50h] */
#define v44 (*(int (*))(void *)(sr_frame_140163E70 + 104)) /* [rsp+68h] */
#define v45 (*(int (*))(void *)(sr_frame_140163E70 + 108)) /* [rsp+6Ch] */
#define v46 (*(_BYTE (*)[1024])(void *)(sr_frame_140163E70 + 128)) /* [rsp+80h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140163E70 + 1152)) /* [rsp+480h] */

  v41 = a2;
  v7 = (int *)a2;
  v8 = (__int64 *)sr_path_malloc(18568);
  *v8 = a1;
  if ( sub_14015F960(v8, 2) )
  {
    if ( v7 )
      *v7 = *(_DWORD *)*v8;
    if ( a3 )
      *(_DWORD *)a3 = *(_DWORD *)(*v8 + 4);
    if ( a4 )
    {
      v34 = 1;
      if ( *(int *)(*v8 + 8) >= 3 )
        v34 = 3;
      *a4 = v34;
    }
    free(v8);
  }
  else
  {
    v9 = (int *)*v8;
    v10 = *(_QWORD *)(*v8 + 216);
    *((_QWORD *)v9 + 24) = *(_QWORD *)(*v8 + 208);
    *((_QWORD *)v9 + 25) = v10;
    free(v8);
    v43[0] = a1;
    v11 = sub_140167D10((__int64)v43, 2, 0);
    v12 = v43[0];
    if ( v11 )
    {
      if ( v7 )
        *v7 = *(_DWORD *)v43[0];
      if ( a3 )
        *(_DWORD *)a3 = *(_DWORD *)(v12 + 4);
      if ( a4 )
        *a4 = *(_DWORD *)(v12 + 8);
    }
    else
    {
      *(_QWORD *)(v43[0] + 192LL) = *(_QWORD *)(v43[0] + 208LL);
      *(_QWORD *)(v12 + 200) = *(_QWORD *)(v12 + 216);
      v13 = (int *)sr_path_malloc(34928);
      if ( (unsigned int)sub_140160930(a1, v13, a4, 1) )
      {
        if ( v7 )
          *v7 = *v13;
        if ( a3 )
          *(_DWORD *)a3 = v13[1];
        free(v13);
      }
      else
      {
        free(v13);
        v14 = (_QWORD *)(a1 + 208);
        v45 = 255;
        v15 = (__int64 *)(a1 + 216);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        v16 = sub_14015C5E0(a1, (__int64)v43);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        if ( v16 )
        {
          if ( v7 )
            *v7 = *(_DWORD *)a1;
          if ( a3 )
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 4);
          if ( a4 )
          {
            if ( LODWORD(v43[0]) == 24 && v44 == -16777216 )
              *a4 = 3;
            else
              *a4 = (v44 != 0) + 3;
          }
        }
        else
        {
          v17 = (int *)&v37;
          if ( v7 )
            v17 = v7;
          v39 = v17;
          v18 = &v37;
          if ( a3 )
            v18 = a3;
          v38 = v18;
          v19 = (unsigned int *)&v37;
          if ( a4 )
            v19 = a4;
          v40 = v19;
          v20 = sub_1401604F0(a1);
          if ( (v20 << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 || (unsigned int)sub_1401604F0(a1) != 1 )
            goto LABEL_21;
          if ( *(_QWORD *)(a1 + 16) && (v21 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v21 < 6) )
          {
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v21));
          }
          else
          {
            *(_QWORD *)(a1 + 192) += 6LL;
          }
          if ( (unsigned int)sub_1401604F0(a1) <= 0x10
            && (v22 = sub_140160670(a1),
                *v38 = v22,
                v23 = sub_140160670(a1),
                *v39 = v23,
                (((unsigned int)sub_1401604F0(a1) - 8) & 0xFFFFFFF7) == 0)
            && (unsigned int)sub_1401604F0(a1) == 3 )
          {
            *v40 = 4;
          }
          else
          {
LABEL_21:
            v24 = *v15;
            *(_QWORD *)(a1 + 192) = *v14;
            *(_QWORD *)(a1 + 200) = v24;
            if ( !(unsigned int)sub_1401691A0(a1, v7, (int *)a3, (char *)a4)
              && !(unsigned int)sub_14016A7D0(a1, (char *)v7, a3, (int *)a4) )
            {
              v25 = 0;
              v26 = (int *)&v37;
              if ( v7 )
                v26 = v7;
              v39 = v26;
              v27 = &v37;
              if ( a3 )
                v27 = a3;
              v40 = v27;
              v28 = (unsigned int *)&v37;
              if ( a4 )
                v28 = a4;
              v42 = v28;
              if ( !(unsigned int)sub_140162BB0(a1) )
                goto LABEL_40;
              v29 = (     char *)sub_140162030(a1, (__int64)v46);
              v38 = v29;
              if ( !*v29 )
                goto LABEL_40;
              do
              {
                if ( !strcmp_sr(v29, "FORMAT=32-bit_rle_rgbe") )
                  v25 = 1;
                v29 = (     char *)sub_140162030(a1, (__int64)v46);
                v38 = v29;
              }
              while ( *v29 );
              v7 = (int *)v41;
              if ( !v25 )
                goto LABEL_40;
              v38 = (_DWORD *)sub_140162030(a1, (__int64)v46);
              if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v38), (const char *)(uintptr_t)("-Y "), 3) )
                goto LABEL_40;
              v38 = (_DWORD *)((char *)v38 + 3);
              v30 = sub_14023CCCC((__int64)v38, (__int64 *)&v38, 0xAu);
              *v40 = v30;
              for ( i = v38; *(_BYTE *)i == 32; v38 = i )
                i = (_DWORD *)((char *)i + 1);
              if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(i), (const char *)(uintptr_t)("+X "), 3) )
              {
                v38 = (_DWORD *)((char *)v38 + 3);
                v32 = sub_14023CCCC((__int64)v38, nullptr, 0xAu);
                *v39 = v32;
                *v42 = 3;
              }
              else
              {
LABEL_40:
                v33 = *v15;
                *(_QWORD *)(a1 + 192) = *v14;
                *(_QWORD *)(a1 + 200) = v33;
                if ( !(unsigned int)sub_14016E370(a1, v7, (int *)a3, a4) )
                  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
              }
            }
          }
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401643B0) ----------------------------------------------------
__int64            sub_1401643B0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  _QWORD *v5; // rbx
  int v6; // ecx
  __int64 v7; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401643B0[48];
#define v9 (*(__int64 (*)[4])(void *)(sr_frame_1401643B0 + 0)) /* [rsp+20h] */
#define v10 (*(int (*))(void *)(sr_frame_1401643B0 + 32)) /* [rsp+40h] */

  v9[0] = a1;
  if ( (unsigned int)sub_140167D10((__int64)v9, 2, 0) )
  {
    if ( v10 == 16 )
      return 1;
    v3 = v9[0];
    *(_QWORD *)(v9[0] + 192) = *(_QWORD *)(v9[0] + 208);
    *(_QWORD *)(v3 + 200) = *(_QWORD *)(v3 + 216);
  }
  else
  {
    v2 = v9[0];
    *(_QWORD *)(v9[0] + 192) = *(_QWORD *)(v9[0] + 208);
    *(_QWORD *)(v2 + 200) = *(_QWORD *)(v2 + 216);
  }
  v4 = sub_1401604F0(a1);
  if ( (v4 << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 || (unsigned int)sub_1401604F0(a1) != 1 )
  {
    v5 = (_QWORD *)(a1 + 192);
LABEL_14:
    v7 = *(_QWORD *)(a1 + 216);
    *v5 = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = v7;
    return 0;
  }
  v5 = (_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (v6 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v5, v6 < 6) )
  {
    *v5 = *(_QWORD *)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v6));
  }
  else
  {
    *v5 += 6LL;
  }
  if ( (unsigned int)sub_1401604F0(a1) > 0x10 )
    goto LABEL_14;
  sub_140160670(a1);
  sub_140160670(a1);
  if ( (unsigned int)sub_1401604F0(a1) != 16 )
    goto LABEL_14;
  return 1;
}
#undef v9
#undef v10


//----- (0000000140164500) ----------------------------------------------------
__int64            sub_140164500(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, _WORD *a7)
{
  unsigned int v11; // r10d
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  signed int v16; // edi
  unsigned int *v17; // rax
  int i; // edi
  int v19; // r11d
  __int64 v20; // r9
  __int64 v21; // r14
  signed int v22; // r9d
  int v23; // r8d
  int v24; // r10d
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // edx
  int v28; // r8d
  int v29; // esi
  __int64 v30; // rcx
  int v31; // edx
  int v32; // r8d
  unsigned int v33; // edx
  unsigned __int64 v34; // rax
  int v35; // r9d
  int v36; // ecx
  int v37; // esi
  __int64 v38; // rax
  unsigned int v39; // r10d
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // r9d
  __int64 v43; // rax
  int v44; // ecx
  int v45; // r10d
  int v46; // r9d
  unsigned int v47; // eax
  unsigned int v48; // r10d
  unsigned int *v49; // rax
  int v50; // edi
  __int64 j; // r8
  int v52; // r9d
  unsigned int v53; // r10d
  __int64 v54; // r14
  int v55; // edx
  __int64 v56; // rdi
  int v57; // esi
  __int64 v58; // rax
  __int64 v59; // r14
  int v60; // r9d
  int v61; // eax
  __int16 v62; // dx

  if ( *(int *)(a1 + 18468) < 16 )
  {
    sub_140161D20((_QWORD *)a1);
    if ( *(int *)(a1 + 18468) < 16 )
      sub_140161D20((_QWORD *)a1);
  }
  v11 = *(_DWORD *)(a1 + 18464);
  v12 = *(unsigned __int8 *)(((unsigned __int64)v11 >> 23) + a3);
  if ( (_BYTE)v12 != 0xFF )
  {
    v13 = *(_DWORD *)(a1 + 18468);
    v14 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a3);
    v15 = *(unsigned __int8 *)(v12 + a3 + 1280);
    if ( v15 > v13 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 18464) = v11 << v15;
    *(_DWORD *)(a1 + 18468) = v13 - v15;
    v16 = *(unsigned __int8 *)(v14 + a3 + 1024);
    goto LABEL_16;
  }
  v17 = (unsigned int *)(a3 + 1580);
  for ( i = 10; HIWORD(v11) >= *v17; ++v17 )
    ++i;
  v19 = *(_DWORD *)(a1 + 18468);
  if ( i != 17 )
  {
    if ( i > v19 )
      goto LABEL_48;
    v20 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v11 >> (32 - i))));
    v21 = v20 + a3;
    if ( (dword_14026FBF0[*(unsigned __int8 *)(v20 + a3 + 1280)] & (v11 >> (32 - *(_BYTE *)(v20 + a3 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v20 + 512) )
    {
      sub_14023E640(
        (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x81Au);
      v19 = *(_DWORD *)(a1 + 18468);
      v11 = *(_DWORD *)(a1 + 18464);
    }
    *(_DWORD *)(a1 + 18464) = v11 << i;
    *(_DWORD *)(a1 + 18468) = v19 - i;
    v16 = *(unsigned __int8 *)(v21 + 1024);
LABEL_16:
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
    if ( !v16 )
      goto LABEL_21;
    v22 = *(_DWORD *)(a1 + 18468);
    if ( v22 < v16 )
    {
      sub_140161D20((_QWORD *)a1);
      v22 = *(_DWORD *)(a1 + 18468);
    }
    v23 = *(_DWORD *)(a1 + 18464);
    v24 = __ROL4__(v23, v16);
    if ( (unsigned int)v16 < 0x11 )
    {
      *(_DWORD *)(a1 + 18468) = v22 - v16;
      v25 = v16;
      v26 = dword_14026FC40[v25] & ~(v23 >> 31);
      v27 = v24 & dword_14026FBF0[v25];
      *(_DWORD *)(a1 + 18464) = v24 & ~dword_14026FBF0[v25];
      v28 = v27 + v26;
    }
    else
    {
LABEL_21:
      v28 = 0;
    }
    v29 = 1;
    v30 = 96LL * a6;
    v31 = v28 + *(_DWORD *)(v30 + a1 + 18104);
    *(_DWORD *)(v30 + a1 + 18104) = v31;
    *(_WORD *)a2 = *a7 * v31;
    while ( 1 )
    {
      v32 = *(_DWORD *)(a1 + 18468);
      if ( v32 < 16 )
      {
        sub_140161D20((_QWORD *)a1);
        v32 = *(_DWORD *)(a1 + 18468);
      }
      v33 = *(_DWORD *)(a1 + 18464);
      v34 = (unsigned __int64)v33 >> 23;
      v35 = *(__int16 *)(a5 + 2 * v34);
      if ( *(_WORD *)(a5 + 2 * v34) )
      {
        v36 = v35 & 0xF;
        v37 = ((v35 >> 4) & 0xF) + v29;
        *(_DWORD *)(a1 + 18464) = v33 << v36;
        v38 = v37;
        v29 = v37 + 1;
        *(_DWORD *)(a1 + 18468) = v32 - v36;
        *((_WORD *)a2 + byte_14026FC80[v38]) = (v35 >> 8) * a7[byte_14026FC80[v38]];
      }
      else
      {
        v39 = *(_DWORD *)(a1 + 18464);
        if ( v32 < 16 )
        {
          sub_140161D20((_QWORD *)a1);
          v33 = *(_DWORD *)(a1 + 18464);
          v39 = v33;
        }
        v40 = (unsigned __int64)v39 >> 23;
        v41 = *(unsigned __int8 *)(v40 + a4);
        if ( (_BYTE)v41 == 0xFF )
        {
          v48 = HIWORD(v39);
          v49 = (unsigned int *)(a4 + 1580);
          v50 = 10;
          for ( j = 10; v48 >= *v49; ++j )
          {
            ++v50;
            ++v49;
          }
          v52 = *(_DWORD *)(a1 + 18468);
          if ( v50 == 17 )
          {
            *(_DWORD *)(a1 + 18468) = v52 - 16;
            goto LABEL_48;
          }
          if ( v50 > v52 )
            goto LABEL_48;
          v53 = v33;
          v54 = (int)(*(_DWORD *)(a4 + 4 * j + 1612) + (dword_14026FBF0[j] & (v33 >> (32 - v50))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(v54 + a4 + 1280)] & (v33 >> (32 - *(_BYTE *)(v54 + a4 + 1280)))) != *(unsigned __int16 *)(a4 + 2 * v54 + 512) )
          {
            sub_14023E640(
              (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x81Au);
            v52 = *(_DWORD *)(a1 + 18468);
            v53 = *(_DWORD *)(a1 + 18464);
          }
          v46 = v52 - v50;
          v45 = v53 << v50;
          *(_DWORD *)(a1 + 18464) = v45;
          *(_DWORD *)(a1 + 18468) = v46;
          v47 = *(unsigned __int8 *)(v54 + a4 + 1024);
        }
        else
        {
          v42 = *(_DWORD *)(a1 + 18468);
          v43 = *(unsigned __int8 *)(v40 + a4);
          v44 = *(unsigned __int8 *)(v41 + a4 + 1280);
          if ( v44 > v42 )
            goto LABEL_48;
          v45 = v39 << v44;
          v46 = v42 - v44;
          *(_DWORD *)(a1 + 18464) = v45;
          *(_DWORD *)(a1 + 18468) = v46;
          v47 = *(unsigned __int8 *)(v43 + a4 + 1024);
        }
        v55 = v46;
        v56 = v47 & 0xF;
        if ( (v47 & 0xF) != 0 )
        {
          v57 = (v47 >> 4) + v29;
          v58 = v57;
          v29 = v57 + 1;
          v59 = byte_14026FC80[v58];
          if ( v46 < (int)v56 )
          {
            sub_140161D20((_QWORD *)a1);
            v45 = *(_DWORD *)(a1 + 18464);
            v55 = *(_DWORD *)(a1 + 18468);
          }
          *(_DWORD *)(a1 + 18468) = v55 - v56;
          v60 = __ROL4__(v45, v56);
          v61 = dword_14026FBF0[v56];
          v62 = ~(unsigned __int16)(v45 >> 31) & dword_14026FC40[v56];
          *(_DWORD *)(a1 + 18464) = v60 & ~v61;
          *((_WORD *)a2 + v59) = ((v60 & v61) + v62) * a7[v59];
        }
        else
        {
          if ( v47 != 240 )
            return 1;
          v29 += 16;
        }
      }
      if ( v29 >= 64 )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18468) = v19 - 16;
LABEL_48:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
  return 0;
}

// 14026FBF0: using guessed type int dword_14026FBF0[20];
// 14026FC40: using guessed type int dword_14026FC40[16];
// 14026FC80: using guessed type unsigned __int8 byte_14026FC80[336];
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272560: using guessed type __int16[82];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140164A80) ----------------------------------------------------
__int64            sub_140164A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r10
  int v10; // eax
  int v11; // r15d
  int v12; // r8d
  unsigned int v13; // r9d
  unsigned __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r10d
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  int v26; // r10d
  int v27; // r9d
  unsigned int v28; // esi
  unsigned int v29; // edx
  unsigned int *v30; // rax
  int v31; // esi
  __int64 i; // r8
  int v33; // r10d
  __int64 v34; // rbp
  char v35; // bp
  int v36; // r11d
  __int64 v37; // rsi
  int v38; // ebp
  int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rsi
  int v42; // r8d
  int v43; // eax
  int v44; // r9d
  int v45; // r8d
  int v46; // r9d
  int v47; // r8d
  int v48; // edx
  int v49; // eax
  unsigned __int16 v50; // r14
  unsigned __int8 *v51; // rbp
  __int16 *v52; // rsi
  int v53; // edx
  int v54; // ecx
  __int16 v55; // ax
  __int16 v56; // ax
  __int64 v57; // r12
  unsigned int v58; // r10d
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // r9d
  __int64 v62; // rax
  int v63; // ecx
  int v64; // r10d
  int v65; // r9d
  unsigned int v66; // ebp
  unsigned int *v67; // rax
  int v68; // esi
  __int64 j; // r8
  int v70; // r9d
  __int64 v71; // rbp
  char v72; // r15
  __int64 v73; // rbp
  int v74; // r15d
  int v75; // edx
  int v76; // r10d
  int v77; // ecx
  int v78; // eax
  bool v79; // cc
  __int64 v80; // r10
  __int16 *v81; // rsi
  int v82; // edx
  int v83; // ecx
  __int16 v84; // ax
  __int16 v85; // ax

  v4 = *(int *)(a1 + 18484);
  v7 = a2;
  if ( !(_DWORD)v4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't merge dc and ac");
    return 0;
  }
  v10 = *(_DWORD *)(a1 + 18500);
  v11 = *(_DWORD *)(a1 + 18496);
  if ( !*(_DWORD *)(a1 + 18492) )
  {
    if ( v10 )
    {
      *(_DWORD *)(a1 + 18500) = v10 - 1;
      return 1;
    }
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 18468);
      if ( v12 < 16 )
      {
        sub_140161D20((_QWORD *)a1);
        v12 = *(_DWORD *)(a1 + 18468);
        v7 = a2;
      }
      v13 = *(_DWORD *)(a1 + 18464);
      v14 = (unsigned __int64)v13 >> 23;
      v15 = *(__int16 *)(a4 + 2 * v14);
      if ( *(_WORD *)(a4 + 2 * v14) )
      {
        v16 = v15 & 0xF;
        v17 = ((v15 >> 4) & 0xF) + v4;
        v18 = v17;
        LODWORD(v4) = v17 + 1;
        *(_DWORD *)(a1 + 18464) = v13 << v16;
        *(_DWORD *)(a1 + 18468) = v12 - v16;
        *(_WORD *)(v7 + 2LL * byte_14026FC80[v18]) = (unsigned __int16)(v15 >> 8) << v11;
      }
      else
      {
        v19 = *(_DWORD *)(a1 + 18464);
        if ( v12 < 16 )
        {
          sub_140161D20((_QWORD *)a1);
          v13 = *(_DWORD *)(a1 + 18464);
          v19 = v13;
        }
        v20 = (unsigned __int64)v19 >> 23;
        v21 = *(unsigned __int8 *)(v20 + a3);
        if ( (_BYTE)v21 == 0xFF )
        {
          v29 = HIWORD(v19);
          v30 = (unsigned int *)(a3 + 1580);
          v31 = 10;
          for ( i = 10; v29 >= *v30; ++i )
          {
            ++v31;
            ++v30;
          }
          v33 = *(_DWORD *)(a1 + 18468);
          if ( v31 == 17 )
          {
            v49 = v33 - 16;
            goto LABEL_94;
          }
          if ( v31 > v33 )
            goto LABEL_95;
          v34 = (int)(*(_DWORD *)(a3 + 4 * i + 1612) + (dword_14026FBF0[i] & (v13 >> (32 - v31))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(a3 + v34 + 1280)] & (v13 >> (32 - *(_BYTE *)(a3 + v34 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v34 + 512) )
          {
            sub_14023E640(
              (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x81Au);
            v33 = *(_DWORD *)(a1 + 18468);
            v13 = *(_DWORD *)(a1 + 18464);
          }
          v26 = v33 - v31;
          v27 = v13 << v31;
          *(_DWORD *)(a1 + 18464) = v27;
          v25 = v27;
          *(_DWORD *)(a1 + 18468) = v26;
          v28 = *(unsigned __int8 *)(a3 + v34 + 1024);
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 18468);
          v23 = *(unsigned __int8 *)(v20 + a3);
          v24 = *(unsigned __int8 *)(v21 + a3 + 1280);
          if ( v24 > v22 )
            goto LABEL_95;
          v25 = v19 << v24;
          v26 = v22 - v24;
          *(_DWORD *)(a1 + 18464) = v25;
          *(_DWORD *)(a1 + 18468) = v26;
          v27 = v25;
          v28 = *(unsigned __int8 *)(v23 + a3 + 1024);
        }
        v35 = v28;
        v36 = v26;
        v37 = v28 >> 4;
        v38 = v35 & 0xF;
        if ( v38 )
        {
          v39 = v37 + v4;
          v40 = v39;
          LODWORD(v4) = v39 + 1;
          v41 = byte_14026FC80[v40];
          if ( v26 < v38 )
          {
            sub_140161D20((_QWORD *)a1);
            v27 = *(_DWORD *)(a1 + 18464);
            v36 = *(_DWORD *)(a1 + 18468);
          }
          v7 = a2;
          v42 = __ROL4__(v27, v38);
          v43 = dword_14026FBF0[v38];
          v44 = dword_14026FC40[v38] & ~(v27 >> 31);
          *(_DWORD *)(a1 + 18468) = v36 - v38;
          *(_DWORD *)(a1 + 18464) = v42 & ~v43;
          *(_WORD *)(a2 + 2 * v41) = (((unsigned __int16)v42 & (unsigned __int16)v43) + (_WORD)v44) << v11;
        }
        else
        {
          if ( (unsigned int)v37 < 0xF )
          {
            v45 = 1 << v37;
            *(_DWORD *)(a1 + 18500) = 1 << v37;
            if ( (_DWORD)v37 )
            {
              v46 = 1 << v37;
              if ( v26 < (int)v37 )
              {
                sub_140161D20((_QWORD *)a1);
                v26 = *(_DWORD *)(a1 + 18468);
                v46 = *(_DWORD *)(a1 + 18500);
                v25 = *(_DWORD *)(a1 + 18464);
              }
              v47 = dword_14026FBF0[v37];
              *(_DWORD *)(a1 + 18468) = v26 - v37;
              v48 = __ROL4__(v25, v37);
              *(_DWORD *)(a1 + 18464) = v48 & ~v47;
              v45 = v46 + (v48 & v47);
            }
            *(_DWORD *)(a1 + 18500) = v45 - 1;
            return 1;
          }
          v7 = a2;
          LODWORD(v4) = v4 + 16;
        }
      }
      if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
        return 1;
    }
  }
  v50 = 1 << v11;
  if ( !v10 )
  {
    v57 = *(int *)(a1 + 18484);
    while ( 1 )
    {
      if ( *(int *)(a1 + 18468) < 16 )
        sub_140161D20((_QWORD *)a1);
      v58 = *(_DWORD *)(a1 + 18464);
      v59 = (unsigned __int64)v58 >> 23;
      v60 = *(unsigned __int8 *)(v59 + a3);
      if ( (_BYTE)v60 == 0xFF )
      {
        v67 = (unsigned int *)(a3 + 1580);
        v68 = 10;
        for ( j = 10; HIWORD(v58) >= *v67; ++j )
        {
          ++v68;
          ++v67;
        }
        v70 = *(_DWORD *)(a1 + 18468);
        if ( v68 == 17 )
        {
          v49 = v70 - 16;
LABEL_94:
          *(_DWORD *)(a1 + 18468) = v49;
LABEL_95:
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
          return 0;
        }
        if ( v68 > v70 )
          goto LABEL_95;
        v71 = (int)(*(_DWORD *)(a3 + 4 * j + 1612) + (dword_14026FBF0[j] & (v58 >> (32 - v68))));
        if ( (dword_14026FBF0[*(unsigned __int8 *)(a3 + v71 + 1280)] & (v58 >> (32 - *(_BYTE *)(a3 + v71 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v71 + 512) )
        {
          sub_14023E640(
            (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
            0x81Au);
          v70 = *(_DWORD *)(a1 + 18468);
          v58 = *(_DWORD *)(a1 + 18464);
        }
        v65 = v70 - v68;
        v64 = v58 << v68;
        *(_DWORD *)(a1 + 18464) = v64;
        *(_DWORD *)(a1 + 18468) = v65;
        v66 = *(unsigned __int8 *)(a3 + v71 + 1024);
      }
      else
      {
        v61 = *(_DWORD *)(a1 + 18468);
        v62 = *(unsigned __int8 *)(v59 + a3);
        v63 = *(unsigned __int8 *)(v60 + a3 + 1280);
        if ( v63 > v61 )
          goto LABEL_95;
        v64 = v58 << v63;
        v65 = v61 - v63;
        *(_DWORD *)(a1 + 18464) = v64;
        *(_DWORD *)(a1 + 18468) = v65;
        v66 = *(unsigned __int8 *)(v62 + a3 + 1024);
      }
      v72 = v66;
      v73 = v66 >> 4;
      v74 = v72 & 0xF;
      if ( v74 )
      {
        if ( v74 != 1 )
          goto LABEL_95;
        if ( v65 < 1 )
        {
          sub_140161D20((_QWORD *)a1);
          v65 = *(_DWORD *)(a1 + 18468);
          v64 = *(_DWORD *)(a1 + 18464);
        }
        LOWORD(v74) = v50;
        *(_DWORD *)(a1 + 18464) = 2 * v64;
        *(_DWORD *)(a1 + 18468) = v65 - 1;
        if ( v64 >= 0 )
          v74 = -(__int16)v50;
      }
      else if ( (unsigned int)v73 < 0xF )
      {
        v75 = (1 << v73) - 1;
        *(_DWORD *)(a1 + 18500) = v75;
        if ( (_DWORD)v73 )
        {
          if ( v65 < (int)v73 )
          {
            sub_140161D20((_QWORD *)a1);
            v65 = *(_DWORD *)(a1 + 18468);
            v75 = *(_DWORD *)(a1 + 18500);
            v64 = *(_DWORD *)(a1 + 18464);
          }
          v76 = __ROL4__(v64, v73);
          v77 = dword_14026FBF0[v73];
          *(_DWORD *)(a1 + 18468) = v65 - v73;
          *(_DWORD *)(a1 + 18464) = v76 & ~v77;
          *(_DWORD *)(a1 + 18500) = v75 + (v76 & v77);
        }
        LODWORD(v73) = 64;
      }
      v78 = *(_DWORD *)(a1 + 18488);
      v79 = (int)v4 <= v78;
      if ( (int)v4 > v78 )
        goto LABEL_91;
      v80 = a2;
      while ( 1 )
      {
        LODWORD(v4) = v4 + 1;
        v81 = (__int16 *)(v80 + 2LL * byte_14026FC80[v57++]);
        if ( *v81 )
        {
          v82 = *(_DWORD *)(a1 + 18468);
          if ( v82 < 1 )
          {
            sub_140161D20((_QWORD *)a1);
            v82 = *(_DWORD *)(a1 + 18468);
            v80 = a2;
          }
          v83 = *(_DWORD *)(a1 + 18464);
          *(_DWORD *)(a1 + 18464) = 2 * v83;
          *(_DWORD *)(a1 + 18468) = v82 - 1;
          if ( v83 < 0 )
          {
            v84 = *v81;
            if ( ((unsigned __int16)*v81 & v50) == 0 )
            {
              if ( v84 <= 0 )
                v85 = v84 - v50;
              else
                v85 = v50 + v84;
              *v81 = v85;
            }
          }
          goto LABEL_88;
        }
        if ( !(_DWORD)v73 )
          break;
        LODWORD(v73) = v73 - 1;
LABEL_88:
        if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
          return 1;
      }
      *v81 = v74;
      v79 = (int)v4 <= *(_DWORD *)(a1 + 18488);
LABEL_91:
      if ( !v79 )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18500) = v10 - 1;
  if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
    return 1;
  v51 = &byte_14026FC80[v4];
  do
  {
    v52 = (__int16 *)(v7 + 2LL * *v51);
    if ( *v52 )
    {
      v53 = *(_DWORD *)(a1 + 18468);
      if ( v53 < 1 )
      {
        sub_140161D20((_QWORD *)a1);
        v53 = *(_DWORD *)(a1 + 18468);
        v7 = a2;
      }
      v54 = *(_DWORD *)(a1 + 18464);
      *(_DWORD *)(a1 + 18464) = 2 * v54;
      *(_DWORD *)(a1 + 18468) = v53 - 1;
      if ( v54 < 0 )
      {
        v55 = *v52;
        if ( ((unsigned __int16)*v52 & v50) == 0 )
        {
          if ( v55 <= 0 )
            v56 = v55 - v50;
          else
            v56 = v50 + v55;
          *v52 = v56;
        }
      }
    }
    LODWORD(v4) = v4 + 1;
    ++v51;
  }
  while ( (int)v4 <= *(_DWORD *)(a1 + 18488) );
  return 1;
}

// 14026FBF0: using guessed type int dword_14026FBF0[20];
// 14026FC40: using guessed type int dword_14026FC40[16];
// 14026FC80: using guessed type unsigned __int8 byte_14026FC80[336];
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272560: using guessed type __int16[82];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140165200) ----------------------------------------------------
__int64            sub_140165200(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r15
  unsigned int v9; // r10d
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r11d
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r10d
  signed int v16; // r11d
  signed int v17; // esi
  unsigned int *v18; // rax
  int i; // esi
  int v20; // r11d
  __int64 v21; // r8
  __int64 v22; // r14
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  int v29; // eax
  int v30; // edx

  v5 = a4;
  if ( *(_DWORD *)(a1 + 18488) )
    goto LABEL_2;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  if ( *(_DWORD *)(a1 + 18492) )
  {
    v29 = *(_DWORD *)(a1 + 18468);
    if ( v29 < 1 )
    {
      sub_140161D20((_QWORD *)a1);
      v29 = *(_DWORD *)(a1 + 18468);
    }
    v30 = *(_DWORD *)(a1 + 18464);
    *(_DWORD *)(a1 + 18464) = 2 * v30;
    *(_DWORD *)(a1 + 18468) = v29 - 1;
    if ( v30 < 0 )
      *(_WORD *)a2 += 1 << *(_DWORD *)(a1 + 18496);
    return 1;
  }
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  *(_OWORD *)(a2 + 80) = 0;
  *(_OWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 112) = 0;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  v9 = *(_DWORD *)(a1 + 18464);
  v10 = (unsigned __int64)v9 >> 23;
  v11 = *(unsigned __int8 *)(v10 + a3);
  if ( (_BYTE)v11 == 0xFF )
  {
    v18 = (unsigned int *)(a3 + 1580);
    for ( i = 10; HIWORD(v9) >= *v18; ++v18 )
      ++i;
    v20 = *(_DWORD *)(a1 + 18468);
    if ( i == 17 )
    {
      *(_DWORD *)(a1 + 18468) = v20 - 16;
    }
    else if ( i <= v20 )
    {
      v21 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v9 >> (32 - i))));
      v22 = v21 + a3;
      if ( (dword_14026FBF0[*(unsigned __int8 *)(v21 + a3 + 1280)] & (v9 >> (32 - *(_BYTE *)(v21 + a3 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v21 + 512) )
      {
        sub_14023E640(
          (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
          0x81Au);
        v20 = *(_DWORD *)(a1 + 18468);
        v9 = *(_DWORD *)(a1 + 18464);
      }
      v16 = v20 - i;
      v15 = v9 << i;
      *(_DWORD *)(a1 + 18464) = v15;
      *(_DWORD *)(a1 + 18468) = v16;
      v17 = *(unsigned __int8 *)(v22 + 1024);
      goto LABEL_20;
    }
LABEL_2:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't merge dc and ac");
    return 0;
  }
  v12 = *(_DWORD *)(a1 + 18468);
  v13 = *(unsigned __int8 *)(v10 + a3);
  v14 = *(unsigned __int8 *)(v11 + a3 + 1280);
  if ( v14 > v12 )
    goto LABEL_2;
  v15 = v9 << v14;
  v16 = v12 - v14;
  *(_DWORD *)(a1 + 18464) = v15;
  *(_DWORD *)(a1 + 18468) = v16;
  v17 = *(unsigned __int8 *)(v13 + a3 + 1024);
LABEL_20:
  if ( !v17 )
    goto LABEL_25;
  if ( v16 < v17 )
  {
    sub_140161D20((_QWORD *)a1);
    v15 = *(_DWORD *)(a1 + 18464);
  }
  v23 = __ROL4__(v15, v17);
  if ( (unsigned int)v17 <= 0x10 )
  {
    *(_DWORD *)(a1 + 18468) -= v17;
    v24 = v17;
    v25 = ~(v15 >> 31) & dword_14026FC40[v24];
    v26 = v23 & dword_14026FBF0[v24];
    *(_DWORD *)(a1 + 18464) = v23 & ~dword_14026FBF0[v24];
    v27 = v26 + v25;
  }
  else
  {
LABEL_25:
    v27 = 0;
  }
  v28 = v27 + *(_DWORD *)(96 * v5 + a1 + 18104);
  *(_DWORD *)(96 * v5 + a1 + 18104) = v28;
  *(_WORD *)a2 = (_WORD)v28 << *(_DWORD *)(a1 + 18496);
  return 1;
}

// 14026FBF0: using guessed type int dword_14026FBF0[20];
// 14026FC40: using guessed type int dword_14026FC40[16];
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272560: using guessed type __int16[82];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140165570) ----------------------------------------------------
void            sub_140165570(_DWORD *a1)
{
  int v2; // r13d
  _DWORD *v3; // rbx
  int v4; // ebp
  int v5; // r15d
  int v6; // r12d
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rax
  char *v12; // r9
  __int16 v13; // cx
  __int16 v14; // dx

  if ( a1[4620] )
  {
    v2 = 0;
    if ( *(int *)(*(_QWORD *)a1 + 8LL) > 0 )
    {
      v3 = a1 + 4540;
      do
      {
        v4 = 0;
        v5 = (*(v3 - 13) + 7) >> 3;
        v6 = (*(v3 - 12) + 7) >> 3;
        if ( v6 > 0 )
        {
          do
          {
            v7 = 0;
            if ( v5 > 0 )
            {
              v8 = 0;
              do
              {
                v9 = 16;
                v10 = *(_QWORD *)v3 + 2LL * ((v7 + v4 * v3[2]) << 6);
                v11 = v10 + 2;
                v12 = (char *)&a1[32 * (__int64)(int)*(v3 - 17) + 3362] - v10;
                do
                {
                  v13 = *(_WORD *)&v12[v11 - 2];
                  v14 = *(_WORD *)(v11 - 2);
                  v11 += 8;
                  *(_WORD *)(v11 - 10) = v13 * v14;
                  *(_WORD *)(v11 - 8) *= *(_WORD *)&v12[v11 - 8];
                  *(_WORD *)(v11 - 6) *= *(_WORD *)&v12[v11 - 6];
                  *(_WORD *)(v11 - 4) *= *(_WORD *)&v12[v11 - 4];
                  --v9;
                }
                while ( v9 );
                (*((void (           **)(__int64))a1 + 2318))(*((_QWORD *)v3 - 4) + v8 + 8 * v4 * *(v3 - 11));
                ++v7;
                v8 += 8;
              }
              while ( v7 < v5 );
            }
            ++v4;
          }
          while ( v4 < v6 );
        }
        ++v2;
        v3 += 24;
      }
      while ( v2 < *(_DWORD *)(*(_QWORD *)a1 + 8LL) );
    }
  }
}


//----- (0000000140165700) ----------------------------------------------------
__int64            sub_140165700(__int64 a1)
{
  int v1; // edx
  int v3; // eax
  int v4; // ecx

  v1 = *(_DWORD *)(a1 + 18468);
  if ( v1 < 1 )
  {
    sub_140161D20((_QWORD *)a1);
    v1 = *(_DWORD *)(a1 + 18468);
  }
  v3 = *(_DWORD *)(a1 + 18464);
  v4 = 2 * v3;
  *(_DWORD *)(a1 + 18464) = v4;
  *(_DWORD *)(a1 + 18468) = v1 - 1;
  return v3 & 0x80000000;
}


//----- (0000000140165750) ----------------------------------------------------
__int64            sub_140165750(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v4; // rdi
  int v5; // edx
  int v6; // eax

  v2 = *(_DWORD *)(a1 + 18468);
  v4 = a2;
  if ( v2 < a2 )
  {
    sub_140161D20((_QWORD *)a1);
    v2 = *(_DWORD *)(a1 + 18468);
  }
  v5 = __ROL4__(*(_DWORD *)(a1 + 18464), v4);
  *(_DWORD *)(a1 + 18468) = v2 - v4;
  v6 = dword_14026FBF0[v4];
  *(_DWORD *)(a1 + 18464) = v5 & ~v6;
  return v5 & (unsigned int)v6;
}

// 14026FBF0: using guessed type int dword_14026FBF0[20];

//----- (00000001401657B0) ----------------------------------------------------
__int64            sub_1401657B0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int *v10; // rax
  int i; // ebx
  int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // rbp

  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  v4 = *(_DWORD *)(a1 + 18464);
  v5 = *(unsigned __int8 *)(((unsigned __int64)v4 >> 23) + a2);
  if ( (_BYTE)v5 != 0xFF )
  {
    v6 = *(_DWORD *)(a1 + 18468);
    v7 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a2);
    v8 = *(unsigned __int8 *)(v5 + a2 + 1280);
    if ( v8 <= v6 )
    {
      *(_DWORD *)(a1 + 18464) = v4 << v8;
      *(_DWORD *)(a1 + 18468) = v6 - v8;
      return *(unsigned __int8 *)(v7 + a2 + 1024);
    }
    return 0xFFFFFFFFLL;
  }
  v10 = (unsigned int *)(a2 + 1580);
  for ( i = 10; HIWORD(v4) >= *v10; ++v10 )
    ++i;
  v12 = *(_DWORD *)(a1 + 18468);
  if ( i == 17 )
  {
    *(_DWORD *)(a1 + 18468) = v12 - 16;
    return 0xFFFFFFFFLL;
  }
  if ( i > v12 )
    return 0xFFFFFFFFLL;
  v13 = (int)(*(_DWORD *)(a2 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v4 >> (32 - i))));
  v14 = v13 + a2;
  if ( (dword_14026FBF0[*(unsigned __int8 *)(v13 + a2 + 1280)] & (v4 >> (32 - *(_BYTE *)(v13 + a2 + 1280)))) != *(unsigned __int16 *)(a2 + 2 * v13 + 512) )
  {
    sub_14023E640(
      (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x81Au);
    v12 = *(_DWORD *)(a1 + 18468);
    v4 = *(_DWORD *)(a1 + 18464);
  }
  *(_DWORD *)(a1 + 18468) = v12 - i;
  *(_DWORD *)(a1 + 18464) = v4 << i;
  return *(unsigned __int8 *)(v14 + 1024);
}

// 14026FBF0: using guessed type int dword_14026FBF0[20];
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272560: using guessed type __int16[82];

//----- (0000000140165940) ----------------------------------------------------
__int64            sub_140165940(__int64 a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  __int64 *v8; // rdi
  _QWORD *v9; // rdx
  unsigned int v10; // ebx
  int v11; // edx

  v8 = (__int64 *)sr_path_malloc(18568);
  *v8 = a1;
  if ( sub_14015F960(v8, 2) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*v8;
    if ( a3 )
      *a3 = *(_DWORD *)(*v8 + 4);
    v10 = 1;
    if ( a4 )
    {
      v11 = 1;
      if ( *(int *)(*v8 + 8) >= 3 )
        v11 = 3;
      *a4 = v11;
    }
  }
  else
  {
    v9 = (_QWORD *)*v8;
    v10 = 0;
    v9[24] = *(_QWORD *)(*v8 + 208);
    v9[25] = v9[27];
  }
  free(v8);
  return v10;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140165A10) ----------------------------------------------------
__int64            sub_140165A10(__int64 *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  _QWORD *v8; // rcx
  int v10; // edx

  if ( sub_14015F960(a1, 2) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*a1;
    if ( a3 )
      *a3 = *(_DWORD *)(*a1 + 4);
    if ( a4 )
    {
      v10 = 1;
      if ( *(int *)(*a1 + 8) >= 3 )
        v10 = 3;
      *a4 = v10;
    }
    return 1;
  }
  else
  {
    v8 = (_QWORD *)*a1;
    v8[24] = *(_QWORD *)(*a1 + 208);
    v8[25] = v8[27];
    return 0;
  }
}


//----- (0000000140165AC0) ----------------------------------------------------
__int64            sub_140165AC0(__int64 a1, int *a2, _DWORD *a3, int *a4, unsigned int a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rbx

  v9 = (_QWORD *)sr_path_malloc(18568);
  *v9 = a1;
  sub_14016DFD0(v9);
  v10 = sub_1400E54D0(v9, a2, a3, a4, a5);
  free(v9);
  return v10;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140165BB0) ----------------------------------------------------
__int64            sub_140165BB0(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // esi

  v2 = sr_path_malloc(18568);
  *(_QWORD *)v2 = (uint64)(uintptr_t)(a1);
  sub_14016DFD0((_QWORD *)v2);
  v3 = 0;
  *(_DWORD *)(v2 + 18508) = -1;
  *(_DWORD *)(v2 + 18504) = 0;
  *(_BYTE *)(v2 + 18472) = -1;
  if ( sub_140160790((_BYTE *)v2) == -40 )
    v3 = 1;
  else
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
  a1[24] = a1[26];
  a1[25] = a1[27];
  free((void *)v2);
  return v3;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140165C60) ----------------------------------------------------
__int64            sub_140165C60(char *Block, int a2, int a3, int a4)
{
  __int64 v4; // r15
  char *v5; // r12
  int v7; // ebp
  int v8; // eax
  __int64 v9; // r13
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rcx
  float v13; // xmm7_4
  __int64 v14; // rax
  char *v15; // rsi
  float v16; // xmm8_4
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rdi
  double v22; // xmm0_8
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r11
  char *v27; // r8
  __int64 v28; // rcx
  float *v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  float v33; // xmm1_4
  __m128i v34; // xmm0
  int v35; // eax
  int v36; // eax
  float *v37; // r8
  char *v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140165C60[32];
#define v41 (*(int (*))(void *)(sr_frame_140165C60 + 0)) /* [rsp+20h] */
#define v42 (*(__int64 (*))(void *)(sr_frame_140165C60 + 24)) /* [rsp+38h] */

  v4 = a4;
  v5 = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (v7 = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && v7 > (int)(0x7FFFFFFFu / a4)
    || (v8 = a4 * v7, a4 * v7 < 0)
    || v8 > 0x1FFFFFFF
    || (v42 = sr_path_malloc(4 * v8), (v9 = v42) == 0) )
  {
    free(v5);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  else
  {
    v10 = v4;
    if ( (v4 & 1) == 0 )
      v10 = v4 - 1;
    v11 = 0;
    v41 = v10;
    if ( v7 > 0 )
    {
      v12 = 4 * v4;
      v13 = *(float *)&dword_140301838;
      v14 = v4;
      v15 = v5;
      v16 = *(float *)&dword_14030183C;
      v17 = v42;
      v18 = (unsigned int)v7;
      v19 = v10;
      do
      {
        if ( v19 > 0 )
        {
          v20 = 0;
          v21 = v17;
          do
          {
            v22 = pow((float)((float)(unsigned __int8)v15[v20] * 0.0039215689), v13);
            v21 += 4;
            ++v20;
            *(float *)&v22 = v22 * v16;
            *(_DWORD *)(v21 - 4) = LODWORD(v22);
          }
          while ( v20 < v19 );
          v14 = v4;
          v12 = 4 * v4;
        }
        v17 += v12;
        v15 += v14;
        --v18;
      }
      while ( v18 );
      LODWORD(v4) = a4;
      v11 = 0;
      v10 = v41;
      v5 = Block;
      v9 = v42;
    }
    if ( v10 < (int)v4 )
    {
      if ( v7 >= 4 )
      {
        v23 = 4 * (int)v4;
        v24 = v10 + 2 * (int)v4;
        v25 = v10 + (int)v4 - v24;
        v26 = (int)v4 + v10 + 2 * (int)v4 - v24;
        v27 = &v5[v24];
        v28 = v10 - v24;
        v29 = (float *)(v9 + 4 * v24);
        v30 = ((unsigned int)(v7 - 4) >> 2) + 1;
        v31 = v30;
        v11 = 4 * v30;
        do
        {
          v32 = (unsigned __int8)*v27;
          v33 = (float)(unsigned __int8)v27[v25];
          v29[v28] = (float)(unsigned __int8)v27[v28] * 0.0039215689;
          v34 = _mm_cvtsi32_si128(v32);
          v35 = (unsigned __int8)v27[v26];
          v27 += v23;
          v29[v25] = v33 * 0.0039215689;
          *v29 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v34), f32)[0] * 0.0039215689;
          v29[v26] = (float)v35 * 0.0039215689;
          v29 += v23;
          --v31;
        }
        while ( v31 );
      }
      if ( v11 < v7 )
      {
        v36 = v10 + v4 * v11;
        v37 = (float *)(v9 + 4LL * v36);
        v38 = &v5[v36];
        v39 = (unsigned int)(v7 - v11);
        do
        {
          v40 = (unsigned __int8)*v38;
          v38 += (int)v4;
          *v37 = (float)v40 * 0.0039215689;
          v37 += (int)v4;
          --v39;
        }
        while ( v39 );
      }
    }
    free(v5);
    return v9;
  }
}
#undef v41
#undef v42

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140301838: using guessed type int dword_140301838;
// 14030183C: using guessed type int dword_14030183C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140165FD0) ----------------------------------------------------
__m128i *           sub_140165FD0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  unsigned int v5; // edi
  __m128i *result; // rax
  __m128i *v10; // rbx
  int v11; // esi
  unsigned int v12; // eax
  int v13; // esi
  __int64 v14; // rax
  __m128i *v15; // r14
  __int64 i; // r8
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a5;
  result = (__m128i *)sub_1401666B0(a1, a2, a3, a4, a5, v19, 16);
  v10 = result;
  if ( !result )
    return result;
  v11 = v19[0];
  if ( v19[0] == 8 )
    goto LABEL_5;
  if ( v19[0] != 16 )
  {
    sub_14023E640(
      (char *)L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x4D3u);
LABEL_5:
    if ( v11 != 16 )
    {
      if ( a5 )
        v12 = a5;
      else
        v12 = *a4;
      v13 = v12 * *a3 * *a2;
      v14 = sr_path_malloc(2 * v13);
      v15 = (__m128i *)v14;
      if ( v14 )
      {
        if ( v13 > 0 )
        {
          for ( i = 0; i < v13; ++i )
            *(_WORD *)(v14 + 2 * i) = 257 * SR_VEC_PTR_LANES(128, v10, u8)[i];
        }
        free(v10);
        v10 = v15;
      }
      else
      {
        v10 = nullptr;
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      }
    }
  }
  v17 = sr_client_static_tls();
  if ( *(_DWORD *)(v17 + 8) )
    v18 = *(_DWORD *)(v17 + 12);
  else
    v18 = dword_140404A6C[18215120];
  if ( v18 )
  {
    if ( !a5 )
      v5 = *a4;
    sub_14016F470(v10, *a2, *a3, 2 * v5);
  }
  return v10;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272470: using guessed type __int16[54];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DAC: using guessed type unsigned int;

//----- (0000000140166160) ----------------------------------------------------
__m128i *           sub_140166160(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // r14d
  __m128i *result; // rax
  __m128i *v10; // rbx
  unsigned int v11; // eax
  int v12; // edi
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  unsigned int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  int v18; // edi
  unsigned __int64 v19; // rcx
  __m128i *v20; // r9
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 i; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  int v31[14]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a5;
  result = (__m128i *)sub_1401666B0(a1, a2, a3, (int *)a4, a5, v31, 8);
  v10 = result;
  if ( !result )
    return result;
  if ( v31[0] == 8 )
    goto LABEL_18;
  if ( v31[0] != 16 )
    sub_14023E640(
      (char *)L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x4B9u);
  if ( a5 )
    v11 = a5;
  else
    v11 = *a4;
  v12 = v11 * *a3 * *a2;
  v13 = v12;
  v14 = sr_path_malloc(v12);
  if ( v14 )
  {
    v16 = 0;
    if ( v12 >= 32 )
    {
      v17 = v12 - 1;
      if ( v14 > (unsigned __int64)v10 + 2 * v17 || v17 + v14 < (unsigned __int64)v10 )
      {
        v18 = v12 - (v12 & 0x1F);
        v19 = v14 + 16;
        v20 = v10 + 2;
        v21 = _mm_cvtsi32_si128(8u);
        do
        {
          v22 = _mm_loadu_si128(v20 - 2);
          v19 += 32LL;
          v16 += 32;
          v23 = _mm_loadu_si128(v20 - 1);
          v20 += 4;
          v24 = _mm_and_si128(_mm_srl_epi16(v22, v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          v25 = _mm_and_si128(_mm_srl_epi16(v23, v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          *(_QWORD *)(v19 - 48) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v24, v24), u64)[0];
          *(_QWORD *)(v19 - 40) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v25, v25), u64)[0];
          v26 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v20 - 4), v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          v27 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v20 - 3), v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          *(_QWORD *)(v19 - 32) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v26, v26), u64)[0];
          *(_QWORD *)(v19 - 24) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v27, v27), u64)[0];
        }
        while ( (__int64)(-16LL - v14 + v19) < v18 );
      }
    }
    for ( i = v16; i < v13; ++i )
      *(_BYTE *)(i + v14) = SR_VEC_PTR_LANES(128, v10, i8)[2 * i + 1];
    free(v10);
    v10 = (__m128i *)v14;
LABEL_18:
    v15 = dword_140404A6C[19064470];
    goto LABEL_19;
  }
  v15 = dword_140404A6C[19064470];
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
  v10 = nullptr;
LABEL_19:
  v29 = sr_client_static_tls();
  if ( *(_DWORD *)(v29 + 8) )
    v30 = *(_DWORD *)(v29 + 12);
  else
    v30 = dword_140404A6C[18215120];
  if ( v30 )
  {
    if ( !a5 )
      v5 = *a4;
    sub_14016F470(v10, *a2, *a3, v5);
  }
  return v10;
}

// 140166284: conditional instruction was optimized away because edi.4>=20
// 14016627F: mask 0x8000001F is shortened because edi.4 <= 0x7FFFFFFF
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272470: using guessed type __int16[54];
// 1402791D0: using guessed type __int128 xmmword_1402791D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DAC: using guessed type unsigned int;
// 144CBE4C4: using guessed type unsigned int;

//----- (00000001401663E0) ----------------------------------------------------
__int64            sub_1401663E0(     __m128i *a1, __int64 *a2, _DWORD *a3, int *a4)
{
  _DWORD *v5; // r14
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r15
  char *v12; // rbp
  int v13; // r12d
       __m128i *v14; // rax
       __m128i *v15; // r14
  int v16; // edx
  int v17; // esi
  int v18; // esi
  __int64 v19; // rax
  __int64 v21; // [rsp-20h] [rbp-11230h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401663E0[35136];
#define v22 (*(unsigned int (*))(void *)(sr_frame_1401663E0 + 0)) /* [rsp+10h] */
#define v23 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 8)) /* [rsp+18h] */
#define v24 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 16)) /* [rsp+20h] */
#define v25 (*(int * (*))(void *)(sr_frame_1401663E0 + 24)) /* [rsp+28h] */
#define v26 (*(int * (*))(void *)(sr_frame_1401663E0 + 32)) /* [rsp+30h] */
#define v27 (*(int (*))(void *)(sr_frame_1401663E0 + 48)) /* [rsp+40h] */
#define v28 (*(int (*))(void *)(sr_frame_1401663E0 + 52)) /* [rsp+44h] */
#define Block (*(void * (*))(void *)(sr_frame_1401663E0 + 56)) /* [rsp+48h] */
#define v30 (*(void * (*))(void *)(sr_frame_1401663E0 + 64)) /* [rsp+50h] */
#define v31 (*(void * (*))(void *)(sr_frame_1401663E0 + 72)) /* [rsp+58h] */
#define v32 (*(int (*))(void *)(sr_frame_1401663E0 + 34968)) /* [rsp+88A8h] */
#define v33 (*(__int64 (*))(void *)(sr_frame_1401663E0 + 34976)) /* [rsp+88B0h] */
#define v34 (*(int * (*))(void *)(sr_frame_1401663E0 + 35104)) /* [rsp+8930h] */
#define v35 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 35112)) /* [rsp+8938h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1401663E0 + 35120)) /* [rsp+8940h] */

  v5 = v35;
  v7 = v36;
  v26 = v34;
  v23 = v35;
  v25 = a4;
  v24 = a3;
  v22 = v36;
  v8 = sub_140161BB0((__int64)a1);
  v9 = SR_VEC_LANES(128, a1[13], i64)[1];
  SR_VEC_LANES(128, a1[12], i64)[0] = SR_VEC_LANES(128, a1[13], i64)[0];
  SR_VEC_LANES(128, a1[12], i64)[1] = v9;
  if ( !v8 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not GIF");
    return sub_1401F8B20((unsigned __int64)&v21 ^ v33);
  }
  v10 = 0;
  v11 = 0;
  v12 = nullptr;
  sub_1401FCD30((void *)(uintptr_t)(&v27), 0, 0x8870u);
  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    v13 = v10;
    v14 = (     __m128i *)sub_140160EF0((__int64)a1, &v27, v5, v7, v11);
    v15 = v14;
    if ( v14 == a1 || !v14 )
      break;
    ++v10;
    v16 = v27;
    v17 = v28;
    *v24 = v27;
    *v25 = v17;
    v18 = 4 * v16 * v17;
    if ( !v12 )
    {
      v12 = (char *)sr_path_malloc(v10 * v18);
      if ( !a2 )
        goto LABEL_13;
      v19 = sr_path_malloc(4LL * v10);
      goto LABEL_12;
    }
    v12 = (char *)j__realloc_base_sr(v12, v10 * v18);
    if ( !v12 )
    {
      free(Block);
      free(v31);
      free(v30);
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      return sub_1401F8B20((unsigned __int64)&v21 ^ v33);
    }
    if ( a2 )
    {
      v19 = j__realloc_base_sr(*a2, 4LL * v10);
LABEL_12:
      *a2 = v19;
    }
LABEL_13:
    sub_1401FC920((__m128i *)&v12[v18 * v13], v15, v18);
    if ( v10 >= 2 )
      v11 = (__int64)&v12[-2 * v18];
    v7 = v22;
    v5 = v23;
    if ( a2 )
      *(_DWORD *)(*a2 + 4LL * (unsigned int)(v10 - 1)) = v32;
  }
  free(Block);
  free(v31);
  free(v30);
  if ( (v7 & 0xFFFFFFFB) != 0 )
    sub_14015D7E0(v12, 4, v7, v10 * v27, v28);
  *v26 = v10;
  return sub_1401F8B20((unsigned __int64)&v21 ^ v33);
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef Block
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401666B0) ----------------------------------------------------
char *           sub_1401666B0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5, int *a6, int a7)
{
  unsigned int v9; // r14d
  char *v10; // rbp
  __int64 v12; // rbx
  char **v13; // rdi
  unsigned __int64 *v14; // r15
  __int64 *v15; // rdi
  __int64 v16; // rbx
  int v18; // eax
  char *v19; // rcx
  unsigned __int64 v20; // rdx
  char *v21; // rdi
  int v22; // eax
  int *v23; // rbx
  int v24; // edx
  int v25; // r9d
  char *v26; // rax
  char v27; // dl
  char *v28; // rax
  char v29; // cl
  int v30; // ebx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  __int64 v36; // rbx
  char *v37; // rax
  unsigned __int64 v38; // rcx
  char v39; // bl
  char *v40; // rax
  char v41; // cl
  void *v42; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401666B0[80];
#define v43 (*(int (*))(void *)(sr_frame_1401666B0 + 0)) /* [rsp+20h] */
#define v44 (*(_QWORD (*)[5])(void *)(sr_frame_1401666B0 + 32)) /* [rsp+40h] */


  int v49; // [rsp+D8h] [rbp+30h]

  v9 = a5;
  v10 = nullptr;
  *(_QWORD *)a6 = 8;
  a6[2] = 0;
  v12 = sr_path_malloc(18568);
  *(_QWORD *)v12 = a1;
  sub_14016DFD0((_QWORD *)v12);
  *(_DWORD *)(v12 + 18504) = 0;
  *(_DWORD *)(v12 + 18508) = -1;
  *(_BYTE *)(v12 + 18472) = -1;
  if ( sub_140160790((_BYTE *)v12) == -40 )
  {
    v49 = 1;
  }
  else
  {
    v49 = 0;
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
  }
  v13 = (char **)(a1 + 192);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  v14 = (unsigned __int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  free((void *)v12);
  if ( v49 )
  {
    v15 = (__int64 *)sr_path_malloc(18568);
    *v15 = a1;
    sub_14016DFD0(v15);
    v16 = sub_1400E54D0(v15, a2, a3, a4, a5);
    free(v15);
    return (char *)v16;
  }
  v18 = sub_14015CE80(a1);
  v19 = *(char **)(a1 + 208);
  v20 = *(_QWORD *)(a1 + 216);
  *v13 = v19;
  *v14 = v20;
  if ( !v18 )
  {
    if ( (unsigned __int64)v19 >= v20 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_41;
      sub_14016D910(a1);
      v27 = **v13;
      v28 = *v13 + 1;
    }
    else
    {
      v27 = *v19;
      v28 = v19 + 1;
    }
    *v13 = v28;
    if ( v27 == 66 )
    {
      if ( (unsigned __int64)v28 >= *v14 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_41;
        sub_14016D910(a1);
        v28 = *v13;
      }
      v29 = *v28;
      *v13 = v28 + 1;
      if ( v29 == 77 )
      {
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        v30 = sub_1401605B0(a1);
        v31 = v30 + ((unsigned int)sub_1401605B0(a1) << 16);
        if ( (unsigned int)v31 <= 0x38 && (v32 = 0x100010000001000LL, _bittest64(&v32, v31))
          || (_DWORD)v31 == 108
          || (_DWORD)v31 == 124 )
        {
          LODWORD(v10) = 1;
        }
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( (_DWORD)v10 )
          return (char *)sub_14015B780((unsigned int *)a1, a2, a3, a4, a5);
LABEL_42:
        v33 = sub_140161BB0(a1);
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( v33 )
          return (char *)sub_140160E00(a1, a2, a3, a4);
        v34 = sub_1401604F0(a1);
        v35 = sub_1401604F0(a1);
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( v35 + (v34 << 16) == 943870035 )
          return sub_14016CB70(a1, a2, a3, a4, a5, a6, a7);
        if ( (unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
        {
          v36 = 84;
          do
          {
            if ( (unsigned __int64)*v13 >= *v14 )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1);
                ++*v13;
              }
            }
            else
            {
              ++*v13;
            }
            --v36;
          }
          while ( v36 );
          if ( (unsigned int)sub_140169470(a1, (__int64)"PICT") )
          {
            *v13 = *(char **)(a1 + 208);
            *v14 = *(_QWORD *)(a1 + 216);
            return sub_140169510(a1, a2, a3, a4, a5);
          }
        }
        v37 = *(char **)(a1 + 208);
        v38 = *(_QWORD *)(a1 + 216);
        *v13 = v37;
        *v14 = v38;
        if ( (unsigned __int64)v37 >= v38 )
        {
          if ( !*(_DWORD *)(a1 + 48) )
          {
            v39 = 0;
            goto LABEL_60;
          }
          sub_14016D910(a1);
          v37 = *v13;
          v38 = *v14;
        }
        v39 = *v37;
        v40 = v37 + 1;
        *v13 = v40;
        if ( (unsigned __int64)v40 < v38 )
        {
          v41 = *v40;
          *v13 = v40 + 1;
          goto LABEL_63;
        }
LABEL_60:
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v41 = *(*v13)++;
        }
        else
        {
          v41 = 0;
        }
LABEL_63:
        if ( v39 == 80 && (unsigned __int8)(v41 - 53) <= 1u )
          return sub_14016A9F0(a1, a2, a3, a4, a5);
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( (unsigned int)sub_140162BB0(a1) )
        {
          v42 = (void *)sub_1401623E0(a1, a2, a3, a4, a5);
          if ( !a5 )
            v9 = *a4;
          return (char *)sub_140162D40(v42, *a2, *a3, v9);
        }
        else if ( (unsigned int)sub_14016F1B0(a1) )
        {
          return sub_14016E7A0(a1, a2, a3, (unsigned int *)a4, a5);
        }
        else
        {
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
          return nullptr;
        }
      }
    }
LABEL_41:
    *v13 = *(char **)(a1 + 208);
    *v14 = *(_QWORD *)(a1 + 216);
    goto LABEL_42;
  }
  v44[0] = a1;
  v21 = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
  }
  else
  {
    if ( !(unsigned int)sub_140167D10((__int64)v44, 0, a5) )
    {
      v10 = (*(char **)(void *)&v44[3]);
LABEL_22:
      free(v10);
      free((void *)v44[2]);
      free((void *)v44[1]);
      return v21;
    }
    v22 = (*(int *)(void *)&v44[4]);
    if ( (*(int *)(void *)&v44[4]) > 8 )
    {
      if ( (*(int *)(void *)&v44[4]) != 16 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad bits_per_channel");
        return nullptr;
      }
    }
    else
    {
      v22 = 8;
    }
    *a6 = v22;
    v21 = (*(char **)(void *)&v44[3]);
    v23 = (int *)v44[0];
    if ( !a5
      || (v24 = *(_DWORD *)(v44[0] + 12LL), a5 == v24)
      || ((v25 = *(_DWORD *)v44[0], v43 = *(_DWORD *)(v44[0] + 4LL), v22 != 8)
        ? (v26 = sub_14015DD00((*(char **)(void *)&v44[3]), v24, a5, v25, v43))
        : (v26 = sub_14015D7E0((*(char **)(void *)&v44[3]), v24, a5, v25, v43)),
          v23[3] = a5,
          (v21 = v26) != nullptr) )
    {
      *a2 = *v23;
      *a3 = v23[1];
      if ( a4 )
        *a4 = v23[2];
      goto LABEL_22;
    }
  }
  return nullptr;
}
#undef v43
#undef v44

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140166D20) ----------------------------------------------------
__m128i *           sub_140166D20(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int v9; // ebx
  __m128i *v10; // rsi
  __int64 v11; // rax
  __m128i *v14; // rax

  v9 = a5;
  if ( (unsigned int)sub_140162BB0(a1) )
  {
    v10 = (__m128i *)sub_1401623E0(a1, a2, a3, a4, a5);
    if ( v10 )
    {
      v11 = sr_client_static_tls();
      if ( *(_DWORD *)(v11 + 8) ? *(_DWORD *)(v11 + 12) : dword_140404A6C[18215120] )
      {
        if ( !a5 )
          v9 = *a4;
        sub_14016F470(v10, *a2, *a3, 4 * v9);
      }
    }
    return v10;
  }
  else
  {
    v14 = sub_140166160(a1, a2, a3, a4, a5);
    if ( v14 )
    {
      if ( !a5 )
        v9 = *a4;
      return (__m128i *)sub_140165C60(SR_VEC_PTR_LANES(128, v14, i8), *a2, *a3, v9);
    }
    else
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
      return nullptr;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DAC: using guessed type unsigned int;

//----- (0000000140166EE0) ----------------------------------------------------
_BOOL8            sub_140166EE0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  _BOOL8 result; // rax

  result = false;
  if ( a1 >= 0 && a2 >= 0 && (!a2 || a1 <= (int)(0x7FFFFFFFu / a2)) )
  {
    v5 = a2 * a1;
    if ( v5 >= 0 && a3 >= 0 && (!a3 || v5 <= (int)(0x7FFFFFFFu / a3)) )
    {
      v6 = a3 * v5;
      if ( v6 >= 0 && a4 >= 0 && (!a4 || v6 <= (int)(0x7FFFFFFFu / a4)) && a5 >= 0 && a4 * v6 <= 0x7FFFFFFF - a5 )
        return true;
    }
  }
  return result;
}


//----- (0000000140167010) ----------------------------------------------------
__int64            sub_140167010(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r8d

  if ( sub_140166EE0(a1, a2, a3, a4, a5) )
    return sr_path_malloc(a5 + a4 * v8 * a2 * a1);
  else
    return 0;
}

// 140167043: variable 'v8' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (00000001401670A0) ----------------------------------------------------
__int64            sub_1401670A0(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  signed __int16 v4; // dx
  __int64 result; // rax
  int v6; // ecx
  _BYTE *v7; // r8
  _BYTE *v8; // rdx
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // ecx

  v2 = a2;
  v4 = *(_WORD *)(a1 + 4LL * a2 + 2100);
  if ( v4 >= 0 )
    result = sub_1401670A0(a1, v4);
  v6 = *(_DWORD *)(a1 + 34912);
  if ( v6 < *(_DWORD *)(a1 + 34904) )
  {
    v7 = (_BYTE *)(*(_QWORD *)(a1 + 8) + v6 + *(_DWORD *)(a1 + 34908));
    *(_BYTE *)((v6 + *(_DWORD *)(a1 + 34908)) / 4 + *(_QWORD *)(a1 + 24)) = 1;
    v8 = (_BYTE *)(*(_QWORD *)(a1 + 34872) + 4LL * *(unsigned __int8 *)(a1 + 4 * v2 + 2103));
    if ( v8[3] > 0x80u )
    {
      *v7 = v8[2];
      v7[1] = v8[1];
      v7[2] = *v8;
      v7[3] = v8[3];
    }
    *(_DWORD *)(a1 + 34908) += 4;
    result = *(unsigned int *)(a1 + 34908);
    if ( (int)result >= *(_DWORD *)(a1 + 34900) )
    {
      v9 = *(_DWORD *)(a1 + 34904);
      *(_DWORD *)(a1 + 34908) = *(_DWORD *)(a1 + 34892);
      result = *(unsigned int *)(a1 + 34884);
      *(_DWORD *)(a1 + 34912) += result;
      if ( *(_DWORD *)(a1 + 34912) >= v9 )
      {
        v10 = *(_DWORD *)(a1 + 34880);
        do
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_DWORD *)(a1 + 34916) << v10;
          v12 = *(_DWORD *)(a1 + 34896);
          *(_DWORD *)(a1 + 34884) = v11;
          v13 = (v11 >> 1) + v12;
          --v10;
          *(_DWORD *)(a1 + 34912) = v13;
          *(_DWORD *)(a1 + 34880) = v10;
        }
        while ( v13 >= v9 );
      }
    }
  }
  return result;
}


//----- (00000001401671C0) ----------------------------------------------------
__int64            sub_1401671C0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v4; // r10d
  signed int v5; // r11d
  signed int v6; // ecx
  signed int v7; // eax

  v4 = a1 - a3 + a2 - a3;
  v5 = abs32(a2 - a3);
  v6 = abs32(a1 - a3);
  v7 = abs32(v4);
  if ( v5 <= v6 && v5 <= v7 )
    return a1;
  if ( v6 <= v7 )
    return a2;
  return a3;
}


//----- (0000000140167230) ----------------------------------------------------
__int64            sub_140167230(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // zf
  int v5; // eax
  __int64 v6; // r12
  int v7; // r14d
  __int64 v8; // rsi
  int v9; // r15d
  int v10; // r13d
  int v11; // edi
  int v12; // ebp
  int v13; // ecx
  int v14; // eax
  int v16; // edx
  int v17; // r13d
  int v18; // r8d
  int *v19; // rax
  __int64 v20; // r12
  int v21; // r15d
  __int64 v22; // rbp
  int v23; // edi
  int v24; // r14d
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r14
  int v29; // esi
  __int64 v30; // r12
  int v31; // ebp
  int v32; // r15d
  int v33; // edi
  __int64 v34; // rdx
  int v36; // ecx
  int v37; // eax
  int v38; // r12d
  int v39; // r15d
  int v40; // r13d
  int *v41; // rax
  __int64 v42; // r14
  int v43; // ebp
  __int64 v44; // rsi
  int v45; // eax
  int v46; // edi
  int v47; // ecx
  int v48; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140167230[224];
#define v49 (*(__int64 (*))(void *)(sr_frame_140167230 + 0)) /* [rsp+0h] */
#define v50 (*(int (*))(void *)(sr_frame_140167230 + 64)) /* [rsp+40h] */
#define v51 (*(int (*))(void *)(sr_frame_140167230 + 68)) /* [rsp+44h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_140167230 + 72)) /* [rsp+48h] */
#define v53 (*(_OWORD (*)[8])(void *)(sr_frame_140167230 + 80)) /* [rsp+50h] */
#define v54 (*(__int64 (*))(void *)(sr_frame_140167230 + 208)) /* [rsp+D0h] */

  *(_DWORD *)(a1 + 18392) = 0;
  *(_DWORD *)(a1 + 18296) = 0;
  *(_DWORD *)(a1 + 18200) = 0;
  *(_DWORD *)(a1 + 18104) = 0;
  v2 = *(_DWORD *)(a1 + 18536);
  *(_QWORD *)(a1 + 18464) = 0;
  *(_DWORD *)(a1 + 18476) = 0;
  *(_BYTE *)(a1 + 18472) = -1;
  v3 = 0x7FFFFFFF;
  if ( v2 )
    v3 = v2;
  *(_DWORD *)(a1 + 18500) = 0;
  v4 = *(_DWORD *)(a1 + 18480) == 0;
  v5 = *(_DWORD *)(a1 + 18516);
  *(_DWORD *)(a1 + 18540) = v3;
  if ( v4 )
  {
    if ( v5 == 1 )
    {
      v6 = *(int *)(a1 + 18520);
      v7 = 0;
      v8 = a1 + 96 * v6;
      v9 = (*(_DWORD *)(v8 + 18108) + 7) >> 3;
      v10 = (*(_DWORD *)(v8 + 18112) + 7) >> 3;
      if ( v10 > 0 )
      {
        while ( 1 )
        {
          v11 = 0;
          if ( v9 > 0 )
            break;
LABEL_17:
          if ( ++v7 >= v10 )
            return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
        }
        v12 = 0;
        while ( (unsigned int)sub_140164500(
                                a1,
                                v53,
                                1680LL * *(int *)(v8 + 18096) + a1 + 8,
                                1680LL * *(int *)(v8 + 18100) + a1 + 6728,
                                ((__int64)*(int *)(v8 + 18100) << 10) + a1 + 13960,
                                v6,
                                (_WORD *)(((__int64)*(int *)(v8 + 18092) << 7) + a1 + 13448)) )
        {
          (*(void (           **)(_QWORD, _QWORD, _OWORD *))(a1 + 18544))(
            v12 + *(_QWORD *)(v8 + 18128) + 8 * v7 * *(_DWORD *)(v8 + 18116),
            *(unsigned int *)(v8 + 18116),
            v53);
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
            *(_DWORD *)(a1 + 18392) = 0;
            v13 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            v14 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( v14 )
              v13 = v14;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = v13;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          ++v11;
          v12 += 8;
          if ( v11 >= v9 )
            goto LABEL_17;
        }
      }
    }
    else
    {
      v16 = 0;
      v50 = 0;
      if ( *(int *)(a1 + 18068) > 0 )
      {
        while ( 1 )
        {
          v17 = 0;
          if ( *(int *)(a1 + 18064) > 0 )
            break;
LABEL_38:
          v50 = ++v16;
          if ( v16 >= *(_DWORD *)(a1 + 18068) )
            return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
        }
        while ( 1 )
        {
          v18 = 0;
          v51 = 0;
          if ( *(int *)(a1 + 18516) > 0 )
            break;
LABEL_30:
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
            *(_DWORD *)(a1 + 18392) = 0;
            v26 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            v27 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( v27 )
              v26 = v27;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = v26;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          v16 = v50;
          if ( ++v17 >= *(_DWORD *)(a1 + 18064) )
            goto LABEL_38;
        }
        v19 = (int *)(a1 + 18520);
        v52 = a1 + 18520;
        while ( 1 )
        {
          v20 = *v19;
          v21 = 0;
          v22 = a1 + 96 * v20;
          if ( *(int *)(v22 + 18088) > 0 )
            break;
LABEL_29:
          ++v18;
          v19 = (int *)(v52 + 4);
          v51 = v18;
          v52 += 4;
          if ( v18 >= *(_DWORD *)(a1 + 18516) )
            goto LABEL_30;
        }
        while ( 1 )
        {
          v23 = *(_DWORD *)(v22 + 18084);
          v24 = 0;
          if ( v23 > 0 )
            break;
LABEL_27:
          if ( ++v21 >= *(_DWORD *)(v22 + 18088) )
          {
            v18 = v51;
            goto LABEL_29;
          }
        }
        while ( 1 )
        {
          v25 = v21 + v16 * *(_DWORD *)(v22 + 18088);
          if ( !(unsigned int)sub_140164500(
                                a1,
                                v53,
                                1680LL * *(int *)(v22 + 18096) + a1 + 8,
                                1680LL * *(int *)(v22 + 18100) + a1 + 6728,
                                ((__int64)*(int *)(v22 + 18100) << 10) + a1 + 13960,
                                v20,
                                (_WORD *)(((__int64)*(int *)(v22 + 18092) << 7) + a1 + 13448)) )
            break;
          (*(void (           **)(__int64, _QWORD, _OWORD *))(a1 + 18544))(
            *(_QWORD *)(v22 + 18128) + 8 * *(_DWORD *)(v22 + 18116) * v25 + (__int64)(8 * (v24 + v17 * v23)),
            *(unsigned int *)(v22 + 18116),
            v53);
          v23 = *(_DWORD *)(v22 + 18084);
          ++v24;
          v16 = v50;
          if ( v24 >= v23 )
            goto LABEL_27;
        }
      }
    }
  }
  else if ( v5 == 1 )
  {
    v28 = *(int *)(a1 + 18520);
    v29 = 0;
    v30 = 96 * v28;
    v31 = (*(_DWORD *)(96 * v28 + a1 + 18108) + 7) >> 3;
    v32 = (*(_DWORD *)(96 * v28 + a1 + 18112) + 7) >> 3;
    if ( v32 > 0 )
    {
      while ( 1 )
      {
        v33 = 0;
        if ( v31 > 0 )
          break;
LABEL_55:
        if ( ++v29 >= v32 )
          return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
      }
      while ( 1 )
      {
        v34 = *(_QWORD *)(v30 + a1 + 18160) + 2LL * ((v33 + v29 * *(_DWORD *)(v30 + a1 + 18168)) << 6);
        if ( !(*(_DWORD *)(a1 + 18484)
             ? sub_140164A80(
                 a1,
                 v34,
                 1680LL * *(int *)(a1 + v30 + 18100) + a1 + 6728,
                 ((__int64)*(int *)(a1 + v30 + 18100) << 10) + a1 + 13960)
             : (unsigned int)sub_140165200(a1, v34, 1680LL * *(int *)(a1 + v30 + 18096) + a1 + 8, v28)) )
          break;
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
          *(_DWORD *)(a1 + 18392) = 0;
          v36 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          v37 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( v37 )
            v36 = v37;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = v36;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++v33 >= v31 )
          goto LABEL_55;
      }
    }
  }
  else
  {
    v38 = 0;
    if ( *(int *)(a1 + 18068) > 0 )
    {
      while ( 1 )
      {
        v39 = 0;
        if ( *(int *)(a1 + 18064) > 0 )
          break;
LABEL_75:
        if ( ++v38 >= *(_DWORD *)(a1 + 18068) )
          return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
      }
      while ( 1 )
      {
        v40 = 0;
        if ( *(int *)(a1 + 18516) > 0 )
          break;
LABEL_67:
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
          *(_DWORD *)(a1 + 18392) = 0;
          v47 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          v48 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( v48 )
            v47 = v48;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = v47;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++v39 >= *(_DWORD *)(a1 + 18064) )
          goto LABEL_75;
      }
      v41 = (int *)(a1 + 18520);
      v52 = a1 + 18520;
      while ( 1 )
      {
        v42 = *v41;
        v43 = 0;
        v44 = a1 + 96 * v42;
        if ( *(int *)(v44 + 18088) > 0 )
          break;
LABEL_66:
        ++v40;
        v41 = (int *)(v52 + 4);
        v52 += 4;
        if ( v40 >= *(_DWORD *)(a1 + 18516) )
          goto LABEL_67;
      }
      while ( 1 )
      {
        v45 = *(_DWORD *)(v44 + 18084);
        v46 = 0;
        if ( v45 > 0 )
          break;
LABEL_65:
        if ( ++v43 >= *(_DWORD *)(v44 + 18088) )
          goto LABEL_66;
      }
      while ( (unsigned int)sub_140165200(
                              a1,
                              *(_QWORD *)(v44 + 18160)
                            + 2LL
                            * ((v46 + *(_DWORD *)(v44 + 18168) * (v43 + *(_DWORD *)(v44 + 18088) * v38) + v39 * v45) << 6),
                              1680LL * *(int *)(v44 + 18096) + a1 + 8,
                              v42) )
      {
        v45 = *(_DWORD *)(v44 + 18084);
        if ( ++v46 >= v45 )
          goto LABEL_65;
      }
    }
  }
  return sub_1401F8B20((unsigned __int64)&v49 ^ v54);
}
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54

//----- (0000000140167A50) ----------------------------------------------------
__int64            sub_140167A50(__int64 a1)
{
  _BYTE *v1; // rsi
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // edi
  int v6; // edi
  int v7; // r8d
  int v8; // r11d
  unsigned __int64 v9; // rdi
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // r11d
  int v15; // r14d
  int v16; // r8d
  unsigned int v17; // edx
  unsigned __int8 *v18; // rcx
  char v19; // al

  v1 = *(_BYTE **)(a1 + 24);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(int *)(a1 + 16) < 16 )
      {
        if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
          goto LABEL_40;
        sub_140160350(a1);
      }
      v3 = *(_DWORD *)(a1 + 20);
      v4 = v3 & 0x1FF;
      v5 = *(unsigned __int16 *)(a1 + 2 * v4 + 52);
      if ( *(_WORD *)(a1 + 2 * v4 + 52) )
      {
        *(_DWORD *)(a1 + 16) -= v5 >> 9;
        *(_DWORD *)(a1 + 20) = v3 >> (v5 >> 9);
        v6 = v5 & 0x1FF;
      }
      else
      {
        v6 = sub_14016FB90(a1, a1 + 52);
      }
      if ( v6 >= 256 )
        break;
      if ( v6 < 0 )
        goto LABEL_40;
      if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 40) )
      {
        if ( !(unsigned int)sub_14016F9E0(a1, (__int64)v1, 1u) )
          return 0;
        v1 = *(_BYTE **)(a1 + 24);
      }
      *v1++ = v6;
    }
    if ( v6 == 256 )
      break;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = sr_inflate_length_extra[v6 - 257];
    v9 = (unsigned int)sr_inflate_length_base[v6 - 257];
    if ( v8 )
    {
      if ( v7 < v8 )
      {
        sub_140160350(a1);
        v7 = *(_DWORD *)(a1 + 16);
      }
      v10 = *(_DWORD *)(a1 + 20);
      v7 -= v8;
      *(_DWORD *)(a1 + 20) = v10 >> v8;
      *(_DWORD *)(a1 + 16) = v7;
      v9 = (v10 & ((1 << v8) - 1)) + (unsigned int)v9;
    }
    if ( v7 < 16 )
    {
      if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_40;
      sub_140160350(a1);
    }
    v11 = *(_DWORD *)(a1 + 20);
    v12 = *(unsigned __int16 *)(a1 + 2LL * (v11 & 0x1FF) + 2072);
    if ( *(_WORD *)(a1 + 2LL * (v11 & 0x1FF) + 2072) )
    {
      *(_DWORD *)(a1 + 16) -= v12 >> 9;
      *(_DWORD *)(a1 + 20) = v11 >> (v12 >> 9);
      v13 = v12 & 0x1FF;
    }
    else
    {
      v13 = sub_14016FB90(a1, a1 + 2072);
    }
    if ( v13 < 0 )
    {
LABEL_40:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
      return 0;
    }
    v14 = dword_14026FE50[v13];
    v15 = dword_14026FDD0[v13];
    if ( v14 )
    {
      v16 = *(_DWORD *)(a1 + 16);
      if ( v16 < v14 )
      {
        sub_140160350(a1);
        v16 = *(_DWORD *)(a1 + 16);
      }
      v17 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v17 >> v14;
      *(_DWORD *)(a1 + 16) = v16 - v14;
      v15 += v17 & ((1 << v14) - 1);
    }
    if ( (__int64)&v1[-*(_QWORD *)(a1 + 32)] < v15 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad dist");
      return 0;
    }
    if ( (unsigned __int64)&v1[(int)v9] > *(_QWORD *)(a1 + 40) )
    {
      if ( !(unsigned int)sub_14016F9E0(a1, (__int64)v1, v9) )
        return 0;
      v1 = *(_BYTE **)(a1 + 24);
    }
    v18 = &v1[-v15];
    if ( v15 == 1 )
    {
      if ( (_DWORD)v9 )
      {
        sub_1401FCD30((void *)(uintptr_t)(v1), *v18, v9);
        v1 += v9;
      }
    }
    else
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        v19 = *v18++;
        *v1++ = v19;
      }
    }
  }
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v1);
  return 1;
}

//----- (0000000140167D10) ----------------------------------------------------
__int64            sub_140167D10(__int64 a1, int a2, int a3)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  unsigned int v8; // r15d
  int v9; // esi
  unsigned int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // edx
  __int64 v15; // rax
  char *v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // edi
  int v21; // edi
  unsigned int v22; // ecx
  unsigned __int8 *v23; // rax
  unsigned __int8 v24; // cl
  unsigned __int8 *v25; // rax
  unsigned int v26; // eax
  int v27; // ecx
  char *v28; // rax
  unsigned __int8 v29; // cl
  unsigned __int8 *v30; // rax
  unsigned int v31; // edi
  char v32; // si
  char v33; // cl
  char v34; // cl
  unsigned __int8 v35; // cl
  unsigned __int8 *v36; // rax
  unsigned int v37; // r9d
  unsigned int v38; // eax
  unsigned int v39; // r8d
  int v40; // ecx
  unsigned int v41; // esi
  __int64 v42; // rcx
  unsigned int v43; // edi
  char *v44; // rax
  char v45; // dl
  char *v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  int v49; // esi
  _WORD *v50; // rdi
  __int16 *v51; // rdi
  unsigned int v52; // esi
  char *v53; // r8
  unsigned __int64 v54; // rdx
  char v55; // cl
  char *v56; // rax
  int v57; // edi
  int v58; // r9d
  char v59; // r9
  char *v60; // rax
  char v61; // dl
  char *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rsi
  char *v65; // rax
  void *v66; // rax
  unsigned int v67; // edi
  int v68; // ecx
  unsigned __int8 v69; // r14
  int v70; // r9d
  char v71; // r15
  int v72; // eax
  int v73; // eax
  _WORD *v74; // rdi
  unsigned int v75; // esi
  __int16 v76; // dx
  _WORD *v77; // rax
  __int16 v78; // r8
  __int16 v79; // r9
  __int64 v80; // rcx
  unsigned __int16 v81; // dx
  __int64 v82; // rcx
  bool v83; // zf
  __int16 v84; // ax
  char v85; // dl
  _BYTE *v86; // rax
  char v87; // r8
  char v88; // r9
  __int64 v89; // rcx
  unsigned __int8 v90; // dl
  __int64 v91; // rcx
  char v92; // al
  _BYTE *v93; // rdi
  __int64 v94; // rsi
  int v95; // ecx
  __int64 v96; // rdx
  char v97; // cl
  unsigned __int8 *v98; // rdi
  unsigned int v99; // eax
  int v100; // ecx
  int v101; // r11d
  unsigned int v102; // r10d
  unsigned int v103; // eax
  __int64 v104; // rdx
  char v105; // cl
  int v106; // eax
  int v107; // esi
  unsigned __int8 *v108; // rdi
  int v109; // r14d
  __int64 v110; // rax
  __int64 v111; // r15
  __int64 v112; // r9
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned __int64 v116; // rax
  __int64 v118; // [rsp-20h] [rbp-1590h] BYREF
  sr_png_inflate_context sr_inflate;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140167D10[10464];
#define i (*(unsigned __int8 (*))(void *)(sr_frame_140167D10 + 0)) /* [rsp+20h] */
#define v120 (*(char (*))(void *)(sr_frame_140167D10 + 1)) /* [rsp+21h] */
#define v121 (*(__int16 (*))(void *)(sr_frame_140167D10 + 4)) /* [rsp+24h] */
#define v122 (*(char (*))(void *)(sr_frame_140167D10 + 6)) /* [rsp+26h] */
#define v123 (*(int (*))(void *)(sr_frame_140167D10 + 8)) /* [rsp+28h] */
#define v124 (*(int (*))(void *)(sr_frame_140167D10 + 12)) /* [rsp+2Ch] */
#define v125 (*(signed int (*))(void *)(sr_frame_140167D10 + 16)) /* [rsp+30h] */
#define v126 (*(int (*))(void *)(sr_frame_140167D10 + 20)) /* [rsp+34h] */
#define v127 (*(int (*))(void *)(sr_frame_140167D10 + 24)) /* [rsp+38h] */
#define v128 (*(int (*))(void *)(sr_frame_140167D10 + 28)) /* [rsp+3Ch] */
#define v129 (*(int (*))(void *)(sr_frame_140167D10 + 32)) /* [rsp+40h] */
#define v130 (*(unsigned int (*))(void *)(sr_frame_140167D10 + 40)) /* [rsp+48h] */
#define v131 (*(int (*))(void *)(sr_frame_140167D10 + 44)) /* [rsp+4Ch] */
#define v137 (*(_WORD (*)[520])(void *)(sr_frame_140167D10 + 9408)) /* [rsp+24E0h] */
#define v138 (*(__int64 (*))(void *)(sr_frame_140167D10 + 10448)) /* [rsp+28F0h] */

  v129 = a3;
  v124 = a2;
  v125 = 0;
  v127 = 0;
  v4 = *(_DWORD **)a1;
  v5 = 0;
  v6 = 0;
  v128 = 0;
  v126 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v120 = 0;
  v8 = 0;
  i = 0;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  if ( !(unsigned int)sub_14015CE80((__int64)v4) || a2 == 1 )
    return 0;
  while ( 1 )
  {
    v9 = sub_1401604F0((__int64)v4);
    v10 = sub_1401604F0((__int64)v4) + (v9 << 16);
    v130 = v10;
    v11 = sub_1401604F0((__int64)v4);
    v12 = sub_1401604F0((__int64)v4);
    v13 = v11 << 16;
    v14 = v13 + v12;
    v131 = v13 + v12;
    if ( (unsigned int)(v13 + v12) <= 0x49484452 )
      break;
    if ( v131 == 1347179589 )
    {
      if ( v123 )
        goto LABEL_9;
      if ( v10 > 0x300 || (v8 = v10 / 3, 3 * (v10 / 3) != v10) )
      {
        v15 = sr_client_static_tls();
        v16 = "invalid PLTE";
        goto LABEL_234;
      }
      v52 = 0;
      if ( !v8 )
        goto LABEL_128;
      v53 = *((char **)v4 + 24);
      while ( 2 )
      {
        v54 = *((_QWORD *)v4 + 25);
        if ( (unsigned __int64)v53 < v54 )
        {
          v55 = *v53++;
          goto LABEL_116;
        }
        if ( v4[12] )
        {
          sub_14016D910((__int64)v4);
          v56 = *((char **)v4 + 24);
          v54 = *((_QWORD *)v4 + 25);
          v55 = *v56;
          v53 = v56 + 1;
LABEL_116:
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v53);
          v57 = 4 * v52;
          LOBYTE(v137[2 * v52 + 8]) = v55;
          v58 = 4 * v52;
          if ( (unsigned __int64)v53 < v54 )
          {
            v59 = *v53++;
            goto LABEL_121;
          }
        }
        else
        {
          v57 = 4 * v52;
          LOBYTE(v137[2 * v52 + 8]) = 0;
          v58 = 4 * v52;
        }
        if ( v4[12] )
        {
          sub_14016D910((__int64)v4);
          v60 = *((char **)v4 + 24);
          v54 = *((_QWORD *)v4 + 25);
          v59 = *v60;
          v53 = v60 + 1;
LABEL_121:
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v53);
          *((_BYTE *)&v137[8] + (unsigned int)(v57 + 1)) = v59;
          if ( (unsigned __int64)v53 < v54 )
          {
            v61 = *v53++;
            *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v53);
            goto LABEL_127;
          }
        }
        else
        {
          *((_BYTE *)&v137[8] + (unsigned int)(v58 + 1)) = 0;
        }
        if ( v4[12] )
        {
          sub_14016D910((__int64)v4);
          v62 = *((char **)v4 + 24);
          v61 = *v62;
          v53 = v62 + 1;
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v62 + 1);
        }
        else
        {
          v61 = 0;
        }
LABEL_127:
        ++v52;
        *((_BYTE *)&v137[8] + (unsigned int)(v57 + 2)) = v61;
        *((_BYTE *)&v137[8] + (unsigned int)(v57 + 3)) = -1;
        if ( v52 >= v8 )
          goto LABEL_128;
        continue;
      }
    }
    if ( v131 != 1951551059 )
      goto LABEL_73;
    if ( v123 )
      goto LABEL_9;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v15 = sr_client_static_tls();
      v16 = "tRNS after IDAT";
      goto LABEL_234;
    }
    if ( i )
    {
      if ( v124 == 2 )
      {
        v4[2] = 4;
      return 1;
      }
      if ( !v8 )
      {
        v15 = sr_client_static_tls();
        v16 = "tRNS before PLTE";
        goto LABEL_234;
      }
      if ( v10 > v8 )
        goto LABEL_227;
      v43 = 0;
      for ( i = 4; v43 < v10; *((_BYTE *)&v137[8] + v47) = v45 )
      {
        v44 = *((char **)v4 + 24);
        if ( (unsigned __int64)v44 >= *((_QWORD *)v4 + 25) )
        {
          if ( v4[12] )
          {
            sub_14016D910((__int64)v4);
            v46 = *((char **)v4 + 24);
            v45 = *v46;
            *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v46 + 1);
          }
          else
          {
            v45 = 0;
          }
        }
        else
        {
          v45 = *v44;
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v44 + 1);
        }
        v47 = 4 * v43++ + 3;
      }
    }
    else
    {
      v48 = v4[2];
      if ( (v48 & 1) == 0 )
      {
        v15 = sr_client_static_tls();
        v16 = "tRNS with alpha";
LABEL_234:
        *(_QWORD *)(v15 + 16) = (uint64)(uintptr_t)(v16);
        return 0;
      }
      if ( v10 != 2 * v48 )
      {
LABEL_227:
        v15 = sr_client_static_tls();
        v16 = "bad tRNS len";
        goto LABEL_234;
      }
      v49 = 0;
      v120 = 1;
      if ( *(_DWORD *)(a1 + 32) == 16 )
      {
        if ( v48 > 0 )
        {
          v50 = v137;
          do
          {
            ++v49;
            *v50++ = sub_1401604F0((__int64)v4);
          }
          while ( v49 < v4[2] );
        }
      }
      else if ( v48 > 0 )
      {
        v51 = &v121;
        do
        {
          v51 = (__int16 *)((char *)v51 + 1);
          ++v49;
          *((_BYTE *)v51 - 1) = byte_14026E768[*(int *)(a1 + 32)] * sub_1401604F0((__int64)v4);
        }
        while ( v49 < v4[2] );
        v6 = v127;
      }
    }
LABEL_128:
    sub_1401604F0((__int64)v4);
    sub_1401604F0((__int64)v4);
  }
  if ( v13 + v12 == 1229472850 )
  {
    if ( !v123 )
    {
      v15 = sr_client_static_tls();
      v16 = "multiple IHDR";
      goto LABEL_234;
    }
    v123 = 0;
    if ( v10 != 13 )
    {
      v15 = sr_client_static_tls();
      v16 = "bad IHDR len";
      goto LABEL_234;
    }
    v20 = sub_1401604F0((__int64)v4);
    *v4 = (v20 << 16) + sub_1401604F0((__int64)v4);
    v21 = sub_1401604F0((__int64)v4);
    v22 = sub_1401604F0((__int64)v4) + (v21 << 16);
    v4[1] = v22;
    if ( v22 > 0x1000000 || *v4 > 0x1000000u )
    {
LABEL_70:
      v15 = sr_client_static_tls();
      v16 = "too large";
      goto LABEL_234;
    }
    v23 = *((unsigned __int8 **)v4 + 24);
    if ( (unsigned __int64)v23 >= *((_QWORD *)v4 + 25) )
    {
      if ( v4[12] )
      {
        sub_14016D910((__int64)v4);
        v25 = *((unsigned __int8 **)v4 + 24);
        v24 = *v25;
        *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v25 + 1);
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = *v23;
      *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v23 + 1);
    }
    v26 = v24;
    *(_DWORD *)(a1 + 32) = v24;
    if ( v24 != 1 )
    {
      if ( v24 > 0x10u || (v27 = 65812, !_bittest(&v27, v26)) )
      {
        v15 = sr_client_static_tls();
        v16 = "1/2/4/8/16-bit only";
        goto LABEL_234;
      }
    }
    v28 = *((char **)v4 + 24);
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( v4[12] )
      {
        sub_14016D910((__int64)v4);
        v30 = *((unsigned __int8 **)v4 + 24);
        v29 = *v30;
        v28 = (char *)(v30 + 1);
        *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
      }
      else
      {
        v29 = 0;
      }
    }
    else
    {
      v29 = *v28++;
      *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
    }
    v31 = v29;
    v128 = v29;
    if ( v29 > 6u )
    {
LABEL_219:
      v15 = sr_client_static_tls();
      v16 = "bad ctype";
      goto LABEL_234;
    }
    if ( v29 == 3 )
    {
      if ( *(_DWORD *)(a1 + 32) == 16 )
        goto LABEL_219;
      v32 = 3;
      i = 3;
    }
    else
    {
      if ( (v29 & 1) != 0 )
        goto LABEL_219;
      v32 = i;
    }
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( !v4[12] )
        goto LABEL_53;
      sub_14016D910((__int64)v4);
      v28 = *((char **)v4 + 24);
    }
    v33 = *v28++;
    *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
    if ( v33 )
    {
      v15 = sr_client_static_tls();
      v16 = "bad comp method";
      goto LABEL_234;
    }
LABEL_53:
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( !v4[12] )
      {
LABEL_57:
        if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
        {
          if ( v4[12] )
          {
            sub_14016D910((__int64)v4);
            v36 = *((unsigned __int8 **)v4 + 24);
            v35 = *v36;
            *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v36 + 1);
          }
          else
          {
            v35 = 0;
          }
        }
        else
        {
          v35 = *v28;
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28 + 1);
        }
        v6 = v35;
        v127 = v35;
        if ( v35 > 1u )
        {
          v15 = sr_client_static_tls();
          v16 = "bad interlace method";
          goto LABEL_234;
        }
        if ( !*v4 || (v37 = v4[1]) == 0 )
        {
          v15 = sr_client_static_tls();
          v16 = "0-pixel image";
          goto LABEL_234;
        }
        v38 = 0x40000000u / *v4;
        if ( v32 )
        {
          v4[2] = 1;
          if ( v38 >> 2 < v37 )
            goto LABEL_70;
        }
        else
        {
          v39 = (v31 & 2 | 1) + ((v31 >> 2) & 1);
          v4[2] = v39;
          if ( v38 / v39 < v37 )
            goto LABEL_70;
          if ( v124 == 2 )
            return 1;
        }
        goto LABEL_128;
      }
      sub_14016D910((__int64)v4);
      v28 = *((char **)v4 + 24);
    }
    v34 = *v28++;
    *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
    if ( v34 )
    {
      v15 = sr_client_static_tls();
      v16 = "bad filter method";
      goto LABEL_234;
    }
    goto LABEL_57;
  }
  if ( v131 == 1130840649 )
  {
    v126 = 1;
LABEL_75:
    if ( v10 )
    {
      if ( (v10 & 0x80000000) == 0 )
      {
        if ( *((_QWORD *)v4 + 2) && (v40 = v4[50] - v4[48], v40 < (int)v10) )
        {
          v41 = v10 - v40;
          v42 = *((_QWORD *)v4 + 5);
          *((_QWORD *)v4 + 24) = *((_QWORD *)v4 + 25);
          (*((void (           **)(__int64, _QWORD))v4 + 3))(v42, v41);
        }
        else
        {
          *((_QWORD *)v4 + 24) += (int)v10;
        }
      }
      else
      {
        *((_QWORD *)v4 + 24) = *((_QWORD *)v4 + 25);
      }
    }
    goto LABEL_128;
  }
  if ( v131 == 1229209940 )
  {
    if ( v123 )
      goto LABEL_9;
    if ( i && !v8 )
    {
      v15 = sr_client_static_tls();
      v16 = "no PLTE";
      goto LABEL_234;
    }
    if ( v124 == 2 )
    {
      v4[2] = i;
      return 1;
    }
    v17 = v125;
    v18 = v10 + v125;
    if ( (int)(v10 + v125) < v125 )
      return 0;
    if ( v18 > v5 )
    {
      if ( !v5 )
      {
        v5 = 4096;
        if ( v10 > 0x1000 )
          v5 = v10;
      }
      for ( ; v18 > v5; v5 *= 2 )
        ;
      v19 = j__realloc_base_sr(*(_QWORD *)(a1 + 8), v5);
      if ( !v19 )
        goto LABEL_210;
      *(_QWORD *)(a1 + 8) = v19;
      v17 = v125;
    }
    if ( !sub_140160860((__int64)v4, (__m128i *)(*(_QWORD *)(a1 + 8) + v17), v10) )
    {
      v15 = sr_client_static_tls();
      v16 = "outofdata";
      goto LABEL_234;
    }
    v125 = v18;
    goto LABEL_128;
  }
  if ( v131 != 1229278788 )
  {
LABEL_73:
    if ( v123 )
      goto LABEL_9;
    if ( (v14 & 0x20000000) == 0 )
    {
      byte_140301850 = (unsigned int)(v13 + v12) >> 24;
      byte_140301851 = (unsigned int)(v13 + v12) >> 16;
      byte_140301853 = v131;
      v116 = 0; /* compiler TLS slot access recovered below */
      byte_140301852 = BYTE1(v14);
      v15 = sr_client_static_tls();
      v16 = &byte_140301850;
      goto LABEL_234;
    }
    goto LABEL_75;
  }
  if ( v123 )
  {
LABEL_9:
    v15 = sr_client_static_tls();
    v16 = "first not IHDR";
    goto LABEL_234;
  }
  if (v124) return 1;
  if ( !v124 )
  {
    v63 = *(_QWORD *)(a1 + 8);
    if ( !v63 )
    {
      v15 = sr_client_static_tls();
      v16 = "no IDAT";
      goto LABEL_234;
    }
    v64 = (int)(v4[1] * (v4[2] * ((unsigned int)(*(_DWORD *)(a1 + 32) * *v4 + 7) >> 3) + 1));
    v65 = (char *)sr_path_malloc(v64);
    if ( v65 )
    {
      sr_inflate.output_start = v65;
      sr_inflate.input_end = v63 + v125;
      sr_inflate.output = v65;
      sr_inflate.input = v63;
      sr_inflate.output_end = &v65[v64];
      sr_inflate.expandable = 1;
      if ( (unsigned int)sub_140168E00((__int64)(uintptr_t)&sr_inflate, v126 == 0) )
      {
        v66 = sr_inflate.output_start;
        v67 = (_DWORD)sr_inflate.output - (_DWORD)sr_inflate.output_start;
        *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(sr_inflate.output_start);
        if ( v66 )
        {
          free(*(void **)(a1 + 8));
          v68 = v129;
          v69 = i;
          *(_QWORD *)(a1 + 8) = 0;
          v70 = v4[2] + 1;
          if ( v68 != v70 || v68 == 3 || v69 )
          {
            v71 = v120;
            if ( !v120 )
              v70 = v4[2];
          }
          else
          {
            v71 = v120;
          }
          v72 = v128;
          v4[3] = v70;
          if ( (unsigned int)sub_14015E260(a1, *(unsigned __int8 **)(a1 + 16), v67, v70, *(_DWORD *)(a1 + 32), v72, v6) )
          {
            if ( v71 )
            {
              v73 = v4[3];
              v74 = *(_WORD **)(a1 + 24);
              v75 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( *(_DWORD *)(a1 + 32) == 16 )
              {
                if ( v73 == 2 )
                {
                  if ( v75 )
                  {
                    v81 = v137[0];
                    v82 = v75;
                    do
                    {
                      v83 = *v74 == v81;
                      v74 += 2;
                      v84 = -1;
                      if ( v83 )
                        v84 = 0;
                      *(v74 - 1) = v84;
                      --v82;
                    }
                    while ( v82 );
                  }
                }
                else
                {
                  if ( v73 != 4 )
                    sub_14023E640(
                      (char *)L"out_n == 2 || out_n == 4",
                      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                      0x12DCu);
                  if ( v75 )
                  {
                    v76 = v137[2];
                    v77 = v74 + 2;
                    v78 = v137[1];
                    v79 = v137[0];
                    v80 = v75;
                    do
                    {
                      if ( *(v77 - 2) == v79 && *(v77 - 1) == v78 && *v77 == v76 )
                        v77[1] = 0;
                      v77 += 4;
                      --v80;
                    }
                    while ( v80 );
                    v69 = i;
                  }
                }
              }
              else if ( v73 == 2 )
              {
                if ( v75 )
                {
                  v90 = v121;
                  v91 = v75;
                  do
                  {
                    v83 = *(_BYTE *)v74++ == v90;
                    v92 = -1;
                    if ( v83 )
                      v92 = 0;
                    *((_BYTE *)v74 - 1) = v92;
                    --v91;
                  }
                  while ( v91 );
                }
              }
              else
              {
                if ( v73 != 4 )
                  sub_14023E640(
                    (char *)L"out_n == 2 || out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x12C3u);
                if ( v75 )
                {
                  v85 = v122;
                  v86 = v74 + 1;
                  v87 = HIBYTE(v121);
                  v88 = v121;
                  v89 = v75;
                  do
                  {
                    if ( *(v86 - 2) == v88 && *(v86 - 1) == v87 && *v86 == v85 )
                      v86[1] = 0;
                    v86 += 4;
                    --v89;
                  }
                  while ( v89 );
                }
              }
            }
            if ( v126 && dword_140404A6C[18215124] && (int)v4[3] > 2 )
            {
              v93 = *(_BYTE **)(a1 + 24);
              v94 = (unsigned int)(**(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL));
              v95 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
              if ( v95 == 3 )
              {
                if ( (_DWORD)v94 )
                {
                  v96 = (unsigned int)v94;
                  do
                  {
                    v97 = *v93;
                    *v93 = v93[2];
                    v93[2] = v97;
                    v93 += 3;
                    --v96;
                  }
                  while ( v96 );
                }
              }
              else
              {
                if ( v95 != 4 )
                  sub_14023E640(
                    (char *)L"s->img_out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x132Du);
                if ( (_DWORD)v94 )
                {
                  if ( dword_140404A6C[18215123] )
                  {
                    v98 = v93 + 1;
                    do
                    {
                      v99 = v98[2];
                      v100 = *(v98 - 1);
                      v101 = v98[1];
                      if ( (_BYTE)v99 )
                      {
                        *v98 = ((v99 >> 1) + 255 * *v98) / v99;
                        v102 = ((v99 >> 1) + 255 * v100) / v99;
                        v103 = ((v99 >> 1) + 255 * v101) / v99;
                      }
                      else
                      {
                        LOBYTE(v102) = *(v98 - 1);
                        LOBYTE(v103) = v98[1];
                      }
                      *(v98 - 1) = v103;
                      v98[1] = v102;
                      v98 += 4;
                      --v94;
                    }
                    while ( v94 );
                  }
                  else
                  {
                    v104 = (unsigned int)v94;
                    do
                    {
                      v105 = *v93;
                      *v93 = v93[2];
                      v93[2] = v105;
                      v93 += 4;
                      --v104;
                    }
                    while ( v104 );
                  }
                }
              }
            }
            if ( v69 )
            {
              v106 = v129;
              v107 = v69;
              v4[2] = v69;
              v4[3] = v69;
              if ( v106 >= 3 )
              {
                v4[3] = v106;
                v107 = v106;
              }
              v108 = *(unsigned __int8 **)(a1 + 24);
              v109 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( v109 < 0 || v109 > 0x7FFFFFFF / v107 || (v110 = sr_path_malloc(v109 * v107), (v111 = v110) == 0) )
              {
LABEL_210:
                v15 = sr_client_static_tls();
                v16 = "outofmem";
                goto LABEL_234;
              }
              if ( v109 )
              {
                v112 = (unsigned int)v109;
                v113 = v110 + 2;
                if ( v107 == 3 )
                {
                  do
                  {
                    v114 = *v108;
                    v113 += 3;
                    ++v108;
                    *(_BYTE *)(v113 - 5) = v137[2 * v114 + 8];
                    *(_BYTE *)(v113 - 4) = HIBYTE(v137[2 * v114 + 8]);
                    *(_BYTE *)(v113 - 3) = v137[2 * v114 + 9];
                    --v112;
                  }
                  while ( v112 );
                }
                else
                {
                  do
                  {
                    v115 = *v108;
                    v113 += 4;
                    ++v108;
                    *(_BYTE *)(v113 - 6) = v137[2 * v115 + 8];
                    *(_BYTE *)(v113 - 5) = HIBYTE(v137[2 * v115 + 8]);
                    *(_BYTE *)(v113 - 4) = v137[2 * v115 + 9];
                    *(_BYTE *)(v113 - 3) = HIBYTE(v137[2 * v115 + 9]);
                    --v112;
                  }
                  while ( v112 );
                }
              }
              free(*(void **)(a1 + 24));
              *(_QWORD *)(a1 + 24) = v111;
            }
            else if ( v71 )
            {
              ++v4[2];
            }
            free(*(void **)(a1 + 16));
            *(_QWORD *)(a1 + 16) = 0;
            sub_140160670((__int64)v4);
            return 1;
          }
        }
      }
      else
      {
        free(sr_inflate.output_start);
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return 0;
}
#undef i
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v137
#undef v138

// 1401688D3: conditional instruction was optimized away because esi.4>=1
// 1401688D9: conditional instruction was optimized away because esi.4>=1
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 14026E768: using guessed type _BYTE byte_14026E768[24];
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272960: using guessed type __int16[25];
// 140272998: using guessed type __int16[18];
// 140301850: using guessed type char byte_140301850;
// 140301851: using guessed type char byte_140301851;
// 140301852: using guessed type char byte_140301852;
// 140301853: using guessed type char byte_140301853;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140168C80) ----------------------------------------------------
__int64            sub_140168C80(char **a1)
{
  unsigned char sr_stored_header[4]; /* native RSP+30..33 */
  int v1; // eax
  int v3; // r9d
  int v4; // r11d
  int v5; // r8d
  bool v6; // sf
  unsigned int v7; // ecx
  unsigned __int8 *v8; // rdx
  int v9; // eax
  __int64 v11; // rcx
  char *v12; // r8
  char *v13; // rax
  char v14; // dl
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  char *v17; // rdx





  v1 = *((_DWORD *)a1 + 4);
  v3 = v1;
  v4 = v1 & 7;
  if ( (v1 & 7) != 0 )
  {
    if ( v1 < v4 )
    {
      sub_140160350((__int64)a1);
      v1 = *((_DWORD *)a1 + 4);
    }
    *((_DWORD *)a1 + 5) >>= v4;
    v1 -= v4;
    *((_DWORD *)a1 + 4) = v1;
    v3 = v1;
  }
  v5 = 0;
  v6 = v1 < 0;
  if ( v1 > 0 )
  {
    v7 = *((_DWORD *)a1 + 5);
    v8 = &sr_stored_header[0];
    do
    {
      ++v5;
      *v8++ = *((_BYTE *)a1 + 20);
      v9 = v3 - 8;
      v7 >>= 8;
      *((_DWORD *)a1 + 5) = v7;
      v3 = v9;
      v6 = v9 < 0;
    }
    while ( v9 > 0 );
    *((_DWORD *)a1 + 4) = v9;
  }
  if ( v6 )
    goto LABEL_10;
  v11 = v5;
  if ( v5 < 4LL )
  {
    v12 = a1[1];
    v13 = *a1;
    do
    {
      if ( v13 < v12 )
      {
        v14 = *v13++;
        *a1 = v13;
      }
      else
      {
        v14 = 0;
      }
      *(&sr_stored_header[0] + v11++) = v14;
    }
    while ( v11 < 4 );
  }
  v15 = sr_stored_header[0] + (sr_stored_header[1] << 8);
  if ( sr_stored_header[2] + (sr_stored_header[3] << 8) != ((sr_stored_header[0] + (sr_stored_header[1] << 8)) ^ 0xFFFF) )
  {
LABEL_10:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("zlib corrupt");
    return 0;
  }
  v16 = (unsigned int)v15;
  if ( &(*a1)[(unsigned int)v15] > a1[1] )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("read past buffer");
    return 0;
  }
  v17 = a1[3];
  if ( &v17[v15] > a1[5] && !(unsigned int)sub_14016F9E0((__int64)a1, (__int64)v17, v15) )
    return 0;
  sub_1401FC920((__m128i *)a1[3], (     __m128i *)*a1, v16);
  *a1 += v16;
  a1[3] += v16;
  return 1;
}

// 140168CA8: variable 'v4' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140168E00) ----------------------------------------------------
__int64            sub_140168E00(__int64 a1, int a2)
{
  char *v3; // rcx
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned __int8 *v6; // rcx
  int v7; // r10d
  unsigned __int8 *v8; // rcx
  int v10; // r8d
  unsigned int v11; // r9d
  int v12; // edx
  unsigned __int64 v13; // r10
  char *v14; // rax
  unsigned __int8 v15; // cl
  unsigned int v16; // edx
  int v17; // edi
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r10d
  unsigned __int64 v21; // r11
  char *v22; // rax
  unsigned __int8 v23; // cl
  int v24; // ecx
  int v25; // eax
  int v26; // eax

  if ( a2 )
  {
    v3 = *(char **)a1;
    v4 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int64)v3 >= v4
      || (v5 = (unsigned __int8)*v3, v6 = (unsigned __int8 *)(v3 + 1), *(_QWORD *)a1 = (uint64)(uintptr_t)(v6), (unsigned __int64)v6 >= v4)
      || (v7 = *v6, v8 = v6 + 1, *(_QWORD *)a1 = (uint64)(uintptr_t)(v8), (unsigned __int64)v8 >= v4)
      || v7 + (v5 << 8) != 31 * ((v7 + (v5 << 8)) / 0x1Fu) )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad zlib header");
      return 0;
    }
    if ( (v7 & 0x20) != 0 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no preset dict");
      return 0;
    }
    if ( (v5 & 0xF) != 8 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad compression");
      return 0;
    }
  }
  *(_QWORD *)(a1 + 16) = 0;
  do
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 < 1 )
    {
      v11 = *(_DWORD *)(a1 + 20);
      v12 = *(_DWORD *)(a1 + 16);
      if ( v11 >= 1 << v10 )
      {
LABEL_21:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v14 = *(char **)a1;
          if ( *(_QWORD *)a1 < v13 )
          {
            v15 = *v14;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(v14 + 1);
          }
          else
          {
            v15 = 0;
          }
          v10 = v12 + 8;
          *(_DWORD *)(a1 + 16) = v12 + 8;
          v11 |= v15 << v12;
          *(_DWORD *)(a1 + 20) = v11;
          if ( v12 + 8 > 24 )
            break;
          v12 += 8;
          if ( v11 >= 1 << v10 )
            goto LABEL_21;
        }
      }
    }
    v16 = *(_DWORD *)(a1 + 20) >> 1;
    v17 = *(_DWORD *)(a1 + 20) & 1;
    v18 = v10 - 1;
    *(_DWORD *)(a1 + 20) = v16;
    *(_DWORD *)(a1 + 16) = v18;
    if ( v18 < 2 )
    {
      v19 = v18;
      v20 = v16;
      if ( v16 >= 1 << v18 )
      {
LABEL_30:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v22 = *(char **)a1;
          if ( *(_QWORD *)a1 < v21 )
          {
            v23 = *v22;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(v22 + 1);
          }
          else
          {
            v23 = 0;
          }
          v18 = v19 + 8;
          *(_DWORD *)(a1 + 16) = v19 + 8;
          v16 = v20 | (v23 << v19);
          *(_DWORD *)(a1 + 20) = v16;
          v20 = v16;
          if ( v19 + 8 > 24 )
            break;
          v19 += 8;
          if ( v16 >= 1 << v18 )
            goto LABEL_30;
        }
      }
    }
    *(_DWORD *)(a1 + 20) = v16 >> 2;
    *(_DWORD *)(a1 + 16) = v18 - 2;
    v24 = v16 & 3;
    if ( (v16 & 3) != 0 )
    {
      if ( v24 == 3 )
        return 0;
      if ( v24 == 1 )
      {
        if ( !(unsigned int)sub_14016F730(a1 + 52, byte_14026FEF0, 288) )
          return 0;
        v26 = sub_14016F730(a1 + 2072, byte_140270010, 32);
      }
      else
      {
        v26 = sub_14015CF70(a1);
      }
      if ( !v26 )
        return 0;
      v25 = sub_140167A50(a1);
    }
    else
    {
      v25 = sub_140168C80((char **)a1);
    }
    if ( !v25 )
      return 0;
  }
  while ( !v17 );
  return 1;
}

// 14026FEF0: using guessed type unsigned __int8 byte_14026FEF0[288];
// 140270010: using guessed type unsigned __int8 byte_140270010[40];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401691A0) ----------------------------------------------------
__int64            sub_1401691A0(__int64 a1, int *a2, int *a3, char *a4)
{
  __int64 v4; // r15
  int *v5; // rsi
  int *v6; // r14
  char *v7; // rax
  unsigned __int64 *v9; // rdi
  char v10; // r13
  int v11; // ecx
  int v12; // ecx
  char *v13; // r12
  char *v14; // rcx
  char *v15; // rsi
  unsigned __int64 v16; // rax
  char v17; // r14
  char *v18; // rcx
  char v19; // bp
  unsigned __int64 v20; // rcx
  char *v21; // rcx
  char v22; // dl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401691A0[96];
#define v24 (*(__int64 (*))(void *)(sr_frame_1401691A0 + 0)) /* [rsp+0h] */
#define v25 (*(char (*))(void *)(sr_frame_1401691A0 + 32)) /* [rsp+20h] */
#define v26 (*(char * (*))(void *)(sr_frame_1401691A0 + 40)) /* [rsp+28h] */
#define v27 (*(char (*))(void *)(sr_frame_1401691A0 + 48)) /* [rsp+30h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_1401691A0 + 80)) /* [rsp+50h] */

  v4 = 0;
  v5 = (int *)&v25;
  v6 = (int *)&v25;
  v7 = &v25;
  if ( a2 )
    v5 = a2;
  v9 = (unsigned __int64 *)(a1 + 192);
  v10 = 0;
  if ( a3 )
    v6 = a3;
  if ( a4 )
    v7 = a4;
  v26 = v7;
  if ( !(unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
    goto LABEL_8;
  if ( *(_QWORD *)(a1 + 16) && (v11 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v11 < 88) )
  {
    *v9 = *(_QWORD *)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(88 - v11));
  }
  else
  {
    *v9 += 88LL;
  }
  *v5 = sub_1401604F0(a1);
  *v6 = sub_1401604F0(a1);
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_16:
    if ( *v9 >= *(_QWORD *)(a1 + 200) )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_17:
  if ( !*v5 || 0x10000000 / *v5 >= *v6 )
  {
    if ( *(_QWORD *)(a1 + 16) && (v12 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v12 < 8) )
    {
      *v9 = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(8 - v12));
    }
    else
    {
      *v9 += 8LL;
    }
    v13 = &v27;
    while ( 1 )
    {
      if ( v4 == 10 )
        return sub_1401F8B20((unsigned __int64)&v24 ^ v28);
      v14 = (char *)*v9;
      v15 = v13;
      v16 = *(_QWORD *)(a1 + 200);
      v13 += 3;
      ++v4;
      if ( *v9 >= v16 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v17 = 0;
          goto LABEL_32;
        }
        sub_14016D910(a1);
        v17 = *(_BYTE *)*v9;
        v18 = (char *)(*v9 + 1);
        v16 = *(_QWORD *)(a1 + 200);
      }
      else
      {
        v17 = *v14;
        v18 = v14 + 1;
      }
      *v9 = (unsigned __int64)v18;
      if ( (unsigned __int64)v18 < v16 )
      {
        v19 = *v18;
        v20 = (unsigned __int64)(v18 + 1);
        goto LABEL_34;
      }
LABEL_32:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v19 = 0;
        goto LABEL_37;
      }
      sub_14016D910(a1);
      v19 = *(_BYTE *)*v9;
      v20 = *v9 + 1;
      v16 = *(_QWORD *)(a1 + 200);
LABEL_34:
      *v9 = v20;
      if ( v20 < v16 )
      {
        v21 = (char *)(v20 + 1);
        goto LABEL_39;
      }
LABEL_37:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v15[1] = 0;
        goto LABEL_42;
      }
      sub_14016D910(a1);
      v16 = *(_QWORD *)(a1 + 200);
      v21 = (char *)(*v9 + 1);
LABEL_39:
      *v9 = (unsigned __int64)v21;
      if ( (unsigned __int64)v21 < v16 )
      {
        v22 = *v21;
        *v9 = (unsigned __int64)(v21 + 1);
        goto LABEL_45;
      }
LABEL_42:
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v22 = *(_BYTE *)(*v9)++;
      }
      else
      {
        v22 = 0;
      }
LABEL_45:
      v10 |= v22;
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_49;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_52;
      }
      if ( *v9 >= *(_QWORD *)(a1 + 200) )
        goto LABEL_52;
LABEL_49:
      if ( v19 != 8 )
      {
LABEL_52:
        *v9 = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        return sub_1401F8B20((unsigned __int64)&v24 ^ v28);
      }
      if ( !v17 )
      {
        *(_DWORD *)v26 = ((v10 & 0x10) != 0) + 3;
        return sub_1401F8B20((unsigned __int64)&v24 ^ v28);
      }
    }
  }
LABEL_8:
  *v9 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return sub_1401F8B20((unsigned __int64)&v24 ^ v28);
}
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28


//----- (0000000140169470) ----------------------------------------------------
__int64            sub_140169470(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char *v5; // rax
  char v6; // cl
  char *v7; // rax

  v4 = 0;
  while ( 1 )
  {
    v5 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v7 = *(char **)(a1 + 192);
        v6 = *v7;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = *v5;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    }
    if ( v6 != *(_BYTE *)(v4 + a2) )
      break;
    if ( ++v4 >= 4 )
      return 1;
  }
  return 0;
}


//----- (0000000140169510) ----------------------------------------------------
char *           sub_140169510(__int64 a1, int *a2, int *a3, int *a4, int a5)
{
  int *v5; // r15
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  int v14; // ebp
  _WORD *v15; // r14
  int v16; // ebp
  int v17; // r8d
  char v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = (int *)&v18;
  if ( a4 )
    v5 = a4;
  v9 = 92;
  do
  {
    v10 = *(_QWORD *)(a1 + 192);
    if ( v10 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = v10 + 1;
    }
    --v9;
  }
  while ( v9 );
  v11 = sub_1401604F0(a1);
  v12 = sub_1401604F0(a1);
  if ( v12 > 0x1000000 || v11 > 0x1000000 )
    goto LABEL_32;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      goto LABEL_17;
    if ( !*(_DWORD *)(a1 + 48) )
    {
LABEL_16:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad file");
      return nullptr;
    }
  }
  if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
    goto LABEL_16;
LABEL_17:
  if ( v11 < 0 || v12 < 0 || v12 && v11 > 0x7FFFFFFF / v12 || (v14 = v11 * v12, v11 * v12 < 0) || v14 > 0x1FFFFFFF )
  {
LABEL_32:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return nullptr;
  }
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  if ( v12 && v11 > 0x7FFFFFFF / v12 )
  {
    v15 = nullptr;
    v16 = 4 * v14;
  }
  else
  {
    v16 = 4 * v14;
    v15 = (_WORD *)sr_path_malloc(v16);
  }
  sub_1401FCD30((void *)(uintptr_t)(v15), 0xFFu, v16);
  if ( !sub_140169770(a1, v11, v12, v5, (__int64)v15) )
  {
    free(v15);
    v15 = nullptr;
  }
  v17 = a5;
  *a2 = v11;
  *a3 = v12;
  if ( !v17 )
    v17 = *v5;
  return sub_14015D7E0((char *)v15, 4, v17, v11, v12);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140169770) ----------------------------------------------------
__int64            sub_140169770(__int64 a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v5; // r14
  char v6; // r15
  __int64 v7; // r13
  char *v10; // rax
  unsigned __int64 v11; // rcx
  _BYTE *v12; // rsi
  int v13; // eax
  char v14; // bp
  char *v15; // rax
  int v16; // eax
  char v17; // dl
  char *v18; // rax
  int v19; // eax
  char v20; // dl
  char *v21; // rax
  char v22; // cl
  int v23; // eax
  char *v24; // rax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // r12d
  _BYTE *v29; // rax
  __int64 v30; // rdx
  _BYTE *v31; // r13
  int v32; // ecx
  int v33; // ecx
  unsigned __int8 *v34; // rdi
  unsigned __int8 *v35; // rax
  unsigned __int8 v36; // cl
  unsigned __int8 *v37; // rax
  unsigned int v38; // r15d
  unsigned __int8 *v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int8 v41; // dl
  unsigned __int8 *v42; // rax
  int v43; // r15d
  unsigned __int8 v44; // cl
  int v45; // r15d
  unsigned __int8 *v46; // rax
  unsigned __int8 v47; // cl
  int v48; // ebp
  int v49; // esi
  __int64 v50; // rdi
  char *v51; // rax
  unsigned __int64 v52; // rcx
  char v53; // cl
  char *v54; // rax
  char v55; // al
  char v56; // dl
  char v57; // r8
  char v58; // r9
  __int64 v59; // rcx
  int v60; // r14d
  int v61; // ebp
  int v62; // esi
  __int64 v63; // rdi
  char *v64; // rax
  unsigned __int64 v65; // rcx
  char v66; // cl
  char *v67; // rax
  int v68; // r15d
  unsigned __int8 *v69; // r12
  unsigned __int8 *v70; // rax
  unsigned __int8 v71; // di
  unsigned __int8 *v72; // rax
  int v73; // ebp
  int v74; // esi
  unsigned __int8 v75; // r14
  __int64 j; // rdi
  char *v77; // rax
  unsigned __int64 v78; // rcx
  char v79; // cl
  char *v80; // rax
  char v81; // al
  __int64 v82; // rcx
  char v83; // dl
  char v84; // r8
  char v85; // r9
  int v86; // r15d
  int v87; // r14d
  int v88; // ebp
  __int64 i; // rsi
  char *v90; // rax
  unsigned __int64 v91; // rcx
  char v92; // cl
  int v93; // eax
  char *v94; // rax
       char *v95; // rdx
  __int64 v96; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140169770[144];
#define v98 (*(__int64 (*))(void *)(sr_frame_140169770 + 0)) /* [rsp+0h] */
#define v99 (*(int (*))(void *)(sr_frame_140169770 + 32)) /* [rsp+20h] */
#define v100 (*(_BYTE (*)[4])(void *)(sr_frame_140169770 + 36)) /* [rsp+24h] */
#define v101 (*(_BYTE (*)[4])(void *)(sr_frame_140169770 + 40)) /* [rsp+28h] */
#define v102 (*(int (*))(void *)(sr_frame_140169770 + 44)) /* [rsp+2Ch] */
#define v103 (*(int (*))(void *)(sr_frame_140169770 + 48)) /* [rsp+30h] */
#define v104 (*(int (*))(void *)(sr_frame_140169770 + 52)) /* [rsp+34h] */
#define v105 (*(__int64 * (*))(void *)(sr_frame_140169770 + 56)) /* [rsp+38h] */
#define v106 (*(char * (*))(void *)(sr_frame_140169770 + 64)) /* [rsp+40h] */
#define v107 (*(__int64 (*))(void *)(sr_frame_140169770 + 72)) /* [rsp+48h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_140169770 + 80)) /* [rsp+50h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_140169770 + 88)) /* [rsp+58h] */
#define v110 (*(_BYTE * (*))(void *)(sr_frame_140169770 + 96)) /* [rsp+60h] */
#define v111 (*(_QWORD (*)[5])(void *)(sr_frame_140169770 + 104)) /* [rsp+68h] */

  v5 = v111;
  v6 = 0;
  v7 = 0;
  v108 = a5;
  v102 = a3;
  v99 = a2;
  do
  {
    if ( v7 == 10 )
      goto LABEL_190;
    v10 = *(char **)(a1 + 192);
    ++v7;
    v11 = *(_QWORD *)(a1 + 200);
    v12 = v5;
    v5 = (_QWORD *)((char *)v5 + 3);
    v109 = v7;
    if ( (unsigned __int64)v10 >= v11 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v14 = 0;
        goto LABEL_12;
      }
      v13 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v13 )
      {
        v11 = v13 + a1 + 56;
        *(_QWORD *)(a1 + 200) = v11;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        v11 = *(_QWORD *)(a1 + 200);
      }
      v10 = *(char **)(a1 + 192);
    }
    v14 = *v10;
    v15 = v10 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15);
    if ( (unsigned __int64)v15 < v11 )
      goto LABEL_17;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      v16 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v16 )
      {
        v11 = v16 + a1 + 56;
        *(_QWORD *)(a1 + 200) = v11;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        v11 = *(_QWORD *)(a1 + 200);
      }
      v15 = *(char **)(a1 + 192);
LABEL_17:
      v17 = *v15;
      v18 = v15 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v18);
      *v12 = v17;
      if ( (unsigned __int64)v18 < v11 )
        goto LABEL_25;
      goto LABEL_20;
    }
    *v12 = 0;
LABEL_20:
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v12[1] = 0;
      goto LABEL_28;
    }
    v19 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
            *(_QWORD *)(a1 + 40),
            a1 + 56,
            *(unsigned int *)(a1 + 52));
    *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 192) = a1 + 56;
    if ( v19 )
    {
      v11 = v19 + a1 + 56;
      *(_QWORD *)(a1 + 200) = v11;
    }
    else
    {
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 200) = a1 + 57;
      *(_BYTE *)(a1 + 56) = 0;
      v11 = *(_QWORD *)(a1 + 200);
    }
    v18 = *(char **)(a1 + 192);
LABEL_25:
    v20 = *v18;
    v21 = v18 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21);
    v12[1] = v20;
    if ( (unsigned __int64)v21 < v11 )
    {
      v22 = *v21;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21 + 1);
      goto LABEL_34;
    }
LABEL_28:
    if ( *(_DWORD *)(a1 + 48) )
    {
      v23 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v23 )
      {
        *(_QWORD *)(a1 + 200) = v23 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v24 = *(char **)(a1 + 192);
      v22 = *v24;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v24 + 1);
    }
    else
    {
      v22 = 0;
    }
LABEL_34:
    v6 |= v22;
    v12[2] = v22;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_38;
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_189;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
LABEL_38:
    if ( *v12 != 8 )
      goto LABEL_190;
  }
  while ( v14 );
  v25 = 0;
  v104 = 0;
  *a4 = ((v6 & 0x10) != 0) + 3;
  if ( v102 <= 0 )
    return sub_1401F8B20((unsigned __int64)&v98 ^ v111[4]);
  v26 = v102;
  uint64 sr_local_image_tls=sr_client_static_tls();
  v105 = (__int64 *)&sr_local_image_tls;
  while ( 1 )
  {
    v27 = 0;
    v103 = 0;
    v107 = 0;
    if ( v7 > 0 )
      break;
LABEL_184:
    v104 = ++v25;
    if ( v25 >= v26 )
      return sub_1401F8B20((unsigned __int64)&v98 ^ v111[4]);
  }
  v28 = v99;
  v29 = (_BYTE *)(v108 + 4 * v25 * v99);
  v110 = v29;
LABEL_44:
  v30 = 3 * v27;
  v31 = v29;
  v32 = *((unsigned __int8 *)v111 + 3 * v27 + 1);
  if ( !v32 )
  {
    v86 = 0;
    if ( v28 <= 0 )
      goto LABEL_182;
    v87 = *((unsigned __int8 *)v111 + v30 + 2);
    while ( 1 )
    {
      v88 = 128;
      for ( i = 0; i < 4; ++i )
      {
        if ( (v88 & v87) == 0 )
          goto LABEL_177;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_167;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_167:
          v90 = *(char **)(a1 + 192);
          v91 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)v90 >= v91 )
          {
LABEL_188:
            v95 = "bad file";
            v96 = *v105;
LABEL_191:
            *(_QWORD *)(v96 + 16) = (uint64)(uintptr_t)(v95);
            return sub_1401F8B20((unsigned __int64)&v98 ^ v111[4]);
          }
          goto LABEL_168;
        }
        v90 = *(char **)(a1 + 192);
        v91 = *(_QWORD *)(a1 + 200);
LABEL_168:
        if ( (unsigned __int64)v90 >= v91 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v93 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v93 )
            {
              *(_QWORD *)(a1 + 200) = v93 + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            v94 = *(char **)(a1 + 192);
            v92 = *v94;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v94 + 1);
          }
          else
          {
            v92 = 0;
          }
        }
        else
        {
          v92 = *v90;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v90 + 1);
        }
        v31[i] = v92;
LABEL_177:
        v88 >>= 1;
      }
      if ( !v31 )
        return sub_1401F8B20((unsigned __int64)&v98 ^ v111[4]);
      ++v86;
      v31 += 4;
      if ( v86 >= v28 )
      {
LABEL_182:
        ++v103;
        v27 = v107 + 1;
        v7 = v109;
        v29 = v110;
        v107 = v27;
        if ( v27 >= v109 )
        {
          v25 = v104;
          v26 = v102;
          goto LABEL_184;
        }
        goto LABEL_44;
      }
    }
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    v68 = v28;
    if ( v28 <= 0 )
      goto LABEL_182;
    v69 = (unsigned __int8 *)v111 + v30 + 2;
    while ( 1 )
    {
      v70 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v70 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v72 = *(unsigned __int8 **)(a1 + 192);
          v71 = *v72;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v72 + 1);
        }
        else
        {
          v71 = 0;
        }
      }
      else
      {
        v71 = *v70;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v70 + 1);
      }
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_129;
      if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        break;
LABEL_130:
      v73 = *v69;
      v74 = 128;
      v75 = v68;
      if ( v71 <= (unsigned int)v68 )
        v75 = v71;
      for ( j = 0; j < 4; ++j )
      {
        if ( (v74 & v73) == 0 )
          goto LABEL_145;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_138;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_138:
          v77 = *(char **)(a1 + 192);
          v78 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)v77 >= v78 )
            goto LABEL_188;
          goto LABEL_139;
        }
        v77 = *(char **)(a1 + 192);
        v78 = *(_QWORD *)(a1 + 200);
LABEL_139:
        if ( (unsigned __int64)v77 >= v78 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1);
            v80 = *(char **)(a1 + 192);
            v79 = *v80;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v80 + 1);
          }
          else
          {
            v79 = 0;
          }
        }
        else
        {
          v79 = *v77;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v77 + 1);
        }
        v101[j] = v79;
LABEL_145:
        v74 >>= 1;
      }
      if ( v75 )
      {
        v81 = v101[0];
        v82 = v75;
        v83 = v101[3];
        v84 = v101[2];
        v85 = v101[1];
        do
        {
          if ( (v73 & 0x80u) != 0 )
            *v31 = v81;
          if ( (v73 & 0x40) != 0 )
            v31[1] = v85;
          if ( (v73 & 0x20) != 0 )
            v31[2] = v84;
          if ( (v73 & 0x10) != 0 )
            v31[3] = v83;
          v31 += 4;
          --v82;
        }
        while ( v82 );
      }
      v68 -= v75;
      if ( v68 <= 0 )
      {
        v28 = v99;
        goto LABEL_182;
      }
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_189;
LABEL_129:
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
    goto LABEL_130;
  }
  if ( v33 != 1 )
  {
LABEL_190:
    v96 = sr_client_static_tls();
    v95 = "bad format";
    goto LABEL_191;
  }
  if ( v99 <= 0 )
  {
    v28 = v99;
    goto LABEL_182;
  }
  v34 = (unsigned __int8 *)v111 + v30 + 2;
  v106 = (char *)v111 + v30 + 2;
  while ( 2 )
  {
    v35 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v37 = *(unsigned __int8 **)(a1 + 192);
        v36 = *v37;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v37 + 1);
      }
      else
      {
        v36 = 0;
      }
    }
    else
    {
      v36 = *v35;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v35 + 1);
    }
    v38 = v36;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_189;
        goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_189;
    }
    if ( v38 >= 0x80 )
    {
      if ( v38 == 128 )
      {
        v39 = *(unsigned __int8 **)(a1 + 192);
        v40 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v39 < v40 )
          goto LABEL_63;
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v39 = *(unsigned __int8 **)(a1 + 192);
          v40 = *(_QWORD *)(a1 + 200);
LABEL_63:
          v41 = *v39;
          v42 = v39 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v42);
          v43 = v41;
          if ( (unsigned __int64)v42 < v40 )
          {
            v44 = *v42;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v42 + 1);
            v45 = v44 + (v41 << 8);
            goto LABEL_70;
          }
        }
        else
        {
          v43 = 0;
        }
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v46 = *(unsigned __int8 **)(a1 + 192);
          v47 = *v46;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v46 + 1);
          v45 = v47 + (v43 << 8);
        }
        else
        {
          v45 = v43 << 8;
        }
      }
      else
      {
        v45 = v38 - 127;
      }
LABEL_70:
      if ( v45 > v28 )
        goto LABEL_189;
      v48 = *v34;
      v49 = 128;
      v50 = 0;
LABEL_72:
      if ( (v49 & v48) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            v51 = *(char **)(a1 + 192);
            v52 = *(_QWORD *)(a1 + 200);
            goto LABEL_78;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        v51 = *(char **)(a1 + 192);
        v52 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v51 >= v52 )
          goto LABEL_188;
LABEL_78:
        if ( (unsigned __int64)v51 >= v52 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1);
            v54 = *(char **)(a1 + 192);
            v53 = *v54;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v54 + 1);
          }
          else
          {
            v53 = 0;
          }
        }
        else
        {
          v53 = *v51;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v51 + 1);
        }
        v100[v50] = v53;
      }
      ++v50;
      v49 >>= 1;
      if ( v50 >= 4 )
      {
        if ( v45 > 0 )
        {
          v55 = v100[0];
          v56 = v100[3];
          v57 = v100[2];
          v58 = v100[1];
          v59 = (unsigned int)v45;
          do
          {
            if ( (v48 & 0x80u) != 0 )
              *v31 = v55;
            if ( (v48 & 0x40) != 0 )
              v31[1] = v58;
            if ( (v48 & 0x20) != 0 )
              v31[2] = v57;
            if ( (v48 & 0x10) != 0 )
              v31[3] = v56;
            v31 += 4;
            --v59;
          }
          while ( v59 );
        }
LABEL_116:
        v34 = (unsigned __int8 *)v106;
LABEL_117:
        v28 -= v45;
        if ( v28 <= 0 )
        {
          v28 = v99;
          goto LABEL_182;
        }
        continue;
      }
      goto LABEL_72;
    }
    break;
  }
  v45 = v38 + 1;
  if ( v45 > (unsigned int)v28 )
  {
LABEL_189:
    v96 = sr_client_static_tls();
    v95 = "bad file";
    goto LABEL_191;
  }
  v60 = 0;
  if ( !v45 )
    goto LABEL_117;
  v61 = *v34;
  while ( 2 )
  {
    v62 = 128;
    v63 = 0;
    while ( 2 )
    {
      if ( (v62 & v61) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            v64 = *(char **)(a1 + 192);
            v65 = *(_QWORD *)(a1 + 200);
            goto LABEL_107;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        v64 = *(char **)(a1 + 192);
        v65 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v64 >= v65 )
          goto LABEL_188;
LABEL_107:
        if ( (unsigned __int64)v64 >= v65 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1);
            v67 = *(char **)(a1 + 192);
            v66 = *v67;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v67 + 1);
          }
          else
          {
            v66 = 0;
          }
        }
        else
        {
          v66 = *v64;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v64 + 1);
        }
        v31[v63] = v66;
      }
      ++v63;
      v62 >>= 1;
      if ( v63 < 4 )
        continue;
      break;
    }
    if ( v31 )
    {
      ++v60;
      v31 += 4;
      if ( v60 >= v45 )
        goto LABEL_116;
      continue;
    }
    return sub_1401F8B20((unsigned __int64)&v98 ^ v111[4]);
  }
}
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016A210) ----------------------------------------------------
_BOOL8            sub_14016A210(__int64 a1)
{
  BOOL v2; // edx
  __int64 v3; // rdi
  unsigned __int64 v4; // rax

  if ( (unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
  {
    v3 = 84;
    do
    {
      v4 = *(_QWORD *)(a1 + 192);
      if ( v4 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          ++*(_QWORD *)(a1 + 192);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 192) = v4 + 1;
      }
      --v3;
    }
    while ( v3 );
    v2 = sub_140169470(a1, (__int64)"PICT") != 0;
  }
  else
  {
    v2 = 0;
  }
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return v2;
}


//----- (000000014016A2C0) ----------------------------------------------------
_BOOL8            sub_14016A2C0(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax

  if ( !(unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
    return 0;
  v2 = 84;
  do
  {
    v3 = *(_QWORD *)(a1 + 192);
    if ( v3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = v3 + 1;
    }
    --v2;
  }
  while ( v2 );
  return (unsigned int)sub_140169470(a1, (__int64)"PICT") != 0;
}


//----- (000000014016A360) ----------------------------------------------------
__int64            sub_14016A360(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v10[0] = a1;
  v7 = sub_140167D10((__int64)v10, 2, 0);
  v8 = v10[0];
  if ( v7 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)v10[0];
    if ( a3 )
      *a3 = *(_DWORD *)(v8 + 4);
    if ( a4 )
      *a4 = *(_DWORD *)(v8 + 8);
    return 1;
  }
  else
  {
    *(_QWORD *)(v10[0] + 192LL) = *(_QWORD *)(v10[0] + 208LL);
    *(_QWORD *)(v8 + 200) = *(_QWORD *)(v8 + 216);
    return 0;
  }
}


//----- (000000014016A400) ----------------------------------------------------
__int64            sub_14016A400(_DWORD **a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v8; // rcx

  if ( (unsigned int)sub_140167D10((__int64)a1, 2, 0) )
  {
    if ( a2 )
      *a2 = **a1;
    if ( a3 )
      *a3 = (*a1)[1];
    if ( a4 )
      *a4 = (*a1)[2];
    return 1;
  }
  else
  {
    v8 = *a1;
    v8[24] = *((_QWORD *)*a1 + 26);
    v8[25] = v8[27];
    return 0;
  }
}


//----- (000000014016A4A0) ----------------------------------------------------
__int64            sub_14016A4A0(__int64 a1)
{
  __int64 v1; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A4A0[48];
#define v3 (*(_QWORD (*)[4])(void *)(sr_frame_14016A4A0 + 0)) /* [rsp+20h] */
#define v4 (*(int (*))(void *)(sr_frame_14016A4A0 + 32)) /* [rsp+40h] */

  v3[0] = a1;
  if ( (unsigned int)sub_140167D10((__int64)v3, 2, 0) && v4 == 16 )
    return 1;
  v1 = v3[0];
  *(_QWORD *)(v3[0] + 192LL) = *(_QWORD *)(v3[0] + 208LL);
  *(_QWORD *)(v1 + 200) = *(_QWORD *)(v1 + 216);
  return 0;
}
#undef v3
#undef v4


//----- (000000014016A500) ----------------------------------------------------
char *           sub_14016A500(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
{
  char *v6; // rdi
  char *v10; // rbp
  int v11; // eax
  _DWORD *v12; // rbx
  int v13; // edx
  int v14; // r9d
  char *v15; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A500[64];
#define v17 (*(int (*))(void *)(sr_frame_14016A500 + 0)) /* [rsp+20h] */
#define v18 (*(_QWORD (*)[3])(void *)(sr_frame_14016A500 + 16)) /* [rsp+30h] */
#define v19 (*(char * (*))(void *)(sr_frame_14016A500 + 40)) /* [rsp+48h] */
#define v20 (*(int (*))(void *)(sr_frame_14016A500 + 48)) /* [rsp+50h] */

  v6 = nullptr;
  v18[0] = a1;
  v10 = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
    return nullptr;
  }
  if ( !(unsigned int)sub_140167D10((__int64)v18, 0, a5) )
  {
    v6 = v19;
LABEL_18:
    free(v6);
    free((void *)v18[2]);
    free((void *)v18[1]);
    return v10;
  }
  v11 = v20;
  if ( v20 <= 8 )
  {
    v11 = 8;
    goto LABEL_6;
  }
  if ( v20 == 16 )
  {
LABEL_6:
    *a6 = v11;
    v10 = v19;
    v12 = (_DWORD *)v18[0];
    if ( !a5
      || (v13 = *(_DWORD *)(v18[0] + 12LL), a5 == v13)
      || ((v14 = *(_DWORD *)v18[0], v17 = *(_DWORD *)(v18[0] + 4LL), v11 != 8)
        ? (v15 = sub_14015DD00(v19, v13, a5, v14, v17))
        : (v15 = sub_14015D7E0(v19, v13, a5, v14, v17)),
          v12[3] = a5,
          (v10 = v15) != nullptr) )
    {
      *a2 = *v12;
      *a3 = v12[1];
      if ( a4 )
        *a4 = v12[2];
      goto LABEL_18;
    }
    return nullptr;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad bits_per_channel");
  return nullptr;
}
#undef v17
#undef v18
#undef v19
#undef v20

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016A670) ----------------------------------------------------
__int64            sub_14016A670(_QWORD *a1)
{
  __int64 result; // rax

  result = sub_14015CE80((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return result;
}


//----- (000000014016A6A0) ----------------------------------------------------
__int64            sub_14016A6A0(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // esi
  char *v5; // rax
  char v6; // cl
  int v7; // eax
  char *v8; // rax
  char v9; // cl

  v2 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_6;
      if ( !*(_DWORD *)(a1 + 48) )
        return v2;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      return v2;
LABEL_6:
    if ( (unsigned __int8)(*a2 - 48) > 9u )
      return v2;
    v5 = *(char **)(a1 + 192);
    v2 = (char)*a2 + 2 * (5 * v2 - 24);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v7 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v7 )
        {
          *(_QWORD *)(a1 + 200) = v7 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v8 = *(char **)(a1 + 192);
        v9 = *v8;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8 + 1);
        *a2 = v9;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      v6 = *v5;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
      *a2 = v6;
    }
  }
}


//----- (000000014016A7D0) ----------------------------------------------------
__int64            sub_14016A7D0(__int64 a1, char *a2, char *a3, int *a4)
{
  char *v4; // rax
  char *v5; // r14
  char *v7; // r15
  unsigned __int64 v8; // rcx
  int *v9; // rsi
  char v10; // di
  char *v11; // rax
  char v12; // cl
  char *v13; // rax
  int v14; // eax
  char *v15; // rax
  char v16; // cl
  char *v17; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A7D0[16];
#define v19 (*(char (*))(void *)(sr_frame_14016A7D0 + 0)) /* [rsp+40h] */
#define v20 (*(char (*))(void *)(sr_frame_14016A7D0 + 8)) /* [rsp+48h] */

  v4 = *(char **)(a1 + 208);
  v5 = &v20;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  v7 = &v20;
  v8 = *(_QWORD *)(a1 + 216);
  v9 = (int *)&v20;
  if ( a2 )
    v5 = a2;
  if ( a3 )
    v7 = a3;
  *(_QWORD *)(a1 + 200) = v8;
  if ( a4 )
    v9 = a4;
  if ( (unsigned __int64)v4 >= v8 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v10 = 0;
      goto LABEL_13;
    }
    sub_14016D910(a1);
    v4 = *(char **)(a1 + 192);
    v8 = *(_QWORD *)(a1 + 200);
  }
  v10 = *v4;
  v11 = v4 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11);
  if ( (unsigned __int64)v11 < v8 )
  {
    v12 = *v11;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
    goto LABEL_16;
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v13 = *(char **)(a1 + 192);
    v12 = *v13;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13 + 1);
  }
  else
  {
    v12 = 0;
  }
LABEL_16:
  if ( v10 == 80 && (unsigned __int8)(v12 - 53) <= 1u )
  {
    v14 = 1;
    if ( v12 == 54 )
      v14 = 3;
    *v9 = v14;
    v15 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v17 = *(char **)(a1 + 192);
        v16 = *v17;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v17 + 1);
      }
      else
      {
        v16 = 0;
      }
    }
    else
    {
      v16 = *v15;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 1);
    }
    v19 = v16;
    sub_14016ABA0(a1, &v19);
    *(_DWORD *)v5 = sub_14016A6A0(a1, &v19);
    sub_14016ABA0(a1, &v19);
    *(_DWORD *)v7 = sub_14016A6A0(a1, &v19);
    sub_14016ABA0(a1, &v19);
    if ( (int)sub_14016A6A0(a1, &v19) <= 255 )
      return 1;
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("max value > 255");
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  }
  return 0;
}
#undef v19
#undef v20

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016A9F0) ----------------------------------------------------
char *           sub_14016A9F0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v9; // r10d
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  __m128i *v13; // rax
  char *v14; // rbx
  int v15; // edx
  __int64 v17; // rax
       char *v18; // rdx

  if ( !(unsigned int)sub_14016A7D0(a1, (char *)a1, (char *)(a1 + 4), (int *)(a1 + 8)) )
    return nullptr;
  if ( *(_DWORD *)(a1 + 4) > 0x1000000u || *(_DWORD *)a1 > 0x1000000u )
    goto LABEL_24;
  *a2 = *(_DWORD *)a1;
  *a3 = *(_DWORD *)(a1 + 4);
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 8);
  if ( (v9 = *(_DWORD *)(a1 + 8), v10 = *(_DWORD *)(a1 + 4), v11 = *(_DWORD *)a1, v9 < 0)
    || v11 < 0
    || v11 && v9 > 0x7FFFFFFF / v11
    || (v12 = v11 * v9, v11 * v9 < 0)
    || v10 < 0
    || v10 && v12 > 0x7FFFFFFF / v10 )
  {
LABEL_24:
    v17 = sr_client_static_tls();
    v18 = "too large";
    goto LABEL_25;
  }
  if ( v11 && v9 > 0x7FFFFFFF / v11
    || v10 && v12 > 0x7FFFFFFF / v10
    || (v13 = (__m128i *)sr_path_malloc(v10 * v12), (v14 = (char *)v13) == nullptr) )
  {
    v17 = sr_client_static_tls();
    v18 = "outofmem";
LABEL_25:
    *(_QWORD *)(v17 + 16) = (uint64)(uintptr_t)(v18);
    return nullptr;
  }
  sub_140160860(a1, v13, *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 4) * *(_DWORD *)a1);
  if ( !a5 )
    return v14;
  v15 = *(_DWORD *)(a1 + 8);
  if ( a5 == v15 )
    return v14;
  v14 = sub_14015D7E0(v14, v15, a5, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  if ( v14 )
    return v14;
  return nullptr;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016ABA0) ----------------------------------------------------
unsigned __int64            sub_14016ABA0(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  char v5; // cl
  int v6; // eax
  char *v7; // rax
  char v8; // cl
  unsigned __int64 result; // rax
  char *v10; // rax
  char v11; // cl
  int v12; // eax
  char *v13; // rax
  char v14; // cl

  while ( 1 )
  {
LABEL_1:
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_5;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_5:
    if ( *a2 != 32 && (unsigned __int8)(*a2 - 9) > 4u )
      break;
    v4 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v6 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v6 )
        {
          *(_QWORD *)(a1 + 200) = v6 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v7 = *(char **)(a1 + 192);
        v8 = *v7;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
        *a2 = v8;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      v5 = *v4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
      *a2 = v5;
    }
  }
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_18;
  result = (*(__int64 (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
  {
LABEL_19:
    if ( *a2 != 35 )
      return result;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_24;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_1;
      }
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_1;
LABEL_24:
      if ( *a2 == 10 || *a2 == 13 )
        goto LABEL_1;
      v10 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          v12 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( v12 )
          {
            *(_QWORD *)(a1 + 200) = v12 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          v13 = *(char **)(a1 + 192);
          v14 = *v13;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13 + 1);
          *a2 = v14;
        }
        else
        {
          *a2 = 0;
        }
      }
      else
      {
        v11 = *v10;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10 + 1);
        *a2 = v11;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
LABEL_18:
    result = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 192) < result )
      goto LABEL_19;
  }
  return result;
}


//----- (000000014016ADD0) ----------------------------------------------------
__int64            sub_14016ADD0(__int64 a1)
{
  char *v1; // rax
  unsigned __int64 v3; // rcx
  char v4; // di
  char *v5; // rax
  char v6; // cl
  char *v7; // rax

  v1 = *(char **)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v1 >= v3 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v4 = 0;
      goto LABEL_7;
    }
    sub_14016D910(a1);
    v1 = *(char **)(a1 + 192);
    v3 = *(_QWORD *)(a1 + 200);
  }
  v4 = *v1;
  v5 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  if ( (unsigned __int64)v5 < v3 )
  {
    v6 = *v5;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    goto LABEL_10;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v7 = *(char **)(a1 + 192);
    v6 = *v7;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
  }
  else
  {
    v6 = 0;
  }
LABEL_10:
  if ( v4 == 80 && (unsigned __int8)(v6 - 53) <= 1u )
    return 1;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}


//----- (000000014016AEA0) ----------------------------------------------------
__int64            sub_14016AEA0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v4; // r15d
  int v6; // r12d
  int v7; // edi
  char *v9; // rax
  char v10; // cl
  int v11; // eax
  unsigned int v12; // eax
  _BYTE *v13; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rax
  int v16; // edx
  _QWORD *v17; // rax
  int v18; // ecx
  int v19; // r14d
  _BYTE *v20; // rbp
  unsigned int *v21; // rdi
  unsigned __int8 *v22; // rax
  unsigned __int8 v23; // cl
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rax
  unsigned __int8 v26; // cl
  unsigned __int8 *v27; // rax
  unsigned __int8 v28; // al
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int8 *v31; // rax
  unsigned __int8 v32; // cl
  unsigned __int8 *v33; // rax
  int v34; // r8d
  int v35; // r9d
  int v36; // r8d
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  int v41; // ecx
  int v42; // ebp
  __int64 i; // rdi
  int v44; // r8d
  int v45; // r9d
  int v46; // r8d
  int v47; // r8d
  __int64 v48; // rax
  int v49; // ecx
  int v50; // r8d
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rax
       char *v54; // rdx

  v2 = *(_QWORD *)a1;
  v4 = 1;
  v6 = 1;
  v7 = sub_1401604F0(*(_QWORD *)a1);
  if ( v7 < 11 )
  {
LABEL_2:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOF len");
    return 0;
  }
  v9 = *(char **)(v2 + 192);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v2 + 200) )
  {
    if ( !*(_DWORD *)(v2 + 48) )
    {
LABEL_96:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("only 8-bit");
      return 0;
    }
    sub_14016D910(v2);
    v9 = *(char **)(v2 + 192);
  }
  v10 = *v9;
  *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v9 + 1);
  if ( v10 != 8 )
    goto LABEL_96;
  v11 = sub_1401604F0(v2);
  *(_DWORD *)(v2 + 4) = v11;
  if ( !v11 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no header height");
    return 0;
  }
  v12 = sub_1401604F0(v2);
  *(_DWORD *)v2 = v12;
  if ( !v12 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("0 width");
    return 0;
  }
  if ( *(_DWORD *)(v2 + 4) > 0x1000000u || v12 > 0x1000000 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return 0;
  }
  v13 = *(_BYTE **)(v2 + 192);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v2 + 200) )
  {
    if ( *(_DWORD *)(v2 + 48) )
    {
      sub_14016D910(v2);
      v15 = *(_BYTE **)(v2 + 192);
      LOBYTE(v14) = *v15;
      *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v15 + 1);
    }
    else
    {
      LOBYTE(v14) = 0;
    }
  }
  else
  {
    LOBYTE(v14) = *v13;
    *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v13 + 1);
  }
  v16 = (unsigned __int8)v14;
  if ( (((unsigned __int8)v14 - 1) & 0xFFFFFFFC) != 0 || (unsigned __int8)v14 == 2 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad component count");
    return 0;
  }
  else
  {
    *(_DWORD *)(v2 + 8) = (unsigned __int8)v14;
    v14 = (unsigned __int8)v14;
    if ( (_BYTE)v14 )
    {
      v17 = (_QWORD *)(a1 + 18152);
      do
      {
        *(v17 - 3) = 0;
        *v17 = 0;
        v17 += 12;
        --v14;
      }
      while ( v14 );
      v16 = *(_DWORD *)(v2 + 8);
    }
    if ( v7 != v16 + 2 * (v16 + 4) )
      goto LABEL_2;
    *(_DWORD *)(a1 + 18512) = 0;
    v18 = *(_DWORD *)(v2 + 8);
    v19 = 0;
    if ( v18 > 0 )
    {
      v20 = &unk_14026E7E4;
      v21 = (unsigned int *)(a1 + 18084);
      while ( 1 )
      {
        v22 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v22 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            sub_14016D910(v2);
            v24 = *(unsigned __int8 **)(v2 + 192);
            v23 = *v24;
            *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v24 + 1);
          }
          else
          {
            v23 = 0;
          }
        }
        else
        {
          v23 = *v22;
          *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v22 + 1);
        }
        *(v21 - 1) = v23;
        if ( *(_DWORD *)(v2 + 8) == 3 && v23 == (unsigned __int8)*v20 )
          ++*(_DWORD *)(a1 + 18512);
        v25 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v25 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            sub_14016D910(v2);
            v27 = *(unsigned __int8 **)(v2 + 192);
            v26 = *v27;
            *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v27 + 1);
          }
          else
          {
            v26 = 0;
          }
        }
        else
        {
          v26 = *v25;
          *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v25 + 1);
        }
        v28 = v26;
        v29 = v26 >> 4;
        *v21 = v29;
        if ( !v29 || v29 > 4 )
          break;
        v30 = v28 & 0xF;
        v21[1] = v30;
        if ( !v30 || v30 > 4 )
        {
          v53 = sr_client_static_tls();
          v54 = "bad V";
          goto LABEL_87;
        }
        v31 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v31 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            sub_14016D910(v2);
            v33 = *(unsigned __int8 **)(v2 + 192);
            v32 = *v33;
            *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v33 + 1);
          }
          else
          {
            v32 = 0;
          }
        }
        else
        {
          v32 = *v31;
          *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v31 + 1);
        }
        v21[2] = v32;
        if ( v32 > 3u )
        {
          v53 = sr_client_static_tls();
          v54 = "bad TQ";
          goto LABEL_87;
        }
        v18 = *(_DWORD *)(v2 + 8);
        ++v19;
        ++v20;
        v21 += 24;
        if ( v19 >= v18 )
          goto LABEL_52;
      }
      v53 = sr_client_static_tls();
      v54 = "bad H";
      goto LABEL_87;
    }
LABEL_52:
    if ( a2 )
      return 1;
    v34 = *(_DWORD *)v2;
    v35 = *(_DWORD *)(v2 + 4);
    if ( *(int *)v2 < 0
      || v35 < 0
      || v35 && v34 > 0x7FFFFFFF / v35
      || (v36 = v35 * v34, v36 < 0)
      || v18 < 0
      || v18 && v36 > 0x7FFFFFFF / v18 )
    {
      v53 = sr_client_static_tls();
      v54 = "too large";
LABEL_87:
      *(_QWORD *)(v53 + 16) = (uint64)(uintptr_t)(v54);
      return 0;
    }
    v37 = *(_DWORD *)(v2 + 8);
    if ( v37 > 0 )
    {
      v38 = a1 + 18088;
      v39 = (unsigned int)v37;
      do
      {
        v40 = v4;
        v4 = *(_DWORD *)(v38 - 4);
        v38 += 96;
        v41 = v6;
        v6 = *(_DWORD *)(v38 - 96);
        if ( v4 <= v40 )
          v4 = v40;
        if ( v6 <= v41 )
          v6 = v41;
        --v39;
      }
      while ( v39 );
    }
    *(_DWORD *)(a1 + 18056) = v4;
    *(_DWORD *)(a1 + 18060) = v6;
    *(_DWORD *)(a1 + 18072) = 8 * v4;
    *(_DWORD *)(a1 + 18076) = 8 * v6;
    v42 = 0;
    *(_DWORD *)(a1 + 18064) = (8 * v4 + *(_DWORD *)v2 - 1) / (unsigned int)(8 * v4);
    *(_DWORD *)(a1 + 18068) = (8 * v6 + *(_DWORD *)(v2 + 4) - 1) / (unsigned int)(8 * v6);
    if ( *(int *)(v2 + 8) <= 0 )
    {
      return 1;
    }
    else
    {
      for ( i = a1 + 18108; ; i += 96 )
      {
        v44 = *(_DWORD *)(i - 20);
        *(_DWORD *)i = (v4 + *(_DWORD *)v2 * *(_DWORD *)(i - 24) - 1) / (unsigned int)v4;
        *(_DWORD *)(i + 4) = (v6 + v44 * *(_DWORD *)(v2 + 4) - 1) / (unsigned int)v6;
        v45 = 8 * *(_DWORD *)(i - 24) * *(_DWORD *)(a1 + 18064);
        *(_DWORD *)(i + 8) = v45;
        v46 = *(_DWORD *)(a1 + 18068) * v44;
        *(_QWORD *)(i + 52) = 0;
        *(_QWORD *)(i + 36) = 0;
        *(_QWORD *)(i + 44) = 0;
        v47 = 8 * v46;
        *(_DWORD *)(i + 12) = v47;
        if ( v45 < 0 || v47 < 0 || v47 && v45 > 0x7FFFFFFF / v47 )
          break;
        v48 = sr_path_malloc(v47 * v45 + 15);
        *(_QWORD *)(i + 28) = v48;
        if ( !v48 )
          goto LABEL_92;
        *(_QWORD *)(i + 20) = (v48 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( *(_DWORD *)(a1 + 18480) )
        {
          v49 = *(_DWORD *)(i + 8);
          v50 = *(_DWORD *)(i + 12);
          *(_DWORD *)(i + 60) = v49 / 8;
          *(_DWORD *)(i + 64) = v50 / 8;
          if ( v49 < 0
            || v50 < 0
            || v50 && v49 > 0x7FFFFFFF / v50
            || (v51 = v50 * v49, v51 >= 0x40000000)
            || (int)(2 * v51) > 2147483632 )
          {
            *(_QWORD *)(i + 36) = 0;
            goto LABEL_92;
          }
          v52 = sr_path_malloc((int)(2 * v51 + 15));
          *(_QWORD *)(i + 36) = v52;
          if ( !v52 )
            goto LABEL_92;
          *(_QWORD *)(i + 52) = (v52 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        }
        if ( ++v42 >= *(_DWORD *)(v2 + 8) )
          return 1;
      }
      *(_QWORD *)(i + 28) = 0;
LABEL_92:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      return sub_140160460(a1, v42 + 1, 0);
    }
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016B5F0) ----------------------------------------------------
__int64            sub_14016B5F0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rdi
  unsigned __int8 v5; // cl
  int v7; // r11d
  __int64 v8; // r8
  int v9; // edx
  int v10; // r13d
  int v11; // r15d
  int v12; // eax
  int v13; // ecx
  int v14; // r14d
  _BYTE *v15; // rax
  int v16; // eax
  int v17; // r12d
  int v18; // ebp
  int v19; // esi
  __int64 v20; // r9
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // cl
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rax
  unsigned __int8 v25; // cl
  int v26; // eax
  unsigned __int8 *v27; // rax
  int v28; // r10d
  int v29; // r10d
  __int64 v30; // rdx
  char v31; // cl
  int v32; // r10d
  int v33; // ecx
  unsigned int v34; // esi
  __int64 v35; // rcx
  unsigned __int8 *v36; // rcx
  unsigned __int8 v37; // dl
  int v38; // eax
  int v39; // eax
  unsigned __int8 *v40; // rax
  int v41; // r8d
  __int64 v42; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016B5F0[144];
#define i (*(int (*))(void *)(sr_frame_14016B5F0 + 0)) /* [rsp+20h] */
#define v44 (*(int (*))(void *)(sr_frame_14016B5F0 + 4)) /* [rsp+24h] */
#define v45 (*(int (*))(void *)(sr_frame_14016B5F0 + 8)) /* [rsp+28h] */
#define v46 (*(__int64 (*))(void *)(sr_frame_14016B5F0 + 16)) /* [rsp+30h] */
#define v47 (*(int (*))(void *)(sr_frame_14016B5F0 + 112)) /* [rsp+90h] */
#define v49 (*(int (*))(void *)(sr_frame_14016B5F0 + 128)) /* [rsp+A0h] */
#define v50 (*(int (*))(void *)(sr_frame_14016B5F0 + 136)) /* [rsp+A8h] */

  v2 = *(unsigned __int8 **)(a1 + 192);
  v3 = a2;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    sub_14016D910(a1);
    v2 = *(unsigned __int8 **)(a1 + 192);
  }
  v5 = *v2;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v2 + 1);
  if ( v5 > 0xCu )
    return 0;
LABEL_7:
  v7 = 1;
  LODWORD(v8) = 0;
  v9 = 1 << v5;
  v44 = v5 + 1;
  v10 = 0;
  v11 = v44;
  v50 = v9;
  v12 = 1 << (v5 + 1);
  v13 = 0;
  v49 = 1;
  v45 = v12 - 1;
  v14 = v12 - 1;
  v47 = 0;
  if ( v9 > 0 )
  {
    v15 = (_BYTE *)(v3 + 2102);
    do
    {
      *v15 = v13;
      v15[1] = v13++;
      *((_WORD *)v15 - 1) = -1;
      v15 += 4;
    }
    while ( v13 < v9 );
  }
  v16 = v9 + 2;
  v17 = -1;
  v18 = v9 + 2;
  v19 = 0;
  v20 = v9 + 2;
  v46 = v20;
  for ( i = v9 + 2; ; v16 = i )
  {
    while ( 1 )
    {
      while ( v10 < v11 )
      {
        if ( !v19 )
        {
          v21 = *(unsigned __int8 **)(a1 + 192);
          if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              sub_14016D910(a1);
              v23 = *(unsigned __int8 **)(a1 + 192);
              LODWORD(v8) = v47;
              v22 = *v23;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v23 + 1);
            }
            else
            {
              v22 = 0;
            }
          }
          else
          {
            v22 = *v21;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21 + 1);
          }
          v19 = v22;
          if ( !v22 )
            return *(_QWORD *)(v3 + 8);
        }
        v24 = *(unsigned __int8 **)(a1 + 192);
        --v19;
        if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v26 = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52),
                    v20);
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v26 )
            {
              *(_QWORD *)(a1 + 200) = v26 + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            v27 = *(unsigned __int8 **)(a1 + 192);
            v3 = a2;
            LODWORD(v8) = v47;
            v25 = *v27;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v27 + 1);
          }
          else
          {
            v25 = 0;
          }
        }
        else
        {
          v25 = *v24;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v24 + 1);
        }
        v9 = v50;
        v20 = v46;
        v7 = v49;
        LODWORD(v8) = (v25 << v10) | v8;
        v16 = i;
        v47 = v8;
        v10 += 8;
      }
      v28 = v8;
      v8 = (unsigned int)((int)v8 >> v11);
      v29 = v14 & v28;
      v10 -= v11;
      v47 = v8;
      if ( v29 != v9 )
        break;
      v11 = v44;
      v18 = v16;
      v14 = v45;
      v17 = -1;
      v20 = v9 + 2LL;
      v7 = 0;
      v46 = v20;
      v49 = 0;
    }
    if ( v29 == v9 + 1 )
      break;
    if ( v29 > v18 )
      goto LABEL_46;
    if ( v7 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no clear code");
      return 0;
    }
    if ( v17 < 0 )
    {
      if ( v29 == v18 )
      {
LABEL_46:
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("illegal code in raster");
        return 0;
      }
    }
    else
    {
      v30 = v3 + 4 * v20;
      ++v18;
      v46 = v20 + 1;
      if ( v18 > 0x2000 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too many codes");
        return 0;
      }
      *(_WORD *)(v30 + 2100) = v17;
      v31 = *(_BYTE *)(v3 + 4LL * v17 + 2102);
      *(_BYTE *)(v30 + 2102) = v31;
      if ( v29 != v18 )
        v31 = *(_BYTE *)(v3 + 4LL * v29 + 2102);
      *(_BYTE *)(v30 + 2103) = v31;
    }
    sub_1401670A0(v3, v29);
    if ( (v18 & v14) == 0 && v18 <= 4095 )
      v14 = (1 << ++v11) - 1;
    v9 = v50;
    v17 = v32;
    LODWORD(v8) = v47;
    v20 = v46;
  }
  if ( v19 )
  {
    if ( v19 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v33 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v33 < v19) )
      {
        v34 = v19 - v33;
        v35 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD, __int64, __int64))(a1 + 24))(v35, v34, v8, v20);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += v19;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    }
  }
  while ( 1 )
  {
    v36 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v39 = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52),
                v20);
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v39 )
        {
          *(_QWORD *)(a1 + 200) = v39 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v40 = *(unsigned __int8 **)(a1 + 192);
        v37 = *v40;
        v36 = v40 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v40 + 1);
      }
      else
      {
        v37 = 0;
      }
      v38 = (int)v36;
    }
    else
    {
      v37 = *v36;
      v38 = (_DWORD)v36 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++v36);
    }
    if ( !v37 )
      break;
    if ( *(_QWORD *)(a1 + 16) && (v41 = *(_DWORD *)(a1 + 200) - v38, v41 < v37) )
    {
      v42 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (           **)(__int64, _QWORD))(a1 + 24))(v42, (unsigned int)v37 - v41);
    }
    else
    {
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&v36[v37]);
    }
  }
  return *(_QWORD *)(a2 + 8);
}
#undef i
#undef v44
#undef v45
#undef v46
#undef v47
#undef v49
#undef v50

// 14016B78E: variable 'v20' is possibly undefined
// 14016B88F: variable 'v7' is possibly undefined
// 14016B920: variable 'v32' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016BB40) ----------------------------------------------------
__int64            sub_14016BB40(__int64 *a1, int a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // rbx
  char *v10; // rax
  char v11; // cl
  char *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // r14d
  __int64 v17; // rbx
  char *v18; // rax
  char v19; // cl
  char *v20; // rax
  int v21; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int8 *v25; // rax
  unsigned __int8 v26; // cl
  int v27; // r12d
  __int64 v28; // rbx
  unsigned __int8 *v29; // rax
  unsigned __int8 v30; // cl
  unsigned __int8 *v31; // rax
  unsigned int v32; // ebp
  __int64 v33; // rdi
  unsigned __int64 v34; // r14
  __int64 v35; // rbx
  __int16 v36; // cx
  _BYTE *v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rax
  int v40; // eax
  int v41; // r12d
  __int64 v42; // rbx
  int v43; // r15d
  unsigned __int8 *v44; // rax
  unsigned __int8 v45; // cl
  unsigned __int8 *v46; // rax
  unsigned int v47; // r14d
  unsigned int v48; // r13d
  int *v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // rbx
  unsigned __int8 *v52; // rax
  unsigned __int8 v53; // cl
  unsigned __int8 *v54; // rax
  __int64 v55; // r15
  __int64 *v56; // r12
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 *v59; // r14
  __int64 i; // rdi
  __int64 v61; // rbx
  char *v62; // rax
  char v63; // cl
  char *v64; // rax
  __int64 *v65; // r10
  unsigned __int8 *v66; // rbx
  int j; // r11d
  __int64 v68; // rax
  int v69; // edi
  int v70; // r9d
  int v71; // r8d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016BB40[128];
#define v73 (*(__int64 (*))(void *)(sr_frame_14016BB40 + 0)) /* [rsp+0h] */
#define v74 (*(int (*))(void *)(sr_frame_14016BB40 + 32)) /* [rsp+20h] */
#define v75 (*(int (*))(void *)(sr_frame_14016BB40 + 36)) /* [rsp+24h] */
#define v76 (*(int (*)[16])(void *)(sr_frame_14016BB40 + 48)) /* [rsp+30h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_14016BB40 + 112)) /* [rsp+70h] */

  switch ( a2 )
  {
    case 196:
      v41 = sub_1401604F0(*a1) - 2;
      if ( v41 > 0 )
      {
        while ( 1 )
        {
          v42 = *a1;
          v43 = 0;
          v44 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)v44 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(v42 + 48) )
            {
              sub_14016D910(*a1);
              v46 = *(unsigned __int8 **)(v42 + 192);
              v45 = *v46;
              *(_QWORD *)(v42 + 192) = (uint64)(uintptr_t)(v46 + 1);
            }
            else
            {
              v45 = 0;
            }
          }
          else
          {
            v45 = *v44;
            *(_QWORD *)(v42 + 192) = (uint64)(uintptr_t)(v44 + 1);
          }
          v47 = v45 & 0xF;
          v48 = v45 >> 4;
          if ( v48 > 1 || v47 > 3 )
            break;
          v49 = v76;
          v50 = 16;
          do
          {
            v51 = *a1;
            v52 = *(unsigned __int8 **)(*a1 + 192);
            if ( (unsigned __int64)v52 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v51 + 48) )
              {
                sub_14016D910(*a1);
                v54 = *(unsigned __int8 **)(v51 + 192);
                v53 = *v54;
                *(_QWORD *)(v51 + 192) = (uint64)(uintptr_t)(v54 + 1);
              }
              else
              {
                v53 = 0;
              }
            }
            else
            {
              v53 = *v52;
              *(_QWORD *)(v51 + 192) = (uint64)(uintptr_t)(v52 + 1);
            }
            *v49 = v53;
            v43 += v53;
            ++v49;
            --v50;
          }
          while ( v50 );
          v74 = v43;
          v75 = v41 - 17;
          v55 = v47;
          v56 = &a1[210 * v47];
          if ( v48 )
          {
            if ( !(unsigned int)sub_14015CCB0((_WORD *)v56 + 3364, v76) )
              return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
            v57 = 969;
          }
          else
          {
            if ( !(unsigned int)sub_14015CCB0((_WORD *)v56 + 4, v76) )
              return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
            v57 = 129;
          }
          v58 = v74;
          v59 = &v56[v57];
          for ( i = 0; i < v58; *((_BYTE *)v59 + i++) = v63 )
          {
            v61 = *a1;
            v62 = *(char **)(*a1 + 192);
            if ( (unsigned __int64)v62 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v61 + 48) )
              {
                sub_14016D910(*a1);
                v64 = *(char **)(v61 + 192);
                v63 = *v64;
                *(_QWORD *)(v61 + 192) = (uint64)(uintptr_t)(v64 + 1);
              }
              else
              {
                v63 = 0;
              }
            }
            else
            {
              v63 = *v62;
              *(_QWORD *)(v61 + 192) = (uint64)(uintptr_t)(v62 + 1);
            }
          }
          if ( v48 )
          {
            v65 = &a1[128 * v55 + 1745];
            v66 = (unsigned __int8 *)(v56 + 841);
            for ( j = 0; j < 512; ++j )
            {
              v68 = *v66;
              *(_WORD *)v65 = 0;
              if ( (_BYTE)v68 != 0xFF )
              {
                v69 = *((unsigned __int8 *)v56 + v68 + 8008);
                v70 = *((_BYTE *)v56 + v68 + 7752) & 0xF;
                if ( v70 )
                {
                  if ( (unsigned int)(v69 + v70) <= 9 )
                  {
                    v71 = ((j << v69) & 0x1FF) >> (9 - v70);
                    if ( v71 < 1 << (v70 - 1) )
                      v71 += 1 - (1 << v70);
                    if ( (unsigned int)(v71 + 128) <= 0xFF )
                      *(_WORD *)v65 = v69 + v70 + 16 * ((*((unsigned __int8 *)v56 + v68 + 7752) >> 4) + 16 * v71);
                  }
                }
              }
              ++v66;
              v65 = (__int64 *)((char *)v65 + 2);
            }
          }
          v41 = v75 - v74;
          if ( v75 - v74 <= 0 )
            return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DHT header");
      }
      break;
    case 219:
      v27 = sub_1401604F0(*a1) - 2;
      if ( v27 > 0 )
      {
        while ( 1 )
        {
          v28 = *a1;
          v29 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)v29 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(v28 + 48) )
            {
              sub_14016D910(*a1);
              v31 = *(unsigned __int8 **)(v28 + 192);
              v30 = *v31;
              *(_QWORD *)(v28 + 192) = (uint64)(uintptr_t)(v31 + 1);
            }
            else
            {
              v30 = 0;
            }
          }
          else
          {
            v30 = *v29;
            *(_QWORD *)(v28 + 192) = (uint64)(uintptr_t)(v29 + 1);
          }
          v32 = v30 >> 4;
          if ( v32 > 1 )
            break;
          if ( (v30 & 0xFu) > 3 )
          {
            *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DQT table");
            return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
          }
          v33 = 0;
          v34 = (unsigned __int64)(v30 & 0xF) << 6;
          do
          {
            v35 = *a1;
            if ( v32 )
            {
              v36 = sub_1401604F0(*a1);
            }
            else
            {
              v37 = *(_BYTE **)(v35 + 192);
              if ( (unsigned __int64)v37 >= *(_QWORD *)(v35 + 200) )
              {
                if ( *(_DWORD *)(v35 + 48) )
                {
                  sub_14016D910(*a1);
                  v38 = *(_BYTE **)(v35 + 192);
                  LOBYTE(v36) = *v38;
                  *(_QWORD *)(v35 + 192) = (uint64)(uintptr_t)(v38 + 1);
                }
                else
                {
                  LOBYTE(v36) = 0;
                }
              }
              else
              {
                LOBYTE(v36) = *v37;
                *(_QWORD *)(v35 + 192) = (uint64)(uintptr_t)(v37 + 1);
              }
              v36 = (unsigned __int8)v36;
            }
            v39 = byte_14026FC80[v33++];
            *((_WORD *)a1 + v34 + v39 + 6724) = v36;
          }
          while ( v33 < 64 );
          v40 = 65;
          if ( v32 )
            v40 = 129;
          v27 -= v40;
          if ( v27 <= 0 )
            return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DQT type");
      }
      break;
    case 221:
      if ( (unsigned int)sub_1401604F0(*a1) == 4 )
        *((_DWORD *)a1 + 4634) = sub_1401604F0(*a1);
      else
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DRI len");
      break;
    case 255:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("expected marker");
      return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
    default:
      if ( (unsigned int)(a2 - 224) > 0xF && a2 != 254 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown marker");
        return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
      }
      v4 = sub_1401604F0(*a1);
      if ( v4 < 2 )
      {
        v5 = sr_client_static_tls();
        if ( a2 == 254 )
          *(_QWORD *)(v5 + 16) = (uint64)(uintptr_t)("bad COM len");
        else
          *(_QWORD *)(v5 + 16) = (uint64)(uintptr_t)("bad APP len");
        return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
      }
      v6 = v4 - 2;
      if ( a2 == 224 )
      {
        if ( v6 >= 5 )
        {
          v7 = 0;
          v8 = 1;
          do
          {
            v9 = *a1;
            v10 = *(char **)(*a1 + 192);
            if ( (unsigned __int64)v10 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v9 + 48) )
              {
                sub_14016D910(*a1);
                v12 = *(char **)(v9 + 192);
                v11 = *v12;
                *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v12 + 1);
              }
              else
              {
                v11 = 0;
              }
            }
            else
            {
              v11 = *v10;
              *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v10 + 1);
            }
            v13 = 0;
            if ( v11 == sr_mem_14026e908[v7] )
              v13 = v8;
            ++v7;
            v8 = v13;
          }
          while ( v7 < 5 );
          v6 -= 5;
          if ( v13 )
          {
            v14 = *a1;
            *((_DWORD *)a1 + 4626) = 1;
            sub_14016E0F0(v14, v6);
            return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
          }
        }
LABEL_47:
        sub_14016E0F0(*a1, v6);
        return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
      }
      if ( a2 != 238 || v6 < 12 )
        goto LABEL_47;
      v15 = 0;
      v16 = 1;
      do
      {
        v17 = *a1;
        v18 = *(char **)(*a1 + 192);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(*a1 + 200) )
        {
          if ( *(_DWORD *)(v17 + 48) )
          {
            sub_14016D910(*a1);
            v20 = *(char **)(v17 + 192);
            v19 = *v20;
            *(_QWORD *)(v17 + 192) = (uint64)(uintptr_t)(v20 + 1);
          }
          else
          {
            v19 = 0;
          }
        }
        else
        {
          v19 = *v18;
          *(_QWORD *)(v17 + 192) = (uint64)(uintptr_t)(v18 + 1);
        }
        v21 = 0;
        if ( v19 == byte_14026E9C8[v15] )
          v21 = v16;
        ++v15;
        v16 = v21;
      }
      while ( v15 < 6 );
      v6 -= 6;
      if ( !v21 )
        goto LABEL_47;
      v22 = *a1;
      v23 = *(_QWORD *)(*a1 + 192);
      if ( v23 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( *(_DWORD *)(v22 + 48) )
        {
          sub_14016D910(*a1);
          ++*(_QWORD *)(v22 + 192);
        }
      }
      else
      {
        *(_QWORD *)(v22 + 192) = v23 + 1;
      }
      sub_1401604F0(*a1);
      sub_1401604F0(*a1);
      v24 = *a1;
      v25 = *(unsigned __int8 **)(*a1 + 192);
      if ( (unsigned __int64)v25 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( !*(_DWORD *)(v24 + 48) )
        {
          v26 = 0;
          goto LABEL_46;
        }
        sub_14016D910(*a1);
        v25 = *(unsigned __int8 **)(v24 + 192);
      }
      v26 = *v25;
      *(_QWORD *)(v24 + 192) = (uint64)(uintptr_t)(v25 + 1);
LABEL_46:
      v6 -= 6;
      *((_DWORD *)a1 + 4627) = v26;
      goto LABEL_47;
  }
  return sub_1401F8B20((unsigned __int64)&v73 ^ v77);
}
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77

// 14026E9C8: using guessed type _BYTE byte_14026E9C8[8];
// 14026FC80: using guessed type unsigned __int8 byte_14026FC80[336];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016C320) ----------------------------------------------------
__int64            sub_14016C320(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // esi
  unsigned __int8 *v5; // rdx
  unsigned __int8 v6; // cl
  unsigned __int8 *v7; // rax
  int v9; // ebp
  __int64 *v10; // r14
  __int64 v11; // rbx
  unsigned __int8 *v12; // rax
  unsigned __int8 v13; // cl
  unsigned __int8 *v14; // rax
  __int64 v15; // rbx
  int v16; // esi
  unsigned __int8 *v17; // rax
  unsigned __int8 v18; // cl
  unsigned __int8 *v19; // rax
  int v20; // edx
  unsigned int v21; // r9d
  __int64 v22; // r8
  int v23; // ecx
  __int64 *v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // rbx
  unsigned __int8 *v27; // rax
  unsigned __int8 v28; // cl
  unsigned __int8 *v29; // rax
  __int64 v30; // rbx
  unsigned __int8 *v31; // rax
  unsigned __int8 v32; // cl
  unsigned __int8 *v33; // rax
  __int64 v34; // rbx
  unsigned __int8 *v35; // rax
  unsigned __int8 v36; // cl
  unsigned __int8 *v37; // rax
  int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  bool v41; // zf
  int v42; // r8d
  __int64 v43; // rax
       char *v44; // rdx

  v2 = sub_1401604F0(*a1);
  v3 = *a1;
  v4 = v2;
  v5 = *(unsigned __int8 **)(*a1 + 192);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(*a1 + 200) )
  {
    if ( *(_DWORD *)(v3 + 48) )
    {
      sub_14016D910(*a1);
      v7 = *(unsigned __int8 **)(v3 + 192);
      v6 = *v7;
      *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v7 + 1);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = *v5;
    *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v5 + 1);
  }
  *((_DWORD *)a1 + 4629) = v6;
  if ( !v6 || v6 > 4u || v6 > *(int *)(*a1 + 8) )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOS component count");
    return 0;
  }
  if ( v4 != 2 * v6 + 6 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOS len");
    return 0;
  }
  v9 = 0;
  v10 = a1 + 2315;
  do
  {
    v11 = *a1;
    v12 = *(unsigned __int8 **)(*a1 + 192);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(*a1 + 200) )
    {
      if ( *(_DWORD *)(v11 + 48) )
      {
        sub_14016D910(*a1);
        v14 = *(unsigned __int8 **)(v11 + 192);
        v13 = *v14;
        *(_QWORD *)(v11 + 192) = (uint64)(uintptr_t)(v14 + 1);
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
      v13 = *v12;
      *(_QWORD *)(v11 + 192) = (uint64)(uintptr_t)(v12 + 1);
    }
    v15 = *a1;
    v16 = v13;
    v17 = *(unsigned __int8 **)(*a1 + 192);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(*a1 + 200) )
    {
      if ( *(_DWORD *)(v15 + 48) )
      {
        sub_14016D910(*a1);
        v19 = *(unsigned __int8 **)(v15 + 192);
        v18 = *v19;
        *(_QWORD *)(v15 + 192) = (uint64)(uintptr_t)(v19 + 1);
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = *v17;
      *(_QWORD *)(v15 + 192) = (uint64)(uintptr_t)(v17 + 1);
    }
    v20 = 0;
    v21 = v18;
    v22 = 0;
    v23 = *(_DWORD *)(*a1 + 8);
    if ( v23 <= 0 )
    {
LABEL_26:
      if ( v20 == v23 )
        return 0;
    }
    else
    {
      v24 = a1 + 2260;
      while ( *(_DWORD *)v24 != v16 )
      {
        ++v20;
        ++v22;
        v24 += 12;
        if ( v20 >= v23 )
          goto LABEL_26;
      }
    }
    LODWORD(a1[12 * v22 + 2262]) = v21 >> 4;
    if ( v21 >> 4 > 3 )
    {
      v43 = sr_client_static_tls();
      v44 = "bad DC huff";
      goto LABEL_52;
    }
    v25 = v21 & 0xF;
    HIDWORD(a1[12 * v22 + 2262]) = v25;
    if ( v25 > 3 )
    {
      v43 = sr_client_static_tls();
      v44 = "bad AC huff";
      goto LABEL_52;
    }
    *(_DWORD *)v10 = v20;
    ++v9;
    v10 = (__int64 *)((char *)v10 + 4);
  }
  while ( v9 < *((_DWORD *)a1 + 4629) );
  v26 = *a1;
  v27 = *(unsigned __int8 **)(*a1 + 192);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(*a1 + 200) )
  {
    if ( *(_DWORD *)(v26 + 48) )
    {
      sub_14016D910(*a1);
      v29 = *(unsigned __int8 **)(v26 + 192);
      v28 = *v29;
      *(_QWORD *)(v26 + 192) = (uint64)(uintptr_t)(v29 + 1);
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v28 = *v27;
    *(_QWORD *)(v26 + 192) = (uint64)(uintptr_t)(v27 + 1);
  }
  v30 = *a1;
  *((_DWORD *)a1 + 4621) = v28;
  v31 = *(unsigned __int8 **)(v30 + 192);
  if ( (unsigned __int64)v31 >= *(_QWORD *)(v30 + 200) )
  {
    if ( *(_DWORD *)(v30 + 48) )
    {
      sub_14016D910(v30);
      v33 = *(unsigned __int8 **)(v30 + 192);
      v32 = *v33;
      *(_QWORD *)(v30 + 192) = (uint64)(uintptr_t)(v33 + 1);
    }
    else
    {
      v32 = 0;
    }
  }
  else
  {
    v32 = *v31;
    *(_QWORD *)(v30 + 192) = (uint64)(uintptr_t)(v31 + 1);
  }
  v34 = *a1;
  *((_DWORD *)a1 + 4622) = v32;
  v35 = *(unsigned __int8 **)(v34 + 192);
  if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 200) )
  {
    if ( *(_DWORD *)(v34 + 48) )
    {
      sub_14016D910(v34);
      v37 = *(unsigned __int8 **)(v34 + 192);
      v36 = *v37;
      *(_QWORD *)(v34 + 192) = (uint64)(uintptr_t)(v37 + 1);
    }
    else
    {
      v36 = 0;
    }
  }
  else
  {
    v36 = *v35;
    *(_QWORD *)(v34 + 192) = (uint64)(uintptr_t)(v35 + 1);
  }
  v38 = *((_DWORD *)a1 + 4621);
  v39 = v36 & 0xF;
  v40 = v36 >> 4;
  v41 = *((_DWORD *)a1 + 4620) == 0;
  *((_DWORD *)a1 + 4623) = v40;
  *((_DWORD *)a1 + 4624) = v39;
  if ( v41 )
  {
    if ( !v38 && !v40 && !v39 )
    {
      *((_DWORD *)a1 + 4622) = 63;
      return 1;
    }
LABEL_51:
    v43 = sr_client_static_tls();
    v44 = "bad SOS";
LABEL_52:
    *(_QWORD *)(v43 + 16) = (uint64)(uintptr_t)(v44);
    return 0;
  }
  if ( v38 > 63 )
    goto LABEL_51;
  v42 = *((_DWORD *)a1 + 4622);
  if ( v42 > 63 || v38 > v42 || v40 > 0xD || v39 > 0xD )
    goto LABEL_51;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016C720) ----------------------------------------------------
__int64            sub_14016C720(__int64 a1, _BYTE *a2, int a3)
{
  int v6; // r15d
  int v7; // r14d
  unsigned __int8 *v8; // rax
  unsigned __int8 v9; // cl
  int v10; // eax
  unsigned __int8 *v11; // rax
  unsigned int v12; // ebp
  char *v13; // rax
  char v14; // cl
  int v15; // eax
  char *v16; // rax
  int v17; // edi
  char v18; // cl
  char *v19; // rax

  v6 = 0;
  v7 = a3;
  if ( a3 <= 0 )
    return 1;
  while ( 1 )
  {
    v8 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v10 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 200) = v10 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v11 = *(unsigned __int8 **)(a1 + 192);
        v9 = *v11;
        v8 = v11 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = *v8++;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8);
    }
    if ( v9 == 128 )
      goto LABEL_33;
    if ( v9 >= 0x80u )
      break;
    v12 = v9 + 1;
    if ( v12 > v7 )
      return 0;
    v6 += v12;
    do
    {
      v13 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          v15 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( v15 )
          {
            *(_QWORD *)(a1 + 200) = v15 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          v16 = *(char **)(a1 + 192);
          v14 = *v16;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v16 + 1);
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = *v13;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13 + 1);
      }
      *a2 = v14;
      a2 += 4;
      --v12;
    }
    while ( v12 );
LABEL_33:
    v7 = a3 - v6;
    if ( a3 - v6 <= 0 )
      return 1;
  }
  if ( v9 <= 0x80u )
    goto LABEL_33;
  v17 = 257 - v9;
  if ( v17 <= v7 )
  {
    if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v19 = *(char **)(a1 + 192);
        v18 = *v19;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v19 + 1);
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = *v8;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8 + 1);
    }
    for ( v6 += v17; v17; --v17 )
    {
      *a2 = v18;
      a2 += 4;
    }
    goto LABEL_33;
  }
  return 0;
}


//----- (000000014016C960) ----------------------------------------------------
__int64            sub_14016C960(__int64 a1, char *a2, char *a3, char *a4)
{
  char *v4; // r14
  char *v5; // r15
  char *v7; // rsi
  int v8; // ebx
  _QWORD *v9; // rbx
  int v10; // ecx
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = &v12;
  v5 = &v12;
  if ( a2 )
    v4 = a2;
  v7 = &v12;
  if ( a3 )
    v5 = a3;
  if ( a4 )
    v7 = a4;
  v8 = sub_1401604F0(a1);
  if ( (v8 << 16) + (unsigned int)sub_1401604F0(a1) == 943870035 && (unsigned int)sub_1401604F0(a1) == 1 )
  {
    v9 = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (v10 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v10 < 6) )
    {
      *v9 = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v10));
    }
    else
    {
      *v9 += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1) <= 0x10 )
    {
      *(_DWORD *)v5 = sub_140160670(a1);
      *(_DWORD *)v4 = sub_140160670(a1);
      if ( (((unsigned int)sub_1401604F0(a1) - 8) & 0xFFFFFFF7) == 0 && (unsigned int)sub_1401604F0(a1) == 3 )
      {
        *(_DWORD *)v7 = 4;
        return 1;
      }
    }
    *v9 = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}


//----- (000000014016CA90) ----------------------------------------------------
__int64            sub_14016CA90(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rbx
  int v4; // ecx

  v2 = sub_1401604F0(a1);
  if ( (v2 << 16) + (unsigned int)sub_1401604F0(a1) == 943870035 && (unsigned int)sub_1401604F0(a1) == 1 )
  {
    v3 = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (v4 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v3, v4 < 6) )
    {
      *v3 = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v4));
    }
    else
    {
      *v3 += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1) <= 0x10 )
    {
      sub_140160670(a1);
      sub_140160670(a1);
      if ( (unsigned int)sub_1401604F0(a1) == 16 )
        return 1;
    }
    *v3 = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}


//----- (000000014016CB70) ----------------------------------------------------
char *           sub_14016CB70(__int64 a1, int *a2, int *a3, _DWORD *a4, int a5, _DWORD *a6, int a7)
{
  int v8; // ebx
  char **v10; // r14
  int v11; // ecx
  int v12; // r15d
  int v13; // eax
  int v14; // r12d
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ebp
  int v23; // ecx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  char *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
       char *v29; // rdx
  __int64 v30; // rsi
  signed int v31; // ebx
  char *v32; // rdx
  char v33; // cl
  __int64 v34; // rax
  signed int v35; // ecx
  int v36; // r15d
  __int64 v37; // rax
  _BYTE *v38; // r12
  __int16 v39; // dx
  __int16 *v40; // rax
  __int64 v41; // rcx
  char v42; // dl
  char *v43; // rax
  __int64 v44; // rcx
  _WORD *v45; // rbx
  __int64 v46; // rsi
  _BYTE *v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rsi
  char *v50; // rax
  char v51; // cl
  unsigned __int16 *v52; // rcx
  unsigned __int64 v53; // r8
  int v54; // r9d
  float v55; // xmm2_4
  float v56; // xmm1_4
  int v57; // r9d
  float v58; // xmm2_4
  float v59; // xmm1_4
  int v60; // r9d
  float v61; // xmm2_4
  float v62; // xmm1_4
  int v63; // r9d
  float v64; // xmm2_4
  float v65; // xmm1_4
  char *v66; // rcx
  __int64 v67; // rdx
  int v68; // r8d
  float v69; // xmm2_4
  float v70; // xmm1_4
  unsigned __int8 *v71; // rcx
  unsigned __int64 v72; // r8
  int v73; // r9d
  float v74; // xmm2_4
  float v75; // xmm1_4
  int v76; // r9d
  float v77; // xmm2_4
  float v78; // xmm1_4
  int v79; // r9d
  float v80; // xmm2_4
  float v81; // xmm1_4
  int v82; // r9d
  float v83; // xmm2_4
  float v84; // xmm1_4
  char *v85; // rcx
  __int64 v86; // rdx
  int v87; // r8d
  float v88; // xmm2_4
  float v89; // xmm1_4
  char *v90; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016CB70[32];
#define v91 (*(unsigned int (*))(void *)(sr_frame_14016CB70 + 0)) /* [rsp+30h] */
#define v92 (*(int (*))(void *)(sr_frame_14016CB70 + 4)) /* [rsp+34h] */
#define v93 (*(int (*))(void *)(sr_frame_14016CB70 + 8)) /* [rsp+38h] */
#define v94 (*(__int64 (*))(void *)(sr_frame_14016CB70 + 16)) /* [rsp+40h] */
#define v95 (*(char * (*))(void *)(sr_frame_14016CB70 + 24)) /* [rsp+48h] */

  v8 = sub_1401604F0(a1);
  if ( (v8 << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not PSD");
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1) != 1 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong version");
    return nullptr;
  }
  v10 = (char **)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (v11 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v10, v11 < 6) )
  {
    *v10 = *(char **)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v11));
  }
  else
  {
    *v10 += 6;
  }
  v91 = sub_1401604F0(a1);
  v12 = v91;
  if ( v91 > 0x10 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong channel count");
    return nullptr;
  }
  v92 = sub_140160670(a1);
  v13 = sub_140160670(a1);
  v93 = v13;
  v14 = v13;
  if ( v92 > 0x1000000 || v13 > 0x1000000 )
    goto LABEL_12;
  v15 = sub_1401604F0(a1);
  v16 = v15;
  if ( ((v15 - 8) & 0xFFFFFFF7) != 0 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported bit depth");
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1) != 3 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong color format");
    return nullptr;
  }
  v17 = sub_140160670(a1);
  sub_14016E0F0(a1, v17);
  v18 = sub_140160670(a1);
  sub_14016E0F0(a1, v18);
  v19 = sub_140160670(a1);
  sub_14016E0F0(a1, v19);
  v20 = sub_1401604F0(a1);
  if ( v20 > 1 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad compression");
    return nullptr;
  }
  if ( v14 < 0 )
    goto LABEL_12;
  if ( v14 )
  {
    if ( 0x7FFFFFFF / v14 < 4 )
      goto LABEL_12;
    v21 = 4 * v14;
    if ( (v14 & 0x20000000) != 0 )
      goto LABEL_12;
  }
  else
  {
    v21 = 0;
  }
  if ( v92 < 0 || v92 && v21 > 0x7FFFFFFF / v92 )
  {
LABEL_12:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return nullptr;
  }
  v22 = v92 * v14;
  if ( v20 || (_DWORD)v16 != 16 || a7 != 16 )
  {
    v27 = sr_path_malloc(4 * v22);
    v25 = a6;
    v26 = (char *)v27;
    v95 = (char *)v27;
    goto LABEL_39;
  }
  if ( v14 )
  {
    if ( 0x7FFFFFFF / v14 < 8 )
      goto LABEL_37;
    v23 = 8 * v14;
    if ( (v14 & 0x10000000) != 0 )
      goto LABEL_37;
  }
  else
  {
    v23 = 0;
  }
  if ( v92 && v23 > 0x7FFFFFFF / v92 )
  {
LABEL_37:
    v25 = a6;
    v26 = nullptr;
    v95 = nullptr;
    *a6 = 16;
    goto LABEL_39;
  }
  v24 = sr_path_malloc(8 * v22);
  v25 = a6;
  v26 = (char *)v24;
  v95 = (char *)v24;
  *a6 = 16;
LABEL_39:
  if ( !v26 )
  {
    v28 = sr_client_static_tls();
    v29 = "outofmem";
    goto LABEL_41;
  }
  if ( v20 )
  {
    sub_14016E0F0(a1, 2 * v91 * v92);
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      v32 = &v26[v31];
      if ( v31 < (int)v91 )
      {
        if ( !(unsigned int)sub_14016C720(a1, v32, v22) )
        {
          free(v26);
          v28 = sr_client_static_tls();
          v29 = "corrupt";
LABEL_41:
          *(_QWORD *)(v28 + 16) = (uint64)(uintptr_t)(v29);
          return nullptr;
        }
      }
      else if ( v22 > 0 )
      {
        v33 = 0;
        v34 = (unsigned int)v22;
        if ( v31 == 3 )
          v33 = -1;
        do
        {
          *v32 = v33;
          v32 += 4;
          --v34;
        }
        while ( v34 );
      }
      if ( ++v31 >= 4 )
        goto LABEL_94;
    }
  }
  v35 = v91;
  v30 = 0;
  v36 = 0;
  v94 = v16;
  v37 = v16;
  v38 = v26;
  do
  {
    if ( v36 < v35 )
    {
      if ( *v25 == 16 )
      {
        v45 = v26;
        if ( v22 <= 0 )
          goto LABEL_92;
        v46 = (unsigned int)v22;
        do
        {
          *v45 = sub_1401604F0(a1);
          v45 += 4;
          --v46;
        }
        while ( v46 );
      }
      else
      {
        v47 = v38;
        if ( v37 == 16 )
        {
          if ( v22 <= 0 )
            goto LABEL_92;
          v48 = (unsigned int)v22;
          do
          {
            *v47 = (unsigned __int16)sub_1401604F0(a1) >> 8;
            v47 += 4;
            --v48;
          }
          while ( v48 );
        }
        else
        {
          if ( v22 <= 0 )
            goto LABEL_92;
          v49 = (unsigned int)v22;
          do
          {
            v50 = *v10;
            if ( (unsigned __int64)*v10 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1);
                v51 = *(*v10)++;
              }
              else
              {
                v51 = 0;
              }
            }
            else
            {
              v51 = *v50;
              *v10 = v50 + 1;
            }
            *v47 = v51;
            v47 += 4;
            --v49;
          }
          while ( v49 );
        }
      }
      v30 = 0;
    }
    else if ( v37 == 16 && a7 == 16 )
    {
      v39 = 0;
      v40 = (__int16 *)v26;
      if ( v36 == 3 )
        v39 = -1;
      if ( v22 <= 0 )
        goto LABEL_91;
      v41 = (unsigned int)v22;
      do
      {
        *v40 = v39;
        v40 += 4;
        --v41;
      }
      while ( v41 );
    }
    else
    {
      v42 = 0;
      v43 = v38;
      if ( v36 == 3 )
        v42 = -1;
      if ( v22 <= 0 )
        goto LABEL_91;
      v44 = (unsigned int)v22;
      do
      {
        *v43 = v42;
        v43 += 4;
        --v44;
      }
      while ( v44 );
    }
    v35 = v91;
LABEL_91:
    v37 = v94;
    v25 = a6;
LABEL_92:
    ++v36;
    v26 += 2;
    ++v38;
  }
  while ( v36 < 4 );
  v12 = v91;
  v26 = v95;
  v14 = v93;
LABEL_94:
  if ( v12 >= 4 )
  {
    if ( *a6 == 16 )
    {
      if ( v22 >= 4LL )
      {
        v52 = (unsigned __int16 *)(v26 + 10);
        v53 = ((unsigned __int64)(v22 - 4LL) >> 2) + 1;
        v30 = 4 * v53;
        do
        {
          v54 = *(v52 - 2);
          if ( (unsigned __int16)(v54 - 1) <= 0xFFFDu )
          {
            v55 = 65535.0 / (float)v54;
            v56 = (float)(1.0 - v55) * 65535.0;
            *(v52 - 5) = (int)(float)((float)((float)*(v52 - 5) * v55) + v56);
            *(v52 - 4) = (int)(float)((float)((float)*(v52 - 4) * v55) + v56);
            *(v52 - 3) = (int)(float)((float)((float)*(v52 - 3) * v55) + v56);
          }
          v57 = v52[2];
          if ( (unsigned __int16)(v57 - 1) <= 0xFFFDu )
          {
            v58 = 65535.0 / (float)v57;
            v59 = (float)(1.0 - v58) * 65535.0;
            *(v52 - 1) = (int)(float)((float)((float)*(v52 - 1) * v58) + v59);
            *v52 = (int)(float)((float)((float)*v52 * v58) + v59);
            v52[1] = (int)(float)((float)((float)v52[1] * v58) + v59);
          }
          v60 = v52[6];
          if ( (unsigned __int16)(v60 - 1) <= 0xFFFDu )
          {
            v61 = 65535.0 / (float)v60;
            v62 = (float)(1.0 - v61) * 65535.0;
            v52[3] = (int)(float)((float)((float)v52[3] * v61) + v62);
            v52[4] = (int)(float)((float)((float)v52[4] * v61) + v62);
            v52[5] = (int)(float)((float)((float)v52[5] * v61) + v62);
          }
          v63 = v52[10];
          if ( (unsigned __int16)(v63 - 1) <= 0xFFFDu )
          {
            v64 = 65535.0 / (float)v63;
            v65 = (float)(1.0 - v64) * 65535.0;
            v52[7] = (int)(float)((float)((float)v52[7] * v64) + v65);
            v52[8] = (int)(float)((float)((float)v52[8] * v64) + v65);
            v52[9] = (int)(float)((float)((float)v52[9] * v64) + v65);
          }
          v52 += 16;
          --v53;
        }
        while ( v53 );
      }
      if ( v30 < v22 )
      {
        v66 = &v26[8 * v30 + 2];
        v67 = v22 - v30;
        do
        {
          v68 = *((unsigned __int16 *)v66 + 2);
          if ( (unsigned __int16)(v68 - 1) <= 0xFFFDu )
          {
            v69 = 65535.0 / (float)v68;
            v70 = (float)(1.0 - v69) * 65535.0;
            *((_WORD *)v66 - 1) = (int)(float)((float)((float)*((unsigned __int16 *)v66 - 1) * v69) + v70);
            *(_WORD *)v66 = (int)(float)((float)((float)*(unsigned __int16 *)v66 * v69) + v70);
            *((_WORD *)v66 + 1) = (int)(float)((float)((float)*((unsigned __int16 *)v66 + 1) * v69) + v70);
          }
          v66 += 8;
          --v67;
        }
        while ( v67 );
      }
    }
    else
    {
      if ( v22 >= 4LL )
      {
        v71 = (unsigned __int8 *)(v26 + 5);
        v72 = ((unsigned __int64)(v22 - 4LL) >> 2) + 1;
        v30 = 4 * v72;
        do
        {
          v73 = *(v71 - 2);
          if ( (unsigned __int8)(v73 - 1) <= 0xFDu )
          {
            v74 = 254.99998 / (float)v73;
            v75 = (float)(1.0 - v74) * 255.0;
            *(v71 - 5) = (int)(float)((float)((float)*(v71 - 5) * v74) + v75);
            *(v71 - 4) = (int)(float)((float)((float)*(v71 - 4) * v74) + v75);
            *(v71 - 3) = (int)(float)((float)((float)*(v71 - 3) * v74) + v75);
          }
          v76 = v71[2];
          if ( (unsigned __int8)(v76 - 1) <= 0xFDu )
          {
            v77 = 254.99998 / (float)v76;
            v78 = (float)(1.0 - v77) * 255.0;
            *(v71 - 1) = (int)(float)((float)((float)*(v71 - 1) * v77) + v78);
            *v71 = (int)(float)((float)((float)*v71 * v77) + v78);
            v71[1] = (int)(float)((float)((float)v71[1] * v77) + v78);
          }
          v79 = v71[6];
          if ( (unsigned __int8)(v79 - 1) <= 0xFDu )
          {
            v80 = 254.99998 / (float)v79;
            v81 = (float)(1.0 - v80) * 255.0;
            v71[3] = (int)(float)((float)((float)v71[3] * v80) + v81);
            v71[4] = (int)(float)((float)((float)v71[4] * v80) + v81);
            v71[5] = (int)(float)((float)((float)v71[5] * v80) + v81);
          }
          v82 = v71[10];
          if ( (unsigned __int8)(v82 - 1) <= 0xFDu )
          {
            v83 = 254.99998 / (float)v82;
            v84 = (float)(1.0 - v83) * 255.0;
            v71[7] = (int)(float)((float)((float)v71[7] * v83) + v84);
            v71[8] = (int)(float)((float)((float)v71[8] * v83) + v84);
            v71[9] = (int)(float)((float)((float)v71[9] * v83) + v84);
          }
          v71 += 16;
          --v72;
        }
        while ( v72 );
      }
      if ( v30 < v22 )
      {
        v85 = &v26[4 * v30 + 1];
        v86 = v22 - v30;
        do
        {
          v87 = (unsigned __int8)v85[2];
          if ( (unsigned __int8)(v87 - 1) <= 0xFDu )
          {
            v88 = 254.99998 / (float)v87;
            v89 = (float)(1.0 - v88) * 255.0;
            *(v85 - 1) = (int)(float)((float)((float)(unsigned __int8)*(v85 - 1) * v88) + v89);
            *v85 = (int)(float)((float)((float)(unsigned __int8)*v85 * v88) + v89);
            v85[1] = (int)(float)((float)((float)(unsigned __int8)v85[1] * v88) + v89);
          }
          v85 += 4;
          --v86;
        }
        while ( v86 );
      }
    }
  }
  if ( (a5 & 0xFFFFFFFB) != 0 )
  {
    v90 = *a6 == 16 ? sub_14015DD00(v26, 4, a5, v14, v92) : sub_14015D7E0(v26, 4, a5, v14, v92);
    v26 = v90;
    if ( !v90 )
      return nullptr;
  }
  if ( a4 )
    *a4 = 4;
  *a3 = v92;
  *a2 = v14;
  return v26;
}
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016D7A0) ----------------------------------------------------
_BOOL8            sub_14016D7A0(_QWORD *a1)
{
  int v2; // ebx
  int v3; // eax

  v2 = sub_1401604F0((__int64)a1);
  v3 = sub_1401604F0((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return (v2 << 16) + v3 == 943870035;
}


//----- (000000014016D800) ----------------------------------------------------
__int64            sub_14016D800(__int64 a1, int a2, __int64 a3)
{
  int v6; // esi
  __int64 v7; // rdi
  char *v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // cl
  char *v11; // rax

  v6 = 128;
  v7 = 0;
  while ( (v6 & a2) == 0 )
  {
LABEL_14:
    ++v7;
    v6 >>= 1;
    if ( v7 >= 4 )
      return a3;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
    {
      v8 = *(char **)(a1 + 192);
      v9 = *(_QWORD *)(a1 + 200);
LABEL_8:
      if ( (unsigned __int64)v8 >= v9 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v11 = *(char **)(a1 + 192);
          v10 = *v11;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = *v8;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8 + 1);
      }
      *(_BYTE *)(v7 + a3) = v10;
      goto LABEL_14;
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_16;
  }
  v8 = *(char **)(a1 + 192);
  v9 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v8 < v9 )
    goto LABEL_8;
LABEL_16:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad file");
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016D910) ----------------------------------------------------
__int64            sub_14016D910(__int64 a1)
{
  _BYTE *v1; // rbx
  __int64 result; // rax

  v1 = (_BYTE *)(a1 + 56);
  LODWORD(result) = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                      *(_QWORD *)(a1 + 40),
                      a1 + 56,
                      *(unsigned int *)(a1 + 52));
  *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v1);
  if ( (_DWORD)result )
  {
    result = (int)result;
    *(_QWORD *)(a1 + 200) = (int)result + a1 + 56;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 200) = a1 + 57;
    *v1 = 0;
    return a1 + 57;
  }
  return result;
}


//----- (000000014016D990) ----------------------------------------------------
__int64            sub_14016D990(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  __int64 v6; // rax

  if ( (int)a4 > 0 )
  {
    v5 = a1;
    a4 = (unsigned int)a4;
    do
    {
      if ( a5 > 0LL )
      {
        v6 = 0;
        do
          *(_BYTE *)(v5 + v6++) = *a2;
        while ( v6 < a5 );
      }
      v5 += a5;
      ++a2;
      --a4;
    }
    while ( a4 );
  }
  return a1;
}


//----- (000000014016D9D0) ----------------------------------------------------
_BYTE *           sub_14016D9D0(_BYTE *a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // r9
  _BYTE *v12; // r8
  unsigned __int8 *v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r8

  v4 = *a2;
  *a1 = *a2;
  if ( a4 == 1 )
  {
    a1[1] = v4;
    return a1;
  }
  else
  {
    v8 = a4;
    v9 = 1;
    a1[1] = (3 * *a2 + (unsigned int)a2[1] + 2) >> 2;
    v10 = a4 - 1LL;
    if ( v10 > 1 )
    {
      v11 = a4 - 2LL;
      v9 = v10;
      v12 = a1 + 2;
      v13 = a2 + 2;
      do
      {
        v14 = *(v13 - 1);
        v12 += 2;
        ++v13;
        v15 = v14 + 2 * (v14 + 1);
        *(v12 - 2) = (v15 + (unsigned int)*(v13 - 3)) >> 2;
        *(v12 - 1) = (v15 + (unsigned int)*(v13 - 1)) >> 2;
        --v11;
      }
      while ( v11 );
    }
    v16 = 2 * v9;
    a1[v16] = (3 * a2[v8 - 2] + (unsigned int)a2[v10] + 2) >> 2;
    a1[v16 + 1] = a2[v10];
    return a1;
  }
}


//----- (000000014016DAC0) ----------------------------------------------------
_BYTE *           sub_14016DAC0(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // eax
  __int64 v9; // rbx
  unsigned __int8 *v10; // r9
  __int64 v11; // rdi
  _BYTE *v12; // r10
  int v13; // ecx
  int v14; // r8d
  int v15; // eax

  v5 = a4;
  v6 = *a3 + 3 * *a2;
  if ( a4 == 1 )
  {
    v7 = (unsigned int)(v6 + 2) >> 2;
    a1[1] = v7;
    *a1 = v7;
    return a1;
  }
  else
  {
    *a1 = (unsigned int)(v6 + 2) >> 2;
    if ( a4 > 1LL )
    {
      v9 = a2 - a3;
      v10 = a3 + 1;
      v11 = v5 - 1;
      v12 = a1 + 2;
      do
      {
        v13 = *v10;
        v12 += 2;
        v14 = v6;
        v15 = (v10++)[v9];
        v6 = v13 + 3 * v15;
        *(v12 - 3) = (unsigned int)(v14 + v6 + 2 * (v14 + 4)) >> 4;
        *(v12 - 2) = (unsigned int)(v6 + v14 + 2 * (v6 + 4)) >> 4;
        --v11;
      }
      while ( v11 );
    }
    a1[2 * (int)v5 - 1] = (unsigned int)(v6 + 2) >> 2;
    return a1;
  }
}


//----- (000000014016DB80) ----------------------------------------------------
__m128i *           sub_14016DB80(__m128i *a1, unsigned __int8 *a2,      __m128i *a3, int a4)
{
  __int64 v5; // r14
  unsigned int v7; // r9d
  unsigned int v9; // edx
  unsigned int v10; // eax
  __m128i si128; // xmm5
  __int64 *v13; // r10
  __int64 v14; // r8
  __m128i *v15; // rbp
  unsigned int v16; // eax
       __m128i *v17; // r11
  __int64 v18; // r15
  int v19; // eax
  __m128i v20; // xmm0
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __m128i v23; // xmm3
  __m128i v24; // xmm0
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  int v27; // eax
  signed int v28; // ecx
  __int64 v29; // rbx
  unsigned __int8 *v30; // r9
  __int64 v31; // r11
  __int8 *v32; // r10
  int v33; // ecx
  int v34; // r8d
  int v35; // eax

  v5 = a4;
  v7 = 0;
  v9 = SR_VEC_PTR_LANES(128, a3, u8)[0] + 3 * *a2;
  if ( (_DWORD)v5 == 1 )
  {
    v10 = (v9 + 2) >> 2;
    SR_VEC_PTR_LANES(128, a1, i8)[1] = v10;
    SR_VEC_PTR_LANES(128, a1, i8)[0] = v10;
    return a1;
  }
  else
  {
    if ( (int)v5 - 1 >= 0 && (((_DWORD)v5 - 1) & 0xFFFFFFF8) != 0 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_1402791C0);
      v13 = &SR_VEC_PTR_LANES(128, a3, i64)[1];
      v14 = a2 - (unsigned __int8 *)a3;
      v15 = a1;
      v16 = (((((_DWORD)v5 - 1) & 0xFFFFFFF8) - 1) >> 3) + 1;
      v17 = a3;
      v18 = v16;
      v7 = 8 * v16;
      do
      {
        v19 = *((unsigned __int8 *)v13 + v14);
        ++v15;
        v20 = _mm_loadl_epi64((     __m128i *)((char *)v17 + v14));
        ++v13;
        v21 = _mm_loadl_epi64(v17);
        v17 = (     __m128i *)((char *)v17 + 8);
        v22 = _mm_unpacklo_epi8(v20, _mm_cvtsi32_si128((int)(0LL)));
        v23 = _mm_add_epi16(_mm_sub_epi16(_mm_unpacklo_epi8(v21, _mm_cvtsi32_si128((int)(0LL))), v22), _mm_slli_epi16(v22, 2u));
        v24 = _mm_add_epi16(_mm_slli_epi16(v23, 2u), si128);
        v25 = _mm_add_epi16(_mm_sub_epi16(_mm_insert_epi16(_mm_slli_si128(v23, 2), v9, 0), v23), v24);
        v26 = _mm_add_epi16(
                _mm_sub_epi16(
                  _mm_insert_epi16(_mm_srli_si128(v23, 2), (unsigned int)*((unsigned __int8 *)v13 - 8) + 3 * v19, 7),
                  v23),
                v24);
        v15[-1] = _mm_packus_epi16(
                    _mm_srli_epi16(_mm_unpacklo_epi16(v25, v26), 4u),
                    _mm_srli_epi16(_mm_unpackhi_epi16(v25, v26), 4u));
        v9 = *((unsigned __int8 *)v13 - 9) + 3 * *((unsigned __int8 *)v13 + v14 - 9);
        --v18;
      }
      while ( v18 );
    }
    v27 = SR_VEC_PTR_LANES(128, a3, u8)[v7] + 3 * a2[v7];
    v28 = v7 + 1;
    SR_VEC_PTR_LANES(128, a1, i8)[2 * v7] = (v27 + v9 + 8 + 2 * v27) >> 4;
    if ( (int)(v7 + 1) < v5 )
    {
      v29 = a2 - (unsigned __int8 *)a3;
      v30 = &SR_VEC_PTR_LANES(128, a3, u8)[v28];
      v31 = v5 - v28;
      v32 = &SR_VEC_PTR_LANES(128, a1, i8)[2 * v28];
      do
      {
        v33 = *v30;
        v32 += 2;
        v34 = v27;
        v35 = (v30++)[v29];
        v27 = v33 + 3 * v35;
        *(v32 - 3) = (unsigned int)(v34 + v27 + 2 * (v34 + 4)) >> 4;
        *(v32 - 2) = (unsigned int)(v27 + v34 + 2 * (v27 + 4)) >> 4;
        --v31;
      }
      while ( v31 );
    }
    SR_VEC_PTR_LANES(128, a1, i8)[2 * (int)v5 - 1] = (unsigned int)(v27 + 2) >> 2;
    return a1;
  }
}

// 1402791C0: using guessed type __int128 xmmword_1402791C0;

//----- (000000014016DD80) ----------------------------------------------------
unsigned __int64            sub_14016DD80(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v4; // ebx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __m128i si128; // xmm3
  __int64 v10; // rdi
  __m128i v11; // xmm4
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128i v14; // xmm5
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm2
  __m128i v25; // xmm2
  __int64 v26; // rcx
  unsigned __int8 *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r10
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r8d

  v4 = 0;
  if ( a4 >= 16 && dword_140302080 >= 2 )
  {
    v7 = a4 - 1LL;
    v8 = v7 + a1;
    if ( (a1 > v7 + a3 || v8 < a3) && (a1 > v7 + a2 || v8 < a2) )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140278F60);
      v10 = a3 + 4;
      v11 = _mm_load_si128((     __m128i *)&xmmword_140278F10);
      v12 = a2 - a3;
      v13 = a1 - a3;
      v14 = _mm_cvtsi32_si128(2u);
      do
      {
        v15 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 4));
        v10 += 16;
        v4 += 16;
        v16 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v15), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 20)))),
                      v11),
                    v14),
                  216),
                216);
        v17 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 16));
        v18 = _mm_and_si128(_mm_shuffle_epi32(v16, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 20) = _mm_cvtsi128_si32(_mm_packus_epi16(v18, v18));
        v19 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v17), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 16)))),
                      v11),
                    v14),
                  216),
                216);
        v20 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 12));
        v21 = _mm_and_si128(_mm_shuffle_epi32(v19, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 16) = _mm_cvtsi128_si32(_mm_packus_epi16(v21, v21));
        v22 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v20), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 12)))),
                      v11),
                    v14),
                  216),
                216);
        v23 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 8));
        v24 = _mm_and_si128(_mm_shuffle_epi32(v22, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v24, v24));
        v25 = _mm_and_si128(
                _mm_shuffle_epi32(
                  _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(
                      _mm_sra_epi32(
                        _mm_add_epi32(
                          _mm_add_epi32(
                            _mm_mullo_epi32(_mm_cvtepu8_epi32(v23), si128),
                            _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 8)))),
                          v11),
                        v14),
                      216),
                    216),
                  216),
                _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 8) = _mm_cvtsi128_si32(_mm_packus_epi16(v25, v25));
      }
      while ( (__int64)(-4LL - a3 + v10) < (__int64)(a4 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  v26 = v4;
  if ( v4 < (__int64)a4 )
  {
    v27 = (unsigned __int8 *)(v4 + a3);
    v28 = a1 - a3;
    v29 = a2 - a3;
    v30 = a4 - v26;
    do
    {
      v31 = v27[v29];
      v32 = *v27++;
      v27[v28 - 1] = (unsigned int)(3 * v31 + v32 + 2) >> 2;
      --v30;
    }
    while ( v30 );
  }
  return a1;
}

// 140278F10: using guessed type __int128 xmmword_140278F10;
// 140278F60: using guessed type __int128 xmmword_140278F60;
// 1402791D0: using guessed type __int128 xmmword_1402791D0;
// 140302080: using guessed type int dword_140302080;

//----- (000000014016DFD0) ----------------------------------------------------
__m128i *(           *           sub_14016DFD0(
        _QWORD *a1))(__m128i *a1, unsigned __int8 *a2,      __m128i *a3, int a4)
{
  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;
  __m128i *(           *result)(__m128i *, unsigned __int8 *,      __m128i *, int); // rax

  a1[2318] = (uintptr_t)sub_140163020;
  a1[2319] = (uintptr_t)sub_14015B140;
  a1[2320] = (uintptr_t)sub_14016DAC0;
  _RAX = 1;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  if ( (_RDX & 0x4000000) != 0 )
  {
    a1[2318] = (uintptr_t)sub_140163640;
    a1[2319] = (uintptr_t)sub_14015B270;
    a1[2320] = (uintptr_t)sub_14016DB80;
    return sub_14016DB80;
  }
  return result;
}


//----- (000000014016E050) ----------------------------------------------------
__int64            sub_14016E050(unsigned int a1, int a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // ebx

  v3 = a3;
  if ( a2 >= 0 )
    v4 = a1 >> a2;
  else
    v4 = a1 << -(char)a2;
  if ( v4 >= 0x100 )
    sub_14023E640((char *)L"v < 256", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x148Eu);
  v5 = v4 >> (8 - v3);
  if ( (unsigned int)v3 > 8 )
    sub_14023E640((char *)L"bits >= 0 && bits <= 8", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x1490u);
  return (unsigned int)((int)(v5 * dword_140301870[v3]) >> dword_140301870[v3 + 10]);
}

// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272AF8: using guessed type __int16 aV256[8];
// 140272B08: using guessed type __int16[23];
// 140301870: using guessed type _DWORD dword_140301870[20];

//----- (000000014016E0F0) ----------------------------------------------------
__int64            sub_14016E0F0(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a2 )
  {
    if ( a2 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v4 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v4 < a2) )
      {
        v5 = (unsigned int)(a2 - v4);
        v6 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        return (*(__int64 (           **)(__int64, __int64))(a1 + 24))(v6, v5);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += a2;
        return a2;
      }
    }
    else
    {
      result = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = result;
    }
  }
  return result;
}


//----- (000000014016E150)
__int64 sub_14016E150(void) { return sr_client_cpu_sse2_probe(); }


//----- (000000014016E170) ----------------------------------------------------
__int64            sub_14016E170(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 52) = 128;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 56;
  *(_QWORD *)(a1 + 192) = a1 + 56;
  sub_14016D910(a1);
  result = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 216) = result;
  return result;
}


//----- (000000014016E1E0) ----------------------------------------------------
__int64            sub_14016E1E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 16) = *(_OWORD *)&off_140301820;
  *(_QWORD *)(a1 + 32) = (uint64)(uintptr_t)(off_140301830);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 52) = 128;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 56;
  *(_QWORD *)(a1 + 192) = a1 + 56;
  sub_14016D910(a1);
  result = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 216) = result;
  return result;
}

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();

//----- (000000014016E2A0) ----------------------------------------------------
__int64            sub_14016E2A0(unsigned __int64 (           **a1)(__int64, __int64, int), char *a2)
{
  int v3; // eax
  __int64 (           *v4)(__int64, __int64, int); // rdx
  unsigned int v5; // r8d
  __int64 (           *v7)(__int64, __int64, int); // [rsp+30h] [rbp+8h] BYREF

  v3 = sub_14020B8E4((__int64 *)&v7, a2, "wb");
  v4 = v7;
  v5 = 0;
  *a1 = (uintptr_t)sub_14016E2F0;
  if ( v3 )
    v4 = nullptr;
  a1[1] = (unsigned __int64 (           *)(__int64, __int64, int))v4;
  LOBYTE(v5) = v4 != nullptr;
  return v5;
}


//----- (000000014016E2F0) ----------------------------------------------------
unsigned __int64            sub_14016E2F0(__int64 a1, __int64 a2, int a3)
{
  return sub_14020CE0C(a2, 1, a3, a1);
}


//----- (000000014016E370) ----------------------------------------------------
__int64            sub_14016E370(__int64 a1, int *a2, int *a3, unsigned int *a4)
{
  unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // di
  unsigned __int8 *v8; // rax
  char v10; // r14
  char *v11; // rax
  int v12; // r15d
  int v13; // r8d
  __int64 v14; // rcx
  unsigned __int8 *v15; // rcx
  unsigned __int8 v16; // r8
  int v17; // edx
  unsigned __int8 *v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rcx
  int v25; // r13d
  int v26; // r12d
  unsigned __int8 *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int8 v29; // dl
  _BYTE *v30; // rax
  int v31; // ebp
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  unsigned int v37; // edi

  v5 = *(unsigned __int8 **)(a1 + 192);
  v6 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v5 >= v6 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    sub_14016D910(a1);
    v5 = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    v6 = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++v5);
  }
  if ( (unsigned __int64)v5 < v6 )
  {
    v7 = *v5++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  sub_14016D910(a1);
  v8 = *(unsigned __int8 **)(a1 + 192);
  v7 = *v8;
  v5 = v8 + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  if ( v7 > 1u )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
LABEL_12:
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v11 = *(char **)(a1 + 192);
      v10 = *v11;
      v5 = (unsigned __int8 *)(v11 + 1);
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v10 = *v5++;
  }
  v12 = 0;
  if ( v7 == 1 )
  {
    if ( ((v10 - 1) & 0xF7) == 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v13 = *(_DWORD *)(a1 + 200) - (_DWORD)v5, v13 < 4) )
      {
        v14 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(v14, (unsigned int)(4 - v13));
        v15 = *(unsigned __int8 **)(a1 + 192);
      }
      else
      {
        v15 = v5 + 4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15);
      }
      if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v18 = *(unsigned __int8 **)(a1 + 192);
          v16 = *v18;
          v15 = v18 + 1;
        }
        else
        {
          v16 = 0;
        }
        v17 = (int)v15;
      }
      else
      {
        v16 = *v15;
        v17 = (_DWORD)v15++ + 1;
      }
      v19 = v16;
      if ( v16 <= 0x20u )
      {
        v20 = 0x101018100LL;
        if ( _bittest64(&v20, v19) )
        {
          if ( *(_QWORD *)(a1 + 16) && (v21 = *(_DWORD *)(a1 + 200) - v17, v21 < 4) )
          {
            v22 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (           **)(__int64, _QWORD))(a1 + 24))(v22, (unsigned int)(4 - v21));
          }
          else
          {
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 4);
          }
          goto LABEL_42;
        }
      }
    }
LABEL_36:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( ((v10 - 2) & 0xF6) != 0 )
    goto LABEL_36;
  if ( *(_QWORD *)(a1 + 16) && (v23 = *(_DWORD *)(a1 + 200) - (_DWORD)v5, v23 < 9) )
  {
    v24 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    (*(void (           **)(__int64, _QWORD))(a1 + 24))(v24, (unsigned int)(9 - v23));
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 9);
  }
  LODWORD(v19) = 0;
LABEL_42:
  v25 = sub_1401605B0(a1);
  if ( v25 < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  v26 = sub_1401605B0(a1);
  if ( v26 < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  v27 = *(unsigned __int8 **)(a1 + 192);
  v28 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v27 >= v28 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v31 = 0;
      v32 = 0;
      goto LABEL_52;
    }
    sub_14016D910(a1);
    v27 = *(unsigned __int8 **)(a1 + 192);
    v28 = *(_QWORD *)(a1 + 200);
  }
  v29 = *v27;
  v30 = v27 + 1;
  v31 = v29;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v30);
  v32 = v29;
  if ( (unsigned __int64)v30 < v28 )
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v30 + 1);
    goto LABEL_54;
  }
LABEL_52:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    ++*(_QWORD *)(a1 + 192);
  }
LABEL_54:
  if ( !(_DWORD)v19 )
  {
    if ( v10 == 3 || v10 == 11 )
      v12 = 1;
    v33 = v32 - 8;
    if ( v33 )
    {
      v34 = v33 - 7;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 8;
          if ( v36 && v36 != 8 )
            goto LABEL_72;
          LODWORD(v19) = v31;
          goto LABEL_71;
        }
        if ( v12 )
        {
          v37 = 2;
          goto LABEL_77;
        }
      }
LABEL_75:
      v37 = 3;
      goto LABEL_77;
    }
LABEL_76:
    v37 = 1;
    goto LABEL_77;
  }
  if ( ((v31 - 8) & 0xFFFFFFF7) != 0 )
  {
LABEL_72:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( (_DWORD)v19 == 8 )
    goto LABEL_76;
  if ( (_DWORD)v19 == 15 || (_DWORD)v19 == 16 )
    goto LABEL_75;
  if ( (_DWORD)v19 != 24 && (_DWORD)v19 != 32 )
    goto LABEL_72;
LABEL_71:
  v37 = (unsigned int)v19 >> 3;
  if ( !v37 )
    goto LABEL_72;
LABEL_77:
  if ( a2 )
    *a2 = v25;
  if ( a3 )
    *a3 = v26;
  if ( a4 )
    *a4 = v37;
  return 1;
}


//----- (000000014016E7A0) ----------------------------------------------------
char *           sub_14016E7A0(__int64 a1, _DWORD *a2, int *a3, unsigned int *a4, int a5)
{
  unsigned __int8 *v5; // rax
  unsigned __int64 v7; // rcx
  int v8; // ebp
  unsigned __int8 v9; // r10
  unsigned __int8 *v10; // rax
  unsigned __int8 v11; // r15
  unsigned __int8 *v12; // rax
  int v13; // esi
  unsigned __int8 v14; // cl
  unsigned __int8 *v15; // rax
  int v16; // eax
  unsigned __int8 *v17; // rcx
  unsigned __int8 v18; // dl
  unsigned __int8 *v19; // rax
  unsigned int v20; // r14d
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int8 *v23; // rax
  unsigned __int8 v24; // dl
  unsigned __int8 *v25; // rax
  unsigned int v26; // r12d
  int v27; // edi
  unsigned __int8 v28; // cl
  unsigned __int8 *v29; // rax
  int v30; // r8d
  int v31; // r13d
  unsigned int v32; // eax
  int v33; // r9d
  __int32 v34; // ecx
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  unsigned int v39; // r14d
  __int64 v40; // rax
       char *v41; // rdx
  unsigned __int32 v42; // ecx
  unsigned int v43; // edi
  int v44; // eax
  int v45; // r13d
  char *v46; // r12
  __int64 v47; // rdi
  int v48; // ebp
  __m128i *v49; // rsi
  __m128i *v50; // rsi
  __m128i *v51; // rcx
  __m128i *v52; // rax
  __m128i *v53; // rsi
  __m128i *v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // r10
  __int64 v58; // r9
  int v59; // r8d
  int v60; // r12d
  unsigned __int8 *v61; // rax
  unsigned __int8 v62; // cl
  unsigned __int8 *v63; // rax
  unsigned __int8 *v64; // rax
  unsigned __int8 v65; // cl
  int v66; // eax
  unsigned __int8 *v67; // rax
  unsigned __int8 v68; // cl
  unsigned __int16 v69; // ax
  __int64 v70; // rdi
  __int8 *v71; // rax
  __int8 v72; // cl
  __int8 *v73; // rax
  __int64 v74; // rdx
  __int8 *v75; // rcx
  __int64 v76; // rdi
  int v77; // r11d
  int v78; // ebx
  int v79; // r10d
  int v80; // r8d
  __int64 v81; // r9
  char *v82; // rdx
  char v83; // cl
  char *v84; // r8
  __int64 v85; // r10
  char v86; // cl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016E7A0[176];
#define v88 (*(int (*))(void *)(sr_frame_14016E7A0 + 8)) /* [rsp+30h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_14016E7A0 + 8)) /* [rsp+30h] */
#define v90 (*(int (*))(void *)(sr_frame_14016E7A0 + 12)) /* [rsp+34h] */
#define v91 (*(__m128i (*))(void *)(sr_frame_14016E7A0 + 16)) /* [rsp+38h] */
#define v92 (*(int (*))(void *)(sr_frame_14016E7A0 + 32)) /* [rsp+48h] */
#define v93 (*(int (*))(void *)(sr_frame_14016E7A0 + 36)) /* [rsp+4Ch] */
#define v94 (*(int (*))(void *)(sr_frame_14016E7A0 + 40)) /* [rsp+50h] */
#define v95 (*(int (*))(void *)(sr_frame_14016E7A0 + 48)) /* [rsp+58h] */
#define v96 (*(int (*))(void *)(sr_frame_14016E7A0 + 52)) /* [rsp+5Ch] */
#define v97 (*(int (*))(void *)(sr_frame_14016E7A0 + 56)) /* [rsp+60h] */
#define v98 (*(void * (*))(void *)(sr_frame_14016E7A0 + 64)) /* [rsp+68h] */
#define v99 (*(__int64 (*))(void *)(sr_frame_14016E7A0 + 72)) /* [rsp+70h] */
#define v100 (*(int (*))(void *)(sr_frame_14016E7A0 + 168)) /* [rsp+D0h] */
#define v101 (*(unsigned __int8 (*))(void *)(sr_frame_14016E7A0 + 168)) /* [rsp+D0h] */

  v5 = *(unsigned __int8 **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 200);
  v8 = 0;
  if ( (unsigned __int64)v5 < v7 )
  {
LABEL_4:
    v9 = *v5;
    v10 = v5 + 1;
    v100 = v9;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10);
    if ( (unsigned __int64)v10 < v7 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v5 = *(unsigned __int8 **)(a1 + 192);
    v7 = *(_QWORD *)(a1 + 200);
    goto LABEL_4;
  }
  v100 = 0;
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v11 = 0;
    v13 = 0;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v15 = *(unsigned __int8 **)(a1 + 192);
      v14 = *v15;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 1);
    }
    else
    {
      v14 = 0;
    }
    goto LABEL_15;
  }
  sub_14016D910(a1);
  v10 = *(unsigned __int8 **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 200);
LABEL_9:
  v11 = *v10;
  v12 = v10 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12);
  v13 = v11;
  if ( (unsigned __int64)v12 >= v7 )
    goto LABEL_12;
  v14 = *v12;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
LABEL_15:
  SR_VEC_LANES(128, v91, i32)[1] = v14;
  v88 = sub_1401605B0(a1);
  v16 = sub_1401605B0(a1);
  v17 = *(unsigned __int8 **)(a1 + 192);
  v95 = v16;
  if ( (unsigned __int64)v17 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v19 = *(unsigned __int8 **)(a1 + 192);
      v18 = *v19;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v19 + 1);
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = *v17;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v17 + 1);
  }
  v20 = v18;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  v94 = sub_1401605B0(a1);
  v21 = sub_1401605B0(a1);
  v22 = *(_QWORD *)(a1 + 200);
  v93 = v21;
  v23 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v23 >= v22 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v26 = 0;
      v27 = 0;
      goto LABEL_26;
    }
    sub_14016D910(a1);
    v23 = *(unsigned __int8 **)(a1 + 192);
    v22 = *(_QWORD *)(a1 + 200);
  }
  v24 = *v23;
  v25 = v23 + 1;
  v26 = v24;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v25);
  v27 = v24;
  if ( (unsigned __int64)v25 < v22 )
  {
    v28 = *v25;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v25 + 1);
    goto LABEL_29;
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v29 = *(unsigned __int8 **)(a1 + 192);
    v28 = *v29;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v29 + 1);
  }
  else
  {
    v28 = 0;
  }
LABEL_29:
  v30 = v93;
  v31 = 1;
  v32 = v28;
  v98 = nullptr;
  SR_VEC_LANES(128, v91, i32)[0] = 0;
  v92 = 0;
  if ( v93 > 0x1000000 || (v33 = v94, v94 > 0x1000000) )
  {
LABEL_149:
    v40 = sr_client_static_tls();
    v41 = "too large";
    goto LABEL_150;
  }
  v90 = 0;
  v34 = SR_VEC_LANES(128, v91, i32)[1] - 8;
  if ( SR_VEC_LANES(128, v91, i32)[1] < 8u )
    v34 = SR_VEC_LANES(128, v91, i32)[1];
  v96 = 1 - ((v32 >> 5) & 1);
  if ( !v13 )
  {
    v35 = v27 - 8;
    if ( v35 )
    {
      v36 = v35 - 7;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          v38 = v37 - 8;
          if ( v38 && v38 != 8 )
            goto LABEL_47;
          v20 = v26;
          goto LABEL_46;
        }
        if ( v34 == 3 )
        {
          v39 = 2;
          goto LABEL_52;
        }
      }
LABEL_50:
      v39 = 3;
      v90 = 1;
      goto LABEL_52;
    }
LABEL_51:
    v39 = 1;
    goto LABEL_52;
  }
  if ( v20 == 8 )
    goto LABEL_51;
  if ( v20 == 15 || v20 == 16 )
    goto LABEL_50;
  if ( v20 != 24 && v20 != 32 )
    goto LABEL_47;
LABEL_46:
  v39 = v20 >> 3;
  if ( !v39 )
  {
LABEL_47:
    v40 = sr_client_static_tls();
    v41 = "bad format";
LABEL_150:
    *(_QWORD *)(v40 + 16) = (uint64)(uintptr_t)(v41);
    return nullptr;
  }
LABEL_52:
  *a2 = v94;
  *a3 = v30;
  if ( a4 )
    *a4 = v39;
  if ( v33 < 0 || v30 < 0 || v30 && v33 > 0x7FFFFFFF / v30 )
    goto LABEL_149;
  v97 = v33 * v30;
  if ( v33 * v30 < 0 || v33 * v30 > (int)(0x7FFFFFFF / v39) )
    goto LABEL_149;
  if ( v30 && v33 > 0x7FFFFFFF / v30 )
    goto LABEL_148;
  SR_VEC_LANES(128, v91, i64)[1] = sr_path_malloc((int)(v33 * v30 * v39));
  if ( !SR_VEC_LANES(128, v91, i64)[1] )
    goto LABEL_148;
  sub_14016E0F0(a1, v100);
  if ( v13 )
  {
    if ( !v95 )
    {
      v51 = (__m128i *)SR_VEC_LANES(128, v91, i64)[1];
LABEL_76:
      free(v51);
      v40 = sr_client_static_tls();
      v41 = "bad palette";
      goto LABEL_150;
    }
    sub_14016E0F0(a1, v88);
    if ( v95 >= 0 && v95 <= (int)(0x7FFFFFFF / v39) )
    {
      v52 = (__m128i *)sr_path_malloc((int)(v95 * v39));
      v98 = v52;
      v53 = v52;
      if ( v52 )
      {
        if ( v90 )
        {
          v54 = v52;
          if ( v39 != 3 )
            sub_14023E640(
              (char *)L"tga_comp == STBI_rgb",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x1691u);
          v55 = (unsigned int)v95;
          v89 = v26;
          v101 = v11;
          do
          {
            sub_14016F120(a1, v54);
            v54 = (__m128i *)((char *)v54 + v39);
            --v55;
          }
          while ( v55 );
          v31 = 1;
        }
        else
        {
          v89 = v26;
          v101 = v11;
          if ( !sub_140160860(a1, v52, v95 * v39) )
          {
            free((void *)SR_VEC_LANES(128, v91, i64)[1]);
            v51 = v53;
            goto LABEL_76;
          }
        }
        v42 = SR_VEC_LANES(128, v91, u32)[1];
        v43 = v26;
LABEL_87:
        if ( v97 <= 0 )
        {
LABEL_127:
          v45 = v93;
          if ( v96 && v93 > 0 )
          {
            v76 = SR_VEC_LANES(128, v91, i64)[1];
            v77 = v94 * v39;
            v78 = 0;
            v79 = v94 * v39 * (v93 - 1);
            do
            {
              v80 = v77;
              if ( v77 > 0 )
              {
                v81 = v79 - (__int64)v78;
                v82 = (char *)(v78 + v76);
                do
                {
                  --v80;
                  v83 = *v82;
                  *v82 = v82[v81];
                  (v82++)[v81] = v83;
                }
                while ( v80 > 0 );
              }
              v78 += v77;
              v79 -= v77;
              v8 += 2;
            }
            while ( v8 < v45 );
          }
          if ( v98 )
            free(v98);
          v46 = (char *)SR_VEC_LANES(128, v91, i64)[1];
          goto LABEL_137;
        }
        v56 = SR_VEC_LANES(128, v91, i64)[1] - (_QWORD)&v91;
        v57 = v39;
        v58 = (unsigned int)v97;
        v99 = (unsigned int)v97;
        v59 = 0;
        v60 = 0;
        while ( 1 )
        {
          if ( v42 < 8 )
            goto LABEL_101;
          if ( !v59 )
            break;
          if ( !v60 || v31 )
            goto LABEL_101;
LABEL_124:
          v74 = 0;
          do
          {
            v75 = &SR_VEC_LANES(128, v91, i8)[v74++];
            v75[v56] = *v75;
          }
          while ( v74 < v39 );
          v43 = v89;
          --v59;
          v42 = SR_VEC_LANES(128, v91, u32)[1];
          v56 += v57;
          --v58;
          v92 = v59;
          v99 = v58;
          if ( !v58 )
            goto LABEL_127;
        }
        v61 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v61 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1);
            v63 = *(unsigned __int8 **)(a1 + 192);
            v62 = *v63;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v63 + 1);
          }
          else
          {
            v62 = 0;
          }
        }
        else
        {
          v62 = *v61;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v61 + 1);
        }
        v60 = v62 >> 7;
        v92 = (v62 & 0x7F) + 1;
LABEL_101:
        if ( v101 )
        {
          if ( v43 == 8 )
          {
            v64 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)v64 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1);
                v67 = *(unsigned __int8 **)(a1 + 192);
                v68 = *v67;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v67 + 1);
                v66 = v68;
              }
              else
              {
                v66 = 0;
              }
            }
            else
            {
              v65 = *v64;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v64 + 1);
              v66 = v65;
            }
          }
          else
          {
            v66 = sub_1401605B0(a1);
          }
          if ( v66 >= v95 )
            v66 = 0;
          sub_1401FC920(&v91, (     __m128i *)((char *)v98 + (int)(v39 * v66)), v39);
        }
        else if ( v90 )
        {
          if ( v39 != 3 )
            sub_14023E640(
              (char *)L"tga_comp == STBI_rgb",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x16C2u);
          v69 = sub_1401605B0(a1);
          SR_VEC_LANES(128, v91, i8)[0] = (char)-((v69 >> 10) & 0x1F) / 31;
          SR_VEC_LANES(128, v91, i8)[1] = (char)-((v69 >> 5) & 0x1F) / 31;
          SR_VEC_LANES(128, v91, i8)[2] = 255 * (v69 & 0x1F) / 31;
        }
        else
        {
          v70 = 0;
          do
          {
            v71 = *(__int8 **)(a1 + 192);
            if ( (unsigned __int64)v71 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1);
                v73 = *(__int8 **)(a1 + 192);
                v72 = *v73;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v73 + 1);
              }
              else
              {
                v72 = 0;
              }
            }
            else
            {
              v72 = *v71;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v71 + 1);
            }
            SR_VEC_LANES(128, v91, i8)[v70++] = v72;
          }
          while ( v70 < v39 );
        }
        v59 = v92;
        v31 = 0;
        v58 = v99;
        v57 = v39;
        goto LABEL_124;
      }
    }
    free((void *)SR_VEC_LANES(128, v91, i64)[1]);
LABEL_148:
    v40 = sr_client_static_tls();
    v41 = "outofmem";
    goto LABEL_150;
  }
  v42 = SR_VEC_LANES(128, v91, u32)[1];
  v43 = v26;
  v89 = v26;
  v101 = v11;
  if ( SR_VEC_LANES(128, v91, i32)[1] >= 8u )
    goto LABEL_87;
  v44 = v90;
  v89 = v26;
  v101 = v11;
  if ( v90 )
    goto LABEL_87;
  v45 = v93;
  v46 = (char *)SR_VEC_LANES(128, v91, i64)[1];
  if ( v93 <= 0 )
    goto LABEL_138;
  v47 = (unsigned int)v93;
  v48 = v39 * v94;
  if ( v96 )
  {
    v49 = (__m128i *)(SR_VEC_LANES(128, v91, i64)[1] + (int)(v94 * v39 * (v93 - 1)));
    do
    {
      sub_140160860(a1, v49, v48);
      v49 = (__m128i *)((char *)v49 - v48);
      --v47;
    }
    while ( v47 );
  }
  else
  {
    v50 = (__m128i *)SR_VEC_LANES(128, v91, i64)[1];
    do
    {
      sub_140160860(a1, v50, v48);
      v50 = (__m128i *)((char *)v50 + v48);
      --v47;
    }
    while ( v47 );
  }
LABEL_137:
  v44 = v90;
LABEL_138:
  if ( v39 >= 3 && !v44 )
  {
    v84 = v46;
    if ( v97 > 0 )
    {
      v85 = (unsigned int)v97;
      do
      {
        v86 = *v84;
        *v84 = v84[2];
        v84[2] = v86;
        v84 += v39;
        --v85;
      }
      while ( v85 );
    }
  }
  if ( a5 )
  {
    if ( a5 != v39 )
      return sub_14015D7E0(v46, v39, a5, v94, v45);
  }
  return v46;
}
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101

// 14016EE37: conditional instruction was optimized away because r14d.4!=0
// 14016EF06: conditional instruction was optimized away because r14d.4!=0
// 14016EF76: conditional instruction was optimized away because r14d.4!=0
// 14016ECB0: conditional instruction was optimized away because %var_70.4>=1
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272C68: using guessed type __int16[21];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016F120) ----------------------------------------------------
__int64            sub_14016F120(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v3; // ax
  int v4; // ecx

  v3 = sub_1401605B0(a1);
  *a2 = (char)-((v3 >> 10) & 0x1F) / 31;
  v4 = 255 * (v3 & 0x1F);
  a2[1] = (char)-((v3 >> 5) & 0x1F) / 31;
  a2[2] = v4 / 31;
  return (unsigned int)((unsigned __int64)(2216757315LL * v4) >> 32) >> 31;
}


//----- (000000014016F1B0) ----------------------------------------------------
__int64            sub_14016F1B0(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned __int8 *v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // si
  unsigned __int8 *v6; // rax
  unsigned __int8 v7; // di
  char v8; // dl
  char *v9; // rax
  int v10; // r14d
  int v11; // r8d
  __int64 v12; // rcx
  unsigned __int8 *v13; // rcx
  unsigned __int8 v14; // dl
  int v15; // r9d
  _BYTE *v16; // r8
  unsigned __int8 *v17; // rax
  int v18; // ecx
  unsigned int v19; // edi
  __int64 v20; // rcx
  _BYTE *v21; // rax
  int v22; // r8d
  __int64 v23; // rcx
  unsigned __int8 *v24; // rax
  unsigned __int8 v25; // cl

  v2 = 0;
  v3 = *(unsigned __int8 **)(a1 + 192);
  v4 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v3 >= v4 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    sub_14016D910(a1);
    v3 = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    v4 = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++v3);
  }
  if ( (unsigned __int64)v3 < v4 )
  {
    v5 = *v3++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    v5 = 0;
    v7 = 0;
    goto LABEL_12;
  }
  sub_14016D910(a1);
  v6 = *(unsigned __int8 **)(a1 + 192);
  v5 = *v6;
  v3 = v6 + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v3);
  v7 = v5;
  if ( v5 > 1u )
    goto LABEL_56;
LABEL_12:
  if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v9 = *(char **)(a1 + 192);
      v8 = *v9;
      v3 = (unsigned __int8 *)(v9 + 1);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = *v3++;
  }
  v10 = 16875776;
  if ( v7 != 1 )
  {
    if ( (((v8 - 2) & 0xF6) != 0 || v8 == 11) && v8 != 11 )
      goto LABEL_56;
    if ( *(_QWORD *)(a1 + 16) )
    {
      v22 = *(_DWORD *)(a1 + 200) - (_DWORD)v3;
      if ( v22 < 9 )
      {
        v23 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(v23, (unsigned int)(9 - v22));
        goto LABEL_42;
      }
    }
    v21 = v3 + 9;
LABEL_41:
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21);
LABEL_42:
    if ( (int)sub_1401605B0(a1) >= 1 && (int)sub_1401605B0(a1) >= 1 )
    {
      v24 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v25 = **(_BYTE **)(a1 + 192);
        }
        else
        {
          v25 = 0;
        }
      }
      else
      {
        v25 = *v24;
      }
      if ( v5 != 1 )
        goto LABEL_54;
      if ( v25 == 8 )
      {
LABEL_55:
        v2 = 1;
        goto LABEL_56;
      }
      if ( v25 == 16 )
      {
LABEL_54:
        if ( v25 <= 0x18u && _bittest(&v10, v25) || v25 == 32 )
          goto LABEL_55;
      }
    }
    goto LABEL_56;
  }
  if ( ((v8 - 1) & 0xF7) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) && (v11 = *(_DWORD *)(a1 + 200) - (_DWORD)v3, v11 < 4) )
    {
      v12 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (           **)(__int64, _QWORD))(a1 + 24))(v12, (unsigned int)(4 - v11));
      v13 = *(unsigned __int8 **)(a1 + 192);
    }
    else
    {
      v13 = v3 + 4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13);
    }
    if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_56;
      sub_14016D910(a1);
      v17 = *(unsigned __int8 **)(a1 + 192);
      v14 = *v17;
      v16 = v17 + 1;
      v15 = (_DWORD)v17 + 1;
    }
    else
    {
      v14 = *v13;
      v15 = (_DWORD)v13 + 1;
      v16 = v13 + 1;
    }
    if ( v14 <= 0x18u && _bittest(&v10, v14) || v14 == 32 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v18 = *(_DWORD *)(a1 + 200) - v15;
        if ( v18 < 4 )
        {
          v19 = 4 - v18;
          v20 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
          (*(void (           **)(__int64, _QWORD, _BYTE *))(a1 + 24))(v20, v19, v16);
          goto LABEL_42;
        }
      }
      v21 = v16 + 4;
      goto LABEL_41;
    }
  }
LABEL_56:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return v2;
}


//----- (000000014016F470) ----------------------------------------------------
void sub_14016F470(__m128i *a1, int a2, int a3, int a4)
{
  __m128i *v4; // r12
  __int64 v5; // r15
  __m128i *v6; // rbx
  __int64 v7; // r13
  __m128i *v8; // rsi
  __m128i *v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016F470[2096];
#define v13 (*(__int64 (*))(void *)(sr_frame_14016F470 + 0)) /* [rsp+0h] */
#define v14 (*(__m128i (*)[128])(void *)(sr_frame_14016F470 + 32)) /* [rsp+20h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_14016F470 + 2080)) /* [rsp+820h] */

  v4 = a1;
  v5 = a2 * (__int64)a4;
  if ( a3 >> 1 > 0 )
  {
    v6 = (__m128i *)((char *)a1 + v5 * (a3 - 1));
    v7 = (unsigned int)(a3 >> 1);
    do
    {
      v8 = v4;
      v9 = v6;
      v10 = v5;
      if ( v5 )
      {
        do
        {
          v11 = 2048;
          if ( v10 < 0x800 )
            v11 = v10;
          sub_1401FC920(v14, v8, v11);
          sub_1401FC920(v8, v9, v11);
          sub_1401FC920(v9, v14, v11);
          v8 = (__m128i *)((char *)v8 + v11);
          v9 = (__m128i *)((char *)v9 + v11);
          v10 -= v11;
        }
        while ( v10 );
      }
      v4 = (__m128i *)((char *)v4 + v5);
      v6 = (__m128i *)((char *)v6 - v5);
      --v7;
    }
    while ( v7 );
  }
  return;
}
#undef v13
#undef v14
#undef v15


//----- (000000014016F590) ----------------------------------------------------
void            sub_14016F590(__m128i *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r10d
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // r13
  __m128i *v11; // r12
  __m128i *v12; // rbx
  __m128i *v13; // rsi
  __m128i *v14; // rbp
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016F590[2128];
#define v17 (*(__int64 (*))(void *)(sr_frame_14016F590 + 0)) /* [rsp+0h] */
#define v18 (*(int (*))(void *)(sr_frame_14016F590 + 32)) /* [rsp+20h] */
#define v19 (*(int (*))(void *)(sr_frame_14016F590 + 36)) /* [rsp+24h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_14016F590 + 40)) /* [rsp+28h] */
#define v21 (*(__m128i * (*))(void *)(sr_frame_14016F590 + 48)) /* [rsp+30h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_14016F590 + 56)) /* [rsp+38h] */
#define v23 (*(__m128i (*)[128])(void *)(sr_frame_14016F590 + 64)) /* [rsp+40h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_14016F590 + 2112)) /* [rsp+840h] */

  if ( a4 > 0 )
  {
    v5 = a5 * a2 * a3;
    v6 = a5 * (__int64)a2;
    v20 = v5;
    v7 = (unsigned int)a4;
    v8 = v5;
    v9 = a3 >> 1;
    v22 = v7;
    v19 = a3;
    v21 = a1;
    v18 = a3 >> 1;
    do
    {
      if ( v9 > 0 )
      {
        v10 = (unsigned int)v9;
        v11 = a1;
        v12 = (__m128i *)((char *)a1 + v6 * (a3 - 1));
        do
        {
          v13 = v11;
          v14 = v12;
          v15 = v6;
          if ( v6 )
          {
            do
            {
              v16 = 2048;
              if ( v15 < 0x800 )
                v16 = v15;
              sub_1401FC920(v23, v13, v16);
              sub_1401FC920(v13, v14, v16);
              sub_1401FC920(v14, v23, v16);
              v13 = (__m128i *)((char *)v13 + v16);
              v14 = (__m128i *)((char *)v14 + v16);
              v15 -= v16;
            }
            while ( v15 );
          }
          v11 = (__m128i *)((char *)v11 + v6);
          v12 = (__m128i *)((char *)v12 - v6);
          --v10;
        }
        while ( v10 );
        a1 = v21;
        v9 = v18;
        v7 = v22;
        a3 = v19;
        v8 = v20;
      }
      a1 = (__m128i *)((char *)a1 + v8);
      --v7;
      v21 = a1;
      v22 = v7;
    }
    while ( v7 );
    sub_1401F8B20((unsigned __int64)&v17 ^ v24);
  }
}
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24


//----- (000000014016F730) ----------------------------------------------------
__int64            sub_14016F730(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v5; // edi
  __int16 v6; // bp
  unsigned __int8 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int i; // ecx
  int v12; // r10d
  int v13; // r8d
  int j; // r11d
  int v15; // esi
  int v16; // r8d
  int v17; // eax
  __int64 v18; // r9
  int *v19; // r11
  int v20; // r10d
  __int64 v21; // rax
  unsigned int v22; // eax
  int k; // eax
  __int64 v24; // rcx
  __int64 v26; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v27[17]; // [rsp+20h] [rbp-C8h] BYREF
  int v28; // [rsp+60h] [rbp-88h]
  _DWORD v29[16]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-38h]

  v5 = 0;

  v6 = 0;
  memset(v27, 0, sizeof(v27));
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)a1), 0, 0x400u);
  if ( a3 > 0 )
  {
    v8 = a2;
    v9 = (unsigned int)a3;
    do
    {
      v10 = *v8++;
      ++*((_DWORD *)v27 + v10);
      --v9;
    }
    while ( v9 );
  }
  v27[0] = 0;
  for ( i = 1; i < 16; ++i )
  {
    if ( *((_DWORD *)v27 + (unsigned int)i) > 1 << i )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad sizes");
      return 0;
    }
  }
  v12 = 1;
  v13 = 0;
  for ( j = 15; j > 0; --j )
  {
    v15 = *((_DWORD *)v27 + v12);
    v29[v12] = v13;
    *(_WORD *)(a1 + 2LL * v12 + 1024) = v13;
    v16 = v15 + v13;
    *(_WORD *)(a1 + 2LL * v12 + 1124) = v6;
    if ( v15 && v16 - 1 >= 1 << v12 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad codelengths");
      return 0;
    }
    v17 = v16 << j;
    v13 = 2 * v16;
    v6 += v15;
    *(_DWORD *)(a1 + 4LL * v12++ + 1056) = v17;
  }
  *(_DWORD *)(a1 + 1120) = 0x10000;
  if ( a3 > 0 )
  {
    do
    {
      v18 = *a2;
      if ( *a2 )
      {
        v19 = &v29[v18];
        v20 = *v19;
        v21 = *v19 + *(unsigned __int16 *)(a1 + 2 * v18 + 1124) - *(unsigned __int16 *)(a1 + 2 * v18 + 1024);
        *(_BYTE *)(v21 + a1 + 1156) = v18;
        *(_WORD *)(a1 + 2 * v21 + 1444) = v5;
        if ( (unsigned int)v18 <= 9 )
        {
          v22 = (16
               * ((4 * ((2 * (v20 & 0x5555)) & 0x3333 | (v20 >> 1) & 0x1111)) & 0xF0F
                | (((2 * (v20 & 0x5555)) | (v20 >> 1) & 0x5555u) >> 2) & 0x303))
              | (((4 * ((2 * (v20 & 0x5555)) & 0x3333 | (v20 >> 1) & 0x1111))
                | (((2 * (v20 & 0x5555)) | (v20 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4)
              & 0xF0F;
          for ( k = (((unsigned __int8)v22 << 8) | BYTE1(v22)) >> (16 - v18);
                k < 512;
                *(_WORD *)(a1 + 2 * v24) = v5 | ((_WORD)v18 << 9) )
          {
            v24 = k;
            k += 1 << v18;
          }
        }
        *v19 = v20 + 1;
      }
      ++v5;
      ++a2;
    }
    while ( v5 < a3 );
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016F9E0) ----------------------------------------------------
__int64            sub_14016F9E0(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf
  unsigned int v6; // edi
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = *(_DWORD *)(a1 + 48) == 0;
  *(_QWORD *)(a1 + 24) = a2;
  if ( v3 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("output buffer limit");
    return 0;
  }
  v6 = a2 - *(_DWORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32);
  if ( ~v6 < a3 )
    goto LABEL_9;
  if ( v6 + a3 > v7 )
  {
    while ( v7 <= 0x7FFFFFFF )
    {
      v7 *= 2;
      if ( v6 + a3 <= v7 )
        goto LABEL_8;
    }
    goto LABEL_9;
  }
LABEL_8:
  v8 = v7;
  v9 = j__realloc_base_sr(*(_QWORD *)(a1 + 32), v7);
  if ( !v9 )
  {
LABEL_9:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 24) = v9 + v6;
  *(_QWORD *)(a1 + 40) = v8 + v9;
  return 1;
}

// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016FB20) ----------------------------------------------------
__int64            sub_14016FB20(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  unsigned int v5; // edx
  unsigned int v6; // eax

  v3 = a1;
  if ( *(int *)(a1 + 16) < 16 )
  {
    if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
      return 0xFFFFFFFFLL;
    sub_140160350(a1);
  }
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(unsigned __int16 *)(a2 + 2LL * (v5 & 0x1FF));
  if ( !*(_WORD *)(a2 + 2LL * (v5 & 0x1FF)) )
    return sub_14016FB90(v3, a2);
  *(_DWORD *)(v3 + 16) -= v6 >> 9;
  *(_DWORD *)(v3 + 20) = v5 >> (v6 >> 9);
  return v6 & 0x1FF;
}

// 14016FB4B: variable 'v3' is possibly undefined

//----- (000000014016FB90) ----------------------------------------------------
__int64            sub_14016FB90(__int64 a1, __int64 a2)
{
  int v2; // r10d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int *v7; // rcx
  int v8; // r8d
  int v9; // eax
  int v10; // edx

  v2 = *(_DWORD *)(a1 + 20);
  v5 = (2 * (v2 & 0x5555)) | (v2 >> 1) & 0x5555;
  v6 = (16 * ((4 * (v5 & 0x3333)) & 0xF0F | (v5 >> 2) & 0x303))
     | (((4 * (v5 & 0x3333)) | (v5 >> 2) & 0x3333) >> 4) & 0xF0F;
  v7 = (int *)(a2 + 1096);
  v8 = (v6 >> 8) | ((unsigned __int8)v6 << 8);
  v9 = 10;
  if ( v8 >= *(_DWORD *)(a2 + 1096) )
  {
    do
    {
      ++v9;
      ++v7;
    }
    while ( v8 >= *v7 );
    if ( v9 >= 16 )
      return 0xFFFFFFFFLL;
  }
  v10 = (v8 >> (16 - v9)) - *(unsigned __int16 *)(a2 + 2LL * v9 + 1024) + *(unsigned __int16 *)(a2 + 2LL * v9 + 1124);
  if ( (unsigned int)v10 >= 0x120 || *(unsigned __int8 *)(v10 + a2 + 1156) != v9 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 16) -= v9;
  *(_DWORD *)(a1 + 20) = (unsigned int)v2 >> v9;
  return *(unsigned __int16 *)(a2 + 2LL * v10 + 1444);
}


//----- (000000014016FC70) ----------------------------------------------------
__int64            sub_14016FC70(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v4; // r11
  unsigned int v5; // edx

  v2 = *(_DWORD *)(a1 + 16);
  v4 = a1;
  if ( v2 < a2 )
  {
    sub_140160350(a1);
    v2 = *(_DWORD *)(v4 + 16);
  }
  v5 = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(v4 + 20) = v5 >> a2;
  *(_DWORD *)(v4 + 16) = v2 - a2;
  return v5 & ((1 << a2) - 1);
}

// 14016FC89: variable 'v4' is possibly undefined

//----- (000000014016FD50) ----------------------------------------------------
__int64            sub_14016FD50(char *a1, char *a2, char *a3, unsigned int *a4)
{
  int v7; // eax
  FILE *v8; // rdi
  int v9; // esi
  int v10; // eax
  char *v11; // rax
  __int64 (           *v17)(); // [rsp+50h] [rbp-B0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FD50[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_14016FD50 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_14016FD50 + 32)) /* [rsp+20h] */
#define v15 (*(_BYTE (*)[16])(void *)(sr_frame_14016FD50 + 48)) /* [rsp+30h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14016FD50 + 64)) /* [rsp+40h] */
#define v18 (*(FILE * (*))(void *)(sr_frame_14016FD50 + 88)) /* [rsp+58h] */
#define v19 (*(int (*))(void *)(sr_frame_14016FD50 + 96)) /* [rsp+60h] */
#define v20 (*(int (*))(void *)(sr_frame_14016FD50 + 100)) /* [rsp+64h] */
#define v21 (*(char (*))(void *)(sr_frame_14016FD50 + 104)) /* [rsp+68h] */
#define v22 (*(char (*))(void *)(sr_frame_14016FD50 + 105)) /* [rsp+69h] */
#define v23 (*(int (*))(void *)(sr_frame_14016FD50 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_14016FD50 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_14016FD50 + 248)) /* [rsp+F8h] */
#define v26 (*(char * (*))(void *)(sr_frame_14016FD50 + 256)) /* [rsp+100h] */
#define v27 (*(char * (*))(void *)(sr_frame_14016FD50 + 264)) /* [rsp+108h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_14016FD50 + 272)) /* [rsp+110h] */

  v7 = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  v8 = Stream;
  if ( v7 )
    v8 = nullptr;
  Stream = v8;
  if ( v8 )
  {
    v9 = ftell_sr(v8);
    v26 = &v21;
    v16 = *(_OWORD *)&off_140301820;
    v24 = &v21;
    v17 = off_140301830;
    v18 = v8;
    v20 = 128;
    v19 = 1;
    v23 = 0;
    v10 = off_140301820(v8, &v21, 128);
    v23 += (_DWORD)v24 - (_DWORD)v26;
    if ( v10 )
    {
      v24 = &v21;
      v11 = &v21 + v10;
    }
    else
    {
      v19 = 0;
      v24 = &v21;
      v11 = &v22;
      v21 = 0;
    }
    v25 = v11;
    v27 = v11;
    sub_140163E70((__int64)v15, a2, a3, a4);
    sub_14020C4A8((__int64)v8, v9, 0);
    sub_14020B9E8((__int64)v8);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return sub_1401F8B20((unsigned __int64)&v13 ^ v28);
}
#undef v13
#undef Stream
#undef v15
#undef v16
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014016FED0) ----------------------------------------------------
__int64            sub_14016FED0(__int128 *a1, __int64 a2, char *a3, char *a4, unsigned int *a5)
{
  __int128 v5; // xmm1
  __int64 v6; // xmm0_8
  int v9; // eax
  char *v10; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FED0[272];
#define v12 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_14016FED0 + 32)) /* [rsp+20h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_14016FED0 + 48)) /* [rsp+30h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 72)) /* [rsp+48h] */
#define v17 (*(int (*))(void *)(sr_frame_14016FED0 + 80)) /* [rsp+50h] */
#define v18 (*(int (*))(void *)(sr_frame_14016FED0 + 84)) /* [rsp+54h] */
#define v19 (*(char (*))(void *)(sr_frame_14016FED0 + 88)) /* [rsp+58h] */
#define v20 (*(char (*))(void *)(sr_frame_14016FED0 + 89)) /* [rsp+59h] */
#define v21 (*(int (*))(void *)(sr_frame_14016FED0 + 216)) /* [rsp+D8h] */
#define v22 (*(char * (*))(void *)(sr_frame_14016FED0 + 224)) /* [rsp+E0h] */
#define v23 (*(char * (*))(void *)(sr_frame_14016FED0 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_14016FED0 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_14016FED0 + 248)) /* [rsp+F8h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 256)) /* [rsp+100h] */

  v5 = *a1;
  v6 = *((_QWORD *)a1 + 2);
  v16 = a2;
  v24 = &v19;
  v14 = v5;
  v22 = &v19;
  v15 = v6;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = ((__int64 (           *)(__int64, char *, __int64))v5)(a2, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  sub_140163E70((__int64)v13, a3, a4, a5);
  return sub_1401F8B20((unsigned __int64)&v12 ^ v26);
}
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26


//----- (000000014016FFD0) ----------------------------------------------------
__int64            sub_14016FFD0(FILE *a1, char *a2, char *a3, unsigned int *a4)
{
  int v8; // r15d
  int v9; // eax
  char *v10; // rax
  __int64 (           *v15)(); // [rsp+40h] [rbp-C0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FFD0[272];
#define v12 (*(__int64 (*))(void *)(sr_frame_14016FFD0 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_14016FFD0 + 32)) /* [rsp+20h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_14016FFD0 + 48)) /* [rsp+30h] */
#define v16 (*(FILE * (*))(void *)(sr_frame_14016FFD0 + 72)) /* [rsp+48h] */
#define v17 (*(int (*))(void *)(sr_frame_14016FFD0 + 80)) /* [rsp+50h] */
#define v18 (*(int (*))(void *)(sr_frame_14016FFD0 + 84)) /* [rsp+54h] */
#define v19 (*(char (*))(void *)(sr_frame_14016FFD0 + 88)) /* [rsp+58h] */
#define v20 (*(char (*))(void *)(sr_frame_14016FFD0 + 89)) /* [rsp+59h] */
#define v21 (*(int (*))(void *)(sr_frame_14016FFD0 + 216)) /* [rsp+D8h] */
#define v22 (*(char * (*))(void *)(sr_frame_14016FFD0 + 224)) /* [rsp+E0h] */
#define v23 (*(char * (*))(void *)(sr_frame_14016FFD0 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_14016FFD0 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_14016FFD0 + 248)) /* [rsp+F8h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14016FFD0 + 256)) /* [rsp+100h] */

  v8 = ftell_sr(a1);
  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = off_140301820(a1, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  sub_140163E70((__int64)v13, a2, a3, a4);
  sub_14020C4A8((__int64)a1, v8, 0);
  return sub_1401F8B20((unsigned __int64)&v12 ^ v26);
}
#undef v12
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();

//----- (00000001401700F0) ----------------------------------------------------
__int64            sub_1401700F0(__int64 a1, int a2, char *a3, char *a4, unsigned int *a5)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401700F0[272];
#define v6 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 0)) /* [rsp+0h] */
#define v7 (*(_BYTE (*)[16])(void *)(sr_frame_1401700F0 + 32)) /* [rsp+20h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 48)) /* [rsp+30h] */
#define v9 (*(int (*))(void *)(sr_frame_1401700F0 + 80)) /* [rsp+50h] */
#define v10 (*(int (*))(void *)(sr_frame_1401700F0 + 216)) /* [rsp+D8h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 224)) /* [rsp+E0h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 232)) /* [rsp+E8h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 240)) /* [rsp+F0h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 248)) /* [rsp+F8h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 256)) /* [rsp+100h] */

  v13 = a1;
  v11 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v14 = a2 + a1;
  v12 = v14;
  sub_140163E70((__int64)v7, a3, a4, a5);
  return sub_1401F8B20((unsigned __int64)&v6 ^ v15);
}
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15


//----- (0000000140170180) ----------------------------------------------------
__int64            sub_140170180(char *a1)
{
  int v1; // eax
  FILE *v2; // rdi
  int v3; // esi
  int v4; // eax
  char *v5; // rax
  __int64 (           *v11)(); // [rsp+50h] [rbp-B0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170180[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_140170180 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_140170180 + 32)) /* [rsp+20h] */
#define v9 (*(_BYTE (*)[16])(void *)(sr_frame_140170180 + 48)) /* [rsp+30h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_140170180 + 64)) /* [rsp+40h] */
#define v12 (*(FILE * (*))(void *)(sr_frame_140170180 + 88)) /* [rsp+58h] */
#define v13 (*(int (*))(void *)(sr_frame_140170180 + 96)) /* [rsp+60h] */
#define v14 (*(int (*))(void *)(sr_frame_140170180 + 100)) /* [rsp+64h] */
#define v15 (*(char (*))(void *)(sr_frame_140170180 + 104)) /* [rsp+68h] */
#define v16 (*(char (*))(void *)(sr_frame_140170180 + 105)) /* [rsp+69h] */
#define v17 (*(int (*))(void *)(sr_frame_140170180 + 232)) /* [rsp+E8h] */
#define v18 (*(char * (*))(void *)(sr_frame_140170180 + 240)) /* [rsp+F0h] */
#define v19 (*(char * (*))(void *)(sr_frame_140170180 + 248)) /* [rsp+F8h] */
#define v20 (*(char * (*))(void *)(sr_frame_140170180 + 256)) /* [rsp+100h] */
#define v21 (*(char * (*))(void *)(sr_frame_140170180 + 264)) /* [rsp+108h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_140170180 + 272)) /* [rsp+110h] */

  v1 = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  v2 = Stream;
  if ( v1 )
    v2 = nullptr;
  Stream = v2;
  if ( v2 )
  {
    v3 = ftell_sr(v2);
    v20 = &v15;
    v10 = *(_OWORD *)&off_140301820;
    v18 = &v15;
    v11 = off_140301830;
    v12 = v2;
    v14 = 128;
    v13 = 1;
    v17 = 0;
    v4 = off_140301820(v2, &v15, 128);
    v17 += (_DWORD)v18 - (_DWORD)v20;
    if ( v4 )
    {
      v18 = &v15;
      v5 = &v15 + v4;
    }
    else
    {
      v13 = 0;
      v18 = &v15;
      v5 = &v16;
      v15 = 0;
    }
    v19 = v5;
    v21 = v5;
    sub_1401643B0((__int64)v9);
    sub_14020C4A8((__int64)v2, v3, 0);
    sub_14020B9E8((__int64)v2);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return sub_1401F8B20((unsigned __int64)&v7 ^ v22);
}
#undef v7
#undef Stream
#undef v9
#undef v10
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401702F0) ----------------------------------------------------
__int64            sub_1401702F0(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8
  int v4; // eax
  char *v5; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401702F0[272];
#define v7 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_1401702F0 + 32)) /* [rsp+20h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_1401702F0 + 48)) /* [rsp+30h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 64)) /* [rsp+40h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 72)) /* [rsp+48h] */
#define v12 (*(int (*))(void *)(sr_frame_1401702F0 + 80)) /* [rsp+50h] */
#define v13 (*(int (*))(void *)(sr_frame_1401702F0 + 84)) /* [rsp+54h] */
#define v14 (*(char (*))(void *)(sr_frame_1401702F0 + 88)) /* [rsp+58h] */
#define v15 (*(char (*))(void *)(sr_frame_1401702F0 + 89)) /* [rsp+59h] */
#define v16 (*(int (*))(void *)(sr_frame_1401702F0 + 216)) /* [rsp+D8h] */
#define v17 (*(char * (*))(void *)(sr_frame_1401702F0 + 224)) /* [rsp+E0h] */
#define v18 (*(char * (*))(void *)(sr_frame_1401702F0 + 232)) /* [rsp+E8h] */
#define v19 (*(char * (*))(void *)(sr_frame_1401702F0 + 240)) /* [rsp+F0h] */
#define v20 (*(char * (*))(void *)(sr_frame_1401702F0 + 248)) /* [rsp+F8h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 256)) /* [rsp+100h] */

  v2 = *a1;
  v11 = a2;
  v3 = *((_QWORD *)a1 + 2);
  v9 = v2;
  v19 = &v14;
  v10 = v3;
  v17 = &v14;
  v13 = 128;
  v12 = 1;
  v16 = 0;
  v4 = ((__int64 (           *)(__int64, char *, __int64))v2)(a2, &v14, 128);
  v16 += (_DWORD)v17 - (_DWORD)v19;
  if ( v4 )
  {
    v17 = &v14;
    v5 = &v14 + v4;
  }
  else
  {
    v12 = 0;
    v17 = &v14;
    v5 = &v15;
    v14 = 0;
  }
  v18 = v5;
  v20 = v5;
  sub_1401643B0((__int64)v8);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v21);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21


//----- (00000001401703D0) ----------------------------------------------------
__int64            sub_1401703D0(FILE *a1)
{
  int v2; // esi
  int v3; // eax
  char *v4; // rax
  __int64 (           *v9)(); // [rsp+40h] [rbp-C0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401703D0[272];
#define v6 (*(__int64 (*))(void *)(sr_frame_1401703D0 + 0)) /* [rsp+0h] */
#define v7 (*(_BYTE (*)[16])(void *)(sr_frame_1401703D0 + 32)) /* [rsp+20h] */
#define v8 (*(__int128 (*))(void *)(sr_frame_1401703D0 + 48)) /* [rsp+30h] */
#define v10 (*(FILE * (*))(void *)(sr_frame_1401703D0 + 72)) /* [rsp+48h] */
#define v11 (*(int (*))(void *)(sr_frame_1401703D0 + 80)) /* [rsp+50h] */
#define v12 (*(int (*))(void *)(sr_frame_1401703D0 + 84)) /* [rsp+54h] */
#define v13 (*(char (*))(void *)(sr_frame_1401703D0 + 88)) /* [rsp+58h] */
#define v14 (*(char (*))(void *)(sr_frame_1401703D0 + 89)) /* [rsp+59h] */
#define v15 (*(int (*))(void *)(sr_frame_1401703D0 + 216)) /* [rsp+D8h] */
#define v16 (*(char * (*))(void *)(sr_frame_1401703D0 + 224)) /* [rsp+E0h] */
#define v17 (*(char * (*))(void *)(sr_frame_1401703D0 + 232)) /* [rsp+E8h] */
#define v18 (*(char * (*))(void *)(sr_frame_1401703D0 + 240)) /* [rsp+F0h] */
#define v19 (*(char * (*))(void *)(sr_frame_1401703D0 + 248)) /* [rsp+F8h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_1401703D0 + 256)) /* [rsp+100h] */

  v2 = ftell_sr(a1);
  v18 = &v13;
  v8 = *(_OWORD *)&off_140301820;
  v16 = &v13;
  v9 = off_140301830;
  v10 = a1;
  v12 = 128;
  v11 = 1;
  v15 = 0;
  v3 = off_140301820(a1, &v13, 128);
  v15 += (_DWORD)v16 - (_DWORD)v18;
  if ( v3 )
  {
    v16 = &v13;
    v4 = &v13 + v3;
  }
  else
  {
    v11 = 0;
    v16 = &v13;
    v4 = &v14;
    v13 = 0;
  }
  v17 = v4;
  v19 = v4;
  sub_1401643B0((__int64)v7);
  sub_14020C4A8((__int64)a1, v2, 0);
  return sub_1401F8B20((unsigned __int64)&v6 ^ v20);
}
#undef v6
#undef v7
#undef v8
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();

//----- (00000001401704E0) ----------------------------------------------------
__int64            sub_1401704E0(__int64 a1, int a2)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401704E0[272];
#define v3 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 0)) /* [rsp+0h] */
#define v4 (*(_BYTE (*)[16])(void *)(sr_frame_1401704E0 + 32)) /* [rsp+20h] */
#define v5 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 48)) /* [rsp+30h] */
#define v6 (*(int (*))(void *)(sr_frame_1401704E0 + 80)) /* [rsp+50h] */
#define v7 (*(int (*))(void *)(sr_frame_1401704E0 + 216)) /* [rsp+D8h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 224)) /* [rsp+E0h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 232)) /* [rsp+E8h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 240)) /* [rsp+F0h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 248)) /* [rsp+F8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 256)) /* [rsp+100h] */

  v5 = 0;
  v6 = 0;
  v10 = a1;
  v8 = a1;
  v7 = 0;
  v11 = a2 + a1;
  v9 = v11;
  sub_1401643B0((__int64)v4);
  return sub_1401F8B20((unsigned __int64)&v3 ^ v12);
}
#undef v3
#undef v4
#undef v5
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12


//----- (0000000140170550) ----------------------------------------------------
__int64            sub_140170550(char *a1)
{
  int v1; // eax
  FILE *v2; // rdi
  unsigned int v3; // ebx
  FILE *Stream; // [rsp+38h] [rbp+10h] BYREF

  v1 = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  v2 = Stream;
  if ( v1 )
    v2 = nullptr;
  Stream = v2;
  if ( !v2 )
    return 0;
  v3 = sub_1401707E0(v2);
  sub_14020B9E8((__int64)v2);
  return v3;
}


//----- (00000001401705B0) ----------------------------------------------------
__int64            sub_1401705B0(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8
  int v4; // eax
  char *v5; // rdx
  char *v6; // r8
       char *v7; // rbx
  int v8; // eax
  char *v9; // r8
       char *v10; // rbx
  char *v11; // r9
  int v12; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401705B0[272];
#define v14 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 0)) /* [rsp+0h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_1401705B0 + 48)) /* [rsp+30h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 64)) /* [rsp+40h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 72)) /* [rsp+48h] */
#define v18 (*(int (*))(void *)(sr_frame_1401705B0 + 80)) /* [rsp+50h] */
#define v19 (*(unsigned int (*))(void *)(sr_frame_1401705B0 + 84)) /* [rsp+54h] */
#define v20 (*(char (*))(void *)(sr_frame_1401705B0 + 88)) /* [rsp+58h] */
#define v21 (*(_BYTE (*)[127])(void *)(sr_frame_1401705B0 + 89)) /* [rsp+59h] */
#define v22 (*(int (*))(void *)(sr_frame_1401705B0 + 216)) /* [rsp+D8h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401705B0 + 224)) /* [rsp+E0h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401705B0 + 232)) /* [rsp+E8h] */
#define v25 (*(char * (*))(void *)(sr_frame_1401705B0 + 240)) /* [rsp+F0h] */
#define v26 (*(char * (*))(void *)(sr_frame_1401705B0 + 248)) /* [rsp+F8h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 256)) /* [rsp+100h] */

  v2 = *a1;
  v17 = a2;
  v3 = *((_QWORD *)a1 + 2);
  v15 = v2;
  v25 = &v20;
  v16 = v3;
  v23 = &v20;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v4 = ((__int64 (           *)(__int64, char *, __int64))v2)(a2, &v20, 128);
  v5 = &v20;
  v22 += (_DWORD)v23 - (_DWORD)v25;
  v23 = &v20;
  if ( v4 )
  {
    v6 = &v21[v4 - 1];
  }
  else
  {
    v18 = 0;
    v6 = v21;
    v20 = 0;
  }
  v24 = v6;
  v7 = "#?RADIANCE\n";
  v26 = v6;
  while ( 1 )
  {
    if ( v5 >= v6 )
    {
      if ( v18 )
      {
        v8 = ((__int64 (           *)(__int64, char *, _QWORD))v15)(v17, &v20, v19);
        v22 += (_DWORD)v23 - (_DWORD)v25;
        if ( v8 )
        {
          v6 = &v21[v8 - 1];
          v5 = v21;
          LOBYTE(v8) = v20;
          v24 = v6;
          v23 = v21;
        }
        else
        {
          v6 = v21;
          v18 = 0;
          v5 = v21;
          v24 = v21;
          v23 = v21;
          v20 = 0;
        }
      }
      else
      {
        LOBYTE(v8) = 0;
      }
    }
    else
    {
      LOBYTE(v8) = *v5++;
      v23 = v5;
    }
    if ( (unsigned __int8)v8 != *v7 )
      break;
    if ( !*++v7 )
      return sub_1401F8B20((unsigned __int64)&v14 ^ v27);
  }
  v9 = v25;
  v10 = "#?RGBE\n";
  v11 = v26;
  v23 = v25;
  v24 = v26;
  do
  {
    if ( v9 >= v11 )
    {
      if ( v18 )
      {
        v12 = ((__int64 (           *)(__int64, char *, _QWORD))v15)(v17, &v20, v19);
        v22 += (_DWORD)v23 - (_DWORD)v25;
        if ( v12 )
        {
          v11 = &v21[v12 - 1];
          v9 = v21;
          LOBYTE(v12) = v20;
          v24 = v11;
          v23 = v21;
        }
        else
        {
          v11 = v21;
          v18 = 0;
          v9 = v21;
          v24 = v21;
          v23 = v21;
          v20 = 0;
        }
      }
      else
      {
        LOBYTE(v12) = 0;
      }
    }
    else
    {
      LOBYTE(v12) = *v9++;
      v23 = v9;
    }
    if ( (unsigned __int8)v12 != *v10 )
      break;
    ++v10;
  }
  while ( *v10 );
  return sub_1401F8B20((unsigned __int64)&v14 ^ v27);
}
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27


//----- (00000001401707E0) ----------------------------------------------------
__int64            sub_1401707E0(FILE *a1)
{
  int v2; // r14d
  int v3; // eax
  char *v4; // rdx
  char *v5; // r8
       char *v6; // rbx
  int v7; // eax
  char *v8; // r8
       char *v9; // rbx
  char *v10; // r9
  int v11; // eax
  __int64 (           *v15)(); // [rsp+40h] [rbp-C0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401707E0[272];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401707E0 + 0)) /* [rsp+0h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_1401707E0 + 48)) /* [rsp+30h] */
#define v16 (*(FILE * (*))(void *)(sr_frame_1401707E0 + 72)) /* [rsp+48h] */
#define v17 (*(int (*))(void *)(sr_frame_1401707E0 + 80)) /* [rsp+50h] */
#define v18 (*(unsigned int (*))(void *)(sr_frame_1401707E0 + 84)) /* [rsp+54h] */
#define v19 (*(char (*))(void *)(sr_frame_1401707E0 + 88)) /* [rsp+58h] */
#define v20 (*(_BYTE (*)[127])(void *)(sr_frame_1401707E0 + 89)) /* [rsp+59h] */
#define v21 (*(int (*))(void *)(sr_frame_1401707E0 + 216)) /* [rsp+D8h] */
#define v22 (*(char * (*))(void *)(sr_frame_1401707E0 + 224)) /* [rsp+E0h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401707E0 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401707E0 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_1401707E0 + 248)) /* [rsp+F8h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1401707E0 + 256)) /* [rsp+100h] */

  v2 = ftell_sr(a1);
  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v3 = off_140301820(a1, &v19, 128);
  v4 = &v19;
  v21 += (_DWORD)v22 - (_DWORD)v24;
  v22 = &v19;
  if ( v3 )
  {
    v5 = &v20[v3 - 1];
  }
  else
  {
    v17 = 0;
    v5 = v20;
    v19 = 0;
  }
  v23 = v5;
  v6 = "#?RADIANCE\n";
  v25 = v5;
  while ( 1 )
  {
    if ( v4 >= v5 )
    {
      if ( v17 )
      {
        v7 = ((__int64 (           *)(FILE *, char *, _QWORD))v14)(v16, &v19, v18);
        v21 += (_DWORD)v22 - (_DWORD)v24;
        if ( v7 )
        {
          v5 = &v20[v7 - 1];
          v4 = v20;
          LOBYTE(v7) = v19;
          v23 = v5;
          v22 = v20;
        }
        else
        {
          v5 = v20;
          v17 = 0;
          v4 = v20;
          v23 = v20;
          v22 = v20;
          v19 = 0;
        }
      }
      else
      {
        LOBYTE(v7) = 0;
      }
    }
    else
    {
      LOBYTE(v7) = *v4++;
      v22 = v4;
    }
    if ( (unsigned __int8)v7 != *v6 )
      break;
    if ( !*++v6 )
    {
      v22 = v24;
      v23 = v25;
      goto LABEL_26;
    }
  }
  v8 = v24;
  v9 = "#?RGBE\n";
  v10 = v25;
  v22 = v24;
  v23 = v25;
  do
  {
    if ( v8 >= v10 )
    {
      if ( v17 )
      {
        v11 = ((__int64 (           *)(FILE *, char *, _QWORD))v14)(v16, &v19, v18);
        v21 += (_DWORD)v22 - (_DWORD)v24;
        if ( v11 )
        {
          v10 = &v20[v11 - 1];
          v8 = v20;
          LOBYTE(v11) = v19;
          v23 = v10;
          v22 = v20;
        }
        else
        {
          v10 = v20;
          v17 = 0;
          v8 = v20;
          v23 = v20;
          v22 = v20;
          v19 = 0;
        }
      }
      else
      {
        LOBYTE(v11) = 0;
      }
    }
    else
    {
      LOBYTE(v11) = *v8++;
      v22 = v8;
    }
    if ( (unsigned __int8)v11 != *v9 )
      break;
    ++v9;
  }
  while ( *v9 );
  v22 = v24;
  v23 = v25;
LABEL_26:
  sub_14020C4A8((__int64)a1, v2, 0);
  return sub_1401F8B20((unsigned __int64)&v13 ^ v26);
}
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();

//----- (0000000140170A50) ----------------------------------------------------
__int64            sub_140170A50(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // rdx
       char *v3; // rbx
  unsigned __int8 *v4; // r9
  unsigned __int8 v5; // al
  unsigned __int8 *v6; // rdx
       char *v7; // rbx
  unsigned __int8 v8; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170A50[272];
#define v10 (*(_QWORD (*)[9])(void *)(sr_frame_140170A50 + 0)) /* [rsp+0h] */
#define v11 (*(int (*))(void *)(sr_frame_140170A50 + 80)) /* [rsp+50h] */
#define v12 (*(int (*))(void *)(sr_frame_140170A50 + 216)) /* [rsp+D8h] */
#define v13 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 224)) /* [rsp+E0h] */
#define v14 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 232)) /* [rsp+E8h] */
#define v15 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 240)) /* [rsp+F0h] */
#define v16 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 248)) /* [rsp+F8h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140170A50 + 256)) /* [rsp+100h] */

  v11 = 0;
  v2 = &a1[a2];
  v10[6] = 0;
  v16 = v2;
  v3 = "#?RADIANCE\n";
  v14 = v2;
  v4 = a1;
  v12 = 0;
  v15 = a1;
  v13 = a1;
  while ( 1 )
  {
    if ( v4 >= v2 )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v4++;
      v13 = v4;
    }
    if ( v5 != *v3 )
      break;
    if ( !*++v3 )
      return sub_1401F8B20((unsigned __int64)v10 ^ v17);
  }
  v6 = v15;
  v7 = "#?RGBE\n";
  v13 = v15;
  v14 = v16;
  do
  {
    if ( v6 >= v16 )
    {
      v8 = 0;
    }
    else
    {
      v8 = *v6++;
      v13 = v6;
    }
    if ( v8 != *v7 )
      break;
    ++v7;
  }
  while ( *v7 );
  return sub_1401F8B20((unsigned __int64)v10 ^ v17);
}
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17

//----- (0000000140170C30) ----------------------------------------------------
__int64 sub_140170C30(char *a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 file;
  __int64 decoded;
  sr_image_reader reader;
  int opened = sub_14020B8E4(&file, a1, "rb");
  if (opened) file=0;
  if (!file) {
    *(_QWORD *)(sr_client_static_tls()+16LL) =
      (uint64)(uintptr_t)("can't fopen");
    return 0;
  }
  reader.read=(int (*)(void *,char *,int))sub_1400012A0;
  reader.skip=(void (*)(void *,int))sub_1400012C0;
  reader.eof=(int (*)(void *))sub_140001300;
  reader.user=(void *)(uintptr_t)file;
  reader.capacity=128;
  reader.active=1;
  reader.consumed=0;
  reader.current=reader.original=reader.buffer;
  int count=reader.read(reader.user,reader.buffer,128);
  if (!count) {
    reader.active=0;
    reader.buffer[0]=0;
    count=1;
  }
  reader.end=reader.original_end=reader.buffer+count;
  decoded=(__int64)(uintptr_t)sub_140166160((__int64)(uintptr_t)&reader,a2,a3,a4,a5);
  if (decoded)
    sub_14020C4A8(file,(unsigned int)((uintptr_t)reader.current-(uintptr_t)reader.end),1u);
  sub_14020B9E8(file);
  return decoded;
}

//----- (0000000140170DC0) ----------------------------------------------------
__int64            sub_140170DC0(char *a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  char *v11; // rax
  __int64 (           *v17)(); // [rsp+60h] [rbp-A0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170DC0[304];
#define v13 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 0)) /* [rsp+0h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 48)) /* [rsp+30h] */
#define v15 (*(_BYTE (*)[16])(void *)(sr_frame_140170DC0 + 64)) /* [rsp+40h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140170DC0 + 80)) /* [rsp+50h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 104)) /* [rsp+68h] */
#define v19 (*(int (*))(void *)(sr_frame_140170DC0 + 112)) /* [rsp+70h] */
#define v20 (*(int (*))(void *)(sr_frame_140170DC0 + 116)) /* [rsp+74h] */
#define v21 (*(char (*))(void *)(sr_frame_140170DC0 + 120)) /* [rsp+78h] */
#define v22 (*(char (*))(void *)(sr_frame_140170DC0 + 121)) /* [rsp+79h] */
#define v23 (*(int (*))(void *)(sr_frame_140170DC0 + 248)) /* [rsp+F8h] */
#define v24 (*(char * (*))(void *)(sr_frame_140170DC0 + 256)) /* [rsp+100h] */
#define v25 (*(char * (*))(void *)(sr_frame_140170DC0 + 264)) /* [rsp+108h] */
#define v26 (*(char * (*))(void *)(sr_frame_140170DC0 + 272)) /* [rsp+110h] */
#define v27 (*(char * (*))(void *)(sr_frame_140170DC0 + 280)) /* [rsp+118h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 288)) /* [rsp+120h] */

  v8 = sub_14020B8E4(&v14, a1, "rb");
  v9 = v14;
  if ( v8 )
    v9 = 0;
  v14 = v9;
  if ( v9 )
  {
    v26 = &v21;
    v16 = *(_OWORD *)&off_140301820;
    v24 = &v21;
    v17 = off_140301830;
    v18 = v9;
    v20 = 128;
    v19 = 1;
    v23 = 0;
    v10 = off_140301820(v9, &v21, 128);
    v23 += (_DWORD)v24 - (_DWORD)v26;
    if ( v10 )
    {
      v24 = &v21;
      v11 = &v21 + v10;
    }
    else
    {
      v19 = 0;
      v24 = &v21;
      v11 = &v22;
      v21 = 0;
    }
    v25 = v11;
    v27 = v11;
    if ( sub_140165FD0((__int64)v15, a2, a3, a4, a5) )
      sub_14020C4A8(v9, (_DWORD)v24 - (_DWORD)v25, 1u);
    sub_14020B9E8(v9);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return sub_1401F8B20((unsigned __int64)&v13 ^ v28);
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140170F50) ----------------------------------------------------
__int64            sub_140170F50(__int128 *a1, __int64 a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v10; // eax
  char *v11; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170F50[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_140170F50 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_140170F50 + 48)) /* [rsp+30h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140170F50 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140170F50 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140170F50 + 88)) /* [rsp+58h] */
#define v18 (*(int (*))(void *)(sr_frame_140170F50 + 96)) /* [rsp+60h] */
#define v19 (*(int (*))(void *)(sr_frame_140170F50 + 100)) /* [rsp+64h] */
#define v20 (*(char (*))(void *)(sr_frame_140170F50 + 104)) /* [rsp+68h] */
#define v21 (*(char (*))(void *)(sr_frame_140170F50 + 105)) /* [rsp+69h] */
#define v22 (*(int (*))(void *)(sr_frame_140170F50 + 232)) /* [rsp+E8h] */
#define v23 (*(char * (*))(void *)(sr_frame_140170F50 + 240)) /* [rsp+F0h] */
#define v24 (*(char * (*))(void *)(sr_frame_140170F50 + 248)) /* [rsp+F8h] */
#define v25 (*(char * (*))(void *)(sr_frame_140170F50 + 256)) /* [rsp+100h] */
#define v26 (*(char * (*))(void *)(sr_frame_140170F50 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140170F50 + 272)) /* [rsp+110h] */

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 2);
  v25 = &v20;
  v17 = a2;
  v23 = &v20;
  v15 = v6;
  v16 = v7;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v10 = ((__int64 (           *)(__int64, char *, __int64))v6)(a2, &v20, 128);
  v22 += (_DWORD)v23 - (_DWORD)v25;
  if ( v10 )
  {
    v23 = &v20;
    v11 = &v20 + v10;
  }
  else
  {
    v18 = 0;
    v23 = &v20;
    v11 = &v21;
    v20 = 0;
  }
  v24 = v11;
  v26 = v11;
  sub_140165FD0((__int64)v14, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v13 ^ v27);
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27


//----- (0000000140171060) ----------------------------------------------------
__int64            sub_140171060(__int64 a1, int a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171060[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_140171060 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_140171060 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_140171060 + 64)) /* [rsp+40h] */
#define v10 (*(int (*))(void *)(sr_frame_140171060 + 96)) /* [rsp+60h] */
#define v11 (*(int (*))(void *)(sr_frame_140171060 + 232)) /* [rsp+E8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171060 + 240)) /* [rsp+F0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171060 + 248)) /* [rsp+F8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171060 + 256)) /* [rsp+100h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140171060 + 264)) /* [rsp+108h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171060 + 272)) /* [rsp+110h] */

  v14 = a1;
  v12 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = a2 + a1;
  v13 = v15;
  sub_140165FD0((__int64)v8, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16


//----- (0000000140171100) ----------------------------------------------------
__int64            sub_140171100(__int128 *a1, __int64 a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v10; // eax
  char *v11; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171100[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_140171100 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_140171100 + 48)) /* [rsp+30h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171100 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171100 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140171100 + 88)) /* [rsp+58h] */
#define v18 (*(int (*))(void *)(sr_frame_140171100 + 96)) /* [rsp+60h] */
#define v19 (*(int (*))(void *)(sr_frame_140171100 + 100)) /* [rsp+64h] */
#define v20 (*(char (*))(void *)(sr_frame_140171100 + 104)) /* [rsp+68h] */
#define v21 (*(char (*))(void *)(sr_frame_140171100 + 105)) /* [rsp+69h] */
#define v22 (*(int (*))(void *)(sr_frame_140171100 + 232)) /* [rsp+E8h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171100 + 240)) /* [rsp+F0h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171100 + 248)) /* [rsp+F8h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171100 + 256)) /* [rsp+100h] */
#define v26 (*(char * (*))(void *)(sr_frame_140171100 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140171100 + 272)) /* [rsp+110h] */

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 2);
  v25 = &v20;
  v17 = a2;
  v23 = &v20;
  v15 = v6;
  v16 = v7;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v10 = ((__int64 (           *)(__int64, char *, __int64))v6)(a2, &v20, 128);
  v22 += (_DWORD)v23 - (_DWORD)v25;
  if ( v10 )
  {
    v23 = &v20;
    v11 = &v20 + v10;
  }
  else
  {
    v18 = 0;
    v23 = &v20;
    v11 = &v21;
    v20 = 0;
  }
  v24 = v11;
  v26 = v11;
  sub_140166160((__int64)v14, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v13 ^ v27);
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27


//----- (0000000140171210) ----------------------------------------------------
__int64            sub_140171210(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int v9; // eax
  char *v10; // rax
  __int64 (           *v15)(); // [rsp+50h] [rbp-B0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171210[288];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171210 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_140171210 + 48)) /* [rsp+30h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_140171210 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171210 + 88)) /* [rsp+58h] */
#define v17 (*(int (*))(void *)(sr_frame_140171210 + 96)) /* [rsp+60h] */
#define v18 (*(int (*))(void *)(sr_frame_140171210 + 100)) /* [rsp+64h] */
#define v19 (*(char (*))(void *)(sr_frame_140171210 + 104)) /* [rsp+68h] */
#define v20 (*(char (*))(void *)(sr_frame_140171210 + 105)) /* [rsp+69h] */
#define v21 (*(int (*))(void *)(sr_frame_140171210 + 232)) /* [rsp+E8h] */
#define v22 (*(char * (*))(void *)(sr_frame_140171210 + 240)) /* [rsp+F0h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171210 + 248)) /* [rsp+F8h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171210 + 256)) /* [rsp+100h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171210 + 264)) /* [rsp+108h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140171210 + 272)) /* [rsp+110h] */

  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = off_140301820(a1, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  if ( sub_140166160((__int64)v13, a2, a3, a4, a5) )
    sub_14020C4A8(a1, (_DWORD)v22 - (_DWORD)v23, 1u);
  return sub_1401F8B20((unsigned __int64)&v12 ^ v26);
}
#undef v12
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();

//----- (0000000140171340) ----------------------------------------------------
__int64            sub_140171340(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int v9; // eax
  char *v10; // rax
  __int64 (           *v15)(); // [rsp+50h] [rbp-B0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171340[288];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171340 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_140171340 + 48)) /* [rsp+30h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_140171340 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171340 + 88)) /* [rsp+58h] */
#define v17 (*(int (*))(void *)(sr_frame_140171340 + 96)) /* [rsp+60h] */
#define v18 (*(int (*))(void *)(sr_frame_140171340 + 100)) /* [rsp+64h] */
#define v19 (*(char (*))(void *)(sr_frame_140171340 + 104)) /* [rsp+68h] */
#define v20 (*(char (*))(void *)(sr_frame_140171340 + 105)) /* [rsp+69h] */
#define v21 (*(int (*))(void *)(sr_frame_140171340 + 232)) /* [rsp+E8h] */
#define v22 (*(char * (*))(void *)(sr_frame_140171340 + 240)) /* [rsp+F0h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171340 + 248)) /* [rsp+F8h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171340 + 256)) /* [rsp+100h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171340 + 264)) /* [rsp+108h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140171340 + 272)) /* [rsp+110h] */

  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = off_140301820(a1, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  if ( sub_140165FD0((__int64)v13, a2, a3, a4, a5) )
    sub_14020C4A8(a1, (_DWORD)v22 - (_DWORD)v23, 1u);
  return sub_1401F8B20((unsigned __int64)&v12 ^ v26);
}
#undef v12
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();

//----- (0000000140171470) ----------------------------------------------------
__int64            sub_140171470(__int64 a1, int a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171470[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_140171470 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_140171470 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_140171470 + 64)) /* [rsp+40h] */
#define v10 (*(int (*))(void *)(sr_frame_140171470 + 96)) /* [rsp+60h] */
#define v11 (*(int (*))(void *)(sr_frame_140171470 + 232)) /* [rsp+E8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171470 + 240)) /* [rsp+F0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171470 + 248)) /* [rsp+F8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171470 + 256)) /* [rsp+100h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140171470 + 264)) /* [rsp+108h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171470 + 272)) /* [rsp+110h] */

  v14 = a1;
  v12 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = a2 + a1;
  v13 = v15;
  sub_140166160((__int64)v8, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16


//----- (0000000140171510) ----------------------------------------------------
__int64            sub_140171510(
        __int64 a1,
        int a2,
        __int64 *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        int *a7,
        unsigned int a8)
{
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // r14d
  int v13; // eax
  int v14; // esi
  __m128i *v15; // rbx
  int v16; // ebp
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r12
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171510[304];
#define v21 (*(_QWORD (*)[6])(void *)(sr_frame_140171510 + 0)) /* [rsp+0h] */
#define v22 (*(unsigned int (*))(void *)(sr_frame_140171510 + 48)) /* [rsp+30h] */
#define v23 (*(__m128i (*))(void *)(sr_frame_140171510 + 64)) /* [rsp+40h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140171510 + 80)) /* [rsp+50h] */
#define v25 (*(int (*))(void *)(sr_frame_140171510 + 112)) /* [rsp+70h] */
#define v26 (*(int (*))(void *)(sr_frame_140171510 + 248)) /* [rsp+F8h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140171510 + 256)) /* [rsp+100h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_140171510 + 264)) /* [rsp+108h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_140171510 + 272)) /* [rsp+110h] */
#define v30 (*(__int64 (*))(void *)(sr_frame_140171510 + 280)) /* [rsp+118h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_140171510 + 288)) /* [rsp+120h] */

  v24 = 0;
  v25 = 0;
  v22 = a8;
  v29 = a1;
  v27 = a1;
  v26 = 0;
  v21[5] = (uint64)(uintptr_t)(a7);
  v30 = a2 + a1;
  v28 = v30;
  v21[4] = (uint64)(uintptr_t)(a6);
  v9 = sub_1401663E0(&v23, a3, a4, a5);
  v10 = sr_client_static_tls();
  if ( *(_DWORD *)(v10 + 8) )
    v11 = *(_DWORD *)(v10 + 12);
  else
    v11 = dword_140404A6C[18215120];
  if ( v11 )
  {
    v12 = *a4;
    v13 = *a4;
    v14 = *a7;
    v15 = (__m128i *)v9;
    v16 = *a5;
    v17 = *a7 * *a5 * v13;
    if ( (int)*a6 > 0 )
    {
      v18 = *a6;
      v19 = v17;
      do
      {
        sub_14016F470(v15, v12, v16, v14);
        v15 = (__m128i *)((char *)v15 + v19);
        --v18;
      }
      while ( v18 );
    }
  }
  return sub_1401F8B20((unsigned __int64)v21 ^ v31);
}
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DAC: using guessed type unsigned int;

//----- (0000000140171670) ----------------------------------------------------
__int64            sub_140171670(char *a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 v8; // rdi
  int v9; // eax
  char *v10; // rax
  __int64 (           *v16)(); // [rsp+60h] [rbp-A0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171670[304];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171670 + 0)) /* [rsp+0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171670 + 48)) /* [rsp+30h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_140171670 + 64)) /* [rsp+40h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171670 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140171670 + 104)) /* [rsp+68h] */
#define v18 (*(int (*))(void *)(sr_frame_140171670 + 112)) /* [rsp+70h] */
#define v19 (*(int (*))(void *)(sr_frame_140171670 + 116)) /* [rsp+74h] */
#define v20 (*(char (*))(void *)(sr_frame_140171670 + 120)) /* [rsp+78h] */
#define v21 (*(char (*))(void *)(sr_frame_140171670 + 121)) /* [rsp+79h] */
#define v22 (*(int (*))(void *)(sr_frame_140171670 + 248)) /* [rsp+F8h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171670 + 256)) /* [rsp+100h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171670 + 264)) /* [rsp+108h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171670 + 272)) /* [rsp+110h] */
#define v26 (*(char * (*))(void *)(sr_frame_140171670 + 280)) /* [rsp+118h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140171670 + 288)) /* [rsp+120h] */

  if ( (unsigned int)sub_14020B8E4(&v13, a1, "rb") || (v8 = v13) == 0 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  else
  {
    v22 = 0;
    v25 = &v20;
    v15 = *(_OWORD *)&off_140301820;
    v23 = &v20;
    v16 = off_140301830;
    v17 = v13;
    v19 = 128;
    v18 = 1;
    v9 = off_140301820(v13, &v20, 128);
    v22 += (_DWORD)v23 - (_DWORD)v25;
    if ( v9 )
    {
      v23 = &v20;
      v10 = &v20 + v9;
    }
    else
    {
      v18 = 0;
      v23 = &v20;
      v10 = &v21;
      v20 = 0;
    }
    v24 = v10;
    v26 = v10;
    sub_140166D20((__int64)v14, a2, a3, a4, a5);
    sub_14020B9E8(v8);
  }
  return sub_1401F8B20((unsigned __int64)&v12 ^ v27);
}
#undef v12
#undef v13
#undef v14
#undef v15
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401717D0) ----------------------------------------------------
__int64            sub_1401717D0(__int128 *a1, __int64 a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v10; // eax
  char *v11; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401717D0[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_1401717D0 + 48)) /* [rsp+30h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_1401717D0 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 88)) /* [rsp+58h] */
#define v18 (*(int (*))(void *)(sr_frame_1401717D0 + 96)) /* [rsp+60h] */
#define v19 (*(int (*))(void *)(sr_frame_1401717D0 + 100)) /* [rsp+64h] */
#define v20 (*(char (*))(void *)(sr_frame_1401717D0 + 104)) /* [rsp+68h] */
#define v21 (*(char (*))(void *)(sr_frame_1401717D0 + 105)) /* [rsp+69h] */
#define v22 (*(int (*))(void *)(sr_frame_1401717D0 + 232)) /* [rsp+E8h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401717D0 + 240)) /* [rsp+F0h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401717D0 + 248)) /* [rsp+F8h] */
#define v25 (*(char * (*))(void *)(sr_frame_1401717D0 + 256)) /* [rsp+100h] */
#define v26 (*(char * (*))(void *)(sr_frame_1401717D0 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 272)) /* [rsp+110h] */

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 2);
  v25 = &v20;
  v17 = a2;
  v23 = &v20;
  v15 = v6;
  v16 = v7;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v10 = ((__int64 (           *)(__int64, char *, __int64))v6)(a2, &v20, 128);
  v22 += (_DWORD)v23 - (_DWORD)v25;
  if ( v10 )
  {
    v23 = &v20;
    v11 = &v20 + v10;
  }
  else
  {
    v18 = 0;
    v23 = &v20;
    v11 = &v21;
    v20 = 0;
  }
  v24 = v11;
  v26 = v11;
  sub_140166D20((__int64)v14, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v13 ^ v27);
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27


//----- (00000001401718E0) ----------------------------------------------------
__int64            sub_1401718E0(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int v8; // eax
  char *v9; // rax
  __int64 (           *v14)(); // [rsp+50h] [rbp-B0h]
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401718E0[288];
#define v11 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 0)) /* [rsp+0h] */
#define v12 (*(_BYTE (*)[16])(void *)(sr_frame_1401718E0 + 48)) /* [rsp+30h] */
#define v13 (*(__int128 (*))(void *)(sr_frame_1401718E0 + 64)) /* [rsp+40h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 88)) /* [rsp+58h] */
#define v16 (*(int (*))(void *)(sr_frame_1401718E0 + 96)) /* [rsp+60h] */
#define v17 (*(int (*))(void *)(sr_frame_1401718E0 + 100)) /* [rsp+64h] */
#define v18 (*(char (*))(void *)(sr_frame_1401718E0 + 104)) /* [rsp+68h] */
#define v19 (*(char (*))(void *)(sr_frame_1401718E0 + 105)) /* [rsp+69h] */
#define v20 (*(int (*))(void *)(sr_frame_1401718E0 + 232)) /* [rsp+E8h] */
#define v21 (*(char * (*))(void *)(sr_frame_1401718E0 + 240)) /* [rsp+F0h] */
#define v22 (*(char * (*))(void *)(sr_frame_1401718E0 + 248)) /* [rsp+F8h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401718E0 + 256)) /* [rsp+100h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401718E0 + 264)) /* [rsp+108h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 272)) /* [rsp+110h] */

  v23 = &v18;
  v13 = *(_OWORD *)&off_140301820;
  v21 = &v18;
  v14 = off_140301830;
  v15 = a1;
  v17 = 128;
  v16 = 1;
  v20 = 0;
  v8 = off_140301820(a1, &v18, 128);
  v20 += (_DWORD)v21 - (_DWORD)v23;
  if ( v8 )
  {
    v21 = &v18;
    v9 = &v18 + v8;
  }
  else
  {
    v16 = 0;
    v21 = &v18;
    v9 = &v19;
    v18 = 0;
  }
  v22 = v9;
  v24 = v9;
  sub_140166D20((__int64)v12, a2, a3, a4, a5);
  return sub_1401F8B20((unsigned __int64)&v11 ^ v25);
}
#undef v11
#undef v12
#undef v13
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

// 140301820: using guessed type __int64 (__fastcall *off_140301820)(_QWORD, _QWORD, _QWORD);
// 140301830: using guessed type __int64 (__fastcall *off_140301830)();

//----- (00000001401719E0) ----------------------------------------------------
__int64            sub_1401719E0(__int64 a1, int a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401719E0[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_1401719E0 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 64)) /* [rsp+40h] */
#define v10 (*(int (*))(void *)(sr_frame_1401719E0 + 96)) /* [rsp+60h] */
#define v11 (*(int (*))(void *)(sr_frame_1401719E0 + 232)) /* [rsp+E8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 240)) /* [rsp+F0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 248)) /* [rsp+F8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 256)) /* [rsp+100h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 264)) /* [rsp+108h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 272)) /* [rsp+110h] */

  v14 = a1;
  v12 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = a2 + a1;
  v13 = v15;
  sub_140166D20((__int64)v8, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16


//----- (0000000140171AD0) ----------------------------------------------------
__int64            sub_140171AD0(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 (           *v13)(__int64, __int64, int); // [rsp+40h] [rbp-88h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171AD0[176];
#define v11 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 0)) /* [rsp+0h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 48)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 72)) /* [rsp+48h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 80)) /* [rsp+50h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 96)) /* [rsp+60h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 112)) /* [rsp+70h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 128)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 144)) /* [rsp+90h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 160)) /* [rsp+A0h] */

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = sub_14020B8E4(&v12, a1, "wb");
  v9 = v12;
  v13 = sub_14016E2F0;
  if ( v8 )
    v9 = 0;
  v14 = v9;
  if ( v9 )
  {
    sub_140171BB0((__int64)&v13, a2, a3, a4, a5);
    sub_14020B9E8(v14);
  }
  return sub_1401F8B20((unsigned __int64)&v11 ^ v20);
}
#undef v11
#undef v12
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20


//----- (0000000140171BB0) ----------------------------------------------------
__int64            sub_140171BB0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171BB0[96];
#define v6 (*(int (*))(void *)(sr_frame_140171BB0 + 0)) /* [rsp+58h] */
#define v7 (*(int (*))(void *)(sr_frame_140171BB0 + 8)) /* [rsp+60h] */
#define v8 (*(int (*))(void *)(sr_frame_140171BB0 + 16)) /* [rsp+68h] */
#define v9 (*(int (*))(void *)(sr_frame_140171BB0 + 40)) /* [rsp+80h] */
#define v10 (*(int (*))(void *)(sr_frame_140171BB0 + 48)) /* [rsp+88h] */
#define v13 (*(int (*))(void *)(sr_frame_140171BB0 + 72)) /* [rsp+A0h] */
#define v14 (*(int (*))(void *)(sr_frame_140171BB0 + 80)) /* [rsp+A8h] */

  v14 = 24;
  v13 = 1;
  v10 = 40;
  v9 = 54;
  v8 = a3 * (a2 + (a2 & 3) + 2 * a2) + 54;
  v7 = 77;
  v6 = 66;
  return sub_140176DF0(
           a1,
           -1,
           -1,
           a2,
           a3,
           a4,
           1,
           a5,
           0,
           a2 & 3,
           "11 4 22 44 44 22 444444",
           v6,
           v7,
           v8,
           0,
           0,
           v9,
           v10,
           a2,
           a3,
           v13,
           v14,
           0,
           0,
           0,
           0,
           0,
           0);
}
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v13
#undef v14


//----- (0000000140171C80) ----------------------------------------------------
__int64            sub_140171C80(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171C80[160];
#define v7 (*(__int64 (*))(void *)(sr_frame_140171C80 + 0)) /* [rsp+0h] */
#define v8 (*(_QWORD (*)[2])(void *)(sr_frame_140171C80 + 48)) /* [rsp+30h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_140171C80 + 64)) /* [rsp+40h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_140171C80 + 80)) /* [rsp+50h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_140171C80 + 96)) /* [rsp+60h] */
#define v12 (*(__int128 (*))(void *)(sr_frame_140171C80 + 112)) /* [rsp+70h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171C80 + 128)) /* [rsp+80h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171C80 + 144)) /* [rsp+90h] */

  v8[0] = a1;
  v8[1] = a2;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  sub_140171BB0((__int64)v8, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v14);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14


//----- (0000000140171D10) ----------------------------------------------------
__int64            sub_140171D10(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int64 (           *v13)(__int64, __int64, int); // [rsp+40h] [rbp-68h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171D10[112];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171D10 + 0)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171D10 + 24)) /* [rsp+48h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171D10 + 32)) /* [rsp+50h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140171D10 + 48)) /* [rsp+60h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_140171D10 + 64)) /* [rsp+70h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140171D10 + 80)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140171D10 + 96)) /* [rsp+90h] */

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = sub_14020B8E4(&v12, a1, "wb");
  v9 = v12;
  v13 = sub_14016E2F0;
  if ( v8 )
    v9 = 0;
  v14 = v9;
  if ( !v9 )
    return 0;
  v10 = sub_140171DD0((__int64)&v13, a2, a3, a4, a5);
  sub_14020B9E8(v14);
  return v10;
}
#undef v12
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19


//----- (0000000140171DD0) ----------------------------------------------------
__int64            sub_140171DD0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  _BYTE *v9; // r12
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171DD0[272];
#define v15 (*(__int64 (*))(void *)(sr_frame_140171DD0 + 0)) /* [rsp+0h] */
#define v16 (*(char (*)[80])(void *)(sr_frame_140171DD0 + 48)) /* [rsp+30h] */
#define v17 (*(_DWORD (*)[24])(void *)(sr_frame_140171DD0 + 128)) /* [rsp+80h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_140171DD0 + 256)) /* [rsp+100h] */

  if ( a3 > 0 && a2 > 0 && a5 )
  {
    v9 = (_BYTE *)sr_path_malloc(4 * a2);
    strcpy(v16, "#?RADIANCE\n# Written by stb_image_write.h\nFORMAT=32-bit_rle_rgbe\n");
    (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v16, 65);
    v10 = sub_140158C70(v17, 128, (__int64)"EXPOSURE=          1.0000000000000\n\n-Y %d +X %d\n", a3, a2);
    (*(void (           **)(_QWORD, _DWORD *, _QWORD))a1)(*(_QWORD *)(a1 + 8), v17, v10);
    v11 = 0;
    v12 = a3 - 1;
    do
    {
      v13 = v11;
      if ( dword_140404A6C[18215637] )
        v13 = v12;
      sub_1401772C0(a1, a2, a4, v9, (float *)(a5 + 4LL * a2 * a4 * v13));
      ++v11;
      --v12;
    }
    while ( v11 < a3 );
    free(v9);
  }
  return sub_1401F8B20((unsigned __int64)&v15 ^ v18);
}
#undef v15
#undef v16
#undef v17
#undef v18

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140171F50) ----------------------------------------------------
__int64            sub_140171F50(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171F50[96];
#define v7 (*(_QWORD (*)[2])(void *)(sr_frame_140171F50 + 0)) /* [rsp+30h] */
#define v8 (*(__int128 (*))(void *)(sr_frame_140171F50 + 16)) /* [rsp+40h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_140171F50 + 32)) /* [rsp+50h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_140171F50 + 48)) /* [rsp+60h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_140171F50 + 64)) /* [rsp+70h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171F50 + 80)) /* [rsp+80h] */

  v7[0] = a1;
  v7[1] = a2;
  v12 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  return sub_140171DD0((__int64)v7, a3, a4, a5, a6);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12


//----- (0000000140171FC0) ----------------------------------------------------
__int64            sub_140171FC0(char *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned __int64 (           *v14)(__int64, __int64, int); // [rsp+40h] [rbp-68h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171FC0[112];
#define v13 (*(__int64 (*))(void *)(sr_frame_140171FC0 + 0)) /* [rsp+30h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140171FC0 + 24)) /* [rsp+48h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 32)) /* [rsp+50h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 48)) /* [rsp+60h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 64)) /* [rsp+70h] */
#define v19 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 80)) /* [rsp+80h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140171FC0 + 96)) /* [rsp+90h] */

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v9 = sub_14020B8E4(&v13, a1, "wb");
  v10 = v13;
  v14 = sub_14016E2F0;
  if ( v9 )
    v10 = 0;
  v15 = v10;
  if ( !v10 )
    return 0;
  v11 = sub_140172080((__int64)&v14, a2, a3, a4, a5, a6);
  sub_14020B9E8(v15);
  return v11;
}
#undef v13
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20


//----- (0000000140172080) ----------------------------------------------------
__int64            sub_140172080(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int16 v7; // r11
  int v10; // r12d
  int v11; // r9d
  int v12; // ecx
  __int64 i; // r8
  int v14; // edx
  __int64 v15; // r10
  int v16; // ecx
  int v17; // edx
  float *v18; // r8
  __int64 v19; // rdx
  float v20; // xmm2_4
  __int64 v21; // rcx
  unsigned int v22; // eax
  float v23; // xmm1_4
  float v24; // xmm0_4
  __m128i v25; // xmm1
  unsigned int v26; // eax
  __int64 v27; // rcx
  float v28; // xmm0_4
  __m128i v29; // xmm1
  unsigned int v30; // eax
  float v31; // xmm0_4
  __m128i v32; // xmm1
  unsigned int v33; // eax
  __int64 v34; // rcx
  float v35; // xmm0_4
  __m128i v36; // xmm1
  unsigned int v37; // eax
  float v38; // xmm0_4
  __m128i v39; // xmm1
  unsigned int v40; // eax
  __int64 v41; // rcx
  float v42; // xmm0_4
  __m128i v43; // xmm1
  unsigned int v44; // eax
  float v45; // xmm0_4
  __m128i v46; // xmm1
  unsigned int v47; // eax
  __int64 v48; // rcx
  float v49; // xmm0_4
  __m128i v50; // xmm1
  int v51; // eax
  float v52; // xmm0_4
  unsigned int v53; // eax
  __int64 v54; // rcx
  float v55; // xmm0_4
  __m128i v56; // xmm1
  unsigned int v57; // eax
  float v58; // xmm0_4
  __m128i v59; // xmm1
  unsigned int v60; // eax
  __int64 v61; // rcx
  float v62; // xmm0_4
  __m128i v63; // xmm1
  unsigned int v64; // eax
  float v65; // xmm0_4
  __m128i v66; // xmm1
  int v67; // eax
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // ecx
  __int64 v74; // rdi
  __int64 v75; // rsi
  int v76; // r8d
  __int64 v77; // rdi
  int k; // r13d
  __int64 v79; // rdx
  int v80; // r12d
  int v81; // r10d
  int v82; // r8d
  int v83; // r10d
  int v84; // r11d
  int v85; // r13d
  int v86; // r9d
  int v87; // ecx
  __int64 v88; // rcx
  float v89; // xmm5_4
  __m128i v90; // xmm3
  unsigned int v91; // eax
  int v92; // ecx
  float v93; // xmm3_4
  __m128i v94; // xmm4
  float v95; // xmm4_4
  __int64 v96; // rcx
  int v97; // eax
  float v98; // xmm4_4
  float v99; // xmm0_4
  int v100; // eax
  float v101; // xmm5_4
  float v102; // xmm3_4
  __m128i v103; // xmm4
  int v104; // eax
  float v105; // xmm4_4
  __int64 v106; // rcx
  int v107; // eax
  float v108; // xmm3_4
  float v109; // xmm4_4
  int v110; // eax
  float v111; // xmm5_4
  float v112; // xmm3_4
  float v113; // xmm4_4
  __int64 v114; // r12
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rax
  float v121; // xmm2_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm2_4
  float v129; // xmm1_4
  float v130; // xmm2_4
  float v131; // xmm1_4
  float v132; // xmm2_4
  float v133; // xmm0_4
  float v134; // xmm2_4
  float v135; // xmm1_4
  float v136; // xmm0_4
  float v137; // xmm2_4
  float v138; // xmm0_4
  float v139; // xmm1_4
  float v140; // xmm1_4
  float v141; // xmm2_4
  float v142; // xmm0_4
  int v143; // eax
  int j; // r13d
  __int64 v145; // rdx
  int v146; // r12d
  int v147; // r10d
  int v148; // r8d
  int v149; // r10d
  int v150; // r11d
  int v151; // r13d
  int v152; // r9d
  int v153; // ecx
  __int64 v154; // rcx
  float v155; // xmm5_4
  __m128i v156; // xmm3
  unsigned int v157; // eax
  int v158; // ecx
  float v159; // xmm3_4
  __m128i v160; // xmm4
  float v161; // xmm4_4
  __int64 v162; // rcx
  int v163; // eax
  float v164; // xmm4_4
  float v165; // xmm0_4
  int v166; // eax
  float v167; // xmm5_4
  float v168; // xmm3_4
  __m128i v169; // xmm4
  int v170; // eax
  float v171; // xmm4_4
  __int64 v172; // rcx
  int v173; // eax
  float v174; // xmm3_4
  float v175; // xmm4_4
  int v176; // eax
  float v177; // xmm5_4
  float v178; // xmm3_4
  float v179; // xmm4_4
  __int64 v180; // r12
  int v181; // eax
  __int64 v182; // r14
  int v183; // edi
  unsigned __int64 v184; // rsi
  __int64 v185; // rcx
  __int64 v186; // rcx
  __int64 v187; // rcx
  __int64 v188; // rcx
  __int64 v190; // [rsp-20h] [rbp-11F0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140172080[8416];
#define v191 (*(char (*)[8])(void *)(sr_frame_140172080 + 0)) /* [rsp+30h] */
#define v192 (*(int (*))(void *)(sr_frame_140172080 + 8)) /* [rsp+38h] */
#define v193 (*(int (*))(void *)(sr_frame_140172080 + 12)) /* [rsp+3Ch] */
#define v194 (*(int (*))(void *)(sr_frame_140172080 + 16)) /* [rsp+40h] */
#define v195 (*(int (*))(void *)(sr_frame_140172080 + 20)) /* [rsp+44h] */
#define v196 (*(int (*))(void *)(sr_frame_140172080 + 24)) /* [rsp+48h] */
#define v197 (*(int (*))(void *)(sr_frame_140172080 + 28)) /* [rsp+4Ch] */
#define v198 (*(int (*))(void *)(sr_frame_140172080 + 32)) /* [rsp+50h] */
#define v199 (*(int (*))(void *)(sr_frame_140172080 + 36)) /* [rsp+54h] */
#define v200 (*(int (*))(void *)(sr_frame_140172080 + 40)) /* [rsp+58h] */
#define v201 (*(int (*))(void *)(sr_frame_140172080 + 44)) /* [rsp+5Ch] */
#define v202 (*(__int64 (*))(void *)(sr_frame_140172080 + 4384)) /* [rsp+1150h] */
#define v203 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4400)) /* [rsp+1160h] */
#define v204 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4656)) /* [rsp+1260h] */
#define v205 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4912)) /* [rsp+1360h] */
#define v206 (*(_DWORD (*)[512])(void *)(sr_frame_140172080 + 5168)) /* [rsp+1460h] */
#define v207 (*(_DWORD (*)[8])(void *)(sr_frame_140172080 + 7216)) /* [rsp+1C60h] */
#define v208 (*(char (*)[480])(void *)(sr_frame_140172080 + 7248)) /* [rsp+1C80h] */
#define v209 (*(char (*)[32])(void *)(sr_frame_140172080 + 7728)) /* [rsp+1E60h] */
#define v210 (*(char (*)[480])(void *)(sr_frame_140172080 + 7760)) /* [rsp+1E80h] */
#define v211 (*(int (*))(void *)(sr_frame_140172080 + 8240)) /* [rsp+2060h] */
#define v212 (*(char (*))(void *)(sr_frame_140172080 + 8244)) /* [rsp+2064h] */
#define v213 (*(char (*))(void *)(sr_frame_140172080 + 8245)) /* [rsp+2065h] */
#define v214 (*(char (*))(void *)(sr_frame_140172080 + 8246)) /* [rsp+2066h] */
#define v215 (*(char (*))(void *)(sr_frame_140172080 + 8247)) /* [rsp+2067h] */
#define v216 (*(char (*))(void *)(sr_frame_140172080 + 8248)) /* [rsp+2068h] */
#define v217 (*(__int16 (*))(void *)(sr_frame_140172080 + 8249)) /* [rsp+2069h] */
#define v218 (*(char (*))(void *)(sr_frame_140172080 + 8251)) /* [rsp+206Bh] */
#define v219 (*(int (*))(void *)(sr_frame_140172080 + 8252)) /* [rsp+206Ch] */
#define v220 (*(int (*))(void *)(sr_frame_140172080 + 8256)) /* [rsp+2070h] */
#define v221 (*(int (*))(void *)(sr_frame_140172080 + 8260)) /* [rsp+2074h] */
#define v222 (*(_BYTE (*)[64])(void *)(sr_frame_140172080 + 8272)) /* [rsp+2080h] */
#define v223 (*(_BYTE (*)[64])(void *)(sr_frame_140172080 + 8336)) /* [rsp+20C0h] */
#define v224 (*(__int64 (*))(void *)(sr_frame_140172080 + 8400)) /* [rsp+2100h] */

  v192 = a3;
  v7 = a3;
  v202 = a1;
  if ( a5 && a2 && a3 && (unsigned int)(a4 - 1) <= 3 )
  {
    v10 = 90;
    if ( a6 )
      v10 = a6;
    if ( v10 >= 1 )
    {
      v12 = v10;
      if ( v10 > 100 )
        v12 = 100;
      if ( v12 >= 50 )
        v11 = 2 * (100 - v12);
      else
        v11 = 5000 / v12;
    }
    else
    {
      v11 = 5000;
    }
    for ( i = 0; i < 64; ++i )
    {
      v14 = (v11 * dword_14026F9D0[i] + 50) / 100;
      if ( v14 >= 1 )
      {
        if ( v14 > 255 )
          LOBYTE(v14) = -1;
      }
      else
      {
        LOBYTE(v14) = 1;
      }
      v15 = byte_14026E780[i];
      v16 = v11 * dword_14026FAD0[i];
      v222[v15] = v14;
      v17 = (v16 + 50) / 100;
      if ( v17 >= 1 )
      {
        if ( v17 > 255 )
          LOBYTE(v17) = -1;
      }
      else
      {
        LOBYTE(v17) = 1;
      }
      v223[v15] = v17;
    }
    v18 = (float *)&unk_14026E8E8;
    v19 = 0;
    do
    {
      v20 = *v18;
      v21 = byte_14026E780[v19 + 1];
      v22 = (unsigned __int8)v222[v21];
      v23 = (float)(unsigned __int8)v223[byte_14026E780[v19]];
      *(float *)&v204[v19] = 0.35355338 / (float)((float)(unsigned __int8)v222[byte_14026E780[v19]] * *v18);
      v24 = 0.35355338 / (float)(v23 * v20);
      v25 = _mm_cvtsi32_si128(v22);
      v26 = (unsigned __int8)v223[v21];
      v27 = byte_14026E780[v19 + 2];
      *(float *)&v205[v19] = v24;
      v28 = 0.25489777 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v25), f32)[0] * v20);
      v29 = _mm_cvtsi32_si128(v26);
      v30 = (unsigned __int8)v222[v27];
      *(float *)&v204[v19 + 1] = v28;
      v31 = 0.25489777 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0] * v20);
      v32 = _mm_cvtsi32_si128(v30);
      v33 = (unsigned __int8)v223[v27];
      v34 = byte_14026E780[v19 + 3];
      *(float *)&v205[v19 + 1] = v31;
      v35 = 0.27059805 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v32), f32)[0] * v20);
      v36 = _mm_cvtsi32_si128(v33);
      v37 = (unsigned __int8)v222[v34];
      *(float *)&v204[v19 + 2] = v35;
      v38 = 0.27059805 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v36), f32)[0] * v20);
      v39 = _mm_cvtsi32_si128(v37);
      v40 = (unsigned __int8)v223[v34];
      v41 = byte_14026E780[v19 + 4];
      *(float *)&v205[v19 + 2] = v38;
      v42 = 0.30067247 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v39), f32)[0] * v20);
      v43 = _mm_cvtsi32_si128(v40);
      v44 = (unsigned __int8)v222[v41];
      *(float *)&v204[v19 + 3] = v42;
      v45 = 0.30067247 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v43), f32)[0] * v20);
      v46 = _mm_cvtsi32_si128(v44);
      v47 = (unsigned __int8)v223[v41];
      v48 = byte_14026E780[v19 + 5];
      *(float *)&v205[v19 + 3] = v45;
      v49 = 0.35355338 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v46), f32)[0] * v20);
      v50 = _mm_cvtsi32_si128(v47);
      v51 = (unsigned __int8)v222[v48];
      *(float *)&v204[v19 + 4] = v49;
      v52 = 0.35355338 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v50), f32)[0] * v20);
      *(float *)SR_VEC_LANES(128, v50, i32) = (float)v51;
      *(float *)&v205[v19 + 4] = v52;
      v53 = (unsigned __int8)v223[v48];
      v54 = byte_14026E780[v19 + 6];
      v19 += 8;
      v55 = 0.4499881 / (float)(*(float *)SR_VEC_LANES(128, v50, i32) * v20);
      ++v18;
      v56 = _mm_cvtsi32_si128(v53);
      v57 = (unsigned __int8)v222[v54];
      *(float *)&v203[v19 + 61] = v55;
      v58 = 0.4499881 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v56), f32)[0] * v20);
      v59 = _mm_cvtsi32_si128(v57);
      v60 = (unsigned __int8)v223[v54];
      v61 = (unsigned __int8)byte_14026E768[v19 + 23];
      *(float *)&v204[v19 + 61] = v58;
      v62 = 0.65328151 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v59), f32)[0] * v20);
      v63 = _mm_cvtsi32_si128(v60);
      v64 = (unsigned __int8)v222[v61];
      *(float *)&v203[v19 + 62] = v62;
      v65 = 0.65328151 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v63), f32)[0] * v20);
      v66 = _mm_cvtsi32_si128(v64);
      v67 = (unsigned __int8)v223[v61];
      *(float *)&v204[v19 + 62] = v65;
      *(float *)&v203[v19 + 63] = 1.2814577 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v66), f32)[0] * v20);
      *(float *)&v204[v19 + 63] = 1.2814577 / (float)((float)v67 * v20);
    }
    while ( (__int64)v18 < (__int64)"JFIF" );
    v213 = HIBYTE(v7);
    v215 = BYTE1(a2);
    v68 = 17;
    if ( v10 <= 90 )
      v68 = 34;
    v69 = *(_QWORD *)(a1 + 8);
    v218 = v68;
    v211 = 285262079;
    v212 = 8;
    v214 = v7;
    v216 = a2;
    v217 = 259;
    v219 = 17891840;
    v220 = -16707325;
    v221 = 10617284;
    (*(void (           **)(__int64, void *, __int64,      char *))a1)(v69, &unk_14026FBD0, 25, "JFIF");
    (*(void (           **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), v222, 64);
    v70 = *(_QWORD *)(a1 + 8);
    v191[0] = 1;
    (*(void (           **)(__int64, char *, __int64))a1)(v70, v191, 1);
    (*(void (           **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), v223, 64);
    (*(void (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v211, 24);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7C1, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7D8, 12);
    v71 = *(_QWORD *)(a1 + 8);
    v191[0] = 16;
    (*(void (           **)(__int64, char *, __int64))a1)(v71, v191, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7E9, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E800, 162);
    v72 = *(_QWORD *)(a1 + 8);
    v191[0] = 1;
    (*(void (           **)(__int64, char *, __int64))a1)(v72, v191, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8A9, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8C0, 12);
    v191[0] = 17;
    (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v191, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8D1, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E910, 162);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E9B8, 14);
    v73 = v192;
    v197 = 0;
    v198 = 0;
    v199 = 0;
    v74 = 0;
    v194 = 0;
    v75 = a5 + (a4 > 2);
    v193 = 0;
    if ( a4 > 2 )
      v74 = 2;
    v76 = 0;
    v77 = a5 + v74;
    v195 = 0;
    if ( v10 > 90 )
    {
      if ( v192 > 0 )
      {
        do
        {
          if ( a2 > 0 )
          {
            j = 8;
            v196 = 8;
            do
            {
              v145 = 0;
              v200 = j;
              v146 = v76;
              if ( !sr_export_ofsub32((uint32_t)v76, (uint32_t)v76 + 8u) )
              {
                do
                {
                  v147 = v146;
                  v148 = j - 8;
                  if ( v146 >= v73 )
                    v147 = v73 - 1;
                  if ( dword_140404A6C[18215637] )
                    v147 = v73 - v147 - 1;
                  v149 = a2 * v147;
                  if ( v148 < j )
                  {
                    v150 = j - 6;
                    v151 = j - 3;
                    v152 = a2 - 1;
                    do
                    {
                      v153 = v148;
                      if ( v148 >= a2 )
                      {
                        v152 = a2 - 1;
                        v153 = a2 - 1;
                      }
                      v154 = a4 * (v149 + v153);
                      v155 = (float)*(unsigned __int8 *)(v154 + a5);
                      v156 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v154 + v75));
                      v157 = *(unsigned __int8 *)(v154 + v77);
                      v158 = v152;
                      v159 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v156), f32)[0];
                      v160 = _mm_cvtsi32_si128(v157);
                      if ( v150 - 1 < a2 )
                        v158 = v150 - 1;
                      v161 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v160), f32)[0];
                      v162 = a4 * (v158 + v149);
                      v163 = *(unsigned __int8 *)(v162 + a5);
                      *(float *)&v207[v145] = (float)((float)((float)(v159 * 0.58700001) + (float)(v155 * 0.29899999))
                                                    + (float)(v161 * 0.114))
                                            - 128.0;
                      *(float *)&v203[v145] = (float)(v161 * 0.5)
                                            - (float)((float)(v155 * 0.16874) + (float)(v159 * 0.33126));
                      *(float *)&v206[v145] = (float)((float)(v155 * 0.5) - (float)(v159 * 0.41869))
                                            - (float)(v161 * 0.081309997);
                      v164 = (float)*(unsigned __int8 *)(v162 + v77);
                      v165 = (float)*(unsigned __int8 *)(v162 + v75);
                      *(float *)&v207[v145 + 1] = (float)((float)((float)(v165 * 0.58700001)
                                                                + (float)((float)v163 * 0.29899999))
                                                        + (float)(v164 * 0.114))
                                                - 128.0;
                      *(float *)&v203[v145 + 1] = (float)(v164 * 0.5)
                                                - (float)((float)((float)v163 * 0.16874) + (float)(v165 * 0.33126));
                      *(float *)&v206[v145 + 1] = (float)((float)((float)v163 * 0.5) - (float)(v165 * 0.41869))
                                                - (float)(v164 * 0.081309997);
                      if ( v150 >= a2 )
                      {
                        v166 = v152;
                      }
                      else
                      {
                        v166 = v150;
                        v152 = a2 - 1;
                      }
                      v167 = (float)*(unsigned __int8 *)(a4 * (v149 + v166) + a5);
                      v168 = (float)*(unsigned __int8 *)(a4 * (v149 + v166) + v75);
                      v169 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (v149 + v166) + v77));
                      v170 = v150 + 1;
                      if ( v150 + 1 >= a2 )
                        v170 = v152;
                      v148 += 4;
                      v171 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v169), f32)[0];
                      v150 += 4;
                      v172 = a4 * (v149 + v170);
                      v173 = *(unsigned __int8 *)(v172 + a5);
                      *(float *)&v207[v145 + 2] = (float)((float)((float)(v168 * 0.58700001) + (float)(v167 * 0.29899999))
                                                        + (float)(v171 * 0.114))
                                                - 128.0;
                      *(float *)&v203[v145 + 2] = (float)(v171 * 0.5)
                                                - (float)((float)(v167 * 0.16874) + (float)(v168 * 0.33126));
                      *(float *)&v206[v145 + 2] = (float)((float)(v167 * 0.5) - (float)(v168 * 0.41869))
                                                - (float)(v171 * 0.081309997);
                      v174 = (float)*(unsigned __int8 *)(v172 + v75);
                      v175 = (float)*(unsigned __int8 *)(v172 + v77);
                      *(float *)&v207[v145 + 3] = (float)((float)((float)(v174 * 0.58700001)
                                                                + (float)((float)v173 * 0.29899999))
                                                        + (float)(v175 * 0.114))
                                                - 128.0;
                      *(float *)&v203[v145 + 3] = (float)(v175 * 0.5)
                                                - (float)((float)((float)v173 * 0.16874) + (float)(v174 * 0.33126));
                      *(float *)&v206[v145 + 3] = (float)((float)((float)v173 * 0.5) - (float)(v174 * 0.41869))
                                                - (float)(v175 * 0.081309997);
                      v145 += 4;
                    }
                    while ( v148 < v151 );
                    for ( j = v196; v148 < j; ++v145 )
                    {
                      v176 = v148;
                      if ( v148 >= a2 )
                        v176 = v152;
                      ++v148;
                      v177 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + a5);
                      v178 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + v75);
                      v179 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + v77);
                      *(float *)&v207[v145] = (float)((float)((float)(v178 * 0.58700001) + (float)(v177 * 0.29899999))
                                                    + (float)(v179 * 0.114))
                                            - 128.0;
                      *(float *)&v203[v145] = (float)(v179 * 0.5)
                                            - (float)((float)(v177 * 0.16874) + (float)(v178 * 0.33126));
                      *(float *)&v206[v145] = (float)((float)(v177 * 0.5) - (float)(v178 * 0.41869))
                                            - (float)(v179 * 0.081309997);
                    }
                    v73 = v192;
                  }
                  ++v146;
                }
                while ( v146 < v195 + 8 );
              }
              v180 = v202;
              v197 = CMFCVisualManager__OnDrawTab(
                       v202,
                       &v194,
                       &v193,
                       (__int64)v207,
                       8,
                       (__int64)v204,
                       v197,
                       word_14026E9D0,
                       word_14026F1D0);
              v198 = CMFCVisualManager__OnDrawTab(
                       v180,
                       &v194,
                       &v193,
                       (__int64)v203,
                       8,
                       (__int64)v205,
                       v198,
                       word_14026EDD0,
                       word_14026F5D0);
              v181 = CMFCVisualManager__OnDrawTab(
                       v180,
                       &v194,
                       &v193,
                       (__int64)v206,
                       8,
                       (__int64)v205,
                       v199,
                       word_14026EDD0,
                       word_14026F5D0);
              v73 = v192;
              j += 8;
              v76 = v195;
              v199 = v181;
              v196 = j;
            }
            while ( v200 < a2 );
          }
          v76 += 8;
          v195 = v76;
        }
        while ( v76 < v73 );
      }
    }
    else if ( v192 > 0 )
    {
      do
      {
        if ( a2 > 0 )
        {
          k = 16;
          v196 = 16;
          do
          {
            v79 = 0;
            v201 = k;
            v80 = v76;
            if ( !sr_export_ofsub32((uint32_t)v76, (uint32_t)v76 + 16u) )
            {
              do
              {
                v81 = v80;
                v82 = k - 16;
                if ( v80 >= v73 )
                  v81 = v73 - 1;
                if ( dword_140404A6C[18215637] )
                  v81 = v73 - v81 - 1;
                v83 = a2 * v81;
                if ( v82 < k )
                {
                  v84 = k - 14;
                  v85 = k - 3;
                  v86 = a2 - 1;
                  do
                  {
                    v87 = v82;
                    if ( v82 >= a2 )
                    {
                      v86 = a2 - 1;
                      v87 = a2 - 1;
                    }
                    v88 = a4 * (v83 + v87);
                    v89 = (float)*(unsigned __int8 *)(v88 + a5);
                    v90 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v88 + v75));
                    v91 = *(unsigned __int8 *)(v88 + v77);
                    v92 = v86;
                    v93 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v90), f32)[0];
                    v94 = _mm_cvtsi32_si128(v91);
                    if ( v84 - 1 < a2 )
                      v92 = v84 - 1;
                    v95 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v94), f32)[0];
                    v96 = a4 * (v83 + v92);
                    v97 = *(unsigned __int8 *)(v96 + a5);
                    *(float *)&v207[v79] = (float)((float)((float)(v89 * 0.29899999) + (float)(v93 * 0.58700001))
                                                 + (float)(v95 * 0.114))
                                         - 128.0;
                    *(float *)&v206[v79] = (float)(v95 * 0.5) - (float)((float)(v89 * 0.16874) + (float)(v93 * 0.33126));
                    *(float *)&v206[v79 + 256] = (float)((float)(v89 * 0.5) - (float)(v93 * 0.41869))
                                               - (float)(v95 * 0.081309997);
                    v98 = (float)*(unsigned __int8 *)(v96 + v77);
                    v99 = (float)*(unsigned __int8 *)(v96 + v75);
                    *(float *)&v207[v79 + 1] = (float)((float)((float)((float)v97 * 0.29899999)
                                                             + (float)(v99 * 0.58700001))
                                                     + (float)(v98 * 0.114))
                                             - 128.0;
                    *(float *)&v206[v79 + 1] = (float)(v98 * 0.5)
                                             - (float)((float)((float)v97 * 0.16874) + (float)(v99 * 0.33126));
                    *(float *)&v206[v79 + 257] = (float)((float)((float)v97 * 0.5) - (float)(v99 * 0.41869))
                                               - (float)(v98 * 0.081309997);
                    if ( v84 >= a2 )
                    {
                      v100 = v86;
                    }
                    else
                    {
                      v100 = v84;
                      v86 = a2 - 1;
                    }
                    v101 = (float)*(unsigned __int8 *)(a4 * (v83 + v100) + a5);
                    v102 = (float)*(unsigned __int8 *)(a4 * (v83 + v100) + v75);
                    v103 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (v83 + v100) + v77));
                    v104 = v84 + 1;
                    if ( v84 + 1 >= a2 )
                      v104 = v86;
                    v82 += 4;
                    v105 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v103), f32)[0];
                    v84 += 4;
                    v106 = a4 * (v83 + v104);
                    v107 = *(unsigned __int8 *)(v106 + a5);
                    *(float *)&v207[v79 + 2] = (float)((float)((float)(v101 * 0.29899999) + (float)(v102 * 0.58700001))
                                                     + (float)(v105 * 0.114))
                                             - 128.0;
                    *(float *)&v206[v79 + 2] = (float)(v105 * 0.5)
                                             - (float)((float)(v101 * 0.16874) + (float)(v102 * 0.33126));
                    *(float *)&v206[v79 + 258] = (float)((float)(v101 * 0.5) - (float)(v102 * 0.41869))
                                               - (float)(v105 * 0.081309997);
                    v108 = (float)*(unsigned __int8 *)(v106 + v75);
                    v109 = (float)*(unsigned __int8 *)(v106 + v77);
                    *(float *)&v207[v79 + 3] = (float)((float)((float)((float)v107 * 0.29899999)
                                                             + (float)(v108 * 0.58700001))
                                                     + (float)(v109 * 0.114))
                                             - 128.0;
                    *(float *)&v206[v79 + 3] = (float)(v109 * 0.5)
                                             - (float)((float)((float)v107 * 0.16874) + (float)(v108 * 0.33126));
                    *(float *)&v206[v79 + 259] = (float)((float)((float)v107 * 0.5) - (float)(v108 * 0.41869))
                                               - (float)(v109 * 0.081309997);
                    v79 += 4;
                  }
                  while ( v82 < v85 );
                  for ( k = v196; v82 < k; ++v79 )
                  {
                    v110 = v82;
                    if ( v82 >= a2 )
                      v110 = v86;
                    ++v82;
                    v111 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + a5);
                    v112 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + v75);
                    v113 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + v77);
                    *(float *)&v207[v79] = (float)((float)((float)(v111 * 0.29899999) + (float)(v112 * 0.58700001))
                                                 + (float)(v113 * 0.114))
                                         - 128.0;
                    *(float *)&v206[v79] = (float)(v113 * 0.5)
                                         - (float)((float)(v111 * 0.16874) + (float)(v112 * 0.33126));
                    *(float *)&v206[v79 + 256] = (float)((float)(v111 * 0.5) - (float)(v112 * 0.41869))
                                               - (float)(v113 * 0.081309997);
                  }
                  v73 = v192;
                }
                ++v80;
              }
              while ( v80 < v195 + 16 );
            }
            v114 = v202;
            v115 = CMFCVisualManager__OnDrawTab(
                     v202,
                     &v194,
                     &v193,
                     (__int64)v207,
                     16,
                     (__int64)v204,
                     v197,
                     word_14026E9D0,
                     word_14026F1D0);
            v116 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v208,
                     16,
                     (__int64)v204,
                     v115,
                     word_14026E9D0,
                     word_14026F1D0);
            v117 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v209,
                     16,
                     (__int64)v204,
                     v116,
                     word_14026E9D0,
                     word_14026F1D0);
            v118 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v210,
                     16,
                     (__int64)v204,
                     v117,
                     word_14026E9D0,
                     word_14026F1D0);
            v119 = 0;
            v197 = v118;
            v120 = 0;
            do
            {
              v121 = (float)(*(float *)&v206[v120 + 273] + *(float *)&v206[v120 + 272])
                   + (float)(*(float *)&v206[v120 + 257] + *(float *)&v206[v120 + 256]);
              v122 = *(float *)&v206[v120 + 3] + *(float *)&v206[v120 + 2];
              *(float *)&v203[v119] = (float)((float)(*(float *)&v206[v120 + 17] + *(float *)&v206[v120 + 16])
                                            + (float)(*(float *)&v206[v120 + 1] + *(float *)&v206[v120]))
                                    * 0.25;
              v123 = (float)(*(float *)&v206[v120 + 19] + *(float *)&v206[v120 + 18]) + v122;
              *(float *)&v207[v119] = v121 * 0.25;
              v124 = (float)(*(float *)&v206[v120 + 275] + *(float *)&v206[v120 + 274])
                   + (float)(*(float *)&v206[v120 + 259] + *(float *)&v206[v120 + 258]);
              *(float *)&v203[v119 + 1] = v123 * 0.25;
              v125 = (float)(*(float *)&v206[v120 + 21] + *(float *)&v206[v120 + 20])
                   + (float)(*(float *)&v206[v120 + 4] + *(float *)&v206[v120 + 5]);
              *(float *)&v207[v119 + 1] = v124 * 0.25;
              v126 = (float)(*(float *)&v206[v120 + 277] + *(float *)&v206[v120 + 276])
                   + (float)(*(float *)&v206[v120 + 260] + *(float *)&v206[v120 + 261]);
              *(float *)&v203[v119 + 2] = v125 * 0.25;
              v127 = (float)(*(float *)&v206[v120 + 23] + *(float *)&v206[v120 + 22])
                   + (float)(*(float *)&v206[v120 + 6] + *(float *)&v206[v120 + 7]);
              *(float *)&v207[v119 + 2] = v126 * 0.25;
              v128 = (float)(*(float *)&v206[v120 + 279] + *(float *)&v206[v120 + 278])
                   + (float)(*(float *)&v206[v120 + 262] + *(float *)&v206[v120 + 263]);
              *(float *)&v203[v119 + 3] = v127 * 0.25;
              v129 = (float)(*(float *)&v206[v120 + 25] + *(float *)&v206[v120 + 24])
                   + (float)(*(float *)&v206[v120 + 8] + *(float *)&v206[v120 + 9]);
              *(float *)&v207[v119 + 3] = v128 * 0.25;
              v130 = (float)(*(float *)&v206[v120 + 281] + *(float *)&v206[v120 + 280])
                   + (float)(*(float *)&v206[v120 + 264] + *(float *)&v206[v120 + 265]);
              *(float *)&v203[v119 + 4] = v129 * 0.25;
              v131 = (float)(*(float *)&v206[v120 + 27] + *(float *)&v206[v120 + 26])
                   + (float)(*(float *)&v206[v120 + 10] + *(float *)&v206[v120 + 11]);
              *(float *)&v207[v119 + 4] = v130 * 0.25;
              v132 = *(float *)&v206[v120 + 283] + *(float *)&v206[v120 + 282];
              v133 = *(float *)&v206[v120 + 266] + *(float *)&v206[v120 + 267];
              *(float *)&v203[v119 + 5] = v131 * 0.25;
              v134 = v132 + v133;
              v135 = (float)(*(float *)&v206[v120 + 29] + *(float *)&v206[v120 + 28])
                   + (float)(*(float *)&v206[v120 + 12] + *(float *)&v206[v120 + 13]);
              v136 = *(float *)&v206[v120 + 268] + *(float *)&v206[v120 + 269];
              *(float *)&v207[v119 + 5] = v134 * 0.25;
              v137 = (float)(*(float *)&v206[v120 + 285] + *(float *)&v206[v120 + 284]) + v136;
              *(float *)&v203[v119 + 6] = v135 * 0.25;
              v138 = *(float *)&v206[v120 + 14] + *(float *)&v206[v120 + 15];
              v139 = *(float *)&v206[v120 + 31] + *(float *)&v206[v120 + 30];
              *(float *)&v207[v119 + 6] = v137 * 0.25;
              v140 = v139 + v138;
              v141 = *(float *)&v206[v120 + 287] + *(float *)&v206[v120 + 286];
              v142 = *(float *)&v206[v120 + 270] + *(float *)&v206[v120 + 271];
              v120 += 32;
              *(float *)&v203[v119 + 7] = v140 * 0.25;
              *(float *)&v207[v119 + 7] = (float)(v141 + v142) * 0.25;
              v119 += 8;
            }
            while ( v120 < 256 );
            v198 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v203,
                     8,
                     (__int64)v205,
                     v198,
                     word_14026EDD0,
                     word_14026F5D0);
            v143 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v207,
                     8,
                     (__int64)v205,
                     v199,
                     word_14026EDD0,
                     word_14026F5D0);
            v73 = v192;
            k += 16;
            v76 = v195;
            v199 = v143;
            v196 = k;
          }
          while ( v201 < a2 );
        }
        v76 += 16;
        v195 = v76;
      }
      while ( v76 < v73 );
    }
    v182 = v202;
    v183 = v194 | (127 << (24 - (v193 + 7)));
    if ( v193 + 7 >= 8 )
    {
      v184 = (unsigned __int64)(unsigned int)(v193 + 7) >> 3;
      do
      {
        v185 = *(_QWORD *)(v182 + 8);
        v191[0] = BYTE2(v183);
        (*(void (           **)(__int64, char *, __int64))v182)(v185, v191, 1);
        if ( BYTE2(v183) == 0xFF )
        {
          v186 = *(_QWORD *)(v182 + 8);
          v191[0] = 0;
          (*(void (           **)(__int64, char *, __int64))v182)(v186, v191, 1);
        }
        v183 <<= 8;
        --v184;
      }
      while ( v184 );
    }
    v187 = *(_QWORD *)(v182 + 8);
    v191[0] = -1;
    (*(void (           **)(__int64, char *, __int64))v182)(v187, v191, 1);
    v188 = *(_QWORD *)(v182 + 8);
    v191[0] = -39;
    (*(void (           **)(__int64, char *, __int64))v182)(v188, v191, 1);
  }
  return sub_1401F8B20((unsigned __int64)&v190 ^ v224);
}
#undef v191
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204
#undef v205
#undef v206
#undef v207
#undef v208
#undef v209
#undef v210
#undef v211
#undef v212
#undef v213
#undef v214
#undef v215
#undef v216
#undef v217
#undef v218
#undef v219
#undef v220
#undef v221
#undef v222
#undef v223
#undef v224

// 14026E768: using guessed type _BYTE byte_14026E768[24];
// 14026E780: using guessed type unsigned __int8 byte_14026E780[65];
// 14026E9D0: using guessed type unsigned __int16 word_14026E9D0[512];
// 14026EDD0: using guessed type unsigned __int16 word_14026EDD0[512];
// 14026F1D0: using guessed type _WORD word_14026F1D0[512];
// 14026F5D0: using guessed type _WORD word_14026F5D0[382];
// 14026F9D0: using guessed type int dword_14026F9D0[64];
// 14026FAD0: using guessed type int dword_14026FAD0[64];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401737F0) ----------------------------------------------------
__int64            sub_1401737F0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401737F0[96];
#define v8 (*(_QWORD (*)[2])(void *)(sr_frame_1401737F0 + 0)) /* [rsp+30h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 16)) /* [rsp+40h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 32)) /* [rsp+50h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 48)) /* [rsp+60h] */
#define v12 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 64)) /* [rsp+70h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401737F0 + 80)) /* [rsp+80h] */

  v8[0] = a1;
  v8[1] = a2;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  return sub_140172080((__int64)v8, a3, a4, a5, a6, a7);
}
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13


//----- (0000000140173860) ----------------------------------------------------
__int64            sub_140173860(char *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  void *v7; // rdi
  int v8; // eax
  __int64 v9; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140173860[16];
#define v11 (*(int (*))(void *)(sr_frame_140173860 + 0)) /* [rsp+30h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140173860 + 8)) /* [rsp+38h] */

  v7 = (void *)sub_140173990(a5, a6, a2, a3, a4, (__int64)&v11);
  if ( !v7 )
    return 0;
  v8 = sub_14020B8E4(&v12, a1, "wb");
  v9 = v12;
  if ( v8 )
    v9 = 0;
  v12 = v9;
  if ( !v9 )
  {
    free(v7);
    return 0;
  }
  sub_14020CE0C((__int64)v7, 1, v11, v9);
  sub_14020B9E8(v9);
  free(v7);
  return 1;
}
#undef v11
#undef v12


//----- (0000000140173910) ----------------------------------------------------
__int64            sub_140173910(
        void (           *a1)(__int64, __int64, _QWORD),
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 result; // rax
  void *v10; // rbx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  result = sub_140173990(a6, a7, a3, a4, a5, (__int64)v11);
  v10 = (void *)result;
  if ( result )
  {
    a1(a2, result, v11[0]);
    free(v10);
    return 1;
  }
  return result;
}


//----- (0000000140173990) ----------------------------------------------------
__int64            sub_140173990(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  int v6; // esi
  int v7; // r12d
  int v8; // r15d
  int v9; // ebp
  int v10; // eax
  __m128i *v11; // rbx
  int v13; // eax
  __int64 v14; // rdi
  int v15; // r13d
  int v16; // esi
  int v17; // r12d
  int v18; // r15d
  int v19; // r10d
  __int64 v20; // rcx
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm0
  __m128i v24; // xmm2
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm3
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  int v31; // edx
  int v32; // eax
  _BYTE *v33; // rax
  _BYTE *v34; // rsi
  __m128i *v35; // r15
  unsigned __int64 v36; // rbp
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r14
  int v40; // r9d
  int *v41; // r13
  __int64 v42; // r9
  unsigned int v43; // edx
  unsigned int v44; // r8d
  unsigned int v45; // edx
  unsigned int v46; // r8d
  unsigned int v47; // edx
  unsigned int v48; // r8d
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  unsigned int v52; // r8d
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // edx
  unsigned int v56; // r8d
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // edx
  int v60; // r8d
  unsigned __int64 v61; // rbx
  unsigned int v62; // r8d
  unsigned __int64 v63; // rdx
  int v64; // edx
  int v65; // r8d
  unsigned int v66; // r8d
  unsigned int v67; // edx
  int v68; // r8d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140173990[176];
#define v69 (*(__int64 (*))(void *)(sr_frame_140173990 + 0)) /* [rsp+0h] */
#define v70 (*(int (*))(void *)(sr_frame_140173990 + 64)) /* [rsp+40h] */
#define v71 (*(int (*))(void *)(sr_frame_140173990 + 68)) /* [rsp+44h] */
#define v72 (*(int (*))(void *)(sr_frame_140173990 + 72)) /* [rsp+48h] */
#define v73 (*(int (*))(void *)(sr_frame_140173990 + 76)) /* [rsp+4Ch] */
#define v74 (*(int (*))(void *)(sr_frame_140173990 + 80)) /* [rsp+50h] */
#define v75 (*(int (*))(void *)(sr_frame_140173990 + 84)) /* [rsp+54h] */
#define v76 (*(__int64 (*))(void *)(sr_frame_140173990 + 88)) /* [rsp+58h] */
#define v77 (*(_BYTE * (*))(void *)(sr_frame_140173990 + 96)) /* [rsp+60h] */
#define Block (*(void * (*))(void *)(sr_frame_140173990 + 104)) /* [rsp+68h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_140173990 + 112)) /* [rsp+70h] */
#define v80 (*(__int64 (*))(void *)(sr_frame_140173990 + 120)) /* [rsp+78h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_140173990 + 128)) /* [rsp+80h] */
#define v82 (*(int (*))(void *)(sr_frame_140173990 + 144)) /* [rsp+90h] */
#define v83 (*(__int64 (*))(void *)(sr_frame_140173990 + 152)) /* [rsp+98h] */
#define v84 (*(__int64 (*))(void *)(sr_frame_140173990 + 160)) /* [rsp+A0h] */

  v6 = a5;
  v7 = a3;
  v8 = a2;
  v9 = a3 * a5;
  v80 = a6;
  v10 = dword_1402B2BD0;
  v70 = a4;
  v72 = a3;
  v71 = a2;
  v76 = a1;
  v73 = a5;
  v82 = 6;
  v83 = 0xA1A0A0D474E5089LL;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278F30);
  if ( !a2 )
  {
    v8 = a3 * a5;
    v71 = a3 * a5;
  }
  if ( dword_1402B2BD0 >= 5 )
    v10 = -1;
  v74 = v10;
  v75 = a4 * (v9 + 1);
  Block = (void *)sr_path_malloc(v75);
  if ( Block )
  {
    v11 = (__m128i *)sr_path_malloc(v9);
    if ( v11 )
    {
      v13 = v70;
      v14 = 0;
      v15 = 0;
      if ( v70 > 0 )
      {
        v79 = v9 + 1;
        v77 = Block;
        do
        {
          if ( v74 <= -1 )
          {
            v17 = 0;
            v18 = 0x7FFFFFFF;
            v16 = 0;
            do
            {
              sub_140175EB0(v76, v71, v72, v13, v15, v73, v16, v11);
              v19 = 0;
              v20 = 0;
              if ( v9 >= 8 && dword_140302080 >= 2 )
              {
                v21 = _mm_cvtsi64_si128((long long)(0));
                v22 = _mm_cvtsi64_si128((long long)(0));
                do
                {
                  v23 = _mm_cvtsi32_si128(*(unsigned __int32 *)((char *)&SR_VEC_PTR_LANES(128, v11, u32)[1] + v20));
                  v24 = _mm_add_epi32(
                          _mm_abs_epi32(_mm_cvtepi8_epi32(_mm_cvtsi32_si128(*(unsigned __int32 *)((char *)SR_VEC_PTR_LANES(128, v11, u32)
                                                                                                + v20)))),
                          v21);
                  v20 += 8;
                  v21 = v24;
                  v25 = _mm_add_epi32(_mm_abs_epi32(_mm_cvtepi8_epi32(v23)), v22);
                  v22 = v25;
                }
                while ( v20 < (int)(v9 - (v9 & 0x80000007)) );
                v26 = _mm_add_epi32(v21, v25);
                v27 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
                v19 = _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
              }
              v28 = 0;
              v29 = 0;
              if ( v20 < v9 )
              {
                if ( v9 - v20 < 2 )
                  goto LABEL_23;
                do
                {
                  v28 += abs8(SR_VEC_PTR_LANES(128, v11, i8)[v20]);
                  v30 = SR_VEC_PTR_LANES(128, v11, i8)[v20 + 1];
                  v31 = (unsigned __int64)SR_VEC_PTR_LANES(128, v11, i8)[v20 + 1] >> 32;
                  v20 += 2;
                  v29 += (v31 ^ v30) - v31;
                }
                while ( v20 < v9 - 1LL );
                if ( v20 < v9 )
LABEL_23:
                  v19 += abs8(SR_VEC_PTR_LANES(128, v11, i8)[v20]);
                v19 += v29 + v28;
              }
              v32 = v16;
              if ( v19 >= v18 )
                v32 = v17;
              ++v16;
              v17 = v32;
              v13 = v70;
              if ( v19 >= v18 )
                v19 = v18;
              v18 = v19;
            }
            while ( v16 < 5 );
            v8 = v71;
            if ( v16 != v17 )
            {
              sub_140175EB0(v76, v71, v72, v70, v15, v73, v17, v11);
              LOBYTE(v16) = v17;
            }
            v7 = v72;
          }
          else
          {
            LOBYTE(v16) = v74;
            sub_140175EB0(v76, v8, v7, v13, v15, v73, v74, v11);
          }
          v33 = v77;
          *v77 = v16;
          v34 = v33;
          sub_1401FC920((__m128i *)(v33 + 1), v11, v9);
          ++v15;
          v13 = v70;
          v77 = &v34[v79];
        }
        while ( v15 < v70 );
        v6 = v73;
      }
      free(v11);
      v35 = sub_140174680((__int64)Block, v75, &v74, dword_1402B2918);
      free(Block);
      if ( v35 )
      {
        v36 = v74;
        v37 = v74 + 57;
        v38 = sr_path_malloc(v74 + 57);
        v39 = v38;
        if ( v38 )
        {
          v40 = v70;
          *(_QWORD *)v38 = v83;
          v41 = (int *)v80;
          *(_BYTE *)(v38 + 16) = HIBYTE(v7);
          *(_BYTE *)(v38 + 17) = BYTE2(v7);
          *(_BYTE *)(v38 + 18) = BYTE1(v7);
          *(_BYTE *)(v38 + 20) = HIBYTE(v40);
          *(_BYTE *)(v38 + 21) = BYTE2(v40);
          *(_BYTE *)(v38 + 22) = BYTE1(v40);
          *(_BYTE *)(v38 + 23) = v40;
          *(_BYTE *)(v38 + 19) = v7;
          *(_DWORD *)(v38 + 8) = 218103808;
          *(_DWORD *)(v38 + 12) = 1380206665;
          *(_BYTE *)(v38 + 24) = 8;
          *(_WORD *)(v38 + 26) = 0;
          *(_BYTE *)(v38 + 28) = 0;
          *v41 = v37;
          v42 = SR_VEC_LANES(128, si128, u8)[4 * v6];
          *(_BYTE *)(v38 + 25) = v42;
          v43 = ((dword_140301980[(unsigned __int8)~*(_BYTE *)(v38 + 12)] ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(v38 + 13)
                              ^ (unsigned __int64)(unsigned __int8)~LOBYTE(dword_140301980[(unsigned __int8)~*(_BYTE *)(v38 + 12)])];
          v44 = (v43 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 14) ^ (unsigned __int64)(unsigned __int8)v43];
          v45 = (v44 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 15) ^ (unsigned __int64)(unsigned __int8)v44];
          v46 = (v45 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 16) ^ (unsigned __int64)(unsigned __int8)v45];
          v47 = (v46 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 17) ^ (unsigned __int64)(unsigned __int8)v46];
          v48 = (v47 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 18) ^ (unsigned __int64)(unsigned __int8)v47];
          v49 = (v48 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 19) ^ (unsigned __int64)(unsigned __int8)v48];
          v50 = (v49 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 20) ^ (unsigned __int64)(unsigned __int8)v49];
          v51 = (v50 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 21) ^ (unsigned __int64)(unsigned __int8)v50];
          v52 = (v51 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 22) ^ (unsigned __int64)(unsigned __int8)v51];
          v53 = *(unsigned __int8 *)(v38 + 23) ^ (unsigned __int64)(unsigned __int8)v52;
          v54 = *(unsigned __int8 *)(v38 + 24);
          *(_BYTE *)(v39 + 36) = v36;
          *(_DWORD *)(v39 + 37) = 1413563465;
          v55 = (v52 >> 8) ^ dword_140301980[v53];
          v56 = (v55 >> 8) ^ dword_140301980[v54 ^ (unsigned __int8)v55];
          v57 = (v56 >> 8) ^ dword_140301980[v42 ^ (unsigned __int8)v56];
          v58 = (v57 >> 8) ^ dword_140301980[(unsigned __int8)v57];
          v59 = (v58 >> 8) ^ dword_140301980[(unsigned __int8)v58];
          v60 = ~((v59 >> 8) ^ dword_140301980[(unsigned __int8)v59]);
          *(_BYTE *)(v39 + 32) = v60;
          *(_BYTE *)(v39 + 29) = HIBYTE(v60);
          *(_BYTE *)(v39 + 30) = BYTE2(v60);
          *(_BYTE *)(v39 + 31) = BYTE1(v60);
          *(_BYTE *)(v39 + 33) = BYTE3(v36);
          *(_BYTE *)(v39 + 34) = BYTE2(v36);
          *(_BYTE *)(v39 + 35) = BYTE1(v36);
          sub_1401FC920((__m128i *)(v39 + 41), v35, v36);
          v61 = v36 + v39 + 41;
          free(v35);
          v62 = -1;
          if ( (int)v36 + 4 > 0 )
          {
            do
            {
              v63 = *(unsigned __int8 *)(v14 + v39 + 41 - 4);
              ++v14;
              v62 = (v62 >> 8) ^ dword_140301980[(unsigned __int8)v62 ^ v63];
            }
            while ( v14 < (int)v36 + 4 );
          }
          v64 = dword_140301C58;
          v65 = ~v62;
          *(_BYTE *)(v61 + 3) = v65;
          *(_BYTE *)v61 = HIBYTE(v65);
          *(_BYTE *)(v61 + 1) = BYTE2(v65);
          *(_BYTE *)(v61 + 2) = BYTE1(v65);
          *(_DWORD *)(v61 + 4) = 0;
          *(_DWORD *)(v61 + 8) = 1145980233;
          v66 = ((v64 ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(v61 + 9) ^ (unsigned __int64)(unsigned __int8)~(_BYTE)v64];
          v67 = (v66 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v61 + 10) ^ (unsigned __int64)(unsigned __int8)v66];
          v68 = ~((v67 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v61 + 11) ^ (unsigned __int64)(unsigned __int8)v67]);
          *(_BYTE *)(v61 + 15) = v68;
          *(_BYTE *)(v61 + 12) = HIBYTE(v68);
          *(_BYTE *)(v61 + 14) = BYTE1(v68);
          *(_BYTE *)(v61 + 13) = BYTE2(v68);
          if ( v61 + 16 != v39 + *v41 )
            sub_14023E640(
              (char *)L"o == out + *out_len",
              (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
              0x49Bu);
        }
      }
    }
    else
    {
      free(Block);
    }
  }
  return sub_1401F8B20((unsigned __int64)&v69 ^ v84);
}
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef Block
#undef v79
#undef v80
#undef si128
#undef v82
#undef v83
#undef v84

// 140173B8E: conditional instruction was optimized away because ebp.4>=8
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140273670: using guessed type __int16[52];
// 140273808: using guessed type __int16[20];
// 140278F30: using guessed type __int128 xmmword_140278F30;
// 1402B2918: using guessed type int dword_1402B2918;
// 1402B2BD0: using guessed type int dword_1402B2BD0;
// 140301980: using guessed type _DWORD dword_140301980[182];
// 140301C58: using guessed type int dword_140301C58;
// 140302080: using guessed type int dword_140302080;

//----- (00000001401740A0) ----------------------------------------------------
__int64            sub_1401740A0(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int v8; // eax
  FILE *v9; // rcx
  unsigned __int64 (           *v13)(__int64, __int64, int); // [rsp+40h] [rbp-98h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401740A0[176];
#define v11 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_1401740A0 + 48)) /* [rsp+30h] */
#define v14 (*(FILE * (*))(void *)(sr_frame_1401740A0 + 72)) /* [rsp+48h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 80)) /* [rsp+50h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 96)) /* [rsp+60h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 112)) /* [rsp+70h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 128)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 144)) /* [rsp+90h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 160)) /* [rsp+A0h] */

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = sub_14020B8E4((__int64 *)&Stream, a1, "wb");
  v9 = Stream;
  v13 = sub_14016E2F0;
  if ( v8 )
    v9 = nullptr;
  v14 = v9;
  if ( v9 )
  {
    sub_140174170((__int64)&v13, a2, a3, a4, a5);
    sub_14020B9E8((__int64)v14);
  }
  return sub_1401F8B20((unsigned __int64)&v11 ^ v20);
}
#undef v11
#undef Stream
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20


//----- (0000000140174170) ----------------------------------------------------
__int64            sub_140174170(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // r14
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  BOOL v11; // r12d
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // r13d
  __int64 v20; // rcx
  int v21; // edx
  int v22; // eax
  unsigned __int64 *v23; // r15
  int v24; // ebx
  int v25; // edi
  unsigned __int64 *v26; // rsi
  int v27; // edi
  int v28; // r8d
  char v29; // di
  unsigned int v30; // ecx
  int v31; // edi
  char v32; // di
  int v33; // eax
  __int64 v34; // rdi
  int v35; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140174170[144];
#define v36 (*(int (*))(void *)(sr_frame_140174170 + 0)) /* [rsp+C0h] */
#define v37 (*(int (*))(void *)(sr_frame_140174170 + 4)) /* [rsp+C4h] */
#define v38 (*(int (*))(void *)(sr_frame_140174170 + 8)) /* [rsp+C8h] */
#define v39 (*(int (*))(void *)(sr_frame_140174170 + 16)) /* [rsp+D0h] */
#define v40 (*(__int64 (*))(void *)(sr_frame_140174170 + 24)) /* [rsp+D8h] */
#define v43 (*(int (*))(void *)(sr_frame_140174170 + 128)) /* [rsp+140h] */
#define v44 (*(int (*))(void *)(sr_frame_140174170 + 136)) /* [rsp+148h] */

  v43 = a3;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = a2;
  v9 = a4 - 1;
  v10 = 0;
  v11 = ((a4 - 2) & 0xFFFFFFFD) == 0;
  v44 = v11;
  if ( ((a4 - 2) & 0xFFFFFFFD) != 0 )
    v9 = a4;
  LOBYTE(v10) = v9 < 2;
  v12 = v10 + 2;
  if ( a3 < 0 || a2 < 0 )
    return 0;
  v13 = 8 * (v11 + v9);
  if ( !dword_1402B280C )
    return sub_140176DF0(
             v7,
             -1,
             -1,
             a2,
             a3,
             a4,
             0,
             a5,
             v11,
             0,
             "111 221 2222 11",
             0,
             0,
             v12,
             0,
             0,
             0,
             0,
             0,
             a2,
             a3,
             v13,
             8 * v11);
  sub_140177A80(v7, "111 221 2222 11", 0, 0, v12 + 8, 0, 0, 0, 0, 0, a2, a3, v13, 8 * v11);
  if ( dword_140404A6C[18215637] )
  {
    v15 = 0;
    v16 = 1;
  }
  else
  {
    v15 = v6 - 1;
    v6 = -1;
    v43 = -1;
    v16 = -1;
  }
  v37 = v16;
  v36 = v15;
  if ( v15 == v6 )
    goto LABEL_46;
  v17 = v5 * v8 * v15;
  v18 = v5 * v8 * v16;
  v38 = v17;
  v39 = v18;
  do
  {
    v19 = 0;
    v20 = a5 + v17;
    v40 = v20;
    if ( v8 <= 0 )
      goto LABEL_45;
    v21 = v8 - 1;
    do
    {
      v22 = 1;
      v23 = (unsigned __int64 *)(v20 + (int)v5 * v19);
      v24 = 1;
      if ( v19 < v21 )
      {
        v24 = 2;
        v22 = sub_1401FC820((unsigned __int64 *)(v20 + (int)v5 * v19), v20 + (int)v5 * (v19 + 1), v5);
        v25 = v19 + 2;
        if ( v22 )
        {
          v26 = v23;
          if ( v25 < a2 )
          {
            v27 = v5 * v25;
            while ( v24 < 128 )
            {
              if ( !(unsigned int)sub_1401FC820(v26, v40 + v27, v5) )
              {
                --v24;
                break;
              }
              ++v24;
              v26 = (unsigned __int64 *)((char *)v26 + v5);
              v27 += v5;
              if ( v24 + v19 >= a2 )
              {
                v28 = *(_DWORD *)(v7 + 80);
                v29 = v24;
                v8 = a2;
                v30 = v28 + 1;
                goto LABEL_32;
              }
            }
          }
          v28 = *(_DWORD *)(v7 + 80);
          v29 = v24;
          v8 = a2;
          v30 = v28 + 1;
LABEL_32:
          v32 = v29 - 1;
          v33 = v28;
          if ( v30 > 0x40 && v28 )
          {
            (*(void (           **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
            v33 = 0;
            *(_DWORD *)(v7 + 80) = 0;
          }
          v11 = v44;
          *(_BYTE *)(v33 + v7 + 16) = v32;
          ++*(_DWORD *)(v7 + 80);
          if ( v24 > 0 )
          {
            v34 = (unsigned int)v24;
            do
            {
              sub_1401776D0(v7, -1, v5, v44, 0, (__int64)v23);
              v23 = (unsigned __int64 *)((char *)v23 + v5);
              --v34;
            }
            while ( v34 );
            v8 = a2;
          }
          goto LABEL_43;
        }
        if ( v25 < v8 )
        {
          v31 = v5 * v25;
          do
          {
            if ( v24 >= 128 )
              break;
            if ( (unsigned int)sub_1401FC820(v23, v40 + v31, v5) )
              break;
            ++v24;
            v31 += v5;
          }
          while ( v24 + v19 < v8 );
          v7 = a1;
          v22 = 0;
        }
        v11 = v44;
      }
      v28 = *(_DWORD *)(v7 + 80);
      v29 = v24;
      v30 = v28 + 1;
      if ( v22 )
        goto LABEL_32;
      v35 = *(_DWORD *)(v7 + 80);
      if ( v30 > 0x40 && v28 )
      {
        (*(void (           **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
        v35 = 0;
        *(_DWORD *)(v7 + 80) = 0;
      }
      *(_BYTE *)(v35 + v7 + 16) = v24 + 127;
      ++*(_DWORD *)(v7 + 80);
      sub_1401776D0(v7, -1, v5, v11, 0, (__int64)v23);
LABEL_43:
      v20 = v40;
      v21 = v8 - 1;
      v19 += v24;
    }
    while ( v19 < v8 );
    v15 = v36;
    v6 = v43;
    v18 = v39;
LABEL_45:
    v15 += v37;
    v17 = v18 + v38;
    v36 = v15;
    v38 += v18;
  }
  while ( v15 != v6 );
LABEL_46:
  if ( *(_DWORD *)(v7 + 80) )
  {
    (*(void (           **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
    *(_DWORD *)(v7 + 80) = 0;
  }
  return 1;
}
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v43
#undef v44

// 1402B280C: using guessed type int dword_1402B280C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401745F0) ----------------------------------------------------
__int64            sub_1401745F0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401745F0[160];
#define v7 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 0)) /* [rsp+0h] */
#define v8 (*(_QWORD (*)[2])(void *)(sr_frame_1401745F0 + 48)) /* [rsp+30h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 64)) /* [rsp+40h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 80)) /* [rsp+50h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 96)) /* [rsp+60h] */
#define v12 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 112)) /* [rsp+70h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 128)) /* [rsp+80h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 144)) /* [rsp+90h] */

  v8[0] = a1;
  v8[1] = a2;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  sub_140174170((__int64)v8, a3, a4, a5, a6);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v14);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14


//----- (0000000140174680) ----------------------------------------------------
__m128i *           sub_140174680(__int64 a1, int a2, _DWORD *a3, int a4)
{
  __int64 v4; // rsi
       __m128i *v5; // rbx
  int v7; // ebp
  __m128i *result; // rax
  __m128i *v9; // r14
  int v10; // eax
  _DWORD *v11; // rax
  int v12; // edi
  int v13; // edi
  int *v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // r13d
  int v17; // r11d
  __int64 v18; // r13
  int v19; // r10d
  __int64 v20; // r15
  int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  __m128i **v24; // r12
  __m128i *v25; // r14
  int v26; // eax
  __int64 v27; // rsi
  __m128i *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r15
  int v31; // r8d
  unsigned __int64 v32; // rdx
  int v33; // esi
  __int8 *v34; // rcx
  __int64 v35; // rax
  __m128i *v36; // rax
  unsigned __int8 *v37; // r8
  int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  __int16 v41; // cx
  unsigned __int64 v42; // rdx
  __int64 v43; // r14
  int v44; // eax
  __int64 v45; // rsi
  int v46; // ecx
  __int64 v47; // r11
  __int64 v48; // r9
  int v49; // r8d
  __int64 v50; // r11
  int v51; // esi
  int v52; // r12d
  int v53; // edx
  int v54; // ecx
  __int64 v55; // r15
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // r8d
  int v60; // eax
  unsigned int v61; // r13d
  unsigned int v62; // edi
  __int32 *v63; // r14
  unsigned __int64 v64; // rbp
  int v65; // esi
  __int32 *v66; // rcx
  int *v67; // rax
  int v68; // ecx
  int v69; // r8d
  int v70; // eax
  __int32 *v71; // r14
  unsigned __int64 v72; // rbp
  int v73; // esi
  __int32 *v74; // rcx
  int *v75; // rax
  int v76; // ecx
  int v77; // r8d
  int v78; // eax
  __int32 *v79; // r14
  unsigned __int64 v80; // rbp
  int v81; // esi
  __int32 *v82; // rcx
  int *v83; // rax
  int v84; // ecx
  int v85; // r8d
  int v86; // eax
  __int32 *v87; // r14
  unsigned __int64 v88; // rbp
  int v89; // esi
  __int32 *v90; // rcx
  int *v91; // rax
  int v92; // r8d
  char v93; // cl
  __int32 *v94; // r14
  unsigned __int64 v95; // rbp
  int v96; // esi
  __int32 *v97; // rcx
  int *v98; // rax
  int v99; // ecx
  __int64 v100; // r15
  int v101; // eax
  int v102; // edx
  int v103; // r8d
  int v104; // eax
  char v105; // cl
  __int32 *v106; // r14
  unsigned __int64 v107; // rbp
  int v108; // esi
  __int32 *v109; // rcx
  int *v110; // rax
  int v111; // edx
  char v112; // cl
  __int32 *v113; // r14
  unsigned __int64 v114; // rbp
  int v115; // esi
  __int32 *v116; // rcx
  int *v117; // rax
  int v118; // r12d
  int v119; // ecx
  int v120; // ecx
  int v121; // edx
  int v122; // r8d
  int v123; // eax
  __int32 *v124; // r14
  unsigned __int64 v125; // rbp
  int v126; // esi
  __int32 *v127; // rcx
  int *v128; // rax
  int v129; // ecx
  int v130; // edx
  int v131; // r8d
  int v132; // eax
  __int32 *v133; // r14
  unsigned __int64 v134; // rbp
  int v135; // esi
  __int32 *v136; // rcx
  int *v137; // rax
  __int64 v138; // r15
  __int64 v139; // r12
  int v140; // ecx
  int v141; // edx
  int v142; // ecx
  int v143; // r8d
  int v144; // eax
  char v145; // cl
  __int32 *v146; // r14
  unsigned __int64 v147; // rbp
  int v148; // esi
  __int32 *v149; // rcx
  int *v150; // rax
  int v151; // ecx
  int v152; // r8d
  int v153; // eax
  char v154; // cl
  __int32 *v155; // r14
  unsigned __int64 v156; // rbp
  int v157; // esi
  __int32 *v158; // rcx
  int *v159; // rax
  int v160; // ecx
  int v161; // edx
  int v162; // r8d
  int v163; // eax
  char v164; // cl
  unsigned int v165; // r13d
  unsigned int v166; // edi
  __int32 *v167; // rsi
  unsigned __int64 v168; // r14
  int v169; // ebp
  __int32 *v170; // rcx
  int *v171; // rax
  __int32 *v172; // rsi
  unsigned __int64 v173; // r14
  int v174; // ebp
  __int32 *v175; // rcx
  int *v176; // rax
  __int64 v177; // rsi
  __int64 *v178; // rdi
  unsigned int v179; // r14d
  unsigned int v180; // edi
  __int64 v181; // r9
  __int64 v182; // r8
  __int64 i; // rcx
  int v184; // eax
  __m128i *v185; // rsi
  int v186; // ecx
  int v187; // ebp
  __m128i *v188; // rcx
  int *v189; // rax
  int v190; // ebp
  int *v191; // rax
  int v192; // edi
  int *v193; // rax
  int v194; // edi
  int *v195; // rax
  unsigned __int64 v196; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140174680[64];
#define v197 (*(int (*))(void *)(sr_frame_140174680 + 0)) /* [rsp+20h] */
#define v198 (*(__m128i * (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define v199 (*(__int64 (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define v200 (*(__int64 (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define v201 (*(int (*))(void *)(sr_frame_140174680 + 16)) /* [rsp+30h] */
#define v202 (*(int (*))(void *)(sr_frame_140174680 + 20)) /* [rsp+34h] */
#define v203 (*(__int64 (*))(void *)(sr_frame_140174680 + 24)) /* [rsp+38h] */
#define v204 (*(int (*))(void *)(sr_frame_140174680 + 32)) /* [rsp+40h] */
#define v205 (*(__int64 (*))(void *)(sr_frame_140174680 + 32)) /* [rsp+40h] */
#define Block (*(__m128i * (*))(void *)(sr_frame_140174680 + 40)) /* [rsp+48h] */
#define v207 (*(unsigned __int8 * (*))(void *)(sr_frame_140174680 + 48)) /* [rsp+50h] */

  v4 = a1;
  v5 = nullptr;
  v198 = nullptr;
  v7 = a2;
  result = (__m128i *)sr_path_malloc(0x20000);
  Block = result;
  v9 = result;
  if ( !result )
    return result;
  v10 = 5;
  if ( a4 >= 5 )
    v10 = a4;
  v204 = v10;
  v11 = (_DWORD *)j__realloc_base_sr(0, 10);
  if ( v11 )
  {
    v5 = (     __m128i *)(v11 + 2);
    v11[1] = 0;
    v198 = (     __m128i *)(v11 + 2);
    *v11 = 2;
  }
  else
  {
    sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = 120;
  v12 = SR_VEC_LANES(128, v5[-1], i32)[2];
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= v12 )
  {
    v13 = 2 * v12 + 1;
    v14 = (int *)j__realloc_base_sr(&SR_VEC_LANES(128, v5[-1], u64)[1], v13 + 8LL);
    if ( v14 )
    {
      v5 = (     __m128i *)(v14 + 2);
      *v14 = v13;
      v198 = (     __m128i *)(v14 + 2);
    }
    else
    {
      sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  v15 = 3;
  v197 = 3;
  v16 = 3;
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = 94;
  sub_1401FCD30((void *)(uintptr_t)(v9), 0, 0x20000u);
  v202 = 0;
  v17 = 0;
  if ( v7 - 3 <= 0 )
    goto LABEL_229;
  while ( 1 )
  {
    v18 = v17;
    v19 = 3;
    v20 = 0;
    v207 = (unsigned __int8 *)(v4 + v17);
    v21 = *v207 + (v207[1] << 8) + (v207[2] << 16);
    v201 = 3;
    v203 = 0;
    v22 = (((8 * v21) ^ (unsigned int)v21) >> 5) + ((8 * v21) ^ v21);
    v23 = (((16 * v22) ^ v22) >> 17) + ((16 * v22) ^ v22);
    v24 = (__m128i **)v9 + (((_WORD)v23 + (unsigned __int16)(((v23 << 25) ^ v23) >> 6)) & 0x3FFF);
    v25 = *v24;
    if ( *v24 )
      v26 = SR_VEC_LANES(128, v25[-1], i32)[3];
    else
      v26 = 0;
    v27 = 0;
    v28 = *v24;
    if ( v26 > 0 )
    {
      v29 = a1;
      v30 = v17 - 0x8000;
      do
      {
        if ( SR_VEC_PTR_LANES(128, v25, i64)[v27] - v29 > v30 )
        {
          v31 = 0;
          v32 = 0;
          if ( a2 - v17 > 0 )
          {
            do
            {
              if ( v32 >= 0x102 )
                break;
              if ( *(_BYTE *)(SR_VEC_PTR_LANES(128, v25, i64)[v27] + v32) != *(_BYTE *)(v32 + v29 + v18) )
                break;
              ++v31;
              ++v32;
            }
            while ( (__int64)v32 < a2 - v17 );
            v19 = v201;
            v17 = v202;
            v29 = a1;
          }
          if ( v31 >= v19 )
          {
            v19 = v31;
            v201 = v31;
            v203 = SR_VEC_PTR_LANES(128, v25, i64)[v27];
          }
        }
        ++v27;
      }
      while ( v27 < v26 );
      v5 = v198;
      v20 = v203;
      v28 = *v24;
    }
    if ( v25 && SR_VEC_LANES(128, v25[-1], i32)[3] == 2 * v204 )
    {
      sub_1401FC920(v25, (__m128i *)((char *)v25 + 8 * v204), 8LL * v204);
      SR_VEC_LANES(128, (*v24)[-1], i32)[3] = v204;
      v28 = *v24;
    }
    if ( v28 )
    {
      if ( SR_VEC_LANES(128, v28[-1], i32)[3] + 1 < SR_VEC_LANES(128, v28[-1], i32)[2] )
        goto LABEL_43;
      v33 = 2 * SR_VEC_LANES(128, v28[-1], i32)[2] + 1;
    }
    else
    {
      v33 = 2;
    }
    v34 = &SR_VEC_LANES(128, v28[-1], i8)[8];
    if ( !v28 )
      v34 = nullptr;
    v35 = j__realloc_base_sr(v34, 8 * v33 + 8LL);
    if ( v35 )
    {
      if ( !*v24 )
        *(_DWORD *)(v35 + 4) = 0;
      v36 = (__m128i *)(v35 + 8);
      *v24 = v36;
      SR_VEC_LANES(128, v36[-1], i32)[2] = v33;
    }
    else
    {
      sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
LABEL_43:
    v37 = v207;
    SR_VEC_PTR_LANES(128, (*v24), i64)[SR_VEC_LANES(128, (*v24)[-1], i32)[3]++] = (__int64)v207;
    if ( !v20 )
      goto LABEL_192;
    v38 = v207[1] + (v207[2] << 8) + (v207[3] << 16);
    v39 = (((8 * v38) ^ (unsigned int)v38) >> 5) + ((8 * v38) ^ v38);
    v40 = (((16 * v39) ^ v39) >> 17) + ((16 * v39) ^ v39);
    v41 = v40 + (((v40 << 25) ^ v40) >> 6);
    v42 = 0;
    v43 = SR_VEC_PTR_LANES(128, Block, i64)[v41 & 0x3FFF];
    if ( v43 )
      v44 = *(_DWORD *)(v43 - 4);
    else
      v44 = 0;
    v45 = 0;
    if ( v44 > 0 )
    {
      v46 = v202;
      v47 = a1;
      do
      {
        v48 = *(_QWORD *)(v43 + 8 * v45);
        if ( v48 - v47 > v202 - 0x7FFF )
        {
          v49 = 0;
          if ( a2 - v46 - 1 > 0 )
          {
            v50 = v18 - v48 + v47;
            do
            {
              if ( v42 >= 0x102 )
                break;
              if ( *(_BYTE *)(v48 + v42) != *(_BYTE *)(v48 + v42 + v50 + 1) )
                break;
              ++v49;
              ++v42;
            }
            while ( (__int64)v42 < a2 - v46 - 1 );
            v46 = v202;
            v47 = a1;
          }
          if ( v49 > v201 )
          {
            v37 = v207;
LABEL_192:
            v119 = *v37;
            if ( (unsigned __int8)v119 <= 0x8Fu )
            {
              v120 = v119 + 48;
              v121 = 0;
              v122 = 8;
              do
              {
                v123 = v120 & 1;
                v120 >>= 1;
                v121 = v123 | (2 * v121);
                --v122;
              }
              while ( v122 );
              v16 = v197 + 8;
              v15 |= v121 << v197;
              v197 = v16;
              if ( (int)v16 < 8 )
                goto LABEL_227;
              v124 = &SR_VEC_LANES(128, v5[-1], i32)[2];
              v125 = (unsigned __int64)v16 >> 3;
              v197 = v16 - 8 * (v16 >> 3);
              while ( 2 )
              {
                if ( v5 )
                {
                  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v124 )
                  {
                    v126 = 2 * *v124 + 1;
                    goto LABEL_201;
                  }
                }
                else
                {
                  v126 = 2;
LABEL_201:
                  v127 = v124;
                  if ( !v5 )
                    v127 = nullptr;
                  v128 = (int *)j__realloc_base_sr(v127, v126 + 8LL);
                  if ( v128 )
                  {
                    if ( !v5 )
                      v128[1] = 0;
                    v5 = (     __m128i *)(v128 + 2);
                    v124 = v128;
                    *v128 = v126;
                  }
                  else
                  {
                    sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
                  }
                }
                SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
                v15 >>= 8;
                if ( !--v125 )
                  goto LABEL_226;
                continue;
              }
            }
            v129 = v119 + 256;
            v130 = 0;
            v131 = 9;
            do
            {
              v132 = v129 & 1;
              v129 >>= 1;
              v130 = v132 | (2 * v130);
              --v131;
            }
            while ( v131 );
            v16 = v197 + 9;
            v15 |= v130 << v197;
            v197 = v16;
            if ( (int)v16 < 8 )
              goto LABEL_227;
            v133 = &SR_VEC_LANES(128, v5[-1], i32)[2];
            v134 = (unsigned __int64)v16 >> 3;
            v197 = v16 - 8 * (v16 >> 3);
            while ( 2 )
            {
              if ( v5 )
              {
                if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v133 )
                {
                  v135 = 2 * *v133 + 1;
                  goto LABEL_218;
                }
              }
              else
              {
                v135 = 2;
LABEL_218:
                v136 = v133;
                if ( !v5 )
                  v136 = nullptr;
                v137 = (int *)j__realloc_base_sr(v136, v135 + 8LL);
                if ( v137 )
                {
                  if ( !v5 )
                    v137[1] = 0;
                  v5 = (     __m128i *)(v137 + 2);
                  v133 = v137;
                  *v137 = v135;
                }
                else
                {
                  sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
                }
              }
              SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
              v15 >>= 8;
              if ( !--v134 )
              {
LABEL_226:
                v16 = v197;
LABEL_227:
                v198 = v5;
                v118 = 1;
                goto LABEL_228;
              }
              continue;
            }
          }
          v42 = 0;
        }
        ++v45;
      }
      while ( v45 < v44 );
      LODWORD(v20) = v203;
    }
    v51 = v201;
    v52 = v202 + a1 - v20;
    if ( v52 > 0x7FFF || v201 > 258 )
      sub_14023E640(
        (char *)L"d <= 32767 && best <= 258",
        (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
        0x3B2u);
    v53 = 0;
    v199 = 0;
    v54 = 0;
    v55 = 0;
    if ( v201 > (unsigned __int16)word_1403018C2 - 1 )
    {
      do
      {
        v56 = (unsigned __int16)word_1403018C4[v55++];
        ++v54;
      }
      while ( v201 > v56 - 1 );
      v199 = v55;
    }
    v57 = v54 + 257;
    if ( v54 + 257 <= 143 )
    {
      v58 = v54 + 305;
      v59 = 8;
      do
      {
        v60 = v58 & 1;
        v58 >>= 1;
        v53 = v60 | (2 * v53);
        --v59;
      }
      while ( v59 );
      v61 = v197 + 8;
      v62 = (v53 << v197) | v15;
      if ( v197 + 8 >= 8 )
      {
        v63 = &SR_VEC_LANES(128, v5[-1], i32)[2];
        v64 = (unsigned __int64)v61 >> 3;
        v61 -= 8 * (v61 >> 3);
        while ( v5 )
        {
          if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v63 )
          {
            v65 = 2 * *v63 + 1;
LABEL_75:
            v66 = v63;
            if ( !v5 )
              v66 = nullptr;
            v67 = (int *)j__realloc_base_sr(v66, v65 + 8LL);
            if ( v67 )
            {
              if ( !v5 )
                v67[1] = 0;
              v5 = (     __m128i *)(v67 + 2);
              v63 = v67;
              *v67 = v65;
            }
            else
            {
              sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
          v62 >>= 8;
          if ( !--v64 )
            goto LABEL_136;
        }
        v65 = 2;
        goto LABEL_75;
      }
      goto LABEL_137;
    }
    if ( v57 > 255 )
    {
      if ( v57 <= 279 )
      {
        v76 = v54 + 1;
        v77 = 7;
        do
        {
          v78 = v76 & 1;
          v76 >>= 1;
          v53 = v78 | (2 * v53);
          --v77;
        }
        while ( v77 );
        v61 = v197 + 7;
        v62 = (v53 << v197) | v15;
        if ( v197 + 7 < 8 )
          goto LABEL_137;
        v79 = &SR_VEC_LANES(128, v5[-1], i32)[2];
        v80 = (unsigned __int64)v61 >> 3;
        v61 -= 8 * (v61 >> 3);
        while ( v5 )
        {
          if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v79 )
          {
            v81 = 2 * *v79 + 1;
LABEL_111:
            v82 = v79;
            if ( !v5 )
              v82 = nullptr;
            v83 = (int *)j__realloc_base_sr(v82, v81 + 8LL);
            if ( v83 )
            {
              if ( !v5 )
                v83[1] = 0;
              v5 = (     __m128i *)(v83 + 2);
              v79 = v83;
              *v83 = v81;
            }
            else
            {
              sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
          v62 >>= 8;
          if ( !--v80 )
            goto LABEL_136;
        }
        v81 = 2;
        goto LABEL_111;
      }
      v84 = v54 + 169;
      v85 = 8;
      do
      {
        v86 = v84 & 1;
        v84 >>= 1;
        v53 = v86 | (2 * v53);
        --v85;
      }
      while ( v85 );
      v61 = v197 + 8;
      v62 = (v53 << v197) | v15;
      if ( v197 + 8 < 8 )
        goto LABEL_137;
      v87 = &SR_VEC_LANES(128, v5[-1], i32)[2];
      v88 = (unsigned __int64)v61 >> 3;
      v61 -= 8 * (v61 >> 3);
      while ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v87 )
        {
          v89 = 2 * *v87 + 1;
LABEL_128:
          v90 = v87;
          if ( !v5 )
            v90 = nullptr;
          v91 = (int *)j__realloc_base_sr(v90, v89 + 8LL);
          if ( v91 )
          {
            if ( !v5 )
              v91[1] = 0;
            v5 = (     __m128i *)(v91 + 2);
            v87 = v91;
            *v91 = v89;
          }
          else
          {
            sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
        v62 >>= 8;
        if ( !--v88 )
        {
LABEL_136:
          v55 = v199;
          v51 = v201;
          goto LABEL_137;
        }
      }
      v89 = 2;
      goto LABEL_128;
    }
    v68 = v54 + 513;
    v69 = 9;
    do
    {
      v70 = v68 & 1;
      v68 >>= 1;
      v53 = v70 | (2 * v53);
      --v69;
    }
    while ( v69 );
    v61 = v197 + 9;
    v62 = (v53 << v197) | v15;
    if ( v197 + 9 >= 8 )
    {
      v71 = &SR_VEC_LANES(128, v5[-1], i32)[2];
      v72 = (unsigned __int64)v61 >> 3;
      v61 -= 8 * (v61 >> 3);
      while ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v71 )
        {
          v73 = 2 * *v71 + 1;
LABEL_93:
          v74 = v71;
          if ( !v5 )
            v74 = nullptr;
          v75 = (int *)j__realloc_base_sr(v74, v73 + 8LL);
          if ( v75 )
          {
            if ( !v5 )
              v75[1] = 0;
            v5 = (     __m128i *)(v75 + 2);
            v71 = v75;
            *v75 = v73;
          }
          else
          {
            sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
        v62 >>= 8;
        if ( !--v72 )
          goto LABEL_136;
      }
      v73 = 2;
      goto LABEL_93;
    }
LABEL_137:
    v198 = v5;
    v92 = byte_140301900[v55];
    if ( !(_BYTE)v92 )
      goto LABEL_154;
    v93 = v61;
    v61 += v92;
    v62 |= (v51 - (unsigned __int16)word_1403018C0[v55]) << v93;
    if ( (int)v61 < 8 )
      goto LABEL_153;
    v94 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v95 = (unsigned __int64)v61 >> 3;
    do
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 < *v94 )
          goto LABEL_151;
        v96 = 2 * *v94 + 1;
      }
      else
      {
        v96 = 2;
      }
      v97 = v94;
      if ( !v5 )
        v97 = nullptr;
      v98 = (int *)j__realloc_base_sr(v97, v96 + 8LL);
      if ( v98 )
      {
        if ( !v5 )
          v98[1] = 0;
        v5 = (     __m128i *)(v98 + 2);
        v94 = v98;
        *v98 = v96;
      }
      else
      {
        sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
      }
LABEL_151:
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
      v62 >>= 8;
      --v95;
    }
    while ( v95 );
    v61 -= 8 * (v61 >> 3);
LABEL_153:
    v198 = v5;
LABEL_154:
    v99 = 0;
    v100 = 0;
    if ( v52 > (unsigned __int16)word_140301922 - 1 )
    {
      do
      {
        v101 = (unsigned __int16)word_140301924[v100++];
        ++v99;
      }
      while ( v52 > v101 - 1 );
    }
    v102 = 0;
    v103 = 5;
    do
    {
      v104 = v99 & 1;
      v99 >>= 1;
      v102 = v104 | (2 * v102);
      --v103;
    }
    while ( v103 );
    v105 = v61;
    v16 = v61 + 5;
    v15 = (v102 << v105) | v62;
    v197 = v16;
    if ( (int)v16 >= 8 )
    {
      v106 = &SR_VEC_LANES(128, v5[-1], i32)[2];
      v107 = (unsigned __int64)v16 >> 3;
      v197 = v16 - 8 * (v16 >> 3);
      while ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v106 )
        {
          v108 = 2 * *v106 + 1;
LABEL_164:
          v109 = v106;
          if ( !v5 )
            v109 = nullptr;
          v110 = (int *)j__realloc_base_sr(v109, v108 + 8LL);
          if ( v110 )
          {
            if ( !v5 )
              v110[1] = 0;
            v5 = (     __m128i *)(v110 + 2);
            v106 = v110;
            *v110 = v108;
          }
          else
          {
            sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
        v15 >>= 8;
        if ( !--v107 )
        {
          v16 -= 8 * (v16 >> 3);
          v198 = v5;
          goto LABEL_173;
        }
      }
      v108 = 2;
      goto LABEL_164;
    }
LABEL_173:
    v111 = byte_140301960[v100];
    if ( !(_BYTE)v111 )
      goto LABEL_190;
    v112 = v16;
    v16 += v111;
    v15 |= (v52 - (unsigned __int16)word_140301920[v100]) << v112;
    v197 = v16;
    if ( (int)v16 < 8 )
      goto LABEL_189;
    v113 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v114 = (unsigned __int64)v16 >> 3;
    v197 = v16 - 8 * (v16 >> 3);
    while ( 2 )
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v113 )
        {
          v115 = 2 * *v113 + 1;
          goto LABEL_180;
        }
      }
      else
      {
        v115 = 2;
LABEL_180:
        v116 = v113;
        if ( !v5 )
          v116 = nullptr;
        v117 = (int *)j__realloc_base_sr(v116, v115 + 8LL);
        if ( v117 )
        {
          if ( !v5 )
            v117[1] = 0;
          v5 = (     __m128i *)(v117 + 2);
          v113 = v117;
          *v117 = v115;
        }
        else
        {
          sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
      v15 >>= 8;
      if ( --v114 )
        continue;
      break;
    }
    v16 -= 8 * (v16 >> 3);
LABEL_189:
    v198 = v5;
LABEL_190:
    v118 = v201;
LABEL_228:
    v7 = a2;
    v17 = v118 + v202;
    v4 = a1;
    v202 = v17;
    if ( v17 >= a2 - 3 )
      break;
    v9 = Block;
  }
LABEL_229:
  v138 = v17;
  v139 = v7;
  v205 = v17;
  v200 = v7;
  if ( v17 < (__int64)v7 )
  {
    while ( 1 )
    {
      v140 = *(unsigned __int8 *)(v138 + v4);
      v141 = 0;
      if ( (unsigned __int8)v140 > 0x8Fu )
        break;
      v142 = v140 + 48;
      v143 = 8;
      do
      {
        v144 = v142 & 1;
        v142 >>= 1;
        v141 = v144 | (2 * v141);
        --v143;
      }
      while ( v143 );
      v145 = v16;
      v16 += 8;
      v15 |= v141 << v145;
      if ( (int)v16 >= 8 )
      {
        v146 = &SR_VEC_LANES(128, v5[-1], i32)[2];
        v147 = (unsigned __int64)v16 >> 3;
        v16 -= 8 * (v16 >> 3);
        while ( v5 )
        {
          if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v146 )
          {
            v148 = 2 * *v146 + 1;
LABEL_239:
            v149 = v146;
            if ( !v5 )
              v149 = nullptr;
            v150 = (int *)j__realloc_base_sr(v149, v148 + 8LL);
            if ( v150 )
            {
              if ( !v5 )
                v150[1] = 0;
              v5 = (     __m128i *)(v150 + 2);
              v146 = v150;
              *v150 = v148;
            }
            else
            {
              sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
          v15 >>= 8;
          if ( !--v147 )
            goto LABEL_264;
        }
        v148 = 2;
        goto LABEL_239;
      }
LABEL_265:
      v205 = ++v138;
      if ( v138 >= v139 )
        goto LABEL_266;
    }
    v151 = v140 + 256;
    v152 = 9;
    do
    {
      v153 = v151 & 1;
      v151 >>= 1;
      v141 = v153 | (2 * v141);
      --v152;
    }
    while ( v152 );
    v154 = v16;
    v16 += 9;
    v15 |= v141 << v154;
    if ( (int)v16 < 8 )
      goto LABEL_265;
    v155 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v156 = (unsigned __int64)v16 >> 3;
    v16 -= 8 * (v16 >> 3);
    while ( 2 )
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v155 )
        {
          v157 = 2 * *v155 + 1;
          goto LABEL_256;
        }
      }
      else
      {
        v157 = 2;
LABEL_256:
        v158 = v155;
        if ( !v5 )
          v158 = nullptr;
        v159 = (int *)j__realloc_base_sr(v158, v157 + 8LL);
        if ( v159 )
        {
          if ( !v5 )
            v159[1] = 0;
          v5 = (     __m128i *)(v159 + 2);
          v155 = v159;
          *v159 = v157;
        }
        else
        {
          sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
      v15 >>= 8;
      if ( !--v156 )
      {
LABEL_264:
        v4 = a1;
        v139 = v200;
        v138 = v205;
        goto LABEL_265;
      }
      continue;
    }
  }
LABEL_266:
  v160 = 0;
  v161 = 0;
  v162 = 7;
  do
  {
    v163 = v160 & 1;
    v160 >>= 1;
    v161 = v163 | (2 * v161);
    --v162;
  }
  while ( v162 );
  v164 = v16;
  v165 = v16 + 7;
  v166 = (v161 << v164) | v15;
  if ( (int)v165 >= 8 )
  {
    v167 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v168 = (unsigned __int64)v165 >> 3;
    v165 -= 8 * (v165 >> 3);
    while ( v5 )
    {
      if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v167 )
      {
        v169 = 2 * *v167 + 1;
LABEL_274:
        v170 = v167;
        if ( !v5 )
          v170 = nullptr;
        v171 = (int *)j__realloc_base_sr(v170, v169 + 8LL);
        if ( v171 )
        {
          if ( !v5 )
            v171[1] = 0;
          v5 = (     __m128i *)(v171 + 2);
          v167 = v171;
          *v171 = v169;
        }
        else
        {
          sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v166;
      v166 >>= 8;
      if ( !--v168 )
      {
        v139 = v200;
        goto LABEL_283;
      }
    }
    v169 = 2;
    goto LABEL_274;
  }
LABEL_283:
  if ( v165 )
  {
    while ( (int)++v165 < 8 )
    {
LABEL_298:
      if ( !v165 )
      {
        v139 = v200;
        goto LABEL_300;
      }
    }
    v172 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v173 = (unsigned __int64)v165 >> 3;
    v165 -= 8 * (v165 >> 3);
    while ( 2 )
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v172 )
        {
          v174 = 2 * *v172 + 1;
          goto LABEL_290;
        }
      }
      else
      {
        v174 = 2;
LABEL_290:
        v175 = v172;
        if ( !v5 )
          v175 = nullptr;
        v176 = (int *)j__realloc_base_sr(v175, v174 + 8LL);
        if ( v176 )
        {
          if ( !v5 )
            v176[1] = 0;
          v5 = (     __m128i *)(v176 + 2);
          v172 = v176;
          *v176 = v174;
        }
        else
        {
          sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v166;
      v166 >>= 8;
      if ( !--v173 )
        goto LABEL_298;
      continue;
    }
  }
LABEL_300:
  v177 = 0x4000;
  v178 = (__int64 *)Block;
  do
  {
    if ( *v178 )
      free((void *)(*v178 - 8));
    ++v178;
    --v177;
  }
  while ( v177 );
  free(Block);
  v179 = 1;
  v180 = 0;
  if ( v139 > 0 )
  {
    v181 = 0;
    v182 = a2 % 5552;
    do
    {
      for ( i = 0; i < v182; v180 += v179 )
      {
        v184 = *(unsigned __int8 *)(v181 + a1 + i++);
        v179 += v184;
      }
      v181 += v182;
      v182 = 5552;
      v179 %= 0xFFF1u;
      v180 %= 0xFFF1u;
    }
    while ( v181 < v139 );
  }
  if ( v5 )
  {
    v185 = (__m128i *)&SR_VEC_LANES(128, v5[-1], u64)[1];
    v186 = SR_VEC_LANES(128, v5[-1], i32)[2];
    if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= v186 )
    {
      v187 = 2 * v186 + 1;
      goto LABEL_313;
    }
  }
  else
  {
    v185 = (__m128i *)-8LL;
    v187 = 2;
LABEL_313:
    v188 = v185;
    if ( !v5 )
      v188 = nullptr;
    v189 = (int *)j__realloc_base_sr(v188, v187 + 8LL);
    if ( v189 )
    {
      if ( !v5 )
        v189[1] = 0;
      v5 = (     __m128i *)(v189 + 2);
      v185 = (__m128i *)v189;
      *v189 = v187;
    }
    else
    {
      sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = BYTE1(v180);
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, v185, i32)[0] )
  {
    v190 = 2 * SR_VEC_PTR_LANES(128, v185, i32)[0] + 1;
    v191 = (int *)j__realloc_base_sr(v185, v190 + 8LL);
    if ( v191 )
    {
      v5 = (     __m128i *)(v191 + 2);
      v185 = (__m128i *)v191;
      *v191 = v190;
    }
    else
    {
      sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v180;
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, v185, i32)[0] )
  {
    v192 = 2 * SR_VEC_PTR_LANES(128, v185, i32)[0] + 1;
    v193 = (int *)j__realloc_base_sr(v185, v192 + 8LL);
    if ( v193 )
    {
      v5 = (     __m128i *)(v193 + 2);
      v185 = (__m128i *)v193;
      *v193 = v192;
    }
    else
    {
      sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = BYTE1(v179);
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, v185, i32)[0] )
  {
    v194 = 2 * SR_VEC_PTR_LANES(128, v185, i32)[0] + 1;
    v195 = (int *)j__realloc_base_sr(v185, v194 + 8LL);
    if ( v195 )
    {
      v5 = (     __m128i *)(v195 + 2);
      v185 = (__m128i *)v195;
      *v195 = v194;
    }
    else
    {
      sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v179;
  v196 = SR_VEC_LANES(128, v5[-1], i32)[3];
  *a3 = v196;
  sub_1401FC920(v185, v5, v196);
  return v185;
}
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204
#undef v205
#undef Block
#undef v207

// 140174966: conditional instruction was optimized away because r8.8!=0
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140273670: using guessed type __int16[52];
// 1402737D0: using guessed type __int16[26];
// 1403018C0: using guessed type __int16 word_1403018C0[];
// 1403018C2: using guessed type __int16 word_1403018C2;
// 1403018C4: using guessed type __int16 word_1403018C4[46];
// 140301900: using guessed type unsigned __int8 byte_140301900[32];
// 140301920: using guessed type __int16 word_140301920[];
// 140301922: using guessed type __int16 word_140301922;
// 140301924: using guessed type __int16 word_140301924[46];
// 140301960: using guessed type unsigned __int8 byte_140301960[32];

//----- (0000000140175A20) ----------------------------------------------------
__int64            sub_140175A20(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp-20h] [rbp-2070h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175A20[4112];
#define v6 (*(_QWORD (*)[6])(void *)(sr_frame_140175A20 + 0)) /* [rsp+0h] */
#define v7 (*(int (*))(void *)(sr_frame_140175A20 + 48)) /* [rsp+30h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_140175A20 + 4096)) /* [rsp+1000h] */

  v6[4] = a1;
  v6[1] = a3 + a4;
  v6[3] = a1;
  v6[5] = a1 + a2;
  v6[0] = a3;
  v7 = 0;
  sub_140168E00((__int64)v6, 1);
  return sub_1401F8B20((unsigned __int64)&v5 ^ v8);
}
#undef v6
#undef v7
#undef v8


//----- (0000000140175AC0) ----------------------------------------------------
__int64            sub_140175AC0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rsi
  char *v6; // r8
  __int64 v8; // [rsp-20h] [rbp-2078h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175AC0[4112];
#define v9 (*(_QWORD (*)[3])(void *)(sr_frame_140175AC0 + 0)) /* [rsp+0h] */
#define v10 (*(char * (*))(void *)(sr_frame_140175AC0 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175AC0 + 32)) /* [rsp+20h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175AC0 + 40)) /* [rsp+28h] */
#define v13 (*(int (*))(void *)(sr_frame_140175AC0 + 48)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140175AC0 + 4096)) /* [rsp+1000h] */

  v4 = a2;
  v6 = (char *)sr_path_malloc(0x4000);
  if ( v6 )
  {
    v9[0] = a1;
    v9[1] = a1 + v4;
    Block = v6;
    v12 = v6 + 0x4000;
    v10 = v6;
    v13 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v9, 1) )
    {
      if ( a3 )
        *a3 = (_DWORD)v10 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return sub_1401F8B20((unsigned __int64)&v8 ^ v14);
}
#undef v9
#undef v10
#undef Block
#undef v12
#undef v13
#undef v14

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140175B80) ----------------------------------------------------
__int64            sub_140175B80(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  char *v8; // r8
  __int64 v10; // [rsp-20h] [rbp-2090h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175B80[4112];
#define v11 (*(_QWORD (*)[3])(void *)(sr_frame_140175B80 + 0)) /* [rsp+0h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175B80 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175B80 + 32)) /* [rsp+20h] */
#define v14 (*(char * (*))(void *)(sr_frame_140175B80 + 40)) /* [rsp+28h] */
#define v15 (*(int (*))(void *)(sr_frame_140175B80 + 48)) /* [rsp+30h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140175B80 + 4096)) /* [rsp+1000h] */

  v4 = a3;
  v6 = a2;
  v8 = (char *)sr_path_malloc(a3);
  if ( v8 )
  {
    v11[0] = a1;
    v11[1] = a1 + v6;
    Block = v8;
    v14 = &v8[v4];
    v12 = v8;
    v15 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v11, 1) )
    {
      if ( a4 )
        *a4 = (_DWORD)v12 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return sub_1401F8B20((unsigned __int64)&v10 ^ v16);
}
#undef v11
#undef v12
#undef Block
#undef v14
#undef v15
#undef v16

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140175C40) ----------------------------------------------------
__int64            sub_140175C40(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  char *v8; // r8
  __int64 v10; // [rsp-20h] [rbp-2090h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175C40[4208];
#define v11 (*(_QWORD (*)[3])(void *)(sr_frame_140175C40 + 0)) /* [rsp+0h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175C40 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175C40 + 32)) /* [rsp+20h] */
#define v14 (*(char * (*))(void *)(sr_frame_140175C40 + 40)) /* [rsp+28h] */
#define v15 (*(int (*))(void *)(sr_frame_140175C40 + 48)) /* [rsp+30h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140175C40 + 4096)) /* [rsp+1000h] */
#define v17 (*(int (*))(void *)(sr_frame_140175C40 + 4192)) /* [rsp+1060h] */

  v4 = a3;
  v6 = a2;
  v8 = (char *)sr_path_malloc(a3);
  if ( v8 )
  {
    v11[1] = a1 + v6;
    v11[0] = a1;
    v14 = &v8[v4];
    Block = v8;
    v12 = v8;
    v15 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v11, v17) )
    {
      if ( a4 )
        *a4 = (_DWORD)v12 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return sub_1401F8B20((unsigned __int64)&v10 ^ v16);
}
#undef v11
#undef v12
#undef Block
#undef v14
#undef v15
#undef v16
#undef v17

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140175D00) ----------------------------------------------------
__int64            sub_140175D00(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp-20h] [rbp-2070h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175D00[4112];
#define v6 (*(_QWORD (*)[6])(void *)(sr_frame_140175D00 + 0)) /* [rsp+0h] */
#define v7 (*(int (*))(void *)(sr_frame_140175D00 + 48)) /* [rsp+30h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_140175D00 + 4096)) /* [rsp+1000h] */

  v6[4] = a1;
  v6[1] = a3 + a4;
  v6[3] = a1;
  v6[5] = a1 + a2;
  v6[0] = a3;
  v7 = 0;
  sub_140168E00((__int64)v6, 0);
  return sub_1401F8B20((unsigned __int64)&v5 ^ v8);
}
#undef v6
#undef v7
#undef v8


//----- (0000000140175DA0) ----------------------------------------------------
__int64            sub_140175DA0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rsi
  char *v6; // r8
  __int64 v8; // [rsp-20h] [rbp-2078h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175DA0[4112];
#define v9 (*(_QWORD (*)[3])(void *)(sr_frame_140175DA0 + 0)) /* [rsp+0h] */
#define v10 (*(char * (*))(void *)(sr_frame_140175DA0 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175DA0 + 32)) /* [rsp+20h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175DA0 + 40)) /* [rsp+28h] */
#define v13 (*(int (*))(void *)(sr_frame_140175DA0 + 48)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140175DA0 + 4096)) /* [rsp+1000h] */

  v4 = a2;
  v6 = (char *)sr_path_malloc(0x4000);
  if ( v6 )
  {
    v9[0] = a1;
    v9[1] = a1 + v4;
    Block = v6;
    v12 = v6 + 0x4000;
    v10 = v6;
    v13 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v9, 0) )
    {
      if ( a3 )
        *a3 = (_DWORD)v10 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return sub_1401F8B20((unsigned __int64)&v8 ^ v14);
}
#undef v9
#undef v10
#undef Block
#undef v12
#undef v13
#undef v14

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140175E60) ----------------------------------------------------
__int64            sub_140175E60(__int64 a1, int a2)
{
  unsigned int v2; // eax
  __int64 i; // r10
  unsigned __int64 v4; // r9

  v2 = -1;
  if ( a2 > 0 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v4 = *(unsigned __int8 *)(i + a1);
      v2 = (v2 >> 8) ^ dword_140301980[(unsigned __int8)v2 ^ v4];
    }
  }
  return ~v2;
}

// 140301980: using guessed type _DWORD dword_140301980[182];

//----- (0000000140175EB0) ----------------------------------------------------
unsigned __int8            sub_140175EB0(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, __m128i *a8)
{
  int v8; // r10d
  _DWORD *v11; // rdx
  int v12; // r9d
  int v13; // ebp
       __m128i *v14; // rdx
  unsigned __int8 result; // al
  __int64 v16; // r14
       __m128i *v17; // r9
  __int64 v18; // rdi
  __int8 v19; // al
  __int8 v20; // cl
  int v21; // r11d
  __int8 *v22; // r9
  __int64 v23; // r10
  int v24; // r11d
  __int8 *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r9
  __int8 *v28; // r11
  __int64 v29; // r9
  int v30; // eax
  int v31; // ecx
  int v32; // r11d
  unsigned __int8 *v33; // rdi
  __int8 *v34; // r15
  __int64 v35; // rsi
  int v36; // r11d
  __int8 *v37; // r9
  __int64 v38; // r10
  int v39; // r11d
  __int8 *v40; // r9
  __int64 v41; // r10

  v8 = a5;
  v11 = &unk_140301D98;
  if ( a5 )
    v11 = &unk_140301D80;
  v12 = a4 - a5 - 1;
  v13 = v11[a7];
  if ( dword_140404A6C[18215637] )
    v8 = v12;
  v14 = (     __m128i *)(a1 + a2 * v8);
  if ( dword_140404A6C[18215637] )
    a2 = -a2;
  if ( !v13 )
    return (unsigned __int8)sub_1401FC920(a8, v14, a6 * a3);
  v16 = a2;
  if ( a6 > 0 )
  {
    v17 = v14;
    v18 = a6;
    do
    {
      switch ( v13 )
      {
        case 1:
        case 5:
        case 6:
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0];
          goto LABEL_18;
        case 2:
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0] - SR_VEC_PTR_LANES(128, v17, i8)[-a2];
          goto LABEL_18;
        case 3:
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0] - ((unsigned __int8)SR_VEC_PTR_LANES(128, v17, i8)[-a2] >> 1);
          goto LABEL_18;
        case 4:
          v20 = 0;
          if ( SR_VEC_PTR_LANES(128, v17, i8)[-a2] )
            v20 = SR_VEC_PTR_LANES(128, v17, i8)[-a2];
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0] - v20;
LABEL_18:
          SR_VEC_PTR_LANES(128, v17, i8)[(char *)a8 - (char *)v14] = v19;
          break;
        default:
          break;
      }
      v17 = (     __m128i *)((char *)v17 + 1);
      --v18;
    }
    while ( v18 );
  }
  result = v13 - 1;
  switch ( v13 )
  {
    case 1:
      v21 = a6 * a3;
      if ( a6 < (__int64)v21 )
      {
        v22 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v23 = v21 - (__int64)a6;
        do
        {
          result = (_BYTE)v22 - a6;
          v22[(char *)a8 - (char *)v14] = *v22 - v22[-a6];
          ++v22;
          --v23;
        }
        while ( v23 );
      }
      break;
    case 2:
      v24 = a6 * a3;
      if ( a6 < (__int64)v24 )
      {
        v25 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v26 = v24 - (__int64)a6;
        do
        {
          result = (_BYTE)v25 - a2;
          v25[(char *)a8 - (char *)v14] = *v25 - v25[-a2];
          ++v25;
          --v26;
        }
        while ( v26 );
      }
      break;
    case 3:
      v27 = a6 * a3;
      if ( a6 < v27 )
      {
        v28 = &SR_VEC_PTR_LANES(128, a8, i8)[a6 - (_QWORD)v14];
        v29 = v27 - a6;
        do
        {
          v30 = SR_VEC_PTR_LANES(128, v14, u8)[0];
          v31 = SR_VEC_PTR_LANES(128, v14, u8)[a6 - (__int64)a2];
          v14 = (     __m128i *)((char *)v14 + 1);
          result = SR_VEC_PTR_LANES(128, v14, i8)[a6 - 1] - ((unsigned int)(v30 + v31) >> 1);
          SR_VEC_PTR_LANES(128, v14, i8)[(_QWORD)v28 - 1] = result;
          --v29;
        }
        while ( v29 );
      }
      break;
    case 4:
      v32 = a6 * a3;
      if ( a6 < (__int64)v32 )
      {
        v33 = &SR_VEC_PTR_LANES(128, v14, u8)[a6 - (__int64)a2];
        v34 = &SR_VEC_PTR_LANES(128, a8, i8)[a2 - (_QWORD)v14];
        v35 = v32 - (__int64)a6;
        do
        {
          result = sub_140176F90(v33[v16 - a6], *v33, v33[-a6]);
          v33[(_QWORD)v34] = v33[v16] - result;
          ++v33;
          --v35;
        }
        while ( v35 );
      }
      break;
    case 5:
      v36 = a6 * a3;
      if ( a6 < (__int64)v36 )
      {
        v37 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v38 = v36 - (__int64)a6;
        do
        {
          result = *v37 - ((unsigned __int8)v37[-a6] >> 1);
          (v37++)[(char *)a8 - (char *)v14] = result;
          --v38;
        }
        while ( v38 );
      }
      break;
    case 6:
      v39 = a6 * a3;
      if ( a6 < (__int64)v39 )
      {
        v40 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v41 = v39 - (__int64)a6;
        do
        {
          result = (_BYTE)v40 - a6;
          v40[(char *)a8 - (char *)v14] = *v40 - v40[-a6];
          ++v40;
          --v41;
        }
        while ( v41 );
      }
      break;
    default:
      result = v13 - 1;
      break;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401761E0) ----------------------------------------------------
__int64            sub_1401761E0(char *a1, char *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_14020B8E4(&v5, a1, a2);
  v3 = v5;
  if ( v2 )
    return 0;
  return v3;
}


//----- (0000000140176210) ----------------------------------------------------
float *           sub_140176210(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm9_4
  float v18; // xmm5_4
  float v19; // xmm11_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm8_4
  float v26; // xmm10_4
  float v27; // xmm9_4
  float v28; // xmm2_4

  v9 = *a6 + *a3;
  v10 = *a3 - *a6;
  v11 = *a7 + *a2;
  v12 = *a2 - *a7;
  v13 = *a8 + *a1;
  v14 = *a1 - *a8;
  v15 = *a5 + *a4;
  v16 = v12 + v14;
  v17 = (float)(*a4 - *a5) + v10;
  v18 = v15 + v13;
  v19 = v13 - v15;
  v20 = (float)(v10 + v12) * 0.70710677;
  v21 = (float)(v9 + v11) + v18;
  v22 = v18 - (float)(v9 + v11);
  v23 = (float)(v17 - (float)(v12 + v14)) * 0.38268343;
  v24 = v20 + v14;
  v25 = (float)((float)(v11 - v9) + v19) * 0.70710677;
  v26 = v14 - v20;
  v27 = (float)(v17 * 0.54119611) + v23;
  v28 = (float)(v16 * 1.306563) + v23;
  *a6 = v26 + v27;
  *a4 = v26 - v27;
  *a2 = v24 + v28;
  *a8 = v24 - v28;
  *a1 = v21;
  *a3 = v25 + v19;
  *a5 = v22;
  *a7 = v19 - v25;
  return a6;
}


//----- (0000000140176410) ----------------------------------------------------
__int64            CMFCVisualManager__OnDrawTab(
        __int64 a1,
        int *a2,
        int *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int16 *a8,
        _WORD *a9)
{
  unsigned __int16 v10; // cx
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // r14
  float *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  float *v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r10
  float v21; // xmm1_4
  float v22; // xmm1_4
  int v23; // ecx
  float v24; // xmm1_4
  float v25; // xmm1_4
  int v26; // ecx
  float v27; // xmm1_4
  float v28; // xmm1_4
  int v29; // ecx
  float v30; // xmm1_4
  float v31; // xmm1_4
  int v32; // ecx
  float v33; // xmm1_4
  float v34; // xmm1_4
  int v35; // ecx
  float v36; // xmm1_4
  float v37; // xmm1_4
  int v38; // ecx
  float v39; // xmm1_4
  float v40; // xmm1_4
  int v41; // ecx
  float v42; // xmm1_4
  float v43; // xmm1_4
  __int64 v44; // rax
  bool v45; // zf
  int v46; // ecx
  int *v47; // r12
  int *v48; // r10
  __int16 v49; // r14
  int v50; // eax
  int v51; // eax
  unsigned __int16 i; // cx
  int v53; // ebx
  int v54; // r15d
  int v55; // edi
  unsigned __int64 v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  char *v60; // rax
  __int64 v61; // rcx
  int v62; // r15d
  int v63; // edi
  unsigned __int64 v64; // r14
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // r13d
  __int64 v69; // r12
  int v70; // eax
  int v71; // r8d
  unsigned int v72; // eax
  int v73; // r8d
  int v74; // r13d
  int *v75; // r12
  __int64 v76; // rdx
  int v77; // r15d
  int v78; // edi
  unsigned __int64 v79; // r14
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  int v83; // eax
  __int16 v84; // r14
  int v85; // eax
  unsigned __int16 j; // cx
  int *v87; // rdi
  int v88; // ebx
  int v89; // r15d
  int v90; // edi
  unsigned __int64 v91; // r14
  __int64 v92; // rcx
  __int64 v93; // rcx
  int *v94; // rax
  int v95; // r15d
  int v96; // edi
  unsigned __int64 v97; // r14
  __int64 v98; // rcx
  __int64 v99; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140176410[448];
#define v101 (*(__int64 (*))(void *)(sr_frame_140176410 + 0)) /* [rsp+0h] */
#define v102 (*(char (*)[8])(void *)(sr_frame_140176410 + 64)) /* [rsp+40h] */
#define v103 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 72)) /* [rsp+48h] */
#define v104 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 74)) /* [rsp+4Ah] */
#define v105 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 76)) /* [rsp+4Ch] */
#define v106 (*(int * (*))(void *)(sr_frame_140176410 + 80)) /* [rsp+50h] */
#define v107 (*(int * (*))(void *)(sr_frame_140176410 + 88)) /* [rsp+58h] */
#define v108 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 96)) /* [rsp+60h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_140176410 + 104)) /* [rsp+68h] */
#define v110 (*(__int64 (*))(void *)(sr_frame_140176410 + 112)) /* [rsp+70h] */
#define v111 (*(__int64 (*))(void *)(sr_frame_140176410 + 120)) /* [rsp+78h] */
#define v112 (*(__int64 (*))(void *)(sr_frame_140176410 + 128)) /* [rsp+80h] */
#define v113 (*(__int64 (*))(void *)(sr_frame_140176410 + 136)) /* [rsp+88h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_140176410 + 144)) /* [rsp+90h] */
#define v115 (*(__int64 (*))(void *)(sr_frame_140176410 + 152)) /* [rsp+98h] */
#define v116 (*(_WORD * (*))(void *)(sr_frame_140176410 + 160)) /* [rsp+A0h] */
#define v117 (*(_DWORD (*)[61])(void *)(sr_frame_140176410 + 176)) /* [rsp+B0h] */
#define v118 (*(char (*))(void *)(sr_frame_140176410 + 420)) /* [rsp+1A4h] */
#define v119 (*(__int64 (*))(void *)(sr_frame_140176410 + 432)) /* [rsp+1B0h] */

  v115 = a1;
  v109 = (__int64)a8;
  v116 = a9;
  v110 = a4;
  v107 = a3;
  v105 = *a9;
  v104 = a9[1];
  v10 = a9[480];
  v103 = a9[481];
  v106 = a2;
  v108 = v10;
  if ( 8 * a5 > 0 )
  {
    v11 = 6;
    do
    {
      sub_140176210(
        (float *)(a4 + 4LL * (v11 - 6)),
        (float *)(a4 + 4LL * (v11 - 5)),
        (float *)(a4 + 4LL * (v11 - 4)),
        (float *)(a4 + 4LL * (v11 - 3)),
        (float *)(a4 + 4LL * (v11 - 2)),
        (float *)(a4 + 4LL * (v11 - 1)),
        (float *)(a4 + 4LL * v11),
        (float *)(a4 + 4LL * (v11 + 1)));
      v11 += a5;
    }
    while ( v11 - 6 < 8 * a5 );
  }
  v113 = a5;
  v12 = 8;
  v13 = 6 * a5;
  v111 = 8;
  v14 = (float *)(a4 + 4 * v13);
  v15 = 3 * a5 - v13;
  v16 = 2 * a5 - v13;
  v112 = v15;
  v114 = v16;
  do
  {
    sub_140176210(
      &v14[-6 * a5],
      &v14[a5 - v13],
      &v14[v16],
      &v14[v15],
      &v14[4 * a5 - v13],
      &v14[5 * a5 - v13],
      v14,
      &v14[7 * a5 - v13]);
    v15 = v112;
    ++v14;
    v16 = v114;
    --v12;
  }
  while ( v12 );
  v17 = 0;
  v18 = (float *)(v110 + 8);
  v19 = v115;
  v20 = 4 * v113;
  do
  {
    v21 = *(v18 - 2) * *(float *)(a6 + 4 * v17);
    if ( v21 >= 0.0 )
      v22 = v21 + 0.5;
    else
      v22 = v21 - 0.5;
    v23 = (int)v22;
    v24 = *(v18 - 1) * *(float *)(a6 + 4 * v17 + 4);
    v117[byte_14026E780[v17]] = v23;
    if ( v24 >= 0.0 )
      v25 = v24 + 0.5;
    else
      v25 = v24 - 0.5;
    v26 = (int)v25;
    v27 = *(float *)(a6 + 4 * v17 + 8) * *v18;
    v117[byte_14026E780[v17 + 1]] = v26;
    if ( v27 >= 0.0 )
      v28 = v27 + 0.5;
    else
      v28 = v27 - 0.5;
    v29 = (int)v28;
    v30 = *(float *)(a6 + 4 * v17 + 12) * v18[1];
    v117[byte_14026E780[v17 + 2]] = v29;
    if ( v30 >= 0.0 )
      v31 = v30 + 0.5;
    else
      v31 = v30 - 0.5;
    v32 = (int)v31;
    v33 = *(float *)(a6 + 4 * v17 + 16) * v18[2];
    v117[byte_14026E780[v17 + 3]] = v32;
    if ( v33 >= 0.0 )
      v34 = v33 + 0.5;
    else
      v34 = v33 - 0.5;
    v35 = (int)v34;
    v36 = *(float *)(a6 + 4 * v17 + 20) * v18[3];
    v117[byte_14026E780[v17 + 4]] = v35;
    if ( v36 >= 0.0 )
      v37 = v36 + 0.5;
    else
      v37 = v36 - 0.5;
    v38 = (int)v37;
    v39 = *(float *)(a6 + 4 * v17 + 24) * v18[4];
    v117[byte_14026E780[v17 + 5]] = v38;
    if ( v39 >= 0.0 )
      v40 = v39 + 0.5;
    else
      v40 = v39 - 0.5;
    v41 = (int)v40;
    v42 = *(float *)(a6 + 4 * v17 + 28) * v18[5];
    v117[byte_14026E780[v17 + 6]] = v41;
    if ( v42 >= 0.0 )
      v43 = v42 + 0.5;
    else
      v43 = v42 - 0.5;
    v44 = byte_14026E780[v17 + 7];
    v18 = (float *)((char *)v18 + v20);
    v17 += 8;
    v45 = v111-- == 1;
    v117[v44] = (int)v43;
  }
  while ( !v45 );
  v46 = v117[0] - a7;
  if ( v117[0] == a7 )
  {
    v47 = v107;
    sub_140176C80(v19, v106, v107, (unsigned __int16 *)v109);
    v48 = v106;
  }
  else
  {
    v49 = v46 - 1;
    v50 = abs32(v46);
    if ( v46 >= 0 )
      v49 = LOWORD(v117[0]) - a7;
    v51 = v50 >> 1;
    for ( i = 1; v51; v51 >>= 1 )
      ++i;
    v47 = v107;
    v53 = i;
    sub_140176C80(v19, v106, v107, (unsigned __int16 *)(v109 + 4LL * i));
    v48 = v106;
    v54 = v53 + *v107;
    v55 = *v106 | ((unsigned __int16)(v49 & ((1 << v53) - 1)) << (24 - v54));
    if ( v54 >= 8 )
    {
      v56 = (unsigned __int64)(unsigned int)v54 >> 3;
      v54 -= 8 * ((unsigned int)v54 >> 3);
      do
      {
        v57 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v55);
        (*(void (           **)(__int64, char *, __int64))v19)(v57, v102, 1);
        if ( BYTE2(v55) == 0xFF )
        {
          v58 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (           **)(__int64, char *, __int64))v19)(v58, v102, 1);
        }
        v55 <<= 8;
        --v56;
      }
      while ( v56 );
      v48 = v106;
      v47 = v107;
    }
    *v48 = v55;
    *v47 = v54;
  }
  LODWORD(v59) = 63;
  v60 = &v118;
  v109 = 63;
  v61 = 63;
  while ( !*((_DWORD *)v60 + 2) )
  {
    if ( *((_DWORD *)v60 + 1) )
    {
      v59 = (unsigned int)(v59 - 1);
      goto LABEL_53;
    }
    if ( *(_DWORD *)v60 )
    {
      v59 = (unsigned int)(v59 - 2);
LABEL_53:
      v109 = v59;
      break;
    }
    v59 = (unsigned int)(v59 - 3);
    v61 -= 3;
    v60 -= 12;
    v109 = v59;
    if ( v61 <= 0 )
      break;
  }
  if ( (_DWORD)v59 )
  {
    v67 = (int)v59;
    LODWORD(v110) = 1;
    v68 = 1;
    if ( (int)v59 < 1LL )
    {
      v94 = v107;
    }
    else
    {
      v69 = 1;
      v111 = 1;
      do
      {
        v70 = v68;
        if ( !v117[v69] )
        {
          do
          {
            if ( v69 > v67 )
              break;
            ++v69;
            ++v68;
          }
          while ( !v117[v69] );
          LODWORD(v110) = v68;
          v111 = v69;
        }
        v71 = v68 - v70;
        LODWORD(v114) = v68 - v70;
        if ( v68 - v70 >= 16 )
        {
          v72 = v71 >> 4;
          if ( v71 >> 4 >= 1 )
          {
            v73 = v108;
            v74 = v103;
            v75 = v107;
            v76 = v72;
            LODWORD(v113) = v108;
            v112 = v72;
            do
            {
              v77 = v74 + *v75;
              v78 = *v48 | (v73 << (24 - (v74 + *(_BYTE *)v75)));
              if ( v77 >= 8 )
              {
                v79 = (unsigned __int64)(unsigned int)v77 >> 3;
                v77 -= 8 * ((unsigned int)v77 >> 3);
                do
                {
                  v80 = *(_QWORD *)(v19 + 8);
                  v102[0] = BYTE2(v78);
                  (*(void (           **)(__int64, char *, __int64))v19)(v80, v102, 1);
                  if ( BYTE2(v78) == 0xFF )
                  {
                    v81 = *(_QWORD *)(v19 + 8);
                    v102[0] = 0;
                    (*(void (           **)(__int64, char *, __int64))v19)(v81, v102, 1);
                  }
                  v78 <<= 8;
                  --v79;
                }
                while ( v79 );
                v76 = v112;
                v74 = v103;
                v73 = v113;
                v48 = v106;
              }
              --v76;
              *v48 = v78;
              v112 = v76;
              *v75 = v77;
            }
            while ( v76 );
            v69 = v111;
            v68 = v110;
            LOBYTE(v71) = v114;
          }
          v71 &= 0xFu;
        }
        v82 = v117[v69];
        v83 = abs32(v82);
        v84 = v82 - 1;
        if ( v82 >= 0 )
          v84 = v82;
        v85 = v83 >> 1;
        for ( j = 1; v85; v85 >>= 1 )
          ++j;
        v87 = v107;
        v88 = j;
        sub_140176C80(v19, v48, v107, &v116[32 * v71 + 2 * j]);
        v48 = v106;
        v89 = v88 + *v87;
        v90 = *v106 | ((unsigned __int16)(v84 & ((1 << v88) - 1)) << (24 - v89));
        if ( v89 >= 8 )
        {
          v91 = (unsigned __int64)(unsigned int)v89 >> 3;
          v89 -= 8 * ((unsigned int)v89 >> 3);
          do
          {
            v92 = *(_QWORD *)(v19 + 8);
            v102[0] = BYTE2(v90);
            (*(void (           **)(__int64, char *, __int64))v19)(v92, v102, 1);
            if ( BYTE2(v90) == 0xFF )
            {
              v93 = *(_QWORD *)(v19 + 8);
              v102[0] = 0;
              (*(void (           **)(__int64, char *, __int64))v19)(v93, v102, 1);
            }
            v90 <<= 8;
            --v91;
          }
          while ( v91 );
          v68 = v110;
          v48 = v106;
        }
        v94 = v107;
        ++v68;
        LODWORD(v59) = v109;
        ++v69;
        v67 = (int)v109;
        *v48 = v90;
        *v94 = v89;
        LODWORD(v110) = v68;
        v111 = v69;
      }
      while ( v69 <= v67 );
    }
    if ( (_DWORD)v59 != 63 )
    {
      v95 = *v94 + v104;
      v96 = *v48 | (v105 << (24 - (*(_BYTE *)v94 + v104)));
      if ( v95 >= 8 )
      {
        v97 = (unsigned __int64)(unsigned int)v95 >> 3;
        v95 -= 8 * ((unsigned int)v95 >> 3);
        do
        {
          v98 = *(_QWORD *)(v19 + 8);
          v102[0] = BYTE2(v96);
          (*(void (           **)(__int64, char *, __int64))v19)(v98, v102, 1);
          if ( BYTE2(v96) == 0xFF )
          {
            v99 = *(_QWORD *)(v19 + 8);
            v102[0] = 0;
            (*(void (           **)(__int64, char *, __int64))v19)(v99, v102, 1);
          }
          v96 <<= 8;
          --v97;
        }
        while ( v97 );
        v48 = v106;
        v94 = v107;
      }
      *v48 = v96;
      *v94 = v95;
    }
  }
  else
  {
    v62 = *v47 + v104;
    v63 = *v48 | (v105 << (24 - (*(_BYTE *)v47 + v104)));
    if ( v62 >= 8 )
    {
      v64 = (unsigned __int64)(unsigned int)v62 >> 3;
      v62 -= 8 * ((unsigned int)v62 >> 3);
      do
      {
        v65 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v63);
        (*(void (           **)(__int64, char *, __int64))v19)(v65, v102, 1);
        if ( BYTE2(v63) == 0xFF )
        {
          v66 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (           **)(__int64, char *, __int64))v19)(v66, v102, 1);
        }
        v63 <<= 8;
        --v64;
      }
      while ( v64 );
      v48 = v106;
    }
    *v48 = v63;
    *v47 = v62;
  }
  return sub_1401F8B20((unsigned __int64)&v101 ^ v119);
}
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119

// 14026E780: using guessed type unsigned __int8 byte_14026E780[65];

//----- (0000000140176C80) ----------------------------------------------------
__int64            sub_140176C80(__int64 a1, int *a2, int *a3, unsigned __int16 *a4)
{
  int v5; // r10d
  int v7; // ebx
  unsigned __int64 v9; // rbp
  int v10; // r12d
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  char v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = *a3 + a4[1];
  v7 = *a2 | (*a4 << (24 - (*(_BYTE *)a3 + a4[1])));
  if ( v5 < 8 )
  {
    *a2 = v7;
    *a3 = v5;
  }
  else
  {
    v9 = (unsigned __int64)(unsigned int)v5 >> 3;
    v10 = v5 - 8 * ((unsigned int)v5 >> 3);
    do
    {
      v11 = *(_QWORD *)(a1 + 8);
      v14 = BYTE2(v7);
      result = (*(__int64 (           **)(__int64, char *, __int64))a1)(v11, &v14, 1);
      if ( BYTE2(v7) == 0xFF )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = 0;
        result = (*(__int64 (           **)(__int64, char *, __int64))a1)(v13, &v14, 1);
      }
      v7 <<= 8;
      --v9;
    }
    while ( v9 );
    *a2 = v7;
    *a3 = v10;
  }
  return result;
}


//----- (0000000140176D40) ----------------------------------------------------
char            sub_140176D40(_BYTE *a1, float *a2)
{
  float v4; // xmm6_4
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  char result; // al
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = fmaxf(fmaxf(a2[2], a2[1]), *a2);
  if ( v4 >= 1.0e-32 )
  {
    v5 = sub_14020B144(v4, &v9);
    v6 = (float)(v5 * 256.0) / v4;
    *a1 = (int)(float)(v6 * *a2);
    a1[1] = (int)(float)(v6 * a2[1]);
    v7 = v6 * a2[2];
    result = v9 + 0x80;
    a1[3] = v9 + 0x80;
    a1[2] = (int)v7;
  }
  else
  {
    *(_DWORD *)a1 = 0;
  }
  return result;
}


//----- (0000000140176DF0) ----------------------------------------------------
__int64 sub_140176DF0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned int a10,
        unsigned __int8 *a11,
        ...)
{
  int v11; // r15d
  __int64 v12; // rsi
  int v14; // r14d
  int v15; // ebp
  int v16; // r13d
  int v17; // edi
  __int64 v18; // rdi
  int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+34h] [rbp-54h]
  int v22; // [rsp+38h] [rbp-50h]
  int v23[3]; // [rsp+3Ch] [rbp-4Ch] BYREF
  int v25; // [rsp+A0h] [rbp+18h]
  va_list va; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va, a11);
  v25 = a3;
  v11 = a3;
  v12 = (unsigned int)a4;
  if ( a5 < 0 || a4 < 0 )
    return 0;
  sub_140177AB0(a1, a11, (__int64)va);
  v23[0] = 0;
  if ( a5 > 0 )
  {
    if ( dword_140404A6C[18215637] )
    {
      v11 = -v11;
      v25 = v11;
    }
    v14 = a5 - 1;
    v15 = -1;
    if ( v11 >= 0 )
    {
      v14 = 0;
      v15 = a5;
    }
    v20 = v14;
    v21 = v15;
    if ( v14 != v15 )
    {
      v16 = a6 * v12 * v14;
      v17 = a6 * v12 * v11;
      v22 = v17;
      do
      {
        if ( (int)v12 > 0 )
        {
          v18 = a8 + v16;
          do
          {
            sub_1401776D0(a1, a2, a6, a9, a7, v18);
            v18 += a6;
            --v12;
          }
          while ( v12 );
          v14 = v20;
          v11 = v25;
          v12 = (unsigned int)a4;
          v15 = v21;
          v17 = v22;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        (*(void (           **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), v23, a10);
        v14 += v11;
        v16 += v17;
        v20 = v14;
      }
      while ( v14 != v15 );
    }
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140176F90) ----------------------------------------------------
__int64            sub_140176F90(int a1, int a2, int a3)
{
  unsigned __int8 v3; // bl
  int v4; // r10d
  signed int v5; // r11d
  signed int v6; // ecx
  signed int v7; // eax
  __int64 result; // rax
  bool v9; // cc

  v3 = a1;
  v4 = a1 - a3 + a2 - a3;
  v5 = abs32(a2 - a3);
  v6 = abs32(a1 - a3);
  v7 = abs32(v4);
  if ( v5 <= v6 && v5 <= v7 )
    return v3;
  v9 = v6 <= v7;
  result = (unsigned __int8)a2;
  if ( !v9 )
    return (unsigned __int8)a3;
  return result;
}


//----- (0000000140177000) ----------------------------------------------------
__int64            sub_140177000(__int64 a1, char a2)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return (*(__int64 (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v3, 1);
}


//----- (0000000140177030) ----------------------------------------------------
__int64            sub_140177030(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r9
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rax

  v3 = *a1;
  if ( *a1 )
    v5 = 2 * *(_DWORD *)(v3 - 8);
  else
    v5 = 1;
  v6 = v5 + a2;
  v7 = v3 - 8;
  v8 = a3 * (v5 + a2) + 8LL;
  if ( !v3 )
    v7 = 0;
  v9 = j__realloc_base_sr(v7, v8);
  if ( v9 )
  {
    if ( !*a1 )
      *(_DWORD *)(v9 + 4) = 0;
    v11 = v9 + 8;
    *a1 = v11;
    *(_DWORD *)(v11 - 8) = v6;
    return *a1;
  }
  else
  {
    sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    return *a1;
  }
}

// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140273670: using guessed type __int16[52];

//----- (0000000140177160) ----------------------------------------------------
__int64            sub_140177160(__int64 a1, char a2)
{
  int v2; // r8d
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 80);
  v5 = v2;
  if ( (unsigned int)(v2 + 1) > 0x40 && v2 )
  {
    (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    v5 = 0;
    *(_DWORD *)(a1 + 80) = 0;
  }
  *(_BYTE *)(v5 + a1 + 16) = a2;
  ++*(_DWORD *)(a1 + 80);
  return v5;
}


//----- (00000001401771B0) ----------------------------------------------------
__int64            sub_1401771B0(__int64 a1, char a2, char a3, char a4)
{
  int v6; // r8d
  int v9; // ecx

  v6 = *(_DWORD *)(a1 + 80);
  v9 = v6;
  if ( (unsigned int)(v6 + 3) > 0x40 && v6 )
  {
    (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    v9 = 0;
  }
  *(_DWORD *)(a1 + 80) = v9 + 3;
  *(_BYTE *)(v9 + a1 + 16) = a2;
  *(_BYTE *)(v9 + a1 + 17) = a3;
  *(_BYTE *)(v9 + a1 + 18) = a4;
  return v9;
}


//----- (0000000140177220) ----------------------------------------------------
__int64            sub_140177220(__int64 a1, int a2, __int64 a3)
{
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( a2 > 128 )
    sub_14023E640((char *)L"length <= 128", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x28Du);
  (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v7, 1);
  return (*(__int64 (           **)(_QWORD, __int64, _QWORD))a1)(*(_QWORD *)(a1 + 8), a3, (unsigned int)a2);
}

// 140273670: using guessed type __int16[52];
// 140273728: using guessed type __int16[14];

//----- (0000000140177290) ----------------------------------------------------
__int64            sub_140177290(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 80) )
  {
    result = (*(__int64 (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    *(_DWORD *)(a1 + 80) = 0;
  }
  return result;
}


//----- (00000001401772C0) ----------------------------------------------------
__int64            sub_1401772C0(__int64 a1, int a2, int a3, _BYTE *a4, float *a5)
{
  __int64 result; // rax
  float *v8; // rbx
  _BYTE *v9; // rsi
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  float *v14; // rax
  float *v15; // rcx
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  char v20; // al
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  float v24; // xmm1_4
  float v25; // xmm1_4
  __int64 v26; // rcx
  __int64 v27; // r13
  _BYTE *v28; // r12
  int v29; // esi
  int v30; // edx
  int v31; // ebx
  _BYTE *v32; // rcx
  char v33; // al
  unsigned int v34; // edi
  __int64 v35; // rcx
  _BYTE *v36; // rcx
  int v37; // edi
  float *v38; // rbx
  unsigned int v39; // r12d
  __int64 v40; // rdi
  __int64 v41; // rsi
  float *v42; // rax
  float *v43; // rcx
  float v44; // xmm8_4
  float v45; // xmm9_4
  float v46; // xmm7_4
  float v47; // xmm6_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401772C0[240];
#define v50 (*(char (*)[8])(void *)(sr_frame_1401772C0 + 0)) /* [rsp+28h] */
#define v51 (*(int (*))(void *)(sr_frame_1401772C0 + 8)) /* [rsp+30h] */
#define v52 (*(__int16 (*))(void *)(sr_frame_1401772C0 + 12)) /* [rsp+34h] */
#define v53 (*(char (*))(void *)(sr_frame_1401772C0 + 14)) /* [rsp+36h] */
#define v54 (*(char (*))(void *)(sr_frame_1401772C0 + 15)) /* [rsp+37h] */
#define v55 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 16)) /* [rsp+38h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 24)) /* [rsp+40h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 32)) /* [rsp+48h] */
#define v58 (*(int (*))(void *)(sr_frame_1401772C0 + 216)) /* [rsp+100h] */
#define v59 (*(_BYTE * (*))(void *)(sr_frame_1401772C0 + 232)) /* [rsp+110h] */

  v59 = a4;
  result = (unsigned int)(a2 >> 8);
  v52 = 514;
  v53 = BYTE1(a2);
  v54 = a2;
  if ( a2 < 8 )
  {
    if ( a2 <= 0 )
      return result;
  }
  else if ( a2 < 0x8000 )
  {
    v8 = a5;
    v9 = a4;
    v10 = (unsigned int)a2;
    v58 = a3 - 3;
    v11 = a3 - 3;
    v12 = 2 * a2;
    v57 = 4LL * a3;
    v13 = &a4[v12];
    v55 = a2 - v12;
    v56 = 3 * a2 - v12;
    do
    {
      if ( v11 > 1 )
      {
        v15 = v8;
        v14 = v8;
      }
      else
      {
        v14 = v8 + 1;
        v15 = v8 + 2;
      }
      v16 = *v14;
      v17 = *v15;
      v18 = *v8;
      v19 = fmaxf(*v14, *v15);
      if ( *v8 > v19 )
        v19 = *v8;
      if ( v19 >= 1.0e-32 )
      {
        v24 = sub_14020B144(v19, &v58);
        v20 = v58 + 0x80;
        HIBYTE(v51) = v58 + 0x80;
        v25 = (float)(v24 * 256.0) / v19;
        v23 = (int)(float)(v18 * v25);
        v22 = (int)(float)(v16 * v25);
        LOBYTE(v51) = v23;
        v21 = (int)(float)(v17 * v25);
        BYTE1(v51) = v22;
        BYTE2(v51) = v21;
      }
      else
      {
        v20 = 0;
        v51 = 0;
        LOBYTE(v21) = 0;
        LOBYTE(v22) = 0;
        LOBYTE(v23) = 0;
      }
      v8 = (float *)((char *)v8 + v57);
      *v9++ = v23;
      v13[v55] = v22;
      v26 = v56;
      *v13 = v21;
      (v13++)[v26] = v20;
      --v10;
    }
    while ( v10 );
    v27 = 4;
    (*(void (           **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), &v52, 4);
    v28 = v59;
    do
    {
      v29 = 0;
      do
      {
        v30 = v29 + 2;
        v31 = v29;
        if ( v29 + 2 < a2 )
        {
          v32 = &v28[v29 + 2];
          do
          {
            v33 = *(v32 - 2);
            if ( v33 == *(v32 - 1) && v33 == *v32 )
              break;
            ++v31;
            ++v30;
            ++v32;
          }
          while ( v30 < a2 );
        }
        if ( v31 + 2 >= a2 )
          v31 = a2;
        for ( ; v29 < v31; v29 += v34 )
        {
          v34 = v31 - v29;
          if ( v31 - v29 > 128 )
            v34 = 128;
          v35 = *(_QWORD *)(a1 + 8);
          LOBYTE(v58) = v34;
          (*(void (           **)(__int64, int *, __int64))a1)(v35, &v58, 1);
          (*(void (           **)(_QWORD, _BYTE *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &v28[v29], v34);
        }
        if ( v31 + 2 < a2 )
        {
          if ( v31 < a2 )
          {
            v36 = &v28[v31];
            do
            {
              if ( *v36 != v28[v29] )
                break;
              ++v31;
              ++v36;
            }
            while ( v31 < a2 );
          }
          for ( ; v29 < v31; v29 += v37 )
          {
            v37 = v31 - v29;
            v50[0] = v28[v29];
            if ( v31 - v29 <= 127 )
            {
              LOBYTE(v58) = v37 + 0x80;
              if ( v37 + 128 > 255 )
                sub_14023E640(
                  (char *)L"length+128 <= 255",
                  (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
                  0x285u);
            }
            else
            {
              v37 = 127;
              LOBYTE(v58) = -1;
            }
            (*(void (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v58, 1);
            (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v50, 1);
          }
        }
      }
      while ( v29 < a2 );
      result = a2;
      v28 += a2;
      --v27;
    }
    while ( v27 );
    return result;
  }
  v38 = a5;
  v39 = a3 - 3;
  v40 = (unsigned int)a2;
  v41 = 4LL * a3;
  do
  {
    if ( v39 > 1 )
    {
      v43 = v38;
      v42 = v38;
    }
    else
    {
      v42 = v38 + 1;
      v43 = v38 + 2;
    }
    v44 = *v42;
    v45 = *v43;
    v46 = *v38;
    v47 = fmaxf(*v42, *v43);
    if ( *v38 > v47 )
      v47 = *v38;
    if ( v47 >= 1.0e-32 )
    {
      v48 = sub_14020B144(v47, &v58);
      v49 = (float)(v48 * 256.0) / v47;
      LOBYTE(v51) = (int)(float)(v46 * v49);
      BYTE1(v51) = (int)(float)(v44 * v49);
      BYTE2(v51) = (int)(float)(v45 * v49);
      HIBYTE(v51) = v58 + 0x80;
    }
    else
    {
      v51 = 0;
    }
    result = (*(__int64 (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v51, 4);
    v38 = (float *)((char *)v38 + v41);
    --v40;
  }
  while ( v40 );
  return result;
}
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59

// 140273670: using guessed type __int16[52];
// 140273700: using guessed type __int16[18];

//----- (00000001401776D0) ----------------------------------------------------
__int64            sub_1401776D0(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v10; // r14
  int v11; // ecx
  char v12; // r15
  __int64 result; // rax
  int v14; // r9d
  int v15; // ecx
  unsigned int v16; // kr00_4
  int v17; // ecx
  char v18; // dl
  int v19; // r8d
  int v20; // ecx
  char v21; // di
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401776D0[16];
#define v22 (*(char (*))(void *)(sr_frame_1401776D0 + 0)) /* [rsp+50h] */
#define v23 (*(char (*))(void *)(sr_frame_1401776D0 + 1)) /* [rsp+51h] */
#define v24 (*(char (*))(void *)(sr_frame_1401776D0 + 2)) /* [rsp+52h] */

  v6 = a6;
  v8 = a3;
  v10 = a2;
  if ( a4 < 0 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    v12 = *(_BYTE *)(a3 + a6 - 1);
    if ( (unsigned int)(v11 + 1) > 0x40 && v11 )
    {
      (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
      v11 = 0;
      *(_DWORD *)(a1 + 80) = 0;
    }
    result = v11;
    *(_BYTE *)(v11 + a1 + 16) = v12;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (int)v8 <= 0 )
    goto LABEL_16;
  if ( (int)v8 <= 2 )
  {
    v18 = *(_BYTE *)v6;
    if ( a5 )
      result = sub_1401771B0(a1, v18, v18, v18);
    else
      result = sub_140177160(a1, v18);
  }
  else
  {
    if ( (_DWORD)v8 != 3 )
    {
      if ( (_DWORD)v8 != 4 )
        goto LABEL_16;
      if ( !a4 )
      {
        v14 = *(unsigned __int8 *)(v6 + 3);
        v15 = v14 * *(unsigned __int8 *)(v6 + 1);
        v22 = -(char)(v14 * (*(_BYTE *)v6 + 1)) - 1;
        v16 = v15;
        v17 = v14 * (*(unsigned __int8 *)(v6 + 2) - 255);
        v23 = v16 / 0xFF;
        v24 = ((int)((unsigned __int64)(2155905153LL * v17) >> 32) >> 7 < 0)
            + ((int)((unsigned __int64)(2155905153LL * v17) >> 32) >> 7)
            - 1;
        return sub_1401771B0(a1, *(&v22 + 1 - (int)v10), v23, *(&v23 + v10));
      }
    }
    result = sub_1401771B0(a1, *(_BYTE *)(1 - (int)v10 + v6), *(_BYTE *)(v6 + 1), *(_BYTE *)(v10 + v6 + 1));
  }
LABEL_16:
  if ( a4 > 0 )
  {
    v19 = *(_DWORD *)(a1 + 80);
    v20 = v19;
    v21 = *(_BYTE *)(v8 + v6 - 1);
    if ( (unsigned int)(v19 + 1) > 0x40 )
    {
      if ( v19 )
      {
        (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
        v20 = 0;
        *(_DWORD *)(a1 + 80) = 0;
      }
    }
    *(_BYTE *)(v20 + a1 + 16) = v21;
    ++*(_DWORD *)(a1 + 80);
    return v20;
  }
  return result;
}
#undef v22
#undef v23
#undef v24


//----- (0000000140177890) ----------------------------------------------------
__int64            sub_140177890(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        unsigned int a9,
        int a10)
{
  __int64 result; // rax
  int v11; // r14d
  int v13; // r15d
  int v14; // ebx
  int v15; // r13d
  int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rsi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177890[128];
#define v19 (*(int (*))(void *)(sr_frame_140177890 + 0)) /* [rsp+30h] */
#define v20 (*(int (*))(void *)(sr_frame_140177890 + 4)) /* [rsp+34h] */
#define v21 (*(int (*))(void *)(sr_frame_140177890 + 8)) /* [rsp+38h] */
#define v23 (*(int (*))(void *)(sr_frame_140177890 + 96)) /* [rsp+90h] */
#define v24 (*(int (*))(void *)(sr_frame_140177890 + 104)) /* [rsp+98h] */
#define v25 (*(int (*))(void *)(sr_frame_140177890 + 112)) /* [rsp+A0h] */

  v24 = a4;
  v23 = a3;
  result = (unsigned int)a5;
  v21 = 0;
  v11 = a3;
  if ( a5 > 0 )
  {
    if ( dword_140404A6C[18215637] )
    {
      v11 = -a3;
      v23 = -a3;
    }
    v13 = a5 - 1;
    v14 = -1;
    if ( v11 >= 0 )
    {
      v13 = 0;
      v14 = a5;
    }
    v25 = v13;
    v19 = v14;
    if ( v13 != v14 )
    {
      v15 = a6 * a4 * v13;
      v16 = a6 * a4 * v11;
      v20 = v16;
      do
      {
        if ( a4 > 0 )
        {
          v17 = a7 + v15;
          v18 = (unsigned int)a4;
          do
          {
            sub_1401776D0(a1, a2, a6, a8, a10, v17);
            v17 += a6;
            --v18;
          }
          while ( v18 );
          v11 = v23;
          v13 = v25;
          v14 = v19;
          v16 = v20;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        result = (*(__int64 (           **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &v21, a9);
        a4 = v24;
        v13 += v11;
        v15 += v16;
        v25 = v13;
      }
      while ( v13 != v14 );
    }
  }
  return result;
}
#undef v19
#undef v20
#undef v21
#undef v23
#undef v24
#undef v25

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140177A10) ----------------------------------------------------
__int64            sub_140177A10(__int64 a1, int a2, char a3)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177A10[16];
#define v5 (*(char (*))(void *)(sr_frame_140177A10 + 0)) /* [rsp+38h] */
#define v6 (*(char (*))(void *)(sr_frame_140177A10 + 8)) /* [rsp+40h] */

  v6 = a3;
  v5 = a2 + 0x80;
  if ( a2 + 128 > 255 )
    sub_14023E640(
      (char *)L"length+128 <= 255",
      (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
      0x285u);
  (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v5, 1);
  return (*(__int64 (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v6, 1);
}
#undef v5
#undef v6

// 140273670: using guessed type __int16[52];
// 140273700: using guessed type __int16[18];

//----- (0000000140177A80) ----------------------------------------------------
__int64 sub_140177A80(__int64 a1, unsigned __int8 *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_140177AB0(a1, a2, (__int64)va);
}


//----- (0000000140177AB0) ----------------------------------------------------
__int64            sub_140177AB0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 *v4; // rsi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int16 *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177AB0[64];
#define v15 (*(int (*))(void *)(sr_frame_140177AB0 + 0)) /* [rsp+20h] */
#define v16 (*(char (*))(void *)(sr_frame_140177AB0 + 40)) /* [rsp+48h] */
#define v17 (*(__int16 (*))(void *)(sr_frame_140177AB0 + 56)) /* [rsp+58h] */

  result = *a2;
  v4 = a2;
  if ( (_BYTE)result )
  {
    v6 = a3 - 8;
    do
    {
      ++v4;
      v7 = (char)result - 32;
      if ( v7 )
      {
        v8 = v7 - 17;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 2 )
              return sub_14023E640(
                       (char *)L"0",
                       (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
                       0x173u);
            v10 = *(_DWORD *)(v6 + 8);
            v11 = (__int16 *)&v15;
            v6 += 8;
            v15 = v10;
            v12 = 4;
          }
          else
          {
            v13 = *(_DWORD *)(v6 + 8);
            v11 = &v17;
            v6 += 8;
            v17 = v13;
            v12 = 2;
          }
        }
        else
        {
          v14 = *(unsigned __int8 *)(v6 + 8);
          v11 = (__int16 *)&v16;
          v6 += 8;
          v16 = v14;
          v12 = 1;
        }
        (*(void (           **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), v11, v12);
      }
      result = *v4;
    }
    while ( (_BYTE)result );
  }
  return result;
}
#undef v15
#undef v16
#undef v17

// 140272530: using guessed type __int16[2];
// 140273670: using guessed type __int16[52];

//----- (0000000140177C80) ----------------------------------------------------
_DWORD *           sub_140177C80(_DWORD *a1, _BYTE *a2, int *a3)
{
  _DWORD *v5; // rbx
  int *v6; // rsi
  int v7; // edi
  int *v8; // rcx
  int *v9; // rax

  v5 = a1;
  if ( *a3 >= 8 )
  {
    v6 = a1 - 2;
    while ( v5 )
    {
      if ( *(v5 - 1) + 1 >= *v6 )
      {
        v7 = 2 * *v6 + 1;
LABEL_7:
        v8 = v6;
        if ( !v5 )
          v8 = nullptr;
        v9 = (int *)j__realloc_base_sr(v8, v7 + 8LL);
        if ( v9 )
        {
          if ( !v5 )
            v9[1] = 0;
          v5 = v9 + 2;
          v6 = v9;
          *v9 = v7;
        }
        else
        {
          sub_14023E640("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      *((_BYTE *)v5 + (int)(*(v5 - 1))++) = *a2;
      *(_DWORD *)a2 >>= 8;
      *a3 -= 8;
      if ( *a3 < 8 )
        return v5;
    }
    v7 = 2;
    goto LABEL_7;
  }
  return v5;
}

// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140273670: using guessed type __int16[52];

//----- (0000000140177D70) ----------------------------------------------------
__int64            sub_140177D70(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v5; // edi
  int v6; // r11d
  int *v7; // r8
  int v8; // r10d
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // r11d
  int v12; // edx
  __int64 v13; // r9
  _DWORD *v14; // rcx

  v3 = a3;
  v5 = 0;
  if ( a3 > 0 )
  {
    v6 = a1[2];
    v7 = (int *)(a2 + 12);
    v8 = a1[3];
    v9 = 0;
    do
    {
      if ( v6 + *v7 > *a1 )
      {
        v8 = a1[4];
        v6 = 0;
        a1[3] = v8;
        a1[2] = 0;
      }
      if ( v8 + v7[1] > a1[1] )
        break;
      *(v7 - 3) = v6;
      result = (unsigned int)a1[3];
      v11 = *v7;
      *(v7 - 2) = result;
      v7[2] = 1;
      v6 = a1[2] + v11;
      v8 = a1[3];
      a1[2] = v6;
      v12 = v8 + v7[1];
      if ( v12 > a1[4] )
        a1[4] = v12;
      ++v5;
      ++v9;
      v7 += 6;
    }
    while ( v9 < v3 );
  }
  if ( v5 < v3 )
  {
    result = 3LL * v5;
    v13 = v3 - v5;
    v14 = (_DWORD *)(a2 + 20 + 24LL * v5);
    do
    {
      *v14 = 0;
      v14 += 6;
      --v13;
    }
    while ( v13 );
  }
  return result;
}


//----- (0000000140177E50) ----------------------------------------------------
__int64            sub_140177E50(
        __int64 a1,
        unsigned int a2,
        float a3,
        _WORD *a4,
        signed int a5,
        signed int a6,
        int a7,
        int a8,
        __int64 a9)
{
  unsigned int v9; // r12d
  unsigned int v12; // ebx
  int v13; // r15d
  int v14; // r14d
  int v15; // edx
  float v16; // xmm6_4
  int v17; // eax
  int v18; // r13d
  __int64 v19; // r10
  __int16 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // r10d
  int v24; // esi
  int v25; // r11d
  int v26; // ecx
  int v27; // eax
  int v28; // edi
  int v29; // ebx
  int v30; // esi
  __m128 v31; // xmm0
  __m128d v32; // xmm1
  int v33; // ecx
  __m128 v34; // xmm0
  __m128d v35; // xmm1
  int v36; // ecx
  __m128 v37; // xmm0
  __m128d v38; // xmm1
  int v39; // ecx
  __m128 v40; // xmm0
  __m128d v41; // xmm1
  int v42; // ecx
  int v43; // ebx
  int v44; // edi
  signed int v45; // ecx
  int v46; // eax
  signed int v47; // r15d
  __int16 v48; // ax
  __int64 v49; // rdi
  __m128i v50; // xmm0
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177E50[176];
#define v51 (*(int (*))(void *)(sr_frame_140177E50 + 0)) /* [rsp+50h] */
#define v52 (*(int (*))(void *)(sr_frame_140177E50 + 4)) /* [rsp+54h] */
#define v53 (*(int (*))(void *)(sr_frame_140177E50 + 8)) /* [rsp+58h] */
#define v54 (*(int (*))(void *)(sr_frame_140177E50 + 12)) /* [rsp+5Ch] */
#define v55 (*(__int64 (*))(void *)(sr_frame_140177E50 + 24)) /* [rsp+68h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_140177E50 + 32)) /* [rsp+70h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_140177E50 + 40)) /* [rsp+78h] */
#define v58 (*(__int128 (*))(void *)(sr_frame_140177E50 + 48)) /* [rsp+80h] */
#define v59 (*(__int128 (*))(void *)(sr_frame_140177E50 + 64)) /* [rsp+90h] */
#define v60 (*(__int64 (*))(void *)(sr_frame_140177E50 + 80)) /* [rsp+A0h] */
#define v61 (*(int (*))(void *)(sr_frame_140177E50 + 88)) /* [rsp+A8h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_140177E50 + 96)) /* [rsp+B0h] */
#define v63 (*(__int64 (*))(void *)(sr_frame_140177E50 + 104)) /* [rsp+B8h] */
#define v64 (*(int (*))(void *)(sr_frame_140177E50 + 132)) /* [rsp+D4h] */
#define v65 (*(int (*))(void *)(sr_frame_140177E50 + 136)) /* [rsp+D8h] */
#define v66 (*(int (*))(void *)(sr_frame_140177E50 + 172)) /* [rsp+FCh] */

  v9 = 0;
  v62 = 0;
  if ( !(unsigned int)sub_14017B740((__int64)&v62, a1, a2) )
    return 0xFFFFFFFFLL;
  sub_1401FCD30((void *)(uintptr_t)(a4), 0, a6 * a5);
  v12 = 1;
  v13 = 1;
  v14 = 1;
  v52 = 1;
  v15 = 0;
  v53 = 0;
  v16 = a3
      / (float)((__int16)(*(unsigned __int8 *)(v64 + v63 + 5) + (*(unsigned __int8 *)(v64 + v63 + 4) << 8))
              - (__int16)(*(unsigned __int8 *)(v64 + v63 + 7) + (*(unsigned __int8 *)(v64 + v63 + 6) << 8)));
  if ( a8 > 0 )
  {
    v55 = 0;
    v56 = a9 + 4;
    do
    {
      v17 = sub_140178410((__int64)&v62, a7 + v15);
      v18 = v17;
      v19 = *(unsigned __int8 *)(v64 + v63 + 35);
      if ( v17 >= (int)(v19 + (*(unsigned __int8 *)(v64 + v63 + 34) << 8)) )
      {
        v21 = v19 + ((unsigned __int64)*(unsigned __int8 *)(v64 + v63 + 34) << 8);
        v20 = (*(unsigned __int8 *)(v65 + v63 + 4 * v21 - 4) << 8) + *(unsigned __int8 *)(v65 + v63 + 4 * v21 - 3);
      }
      else
      {
        v20 = *(unsigned __int8 *)(v65 + v63 + 4 * v17 + 1) + (*(unsigned __int8 *)(v65 + v63 + 4 * v17) << 8);
      }
      v54 = v20;
      if ( v66 )
      {
        v57 = 1;
        v60 = 0;
        v61 = 0;
        v58 = 0;
        v59 = 0;
        v22 = sub_140182AD0((__int64)&v62, v17, (__int64)&v57);
        v23 = 0;
        v24 = 0;
        v25 = 0;
        if ( v22 )
          v23 = HIDWORD(v59);
        v26 = 0;
        if ( v22 )
        {
          v24 = v59;
          v25 = DWORD1(v59);
          v26 = DWORD2(v59);
        }
      }
      else
      {
        v27 = sub_14017DA60((__int64)&v62, v17);
        if ( v27 < 0 )
        {
          v28 = 0;
          v29 = 0;
          v30 = 0;
          goto LABEL_30;
        }
        v23 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 9) + (*(unsigned __int8 *)(v27 + v63 + 8) << 8));
        v24 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 3) + (*(unsigned __int8 *)(v27 + v63 + 2) << 8));
        v25 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 7) + (*(unsigned __int8 *)(v27 + v63 + 6) << 8));
        v26 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 5) + (*(unsigned __int8 *)(v27 + v63 + 4) << 8));
      }
      v31 = _mm_set_ss((float)-v26);
      SR_VEC_LANES(128, v31, f32)[0] = SR_VEC_LANES(128, v31, f32)[0] * v16;
      v32 = _mm_cvtps_pd(v31);
      v33 = (int)SR_VEC_LANES(128, v32, f64)[0];
      if ( (double)v33 != SR_VEC_LANES(128, v32, f64)[0] )
        SR_VEC_LANES(128, v32, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v32, v32)) & 1) + v33);
      v34 = _mm_set_ss((float)v25);
      v28 = (int)SR_VEC_LANES(128, v32, f64)[0];
      SR_VEC_LANES(128, v34, f32)[0] = SR_VEC_LANES(128, v34, f32)[0] * v16;
      v35 = _mm_cvtps_pd(v34);
      v36 = (int)SR_VEC_LANES(128, v35, f64)[0];
      if ( (double)v36 != SR_VEC_LANES(128, v35, f64)[0] )
        SR_VEC_LANES(128, v35, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v35, v35)) & 1) + v36);
      v37 = _mm_set_ss((float)v24);
      v29 = (int)SR_VEC_LANES(128, v35, f64)[0];
      SR_VEC_LANES(128, v37, f32)[0] = SR_VEC_LANES(128, v37, f32)[0] * v16;
      v38 = _mm_cvtps_pd(v37);
      v39 = (int)SR_VEC_LANES(128, v38, f64)[0];
      if ( (double)v39 != SR_VEC_LANES(128, v38, f64)[0] )
        SR_VEC_LANES(128, v38, f64)[0] = (double)(v39 - (_mm_movemask_pd(_mm_unpacklo_pd(v38, v38)) & 1));
      v9 = (int)SR_VEC_LANES(128, v38, f64)[0];
      v40 = _mm_set_ss((float)-v23);
      SR_VEC_LANES(128, v40, f32)[0] = SR_VEC_LANES(128, v40, f32)[0] * v16;
      v41 = _mm_cvtps_pd(v40);
      v42 = (int)SR_VEC_LANES(128, v41, f64)[0];
      if ( (double)v42 != SR_VEC_LANES(128, v41, f64)[0] )
        SR_VEC_LANES(128, v41, f64)[0] = (double)(v42 - (_mm_movemask_pd(_mm_unpacklo_pd(v41, v41)) & 1));
      v30 = (int)SR_VEC_LANES(128, v41, f64)[0];
LABEL_30:
      v43 = v29 - v9;
      v44 = v28 - v30;
      v45 = v43 + v14 + 1;
      if ( v45 >= a5 )
        v14 = 1;
      v46 = v52;
      if ( v45 < a5 )
        v46 = v13;
      v51 = v46;
      v47 = v44 + v46 + 1;
      if ( v47 >= a6 )
        return (unsigned int)-v53;
      if ( v43 + v14 >= a5 )
        sub_14023E640((char *)L"x+gw < pw", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xE47u);
      if ( v44 + v51 >= a6 )
        sub_14023E640((char *)L"y+gh < ph", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xE48u);
      sub_14017C040((__int64)&v62, (__int64)a4 + a5 * v51 + v14, v43, v44, a5, v16, v16, 0.0, 0, v18);
      *(_WORD *)(v56 - 4) = v14;
      *(_WORD *)(v56 - 2) = v51;
      v48 = v44 + v51;
      v49 = v55;
      *(_WORD *)v56 = v43 + v14;
      v14 += v43 + 1;
      *(_WORD *)(v56 + 2) = v48;
      if ( v47 <= v52 )
        v47 = v52;
      v15 = v53 + 1;
      v12 = v47;
      v13 = v51;
      ++v55;
      v52 = v12;
      ++v53;
      *(float *)(v56 + 12) = (float)v54 * v16;
      v50 = _mm_cvtsi32_si128(v9);
      v9 = 0;
      *(float *)(v56 + 8) = (float)v30;
      *(_DWORD *)(v56 + 4) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v50), u32)[0];
      v56 += 20;
    }
    while ( v49 + 1 < a8 );
  }
  return v12;
}
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66

// 1401780F2: conditional instruction was optimized away because rcx.8<100000000u
// 14017813A: conditional instruction was optimized away because rcx.8<100000000u
// 140178181: conditional instruction was optimized away because rcx.8<100000000u
// 1401781CA: conditional instruction was optimized away because rcx.8<100000000u
// 140272E60: using guessed type __int16[45];
// 140273400: using guessed type __int16 aXGwPw[10];
// 140273418: using guessed type __int16 aYGhPh[10];

//----- (00000001401783D0) ----------------------------------------------------
_BOOL8            sub_1401783D0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  return a2 == (unsigned int)sub_14017D6B0(a1, a2, a3, a4);
}


//----- (00000001401783F0) ----------------------------------------------------
_BOOL8            sub_1401783F0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  return a2 == (unsigned int)sub_14017D6B0(a1, a2, a3, a4);
}


//----- (0000000140178410) ----------------------------------------------------
__int64            sub_140178410(__int64 a1, int a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int16 v6; // r11
  unsigned int v8; // edx
  unsigned int v9; // r8d
  __int16 v10; // r8
  __int16 v11; // r11
  __int16 v12; // ax
  unsigned __int16 v13; // r12
  unsigned __int16 v14; // r10
  __int16 v15; // dx
  __int64 v16; // r14
  int v17; // r9d
  unsigned __int16 v18; // r10
  __int16 v19; // r11
  unsigned __int16 v20; // r8
  unsigned int i; // r9d
  __int64 v22; // rbp
  __int64 v23; // rcx
  int v24; // r8d
  unsigned __int16 v25; // r9
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r10d
  int v29; // eax
  __int64 v30; // r14
  unsigned __int8 *v31; // r8
  unsigned int v32; // r9d
  unsigned int v33; // edx

  v2 = *(unsigned int *)(a1 + 52);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  v6 = *(unsigned __int8 *)(v2 + v3 + 1) + (*(unsigned __int8 *)(v2 + v3) << 8);
  switch ( v6 )
  {
    case 0:
      if ( a2 < *(unsigned __int8 *)(v2 + v3 + 3) - 6 + (*(unsigned __int8 *)(v2 + v3 + 2) << 8) )
        return *(unsigned __int8 *)(v2 + a2 + v3 + 6);
      return 0;
    case 6:
      v8 = *(unsigned __int8 *)(v2 + v3 + 7) + (*(unsigned __int8 *)(v2 + v3 + 6) << 8);
      if ( a2 >= v8 && a2 < v8 + (*(unsigned __int8 *)(v2 + v3 + 8) << 8) + *(unsigned __int8 *)(v2 + v3 + 9) )
        return (*(unsigned __int8 *)(v2 + 2 * (a2 - v8) + v3 + 10) << 8)
             + (unsigned int)*(unsigned __int8 *)(v2 + 2 * (a2 - v8) + v3 + 11);
      return 0;
    case 2:
      v9 = 1463;
LABEL_10:
      sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", v9);
      return 0;
    case 4:
      v10 = *(unsigned __int8 *)(v2 + v3 + 12);
      v11 = *(unsigned __int8 *)(v2 + v3 + 11);
      v12 = *(unsigned __int8 *)(v2 + v3 + 13);
      v13 = (unsigned __int16)(*(unsigned __int8 *)(v2 + v3 + 7) + (*(unsigned __int8 *)(v2 + v3 + 6) << 8)) >> 1;
      v14 = (*(unsigned __int8 *)(v2 + v3 + 8) << 8) + *(unsigned __int8 *)(v2 + v3 + 9);
      v15 = *(unsigned __int8 *)(v2 + v3 + 10) << 8;
      v16 = (unsigned int)(v2 + 14);
      v17 = v16;
      v18 = v14 >> 1;
      v19 = v15 + v11;
      v20 = (unsigned __int16)(v12 + (v10 << 8)) >> 1;
      if ( a2 <= 0xFFFF )
      {
        if ( a2 >= *(unsigned __int8 *)(v16 + 2LL * v20 + v3 + 1) + (*(unsigned __int8 *)(v16 + 2LL * v20 + v3) << 8) )
          v17 = v16 + 2 * v20;
        for ( i = v17 - 2; v19; --v19 )
        {
          v18 >>= 1;
          if ( a2 > *(unsigned __int8 *)(v3 + i + 2LL * v18 + 1) + (*(unsigned __int8 *)(v3 + i + 2LL * v18) << 8) )
            i += 2 * v18;
        }
        v22 = 2LL * (unsigned __int16)((i - (unsigned int)v16 + 2) >> 1);
        if ( a2 > *(unsigned __int8 *)(v16 + v22 + v3 + 1) + (*(unsigned __int8 *)(v16 + v22 + v3) << 8) )
          sub_14023E640(
            (char *)L"unicode_codepoint <= ttUSHORT(data + endCount + 2*item)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x5DBu);
        v23 = v4 + v22 + 2 * (unsigned int)v13;
        v24 = *(unsigned __int8 *)(v23 + v3 + 17) + (*(unsigned __int8 *)(v23 + v3 + 16) << 8);
        if ( a2 >= v24 )
        {
          v25 = *(unsigned __int8 *)(v4 + 6 * (unsigned int)v13 + v22 + v3 + 17)
              + (*(unsigned __int8 *)(v4 + 6 * (unsigned int)v13 + v22 + v3 + 16) << 8);
          if ( !v25 )
            return (unsigned __int16)(a2
                                    + (*(unsigned __int8 *)(v4 + v22 + 4 * (unsigned int)v13 + v3 + 16) << 8)
                                    + *(unsigned __int8 *)(v4 + v22 + 4 * (unsigned int)v13 + v3 + 17));
          v26 = v4 + v22 + 6 * (unsigned int)v13 + (__int64)(2 * (a2 - v24)) + v25;
          return (*(unsigned __int8 *)(v26 + v3 + 16) << 8) + (unsigned int)*(unsigned __int8 *)(v26 + v3 + 17);
        }
      }
      return 0;
  }
  if ( (unsigned __int16)(v6 - 12) > 1u )
  {
    v9 = 1534;
    goto LABEL_10;
  }
  v27 = 0;
  v28 = *(unsigned __int8 *)(v2 + v3 + 15)
      + ((*(unsigned __int8 *)(v2 + v3 + 14)
        + ((*(unsigned __int8 *)(v2 + v3 + 13) + (*(unsigned __int8 *)(v2 + v3 + 12) << 8)) << 8)) << 8);
  if ( v28 <= 0 )
    return 0;
  while ( 1 )
  {
    v29 = v27 + ((v28 - v27) >> 1);
    v30 = 12 * v29;
    v31 = (unsigned __int8 *)(v3 + v30 + v4);
    v32 = v31[19] + (v31[16] << 24) + (v31[18] << 8) + (v31[17] << 16);
    if ( a2 >= v32 )
      break;
    v28 = v27 + ((v28 - v27) >> 1);
LABEL_33:
    if ( v27 >= v28 )
      return 0;
  }
  if ( a2 > (unsigned int)(v31[23] + (v31[20] << 24) + (v31[22] << 8) + (v31[21] << 16)) )
  {
    v27 = v29 + 1;
    goto LABEL_33;
  }
  v33 = *(unsigned __int8 *)(v3 + v30 + v4 + 27)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 24) << 24)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 26) << 8)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 25) << 16);
  if ( v6 == 12 )
    return a2 + v33 - v32;
  else
    return v33;
}

// 140272530: using guessed type __int16[2];
// 140272E60: using guessed type __int16[45];
// 140273010: using guessed type __int16 aUnicodeCodepoi[56];

//----- (0000000140178800) ----------------------------------------------------
__int64            sub_140178800(char *a1, __int64 a2, int a3)
{
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdi
  int v9; // ecx
  bool v10; // zf
  unsigned int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  unsigned int v15; // ebx
  int v16; // eax

  v6 = 0;
  v7 = sub_140179790(a1);
  if ( (v7 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      v8 = -1;
      do
        ++v8;
      while ( *(_BYTE *)(v8 + a2) );
      v9 = (unsigned __int8)a1[v7];
      if ( *(_WORD *)&a1[v7] == 49 && !a1[v7 + 2] && !a1[v7 + 3] )
        break;
      if ( v9 == 116 )
      {
        if ( a1[v7 + 1] == 121 && a1[v7 + 2] == 112 && a1[v7 + 3] == 49 )
          break;
      }
      else if ( v9 == 79 && a1[v7 + 1] == 84 && a1[v7 + 2] == 84 && a1[v7 + 3] == 79 )
      {
        break;
      }
      if ( (_BYTE)v9 )
      {
        if ( (_BYTE)v9 != 116 || a1[v7 + 1] != 114 || a1[v7 + 2] != 117 )
          goto LABEL_42;
        v10 = a1[v7 + 3] == 101;
      }
      else
      {
        if ( a1[v7 + 1] != 1 || a1[v7 + 2] )
          goto LABEL_42;
        v10 = a1[v7 + 3] == 0;
      }
      if ( v10 )
        break;
LABEL_42:
      ++v6;
      v7 = sub_140179790(a1);
      if ( (v7 & 0x80000000) != 0 )
        return v7;
    }
    if ( !a3
      || (((unsigned __int8)a3 ^ (unsigned __int8)a1[(unsigned int)sub_140180D50((__int64)a1, v7, "head") + 45]) & 7) == 0 )
    {
      v11 = v7 + 12;
      v12 = 0;
      v13 = (unsigned __int8)a1[v7 + 5] + ((unsigned __int8)a1[v7 + 4] << 8);
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = v11 + 16 * v12;
          if ( a1[v14] == 110 && a1[v14 + 1] == 97 && a1[v14 + 2] == 109 && a1[v14 + 3] == 101 )
            break;
          if ( ++v12 >= v13 )
            goto LABEL_42;
        }
        v15 = (unsigned __int8)a1[16 * v12 + 11 + v11]
            + ((unsigned __int8)a1[16 * v12 + 8 + v11] << 24)
            + ((unsigned __int8)a1[v14 + 10] << 8)
            + ((unsigned __int8)a1[v14 + 9] << 16);
        if ( v15 )
        {
          if ( a3 )
          {
            if ( (unsigned int)sub_1401818E0((__int64)a1, v15, a2, v8, 16, -1) )
              return v7;
            v16 = sub_1401818E0((__int64)a1, v15, a2, v8, 1, -1);
          }
          else
          {
            if ( (unsigned int)sub_1401818E0((__int64)a1, v15, a2, v8, 16, 17) )
              return v7;
            v16 = sub_1401818E0((__int64)a1, v15, a2, v8, 1, 2);
          }
          if ( v16 || (unsigned int)sub_1401818E0((__int64)a1, v15, a2, v8, 3, -1) )
            return v7;
        }
      }
    }
    goto LABEL_42;
  }
  return v7;
}


//----- (0000000140178A70) ----------------------------------------------------
__int64            sub_140178A70(__int64 a1, int a2, float a3, void **a4, _DWORD *a5)
{
  float v5; // xmm10_4
  __int64 v7; // r15
  __int64 v9; // rbx
  int v10; // r8d
  __int64 v11; // rdi
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  _DWORD *v16; // r12
  void *v17; // rax
  int v18; // r8d
  int i; // ebp
  __int64 v21; // r10
  __int16 *v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rcx
  float v25; // xmm8_4
  __m128i v26; // xmm9
  float v27; // xmm9_4
  float v28; // xmm8_4
  __m128i v29; // xmm9
  float v30; // xmm9_4
  int v31; // [rsp+E8h] [rbp+10h] BYREF

  v31 = 0;
  v5 = a3 * a3;
  v7 = a2;
  v9 = 0;
  v10 = 0;
  LODWORD(v11) = 0;
  if ( a2 > 0 )
  {
    v12 = (_BYTE *)(a1 + 12);
    v13 = v7;
    do
    {
      v14 = *v12 == 1;
      v15 = v10 + 1;
      v12 += 14;
      if ( !v14 )
        v15 = v10;
      v10 = v15;
      --v13;
    }
    while ( v13 );
  }
  v16 = a5;
  *a5 = v10;
  if ( !v10 )
    return 0;
  v17 = (void *)sr_path_malloc(4LL * v10);
  *a4 = v17;
  if ( !v17 )
  {
    *v16 = 0;
    return 0;
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( i == 1 )
    {
      v9 = sr_path_malloc(8LL * v31);
      if ( !v9 )
      {
        free(nullptr);
        free(*a4);
        *a4 = nullptr;
        *v16 = 0;
        return 0;
      }
    }
    v31 = 0;
    v21 = -1;
    if ( v7 > 0 )
    {
      v22 = (__int16 *)(a1 + 10);
      v23 = v7;
      while ( 1 )
      {
        if ( *((_BYTE *)v22 + 2) == 1 )
        {
          if ( v21 >= 0 )
            *((_DWORD *)*a4 + v21) = v31 - v11;
          ++v21;
          v11 = v31;
          v28 = (float)*(v22 - 5);
          v29 = _mm_cvtsi32_si128(*(v22 - 4));
          ++v31;
          v30 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0];
          if ( v9 )
          {
            *(float *)(v9 + 8 * v11) = v28;
            *(float *)(v9 + 8 * v11 + 4) = v30;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)v22 + 2) == 2 )
        {
          v24 = v31;
          v25 = (float)*(v22 - 5);
          v26 = _mm_cvtsi32_si128(*(v22 - 4));
          ++v31;
          v27 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v26), f32)[0];
          if ( v9 )
          {
            *(float *)(v9 + 8 * v24) = v25;
            *(float *)(v9 + 8 * v24 + 4) = v27;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)v22 + 2) == 3 )
          break;
        if ( *((_BYTE *)v22 + 2) == 4 )
        {
          sub_140183DC0(
            v9,
            &v31,
            v18,
            (int)v22,
            (float)*(v22 - 3),
            COERCE_UNSIGNED_INT((float)*(v22 - 2)),
            (float)*(v22 - 1),
            COERCE_UNSIGNED_INT((float)*v22),
            (float)*(v22 - 5),
            COERCE_UNSIGNED_INT((float)*(v22 - 4)),
            v5,
            0);
LABEL_20:
          v18 = *(v22 - 5);
        }
LABEL_28:
        v22 += 7;
        if ( !--v23 )
          goto LABEL_29;
      }
      sub_140184190(
        v9,
        &v31,
        v18,
        (int)v22,
        (float)*(v22 - 3),
        (float)*(v22 - 2),
        (float)*(v22 - 5),
        (float)*(v22 - 4),
        v5,
        0);
      goto LABEL_20;
    }
LABEL_29:
    *((_DWORD *)*a4 + v21) = v31 - v11;
  }
  return v9;
}

// 140178C36: variable 'v18' is possibly undefined
// 140178C3B: variable 'v22' is possibly undefined
// 140178D15: variable 'v21' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (0000000140178E30) ----------------------------------------------------
__int64            sub_140178E30(__int64 a1, int a2, int a3, int a4, float *a5, float *a6, float *a7, int a8)
{
  float v9; // xmm3_4
  __int64 v10; // r9
  float v11; // xmm6_4
  float v12; // xmm4_4
  __m128 v13; // xmm0
  __m128d v14; // xmm1
  int v15; // ecx
  __m128 v16; // xmm0
  int v17; // r11d
  __m128d v18; // xmm1
  int v19; // ecx
  __int64 result; // rax

  if ( a8 )
    v9 = 0.0;
  else
    v9 = -0.5;
  v10 = 5LL * a4;
  v11 = 1.0 / (float)a2;
  v12 = 1.0 / (float)a3;
  v13 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4 * v10 + 8))));
  SR_VEC_LANES(128, v13, f32)[0] = (float)(SR_VEC_LANES(128, v13, f32)[0] + *a5) + 0.5;
  v14 = _mm_cvtps_pd(v13);
  v15 = (int)SR_VEC_LANES(128, v14, f64)[0];
  if ( (double)v15 != SR_VEC_LANES(128, v14, f64)[0] )
    SR_VEC_LANES(128, v14, f64)[0] = (double)(v15 - (_mm_movemask_pd(_mm_unpacklo_pd(v14, v14)) & 1));
  v16 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4 * v10 + 12))));
  v17 = (int)SR_VEC_LANES(128, v14, f64)[0];
  SR_VEC_LANES(128, v16, f32)[0] = (float)(SR_VEC_LANES(128, v16, f32)[0] + *a6) + 0.5;
  v18 = _mm_cvtps_pd(v16);
  v19 = (int)SR_VEC_LANES(128, v18, f64)[0];
  if ( (double)v19 != SR_VEC_LANES(128, v18, f64)[0] )
    SR_VEC_LANES(128, v18, f64)[0] = (double)(v19 - (_mm_movemask_pd(_mm_unpacklo_pd(v18, v18)) & 1));
  *a7 = (float)v17 + v9;
  a7[1] = (float)(int)SR_VEC_LANES(128, v18, f64)[0] + v9;
  a7[4] = (float)(v17 + *(unsigned __int16 *)(a1 + 4 * v10 + 4) - *(unsigned __int16 *)(a1 + 4 * v10)) + v9;
  a7[5] = (float)((int)SR_VEC_LANES(128, v18, f64)[0]
                + *(unsigned __int16 *)(a1 + 4 * v10 + 6)
                - *(unsigned __int16 *)(a1 + 4 * v10 + 2))
        + v9;
  a7[2] = (float)*(unsigned __int16 *)(a1 + 4 * v10) * v11;
  a7[3] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 2) * v12;
  a7[6] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 4) * v11;
  result = *(unsigned __int16 *)(a1 + 4 * v10 + 6);
  a7[7] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 6) * v12;
  *a5 = *(float *)(a1 + 4 * v10 + 16) + *a5;
  return result;
}

// 140178EAE: conditional instruction was optimized away because rcx.8<100000000u
// 140178EFC: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140179010) ----------------------------------------------------
__int64            sub_140179010(__int64 a1, float a2, float a3, int a4, int *a5, int *a6, int *a7, int *a8)
{
  int v9; // eax

  v9 = sub_140178410(a1, a4);
  return sub_140179E50(a1, a2, a3, 0.0, 0.0, v9, a5, a6, a7, a8);
}


//----- (0000000140179090) ----------------------------------------------------
__int64            sub_140179090(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v9; // eax

  v9 = sub_140178410(a1, a2);
  return sub_140179B80(a1, v9, a3, a4, 0.0, 0, a5, a6, a7, a8);
}


//----- (0000000140179120) ----------------------------------------------------
__int64            sub_140179120(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int v11; // eax

  v11 = sub_140178410(a1, a2);
  return sub_140179B80(a1, v11, a3, a4, a5, a6, a7, a8, a9, a10);
}


//----- (0000000140179160) ----------------------------------------------------
__int64            sub_140179160(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  int v11; // eax

  v11 = sub_140178410(a1, a6);
  return sub_140179E50(a1, a2, a3, a4, a5, v11, a7, a8, a9, a10);
}


//----- (00000001401791D0) ----------------------------------------------------
__int64            sub_1401791D0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401791D0[64];
#define v18 (*(__int64 (*))(void *)(sr_frame_1401791D0 + 8)) /* [rsp+20h] */
#define v19 (*(__int128 (*))(void *)(sr_frame_1401791D0 + 16)) /* [rsp+28h] */
#define v20 (*(__int128 (*))(void *)(sr_frame_1401791D0 + 32)) /* [rsp+38h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_1401791D0 + 48)) /* [rsp+48h] */
#define v22 (*(int (*))(void *)(sr_frame_1401791D0 + 56)) /* [rsp+50h] */

  v9 = sub_140178410(a1, a2);
  if ( *(_DWORD *)(a1 + 76) )
  {
    v10 = 0;
    v18 = 1;
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v11 = sub_140182AD0(a1, v9, (__int64)&v18);
    v12 = v11;
    if ( a3 )
    {
      v13 = 0;
      if ( v11 )
        v13 = v20;
      *a3 = v13;
    }
    if ( a4 )
    {
      v14 = 0;
      if ( v11 )
        v14 = DWORD2(v20);
      *a4 = v14;
    }
    if ( a5 )
    {
      v15 = 0;
      if ( v12 )
        v15 = DWORD1(v20);
      *a5 = v15;
    }
    if ( a6 )
    {
      if ( v12 )
        v10 = HIDWORD(v20);
      *a6 = v10;
    }
  }
  else
  {
    v16 = sub_14017DA60(a1, v9);
    if ( v16 < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 8LL) << 8));
  }
  return 1;
}
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22


//----- (0000000140179360) ----------------------------------------------------
int            sub_140179360(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // eax

  v7 = sub_140178410(a1, a2);
  return sub_14017A3C0(a1, v7, a3, a4);
}


//----- (00000001401793A0) ----------------------------------------------------
__int64            sub_1401793A0(__int64 a1, int a2, int a3)
{
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  unsigned int v10; // r11d
  __int64 v11; // rax
  unsigned __int8 *v12; // r10
  int v13; // r9d
  unsigned int v14; // ebx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdi
  unsigned int v18; // ecx

  if ( !*(_DWORD *)(a1 + 44) && !*(_DWORD *)(a1 + 48) )
    return 0;
  v6 = sub_140178410(a1, a3);
  v7 = sub_140178410(a1, a2);
  v8 = 0;
  v9 = v7;
  v10 = 0;
  if ( *(_DWORD *)(a1 + 48) )
    v10 = sub_14017DCC0(a1, v7, v6);
  v11 = *(int *)(a1 + 44);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v11);
    if ( v12[3] + (v12[2] << 8) )
    {
      if ( v12[9] + (v12[8] << 8) == 1 )
      {
        v13 = 0;
        v14 = v6 | (v9 << 16);
        v15 = (v12[10] << 8) + v12[11] - 1;
        if ( v15 >= 0 )
        {
          do
          {
            v16 = (v15 + v13) >> 1;
            v17 = 6 * v16;
            v18 = v12[v17 + 21] + (v12[v17 + 18] << 24) + (v12[v17 + 20] << 8) + (v12[v17 + 19] << 16);
            if ( v14 >= v18 )
            {
              if ( v14 <= v18 )
              {
                v8 = (__int16)(v12[v17 + 23] + (v12[v17 + 22] << 8));
                break;
              }
              v13 = v16 + 1;
            }
            else
            {
              v15 = v16 - 1;
            }
          }
          while ( v13 <= v15 );
        }
      }
    }
    v10 += v8;
  }
  return v10;
}


//----- (0000000140179510) ----------------------------------------------------
__int64            sub_140179510(
        __int64 a1,
        float a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        float a6,
        void *a7,
        int *a8,
        unsigned int *a9,
        signed int *a10)
{
  int v12; // eax

  v12 = sub_140178410(a1, a3);
  return sub_14017A640(a1, a2, v12, a4, a5, a6, a7, a8, a9, a10);
}


//----- (0000000140179560) ----------------------------------------------------
__int64            sub_140179560(__int64 a1, int a2, __int64 *a3)
{
  int v5; // eax

  v5 = sub_140178410(a1, a2);
  return sub_14017B360(a1, v5, a3);
}


//----- (0000000140179590) ----------------------------------------------------
_DWORD *           sub_140179590(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = *(_QWORD *)(a1 + 8) + *(int *)(a1 + 28);
  *a2 = (__int16)((*(unsigned __int8 *)(v5 + 36) << 8) + *(unsigned __int8 *)(v5 + 37));
  *a3 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 38LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 39LL));
  *a4 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 40LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 41LL));
  *a5 = (__int16)(*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 43LL)
                + (*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 42LL) << 8));
  return a5;
}


//----- (0000000140179650) ----------------------------------------------------
unsigned __int64            sub_140179650(__int64 a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // r14d
  int v13; // r8d
  __int64 v14; // r9

  v6 = *(_QWORD *)(a1 + 8);
  v10 = sub_140180D50(v6, *(_DWORD *)(a1 + 16), "name");
  if ( !v10 )
    return 0;
  v11 = 0;
  v12 = v10 + (*(unsigned __int8 *)(v6 + v10 + 4) << 8) + *(unsigned __int8 *)(v6 + v10 + 5);
  v13 = *(unsigned __int8 *)(v6 + v10 + 3) + (*(unsigned __int8 *)(v6 + v10 + 2) << 8);
  if ( !v13 )
    return 0;
  while ( 1 )
  {
    v14 = v10 + 6 + 12 * v11;
    if ( a3 == *(unsigned __int8 *)(v14 + v6 + 1) + (*(unsigned __int8 *)(v14 + v6) << 8)
      && a4 == *(unsigned __int8 *)(v14 + v6 + 3) + (*(unsigned __int8 *)(v14 + v6 + 2) << 8)
      && a5 == *(unsigned __int8 *)(v14 + v6 + 5) + (*(unsigned __int8 *)(v14 + v6 + 4) << 8)
      && a6 == *(unsigned __int8 *)(v14 + v6 + 7) + (*(unsigned __int8 *)(v14 + v6 + 6) << 8) )
    {
      break;
    }
    if ( ++v11 >= v13 )
      return 0;
  }
  *a2 = *(unsigned __int8 *)(v14 + v6 + 9) + (*(unsigned __int8 *)(v14 + v6 + 8) << 8);
  return ((unsigned __int64)*(unsigned __int8 *)(v14 + v6 + 10) << 8) + v6 + *(unsigned __int8 *)(v14 + v6 + 11) + v12;
}


//----- (0000000140179790) ----------------------------------------------------
__int64            sub_140179790(char *a1)
{
  int v1; // edx
  _BYTE *v2; // rcx
  unsigned __int8 *v3; // r8

  if ( sub_140181710(a1) )
    return (unsigned int)-(v1 != 0);
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v3[7] - 0x10000 + (v3[4] << 24) + (v3[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0
    && v1 < v3[11] + ((v3[10] + ((v3[9] + (v3[8] << 8)) << 8)) << 8) )
  {
    return v3[4 * v1 + 15] + ((v3[4 * v1 + 14] + ((v3[4 * v1 + 13] + (v3[4 * v1 + 12] << 8)) << 8)) << 8);
  }
  return 0xFFFFFFFFLL;
}

// 1401797A0: variable 'v1' is possibly undefined
// 1401797A9: variable 'v2' is possibly undefined
// 1401797EB: variable 'v3' is possibly undefined

//----- (0000000140179870) ----------------------------------------------------
__int64            sub_140179870(char *a1)
{
  int v1; // edx
  _BYTE *v2; // rcx
  unsigned __int8 *v3; // r8

  if ( sub_140181710(a1) )
    return (unsigned int)-(v1 != 0);
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v3[7] - 0x10000 + (v3[4] << 24) + (v3[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0
    && v1 < v3[11] + ((v3[10] + ((v3[9] + (v3[8] << 8)) << 8)) << 8) )
  {
    return v3[4 * v1 + 15] + ((v3[4 * v1 + 14] + ((v3[4 * v1 + 13] + (v3[4 * v1 + 12] << 8)) << 8)) << 8);
  }
  return 0xFFFFFFFFLL;
}

// 140179880: variable 'v1' is possibly undefined
// 140179889: variable 'v2' is possibly undefined
// 1401798CB: variable 'v3' is possibly undefined

//----- (0000000140179950) ----------------------------------------------------
int            sub_140179950(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // eax

  if ( a2 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 4LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 5LL));
    *a2 = result;
  }
  if ( a3 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 6LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 7LL));
    *a3 = result;
  }
  if ( a4 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 8LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 9LL));
    *a4 = result;
  }
  return result;
}


//----- (0000000140179A00) ----------------------------------------------------
__int64            sub_140179A00(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  result = sub_140180D50(v4, *(_DWORD *)(a1 + 16), "OS/2");
  if ( (_DWORD)result )
  {
    if ( a2 )
      *a2 = (__int16)((*(unsigned __int8 *)(v4 + (int)result + 68) << 8) + *(unsigned __int8 *)(v4 + (int)result + 69));
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 70LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 71LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 72LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 73LL));
    return 1;
  }
  return result;
}


//----- (0000000140179AD0) ----------------------------------------------------
__int64            sub_140179AD0(__int64 a1, float a2, float a3, int a4, int *a5, int *a6, int *a7, int *a8)
{
  return sub_140179E50(a1, a2, a3, 0.0, 0.0, a4, a5, a6, a7, a8);
}


//----- (0000000140179B20) ----------------------------------------------------
__int64            sub_140179B20(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  return sub_140179B80(a1, a2, a3, a4, 0.0, 0, a5, a6, a7, a8);
}


//----- (0000000140179B80) ----------------------------------------------------
__int64            sub_140179B80(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int v13; // ebx
  __int64 result; // rax
  int v15; // edi
  int v16; // r11d
  int v17; // r8d
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r10
  __int16 v21; // r8
  __int16 v22; // dx
  __m128 v23; // xmm0
  __m128d v24; // xmm1
  int v25; // ecx
  __m128 v26; // xmm3
  __m128 v27; // xmm0
  __m128d v28; // xmm2
  int v29; // ecx
  __m128 v30; // xmm0
  __m128d v31; // xmm1
  int v32; // ecx
  __m128d v33; // xmm1
  int v34; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140179B80[64];
#define v35 (*(__int64 (*))(void *)(sr_frame_140179B80 + 8)) /* [rsp+20h] */
#define v36 (*(__int128 (*))(void *)(sr_frame_140179B80 + 16)) /* [rsp+28h] */
#define v37 (*(__int128 (*))(void *)(sr_frame_140179B80 + 32)) /* [rsp+38h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_140179B80 + 48)) /* [rsp+48h] */
#define v39 (*(int (*))(void *)(sr_frame_140179B80 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    v13 = 0;
    v35 = 1;
    v38 = 0;
    v39 = 0;
    v36 = 0;
    v37 = 0;
    result = sub_140182AD0(a1, a2, (__int64)&v35);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( (_DWORD)result )
    {
      v15 = HIDWORD(v37);
      v16 = v37;
      v17 = DWORD1(v37);
      v13 = DWORD2(v37);
    }
    goto LABEL_7;
  }
  v18 = sub_14017DA60(a1, a2);
  if ( v18 >= 0 )
  {
    v19 = *(_QWORD *)(a1 + 8);
    v20 = v18;
    v21 = *(unsigned __int8 *)(v19 + v18 + 7);
    v15 = (__int16)(*(unsigned __int8 *)(v19 + v18 + 9) + (*(unsigned __int8 *)(v19 + v18 + 8) << 8));
    v22 = *(unsigned __int8 *)(v19 + v18 + 3) + (*(unsigned __int8 *)(v19 + v18 + 2) << 8);
    result = *(unsigned __int8 *)(v19 + v18 + 5);
    v16 = v22;
    v17 = (__int16)((*(unsigned __int8 *)(v19 + v20 + 6) << 8) + v21);
    v13 = (__int16)(result + (*(unsigned __int8 *)(v19 + v20 + 4) << 8));
LABEL_7:
    if ( a7 )
    {
      v23 = _mm_set_ss((float)v16);
      SR_VEC_LANES(128, v23, f32)[0] = (float)(SR_VEC_LANES(128, v23, f32)[0] * a3) + a5;
      v24 = _mm_cvtps_pd(v23);
      v25 = (int)SR_VEC_LANES(128, v24, f64)[0];
      if ( (double)v25 != SR_VEC_LANES(128, v24, f64)[0] )
        SR_VEC_LANES(128, v24, f64)[0] = (double)(v25 - (_mm_movemask_pd(_mm_unpacklo_pd(v24, v24)) & 1));
      result = (unsigned int)(int)SR_VEC_LANES(128, v24, f64)[0];
      *a7 = result;
    }
    v26 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
    if ( a8 )
    {
      v27 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
      SR_VEC_LANES(128, v27, f32)[0] = a6 - (float)((float)v15 * a4);
      v28 = _mm_cvtps_pd(v27);
      v29 = (int)SR_VEC_LANES(128, v28, f64)[0];
      if ( (double)v29 != SR_VEC_LANES(128, v28, f64)[0] )
        SR_VEC_LANES(128, v28, f64)[0] = (double)(v29 - (_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1));
      result = (unsigned int)(int)SR_VEC_LANES(128, v28, f64)[0];
      *a8 = result;
    }
    if ( a9 )
    {
      v30 = _mm_set_ss((float)v17);
      SR_VEC_LANES(128, v30, f32)[0] = (float)(SR_VEC_LANES(128, v30, f32)[0] * a3) + a5;
      v31 = _mm_cvtps_pd(v30);
      v32 = (int)SR_VEC_LANES(128, v31, f64)[0];
      if ( (double)v32 != SR_VEC_LANES(128, v31, f64)[0] )
        SR_VEC_LANES(128, v31, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v31, v31)) & 1) + v32);
      result = (unsigned int)(int)SR_VEC_LANES(128, v31, f64)[0];
      *a9 = result;
    }
    if ( a10 )
    {
      SR_VEC_LANES(128, v26, f32)[0] = a6 - (float)((float)v13 * a4);
      v33 = _mm_cvtps_pd(v26);
      v34 = (int)SR_VEC_LANES(128, v33, f64)[0];
      if ( (double)v34 != SR_VEC_LANES(128, v33, f64)[0] )
        SR_VEC_LANES(128, v33, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v33, v33)) & 1) + v34);
      result = (unsigned int)(int)SR_VEC_LANES(128, v33, f64)[0];
      *a10 = result;
    }
    return result;
  }
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  result = (__int64)a10;
  if ( a10 )
    *a10 = 0;
  return result;
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39

// 140179CAB: conditional instruction was optimized away because rcx.8<100000000u
// 140179D0E: conditional instruction was optimized away because rcx.8<100000000u
// 140179D66: conditional instruction was optimized away because rcx.8<100000000u
// 140179DC4: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140179E50) ----------------------------------------------------
__int64            sub_140179E50(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  float v10; // xmm6_4
  float v11; // xmm7_4
  int v13; // r12d
  __int64 v15; // rbx
  int v16; // eax
  int v17; // edi
  int v18; // r11d
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // r9
  __m128 v23; // xmm0
  __m128d v24; // xmm1
  int v25; // ecx
  int v26; // r14d
  __m128 v27; // xmm0
  __m128d v28; // xmm2
  int v29; // ecx
  __m128 v30; // xmm0
  int v31; // ebp
  __m128d v32; // xmm2
  int v33; // ecx
  __m128 v34; // xmm0
  int v35; // ecx
  __m128d v36; // xmm1
  int v37; // edx
  int v38; // edi
  int v39; // eax
  int v40; // edx
  int v41; // edi
  int v42; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140179E50[96];
#define v43 (*(__int64 (*))(void *)(sr_frame_140179E50 + 0)) /* [rsp+58h] */
#define Block (*(void * (*))(void *)(sr_frame_140179E50 + 8)) /* [rsp+60h] */
#define v45 (*(int (*)[4])(void *)(sr_frame_140179E50 + 16)) /* [rsp+68h] */
#define v46 (*(__int64 (*))(void *)(sr_frame_140179E50 + 32)) /* [rsp+78h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140179E50 + 40)) /* [rsp+80h] */
#define v48 (*(__int128 (*))(void *)(sr_frame_140179E50 + 48)) /* [rsp+88h] */
#define v49 (*(__int128 (*))(void *)(sr_frame_140179E50 + 64)) /* [rsp+98h] */
#define v50 (*(__int64 (*))(void *)(sr_frame_140179E50 + 80)) /* [rsp+A8h] */
#define v51 (*(int (*))(void *)(sr_frame_140179E50 + 88)) /* [rsp+B0h] */

  v10 = a2;
  v11 = a3;
  v13 = sub_14017B360(a1, a6, (__int64 *)&Block);
  if ( a2 == 0.0 )
    v10 = a3;
  if ( a3 == 0.0 )
  {
    if ( v10 == 0.0 )
    {
      free(Block);
      return 0;
    }
    v11 = v10;
  }
  v15 = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v47 = 1;
    v50 = 0;
    v49 = 0;
    v51 = 0;
    v48 = 0;
    v16 = sub_140182AD0(a1, a6, (__int64)&v47);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( v16 )
      v17 = HIDWORD(v49);
    v20 = 0;
    if ( v16 )
    {
      v18 = v49;
      v19 = DWORD1(v49);
      v20 = DWORD2(v49);
    }
    goto LABEL_15;
  }
  v21 = sub_14017DA60(a1, a6);
  if ( v21 >= 0 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    v17 = (__int16)(*(unsigned __int8 *)(v22 + v21 + 9) + (*(unsigned __int8 *)(v22 + v21 + 8) << 8));
    v18 = (__int16)(*(unsigned __int8 *)(v22 + v21 + 3) + (*(unsigned __int8 *)(v22 + v21 + 2) << 8));
    v19 = (__int16)((*(unsigned __int8 *)(v22 + v21 + 6) << 8) + *(unsigned __int8 *)(v22 + v21 + 7));
    v20 = (__int16)(*(unsigned __int8 *)(v22 + v21 + 5) + (*(unsigned __int8 *)(v22 + v21 + 4) << 8));
LABEL_15:
    v23 = _mm_set_ss((float)v18);
    SR_VEC_LANES(128, v23, f32)[0] = (float)(SR_VEC_LANES(128, v23, f32)[0] * v10) + a4;
    v24 = _mm_cvtps_pd(v23);
    v25 = (int)SR_VEC_LANES(128, v24, f64)[0];
    if ( (double)v25 != SR_VEC_LANES(128, v24, f64)[0] )
      SR_VEC_LANES(128, v24, f64)[0] = (double)(v25 - (_mm_movemask_pd(_mm_unpacklo_pd(v24, v24)) & 1));
    v26 = (int)SR_VEC_LANES(128, v24, f64)[0];
    v27 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a5))));
    SR_VEC_LANES(128, v27, f32)[0] = a5 - (float)((float)v17 * v11);
    v28 = _mm_cvtps_pd(v27);
    v29 = (int)SR_VEC_LANES(128, v28, f64)[0];
    if ( (double)v29 != SR_VEC_LANES(128, v28, f64)[0] )
      SR_VEC_LANES(128, v28, f64)[0] = (double)(v29 - (_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1));
    v30 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a5))));
    v31 = (int)SR_VEC_LANES(128, v28, f64)[0];
    SR_VEC_LANES(128, v30, f32)[0] = a5 - (float)((float)v20 * v11);
    v32 = _mm_cvtps_pd(v30);
    v33 = (int)SR_VEC_LANES(128, v32, f64)[0];
    if ( (double)v33 != SR_VEC_LANES(128, v32, f64)[0] )
      SR_VEC_LANES(128, v32, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v32, v32)) & 1) + v33);
    v34 = _mm_set_ss((float)v19);
    v35 = (int)SR_VEC_LANES(128, v32, f64)[0];
    SR_VEC_LANES(128, v34, f32)[0] = (float)(SR_VEC_LANES(128, v34, f32)[0] * v10) + a4;
    v36 = _mm_cvtps_pd(v34);
    v37 = (int)SR_VEC_LANES(128, v36, f64)[0];
    if ( (double)v37 != SR_VEC_LANES(128, v36, f64)[0] )
      SR_VEC_LANES(128, v36, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v36, v36)) & 1) + v37);
    v38 = (int)SR_VEC_LANES(128, v36, f64)[0];
    v39 = v26;
    v40 = v31;
    goto LABEL_29;
  }
  v26 = 0;
  v31 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
LABEL_29:
  v41 = v38 - v39;
  v42 = v35 - v40;
  v45[0] = v41;
  v45[1] = v42;
  if ( a7 )
    *a7 = v41;
  if ( a8 )
    *a8 = v42;
  if ( a9 )
    *a9 = v26;
  if ( a10 )
    *a10 = v31;
  if ( v41 && v42 )
  {
    v46 = sr_path_malloc(v42 * v41);
    v15 = v46;
    if ( v46 )
    {
      v43 = *(_QWORD *)a1;
      v45[2] = v41;
      sub_14017D510(v45, 0.34999999, (__int64)Block, v13, v10, v11, a4, a5, v26, v31, 1, v43);
      v15 = v46;
    }
  }
  free(Block);
  return v15;
}
#undef v43
#undef Block
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

// 140179FFF: conditional instruction was optimized away because rcx.8<100000000u
// 14017A04C: conditional instruction was optimized away because rcx.8<100000000u
// 14017A098: conditional instruction was optimized away because rcx.8<100000000u
// 14017A0E5: conditional instruction was optimized away because rdx.8<100000000u
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (000000014017A240) ----------------------------------------------------
__int64            sub_14017A240(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017A240[64];
#define v16 (*(__int64 (*))(void *)(sr_frame_14017A240 + 8)) /* [rsp+20h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_14017A240 + 16)) /* [rsp+28h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_14017A240 + 32)) /* [rsp+38h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_14017A240 + 48)) /* [rsp+48h] */
#define v20 (*(int (*))(void *)(sr_frame_14017A240 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    v9 = 0;
    v16 = 1;
    v19 = 0;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    v10 = sub_140182AD0(a1, a2, (__int64)&v16);
    if ( a3 )
    {
      v11 = 0;
      if ( v10 )
        v11 = v18;
      *a3 = v11;
    }
    if ( a4 )
    {
      v12 = 0;
      if ( v10 )
        v12 = DWORD2(v18);
      *a4 = v12;
    }
    if ( a5 )
    {
      v13 = 0;
      if ( v10 )
        v13 = DWORD1(v18);
      *a5 = v13;
    }
    if ( a6 )
    {
      if ( v10 )
        v9 = HIDWORD(v18);
      *a6 = v9;
    }
  }
  else
  {
    v14 = sub_14017DA60(a1, a2);
    if ( v14 < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 8LL) << 8));
  }
  return 1;
}
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20


//----- (000000014017A3C0) ----------------------------------------------------
int            sub_14017A3C0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 v11; // dx
  __int16 v12; // ax
  unsigned __int8 *v13; // r8

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(int *)(a1 + 36);
  v6 = *(unsigned __int8 *)(v5 + v4 + 34);
  v7 = *(unsigned __int8 *)(v5 + v4 + 35);
  v8 = v7 + (*(unsigned __int8 *)(v5 + v4 + 34) << 8);
  if ( a2 >= v8 )
  {
    if ( a3 )
    {
      LODWORD(v5) = (__int16)((*(unsigned __int8 *)(v4 + *(int *)(a1 + 40) + 4 * (v7 + (v6 << 8)) - 4) << 8)
                            + *(unsigned __int8 *)(v4 + *(int *)(a1 + 40) + 4 * (v7 + (v6 << 8)) - 3));
      *a3 = v5;
    }
    if ( a4 )
    {
      v13 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 40) + 2 * (a2 - v8) + 4 * (v7 + (v6 << 8)));
      v11 = *v13;
      v12 = v13[1];
      goto LABEL_10;
    }
  }
  else
  {
    if ( a3 )
    {
      LODWORD(v5) = (__int16)((*(unsigned __int8 *)(4 * a2 + v4 + *(int *)(a1 + 40)) << 8)
                            + *(unsigned __int8 *)(4 * a2 + v4 + *(int *)(a1 + 40) + 1));
      *a3 = v5;
    }
    if ( a4 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = 4 * a2 + (__int64)*(int *)(a1 + 40);
      v11 = *(unsigned __int8 *)(v10 + v9 + 2);
      v12 = *(unsigned __int8 *)(v10 + v9 + 3);
LABEL_10:
      LODWORD(v5) = (__int16)((v11 << 8) + v12);
      *a4 = v5;
    }
  }
  return v5;
}


//----- (000000014017A4F0) ----------------------------------------------------
__int64            sub_14017A4F0(__int64 a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v7; // r11d
  __int64 v8; // rax
  unsigned __int8 *v9; // r10
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rsi
  unsigned int v15; // ecx

  v3 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 48) )
    v7 = sub_14017DCC0(a1, a2, a3);
  v8 = *(int *)(a1 + 44);
  if ( !(_DWORD)v8 )
    return v7;
  v9 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v8);
  if ( v9[3] + (v9[2] << 8) )
  {
    if ( v9[9] + (v9[8] << 8) == 1 )
    {
      v10 = 0;
      v11 = a3 | (a2 << 16);
      v12 = (v9[10] << 8) + v9[11] - 1;
      if ( v12 >= 0 )
      {
        while ( 1 )
        {
          v13 = (v12 + v10) >> 1;
          v14 = 6 * v13;
          v15 = v9[v14 + 21] + (v9[v14 + 18] << 24) + (v9[v14 + 20] << 8) + (v9[v14 + 19] << 16);
          if ( v11 >= v15 )
          {
            if ( v11 <= v15 )
            {
              v3 = (__int16)(v9[v14 + 23] + (v9[v14 + 22] << 8));
              return v3 + v7;
            }
            v10 = v13 + 1;
          }
          else
          {
            v12 = v13 - 1;
          }
          if ( v10 > v12 )
            return v7;
        }
      }
    }
  }
  return v3 + v7;
}


//----- (000000014017A640) ----------------------------------------------------
__int64            sub_14017A640(
        __int64 a1,
        float a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        float a6,
        void *a7,
        int *a8,
        unsigned int *a9,
        signed int *a10)
{
  float v10; // xmm13_4
  int v14; // ebx
  int v15; // eax
  int v16; // r11d
  int v17; // r8d
  int v18; // edx
  int v19; // eax
  __int64 v20; // r9
  __m128 v21; // xmm0
  __m128d v22; // xmm1
  int v23; // r10d
  __m128 v24; // xmm0
  __m128d v25; // xmm1
  __m128 v26; // xmm0
  int v27; // r9d
  __m128d v28; // xmm1
  int v29; // r8d
  __m128 v30; // xmm0
  __m128d v31; // xmm1
  int v32; // eax
  signed int v33; // r9d
  unsigned int v34; // r10d
  int v35; // ecx
  signed int v36; // esi
  int v37; // ebx
  signed int v38; // r12d
  float v39; // xmm6_4
  __int64 v40; // r13
  _BYTE *v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rax
  _BYTE *v44; // rdi
  float *v45; // r15
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rcx
  char v49; // al
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  _BYTE *v60; // rcx
  int v61; // edx
  signed int v62; // r9d
  float v63; // xmm12_4
  int v64; // eax
  __int64 v65; // r8
  int v66; // esi
  __m128i v67; // xmm10
  _BYTE *v68; // r12
  float v69; // xmm2_4
  float v70; // xmm10_4
  float v71; // xmm11_4
  float v72; // xmm1_4
  float v73; // xmm7_4
  float v74; // xmm6_4
  __int64 v75; // rbx
  int v76; // r13d
  __int64 v77; // rdx
  float v78; // xmm14_4
  float v79; // xmm15_4
  float v80; // xmm8_4
  float v81; // xmm11_4
  float v82; // xmm1_4
  char v83; // al
  float v84; // xmm9_4
  float v85; // xmm6_4
  float v86; // xmm10_4
  float v87; // xmm8_4
  float v88; // xmm9_4
  float v89; // xmm6_4
  float v90; // xmm4_4
  float v91; // xmm13_4
  float v92; // xmm13_4
  float v93; // xmm2_4
  float v94; // xmm1_4
  float v95; // xmm3_4
  float v96; // xmm10_4
  float v97; // xmm5_4
  float v98; // xmm0_4
  float v99; // xmm13_4
  float v100; // xmm4_4
  float v101; // xmm3_4
  float v102; // xmm6_4
  float v103; // xmm1_4
  float v104; // xmm10_4
  float v105; // xmm9_4
  int v106; // eax
  float v107; // xmm6_4
  float v108; // xmm1_4
  float v109; // xmm12_4
  float v110; // xmm13_4
  float v111; // xmm9_4
  float v112; // xmm11_4
  float v113; // xmm10_4
  float v114; // xmm4_4
  float v115; // xmm3_4
  float v116; // xmm6_4
  float v117; // xmm4_4
  float v118; // xmm3_4
  float v119; // xmm1_4
  float v120; // xmm2_4
  float v121; // xmm4_4
  float v122; // xmm4_4
  float v123; // xmm5_4
  float v124; // xmm3_4
  float v125; // xmm5_4
  float v126; // xmm5_4
  float v127; // xmm4_4
  float v128; // xmm3_4
  float v129; // xmm5_4
  float v130; // xmm7_4
  float v131; // xmm7_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017A640[224];
#define v133 (*(__int64 (*))(void *)(sr_frame_14017A640 + 8)) /* [rsp+0h] */
#define v134 (*(float (*))(void *)(sr_frame_14017A640 + 40)) /* [rsp+20h] */
#define v135 (*(float (*))(void *)(sr_frame_14017A640 + 44)) /* [rsp+24h] */
#define v136 (*(float (*))(void *)(sr_frame_14017A640 + 48)) /* [rsp+28h] */
#define v137 (*(float (*))(void *)(sr_frame_14017A640 + 52)) /* [rsp+2Ch] */
#define v138 (*(float (*))(void *)(sr_frame_14017A640 + 56)) /* [rsp+30h] */
#define v139 (*(float (*))(void *)(sr_frame_14017A640 + 60)) /* [rsp+34h] */
#define v140 (*(float (*))(void *)(sr_frame_14017A640 + 64)) /* [rsp+38h] */
#define v141 (*(signed int (*))(void *)(sr_frame_14017A640 + 68)) /* [rsp+3Ch] */
#define v142 (*(signed int (*))(void *)(sr_frame_14017A640 + 72)) /* [rsp+40h] */
#define Block (*(void * (*))(void *)(sr_frame_14017A640 + 80)) /* [rsp+48h] */
#define v144 (*(int (*))(void *)(sr_frame_14017A640 + 88)) /* [rsp+50h] */
#define v145 (*(float (*))(void *)(sr_frame_14017A640 + 92)) /* [rsp+54h] */
#define v146 (*(unsigned int (*))(void *)(sr_frame_14017A640 + 100)) /* [rsp+5Ch] */
#define v147 (*(float (*))(void *)(sr_frame_14017A640 + 104)) /* [rsp+60h] */
#define v148 (*(float (*))(void *)(sr_frame_14017A640 + 108)) /* [rsp+64h] */
#define v149 (*(float (*))(void *)(sr_frame_14017A640 + 112)) /* [rsp+68h] */
#define v150 (*(__int64 (*))(void *)(sr_frame_14017A640 + 120)) /* [rsp+70h] */
#define v151 (*(__int64 (*))(void *)(sr_frame_14017A640 + 128)) /* [rsp+78h] */
#define v152 (*(__int64 (*))(void *)(sr_frame_14017A640 + 136)) /* [rsp+80h] */
#define v153 (*(__int128 (*))(void *)(sr_frame_14017A640 + 144)) /* [rsp+88h] */
#define v154 (*(__int128 (*))(void *)(sr_frame_14017A640 + 160)) /* [rsp+98h] */
#define v155 (*(__int64 (*))(void *)(sr_frame_14017A640 + 176)) /* [rsp+A8h] */
#define v156 (*(int (*))(void *)(sr_frame_14017A640 + 184)) /* [rsp+B0h] */
#define v157 (*(float (*))(void *)(sr_frame_14017A640 + 192)) /* [rsp+B8h] */
#define v158 (*(float (*))(void *)(sr_frame_14017A640 + 196)) /* [rsp+BCh] */
#define v159 (*(float (*))(void *)(sr_frame_14017A640 + 200)) /* [rsp+C0h] */
#define v160 (*(__int64 (*))(void *)(sr_frame_14017A640 + 208)) /* [rsp+C8h] */

  v10 = a2;
  Block = a7;
  v136 = a2;
  if ( a2 != 0.0 )
  {
    v14 = 0;
    if ( *(_DWORD *)(a1 + 76) )
    {
      v152 = 1;
      v155 = 0;
      v156 = 0;
      v153 = 0;
      v154 = 0;
      v15 = sub_140182AD0(a1, a3, (__int64)&v152);
      v16 = 0;
      if ( v15 )
      {
        v16 = HIDWORD(v154);
        v14 = v154;
      }
      v17 = 0;
      if ( v15 )
        v17 = DWORD1(v154);
      v18 = 0;
      if ( v15 )
        v18 = DWORD2(v154);
    }
    else
    {
      v19 = sub_14017DA60(a1, a3);
      if ( v19 < 0 )
        return sub_1401F8B20((unsigned __int64)&v133 ^ v160);
      v20 = *(_QWORD *)(a1 + 8);
      v16 = (__int16)((*(unsigned __int8 *)(v20 + v19 + 8) << 8) + *(unsigned __int8 *)(v20 + v19 + 9));
      v14 = (__int16)(*(unsigned __int8 *)(v20 + v19 + 3) + (*(unsigned __int8 *)(v20 + v19 + 2) << 8));
      v17 = (__int16)((*(unsigned __int8 *)(v20 + v19 + 6) << 8) + *(unsigned __int8 *)(v20 + v19 + 7));
      v18 = (__int16)(*(unsigned __int8 *)(v20 + v19 + 5) + (*(unsigned __int8 *)(v20 + v19 + 4) << 8));
    }
    v21 = _mm_set_ss((float)v14);
    SR_VEC_LANES(128, v21, f32)[0] = SR_VEC_LANES(128, v21, f32)[0] * a2;
    v22 = _mm_cvtps_pd(v21);
    if ( (double)(int)SR_VEC_LANES(128, v22, f64)[0] != SR_VEC_LANES(128, v22, f64)[0] )
      SR_VEC_LANES(128, v22, f64)[0] = (double)((int)SR_VEC_LANES(128, v22, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v22, v22)) & 1));
    v23 = (int)SR_VEC_LANES(128, v22, f64)[0];
    v24 = _mm_set_ss((float)-v16);
    SR_VEC_LANES(128, v24, f32)[0] = SR_VEC_LANES(128, v24, f32)[0] * v10;
    v25 = _mm_cvtps_pd(v24);
    if ( (double)(int)SR_VEC_LANES(128, v25, f64)[0] != SR_VEC_LANES(128, v25, f64)[0] )
      SR_VEC_LANES(128, v25, f64)[0] = (double)((int)SR_VEC_LANES(128, v25, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v25, v25)) & 1));
    v26 = _mm_set_ss((float)v17);
    v27 = (int)SR_VEC_LANES(128, v25, f64)[0];
    SR_VEC_LANES(128, v26, f32)[0] = SR_VEC_LANES(128, v26, f32)[0] * v10;
    v28 = _mm_cvtps_pd(v26);
    if ( (double)(int)SR_VEC_LANES(128, v28, f64)[0] != SR_VEC_LANES(128, v28, f64)[0] )
      SR_VEC_LANES(128, v28, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1) + (int)SR_VEC_LANES(128, v28, f64)[0]);
    v29 = (int)SR_VEC_LANES(128, v28, f64)[0];
    v30 = _mm_set_ss((float)-v18);
    SR_VEC_LANES(128, v30, f32)[0] = SR_VEC_LANES(128, v30, f32)[0] * v10;
    v31 = _mm_cvtps_pd(v30);
    if ( (double)(int)SR_VEC_LANES(128, v31, f64)[0] != SR_VEC_LANES(128, v31, f64)[0] )
      SR_VEC_LANES(128, v31, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v31, v31)) & 1) + (int)SR_VEC_LANES(128, v31, f64)[0]);
    v32 = (int)SR_VEC_LANES(128, v31, f64)[0];
    if ( v23 != v29 && v27 != v32 )
    {
      v33 = v27 - a4;
      v142 = a4 + v32;
      v34 = v23 - a4;
      v35 = a4 + v29;
      v146 = v34;
      v141 = v33;
      v36 = a4 + v29 - v34;
      v144 = v35;
      v37 = v142 - v33;
      if ( Block )
        *(_DWORD *)Block = v36;
      if ( a8 )
        *a8 = v37;
      if ( a9 )
        *a9 = v34;
      v38 = v33;
      if ( a10 )
        *a10 = v33;
      v39 = -v10;
      v145 = -v10;
      v40 = (int)sub_14017B360(a1, a3, (__int64 *)&Block);
      v151 = sr_path_malloc(v36 * v37);
      v41 = (_BYTE *)v151;
      v42 = v40;
      v43 = sr_path_malloc(4 * v40);
      v44 = Block;
      v45 = (float *)v43;
      if ( (int)v40 > 0 )
      {
        v46 = 0;
        v47 = 14LL * ((int)v40 - 1);
        v48 = 0;
        do
        {
          v49 = v44[v48 + 12];
          if ( v49 == 2 )
          {
            v50 = (float)((float)*(__int16 *)&v44[v47 + 2] * v39) - (float)((float)*(__int16 *)&v44[v48 + 2] * v39);
            v51 = (float)((float)*(__int16 *)&v44[v47] * v10) - (float)((float)*(__int16 *)&v44[v48] * v10);
            v52 = fsqrt((float)(v50 * v50) + (float)(v51 * v51));
            if ( v52 == 0.0 )
              goto LABEL_38;
            v53 = 1.0 / v52;
          }
          else
          {
            if ( v49 != 3
              || (v54 = (float)*(__int16 *)&v44[v48 + 4] * v10,
                  v55 = (float)((float)((float)*(__int16 *)&v44[v48] * v10) - (float)(v54 + v54))
                      + (float)((float)*(__int16 *)&v44[v47] * v10),
                  v56 = (float)*(__int16 *)&v44[v48 + 6] * v39,
                  v57 = (float)((float)*(__int16 *)&v44[v48 + 2] * v39) - (float)(v56 + v56),
                  v58 = (float)*(__int16 *)&v44[v47 + 2] * v39,
                  v59 = (float)((float)(v57 + v58) * (float)(v57 + v58)) + (float)(v55 * v55),
                  v59 == 0.0) )
            {
LABEL_38:
              v53 = 0.0;
              goto LABEL_39;
            }
            v53 = 1.0 / v59;
          }
LABEL_39:
          v47 = v48;
          v48 += 14;
          v45[v46++] = v53;
        }
        while ( v46 < v40 );
      }
      if ( v38 >= v142 )
        goto LABEL_99;
      v60 = v41;
      v61 = v146;
      v62 = v142;
      v63 = v158;
      v150 = v36;
      v64 = v144;
      v65 = v36;
      Block = v41;
LABEL_42:
      v66 = v61;
      if ( v61 >= v64 )
        goto LABEL_98;
      v67 = _mm_cvtsi32_si128(v38);
      v68 = v60;
      v69 = 1.0 / v10;
      v70 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v67), f32)[0] + 0.5;
      v71 = (float)a5;
      v135 = v70;
      v72 = v70 / v39;
      v149 = 1.0 / v10;
      v148 = v70 / v39;
      v147 = v71;
LABEL_44:
      v73 = 999999.0;
      v74 = (float)v66 + 0.5;
      v134 = v74;
      v75 = 0;
      v76 = sub_14017FB20(v69 * v74, v72, v40, (__int64)v44);
      if ( v42 <= 0 )
        goto LABEL_91;
      while ( 1 )
      {
        v77 = 14 * v75;
        v78 = (float)*(__int16 *)&v44[14 * v75] * v10;
        v79 = (float)*(__int16 *)&v44[14 * v75 + 2] * v145;
        v80 = v78 - v74;
        v81 = v79 - v70;
        v82 = (float)(v80 * v80) + (float)(v81 * v81);
        if ( v82 < (float)(v73 * v73) )
          v73 = fsqrt(v82);
        v83 = v44[v77 + 12];
        if ( v83 == 2 )
        {
          v84 = (float)((float)*(__int16 *)&v44[v77 - 14] * v10) - v78;
          v85 = (float)((float)*(__int16 *)&v44[v77 - 12] * v145) - v79;
          v86 = fabs((float)(v81 * v84) - (float)(v85 * v80)) * v45[v75];
          if ( !v75 )
            sub_14023E640((char *)L"i != 0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x115Eu);
          if ( v86 >= v73
            || (v87 = (float)((float)(v80 * v84) + (float)(v81 * v85))
                    / (float)((float)(v85 * v85) + (float)(v84 * v84)),
                v87 > -0.0) )
          {
            v74 = v134;
          }
          else
          {
            v74 = v134;
            if ( v87 >= -1.0 )
              v73 = v86;
          }
          goto LABEL_88;
        }
        if ( v83 != 3 )
          goto LABEL_89;
        v88 = (float)*(__int16 *)&v44[14 * v75 - 14] * v10;
        v89 = (float)*(__int16 *)&v44[14 * v75 - 12] * v145;
        v90 = (float)*(__int16 *)&v44[v77 + 4] * v10;
        v91 = (float)*(__int16 *)&v44[v77 + 6];
        v138 = v88;
        v92 = v91 * v145;
        v137 = v89;
        v139 = v90;
        v93 = fmaxf(v90, v78);
        v140 = v92;
        v94 = fminf(v92, v79);
        v95 = fmaxf(v92, v79);
        if ( v134 > (float)(fminf(fminf(v90, v78), v88) - v73)
          && v134 < (float)(fmaxf(v93, v88) + v73)
          && v70 > (float)(fminf(v94, v89) - v73)
          && v70 < (float)(fmaxf(v95, v89) + v73) )
        {
          break;
        }
        v74 = v134;
        v10 = v136;
LABEL_89:
        if ( ++v75 >= v42 )
        {
          v71 = v147;
LABEL_91:
          if ( !v76 )
            v73 = -v73;
          v130 = (float)(v73 * a6) + v71;
          if ( v130 >= 0.0 )
            v131 = fminf(v130, 255.0);
          else
            v131 = 0.0;
          ++v66;
          v72 = v148;
          LODWORD(v40) = v42;
          v69 = v149;
          *v68++ = (int)v131;
          v64 = v144;
          if ( v66 >= v144 )
          {
            v39 = v145;
            v38 = v141;
            v60 = Block;
            v61 = v146;
            v65 = v150;
            v62 = v142;
LABEL_98:
            ++v38;
            v60 += v65;
            v141 = v38;
            Block = v60;
            if ( v38 >= v62 )
            {
LABEL_99:
              free(v45);
              free(v44);
              return sub_1401F8B20((unsigned __int64)&v133 ^ v160);
            }
            goto LABEL_42;
          }
          goto LABEL_44;
        }
      }
      v96 = v92 - v79;
      v97 = v90 - v78;
      v98 = v92 + v92;
      v99 = v45[v75];
      v100 = (float)(v78 - (float)(v90 + v90)) + v88;
      v101 = (float)(v79 - v98) + v89;
      v102 = (float)(v97 * v80) + (float)(v96 * v81);
      v103 = (float)((float)(v97 * v97) + (float)(v96 * v96)) + (float)(v96 * v96);
      v104 = (float)((float)(v96 * v101) + (float)(v97 * v100)) * 3.0;
      v105 = (float)((float)((float)(v81 * v101) + (float)(v80 * v100)) + (float)(v97 * v97)) + v103;
      if ( v99 == 0.0 )
      {
        if ( v104 == 0.0 )
        {
          if ( v105 != 0.0 )
          {
            v106 = 1;
            v107 = -(float)(v102 / v105);
            v157 = v107;
LABEL_67:
            v110 = v140;
            v111 = v137;
            v112 = v139;
            v113 = v138;
            if ( v107 >= 0.0 && v107 <= 1.0 )
            {
              v114 = v107 + v107;
              v115 = 1.0 - v107;
              v116 = v107 * v107;
              v117 = v114 * v115;
              v118 = v115 * v115;
              v119 = v116 * v137;
              v120 = (float)(v117 * v140) + (float)(v118 * v79);
              v121 = (float)((float)(v117 * v139) + (float)(v118 * v78)) + (float)(v116 * v138);
              v74 = v134;
              v122 = (float)((float)(v121 - v134) * (float)(v121 - v134))
                   + (float)((float)((float)(v120 + v119) - v135) * (float)((float)(v120 + v119) - v135));
              if ( v122 < (float)(v73 * v73) )
                v73 = fsqrt(v122);
LABEL_73:
              if ( v106 >= 2 && v63 >= 0.0 && v63 <= 1.0 )
              {
                v123 = (float)(v63 + v63) * (float)(1.0 - v63);
                v124 = (float)(v123 * v110) + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v79);
                v125 = (float)((float)((float)((float)((float)(v123 * v112)
                                                     + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v78))
                                             + (float)((float)(v63 * v63) * v113))
                                     - v74)
                             * (float)((float)((float)((float)(v123 * v112)
                                                     + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v78))
                                             + (float)((float)(v63 * v63) * v113))
                                     - v74))
                     + (float)((float)((float)(v124 + (float)((float)(v63 * v63) * v111)) - v135)
                             * (float)((float)(v124 + (float)((float)(v63 * v63) * v111)) - v135));
                if ( v125 < (float)(v73 * v73) )
                  v73 = fsqrt(v125);
              }
              if ( v106 >= 3 && v159 >= 0.0 && v159 <= 1.0 )
              {
                v126 = (float)(v159 + v159) * (float)(1.0 - v159);
                v127 = (float)(1.0 - v159) * (float)(1.0 - v159);
                v128 = v126 * v110;
                v10 = v136;
                v129 = (float)((float)((float)((float)((float)(v126 * v112) + (float)(v127 * v78))
                                             + (float)((float)(v159 * v159) * v113))
                                     - v74)
                             * (float)((float)((float)((float)(v126 * v112) + (float)(v127 * v78))
                                             + (float)((float)(v159 * v159) * v113))
                                     - v74))
                     + (float)((float)((float)((float)(v128 + (float)(v127 * v79)) + (float)((float)(v159 * v159) * v111))
                                     - v135)
                             * (float)((float)((float)(v128 + (float)(v127 * v79)) + (float)((float)(v159 * v159) * v111))
                                     - v135));
                if ( v129 < (float)(v73 * v73) )
                  v73 = fsqrt(v129);
                goto LABEL_88;
              }
LABEL_87:
              v10 = v136;
LABEL_88:
              v70 = v135;
              goto LABEL_89;
            }
LABEL_72:
            v74 = v134;
            goto LABEL_73;
          }
        }
        else
        {
          v108 = (float)(v105 * v105) - (float)((float)(v104 * 4.0) * v102);
          if ( v108 >= 0.0 )
          {
            v109 = fsqrt(v108);
            v106 = 2;
            v107 = (float)((float)-v105 - v109) * (float)(0.5 / v104);
            v63 = (float)(v109 - v105) * (float)(0.5 / v104);
            v157 = v107;
            v158 = v63;
            goto LABEL_67;
          }
        }
        v74 = v134;
        goto LABEL_87;
      }
      v106 = sub_140183820(v104 * v99, v99 * v105, v102 * v99, &v157);
      v63 = v158;
      if ( v106 >= 1 )
      {
        v107 = v157;
        goto LABEL_67;
      }
      v111 = v137;
      v113 = v138;
      v112 = v139;
      v110 = v140;
      goto LABEL_72;
    }
  }
  return sub_1401F8B20((unsigned __int64)&v133 ^ v160);
}
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef Block
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157
#undef v158
#undef v159
#undef v160

// 14017A7BF: conditional instruction was optimized away because rcx.8<100000000u
// 14017A809: conditional instruction was optimized away because rcx.8<100000000u
// 14017A850: conditional instruction was optimized away because rcx.8<100000000u
// 14017A89B: conditional instruction was optimized away because rcx.8<100000000u
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272E60: using guessed type __int16[45];
// 1402734E0: using guessed type __int16[7];
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014017B360) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14017B360(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017B360[112];
#define v9 (*(__int64 (*))(void *)(sr_frame_14017B360 + 0)) /* [rsp+20h] */
#define v10 (*(sr_frame_i128 (*))(void *)(sr_frame_14017B360 + 8)) /* [rsp+28h] */
#define v11 (*(sr_frame_i128 (*))(void *)(sr_frame_14017B360 + 24)) /* [rsp+38h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14017B360 + 40)) /* [rsp+48h] */
#define v13 (*(int (*))(void *)(sr_frame_14017B360 + 48)) /* [rsp+50h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_14017B360 + 56)) /* [rsp+58h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_14017B360 + 64)) /* [rsp+60h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14017B360 + 80)) /* [rsp+70h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_14017B360 + 96)) /* [rsp+80h] */
#define v18 (*(unsigned int (*))(void *)(sr_frame_14017B360 + 104)) /* [rsp+88h] */

  if ( !*(_DWORD *)(a1 + 76) )
    return sub_14017E380(a1, a2, a3);
  v7 = 0;
  v9 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)sub_140182AD0(a1, a2, (__int64)&v9)
    && (v8 = sr_path_malloc(14LL * v13), *a3 = v8, v17 = v8, (unsigned int)sub_140182AD0(a1, a2, (__int64)&v14)) )
  {
    v7 = v18;
    if ( v18 != v13 )
      sub_14023E640(
        (char *)L"output_ctx.num_vertices == count_ctx.num_vertices",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x8B6u);
  }
  else
  {
    *a3 = 0;
  }
  return v7;
}
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272E60: using guessed type __int16[45];
// 1402730A0: using guessed type __int16[50];

//----- (000000014017B460) ----------------------------------------------------
__int64            sub_14017B460(char *a1)
{
  unsigned __int8 *v1; // rdx
  _BYTE *v2; // rcx

  if ( sub_140181710(a1) )
    return 1;
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v1[7] - 0x10000 + (v1[4] << 24) + (v1[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0 )
  {
    return v1[11] + ((v1[10] + ((v1[9] + (v1[8] << 8)) << 8)) << 8);
  }
  return 0;
}

// 14017B47A: variable 'v2' is possibly undefined
// 14017B4AA: variable 'v1' is possibly undefined

//----- (000000014017B4F0) ----------------------------------------------------
__int64            sub_14017B4F0(char *a1)
{
  unsigned __int8 *v1; // rdx
  _BYTE *v2; // rcx

  if ( sub_140181710(a1) )
    return 1;
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v1[7] - 0x10000 + (v1[4] << 24) + (v1[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0 )
  {
    return v1[11] + ((v1[10] + ((v1[9] + (v1[8] << 8)) << 8)) << 8);
  }
  return 0;
}

// 14017B50A: variable 'v2' is possibly undefined
// 14017B53A: variable 'v1' is possibly undefined

//----- (000000014017B740) ----------------------------------------------------
__int64            sub_14017B740(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // ebx
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r12d
  int v10; // eax
  int v11; // r15d
  int v12; // eax
  int v13; // r13d
  int v15; // r12d
  int v16; // r15d
  int v17; // r13d
  unsigned int v18; // eax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int32 v21; // eax
  int v22; // eax
  _OWORD *v23; // rax
  int v24; // r15d
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // r9d
  int v30; // r9d
  __int64 v31; // rcx
  int v32; // r8d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017B740[144];
#define v33 (*(__m128i (*))(void *)(sr_frame_14017B740 + 0)) /* [rsp+20h] */
#define v34 (*(__m128i (*))(void *)(sr_frame_14017B740 + 16)) /* [rsp+30h] */
#define v35 (*(__m128i (*))(void *)(sr_frame_14017B740 + 32)) /* [rsp+40h] */
#define v36 (*(__int128 (*))(void *)(sr_frame_14017B740 + 48)) /* [rsp+50h] */
#define v37 (*(int (*))(void *)(sr_frame_14017B740 + 128)) /* [rsp+A0h] */
#define v38 (*(int (*))(void *)(sr_frame_14017B740 + 128)) /* [rsp+A0h] */
#define v39 (*(int (*))(void *)(sr_frame_14017B740 + 136)) /* [rsp+A8h] */

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  v4 = 0;
  v34 = _mm_cvtsi64_si128((long long)(0u));
  *(_OWORD *)(a1 + 64) = 0u;
  v7 = (unsigned int)sub_140180D50(a2, a3, "cmap");
  v8 = sub_140180D50(a2, a3, "loca");
  *(_DWORD *)(a1 + 24) = v8;
  v9 = v8;
  v10 = sub_140180D50(a2, a3, "head");
  *(_DWORD *)(a1 + 28) = v10;
  v11 = v10;
  v39 = sub_140180D50(a2, a3, "glyf");
  *(_DWORD *)(a1 + 32) = v39;
  v12 = sub_140180D50(a2, a3, "hhea");
  *(_DWORD *)(a1 + 36) = v12;
  v13 = v12;
  v37 = sub_140180D50(a2, a3, "hmtx");
  *(_DWORD *)(a1 + 40) = v37;
  *(_DWORD *)(a1 + 44) = sub_140180D50(a2, a3, "kern");
  *(_DWORD *)(a1 + 48) = sub_140180D50(a2, a3, "GPOS");
  if ( !(_DWORD)v7 || !v11 || !v13 || !v37 )
    return 0;
  if ( v39 )
  {
    if ( !v9 )
      return 0;
  }
  else
  {
    v38 = 2;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = sub_140180D50(a2, a3, "CFF ");
    if ( !v18 )
      return 0;
    v34 = _mm_cvtsi64_si128((long long)(0u));
    *(_OWORD *)(a1 + 128) = 0u;
    v19 = v34;
    SR_VEC_LANES(128, v34, i32)[3] = 0x20000000;
    SR_VEC_LANES(128, v34, i64)[0] = a2 + v18;
    *(__m128i *)(a1 + 144) = v19;
    SR_VEC_LANES(128, v34, i32)[2] = 0;
    v20 = v34;
    *(__m128i *)(a1 + 64) = v34;
    v33 = v20;
    if ( SR_VEC_READ_LANES(128, _mm_srli_si128(v20, 8), i32)[1] < 2 )
      sub_14023E640(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( SR_VEC_LANES(128, v33, i32)[3] > 2 )
      LOBYTE(v21) = *(_BYTE *)(SR_VEC_LANES(128, v33, i64)[0] + 2);
    else
      LOBYTE(v21) = 0;
    v21 = (unsigned __int8)v21;
    if ( (unsigned __int8)v21 > SR_VEC_LANES(128, v33, i32)[3] )
    {
      sub_14023E640(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      v21 = SR_VEC_LANES(128, v33, i32)[3];
    }
    SR_VEC_LANES(128, v33, i32)[2] = v21;
    sub_14017F1F0(&v35, (__int64)&v33);
    v34 = *(__m128i *)sub_14017F1F0(&v35, (__int64)&v33);
    v34 = *(__m128i *)sub_14017F410(&v35, (__int64)&v34, 0);
    sub_14017F1F0(&v35, (__int64)&v33);
    *(_OWORD *)(a1 + 96) = *sub_14017F1F0(&v35, (__int64)&v33);
    v35 = *(__m128i *)sub_1401803B0(&v35, (__int64)&v34, 17);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v15 = sub_14017F5B0((__int64)&v35);
    v35 = *(__m128i *)sub_1401803B0(&v35, (__int64)&v34, 262);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v38 = sub_14017F5B0((__int64)&v35);
    v35 = *(__m128i *)sub_1401803B0(&v35, (__int64)&v34, 292);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v16 = sub_14017F5B0((__int64)&v35);
    v35 = *(__m128i *)sub_1401803B0(&v35, (__int64)&v34, 293);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v17 = sub_14017F5B0((__int64)&v35);
    v35 = v34;
    v34 = v33;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)sub_140180F10((__int64)&v36, (__int64)&v34, (__int64)&v35);
    if ( v38 != 2 || !v15 )
      return 0;
    if ( v16 )
    {
      if ( !v17 )
        return 0;
      v22 = SR_VEC_LANES(128, v33, i32)[3];
      if ( v16 > SR_VEC_LANES(128, v33, i32)[3] || v16 < 0 )
      {
        sub_14023E640(
          (char *)L"!(o > b->size || o < 0)",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0x45Cu);
        v22 = SR_VEC_LANES(128, v33, i32)[3];
      }
      if ( v16 > v22 || (SR_VEC_LANES(128, v33, i32)[2] = v16, v16 < 0) )
        SR_VEC_LANES(128, v33, i32)[2] = v22;
      v23 = sub_14017F1F0(&v36, (__int64)&v33);
      v24 = SR_VEC_LANES(128, v33, i32)[3];
      v25 = SR_VEC_LANES(128, v33, i32)[3] - v17;
      v34 = _mm_cvtsi64_si128((long long)(0u));
      *(_OWORD *)(a1 + 128) = *v23;
      if ( v17 >= 0 && v25 >= 0 && v17 <= v24 )
      {
        SR_VEC_LANES(128, v34, i64)[0] = SR_VEC_LANES(128, v33, i64)[0] + v17;
        SR_VEC_LANES(128, v34, i32)[3] = v25;
      }
      *(__m128i *)(a1 + 144) = v34;
    }
    else
    {
      v24 = SR_VEC_LANES(128, v33, i32)[3];
    }
    if ( v15 > v24 || v15 < 0 )
      sub_14023E640(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( v15 > v24 || (SR_VEC_LANES(128, v33, i32)[2] = v15, v15 < 0) )
      SR_VEC_LANES(128, v33, i32)[2] = v24;
    *(_OWORD *)(a1 + 80) = *sub_14017F1F0(&v36, (__int64)&v33);
  }
  v26 = sub_140180D50(a2, a3, "maxp");
  if ( v26 )
    v27 = *(unsigned __int8 *)(v26 + a2 + 5) + (*(unsigned __int8 *)(v26 + a2 + 4) << 8);
  else
    v27 = 0xFFFF;
  *(_DWORD *)(a1 + 20) = v27;
  v28 = *(unsigned __int8 *)(v7 + a2 + 3);
  v29 = *(unsigned __int8 *)(v7 + a2 + 2) << 8;
  *(_DWORD *)(a1 + 52) = 0;
  v30 = v28 + v29;
  if ( !v30 )
    return 0;
  do
  {
    v31 = (unsigned int)(v7 + 4 + 8 * v4);
    v32 = *(unsigned __int8 *)(v31 + a2 + 1) + (*(unsigned __int8 *)(v31 + a2) << 8);
    if ( !v32
      || v32 == 3
      && (*(unsigned __int8 *)(v31 + a2 + 3) + (*(unsigned __int8 *)(v31 + a2 + 2) << 8) == 1
       || *(unsigned __int8 *)(v31 + a2 + 3) + (*(unsigned __int8 *)(v31 + a2 + 2) << 8) == 10) )
    {
      *(_DWORD *)(a1 + 52) = v7
                           + ((((*(unsigned __int8 *)(v31 + a2 + 5) + (*(unsigned __int8 *)(v31 + a2 + 4) << 8)) << 8)
                             + *(unsigned __int8 *)(v31 + a2 + 6)) << 8)
                           + *(unsigned __int8 *)(v31 + a2 + 7);
    }
    ++v4;
  }
  while ( v4 < v30 );
  if ( !*(_DWORD *)(a1 + 52) )
    return 0;
  *(_DWORD *)(a1 + 56) = (*(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 50) << 8)
                       + *(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 51);
  return 1;
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];

//----- (000000014017BCC0) ----------------------------------------------------
__int64            sub_14017BCC0(__int64 a1, int a2)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v7; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017BCC0[64];
#define v8 (*(__int64 (*))(void *)(sr_frame_14017BCC0 + 8)) /* [rsp+20h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_14017BCC0 + 16)) /* [rsp+28h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_14017BCC0 + 32)) /* [rsp+38h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_14017BCC0 + 48)) /* [rsp+48h] */
#define v12 (*(int (*))(void *)(sr_frame_14017BCC0 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    v3 = 0;
    v8 = 1;
    v11 = 0;
    v12 = 0;
    v9 = 0;
    v10 = 0;
    v4 = sub_140182AD0(a1, a2, (__int64)&v8);
    v5 = 0;
    if ( v4 )
      v5 = v12;
    LOBYTE(v3) = v5 == 0;
    return v3;
  }
  else
  {
    v7 = sub_14017DA60(a1, a2);
    return v7 < 0
        || *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v7 + 1LL) + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v7) << 8) == 0;
  }
}
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12


//----- (000000014017BD70) ----------------------------------------------------
void            sub_14017BD70(__int64 a1, __int64 a2, int a3, int a4, int a5, float a6, float a7, int a8)
{
  int v12; // eax

  v12 = sub_140178410(a1, a8);
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, 0.0, 0, v12);
}


//----- (000000014017BE00) ----------------------------------------------------
void            sub_14017BE00(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10)
{
  int v14; // eax

  v14 = sub_140178410(a1, a10);
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, a8, a9, v14);
}


//----- (000000014017BE60) ----------------------------------------------------
float *           sub_14017BE60(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  int v18; // eax
  float v19; // xmm1_4
  float *result; // rax

  v18 = sub_140178410(a1, a14);
  sub_14017C040(a1, (__int64)a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, v18);
  if ( a10 > 1 )
    sub_140181080(a2, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0((__int64)a2, a3, a4, a5, a11);
  if ( a10 )
    v19 = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    v19 = 0.0;
  *a12 = v19;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}


//----- (000000014017BFE0) ----------------------------------------------------
void            sub_14017BFE0(__int64 a1, __int64 a2, int a3, int a4, int a5, float a6, float a7, int a8)
{
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, 0.0, 0, a8);
}


//----- (000000014017C040) ----------------------------------------------------
void            sub_14017C040(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10)
{
  int v10; // esi
  int v15; // r12d
  __m128 v16; // xmm6
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  int v20; // ebx
  int v21; // eax
  int v22; // r10d
  int v23; // eax
  __int64 v24; // r8
  __m128 v25; // xmm0
  __m128d v26; // xmm1
  int v27; // ecx
  int v28; // ebx
  __m128 v29; // xmm0
  __m128d v30; // xmm2
  int v31; // ecx
  int v32; // ecx
  void *v33; // rsi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C040[208];
#define v34 (*(int (*)[4])(void *)(sr_frame_14017C040 + 0)) /* [rsp+60h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14017C040 + 16)) /* [rsp+70h] */
#define v36 (*(__int64 (*))(void *)(sr_frame_14017C040 + 24)) /* [rsp+78h] */
#define v37 (*(__int128 (*))(void *)(sr_frame_14017C040 + 32)) /* [rsp+80h] */
#define v38 (*(__int128 (*))(void *)(sr_frame_14017C040 + 48)) /* [rsp+90h] */
#define v39 (*(__int64 (*))(void *)(sr_frame_14017C040 + 64)) /* [rsp+A0h] */
#define v40 (*(int (*))(void *)(sr_frame_14017C040 + 72)) /* [rsp+A8h] */
#define Block (*(void * (*))(void *)(sr_frame_14017C040 + 192)) /* [rsp+120h] */

  v10 = a10;
  v15 = sub_14017B360(a1, a10, (__int64 *)&Block);
  v16 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(a9)));
  v17 = a8;
  v18 = a7;
  v19 = a6;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v20 = 0;
    v36 = 1;
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v21 = sub_140182AD0(a1, v10, (__int64)&v36);
    v22 = 0;
    if ( v21 )
    {
      v22 = HIDWORD(v38);
      v20 = v38;
    }
  }
  else
  {
    v23 = sub_14017DA60(a1, v10);
    if ( v23 < 0 )
    {
      v28 = 0;
      v32 = 0;
      goto LABEL_15;
    }
    v24 = *(_QWORD *)(a1 + 8);
    v22 = (__int16)(*(unsigned __int8 *)(v24 + v23 + 9) + (*(unsigned __int8 *)(v24 + v23 + 8) << 8));
    v20 = (__int16)(*(unsigned __int8 *)(v24 + v23 + 3) + (*(unsigned __int8 *)(v24 + v23 + 2) << 8));
  }
  v25 = _mm_set_ss((float)v20);
  SR_VEC_LANES(128, v25, f32)[0] = (float)(SR_VEC_LANES(128, v25, f32)[0] * v19) + v17;
  v26 = _mm_cvtps_pd(v25);
  v27 = (int)SR_VEC_LANES(128, v26, f64)[0];
  if ( (double)v27 != SR_VEC_LANES(128, v26, f64)[0] )
    SR_VEC_LANES(128, v26, f64)[0] = (double)(v27 - (_mm_movemask_pd(_mm_unpacklo_pd(v26, v26)) & 1));
  v28 = (int)SR_VEC_LANES(128, v26, f64)[0];
  v29 = v16;
  SR_VEC_LANES(128, v29, f32)[0] = SR_VEC_LANES(128, v16, f32)[0] - (float)((float)v22 * v18);
  v30 = _mm_cvtps_pd(v29);
  v31 = (int)SR_VEC_LANES(128, v30, f64)[0];
  if ( (double)v31 != SR_VEC_LANES(128, v30, f64)[0] )
    SR_VEC_LANES(128, v30, f64)[0] = (double)(v31 - (_mm_movemask_pd(_mm_unpacklo_pd(v30, v30)) & 1));
  v32 = (int)SR_VEC_LANES(128, v30, f64)[0];
LABEL_15:
  v33 = Block;
  v35 = a2;
  v34[0] = a3;
  v34[2] = a5;
  v34[1] = a4;
  if ( a3 && a4 )
    sub_14017D510(v34, 0.34999999, (__int64)Block, v15, v19, v18, v17, SR_VEC_LANES(128, v16, f32)[0], v28, v32, 1, *(_QWORD *)a1);
  free(v33);
}
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef Block

// 14017C185: conditional instruction was optimized away because rcx.8<100000000u
// 14017C1D1: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017C2C0) ----------------------------------------------------
float *           sub_14017C2C0(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  float v17; // xmm1_4
  float *result; // rax

  sub_14017C040(a1, (__int64)a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, a14);
  if ( a10 > 1 )
    sub_140181080(a2, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0((__int64)a2, a3, a4, a5, a11);
  if ( a10 )
    v17 = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    v17 = 0.0;
  *a12 = v17;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}


//----- (000000014017C420) ----------------------------------------------------
__int64            sub_14017C420(__int64 a1, _WORD *a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ecx
  void *v16; // rcx

  v11 = a3 - a6;
  v12 = sr_path_malloc(20);
  v13 = sr_path_malloc(v11);
  if ( !v12 )
  {
    if ( !v13 )
      return 0;
    v16 = (void *)v13;
LABEL_11:
    free(v16);
    return 0;
  }
  if ( !v13 )
  {
    v16 = (void *)v12;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)a1 = a7;
  v14 = a3;
  if ( a5 )
    v14 = a5;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = v14;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(a2);
  *(_QWORD *)(a1 + 8) = v12;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  *(_DWORD *)v12 = v11;
  *(_DWORD *)(v12 + 4) = a4 - a6;
  *(_QWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  if ( a2 )
    sub_1401FCD30((void *)(uintptr_t)(a2), 0, a4 * a3);
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (000000014017C520) ----------------------------------------------------
void            sub_14017C520(__int64 a1)
{
  free(*(void **)(a1 + 48));
  free(*(void **)(a1 + 8));
}


//----- (000000014017C540) ----------------------------------------------------
int *           sub_14017C540(_QWORD *a1, char *a2, __int64 a3, float a4, int a5, int a6, __int64 a7)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C540[32];
#define v8 (*(_DWORD (*)[2])(void *)(sr_frame_14017C540 + 0)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_14017C540 + 8)) /* [rsp+38h] */
#define v10 (*(int (*))(void *)(sr_frame_14017C540 + 16)) /* [rsp+40h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_14017C540 + 24)) /* [rsp+48h] */

  v8[1] = a5;
  v10 = a6;
  v11 = a7;
  *(float *)v8 = a4;
  v9 = 0;
  return sub_14017C590(a1, a2, a3, (__int64)v8, 1);
}
#undef v8
#undef v9
#undef v10
#undef v11


//----- (000000014017C590) ----------------------------------------------------
int *           sub_14017C590(_QWORD *a1, char *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // edx
  __int64 v11; // rax
  int v12; // r10d
  int v13; // ecx
  unsigned int *v14; // rax
  __m128i v15; // xmm5
  __m128i v16; // xmm4
  signed __int64 v17; // r8
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm3
  __m128i v23; // xmm4
  __m128i v24; // xmm4
  __int64 v25; // r9
  int v26; // edx
  int v27; // r8d
  _DWORD *v28; // rcx
  unsigned __int64 v29; // rax
  int *result; // rax
  int *v31; // rsi
  unsigned int v32; // eax
  int v33; // eax
  _DWORD *v34; // rdx
  int v35; // edi
  int v36; // r11d
  int *v37; // r8
  int v38; // r9d
  __int64 i; // rbx
  int v40; // r11d
  int v41; // ecx
  int *v42; // rcx
  __int64 v43; // r10
  unsigned int v44; // ebx
  _QWORD v45[20]; // [rsp+30h] [rbp-C8h] BYREF

  if ( a5 > 0 )
  {
    v8 = a4 + 16;
    v9 = a5;
    do
    {
      v10 = 0;
      if ( *(int *)v8 > 0 )
      {
        v11 = 0;
        do
        {
          v11 += 28;
          ++v10;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 22) = 0;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 24) = 0;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 26) = 0;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 28) = 0;
        }
        while ( v10 < *(_DWORD *)v8 );
      }
      v8 += 40;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  v13 = 0;
  if ( a5 >= 8 )
  {
    v14 = (unsigned int *)(a4 + 96);
    v15 = _mm_cvtsi64_si128((long long)(0));
    v16 = _mm_cvtsi64_si128((long long)(0));
    v17 = 0;
    do
    {
      v18 = _mm_cvtsi32_si128(v14[10]);
      v13 += 8;
      v19 = _mm_cvtsi32_si128(*(v14 - 10));
      v17 += 8LL;
      v20 = _mm_cvtsi32_si128(*v14);
      v21 = _mm_cvtsi32_si128(*(v14 - 20));
      v14 += 80;
      v15 = _mm_add_epi32(_mm_unpacklo_epi64(_mm_unpacklo_epi32(v21, v19), _mm_unpacklo_epi32(v20, v18)), v15);
      v22 = _mm_add_epi32(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v14 - 60)), _mm_cvtsi32_si128(*(v14 - 50))),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v14 - 40)), _mm_cvtsi32_si128(*(v14 - 30)))),
              v16);
      v16 = v22;
    }
    while ( v17 < (__int64)(a5 & 0xFFFFFFFFFFFFFFF8uLL) );
    v23 = _mm_add_epi32(v22, v15);
    v24 = _mm_add_epi32(v23, _mm_srli_si128(v23, 8));
    v12 = _mm_cvtsi128_si32(_mm_add_epi32(v24, _mm_srli_si128(v24, 4)));
  }
  v25 = v13;
  v26 = 0;
  v27 = 0;
  if ( v13 < (__int64)a5 )
  {
    if ( a5 - (__int64)v13 < 2 )
      goto LABEL_16;
    v28 = (_DWORD *)(a4 + 8 * (v13 + 4LL * v13 + 7));
    v29 = ((unsigned __int64)(a5 - v25 - 2) >> 1) + 1;
    v25 += 2 * v29;
    do
    {
      v26 += *(v28 - 10);
      v27 += *v28;
      v28 += 20;
      --v29;
    }
    while ( v29 );
    if ( v25 < a5 )
LABEL_16:
      v12 += *(_DWORD *)(a4 + 40 * v25 + 16);
    v12 += v27 + v26;
  }
  result = (int *)sr_path_malloc(24LL * v12);
  v31 = result;
  if ( result )
  {
    v45[0] = *a1;
    v32 = sub_140179790(a2);
    sub_14017B740((__int64)v45, (__int64)a2, v32);
    v33 = sub_14017C8A0((__int64)a1, (__int64)v45, a4, a5, (__int64)v31);
    v34 = (_DWORD *)a1[1];
    v35 = 0;
    if ( v33 > 0 )
    {
      v36 = v34[2];
      v37 = v31 + 3;
      v38 = v34[3];
      for ( i = 0; i < v33; ++i )
      {
        if ( v36 + *v37 > *v34 )
        {
          v38 = v34[4];
          v36 = 0;
          v34[3] = v38;
          v34[2] = 0;
        }
        if ( v38 + v37[1] > v34[1] )
          break;
        *(v37 - 3) = v36;
        v40 = *v37;
        *(v37 - 2) = v34[3];
        v37[2] = 1;
        v36 = v34[2] + v40;
        v38 = v34[3];
        v34[2] = v36;
        v41 = v38 + v37[1];
        if ( v41 > v34[4] )
          v34[4] = v41;
        ++v35;
        v37 += 6;
      }
    }
    if ( v35 < (__int64)v33 )
    {
      v42 = &v31[6 * v35 + 5];
      v43 = v33 - (__int64)v35;
      do
      {
        *v42 = 0;
        v42 += 6;
        --v43;
      }
      while ( v43 );
    }
    v44 = sub_14017CDD0((__int64)a1, (__int64)v45, a4, a5, (__int64)v31);
    free(v31);
    return (int *)v44;
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (000000014017C8A0) ----------------------------------------------------
__int64            sub_14017C8A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // ebp
  __int64 result; // rax
  float *v9; // rdi
  __int64 v10; // r13
  float v11; // xmm8_4
  __int64 v12; // r10
  float v13; // xmm8_4
  bool v14; // cc
  int v15; // r14d
  __int64 v16; // r12
  _DWORD *v17; // r15
  __int64 v18; // rax
  int v19; // edx
  int v20; // edx
  float v21; // xmm7_4
  float v22; // xmm6_4
  int v23; // eax
  int v24; // r10d
  int v25; // r11d
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // r11d
  int v30; // r9d
  int v31; // r8d
  __int64 v32; // r8
  __m128 v33; // xmm0
  __m128d v34; // xmm1
  __m128 v35; // xmm0
  __m128d v36; // xmm1
  __m128 v37; // xmm0
  __m128d v38; // xmm1
  __m128 v39; // xmm0
  __m128d v40; // xmm1
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C8A0[224];
#define v41 (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 0)) /* [rsp+20h] */
#define v42 (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 8)) /* [rsp+28h] */
#define v43 (*(__int128 (*))(void *)(sr_frame_14017C8A0 + 16)) /* [rsp+30h] */
#define v44 (*(__int128 (*))(void *)(sr_frame_14017C8A0 + 32)) /* [rsp+40h] */
#define v45 (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 48)) /* [rsp+50h] */
#define v46 (*(int (*))(void *)(sr_frame_14017C8A0 + 56)) /* [rsp+58h] */
#define v47 (*(unsigned int (*))(void *)(sr_frame_14017C8A0 + 216)) /* [rsp+F8h] */

  v5 = 0;
  result = 0;
  v47 = 0;
  v41 = a4;
  if ( a4 > 0 )
  {
    v9 = (float *)(a3 + 32);
    v10 = 0;
    while ( 1 )
    {
      v11 = *(v9 - 8);
      if ( v11 <= 0.0 )
      {
        v13 = -(float)(v11
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        v12 = *(int *)(a2 + 36);
        v13 = v11
            / (float)((__int16)((*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 4) << 8)
                              + *(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 5))
                    - (__int16)(*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 7)
                              + (*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 6) << 8)));
      }
      v14 = *((_DWORD *)v9 - 4) <= 0;
      v15 = 0;
      *(_BYTE *)v9 = *(_BYTE *)(a1 + 32);
      *((_BYTE *)v9 + 1) = *(_BYTE *)(a1 + 36);
      if ( !v14 )
        break;
      result = v47;
LABEL_32:
      v9 += 10;
      if ( !--v41 )
        return result;
    }
    v16 = 0;
    v17 = (_DWORD *)(a5 + 8 * (v10 + 2 * v10 + 2));
    while ( 1 )
    {
      v18 = *((_QWORD *)v9 - 3);
      v19 = v18 ? *(_DWORD *)(v18 + v16) : v15 + *((_DWORD *)v9 - 7);
      v20 = sub_140178410(a2, v19);
      v21 = (float)*(int *)(a1 + 36) * v13;
      v22 = (float)*(int *)(a1 + 32) * v13;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      v27 = sub_14017DA60(a2, v20);
      if ( v27 >= 0 )
      {
        v32 = *(_QWORD *)(a2 + 8);
        v24 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 9) + (*(unsigned __int8 *)(v32 + v27 + 8) << 8));
        v25 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 3) + (*(unsigned __int8 *)(v32 + v27 + 2) << 8));
        v5 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 7) + (*(unsigned __int8 *)(v32 + v27 + 6) << 8));
        v26 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 5) + (*(unsigned __int8 *)(v32 + v27 + 4) << 8));
LABEL_20:
        v33 = _mm_set_ss((float)-v26);
        SR_VEC_LANES(128, v33, f32)[0] = SR_VEC_LANES(128, v33, f32)[0] * v21;
        v34 = _mm_cvtps_pd(v33);
        if ( (double)(int)SR_VEC_LANES(128, v34, f64)[0] != SR_VEC_LANES(128, v34, f64)[0] )
          SR_VEC_LANES(128, v34, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v34, v34)) & 1) + (int)SR_VEC_LANES(128, v34, f64)[0]);
        v35 = _mm_set_ss((float)v25);
        v28 = (int)SR_VEC_LANES(128, v34, f64)[0];
        SR_VEC_LANES(128, v35, f32)[0] = SR_VEC_LANES(128, v35, f32)[0] * v22;
        v36 = _mm_cvtps_pd(v35);
        if ( (double)(int)SR_VEC_LANES(128, v36, f64)[0] != SR_VEC_LANES(128, v36, f64)[0] )
          SR_VEC_LANES(128, v36, f64)[0] = (double)((int)SR_VEC_LANES(128, v36, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v36, v36)) & 1));
        v37 = _mm_set_ss((float)v5);
        v29 = (int)SR_VEC_LANES(128, v36, f64)[0];
        SR_VEC_LANES(128, v37, f32)[0] = SR_VEC_LANES(128, v37, f32)[0] * v22;
        v38 = _mm_cvtps_pd(v37);
        if ( (double)(int)SR_VEC_LANES(128, v38, f64)[0] != SR_VEC_LANES(128, v38, f64)[0] )
          SR_VEC_LANES(128, v38, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v38, v38)) & 1) + (int)SR_VEC_LANES(128, v38, f64)[0]);
        v30 = (int)SR_VEC_LANES(128, v38, f64)[0];
        v39 = _mm_set_ss((float)-v24);
        SR_VEC_LANES(128, v39, f32)[0] = SR_VEC_LANES(128, v39, f32)[0] * v21;
        v40 = _mm_cvtps_pd(v39);
        if ( (double)(int)SR_VEC_LANES(128, v40, f64)[0] != SR_VEC_LANES(128, v40, f64)[0] )
          SR_VEC_LANES(128, v40, f64)[0] = (double)((int)SR_VEC_LANES(128, v40, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v40, v40)) & 1));
        v31 = (int)SR_VEC_LANES(128, v40, f64)[0];
        v5 = 0;
        goto LABEL_29;
      }
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
LABEL_29:
      ++v10;
      ++v15;
      *(v17 - 1) = *(_DWORD *)(a1 + 28) - 1 + v30 + *(_DWORD *)(a1 + 32) - v29;
      result = v47 + 1;
      v16 += 4;
      ++v47;
      *v17 = *(_DWORD *)(a1 + 36) + v28 - v31 + *(_DWORD *)(a1 + 28) - 1;
      v17 += 6;
      if ( v15 >= *((_DWORD *)v9 - 4) )
        goto LABEL_32;
    }
    v42 = 1;
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v23 = sub_140182AD0(a2, v20, (__int64)&v42);
    v24 = 0;
    v25 = 0;
    if ( v23 )
    {
      v24 = HIDWORD(v44);
      v25 = v44;
      v5 = DWORD1(v44);
    }
    v26 = 0;
    if ( v23 )
      v26 = DWORD2(v44);
    goto LABEL_20;
  }
  return result;
}
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

// 14017CB1E: conditional instruction was optimized away because rcx.8<100000000u
// 14017CB66: conditional instruction was optimized away because rcx.8<100000000u
// 14017CBAB: conditional instruction was optimized away because rcx.8<100000000u
// 14017CBF7: conditional instruction was optimized away because rcx.8<100000000u
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014017CCF0) ----------------------------------------------------
__int64            sub_14017CCF0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // edi
  int v7; // r11d
  _DWORD *v8; // r8
  int v9; // r10d
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // r9
  _DWORD *v13; // rcx

  result = *(_QWORD *)(a1 + 8);
  v5 = a3;
  v6 = 0;
  if ( a3 > 0 )
  {
    v7 = *(_DWORD *)(result + 8);
    v8 = (_DWORD *)(a2 + 12);
    v9 = *(_DWORD *)(result + 12);
    v10 = 0;
    do
    {
      if ( v7 + *v8 > *(_DWORD *)result )
      {
        v9 = *(_DWORD *)(result + 16);
        v7 = 0;
        *(_DWORD *)(result + 12) = v9;
        *(_DWORD *)(result + 8) = 0;
      }
      if ( v9 + v8[1] > *(_DWORD *)(result + 4) )
        break;
      *(v8 - 3) = v7;
      *(v8 - 2) = *(_DWORD *)(result + 12);
      v8[2] = 1;
      v7 = *v8 + *(_DWORD *)(result + 8);
      v9 = *(_DWORD *)(result + 12);
      *(_DWORD *)(result + 8) = v7;
      v11 = v9 + v8[1];
      if ( v11 > *(_DWORD *)(result + 16) )
        *(_DWORD *)(result + 16) = v11;
      ++v6;
      ++v10;
      v8 += 6;
    }
    while ( v10 < v5 );
  }
  if ( v6 < v5 )
  {
    result = 3LL * v6;
    v12 = v5 - v6;
    v13 = (_DWORD *)(a2 + 20 + 24LL * v6);
    do
    {
      *v13 = 0;
      v13 += 6;
      --v12;
    }
    while ( v12 );
  }
  return result;
}


//----- (000000014017CDD0) ----------------------------------------------------
__int64            sub_14017CDD0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // ebp
  __int64 v8; // r9
  __int64 v9; // r15
  float v10; // xmm8_4
  __int64 v11; // r11
  float v12; // xmm8_4
  int v13; // edx
  int v14; // ecx
  float v15; // xmm11_4
  float v16; // xmm12_4
  float v17; // xmm10_4
  float v18; // xmm9_4
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r14
  _DWORD *v22; // rbx
  __int64 v23; // r13
  int v24; // edx
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int16 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r9
  __int16 v34; // dx
  float v35; // xmm6_4
  float v36; // xmm7_4
  int v37; // eax
  int v38; // r11d
  int v39; // edx
  int v40; // eax
  int v41; // r12d
  __int64 v42; // r9
  __m128 v43; // xmm0
  __m128d v44; // xmm1
  __m128 v45; // xmm0
  __m128d v46; // xmm1
  unsigned int v47; // edx
  unsigned int v48; // edx
  __int16 v49; // ax
  int v50; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017CDD0[352];
#define v52 (*(int (*))(void *)(sr_frame_14017CDD0 + 0)) /* [rsp+50h] */
#define v53 (*(int (*))(void *)(sr_frame_14017CDD0 + 4)) /* [rsp+54h] */
#define v54 (*(int (*))(void *)(sr_frame_14017CDD0 + 8)) /* [rsp+58h] */
#define v55 (*(int (*))(void *)(sr_frame_14017CDD0 + 12)) /* [rsp+5Ch] */
#define v56 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 16)) /* [rsp+60h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 24)) /* [rsp+68h] */
#define v58 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 32)) /* [rsp+70h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 40)) /* [rsp+78h] */
#define v60 (*(__int128 (*))(void *)(sr_frame_14017CDD0 + 48)) /* [rsp+80h] */
#define v61 (*(__int128 (*))(void *)(sr_frame_14017CDD0 + 64)) /* [rsp+90h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 80)) /* [rsp+A0h] */
#define v63 (*(int (*))(void *)(sr_frame_14017CDD0 + 88)) /* [rsp+A8h] */
#define v64 (*(int (*))(void *)(sr_frame_14017CDD0 + 320)) /* [rsp+190h] */
#define v65 (*(int (*))(void *)(sr_frame_14017CDD0 + 344)) /* [rsp+1A8h] */

  v5 = 1;
  v54 = *(_DWORD *)(a1 + 32);
  v55 = *(_DWORD *)(a1 + 36);
  v58 = a4;
  v64 = 1;
  if ( a4 > 0 )
  {
    v8 = 0;
    v9 = a3 + 8;
    v56 = 0;
    while ( 1 )
    {
      v10 = *(float *)(v9 - 8);
      if ( v10 <= 0.0 )
      {
        v12 = -(float)(v10
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        v11 = *(int *)(a2 + 36);
        v8 = v56;
        v12 = v10
            / (float)((__int16)(*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 5)
                              + (*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 4) << 8))
                    - (__int16)((*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 6) << 8)
                              + *(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 7)));
      }
      v13 = *(unsigned __int8 *)(v9 + 24);
      *(_DWORD *)(a1 + 32) = v13;
      v14 = *(unsigned __int8 *)(v9 + 25);
      *(_DWORD *)(a1 + 36) = v14;
      v15 = 1.0 / (float)v13;
      v16 = 1.0 / (float)v14;
      v17 = v13 ? (float)(0.5 / (float)v13) * (float)(1 - v13) : 0.0;
      v18 = v14 ? (float)(0.5 / (float)v14) * (float)(1 - v14) : 0.0;
      v19 = 0;
      v52 = 0;
      if ( *(int *)(v9 + 8) > 0 )
        break;
LABEL_41:
      v9 += 40;
      if ( !--v58 )
        goto LABEL_42;
    }
    v5 = 0;
    v20 = 0;
    v57 = 0;
    v21 = 0;
    v22 = (_DWORD *)(a5 + 4 + 24 * v8);
    while ( 1 )
    {
      if ( !v22[4] )
      {
        v64 = 0;
        goto LABEL_40;
      }
      v23 = *(_QWORD *)(v9 + 16);
      v24 = *(_QWORD *)v9 ? *(_DWORD *)(v20 + *(_QWORD *)v9) : v19 + *(_DWORD *)(v9 - 4);
      v25 = sub_140178410(a2, v24);
      v65 = v25;
      v26 = *(_DWORD *)(a1 + 28);
      *(v22 - 1) += v26;
      *v22 += v26;
      v22[2] -= v26;
      v22[3] -= v26;
      v27 = *(int *)(a2 + 36);
      v28 = *(_QWORD *)(a2 + 8);
      v29 = *(unsigned __int8 *)(v27 + v28 + 34);
      v30 = *(unsigned __int8 *)(v27 + v28 + 35);
      if ( v25 >= (int)(v30 + (*(unsigned __int8 *)(v27 + v28 + 34) << 8)) )
      {
        v32 = *(int *)(a2 + 40) + v28;
        v33 = v30 + (v29 << 8);
        v34 = *(unsigned __int8 *)(v32 + 4 * v33 - 4);
        LOWORD(v32) = *(unsigned __int8 *)(v32 + 4 * v33 - 3);
        v25 = v65;
        v31 = (v34 << 8) + v32;
      }
      else
      {
        v31 = *(unsigned __int8 *)(*(int *)(a2 + 40) + v28 + 4 * v25 + 1)
            + (*(unsigned __int8 *)(*(int *)(a2 + 40) + v28 + 4 * v25) << 8);
      }
      v53 = v31;
      v35 = (float)*(int *)(a1 + 36) * v12;
      v36 = (float)*(int *)(a1 + 32) * v12;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      v40 = sub_14017DA60(a2, v25);
      if ( v40 >= 0 )
      {
        v42 = *(_QWORD *)(a2 + 8);
        v38 = (__int16)(*(unsigned __int8 *)(v40 + v42 + 9) + (*(unsigned __int8 *)(v40 + v42 + 8) << 8));
        v39 = (__int16)((*(unsigned __int8 *)(v40 + v42 + 2) << 8) + *(unsigned __int8 *)(v40 + v42 + 3));
LABEL_29:
        v43 = _mm_set_ss((float)-v38);
        SR_VEC_LANES(128, v43, f32)[0] = SR_VEC_LANES(128, v43, f32)[0] * v35;
        v44 = _mm_cvtps_pd(v43);
        if ( (double)(int)SR_VEC_LANES(128, v44, f64)[0] != SR_VEC_LANES(128, v44, f64)[0] )
          SR_VEC_LANES(128, v44, f64)[0] = (double)((int)SR_VEC_LANES(128, v44, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v44, v44)) & 1));
        v45 = _mm_set_ss((float)v39);
        v41 = (int)SR_VEC_LANES(128, v44, f64)[0];
        SR_VEC_LANES(128, v45, f32)[0] = SR_VEC_LANES(128, v45, f32)[0] * v36;
        v46 = _mm_cvtps_pd(v45);
        if ( (double)(int)SR_VEC_LANES(128, v46, f64)[0] != SR_VEC_LANES(128, v46, f64)[0] )
          SR_VEC_LANES(128, v46, f64)[0] = (double)((int)SR_VEC_LANES(128, v46, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v46, v46)) & 1));
        v5 = (int)SR_VEC_LANES(128, v46, f64)[0];
        goto LABEL_34;
      }
      v41 = 0;
LABEL_34:
      sub_14017C040(
        a2,
        *(_QWORD *)(a1 + 40) + (int)*(v22 - 1) + (__int64)(*v22 * *(_DWORD *)(a1 + 24)),
        v22[2] - *(_DWORD *)(a1 + 32) + 1,
        v22[3] - *(_DWORD *)(a1 + 36) + 1,
        *(_DWORD *)(a1 + 24),
        (float)*(int *)(a1 + 32) * v12,
        (float)*(int *)(a1 + 36) * v12,
        0.0,
        0,
        v65);
      v47 = *(_DWORD *)(a1 + 32);
      if ( v47 > 1 )
        sub_140181080(
          (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + (int)*(v22 - 1) + (__int64)(*v22 * *(_DWORD *)(a1 + 24))),
          v22[2],
          v22[3],
          *(_DWORD *)(a1 + 24),
          v47);
      v48 = *(_DWORD *)(a1 + 36);
      if ( v48 > 1 )
        sub_1401843E0(
          *(_QWORD *)(a1 + 40) + (int)*(v22 - 1) + (__int64)(*v22 * *(_DWORD *)(a1 + 24)),
          v22[2],
          v22[3],
          *(_DWORD *)(a1 + 24),
          v48);
      v19 = v52;
      v20 = v57;
      v8 = v56;
      *(_WORD *)(v21 + v23) = *((_WORD *)v22 - 2);
      *(_WORD *)(v21 + v23 + 2) = *(_WORD *)v22;
      *(_WORD *)(v21 + v23 + 4) = *((_WORD *)v22 - 2) + *((_WORD *)v22 + 4);
      v49 = *(_WORD *)v22 + *((_WORD *)v22 + 6);
      *(float *)(v21 + v23 + 16) = (float)v53 * v12;
      *(_WORD *)(v21 + v23 + 6) = v49;
      *(float *)(v21 + v23 + 12) = (float)((float)v41 * v16) + v18;
      *(float *)(v21 + v23 + 8) = (float)((float)v5 * v15) + v17;
      v50 = v5 + v22[2];
      v5 = v64;
      *(float *)(v21 + v23 + 20) = (float)((float)v50 * v15) + v17;
      *(float *)(v21 + v23 + 24) = (float)((float)(v41 + v22[3]) * v16) + v18;
LABEL_40:
      ++v8;
      ++v19;
      v20 += 4;
      v56 = v8;
      v22 += 6;
      v52 = v19;
      v21 += 28;
      v57 = v20;
      if ( v19 >= *(_DWORD *)(v9 + 8) )
        goto LABEL_41;
      v5 = 0;
    }
    v59 = 1;
    v62 = 0;
    v63 = 0;
    v60 = 0;
    v61 = 0;
    v37 = sub_140182AD0(a2, v25, (__int64)&v59);
    v38 = 0;
    v39 = 0;
    if ( v37 )
    {
      v38 = HIDWORD(v61);
      v39 = v61;
    }
    goto LABEL_29;
  }
LABEL_42:
  *(_DWORD *)(a1 + 32) = v54;
  *(_DWORD *)(a1 + 36) = v55;
  return (unsigned int)v5;
}
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65

// 14017D197: conditional instruction was optimized away because rcx.8<100000000u
// 14017D1DC: conditional instruction was optimized away because rcx.8<100000000u
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014017D490) ----------------------------------------------------
__int64            sub_14017D490(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a2 > 8 )
    result = sub_14023E640(
               (char *)L"h_oversample <= 8",
               (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
               0xEE1u);
  if ( a3 > 8 )
    result = sub_14023E640(
               (char *)L"v_oversample <= 8",
               (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
               0xEE2u);
  if ( a2 <= 8 )
    *(_DWORD *)(a1 + 32) = a2;
  if ( a3 <= 8 )
    *(_DWORD *)(a1 + 36) = a3;
  return result;
}

// 140272E60: using guessed type __int16[45];
// 140273430: using guessed type __int16[18];
// 140273458: using guessed type __int16 aVOversample8[18];

//----- (000000014017D510) ----------------------------------------------------
void            sub_14017D510(
        int *a1,
        float a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // rbx
  float v13; // xmm6_4
  float v14; // xmm7_4
  __int64 v16; // rax
  void *v17; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017D510[80];
#define Block (*(void * (*))(void *)(sr_frame_14017D510 + 0)) /* [rsp+60h] */
#define v19 (*(unsigned int (*))(void *)(sr_frame_14017D510 + 72)) /* [rsp+A8h] */

  v12 = a12;
  v13 = a5;
  v14 = a6;
  v19 = 0;
  Block = nullptr;
  v16 = sub_140178A70(a3, a4, a2 / fminf(a5, a6), &Block, &v19);
  v17 = (void *)v16;
  if ( v16 )
  {
    sub_140181CF0(a1, v16, (int *)Block, v19, v13, v14, a7, a8, a9, a10, a11, v12);
    free(Block);
    free(v17);
  }
}
#undef Block
#undef v19


//----- (000000014017D6B0) ----------------------------------------------------
__int64            sub_14017D6B0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  __int64 result; // rax
  int v5; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // r11d
  unsigned __int16 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx

  result = 0;
  v5 = a4;
  if ( a4 )
  {
    v8 = 3;
    v9 = 1;
    v10 = 2;
    do
    {
      v11 = a3[1] + (*a3 << 8);
      if ( v11 >= 0x80u )
      {
        if ( v11 < 0x800u )
        {
          if ( v9 >= a2 )
            return 0xFFFFFFFFLL;
          v13 = (int)result;
          v14 = result + 1;
          v15 = a3[1];
          if ( *(unsigned __int8 *)(v13 + a1) != (v11 >> 6) + 192 )
            return 0xFFFFFFFFLL;
          v9 += 2;
          v8 += 2;
          v10 += 2;
          goto LABEL_25;
        }
        if ( v11 < 0xD800u )
          goto LABEL_21;
        if ( v11 >= 0xDC00u )
        {
          if ( v11 < 0xE000u )
            return 0xFFFFFFFFLL;
LABEL_21:
          if ( v10 >= a2 )
            return 0xFFFFFFFFLL;
          v24 = (int)result;
          v25 = result + 1;
          v15 = a3[1];
          if ( *(unsigned __int8 *)(v24 + a1) != (v11 >> 12) + 224 )
            return 0xFFFFFFFFLL;
          v26 = v25;
          v14 = v25 + 1;
          if ( *(unsigned __int8 *)(v26 + a1) != ((v11 >> 6) & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          v9 += 3;
          v8 += 3;
          v10 += 3;
LABEL_25:
          v27 = v14;
          result = (unsigned int)(v14 + 1);
          if ( *(unsigned __int8 *)(v27 + a1) != (v15 & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          goto LABEL_26;
        }
        if ( v8 >= a2 )
          return 0xFFFFFFFFLL;
        v16 = (int)result;
        v17 = (a3[2] << 8) - 56613888 + (v11 << 10) + a3[3];
        v18 = result + 1;
        if ( *(unsigned __int8 *)(v16 + a1) != (v17 >> 18) + 240 )
          return 0xFFFFFFFFLL;
        v19 = v18;
        v20 = v18 + 1;
        if ( *(unsigned __int8 *)(v19 + a1) != ((v17 >> 12) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        v21 = v20;
        v22 = v20 + 1;
        if ( *(unsigned __int8 *)(v21 + a1) != ((v17 >> 6) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        v23 = v22;
        result = (unsigned int)(v22 + 1);
        v9 += 4;
        v8 += 4;
        v10 += 4;
        if ( *(unsigned __int8 *)(v23 + a1) != (v17 & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        a3 += 2;
        v5 -= 2;
      }
      else
      {
        if ( (int)result >= a2 )
          return 0xFFFFFFFFLL;
        v12 = (int)result;
        ++v9;
        result = (unsigned int)(result + 1);
        ++v8;
        ++v10;
        if ( *(unsigned __int8 *)(v12 + a1) != v11 )
          return 0xFFFFFFFFLL;
      }
LABEL_26:
      a3 += 2;
      v5 -= 2;
    }
    while ( v5 );
  }
  return result;
}


//----- (000000014017D900) ----------------------------------------------------
__int64            sub_14017D900(unsigned __int8 *a1, int a2)
{
  int v4; // edx
  int v5; // r10d
  int v6; // r8d
  unsigned __int8 *v7; // r9
  int v8; // ebx
  int v9; // edx
  int v10; // r10d
  unsigned int v11; // r8d
  int v12; // r9d

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      v4 = 0;
      v5 = a1[3] - 1 + (a1[2] << 8);
      if ( v5 >= 0 )
      {
        while ( 1 )
        {
          v6 = (v5 + v4) >> 1;
          v7 = &a1[6 * v6 + 4];
          v8 = v7[1] + (*v7 << 8);
          if ( a2 >= v8 )
          {
            if ( a2 <= v7[3] + (v7[2] << 8) )
              return a2 + v7[5] + (v7[4] << 8) - v8;
            v4 = v6 + 1;
          }
          else
          {
            v5 = v6 - 1;
          }
          if ( v4 > v5 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x92Fu);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = 0;
  v10 = (a1[2] << 8) + a1[3] - 1;
  if ( v10 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v11 = (v10 + v9) >> 1;
    v12 = a1[2 * v11 + 5] + (a1[2 * v11 + 4] << 8);
    if ( a2 >= v12 )
      break;
    v10 = v11 - 1;
LABEL_18:
    if ( v9 > v10 )
      return 0xFFFFFFFFLL;
  }
  if ( a2 > v12 )
  {
    v9 = v11 + 1;
    goto LABEL_18;
  }
  return v11;
}

// 140272530: using guessed type __int16[2];
// 140272E60: using guessed type __int16[45];

//----- (000000014017DA60) ----------------------------------------------------
__int64            sub_14017DA60(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // r8d
  unsigned __int8 *v9; // rdx
  unsigned int v10; // r10d
  unsigned __int8 *v12; // r9
  unsigned int v13; // r10d

  if ( *(_DWORD *)(a1 + 76) )
    sub_14023E640((char *)L"!info->cff.size", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x614u);
  if ( a2 >= *(_DWORD *)(a1 + 20) )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)(a1 + 56);
  if ( v4 >= 2 )
    return 0xFFFFFFFFLL;
  v5 = *(int *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v12 = (unsigned __int8 *)(v5 + v6 + 4 * a2);
    v13 = *(_DWORD *)(a1 + 32) + ((((v12[1] + (*v12 << 8)) << 8) + v12[2]) << 8) + v12[3];
    if ( v13 == *(_DWORD *)(a1 + 32) + ((((v12[5] + (v12[4] << 8)) << 8) + v12[6]) << 8) + v12[7] )
      return (unsigned int)-1;
    return v13;
  }
  else
  {
    v7 = v6 + 2 * a2;
    v8 = *(_DWORD *)(a1 + 32);
    v9 = (unsigned __int8 *)(v7 + v5);
    v10 = v8 + 2 * (v9[1] + (*v9 << 8));
    if ( v10 == v8 + 2 * (v9[3] + (v9[2] << 8)) )
      return (unsigned int)-1;
    return v10;
  }
}

// 140272E60: using guessed type __int16[45];
// 140273080: using guessed type __int16[16];

//----- (000000014017DB90) ----------------------------------------------------
__int64            sub_14017DB90(unsigned __int8 *a1, int a2)
{
  int v5; // r10d
  int v6; // r9d
  int v7; // edx
  unsigned __int8 *v8; // r8
  int v9; // ecx
  int v10; // r9d
  int v11; // edx

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      v5 = 0;
      v6 = (a1[2] << 8) + a1[3] - 1;
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          v7 = (v6 + v5) >> 1;
          v8 = &a1[6 * v7 + 4];
          if ( a2 >= v8[1] + (*v8 << 8) )
          {
            if ( a2 <= v8[3] + (v8[2] << 8) )
              return v8[5] + (v8[4] << 8);
            v5 = v7 + 1;
          }
          else
          {
            v6 = v7 - 1;
          }
          if ( v5 > v6 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x960u);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = a1[2];
  v10 = a1[3];
  v11 = v10 + (v9 << 8);
  if ( a2 < v11 || a2 >= v10 + ((v9 + a1[4]) << 8) + a1[5] )
    return 0xFFFFFFFFLL;
  return (a1[2 * (a2 - v11) + 6] << 8) + (unsigned int)a1[2 * (a2 - v11) + 7];
}

// 140272530: using guessed type __int16[2];
// 140272E60: using guessed type __int16[45];

//----- (000000014017DCC0) ----------------------------------------------------
int            sub_14017DCC0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  int v5; // r14d
  unsigned __int8 *v6; // r9
  unsigned __int8 *v7; // rdx
  signed __int64 v8; // r9
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // r8
  __int64 v11; // r15
  unsigned __int8 *v12; // rsi
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int v16; // r8d
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int16 v19; // r12
  __int16 v20; // r13
  int v21; // r14d
  int v22; // edi
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // edi
  unsigned __int64 v29; // rbx
  int v30; // r14d
  int v31; // r10d
  int v32; // r9d
  int v33; // eax
  unsigned __int8 *v34; // r8
  int v35; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017DCC0[144];
#define v37 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 0)) /* [rsp+20h] */
#define i (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 8)) /* [rsp+28h] */
#define v39 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 16)) /* [rsp+30h] */
#define v40 (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 24)) /* [rsp+38h] */
#define v41 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 32)) /* [rsp+40h] */
#define v42 (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 40)) /* [rsp+48h] */
#define v43 (*(unsigned __int8 (*))(void *)(sr_frame_14017DCC0 + 112)) /* [rsp+90h] */
#define v45 (*(int (*))(void *)(sr_frame_14017DCC0 + 136)) /* [rsp+A8h] */

  v3 = *(int *)(a1 + 48);
  v5 = a2;
  if ( (_DWORD)v3 )
  {
    v6 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v3);
    if ( v6[1] + (*v6 << 8) == 1 && !(v6[3] + (v6[2] << 8)) )
    {
      v7 = &v6[256 * (unsigned __int64)v6[8] + v6[9]];
      v42 = v7;
      v41 = ((unsigned __int64)*v7 << 8) + v7[1];
      if ( v41 )
      {
        v8 = 0;
        v9 = v7 + 2;
        v37 = 0;
        for ( i = v7 + 2; ; i += 2 )
        {
          v10 = &v7[256 * (unsigned __int64)*v9 + v9[1]];
          v40 = v10;
          if ( v10[1] + (*v10 << 8) == 2 )
          {
            v11 = 0;
            v39 = ((unsigned __int64)v10[4] << 8) + v10[5];
            if ( v39 )
              break;
          }
LABEL_25:
          ++v8;
          v9 = i + 2;
          v37 = v8;
          if ( v8 >= v41 )
            return 0;
          v7 = v42;
        }
        while ( 1 )
        {
          v12 = &v10[256 * (unsigned __int64)v10[2 * v11 + 6] + v10[2 * v11 + 7]];
          v13 = *v12;
          v14 = v12[1];
          v15 = sub_14017D900(&v12[256 * (unsigned __int64)v12[2] + v12[3]], v5);
          v16 = v15;
          if ( v15 != -1 )
          {
            if ( v14 + (v13 << 8) == 1 )
            {
              v25 = 2 * v15;
              v26 = &v12[v12[v25 + 11]];
              v27 = (unsigned __int64)v12[v25 + 10] << 8;
              v28 = v26[v27];
              v29 = (unsigned __int64)&v26[v27 + 2];
              v30 = v26[v27 + 1];
              if ( v12[5] + (v12[4] << 8) != 4 || v12[7] + (v12[6] << 8) )
                return 0;
              if ( v16 >= v12[9] + (v12[8] << 8) )
                sub_14023E640(
                  (char *)L"coverageIndex < pairSetCount",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9A1u);
              v31 = 0;
              v32 = (v28 << 8) + v30 - 1;
              if ( v32 >= 0 )
              {
                do
                {
                  v33 = (v31 + v32) >> 1;
                  v34 = (unsigned __int8 *)(v29 + 4 * v33);
                  v35 = (*v34 << 8) + v34[1];
                  if ( a3 >= v35 )
                  {
                    if ( a3 <= v35 )
                      return (__int16)((v34[2] << 8) + v34[3]);
                    v31 = v33 + 1;
                  }
                  else
                  {
                    v32 = v33 - 1;
                  }
                }
                while ( v31 <= v32 );
              }
LABEL_22:
              v5 = a2;
              goto LABEL_23;
            }
            if ( v14 + (v13 << 8) == 2 )
            {
              v17 = v12[10];
              v18 = v12[11];
              v19 = v12[5] + (v12[4] << 8);
              v20 = v12[7] + (v12[6] << 8);
              v21 = sub_14017DB90(&v12[256 * (unsigned __int64)v12[8] + v12[9]], v5);
              v22 = sub_14017DB90(&v12[256 * (unsigned __int64)v17 + v18], a3);
              v23 = v12[14];
              v43 = v12[15];
              v45 = v12[13] + (v12[12] << 8);
              if ( v21 >= v45 )
                sub_14023E640(
                  (char *)L"glyph1class < class1Count",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9C5u);
              v24 = v43 + (v23 << 8);
              if ( v22 >= v24 )
                sub_14023E640(
                  (char *)L"glyph2class < class2Count",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9C6u);
              if ( v19 != 4 || v20 )
                return 0;
              if ( v21 >= 0 && v21 < v45 && v22 >= 0 && v22 < v24 )
                return (__int16)(v12[2 * v21 * v24 + 17 + 2 * v22] + (v12[2 * v21 * v24 + 16 + 2 * v22] << 8));
              goto LABEL_22;
            }
            sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x9D8u);
          }
LABEL_23:
          v10 = v40;
          if ( ++v11 >= v39 )
          {
            v8 = v37;
            goto LABEL_25;
          }
        }
      }
    }
  }
  return 0;
}
#undef v37
#undef i
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v45

// 140272530: using guessed type __int16[2];
// 140272E60: using guessed type __int16[45];
// 140273108: using guessed type __int16[29];
// 140273148: using guessed type __int16[26];
// 140273180: using guessed type __int16[26];

//----- (000000014017E0F0) ----------------------------------------------------
__int64            sub_14017E0F0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E0F0[64];
#define v15 (*(__int64 (*))(void *)(sr_frame_14017E0F0 + 8)) /* [rsp+20h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14017E0F0 + 16)) /* [rsp+28h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_14017E0F0 + 32)) /* [rsp+38h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_14017E0F0 + 48)) /* [rsp+48h] */
#define v19 (*(unsigned int (*))(void *)(sr_frame_14017E0F0 + 56)) /* [rsp+50h] */

  v15 = 1;
  v7 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v9 = sub_140182AD0(a1, a2, (__int64)&v15);
  if ( a3 )
  {
    v10 = 0;
    if ( v9 )
      v10 = v17;
    *a3 = v10;
  }
  if ( a4 )
  {
    v11 = 0;
    if ( v9 )
      v11 = DWORD2(v17);
    *a4 = v11;
  }
  if ( a5 )
  {
    v12 = 0;
    if ( v9 )
      v12 = DWORD1(v17);
    *a5 = v12;
  }
  if ( a6 )
  {
    v13 = 0;
    if ( v9 )
      v13 = HIDWORD(v17);
    *a6 = v13;
  }
  if ( v9 )
    return v19;
  return v7;
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19


//----- (000000014017E1A0) ----------------------------------------------------
int            sub_14017E1A0(__int64 a1, int a2, int a3)
{
  unsigned __int8 *v3; // r11
  int v4; // r9d
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  unsigned int v9; // ecx

  v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 44));
  if ( !*(_DWORD *)(a1 + 44) )
    return 0;
  if ( !(v3[3] + (v3[2] << 8)) )
    return 0;
  if ( v3[9] + (v3[8] << 8) != 1 )
    return 0;
  v4 = 0;
  v5 = a3 | (a2 << 16);
  v6 = (v3[10] << 8) + v3[11] - 1;
  if ( v6 < 0 )
    return 0;
  while ( 1 )
  {
    v7 = (v6 + v4) >> 1;
    v8 = 6 * v7;
    v9 = v3[v8 + 21] + (v3[v8 + 18] << 24) + (v3[v8 + 20] << 8) + (v3[v8 + 19] << 16);
    if ( v5 >= v9 )
      break;
    v6 = v7 - 1;
LABEL_9:
    if ( v4 > v6 )
      return 0;
  }
  if ( v5 > v9 )
  {
    v4 = v7 + 1;
    goto LABEL_9;
  }
  return (__int16)((v3[v8 + 22] << 8) + v3[v8 + 23]);
}


//----- (000000014017E2A0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14017E2A0(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E2A0[112];
#define v9 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 0)) /* [rsp+20h] */
#define v10 (*(sr_frame_i128 (*))(void *)(sr_frame_14017E2A0 + 8)) /* [rsp+28h] */
#define v11 (*(sr_frame_i128 (*))(void *)(sr_frame_14017E2A0 + 24)) /* [rsp+38h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 40)) /* [rsp+48h] */
#define v13 (*(int (*))(void *)(sr_frame_14017E2A0 + 48)) /* [rsp+50h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 56)) /* [rsp+58h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_14017E2A0 + 64)) /* [rsp+60h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14017E2A0 + 80)) /* [rsp+70h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 96)) /* [rsp+80h] */
#define v18 (*(unsigned int (*))(void *)(sr_frame_14017E2A0 + 104)) /* [rsp+88h] */

  v9 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)sub_140182AD0(a1, a2, (__int64)&v9)
    && (v6 = sr_path_malloc(14LL * v13), *a3 = v6, v17 = v6, (unsigned int)sub_140182AD0(a1, a2, (__int64)&v14)) )
  {
    v7 = v18;
    if ( v18 != v13 )
      sub_14023E640(
        (char *)L"output_ctx.num_vertices == count_ctx.num_vertices",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x8B6u);
    return v7;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272E60: using guessed type __int16[45];
// 1402730A0: using guessed type __int16[50];

//----- (000000014017E380) ----------------------------------------------------
__int64            sub_14017E380(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  int v4; // esi
  __m128i *v7; // rdi
  int v8; // r15d
  int v9; // eax
  __int16 v10; // dx
  char v11; // bp
  BOOL v12; // r14d
  int v13; // r8d
  __int64 v14; // r15
  int v15; // r13d
  char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int8 v19; // dl
  __int64 v20; // r9
  _BYTE *v21; // r8
  __int64 v22; // r10
  int v23; // r8d
  __int64 v24; // r9
  char v25; // dl
  int v26; // ecx
  __int64 v27; // r10
  __int64 v28; // r9
  int v29; // r8d
  char v30; // dl
  int v31; // ecx
  __int64 v32; // rbp
  __int16 *v33; // rbx
  int v34; // edx
  int v35; // r13d
  int v36; // r8d
  int v37; // r10d
  int v38; // r11d
  int v39; // r9d
  int v40; // r15d
  char v41; // al
  int v42; // r12d
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int16 v48; // r15
  __int16 v49; // r12
  int v50; // eax
  int v51; // ecx
  __int64 result; // rax
  char *v53; // rbx
  char v54; // bp
  float v55; // xmm10_4
  int v56; // esi
  float v57; // xmm11_4
  int v58; // r14d
  __m128i v59; // xmm10
  int v60; // eax
  float v61; // xmm8_4
  float v62; // xmm9_4
  int v63; // eax
  float v64; // xmm6_4
  float v65; // xmm7_4
  __m128i v66; // xmm7
  int v67; // eax
  __m128i v68; // xmm8
  int v69; // eax
  int v70; // edx
  float v71; // xmm12_4
  float v72; // xmm13_4
  int v73; // eax
  __int64 v74; // rsi
  __int64 v75; // r9
  __int64 v76; // r8
  unsigned __int64 v77; // rdx
  char *v78; // rcx
  float v79; // xmm0_4
  float v80; // xmm3_4
  float v81; // xmm0_4
  float v82; // xmm3_4
  char *v83; // rcx
  float v84; // xmm0_4
  float v85; // xmm3_4
  float v86; // xmm3_4
  float v87; // xmm2_4
  char *v88; // rcx
  float v89; // xmm0_4
  float v90; // xmm1_4
  float v91; // xmm0_4
  float v92; // xmm1_4
  char *v93; // rcx
  float v94; // xmm0_4
  float v95; // xmm3_4
  float v96; // xmm2_4
  float v97; // xmm3_4
  __int64 v98; // rdx
  __int64 v99; // r8
  char *v100; // rcx
  float v101; // xmm0_4
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm3_4
  int v105; // r12d
  __m128i *v106; // rax
  __m128i *v107; // r14
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E380[304];
#define v108 (*(__int16 (*))(void *)(sr_frame_14017E380 + 0)) /* [rsp+50h] */
#define v109 (*(int (*))(void *)(sr_frame_14017E380 + 4)) /* [rsp+54h] */
#define v110 (*(int (*))(void *)(sr_frame_14017E380 + 8)) /* [rsp+58h] */
#define v111 (*(int (*))(void *)(sr_frame_14017E380 + 12)) /* [rsp+5Ch] */
#define v112 (*(int (*))(void *)(sr_frame_14017E380 + 16)) /* [rsp+60h] */
#define v113 (*(int (*))(void *)(sr_frame_14017E380 + 20)) /* [rsp+64h] */
#define v114 (*(unsigned __int8 * (*))(void *)(sr_frame_14017E380 + 24)) /* [rsp+68h] */
#define v115 (*(__int64 (*))(void *)(sr_frame_14017E380 + 32)) /* [rsp+70h] */
#define Block (*(void * (*))(void *)(sr_frame_14017E380 + 272)) /* [rsp+160h] */
#define v117 (*(__int64 * (*))(void *)(sr_frame_14017E380 + 288)) /* [rsp+170h] */
#define v118 (*(__int16 (*))(void *)(sr_frame_14017E380 + 296)) /* [rsp+178h] */

  v117 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v7 = nullptr;
  v8 = 0;
  v9 = sub_14017DA60(a1, a2);
  *a3 = 0;
  if ( v9 < 0 )
    return 0;
  v10 = *(unsigned __int8 *)(v9 + v3 + 1) + (*(unsigned __int8 *)(v9 + v3) << 8);
  if ( v10 > 0 )
  {
    v11 = 0;
    v114 = (unsigned __int8 *)(v9 + v3 + 10);
    v12 = 0;
    v13 = 2 * v10;
    v14 = v13;
    v15 = v114[v13 - 1] + (v114[v13 - 2] << 8);
    v16 = (char *)(v13
                 + v9
                 + ((unsigned __int64)*(unsigned __int8 *)(v9 + (__int64)v13 + v3 + 10) << 8)
                 + *(unsigned __int8 *)(v9 + (__int64)v13 + v3 + 11)
                 + v3
                 + 12);
    v17 = sr_path_malloc(14LL * (v15 + v13 + 1));
    v18 = v17;
    if ( !v17 )
      return 0;
    v111 = 0;
    v19 = 0;
    v115 = (unsigned int)(v15 + 1);
    if ( v15 == -1 )
    {
      v34 = 0;
      v50 = 0;
      v51 = 0;
      v35 = 0;
      v36 = 0;
      LOWORD(v37) = 0;
      LOWORD(v38) = 0;
    }
    else
    {
      v20 = (unsigned int)(v15 + 1);
      v21 = (_BYTE *)(14 * v14 + v17 + 12);
      do
      {
        if ( v19 )
        {
          --v19;
        }
        else
        {
          v11 = *v16;
          if ( (*v16 & 8) != 0 )
            v19 = v16[1];
          v16 += ((v11 & 8) != 0) + 1;
        }
        *v21 = v11;
        v21 += 14;
        --v20;
      }
      while ( v20 );
      v22 = (unsigned int)(v15 + 1);
      v23 = 0;
      v24 = v17 + 14 * v14;
      do
      {
        v25 = *(_BYTE *)(v24 + 12) & 0x10;
        if ( (*(_BYTE *)(v24 + 12) & 2) != 0 )
        {
          v26 = (unsigned __int8)*v16++;
          if ( !v25 )
            v26 = -v26;
          v23 += v26;
        }
        else if ( !v25 )
        {
          v23 += (__int16)(((unsigned __int8)*v16 << 8) + (unsigned __int8)v16[1]);
          v16 += 2;
        }
        *(_WORD *)v24 = v23;
        v24 += 14;
        --v22;
      }
      while ( v22 );
      v27 = (unsigned int)(v15 + 1);
      v28 = 14 * v14 + v17 + 2;
      v29 = 0;
      do
      {
        v30 = *(_BYTE *)(v28 + 10) & 0x20;
        if ( (*(_BYTE *)(v28 + 10) & 4) != 0 )
        {
          v31 = (unsigned __int8)*v16++;
          if ( !v30 )
            v31 = -v31;
          v29 += v31;
        }
        else if ( !v30 )
        {
          v29 += (__int16)(((unsigned __int8)*v16 << 8) + (unsigned __int8)v16[1]);
          v16 += 2;
        }
        *(_WORD *)v28 = v29;
        v28 += 14;
        --v27;
      }
      while ( v27 );
      v32 = 0;
      v109 = 0;
      v33 = (__int16 *)(v17 + 14 * v14);
      v110 = 0;
      v34 = 0;
      v112 = 0;
      v35 = 0;
      v113 = 0;
      v36 = 0;
      LOWORD(v37) = 0;
      LOWORD(v38) = 0;
      v39 = 0;
      do
      {
        v40 = *v33;
        v41 = *((_BYTE *)v33 + 12);
        v118 = *v33;
        v42 = v33[1];
        v108 = v33[1];
        LOBYTE(Block) = v41;
        if ( v111 == v39 )
        {
          if ( v32 )
          {
            v43 = sub_14017FA30(v18, v34, v4, v12, v38, v37, v110, v109, v36, v35);
            v36 = v112;
            v34 = v43;
            v41 = (char)Block;
            v39 = v113;
          }
          v12 = (v41 & 1) == 0;
          if ( (v41 & 1) != 0 )
          {
            LOWORD(v38) = v40;
            LOWORD(v37) = v42;
          }
          else
          {
            v38 = v33[7];
            v37 = v33[8];
            v110 = v40;
            v109 = v42;
            if ( (v33[13] & 1) != 0 )
            {
              ++v39;
              ++v32;
              v33 += 7;
            }
            else
            {
              v38 = (v40 + v38) >> 1;
              v37 = (v42 + v37) >> 1;
            }
          }
          v44 = v34++;
          v45 = 14 * v44;
          v4 = 0;
          *(_DWORD *)(v45 + v18 + 4) = 0;
          *(_BYTE *)(v45 + v18 + 12) = 1;
          *(_WORD *)(v45 + v18) = v38;
          *(_WORD *)(v45 + v18 + 2) = v37;
          v111 = (*v114 << 8) + v114[1] + 1;
          v114 += 2;
        }
        else if ( (v41 & 1) != 0 )
        {
          v47 = 14LL * v34++;
          if ( v4 )
          {
            v48 = v35;
            v49 = v36;
          }
          else
          {
            v48 = 0;
            v49 = 0;
          }
          *(_BYTE *)(v47 + v18 + 12) = (v4 != 0) + 2;
          *(_WORD *)(v47 + v18) = v118;
          *(_WORD *)(v47 + v18 + 2) = v108;
          *(_WORD *)(v47 + v18 + 4) = v49;
          v4 = 0;
          *(_WORD *)(v47 + v18 + 6) = v48;
        }
        else
        {
          if ( v4 )
          {
            v46 = 14LL * v34;
            *(_WORD *)(v46 + v18) = (v36 + v40) >> 1;
            *(_WORD *)(v46 + v18 + 2) = (v42 + v35) >> 1;
            ++v34;
            *(_BYTE *)(v46 + v18 + 12) = 3;
            *(_WORD *)(v46 + v18 + 4) = v36;
            *(_WORD *)(v46 + v18 + 6) = v35;
          }
          v36 = v40;
          v112 = v40;
          v35 = v42;
          v4 = 1;
        }
        ++v39;
        ++v32;
        v33 += 7;
        v113 = v39;
      }
      while ( v32 < v115 );
      v50 = v109;
      v51 = v110;
    }
    LODWORD(result) = sub_14017FA30(v18, v34, v4, v12, v38, v37, v51, v50, v36, v35);
    *v117 = v18;
    return (unsigned int)result;
  }
  if ( v10 != -1 )
  {
    if ( v10 < 0 )
      sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x730u);
LABEL_90:
    *v117 = (__int64)v7;
    return (unsigned int)v8;
  }
  v53 = (char *)(v9 + v3 + 10);
  while ( 1 )
  {
    v54 = v53[1];
    v55 = 0.0;
    v56 = (unsigned __int8)v53[2];
    v57 = 0.0;
    v58 = (unsigned __int8)v53[3];
    v53 += 4;
    Block = nullptr;
    if ( (v54 & 2) != 0 )
    {
      if ( (v54 & 1) != 0 )
      {
        v59 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]));
        v60 = (__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]);
        v53 += 4;
      }
      else
      {
        v59 = _mm_cvtsi32_si128(*v53);
        v60 = v53[1];
        v53 += 2;
      }
      v55 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v59), f32)[0];
      v57 = (float)v60;
    }
    else
    {
      sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x6FBu);
    }
    if ( (v54 & 8) != 0 )
    {
      v61 = 0.0;
      v62 = 0.0;
      v63 = (__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]);
      v53 += 2;
      v64 = (float)v63 * 0.000061035156;
      v65 = v64;
    }
    else if ( (v54 & 0x40) != 0 )
    {
      v61 = 0.0;
      v62 = 0.0;
      v66 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]));
      v67 = (__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]);
      v53 += 4;
      v65 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v66), f32)[0] * 0.000061035156;
      v64 = (float)v67 * 0.000061035156;
    }
    else if ( v54 >= 0 )
    {
      v64 = 1.0;
      v61 = 0.0;
      v62 = 0.0;
      v65 = 1.0;
    }
    else
    {
      v65 = (float)(__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]) * 0.000061035156;
      v68 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)v53[4] << 8) + (unsigned __int8)v53[5]));
      v62 = (float)(__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]) * 0.000061035156;
      v69 = (__int16)(((unsigned __int8)v53[6] << 8) + (unsigned __int8)v53[7]);
      v53 += 8;
      v61 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v68), f32)[0] * 0.000061035156;
      v64 = (float)v69 * 0.000061035156;
    }
    v70 = v58 + (v56 << 8);
    v71 = fsqrt((float)(v62 * v62) + (float)(v65 * v65));
    v72 = fsqrt((float)(v64 * v64) + (float)(v61 * v61));
    v73 = *(_DWORD *)(a1 + 76) ? sub_14017E2A0(a1, v70, (__int64 *)&Block) : sub_14017E380(a1, v70, (__int64 *)&Block);
    if ( v73 > 0 )
      break;
LABEL_81:
    if ( (v54 & 0x20) == 0 )
      goto LABEL_90;
  }
  v74 = v73;
  v75 = 0;
  if ( v73 < 4LL )
    goto LABEL_73;
  v76 = 0;
  v77 = ((unsigned __int64)(v73 - 4LL) >> 2) + 1;
  v75 = 4 * v77;
  do
  {
    v78 = (char *)Block;
    v79 = (float)*(__int16 *)((char *)Block + v76 + 2);
    v80 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v76) * v62) + (float)(v79 * v64)) + v57) * v72;
    *(_WORD *)((char *)Block + v76) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block + v76) * v65)
                                                                 + (float)(v79 * v61))
                                                         + v55)
                                                 * v71);
    *(_WORD *)&v78[v76 + 2] = (int)v80;
    v81 = (float)*(__int16 *)&v78[v76 + 6];
    v82 = (float)((float)((float)((float)*(__int16 *)&v78[v76 + 4] * v62) + (float)(v81 * v64)) + v57) * v72;
    *(_WORD *)&v78[v76 + 4] = (int)(float)((float)((float)((float)((float)*(__int16 *)&v78[v76 + 4] * v65)
                                                         + (float)(v81 * v61))
                                                 + v55)
                                         * v71);
    *(_WORD *)&v78[v76 + 6] = (int)v82;
    v83 = (char *)Block;
    v84 = (float)*(__int16 *)((char *)Block + v76 + 16);
    v85 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v76 + 14) * v62) + (float)(v84 * v64)) + v57)
        * v72;
    *(_WORD *)((char *)Block + v76 + 14) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + v76
                                                                                                  + 14)
                                                                              * v65)
                                                                      + (float)(v84 * v61))
                                                              + v55)
                                                      * v71);
    *(_WORD *)&v83[v76 + 16] = (int)v85;
    v86 = (float)*(__int16 *)&v83[v76 + 18] * v62;
    v87 = (float)*(__int16 *)&v83[v76 + 20] * v64;
    *(_WORD *)&v83[v76 + 18] = (int)(float)((float)((float)((float)((float)*(__int16 *)&v83[v76 + 18] * v65)
                                                          + (float)((float)*(__int16 *)&v83[v76 + 20] * v61))
                                                  + v55)
                                          * v71);
    *(_WORD *)&v83[v76 + 20] = (int)(float)((float)((float)(v86 + v87) + v57) * v72);
    v88 = (char *)Block;
    v89 = (float)*(__int16 *)((char *)Block + v76 + 30);
    v90 = (float)*(__int16 *)((char *)Block + v76 + 28);
    *(_WORD *)((char *)Block + v76 + 28) = (int)(float)((float)((float)((float)(v90 * v65) + (float)(v89 * v61)) + v55)
                                                      * v71);
    *(_WORD *)&v88[v76 + 30] = (int)(float)((float)((float)((float)(v90 * v62) + (float)(v89 * v64)) + v57) * v72);
    v91 = (float)*(__int16 *)&v88[v76 + 34];
    v92 = (float)*(__int16 *)&v88[v76 + 32];
    *(_WORD *)&v88[v76 + 32] = (int)(float)((float)((float)((float)(v92 * v65) + (float)(v91 * v61)) + v55) * v71);
    *(_WORD *)&v88[v76 + 34] = (int)(float)((float)((float)((float)(v92 * v62) + (float)(v91 * v64)) + v57) * v72);
    v93 = (char *)Block;
    v94 = (float)*(__int16 *)((char *)Block + v76 + 44);
    v95 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v76 + 42) * v62) + (float)(v94 * v64)) + v57)
        * v72;
    *(_WORD *)((char *)Block + v76 + 42) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + v76
                                                                                                  + 42)
                                                                              * v65)
                                                                      + (float)(v94 * v61))
                                                              + v55)
                                                      * v71);
    *(_WORD *)&v93[v76 + 44] = (int)v95;
    v96 = (float)*(__int16 *)&v93[v76 + 48];
    v97 = (float)*(__int16 *)&v93[v76 + 46];
    *(_WORD *)&v93[v76 + 46] = (int)(float)((float)((float)((float)(v97 * v65) + (float)(v96 * v61)) + v55) * v71);
    *(_WORD *)&v93[v76 + 48] = (int)(float)((float)((float)((float)(v97 * v62) + (float)(v96 * v64)) + v57) * v72);
    v76 += 56;
    --v77;
  }
  while ( v77 );
  if ( v75 < v73 )
  {
LABEL_73:
    v98 = 14 * v75;
    v99 = v73 - v75;
    do
    {
      v100 = (char *)Block;
      v101 = (float)*(__int16 *)((char *)Block + v98 + 2);
      v102 = (float)*(__int16 *)((char *)Block + v98);
      *(_WORD *)((char *)Block + v98) = (int)(float)((float)((float)((float)(v102 * v65) + (float)(v101 * v61)) + v55)
                                                   * v71);
      *(_WORD *)&v100[v98 + 2] = (int)(float)((float)((float)((float)(v102 * v62) + (float)(v101 * v64)) + v57) * v72);
      v103 = (float)*(__int16 *)&v100[v98 + 6];
      v104 = (float)*(__int16 *)&v100[v98 + 4];
      *(_WORD *)&v100[v98 + 4] = (int)(float)((float)((float)((float)(v104 * v65) + (float)(v103 * v61)) + v55) * v71);
      *(_WORD *)&v100[v98 + 6] = (int)(float)((float)((float)((float)(v104 * v62) + (float)(v103 * v64)) + v57) * v72);
      v98 += 14;
      --v99;
    }
    while ( v99 );
  }
  v105 = v73 + v8;
  v106 = (__m128i *)sr_path_malloc(14LL * (v73 + v8));
  v107 = v106;
  if ( v106 )
  {
    if ( v8 > 0 )
      sub_1401FC920(v106, v7, 14LL * v8);
    sub_1401FC920((__m128i *)((char *)v107 + 14 * v8), (     __m128i *)Block, 14 * v74);
    if ( v7 )
      free(v7);
    v7 = v107;
    free(Block);
    v8 = v105;
    goto LABEL_81;
  }
  if ( v7 )
    free(v7);
  if ( Block )
    free(Block);
  return 0;
}
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef Block
#undef v117
#undef v118

// 14017EDF9: conditional instruction was optimized away because eax.4>=1
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272530: using guessed type __int16[2];
// 140272E60: using guessed type __int16[45];
// 1402794A0: using guessed type __int128 xmmword_1402794A0;

//----- (000000014017F020) ----------------------------------------------------
__int64            sub_14017F020(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v5; // r8d
  __int64 v6; // r9
  int v7; // eax
  unsigned __int8 v8; // cl
  __int64 v9; // rdx

  v2 = a2;
  v3 = 0;
  if ( a2 - 1 <= 3
    || (sub_14023E640((char *)L"n >= 1 && n <= 4", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x469u),
        (int)v2 > 0) )
  {
    v5 = *(_DWORD *)(a1 + 12);
    v6 = v2;
    v7 = *(_DWORD *)(a1 + 8);
    do
    {
      if ( v7 < v5 )
      {
        v9 = v7++;
        v8 = *(_BYTE *)(v9 + *(_QWORD *)a1);
        *(_DWORD *)(a1 + 8) = v7;
      }
      else
      {
        v8 = 0;
      }
      v3 = v8 | (v3 << 8);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}

// 140272E60: using guessed type __int16[45];
// 140272EF0: using guessed type __int16[17];

//----- (000000014017F0C0) ----------------------------------------------------
char            sub_14017F0C0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(int *)(a1 + 8);
  if ( (int)v2 < *(_DWORD *)(a1 + 12) )
    return *(_BYTE *)(v2 + *(_QWORD *)a1);
  else
    return 0;
}


//----- (000000014017F0E0) ----------------------------------------------------
__int64            sub_14017F0E0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax

  *(_OWORD *)a1 = 0u;
  if ( a3 >= 0 && a4 >= 0 )
  {
    v4 = *(_DWORD *)(a2 + 12);
    if ( a3 <= v4 && a4 <= v4 - a3 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a2 + a3;
      *(_DWORD *)(a1 + 12) = a4;
    }
  }
  return a1;
}


//----- (000000014017F130) ----------------------------------------------------
__int64            sub_14017F130(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 12);
  if ( (a2 > (int)result || a2 < 0)
    && ((sub_14023E640(
           (char *)L"!(o > b->size || o < 0)",
           (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
           0x45Cu),
         result = *(unsigned int *)(a1 + 12),
         a2 > (int)result)
     || a2 < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  return result;
}

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];

//----- (000000014017F190) ----------------------------------------------------
__int64            sub_14017F190(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // ebx

  result = *(unsigned int *)(a1 + 12);
  v4 = a2 + *(_DWORD *)(a1 + 8);
  if ( (v4 > (int)result || v4 < 0)
    && ((sub_14023E640(
           (char *)L"!(o > b->size || o < 0)",
           (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
           0x45Cu),
         result = *(unsigned int *)(a1 + 12),
         v4 > (int)result)
     || v4 < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v4;
  }
  return result;
}

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];

//----- (000000014017F1F0) ----------------------------------------------------
_OWORD *           sub_14017F1F0(_OWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // r8d
  int v6; // esi
  int v7; // ebx
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // esi
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned int v14; // r14d
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  __int128 v19; // [rsp+20h] [rbp-28h]

  v2 = *(int *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  if ( (int)v2 < v4 )
  {
    v9 = *(_QWORD *)a2;
    v7 = v2 + 1;
    v6 = *(unsigned __int8 *)(v2 + *(_QWORD *)a2);
    *(_DWORD *)(a2 + 8) = v2 + 1;
    if ( (int)v2 + 1 < v4 )
    {
      v10 = v7;
      v7 = v2 + 2;
      v8 = *(_BYTE *)(v10 + v9);
      *(_DWORD *)(a2 + 8) = v2 + 2;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v6 = 0;
    v7 = *(_DWORD *)(a2 + 8);
    v8 = 0;
  }
  v11 = v8 | (v6 << 8);
  if ( v11 )
  {
    if ( v7 < v4 )
    {
      v13 = v7++;
      v12 = *(_BYTE *)(v13 + *(_QWORD *)a2);
      *(_DWORD *)(a2 + 8) = v7;
    }
    else
    {
      v12 = 0;
    }
    v14 = v12;
    if ( !v12 || v12 > 4u )
    {
      sub_14023E640(
        (char *)L"offsize >= 1 && offsize <= 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x48Cu);
      v4 = *(_DWORD *)(a2 + 12);
      v7 = *(_DWORD *)(a2 + 8);
    }
    v15 = v7 + v14 * v11;
    if ( v15 > v4 || v15 < 0 )
    {
      sub_14023E640(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      if ( v15 > *(_DWORD *)(a2 + 12) || v15 < 0 )
        v15 = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = v15;
    v16 = sub_14017F020(a2, v14);
    v4 = *(_DWORD *)(a2 + 12);
    v7 = *(_DWORD *)(a2 + 8) + v16 - 1;
    if ( v7 > v4 || v7 < 0 )
    {
      sub_14023E640(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      v4 = *(_DWORD *)(a2 + 12);
      if ( v7 > v4 || v7 < 0 )
        v7 = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = v7;
  }
  v17 = v7 - v2;
  v19 = 0u;
  if ( (int)v2 >= 0 && v17 >= 0 && (int)v2 <= v4 && v17 <= v4 - (int)v2 )
  {
    HIDWORD(v19) = v17;
    *(_QWORD *)&v19 = *(_QWORD *)a2 + v2;
  }
  *a1 = v19;
  return a1;
}

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];
// 140272F40: using guessed type __int16[29];

//----- (000000014017F380) ----------------------------------------------------
__int64            sub_14017F380(__int64 a1)
{
  int v1; // r8d
  int v3; // eax
  int v4; // r9d
  __int64 v5; // rcx
  int v6; // r9d
  unsigned __int8 v8; // dl

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 < 0 )
  {
    sub_14023E640(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    v1 = *(_DWORD *)(a1 + 12);
  }
  v3 = 0;
  v4 = 0;
  if ( v1 < 0 )
    v4 = v1;
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 >= v1 )
    return (unsigned int)(v3 << 8);
  v5 = v4;
  v6 = v4 + 1;
  v3 = *(unsigned __int8 *)(v5 + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = v6;
  if ( v6 >= v1 )
    return (unsigned int)(v3 << 8);
  v8 = *(_BYTE *)(v6 + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = v6 + 1;
  return v8 | (unsigned int)(v3 << 8);
}

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];

//----- (000000014017F410) ----------------------------------------------------
_OWORD *           sub_14017F410(_OWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v7; // edi
  __int64 v8; // rcx
  int v9; // ebp
  unsigned __int8 v10; // al
  __int64 v11; // r8
  int v12; // ebp
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  unsigned int v15; // r15d
  int v16; // ebx
  int v17; // ebx
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  __int128 v22; // [rsp+20h] [rbp-38h]

  v3 = *(int *)(a2 + 12);
  if ( (int)v3 < 0 )
    sub_14023E640(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  v7 = 0;
  if ( (int)v3 < 0 )
    v7 = v3;
  v8 = v7;
  if ( v7 < v3 )
  {
    v11 = ++v7;
    v9 = *(unsigned __int8 *)(v8 + *(_QWORD *)a2);
    if ( v8 + 1 < v3 )
    {
      v10 = *(_BYTE *)(v11 + *(_QWORD *)a2);
      ++v7;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v12 = v10 | (v9 << 8);
  if ( v7 < (int)v3 )
  {
    v14 = v7++;
    v13 = *(_BYTE *)(v14 + *(_QWORD *)a2);
  }
  else
  {
    v13 = 0;
  }
  v15 = v13;
  if ( a3 < 0 || a3 >= v12 )
    sub_14023E640((char *)L"i >= 0 && i < count", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4D1u);
  if ( v15 - 1 > 3 )
    sub_14023E640(
      (char *)L"offsize >= 1 && offsize <= 4",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x4D2u);
  v16 = v7 + a3 * v15;
  if ( v16 > (int)v3 || v16 < 0 )
  {
    sub_14023E640(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    if ( v16 > (int)v3 || v16 < 0 )
      v16 = v3;
  }
  *(_DWORD *)(a2 + 8) = v16;
  v17 = sub_14017F020(a2, v15);
  v18 = sub_14017F020(a2, v15) - v17;
  v22 = 0u;
  v19 = v15 * (v12 + 1) + v17 + 2;
  if ( v19 >= 0 && v18 >= 0 )
  {
    v20 = *(_DWORD *)(a2 + 12);
    if ( v19 <= v20 && v18 <= v20 - v19 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)a2 + v19;
      HIDWORD(v22) = v18;
    }
  }
  *a1 = v22;
  return a1;
}

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];
// 140272F40: using guessed type __int16[29];
// 140272F98: using guessed type __int16[20];

//----- (000000014017F5B0) ----------------------------------------------------
__int64            sub_14017F5B0(__int64 a1)
{
  __int64 v1; // r8
  int v3; // r10d
  unsigned __int8 v4; // al
  __int64 result; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax
  unsigned __int8 v11; // dl

  v1 = *(int *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  if ( (int)v1 < v3 )
  {
    v4 = *(_BYTE *)(v1 + *(_QWORD *)a1);
    LODWORD(v1) = v1 + 1;
    *(_DWORD *)(a1 + 8) = v1;
  }
  else
  {
    v4 = 0;
  }
  if ( (unsigned int)v4 - 32 <= 0xD6 )
    return (unsigned int)v4 - 139;
  if ( (unsigned int)v4 - 247 > 3 )
  {
    if ( (unsigned int)v4 - 251 > 3 )
    {
      if ( v4 == 28 )
      {
        if ( (int)v1 < v3 )
        {
          v8 = (int)v1;
          v9 = v1 + 1;
          v10 = *(unsigned __int8 *)(v8 + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = v9;
          if ( v9 < v3 )
          {
            v11 = *(_BYTE *)(v9 + *(_QWORD *)a1);
            *(_DWORD *)(a1 + 8) = v9 + 1;
            LODWORD(result) = v11 | (v10 << 8);
          }
          else
          {
            LODWORD(result) = v10 << 8;
          }
          return (unsigned int)result;
        }
        else
        {
          return 0;
        }
      }
      else if ( v4 == 29 )
      {
        return sub_14017F020(a1, 4u);
      }
      else
      {
        sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x49Bu);
        return 0;
      }
    }
    else if ( (int)v1 < v3 )
    {
      v7 = *(_BYTE *)((int)v1 + *(_QWORD *)a1);
      *(_DWORD *)(a1 + 8) = v1 + 1;
      return 64148 - (v4 << 8) - (unsigned int)v7;
    }
    else
    {
      return 64148 - (v4 << 8);
    }
  }
  else if ( (int)v1 < v3 )
  {
    v6 = *(_BYTE *)((int)v1 + *(_QWORD *)a1);
    *(_DWORD *)(a1 + 8) = v1 + 1;
    return (v4 << 8) + (unsigned int)v6 - 63124;
  }
  else
  {
    return (v4 << 8) - 63124;
  }
}

// 140272530: using guessed type __int16[2];
// 140272E60: using guessed type __int16[45];

//----- (000000014017F720) ----------------------------------------------------
__int64            sub_14017F720(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v3; // cl
  int v4; // r8d
  int v5; // ebx
  int v6; // edx
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  int v9; // ecx

  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12)
    || (result = *(_QWORD *)a1, v3 = *(_BYTE *)(*(int *)(a1 + 8) + *(_QWORD *)a1), v3 < 0x1Cu) )
  {
    sub_14023E640((char *)L"b0 >= 28", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4A1u);
    return sub_14017F5B0(a1);
  }
  if ( v3 != 30 )
    return sub_14017F5B0(a1);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 8) + 1;
  if ( (v5 > v4 || (v6 = *(_DWORD *)(a1 + 12), v5 < 0))
    && ((result = sub_14023E640(
                    (char *)L"!(o > b->size || o < 0)",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                    0x45Cu),
         v4 = *(_DWORD *)(a1 + 12),
         v6 = v4,
         v5 > v4)
     || v5 < 0) )
  {
    *(_DWORD *)(a1 + 8) = v4;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v5;
    if ( v5 < v6 )
    {
      do
      {
        if ( v5 < v6 )
        {
          v8 = v5++;
          v7 = *(_BYTE *)(v8 + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = v5;
        }
        else
        {
          v7 = 0;
        }
        v9 = v7;
        result = v7 & 0xF;
      }
      while ( (_BYTE)result != 15 && (v9 & 0xFFFFFFF0) != 0xF0 && v5 < v4 );
    }
  }
  return result;
}

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];
// 140272F80: using guessed type __int16[9];

//----- (000000014017F820) ----------------------------------------------------
_OWORD *           sub_14017F820(_OWORD *a1, __int64 a2, int a3)
{
  int v6; // ebp
  int v7; // r8d
  __int32 v8; // ecx
  unsigned __int8 v9; // al
  int v10; // r10d
  unsigned __int8 v11; // al
  __int64 v12; // rax
  int v13; // r10d
  unsigned __int8 v14; // al
  __int64 v15; // rax
  int v16; // r9d
  unsigned __int8 v17; // al
  __int64 v18; // rax
  int v19; // r9d
  unsigned __int8 v20; // al
  __int64 v21; // rax
  int v22; // r11d
  unsigned __int8 v23; // al
  __int64 v24; // rax
  int v25; // edx
  unsigned __int8 v26; // al
  __int64 v27; // rax
  int v28; // edx
  int v29; // esi
  unsigned __int8 v30; // cl
  __m128i v31; // xmm0
  __int128 v32; // xmm0
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017F820[64];
#define v34 (*(__m128i (*))(void *)(sr_frame_14017F820 + 0)) /* [rsp+20h] */
#define v35 (*(__int128 (*))(void *)(sr_frame_14017F820 + 16)) /* [rsp+30h] */
#define v36 (*(__int128 (*))(void *)(sr_frame_14017F820 + 32)) /* [rsp+40h] */
#define v37 (*(_BYTE (*)[16])(void *)(sr_frame_14017F820 + 48)) /* [rsp+50h] */

  v6 = -1;
  v34 = *(__m128i *)(a2 + 144);
  if ( SR_VEC_READ_LANES(128, _mm_srli_si128(v34, 8), i32)[1] < 0 )
    sub_14023E640(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  if ( SR_VEC_LANES(128, v34, i32)[3] < 0 )
  {
    v8 = SR_VEC_LANES(128, v34, i32)[3];
LABEL_35:
    v29 = v8 + a3;
    if ( v29 > SR_VEC_LANES(128, v34, i32)[3] || v29 < 0 )
      sub_14023E640(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( v29 > SR_VEC_LANES(128, v34, i32)[3] || v29 < 0 || v29 >= SR_VEC_LANES(128, v34, i32)[3] )
      v30 = 0;
    else
      v30 = *(_BYTE *)(v29 + SR_VEC_LANES(128, v34, i64)[0]);
    v6 = v30;
    goto LABEL_44;
  }
  v7 = 0;
  v8 = 0;
  if ( SR_VEC_LANES(128, v34, i32)[3] <= 0 )
    goto LABEL_35;
  v8 = 1;
  if ( !*(_BYTE *)SR_VEC_LANES(128, v34, i64)[0] )
    goto LABEL_35;
  if ( *(_BYTE *)SR_VEC_LANES(128, v34, i64)[0] == 3 )
  {
    if ( SR_VEC_LANES(128, v34, i32)[3] > 1 )
    {
      v8 = 2;
      v9 = *(_BYTE *)(SR_VEC_LANES(128, v34, i64)[0] + 1);
    }
    else
    {
      v9 = 0;
    }
    v10 = v9;
    if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
    {
      v12 = v8++;
      v11 = *(_BYTE *)(v12 + SR_VEC_LANES(128, v34, i64)[0]);
    }
    else
    {
      v11 = 0;
    }
    v13 = v11 | (v10 << 8);
    if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
    {
      v15 = v8++;
      v14 = *(_BYTE *)(v15 + SR_VEC_LANES(128, v34, i64)[0]);
    }
    else
    {
      v14 = 0;
    }
    v16 = v14;
    if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
    {
      v18 = v8++;
      v17 = *(_BYTE *)(v18 + SR_VEC_LANES(128, v34, i64)[0]);
    }
    else
    {
      v17 = 0;
    }
    v19 = v17 | (v16 << 8);
    if ( v13 )
    {
      while ( 1 )
      {
        if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
        {
          v21 = v8++;
          v20 = *(_BYTE *)(v21 + SR_VEC_LANES(128, v34, i64)[0]);
        }
        else
        {
          v20 = 0;
        }
        v22 = v20;
        if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
        {
          v24 = v8++;
          v23 = *(_BYTE *)(v24 + SR_VEC_LANES(128, v34, i64)[0]);
        }
        else
        {
          v23 = 0;
        }
        v25 = v23;
        if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
        {
          v27 = v8++;
          v26 = *(_BYTE *)(v27 + SR_VEC_LANES(128, v34, i64)[0]);
        }
        else
        {
          v26 = 0;
        }
        v28 = v26 | (v25 << 8);
        if ( a3 >= v19 && a3 < v28 )
          break;
        ++v7;
        v19 = v28;
        if ( v7 >= v13 )
          goto LABEL_44;
      }
      v6 = v22;
    }
  }
LABEL_44:
  v34 = *(__m128i *)(a2 + 128);
  v31 = *(__m128i *)sub_14017F410(&v36, (__int64)&v34, v6);
  v35 = *(_OWORD *)(a2 + 64);
  v34 = v31;
  v32 = *(_OWORD *)sub_140180F10((__int64)v37, (__int64)&v35, (__int64)&v34);
  *a1 = v32;
  return a1;
}
#undef v34
#undef v35
#undef v36
#undef v37

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];

//----- (000000014017FA30) ----------------------------------------------------
__int64            sub_14017FA30(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // r10d
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v15; // rcx

  v10 = a2;
  if ( a4 )
  {
    if ( a3 )
    {
      v12 = 14LL * a2;
      *(_WORD *)(v12 + a1) = (a7 + a9) >> 1;
      *(_BYTE *)(v12 + a1 + 12) = 3;
      *(_WORD *)(v12 + a1 + 4) = a9;
      *(_WORD *)(v12 + a1 + 6) = a10;
      *(_WORD *)(v12 + a1 + 2) = (a8 + a10) >> 1;
      v10 = a2 + 1;
    }
    v13 = 14LL * v10;
    *(_WORD *)(v13 + a1) = a5;
    *(_WORD *)(v13 + a1 + 2) = a6;
    *(_WORD *)(v13 + a1 + 4) = a7;
    *(_BYTE *)(v13 + a1 + 12) = 3;
    *(_WORD *)(v13 + a1 + 6) = a8;
    return (unsigned int)(v10 + 1);
  }
  else
  {
    v15 = 14LL * a2;
    *(_WORD *)(v15 + a1) = a5;
    *(_WORD *)(v15 + a1 + 2) = a6;
    if ( a3 )
    {
      *(_WORD *)(v15 + a1 + 4) = a9;
      *(_WORD *)(v15 + a1 + 6) = a10;
      *(_BYTE *)(v15 + a1 + 12) = 3;
    }
    else
    {
      *(_BYTE *)(v15 + a1 + 12) = 2;
      *(_DWORD *)(v15 + a1 + 4) = 0;
    }
    return (unsigned int)(a2 + 1);
  }
}


//----- (000000014017FB20) ----------------------------------------------------
__int64            sub_14017FB20(float a1, float a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  float v6; // xmm6_4
  __int64 v8; // rdi
  float v9; // xmm1_4
  __int16 *v10; // r10
  __int64 v11; // r14
  char v12; // al
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // eax
  int v21; // ebp
  int v22; // r8d
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r15d
  int v27; // esi
  int v28; // r9d
  int v29; // r11d
  int v30; // edi
  float v31; // xmm2_4
  float v32; // xmm0_4
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017FB20[64];
#define v41 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 0)) /* [rsp+30h] */
#define v42 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 8)) /* [rsp+38h] */
#define v43 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 16)) /* [rsp+40h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_14017FB20 + 24)) /* [rsp+48h] */
#define v45 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 32)) /* [rsp+50h] */
#define v46 (*(float (*)[6])(void *)(sr_frame_14017FB20 + 40)) /* [rsp+58h] */

  v5 = 0;
  v6 = a2;
  v8 = a3;
  v44 = 1065353216;
  v45[0] = a1;
  v9 = fmod(a2, 1.0);
  if ( v9 >= 0.0099999998 )
  {
    if ( v9 > 0.99000001 )
      v6 = v6 + -0.0099999998;
  }
  else
  {
    v6 = v6 + 0.0099999998;
  }
  v45[1] = v6;
  if ( (int)v8 > 0 )
  {
    v10 = (__int16 *)(a4 - 12);
    v11 = v8;
    do
    {
      v12 = *((_BYTE *)v10 + 24);
      if ( v12 == 2 )
      {
        v13 = *v10;
        v14 = v10[7];
        v15 = v14;
        if ( v13 < v14 )
          v15 = *v10;
        if ( v6 > (float)v15 )
        {
          v16 = *v10;
          if ( v13 < v14 )
            v16 = v10[7];
          if ( v6 < (float)v16 )
          {
            v17 = v10[6];
            v18 = *(v10 - 1);
            v19 = v17;
            if ( v18 < v17 )
              v19 = *(v10 - 1);
            if ( a1 > (float)v19
              && (float)((float)((float)((float)(v6 - (float)v13) / (float)(v14 - v13)) * (float)(v17 - v18))
                       + (float)v18) < a1 )
            {
              v20 = -1;
              if ( v13 < v14 )
                v20 = 1;
              v5 += v20;
            }
          }
        }
      }
      else if ( v12 == 3 )
      {
        v21 = v10[9];
        v22 = v10[7];
        v23 = v21;
        v24 = *v10;
        v25 = v22;
        v26 = v10[8];
        v27 = v24;
        v28 = v10[6];
        v29 = *(v10 - 1);
        v30 = v28;
        if ( v26 < v28 )
          v30 = v10[8];
        if ( v29 < v30 )
          v30 = *(v10 - 1);
        if ( v21 < v22 )
          v25 = v10[9];
        if ( v24 < v25 )
          v25 = *v10;
        if ( v21 < v22 )
          v23 = v10[7];
        if ( v24 < v23 )
          v27 = v23;
        if ( v6 > (float)v25 && v6 < (float)v27 && a1 > (float)v30 )
        {
          v31 = (float)v24;
          v32 = (float)v21;
          v43[0] = (float)v29;
          v43[1] = (float)v24;
          v42[0] = (float)v26;
          v42[1] = (float)v21;
          v41[0] = (float)v28;
          v41[1] = (float)v22;
          if ( (float)v29 == (float)v26 && v31 == v32 || (float)v26 == (float)v28 && v32 == (float)v22 )
          {
            v33 = v22;
            if ( v24 < v22 )
              v33 = v24;
            if ( v6 > (float)v33 )
            {
              v34 = v24;
              if ( v24 < v22 )
                v34 = v22;
              if ( v6 < (float)v34 )
              {
                v35 = v28;
                if ( v29 < v28 )
                  v35 = v29;
                if ( a1 > (float)v35
                  && (float)((float)((float)((float)(v6 - v31) / (float)(v22 - v24)) * (float)(v28 - v29)) + (float)v29) < a1 )
                {
                  v36 = -1;
                  if ( v24 < v22 )
                    v36 = 1;
                  v5 += v36;
                }
              }
            }
          }
          else
          {
            v37 = sub_1401827E0(v45, (float *)&v44, v43, v42, v41, v46);
            if ( v37 >= 1 && v46[0] < 0.0 )
            {
              v38 = 1;
              if ( v46[1] < 0.0 )
                v38 = -1;
              v5 += v38;
            }
            if ( v37 >= 2 && v46[2] < 0.0 )
            {
              v39 = 1;
              if ( v46[3] < 0.0 )
                v39 = -1;
              v5 += v39;
            }
          }
        }
      }
      v10 += 7;
      --v11;
    }
    while ( v11 );
  }
  return v5;
}
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46

// 14017FE9F: variable 'v10' is possibly undefined

//----- (000000014017FF00) ----------------------------------------------------
__int64            sub_14017FF00(__int64 a1)
{
  float v1; // xmm1_4
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = *(float *)(a1 + 8);
  if ( v1 != *(float *)(a1 + 16) || *(float *)(a1 + 20) != *(float *)(a1 + 12) )
  {
    v3 = (int)*(float *)(a1 + 12);
    v4 = (int)v1;
    if ( *(_DWORD *)a1 )
    {
      if ( v4 > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 28) = v4;
      if ( v3 > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 36) = v3;
      if ( v4 < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 24) = v4;
      if ( v3 < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 32) = v3;
      ++*(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 4) = 1;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
      *(_WORD *)(v5 + 2) = v3;
      *(_DWORD *)(v5 + 4) = 0;
      *(_BYTE *)(v5 + 12) = 2;
      *(_WORD *)v5 = v4;
      *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
      result = *(_QWORD *)(a1 + 40);
      *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
    }
  }
  return result;
}


//----- (000000014017FFC0) ----------------------------------------------------
void            sub_14017FFC0(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm1_4

  v7 = a2 + *(float *)(a1 + 16);
  v8 = a3 + *(float *)(a1 + 20);
  v9 = (float)(v7 + a4) + a6;
  *(float *)(a1 + 16) = v9;
  *(float *)(a1 + 20) = (float)(v8 + a5) + a7;
  sub_140180200(
    a1,
    4,
    (int)v9,
    (int)(float)((float)(v8 + a5) + a7),
    (int)v7,
    (int)v8,
    (int)(float)(v7 + a4),
    (int)(float)(v8 + a5));
}
