#include "shared_client.h"

// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140260288) ----------------------------------------------------
__int64            common_set_variable_in_environment_nolock__wchar_t(     __m128i *Block, int a2)
{
  unsigned int v2; // esi
  __m128i *v6; // rdi
       __m128i *v7; // rax
       __m128i *v8; // r13
  _QWORD *v9; // r14
  __int16 v10; // r12
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  int v19; // ebp
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r14
  char *v23; // rax
  char *v24; // rbx
  unsigned __int64 v25; // rax

  v2 = 0;
  if ( !Block )
  {
    *errno_sr() = 22;
    return -1;
  }
  v6 = (__m128i *)Block;
  v7 = sub_14026CEFC(Block, 0x3Du);
  v8 = v7;
  if ( !v7 || v7 == Block )
  {
LABEL_51:
    v2 = -1;
    *errno_sr() = 22;
    goto LABEL_52;
  }
  v9 = *(_QWORD **)&dword_140404A6C[19064863];
  v10 = SR_VEC_PTR_LANES(128, v7, i16)[1];
  if ( *(_QWORD *)&dword_140404A6C[19064863] == *(_QWORD *)&dword_140404A6C[19064865] )
  {
    v9 = (_QWORD *)copy_environment__wchar_t(*(__int64 **)&dword_140404A6C[19064863]);
    *(_QWORD *)&dword_140404A6C[19064863] = (uint64)(uintptr_t)(v9);
  }
  if ( v9 )
    goto LABEL_20;
  if ( a2 && *(_QWORD *)&dword_140404A6C[19064861] )
  {
    if ( unknown_libname_765() )
    {
      v9 = *(_QWORD **)&dword_140404A6C[19064863];
      if ( *(_QWORD *)&dword_140404A6C[19064863] == *(_QWORD *)&dword_140404A6C[19064865] )
      {
        v9 = (_QWORD *)copy_environment__wchar_t(*(__int64 **)&dword_140404A6C[19064863]);
        *(_QWORD *)&dword_140404A6C[19064863] = (uint64)(uintptr_t)(v9);
      }
LABEL_19:
      if ( v9 )
        goto LABEL_20;
      goto LABEL_16;
    }
    goto LABEL_51;
  }
  if ( !v10 )
  {
LABEL_52:
    v11 = v2;
    goto LABEL_53;
  }
  if ( *(_QWORD *)&dword_140404A6C[19064861] )
    goto LABEL_18;
  *(_QWORD *)&dword_140404A6C[19064861] = calloc_base();
  free_base(nullptr);
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
  {
LABEL_16:
    v11 = -1;
LABEL_53:
    v2 = v11;
LABEL_54:
    v19 = v2;
    goto LABEL_55;
  }
  v9 = *(_QWORD **)&dword_140404A6C[19064863];
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
  {
LABEL_18:
    *(_QWORD *)&dword_140404A6C[19064863] = calloc_base();
    free_base(nullptr);
    v9 = *(_QWORD **)&dword_140404A6C[19064863];
    goto LABEL_19;
  }
LABEL_20:
  v12 = *v9;
  v13 = ((char *)v8 - (char *)Block) >> 1;
  v14 = v9;
  while ( v12 )
  {
    if ( !(unsigned int)wcsnicoll(Block, v12, v13) && (*(_WORD *)(*v14 + 2 * v13) == 61 || !*(_WORD *)(*v14 + 2 * v13)) )
    {
      v15 = v14 - v9;
      goto LABEL_28;
    }
    v12 = *++v14;
  }
  v15 = -(v14 - v9);
LABEL_28:
  if ( v15 >= 0 && *v9 )
  {
    free_base((void *)v9[v15]);
    if ( !v10 )
    {
      while ( v9[v15] )
      {
        v9[v15] = v9[v15 + 1];
        ++v15;
      }
      v16 = recalloc_base(v9, v15, 8);
      free_base(nullptr);
      if ( v16 )
        *(_QWORD *)&dword_140404A6C[19064863] = v16;
      goto LABEL_43;
    }
    v9[v15] = (uint64)(uintptr_t)(Block);
LABEL_42:
    v6 = nullptr;
LABEL_43:
    if ( a2 )
    {
      v21 = -1;
      do
        ++v21;
      while ( SR_VEC_PTR_LANES(128, Block, i16)[v21] );
      v22 = v21 + 2;
      v23 = (char *)calloc_base();
      v24 = v23;
      if ( v23 )
      {
        if ( (unsigned int)sub_140259444(v23, v22, (__int64)Block) )
        {
          sub_14024CFBC();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        v25 = (unsigned __int64)&v24[2 * v13 + 2];
        *(_WORD *)(v25 - 2) = 0;
        if ( !(unsigned int)((__int64 (           *)(char *, unsigned __int64))SetEnvironmentVariableW)(
                              v24,
                              v25 & -(__int64)(v10 != 0)) )
        {
          v2 = -1;
          *errno_sr() = 42;
        }
      }
      free_base(v24);
    }
    goto LABEL_56;
  }
  if ( !v10 )
    goto LABEL_54;
  v17 = -v15;
  v18 = v17 + 2;
  if ( v17 + 2 >= v17 && v18 < 0x1FFFFFFFFFFFFFFFLL )
  {
    v20 = recalloc_base(v9, v18, 8);
    free_base(nullptr);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 8 * v17) = (uint64)(uintptr_t)(Block);
      *(_QWORD *)(v20 + 8 * v17 + 8) = 0;
      *(_QWORD *)&dword_140404A6C[19064863] = v20;
      goto LABEL_42;
    }
  }
  v19 = -1;
LABEL_55:
  v2 = v19;
LABEL_56:
  free_base(v6);
  return v2;
}

// 1402605A4: control flows out of bounds to 1402605A9
// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored
// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);
// 14026A210: using guessed type __int64 __fastcall wcsnicoll(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402605AC) ----------------------------------------------------
__int64            copy_environment__char(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *i; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  _BYTE *v9; // rcx

  v1 = a1;
  if ( !a1 )
    return 0;
  v3 = 0;
  for ( i = v1; *i; ++i )
    ++v3;
  v5 = calloc_base();
  if ( !v5 )
LABEL_15:
    abort();
  v6 = *v1;
  if ( *v1 )
  {
    v7 = v5 - (_QWORD)v1;
    do
    {
      v8 = -1;
      do
        ++v8;
      while ( *(_BYTE *)(v6 + v8) );
      *(__int64 *)((char *)v1 + v7) = calloc_base();
      free_base(nullptr);
      v9 = *(_BYTE **)((char *)v1 + v7);
      if ( !v9 )
        goto LABEL_15;
      if ( (unsigned int)strcpy_s_sr(v9, v8 + 1, *v1) )
      {
        sub_14024CFBC();
        __debugbreak();
      }
      v6 = *++v1;
    }
    while ( *v1 );
  }
  free_base(nullptr);
  return v5;
}


//----- (0000000140260694) ----------------------------------------------------
__int64            copy_environment__wchar_t(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *i; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  _WORD *v9; // rcx

  v1 = a1;
  if ( !a1 )
    return 0;
  v3 = 0;
  for ( i = v1; *i; ++i )
    ++v3;
  v5 = calloc_base();
  if ( !v5 )
LABEL_15:
    abort();
  v6 = *v1;
  if ( *v1 )
  {
    v7 = v5 - (_QWORD)v1;
    do
    {
      v8 = -1;
      do
        ++v8;
      while ( *(_WORD *)(v6 + 2 * v8) );
      *(__int64 *)((char *)v1 + v7) = calloc_base();
      free_base(nullptr);
      v9 = *(_WORD **)((char *)v1 + v7);
      if ( !v9 )
        goto LABEL_15;
      if ( (unsigned int)sub_140259444(v9, v8 + 1, *v1) )
      {
        sub_14024CFBC();
        __debugbreak();
      }
      v6 = *++v1;
    }
    while ( *v1 );
  }
  free_base(nullptr);
  return v5;
}


//----- (0000000140260784) ----------------------------------------------------
void sub_140260784()
{
  if ( *(_QWORD *)&dword_140404A6C[19064861] == *(_QWORD *)&dword_140404A6C[19064867] )
    *(_QWORD *)&dword_140404A6C[19064861] = copy_environment__char(*(__int64 **)&dword_140404A6C[19064861]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402607AC) ----------------------------------------------------
void sub_1402607AC()
{
  if ( *(_QWORD *)&dword_140404A6C[19064863] == *(_QWORD *)&dword_140404A6C[19064865] )
    *(_QWORD *)&dword_140404A6C[19064863] = copy_environment__wchar_t(*(__int64 **)&dword_140404A6C[19064863]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402607D4) ----------------------------------------------------
__int64            find_in_environment_nolock__char(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v5; // rbx
  __int64 i; // rax

  v2 = *(_QWORD *)&dword_140404A6C[19064861];
  v5 = *(__int64 **)&dword_140404A6C[19064861];
  for ( i = **(_QWORD **)&dword_140404A6C[19064861]; i; i = *v5 )
  {
    if ( !(unsigned int)strnicoll_sr(a1, i, a2) && (*(_BYTE *)(a2 + *v5) == 61 || !*(_BYTE *)(a2 + *v5)) )
      return ((__int64)v5 - v2) >> 3;
    ++v5;
  }
  return -(((__int64)v5 - v2) >> 3);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140260858) ----------------------------------------------------
__int64            find_in_environment_nolock__wchar_t(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v5; // rbx
  __int64 i; // rax

  v2 = *(_QWORD *)&dword_140404A6C[19064863];
  v5 = *(__int64 **)&dword_140404A6C[19064863];
  for ( i = **(_QWORD **)&dword_140404A6C[19064863]; i; i = *v5 )
  {
    if ( !(unsigned int)wcsnicoll(a1, i, a2) && (*(_WORD *)(*v5 + 2 * a2) == 61 || !*(_WORD *)(*v5 + 2 * a2)) )
      return ((__int64)v5 - v2) >> 3;
    ++v5;
  }
  return -(((__int64)v5 - v2) >> 3);
}

// 14026A210: using guessed type __int64 __fastcall wcsnicoll(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402609C0) ----------------------------------------------------
// attributes: thunk
__int64            _dcrt_set_variable_in_narrow_environment_nolock_sr(__int8 *Block, int a2)
{
  return _dcrt_set_variable_in_narrow_environment_nolock_0(Block, a2);
}


//----- (00000001402609C8) ----------------------------------------------------
// attributes: thunk
__int64            common_set_variable_in_environment_nolock__wchar_t_dup2(     __m128i *Block, int a2)
{
  return common_set_variable_in_environment_nolock__wchar_t(Block, a2);
}


//----- (00000001402609D8) ----------------------------------------------------
__int64            recalloc_base(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi

  if ( a2 && 0xFFFFFFFFFFFFFFE0uLL / a2 < a3 )
  {
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    if ( a1 )
      v7 = msize(a1);
    else
      v7 = 0;
    v8 = a3 * a2;
    v9 = realloc_base(a1, v8);
    v10 = v9;
    if ( v9 )
    {
      if ( v7 < v8 )
        sub_1401FCD30((void *)(uintptr_t)((_WORD *)(v9 + v7)), 0, v8 - v7);
    }
    return v10;
  }
}

// 1402609D8: invalid function type 'void *__cdecl recalloc_base(void *Block, #66 Count, #66 Size)' has been ignored
// 14026AD9C: using guessed type __int64 msize(void);

//----- (0000000140260A78) ----------------------------------------------------
bool sub_140260A78()
{
  *(_QWORD *)&dword_140404A6C[19065847] = ((__int64 (*)(void))GetProcessHeap)();
  return *(_QWORD *)&dword_140404A6C[19065847] != 0;
}

// 14026E048: invalid function type 'HANDLE (__stdcall *GetProcessHeap)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140260AA8) ----------------------------------------------------
char            sub_140260AA8(unsigned __int8 (**a1)(void), unsigned __int8 (**a2)(void))
{
  unsigned __int8 (**v4)(void); // rbx
  unsigned __int8 (**v5)(void); // rbx

  if ( a1 == a2 )
    return 1;
  v4 = a1;
  do
  {
    if ( *v4 && !(*v4)() )
      break;
    v4 += 2;
  }
  while ( v4 != a2 );
  if ( v4 == a2 )
    return 1;
  if ( v4 != a1 )
  {
    v5 = v4 - 1;
    do
    {
      if ( *(v5 - 1) )
      {
        if ( *v5 )
          ((void (           *)(_QWORD))*v5)(0);
      }
      v5 -= 2;
    }
    while ( v5 + 1 != a1 );
  }
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140260B28) ----------------------------------------------------
char            sub_140260B28(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  void (           *v4)(_QWORD); // rax

  for ( i = a2; i != a1; i -= 16 )
  {
    v4 = *(void (           **)(_QWORD))(i - 8);
    if ( v4 )
      v4(0);
  }
  return 1;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140260BB0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_918(char *a1, unsigned __int64 a2)
{
  char *result; // rax

  result = a1 + 8;
  if ( a1 < a1 + 8 )
  {
    memset64(a1, a2, a1 < a1 + 8);
    return (char *)a2;
  }
  return result;
}


//----- (0000000140260BDC) ----------------------------------------------------
void            sub_140260BDC(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19065849] = a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA50: using guessed type unsigned int;

//----- (0000000140260BE4) ----------------------------------------------------
_BOOL8            callnewh(__int64 a1)
{
  unsigned int (           *new_handler)(__int64); // rax

  new_handler = (unsigned int (           *)(__int64))query_new_handler();
  return new_handler && new_handler(a1);
}

// 140260BE4: invalid function type 'int __cdecl callnewh(#66 Size)' has been ignored
// 140260C14: using guessed type __int64 query_new_handler(void);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140260C14) ----------------------------------------------------
__int64 query_new_handler()
{
  __int64 v0; // rbx

  sub_140258B64(0);
  v0 = __ROR8__(*(_QWORD *)&dword_140404A6C[19065849] ^ _security_cookie, _security_cookie & 0x3F);
  sub_140258BB8(0);
  return v0;
}

// 140260C14: invalid function type '_PNH __cdecl query_new_handler()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140260C48) ----------------------------------------------------
__int64            set_new_handler(__int64 a1)
{
  __int64 v2; // rbx

  sub_140258B64(0);
  v2 = __ROR8__(*(_QWORD *)&dword_140404A6C[19065849] ^ _security_cookie, _security_cookie & 0x3F);
  *(_QWORD *)&dword_140404A6C[19065849] = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
  sub_140258BB8(0);
  return v2;
}

// 140260C48: invalid function type '_PNH __cdecl set_new_handler(_PNH NewHandler)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140260CA4) ----------------------------------------------------
__int64            common_tcsncpy_s__wchar_t(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // r11
  _WORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int16 v12; // ax
  __int16 v13; // ax

  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( a2 )
    {
LABEL_4:
      v5 = errno_sr();
      v6 = 22;
LABEL_5:
      *v5 = v6;
      sub_14024CF6C();
      return v6;
    }
    return 0;
  }
  if ( !a2 )
    goto LABEL_4;
  if ( !a4 )
  {
    *a1 = 0;
    return 0;
  }
  if ( !a3 )
  {
    *a1 = 0;
    goto LABEL_4;
  }
  v8 = a3 - (_QWORD)a1;
  v9 = a1;
  v10 = a2;
  v11 = a4;
  if ( a4 == -1 )
  {
    do
    {
      v12 = *(_WORD *)((char *)v9 + v8);
      *v9++ = v12;
      if ( !v12 )
        break;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    do
    {
      v13 = *(_WORD *)((char *)v9 + v8);
      *v9++ = v13;
      if ( !v13 )
        break;
      if ( !--v10 )
        break;
      --v11;
    }
    while ( v11 );
    if ( !v11 )
      *v9 = 0;
  }
  if ( v10 )
    return 0;
  if ( a4 != -1 )
  {
    *a1 = 0;
    v5 = errno_sr();
    v6 = 34;
    goto LABEL_5;
  }
  a1[a2 - 1] = 0;
  return 80;
}


//----- (0000000140260D80) ----------------------------------------------------
__int64            sub_140260D80(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int *v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rbx
  _WORD *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int16 v13; // ax
  __int16 v14; // ax

  v4 = 0;
  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
    goto LABEL_8;
  }
  if ( a1 )
  {
LABEL_8:
    if ( !a2 )
      goto LABEL_4;
    if ( !a4 )
    {
      *a1 = 0;
      return v4;
    }
    if ( !a3 )
    {
      *a1 = 0;
      goto LABEL_4;
    }
    v9 = a3 - (_QWORD)a1;
    v10 = a1;
    v11 = a2;
    v12 = a4;
    if ( a4 == -1 )
    {
      do
      {
        v13 = *(_WORD *)((char *)v10 + v9);
        *v10++ = v13;
        if ( !v13 )
          break;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      do
      {
        v14 = *(_WORD *)((char *)v10 + v9);
        *v10++ = v14;
        if ( !v14 )
          break;
        if ( !--v11 )
          break;
        --v12;
      }
      while ( v12 );
      if ( !v12 )
        *v10 = 0;
    }
    if ( !v11 )
    {
      if ( a4 == -1 )
      {
        a1[a2 - 1] = 0;
        return 80;
      }
      *a1 = 0;
      v6 = errno_sr();
      v7 = 34;
      goto LABEL_5;
    }
    return v4;
  }
  if ( a2 )
  {
LABEL_4:
    v6 = errno_sr();
    v7 = 22;
LABEL_5:
    *v6 = v7;
    sub_14024CF6C();
    return v7;
  }
  return v4;
}


//----- (0000000140260E74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1043(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140260EAC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1044(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140260EC8) ----------------------------------------------------
__int64 sub_140260EC8()
{
  __int64 v0; // rax
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  _BYTE *v5; // rcx
  unsigned int v6; // eax

  v0 = sr_directory_calloc(64, 72);
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    v3 = v0 + 4608;
    v4 = v0 + 48;
    do
    {
      _acrt_InitializeCriticalSectionEx(v4 - 48, 0xFA0u, 0);
      *(_QWORD *)(v4 - 8) = -1;
      v5 = (_BYTE *)(v4 + 14);
      *(_QWORD *)v4 = 0;
      v6 = 0;
      *(_DWORD *)(v4 + 8) = 168427520;
      *(_BYTE *)(v4 + 12) = 10;
      *(_BYTE *)(v4 + 13) &= 0xF8u;
      do
      {
        *v5 = 0;
        ++v6;
        ++v5;
      }
      while ( v6 < 5 );
      v4 += 72;
    }
    while ( v4 - 48 != v3 );
    v1 = v2;
  }
  free_base(nullptr);
  return v1;
}


//----- (0000000140260F70) ----------------------------------------------------
void            sub_140260F70(char *Block)
{
  char *v1; // rsi
  char *v3; // rdi

  if ( Block )
  {
    v1 = Block + 4608;
    v3 = Block;
    do
    {
      ((void (           *)(char *))DeleteCriticalSection)(v3);
      v3 += 72;
    }
    while ( v3 != v1 );
    free_base(Block);
  }
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140260FC0) ----------------------------------------------------
__int64            sub_140260FC0(unsigned int a1)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  signed int v5; // eax
  __int64 v6; // rax

  if ( a1 < 0x2000 )
  {
    v3 = 0;
    sub_140258B64(7);
    v4 = 0;
    v5 = dword_140404A6C[19065657];
    while ( (int)a1 >= v5 )
    {
      if ( !*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] )
      {
        v6 = sub_140260EC8();
        *(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] = v6;
        if ( !v6 )
        {
          v3 = 12;
          break;
        }
        v5 = dword_140404A6C[19065657] + 64;
        dword_140404A6C[19065657] += 64;
      }
      ++v4;
    }
    sub_140258BB8(7);
    return v3;
  }
  else
  {
    *errno_sr() = 9;
    sub_14024CF6C();
    return 9;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF750: using guessed type unsigned int;

//----- (0000000140261068) ----------------------------------------------------
__int64            sub_140261068(int a1)
{
  return ((__int64 (           *)(__int64))EnterCriticalSection)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6)
                                                                                           + 19065401] + 72LL * (a1 & 0x3F));
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140261090) ----------------------------------------------------
__int64            sub_140261090(int a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rcx

  if ( a1 >= 0 && a1 < dword_140404A6C[19065657] )
  {
    v4 = (__int64)a1 >> 6;
    v5 = 9LL * (a1 & 0x3F);
    if ( *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (a1 & 0x3F) + 40) == -1 )
    {
      if ( (unsigned int)sub_14024774C() == 1 )
      {
        if ( !a1 )
        {
          v7 = 4294967286LL;
          goto LABEL_11;
        }
        v6 = a1 - 1;
        if ( !v6 )
        {
          v7 = 4294967285LL;
          goto LABEL_11;
        }
        if ( v6 == 1 )
        {
          v7 = 4294967284LL;
LABEL_11:
          ((void (           *)(__int64, __int64))SetStdHandle)(v7, a2);
        }
      }
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 8 * v5 + 40) = a2;
      return 0;
    }
  }
  *errno_sr() = 9;
  *(_DWORD *)sub_14024D19C() = 0;
  return 0xFFFFFFFFLL;
}

// 14026E040: invalid function type 'BOOL (__stdcall *SetStdHandle)(DWORD nStdHandle, HANDLE hHandle)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140261150) ----------------------------------------------------
__int64            sub_140261150(int a1)
{
  return ((__int64 (           *)(__int64))LeaveCriticalSection)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6)
                                                                                           + 19065401] + 72LL * (a1 & 0x3F));
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140261178) ----------------------------------------------------
__int64 alloc_osfhnd()
{
  unsigned int v0; // r14d
  int i; // ebx
  __int64 v2; // rsi
  __int64 v3; // rax
  int v4; // ebx
  __int64 j; // rdi
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx

  sub_140258B64(7);
  v0 = -1;
  for ( i = 0; i < 128; ++i )
  {
    v2 = *(_QWORD *)&dword_140404A6C[2 * i + 19065401];
    if ( !v2 )
    {
      v3 = sub_140260EC8();
      *(_QWORD *)&dword_140404A6C[2 * i + 19065401] = v3;
      if ( v3 )
      {
        dword_140404A6C[19065657] += 64;
        v4 = i << 6;
        sub_140261068(v4);
        *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v4 >> 6) + 19065401] + 56LL) = 1;
        v0 = v4;
      }
      break;
    }
    for ( j = *(_QWORD *)&dword_140404A6C[2 * i + 19065401]; j != v2 + 4608; j += 72 )
    {
      if ( (*(_BYTE *)(j + 56) & 1) == 0 )
      {
        ((void (           *)(__int64))EnterCriticalSection)(j);
        if ( (*(_BYTE *)(j + 56) & 1) == 0 )
        {
          v6 = (i << 6) + ((int)j - (int)v2) / 72;
          v7 = (__int64)v6 >> 6;
          v8 = 9LL * (v6 & 0x3F);
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 8 * v8 + 56) = 1;
          *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 8 * v8 + 40) = -1;
          v0 = v6;
          goto LABEL_14;
        }
        ((void (           *)(__int64))LeaveCriticalSection)(j);
      }
    }
  }
LABEL_14:
  sub_140258BB8(7);
  return v0;
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF750: using guessed type unsigned int;

//----- (00000001402612B8) ----------------------------------------------------
__int64            free_osfhnd(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx

  if ( a1 >= 0 && a1 < dword_140404A6C[19065657] )
  {
    v2 = (__int64)a1 >> 6;
    v3 = 9LL * (a1 & 0x3F);
    v4 = *(_QWORD *)&dword_140404A6C[2 * v2 + 19065401];
    if ( (*(_BYTE *)(v4 + 72LL * (a1 & 0x3F) + 56) & 1) != 0 && *(_QWORD *)(v4 + 72LL * (a1 & 0x3F) + 40) != -1 )
    {
      if ( (unsigned int)sub_14024774C() == 1 )
      {
        if ( !a1 )
        {
          v6 = 4294967286LL;
          goto LABEL_12;
        }
        v5 = a1 - 1;
        if ( !v5 )
        {
          v6 = 4294967285LL;
          goto LABEL_12;
        }
        if ( v5 == 1 )
        {
          v6 = 4294967284LL;
LABEL_12:
          ((void (           *)(__int64, _QWORD))SetStdHandle)(v6, 0);
        }
      }
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 8 * v3 + 40) = -1;
      return 0;
    }
  }
  *errno_sr() = 9;
  *(_DWORD *)sub_14024D19C() = 0;
  return 0xFFFFFFFFLL;
}

// 14026E040: invalid function type 'BOOL (__stdcall *SetStdHandle)(DWORD nStdHandle, HANDLE hHandle)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140261374) ----------------------------------------------------
__int64            get_osfhandle(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
  }
  else
  {
    if ( a1 >= 0 && a1 < dword_140404A6C[19065657] )
    {
      v1 = a1;
      v2 = a1 & 0x3F;
      v3 = *(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401];
      if ( (*(_BYTE *)(v3 + 72 * v2 + 56) & 1) != 0 )
        return *(_QWORD *)(v3 + 72 * v2 + 40);
    }
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    sub_14024CF6C();
  }
  return -1;
}

// 140261374: invalid function type 'intptr_t __cdecl get_osfhandle(int FileHandle)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402613EC) ----------------------------------------------------
__int64            open_osfhandle(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bl
  int v6; // eax
  int v7; // eax
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx

  v3 = (unsigned __int8)(4 * (a2 & 8)) | 0x80u;
  v4 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
    v3 = (unsigned __int8)(4 * (a2 & 8));
  v5 = v3 | 0x10;
  LOBYTE(a2) = a2 & 0x80;
  if ( !(_BYTE)a2 )
    v5 = v3;
  v6 = ((__int64 (           *)(__int64, __int64, __int64, __int64))GetFileType)(a1, a2, v3, v4);
  switch ( v6 )
  {
    case 0:
      v7 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v7);
      return 0xFFFFFFFFLL;
    case 2:
      v5 |= 0x40u;
      break;
    case 3:
      v5 |= 8u;
      break;
  }
  v9 = alloc_osfhnd();
  v10 = v9;
  if ( v9 == -1 )
  {
    *errno_sr() = 24;
    *(_DWORD *)sub_14024D19C() = 0;
    return 0xFFFFFFFFLL;
  }
  sub_140261090(v9, a1);
  v11 = 9 * (v10 & 0x3F);
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v10 >> 6) + 19065401] + 8 * v11 + 56) = v5 | 1;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v10 >> 6) + 19065401] + 8 * v11 + 57) = 0;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v10 >> 6) + 19065401] + 8 * v11 + 61) &= ~1u;
  sub_140261150(v10);
  return (unsigned int)v10;
}

// 1402613EC: invalid function type 'int __cdecl open_osfhandle(intptr_t OSFileHandle, int Flags)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140261508) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1045(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (000000014026152C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1046(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140261548) ----------------------------------------------------
void            sub_140261548(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 != off_140302AF8 )
      free_base(v2);
    v3 = (void *)a1[4];
    if ( v3 != off_140302B00 )
      free_base(v3);
    v4 = (void *)a1[5];
    if ( v4 != off_140302B08 )
      free_base(v4);
    v5 = (void *)a1[6];
    if ( v5 != off_140302B10 )
      free_base(v5);
    v6 = (void *)a1[7];
    if ( v6 != (void *)off_140302B18 )
      free_base(v6);
    v7 = (void *)a1[8];
    if ( v7 != off_140302B20 )
      free_base(v7);
    v8 = (void *)a1[9];
    if ( v8 != off_140302B28 )
      free_base(v8);
    v9 = (void *)a1[13];
    if ( v9 != off_140302B48 )
      free_base(v9);
    v10 = (void *)a1[14];
    if ( v10 != off_140302B50 )
      free_base(v10);
    v11 = (void *)a1[15];
    if ( v11 != off_140302B58 )
      free_base(v11);
    v12 = (void *)a1[16];
    if ( v12 != off_140302B60 )
      free_base(v12);
    v13 = (void *)a1[17];
    if ( v13 != off_140302B68 )
      free_base(v13);
    v14 = (void *)a1[18];
    if ( v14 != off_140302B70 )
      free_base(v14);
  }
}

// 140302AF8: using guessed type _UNKNOWN *off_140302AF8;
// 140302B00: using guessed type _UNKNOWN *off_140302B00;
// 140302B08: using guessed type _UNKNOWN *off_140302B08;
// 140302B10: using guessed type _UNKNOWN *off_140302B10;
// 140302B20: using guessed type _UNKNOWN *off_140302B20;
// 140302B28: using guessed type _UNKNOWN *off_140302B28;
// 140302B48: using guessed type _UNKNOWN *off_140302B48;
// 140302B50: using guessed type _UNKNOWN *off_140302B50;
// 140302B58: using guessed type _UNKNOWN *off_140302B58;
// 140302B60: using guessed type _UNKNOWN *off_140302B60;
// 140302B68: using guessed type _UNKNOWN *off_140302B68;
// 140302B70: using guessed type _UNKNOWN *off_140302B70;

//----- (0000000140261654) ----------------------------------------------------
__int64            sub_140261654(__int64 a1)
{
  _DWORD *v1; // r15
  _DWORD *v3; // r12
  _OWORD *v4; // r14
  void *v6; // rcx
       sr_anon_49 *v7; // rdi
  int LocaleInfoA; // ebx
  int v9; // ebx
  int v10; // ebx
  char **v11; // r13
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  char *v29; // rdx
  char v30; // al
  char *v31; // r8
  char v32; // cl
  volatile signed __int32 *v33; // rax
  volatile signed __int32 *v34; // rcx
  _QWORD v35[2]; // [rsp+30h] [rbp-10h] BYREF

  v1 = nullptr;
  v35[0] = a1;
  v35[1] = 0;
  if ( *(_QWORD *)(a1 + 320) || *(_QWORD *)(a1 + 328) )
  {
    v4 = (_OWORD *)calloc_base();
    free_base(nullptr);
    if ( !v4 )
      return 1;
    v3 = (_DWORD *)calloc_base();
    free_base(nullptr);
    if ( !v3 )
    {
      v6 = v4;
LABEL_8:
      free_base(v6);
      return 1;
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      v1 = (_DWORD *)calloc_base();
      free_base(nullptr);
      if ( !v1 )
      {
        free_base(v4);
        v6 = v3;
        goto LABEL_8;
      }
      v7 = *(     sr_anon_49 **)(a1 + 320);
      LocaleInfoA = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 1, v7, 0x15u, (__int64 *)v4 + 3);
      v9 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 1, v7, 0x14u, (__int64 *)v4 + 4) | LocaleInfoA;
      v10 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 1, v7, 0x16u, (__int64 *)v4 + 5) | v9;
      v11 = (char **)v4 + 7;
      v12 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 1, v7, 0x17u, (__int64 *)v4 + 6) | v10;
      v13 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 1, v7, 0x18u, (__int64 *)v4 + 7) | v12;
      v14 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 1, v7, 0x50u, (__int64 *)v4 + 8) | v13;
      v15 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 1, v7, 0x51u, (__int64 *)v4 + 9) | v14;
      v16 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x1Au, (__int64 *)v4 + 10) | v15;
      v17 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x19u, (__int64 *)((char *)v4 + 81)) | v16;
      v18 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x54u, (__int64 *)((char *)v4 + 82)) | v17;
      v19 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x55u, (__int64 *)((char *)v4 + 83)) | v18;
      v20 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x56u, (__int64 *)((char *)v4 + 84)) | v19;
      v21 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x57u, (__int64 *)((char *)v4 + 85)) | v20;
      v22 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x52u, (__int64 *)((char *)v4 + 86)) | v21;
      v23 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 0, v7, 0x53u, (__int64 *)((char *)v4 + 87)) | v22;
      v24 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 2, v7, 0x15u, (__int64 *)v4 + 13) | v23;
      v25 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 2, v7, 0x14u, (__int64 *)v4 + 14) | v24;
      v26 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 2, v7, 0x16u, (__int64 *)v4 + 15) | v25;
      v27 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 2, v7, 0x17u, (__int64 *)v4 + 16) | v26;
      v28 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 2, v7, 0x50u, (__int64 *)v4 + 17) | v27;
      if ( v28 | (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v35, 2, v7, 0x51u, (__int64 *)v4 + 18) )
      {
        sub_140261548(v4);
        free_base(v4);
        free_base(v3);
        free_base(v1);
        return 1;
      }
      v29 = *v11;
      v30 = **v11;
      if ( v30 )
      {
        do
        {
          if ( (unsigned __int8)(v30 - 48) > 9u )
          {
            if ( v30 == 59 )
            {
              v31 = v29;
              do
              {
                v32 = v31[1];
                *v31++ = v32;
              }
              while ( v32 );
              goto LABEL_18;
            }
          }
          else
          {
            *v29 = v30 - 48;
          }
          ++v29;
LABEL_18:
          v30 = *v29;
        }
        while ( *v29 );
      }
    }
    else
    {
      *v4 = *(_OWORD *)&off_140302AE0;
      v4[1] = *(_OWORD *)&off_140302AF0;
      v4[2] = *(_OWORD *)&off_140302B00;
      v4[3] = *(_OWORD *)&off_140302B10;
      v4[4] = *(_OWORD *)&off_140302B20;
      v4[5] = unk_140302B30;
      v4[6] = *(_OWORD *)&off_140302B40;
      v4[7] = *(_OWORD *)&off_140302B50;
      v4[8] = *(_OWORD *)&off_140302B60;
      *((_QWORD *)v4 + 18) = (uint64)(uintptr_t)(off_140302B70);
    }
    *(_QWORD *)v4 = **(_QWORD **)(a1 + 248);
    *((_QWORD *)v4 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    *((_QWORD *)v4 + 2) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL);
    *((_QWORD *)v4 + 11) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 88LL);
    *((_QWORD *)v4 + 12) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 96LL);
    *v3 = 1;
    if ( v1 )
      *v1 = 1;
    goto LABEL_27;
  }
  v3 = nullptr;
  v4 = &off_140302AE0;
LABEL_27:
  v33 = *(volatile signed __int32 **)(a1 + 240);
  if ( v33 )
    _InterlockedDecrement(v33);
  v34 = *(volatile signed __int32 **)(a1 + 224);
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34, 0xFFFFFFFF) == 1 )
    {
      free_base(*(void **)(a1 + 248));
      free_base(*(void **)(a1 + 224));
    }
  }
  *(_QWORD *)(a1 + 240) = (uint64)(uintptr_t)(v1);
  *(_QWORD *)(a1 + 224) = (uint64)(uintptr_t)(v3);
  *(_QWORD *)(a1 + 248) = (uint64)(uintptr_t)(v4);
  return 0;
}

// 140302AE0: using guessed type _UNKNOWN *off_140302AE0;
// 140302AF0: using guessed type _UNKNOWN *off_140302AF0;
// 140302B00: using guessed type _UNKNOWN *off_140302B00;
// 140302B10: using guessed type _UNKNOWN *off_140302B10;
// 140302B20: using guessed type _UNKNOWN *off_140302B20;
// 140302B40: using guessed type _UNKNOWN *off_140302B40;
// 140302B50: using guessed type _UNKNOWN *off_140302B50;
// 140302B60: using guessed type _UNKNOWN *off_140302B60;
// 140302B70: using guessed type _UNKNOWN *off_140302B70;

//----- (0000000140261BBC) ----------------------------------------------------
void            sub_140261BBC(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  if ( a1 )
  {
    v2 = *(void **)a1;
    if ( v2 != off_140302AE0 )
      free_base(v2);
    v3 = *(void **)(a1 + 8);
    if ( v3 != off_140302AE8 )
      free_base(v3);
    v4 = *(void **)(a1 + 16);
    if ( v4 != off_140302AF0 )
      free_base(v4);
    v5 = *(void **)(a1 + 88);
    if ( v5 != off_140302B38 )
      free_base(v5);
    v6 = *(void **)(a1 + 96);
    if ( v6 != off_140302B40 )
      free_base(v6);
  }
}

// 140302AE0: using guessed type _UNKNOWN *off_140302AE0;
// 140302AE8: using guessed type _UNKNOWN *off_140302AE8;
// 140302AF0: using guessed type _UNKNOWN *off_140302AF0;
// 140302B38: using guessed type _UNKNOWN *off_140302B38;
// 140302B40: using guessed type _UNKNOWN *off_140302B40;

//----- (0000000140261C28) ----------------------------------------------------
__int64            sub_140261C28(__int64 a1)
{
  _DWORD *v2; // r15
  __int64 *v3; // rsi
  __int64 *v4; // r12
  unsigned int v5; // r14d
  __int64 v7; // rax
  __int64 *v8; // rcx
       sr_anon_49 *v9; // rdi
  int LocaleInfoA; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  _BYTE *v14; // rdx
  char v15; // al
  _BYTE *v16; // r8
  char v17; // cl
  volatile signed __int32 *v18; // rax
  volatile signed __int32 *v19; // rcx
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF

  v20[0] = a1;
  v20[1] = 0;
  if ( *(_QWORD *)(a1 + 328) || *(_QWORD *)(a1 + 320) )
  {
    v5 = 1;
    v3 = (__int64 *)calloc_base();
    if ( !v3 )
      return v5;
    v7 = *(_QWORD *)(a1 + 248);
    *(_OWORD *)v3 = *(_OWORD *)v7;
    *((_OWORD *)v3 + 1) = *(_OWORD *)(v7 + 16);
    *((_OWORD *)v3 + 2) = *(_OWORD *)(v7 + 32);
    *((_OWORD *)v3 + 3) = *(_OWORD *)(v7 + 48);
    *((_OWORD *)v3 + 4) = *(_OWORD *)(v7 + 64);
    *((_OWORD *)v3 + 5) = *(_OWORD *)(v7 + 80);
    *((_OWORD *)v3 + 6) = *(_OWORD *)(v7 + 96);
    *((_OWORD *)v3 + 7) = *(_OWORD *)(v7 + 112);
    *((_OWORD *)v3 + 8) = *(_OWORD *)(v7 + 128);
    v3[18] = *(_QWORD *)(v7 + 144);
    v4 = (__int64 *)malloc_base();
    free_base(nullptr);
    if ( !v4 )
    {
      v8 = v3;
LABEL_8:
      free_base(v8);
      return v5;
    }
    *(_DWORD *)v4 = 0;
    if ( !*(_QWORD *)(a1 + 328) )
    {
      v2 = nullptr;
      *v3 = (__int64)off_140302AE0;
      v3[1] = (__int64)off_140302AE8;
      v3[2] = (__int64)off_140302AF0;
      v3[11] = (__int64)off_140302B38;
      v3[12] = (__int64)off_140302B40;
LABEL_26:
      *(_DWORD *)v4 = 1;
      if ( v2 )
        *v2 = 1;
      goto LABEL_28;
    }
    v2 = (_DWORD *)malloc_base();
    free_base(nullptr);
    if ( !v2 )
    {
      free_base(v3);
LABEL_14:
      v8 = v4;
      goto LABEL_8;
    }
    *v2 = 0;
    v9 = *(     sr_anon_49 **)(a1 + 328);
    LocaleInfoA = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v20, 1, v9, 0xEu, v3);
    v11 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v20, 1, v9, 0xFu, v3 + 1) | LocaleInfoA;
    v12 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v20, 1, v9, 0x10u, v3 + 2) | v11;
    v13 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v20, 2, v9, 0xEu, v3 + 11) | v12;
    if ( v13 | (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v20, 2, v9, 0xFu, v3 + 12) )
    {
      sub_140261BBC((__int64)v3);
      free_base(v3);
      free_base(v2);
      v5 = -1;
      goto LABEL_14;
    }
    v14 = (_BYTE *)v3[2];
    while ( 1 )
    {
      v15 = *v14;
      if ( !*v14 )
        goto LABEL_26;
      if ( (unsigned __int8)(v15 - 48) <= 9u )
        break;
      if ( v15 == 59 )
      {
        v16 = v14;
        do
        {
          v17 = v16[1];
          *v16++ = v17;
        }
        while ( v17 );
      }
      else
      {
LABEL_18:
        ++v14;
      }
    }
    *v14 = v15 - 48;
    goto LABEL_18;
  }
  v2 = nullptr;
  v3 = (__int64 *)&off_140302AE0;
  v4 = nullptr;
