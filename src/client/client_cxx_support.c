#include "shared_client.h"


//----- (0000000140197C00) ----------------------------------------------------
__int64            sub_140197C00(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 337);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279AF0: using guessed type void (*off_140279AF0)(CHtmlStream *__hidden this);

//----- (0000000140197C50) ----------------------------------------------------
__int64            sub_140197C50(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 513);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279AA0: using guessed type void (*off_140279AA0)(CHtmlStream *__hidden this);

//----- (0000000140197CA0) ----------------------------------------------------
__int64            sub_140197CA0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 1202);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279B40: using guessed type void (*off_140279B40)(CHtmlStream *__hidden this);

//----- (0000000140197DF0) ----------------------------------------------------
__int64            sub_140197DF0(__int64 a1)
{
  __int64 v2; // rcx

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = 154;
  v2 = a1 + 40;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(v2 + 24) = (uintptr_t)sub_1401982A0;
  *(_BYTE *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = a1;
  SteamAPI_RegisterCallback(v2, 513);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 96) = (uintptr_t)sub_1401982B0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = a1;
  SteamAPI_RegisterCallback(a1 + 72, 337);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 128) = (uintptr_t)sub_1401982C0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 120) = a1;
  SteamAPI_RegisterCallback(a1 + 104, 1202);
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279A58: using guessed type __int64 (__fastcall *off_140279A58)();
// 140279AA0: using guessed type void (*off_140279AA0)(CHtmlStream *__hidden this);
// 140279AF0: using guessed type void (*off_140279AF0)(CHtmlStream *__hidden this);
// 140279B40: using guessed type void (*off_140279B40)(CHtmlStream *__hidden this);

//----- (0000000140197EC0) ----------------------------------------------------
__int64 (           **           sub_140197EC0(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 (           **result)(); // rax

  v1 = a1[2];
  result = &off_140279A58;
  *a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v1 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    a1[2] = 0;
  }
  return result;
}

// 14026E668: using guessed type __int64 __fastcall SteamAPI_UnregisterCallResult(_QWORD);
// 140279A58: using guessed type __int64 (__fastcall *off_140279A58)();

//----- (0000000140197FB0) ----------------------------------------------------
__int64 (           **           sub_140197FB0(__int64 a1))()
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 (           **result)(); // rax

  v2 = a1 + 104;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279B18);
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
    SteamAPI_UnregisterCallback(v2);
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 72);
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(&off_140279A78);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 40);
  v4 = *(_QWORD *)(a1 + 16);
  result = &off_140279A58;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v4 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}
