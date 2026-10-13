#include "shared_client.h"
 // weak
void sr_steam_callback_run(uintptr_t self,uintptr_t payload,uintptr_t failure,uintptr_t call_id) {
  uintptr_t object,method;
  memcpy(&object,(void *)(self+16),8);memcpy(&method,(void *)(self+24),8);
  ((void (*)(uintptr_t,uintptr_t,uintptr_t,uintptr_t))method)(object,payload,failure,call_id);
}

void sr_steam_result_run(uintptr_t self,uintptr_t payload) {
  uintptr_t object,method;
  memset((void *)(self+16),0,8);
  memcpy(&object,(void *)(self+24),8);memcpy(&method,(void *)(self+32),8);
  ((void (*)(uintptr_t,uintptr_t,uintptr_t))method)(object,payload,0);
}

int sr_steam_callback_size4(void) {return 4;}

int sr_steam_callback_size8(void) {return 8;}

int sr_steam_callback_size16(void) {return 16;}

int sr_steam_callback_size264(void) {return 264;}

//----- (0000000140198040) ----------------------------------------------------
_BYTE *           sub_140198040(_BYTE *Block, char a2)
{
  bool v2;

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !v2 )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (0000000140198090) ----------------------------------------------------
_BYTE *           sub_140198090(_BYTE *Block, char a2)
{
  bool v2;

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279A78);
  if ( !v2 )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (00000001401980E0) ----------------------------------------------------
_BYTE *           sub_1401980E0(_BYTE *Block, char a2)
{
  bool v2;

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279B18);
  if ( !v2 )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (0000000140198130) ----------------------------------------------------
_BYTE *           sub_140198130(_BYTE *Block, char a2)
{
  bool v2;

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279B18);
  if ( !v2 )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (0000000140198180) ----------------------------------------------------
_BYTE *           sub_140198180(_BYTE *Block, char a2)
{
  bool v2;

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279A78);
  if ( !v2 )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (00000001401981D0) ----------------------------------------------------
_BYTE *           sub_1401981D0(_BYTE *Block, char a2)
{
  bool v2;

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !v2 )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (0000000140198220) ----------------------------------------------------
__int64            sub_140198220(__int64 a1)
{
  __int64 result;

  if ( *(_QWORD *)(a1 + 16) )
  {
    result = SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}

//----- (00000001401982A0) ----------------------------------------------------
__int64            sub_1401982A0(__int64 a1, __int64 a2)
{
  __int64 result;

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 8LL) = result;
  return result;
}

//----- (00000001401982B0) ----------------------------------------------------
__int64            sub_1401982B0(__int64 a1, _QWORD *a2)
{
  __int64 result;

  result = *(_QWORD *)&dword_140404A6C[19063859];
  **(_QWORD **)&dword_140404A6C[19063859] = *a2;
  return result;
}

//----- (00000001401982C0) ----------------------------------------------------
__int64            sub_1401982C0(__int64 a1, __int64 *a2)
{
  __int64 v2;
  _QWORD *v3;

  v2 = *a2;
  *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 16LL) = *a2;
  v3 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
  return (*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*v3 + 24LL))(*v3, v2);
}

//----- (0000000140198300) ----------------------------------------------------
void            sub_140198300(__int64 a1, _DWORD *a2)
{
  _QWORD *v2;

  if ( a2 && *a2 == 1 )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
    (*(void (           **)(_QWORD, unsigned int *, __int64, unsigned int *))(*(_QWORD *)*v2 + 168LL))(
      *v2,
      &dword_140404A6C[19063861],
      1024,
      &dword_140404A6C[19064117]);
    if ( *(_QWORD *)&dword_140404A6C[19064119] )
      (*(void (           **)(unsigned int *, _QWORD))&dword_140404A6C[19064119])(
        &dword_140404A6C[19063861],
        dword_140404A6C[19064117]);
  }
}

//----- (0000000140198360) ----------------------------------------------------
__int64            sub_140198360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if ( a2 && a3 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      SteamAPI_UnregisterCallback(a1);
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    return SteamAPI_RegisterCallback(a1, 337);
  }
  return result;
}

//----- (00000001401983C0) ----------------------------------------------------
__int64            sub_1401983C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if ( a2 && a3 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      SteamAPI_UnregisterCallback(a1);
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    return SteamAPI_RegisterCallback(a1, 513);
  }
  return result;
}

//----- (0000000140198420) ----------------------------------------------------
__int64            sub_140198420(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if ( a2 && a3 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      SteamAPI_UnregisterCallback(a1);
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    return SteamAPI_RegisterCallback(a1, 1202);
  }
  return result;
}

//----- (00000001401984A0) ----------------------------------------------------
void sub_1401984A0(__int64 a1,__int64 a2,__int64 a3,__int64 a4) {
  uintptr_t active,object,method;
  memcpy(&active,(void *)(uintptr_t)(a1+16),8);
  if((uintptr_t)a4!=active)return;
  memset((void *)(uintptr_t)(a1+16),0,8);
  memcpy(&object,(void *)(uintptr_t)(a1+24),8);memcpy(&method,(void *)(uintptr_t)(a1+32),8);
  ((void (*)(uintptr_t,uintptr_t,uintptr_t))method)(object,(uintptr_t)a2,(uintptr_t)a3);
}

//----- (0000000140198520) ----------------------------------------------------
__int64            sub_140198520(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;

  if ( a1[2] )
    result = SteamAPI_UnregisterCallResult(a1);
  a1[2] = a2;
  a1[3] = a3;
  a1[4] = a4;
  if ( a2 )
    return SteamAPI_RegisterCallResult(a1, a2);
  return result;
}

//----- (00000001401985D0) ----------------------------------------------------
__int64 sub_1401985D0()
{
  return *(_QWORD *)SteamInternal_ContextInit(&off_140301E58);
}

//----- (00000001401985F0) ----------------------------------------------------
__int64 sub_1401985F0()
{
  return *(_QWORD *)SteamInternal_ContextInit(&off_140301E28);
}

//----- (0000000140198610) ----------------------------------------------------
__int64            sub_140198610(__int64 *a1)
{
  unsigned int HSteamUser;
  __int64 result;

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "STEAMAPPS_INTERFACE_VERSION008");
  *a1 = result;
  return result;
}

//----- (0000000140198640) ----------------------------------------------------
__int64            sub_140198640(__int64 *a1)
{
  unsigned int HSteamUser;
  __int64 result;

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamFriends017");
  *a1 = result;
  return result;
}

//----- (0000000140198670) ----------------------------------------------------
__int64            sub_140198670(__int64 *a1)
{
  unsigned int HSteamUser;
  __int64 result;

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamMatchMaking009");
  *a1 = result;
  return result;
}

//----- (00000001401986A0) ----------------------------------------------------
__int64            sub_1401986A0(__int64 *a1)
{
  unsigned int HSteamUser;
  __int64 result;

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamNetworking006");
  *a1 = result;
  return result;
}

//----- (00000001401986D0) ----------------------------------------------------
__int64            sub_1401986D0(__int64 *a1)
{
  unsigned int HSteamUser;
  __int64 result;

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamUser020");
  *a1 = result;
  return result;
}

//----- (0000000140198700) ----------------------------------------------------
__int64 sub_140198700()
{
  return *(_QWORD *)SteamInternal_ContextInit(&off_140301E40);
}

//----- (0000000140198720) ----------------------------------------------------
__int64 sub_140198720()
{
  return *(_QWORD *)SteamInternal_ContextInit(&off_140301E70);
}

//----- (0000000140198740) ----------------------------------------------------
__int64 sub_140198740()
{
  return *(_QWORD *)SteamInternal_ContextInit(&off_140301E10);
}

//----- (0000000140198790) ----------------------------------------------------
void            sub_140198790(__int64 a1)
{
  _QWORD *v2;

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    (*(void (           **)(_QWORD, __int64))(*(_QWORD *)*v2 + 224LL))(*v2, a1);
  }
}

//----- (00000001401987E0) ----------------------------------------------------
void            sub_1401987E0(unsigned int a1)
{
  _QWORD *v2;

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E40);
    (*(void (           **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v2 + 104LL))(*v2, 2, a1);
  }
}

//----- (0000000140198820) ----------------------------------------------------
void            sub_140198820(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v8;
  __int64 *v9;
  __int64 v10;
  _QWORD *v11;
  char *v12;
  __int64 v13;
  char v14;
  _BYTE v15[24];

  if ( dword_140404A6C[19063857] )
  {
    v8 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v9 = (__int64 *)(*(__int64 (           **)(_QWORD, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)*v8 + 32LL))(
                      *v8,
                      v15,
                      a3,
                      a4);
    v10 = *v9;
    *a1 = *v9;
    v11 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v12 = (char *)(*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*v11 + 56LL))(*v11, v10);
    v13 = a2 - (_QWORD)v12;
    do
    {
      v14 = *v12;
      v12[v13] = *v12;
      ++v12;
    }
    while ( v14 );
  }
}

//----- (00000001401988C0) ----------------------------------------------------
__int64            sub_1401988C0(unsigned int a1)
{
  _QWORD *v3;

  if ( !dword_140404A6C[19063857] )
    return 0;
  v3 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (           **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, a1);
}

//----- (0000000140198900) ----------------------------------------------------
void            sub_140198900(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v8;
  __int64 v9;
  _QWORD *v10;
  char *v11;
  __int64 v12;
  char v13;
  _BYTE v14[24];

  if ( dword_140404A6C[19063857] )
  {
    v8 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v9 = *(_QWORD *)(*(__int64 (           **)(_QWORD, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)*v8 + 32LL))(
                      *v8,
                      v14,
                      a2,
                      a3);
    v10 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v11 = (char *)(*(__int64 (           **)(_QWORD, __int64, __int64))(*(_QWORD *)*v10 + 360LL))(*v10, v9, a4);
    v12 = a1 - (_QWORD)v11;
    do
    {
      v13 = *v11;
      v11[v12] = *v11;
      ++v11;
    }
    while ( v13 );
  }
}

//----- (00000001401989A0) ----------------------------------------------------
__int64            sub_1401989A0(unsigned int a1, unsigned int a2)
{
  _QWORD *v5;
  __int64 v6;
  _QWORD *v7;
  char v8;

  if ( !dword_140404A6C[19063857] )
    return 0;
  v5 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  v6 = *(_QWORD *)(*(__int64 (           **)(_QWORD, char *, _QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, &v8, a1, a2);
  v7 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*v7 + 48LL))(*v7, v6);
}

//----- (0000000140198A10) ----------------------------------------------------
__int64            sub_140198A10(__int64 a1)
{
  _QWORD *v3;

  if ( !dword_140404A6C[19063857] )
    return 0;
  v3 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*v3 + 48LL))(*v3, a1);
}

//----- (0000000140198A50) ----------------------------------------------------
__int64            sub_140198A50(_QWORD *a1)
{
  _QWORD *v2;
  __int64 v3;
  _QWORD *v4;
  char v6;

  if ( !dword_140404A6C[19063857] )
    return 0;
  v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E58);
  v3 = *(_QWORD *)(*(__int64 (           **)(_QWORD, char *))(*(_QWORD *)*v2 + 160LL))(*v2, &v6);
  v4 = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
  if ( *(_QWORD *)(*(__int64 (           **)(_QWORD, char *))(*(_QWORD *)*v4 + 16LL))(*v4, &v6) == v3 )
  {
    *a1 = v3;
    return 1;
  }
  else
  {
    dword_140404A6C[19063857] = 0;
    dword_140404A6C[19063858] = 1;
    return 0;
  }
}

//----- (0000000140198AF0) ----------------------------------------------------
__int64            sub_140198AF0(__int64 a1)
{
  _QWORD *v2;
  char *v3;
  __int64 v4;
  char v5;

  if ( !dword_140404A6C[19063857] )
    return 0;
  v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  v3 = (char *)(**(__int64 (           ***)(_QWORD))*v2)(*v2);
  v4 = a1 - (_QWORD)v3;
  do
  {
    v5 = *v3;
    v3[v4] = *v3;
    ++v3;
  }
  while ( v5 );
  return 1;
}

//----- (0000000140198B50) ----------------------------------------------------
__int64            sub_140198B50(__int64 a1)
{
  _QWORD *v2;
  __int64 v4;
  _BYTE v5[24];
  __int64 v6;

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    (*(void (           **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)*v2 + 48LL))(*v2, a1, v5);
    *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 28LL) = v5[0];
    *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 32LL) = v5[1];
    *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 36LL) = v5[2];
  }
  return 0; /* the function has no caller */
}

//----- (0000000140198BD0) ----------------------------------------------------
__int64            sub_140198BD0(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19063859] = a1;
  if ( (unsigned __int8)SteamAPI_Init() )
  {
    dword_140404A6C[19063857] = 1;
    return 1;
  }
  else
  {
    dword_140404A6C[19063858] = 1;
    return 0;
  }
}

//----- (0000000140198C10) ----------------------------------------------------
void            sub_140198C10(__int64 a1)
{
  _QWORD *v2;

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    (*(void (           **)(_QWORD, __int64,      char *))(*(_QWORD *)*v2 + 392LL))(*v2, a1, "join it");
  }
}

//----- (0000000140198C60) ----------------------------------------------------
__int64            sub_140198C60(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4;
  _QWORD *v10;
  _QWORD *v11;
  unsigned __int8 v12;
  __int64 v13;

  HIWORD(v13) = BYTE6(v13) & 0xF;
  v4 = 0;
  v13 &= 0xFFF0000000000000uLL;
  if ( !dword_140404A6C[19063857] )
    return 0;
  v10 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
  if ( (*(unsigned __int8 (           **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v10 + 8LL))(*v10, a3, 0) )
  {
    v11 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    v12 = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64, __int64 *, _DWORD))(*(_QWORD *)*v11 + 16LL))(
            *v11,
            a2,
            a4,
            a3,
            &v13,
            0);
    v4 = v12;
    if ( v12 )
      *a1 = v13;
  }
  return v4;
}