LABEL_28:
  v18 = *(volatile signed __int32 **)(a1 + 232);
  if ( v18 )
    _InterlockedDecrement(v18);
  v19 = *(volatile signed __int32 **)(a1 + 224);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19, 0xFFFFFFFF) == 1 )
    {
      free_base(*(void **)(a1 + 224));
      free_base(*(void **)(a1 + 248));
    }
  }
  *(_QWORD *)(a1 + 232) = (uint64)(uintptr_t)(v2);
  *(_QWORD *)(a1 + 224) = (uint64)(uintptr_t)(v4);
  *(_QWORD *)(a1 + 248) = (uint64)(uintptr_t)(v3);
  return 0;
}

// 140302AE0: using guessed type _UNKNOWN *off_140302AE0;
// 140302AE8: using guessed type _UNKNOWN *off_140302AE8;
// 140302AF0: using guessed type _UNKNOWN *off_140302AF0;
// 140302B38: using guessed type _UNKNOWN *off_140302B38;
// 140302B40: using guessed type _UNKNOWN *off_140302B40;

//----- (0000000140261F10) ----------------------------------------------------
char            fix_grouping_0(char *a1)
{
  char result; // al
  char *v2; // rdx
  char *v3; // r8
  char v4; // cl

  result = *a1;
  v2 = a1;
  while ( result )
  {
    if ( (unsigned __int8)(result - 48) <= 9u )
    {
      *v2 = result - 48;
LABEL_4:
      ++v2;
      goto LABEL_5;
    }
    if ( result != 59 )
      goto LABEL_4;
    v3 = v2;
    do
    {
      v4 = v3[1];
      *v3++ = v4;
    }
    while ( v4 );
LABEL_5:
    result = *v2;
  }
  return result;
}


//----- (0000000140261F9C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1047(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140261FC8) ----------------------------------------------------
void            free_crt_array_internal(void **a1, __int64 a2)
{
  __int64 v2; // rdi
  void **v3; // rbx
  __int64 v4; // rsi

  v2 = 0;
  v3 = a1;
  v4 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( a1 > &a1[a2] )
    v4 = 0;
  if ( v4 )
  {
    do
    {
      free_base(*v3);
      ++v2;
      ++v3;
    }
    while ( v2 != v4 );
  }
}


//----- (0000000140262024) ----------------------------------------------------
struct __crt_lc_time_data *           get_or_create_lc_time_sr(struct __crt_locale_data *     a1)
{
  struct __crt_lc_time_data *v3; // rax
  struct __crt_lc_time_data *v4; // rbx
  struct __crt_lc_time_data *v5; // rdi

  if ( !*((_QWORD *)a1 + 42) )
    return (struct __crt_lc_time_data *)&off_14028B0E0;
  v3 = (struct __crt_lc_time_data *)calloc_base();
  v4 = v3;
  if ( v3 )
  {
    if ( initialize_lc_time_sr(v3, a1) )
    {
      *((_DWORD *)v4 + 87) = 1;
      v5 = v4;
      v4 = nullptr;
      goto LABEL_7;
    }
    sub_140262400((void **)v4);
  }
  v5 = nullptr;
LABEL_7:
  free_base(v4);
  return v5;
}

// 140262024: using guessed type struct __crt_lc_time_data *__fastcall get_or_create_lc_time(struct __crt_locale_data *const a1);
// 14026209C: using guessed type bool __fastcall initialize_lc_time(struct __crt_lc_time_data *const, struct __crt_locale_data *const);
// 14028B0E0: using guessed type _UNKNOWN *off_14028B0E0;

//----- (000000014026209C) ----------------------------------------------------
bool            initialize_lc_time_sr(struct __crt_lc_time_data *     a1, struct __crt_locale_data *     a2)
{
  __m128i *v2; // r14
  int v4; // esi
  unsigned int v5; // r15d
  __int64 v6; // r13
  __int64 *v7; // rdi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  unsigned int v11; // r15d
  __int64 v12; // r13
  __int64 *v13; // rdi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int LocaleInfoA; // eax
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // esi
  __int128 v28; // [rsp+30h] [rbp-10h] BYREF

  v2 = *((__m128i **)a2 + 42);
  v4 = 0;
  v28 = (unsigned __int64)a2;
  *((_QWORD *)a1 + 87) = (uint64)(uintptr_t)(sub_140248608(v2));
  v5 = 49;
  v6 = 7;
  do
  {
    v7 = (__int64 *)((char *)a1 + 8 * ((v5 - 48) % 7));
    v8 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, v5, v7) | v4;
    v9 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, v5 - 7, v7 + 7) | v8;
    v10 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, v5, v7 + 44) | v9;
    v4 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, v5 - 7, v7 + 51) | v10;
    ++v5;
    --v6;
  }
  while ( v6 );
  v11 = 56;
  v12 = 12;
  v13 = (__int64 *)((char *)a1 + 208);
  do
  {
    v14 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, v11 + 12, v13 - 12) | v4;
    v15 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, v11, v13) | v14;
    v16 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, v11 + 12, v13 + 32) | v15;
    v4 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, v11, v13 + 44) | v16;
    ++v13;
    ++v11;
    --v12;
  }
  while ( v12 );
  v17 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, 0x28u, (__int64 *)a1 + 38) | v4;
  LocaleInfoA = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, 0x29u, (__int64 *)a1 + 39);
  v19 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, 0x28u, (__int64 *)a1 + 82) | LocaleInfoA | v17;
  v20 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, 0x29u, (__int64 *)a1 + 83) | v19;
  v21 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, 0x1Fu, (__int64 *)a1 + 40) | v20;
  v22 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, 0x20u, (__int64 *)a1 + 41) | v21;
  v23 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 1, (     sr_anon_49 *)v2, 0x1003u, (__int64 *)a1 + 42) | v22;
  v24 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 0, (     sr_anon_49 *)v2, 0x1009u, (__int64 *)a1 + 43);
  v25 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, 0x1Fu, (__int64 *)a1 + 84) | v24 | v23;
  v26 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, 0x20u, (__int64 *)a1 + 85) | v25;
  return (v26 | (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&v28, 2, (     sr_anon_49 *)v2, 0x1003u, (__int64 *)a1 + 86)) == 0;
}

// 14026209C: using guessed type bool __fastcall initialize_lc_time(struct __crt_lc_time_data *const a1, struct __crt_locale_data *const a2);

//----- (00000001402623E4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1048(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140262400) ----------------------------------------------------
void            sub_140262400(void **a1)
{
  if ( a1 )
  {
    free_crt_array_internal(a1, 7);
    free_crt_array_internal(a1 + 7, 7);
    free_crt_array_internal(a1 + 14, 12);
    free_crt_array_internal(a1 + 26, 12);
    free_crt_array_internal(a1 + 38, 2);
    free_base(a1[40]);
    free_base(a1[41]);
    free_base(a1[42]);
    free_crt_array_internal(a1 + 44, 7);
    free_crt_array_internal(a1 + 51, 7);
    free_crt_array_internal(a1 + 58, 12);
    free_crt_array_internal(a1 + 70, 12);
    free_crt_array_internal(a1 + 82, 2);
    free_base(a1[84]);
    free_base(a1[85]);
    free_base(a1[86]);
    free_base(a1[87]);
  }
}


//----- (0000000140262508) ----------------------------------------------------
__int64            sub_140262508(__int64 a1)
{
  struct __crt_lc_time_data *v1; // rdi
  struct __crt_lc_time_data *v3; // rbx
  struct __crt_lc_time_data *v4; // rax

  v1 = nullptr;
  if ( *(_QWORD *)(a1 + 336) )
  {
    v4 = (struct __crt_lc_time_data *)calloc_base();
    v3 = v4;
    if ( v4 )
    {
      if ( initialize_lc_time_sr(v4, (struct __crt_locale_data *    )a1) )
      {
        *((_DWORD *)v3 + 87) = 1;
        free_base(nullptr);
        goto LABEL_8;
      }
      sub_140262400((void **)v3);
      v1 = v3;
    }
    free_base(v1);
    return 1;
  }
  v3 = (struct __crt_lc_time_data *)&off_14028B0E0;
LABEL_8:
  sub_140262A0C(*(_QWORD *)(a1 + 288));
  *(_QWORD *)(a1 + 288) = (uint64)(uintptr_t)(v3);
  return 0;
}

// 14026209C: using guessed type bool __fastcall initialize_lc_time(struct __crt_lc_time_data *const a1, struct __crt_locale_data *const a2);
// 14028B0E0: using guessed type _UNKNOWN *off_14028B0E0;

//----- (00000001402625A4) ----------------------------------------------------
__int64            sub_1402625A4(_WORD *a1, _WORD *a2)
{
  bool v3; // zf
  _WORD *v4; // rax
  _WORD *v5; // r9
  __int16 v6; // dx

  v3 = *a1 == 0;
  v4 = a1;
  while ( !v3 )
  {
    v5 = a2;
    if ( *a2 )
    {
      v6 = *a2;
      while ( *v4 != v6 )
      {
        v6 = *++v5;
        if ( !*v5 )
          goto LABEL_7;
      }
      return v4 - a1;
    }
LABEL_7:
    v3 = *++v4 == 0;
  }
  return v4 - a1;
}


//----- (00000001402625E4) ----------------------------------------------------
sr_anon_49 *        wcspbrk_sr(     sr_anon_49 *String,      sr_anon_49 *Control)
{
       sr_anon_49 *v2; // r8
  __int16 v3; // ax

  while ( 1 )
  {
    if ( !*(_WORD *)String )
      return nullptr;
    v2 = Control;
    if ( *(_WORD *)Control )
      break;
LABEL_6:
    String = (     sr_anon_49 *)((char *)String + 2);
  }
  v3 = *(_WORD *)Control;
  while ( v3 != *(_WORD *)String )
  {
    v2 = (     sr_anon_49 *)((char *)v2 + 2);
    v3 = *(_WORD *)v2;
    if ( !*(_WORD *)v2 )
      goto LABEL_6;
  }
  return String;
}


//----- (0000000140262618) ----------------------------------------------------
__int64            sub_140262618(
        struct __crt_locale_pointers *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 lpCharType, ...)
{
  int v6; // eax
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  __int64 *v11; // rbx
  __int64 *v12; // rax
  unsigned int v13; // eax
  __int64 v15; // [rsp+0h] [rbp-30h] BYREF
  __int64 *v16; // [rsp+20h] [rbp-10h]
  int v17; // [rsp+28h] [rbp-8h]
  __int64 v18; // [rsp+30h] [rbp+0h] BYREF
  char v19; // [rsp+48h] [rbp+18h]
  __int64 v20; // [rsp+50h] [rbp+20h]

  sub_140213644((_LocaleUpdate *)&v18, a1);
  unsigned int sr_ret = 0; /* edi: 0x140262697 / 0x140262754 xor edi, edi */
  v17 = 0;
  v16 = nullptr;
  v6 = sub_140259504();
  v7 = v6;
  if ( !v6 )
    goto LABEL_18;
  v8 = (2LL * v6 + 16) & -(__int64)(2LL * v6 < (unsigned __int64)(2LL * v6 + 16));
  if ( !v8 )
  {
    v11 = nullptr;
    goto LABEL_12;
  }
  if ( v8 <= 0x400 )
  {
    v9 = v8 + 15;
    if ( v8 + 15 < v8 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = &v18;
    if ( &v15 == (__int64 *)-48LL )
      goto LABEL_15;
    LODWORD(v18) = 52428;
    goto LABEL_10;
  }
  v12 = (__int64 *)malloc_base();
  v11 = v12;
  if ( v12 )
  {
    *(_DWORD *)v12 = 56797;
LABEL_10:
    v11 += 2;
  }
LABEL_12:
  if ( v11 )
  {
    sub_1401FCD30((void *)(uintptr_t)(v11), 0, 2 * v7);
    v17 = v7;
    v16 = v11;
    v13 = sub_140259504();
    if ( v13 )
      sr_ret = ((unsigned int (           *)(_QWORD, __int64 *, _QWORD, __int64))GetStringTypeW)(a2, v11, v13, lpCharType);
  }
LABEL_15:
  if ( v11 && *((_DWORD *)v11 - 4) == 56797 )
    free_base(v11 - 2);
LABEL_18:
  if ( v19 )
    *(_DWORD *)(v18 + 936) &= ~2u;
  return sr_ret; /* 0x14026277D: mov eax, edi */
}

// 14026E038: invalid function type 'BOOL (__stdcall *GetStringTypeW)(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (00000001402627A8) ----------------------------------------------------
__int64            sub_1402627A8(__int64 a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rax
  volatile signed __int32 **v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rdx
  __int64 v8; // rcx

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  v1 = *(volatile signed __int32 **)(a1 + 224);
  if ( v1 )
    _InterlockedIncrement(v1);
  v2 = *(volatile signed __int32 **)(a1 + 240);
  if ( v2 )
    _InterlockedIncrement(v2);
  v3 = *(volatile signed __int32 **)(a1 + 232);
  if ( v3 )
    _InterlockedIncrement(v3);
  v4 = *(volatile signed __int32 **)(a1 + 256);
  if ( v4 )
    _InterlockedIncrement(v4);
  v5 = (volatile signed __int32 **)(a1 + 56);
  v6 = 6;
  do
  {
    if ( *(v5 - 2) != (volatile signed __int32 *)&unk_140302588 && *v5 )
      _InterlockedIncrement(*v5);
    if ( *(v5 - 3) )
    {
      v7 = *(v5 - 1);
      if ( v7 )
        _InterlockedIncrement(v7);
    }
    v5 += 4;
    --v6;
  }
  while ( v6 );
  v8 = *(_QWORD *)(a1 + 288);
  if ( !v8 || (_UNKNOWN **)v8 == &off_14028B0E0 )
    return 0x7FFFFFFF;
  else
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v8 + 348));
}

// 14028B0E0: using guessed type _UNKNOWN *off_14028B0E0;

//----- (0000000140262834) ----------------------------------------------------
void            sub_140262834(__int64 a1)
{
  _UNKNOWN **v1; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // rax
  void **v7; // rsi
  __int64 v8; // rbp
  _DWORD **v9; // rdi
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx

  v1 = *(_UNKNOWN ***)(a1 + 248);
  if ( v1 )
  {
    if ( v1 != &off_140302AE0 )
    {
      v3 = *(_DWORD **)(a1 + 224);
      if ( v3 )
      {
        if ( !*v3 )
        {
          v4 = *(_DWORD **)(a1 + 240);
          if ( v4 && !*v4 )
          {
            free_base(v4);
            sub_140261548(*(_QWORD **)(a1 + 248));
          }
          v5 = *(_DWORD **)(a1 + 232);
          if ( v5 && !*v5 )
          {
            free_base(v5);
            sub_140261BBC(*(_QWORD *)(a1 + 248));
          }
          free_base(*(void **)(a1 + 224));
          free_base(*(void **)(a1 + 248));
        }
      }
    }
  }
  v6 = *(_DWORD **)(a1 + 256);
  if ( v6 && !*v6 )
  {
    free_base((void *)(*(_QWORD *)(a1 + 264) - 254LL));
    free_base((void *)(*(_QWORD *)(a1 + 272) - 128LL));
    free_base((void *)(*(_QWORD *)(a1 + 280) - 128LL));
    free_base(*(void **)(a1 + 256));
  }
  sub_1402629D4(*(void ***)(a1 + 288));
  v7 = (void **)(a1 + 296);
  v8 = 6;
  v9 = (_DWORD **)(a1 + 56);
  do
  {
    if ( *(v9 - 2) != (_DWORD *)&unk_140302588 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( !*v10 )
        {
          free_base(v10);
          free_base(*v7);
        }
      }
    }
    if ( *(v9 - 3) )
    {
      v11 = *(v9 - 1);
      if ( v11 )
      {
        if ( !*v11 )
          free_base(v11);
      }
    }
    ++v7;
    v9 += 4;
    --v8;
  }
  while ( v8 );
  free_base((void *)a1);
}

// 140302AE0: using guessed type _UNKNOWN *off_140302AE0;

//----- (00000001402629D4) ----------------------------------------------------
void            sub_1402629D4(void **Block)
{
  if ( Block && Block != (void **)&off_14028B0E0 && !*((_DWORD *)Block + 87) )
  {
    sub_140262400(Block);
    free_base(Block);
  }
}

// 14028B0E0: using guessed type _UNKNOWN *off_14028B0E0;

//----- (0000000140262A0C) ----------------------------------------------------
__int64            sub_140262A0C(__int64 a1)
{
  if ( !a1 || (_UNKNOWN **)a1 == &off_14028B0E0 )
    return 0x7FFFFFFF;
  else
    return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 348));
}

// 14028B0E0: using guessed type _UNKNOWN *off_14028B0E0;

//----- (0000000140262A34) ----------------------------------------------------
void            sub_140262A34(__int64 a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rax
  volatile signed __int32 **v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rdx

  if ( a1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF);
    v1 = *(volatile signed __int32 **)(a1 + 224);
    if ( v1 )
      _InterlockedAdd(v1, 0xFFFFFFFF);
    v2 = *(volatile signed __int32 **)(a1 + 240);
    if ( v2 )
      _InterlockedAdd(v2, 0xFFFFFFFF);
    v3 = *(volatile signed __int32 **)(a1 + 232);
    if ( v3 )
      _InterlockedAdd(v3, 0xFFFFFFFF);
    v4 = *(volatile signed __int32 **)(a1 + 256);
    if ( v4 )
      _InterlockedAdd(v4, 0xFFFFFFFF);
    v5 = (volatile signed __int32 **)(a1 + 56);
    v6 = 6;
    do
    {
      if ( *(v5 - 2) != (volatile signed __int32 *)&unk_140302588 && *v5 )
        _InterlockedAdd(*v5, 0xFFFFFFFF);
      if ( *(v5 - 3) )
      {
        v7 = *(v5 - 1);
        if ( v7 )
          _InterlockedAdd(v7, 0xFFFFFFFF);
      }
      v5 += 4;
      --v6;
    }
    while ( v6 );
    sub_140262A0C(*(_QWORD *)(a1 + 288));
  }
}


//----- (0000000140262ADC) ----------------------------------------------------
__int64 sub_140262ADC()
{
  __int64 v0; // rax
  __int64 *v1; // rdi
  __int64 v2; // rbx

  v0 = sub_140255A70();
  v1 = (__int64 *)(v0 + 144);
  if ( (*(_DWORD *)(v0 + 936) & dword_140302B88) == 0 || (v2 = *v1) == 0 )
  {
    sub_140258B64(4);
    v2 = updatetlocinfoEx_nolock(v1, *(__int64 *)&dword_140404A6C[19065667]);
    sub_140258BB8(4);
    if ( !v2 )
      abort();
  }
  return v2;
}

// 140302B88: using guessed type int dword_140302B88;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140262B48) ----------------------------------------------------
__int64            updatetlocinfoEx_nolock(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( !a2 || !a1 )
    return 0;
  v3 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    sub_1402627A8(a2);
    if ( v3 )
    {
      sub_140262A34(v3);
      if ( !*(_DWORD *)(v3 + 16) && (__int16 **)v3 != &off_140302420 )
        sub_140262834(v3);
    }
  }
  return a2;
}

// 140302420: using guessed type __int16 *off_140302420;

//----- (0000000140262BB0) ----------------------------------------------------
__int64            GetLocaleNameFromDefault(__int64 a1)
{
  __int64 v2; // r9
  _QWORD v4[6]; // [rsp+0h] [rbp-F8h] BYREF
  _WORD v5[88]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+E0h] [rbp-18h]

  *(_DWORD *)(a1 + 16) |= 0x104u;
  if ( (int)sub_14024F2EC(v5, 0x55u) > 1 )
  {
    v2 = -1;
    do
      ++v2;
    while ( v5[v2] );
    if ( (unsigned int)sub_140260D80((_WORD *)(a1 + 600), 85, (__int64)v5, v2 + 1) )
    {
      v4[4] = 0;
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  return 0; /* no caller reads the result */
}

// 140262C4F: control flows out of bounds to 140262C54

//----- (0000000140262C58) ----------------------------------------------------
bool            GetLocaleNameFromLangCountry(__int64 a1)
{
  __int16 *v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // r9d
  __int16 v7; // r8
  bool result; // al

  v1 = *(__int16 **)a1;
  v2 = -1;
  v4 = -1;
  do
    ++v4;
  while ( v1[v4] );
  *(_DWORD *)(a1 + 24) = v4 == 3;
  do
    ++v2;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v2) );
  *(_DWORD *)(a1 + 28) = v2 == 3;
  if ( v4 == 3 )
  {
    v5 = 2;
  }
  else
  {
    v6 = 0;
    if ( v1 )
    {
      while ( 1 )
      {
        v7 = *v1++;
        if ( (unsigned __int16)(v7 - 65) > 0x19u && (unsigned __int16)(v7 - 97) > 0x19u )
          break;
        ++v6;
      }
      v5 = v6;
    }
    else
    {
      v5 = 0;
    }
  }
  *(_DWORD *)(a1 + 20) = v5;
  sub_14024EEBC((__int64)LangCountryEnumProcEx, 3u, 0, 0);
  result = (*(_DWORD *)(a1 + 16) & 0x100) != 0;
  if ( (*(_DWORD *)(a1 + 16) & 0x200) == 0 || (*(_DWORD *)(a1 + 16) & 7) == 0 || !result )
    *(_DWORD *)(a1 + 16) = 0;
  return result;
}


//----- (0000000140262D28) ----------------------------------------------------
__int64            GetLocaleNameFromLanguage(__int64 a1)
{
  __int16 *v1; // rdx
  __int64 v2; // r8
  int v4; // ecx
  int v5; // r9d
  __int16 v6; // r8
  __int64 result; // rax

  v1 = *(__int16 **)a1;
  v2 = -1;
  do
    ++v2;
  while ( v1[v2] );
  *(_DWORD *)(a1 + 24) = v2 == 3;
  if ( v2 == 3 )
  {
    v4 = 2;
  }
  else
  {
    v5 = 0;
    if ( v1 )
    {
      while ( 1 )
      {
        v6 = *v1++;
        if ( (unsigned __int16)(v6 - 65) > 0x19u && (unsigned __int16)(v6 - 97) > 0x19u )
          break;
        ++v5;
      }
      v4 = v5;
    }
    else
    {
      v4 = 0;
    }
  }
  *(_DWORD *)(a1 + 20) = v4;
  result = sub_14024EEBC((__int64)LanguageEnumProcEx, 3u, 0, 0);
  if ( (*(_BYTE *)(a1 + 16) & 4) == 0 )
    *(_DWORD *)(a1 + 16) = 0;
  return result;
}


