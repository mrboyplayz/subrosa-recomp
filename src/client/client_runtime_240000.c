#include "shared_client.h"
 /* recovered in client_native_gaps.s */
// 1402431F0: variables would overlap: xmm0_8.8 and xmm0.16
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140243770) ----------------------------------------------------
int strcmp_sr(char *Str1,char *Str2)
{
  const unsigned char *a=(const unsigned char *)Str1,*b=(const unsigned char *)Str2;
  while(*a==*b){if(!*a)return 0;a++;b++;}
  return *a<*b?-1:1;
}
 /* recovered in client_native_gaps.s */
// 140243DA0: inconsistent variable size for 'xmm0_8.8'

//----- (0000000140243F84) ----------------------------------------------------
int abs(int Number)
{
  uint32_t sign=0u-(uint32_t)(Number<0);
  return (int32_t)(((uint32_t)Number^sign)-sign);
}
 /* recovered in client_native_gaps.s */

//----- (000000014024502C) ----------------------------------------------------
int         sub_14024502C(unsigned int ExceptionNum, struct sr_anon_67 *ExceptionPtr)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  void (           *v8)(__int64); // r8
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = (_QWORD *)sub_140255BEC();
  v5 = v4;
  if ( v4 )
  {
    v6 = *v4;
    v7 = *v4;
    while ( *(_DWORD *)v7 != ExceptionNum )
    {
      v7 += 16;
      if ( v7 == v6 + 192 )
      {
        v7 = 0;
        break;
      }
    }
    if ( v7 )
    {
      v8 = *(void (           **)(__int64))(v7 + 8);
      if ( v8 )
      {
        if ( v8 == (void (           *)(__int64))5 )
        {
          *(_QWORD *)(v7 + 8) = 0;
          return 1;
        }
        if ( v8 == (void (           *)(__int64))1 )
          return -1;
        v10 = v5[1];
        v5[1] = (uint64)(uintptr_t)(ExceptionPtr);
        if ( *(_DWORD *)(v7 + 4) != 8 )
        {
          v15 = *(unsigned int *)(v7 + 4);
          *(_QWORD *)(v7 + 8) = 0;
          v8(v15);
          goto LABEL_37;
        }
        v11 = v6 + 48;
        v12 = v11 + 144;
        while ( v11 != v12 )
        {
          *(_QWORD *)(v11 + 8) = 0;
          v11 += 16;
        }
        v13 = *((_DWORD *)v5 + 4);
        switch ( *(_DWORD *)v7 )
        {
          case 0xC000008D:
            v14 = 130;
            break;
          case 0xC000008E:
            v14 = 131;
            break;
          case 0xC000008F:
            v14 = 134;
            break;
          case 0xC0000090:
            v14 = 129;
            break;
          case 0xC0000091:
            v14 = 132;
            break;
          case 0xC0000092:
            v14 = 138;
            break;
          case 0xC0000093:
            v14 = 133;
            break;
          case 0xC00002B4:
            v14 = 142;
            break;
          default:
            v14 = v13;
            if ( *(_DWORD *)v7 != -1073741131 )
            {
LABEL_35:
              ((void (           *)(__int64, __int64, void (           *)(__int64), _QWORD))v8)(8, v14, v8, 0);
              *((_DWORD *)v5 + 4) = v13;
LABEL_37:
              v5[1] = v10;
              return -1;
            }
            v14 = 141;
            break;
        }
        *((_DWORD *)v5 + 4) = v14;
        goto LABEL_35;
      }
    }
  }
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (00000001402451B8) ----------------------------------------------------
__int64            sub_1402451B8(__int64 a1, unsigned int *a2, int **a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  _lambda_6e4b09c48022b2350581041d5f6b0c4c___operator_call(a3);
  return sub_140258BB8(*a4);
}


//----- (00000001402451F0) ----------------------------------------------------
__int64            sub_1402451F0(unsigned int a1, int **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_1402451B8((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140245280) ----------------------------------------------------
__int64            Concurrency__details___Release_chore(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeLibrary)(v3, a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001402452AC) ----------------------------------------------------
int *           _lambda_6e4b09c48022b2350581041d5f6b0c4c___operator_call(int **a1)
{
  int v2; // ecx
  unsigned int *v3; // rcx
  int *result; // rax

  if ( LOBYTE(dword_140404A6C[19064657]) )
    return result;
  _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19064653], 1);
  v2 = **a1;
  if ( !v2 )
  {
    if ( *(_QWORD *)&dword_140404A6C[19064655] != _security_cookie )
      ((void (           *)(_QWORD, _QWORD, _QWORD))__ROR8__(
                                                      *(_QWORD *)&dword_140404A6C[19064655] ^ _security_cookie,
                                                      _security_cookie & 0x3F))(
        0,
        0,
        0);
    v3 = &dword_140404A6C[19064869];
    goto LABEL_8;
  }
  if ( v2 == 1 )
  {
    v3 = &dword_140404A6C[19064875];
LABEL_8:
    sub_14024719C((_onexit_table_t *)v3);
  }
  if ( !**a1 )
    sub_140247A00((sr_anon_92 *)&unk_14026E720, (sr_anon_92 *)&unk_14026E740);
  sub_140247A00((sr_anon_92 *)&unk_14026E748, (sr_anon_92 *)&unk_14026E750);
  result = a1[1];
  if ( !*result )
  {
    LOBYTE(dword_140404A6C[19064657]) = 1;
    result = a1[2];
    *(_BYTE *)result = 1;
  }
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE7B0: using guessed type unsigned int;

//----- (0000000140245394) ----------------------------------------------------
_BOOL8            atexit_exception_filter(int a1)
{
  return a1 == -529697949;
}


//----- (00000001402453A0) ----------------------------------------------------
__int64            Concurrency__details___Release_chore_dup2(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeLibrary)(v3, a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001402453C4) ----------------------------------------------------
bool sub_1402453C4()
{
  return (unsigned int)((__int64 (*)(void))FreeLibrary)() != 0;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001402453D8) ----------------------------------------------------
__int64            sub_1402453D8(unsigned int a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE v7[4]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+24h] [rbp-2Ch] BYREF
  unsigned int v9; // [rsp+28h] [rbp-28h] BYREF
  int *v10[4]; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+68h] [rbp+18h] BYREF
  int v12; // [rsp+70h] [rbp+20h] BYREF
  char v13; // [rsp+78h] [rbp+28h] BYREF

  v12 = a3;
  v11 = a2;
  if ( !a3 )
  {
    v4 = ((__int64 (           *)(_QWORD))GetModuleHandleW)(0);
    if ( v4 )
    {
      if ( *(_WORD *)v4 == 23117 )
      {
        v5 = v4 + *(int *)(v4 + 60);
        if ( *(_DWORD *)v5 == 17744
          && *(_WORD *)(v5 + 24) == 523
          && *(_DWORD *)(v5 + 132) > 0xEu
          && *(_DWORD *)(v5 + 248) )
        {
          try_cor_exit_process(a1);
        }
      }
    }
  }
  v13 = 0;
  v10[0] = &v11;
  v10[1] = &v12;
  v10[2] = (int *)&v13;
  v8 = 2;
  v9 = 2;
  result = sub_1402451B8((__int64)v7, &v9, v10, &v8);
  if ( !v12 )
    exit_or_terminate_process(a1);
  return result;
}

// 14026E298: invalid function type 'HMODULE (__stdcall *GetModuleHandleW)(LPCWSTR lpModuleName)' has been ignored

//----- (0000000140245494) ----------------------------------------------------
void            __attribute__((noreturn)) exit_or_terminate_process(unsigned int a1)
{
  __int64 v2; // rax

  if ( (unsigned int)sub_14025A388() != 1 && (*(_DWORD *)(__readgsqword(0x60u) + 188) & 0x100) == 0 )
  {
    v2 = ((__int64 (*)(void))GetCurrentProcess)();
    ((void (           *)(__int64, _QWORD))TerminateProcess)(v2, a1);
  }
  try_cor_exit_process(a1);
  ((void (           __attribute__((noreturn)) *)(_QWORD))ExitProcess)(a1);
}

// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2B8: invalid function type 'BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode)' has been ignored
// 14026E168: invalid function type 'void (__stdcall __noreturn *ExitProcess)(UINT uExitCode)' has been ignored

//----- (00000001402454EC) ----------------------------------------------------
bool is_managed_app_dup2()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  bool result; // al

  v0 = ((__int64 (           *)(_QWORD))GetModuleHandleW)(0);
  result = false;
  if ( v0 )
  {
    if ( *(_WORD *)v0 == 23117 )
    {
      v1 = v0 + *(int *)(v0 + 60);
      if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 523 && *(_DWORD *)(v1 + 132) > 0xEu && *(_DWORD *)(v1 + 248) )
        return true;
    }
  }
  return result;
}

// 14026E298: invalid function type 'HMODULE (__stdcall *GetModuleHandleW)(LPCWSTR lpModuleName)' has been ignored

//----- (0000000140245540) ----------------------------------------------------
bool should_call_terminate_process()
{
  return (unsigned int)sub_14025A388() != 1 && (*(_DWORD *)(__readgsqword(0x60u) + 188) & 0x100) == 0;
}


//----- (0000000140245570) ----------------------------------------------------
__int64 (           *           try_cor_exit_process(unsigned int a1))(_QWORD)
{
  __int64 (           *result)(_QWORD); // rax
  __int64 phModule; // [rsp+38h] [rbp+10h] BYREF

  phModule = 0;
  result = (__int64 (           *)(_QWORD))((__int64 (           *)(_QWORD,      __int16 *, __int64 *))GetModuleHandleExW)(
                                             0,
                                             L"mscoree.dll",
                                             &phModule);
  if ( (_DWORD)result )
  {
    result = (__int64 (           *)(_QWORD))((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                               phModule,
                                               "CorExitProcess");
    if ( result )
      result = (__int64 (           *)(_QWORD))result(a1);
  }
  if ( phModule )
    return ((__int64 (           *(*)(void))(_QWORD))FreeLibrary)();
  return result;
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140289F88: using guessed type __int16 ModuleName[12];

//----- (00000001402455D8) ----------------------------------------------------
void            sub_1402455D8(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19064655] = a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE7A8: using guessed type unsigned int;

//----- (00000001402455F0) ----------------------------------------------------
__int64 sub_1402455F0()
{
  return sub_1402453D8(0, 0, 1);
}


//----- (0000000140245600) ----------------------------------------------------
__int64            COleServerDoc__NotifyClosed(COleServerDoc *this)
{
  return sub_1402453D8((unsigned int)this, 2, 0);
}


//----- (000000014024560C) ----------------------------------------------------
__int64 sub_14024560C()
{
  return dword_140404A6C[19064653];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140245614) ----------------------------------------------------
__int64            sub_140245614(__int64 a1)
{
  __int64 result; // rax

  result = _security_cookie & 0x3F;
  if ( *(_QWORD *)&dword_140404A6C[19064655] != _security_cookie )
    terminate_sr();
  *(_QWORD *)&dword_140404A6C[19064655] = _security_cookie ^ __ROR8__(a1, 64 - (unsigned __int8)result);
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140245650) ----------------------------------------------------
void         __attribute__((noreturn)) exit(int Code)
{
  sub_1402453D8(Code, 0, 0);
}


//----- (0000000140245678) ----------------------------------------------------
__int64            sub_140245678(int a1)
{
  int v1; // edi
  char *v4; // rsi
  unsigned __int64 v5; // r15
       char **v6; // rax
       char **v7; // rbx
  unsigned int v8; // esi
  void *v9; // rcx
  unsigned int v10; // ecx
  _QWORD *i; // rax
  void *v12; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  sub_14025F520();
  sub_14025B344(0, (__int64)&dword_140404A6C[19064661], 0x104u);
  v4 = *(char **)&dword_140404A6C[19065843];
  *(_QWORD *)&dword_140404A6C[19065833] = (uint64)(uintptr_t)(&dword_140404A6C[19064661]);
  if ( !*(_QWORD *)&dword_140404A6C[19065843] || !**(_BYTE **)&dword_140404A6C[19065843] )
    v4 = (char *)&dword_140404A6C[19064661];
  v13 = 0;
  v14 = 0;
  sub_140245980(v4, nullptr, nullptr, &v13, &v14);
  v5 = v13;
  v6 = (     char **)sub_140245E48(v13, v14, 1u);
  v7 = v6;
  if ( v6 )
  {
    sub_140245980(v4, v6, &v6[v5], &v13, &v14);
    if ( a1 != 1 )
    {
      v12 = nullptr;
      v8 = common_expand_argv_wildcards__char(v7, (__int64 *)&v12);
      if ( v8 )
      {
        v9 = v12;
      }
      else
      {
        v10 = 0;
        for ( i = v12; *i; ++v10 )
          ++i;
        dword_140404A6C[19065837] = v10;
        v8 = 0;
        v9 = nullptr;
        *(_QWORD *)&dword_140404A6C[19065839] = (uint64)(uintptr_t)(v12);
        v12 = nullptr;
      }
      free_base(v9);
      v12 = nullptr;
      goto LABEL_19;
    }
    dword_140404A6C[19065837] = v13 - 1;
    *(_QWORD *)&dword_140404A6C[19065839] = (uint64)(uintptr_t)(v7);
    v7 = nullptr;
  }
  else
  {
    v1 = 12;
    *errno_sr() = 12;
  }
  v8 = v1;
LABEL_19:
  free_base(v7);
  return v8;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA10: using guessed type unsigned int;
// 144CBFA20: using guessed type unsigned int;
// 144CBFA38: using guessed type unsigned int;

//----- (00000001402457F0) ----------------------------------------------------
__int64            sub_1402457F0(int a1)
{
  int v1; // edi
  __int16 *v4; // rsi
  unsigned __int64 v5; // r15
  __int16 **v6; // rax
       sr_anon_49 **v7; // rbx
  unsigned int v8; // esi
  void *v9; // rcx
  unsigned int v10; // ecx
  _QWORD *i; // rax
  void *v12; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  ((void (           *)(_QWORD, unsigned int *, __int64))GetModuleFileNameW)(0, &dword_140404A6C[19064729], 260);
  v4 = *(__int16 **)&dword_140404A6C[19065845];
  *(_QWORD *)&dword_140404A6C[19065835] = (uint64)(uintptr_t)(&dword_140404A6C[19064729]);
  if ( !*(_QWORD *)&dword_140404A6C[19065845] || !**(_WORD **)&dword_140404A6C[19065845] )
    v4 = (__int16 *)&dword_140404A6C[19064729];
  v13 = 0;
  v14 = 0;
  sub_140245B44(v4, nullptr, nullptr, &v13, &v14);
  v5 = v13;
  v6 = (__int16 **)sub_140245E48(v13, v14, 2u);
  v7 = (     sr_anon_49 **)v6;
  if ( v6 )
  {
    sub_140245B44(v4, v6, (__int16 *)&v6[v5], &v13, &v14);
    if ( a1 != 1 )
    {
      v12 = nullptr;
      v8 = common_expand_argv_wildcards__wchar_t(v7, (__int64 *)&v12);
      if ( v8 )
      {
        v9 = v12;
      }
      else
      {
        v10 = 0;
        for ( i = v12; *i; ++v10 )
          ++i;
        dword_140404A6C[19065837] = v10;
        v8 = 0;
        v9 = nullptr;
        *(_QWORD *)&dword_140404A6C[19065841] = (uint64)(uintptr_t)(v12);
        v12 = nullptr;
      }
      free_base(v9);
      v12 = nullptr;
      goto LABEL_19;
    }
    dword_140404A6C[19065837] = v13 - 1;
    *(_QWORD *)&dword_140404A6C[19065841] = (uint64)(uintptr_t)(v7);
    v7 = nullptr;
  }
  else
  {
    v1 = 12;
    *errno_sr() = 12;
  }
  v8 = v1;
LABEL_19:
  free_base(v7);
  return v8;
}

// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA18: using guessed type unsigned int;
// 144CBFA20: using guessed type unsigned int;
// 144CBFA40: using guessed type unsigned int;

//----- (0000000140245980) ----------------------------------------------------
char            sub_140245980(char *a1, _QWORD *a2, _BYTE *a3, _QWORD *a4, _QWORD *a5)
{
  _BYTE *v6; // rbx
  _QWORD *v7; // r14
  bool v9; // bp
  unsigned int v10; // esi
  bool v11; // si
  char result; // al
  int v13; // edx
  unsigned int v14; // eax
  char v15; // al

  v6 = a3;
  v7 = a2;
  *a5 = 0;
  *a4 = 1;
  if ( a2 )
  {
    *a2 = (uint64)(uintptr_t)(a3);
    v7 = a2 + 1;
  }
  v9 = 0;
  do
  {
    if ( *a1 == 34 )
    {
      LOBYTE(v10) = 34;
      v9 = !v9;
      ++a1;
    }
    else
    {
      ++*a5;
      if ( v6 )
        *v6++ = *a1;
      v10 = *a1++;
      if ( ismbblead(v10) )
      {
        ++*a5;
        if ( v6 )
          *v6++ = *a1;
        ++a1;
      }
      if ( !(_BYTE)v10 )
      {
        --a1;
        goto LABEL_19;
      }
    }
  }
  while ( v9 || (_BYTE)v10 != 32 && (_BYTE)v10 != 9 );
  if ( v6 )
    *(v6 - 1) = 0;
LABEL_19:
  v11 = 0;
  while ( 1 )
  {
    result = *a1;
    if ( !*a1 )
      break;
    while ( result == 32 || result == 9 )
      result = *++a1;
    if ( !result )
      break;
    if ( v7 )
      *v7++ = (uint64)(uintptr_t)(v6);
    ++*a4;
    while ( 1 )
    {
      v13 = 1;
      v14 = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++v14;
      }
      if ( *a1 == 34 )
      {
        if ( (v14 & 1) == 0 )
        {
          if ( v11 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            v13 = 0;
            v11 = !v11;
          }
        }
        v14 >>= 1;
      }
      while ( v14 )
      {
        --v14;
        if ( v6 )
          *v6++ = 92;
        ++*a5;
      }
      v15 = *a1;
      if ( !*a1 || !v11 && (v15 == 32 || v15 == 9) )
        break;
      if ( v13 )
      {
        if ( v6 )
        {
          *v6++ = v15;
          v15 = *a1;
        }
        if ( ismbblead(v15) )
        {
          ++*a5;
          ++a1;
          if ( v6 )
            *v6++ = *a1;
        }
        ++*a5;
      }
      ++a1;
    }
    if ( v6 )
      *v6++ = 0;
    ++*a5;
  }
  if ( v7 )
    *v7 = 0;
  ++*a4;
  return result;
}


//----- (0000000140245B44) ----------------------------------------------------
__int64            sub_140245B44(__int16 *a1, __int16 **a2, __int16 *a3, _QWORD *a4, _QWORD *a5)
{
  bool v6; // r9
  __int16 v7; // ax
  bool v8; // di
  __int64 result; // rax
  int v10; // r11d
  unsigned int v11; // eax
  __int16 v12; // ax

  *a5 = 0;
  *a4 = 1;
  if ( a2 )
    *a2++ = a3;
  v6 = 0;
  do
  {
    if ( *a1 == 34 )
    {
      v7 = 34;
      v6 = !v6;
      ++a1;
    }
    else
    {
      ++*a5;
      if ( a3 )
        *a3++ = *a1;
      v7 = *a1++;
      if ( !v7 )
      {
        --a1;
        goto LABEL_15;
      }
    }
  }
  while ( v6 || v7 != 32 && v7 != 9 );
  if ( a3 )
    *(a3 - 1) = 0;
LABEL_15:
  v8 = 0;
  while ( 1 )
  {
    result = (unsigned __int16)*a1;
    if ( !(_WORD)result )
      break;
    while ( (_WORD)result == 32 || (_WORD)result == 9 )
      result = (unsigned __int16)*++a1;
    if ( !(_WORD)result )
      break;
    if ( a2 )
      *a2++ = a3;
    ++*a4;
    while ( 1 )
    {
      v10 = 1;
      v11 = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++v11;
      }
      if ( *a1 == 34 )
      {
        if ( (v11 & 1) == 0 )
        {
          if ( v8 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            v10 = 0;
            v8 = !v8;
          }
        }
        v11 >>= 1;
      }
      while ( v11 )
      {
        --v11;
        if ( a3 )
          *a3++ = 92;
        ++*a5;
      }
      v12 = *a1;
      if ( !*a1 || !v8 && (v12 == 32 || v12 == 9) )
        break;
      if ( v10 )
      {
        if ( a3 )
          *a3++ = v12;
        ++*a5;
      }
      ++a1;
    }
    if ( a3 )
      *a3++ = 0;
    ++*a5;
  }
  if ( a2 )
    *a2 = nullptr;
  ++*a4;
  return result;
}


//----- (0000000140245D20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1019(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140245D3C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1020(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140245DF4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1021(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140245E10) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1022(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140245E2C) ----------------------------------------------------
bool            needs_trail_byte(char a1)
{
  return ismbblead(a1) != 0;
}


//----- (0000000140245E48) ----------------------------------------------------
__int64            sub_140245E48(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx

  if ( a1 >= 0x1FFFFFFFFFFFFFFFLL )
    return 0;
  if ( a2 >= 0xFFFFFFFFFFFFFFFFuLL / a3 )
    return 0;
  v3 = 8 * a1;
  if ( ~v3 <= a3 * a2 )
    return 0;
  v4 = calloc_base(a3 * a2 + v3, 1);
  free_base(nullptr);
  return v4;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140245EA8) ----------------------------------------------------
__int64            sub_140245EA8(int a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebx
  char *v4; // rsi
  unsigned __int64 v5; // r15
       char **v6; // rax
       char **v7; // rbx
       char **v8; // rcx
  unsigned int v9; // esi
  void *v10; // rdx
  unsigned int v11; // ecx
  _QWORD *i; // rax
  void *Block; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      sub_14025F520();
      sub_14025B344(0, (__int64)&dword_140404A6C[19064661], 0x104u);
      v4 = *(char **)&dword_140404A6C[19065843];
      *(_QWORD *)&dword_140404A6C[19065833] = (uint64)(uintptr_t)(&dword_140404A6C[19064661]);
      if ( !*(_QWORD *)&dword_140404A6C[19065843] || !**(_BYTE **)&dword_140404A6C[19065843] )
        v4 = (char *)&dword_140404A6C[19064661];
      v15 = 0;
      v16 = 0;
      sub_140245980(v4, nullptr, nullptr, &v15, &v16);
      v5 = v15;
      v6 = (     char **)sub_140245E48(v15, v16, 1u);
      v7 = v6;
      if ( v6 )
      {
        sub_140245980(v4, v6, &v6[v5], &v15, &v16);
        if ( a1 == 1 )
        {
          *(_QWORD *)&dword_140404A6C[19065839] = (uint64)(uintptr_t)(v7);
          dword_140404A6C[19065837] = v15 - 1;
          v8 = nullptr;
        }
        else
        {
          Block = nullptr;
          v9 = common_expand_argv_wildcards__char(v7, (__int64 *)&Block);
          if ( v9 )
          {
            free_base(Block);
            Block = nullptr;
            free_base(v7);
            return v9;
          }
          v10 = Block;
          v11 = 0;
          for ( i = Block; *i; ++v11 )
            ++i;
          dword_140404A6C[19065837] = v11;
          Block = nullptr;
          *(_QWORD *)&dword_140404A6C[19065839] = (uint64)(uintptr_t)(v10);
          free_base(nullptr);
          v8 = v7;
          Block = nullptr;
        }
        free_base(v8);
        return v1;
      }
      v3 = 12;
      *errno_sr() = 12;
      free_base(nullptr);
    }
    else
    {
      v3 = 22;
      *errno_sr() = 22;
      sub_14024CF6C();
    }
    return v3;
  }
  return v1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA10: using guessed type unsigned int;
// 144CBFA20: using guessed type unsigned int;
// 144CBFA38: using guessed type unsigned int;

//----- (0000000140246030) ----------------------------------------------------
__int64            sub_140246030(int a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebx
  __int16 *v4; // rsi
  unsigned __int64 v5; // r15
  __int16 **v6; // rax
       sr_anon_49 **v7; // rbx
       sr_anon_49 **v8; // rcx
  unsigned int v9; // esi
  void *v10; // rdx
  unsigned int v11; // ecx
  _QWORD *i; // rax
  void *Block; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      ((void (           *)(_QWORD, unsigned int *, __int64))GetModuleFileNameW)(0, &dword_140404A6C[19064729], 260);
      v4 = *(__int16 **)&dword_140404A6C[19065845];
      *(_QWORD *)&dword_140404A6C[19065835] = (uint64)(uintptr_t)(&dword_140404A6C[19064729]);
      if ( !*(_QWORD *)&dword_140404A6C[19065845] || !**(_WORD **)&dword_140404A6C[19065845] )
        v4 = (__int16 *)&dword_140404A6C[19064729];
      v15 = 0;
      v16 = 0;
      sub_140245B44(v4, nullptr, nullptr, &v15, &v16);
      v5 = v15;
      v6 = (__int16 **)sub_140245E48(v15, v16, 2u);
      v7 = (     sr_anon_49 **)v6;
      if ( v6 )
      {
        sub_140245B44(v4, v6, (__int16 *)&v6[v5], &v15, &v16);
        if ( a1 == 1 )
        {
          *(_QWORD *)&dword_140404A6C[19065841] = (uint64)(uintptr_t)(v7);
          dword_140404A6C[19065837] = v15 - 1;
          v8 = nullptr;
        }
        else
        {
          Block = nullptr;
          v9 = common_expand_argv_wildcards__wchar_t(v7, (__int64 *)&Block);
          if ( v9 )
          {
            free_base(Block);
            Block = nullptr;
            free_base(v7);
            return v9;
          }
          v10 = Block;
          v11 = 0;
          for ( i = Block; *i; ++v11 )
            ++i;
          dword_140404A6C[19065837] = v11;
          Block = nullptr;
          *(_QWORD *)&dword_140404A6C[19065841] = (uint64)(uintptr_t)(v10);
          free_base(nullptr);
          v8 = v7;
          Block = nullptr;
        }
        free_base(v8);
        return v1;
      }
      v3 = 12;
      *errno_sr() = 12;
      free_base(nullptr);
    }
    else
    {
      v3 = 22;
      *errno_sr() = 22;
      sub_14024CF6C();
    }
    return v3;
  }
  return v1;
}

// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA18: using guessed type unsigned int;
// 144CBFA20: using guessed type unsigned int;
// 144CBFA40: using guessed type unsigned int;

//----- (00000001402461CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_751()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064867];
  if ( !*(_QWORD *)&dword_140404A6C[19064867] )
  {
    result = *(_QWORD *)&dword_140404A6C[19064861];
    if ( !*(_QWORD *)&dword_140404A6C[19064861] )
    {
      if ( !*(_QWORD *)&dword_140404A6C[19064863]
        || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
      {
        result = 0;
      }
      else
      {
        result = *(_QWORD *)&dword_140404A6C[19064861];
      }
    }
    *(_QWORD *)&dword_140404A6C[19064867] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBEAF8: using guessed type unsigned int;

//----- (000000014024621C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_752()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064865];
  if ( !*(_QWORD *)&dword_140404A6C[19064865] )
  {
    result = *(_QWORD *)&dword_140404A6C[19064863];
    if ( !*(_QWORD *)&dword_140404A6C[19064863] )
    {
      if ( !*(_QWORD *)&dword_140404A6C[19064861] || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
        result = 0;
      else
        result = *(_QWORD *)&dword_140404A6C[19064863];
    }
    *(_QWORD *)&dword_140404A6C[19064865] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBEAF0: using guessed type unsigned int;

//----- (000000014024626C) ----------------------------------------------------
__int64 sub_14024626C()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064861];
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
  {
    if ( !*(_QWORD *)&dword_140404A6C[19064863]
      || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
    {
      return 0;
    }
    else
    {
      return *(_QWORD *)&dword_140404A6C[19064861];
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402462A8) ----------------------------------------------------
__int64 sub_1402462A8()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064863];
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
  {
    if ( !*(_QWORD *)&dword_140404A6C[19064861] || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
      return 0;
    else
      return *(_QWORD *)&dword_140404A6C[19064863];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402462E4) ----------------------------------------------------
__int64 initialize_narrow_environment_0()
{
  unsigned int v0; // edi
  char *v2; // rax
  char *v3; // rbx
  void **v4; // rax

  v0 = 0;
  if ( *(_QWORD *)&dword_140404A6C[19064861] )
    return 0;
  sub_14025F520();
  v2 = (char *)sub_14025FDC4();
  v3 = v2;
  if ( v2 )
  {
    v4 = sub_140246428(v2);
    if ( v4 )
    {
      *(_QWORD *)&dword_140404A6C[19064867] = (uint64)(uintptr_t)(v4);
      *(_QWORD *)&dword_140404A6C[19064861] = (uint64)(uintptr_t)(v4);
    }
    else
    {
      v0 = -1;
    }
    free_base(nullptr);
  }
  else
  {
    v0 = -1;
  }
  free_base(v3);
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBEAF8: using guessed type unsigned int;

//----- (0000000140246350) ----------------------------------------------------
__int64 sub_140246350()
{
  unsigned int v0; // edi
  __m128i *v2; // rax
  __m128i *v3; // rbx
  void **v4; // rax

  v0 = 0;
  if ( *(_QWORD *)&dword_140404A6C[19064863] )
    return 0;
  v2 = sub_14025FEC8();
  v3 = v2;
  if ( v2 )
  {
    v4 = sub_140246530(SR_VEC_PTR_LANES(128, v2, i16));
    if ( v4 )
    {
      *(_QWORD *)&dword_140404A6C[19064865] = (uint64)(uintptr_t)(v4);
      *(_QWORD *)&dword_140404A6C[19064863] = (uint64)(uintptr_t)(v4);
    }
    else
    {
      v0 = -1;
    }
    free_base(nullptr);
  }
  else
  {
    v0 = -1;
  }
  free_base(v3);
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBEAF0: using guessed type unsigned int;

//----- (0000000140246428) ----------------------------------------------------
void **           sub_140246428(char *Source)
{
  void **v2; // rsi
  __int64 v3; // rcx
  char *v4; // r8
  char i; // dl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  void **v9; // rbx
  __int64 *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi

  v2 = nullptr;
  v3 = 0;
  v4 = Source;
  for ( i = *Source; i; i = *v4 )
  {
    v6 = v3 + 1;
    if ( i == 61 )
      v6 = v3;
    v3 = v6;
    v7 = -1;
    do
      ++v7;
    while ( v4[v7] );
    v4 += v7 + 1;
  }
  v8 = calloc_base(v3 + 1, 8);
  v9 = (void **)v8;
  if ( v8 )
  {
    v10 = (__int64 *)v8;
    while ( *Source )
    {
      v11 = -1;
      do
        ++v11;
      while ( Source[v11] );
      v12 = v11 + 1;
      if ( *Source != 61 )
      {
        v13 = calloc_base(v12, 1);
        v14 = v13;
        if ( !v13 )
        {
          unknown_libname_753(v9);
          free_base(nullptr);
          goto LABEL_20;
        }
        if ( (unsigned int)strcpy_s_sr(v13, v12, Source) )
        {
          sub_14024CFBC();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        *v10++ = v14;
        free_base(nullptr);
      }
      Source += v12;
    }
    v2 = v9;
  }
LABEL_20:
  free_base(nullptr);
  return v2;
}

// 140246528: control flows out of bounds to 14024652D
// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);
// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140246530) ----------------------------------------------------
void **           sub_140246530(__int16 *a1)
{
  void **v2; // rsi
  __int64 v3; // rcx
  __int16 *v4; // r8
  __int16 i; // dx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  void **v9; // rbx
  _QWORD *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rbp
  _WORD *v13; // rax
  _WORD *v14; // rdi

  v2 = nullptr;
  v3 = 0;
  v4 = a1;
  for ( i = *a1; i; i = *v4 )
  {
    v6 = v3 + 1;
    if ( i == 61 )
      v6 = v3;
    v3 = v6;
    v7 = -1;
    do
      ++v7;
    while ( v4[v7] );
    v4 += v7 + 1;
  }
  v8 = calloc_base(v3 + 1, 8);
  v9 = (void **)v8;
  if ( v8 )
  {
    v10 = (_QWORD *)v8;
    while ( *a1 )
    {
      v11 = -1;
      do
        ++v11;
      while ( a1[v11] );
      v12 = v11 + 1;
      if ( *a1 != 61 )
      {
        v13 = (_WORD *)calloc_base(v12, 2);
        v14 = v13;
        if ( !v13 )
        {
          unknown_libname_754(v9);
          free_base(nullptr);
          goto LABEL_20;
        }
        if ( (unsigned int)sub_140259444(v13, v12, (__int64)a1) )
        {
          sub_14024CFBC();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        *v10++ = (uint64)(uintptr_t)(v14);
        free_base(nullptr);
      }
      a1 += v12;
    }
    v2 = v9;
  }
LABEL_20:
  free_base(nullptr);
  return v2;
}

// 14024663D: control flows out of bounds to 140246642
// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140246644) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_753(void **Block)
{
  void *v1; // rax
  void **v3; // rdi

  if ( Block )
  {
    v1 = *Block;
    v3 = Block;
    while ( v1 )
    {
      free_base(v1);
      v1 = *++v3;
    }
    free_base(Block);
  }
}


//----- (0000000140246688) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_754(void **Block)
{
  void *v1; // rax
  void **v3; // rdi

  if ( Block )
  {
    v1 = *Block;
    v3 = Block;
    while ( v1 )
    {
      free_base(v1);
      v1 = *++v3;
    }
    free_base(Block);
  }
}


//----- (00000001402466DC) ----------------------------------------------------
__int64 sub_1402466DC()
{
  __int64 *v0; // rdi
  __int64 result; // rax
  int v2; // eax
  int v3; // esi
  __int64 v4; // rax
  _BYTE *v5; // rbx
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-20h]

  v0 = *(__int64 **)&dword_140404A6C[19064863];
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    result = *v0;
    if ( !*v0 )
      break;
    LODWORD(v6) = 0;
    v2 = sub_140258A84(0, 0, result, 0xFFFFFFFFLL, 0, v6, 0, 0);
    v3 = v2;
    if ( !v2 )
      return 0xFFFFFFFFLL;
    v4 = calloc_base(v2, 1);
    v5 = (_BYTE *)v4;
    if ( !v4 || (LODWORD(v7) = v3, !(unsigned int)sub_140258A84(0, 0, *v0, 0xFFFFFFFFLL, v4, v7, 0, 0)) )
    {
      free_base(v5);
      return 0xFFFFFFFFLL;
    }
    _dcrt_set_variable_in_narrow_environment_nolock_sr(v5, 0);
    free_base(nullptr);
    ++v0;
  }
  return result;
}

// 140246730: variable 'v6' is possibly undefined
// 140246771: variable 'v7' is possibly undefined
// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402467B0) ----------------------------------------------------
__int64 sub_1402467B0()
{
  __int64 *v0; // rdi
  __int64 result; // rax
  int v2; // eax
  _WORD *v3; // rbx

  v0 = *(__int64 **)&dword_140404A6C[19064861];
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    result = *v0;
    if ( !*v0 )
      break;
    v2 = sub_140259504();
    if ( !v2 )
      return 0xFFFFFFFFLL;
    v3 = (_WORD *)calloc_base(v2, 2);
    if ( !v3 || !(unsigned int)sub_140259504() )
    {
      free_base(v3);
      return 0xFFFFFFFFLL;
    }
    common_set_variable_in_environment_nolock__wchar_t(v3, 0);
    free_base(nullptr);
    ++v0;
  }
  return result;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402468C4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_757(__int64 a1, __int64 (           *a2)(__int64))
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v4 = a1;
  do
  {
    result = a2(v4);
    v4 += 8;
  }
  while ( v4 != v2 );
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140246908) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_758(__int64 a1, __int64 (           *a2)(__int64))
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v4 = a1;
  do
  {
    result = a2(v4);
    v4 += 8;
  }
  while ( v4 != v2 );
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024694C) ----------------------------------------------------
void            sub_14024694C(void ***a1)
{
  void **v1; // rcx

  v1 = *a1;
  if ( v1 != *(void ***)&dword_140404A6C[19064867] )
    unknown_libname_753(v1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140246968) ----------------------------------------------------
void            sub_140246968(void ***a1)
{
  void **v1; // rcx

  v1 = *a1;
  if ( v1 != *(void ***)&dword_140404A6C[19064865] )
    unknown_libname_754(v1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024698C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1023(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402469C0) ----------------------------------------------------
__int64            sub_1402469C0(__int64 a1,      char *a2)
{
  return (int)sub_140259504();
}


//----- (00000001402469E4) ----------------------------------------------------
__int64            sub_1402469E4(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+28h] [rbp-20h]

  LODWORD(v3) = 0;
  return (int)sub_140258A84(a1, 0, a2, 0xFFFFFFFFLL, 0, v3, 0, 0);
}

// 140246A06: variable 'v3' is possibly undefined

//----- (0000000140246A14) ----------------------------------------------------
__int64            sub_140246A14()
{
  return (int)sub_140259504();
}


//----- (0000000140246A38) ----------------------------------------------------
__int64            sub_140246A38(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+28h] [rbp-20h]

  LODWORD(v5) = a4;
  return (int)sub_140258A84(a1, 0, a2, 0xFFFFFFFFLL, a3, v5, 0, 0);
}

// 140246A5A: variable 'v5' is possibly undefined

//----- (0000000140246AA4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_761(char *a1, unsigned __int64 a2)
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


//----- (0000000140246ACC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_762(char *a1, unsigned __int64 a2)
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


//----- (0000000140246B18) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1024(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140246B38) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_764()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064861];
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
  {
    if ( !*(_QWORD *)&dword_140404A6C[19064863]
      || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
    {
      return 0;
    }
    else
    {
      return *(_QWORD *)&dword_140404A6C[19064861];
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140246B74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_765()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064863];
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
  {
    if ( !*(_QWORD *)&dword_140404A6C[19064861] || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
      return 0;
    else
      return *(_QWORD *)&dword_140404A6C[19064863];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140246BB0) ----------------------------------------------------
void sub_140246BB0()
{
  sub_14024694C((void ***)&dword_140404A6C[19064861]);
  sub_140246968((void ***)&dword_140404A6C[19064863]);
  unknown_libname_753(*(void ***)&dword_140404A6C[19064867]);
  unknown_libname_754(*(void ***)&dword_140404A6C[19064865]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140246BF8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_766()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064867];
  if ( !*(_QWORD *)&dword_140404A6C[19064867] )
  {
    result = *(_QWORD *)&dword_140404A6C[19064861];
    if ( !*(_QWORD *)&dword_140404A6C[19064861] )
    {
      if ( !*(_QWORD *)&dword_140404A6C[19064863]
        || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
      {
        result = 0;
      }
      else
      {
        result = *(_QWORD *)&dword_140404A6C[19064861];
      }
    }
    *(_QWORD *)&dword_140404A6C[19064867] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBEAF8: using guessed type unsigned int;

//----- (0000000140246C48) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_767()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064865];
  if ( !*(_QWORD *)&dword_140404A6C[19064865] )
  {
    result = *(_QWORD *)&dword_140404A6C[19064863];
    if ( !*(_QWORD *)&dword_140404A6C[19064863] )
    {
      if ( !*(_QWORD *)&dword_140404A6C[19064861] || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
        result = 0;
      else
        result = *(_QWORD *)&dword_140404A6C[19064863];
    }
    *(_QWORD *)&dword_140404A6C[19064865] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBEAF0: using guessed type unsigned int;

//----- (0000000140246C98) ----------------------------------------------------
// attributes: thunk
int         initialize_narrow_environment()
{
  return initialize_narrow_environment_0();
}


//----- (0000000140246CC0) ----------------------------------------------------
__int64            sub_140246CC0(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  LODWORD(a3) = _lambda_22ebabd17bc4fa466a2aca6d8deb888d___operator_call(a3);
  sub_140258BB8(*a4);
  return (unsigned int)a3;
}


//----- (0000000140246CFC) ----------------------------------------------------
__int64            sub_140246CFC(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  LODWORD(a3) = _lambda_f03950bc5685219e0bcd2087efbe011e___operator_call(a3);
  sub_140258BB8(*a4);
  return (unsigned int)a3;
}


//----- (0000000140246D38) ----------------------------------------------------
__int64            sub_140246D38(unsigned int a1, _QWORD **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140246CC0((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140246D60) ----------------------------------------------------
__int64            sub_140246D60(unsigned int a1, _QWORD **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140246CFC((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140246E54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1025(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140246E70) ----------------------------------------------------
__int64            _lambda_22ebabd17bc4fa466a2aca6d8deb888d___operator_call(_QWORD **a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r10
  __int64 v4; // rsi
  __int64 v5; // r9
  char *v6; // rbx
  __int64 v7; // rsi
  char *v8; // r9
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rcx

  v2 = (_QWORD *)**a1;
  if ( v2 )
  {
    v3 = _security_cookie;
    v4 = *v2 ^ _security_cookie;
    v5 = _security_cookie ^ v2[1];
    v6 = (char *)__ROR8__(_security_cookie ^ v2[2], _security_cookie & 0x3F);
    v7 = __ROR8__(v4, _security_cookie & 0x3F);
    v8 = (char *)__ROR8__(v5, _security_cookie & 0x3F);
    if ( v8 != v6 )
    {
LABEL_14:
      *(_QWORD *)v8 = v3 ^ __ROR8__(*a1[1], 64 - ((unsigned __int8)v3 & 0x3Fu));
      *(_QWORD *)**a1 = _security_cookie ^ __ROR8__(v7, 64 - (_security_cookie & 0x3Fu));
      *(_QWORD *)(**a1 + 8LL) = _security_cookie ^ __ROR8__(v8 + 8, 64 - (_security_cookie & 0x3Fu));
      *(_QWORD *)(**a1 + 16LL) = _security_cookie ^ __ROR8__(v6, 64 - (_security_cookie & 0x3Fu));
      return 0;
    }
    v9 = (__int64)&v6[-v7] >> 3;
    v10 = v9;
    if ( v9 > 0x200 )
      v10 = 512;
    v11 = v9 + v10;
    if ( !v11 )
      v11 = 32;
    if ( v11 >= v9 && (v12 = recalloc_base(v7, v11, 8), free_base(nullptr), v12)
      || (v11 = v9 + 4, v12 = recalloc_base(v7, v9 + 4, 8), free_base(nullptr), v12) )
    {
      v3 = _security_cookie;
      v8 = (char *)(v12 + 8 * v9);
      v6 = (char *)(v12 + 8 * v11);
      v7 = v12;
      v13 = (unsigned __int64)(v6 - v8 + 7) >> 3;
      if ( v8 > v6 )
        v13 = 0;
      if ( v13 )
      {
        memset64(v8, _security_cookie, v13);
        v3 = _security_cookie;
      }
      goto LABEL_14;
    }
  }
  return 0xFFFFFFFFLL;
}

// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);

//----- (0000000140247040) ----------------------------------------------------
__int64            _lambda_f03950bc5685219e0bcd2087efbe011e___operator_call(_QWORD **a1)
{
  _QWORD *v2; // rbx
  __int64 v4; // r8
  char *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // r14
  char v8; // cl
  char *v9; // r15
  _QWORD *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rdx
  char *v13; // r9
  _QWORD *v14; // rax

  v2 = (_QWORD *)**a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = _security_cookie;
  v5 = (char *)__ROR8__(*v2 ^ _security_cookie, _security_cookie & 0x3F);
  v6 = (_QWORD *)__ROR8__(_security_cookie ^ v2[1], _security_cookie & 0x3F);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = _security_cookie;
    v8 = _security_cookie & 0x3F;
    v9 = v5;
    v10 = v6;
    while ( --v6 >= (_QWORD *)v5 )
    {
      v11 = *v6;
      if ( *v6 != v7 )
      {
        *v6 = v7;
        ((void (*)(void))__ROR8__(v4 ^ v11, v8))();
        v4 = _security_cookie;
        v8 = _security_cookie & 0x3F;
        v12 = (_QWORD *)**a1;
        v13 = (char *)__ROR8__(_security_cookie ^ *v12, _security_cookie & 0x3F);
        v14 = (_QWORD *)__ROR8__(_security_cookie ^ v12[1], _security_cookie & 0x3F);
        if ( v13 != v9 || v14 != v10 )
        {
          v9 = v13;
          v5 = v13;
          v10 = v14;
          v6 = v14;
        }
      }
    }
    if ( v5 != (char *)-1LL )
    {
      free_base(v5);
      v4 = _security_cookie;
    }
    *(_QWORD *)**a1 = v4;
    *(_QWORD *)(**a1 + 8LL) = v4;
    *(_QWORD *)(**a1 + 16LL) = v4;
  }
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140247160) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1026(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (000000014024718C) ----------------------------------------------------
__int64            sub_14024718C(__int64 a1)
{
  return sub_140247200(&dword_140404A6C[19064869], a1);
}

// 140247200: using guessed type __int64 __fastcall sub_140247200(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024719C) ----------------------------------------------------
int         sub_14024719C(_onexit_table_t *Table)
{
  _onexit_table_t **v2; // [rsp+20h] [rbp-18h] BYREF
  _onexit_table_t *v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = Table;
  v2 = &v3;
  v5 = 2;
  v6 = 2;
  return sub_140246CFC((__int64)&v4, &v6, &v2, &v5);
}


//----- (00000001402471D8) ----------------------------------------------------
int         sub_1402471D8(sr_anon_91 *Table)
{
  __int64 v2; // rax

  if ( !Table )
    return -1;
  if ( *(_QWORD *)Table == *((_QWORD *)Table + 2) )
  {
    v2 = _security_cookie;
    *(_QWORD *)Table = _security_cookie;
    *((_QWORD *)Table + 1) = v2;
    *((_QWORD *)Table + 2) = v2;
  }
  return 0;
}


//----- (0000000140247200) ----------------------------------------------------
__int64            sub_140247200(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v4[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+10h] BYREF
  __int64 v6; // [rsp+58h] [rbp+18h] BYREF
  char v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF

  v6 = a2;
  v5 = a1;
  v4[0] = &v5;
  v4[1] = &v6;
  v8 = 2;
  v3 = 2;
  return sub_140246CC0((__int64)&v7, &v3, v4, &v8);
}

// 140247200: invalid function type 'int __cdecl sub_140247200(#91 *Table, _onexit_t Function)' has been ignored

//----- (000000014024725C) ----------------------------------------------------
char initialize_c()
{
  sub_1402471D8((sr_anon_91 *)&dword_140404A6C[19064869]);
  sub_1402471D8((sr_anon_91 *)&dword_140404A6C[19064875]);
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247288) ----------------------------------------------------
char uninitialize_environment()
{
  sub_140246BB0();
  return 1;
}


//----- (00000001402472A0) ----------------------------------------------------
char initialize_pointers()
{
  __int64 v0; // rbx

  v0 = _security_cookie;
  sub_14024CE80(_security_cookie);
  sub_140260BDC(v0);
  sub_14025BC1C(v0);
  sub_1402477E0(v0);
  sub_1402455D8(v0);
  return 1;
}


//----- (00000001402472E8) ----------------------------------------------------
char uninitialize_allocated_memory()
{
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)&dword_140404A6C[19065829], 0xFFFFFFFF) == 1
    && *(_UNKNOWN **)&dword_140404A6C[19065829] != &unk_1403025A0 )
  {
    free_base(*(void **)&dword_140404A6C[19065829]);
    *(_QWORD *)&dword_140404A6C[19065829] = (uint64)(uintptr_t)(&unk_1403025A0);
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247328) ----------------------------------------------------
char uninitialize_allocated_io_buffers()
{
  free_base(*(void **)&dword_140404A6C[19065659]);
  *(_QWORD *)&dword_140404A6C[19065659] = 0;
  free_base(*(void **)&dword_140404A6C[19065661]);
  *(_QWORD *)&dword_140404A6C[19065661] = 0;
  free_base(*(void **)&dword_140404A6C[19065839]);
  *(_QWORD *)&dword_140404A6C[19065839] = 0;
  free_base(*(void **)&dword_140404A6C[19065841]);
  *(_QWORD *)&dword_140404A6C[19065841] = 0;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402473B0) ----------------------------------------------------
void            sub_1402473B0(void **a1)
{
  __int64 v1; // rdi
  void **v2; // rbx
  __int64 v3; // rsi

  v1 = 0;
  v2 = a1;
  v3 = a1 < a1 + 1;
  if ( a1 < a1 + 1 )
  {
    do
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)*v2, 0xFFFFFFFF) == 1 && *v2 != &unk_1403025A0 )
      {
        free_base(*v2);
        *v2 = &unk_1403025A0;
      }
      ++v2;
      ++v1;
    }
    while ( v1 != v3 );
  }
}


//----- (0000000140247420) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_778(__int64 a1, void **a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*a2, 0xFFFFFFFF) == 1 && *a2 != &unk_1403025A0 )
  {
    free_base(*a2);
    *a2 = &unk_1403025A0;
  }
}


//----- (000000014024746C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_779(char *a1, unsigned __int64 a2)
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


//----- (0000000140247494) ----------------------------------------------------
char _acrt_initialize_sr()
{
  return sub_140260AA8(
           (unsigned __int8 (**)(void))&off_140289FB0,
           (unsigned __int8 (**)(void))L"Runtime Error!\n\nProgram: ");
}

// 140289FB0: using guessed type _UNKNOWN *off_140289FB0;
// 14028A0B0: using guessed type __int16[26];

//----- (00000001402474A8) ----------------------------------------------------
bool _acrt_thread_attach()
{
  return sub_140255BEC() != 0;
}

// 1402474A8: invalid function type '__vcrt_bool __cdecl _acrt_thread_attach()' has been ignored

//----- (00000001402474BC) ----------------------------------------------------
char _acrt_thread_detach()
{
  sub_140255A2C();
  return 1;
}

// 1402474BC: invalid function type '__crt_bool __cdecl _acrt_thread_detach()' has been ignored

//----- (00000001402474CC) ----------------------------------------------------
char            sub_1402474CC(char a1)
{
  if ( !a1 )
    return sub_140260B28((__int64)&off_140289FB0, (__int64)L"Runtime Error!\n\nProgram: ");
  if ( *(_QWORD *)&dword_140404A6C[19064593] )
    flushall();
  return 1;
}

// 1402474CC: invalid function type '?' has been ignored
// 140289FB0: using guessed type _UNKNOWN *off_140289FB0;
// 14028A0B0: using guessed type __int16[26];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247504) ----------------------------------------------------
char ATL__CAtlStringMgr__StaticInitialize()
{
  _acrt_uninitialize_ptd_0();
  return 1;
}


//----- (0000000140247518) ----------------------------------------------------
bool should_write_error_to_console()
{
  int v0; // eax

  v0 = set_error_mode(3);
  return v0 == 1 || !v0 && dword_140404A6C[19064881] == 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247544) ----------------------------------------------------
__int64            write_string_to_console(char *a1)
{
  __int64 v2; // r10
  char *v3; // rdx
  __int16 v4; // ax
  __int64 v6; // [rsp+0h] [rbp-258h] BYREF
  __int128 NumberOfBytesWritten; // [rsp+30h] [rbp-228h] BYREF
  _BYTE Buffer[500]; // [rsp+40h] [rbp-218h] BYREF
  char v9; // [rsp+234h] [rbp-24h] BYREF
  __int64 v10; // [rsp+240h] [rbp-18h]

  v2 = ((__int64 (           *)(__int64))GetStdHandle)(4294967284LL);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = Buffer;
    do
    {
      *v3++ = *a1;
      if ( v3 == &v9 )
        break;
      v4 = *(_WORD *)a1;
      a1 += 2;
    }
    while ( v4 );
    Buffer[499] = 0;
    LODWORD(NumberOfBytesWritten) = 0;
    ((void (           *)(__int64, _BYTE *, _QWORD, __int128 *, _QWORD))WriteFile)(
      v2,
      Buffer,
      (unsigned int)v3 - (unsigned int)Buffer - 1,
      &NumberOfBytesWritten,
      0);
  }
  return sub_1401F8B20((unsigned __int64)&v6 ^ v10);
}

// 14026E188: invalid function type 'HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)' has been ignored
// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored

//----- (00000001402475EC) ----------------------------------------------------
__int64            sub_1402475EC(char *a1)
{
  int v2; // eax
  __int64 v3; // rcx

  v2 = set_error_mode(3);
  if ( v2 == 1 || !v2 && dword_140404A6C[19064881] == 1 )
    return write_string_to_console(a1);
  if ( (unsigned int)sub_140259444(&dword_140404A6C[19064885], 788, (__int64)L"Runtime Error!\n\nProgram: ") )
    goto LABEL_15;
  HIWORD(dword_140404A6C[19065027]) = 0;
  if ( !(unsigned int)((__int64 (           *)(_QWORD, char *, __int64))GetModuleFileNameW)(
                        0,
                        (char *)&dword_140404A6C[19064897] + 2,
                        260) )
  {
    if ( (unsigned int)sub_140259444((_WORD *)&dword_140404A6C[19064897] + 1, 763, (__int64)L"<program name unknown>") )
      goto LABEL_15;
  }
  v3 = -1;
  do
    ++v3;
  while ( *((_WORD *)&dword_140404A6C[19064897] + v3 + 1) );
  if ( (unsigned __int64)(v3 + 1) > 0x3C
    && (unsigned int)sub_140260D80((_WORD *)&dword_140404A6C[19064868] + v3, 763 - (v3 - 59), (__int64)asc_140285E10, 3)
    || (unsigned int)sub_14025ACB4(&dword_140404A6C[19064885], 788, (__int64)L"\n\n")
    || (unsigned int)sub_14025ACB4(&dword_140404A6C[19064885], 788, (__int64)a1) )
  {
LABEL_15:
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return unknown_libname_892(
           (__int64)&dword_140404A6C[19064885],
           (__int64)L"Microsoft Visual C++ Runtime Library",
           0x12010u);
}

// 140247743: control flows out of bounds to 140247748
// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored
// 140285AE0: using guessed type __int16[37];
// 140285E10: using guessed type __int16 asc_140285E10[2];
// 140285E1C: using guessed type __int16 asc_140285E1C[3];
// 140285E40: using guessed type __int16[23];
// 14028A0B0: using guessed type __int16[26];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024774C) ----------------------------------------------------
__int64 sub_14024774C()
{
  return dword_140404A6C[19064881];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247754) ----------------------------------------------------
void            sub_140247754(unsigned int a1)
{
  dword_140404A6C[19064881] = a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBEB30: using guessed type unsigned int;

//----- (0000000140247794) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_782(char *a1, unsigned __int64 a2)
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


//----- (00000001402477C0) ----------------------------------------------------
bool sub_1402477C0()
{
  return __ROR8__(*(_QWORD *)&dword_140404A6C[19065279] ^ _security_cookie, _security_cookie & 0x3F) != 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402477E0) ----------------------------------------------------
void            sub_1402477E0(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19065279] = a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF168: using guessed type unsigned int;

//----- (00000001402477E8) ----------------------------------------------------
__int64            sub_1402477E8(__int64 a1)
{
  __int64 (           *v1)(__int64); // rdx

  v1 = (__int64 (           *)(__int64))__ROR8__(
                                          *(_QWORD *)&dword_140404A6C[19065279] ^ _security_cookie,
                                          _security_cookie & 0x3F);
  if ( v1 )
    return v1(a1);
  else
    return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247818) ----------------------------------------------------
void            sub_140247818(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19065279] = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247840) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_783()
{
  unsigned int *v0; // rbx
  bool v1; // di
  unsigned __int8 v2; // al

  sub_14025F520();
  v0 = &dword_140404A6C[19065281];
  if ( *(_QWORD *)&dword_140404A6C[19065843] )
    v0 = *(unsigned int **)&dword_140404A6C[19065843];
  v1 = 0;
  while ( 1 )
  {
    v2 = *(_BYTE *)v0;
    if ( *(_BYTE *)v0 <= 0x20u )
    {
      if ( !v2 )
        return v0;
      if ( !v1 )
        break;
    }
    if ( v2 == 34 )
      v1 = !v1;
    if ( ismbblead(v2) )
      v0 = (unsigned int *)((char *)v0 + 1);
    v0 = (unsigned int *)((char *)v0 + 1);
  }
  do
  {
    if ( v2 > 0x20u )
      break;
    v0 = (unsigned int *)((char *)v0 + 1);
    v2 = *(_BYTE *)v0;
  }
  while ( *(_BYTE *)v0 );
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA38: using guessed type unsigned int;

//----- (00000001402478B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_784()
{
  unsigned int *v0; // rcx
  bool v1; // dl
  unsigned __int16 v2; // ax

  v0 = &dword_140404A6C[19065282];
  v1 = 0;
  if ( *(_QWORD *)&dword_140404A6C[19065845] )
    v0 = *(unsigned int **)&dword_140404A6C[19065845];
  while ( 1 )
  {
    v2 = *(_WORD *)v0;
    if ( *(_WORD *)v0 <= 0x20u )
    {
      if ( !v2 )
        return v0;
      if ( !v1 )
        break;
    }
    if ( v2 == 34 )
      v1 = !v1;
    v0 = (unsigned int *)((char *)v0 + 2);
  }
  do
  {
    if ( v2 > 0x20u )
      break;
    v0 = (unsigned int *)((char *)v0 + 2);
    v2 = *(_WORD *)v0;
  }
  while ( *(_WORD *)v0 );
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA40: using guessed type unsigned int;

//----- (0000000140247920) ----------------------------------------------------
bool            should_copy_another_character(unsigned __int8 a1)
{
  return ismbblead(a1) != 0;
}

// 140247920: using guessed type bool __fastcall should_copy_another_character(unsigned __int8 a1);

//----- (000000014024793C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_785()
{
  unsigned int *v0; // rbx
  bool v1; // di
  unsigned __int8 v2; // al

  sub_14025F520();
  v0 = &dword_140404A6C[19065281];
  if ( *(_QWORD *)&dword_140404A6C[19065843] )
    v0 = *(unsigned int **)&dword_140404A6C[19065843];
  v1 = 0;
  while ( 1 )
  {
    v2 = *(_BYTE *)v0;
    if ( *(_BYTE *)v0 <= 0x20u )
    {
      if ( !v2 )
        return v0;
      if ( !v1 )
        break;
    }
    if ( v2 == 34 )
      v1 = !v1;
    if ( ismbblead(v2) )
      v0 = (unsigned int *)((char *)v0 + 1);
    v0 = (unsigned int *)((char *)v0 + 1);
  }
  do
  {
    if ( v2 > 0x20u )
      break;
    v0 = (unsigned int *)((char *)v0 + 1);
    v2 = *(_BYTE *)v0;
  }
  while ( *(_BYTE *)v0 );
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA38: using guessed type unsigned int;

//----- (00000001402479AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_786()
{
  unsigned int *v0; // rcx
  bool v1; // dl
  unsigned __int16 v2; // ax

  v0 = &dword_140404A6C[19065282];
  v1 = 0;
  if ( *(_QWORD *)&dword_140404A6C[19065845] )
    v0 = *(unsigned int **)&dword_140404A6C[19065845];
  while ( 1 )
  {
    v2 = *(_WORD *)v0;
    if ( *(_WORD *)v0 <= 0x20u )
    {
      if ( !v2 )
        return v0;
      if ( !v1 )
        break;
    }
    if ( v2 == 34 )
      v1 = !v1;
    v0 = (unsigned int *)((char *)v0 + 2);
  }
  do
  {
    if ( v2 > 0x20u )
      break;
    v0 = (unsigned int *)((char *)v0 + 2);
    v2 = *(_WORD *)v0;
  }
  while ( *(_WORD *)v0 );
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA40: using guessed type unsigned int;

//----- (0000000140247A00) ----------------------------------------------------
void         sub_140247A00(sr_anon_92 *First, sr_anon_92 *Last)
{
  sr_anon_92 *v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi

  v2 = First;
  v3 = 0;
  v4 = (unsigned __int64)((intptr_t)((uintptr_t)Last - (uintptr_t)First) + 7) >> 3;
  if ( First > Last )
    v4 = 0;
  if ( v4 )
  {
    do
    {
      if ( *(_QWORD *)v2 )
        (*(void (**)(void))v2)();
      v2 = (sr_anon_92 *)((char *)v2 + 8);
      ++v3;
    }
    while ( v3 != v4 );
  }
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140247A64) ----------------------------------------------------
int         sub_140247A64(_PIFV *First, _PIFV *Last)
{
  _PIFV *v3; // rbx
  bool i; // zf
  int result; // eax

  v3 = First;
  for ( i = First == Last; !i; i = v3 == Last )
  {
    if ( *(_QWORD *)v3 )
    {
      result = (*(__int64 (**)(void))v3)();
      if ( result )
        return result;
    }
    v3 = (_PIFV *)((char *)v3 + 8);
  }
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140247AA8) ----------------------------------------------------
__int64            sub_140247AA8(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_140404A6C[19065851];
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
// 144CBFA58: using guessed type unsigned int;

//----- (0000000140247AD8) ----------------------------------------------------
__int64            sub_140247AD8(__int32 a1)
{
  if ( ((a1 - 0x4000) & 0xFFFF3FFF) != 0 || a1 == 49152 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065851], a1);
    return 0;
  }
}

// 140247AD8: invalid function type 'errno_t __cdecl sub_140247AD8(int Mode)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247B18) ----------------------------------------------------
int         sub_140247B18(int FileHandle, int Mode)
{
  __int64 v4; // r14
  int v5; // ebx

  if ( Mode != 0x4000 && Mode != 0x8000 && Mode != 0x10000 && Mode != 0x40000 && Mode != 0x20000 )
  {
    *errno_sr() = 22;
LABEL_17:
    sub_14024CF6C();
    return -1;
  }
  if ( FileHandle == -2 )
  {
    *errno_sr() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= dword_140404A6C[19065657]
    || (v4 = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *errno_sr() = 9;
    goto LABEL_17;
  }
  sub_140261068(FileHandle);
  v5 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
    v5 = sub_140247C1C(FileHandle, Mode);
  else
    *errno_sr() = 9;
  sub_140261150(FileHandle);
  return v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247C1C) ----------------------------------------------------
__int64            sub_140247C1C(int a1, int a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // r9
  char v5; // cl
  char v6; // r11
  __int64 result; // rax

  v2 = (__int64)a1 >> 6;
  v3 = a1 & 0x3F;
  v4 = *(_QWORD *)&dword_140404A6C[2 * v2 + 19065401];
  v5 = *(_BYTE *)(v4 + 72 * v3 + 56);
  v6 = *(_BYTE *)(v4 + 72 * v3 + 57);
  if ( a2 == 0x4000 )
  {
    *(_BYTE *)(v4 + 72 * v3 + 56) = v5 | 0x80;
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 72 * v3 + 57) = 0;
  }
  else if ( a2 == 0x8000 )
  {
    *(_BYTE *)(v4 + 72 * v3 + 56) = v5 & 0x7F;
  }
  else if ( ((a2 - 0x10000) & 0xFFFEFFFF) != 0 )
  {
    if ( a2 == 0x40000 )
    {
      *(_BYTE *)(v4 + 72 * v3 + 56) = v5 | 0x80;
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 72 * v3 + 57) = 1;
    }
  }
  else
  {
    *(_BYTE *)(v4 + 72 * v3 + 56) = v5 | 0x80;
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 72 * v3 + 57) = 2;
  }
  if ( (v5 & 0x80) == 0 )
    return 0x8000;
  if ( !v6 )
    return 0x4000;
  result = 0x10000;
  if ( v6 == 1 )
    return 0x40000;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247D18) ----------------------------------------------------
__int64            sub_140247D18(__int64 a1, unsigned int *a2, __int64 ***a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  sub_1402627A8(***a3);
  return sub_140258BB8(*a4);
}


//----- (0000000140247D58) ----------------------------------------------------
__int64            sub_140247D58(__int64 a1, unsigned int *a2, __int64 **a3, unsigned int *a4)
{
  __int64 v6; // rax
  void *v7; // rcx
  char *v8; // r8
  int v9; // edx
  int v10; // eax
  __int64 *v11; // rax

  sub_140258B64(*a2);
  sub_140248950(**a3, *(_OWORD **)(*a3[1] + 144));
  v6 = sub_1402494A8((_DWORD *)**a3, *(_DWORD *)a3[3], *a3[4]);
  *a3[2] = v6;
  if ( v6 )
  {
    v7 = (void *)*a3[4];
    if ( v7 )
    {
      v8 = (char *)(&unk_140302588 - (_UNKNOWN *)v7);
      do
      {
        v9 = *(unsigned __int16 *)&v8[(_QWORD)v7];
        v10 = *(unsigned __int16 *)v7 - v9;
        if ( v10 )
          break;
        v7 = (char *)v7 + 2;
      }
      while ( v9 );
      if ( v10 )
        _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065283], 1);
    }
    updatetlocinfoEx_nolock((__int64 *)(*a3[1] + 144), **a3);
    sub_140262A34(**a3);
    v11 = a3[1];
    if ( (*(_BYTE *)(*v11 + 936) & 2) == 0 && (dword_140302B88 & 1) == 0 )
    {
      updatetlocinfoEx_nolock((__int64 *)&dword_140404A6C[19065667], *(_QWORD *)(*v11 + 144));
      off_140302B78 = *(_UNKNOWN ***)(*(_QWORD *)&dword_140404A6C[19065667] + 248LL);
      off_140302590 = **(__int16 ***)&dword_140404A6C[19065667];
      dword_14030258C = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19065667] + 8LL);
    }
  }
  else
  {
    sub_140262A34(**a3);
    sub_140262834(**a3);
  }
  return sub_140258BB8(*a4);
}

// 14030258C: using guessed type int dword_14030258C;
// 140302590: using guessed type __int16 *off_140302590;
// 140302B78: using guessed type _UNKNOWN **off_140302B78;
// 140302B88: using guessed type int dword_140302B88;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF778: using guessed type unsigned int;

//----- (0000000140247E94) ----------------------------------------------------
__int64            sub_140247E94(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  __int64 *i; // rbx

  sub_140258B64(*a2);
  for ( i = (__int64 *)&dword_140404A6C[19065667]; i != (__int64 *)&dword_140404A6C[19065669]; ++i )
  {
    if ( (__int16 **)*i != &off_140302420 )
      *i = updatetlocinfoEx_nolock(i, (__int64)&off_140302420);
  }
  return sub_140258BB8(*a4);
}

// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140247F04) ----------------------------------------------------
__int64            sub_140247F04(__int64 a1, __int64 a2, __int64 **a3, __int64 *a4)
{
  __int64 result; // rax

  _lambda_2a444430fde8c29194d880d93eed5e8f___operator_call(a3);
  result = *a4;
  *(_DWORD *)(*(_QWORD *)*a4 + 936LL) &= ~0x10u;
  return result;
}


//----- (0000000140247F30) ----------------------------------------------------
__int64            sub_140247F30(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_QWORD **)a3 + 8LL));
  return sub_140258BB8(*a4);
}


//----- (0000000140247F74) ----------------------------------------------------
__int64            sub_140247F74(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140247E94((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140247F9C) ----------------------------------------------------
__int64            sub_140247F9C(unsigned int a1, __int64 ***a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140247D18((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140247FC4) ----------------------------------------------------
__int64            sub_140247FC4(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140247F30((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140247FEC) ----------------------------------------------------
__int64            sub_140247FEC(unsigned int a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140247D58((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014024802C) ----------------------------------------------------
void            sub_14024802C(__int16 ***a1)
{
  __int16 ***v1; // rdi
  __int64 *v2; // rbx

  v1 = a1 + 1;
  v2 = (__int64 *)a1;
  do
  {
    if ( (__int16 **)*v2 != &off_140302420 )
      *v2 = updatetlocinfoEx_nolock(v2, (__int64)&off_140302420);
    ++v2;
  }
  while ( v2 != (__int64 *)v1 );
}

// 140302420: using guessed type __int16 *off_140302420;

//----- (0000000140248134) ----------------------------------------------------
_expandlocale_locale_name_cache *           sub_140248134(
        sr_anon_128 *this,
        sr_anon_49 *     a2,
        __int64 a3,
        struct __crt_qualified_locale_data *     a4)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(a2);
  *((_QWORD *)this + 2) = (uint64)(uintptr_t)(a4);
  *((_QWORD *)this + 1) = a3;
  *((_BYTE *)this + 24) = 0;
  if ( (unsigned int)sub_140260D80(a2, a3, (__int64)a4 + 600, 85) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return this;
}

// 140248187: control flows out of bounds to 14024818C

//----- (0000000140248190) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1027(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402481AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1028(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402481C8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1029(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402481E4) ----------------------------------------------------
void            sub_1402481E4(sr_anon_128 *this)
{
  if ( !*((_BYTE *)this + 24) )
  {
    if ( (unsigned int)sub_140260D80(
                         (_WORD *)(*((_QWORD *)this + 2) + 600LL),
                         85,
                         *(_QWORD *)this,
                         *((_QWORD *)this + 1)) )
    {
      sub_14024CFBC();
      __debugbreak();
    }
  }
}


//----- (000000014024825C) ----------------------------------------------------
void            _lambda_2a444430fde8c29194d880d93eed5e8f___operator_call(__int64 **a1)
{
  __int64 v2; // rbx
  __int64 *v3[7]; // [rsp+20h] [rbp-38h] BYREF
  char v4; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF

  v2 = calloc_base(1, 344);
  **a1 = v2;
  free_base(nullptr);
  if ( v2 )
  {
    v3[0] = *a1;
    v3[1] = a1[1];
    v3[2] = a1[2];
    v3[3] = a1[3];
    v3[4] = a1[4];
    v5 = 4;
    v6 = 4;
    sub_140247D58((__int64)&v4, &v6, v3, &v5);
  }
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (00000001402482EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_792(__int64 a1, __int16 ***a2)
{
  if ( *a2 != &off_140302420 )
    *a2 = (__int16 **)updatetlocinfoEx_nolock((__int64 *)a2, (__int64)&off_140302420);
}

// 140302420: using guessed type __int16 *off_140302420;

//----- (000000014024831C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void unknown_libname_793()
{
  if ( *(__int16 ***)&dword_140404A6C[19065667] != &off_140302420 )
    *(_QWORD *)&dword_140404A6C[19065667] = updatetlocinfoEx_nolock(
                                              (__int64 *)&dword_140404A6C[19065667],
                                              (__int64)&off_140302420);
}

// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF778: using guessed type unsigned int;

//----- (000000014024839C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_797(__int64 **a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  char *v4; // r8
  int v5; // edx
  int v6; // eax
  __int64 *v7; // rax

  sub_140248950(**a1, *(_OWORD **)(*a1[1] + 144));
  v2 = sub_1402494A8((_DWORD *)**a1, *(_DWORD *)a1[3], *a1[4]);
  *a1[2] = v2;
  if ( v2 )
  {
    v3 = (void *)*a1[4];
    if ( v3 )
    {
      v4 = (char *)(&unk_140302588 - (_UNKNOWN *)v3);
      do
      {
        v5 = *(unsigned __int16 *)&v4[(_QWORD)v3];
        v6 = *(unsigned __int16 *)v3 - v5;
        if ( v6 )
          break;
        v3 = (char *)v3 + 2;
      }
      while ( v5 );
      if ( v6 )
        _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065283], 1);
    }
    updatetlocinfoEx_nolock((__int64 *)(*a1[1] + 144), **a1);
    sub_140262A34(**a1);
    v7 = a1[1];
    if ( (*(_BYTE *)(*v7 + 936) & 2) == 0 && (dword_140302B88 & 1) == 0 )
    {
      updatetlocinfoEx_nolock((__int64 *)&dword_140404A6C[19065667], *(_QWORD *)(*v7 + 144));
      off_140302B78 = *(_UNKNOWN ***)(*(_QWORD *)&dword_140404A6C[19065667] + 248LL);
      off_140302590 = **(__int16 ***)&dword_140404A6C[19065667];
      dword_14030258C = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19065667] + 8LL);
    }
  }
  else
  {
    sub_140262A34(**a1);
    sub_140262834(**a1);
  }
}

// 14030258C: using guessed type int dword_14030258C;
// 140302590: using guessed type __int16 *off_140302590;
// 140302B78: using guessed type _UNKNOWN **off_140302B78;
// 140302B88: using guessed type int dword_140302B88;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF778: using guessed type unsigned int;

//----- (00000001402484BC) ----------------------------------------------------
__int64            sub_1402484BC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned int)sub_140260D80((_WORD *)(*(_QWORD *)(a1 + 16) + 600LL), 85, a2, a3)
    || (result = sub_140260D80(*(_WORD **)a1, *(_QWORD *)(a1 + 8), a2, a3), (_DWORD)result) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}

// 14024852D: control flows out of bounds to 140248532

//----- (0000000140248534) ----------------------------------------------------
__int64            sub_140248534(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_140260D80(*(_WORD **)a1, *(_QWORD *)(a1 + 8), a2, a3);
  if ( (_DWORD)result )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}

// 14024856D: control flows out of bounds to 140248572

//----- (00000001402485B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1030(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402485CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1031(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402485E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1032(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140248608) ----------------------------------------------------
_WORD *           sub_140248608(__m128i *a1)
{
  unsigned __int64 v2; // rsi
  _WORD *v3; // rax
  _WORD *v4; // rbx

  if ( !a1 )
    return nullptr;
  v2 = sub_140254F48(a1, 0x55u);
  if ( v2 >= 0x55 )
    return nullptr;
  v3 = (_WORD *)malloc_base();
  v4 = v3;
  if ( !v3 )
    return nullptr;
  if ( (unsigned int)sub_140260D80(v3, v2 + 1, (__int64)a1, v2 + 1) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return v4;
}

// 140248684: control flows out of bounds to 140248689

//----- (000000014024868C) ----------------------------------------------------
__int64 sub_14024868C()
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065283], 1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140248698) ----------------------------------------------------
__int64 sub_140248698()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 4;
  v3 = 4;
  return sub_140247E94((__int64)&v1, &v3, (__int64)&v1, &v2);
}


//----- (00000001402486D8) ----------------------------------------------------
void            sub_1402486D8(_WORD *a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)sub_140259444(a1, a2, a3) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  if ( *(_WORD *)(a3 + 128) )
    sub_1402491B0(a1, a2, 2);
  if ( *(_WORD *)(a3 + 256) )
    sub_1402491B0(a1, a2, 2);
}

// 140248774: control flows out of bounds to 140248779

//----- (000000014024877C) ----------------------------------------------------
__int64            sub_14024877C(_WORD *a1, _WORD *a2)
{
  int i; // edi
  __int16 *v6; // r14
  __int16 v7; // si
  _WORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax

  sub_1401FCD30((void *)(uintptr_t)(a1), 0, 0x1CAu);
  if ( !*a2 )
    return 0;
  if ( *a2 == 46 && a2[1] )
  {
    if ( (unsigned int)sub_140260D80(a1 + 128, 16, (__int64)(a2 + 1), 15) )
    {
LABEL_27:
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    a1[143] = 0;
    return 0;
  }
  for ( i = 0; ; ++i )
  {
    v10 = sub_1402625A4(a2, L"_.,");
    if ( !v10 )
      break;
    v6 = &a2[v10];
    v7 = *v6;
    if ( i )
    {
      if ( i == 1 )
      {
        if ( v10 >= 0x40 || v7 == 95 )
          return 0xFFFFFFFFLL;
        v8 = a1 + 64;
        v9 = 64;
      }
      else
      {
        if ( i != 2 || v10 >= 0x10 || v7 && v7 != 44 )
          return 0xFFFFFFFFLL;
        v8 = a1 + 128;
        v9 = 16;
      }
      if ( (unsigned int)sub_140260D80(v8, v9, (__int64)a2, v10) )
        goto LABEL_27;
    }
    else
    {
      if ( v10 >= 0x40 )
        return 0xFFFFFFFFLL;
      if ( (unsigned int)sub_140260D80(a1, 64, (__int64)a2, v10) )
        goto LABEL_27;
      i = v7 == 46;
    }
    if ( v7 == 44 || !v7 )
      return 0;
    a2 = v6 + 1;
  }
  return 0xFFFFFFFFLL;
}

// 1402488DC: control flows out of bounds to 1402488E1
// 14028A2A8: using guessed type __int16 asc_14028A2A8[4];

//----- (00000001402488E4) ----------------------------------------------------
int         sub_1402488E4(int Flag)
{
  unsigned __int64 v2; // rax
  int v3; // r8d
  int v4; // ecx
  unsigned int v6; // r8d

  v2 = sub_140255A70();
  v3 = *(_DWORD *)(v2 + 936);
  v4 = -((v3 & 2) != 0);
  if ( Flag == -1 )
  {
    dword_140302B88 = -1;
  }
  else if ( Flag )
  {
    if ( Flag == 1 )
    {
      v6 = v3 | 2;
    }
    else
    {
      if ( Flag != 2 )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return -1;
      }
      v6 = v3 & 0xFFFFFFFD;
    }
    *(_DWORD *)(v2 + 936) = v6;
  }
  return v4 + 2;
}

// 140302B88: using guessed type int dword_140302B88;

//----- (0000000140248950) ----------------------------------------------------
void            sub_140248950(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // r8
  __int128 v4; // xmm1

  if ( a2 && a1 && (_OWORD *)a1 != a2 )
  {
    v2 = 2;
    v3 = (_OWORD *)a1;
    do
    {
      *v3 = *a2;
      v3[1] = a2[1];
      v3[2] = a2[2];
      v3[3] = a2[3];
      v3[4] = a2[4];
      v3[5] = a2[5];
      v3[6] = a2[6];
      v3 += 8;
      v4 = a2[7];
      a2 += 8;
      *(v3 - 1) = v4;
      --v2;
    }
    while ( v2 );
    *v3 = *a2;
    v3[1] = a2[1];
    v3[2] = a2[2];
    v3[3] = a2[3];
    v3[4] = a2[4];
    *((_QWORD *)v3 + 10) = *((_QWORD *)a2 + 10);
    *(_DWORD *)(a1 + 16) = 0;
    sub_1402627A8(a1);
  }
}


//----- (0000000140248A10) ----------------------------------------------------
__int64            sub_140248A10(unsigned int a1, __int64 a2)
{
  _QWORD v4[5]; // [rsp+0h] [rbp-158h] BYREF
  int v5; // [rsp+28h] [rbp-130h]
  _BYTE Locale[272]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v7; // [rsp+140h] [rbp-18h]

  if ( a1 <= 5 )
  {
    if ( a2 )
    {
      v5 = 131;
      v4[4] = (uint64)(uintptr_t)(Locale);
      if ( (unsigned int)sub_140259504() )
        sub_140249068(a1, Locale);
    }
  }
  return sub_1401F8B20((unsigned __int64)v4 ^ v7);
}

// 140248A10: invalid function type '#86 __cdecl sub_140248A10(int Category, const char *Locale)' has been ignored
// 140249068: using guessed type __int64 __fastcall sub_140249068(_QWORD, _QWORD);

//----- (0000000140248A88) ----------------------------------------------------
__int64            sub_140248A88(char *a1, sr_anon_57 *a2, __int64 a3, sr_anon_44 *a4, __int64 a5, _DWORD *a6)
{
  unsigned __int64 v9; // rax
  char v10; // r14
  char *v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  int v14; // edi
  unsigned __int16 *v15; // rax
  int v16; // edx
  int v17; // ecx
  sr_anon_44 *v18; // rax
  int v19; // edx
  int v20; // ecx
  bool v21; // zf
  signed int *v22; // rdi
  int qualified_locale_downlevel; // eax
  __int64 v24; // rdi
  unsigned __int16 v25; // ax
  __int64 v26; // r8
  char *v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // [rsp+0h] [rbp-100h] BYREF
  __int128 Reserved; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  signed int *v36; // [rsp+38h] [rbp-C8h]
  sr_anon_44 *v37; // [rsp+40h] [rbp-C0h]
  sr_anon_44 *v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 MaxCount; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h]
  char v41; // [rsp+60h] [rbp-A0h]
  _DWORD *v42; // [rsp+68h] [rbp-98h]
  __int64 SizeInWords; // [rsp+70h] [rbp-90h]
  sr_anon_57 *Destination; // [rsp+78h] [rbp-88h]
  _WORD v45[128]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v46; // [rsp+180h] [rbp+80h]
  unsigned __int16 v47; // [rsp+182h] [rbp+82h]
  unsigned __int16 v48; // [rsp+184h] [rbp+84h]
  __int16 v49; // [rsp+186h] [rbp+86h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  _WORD Source[88]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v52; // [rsp+250h] [rbp+150h]

  SizeInWords = a3;
  Destination = a2;
  v35 = a5;
  v42 = a6;
  if ( a1 )
  {
    if ( *(_WORD *)a1 == 67 && !*((_WORD *)a1 + 1) )
    {
      if ( !(unsigned int)sub_140259444(a2, a3, (__int64)L"C") )
      {
        *a6 = 0;
        return sub_1401F8B20((unsigned __int64)&v33 ^ v52);
      }
      goto LABEL_67;
    }
    v9 = sub_140255A70();
    v38 = a4;
    MaxCount = a5;
    v40 = v9 + 152;
    v10 = 0;
    v41 = 0;
    v36 = (signed int *)(v9 + 184);
    v37 = (sr_anon_44 *)(v9 + 188);
    v11 = (char *)(v9 + 450);
    if ( (unsigned int)sub_140260D80(a4, a5, v9 + 752, 85) )
      goto LABEL_67;
    v12 = -1;
    v13 = -1;
    v14 = 0;
    do
      ++v13;
    while ( *(_WORD *)&a1[2 * v13] );
    if ( v13 < 0x83 )
    {
      v15 = (unsigned __int16 *)v11;
      do
      {
        v16 = *(unsigned __int16 *)((uintptr_t)v15 + (uintptr_t)a1 - (uintptr_t)v11);
        v17 = *v15 - v16;
        if ( v17 )
          break;
        ++v15;
      }
      while ( v16 );
      if ( !v17 )
        goto LABEL_66;
      v18 = v37;
      do
      {
        v19 = *(unsigned __int16 *)((uintptr_t)v18 + (uintptr_t)a1 - (uintptr_t)v37);
        v20 = *(unsigned __int16 *)v18 - v19;
        if ( v20 )
          break;
        v18 = (sr_anon_44 *)((char *)v18 + 2);
      }
      while ( v19 );
      if ( !v20 )
        goto LABEL_66;
    }
    LOBYTE(v14) = !sub_14024F8BC();
    if ( (unsigned int)sub_14024877C(v45, a1) )
    {
      v22 = v36;
    }
    else
    {
      v21 = v14 == 0;
      v22 = v36;
      if ( v21 )
        qualified_locale_downlevel = sub_14026340C(v45, v36, (__int64)v45);
      else
        qualified_locale_downlevel = _acrt_get_qualified_locale_downlevel((__int64)v45, v36, (__int64)v45);
      if ( qualified_locale_downlevel )
      {
        sub_1402486D8(v11, 131, (__int64)v45);
        do
          ++v12;
        while ( Source[v12] );
        v10 = 1;
        if ( (unsigned int)sub_140260D80(a4, v35, (__int64)Source, v12 + 1) )
          goto LABEL_68;
        v24 = v13 + 1;
        goto LABEL_61;
      }
    }
    if ( (unsigned int)sub_14024F408((__int64)a1) )
    {
      LODWORD(v35) = 0;
      if ( !(unsigned int)sub_14024F174((__int64)a1, 0x20001004u, (__int64)&v35, 2u) || (v25 = v35, !(_DWORD)v35) )
        v25 = -535;
      *v22 = v25;
      v24 = v13 + 1;
      if ( (unsigned int)sub_140260D80(v11, 131, (__int64)a1, v13 + 1) )
        goto LABEL_68;
      v26 = v13 + 1;
      v27 = a1;
      goto LABEL_60;
    }
    if ( !(unsigned __int8)parse_bcp47(v45, (unsigned __int16 *)a1) || !(unsigned int)sub_14024F408((__int64)Source) )
    {
LABEL_51:
      if ( v10 || !(unsigned int)sub_140260D80((_WORD *)(v40 + 600), 85, (__int64)v38, MaxCount) )
        return sub_1401F8B20((unsigned __int64)&v33 ^ v52);
LABEL_67:
      *(_QWORD *)&Reserved = 0;
      sub_14024CFBC();
      __debugbreak();
    }
    if ( v46 )
    {
      v28 = v46 + 32;
      if ( (unsigned int)v46 - 65 > 0x19 )
        v28 = v46;
      if ( v28 != 117 )
        goto LABEL_50;
      v29 = v47 + 32;
      if ( (unsigned int)v47 - 65 > 0x19 )
        v29 = v47;
      if ( v29 != 116 )
        goto LABEL_50;
      v30 = v48 + 32;
      if ( (unsigned int)v48 - 65 > 0x19 )
        v30 = v48;
      if ( v30 != 102 || v49 != 56 || (_WORD)v50 )
      {
LABEL_50:
        if ( v49 != 45 || (_DWORD)v50 != 56 )
          goto LABEL_51;
      }
    }
    else
    {
      LODWORD(v35) = 0;
      if ( (unsigned int)sub_14024F174((__int64)Source, 0x20001004u, (__int64)&v35, 2u) )
      {
        v31 = v35;
        if ( (_DWORD)v35 )
          goto LABEL_57;
      }
    }
    v31 = -535;
LABEL_57:
    *v22 = v31;
    v24 = v13 + 1;
    if ( (unsigned int)sub_140260D80(v11, 131, (__int64)a1, v13 + 1) )
      goto LABEL_68;
    do
      ++v12;
    while ( Source[v12] );
    v27 = (char *)Source;
    v26 = v12 + 1;
LABEL_60:
    sub_1402484BC((__int64)&v38, (__int64)v27, v26);
    v10 = v41;
LABEL_61:
    if ( !*(_WORD *)a1 || v13 >= 0x83 )
    {
      *(_WORD *)v37 = 0;
      goto LABEL_66;
    }
    if ( !(unsigned int)sub_140260D80(v37, 131, (__int64)a1, v24) )
    {
LABEL_66:
      v32 = SizeInWords;
      *v42 = *v36;
      if ( (unsigned int)sub_140259444(Destination, v32, (__int64)v11) )
        goto LABEL_67;
      goto LABEL_51;
    }
LABEL_68:
    *(_QWORD *)&Reserved = 0;
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return sub_1401F8B20((unsigned __int64)&v33 ^ v52);
}

// 140248F01: control flows out of bounds to 140248F06
// 14028A2A0: using guessed type __int16[2];

//----- (0000000140248F08) ----------------------------------------------------
void            sub_140248F08(__int64 *Block)
{
  volatile signed __int32 *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  if ( Block )
  {
    sub_140258B64(5);
    v2 = (volatile signed __int32 *)Block[1];
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      {
        v3 = (void *)Block[1];
        if ( v3 != &unk_1403025A0 )
          free_base(v3);
      }
    }
    sub_140258BB8(5);
    if ( *Block )
    {
      sub_140258B64(4);
      sub_140262A34(*Block);
      v4 = *Block;
      if ( *Block && !*(_DWORD *)(v4 + 16) && (__int16 **)v4 != &off_140302420 )
        sub_140262834(v4);
      sub_140258BB8(4);
    }
    free_base(Block);
  }
}

// 140248F08: invalid function type 'void __cdecl sub_140248F08(#86 Locale)' has been ignored
// 140302420: using guessed type __int16 *off_140302420;

//----- (0000000140248FAC) ----------------------------------------------------
_QWORD *sub_140248FAC()
{
  unsigned __int64 v0; // rdi
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  __int64 **v4[2]; // [rsp+20h] [rbp-10h] BYREF
  char v5; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+30h] BYREF
  _QWORD *v8; // [rsp+68h] [rbp+38h] BYREF

  v0 = sub_140255A70();
  v1 = nullptr;
  v8 = (_QWORD *)calloc_base(1, 16);
  if ( v8 )
  {
    sub_140262ADC();
    sub_14025F580();
    *v8 = *(_QWORD *)(v0 + 144);
    v8[1] = *(_QWORD *)(v0 + 136);
    v4[0] = &v8;
    v6 = 4;
    v7 = 4;
    sub_140247D18((__int64)&v5, &v7, v4, &v6);
    v4[0] = &v8;
    v6 = 5;
    v7 = 5;
    sub_140247F30((__int64)&v5, &v7, (__int64)v4, &v6);
    v2 = v8;
    v8 = nullptr;
    v1 = v2;
  }
  free_base(nullptr);
  return v1;
}

// 140248FAC: invalid function type '#86 __cdecl sub_140248FAC()' has been ignored
// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);

//----- (0000000140249068) ----------------------------------------------------
_QWORD *           sub_140249068(unsigned int a1, __int64 a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rsi
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx

  if ( a1 > 5 )
    return nullptr;
  v4 = nullptr;
  if ( !a2 )
    return nullptr;
  v5 = (_QWORD *)calloc_base(1, 16);
  if ( v5 )
  {
    v6 = (_DWORD *)calloc_base(1, 344);
    if ( v6 )
    {
      v7 = (_DWORD *)calloc_base(1, 552);
      if ( v7 )
      {
        sub_140248950((__int64)v6, &off_140302420);
        if ( !sub_1402494A8(v6, a1, a2) || (unsigned int)setmbcp_nolock(v6[3], (__int64)v7) )
        {
          sub_140262A34((__int64)v6);
          v10 = (__int64)v6;
          v6 = nullptr;
          sub_140262834(v10);
        }
        else
        {
          *v7 = 1;
          *v5 = (uint64)(uintptr_t)(v6);
          v6 = nullptr;
          v8 = v7;
          v7 = nullptr;
          v5[1] = (uint64)(uintptr_t)(v8);
          v9 = v5;
          v5 = nullptr;
          v4 = v9;
        }
      }
      else
      {
        *errno_sr() = 12;
      }
      free_base(v7);
    }
    else
    {
      *errno_sr() = 12;
    }
    free_base(v6);
  }
  else
  {
    *errno_sr() = 12;
  }
  free_base(v5);
  return v4;
}

// 140249068: invalid function type '#86 __cdecl sub_140249068(int Category, const #57 *Locale)' has been ignored
// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);
// 140302420: using guessed type __int16 *off_140302420;

//----- (00000001402491B0) ----------------------------------------------------
void            sub_1402491B0(_WORD *a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 *v4; // rdi
  _QWORD v7[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( a3 > 0 )
  {
    v3 = 0;
    v4 = &v7[14];
    do
    {
      if ( (unsigned int)sub_14025ACB4(a1, a2, *++v4) )
      {
        v7[4] = 0;
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      ++v3;
    }
    while ( v3 < a3 );
  }
}

// 14024920F: control flows out of bounds to 140249214

//----- (0000000140249218) ----------------------------------------------------
__int64            sub_140249218(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  __int64 v4; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 *v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v6[5]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+70h] [rbp+10h] BYREF
  __int64 v8; // [rsp+78h] [rbp+18h] BYREF
  char v9; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp+28h] BYREF

  v8 = a2;
  v7 = a1;
  v3 = 0;
  v4 = 0;
  if ( a1 <= 5 )
  {
    v10 = sub_140255A70();
    sub_14024F91C();
    sub_140262ADC();
    *(_DWORD *)(v10 + 936) |= 0x10u;
    v5 = &v10;
    v6[0] = &v4;
    v6[1] = (__int64 *)&v10;
    v6[2] = &v3;
    v6[3] = (__int64 *)&v7;
    v6[4] = &v8;
    sub_140247F04((__int64)&v9, (__int64)&v9, v6, (__int64 *)&v5);
    return v3;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (00000001402492BC) ----------------------------------------------------
_WORD *           sub_1402492BC(__int64 a1)
{
  int v2; // edi
  _WORD *result; // rax
  _WORD *v4; // rsi
  _WORD *v5; // r14
  char **v6; // r15
  __int16 **v7; // rbp
  unsigned __int16 *v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rdx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rcx

  v2 = 1;
  result = (_WORD *)malloc_base();
  v4 = result;
  if ( result )
  {
    v5 = result + 2;
    result[2] = 0;
    v6 = (char **)(a1 + 72);
    *(_DWORD *)result = 1;
    sub_1402491B0(result + 2, 849, 3);
    v7 = &off_14028A188;
    do
    {
      if ( (unsigned int)sub_14025ACB4(v5, 849, (__int64)L";") )
      {
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      v8 = (unsigned __int16 *)*v6;
      do
      {
        v9 = *(unsigned __int16 *)((uintptr_t)v8 + (uintptr_t)v6[4] - (uintptr_t)*v6);
        v10 = *v8 - v9;
        if ( v10 )
          break;
        ++v8;
      }
      while ( v9 );
      v11 = 0;
      if ( !v10 )
        v11 = v2;
      v2 = v11;
      v7 += 3;
      v6 += 4;
      sub_1402491B0(v5, 849, 3);
    }
    while ( (__int64)v7 < (__int64)&off_14028A1E8 );
    if ( v2 )
    {
      free_base(v4);
      v14 = *(volatile signed __int32 **)(a1 + 56);
      if ( v14 && _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 56));
      v15 = *(volatile signed __int32 **)(a1 + 48);
      if ( v15 && _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 48));
      result = *(_WORD **)(a1 + 104);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    else
    {
      v12 = *(volatile signed __int32 **)(a1 + 56);
      if ( v12 && _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 56));
      v13 = *(volatile signed __int32 **)(a1 + 48);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          free_base(*(void **)(a1 + 48));
      }
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 56) = (uint64)(uintptr_t)(v4);
      *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(v5);
      return v5;
    }
  }
  return result;
}

// 1402494A0: control flows out of bounds to 1402494A5
// 14028A188: using guessed type __int16 *off_14028A188;
// 14028A1E8: using guessed type __int16 *off_14028A1E8;
// 14028A288: using guessed type __int16 asc_14028A288[2];

//----- (00000001402494A8) ----------------------------------------------------
__int64            sub_1402494A8(_DWORD *a1, int a2, __int64 a3)
{
       sr_anon_49 *v3; // rbx
  _DWORD *v4; // rdi
  int v5; // ebp
  int v6; // esi
  sr_anon_49 *v7; // rax
  sr_anon_49 *v8; // r14
  __int64 v9; // rbp
  int v10; // r12d
  __int16 **v11; // r15
  __int64 v12; // rax
  _WORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  _WORD *v16; // rax
  __int16 v17; // cx
  int v19; // ebx
  _QWORD *v20; // r14
  unsigned __int16 *v21; // rax
  int v22; // r8d
  int v23; // ecx
  _QWORD v24[5]; // [rsp+0h] [rbp-248h] BYREF
  _DWORD v25[4]; // [rsp+30h] [rbp-218h] BYREF
  _WORD v26[136]; // [rsp+40h] [rbp-208h] BYREF
  _BYTE v27[176]; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+200h] [rbp-48h]

  v3 = (     sr_anon_49 *)a3;
  v4 = a1;
  if ( a2 )
  {
    if ( a3 )
      sub_140249740(a1, a2, (char *)a3);
    return sub_1401F8B20((unsigned __int64)v24 ^ v28);
  }
  v5 = 1;
  v6 = 0;
  if ( !a3 )
  {
LABEL_32:
    sub_1402492BC((__int64)a1);
    return sub_1401F8B20((unsigned __int64)v24 ^ v28);
  }
  if ( *(_WORD *)a3 != 76 || *(_WORD *)(a3 + 2) != 67 || *(_WORD *)(a3 + 4) != 95 )
  {
    if ( !sub_140248A88((char *)a3, (sr_anon_57 *)v26, 131, (sr_anon_44 *)v27, 85, v25) )
      return sub_1401F8B20((unsigned __int64)v24 ^ v28);
    v19 = 0;
    v20 = v4 + 10;
    do
    {
      if ( v19 )
      {
        v21 = v26;
        do
        {
          v22 = *(unsigned __int16 *)((char *)v21 + *v20 - (_QWORD)v26);
          v23 = *v21 - v22;
          if ( v23 )
            break;
          ++v21;
        }
        while ( v22 );
        if ( !v23 || sub_140249740(v4, v19, (char *)v26) )
          ++v6;
        else
          v5 = 0;
      }
      ++v19;
      v20 += 4;
    }
    while ( v19 <= 5 );
    if ( !v5 )
    {
LABEL_30:
      if ( !v6 )
        return sub_1401F8B20((unsigned __int64)v24 ^ v28);
    }
    a1 = v4;
    goto LABEL_32;
  }
  while ( 1 )
  {
    v7 = wcspbrk_sr(v3, (     sr_anon_49 *)L"=;");
    v8 = v7;
    if ( !v7 )
      break;
    v9 = ((intptr_t)((uintptr_t)v7 - (uintptr_t)v3)) >> 1;
    if ( !v9 || *(_WORD *)v7 == 59 )
      break;
    v10 = 1;
    v11 = &off_14028A188;
    do
    {
      if ( !(unsigned int)wcsncmp_sr(*v11, v3, v9) )
      {
        v12 = -1;
        do
          ++v12;
        while ( (*v11)[v12] );
        if ( v9 == v12 )
          break;
      }
      ++v10;
      v11 += 3;
    }
    while ( (__int64)v11 <= (__int64)&off_14028A1E8 );
    v13 = (_WORD *)((char *)v8 + 2);
    v14 = sub_1402625A4(v13, L";");
    v15 = v14;
    if ( !v14 && *v13 != 59 )
      break;
    if ( v10 <= 5 )
    {
      if ( (unsigned int)sub_140260D80(v26, 131, (__int64)v13, v14) )
      {
        v24[4] = 0;
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      if ( (unsigned __int64)(2 * v15) >= 0x106 )
        sub_1401F8694();
      v26[v15] = 0;
      if ( sub_140249740(v4, v10, (char *)v26) )
        ++v6;
    }
    v16 = &v13[v15];
    v17 = *v16;
    if ( *v16 )
      v17 = v16[1];
    v3 = (     sr_anon_49 *)(v16 + 1);
    if ( !*v16 )
      v3 = (     sr_anon_49 *)v16;
    if ( !v17 )
      goto LABEL_30;
  }
  return sub_1401F8B20((unsigned __int64)v24 ^ v28);
}

// 140249738: control flows out of bounds to 14024973D
// 14028A188: using guessed type __int16 *off_14028A188;
// 14028A1E8: using guessed type __int16 *off_14028A1E8;
// 14028A280: using guessed type __int16 Control[3];
// 14028A288: using guessed type __int16 asc_14028A288[2];

//----- (0000000140249740) ----------------------------------------------------
__int64            sub_140249740(_DWORD *a1, int a2, char *a3)
{
  __int64 v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int16 *v7; // rcx
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rax
  _DWORD *v13; // r13
  bool v14; // zf
  _WORD *v15; // rax
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ecx
  unsigned __int64 *v22; // rax
  _QWORD v24[5]; // [rsp+0h] [rbp-100h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh]
  void *v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  _WORD v29[136]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v30[11]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v31[40]; // [rsp+220h] [rbp+120h] BYREF

  v4 = a2;
  v6 = sub_140255A70();
  if ( sub_140248A88(a3, (sr_anon_57 *)v29, 131, (sr_anon_44 *)v30, 85, &v25) )
  {
    v7 = v29;
    v8 = 8 * v4;
    do
    {
      v9 = *(unsigned __int16 *)((char *)v7 + *(_QWORD *)&a1[8 * v4 + 10] - (_QWORD)v29);
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( v10 )
    {
      v11 = -1;
      do
        ++v11;
      while ( v29[v11] );
      v12 = malloc_base();
      v13 = (_DWORD *)v12;
      if ( v12 )
      {
        v27 = *(void **)&a1[v8 + 10];
        v28 = *(_QWORD *)&a1[2 * v4 + 74];
        v26 = a1[3];
        if ( (unsigned int)sub_140259444((_WORD *)(v12 + 4), v11 + 1, (__int64)v29) )
        {
          v24[4] = 0;
          sub_14024CFBC();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        v14 = v29[0] == 67;
        *(_QWORD *)&a1[v8 + 10] = (uint64)(uintptr_t)(v13 + 1);
        if ( !v14 || v29[1] )
          v15 = sub_140248608(v30);
        else
          v15 = nullptr;
        *(_QWORD *)&a1[2 * v4 + 74] = (uint64)(uintptr_t)(v15);
        switch ( (_DWORD)v4 )
        {
          case 2:
            v16 = 0;
            a1[3] = v25;
            v17 = 0;
            v18 = *(_QWORD *)(v6 + 744);
            while ( a1[3] != *(_DWORD *)(v6 + 8 * v17 + 712) )
            {
              v19 = *(_QWORD *)(v6 + 8 * v17 + 712);
              ++v16;
              *(_QWORD *)(v6 + 8 * v17++ + 712) = v18;
              v18 = v19;
              if ( v17 >= 5 )
                goto LABEL_21;
            }
            if ( v16 )
            {
              *(_QWORD *)(v6 + 712) = *(_QWORD *)(v6 + 8LL * v16 + 712);
              *(_QWORD *)(v6 + 8LL * v16 + 712) = v18;
            }
LABEL_21:
            if ( v16 == 5 )
            {
              v20 = sub_140262618(nullptr, 1u, (__int64)&unk_14028A0F0, 127, (__int64)v31, a1[3], 1);
              v21 = 0;
              if ( v20 )
              {
                v22 = v31;
                do
                {
                  ++v21;
                  *(_WORD *)v22 &= 0x1FFu;
                  v22 = (unsigned __int64 *)((char *)v22 + 2);
                }
                while ( v21 < 0x7F );
                v21 = sub_1401FC820(v31, (__int64)(*(unsigned __int64 *)&sr_mem_1403022a0[0]), 0xFEu) == 0;
              }
              *(_DWORD *)(v6 + 716) = v21;
              *(_DWORD *)(v6 + 712) = a1[3];
            }
            a1[7] = *(_DWORD *)(v6 + 716);
            break;
          case 1:
            a1[5] = v25;
            break;
          case 5:
            a1[6] = v25;
            break;
        }
        if ( ((unsigned int (           *)(_DWORD *))*(&off_14028A180 + 3 * v4))(a1) )
        {
          *(_QWORD *)&a1[v8 + 10] = (uint64)(uintptr_t)(v27);
          free_base(*(void **)&a1[2 * v4 + 74]);
          *(_QWORD *)&a1[2 * v4 + 74] = v28;
          free_base(v13);
          a1[3] = v26;
        }
        else
        {
          if ( v27 != &unk_140302588
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)&a1[v8 + 14], 0xFFFFFFFF) == 1 )
          {
            free_base(*(void **)&a1[v8 + 14]);
            free_base(*(void **)&a1[v8 + 12]);
            free_base(*(void **)&a1[2 * v4 + 74]);
            *(_QWORD *)&a1[v8 + 10] = 0;
            *(_QWORD *)&a1[2 * v4 + 74] = 0;
          }
          *v13 = 1;
          *(_QWORD *)&a1[v8 + 14] = (uint64)(uintptr_t)(v13);
        }
      }
    }
  }
  return sub_1401F8B20((unsigned __int64)v24 ^ v31[32]);
}

// 140249A8C: control flows out of bounds to 140249A91
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028A180: using guessed type _UNKNOWN *off_14028A180;
// 1403022A0: using guessed type __int16 *;

//----- (0000000140249AB8) ----------------------------------------------------
__int64            get_default_code_page(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !(unsigned int)sub_14024F174(a1, 0x20001004u, (__int64)&v2, 2u) )
    return 65001;
  result = v2;
  if ( !v2 )
    return 65001;
  return result;
}


//----- (0000000140249AEC) ----------------------------------------------------
__int64            parse_bcp47(_WORD *a1, unsigned __int16 *a2)
{
  char *v4; // r12
  unsigned __int64 v5; // rdi
  int v6; // r15d
  __int64 v7; // rax
  unsigned __int16 *v8; // r14
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char *v15; // rdx
  __int64 v17; // [rsp+0h] [rbp-69h] BYREF
  char v18[8]; // [rsp+20h] [rbp-49h] BYREF
  char v19; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-19h] BYREF
  char v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+80h] [rbp+17h]

  sub_1401FCD30((void *)(uintptr_t)(a1), 0, 0x1CAu);
  v4 = &v19;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v5 >= 4 )
      return sub_1401F8B20((unsigned __int64)&v17 ^ v23);
    if ( v6 == 2 )
    {
      v7 = -1;
      do
        ++v7;
      while ( a2[v7] );
    }
    else
    {
      v7 = sub_1402625A4(a2, L"-_.");
    }
    *((_QWORD *)v4 - 1) = (uint64)(uintptr_t)(a2);
    ++v5;
    v8 = &a2[v7];
    *(_QWORD *)v4 = v7;
    v9 = *v8;
    *((_DWORD *)v4 + 2) = v6;
    v4 += 24;
    v10 = v9 - 45;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v6 = 2;
        goto LABEL_13;
      }
      if ( v11 != 49 )
      {
        v6 = 1;
        goto LABEL_13;
      }
    }
    v6 = 0;
LABEL_13:
    a2 = v8 + 1;
  }
  while ( v6 != 1 );
  v12 = v5 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1
          && parse_bcp47_language(a1, v18)
          && parse_bcp47_script((__int64)a1, v20)
          && sub_140249DC0((__int64)a1, v21) )
        {
          v15 = &v22;
LABEL_32:
          parse_bcp47_code_page((__int64)a1, (__int64)v15);
        }
      }
      else if ( parse_bcp47_language(a1, v18)
             && (!parse_bcp47_script((__int64)a1, v20)
              || !sub_140249DC0((__int64)a1, v21) && !parse_bcp47_code_page((__int64)a1, (__int64)v21))
             && sub_140249DC0((__int64)a1, v20) )
      {
        v15 = (char *)v21;
        goto LABEL_32;
      }
    }
    else if ( parse_bcp47_language(a1, v18) && !parse_bcp47_script((__int64)a1, v20) && !sub_140249DC0((__int64)a1, v20) )
    {
      v15 = (char *)v20;
      goto LABEL_32;
    }
  }
  else
  {
    parse_bcp47_language(a1, v18);
  }
  return sub_1401F8B20((unsigned __int64)&v17 ^ v23);
}

// 14028A298: using guessed type __int16 asc_14028A298[4];

//----- (0000000140249CEC) ----------------------------------------------------
char            parse_bcp47_code_page(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  if ( (unsigned int)sub_140260D80((_WORD *)(a1 + 256), 16, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249D2D: control flows out of bounds to 140249D32

//----- (0000000140249D34) ----------------------------------------------------
char            parse_bcp47_language(_WORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx

  if ( *((_DWORD *)a2 + 4) )
    return 0;
  v4 = a2[1];
  if ( v4 - 2 > 1 || !sub_140249F5C(*a2, v4) )
    return 0;
  if ( (unsigned int)sub_140260D80(a1, 64, *a2, a2[1]) || (unsigned int)sub_140260D80(a1 + 144, 85, *a2, a2[1]) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249DB7: control flows out of bounds to 140249DBC

//----- (0000000140249DC0) ----------------------------------------------------
char            sub_140249DC0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  unsigned __int16 v6; // si
       unsigned __int16 *v7; // rax

  if ( *((_DWORD *)a2 + 4) )
    return 0;
  if ( a2[1] != 2 || !sub_140249F5C(*a2, 2u) )
  {
    if ( a2[1] == 3 )
    {
      v4 = *a2;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(_WORD *)(v4 + 2 * v5);
        v7 = sub_140256DC0();
        if ( !(v6 > 0xFFu ? 0 : v7[v6] & 4) )
          break;
        if ( (unsigned __int64)++v5 >= 3 )
          goto LABEL_11;
      }
    }
    return 0;
  }
LABEL_11:
  if ( (unsigned int)sub_140260D80((_WORD *)(a1 + 128), 64, *a2, a2[1])
    || (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)L"-", 1)
    || (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)*a2, a2[1]) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249EC4: control flows out of bounds to 140249EC9
// 14028A290: using guessed type __int16 asc_14028A290[2];

//----- (0000000140249ECC) ----------------------------------------------------
char            parse_bcp47_script(__int64 a1, _QWORD *a2)
{
  if ( *((_DWORD *)a2 + 4) || a2[1] != 4 || !sub_140249F5C(*a2, 4u) )
    return 0;
  if ( (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)L"-", 1)
    || (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)*a2, a2[1]) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249F55: control flows out of bounds to 140249F5A
// 14028A290: using guessed type __int16 asc_14028A290[2];

//----- (0000000140249F5C) ----------------------------------------------------
char            sub_140249F5C(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 v5; // si
       unsigned __int16 *v6; // rdx

  v2 = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v5 = *(_WORD *)(a1 + 2 * v2);
    v6 = sub_140256DC0();
    if ( !(v5 > 0xFFu ? 0 : v6[v5] & 0x103) )
      break;
    if ( ++v2 >= a2 )
      return 1;
  }
  return 0;
}


//----- (0000000140249FD0) ----------------------------------------------------
char            string_is_alpha(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 v5; // si
       unsigned __int16 *v6; // rdx

  v2 = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v5 = *(_WORD *)(a1 + 2 * v2);
    v6 = sub_140256DC0();
    if ( !(v5 > 0xFFu ? 0 : v6[v5] & 4) )
      break;
    if ( ++v2 >= a2 )
      return 1;
  }
  return 0;
}


//----- (000000014024A06C) ----------------------------------------------------
__int64 sub_14024A06C()
{
  return dword_140404A6C[19065284];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024A074) ----------------------------------------------------
int         sub_14024A074(int NewMode)
{
  if ( (unsigned int)NewMode <= 1 )
    return _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065284], NewMode);
  *errno_sr() = 22;
  sub_14024CF6C();
  return -1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024A0A0) ----------------------------------------------------
unsigned int *sub_14024A0A0()
{
  return &dword_140404A6C[19065285];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024A0BC) ----------------------------------------------------
void (        __attribute__((noreturn)) *sub_14024A0BC())()
{
  unsigned __int64 v0; // rax
  void (        __attribute__((noreturn)) *v1)(); // rcx

  v0 = sub_140255A70();
  v1 = abort;
  if ( *(_QWORD *)(v0 + 24) )
    return *(void (        __attribute__((noreturn)) **)())(v0 + 24);
  return v1;
}


//----- (000000014024A0E0) ----------------------------------------------------
void (        __attribute__((noreturn)) *           set_terminate(__int64 a1))()
{
  unsigned __int64 v2; // rdx
  void (        __attribute__((noreturn)) *result)(); // rax

  v2 = sub_140255A70();
  result = abort;
  if ( *(_QWORD *)(v2 + 24) )
    result = *(void (        __attribute__((noreturn)) **)())(v2 + 24);
  *(_QWORD *)(v2 + 24) = a1;
  return result;
}


//----- (000000014024A10C) ----------------------------------------------------
void __attribute__((noreturn)) terminate_sr()
{
  void (*v0)(void); // rax

  v0 = *(void (**)(void))(sub_140255A70() + 24);
  if ( v0 )
    v0();
  abort();
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024A150) ----------------------------------------------------
__int64            sub_14024A150(_BYTE *a1, __int64 a2)
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
// 14024A21B: variable 'v7' is possibly undefined
// 14024A21B: variable 'v6' is possibly undefined

//----- (000000014024A2CC) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_0952d770c47a5af503e0a56aa8beec95_____crt_win32_buffer_public_dynamic_resizing(
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
      free(*(void **)(a2 + 16));
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
          free(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v13 = j__malloc_base();
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
    free(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  v7 = j__malloc_base();
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
// 14024A393: variable 'v15' is possibly undefined
// 14024A423: variable 'v16' is possibly undefined

//----- (000000014024A458) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_f788ae46380686e8b737efdd8c720d07_____crt_win32_buffer_no_resizing(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(v13) = 0;
    v8 = sub_140258A84(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, v13, 0, 0);
    v10 = v8;
    if ( v8 )
    {
      if ( (unsigned __int64)v8 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      LODWORD(v14) = *(_QWORD *)(a2 + 24);
      v12 = sub_140258A84(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), v14, 0, 0);
      if ( v12 )
      {
        *(_QWORD *)(a2 + 32) = v12 - 1LL;
        return 0;
      }
    }
    v11 = ((__int64 (           *)(__int64, __int64))GetLastError)(v9, v10);
    sub_14024D14C(v11);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
LABEL_10:
    *errno_sr() = 34;
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 34;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return 0;
}

int sr_path_mb_convert(unsigned int cp, const char *input, wchar_t *output, int capacity) {
  unsigned int flags=9;
  if (cp==42 || (cp>=50220 && cp<=50229 && ((679u>>(cp-50220))&1u)) ||
      (cp>=57002 && cp<=57011) || cp==65000) flags=0;
  else if(cp==54936 || cp==65001) flags &= 8;
  return MultiByteToWideChar(cp,flags,input,-1,output,capacity);
}

__int64            sr_path_malloc(unsigned __int64 v0)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = v0;
  if ( v0 > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_9:
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    if ( !v0 )
      v1 = 1;
    while ( 1 )
    {
      result = ((__int64 (           *)(_QWORD, _QWORD, __int64))HeapAlloc)(
                 *(_QWORD *)&dword_140404A6C[19065847],
                 0,
                 v1);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(v1) )
        goto LABEL_9;
    }
  }
  return result;
}

// 14026E130: invalid function type 'LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)' has been ignored
// 140253F66: variable 'v0' is possibly undefined
// 140260BE4: using guessed type __int64 __fastcall callnewh(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

__int64            sr_path_mbs(_BYTE *a1, __int64 a2, unsigned int codepage)
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
    v6 = sr_path_mb_convert(codepage,(const char *)a1,NULL,0);
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
        v11 = sr_path_malloc(2 * v9);
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
      v14 = sr_path_mb_convert(codepage,(const char *)a1,(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),(int)*(_QWORD *)(a2+24));
      v8 = v14;
      if ( v14 )
      {
        *(_QWORD *)(a2 + 32) = v14 - 1LL;
        return v2;
      }
    }
    v10 = GetLastError();
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
    v4 = sr_path_malloc(2);
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

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14023845A: variable 'v8' is possibly undefined
// 14023845A: variable 'v7' is possibly undefined
// 140253F60: using guessed type __int64 __fastcall sr_path_malloc(_QWORD);

__int64            sr_path_wide(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax

  v4 = GetFullPathNameW((const wchar_t *)(uintptr_t)a1,(DWORD)(*(unsigned int *)(a2 + 24)),(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),NULL);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( (unsigned __int64)v4 <= *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = v4;
      return v5;
    }
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v8 = sr_path_malloc(2*(v6+1));
    *(_QWORD *)(a2 + 16) = v8;
    v9 = 0;
    v10 = -v8;
    if ( (v10 == 0 ? 0xC : 0) == 0 )
      v9 = v6 + 1;
    *(_BYTE *)(a2 + 40) = (v10 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a2 + 24) = v9;
    if ( (v10 == 0 ? 0xC : 0) != 0 )
      return v10 == 0 ? 0xC : 0;
    v11 = GetFullPathNameW((const wchar_t *)(uintptr_t)a1,(DWORD)((unsigned int)v9),(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),NULL);
    if ( v11 )
    {
      *(_QWORD *)(a2 + 32) = v11;
      return v5;
    }
  }
  v7 = GetLastError();
  sub_14024D14C(v7);
  return (unsigned int)*errno_sr();
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A574) ----------------------------------------------------
__int64 __acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_no_resizing(_BYTE *a1, __int64 a2)
{
  wchar_t input_storage[264], full_storage[264];
  sr_path_buffer input={input_storage,260,input_storage,260,0,0};
  sr_path_buffer full={full_storage,260,full_storage,260,0,0};
  sr_path_locale locale;
  unsigned int codepage=65001;
  unsigned int result;
  sub_140213644((_LocaleUpdate *)&locale, nullptr);
  if (*(unsigned int *)(locale.locale+12)!=65001)
    codepage=(unsigned int)sub_14024EDA4()?0:1;
  if(locale.changed)
    *(unsigned int *)(locale.thread+936)&=~2u;
  result=(unsigned int)sr_path_mbs(a1,(__int64)(uintptr_t)&input,codepage);
  if(!result)
  {
    result=(unsigned int)sr_path_wide((__int64)(uintptr_t)input.buffer,(__int64)(uintptr_t)&full);
    if(!result)
      result=(unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(
        (_WORD *)full.buffer,a2,codepage);
  }
  if(input.owned) free_base(input.buffer);
  if(full.owned) free_base(full.buffer);
  return result;
}


//----- (000000014024A6EC) ----------------------------------------------------
__int64            __acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_public_dynamic_resizing(
        _BYTE *a1,
        __int64 a2)
{
  _BYTE *v2; // rsi
  unsigned int v5; // edi
  int full_path_name; // eax
  __int64 v8; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-E0h] BYREF
  char v10; // [rsp+38h] [rbp-C8h]
  _QWORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *Block; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  char v15; // [rsp+68h] [rbp-98h]
  _QWORD v16[2]; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  char v20; // [rsp+98h] [rbp-68h]
  _BYTE v21[528]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v22[528]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v23; // [rsp+4C0h] [rbp+3C0h]

  v19 = 0;
  v14 = 0;
  v2 = v21;
  v16[0] = (uint64)(uintptr_t)(v21);
  v17 = v21;
  v16[1] = 260;
  v11[0] = (uint64)(uintptr_t)(v22);
  v18 = 260;
  v11[1] = 260;
  v13 = 260;
  Block = v22;
  v20 = 0;
  v15 = 0;
  sub_140213644((_LocaleUpdate *)v9, nullptr);
  v5 = 65001;
  if ( *(_DWORD *)(v9[1] + 12LL) == 65001 )
  {
    if ( v10 )
      *(_DWORD *)(v9[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v10 )
      *(_DWORD *)(v9[0] + 936LL) &= ~2u;
    v5 = 0;
  }
  else
  {
    if ( v10 )
      *(_DWORD *)(v9[0] + 936LL) &= ~2u;
    v5 = 1;
  }
  if ( !(unsigned int)sub_140238394(a1, (__int64)v11) )
  {
    full_path_name = __acrt_get_full_path_name_wide____crt_win32_buffer_internal_dynamic_resizing(
                       (__int64)Block,
                       (__int64)v16);
    v2 = v17;
    if ( !full_path_name )
      __acrt_wcs_to_mbs_cp____crt_win32_buffer_public_dynamic_resizing(v17, a2, v5);
  }
  if ( v15 )
    free_base(Block);
  if ( v20 )
    free_base(v2);
  return sub_1401F8B20((unsigned __int64)&v8 ^ v23);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014024A864) ----------------------------------------------------
__int64            __acrt_get_full_path_name_wide____crt_win32_buffer_internal_dynamic_resizing(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax

  v4 = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( (unsigned __int64)v4 <= *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = v4;
      return v5;
    }
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v8 = malloc_base();
    *(_QWORD *)(a2 + 16) = v8;
    v9 = 0;
    v10 = -v8;
    if ( (v10 == 0 ? 0xC : 0) == 0 )
      v9 = v6 + 1;
    *(_BYTE *)(a2 + 40) = (v10 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a2 + 24) = v9;
    if ( (v10 == 0 ? 0xC : 0) != 0 )
      return v10 == 0 ? 0xC : 0;
    v11 = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
            a1,
            (unsigned int)v9,
            *(_QWORD *)(a2 + 16),
            0);
    if ( v11 )
    {
      *(_QWORD *)(a2 + 32) = v11;
      return v5;
    }
  }
  v7 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v7);
  return (unsigned int)*errno_sr();
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A948) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_805(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax

  v3 = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  v4 = 0;
  if ( v3 )
  {
    if ( (unsigned __int64)v3 > *(_QWORD *)(a2 + 24) )
    {
      if ( *(_BYTE *)(a2 + 40) )
        *(_BYTE *)(a2 + 40) = 0;
      *errno_sr() = 34;
      *(_BYTE *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 24) = 0;
      return 34;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v3;
    }
  }
  else
  {
    v5 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v5);
    return (unsigned int)*errno_sr();
  }
  return v4;
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A9BC) ----------------------------------------------------
__int64            __acrt_get_full_path_name_wide____crt_win32_buffer_public_dynamic_resizing(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax

  v4 = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( (unsigned __int64)v4 <= *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = v4;
      return v5;
    }
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v8 = j__malloc_base();
    *(_QWORD *)(a2 + 16) = v8;
    v9 = 0;
    v10 = -v8;
    if ( (v10 == 0 ? 0xC : 0) == 0 )
      v9 = v6 + 1;
    *(_BYTE *)(a2 + 40) = (v10 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a2 + 24) = v9;
    if ( (v10 == 0 ? 0xC : 0) != 0 )
      return v10 == 0 ? 0xC : 0;
    v11 = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
            a1,
            (unsigned int)v9,
            *(_QWORD *)(a2 + 16),
            0);
    if ( v11 )
    {
      *(_QWORD *)(a2 + 32) = v11;
      return v5;
    }
  }
  v7 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v7);
  return (unsigned int)*errno_sr();
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024AAA0) ----------------------------------------------------
__int64            __acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(_WORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v13 = 0; // [rsp+28h] [rbp-20h]
  __int64 v14 = 0; // [rsp+28h] [rbp-20h]

  v3 = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(v13) = 0;
    v7 = sub_140258A84(a3, 0, (__int64)a1, 0xFFFFFFFFLL, 0, v13, 0, 0);
    v9 = v7;
    if ( v7 )
    {
      if ( (unsigned __int64)v7 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      LODWORD(v14) = *(_QWORD *)(a2 + 24);
      v11 = sub_140258A84(a3, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), v14, 0, 0);
      v8 = v11;
      if ( v11 )
      {
        *(_QWORD *)(a2 + 32) = v11 - 1LL;
        return v3;
      }
    }
    v10 = GetLastError();
    sub_14024D14C(v10);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
LABEL_10:
    *errno_sr() = 34;
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 34;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return v3;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14024AB30: variable 'v13' is possibly undefined
// 14024AB3C: variable 'v8' is possibly undefined
// 14024AB3C: variable 'v9' is possibly undefined
// 14024AB87: variable 'v14' is possibly undefined

//----- (000000014024ABB4) ----------------------------------------------------
__int64            __acrt_wcs_to_mbs_cp____crt_win32_buffer_public_dynamic_resizing(
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
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+28h] [rbp-20h]

  v3 = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
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
          free(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v13 = j__malloc_base();
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
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v7 = j__malloc_base();
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
// 14024AC77: variable 'v17' is possibly undefined
// 14024AD0A: variable 'v18' is possibly undefined

//----- (000000014024AD40) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_no_resizing__call_win32_function___lambda_17b8e77e04f0039ff1429d79b8271fa1_(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  v3 = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  if ( v3 )
  {
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 24) )
    {
      if ( *(_BYTE *)(a1 + 40) )
        *(_BYTE *)(a1 + 40) = 0;
      *errno_sr() = 34;
      *(_BYTE *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return 34;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v3;
      return 0;
    }
  }
  else
  {
    v4 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v4);
    return (unsigned int)*errno_sr();
  }
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024ADB4) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_public_dynamic_resizing__call_win32_function___lambda_1a60cddbd8640ed4c95e91b82cd9827b_(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax

  v4 = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  v5 = v4;
  if ( !v4 )
    goto LABEL_2;
  if ( (unsigned __int64)v4 <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = v4;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v8 = j__malloc_base();
  *(_QWORD *)(a1 + 16) = v8;
  v9 = 0;
  result = v8 == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    v9 = v5 + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = v9;
  if ( !(_DWORD)result )
  {
    v10 = ((__int64 (           *)(_QWORD, __int64, _QWORD, _QWORD))GetFullPathNameW)(*a2, v9, *(_QWORD *)(a1 + 16), 0);
    if ( !v10 )
    {
LABEL_2:
      v6 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v6);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(a1 + 32) = v10;
    return 0;
  }
  return result;
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024AE8C) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_internal_dynamic_resizing__call_win32_function___lambda_70821863356a07dc63cd205fc1ee57ea_(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax

  v4 = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  v5 = v4;
  if ( !v4 )
    goto LABEL_2;
  if ( (unsigned __int64)v4 <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = v4;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v8 = malloc_base();
  *(_QWORD *)(a1 + 16) = v8;
  v9 = 0;
  result = v8 == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    v9 = v5 + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = v9;
  if ( !(_DWORD)result )
  {
    v10 = ((__int64 (           *)(_QWORD, __int64, _QWORD, _QWORD))GetFullPathNameW)(*a2, v9, *(_QWORD *)(a1 + 16), 0);
    if ( !v10 )
    {
LABEL_2:
      v6 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v6);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(a1 + 32) = v10;
    return 0;
  }
  return result;
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024AF64) ----------------------------------------------------
__m128i *           sub_14024AF64(unsigned int a1, _BYTE *a2, int a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __m128i *v7; // rbx
  sr_path_buffer path_buffer;
  _BYTE v14[8]; // [rsp+80h] [rbp+30h] BYREF

  v3 = a3;
  v5 = a1;
  if ( a3 < 0 )
    goto LABEL_2;
  if ( a1 )
  {
    if ( !(unsigned int)is_valid_drive(a1) )
    {
      *(_DWORD *)sub_14024D19C() = 15;
      *errno_sr() = 13;
      goto LABEL_3;
    }
  }
  else
  {
    v5 = getdrive();
  }
  if ( v5 )
  {
    strcpy(&v14[1], ":.");
    v14[0] = v5 + 64;
  }
  else
  {
    strcpy(v14, ".");
  }
  if ( a2 )
  {
    if ( (int)v3 <= 0 )
    {
LABEL_2:
      *errno_sr() = 22;
LABEL_3:
      sub_14024CF6C();
      return nullptr;
    }
    *a2 = 0;
    path_buffer.initial_capacity = v3;
    path_buffer.capacity = v3;
    path_buffer.initial = a2;
    path_buffer.buffer = a2;
    path_buffer.size = 0;
    path_buffer.owned = 0;
    if ( (unsigned int)__acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_no_resizing(v14, (__int64)&path_buffer.initial) )
      return nullptr;
    return (__m128i *)a2;
  }
  else
  {
    path_buffer.initial = nullptr;
    path_buffer.initial_capacity = 0;
    path_buffer.size = 0;
    path_buffer.buffer = (void *)sr_path_malloc(v3);
    if ( path_buffer.buffer )
    {
      path_buffer.owned = 1;
      path_buffer.capacity = v3;
    }
    else
    {
      path_buffer.owned = 0;
      path_buffer.capacity = 0;
    }
    if ( (unsigned int)__acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_public_dynamic_resizing(
                         v14,
                         (__int64)&path_buffer.initial) )
    {
      if ( path_buffer.owned )
        free(path_buffer.buffer);
      return nullptr;
    }
    v7 = sub_14024B62C((__int64 *)&path_buffer.initial);
    if ( path_buffer.owned )
      free(path_buffer.buffer);
    return v7;
  }
}

// 14024B7F8: using guessed type __int64 __fastcall is_valid_drive(unsigned int);

//----- (000000014024B0BC) ----------------------------------------------------
__int64            sub_14024B0BC(unsigned int a1, _WORD *a2, int a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-60h] BYREF
  _WORD *v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h]
  void *Block; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h]
  char v13; // [rsp+48h] [rbp-18h]
  _BYTE v14[6]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v15; // [rsp+56h] [rbp-Ah]
  __int64 v16; // [rsp+58h] [rbp-8h]

  v3 = a3;
  v5 = a1;
  if ( a3 < 0 )
  {
LABEL_2:
    *errno_sr() = 22;
LABEL_3:
    sub_14024CF6C();
    return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
  }
  if ( a1 )
  {
    if ( !(unsigned int)is_valid_drive(a1) )
    {
      *(_DWORD *)sub_14024D19C() = 15;
      *errno_sr() = 13;
      goto LABEL_3;
    }
  }
  else
  {
    v5 = getdrive();
  }
  if ( v5 )
  {
    *(_DWORD *)&v14[2] = 3014714;
    *(_WORD *)v14 = v5 + 64;
    v15 = 0;
  }
  else
  {
    *(_DWORD *)v14 = 46;
  }
  if ( a2 )
  {
    if ( (int)v3 > 0 )
    {
      *a2 = 0;
      v9 = v3;
      v11 = v3;
      v8 = a2;
      Block = a2;
      v12 = 0;
      v13 = 0;
      unknown_libname_805((__int64)v14, (__int64)&v8);
      return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
    }
    goto LABEL_2;
  }
  v8 = nullptr;
  v9 = 0;
  v12 = 0;
  Block = (void *)j__malloc_base();
  if ( Block )
  {
    v13 = 1;
    v11 = v3;
  }
  else
  {
    v13 = 0;
    v11 = 0;
  }
  if ( (unsigned int)__acrt_get_full_path_name_wide____crt_win32_buffer_public_dynamic_resizing(
                       (__int64)v14,
                       (__int64)&v8) )
  {
    if ( v13 )
      free(Block);
  }
  else
  {
    sub_14024B710((__int64 *)&v8);
    if ( v13 )
      free(Block);
  }
  return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
}

// 14024B7F8: using guessed type __int64 __fastcall is_valid_drive(unsigned int);

//----- (000000014024B2E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_811(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}


//----- (000000014024B318) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_813(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}


//----- (000000014024B33C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_814(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // [rsp+28h] [rbp-20h]

  LODWORD(v6) = a5;
  return sub_140258A84(a2, 0, a3, 0xFFFFFFFFLL, a4, v6, 0, 0);
}

// 14024B361: variable 'v6' is possibly undefined

//----- (000000014024B3B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_818()
{
  return sub_140259504();
}


//----- (000000014024B3DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_819(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // [rsp+28h] [rbp-20h]

  LODWORD(v6) = a5;
  return sub_140258A84(a2, 0, a3, 0xFFFFFFFFLL, a4, v6, 0, 0);
}

// 14024B401: variable 'v6' is possibly undefined

//----- (000000014024B418) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_821(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}


//----- (000000014024B448) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_823(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}


//----- (000000014024B49C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_826(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
    *(_BYTE *)(a1 + 40) = 0;
  *errno_sr() = 34;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  return 34;
}


//----- (000000014024B4CC) ----------------------------------------------------
__int64            sub_14024B4CC(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v4 = j__malloc_base();
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


//----- (000000014024B528) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_827(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
    *(_BYTE *)(a1 + 40) = 0;
  *errno_sr() = 34;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  return 34;
}


//----- (000000014024B558) ----------------------------------------------------
__int64            sub_14024B558(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v4 = j__malloc_base();
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


//----- (000000014024B5B4) ----------------------------------------------------
__int64            sub_14024B5B4(void **     a1, __int64 a2,      struct __crt_win32_buffer_empty_debug_info *a3)
{
  *errno_sr() = 34;
  return 34;
}


//----- (000000014024B5CC) ----------------------------------------------------
__int64            __crt_win32_buffer_internal_dynamic_resizing__allocate(
        void **     a1,
        __int64 a2,
             struct __crt_win32_buffer_empty_debug_info *a3)
{
  void *v4; // rax

  v4 = (void *)j__malloc_base();
  *a1 = v4;
  return v4 == nullptr ? 0xC : 0;
}


//----- (000000014024B62C) ----------------------------------------------------
__m128i *           sub_14024B62C(__int64 *a1)
{
  __int64 v1; // rdi
  __m128i *v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // rax

  v1 = a1[2];
  if ( v1 && a1[4] )
  {
    if ( *((_BYTE *)a1 + 40) )
      goto LABEL_14;
    v3 = (__m128i *)j__malloc_base();
    v4 = a1[3];
    v1 = (__int64)v3;
    v5 = a1[2];
    v6 = a1[4];
    if ( !v4 )
      goto LABEL_14;
    if ( !v3 )
      goto LABEL_6;
    if ( v5 && v6 >= v4 )
    {
      sub_1401FC920(v3, (     __m128i *)a1[2], a1[3]);
    }
    else
    {
      sub_1401FCD30((void *)(uintptr_t)(v3), 0, a1[4]);
      if ( !v5 )
      {
LABEL_6:
        *errno_sr() = 22;
LABEL_13:
        sub_14024CF6C();
        goto LABEL_14;
      }
      if ( v6 < v4 )
      {
        *errno_sr() = 34;
        goto LABEL_13;
      }
    }
LABEL_14:
    v7 = *a1;
    a1[4] = 0;
    a1[2] = v7;
    a1[3] = a1[1];
    return (__m128i *)v1;
  }
  return nullptr;
}

// 14024B66B: conditional instruction was optimized away because rcx.8!=0

//----- (000000014024B710) ----------------------------------------------------
__m128i *           sub_14024B710(__int64 *a1)
{
  __int64 v1; // rdi
  __m128i *v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // rax

  v1 = a1[2];
  if ( v1 && a1[4] )
  {
    if ( *((_BYTE *)a1 + 40) )
      goto LABEL_14;
    v3 = (__m128i *)j__malloc_base();
    v4 = a1[3];
    v1 = (__int64)v3;
    v5 = a1[2];
    v6 = a1[4];
    if ( !v4 )
      goto LABEL_14;
    if ( !v3 )
      goto LABEL_6;
    if ( v5 && v6 >= v4 )
    {
      sub_1401FC920(v3, (     __m128i *)a1[2], a1[3]);
    }
    else
    {
      sub_1401FCD30((void *)(uintptr_t)(v3), 0, a1[4]);
      if ( !v5 )
      {
LABEL_6:
        *errno_sr() = 22;
LABEL_13:
        sub_14024CF6C();
        goto LABEL_14;
      }
      if ( v6 < v4 )
      {
        *errno_sr() = 34;
        goto LABEL_13;
      }
    }
LABEL_14:
    v7 = *a1;
    a1[4] = 0;
    a1[2] = v7;
    a1[3] = a1[1];
    return (__m128i *)v1;
  }
  return nullptr;
}

// 14024B74F: conditional instruction was optimized away because rcx.8!=0

//----- (000000014024B7F8) ----------------------------------------------------
__int64            is_valid_drive(unsigned int a1)
{
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  __int16 RootPathName; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+22h] [rbp-16h]
  __int16 v5; // [rsp+26h] [rbp-12h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( a1 <= 0x1A )
  {
    if ( a1 )
    {
      v4 = 6029370;
      RootPathName = a1 + 64;
      v5 = 0;
      ((void (           *)(__int16 *))GetDriveTypeW)(&RootPathName);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 15;
    *errno_sr() = 13;
    sub_14024CF6C();
  }
  return sub_1401F8B20((unsigned __int64)&v2 ^ v6);
}

// 14026E158: invalid function type 'UINT (__stdcall *GetDriveTypeW)(LPCWSTR lpRootPathName)' has been ignored
// 14024B7F8: using guessed type __int64 __fastcall is_valid_drive(unsigned int a1);

//----- (000000014024B890) ----------------------------------------------------
void            __crt_win32_buffer__char____crt_win32_buffer_public_dynamic_resizing__set_to_nullptr(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}


//----- (000000014024B8D4) ----------------------------------------------------
__m128i *           sub_14024B8D4(_BYTE *a1, int a2)
{
  return sub_14024AF64(0, a1, a2);
}


//----- (000000014024B8FC) ----------------------------------------------------
__m128i *           sub_14024B8FC(unsigned int a1, _BYTE *a2, int a3)
{
  return sub_14024AF64(a1, a2, a3);
}


//----- (000000014024B91C) ----------------------------------------------------
__int64            sub_14024B91C(_WORD *a1, int a2)
{
  return sub_14024B0BC(0, a1, a2);
}


//----- (000000014024B944) ----------------------------------------------------
__int64            sub_14024B944(unsigned int a1, _WORD *a2, int a3)
{
  return sub_14024B0BC(a1, a2, a3);
}


//----- (000000014024B964) ----------------------------------------------------
__int64            sub_14024B964(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
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

// 14024B964: invalid function type 'errno_t __cdecl sub_14024B964(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize)' has been ignored

//----- (000000014024BA34) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_d8593a27d1aa8c02be35c86a17d324c4_____crt_win32_buffer_internal_dynamic_resizing_dup2(
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
        v13 = malloc_base();
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
  v7 = malloc_base();
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
// 14024BAFB: variable 'v15' is possibly undefined
// 14024BB8B: variable 'v16' is possibly undefined

unsigned int sr_chdir_codepage(void) {
  sr_path_locale locale;
  unsigned int cp=65001;
  sub_140213644((_LocaleUpdate *)&locale,nullptr);
  if(*(unsigned int *)(locale.locale+12)!=65001)
    cp=(unsigned int)sub_14024EDA4()?0:1;
  if(locale.changed) *(unsigned int *)(locale.thread+936)&=~2u;
  return cp;
}

__int64            sr_chdir_current_wide(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax

  v2 = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 <= *(_QWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 32) = v2;
      return v3;
    }
    if ( *(_BYTE *)(a1 + 40) )
    {
      free_base(*(void **)(a1 + 16));
      *(_BYTE *)(a1 + 40) = 0;
    }
    v6 = sr_path_malloc(2*(v4+1));
    *(_QWORD *)(a1 + 16) = v6;
    v7 = 0;
    v8 = -v6;
    if ( (v8 == 0 ? 0xC : 0) == 0 )
      v7 = v4 + 1;
    *(_BYTE *)(a1 + 40) = (v8 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a1 + 24) = v7;
    if ( (v8 == 0 ? 0xC : 0) != 0 )
      return v8 == 0 ? 0xC : 0;
    v9 = ((__int64 (           *)(__int64, _QWORD))GetCurrentDirectoryW)(v7, *(_QWORD *)(a1 + 16));
    if ( v9 )
    {
      *(_QWORD *)(a1 + 32) = v9;
      return v3;
    }
  }
  v5 = GetLastError();
  sub_14024D14C(v5);
  return (unsigned int)*errno_sr();
}

// 14026E138: invalid function type 'DWORD (__stdcall *GetCurrentDirectoryW)(DWORD nBufferLength, LPWSTR lpBuffer)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

__int64            sr_chdir_wcs(
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
    v11 = GetLastError();
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

//----- (000000014024BBC0) ----------------------------------------------------
__int64 __acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing(__int64 output) {
  wchar_t storage[264];
  sr_path_buffer wide={storage,260,storage,260,0,0};
  unsigned int result=(unsigned int)sr_chdir_current_wide((__int64)(uintptr_t)&wide);
  if(!result)
    result=(unsigned int)sr_chdir_wcs((_WORD *)wide.buffer,output,sr_chdir_codepage());
  if(wide.owned) free_base(wide.buffer);
  return result;
}


//----- (000000014024BCDC) ----------------------------------------------------
__int64            __acrt_get_current_directory_wide____crt_win32_buffer_internal_dynamic_resizing(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax

  v2 = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 <= *(_QWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 32) = v2;
      return v3;
    }
    if ( *(_BYTE *)(a1 + 40) )
    {
      free_base(*(void **)(a1 + 16));
      *(_BYTE *)(a1 + 40) = 0;
    }
    v6 = malloc_base();
    *(_QWORD *)(a1 + 16) = v6;
    v7 = 0;
    v8 = -v6;
    if ( (v8 == 0 ? 0xC : 0) == 0 )
      v7 = v4 + 1;
    *(_BYTE *)(a1 + 40) = (v8 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a1 + 24) = v7;
    if ( (v8 == 0 ? 0xC : 0) != 0 )
      return v8 == 0 ? 0xC : 0;
    v9 = ((__int64 (           *)(__int64, _QWORD))GetCurrentDirectoryW)(v7, *(_QWORD *)(a1 + 16));
    if ( v9 )
    {
      *(_QWORD *)(a1 + 32) = v9;
      return v3;
    }
  }
  v5 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v5);
  return (unsigned int)*errno_sr();
}

// 14026E138: invalid function type 'DWORD (__stdcall *GetCurrentDirectoryW)(DWORD nBufferLength, LPWSTR lpBuffer)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024BDA4) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_internal_dynamic_resizing__call_win32_function___lambda_31b6d45744ab507ef0f4bc45493ab729_(
        __int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax

  v2 = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  v3 = v2;
  if ( !v2 )
    goto LABEL_2;
  if ( (unsigned __int64)v2 <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = v2;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v6 = malloc_base();
  *(_QWORD *)(a1 + 16) = v6;
  v7 = 0;
  result = v6 == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    v7 = v3 + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = v7;
  if ( !(_DWORD)result )
  {
    v8 = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(
           *(unsigned int *)(a1 + 24),
           *(_QWORD *)(a1 + 16));
    if ( !v8 )
    {
LABEL_2:
      v4 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v4);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(a1 + 32) = v8;
    return 0;
  }
  return result;
}

// 14026E138: invalid function type 'DWORD (__stdcall *GetCurrentDirectoryW)(DWORD nBufferLength, LPWSTR lpBuffer)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024BE64) ----------------------------------------------------
__int64            common_chdir__char(_BYTE *a1)
{
  unsigned int v1; // eax
  int current_directory_narrow_acp_or; // eax
  _BYTE *v3; // rdi
  char v4; // al
  unsigned int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-100h] BYREF
  _BYTE v8[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v9; // [rsp+22h] [rbp-DEh]
  _QWORD v10[2]; // [rsp+28h] [rbp-D8h] BYREF
  void *Block; // [rsp+38h] [rbp-C8h]
  __int64 v12; // [rsp+40h] [rbp-C0h]
  __int64 v13; // [rsp+48h] [rbp-B8h]
  int v14; // [rsp+50h] [rbp-B0h]
  _DWORD v15[34]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+170h] [rbp+70h]

  if ( a1 )
  {
    if ( (unsigned int)_acrt_SetCurrentDirectoryA(a1) )
    {
      v13 = 0;
      v10[0] = (uint64)(uintptr_t)(v15);
      v10[1] = 261;
      v12 = 261;
      Block = v15;
      LOBYTE(v14) = 0;
      current_directory_narrow_acp_or = __acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing((__int64)v10);
      v3 = Block;
      if ( !current_directory_narrow_acp_or )
      {
        if ( (v4 = *(_BYTE *)Block, *(_BYTE *)Block != 92) && v4 != 47 || v4 != *((_BYTE *)Block + 1) )
        {
          v8[0] = 61;
          v8[1] = toupper(v4);
          v9 = 58;
          if ( !(unsigned int)_acrt_SetEnvironmentVariableA(v8, v3) )
          {
            v5 = ((__int64 (*)(void))GetLastError)();
            sub_14024D14C(v5);
          }
        }
      }
      if ( (_BYTE)v14 )
        free_base(v3);
    }
    else
    {
      v1 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v1);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024BF88) ----------------------------------------------------
__int64            common_chdir__wchar_t(__int64 a1)
{
  unsigned int v1; // eax
  int current_directory; // eax
  void *v3; // rdi
  __int16 v4; // ax
  unsigned int v5; // eax
  __int64 v7; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-E0h] BYREF
  char *lpValue; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C8h]
  __int64 v11; // [rsp+48h] [rbp-C0h]
  __int16 v12; // [rsp+50h] [rbp-B8h]
  _WORD Name[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v14; // [rsp+5Ch] [rbp-ACh]
  _BYTE v15[528]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+278h] [rbp+170h]

  if ( a1 )
  {
    if ( (unsigned int)((__int64 (*)(void))SetCurrentDirectoryW)() )
    {
      v11 = 0;
      v8[1] = 261;
      v8[0] = (uint64)(uintptr_t)(v15);
      v10 = 261;
      lpValue = v15;
      LOBYTE(v12) = 0;
      current_directory = __acrt_get_current_directory_wide____crt_win32_buffer_internal_dynamic_resizing((__int64)v8);
      v3 = lpValue;
      if ( !current_directory )
      {
        if ( (v4 = *(_WORD *)lpValue, *(_WORD *)lpValue != 92) && v4 != 47 || v4 != *((_WORD *)lpValue + 1) )
        {
          Name[1] = toupper(*lpValue);
          Name[0] = 61;
          v14 = 58;
          if ( !(unsigned int)((__int64 (           *)(_WORD *, void *))SetEnvironmentVariableW)(Name, v3) )
          {
            v5 = ((__int64 (*)(void))GetLastError)();
            sub_14024D14C(v5);
          }
        }
      }
      if ( (_BYTE)v12 )
        free_base(v3);
    }
    else
    {
      v1 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v1);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
}

// 14026E140: invalid function type 'BOOL (__stdcall *SetCurrentDirectoryW)(LPCWSTR lpPathName)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored

//----- (000000014024C0F0) ----------------------------------------------------
__int64            sub_14024C0F0(char *a1)
{
  char v1; // al
  char v3; // al
  unsigned int v4; // eax
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+31h] [rbp+9h]
  __int16 v8; // [rsp+32h] [rbp+Ah]

  v1 = *a1;
  if ( (*a1 == 92 || v1 == 47) && v1 == a1[1] )
    return 0;
  v3 = toupper(v1);
  v6 = 61;
  v7 = v3;
  v8 = 58;
  if ( (unsigned int)_acrt_SetEnvironmentVariableA(&v6, a1) )
    return 0;
  v4 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v4);
  return 0xFFFFFFFFLL;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024C14C) ----------------------------------------------------
__int64            set_cwd_environment_variable__wchar_t(__int16 *a1)
{
  __int16 v1; // ax
  unsigned int v3; // eax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  _WORD Name[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  if ( *a1 != 92 && v1 != 47 || v1 != a1[1] )
  {
    Name[1] = toupper(*(char *)a1);
    Name[0] = 61;
    v7 = 58;
    if ( !(unsigned int)((__int64 (           *)(_WORD *, __int16 *))SetEnvironmentVariableW)(Name, a1) )
    {
      v3 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v3);
    }
  }
  return sub_1401F8B20((unsigned __int64)&v5 ^ v8);
}

// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024C1FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_830(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // [rsp+28h] [rbp-20h]

  LODWORD(v6) = a5;
  return sub_140258A84(a2, 0, a3, 0xFFFFFFFFLL, a4, v6, 0, 0);
}

// 14024C221: variable 'v6' is possibly undefined

//----- (000000014024C22C) ----------------------------------------------------
__int64 sub_14024C22C(_BYTE *path) {
  char storage[272];
  sr_path_buffer buffer={storage,261,storage,261,0,0};
  unsigned int result=UINT32_MAX;
  if(!path) {
    *(_DWORD *)sub_14024D19C()=0;
    *errno_sr()=22;
    sub_14024CF6C();
    return result;
  }
  if(!(unsigned int)_acrt_SetCurrentDirectoryA(path)) {
    sub_14024D14C(GetLastError());
    return result;
  }
  if((unsigned int)__acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing((__int64)(uintptr_t)&buffer)) {
    if(buffer.owned) free_base(buffer.buffer);
    return result;
  }
  unsigned char *text=buffer.buffer;
  if((text[0]=='\\' || text[0]=='/') && text[0]==text[1]) result=0;
  else {
    char name[4]={'=',(char)toupper((signed char)text[0]),':',0};
    if((unsigned int)_acrt_SetEnvironmentVariableA((_BYTE *)name,(_BYTE *)text)) result=0;
    else sub_14024D14C(GetLastError());
  }
  if(buffer.owned) free_base(buffer.buffer);
  return result;
}


//----- (000000014024C360) ----------------------------------------------------
void            AFX_MODULE_STATE__CreateActivationContext(sr_anon_129 *this)
{
  unsigned int v1; // eax
  void *v2; // rdi
  __int16 v3; // ax
  unsigned int v4; // eax
  __int64 v5; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-E0h] BYREF
  char *lpValue; // [rsp+38h] [rbp-D0h]
  __int64 v8; // [rsp+40h] [rbp-C8h]
  __int64 v9; // [rsp+48h] [rbp-C0h]
  __int16 v10; // [rsp+50h] [rbp-B8h]
  _WORD Name[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v12; // [rsp+5Ch] [rbp-ACh]
  _BYTE v13[528]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+278h] [rbp+170h]

  if ( this )
  {
    if ( (unsigned int)((__int64 (*)(void))SetCurrentDirectoryW)() )
    {
      v9 = 0;
      v6[1] = 261;
      v6[0] = (uint64)(uintptr_t)(v13);
      v8 = 261;
      lpValue = v13;
      LOBYTE(v10) = 0;
      if ( (unsigned int)__acrt_get_current_directory_wide____crt_win32_buffer_internal_dynamic_resizing((__int64)v6) )
      {
        if ( (_BYTE)v10 )
          free_base(lpValue);
      }
      else
      {
        v2 = lpValue;
        v3 = *(_WORD *)lpValue;
        if ( *(_WORD *)lpValue != 92 && v3 != 47 || v3 != *((_WORD *)lpValue + 1) )
        {
          Name[1] = toupper(*lpValue);
          Name[0] = 61;
          v12 = 58;
          if ( !(unsigned int)((__int64 (           *)(_WORD *, void *))SetEnvironmentVariableW)(Name, v2) )
          {
            v4 = ((__int64 (*)(void))GetLastError)();
            sub_14024D14C(v4);
          }
        }
        if ( (_BYTE)v10 )
          free_base(v2);
      }
    }
    else
    {
      v1 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v1);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  sub_1401F8B20((unsigned __int64)&v5 ^ v14);
}

// 14026E140: invalid function type 'BOOL (__stdcall *SetCurrentDirectoryW)(LPCWSTR lpPathName)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored

//----- (000000014024C4B4) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing(
        _BYTE *a1,
        __int64 a2)
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
// 14024C57F: variable 'v7' is possibly undefined
// 14024C57F: variable 'v6' is possibly undefined

//----- (000000014024C630) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_831()
{
  return sub_140259504();
}


//----- (000000014024C658) ----------------------------------------------------
int         mkdir(     char *Path)
{
  int v3; // ebx
  _QWORD v4[3]; // [rsp+20h] [rbp-50h] BYREF
  char v5; // [rsp+38h] [rbp-38h]
  _QWORD v6[2]; // [rsp+40h] [rbp-30h] BYREF
  void *Block; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  char v10; // [rsp+68h] [rbp-8h]

  if ( !Path )
    return wmkdir(nullptr);
  v6[0] = 0;
  v6[1] = 0;
  Block = nullptr;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  sub_140213644((_LocaleUpdate *)v4, nullptr);
  if ( *(_DWORD *)(v4[1] + 12LL) == 65001 )
  {
    if ( v5 )
      *(_DWORD *)(v4[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v5 )
      *(_DWORD *)(v4[0] + 936LL) &= ~2u;
  }
  else if ( v5 )
  {
    *(_DWORD *)(v4[0] + 936LL) &= ~2u;
  }
  if ( (unsigned int)sub_140238394(Path, (__int64)v6) )
    v3 = -1;
  else
    v3 = wmkdir((     sr_anon_49 *)Block);
  if ( v10 )
    free_base(Block);
  return v3;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014024C754) ----------------------------------------------------
void         __attribute__((noreturn)) abort()
{
  if ( sub_14025BBEC() )
    sub_14025BC64(0x16u);
  if ( (dword_1403022A8 & 2) != 0 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64))IsProcessorFeaturePresent)(23) )
      __fastfail(7u);
    sub_14024CD24(3, 1073741845, 1);
  }
  COleServerDoc__NotifyClosed((COleServerDoc *)3);
  do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
}

// 14024C7A4: control flows out of bounds to 14024C7A9
// 14026E2B0: invalid function type 'BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD ProcessorFeature)' has been ignored
// 1403022A8: using guessed type int dword_1403022A8;

//----- (000000014024C7AC) ----------------------------------------------------
__int64            sub_14024C7AC(_BYTE *a1, __int64 a2, __int64 a3)
{
  int *v3; // rax
  unsigned int v4; // ebx
  _BYTE *v6; // r9
  __int64 v7; // r8
  char v8; // al

  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v3 = errno_sr();
    v4 = 22;
LABEL_6:
    *v3 = v4;
    sub_14024CF6C();
    return v4;
  }
  v6 = a1;
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = v6[v7];
    *v6++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    v3 = errno_sr();
    v4 = 34;
    goto LABEL_6;
  }
  return 0;
}


//----- (000000014024C810) ----------------------------------------------------
__int64            strcpy_s_sr(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int *v4; // rax
  _BYTE *v6; // r9
  __int64 v7; // r8
  char v8; // al

  v3 = 0;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v4 = errno_sr();
    v3 = 22;
LABEL_6:
    *v4 = v3;
    sub_14024CF6C();
    return v3;
  }
  v6 = a1;
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = v6[v7];
    *v6++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    v4 = errno_sr();
    v3 = 34;
    goto LABEL_6;
  }
  return v3;
}

// 14024C810: invalid function type 'errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)' has been ignored

//----- (000000014024C870) ----------------------------------------------------
// attributes: thunk
__int64 j__calloc_base()
{
  return calloc_base();
}


//----- (000000014024C8A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_834(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, v5, a3, 1);
}


//----- (000000014024C8D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_835(
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


//----- (000000014024C900) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_836(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, v5, a3, 1u);
}


//----- (000000014024C930) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_837(
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


//----- (000000014024C960) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_838(char *a1)
{
  char *v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = nullptr;
  v2[0] = a1;
  return sub_14023BBF0(nullptr, v2, 10, 1u);
}


//----- (000000014024C98C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_839(char *a1, struct __crt_locale_pointers *a2)
{
  char *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = nullptr;
  v3[0] = a1;
  return sub_14023BBF0(a2, v3, 10, 1u);
}


//----- (000000014024C9BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_840(__int64 a1, struct __crt_locale_pointers *a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  return sub_14023B240(a2, v3, 0xAu, 1);
}


//----- (000000014024C9EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_841(__int64 a1, struct __crt_locale_pointers *a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  return sub_14023B240(a2, v3, 0xAu, 1);
}


//----- (000000014024CA1C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_842(char *a1, struct __crt_locale_pointers *a2)
{
  char *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = nullptr;
  v3[0] = a1;
  return sub_14023BBF0(a2, v3, 10, 1u);
}


//----- (000000014024CA4C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_843(unsigned __int16 *a1)
{
  unsigned __int16 *v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = nullptr;
  v2[0] = a1;
  return sub_14023B548(nullptr, v2, 0xAu, 1);
}


//----- (000000014024CA78) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_844(unsigned __int16 *a1)
{
  unsigned __int16 *v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = nullptr;
  v2[0] = a1;
  return sub_14023BEE0(nullptr, v2, 10, 1u);
}


//----- (000000014024CAA4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_845(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = nullptr;
  v3[0] = a1;
  return sub_14023BEE0(a2, v3, 10, 1u);
}


//----- (000000014024CAD4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_846(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = nullptr;
  v3[0] = a1;
  return sub_14023B548(a2, v3, 0xAu, 1);
}


//----- (000000014024CB04) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_847(unsigned __int16 *a1)
{
  unsigned __int16 *v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = nullptr;
  v2[0] = a1;
  return sub_14023B548(nullptr, v2, 0xAu, 1);
}


//----- (000000014024CB30) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_848(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = nullptr;
  v3[0] = a1;
  return sub_14023B548(a2, v3, 0xAu, 1);
}


//----- (000000014024CB60) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_849(unsigned __int16 *a1)
{
  unsigned __int16 *v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = nullptr;
  v2[0] = a1;
  return sub_14023BEE0(nullptr, v2, 10, 1u);
}


//----- (000000014024CB8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_850(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = nullptr;
  v3[0] = a1;
  return sub_14023BEE0(a2, v3, 10, 1u);
}


//----- (000000014024CBBC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_851(__int64 a1)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 0;
  v2[0] = a1;
  return sub_14023B240(nullptr, v2, 0xAu, 1);
}


//----- (000000014024CBE8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_852(__int64 a1)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 0;
  v2[0] = a1;
  return sub_14023B240(nullptr, v2, 0xAu, 1);
}


//----- (000000014024CC14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_853(char *a1)
{
  char *v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = nullptr;
  v2[0] = a1;
  return sub_14023BBF0(nullptr, v2, 10, 1u);
}


//----- (000000014024CC40) ----------------------------------------------------
__int64            wcsncmp_sr(_WORD *a1, _WORD *a2, __int64 a3)
{
  if ( !a3 )
    return 0;
  while ( --a3 && *a1 && *a1 == *a2 )
  {
    ++a1;
    ++a2;
  }
  return (unsigned __int16)*a1 - (unsigned int)(unsigned __int16)*a2;
}


//----- (000000014024CCAC) ----------------------------------------------------
__int64            capture_current_context_0(__m128i *ContextRecord)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  ((void (*)(void))RtlCaptureContext)();
  v2 = SR_VEC_LANES(128, ContextRecord[15], i64)[1];
  result = ((__int64 (           *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(v2, &ImageBase, 0);
  if ( result )
    return ((__int64 (           *)(_QWORD, unsigned __int64, __int64, __int64, __m128i *, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
             0,
             ImageBase,
             v2,
             result,
             ContextRecord,
             &v6,
             &v5,
             0);
  return result;
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored
// 14024CCAC: using guessed type __int64 __fastcall capture_current_context_0(__m128i *ContextRecord);

//----- (000000014024CD24) ----------------------------------------------------
__int64            sub_14024CD24(int a1, int a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  BOOL v8; // edi
  __int64 v10; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD ExceptionInfo[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v15[4]; // [rsp+70h] [rbp-90h] BYREF
  void *v16; // [rsp+80h] [rbp-80h]
  _QWORD ContextRecord[156]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+608h] [rbp+508h]
  __int64 v19; // [rsp+610h] [rbp+510h] BYREF

  if ( a1 != -1 )
    sub_1401FBFB0();
  sub_1401FCD30((void *)(uintptr_t)(v15), 0, 0x98u);
  sub_1401FCD30((void *)(uintptr_t)(ContextRecord), 0, 0x4D0u);
  ExceptionInfo[0] = (uint64)(uintptr_t)(v15);
  ExceptionInfo[1] = (uint64)(uintptr_t)(ContextRecord);
  ((void (           *)(_QWORD *))RtlCaptureContext)(ContextRecord);
  v6 = ContextRecord[31];
  v7 = ((__int64 (           *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
         ContextRecord[31],
         &ImageBase,
         0);
  if ( v7 )
    ((void (           *)(_QWORD, unsigned __int64, __int64, __int64, _QWORD *, __int128 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
      0,
      ImageBase,
      v6,
      v7,
      ContextRecord,
      &v14,
      &v13,
      0);
  ContextRecord[31] = (uint64)(uintptr_t)(retaddr);
  v15[0] = a2;
  ContextRecord[19] = (uint64)(uintptr_t)(&v19);
  v16 = retaddr;
  v15[1] = a3;
  v8 = IsDebuggerPresent();
  ((void (           *)(_QWORD))SetUnhandledExceptionFilter)(0);
  if ( !(unsigned int)((__int64 (           *)(_QWORD *))UnhandledExceptionFilter)(ExceptionInfo) && !v8 && a1 != -1 )
    sub_1401FBFB0();
  return sub_1401F8B20((unsigned __int64)&v10 ^ ContextRecord[154]);
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored
// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored
// 14026E2C8: invalid function type 'LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo)' has been ignored

//----- (000000014024CE80) ----------------------------------------------------
void            sub_14024CE80(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19065287] = a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF188: using guessed type unsigned int;

//----- (000000014024CEA0) ----------------------------------------------------
unsigned __int64 sub_14024CEA0()
{
  unsigned __int64 result; // rax

  result = sub_140255BEC();
  if ( result )
    return *(_QWORD *)(result + 952);
  return result;
}


//----- (000000014024CEBC) ----------------------------------------------------
__int64            sub_14024CEBC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v9; // rax
  __int64 (           *v10)(__int64, __int64, __int64, _QWORD, __int64); // rax
  __int64 (           *v12)(__int64, __int64, __int64, _QWORD, __int64); // r10

  v9 = sub_140255BEC();
  if ( v9 )
  {
    v10 = *(__int64 (           **)(__int64, __int64, __int64, _QWORD, __int64))(v9 + 952);
    if ( v10 )
      return v10(a1, a2, a3, a4, a5);
  }
  v12 = (__int64 (           *)(__int64, __int64, __int64, _QWORD, __int64))__ROR8__(
                                                                              *(_QWORD *)&dword_140404A6C[19065287]
                                                                            ^ _security_cookie,
                                                                              _security_cookie & 0x3F);
  if ( !v12 )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return v12(a1, a2, a3, a4, a5);
}

// 14024CF64: control flows out of bounds to 14024CF69
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024CF6C) ----------------------------------------------------
__int64 sub_14024CF6C()
{
  return sub_14024CEBC(0, 0, 0, 0, 0);
}


//----- (000000014024CF8C) ----------------------------------------------------
void __attribute__((noreturn)) sub_14024CF8C()
{
  sub_14024CEBC(0, 0, 0, 0, 0);
  sub_14024CFBC();
  do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
}

// 14024CFB5: control flows out of bounds to 14024CFBA

//----- (000000014024CFBC) ----------------------------------------------------
__int64 sub_14024CFBC()
{
  __int64 v0; // rax

  if ( (unsigned int)((__int64 (           *)(__int64))IsProcessorFeaturePresent)(23) )
    __fastfail(5u);
  sub_14024CD24(2, -1073740777, 1);
  v0 = ((__int64 (*)(void))GetCurrentProcess)();
  return ((__int64 (           *)(__int64, __int64))TerminateProcess)(v0, 3221226519LL);
}

// 14026E2B0: invalid function type 'BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD ProcessorFeature)' has been ignored
// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2B8: invalid function type 'BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode)' has been ignored

//----- (000000014024D038) ----------------------------------------------------
__int64            sub_14024D038(__int64 a1)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  v2 = sub_140255A70();
  result = *(_QWORD *)(v2 + 952);
  *(_QWORD *)(v2 + 952) = a1;
  return result;
}


//----- (000000014024D060) ----------------------------------------------------
__int16         dclass(double X)
{
  double Px; // [rsp+30h] [rbp+8h] BYREF

  Px = X;
  return dtest_sr(&Px);
}


//----- (000000014024D07C) ----------------------------------------------------
int         dpcomp(double X, double Y)
{
  int v2; // ebx
  double Px; // [rsp+30h] [rbp+8h] BYREF
  double v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = Y;
  Px = X;
  v2 = 2;
  if ( dtest_sr(&Px) == 2 || dtest_sr(&v5) == 2 )
    return 0;
  if ( v5 > Px )
    return 1;
  if ( Px > v5 )
    return 4;
  return v2;
}


//----- (000000014024D0E0) ----------------------------------------------------
__int64            sub_14024D0E0(double a1)
{
  return HIWORD(*(_QWORD *)&a1) & 0x8000LL;
}


//----- (000000014024D104) ----------------------------------------------------
__int64            sub_14024D104(int a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rdx
  __int64 result; // rax

  v1 = 0;
  v2 = dword_14028A2C0;
  do
  {
    if ( a1 == *v2 )
      return dword_14028A2C0[2 * v1 + 1];
    v1 = (unsigned int)(v1 + 1);
    v2 += 2;
  }
  while ( (unsigned int)v1 < 0x2D );
  if ( (unsigned int)(a1 - 19) <= 0x11 )
    return 13;
  result = 22;
  if ( (unsigned int)(a1 - 188) <= 0xE )
    return 8;
  return result;
}

// 14028A2C0: using guessed type unsigned int dword_14028A2C0[92];

//----- (000000014024D14C) ----------------------------------------------------
__int64            sub_14024D14C(int a1)
{
  unsigned __int64 v2; // rax
  int *v3; // rax
  unsigned __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax

  v2 = sub_140255BEC();
  if ( v2 )
    v3 = (int *)(v2 + 36);
  else
    v3 = (int *)&unk_1403022B0;
  *v3 = a1;
  v4 = sub_140255BEC();
  v5 = &unk_1403022AC;
  if ( v4 )
    v5 = (_DWORD *)(v4 + 32);
  result = sub_14024D104(a1);
  *v5 = result;
  return result;
}


//----- (000000014024D19C) ----------------------------------------------------
void *sub_14024D19C()
{
  unsigned __int64 v0; // rax

  v0 = sub_140255BEC();
  if ( v0 )
    return (void *)(v0 + 36);
  else
    return &unk_1403022B0;
}


//----- (000000014024D1BC) ----------------------------------------------------
int *        errno_sr()
{
  unsigned __int64 v0; // rax

  v0 = sub_140255BEC();
  if ( v0 )
    return (int *)(v0 + 32);
  else
    return (int *)&unk_1403022AC;
}


//----- (000000014024D1DC) ----------------------------------------------------
__int64            get_doserrno(_DWORD *a1)
{
  unsigned __int64 v3; // rax
  _DWORD *v4; // rax

  if ( a1 )
  {
    v3 = sub_140255BEC();
    if ( v3 )
      v4 = (_DWORD *)(v3 + 36);
    else
      v4 = &unk_1403022B0;
    *a1 = *v4;
    return 0;
  }
  else
  {
    sub_14024CF6C();
    return 22;
  }
}

// 14024D1DC: invalid function type 'errno_t __cdecl get_doserrno(unsigned int *Value)' has been ignored

//----- (000000014024D218) ----------------------------------------------------
__int64            get_errno(_DWORD *a1)
{
  unsigned __int64 v3; // rax
  _DWORD *v4; // rax

  if ( a1 )
  {
    v3 = sub_140255BEC();
    if ( v3 )
      v4 = (_DWORD *)(v3 + 32);
    else
      v4 = &unk_1403022AC;
    *a1 = *v4;
    return 0;
  }
  else
  {
    sub_14024CF6C();
    return 22;
  }
}

// 14024D218: invalid function type 'errno_t __cdecl get_errno(int *Value)' has been ignored

//----- (000000014024D254) ----------------------------------------------------
__int64            set_doserrno(int a1)
{
  unsigned __int64 v3; // rax
  _DWORD *v4; // rax

  if ( !sub_140255BEC() )
    return 12;
  v3 = sub_140255BEC();
  if ( v3 )
    v4 = (_DWORD *)(v3 + 36);
  else
    v4 = &unk_1403022B0;
  *v4 = a1;
  return 0;
}

// 14024D254: invalid function type 'errno_t __cdecl set_doserrno(unsigned int Value)' has been ignored

//----- (000000014024D290) ----------------------------------------------------
__int64            set_errno(int a1)
{
  unsigned __int64 v3; // rax
  _DWORD *v4; // rax

  if ( !sub_140255BEC() )
    return 12;
  v3 = sub_140255BEC();
  if ( v3 )
    v4 = (_DWORD *)(v3 + 32);
  else
    v4 = &unk_1403022AC;
  *v4 = a1;
  return 0;
}

// 14024D290: invalid function type 'errno_t __cdecl set_errno(int Value)' has been ignored

//----- (000000014024D2CC) ----------------------------------------------------
__int64            errcode(char a1)
{
  if ( (a1 & 0x20) != 0 )
  {
    return 5;
  }
  else if ( (a1 & 8) != 0 )
  {
    return 1;
  }
  else if ( (a1 & 4) != 0 )
  {
    return 2;
  }
  else if ( (a1 & 1) != 0 )
  {
    return 3;
  }
  else
  {
    return (unsigned int)(2 * (a1 & 2));
  }
}


//----- (000000014024D310) ----------------------------------------------------
__int64            except1(unsigned int a1, int a2, double a3, double a4, __int64 a5)
{
  __int64 v5; // rdi
  char v7; // bl
  int v8; // ebx
  __int64 v10; // [rsp+8h] [rbp-A1h] BYREF
  double v11; // [rsp+48h] [rbp-61h] BYREF
  double v12; // [rsp+50h] [rbp-59h] BYREF
  _DWORD v13[16]; // [rsp+58h] [rbp-51h] BYREF
  int v14; // [rsp+98h] [rbp-11h]
  __int64 v15; // [rsp+C8h] [rbp+1Fh]

  v5 = a5;
  v12 = a3;
  v11 = a4;
  v7 = a1;
  if ( !(unsigned int)handle_exc(a1, &v11, a5) )
  {
    v14 &= ~1u;
    raise_exc_ex(v13, &a5, v7, a2, &v12, &v11, 0);
    v5 = a5;
  }
  v8 = errcode(v7);
  if ( sub_1402477C0() && v8 )
  {
    umatherr(v8, a2, a3, 0.0, v11, v5);
  }
  else
  {
    set_errno_from_matherr(v8);
    ctrlfp(v5, 65472);
  }
  return sub_1401F8B20((unsigned __int64)&v10 ^ v15);
}


//----- (000000014024D404) ----------------------------------------------------
__int64            except2(unsigned int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  __int64 v6; // rdi
  char v8; // bl
  int v9; // ebx
  __int64 v11; // [rsp+8h] [rbp-B9h] BYREF
  double v12[2]; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v13[12]; // [rsp+58h] [rbp-69h] BYREF
  double v14; // [rsp+88h] [rbp-39h]
  unsigned int v15; // [rsp+98h] [rbp-29h]
  __int64 v16; // [rsp+C8h] [rbp+7h]

  v6 = a6;
  v12[0] = a3;
  v8 = a1;
  if ( !(unsigned int)handle_exc(a1, &a5, a6) )
  {
    v14 = a4;
    v15 = v15 & 0xFFFFFFE0 | 3;
    raise_exc_ex(v13, &a6, v8, a2, v12, &a5, 0);
    v6 = a6;
  }
  v9 = errcode(v8);
  if ( sub_1402477C0() && v9 )
  {
    umatherr(v9, a2, a3, a4, a5, v6);
  }
  else
  {
    set_errno_from_matherr(v9);
    ctrlfp(v6, 65472);
  }
  return sub_1401F8B20((unsigned __int64)&v11 ^ v16);
}


//----- (000000014024D540) ----------------------------------------------------
__int64            handle_exc(unsigned int a1, double *a2, __int16 a3)
{
  unsigned int v3; // r14d
  int v5; // ebx
  char v7; // r15
  __int64 v8; // rax
  double v9; // xmm0_8
  double v10; // xmm0_8
  int v11; // edi
  int v12; // ecx
  double v13; // xmm0_8
  int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v19; // [rsp+70h] [rbp+8h] BYREF
  double v20; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v5 = a1 & 0x1F;
  v7 = a1;
  if ( (a1 & 8) != 0 && (a3 & 0x80u) != 0 )
  {
    set_statfp(1);
    v5 &= ~8u;
    goto LABEL_46;
  }
  if ( (a1 & 4) != 0 && (a3 & 0x200) != 0 )
  {
    set_statfp(4);
    v5 &= ~4u;
    goto LABEL_46;
  }
  if ( (a1 & 1) != 0 && (a3 & 0x400) != 0 )
  {
    set_statfp(8);
    v8 = a3 & 0x6000;
    if ( (a3 & 0x6000) != 0 )
    {
      if ( v8 != 0x2000 )
      {
        if ( v8 != 0x4000 )
        {
          if ( v8 != 24576 )
          {
LABEL_24:
            v5 &= ~1u;
            goto LABEL_46;
          }
          v9 = 1.797693134862316e308;
          if ( *a2 <= 0.0 )
            goto LABEL_22;
LABEL_23:
          *a2 = v9;
          goto LABEL_24;
        }
        if ( *a2 <= 0.0 )
        {
          v9 = 1.797693134862316e308;
LABEL_22:
          v9 = -v9;
          goto LABEL_23;
        }
LABEL_20:
        v9 = INFINITY;
        goto LABEL_23;
      }
      if ( *a2 > 0.0 )
      {
        v9 = 1.797693134862316e308;
        goto LABEL_23;
      }
    }
    else if ( *a2 > 0.0 )
    {
      goto LABEL_20;
    }
    v9 = INFINITY;
    goto LABEL_22;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x800) != 0 )
  {
    v10 = *a2;
    v11 = (a1 >> 4) & 1;
    if ( *a2 == 0.0 )
    {
      v11 = 1;
    }
    else
    {
      decomp_sr(v10, &v19);
      v12 = v19 - 1536;
      v20 = v10;
      if ( v19 - 1536 >= -1074 )
      {
        v14 = 0;
        LOBYTE(v14) = v10 < 0.0;
        HIWORD(v20) = BYTE6(v20) & 0xF | 0x10;
        if ( v12 < -1021 )
        {
          v15 = LODWORD(v20);
          v16 = (unsigned int)(-1021 - v12);
          v17 = HIDWORD(v20);
          do
          {
            if ( (v15 & 1) != 0 && !v11 )
              v11 = 1;
            v15 >>= 1;
            LODWORD(v20) = v15;
            if ( (v17 & 1) != 0 )
            {
              v15 |= 0x80000000;
              LODWORD(v20) = v15;
            }
            v17 >>= 1;
            --v16;
          }
          while ( v16 );
          HIDWORD(v20) = v17;
        }
        v13 = v20;
        if ( v14 )
          v13 = -v20;
      }
      else
      {
        v13 = v10 * 0.0;
        v11 = 1;
      }
      *a2 = v13;
    }
    if ( v11 )
      set_statfp(16);
    v5 &= ~2u;
  }
LABEL_46:
  if ( (v7 & 0x10) != 0 && (a3 & 0x1000) != 0 )
  {
    set_statfp(32);
    v5 &= ~0x10u;
  }
  LOBYTE(v3) = v5 == 0;
  return v3;
}


//----- (000000014024D7A8) ----------------------------------------------------
double            handle_qnan2_sr(double a1, double a2)
{
  return a1 + a2;
}


//----- (000000014024D7B0) ----------------------------------------------------
__int64            raise_exc(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 0);
}


//----- (000000014024D7D8) ----------------------------------------------------
__int64            raise_exc_ex(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6, int a7)
{
  unsigned int v9; // edi
  char v10; // al
  __int64 v11; // rax
  _DWORD *v12; // rsi
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 result; // rax
  _DWORD *Arguments; // [rsp+30h] [rbp+10h] BYREF

  Arguments = a1;
  v9 = -1073741811;
  a1[1] = 0;
  Arguments[2] = 0;
  Arguments[3] = 0;
  if ( (a3 & 0x10) != 0 )
  {
    v9 = -1073741681;
    Arguments[1] |= 1u;
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = -1073741677;
    Arguments[1] |= 2u;
  }
  if ( (a3 & 1) != 0 )
  {
    v9 = -1073741679;
    Arguments[1] |= 4u;
  }
  if ( (a3 & 4) != 0 )
  {
    v9 = -1073741682;
    Arguments[1] |= 8u;
  }
  if ( (a3 & 8) != 0 )
  {
    v9 = -1073741680;
    Arguments[1] |= 0x10u;
  }
  Arguments[2] ^= (Arguments[2] ^ ~(16 * (*a2 >> 7))) & 0x10;
  Arguments[2] ^= (Arguments[2] ^ ~(8 * (*a2 >> 9))) & 8;
  Arguments[2] ^= (Arguments[2] ^ ~(4 * (*a2 >> 10))) & 4;
  Arguments[2] ^= (Arguments[2] ^ ~(2 * (*a2 >> 11))) & 2;
  Arguments[2] ^= (Arguments[2] ^ ~(*(_DWORD *)a2 >> 12)) & 1;
  v10 = statfp();
  if ( (v10 & 1) != 0 )
    Arguments[3] |= 0x10u;
  if ( (v10 & 4) != 0 )
    Arguments[3] |= 8u;
  if ( (v10 & 8) != 0 )
    Arguments[3] |= 4u;
  if ( (v10 & 0x10) != 0 )
    Arguments[3] |= 2u;
  if ( (v10 & 0x20) != 0 )
    Arguments[3] |= 1u;
  v11 = *(_DWORD *)a2 & 0x6000LL;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 8192LL:
        *Arguments &= ~2u;
        *Arguments |= 1u;
        break;
      case 16384LL:
        *Arguments &= ~1u;
        *Arguments |= 2u;
        break;
      case 24576LL:
        *Arguments |= 3u;
        break;
    }
  }
  else
  {
    *Arguments &= 0xFFFFFFFC;
  }
  *Arguments &= 0xFFFE001F;
  *Arguments |= 32 * (a4 & 0xFFF);
  v12 = a6;
  Arguments[8] |= 1u;
  if ( a7 )
  {
    Arguments[8] &= 0xFFFFFFE1;
    Arguments[4] = *a5;
    Arguments[24] |= 1u;
    Arguments[24] &= 0xFFFFFFE1;
    Arguments[20] = *v12;
  }
  else
  {
    Arguments[8] = Arguments[8] & 0xFFFFFFE1 | 2;
    *((_QWORD *)Arguments + 2) = *(_QWORD *)a5;
    Arguments[24] |= 1u;
    Arguments[24] = Arguments[24] & 0xFFFFFFE1 | 2;
    *((_QWORD *)Arguments + 10) = *(_QWORD *)v12;
  }
  clrfp();
  ((void (           *)(_QWORD, _QWORD, __int64, _DWORD **))RaiseException)(v9, 0, 1, &Arguments);
  v13 = Arguments;
  v14 = Arguments[2];
  if ( (v14 & 0x10) != 0 )
  {
    *a2 &= ~0x80uLL;
    v14 = v13[2];
  }
  if ( (v14 & 8) != 0 )
  {
    *a2 &= ~0x200uLL;
    v14 = v13[2];
  }
  if ( (v14 & 4) != 0 )
  {
    *a2 &= ~0x400uLL;
    v14 = v13[2];
  }
  if ( (v14 & 2) != 0 )
  {
    *a2 &= ~0x800uLL;
    v14 = v13[2];
  }
  if ( (v14 & 1) != 0 )
    *a2 &= ~0x1000uLL;
  if ( (*v13 & 3) != 0 )
  {
    switch ( *v13 & 3 )
    {
      case 1:
        *a2 &= ~0x4000uLL;
        *a2 |= 0x2000uLL;
        break;
      case 2:
        *a2 &= ~0x2000uLL;
        *a2 |= 0x4000uLL;
        break;
      case 3:
        *a2 |= 0x6000uLL;
        break;
    }
  }
  else
  {
    *a2 &= 0xFFFFFFFFFFFF9FFFuLL;
  }
  if ( a7 )
  {
    result = (unsigned int)v13[20];
    *v12 = result;
  }
  else
  {
    result = *((_QWORD *)v13 + 10);
    *(_QWORD *)v12 = result;
  }
  return result;
}

// 14026E200: invalid function type 'void (__stdcall *RaiseException)(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments)' has been ignored

//----- (000000014024DAE8) ----------------------------------------------------
__int64            raise_excf(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 1);
}


//----- (000000014024DB14) ----------------------------------------------------
int *           set_errno_from_matherr(int a1)
{
  int *result; // rax

  if ( a1 == 1 )
  {
    result = errno_sr();
    *result = 33;
  }
  else
  {
    result = (int *)(unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = errno_sr();
      *result = 34;
    }
  }
  return result;
}


//----- (000000014024DB44) ----------------------------------------------------
double            umatherr(int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  double v13; // [rsp+30h] [rbp-28h]
  double v14; // [rsp+38h] [rbp-20h]
  double v15; // [rsp+40h] [rbp-18h]

  v7 = &unk_14028A430;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&dword_14028A600 )
    {
      v9 = 0;
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)&unk_14028A430 + 2 * v8 + 1);
LABEL_6:
  v12 = v9;
  if ( v9 )
  {
    v13 = a3;
    v14 = a4;
    v15 = a5;
    v11 = a1;
    ctrlfp(a6, 65472);
    if ( !(unsigned int)sub_1402477E8((__int64)&v11) )
      set_errno_from_matherr(a1);
    return v15;
  }
  else
  {
    ctrlfp(a6, 65472);
    set_errno_from_matherr(a1);
    return a5;
  }
}

// 14028A600: using guessed type _DWORD dword_14028A600;

//----- (000000014024DC68) ----------------------------------------------------
void            decomp_sr(double a1, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  char v6; // [rsp+Eh] [rbp+Eh]

  if ( a1 == 0.0 )
  {
    v3 = 0;
  }
  else if ( (HIWORD(a1) & 0x7FF0) == 0 && ((v4 = LODWORD(a1), (HIDWORD(a1) & 0xFFFFF) != 0) || LODWORD(a1)) )
  {
    v3 = -1021;
    if ( (BYTE6(a1) & 0x10) == 0 )
    {
      v5 = HIDWORD(a1);
      do
      {
        v5 *= 2;
        v6 = BYTE2(v5);
        if ( v4 < 0 )
        {
          v5 |= 1u;
          v6 = BYTE2(v5);
        }
        v4 *= 2;
        --v3;
      }
      while ( (v6 & 0x10) == 0 );
    }
  }
  else
  {
    v3 = ((HIWORD(a1) >> 4) & 0x7FF) - 1022;
  }
  *a2 = v3;
}


//----- (000000014024DDE8) ----------------------------------------------------
double            set_exp_sr(double a1, __int16 a2)
{
  double v3; // [rsp+18h] [rbp+18h]

  v3 = a1;
  HIWORD(v3) = (16 * (a2 + 1022)) | HIWORD(a1) & 0x800F;
  return v3;
}


//----- (000000014024DE20) ----------------------------------------------------
__int64            sptype_sr(double a1)
{
  if ( HIDWORD(a1) == 2146435072 && !LODWORD(a1) )
    return 1;
  if ( HIDWORD(a1) == -1048576 && !LODWORD(a1) )
    return 2;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF0 && ((HIDWORD(a1) & 0x7FFFF) != 0 || LODWORD(a1)) )
    return 4;
  return 0;
}


//----- (000000014024DE94) ----------------------------------------------------
__int64 clrfp()
{
  unsigned int v0; // ebx

  v0 = get_fpsr() & 0x3F;
  fclrf_sr();
  return v0;
}


//----- (000000014024DEB4) ----------------------------------------------------
__int64            ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  unsigned int v5; // ecx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_1403022B4 && (v5 & 0x40) != 0 )
    set_fpsr_sr(v5);
  else
    set_fpsr_sr(v5 & 0xFFFFFFBF);
  return fpsr;
}

// 1403022B4: using guessed type char byte_1403022B4;

//----- (000000014024DF30) ----------------------------------------------------
void            set_statfp(char a1)
{
  int fpsr; // eax

  fpsr = get_fpsr();
  set_fpsr_sr(a1 & 0x3F | fpsr);
}


//----- (000000014024DF50) ----------------------------------------------------
__int64 statfp()
{
  return get_fpsr() & 0x3F;
}


//----- (000000014024DF64) ----------------------------------------------------
double         copysign(double Number, double Sign)
{
  if ( (__int64)(*(_QWORD *)&Number ^ *(_QWORD *)&Sign) < 0 )
    *(_QWORD *)&Number ^= 0x8000000000000000uLL;
  return Number;
}


//----- (000000014024DF98) ----------------------------------------------------
__int64            calloc_base()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // rcx
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

//----- (000000014024E018) ----------------------------------------------------
void         free_base(void *Block)
{
  int *v1; // rbx
  int v2; // eax

  if ( Block )
  {
    if ( !(unsigned int)((__int64 (           *)(_QWORD, _QWORD, void *))HeapFree)(
                          *(_QWORD *)&dword_140404A6C[19065847],
                          0,
                          Block) )
    {
      v1 = errno_sr();
      v2 = ((__int64 (*)(void))GetLastError)();
      *v1 = sub_14024D104(v2);
    }
  }
}

// 14026E128: invalid function type 'BOOL (__stdcall *HeapFree)(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024E058) ----------------------------------------------------
__int64            _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_(__int64 a1)
{
  return ((__int64 (           *)(__int64, _QWORD, _QWORD))__ROR8__(
                                                             *(_QWORD *)&dword_140404A6C[19065397] ^ _security_cookie,
                                                             _security_cookie & 0x3F))(
           a1,
           0,
           0);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024E088) ----------------------------------------------------
__int64            sub_14024E088(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie ^ __ROR8__(**a3, 64 - (_security_cookie & 0x3Fu));
  LODWORD(a3) = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(
                  _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_,
                  1);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie;
  sub_140258BB8(*a4);
  return (unsigned int)a3;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF340: using guessed type unsigned int;

//----- (000000014024E104) ----------------------------------------------------
__int64            sub_14024E104(unsigned int a1, _QWORD **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14024E088((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014024E1AC) ----------------------------------------------------
__int64            _lambda_6c3dac0a4f3f9cefca9bb494422f9b77___operator_call(_QWORD **a1)
{
  __int64 result; // rax

  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie ^ __ROR8__(**a1, 64 - (_security_cookie & 0x3Fu));
  result = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(
             _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_,
             1);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF340: using guessed type unsigned int;

//----- (000000014024E228) ----------------------------------------------------
__int64            enum_system_locales_ex_nolock(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
  result = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(
             _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_,
             1);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF340: using guessed type unsigned int;

//----- (000000014024E6BC) ----------------------------------------------------
__int64            try_get_first_available_module(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int16 *v6; // rbp

  v3 = a1;
  if ( a1 == a2 )
    return 0;
  while ( 1 )
  {
    v4 = *v3;
    v5 = *(_QWORD *)&dword_140404A6C[2 * v4 + 19065289];
    if ( !v5 )
      break;
    if ( v5 != -1 )
      return v5;
LABEL_16:
    if ( ++v3 == a2 )
      return 0;
  }
  v6 = off_14028A6F0[v4];
  v5 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v6, 0, 2048);
  if ( !v5 )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(v6, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(v6, L"ext-ms-", 7) )
    {
      v5 = 0;
    }
    else
    {
      v5 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v6, 0, 0);
    }
  }
  if ( !v5 )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19065289], -1);
    goto LABEL_16;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19065289], v5) )
    ((void (           *)(__int64))FreeLibrary)(v5);
  return v5;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14024E7A6: conditional instruction was optimized away because rbx.8!=0
// 1402849B0: using guessed type __int16 aApiMs[8];
// 14028A6F0: using guessed type __int16 *off_14028A6F0[20];
// 14028ABE8: using guessed type __int16[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024E7D8) ----------------------------------------------------
__int64            try_get_function(unsigned int a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // r15
  unsigned int *v6; // rbp
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int16 *v13; // r14

  v4 = a1;
  v6 = a3;
  v8 = _security_cookie;
  v9 = __ROR8__(*(_QWORD *)&dword_140404A6C[2 * a1 + 19065329] ^ _security_cookie, _security_cookie & 0x3F);
  if ( v9 == -1 )
    return 0;
  if ( v9 )
    return v9;
  if ( a3 == a4 )
  {
LABEL_21:
    v12 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v11 = *v6;
    v12 = *(_QWORD *)&dword_140404A6C[2 * v11 + 19065289];
    if ( !v12 )
      break;
    if ( v12 != -1 )
      goto LABEL_25;
LABEL_19:
    if ( ++v6 == a4 )
    {
      v8 = _security_cookie;
      goto LABEL_21;
    }
  }
  v13 = off_14028A6F0[v11];
  v12 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v13, 0, 2048);
  if ( !v12 )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(v13, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(v13, L"ext-ms-", 7) )
    {
      v12 = 0;
    }
    else
    {
      v12 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v13, 0, 0);
    }
  }
  if ( !v12 )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v11 + 19065289], -1);
    goto LABEL_19;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v11 + 19065289], v12) )
    ((void (           *)(__int64))FreeLibrary)(v12);
LABEL_25:
  v8 = _security_cookie;
LABEL_22:
  if ( v12 )
  {
    result = ((__int64 (           *)(__int64, __int64))GetProcAddress)(v12, a2);
    if ( result )
    {
      _InterlockedExchange64(
        (volatile __int64 *)&dword_140404A6C[2 * v4 + 19065329],
        _security_cookie ^ __ROR8__(result, 64 - (_security_cookie & 0x3Fu)));
      return result;
    }
    v8 = _security_cookie;
  }
  _InterlockedExchange64(
    (volatile __int64 *)&dword_140404A6C[2 * v4 + 19065329],
    v8 ^ __ROR8__(-1, 64 - ((unsigned __int8)v8 & 0x3Fu)));
  return 0;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14024E90D: conditional instruction was optimized away because rbx.8!=0
// 1402849B0: using guessed type __int16 aApiMs[8];
// 14028A6F0: using guessed type __int16 *off_14028A6F0[20];
// 14028ABE8: using guessed type __int16[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024E9B0) ----------------------------------------------------
__int64            try_get_module(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int16 *v3; // rsi
  __int64 v4; // rbx

  v1 = a1;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19065289];
  if ( result )
  {
    if ( result == -1 )
      return 0;
  }
  else
  {
    v3 = off_14028A6F0[a1];
    v4 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v3, 0, 2048);
    if ( !v4 )
    {
      if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
        || !(unsigned int)wcsncmp_sr(v3, L"api-ms-", 7)
        || !(unsigned int)wcsncmp_sr(v3, L"ext-ms-", 7) )
      {
        v4 = 0;
      }
      else
      {
        v4 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v3, 0, 0);
      }
    }
    if ( v4 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19065289], v4) )
        ((void (           *)(__int64))FreeLibrary)(v4);
      return v4;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19065289], -1);
      return 0;
    }
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 1402849B0: using guessed type __int16 aApiMs[8];
// 14028A6F0: using guessed type __int16 *off_14028A6F0[20];
// 14028ABE8: using guessed type __int16[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024EAB0) ----------------------------------------------------
__int64            try_get_proc_address_from_first_available_module(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int16 *v8; // rbp

  v4 = a2;
  if ( a2 == a3 )
    return 0;
  while ( 1 )
  {
    v6 = *v4;
    v7 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19065289];
    if ( !v7 )
      break;
    if ( v7 != -1 )
      return ((__int64 (           *)(__int64, __int64))GetProcAddress)(v7, a1);
LABEL_16:
    if ( ++v4 == a3 )
      return 0;
  }
  v8 = off_14028A6F0[v6];
  v7 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v8, 0, 2048);
  if ( !v7 )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(v8, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(v8, L"ext-ms-", 7) )
    {
      v7 = 0;
    }
    else
    {
      v7 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v8, 0, 0);
    }
  }
  if ( !v7 )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19065289], -1);
    goto LABEL_16;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19065289], v7) )
    ((void (           *)(__int64))FreeLibrary)(v7);
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(v7, a1);
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14024EBA2: conditional instruction was optimized away because rbx.8!=0
// 1402849B0: using guessed type __int16 aApiMs[8];
// 14028A6F0: using guessed type __int16 *off_14028A6F0[20];
// 14028ABE8: using guessed type __int16[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024EBE8) ----------------------------------------------------
__int64            sub_14024EBE8(_WORD *a1)
{
  __int64 result; // rax

  result = ((__int64 (           *)(_WORD *, _QWORD, __int64))LoadLibraryExW)(a1, 0, 2048);
  if ( !result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(a1, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(a1, L"ext-ms-", 7) )
    {
      return 0;
    }
    else
    {
      return ((__int64 (           *)(_WORD *, _QWORD, _QWORD))LoadLibraryExW)(a1, 0, 0);
    }
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 1402849B0: using guessed type __int16 aApiMs[8];
// 14028ABE8: using guessed type __int16[8];

//----- (000000014024EC64) ----------------------------------------------------
__int64            sub_14024EC64(__int64 a1)
{
  static unsigned int sr_api_modules_24ec64_0[] = {18};
  __int64 (           *function)(__int64, __int64); // rax

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Cu,
                                                         (__int64)"AppPolicyGetProcessTerminationMethod", sr_api_modules_24ec64_0, sr_api_modules_24ec64_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028AEC0: using guessed type unsigned int dword_14028AEC0;
// 14028AEC4: using guessed type unsigned int dword_14028AEC4;

//----- (000000014024ECB4) ----------------------------------------------------
__int64            sub_14024ECB4(__int64 a1)
{
  static unsigned int sr_api_modules_24ecb4_0[] = {18};
  __int64 (           *function)(__int64, __int64); // rax

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Eu,
                                                         (__int64)"AppPolicyGetShowDeveloperDiagnostic", sr_api_modules_24ecb4_0, sr_api_modules_24ecb4_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028AF20: using guessed type unsigned int dword_14028AF20;
// 14028AF24: using guessed type unsigned int dword_14028AF24;

//----- (000000014024ED04) ----------------------------------------------------
__int64            sub_14024ED04(__int64 a1)
{
  static unsigned int sr_api_modules_24ed04_0[] = {18};
  __int64 (           *function)(__int64, __int64); // rax

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Du,
                                                         (__int64)"AppPolicyGetThreadInitializationType", sr_api_modules_24ed04_0, sr_api_modules_24ed04_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028AEF0: using guessed type unsigned int dword_14028AEF0;
// 14028AEF4: using guessed type unsigned int dword_14028AEF4;

//----- (000000014024ED54) ----------------------------------------------------
__int64            sub_14024ED54(__int64 a1)
{
  static unsigned int sr_api_modules_24ed54_0[] = {18};
  __int64 (           *function)(__int64, __int64); // rax

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Fu,
                                                         (__int64)"AppPolicyGetWindowingModel", sr_api_modules_24ed54_0, sr_api_modules_24ed54_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028AF4C: using guessed type unsigned int dword_14028AF4C;

//----- (000000014024EDA4) ----------------------------------------------------
__int64 sub_14024EDA4()
{
  static unsigned int sr_api_modules_24eda4_0[] = {16};
  __int64 (*function)(void); // rax

  function = (__int64 (*)(void))try_get_function(0, (__int64)"AreFileApisANSI", sr_api_modules_24eda4_0, sr_api_modules_24eda4_0 + 1);
  if ( function )
    return function();
  else
    return 1;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028ABF8: using guessed type unsigned int dword_14028ABF8;
// 14028ABFC: using guessed type unsigned int dword_14028ABFC;

//----- (000000014024EDE0) ----------------------------------------------------
__int64            sub_14024EDE0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  static unsigned int sr_api_modules_24ede0_0[] = {6,16};
  __int64 (           *function)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64); // rax
  unsigned int v15; // eax

  function = (__int64 (           *)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64))try_get_function(1u, (__int64)"CompareStringEx", sr_api_modules_24ede0_0, sr_api_modules_24ede0_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v15 = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))CompareStringW)(
           v15,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E110: invalid function type 'int (__stdcall *CompareStringW)(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024EEBC) ----------------------------------------------------
__int64            sub_14024EEBC(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  static unsigned int sr_api_modules_24eebc_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD, __int64, __int64); // rax
  _BYTE v9[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  function = (__int64 (           *)(__int64, _QWORD, __int64, __int64))try_get_function(
                                                                          2u,
                                                                          (__int64)"EnumSystemLocalesEx", sr_api_modules_24eebc_0, sr_api_modules_24eebc_0 + 2);
  if ( function )
    return function(v13, a2, a3, a4);
  v12 = &v13;
  v10 = 4;
  v11 = 4;
  return sub_14024E088((__int64)v9, &v11, &v12, &v10);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024EF54) ----------------------------------------------------
__int64            sub_14024EF54(__int64 a1)
{
  static unsigned int sr_api_modules_24ef54_0[] = {1,16};
  __int64 (           *function)(__int64); // rax

  function = (__int64 (           *)(__int64))try_get_function(
                                                3u,
                                                (__int64)"FlsAlloc", sr_api_modules_24ef54_0, sr_api_modules_24ef54_0 + 2);
  if ( function )
    return function(a1);
  else
    return ((__int64 (*)(void))TlsAlloc)();
}

// 14026E230: invalid function type 'DWORD (__stdcall *TlsAlloc)()' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024EF9C) ----------------------------------------------------
__int64            sub_14024EF9C(unsigned int a1)
{
  static unsigned int sr_api_modules_24ef9c_0[] = {1,16};
  __int64 (           *function)(_QWORD); // rax

  function = (__int64 (           *)(_QWORD))try_get_function(
                                               4u,
                                               (__int64)"FlsFree", sr_api_modules_24ef9c_0, sr_api_modules_24ef9c_0 + 2);
  if ( function )
    return function(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsFree)(a1);
}

// 14026E218: invalid function type 'BOOL (__stdcall *TlsFree)(DWORD dwTlsIndex)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024EFE4) ----------------------------------------------------
__int64            sub_14024EFE4(unsigned int a1)
{
  static unsigned int sr_api_modules_24efe4_0[] = {1,16};
  __int64 (           *function)(_QWORD); // rax

  function = (__int64 (           *)(_QWORD))try_get_function(
                                               5u,
                                               (__int64)"FlsGetValue", sr_api_modules_24efe4_0, sr_api_modules_24efe4_0 + 2);
  if ( function )
    return function(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsGetValue)(a1);
}

// 14026E228: invalid function type 'LPVOID (__stdcall *TlsGetValue)(DWORD dwTlsIndex)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F02C) ----------------------------------------------------
__int64            sub_14024F02C(unsigned int a1, __int64 a2)
{
  static unsigned int sr_api_modules_24f02c_0[] = {1,16};
  __int64 (           *function)(_QWORD, __int64); // rax

  function = (__int64 (           *)(_QWORD, __int64))try_get_function(
                                                        6u,
                                                        (__int64)"FlsSetValue", sr_api_modules_24f02c_0, sr_api_modules_24f02c_0 + 2);
  if ( function )
    return function(a1, a2);
  else
    return ((__int64 (           *)(_QWORD, __int64))TlsSetValue)(a1, a2);
}

// 14026E220: invalid function type 'BOOL (__stdcall *TlsSetValue)(DWORD dwTlsIndex, LPVOID lpTlsValue)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F080) ----------------------------------------------------
__int64            sub_14024F080(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  static unsigned int sr_api_modules_24f080_0[] = {0,16};
  __int64 (           *function)(__int64, _QWORD, __int64, __int64, __int64, int, __int64); // rax
  unsigned int v13; // eax

  function = (__int64 (           *)(__int64, _QWORD, __int64, __int64, __int64, int, __int64))try_get_function(
                                                                                                 8u,
                                                                                                 (__int64)"GetDateFormatEx", sr_api_modules_24f080_0, sr_api_modules_24f080_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7);
  v13 = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, __int64, __int64, int))GetDateFormatW)(
           v13,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E120: invalid function type 'int (__stdcall *GetDateFormatW)(LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F138) ----------------------------------------------------
__int64 sub_14024F138()
{
  static unsigned int sr_api_modules_24f138_0[] = {10,16};
  __int64 (*function)(void); // rax

  function = (__int64 (*)(void))try_get_function(
                                  9u,
                                  (__int64)"GetEnabledXStateFeatures", sr_api_modules_24f138_0, sr_api_modules_24f138_0 + 2);
  if ( !function )
    abort();
  return function();
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F174) ----------------------------------------------------
__int64            sub_14024F174(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f174_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD, __int64, _QWORD); // rax
  unsigned int v10; // eax

  function = (__int64 (           *)(__int64, _QWORD, __int64, _QWORD))try_get_function(
                                                                         0xBu,
                                                                         (__int64)"GetLocaleInfoEx", sr_api_modules_24f174_0, sr_api_modules_24f174_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4);
  v10 = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, _QWORD))GetLocaleInfoW)(v10, a2, a3, a4);
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F1F8) ----------------------------------------------------
__int64            sub_14024F1F8(__int64 a1)
{
  static unsigned int sr_api_modules_24f1f8_0[] = {8};
  __int64 (           *function)(__int64); // rax

  function = (__int64 (           *)(__int64))try_get_function(
                                                0xDu,
                                                (__int64)"GetSystemTimePreciseAsFileTime", sr_api_modules_24f1f8_0, sr_api_modules_24f1f8_0 + 1);
  if ( function )
    return function(a1);
  else
    return ((__int64 (           *)(__int64))GetSystemTimeAsFileTime)(a1);
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028AD1C: using guessed type unsigned int dword_14028AD1C;

//----- (000000014024F240) ----------------------------------------------------
__int64            sub_14024F240(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  static unsigned int sr_api_modules_24f240_0[] = {0,16};
  __int64 (           *function)(__int64, _QWORD, __int64, __int64, __int64, int); // rax
  unsigned int v12; // eax

  function = (__int64 (           *)(__int64, _QWORD, __int64, __int64, __int64, int))try_get_function(
                                                                                        0xEu,
                                                                                        (__int64)"GetTimeFormatEx", sr_api_modules_24f240_0, sr_api_modules_24f240_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6);
  v12 = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, __int64, __int64, int))GetTimeFormatW)(
           v12,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E118: invalid function type 'int (__stdcall *GetTimeFormatW)(LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpTime, LPCWSTR lpFormat, LPWSTR lpTimeStr, int cchTime)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F2EC) ----------------------------------------------------
__int64            sub_14024F2EC(_WORD *a1, unsigned int a2)
{
  static unsigned int sr_api_modules_24f2ec_0[] = {3,16};
  __int64 (           *function)(_WORD *, _QWORD); // rax
  unsigned int v6; // eax

  function = (__int64 (           *)(_WORD *, _QWORD))try_get_function(
                                                        0xFu,
                                                        (__int64)"GetUserDefaultLocaleName", sr_api_modules_24f2ec_0, sr_api_modules_24f2ec_0 + 2);
  if ( function )
    return function(a1, a2);
  v6 = ((__int64 (*)(void))GetUserDefaultLCID)();
  return sub_14024F460(v6, a1, a2, 0);
}

// 14026E0F0: invalid function type 'LCID (__stdcall *GetUserDefaultLCID)()' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F350) ----------------------------------------------------
__int64            sub_14024F350(__int64 a1, __int64 a2)
{
  static unsigned int sr_api_modules_24f350_0[] = {10,16};
  __int64 (           *function)(__int64, __int64); // rax

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x11u,
                                                         (__int64)"GetXStateFeaturesMask", sr_api_modules_24f350_0, sr_api_modules_24f350_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F3A4) ----------------------------------------------------
__int64            _acrt_InitializeCriticalSectionEx(__int64 a1, unsigned int a2, unsigned int a3)
{
  static unsigned int sr_api_modules_24f3a4_0[] = {7,16};
  __int64 (           *function)(__int64, _QWORD, _QWORD); // rax

  function = (__int64 (           *)(__int64, _QWORD, _QWORD))try_get_function(
                                                                0x12u,
                                                                (__int64)"InitializeCriticalSectionEx", sr_api_modules_24f3a4_0, sr_api_modules_24f3a4_0 + 2);
  if ( function )
    return function(a1, a2, a3);
  else
    return ((__int64 (           *)(__int64, _QWORD))InitializeCriticalSectionAndSpinCount)(a1, a2);
}

// 14026E238: invalid function type 'BOOL (__stdcall *InitializeCriticalSectionAndSpinCount)(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F408) ----------------------------------------------------
__int64            sub_14024F408(__int64 a1)
{
  static unsigned int sr_api_modules_24f408_0[] = {3,16};
  __int64 (           *function)(__int64); // rax
  unsigned int v4; // eax

  function = (__int64 (           *)(__int64))try_get_function(
                                                0x13u,
                                                (__int64)"IsValidLocaleName", sr_api_modules_24f408_0, sr_api_modules_24f408_0 + 2);
  if ( function )
    return function(a1);
  v4 = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, __int64))IsValidLocale)(v4, 1);
}

// 14026E0F8: invalid function type 'BOOL (__stdcall *IsValidLocale)(LCID Locale, DWORD dwFlags)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F460) ----------------------------------------------------
__int64            sub_14024F460(unsigned int a1, _WORD *a2, unsigned int a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f460_0[] = {4,16};
  __int64 (           *function)(_QWORD, _WORD *, _QWORD, _QWORD); // rax

  function = (__int64 (           *)(_QWORD, _WORD *, _QWORD, _QWORD))try_get_function(
                                                                        0x15u,
                                                                        (__int64)"LCIDToLocaleName", sr_api_modules_24f460_0, sr_api_modules_24f460_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4);
  else
    return _acrt_DownlevelLCIDToLocaleName(a1, a2, a3);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F4D0) ----------------------------------------------------
__int64            sub_14024F4D0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  static unsigned int sr_api_modules_24f4d0_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64); // rax
  unsigned int v15; // eax

  function = (__int64 (           *)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64))try_get_function(0x14u, (__int64)"LCMapStringEx", sr_api_modules_24f4d0_0, sr_api_modules_24f4d0_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v15 = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))LCMapStringW)(v15, a2, a3, a4, a5, a6);
}

// 14026E108: invalid function type 'int (__stdcall *LCMapStringW)(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F5AC) ----------------------------------------------------
__int64            sub_14024F5AC(__int64 a1, unsigned int a2)
{
  static unsigned int sr_api_modules_24f5ac_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD); // rax

  function = (__int64 (           *)(__int64, _QWORD))try_get_function(
                                                        0x16u,
                                                        (__int64)"LocaleNameToLCID", sr_api_modules_24f5ac_0, sr_api_modules_24f5ac_0 + 2);
  if ( function )
    return function(a1, a2);
  else
    return _acrt_DownlevelLocaleNameToLCID(a1);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F5FC) ----------------------------------------------------
__int64            sub_14024F5FC(__int64 a1, unsigned int a2, __int64 a3)
{
  static unsigned int sr_api_modules_24f5fc_0[] = {10,16};
  __int64 (           *function)(__int64, _QWORD, __int64); // rax

  function = (__int64 (           *)(__int64, _QWORD, __int64))try_get_function(
                                                                 0x17u,
                                                                 (__int64)"LocateXStateFeature", sr_api_modules_24f5fc_0, sr_api_modules_24f5fc_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2, a3);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F65C) ----------------------------------------------------
__int64            sub_14024F65C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f65c_0[] = {13,19};
  __int64 (           *function)(__int64, __int64, __int64, _QWORD); // rax

  function = (__int64 (           *)(__int64, __int64, __int64, _QWORD))try_get_function(
                                                                          0x18u,
                                                                          (__int64)"MessageBoxA", sr_api_modules_24f65c_0, sr_api_modules_24f65c_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2, a3, a4);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F6D0) ----------------------------------------------------
__int64            sub_14024F6D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f6d0_0[] = {13,19};
  __int64 (           *function)(__int64, __int64, __int64, _QWORD); // rax

  function = (__int64 (           *)(__int64, __int64, __int64, _QWORD))try_get_function(
                                                                          0x19u,
                                                                          (__int64)"MessageBoxW", sr_api_modules_24f6d0_0, sr_api_modules_24f6d0_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2, a3, a4);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F744) ----------------------------------------------------
__int64 (           *           sub_14024F744(unsigned int a1))(_QWORD)
{
  static unsigned int sr_api_modules_24f744_0[] = {9};
  __int64 (           *result)(_QWORD); // rax

  result = (__int64 (           *)(_QWORD))try_get_function(
                                             0x1Au,
                                             (__int64)"RoInitialize", sr_api_modules_24f744_0, sr_api_modules_24f744_0 + 1);
  if ( result )
    return (__int64 (           *)(_QWORD))result(a1);
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F784) ----------------------------------------------------
__int64 (*sub_14024F784())(void)
{
  static unsigned int sr_api_modules_24f784_0[] = {9};
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))try_get_function(0x1Bu, (__int64)"RoUninitialize", sr_api_modules_24f784_0, sr_api_modules_24f784_0 + 1);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 14028AEAC: using guessed type unsigned int dword_14028AEAC;

//----- (000000014024F7B8) ----------------------------------------------------
__int64            sub_14024F7B8(__int64 a1, unsigned int a2)
{
  static unsigned int sr_api_modules_24f7b8_0[] = {12,15};
  __int64 (           *function)(__int64, _QWORD); // rax

  function = (__int64 (           *)(__int64, _QWORD))try_get_function(
                                                        0x21u,
                                                        (__int64)"SystemFunction036", sr_api_modules_24f7b8_0, sr_api_modules_24f7b8_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F808) ----------------------------------------------------
__int64 (           *           sub_14024F808(__int64 a1))(__int64)
{
  static unsigned int sr_api_modules_24f808_0[] = {5,16};
  __int64 (           *result)(__int64); // rax

  result = (__int64 (           *)(__int64))try_get_function(
                                              0x20u,
                                              (__int64)"SetThreadStackGuarantee", sr_api_modules_24f808_0, sr_api_modules_24f808_0 + 2);
  if ( result )
    return (__int64 (           *)(__int64))result(a1);
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024F84C) ----------------------------------------------------
bool sub_14024F84C()
{
  static unsigned int sr_api_modules_24f84c_0[] = {13,19};
  static unsigned int sr_api_modules_24f84c_1[] = {13,19};
  char v0; // bl

  v0 = 0;
  if ( (unsigned int)sub_14025A3C4() == 1
    && try_get_function(0x18u, (__int64)"MessageBoxA", sr_api_modules_24f84c_0, sr_api_modules_24f84c_0 + 2) )
  {
    return try_get_function(0x19u, (__int64)"MessageBoxW", sr_api_modules_24f84c_1, sr_api_modules_24f84c_1 + 2) != 0;
  }
  return v0;
}


//----- (000000014024F8BC) ----------------------------------------------------
bool sub_14024F8BC()
{
  static unsigned int sr_api_modules_24f8bc_0[] = {6,16};
  return try_get_function(
           1u,
           (__int64)"CompareStringEx", sr_api_modules_24f8bc_0, sr_api_modules_24f8bc_0 + 2) != 0;
}


//----- (000000014024F8EC) ----------------------------------------------------
bool sub_14024F8EC()
{
  static unsigned int sr_api_modules_24f8ec_0[] = {10,16};
  return try_get_function(
           0x17u,
           (__int64)"LocateXStateFeature", sr_api_modules_24f8ec_0, sr_api_modules_24f8ec_0 + 2) != 0;
}


//----- (000000014024F91C) ----------------------------------------------------
__int64 sub_14024F91C()
{
  static unsigned int sr_api_modules_24f91c_0[] = {16};
  static unsigned int sr_api_modules_24f91c_1[] = {6,16};
  static unsigned int sr_api_modules_24f91c_2[] = {3,16};
  static unsigned int sr_api_modules_24f91c_3[] = {0,16};
  static unsigned int sr_api_modules_24f91c_4[] = {3,16};
  static unsigned int sr_api_modules_24f91c_5[] = {0,16};
  static unsigned int sr_api_modules_24f91c_6[] = {3,16};
  static unsigned int sr_api_modules_24f91c_7[] = {3,16};
  static unsigned int sr_api_modules_24f91c_8[] = {3,16};
  static unsigned int sr_api_modules_24f91c_9[] = {4,16};
  static unsigned int sr_api_modules_24f91c_10[] = {3,16};
  try_get_function(0, (__int64)"AreFileApisANSI", sr_api_modules_24f91c_0, sr_api_modules_24f91c_0 + 1);
  try_get_function(1u, (__int64)"CompareStringEx", sr_api_modules_24f91c_1, sr_api_modules_24f91c_1 + 2);
  try_get_function(
    2u,
    (__int64)"EnumSystemLocalesEx", sr_api_modules_24f91c_2, sr_api_modules_24f91c_2 + 2);
  try_get_function(8u, (__int64)"GetDateFormatEx", sr_api_modules_24f91c_3, sr_api_modules_24f91c_3 + 2);
  try_get_function(0xBu, (__int64)"GetLocaleInfoEx", sr_api_modules_24f91c_4, sr_api_modules_24f91c_4 + 2);
  try_get_function(0xEu, (__int64)"GetTimeFormatEx", sr_api_modules_24f91c_5, sr_api_modules_24f91c_5 + 2);
  try_get_function(
    0xFu,
    (__int64)"GetUserDefaultLocaleName", sr_api_modules_24f91c_6, sr_api_modules_24f91c_6 + 2);
  try_get_function(
    0x13u,
    (__int64)"IsValidLocaleName", sr_api_modules_24f91c_7, sr_api_modules_24f91c_7 + 2);
  try_get_function(0x14u, (__int64)"LCMapStringEx", sr_api_modules_24f91c_8, sr_api_modules_24f91c_8 + 2);
  try_get_function(
    0x15u,
    (__int64)"LCIDToLocaleName", sr_api_modules_24f91c_9, sr_api_modules_24f91c_9 + 2);
  return try_get_function(
           0x16u,
           (__int64)"LocaleNameToLCID", sr_api_modules_24f91c_10, sr_api_modules_24f91c_10 + 2);
}

// 14028ABF8: using guessed type unsigned int dword_14028ABF8;
// 14028ABFC: using guessed type unsigned int dword_14028ABFC;

//----- (000000014024FA78) ----------------------------------------------------
__int64 sub_14024FA78()
{
  static unsigned int sr_api_modules_24fa78_0[] = {11,19};
  static unsigned int sr_api_modules_24fa78_1[] = {13,19};
  __int64 (*function)(void); // rax
  __int64 v1; // rbx
  __int64 (           *v2)(__int64); // rax

  function = (__int64 (*)(void))try_get_function(
                                  7u,
                                  (__int64)"GetActiveWindow", sr_api_modules_24fa78_0, sr_api_modules_24fa78_0 + 2);
  if ( !function )
    return 0;
  v1 = function();
  if ( !v1 )
    return 0;
  v2 = (__int64 (           *)(__int64))try_get_function(
                                          0xAu,
                                          (__int64)"GetLastActivePopup", sr_api_modules_24fa78_1, sr_api_modules_24fa78_1 + 2);
  if ( v2 )
    return v2(v1);
  else
    return v1;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024FAF0) ----------------------------------------------------
char sub_14024FAF0()
{
  memset64(
    &dword_140404A6C[19065329],
    _security_cookie,
    &dword_140404A6C[19065397] >= &dword_140404A6C[19065329] ? 0x22 : 0);
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024FB24) ----------------------------------------------------
__int64 sub_14024FB24()
{
  static unsigned int sr_api_modules_24fb24_0[] = {14,19};
  static unsigned int sr_api_modules_24fb24_1[] = {14,19};
  __int64 (*function)(void); // rbx
  void (           *v1)(__int64, __int64, __int64 *, __int64, _QWORD); // rdi
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  function = (__int64 (*)(void))try_get_function(
                                  0xCu,
                                  (__int64)"GetProcessWindowStation", sr_api_modules_24fb24_0, sr_api_modules_24fb24_0 + 2);
  if ( function )
  {
    v1 = (void (           *)(__int64, __int64, __int64 *, __int64, _QWORD))try_get_function(
                                                                              0x10u,
                                                                              (__int64)"GetUserObjectInformationW", sr_api_modules_24fb24_1, sr_api_modules_24fb24_1 + 2);
    if ( v1 )
    {
      v2 = function();
      if ( v2 )
      {
        v5 = 0;
        v6 = 0;
        v1(v2, 1, &v5, 12, 0);
      }
    }
  }
  return sub_1401F8B20((unsigned __int64)&v4 ^ v7);
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014024FBEC) ----------------------------------------------------
char            sub_14024FBEC(char a1)
{
  unsigned int *v1; // rbx

  if ( !a1 )
  {
    v1 = &dword_140404A6C[19065289];
    do
    {
      if ( *(_QWORD *)v1 )
      {
        if ( *(_QWORD *)v1 != -1 )
          ((void (*)(void))FreeLibrary)();
        *(_QWORD *)v1 = 0;
      }
      v1 += 2;
    }
    while ( v1 != &dword_140404A6C[19065329] );
  }
  return 1;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024FC38) ----------------------------------------------------
int         fcloseall()
{
  int i; // ebx
  __int64 v1; // rcx
  int v3; // [rsp+20h] [rbp-18h]

  v3 = 0;
  sub_140258B64(8);
  for ( i = 3; i != dword_140404A6C[19064591]; ++i )
  {
    v1 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 20) & 0x2000) != 0
        && (unsigned int)sub_14020B9E8(*(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i)) != -1 )
      {
        ++v3;
      }
      ((void (           *)(__int64))DeleteCriticalSection)(*(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i) + 48LL);
      free_base(*(void **)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i));
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i) = 0;
    }
  }
  sub_140258BB8(8);
  return v3;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024FCEC) ----------------------------------------------------
__int64            sub_14024FCEC(__int64 a1, __int64 *a2, FILE ***a3, __int64 *a4)
{
  __int64 v6; // rax
  int v7; // ecx

  sub_14020B5E0(*a2);
  v6 = (__int64)**a3;
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 20);
    if ( (v7 & 0x2000) != 0 )
    {
      if ( (v7 & 3) == 2 && (v7 & 0xC0) != 0 || (v7 & 0x800) != 0 )
      {
        if ( *(_BYTE *)a3[2] || (*((_DWORD *)**a3 + 5) & 2) != 0 )
        {
          if ( (unsigned int)unknown_libname_861(**a3) == -1 )
            *(_DWORD *)a3[3] = -1;
          else
            ++*(_DWORD *)a3[1];
        }
      }
      else
      {
        ++*(_DWORD *)a3[1];
      }
    }
  }
  return sub_14020B5EC(*a4);
}

// 140250240: using guessed type __int64 __fastcall unknown_libname_861(FILE *Stream);

//----- (000000014024FD88) ----------------------------------------------------
__int64            sub_14024FD88(__int64 a1, unsigned int *a2, FILE ***a3, unsigned int *a4)
{
  __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ecx
  FILE **v10; // rdx
  FILE **v11; // rcx
  FILE **v12; // rax
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-48h] BYREF
  FILE **v17[7]; // [rsp+40h] [rbp-38h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v19; // [rsp+98h] [rbp+20h]

  v19 = a4;
  sub_140258B64(*a2);
  v6 = *(__int64 **)&dword_140404A6C[19064593];
  v7 = *(_QWORD *)&dword_140404A6C[19064593] + 8LL * (int)dword_140404A6C[19064591];
  while ( 1 )
  {
    v16[1] = (__int64)v6;
    if ( v6 == (__int64 *)v7 )
      break;
    v8 = *v6;
    v14 = v8;
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 20);
      if ( (v9 & 0x2000) != 0 )
      {
        if ( (v9 & 3) == 2 && (v9 & 0xC0) != 0 || (v9 & 0x800) != 0 )
        {
          v10 = a3[2];
          v11 = a3[1];
          v12 = *a3;
          v17[0] = (FILE **)&v14;
          v17[1] = v12;
          v17[2] = v11;
          v17[3] = v10;
          v15 = v14;
          v16[0] = v14;
          sub_14024FCEC((__int64)&v18, v16, v17, &v15);
        }
        else
        {
          ++*(_DWORD *)*a3;
        }
      }
    }
    ++v6;
  }
  return sub_140258BB8(*a4);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014024FE68) ----------------------------------------------------
__int64            sub_14024FE68(__int64 a1, __int64 *a2, FILE ***a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = unknown_libname_861(**a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}

// 140250240: using guessed type __int64 __fastcall unknown_libname_861(FILE *Stream);

//----- (000000014024FEA8) ----------------------------------------------------
__int64            sub_14024FEA8(unsigned int a1, FILE ***a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14024FD88((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014024FED0) ----------------------------------------------------
__int64            sub_14024FED0(__int64 a1, FILE ***a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14024FE68((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014024FEF8) ----------------------------------------------------
__int64            sub_14024FEF8(__int64 a1, FILE ***a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14024FCEC((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014024FFB4) ----------------------------------------------------
char            _lambda_ab61a845afdef5b7c387490eaf3616ee___operator_call(FILE ***a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  FILE **v5; // rdx
  unsigned int v6; // ecx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  FILE **v9[5]; // [rsp+28h] [rbp-28h] BYREF
  char v10; // [rsp+78h] [rbp+28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v1 = *(__int64 **)&dword_140404A6C[19064593];
  LOBYTE(v3) = dword_140404A6C[19064591];
  v4 = *(_QWORD *)&dword_140404A6C[19064593] + 8LL * (int)dword_140404A6C[19064591];
  while ( v1 != (__int64 *)v4 )
  {
    v3 = *v1;
    v5 = *a1;
    v11 = v3;
    if ( v3 )
    {
      v6 = *(_DWORD *)(v3 + 20);
      LODWORD(v3) = v6 >> 13;
      if ( (v6 & 0x2000) != 0 )
      {
        LOBYTE(v3) = v6 & 3;
        if ( (v6 & 3) == 2 && (v6 & 0xC0) != 0 || (v6 & 0x800) != 0 )
        {
          v9[0] = (FILE **)&v11;
          v9[1] = *a1;
          v9[2] = a1[1];
          v9[3] = a1[2];
          v12 = v11;
          v8 = v11;
          LOBYTE(v3) = sub_14024FCEC((__int64)&v10, &v8, v9, &v12);
        }
        else
        {
          ++*(_DWORD *)v5;
        }
      }
    }
    ++v1;
  }
  return v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6A8: using guessed type unsigned int;

//----- (000000014025006C) ----------------------------------------------------
char            _lambda_c5860995281e5c4ce005b3de8f5874ee___operator_call(FILE *******a1)
{
  FILE *****v2; // rdx
  FILE *****v3; // rax
  unsigned int v4; // ecx
  FILE *****v5; // rcx

  v2 = (FILE *****)a1[1];
  v3 = **a1;
  if ( v3 )
  {
    v4 = *((_DWORD *)v3 + 5);
    LODWORD(v3) = v4 >> 13;
    if ( (v4 & 0x2000) != 0 )
    {
      LOBYTE(v3) = v4 & 3;
      if ( (v4 & 3) == 2 && (v4 & 0xC0) != 0 || (v4 & 0x800) != 0 )
      {
        if ( *(_BYTE *)a1[2] || (v5 = **a1, LODWORD(v3) = *((_DWORD *)v5 + 5) >> 1, (*((_DWORD *)v5 + 5) & 2) != 0) )
        {
          if ( (unsigned int)unknown_libname_861((FILE *)**a1) == -1 )
          {
            v3 = (FILE *****)a1[3];
            *(_DWORD *)v3 = -1;
          }
          else
          {
            v3 = (FILE *****)a1[1];
            ++*(_DWORD *)v3;
          }
        }
      }
      else
      {
        ++*(_DWORD *)v2;
      }
    }
  }
  return (char)v3;
}

// 140250240: using guessed type __int64 __fastcall unknown_libname_861(FILE *Stream);

//----- (00000001402500F4) ----------------------------------------------------
__int64            sub_1402500F4(char a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-1Ch] BYREF
  FILE **v4[3]; // [rsp+28h] [rbp-18h] BYREF
  char v5; // [rsp+50h] [rbp+10h] BYREF
  char v6; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF

  v5 = a1;
  v8 = 0;
  v7 = 0;
  v4[0] = (FILE **)&v8;
  v4[1] = (FILE **)&v5;
  v4[2] = (FILE **)&v7;
  v2 = 8;
  v3 = 8;
  sub_14024FD88((__int64)&v6, &v3, v4, &v2);
  result = v7;
  if ( v5 )
    return v8;
  return result;
}


//----- (00000001402501C4) ----------------------------------------------------
__int64            sub_1402501C4(FILE *Stream)
{
  int v2; // ecx
  signed int v3; // edi
       void *v4; // rsi
  int v5; // eax

  v2 = *((_DWORD *)Stream + 5);
  if ( (v2 & 3) == 2 && (v2 & 0xC0) != 0 )
  {
    v3 = *(_DWORD *)Stream - *((_DWORD *)Stream + 2);
    *((_DWORD *)Stream + 4) = 0;
    v4 = *((     void **)Stream + 1);
    *(_QWORD *)Stream = (uint64)(uintptr_t)(v4);
    if ( v3 > 0 )
    {
      v5 = fileno(Stream);
      if ( v3 != write(v5, v4, v3) )
      {
        _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
        return 0xFFFFFFFFLL;
      }
      if ( (*((_DWORD *)Stream + 5) & 4) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Stream + 5, 0xFFFFFFFD);
    }
  }
  return 0;
}

// 1402501C4: using guessed type __int64 __fastcall sub_1402501C4(FILE *Stream);

//----- (0000000140250240) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_861(FILE *Stream)
{
  int v3; // eax

  if ( !Stream )
    return sub_1402500F4(0);
  if ( (unsigned int)sub_1402501C4(Stream) )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)Stream + 5) & 0x800) != 0 )
  {
    v3 = fileno(Stream);
    if ( commit(v3) )
      return 0xFFFFFFFFLL;
  }
  return 0;
}

// 1402501C4: using guessed type __int64 __fastcall sub_1402501C4(FILE *Stream);
// 140250240: using guessed type __int64 __fastcall unknown_libname_861(FILE *Stream);

//----- (000000014025028C) ----------------------------------------------------
int         flushall()
{
  return sub_1402500F4(1);
}


//----- (0000000140250294) ----------------------------------------------------
int         fflush(FILE *Stream)
{
  int v2; // edx
  FILE *v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF
  FILE *v5; // [rsp+48h] [rbp+10h] BYREF
  FILE *v6; // [rsp+50h] [rbp+18h] BYREF
  FILE **v7; // [rsp+58h] [rbp+20h] BYREF

  v5 = Stream;
  if ( !Stream )
    return sub_1402500F4(0);
  v2 = *((_DWORD *)Stream + 5);
  if ( ((v2 & 3) != 2 || (v2 & 0xC0) == 0) && (v2 & 0x800) == 0 )
    return 0;
  v7 = &v5;
  v6 = v5;
  v3 = v5;
  return sub_14024FE68((__int64)&v4, (__int64 *)&v3, &v7, (__int64 *)&v6);
}


//----- (00000001402502FC) ----------------------------------------------------
__int64            sub_1402502FC(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 20) >> 13;
  if ( (*(_DWORD *)(a1 + 20) & 0x2000) != 0 )
  {
    result = *(_DWORD *)(a1 + 20) >> 6;
    if ( (*(_DWORD *)(a1 + 20) & 0x40) != 0 )
    {
      free_base(*(void **)(a1 + 8));
      _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFEBF);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 16) = 0;
      return 0;
    }
  }
  return result;
}


//----- (0000000140250358) ----------------------------------------------------
char initialize_inherited_file_handles_nolock()
{
  int v0; // eax
  _BYTE *v1; // rsi
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdx
  _WORD v8[52]; // [rsp+20h] [rbp-78h] BYREF
  int *v9; // [rsp+68h] [rbp-30h]

  LOBYTE(v0) = ((__int64 (           *)(_WORD *))GetStartupInfoW)(v8);
  v9=*(int **)((unsigned char *)v8+72);
  if ( v8[33] )
  {
    LOBYTE(v0) = (_BYTE)v9;
    if ( v9 )
    {
      v1 = v9 + 1;
      v2 = 0x2000;
      v3 = (_QWORD *)((char *)v9 + *v9 + 4);
      if ( *v9 < 0x2000 )
        v2 = (unsigned int)*v9;
      LOBYTE(v0) = sub_140260FC0(v2);
      if ( (int)v2 > (int)dword_140404A6C[19065657] )
        v2 = dword_140404A6C[19065657];
      if ( (_DWORD)v2 )
      {
        v4 = 0;
        do
        {
          if ( *v3 != -1
            && *v3 != -2
            && (*v1 & 1) != 0
            && ((*v1 & 8) != 0 || (v0 = ((__int64 (           *)(_QWORD))GetFileType)(*v3)) != 0) )
          {
            v5 = *(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401];
            v6 = 9 * (v4 & 0x3F);
            *(_QWORD *)(v5 + 8 * v6 + 40) = *v3;
            LOBYTE(v0) = *v1;
            *(_BYTE *)(v5 + 8 * v6 + 56) = *v1;
          }
          ++v4;
          ++v1;
          ++v3;
          --v2;
        }
        while ( v2 );
      }
    }
  }
  return v0;
}

// 14026E2A0: invalid function type 'void (__stdcall *GetStartupInfoW)(LPSTARTUPINFOW lpStartupInfo)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140250448) ----------------------------------------------------
__int64 initialize_stdio_handles_nolock()
{
  int v0; // esi
  __int64 v1; // r14
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  bool v7; // cf
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = v0 & 0x3F;
    v3 = 9 * v2;
    v4 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)v0 >> 6) + 19065401];
    v5 = *(_QWORD *)(v4 + 72 * v2 + 40);
    v7 = v5 == -2;
    result = v5 + 2;
    if ( v7 || result == 1 )
    {
      *(_BYTE *)(v4 + 72 * v2 + 56) = -127;
      if ( v0 )
      {
        if ( v0 == 1 )
          v8 = 4294967285LL;
        else
          v8 = 4294967284LL;
      }
      else
      {
        v8 = 4294967286LL;
      }
      v9 = ((__int64 (           *)(__int64))GetStdHandle)(v8);
      v10 = v9;
      if ( (unsigned __int64)(v9 + 1) <= 1 )
        result = 0;
      else
        result = ((__int64 (           *)(__int64))GetFileType)(v9);
      if ( (_DWORD)result )
      {
        *(_QWORD *)(v4 + 8 * v3 + 40) = v10;
        if ( (unsigned __int8)result == 2 )
        {
          *(_BYTE *)(v4 + 8 * v3 + 56) |= 0x40u;
        }
        else if ( (unsigned __int8)result == 3 )
        {
          *(_BYTE *)(v4 + 8 * v3 + 56) |= 8u;
        }
      }
      else
      {
        *(_BYTE *)(v4 + 8 * v3 + 56) |= 0x40u;
        *(_QWORD *)(v4 + 8 * v3 + 40) = -2;
        result = *(_QWORD *)&dword_140404A6C[19064593];
        if ( *(_QWORD *)&dword_140404A6C[19064593] )
        {
          result = *(_QWORD *)(v1 + *(_QWORD *)&dword_140404A6C[19064593]);
          *(_DWORD *)(result + 24) = -2;
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 72 * v2 + 56) |= 0x80u;
    }
    ++v0;
    v1 += 8;
  }
  while ( v0 != 3 );
  return result;
}

// 14026E188: invalid function type 'HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140250554) ----------------------------------------------------
char sub_140250554()
{
  char v0; // bl

  sub_140258B64(7);
  v0 = 0;
  if ( !(unsigned int)sub_140260FC0(0) )
  {
    initialize_inherited_file_handles_nolock();
    initialize_stdio_handles_nolock();
    v0 = 1;
  }
  sub_140258BB8(7);
  return v0;
}


//----- (0000000140250590) ----------------------------------------------------
char sub_140250590()
{
  unsigned __int64 i; // rbx
  char *v1; // rcx

  for ( i = 0; i < 256; i += 2LL )
  {
    v1 = *(char **)&dword_140404A6C[i + 19065401];
    if ( v1 )
    {
      sub_140260F70(v1);
      *(_QWORD *)&dword_140404A6C[i + 19065401] = 0;
    }
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402505E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1033(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140250604) ----------------------------------------------------
__int64 *           sub_140250604(__int64 *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0;
  sub_140258B64(8);
  v2 = find_or_allocate_unused_stream_nolock(&v5);
  v3 = *v2;
  *a1 = *v2;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 40) = 0;
    *(_QWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 24) = -1;
  }
  sub_140258BB8(8);
  return a1;
}


//----- (000000014025065C) ----------------------------------------------------
__int64            sub_14025065C(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 20), 0);
}


//----- (000000014025068C) ----------------------------------------------------
__int64 *           find_or_allocate_unused_stream_nolock(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  v2 = (__int64 *)(*(_QWORD *)&dword_140404A6C[19064593] + 24LL);
  v3 = *(_QWORD *)&dword_140404A6C[19064593] + 24LL + 8 * ((int)dword_140404A6C[19064591] - 3LL);
  while ( v2 != (__int64 *)v3 )
  {
    v4 = *v2;
    if ( !*v2 )
    {
      *v2 = sr_directory_calloc(1, 88);
      free_base(nullptr);
      if ( *v2 )
      {
        *(_DWORD *)(*v2 + 24) = -1;
        _acrt_InitializeCriticalSectionEx(*v2 + 48, 0xFA0u, 0);
        v4 = *v2;
        _InterlockedOr((volatile signed __int32 *)(*v2 + 20), 0x2000u);
        sub_14020B5E0(v4);
LABEL_12:
        *a1 = v4;
        return a1;
      }
      break;
    }
    if ( (*(_DWORD *)(v4 + 20) & 0x2000) == 0 )
    {
      sub_14020B5E0(*v2);
      _m_prefetchw((     void *)(v4 + 20));
      v5 = *(_DWORD *)(v4 + 20);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 20), v5 | 0x2000, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x2000) == 0 )
        goto LABEL_12;
      sub_14020B5EC(v4);
    }
    ++v2;
  }
  *a1 = 0;
  return a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140250780) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1034(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402507BC) ----------------------------------------------------
__int64            sub_1402507BC(__int64 a1, char *a2)
{
  char *v2; // r8
  char i; // al
  _BYTE *v5; // r8
  char v6; // r9
  char v7; // di
  char v8; // r10
  char v9; // r11
  char v10; // dl
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  _QWORD *v23; // rdi
  bool v24; // zf
  _BYTE *j; // rdi
  __int64 v26; // rsi
  _BYTE *k; // rcx

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = dword_140404A6C[19065285];
  for ( i = *a2; i == 32; i = *v2 )
    ++v2;
  if ( i == 97 )
  {
    *(_DWORD *)a1 = 265;
LABEL_10:
    *(_DWORD *)(a1 + 4) = 2;
    goto LABEL_11;
  }
  if ( i != 114 )
  {
    if ( i != 119 )
      goto LABEL_81;
    *(_DWORD *)a1 = 769;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 4) = 1;
LABEL_11:
  v5 = v2 + 1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 1;
  while ( *v5 )
  {
    v11 = (char)*v5;
    if ( v11 > 83 )
    {
      v18 = v11 - 84;
      if ( !v18 )
      {
        if ( (*(_DWORD *)a1 & 0x1000) == 0 )
        {
          v17 = *(_DWORD *)a1 | 0x1000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v19 = v18 - 14;
      if ( !v19 )
      {
        if ( (*(_DWORD *)a1 & 0xC000) == 0 )
        {
          v17 = *(_DWORD *)a1 | 0x8000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 11;
        if ( v21 )
        {
          v22 = v21 - 6;
          if ( v22 )
          {
            if ( v22 != 4 )
              goto LABEL_81;
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              v17 = *(_DWORD *)a1 | 0x400;
              goto LABEL_53;
            }
          }
          else if ( (*(_DWORD *)a1 & 0xC000) == 0 )
          {
            v17 = *(_DWORD *)a1 | 0x4000;
LABEL_53:
            *(_DWORD *)a1 = v17;
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        if ( v6 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) &= ~0x800u;
      }
      else
      {
        if ( v6 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) |= 0x800u;
      }
      v6 = 1;
      v10 = 1;
    }
    else
    {
      if ( v11 == 83 )
      {
        if ( v8 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x20u;
LABEL_32:
        v8 = 1;
        v10 = 1;
        goto LABEL_55;
      }
      v12 = v11 - 32;
      if ( v12 )
      {
        v13 = v12 - 11;
        if ( !v13 )
        {
          if ( !v7 )
          {
            v7 = 1;
            if ( (*(_DWORD *)a1 & 2) == 0 )
            {
              *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFFC | 2;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFFFFFF8 | 4;
              goto LABEL_54;
            }
          }
          goto LABEL_51;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          v9 = 1;
LABEL_51:
          v10 = 0;
          goto LABEL_55;
        }
        v15 = v14 - 24;
        if ( !v15 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
          {
            v17 = *(_DWORD *)a1 | 0x40;
            goto LABEL_53;
          }
          goto LABEL_51;
        }
        v16 = v15 - 10;
        if ( !v16 )
        {
          *(_DWORD *)a1 |= 0x80u;
LABEL_54:
          v10 = 1;
          goto LABEL_55;
        }
        if ( v16 != 4 )
          goto LABEL_81;
        if ( v8 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x10u;
        goto LABEL_32;
      }
    }
LABEL_55:
    v5 += v10 != 0;
    if ( !v10 )
      break;
  }
  v23 = v5 + 1;
  if ( !v9 )
    v23 = v5;
  while ( *(_BYTE *)v23 == 32 )
    v23 = (_QWORD *)((char *)v23 + 1);
  if ( !v9 )
  {
    v24 = *(_BYTE *)v23 == 0;
    goto LABEL_63;
  }
  if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v23), (const char *)(uintptr_t)((__int64)"ccs"), 3u) )
    goto LABEL_81;
  for ( j = (char *)v23 + 3; *j == 32; ++j )
    ;
  if ( *j != 61 )
    goto LABEL_81;
  do
    ++j;
  while ( *j == 32 );
  v26 = 5;
  if ( !(unsigned int)strnicmp_sr(j, "UTF-8", 5) )
  {
    *(_DWORD *)a1 |= 0x40000u;
    goto LABEL_77;
  }
  v26 = 8;
  if ( !(unsigned int)strnicmp_sr(j, "UTF-16LEUNICODE", 8) )
  {
    *(_DWORD *)a1 |= 0x20000u;
    goto LABEL_77;
  }
  v26 = 7;
  if ( (unsigned int)strnicmp_sr(j, "UNICODE", 7) )
    goto LABEL_81;
  *(_DWORD *)a1 |= 0x10000u;
LABEL_77:
  for ( k = &j[v26]; *k == 32; ++k )
    ;
  v24 = *k == 0;
LABEL_63:
  if ( !v24 )
  {
LABEL_81:
    *errno_sr() = 22;
    sub_14024CF6C();
    return a1;
  }
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}

// 140265480: using guessed type __int64 __fastcall strnicmp(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF180: using guessed type unsigned int;

//----- (0000000140250A7C) ----------------------------------------------------
__int64            __acrt_stdio_parse_mode__wchar_t(__int64 a1, __int16 *a2)
{
  __int16 *v2; // r8
  __int16 i; // ax
  _WORD *v5; // r8
  char v6; // dl
  char v7; // r9
  char v8; // di
  char v9; // r10
  char v10; // r11
  __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  _WORD *v24; // rdi
  bool v25; // zf
  _WORD *j; // rdi
  _WORD *k; // rcx

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = dword_140404A6C[19065285];
  for ( i = *a2; i == 32; i = *v2 )
    ++v2;
  if ( i == 97 )
  {
    *(_DWORD *)a1 = 265;
LABEL_10:
    *(_DWORD *)(a1 + 4) = 2;
    goto LABEL_11;
  }
  if ( i != 114 )
  {
    if ( i != 119 )
      goto LABEL_81;
    *(_DWORD *)a1 = 769;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 4) = 1;
LABEL_11:
  v5 = v2 + 1;
  v6 = 1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 5;
  while ( *v5 )
  {
    v12 = (unsigned __int16)*v5;
    if ( v12 > 0x53 )
    {
      v19 = v12 - 84;
      if ( !v19 )
      {
        if ( (*(_DWORD *)a1 & 0x1000) == 0 )
        {
          v18 = *(_DWORD *)a1 | 0x1000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v20 = v19 - 14;
      if ( !v20 )
      {
        if ( (*(_DWORD *)a1 & 0xC000) == 0 )
        {
          v18 = *(_DWORD *)a1 | 0x8000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 11;
        if ( v22 )
        {
          v23 = v22 - 6;
          if ( v23 )
          {
            if ( v23 != 4 )
              goto LABEL_81;
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              v18 = *(_DWORD *)a1 | 0x400;
              goto LABEL_53;
            }
          }
          else if ( (*(_DWORD *)a1 & 0xC000) == 0 )
          {
            v18 = *(_DWORD *)a1 | 0x4000;
LABEL_53:
            *(_DWORD *)a1 = v18;
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        if ( v7 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) &= ~0x800u;
      }
      else
      {
        if ( v7 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) |= 0x800u;
      }
      v7 = 1;
      v6 = 1;
    }
    else
    {
      if ( v12 == 83 )
      {
        if ( v9 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x20u;
LABEL_32:
        v9 = 1;
        v6 = 1;
        goto LABEL_55;
      }
      v13 = v12 - 32;
      if ( v13 )
      {
        v14 = v13 - 11;
        if ( !v14 )
        {
          if ( !v8 )
          {
            v8 = 1;
            if ( (*(_DWORD *)a1 & 2) == 0 )
            {
              *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFFC | 2;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFFFFFF8 | 4;
              goto LABEL_54;
            }
          }
          goto LABEL_51;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v10 = 1;
LABEL_51:
          v6 = 0;
          goto LABEL_55;
        }
        v16 = v15 - 24;
        if ( !v16 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
          {
            v18 = *(_DWORD *)a1 | 0x40;
            goto LABEL_53;
          }
          goto LABEL_51;
        }
        v17 = v16 - 10;
        if ( !v17 )
        {
          *(_DWORD *)a1 |= 0x80u;
LABEL_54:
          v6 = 1;
          goto LABEL_55;
        }
        if ( v17 != 4 )
          goto LABEL_81;
        if ( v9 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x10u;
        goto LABEL_32;
      }
    }
LABEL_55:
    v5 = (_WORD *)((char *)v5 + (v6 != 0 ? 2 : 0));
    if ( !v6 )
      break;
  }
  v24 = v5 + 1;
  if ( !v10 )
    v24 = v5;
  while ( *v24 == 32 )
    ++v24;
  if ( !v10 )
  {
    v25 = *v24 == 0;
    goto LABEL_63;
  }
  if ( (unsigned int)wcsncmp_sr(v24, L"ccs", 3) )
    goto LABEL_81;
  for ( j = v24 + 3; *j == 32; ++j )
    ;
  if ( *j != 61 )
    goto LABEL_81;
  do
    ++j;
  while ( *j == 32 );
  if ( !(unsigned int)wcsnicmp_sr(j, L"UTF-8", 5) )
  {
    *(_DWORD *)a1 |= 0x40000u;
    goto LABEL_77;
  }
  if ( !(unsigned int)wcsnicmp_sr(j, L"UTF-16LEUNICODE", 8) )
  {
    *(_DWORD *)a1 |= 0x20000u;
    v11 = 8;
    goto LABEL_77;
  }
  if ( (unsigned int)wcsnicmp_sr(j, L"UNICODE", 7) )
    goto LABEL_81;
  *(_DWORD *)a1 |= 0x10000u;
  v11 = 7;
LABEL_77:
  for ( k = &j[v11]; *k == 32; ++k )
    ;
  v25 = *k == 0;
LABEL_63:
  if ( !v25 )
  {
LABEL_81:
    *errno_sr() = 22;
    sub_14024CF6C();
    return a1;
  }
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}

// 14026529C: using guessed type __int64 __fastcall wcsnicmp(_QWORD, _QWORD, _QWORD);
// 14028AFC8: using guessed type __int16[4];
// 14028AFD0: using guessed type __int16 String2[6];
// 14028AFE0: using guessed type __int16[16];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF180: using guessed type unsigned int;

//----- (0000000140250D7C) ----------------------------------------------------
__int64            sub_140250D7C(char *FileName, char *a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // eax
  int FileHandle; // [rsp+30h] [rbp-38h] BYREF
  int OpenFlag[2]; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  _BYTE v14[32]; // [rsp+48h] [rbp-20h] BYREF

  v4 = (int)FileName;
  v7 = sub_1402507BC((__int64)v14, a2);
  v8 = *(_QWORD *)v7;
  LODWORD(v7) = *(_DWORD *)(v7 + 8);
  *(_QWORD *)OpenFlag = v8;
  v13 = v7;
  if ( !(_BYTE)v7 || (unsigned int)sopen_s((unsigned int)&FileHandle, v4, OpenFlag[0], a3, 384) )
    return 0;
  ++dword_140404A6C[19064595];
  _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
  v9 = FileHandle;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 40) = 0;
  *(_QWORD *)(a4 + 8) = 0;
  *(_QWORD *)a4 = 0;
  *(_DWORD *)(a4 + 24) = v9;
  return a4;
}

// 14026638C: using guessed type __int64 __fastcall sopen_s(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD PermissionMode);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6B8: using guessed type unsigned int;

//----- (0000000140250E14) ----------------------------------------------------
__int64            sub_140250E14(sr_anon_49 *FileName, __int16 *a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // eax
  int FileHandle; // [rsp+30h] [rbp-38h] BYREF
  int OpenFlag[2]; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  _BYTE v14[32]; // [rsp+48h] [rbp-20h] BYREF

  v4 = (int)FileName;
  v7 = __acrt_stdio_parse_mode__wchar_t((__int64)v14, a2);
  v8 = *(_QWORD *)v7;
  LODWORD(v7) = *(_DWORD *)(v7 + 8);
  *(_QWORD *)OpenFlag = v8;
  v13 = v7;
  if ( !(_BYTE)v7 || (unsigned int)wsopen_s((unsigned int)&FileHandle, v4, OpenFlag[0], a3, 384) )
    return 0;
  ++dword_140404A6C[19064595];
  _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
  v9 = FileHandle;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 40) = 0;
  *(_QWORD *)(a4 + 8) = 0;
  *(_QWORD *)a4 = 0;
  *(_DWORD *)(a4 + 24) = v9;
  return a4;
}

__int64 sub_140251044(char *filename,char *mode,int sharing,__int64 stream)
{
  sr_file_mode decoded;
  int descriptor;
  sr_file_mode *parsed=(sr_file_mode *)(uintptr_t)sub_1402507BC((__int64)(uintptr_t)&decoded,mode);
  unsigned int opening=parsed->opening, stream_flags=parsed->stream;
  unsigned char accepted=parsed->accepted;
  if (accepted && !(unsigned int)sopen_s((unsigned int *)&descriptor,(_BYTE *)filename,opening,sharing,384))
  {
    ++dword_140404A6C[19064595];
    _InterlockedOr((volatile LONG *)(stream+20),(LONG)stream_flags);
    *(_DWORD *)(stream+16)=0;
    *(_QWORD *)(stream+40)=0;
    *(_QWORD *)(stream+8)=0;
    *(_QWORD *)stream=0;
    *(_DWORD *)(stream+24)=descriptor;
    return stream;
  }
  return 0;
}


//----- (00000001402510E0) ----------------------------------------------------
__int64            wopenfile(sr_anon_49 *FileName, __int16 *a2, int a3, __int64 a4)
{
  int v4; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int OpenFlag[2]; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  int FileHandle; // [rsp+70h] [rbp+18h] BYREF

  v4 = (int)FileName;
  v7 = __acrt_stdio_parse_mode__wchar_t((__int64)&v12, a2);
  v8 = 0;
  *(_QWORD *)OpenFlag = *(_QWORD *)v7;
  if ( (unsigned __int8)*(_DWORD *)(v7 + 8)
    && !(unsigned int)wsopen_s((unsigned int)&FileHandle, v4, OpenFlag[0], a3, 384) )
  {
    ++dword_140404A6C[19064595];
    _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
    v9 = FileHandle;
    *(_DWORD *)(a4 + 16) = 0;
    *(_QWORD *)(a4 + 40) = 0;
    *(_QWORD *)(a4 + 8) = 0;
    *(_QWORD *)a4 = 0;
    v8 = a4;
    *(_DWORD *)(a4 + 24) = v9;
  }
  return v8;
}

// 140266818: using guessed type __int64 __fastcall wsopen_s(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD PermissionFlag);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6B8: using guessed type unsigned int;

//----- (000000014025117C) ----------------------------------------------------
__int64            sub_14025117C(__int64 a1, unsigned int *a2, unsigned int **a3, unsigned int *a4)
{
  unsigned int v6; // ebx

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) != 0 )
  {
    v6 = close_nolock(**a3);
  }
  else
  {
    *errno_sr() = 9;
    v6 = -1;
  }
  sub_140261150(*a4);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402511F0) ----------------------------------------------------
__int64            sub_1402511F0(unsigned int a1, unsigned int **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14025117C((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140251230) ----------------------------------------------------
__int64            _lambda_628dfdc04ba53c8bfc02c9951375f3f5___operator_call(int **a1)
{
  __int64 v1; // rcx

  v1 = **a1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401] + 72 * (v1 & 0x3F) + 56) & 1) != 0 )
    return close_nolock(v1);
  *errno_sr() = 9;
  return 0xFFFFFFFFLL;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025128C) ----------------------------------------------------
__int64            sub_14025128C(unsigned int FileHandle)
{
  __int64 osfhandle; // rbx
  __int64 v3; // rax

  if ( ((__int64 (*)(void))get_osfhandle)() == -1 )
    return 0;
  if ( FileHandle == 1 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 200LL) & 1) != 0
    || FileHandle == 2 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 128LL) & 1) != 0 )
  {
    osfhandle = get_osfhandle(2);
    if ( get_osfhandle(1) == osfhandle )
      return 0;
  }
  v3 = get_osfhandle(FileHandle);
  if ( (unsigned int)((__int64 (           *)(__int64))CloseHandle)(v3) )
    return 0;
  else
    return ((__int64 (*)(void))GetLastError)();
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140261374: using guessed type __int64 __fastcall get_osfhandle(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF350: using guessed type unsigned int;

//----- (000000014025130C) ----------------------------------------------------
__int64            sub_14025130C(int a1)
{
  unsigned int *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < dword_140404A6C[19065657]
      && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
    {
      v5 = a1;
      v6 = a1;
      v2 = (unsigned int *)&v3;
      return sub_14025117C((__int64)&v4, (unsigned int *)&v6, &v2, (unsigned int *)&v5);
    }
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    sub_14024CF6C();
  }
  return 0xFFFFFFFFLL;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402513B0) ----------------------------------------------------
__int64            close_nolock(unsigned int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 osfhandle; // rbx
  __int64 v4; // rax

  v1 = (int)a1;
  if ( get_osfhandle(a1) == -1
    || ((_DWORD)v1 == 1 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 200LL) & 1) != 0
     || (_DWORD)v1 == 2 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 128LL) & 1) != 0)
    && (osfhandle = get_osfhandle(2), get_osfhandle(1) == osfhandle)
    || (v4 = get_osfhandle((unsigned int)v1), (unsigned int)((__int64 (           *)(__int64))CloseHandle)(v4)) )
  {
    v2 = 0;
  }
  else
  {
    v2 = ((__int64 (*)(void))GetLastError)();
  }
  free_osfhnd(v1);
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401] + 72 * (v1 & 0x3F) + 56) = 0;
  if ( !v2 )
    return 0;
  sub_14024D14C(v2);
  return 0xFFFFFFFFLL;
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140261374: using guessed type __int64 __fastcall get_osfhandle(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF350: using guessed type unsigned int;

//----- (0000000140251470) ----------------------------------------------------
int         fileno(FILE *Stream)
{
  if ( Stream )
    return *((_DWORD *)Stream + 6);
  *errno_sr() = 22;
  sub_14024CF6C();
  return -1;
}


//----- (0000000140251498) ----------------------------------------------------
__int64            sub_140251498(FILE *Stream)
{
  void *v2; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdi
  _BYTE *v6; // rdx

  if ( !Stream )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return 0xFFFFFFFFLL;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8((__int64)Stream);
  v2 = *((void **)Stream + 1);
  *(_QWORD *)Stream = (uint64)(uintptr_t)(v2);
  v3 = fileno(Stream);
  v4 = read(v3, v2, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = v4;
  if ( (unsigned int)(v4 + 1) <= 1 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, v4 != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return 0xFFFFFFFFLL;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      v6 = &unk_1403022C0;
    }
    else
    {
      v5 = (__int64)fileno(Stream) >> 6;
      v6 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v5 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (v6[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  --*((_DWORD *)Stream + 4);
  return *(unsigned __int8 *)(*(_QWORD *)Stream)++;
}

// 140251498: using guessed type __int64 __fastcall sub_140251498(FILE *Stream);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402515F4) ----------------------------------------------------
__int64            _acrt_stdio_refill_and_read_wide_nolock_0(FILE *Stream)
{
  int v2; // esi
  unsigned __int8 v3; // bp
  void *v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdi
  _BYTE *v8; // rdx
  unsigned __int8 *v9; // rax
  __int16 v10; // cx
  unsigned __int16 v11; // cx

  if ( !Stream )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFF;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return 0xFFFF;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return 0xFFFF;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8((__int64)Stream);
  v2 = *((_DWORD *)Stream + 4);
  if ( v2 == 1 )
    v3 = **(_BYTE **)Stream;
  else
    v3 = 0;
  v4 = *((void **)Stream + 1);
  *(_QWORD *)Stream = (uint64)(uintptr_t)(v4);
  v5 = fileno(Stream);
  v6 = read(v5, v4, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = v6;
  if ( (unsigned int)(v6 + 1) <= 2 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, v6 != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return 0xFFFF;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      v8 = &unk_1403022C0;
    }
    else
    {
      v7 = (__int64)fileno(Stream) >> 6;
      v8 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (v8[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  v9 = *(unsigned __int8 **)Stream;
  if ( v2 == 1 )
  {
    v10 = *v9;
    --*((_DWORD *)Stream + 4);
    v11 = v3 | (unsigned __int16)(v10 << 8);
    ++*(_QWORD *)Stream;
  }
  else
  {
    v11 = *(_WORD *)v9;
    *((_DWORD *)Stream + 4) -= 2;
    *(_QWORD *)Stream += 2LL;
  }
  return v11;
}

// 1402515F4: using guessed type __int64 __fastcall _acrt_stdio_refill_and_read_wide_nolock_0(FILE *Stream);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140251818) ----------------------------------------------------
__int64            sub_140251818(FILE *Stream)
{
  void *v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbx
  _BYTE *v6; // rdx

  if ( !Stream )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return (unsigned int)-1;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return (unsigned int)-1;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return (unsigned int)-1;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8((__int64)Stream);
  v2 = *((void **)Stream + 1);
  *(_QWORD *)Stream = (uint64)(uintptr_t)(v2);
  v3 = fileno(Stream);
  v4 = read(v3, v2, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = v4;
  if ( (unsigned int)(v4 + 1) <= 1 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, v4 != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return (unsigned int)-1;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      v6 = &unk_1403022C0;
    }
    else
    {
      v5 = (__int64)fileno(Stream) >> 6;
      v6 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v5 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (v6[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  --*((_DWORD *)Stream + 4);
  return *(unsigned __int8 *)(*(_QWORD *)Stream)++;
}

// 140251818: using guessed type __int64 __fastcall sub_140251818(FILE *Stream);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140251984) ----------------------------------------------------
// attributes: thunk
__int64            _acrt_stdio_refill_and_read_wide_nolock(FILE *Stream)
{
  return _acrt_stdio_refill_and_read_wide_nolock_0(Stream);
}

// 1402515F4: using guessed type __int64 __fastcall _acrt_stdio_refill_and_read_wide_nolock_0(FILE *Stream);

//----- (000000014025198C) ----------------------------------------------------
__int64            common_flush_and_write_nolock__char(unsigned __int8 a1, __int64 a2)
{
  int v4; // esi
  bool v6; // al

  v4 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    v6 = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !v6 )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(v4)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251B60(a1, a2) )
    goto LABEL_3;
  return a1;
}


//----- (0000000140251A74) ----------------------------------------------------
__int64            common_flush_and_write_nolock__wchar_t(unsigned __int16 a1, __int64 a2)
{
  int v4; // esi
  bool v6; // al

  v4 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFF;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    v6 = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !v6 )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(v4)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251C44(a1, a2) )
    goto LABEL_3;
  return a1;
}


//----- (0000000140251B60) ----------------------------------------------------
bool            sub_140251B60(char a1, __int64 a2)
{
  int v3; // eax
  int v4; // esi
  char *v5; // rdx
  signed int v6; // edi
  bool v7; // zf
  _BYTE *v8; // rdx
  char Buf; // [rsp+30h] [rbp+8h] BYREF

  Buf = a1;
  v3 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 0xC0) == 0 )
    return write(v3, &Buf, 1u) == 1;
  v4 = 0;
  v5 = *(char **)(a2 + 8);
  v6 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = (uint64)(uintptr_t)(v5 + 1);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 32) - 1;
  if ( v6 <= 0 )
  {
    if ( (unsigned int)(v3 + 2) <= 1 )
      v8 = &unk_1403022C0;
    else
      v8 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v3 >> 6) + 19065401] + 72LL * (v3 & 0x3F));
    if ( (v8[56] & 0x20) != 0 && lseeki64_sr(v3, 0, 2) == -1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
      return 1;
    }
  }
  else
  {
    v4 = write(v3, v5, v6);
  }
  v7 = v4 == v6;
  **(_BYTE **)(a2 + 8) = Buf;
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140251C44) ----------------------------------------------------
bool            sub_140251C44(__int16 a1, __int64 a2)
{
  int v3; // eax
  int v4; // esi
  char *v5; // rdx
  signed int v6; // edi
  bool v7; // zf
  _BYTE *v8; // rdx
  __int16 Buf; // [rsp+30h] [rbp+8h] BYREF

  Buf = a1;
  v3 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 0xC0) == 0 )
    return write(v3, &Buf, 2u) == 2;
  v4 = 0;
  v5 = *(char **)(a2 + 8);
  v6 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = (uint64)(uintptr_t)(v5 + 2);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 32) - 2;
  if ( v6 <= 0 )
  {
    if ( (unsigned int)(v3 + 2) <= 1 )
      v8 = &unk_1403022C0;
    else
      v8 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v3 >> 6) + 19065401] + 72LL * (v3 & 0x3F));
    if ( (v8[56] & 0x20) != 0 && lseeki64_sr(v3, 0, 2) == -1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
      return 1;
    }
  }
  else
  {
    v4 = write(v3, v5, v6);
  }
  v7 = v4 == v6;
  **(_WORD **)(a2 + 8) = Buf;
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140251D2C) ----------------------------------------------------
bool            stream_is_at_end_of_file_nolock(__int64 a1)
{
  __int64 osfhandle; // rax
  __int64 v3; // rbx
  __int64 FileSize; // [rsp+30h] [rbp+8h] BYREF
  __int64 NewFilePointer; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 20) & 8) != 0 )
    return 1;
  if ( (*(_DWORD *)(a1 + 20) & 0xC0) != 0 && *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    return 0;
  osfhandle = get_osfhandle(*(unsigned int *)(a1 + 24));
  v3 = osfhandle;
  if ( osfhandle == -1
    || !(unsigned int)((__int64 (           *)(__int64, _QWORD, __int64 *, __int64))SetFilePointerEx)(
                        osfhandle,
                        0,
                        &NewFilePointer,
                        1)
    || !(unsigned int)((__int64 (           *)(__int64, __int64 *))GetFileSizeEx)(v3, &FileSize) )
  {
    return 0;
  }
  return NewFilePointer == FileSize;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E0E0: invalid function type 'BOOL (__stdcall *GetFileSizeEx)(HANDLE hFile, PLARGE_INTEGER lpFileSize)' has been ignored
// 140261374: using guessed type __int64 __fastcall get_osfhandle(_QWORD);

//----- (0000000140251DA8) ----------------------------------------------------
__int64            sub_140251DA8(unsigned __int8 a1, __int64 a2)
{
  int v4; // esi
  bool v6; // al

  v4 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    v6 = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !v6 )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(v4)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251B60(a1, a2) )
    goto LABEL_3;
  return a1;
}


//----- (0000000140251E94) ----------------------------------------------------
__int64            sub_140251E94(unsigned __int16 a1, __int64 a2)
{
  int v4; // esi
  bool v6; // al

  v4 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFF;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    v6 = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !v6 )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(v4)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251C44(a1, a2) )
    goto LABEL_3;
  return a1;
}


//----- (0000000140251F80) ----------------------------------------------------
__int64            sub_140251F80(int a1, char *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // rbp
  char *v10; // r14
  char *v11; // rbx
  char v12; // al
  char *v13; // r8
  char v14; // cl
  bool v15; // zf
  char v16; // cl
  __int64 v17; // rcx
  char v18; // al
  char Buffer; // [rsp+70h] [rbp+8h] BYREF
  __int64 NumberOfBytesRead; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]

  v3 = a1;
  v4 = (__int64)a1 >> 6;
  v6 = 9LL * (a1 & 0x3F);
  v7 = *(_QWORD *)&dword_140404A6C[2 * v4 + 19065401];
  v8 = *(_QWORD *)(v7 + 72LL * (a1 & 0x3F) + 40);
  v22 = v8;
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(v7 + 8 * v6 + 56) |= 4u;
  else
    *(_BYTE *)(v7 + 8 * v6 + 56) &= ~4u;
  v9 = &a2[a3];
  v10 = a2;
  v11 = a2;
  if ( a2 < &a2[a3] )
  {
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 == 26 )
      {
        v17 = *(_QWORD *)&dword_140404A6C[2 * v4 + 19065401];
        v18 = *(_BYTE *)(v17 + 8 * v6 + 56);
        if ( (v18 & 0x40) != 0 )
        {
          *v11 = 26;
          LODWORD(v11) = (_DWORD)v11 + 1;
        }
        else
        {
          *(_BYTE *)(v17 + 8 * v6 + 56) = v18 | 2;
        }
        return (unsigned int)((_DWORD)v11 - (_DWORD)a2);
      }
      v13 = v10 + 1;
      if ( v12 == 13 )
        break;
      *v11 = v12;
      ++v10;
      ++v11;
LABEL_25:
      if ( v10 >= v9 )
        return (unsigned int)((_DWORD)v11 - (_DWORD)a2);
    }
    if ( v13 < v9 )
    {
      v14 = 13;
      if ( *v13 == 10 )
        v14 = 10;
      v15 = *v13 == 10;
      *v11 = v14;
      v10 += v15 + 1;
      goto LABEL_23;
    }
    ++v10;
    if ( (unsigned int)((__int64 (           *)(__int64, char *, __int64, __int64 *, _QWORD))ReadFile)(
                         v8,
                         &Buffer,
                         1,
                         &NumberOfBytesRead,
                         0)
      && (_DWORD)NumberOfBytesRead )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) & 0x48) != 0 )
      {
        v16 = Buffer;
        if ( Buffer != 10 )
        {
          *v11 = 13;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 58) = v16;
          goto LABEL_23;
        }
LABEL_17:
        *v11 = 10;
LABEL_23:
        ++v11;
        goto LABEL_24;
      }
      if ( Buffer == 10 && v11 == a2 )
        goto LABEL_17;
      lseeki64_nolock(v3, -1, 1u);
      if ( Buffer == 10 )
      {
LABEL_24:
        v8 = v22;
        goto LABEL_25;
      }
    }
    *v11 = 13;
    goto LABEL_23;
  }
  return (unsigned int)((_DWORD)v11 - (_DWORD)a2);
}

// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252140) ----------------------------------------------------
__int64            sub_140252140(int a1, __int16 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r10
  __int16 *v9; // rbp
  __int16 *v10; // r14
  __int16 *v11; // rbx
  __int16 v12; // cx
  __int16 *v13; // rax
  __int16 v14; // dx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 i; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int16 Buffer; // [rsp+80h] [rbp+8h] BYREF
  __int16 v22; // [rsp+88h] [rbp+10h]
  __int64 NumberOfBytesRead; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  v3 = a1;
  v5 = (__int64)a1 >> 6;
  v6 = 9LL * (a1 & 0x3F);
  v7 = *(_QWORD *)&dword_140404A6C[2 * v5 + 19065401];
  v8 = *(_QWORD *)(v7 + 72LL * (a1 & 0x3F) + 40);
  v24 = v8;
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(v7 + 72LL * (a1 & 0x3F) + 56) |= 4u;
  else
    *(_BYTE *)(v7 + 72LL * (a1 & 0x3F) + 56) &= ~4u;
  v9 = &a2[a3];
  v10 = a2;
  v11 = a2;
  while ( v10 < v9 )
  {
    v12 = *v10;
    if ( *v10 == 26 )
    {
      v18 = *(_QWORD *)&dword_140404A6C[2 * v5 + 19065401];
      v19 = *(_BYTE *)(v18 + 8 * v6 + 56);
      if ( (v19 & 0x40) != 0 )
        *v11++ = 26;
      else
        *(_BYTE *)(v18 + 8 * v6 + 56) = v19 | 2;
      return 2 * (unsigned int)(v11 - a2);
    }
    v13 = v10 + 1;
    if ( v12 == 13 )
    {
      if ( v13 < v9 )
      {
        v14 = *v13;
        if ( *v13 == 10 )
          v12 = 10;
        *v11 = v12;
        v15 = 4;
        if ( v14 != 10 )
          v15 = 2;
        v10 = (__int16 *)((char *)v10 + v15);
        ++v11;
        continue;
      }
      ++v10;
      if ( !(unsigned int)((__int64 (           *)(__int64, __int16 *, __int64, __int64 *, _QWORD))ReadFile)(
                            v8,
                            &Buffer,
                            2,
                            &NumberOfBytesRead,
                            0)
        || !(_DWORD)NumberOfBytesRead )
      {
        v8 = v24;
        *v11++ = 13;
        continue;
      }
      v16 = v3 >> 6;
      if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) & 0x48) != 0 )
      {
        if ( Buffer == 10 )
        {
          *v11 = 10;
        }
        else
        {
          v22 = Buffer;
          *v11 = 13;
          for ( i = 0; i < 2; ++i )
            *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v16 + 19065401] + 72 * (v3 & 0x3F) + i + 58) = *((_BYTE *)&v22 + i);
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v16 + 19065401] + 72 * (v3 & 0x3F) + 60) = 10;
        }
        ++v11;
      }
      else if ( Buffer == 10 && v11 == a2 )
      {
        *v11++ = 10;
      }
      else
      {
        lseeki64_nolock(v3, -2, 1u);
        if ( Buffer != 10 )
        {
          v8 = v24;
          *v11++ = 13;
          continue;
        }
      }
      v8 = v24;
    }
    else
    {
      *v11 = v12;
      ++v10;
      ++v11;
    }
  }
  return 2 * (unsigned int)(v11 - a2);
}

// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252424) ----------------------------------------------------
__int64            translate_ansi_or_utf8_nolock(int a1, char *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r9
  char *v11; // rbx
  unsigned int i; // edx
  __int64 v13; // rcx
  char v14; // al
  char v15; // al
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx

  v3 = a1;
  result = sub_140251F80(a1, a2, a3);
  v6 = (int)result;
  if ( (_DWORD)result )
  {
    v7 = v3 & 0x3F;
    v8 = v3 >> 6;
    v9 = 9 * v7;
    v10 = *(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401];
    if ( !*(_BYTE *)(v10 + 72 * v7 + 57) )
      return (unsigned int)v6;
    v11 = &a2[v6 - 1];
    if ( *v11 < 0 )
    {
      for ( i = 1; !byte_140302310[(unsigned __int8)*v11] && i <= 4 && v11 >= a2; ++i )
        --v11;
      v13 = (unsigned __int8)*v11;
      if ( !byte_140302310[v13] )
      {
        *errno_sr() = 42;
        return 0xFFFFFFFFLL;
      }
      if ( byte_140302310[v13] + 1 == i )
      {
        LODWORD(v11) = i + (_DWORD)v11;
      }
      else if ( (*(_BYTE *)(v10 + 72 * v7 + 56) & 0x48) != 0 )
      {
        ++v11;
        *(_BYTE *)(v10 + 72 * v7 + 58) = v13;
        if ( i >= 2 )
        {
          v14 = *v11++;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v9 + 59) = v14;
        }
        if ( i == 3 )
        {
          v15 = *v11;
          LODWORD(v11) = (_DWORD)v11 + 1;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v9 + 60) = v15;
        }
        LODWORD(v11) = (_DWORD)v11 - i;
      }
      else
      {
        lseeki64_nolock(v3, -i, 1u);
      }
    }
    else
    {
      LODWORD(v11) = v6 + (_DWORD)a2;
    }
    v16 = (_DWORD)v11 - (_DWORD)a2;
    v17 = sub_140259504();
    if ( !v17 )
    {
      v19 = ((__int64 (           *)(__int64, _QWORD))GetLastError)(v18, 0);
      sub_14024D14C(v19);
      return 0xFFFFFFFFLL;
    }
    v20 = *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
    *(_BYTE *)(v20 + 8 * v9 + 61) &= ~2u;
    *(_BYTE *)(v20 + 8 * v9 + 61) |= v16 != v17 ? 2 : 0;
    return (unsigned int)(2 * v17);
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140252572: variable 'v18' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402525C0) ----------------------------------------------------
__int64            translate_utf16_from_console_nolock(int a1, __int16 *a2, __int64 a3)
{
  __int16 *v3; // r10
  __int64 v4; // r11
  __int16 *v6; // r8
  __int16 *v7; // rax
  __int16 v8; // dx
  __int64 v9; // rcx

  v3 = &a2[a3];
  v4 = a1;
  v6 = a2;
  v7 = a2;
  if ( a2 < v3 )
  {
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 == 26 )
        break;
      if ( v8 == 13 && v6 + 1 < v3 && v6[1] == 10 )
      {
        v8 = 10;
        v9 = 4;
      }
      else
      {
        v9 = 2;
      }
      v6 = (__int16 *)((char *)v6 + v9);
      *v7++ = v8;
      if ( v6 >= v3 )
        return 2 * (unsigned int)(v7 - a2);
    }
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401] + 72 * (v4 & 0x3F) + 56) |= 2u;
  }
  return 2 * (unsigned int)(v7 - a2);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252650) ----------------------------------------------------
int         read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  __int64 v6; // r15
  int nolock; // ebx

  if ( FileHandle == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= dword_140404A6C[19065657]
    || (v6 = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    goto LABEL_13;
  }
  if ( MaxCharCount > 0x7FFFFFFF )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 22;
LABEL_13:
    sub_14024CF6C();
    return -1;
  }
  sub_140261068(FileHandle);
  nolock = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
  {
    nolock = read_nolock(FileHandle, (__int16 *)DstBuf, MaxCharCount);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)sub_14024D19C() = 0;
  }
  sub_140261150(FileHandle);
  return nolock;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025276C) ----------------------------------------------------
__int64            read_nolock(int a1, __int16 *a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rcx
  char v9; // al
  int v10; // r11d
  __int16 *v11; // rbx
  unsigned int v12; // ebp
  __int16 *v13; // r15
  __int64 v14; // rax
  bool v15; // zf
  int v16; // edi
  char v17; // al
  char v18; // cl
  char v19; // cl
  int v20; // eax
  int v21; // edi
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // r8
  __int16 *v26; // r10
  __int16 *v27; // rax
  __int16 *v28; // rdi
  __int16 *v29; // r9
  __int16 v30; // cx
  __int64 v31; // r8
  __int64 Mode; // [rsp+30h] [rbp-68h] BYREF
  __int64 hConsoleHandle; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h]
  __int16 *v36; // [rsp+50h] [rbp-48h]
  char v37; // [rsp+A0h] [rbp+8h]
  unsigned int NumberOfCharsRead; // [rsp+B8h] [rbp+20h] BYREF

  if ( a1 != -2 )
  {
    if ( a1 >= 0
      && a1 < dword_140404A6C[19065657]
      && (v5 = a1 & 0x3F,
          v35 = 1,
          v6 = (__int64)a1 >> 6,
          v34 = v6,
          v7 = 9 * v5,
          v8 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19065401],
          v9 = *(_BYTE *)(v8 + 72 * v5 + 56),
          (v9 & 1) != 0) )
    {
      if ( a3 <= 0x7FFFFFFF )
      {
        if ( !a3 || (v9 & 2) != 0 )
          return 0;
        if ( a2 )
        {
          v10 = *(char *)(v8 + 8 * v7 + 57);
          v11 = nullptr;
          hConsoleHandle = *(_QWORD *)(v8 + 8 * v7 + 40);
          v37 = v10;
          if ( v10 == 1 )
          {
            if ( (a3 & 1) != 0 )
            {
LABEL_14:
              *(_DWORD *)sub_14024D19C() = 0;
              *errno_sr() = 22;
              sub_14024CF6C();
LABEL_38:
              v21 = -1;
              goto LABEL_39;
            }
            v12 = a3 >> 1;
            if ( a3 >> 1 < 4 )
              v12 = 4;
            v11 = (__int16 *)malloc_base();
            free_base(nullptr);
            free_base(nullptr);
            v13 = v11;
            if ( !v11 )
            {
              *errno_sr() = 12;
              *(_DWORD *)sub_14024D19C() = 8;
              goto LABEL_38;
            }
            v14 = lseeki64_nolock(a1, 0, 1u);
            v6 = v34;
            LOBYTE(v10) = v37;
            *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v34 + 19065401] + 8 * v7 + 48) = v14;
            v8 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19065401];
          }
          else
          {
            if ( v10 == 2 && (a3 & 1) != 0 )
              goto LABEL_14;
            v12 = a3;
            v13 = a2;
          }
          v15 = (*(_BYTE *)(v8 + 8 * v7 + 56) & 0x48) == 0;
          v16 = 0;
          v36 = v13;
          if ( !v15 )
          {
            v17 = *(_BYTE *)(v8 + 8 * v7 + 58);
            if ( v17 != 10 )
            {
              *(_BYTE *)v13 = v17;
              --v12;
              v13 = (__int16 *)((char *)v13 + 1);
              v16 = 1;
              *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 58) = 10;
              if ( (_BYTE)v10 )
              {
                v18 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 59);
                if ( v18 != 10 )
                {
                  if ( v12 )
                  {
                    *(_BYTE *)v13 = v18;
                    v16 = 2;
                    v13 = (__int16 *)((char *)v13 + 1);
                    --v12;
                    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 59) = 10;
                    if ( (_BYTE)v10 == 1 )
                    {
                      v19 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 60);
                      if ( v19 != 10 )
                      {
                        if ( v12 )
                        {
                          *(_BYTE *)v13 = v19;
                          v16 = 3;
                          v13 = (__int16 *)((char *)v13 + 1);
                          --v12;
                          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 60) = 10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( isatty(a1)
            && *(char *)(*(_QWORD *)&dword_140404A6C[2 * v34 + 19065401] + 8 * v7 + 56) < 0
            && (unsigned int)((__int64 (           *)(__int64, __int64 *))GetConsoleMode)(hConsoleHandle, &Mode) )
          {
            if ( v37 == 2 )
            {
              if ( !(unsigned int)((__int64 (           *)(__int64, __int16 *, _QWORD, unsigned int *, _QWORD))ReadConsoleW)(
                                    hConsoleHandle,
                                    v13,
                                    v12 >> 1,
                                    &NumberOfCharsRead,
                                    0) )
              {
                v20 = ((__int64 (*)(void))GetLastError)();
LABEL_37:
                sub_14024D14C(v20);
                goto LABEL_38;
              }
              v21 = v16 + 2 * NumberOfCharsRead;
              goto LABEL_45;
            }
          }
          else
          {
            LOBYTE(v35) = 0;
          }
          if ( !(unsigned int)((__int64 (           *)(__int64, __int16 *, _QWORD, unsigned int *, _QWORD))ReadFile)(
                                hConsoleHandle,
                                v13,
                                v12,
                                &NumberOfCharsRead,
                                0)
            || NumberOfCharsRead > a3 )
          {
            v20 = ((__int64 (*)(void))GetLastError)();
            if ( v20 == 5 )
            {
              *errno_sr() = 9;
              *(_DWORD *)sub_14024D19C() = 5;
              goto LABEL_38;
            }
            if ( v20 == 109 )
            {
              v21 = 0;
              goto LABEL_39;
            }
            goto LABEL_37;
          }
          v21 = NumberOfCharsRead + v16;
LABEL_45:
          v23 = v34;
          if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * v34 + 19065401] + 8 * v7 + 56) < 0 )
          {
            if ( v37 == 2 )
            {
              v25 = (unsigned __int64)v21 >> 1;
              if ( (_BYTE)v35 )
              {
                v26 = v36;
                v27 = v36;
                v28 = v36;
                v29 = &v36[v25];
                if ( v36 < v29 )
                {
                  while ( 1 )
                  {
                    v30 = *v27;
                    if ( *v27 == 26 )
                      break;
                    if ( v30 == 13 && v27 + 1 < v29 && v27[1] == 10 )
                    {
                      v30 = 10;
                      v31 = 4;
                    }
                    else
                    {
                      v31 = 2;
                    }
                    v27 = (__int16 *)((char *)v27 + v31);
                    *v28++ = v30;
                    if ( v27 >= v29 )
                      goto LABEL_60;
                  }
                  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v23 + 19065401] + 8 * v7 + 56) |= 2u;
                }
LABEL_60:
                v21 = 2 * (v28 - v26);
                goto LABEL_39;
              }
              v24 = sub_140252140(a1, v36, v25);
            }
            else
            {
              v24 = translate_ansi_or_utf8_nolock(a1, (char *)v13, v21);
            }
            v21 = v24;
          }
LABEL_39:
          free_base(v11);
          return (unsigned int)v21;
        }
      }
      *(_DWORD *)sub_14024D19C() = 0;
      *errno_sr() = 22;
    }
    else
    {
      *(_DWORD *)sub_14024D19C() = 0;
      *errno_sr() = 9;
    }
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  *(_DWORD *)sub_14024D19C() = 0;
  *errno_sr() = 9;
  return 0xFFFFFFFFLL;
}

// 14026E0D0: invalid function type 'BOOL (__stdcall *GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode)' has been ignored
// 14026E0C8: invalid function type 'BOOL (__stdcall *ReadConsoleW)(HANDLE hConsoleInput, LPVOID lpBuffer, DWORD nNumberOfCharsToRead, LPDWORD lpNumberOfCharsRead, PCONSOLE_READCONSOLE_CONTROL pInputControl)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored
// 14025293C: conditional instruction was optimized away because ebp.4!=0
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252BC4) ----------------------------------------------------
__int64            sub_140252BC4(int a1, int a2, unsigned int a3)
{
  __int64 v6; // rsi
  unsigned int v7; // edi

  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    return 0xFFFFFFFFLL;
  }
  if ( a1 < 0
    || a1 >= dword_140404A6C[19065657]
    || (v6 = (__int64)a1 >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  sub_140261068(a1);
  v7 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    v7 = sub_140252DA0(a1, a2, a3);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)sub_14024D19C() = 0;
  }
  sub_140261150(a1);
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252CB0) ----------------------------------------------------
__int64            lseeki64_sr(int a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi

  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    return -1;
  }
  if ( a1 < 0
    || a1 >= dword_140404A6C[19065657]
    || (v6 = (__int64)a1 >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    sub_14024CF6C();
    return -1;
  }
  sub_140261068(a1);
  v7 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    v7 = lseeki64_nolock(a1, a2, a3);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)sub_14024D19C() = 0;
  }
  sub_140261150(a1);
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252DA0) ----------------------------------------------------
__int64            sub_140252DA0(unsigned int a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 osfhandle; // rax
  __int64 v7; // rbx
  __int64 result; // rax
  int v9; // eax
  __m128d NewFilePointer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = (int)a1;
  v5 = a2;
  osfhandle = get_osfhandle(a1);
  v7 = osfhandle;
  if ( osfhandle == -1 )
  {
    *errno_sr() = 9;
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, __m128d *, __int64))SetFilePointerEx)(
                        osfhandle,
                        0,
                        &NewFilePointer,
                        1)
    || (v11 = 0,
        !(unsigned int)((__int64 (           *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(v7, v5, &v11, a3)) )
  {
    v9 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v9);
    return 0xFFFFFFFFLL;
  }
  result = v11;
  if ( v11 > 0x7FFFFFFF )
  {
    ((void (           *)(__int64, _QWORD, _QWORD, _QWORD))SetFilePointerEx)(
      v7,
      *(_QWORD *)&SR_VEC_LANES(128, NewFilePointer, f64)[0],
      0,
      0);
    *errno_sr() = 22;
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)v11 == -1 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) &= ~2u;
  return result;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140261374: using guessed type __int64 __fastcall get_osfhandle(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252E94) ----------------------------------------------------
__int64            lseeki64_nolock(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 osfhandle; // rax
  __int64 result; // rax
  int v8; // eax
  __int64 NewFilePointer; // [rsp+48h] [rbp+20h] BYREF

  v3 = (int)a1;
  osfhandle = get_osfhandle(a1);
  if ( osfhandle == -1 )
  {
    *errno_sr() = 9;
    return -1;
  }
  if ( !(unsigned int)((__int64 (           *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(
                        osfhandle,
                        a2,
                        &NewFilePointer,
                        a3) )
  {
    v8 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v8);
    return -1;
  }
  result = NewFilePointer;
  if ( NewFilePointer == -1 )
    return -1;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) &= ~2u;
  return result;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140261374: using guessed type __int64 __fastcall get_osfhandle(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140252F30) ----------------------------------------------------
__int64            sub_140252F30(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __m128d NewFilePointer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, __m128d *, __int64))SetFilePointerEx)(
                        a1,
                        0,
                        &NewFilePointer,
                        1)
    || (v9 = 0,
        !(unsigned int)((__int64 (           *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(a1, v3, &v9, a3)) )
  {
    v6 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v6);
    return 0xFFFFFFFFLL;
  }
  if ( v9 > 0x7FFFFFFF )
  {
    ((void (           *)(__int64, _QWORD, _QWORD, _QWORD))SetFilePointerEx)(
      a1,
      *(_QWORD *)&SR_VEC_LANES(128, NewFilePointer, f64)[0],
      0,
      0);
    *errno_sr() = 22;
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v9;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140252FD0) ----------------------------------------------------
__int64            sub_140252FD0(void *     a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  __int64 NewFilePointer; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned int)((__int64 (           *)(void *    , __int64, __int64 *, _QWORD))SetFilePointerEx)(
                       a1,
                       a2,
                       &NewFilePointer,
                       a3) )
    return NewFilePointer;
  v3 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v3);
  return -1;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140253014) ----------------------------------------------------
// attributes: thunk
__int64         lseeki64_sr_dup2(int FileHandle, __int64 Offset, int Origin)
{
  return _lseeki64(FileHandle, Offset, Origin);
}


//----- (000000014025301C) ----------------------------------------------------
// attributes: thunk
__int64            lseeki64_nolock_dup2(unsigned int a1, __int64 a2, unsigned int a3)
{
  return lseeki64_nolock(a1, a2, a3);
}


//----- (0000000140253024) ----------------------------------------------------
__int64            write_binary_nolock(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r9
  __int64 v7; // rcx

  v6 = a1 + 4;
  v7 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(unsigned int)((__int64 (           *)(__int64, __int64, _QWORD, __int64, _QWORD))WriteFile)(v7, a3, a4, v6, 0) )
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  return a1;
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140253090) ----------------------------------------------------
__int64            write_double_translated_ansi_nolock(_QWORD *a1, int a2,      __m128i *a3, unsigned int a4)
{
  __int64 v4; // rbx
       __m128i *v5; // rdi
       __m128i *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r12
       __m128i *v9; // rsi
  int v10; // edx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
       char **v14; // r15
  int v15; // edx
  __int64 v16; // r9
  __int64 i; // rdi
  __int64 v18; // r8
  int v19; // r15d
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r9
  _BYTE *v23; // rcx
  __int64 j; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdi
       char **v29; // rbx
  __int64 v30; // rdx
  char v31; // cl
  __int64 v32; // r8
  __int8 v33; // al
  sr_anon_49 *v34; // rdx
  unsigned int v35; // eax
  unsigned int v36; // edi
  int v37; // r15d
  int v38; // edx
  __int8 *v39; // rsi
  char v40; // al
  __int64 v41; // rcx
  int v42; // ebx
  bool v43; // zf
  _QWORD *v44; // rax
  int v45; // ecx
  int v47; // r9d
  __int64 v48; // r8
  __int64 v49; // r13
  __int64 v50; // r10
  __int8 v51; // al
  __int64 v52; // rcx
  __int8 v53; // al
  __int64 v54; // rcx
  __int64 v55; // [rsp+0h] [rbp-D9h] BYREF
  __int64 v56; // [rsp+28h] [rbp-B1h]
  __int16 v57[2]; // [rsp+40h] [rbp-99h] BYREF
  int DstCh; // [rsp+44h] [rbp-95h] BYREF
  __int64 NumberOfBytesWritten; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v60[3]; // [rsp+50h] [rbp-89h] BYREF
  char v61; // [rsp+68h] [rbp-71h]
  __int64 v62; // [rsp+70h] [rbp-69h]
  unsigned int v63; // [rsp+80h] [rbp-59h]
  int v64; // [rsp+84h] [rbp-55h]
  __int64 v65; // [rsp+88h] [rbp-51h]
       __m128i *v66; // [rsp+90h] [rbp-49h]
  __int64 hFile; // [rsp+98h] [rbp-41h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-39h] BYREF
  char *v69; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int64 v70; // [rsp+B0h] [rbp-29h] BYREF
       __m128i *v71; // [rsp+B8h] [rbp-21h] BYREF
       __m128i *v72; // [rsp+C0h] [rbp-19h]
  __int64 v73; // [rsp+C8h] [rbp-11h]
  __int64 v74; // [rsp+D0h] [rbp-9h]
  _QWORD *v75; // [rsp+D8h] [rbp-1h]
  _BYTE v76[8]; // [rsp+E0h] [rbp+7h] BYREF
  _BYTE v77[8]; // [rsp+E8h] [rbp+Fh] BYREF
  char Buffer; // [rsp+F0h] [rbp+17h] BYREF
  __int64 v79; // [rsp+F8h] [rbp+1Fh]

  v4 = a2;
  v5 = a3;
  v75 = a1;
  v72 = a3;
  v6 = (     __m128i *)((char *)a3 + a4);
  v74 = a2;
  v66 = v6;
  v7 = 9LL * (a2 & 0x3F);
  v8 = (__int64)a2 >> 6;
  hFile = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 72LL * (a2 & 0x3F) + 40);
  v63 = ((__int64 (*)(void))GetConsoleCP)();
  sub_140213644((_LocaleUpdate *)v60, nullptr);
  v65 = 0;
  v62 = 0;
  v9 = v5;
  v10 = *(_DWORD *)(v60[1] + 12LL);
  v64 = v10;
  if ( v5 >= v6 )
  {
LABEL_44:
    v43 = v61 == 0;
    goto LABEL_45;
  }
  v11 = v4;
  v12 = HIDWORD(v62);
  v13 = v11 >> 6;
  v73 = v13;
  while ( 1 )
  {
    LODWORD(v14) = 1;
    LOBYTE(v57[0]) = SR_VEC_PTR_LANES(128, v9, i8)[0];
    DstCh = 0;
    if ( v10 == 65001 )
    {
      v15 = 0;
      v16 = *(_QWORD *)&dword_140404A6C[2 * v13 + 19065401];
      for ( i = 0; i < 5; ++i )
      {
        if ( !*(_BYTE *)(v16 + 8 * v7 + i + 62) )
          break;
        ++v15;
      }
      if ( i <= 0 )
      {
        v27 = (char *)v6 - (char *)v9;
        v28 = byte_140302310[SR_VEC_PTR_LANES(128, v9, u8)[0]];
        if ( (int)v28 + 1 <= (char *)v6 - (char *)v9 )
        {
          v70 = 0;
          v71 = v9;
          v29 = (     char **)((unsigned int)((_DWORD)v28 == 3) + 1);
          if ( __crt_mbstring____mbsrtowcs_utf8((sr_anon_115 *)&DstCh, (char **)&v71, v29, (unsigned int *)&v70) == -1 )
            goto LABEL_54;
          v5 = (     __m128i *)((char *)v9 + v28);
          LODWORD(v14) = (_DWORD)v29;
          goto LABEL_29;
        }
        v47 = 0;
        if ( v27 > 0 )
        {
          v48 = 0;
          v49 = v74 & 0x3F;
          v50 = v74 >> 6;
          do
          {
            v51 = SR_VEC_PTR_LANES(128, v9, i8)[v48];
            ++v47;
            v52 = v48 + *(_QWORD *)&dword_140404A6C[2 * v50 + 19065401];
            ++v48;
            *(_BYTE *)(v52 + 72 * v49 + 62) = v51;
          }
          while ( v47 < v27 );
        }
        v42 = v27 + v12;
      }
      else
      {
        v18 = (char *)v66 - (char *)v9;
        v19 = byte_140302310[*(unsigned __int8 *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v7 + 62)] + 1;
        v20 = v19 - v15;
        if ( v19 - v15 <= (char *)v66 - (char *)v9 )
        {
          v21 = 0;
          v22 = v16 - (_QWORD)v76;
          do
          {
            v23 = &v76[v21++];
            *v23 = v23[8 * v7 + 62 + v22];
          }
          while ( v21 < i );
          if ( v20 > 0 )
            sub_1401FC920((__m128i *)&v76[i], v9, v20);
          for ( j = 0; j < i; ++j )
          {
            v25 = j + *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
            *(_BYTE *)(v25 + 8 * v7 + 62) = 0;
          }
          v68 = 0;
          v69 = v76;
          v14 = (     char **)((unsigned int)(v19 == 4) + 1);
          if ( __crt_mbstring____mbsrtowcs_utf8((sr_anon_115 *)&DstCh, &v69, v14, (unsigned int *)&v68) == -1 )
            goto LABEL_54;
          v26 = v20 - 1;
          v6 = v66;
          v5 = (     __m128i *)((char *)v9 + v26);
          goto LABEL_29;
        }
        v38 = 0;
        if ( v18 > 0 )
        {
          v39 = &SR_VEC_PTR_LANES(128, v9, i8)[-i];
          do
          {
            v40 = v39[i];
            ++v38;
            v41 = i + *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
            ++i;
            *(_BYTE *)(v41 + 8 * v7 + 62) = v40;
          }
          while ( v38 < v18 );
          v12 = HIDWORD(v62);
        }
        v42 = v18 + v12;
      }
      HIDWORD(v62) = v42;
      goto LABEL_44;
    }
    v30 = *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
    v31 = *(_BYTE *)(v30 + 8 * v7 + 61);
    if ( (v31 & 4) != 0 )
    {
      v77[0] = *(_BYTE *)(v30 + 8 * v7 + 62);
      v32 = 2;
      v33 = SR_VEC_PTR_LANES(128, v9, i8)[0];
      *(_BYTE *)(v30 + 8 * v7 + 61) = v31 & 0xFB;
      v34 = (sr_anon_49 *)v77;
      v77[1] = v33;
    }
    else
    {
      if ( (sub_140256DC0()[SR_VEC_PTR_LANES(128, v9, u8)[0]] & 0x8000u) == 0 )
      {
        v32 = 1;
      }
      else
      {
        v5 = (     __m128i *)((char *)v5 + 1);
        if ( v5 >= v6 )
        {
          v53 = SR_VEC_PTR_LANES(128, v9, i8)[0];
          v54 = *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
          HIDWORD(v62) = v12 + 1;
          *(_BYTE *)(v54 + 8 * v7 + 62) = v53;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v7 + 61) |= 4u;
          v43 = v61 == 0;
          goto LABEL_45;
        }
        v32 = 2;
      }
      v34 = (sr_anon_49 *)v9;
    }
    if ( (unsigned int)sub_140254140((sr_anon_115 *)&DstCh, v34, (char *)v32) == -1 )
      goto LABEL_54;
LABEL_29:
    v9 = (     __m128i *)&SR_VEC_PTR_LANES(128, v5, i8)[1];
    LODWORD(v56) = 5;
    v35 = sub_140258A84(v63, 0, (__int64)&DstCh, (unsigned int)v14, (__int64)&Buffer, v56, 0, 0);
    v36 = v35;
    if ( !v35 )
      goto LABEL_56;
    if ( !(unsigned int)((__int64 (           *)(__int64, char *, _QWORD, __int64 *, _QWORD))WriteFile)(
                          hFile,
                          &Buffer,
                          v35,
                          &NumberOfBytesWritten,
                          0) )
    {
      LODWORD(v62) = ((__int64 (*)(void))GetLastError)();
LABEL_56:
      v43 = v61 == 0;
      goto LABEL_45;
    }
    v37 = v65;
    v12 = (_DWORD)v9 - (_DWORD)v72 + v65;
    HIDWORD(v62) = v12;
    if ( (unsigned int)NumberOfBytesWritten < v36 )
      goto LABEL_44;
    if ( LOBYTE(v57[0]) == 10 )
      break;
LABEL_36:
    v5 = v9;
    if ( v9 >= v6 )
      goto LABEL_44;
    v13 = v73;
    v10 = v64;
  }
  v57[0] = 13;
  if ( (unsigned int)((__int64 (           *)(__int64, __int16 *, __int64, __int64 *, _QWORD))WriteFile)(
                       hFile,
                       v57,
                       1,
                       &NumberOfBytesWritten,
                       0) )
  {
    if ( !(_DWORD)NumberOfBytesWritten )
      goto LABEL_44;
    ++v12;
    v65 = (unsigned int)(v37 + 1);
    HIDWORD(v62) = v12;
    goto LABEL_36;
  }
  LODWORD(v62) = ((__int64 (*)(void))GetLastError)();
LABEL_54:
  v43 = v61 == 0;
LABEL_45:
  if ( !v43 )
    *(_DWORD *)(v60[0] + 936LL) &= ~2u;
  v44 = v75;
  v45 = v65;
  *v75 = v62;
  *((_DWORD *)v44 + 2) = v45;
  return sub_1401F8B20((unsigned __int64)&v55 ^ v79);
}

// 14026E0C0: invalid function type 'UINT (__stdcall *GetConsoleCP)()' has been ignored
// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 1402531D1: conditional instruction was optimized away because rdi.8>=1
// 140253217: conditional instruction was optimized away because rdi.8>=1
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140253560) ----------------------------------------------------
__int64            sub_140253560(__int64 a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 *v3; // rbp
  unsigned __int16 *v4; // rdi
  unsigned __int16 v6; // si

  v3 = (unsigned __int16 *)((char *)a2 + a3);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a2;
  if ( a2 < v3 )
  {
    while ( 1 )
    {
      v6 = *v4;
      if ( (unsigned __int16)putwch_nolock(*v4) != v6 )
        break;
      *(_DWORD *)(a1 + 4) += 2;
      if ( v6 == 10 )
      {
        if ( (unsigned __int16)putwch_nolock(13) != 13 )
          break;
        ++*(_DWORD *)(a1 + 4);
        ++*(_DWORD *)(a1 + 8);
      }
      if ( ++v4 >= v3 )
        return a1;
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return a1;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 1402670F8: using guessed type __int64 __fastcall putwch_nolock(_QWORD);

//----- (00000001402535F8) ----------------------------------------------------
bool            write_requires_double_translation_nolock(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  bool result; // al
  __int64 Mode; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  result = isatty(a1)
        && (v2 = v1 & 0x3F,
            v3 = v1 >> 6,
            v4 = 9 * v2,
            *(char *)(*(_QWORD *)&dword_140404A6C[2 * v3 + 19065401] + 72 * v2 + 56) < 0)
        && (*(_QWORD *)(*(_QWORD *)(sub_140255A70() + 144) + 312LL)
         || *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v3 + 19065401] + 8 * v4 + 57))
        && (unsigned int)((__int64 (           *)(_QWORD, __int64 *))GetConsoleMode)(
                           *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v3 + 19065401] + 8 * v4 + 40),
                           &Mode);
  return result;
}

// 14026E0D0: invalid function type 'BOOL (__stdcall *GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140253688) ----------------------------------------------------
__int64 write_text_ansi_nolock(__int64 a1, int a2, char *a3, int a4, ...)
{
  char *v5; // rbp
  char *v6; // rsi
  __int64 v7; // r14
  char *v8; // rbx
  char v9; // al
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // [rsp-20h] [rbp-28B8h] BYREF
  unsigned int v14[4]; // [rsp+10h] [rbp-2888h] BYREF
  _BYTE v15[5119]; // [rsp+20h] [rbp-2878h] BYREF
  char v16; // [rsp+141Fh] [rbp-1479h] BYREF
  __int64 v17; // [rsp+1420h] [rbp-1478h]

  v5 = &a3[a4];
  v6 = a3;
  v7 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 < v5 )
  {
    while ( 1 )
    {
      v8 = v15;
      do
      {
        if ( v6 >= v5 )
          break;
        v9 = *v6++;
        if ( v9 == 10 )
        {
          ++*(_DWORD *)(a1 + 8);
          *v8++ = 13;
        }
        *v8++ = v9;
      }
      while ( v8 < &v16 );
      v10 = (_DWORD)v8 - (unsigned int)v15;
      if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *, _QWORD, unsigned int *, _QWORD))WriteFile)(
                            v7,
                            v15,
                            v10,
                            v14,
                            0) )
        break;
      v11 = v14[0];
      *(_DWORD *)(a1 + 4) += v14[0];
      if ( v11 < v10 || v6 >= v5 )
        return sub_1401F8B20((unsigned __int64)&v13 ^ v17);
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return sub_1401F8B20((unsigned __int64)&v13 ^ v17);
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025378C) ----------------------------------------------------
__int64 write_text_utf16le_nolock(__int64 a1, int a2, __int16 *a3, unsigned int a4, ...)
{
  __int16 *v5; // rbp
  __int16 *v6; // rsi
  __int64 v7; // r14
  char *v8; // rbx
  __int16 v9; // ax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // [rsp-20h] [rbp-28B8h] BYREF
  _DWORD v14[4]; // [rsp+10h] [rbp-2888h] BYREF
  _BYTE v15[5118]; // [rsp+20h] [rbp-2878h] BYREF
  __int16 v16; // [rsp+141Eh] [rbp-147Ah] BYREF
  __int64 v17; // [rsp+1420h] [rbp-1478h]

  v5 = (__int16 *)((char *)a3 + a4);
  v6 = a3;
  v7 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 < v5 )
  {
    while ( 1 )
    {
      v8 = v15;
      do
      {
        if ( v6 >= v5 )
          break;
        v9 = *v6++;
        if ( v9 == 10 )
        {
          *(_DWORD *)(a1 + 8) += 2;
          *(_WORD *)v8 = 13;
          v8 += 2;
        }
        *(_WORD *)v8 = v9;
        v8 += 2;
      }
      while ( v8 < (char *)&v16 );
      v10 = 2 * (((intptr_t)((uintptr_t)(v8) - (uintptr_t)(v15))) >> 1);
      if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *, _QWORD, _DWORD *, _QWORD))WriteFile)(
                            v7,
                            v15,
                            v10,
                            v14,
                            0) )
        break;
      v11 = v14[0];
      *(_DWORD *)(a1 + 4) += v14[0];
      if ( v11 < v10 || v6 >= v5 )
        return sub_1401F8B20((unsigned __int64)&v13 ^ v17);
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return sub_1401F8B20((unsigned __int64)&v13 ^ v17);
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402538A8) ----------------------------------------------------
__int64            write_text_utf8_nolock(__int64 a1, int a2, __int16 *a3, unsigned int a4)
{
  __int16 *v5; // r14
  int v6; // r15d
  __int16 *v7; // rdi
  __int64 v8; // r12
  bool v9; // cf
  char *v10; // rax
  __int16 v11; // cx
  unsigned int v12; // ebp
  unsigned int v13; // esi
  __int64 v15; // [rsp-20h] [rbp-2908h] BYREF
  __int64 v16; // [rsp+8h] [rbp-28E0h]
  _DWORD v17[4]; // [rsp+20h] [rbp-28C8h] BYREF
  _BYTE v18[1704]; // [rsp+30h] [rbp-28B8h] BYREF
  char v19; // [rsp+6D8h] [rbp-2210h] BYREF
  _BYTE v20[3424]; // [rsp+6E0h] [rbp-2208h] BYREF
  __int64 v21; // [rsp+1440h] [rbp-14A8h]

  v5 = (__int16 *)((char *)a3 + a4);
  v6 = (int)a3;
  v7 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  v9 = a3 < v5;
  *(_DWORD *)(a1 + 8) = 0;
LABEL_2:
  if ( v9 )
  {
    v10 = v18;
    do
    {
      if ( v7 >= v5 )
        break;
      v11 = *v7++;
      if ( v11 == 10 )
      {
        *(_WORD *)v10 = 13;
        v10 += 2;
      }
      *(_WORD *)v10 = v11;
      v10 += 2;
    }
    while ( v10 < &v19 );
    LODWORD(v16) = 3413;
    v12 = sub_140258A84(0xFDE9u, 0, (__int64)v18, (unsigned int)(((intptr_t)((uintptr_t)(v10) - (uintptr_t)(v18))) >> 1), (__int64)v20, v16, 0, 0);
    if ( v12 )
    {
      v13 = 0;
      while ( (unsigned int)((__int64 (           *)(__int64, _BYTE *, _QWORD, _DWORD *, _QWORD))WriteFile)(
                              v8,
                              &v20[v13],
                              v12 - v13,
                              v17,
                              0) )
      {
        v13 += v17[0];
        if ( v13 >= v12 )
        {
          *(_DWORD *)(a1 + 4) = (_DWORD)v7 - v6;
          v9 = v7 < v5;
          goto LABEL_2;
        }
      }
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return sub_1401F8B20((unsigned __int64)&v15 ^ v21);
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140253A18) ----------------------------------------------------
int         write(int FileHandle,      void *Buf, unsigned int MaxCharCount)
{
  __int64 v6; // rsi
  int v7; // edi

  if ( FileHandle == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= dword_140404A6C[19065657]
    || (v6 = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 9;
    sub_14024CF6C();
    return -1;
  }
  sub_140261068(FileHandle);
  v7 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
  {
    v7 = sub_140253B04(FileHandle, (__m128i *)Buf, MaxCharCount);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)sub_14024D19C() = 0;
  }
  sub_140261150(FileHandle);
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140253B04) ----------------------------------------------------
__int64            sub_140253B04(signed int a1, __m128i *a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rcx
  char v10; // si
  int v11; // ebx
  int v12; // esi
  __m128i *v13; // r12
  __m128i *v14; // r14
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 NumberOfBytesWritten; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+38h] [rbp-28h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int128 Mode; // [rsp+50h] [rbp-10h] BYREF

  v3 = a3;
  if ( !a3 )
    return 0;
  if ( !a2
    || (v7 = (__int64)a1 >> 6,
        v8 = 9LL * (a1 & 0x3F),
        v9 = *(_QWORD *)&dword_140404A6C[2 * v7 + 19065401],
        v10 = *(_BYTE *)(v9 + 72LL * (a1 & 0x3F) + 57),
        (unsigned __int8)(v10 - 1) <= 1u)
    && (a3 & 1) != 0 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(v9 + 72LL * (a1 & 0x3F) + 56) & 0x20) != 0 )
    lseeki64_nolock(a1, 0, 2u);
  v11 = 0;
  v22 = 0;
  if ( !isatty(a1)
    || *(char *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (a1 & 0x3F) + 56) >= 0
    || !*(_QWORD *)(*(_QWORD *)(sub_140255A70() + 144) + 312LL)
    && !*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (a1 & 0x3F) + 57)
    || !(unsigned int)((__int64 (           *)(_QWORD, __int128 *))GetConsoleMode)(
                        *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (a1 & 0x3F) + 40),
                        &Mode) )
  {
    v18 = *(_QWORD *)&dword_140404A6C[2 * v7 + 19065401];
    if ( *(char *)(v18 + 72LL * (a1 & 0x3F) + 56) >= 0 )
    {
      v19 = *(_QWORD *)(v18 + 72LL * (a1 & 0x3F) + 40);
      NumberOfBytesWritten = 0;
      v21 = 0;
      if ( !(unsigned int)((__int64 (           *)(__int64, __m128i *, _QWORD, char *, _QWORD))WriteFile)(
                            v19,
                            a2,
                            (unsigned int)v3,
                            (char *)&NumberOfBytesWritten + 4,
                            0) )
        LODWORD(NumberOfBytesWritten) = ((__int64 (*)(void))GetLastError)();
      v11 = v21;
LABEL_38:
      v17 = NumberOfBytesWritten;
      goto LABEL_39;
    }
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v16 = write_text_utf8_nolock((__int64)&NumberOfBytesWritten, a1, SR_VEC_PTR_LANES(128, a2, i16), v3);
      }
      else
      {
        if ( v10 != 2 )
          goto LABEL_40;
        v16 = write_text_utf16le_nolock((__int64)&NumberOfBytesWritten, a1, SR_VEC_PTR_LANES(128, a2, i16), v3);
      }
    }
    else
    {
      v16 = write_text_ansi_nolock((__int64)&NumberOfBytesWritten, a1, SR_VEC_PTR_LANES(128, a2, i8), v3);
    }
LABEL_27:
    v17 = *(_QWORD *)v16;
    v11 = *(_DWORD *)(v16 + 8);
LABEL_39:
    v22 = v17;
    goto LABEL_40;
  }
  if ( !v10 )
  {
    v16 = write_double_translated_ansi_nolock(&NumberOfBytesWritten, a1, a2, v3);
    goto LABEL_27;
  }
  if ( (unsigned __int8)(v10 - 1) <= 1u )
  {
    v12 = 0;
    v13 = (__m128i *)((char *)a2 + v3);
    NumberOfBytesWritten = 0;
    v14 = a2;
    if ( a2 < v13 )
    {
      v15 = HIDWORD(NumberOfBytesWritten);
      while ( 1 )
      {
        LOWORD(Mode) = SR_VEC_PTR_LANES(128, v14, i16)[0];
        if ( (unsigned __int16)putwch_nolock((unsigned __int16)Mode) != (_WORD)Mode )
          break;
        v15 += 2;
        HIDWORD(NumberOfBytesWritten) = v15;
        if ( (_WORD)Mode == 10 )
        {
          if ( (unsigned __int16)putwch_nolock(13) != 13 )
            break;
          HIDWORD(NumberOfBytesWritten) = ++v15;
          ++v12;
        }
        v14 = (__m128i *)((char *)v14 + 2);
        if ( v14 >= v13 )
          goto LABEL_25;
      }
      LODWORD(NumberOfBytesWritten) = ((__int64 (*)(void))GetLastError)();
    }
LABEL_25:
    v11 = v12;
    goto LABEL_38;
  }
LABEL_40:
  if ( HIDWORD(v22) )
    return (unsigned int)(HIDWORD(v22) - v11);
  if ( (_DWORD)v22 )
  {
    if ( (_DWORD)v22 == 5 )
    {
      *errno_sr() = 9;
      *(_DWORD *)sub_14024D19C() = 5;
    }
    else
    {
      sub_14024D14C(v22);
    }
    return 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 8 * v8 + 56) & 0x40) == 0 || SR_VEC_PTR_LANES(128, a2, i8)[0] != 26 )
  {
    *errno_sr() = 28;
    *(_DWORD *)sub_14024D19C() = 0;
    return 0xFFFFFFFFLL;
  }
  return 0;
}

// 14026E0D0: invalid function type 'BOOL (__stdcall *GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 1402670F8: using guessed type __int64 __fastcall putwch_nolock(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140253DEC) ----------------------------------------------------
char            sub_140253DEC(__int64 a1)
{
  int v2; // eax
  unsigned int *v3; // rdi
  __int64 v4; // rax

  v2 = fileno((FILE *)a1);
  if ( !isatty(v2) )
    return 0;
  if ( (char *)a1 == sub_14020B528(1u) )
  {
    v3 = &dword_140404A6C[19065659];
  }
  else
  {
    if ( (char *)a1 != sub_14020B528(2u) )
      return 0;
    v3 = &dword_140404A6C[19065661];
  }
  ++dword_140404A6C[19064595];
  if ( (*(_DWORD *)(a1 + 20) & 0x4C0) != 0 )
    return 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x282u);
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 || (*(_QWORD *)v3 = malloc_base(), free_base(nullptr), (v4 = *(_QWORD *)v3) != 0) )
  {
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = *(_QWORD *)v3;
    *(_DWORD *)(a1 + 16) = 4096;
    *(_DWORD *)(a1 + 32) = 4096;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 2;
    *(_QWORD *)(a1 + 8) = a1 + 28;
    *(_QWORD *)a1 = a1 + 28;
    *(_DWORD *)(a1 + 32) = 2;
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6B8: using guessed type unsigned int;

//----- (0000000140253EBC) ----------------------------------------------------
__int64            sub_140253EBC(char a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = *(_DWORD *)(a2 + 20) >> 9;
    if ( (*(_DWORD *)(a2 + 20) & 0x200) != 0 )
    {
      result = sub_1402501C4((FILE *)a2);
      _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFD7F);
      *(_DWORD *)(a2 + 32) = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = 0;
    }
  }
  return result;
}

// 1402501C4: using guessed type __int64 __fastcall sub_1402501C4(FILE *Stream);

//----- (0000000140253EF8) ----------------------------------------------------
__int64            sub_140253EF8(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  ++dword_140404A6C[19064595];
  v2 = 4096;
  *(_QWORD *)(a1 + 8) = sr_path_malloc(4096);
  free_base(nullptr);
  if ( *(_QWORD *)(a1 + 8) )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x40u);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x400u);
    v2 = 2;
    *(_QWORD *)(a1 + 8) = a1 + 28;
  }
  *(_DWORD *)(a1 + 32) = v2;
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6B8: using guessed type unsigned int;

//----- (0000000140253F60) ----------------------------------------------------
__int64            malloc_base()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = v0;
  if ( v0 > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_9:
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    if ( !v0 )
      v1 = 1;
    while ( 1 )
    {
      result = ((__int64 (           *)(_QWORD, _QWORD, __int64))HeapAlloc)(
                 *(_QWORD *)&dword_140404A6C[19065847],
                 0,
                 v1);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(v1) )
        goto LABEL_9;
    }
  }
  return result;
}

// 14026E130: invalid function type 'LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)' has been ignored
// 140253F66: variable 'v0' is possibly undefined
// 140260BE4: using guessed type __int64 __fastcall callnewh(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140253FC0) ----------------------------------------------------
__int64            mbtowc_l(sr_anon_115 *this, sr_anon_49 *a2, char *a3, struct __crt_locale_pointers *a4)
{
  int v7; // ecx
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // eax
  int *v12; // rax
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  char v15; // [rsp+48h] [rbp-10h]

  if ( !a2 || !a3 )
  {
    *(_QWORD *)&dword_140404A6C[19065663] = 0;
    return 0;
  }
  if ( !*(_BYTE *)a2 )
  {
    if ( this )
      *(_WORD *)this = 0;
    return 0;
  }
  sub_140213644((_LocaleUpdate *)&v13, a4);
  if ( *(_DWORD *)(v14 + 12) == 65001 )
  {
    v7 = __crt_mbstring____mbrtowc_utf8(this, a2, a3, &dword_140404A6C[19065663]);
    if ( v7 < 0 )
      v7 = -1;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(v14 + 312) )
  {
    if ( this )
      *(_WORD *)this = *(unsigned __int8 *)a2;
    goto LABEL_13;
  }
  if ( (unsigned int)isleadbyte_l(*(unsigned __int8 *)a2, &v14) )
  {
    v9 = v14;
    v10 = *(_DWORD *)(v14 + 8);
    if ( v10 > 1 && (int)a3 >= v10 && (v11 = sub_140259504(), v9 = v14, v11)
      || (unsigned __int64)a3 >= *(int *)(v9 + 8) && *((_BYTE *)a2 + 1) )
    {
      v7 = *(_DWORD *)(v9 + 8);
      goto LABEL_14;
    }
LABEL_25:
    v12 = errno_sr();
    v7 = -1;
    *v12 = 42;
    goto LABEL_14;
  }
  if ( !(unsigned int)sub_140259504() )
    goto LABEL_25;
LABEL_13:
  v7 = 1;
LABEL_14:
  if ( v15 )
    *(_DWORD *)(v13 + 936) &= ~2u;
  return (unsigned int)v7;
}

// 140253FC0: invalid function type 'int __cdecl mbtowc_l(#57 *DstCh, const char *SrcCh, #81 SrcSizeInBytes, #86 Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140259A50: using guessed type __int64 __fastcall isleadbyte_l(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140254140) ----------------------------------------------------
__int64            sub_140254140(sr_anon_115 *a1, sr_anon_49 *a2, char *a3)
{
  return mbtowc_l(a1, a2, a3, nullptr);
}


//----- (0000000140254148) ----------------------------------------------------
__int64            wctomb_l(__int64 a1, unsigned __int16 a2, struct __crt_locale_pointers *a3)
{
  int v5; // eax
  unsigned int v6; // edx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+48h] [rbp-10h]
  int SizeConverted; // [rsp+78h] [rbp+20h] BYREF

  sub_140213644((_LocaleUpdate *)&v8, a3);
  SizeConverted = 0;
  v5 = wctomb_s_l(&SizeConverted, a1, *(int *)(v9 + 8), a2, &v9);
  v6 = SizeConverted;
  if ( v5 )
    v6 = -1;
  if ( v10 )
    *(_DWORD *)(v8 + 936) &= ~2u;
  return v6;
}

// 140254148: invalid function type 'int __cdecl wctomb_l(char *MbCh, #57 WCh, #86 Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 1402541BC: using guessed type __int64 __fastcall wctomb_s_l(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

//----- (00000001402541BC) ----------------------------------------------------
__int64            wctomb_s_l(
        int *a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        struct __crt_locale_pointers *Locale)
{
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  char v16; // [rsp+58h] [rbp-8h]
  __int128 v17; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int16 v18; // [rsp+98h] [rbp+38h] BYREF

  v18 = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      v9 = 22;
      *errno_sr() = 22;
      sub_14024CF6C();
      return v9;
    }
    sub_140213644((_LocaleUpdate *)&v14, Locale);
    v10 = *(_DWORD *)(v15 + 12);
    if ( v10 == 65001 )
    {
      *(_QWORD *)&v17 = 0;
      v11 = __crt_mbstring____c32rtomb_utf8(a2, v18, &v17);
      if ( a1 )
        *a1 = v11;
      if ( v11 > 4 )
      {
        v9 = *errno_sr();
        goto LABEL_21;
      }
      goto LABEL_33;
    }
    if ( !*(_QWORD *)(v15 + 312) )
    {
      if ( v18 > 0xFFu )
      {
        if ( a2 && a3 )
          sub_1401FCD30((void *)(uintptr_t)(a2), 0, a3);
        goto LABEL_20;
      }
      if ( !a2 )
        goto LABEL_27;
      if ( a3 )
      {
        *a2 = v18;
LABEL_27:
        if ( a1 )
          *a1 = 1;
LABEL_33:
        v9 = 0;
        goto LABEL_21;
      }
LABEL_38:
      v9 = 34;
      *errno_sr() = 34;
      sub_14024CF6C();
LABEL_21:
      if ( v16 )
        *(_DWORD *)(v14 + 936) &= ~2u;
      return v9;
    }
    LODWORD(v17) = 0;
    LODWORD(v13) = a3;
    v12 = sub_140258A84(v10, 0, (__int64)&v18, 1, (__int64)a2, v13, 0, (__int64)&v17);
    if ( v12 )
    {
      if ( !(_DWORD)v17 )
      {
        if ( a1 )
          *a1 = v12;
        goto LABEL_33;
      }
    }
    else if ( (unsigned int)((__int64 (*)(void))GetLastError)() == 122 )
    {
      if ( a2 && a3 )
        sub_1401FCD30((void *)(uintptr_t)(a2), 0, a3);
      goto LABEL_38;
    }
LABEL_20:
    v9 = 42;
    *errno_sr() = 42;
    goto LABEL_21;
  }
  if ( a1 )
    *a1 = 0;
  return 0;
}

// 1402541BC: invalid function type 'errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, #81 SizeInBytes, #57 WCh, #86 Locale)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140254302: variable 'v13' is possibly undefined
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140254358) ----------------------------------------------------
__int64            wctomb_sr(_BYTE *a1, unsigned __int16 a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int SizeConverted; // [rsp+50h] [rbp+18h] BYREF

  SizeConverted = 0;
  v4 = sub_140258D34();
  v5 = wctomb_s_l(&SizeConverted, a1, v4, a2, nullptr);
  v6 = SizeConverted;
  if ( v5 )
    return (unsigned int)-1;
  return v6;
}

// 140254358: invalid function type 'int __cdecl wctomb(char *MbCh, #57 WCh)' has been ignored

//----- (00000001402543A8) ----------------------------------------------------
__int64            CDialog__CreateIndirect(CDialog *this,      struct DLGTEMPLATE *a2, struct CWnd *a3, void *a4)
{
  return wctomb_s_l((int *)this, a2, (unsigned __int64)a3, (unsigned __int16)a4, nullptr);
}

// 1402543A8: invalid function type 'errno_t __cdecl CDialog__CreateIndirect(int *SizeConverted, char *MbCh, #93 SizeInBytes, #57 WCh)' has been ignored
// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *this, const struct DLGTEMPLATE *a2, struct CWnd *a3, void *a4);

//----- (0000000140254CCC) ----------------------------------------------------
char *strnlen_sr(__m128i *a1,unsigned __int64 a2)
{
  const unsigned char *bytes=(const unsigned char *)a1;uint64_t length=0;
  while(length<a2 && bytes[length])length++;
  return (char *)(uintptr_t)length;
}

//----- (0000000140254F48) ----------------------------------------------------
__int64 sub_140254F48(__m128i *a1,unsigned __int64 a2)
{
  const unsigned char *bytes=(const unsigned char *)a1;uint64_t length=0;
  while(length<a2){uint16_t word;memcpy(&word,bytes+length*2,2);if(!word)break;length++;}
  return (int64_t)length;
}

//----- (0000000140255128) ----------------------------------------------------
__int64            sub_140255128(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_QWORD **)a3 + 136LL));
  return sub_140258BB8(*a4);
}


//----- (0000000140255168) ----------------------------------------------------
__int64            sub_140255168(__int64 a1, unsigned int *a2, struct __acrt_ptd *     **a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  replace_current_thread_locale_nolock_sr(**a3, nullptr);
  return sub_140258BB8(*a4);
}


//----- (00000001402551A8) ----------------------------------------------------
__int64            sub_1402551A8(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  replace_current_thread_locale_nolock_sr(
    **(struct __acrt_ptd *     **)a3,
    ***(struct __crt_locale_data *     ***)(a3 + 8));
  return sub_140258BB8(*a4);
}


//----- (00000001402551F0) ----------------------------------------------------
__int64            sub_1402551F0(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  void *v6; // rcx

  sub_140258B64(*a2);
  v6 = *(void **)(**(_QWORD **)a3 + 136LL);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 && v6 != &unk_1403025A0 )
    free_base(v6);
  return sub_140258BB8(*a4);
}


//----- (0000000140255250) ----------------------------------------------------
__int64            sub_140255250(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_1402551F0((__int64)&v3, &v5, a2, &v4);
}


//----- (0000000140255278) ----------------------------------------------------
__int64            sub_140255278(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140255128((__int64)&v3, &v5, a2, &v4);
}


//----- (00000001402552A0) ----------------------------------------------------
__int64            sub_1402552A0(unsigned int a1, struct __acrt_ptd *     **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_140255168((__int64)&v3, &v5, a2, &v4);
}


//----- (00000001402552C8) ----------------------------------------------------
__int64            sub_1402552C8(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_1402551A8((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014025535C) ----------------------------------------------------
__crt_scoped_get_last_error_reset *           __crt_scoped_get_last_error_reset____crt_scoped_get_last_error_reset(
        __crt_scoped_get_last_error_reset *this)
{
  *(_DWORD *)this = ((__int64 (*)(void))GetLastError)();
  return this;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14025535C: using guessed type __crt_scoped_get_last_error_reset *__fastcall __crt_scoped_get_last_error_reset::__crt_scoped_get_last_error_reset(__crt_scoped_get_last_error_reset *this);

//----- (0000000140255378) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1035(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402553B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_871(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(**(_QWORD **)a1 + 136LL);
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 && v1 != &unk_1403025A0 )
    free_base(v1);
}


//----- (000000014025545C) ----------------------------------------------------
__int64            sub_14025545C(struct __acrt_ptd *     a1, struct __crt_locale_data **     a2)
{
  unsigned int v3; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+28h] [rbp-18h] BYREF
  struct __acrt_ptd *v5; // [rsp+50h] [rbp+10h] BYREF
  struct __crt_locale_data **v6; // [rsp+58h] [rbp+18h] BYREF
  char v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF

  v6 = a2;
  v5 = a1;
  *((_DWORD *)a1 + 10) = 1;
  *(_QWORD *)v5 = (uint64)(uintptr_t)(xmmword_140289E60);
  *((_DWORD *)v5 + 234) = 1;
  *((_QWORD *)v5 + 17) = (uint64)(uintptr_t)(&unk_1403025A0);
  *((_WORD *)v5 + 94) = 67;
  *((_WORD *)v5 + 225) = 67;
  *((_QWORD *)v5 + 116) = 0;
  v4[0] = (uint64)(uintptr_t)(&v5);
  v8 = 5;
  v3 = 5;
  sub_140255128((__int64)&v7, &v3, (__int64)v4, &v8);
  v4[0] = (uint64)(uintptr_t)(&v5);
  v4[1] = (uint64)(uintptr_t)(&v6);
  v8 = 4;
  v3 = 4;
  return sub_1402551A8((__int64)&v7, &v3, (__int64)v4, &v8);
}

// 140289E60: using guessed type __m128i xmmword_140289E60[12];

//----- (0000000140255524) ----------------------------------------------------
__int64            sub_140255524(struct __acrt_ptd *     a1)
{
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-2Ch] BYREF
  struct __acrt_ptd *v4; // [rsp+28h] [rbp-28h] BYREF
  unsigned int *v5; // [rsp+30h] [rbp-20h] BYREF
  struct __acrt_ptd **v6; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-10h] BYREF
  char v8; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+28h] BYREF

  v4 = a1;
  v6 = &v4;
  v9 = 5;
  v10 = 5;
  v7[0] = (uint64)(uintptr_t)(&v4);
  v7[1] = (uint64)(uintptr_t)(&v5);
  v2 = 4;
  v3 = 4;
  v5 = &dword_140404A6C[19065667];
  *((_DWORD *)a1 + 10) = 1;
  *(_QWORD *)v4 = (uint64)(uintptr_t)(xmmword_140289E60);
  *((_DWORD *)v4 + 234) = 1;
  *((_QWORD *)v4 + 17) = (uint64)(uintptr_t)(&unk_1403025A0);
  *((_WORD *)v4 + 94) = 67;
  *((_WORD *)v4 + 225) = 67;
  *((_QWORD *)v4 + 116) = 0;
  sub_140255128((__int64)&v8, &v10, (__int64)&v6, &v9);
  return sub_1402551A8((__int64)&v8, &v3, (__int64)v7, &v2);
}

// 140289E60: using guessed type __m128i xmmword_140289E60[12];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402555F8) ----------------------------------------------------
void            sub_1402555F8(void **Block)
{
  if ( Block )
  {
    sub_140255710(Block);
    free_base(Block);
  }
}


//----- (0000000140255618) ----------------------------------------------------
__int64            sub_140255618(void **a1)
{
  struct __acrt_ptd *     *v2[2]; // [rsp+20h] [rbp-10h] BYREF
  void **v3; // [rsp+40h] [rbp+10h] BYREF
  char v4; // [rsp+48h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+28h] BYREF

  v3 = a1;
  if ( *a1 != xmmword_140289E60 )
  {
    free_base(*a1);
    a1 = v3;
  }
  free_base(a1[14]);
  free_base(v3[11]);
  free_base(v3[12]);
  free_base(v3[13]);
  free_base(v3[9]);
  free_base(v3[10]);
  free_base(v3[15]);
  free_base(v3[16]);
  free_base(v3[120]);
  v2[0] = (struct __acrt_ptd *     *)&v3;
  v5 = 5;
  v6 = 5;
  sub_1402551F0((__int64)&v4, &v6, (__int64)v2, &v5);
  v2[0] = (struct __acrt_ptd *     *)&v3;
  v5 = 4;
  v6 = 4;
  return sub_140255168((__int64)&v4, &v6, v2, &v5);
}

// 140289E60: using guessed type __m128i xmmword_140289E60[12];

//----- (0000000140255710) ----------------------------------------------------
__int64            sub_140255710(void **a1)
{
  unsigned int v2; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-1Ch] BYREF
  void **v4; // [rsp+28h] [rbp-18h] BYREF
  void ***v5; // [rsp+30h] [rbp-10h] BYREF
  void ***v6; // [rsp+38h] [rbp-8h] BYREF
  char v7; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF

  v4 = a1;
  v5 = &v4;
  v8 = 5;
  v9 = 5;
  v6 = &v4;
  v2 = 4;
  v3 = 4;
  if ( *a1 != xmmword_140289E60 )
  {
    free_base(*a1);
    a1 = v4;
  }
  free_base(a1[14]);
  free_base(v4[11]);
  free_base(v4[12]);
  free_base(v4[13]);
  free_base(v4[9]);
  free_base(v4[10]);
  free_base(v4[15]);
  free_base(v4[16]);
  free_base(v4[120]);
  sub_1402551F0((__int64)&v7, &v9, (__int64)&v5, &v8);
  return sub_140255168((__int64)&v7, &v3, (struct __acrt_ptd *     **)&v6, &v2);
}

// 140289E60: using guessed type __m128i xmmword_140289E60[12];

//----- (0000000140255818) ----------------------------------------------------
struct __acrt_ptd *internal_get_ptd_head()
{
  unsigned int v0; // ecx
  struct __acrt_ptd *v1; // rdi
  struct __acrt_ptd *result; // rax
  __int64 v3; // rax
  unsigned int v4; // ecx
  struct __acrt_ptd *v5; // rbx
  struct __acrt_ptd *v6; // rcx

  v0 = dword_140302410;
  v1 = nullptr;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(v0, -1) )
      return nullptr;
    v3 = sr_directory_calloc(1, 0x3C8);
    v4 = dword_140302410;
    v5 = (struct __acrt_ptd *)v3;
    if ( v3 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v3) )
      {
        sub_140255524(v5);
        v6 = v5;
        v5 = nullptr;
        v1 = v6;
        goto LABEL_13;
      }
      v4 = dword_140302410;
    }
    sub_14024F02C(v4, 0);
LABEL_13:
    free_base(v5);
    return v1;
  }
  result = (struct __acrt_ptd *)sub_14024EFE4(dword_140302410);
  if ( !result )
  {
    v0 = dword_140302410;
    goto LABEL_6;
  }
  if ( result == (struct __acrt_ptd *)-1LL )
    return nullptr;
  return result;
}

// 140302410: using guessed type int dword_140302410;

//----- (00000001402558B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
struct __acrt_ptd *unknown_libname_876()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  __int64 v3; // rax
  struct __acrt_ptd *v4; // rdi
  __int64 v5; // rax
  struct __acrt_ptd *v6; // rcx

  v0 = ((__int64 (*)(void))GetLastError)();
  v1 = dword_140302410;
  v2 = v0;
  if ( dword_140302410 != -1 )
  {
    v3 = sub_14024EFE4(dword_140302410);
    v4 = (struct __acrt_ptd *)v3;
    if ( v3 )
    {
      if ( v3 == -1 )
        v4 = nullptr;
      goto LABEL_15;
    }
    v1 = dword_140302410;
  }
  if ( (unsigned int)sub_14024F02C(v1, -1) )
  {
    v5 = sr_directory_calloc(1, 0x3C8);
    v4 = (struct __acrt_ptd *)v5;
    if ( v5 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v5) )
      {
        sub_140255524(v4);
        free_base(nullptr);
        goto LABEL_15;
      }
      sub_14024F02C(dword_140302410, 0);
      v6 = v4;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      v6 = nullptr;
    }
    free_base(v6);
  }
  v4 = nullptr;
LABEL_15:
  ((void (           *)(_QWORD))SetLastError)(v2);
  return v4;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored
// 140302410: using guessed type int dword_140302410;

//----- (0000000140255988) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1036(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (00000001402559A4) ----------------------------------------------------
void            replace_current_thread_locale_nolock_sr(struct __acrt_ptd *     a1, struct __crt_locale_data *     a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)a1 + 18);
  if ( v4 )
  {
    sub_140262A34(v4);
    v5 = *((_QWORD *)a1 + 18);
    if ( v5 != *(_QWORD *)&dword_140404A6C[19065667] && (__int16 **)v5 != &off_140302420 && !*(_DWORD *)(v5 + 16) )
      sub_140262834(v5);
  }
  *((_QWORD *)a1 + 18) = (uint64)(uintptr_t)(a2);
  if ( a2 )
    sub_1402627A8((__int64)a2);
}

// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140255A0C) ----------------------------------------------------
__int64 try_get_ptd_head()
{
  __int64 result; // rax

  if ( dword_140302410 == -1 )
    return 0;
  result = sub_14024EFE4(dword_140302410);
  if ( !result )
    return 0;
  return result;
}

// 140302410: using guessed type int dword_140302410;

//----- (0000000140255A2C) ----------------------------------------------------
void sub_140255A2C()
{
  void **v0; // rbx

  if ( dword_140302410 != -1 )
  {
    v0 = (void **)sub_14024EFE4(dword_140302410);
    if ( v0 )
    {
      sub_14024F02C(dword_140302410, 0);
      sub_140255710(v0);
      free_base(v0);
    }
  }
}

// 140302410: using guessed type int dword_140302410;

//----- (0000000140255A70) ----------------------------------------------------
__int64 sub_140255A70()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  __int64 v3; // rax
  struct __acrt_ptd *v4; // rdi
  struct __acrt_ptd *v5; // rsi
  __int64 v6; // rax
  struct __acrt_ptd *v7; // rcx
  __int64 result; // rax

  v0 = ((__int64 (*)(void))GetLastError)();
  v1 = dword_140302410;
  v2 = v0;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(v1, -1) )
      goto LABEL_4;
    v6 = sr_directory_calloc(1, 0x3C8);
    v4 = (struct __acrt_ptd *)v6;
    if ( v6 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v6) )
      {
        sub_140255524(v4);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      v7 = v4;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      v7 = nullptr;
    }
    free_base(v7);
    goto LABEL_4;
  }
  v3 = sub_14024EFE4(dword_140302410);
  v4 = (struct __acrt_ptd *)v3;
  if ( !v3 )
  {
    v1 = dword_140302410;
    goto LABEL_6;
  }
  if ( v3 == -1 )
  {
LABEL_4:
    v4 = nullptr;
    v5 = nullptr;
    goto LABEL_14;
  }
LABEL_13:
  v5 = v4;
LABEL_14:
  ((void (           *)(_QWORD))SetLastError)(v2);
  result = (unsigned __int64)v5 & -(__int64)(v4 != nullptr);
  if ( !result )
    abort();
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored
// 140302410: using guessed type int dword_140302410;

//----- (0000000140255B44) ----------------------------------------------------
struct __acrt_ptd *sub_140255B44()
{
  unsigned int v0; // ecx
  __int64 v1; // rax
  struct __acrt_ptd *v2; // rbx
  __int64 v3; // rax
  struct __acrt_ptd *v4; // rcx

  v0 = dword_140302410;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(v0, -1) )
      goto LABEL_15;
    v3 = sr_directory_calloc(1, 0x3C8);
    v2 = (struct __acrt_ptd *)v3;
    if ( v3 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v3) )
      {
        sub_140255524(v2);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      v4 = v2;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      v4 = nullptr;
    }
    free_base(v4);
    goto LABEL_15;
  }
  v1 = sub_14024EFE4(dword_140302410);
  v2 = (struct __acrt_ptd *)v1;
  if ( !v1 )
  {
    v0 = dword_140302410;
    goto LABEL_6;
  }
  if ( v1 == -1 )
    goto LABEL_15;
LABEL_13:
  if ( !v2 )
LABEL_15:
    abort();
  return v2;
}

// 140302410: using guessed type int dword_140302410;

//----- (0000000140255BEC) ----------------------------------------------------
__int64 sub_140255BEC()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  __int64 v3; // rax
  struct __acrt_ptd *v4; // rdi
  struct __acrt_ptd *v5; // rsi
  __int64 v6; // rax
  struct __acrt_ptd *v7; // rcx

  v0 = ((__int64 (*)(void))GetLastError)();
  v1 = dword_140302410;
  v2 = v0;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(v1, -1) )
      goto LABEL_4;
    v6 = sr_directory_calloc(1, 0x3C8);
    v4 = (struct __acrt_ptd *)v6;
    if ( v6 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v6) )
      {
        sub_140255524(v4);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      v7 = v4;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      v7 = nullptr;
    }
    free_base(v7);
    goto LABEL_4;
  }
  v3 = sub_14024EFE4(dword_140302410);
  v4 = (struct __acrt_ptd *)v3;
  if ( !v3 )
  {
    v1 = dword_140302410;
    goto LABEL_6;
  }
  if ( v3 != -1 )
  {
LABEL_13:
    v5 = v4;
    goto LABEL_14;
  }
LABEL_4:
  v4 = nullptr;
  v5 = nullptr;
LABEL_14:
  ((void (           *)(_QWORD))SetLastError)(v2);
  return (unsigned __int64)v5 & -(__int64)(v4 != nullptr);
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored
// 140302410: using guessed type int dword_140302410;

//----- (0000000140255CB8) ----------------------------------------------------
char sub_140255CB8()
{
  dword_140302410 = sub_14024EF54((__int64)sub_1402555F8);
  if ( dword_140302410 == -1 )
    return 0;
  if ( !sub_140255BEC() )
  {
    _acrt_uninitialize_ptd_0();
    return 0;
  }
  return 1;
}

// 140302410: using guessed type int dword_140302410;

//----- (0000000140255CF4) ----------------------------------------------------
char _acrt_uninitialize_ptd_0()
{
  if ( dword_140302410 != -1 )
  {
    sub_14024EF9C(dword_140302410);
    dword_140302410 = -1;
  }
  return 1;
}

// 140302410: using guessed type int dword_140302410;

//----- (0000000140255D2C) ----------------------------------------------------
__int64            sub_140255D2C(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19065667];
  if ( *a2 != *(_QWORD *)&dword_140404A6C[19065667] )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_140302B88) == 0 )
    {
      result = sub_140262ADC();
      *a2 = result;
    }
  }
  return result;
}

// 140302B88: using guessed type int dword_140302B88;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF778: using guessed type unsigned int;

//----- (0000000140255D60) ----------------------------------------------------
__int64            sub_140255D60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19065829];
  if ( *a2 != *(_QWORD *)&dword_140404A6C[19065829] )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_140302B88) == 0 )
    {
      result = (__int64)sub_14025F580();
      *a2 = result;
    }
  }
  return result;
}

// 140302B88: using guessed type int dword_140302B88;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140255DF8) ----------------------------------------------------
__int64            fp_format_a(
             double *a1,
        __m128i *a2,
        unsigned __int64 a3,
        char *     a4,
        unsigned __int64 a5,
        int a6,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *     a9)
{
  __m128i *v9; // rbx
  int v11; // edi
  unsigned int v14; // edi
  __int64 v15; // rcx
  __m128i *v16; // rax
  __int8 *v17; // r15
  __int64 v18; // rbp
  __int16 *v19; // rsi
  __int8 v20; // al
  __int16 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int16 v23; // ax
  __int8 *i; // rcx
  __int8 v25; // r8
  __int8 v26; // dl
  _BYTE *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  char v30; // al
  _BYTE *v31; // r8
  _QWORD v33[3]; // [rsp+50h] [rbp-48h] BYREF
  char v34; // [rsp+68h] [rbp-30h]

  SR_VEC_PTR_LANES(128, a2, i8)[0] = 0;
  v9 = a2;
  v11 = 0;
  if ( a6 >= 0 )
    v11 = a6;
  sub_140213644((_LocaleUpdate *)v33, a9);
  if ( a3 <= v11 + 11 )
  {
    v14 = 34;
    *errno_sr() = 34;
    sub_14024CF6C();
    goto LABEL_53;
  }
  v15 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 >> 52) & 0x7FFLL) == 0x7FF )
  {
    v14 = fp_format_e(a1, SR_VEC_PTR_LANES(128, v9, i8), a3, a4, a5, v11, 0, a8, nullptr);
    if ( v14 )
    {
      SR_VEC_PTR_LANES(128, v9, i8)[0] = 0;
      goto LABEL_53;
    }
    v16 = sub_14026CD4C(v9, 101);
    if ( v16 )
    {
      SR_VEC_PTR_LANES(128, v16, i8)[0] = 32 * !a7 + 80;
      SR_VEC_PTR_LANES(128, v16, i8)[3] = 0;
    }
  }
  else
  {
    if ( v15 < 0 )
    {
      SR_VEC_PTR_LANES(128, v9, i8)[0] = 45;
      v9 = (__m128i *)((char *)v9 + 1);
      v15 = *(_QWORD *)a1;
    }
    v17 = &SR_VEC_PTR_LANES(128, v9, i8)[1];
    v18 = 1023;
    if ( (v15 & 0x7FF0000000000000LL) != 0 )
    {
      SR_VEC_PTR_LANES(128, v9, i8)[0] = 49;
    }
    else
    {
      SR_VEC_PTR_LANES(128, v9, i8)[0] = 48;
      v18 = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) != 0 ? 0x3FE : 0;
    }
    v19 = &SR_VEC_PTR_LANES(128, v9, i16)[1];
    if ( v11 )
      v20 = ***(_BYTE ***)(v33[1] + 248LL);
    else
      v20 = 0;
    *v17 = v20;
    if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      v21 = 48;
      v22 = 0xF000000000000LL;
      do
      {
        if ( v11 <= 0 )
          break;
        v23 = ((v22 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> v21) + 48;
        if ( v23 > 0x39u )
          LOBYTE(v23) = 32 * !a7 + 7 + v23;
        *(_BYTE *)v19 = v23;
        --v11;
        v19 = (__int16 *)((char *)v19 + 1);
        v22 >>= 4;
        v21 -= 4;
      }
      while ( v21 >= 0 );
      if ( v21 >= 0 && (unsigned __int16)((v22 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> v21) > 8u )
      {
        for ( i = (char *)v19 - 1; ; --i )
        {
          v25 = *i;
          if ( ((*i - 70) & 0xDF) != 0 )
            break;
          *i = 48;
        }
        if ( i == v17 )
        {
          ++*(i - 1);
        }
        else
        {
          if ( v25 == 57 )
            v26 = 32 * !a7 + 65;
          else
            v26 = v25 + 1;
          *i = v26;
        }
      }
    }
    if ( v11 > 0 )
    {
      sub_1401FCD30((void *)(uintptr_t)(v19), 0x30u, (unsigned int)v11);
      v19 = (__int16 *)((char *)v19 + (unsigned int)v11);
    }
    if ( *v17 )
      v17 = (__int8 *)v19;
    *v17 = 32 * !a7 + 80;
    v27 = v17 + 2;
    v28 = ((*(_QWORD *)a1 >> 52) & 0x7FFLL) - v18;
    v29 = v28;
    if ( v28 < 0 )
      v28 = v18 - ((*(_QWORD *)a1 >> 52) & 0x7FFLL);
    v30 = 43;
    v31 = v17 + 2;
    if ( v29 < 0 )
      v30 = 45;
    v17[1] = v30;
    *v27 = 48;
    if ( v28 >= 1000 )
    {
      v31 = v17 + 3;
      *v27 = v28 / 1000 + 48;
      v28 %= 1000;
    }
    if ( v31 != v27 || v28 >= 100 )
    {
      *v31++ = v28 / 100 + 48;
      v28 %= 100;
    }
    if ( v31 != v27 || v28 >= 10 )
    {
      *v31++ = v28 / 10 + 48;
      v28 %= 10;
    }
    *v31 = v28 + 48;
    v31[1] = 0;
  }
  v14 = 0;
LABEL_53:
  if ( v34 )
    *(_DWORD *)(v33[0] + 936LL) &= ~2u;
  return v14;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140256168) ----------------------------------------------------
__int64            fp_format_e(
             double *     a1,
        char *     a2,
        unsigned __int64 a3,
        char *     a4,
        unsigned __int64 a5,
        int a6,
        char a7,
        unsigned int a8,
        struct __crt_locale_pointers *     a9)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  _BOOL8 v13; // rcx
  _BOOL8 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  _DWORD v17[6]; // [rsp+40h] [rbp-18h] BYREF

  v10 = a5;
  v11 = *(_QWORD *)a1;
  if ( (unsigned __int64)(unsigned int)(a6 + 2) + 1 < a5 )
    v10 = (unsigned int)(a6 + 2) + 1LL;
  _acrt_fltout(v11, a6 + 1, (__int64)v17, a4, v10);
  v13 = v17[0] == 45;
  v14 = a6 > 0;
  v15 = a3 - v14 - v13;
  if ( a3 == -1 )
    v15 = -1;
  result = _acrt_fp_strflt_to_string((__int64)&a2[v14 + v13], v15, a6 + 1, (__int64)v17);
  if ( !(_DWORD)result )
    return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *    )v17, 0, a9);
  *a2 = 0;
  return result;
}


//----- (0000000140256244) ----------------------------------------------------
__int64            fp_format_e_internal(
        char *     a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        struct _strflt *     a6,
        bool a7,
        struct __crt_locale_pointers *     a8)
{
  int v8; // eax
  __int64 v9; // rbx
  char *v14; // rdx
  __int64 v15; // r8
  char *v16; // rdx
  char *v17; // rbx
  __int64 v18; // rdx
  __m128i *v19; // rcx
  int v20; // r8d
  _QWORD v21[3]; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v9 = a3;
  if ( a3 > 0 )
    v8 = a3;
  if ( a2 > v8 + 9 )
  {
    sub_140213644((_LocaleUpdate *)v21, a8);
    if ( a7 )
    {
      v14 = &a1[*(_DWORD *)a6 == 45];
      if ( (int)v9 > 0 )
      {
        v15 = -1;
        do
          ++v15;
        while ( v14[v15] );
        sub_1401FC920((__m128i *)(v14 + 1), (     __m128i *)v14, v15 + 1);
      }
    }
    v16 = a1;
    if ( *(_DWORD *)a6 == 45 )
    {
      *a1 = 45;
      v16 = a1 + 1;
    }
    if ( (int)v9 > 0 )
    {
      *v16 = v16[1];
      *++v16 = ***(_BYTE ***)(v21[1] + 248LL);
    }
    v17 = &v16[v9 + !a7];
    v18 = a1 - v17 + a2;
    if ( a2 == -1 )
      v18 = -1;
    if ( (unsigned int)strcpy_s_sr(v17, v18, (__int64)"e+000") )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    v19 = (__m128i *)(v17 + 2);
    if ( a4 )
      *v17 = 69;
    if ( **((_BYTE **)a6 + 1) != 48 )
    {
      v20 = *((_DWORD *)a6 + 1) - 1;
      if ( v20 < 0 )
      {
        v20 = 1 - *((_DWORD *)a6 + 1);
        v17[1] = 45;
      }
      if ( v20 >= 100 )
      {
        v17[2] += v20 / 100;
        v20 %= 100;
      }
      if ( v20 >= 10 )
      {
        v17[3] += v20 / 10;
        LOBYTE(v20) = v20 % 10;
      }
      v17[4] += v20;
    }
    if ( a5 == 2 && SR_VEC_PTR_LANES(128, v19, i8)[0] == 48 )
      sub_1401FC920(v19, (     __m128i *)(v17 + 3), 3u);
    if ( v22 )
      *(_DWORD *)(v21[0] + 936LL) &= ~2u;
    return 0;
  }
  else
  {
    *errno_sr() = 34;
    sub_14024CF6C();
    return 34;
  }
}

// 140256410: control flows out of bounds to 140256415
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140256418) ----------------------------------------------------
__int64            fp_format_f(
             double *     a1,
        char *     a2,
        __int64 a3,
        char *     a4,
        __int64 a5,
        int a6,
        struct __crt_locale_pointers *     a7)
{
  __int64 v7; // rcx
  _BOOL8 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = *(_QWORD *)a1;
  v13[0] = 0;
  v13[1] = 0;
  _acrt_fltout(v7, a6, (__int64)v13, a4, a5);
  v10 = LODWORD(v13[0]) == 45;
  v11 = a3 - v10;
  if ( a3 == -1 )
    v11 = -1;
  result = _acrt_fp_strflt_to_string((__int64)&a2[v10], v11, a6 + HIDWORD(v13[0]), (__int64)v13);
  if ( !(_DWORD)result )
    return fp_format_f_internal(a2, a3, a6, (struct _strflt *    )v13, 0, a7);
  *a2 = 0;
  return result;
}


//----- (00000001402564C0) ----------------------------------------------------
__int64            fp_format_f_internal(
        char *     a1,
        __int64 a2,
        int a3,
        struct _strflt *     a4,
        bool a5,
        struct __crt_locale_pointers *     a6)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  char *v12; // rbx
  char *v13; // rbp
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  _QWORD v18[3]; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v18, a6);
  v9 = *((int *)a4 + 1);
  if ( a5 && (_DWORD)v9 - 1 == a3 )
    *(_WORD *)&a1[(*(_DWORD *)a4 == 45) - 1 + v9] = 48;
  if ( *(_DWORD *)a4 == 45 )
    *a1++ = 45;
  v10 = -1;
  if ( *((int *)a4 + 1) > 0 )
  {
    v12 = &a1[*((int *)a4 + 1)];
  }
  else
  {
    v11 = -1;
    do
      ++v11;
    while ( a1[v11] );
    sub_1401FC920((__m128i *)(a1 + 1), (     __m128i *)a1, v11 + 1);
    *a1 = 48;
    v12 = a1 + 1;
  }
  if ( a3 > 0 )
  {
    v13 = v12 + 1;
    v14 = -1;
    do
      ++v14;
    while ( v12[v14] );
    sub_1401FC920((__m128i *)(v12 + 1), (     __m128i *)v12, v14 + 1);
    *v12 = ***(_BYTE ***)(v18[1] + 248LL);
    v15 = *((_DWORD *)a4 + 1);
    if ( v15 < 0 )
    {
      v16 = -v15;
      if ( a5 || v16 < a3 )
        a3 = v16;
      if ( a3 )
      {
        do
          ++v10;
        while ( v13[v10] );
        sub_1401FC920((__m128i *)&v13[a3], (     __m128i *)(v12 + 1), v10 + 1);
      }
      sub_1401FCD30((void *)(uintptr_t)(v12 + 1), 0x30u, a3);
    }
  }
  if ( v19 )
    *(_DWORD *)(v18[0] + 936LL) &= ~2u;
  return 0;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140256604) ----------------------------------------------------
__int64            sub_140256604(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        signed int a6,
        char a7,
        unsigned int a8,
        struct sr_anon_68 *a9)
{
  __int64 v9; // rcx
  _BOOL8 v12; // rcx
  int v13; // r14d
  unsigned __int64 v14; // rdx
  char *v15; // rbx
  __int64 result; // rax
  int v17; // eax
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v9 = *a1;
  v19[0] = 0;
  v19[1] = 0;
  _acrt_fltout(v9, a6, (__int64)v19, a4, a5);
  v12 = LODWORD(v19[0]) == 45;
  v13 = HIDWORD(v19[0]) - 1;
  v14 = a3 - v12;
  v15 = &a2[v12];
  if ( a3 == -1 )
    v14 = -1;
  result = _acrt_fp_strflt_to_string((__int64)&a2[v12], v14, a6, (__int64)v19);
  if ( (_DWORD)result )
  {
    *a2 = 0;
  }
  else
  {
    v17 = HIDWORD(v19[0]) - 1;
    if ( HIDWORD(v19[0]) - 1 < -4 || v17 >= a6 )
    {
      return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *    )v19, 1, a9);
    }
    else
    {
      if ( v13 < v17 )
      {
        while ( *v15++ )
          ;
        *(v15 - 2) = 0;
      }
      return fp_format_f_internal(a2, a3, a6, (struct _strflt *    )v19, 1, a9);
    }
  }
  return result;
}


//----- (0000000140256738) ----------------------------------------------------
__int64            fp_format_nan_or_infinity(
        int a1,
        unsigned __int8 a2,
        _BYTE *a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r11

  if ( a4 >= (unsigned __int64)a2 + 4 )
  {
    v8 = -1;
    if ( a2 )
    {
      *a3++ = 45;
      *a3 = 0;
      if ( a4 != -1 )
        --a4;
    }
    v9 = 4LL * (unsigned int)(a1 - 1);
    do
      ++v8;
    while ( *((_BYTE *)*(off_14028B000 + 2 * (a5 ^ 1u) + v9) + v8) );
    result = strcpy_s_sr(a3, a4, (__int64)*(off_14028B000 + 2 * (a5 ^ 1) + v9 + (a4 <= v8)));
    if ( (_DWORD)result )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  else
  {
    *a3 = 0;
    return 12;
  }
  return result;
}

// 1402567D7: control flows out of bounds to 1402567DC
// 14028B000: using guessed type _UNKNOWN *off_14028B000;

//----- (00000001402567E0) ----------------------------------------------------
void            shift_bytes(char *     a1, __int64 a2,      __m128i *a3, int a4)
{
  __int64 v5; // r8

  if ( a4 )
  {
    v5 = -1;
    do
      ++v5;
    while ( SR_VEC_PTR_LANES(128, a3, i8)[v5] );
    sub_1401FC920((__m128i *)((char *)a3 + a4), a3, v5 + 1);
  }
}


//----- (0000000140256818) ----------------------------------------------------
__int64            sub_140256818(
        double *a1,
        __m128i *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        struct sr_anon_68 *a9)
{
  unsigned __int64 v9; // rdi
  __m128i *v10; // rbx
  __int64 result; // rax
  bool v12; // r11
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned int v18; // edx
  __int64 v19; // rcx
  _BOOL8 v20; // rcx
  unsigned __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+50h] [rbp-18h] BYREF

  v9 = a3;
  v10 = a2;
  if ( !a2 || !a3 || !a4 || !a5 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  v12 = a6 == 65 || (unsigned int)(a6 - 69) <= 2;
  if ( (a8 & 8) == 0 )
  {
    v13 = *(_QWORD *)a1;
    if ( ((*(_QWORD *)a1 >> 52) & 0x7FFLL) == 0x7FF )
    {
      v14 = 12;
      if ( (v13 & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        if ( v13 < 0 && (v13 & 0xFFFFFFFFFFFFFLL) == 0x8000000000000LL )
          v15 = 12;
        else
          v15 = (-(__int64)((v13 & 0x8000000000000LL) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 8;
      }
      else
      {
        v15 = 0;
      }
      v16 = (unsigned __int64)v13 >> 63;
      if ( v9 >= v16 + 4 )
      {
        v17 = -1;
        if ( (_BYTE)v16 )
        {
          SR_VEC_PTR_LANES(128, v10, i8)[0] = 45;
          v10 = (__m128i *)((char *)v10 + 1);
          SR_VEC_PTR_LANES(128, v10, i8)[0] = 0;
          if ( v9 != -1 )
            --v9;
        }
        do
          ++v17;
        while ( *((_BYTE *)*(off_14028B000 + 2 * !v12 + v15) + v17) );
        if ( (unsigned int)strcpy_s_sr(v10, v9, (__int64)*(off_14028B000 + 2 * !v12 + v15 + (v9 <= v17))) )
        {
          sub_14024CFBC();
          __debugbreak();
        }
        return 0;
      }
      else
      {
        SR_VEC_PTR_LANES(128, v10, i8)[0] = 0;
      }
      return v14;
    }
  }
  v18 = (a8 >> 4) & 1 | 2;
  switch ( a6 )
  {
    case 'A':
      return fp_format_a(a1, v10, v9, a4, a5, a7, v12, v18, a9);
    case 'E':
      return fp_format_e(a1, SR_VEC_PTR_LANES(128, v10, i8), v9, a4, a5, a7, v12, v18, a9);
    case 'F':
      goto LABEL_35;
    case 'G':
      return sub_140256604((__int64 *)a1, SR_VEC_PTR_LANES(128, v10, i8), v9, a4, a5, a7, v12, v18, a9);
    case 'a':
      return fp_format_a(a1, v10, v9, a4, a5, a7, v12, v18, a9);
    case 'e':
      return fp_format_e(a1, SR_VEC_PTR_LANES(128, v10, i8), v9, a4, a5, a7, v12, v18, a9);
  }
  if ( a6 != 102 )
    return sub_140256604((__int64 *)a1, SR_VEC_PTR_LANES(128, v10, i8), v9, a4, a5, a7, v12, v18, a9);
LABEL_35:
  v19 = *(_QWORD *)a1;
  v22[0] = 0;
  v22[1] = 0;
  _acrt_fltout(v19, a7, (__int64)v22, a4, a5);
  v20 = LODWORD(v22[0]) == 45;
  v21 = v9 - v20;
  if ( v9 == -1 )
    v21 = -1;
  result = _acrt_fp_strflt_to_string((__int64)SR_VEC_PTR_LANES(128, v10, i64) + v20, v21, a7 + HIDWORD(v22[0]), (__int64)v22);
  if ( !(_DWORD)result )
    return fp_format_f_internal(SR_VEC_PTR_LANES(128, v10, i8), v9, a7, (struct _strflt *    )v22, 0, a9);
  SR_VEC_PTR_LANES(128, v10, i8)[0] = 0;
  return result;
}

// 14028B000: using guessed type _UNKNOWN *off_14028B000;

//----- (0000000140256B1C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_878(unsigned __int16 a1, __int64 a2)
{
  bool v2; // sf

  v2 = *(_DWORD *)(a2 + 16) - 2 < 0;
  *(_DWORD *)(a2 + 16) -= 2;
  if ( v2 )
    return sub_140251E94(a1, a2);
  **(_WORD **)a2 = a1;
  *(_QWORD *)a2 += 2LL;
  return a1;
}


//----- (0000000140256B38) ----------------------------------------------------
__int64            sub_140256B38(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // rdi
  bool v4; // sf
  char *v5; // rbp
  __int64 v6; // rbx
  _BYTE *v7; // rdx
  __int64 v8; // rbx
  int v9; // ebx
  unsigned __int8 *v10; // rbp
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[12]; // [rsp+24h] [rbp-34h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(a2 + 16) - 2 < 0;
    *(_DWORD *)(a2 + 16) -= 2;
    if ( !v4 )
    {
      **(_WORD **)a2 = a1;
      *(_QWORD *)a2 += 2LL;
      return sub_1401F8B20((unsigned __int64)&v12 ^ v15);
    }
LABEL_22:
    sub_140251E94(a1, a2);
    return sub_1401F8B20((unsigned __int64)&v12 ^ v15);
  }
  v5 = (char *)&unk_1403022C0;
  if ( fileno((FILE *)a2) == -1 || fileno((FILE *)v2) == -2 )
  {
    v7 = &unk_1403022C0;
  }
  else
  {
    v6 = (__int64)fileno((FILE *)v2) >> 6;
    v7 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (fileno((FILE *)v2) & 0x3F));
  }
  if ( (unsigned __int8)(v7[57] - 1) <= 1u )
    goto LABEL_20;
  if ( fileno((FILE *)v2) != -1 && fileno((FILE *)v2) != -2 )
  {
    v8 = (__int64)fileno((FILE *)v2) >> 6;
    v5 = (char *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 72LL * (fileno((FILE *)v2) & 0x3F));
  }
  v9 = 0;
  if ( v5[56] >= 0 )
  {
LABEL_20:
    v4 = *(_DWORD *)(v2 + 16) - 2 < 0;
    *(_DWORD *)(v2 + 16) -= 2;
    if ( !v4 )
    {
      **(_WORD **)v2 = a1;
      *(_QWORD *)v2 += 2LL;
      return sub_1401F8B20((unsigned __int64)&v12 ^ v15);
    }
    a2 = v2;
    goto LABEL_22;
  }
  if ( !(unsigned int)CDialog__CreateIndirect(
                        (CDialog *)&v13,
                        (     struct DLGTEMPLATE *)v14,
                        (struct CWnd *)5,
                        (void *)a1)
    && v13 > 0 )
  {
    v10 = v14;
    do
    {
      if ( (unsigned int)unknown_libname_207(*v10, v2) == -1 )
        break;
      ++v9;
      ++v10;
    }
    while ( v9 < v13 );
  }
  return sub_1401F8B20((unsigned __int64)&v12 ^ v15);
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *this, const struct DLGTEMPLATE *a2, struct CWnd *a3, void *a4);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140256CB4) ----------------------------------------------------
__int64            fputwchar(unsigned __int16 a1)
{
  char *v2; // rax

  v2 = sub_14020B528(1u);
  return sub_140256CE0(a1, (__int64)v2);
}

// 140256CB4: invalid function type 'wint_t __cdecl fputwchar(#57 Character)' has been ignored

//----- (0000000140256CE0) ----------------------------------------------------
__int64            sub_140256CE0(unsigned __int16 a1, __int64 a2)
{
  unsigned __int16 v5; // di

  if ( a2 )
  {
    sub_14020B5E0(a2);
    v5 = sub_140256B38(a1, a2);
    sub_14020B5EC(a2);
    return v5;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFF;
  }
}


//----- (0000000140256D50) ----------------------------------------------------
int         get_printf_count_output()
{
  return *(_QWORD *)&dword_140404A6C[19065665] == (_security_cookie | 1LL);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140256D90) ----------------------------------------------------
__int64 sub_140256D90()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return v2 + 8;
}


//----- (0000000140256DC0) ----------------------------------------------------
     unsigned __int16 *        sub_140256DC0()
{
  __int64 v0; // rax
       unsigned __int16 **v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(     unsigned __int16 ***)(v0 + 144);
  sub_140255D2C(v0, (__int64 *)&v2);
  return *v2;
}


//----- (0000000140256E00) ----------------------------------------------------
__int64            sub_140256E00(unsigned __int16 a1, __int16 a2)
{
  __int16 v3; // ax

  if ( a1 != 0xFFFF )
  {
    if ( a1 < 0x100u )
    {
      v3 = *(_WORD *)&off_140302598[a1][0];
      return (unsigned __int16)(a2 & v3);
    }
    if ( (unsigned int)sub_140269844() )
    {
      v3 = 0;
      return (unsigned __int16)(a2 & v3);
    }
  }
  return 0;
}

// 140302598: using guessed type char (*off_140302598)[2];

//----- (0000000140256EA0) ----------------------------------------------------
__int64            isctype_l(int a1, __int64 a2, struct __crt_locale_pointers *a3)
{
  __int64 v4; // r9
  __int64 v6; // [rsp+0h] [rbp-80h] BYREF
  char v7; // [rsp+40h] [rbp-40h] BYREF
  char v8; // [rsp+41h] [rbp-3Fh]
  char v9; // [rsp+42h] [rbp-3Eh]
  __int64 v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h] BYREF
  char v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h] BYREF
  __int16 v14; // [rsp+6Ch] [rbp-14h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v10, a3);
  if ( (unsigned int)(a1 + 1) <= 0x100 )
    goto LABEL_9;
  if ( *(__int16 *)(*(_QWORD *)v11 + 2LL * BYTE1(a1)) >= 0 )
  {
    v7 = a1;
    v4 = 1;
    v8 = 0;
  }
  else
  {
    v7 = BYTE1(a1);
    v4 = 2;
    v8 = a1;
    v9 = 0;
  }
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)sub_140262618(
                       (struct __crt_locale_pointers *)&v11,
                       1u,
                       (__int64)&v7,
                       v4,
                       (__int64)&v13,
                       *(_DWORD *)(v11 + 12),
                       1) )
  {
LABEL_9:
    if ( v12 )
      *(_DWORD *)(v10 + 936) &= ~2u;
  }
  else if ( v12 )
  {
    *(_DWORD *)(v10 + 936) &= ~2u;
  }
  return sub_1401F8B20((unsigned __int64)&v6 ^ v15);
}

// 140256EA0: invalid function type 'int __cdecl isctype_l(int C, int Type, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140256FEC) ----------------------------------------------------
__int64            sub_140256FEC(unsigned __int8 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = sub_1402573C0(a1);
  v3 = 0;
  if ( v2 || a1 == 95 )
    return 1;
  return v3;
}


//----- (0000000140257014) ----------------------------------------------------
__int64            sub_140257014(unsigned int a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_140257430(a1);
  v3 = 0;
  if ( v2 || a1 == 95 )
    return 1;
  return v3;
}


//----- (0000000140257044) ----------------------------------------------------
__int64            sub_140257044(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 263, (struct __crt_locale_pointers *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257080) ----------------------------------------------------
__int64            sub_140257080(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 259, (struct __crt_locale_pointers *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (00000001402570BC) ----------------------------------------------------
__int64            sub_1402570BC(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  if ( a1 == 9 )
    result = 64;
  else
    result = sub_140236ED8(a1, 64, (struct __crt_locale_pointers *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257104) ----------------------------------------------------
__int64            sub_140257104(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 32, (struct __crt_locale_pointers *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257140) ----------------------------------------------------
__int64            sub_140257140(unsigned int a1, struct __crt_locale_pointers *a2)
{
  int v3; // ecx
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v5, a2);
  v3 = sub_140236ED8(a1, 263, (struct __crt_locale_pointers *)&Locale);
  result = 0;
  if ( v7 )
    *(_DWORD *)(v5 + 936) &= ~2u;
  if ( v3 || a1 == 95 )
    return 1;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257190) ----------------------------------------------------
__int64            sub_140257190(unsigned int a1, struct __crt_locale_pointers *a2)
{
  int v3; // ecx
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v5, a2);
  v3 = sub_140236ED8(a1, 259, (struct __crt_locale_pointers *)&Locale);
  result = 0;
  if ( v7 )
    *(_DWORD *)(v5 + 936) &= ~2u;
  if ( v3 || a1 == 95 )
    return 1;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (00000001402571E0) ----------------------------------------------------
__int64            sub_1402571E0(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 4, (struct __crt_locale_pointers *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025721C) ----------------------------------------------------
__int64            sub_14025721C(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 279, (struct __crt_locale_pointers *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257258) ----------------------------------------------------
__int64            sub_140257258(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 2, (struct __crt_locale_pointers *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257294) ----------------------------------------------------
__int64            sub_140257294(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 343, (struct __crt_locale_pointers *)&v5);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (00000001402572D0) ----------------------------------------------------
__int64            sub_1402572D0(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 16, (struct __crt_locale_pointers *)&v5);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025730C) ----------------------------------------------------
__int64            sub_14025730C(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 8, (struct __crt_locale_pointers *)&v5);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257348) ----------------------------------------------------
__int64            sub_140257348(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 1, (struct __crt_locale_pointers *)&v5);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140257384) ----------------------------------------------------
__int64            sub_140257384(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 128, (struct __crt_locale_pointers *)&v5);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (00000001402573C0) ----------------------------------------------------
__int64            sub_1402573C0(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 263, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x107;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257430) ----------------------------------------------------
__int64            sub_140257430(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 259, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x103;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402574A0) ----------------------------------------------------
__int64            sub_1402574A0(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    if ( a1 == 9 )
      result = 64;
    else
      result = sub_140236ED8(a1, 64, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else if ( a1 == 9 )
  {
    return 64;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x40;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257524) ----------------------------------------------------
__int64            sub_140257524(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 32, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x20;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257590) ----------------------------------------------------
__int64            sub_140257590(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 4, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 4;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402575FC) ----------------------------------------------------
__int64            sub_1402575FC(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 279, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x117;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025766C) ----------------------------------------------------
__int64            sub_14025766C(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 2, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 2;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402576D8) ----------------------------------------------------
__int64            sub_1402576D8(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 343, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x157;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257748) ----------------------------------------------------
__int64            sub_140257748(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 16, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x10;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402577B4) ----------------------------------------------------
__int64            sub_1402577B4(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 8, (struct __crt_locale_pointers *)&v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 8;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257820) ----------------------------------------------------
__int64            sub_140257820(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 1, (struct __crt_locale_pointers *)&Locale);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 1;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025788C) ----------------------------------------------------
__int64            sub_14025788C(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 128, (struct __crt_locale_pointers *)&Locale);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x80;
    return v1;
  }
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302420: using guessed type __int16 *off_140302420;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402578FC) ----------------------------------------------------
__int64            fgetwc_nolock(FILE *Stream)
{
  __int64 v2; // rsi
  char *v3; // rbp
  __int64 v4; // rbx
  _BYTE *v5; // rdx
  unsigned __int16 *v6; // rbx
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int16 v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+52h] [rbp+Ah] BYREF
  __int64 DstCh; // [rsp+58h] [rbp+10h] BYREF
  char SrcCh; // [rsp+60h] [rbp+18h] BYREF
  char v17; // [rsp+61h] [rbp+19h]

  v2 = 1;
  v3 = (char *)&unk_1403022C0;
  if ( (*((_DWORD *)Stream + 5) & 0x1000) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      v5 = &unk_1403022C0;
    }
    else
    {
      v4 = (__int64)fileno(Stream) >> 6;
      v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( v5[57] )
    {
      v6 = &v13;
      while ( 1 )
      {
        v7 = getc_nolock(Stream);
        if ( v7 == -1 )
          break;
        *(_BYTE *)v6 = v7;
        v6 = (unsigned __int16 *)((char *)v6 + 1);
        if ( v6 == (unsigned __int16 *)&v14 )
          return v13;
      }
      return 0xFFFF;
    }
  }
  if ( (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    goto LABEL_25;
  if ( fileno(Stream) != -1 && fileno(Stream) != -2 )
  {
    v9 = (__int64)fileno(Stream) >> 6;
    v3 = (char *)(*(_QWORD *)&dword_140404A6C[2 * v9 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
  }
  if ( v3[56] >= 0 )
  {
LABEL_25:
    v12 = *((_DWORD *)Stream + 4);
    if ( v12 < 2 )
    {
      return _acrt_stdio_refill_and_read_wide_nolock(Stream);
    }
    else
    {
      *((_DWORD *)Stream + 4) = v12 - 2;
      result = **(unsigned __int16 **)Stream;
      *(_QWORD *)Stream += 2LL;
    }
  }
  else
  {
    v10 = getc_nolock(Stream);
    if ( v10 == -1 )
      return 0xFFFF;
    SrcCh = v10;
    if ( (sub_140256DC0()[(unsigned __int8)v10] & 0x8000u) != 0 )
    {
      v11 = getc_nolock(Stream);
      if ( v11 == -1 )
      {
        sub_14020CFB8(SrcCh, Stream);
        return 0xFFFF;
      }
      v17 = v11;
      v2 = 2;
    }
    if ( (unsigned int)sub_140254140((sr_anon_115 *)&DstCh, (sr_anon_49 *)&SrcCh, (char *)v2) == -1 )
    {
      *errno_sr() = 42;
      return 0xFFFF;
    }
    return (unsigned __int16)DstCh;
  }
  return result;
}

// 1402578FC: invalid function type 'wint_t __cdecl fgetwc_nolock(FILE *Stream)' has been ignored
// 1402578FC: using guessed type __int64 __fastcall fgetwc_nolock(FILE *Stream);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257AA0) ----------------------------------------------------
__int64 sub_140257AA0()
{
  char *v0; // rax

  v0 = sub_14020B528(0);
  return fgetwc_sr((FILE *)v0);
}

// 140257AC0: using guessed type __int64 __fastcall fgetwc(FILE *Stream);

//----- (0000000140257AB8) ----------------------------------------------------
// attributes: thunk
__int64            j__fgetwc_nolock(FILE *Stream)
{
  return fgetwc_nolock(Stream);
}

// 1402578FC: using guessed type __int64 __fastcall fgetwc_nolock(FILE *Stream);
// 140257AB8: using guessed type __int64 __fastcall j__fgetwc_nolock(FILE *Stream);

//----- (0000000140257AC0) ----------------------------------------------------
__int64            fgetwc_sr(FILE *Stream)
{
  unsigned __int16 v3; // di

  if ( Stream )
  {
    sub_14020B5E0((__int64)Stream);
    v3 = fgetwc_nolock(Stream);
    sub_14020B5EC((__int64)Stream);
    return v3;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFF;
  }
}

// 140257AC0: invalid function type 'wint_t __cdecl fgetwc(FILE *Stream)' has been ignored
// 1402578FC: using guessed type __int64 __fastcall fgetwc_nolock(FILE *Stream);
// 140257AC0: using guessed type __int64 __fastcall fgetwc(FILE *Stream);

//----- (0000000140257B20) ----------------------------------------------------
__int64 sub_140257B20()
{
  char *v0; // rax

  v0 = sub_14020B528(0);
  return fgetwc_sr((FILE *)v0);
}

// 140257B20: invalid function type 'wint_t __cdecl sub_140257B20()' has been ignored
// 140257AC0: using guessed type __int64 __fastcall fgetwc(FILE *Stream);

//----- (0000000140257B98) ----------------------------------------------------
__int64            ungetwc_text_mode_nolock(unsigned __int16 a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE *v5; // rdx
  char v6; // al
  int v7; // edx
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  char v10; // al
  __int64 v12; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int16 v13; // [rsp+20h] [rbp-20h]
  int SizeConverted; // [rsp+28h] [rbp-18h] BYREF
  char MbCh[4]; // [rsp+2Ch] [rbp-14h] BYREF
  char v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+38h] [rbp-8h]

  v13 = a1;
  if ( fileno((FILE *)a2) == -1 || fileno((FILE *)a2) == -2 )
  {
    v5 = &unk_1403022C0;
  }
  else
  {
    v4 = (__int64)fileno((FILE *)a2) >> 6;
    v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (fileno((FILE *)a2) & 0x3F));
  }
  v6 = v5[57];
  SizeConverted = 0;
  *(_DWORD *)MbCh = 0;
  v16 = 0;
  if ( v6 )
  {
    v7 = 2;
    MbCh[1] = HIBYTE(v13);
    SizeConverted = 2;
    MbCh[0] = a1;
  }
  else
  {
    if ( (unsigned int)CDialog__CreateIndirect(
                         (CDialog *)&SizeConverted,
                         (     struct DLGTEMPLATE *)MbCh,
                         (struct CWnd *)5,
                         (void *)a1) )
      return sub_1401F8B20((unsigned __int64)&v12 ^ v17);
    v7 = SizeConverted;
  }
  v8 = v7 + *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 < v8 )
  {
    if ( *(_DWORD *)(a2 + 16) || v7 > *(_DWORD *)(a2 + 32) )
      return sub_1401F8B20((unsigned __int64)&v12 ^ v17);
    *(_QWORD *)a2 = v8;
  }
  v9 = v7 - 1;
  if ( v7 - 1 >= 0 )
  {
    do
    {
      --*(_QWORD *)a2;
      v10 = MbCh[v9--];
      **(_BYTE **)a2 = v10;
    }
    while ( v9 >= 0 );
    v7 = SizeConverted;
  }
  *(_DWORD *)(a2 + 16) += v7;
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
  return sub_1401F8B20((unsigned __int64)&v12 ^ v17);
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *this, const struct DLGTEMPLATE *a2, struct CWnd *a3, void *a4);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257CD0) ----------------------------------------------------
__int64            ungetwc_nolock(unsigned __int16 a1, __int64 a2, ...)
{
  unsigned __int16 v2; // si
  int v5; // edx
  __int64 v6; // rbx
  char *v7; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int16 *v12; // rcx

  v2 = -1;
  if ( a1 == 0xFFFF )
    return v2;
  v5 = *(_DWORD *)(a2 + 20);
  if ( (v5 & 1) == 0 && ((v5 & 4) == 0 || (*(_DWORD *)(a2 + 20) & 2) != 0) )
    return v2;
  if ( !*(_QWORD *)(a2 + 8) )
    sub_140253EF8(a2);
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
  {
    if ( fileno((FILE *)a2) == -1 || fileno((FILE *)a2) == -2 )
    {
      v7 = (char *)&unk_1403022C0;
    }
    else
    {
      v6 = (__int64)fileno((FILE *)a2) >> 6;
      v7 = (char *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (fileno((FILE *)a2) & 0x3F));
    }
    if ( v7[56] < 0 )
      return ungetwc_text_mode_nolock(a1, a2);
  }
  v9 = *(_QWORD *)(a2 + 8) + 2LL;
  if ( *(_QWORD *)a2 < v9 )
  {
    if ( *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 32) < 2u )
      return v2;
    *(_QWORD *)a2 = v9;
  }
  v10 = *(_QWORD *)a2;
  v11 = *(_DWORD *)(a2 + 20) >> 12;
  v12 = (unsigned __int16 *)(*(_QWORD *)a2 - 2LL);
  *(_QWORD *)a2 = (uint64)(uintptr_t)(v12);
  if ( (v11 & 1) == 0 )
  {
    *v12 = a1;
    goto LABEL_22;
  }
  if ( *v12 == a1 )
  {
LABEL_22:
    *(_DWORD *)(a2 + 16) += 2;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
    return a1;
  }
  *(_QWORD *)a2 = v10;
  return v2;
}

// 140257CD0: invalid function type 'wint_t __cdecl ungetwc_nolock(wint_t Character, FILE *Stream)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140257E0C) ----------------------------------------------------
__int64            ungetwc_sr(unsigned __int16 a1, __int64 a2)
{
  unsigned __int16 v5; // di

  if ( a2 )
  {
    sub_14020B5E0(a2);
    v5 = ungetwc_nolock(a1, a2);
    sub_14020B5EC(a2);
    return v5;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFF;
  }
}

// 140257E0C: invalid function type 'wint_t __cdecl ungetwc(wint_t Character, FILE *Stream)' has been ignored

//----- (0000000140257E6C) ----------------------------------------------------
int         sub_140257E6C()
{
  __int16 control; // ax
  int common_round_control; // eax

  control = _acrt_fenv_get_control_sr();
  common_round_control = _acrt_fenv_get_common_round_control_sr(control);
  switch ( common_round_control )
  {
    case 0:
      return 1;
    case 256:
      return 3;
    case 512:
      return 2;
  }
  return -(common_round_control != 768);
}


//----- (0000000140257EB4) ----------------------------------------------------
int         fegetround_0()
{
  __int16 control; // ax

  control = _acrt_fenv_get_control_sr();
  return _acrt_fenv_get_common_round_control_sr(control);
}


//----- (0000000140257EC8) ----------------------------------------------------
__int64            common_dupenv_s__char(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdi
  _BYTE *v11; // rax

  sub_140258B64(11);
  v6 = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
  {
    v7 = sub_140258328(a3);
    v8 = v7;
    if ( v7 )
    {
      v9 = -1;
      do
        ++v9;
      while ( *(_BYTE *)(v7 + v9) );
      v10 = v9 + 1;
      v11 = (_BYTE *)j__calloc_base();
      *a1 = (uint64)(uintptr_t)(v11);
      if ( v11 )
      {
        if ( (unsigned int)strcpy_s_sr(v11, v10, v8) )
        {
          sub_14024CFBC();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        if ( a2 )
          *a2 = v10;
      }
      else
      {
        *errno_sr() = 12;
        v6 = 12;
      }
    }
  }
  else
  {
LABEL_2:
    v6 = 22;
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  sub_140258BB8(11);
  return v6;
}

// 140257FB9: control flows out of bounds to 140257FBA

//----- (0000000140257FBC) ----------------------------------------------------
__int64            common_dupenv_s__wchar_t(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdi
  _WORD *v11; // rax

  sub_140258B64(11);
  v6 = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
  {
    v7 = sub_1402583B4(a3);
    v8 = v7;
    if ( v7 )
    {
      v9 = -1;
      do
        ++v9;
      while ( *(_WORD *)(v7 + 2 * v9) );
      v10 = v9 + 1;
      v11 = (_WORD *)j__calloc_base();
      *a1 = (__int64)v11;
      if ( v11 )
      {
        if ( (unsigned int)sub_140259444(v11, v10, v8) )
        {
          sub_14024CFBC();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        if ( a2 )
          *a2 = v10;
      }
      else
      {
        *errno_sr() = 12;
        v6 = 12;
      }
    }
  }
  else
  {
LABEL_2:
    v6 = 22;
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  sub_140258BB8(11);
  return v6;
}

// 1402580AE: control flows out of bounds to 1402580AF

//----- (00000001402580B0) ----------------------------------------------------
__int64            common_dupenv_s_nolock__char(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  _BYTE *v10; // rax

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( !a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  v6 = sub_140258328(a3);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = -1;
  do
    ++v8;
  while ( *(_BYTE *)(v6 + v8) );
  v9 = v8 + 1;
  v10 = (_BYTE *)j__calloc_base();
  *a1 = (uint64)(uintptr_t)(v10);
  if ( v10 )
  {
    if ( (unsigned int)strcpy_s_sr(v10, v9, v7) )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( a2 )
      *a2 = v9;
    return 0;
  }
  *errno_sr() = 12;
  return 12;
}

// 140258180: control flows out of bounds to 140258185

//----- (0000000140258188) ----------------------------------------------------
__int64            common_dupenv_s_nolock__wchar_t(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  _WORD *v10; // rax

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( !a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  v6 = sub_1402583B4(a3);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = -1;
  do
    ++v8;
  while ( *(_WORD *)(v6 + 2 * v8) );
  v9 = v8 + 1;
  v10 = (_WORD *)j__calloc_base();
  *a1 = (__int64)v10;
  if ( v10 )
  {
    if ( (unsigned int)sub_140259444(v10, v9, v7) )
    {
      sub_14024CFBC();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( a2 )
      *a2 = v9;
    return 0;
  }
  *errno_sr() = 12;
  return 12;
}

// 140258260: control flows out of bounds to 140258265

//----- (0000000140258268) ----------------------------------------------------
unsigned __int64            sub_140258268(__m128i *a1)
{
  unsigned __int64 v3; // rbx

  if ( a1 && (unsigned __int64)strnlen_sr(a1, 0x7FFFu) < 0x7FFF )
  {
    sub_140258B64(11);
    v3 = sub_140258328((__int64)a1);
    sub_140258BB8(11);
    return v3;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (00000001402582C8) ----------------------------------------------------
unsigned __int64            sub_1402582C8(__m128i *a1)
{
  unsigned __int64 v3; // rbx

  if ( a1 && (unsigned __int64)sub_140254F48(a1, 0x7FFFu) < 0x7FFF )
  {
    sub_140258B64(11);
    v3 = sub_1402583B4((__int64)a1);
    sub_140258BB8(11);
    return v3;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (0000000140258328) ----------------------------------------------------
unsigned __int64            sub_140258328(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 i; // rax
  unsigned __int64 v6; // rcx

  v2 = (__int64 *)unknown_libname_764();
  v3 = v2;
  if ( v2 && a1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( *(_BYTE *)(a1 + v4) );
    for ( i = *v2; i; i = *v3 )
    {
      v6 = -1;
      do
        ++v6;
      while ( *(_BYTE *)(i + v6) );
      if ( v6 > v4 && *(_BYTE *)(i + v4) == 61 && !(unsigned int)strnicoll_sr(i, a1, v4) )
        return v4 + *v3 + 1;
      ++v3;
    }
  }
  return 0;
}


//----- (00000001402583B4) ----------------------------------------------------
__int64            sub_1402583B4(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 i; // rax
  unsigned __int64 v6; // rcx

  v2 = (__int64 *)unknown_libname_765();
  v3 = v2;
  if ( v2 && a1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( *(_WORD *)(a1 + 2 * v4) );
    for ( i = *v2; i; i = *v3 )
    {
      v6 = -1;
      do
        ++v6;
      while ( *(_WORD *)(i + 2 * v6) );
      if ( v6 > v4 && *(_WORD *)(i + 2 * v4) == 61 && !(unsigned int)wcsnicoll(i, a1, v4) )
        return *v3 + 2 * v4 + 2;
      ++v3;
    }
  }
  return 0;
}

// 14026A210: using guessed type __int64 __fastcall wcsnicoll(_QWORD, _QWORD, _QWORD);

//----- (000000014025844C) ----------------------------------------------------
__int64            getenv_s_0(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  sub_140258B64(11);
  v8 = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_8;
LABEL_7:
    v9 = 1;
    goto LABEL_9;
  }
  if ( !a3 )
    goto LABEL_7;
LABEL_8:
  v9 = 0;
LABEL_9:
  if ( !v9 )
  {
LABEL_2:
    v8 = 22;
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_19;
  }
  if ( a2 )
    *a2 = 0;
  v10 = sub_140258328(a4);
  if ( v10 )
  {
    v11 = -1;
    do
      ++v11;
    while ( *(_BYTE *)(v10 + v11) );
    v12 = v11 + 1;
    *a1 = v12;
    if ( a3 )
    {
      if ( v12 <= a3 )
      {
        if ( (unsigned int)strcpy_s_sr(a2, a3, v10) )
        {
          sub_14024CFBC();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
      }
      else
      {
        v8 = 34;
      }
    }
  }
LABEL_19:
  sub_140258BB8(11);
  return v8;
}

// 140258540: control flows out of bounds to 140258541
// 1402584A6: conditional instruction was optimized away because rdi.8!=0

//----- (0000000140258544) ----------------------------------------------------
__int64            sub_140258544(unsigned __int64 *a1, _WORD *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  sub_140258B64(11);
  v8 = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_8;
LABEL_7:
    v9 = 1;
    goto LABEL_9;
  }
  if ( !a3 )
    goto LABEL_7;
LABEL_8:
  v9 = 0;
LABEL_9:
  if ( !v9 )
  {
LABEL_2:
    v8 = 22;
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_19;
  }
  if ( a2 )
    *a2 = 0;
  v10 = sub_1402583B4(a4);
  if ( v10 )
  {
    v11 = -1;
    do
      ++v11;
    while ( *(_WORD *)(v10 + 2 * v11) );
    v12 = v11 + 1;
    *a1 = v12;
    if ( a3 )
    {
      if ( v12 <= a3 )
      {
        if ( (unsigned int)sub_140259444(a2, a3, v10) )
        {
          sub_14024CFBC();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
      }
      else
      {
        v8 = 34;
      }
    }
  }
LABEL_19:
  sub_140258BB8(11);
  return v8;
}

// 14025863A: control flows out of bounds to 14025863B
// 14025859E: conditional instruction was optimized away because rdi.8!=0

//----- (000000014025863C) ----------------------------------------------------
__int64            sub_14025863C(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_2;
  }
  else if ( a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  if ( a2 )
    *a2 = 0;
  v8 = sub_140258328(a4);
  if ( v8 )
  {
    v9 = -1;
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
    v10 = v9 + 1;
    *a1 = v10;
    if ( a3 )
    {
      if ( v10 > a3 )
        return 34;
      if ( (unsigned int)strcpy_s_sr(a2, a3, v8) )
      {
        sub_14024CFBC();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
  }
  return 0;
}

// 1402586F0: control flows out of bounds to 1402586F5

//----- (00000001402586F8) ----------------------------------------------------
__int64            sub_1402586F8(unsigned __int64 *a1, _WORD *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_2;
  }
  else if ( a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
  if ( a2 )
    *a2 = 0;
  v8 = sub_1402583B4(a4);
  if ( v8 )
  {
    v9 = -1;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9) );
    v10 = v9 + 1;
    *a1 = v10;
    if ( a3 )
    {
      if ( v10 > a3 )
        return 34;
      if ( (unsigned int)sub_140259444(a2, a3, v8) )
      {
        sub_14024CFBC();
        __debugbreak();
      }
    }
  }
  return 0;
}


//----- (0000000140258844) ----------------------------------------------------
__int64            sub_140258844(_QWORD *a1, __int64 *a2, __int64 a3)
{
  return common_dupenv_s__char(a1, a2, a3);
}


//----- (0000000140258864) ----------------------------------------------------
__int64            sub_140258864(__int64 *a1, __int64 *a2, __int64 a3)
{
  return common_dupenv_s__wchar_t(a1, a2, a3);
}


//----- (000000014025889C) ----------------------------------------------------
// attributes: thunk
__int64            getenv_s_sr(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  return getenv_s_0(a1, a2, a3, a4);
}


//----- (00000001402588A4) ----------------------------------------------------
__int64            sub_1402588A4(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // r11
  _BYTE *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  char v12; // al
  char v13; // al

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
      v12 = v9[v8];
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
      v13 = v9[v8];
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


//----- (000000014025896C) ----------------------------------------------------
__int64            strncpy_s_sr(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int *v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rbx
  _BYTE *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  char v13; // al
  char v14; // al

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
        v13 = v10[v9];
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
        v14 = v10[v9];
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

// 14025896C: invalid function type 'errno_t __cdecl strncpy_s(char *Destination, #65 SizeInBytes, const char *Source, #65 MaxCount)' has been ignored

//----- (0000000140258A84) ----------------------------------------------------
__int64            sub_140258A84(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // eax
  long v10; // ecx
  bool v11; // zf

  if ( a1 <= 0xC435 )
  {
    v9 = a1 - 50220;
    if ( a1 - 50220 <= 9 )
    {
      v10 = 679;
      if ( _bittest(&v10, v9) )
        goto LABEL_12;
    }
    v11 = a1 == 42;
    goto LABEL_10;
  }
  if ( a1 == 54936 )
    goto LABEL_12;
  if ( a1 > 0xDEA9 )
  {
    if ( a1 <= 0xDEB3 || a1 == 65000 )
      goto LABEL_12;
    v11 = a1 == 65001;
LABEL_10:
    if ( !v11 )
      goto LABEL_11;
LABEL_12:
    a2 = 0;
    return (unsigned int)WideCharToMultiByte(a1,(DWORD)a2,(const wchar_t *)(uintptr_t)a3,(int)a4,(char *)(uintptr_t)a5,(int)a6,(const char *)(uintptr_t)a7,(BOOL *)(uintptr_t)a8);
  }
LABEL_11:
  LODWORD(a2) = a2 & 0xFFFFFF7F;
  return (unsigned int)WideCharToMultiByte(a1,(DWORD)a2,(const wchar_t *)(uintptr_t)a3,(int)a4,(char *)(uintptr_t)a5,(int)a6,(const char *)(uintptr_t)a7,(BOOL *)(uintptr_t)a8);
}

// 14026E0B0: invalid function type 'int (__stdcall *WideCharToMultiByte)(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar)' has been ignored

//----- (0000000140258B1C) ----------------------------------------------------
char _acrt_initialize_locks()
{
  __int64 v0; // rbx

  v0 = 0;
  while ( (unsigned int)_acrt_InitializeCriticalSectionEx((__int64)&dword_140404A6C[10 * v0 + 19065669], 0xFA0u, 0) )
  {
    ++dword_140404A6C[19065809];
    v0 = (unsigned int)(v0 + 1);
    if ( (unsigned int)v0 >= 0xE )
      return 1;
  }
  _acrt_uninitialize_locks_0();
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9B0: using guessed type unsigned int;

//----- (0000000140258B64) ----------------------------------------------------
__int64            sub_140258B64(int a1)
{
  return ((__int64 (           *)(unsigned int *))EnterCriticalSection)(&dword_140404A6C[10 * a1 + 19065669]);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140258B80) ----------------------------------------------------
char _acrt_uninitialize_locks_0()
{
  unsigned int v0; // ebx

  v0 = dword_140404A6C[19065809];
  while ( v0 )
  {
    ((void (           *)(unsigned int *))DeleteCriticalSection)(&dword_140404A6C[10 * --v0 + 19065669]);
    --dword_140404A6C[19065809];
  }
  return 1;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9B0: using guessed type unsigned int;

//----- (0000000140258BB8) ----------------------------------------------------
__int64            sub_140258BB8(int a1)
{
  return ((__int64 (           *)(unsigned int *))LeaveCriticalSection)(&dword_140404A6C[10 * a1 + 19065669]);
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140258BD4) ----------------------------------------------------
void         lock_locales()
{
  sub_14024F91C();
  ((void (           *)(unsigned int *))EnterCriticalSection)(&dword_140404A6C[19065709]);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140258C20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1037(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140258C3C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1038(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140258C68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1039(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140258C84) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1040(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (0000000140258CA0) ----------------------------------------------------
__int64 sub_140258CA0()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return *(unsigned int *)(v2 + 12);
}


//----- (0000000140258CD0) ----------------------------------------------------
__int64 sub_140258CD0()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return *(unsigned int *)(v2 + 20);
}


//----- (0000000140258D00) ----------------------------------------------------
__int64 sub_140258D00()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return v2 + 296;
}


//----- (0000000140258D34) ----------------------------------------------------
__int64 sub_140258D34()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return *(unsigned int *)(v2 + 8);
}


//----- (0000000140258D74) ----------------------------------------------------
__int64            sub_140258D74(__int64 a1)
{
       sr_anon_49 *v1; // r8
  _WORD *v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbp
  _WORD *v6; // r12
  unsigned int *v7; // r15
  _BYTE *v8; // rcx
  int i; // eax
  _BYTE *j; // rcx
  int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // eax
  _BYTE *v14; // r8
  __int16 *v15; // r10
  int k; // edx
  __int16 v17; // cx
  _BYTE *m; // rdx
  int v19; // ecx
  __int128 v20; // xmm1
  char *v21; // rcx
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  char *v26; // r13
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  volatile signed __int32 *v46; // rcx
  void *v47; // rax
  volatile signed __int32 *v48; // rax
  __int64 v50; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v51; // [rsp+50h] [rbp-78h]
  void *Block; // [rsp+58h] [rbp-70h]
  char *v53; // [rsp+60h] [rbp-68h]
  char *v54; // [rsp+68h] [rbp-60h]
  _QWORD v55[2]; // [rsp+70h] [rbp-58h] BYREF
  _DWORD CPInfo[6]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v57; // [rsp+98h] [rbp-30h]

  v1 = *(     sr_anon_49 **)(a1 + 312);
  v55[0] = a1;
  v55[1] = 0;
  v3 = nullptr;
  v4 = 0;
  v5 = 0;
  v6 = nullptr;
  if ( v1 )
  {
    v7 = (unsigned int *)(a1 + 12);
    Block = nullptr;
    if ( !*(_DWORD *)(a1 + 12)
      && (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)v55, 0, v1, 0x1004u, (__int64 *)(a1 + 12)) )
    {
      goto LABEL_40;
    }
    Block = (void *)calloc_base();
    free_base(nullptr);
    v3 = (_WORD *)calloc_base();
    free_base(nullptr);
    v4 = calloc_base();
    free_base(nullptr);
    v5 = calloc_base();
    free_base(nullptr);
    v6 = (_WORD *)calloc_base();
    free_base(nullptr);
    if ( !Block )
      goto LABEL_40;
    if ( !v3 )
      goto LABEL_40;
    if ( !v6 )
      goto LABEL_40;
    if ( !v4 )
      goto LABEL_40;
    if ( !v5 )
      goto LABEL_40;
    v8 = v6;
    for ( i = 0; i < 256; ++i )
      *v8++ = i;
    if ( !(unsigned int)((__int64 (           *)(_QWORD, _DWORD *))GetCPInfo)(*v7, CPInfo) || CPInfo[0] > 5u )
      goto LABEL_40;
    v51 = LOWORD(CPInfo[0]);
    if ( LOWORD(CPInfo[0]) > 1u )
    {
      if ( *v7 == 65001 )
      {
        sub_1401FCD30((void *)(uintptr_t)(v6 + 64), 0x20u, 0x80u);
      }
      else
      {
        for ( j = (char *)&CPInfo[1] + 2; *j; j += 2 )
        {
          if ( !j[1] )
            break;
          v11 = (unsigned __int8)*j;
          if ( v11 <= (unsigned int)(unsigned __int8)j[1] )
          {
            do
            {
              v12 = v11++;
              *((_BYTE *)v6 + v12) = 32;
            }
            while ( v11 <= (unsigned __int8)j[1] );
          }
        }
      }
    }
    if ( (unsigned int)sub_14025A004(
                         nullptr,
                         *(_QWORD *)(a1 + 312),
                         0x100u,
                         (__int64)v6 + 1,
                         255,
                         (__int64 *)(v4 + 129),
                         255,
                         *v7,
                         0)
      && (unsigned int)sub_14025A004(
                         nullptr,
                         *(_QWORD *)(a1 + 312),
                         0x200u,
                         (__int64)v6 + 1,
                         255,
                         (__int64 *)(v5 + 129),
                         255,
                         *v7,
                         0)
      && (v13 = *v7,
          v53 = (char *)(v3 + 128),
          (unsigned int)sub_140262618(nullptr, 1u, (__int64)v6, 256, (__int64)(v3 + 128), v13, 0)) )
    {
      v3[127] = 0;
      *(_BYTE *)(v4 + 127) = 0;
      *(_BYTE *)(v5 + 127) = 0;
      *(_BYTE *)(v4 + 128) = 0;
      *(_BYTE *)(v5 + 128) = 0;
      v54 = (char *)(v3 + 127);
      if ( v51 > 1 )
      {
        if ( *v7 == 65001 )
        {
          v14 = (_BYTE *)(v5 + 256);
          v15 = v3 + 256;
          for ( k = 128; k <= 255; ++k )
          {
            v17 = 0x8000;
            if ( (unsigned int)(k - 194) > 0x32 )
              v17 = 0;
            *v15++ = v17;
            v14[v4 - v5] = k;
            *v14++ = k;
          }
        }
        else
        {
          for ( m = (char *)&CPInfo[1] + 2; *m; m += 2 )
          {
            if ( !m[1] )
              break;
            v19 = (unsigned __int8)*m;
            if ( v19 <= (unsigned int)(unsigned __int8)m[1] )
            {
              do
              {
                v3[v19 + 128] = 0x8000;
                *(_BYTE *)(v19 + v4 + 128) = v19;
                *(_BYTE *)(v19 + v5 + 128) = v19;
                ++v19;
              }
              while ( v19 <= (unsigned __int8)m[1] );
            }
          }
        }
      }
      v20 = *((_OWORD *)v3 + 33);
      v21 = (char *)(v3 + 320);
      *(_OWORD *)v3 = *((_OWORD *)v3 + 32);
      v22 = *((_QWORD *)v3 + 94);
      *((_OWORD *)v3 + 1) = v20;
      v23 = *((_OWORD *)v3 + 35);
      *((_OWORD *)v3 + 2) = *((_OWORD *)v3 + 34);
      *((_OWORD *)v3 + 3) = v23;
      v24 = *((_OWORD *)v3 + 37);
      *((_OWORD *)v3 + 4) = *((_OWORD *)v3 + 36);
      *((_OWORD *)v3 + 5) = v24;
      v25 = *((_OWORD *)v3 + 39);
      *((_OWORD *)v3 + 6) = *((_OWORD *)v3 + 38);
      v26 = (char *)(v3 + 64);
      v27 = *(_OWORD *)v21;
      *((_OWORD *)v26 - 1) = v25;
      v28 = *((_OWORD *)v21 + 1);
      *(_OWORD *)v26 = v27;
      v29 = *((_OWORD *)v21 + 2);
      *((_OWORD *)v26 + 1) = v28;
      v30 = *((_OWORD *)v21 + 3);
      *((_OWORD *)v26 + 2) = v29;
      v31 = *((_OWORD *)v21 + 4);
      *((_OWORD *)v26 + 3) = v30;
      v32 = *((_OWORD *)v21 + 5);
      *((_OWORD *)v26 + 4) = v31;
      v33 = *((_OWORD *)v21 + 6);
      *((_OWORD *)v26 + 5) = v32;
      *((_OWORD *)v26 + 6) = v33;
      *((_QWORD *)v26 + 14) = v22;
      *((_DWORD *)v26 + 30) = *((_DWORD *)v21 + 30);
      *((_WORD *)v26 + 62) = *((_WORD *)v21 + 62);
      LODWORD(v22) = *(_DWORD *)(v4 + 376);
      v34 = *(_OWORD *)(v4 + 272);
      *(_OWORD *)v4 = *(_OWORD *)(v4 + 256);
      v35 = *(_OWORD *)(v4 + 288);
      *(_OWORD *)(v4 + 16) = v34;
      v36 = *(_OWORD *)(v4 + 304);
      *(_OWORD *)(v4 + 32) = v35;
      v37 = *(_OWORD *)(v4 + 320);
      *(_OWORD *)(v4 + 48) = v36;
      v38 = *(_OWORD *)(v4 + 336);
      *(_OWORD *)(v4 + 64) = v37;
      v39 = *(_OWORD *)(v4 + 352);
      *(_OWORD *)(v4 + 80) = v38;
      *(_QWORD *)&v38 = *(_QWORD *)(v4 + 368);
      *(_OWORD *)(v4 + 96) = v39;
      *(_QWORD *)(v4 + 112) = v38;
      *(_DWORD *)(v4 + 120) = v22;
      *(_WORD *)(v4 + 124) = *(_WORD *)(v4 + 380);
      *(_BYTE *)(v4 + 126) = *(_BYTE *)(v4 + 382);
      LODWORD(v22) = *(_DWORD *)(v5 + 376);
      v40 = *(_OWORD *)(v5 + 272);
      *(_OWORD *)v5 = *(_OWORD *)(v5 + 256);
      v41 = *(_OWORD *)(v5 + 288);
      *(_OWORD *)(v5 + 16) = v40;
      v42 = *(_OWORD *)(v5 + 304);
      *(_OWORD *)(v5 + 32) = v41;
      v43 = *(_OWORD *)(v5 + 320);
      *(_OWORD *)(v5 + 48) = v42;
      v44 = *(_OWORD *)(v5 + 336);
      *(_OWORD *)(v5 + 64) = v43;
      v45 = *(_OWORD *)(v5 + 352);
      *(_OWORD *)(v5 + 80) = v44;
      *(_QWORD *)&v44 = *(_QWORD *)(v5 + 368);
      *(_OWORD *)(v5 + 96) = v45;
      *(_QWORD *)(v5 + 112) = v44;
      *(_DWORD *)(v5 + 120) = v22;
      *(_WORD *)(v5 + 124) = *(_WORD *)(v5 + 380);
      *(_BYTE *)(v5 + 126) = *(_BYTE *)(v5 + 382);
      v46 = *(volatile signed __int32 **)(a1 + 256);
      if ( v46 && _InterlockedExchangeAdd(v46, 0xFFFFFFFF) == 1 )
      {
        free_base((void *)(*(_QWORD *)(a1 + 264) - 254LL));
        free_base((void *)(*(_QWORD *)(a1 + 272) - 128LL));
        free_base((void *)(*(_QWORD *)(a1 + 280) - 128LL));
        free_base(*(void **)(a1 + 256));
      }
      v47 = Block;
      *(_DWORD *)Block = 1;
      *(_QWORD *)(a1 + 256) = (uint64)(uintptr_t)(v47);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(v53);
      *(_QWORD *)(a1 + 264) = (uint64)(uintptr_t)(v54);
      *(_QWORD *)(a1 + 272) = v4 + 128;
      *(_QWORD *)(a1 + 280) = v5 + 128;
      *(_DWORD *)(a1 + 8) = v51;
    }
    else
    {
LABEL_40:
      free_base(Block);
      free_base(v3);
      free_base((void *)v4);
      free_base((void *)v5);
    }
    free_base(v6);
  }
  else
  {
    v48 = *(volatile signed __int32 **)(a1 + 256);
    if ( v48 )
      _InterlockedDecrement(v48);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(asc_14028B810);
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = (uint64)(uintptr_t)(&unk_14028BA90);
    *(_QWORD *)(a1 + 280) = (uint64)(uintptr_t)(&unk_14028BC10);
    *(_DWORD *)(a1 + 8) = 1;
  }
  return sub_1401F8B20((unsigned __int64)&v50 ^ v57);
}

// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored
// 14028B810: using guessed type __int16 asc_14028B810[33];

//----- (00000001402593D8) ----------------------------------------------------
__int64            sub_1402593D8(_WORD *a1, __int64 a2, __int64 a3)
{
  int *v3; // rax
  unsigned int v4; // ebx
  _WORD *v6; // r9
  __int64 v7; // r8
  __int16 v8; // ax

  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v3 = errno_sr();
    v4 = 22;
LABEL_6:
    *v3 = v4;
    sub_14024CF6C();
    return v4;
  }
  v6 = a1;
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = *(_WORD *)((char *)v6 + v7);
    *v6++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    v3 = errno_sr();
    v4 = 34;
    goto LABEL_6;
  }
  return 0;
}


//----- (0000000140259444) ----------------------------------------------------
__int64            sub_140259444(_WORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int *v4; // rax
  _WORD *v6; // r9
  __int64 v7; // r8
  __int16 v8; // ax

  v3 = 0;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v4 = errno_sr();
    v3 = 22;
LABEL_6:
    *v4 = v3;
    sub_14024CF6C();
    return v3;
  }
  v6 = a1;
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = *(_WORD *)((char *)v6 + v7);
    *v6++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    v4 = errno_sr();
    v3 = 34;
    goto LABEL_6;
  }
  return v3;
}


//----- (0000000140259504) ----------------------------------------------------
__int64 sub_140259504()
{
  return ((__int64 (*)(void))MultiByteToWideChar)();
}

// 14026E0A0: invalid function type 'int (__stdcall *MultiByteToWideChar)(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)' has been ignored

//----- (0000000140259560) ----------------------------------------------------
__int64            _loctotime32_t_0(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  unsigned int v7; // ebx
  __int64 v9; // rdi
  int v10; // esi
  _QWORD v12[6]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+34h] [rbp-44h] BYREF
  int v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+3Ch] [rbp-3Ch] BYREF
  _DWORD v17[10]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp-10h]

  v7 = a1 - 1900;
  v13 = a4;
  v9 = a2;
  if ( a1 - 1900 >= 70
    && v7 <= 0x8A
    && (unsigned int)(a2 - 1) <= 0xB
    && a3 > 0
    && (a3 <= dword_14028BF18[a2] - dword_14028BF18[a2 - 1] || sub_1402374E4(v7) && (_DWORD)v9 == 2 && a3 <= 29)
    && v13 <= 0x17
    && a5 <= 0x3B
    && a6 <= 0x3B )
  {
    v10 = dword_14028BF18[v9 - 1] + a3;
    if ( sub_1402374E4(v7) && (int)v9 > 2 )
      ++v10;
    sub_140237FC0();
    v16 = 0;
    v15 = 0;
    v14 = 0;
    if ( (unsigned int)sub_140237138(&v16) || (unsigned int)sub_140237168(&v15) || (unsigned int)sub_140237198(&v14) )
    {
      v12[4] = 0;
      sub_14024CFBC();
      __debugbreak();
    }
    if ( a7 != 1 )
    {
      v17[7] = v10;
      v17[5] = v7;
      v17[4] = v9 - 1;
      v17[2] = v13;
      v17[1] = a5;
      v17[0] = a6;
      if ( a7 == -1 )
      {
        if ( v16 )
          sub_140238034((struct tm *)v17);
      }
    }
  }
  else
  {
    *errno_sr() = 22;
  }
  return sub_1401F8B20((unsigned __int64)v12 ^ v18);
}

// 14028BF18: using guessed type int dword_14028BF18[13];

//----- (0000000140259770)
__int64 _loctotime64_t_0(int a1,int a2,int a3,unsigned int a4,unsigned int a5,unsigned int a6,int a7)
{
 unsigned int year=(unsigned int)a1-1900u;
 if(year<70 || year>1101 || (unsigned int)a2-1u>11 || a3<=0 ||
    (a3>dword_14028BF18[a2]-dword_14028BF18[a2-1] &&
     !(sub_1402374E4(year) && a2==2 && a3<=29)) || a4>23 || a5>59 || a6>59){
   *errno_sr()=22;return -1;
 }
 int yday=dword_14028BF18[a2-1]+a3;
 if(sub_1402374E4(year) && a2>2)++yday;
 sub_140237FC0();
 int daylight=0,dstbias=0,timezone=0;
 if((unsigned int)sub_140237138((_DWORD *)&daylight) ||
    (unsigned int)sub_140237168((_DWORD *)&dstbias) ||
    (unsigned int)sub_140237198((_DWORD *)&timezone)){
   sub_14024CFBC();__debugbreak();
 }
 int64_t days=((int64_t)year-70)*365+(year-1)/4-17+(year+299)/400-(year-1)/100+yday;
 int64_t result=((days*24+(int32_t)a4)*60+(int32_t)a5)*60+(int32_t)a6+timezone;
 if(a7==1)return result+dstbias;
 if(a7==-1 && daylight){
   struct tm calendar={0};
   calendar.tm_sec=a6;calendar.tm_min=a5;calendar.tm_hour=a4;
   calendar.tm_mon=a2-1;calendar.tm_year=year;calendar.tm_yday=yday;
   if((int)sub_140238034(&calendar))return result+dstbias;
 }
 return result;
}

//----- (000000014025999C) ----------------------------------------------------
bool            sub_14025999C(int a1, int a2, int a3)
{
  return a3 > 0 && (a3 <= dword_14028BF18[a2 + 1] - dword_14028BF18[a2] || sub_1402374E4(a1) && a2 == 1 && a3 <= 29);
}

// 14028BF18: using guessed type int dword_14028BF18[13];

//----- (00000001402599E8) ----------------------------------------------------
// attributes: thunk
__int64            _loctotime32_t_sr(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  return _loctotime32_t_0(a1, a2, a3, a4, a5, a6, a7);
}


//----- (00000001402599F0) ----------------------------------------------------
// attributes: thunk
__int64            _loctotime64_t_sr(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  return _loctotime64_t_0(a1, a2, a3, a4, a5, a6, a7);
}


//----- (00000001402599F8) ----------------------------------------------------
__int64            sub_1402599F8(unsigned __int16 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_140256E00(a1, 263);
  v3 = 0;
  if ( v2 || a1 == 95 )
    return 1;
  return v3;
}

// 1402599F8: invalid function type 'int __cdecl sub_1402599F8(wint_t C)' has been ignored

//----- (0000000140259A24) ----------------------------------------------------
__int64            sub_140259A24(unsigned __int16 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_140256E00(a1, 259);
  v3 = 0;
  if ( v2 || a1 == 95 )
    return 1;
  return v3;
}

// 140259A24: invalid function type 'int __cdecl sub_140259A24(wint_t C)' has been ignored

//----- (0000000140259A50) ----------------------------------------------------
__int64            isleadbyte_l(int a1, struct __crt_locale_pointers *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  v2 = a1;
  sub_140213644((_LocaleUpdate *)v4, a2);
  if ( (unsigned int)(v2 + 1) > 0x100 )
    result = 0;
  else
    result = *(_WORD *)(*(_QWORD *)v4[1] + 2 * v2) & 0x8000;
  if ( v5 )
    *(_DWORD *)(v4[0] + 936LL) &= ~2u;
  return result;
}

// 140259A50: invalid function type 'int __cdecl isleadbyte_l(int C, #86 Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140259AD8) ----------------------------------------------------
__int64            sub_140259AD8(unsigned __int16 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_140256E00(a1, 263);
  v3 = 0;
  if ( v2 || a1 == 95 )
    return 1;
  return v3;
}

// 140259AD8: invalid function type 'int __cdecl sub_140259AD8(wint_t C)' has been ignored

//----- (0000000140259B04) ----------------------------------------------------
__int64            sub_140259B04(unsigned __int16 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_140256E00(a1, 259);
  v3 = 0;
  if ( v2 || a1 == 95 )
    return 1;
  return v3;
}

// 140259B04: invalid function type 'int __cdecl sub_140259B04(wint_t C)' has been ignored

//----- (0000000140259B90) ----------------------------------------------------
int         isleadbyte(int C)
{
  __int64 v1; // rbx
  int result; // eax
  _QWORD v3[3]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+38h] [rbp-10h]

  v1 = C;
  sub_140213644((_LocaleUpdate *)v3, nullptr);
  if ( (unsigned int)(v1 + 1) > 0x100 )
    result = 0;
  else
    result = *(_WORD *)(*(_QWORD *)v3[1] + 2 * v1) & 0x8000;
  if ( v4 )
    *(_DWORD *)(v3[0] + 936LL) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140259C9C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_885(__int64 *a1)
{
  __int64 v1; // rcx
  _DWORD *v2; // rcx

  v1 = *a1;
  if ( v1 )
  {
    v2 = (_DWORD *)(v1 - 16);
    if ( *v2 == 56797 )
      free_base(v2);
  }
}


//----- (0000000140259CC8) ----------------------------------------------------
__int64            sub_140259CC8(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        __int64 *a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // r14d
  signed int v11; // eax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rsp
  __int64 *v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // r15
  int v19; // eax
  unsigned int v20; // edi
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rsp
  __int64 *v24; // rbx
  __int64 *v25; // rax
  _BYTE v27[32]; // [rsp+0h] [rbp-50h] BYREF
  __int64 *v28; // [rsp+20h] [rbp-30h]
  __int64 v29; // [rsp+28h] [rbp-28h]
  __int64 v30; // [rsp+30h] [rbp-20h]
  __int64 v31; // [rsp+38h] [rbp-18h]
  __int64 v32[6]; // [rsp+50h] [rbp+0h] BYREF

  v32[0] = a2;
  if ( a5 > 0 )
    _strncnt_sr(a4, a5);
  v10 = a8;
  if ( !a8 )
    v10 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  LODWORD(v29) = 0;
  v28 = nullptr;
  v11 = sub_140259504();
  v12 = v11;
  if ( v11 )
  {
    v13 = (2LL * v11 + 16) & -(__int64)(2LL * v11 < (unsigned __int64)(2LL * v11 + 16));
    if ( !v13 )
    {
      v16 = nullptr;
      goto LABEL_16;
    }
    if ( v13 > 0x400 )
    {
      v17 = (__int64 *)malloc_base();
      v16 = v17;
      if ( !v17 )
      {
LABEL_16:
        if ( !v16 )
          goto LABEL_40;
        LODWORD(v29) = v12;
        v28 = v16;
        if ( !(unsigned int)sub_140259504() )
          goto LABEL_40;
        v18 = v32[0];
        v19 = sub_14024F4D0(v32[0], a3, (__int64)v16, v12, 0, 0, 0, 0, 0);
        v20 = v19;
        if ( !v19 )
          goto LABEL_40;
        if ( (a3 & 0x400) != 0 )
        {
          if ( a7 && v19 <= a7 )
            sub_14024F4D0(v18, a3, (__int64)v16, v12, (__int64)a6, a7, 0, 0, 0);
          goto LABEL_40;
        }
        v21 = (2LL * v19 + 16) & -(__int64)(2LL * v19 < (unsigned __int64)(2LL * v19 + 16));
        if ( v21 )
        {
          if ( v21 > 0x400 )
          {
            v25 = (__int64 *)malloc_base();
            v24 = v25;
            if ( !v25 )
              goto LABEL_33;
            *(_DWORD *)v25 = 56797;
          }
          else
          {
            v22 = v21 + 15;
            if ( v21 + 15 < v21 )
              v22 = 0xFFFFFFFFFFFFFF0LL;
            v23 = alloca(v22 & 0xFFFFFFFFFFFFFFF0uLL);
            v24 = v32;
            if ( v27 == (_BYTE *)-80LL )
              goto LABEL_40;
            LODWORD(v32[0]) = 52428;
          }
          v24 += 2;
        }
        else
        {
          v24 = nullptr;
        }
LABEL_33:
        if ( v24 )
        {
          if ( (unsigned int)sub_14024F4D0(v18, a3, (__int64)v16, v12, (__int64)v24, v20, 0, 0, 0) )
          {
            v31 = 0;
            v30 = 0;
            if ( a7 )
            {
              LODWORD(v29) = a7;
              v28 = a6;
            }
            else
            {
              LODWORD(v29) = 0;
              v28 = nullptr;
            }
            if ( (unsigned int)sub_140258A84(v10, 0, (__int64)v24, v20, (__int64)v28, v29, v30, v31) )
            {
              if ( *((_DWORD *)v24 - 4) != 56797 )
                goto LABEL_40;
              goto LABEL_39;
            }
          }
          if ( *((_DWORD *)v24 - 4) == 56797 )
LABEL_39:
            free_base(v24 - 2);
        }
LABEL_40:
        if ( v16 && *((_DWORD *)v16 - 4) == 56797 )
          free_base(v16 - 2);
        return sub_1401F8B20((unsigned __int64)v32 ^ v32[1]);
      }
      *(_DWORD *)v17 = 56797;
    }
    else
    {
      v14 = v13 + 15;
      if ( v13 + 15 < v13 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = v32;
      if ( v27 == (_BYTE *)-80LL )
        goto LABEL_40;
      LODWORD(v32[0]) = 52428;
    }
    v16 += 2;
    goto LABEL_16;
  }
  return sub_1401F8B20((unsigned __int64)v32 ^ v32[1]);
}


//----- (000000014025A004) ----------------------------------------------------
__int64            sub_14025A004(
        struct __crt_locale_pointers *a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        __int64 *a6,
        int a7,
        unsigned int a8, ...)
{
  __int64 result; // rax
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-20h] BYREF

  sub_140213644((_LocaleUpdate *)&v12, a1);
  result = sub_140259CC8((__int64)v13, a2, a3, a4, a5, a6, a7, a8);
  if ( v13[16] )
    *(_DWORD *)(v12 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025A09C) ----------------------------------------------------
void         freea(void *Memory)
{
  _DWORD *v1; // rcx

  if ( Memory )
  {
    v1 = (char *)Memory - 16;
    if ( *v1 == 56797 )
      free_base(v1);
  }
}


//----- (000000014025A0BC) ----------------------------------------------------
__int64            realloc_base(void *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( !a1 )
    return sr_path_malloc(a2);
  if ( !a2 )
  {
    free_base(a1);
    return 0;
  }
  if ( a2 > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_6:
    *errno_sr() = 12;
    return 0;
  }
  while ( 1 )
  {
    result = ((__int64 (           *)(_QWORD, _QWORD, void *, unsigned __int64))HeapReAlloc)(
               *(_QWORD *)&dword_140404A6C[19065847],
               0,
               a1,
               a2);
    if ( result )
      return result;
    if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(a2) )
      goto LABEL_6;
  }
}

// 14025A0BC: invalid function type 'void *__cdecl realloc_base(void *Block, #66 Size)' has been ignored
// 14026E098: invalid function type 'LPVOID (__stdcall *HeapReAlloc)(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)' has been ignored
// 140260BE4: using guessed type __int64 __fastcall callnewh(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025A138) ----------------------------------------------------
__int64            sub_14025A138(int a1)
{
  __int64 result; // rax
  int v2; // ebx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  result = dword_140404A6C[19065810];
  v2 = 0;
  if ( !dword_140404A6C[19065810] )
  {
    v3 = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED04((__int64)&v3);
    LOBYTE(v2) = v3 == 1;
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065810], v2 + 1);
    return (unsigned int)(v2 + 1);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025A184) ----------------------------------------------------
__int64            sub_14025A184(int a1)
{
  __int64 result; // rax
  int v2; // ebx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  result = dword_140404A6C[19065811];
  v2 = 0;
  if ( !dword_140404A6C[19065811] )
  {
    v3 = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ECB4((__int64)&v3);
    LOBYTE(v2) = v3 == 1;
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065811], v2 + 1);
    return (unsigned int)(v2 + 1);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025A1D0) ----------------------------------------------------
__int64            sub_14025A1D0(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  result = dword_140404A6C[19065812];
  if ( !dword_140404A6C[19065812] )
  {
    v2 = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED54((__int64)&v2);
    switch ( v2 )
    {
      case 1:
        result = 2;
        break;
      case 2:
        result = 1;
        break;
      case 3:
        result = 3;
        break;
      default:
        result = 4;
        break;
    }
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065812], result);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025A23C) ----------------------------------------------------
__int64            sub_14025A23C(int a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = 0;
  if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
    sub_14024EC64((__int64)&v3);
  LOBYTE(v1) = v3 != 1;
  return v1;
}


//----- (000000014025A2E0) ----------------------------------------------------
__int64 sub_14025A2E0()
{
  unsigned __int32 v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065810];
  if ( !dword_140404A6C[19065810] )
  {
    v2 = 0;
    v0 = 1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
    {
      sub_14024ED04((__int64)&v2);
      if ( v2 == 1 )
        v0 = 2;
    }
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065810], v0);
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9B4: using guessed type unsigned int;

//----- (000000014025A334) ----------------------------------------------------
__int64 sub_14025A334()
{
  unsigned __int32 v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065811];
  if ( !dword_140404A6C[19065811] )
  {
    v0 = 1;
    v2 = 1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) < 0 || (sub_14024ECB4((__int64)&v2), v2 == 1) )
      v0 = 2;
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065811], v0);
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9B8: using guessed type unsigned int;

//----- (000000014025A388) ----------------------------------------------------
__int64 sub_14025A388()
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) < 0 )
    return 1;
  sub_14024EC64((__int64)&v2);
  if ( v2 != 1 )
    return 1;
  return v0;
}


//----- (000000014025A3C4) ----------------------------------------------------
__int64 sub_14025A3C4()
{
  unsigned __int32 v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065812];
  if ( !dword_140404A6C[19065812] )
  {
    v0 = 2;
    v2 = 2;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED54((__int64)&v2);
    if ( v2 != 1 )
    {
      if ( v2 == 2 )
      {
        v0 = 1;
      }
      else if ( v2 == 3 )
      {
        v0 = 3;
      }
      else
      {
        v0 = 4;
      }
    }
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065812], v0);
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9BC: using guessed type unsigned int;

//----- (000000014025A430) ----------------------------------------------------
__int64            sub_14025A430(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned __int64 v5; // rbx
  char *v9; // r11
  char *v10; // r8
  _BYTE *v11; // rsi
  char *v12; // r9
  unsigned int v13; // edx
  char v14; // al
  char v16; // cl

  v5 = 0;
  v9 = a2;
  if ( a5 )
  {
    *a2 = 45;
    v9 = a2 + 1;
    v5 = 1;
    a1 = -a1;
  }
  v10 = v9;
  do
  {
    v11 = v9 + 1;
    v12 = v9;
    v13 = a1 % a4;
    a1 /= a4;
    v14 = 87;
    if ( v13 <= 9 )
      v14 = 48;
    ++v5;
    *v9 = v13 + v14;
    if ( !a1 )
      break;
    ++v9;
  }
  while ( v5 < a3 );
  if ( v5 < a3 )
  {
    *v11 = 0;
    do
    {
      v16 = *v12;
      *v12-- = *v10;
      *v10++ = v16;
    }
    while ( v10 < v12 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    sub_14024CF6C();
    return 34;
  }
}


//----- (000000014025A4F8) ----------------------------------------------------
__int64            sub_14025A4F8(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int16 *v8; // r10
  unsigned __int64 v9; // rbx
  __int16 *v10; // r8
  _WORD *v11; // rsi
  __int16 *v12; // r9
  unsigned int v13; // edx
  __int16 v14; // ax
  __int16 v16; // cx

  v8 = a2;
  v9 = 0;
  if ( a5 )
  {
    a1 = -a1;
    *a2 = 45;
    v9 = 1;
    v8 = a2 + 1;
  }
  v10 = v8;
  do
  {
    v11 = v8 + 1;
    v12 = v8;
    v13 = a1 % a4;
    a1 /= a4;
    v14 = 87;
    if ( v13 <= 9 )
      v14 = 48;
    ++v9;
    *v8 = v13 + v14;
    if ( !a1 )
      break;
    ++v8;
  }
  while ( v9 < a3 );
  if ( v9 < a3 )
  {
    *v11 = 0;
    do
    {
      v16 = *v12;
      *v12-- = *v10;
      *v10++ = v16;
    }
    while ( v10 < v12 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    sub_14024CF6C();
    return 34;
  }
}


//----- (000000014025A5CC) ----------------------------------------------------
__int64            sub_14025A5CC(unsigned __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned __int64 v5; // rbx
  char *v8; // r11
  char *v9; // r8
  unsigned __int64 v10; // rbp
  _BYTE *v11; // rsi
  char *v12; // r9
  unsigned __int64 v13; // rdx
  char v14; // al
  char v16; // cl

  v5 = 0;
  v8 = a2;
  if ( a5 )
  {
    *a2 = 45;
    v8 = a2 + 1;
    v5 = 1;
    a1 = -(__int64)a1;
  }
  v9 = v8;
  v10 = a4;
  do
  {
    v11 = v8 + 1;
    v12 = v8;
    v13 = a1 % v10;
    a1 /= v10;
    v14 = 87;
    if ( (unsigned int)v13 <= 9 )
      v14 = 48;
    ++v5;
    *v8 = v13 + v14;
    if ( !a1 )
      break;
    ++v8;
  }
  while ( v5 < a3 );
  if ( v5 < a3 )
  {
    *v11 = 0;
    do
    {
      v16 = *v12;
      *v12-- = *v9;
      *v9++ = v16;
    }
    while ( v9 < v12 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    sub_14024CF6C();
    return 34;
  }
}


//----- (000000014025A698) ----------------------------------------------------
__int64            sub_14025A698(unsigned __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int16 *v7; // r11
  unsigned __int64 v8; // rbx
  __int16 *v9; // r8
  unsigned __int64 v10; // rbp
  _WORD *v11; // rsi
  __int16 *v12; // r9
  unsigned __int64 v13; // rdx
  __int16 v14; // ax
  __int16 v16; // cx

  v7 = a2;
  v8 = 0;
  if ( a5 )
  {
    a1 = -(__int64)a1;
    *a2 = 45;
    v8 = 1;
    v7 = a2 + 1;
  }
  v9 = v7;
  v10 = a4;
  do
  {
    v11 = v7 + 1;
    v12 = v7;
    v13 = a1 % v10;
    a1 /= v10;
    v14 = 87;
    if ( (unsigned int)v13 <= 9 )
      v14 = 48;
    ++v8;
    *v7 = v13 + v14;
    if ( !a1 )
      break;
    ++v7;
  }
  while ( v8 < a3 );
  if ( v8 < a3 )
  {
    *v11 = 0;
    do
    {
      v16 = *v12;
      *v12-- = *v9;
      *v9++ = v16;
    }
    while ( v9 < v12 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    sub_14024CF6C();
    return 34;
  }
}


//----- (000000014025A774) ----------------------------------------------------
__int64            sub_14025A774(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  int *v5; // rax
  unsigned int v6; // ebx

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    v5 = errno_sr();
    v6 = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    v5 = errno_sr();
    v6 = 22;
LABEL_3:
    *v5 = v6;
    sub_14024CF6C();
    return v6;
  }
  return sub_14025A430(a1, a2, a3, a4, a5);
}


//----- (000000014025A7DC) ----------------------------------------------------
__int64            sub_14025A7DC(
        unsigned int a1,
        __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *v5; // rax
  unsigned int v6; // ebx

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    v5 = errno_sr();
    v6 = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    v5 = errno_sr();
    v6 = 22;
LABEL_3:
    *v5 = v6;
    sub_14024CF6C();
    return v6;
  }
  return sub_14025A4F8(a1, a2, a3, a4, a5);
}


//----- (000000014025A848) ----------------------------------------------------
__int64            sub_14025A848(
        unsigned __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *v5; // rax
  unsigned int v6; // ebx

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    v5 = errno_sr();
    v6 = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    v5 = errno_sr();
    v6 = 22;
LABEL_3:
    *v5 = v6;
    sub_14024CF6C();
    return v6;
  }
  return sub_14025A5CC(a1, a2, a3, a4, a5);
}


//----- (000000014025A8B0) ----------------------------------------------------
__int64            sub_14025A8B0(
        unsigned __int64 a1,
        __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *v5; // rax
  unsigned int v6; // ebx

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    v5 = errno_sr();
    v6 = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    v5 = errno_sr();
    v6 = 22;
LABEL_3:
    *v5 = v6;
    sub_14024CF6C();
    return v6;
  }
  return sub_14025A698(a1, a2, a3, a4, a5);
}


//----- (000000014025A91C) ----------------------------------------------------
char *        i64toa(__int64 Value, char *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A5CC(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}


//----- (000000014025A950) ----------------------------------------------------
__int64            i64toa_s(signed __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A848(a1, a2, a3, a4, v4);
}

// 14025A950: invalid function type 'errno_t __cdecl i64toa_s(__int64 Value, char *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025A974) ----------------------------------------------------
sr_anon_49 *        i64tow(__int64 Value, sr_anon_49 *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A698(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}


//----- (000000014025A9A8) ----------------------------------------------------
__int64            i64tow_s(signed __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A8B0(a1, a2, a3, a4, v4);
}

// 14025A9A8: invalid function type 'errno_t __cdecl i64tow_s(__int64 Value, #49 *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025A9CC) ----------------------------------------------------
char *        itoa(int Value, char *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}


//----- (000000014025A9FC) ----------------------------------------------------
__int64            itoa_s(signed int a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A774(a1, a2, a3, a4, v4);
}

// 14025A9FC: invalid function type 'errno_t __cdecl itoa_s(int Value, char *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AA1C) ----------------------------------------------------
sr_anon_49 *        itow(int Value, sr_anon_49 *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A4F8(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}


//----- (000000014025AA4C) ----------------------------------------------------
__int64            itow_s(signed int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A7DC(a1, a2, a3, a4, v4);
}

// 14025AA4C: invalid function type 'errno_t __cdecl itow_s(int Value, #49 *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AA6C) ----------------------------------------------------
char *        itoa_0(int Value, char *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}


//----- (000000014025AA9C) ----------------------------------------------------
__int64            itoa_s_0(signed int a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A774(a1, a2, a3, a4, v4);
}

// 14025AA9C: invalid function type 'errno_t __cdecl itoa_s_0(int Value, char *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AABC) ----------------------------------------------------
sr_anon_49 *        itow_0(int Value, sr_anon_49 *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A4F8(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}


//----- (000000014025AAEC) ----------------------------------------------------
__int64            itow_s_0(signed int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A7DC(a1, a2, a3, a4, v4);
}

// 14025AAEC: invalid function type 'errno_t __cdecl itow_s_0(int Value, #49 *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AB0C) ----------------------------------------------------
char *        ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  sub_14025A5CC(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}


//----- (000000014025AB30) ----------------------------------------------------
__int64            FH4__DecompFuncInfo(sr_anon_91 *this, char *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A848((unsigned __int64)this, a2, (unsigned __int64)a3, a4, 0);
}


//----- (000000014025AB44) ----------------------------------------------------
sr_anon_49 *        ui64tow(unsigned __int64 Value, sr_anon_49 *Buffer, int Radix)
{
  sub_14025A698(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}


//----- (000000014025AB68) ----------------------------------------------------
__int64            FH4__DecompFuncInfo_dup2(sr_anon_91 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A8B0((unsigned __int64)this, (__int16 *)a2, (unsigned __int64)a3, a4, 0);
}


//----- (000000014025AB7C) ----------------------------------------------------
char *        ultoa_sr(unsigned int Value, char *Buffer, int Radix)
{
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}


//----- (000000014025ABA0) ----------------------------------------------------
__int64            FH4__DecompFuncInfo_dup3(sr_anon_91 *this, char *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A774((unsigned int)this, a2, (unsigned __int64)a3, a4, 0);
}


//----- (000000014025ABB4) ----------------------------------------------------
sr_anon_49 *        ultow(unsigned int Value, sr_anon_49 *Buffer, int Radix)
{
  sub_14025A4F8(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}


//----- (000000014025ABD8) ----------------------------------------------------
__int64            FH4__DecompFuncInfo_dup4(sr_anon_91 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A7DC((unsigned int)this, (__int16 *)a2, (unsigned __int64)a3, a4, 0);
}


//----- (000000014025ABEC) ----------------------------------------------------
int         set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_140404A6C[19065813];
      dword_140404A6C[19065813] = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_140404A6C[19065813];
  }
  *errno_sr() = 22;
  sub_14024CF6C();
  return -1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9C0: using guessed type unsigned int;

//----- (000000014025AC2C) ----------------------------------------------------
__int64            sub_14025AC2C(_WORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // r9
  int *v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int16 v8; // ax

  v3 = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v4 = errno_sr();
    v5 = 22;
LABEL_6:
    *v4 = v5;
    sub_14024CF6C();
    return v5;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v3 = 0;
    goto LABEL_5;
  }
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = *(_WORD *)((char *)a1 + v7);
    *a1++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v3 = 0;
    v4 = errno_sr();
    v5 = 34;
    goto LABEL_6;
  }
  return 0;
}


//----- (000000014025ACB4) ----------------------------------------------------
__int64            sub_14025ACB4(_WORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _WORD *v4; // r9
  int *v5; // rax
  __int64 v7; // r8
  __int16 v8; // ax

  v3 = 0;
  v4 = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v5 = errno_sr();
    v3 = 22;
LABEL_6:
    *v5 = v3;
    sub_14024CF6C();
    return v3;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v4 = 0;
    goto LABEL_5;
  }
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = *(_WORD *)((char *)a1 + v7);
    *a1++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v4 = 0;
    v5 = errno_sr();
    v3 = 34;
    goto LABEL_6;
  }
  return v3;
}


//----- (000000014025AD34) ----------------------------------------------------
__int64            sub_14025AD34(char *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // r11
  char *v5; // r10
  int *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int16 v11; // ax
  __int16 v12; // ax

  v4 = a2;
  v5 = a1;
  if ( a4 )
  {
    if ( !a1 )
    {
LABEL_10:
      v7 = errno_sr();
      v8 = 22;
LABEL_11:
      *v7 = v8;
      sub_14024CF6C();
      return v8;
    }
  }
  else if ( !a1 )
  {
    if ( !a2 )
      return 0;
    goto LABEL_10;
  }
  if ( !a2 )
    goto LABEL_10;
  if ( a4 && !a3 )
  {
    *(_WORD *)a1 = 0;
    goto LABEL_10;
  }
  v9 = a4;
  do
  {
    if ( !*(_WORD *)a1 )
      break;
    a1 += 2;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *(_WORD *)v5 = 0;
    goto LABEL_10;
  }
  if ( a4 == -1 )
  {
    v10 = a3 - a1;
    do
    {
      v11 = *(_WORD *)&a1[v10];
      *(_WORD *)a1 = v11;
      a1 += 2;
      if ( !v11 )
        break;
      --a2;
    }
    while ( a2 );
  }
  else
  {
    if ( a4 )
    {
      do
      {
        v12 = *(_WORD *)a3;
        a3 += 2;
        *(_WORD *)a1 = v12;
        a1 += 2;
        if ( !v12 )
          break;
        if ( !--a2 )
          break;
        --v9;
      }
      while ( v9 );
    }
    if ( !v9 )
      *(_WORD *)a1 = 0;
  }
  if ( a2 )
    return 0;
  if ( a4 != -1 )
  {
    *(_WORD *)v5 = 0;
    v7 = errno_sr();
    v8 = 34;
    goto LABEL_11;
  }
  *(_WORD *)&v5[2 * v4 - 2] = 0;
  return 80;
}


//----- (000000014025AE2C) ----------------------------------------------------
__int64            sub_14025AE2C(char *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rbx
  char *v6; // r11
  int *v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int16 v12; // ax
  __int16 v13; // ax

  v4 = 0;
  v5 = a2;
  v6 = a1;
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
    if ( a4 && !a3 )
    {
      *(_WORD *)a1 = 0;
      goto LABEL_4;
    }
    v10 = a4;
    do
    {
      if ( !*(_WORD *)a1 )
        break;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
      *(_WORD *)v6 = 0;
      goto LABEL_4;
    }
    if ( a4 == -1 )
    {
      v11 = a3 - a1;
      do
      {
        v12 = *(_WORD *)&a1[v11];
        *(_WORD *)a1 = v12;
        a1 += 2;
        if ( !v12 )
          break;
        --a2;
      }
      while ( a2 );
    }
    else
    {
      if ( a4 )
      {
        do
        {
          v13 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)a1 = v13;
          a1 += 2;
          if ( !v13 )
            break;
          if ( !--a2 )
            break;
          --v10;
        }
        while ( v10 );
      }
      if ( !v10 )
        *(_WORD *)a1 = 0;
    }
    if ( !a2 )
    {
      if ( a4 == -1 )
      {
        *(_WORD *)&v6[2 * v5 - 2] = 0;
        return 80;
      }
      *(_WORD *)v6 = 0;
      v7 = errno_sr();
      v8 = 34;
      goto LABEL_5;
    }
    return v4;
  }
  if ( a2 )
  {
LABEL_4:
    v7 = errno_sr();
    v8 = 22;
LABEL_5:
    *v7 = v8;
    sub_14024CF6C();
    return v8;
  }
  return v4;
}


//----- (000000014025AF2C) ----------------------------------------------------
__int64            sub_14025AF2C(_BYTE *a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // r9
  int *v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // r8
  char v8; // al

  v3 = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v4 = errno_sr();
    v5 = 22;
LABEL_6:
    *v4 = v5;
    sub_14024CF6C();
    return v5;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v3 = 0;
    goto LABEL_5;
  }
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = a1[v7];
    *a1++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v3 = 0;
    v4 = errno_sr();
    v5 = 34;
    goto LABEL_6;
  }
  return 0;
}


//----- (000000014025AFAC) ----------------------------------------------------
__int64            strcat_s_sr(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _BYTE *v4; // r9
  int *v5; // rax
  __int64 v7; // r8
  char v8; // al

  v3 = 0;
  v4 = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v5 = errno_sr();
    v3 = 22;
LABEL_6:
    *v5 = v3;
    sub_14024CF6C();
    return v3;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v4 = 0;
    goto LABEL_5;
  }
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = a1[v7];
    *a1++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v4 = 0;
    v5 = errno_sr();
    v3 = 34;
    goto LABEL_6;
  }
  return v3;
}

// 14025AFAC: invalid function type 'errno_t __cdecl strcat_s(char *Destination, #65 SizeInBytes, const char *Source)' has been ignored

//----- (000000014025B024) ----------------------------------------------------
__int64            sub_14025B024(_BYTE *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // r11
  _BYTE *v5; // r10
  int *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // r8
  char v11; // al
  char v12; // al

  v4 = a2;
  v5 = a1;
  if ( a4 )
  {
    if ( !a1 )
    {
LABEL_10:
      v7 = errno_sr();
      v8 = 22;
LABEL_11:
      *v7 = v8;
      sub_14024CF6C();
      return v8;
    }
  }
  else if ( !a1 )
  {
    if ( !a2 )
      return 0;
    goto LABEL_10;
  }
  if ( !a2 )
    goto LABEL_10;
  if ( a4 && !a3 )
  {
    *a1 = 0;
    goto LABEL_10;
  }
  v9 = a4;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v5 = 0;
    goto LABEL_10;
  }
  if ( a4 == -1 )
  {
    v10 = (intptr_t)((uintptr_t)(a3) - (uintptr_t)(a1));
    do
    {
      v11 = a1[v10];
      *a1++ = v11;
      if ( !v11 )
        break;
      --a2;
    }
    while ( a2 );
  }
  else
  {
    if ( a4 )
    {
      do
      {
        v12 = *a3++;
        *a1++ = v12;
        if ( !v12 )
          break;
        if ( !--a2 )
          break;
        --v9;
      }
      while ( v9 );
    }
    if ( !v9 )
      *a1 = 0;
  }
  if ( a2 )
    return 0;
  if ( a4 != -1 )
  {
    *v5 = 0;
    v7 = errno_sr();
    v8 = 34;
    goto LABEL_11;
  }
  v5[v4 - 1] = 0;
  return 80;
}


//----- (000000014025B100) ----------------------------------------------------
__int64            strncat_s_sr(_BYTE *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rbx
  _BYTE *v6; // r11
  int *v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  char v12; // al
  char v13; // al

  v4 = 0;
  v5 = a2;
  v6 = a1;
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
    if ( a4 && !a3 )
    {
      *a1 = 0;
      goto LABEL_4;
    }
    v10 = a4;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
      *v6 = 0;
      goto LABEL_4;
    }
    if ( a4 == -1 )
    {
      v11 = (intptr_t)((uintptr_t)(a3) - (uintptr_t)(a1));
      do
      {
        v12 = a1[v11];
        *a1++ = v12;
        if ( !v12 )
          break;
        --a2;
      }
      while ( a2 );
    }
    else
    {
      if ( a4 )
      {
        do
        {
          v13 = *a3++;
          *a1++ = v13;
          if ( !v13 )
            break;
          if ( !--a2 )
            break;
          --v10;
        }
        while ( v10 );
      }
      if ( !v10 )
        *a1 = 0;
    }
    if ( !a2 )
    {
      if ( a4 == -1 )
      {
        v6[v5 - 1] = 0;
        return 80;
      }
      *v6 = 0;
      v7 = errno_sr();
      v8 = 34;
      goto LABEL_5;
    }
    return v4;
  }
  if ( a2 )
  {
LABEL_4:
    v7 = errno_sr();
    v8 = 22;
LABEL_5:
    *v7 = v8;
    sub_14024CF6C();
    return v8;
  }
  return v4;
}

// 14025B100: invalid function type 'errno_t __cdecl strncat_s(char *Destination, #65 SizeInBytes, const char *Source, #65 MaxCount)' has been ignored

//----- (000000014025B1F0) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_f788ae46380686e8b737efdd8c720d07_____crt_win32_buffer_no_resizing_dup2(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(v13) = 0;
    v8 = sub_140258A84(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, v13, 0, 0);
    v10 = v8;
    if ( v8 )
    {
      if ( (unsigned __int64)v8 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      LODWORD(v14) = *(_QWORD *)(a2 + 24);
      v12 = sub_140258A84(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), v14, 0, 0);
      if ( v12 )
      {
        *(_QWORD *)(a2 + 32) = v12 - 1LL;
        return 0;
      }
    }
    v11 = ((__int64 (           *)(__int64, __int64))GetLastError)(v9, v10);
    sub_14024D14C(v11);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
LABEL_10:
    *errno_sr() = 34;
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 34;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return 0;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14025B286: variable 'v13' is possibly undefined
// 14025B292: variable 'v9' is possibly undefined
// 14025B292: variable 'v10' is possibly undefined
// 14025B2DF: variable 'v14' is possibly undefined

//----- (000000014025B30C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_888(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // [rsp+28h] [rbp-20h]

  LODWORD(v6) = a5;
  return sub_140258A84(a2, 0, a3, 0xFFFFFFFFLL, a4, v6, 0, 0);
}

// 14025B331: variable 'v6' is possibly undefined

//----- (000000014025B344) ----------------------------------------------------
__int64            sub_14025B344(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v8; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-E0h] BYREF
  char v10; // [rsp+38h] [rbp-C8h]
  _QWORD v11[5]; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+68h] [rbp-98h]
  _WORD Filename[264]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+280h] [rbp+180h]

  v3 = a3;
  if ( (unsigned int)((__int64 (           *)(__int64, _WORD *, __int64))GetModuleFileNameW)(a1, Filename, 261) )
  {
    v11[4] = 0;
    v11[0] = a2;
    v11[1] = v3;
    v11[3] = v3;
    v11[2] = a2;
    v12 = 0;
    sub_140213644((_LocaleUpdate *)v9, nullptr);
    v6 = 65001;
    if ( *(_DWORD *)(v9[1] + 12LL) == 65001 )
    {
      if ( v10 )
        *(_DWORD *)(v9[0] + 936LL) &= ~2u;
    }
    else if ( (unsigned int)sub_14024EDA4() )
    {
      if ( v10 )
        *(_DWORD *)(v9[0] + 936LL) &= ~2u;
      v6 = 0;
    }
    else
    {
      if ( v10 )
        *(_DWORD *)(v9[0] + 936LL) &= ~2u;
      v6 = 1;
    }
    __acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(Filename, (__int64)v11, v6);
  }
  else
  {
    v5 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v5);
  }
  return sub_1401F8B20((unsigned __int64)&v8 ^ v14);
}

// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025B464) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_889(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL v6; // eax
  bool v7; // si
  __int64 v9; // rcx

  v6 = IsDebuggerPresent();
  v7 = v6;
  if ( v6 )
  {
    if ( a1 )
      _acrt_OutputDebugStringA(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)v7 + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    v9 = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    v9 = 0;
  }
  return sub_14024F65C(v9, a1, a2, a3);
}


//----- (000000014025B508) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_890(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL v6; // eax
  bool v7; // si
  __int64 v9; // rcx

  v6 = IsDebuggerPresent();
  v7 = v6;
  if ( v6 )
  {
    if ( a1 )
      ((void (           *)(__int64))OutputDebugStringW)(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)v7 + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    v9 = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    v9 = 0;
  }
  return sub_14024F6D0(v9, a1, a2, a3);
}

// 14026E090: invalid function type 'void (__stdcall *OutputDebugStringW)(LPCWSTR lpOutputString)' has been ignored

//----- (000000014025B610) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_891(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL v6; // eax
  bool v7; // si
  __int64 v9; // rcx

  v6 = IsDebuggerPresent();
  v7 = v6;
  if ( v6 )
  {
    if ( a1 )
      _acrt_OutputDebugStringA(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)v7 + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    v9 = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    v9 = 0;
  }
  return sub_14024F65C(v9, a1, a2, a3);
}


//----- (000000014025B6B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_892(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL v6; // eax
  bool v7; // si
  __int64 v9; // rcx

  v6 = IsDebuggerPresent();
  v7 = v6;
  if ( v6 )
  {
    if ( a1 )
      ((void (           *)(__int64))OutputDebugStringW)(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)v7 + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    v9 = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    v9 = 0;
  }
  return sub_14024F6D0(v9, a1, a2, a3);
}

// 14026E090: invalid function type 'void (__stdcall *OutputDebugStringW)(LPCWSTR lpOutputString)' has been ignored

//----- (000000014025B758) ----------------------------------------------------
__int64            sub_14025B758(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = sub_14025B800(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (000000014025B798) ----------------------------------------------------
__int64            sub_14025B798(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14025B758((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014025B800) ----------------------------------------------------
__int64            sub_14025B800(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi

  v2 = **(_QWORD **)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  sub_1402501C4(**(FILE ***)(a1 + 8));
  sub_1402502FC(**(_QWORD **)(a1 + 8));
  _InterlockedAnd((volatile signed __int32 *)(**(_QWORD **)(a1 + 8) + 20LL), 0xFFFFF81F);
  if ( (**(_BYTE **)(a1 + 16) & 4) != 0 )
  {
    v3 = **(_QWORD **)(a1 + 8);
    v4 = v3 + 28;
    _InterlockedOr((volatile signed __int32 *)(v3 + 20), 0x400u);
    *(_DWORD *)(v3 + 32) = 2;
LABEL_8:
    *(_QWORD *)v3 = v4;
    *(_QWORD *)(v3 + 8) = v4;
    goto LABEL_9;
  }
  v4 = **(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    v3 = **(_QWORD **)(a1 + 8);
    _InterlockedOr((volatile signed __int32 *)(v3 + 20), 0x180u);
    *(_DWORD *)(v3 + 32) = v2;
    goto LABEL_8;
  }
  v5 = malloc_base();
  free_base(nullptr);
  if ( !v5 )
  {
    ++dword_140404A6C[19064595];
    return 0xFFFFFFFFLL;
  }
  v3 = **(_QWORD **)(a1 + 8);
  _InterlockedOr((volatile signed __int32 *)(v3 + 20), 0x140u);
  *(_DWORD *)(v3 + 32) = v2;
  *(_QWORD *)v3 = v5;
  *(_QWORD *)(v3 + 8) = v5;
LABEL_9:
  *(_DWORD *)(v3 + 16) = 0;
  return 0;
}

// 1402501C4: using guessed type __int64 __fastcall sub_1402501C4(FILE *Stream);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6B8: using guessed type unsigned int;

//----- (000000014025B8F8) ----------------------------------------------------
__int64            setvbuf_sr(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-28h] BYREF
  char v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v5 = a1;
  if ( !a1 || (a3 & 0xFFFFFFBB) != 0 || a3 == 68 || (a3 & 0xFFFFFFBF) == 0 && (unsigned __int64)(a4 - 2) > 0x7FFFFFFD )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  else
  {
    v6 = a1;
    v8[0] = (uint64)(uintptr_t)(&v12);
    v7 = a1;
    v8[1] = (uint64)(uintptr_t)(&v5);
    v8[2] = (uint64)(uintptr_t)(&v11);
    v8[3] = (uint64)(uintptr_t)(&v10);
    return sub_14025B758((__int64)&v9, &v7, (__int64)v8, &v6);
  }
}

// 14025B8F8: invalid function type 'int __cdecl setvbuf(FILE *Stream, char *Buffer, int Mode, #81 Size)' has been ignored

//----- (000000014025B99C) ----------------------------------------------------
__int64            sub_14025B99C(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // rbx

  sub_140258B64(*a2);
  v5 = __ROR8__(*(_QWORD *)&dword_140404A6C[19065819] ^ _security_cookie, _security_cookie & 0x3F);
  sub_140258BB8(*a4);
  return v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025B9E4) ----------------------------------------------------
__int64            sub_14025B9E4(unsigned int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14025B99C((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014025BA7C) ----------------------------------------------------
__int64            HandlerRoutine(__m256 *CtrlType)
{
  int v1; // ebx
  unsigned int *v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // edi
  void (           *v5)(_QWORD); // rbx

  v1 = (int)CtrlType;
  sub_140258B64(3);
  if ( v1 )
  {
    v2 = &dword_140404A6C[19065817];
    v3 = *(_QWORD *)&dword_140404A6C[19065817] ^ _security_cookie;
    v4 = 21;
  }
  else
  {
    v2 = &dword_140404A6C[19065815];
    v3 = *(_QWORD *)&dword_140404A6C[19065815] ^ _security_cookie;
    v4 = 2;
  }
  v5 = (void (           *)(_QWORD))__ROR8__(v3, _security_cookie & 0x3F);
  if ( (unsigned __int64)v5 >= 2 )
    *(_QWORD *)v2 = _security_cookie;
  sub_140258BB8(3);
  if ( !v5 )
    return 0;
  if ( v5 != (void (           *)(_QWORD))1 )
    v5(v4);
  return 1;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025BB10) ----------------------------------------------------
unsigned int *           get_global_action_nolock(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return &dword_140404A6C[19065815];
  v2 = v1 - 4;
  if ( v2 )
  {
    v3 = v2 - 9;
    if ( !v3 )
      return &dword_140404A6C[19065821];
    v4 = v3 - 6;
    if ( !v4 )
      return &dword_140404A6C[19065817];
    if ( v4 != 1 )
      return nullptr;
  }
  return &dword_140404A6C[19065819];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025BB4C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_896(char *a1, unsigned __int64 a2)
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


//----- (000000014025BBC0) ----------------------------------------------------
__int64            signal_failed(unsigned int a1)
{
  int v1; // eax

  if ( a1 > 0x11 || (v1 = 204810, !_bittest(&v1, a1)) )
    *errno_sr() = 22;
  return -1;
}


//----- (000000014025BBEC) ----------------------------------------------------
__int64 sub_14025BBEC()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 3;
  v3 = 3;
  return sub_14025B99C((__int64)&v1, &v3, (__int64)&v1, &v2);
}


//----- (000000014025BC1C) ----------------------------------------------------
void            sub_14025BC1C(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19065815] = a1;
  *(_QWORD *)&dword_140404A6C[19065817] = a1;
  *(_QWORD *)&dword_140404A6C[19065819] = a1;
  *(_QWORD *)&dword_140404A6C[19065821] = a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9C8: using guessed type unsigned int;
// 144CBF9D0: using guessed type unsigned int;
// 144CBF9D8: using guessed type unsigned int;
// 144CBF9E0: using guessed type unsigned int;

//----- (000000014025BC3C) ----------------------------------------------------
__int64 sub_14025BC3C()
{
  return sub_140255A70() + 16;
}


//----- (000000014025BC50) ----------------------------------------------------
__int64 sub_14025BC50()
{
  return sub_140255A70() + 8;
}


//----- (000000014025BC64) ----------------------------------------------------
__int64            sub_14025BC64(unsigned int a1)
{
  _QWORD *v2; // r13
  char v3; // r14
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int *v8; // rdi
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+78h] [rbp+10h]
  __int64 v18; // [rsp+80h] [rbp+18h]

  v2 = nullptr;
  v17 = 0;
  v3 = 1;
  if ( a1 != 2 )
  {
    switch ( a1 )
    {
      case 4u:
        goto LABEL_14;
      case 6u:
        goto LABEL_8;
      case 8u:
      case 0xBu:
LABEL_14:
        v9 = (_QWORD *)sub_140255BEC();
        v2 = v9;
        if ( !v9 )
          return 0xFFFFFFFFLL;
        v11 = *v9;
        v12 = v11 + 192;
        while ( v11 != v12 )
        {
          if ( *(_DWORD *)(v11 + 4) == a1 )
            goto LABEL_21;
          v11 += 16;
        }
        v11 = 0;
LABEL_21:
        if ( v11 )
        {
          v8 = (unsigned int *)(v11 + 8);
          v3 = 0;
          goto LABEL_28;
        }
        break;
      default:
        if ( a1 == 15 || a1 - 21 <= 1 )
          goto LABEL_8;
        break;
    }
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
LABEL_8:
  v4 = a1 - 2;
  if ( v4 )
  {
    v5 = v4 - 4;
    if ( !v5 )
    {
LABEL_24:
      v8 = &dword_140404A6C[19065819];
      goto LABEL_28;
    }
    v6 = v5 - 9;
    if ( v6 )
    {
      v7 = v6 - 6;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          v8 = nullptr;
          goto LABEL_28;
        }
        goto LABEL_24;
      }
      v8 = &dword_140404A6C[19065817];
    }
    else
    {
      v8 = &dword_140404A6C[19065821];
    }
  }
  else
  {
    v8 = &dword_140404A6C[19065815];
  }
LABEL_28:
  v18 = 0;
  if ( v3 )
  {
    sub_140258B64(3);
    v13 = __ROR8__(*(_QWORD *)v8 ^ _security_cookie, _security_cookie & 0x3F);
  }
  else
  {
    v13 = *(_QWORD *)v8;
  }
  if ( v13 == 1 )
  {
    v14 = 2320;
    goto LABEL_43;
  }
  if ( v13 )
  {
    v14 = 2320;
    if ( a1 <= 0xB && _bittest(&v14, a1) )
    {
      v18 = v2[1];
      v2[1] = 0;
      if ( a1 != 8 )
      {
LABEL_41:
        *(_QWORD *)v8 = _security_cookie;
LABEL_43:
        if ( v3 )
          sub_140258BB8(3);
        if ( v13 != 1 )
        {
          if ( a1 == 8 )
          {
            sub_140255A70();
            _guard_dispatch_icall_fptr(8);
          }
          else
          {
            _guard_dispatch_icall_fptr(a1);
          }
          if ( a1 <= 0xB && _bittest(&v14, a1) )
          {
            v2[1] = v18;
            if ( a1 == 8 )
              *(_DWORD *)(sub_140255A70() + 16) = v17;
          }
        }
        return 0;
      }
      v17 = *(_DWORD *)(sub_140255A70() + 16);
      *(_DWORD *)(sub_140255A70() + 16) = 140;
    }
    if ( a1 == 8 )
    {
      v15 = *v2 + 48LL;
      v16 = *v2 + 192LL;
      while ( v15 != v16 )
      {
        *(_QWORD *)(v15 + 8) = 0;
        v15 += 16;
      }
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  if ( v3 )
    sub_140258BB8(3);
  COleServerDoc__NotifyClosed((COleServerDoc *)3);
  __debugbreak();
  __builtin_unreachable();
}

// 14025BED0: using guessed type __int64 signal(void);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025BED0) ----------------------------------------------------
__int64            signal(unsigned int a1, __int64 a2)
{
  int v4; // eax
  char v5; // bl
  __int64 v6; // r15
  _DWORD *v7; // rbx
  unsigned int *global_action_nolock; // rax
  int v10; // eax
  __m128i **v11; // rax
  __m128i **v12; // rbx
  __m128i *v13; // rcx
  __m128i *v14; // rax
  __m128i *v15; // rax
  __m128i *v16; // rdx
  __int64 *v17; // rdx
  __int64 v18; // r10
  int v19; // eax

  if ( (unsigned __int64)(a2 - 3) <= 1 )
    goto LABEL_32;
  if ( a1 <= 0x16 )
  {
    v4 = 6324292;
    if ( _bittest(&v4, a1) )
    {
      v5 = 0;
      v6 = 0;
      sub_140258B64(3);
      if ( (a1 == 2 || a1 == 21) && !LOBYTE(dword_140404A6C[19065814]) )
      {
        if ( (unsigned int)((__int64 (           *)(__int64 (           *)(__m256 *), __int64))SetConsoleCtrlHandler)(
                             HandlerRoutine,
                             1) )
        {
          LOBYTE(dword_140404A6C[19065814]) = 1;
        }
        else
        {
          v7 = sub_14024D19C();
          *v7 = ((__int64 (*)(void))GetLastError)();
          v5 = 1;
        }
      }
      global_action_nolock = get_global_action_nolock(a1);
      if ( global_action_nolock )
      {
        v6 = __ROR8__(*(_QWORD *)global_action_nolock ^ _security_cookie, _security_cookie & 0x3F);
        if ( a2 != 2 )
          *(_QWORD *)global_action_nolock = _security_cookie ^ __ROR8__(a2, 64 - (_security_cookie & 0x3Fu));
      }
      sub_140258BB8(3);
      if ( !v5 )
        return v6;
      goto LABEL_32;
    }
  }
  if ( a1 > 0xB )
    goto LABEL_32;
  v10 = 2320;
  if ( !_bittest(&v10, a1) )
    goto LABEL_32;
  v11 = (__m128i **)sub_140255BEC();
  v12 = v11;
  if ( !v11 )
    goto LABEL_32;
  v13 = *v11;
  v14 = v13;
  if ( v13 == xmmword_140289E60 )
  {
    v15 = (__m128i *)malloc_base();
    *v12 = v15;
    if ( v15 )
    {
      sub_1401FC920(v15, xmmword_140289E60, 0xC0u);
      v13 = *v12;
      v14 = *v12;
      goto LABEL_21;
    }
LABEL_32:
    if ( a1 > 0x11 || (v19 = 204810, !_bittest(&v19, a1)) )
      *errno_sr() = 22;
    return -1;
  }
LABEL_21:
  v16 = v14 + 12;
  while ( v14 != v16 )
  {
    if ( SR_VEC_PTR_LANES(128, v14, i32)[1] == a1 )
      goto LABEL_26;
    ++v14;
  }
  v14 = nullptr;
LABEL_26:
  if ( !v14 )
    goto LABEL_32;
  v17 = &SR_VEC_PTR_LANES(128, v14, i64)[1];
  v18 = SR_VEC_PTR_LANES(128, v14, i64)[1];
  if ( a2 != 2 && v14 != &v13[12] )
  {
    do
    {
      if ( *((_DWORD *)v17 - 1) != a1 )
        break;
      *v17 = a2;
      v17 += 2;
    }
    while ( v17 - 1 != (__int64 *)&v13[12] );
  }
  return v18;
}

// 14025BED0: invalid function type '_crt_signal_t __cdecl signal(int Signal, _crt_signal_t Function)' has been ignored
// 14026E088: invalid function type 'BOOL (__stdcall *SetConsoleCtrlHandler)(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 140289E60: using guessed type __m128i xmmword_140289E60[12];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9C4: using guessed type unsigned int;

//----- (000000014025C0AC) ----------------------------------------------------
double            call_matherr(int a1, __int64 a2, __int64 a3, double a4, __int64 a5, double a6, __int64 a7)
{
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  double v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  double v13; // [rsp+40h] [rbp-18h]

  v9 = a1;
  v12 = a5;
  v13 = a6;
  v11 = a4;
  v10 = a3;
  ctrlfp(a7, 65472);
  if ( !(unsigned int)sub_1402477E8((__int64)&v9) )
    set_errno_from_matherr(a1);
  return v13;
}


//----- (000000014025C114) ----------------------------------------------------
_BOOL8            exception_enabled(char a1, __int16 a2)
{
  int v3; // ebx

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    set_statfp(1);
    v3 &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    set_statfp(4);
    v3 &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    set_statfp(8);
    v3 &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      set_statfp(16);
    v3 &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    set_statfp(32);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}


//----- (000000014025C1D0) ----------------------------------------------------
__int64            handle_error(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned int a6,
        double a7,
        __int64 a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // xmm6_8
  __int64 v16; // [rsp+8h] [rbp-E1h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  double v18[2]; // [rsp+50h] [rbp-99h] BYREF
  _DWORD v19[12]; // [rsp+68h] [rbp-81h] BYREF
  __int64 v20; // [rsp+98h] [rbp-51h]
  unsigned int v21; // [rsp+A8h] [rbp-41h]
  __int64 v22; // [rsp+D8h] [rbp-11h]

  v17 = ctrlfp(8064, 65472);
  *(_QWORD *)&v18[1] = a3;
  *(_QWORD *)&v18[0] = a3;
  v13 = exception_enabled(a5, v17);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      v20 = a8;
      v21 = v21 & 0xFFFFFFE0 | 3;
    }
    raise_exc(v19, &v17, a5, a2, &a7, v18);
  }
  if ( sub_1402477C0() && a4 )
  {
    call_matherr(a4, a6, a1, a7, v14, v18[0], v17);
  }
  else
  {
    set_errno_from_matherr(a4);
    ctrlfp(v17, 65472);
  }
  return sub_1401F8B20((unsigned __int64)&v16 ^ v22);
}


//----- (000000014025C2F8) ----------------------------------------------------
__int64            handle_errorf(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        float a7,
        float a8,
        int a9)
{
  BOOL v13; // eax
  float v14; // xmm6_4
  __int64 v16; // [rsp+8h] [rbp-E1h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-99h] BYREF
  int v19; // [rsp+58h] [rbp-91h]
  _DWORD v20[16]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp-41h]
  __int64 v22; // [rsp+D8h] [rbp-11h]

  v18 = ctrlfp(8064, 65472);
  v19 = a3;
  LODWORD(v17) = a3;
  v13 = exception_enabled(a5, v18);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      *(float *)&v20[12] = a8;
      v21 = v21 & 0xFFFFFFE0 | 1;
    }
    raise_excf(v20, &v18, a5, a2, &a7, &v17);
  }
  if ( sub_1402477C0() && a4 )
  {
    call_matherr(a4, a6, a1, a7, COERCE__INT64((double)v14), *(float *)&v17, v18);
  }
  else
  {
    set_errno_from_matherr(a4);
    ctrlfp(v18, 65472);
  }
  return sub_1401F8B20((unsigned __int64)&v16 ^ v22);
}


//----- (000000014025C42C) ----------------------------------------------------
double            handle_nan_sr(__int64 a1)
{
  double result; // xmm0_8

  *(_QWORD *)&result = a1 | 0x8000000000000LL;
  return result;
}


//----- (000000014025C448) ----------------------------------------------------
float            handle_nanf_sr(int a1)
{
  float result; // xmm0_4

  LODWORD(result) = a1 | 0x400000;
  return result;
}


//----- (000000014025C460)
__int64 sub_14025C460(void) {
 return sr_client_initialize_math_cpu(&dword_140404A6C[19065823], &dword_140404A6C[19065824]);
}
 /* recovered in client_native_gaps.s */
// 14025D1F0: inconsistent variable size for 'xmm1_8.8'

//----- (000000014025D288) ----------------------------------------------------
__m128            logf_special(float a1, double a2, int a3)
{
  return logf_special_common(a1, a2, a3, 26, (__int64)"logf");
}


//----- (000000014025D2A8) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            logf_special_common(float a1, double a2, int a3, __int16 a4, __int64 a5)
{
  int v6; // r8d
  int v7; // r9d
  char v9; // [rsp+20h] [rbp-58h]
  unsigned int v10; // [rsp+28h] [rbp-50h]
  float v11; // [rsp+30h] [rbp-48h]

  v6 = a3 - 1;
  if ( !v6 )
  {
    v7 = 2;
    v11 = a1;
    v10 = 34;
    v9 = 4;
    goto LABEL_5;
  }
  if ( v6 == 1 )
  {
    v7 = 1;
    v11 = a1;
    v10 = 33;
    v9 = 8;
LABEL_5:
    handle_errorf(a5, a4, SLODWORD(a2), v7, v9, v10, v11, 0.0, 1);
  }
  return *(__m128 *)&a2;
}

// 14025D2A8: inconsistent variable size for 'xmm1_8.8'

//----- (000000014025D350) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_897(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 >= a2 )
    return a1 > a2;
  else
    return 0xFFFFFFFFLL;
}


//----- (000000014025D364) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_898(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 >= a2 )
    return a1 > a2;
  else
    return 0xFFFFFFFFLL;
}


//----- (000000014025D378) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup2(
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
// 14025D443: variable 'v7' is possibly undefined
// 14025D443: variable 'v6' is possibly undefined

//----- (000000014025D4F4) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_d8593a27d1aa8c02be35c86a17d324c4_____crt_win32_buffer_internal_dynamic_resizing_dup3(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // eax
  unsigned __int64 v10; // rsi
  int v11; // eax
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
        v13 = malloc_base();
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
  v7 = malloc_base();
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
// 14025D5BB: variable 'v15' is possibly undefined
// 14025D64B: variable 'v16' is possibly undefined

//----- (000000014025D680) ----------------------------------------------------
__int64            common_expand_argv_wildcards__char(     char **a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned __int8 **v3; // rbx
       char *v5; // rax
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 *v10; // r12
  __int64 *v11; // r15
  unsigned __int64 v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // r8
  signed __int64 v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  _BYTE *v20; // rdx
  __int64 *v21; // r14
  _BYTE *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r13
  _BYTE *v26; // rax
  void **v27; // r14
  unsigned __int64 v28; // rbx
  _BYTE *v29; // [rsp+38h] [rbp-28h]
  void *Block[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  unsigned __int64 Control; // [rsp+B0h] [rbp+50h] BYREF
  _BYTE *i; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  v3 = (unsigned __int8 **)a1;
  if ( a2 )
  {
    *a2 = 0;
    v5 = *a1;
    *(_OWORD *)Block = 0;
    v31 = 0;
    while ( v5 )
    {
      strcpy((char *)&Control, "*?");
      v6 = (unsigned __int8 *)strpbrk_sr(v5, (     char *)&Control);
      v7 = *v3;
      if ( v6 )
        v8 = sub_14025DF6C(v7, v6, (__int64 *)Block);
      else
        v8 = sub_14025DC58((__int64)v7, 0, 0, (__int64 *)Block);
      v9 = v8;
      if ( v8 )
      {
        v10 = (__int64 *)Block[1];
        v11 = (__int64 *)Block[0];
        goto LABEL_26;
      }
      v5 = (     char *)*++v3;
    }
    v11 = (__int64 *)Block[0];
    v12 = 0;
    v10 = (__int64 *)Block[1];
    v13 = Block[0];
    Control = 0;
    v14 = 0;
    v15 = (((char *)Block[1] - (char *)Block[0]) >> 3) + 1;
    v16 = (unsigned __int64)((char *)Block[1] - (char *)Block[0] + 7) >> 3;
    if ( Block[0] > Block[1] )
      v16 = 0;
    v9 = -1;
    if ( v16 )
    {
      do
      {
        v17 = -1;
        do
          ++v17;
        while ( *(_BYTE *)(*v13 + v17) );
        ++v13;
        v12 += v17 + 1;
        ++v14;
      }
      while ( v14 != v16 );
      Control = v12;
    }
    v18 = sub_140245E48((((char *)Block[1] - (char *)Block[0]) >> 3) + 1, v12, 1u);
    v19 = v18;
    if ( v18 )
    {
      v20 = (_BYTE *)(v18 + 8 * v15);
      v21 = v11;
      v29 = v20;
      v22 = v20;
      for ( i = v20; v21 != v10; i = v22 )
      {
        v23 = *v21;
        v24 = -1;
        do
          ++v24;
        while ( *(_BYTE *)(v23 + v24) );
        v25 = v24 + 1;
        if ( (unsigned int)strncpy_s_sr(v22, Control + v20 - v22, v23, v25) )
        {
          sub_14024CFBC();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        v26 = i;
        v20 = v29;
        *(__int64 *)((char *)v21 + v19 - (_QWORD)v11) = (__int64)i;
        v22 = &v26[v25];
        ++v21;
      }
      v9 = 0;
      *a2 = v19;
    }
    free_base(nullptr);
LABEL_26:
    v27 = (void **)v11;
    v28 = (unsigned __int64)((char *)v10 - (char *)v11 + 7) >> 3;
    if ( v11 > v10 )
      v28 = 0;
    if ( v28 )
    {
      do
      {
        free_base(*v27);
        ++v2;
        ++v27;
      }
      while ( v2 != v28 );
    }
    free_base(v11);
    return v9;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
}

// 14025D883: control flows out of bounds to 14025D888

//----- (000000014025D88C) ----------------------------------------------------
__int64            common_expand_argv_wildcards__wchar_t(     sr_anon_49 **a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // r12
       sr_anon_49 *v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rbx
  sr_anon_49 *v8; // rax
  __int64 v9; // r13
  sr_anon_49 *v10; // rcx
  int v11; // eax
  bool v12; // zf
  unsigned __int16 v13; // ax
  int v14; // r15d
  unsigned __int16 v15; // dx
  char v16; // al
  __int64 v17; // r15
  __int64 v18; // rbx
  signed __int64 v19; // rdx
  unsigned __int64 v20; // r10
  __int64 *v21; // rdx
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  _WORD *v27; // rcx
  __int64 *v28; // r15
  _WORD *v29; // r13
  __int64 v30; // r8
  __int64 v31; // r12
  __int64 v32; // r12
  void **v33; // r12
  unsigned __int64 v34; // rbx
  _QWORD v36[5]; // [rsp+0h] [rbp-100h] BYREF
  void *Block[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 *v41; // [rsp+58h] [rbp-A8h]
  _BYTE FindFileData[44]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v43; // [rsp+8Ch] [rbp-74h] BYREF
  __int16 v44; // [rsp+8Eh] [rbp-72h]
  __int16 v45; // [rsp+90h] [rbp-70h]
  _QWORD Control[8]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v2 = 0;
  v41 = a2;
  v3 = (__int64 *)a1;
  if ( a2 )
  {
    *a2 = 0;
    v4 = *a1;
    *(_OWORD *)Block = 0;
    v5 = nullptr;
    v6 = nullptr;
    v38 = 0;
    while ( v4 )
    {
      LODWORD(Control[0]) = 4128810;
      WORD2(Control[0]) = 0;
      v7 = 0x200000000801LL;
      v8 = wcspbrk_sr(v4, (     sr_anon_49 *)Control);
      v9 = *v3;
      v10 = v8;
      if ( v8 )
      {
        if ( v8 != (sr_anon_49 *)v9 )
        {
          do
          {
            v13 = *(_WORD *)v10 - 47;
            if ( v13 <= 0x2Du && _bittest64(&v7, v13) )
              break;
            v10 = (sr_anon_49 *)((char *)v10 - 2);
          }
          while ( v10 != (sr_anon_49 *)v9 );
        }
        if ( *(_WORD *)v10 == 58 && v10 != (sr_anon_49 *)(v9 + 2) )
          goto LABEL_13;
        v15 = *(_WORD *)v10 - 47;
        if ( v15 > 0x2Du || (v16 = 1, !_bittest64(&v7, v15)) )
          v16 = 0;
        v17 = ((((__int64)v10 - v9) >> 1) + 1) & -(__int64)(v16 != 0);
        v39 = v17;
        v18 = ((__int64 (           *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
                v9,
                0,
                FindFileData,
                0,
                0,
                0);
        if ( v18 == -1 )
        {
LABEL_13:
          v14 = sub_14025DDE0(v9, 0, 0, (__int64 *)Block);
LABEL_30:
          v5 = (__int64 *)Block[1];
          v6 = (__int64 *)Block[0];
        }
        else
        {
          v40 = v5 - v6;
          do
          {
            if ( v43 != 46 || v44 && (v44 != 46 || v45) )
            {
              v14 = sub_14025DDE0((__int64)&v43, v9, v17, (__int64 *)Block);
              if ( v14 )
              {
                ((void (           *)(__int64))FindClose)(v18);
                goto LABEL_30;
              }
              v17 = v39;
            }
          }
          while ( (unsigned int)((__int64 (           *)(__int64, _BYTE *))FindNextFileW)(v18, FindFileData) );
          v5 = (__int64 *)Block[1];
          v6 = (__int64 *)Block[0];
          v19 = ((char *)Block[1] - (char *)Block[0]) >> 3;
          if ( v40 == v19 )
          {
            ((void (           *)(__int64))FindClose)(v18);
            goto LABEL_33;
          }
          sub_14023AE00(
            (unsigned __int64)Block[0] + 8 * v40,
            v19 - v40,
            8u,
            (int (           *)(unsigned __int64, _BYTE *))unknown_libname_897);
          ((void (           *)(__int64))FindClose)(v18);
          v14 = 0;
        }
        v12 = v14 == 0;
      }
      else
      {
        v11 = sub_14025DDE0(*v3, 0, 0, (__int64 *)Block);
        v5 = (__int64 *)Block[1];
        v6 = (__int64 *)Block[0];
        v12 = v11 == 0;
      }
      if ( !v12 )
        goto LABEL_50;
LABEL_33:
      v4 = (     sr_anon_49 *)*++v3;
    }
    Control[0] = 0;
    v20 = 0;
    v21 = v6;
    v22 = 0;
    v23 = (unsigned __int64)((char *)v5 - (char *)v6 + 7) >> 3;
    if ( v6 > v5 )
      v23 = 0;
    if ( v23 )
    {
      do
      {
        v24 = -1;
        do
          ++v24;
        while ( *(_WORD *)(*v21 + 2 * v24) );
        ++v21;
        v20 += v24 + 1;
        ++v22;
      }
      while ( v22 != v23 );
      Control[0] = v20;
    }
    v25 = sub_140245E48(v5 - v6 + 1, v20, 2u);
    v26 = v25;
    if ( v25 )
    {
      v27 = (_WORD *)(v25 + 8 * (v5 - v6 + 1));
      v28 = v6;
      v39 = (__int64)v27;
      v29 = v27;
      if ( v6 != v5 )
      {
        v40 = v25 - (_QWORD)v6;
        do
        {
          v30 = *v28;
          v31 = -1;
          do
            ++v31;
          while ( *(_WORD *)(v30 + 2 * v31) );
          v32 = v31 + 1;
          if ( (unsigned int)sub_140260D80(v29, Control[0] - (v29 - v27), v30, v32) )
          {
            v36[4] = 0;
            sub_14024CFBC();
            do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
          }
          v27 = (_WORD *)v39;
          *(__int64 *)((char *)v28++ + v40) = (__int64)v29;
          v29 += v32;
        }
        while ( v28 != v5 );
      }
      *v41 = v26;
    }
    free_base(nullptr);
LABEL_50:
    v33 = (void **)v6;
    v34 = (unsigned __int64)((char *)v5 - (char *)v6 + 7) >> 3;
    if ( v6 > v5 )
      v34 = 0;
    if ( v34 )
    {
      do
      {
        free_base(*v33);
        ++v2;
        ++v33;
      }
      while ( v2 != v34 );
    }
    free_base(v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return sub_1401F8B20((unsigned __int64)v36 ^ Control[1]);
}

// 14025DC50: control flows out of bounds to 14025DC55
// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025DC58) ----------------------------------------------------
__int64            sub_14025DC58(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // esi
  unsigned __int64 v10; // rbp
  __int64 v12; // r15
  _BYTE *v13; // rax
  _BYTE *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rax

  v4 = -1;
  v6 = 0;
  do
    ++v4;
  while ( *(_BYTE *)(a1 + v4) );
  v10 = v4 + 1;
  if ( v10 > ~a3 )
    return 12;
  v12 = v10 + a3 + 1;
  v13 = (_BYTE *)calloc_base();
  v14 = v13;
  if ( a3 && (unsigned int)strncpy_s_sr(v13, v12, a2, a3) || (unsigned int)strncpy_s_sr(&v14[a3], v12 - a3, a1, v10) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  v15 = (_QWORD *)a4[1];
  v16 = a4[2];
  if ( v15 != (_QWORD *)v16 )
    goto LABEL_18;
  if ( *a4 )
  {
    v17 = (v16 - *a4) >> 3;
    if ( v17 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v18 = recalloc_base(*a4, 2 * v17, 8);
      if ( v18 )
      {
        *a4 = v18;
        a4[1] = v18 + 8 * v17;
        a4[2] = v18 + 16 * v17;
        free_base(nullptr);
        v15 = (_QWORD *)a4[1];
        goto LABEL_18;
      }
      free_base(nullptr);
    }
  }
  else
  {
    *a4 = calloc_base();
    free_base(nullptr);
    v15 = (_QWORD *)*a4;
    if ( *a4 )
    {
      a4[1] = (__int64)v15;
      a4[2] = (__int64)(v15 + 4);
LABEL_18:
      *v15 = (uint64)(uintptr_t)(v14);
      a4[1] += 8;
      goto LABEL_16;
    }
  }
  free_base(v14);
  v6 = 12;
LABEL_16:
  free_base(nullptr);
  return v6;
}

// 14025DDD9: control flows out of bounds to 14025DDDE
// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);

//----- (000000014025DDE0) ----------------------------------------------------
__int64            sub_14025DDE0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // esi
  unsigned __int64 v10; // rbp
  __int64 v12; // r15
  _WORD *v13; // rax
  _WORD *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rax

  v4 = -1;
  v6 = 0;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  v10 = v4 + 1;
  if ( v10 > ~a3 )
    return 12;
  v12 = v10 + a3 + 1;
  v13 = (_WORD *)calloc_base();
  v14 = v13;
  if ( a3 && (unsigned int)sub_140260D80(v13, v12, a2, a3) || (unsigned int)sub_140260D80(&v14[a3], v12 - a3, a1, v10) )
  {
    sub_14024CFBC();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  v15 = (_QWORD *)a4[1];
  v16 = a4[2];
  if ( v15 != (_QWORD *)v16 )
    goto LABEL_18;
  if ( *a4 )
  {
    v17 = (v16 - *a4) >> 3;
    if ( v17 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v18 = recalloc_base(*a4, 2 * v17, 8);
      if ( v18 )
      {
        *a4 = v18;
        a4[1] = v18 + 8 * v17;
        a4[2] = v18 + 16 * v17;
        free_base(nullptr);
        v15 = (_QWORD *)a4[1];
        goto LABEL_18;
      }
      free_base(nullptr);
    }
  }
  else
  {
    *a4 = calloc_base();
    free_base(nullptr);
    v15 = (_QWORD *)*a4;
    if ( *a4 )
    {
      a4[1] = (__int64)v15;
      a4[2] = (__int64)(v15 + 4);
LABEL_18:
      *v15 = (uint64)(uintptr_t)(v14);
      a4[1] += 8;
      goto LABEL_16;
    }
  }
  free_base(v14);
  v6 = 12;
LABEL_16:
  free_base(nullptr);
  return v6;
}

// 14025DF63: control flows out of bounds to 14025DF68
// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);

//----- (000000014025DF6C) ----------------------------------------------------
__int64            sub_14025DF6C(unsigned __int8 *Start, unsigned __int8 *a2, __int64 *a3)
{
  __int64 i; // rbx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  char v8; // al
  signed __int64 v9; // r13
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // r8d
  int v15; // eax
  void *v16; // r15
  _BYTE *v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  __int64 v21; // [rsp+0h] [rbp-100h] BYREF
  __int64 lpSearchFilter; // [rsp+20h] [rbp-E0h]
  __int64 dwAdditionalFlags; // [rsp+28h] [rbp-D8h]
  _QWORD v24[3]; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+48h] [rbp-B8h]
  _QWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v27; // [rsp+68h] [rbp-98h]
  _QWORD v28[2]; // [rsp+70h] [rbp-90h] BYREF
  void *Block; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  char v32; // [rsp+98h] [rbp-68h]
  _QWORD v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  void *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  char v37; // [rsp+C8h] [rbp-38h]
  _BYTE FindFileData[44]; // [rsp+D0h] [rbp-30h] BYREF
  _WORD v39[274]; // [rsp+FCh] [rbp-4h] BYREF
  __int64 v40; // [rsp+320h] [rbp+220h]

  for ( i = 0x200000000801LL; a2 != Start; a2 = mbsdec_sr(Start, a2) )
  {
    v6 = *a2 - 47;
    if ( v6 <= 0x2Du && _bittest64(&i, (char)v6) )
      break;
  }
  if ( *a2 != 58 || a2 == Start + 1 )
  {
    v7 = *a2 - 47;
    if ( v7 > 0x2Du || (v8 = 1, !_bittest64(&i, (char)v7)) )
      v8 = 0;
    v33[0] = 0;
    v33[1] = 0;
    v34 = nullptr;
    v35 = 0;
    v36 = 0;
    v9 = (a2 - Start + 1) & -(__int64)(v8 != 0);
    v37 = 0;
    sub_140213644((_LocaleUpdate *)v24, nullptr);
    if ( *(_DWORD *)(v24[1] + 12LL) == 65001 )
    {
      if ( v25 )
        *(_DWORD *)(v24[0] + 936LL) &= ~2u;
    }
    else if ( (unsigned int)sub_14024EDA4() )
    {
      if ( v25 )
        *(_DWORD *)(v24[0] + 936LL) &= ~2u;
    }
    else if ( v25 )
    {
      *(_DWORD *)(v24[0] + 936LL) &= ~2u;
    }
    v10 = sub_140238394(Start, (__int64)v33);
    v11 = v34;
    LODWORD(dwAdditionalFlags) = 0;
    lpSearchFilter = 0;
    if ( v10 )
      v11 = nullptr;
    v12 = ((__int64 (           *)(void *, _QWORD, _BYTE *, _QWORD, __int64, _DWORD))FindFirstFileExW)(
            v11,
            0,
            FindFileData,
            0,
            lpSearchFilter,
            dwAdditionalFlags);
    if ( v12 == -1 )
    {
      sub_14025DC58((__int64)Start, 0, 0, a3);
    }
    else
    {
      v13 = (a3[1] - *a3) >> 3;
      while ( 1 )
      {
        v28[0] = 0;
        v28[1] = 0;
        Block = nullptr;
        v30 = 0;
        v31 = 0;
        v32 = 0;
        sub_140213644((_LocaleUpdate *)v26, nullptr);
        if ( *(_DWORD *)(v26[1] + 12LL) == 65001 )
        {
          if ( v27 )
            *(_DWORD *)(v26[0] + 936LL) &= ~2u;
          v14 = 65001;
        }
        else if ( (unsigned int)sub_14024EDA4() )
        {
          if ( v27 )
            *(_DWORD *)(v26[0] + 936LL) &= ~2u;
          v14 = 0;
        }
        else
        {
          if ( v27 )
            *(_DWORD *)(v26[0] + 936LL) &= ~2u;
          v14 = 1;
        }
        v15 = __acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(v39, (__int64)v28, v14);
        v16 = Block;
        v17 = Block;
        if ( v15 )
          v17 = nullptr;
        if ( *v17 != 46 || (v18 = v17[1]) != 0 && (v18 != 46 || v17[2]) )
        {
          if ( (unsigned int)sub_14025DC58((__int64)v17, (__int64)Start, v9, a3) )
            break;
        }
        if ( v32 )
          free_base(v16);
        if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *))FindNextFileW)(v12, FindFileData) )
        {
          v19 = (a3[1] - *a3) >> 3;
          if ( v13 != v19 )
            sub_14023AE00(
              *a3 + 8 * v13,
              v19 - v13,
              8u,
              (int (           *)(unsigned __int64, _BYTE *))unknown_libname_898);
          goto LABEL_51;
        }
      }
      if ( v32 )
        free_base(v16);
LABEL_51:
      ((void (           *)(__int64))FindClose)(v12);
    }
    if ( v37 )
      free_base(v34);
  }
  else
  {
    sub_14025DC58((__int64)Start, 0, 0, a3);
  }
  return sub_1401F8B20((unsigned __int64)&v21 ^ v40);
}

// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025E27C) ----------------------------------------------------
__int64            sub_14025E27C(_WORD *a1, _WORD *a2, __int64 *a3)
{
  __int64 i; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // cx
  char v8; // al
  signed __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // [rsp+0h] [rbp-2B8h] BYREF
  _BYTE FindFileData[44]; // [rsp+30h] [rbp-288h] BYREF
  __int16 v16; // [rsp+5Ch] [rbp-25Ch] BYREF
  __int16 v17; // [rsp+5Eh] [rbp-25Ah]
  __int16 v18; // [rsp+60h] [rbp-258h]
  __int64 v19; // [rsp+280h] [rbp-38h]

  for ( i = 0x200000000801LL; a2 != a1; --a2 )
  {
    v6 = *a2 - 47;
    if ( v6 <= 0x2Du && _bittest64(&i, v6) )
      break;
  }
  if ( *a2 != 58 || a2 == a1 + 1 )
  {
    v7 = *a2 - 47;
    if ( v7 > 0x2Du || (v8 = 1, !_bittest64(&i, v7)) )
      v8 = 0;
    v9 = (a2 - a1 + 1) & -(__int64)(v8 != 0);
    v10 = ((__int64 (           *)(_WORD *, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
            a1,
            0,
            FindFileData,
            0,
            0,
            0);
    if ( v10 == -1 )
    {
      sub_14025DDE0((__int64)a1, 0, 0, a3);
    }
    else
    {
      v11 = (a3[1] - *a3) >> 3;
      while ( v16 == 46 && (!v17 || v17 == 46 && !v18)
           || !(unsigned int)sub_14025DDE0((__int64)&v16, (__int64)a1, v9, a3) )
      {
        if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *))FindNextFileW)(v10, FindFileData) )
        {
          v12 = (a3[1] - *a3) >> 3;
          if ( v11 != v12 )
            sub_14023AE00(
              *a3 + 8 * v11,
              v12 - v11,
              8u,
              (int (           *)(unsigned __int64, _BYTE *))unknown_libname_897);
          break;
        }
      }
      ((void (           *)(__int64))FindClose)(v10);
    }
  }
  else
  {
    sub_14025DDE0((__int64)a1, 0, 0, a3);
  }
  return sub_1401F8B20((unsigned __int64)&v14 ^ v19);
}

// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E4D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_901(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 != -1 )
  {
    result = ((__int64 (           *)(_QWORD))FindClose)(*a1);
    *a1 = -1;
  }
  return result;
}

// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E4F4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_902(void ***a1)
{
  void **v1; // rbx

  v1 = *a1;
  if ( *a1 != a1[1] )
  {
    do
      free_base(*v1++);
    while ( v1 != a1[1] );
    v1 = *a1;
  }
  free_base(v1);
}


//----- (000000014025E534) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_903(void ***a1)
{
  void **v1; // rbx

  v1 = *a1;
  if ( *a1 != a1[1] )
  {
    do
      free_base(*v1++);
    while ( v1 != a1[1] );
    v1 = *a1;
  }
  free_base(v1);
}


//----- (000000014025E584) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_904()
{
  return sub_140259504();
}


//----- (000000014025E61C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_905(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // [rsp+28h] [rbp-20h]

  LODWORD(v6) = a5;
  return sub_140258A84(a2, 0, a3, 0xFFFFFFFFLL, a4, v6, 0, 0);
}

// 14025E641: variable 'v6' is possibly undefined

//----- (000000014025E64C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_906(__int64 *a1, void *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax

  v4 = (_QWORD *)a1[1];
  v5 = a1[2];
  if ( v4 != (_QWORD *)v5 )
    goto LABEL_10;
  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v7 = (v5 - (__int64)v6) >> 3;
    if ( v7 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = recalloc_base(v6, 2 * v7, 8);
      if ( v8 )
      {
        *a1 = v8;
        a1[1] = v8 + 8 * v7;
        a1[2] = v8 + 16 * v7;
        free_base(nullptr);
        v4 = (_QWORD *)a1[1];
        goto LABEL_10;
      }
      free_base(nullptr);
    }
LABEL_8:
    free_base(a2);
    return 12;
  }
  *a1 = calloc_base();
  free_base(nullptr);
  v4 = (_QWORD *)*a1;
  if ( !*a1 )
    goto LABEL_8;
  a1[1] = (__int64)v4;
  a1[2] = (__int64)(v4 + 4);
LABEL_10:
  *v4 = (uint64)(uintptr_t)(a2);
  a1[1] += 8;
  return 0;
}

// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);

//----- (000000014025E72C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_907(__int64 *a1, void *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax

  v4 = (_QWORD *)a1[1];
  v5 = a1[2];
  if ( v4 != (_QWORD *)v5 )
    goto LABEL_10;
  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v7 = (v5 - (__int64)v6) >> 3;
    if ( v7 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = recalloc_base(v6, 2 * v7, 8);
      if ( v8 )
      {
        *a1 = v8;
        a1[1] = v8 + 8 * v7;
        a1[2] = v8 + 16 * v7;
        free_base(nullptr);
        v4 = (_QWORD *)a1[1];
        goto LABEL_10;
      }
      free_base(nullptr);
    }
LABEL_8:
    free_base(a2);
    return 12;
  }
  *a1 = calloc_base();
  free_base(nullptr);
  v4 = (_QWORD *)*a1;
  if ( !*a1 )
    goto LABEL_8;
  a1[1] = (__int64)v4;
  a1[2] = (__int64)(v4 + 4);
LABEL_10:
  *v4 = (uint64)(uintptr_t)(a2);
  a1[1] += 8;
  return 0;
}

// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);

//----- (000000014025E814) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_908(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 != -1 )
  {
    result = ((__int64 (           *)(_QWORD))FindClose)(*a1);
    *a1 = -1;
  }
  return result;
}

// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E838) ----------------------------------------------------
bool sub_14025E838()
{
  return (unsigned int)((__int64 (*)(void))FindClose)() != 0;
}

// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E85C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_909(__int64 *a1)
{
  __int64 v1; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax

  v1 = a1[2];
  if ( a1[1] != v1 )
    return 0;
  v4 = 0;
  if ( !*a1 )
  {
    *a1 = calloc_base();
    free_base(nullptr);
    v5 = *a1;
    if ( *a1 )
    {
      a1[1] = v5;
      a1[2] = v5 + 32;
      return 0;
    }
    return 12;
  }
  v6 = (v1 - *a1) >> 3;
  if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
    return 12;
  v7 = recalloc_base(*a1, 2 * v6, 8);
  if ( v7 )
  {
    *a1 = v7;
    a1[1] = v7 + 8 * v6;
    a1[2] = v7 + 16 * v6;
  }
  else
  {
    v4 = 12;
  }
  free_base(nullptr);
  return v4;
}

// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);

//----- (000000014025E924) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_910(__int64 *a1)
{
  __int64 v1; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax

  v1 = a1[2];
  if ( a1[1] != v1 )
    return 0;
  v4 = 0;
  if ( !*a1 )
  {
    *a1 = calloc_base();
    free_base(nullptr);
    v5 = *a1;
    if ( *a1 )
    {
      a1[1] = v5;
      a1[2] = v5 + 32;
      return 0;
    }
    return 12;
  }
  v6 = (v1 - *a1) >> 3;
  if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
    return 12;
  v7 = recalloc_base(*a1, 2 * v6, 8);
  if ( v7 )
  {
    *a1 = v7;
    a1[1] = v7 + 8 * v6;
    a1[2] = v7 + 16 * v6;
  }
  else
  {
    v4 = 12;
  }
  free_base(nullptr);
  return v4;
}

// 1402609D8: using guessed type __int64 __fastcall recalloc_base(_QWORD, _QWORD, _QWORD);

//----- (000000014025E9F0) ----------------------------------------------------
__int64            get_file_name(__int64 a1, _WORD *a2)
{
  unsigned int v4; // r8d
  _QWORD v6[3]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v6, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v6[1] + 12LL) == 65001 )
  {
    if ( v7 )
      *(_DWORD *)(v6[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v7 )
      *(_DWORD *)(v6[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v7 )
      *(_DWORD *)(v6[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(a2, a1, v4) )
    return 0;
  else
    return *(_QWORD *)(a1 + 16);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025EAA0) ----------------------------------------------------
__int64            get_wide(__int64 a1, _BYTE *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v5, nullptr);
  if ( *(_DWORD *)(v5[1] + 12LL) == 65001 )
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
  }
  else if ( v6 )
  {
    *(_DWORD *)(v5[0] + 936LL) &= ~2u;
  }
  if ( (unsigned int)sub_140238394(a2, a1) )
    return 0;
  else
    return *(_QWORD *)(a1 + 16);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025EB78) ----------------------------------------------------
// attributes: thunk
__int64            common_expand_argv_wildcards__char_dup2(     char **a1, __int64 *a2)
{
  return common_expand_argv_wildcards__char(a1, a2);
}


//----- (000000014025EB80) ----------------------------------------------------
// attributes: thunk
__int64            common_expand_argv_wildcards__wchar_t_dup2(     sr_anon_49 **a1, __int64 *a2)
{
  return common_expand_argv_wildcards__wchar_t(a1, a2);
}


//----- (000000014025EB88) ----------------------------------------------------
__int64            sub_14025EB88(__int64 a1, unsigned int *a2, volatile signed __int32 ****a3, unsigned int *a4)
{
  volatile signed __int32 *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  void **v12; // rcx

  sub_140258B64(*a2);
  v6 = (**a3)[17] + 6;
  v7 = *(_OWORD **)&dword_140404A6C[19065825];
  if ( !*(_QWORD *)&dword_140404A6C[19065825] )
    goto LABEL_7;
  if ( (**a3)[17] == (volatile signed __int32 *)-24LL )
  {
    sub_1401FCD30((void *)(uintptr_t)(*(_WORD **)&dword_140404A6C[19065825]), 0, 0x101u);
LABEL_7:
    *errno_sr() = 22;
    sub_14024CF6C();
    v8 = 2;
    goto LABEL_8;
  }
  v8 = 2;
  v9 = 2;
  do
  {
    *v7 = *(_OWORD *)v6;
    v7[1] = *((_OWORD *)v6 + 1);
    v7[2] = *((_OWORD *)v6 + 2);
    v7[3] = *((_OWORD *)v6 + 3);
    v7[4] = *((_OWORD *)v6 + 4);
    v7[5] = *((_OWORD *)v6 + 5);
    v7[6] = *((_OWORD *)v6 + 6);
    v7 += 8;
    *(v7 - 1) = *((_OWORD *)v6 + 7);
    v6 += 32;
    --v9;
  }
  while ( v9 );
  *(_BYTE *)v7 = *(_BYTE *)v6;
LABEL_8:
  v10 = (_OWORD *)((char *)(**a3)[17] + 281);
  v11 = *(_OWORD **)&dword_140404A6C[19065827];
  if ( !*(_QWORD *)&dword_140404A6C[19065827] )
  {
LABEL_13:
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_14;
  }
  if ( (**a3)[17] == (volatile signed __int32 *)-281LL )
  {
    sub_1401FCD30((void *)(uintptr_t)(*(_WORD **)&dword_140404A6C[19065827]), 0, 0x100u);
    goto LABEL_13;
  }
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    *(v11 - 1) = v10[7];
    v10 += 8;
    --v8;
  }
  while ( v8 );
LABEL_14:
  if ( _InterlockedExchangeAdd(**a3[1], 0xFFFFFFFF) == 1 )
  {
    v12 = (void **)*a3[1];
    if ( *v12 != &unk_1403025A0 )
      free_base(*v12);
  }
  **a3[1] = (**a3)[17];
  _InterlockedIncrement((**a3)[17]);
  return sub_140258BB8(*a4);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9F0: using guessed type unsigned int;
// 144CBF9F8: using guessed type unsigned int;

//----- (000000014025ED44) ----------------------------------------------------
__int64            sub_14025ED44(unsigned int a1, volatile signed __int32 ****a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14025EB88((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014025ED98) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
volatile signed __int32 *           unknown_libname_914(volatile signed __int32 ****a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  void **v11; // rcx
  volatile signed __int32 *result; // rax

  v1 = (__int64)*a1;
  v2 = 2;
  v4 = *(_OWORD **)&dword_140404A6C[19065825];
  v5 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 136LL) + 24LL);
  if ( !*(_QWORD *)&dword_140404A6C[19065825] )
    goto LABEL_7;
  if ( !v5 )
  {
    sub_1401FCD30((void *)(uintptr_t)(*(_WORD **)&dword_140404A6C[19065825]), 0, 0x101u);
LABEL_7:
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_8;
  }
  v6 = 2;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    v7 = v5[7];
    v5 += 8;
    *(v4 - 1) = v7;
    --v6;
  }
  while ( v6 );
  *(_BYTE *)v4 = *(_BYTE *)v5;
LABEL_8:
  v8 = *(_OWORD **)&dword_140404A6C[19065827];
  v9 = (_OWORD *)((char *)(**a1)[17] + 281);
  if ( !*(_QWORD *)&dword_140404A6C[19065827] )
  {
LABEL_13:
    *errno_sr() = 22;
    sub_14024CF6C();
    goto LABEL_14;
  }
  if ( (**a1)[17] == (volatile signed __int32 *)-281LL )
  {
    sub_1401FCD30((void *)(uintptr_t)(*(_WORD **)&dword_140404A6C[19065827]), 0, 0x100u);
    goto LABEL_13;
  }
  do
  {
    *v8 = *v9;
    v8[1] = v9[1];
    v8[2] = v9[2];
    v8[3] = v9[3];
    v8[4] = v9[4];
    v8[5] = v9[5];
    v8[6] = v9[6];
    v8 += 8;
    v10 = v9[7];
    v9 += 8;
    *(v8 - 1) = v10;
    --v2;
  }
  while ( v2 );
LABEL_14:
  if ( _InterlockedExchangeAdd(**a1[1], 0xFFFFFFFF) == 1 )
  {
    v11 = (void **)*a1[1];
    if ( *v11 != &unk_1403025A0 )
      free_base(*v11);
  }
  **a1[1] = (**a1)[17];
  result = (**a1)[17];
  _InterlockedIncrement(result);
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9F0: using guessed type unsigned int;
// 144CBF9F8: using guessed type unsigned int;

//----- (000000014025EF84) ----------------------------------------------------
__int64            getSystemCP(unsigned int a1)
{
  unsigned int v2; // eax
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v4, nullptr);
  dword_140404A6C[19065831] = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_140404A6C[19065831] = 1;
      v2 = ((__int64 (*)(void))GetOEMCP)();
LABEL_5:
      a1 = v2;
      break;
    case 0xFFFFFFFD:
      dword_140404A6C[19065831] = 1;
      v2 = ((__int64 (*)(void))GetACP)();
      goto LABEL_5;
    case 0xFFFFFFFC:
      dword_140404A6C[19065831] = 1;
      a1 = *(_DWORD *)(v4[1] + 12LL);
      break;
  }
  if ( v5 )
    *(_DWORD *)(v4[0] + 936LL) &= ~2u;
  return a1;
}

// 14026E070: invalid function type 'UINT (__stdcall *GetOEMCP)()' has been ignored
// 14026E078: invalid function type 'UINT (__stdcall *GetACP)()' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA08: using guessed type unsigned int;

//----- (000000014025F004) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_915(char *a1, unsigned __int64 a2)
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


//----- (000000014025F02C) ----------------------------------------------------
void            setSBCS_sr(struct __crt_multibyte_data *a1)
{
  _BYTE *v1; // rbx
  __int64 v3; // rbp
  _WORD *v4; // rdi
  __int64 v5; // rcx
  signed __int64 v6; // rdi
  _BYTE *v7; // rcx
  __int64 v8; // rdx

  v1 = (char *)a1 + 24;
  v3 = 257;
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)a1 + 12), 0, 0x101u);
  v4 = (_WORD *)((char *)a1 + 12);
  *(_QWORD *)((char *)a1 + 4) = 0;
  v5 = 6;
  *((_QWORD *)a1 + 68) = 0;
  while ( v5 )
  {
    *v4++ = 0;
    --v5;
  }
  v6 = &unk_1403025A0 - (_UNKNOWN *)a1;
  do
  {
    *v1 = v1[v6];
    ++v1;
    --v3;
  }
  while ( v3 );
  v7 = (char *)a1 + 281;
  v8 = 256;
  do
  {
    *v7 = v7[v6];
    ++v7;
    --v8;
  }
  while ( v8 );
}


//----- (000000014025F0BC) ----------------------------------------------------
__int64            setSBUpLow_sr(struct __crt_multibyte_data *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  char *v4; // rcx
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  unsigned __int8 *v7; // rdx
  unsigned int v8; // r8d
  __int64 i; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  char v12; // cl
  unsigned int v13; // edx
  __int64 v14; // rcx
  char v15; // al
  __int64 v17; // [rsp+0h] [rbp-100h] BYREF
  int v18; // [rsp+40h] [rbp-C0h]
  _BYTE CPInfo[32]; // [rsp+50h] [rbp-B0h] BYREF
  char v20[256]; // [rsp+70h] [rbp-90h] BYREF
  char v21[256]; // [rsp+170h] [rbp+70h] BYREF
  char v22[256]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v23[1024]; // [rsp+370h] [rbp+270h] BYREF
  __int64 v24; // [rsp+770h] [rbp+670h]

  v2 = *((unsigned int *)a1 + 1);
  if ( (_DWORD)v2 == 65001 || !(unsigned int)((__int64 (           *)(__int64, _BYTE *))GetCPInfo)(v2, CPInfo) )
  {
    v13 = 0;
    v14 = 1;
    do
    {
      if ( v13 - 97 + 32 > 0x19 )
      {
        if ( v13 - 97 > 0x19 )
        {
          v15 = 0;
        }
        else
        {
          *((_BYTE *)a1 + v14 + 24) |= 0x20u;
          v15 = v13 - 32;
        }
      }
      else
      {
        *((_BYTE *)a1 + v14 + 24) |= 0x10u;
        v15 = v13 + 32;
      }
      *((_BYTE *)a1 + v14 + 280) = v15;
      ++v13;
      ++v14;
    }
    while ( v13 < 0x100 );
  }
  else
  {
    v3 = 0;
    v4 = v20;
    v5 = 256;
    do
      *v4++ = v3++;
    while ( v3 < 0x100 );
    v6 = CPInfo[6];
    v7 = &CPInfo[6];
    v20[0] = 32;
    while ( v6 )
    {
      v8 = v7[1];
      for ( i = v6; (unsigned int)i <= v8 && (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
        v20[i] = 32;
      v7 += 2;
      v6 = *v7;
    }
    sub_140262618(nullptr, 1u, (__int64)v20, 256, (__int64)v23, *((_DWORD *)a1 + 1), 0);
    v18 = 0;
    sub_14025A004(nullptr, *((_QWORD *)a1 + 68), 0x100u, v20, 256, (__int64 *)v21, 256, *((_DWORD *)a1 + 1));
    v18 = 0;
    sub_14025A004(nullptr, *((_QWORD *)a1 + 68), 0x200u, v20, 256, (__int64 *)v22, 256, *((_DWORD *)a1 + 1));
    v10 = 1;
    v11 = v23;
    do
    {
      if ( (*v11 & 1) != 0 )
      {
        *((_BYTE *)a1 + v10 + 24) |= 0x10u;
        v12 = v20[v10 + 255];
      }
      else if ( (*v11 & 2) != 0 )
      {
        *((_BYTE *)a1 + v10 + 24) |= 0x20u;
        v12 = v21[v10 + 255];
      }
      else
      {
        v12 = 0;
      }
      *((_BYTE *)a1 + v10 + 280) = v12;
      v11 += 2;
      ++v10;
      --v5;
    }
    while ( v5 );
  }
  return sub_1401F8B20((unsigned __int64)&v17 ^ v24);
}

// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored

//----- (000000014025F2A0) ----------------------------------------------------
__int64            setmbcp_internal(
        unsigned int a1,
        char a2,
        struct __acrt_ptd *     a3,
        struct __crt_multibyte_data **     a4)
{
  unsigned int SystemCP; // edi
  __int64 v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  unsigned int v14; // edi
  void *v15; // rcx
  _DWORD *v16; // rcx
  _BYTE v17[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v19; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 ***v20[2]; // [rsp+30h] [rbp-10h] BYREF
  struct __acrt_ptd *v21; // [rsp+70h] [rbp+30h] BYREF
  void **v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = (void **)a4;
  v21 = a3;
  update_thread_multibyte_data_internal(a3, a4);
  SystemCP = getSystemCP(a1);
  if ( SystemCP == *(_DWORD *)(*((_QWORD *)v21 + 17) + 4LL) )
    return 0;
  v8 = malloc_base();
  v9 = (_DWORD *)v8;
  if ( v8 )
  {
    v10 = 4;
    v11 = (_OWORD *)v8;
    v12 = *((_OWORD **)v21 + 17);
    do
    {
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11 += 8;
      v13 = v12[7];
      v12 += 8;
      *(v11 - 1) = v13;
      --v10;
    }
    while ( v10 );
    *v11 = *v12;
    v11[1] = v12[1];
    *((_QWORD *)v11 + 4) = *((_QWORD *)v12 + 4);
    *v9 = 0;
    v14 = setmbcp_nolock(SystemCP, (__int64)v9);
    if ( v14 != -1 )
    {
      if ( !a2 )
        sub_14024868C();
      if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v21 + 17), 0xFFFFFFFF) == 1 )
      {
        v15 = *((void **)v21 + 17);
        if ( v15 != &unk_1403025A0 )
          free_base(v15);
      }
      *v9 = 1;
      v16 = v9;
      v9 = nullptr;
      *((_QWORD *)v21 + 17) = (uint64)(uintptr_t)(v16);
      if ( (*((_BYTE *)v21 + 936) & 2) == 0 && (dword_140302B88 & 1) == 0 )
      {
        v20[0] = (volatile signed __int32 ***)&v21;
        v20[1] = (volatile signed __int32 ***)&v22;
        v18 = 5;
        v19 = 5;
        sub_14025EB88((__int64)v17, &v19, v20, &v18);
        if ( a2 )
          off_140302580 = *v22;
      }
      goto LABEL_9;
    }
    *errno_sr() = 22;
  }
  v14 = -1;
LABEL_9:
  free_base(v9);
  return v14;
}

// 140302580: using guessed type _UNKNOWN *off_140302580;
// 140302B88: using guessed type int dword_140302B88;

//----- (000000014025F464) ----------------------------------------------------
struct __crt_multibyte_data *           update_thread_multibyte_data_internal(
        struct __acrt_ptd *     a1,
        struct __crt_multibyte_data **     a2)
{
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rax

  if ( (dword_140302B88 & *((_DWORD *)a1 + 234)) != 0 && *((_QWORD *)a1 + 18) )
  {
    v4 = *((volatile signed __int32 **)a1 + 17);
  }
  else
  {
    sub_140258B64(5);
    v4 = *((volatile signed __int32 **)a1 + 17);
    if ( v4 != (volatile signed __int32 *)*a2 )
    {
      if ( v4 && _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 && v4 != (volatile signed __int32 *)&unk_1403025A0 )
        free_base((void *)v4);
      v5 = (volatile signed __int32 *)*a2;
      *((_QWORD *)a1 + 17) = (uint64)(uintptr_t)(*a2);
      _InterlockedIncrement(v5);
      v4 = v5;
    }
    sub_140258BB8(5);
  }
  if ( !v4 )
    abort();
  return (struct __crt_multibyte_data *)v4;
}

// 140302B88: using guessed type int dword_140302B88;

//----- (000000014025F520) ----------------------------------------------------
char sub_14025F520()
{
  struct __acrt_ptd *v0; // rax

  if ( !LOBYTE(dword_140404A6C[19065832]) )
  {
    *(_QWORD *)&dword_140404A6C[19065827] = (uint64)(uintptr_t)(&unk_1403028E0);
    *(_QWORD *)&dword_140404A6C[19065829] = (uint64)(uintptr_t)(&unk_1403025A0);
    *(_QWORD *)&dword_140404A6C[19065825] = (uint64)(uintptr_t)(&unk_1403027D0);
    v0 = sub_140255B44();
    setmbcp_internal(0xFFFFFFFD, 1, v0, (struct __crt_multibyte_data **    )&dword_140404A6C[19065829]);
    LOBYTE(dword_140404A6C[19065832]) = 1;
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBF9F0: using guessed type unsigned int;
// 144CBF9F8: using guessed type unsigned int;
// 144CBFA0C: using guessed type unsigned int;

//----- (000000014025F580) ----------------------------------------------------
struct __crt_multibyte_data *sub_14025F580()
{
  struct __acrt_ptd *v0; // rax

  v0 = (struct __acrt_ptd *)sub_140255A70();
  return update_thread_multibyte_data_internal(v0, (struct __crt_multibyte_data **    )&dword_140404A6C[19065829]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025F5AC) ----------------------------------------------------
int         getmbcp()
{
  int result; // eax
  __int64 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]
  char v3; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v1, nullptr);
  if ( *(_DWORD *)(v2 + 8) )
    result = *(_DWORD *)(v2 + 4);
  else
    result = 0;
  if ( v3 )
    *(_DWORD *)(v1 + 936) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025F5E8) ----------------------------------------------------
int         setmbcp(int CodePage)
{
  struct __acrt_ptd *v2; // rax

  v2 = (struct __acrt_ptd *)sub_140255A70();
  return setmbcp_internal(CodePage, 0, v2, (struct __crt_multibyte_data **    )&dword_140404A6C[19065829]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025F610) ----------------------------------------------------
__int64            setmbcp_nolock(unsigned int a1, __int64 a2)
{
       __int16 *v3; // rbx
  unsigned int SystemCP; // edi
  unsigned int v5; // r14d
  _DWORD *v6; // rax
  int v7; // ebp
  _WORD *v8; // rdi
  __int64 j; // rcx
  bool v10; // zf
  _BYTE *i; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rcx
       __int16 *v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // r15
  __int64 v21; // r14
  char *v22; // r9
  unsigned __int8 *v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // r10
  unsigned int v26; // edi
  unsigned int v27; // edi
  unsigned int v28; // edi
  _WORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // [rsp+0h] [rbp-78h] BYREF
  _DWORD CPInfo[6]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]

  v3 = nullptr;
  SystemCP = getSystemCP(a1);
  if ( !SystemCP )
    goto LABEL_57;
  v5 = 0;
  v6 = &unk_1403029F0;
  v7 = 1;
  do
  {
    if ( *v6 == SystemCP )
    {
      sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a2 + 24)), 0, 0x101u);
      v19 = v5;
      v20 = &unk_1403029E0;
      v21 = 4;
      v22 = (char *)&unk_140302A00 + 48 * v19;
      do
      {
        v23 = (unsigned __int8 *)v22;
        if ( *v22 )
        {
          do
          {
            if ( !v23[1] )
              break;
            v24 = *v23;
            if ( v24 <= v23[1] )
            {
              v25 = v24 + 1;
              do
              {
                if ( (unsigned int)v25 >= 0x101 )
                  break;
                ++v24;
                *(_BYTE *)(v25 + a2 + 24) |= *v20;
                v25 = (unsigned int)(v25 + 1);
              }
              while ( v24 <= v23[1] );
            }
            v23 += 2;
          }
          while ( *v23 );
        }
        v22 += 8;
        ++v20;
        --v21;
      }
      while ( v21 );
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_DWORD *)(a2 + 8) = 1;
      v26 = SystemCP - 932;
      if ( v26 )
      {
        v27 = v26 - 4;
        if ( v27 )
        {
          v28 = v27 - 13;
          if ( v28 )
          {
            if ( v28 == 1 )
              v3 = L"zh-TW";
          }
          else
          {
            v3 = L"ko-KR";
          }
        }
        else
        {
          v3 = (     __int16 *)off_14028F270;
        }
      }
      else
      {
        v3 = L"ja-JP";
      }
      *(_QWORD *)(a2 + 544) = (uint64)(uintptr_t)(v3);
      v29 = (_WORD *)(a2 + 12);
      v30 = 6;
      do
      {
        *v29 = *(_WORD *)((char *)v29 + (_QWORD)&unk_1403029F0 + 48 * v19 - a2 - 8);
        ++v29;
        --v30;
      }
      while ( v30 );
      goto LABEL_12;
    }
    ++v5;
    v6 += 12;
  }
  while ( v5 < 5 );
  if ( SystemCP != 65000 && (unsigned int)((__int64 (           *)(_QWORD))IsValidCodePage)((unsigned __int16)SystemCP) )
  {
    if ( SystemCP == 65001 )
    {
      *(_QWORD *)(a2 + 4) = 65001;
      *(_QWORD *)(a2 + 544) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_WORD *)(a2 + 28) = 0;
      goto LABEL_9;
    }
    if ( (unsigned int)((__int64 (           *)(_QWORD, _DWORD *))GetCPInfo)(SystemCP, CPInfo) )
    {
      sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a2 + 24)), 0, 0x101u);
      v10 = CPInfo[0] == 2;
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_QWORD *)(a2 + 544) = 0;
      if ( v10 )
      {
        for ( i = (char *)&CPInfo[1] + 2; *i; i += 2 )
        {
          if ( !i[1] )
            break;
          v12 = (unsigned __int8)i[1];
          v13 = (unsigned __int8)*i;
          if ( v13 <= v12 )
          {
            v14 = v13 + 1;
            v15 = v12 - v13 + 1;
            do
            {
              *(_BYTE *)(v14 + a2 + 24) |= 4u;
              v14 = (unsigned int)(v14 + 1);
              --v15;
            }
            while ( v15 );
          }
        }
        v16 = (_BYTE *)(a2 + 26);
        v17 = 254;
        do
        {
          *v16++ |= 8u;
          --v17;
        }
        while ( v17 );
        switch ( *(_DWORD *)(a2 + 4) )
        {
          case 0x3A4:
            v18 = L"ja-JP";
            break;
          case 0x3A8:
            v18 = (     __int16 *)off_14028F270;
            break;
          case 0x3B5:
            v18 = L"ko-KR";
            break;
          case 0x3B6:
            v18 = L"zh-TW";
            break;
          default:
            v18 = nullptr;
            break;
        }
        *(_QWORD *)(a2 + 544) = (uint64)(uintptr_t)(v18);
      }
      else
      {
        v7 = 0;
      }
      *(_DWORD *)(a2 + 8) = v7;
LABEL_9:
      v8 = (_WORD *)(a2 + 12);
      for ( j = 6; j; --j )
        *v8++ = 0;
LABEL_12:
      setSBUpLow_sr((struct __crt_multibyte_data *)a2);
      return sub_1401F8B20((unsigned __int64)&v32 ^ v34);
    }
    if ( dword_140404A6C[19065831] )
LABEL_57:
      setSBCS_sr((struct __crt_multibyte_data *)a2);
  }
  return sub_1401F8B20((unsigned __int64)&v32 ^ v34);
}

// 14026E080: invalid function type 'BOOL (__stdcall *IsValidCodePage)(UINT CodePage)' has been ignored
// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored
// 14028F288: using guessed type __int16[6];
// 14028F2A8: using guessed type __int16[6];
// 14028F2B8: using guessed type __int16 asc_14028F2B8[6];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014025F8CC) ----------------------------------------------------
__int64            sub_14025F8CC(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
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

// 14025F8CC: invalid function type 'errno_t __cdecl sub_14025F8CC(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize)' has been ignored

//----- (000000014025F954) ----------------------------------------------------
__int64            x_ismbbtype_l(struct __crt_locale_pointers *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v8, a1);
  if ( (a4 & *(_BYTE *)(a2 + v8[2] + 25LL)) != 0
    || (!a3 ? (result = 0) : (result = (unsigned __int16)(a3 & *(_WORD *)(*(_QWORD *)v8[1] + 2LL * a2))), (_DWORD)result) )
  {
    result = 1;
  }
  if ( v9 )
    *(_DWORD *)(v8[0] + 936LL) &= ~2u;
  return result;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025FAD8) ----------------------------------------------------
__int64            ismbbkana_l(unsigned __int8 a1, struct __crt_locale_pointers *a2)
{
  unsigned int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v6, a2);
  if ( v7 && *(_DWORD *)(v7 + 4) == 932 )
    v4 = x_ismbbtype_l(a2, a1, 0, 3u);
  else
    v4 = 0;
  if ( v8 )
    *(_DWORD *)(v6 + 936) &= ~2u;
  return v4;
}

// 14025FAD8: invalid function type 'int __cdecl ismbbkana_l(unsigned int C, _locale_t Locale)' has been ignored
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (000000014025FB98) ----------------------------------------------------
int         ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}


//----- (000000014025FC50) ----------------------------------------------------
char sub_14025FC50()
{
  *(_QWORD *)&dword_140404A6C[19065843] = ((__int64 (*)(void))GetCommandLineA)();
  *(_QWORD *)&dword_140404A6C[19065845] = ((__int64 (*)(void))GetCommandLineW)();
  return 1;
}

// 14026E068: invalid function type 'LPSTR (__stdcall *GetCommandLineA)()' has been ignored
// 14026E060: invalid function type 'LPWSTR (__stdcall *GetCommandLineW)()' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFA38: using guessed type unsigned int;
// 144CBFA40: using guessed type unsigned int;

//----- (000000014025FCB4) ----------------------------------------------------
__int64            sub_14025FCB4(_QWORD *a1)
{
  if ( a1 && *(_QWORD *)&dword_140404A6C[19065833] )
  {
    *a1 = *(_QWORD *)&dword_140404A6C[19065833];
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
// 144CBFA10: using guessed type unsigned int;

//----- (000000014025FCEC) ----------------------------------------------------
__int64            sub_14025FCEC(_QWORD *a1)
{
  if ( a1 && *(_QWORD *)&dword_140404A6C[19065835] )
  {
    *a1 = *(_QWORD *)&dword_140404A6C[19065835];
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
// 144CBFA18: using guessed type unsigned int;

//----- (000000014025FD2C) ----------------------------------------------------
__int64            Concurrency__details___Release_chore_dup3(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeEnvironmentStringsW)(
               v3,
               a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FD58) ----------------------------------------------------
__int64            Concurrency__details___Release_chore_dup4(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeEnvironmentStringsW)(
               v3,
               a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FD7C) ----------------------------------------------------
char sub_14025FD7C()
{
  ((void (*)(void))FreeEnvironmentStringsW)();
  return 1;
}

// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FDC4) ----------------------------------------------------
void *sub_14025FDC4()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  _WORD *i; // rsi
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // rax
  void *v7; // rdi
  void *v8; // rsi
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-20h]

  v0 = ((__int64 (*)(void))GetEnvironmentStringsW)();
  v1 = v0;
  if ( !v0 )
    goto LABEL_12;
  for ( i = (_WORD *)v0; *i; i += v3 + 1 )
  {
    v3 = -1;
    do
      ++v3;
    while ( i[v3] );
  }
  v4 = ((__int64)i - v1 + 2) >> 1;
  LODWORD(v10) = 0;
  v5 = sub_140258A84(0, 0, v1, (unsigned int)v4, 0, v10, 0, 0);
  if ( v5 )
  {
    v6 = malloc_base();
    v7 = (void *)v6;
    if ( v6 && (LODWORD(v11) = v5, (unsigned int)sub_140258A84(0, 0, v1, (unsigned int)v4, v6, v11, 0, 0)) )
    {
      v8 = v7;
      v7 = nullptr;
    }
    else
    {
      v8 = nullptr;
    }
    free_base(v7);
  }
  else
  {
LABEL_12:
    v8 = nullptr;
  }
  if ( v1 )
    ((void (           *)(__int64))FreeEnvironmentStringsW)(v1);
  return v8;
}

// 14026E058: invalid function type 'LPWCH (__stdcall *GetEnvironmentStringsW)()' has been ignored
// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored
// 14025FE3F: variable 'v10' is possibly undefined
// 14025FE78: variable 'v11' is possibly undefined

//----- (000000014025FEC8) ----------------------------------------------------
__m128i *sub_14025FEC8()
{
  __int64 v0; // rax
  __m128i *v1; // rsi
       __m128i *v2; // rbx
  char *v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __m128i *v6; // rax
  __m128i *v7; // rdi

  v0 = ((__int64 (*)(void))GetEnvironmentStringsW)();
  v1 = nullptr;
  v2 = (     __m128i *)v0;
  if ( v0 )
  {
    v3 = (char *)v0;
    if ( *(_WORD *)v0 )
    {
      do
      {
        v4 = -1;
        do
          ++v4;
        while ( *(_WORD *)&v3[2 * v4] );
        v3 += 2 * v4 + 2;
      }
      while ( *(_WORD *)v3 );
    }
    v5 = 2 * ((v3 - (char *)v2 + 2) >> 1);
    v6 = (__m128i *)malloc_base();
    v7 = v6;
    if ( v6 )
    {
      sub_1401FC920(v6, v2, v5);
      v1 = v7;
    }
    free_base(nullptr);
    ((void (           *)(     __m128i *))FreeEnvironmentStringsW)(v2);
  }
  return v1;
}

// 14026E058: invalid function type 'LPWCH (__stdcall *GetEnvironmentStringsW)()' has been ignored
// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FF68) ----------------------------------------------------
__int64            _dcrt_set_variable_in_narrow_environment_nolock_0(__int8 *Block, int a2)
{
  unsigned int v2; // esi
  __int8 *v6; // rdi
  __int8 *v7; // rax
  __int8 *v8; // r13
  __int64 *v9; // r14
  __int8 v10; // bp
  int v11; // ebp
  __int64 v12; // rax
  signed __int64 v13; // r12
  __int64 *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  int v19; // ebp
  __int64 v20; // r14
  __int64 v21; // r14
  _BYTE *v22; // rax
  _BYTE *v23; // rbx
  __int64 v24; // rcx

  v2 = 0;
  if ( !Block )
  {
    *errno_sr() = 22;
    return -1;
  }
  v6 = Block;
  v7 = sub_14026CE7C((__int64)Block, 0x3Du);
  v8 = v7;
  if ( !v7 || v7 == Block )
  {
LABEL_51:
    v2 = -1;
    *errno_sr() = 22;
    goto LABEL_52;
  }
  v9 = *(__int64 **)&dword_140404A6C[19064861];
  v10 = v7[1];
  if ( *(_QWORD *)&dword_140404A6C[19064861] == *(_QWORD *)&dword_140404A6C[19064867] )
  {
    v9 = (__int64 *)copy_environment__char(*(__int64 **)&dword_140404A6C[19064861]);
    *(_QWORD *)&dword_140404A6C[19064861] = (uint64)(uintptr_t)(v9);
  }
  if ( v9 )
    goto LABEL_20;
  if ( a2 && *(_QWORD *)&dword_140404A6C[19064863] )
  {
    if ( unknown_libname_764() )
    {
      v9 = *(__int64 **)&dword_140404A6C[19064861];
      if ( *(_QWORD *)&dword_140404A6C[19064861] == *(_QWORD *)&dword_140404A6C[19064867] )
      {
        v9 = (__int64 *)copy_environment__char(*(__int64 **)&dword_140404A6C[19064861]);
        *(_QWORD *)&dword_140404A6C[19064861] = (uint64)(uintptr_t)(v9);
      }
      goto LABEL_19;
    }
    goto LABEL_51;
  }
  if ( !v10 )
  {
LABEL_52:
    v11 = v2;
    goto LABEL_53;
  }
  *(_QWORD *)&dword_140404A6C[19064861] = calloc_base();
  free_base(nullptr);
  v9 = *(__int64 **)&dword_140404A6C[19064861];
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
    goto LABEL_15;
  if ( *(_QWORD *)&dword_140404A6C[19064863] )
    goto LABEL_19;
  *(_QWORD *)&dword_140404A6C[19064863] = calloc_base();
  free_base(nullptr);
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
  {
LABEL_15:
    v11 = -1;
LABEL_53:
    v2 = v11;
LABEL_54:
    v19 = v2;
    goto LABEL_55;
  }
  v9 = *(__int64 **)&dword_140404A6C[19064861];
LABEL_19:
  if ( !v9 )
    goto LABEL_15;
LABEL_20:
  v12 = *v9;
  v13 = v8 - Block;
  v14 = v9;
  while ( v12 )
  {
    if ( !(unsigned int)strnicoll_sr((__int64)Block, v12, v8 - Block)
      && (*(_BYTE *)(v13 + *v14) == 61 || !*(_BYTE *)(v13 + *v14)) )
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
        *(_QWORD *)&dword_140404A6C[19064861] = v16;
      goto LABEL_43;
    }
    v9[v15] = (__int64)Block;
LABEL_42:
    v6 = nullptr;
LABEL_43:
    if ( a2 )
    {
      v21 = -1;
      do
        ++v21;
      while ( Block[v21] );
      v22 = (_BYTE *)calloc_base();
      v23 = v22;
      if ( v22 )
      {
        if ( (unsigned int)strcpy_s_sr(v22, v21 + 2, (__int64)Block) )
        {
          sub_14024CFBC();
          __debugbreak();
        }
        v24 = (__int64)&v8[(intptr_t)((uintptr_t)(v23) - (uintptr_t)(Block)) + 1];
        *(_BYTE *)(v24 - 1) = 0;
        if ( !(unsigned int)_acrt_SetEnvironmentVariableA(v23, (_BYTE *)(v24 & -(__int64)(v10 != 0))) )
        {
          v2 = -1;
          *errno_sr() = 42;
        }
      }
      free_base(v23);
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
      *(_QWORD *)&dword_140404A6C[19064861] = v20;
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