//----- (0000000140198D20) ----------------------------------------------------
void            sub_140198D20(__int64 a1)
{
  _QWORD *v1;
  __int64 v2;

  if ( dword_140404A6C[19063857] )
  {
    *(_QWORD *)&dword_140404A6C[19064119] = a1;
    v1 = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
    v2 = (*(__int64 (           **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v1 + 160LL))(*v1, 0, 0);
    if ( qword_140301EA0 )
      SteamAPI_UnregisterCallResult(&off_140301E90);
    qword_140301EA0 = v2;
    qword_140301EB0 = (__int64)sub_140198300;
    qword_140301EA8 = (__int64)&off_140301E90;
    if ( v2 )
      SteamAPI_RegisterCallResult(&off_140301E90, v2);
  }
}

//----- (0000000140198DC0) ----------------------------------------------------
void            sub_140198DC0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6;

  if ( dword_140404A6C[19063857] )
  {
    v6 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    (**(void (           ***)(_QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))*v6)(*v6, a1, a2, a3, 0, 0);
  }
}

//----- (0000000140198E20) ----------------------------------------------------
__int64 sub_140198E20()
{
  __int64 result;

  result = SteamAPI_Shutdown();
  dword_140404A6C[19063857] = 0;
  return result;
}

//----- (0000000140198E40) ----------------------------------------------------
__int64 sub_140198E40()
{
  __int64 result;

  if ( dword_140404A6C[19063857] )
    return SteamAPI_RunCallbacks();
  return result;
}

//----- (0000000140198E51) ----------------------------------------------------
// attributes: thunk
__int64 sub_140198E51(void)
{
  return SDL_GetPlatform();
}

//----- (0000000140198E57) ----------------------------------------------------
// attributes: thunk
/* A jump to off_14026E338_sr, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E57()
{
  __asm__("movabs $off_14026E338_sr, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E5D) ----------------------------------------------------
// attributes: thunk
/* A jump to off_14026E340_sr, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E5D()
{
  __asm__("movabs $off_14026E340_sr, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E63) ----------------------------------------------------
// attributes: thunk
__int64 sub_140198E63(void *a1)
{
  /* SDL_SemWait(sem); the export dropped the argument. */
  return off_14026E348_sr(a1);
}

//----- (0000000140198E6F) ----------------------------------------------------
// attributes: thunk
/* A jump to off_14026E358_sr, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E6F()
{
  __asm__("movabs $off_14026E358_sr, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E75) ----------------------------------------------------
// attributes: thunk
/* A jump to off_14026E360_sr, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E75()
{
  __asm__("movabs $off_14026E360_sr, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E7B) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetNumAudioDevices, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E7B()
{
  __asm__("movabs $__imp_SDL_GetNumAudioDevices, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E81) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetAudioDeviceName, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E81()
{
  __asm__("movabs $__imp_SDL_GetAudioDeviceName, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E87) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_OpenAudioDevice, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E87()
{
  __asm__("movabs $__imp_SDL_OpenAudioDevice, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E8D) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_PauseAudioDevice, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E8D()
{
  __asm__("movabs $__imp_SDL_PauseAudioDevice, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E93) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_LoadWAV_RW, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E93()
{
  __asm__("movabs $__imp_SDL_LoadWAV_RW, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E99) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_FreeWAV, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E99()
{
  __asm__("movabs $__imp_SDL_FreeWAV, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198E9F) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_CloseAudioDevice, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198E9F()
{
  __asm__("movabs $__imp_SDL_CloseAudioDevice, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EA5) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_SetClipboardText, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EA5()
{
  __asm__("movabs $__imp_SDL_SetClipboardText, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EAB) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_HasSSE2, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EAB()
{
  __asm__("movabs $__imp_SDL_HasSSE2, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EB1) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetSystemRAM, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EB1()
{
  __asm__("movabs $__imp_SDL_GetSystemRAM, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EB7) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetNumDisplayModes, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EB7()
{
  __asm__("movabs $__imp_SDL_GetNumDisplayModes, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EBD) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetDisplayMode, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EBD()
{
  __asm__("movabs $__imp_SDL_GetDisplayMode, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EC3) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_CreateWindow, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EC3()
{
  __asm__("movabs $__imp_SDL_CreateWindow, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EC9) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_SetWindowSize, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EC9()
{
  __asm__("movabs $__imp_SDL_SetWindowSize, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198ECF) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetWindowSize, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198ECF()
{
  __asm__("movabs $__imp_SDL_GetWindowSize, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198ED5) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_RestoreWindow, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198ED5()
{
  __asm__("movabs $__imp_SDL_RestoreWindow, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EDB) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_SetWindowFullscreen, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EDB()
{
  __asm__("movabs $__imp_SDL_SetWindowFullscreen, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EE1) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GL_SetAttribute, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EE1()
{
  __asm__("movabs $__imp_SDL_GL_SetAttribute, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EE7) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GL_CreateContext, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EE7()
{
  __asm__("movabs $__imp_SDL_GL_CreateContext, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EED) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GL_SetSwapInterval, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EED()
{
  __asm__("movabs $__imp_SDL_GL_SetSwapInterval, %rax\n\tjmp *(%rax)");
}

__int64 sub_140198EF3(void)
{
 void *window;memcpy(&window,&dword_140404A6C[137297751],8);
 SR_DEBUG_FRAME();
 return sr_swap_window_import(window);
}

//----- (0000000140198EF9) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetKeyboardState, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EF9()
{
  __asm__("movabs $__imp_SDL_GetKeyboardState, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198EFF) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetMouseState, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198EFF()
{
  __asm__("movabs $__imp_SDL_GetMouseState, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F05) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetRelativeMouseState, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F05()
{
  __asm__("movabs $__imp_SDL_GetRelativeMouseState, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F0B) ----------------------------------------------------
// attributes: thunk
__int64            sub_140198F0B(__int64 a1, __int64 a2, __int64 a3)
{
  return SDL_SetRelativeMouseMode(a1, a2, a3);
}

//----- (0000000140198F11) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_ShowCursor, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F11()
{
  __asm__("movabs $__imp_SDL_ShowCursor, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F17) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_NumJoysticks, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F17()
{
  __asm__("movabs $__imp_SDL_NumJoysticks, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F1D) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickNameForIndex, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F1D()
{
  __asm__("movabs $__imp_SDL_JoystickNameForIndex, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F23) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickOpen, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F23()
{
  __asm__("movabs $__imp_SDL_JoystickOpen, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F29) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickGetAttached, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F29()
{
  __asm__("movabs $__imp_SDL_JoystickGetAttached, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F2F) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickInstanceID, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F2F()
{
  __asm__("movabs $__imp_SDL_JoystickInstanceID, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F35) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickNumAxes, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F35()
{
  __asm__("movabs $__imp_SDL_JoystickNumAxes, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F3B) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickNumHats, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F3B()
{
  __asm__("movabs $__imp_SDL_JoystickNumHats, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F41) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickNumButtons, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F41()
{
  __asm__("movabs $__imp_SDL_JoystickNumButtons, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F47) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickUpdate, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F47()
{
  __asm__("movabs $__imp_SDL_JoystickUpdate, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F53) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickGetAxis, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F53()
{
  __asm__("movabs $__imp_SDL_JoystickGetAxis, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F59) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickGetHat, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F59()
{
  __asm__("movabs $__imp_SDL_JoystickGetHat, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F5F) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_JoystickGetButton, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F5F()
{
  __asm__("movabs $__imp_SDL_JoystickGetButton, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F65) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GameControllerAddMappingsFromRW, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F65()
{
  __asm__("movabs $__imp_SDL_GameControllerAddMappingsFromRW, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F6B) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_IsGameController, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F6B()
{
  __asm__("movabs $__imp_SDL_IsGameController, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F71) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GameControllerOpen, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F71()
{
  __asm__("movabs $__imp_SDL_GameControllerOpen, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F77) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GameControllerGetAttached, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F77()
{
  __asm__("movabs $__imp_SDL_GameControllerGetAttached, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F7D) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GameControllerGetJoystick, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F7D()
{
  __asm__("movabs $__imp_SDL_GameControllerGetJoystick, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F83) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GameControllerGetAxis, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F83()
{
  __asm__("movabs $__imp_SDL_GameControllerGetAxis, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F89) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GameControllerGetButton, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F89()
{
  __asm__("movabs $__imp_SDL_GameControllerGetButton, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F8F) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_PollEvent, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F8F()
{
  __asm__("movabs $__imp_SDL_PollEvent, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198F95) ----------------------------------------------------
// attributes: thunk
__int64            sub_140198F95(__int64 a1, __int64 a2, __int64 a3)
{
  return SDL_ShowSimpleMessageBox(a1, a2, a3);
}

//----- (0000000140198F9B) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetTicks, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198F9B()
{
  __asm__("movabs $__imp_SDL_GetTicks, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198FA1) ----------------------------------------------------
// attributes: thunk
__int64            sub_140198FA1(__int64 a1)
{
  return SDL_Delay(a1);
}

//----- (0000000140198FA7) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_GetVersion, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198FA7()
{
  __asm__("movabs $__imp_SDL_GetVersion, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198FAD) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_Init, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198FAD()
{
  __asm__("movabs $__imp_SDL_Init, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198FB3) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_Quit, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_140198FB3()
{
  __asm__("movabs $__imp_SDL_Quit, %rax\n\tjmp *(%rax)");
}

//----- (0000000140198FCB) ----------------------------------------------------
// attributes: thunk
__int64            _WSAFDIsSet_sr(__int64 a1, __int64 a2)
{
  return ((__int64 (           *)(__int64, __int64))__WSAFDIsSet)(a1, a2);
}

// 14026E5A0: invalid function type 'int (__stdcall *__WSAFDIsSet)(SOCKET fd, fd_set *)' has been ignored

//----- (0000000140198FD1) ----------------------------------------------------
// attributes: thunk
__int64            bind_sr(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (           *)(__int64, __int64, __int64))__imp_bind)(a1, a2, a3);
}

// 14026E578: invalid function type 'int (__stdcall *bind)(SOCKET s, const struct sockaddr *name, int namelen)' has been ignored

//----- (0000000140198FD7) ----------------------------------------------------
// attributes: thunk
__int64            closesocket_sr(__int64 a1)
{
  return ((__int64 (           *)(__int64))__imp_closesocket)(a1);
}

// 14026E580: invalid function type 'int (__stdcall *closesocket)(SOCKET s)' has been ignored

//----- (0000000140198FDD) ----------------------------------------------------
// attributes: thunk
__int64            connect_sr(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (           *)(__int64, __int64, __int64))__imp_connect)(a1, a2, a3);
}

// 14026E588: invalid function type 'int (__stdcall *connect)(SOCKET s, const struct sockaddr *name, int namelen)' has been ignored

//----- (0000000140198FE3) ----------------------------------------------------
// attributes: thunk
__int64            ioctlsocket_sr(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (           *)(__int64, __int64, __int64))__imp_ioctlsocket)(a1, a2, a3);
}

// 14026E590: invalid function type 'int (__stdcall *ioctlsocket)(SOCKET s, int cmd, u_long *argp)' has been ignored

//----- (0000000140198FE9) ----------------------------------------------------
// attributes: thunk
__int64            getsockopt_sr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return ((__int64 (           *)(__int64, __int64, __int64, __int64, __int64))__imp_getsockopt)(a1, a2, a3, a4, a5);
}

// 14026E598: invalid function type 'int (__stdcall *getsockopt)(SOCKET s, int level, int optname, char *optval, int *optlen)' has been ignored

//----- (0000000140198FEF) ----------------------------------------------------
// attributes: thunk
__int64            htonl_sr(__int64 a1)
{
  return ((__int64 (           *)(__int64))__imp_htonl)(a1);
}

// 14026E5E0: invalid function type 'u_long (__stdcall *htonl)(u_long hostlong)' has been ignored

//----- (0000000140198FF5) ----------------------------------------------------
// attributes: thunk
__int64            htons_sr(__int64 a1)
{
  return ((__int64 (           *)(__int64))__imp_htons)(a1);
}

// 14026E5A8: invalid function type 'u_short (__stdcall *htons)(u_short hostshort)' has been ignored

//----- (0000000140198FFB) ----------------------------------------------------
// attributes: thunk
unsigned int           inet_addr_sr(     char *cp)
{
  return ((unsigned long (*)(const char *))__imp_inet_addr)(cp);
}

//----- (0000000140199001) ----------------------------------------------------
// attributes: thunk
__int64            ntohl_sr(__int64 a1)
{
  return ((__int64 (           *)(__int64))__imp_ntohl)(a1);
}

// 14026E5B8: invalid function type 'u_long (__stdcall *ntohl)(u_long netlong)' has been ignored

//----- (0000000140199007) ----------------------------------------------------
// attributes: thunk
__int64            ntohs_sr(__int64 a1)
{
  return ((__int64 (           *)(__int64))__imp_ntohs)(a1);
}

// 14026E5C0: invalid function type 'u_short (__stdcall *ntohs)(u_short netshort)' has been ignored

//----- (000000014019900D) ----------------------------------------------------
// attributes: thunk
__int64            recv_sr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ((__int64 (           *)(__int64, __int64, __int64, __int64))__imp_recv)(a1, a2, a3, a4);
}

// 14026E5C8: invalid function type 'int (__stdcall *recv)(SOCKET s, char *buf, int len, int flags)' has been ignored

//----- (0000000140199013) ----------------------------------------------------
// attributes: thunk
__int64            recvfrom_sr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return ((__int64 (           *)(__int64, __int64, __int64, __int64, __int64, __int64))__imp_recvfrom)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E5D0: invalid function type 'int (__stdcall *recvfrom)(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen)' has been ignored

//----- (0000000140199019) ----------------------------------------------------
// attributes: thunk
int           select_sr(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds,      struct timeval *timeout)
{
  return ((int (*)(int, fd_set *, fd_set *, fd_set *, const struct timeval *))__imp_select)(nfds, readfds, writefds, exceptfds, timeout);
}

//----- (000000014019901F) ----------------------------------------------------
// attributes: thunk
__int64            send_sr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ((__int64 (           *)(__int64, __int64, __int64, __int64))__imp_send)(a1, a2, a3, a4);
}

// 14026E5E8: invalid function type 'int (__stdcall *send)(SOCKET s, const char *buf, int len, int flags)' has been ignored

//----- (0000000140199025) ----------------------------------------------------
// attributes: thunk
__int64            sendto_sr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return ((__int64 (           *)(__int64, __int64, __int64, __int64, __int64, int))__imp_sendto)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E5F0: invalid function type 'int (__stdcall *sendto)(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen)' has been ignored

//----- (000000014019902B) ----------------------------------------------------
// attributes: thunk
__int64            socket_sr(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (           *)(__int64, __int64, __int64))__imp_socket)(a1, a2, a3);
}

// 14026E5F8: invalid function type 'SOCKET (__stdcall *socket)(int af, int type, int protocol)' has been ignored

//----- (0000000140199031) ----------------------------------------------------
// attributes: thunk
struct hostent *          sub_140199031(     char *name)
{
  return gethostbyname(name);
}

//----- (0000000140199037) ----------------------------------------------------
// attributes: thunk
int           sub_140199037(char *name, int namelen)
{
  return gethostname(name, namelen);
}

//----- (000000014019903D) ----------------------------------------------------
// attributes: thunk
struct servent *          sub_14019903D(     char *name,      char *proto)
{
  return getservbyname(name, proto);
}

//----- (0000000140199043) ----------------------------------------------------
// attributes: thunk
__int64            sub_140199043(__int64 a1, __int64 a2)
{
  return ((__int64 (           *)(__int64, __int64))WSAStartup)(a1, a2);
}

// 14026E618: invalid function type 'int (__stdcall *WSAStartup)(WORD wVersionRequested, LPWSADATA lpWSAData)' has been ignored

//----- (0000000140199049) ----------------------------------------------------
// attributes: thunk
int           sub_140199049()
{
  return WSACleanup();
}

//----- (00000001401990A0) ----------------------------------------------------
__int64            sub_1401990A0(int a1, int a2, _DWORD *a3)
{
  int v4;
  int i;

  v4 = 0;
LABEL_2:
  if ( v4 >= 1 )
  {
    if ( a3 )
      *a3 = -1;
    return 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 4 )
      {
        ++v4;
        goto LABEL_2;
      }
      if ( a1 == *(_DWORD *)*(&off_14027E0B8 + v4)
        && a2 << i == *((_DWORD *)*(&off_14027E0B8 + v4) + 11) * *((_DWORD *)*(&off_14027E0B8 + v4) + 12) )
      {
        break;
      }
    }
    if ( a3 )
      *a3 = 0;
    return (__int64)*(&off_14027E0B8 + v4);
  }
}

//----- (0000000140199190) ----------------------------------------------------
__int64            sub_140199190(_DWORD *a1, int a2, __m128i *a3)
{
  int v3;
  int i;
  int v6;
  _DWORD *v7;
  _DWORD *v8;

  if ( a2 > 10002 )
  {
    switch ( a2 )
    {
      case 10008:
        if ( (int)a3 < 1 || (int)a3 > 2 )
          return 0xFFFFFFFFLL;
        a1[3] = (_DWORD)a3;
        return 0;
      case 10010:
        if ( (int)a3 < 0 || (int)a3 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
          return 0xFFFFFFFFLL;
        a1[9] = (_DWORD)a3;
        return 0;
      case 10012:
        if ( (int)a3 < 1 || (int)a3 > *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
          return 0xFFFFFFFFLL;
        a1[10] = (_DWORD)a3;
        return 0;
      case 10015:
        if ( !a3 )
          return 0xFFFFFFFFLL;
        SR_VEC_PTR_LANES(128, a3, i64)[0] = *(_QWORD *)a1;
        return 0;
      case 10016:
        a1[13] = (_DWORD)a3;
        return 0;
      case 10022:
        if ( a3 )
          crt_memcpy((__m128i *)(a1 + 31), a3, 0x40u);
        return 0;
      case 10024:
        a1[17] = (_DWORD)a3;
        return 0;
      case 10026:
        *((_QWORD *)a1 + 30) = (uint64)(uintptr_t)(a3);
        return 0;
      case 10028:
        if ( a3 )
          crt_memcpy((__m128i *)(a1 + 47), a3, 8u);
        return 0;
      default:
        return 4294967291LL;
    }
  }
  if ( a2 != 10002 )
  {
    switch ( a2 )
    {
      case 4002:
        if ( (int)a3 <= 500 && (_DWORD)a3 != -1 )
          return 0xFFFFFFFFLL;
        if ( (int)a3 >= 260000 * a1[2] )
          v6 = 260000 * a1[2];
        else
          v6 = (int)a3;
        a1[11] = v6;
        break;
      case 4006:
        a1[12] = (_DWORD)a3;
        return 0;
      case 4010:
        if ( (unsigned int)a3 > 0xA )
          return 0xFFFFFFFFLL;
        a1[7] = (_DWORD)a3;
        break;
      case 4014:
        if ( (unsigned int)a3 > 0x64 )
          return 0xFFFFFFFFLL;
        a1[15] = (_DWORD)a3;
        break;
      case 4020:
        a1[14] = (_DWORD)a3;
        return 0;
      case 4028:
        v7 = &a1[(*(_DWORD *)(*(_QWORD *)a1 + 4LL) + 1024) * a1[2] + 63 + *(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]];
        v8 = &v7[*(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]];
        v3 = sub_1401AE360(*(_QWORD *)a1, a1[2]);
        crt_memset((void *)(uintptr_t)((_WORD *)a1 + 40), 0, v3 - 80LL);
        for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]; ++i )
        {
          v8[i] = -1042284544;
          v7[i] = -1042284544;
        }
        a1[55] = 0;
        a1[22] = 1065353216;
        a1[21] = 2;
        a1[23] = 256;
        a1[25] = 0;
        a1[26] = 0;
        return 0;
      case 4031:
        if ( !a3 )
          return 0xFFFFFFFFLL;
        SR_VEC_PTR_LANES(128, a3, i32)[0] = a1[20];
        break;
      case 4036:
        if ( (int)a3 < 8 || (int)a3 > 24 )
          return 0xFFFFFFFFLL;
        a1[16] = (_DWORD)a3;
        break;
      case 4037:
        SR_VEC_PTR_LANES(128, a3, i32)[0] = a1[16];
        return 0;
      case 4046:
        if ( (unsigned int)a3 >= 2 )
          return 0xFFFFFFFFLL;
        a1[18] = (_DWORD)a3;
        break;
      case 4047:
        if ( !a3 )
          return 0xFFFFFFFFLL;
        SR_VEC_PTR_LANES(128, a3, i32)[0] = a1[18];
        break;
      default:
        return 4294967291LL;
    }
    return 0;
  }
  if ( (unsigned int)a3 <= 2 )
  {
    a1[6] = (int)a3 <= 1;
    a1[4] = (_DWORD)a3 == 0;
    return 0;
  }
  return 0xFFFFFFFFLL;
}

//----- (0000000140199AA0) ----------------------------------------------------
__int64            sub_140199AA0(_DWORD *a1, int a2, int *a3)
{
  int v3;
  int i;
  _DWORD *v6;
  _DWORD *v7;

  if ( a2 <= 10007 )
  {
    if ( a2 != 10007 )
    {
      switch ( a2 )
      {
        case 4027:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[2] / a1[5];
          break;
        case 4028:
          v6 = &a1[24 * a1[3] + 24 + 2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL) + a1[3] * (a1[2] + 2048)];
          v7 = &v6[2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL)];
          v3 = sub_1401B38C0(*(_QWORD *)a1, a1[3]);
          crt_memset((void *)(uintptr_t)((_WORD *)a1 + 22), 0, v3 - 44LL);
          for ( i = 0; i < 2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL); ++i )
          {
            v7[i] = -1042284544;
            v6[i] = -1042284544;
          }
          a1[15] = 1;
          return 0;
        case 4031:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[11];
          break;
        case 4033:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[16];
          break;
        case 4046:
          if ( (unsigned int)a3 >= 2 )
            return 0xFFFFFFFFLL;
          a1[9] = (_DWORD)a3;
          break;
        case 4047:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[9];
          break;
        default:
          return 4294967291LL;
      }
      return 0;
    }
    if ( a3 )
    {
      *a3 = a1[12];
      a1[12] = 0;
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  switch ( a2 )
  {
    case 10008:
      if ( (int)a3 < 1 || (int)a3 > 2 )
        return 0xFFFFFFFFLL;
      a1[4] = (_DWORD)a3;
      return 0;
    case 10010:
      if ( (int)a3 < 0 || (int)a3 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
        return 0xFFFFFFFFLL;
      a1[6] = (_DWORD)a3;
      return 0;
    case 10012:
      if ( (int)a3 < 1 || (int)a3 > *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
        return 0xFFFFFFFFLL;
      a1[7] = (_DWORD)a3;
      return 0;
    case 10015:
      if ( a3 )
      {
        *(_QWORD *)a3 = *(_QWORD *)a1;
        return 0;
      }
      return 0xFFFFFFFFLL;
    case 10016:
      a1[8] = (_DWORD)a3;
      return 0;
  }
  return 4294967291LL;
}

//----- (000000014019A020) ----------------------------------------------------
unsigned int       sub_14019A020(unsigned int a1)
{
  unsigned long result = a1;
  _BitScanReverse(&result, a1);
  return (unsigned int)result; /* native EAX bit index, not an unrelated local */
}