//----- (0000000140262DF0) ----------------------------------------------------
__int64            LangCountryEnumProcEx(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  _WORD *v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 *v11; // r9
  int v12; // r8d
  unsigned __int16 *v13; // rcx
  unsigned __int16 v14; // dx
  __int64 v15; // rax
  _QWORD v17[6]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int16 String2[64]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-28h]

  v2 = sub_140255A70();
  v3 = (_QWORD *)(v2 + 152);
  if ( !(unsigned int)sub_14024F174(a1, *(_DWORD *)(v2 + 180) != 0 ? 7 : 4098, (__int64)String2, 0x40u) )
    goto LABEL_2;
  v4 = -1;
  if ( !(unsigned int)sub_14026AE18((unsigned __int16 *)v3[1], String2) )
  {
    if ( !(unsigned int)sub_14024F174(a1, *((_DWORD *)v3 + 6) != 0 ? 3 : 4097, (__int64)String2, 0x40u) )
    {
LABEL_2:
      *((_DWORD *)v3 + 4) = 0;
      return (*((_DWORD *)v3 + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
    }
    v5 = sub_14026AE18((unsigned __int16 *)*v3, String2);
    v6 = *((_DWORD *)v3 + 4);
    if ( v5 )
    {
      if ( (v6 & 2) != 0 )
        goto LABEL_15;
      if ( !*((_DWORD *)v3 + 5) || (unsigned int)wcsnicmp_sr(*v3, String2, *((int *)v3 + 5)) )
      {
        if ( (v3[2] & 1) != 0 || !(unsigned int)TestDefaultCountry(a1) )
          goto LABEL_15;
        *((_DWORD *)v3 + 4) |= 1u;
        v7 = -1;
        do
          ++v7;
        while ( *(_WORD *)(a1 + 2 * v7) );
      }
      else
      {
        *((_DWORD *)v3 + 4) |= 2u;
        v7 = -1;
        do
          ++v7;
        while ( *(_WORD *)(a1 + 2 * v7) );
      }
    }
    else
    {
      v7 = -1;
      *((_DWORD *)v3 + 4) = v6 | 0x304;
      do
        ++v7;
      while ( *(_WORD *)(a1 + 2 * v7) );
    }
    if ( (unsigned int)sub_140260D80((_WORD *)v3 + 300, 85, a1, v7 + 1) )
      goto LABEL_47;
  }
LABEL_15:
  if ( (v3[2] & 0x300) == 0x300 )
    return (*((_DWORD *)v3 + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
  if ( !(unsigned int)sub_14024F174(a1, *((_DWORD *)v3 + 6) != 0 ? 3 : 4097, (__int64)String2, 0x40u) )
    goto LABEL_2;
  if ( (unsigned int)sub_14026AE18((unsigned __int16 *)*v3, String2) )
    return (*((_DWORD *)v3 + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
  v8 = *((_DWORD *)v3 + 4) | 0x200;
  *((_DWORD *)v3 + 4) = v8;
  if ( *((_DWORD *)v3 + 6) )
  {
    v9 = v3 + 75;
    *((_DWORD *)v3 + 4) = v8 | 0x100;
    if ( *((_WORD *)v3 + 300) )
      return (*((_DWORD *)v3 + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
    do
      ++v4;
    while ( *(_WORD *)(a1 + 2 * v4) );
    goto LABEL_45;
  }
  if ( !*((_DWORD *)v3 + 5) )
    goto LABEL_43;
  v10 = -1;
  do
    ++v10;
  while ( *(_WORD *)(*v3 + 2 * v10) );
  if ( (_DWORD)v10 != *((_DWORD *)v3 + 5) )
  {
LABEL_43:
    v9 = v3 + 75;
    *((_DWORD *)v3 + 4) = v8 | 0x100;
    if ( *((_WORD *)v3 + 300) )
      return (*((_DWORD *)v3 + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
    do
      ++v4;
    while ( *(_WORD *)(a1 + 2 * v4) );
    goto LABEL_45;
  }
  if ( (unsigned int)TestDefaultCountry(a1) )
    goto LABEL_51;
  v11 = (unsigned __int16 *)*v3;
  v12 = 0;
  v13 = (unsigned __int16 *)*v3;
  if ( *v3 )
  {
    v14 = *v11;
    while ( 1 )
    {
      ++v13;
      if ( (unsigned __int16)(v14 - 65) > 0x19u && (unsigned __int16)(v14 - 97) > 0x19u )
        break;
      v14 = *v13;
      ++v12;
    }
  }
  v15 = -1;
  do
    ++v15;
  while ( v11[v15] );
  if ( v12 != (_DWORD)v15 )
  {
LABEL_51:
    *((_DWORD *)v3 + 4) |= 0x100u;
    v9 = v3 + 75;
    if ( !*((_WORD *)v3 + 300) )
    {
      do
        ++v4;
      while ( *(_WORD *)(a1 + 2 * v4) );
LABEL_45:
      if ( !(unsigned int)sub_140260D80(v9, 85, a1, v4 + 1) )
        return (*((_DWORD *)v3 + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
LABEL_47:
      v17[4] = 0;
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  return (*((_DWORD *)v3 + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
}

// 1402630D4: control flows out of bounds to 1402630D9
// 14026529C: using guessed type __int64 __fastcall wcsnicmp(_QWORD, _QWORD, _QWORD);

//----- (00000001402630DC) ----------------------------------------------------
__int64            LanguageEnumProcEx(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r9
  _QWORD v6[6]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int16 v7[120]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v8; // [rsp+120h] [rbp-18h]

  v2 = sub_140255A70();
  v3 = v2 + 152;
  if ( (unsigned int)sub_14024F174(a1, *(_DWORD *)(v2 + 176) != 0 ? 3 : 4097, (__int64)v7, 0x78u) )
  {
    if ( !(unsigned int)sub_14026AE18(*(unsigned __int16 **)v3, v7) )
    {
      v4 = -1;
      do
        ++v4;
      while ( *(_WORD *)(a1 + 2 * v4) );
      if ( (unsigned int)sub_140260D80((_WORD *)(v3 + 600), 85, a1, v4 + 1) )
      {
        v6[4] = 0;
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      *(_DWORD *)(v3 + 16) |= 4u;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 16) = 0;
  }
  return (*(_DWORD *)(v3 + 16) & 4) == 0; /* 0x140263181: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
}

// 1402631C0: control flows out of bounds to 1402631C5

//----- (00000001402631C8) ----------------------------------------------------
__int64            ProcessCodePage(sr_anon_49 *String1, __int64 a2)
{
  unsigned int v4; // edx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( String1 && *(_WORD *)String1 && wcscmp_sr(String1, (     sr_anon_49 *)L"ACP") )
  {
    if ( !(unsigned int)sub_14026AE18((unsigned __int16 *)String1, L"utf8")
      || !(unsigned int)sub_14026AE18((unsigned __int16 *)String1, L"utf-8") )
    {
      return 65001;
    }
    if ( wcscmp_sr(String1, (     sr_anon_49 *)L"OCP") )
      return unknown_libname_847((unsigned __int16 *)String1);
    v4 = 536870923;
  }
  else
  {
    v4 = 536875012;
  }
  if ( !(unsigned int)sub_14024F174(a2 + 600, v4, (__int64)&v6, 2u) )
    return 0;
  result = (unsigned int)v6;
  if ( v6 < 3 )
    return 65001;
  return result;
}

// 140290278: using guessed type __int16[5];
// 140290288: using guessed type __int16[4];
// 140290290: using guessed type __int16[6];
// 1402902A0: using guessed type __int16[4];

//----- (0000000140263294) ----------------------------------------------------
__int64            TestDefaultCountry(_WORD *a1)
{
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  _WORD v4[12]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( (unsigned int)sub_14024F174((__int64)a1, 0x59u, (__int64)v4, 9u) )
    return (unsigned int)wcsncmp_sr(v4, a1, 9) == 0; /* 0x1402632D7: test eax, eax; jne -> xor eax, eax; else mov eax, 1 */
  return 0; /* 0x1402632E2: xor eax, eax */
}


//----- (00000001402632F8) ----------------------------------------------------
_BOOL8            TestDefaultLanguage(_WORD *a1, int a2, __int16 **a3)
{
  __int16 *v5; // r9
  int v6; // r8d
  __int16 *v7; // rcx
  __int16 v8; // dx
  __int64 v9; // rax

  if ( (unsigned int)TestDefaultCountry(a1) || !a2 )
    return 1;
  v5 = *a3;
  v6 = 0;
  v7 = *a3;
  if ( *a3 )
  {
    v8 = *v5;
    while ( 1 )
    {
      ++v7;
      if ( (unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u )
        break;
      v8 = *v7;
      ++v6;
    }
  }
  v9 = -1;
  do
    ++v9;
  while ( v5[v9] );
  return v6 != (_DWORD)v9;
}


//----- (0000000140263370) ----------------------------------------------------
__int64            TranslateName(__int64 a1, int a2, unsigned __int16 **a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  int v7; // eax
  int v8; // esi
  bool v9; // zf
  __int64 v10; // rbp

  v3 = 0;
  v5 = a2;
  v7 = 1;
  v8 = 0;
  if ( a2 < 0 )
  {
LABEL_9:
    v9 = v7 == 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = v7 == 0;
      if ( !v7 )
        break;
      v10 = (v8 + v5) / 2;
      v7 = sub_14026AE18(*a3, *(unsigned __int16 **)(16 * v10 + a1));
      if ( v7 )
      {
        if ( v7 >= 0 )
          v8 = v10 + 1;
        else
          v5 = v10 - 1;
      }
      else
      {
        *a3 = (unsigned __int16 *)(16 * v10 + a1 + 8);
      }
      if ( v8 > v5 )
        goto LABEL_9;
    }
  }
  LOBYTE(v3) = v9;
  return v3;
}


//----- (000000014026340C) ----------------------------------------------------
__int64            sub_14026340C(_WORD *a1, signed int *a2,      __m128i *a3)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  _WORD **v10; // rdi
  sr_anon_49 *v11; // rcx
  signed int v12; // eax
  signed int v13; // ebx
  __int64 v14; // r9

  v6 = sub_140255A70();
  v7 = a1;
  v8 = v6 + 152;
  *(_DWORD *)(v6 + 168) = 0;
  v9 = v6 + 752;
  *(_QWORD *)(v6 + 152) = (uint64)(uintptr_t)(a1);
  v10 = (_WORD **)(v6 + 160);
  *(_WORD *)(v6 + 752) = 0;
  *(_QWORD *)(v6 + 160) = (uint64)(uintptr_t)(a1 + 64);
  if ( a1[64] )
  {
    TranslateName((__int64)&off_14028F6F0, 22, (unsigned __int16 **)(v6 + 160));
    v7 = *(unsigned __int16 **)v8;
  }
  if ( !*v7 )
  {
    GetLocaleNameFromDefault(v8);
    goto LABEL_13;
  }
  if ( **v10 )
    GetLocaleNameFromLangCountry(v8);
  else
    GetLocaleNameFromLanguage(v8);
  if ( !*(_DWORD *)(v8 + 16) )
  {
    if ( (unsigned int)TranslateName((__int64)&off_14028F2D0, 64, (unsigned __int16 **)v8) )
    {
      if ( **v10 )
        GetLocaleNameFromLangCountry(v8);
      else
        GetLocaleNameFromLanguage(v8);
    }
LABEL_13:
    if ( !*(_DWORD *)(v8 + 16) )
      return 0;
  }
  v11 = (sr_anon_49 *)(a1 + 128);
  if ( *a1 || *(_WORD *)v11 )
    v12 = ProcessCodePage(v11, v8);
  else
    v12 = ((__int64 (*)(void))GetACP)();
  v13 = v12;
  if ( v12 && v12 != 65000 && (unsigned int)((__int64 (           *)(_QWORD))IsValidCodePage)((unsigned __int16)v12) )
  {
    if ( a2 )
      *a2 = v13;
    if ( !a3 )
      return 1;
    v14 = -1;
    SR_VEC_LANES(128, a3[18], i16)[0] = 0;
    do
      ++v14;
    while ( *(_WORD *)(v9 + 2 * v14) );
    if ( (unsigned int)sub_140260D80((     __m128i *)SR_VEC_LANES(128, a3[18], i16), 85, v9, v14 + 1) )
      goto LABEL_38;
    if ( (unsigned int)sub_14024F174((__int64)SR_VEC_LANES(128, a3[18], i64), 0x1001u, (__int64)a3, 0x40u)
      && (unsigned int)sub_14024F174((__int64)SR_VEC_LANES(128, a3[18], i64), 0x1002u, (__int64)SR_VEC_LANES(128, a3[8], i64), 0x40u)
      && (!sub_14026CEFC(a3 + 8, 0x5Fu) && !sub_14026CEFC(a3 + 8, 0x2Eu)
       || (unsigned int)sub_14024F174((__int64)SR_VEC_LANES(128, a3[18], i64), 7u, (__int64)SR_VEC_LANES(128, a3[8], i64), 0x40u)) )
    {
      if ( v13 != 65001 )
      {
        itow_s(v13, SR_VEC_LANES(128, a3[16], i16), 0x10u, 0xAu);
        return 1;
      }
      if ( !(unsigned int)sub_140260D80((     __m128i *)SR_VEC_LANES(128, a3[16], i16), 16, (__int64)L"utf8", 5) )
        return 1;
LABEL_38:
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  return 0;
}

// 140263669: control flows out of bounds to 14026366E
// 14026E078: invalid function type 'UINT (__stdcall *GetACP)()' has been ignored
// 14026E080: invalid function type 'BOOL (__stdcall *IsValidCodePage)(UINT CodePage)' has been ignored
// 14028F2D0: using guessed type __int16 *off_14028F2D0;
// 14028F6F0: using guessed type __int16 *off_14028F6F0;
// 140290278: using guessed type __int16[5];

//----- (0000000140263670) ----------------------------------------------------
__int64            CountryEnumProc(unsigned __int16 *a1)
{
  __int64 v2; // rbp
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  int v5; // ebx
  _WORD *i; // rax
  __int64 v8; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int16 LCData[120]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v10; // [rsp+110h] [rbp-18h]

  v2 = sub_140255A70();
  v3 = *(_DWORD **)(sub_140255A70() + 928);
  v4 = (unsigned int)LcidFromHexString_sr(a1);
  v5 = 0;
  if ( (unsigned int)((__int64 (           *)(__int64, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                       v4,
                       *(_DWORD *)(v2 + 180) != 0 ? 7 : 4098,
                       LCData,
                       120) )
  {
    if ( !(unsigned int)sub_14026AE18(*(unsigned __int16 **)(v2 + 160), LCData) )
    {
      for ( i = &unk_1402902A8; (_WORD)v4 != *i; ++i )
      {
        if ( (unsigned int)++v5 >= 0xA )
        {
          *v3 |= 4u;
          v3[2] = v4;
          v3[1] = v4;
          return (*v3 & 4) == 0; /* 0x140263725: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
        }
      }
    }
  }
  else
  {
    *v3 = 0;
  }
  return (*v3 & 4) == 0; /* 0x140263725: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140263758) ----------------------------------------------------
__int64            GetLcidFromCountry(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 result; // rax

  v2 = sub_140255A70();
  v3 = -1;
  v4 = v2;
  v5 = *(_QWORD *)(v2 + 160);
  do
    ++v3;
  while ( *(_WORD *)(v5 + 2 * v3) );
  *(_DWORD *)(v4 + 180) = v3 == 3;
  result = ((__int64 (           *)(__int64 (           *)(unsigned __int16 *), __int64))EnumSystemLocalesW)(
             CountryEnumProc,
             1);
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (00000001402637B8) ----------------------------------------------------
__int64            GetLcidFromDefault(_DWORD *a1)
{
  __int64 result; // rax

  *a1 |= 0x104u;
  result = ((__int64 (*)(void))GetUserDefaultLCID)();
  a1[2] = result;
  a1[1] = result;
  return result;
}

// 14026E0F0: invalid function type 'LCID (__stdcall *GetUserDefaultLCID)()' has been ignored

//----- (00000001402637DC) ----------------------------------------------------
bool            GetLcidFromLangCountry(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // zf
  int v8; // r8d
  __int16 *v9; // rcx
  int i; // r10d
  __int16 v11; // r9
  bool result; // al

  v2 = sub_140255A70();
  v3 = -1;
  v4 = -1;
  v5 = v2 + 152;
  v6 = *(_QWORD *)(v2 + 152);
  do
    ++v4;
  while ( *(_WORD *)(v6 + 2 * v4) );
  *(_DWORD *)(v5 + 24) = v4 == 3;
  do
    ++v3;
  while ( *(_WORD *)(*(_QWORD *)(v5 + 8) + 2 * v3) );
  v7 = v3 == 3;
  v8 = 2;
  *(_DWORD *)(v5 + 28) = v7;
  a1[1] = 0;
  if ( !*(_DWORD *)(v5 + 24) )
  {
    v9 = *(__int16 **)v5;
    for ( i = 0; ; ++i )
    {
      v11 = *v9++;
      if ( (unsigned __int16)(v11 - 65) > 0x19u && (unsigned __int16)(v11 - 97) > 0x19u )
        break;
    }
    v8 = i;
  }
  *(_DWORD *)(v5 + 20) = v8;
  ((void (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(LangCountryEnumProc, 1);
  result = (*a1 & 0x100) != 0;
  if ( (*a1 & 0x200) == 0 || (*a1 & 7) == 0 || !result )
    *a1 = 0;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (00000001402638AC) ----------------------------------------------------
__int64            GetLcidFromLanguage(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int16 *v4; // rdx
  int v5; // ecx
  int i; // r9d
  __int16 v7; // r8
  __int64 result; // rax

  v2 = sub_140255A70();
  v3 = -1;
  v4 = *(__int16 **)(v2 + 152);
  do
    ++v3;
  while ( v4[v3] );
  v5 = 2;
  *(_DWORD *)(v2 + 176) = v3 == 3;
  if ( v3 != 3 )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *v4++;
      if ( (unsigned __int16)(v7 - 65) > 0x19u && (unsigned __int16)(v7 - 97) > 0x19u )
        break;
    }
    v5 = i;
  }
  *(_DWORD *)(v2 + 172) = v5;
  result = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(LanguageEnumProc, 1);
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (000000014026396C) ----------------------------------------------------
__int64            LangCountryEnumProc(unsigned __int16 *a1)
{
  _QWORD *v2; // rsi
  int *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  char v9; // al
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  _WORD *v13; // rax
  int v14; // eax
  int v15; // edx
  __int64 v17; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int16 LCData[120]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v19; // [rsp+110h] [rbp-28h]

  v2 = (_QWORD *)(sub_140255A70() + 152);
  v3 = *(int **)(sub_140255A70() + 928);
  v4 = (unsigned int)LcidFromHexString_sr(a1);
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        v4,
                        *((_DWORD *)v2 + 7) != 0 ? 7 : 4098,
                        LCData,
                        120) )
    goto LABEL_38;
  v5 = -1;
  if ( (unsigned int)sub_14026AE18((unsigned __int16 *)v2[1], LCData) )
    goto LABEL_20;
  if ( !(unsigned int)((__int64 (           *)(_QWORD, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        (unsigned int)v4,
                        *((_DWORD *)v2 + 6) != 0 ? 3 : 4097,
                        LCData,
                        120) )
  {
LABEL_38:
    *v3 = 0;
    return (*v3 & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  }
  v6 = sub_14026AE18((unsigned __int16 *)*v2, LCData);
  v7 = *v3;
  if ( v6 )
  {
    if ( (v7 & 2) != 0 )
      goto LABEL_20;
    v9 = *v3;
    if ( *((_DWORD *)v2 + 5) )
    {
      v10 = wcsnicmp_sr(*v2, LCData, *((int *)v2 + 5));
      v7 = *v3;
      if ( !v10 )
      {
        v3[2] = v4;
        *v3 = v7 | 2;
        v11 = -1;
        do
          ++v11;
        while ( *(_WORD *)(*v2 + 2 * v11) );
        if ( (_DWORD)v11 == *((_DWORD *)v2 + 5) )
          v3[1] = v4;
        goto LABEL_20;
      }
      v9 = *v3;
    }
    if ( (v9 & 1) == 0 )
    {
      v12 = 0;
      v13 = &unk_1402902A8;
      while ( (_WORD)v4 != *v13 )
      {
        ++v12;
        ++v13;
        if ( v12 >= 0xA )
        {
          v8 = v7 | 1;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    v8 = v7 | 0x304;
    v3[1] = v4;
LABEL_19:
    v3[2] = v4;
    *v3 = v8;
  }
LABEL_20:
  if ( (*v3 & 0x300) == 0x300 )
    return (*v3 & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  if ( !(unsigned int)((__int64 (           *)(_QWORD, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        (unsigned int)v4,
                        *((_DWORD *)v2 + 6) != 0 ? 3 : 4097,
                        LCData,
                        120) )
    goto LABEL_38;
  if ( (unsigned int)sub_14026AE18((unsigned __int16 *)*v2, LCData) )
  {
    if ( *((_DWORD *)v2 + 6) || !*((_DWORD *)v2 + 5) || (unsigned int)sub_14026AE18((unsigned __int16 *)*v2, LCData) )
      return (*v3 & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
    v15 = 0;
    goto LABEL_33;
  }
  v14 = *v3 | 0x200;
  *v3 = v14;
  if ( !*((_DWORD *)v2 + 6) && *((_DWORD *)v2 + 5) )
  {
    do
      ++v5;
    while ( *(_WORD *)(*v2 + 2 * v5) );
    if ( (_DWORD)v5 == *((_DWORD *)v2 + 5) )
    {
      v15 = 1;
LABEL_33:
      if ( !TestDefaultLanguage_0(v4, v15) )
        return (*v3 & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
      *v3 |= 0x100u;
      goto LABEL_35;
    }
  }
  *v3 = v14 | 0x100;
LABEL_35:
  if ( !v3[1] )
    v3[1] = v4;
  return (*v3 & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored
// 14026529C: using guessed type __int64 __fastcall wcsnicmp(_QWORD, _QWORD, _QWORD);

//----- (0000000140263BB8) ----------------------------------------------------
__int64            LanguageEnumProc(unsigned __int16 *a1)
{
  __int64 v2; // rsi
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  __int64 v9; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int16 LCData[120]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v11; // [rsp+110h] [rbp-18h]

  v2 = sub_140255A70();
  v3 = *(_DWORD **)(sub_140255A70() + 928);
  v4 = (unsigned int)LcidFromHexString_sr(a1);
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        v4,
                        *(_DWORD *)(v2 + 176) != 0 ? 3 : 4097,
                        LCData,
                        120) )
  {
    *v3 = 0;
    return (*v3 & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  }
  v5 = sub_14026AE18(*(unsigned __int16 **)(v2 + 152), LCData);
  v6 = *(_DWORD *)(v2 + 176);
  if ( !v5 )
  {
    if ( v6 )
      goto LABEL_11;
    v7 = 1;
LABEL_10:
    if ( !TestDefaultLanguage_0(v4, v7) )
      return (*v3 & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
LABEL_11:
    *v3 |= 4u;
    v3[1] = v4;
    v3[2] = v4;
    return (*v3 & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  }
  if ( !v6 && *(_DWORD *)(v2 + 172) && !(unsigned int)sub_14026AE18(*(unsigned __int16 **)(v2 + 152), LCData) )
  {
    v7 = 0;
    goto LABEL_10;
  }
  return (*v3 & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140263CC0) ----------------------------------------------------
__int64            LcidFromHexString_sr(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  unsigned int v2; // r8d
  unsigned __int16 *v3; // r9
  __int16 v4; // ax
  int v5; // ecx

  v1 = *a1;
  v2 = 0;
  v3 = a1;
  while ( v1 )
  {
    ++v3;
    if ( (unsigned __int16)(v1 - 97) > 5u )
    {
      if ( (unsigned __int16)(v1 - 65) > 5u )
        goto LABEL_7;
      v4 = -7;
    }
    else
    {
      v4 = -39;
    }
    v1 += v4;
LABEL_7:
    v5 = v1;
    v1 = *v3;
    v2 = v5 + 16 * v2 - 48;
  }
  return v2;
}


//----- (0000000140263D10) ----------------------------------------------------
__int64            ProcessCodePage_0(sr_anon_49 *String1, __int64 a2)
{
  __int64 result; // rax
  __int64 LCData; // [rsp+30h] [rbp+8h] BYREF

  if ( String1 && *(_WORD *)String1 && wcscmp_sr(String1, (     sr_anon_49 *)L"ACP") )
  {
    if ( wcscmp_sr(String1, (     sr_anon_49 *)L"OCP") )
      return unknown_libname_847((unsigned __int16 *)String1);
    if ( (unsigned int)((__int64 (           *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                         *(unsigned int *)(a2 + 8),
                         536870923,
                         &LCData,
                         2) )
      return (unsigned int)LCData;
    return 0;
  }
  if ( !(unsigned int)((__int64 (           *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                        *(unsigned int *)(a2 + 8),
                        536875012,
                        &LCData,
                        2) )
    return 0;
  result = (unsigned int)LCData;
  if ( !(_DWORD)LCData )
    return ((__int64 (*)(void))GetACP)();
  return result;
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored
// 14026E078: invalid function type 'UINT (__stdcall *GetACP)()' has been ignored
// 140290288: using guessed type __int16[4];
// 1402902A0: using guessed type __int16[4];

//----- (0000000140263DE4) ----------------------------------------------------
_BOOL8            TestDefaultLanguage_0(int a1, int a2)
{
  __int64 v4; // rdi
  __int16 *v5; // r9
  int v6; // r8d
  __int16 v7; // dx
  __int16 *v8; // rcx
  __int64 v9; // rcx
  __int64 LCData; // [rsp+30h] [rbp+8h] BYREF

  v4 = sub_140255A70();
  if ( !(unsigned int)((__int64 (           *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                        a1 & 0x3FF | 0x400u,
                        536870913,
                        &LCData,
                        2) )
    return 0;
  if ( a1 == (_DWORD)LCData || !a2 )
    return 1;
  v5 = *(__int16 **)(v4 + 152);
  v6 = 0;
  v7 = *v5;
  v8 = v5 + 1;
  while ( (unsigned __int16)(v7 - 65) <= 0x19u || (unsigned __int16)(v7 - 97) <= 0x19u )
  {
    v7 = *v8;
    ++v6;
    ++v8;
  }
  v9 = -1;
  do
    ++v9;
  while ( v5[v9] );
  return v6 != (_DWORD)v9;
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140263E90) ----------------------------------------------------
char            TranslateName_0(__int64 a1, int a2, unsigned __int16 **a3)
{
  int v3; // edi
  int v5; // ebx
  __int64 v7; // rsi
  int v8; // eax

  v3 = 0;
  v5 = a2;
  if ( a2 < 0 )
    return 0;
  while ( 1 )
  {
    v7 = (v3 + v5) / 2;
    v8 = sub_14026AE18(*a3, *(unsigned __int16 **)(16 * v7 + a1));
    if ( !v8 )
      break;
    if ( v8 >= 0 )
      v3 = v7 + 1;
    else
      v5 = v7 - 1;
    if ( v3 > v5 )
      return 0;
  }
  *a3 = (unsigned __int16 *)(16 * v7 + a1 + 8);
  return 1;
}


//----- (0000000140263F10) ----------------------------------------------------
__int64            _acrt_get_qualified_locale_downlevel(__int64 a1, signed int *a2, __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  _WORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  signed int v11; // eax
  signed int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-40h] BYREF
  __int64 Locale; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-10h]

  v6 = sub_140255A70();
  Locale = 0;
  LODWORD(v16) = 0;
  v7 = (_QWORD *)(v6 + 160);
  *(_QWORD *)(sub_140255A70() + 928) = (uint64)(uintptr_t)(&Locale);
  *(_QWORD *)(v6 + 152) = a1;
  *(_QWORD *)(v6 + 160) = a1 + 128;
  if ( a1 != -128 && *(_WORD *)(a1 + 128) )
    TranslateName_0((__int64)&off_14028F6F0, 22, (unsigned __int16 **)(v6 + 160));
  LODWORD(Locale) = 0;
  v8 = *(_WORD **)(v6 + 152);
  if ( !v8 || !*v8 )
  {
    if ( *v7 && *(_WORD *)*v7 )
    {
      v9 = sub_140255A70();
      v10 = -1;
      do
        ++v10;
      while ( *(_WORD *)(*(_QWORD *)(v9 + 160) + 2 * v10) );
      *(_DWORD *)(v9 + 180) = v10 == 3;
      ((void (           *)(__int64 (           *)(unsigned __int16 *), __int64))EnumSystemLocalesW)(CountryEnumProc, 1);
      if ( (Locale & 4) == 0 )
        LODWORD(Locale) = 0;
    }
    else
    {
      LODWORD(Locale) = 260;
      LODWORD(v16) = ((__int64 (*)(void))GetUserDefaultLCID)();
      HIDWORD(Locale) = v16;
    }
LABEL_23:
    if ( !(_DWORD)Locale )
      return 0; /* 0x140264171: xor eax, eax */
    goto LABEL_24;
  }
  if ( *v7 && *(_WORD *)*v7 )
    GetLcidFromLangCountry(&Locale);
  else
    GetLcidFromLanguage(&Locale);
  if ( !(_DWORD)Locale )
  {
    if ( TranslateName_0((__int64)&off_14028F2D0, 64, (unsigned __int16 **)(v6 + 152)) )
    {
      if ( *v7 && *(_WORD *)*v7 )
        GetLcidFromLangCountry(&Locale);
      else
        GetLcidFromLanguage(&Locale);
    }
    goto LABEL_23;
  }
LABEL_24:
  v11 = ProcessCodePage_0((sr_anon_49 *)((a1 + 256) & -(__int64)(a1 != 0)), (__int64)&Locale);
  v12 = v11;
  if ( v11
    && (unsigned int)((__int64 (           *)(_QWORD))IsValidCodePage)((unsigned __int16)v11)
    && (unsigned int)((__int64 (           *)(_QWORD, __int64))IsValidLocale)(HIDWORD(Locale), 1) )
  {
    if ( a2 )
      *a2 = v12;
    sub_14024F460(HIDWORD(Locale), (_WORD *)(v6 + 752), 0x55u, 0);
    if ( !a3 )
      return 1; /* 0x140264104: je -> mov eax, 1 */
    {
      sub_14024F460(HIDWORD(Locale), (_WORD *)(a3 + 288), 0x55u, 0);
      if ( (unsigned int)((__int64 (           *)(_QWORD, __int64, __int64, __int64))GetLocaleInfoW)(
                           HIDWORD(Locale),
                           4097,
                           a3,
                           64) )
      {
        if ( (unsigned int)((__int64 (           *)(_QWORD, __int64, __int64, __int64))GetLocaleInfoW)(
                             (unsigned int)v16,
                             4098,
                             a3 + 128,
                             64) )
        {
          itow_s(v12, (__int16 *)(a3 + 256), 0x10u, 0xAu);
          return 1; /* 0x14026416A: mov eax, 1 */
        }
      }
    }
  }
  return 0; /* 0x140264171: xor eax, eax */
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored
// 14026E0F0: invalid function type 'LCID (__stdcall *GetUserDefaultLCID)()' has been ignored
// 14026E080: invalid function type 'BOOL (__stdcall *IsValidCodePage)(UINT CodePage)' has been ignored
// 14026E0F8: invalid function type 'BOOL (__stdcall *IsValidLocale)(LCID Locale, DWORD dwFlags)' has been ignored
// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored
// 14028F2D0: using guessed type __int16 *off_14028F2D0;
// 14028F6F0: using guessed type __int16 *off_14028F6F0;

//----- (0000000140264190) ----------------------------------------------------
struct lconv *        localeconv()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return *(struct lconv **)(v2 + 248);
}


//----- (00000001402641E8) ----------------------------------------------------
int         chdrive(int Drive)
{
  int v1; // eax
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  __int16 PathName; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+22h] [rbp-16h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( (unsigned int)(Drive - 1) <= 0x19 )
  {
    v5 = 58;
    PathName = Drive + 64;
    if ( !(unsigned int)((__int64 (           *)(__int16 *))SetCurrentDirectoryW)(&PathName) )
    {
      v1 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v1);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 15;
    *errno_sr() = 13;
    sub_14024CF6C();
  }
  return 0; /* the function has no caller */
}

// 14026E140: invalid function type 'BOOL (__stdcall *SetCurrentDirectoryW)(LPCWSTR lpPathName)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

/* Scoped typed recovery of allocator 0x14024DF98. */
__int64            sr_directory_calloc(unsigned __int64 v1, unsigned __int64 v0)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( v1 && 0xFFFFFFFFFFFFFFE0uLL / v1 < v0 )
  {
LABEL_10:
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    v2 = v0 * v1;
    if ( !(v0 * v1) )
      v2 = 1;
    while ( 1 )
    {
      result = ((__int64 (           *)(_QWORD, __int64, __int64))HeapAlloc)(
                 *(_QWORD *)&dword_140404A6C[19065847],
                 8,
                 v2);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(v2) )
        goto LABEL_10;
    }
  }
  return result;
}

// 14026E130: invalid function type 'LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)' has been ignored
// 14024DFA7: variable 'v1' is possibly undefined
// 14024DFB5: variable 'v0' is possibly undefined
// 140260BE4: using guessed type __int64 __fastcall callnewh(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026426C) ----------------------------------------------------
int getdrive()
{
  wchar_t buffer[261] = {0};
  wchar_t *path = buffer;
  wchar_t *allocated = NULL;
  unsigned int count = GetCurrentDirectoryW(261, buffer);
  unsigned int drive = 0;
  if (count > 260)
  {
    unsigned int capacity = count + 1;
    allocated = (wchar_t *)(uintptr_t)sr_directory_calloc(capacity, 2);
    path = allocated;
    if (!allocated || !GetCurrentDirectoryW(capacity, allocated))
    {
      *errno_sr() = 12;
      path = NULL;
    }
  }
  if (path && path[0] && path[1] == L':')
  {
    unsigned int letter = (unsigned short)path[0];
    if (letter - 97u <= 25u)
      letter -= 32u;
    drive = letter - 64u;
  }
  if (count > 260)
    free_base(allocated);
  /* The original cookie check preserves EAX; the C return is the EDI drive. */
  return (int)drive;
}


//----- (0000000140264364) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup3(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
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
        v10 = malloc_base();
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
  v3 = malloc_base();
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
// 14026442F: variable 'v7' is possibly undefined
// 14026442F: variable 'v6' is possibly undefined

//----- (00000001402644E0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_928()
{
  return sub_140259504();
}


//----- (0000000140264508) ----------------------------------------------------
__int64 _acrt_SetEnvironmentVariableA(_BYTE *name, _BYTE *value) {
  sr_path_buffer wide_name={0},wide_value={0};
  unsigned int result=0;
  if(!(unsigned int)sr_path_mbs(name,(__int64)(uintptr_t)&wide_name,sr_chdir_codepage()) &&
     !(unsigned int)sr_path_mbs(value,(__int64)(uintptr_t)&wide_value,sr_chdir_codepage()))
    result=(unsigned int)SetEnvironmentVariableW((const wchar_t *)wide_name.buffer,(const wchar_t *)wide_value.buffer);
  if(wide_value.owned) free_base(wide_value.buffer);
  if(wide_name.owned) free_base(wide_name.buffer);
  return result;
}


//----- (00000001402646A0) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup4(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
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
        v10 = malloc_base();
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
  v3 = malloc_base();
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
// 14026476B: variable 'v7' is possibly undefined
// 14026476B: variable 'v6' is possibly undefined

//----- (000000014026481C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_929()
{
  return sub_140259504();
}


//----- (0000000140264844) ----------------------------------------------------
__int64 _acrt_SetCurrentDirectoryA(_BYTE *path) {
  sr_path_buffer wide={0};
  unsigned int result=0;
  if(!(unsigned int)sr_path_mbs(path,(__int64)(uintptr_t)&wide,sr_chdir_codepage()))
    result=(unsigned int)SetCurrentDirectoryW((const wchar_t *)wide.buffer);
  if(wide.owned) free_base(wide.buffer);
  return result;
}


//----- (0000000140264914) ----------------------------------------------------
int         wmkdir(     sr_anon_49 *Path)
{
  int v1; // eax

  if ( (unsigned int)((__int64 (           *)(     sr_anon_49 *, _QWORD))CreateDirectoryW)(Path, 0) )
    return 0;
  v1 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v1);
  return -1;
}

// 14026E030: invalid function type 'BOOL (__stdcall *CreateDirectoryW)(LPCWSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140264940) ----------------------------------------------------
int            fperrraise_with(unsigned int a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int *v7; // rax
  int Except; // [rsp+38h] [rbp+10h] BYREF

  Except = a2;
  v2 = a1 | 0x20;
  if ( (a1 & 0x18) == 0 )
    v2 = a1;
  v3 = (v2 >> 5) & 1 | 2;
  if ( (v2 & 0x10) == 0 )
    v3 = (v2 >> 5) & 1;
  v4 = v3 | 4;
  if ( (v2 & 8) == 0 )
    v4 = v3;
  v5 = v4 | 8;
  if ( (v2 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (v2 & 1) == 0 )
    v6 = v5;
  Except |= _acrt_fenv_get_fp_status_word_from_exception_mask_sr(v6);
  LODWORD(v7) = fesetexceptflag_sr((     sr_anon_69 *)&Except, 31);
  if ( (v2 & 1) != 0 )
  {
    v7 = errno_sr();
    *v7 = 33;
  }
  else if ( (v2 & 0x1C) != 0 )
  {
    v7 = errno_sr();
    *v7 = 34;
  }
  return (int)v7;
}


//----- (0000000140264AE8) ----------------------------------------------------
__int16         dtest_sr(double *Px)
{
  __int16 v1; // dx
  __int16 result; // ax

  v1 = *((_WORD *)Px + 3) & 0x7FF0;
  if ( v1 == 32752 )
  {
    if ( (*((_BYTE *)Px + 6) & 0xF) != 0 )
      return 2;
    if ( *((_WORD *)Px + 2) )
      return 2;
    if ( *((_WORD *)Px + 1) )
      return 2;
    result = 1;
    if ( *(_WORD *)Px )
      return 2;
  }
  else
  {
    if ( (*((_WORD *)Px + 3) & 0x7FFF) != 0 )
      return (v1 != 0) - 2;
    result = 0;
    if ( *((_WORD *)Px + 2) || *((_WORD *)Px + 1) || *(_WORD *)Px )
      return (v1 != 0) - 2;
  }
  return result;
}


//----- (0000000140264C70) ----------------------------------------------------
void         fperrraise(int Except)
{
  unsigned int v2; // edi
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 Excepta; // [rsp+38h] [rbp+10h] BYREF

  fegetexceptflag((fexcept_t *)&Excepta, 31);
  LODWORD(v7) = Excepta;
  v2 = Except | 0x20;
  if ( (Except & 0x18) == 0 )
    v2 = Except;
  v3 = (v2 >> 5) & 1 | 2;
  if ( (v2 & 0x10) == 0 )
    v3 = (v2 >> 5) & 1;
  v4 = v3 | 4;
  if ( (v2 & 8) == 0 )
    v4 = v3;
  v5 = v4 | 8;
  if ( (v2 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (v2 & 1) == 0 )
    v6 = v5;
  LODWORD(v7) = _acrt_fenv_get_fp_status_word_from_exception_mask_sr(v6) | v7;
  fesetexceptflag_sr((     sr_anon_69 *)&v7, 31);
  if ( (v2 & 1) != 0 )
  {
    *errno_sr() = 33;
  }
  else if ( (v2 & 0x1C) != 0 )
  {
    *errno_sr() = 34;
  }
}


//----- (0000000140264D50) ----------------------------------------------------
__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}


//----- (0000000140264D60) ----------------------------------------------------
void            set_fpsr_sr(unsigned int a1)
{
  _mm_setcsr(a1);
}


//----- (0000000140264D6A) ----------------------------------------------------
void fclrf_sr()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}


//----- (0000000140264DEC) ----------------------------------------------------
__int64            GetTableIndexFromLocaleName(     sr_anon_49 *a1)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebp
  int v5; // eax

  v2 = 0;
  v3 = 227;
  while ( 1 )
  {
    v4 = (v3 + v2) / 2;
    v5 = _ascii_wcsnicmp_sr((unsigned __int16 *)a1, (unsigned __int16 *)*(&off_140291E60 + 2 * v4), 85);
    if ( !v5 )
      break;
    if ( v5 >= 0 )
      v2 = v4 + 1;
    else
      v3 = v4 - 1;
    if ( v2 > v3 )
      return 0xFFFFFFFFLL;
  }
  return *((unsigned int *)&off_140291E60 + 4 * v4 + 2);
}

// 140291E60: using guessed type _UNKNOWN *off_140291E60;

//----- (0000000140264E74) ----------------------------------------------------
__int64            _acrt_DownlevelLCIDToLocaleName(int a1, _WORD *a2, int a3)
{
  __int64 v3; // rdi
  int v6; // r9d
  int v7; // r10d
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  __m128i *v13; // rbp
  int v14; // eax
  int v15; // ebx

  v3 = a3;
  if ( ((a1 & 0xFFFFF3FF) != 0 || a1 == 3072) && (a2 || (int)v3 <= 0) && (int)v3 >= 0 )
  {
    v6 = 0;
    v7 = 227;
    while ( 1 )
    {
      v8 = (v7 + v6) / 2;
      v9 = 4LL * v8;
      v10 = a1 - dword_140290400[v9];
      if ( a1 == dword_140290400[v9] )
        break;
      v11 = v8 - 1;
      if ( v10 >= 0 )
        v11 = v7;
      v12 = v8 + 1;
      v7 = v11;
      if ( v10 >= 0 )
        v6 = v12;
      if ( v6 > v11 )
      {
        v8 = -1;
        break;
      }
    }
    if ( v8 >= 0 )
    {
      v13 = *(__m128i **)&dword_140290400[4 * v8 + 2];
      v14 = sub_140254F48(v13, 0x55u);
      v15 = v14;
      if ( (int)v3 <= 0 )
        return (unsigned int)(v15 + 1);
      if ( v14 < (int)v3 )
      {
        if ( (unsigned int)sub_140259444(a2, v3, (__int64)v13) )
        {
          sub_14024CFBC();
          __debugbreak();
        }
        return (unsigned int)(v15 + 1);
      }
    }
  }
  return 0;
}

// 140290400: using guessed type int dword_140290400[];

//----- (0000000140264F68) ----------------------------------------------------
__int64            _acrt_DownlevelLocaleNameToLCID(unsigned __int16 *a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // eax

  if ( !a1 )
    return 0;
  v2 = 0;
  v3 = 227;
  while ( 1 )
  {
    v4 = (v3 + v2) / 2;
    v5 = _ascii_wcsnicmp_sr(a1, (unsigned __int16 *)*(&off_140291E60 + 2 * v4), 85);
    if ( !v5 )
      break;
    if ( v5 >= 0 )
      v2 = v4 + 1;
    else
      v3 = v4 - 1;
    if ( v2 > v3 )
    {
      v6 = -1;
      goto LABEL_10;
    }
  }
  v6 = dword_140291E68[4 * v4];
LABEL_10:
  if ( v6 < 0xE4 )
    return (unsigned int)dword_140290400[4 * v6];
  else
    return 0;
}

// 140290400: using guessed type int dword_140290400[];
// 140291E60: using guessed type _UNKNOWN *off_140291E60;
// 140291E68: using guessed type int dword_140291E68[];

//----- (0000000140265018) ----------------------------------------------------
__int64            sub_140265018(__int64 a1, unsigned int *a2, int **a3, unsigned int *a4)
{
  __int64 osfhandle; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rbx

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) == 0 )
    goto LABEL_4;
  osfhandle = get_osfhandle(**a3);
  v7 = 0;
  if ( !(unsigned int)((__int64 (           *)(__int64))FlushFileBuffers)(osfhandle) )
  {
    v8 = sub_14024D19C();
    *v8 = ((__int64 (*)(void))GetLastError)();
LABEL_4:
    *errno_sr() = 9;
    v7 = -1;
  }
  sub_140261150(*a4);
  return v7;
}

// 14026E028: invalid function type 'BOOL (__stdcall *FlushFileBuffers)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402650A4) ----------------------------------------------------
__int64            sub_1402650A4(unsigned int a1, int **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140265018((__int64)&v3, &v5, a2, &v4);
}


//----- (00000001402650E4) ----------------------------------------------------
__int64            _lambda_38ce7e780aa69e748d6df282ebc68efe___operator_call(int **a1)
{
  __int64 v1; // rcx
  __int64 osfhandle; // rax
  _DWORD *v4; // rbx

  v1 = **a1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401] + 72 * (v1 & 0x3F) + 56) & 1) != 0 )
  {
    osfhandle = get_osfhandle(v1);
    if ( (unsigned int)((__int64 (           *)(__int64))FlushFileBuffers)(osfhandle) )
      return 0;
    v4 = sub_14024D19C();
    *v4 = ((__int64 (*)(void))GetLastError)();
  }
  *errno_sr() = 9;
  return 0xFFFFFFFFLL;
}

// 14026E028: invalid function type 'BOOL (__stdcall *FlushFileBuffers)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140265160) ----------------------------------------------------
int         commit(int FileHandle)
{
  int *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = FileHandle;
  if ( FileHandle == -2 )
  {
    *errno_sr() = 9;
  }
  else
  {
    if ( FileHandle >= 0
      && FileHandle < dword_140404A6C[19065657]
      && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)FileHandle >> 6) + 19065401]
                   + 72LL * (FileHandle & 0x3F)
                   + 56)
        & 1) != 0 )
    {
      v5 = FileHandle;
      v6 = FileHandle;
      v2 = &v3;
      return sub_140265018((__int64)&v4, (unsigned int *)&v6, &v2, (unsigned int *)&v5);
    }
    *errno_sr() = 9;
    sub_14024CF6C();
  }
  return -1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402651F4) ----------------------------------------------------
__int64            _ascii_wcsnicmp_sr(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // edx
  int v8; // r9d
  int v9; // ecx

  if ( !a3 )
    return 0;
  do
  {
    v6 = *a1++;
    v7 = *a2++;
    v8 = v6 + 32;
    if ( (unsigned int)(v6 - 65) > 0x19 )
      v8 = v6;
    v9 = v7 + 32;
    if ( (unsigned int)(v7 - 65) > 0x19 )
      v9 = v7;
    result = (unsigned int)(v8 - v9);
    if ( (_DWORD)result )
      break;
    if ( !v8 )
      break;
    --a3;
  }
  while ( a3 );
  return result;
}


//----- (000000014026529C) ----------------------------------------------------
__int64            wcsnicmp_sr(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  if ( dword_140404A6C[19065283] )
    return wcsnicmp_l(a1, a2, a3, 0);
  if ( a1 && a2 )
    return _ascii_wcsnicmp_sr(a1, a2, a3);
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0x7FFFFFFF;
}

// 14026529C: invalid function type 'int __cdecl wcsnicmp(const #49 *String1, const #49 *String2, #66 MaxCount)' has been ignored
// 1402652E4: using guessed type __int64 __fastcall wcsnicmp_l(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402652E4) ----------------------------------------------------
__int64            wcsnicmp_l(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, struct __crt_locale_pointers *a4)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rsi
  unsigned __int16 *v6; // r14
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  int v12; // ebp
  int v13; // ebx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-30h] BYREF
  char v18; // [rsp+38h] [rbp-20h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      sub_140213644((_LocaleUpdate *)&v16, a4);
      v8 = v17[0];
      if ( *(_QWORD *)(v17[0] + 312LL) )
      {
        do
        {
          if ( *v6 >= 0x100u )
          {
            v11 = sub_14026B084(*v6, (struct __crt_locale_pointers *)v17);
            v8 = v17[0];
          }
          else
          {
            v10 = *(unsigned __int8 *)v6;
            if ( (wctype[v10 + 1] & 1) != 0 )
              LOBYTE(v10) = *(_BYTE *)(v10 + *(_QWORD *)(v8 + 272));
            v11 = (unsigned __int8)v10;
          }
          ++v6;
          v12 = v11;
          v13 = v11;
          if ( *v5 >= 0x100u )
          {
            v15 = sub_14026B084(*v5, (struct __crt_locale_pointers *)v17);
            v8 = v17[0];
          }
          else
          {
            v14 = *(unsigned __int8 *)v5;
            if ( (wctype[v14 + 1] & 1) != 0 )
              LOBYTE(v14) = *(_BYTE *)(v14 + *(_QWORD *)(v8 + 272));
            v15 = (unsigned __int8)v14;
          }
          ++v5;
          v9 = v13 - v15;
          if ( v9 )
            break;
          if ( !v12 )
            break;
          --v4;
        }
        while ( v4 );
      }
      else
      {
        v9 = _ascii_wcsnicmp_sr(v6, v5, v4);
      }
      if ( v18 )
        *(_DWORD *)(v16 + 936) &= ~2u;
      return v9;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0x7FFFFFFF;
  }
}

// 1402652E4: invalid function type 'int __cdecl wcsnicmp_l(const #49 *String1, const #49 *String2, #66 MaxCount, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140265480) ----------------------------------------------------
__int64            strnicmp_sr(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( dword_140404A6C[19065283] )
    return strnicmp_l(a1, a2, a3, 0);
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
    return sr_client_ascii_strnicmp((const unsigned char *)(uintptr_t)a1, (const unsigned char *)(uintptr_t)a2, a3);
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0x7FFFFFFF;
}

// 140265480: invalid function type 'int __cdecl strnicmp(const char *String1, const char *String2, #66 MaxCount)' has been ignored
// 1402654BE: control flows out of bounds to 140265434
// 1402654D0: using guessed type __int64 __fastcall strnicmp_l(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402654D0) ----------------------------------------------------
__int64            strnicmp_l(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rsi
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  int v12; // ecx
  _QWORD v13[3]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+38h] [rbp-10h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
  {
    if ( a3 )
    {
      sub_140213644((_LocaleUpdate *)v13, a4);
      v8 = *(_QWORD *)(v13[1] + 272LL);
      do
      {
        v9 = *v6++;
        v10 = *(unsigned __int8 *)(v9 + v8);
        v11 = *v5++;
        v12 = *(unsigned __int8 *)(v11 + v8);
        result = (unsigned int)(v10 - v12);
        if ( v10 != v12 )
          break;
        if ( !v10 )
          break;
        --v4;
      }
      while ( v4 );
      if ( v14 )
        *(_DWORD *)(v13[0] + 936LL) &= ~2u;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0x7FFFFFFF;
  }
  return result;
}

// 1402654D0: invalid function type 'int __cdecl strnicmp_l(const char *String1, const char *String2, #66 MaxCount, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140265580) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup5(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
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
        v10 = malloc_base();
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
  v3 = malloc_base();
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
// 14026564B: variable 'v7' is possibly undefined
// 14026564B: variable 'v6' is possibly undefined

//----- (00000001402656FC) ----------------------------------------------------
__int64            common_open__char(_BYTE *a1, int a2, char a3)
{
  int v4; // ebx
  __int64 v5; // rax
  int v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( !a1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  v6 = -1;
  v7 = 0;
  v4 = sopen_nolock(&v7, (unsigned int *)&v6, a1, a2, 64, a3);
  if ( v7 )
  {
    if ( v4 )
    {
      v5 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)v6 >> 6) + 19065401];
      *(_BYTE *)(v5 + 72LL * (v6 & 0x3F) + 56) &= ~1u;
    }
    sub_140261150(v6);
  }
  if ( v4 )
  {
    *errno_sr() = v4;
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402657AC) ----------------------------------------------------
__int64            common_open__wchar_t(__int64 a1, int a2, char a3)
{
  int v4; // ebx
  __int64 v5; // rax
  int v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( !a1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  v6 = -1;
  v7 = 0;
  v4 = wsopen_nolock(&v7, (unsigned int *)&v6, a1, a2, 64, a3);
  if ( v7 )
  {
    if ( v4 )
    {
      v5 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)v6 >> 6) + 19065401];
      *(_BYTE *)(v5 + 72LL * (v6 & 0x3F) + 56) &= ~1u;
    }
    sub_140261150(v6);
  }
  if ( v4 )
  {
    *errno_sr() = v4;
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026585C) ----------------------------------------------------
__int64            common_sopen_dispatch__char(_BYTE *a1, int a2, int a3, int a4, unsigned int *a5, int a6)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-14h]

  if ( !a5 || (*a5 = -1, !a1) || a6 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v7 = sopen_nolock(&v9, a5, a1, a2, a3, a4);
    v10 = v7;
    if ( v9 )
    {
      if ( v7 )
      {
        v8 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a5 >> 6) + 19065401];
        *(_BYTE *)(v8 + 72LL * (*a5 & 0x3F) + 56) &= ~1u;
      }
      sub_140261150(*a5);
    }
    if ( v7 )
      *a5 = -1;
    return v7;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140265920) ----------------------------------------------------
__int64            common_sopen_dispatch__wchar_t(__int64 a1, int a2, int a3, int a4, unsigned int *a5, int a6)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-14h]

  if ( !a5 || (*a5 = -1, !a1) || a6 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v7 = wsopen_nolock(&v9, a5, a1, a2, a3, a4);
    v10 = v7;
    if ( v9 )
    {
      if ( v7 )
      {
        v8 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a5 >> 6) + 19065401];
        *(_BYTE *)(v8 + 72LL * (*a5 & 0x3F) + 56) &= ~1u;
      }
      sub_140261150(*a5);
    }
    if ( v7 )
      *a5 = -1;
    return v7;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140265AC4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_934()
{
  return sub_140259504();
}


//----- (0000000140265AEC) ----------------------------------------------------
__int64            sub_140265AEC(signed int a1, __int64 a2, int a3, _BYTE *a4)
{
  int v5; // ebx
  int v7; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // edi
  unsigned int v13; // eax
  int nolock; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  *a4 = 0;
  v7 = a3;
  if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) >= 0 )
    return 0;
  if ( (a3 & 0x74000) == 0 )
  {
    v20 = 0;
    if ( (unsigned int)sub_140247AA8(&v20) )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( (v20 & 0x74000) != 0 )
      v7 |= v20 & 0x74000;
    else
      v7 |= 0x4000u;
  }
  v9 = v7 & 0x74000;
  if ( (v7 & 0x74000) == 0x4000 )
  {
    *a4 = 0;
    goto LABEL_15;
  }
  if ( ((v9 - 0x10000) & 0xFFFFBFFF) == 0 )
  {
    if ( (v7 & 0x301) != 0x301 )
      goto LABEL_15;
LABEL_13:
    *a4 = 2;
    goto LABEL_15;
  }
  if ( ((v9 - 0x20000) & 0xFFFFBFFF) == 0 )
    goto LABEL_13;
  if ( ((v9 - 0x40000) & 0xFFFFBFFF) == 0 )
    *a4 = 1;