//----- (000000014019A040) ----------------------------------------------------
// MFC 7-14 64bit
__int64            unknown_libname_995(__int64 a1)
{
  return *(unsigned int *)(a1 + 28);
}

//----- (000000014019A060) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
__int64            unknown_libname_996(__int64 a1)
{
  return *(_QWORD *)a1;
}

//----- (000000014019A080) ----------------------------------------------------
// MFC 7-14 64bit
__int64            unknown_libname_997(__int64 a1)
{
  return *(unsigned int *)(a1 + 48);
}

//----- (000000014019A0A0) ----------------------------------------------------
__int64            sub_14019A0A0(__int64 a1)
{
  return *(_DWORD *)(a1 + 24) - ((unsigned int)sub_14019A020(*(_DWORD *)(a1 + 32)) + 1);
}

//----- (000000014019A0E0) ----------------------------------------------------
__int64            sub_14019A0E0(__int64 a1)
{
  int v1;
  int v3;

  v3 = 8 * *(_DWORD *)(a1 + 24);
  v1 = sub_14019A020(*(_DWORD *)(a1 + 32));
  return v3
       - ((unsigned int)(*(_DWORD *)(a1 + 32) >> (v1 - 15) > dword_14027E098[(*(_DWORD *)(a1 + 32) >> (v1 - 15) >> 12)
                                                                           - 8])
        + (*(_DWORD *)(a1 + 32) >> (v1 - 15) >> 12)
        - 8
        + 8 * (v1 + 1));
}

//----- (000000014019A1A0) ----------------------------------------------------
__int64            sub_14019A1A0(unsigned int a1, unsigned int a2)
{
  return a1 / a2;
}

//----- (000000014019A1C0) ----------------------------------------------------
__int64            sub_14019A1C0(int a1, int a2)
{
  return (unsigned int)(a1 / a2);
}

//----- (000000014019A1E0) ----------------------------------------------------
__int64            sub_14019A1E0(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 33;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0x80000000;
  *(_DWORD *)(a1 + 44) = -1;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}

//----- (000000014019A290) ----------------------------------------------------
_DWORD *           sub_14019A290(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v6;

  v6 = sub_14019A1A0(a1[8], a4);
  if ( a2 )
  {
    a1[9] += a1[8] - (a4 - a2) * v6;
    v4 = (a3 - a2) * v6;
  }
  else
  {
    v4 = a1[8] - (a4 - a3) * v6;
  }
  a1[8] = v4;
  return sub_1401B6120(a1);
}

//----- (000000014019A360) ----------------------------------------------------
_DWORD *           sub_14019A360(_DWORD *a1, int a2, int a3, char a4)
{
  int v4;
  int v6;

  v6 = a1[8] >> a4;
  if ( a2 )
  {
    a1[9] += a1[8] - ((1 << a4) - a2) * v6;
    v4 = (a3 - a2) * v6;
  }
  else
  {
    v4 = a1[8] - ((1 << a4) - a3) * v6;
  }
  a1[8] = v4;
  return sub_1401B6120(a1);
}

//----- (000000014019A450) ----------------------------------------------------
_DWORD *           sub_14019A450(_DWORD *a1, int a2, char a3)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;

  v4 = a1[8];
  v6 = v4 >> a3;
  v5 = v4 - (v4 >> a3);
  if ( a2 )
  {
    a1[9] += v5;
    v7 = v6;
  }
  else
  {
    v7 = v5;
  }
  a1[8] = v7;
  return sub_1401B6120(a1);
}

//----- (000000014019A4F0) ----------------------------------------------------
_DWORD *           sub_14019A4F0(_DWORD *a1, int a2, __int64 a3, char a4)
{
  int v4;
  int v6;

  v6 = a1[8] >> a4;
  if ( a2 <= 0 )
  {
    v4 = a1[8] - *(unsigned __int8 *)(a3 + a2) * v6;
  }
  else
  {
    a1[9] += a1[8] - *(unsigned __int8 *)(a3 + a2 - 1) * v6;
    v4 = (*(unsigned __int8 *)(a3 + a2 - 1) - *(unsigned __int8 *)(a3 + a2)) * v6;
  }
  a1[8] = v4;
  return sub_1401B6120(a1);
}

//----- (000000014019A5E0) ----------------------------------------------------
_DWORD *           sub_14019A5E0(_DWORD *a1, unsigned int a2, int a3)
{
  int v4;
  int v5;
  unsigned int v8;

  v8 = a3 - 1;
  v4 = sub_14019A020(a3 - 1) + 1;
  if ( v4 <= 8 )
    return sub_14019A290(a1, a2, a2 + 1, v8 + 1);
  v5 = v4 - 8;
  sub_14019A290(a1, a2 >> v5, (a2 >> v5) + 1, (v8 >> v5) + 1);
  return (_DWORD *)sub_14019A6D0(a1, ((1 << v5) - 1) & a2, v5);
}