LABEL_15:
  if ( (v7 & 0x70000) == 0 || (*(_BYTE *)a2 & 0x40) != 0 )
    return 0;
  v10 = *(_DWORD *)(a2 + 4) & 0xC0000000;
  v11 = 0;
  v12 = 0;
  if ( v10 != 0x40000000 )
  {
    if ( v10 == 0x80000000 )
      goto LABEL_26;
    if ( v10 != -1073741824 )
      return 0;
  }
  v13 = *(_DWORD *)(a2 + 8);
  if ( !v13 )
    return 0;
  if ( v13 <= 2 )
    goto LABEL_24;
  if ( v13 > 4 )
  {
    if ( v13 != 5 )
      return 0;
LABEL_24:
    v12 = 1;
LABEL_25:
    if ( !v11 )
      goto LABEL_44;
LABEL_26:
    v20 = 0;
    nolock = read_nolock(a1, (__int16 *)&v20, 3u);
    if ( nolock > 0 && v12 == 1 )
      v12 = 0;
    if ( nolock == -1 )
      return (unsigned int)*errno_sr();
    if ( nolock != 2 )
    {
      if ( nolock != 3 )
        goto LABEL_43;
      if ( v20 == 12565487 )
      {
        *a4 = 1;
        goto LABEL_44;
      }
    }
    if ( (unsigned __int16)v20 == 65534 )
    {
      *errno_sr() = 22;
      return (unsigned int)*errno_sr();
    }
    if ( (unsigned __int16)v20 == 65279 )
    {
      if ( lseeki64_nolock(a1, 2, 0) == -1 )
        return (unsigned int)*errno_sr();
      *a4 = 2;
LABEL_44:
      if ( !v12 )
        return 0;
      goto LABEL_45;
    }
LABEL_43:
    if ( lseeki64_nolock(a1, 0, 0) == -1 )
      return (unsigned int)*errno_sr();
    goto LABEL_44;
  }
  if ( lseeki64_nolock(a1, 0, 2u) )
  {
    if ( lseeki64_nolock(a1, 0, 0) == -1 )
      return (unsigned int)*errno_sr();
    v11 = *(_DWORD *)(a2 + 4) >> 31;
    goto LABEL_25;
  }
LABEL_45:
  v16 = (char)*a4;
  v17 = 0;
  v20 = 0;
  v18 = v16 - 1;
  if ( v18 )
  {
    if ( v18 == 1 )
    {
      v20 = 65279;
      v17 = 2;
      goto LABEL_50;
    }
  }
  else
  {
    v20 = 12565487;
    v17 = 3;
  }
  if ( v17 )
  {
LABEL_50:
    while ( 1 )
    {
      v19 = write(a1, (char *)&v20 + v5, v17 - v5);
      if ( v19 == -1 )
        break;
      v5 += v19;
      if ( v17 <= v5 )
        return 0;
    }
    return (unsigned int)*errno_sr();
  }
  return 0;
}

// 140265D77: control flows out of bounds to 140265D7C
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140265D80) ----------------------------------------------------
__int64            sub_140265D80(__int64 a1, __int64 a2, unsigned int *a3)
{
  return ((__int64 (           *)(__int64, _QWORD, _QWORD, __int64, unsigned int, unsigned int, _QWORD))CreateFileW)(
           a1,
           a3[1],
           a3[3],
           a2,
           a3[2],
           a3[4] | a3[5],
           0);
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored

//----- (0000000140265DB8) ----------------------------------------------------
__int64            decode_access_flags(int a1)
{
  if ( (a1 & 3) == 0 )
    return 0x80000000LL;
  if ( (a1 & 3) != 1 )
  {
    if ( (a1 & 3) != 2 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    return 3221225472LL;
  }
  if ( (a1 & 0x70000) != 0 && (a1 & 8) != 0 )
    return 3221225472LL;
  return 0x40000000;
}


//----- (0000000140265E14) ----------------------------------------------------
__int64            decode_open_create_flags(__int16 a1)
{
  int v1; // ecx

  v1 = a1 & 0x700;
  if ( v1 )
  {
    switch ( v1 )
    {
      case 256:
        return 4;
      case 512:
        return 5;
      case 768:
        return 2;
    }
    if ( v1 != 1024 )
    {
      if ( v1 == 1280 )
        return 1;
      if ( v1 != 1536 )
      {
        if ( v1 != 1792 )
        {
          *errno_sr() = 22;
          sub_14024CF6C();
          return 0xFFFFFFFFLL;
        }
        return 1;
      }
      return 5;
    }
  }
  return 3;
}


//----- (0000000140265E90) ----------------------------------------------------
__int64            decode_options(__int64 a1, int a2, int a3, char a4)
{
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v17; // [rsp+58h] [rbp+10h] BYREF

  *(_BYTE *)a1 = 0;
  v8 = -1;
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) == 1 )
    {
      v9 = (a2 & 8) != 0 && (a2 & 0x70000) != 0 ? -1073741824 : 0x40000000;
    }
    else if ( (a2 & 3) == 2 )
    {
      v9 = -1073741824;
    }
    else
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      v9 = -1;
    }
  }
  else
  {
    v9 = 0x80000000;
  }
  *(_DWORD *)(a1 + 4) = v9;
  v10 = a2 & 0x700;
  if ( (a2 & 0x700) != 0 )
  {
    switch ( v10 )
    {
      case 256:
        v11 = 4;
        goto LABEL_22;
      case 512:
LABEL_19:
        v11 = 5;
        goto LABEL_22;
      case 768:
        v11 = 2;
        goto LABEL_22;
    }
    if ( v10 != 1024 )
    {
      if ( v10 == 1280 )
      {
LABEL_17:
        v11 = 1;
        goto LABEL_22;
      }
      if ( v10 != 1536 )
      {
        if ( v10 != 1792 )
        {
          *errno_sr() = 22;
          sub_14024CF6C();
          v9 = *(_DWORD *)(a1 + 4);
          v11 = -1;
          goto LABEL_22;
        }
        goto LABEL_17;
      }
      goto LABEL_19;
    }
  }
  v11 = 3;
LABEL_22:
  *(_DWORD *)(a1 + 8) = v11;
  v12 = a3 - 16;
  if ( v12 )
  {
    v13 = v12 - 16;
    if ( v13 )
    {
      v14 = v13 - 16;
      if ( v14 )
      {
        v15 = v14 - 16;
        if ( v15 )
        {
          if ( v15 == 64 )
          {
            v8 = v9 == 0x80000000;
          }
          else
          {
            *errno_sr() = 22;
            sub_14024CF6C();
          }
        }
        else
        {
          v8 = 3;
        }
      }
      else
      {
        v8 = 2;
      }
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = v8;
  *(_DWORD *)(a1 + 16) = 128;
  if ( (a2 & 0x80u) != 0 )
    *(_BYTE *)a1 |= 0x10u;
  if ( (a2 & 0x8000) == 0 )
  {
    if ( (a2 & 0x74000) != 0 )
      goto LABEL_39;
    if ( (unsigned int)sub_140247AA8(&v17) )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( v17 != 0x8000 )
LABEL_39:
      *(_BYTE *)a1 |= 0x80u;
  }
  if ( (a2 & 0x100) != 0 && (a4 & ~LOBYTE(dword_140404A6C[19065861]) & 0x80u) == 0 )
    *(_DWORD *)(a1 + 16) = 1;
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x4000000u;
    *(_DWORD *)(a1 + 4) |= 0x10000u;
    *(_DWORD *)(a1 + 12) |= 4u;
  }
  if ( (a2 & 0x1000) != 0 )
    *(_DWORD *)(a1 + 16) |= 0x100u;
  if ( (a2 & 0x2000) != 0 )
    *(_DWORD *)(a1 + 20) |= 0x2000000u;
  if ( (a2 & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x8000000u;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x10000000u;
  }
  return a1;
}

// 140266094: control flows out of bounds to 140266099
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026609C) ----------------------------------------------------
__int64            decode_sharing_flags(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = a1 - 16;
  if ( v2 )
  {
    v3 = v2 - 16;
    if ( !v3 )
      return 1;
    v4 = v3 - 16;
    if ( !v4 )
      return 2;
    v5 = v4 - 16;
    if ( !v5 )
      return 3;
    if ( v5 != 64 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    if ( a2 == 0x80000000 )
      return 1;
  }
  return 0;
}


//----- (00000001402660F4) ----------------------------------------------------
bool            is_text_mode(int a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1 & 0x8000) != 0 )
    return 0;
  if ( (a1 & 0x74000) != 0 )
    return 1;
  if ( (unsigned int)sub_140247AA8(&v2) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return v2 != 0x8000;
}

// 140266139: control flows out of bounds to 14026613E

//----- (0000000140266140) ----------------------------------------------------
__int64            truncate_ctrl_z_if_present(int a1)
{
  __int64 v1; // rbx
  char v2; // cl
  __int64 v3; // rdi
  __int16 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v2 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401] + 72 * (v1 & 0x3F) + 56);
  if ( (v2 & 0x48) == 0 && v2 < 0 )
  {
    v3 = lseeki64_nolock(v1, -1, 2u);
    if ( v3 == -1 )
    {
      if ( *(_DWORD *)sub_14024D19C() != 131 )
        return (unsigned int)*errno_sr();
    }
    else
    {
      v5 = 0;
      if ( !(unsigned int)read_nolock(v1, &v5, 1u)
        && v5 == 26
        && (unsigned int)chsize_nolock((unsigned int)v1, v3) == -1
        || lseeki64_nolock(v1, 0, 0) == -1 )
      {
        return (unsigned int)*errno_sr();
      }
    }
  }
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140266204) ----------------------------------------------------
int open(     char *FileName, int OpenFlag, ...)
{
  char v3; // [rsp+40h] [rbp+18h]
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, OpenFlag);
  v3 = va_arg(va, _QWORD);
  return common_open__char(FileName, OpenFlag, v3);
}


//----- (0000000140266228) ----------------------------------------------------
int sopen(     char *FileName, int OpenFlag, int ShareFlag, ...)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+68h] [rbp+20h]
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, ShareFlag);
  v7 = va_arg(va, _QWORD);
  v6[0] = -1;
  v3 = common_sopen_dispatch__char(FileName, OpenFlag, ShareFlag, v7, v6, 0);
  v4 = v6[0];
  if ( v3 )
    return -1;
  return v4;
}


//----- (0000000140266274) ----------------------------------------------------
__int64 sopen_nolock(_DWORD *locked,unsigned int *descriptor,_BYTE *filename,
                     int flags,int sharing,char permissions)
{
  sr_path_locale locale;
  sr_path_buffer wide={0};
  unsigned int codepage=65001,result;
  sub_140213644((_LocaleUpdate *)(void *)&locale,nullptr);
  if (*(unsigned int *)(locale.locale+12)!=65001)
    codepage=(unsigned int)sub_14024EDA4()?0:1;
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  if ((unsigned int)sr_path_mbs(filename,(__int64)(uintptr_t)&wide,codepage)) result=UINT32_MAX;
  else result=(unsigned int)wsopen_nolock(locked,descriptor,(__int64)(uintptr_t)wide.buffer,
                                        flags,sharing,permissions);
  if (wide.owned) free_base(wide.buffer);
  return result;
}


//----- (000000014026638C) ----------------------------------------------------
__int64            sopen_s(unsigned int *a1, _BYTE *a2, int a3, int a4, int PermissionMode)
{
  return common_sopen_dispatch__char(a2, a3, a4, PermissionMode, a1, 1);
}

// 14026638C: invalid function type 'errno_t __cdecl sopen_s(int *FileHandle, const char *FileName, int OpenFlag, int ShareFlag, int PermissionMode)' has been ignored

//----- (00000001402663C0) ----------------------------------------------------
int wopen(     sr_anon_49 *FileName, int OpenFlag, ...)
{
  char v3; // [rsp+40h] [rbp+18h]
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, OpenFlag);
  v3 = va_arg(va, _QWORD);
  return common_open__wchar_t((__int64)FileName, OpenFlag, v3);
}


//----- (00000001402663E4) ----------------------------------------------------
int wsopen(     sr_anon_49 *FileName, int OpenFlag, int ShareFlag, ...)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+68h] [rbp+20h]
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, ShareFlag);
  v7 = va_arg(va, _QWORD);
  v6[0] = -1;
  v3 = common_sopen_dispatch__wchar_t((__int64)FileName, OpenFlag, ShareFlag, v7, v6, 0);
  v4 = v6[0];
  if ( v3 )
    return -1;
  return v4;
}


//----- (0000000140266430) ----------------------------------------------------
__int64            wsopen_nolock(_DWORD *a1, unsigned int *a2, __int64 a3, int a4, int a5, char a6)
{
  __m128i *v10; // rax
  __int64 v11; // xmm1_8
  unsigned __int64 v12; // xmm0_8
  unsigned int v14; // eax
  __int32 v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int32 v19; // ebx
  __int64 v20; // r13
  int v21; // eax
  int v22; // eax
  int v23; // ebx
  __int8 v24; // r14
  __int8 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  signed int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  char v36[4]; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-4Dh]
  __m128i v38; // [rsp+50h] [rbp-49h]
  __int64 v39; // [rsp+60h] [rbp-39h]
  __int64 v40; // [rsp+68h] [rbp-31h]
  __int64 v41; // [rsp+70h] [rbp-29h]
  unsigned __int64 dwShareMode; // [rsp+78h] [rbp-21h]
  _QWORD SecurityAttributes[3]; // [rsp+80h] [rbp-19h] BYREF
  __m128i v44; // [rsp+98h] [rbp-1h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+Fh]

  v10 = (__m128i *)decode_options((__int64)&v44, a4, a5, a6);
  v11 = SR_VEC_LANES(128, v10[1], i64)[0];
  v38 = *v10;
  v12 = SR_VEC_READ_LANES(128, _mm_srli_si128(v38, 8), u64)[0];
  v40 = v11;
  v39 = v11;
  dwShareMode = HIDWORD(v12);
  if ( HIDWORD(v12) == -1 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *a2 = -1;
    return (unsigned int)*errno_sr();
  }
  v14 = alloc_osfhnd();
  *a2 = v14;
  if ( v14 == -1 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *a2 = -1;
    *errno_sr() = 24;
    return (unsigned int)*errno_sr();
  }
  v15 = SR_VEC_LANES(128, v38, i32)[2];
  v16 = SR_VEC_LANES(128, v38, i64)[0];
  v17 = (unsigned int)v39 | HIDWORD(v39);
  *a1 = 1;
  LODWORD(SecurityAttributes[0]) = 24;
  SecurityAttributes[1] = 0;
  LODWORD(SecurityAttributes[2]) = (a4 & 0x80) == 0;
  v41 = v17;
  v18 = ((__int64 (           *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
          a3,
          HIDWORD(v16),
          HIDWORD(v12),
          SecurityAttributes,
          v15,
          v17,
          0);
  v19 = SR_VEC_LANES(128, v38, i32)[1];
  v20 = v18;
  if ( v18 == -1 )
  {
    if ( (SR_VEC_LANES(128, v38, i32)[1] & 0xC0000000) != 0xC0000000
      || (a4 & 1) == 0
      || (v19 = SR_VEC_LANES(128, v38, i32)[1] & 0x7FFFFFFF,
          SR_VEC_LANES(128, v38, i32)[1] &= ~0x80000000,
          v20 = ((__int64 (           *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
                  a3,
                  HIDWORD(SR_VEC_LANES(128, v38, i64)[0]),
                  HIDWORD(v12),
                  SecurityAttributes,
                  SR_VEC_LANES(128, v38, i32)[2],
                  v17,
                  0),
          v20 == -1) )
    {
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
      v21 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v21);
      return (unsigned int)*errno_sr();
    }
  }
  v22 = ((__int64 (           *)(__int64))GetFileType)(v20);
  if ( !v22 )
  {
    v23 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v23);
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
    ((void (           *)(__int64))CloseHandle)(v20);
    if ( !v23 )
      *errno_sr() = 13;
    return (unsigned int)*errno_sr();
  }
  v24 = SR_VEC_LANES(128, v38, i8)[0];
  if ( v22 == 2 )
  {
    v24 = SR_VEC_LANES(128, v38, i8)[0] | 0x40;
  }
  else if ( v22 == 3 )
  {
    v24 = SR_VEC_LANES(128, v38, i8)[0] | 8;
  }
  sub_140261090(*a2, v20);
  v25 = v24 | 1;
  v26 = (__int64)(int)*a2 >> 6;
  v27 = *a2 & 0x3F;
  SR_VEC_LANES(128, v38, i8)[0] = v25;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v26 + 19065401] + 72 * v27 + 56) = v25;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 57) = 0;
  if ( (a4 & 2) != 0 )
  {
    v37 = truncate_ctrl_z_if_present(*a2);
    if ( v37 )
    {
      LODWORD(v28) = *a2;
LABEL_21:
      close_nolock(v28);
      return v37;
    }
  }
  v29 = *a2;
  v44 = v38;
  v36[0] = 0;
  v45 = v40;
  v30 = sub_140265AEC(v29, (__int64)&v44, a4, v36);
  v28 = (int)*a2;
  v37 = v30;
  if ( v30 )
    goto LABEL_21;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v28 >> 6) + 19065401] + 72 * (v28 & 0x3F) + 57) = v36[0];
  v31 = (int)*a2;
  v32 = 9 * (v31 & 0x3F);
  v33 = *(_QWORD *)&dword_140404A6C[2 * (v31 >> 6) + 19065401];
  *(_BYTE *)(v33 + 8 * v32 + 61) &= ~1u;
  *(_BYTE *)(v33 + 8 * v32 + 61) |= BYTE2(a4) & 1;
  if ( (v25 & 0x48) == 0 && (a4 & 8) != 0 )
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) |= 0x20u;
  if ( (v19 & 0xC0000000) == 0xC0000000 && (a4 & 1) != 0 )
  {
    ((void (           *)(__int64))CloseHandle)(v20);
    SR_VEC_LANES(128, v38, i32)[1] = v19 & 0x7FFFFFFF;
    v34 = ((__int64 (           *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
            a3,
            HIDWORD(SR_VEC_LANES(128, v38, i64)[0]),
            (unsigned int)dwShareMode,
            SecurityAttributes,
            SR_VEC_LANES(128, v38, i32)[2],
            v41,
            0);
    if ( v34 == -1 )
    {
      v35 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v35);
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
      free_osfhnd(*a2);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 40) = v34;
  }
  return 0;
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140266818) ----------------------------------------------------
__int64            wsopen_s(unsigned int *a1, __int64 a2, int a3, int a4, int PermissionFlag)
{
  return common_sopen_dispatch__wchar_t(a2, a3, a4, PermissionFlag, a1, 1);
}

// 140266818: invalid function type 'errno_t __cdecl wsopen_s(int *FileHandle, const #49 *FileName, int OpenFlag, int ShareFlag, int PermissionFlag)' has been ignored

//----- (000000014026684C) ----------------------------------------------------
int         isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *errno_sr() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < dword_140404A6C[19065657] )
      return *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)FileHandle >> 6) + 19065401]
                      + 72LL * (FileHandle & 0x3F)
                      + 56)
           & 0x40;
    *errno_sr() = 9;
    sub_14024CF6C();
  }
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402668D4) ----------------------------------------------------
unsigned __int64            __crt_mbstring____mbrtowc_utf8(sr_anon_115 *this, sr_anon_49 *a2,      char *a3, unsigned int *a4)
{
  unsigned __int64 result; // rax
  __int16 v6; // dx
  unsigned int v7[6]; // [rsp+20h] [rbp-18h] BYREF

  result = __crt_mbstring____mbrtoc32_utf8((__int64)v7, (char *)a2, (unsigned __int64)a3, a4);
  if ( result <= 4 )
  {
    v6 = v7[0];
    if ( v7[0] > 0xFFFF )
      v6 = -3;
    if ( this )
      *(_WORD *)this = v6;
  }
  return result;
}


//----- (0000000140266910) ----------------------------------------------------
__int64            __crt_mbstring____mbsrtowcs_utf8(sr_anon_115 *this, char **a2,      char **a3, unsigned int *a4)
{
  char *v4; // rdi
       char **v6; // rbp
  sr_anon_115 *v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int16 v12; // cx
  unsigned int v13; // ecx
  __int64 i; // rbx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a2;
  v6 = a3;
  if ( !this )
  {
    for ( i = 0; ; ++i )
    {
      if ( *v4 )
        v16 = v4[1] ? (v4[2] != 0) + 3LL : 2LL;
      else
        v16 = 1;
      v17 = __crt_mbstring____mbrtoc32_utf8(0, v4, v16, a4);
      if ( v17 == -1 )
        break;
      if ( !v17 )
        return i;
      if ( v17 == 4 )
        ++i;
      v4 += v17;
    }
    goto LABEL_18;
  }
  v9 = this;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( *v4 )
        v10 = v4[1] ? (v4[2] != 0) + 3LL : 2LL;
      else
        v10 = 1;
      v11 = __crt_mbstring____mbrtoc32_utf8((__int64)&v18, v4, v10, a4);
      if ( v11 == -1 )
        break;
      if ( !v11 )
      {
        v4 = nullptr;
        *(_WORD *)v9 = 0;
        goto LABEL_14;
      }
      v12 = v18;
      if ( v18 > 0xFFFF )
      {
        if ( (unsigned __int64)v6 <= 1 )
          goto LABEL_14;
        v13 = v18 - 0x10000;
        v18 = v13;
        v6 = (     char **)((char *)v6 - 1);
        *(_WORD *)v9 = (v13 >> 10) | 0xD800;
        v9 = (sr_anon_115 *)((char *)v9 + 2);
        v12 = v13 & 0x3FF | 0xDC00;
      }
      *(_WORD *)v9 = v12;
      v4 += v11;
      v9 = (sr_anon_115 *)((char *)v9 + 2);
      v6 = (     char **)((char *)v6 - 1);
      if ( !v6 )
        goto LABEL_14;
    }
    *a2 = v4;
LABEL_18:
    *errno_sr() = 42;
    return -1;
  }
LABEL_14:
  *a2 = v4;
  return ((intptr_t)((uintptr_t)v9 - (uintptr_t)this)) >> 1;
}


//----- (0000000140266A88) ----------------------------------------------------
__int64            _mbrtowc_s_l_sr(int *a1, sr_anon_49 *a2, sr_anon_49 *a3,      char *a4, struct _Mbstatet *a5, struct sr_anon_68 *a6)
{
  int v10; // eax
  unsigned __int64 v11; // rbp
  __int64 result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  char v17; // [rsp+48h] [rbp-20h]

  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a3 && a4 && *(_BYTE *)a3 )
  {
    sub_140213644((_LocaleUpdate *)&v15, a6);
    if ( *(_DWORD *)(v16 + 12) == 65001 )
    {
      v10 = __crt_mbstring____mbrtowc_utf8(a2, a3, a4, (unsigned int *)a5);
      if ( a1 )
        *a1 = v10;
LABEL_41:
      result = (unsigned int)*errno_sr();
LABEL_15:
      if ( v17 )
        *(_DWORD *)(v15 + 936) &= ~2u;
      return result;
    }
    v11 = *(int *)(v16 + 8);
    if ( !*(_QWORD *)(v16 + 312) )
    {
      if ( a2 )
        *(_WORD *)a2 = *(unsigned __int8 *)a3;
      goto LABEL_12;
    }
    if ( *(_DWORD *)a5 )
    {
      *((_BYTE *)a5 + 1) = *(_BYTE *)a3;
      if ( (int)v11 > 1 && (unsigned int)sub_140259504() )
      {
        *(_DWORD *)a5 = 0;
LABEL_21:
        if ( a1 )
          *a1 = v11;
        goto LABEL_14;
      }
    }
    else
    {
      if ( !(unsigned int)isleadbyte_l(*(unsigned __int8 *)a3, (struct __crt_locale_pointers *)&v16) )
      {
        if ( (unsigned int)sub_140259504() )
        {
LABEL_12:
          if ( a1 )
            *a1 = 1;
LABEL_14:
          result = 0;
          goto LABEL_15;
        }
LABEL_37:
        *errno_sr() = 42;
        if ( a2 )
          *(_WORD *)a2 = 0;
        if ( a1 )
          *a1 = -1;
        goto LABEL_41;
      }
      if ( (unsigned __int64)a4 < v11 )
      {
        *(_BYTE *)a5 = *(_BYTE *)a3;
        if ( a1 )
          *a1 = -2;
        goto LABEL_14;
      }
      if ( (int)v11 > 1 )
      {
        v13 = -1;
        do
          ++v13;
        while ( *((_BYTE *)a3 + v13) );
        if ( v13 < 0x7FFFFFFF )
        {
          v14 = -1;
          do
            ++v14;
          while ( *((_BYTE *)a3 + v14) );
        }
        if ( (unsigned int)sub_140259504() )
          goto LABEL_21;
      }
      if ( *((_BYTE *)a3 + 1) )
        goto LABEL_21;
    }
    *(_DWORD *)a5 = 0;
    goto LABEL_37;
  }
  if ( a1 )
    *a1 = 0;
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140266CDC) ----------------------------------------------------
__int64            _mbsrtowcs_helper_sr(sr_anon_49 *a1, sr_anon_49 **a2,      char **a3, struct sr_anon_130 *a4)
{
  char *v9; // rdi
  __int64 v10; // rbx
  unsigned int *v11; // r12
  int v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    v9 = (char *)*a2;
    v12 = 0;
    v10 = 0;
    sub_140213644((_LocaleUpdate *)&v13, nullptr);
    v11 = &dword_140404A6C[19065859];
    if ( a4 )
      v11 = (unsigned int *)a4;
    if ( *(_DWORD *)(v14 + 12) == 65001 )
    {
      v10 = __crt_mbstring____mbsrtowcs_utf8(a1, (char **)a2, a3, v11);
    }
    else if ( a1 )
    {
      if ( a3 )
      {
        while ( 1 )
        {
          _mbrtowc_s_l_sr(&v12, a1, (sr_anon_49 *)v9, (     char *)0x7FFFFFFF, (struct _Mbstatet *)v11, (struct sr_anon_68 *)&v14);
          if ( v12 < 0 )
            break;
          if ( !v12 )
          {
            v9 = nullptr;
            goto LABEL_20;
          }
          ++v10;
          v9 += v12;
          a1 = (sr_anon_49 *)((char *)a1 + 2);
          a3 = (     char **)((char *)a3 - 1);
          if ( !a3 )
            goto LABEL_20;
        }
        v10 = -1;
      }
LABEL_20:
      *a2 = (sr_anon_49 *)v9;
    }
    else
    {
      while ( 1 )
      {
        _mbrtowc_s_l_sr(
          &v12,
          (sr_anon_49 *)&v16,
          (sr_anon_49 *)v9,
          (     char *)0x7FFFFFFF,
          (struct _Mbstatet *)v11,
          (struct sr_anon_68 *)&v14);
        if ( v12 < 0 )
          break;
        if ( !v12 )
          goto LABEL_21;
        ++v10;
        v9 += v12;
      }
      v10 = -1;
    }
LABEL_21:
    if ( v15 )
      *(_DWORD *)(v13 + 936) &= ~2u;
    return v10;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return -1;
  }
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140266E3C) ----------------------------------------------------
__int16            btowc_sr(int a1)
{
  __int16 result; // ax
  char v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( a1 == -1 )
    return -1;
  v4 = -1;
  v2 = a1;
  v5 = 0;
  LOWORD(v3) = 0;
  _mbrtowc_s_l_sr(&v4, (sr_anon_49 *)&v3, (sr_anon_49 *)&v2, (     char *)1, (struct _Mbstatet *)&v5, nullptr);
  result = v3;
  if ( v4 < 0 )
    return -1;
  return result;
}

// 140266E3C: invalid function type 'wint_t __cdecl btowc(int Ch)' has been ignored

//----- (0000000140266EA4) ----------------------------------------------------
__int64            mbrlen_sr(sr_anon_49 *a1,      char *a2, struct _Mbstatet *a3)
{
  struct _Mbstatet *v3; // rax
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = -1;
  v3 = (struct _Mbstatet *)&dword_140404A6C[19065855];
  if ( a3 )
    v3 = a3;
  _mbrtowc_s_l_sr(&v5, nullptr, a1, a2, v3, nullptr);
  return v5;
}

// 140266EA4: invalid function type '#66 __cdecl mbrlen(const char *Ch, #66 SizeInBytes, mbstate_t *State)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140266EE4) ----------------------------------------------------
__int64            mbrtowc_sr(__int64 a1, sr_anon_49 *a2, __int64 a3, struct _Mbstatet *a4)
{
  struct _Mbstatet *v4; // rax
  sr_anon_49 *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = -1;
  v4 = (struct _Mbstatet *)&dword_140404A6C[19065857];
  if ( a4 )
    v4 = a4;
  if ( !a2 )
    a3 = 1;
  v6 = a2;
  if ( !a2 )
    v6 = (sr_anon_49 *)Parameters;
  _mbrtowc_s_l_sr(&v8, (sr_anon_49 *)(a1 & -(__int64)(a2 != nullptr)), v6, (     char *)a3, v4, nullptr);
  return v8;
}

// 140266EE4: invalid function type '#66 __cdecl mbrtowc(#49 *DstCh, const char *SrcCh, #66 SizeInBytes, mbstate_t *State)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140266F4C) ----------------------------------------------------
__int64            mbsrtowcs_s_sr(
        unsigned __int64 *a1,
        sr_anon_49 *a2,
             char **a3,
        sr_anon_49 **a4,
             char **N,
        struct sr_anon_130 *State)
{
       char **v9; // r8
  __int64 v10; // rax
  int *v12; // rax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax

  if ( a1 )
    *a1 = -1;
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_5;
LABEL_15:
    v12 = errno_sr();
    v13 = 22;
LABEL_16:
    *v12 = v13;
    sub_14024CF6C();
    return v13;
  }
  if ( !a3 )
    goto LABEL_15;
LABEL_5:
  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( !a4 )
    goto LABEL_15;
  v9 = N;
  if ( N > a3 )
    v9 = a3;
  v10 = _mbsrtowcs_helper_sr(a2, a4, v9, State);
  if ( v10 == -1 )
  {
    if ( a2 )
      *(_WORD *)a2 = 0;
    return (unsigned int)*errno_sr();
  }
  v14 = v10 + 1;
  if ( a2 )
  {
    if ( v14 <= (unsigned __int64)a3 )
    {
      *((_WORD *)a2 + v14 - 1) = 0;
    }
    else
    {
      *(_WORD *)a2 = 0;
      if ( v14 < (unsigned __int64)a3 )
      {
        v12 = errno_sr();
        v13 = 34;
        goto LABEL_16;
      }
    }
  }
  if ( a1 )
    *a1 = v14;
  return 0;
}

// 140266F4C: invalid function type 'errno_t __cdecl mbsrtowcs_s(#66 *Retval, #49 *Dst, #66 Size, const char **PSrc, #66 N, mbstate_t *State)' has been ignored

//----- (0000000140267020) ----------------------------------------------------
__int64            sub_140267020(__int64 a1, unsigned int *a2, unsigned __int16 **a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  LOWORD(a3) = putwch_nolock(**a3);
  sub_140258BB8(*a4);
  return (unsigned __int16)a3;
}

// 1402670F8: using guessed type __int64 __fastcall putwch_nolock(_QWORD);

//----- (0000000140267060) ----------------------------------------------------
__int64            sub_140267060(unsigned int a1, unsigned __int16 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140267020((__int64)&v3, &v5, a2, &v4);
}


//----- (00000001402670BC) ----------------------------------------------------
__int64            putwch(__int16 a1)
{
  unsigned __int16 *v2; // [rsp+20h] [rbp-18h] BYREF
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v2 = (unsigned __int16 *)&v3;
  v5 = 9;
  v6 = 9;
  return sub_140267020((__int64)&v4, &v6, &v2, &v5);
}

// 1402670BC: invalid function type 'wint_t __cdecl putwch(#49 Character)' has been ignored

//----- (00000001402670F8) ----------------------------------------------------
__int64            putwch_nolock(unsigned __int16 a1)
{
  unsigned __int16 Buffer; // [rsp+30h] [rbp+8h] BYREF
  int NumberOfCharsWritten; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a1;
  if ( (unsigned int)_dcrt_lowio_ensure_console_output_initialized()
    && (unsigned int)unknown_libname_946((__int64)&Buffer, 1u, (__int64)&NumberOfCharsWritten) )
  {
    return Buffer;
  }
  else
  {
    return 0xFFFF;
  }
}

// 1402670F8: invalid function type 'wint_t __cdecl putwch_nolock(#49 Character)' has been ignored

//----- (0000000140267134) ----------------------------------------------------
__int64            __crt_mbstring____c32rtomb_utf8(_BYTE *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // r9
  char v5; // r10
  __int64 v6; // r11
  char v7; // al

  if ( !a1 )
    goto LABEL_2;
  if ( !a2 )
  {
    *a1 = 0;
LABEL_2:
    *a3 = 0;
    return 1;
  }
  if ( (a2 & 0xFFFFFF80) == 0 )
  {
    *a1 = a2;
    return 1;
  }
  if ( (a2 & 0xFFFFF800) == 0 )
  {
    v4 = 1;
    v5 = -64;
    goto LABEL_16;
  }
  if ( (a2 & 0xFFFF0000) == 0 )
  {
    if ( a2 - 55296 > 0x7FF )
    {
      v4 = 2;
      v5 = -32;
      goto LABEL_16;
    }
LABEL_19:
    *a3 = 0;
    *errno_sr() = 42;
    return -1;
  }
  if ( (a2 & 0xFFE00000) != 0 || a2 > 0x10FFFF )
    goto LABEL_19;
  v4 = 3;
  v5 = -16;
LABEL_16:
  v6 = v4;
  do
  {
    v7 = a2;
    a2 >>= 6;
    a1[v6--] = v7 & 0x3F | 0x80;
  }
  while ( v6 );
  *a1 = v5 | a2;
  *a3 = 0;
  return v4 + 1;
}


//----- (00000001402671F0) ----------------------------------------------------
unsigned __int64            __crt_mbstring__return_illegal_sequence(sr_anon_115 *this, struct _Mbstatet *a2)
{
  *(_QWORD *)this = 0;
  *errno_sr() = 42;
  return -1;
}


//----- (0000000140267214) ----------------------------------------------------
__int64            _acrt_fp_strflt_to_string(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // r11d
  int *v5; // rax
  unsigned int v6; // ebx
  int v8; // eax
  char *v9; // rbx
  char *v10; // r8
  char *v11; // rax
  char v12; // dl
  __int64 v13; // r8

  v4 = a3;
  if ( !a1 || !a2 )
    goto LABEL_2;
  v8 = 0;
  *(_BYTE *)a1 = 0;
  if ( a3 > 0 )
    v8 = a3;
  if ( a2 <= v8 + 1 )
  {
    v5 = errno_sr();
    v6 = 34;
    goto LABEL_3;
  }
  if ( !a4 )
  {
LABEL_2:
    v5 = errno_sr();
    v6 = 22;
LABEL_3:
    *v5 = v6;
    sub_14024CF6C();
    return v6;
  }
  v9 = *(char **)(a4 + 8);
  v10 = (char *)(a1 + 1);
  *(_BYTE *)a1 = 48;
  while ( v4 > 0 )
  {
    v11 = v9 + 1;
    v12 = 48;
    if ( *v9 )
      v12 = *v9;
    else
      v11 = v9;
    *v10 = v12;
    v9 = v11;
    ++v10;
    --v4;
  }
  *v10 = 0;
  if ( v4 >= 0 && *v9 >= 53 )
  {
    while ( *--v10 == 57 )
      *v10 = 48;
    ++*v10;
  }
  if ( *(_BYTE *)a1 == 49 )
  {
    ++*(_DWORD *)(a4 + 4);
  }
  else
  {
    v13 = -1;
    do
      ++v13;
    while ( *(_BYTE *)(a1 + v13 + 1) );
    sub_1401FC920((__m128i *)a1, (     __m128i *)(a1 + 1), v13 + 1);
  }
  return 0;
}


//----- (00000001402672F8) ----------------------------------------------------
__int64            sub_1402672F8(double a1, unsigned int a2, int *a3, _BYTE *a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  double v7; // xmm0_8
  double v8; // xmm0_8
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // r8d
  unsigned int v12; // ebx
  unsigned int v13; // r9d
  int v14; // edi
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // r8
  unsigned int v19; // eax
  char v20; // cl
  unsigned int v21; // r15d
  unsigned int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int32 v25; // r10d
  __int32 v26; // edx
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned int v31; // ebx
  unsigned int v32; // r9d
  int v33; // edi
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  char v37; // cl
  unsigned int v38; // r11d
  __int64 v39; // rax
  __int64 v40; // rcx
  __int32 v41; // r10d
  __int32 v42; // edx
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // eax
  int v48; // eax
  unsigned int v49; // r8d
  unsigned int v50; // eax
  __int64 v51; // r11
  __int64 v52; // r9
  __int32 v53; // r10d
  unsigned __int32 v54; // ecx
  unsigned int v55; // esi
  unsigned int v56; // edi
  int v57; // eax
  int v58; // eax
  int v59; // r8d
  unsigned int v60; // eax
  __int64 v61; // r11
  __int64 v62; // r9
  __int32 v63; // r10d
  unsigned __int32 v64; // ecx
  unsigned int v65; // esi
  unsigned int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // r13d
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rsi
  unsigned __int64 v73; // rbx
  unsigned int v74; // r10d
  unsigned int v75; // r9d
  __int64 v76; // r10
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  char v79; // al
  __int64 v80; // rbx
  unsigned int v81; // r9d
  __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  unsigned int v84; // r13d
  __m128i *v85; // rcx
  __m128i *v86; // rdx
  unsigned int v87; // r9d
  __int64 v88; // rsi
  unsigned __int64 v89; // r11
  __int64 v90; // rdi
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rax
  unsigned int v95; // ecx
  unsigned int v96; // eax
  unsigned int v97; // r9d
  __int64 v98; // rdx
  unsigned __int64 v99; // rcx
  _BYTE *v100; // rsi
  _BYTE *v101; // rbx
  unsigned int v102; // r9d
  __int64 v103; // rdx
  unsigned __int64 v104; // r8
  int v105; // ecx
  unsigned int v106; // eax
  unsigned int v107; // r13d
  int v108; // eax
  __int64 v109; // rax
  __int64 v110; // rdi
  __int64 v111; // rsi
  unsigned __int64 v112; // rbx
  unsigned int v113; // r10d
  unsigned int v114; // r9d
  __int64 v115; // r10
  __int64 v116; // rdx
  unsigned __int64 v117; // rcx
  char v118; // al
  __int64 v119; // rbx
  unsigned int v120; // r9d
  __int64 v121; // rdx
  unsigned __int64 v122; // rcx
  unsigned int v123; // r13d
  __m128i *v124; // rcx
  __m128i *v125; // rdx
  unsigned int v126; // r9d
  __int64 v127; // rsi
  unsigned __int64 v128; // r11
  __int64 v129; // rdi
  __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rax
  unsigned int v134; // ecx
  unsigned int v135; // eax
  unsigned int v136; // r9d
  __int64 v137; // rdx
  unsigned __int64 v138; // rcx
  int v139; // eax
  int v140; // edi
  unsigned __int64 v141; // r8
  unsigned int v142; // r9d
  __int64 v143; // rdx
  unsigned __int64 v144; // r8
  unsigned __int64 v145; // rax
  _BYTE *i; // rdi
  unsigned int v147; // r10d
       struct __crt_strtox__big_integer *v148; // r8
  unsigned int v149; // r9d
  __int64 v150; // rdx
  unsigned __int64 v151; // rcx
  unsigned int v152; // r8d
  unsigned int j; // r9d
  char v154; // cl
  __int64 v155; // rax
  __int64 v157; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v158; // [rsp+20h] [rbp-E0h]
  unsigned int v159; // [rsp+24h] [rbp-DCh]
  __m128i *v160; // [rsp+28h] [rbp-D8h]
  int v161; // [rsp+30h] [rbp-D0h]
  unsigned int v162; // [rsp+34h] [rbp-CCh]
  double v163; // [rsp+38h] [rbp-C8h]
  unsigned int v164; // [rsp+40h] [rbp-C0h]
  _BYTE *v165; // [rsp+48h] [rbp-B8h]
  __m128i *v166; // [rsp+50h] [rbp-B0h]
  int *v167; // [rsp+58h] [rbp-A8h]
  __int64 v168; // [rsp+60h] [rbp-A0h]
  unsigned int v169; // [rsp+70h] [rbp-90h] BYREF
  __m128i Destination[28]; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v171; // [rsp+240h] [rbp+140h] BYREF
  __m128i v172; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v173; // [rsp+410h] [rbp+310h]
  __m128i Source[28]; // [rsp+414h] [rbp+314h] BYREF
  unsigned int v175; // [rsp+5E0h] [rbp+4E0h]
  __m128i v176; // [rsp+5E4h] [rbp+4E4h] BYREF
  __int64 v177; // [rsp+7B0h] [rbp+6B0h]

  v168 = a5;
  v167 = a3;
  v164 = a2;
  v163 = a1;
  v165 = a4;
  v5 = (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL) + (-(__int64)(((*(_QWORD *)&a1 >> 52) & 0x7FFLL) != 0) & 0x10000000000000LL);
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) + 2 - (((*(_QWORD *)&a1 >> 52) & 0x7FFLL) != 0);
  v7 = log10(a1);
  v8 = ceil(v7);
  SR_VEC_LANES(128, Destination[0], i32)[0] = v5;
  v9 = HIDWORD(v5);
  SR_VEC_LANES(128, Destination[0], i32)[1] = v9;
  v158 = (((int)v8 - 0x7FFFFFFF) & 0xFFFFFFFE) != 0 ? (int)v8 : 0;
  v10 = ((_DWORD)v9 != 0) + 1;
  v169 = v10;
  if ( v6 < 0x434 )
  {
    if ( v6 != 54 )
    {
      SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
      v173 = 2;
      if ( (_DWORD)v9 )
      {
        v46 = 0;
        while ( SR_VEC_LANES(128, Source[0], i32)[v46] == SR_VEC_LANES(128, Destination[0], i32)[v46] )
        {
          if ( ++v46 == 2 )
          {
            v15 = !_BitScanReverse((unsigned int *)&v47, v9);
            LODWORD(v160) = 0;
            if ( v15 )
              v48 = 0;
            else
              v48 = v47 + 1;
            v21 = ((_DWORD)v9 != 0) + 1;
            v49 = 32 - v48;
            v50 = v21;
            while ( 1 )
            {
              v51 = v50;
              v52 = v50 - 1;
              v53 = v50 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v50];
              v54 = (unsigned int)v52 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v52];
              --v50;
              SR_VEC_LANES(128, Destination[0], i32)[v51] = (4 * v53) | (v54 >> 30);
              if ( (_DWORD)v52 == -1 )
                break;
              v10 = v169;
            }
            if ( v49 < 2 )
              v21 = ((_DWORD)v9 != 0) + 2;
            v55 = 1078 - v6;
            v169 = v21;
            v56 = v55 >> 5;
            sub_1401FCD30((void *)(uintptr_t)(Source), 0, 4LL * (v55 >> 5));
            SR_VEC_LANES(128, Source[0], i32)[v55 >> 5] = 1 << (v55 & 0x1F);
            goto LABEL_80;
          }
        }
      }
    }
    LODWORD(v160) = 0;
    v15 = !_BitScanReverse((unsigned int *)&v57, SR_VEC_LANES(128, Destination[0], u32)[(_DWORD)v9 != 0]);
    if ( v15 )
      v58 = 0;
    else
      v58 = v57 + 1;
    v21 = ((_DWORD)v9 != 0) + 1;
    v59 = 32 - v58;
    v60 = v21;
    while ( 1 )
    {
      v61 = v60;
      v62 = v60 - 1;
      v63 = v60 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v60];
      v64 = (unsigned int)v62 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v62];
      --v60;
      SR_VEC_LANES(128, Destination[0], i32)[v61] = (2 * v63) | (v64 >> 31);
      if ( (_DWORD)v62 == -1 )
        break;
      v10 = v169;
    }
    if ( !v59 )
      v21 = ((_DWORD)v9 != 0) + 2;
    v65 = 1077 - v6;
    v169 = v21;
    v56 = v65 >> 5;
    sub_1401FCD30((void *)(uintptr_t)(Source), 0, 4LL * (v65 >> 5));
    SR_VEC_LANES(128, Source[0], i32)[v65 >> 5] = 1 << (v65 & 0x1F);