//----- (000000014019A6D0) ----------------------------------------------------
__int64            sub_14019A6D0(_DWORD *a1, int a2, int a3)
{
  __int64 result;
  int v4;
  unsigned int v5;

  v5 = a1[4];
  v4 = a1[5];
  if ( (unsigned int)(a3 + v4) > 0x20 )
  {
    do
    {
      a1[12] |= sub_1401B5FB0((__int64)a1, v5);
      v5 >>= 8;
      v4 -= 8;
    }
    while ( v4 >= 8 );
  }
  a1[4] = (a2 << v4) | v5;
  a1[5] = a3 + v4;
  result = (unsigned int)(a3 + a1[6]);
  a1[6] = result;
  return result;
}

//----- (000000014019A7C0) ----------------------------------------------------
unsigned __int8 **           sub_14019A7C0(unsigned __int8 **a1, int a2, char a3)
{
  unsigned __int8 **result;
  char v4;
  int v5;

  v4 = 8 - a3;
  v5 = ((1 << a3) - 1) << (8 - a3);
  if ( *((_DWORD *)a1 + 7) )
  {
    result = (unsigned __int8 **)((a2 << v4) | ~v5 & (unsigned int)**a1);
    **a1 = ((_BYTE)a2 << v4) | ~(_BYTE)v5 & **a1;
  }
  else if ( *((int *)a1 + 11) < 0 )
  {
    if ( *((_DWORD *)a1 + 8) > 0x80000000 >> a3 )
    {
      *((_DWORD *)a1 + 12) = -1;
      return a1;
    }
    else
    {
      result = (unsigned __int8 **)((a2 << (v4 + 23)) | (unsigned int)~(v5 << 23) & *((_DWORD *)a1 + 9));
      *((_DWORD *)a1 + 9) = (_DWORD)result;
    }
  }
  else
  {
    result = (unsigned __int8 **)((a2 << v4) | (unsigned int)~v5 & *((_DWORD *)a1 + 11));
    *((_DWORD *)a1 + 11) = (_DWORD)result;
  }
  return result;
}

//----- (000000014019A8F0) ----------------------------------------------------
__int64            sub_14019A8F0(__int64 a1, unsigned int a2)
{
  crt_memcpy(
    (__m128i *)(a2 + *(_QWORD *)a1 - *(unsigned int *)(a1 + 12)),
    (     __m128i *)(*(unsigned int *)(a1 + 8) + *(_QWORD *)a1 - *(unsigned int *)(a1 + 12)),
    *(unsigned int *)(a1 + 12));
  *(_DWORD *)(a1 + 8) = a2;
  return a1;
}

//----- (000000014019A9C0) ----------------------------------------------------
__int64            sub_14019A9C0(_DWORD *a1)
{
  int v1;
  __int64 result;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int i;

  v1 = sub_14019A020(a1[8]);
  v3 = 32 - (v1 + 1);
  v5 = 0x7FFFFFFFu >> (32 - (v1 + 1));
  v7 = ~v5 & (v5 + a1[9]);
  if ( (v5 | v7) >= a1[8] + a1[9] )
  {
    v3 = 32 - v1;
    v7 = ~(v5 >> 1) & ((v5 >> 1) + a1[9]);
  }
  while ( v3 > 0 )
  {
    sub_1401B6030(a1, v7 >> 23);
    v7 = (v7 << 8) & 0x7FFFFFFF;
    v3 -= 8;
  }
  if ( (int)a1[11] >= 0 || a1[10] )
    sub_1401B6030(a1, 0);
  v6 = a1[4];
  for ( i = a1[5]; i >= 8; i -= 8 )
  {
    a1[12] |= sub_1401B5FB0((__int64)a1, v6);
    v6 >>= 8;
  }
  result = (__int64)a1;
  if ( !a1[12] )
  {
    result = (__int64)crt_memset(
                        (void *)(uintptr_t)((_WORD *)(*(_QWORD *)a1 + (unsigned int)a1[7])),
                        0,
                        (unsigned int)(a1[2] - a1[7] - a1[3]));
    if ( i > 0 )
    {
      if ( a1[3] < a1[2] )
      {
        v4 = -v3;
        if ( (unsigned int)(a1[3] + a1[7]) >= a1[2] && v4 < i )
        {
          v6 &= (1 << v4) - 1;
          a1[12] = -1;
        }
        result = (unsigned __int8)v6
               | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(a1[2] - a1[3] - 1));
        *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(a1[2] - a1[3] - 1)) |= v6;
      }
      else
      {
        a1[12] = -1;
        return (__int64)a1;
      }
    }
  }
  return result;
}

//----- (000000014019AC50) ----------------------------------------------------
_DWORD *           sub_14019AC50(_DWORD *a1, __int64 a2, int a3)
{
  *(_QWORD *)a1 = a2;
  a1[2] = a3;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 9;
  a1[7] = 0;
  a1[8] = 128;
  a1[11] = sub_1401B5DD0((__int64)a1);
  a1[9] = a1[8] - 1 - ((int)a1[11] >> 1);
  a1[12] = 0;
  return sub_1401B5EA0(a1);
}

//----- (000000014019AD20) ----------------------------------------------------
__int64            sub_14019AD20(unsigned int *a1, unsigned int a2)
{
  unsigned int v3;

  a1[10] = sub_14019A1A0(a1[8], a2);
  v3 = a1[9] / a1[10];
  return a2 - (v3 + (a2 < v3 + 1 ? a2 - (v3 + 1) : 0) + 1);
}

//----- (000000014019ADB0) ----------------------------------------------------
__int64            sub_14019ADB0(_DWORD *a1, char a2)
{
  int v3;

  a1[10] = a1[8] >> a2;
  v3 = a1[9] / a1[10];
  return (1 << a2) - (v3 + (1 << a2 < (unsigned int)(v3 + 1) ? (1 << a2) - (v3 + 1) : 0) + 1);
}

//----- (000000014019AE70) ----------------------------------------------------
_DWORD *           sub_14019AE70(_DWORD *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;

  v5 = (a4 - a3) * a1[10];
  a1[9] -= v5;
  if ( a2 )
    v6 = (a3 - a2) * a1[10];
  else
    v6 = a1[8] - v5;
  a1[8] = v6;
  return sub_1401B5EA0(a1);
}

//----- (000000014019AF20) ----------------------------------------------------
_BOOL8            sub_14019AF20(_DWORD *a1, char a2)
{
  unsigned int v3;
  BOOL v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;

  v6 = a1[8];
  v5 = a1[9];
  v3 = v6 >> a2;
  v4 = v5 < v6 >> a2;
  if ( v5 < v6 >> a2 )
  {
    v7 = v6 >> a2;
  }
  else
  {
    a1[9] = v5 - v3;
    v7 = v6 - v3;
  }
  a1[8] = v7;
  sub_1401B5EA0(a1);
  return v4;
}

//----- (000000014019AFE0) ----------------------------------------------------
__int64            sub_14019AFE0(_DWORD *a1, __int64 a2, char a3)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

  v4 = a1[8];
  v6 = a1[9];
  v7 = v4 >> a3;
  v5 = -1;
  do
  {
    v8 = v4;
    v4 = *(unsigned __int8 *)(a2 + (int)++v5) * v7;
  }
  while ( v6 < v4 );
  a1[9] = v6 - v4;
  a1[8] = v8 - v4;
  sub_1401B5EA0(a1);
  return v5;
}

//----- (000000014019B0A0) ----------------------------------------------------
__int64            sub_14019B0A0(unsigned int *a1, int a2)
{
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v9;
  unsigned int v10;

  v9 = a2 - 1;
  v5 = sub_14019A020(a2 - 1) + 1;
  if ( v5 <= 8 )
  {
    v10 = v9 + 1;
    v4 = sub_14019AD20(a1, v10);
    sub_14019AE70(a1, v4, v4 + 1, v10);
    return v4;
  }
  else
  {
    v6 = v5 - 8;
    v3 = sub_14019AD20(a1, (v9 >> v6) + 1);
    sub_14019AE70(a1, v3, v3 + 1, (v9 >> v6) + 1);
    v7 = sub_14019B1C0(a1, v6) | (v3 << v6);
    if ( v7 > v9 )
    {
      a1[12] = 1;
      return v9;
    }
    else
    {
      return v7;
    }
  }
}

//----- (000000014019B1C0) ----------------------------------------------------
__int64            sub_14019B1C0(_DWORD *a1, unsigned int a2)
{
  int v3;
  unsigned int v4;

  v4 = a1[4];
  v3 = a1[5];
  if ( v3 < a2 )
  {
    do
    {
      v4 |= (unsigned int)sub_1401B5E30((__int64)a1) << v3;
      v3 += 8;
    }
    while ( v3 <= 24 );
  }
  a1[4] = v4 >> a2;
  a1[5] = v3 - a2;
  a1[6] += a2;
  return ((1 << a2) - 1) & v4;
}

//----- (000000014019B2A0) ----------------------------------------------------
__int64            sub_14019B2A0(int a1)
{
  __int64 v2;

  v2 = sub_1401990A0(48000, 960, nullptr);
  return sub_1401AE360(v2, a1);
}

//----- (000000014019B2E0) ----------------------------------------------------
int                sub_14019B2E0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int *a6)
{
  unsigned __int64 v6;
  void *v7;
  float v8;
  int v9;
  int v10;
  double v11;
  int v12;
  unsigned __int64 v13;
  void *v14;
  unsigned __int64 v15;
  void *v16;
  unsigned __int64 v17;
  void *v18;
  unsigned __int64 v19;
  void *v20;
  unsigned __int64 v21;
  void *v22;
  int v23;
  int v24;
  unsigned __int64 v25;
  void *v26;
  unsigned __int64 v27;
  void *v28;
  unsigned __int64 v29;
  void *v30;
  unsigned __int64 v31;
  void *v32;
  unsigned __int64 v33;
  void *v34;
  unsigned __int64 v35;
  void *v36;
  float v37;
  int v38;
  unsigned __int64 v39;
  void *v40;
  unsigned __int64 v41;
  void *v42;
  unsigned __int64 v43;
  void *v44;
  unsigned __int64 v45;
  void *v46;
  int v47;
  unsigned __int64 v48;
  void *v49;
  int v50;
  int j;
  int v53;
  int v54;
  int k;
  int i;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  float v66;
  float v67;
  int v68;
  int v69;
  BOOL v70;
  signed int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  float v78;
  float v79;
  BOOL v80;
  __m128i *v81;
  float *v82;
  float v83;
  float v84;
  int v85;
       __m128i *v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  float v94;
  float v95;
  float v96;
  int v97;
  __m128i *v98;
  int n;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int m;
  float v107;
  int v108;
  __int64 v109;
  __m128i *v110;
  int *v111;
  int v112;
  unsigned int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  BOOL v119;
  int v120;
  float v121;
  int v122;
  int *v123;
  int *p_j;
  int *v125;
  __m128i *v126;
  int *v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  float v133;
  float v134;
  BOOL v135;
  signed int v136;
  BOOL v137;
  BOOL v138;
  BOOL v139;
  BOOL v140;
  BOOL v141;
  float v142;
  int v143;
  int v144;
  float v145;
  int v146;
  float v147;
  float v148;
  int v149;
  int v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  int v158;
  float v159;
  BOOL v160;
  BOOL v161;
  int v162;
  int v163;
  BOOL v164;
  int v165;
  BOOL v166;
  int v167;
  int v168;
  int v169;
  int v170;
  BOOL v171;
  BOOL v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  float v178;
  int v179;
  int v180;
  float v181;
  BOOL v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  float v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  BOOL v198;
  BOOL v199;
  float v200;
  __int32 v201;
  int v202;
  __int32 v203;
  int v204;
  BOOL v205;
  int v206;
  int v207;
  BOOL v208;
  BOOL v209;
  int v210;
  BOOL v211;
  BOOL v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int *v218;
  __m128i *v219;
  int v220[4];
  int v221;
  signed int v222;
  unsigned int v223;
  int v224;
  int v225;
  float v226;
  int v227;
  int v228;
  int v229;
  BOOL v230;
  int v231[2];
  int v232;
  float v233;
  BOOL v234;
  int v235;
  int v236;
  int v237;
  float v238;
  int *v239;
  int *v240;
  __int16 *v241;
  int *v242;
  int *v243;
  int *v244;
  int *v245;
  int *v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  int *v251;
  _BYTE v252[56];
  __int64 v253;
  int v256;
  signed int v258;
  /* v258 shares the original +420 output-count slot with v258. */

  v74 = 0;
  v64 = 0;
  v59 = *(_DWORD *)(a1 + 8);
  v53 = *(_DWORD *)(a1 + 12);
  v75 = 15;
  v121 = 0.0;
  v119 = 0;
  v104 = 0;
  v199 = 0;
  v80 = 0;
  v116 = 0;
  v183 = 0;
  v204 = 0;
  v181 = 0.0;
  v79 = 0.0;
  v178 = 0.0;
  v163 = 0;
  v60 = *(_QWORD *)a1;
  v54 = *(_DWORD *)(v60 + 8);
  v76 = *(_DWORD *)(v60 + 4);
  v109 = *(_QWORD *)(v60 + 32);
  v62 = *(_DWORD *)(a1 + 36);
  v57 = *(_DWORD *)(a1 + 40);
  v205 = v62 != 0;
  v70 = v205;
  v84 = 0.0;
  if ( a5 < 2 || !a2 )
    return -1;
  if ( a5 >= 2 && a2 )
  {
    v256 = *(_DWORD *)(a1 + 32) * a3;
    for ( i = 0; i <= *(_DWORD *)(v60 + 40); ++i )
    {
      v247 = v60;
      if ( *(_DWORD *)(v60 + 48) << i == v256 )
        break;
    }
    if ( i > *(_DWORD *)(v60 + 40) )
      return -1;
    if ( i <= *(_DWORD *)(v60 + 40) )
    {
      v225 = 1;
      v97 = 1 << i;
      v69 = *(_DWORD *)(v60 + 48) * (1 << i);
      v249 = a1 + 4LL * v76 * v59 + 252;
      v81 = (__m128i *)(a1 + 4LL * (v76 + 1024) * v59 + 252);
      v98 = (__m128i *)((char *)v81 + 4 * v54 * v59);
      v219 = (__m128i *)((char *)v98 + 4 * v54 * v59);
      v241 = &SR_VEC_PTR_LANES(128, v219, i16)[2 * v54 * v59];
      if ( a6 )
      {
        v117 = sub_14019A0E0((__int64)a6);
        v61 = sub_14019A0A0((__int64)a6);
        v88 = (v61 + 4) >> 3;
      }
      else
      {
        v61 = 1;
        v117 = 1;
        v88 = 0;
      }
      if ( a5 >= 1275 )
        v206 = 1275;
      else
        v206 = a5;
      v258 = v206;
      v58 = v206 - v88;
      if ( !*(_DWORD *)(a1 + 48) || *(_DWORD *)(a1 + 44) == -1 )
      {
        v65 = 0;
        v87 = v256 * *(_DWORD *)(a1 + 44);
        if ( v61 > 1 )
          v87 += v61;
        if ( *(_DWORD *)(a1 + 44) != -1 )
        {
          v208 = *(_DWORD *)(a1 + 52) != 0;
          if ( v206 >= (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v208 )
          {
            v209 = *(_DWORD *)(a1 + 52) != 0;
            v210 = (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v209;
          }
          else
          {
            v210 = v206;
          }
          if ( v210 >= 2 )
          {
            v211 = *(_DWORD *)(a1 + 52) != 0;
            if ( v206 >= (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v211 )
            {
              v212 = *(_DWORD *)(a1 + 52) != 0;
              v213 = (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v212;
            }
            else
            {
              v213 = v206;
            }
            v214 = v213;
          }
          else
          {
            v214 = 2;
          }
          v258 = v214;
        }
        v72 = v258 - v88;
      }
      else
      {
        v207 = *(int *)v60 >> 3;
        v65 = ((v207 >> 1) + v256 * *(_DWORD *)(a1 + 44)) / v207;
        v72 = v65 >> 6;
      }
      v228 = 40 * v53 + 20;
      v73 = ((400 * v258) >> (3 - i)) - ((400 >> i) - 50) * v228;
      if ( *(_DWORD *)(a1 + 44) != -1 )
      {
        if ( v73 >= *(_DWORD *)(a1 + 44) - ((400 >> i) - 50) * (40 * v53 + 20) )
          v215 = *(_DWORD *)(a1 + 44) - ((400 >> i) - 50) * (40 * v53 + 20);
        else
          v215 = v73;
        v73 = v215;
      }
      if ( !a6 )
      {
        sub_14019A1E0((__int64)v252, a4, v258);
        a6 = (unsigned int *)v252;
      }
      if ( v65 > 0 && *(_DWORD *)(a1 + 56) )
      {
        v105 = v65;
        v216 = v61 == 1 ? 2 : 0;
        if ( v216 <= (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6 )
        {
          v128 = (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6;
        }
        else
        {
          v217 = v61 == 1 ? 2 : 0;
          v128 = v217;
        }
        if ( v128 >= v58 )
        {
          v132 = v58;
        }
        else
        {
          v129 = v61 == 1 ? 2 : 0;
          if ( v129 <= (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6 )
          {
            v131 = (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6;
          }
          else
          {
            v130 = v61 == 1 ? 2 : 0;
            v131 = v130;
          }
          v132 = v131;
        }
        v112 = v132;
        if ( v132 < v58 )
        {
          v258 = v112 + v88;
          v58 = v112;
          sub_14019A8F0((__int64)a6, v112 + v88);
        }
      }
      v71 = 8 * v258;
      v68 = v57;
      if ( v57 > *(_DWORD *)(v60 + 12) )
        v68 = *(_DWORD *)(v60 + 12);
      v6 = 4LL * (v76 + v69) * v59 + 15;
      if ( v6 <= 4LL * (v76 + v69) * v59 )
        v6 = 0xFFFFFFFFFFFFFF0LL;
      v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
      v127 = (int *)v7;
      v226 = *(float *)(a1 + 228);
      v8 = sub_1401A6D80(a2, (v69 - v76) * v53 / *(_DWORD *)(a1 + 32));
      if ( v226 <= v8 )
        v133 = sub_1401A6D80(a2, (v69 - v76) * v53 / *(_DWORD *)(a1 + 32));
      else
        v133 = *(float *)(a1 + 228);
      v94 = v133;
      v227 = v76 * v53 / *(_DWORD *)(a1 + 32);
      *(float *)(a1 + 228) = sub_1401A6D80(a2 + 4LL * ((v69 - v76) * v53 / *(_DWORD *)(a1 + 32)), v227);
      if ( v94 <= *(float *)(a1 + 228) )
        v134 = *(float *)(a1 + 228);
      else
        v134 = v94;
      v94 = v134;
      v9 = *(_DWORD *)(a1 + 64);
      v229 = 1;
      v135 = (float)(1.0 / (float)(1 << v9)) >= v134;
      v80 = v135;
      if ( v61 == 1 )
        sub_14019A450(a6, v80, 15);
      else
        v80 = 0;
      if ( v80 )
      {
        if ( v65 > 0 )
        {
          if ( v258 >= v88 + 2 )
            v136 = v88 + 2;
          else
            v136 = v258;
          v258 = v136;
          v72 = v136;
          v71 = 8 * v136;
          v58 = 2;
          sub_14019A8F0((__int64)a6, v136);
        }
        v61 = 8 * v258;
        v10 = sub_14019A0A0((__int64)a6);
        a6[6] += v61 - v10;
      }
      k = 0;
      do
      {
        v138 = 0;
        v137 = *(_DWORD *)(a1 + 20) && v94 > 65536.0;
        v138 = v137;
        v248 = a2 + 4LL * k;
        sub_1401A08E0(
          v248,
          &v127[(v76 + v69) * k + v76],
          v69,
          v59,
          *(_DWORD *)(a1 + 32),
          (float *)(v60 + 16),
          (float *)(a1 + 4LL * k + 196),
          v137);
        ++k;
      }
      while ( k < v59 );
      v139 = (*(_DWORD *)(a1 + 68) && v58 > 3 || v58 > 12 * v53)
          && !v70
          && !v80
          && !*(_DWORD *)(a1 + 24)
          && *(int *)(a1 + 28) >= 5;
      v230 = v139;
      v104 = *(_DWORD *)(a1 + 104);
      v165 = sub_1401B2750((__int64 *)a1, (__int64)v127, v249, v59, v69, v104, &v75, &v121, v231, v139, v58, a1 + 124);
      if ( v121 > 0.40000001 || (LODWORD(v11) = *(_DWORD *)(a1 + 112), *(float *)&v11 > 0.40000001) )
      {
        if ( !*(_DWORD *)(a1 + 124) || (v11 = *(float *)(a1 + 128), v11 > 0.3) )
        {
          v11 = (double)v75;
          if ( (double)v75 > 1.26 * (double)*(int *)(a1 + 108)
            || (v11 = (double)v75, 0.79 * (double)*(int *)(a1 + 108) > (double)v75) )
          {
            v183 = 1;
          }
        }
      }
      if ( v165 )
      {
        sub_14019A450(a6, 1, 1);
        v113 = sub_14019A020(++v75) - 4;
        sub_14019A5E0(a6, v113, 6);
        sub_14019A6D0(a6, v75 - (16 << v113), v113 + 4);
        --v75;
        sub_14019A6D0(a6, v231[0], 3);
        sub_14019A4F0(a6, v104, (__int64)&unk_140279CE8, 2);
      }
      else if ( !v70 && v61 + 16 <= v71 )
      {
        sub_14019A450(a6, 0, 1);
      }
      v64 = 0;
      v74 = 0;
      if ( *(int *)(a1 + 28) >= 1 && !*(_DWORD *)(a1 + 68) )
      {
        v140 = v70 && v72 < 15 && *(_DWORD *)(a1 + 188) != 2;
        v231[1] = v140;
        v64 = sub_1401AE510((__int64)v127, v76 + v69, v59, &v84, &v116, v140, &v163);
      }
      if ( i <= 0 || (v12 = sub_14019A0A0((__int64)a6), v12 + 3 > v71) )
      {
        v64 = 0;
        v204 = 1;
      }
      else if ( v64 )
      {
        v74 = v97;
      }
      v13 = 4LL * v69 * v59 + 15;
      if ( v13 <= 4LL * v69 * v59 )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
      v123 = (int *)v14;
      v15 = 4LL * v59 * v54 + 15;
      if ( v15 <= 4LL * v59 * v54 )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      v82 = (float *)v16;
      v17 = 4LL * v59 * v54 + 15;
      if ( v17 <= 4LL * v59 * v54 )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      v86 = (__m128i *)v18;
      v141 = v74 && *(int *)(a1 + 28) >= 8;
      v160 = v141;
      v19 = 4LL * v54 * v53 + 15;
      if ( v19 <= 4LL * v54 * v53 )
        v19 = 0xFFFFFFFFFFFFFF0LL;
      v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
      v110 = (__m128i *)v20;
      if ( v160 )
      {
        sub_1401AF0F0(v60, 0, (__int64)v127, (__int64)v123, v53, v59, i, *(_DWORD *)(a1 + 32));
        sub_1401A3450(v60, (__int64)v123, (__int64)v82, v68, v53, i);
        sub_1401A6EA0(v60, v68, v57, (__int64)v82, (__int64)v110, v53);
        for ( j = 0; j < v54 * v53; ++j )
        {
          *(float *)&v11 = *(float *)&SR_VEC_PTR_LANES(128, v110, i32)[j] + (float)(0.5 * (float)i);
          SR_VEC_PTR_LANES(128, v110, i32)[j] = LODWORD(v11);
        }
      }
      sub_1401AF0F0(v60, v74, (__int64)v127, (__int64)v123, v53, v59, i, *(_DWORD *)(a1 + 32));
      if ( v59 == 2 && v53 == 1 )
        v116 = 0;
      sub_1401A3450(v60, (__int64)v123, (__int64)v82, v68, v53, i);
      if ( *(_DWORD *)(a1 + 68) )
      {
        for ( j = 2; j < v57; ++j )
        {
          if ( (float)(0.000099999997 * *v82) <= v82[j] )
            v142 = 0.000099999997 * *v82;
          else
            v142 = v82[j];
          v82[j] = v142;
          if ( v82[j] <= 1.0e-15 )
            v143 = 646978941;
          else
            v143 = LODWORD(v82[j]);
          LODWORD(v11) = v143;
          LODWORD(v82[j]) = v143;
        }
      }
      sub_1401A6EA0(v60, v68, v57, (__int64)v82, (__int64)v86, v53);
      v21 = 4LL * v54 * v53 + 15;
      if ( v21 <= 4LL * v54 * v53 )
        v21 = 0xFFFFFFFFFFFFFF0LL;
      v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
      p_j = (int *)v22;
      crt_memset(p_j, 0, 4LL * v57);
      if ( !v70 && *(_QWORD *)(a1 + 240) && !*(_DWORD *)(a1 + 68) )
      {
        v67 = 0.0;
        v66 = 0.0;
        v114 = 0;
        if ( *(int *)(a1 + 96) >= 2 )
          v144 = *(_DWORD *)(a1 + 96);
        else
          v144 = 2;
        v77 = v144;
        for ( k = 0; k < v53; ++k )
        {
          for ( j = 0; j < v77; ++j )
          {
            if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54)) >= 0.25 )
              v145 = 0.25;
            else
              v145 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54));
            if ( v145 <= -2.0 )
            {
              v147 = -2.0;
            }
            else
            {
              if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54)) >= 0.25 )
                *(float *)&v146 = 0.25;
              else
                v146 = *(int *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54));
              v147 = *(float *)&v146;
            }
            v95 = v147;
            if ( v147 > 0.0 )
              v95 = 0.5 * v95;
            v67 = v67 + (float)(v95 * (float)(*(__int16 *)(v109 + 2LL * (j + 1)) - *(__int16 *)(v109 + 2LL * j)));
            v114 += *(__int16 *)(v109 + 2LL * (j + 1)) - *(__int16 *)(v109 + 2LL * j);
            v66 = v66 + (float)(v95 * (float)(2 * j + 1 - v77));
          }
        }
        v67 = v67 / (float)v114;
        v67 = v67 + 0.2;
        v66 = (float)(v66 * 6.0) / (float)(v77 * (v77 + 1) * (v77 - 1) * v53);
        v66 = 0.5 * v66;
        if ( v66 >= 0.030999999 )
          v148 = 0.030999999;
        else
          v148 = v66;
        if ( v148 <= -0.030999999 )
        {
          *(float *)&v150 = -0.030999999;
        }
        else
        {
          if ( v66 >= 0.030999999 )
            v149 = 1023275958;
          else
            v149 = LODWORD(v66);
          v150 = v149;
        }
        v66 = *(float *)&v150;
        for ( m = 0; ; ++m )
        {
          v232 = *(__int16 *)(v109 + 2LL * (m + 1));
          if ( v232 >= *(__int16 *)(v109 + 2LL * v77) / 2 )
            break;
        }
        v115 = 0;
        for ( j = 0; j < v77; ++j )
        {
          v233 = v67 + (float)(v66 * (float)(j - m));
          if ( v53 == 2 )
          {
            if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j) <= *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + v54)) )
              v151 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + v54));
            else
              v151 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j);
            v78 = v151;
          }
          else
          {
            v78 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j);
          }
          if ( v78 >= 0.0 )
            v152 = 0.0;
          else
            v152 = v78;
          v78 = v152 - v233;
          if ( (float)(v152 - v233) > 0.25 )
          {
            *(float *)&p_j[j] = v78 - 0.25;
            ++v115;
          }
        }
        if ( v115 >= 3 )
        {
          v67 = v67 + 0.25;
          if ( v67 <= 0.0 )
          {
            for ( j = 0; j < v77; ++j )
            {
              if ( (float)(*(float *)&p_j[j] - 0.25) >= 0.0 )
                v153 = *(float *)&p_j[j] - 0.25;
              else
                v153 = 0.0;
              *(float *)&p_j[j] = v153;
            }
          }
          else
          {
            v67 = 0.0;
            v66 = 0.0;
            crt_memset((void *)(uintptr_t)(p_j), 0, 4LL * v77);
          }
        }
        v67 = v67 + 0.2;
        v178 = 64.0 * v66;
        *(float *)&v11 = v67;
        v181 = v67;
      }
      if ( !*(_DWORD *)(a1 + 68) )
      {
        v83 = -10.0;
        v96 = 0.0;
        if ( v74 )
          v154 = 0.5 * (float)i;
        else
          v154 = 0.0;
        v107 = v154;
        for ( j = v62; j < v57; ++j )
        {
          if ( (float)(v83 - 1.0) <= (float)(*(float *)&SR_VEC_PTR_LANES(128, v86, i32)[j] - v107) )
            v155 = *(float *)&SR_VEC_PTR_LANES(128, v86, i32)[j] - v107;
          else
            v155 = v83 - 1.0;
          v83 = v155;
          if ( v53 == 2 )
          {
            if ( v83 <= (float)(*(float *)&SR_VEC_PTR_LANES(128, v86, i32)[v54 + j] - v107) )
              v156 = *(float *)&SR_VEC_PTR_LANES(128, v86, i32)[v54 + j] - v107;
            else
              v156 = v83;
            v83 = v156;
          }
          v96 = v96 + v83;
        }
        v96 = v96 / (float)(v57 - v62);
        v79 = v96 - *(float *)(a1 + 248);
        if ( v79 >= -1.5 )
          v157 = v79;
        else
          v157 = -1.5;
        if ( v157 <= 3.0 )
        {
          if ( v79 >= -1.5 )
            *(float *)&v158 = v79;
          else
            *(float *)&v158 = -1.5;
          v159 = *(float *)&v158;
        }
        else
        {
          v159 = 3.0;
        }
        v79 = v159;
        *(float *)&v11 = *(float *)(a1 + 248) + (float)(0.02 * v159);
        *(_DWORD *)(a1 + 248) = LODWORD(v11);
      }
      if ( !v160 )
        crt_memcpy(v110, v86, 4LL * v54 * v53);
      if ( i > 0 )
      {
        v23 = sub_14019A0A0((__int64)a6);
        if ( v23 + 3 <= v71
          && !v64
          && *(int *)(a1 + 28) >= 5
          && !*(_DWORD *)(a1 + 68)
          && !v70
          && (unsigned int)sub_1401AEB90((__int64)v86, (__int64)v81, v54, v62, v57, v53) )
        {
          v64 = 1;
          v74 = v97;
          sub_1401AF0F0(v60, v97, (__int64)v127, (__int64)v123, v53, v59, i, *(_DWORD *)(a1 + 32));
          sub_1401A3450(v60, (__int64)v123, (__int64)v82, v68, v53, i);
          sub_1401A6EA0(v60, v68, v57, (__int64)v82, (__int64)v86, v53);
          for ( j = 0; j < v54 * v53; ++j )
            *(float *)&SR_VEC_PTR_LANES(128, v110, i32)[j] = *(float *)&SR_VEC_PTR_LANES(128, v110, i32)[j] + (float)(0.5 * (float)i);
          LODWORD(v11) = 1045220557;
          v84 = 0.2;
        }
      }
      if ( i > 0 )
      {
        v24 = sub_14019A0A0((__int64)a6);
        if ( v24 + 3 <= v71 )
          sub_14019A450(a6, v64, 3);
      }
      v25 = 4LL * v69 * v53 + 15;
      if ( v25 <= 4LL * v69 * v53 )
        v25 = 0xFFFFFFFFFFFFFF0LL;
      v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
      v125 = (int *)v26;
      sub_1401A35F0(v60, (__int64)v123, (__int64)v125, (__int64)v82, v68, v53, v97);
      v161 = v72 >= 15 * v53 && !v70 && *(int *)(a1 + 28) >= 2 && !*(_DWORD *)(a1 + 68);
      v234 = v161;
      v27 = 4LL * v54 + 15;
      if ( v27 <= 4LL * v54 )
        v27 = 0xFFFFFFFFFFFFFF0LL;
      v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
      v218 = (int *)v28;
      v29 = 4LL * v54 + 15;
      if ( v29 <= 4LL * v54 )
        v29 = 0xFFFFFFFFFFFFFF0LL;
      v30 = alloca(v29 & 0xFFFFFFFFFFFFFFF0uLL);
      v242 = (int *)v30;
      v31 = 4LL * v54 + 15;
      if ( v31 <= 4LL * v54 )
        v31 = 0xFFFFFFFFFFFFFF0LL;
      v32 = alloca(v31 & 0xFFFFFFFFFFFFFFF0uLL);
      v243 = (int *)v32;
      v238 = sub_1401B1250(
        (__int64)v86,
        (__int64)v110,
        v54,
        v62,
        v57,
        v53,
        v218,
        *(_DWORD *)(a1 + 64),
        *(_QWORD *)(v60 + 64),
        v64,
        *(_DWORD *)(a1 + 48),
        *(_DWORD *)(a1 + 56),
        v109,
        i,
        v72,
        v220,
        *(_DWORD *)(a1 + 68),
        (__int64)p_j,
        (_DWORD *)(a1 + 124),
        (__int64)v242,
        (__int64)v243);
      v33 = 4LL * v54 + 15;
      if ( v33 <= 4LL * v54 )
        v33 = 0xFFFFFFFFFFFFFF0LL;
      v34 = alloca(v33 & 0xFFFFFFFFFFFFFFF0uLL);
      v111 = (int *)v34;
      if ( v234 )
      {
        if ( 20480 / v72 + 2 >= 80 )
          v162 = 20480 / v72 + 2;
        else
          v162 = 80;
        v235 = v162;
        v108 = sub_1401AF4F0(v60, v68, v64, (__int64)v111, v162, (__int64)v125, v69, i, v84, v116, (__int64)v242);
        for ( j = v68; j < v57; ++j )
          v111[j] = v111[v68 - 1];
      }
      else if ( v70 && v163 )
      {
        for ( j = 0; j < v57; ++j )
          v111[j] = 1;
        v108 = 0;
      }
      else if ( !v70 || v72 >= 15 || *(_DWORD *)(a1 + 188) == 2 )
      {
        for ( j = 0; j < v57; ++j )
          v111[j] = v64;
        v108 = 0;
      }
      else
      {
        for ( j = 0; j < v57; ++j )
          v111[j] = 0;
        v108 = v64;
      }
      v35 = 4LL * v54 * v53 + 15;
      if ( v35 <= 4LL * v54 * v53 )
        v35 = 0xFFFFFFFFFFFFFF0LL;
      v36 = alloca(v35 & 0xFFFFFFFFFFFFFFF0uLL);
      v126 = (__m128i *)v36;
      k = 0;
      do
      {
        for ( j = v62; j < v57; ++j )
        {
          v37 = SR_VEC_READ_LANES(128, sub_140244390((float)(*(float *)&SR_VEC_PTR_LANES(128, v86, i32)[v54 * k + j]
                                               - *(float *)&SR_VEC_PTR_LANES(128, v81, i32)[v54 * k + j])), f64)[0];
          if ( v37 < 2.0 )
            *(float *)&SR_VEC_PTR_LANES(128, v86, i32)[v54 * k + j] = *(float *)&SR_VEC_PTR_LANES(128, v86, i32)[v54 * k + j]
                                                   - (float)(*(float *)&v241[2 * v54 * k + 2 * j] * 0.25);
        }
        ++k;
      }
      while ( k < v53 );
      v164 = *(_DWORD *)(a1 + 28) >= 4;
      sub_1401A6FC0(
        v60,
        v62,
        v57,
        v68,
        (__int64)v86,
        v81,
        v71,
        v126,
        a6,
        v53,
        i,
        v58,
        *(_DWORD *)(a1 + 16),
        (float *)(a1 + 88),
        v164,
        *(_DWORD *)(a1 + 60),
        *(_DWORD *)(a1 + 68));
      sub_1401B0110(v62, v57, v64, (__int64)v111, i, v108, a6);
      v38 = sub_14019A0A0((__int64)a6);
      if ( v38 + 4 <= v71 )
      {
        if ( *(_DWORD *)(a1 + 68) )
        {
          *(_DWORD *)(a1 + 104) = 0;
          *(_DWORD *)(a1 + 84) = 2;
        }
        else if ( v70 )
        {
          if ( *(_DWORD *)(a1 + 28) )
          {
            if ( v64 )
              *(_DWORD *)(a1 + 84) = 2;
            else
              *(_DWORD *)(a1 + 84) = 3;
          }
          else
          {
            *(_DWORD *)(a1 + 84) = 0;
          }
        }
        else if ( v74 || *(int *)(a1 + 28) < 3 || v58 < 10 * v53 )
        {
          if ( *(_DWORD *)(a1 + 28) )
            *(_DWORD *)(a1 + 84) = 2;
          else
            *(_DWORD *)(a1 + 84) = 0;
        }
        else
        {
          v166 = v165 != 0;
          *(_DWORD *)(a1 + 84) = sub_1401A3A00(
                                   v60,
                                   (__int64)v125,
                                   (int *)(a1 + 92),
                                   *(_DWORD *)(a1 + 84),
                                   (int *)(a1 + 100),
                                   (_DWORD *)(a1 + 104),
                                   v166,
                                   v68,
                                   v53,
                                   v97,
                                   (__int64)v243);
        }
        sub_14019A4F0(a6, *(_DWORD *)(a1 + 84), (__int64)&unk_140279CE4, 5);
      }
      if ( *(_DWORD *)(a1 + 68) )
      {
        if ( v72 / 3 <= 8 )
          v167 = v72 / 3;
        else
          v167 = 8;
        *v218 = v167;
      }
      v39 = 4LL * v54 + 15;
      if ( v39 <= 4LL * v54 )
        v39 = 0xFFFFFFFFFFFFFF0LL;
      v40 = alloca(v39 & 0xFFFFFFFFFFFFFFF0uLL);
      v239 = (int *)v40;
      sub_1401A12E0(v60, (__int64)v239, i, v53);
      v100 = 6;
      v71 *= 8;
      v85 = 0;
      v61 = sub_14019A0E0((__int64)a6);
      for ( j = v62; j < v57; ++j )
      {
        v89 = ((*(__int16 *)(v109 + 2LL * (j + 1)) - *(__int16 *)(v109 + 2LL * j)) * v53) << i;
        if ( v89 >= 48 )
          v168 = v89;
        else
          v168 = 48;
        if ( 8 * v89 >= v168 )
        {
          if ( v89 >= 48 )
            v169 = v89;
          else
            v169 = 48;
          v170 = v169;
        }
        else
        {
          v170 = 8 * v89;
        }
        v173 = v170;
        v122 = v100;
        v101 = 0;
        for ( n = 0; v61 + 8 * v122 < v71 - v85; ++n )
        {
          if ( v101 >= v239[j] )
            break;
          v171 = n < v218[j];
          v172 = v171;
          sub_14019A450(a6, v171, v122);
          v61 = sub_14019A0E0((__int64)a6);
          if ( !v172 )
            break;
          v101 += v173;
          v85 += v173;
          v122 = 1;
        }
        if ( n )
        {
          if ( v100 - 1 >= 2 )
            v174 = v100 - 1;
          else
            v174 = 2;
          v100 = v174;
        }
        v218[j] = v101;
      }
      if ( v53 == 2 )
      {
        if ( i )
          v119 = sub_1401B0C90(v60, (__int64)v125, i, v69);
        *(_DWORD *)(a1 + 236) = sub_1401A5C90(
                                  (float)(v73 / 1000),
                                  (__int64)&unk_14027BBC0,
                                  (__int64)&unk_14027BC20,
                                  21,
                                  *(_DWORD *)(a1 + 236));
        if ( v62 <= *(_DWORD *)(a1 + 236) )
          v175 = *(_DWORD *)(a1 + 236);
        else
          v175 = v62;
        if ( v57 >= v175 )
        {
          if ( v62 <= *(_DWORD *)(a1 + 236) )
            v176 = *(_DWORD *)(a1 + 236);
          else
            v176 = v62;
          v177 = v176;
        }
        else
        {
          v177 = v57;
        }
        *(_DWORD *)(a1 + 236) = v177;
      }
      v103 = 5;
      if ( v61 + 48 <= v71 - v85 )
      {
        if ( v62 > 0 || *(_DWORD *)(a1 + 68) )
        {
          *(_DWORD *)(a1 + 232) = 0;
          v103 = 5;
        }
        else
        {
          v103 = sub_1401B0380(
                   v60,
                   (__int64)v125,
                   (__int64)v86,
                   v57,
                   i,
                   v53,
                   v69,
                   a1 + 124,
                   (float *)(a1 + 232),
                   v84,
                   *(_DWORD *)(a1 + 236),
                   v178,
                   v73);
        }
        sub_14019A4F0(a6, v103, (__int64)&unk_14027BB88, 7);
        v61 = sub_14019A0E0((__int64)a6);
      }
      if ( v65 > 0 )
      {
        v188 = *(_DWORD *)(v60 + 40) - i;
        v236 = 1275;
        if ( v258 >= 1275 >> (3 - i) )
        {
          v237 = 1275;
          v179 = 1275 >> (3 - i);
        }
        else
        {
          v179 = v258;
        }
        v258 = v179;
        if ( v70 )
        {
          if ( v65 - (72 * v53 + 32) >= 0 )
            v180 = v65 - (72 * v53 + 32);
          else
            v180 = 0;
          v92 = v180;
        }
        else
        {
          v92 = v65 - (320 * v53 + 160);
        }
        if ( *(_DWORD *)(a1 + 56) )
        {
          v250 = a1;
          v92 += *(int *)(a1 + 220) >> v188;
        }
        if ( v70 )
        {
          v63 = v92;
          if ( *(int *)(a1 + 192) < 100 )
          {
            v220[1] = 96;
            v63 += 96 >> (3 - i);
          }
          if ( *(int *)(a1 + 192) > 100 )
          {
            v220[2] = 144;
            v63 -= 144 >> (3 - i);
          }
          v63 += (int)(float)((float)(v84 - 0.25) * 400.0);
          if ( v84 > 0.69999999 )
          {
            if ( v63 <= 400 )
              v184 = 400;
            else
              v184 = v63;
            v63 = v184;
          }
        }
        else
        {
          v182 = *(_QWORD *)(a1 + 240) != 0;
          v63 = sub_1401B32A0(
                  v60,
                  a1 + 124,
                  v92,
                  i,
                  v73,
                  *(_DWORD *)(a1 + 96),
                  v53,
                  *(_DWORD *)(a1 + 236),
                  *(_DWORD *)(a1 + 56),
                  *(float *)(a1 + 232),
                  v220[0],
                  v84,
                  v183,
                  v238,
                  *(_DWORD *)(a1 + 68),
                  v182,
                  v181,
                  v79);
        }
        v63 += v61;
        v93 = ((v61 + v85 + 63) >> 6) + 2;
        if ( v70 )
        {
          if ( v93 <= (v117 + v85 + 359) >> 6 )
            v185 = (v117 + v85 + 359) >> 6;
          else
            v185 = v93;
          v93 = v185;
        }
        v58 = (v63 + 32) >> 6;
        if ( v93 <= v58 )
          v186 = v58;
        else
          v186 = v93;
        v58 = v186;
        if ( v258 >= v186 )
          v187 = v58;
        else
          v187 = v258;
        v58 = v187;
        v189 = v63 - v65;
        v63 = v187 << 6;
        if ( v80 )
        {
          v58 = 2;
          v63 = 128;
          v189 = 0;
        }
        if ( *(int *)(a1 + 224) >= 970 )
          v190 = 0.001;
        else
          v190 = 1.0 / (float)(++*(_DWORD *)(a1 + 224) + 20);
        if ( *(_DWORD *)(a1 + 56) )
          *(_DWORD *)(a1 + 212) += v63 - v65;
        if ( *(_DWORD *)(a1 + 56) )
        {
          v220[3] = 1;
          *(_DWORD *)(a1 + 216) += (int)(float)(v190
                                              * (float)((1 << v188) * v189
                                                      - *(_DWORD *)(a1 + 220)
                                                      - *(_DWORD *)(a1 + 216)));
          *(_DWORD *)(a1 + 220) = -*(_DWORD *)(a1 + 216);
        }
        if ( *(_DWORD *)(a1 + 56) && *(int *)(a1 + 212) < 0 )
        {
          v221 = (((-*(_DWORD *)(a1 + 212) >> 31) & 0x3F) - *(_DWORD *)(a1 + 212)) >> 6;
          if ( v80 )
            v191 = 0;
          else
            v191 = v221;
          v58 += v191;
          *(_DWORD *)(a1 + 212) = 0;
        }
        if ( v258 >= v58 )
          v192 = v58;
        else
          v192 = v258;
        v258 = v192;
        sub_14019A8F0((__int64)a6, v192);
      }
      v41 = 4LL * v54 + 15;
      if ( v41 <= 4LL * v54 )
        v41 = 0xFFFFFFFFFFFFFF0LL;
      v42 = alloca(v41 & 0xFFFFFFFFFFFFFFF0uLL);
      v240 = (int *)v42;
      v43 = 4LL * v54 + 15;
      if ( v43 <= 4LL * v54 )
        v43 = 0xFFFFFFFFFFFFFF0LL;
      v44 = alloca(v43 & 0xFFFFFFFFFFFFFFF0uLL);
      v244 = (int *)v44;
      v45 = 4LL * v54 + 15;
      if ( v45 <= 4LL * v54 )
        v45 = 0xFFFFFFFFFFFFFF0LL;
      v46 = alloca(v45 & 0xFFFFFFFFFFFFFFF0uLL);
      v246 = (int *)v46;
      v222 = v258 << 6;
      v47 = sub_14019A0E0((__int64)a6);
      v102 = v222 - v47 - 1;
      if ( v64 && i >= 2 && v102 >= 8 * i + 16 )
        v193 = 8;
      else
        v193 = 0;
      v120 = v193;
      v102 -= v193;
      v118 = v57 - 1;
      if ( *(_DWORD *)(a1 + 124) )
      {
        if ( v73 >= 32000 * v53 )
        {
          if ( v73 >= 48000 * v53 )
          {
            if ( v73 >= 60000 * v53 )
            {
              if ( v73 >= 80000 * v53 )
                v90 = 20;
              else
                v90 = 19;
            }
            else
            {
              v90 = 18;
            }
          }
          else
          {
            v90 = 16;
          }
        }
        else
        {
          v90 = 13;
        }
        if ( *(_DWORD *)(a1 + 156) <= v90 )
          v194 = v90;
        else
          v194 = *(_DWORD *)(a1 + 156);
        v118 = v194;
      }
      if ( *(_DWORD *)(a1 + 68) )
        v118 = 1;
      v91 = sub_1401A29F0(
              v60,
              v62,
              v57,
              (__int64)v218,
              (__int64)v239,
              v103,
              (int *)(a1 + 236),
              &v119,
              v102,
              (int *)&v223,
              (__int64)v244,
              (__int64)v240,
              (__int64)v246,
              v53,
              i,
              a6,
              1,
              *(_DWORD *)(a1 + 96),
              v118);
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( *(_DWORD *)(a1 + 96) - 1 <= v91 )
          v195 = v91;
        else
          v195 = *(_DWORD *)(a1 + 96) - 1;
        if ( *(_DWORD *)(a1 + 96) + 1 >= v195 )
        {
          if ( *(_DWORD *)(a1 + 96) - 1 <= v91 )
            v196 = v91;
          else
            v196 = *(_DWORD *)(a1 + 96) - 1;
          v197 = v196;
        }
        else
        {
          v197 = *(_DWORD *)(a1 + 96) + 1;
        }
        *(_DWORD *)(a1 + 96) = v197;
      }
      else
      {
        *(_DWORD *)(a1 + 96) = v91;
      }
      sub_1401A7710(v60, v62, v57, (__int64)v81, (__int64)v126, (__int64)v240, a6, v53);
      v48 = v54 * v53 + 15LL;
      if ( v48 <= v54 * v53 )
        v48 = 0xFFFFFFFFFFFFFF0LL;
      v49 = alloca(v48 & 0xFFFFFFFFFFFFFFF0uLL);
      v251 = (int *)v49;
      if ( v53 == 2 )
        v245 = &v125[v69];
      else
        v245 = nullptr;
      sub_1401A4050(
        1u,
        v60,
        v62,
        v57,
        (__int64)v125,
        (__int64)v245,
        (__int64)v251,
        (__int64)v82,
        (__int64)v244,
        v74,
        *(_DWORD *)(a1 + 84),
        v119,
        *(_DWORD *)(a1 + 236),
        (__int64)v111,
        (v258 << 6) - v120,
        v223,
        a6,
        i,
        v91,
        (_DWORD *)(a1 + 80),
        *(_DWORD *)(a1 + 28),
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 72));
      if ( v120 > 0 )
      {
        v198 = *(_DWORD *)(a1 + 120) < 2;
        v199 = v198;
        sub_14019A6D0(a6, v198, 1);
      }
      v224 = 8 * v258;
      v50 = sub_14019A0A0((__int64)a6);
      sub_1401A7930(v60, v62, v57, (__int64)v81, (__int64)v126, (__int64)v240, (__int64)v246, v224 - v50, a6, v53);
      crt_memset((void *)(uintptr_t)(v241), 0, 4LL * v59 * v54);
      k = 0;
      do
      {
        for ( j = v62; j < v57; ++j )
        {
          if ( *(float *)&SR_VEC_PTR_LANES(128, v126, i32)[v54 * k + j] <= 0.5 )
            v200 = *(float *)&SR_VEC_PTR_LANES(128, v126, i32)[v54 * k + j];
          else
            v200 = 0.5;
          if ( v200 >= -0.5 )
          {
            if ( *(float *)&SR_VEC_PTR_LANES(128, v126, i32)[v54 * k + j] <= 0.5 )
              v201 = SR_VEC_PTR_LANES(128, v126, i32)[v54 * k + j];
            else
              v201 = 1056964608;
            v202 = v201;
          }
          else
          {
            v202 = -1090519040;
          }
          *(_DWORD *)&v241[2 * v54 * k + 2 * j] = v202;
        }
        ++k;
      }
      while ( k < v53 );
      if ( v80 )
      {
        for ( j = 0; j < v54 * v53; ++j )
          SR_VEC_PTR_LANES(128, v81, i32)[j] = -1042284544;
      }
      *(_DWORD *)(a1 + 108) = v75;
      *(float *)(a1 + 112) = v121;
      *(_DWORD *)(a1 + 116) = v104;
      if ( v59 == 2 && v53 == 1 )
        crt_memcpy((__m128i *)((char *)v81 + 4 * v54), v81, 4LL * v54);
      if ( v64 )
      {
        for ( j = 0; j < v54 * v59; ++j )
        {
          if ( *(float *)&SR_VEC_PTR_LANES(128, v81, i32)[j] <= *(float *)&SR_VEC_PTR_LANES(128, v98, i32)[j] )
            v203 = SR_VEC_PTR_LANES(128, v81, i32)[j];
          else
            v203 = SR_VEC_PTR_LANES(128, v98, i32)[j];
          SR_VEC_PTR_LANES(128, v98, i32)[j] = v203;
        }
      }
      else
      {
        crt_memcpy(v219, v98, 4LL * v54 * v59);
        crt_memcpy(v98, v81, 4LL * v54 * v59);
      }
      k = 0;
      do
      {
        for ( j = 0; j < v62; ++j )
        {
          SR_VEC_PTR_LANES(128, v81, i32)[j + v54 * k] = 0;
          SR_VEC_PTR_LANES(128, v219, i32)[j + v54 * k] = -1042284544;
          SR_VEC_PTR_LANES(128, v98, i32)[j + v54 * k] = -1042284544;
        }
        for ( j = v57; j < v54; ++j )
        {
          SR_VEC_PTR_LANES(128, v81, i32)[j + v54 * k] = 0;
          SR_VEC_PTR_LANES(128, v219, i32)[j + v54 * k] = -1042284544;
          SR_VEC_PTR_LANES(128, v98, i32)[j + v54 * k] = -1042284544;
        }
        ++k;
      }
      while ( k < v59 );
      if ( v64 || v204 )
        ++*(_DWORD *)(a1 + 120);
      else
        *(_DWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 80) = a6[8];
      sub_14019A9C0(a6);
      if ( unknown_libname_997((__int64)a6) )
        return -3;
    }
  }
  return v258; /* original output byte count in EAX */
}