LABEL_80:
    v30 = v56 + 1;
    v18 = 4LL * (v56 + 1);
    v173 = v56 + 1;
    v171 = v56 + 1;
    if ( v18 )
    {
      if ( v18 > 0x1CC )
      {
        sub_1401FCD30((void *)(uintptr_t)(&v172), 0, 0x1CCu);
        *errno_sr() = 34;
        sub_14024CF6C();
      }
      else
      {
        sub_1401FC920(&v172, Source, v18);
      }
      v30 = v171;
    }
  }
  else
  {
    SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
    v173 = 2;
    if ( (_DWORD)v9 )
    {
      v11 = 0;
      while ( SR_VEC_LANES(128, Source[0], i32)[v11] == SR_VEC_LANES(128, Destination[0], i32)[v11] )
      {
        if ( ++v11 == 2 )
        {
          LODWORD(v160) = 0;
          v12 = (v6 - 1074) & 0x1F;
          v13 = (v6 - 1074) >> 5;
          v14 = (1LL << (32 - ((v6 - 50) & 0x1F))) - 1;
          v15 = !_BitScanReverse((unsigned int *)&v16, SR_VEC_LANES(128, Destination[0], u32)[v10 - 1]);
          if ( v15 )
            v17 = 0;
          else
            v17 = v16 + 1;
          v18 = (unsigned int)(32 - v17);
          v19 = v10 + v13;
          if ( v10 + v13 != 115 || (v20 = 1, v12 <= (unsigned int)v18) )
            v20 = 0;
          if ( v19 > 0x73 || v20 )
          {
            v21 = 0;
            v169 = 0;
          }
          else
          {
            v21 = 114;
            if ( v19 < 0x72 )
              v21 = v10 + v13;
            v22 = v21;
            while ( v22 >= v13 )
            {
              v23 = v22 - v13;
              v24 = (unsigned int)(v23 - 1);
              v25 = (unsigned int)v23 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v23];
              v26 = (unsigned int)v24 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v24];
              v27 = v22--;
              SR_VEC_LANES(128, Destination[0], i32)[v27] = ((v14 & v25) << v12) | ((~v14 & (unsigned int)v26) >> (32 - v12));
              if ( v22 == -1 )
                break;
              v10 = v169;
            }
            v28 = 0;
            if ( v13 )
            {
              do
              {
                v29 = v28++;
                SR_VEC_LANES(128, Destination[0], i32)[v29] = 0;
              }
              while ( v28 != v13 );
            }
            if ( v12 > (unsigned int)v18 )
              ++v21;
            v169 = v21;
          }
          v30 = 1;
          SR_VEC_LANES(128, Source[0], i32)[1] = 0;
          v171 = 1;
          v173 = 1;
          SR_VEC_LANES(128, v172, i32)[0] = 4;
          goto LABEL_100;
        }
      }
    }
    LODWORD(v160) = 0;
    v31 = (v6 - 1075) & 0x1F;
    v32 = (v6 - 1075) >> 5;
    v33 = (1LL << (32 - ((v6 - 51) & 0x1F))) - 1;
    v15 = !_BitScanReverse((unsigned int *)&v34, SR_VEC_LANES(128, Destination[0], u32)[v10 - 1]);
    if ( v15 )
      v35 = 0;
    else
      v35 = v34 + 1;
    v18 = (unsigned int)(32 - v35);
    v36 = v10 + v32;
    if ( v10 + v32 != 115 || (v37 = 1, v31 <= (unsigned int)v18) )
      v37 = 0;
    if ( v36 > 0x73 || v37 )
    {
      v21 = 0;
      v169 = 0;
    }
    else
    {
      v21 = 114;
      if ( v36 < 0x72 )
        v21 = v10 + v32;
      v38 = v21;
      while ( v38 >= v32 )
      {
        v39 = v38 - v32;
        v40 = (unsigned int)(v39 - 1);
        v41 = (unsigned int)v39 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v39];
        v42 = (unsigned int)v40 >= v10 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v40];
        v43 = v38--;
        SR_VEC_LANES(128, Destination[0], i32)[v43] = ((v33 & v41) << v31) | ((~v33 & (unsigned int)v42) >> (32 - v31));
        if ( v38 == -1 )
          break;
        v10 = v169;
      }
      v44 = 0;
      if ( v32 )
      {
        do
        {
          v45 = v44++;
          SR_VEC_LANES(128, Destination[0], i32)[v45] = 0;
        }
        while ( v44 != v32 );
      }
      if ( v31 > (unsigned int)v18 )
        ++v21;
      v169 = v21;
    }
    v30 = 1;
    SR_VEC_LANES(128, Source[0], i32)[1] = 0;
    v171 = 1;
    v173 = 1;
    SR_VEC_LANES(128, v172, i32)[0] = 2;
  }
LABEL_100:
  v66 = v158;
  if ( (v158 & 0x80000000) == 0 )
  {
    v67 = v158 / 0xA;
    v162 = v158 / 0xA;
    v68 = v158 / 0xA;
    v159 = v158 / 0xA;
    if ( !(v158 / 0xA) )
    {
LABEL_164:
      v95 = v66 - 10 * v67;
      if ( v95 )
      {
        v96 = dword_140285688[v95 - 1];
        if ( !v96 )
          goto LABEL_180;
        if ( v96 != 1 && v30 )
        {
          LODWORD(v18) = 0;
          v97 = 0;
          do
          {
            v98 = v97++;
            v99 = (unsigned int)v18 + v96 * (unsigned __int64)SR_VEC_LANES(128, v172, u32)[v98];
            SR_VEC_LANES(128, v172, i32)[v98] = v99;
            v18 = HIDWORD(v99);
          }
          while ( v97 != v30 );
          if ( HIDWORD(v99) )
          {
            if ( v171 >= 0x73 )
              goto LABEL_180;
            SR_VEC_LANES(128, v172, i32)[v171] = HIDWORD(v99);
            v30 = ++v171;
          }
          else
          {
            v30 = v171;
          }
        }
      }
LABEL_173:
      v100 = v165;
      v101 = v165;
      if ( v21 )
      {
        LODWORD(v18) = 0;
        v102 = 0;
        do
        {
          v103 = v102++;
          v104 = (unsigned int)v18 + 10LL * SR_VEC_LANES(128, Destination[0], u32)[v103];
          SR_VEC_LANES(128, Destination[0], i32)[v103] = v104;
          v18 = HIDWORD(v104);
        }
        while ( v102 != v21 );
        if ( (_DWORD)v18 )
        {
          if ( v169 >= 0x73 )
          {
            v173 = 0;
            v169 = 0;
            sub_1402697BC(Destination, 460, Source, 0);
          }
          else
          {
            SR_VEC_LANES(128, Destination[0], i32)[v169++] = v18;
          }
        }
      }
      goto LABEL_256;
    }
    while ( 1 )
    {
      v69 = v68;
      if ( v68 > 0x26 )
        v69 = 38;
      v161 = v69;
      v70 = (unsigned int)(v69 - 1);
      v71 = (unsigned int)v70;
      v72 = (unsigned __int8)byte_140293703[4 * v70];
      v73 = 4LL * (unsigned __int8)byte_140293702[4 * v70];
      v173 = v72 + (unsigned __int8)byte_140293702[4 * v70];
      sub_1401FCD30((void *)(uintptr_t)(Source), 0, v73);
      sub_1401FC920(
        (__m128i *)((char *)Source + v73),
        (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * v71]),
        4 * v72);
      v74 = v173;
      if ( v173 > 1 )
      {
        if ( v30 > 1 )
        {
          v175 = 0;
          v84 = v30;
          if ( v173 < v30 )
            v84 = v173;
          v85 = Source;
          if ( v173 >= v30 )
            v85 = &v172;
          v163 = *(double *)&v85;
          v86 = &v172;
          v87 = 0;
          if ( v173 >= v30 )
            v86 = Source;
          v160 = v86;
          if ( v173 < v30 )
            v74 = v30;
          v30 = 0;
          while ( 1 )
          {
            v88 = SR_VEC_PTR_LANES(128, v85, u32)[v87];
            if ( (_DWORD)v88 )
            {
              LODWORD(v89) = 0;
              v18 = v87;
              if ( v74 )
              {
                while ( (_DWORD)v18 != 115 )
                {
                  v90 = (unsigned int)v18;
                  if ( (_DWORD)v18 == v30 )
                  {
                    SR_VEC_LANES(128, v176, i32)[(unsigned int)v18] = 0;
                    v175 = v18 + 1;
                  }
                  v91 = (unsigned int)v18 - v87;
                  v18 = (unsigned int)(v18 + 1);
                  v92 = SR_VEC_LANES(128, v176, u32)[v90] + (unsigned int)v89 + v88 * SR_VEC_PTR_LANES(128, v86, u32)[v91];
                  SR_VEC_LANES(128, v176, i32)[v90] = v92;
                  v30 = v175;
                  v89 = HIDWORD(v92);
                  if ( (_DWORD)v18 - v87 == v74 )
                    break;
                  v86 = v160;
                }
                if ( (_DWORD)v89 )
                {
                  while ( (_DWORD)v18 != 115 )
                  {
                    v93 = (unsigned int)v18;
                    if ( (_DWORD)v18 == v30 )
                    {
                      SR_VEC_LANES(128, v176, i32)[(unsigned int)v18] = 0;
                      v175 = v18 + 1;
                    }
                    v94 = SR_VEC_LANES(128, v176, u32)[(unsigned int)v18];
                    v18 = (unsigned int)(v18 + 1);
                    SR_VEC_LANES(128, v176, i32)[v93] = v94 + v89;
                    v30 = v175;
                    LODWORD(v89) = (v94 + (unsigned __int64)(unsigned int)v89) >> 32;
                    if ( !(_DWORD)v89 )
                      goto LABEL_151;
                  }
LABEL_180:
                  v30 = 0;
                  v171 = 0;
                  goto LABEL_173;
                }
              }
LABEL_151:
              if ( (_DWORD)v18 == 115 )
                goto LABEL_180;
              v85 = *(__m128i **)&v163;
              v86 = v160;
            }
            else if ( v87 == v30 )
            {
              v30 = v87 + 1;
              SR_VEC_LANES(128, v176, i32)[v87] = 0;
              v175 = v87 + 1;
            }
            if ( ++v87 == v84 )
            {
              v18 = 4LL * v30;
              v171 = v30;
              if ( v18 )
              {
                if ( v18 > 0x1CC )
                {
                  sub_1401FCD30((void *)(uintptr_t)(&v172), 0, 0x1CCu);
                  *errno_sr() = 34;
                  sub_14024CF6C();
                }
                else
                {
                  sub_1401FC920(&v172, &v176, v18);
                }
                v30 = v171;
              }
              v68 = v159;
              goto LABEL_160;
            }
          }
        }
        v80 = SR_VEC_LANES(128, v172, u32)[0];
        v18 = 4LL * v173;
        v30 = v173;
        v171 = v173;
        if ( v18 )
        {
          if ( v18 > 0x1CC )
          {
            sub_1401FCD30((void *)(uintptr_t)(&v172), 0, 0x1CCu);
            *errno_sr() = 34;
            sub_14024CF6C();
          }
          else
          {
            sub_1401FC920(&v172, Source, v18);
          }
          v30 = v171;
        }
        if ( !(_DWORD)v80 )
        {
LABEL_106:
          v30 = 0;
          v171 = 0;
LABEL_160:
          v79 = 1;
          goto LABEL_161;
        }
        if ( (_DWORD)v80 == 1 || !v30 )
          goto LABEL_160;
        LODWORD(v18) = 0;
        v81 = 0;
        do
        {
          v82 = v81++;
          v83 = (unsigned int)v18 + v80 * SR_VEC_LANES(128, v172, u32)[v82];
          SR_VEC_LANES(128, v172, i32)[v82] = v83;
          v18 = HIDWORD(v83);
        }
        while ( v81 != v30 );
      }
      else
      {
        if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
          goto LABEL_106;
        if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !v30 )
          goto LABEL_160;
        LODWORD(v18) = 0;
        v75 = 0;
        v76 = SR_VEC_LANES(128, Source[0], u32)[0];
        do
        {
          v77 = v75++;
          v78 = (unsigned int)v18 + v76 * SR_VEC_LANES(128, v172, u32)[v77];
          SR_VEC_LANES(128, v172, i32)[v77] = v78;
          v18 = HIDWORD(v78);
        }
        while ( v75 != v30 );
      }
      if ( !(_DWORD)v18 )
      {
        v30 = v171;
        goto LABEL_160;
      }
      if ( v171 < 0x73 )
      {
        SR_VEC_LANES(128, v172, i32)[v171] = v18;
        v30 = ++v171;
        goto LABEL_160;
      }
      v30 = 0;
      v171 = 0;
      v79 = 0;
LABEL_161:
      if ( !v79 )
        goto LABEL_180;
      v68 -= v161;
      v159 = v68;
      if ( !v68 )
      {
        v67 = v162;
        v66 = v158;
        goto LABEL_164;
      }
    }
  }
  v105 = -v158;
  v161 = -v158;
  v106 = -v158 / 0xA;
  LODWORD(v160) = v106;
  v107 = v106;
  v159 = v106;
  if ( !v106 )
    goto LABEL_244;
  while ( 1 )
  {
    v108 = v107;
    if ( v107 > 0x26 )
      v108 = 38;
    v162 = v108;
    v109 = (unsigned int)(v108 - 1);
    v110 = (unsigned int)v109;
    v111 = (unsigned __int8)byte_140293703[4 * v109];
    v112 = 4LL * (unsigned __int8)byte_140293702[4 * v109];
    v173 = v111 + (unsigned __int8)byte_140293702[4 * v109];
    sub_1401FCD30((void *)(uintptr_t)(Source), 0, v112);
    sub_1401FC920(
      (__m128i *)((char *)Source + v112),
      (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * v110]),
      4 * v111);
    v113 = v173;
    if ( v173 <= 1 )
    {
      if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
        goto LABEL_186;
      if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !v21 )
        goto LABEL_240;
      LODWORD(v18) = 0;
      v114 = 0;
      v115 = SR_VEC_LANES(128, Source[0], u32)[0];
      do
      {
        v116 = v114++;
        v117 = (unsigned int)v18 + v115 * SR_VEC_LANES(128, Destination[0], u32)[v116];
        SR_VEC_LANES(128, Destination[0], i32)[v116] = v117;
        v18 = HIDWORD(v117);
      }
      while ( v114 != v21 );
      goto LABEL_191;
    }
    if ( v21 > 1 )
      break;
    v119 = SR_VEC_LANES(128, Destination[0], u32)[0];
    v18 = 4LL * v173;
    v21 = v173;
    v169 = v173;
    if ( v18 )
    {
      if ( v18 > 0x1CC )
      {
        sub_1401FCD30((void *)(uintptr_t)(Destination), 0, 0x1CCu);
        *errno_sr() = 34;
        sub_14024CF6C();
      }
      else
      {
        sub_1401FC920(Destination, Source, v18);
      }
      v21 = v169;
    }
    if ( !(_DWORD)v119 )
    {
LABEL_186:
      v21 = 0;
      v169 = 0;
LABEL_240:
      v118 = 1;
      goto LABEL_241;
    }
    if ( (_DWORD)v119 == 1 || !v21 )
      goto LABEL_240;
    LODWORD(v18) = 0;
    v120 = 0;
    do
    {
      v121 = v120++;
      v122 = (unsigned int)v18 + v119 * SR_VEC_LANES(128, Destination[0], u32)[v121];
      SR_VEC_LANES(128, Destination[0], i32)[v121] = v122;
      v18 = HIDWORD(v122);
    }
    while ( v120 != v21 );
LABEL_191:
    if ( !(_DWORD)v18 )
    {
      v21 = v169;
      goto LABEL_240;
    }
    if ( v169 < 0x73 )
    {
      SR_VEC_LANES(128, Destination[0], i32)[v169] = v18;
      v21 = ++v169;
      goto LABEL_240;
    }
    v21 = 0;
    v169 = 0;
    v118 = 0;
LABEL_241:
    if ( !v118 )
      goto LABEL_254;
    v107 -= v162;
    v159 = v107;
    if ( !v107 )
    {
      v105 = v161;
      v106 = (unsigned int)v160;
LABEL_244:
      v134 = v105 - 10 * v106;
      if ( !v134 )
        goto LABEL_173;
      v135 = dword_140285688[v134 - 1];
      if ( v135 )
      {
        if ( v135 == 1 || !v21 )
          goto LABEL_173;
        LODWORD(v18) = 0;
        v136 = 0;
        do
        {
          v137 = v136++;
          v138 = (unsigned int)v18 + v135 * (unsigned __int64)SR_VEC_LANES(128, Destination[0], u32)[v137];
          SR_VEC_LANES(128, Destination[0], i32)[v137] = v138;
          v18 = HIDWORD(v138);
        }
        while ( v136 != v21 );
        if ( !HIDWORD(v138) )
        {
          v21 = v169;
          goto LABEL_173;
        }
        if ( v169 < 0x73 )
        {
          SR_VEC_LANES(128, Destination[0], i32)[v169] = HIDWORD(v138);
          v21 = ++v169;
          goto LABEL_173;
        }
      }
      goto LABEL_254;
    }
  }
  v175 = 0;
  v123 = v21;
  if ( v173 < v21 )
    v123 = v173;
  v124 = Source;
  if ( v173 >= v21 )
    v124 = Destination;
  v166 = v124;
  v125 = Destination;
  v126 = 0;
  if ( v173 >= v21 )
    v125 = Source;
  v163 = *(double *)&v125;
  if ( v173 < v21 )
    v113 = v21;
  v21 = 0;
  while ( 1 )
  {
    v127 = SR_VEC_PTR_LANES(128, v124, u32)[v126];
    if ( (_DWORD)v127 )
      break;
    if ( v126 == v21 )
    {
      v21 = v126 + 1;
      SR_VEC_LANES(128, v176, i32)[v126] = 0;
      v175 = v126 + 1;
    }
LABEL_233:
    if ( ++v126 == v123 )
    {
      v18 = 4LL * v21;
      v169 = v21;
      if ( v18 )
      {
        if ( v18 > 0x1CC )
        {
          sub_1401FCD30((void *)(uintptr_t)(Destination), 0, 0x1CCu);
          *errno_sr() = 34;
          sub_14024CF6C();
        }
        else
        {
          sub_1401FC920(Destination, &v176, v18);
        }
        v21 = v169;
      }
      v107 = v159;
      goto LABEL_240;
    }
  }
  LODWORD(v128) = 0;
  v18 = v126;
  if ( !v113 )
    goto LABEL_231;
  while ( (_DWORD)v18 != 115 )
  {
    v129 = (unsigned int)v18;
    if ( (_DWORD)v18 == v21 )
    {
      SR_VEC_LANES(128, v176, i32)[(unsigned int)v18] = 0;
      v175 = v18 + 1;
    }
    v130 = (unsigned int)v18 - v126;
    v18 = (unsigned int)(v18 + 1);
    v131 = SR_VEC_LANES(128, v176, u32)[v129] + (unsigned int)v128 + v127 * SR_VEC_PTR_LANES(128, v125, u32)[v130];
    SR_VEC_LANES(128, v176, i32)[v129] = v131;
    v21 = v175;
    v128 = HIDWORD(v131);
    if ( (_DWORD)v18 - v126 == v113 )
      break;
    v125 = *(__m128i **)&v163;
  }
  if ( !(_DWORD)v128 )
  {
LABEL_231:
    if ( (_DWORD)v18 == 115 )
      goto LABEL_254;
    v124 = v166;
    v125 = *(__m128i **)&v163;
    goto LABEL_233;
  }
  while ( (_DWORD)v18 != 115 )
  {
    v132 = (unsigned int)v18;
    if ( (_DWORD)v18 == v21 )
    {
      SR_VEC_LANES(128, v176, i32)[(unsigned int)v18] = 0;
      v175 = v18 + 1;
    }
    v133 = SR_VEC_LANES(128, v176, u32)[(unsigned int)v18];
    v18 = (unsigned int)(v18 + 1);
    SR_VEC_LANES(128, v176, i32)[v132] = v133 + v128;
    v21 = v175;
    LODWORD(v128) = (v133 + (unsigned __int64)(unsigned int)v128) >> 32;
    if ( !(_DWORD)v128 )
      goto LABEL_231;
  }
LABEL_254:
  v100 = v165;
  v101 = v165;
  v169 = 0;
LABEL_256:
  v139 = sub_1402320F0(
           (__crt_strtox *)&v169,
           (struct __crt_strtox__big_integer *)&v171,
           (     struct __crt_strtox__big_integer *)v18);
  v140 = v158;
  if ( v139 == 10 )
  {
    v140 = v158 + 1;
    *v100 = 49;
    v101 = v100 + 1;
    if ( v30 )
    {
      LODWORD(v141) = 0;
      v142 = 0;
      do
      {
        v143 = v142++;
        v144 = (unsigned int)v141 + 10LL * SR_VEC_LANES(128, v172, u32)[v143];
        SR_VEC_LANES(128, v172, i32)[v143] = v144;
        v141 = HIDWORD(v144);
      }
      while ( v142 != v30 );
      if ( (_DWORD)v141 )
      {
        if ( v171 >= 0x73 )
        {
          v173 = 0;
          v171 = 0;
          sub_1402697BC(&v172, 460, Source, 0);
        }
        else
        {
          SR_VEC_LANES(128, v172, i32)[v171++] = v141;
        }
      }
    }
  }
  else if ( v139 )
  {
    v101 = v100 + 1;
    *v100 = v139 + 48;
  }
  else
  {
    v140 = v158 - 1;
  }
  *v167 = v140;
  v145 = v164;
  if ( v140 >= 0 && v164 <= 0x7FFFFFFF )
    v145 = v140 + v164;
  if ( v168 - 1 < v145 )
    v145 = v168 - 1;
  for ( i = &v100[v145]; v101 != i; v101 += v155 )
  {
    v147 = v169;
    if ( !v169 )
      break;
    LODWORD(v148) = 0;
    v149 = 0;
    do
    {
      v150 = v149++;
      v151 = (unsigned int)v148 + 1000000000LL * SR_VEC_LANES(128, Destination[0], u32)[v150];
      SR_VEC_LANES(128, Destination[0], i32)[v150] = v151;
      v148 = (     struct __crt_strtox__big_integer *)HIDWORD(v151);
    }
    while ( v149 != v147 );
    if ( HIDWORD(v151) )
    {
      if ( v169 >= 0x73 )
      {
        v173 = 0;
        v169 = 0;
        sub_1402697BC(Destination, 460, Source, 0);
      }
      else
      {
        SR_VEC_LANES(128, Destination[0], i32)[v169++] = HIDWORD(v151);
      }
    }
    v152 = sub_1402320F0((__crt_strtox *)&v169, (struct __crt_strtox__big_integer *)&v171, v148);
    for ( j = 8; j != -1; --j )
    {
      v154 = v152 % 0xA + 48;
      v152 /= 0xAu;
      if ( (int)i - (int)v101 >= j )
        v101[j] = v154;
    }
    v155 = i - v101;
    if ( i - v101 > 9 )
      v155 = 9;
  }
  *v101 = 0;
  return 0; /* the function has no caller */
}

// 1402674A1: conditional instruction was optimized away because r15d.4<73u
// 1402675D2: conditional instruction was optimized away because r15d.4<73u
// 140267B03: conditional instruction was optimized away because r13d.4>=2u
// 140267FE5: conditional instruction was optimized away because r13d.4>=2u
// 14026824A: variable 'v18' is possibly undefined
// 1402683C0: variable 'v148' is possibly undefined
// 1402697BC: using guessed type __int64 __fastcall sub_1402697BC(_QWORD, _QWORD, _QWORD, _QWORD);
// 140285688: using guessed type int dword_140285688[10];
// 140293700: using guessed type __int16 word_140293700[];

//----- (0000000140268448) ----------------------------------------------------
_anonymous_namespace___scoped_fp_state_reset *           sub_140268448(
        _anonymous_namespace___scoped_fp_state_reset *this)
{
  int v2; // edi
  bool v3; // zf

  fegetenv(this);
  v2 = *(_DWORD *)this & 0x1F;
  v3 = v2 == 31;
  if ( v2 != 31 )
  {
    feholdexcept_sr(this);
    v3 = v2 == 31;
  }
  *((_BYTE *)this + 8) = !v3;
  return this;
}


//----- (0000000140268484) ----------------------------------------------------
int            sub_140268484(_anonymous_namespace___scoped_fp_state_reset *this)
{
  int result; // eax

  if ( *((_BYTE *)this + 8) )
    return fesetenv_sr(this);
  return result;
}


//----- (0000000140268520) ----------------------------------------------------
__int64            __crt_strtox__make_big_integer_power_of_two(__int64 a1, unsigned int a2)
{
  char v2; // di
  __int64 v4; // rsi

  v2 = a2;
  v4 = a2 >> 5;
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 4)), 0, 4 * v4);
  *(_DWORD *)(4 * v4 + a1 + 4) = 1 << (v2 & 0x1F);
  *(_DWORD *)a1 = v4 + 1;
  return a1;
}


//----- (0000000140268588) ----------------------------------------------------
__int64            _acrt_fltout(__int64 a1, int a2, __int64 a3, _BYTE *a4, __int64 SizeInBytes)
{
  __int64 v8; // rax
  bool v9; // sf
  int v10; // ecx
       char *v11; // r8
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rdi
  unsigned int v17; // r15d
  double v18; // xmm0_8
  double v19; // xmm0_8
  unsigned __int64 v20; // rdi
  unsigned int v21; // r13d
  unsigned int v22; // edx
  int v23; // r8d
  unsigned int v24; // r11d
  unsigned __int64 v25; // r8
  int v26; // edi
  bool v27; // zf
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // eax
  char v32; // cl
  unsigned int v33; // r14d
  unsigned int v34; // r10d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int32 v37; // r9d
  __int32 v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r15d
  unsigned int v42; // r11d
  int v43; // edi
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // eax
  char v48; // cl
  unsigned int v49; // r10d
  __int64 v50; // rax
  __int64 v51; // rcx
  __int32 v52; // r9d
  __int32 v53; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // r8d
  int v57; // eax
  int v58; // eax
  unsigned int v59; // ebx
  unsigned int v60; // eax
  __int64 v61; // r10
  __int64 v62; // r8
  __int32 v63; // r9d
  unsigned __int32 v64; // ecx
  unsigned int v65; // edi
  int v66; // eax
  int v67; // eax
  int v68; // ebx
  unsigned int v69; // eax
  __int64 v70; // r10
  __int64 v71; // r8
  __int32 v72; // r9d
  unsigned __int32 v73; // ecx
  unsigned int v74; // eax
  unsigned int v75; // r12d
  int v76; // r13d
  __int64 v77; // rax
  __int64 v78; // rsi
  unsigned __int64 v79; // rbx
  unsigned int v80; // r10d
  __int64 v81; // r10
  __int64 v82; // r9
  unsigned __int64 v83; // rcx
  char v84; // al
  __int64 v85; // rbx
  __int64 v86; // r9
  unsigned __int64 v87; // rcx
  unsigned int v88; // r12d
  __m128i *v89; // r13
  __m128i *v90; // rdx
  __int64 v91; // r9
  __int64 v92; // rsi
  unsigned __int64 v93; // r11
  __int64 v94; // rdi
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rax
  int v99; // eax
  unsigned int v100; // eax
  __int64 v101; // r9
  unsigned __int64 v102; // rcx
  _BYTE *v103; // rdi
  _BYTE *v104; // rbx
  unsigned int v105; // r9d
  __int64 v106; // rdx
  unsigned __int64 v107; // r8
  unsigned int v108; // r13d
  unsigned int v109; // eax
  unsigned int v110; // r12d
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 v114; // rsi
  unsigned __int64 v115; // rbx
  unsigned int v116; // r10d
  __int64 v117; // r10
  __int64 v118; // r9
  unsigned __int64 v119; // rcx
  char v120; // al
  __int64 v121; // rbx
  __int64 v122; // r9
  unsigned __int64 v123; // rcx
  unsigned int v124; // r12d
  __m128i *v125; // rcx
  __m128i *v126; // rdx
  __int64 v127; // r9
  __int64 v128; // rsi
  unsigned __int64 v129; // r11
  __int64 v130; // rdi
  __int64 v131; // rax
  unsigned __int64 v132; // rdx
  __int64 v133; // rdx
  unsigned __int64 v134; // rcx
  unsigned int v135; // r13d
  unsigned int v136; // eax
  __int64 v137; // r9
  unsigned __int64 v138; // rcx
  int v139; // eax
  int v140; // esi
  unsigned __int64 v141; // r8
  unsigned int v142; // r9d
  __int64 v143; // rdx
  unsigned __int64 v144; // r8
  unsigned int v145; // edx
  __int64 v146; // rax
  _BYTE *i; // rdi
  unsigned int v148; // r10d
       struct __crt_strtox__big_integer *v149; // r8
  unsigned int v150; // r9d
  __int64 v151; // rdx
  unsigned __int64 v152; // rcx
  unsigned int v153; // r8d
  unsigned int j; // r9d
  char v155; // cl
  __int64 v156; // rax
  _QWORD v158[6]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v159; // [rsp+30h] [rbp-D0h]
  __int64 X; // [rsp+38h] [rbp-C8h]
  unsigned int v161; // [rsp+40h] [rbp-C0h]
  unsigned int v162; // [rsp+44h] [rbp-BCh]
  __int64 v163; // [rsp+48h] [rbp-B8h]
  unsigned int v164; // [rsp+50h] [rbp-B0h]
  __int64 Env; // [rsp+58h] [rbp-A8h] BYREF
  char v166; // [rsp+60h] [rbp-A0h]
  _BYTE *v167; // [rsp+68h] [rbp-98h]
  __m128i *v168; // [rsp+70h] [rbp-90h]
  __int64 v169; // [rsp+78h] [rbp-88h]
  unsigned int v170; // [rsp+80h] [rbp-80h] BYREF
  __m128i Destination[28]; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v172; // [rsp+250h] [rbp+150h] BYREF
  __m128i v173; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v174; // [rsp+420h] [rbp+320h]
  __m128i Source[28]; // [rsp+424h] [rbp+324h] BYREF
  unsigned int v176; // [rsp+5F0h] [rbp+4F0h]
  __m128i v177; // [rsp+5F4h] [rbp+4F4h] BYREF
  __int64 v178; // [rsp+7C0h] [rbp+6C0h]

  X = a1;
  v167 = a4;
  v169 = a3;
  fegetenv((fenv_t *)&Env);
  if ( (Env & 0x1F) == 0x1F )
  {
    v166 = 0;
  }
  else
  {
    feholdexcept_sr((sr_anon_70 *)&Env);
    v166 = 1;
  }
  v8 = X;
  v9 = X < 0;
  *(_QWORD *)(a3 + 8) = (uint64)(uintptr_t)(a4);
  v10 = 32;
  if ( v9 )
    v10 = 45;
  *(_DWORD *)a3 = v10;
  if ( (((unsigned __int64)v8 >> 52) & 0x7FF) == 0 && (v8 & 0xFFFFFFFFFFFFFLL) == 0 )
  {
    *(_DWORD *)(a3 + 4) = 0;
    v11 = (     char *)&unk_140293798;
    goto LABEL_316;
  }
  if ( (((unsigned __int64)v8 >> 52) & 0x7FF) == 0x7FF )
  {
    if ( (v8 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      if ( v8 < 0 && (v8 & 0xFFFFFFFFFFFFFLL) == 0x8000000000000LL )
        v12 = 4;
      else
        v12 = ((v8 & 0x8000000000000LL) == 0) | 2;
    }
    else
    {
      v12 = 1;
    }
    *(_DWORD *)(a3 + 4) = 1;
  }
  else
  {
    v12 = 0;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v11 = "1#INF";
LABEL_316:
    if ( (unsigned int)strcpy_s_sr(a4, SizeInBytes, (__int64)v11) )
    {
      v158[4] = 0;
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    goto LABEL_310;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v11 = "1#QNAN";
    goto LABEL_316;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v11 = "1#SNAN";
    goto LABEL_316;
  }
  if ( v15 == 1 )
  {
    v11 = "1#IND";
    goto LABEL_316;
  }
  X = v8 & 0x7FFFFFFFFFFFFFFFLL;
  v164 = a2 + 1;
  v163 = v8 & 0x7FFFFFFFFFFFFFFFLL;
  v16 = (v8 & 0xFFFFFFFFFFFFFLL)
      + (-(__int64)((((v8 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) != 0) & 0x10000000000000LL);
  v17 = (((v8 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) + 2 - ((((v8 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) != 0);
  v18 = log10(COERCE_DOUBLE(v8 & 0x7FFFFFFFFFFFFFFFLL));
  v19 = ceil(v18);
  SR_VEC_LANES(128, Destination[0], i32)[0] = v16;
  v20 = HIDWORD(v16);
  v21 = (((int)v19 - 0x7FFFFFFF) & 0xFFFFFFFE) != 0 ? (int)v19 : 0;
  SR_VEC_LANES(128, Destination[0], i32)[1] = v20;
  v161 = v21;
  v22 = ((_DWORD)v20 != 0) + 1;
  v170 = v22;
  if ( v17 < 0x434 )
  {
    if ( v17 != 54 )
    {
      SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
      v174 = 2;
      if ( (_DWORD)v20 )
      {
        v56 = 0;
        while ( SR_VEC_LANES(128, Source[0], i32)[v56] == SR_VEC_LANES(128, Destination[0], i32)[v56] )
        {
          if ( ++v56 == 2 )
          {
            v27 = !_BitScanReverse((unsigned int *)&v57, v20);
            LODWORD(X) = 0;
            if ( v27 )
              v58 = 0;
            else
              v58 = v57 + 1;
            v59 = 32 - v58;
            v33 = ((_DWORD)v20 != 0) + 1;
            v60 = v33;
            while ( 1 )
            {
              v61 = v60;
              v62 = v60 - 1;
              v63 = v60 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v60];
              v64 = (unsigned int)v62 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v62];
              --v60;
              SR_VEC_LANES(128, Destination[0], i32)[v61] = (4 * v63) | (v64 >> 30);
              if ( (_DWORD)v62 == -1 )
                break;
              v22 = v170;
            }
            if ( v59 < 2 )
              v33 = ((_DWORD)v20 != 0) + 2;
            v170 = v33;
            v65 = (1078 - v17) >> 5;
            sub_1401FCD30((void *)(uintptr_t)(Source), 0, 4LL * v65);
            SR_VEC_LANES(128, Source[0], i32)[v65] = 1 << ((54 - v17) & 0x1F);
            goto LABEL_101;
          }
        }
      }
    }
    LODWORD(X) = 0;
    v27 = !_BitScanReverse((unsigned int *)&v66, SR_VEC_LANES(128, Destination[0], u32)[(_DWORD)v20 != 0]);
    if ( v27 )
      v67 = 0;
    else
      v67 = v66 + 1;
    v68 = 32 - v67;
    v33 = ((_DWORD)v20 != 0) + 1;
    v69 = v33;
    while ( 1 )
    {
      v70 = v69;
      v71 = v69 - 1;
      v72 = v69 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v69];
      v73 = (unsigned int)v71 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v71];
      --v69;
      SR_VEC_LANES(128, Destination[0], i32)[v70] = (2 * v72) | (v73 >> 31);
      if ( (_DWORD)v71 == -1 )
        break;
      v22 = v170;
    }
    if ( !v68 )
      v33 = ((_DWORD)v20 != 0) + 2;
    v170 = v33;
    v65 = (1077 - v17) >> 5;
    sub_1401FCD30((void *)(uintptr_t)(Source), 0, 4LL * v65);
    SR_VEC_LANES(128, Source[0], i32)[v65] = 1 << ((53 - v17) & 0x1F);
LABEL_101:
    v41 = v65 + 1;
    v25 = 4LL * (v65 + 1);
    v174 = v65 + 1;
    v172 = v65 + 1;
    if ( v25 )
    {
      if ( v25 > 0x1CC )
      {
        sub_1401FCD30((void *)(uintptr_t)(&v173), 0, 0x1CCu);
        *errno_sr() = 34;
        sub_14024CF6C();
      }
      else
      {
        sub_1401FC920(&v173, Source, v25);
      }
      v41 = v172;
    }
  }
  else
  {
    SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
    v174 = 2;
    if ( (_DWORD)v20 )
    {
      v23 = 0;
      while ( SR_VEC_LANES(128, Source[0], i32)[v23] == SR_VEC_LANES(128, Destination[0], i32)[v23] )
      {
        if ( ++v23 == 2 )
        {
          LODWORD(X) = 0;
          v24 = (v17 - 1074) & 0x1F;
          v25 = (v17 - 1074) >> 5;
          v26 = (1LL << (32 - ((v17 - 50) & 0x1F))) - 1;
          v27 = !_BitScanReverse((unsigned int *)&v28, SR_VEC_LANES(128, Destination[0], u32)[v22 - 1]);
          if ( v27 )
            v29 = 0;
          else
            v29 = v28 + 1;
          v30 = 32 - v29;
          v31 = v22 + v25;
          if ( v22 + (_DWORD)v25 != 115 || (v32 = 1, v24 <= v30) )
            v32 = 0;
          if ( v31 > 0x73 || v32 )
          {
            v33 = 0;
          }
          else
          {
            v33 = 114;
            if ( v31 < 0x72 )
              v33 = v22 + v25;
            v34 = v33;
            while ( v34 >= (unsigned int)v25 )
            {
              v35 = v34 - (unsigned int)v25;
              v36 = (unsigned int)(v35 - 1);
              v37 = (unsigned int)v35 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v35];
              v38 = (unsigned int)v36 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v36];
              v39 = v34--;
              SR_VEC_LANES(128, Destination[0], i32)[v39] = ((v26 & v37) << v24) | ((~v26 & (unsigned int)v38) >> (32 - v24));
              if ( v34 == -1 )
                break;
              v22 = v170;
            }
            v40 = 0;
            if ( (_DWORD)v25 )
            {
              do
              {
                SR_VEC_LANES(128, Destination[0], i32)[v40] = 0;
                v40 = (unsigned int)(v40 + 1);
              }
              while ( (_DWORD)v40 != (_DWORD)v25 );
            }
            if ( v24 > v30 )
              ++v33;
          }
          SR_VEC_LANES(128, Source[0], i32)[1] = 0;
          v41 = 1;
          v172 = 1;
          v170 = v33;
          v174 = 1;
          SR_VEC_LANES(128, v173, i32)[0] = 4;
          goto LABEL_121;
        }
      }
    }
    LODWORD(X) = 0;
    v42 = (v17 - 1075) & 0x1F;
    v25 = (v17 - 1075) >> 5;
    v43 = (1LL << (32 - ((v17 - 51) & 0x1F))) - 1;
    v27 = !_BitScanReverse((unsigned int *)&v44, SR_VEC_LANES(128, Destination[0], u32)[v22 - 1]);
    if ( v27 )
      v45 = 0;
    else
      v45 = v44 + 1;
    v46 = 32 - v45;
    v47 = v22 + v25;
    if ( v22 + (_DWORD)v25 != 115 || (v48 = 1, v42 <= v46) )
      v48 = 0;
    if ( v47 > 0x73 || v48 )
    {
      v33 = 0;
    }
    else
    {
      v33 = 114;
      if ( v47 < 0x72 )
        v33 = v22 + v25;
      v49 = v33;
      while ( v49 >= (unsigned int)v25 )
      {
        v50 = v49 - (unsigned int)v25;
        v51 = (unsigned int)(v50 - 1);
        v52 = (unsigned int)v50 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v50];
        v53 = (unsigned int)v51 >= v22 ? 0 : SR_VEC_LANES(128, Destination[0], i32)[v51];
        v54 = v49--;
        SR_VEC_LANES(128, Destination[0], i32)[v54] = ((v43 & v52) << v42) | ((~v43 & (unsigned int)v53) >> (32 - v42));
        if ( v49 == -1 )
          break;
        v22 = v170;
      }
      v55 = 0;
      if ( (_DWORD)v25 )
      {
        do
        {
          SR_VEC_LANES(128, Destination[0], i32)[v55] = 0;
          v55 = (unsigned int)(v55 + 1);
        }
        while ( (_DWORD)v55 != (_DWORD)v25 );
      }
      if ( v42 > v46 )
        ++v33;
    }
    SR_VEC_LANES(128, Source[0], i32)[1] = 0;
    v41 = 1;
    v172 = 1;
    v170 = v33;
    v174 = 1;
    SR_VEC_LANES(128, v173, i32)[0] = 2;
  }
LABEL_121:
  if ( (v21 & 0x80000000) == 0 )
  {
    v74 = v21 / 0xA;
    LODWORD(X) = v21 / 0xA;
    v75 = v21 / 0xA;
    v159 = v21 / 0xA;
    if ( !(v21 / 0xA) )
    {
LABEL_185:
      v99 = 10 * v74;
      if ( v21 != v99 )
      {
        v100 = dword_140285688[v21 - v99 - 1];
        if ( !v100 )
          goto LABEL_201;
        if ( v100 != 1 && v41 )
        {
          LODWORD(v25) = 0;
          v101 = 0;
          do
          {
            v102 = (unsigned int)v25 + v100 * (unsigned __int64)SR_VEC_LANES(128, v173, u32)[v101];
            SR_VEC_LANES(128, v173, i32)[v101] = v102;
            v25 = HIDWORD(v102);
            v101 = (unsigned int)(v101 + 1);
          }
          while ( (_DWORD)v101 != v41 );
          if ( HIDWORD(v102) )
          {
            if ( v172 >= 0x73 )
              goto LABEL_201;
            SR_VEC_LANES(128, v173, i32)[v172] = HIDWORD(v102);
            v41 = v172 + 1;
            goto LABEL_202;
          }
          v41 = v172;
        }
      }
LABEL_195:
      v103 = v167;
      v104 = v167;
      if ( v33 )
      {
        LODWORD(v25) = 0;
        v105 = 0;
        do
        {
          v106 = v105++;
          v107 = (unsigned int)v25 + 10LL * SR_VEC_LANES(128, Destination[0], u32)[v106];
          SR_VEC_LANES(128, Destination[0], i32)[v106] = v107;
          v25 = HIDWORD(v107);
        }
        while ( v105 != v33 );
        if ( (_DWORD)v25 )
        {
          if ( v170 >= 0x73 )
          {
            v174 = 0;
            v170 = 0;
            sub_1402697BC(Destination, 460, Source, 0);
          }
          else
          {
            SR_VEC_LANES(128, Destination[0], i32)[v170++] = v25;
          }
        }
      }
      goto LABEL_278;
    }
    while ( 1 )
    {
      v76 = v75;
      if ( v75 > 0x26 )
        v76 = 38;
      v162 = v76;
      v77 = (unsigned int)(v76 - 1);
      v78 = (unsigned __int8)byte_140293703[4 * v77];
      v79 = 4LL * (unsigned __int8)byte_140293702[4 * v77];
      v174 = v78 + (unsigned __int8)byte_140293702[4 * v77];
      sub_1401FCD30((void *)(uintptr_t)(Source), 0, v79);
      sub_1401FC920(
        (__m128i *)((char *)Source + v79),
        (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * (v76 - 1)]),
        4 * v78);
      v80 = v174;
      if ( v174 > 1 )
      {
        if ( v41 > 1 )
        {
          v88 = v41;
          v89 = Source;
          if ( v174 >= v41 )
            v89 = &v173;
          v90 = &v173;
          if ( v174 >= v41 )
            v90 = Source;
          else
            v88 = v174;
          v163 = (__int64)v90;
          if ( v174 < v41 )
            v80 = v41;
          v41 = 0;
          v91 = 0;
          v176 = 0;
          while ( 1 )
          {
            v92 = SR_VEC_PTR_LANES(128, v89, u32)[v91];
            if ( (_DWORD)v92 )
            {
              LODWORD(v93) = 0;
              v25 = (unsigned int)v91;
              if ( v80 )
              {
                while ( (_DWORD)v25 != 115 )
                {
                  v94 = (unsigned int)v25;
                  if ( (_DWORD)v25 == v41 )
                  {
                    SR_VEC_LANES(128, v177, i32)[(unsigned int)v25] = 0;
                    v176 = v25 + 1;
                  }
                  v95 = (unsigned int)(v25 - v91);
                  v25 = (unsigned int)(v25 + 1);
                  v96 = (unsigned int)v93 + SR_VEC_LANES(128, v177, u32)[v94] + v92 * SR_VEC_PTR_LANES(128, v90, u32)[v95];
                  SR_VEC_LANES(128, v177, i32)[v94] = v96;
                  v41 = v176;
                  v93 = HIDWORD(v96);
                  if ( (_DWORD)v25 - (_DWORD)v91 == v80 )
                    break;
                  v90 = (__m128i *)v163;
                }
                if ( (_DWORD)v93 )
                {
                  while ( (_DWORD)v25 != 115 )
                  {
                    v97 = (unsigned int)v25;
                    if ( (_DWORD)v25 == v41 )
                    {
                      SR_VEC_LANES(128, v177, i32)[(unsigned int)v25] = 0;
                      v176 = v25 + 1;
                    }
                    v98 = SR_VEC_LANES(128, v177, u32)[(unsigned int)v25];
                    v25 = (unsigned int)(v25 + 1);
                    SR_VEC_LANES(128, v177, i32)[v97] = v98 + v93;
                    v41 = v176;
                    LODWORD(v93) = (v98 + (unsigned __int64)(unsigned int)v93) >> 32;
                    if ( !(_DWORD)v93 )
                      goto LABEL_172;
                  }
LABEL_201:
                  v41 = 0;
LABEL_202:
                  v172 = v41;
                  goto LABEL_195;
                }
              }
LABEL_172:
              if ( (_DWORD)v25 == 115 )
                goto LABEL_201;
              v90 = (__m128i *)v163;
            }
            else if ( (_DWORD)v91 == v41 )
            {
              SR_VEC_LANES(128, v177, i32)[v91] = 0;
              v41 = v91 + 1;
              v176 = v91 + 1;
            }
            v91 = (unsigned int)(v91 + 1);
            if ( (_DWORD)v91 == v88 )
            {
              v25 = 4LL * v41;
              v172 = v41;
              if ( v25 )
              {
                if ( v25 > 0x1CC )
                {
                  sub_1401FCD30((void *)(uintptr_t)(&v173), 0, 0x1CCu);
                  *errno_sr() = 34;
                  sub_14024CF6C();
                }
                else
                {
                  sub_1401FC920(&v173, &v177, v25);
                }
                v41 = v172;
              }
              v75 = v159;
              v76 = v162;
              goto LABEL_181;
            }
          }
        }
        v85 = SR_VEC_LANES(128, v173, u32)[0];
        v25 = 4LL * v174;
        v41 = v174;
        v172 = v174;
        if ( v25 )
        {
          if ( v25 > 0x1CC )
          {
            sub_1401FCD30((void *)(uintptr_t)(&v173), 0, 0x1CCu);
            *errno_sr() = 34;
            sub_14024CF6C();
          }
          else
          {
            sub_1401FC920(&v173, Source, v25);
          }
          v41 = v172;
        }
        if ( !(_DWORD)v85 )
        {
LABEL_127:
          v41 = 0;
          goto LABEL_128;
        }
        if ( (_DWORD)v85 == 1 || !v41 )
          goto LABEL_181;
        LODWORD(v25) = 0;
        v86 = 0;
        do
        {
          v87 = (unsigned int)v25 + v85 * SR_VEC_LANES(128, v173, u32)[v86];
          SR_VEC_LANES(128, v173, i32)[v86] = v87;
          v25 = HIDWORD(v87);
          v86 = (unsigned int)(v86 + 1);
        }
        while ( (_DWORD)v86 != v41 );
      }
      else
      {
        if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
          goto LABEL_127;
        if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !v41 )
          goto LABEL_181;
        LODWORD(v25) = 0;
        v81 = SR_VEC_LANES(128, Source[0], u32)[0];
        v82 = 0;
        do
        {
          v83 = (unsigned int)v25 + v81 * SR_VEC_LANES(128, v173, u32)[v82];
          SR_VEC_LANES(128, v173, i32)[v82] = v83;
          v25 = HIDWORD(v83);
          v82 = (unsigned int)(v82 + 1);
        }
        while ( (_DWORD)v82 != v41 );
      }
      if ( !(_DWORD)v25 )
        break;
      if ( v172 < 0x73 )
      {
        SR_VEC_LANES(128, v173, i32)[v172] = v25;
        v41 = v172 + 1;
LABEL_128:
        v172 = v41;
LABEL_181:
        v84 = 1;
        goto LABEL_182;
      }
      v41 = 0;
      v172 = 0;
      v84 = 0;
LABEL_182:
      if ( !v84 )
        goto LABEL_201;
      v75 -= v76;
      v159 = v75;
      if ( !v75 )
      {
        v74 = X;
        v21 = v161;
        goto LABEL_185;
      }
    }
    v41 = v172;
    goto LABEL_181;
  }
  v108 = -v21;
  v109 = v108 / 0xA;
  v162 = v108 / 0xA;
  v110 = v108 / 0xA;
  v159 = v108 / 0xA;
  if ( !(v108 / 0xA) )
    goto LABEL_266;
  while ( 1 )
  {
    v111 = v110;
    if ( v110 > 0x26 )
      v111 = 38;
    LODWORD(X) = v111;
    v112 = (unsigned int)(v111 - 1);
    v113 = (unsigned int)v112;
    v114 = (unsigned __int8)byte_140293703[4 * v112];
    v115 = 4LL * (unsigned __int8)byte_140293702[4 * v112];
    v174 = v114 + (unsigned __int8)byte_140293702[4 * v112];
    sub_1401FCD30((void *)(uintptr_t)(Source), 0, v115);
    sub_1401FC920(
      (__m128i *)((char *)Source + v115),
      (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * v113]),
      4 * v114);
    v116 = v174;
    if ( v174 <= 1 )
    {
      if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
        goto LABEL_208;
      if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !v33 )
        goto LABEL_262;
      LODWORD(v25) = 0;
      v117 = SR_VEC_LANES(128, Source[0], u32)[0];
      v118 = 0;
      do
      {
        v119 = (unsigned int)v25 + v117 * SR_VEC_LANES(128, Destination[0], u32)[v118];
        SR_VEC_LANES(128, Destination[0], i32)[v118] = v119;
        v25 = HIDWORD(v119);
        v118 = (unsigned int)(v118 + 1);
      }
      while ( (_DWORD)v118 != v33 );
      goto LABEL_214;
    }
    if ( v33 > 1 )
      break;
    v121 = SR_VEC_LANES(128, Destination[0], u32)[0];
    v25 = 4LL * v174;
    v33 = v174;
    v170 = v174;
    if ( v25 )
    {
      if ( v25 > 0x1CC )
      {
        sub_1401FCD30((void *)(uintptr_t)(Destination), 0, 0x1CCu);
        *errno_sr() = 34;
        sub_14024CF6C();
      }
      else
      {
        sub_1401FC920(Destination, Source, v25);
      }
      v33 = v170;
    }
    if ( !(_DWORD)v121 )
    {
LABEL_208:
      v33 = 0;
      goto LABEL_209;
    }
    if ( (_DWORD)v121 == 1 || !v33 )
      goto LABEL_262;
    LODWORD(v25) = 0;
    v122 = 0;
    do
    {
      v123 = (unsigned int)v25 + v121 * SR_VEC_LANES(128, Destination[0], u32)[v122];
      SR_VEC_LANES(128, Destination[0], i32)[v122] = v123;
      v25 = HIDWORD(v123);
      v122 = (unsigned int)(v122 + 1);
    }
    while ( (_DWORD)v122 != v33 );
LABEL_214:
    if ( !(_DWORD)v25 )
    {
      v33 = v170;
      goto LABEL_262;
    }
    if ( v170 < 0x73 )
    {
      SR_VEC_LANES(128, Destination[0], i32)[v170] = v25;
      v33 = v170 + 1;
LABEL_209:
      v170 = v33;
LABEL_262:
      v120 = 1;
      goto LABEL_263;
    }
    v33 = 0;
    v170 = 0;
    v120 = 0;
LABEL_263:
    if ( !v120 )
      goto LABEL_276;
    v110 -= X;
    v159 = v110;
    if ( !v110 )
    {
      v109 = v162;
LABEL_266:
      v135 = v108 - 10 * v109;
      if ( !v135 )
        goto LABEL_195;
      v136 = dword_140285688[v135 - 1];
      if ( v136 )
      {
        if ( v136 == 1 || !v33 )
          goto LABEL_195;
        LODWORD(v25) = 0;
        v137 = 0;
        do
        {
          v138 = (unsigned int)v25 + v136 * (unsigned __int64)SR_VEC_LANES(128, Destination[0], u32)[v137];
          SR_VEC_LANES(128, Destination[0], i32)[v137] = v138;
          v25 = HIDWORD(v138);
          v137 = (unsigned int)(v137 + 1);
        }
        while ( (_DWORD)v137 != v33 );
        if ( !HIDWORD(v138) )
        {
          v33 = v170;
          goto LABEL_195;
        }
        if ( v170 < 0x73 )
        {
          SR_VEC_LANES(128, Destination[0], i32)[v170] = HIDWORD(v138);
          v33 = ++v170;
          goto LABEL_195;
        }
      }
      goto LABEL_276;
    }
  }
  v124 = v33;
  v125 = Source;
  if ( v174 < v33 )
    v124 = v174;
  else
    v125 = Destination;
  v168 = v125;
  v126 = Destination;
  if ( v174 >= v33 )
    v126 = Source;
  v163 = (__int64)v126;
  if ( v174 < v33 )
    v116 = v33;
  v33 = 0;
  v127 = 0;
  v176 = 0;
  while ( 1 )
  {
    v128 = SR_VEC_PTR_LANES(128, v125, u32)[v127];
    if ( (_DWORD)v128 )
      break;
    if ( (_DWORD)v127 == v33 )
    {
      SR_VEC_LANES(128, v177, i32)[v127] = 0;
      v33 = v127 + 1;
      v176 = v127 + 1;
    }
LABEL_255:
    v127 = (unsigned int)(v127 + 1);
    if ( (_DWORD)v127 == v124 )
    {
      v25 = 4LL * v33;
      v170 = v33;
      if ( v25 )
      {
        if ( v25 > 0x1CC )
        {
          sub_1401FCD30((void *)(uintptr_t)(Destination), 0, 0x1CCu);
          *errno_sr() = 34;
          sub_14024CF6C();
        }
        else
        {
          sub_1401FC920(Destination, &v177, v25);
        }
        v33 = v170;
      }
      v110 = v159;
      goto LABEL_262;
    }
  }
  LODWORD(v129) = 0;
  v25 = (unsigned int)v127;
  if ( !v116 )
    goto LABEL_253;
  while ( (_DWORD)v25 != 115 )
  {
    v130 = (unsigned int)v25;
    if ( (_DWORD)v25 == v33 )
    {
      SR_VEC_LANES(128, v177, i32)[(unsigned int)v25] = 0;
      v176 = v25 + 1;
    }
    v131 = (unsigned int)(v25 - v127);
    v25 = (unsigned int)(v25 + 1);
    v132 = (unsigned int)v129 + SR_VEC_LANES(128, v177, u32)[v130] + v128 * SR_VEC_PTR_LANES(128, v126, u32)[v131];
    SR_VEC_LANES(128, v177, i32)[v130] = v132;
    v33 = v176;
    v129 = HIDWORD(v132);
    if ( (_DWORD)v25 - (_DWORD)v127 == v116 )
      break;
    v126 = (__m128i *)v163;
  }
  if ( !(_DWORD)v129 )
  {
LABEL_253:
    if ( (_DWORD)v25 == 115 )
      goto LABEL_276;
    v125 = v168;
    v126 = (__m128i *)v163;
    goto LABEL_255;
  }
  while ( (_DWORD)v25 != 115 )
  {
    v133 = (unsigned int)v25;
    if ( (_DWORD)v25 == v33 )
    {
      SR_VEC_LANES(128, v177, i32)[(unsigned int)v25] = 0;
      v176 = v25 + 1;
    }
    v25 = (unsigned int)(v25 + 1);
    v134 = (unsigned int)v129 + (unsigned __int64)SR_VEC_LANES(128, v177, u32)[v133];
    SR_VEC_LANES(128, v177, i32)[v133] = v134;
    v33 = v176;
    LODWORD(v129) = HIDWORD(v134);
    if ( !HIDWORD(v134) )
      goto LABEL_253;
  }
LABEL_276:
  v170 = 0;
  v103 = v167;
  v104 = v167;
LABEL_278:
  v139 = sub_1402320F0(
           (__crt_strtox *)&v170,
           (struct __crt_strtox__big_integer *)&v172,
           (     struct __crt_strtox__big_integer *)v25);
  v140 = v161;
  if ( v139 == 10 )
  {
    v140 = v161 + 1;
    *v103 = 49;
    v104 = v103 + 1;
    if ( v41 )
    {
      LODWORD(v141) = 0;
      v142 = 0;
      do
      {
        v143 = v142++;
        v144 = (unsigned int)v141 + 10LL * SR_VEC_LANES(128, v173, u32)[v143];
        SR_VEC_LANES(128, v173, i32)[v143] = v144;
        v141 = HIDWORD(v144);
      }
      while ( v142 != v41 );
      if ( (_DWORD)v141 )
      {
        if ( v172 >= 0x73 )
        {
          v174 = 0;
          v172 = 0;
          sub_1402697BC(&v173, 460, Source, 0);
        }
        else
        {
          SR_VEC_LANES(128, v173, i32)[v172++] = v141;
        }
      }
    }
  }
  else if ( v139 )
  {
    v104 = v103 + 1;
    *v103 = v139 + 48;
  }
  else
  {
    v140 = v161 - 1;
  }
  v145 = v164;
  *(_DWORD *)(v169 + 4) = v140;
  if ( v140 >= 0 && v145 <= 0x7FFFFFFF )
    v145 += v140;
  v146 = v145;
  if ( SizeInBytes - 1 < (unsigned __int64)v145 )
    v146 = SizeInBytes - 1;
  for ( i = &v103[v146]; v104 != i; v104 += v156 )
  {
    v148 = v170;
    if ( !v170 )
      break;
    LODWORD(v149) = 0;
    v150 = 0;
    do
    {
      v151 = v150++;
      v152 = (unsigned int)v149 + 1000000000LL * SR_VEC_LANES(128, Destination[0], u32)[v151];
      SR_VEC_LANES(128, Destination[0], i32)[v151] = v152;
      v149 = (     struct __crt_strtox__big_integer *)HIDWORD(v152);
    }
    while ( v150 != v148 );
    if ( HIDWORD(v152) )
    {
      if ( v170 >= 0x73 )
      {
        v174 = 0;
        v170 = 0;
        sub_1402697BC(Destination, 460, Source, 0);
      }
      else
      {
        SR_VEC_LANES(128, Destination[0], i32)[v170++] = HIDWORD(v152);
      }
    }
    v153 = sub_1402320F0((__crt_strtox *)&v170, (struct __crt_strtox__big_integer *)&v172, v149);
    for ( j = 8; j != -1; --j )
    {
      v155 = v153 % 0xA + 48;
      v153 /= 0xAu;
      if ( (int)i - (int)v104 >= j )
        v104[j] = v155;
    }
    v156 = i - v104;
    if ( i - v104 > 9 )
      v156 = 9;
  }
  *v104 = 0;
LABEL_310:
  if ( v166 )
    fesetenv_sr((     sr_anon_70 *)&Env);
  return 0; /* no caller reads the result */
}

// 1402697B3: control flows out of bounds to 1402697B8
// 140268821: conditional instruction was optimized away because r14d.4<73u
// 140268944: conditional instruction was optimized away because r14d.4<73u
// 140268E48: conditional instruction was optimized away because r12d.4>=2u
// 140269309: conditional instruction was optimized away because r12d.4>=2u
// 140269563: variable 'v25' is possibly undefined
// 1402696D7: variable 'v149' is possibly undefined
// 1402697BC: using guessed type __int64 __fastcall sub_1402697BC(_QWORD, _QWORD, _QWORD, _QWORD);
// 140285688: using guessed type int dword_140285688[10];
// 140293700: using guessed type __int16 word_140293700[];

//----- (00000001402697BC) ----------------------------------------------------
__int64            sub_1402697BC(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
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

// 1402697BC: invalid function type 'errno_t __cdecl sub_1402697BC(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize)' has been ignored

//----- (0000000140269844) ----------------------------------------------------
// attributes: thunk
__int64 sub_140269844()
{
  return ((__int64 (          *)())GetStringTypeW)();
}

// 14026E038: invalid function type 'BOOL (__stdcall *GetStringTypeW)(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)' has been ignored

//----- (0000000140269CD8) ----------------------------------------------------
__int16            to_machine_sse_control(unsigned int a1)
{
  __int16 v1; // r9
  unsigned int v2; // edx
  int v3; // ecx
  __int16 v4; // r10
  int v5; // eax

  v1 = 0;
  v2 = ((a1 >> 2) | a1 & 0xC03FFFFF) >> 22;
  v3 = a1 & 0xC00;
  switch ( v3 )
  {
    case 1024:
      v4 = -32704;
      break;
    case 2048:
      v4 = 64;
      break;
    case 3072:
      v4 = 0x8000;
      break;
    default:
      v4 = 0;
      break;
  }
  v5 = v2 & 0x300;
  if ( (v2 & 0x300) != 0 )
  {
    switch ( v5 )
    {
      case 256:
        v1 = 0x2000;
        break;
      case 512:
        v1 = 0x4000;
        break;
      case 768:
        v1 = 24576;
        break;
    }
  }
  return v1
       | v4
       | (((v2 >> 4) & 1) << 7)
       | (((v2 >> 5) & 1) << 8)
       | (((v2 >> 3) & 1) << 9)
       | (((v2 >> 2) & 1) << 10)
       | (((v2 >> 1) & 1) << 11)
       | ((v2 & 1) << 12);
}


//----- (0000000140269EE4) ----------------------------------------------------
__int64            _acrt_fenv_get_common_round_control_sr(__int16 a1)
{
  return a1 & 0x300;
}


//----- (0000000140269EF0) ----------------------------------------------------
__int64 _acrt_fenv_get_control_sr()
{
  unsigned int v0; // r9d
  __int16 v1; // ax
  int v2; // r8d
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  v0 = _mm_getcsr();
  v1 = v0 & 0x8040;
  if ( (v0 & 0x8040) == 0x8000 )
  {
    v2 = 3072;
  }
  else if ( v1 == 64 )
  {
    v2 = 2048;
  }
  else
  {
    v2 = 0;
    if ( v1 == -32704 )
      v2 = 1024;
  }
  v3 = v0 & 0x6000;
  if ( (v0 & 0x6000) != 0 )
  {
    if ( v3 == 0x2000 )
    {
      v4 = 256;
    }
    else if ( v3 == 0x4000 )
    {
      v4 = 512;
    }
    else
    {
      v4 = 768;
      if ( v3 != 24576 )
        v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = v2
     | v4
     | (v0 >> 12) & 1
     | (2 * ((v0 >> 11) & 1))
     | (4 * ((v0 >> 10) & 1))
     | (8 * ((v0 >> 9) & 1))
     | (16 * ((v0 >> 7) & 1))
     | (32 * ((v0 >> 8) & 1));
  return v5
       | ((v2 & 0x3F
         | v4 & 0x3F
         | ((v0 & 0x1000) != 0)
         | ((unsigned __int8)(2 * ((v0 & 0x800) != 0))
          | (unsigned __int8)((4 * ((v0 & 0x400) != 0))
                            | (8 * ((v0 & 0x200) != 0))
                            | (16 * ((v0 & 0x80) != 0))
                            | (32 * (BYTE1(v0) & 1))))
         & 0x3F) << 24)
       | (v5 << 22) & 0xC0000000;
}


//----- (0000000140269FE4) ----------------------------------------------------
__int64            _acrt_fenv_get_fp_status_word_from_exception_mask_sr(int a1)
{
  return a1 | ((unsigned __int8)(a1 & 0x3F) << 24);
}


//----- (0000000140269FF0) ----------------------------------------------------
__int64 _acrt_fenv_get_status()
{
  int v0; // edx
  char v2; // [rsp+8h] [rbp+8h]

  v2 = _mm_getcsr();
  v0 = ((unsigned __int8)(v2 & 0x3F) >> 5)
     | (16 * (v2 & 1))
     | (2 * (((unsigned __int8)(v2 & 0x3F) >> 4) & 1))
     | (4 * (((unsigned __int8)(v2 & 0x3F) >> 3) & 1))
     | (8 * (((unsigned __int8)(v2 & 0x3F) >> 2) & 1))
     | (32 * (((unsigned __int8)(v2 & 0x3F) >> 1) & 1));
  return v0 | (unsigned int)(v0 << 24);
}


//----- (000000014026A044) ----------------------------------------------------
__int64            _acrt_fenv_set_control(unsigned int a1)
{
  __int16 v1; // di
  unsigned int v2; // r8d
  int v3; // ecx
  __int16 v4; // r11
  __int16 v5; // r9
  __int16 v6; // bx
  __int16 v7; // r10
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // dx
  __int16 v11; // dx
  __int16 v12; // dx
  __int16 v13; // dx
  __int16 v14; // ax
  __int16 v15; // dx
  __int64 result; // rax

  v1 = 1024;
  v2 = (a1 & 0xC03FFFFF | (a1 >> 2) & 0xFC00000) >> 22;
  v3 = a1 & 0xC00;
  v4 = 2048;
  switch ( v3 )
  {
    case 1024:
      v5 = -32704;
      break;
    case 2048:
      v5 = 64;
      break;
    case 3072:
      v5 = 0x8000;
      break;
    default:
      v5 = 0;
      break;
  }
  v6 = 256;
  v7 = 512;
  v8 = v2 & 0x300;
  if ( (v2 & 0x300) != 0 )
  {
    switch ( v8 )
    {
      case 256:
        v9 = 0x2000;
        goto LABEL_16;
      case 512:
        v9 = 0x4000;
        goto LABEL_16;
      case 768:
        v9 = 24576;
        goto LABEL_16;
    }
  }
  v9 = 0;
LABEL_16:
  if ( (v2 & 1) != 0 )
    v10 = 4096;
  else
    v10 = 0;
  if ( (v2 & 2) == 0 )
    v4 = 0;
  v11 = v4 | v10;
  if ( (v2 & 4) == 0 )
    v1 = 0;
  v12 = v1 | v11;
  if ( (v2 & 8) == 0 )
    v7 = 0;
  v13 = v7 | v12;
  if ( (v2 & 0x10) != 0 )
    v14 = 128;
  else
    v14 = 0;
  v15 = v14 | v13;
  if ( (v2 & 0x20) == 0 )
    v6 = 0;
  result = (unsigned __int16)(v5 | v9 | v6 | v15) & 0xFFC0;
  _mm_setcsr(result | _mm_getcsr() & 0xFFFF003F);
  return result;
}


//----- (000000014026A18C) ----------------------------------------------------
__int64            _acrt_fenv_set_status(int a1)
{
  int v1; // et0
  int v2; // r8d

  v1 = _mm_getcsr();
  v2 = (2 * ((a1 & 0x20000000) != 0)) & 0x3F
     | ((a1 & 0x10000000) != 0)
     | ((unsigned __int8)(4 * ((a1 & 0x8000000) != 0))
      | (unsigned __int8)((8 * ((a1 & 0x4000000) != 0)) | (16 * ((a1 & 0x2000000) != 0)) | (32 * (HIBYTE(a1) & 1))))
     & 0x3F;
  _mm_setcsr(v2 | v1 & 0xFFFFFFC0);
  return v2 | v1 & 0xFFFFFFC0;
}


//----- (000000014026A210) ----------------------------------------------------
__int64            wcsnicoll(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int64 a3)
{
  if ( dword_140404A6C[19065283] )
    return wcsnicoll_l(a1, a2, a3, 0);
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
    return _ascii_wcsnicmp_sr(a1, a2, a3);
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0x7FFFFFFF;
}

// 14026A210: invalid function type 'int __cdecl wcsnicoll(const #49 *String1, const #49 *String2, #66 MaxCount)' has been ignored
// 14026A260: using guessed type __int64 __fastcall wcsnicoll_l(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026A260) ----------------------------------------------------
__int64            wcsnicoll_l(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        struct __crt_locale_pointers *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  _QWORD v11[3]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+48h] [rbp-10h]

  if ( !a3 )
    return 0;
  if ( a1 && a2 )
  {
    v8 = 0x7FFFFFFF;
    if ( a3 <= 0x7FFFFFFF )
    {
      sub_140213644((_LocaleUpdate *)v11, a4);
      v9 = *(_QWORD *)(v11[1] + 304LL);
      if ( v9 )
      {
        v10 = _acrt_CompareStringW(v9, 0x1001u, (__int64)a1, a3, (__int64)a2, a3);
        if ( v10 )
          v8 = v10 - 2;
        else
          *errno_sr() = 22;
      }
      else
      {
        v8 = _ascii_wcsnicmp_sr(a1, a2, a3);
      }
      if ( v12 )
        *(_DWORD *)(v11[0] + 936LL) &= ~2u;
    }
    else
    {
      *errno_sr() = 22;
      sub_14024CF6C();
    }
    return v8;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0x7FFFFFFF;
  }
}

// 14026A260: invalid function type 'int __cdecl wcsnicoll_l(const #49 *String1, const #49 *String2, #66 MaxCount, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026A350) ----------------------------------------------------
__int64            strnicoll_sr(__int64 a1, __int64 a2, __int64 a3)
{
  if ( dword_140404A6C[19065283] )
    return strnicoll_l(a1, a2, a3, 0);
  else
    return strnicmp_sr(a1, a2, a3);
}

// 14026A368: using guessed type __int64 __fastcall strnicoll_l(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026A368) ----------------------------------------------------
__int64            strnicoll_l(unsigned __int8 *a1, char *a2, unsigned __int64 a3, struct __crt_locale_pointers *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v11, a4);
  if ( a3 )
  {
    if ( a1 && a2 )
    {
      v7 = 0x7FFFFFFF;
      if ( a3 <= 0x7FFFFFFF )
      {
        v8 = *(_QWORD *)(Locale + 304);
        if ( v8 )
        {
          v9 = _acrt_CompareStringA(
                 (struct __crt_locale_pointers *)&Locale,
                 v8,
                 0x1001u,
                 a1,
                 a3,
                 a2,
                 a3,
                 *(_DWORD *)(Locale + 20));
          if ( v9 )
            v7 = v9 - 2;
          else
            *errno_sr() = 22;
        }
        else
        {
          v7 = strnicmp_l(a1, (unsigned __int8 *)a2, a3, (struct __crt_locale_pointers *)&Locale);
        }
      }
      else
      {
        *errno_sr() = 22;
        sub_14024CF6C();
      }
    }
    else
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      v7 = 0x7FFFFFFF;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v13 )
    *(_DWORD *)(v11 + 936) &= ~2u;
  return v7;
}

// 14026A368: invalid function type 'int __cdecl strnicoll_l(const char *String1, const char *String2, #66 MaxCount, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026A468) ----------------------------------------------------
__int64            InternalGetLocaleInfoA(
        struct sr_anon_68 *     a1,
             sr_anon_49 *     a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  unsigned int v8; // r12d
  signed int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rsp
  _QWORD *v14; // rbx
  _DWORD *v15; // rax
  __int64 v17; // [rsp+0h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  _QWORD v19[3]; // [rsp+40h] [rbp+0h] BYREF
  char v20; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+20h]

  unsigned int sr_ret = 0; /* edi: 0x14026A4C9 / 0x14026A590 xor edi, edi */
  sub_140213644((_LocaleUpdate *)v19, a1);
  v8 = *(_DWORD *)(v19[1] + 12LL);
  v9 = sub_14024F174((__int64)a2, a3, 0, 0);
  v10 = v9;
  if ( !v9 )
    goto LABEL_18;
  v11 = (2LL * v9 + 16) & -(__int64)(2LL * v9 < (unsigned __int64)(2LL * v9 + 16));
  if ( !v11 )
  {
    v14 = nullptr;
    goto LABEL_12;
  }
  if ( v11 <= 0x400 )
  {
    v12 = v11 + 15;
    if ( v11 + 15 < v11 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = v19;
    if ( &v17 == (__int64 *)-64LL )
      goto LABEL_15;
    LODWORD(v19[0]) = 52428;
    goto LABEL_10;
  }
  v15 = (_DWORD *)malloc_base();
  v14 = v15;
  if ( v15 )
  {
    *v15 = 56797;
LABEL_10:
    v14 += 2;
  }
LABEL_12:
  if ( v14 && (unsigned int)sub_14024F174((__int64)a2, a3, (__int64)v14, v10) )
  {
    LODWORD(v18) = a5;
    sr_ret = (unsigned int)sub_140258A84(v8, 0, (__int64)v14, 0xFFFFFFFFLL, a4 & -(__int64)(a5 != 0), v18, 0, 0); /* 0x14026A58C: mov edi, eax */
  }
LABEL_15:
  if ( v14 && *((_DWORD *)v14 - 4) == 56797 )
    free_base(v14 - 2);
LABEL_18:
  if ( v20 )
    *(_DWORD *)(v19[0] + 936LL) &= ~2u;
  return sr_ret; /* 0x14026A5B9: mov eax, edi */
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026A5E4) ----------------------------------------------------
__int64            _acrt_GetLocaleInfoA_sr(struct sr_anon_68 *a1, int a2,      sr_anon_49 *a3, unsigned int a4, __int64 *a5)
{
  int LocaleInfoA; // eax
  __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rax
  void *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-108h] BYREF
  int v19[2]; // [rsp+20h] [rbp-E8h]
  _DWORD v20[4]; // [rsp+30h] [rbp-D8h] BYREF
  char Source[128]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-48h]

  int sr_ret = -1; /* edi: 0x14026A6F2 or edi, 0xffffffff */
  *a5 = 0;
  switch ( a2 )
  {
    case 1:
      LocaleInfoA = InternalGetLocaleInfoA(a1, a3, a4, (__int64)Source, 128);
      v9 = LocaleInfoA;
      if ( LocaleInfoA )
      {
        *a5 = calloc_base();
        free_base(nullptr);
        if ( *a5 && (unsigned int)strncpy_s_sr((_BYTE *)*a5, v9, (__int64)Source, (int)v9 - 1) )
        {
          *(_QWORD *)v19 = 0;
          sub_14024CFBC();
          __debugbreak();
        }
        return *a5 ? 0 : (unsigned int)-1; /* 0x14026A65E: je -> or eax, 0xffffffff; else 0x14026A682: xor eax, eax */
      }
      if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 122 )
        return (unsigned int)-1; /* 0x14026A692: -> or eax, 0xffffffff */
      v10 = InternalGetLocaleInfoA(a1, a3, a4, 0, 0);
      if ( !v10 )
        return (unsigned int)-1; /* 0x14026A6B2: -> or eax, 0xffffffff */
      v11 = calloc_base();
      v12 = (void *)v11;
      if ( !v11 )
      {
LABEL_12:
        free_base(v12);
        return (unsigned int)sr_ret; /* 0x14026A6FD: mov eax, edi */
      }
      v13 = InternalGetLocaleInfoA(a1, a3, a4, v11, v10);