// 14019D9E1: conditional instruction was optimized away because %var_394.4==0

//----- (000000014019F0E0) ----------------------------------------------------
__int64            sub_14019F0E0(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  __int64 v4;
  unsigned int v6;

  v4 = sub_1401990A0(48000, 960, nullptr);
  v6 = sub_1401AE3C0(a1, v4, a3, a4);
  if ( v6 )
    return v6;
  a1[8] = sub_1401A0850(a2);
  return 0;
}

//----- (000000014019F150) ----------------------------------------------------
__int64            sub_14019F150(int a1)
{
  __int64 v2;

  v2 = sub_1401990A0(48000, 960, nullptr);
  return sub_1401B38C0(v2, a1);
}

//----- (000000014019F190) ----------------------------------------------------
__int64            sub_14019F190(_DWORD *a1, int a2, unsigned int a3)
{
  __int64 v3;
  unsigned int v5;

  v3 = sub_1401990A0(48000, 960, nullptr);
  v5 = sub_1401B3920(a1, v3, a3);
  if ( v5 )
    return v5;
  a1[5] = sub_1401A0850(a2);
  if ( a1[5] )
    return 0;
  else
    return 0xFFFFFFFFLL;
}

//----- (000000014019F210) ----------------------------------------------------
__int64            sub_14019F210(__int64 *a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int *a6, int a7)
{
  unsigned __int64 v7;
  void *v8;
  unsigned __int64 v9;
  void *v10;
  unsigned __int64 v11;
  void *v12;
  unsigned __int64 v13;
  void *v14;
  int v15;
  unsigned __int64 v16;
  void *v17;
  unsigned __int64 v18;
  void *v19;
       __m128i *v20;
  unsigned __int64 v21;
  void *v22;
  unsigned __int64 v23;
  void *v24;
  int v25;
  int v26;
  int j;
  int k;
  int v30;
  int i;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  void *Src;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  BOOL v42;
  int v43;
  int v44;
  int v45;
  void *v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  float v53;
  int v54;
  int v55;
  float v56;
  void *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  float v72;
  int v73;
  BOOL v74;
  int v75;
  int v76;
  int v77;
  int *v78;
  int v79;
  BOOL v80;
  int v81;
  int v82;
  int v83;
  int v84;
  unsigned int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int *v91;
  int *v92;
  int *v93;
  char *v94;
  __int64 v95[2];
  __int64 v96;
  int *v97;
  int *p_j;
  int *v99;
  int *v100;
  int *v101;
  void *v102[2];
  char *v103;
  __int64 v104;
  __int64 v105;
  __m128i *v106;
  _DWORD v107[14];
  __int64 v108;
  int v112;

  v40 = *((_DWORD *)a1 + 3);
  v65 = 0;
  v66 = 0;
  v69 = 0;
  v33 = *((_DWORD *)a1 + 4);
  v35 = *a1;
  v30 = *(_DWORD *)(v35 + 8);
  v45 = *(_DWORD *)(v35 + 4);
  v96 = *(_QWORD *)(v35 + 32);
  v37 = *((_DWORD *)a1 + 6);
  v39 = *((_DWORD *)a1 + 7);
  v112 = *((_DWORD *)a1 + 5) * a5;
  v103 = (char *)a1 + 4 * v40 * (v45 + 2048) + 96;
  Src = &v103[96 * v40];
  v46 = (char *)Src + 8 * v30;
  v57 = (char *)v46 + 8 * v30;
  v94 = (char *)v57 + 8 * v30;
  for ( i = 0; i <= *(_DWORD *)(v35 + 40); ++i )
  {
    v104 = v35;
    if ( *(_DWORD *)(v35 + 48) << i == v112 )
      break;
  }
  if ( i > *(_DWORD *)(v35 + 40) )
    return (unsigned int)-1; /* 0x14019F3AB: mov eax, 0xffffffff */
  {
    v87 = 1;
    v55 = 1 << i;
    if ( (unsigned int)a3 >= 0x4FC || !a4 )
      return (unsigned int)-1; /* 0x14019F3F3: mov eax, 0xffffffff */
    {
      {
        v38 = *(_DWORD *)(v35 + 48) * v55;
        k = 0;
        do
        {
          v102[k] = (char *)a1 + 4 * (v45 + 2048) * k + 96;
          v95[k] = (__int64)v102[k] - 4 * v38 + 0x2000;
          ++k;
        }
        while ( k < v40 );
        v51 = v39;
        if ( v39 > *(_DWORD *)(v35 + 12) )
          v51 = *(_DWORD *)(v35 + 12);
        if ( a2 && a3 > 1 )
        {
          v74 = *((_DWORD *)a1 + 14) != 0;
          *((_DWORD *)a1 + 15) = v74;
          if ( !a6 )
          {
            sub_14019AC50(v107, a2, a3);
            a6 = v107;
          }
          if ( v33 == 1 )
          {
            for ( j = 0; j < v30; ++j )
            {
              if ( *((float *)Src + j) <= *((float *)Src + j + v30) )
                v75 = *((_DWORD *)Src + j + v30);
              else
                v75 = *((_DWORD *)Src + j);
              *((_DWORD *)Src + j) = v75;
            }
          }
          v34 = 8 * a3;
          v32 = sub_14019A0A0((__int64)a6);
          if ( v32 < 8 * a3 )
            v44 = v32 == 1 && sub_14019AF20(a6, 15);
          else
            v44 = 1;
          if ( v44 )
          {
            v32 = 8 * a3;
            a6[6] += 8 * a3 - sub_14019A0A0((__int64)a6);
          }
          v53 = 0.0;
          v52 = 0;
          v54 = 0;
          if ( !v37 && v32 + 16 <= v34 )
          {
            if ( sub_14019AF20(a6, 1) )
            {
              v76 = sub_14019B0A0(a6, 6);
              v88 = 16;
              v89 = 16 << v76;
              v52 = (16 << v76) + sub_14019B1C0(a6, v76 + 4) - 1;
              v90 = sub_14019B1C0(a6, 3u);
              if ( (int)(sub_14019A0A0((__int64)a6) + 2) <= v34 )
                v54 = sub_14019AFE0(a6, (__int64)&unk_140279CE8, 2);
              v53 = 0.09375 * (float)(v90 + 1);
            }
            v32 = sub_14019A0A0((__int64)a6);
          }
          if ( i <= 0 || v32 + 3 > v34 )
          {
            v42 = 0;
          }
          else
          {
            v42 = sub_14019AF20(a6, 3);
            v32 = sub_14019A0A0((__int64)a6);
          }
          if ( v42 )
            v68 = v55;
          else
            v68 = 0;
          v77 = v32 + 3 <= v34 && sub_14019AF20(a6, 3);
          v79 = v77;
          sub_1401A7B50(v35, v37, v39, (__int64)Src, v77, a6, v33, i);
          v7 = 4LL * v30 + 15;
          if ( v7 <= 4LL * v30 )
            v7 = 0xFFFFFFFFFFFFFF0LL;
          v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
          p_j = v8;
          sub_1401B4530(v37, v39, v42, (__int64)&j, i, a6);
          v32 = sub_14019A0A0((__int64)a6);
          v67 = 2;
          if ( v32 + 4 <= v34 )
            v67 = sub_14019AFE0(a6, (__int64)&unk_140279CE4, 5);
          v9 = 4LL * v30 + 15;
          if ( v9 <= 4LL * v30 )
            v9 = 0xFFFFFFFFFFFFFF0LL;
          v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
          v91 = v10;
          sub_1401A12E0(v35, (__int64)&j, i, v33);
          v11 = 4LL * v30 + 15;
          if ( v11 <= 4LL * v30 )
            v11 = 0xFFFFFFFFFFFFFF0LL;
          v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
          v97 = v12;
          v47 = 6;
          v34 *= 8;
          v32 = sub_14019A0E0((__int64)a6);
          for ( j = v37; j < v39; ++j )
          {
            v41 = ((*(__int16 *)(v96 + 2LL * (j + 1)) - *(__int16 *)(v96 + 2LL * j)) * v33) << i;
            if ( v41 >= 48 )
              v58 = v41;
            else
              v58 = 48;
            if ( 8 * v41 >= v58 )
            {
              if ( v41 >= 48 )
                v59 = v41;
              else
                v59 = 48;
              v60 = v59;
            }
            else
            {
              v60 = 8 * v41;
            }
            v61 = v60;
            v49 = v47;
            v43 = 0;
            while ( v32 + 8 * v49 < v34 )
            {
              if ( v43 >= v91[j] )
                break;
              v80 = sub_14019AF20(a6, v49);
              v32 = sub_14019A0E0((__int64)a6);
              if ( !v80 )
                break;
              v43 += v61;
              v34 -= v61;
              v49 = 1;
            }
            v97[j] = v43;
            if ( v43 > 0 )
            {
              if ( v47 - 1 >= 2 )
                v62 = v47 - 1;
              else
                v62 = 2;
              v47 = v62;
            }
          }
          v13 = 4LL * v30 + 15;
          if ( v13 <= 4LL * v30 )
            v13 = 0xFFFFFFFFFFFFFF0LL;
          v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
          v92 = v14;
          if ( v32 + 48 > v34 )
            v63 = 5;
          else
            v63 = sub_14019AFE0(a6, (__int64)&unk_14027BB88, 7);
          v82 = v63;
          v81 = a3 << 6;
          v15 = sub_14019A0E0((__int64)a6);
          v48 = v81 - v15 - 1;
          if ( v42 && i >= 2 && v48 >= 8 * i + 16 )
            v64 = 8;
          else
            v64 = 0;
          v50 = v64;
          v48 -= v64;
          v16 = 4LL * v30 + 15;
          if ( v16 <= 4LL * v30 )
            v16 = 0xFFFFFFFFFFFFFF0LL;
          v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
          v93 = v17;
          v18 = 4LL * v30 + 15;
          if ( v18 <= 4LL * v30 )
            v18 = 0xFFFFFFFFFFFFFF0LL;
          v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
          v100 = v19;
          v84 = sub_1401A29F0(
                  v35,
                  v37,
                  v39,
                  (__int64)v97,
                  (__int64)v91,
                  v82,
                  &v65,
                  &v66,
                  v48,
                  (int *)&v85,
                  (__int64)v93,
                  (__int64)v92,
                  (__int64)&j,
                  v33,
                  i,
                  a6,
                  0,
                  0,
                  0);
          sub_1401A7EC0(v35, v37, v39, (__int64)Src, (__int64)v92, a6, v33);
          k = 0;
          do
          {
            v83 = 2048 - v38;
            v20 = (     __m128i *)((char *)v102[k] + 4 * v38);
            v105 = k;
            crt_memcpy((__m128i *)v102[k++], v20, 4LL * (v45 / 2 + 2048 - v38));
          }
          while ( k < v40 );
          v21 = v30 * v33 + 15LL;
          if ( v21 <= v30 * v33 )
            v21 = 0xFFFFFFFFFFFFFF0LL;
          v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
          v101 = v22;
          v23 = 4LL * v38 * v33 + 15;
          if ( v23 <= 4LL * v38 * v33 )
            v23 = 0xFFFFFFFFFFFFFF0LL;
          v24 = alloca(v23 & 0xFFFFFFFFFFFFFFF0uLL);
          v78 = v24;
          if ( v33 == 2 )
            v99 = &v78[v38];
          else
            v99 = nullptr;
          sub_1401A4050(
            0,
            v35,
            v37,
            v39,
            (__int64)v78,
            (__int64)v99,
            (__int64)v101,
            0,
            (__int64)v93,
            v68,
            v67,
            v66,
            v65,
            (__int64)p_j,
            (a3 << 6) - v50,
            v85,
            a6,
            i,
            v84,
            (_DWORD *)a1 + 11,
            0,
            *((_DWORD *)a1 + 10),
            *((_DWORD *)a1 + 9));
          if ( v50 > 0 )
            v69 = sub_14019B1C0(a6, 1u);
          v86 = 8 * a3;
          v25 = sub_14019A0A0((__int64)a6);
          sub_1401A8000(v35, v37, v39, (__int64)Src, (__int64)v92, (__int64)v100, v86 - v25, a6, v33);
          if ( v69 )
            sub_1401A5710(
              v35,
              (__int64)v78,
              (__int64)v101,
              i,
              v33,
              v38,
              v37,
              v39,
              (__int64)Src,
              (__int64)v46,
              (__int64)v57,
              (__int64)v93,
              *((_DWORD *)a1 + 11));
          if ( v44 )
          {
            for ( j = 0; j < v30 * v33; ++j )
              *((_DWORD *)Src + j) = -1042284544;
          }
          sub_1401B3E40(v35, (__int64)v78, v95, (__int64)Src, v37, v51, v33, v40, v42, i, *((_DWORD *)a1 + 5), v44);
          k = 0;
          do
          {
            if ( *((int *)a1 + 16) <= 15 )
              v70 = 15;
            else
              v70 = *((_DWORD *)a1 + 16);
            *((_DWORD *)a1 + 16) = v70;
            if ( *((int *)a1 + 17) <= 15 )
              v71 = 15;
            else
              v71 = *((_DWORD *)a1 + 17);
            *((_DWORD *)a1 + 17) = v71;
            sub_1401A0C20(
              (__m128i *)v95[k],
              (     __m128i *)v95[k],
              *((_DWORD *)a1 + 17),
              *((_DWORD *)a1 + 16),
              *(_DWORD *)(v35 + 48),
              *((float *)a1 + 19),
              *((float *)a1 + 18),
              *((_DWORD *)a1 + 21),
              *((_DWORD *)a1 + 20),
              *(_QWORD *)(v35 + 72),
              v45);
            if ( i )
            {
              v26 = *(_DWORD *)(v35 + 48);
              v106 = (__m128i *)(v95[k] + 4LL * v26);
              sub_1401A0C20(
                v106,
                v106,
                *((_DWORD *)a1 + 16),
                v52,
                v38 - v26,
                *((float *)a1 + 18),
                v53,
                *((_DWORD *)a1 + 20),
                v54,
                *(_QWORD *)(v35 + 72),
                v45);
            }
            ++k;
          }
          while ( k < v40 );
          *((_DWORD *)a1 + 17) = *((_DWORD *)a1 + 16);
          *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 18);
          *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          *((_DWORD *)a1 + 16) = v52;
          *((float *)a1 + 18) = v53;
          *((_DWORD *)a1 + 20) = v54;
          if ( i )
          {
            *((_DWORD *)a1 + 17) = *((_DWORD *)a1 + 16);
            *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 18);
            *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          }
          if ( v33 == 1 )
            crt_memcpy((__m128i *)((char *)Src + 4 * v30), (     __m128i *)Src, 4LL * v30);
          if ( v42 )
          {
            for ( j = 0; j < 2 * v30; ++j )
            {
              if ( *((float *)Src + j) <= *((float *)v46 + j) )
                v73 = *((_DWORD *)Src + j);
              else
                v73 = *((_DWORD *)v46 + j);
              *((_DWORD *)v46 + j) = v73;
            }
          }
          else
          {
            crt_memcpy((__m128i *)v57, (     __m128i *)v46, 8LL * v30);
            crt_memcpy((__m128i *)v46, (     __m128i *)Src, 8LL * v30);
            if ( *((int *)a1 + 14) >= 10 )
              v56 = 1.0;
            else
              v56 = (float)v55 * 0.001;
            for ( j = 0; j < 2 * v30; ++j )
            {
              if ( *((float *)Src + j) <= (float)(*(float *)&v94[4 * j] + v56) )
                v72 = *((float *)Src + j);
              else
                v72 = *(float *)&v94[4 * j] + v56;
              *(float *)&v94[4 * j] = v72;
            }
          }
          for ( k = 0; k < 2; ++k )
          {
            for ( j = 0; j < v37; ++j )
            {
              *((_DWORD *)Src + j + v30 * k) = 0;
              *((_DWORD *)v57 + j + v30 * k) = -1042284544;
              *((_DWORD *)v46 + j + v30 * k) = -1042284544;
            }
            for ( j = v39; j < v30; ++j )
            {
              *((_DWORD *)Src + j + v30 * k) = 0;
              *((_DWORD *)v57 + j + v30 * k) = -1042284544;
              *((_DWORD *)v46 + j + v30 * k) = -1042284544;
            }
          }
          *((_DWORD *)a1 + 11) = a6[8];
          sub_1401B3BD0(v95, a4, v38, v40, *((_DWORD *)a1 + 5), (float *)(v35 + 16), (float *)a1 + 22, a7);
          *((_DWORD *)a1 + 14) = 0;
          if ( (int)sub_14019A0A0((__int64)a6) > 8 * a3 )
            return (unsigned int)-3; /* 0x1401A07ED: mov eax, 0xfffffffd */
          if ( (unsigned int)unknown_libname_997((__int64)a6) )
            *((_DWORD *)a1 + 12) = 1;
        }
        else
        {
          sub_1401B4830((__int64)a1, v38, i);
          sub_1401B3BD0(v95, a4, v38, v40, *((_DWORD *)a1 + 5), (float *)(v35 + 16), (float *)a1 + 22, a7);
        }
      }
    }
  }
  return (unsigned int)(a5 / (int)*((_DWORD *)a1 + 5)); /* 0x1401A0820: idiv dword ptr [rcx + 0x14] with eax = [rbp + 0x220] */
}