LABEL_10:
      if ( v13 )
      {
        v14 = (__int64)v12;
        v12 = nullptr;
        *a5 = v14;
        sr_ret = 0; /* edi stays 0 on this path */
      }
      goto LABEL_12;
    case 2:
      v15 = sub_14024F174((__int64)a3, a4, 0, 0);
      if ( !v15 )
        return (unsigned int)-1; /* 0x14026A71F: -> or eax, 0xffffffff */
      v16 = calloc_base();
      v12 = (void *)v16;
      if ( !v16 )
        goto LABEL_12;
      v13 = sub_14024F174((__int64)a3, a4, v16, v15);
      goto LABEL_10;
    case 0:
      v20[0] = 0;
      if ( (unsigned int)sub_14024F174((__int64)a3, a4 | 0x20000000, (__int64)v20, 2u) )
      {
        *(_BYTE *)a5 = v20[0];
        return 0; /* 0x14026A76D -> 0x14026A682: xor eax, eax */
      }
      break;
  }
  return (unsigned int)-1; /* 0x14026A772: or eax, 0xffffffff */
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014026A7AC) ----------------------------------------------------
__int64            _strncnt_sr(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( *a1 )
  {
    do
    {
      if ( result == a2 )
        break;
      ++result;
    }
    while ( a1[result] );
  }
  return result;
}


//----- (000000014026A7C4) ----------------------------------------------------
__int64            _acrt_OutputDebugStringA(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r8
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  _QWORD OutputString[2]; // [rsp+30h] [rbp+0h] BYREF

  v1 = a1;
  if ( a1 )
  {
    v2 = -1;
    do
      ++v2;
    while ( *(_BYTE *)(a1 + v2) );
    v3 = v2 + 1;
    if ( v3 )
    {
      v4 = 2 * v3 + 15;
      if ( v4 <= 2 * v3 )
        v4 = 0xFFFFFFFFFFFFFF0LL;
      v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
      v6 = alloca(v5);
      v7 = alloca(v5);
      if ( !(unsigned int)mbstowcs_s_sr((unsigned int)OutputString, (unsigned int)OutputString, v3, v1, v3 - 1) )
        ((void (           *)(_QWORD *))OutputDebugStringW)(OutputString);
    }
  }
  return 0; /* no caller reads the result */
}

// 14026E090: invalid function type 'void (__stdcall *OutputDebugStringW)(LPCWSTR lpOutputString)' has been ignored
// 14026C330: using guessed type __int64 __fastcall mbstowcs_s(_DWORD, _DWORD, _DWORD, _DWORD, __int64);

//----- (000000014026A860) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_943(_BYTE *a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // r9
  bool v4; // cf
  unsigned __int8 i; // al
  _QWORD v8[11]; // [rsp+0h] [rbp-58h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = 1;
  do
  {
    if ( !v4 )
      sub_1401F8694();
    *((_BYTE *)&v8[4] + v2++) = 0;
    v4 = (unsigned __int64)v2 < 0x20;
  }
  while ( v2 < 32 );
  for ( i = *a2; i; i = *v3 )
  {
    ++v3;
    *((_BYTE *)&v8[4] + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
  }
  while ( *a1
       && ((unsigned __int8)(1 << (*a1 & 7)) & *((_BYTE *)&v8[4] + ((unsigned __int64)(unsigned __int8)*a1 >> 3))) == 0 )
    ++a1;
  return *a1 ? (__int64)a1 : 0; /* 0x14026A8F3: mov rax, r8 at a match; 0x14026A8DF: xor eax, eax at the terminator */
}


//----- (000000014026A900) ----------------------------------------------------
char *        strpbrk_sr(     char *Str,      char *Control)
{
  __int64 v2; // r11
       __m128i *v3; // rdi
  char *v4; // r8
  __m128i v5; // xmm1
  unsigned int v6; // eax
  unsigned int v7; // r9d
  BOOL v8; // r10d
  __m128i v9; // xmm2
  unsigned int v10; // eax
  unsigned int v12; // ecx
  char v13; // al
  __m128i v14; // xmm0
  __m128i v15; // xmm0

  v2 = (unsigned __int8)Control & 0xF;
  v3 = (     __m128i *)&Control[-v2];
  v4 = (char *)Str;
  v5 = _mm_loadu_si128((     __m128i *)&Control[-v2]);
  switch ( (unsigned __int8)Control & 0xF )
  {
    case 1:
      v5 = _mm_srli_si128(v5, 1);
      break;
    case 2:
      v5 = _mm_srli_si128(v5, 2);
      break;
    case 3:
      v5 = _mm_srli_si128(v5, 3);
      break;
    case 4:
      v5 = _mm_srli_si128(v5, 4);
      break;
    case 5:
      v5 = _mm_srli_si128(v5, 5);
      break;
    case 6:
      v5 = _mm_srli_si128(v5, 6);
      break;
    case 7:
      v5 = _mm_srli_si128(v5, 7);
      break;
    case 8:
      v5 = _mm_srli_si128(v5, 8);
      break;
    case 9:
      v5 = _mm_srli_si128(v5, 9);
      break;
    case 0xA:
      v5 = _mm_srli_si128(v5, 10);
      break;
    case 0xB:
      v5 = _mm_srli_si128(v5, 11);
      break;
    case 0xC:
      v5 = _mm_srli_si128(v5, 12);
      break;
    case 0xD:
      v5 = _mm_srli_si128(v5, 13);
      break;
    case 0xE:
      v5 = _mm_srli_si128(v5, 14);
      break;
    case 0xF:
      v5 = _mm_srli_si128(v5, 15);
      break;
    default:
      break;
  }
  v6 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), v5));
  if ( v6 )
  {
    _BitScanForward(&v7, v6);
    v8 = ((unsigned __int8)Control & 0xF) == 0 || v7 < (unsigned __int64)(16 - v2);
    if ( 15 - v7 <= 0xF )
    {
      switch ( 15 - v7 )
      {
        case 0u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 1), 1);
          break;
        case 1u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 2), 2);
          break;
        case 2u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 3), 3);
          break;
        case 3u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 4), 4);
          break;
        case 4u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 5), 5);
          break;
        case 5u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 6), 6);
          break;
        case 6u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 7), 7);
          break;
        case 7u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 8), 8);
          break;
        case 8u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 9), 9);
          break;
        case 9u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 10), 10);
          break;
        case 0xAu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 11), 11);
          break;
        case 0xBu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 12), 12);
          break;
        case 0xCu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 13), 13);
          break;
        case 0xDu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 14), 14);
          break;
        case 0xEu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 15), 15);
          break;
        case 0xFu:
          v5 = _mm_cvtsi64_si128((long long)(0));
          break;
      }
    }
    if ( !v8 )
      goto LABEL_40;
  }
  else
  {
    if ( ((unsigned __int8)Control & 0xF) != 0 )
    {
LABEL_40:
      v9 = _mm_loadu_si128(v3 + 1);
      v10 = _mm_movemask_epi8(_mm_cmpeq_epi8(v9, _mm_cvtsi32_si128((int)(0LL))));
      if ( !v10 )
        return (char *)unknown_libname_943(v4, (unsigned __int8 *)Control);
      _BitScanForward(&v12, v10);
      if ( (unsigned __int64)v12 - v2 < 0xFFFFFFFFFFFFFFF0uLL && v12 - v2 != 0 )
        return (char *)unknown_libname_943(v4, (unsigned __int8 *)Control);
      switch ( 15 - v12 )
      {
        case 0u:
          v9 = _mm_slli_si128(v9, 1);
          break;
        case 1u:
          v9 = _mm_slli_si128(v9, 2);
          break;
        case 2u:
          v9 = _mm_slli_si128(v9, 3);
          break;
        case 3u:
          v9 = _mm_slli_si128(v9, 4);
          break;
        case 4u:
          v9 = _mm_slli_si128(v9, 5);
          break;
        case 5u:
          v9 = _mm_slli_si128(v9, 6);
          break;
        case 6u:
          v9 = _mm_slli_si128(v9, 7);
          break;
        case 7u:
          v9 = _mm_slli_si128(v9, 8);
          break;
        case 8u:
          v9 = _mm_slli_si128(v9, 9);
          break;
        case 9u:
          v9 = _mm_slli_si128(v9, 10);
          break;
        case 0xAu:
          v9 = _mm_slli_si128(v9, 11);
          break;
        case 0xBu:
          v9 = _mm_slli_si128(v9, 12);
          break;
        case 0xCu:
          v9 = _mm_slli_si128(v9, 13);
          break;
        case 0xDu:
          v9 = _mm_slli_si128(v9, 14);
          break;
        case 0xEu:
          v9 = _mm_slli_si128(v9, 15);
          break;
        case 0xFu:
          v9 = _mm_cvtsi64_si128((long long)(0));
          break;
        default:
          break;
      }
      v5 = _mm_or_si128(v9, v5);
      goto LABEL_64;
    }
    if ( SR_VEC_PTR_LANES(128, v3, i8)[1] )
      return (char *)unknown_libname_943(Str, (unsigned __int8 *)Control);
  }
LABEL_64:
  v13 = *v4;
  if ( !*v4 )
    return nullptr;
  while ( 1 )
  {
    v14 = _mm_cvtsi32_si128(v13);
    v15 = _mm_unpacklo_epi8(v14, v14);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi8(v15, v15), 0), v5)) )
      break;
    v13 = *++v4;
    if ( !v13 )
      return nullptr;
  }
  return v4;
}


//----- (000000014026ACE0) ----------------------------------------------------
unsigned __int8 *        mbsdec_sr(     unsigned __int8 *Start,      unsigned __int8 *Pos)
{
  return mbsdec_l(Start, Pos, 0);
}

// 14026ACE8: using guessed type unsigned __int8 *__fastcall mbsdec_l(_QWORD, _QWORD, _QWORD);

//----- (000000014026ACE8) ----------------------------------------------------
unsigned __int8 *           mbsdec_l(unsigned __int64 a1, unsigned __int64 a2, struct __crt_locale_pointers *a3)
{
  unsigned __int8 *v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+38h] [rbp-10h]

  if ( !a1 || !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return nullptr;
  }
  if ( a1 >= a2 )
    return nullptr;
  sub_140213644((_LocaleUpdate *)&v7, a3);
  v6 = (unsigned __int8 *)(a2 - 1);
  if ( *(_DWORD *)(v8 + 8) )
  {
    do
      --v6;
    while ( a1 <= (unsigned __int64)v6 && (*(_BYTE *)(*v6 + v8 + 25) & 4) != 0 );
    v6 = (unsigned __int8 *)(a2 - (((_BYTE)a2 - (_BYTE)v6) & 1) - 1);
  }
  if ( v9 )
    *(_DWORD *)(v7 + 936) &= ~2u;
  return v6;
}

// 14026ACE8: invalid function type 'unsigned __int8 *__cdecl mbsdec_l(const unsigned __int8 *Start, const unsigned __int8 *Pos, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026AD7C) ----------------------------------------------------
_BOOL8 initialize_multibyte()
{
  return sub_14025F520() == 0;
}


//----- (000000014026AD9C) ----------------------------------------------------
__int64            msize(__int64 a1)
{
  if ( a1 )
    return ((__int64 (           *)(_QWORD, _QWORD, __int64))HeapSize)(*(_QWORD *)&dword_140404A6C[19065847], 0, a1);
  *errno_sr() = 22;
  sub_14024CF6C();
  return -1;
}

// 14026AD9C: invalid function type '#66 __cdecl msize(void *Block)' has been ignored
// 14026E018: invalid function type 'SIZE_T (__stdcall *HeapSize)(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026ADD8) ----------------------------------------------------
__int64            _ascii_wcsicmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // r8d
  int v5; // edx
  int v6; // r9d
  int v7; // ecx
  __int64 result; // rax

  do
  {
    v4 = *a1++;
    v5 = *a2++;
    v6 = v4 + 32;
    if ( (unsigned int)(v4 - 65) > 0x19 )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned int)(v5 - 65) > 0x19 )
      v7 = v5;
    result = (unsigned int)(v6 - v7);
  }
  while ( !(_DWORD)result && v6 );
  return result;
}


//----- (000000014026AE18) ----------------------------------------------------
__int64            sub_14026AE18(unsigned __int16 *a1, unsigned __int16 *a2)
{
  if ( dword_140404A6C[19065283] )
    return sub_14026AE60(a1, a2, nullptr);
  if ( a1 && a2 )
    return _ascii_wcsicmp(a1, a2);
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0x7FFFFFFF;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026AE60) ----------------------------------------------------
__int64            sub_14026AE60(unsigned __int16 *a1, unsigned __int16 *a2, struct __crt_locale_pointers *a3)
{
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rbx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  int v10; // ebp
  int v11; // edi
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+38h] [rbp-20h]

  v3 = a2;
  v4 = a1;
  if ( a1 && a2 )
  {
    sub_140213644((_LocaleUpdate *)&v14, a3);
    v6 = v15[0];
    if ( *(_QWORD *)(v15[0] + 312LL) )
    {
      do
      {
        if ( *v4 >= 0x100u )
        {
          v9 = sub_14026B084(*v4, (struct __crt_locale_pointers *)v15);
          v6 = v15[0];
        }
        else
        {
          v8 = *(unsigned __int8 *)v4;
          if ( (wctype[v8 + 1] & 1) != 0 )
            LOBYTE(v8) = *(_BYTE *)(v8 + *(_QWORD *)(v6 + 272));
          v9 = (unsigned __int8)v8;
        }
        ++v4;
        v10 = v9;
        v11 = v9;
        if ( *v3 >= 0x100u )
        {
          v13 = sub_14026B084(*v3, (struct __crt_locale_pointers *)v15);
          v6 = v15[0];
        }
        else
        {
          v12 = *(unsigned __int8 *)v3;
          if ( (wctype[v12 + 1] & 1) != 0 )
            LOBYTE(v12) = *(_BYTE *)(v12 + *(_QWORD *)(v6 + 272));
          v13 = (unsigned __int8)v12;
        }
        ++v3;
        v7 = v11 - v13;
      }
      while ( !v7 && v10 );
    }
    else
    {
      v7 = _ascii_wcsicmp(v4, v3);
    }
    if ( v16 )
      *(_DWORD *)(v14 + 936) &= ~2u;
    return v7;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0x7FFFFFFF;
  }
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026AF88) ----------------------------------------------------
int         wcscmp_sr(     sr_anon_49 *String1,      sr_anon_49 *String2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *(unsigned __int16 *)String2;
  v3 = *(unsigned __int16 *)String1 - v2;
  if ( !v3 )
  {
    v4 = (intptr_t)((uintptr_t)String1 - (uintptr_t)String2);
    do
    {
      if ( !(_WORD)v2 )
        break;
      String2 = (     sr_anon_49 *)((char *)String2 + 2);
      v2 = *(unsigned __int16 *)String2;
      v3 = *(unsigned __int16 *)((char *)String2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}


//----- (000000014026AFC8) ----------------------------------------------------
int         fegetexceptflag(fexcept_t *Except, int TestFlags)
{
  int v3; // edi
  int status; // ebx

  v3 = TestFlags & 0x1F;
  if ( (TestFlags & 0x1F) != 0 )
  {
    status = _acrt_fenv_get_status();
    *(_DWORD *)Except = status & _acrt_fenv_get_fp_status_word_from_exception_mask_sr(v3);
  }
  else
  {
    *(_DWORD *)Except &= v3;
  }
  return 0;
}


//----- (000000014026B014) ----------------------------------------------------
int         fesetexceptflag_sr(     sr_anon_69 *Except, int SetFlags)
{
  int v3; // edx
  int fp_status_word_from_exception_mask; // edi
  int v5; // ebx
  int status; // eax
  int v7; // ebx
  char v8; // si
  int result; // eax

  v3 = SetFlags & 0x1F;
  result = false;
  if ( v3 )
  {
    fp_status_word_from_exception_mask = _acrt_fenv_get_fp_status_word_from_exception_mask_sr(v3);
    v5 = _acrt_fenv_get_fp_status_word_from_exception_mask_sr(63) & *(_DWORD *)Except;
    status = _acrt_fenv_get_status();
    v7 = fp_status_word_from_exception_mask & v5;
    v8 = v7 | ~(_BYTE)fp_status_word_from_exception_mask & status;
    _acrt_fenv_set_status(v7 | ~fp_status_word_from_exception_mask & status);
    if ( fetestexcept(v8 & 0x1F) != (v8 & 0x1F) )
      return true;
  }
  return result;
}


//----- (000000014026B084) ----------------------------------------------------
__int64            sub_14026B084(unsigned __int16 a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // dx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  char v8; // [rsp+48h] [rbp-10h]
  unsigned __int16 v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 v10; // [rsp+70h] [rbp+18h] BYREF

  v9 = a1;
  result = 0xFFFF;
  if ( a1 != 0xFFFF )
  {
    sub_140213644((_LocaleUpdate *)&v6, a2);
    v3 = v9;
    if ( v9 >= 0x100u )
    {
      v4 = *(_QWORD *)(v7 + 312);
      if ( v4 )
      {
        v5 = _acrt_LCMapStringW(v4, 0x100u, (__int64)&v9, 1, (__int64)&v10, 1);
        v3 = v9;
        if ( v5 )
          v3 = v10;
      }
    }
    else if ( (((     unsigned char *)&wctype[1])[2 * (unsigned __int8)v9] & 1) != 0 )
    {
      v3 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 272) + (unsigned __int8)v9);
    }
    else
    {
      v3 = (unsigned __int8)v9;
    }
    if ( v8 )
      *(_DWORD *)(v6 + 936) &= ~2u;
    return v3;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 14028BD12: using guessed type _BYTE byte_14028BD12[2];

//----- (000000014026B148) ----------------------------------------------------
__int64            __crt_seh_guarded_call__int__operator_call___lambda_63911f43cc86614963252b1f423aad40___lambda_522ac1b1e1a1180d6f374a882b81d1c8___lambda_6da5eaf298b4749753c721cc8c61e051_(
        __int64 a1,
        unsigned int *a2,
        _DWORD **a3,
        unsigned int *a4)
{
  unsigned int v6; // ebx

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) != 0 )
  {
    v6 = chsize_nolock((int)**a3, *(_QWORD *)a3[1]);
  }
  else
  {
    v6 = 9;
    *errno_sr() = 9;
  }
  sub_140261150(*a4);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026B1C0) ----------------------------------------------------
__int64            sub_14026B1C0(unsigned int a1, _DWORD **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return __crt_seh_guarded_call__int__operator_call___lambda_63911f43cc86614963252b1f423aad40___lambda_522ac1b1e1a1180d6f374a882b81d1c8___lambda_6da5eaf298b4749753c721cc8c61e051_(
           (__int64)&v3,
           &v5,
           a2,
           &v4);
}


//----- (000000014026B204) ----------------------------------------------------
__crt_seek_guard *           __crt_seek_guard____crt_seek_guard(__crt_seek_guard *this, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax

  *(_QWORD *)this = lseeki64_nolock(a2, 0, 1u);
  v6 = lseeki64_nolock(a2, 0, 2u);
  *((_QWORD *)this + 1) = v6;
  *((_QWORD *)this + 2) = a3 - v6;
  *((_DWORD *)this + 6) = a2;
  return this;
}


//----- (000000014026B26C) ----------------------------------------------------
__int64            _lambda_522ac1b1e1a1180d6f374a882b81d1c8___operator_call(_DWORD **a1)
{
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a1 >> 6) + 19065401] + 72LL * (**a1 & 0x3F) + 56) & 1) != 0 )
    return chsize_nolock((unsigned int)**a1, *(_QWORD *)a1[1]);
  *errno_sr() = 9;
  return 9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026B2D0) ----------------------------------------------------
int         chsize(int FileHandle, int Size)
{
  return -((unsigned int)chsize_s(FileHandle, Size) != 0);
}

// 14026B454: using guessed type __int64 __fastcall chsize_s(_QWORD, _QWORD);

//----- (000000014026B2E8) ----------------------------------------------------
__int64            chsize_nolock(__int64 FileHandle, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // edi
  __m128i *v8; // rbx
  int v9; // r14d
  unsigned int v10; // r8d
  int v11; // eax
  __int64 osfhandle; // rax
  _DWORD *v13; // rbx

  v3 = FileHandle;
  v4 = lseeki64_nolock(FileHandle, 0, 1u);
  v5 = lseeki64_nolock(v3, 0, 2u);
  v6 = a2 - v5;
  if ( v4 == -1 || v5 == -1 )
    goto LABEL_20;
  v7 = 0;
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      goto LABEL_21;
    if ( lseeki64_nolock(v3, a2, 0) != -1 )
    {
      osfhandle = get_osfhandle(v3);
      if ( (unsigned int)((__int64 (           *)(__int64))SetEndOfFile)(osfhandle) )
        goto LABEL_21;
      *errno_sr() = 13;
      v13 = sub_14024D19C();
      *v13 = ((__int64 (*)(void))GetLastError)();
    }
LABEL_20:
    v7 = *errno_sr();
    goto LABEL_21;
  }
  v8 = (__m128i *)calloc_base();
  if ( v8 )
  {
    v9 = sub_140247C1C(v3, 0x8000);
    while ( 1 )
    {
      v10 = v6;
      if ( v6 >= 4096 )
        v10 = 4096;
      v11 = sub_140253B04(v3, v8, v10);
      if ( v11 == -1 )
        break;
      v6 -= v11;
      if ( v6 <= 0 )
      {
        sub_140247C1C(v3, v9);
        goto LABEL_14;
      }
    }
    if ( *(_DWORD *)sub_14024D19C() == 5 )
      *errno_sr() = 13;
  }
  else
  {
    *errno_sr() = 12;
  }
  v7 = *errno_sr();
LABEL_14:
  free_base(v8);
LABEL_21:
  lseeki64_nolock(v3, v4, 0);
  return v7;
}

// 14026E010: invalid function type 'BOOL (__stdcall *SetEndOfFile)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014026B454) ----------------------------------------------------
__int64            chsize_s(int a1, __int64 a2)
{
  int *v3; // rax
  unsigned int v4; // ebx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v6[4]; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  char v9; // [rsp+70h] [rbp+28h] BYREF
  int v10; // [rsp+78h] [rbp+30h] BYREF

  v8 = a2;
  v7 = a1;
  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    return 9;
  }
  if ( a1 >= 0
    && a1 < dword_140404A6C[19065657]
    && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    if ( a2 >= 0 )
    {
      v10 = a1;
      v6[0] = &v7;
      v5 = a1;
      v6[1] = &v8;
      return __crt_seh_guarded_call__int__operator_call___lambda_63911f43cc86614963252b1f423aad40___lambda_522ac1b1e1a1180d6f374a882b81d1c8___lambda_6da5eaf298b4749753c721cc8c61e051_(
               (__int64)&v9,
               (unsigned int *)&v5,
               v6,
               (unsigned int *)&v10);
    }
    *(_DWORD *)sub_14024D19C() = 0;
    v3 = errno_sr();
    v4 = 22;
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 0;
    v3 = errno_sr();
    v4 = 9;
  }
  *v3 = v4;
  sub_14024CF6C();
  return v4;
}

// 14026B454: invalid function type 'errno_t __cdecl chsize_s(int FileHandle, __int64 Size)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026B530) ----------------------------------------------------
__int64            umask_s(unsigned int a1, _DWORD *a2)
{
  if ( !a2 || (*a2 = dword_140404A6C[19065861], (a1 & 0xFFFFFE7F) != 0) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  else
  {
    dword_140404A6C[19065861] = a1;
    return 0;
  }
}

// 14026B530: invalid function type 'errno_t __cdecl umask_s(int NewMode, int *OldMode)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA80: using guessed type unsigned int;

//----- (000000014026B570) ----------------------------------------------------
__int64            __crt_mbstring____mbrtoc32_utf8(__int64 a1, char *a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int *v4; // r11
  char *v5; // rdi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rsi
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // bl
  unsigned int v12; // edx
  unsigned __int64 v13; // r9
  char v14; // cl
  _DWORD v16[12]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  v4 = &dword_140404A6C[19065863];
  v5 = Parameters;
  if ( a4 )
    v4 = a4;
  if ( a2 )
    v5 = a2;
  v7 = 1;
  if ( a2 )
    v7 = a3;
  v8 = (_DWORD *)(a1 & -(__int64)(a2 != nullptr));
  if ( v7 )
  {
    if ( *((_WORD *)v4 + 3) )
    {
      v10 = *((_BYTE *)v4 + 4);
      v12 = *v4;
      v11 = *((_BYTE *)v4 + 6);
      if ( (unsigned __int8)(v10 - 2) > 2u || !v11 || v11 >= v10 )
        goto LABEL_37;
    }
    else
    {
      v9 = *v5++;
      if ( (v9 & 0x80u) == 0 )
      {
        if ( v8 )
          *v8 = v9;
        return v9 != 0; /* 0x14026B5F9: setne r10b; mov rax, r10 */
      }
      if ( (v9 & 0xE0) == 0xC0 )
      {
        v10 = 2;
      }
      else if ( (v9 & 0xF0) == 0xE0 )
      {
        v10 = 3;
      }
      else
      {
        if ( (v9 & 0xF8) != 0xF0 )
          goto LABEL_37;
        v10 = 4;
      }
      v11 = v10;
      v12 = v9 & ((1 << (7 - v10)) - 1);
    }
    v13 = v11;
    if ( v11 >= v7 )
      v13 = v7;
    while ( v5 - a2 < v13 )
    {
      v14 = *v5++;
      if ( (v14 & 0xC0) != 0x80 )
        goto LABEL_37;
      v12 = (v12 << 6) | v14 & 0x3F;
    }
    if ( v13 < v11 )
    {
      *((_WORD *)v4 + 2) = v10;
      *((_WORD *)v4 + 3) = (unsigned __int8)(v11 - v13);
      *v4 = v12;
      return -2; /* 0x14026B6CC -> 0x14026B5CD: mov rax, 0xfffffffffffffffe */
    }
    if ( v12 - 55296 > 0x7FF && v12 < 0x110000 )
    {
      v16[8] = 128;
      v16[9] = 2048;
      v16[10] = 0x10000;
      if ( v12 >= v16[v10 + 6] )
      {
        if ( v8 )
          *v8 = v12;
        *(_QWORD *)v4 = 0;
        return v12 ? (unsigned __int64)v11 : 0; /* 0x14026B70F: neg edx; sbb rax, rax; and rax, rbp */
      }
    }
LABEL_37:
    *(_QWORD *)v4 = 0;
    *errno_sr() = 42;
    return -1; /* 0x14026B72A: or rax, 0xffffffffffffffff */
  }
  return -2; /* 0x14026B5CD: mov rax, 0xfffffffffffffffe */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026B754) ----------------------------------------------------
__int64            console_output_reopen_and_retry___lambda_61c1b8a38cedca4df5fdc542e6ccae6d_(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx

  v2 = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))WriteConsoleW)(
         hObject,
         *a1,
         *((unsigned int *)a1 + 2),
         a1[2],
         0);
  if ( !v2 && (unsigned int)((__int64 (*)(void))GetLastError)() == 6 )
  {
    if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
      ((void (*)(void))CloseHandle)();
    v3 = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
           L"CONOUT$",
           0x40000000,
           3,
           0,
           3,
           0,
           0);
    v4 = a1[2];
    v5 = *((unsigned int *)a1 + 2);
    v6 = *a1;
    hObject = v3;
    return (unsigned int)((__int64 (           *)(__int64, __int64, __int64, __int64, _QWORD))WriteConsoleW)(
                           v3,
                           v6,
                           v5,
                           v4,
                           0);
  }
  return v2;
}

// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored
// 140293860: using guessed type __int16 FileName[8];

//----- (000000014026B818) ----------------------------------------------------
__int64            sub_14026B818(__int64 a1)
{
  return ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WriteConsoleW)(
           hObject,
           *(_QWORD *)a1,
           *(unsigned int *)(a1 + 8),
           *(_QWORD *)(a1 + 16),
           0);
}

// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored

//----- (000000014026B840) ----------------------------------------------------
__int64 sub_14026B840()
{
  __int64 result; // rax

  result = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
             L"CONOUT$",
             0x40000000,
             3,
             0,
             3,
             0,
             0);
  hObject = result;
  return result;
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored
// 140293860: using guessed type __int16 FileName[8];

//----- (000000014026B87C) ----------------------------------------------------
__int64 _dcrt_lowio_ensure_console_output_initialized()
{
  __int64 v0; // rax
  unsigned int v1; // ebx

  v0 = hObject;
  v1 = 0;
  if ( hObject == -2 )
  {
    v0 = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
           L"CONOUT$",
           0x40000000,
           3,
           0,
           3,
           0,
           0);
    hObject = v0;
  }
  LOBYTE(v1) = v0 != -1;
  return v1;
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored
// 140293860: using guessed type __int16 FileName[8];

//----- (000000014026B8D0) ----------------------------------------------------
__int64 sub_14026B8D0()
{
  __int64 result; // rax

  if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
    return ((__int64 (*)(void))CloseHandle)();
  return result;
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored

//----- (000000014026B8EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_946(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx

  v6 = ((__int64 (           *)(_QWORD, __int64, _QWORD, __int64, _QWORD))WriteConsoleW)(hObject, a1, a2, a3, 0);
  if ( !v6 && (unsigned int)((__int64 (*)(void))GetLastError)() == 6 )
  {
    if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
      ((void (*)(void))CloseHandle)();
    hObject = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
                L"CONOUT$",
                0x40000000,
                3,
                0,
                3,
                0,
                0);
    return (unsigned int)((__int64 (           *)(_QWORD, __int64, _QWORD, __int64, _QWORD))WriteConsoleW)(
                           hObject,
                           a1,
                           a2,
                           a3,
                           0);
  }
  return v6;
}

// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored
// 140293860: using guessed type __int16 FileName[8];

//----- (000000014026B9AC) ----------------------------------------------------
int         fegetenv(fenv_t *Env)
{
  *(_DWORD *)Env = _acrt_fenv_get_control_sr();
  *((_DWORD *)Env + 1) = _acrt_fenv_get_status();
  return 0;
}


//----- (000000014026B9CC) ----------------------------------------------------
int         fesetenv_sr(     sr_anon_70 *Env)
{
  __int64 Enva; // [rsp+30h] [rbp+8h] BYREF

  _acrt_fenv_set_control(*(_DWORD *)Env);
  _acrt_fenv_set_status(*((_DWORD *)Env + 1));
  Enva = 0;
  return fegetenv((fenv_t *)&Enva) || *(_QWORD *)Env != Enva;
}


//----- (000000014026BA18) ----------------------------------------------------
int         feholdexcept_sr(sr_anon_70 *Env)
{
  __int64 v2; // rax
  __int64 Enva; // [rsp+38h] [rbp+10h] BYREF

  Enva = 0;
  if ( fegetenv((fenv_t *)&Enva) )
    return 1;
  v2 = Enva;
  LODWORD(Enva) = Enva | 0x1F;
  *(_QWORD *)Env = v2;
  if ( fesetenv_sr((     sr_anon_70 *)&Enva) )
    return 1;
  clearfp();
  return 0;
}


//----- (000000014026BA68) ----------------------------------------------------
double         ceil(double X)
{
  double v1; // rdx
  unsigned __int64 v2; // rax
  _BOOL8 v3; // r8
  double v4; // rax

  v1 = X;
  v2 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v3 = *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL);
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x4340000000000000LL )
  {
    if ( v2 >= 0x3FF0000000000000LL )
    {
      *(_QWORD *)&v4 = *(_QWORD *)&X & ~((1LL << (51 - (unsigned __int8)(*(_QWORD *)&X >> 52))) - 1);
      X = v4;
      if ( !v3 && *(_QWORD *)&v4 != *(_QWORD *)&v1 )
        return v4 + 1.0;
    }
    else if ( v2 )
    {
      if ( *(_QWORD *)&X == (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
        return 1.0;
      else
        return -0.0;
    }
  }
  else if ( v2 > 0x7FF0000000000000LL )
  {
    return handle_nan_sr(*(__int64 *)&X);
  }
  return X;
}


//----- (000000014026BB2C) ----------------------------------------------------
__int64            _acrt_CompareStringW(__int64 a1, unsigned int a2, __m128i *a3, int a4, __m128i *a5, int a6)
{
  unsigned int v6; // ebx
  int v10; // eax
  __int64 result; // rax
  int v12; // ebx

  v6 = a4;
  if ( a4 > 0 )
    v6 = sub_140254F48(a3, a4);
  v10 = a6;
  if ( a6 > 0 )
    v10 = sub_140254F48(a5, a6);
  if ( v6 && v10 )
    return sub_14024EDE0(a1, a2, (__int64)a3, v6, (__int64)a5, v10, 0, 0, 0);
  v12 = v6 - v10;
  result = ((v12 >> 31) & 0xFFFFFFFE) + 3;
  if ( !v12 )
    return 2;
  return result;
}


//----- (000000014026BBEC) ----------------------------------------------------
__int64            InternalCompareStringA(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        char *String,
        int a7,
        unsigned int CodePage)
{
  int v8; // ebx
  int v11; // esi
  unsigned int v12; // r14d
  unsigned __int8 *i; // rax
  unsigned __int8 *j; // rax
  signed int v15; // eax
  unsigned int v16; // r12d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  void *v19; // rsp
  unsigned int *v20; // rdi
  unsigned int *v21; // rax
  int v22; // eax
  int v23; // r15d
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  void *v26; // rsp
  unsigned int *v27; // rbx
  unsigned int *v28; // rax
  _BYTE v30[32]; // [rsp+0h] [rbp-50h] BYREF
  unsigned int *v31; // [rsp+20h] [rbp-30h]
  unsigned int v32; // [rsp+28h] [rbp-28h]
  unsigned int v33; // [rsp+50h] [rbp+0h] BYREF
  __int64 v34; // [rsp+58h] [rbp+8h]
  _DWORD CPInfo[6]; // [rsp+60h] [rbp+10h] BYREF
  __int64 v36; // [rsp+78h] [rbp+28h]

  v8 = a5;
  v33 = a3;
  unsigned int sr_ret = 0; /* esi: 0x14026BEED / 0x14026BF07 xor esi, esi */
  v34 = a2;
  if ( a5 <= 0 )
  {
    if ( a5 < -1 )
      return 0; /* 0x14026BC49: -> xor eax, eax */
  }
  else
  {
    v8 = _strncnt_sr(a4, a5);
  }
  v11 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < -1 )
      return 0; /* 0x14026BC6D: -> xor eax, eax */
  }
  else
  {
    v11 = _strncnt_sr(String, a7);
  }
  v12 = CodePage;
  if ( !CodePage )
    v12 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( !v8 || !v11 )
  {
    if ( v8 == v11 )
      return 2; /* 0x14026BC94: -> mov eax, 2 */
    if ( v11 > 1 )
      return 1; /* 0x14026BC9D: -> mov eax, 1 */
    if ( v8 > 1 )
      return 3; /* 0x14026BCA6: -> mov eax, 3 */
    if ( !(unsigned int)((__int64 (           *)(_QWORD, _DWORD *))GetCPInfo)(v12, CPInfo) )
    {
      return 0; /* 0x14026BCB7: -> xor eax, eax */
    }
    if ( v8 > 0 )
    {
      if ( CPInfo[0] >= 2u )
      {
        for ( i = (unsigned __int8 *)&CPInfo[1] + 2; *i; i += 2 )
        {
          if ( !i[1] )
            break;
          if ( *a4 >= *i && *a4 <= i[1] )
            return 2; /* 0x14026BCE1: jbe -> mov eax, 2 */
        }
      }
      return 3; /* 0x14026BCF0: mov eax, 3 */
    }
    if ( v11 > 0 )
    {
      if ( CPInfo[0] >= 2u )
      {
        for ( j = (unsigned __int8 *)&CPInfo[1] + 2; *j; j += 2 )
        {
          if ( !j[1] )
            break;
          if ( (unsigned __int8)*String >= *j && (unsigned __int8)*String <= j[1] )
            return 2; /* 0x14026BD1F: jbe -> mov eax, 2 */
        }
      }
      return 1; /* 0x14026BD2E: mov eax, 1 */
    }
  }
  v32 = 0;
  v31 = nullptr;
  v15 = sub_140259504();
  v16 = v15;
  if ( !v15 )
    return 0; /* 0x14026BD5A: -> xor eax, eax */
  v17 = (2LL * v15 + 16) & -(__int64)(2LL * v15 < (unsigned __int64)(2LL * v15 + 16));
  if ( !v17 )
  {
    v20 = nullptr;
    goto LABEL_42;
  }
  if ( v17 <= 0x400 )
  {
    v18 = v17 + 15;
    if ( v17 + 15 < v17 )
      v18 = 0xFFFFFFFFFFFFFF0LL;
    v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
    v20 = &v33;
    if ( v30 == (_BYTE *)-80LL )
      goto LABEL_61;
    v33 = 52428;
    goto LABEL_40;
  }
  v21 = (unsigned int *)malloc_base();
  v20 = v21;
  if ( v21 )
  {
    *v21 = 56797;
LABEL_40:
    v20 += 4;
  }
LABEL_42:
  if ( v20 )
  {
    v32 = v16;
    v31 = v20;
    if ( (unsigned int)sub_140259504() )
    {
      v32 = 0;
      v31 = nullptr;
      v22 = sub_140259504();
      v23 = v22;
      if ( v22 )
      {
        v24 = (2LL * v22 + 16) & -(__int64)(2LL * v22 < (unsigned __int64)(2LL * v22 + 16));
        if ( !v24 )
        {
          v27 = nullptr;
          goto LABEL_55;
        }
        if ( v24 > 0x400 )
        {
          v28 = (unsigned int *)malloc_base();
          v27 = v28;
          if ( !v28 )
          {
LABEL_55:
            if ( v27 )
            {
              v32 = v23;
              v31 = v27;
              if ( (unsigned int)sub_140259504() )
                sr_ret = (unsigned int)sub_14024EDE0(v34, v33, (__int64)v20, v16, (__int64)v27, v23, 0, 0, 0); /* 0x14026BEE9: mov esi, eax */
            }
LABEL_58:
            if ( v27 && *(v27 - 4) == 56797 )
              free_base(v27 - 4);
            goto LABEL_61;
          }
          *v28 = 56797;
        }
        else
        {
          v25 = v24 + 15;
          if ( v24 + 15 < v24 )
            v25 = 0xFFFFFFFFFFFFFF0LL;
          v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
          v27 = &v33;
          if ( v30 == (_BYTE *)-80LL )
            goto LABEL_58;
          v33 = 52428;
        }
        v27 += 4;
        goto LABEL_55;
      }
    }
  }
LABEL_61:
  if ( v20 && *(v20 - 4) == 56797 )
    free_base(v20 - 4);
  return sr_ret; /* 0x14026BF1F: mov eax, esi */
}

// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored

//----- (000000014026BF4C) ----------------------------------------------------
__int64            _acrt_CompareStringA(
        struct __crt_locale_pointers *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        char *a6,
        int a7,
        unsigned int a8)
{
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-20h] BYREF

  sub_140213644((_LocaleUpdate *)&v12, a1);
  result = InternalCompareStringA((__int64)v13, a2, a3, a4, a5, a6, a7, a8);
  if ( v13[16] )
    *(_DWORD *)(v12 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026BFD8) ----------------------------------------------------
unsigned __int64            _mbstowcs_l_helper(sr_anon_115 *this, char *a2,      char **a3, struct __crt_locale_pointers *a4)
{
  sr_anon_115 *v5; // rdi
  unsigned __int64 v6; // rbx
  char *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r15d
  char *i; // rsi
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+48h] [rbp-8h]
  unsigned __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  char *v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = a2;
  v5 = this;
  v6 = 0;
  if ( this )
  {
    if ( !a3 )
      return 0;
    *(_WORD *)this = 0;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return -1;
  }
  sub_140213644((_LocaleUpdate *)&v15, a4);
  if ( *(_DWORD *)(v16 + 12) == 65001 )
  {
    v18 = 0;
    v6 = __crt_mbstring____mbsrtowcs_utf8(v5, &v19, a3, (unsigned int *)&v18);
    goto LABEL_32;
  }
  if ( v5 )
  {
    if ( !*(_QWORD *)(v16 + 312) )
    {
      if ( a3 )
      {
        v8 = v19;
        do
        {
          *(_WORD *)v5 = (unsigned __int8)v8[v6];
          if ( !v8[v6] )
            break;
          ++v6;
          v5 = (sr_anon_115 *)((char *)v5 + 2);
        }
        while ( v6 < (unsigned __int64)a3 );
      }
      goto LABEL_32;
    }
    v6 = -1;
    v9 = sub_140259504();
    v10 = v9;
    if ( !v9 )
    {
      if ( (unsigned int)((__int64 (           *)(_QWORD))GetLastError)(0) != 122 )
        goto LABEL_24;
      v11 = (int)a3;
      for ( i = v19; v11; ++i )
      {
        --v11;
        if ( !*i )
          break;
        if ( (unsigned int)isleadbyte_l((unsigned __int8)*i, (struct __crt_locale_pointers *)&v16) )
        {
          if ( !*++i )
            goto LABEL_24;
        }
      }
      v13 = sub_140259504();
      if ( v13 )
      {
        v6 = v13;
      }
      else
      {
LABEL_24:
        *errno_sr() = 42;
        *(_WORD *)v5 = 0;
      }
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  v6 = -1;
  if ( *(_QWORD *)(v16 + 312) )
  {
    v14 = sub_140259504();
    v10 = v14;
    if ( !v14 )
    {
      *errno_sr() = 42;
      goto LABEL_32;
    }
LABEL_31:
    v6 = v10 - 1;
    goto LABEL_32;
  }
  do
    ++v6;
  while ( v19[v6] );
LABEL_32:
  if ( v17 )
    *(_DWORD *)(v15 + 936) &= ~2u;
  return v6;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026C1E0) ----------------------------------------------------
__int64            mbstowcs_s_l(
        unsigned __int64 *a1,
        sr_anon_115 *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 MaxCount,
        struct __crt_locale_pointers *Locale)
{
  unsigned int v10; // ebx
       char **v11; // r8
  int *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-30h] BYREF

  v10 = 0;
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_3;
LABEL_12:
    v10 = 22;
    *errno_sr() = 22;
    sub_14024CF6C();
    return v10;
  }
  if ( !a3 )
    goto LABEL_12;
LABEL_3:
  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a1 )
    *a1 = 0;
  sub_140213644((_LocaleUpdate *)&v16, Locale);
  v11 = (     char **)MaxCount;
  if ( MaxCount > a3 )
    v11 = (     char **)a3;
  if ( (unsigned __int64)v11 <= 0x7FFFFFFF )
  {
    v13 = _mbstowcs_l_helper(a2, a4, v11, (struct __crt_locale_pointers *)v17);
    if ( v13 == -1 )
    {
      if ( a2 )
        *(_WORD *)a2 = 0;
      v10 = *errno_sr();
      goto LABEL_26;
    }
    v14 = v13 + 1;
    if ( a2 )
    {
      if ( v14 > a3 )
      {
        if ( MaxCount != -1 )
        {
          *(_WORD *)a2 = 0;
          v12 = errno_sr();
          v10 = 34;
          goto LABEL_21;
        }
        v14 = a3;
        v10 = 80;
      }
      *((_WORD *)a2 + v14 - 1) = 0;
    }
    if ( a1 )
      *a1 = v14;
    goto LABEL_26;
  }
  v12 = errno_sr();
  v10 = 22;
LABEL_21:
  *v12 = v10;
  sub_14024CF6C();
LABEL_26:
  if ( v17[16] )
    *(_DWORD *)(v16 + 936) &= ~2u;
  return v10;
}

// 14026C1E0: invalid function type 'errno_t __cdecl mbstowcs_s_l(#66 *PtNumOfCharConverted, #49 *DstBuf, #66 SizeInWords, const char *SrcBuf, #66 MaxCount, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014026C330) ----------------------------------------------------
__int64            mbstowcs_s_sr(unsigned __int64 *a1, sr_anon_115 *a2, unsigned __int64 a3, char *a4, unsigned __int64 MaxCount)
{
  return mbstowcs_s_l(a1, a2, a3, a4, MaxCount, nullptr);
}

// 14026C330: invalid function type 'errno_t __cdecl mbstowcs_s(#66 *PtNumOfCharConverted, #49 *DstBuf, #66 SizeInWords, const char *SrcBuf, #66 MaxCount)' has been ignored

//----- (000000014026C350) ----------------------------------------------------
int         fetestexcept(int Flags)
{
  int Except; // [rsp+38h] [rbp+10h] BYREF

  Except = 0;
  fegetexceptflag((fexcept_t *)&Except, Flags);
  return Except & 0x1F;
}


//----- (000000014026C374) ----------------------------------------------------
__int64            _acrt_LCMapStringW(__int64 a1, unsigned int a2, __m128i *a3, int a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // eax
  bool v11; // sf
  bool v12; // of

  v6 = a4;
  if ( a4 > 0 )
  {
    v10 = sub_140254F48(a3, a4);
    v12 = sr_export_ofsub32(v10, v6);
    v11 = (int)(v10 - v6) < 0;
    v6 = v10 + 1;
    if ( v11 == v12 )
      v6 = v10;
  }
  return sub_14024F4D0(a1, a2, (__int64)a3, v6, a5, a6, 0, 0, 0);
}


//----- (000000014026C520) ----------------------------------------------------
unsigned int         clearfp()
{
  char fpsr; // bl
  unsigned int v1; // r9d
  int v2; // r8d
  int v3; // ecx
  int v4; // edx

  fpsr = get_fpsr();
  fclrf_sr();
  v1 = 0;
  if ( (fpsr & 0x3F) != 0 )
  {
    v2 = (16 * (fpsr & 1)) | 8;
    if ( (fpsr & 4) == 0 )
      v2 = 16 * (fpsr & 1);
    v3 = v2 | 4;
    if ( (fpsr & 8) == 0 )
      v3 = v2;
    v4 = v3 | 2;
    if ( (fpsr & 0x10) == 0 )
      v4 = v3;
    v1 = v4 | 1;
    if ( (fpsr & 0x20) == 0 )
      v1 = v4;
    if ( (fpsr & 2) != 0 )
      v1 |= 0x80000u;
  }
  return v1;
}


//----- (000000014026C670) ----------------------------------------------------
void         set_controlfp(unsigned int NewValue, unsigned int Mask)
{
  if ( NewValue != 589855 || Mask != -1 || (_mm_getcsr() & 0xFEC0) != 0x1E80 )
    common_control87(NewValue, Mask & 0xFFF7FFFF);
}


//----- (000000014026C708) ----------------------------------------------------
__int64            common_control87(int a1, int a2)
{
  int v3; // r12d
  unsigned int fpsr; // eax
  __int16 v5; // r10
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // ebx
  int v28; // ebx

  v3 = a2 & 0x308031F;
  fpsr = get_fpsr();
  v5 = fpsr;
  v6 = (fpsr >> 3) & 0x10 | 8;
  if ( (fpsr & 0x200) == 0 )
    v6 = (fpsr >> 3) & 0x10;
  v7 = v6 | 4;
  if ( (fpsr & 0x400) == 0 )
    v7 = v6;
  v8 = v7 | 2;
  if ( (fpsr & 0x800) == 0 )
    v8 = v7;
  v9 = v8 | 1;
  if ( (fpsr & 0x1000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80000;
  if ( (fpsr & 0x100) == 0 )
    v10 = v9;
  v11 = fpsr & 0x6000;
  if ( (v5 & 0x6000) != 0 )
  {
    switch ( v11 )
    {
      case 8192:
        v10 |= 0x100u;
        break;
      case 16384:
        v10 |= 0x200u;
        break;
      case 24576:
        v10 |= 0x300u;
        break;
    }
  }
  v12 = (v5 & 0x8040) - 64;
  if ( v12 )
  {
    v13 = v12 - 32704;
    if ( v13 )
    {
      if ( v13 == 64 )
        v10 |= 0x1000000u;
    }
    else
    {
      v10 |= 0x3000000u;
    }
  }
  else
  {
    v10 |= 0x2000000u;
  }
  v14 = v3 & a1 | v10 & ~v3;
  if ( v14 != v10 )
  {
    v15 = (8 * (v14 & 0x10)) | 0x200;
    if ( (v14 & 8) == 0 )
      v15 = 8 * (v14 & 0x10);
    v16 = v15 | 0x400;
    if ( (v14 & 4) == 0 )
      v16 = v15;
    v17 = v16 | 0x800;
    if ( (v14 & 2) == 0 )
      v17 = v16;
    v18 = v17 | 0x1000;
    if ( (v14 & 1) == 0 )
      v18 = v17;
    v19 = v18 | 0x100;
    if ( (v14 & 0x80000) == 0 )
      v19 = v18;
    v20 = v14 & 0x300;
    if ( (v14 & 0x300) != 0 )
    {
      switch ( v20 )
      {
        case 256:
          v19 |= 0x2000u;
          break;
        case 512:
          v19 |= 0x4000u;
          break;
        case 768:
          v19 |= 0x6000u;
          break;
      }
    }
    v21 = v14 & 0x3000000;
    switch ( v21 )
    {
      case 16777216:
        v19 |= 0x8040u;
        break;
      case 33554432:
        v19 |= 0x40u;
        break;
      case 50331648:
        v19 |= 0x8000u;
        break;
    }
    if ( byte_140302B98 && (v19 & 0x40) != 0 )
    {
      set_fpsr_sr(v19);
    }
    else
    {
      v19 &= ~0x40u;
      set_fpsr_sr(v19);
    }
    v22 = (v19 >> 3) & 0x10 | 8;
    if ( (v19 & 0x200) == 0 )
      v22 = (v19 >> 3) & 0x10;
    v23 = v22 | 4;
    if ( (v19 & 0x400) == 0 )
      v23 = v22;
    v24 = v23 | 2;
    if ( (v19 & 0x800) == 0 )
      v24 = v23;
    v25 = v24 | 1;
    if ( (v19 & 0x1000) == 0 )
      v25 = v24;
    v10 = v25 | 0x80000;
    if ( (v19 & 0x100) == 0 )
      v10 = v25;
    v26 = v19 & 0x6000;
    if ( (v19 & 0x6000) != 0 )
    {
      switch ( v26 )
      {
        case 8192:
          v10 |= 0x100u;
          break;
        case 16384:
          v10 |= 0x200u;
          break;
        case 24576:
          v10 |= 0x300u;
          break;
      }
    }
    v27 = (v19 & 0x8040) - 64;
    if ( v27 )
    {
      v28 = v27 - 32704;
      if ( v28 )
      {
        if ( v28 == 64 )
          v10 |= 0x1000000u;
      }
      else
      {
        v10 |= 0x3000000u;
      }
    }
    else
    {
      v10 |= 0x2000000u;
    }
  }
  return v10;
}

// 140302B98: using guessed type char byte_140302B98;

//----- (000000014026C9C6) ----------------------------------------------------
// attributes: thunk
__int64 sub_14026C9C6()
{
  return SDL_free();
}

// 14026E3D8: using guessed type __int64 SDL_free();

//----- (000000014026C9CC) ----------------------------------------------------
// attributes: thunk
__int64 sub_14026C9CC()
{
  return SDL_SetMainReady();
}

// 14026E3E0: using guessed type __int64 SDL_SetMainReady();

//----- (000000014026C9D2) ----------------------------------------------------
// attributes: thunk
__int64 sub_14026C9D2()
{
  return SDL_iconv_string();
}

// 14026E3E8: using guessed type __int64 SDL_iconv_string();

//----- (000000014026C9D8) ----------------------------------------------------
// attributes: thunk
__int64 sub_14026C9D8()
{
  return SDL_wcslen();
}

// 14026E3F0: using guessed type __int64 SDL_wcslen();

//----- (000000014026C9DE) ----------------------------------------------------
// attributes: thunk
__int64 sub_14026C9DE()
{
  return SDL_calloc();
}

// 14026E3F8: using guessed type __int64 SDL_calloc();

//----- (000000014026C9F0) ----------------------------------------------------
__int64            sub_14026C9F0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rdx

  v2 = 0;
  v3 = a1 + *(int *)(a1 + 60);
  result = v3 + *(unsigned __int16 *)(v3 + 20) + 24LL;
  if ( !*(_WORD *)(v3 + 6) )
    return 0;
  while ( 1 )
  {
    v6 = *(unsigned int *)(result + 12);
    if ( a2 >= v6 && a2 < (unsigned int)(v6 + *(_DWORD *)(result + 8)) )
      break;
    ++v2;
    result += 40;
    if ( v2 >= *(unsigned __int16 *)(v3 + 6) )
      return 0;
  }
  return result;
}


//----- (000000014026CA40) ----------------------------------------------------
__int64            sub_14026CA40(__int64 a1)
{
  __int64 result; // rax

  result = sub_14026CA90(0x140000000LL);
  if ( (_DWORD)result )
  {
    result = sub_14026C9F0(0x140000000LL, a1 - 0x140000000LL);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}


//----- (000000014026CA90) ----------------------------------------------------
_BOOL8            sub_14026CA90(__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = false;
  if ( *(_WORD *)a1 == 23117 )
  {
    v1 = a1 + *(int *)(a1 + 60);
    if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 523 )
      return true;
  }
  return result;
}


//----- (000000014026CAC0) ----------------------------------------------------
__int64            sub_14026CAC0(unsigned int *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 result; // rax

  v8 = *(_QWORD *)(a4 + 56) + 16LL * **(unsigned int **)(a4 + 56);
  sub_1401F8958(a2, a4, v8 + 4);
  result = 1;
  if ( ((((a1[1] & 0x66) != 0) + 1) & *(_DWORD *)(v8 + 4)) != 0 )
    return sub_1401FCF80(a1, a2, a3, a4);
  return result;
}


//----- (000000014026CD20) ----------------------------------------------------
__int64            sub_14026CD20(__int64 a1, __int64 a2)
{
  return ((__int64 (           *)(__int64, __int64, _QWORD, _QWORD))RtlUnwind)(a1, a2, 0, 0);
}

// 14026E308: invalid function type 'void (__stdcall *RtlUnwind)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)' has been ignored

//----- (000000014026CD4C) ----------------------------------------------------
__m128i *           sub_14026CD4C(unsigned __int64 a1, int a2)
{
  __m128i *v2; // r9
  __m128i *v3; // r8
       __m128i *v4; // rdx
  __int64 v5; // rax
  __m128i *v7; // r10
  int v8; // r8d
  __m128i v9; // xmm2
  unsigned int v10; // edx
  int i; // ecx
  __int64 v12; // rcx
  __m128i *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int8 *v16; // rcx
  __m128i v17; // xmm0
  unsigned __int8 v18; // zf
  int v19; // ecx

  v2 = nullptr;
  v3 = (__m128i *)a1;
  if ( a2 )
  {
    if ( dword_140302080 >= 2 )
    {
      while ( ((unsigned __int8)v3 & 0xF) != 0 )
      {
        if ( SR_VEC_PTR_LANES(128, v3, i8)[0] == a2 )
          v2 = v3;
        if ( !SR_VEC_PTR_LANES(128, v3, i8)[0] )
          return v2;
        v3 = (__m128i *)((char *)v3 + 1);
      }
      v17 = _mm_cvtsi32_si128((unsigned __int8)a2);
      while ( 1 )
      {
        v19 = _mm_cmpistri(v17, *v3, 64);
        v18 = _mm_cmpistrz(v17, *v3, 64);
        if ( _mm_cmpistrc(v17, *v3, 64) )
        {
          v2 = (__m128i *)((char *)v3 + v19);
          v18 = _mm_cmpistrz(v17, *v3, 64);
        }
        if ( v18 )
          break;
        ++v3;
      }
    }
    else
    {
      v7 = (__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
      v8 = -1 << (a1 & 0xF);
      v9 = _mm_shuffle_epi32(
             _mm_shufflelo_epi16(_mm_cvtsi32_si128((unsigned __int8)a2 | ((unsigned __int8)a2 << 8)), 0),
             0);
      v10 = v8 & _mm_movemask_epi8(_mm_cmpeq_epi8(v9, *(__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)));
      for ( i = v8 & _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *(__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)));
            !i;
            v10 = _mm_movemask_epi8(_mm_cmpeq_epi8(v9, *v7)) )
      {
        _BitScanReverse((unsigned int *)&v12, v10);
        v13 = (__m128i *)((char *)v7 + v12);
        if ( v10 )
          v2 = v13;
        i = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *++v7));
      }
      v14 = ((i & -i) - 1) & v10;
      _BitScanReverse((unsigned int *)&v15, v14);
      v16 = &SR_VEC_PTR_LANES(128, v7, i8)[v15];
      if ( v14 )
        return (__m128i *)v16;
    }
    return v2;
  }
  else
  {
    v4 = (     __m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
    for ( LODWORD(v5) = (-1 << (a1 & 0xF))
                      & _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((     __m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)), _mm_cvtsi32_si128((int)(0LL))));
          !(_DWORD)v5;
          LODWORD(v5) = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v4), _mm_cvtsi32_si128((int)(0LL)))) )
    {
      ++v4;
    }
    _BitScanForward((unsigned int *)&v5, v5);
    return (__m128i *)((char *)v4 + v5);
  }
}

// 14026CD96: variable 'v5' is possibly undefined
// 14026CDFF: variable 'v12' is possibly undefined
// 14026CE2F: variable 'v15' is possibly undefined
// 140302080: using guessed type int dword_140302080;

//----- (000000014026CE7C) ----------------------------------------------------
__int8 *           sub_14026CE7C(__int64 a1, unsigned __int8 a2)
{
  __m128i *v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  __m128i v5; // xmm2
  __int64 v6; // rdx
  __int8 *v7; // rdx

  v2 = (__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
  v3 = a2 | (a2 << 8);
  v4 = 0;
  v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v3), 0), 0);
  for ( LODWORD(v6) = (-1 << (a1 & 0xF))
                    & _mm_movemask_epi8(
                        _mm_or_si128(
                          _mm_cmpeq_epi8(v5, *(__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)),
                          _mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *(__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL))));
        !(_DWORD)v6;
        LODWORD(v6) = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(v5, *v2), _mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *v2))) )
  {
    ++v2;
  }
  _BitScanForward((unsigned int *)&v6, v6);
  v7 = &SR_VEC_PTR_LANES(128, v2, i8)[v6];
  if ( *v7 == (_BYTE)v3 )
    return v7;
  return (__int8 *)v4;
}

// 14026CEEB: variable 'v6' is possibly undefined

//----- (000000014026CEFC) ----------------------------------------------------
     __m128i *           sub_14026CEFC(     __m128i *a1, unsigned __int16 a2)
{
  __int64 v3; // r9
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  _WORD *v9; // r8

  v3 = 0;
  v4 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a2), 0), 0);
  while ( ((unsigned __int16)a1 & 0xFFFu) > 0xFF0uLL )
  {
    if ( SR_VEC_PTR_LANES(128, a1, i16)[0] == a2 )
      return a1;
    if ( !SR_VEC_PTR_LANES(128, a1, i16)[0] )
      return nullptr;
    v7 = 2;
LABEL_8:
    a1 = (     __m128i *)((char *)a1 + v7);
  }
  v5 = _mm_loadu_si128(a1);
  v6 = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi16(_mm_cvtsi32_si128((int)(0LL)), v5), _mm_cmpeq_epi16(v5, v4)));
  if ( !v6 )
  {
    v7 = 16;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v8, v6);
  v9 = (__int16 *)((char *)SR_VEC_PTR_LANES(128, a1, i16) + v8);
  if ( *v9 == a2 )
    return (     __m128i *)v9;
  return (     __m128i *)v3;
}

// 14026CF5F: variable 'v8' is possibly undefined

//----- (000000014026CFC0) ----------------------------------------------------
_BOOL8            IsNonwritableInCurrentImage_filt_0(_DWORD **a1)
{
  return **a1 == -1073741819;
}


//----- (000000014026CFD8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
int            unknown_libname_947(unsigned int **ExceptionPtr)
{
  return sub_14024502C(**ExceptionPtr, (struct sr_anon_67 *)ExceptionPtr);
}


//----- (000000014026CFF6) ----------------------------------------------------
__int64            sub_14026CFF6(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  *(_QWORD *)(a2 + 56) = a1;
  *(_QWORD *)(a2 + 48) = a1;
  if ( *(_BYTE *)(a2 + 88) )
  {
    *(_QWORD *)(a2 + 40) = **(_QWORD **)(a2 + 48);
    if ( **(_DWORD **)(a2 + 40) == -529697949
      && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 24LL) == 4
      && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065504
       || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065505
       || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065506) )
    {
      *(_QWORD *)(sub_1401FD83C() + 32) = *(_QWORD *)(a2 + 40);
      v3 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL);
      *(_QWORD *)(sub_1401FD83C() + 40) = v3;
      terminate_sr();
    }
  }
  *(_DWORD *)(a2 + 32) = 0;
  return *(unsigned int *)(a2 + 32);
}


//----- (000000014026D098) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_948()
{
  return sub_1401FDA5C(0);
}


//----- (000000014026D0AE) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D0AE(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  *(_QWORD *)(a2 + 80) = a1;
  *(_QWORD *)(a2 + 72) = a1;
  *(_QWORD *)(sub_1401FD83C() + 112) = *(_QWORD *)(a2 + 128);
  v3 = *(_QWORD *)(**(_QWORD **)(a2 + 72) + 56LL);
  *(_QWORD *)(sub_1401FD83C() + 104) = v3;
  sub_140209250(
    **(struct EHExceptionRecord ***)(a2 + 72),
    *(unsigned __int64 **)(a2 + 136),
    *(struct CMFCToolBarImages **)(a2 + 144),
    *(_QWORD *)(a2 + 152),
    *(struct _s_FuncInfo **)(a2 + 160),
    0,
    0,
    1u);
  *(_QWORD *)(sub_1401FD83C() + 112) = 0;
  *(_DWORD *)(a2 + 64) = 1;
  return 1;
}


//----- (000000014026D13F) ----------------------------------------------------
__int64            sub_14026D13F(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  *(_QWORD *)(a2 + 80) = a1;
  *(_QWORD *)(a2 + 72) = a1;
  *(_QWORD *)(sub_1401FD83C() + 112) = *(_QWORD *)(a2 + 128);
  v3 = *(_QWORD *)(**(_QWORD **)(a2 + 72) + 56LL);
  *(_QWORD *)(sub_1401FD83C() + 104) = v3;
  *(_DWORD *)(sub_1401FD83C() + 120) = *(_DWORD *)(a2 + 184);
  sub_140209488(
    **(struct EHExceptionRecord ***)(a2 + 72),
    *(unsigned __int64 **)(a2 + 136),
    *(struct CMFCToolBarImages **)(a2 + 144),
    *(_QWORD *)(a2 + 152),
    *(struct FH4__FuncInfo4 **)(a2 + 160),
    0,
    0,
    1u);
  *(_QWORD *)(sub_1401FD83C() + 112) = 0;
  *(_DWORD *)(a2 + 64) = 1;
  return 1;
}


//----- (000000014026D1DE) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D1DE(struct _EXCEPTION_POINTERS *a1, __int64 a2)
{
  *(_QWORD *)(a2 + 88) = (uint64)(uintptr_t)(a1);
  return sub_14020A20C(a1, *(struct EHExceptionRecord **)(a2 + 184), (int *)(a2 + 32));
}

// 14020A20C: using guessed type __int64 __fastcall sub_14020A20C(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int *a3);

//----- (000000014026D203) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D203(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  sub_140207578(*(_QWORD *)(a2 + 56));
  if ( !*(_DWORD *)(a2 + 32) )
  {
    v3 = *(_QWORD *)(a2 + 184);
    if ( *(_DWORD *)v3 == -529697949
      && *(_DWORD *)(v3 + 24) == 4
      && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2
      && (unsigned int)sub_1401FD260(*(_QWORD *)(v3 + 40)) )
    {
      sub_1401FD18C(v3);
    }
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = *(_QWORD *)(a2 + 192);
  result = sub_1401FD83C();
  *(_QWORD *)(result + 40) = *(_QWORD *)(a2 + 64);
  return result;
}


//----- (000000014026D27B) ----------------------------------------------------
__int64            sub_14026D27B(struct _EXCEPTION_POINTERS *a1, __int64 a2)
{
  *(_QWORD *)(a2 + 128) = (uint64)(uintptr_t)(a1);
  return sub_14020A294(a1, *(struct EHExceptionRecord **)(a2 + 248), *(_DWORD *)(a2 + 232), (int *)(a2 + 32));
}


//----- (000000014026D2AA) ----------------------------------------------------
__int64            sub_14026D2AA(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  sub_140207578(*(_QWORD *)(a2 + 72));
  if ( !*(_DWORD *)(a2 + 32) )
  {
    v3 = *(_QWORD *)(a2 + 248);
    if ( *(_DWORD *)v3 == -529697949
      && *(_DWORD *)(v3 + 24) == 4
      && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2
      && (unsigned int)sub_1401FD260(*(_QWORD *)(v3 + 40)) )
    {
      sub_1401FD18C(v3);
    }
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(sub_1401FD83C() + 40) = *(_QWORD *)(a2 + 56);
  result = sub_1401FD83C();
  *(_DWORD *)(result + 120) = *(_DWORD *)(a2 + 224);
  return result;
}


//----- (000000014026D32D) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D32D(__int64 a1)
{
  return sub_1401FD2BC(a1);
}


//----- (000000014026D343) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 sub_14026D343()
{
  __int64 result; // rax

  result = sub_1401FD83C();
  if ( *(int *)(result + 48) > 0 )
  {
    result = sub_1401FD83C();
    --*(_DWORD *)(result + 48);
  }
  return result;
}


//----- (000000014026D366) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D366(__int64 a1)
{
  return sub_1401FD2BC(a1);
}


//----- (000000014026D37C) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 sub_14026D37C()
{
  __int64 result; // rax

  result = sub_1401FD83C();
  if ( *(int *)(result + 48) > 0 )
  {
    result = sub_1401FD83C();
    --*(_DWORD *)(result + 48);
  }
  return result;
}


//----- (000000014026D39F) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_949(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 32) )
    sub_14025065C(*(_QWORD *)(a2 + 64));
  return sub_14020B5EC(*(_QWORD *)(a2 + 64));
}


//----- (000000014026D3CA) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_950(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 32) )
    sub_14025065C(*(_QWORD *)(a2 + 64));
  return sub_14020B5EC(*(_QWORD *)(a2 + 64));
}


//----- (000000014026D3F5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_951(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 48));
}


//----- (000000014026D40D) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_952(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 64));
}


//----- (000000014026D427) ----------------------------------------------------
__int64            sub_14026D427(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 72));
}


//----- (000000014026D441) ----------------------------------------------------
__int64            fread_s_fin_0(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 96));
}


//----- (000000014026D459) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_953(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 48));
}


//----- (000000014026D471) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_954(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 48));
}


//----- (000000014026D489) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_955_0(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 48));
}


//----- (000000014026D4A1) ----------------------------------------------------
__int64            sub_14026D4A1(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D4BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_956(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 56));
}


//----- (000000014026D4D4) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D4EF) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup2(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D50A) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup3(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D525) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup4(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D540) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup5(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D55B) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup6(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D576) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup7(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D591) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup8(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D5AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_957()
{
  return sub_140258BB8(6);
}


//----- (000000014026D5C5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_958()
{
  return sub_140258BB8(6);
}


//----- (000000014026D5DE) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_959()
{
  return sub_140258BB8(6);
}


//----- (000000014026D5F7) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
int            unknown_libname_960(unsigned int **ExceptionPtr)
{
  return sub_14024502C(**ExceptionPtr, (struct sr_anon_67 *)ExceptionPtr);
}


//----- (000000014026D615) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
int            unknown_libname_961(unsigned int **ExceptionPtr)
{
  return sub_14024502C(**ExceptionPtr, (struct sr_anon_67 *)ExceptionPtr);
}


//----- (000000014026D633) ----------------------------------------------------
__int64            sub_14026D633(__int64 a1, __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D64D) ----------------------------------------------------
_BOOL8            __lambda_6e4b09c48022b2350581041d5f6b0c4c__operator_____1___filt$0(unsigned int **a1)
{
  return atexit_exception_filter(**a1);
}


//----- (000000014026D668) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D682) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup2(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D69C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_962(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 64));
}


//----- (000000014026D6B3) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup3(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D6CD) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup4(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D6E7) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_9431c60049192bb82166e0947f95a2e9___lambda_85fa512c59a4d94d4a89f575eefd92a6___lambda_487febba6ca58d9ce348204d67e1dba3______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 88));
}


//----- (000000014026D701) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_5df02c53a8f32f81fd64e5bbb78039f1___lambda_2af78c5f5901b1372d98f9ab3177dfa6___lambda_f51fe5fd7c79a33db34fc9310f277369______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = **(_QWORD **)(a2 + 72);
  result = *(_QWORD *)v2;
  *(_DWORD *)(*(_QWORD *)v2 + 936LL) &= ~0x10u;
  return result;
}


//----- (000000014026D722) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup5(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D73C) ----------------------------------------------------
__int64 free_locale_fin_1()
{
  return sub_140258BB8(5);
}


//----- (000000014026D755) ----------------------------------------------------
__int64 free_locale_fin_0()
{
  return sub_140258BB8(4);
}


//----- (000000014026D76E) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
_BOOL8            unknown_libname_963(_DWORD **a1)
{
  return **a1 == -1073741819 || **a1 == -1073741795;
}


//----- (000000014026D79A) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup6(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D7B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_964()
{
  return sub_140258BB8(8);
}


//----- (000000014026D7CD) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup9(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D7E8) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_886d6c58226a84441f68b9f2b8217b83___lambda_ab61a845afdef5b7c387490eaf3616ee___lambda_f7f22ab5edc0698d5f6905b0d3f44752______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 152));
}


//----- (000000014026D805) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup10(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026D820) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_965()
{
  return sub_140258BB8(7);
}


//----- (000000014026D839) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_966()
{
  return sub_140258BB8(8);
}


//----- (000000014026D852) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup7(
        __int64 a1,
        __int64 a2)
{
  return sub_140261150(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D86C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_967(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 64));
}


//----- (000000014026D883) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_968(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 80));
}


//----- (000000014026D89A) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_969(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 80));
}


//----- (000000014026D8B1) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_970(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 80));
}


//----- (000000014026D8C8) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup8(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D8E2) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup9(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D8FC) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup10(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D916) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup11(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026D930) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_971(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 56));
}


//----- (000000014026D948) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_972(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 48));
}


//----- (000000014026D960) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_973(__int64 a1, __int64 a2)
{
  return sub_14020B5EC(*(_QWORD *)(a2 + 56));
}


//----- (000000014026D978) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_974()
{
  return sub_140258BB8(11);
}


//----- (000000014026D991) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_975()
{
  return sub_140258BB8(11);
}


//----- (000000014026D9AA) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_976()
{
  return sub_140258BB8(11);
}


//----- (000000014026D9C3) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_977()
{
  return sub_140258BB8(11);
}


//----- (000000014026D9DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_978()
{
  return sub_140258BB8(11);
}


//----- (000000014026D9F5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_979()
{
  return sub_140258BB8(11);
}


//----- (000000014026DA0E) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup11(
        __int64 a1,
        __int64 a2)
{
  return sub_14020B5EC(**(_QWORD **)(a2 + 72));
}


//----- (000000014026DA29) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup12(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026DA43) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_980()
{
  return sub_140258BB8(3);
}


//----- (000000014026DA5C) ----------------------------------------------------
__int64            raise_fin_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 112) )
    return sub_140258BB8(3);
  return result;
}


//----- (000000014026DA7D) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_981()
{
  return sub_140258BB8(3);
}


//----- (000000014026DA96) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup13(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026DAB0) ----------------------------------------------------
__int64 _update_thread_multibyte_data_internal____1___fin$0()
{
  return sub_140258BB8(5);
}


//----- (000000014026DAC9) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_982()
{
  return sub_140258BB8(0);
}


//----- (000000014026DADF) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_983()
{
  return sub_140258BB8(0);
}


//----- (000000014026DAF5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_984()
{
  return sub_140258BB8(7);
}


//----- (000000014026DB0E) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_985()
{
  return sub_140258BB8(7);
}


//----- (000000014026DB27) ----------------------------------------------------
__int64            open_osfhandle_fin_0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( !*(_BYTE *)(a2 + 32) )
  {
    v2 = 9LL * (*(_DWORD *)(a2 + 72) & 0x3F);
    v3 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)*(int *)(a2 + 72) >> 6) + 19065401];
    *(_BYTE *)(v3 + 8 * v2 + 56) &= ~1u;
  }
  return sub_140261150(*(_DWORD *)(a2 + 72));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026DB68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_986()
{
  return sub_140258BB8(4);
}


//----- (000000014026DB81) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup14(
        __int64 a1,
        __int64 a2)
{
  return sub_140261150(**(_DWORD **)(a2 + 72));
}


//----- (000000014026DB9B) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_987(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  if ( a2[30] )
  {
    if ( a2[16] )
    {
      v2 = 9LL * (a2[24] & 0x3F);
      v3 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)a2[24] >> 6) + 19065401];
      *(_BYTE *)(v3 + 8 * v2 + 56) &= ~1u;
    }
    return sub_140261150(a2[24]);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026DBE2) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_988(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  if ( a2[30] )
  {
    if ( a2[16] )
    {
      v2 = 9LL * (a2[24] & 0x3F);
      v3 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)a2[24] >> 6) + 19065401];
      *(_BYTE *)(v3 + 8 * v2 + 56) &= ~1u;
    }
    return sub_140261150(a2[24]);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026DC29) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_989(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 64) )
  {
    if ( *(_DWORD *)(a2 + 68) )
    {
      v2 = 9LL * (**(_DWORD **)(a2 + 128) & 0x3F);
      v3 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)**(int **)(a2 + 128) >> 6) + 19065401];
      *(_BYTE *)(v3 + 8 * v2 + 56) &= ~1u;
    }
    return sub_140261150(**(_DWORD **)(a2 + 128));
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026DC7C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_990(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 64) )
  {
    if ( *(_DWORD *)(a2 + 68) )
    {
      v2 = 9LL * (**(_DWORD **)(a2 + 128) & 0x3F);
      v3 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)**(int **)(a2 + 128) >> 6) + 19065401];
      *(_BYTE *)(v3 + 8 * v2 + 56) &= ~1u;
    }
    return sub_140261150(**(_DWORD **)(a2 + 128));
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014026DCCF) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup15(
        __int64 a1,
        __int64 a2)
{
  return sub_140258BB8(**(_DWORD **)(a2 + 72));
}


//----- (000000014026DCE9) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup16(
        __int64 a1,
        __int64 a2)
{
  return sub_140261150(**(_DWORD **)(a2 + 72));
}


//----- (000000014026DD03) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
_BOOL8            unknown_libname_991(_DWORD **a1)
{
  return **a1 == -1073741819 || **a1 == -1073741795;
}


//----- (000000014026DD30) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
_BOOL8            _try_walk____1___filt$0(_DWORD **a1)
{
  return **a1 == -1073741819;
}


//----- (000000014026DD50) ----------------------------------------------------
void            sub_14026DD50()
{
  qword_140301EF8 = (__int64)&off_140279B18;
  if ( (byte_140301F00 & 1) != 0 )
    SteamAPI_UnregisterCallback(&qword_140301EF8);
  qword_140301ED8 = (__int64)&off_140279AC8;
  if ( (byte_140301EE0 & 1) != 0 )
    SteamAPI_UnregisterCallback(&qword_140301ED8);
  off_140301EB8 = &off_140279A78;
  if ( (byte_140301EC0 & 1) != 0 )
    SteamAPI_UnregisterCallback(&off_140301EB8);
  off_140301E90 = &off_140279A58;
  if ( qword_140301EA0 )
  {
    SteamAPI_UnregisterCallResult(&off_140301E90);
    qword_140301EA0 = 0;
  }
}

// 14026E658: using guessed type __int64 __fastcall SteamAPI_UnregisterCallback(_QWORD);
// 14026E668: using guessed type __int64 __fastcall SteamAPI_UnregisterCallResult(_QWORD);
// 140279A58: using guessed type __int64 (__fastcall *off_140279A58)();
// 140279A78: using guessed type void (*off_140279A78)(CHtmlStream *__hidden this);
// 140279AC8: using guessed type void (*off_140279AC8)(CHtmlStream *__hidden this);
// 140279B18: using guessed type void (*off_140279B18)(CHtmlStream *__hidden this);
// 140301E90: using guessed type __int64 (__fastcall **off_140301E90)();
// 140301EA0: using guessed type __int64 qword_140301EA0;
// 140301EB8: using guessed type void (**off_140301EB8)(CHtmlStream *__hidden this);
// 140301EC0: using guessed type char byte_140301EC0;
// 140301ED8: using guessed type __int64 qword_140301ED8;
// 140301EE0: using guessed type char byte_140301EE0;
// 140301EF8: using guessed type __int64 qword_140301EF8;
// 140301F00: using guessed type char byte_140301F00;

// nfuncs=4269 queued=4269 decompiled=4269 lumina nreq=0 worse=0 better=0
// ALL OK, 4269 function(s) have been successfully decompiled

/* Adapt verified isolated leaf behavior to the export's address names.
   This file is appended after all exported globals have been declared. */
void CHtmlStream__Abort(CHtmlStream *self, uintptr_t payload, uintptr_t failure, uintptr_t call_id) {
    uintptr_t table, target;
    memcpy(&table, self, 8);
    memcpy(&target, (void *)(table + 8), 8);
    ((void (*)(CHtmlStream *, uintptr_t, uintptr_t, uintptr_t))target)(self, payload, failure, call_id);
}


uint32_t sub_140205C34(const void *object) {
    return sr_client_u32_at_16(object);
}


char initialize_global_variables(void) {
    return (char)sr_client_initialize_global_variables(
        &dword_140404A6C[19065667], &off_140302420);
}


uint32_t sub_140247CFC(void) {
    return sr_client_zero_callback();
}


size_t sub_1400012A0(FILE *stream, void *destination, int count) {
    return fread_sr(destination, 1, (size_t)count, stream);
}


uint32_t sub_1402370D4(void) {
    return sr_client_initialize_timezone(&dword_140404A6C[19064597],
        &dword_140404A6C[19064598], &dword_140404A6C[19064599],
        (uintptr_t *)&dword_140404A6C[19064601], (uintptr_t)sr_mem_140302270);
}


uint64_t sr_client_static_tls(void) {
    static _Thread_local _Alignas(8) unsigned char storage[24];
    return (uint64_t)(uintptr_t)storage;
}
