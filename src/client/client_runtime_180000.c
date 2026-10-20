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
  bool comparison_result;

  comparison_result = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !comparison_result )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (0000000140198090) ----------------------------------------------------
_BYTE *           sub_140198090(_BYTE *Block, char a2)
{
  bool comparison_result;

  comparison_result = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279A78);
  if ( !comparison_result )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (00000001401980E0) ----------------------------------------------------
_BYTE *           sub_1401980E0(_BYTE *Block, char a2)
{
  bool comparison_result;

  comparison_result = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279B18);
  if ( !comparison_result )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (0000000140198130) ----------------------------------------------------
_BYTE *           sub_140198130(_BYTE *Block, char a2)
{
  bool comparison_result;

  comparison_result = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279B18);
  if ( !comparison_result )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (0000000140198180) ----------------------------------------------------
_BYTE *           sub_140198180(_BYTE *Block, char a2)
{
  bool comparison_result;

  comparison_result = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279A78);
  if ( !comparison_result )
    SteamAPI_UnregisterCallback(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

//----- (00000001401981D0) ----------------------------------------------------
_BYTE *           sub_1401981D0(_BYTE *Block, char a2)
{
  bool comparison_result;

  comparison_result = (Block[8] & 1) == 0;
  *(_QWORD *)Block = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !comparison_result )
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
  *(_QWORD *)(g_144CBDB38 + 8LL) = result;
  return result;
}

//----- (00000001401982B0) ----------------------------------------------------
__int64            sub_1401982B0(__int64 a1, _QWORD *a2)
{
  __int64 result;

  result = g_144CBDB38;
  **(_QWORD **)&g_144CBDB38 = *a2;
  return result;
}

//----- (00000001401982C0) ----------------------------------------------------
__int64            sub_1401982C0(__int64 a1, __int64 *a2)
{
  __int64 loaded_word;
  _QWORD *steaminternal_contextinit_result;

  loaded_word = *a2;
  *(_QWORD *)(g_144CBDB38 + 16LL) = *a2;
  steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
  return (*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*steaminternal_contextinit_result + 24LL))(*steaminternal_contextinit_result, loaded_word);
}

//----- (0000000140198300) ----------------------------------------------------
void            sub_140198300(__int64 a1, _DWORD *a2)
{
  _QWORD *steaminternal_contextinit_result;

  if ( a2 && *a2 == 1 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
    (*(void (           **)(_QWORD, unsigned int *, __int64, unsigned int *))(*(_QWORD *)*steaminternal_contextinit_result + 168LL))(
      *steaminternal_contextinit_result,
      &g_144CBDB40,
      1024,
      &g_144CBDF40);
    if ( g_144CBDF48 )
      (*(void (           **)(unsigned int *, _QWORD))(unsigned int *)&g_144CBDF48)(
        &g_144CBDB40,
        g_144CBDF40);
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
  _QWORD *steaminternal_contextinit_result;

  if ( g_144CBDB30 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    (*(void (           **)(_QWORD, __int64))(*(_QWORD *)*steaminternal_contextinit_result + 224LL))(*steaminternal_contextinit_result, a1);
  }
}

//----- (00000001401987E0) ----------------------------------------------------
void            sub_1401987E0(unsigned int a1)
{
  _QWORD *steaminternal_contextinit_result;

  if ( g_144CBDB30 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E40);
    (*(void (           **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*steaminternal_contextinit_result + 104LL))(*steaminternal_contextinit_result, 2, a1);
  }
}

//----- (0000000140198820) ----------------------------------------------------
void            sub_140198820(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *steaminternal_contextinit_result;
  __int64 *int64_result;
  __int64 loaded_word;
  _QWORD *steaminternal_contextinit_result_2;
  char *int64_result_2;
  __int64 integer_difference;
  char input_byte;
  _BYTE scratch_buffer[24];

  if ( g_144CBDB30 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    int64_result = (__int64 *)(*(__int64 (           **)(_QWORD, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)*steaminternal_contextinit_result + 32LL))(
                      *steaminternal_contextinit_result,
                      scratch_buffer,
                      a3,
                      a4);
    loaded_word = *int64_result;
    *a1 = *int64_result;
    steaminternal_contextinit_result_2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    int64_result_2 = (char *)(*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*steaminternal_contextinit_result_2 + 56LL))(*steaminternal_contextinit_result_2, loaded_word);
    integer_difference = a2 - (_QWORD)int64_result_2;
    do
    {
      input_byte = *int64_result_2;
      int64_result_2[integer_difference] = *int64_result_2;
      ++int64_result_2;
    }
    while ( input_byte );
  }
}

//----- (00000001401988C0) ----------------------------------------------------
__int64            sub_1401988C0(unsigned int a1)
{
  _QWORD *steaminternal_contextinit_result;

  if ( !g_144CBDB30 )
    return 0;
  steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (           **)(_QWORD, _QWORD))(*(_QWORD *)*steaminternal_contextinit_result + 24LL))(*steaminternal_contextinit_result, a1);
}

//----- (0000000140198900) ----------------------------------------------------
void            sub_140198900(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _QWORD *steaminternal_contextinit_result;
  __int64 int64_result;
  _QWORD *steaminternal_contextinit_result_2;
  char *int64_result_2;
  __int64 integer_difference;
  char input_byte;
  _BYTE scratch_buffer[24];

  if ( g_144CBDB30 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    int64_result = *(_QWORD *)(*(__int64 (           **)(_QWORD, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)*steaminternal_contextinit_result + 32LL))(
                      *steaminternal_contextinit_result,
                      scratch_buffer,
                      a2,
                      a3);
    steaminternal_contextinit_result_2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    int64_result_2 = (char *)(*(__int64 (           **)(_QWORD, __int64, __int64))(*(_QWORD *)*steaminternal_contextinit_result_2 + 360LL))(*steaminternal_contextinit_result_2, int64_result, a4);
    integer_difference = a1 - (_QWORD)int64_result_2;
    do
    {
      input_byte = *int64_result_2;
      int64_result_2[integer_difference] = *int64_result_2;
      ++int64_result_2;
    }
    while ( input_byte );
  }
}

//----- (00000001401989A0) ----------------------------------------------------
__int64            sub_1401989A0(unsigned int a1, unsigned int a2)
{
  _QWORD *steaminternal_contextinit_result;
  __int64 int64_result;
  _QWORD *steaminternal_contextinit_result_2;
  char callee_output_word;

  if ( !g_144CBDB30 )
    return 0;
  steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  int64_result = *(_QWORD *)(*(__int64 (           **)(_QWORD, char *, _QWORD, _QWORD))(*(_QWORD *)*steaminternal_contextinit_result + 32LL))(*steaminternal_contextinit_result, &callee_output_word, a1, a2);
  steaminternal_contextinit_result_2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*steaminternal_contextinit_result_2 + 48LL))(*steaminternal_contextinit_result_2, int64_result);
}

//----- (0000000140198A10) ----------------------------------------------------
__int64            sub_140198A10(__int64 a1)
{
  _QWORD *steaminternal_contextinit_result;

  if ( !g_144CBDB30 )
    return 0;
  steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (           **)(_QWORD, __int64))(*(_QWORD *)*steaminternal_contextinit_result + 48LL))(*steaminternal_contextinit_result, a1);
}

//----- (0000000140198A50) ----------------------------------------------------
__int64            sub_140198A50(_QWORD *a1)
{
  _QWORD *steaminternal_contextinit_result;
  __int64 int64_result;
  _QWORD *steaminternal_contextinit_result_2;
  char callee_output_word;

  if ( !g_144CBDB30 )
    return 0;
  steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E58);
  int64_result = *(_QWORD *)(*(__int64 (           **)(_QWORD, char *))(*(_QWORD *)*steaminternal_contextinit_result + 160LL))(*steaminternal_contextinit_result, &callee_output_word);
  steaminternal_contextinit_result_2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
  if ( *(_QWORD *)(*(__int64 (           **)(_QWORD, char *))(*(_QWORD *)*steaminternal_contextinit_result_2 + 16LL))(*steaminternal_contextinit_result_2, &callee_output_word) == int64_result )
  {
    *a1 = int64_result;
    return 1;
  }
  else
  {
    g_144CBDB30 = 0;
    g_144CBDB34 = 1;
    return 0;
  }
}

//----- (0000000140198AF0) ----------------------------------------------------
__int64            sub_140198AF0(__int64 a1)
{
  _QWORD *steaminternal_contextinit_result;
  char *int64_result;
  __int64 integer_difference;
  char input_byte;

  if ( !g_144CBDB30 )
    return 0;
  steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  int64_result = (char *)(**(__int64 (           ***)(_QWORD))*steaminternal_contextinit_result)(*steaminternal_contextinit_result);
  integer_difference = a1 - (_QWORD)int64_result;
  do
  {
    input_byte = *int64_result;
    int64_result[integer_difference] = *int64_result;
    ++int64_result;
  }
  while ( input_byte );
  return 1;
}

//----- (0000000140198B50) ----------------------------------------------------
__int64            sub_140198B50(__int64 a1)
{
  _QWORD *steaminternal_contextinit_result;
  __int64 unused_local;
  _BYTE scratch_buffer[24];
  __int64 unused_local_2;

  if ( g_144CBDB30 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    (*(void (           **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)*steaminternal_contextinit_result + 48LL))(*steaminternal_contextinit_result, a1, scratch_buffer);
    *(_DWORD *)(g_144CBDB38 + 28LL) = scratch_buffer[0];
    *(_DWORD *)(g_144CBDB38 + 32LL) = scratch_buffer[1];
    *(_DWORD *)(g_144CBDB38 + 36LL) = scratch_buffer[2];
  }
  return 0; /* the function has no caller */
}

//----- (0000000140198BD0) ----------------------------------------------------
__int64            sub_140198BD0(__int64 a1)
{
  g_144CBDB38 = a1;
  if ( (unsigned __int8)SteamAPI_Init() )
  {
    g_144CBDB30 = 1;
    return 1;
  }
  else
  {
    g_144CBDB34 = 1;
    return 0;
  }
}

//----- (0000000140198C10) ----------------------------------------------------
void            sub_140198C10(__int64 a1)
{
  _QWORD *steaminternal_contextinit_result;

  if ( g_144CBDB30 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    (*(void (           **)(_QWORD, __int64,      char *))(*(_QWORD *)*steaminternal_contextinit_result + 392LL))(*steaminternal_contextinit_result, a1, "join it");
  }
}

//----- (0000000140198C60) ----------------------------------------------------
__int64            sub_140198C60(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int unused_written_slot;
  _QWORD *steaminternal_contextinit_result;
  _QWORD *steaminternal_contextinit_result_2;
  unsigned __int8 int64_result;
  __int64 option_flags;

  HIWORD(option_flags) = BYTE6(option_flags) & 0xF;
  unused_written_slot = 0;
  option_flags &= 0xFFF0000000000000uLL;
  if ( !g_144CBDB30 )
    return 0;
  steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
  if ( (*(unsigned __int8 (           **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*steaminternal_contextinit_result + 8LL))(*steaminternal_contextinit_result, a3, 0) )
  {
    steaminternal_contextinit_result_2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64, __int64 *, _DWORD))(*(_QWORD *)*steaminternal_contextinit_result_2 + 16LL))(
            *steaminternal_contextinit_result_2,
            a2,
            a4,
            a3,
            &option_flags,
            0);
    unused_written_slot = int64_result;
    if ( int64_result )
      *a1 = option_flags;
  }
  return unused_written_slot;
}

//----- (0000000140198D20) ----------------------------------------------------
void            sub_140198D20(__int64 a1)
{
  _QWORD *steaminternal_contextinit_result;
  __int64 int64_result;

  if ( g_144CBDB30 )
  {
    g_144CBDF48 = a1;
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
    int64_result = (*(__int64 (           **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*steaminternal_contextinit_result + 160LL))(*steaminternal_contextinit_result, 0, 0);
    if ( qword_140301EA0 )
      SteamAPI_UnregisterCallResult(&off_140301E90);
    qword_140301EA0 = int64_result;
    qword_140301EB0 = (__int64)sub_140198300;
    qword_140301EA8 = (__int64)&off_140301E90;
    if ( int64_result )
      SteamAPI_RegisterCallResult(&off_140301E90, int64_result);
  }
}

//----- (0000000140198DC0) ----------------------------------------------------
void            sub_140198DC0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *steaminternal_contextinit_result;

  if ( g_144CBDB30 )
  {
    steaminternal_contextinit_result = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    (**(void (           ***)(_QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))*steaminternal_contextinit_result)(*steaminternal_contextinit_result, a1, a2, a3, 0, 0);
  }
}

//----- (0000000140198E20) ----------------------------------------------------
__int64 sub_140198E20()
{
  __int64 result;

  result = SteamAPI_Shutdown();
  g_144CBDB30 = 0;
  return result;
}

//----- (0000000140198E40) ----------------------------------------------------
__int64 sub_140198E40()
{
  __int64 result;

  if ( g_144CBDB30 )
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
 void *window;memcpy(&window,&g_160FC47C8,8);
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
  __asm__("movabs $spawn_console_mouse_state, %rax\n\tjmp *%rax");
}

//----- (0000000140198F0B) ----------------------------------------------------
// attributes: thunk
__int64            sub_140198F0B(__int64 a1, __int64 a2, __int64 a3)
{
  extern int spawn_console_relative_mode(int);
  return spawn_console_relative_mode((int)a1);
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
  int iteration_count;
  int i;

  iteration_count = 0;
LABEL_2:
  if ( iteration_count >= 1 )
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
        ++iteration_count;
        goto LABEL_2;
      }
      if ( a1 == *(_DWORD *)*(&off_14027E0B8 + iteration_count)
        && a2 << i == *((_DWORD *)*(&off_14027E0B8 + iteration_count) + 11) * *((_DWORD *)*(&off_14027E0B8 + iteration_count) + 12) )
      {
        break;
      }
    }
    if ( a3 )
      *a3 = 0;
    return (__int64)*(&off_14027E0B8 + iteration_count);
  }
}

//----- (0000000140199190) ----------------------------------------------------
__int64            sub_140199190(_DWORD *a1, int a2, __m128i *a3)
{
  int loaded_word;
  int i;
  int record_word_offset;
  _DWORD *state_address;
  _DWORD *state_address_2;

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
          record_word_offset = 260000 * a1[2];
        else
          record_word_offset = (int)a3;
        a1[11] = record_word_offset;
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
        state_address = &a1[(*(_DWORD *)(*(_QWORD *)a1 + 4LL) + 1024) * a1[2] + 63 + *(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]];
        state_address_2 = &state_address[*(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]];
        loaded_word = sub_1401AE360(*(_QWORD *)a1, a1[2]);
        crt_memset((void *)(uintptr_t)((_WORD *)a1 + 40), 0, loaded_word - 80LL);
        for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]; ++i )
        {
          state_address_2[i] = -1042284544;
          state_address[i] = -1042284544;
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
  int loaded_word;
  int i;
  _DWORD *state_address;
  _DWORD *state_address_2;

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
          state_address = &a1[24 * a1[3] + 24 + 2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL) + a1[3] * (a1[2] + 2048)];
          state_address_2 = &state_address[2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL)];
          loaded_word = sub_1401B38C0(*(_QWORD *)a1, a1[3]);
          crt_memset((void *)(uintptr_t)((_WORD *)a1 + 22), 0, loaded_word - 44LL);
          for ( i = 0; i < 2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL); ++i )
          {
            state_address_2[i] = -1042284544;
            state_address[i] = -1042284544;
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
  int loaded_word;
  int loaded_word_2;

  loaded_word_2 = 8 * *(_DWORD *)(a1 + 24);
  loaded_word = sub_14019A020(*(_DWORD *)(a1 + 32));
  return loaded_word_2
       - ((unsigned int)(*(_DWORD *)(a1 + 32) >> (loaded_word - 15) > dword_14027E098[(*(_DWORD *)(a1 + 32) >> (loaded_word - 15) >> 12)
                                                                           - 8])
        + (*(_DWORD *)(a1 + 32) >> (loaded_word - 15) >> 12)
        - 8
        + 8 * (loaded_word + 1));
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
  int scaled_index;
  int call_result;

  call_result = sub_14019A1A0(a1[8], a4);
  if ( a2 )
  {
    a1[9] += a1[8] - (a4 - a2) * call_result;
    scaled_index = (a3 - a2) * call_result;
  }
  else
  {
    scaled_index = a1[8] - (a4 - a3) * call_result;
  }
  a1[8] = scaled_index;
  return sub_1401B6120(a1);
}

//----- (000000014019A360) ----------------------------------------------------
_DWORD *           sub_14019A360(_DWORD *a1, int a2, int a3, char a4)
{
  int shifted_bits;
  int shifted_bits_2;

  shifted_bits_2 = a1[8] >> a4;
  if ( a2 )
  {
    a1[9] += a1[8] - ((1 << a4) - a2) * shifted_bits_2;
    shifted_bits = (a3 - a2) * shifted_bits_2;
  }
  else
  {
    shifted_bits = a1[8] - ((1 << a4) - a3) * shifted_bits_2;
  }
  a1[8] = shifted_bits;
  return sub_1401B6120(a1);
}

//----- (000000014019A450) ----------------------------------------------------
_DWORD *           sub_14019A450(_DWORD *a1, int a2, char a3)
{
  unsigned int table_value;
  unsigned int shifted_bits;
  unsigned int shifted_bits_2;
  unsigned int saved_shifted_bits;

  table_value = a1[8];
  shifted_bits_2 = table_value >> a3;
  shifted_bits = table_value - (table_value >> a3);
  if ( a2 )
  {
    a1[9] += shifted_bits;
    saved_shifted_bits = shifted_bits_2;
  }
  else
  {
    saved_shifted_bits = shifted_bits;
  }
  a1[8] = saved_shifted_bits;
  return sub_1401B6120(a1);
}

//----- (000000014019A4F0) ----------------------------------------------------
_DWORD *           sub_14019A4F0(_DWORD *a1, int a2, __int64 a3, char a4)
{
  int loaded_word;
  int shifted_bits;

  shifted_bits = a1[8] >> a4;
  if ( a2 <= 0 )
  {
    loaded_word = a1[8] - *(unsigned __int8 *)(a3 + a2) * shifted_bits;
  }
  else
  {
    a1[9] += a1[8] - *(unsigned __int8 *)(a3 + a2 - 1) * shifted_bits;
    loaded_word = (*(unsigned __int8 *)(a3 + a2 - 1) - *(unsigned __int8 *)(a3 + a2)) * shifted_bits;
  }
  a1[8] = loaded_word;
  return sub_1401B6120(a1);
}

//----- (000000014019A5E0) ----------------------------------------------------
_DWORD *           sub_14019A5E0(_DWORD *a1, unsigned int a2, int a3)
{
  int call_result;
  int integer_difference;
  unsigned int integer_difference_2;

  integer_difference_2 = a3 - 1;
  call_result = sub_14019A020(a3 - 1) + 1;
  if ( call_result <= 8 )
    return sub_14019A290(a1, a2, a2 + 1, integer_difference_2 + 1);
  integer_difference = call_result - 8;
  sub_14019A290(a1, a2 >> integer_difference, (a2 >> integer_difference) + 1, (integer_difference_2 >> integer_difference) + 1);
  return (_DWORD *)sub_14019A6D0(a1, ((1 << integer_difference) - 1) & a2, integer_difference);
}

//----- (000000014019A6D0) ----------------------------------------------------
__int64            sub_14019A6D0(_DWORD *a1, int a2, int a3)
{
  __int64 result;
  int remaining_amount;
  unsigned int remaining_bits;

  remaining_bits = a1[4];
  remaining_amount = a1[5];
  if ( (unsigned int)(a3 + remaining_amount) > 0x20 )
  {
    do
    {
      a1[12] |= sub_1401B5FB0((__int64)a1, remaining_bits);
      remaining_bits >>= 8;
      remaining_amount -= 8;
    }
    while ( remaining_amount >= 8 );
  }
  a1[4] = (a2 << remaining_amount) | remaining_bits;
  a1[5] = a3 + remaining_amount;
  result = (unsigned int)(a3 + a1[6]);
  a1[6] = result;
  return result;
}

//----- (000000014019A7C0) ----------------------------------------------------
unsigned __int8 **           sub_14019A7C0(unsigned __int8 **a1, int a2, char a3)
{
  unsigned __int8 **result;
  char integer_difference;
  int shifted_bits;

  integer_difference = 8 - a3;
  shifted_bits = ((1 << a3) - 1) << (8 - a3);
  if ( *((_DWORD *)a1 + 7) )
  {
    result = (unsigned __int8 **)((a2 << integer_difference) | ~shifted_bits & (unsigned int)**a1);
    **a1 = ((_BYTE)a2 << integer_difference) | ~(_BYTE)shifted_bits & **a1;
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
      result = (unsigned __int8 **)((a2 << (integer_difference + 23)) | (unsigned int)~(shifted_bits << 23) & *((_DWORD *)a1 + 9));
      *((_DWORD *)a1 + 9) = (_DWORD)result;
    }
  }
  else
  {
    result = (unsigned __int8 **)((a2 << integer_difference) | (unsigned int)~shifted_bits & *((_DWORD *)a1 + 11));
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
  int call_result;
  __int64 result;
  int remaining_amount;
  int integer_difference;
  unsigned int shifted_bits;
  unsigned int remaining_bits;
  unsigned int state_address;
  int i;

  call_result = sub_14019A020(a1[8]);
  remaining_amount = 32 - (call_result + 1);
  shifted_bits = 0x7FFFFFFFu >> (32 - (call_result + 1));
  state_address = ~shifted_bits & (shifted_bits + a1[9]);
  if ( (shifted_bits | state_address) >= a1[8] + a1[9] )
  {
    remaining_amount = 32 - call_result;
    state_address = ~(shifted_bits >> 1) & ((shifted_bits >> 1) + a1[9]);
  }
  while ( remaining_amount > 0 )
  {
    sub_1401B6030(a1, state_address >> 23);
    state_address = (state_address << 8) & 0x7FFFFFFF;
    remaining_amount -= 8;
  }
  if ( (int)a1[11] >= 0 || a1[10] )
    sub_1401B6030(a1, 0);
  remaining_bits = a1[4];
  for ( i = a1[5]; i >= 8; i -= 8 )
  {
    a1[12] |= sub_1401B5FB0((__int64)a1, remaining_bits);
    remaining_bits >>= 8;
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
        integer_difference = -remaining_amount;
        if ( (unsigned int)(a1[3] + a1[7]) >= a1[2] && integer_difference < i )
        {
          remaining_bits &= (1 << integer_difference) - 1;
          a1[12] = -1;
        }
        result = (unsigned __int8)remaining_bits
               | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(a1[2] - a1[3] - 1));
        *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(a1[2] - a1[3] - 1)) |= remaining_bits;
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
  unsigned int integer_quotient;

  a1[10] = sub_14019A1A0(a1[8], a2);
  integer_quotient = a1[9] / a1[10];
  return a2 - (integer_quotient + (a2 < integer_quotient + 1 ? a2 - (integer_quotient + 1) : 0) + 1);
}

//----- (000000014019ADB0) ----------------------------------------------------
__int64            sub_14019ADB0(_DWORD *a1, char a2)
{
  int integer_quotient;

  a1[10] = a1[8] >> a2;
  integer_quotient = a1[9] / a1[10];
  return (1 << a2) - (integer_quotient + (1 << a2 < (unsigned int)(integer_quotient + 1) ? (1 << a2) - (integer_quotient + 1) : 0) + 1);
}

//----- (000000014019AE70) ----------------------------------------------------
_DWORD *           sub_14019AE70(_DWORD *a1, int a2, int a3, int a4)
{
  int scaled_index;
  int scaled_index_2;

  scaled_index = (a4 - a3) * a1[10];
  a1[9] -= scaled_index;
  if ( a2 )
    scaled_index_2 = (a3 - a2) * a1[10];
  else
    scaled_index_2 = a1[8] - scaled_index;
  a1[8] = scaled_index_2;
  return sub_1401B5EA0(a1);
}

//----- (000000014019AF20) ----------------------------------------------------
_BOOL8            sub_14019AF20(_DWORD *a1, char a2)
{
  unsigned int shifted_bits;
  BOOL unused_written_slot;
  unsigned int table_value;
  unsigned int table_value_2;
  unsigned int shifted_bits_2;

  table_value_2 = a1[8];
  table_value = a1[9];
  shifted_bits = table_value_2 >> a2;
  unused_written_slot = table_value < table_value_2 >> a2;
  if ( table_value < table_value_2 >> a2 )
  {
    shifted_bits_2 = table_value_2 >> a2;
  }
  else
  {
    a1[9] = table_value - shifted_bits;
    shifted_bits_2 = table_value_2 - shifted_bits;
  }
  a1[8] = shifted_bits_2;
  sub_1401B5EA0(a1);
  return unused_written_slot;
}

//----- (000000014019AFE0) ----------------------------------------------------
__int64            sub_14019AFE0(_DWORD *a1, __int64 a2, char a3)
{
  unsigned int loaded_word;
  unsigned int iteration_count;
  unsigned int table_value;
  unsigned int shifted_bits;
  unsigned int saved_loaded_word;

  loaded_word = a1[8];
  table_value = a1[9];
  shifted_bits = loaded_word >> a3;
  iteration_count = -1;
  do
  {
    saved_loaded_word = loaded_word;
    loaded_word = *(unsigned __int8 *)(a2 + (int)++iteration_count) * shifted_bits;
  }
  while ( table_value < loaded_word );
  a1[9] = table_value - loaded_word;
  a1[8] = saved_loaded_word - loaded_word;
  sub_1401B5EA0(a1);
  return iteration_count;
}

//----- (000000014019B0A0) ----------------------------------------------------
__int64            sub_14019B0A0(unsigned int *a1, int a2)
{
  int shifted_bits;
  unsigned int call_result;
  int call_result_2;
  unsigned int integer_difference;
  unsigned int shifted_bits_2;
  unsigned int integer_difference_2;
  unsigned int integer_sum;

  integer_difference_2 = a2 - 1;
  call_result_2 = sub_14019A020(a2 - 1) + 1;
  if ( call_result_2 <= 8 )
  {
    integer_sum = integer_difference_2 + 1;
    call_result = sub_14019AD20(a1, integer_sum);
    sub_14019AE70(a1, call_result, call_result + 1, integer_sum);
    return call_result;
  }
  else
  {
    integer_difference = call_result_2 - 8;
    shifted_bits = sub_14019AD20(a1, (integer_difference_2 >> integer_difference) + 1);
    sub_14019AE70(a1, shifted_bits, shifted_bits + 1, (integer_difference_2 >> integer_difference) + 1);
    shifted_bits_2 = sub_14019B1C0(a1, integer_difference) | (shifted_bits << integer_difference);
    if ( shifted_bits_2 > integer_difference_2 )
    {
      a1[12] = 1;
      return integer_difference_2;
    }
    else
    {
      return shifted_bits_2;
    }
  }
}

//----- (000000014019B1C0) ----------------------------------------------------
__int64            sub_14019B1C0(_DWORD *a1, unsigned int a2)
{
  int record_byte_offset;
  unsigned int option_flags;

  option_flags = a1[4];
  record_byte_offset = a1[5];
  if ( record_byte_offset < a2 )
  {
    do
    {
      option_flags |= (unsigned int)sub_1401B5E30((__int64)a1) << record_byte_offset;
      record_byte_offset += 8;
    }
    while ( record_byte_offset <= 24 );
  }
  a1[4] = option_flags >> a2;
  a1[5] = record_byte_offset - a2;
  a1[6] += a2;
  return ((1 << a2) - 1) & option_flags;
}

//----- (000000014019B2A0) ----------------------------------------------------
__int64            sub_14019B2A0(int a1)
{
  __int64 call_result;

  call_result = sub_1401990A0(48000, 960, nullptr);
  return sub_1401AE360(call_result, a1);
}

//----- (000000014019B2E0) ----------------------------------------------------
int                sub_14019B2E0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int *a6)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  float combined_products;
  int loaded_word;
  int call_result;
  double saved_remaining_count;
  int call_result_2;
  unsigned __int64 scaled_index_2;
  void *alloca_result_2;
  unsigned __int64 float_word;
  void *alloca_result_3;
  unsigned __int64 scaled_index_3;
  void *alloca_result_4;
  unsigned __int64 scaled_index_4;
  void *alloca_result_5;
  unsigned __int64 scaled_index_5;
  void *alloca_result_6;
  int call_result_3;
  int float_word_2;
  unsigned __int64 scaled_index_6;
  void *alloca_result_7;
  unsigned __int64 scaled_index_7;
  void *alloca_result_8;
  unsigned __int64 scaled_index_8;
  void *alloca_result_9;
  unsigned __int64 scaled_index_9;
  void *alloca_result_10;
  unsigned __int64 scaled_index_10;
  void *alloca_result_11;
  unsigned __int64 scaled_index_11;
  void *alloca_result_12;
  float combined_products_2;
  int call_result_4;
  unsigned __int64 scaled_index_12;
  void *alloca_result_13;
  unsigned __int64 scaled_index_13;
  void *alloca_result_14;
  unsigned __int64 scaled_index_14;
  void *alloca_result_15;
  unsigned __int64 scaled_index_15;
  void *alloca_result_16;
  int call_result_5;
  unsigned __int64 scaled_index_16;
  void *alloca_result_17;
  int call_result_6;
  int j;
  int loaded_word_2;
  int loaded_word_3;
  int k;
  int i;
  int loaded_word_4;
  int shifted_bits;
  int loaded_word_5;
  __int64 loaded_word_6;
  int call_result_7;
  int loaded_word_7;
  int shifted_bits_2;
  int call_result_8;
  int shifted_bits_3;
  float combined_products_3;
  float scaled_ratio;
  int loaded_word_8;
  int shifted_bits_4;
  BOOL saved_comparison_result;
  signed int scaled_index_17;
  int shifted_bits_5;
  int shifted_bits_6;
  int saved_shifted_bits;
  int remaining_count;
  int loaded_word_9;
  int saved_loaded_word;
  float weighted_sum;
  float combined_products_4;
  BOOL saved_comparison_result_2;
  __m128i *source_buffer;
  float *saved_alloca_result;
  float saved_product_difference;
  float selected_scalar;
  int running_total;
       __m128i *source_buffer_2;
  int running_total_2;
  int shifted_bits_7;
  int shifted_bits_8;
  int selection_code;
  int masked_bits;
  int running_total_3;
  int shifted_bits_9;
  float saved_weighted_sum;
  float saved_component_delta;
  float scaled_ratio_2;
  int shifted_bits_10;
  __m128i *source_buffer_3;
  int n;
  int cached_integer_difference;
  int running_total_4;
  int remaining_amount;
  int loaded_word_10;
  int loaded_word_11;
  int saved_shifted_bits_2;
  int m;
  float saved_scaled_value;
  int call_result_9;
  __int64 loaded_word_12;
  __m128i *destination_buffer;
  int *saved_alloca_result_2;
  int cached_shifted_bits;
  unsigned int call_result_10;
  int running_total_5;
  int iteration_count;
  int selection_flag;
  int call_result_11;
  int saved_loaded_word_2;
  BOOL call_result_12;
  int cached_selection_code;
  float selected_scalar_2;
  int cached_integer_difference_2;
  int *saved_alloca_result_3;
  int *p_j;
  int *saved_alloca_result_4;
  __m128i *saved_alloca_result_5;
  int *saved_alloca_result_6;
  int shifted_bits_11;
  int comparison_result;
  int comparison_result_2;
  int shifted_bits_12;
  int saved_shifted_bits_3;
  float weighted_sum_2;
  float weighted_sum_3;
  BOOL comparison_result_3;
  signed int integer_sum;
  BOOL comparison_result_4;
  BOOL unused_written_slot;
  BOOL comparison_result_5;
  BOOL comparison_result_6;
  BOOL comparison_result_7;
  float scaled_value;
  int table_value;
  int loaded_word_13;
  float weighted_sum_4;
  int float_word_3;
  float component_delta;
  float saved_combined_products;
  int selected_word;
  int float_word_4;
  float weighted_sum_5;
  float saved_weighted_sum_2;
  float product_difference;
  float scaled_value_2;
  float product_difference_2;
  float combined_products_5;
  float component_delta_2;
  int float_word_5;
  float scaled_value_3;
  BOOL saved_comparison_result_3;
  BOOL comparison_result_8;
  int integer_quotient;
  int selection_flag_2;
  BOOL comparison_result_9;
  int call_result_13;
  BOOL comparison_result_10;
  int integer_quotient_2;
  int saved_shifted_bits_4;
  int saved_shifted_bits_5;
  int scaled_index_18;
  BOOL comparison_result_11;
  BOOL saved_comparison_result_4;
  int cached_scaled_index;
  int integer_difference;
  int loaded_word_14;
  int loaded_word_15;
  int saved_loaded_word_3;
  float scaled_value_4;
  int shifted_bits_13;
  int scaled_index_19;
  float saved_scaled_ratio;
  BOOL comparison_result_12;
  int selection_flag_3;
  int saved_shifted_bits_6;
  int shifted_bits_14;
  int saved_shifted_bits_7;
  int saved_shifted_bits_8;
  int loaded_word_16;
  int integer_difference_2;
  float weighted_sum_6;
  int saved_shifted_bits_9;
  int saved_shifted_bits_10;
  int selection_code_2;
  int loaded_word_17;
  int saved_masked_bits;
  int saved_masked_bits_2;
  int loaded_word_18;
  BOOL comparison_result_13;
  BOOL unused_written_slot_2;
  float weighted_sum_7;
  __int32 scaled_index_20;
  int integer_difference_3;
  __int32 table_value_2;
  int selection_flag_4;
  BOOL comparison_result_14;
  int input_value;
  int shifted_bits_15;
  BOOL comparison_result_15;
  BOOL comparison_result_16;
  int loaded_word_19;
  BOOL comparison_result_17;
  BOOL comparison_result_18;
  int loaded_word_20;
  int saved_loaded_word_4;
  int shifted_bits_16;
  int comparison_result_19;
  int comparison_result_20;
  int *saved_alloca_result_7;
  __m128i *destination_buffer_2;
  int scratch_buffer[4];
  int shifted_bits_17;
  signed int shifted_bits_18;
  unsigned int callee_output_word;
  int scaled_index_21;
  int unused_written_slot_3;
  float weighted_sum_8;
  int loaded_word_21;
  int scaled_index_22;
  int unused_written_slot_4;
  BOOL unused_written_slot_5;
  int scratch_buffer_2[2];
  int loaded_word_22;
  float combined_products_6;
  BOOL saved_comparison_result_5;
  int unused_written_slot_6;
  int unused_written_slot_7;
  int unused_written_slot_8;
  float weighted_sum_9;
  int *saved_alloca_result_8;
  int *saved_alloca_result_9;
  __int16 *state_address;
  int *saved_alloca_result_10;
  int *saved_alloca_result_11;
  int *saved_alloca_result_12;
  int *state_address_2;
  int *saved_alloca_result_13;
  __int64 unused_written_slot_9;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  __int64 unused_written_slot_10;
  int *saved_alloca_result_14;
  _BYTE scratch_buffer_3[56];
  __int64 unused_local;
  int loaded_word_23;
  signed int saved_shifted_bits_11;
  /* v258 shares the original +420 output-count slot with v258. */

  saved_shifted_bits = 0;
  call_result_8 = 0;
  loaded_word_5 = *(_DWORD *)(a1 + 8);
  loaded_word_2 = *(_DWORD *)(a1 + 12);
  remaining_count = 15;
  selected_scalar_2 = 0.0;
  call_result_12 = 0;
  loaded_word_11 = 0;
  unused_written_slot_2 = 0;
  saved_comparison_result_2 = 0;
  selection_flag = 0;
  selection_flag_3 = 0;
  selection_flag_4 = 0;
  saved_scaled_ratio = 0.0;
  combined_products_4 = 0.0;
  scaled_value_4 = 0.0;
  selection_flag_2 = 0;
  loaded_word_6 = *(_QWORD *)a1;
  loaded_word_3 = *(_DWORD *)(loaded_word_6 + 8);
  loaded_word_9 = *(_DWORD *)(loaded_word_6 + 4);
  loaded_word_12 = *(_QWORD *)(loaded_word_6 + 32);
  loaded_word_7 = *(_DWORD *)(a1 + 36);
  loaded_word_4 = *(_DWORD *)(a1 + 40);
  comparison_result_14 = loaded_word_7 != 0;
  saved_comparison_result = comparison_result_14;
  selected_scalar = 0.0;
  if ( a5 < 2 || !a2 )
    return -1;
  if ( a5 >= 2 && a2 )
  {
    loaded_word_23 = *(_DWORD *)(a1 + 32) * a3;
    for ( i = 0; i <= *(_DWORD *)(loaded_word_6 + 40); ++i )
    {
      unused_written_slot_9 = loaded_word_6;
      if ( *(_DWORD *)(loaded_word_6 + 48) << i == loaded_word_23 )
        break;
    }
    if ( i > *(_DWORD *)(loaded_word_6 + 40) )
      return -1;
    if ( i <= *(_DWORD *)(loaded_word_6 + 40) )
    {
      unused_written_slot_3 = 1;
      shifted_bits_10 = 1 << i;
      shifted_bits_4 = *(_DWORD *)(loaded_word_6 + 48) * (1 << i);
      scaled_index_24 = a1 + 4LL * loaded_word_9 * loaded_word_5 + 252;
      source_buffer = (__m128i *)(a1 + 4LL * (loaded_word_9 + 1024) * loaded_word_5 + 252);
      source_buffer_3 = (__m128i *)((char *)source_buffer + 4 * loaded_word_3 * loaded_word_5);
      destination_buffer_2 = (__m128i *)((char *)source_buffer_3 + 4 * loaded_word_3 * loaded_word_5);
      state_address = &SR_VEC_PTR_LANES(128, destination_buffer_2, i16)[2 * loaded_word_3 * loaded_word_5];
      if ( a6 )
      {
        call_result_11 = sub_14019A0E0((__int64)a6);
        call_result_7 = sub_14019A0A0((__int64)a6);
        shifted_bits_7 = (call_result_7 + 4) >> 3;
      }
      else
      {
        call_result_7 = 1;
        call_result_11 = 1;
        shifted_bits_7 = 0;
      }
      if ( a5 >= 1275 )
        input_value = 1275;
      else
        input_value = a5;
      saved_shifted_bits_11 = input_value;
      shifted_bits = input_value - shifted_bits_7;
      if ( !*(_DWORD *)(a1 + 48) || *(_DWORD *)(a1 + 44) == -1 )
      {
        shifted_bits_3 = 0;
        running_total_2 = loaded_word_23 * *(_DWORD *)(a1 + 44);
        if ( call_result_7 > 1 )
          running_total_2 += call_result_7;
        if ( *(_DWORD *)(a1 + 44) != -1 )
        {
          comparison_result_15 = *(_DWORD *)(a1 + 52) != 0;
          if ( input_value >= (running_total_2 + 4 * *(_DWORD *)loaded_word_6) / (8 * *(_DWORD *)loaded_word_6) - comparison_result_15 )
          {
            comparison_result_16 = *(_DWORD *)(a1 + 52) != 0;
            loaded_word_19 = (running_total_2 + 4 * *(_DWORD *)loaded_word_6) / (8 * *(_DWORD *)loaded_word_6) - comparison_result_16;
          }
          else
          {
            loaded_word_19 = input_value;
          }
          if ( loaded_word_19 >= 2 )
          {
            comparison_result_17 = *(_DWORD *)(a1 + 52) != 0;
            if ( input_value >= (running_total_2 + 4 * *(_DWORD *)loaded_word_6) / (8 * *(_DWORD *)loaded_word_6) - comparison_result_17 )
            {
              comparison_result_18 = *(_DWORD *)(a1 + 52) != 0;
              loaded_word_20 = (running_total_2 + 4 * *(_DWORD *)loaded_word_6) / (8 * *(_DWORD *)loaded_word_6) - comparison_result_18;
            }
            else
            {
              loaded_word_20 = input_value;
            }
            saved_loaded_word_4 = loaded_word_20;
          }
          else
          {
            saved_loaded_word_4 = 2;
          }
          saved_shifted_bits_11 = saved_loaded_word_4;
        }
        shifted_bits_5 = saved_shifted_bits_11 - shifted_bits_7;
      }
      else
      {
        shifted_bits_15 = *(int *)loaded_word_6 >> 3;
        shifted_bits_3 = ((shifted_bits_15 >> 1) + loaded_word_23 * *(_DWORD *)(a1 + 44)) / shifted_bits_15;
        shifted_bits_5 = shifted_bits_3 >> 6;
      }
      scaled_index_22 = 40 * loaded_word_2 + 20;
      shifted_bits_6 = ((400 * saved_shifted_bits_11) >> (3 - i)) - ((400 >> i) - 50) * scaled_index_22;
      if ( *(_DWORD *)(a1 + 44) != -1 )
      {
        if ( shifted_bits_6 >= *(_DWORD *)(a1 + 44) - ((400 >> i) - 50) * (40 * loaded_word_2 + 20) )
          shifted_bits_16 = *(_DWORD *)(a1 + 44) - ((400 >> i) - 50) * (40 * loaded_word_2 + 20);
        else
          shifted_bits_16 = shifted_bits_6;
        shifted_bits_6 = shifted_bits_16;
      }
      if ( !a6 )
      {
        sub_14019A1E0((__int64)scratch_buffer_3, a4, saved_shifted_bits_11);
        a6 = (unsigned int *)scratch_buffer_3;
      }
      if ( shifted_bits_3 > 0 && *(_DWORD *)(a1 + 56) )
      {
        saved_shifted_bits_2 = shifted_bits_3;
        comparison_result_19 = call_result_7 == 1 ? 2 : 0;
        if ( comparison_result_19 <= (saved_shifted_bits_2 + shifted_bits_3 - *(_DWORD *)(a1 + 212)) >> 6 )
        {
          shifted_bits_11 = (saved_shifted_bits_2 + shifted_bits_3 - *(_DWORD *)(a1 + 212)) >> 6;
        }
        else
        {
          comparison_result_20 = call_result_7 == 1 ? 2 : 0;
          shifted_bits_11 = comparison_result_20;
        }
        if ( shifted_bits_11 >= shifted_bits )
        {
          saved_shifted_bits_3 = shifted_bits;
        }
        else
        {
          comparison_result = call_result_7 == 1 ? 2 : 0;
          if ( comparison_result <= (saved_shifted_bits_2 + shifted_bits_3 - *(_DWORD *)(a1 + 212)) >> 6 )
          {
            shifted_bits_12 = (saved_shifted_bits_2 + shifted_bits_3 - *(_DWORD *)(a1 + 212)) >> 6;
          }
          else
          {
            comparison_result_2 = call_result_7 == 1 ? 2 : 0;
            shifted_bits_12 = comparison_result_2;
          }
          saved_shifted_bits_3 = shifted_bits_12;
        }
        cached_shifted_bits = saved_shifted_bits_3;
        if ( saved_shifted_bits_3 < shifted_bits )
        {
          saved_shifted_bits_11 = cached_shifted_bits + shifted_bits_7;
          shifted_bits = cached_shifted_bits;
          sub_14019A8F0((__int64)a6, cached_shifted_bits + shifted_bits_7);
        }
      }
      scaled_index_17 = 8 * saved_shifted_bits_11;
      loaded_word_8 = loaded_word_4;
      if ( loaded_word_4 > *(_DWORD *)(loaded_word_6 + 12) )
        loaded_word_8 = *(_DWORD *)(loaded_word_6 + 12);
      scaled_index = 4LL * (loaded_word_9 + shifted_bits_4) * loaded_word_5 + 15;
      if ( scaled_index <= 4LL * (loaded_word_9 + shifted_bits_4) * loaded_word_5 )
        scaled_index = 0xFFFFFFFFFFFFFF0LL;
      alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_6 = (int *)alloca_result;
      weighted_sum_8 = *(float *)(a1 + 228);
      combined_products = sub_1401A6D80(a2, (shifted_bits_4 - loaded_word_9) * loaded_word_2 / *(_DWORD *)(a1 + 32));
      if ( weighted_sum_8 <= combined_products )
        weighted_sum_2 = sub_1401A6D80(a2, (shifted_bits_4 - loaded_word_9) * loaded_word_2 / *(_DWORD *)(a1 + 32));
      else
        weighted_sum_2 = *(float *)(a1 + 228);
      saved_weighted_sum = weighted_sum_2;
      loaded_word_21 = loaded_word_9 * loaded_word_2 / *(_DWORD *)(a1 + 32);
      *(float *)(a1 + 228) = sub_1401A6D80(a2 + 4LL * ((shifted_bits_4 - loaded_word_9) * loaded_word_2 / *(_DWORD *)(a1 + 32)), loaded_word_21);
      if ( saved_weighted_sum <= *(float *)(a1 + 228) )
        weighted_sum_3 = *(float *)(a1 + 228);
      else
        weighted_sum_3 = saved_weighted_sum;
      saved_weighted_sum = weighted_sum_3;
      loaded_word = *(_DWORD *)(a1 + 64);
      unused_written_slot_4 = 1;
      comparison_result_3 = (float)(1.0 / (float)(1 << loaded_word)) >= weighted_sum_3;
      saved_comparison_result_2 = comparison_result_3;
      if ( call_result_7 == 1 )
        sub_14019A450(a6, saved_comparison_result_2, 15);
      else
        saved_comparison_result_2 = 0;
      if ( saved_comparison_result_2 )
      {
        if ( shifted_bits_3 > 0 )
        {
          if ( saved_shifted_bits_11 >= shifted_bits_7 + 2 )
            integer_sum = shifted_bits_7 + 2;
          else
            integer_sum = saved_shifted_bits_11;
          saved_shifted_bits_11 = integer_sum;
          shifted_bits_5 = integer_sum;
          scaled_index_17 = 8 * integer_sum;
          shifted_bits = 2;
          sub_14019A8F0((__int64)a6, integer_sum);
        }
        call_result_7 = 8 * saved_shifted_bits_11;
        call_result = sub_14019A0A0((__int64)a6);
        a6[6] += call_result_7 - call_result;
      }
      k = 0;
      do
      {
        unused_written_slot = 0;
        comparison_result_4 = *(_DWORD *)(a1 + 20) && saved_weighted_sum > 65536.0;
        unused_written_slot = comparison_result_4;
        scaled_index_23 = a2 + 4LL * k;
        sub_1401A08E0(
          scaled_index_23,
          &saved_alloca_result_6[(loaded_word_9 + shifted_bits_4) * k + loaded_word_9],
          shifted_bits_4,
          loaded_word_5,
          *(_DWORD *)(a1 + 32),
          (float *)(loaded_word_6 + 16),
          (float *)(a1 + 4LL * k + 196),
          comparison_result_4);
        ++k;
      }
      while ( k < loaded_word_5 );
      comparison_result_5 = (*(_DWORD *)(a1 + 68) && shifted_bits > 3 || shifted_bits > 12 * loaded_word_2)
          && !saved_comparison_result
          && !saved_comparison_result_2
          && !*(_DWORD *)(a1 + 24)
          && *(int *)(a1 + 28) >= 5;
      unused_written_slot_5 = comparison_result_5;
      loaded_word_11 = *(_DWORD *)(a1 + 104);
      call_result_13 = sub_1401B2750((__int64 *)a1, (__int64)saved_alloca_result_6, scaled_index_24, loaded_word_5, shifted_bits_4, loaded_word_11, &remaining_count, &selected_scalar_2, scratch_buffer_2, comparison_result_5, shifted_bits, a1 + 124);
      if ( selected_scalar_2 > 0.40000001 || (LODWORD(saved_remaining_count) = *(_DWORD *)(a1 + 112), *(float *)&saved_remaining_count > 0.40000001) )
      {
        if ( !*(_DWORD *)(a1 + 124) || (saved_remaining_count = *(float *)(a1 + 128), saved_remaining_count > 0.3) )
        {
          saved_remaining_count = (double)remaining_count;
          if ( (double)remaining_count > 1.26 * (double)*(int *)(a1 + 108)
            || (saved_remaining_count = (double)remaining_count, 0.79 * (double)*(int *)(a1 + 108) > (double)remaining_count) )
          {
            selection_flag_3 = 1;
          }
        }
      }
      if ( call_result_13 )
      {
        sub_14019A450(a6, 1, 1);
        call_result_10 = sub_14019A020(++remaining_count) - 4;
        sub_14019A5E0(a6, call_result_10, 6);
        sub_14019A6D0(a6, remaining_count - (16 << call_result_10), call_result_10 + 4);
        --remaining_count;
        sub_14019A6D0(a6, scratch_buffer_2[0], 3);
        sub_14019A4F0(a6, loaded_word_11, (__int64)&unk_140279CE8, 2);
      }
      else if ( !saved_comparison_result && call_result_7 + 16 <= scaled_index_17 )
      {
        sub_14019A450(a6, 0, 1);
      }
      call_result_8 = 0;
      saved_shifted_bits = 0;
      if ( *(int *)(a1 + 28) >= 1 && !*(_DWORD *)(a1 + 68) )
      {
        comparison_result_6 = saved_comparison_result && shifted_bits_5 < 15 && *(_DWORD *)(a1 + 188) != 2;
        scratch_buffer_2[1] = comparison_result_6;
        call_result_8 = sub_1401AE510((__int64)saved_alloca_result_6, loaded_word_9 + shifted_bits_4, loaded_word_5, &selected_scalar, &selection_flag, comparison_result_6, &selection_flag_2);
      }
      if ( i <= 0 || (call_result_2 = sub_14019A0A0((__int64)a6), call_result_2 + 3 > scaled_index_17) )
      {
        call_result_8 = 0;
        selection_flag_4 = 1;
      }
      else if ( call_result_8 )
      {
        saved_shifted_bits = shifted_bits_10;
      }
      scaled_index_2 = 4LL * shifted_bits_4 * loaded_word_5 + 15;
      if ( scaled_index_2 <= 4LL * shifted_bits_4 * loaded_word_5 )
        scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_2 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_3 = (int *)alloca_result_2;
      float_word = 4LL * loaded_word_5 * loaded_word_3 + 15;
      if ( float_word <= 4LL * loaded_word_5 * loaded_word_3 )
        float_word = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_3 = alloca(float_word & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result = (float *)alloca_result_3;
      scaled_index_3 = 4LL * loaded_word_5 * loaded_word_3 + 15;
      if ( scaled_index_3 <= 4LL * loaded_word_5 * loaded_word_3 )
        scaled_index_3 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_4 = alloca(scaled_index_3 & 0xFFFFFFFFFFFFFFF0uLL);
      source_buffer_2 = (__m128i *)alloca_result_4;
      comparison_result_7 = saved_shifted_bits && *(int *)(a1 + 28) >= 8;
      saved_comparison_result_3 = comparison_result_7;
      scaled_index_4 = 4LL * loaded_word_3 * loaded_word_2 + 15;
      if ( scaled_index_4 <= 4LL * loaded_word_3 * loaded_word_2 )
        scaled_index_4 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_5 = alloca(scaled_index_4 & 0xFFFFFFFFFFFFFFF0uLL);
      destination_buffer = (__m128i *)alloca_result_5;
      if ( saved_comparison_result_3 )
      {
        sub_1401AF0F0(loaded_word_6, 0, (__int64)saved_alloca_result_6, (__int64)saved_alloca_result_3, loaded_word_2, loaded_word_5, i, *(_DWORD *)(a1 + 32));
        sub_1401A3450(loaded_word_6, (__int64)saved_alloca_result_3, (__int64)saved_alloca_result, loaded_word_8, loaded_word_2, i);
        sub_1401A6EA0(loaded_word_6, loaded_word_8, loaded_word_4, (__int64)saved_alloca_result, (__int64)destination_buffer, loaded_word_2);
        for ( j = 0; j < loaded_word_3 * loaded_word_2; ++j )
        {
          *(float *)&saved_remaining_count = *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[j] + (float)(0.5 * (float)i);
          SR_VEC_PTR_LANES(128, destination_buffer, i32)[j] = LODWORD(saved_remaining_count);
        }
      }
      sub_1401AF0F0(loaded_word_6, saved_shifted_bits, (__int64)saved_alloca_result_6, (__int64)saved_alloca_result_3, loaded_word_2, loaded_word_5, i, *(_DWORD *)(a1 + 32));
      if ( loaded_word_5 == 2 && loaded_word_2 == 1 )
        selection_flag = 0;
      sub_1401A3450(loaded_word_6, (__int64)saved_alloca_result_3, (__int64)saved_alloca_result, loaded_word_8, loaded_word_2, i);
      if ( *(_DWORD *)(a1 + 68) )
      {
        for ( j = 2; j < loaded_word_4; ++j )
        {
          if ( (float)(0.000099999997 * *saved_alloca_result) <= saved_alloca_result[j] )
            scaled_value = 0.000099999997 * *saved_alloca_result;
          else
            scaled_value = saved_alloca_result[j];
          saved_alloca_result[j] = scaled_value;
          if ( saved_alloca_result[j] <= 1.0e-15 )
            table_value = 646978941;
          else
            table_value = LODWORD(saved_alloca_result[j]);
          LODWORD(saved_remaining_count) = table_value;
          LODWORD(saved_alloca_result[j]) = table_value;
        }
      }
      sub_1401A6EA0(loaded_word_6, loaded_word_8, loaded_word_4, (__int64)saved_alloca_result, (__int64)source_buffer_2, loaded_word_2);
      scaled_index_5 = 4LL * loaded_word_3 * loaded_word_2 + 15;
      if ( scaled_index_5 <= 4LL * loaded_word_3 * loaded_word_2 )
        scaled_index_5 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_6 = alloca(scaled_index_5 & 0xFFFFFFFFFFFFFFF0uLL);
      p_j = (int *)alloca_result_6;
      crt_memset(p_j, 0, 4LL * loaded_word_4);
      if ( !saved_comparison_result && *(_QWORD *)(a1 + 240) && !*(_DWORD *)(a1 + 68) )
      {
        scaled_ratio = 0.0;
        combined_products_3 = 0.0;
        running_total_5 = 0;
        if ( *(int *)(a1 + 96) >= 2 )
          loaded_word_13 = *(_DWORD *)(a1 + 96);
        else
          loaded_word_13 = 2;
        saved_loaded_word = loaded_word_13;
        for ( k = 0; k < loaded_word_2; ++k )
        {
          for ( j = 0; j < saved_loaded_word; ++j )
          {
            if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * loaded_word_3)) >= 0.25 )
              weighted_sum_4 = 0.25;
            else
              weighted_sum_4 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * loaded_word_3));
            if ( weighted_sum_4 <= -2.0 )
            {
              component_delta = -2.0;
            }
            else
            {
              if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * loaded_word_3)) >= 0.25 )
                *(float *)&float_word_3 = 0.25;
              else
                float_word_3 = *(int *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * loaded_word_3));
              component_delta = *(float *)&float_word_3;
            }
            saved_component_delta = component_delta;
            if ( component_delta > 0.0 )
              saved_component_delta = 0.5 * saved_component_delta;
            scaled_ratio = scaled_ratio + (float)(saved_component_delta * (float)(*(__int16 *)(loaded_word_12 + 2LL * (j + 1)) - *(__int16 *)(loaded_word_12 + 2LL * j)));
            running_total_5 += *(__int16 *)(loaded_word_12 + 2LL * (j + 1)) - *(__int16 *)(loaded_word_12 + 2LL * j);
            combined_products_3 = combined_products_3 + (float)(saved_component_delta * (float)(2 * j + 1 - saved_loaded_word));
          }
        }
        scaled_ratio = scaled_ratio / (float)running_total_5;
        scaled_ratio = scaled_ratio + 0.2;
        combined_products_3 = (float)(combined_products_3 * 6.0) / (float)(saved_loaded_word * (saved_loaded_word + 1) * (saved_loaded_word - 1) * loaded_word_2);
        combined_products_3 = 0.5 * combined_products_3;
        if ( combined_products_3 >= 0.030999999 )
          saved_combined_products = 0.030999999;
        else
          saved_combined_products = combined_products_3;
        if ( saved_combined_products <= -0.030999999 )
        {
          *(float *)&float_word_4 = -0.030999999;
        }
        else
        {
          if ( combined_products_3 >= 0.030999999 )
            selected_word = 1023275958;
          else
            selected_word = LODWORD(combined_products_3);
          float_word_4 = selected_word;
        }
        combined_products_3 = *(float *)&float_word_4;
        for ( m = 0; ; ++m )
        {
          loaded_word_22 = *(__int16 *)(loaded_word_12 + 2LL * (m + 1));
          if ( loaded_word_22 >= *(__int16 *)(loaded_word_12 + 2LL * saved_loaded_word) / 2 )
            break;
        }
        iteration_count = 0;
        for ( j = 0; j < saved_loaded_word; ++j )
        {
          combined_products_6 = scaled_ratio + (float)(combined_products_3 * (float)(j - m));
          if ( loaded_word_2 == 2 )
          {
            if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j) <= *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + loaded_word_3)) )
              weighted_sum_5 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + loaded_word_3));
            else
              weighted_sum_5 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j);
            weighted_sum = weighted_sum_5;
          }
          else
          {
            weighted_sum = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j);
          }
          if ( weighted_sum >= 0.0 )
            saved_weighted_sum_2 = 0.0;
          else
            saved_weighted_sum_2 = weighted_sum;
          weighted_sum = saved_weighted_sum_2 - combined_products_6;
          if ( (float)(saved_weighted_sum_2 - combined_products_6) > 0.25 )
          {
            *(float *)&p_j[j] = weighted_sum - 0.25;
            ++iteration_count;
          }
        }
        if ( iteration_count >= 3 )
        {
          scaled_ratio = scaled_ratio + 0.25;
          if ( scaled_ratio <= 0.0 )
          {
            for ( j = 0; j < saved_loaded_word; ++j )
            {
              if ( (float)(*(float *)&p_j[j] - 0.25) >= 0.0 )
                product_difference = *(float *)&p_j[j] - 0.25;
              else
                product_difference = 0.0;
              *(float *)&p_j[j] = product_difference;
            }
          }
          else
          {
            scaled_ratio = 0.0;
            combined_products_3 = 0.0;
            crt_memset((void *)(uintptr_t)(p_j), 0, 4LL * saved_loaded_word);
          }
        }
        scaled_ratio = scaled_ratio + 0.2;
        scaled_value_4 = 64.0 * combined_products_3;
        *(float *)&saved_remaining_count = scaled_ratio;
        saved_scaled_ratio = scaled_ratio;
      }
      if ( !*(_DWORD *)(a1 + 68) )
      {
        saved_product_difference = -10.0;
        scaled_ratio_2 = 0.0;
        if ( saved_shifted_bits )
          scaled_value_2 = 0.5 * (float)i;
        else
          scaled_value_2 = 0.0;
        saved_scaled_value = scaled_value_2;
        for ( j = loaded_word_7; j < loaded_word_4; ++j )
        {
          if ( (float)(saved_product_difference - 1.0) <= (float)(*(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[j] - saved_scaled_value) )
            product_difference_2 = *(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[j] - saved_scaled_value;
          else
            product_difference_2 = saved_product_difference - 1.0;
          saved_product_difference = product_difference_2;
          if ( loaded_word_2 == 2 )
          {
            if ( saved_product_difference <= (float)(*(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[loaded_word_3 + j] - saved_scaled_value) )
              combined_products_5 = *(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[loaded_word_3 + j] - saved_scaled_value;
            else
              combined_products_5 = saved_product_difference;
            saved_product_difference = combined_products_5;
          }
          scaled_ratio_2 = scaled_ratio_2 + saved_product_difference;
        }
        scaled_ratio_2 = scaled_ratio_2 / (float)(loaded_word_4 - loaded_word_7);
        combined_products_4 = scaled_ratio_2 - *(float *)(a1 + 248);
        if ( combined_products_4 >= -1.5 )
          component_delta_2 = combined_products_4;
        else
          component_delta_2 = -1.5;
        if ( component_delta_2 <= 3.0 )
        {
          if ( combined_products_4 >= -1.5 )
            *(float *)&float_word_5 = combined_products_4;
          else
            *(float *)&float_word_5 = -1.5;
          scaled_value_3 = *(float *)&float_word_5;
        }
        else
        {
          scaled_value_3 = 3.0;
        }
        combined_products_4 = scaled_value_3;
        *(float *)&saved_remaining_count = *(float *)(a1 + 248) + (float)(0.02 * scaled_value_3);
        *(_DWORD *)(a1 + 248) = LODWORD(saved_remaining_count);
      }
      if ( !saved_comparison_result_3 )
        crt_memcpy(destination_buffer, source_buffer_2, 4LL * loaded_word_3 * loaded_word_2);
      if ( i > 0 )
      {
        call_result_3 = sub_14019A0A0((__int64)a6);
        if ( call_result_3 + 3 <= scaled_index_17
          && !call_result_8
          && *(int *)(a1 + 28) >= 5
          && !*(_DWORD *)(a1 + 68)
          && !saved_comparison_result
          && (unsigned int)sub_1401AEB90((__int64)source_buffer_2, (__int64)source_buffer, loaded_word_3, loaded_word_7, loaded_word_4, loaded_word_2) )
        {
          call_result_8 = 1;
          saved_shifted_bits = shifted_bits_10;
          sub_1401AF0F0(loaded_word_6, shifted_bits_10, (__int64)saved_alloca_result_6, (__int64)saved_alloca_result_3, loaded_word_2, loaded_word_5, i, *(_DWORD *)(a1 + 32));
          sub_1401A3450(loaded_word_6, (__int64)saved_alloca_result_3, (__int64)saved_alloca_result, loaded_word_8, loaded_word_2, i);
          sub_1401A6EA0(loaded_word_6, loaded_word_8, loaded_word_4, (__int64)saved_alloca_result, (__int64)source_buffer_2, loaded_word_2);
          for ( j = 0; j < loaded_word_3 * loaded_word_2; ++j )
            *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[j] = *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[j] + (float)(0.5 * (float)i);
          LODWORD(saved_remaining_count) = 1045220557;
          selected_scalar = 0.2;
        }
      }
      if ( i > 0 )
      {
        float_word_2 = sub_14019A0A0((__int64)a6);
        if ( float_word_2 + 3 <= scaled_index_17 )
          sub_14019A450(a6, call_result_8, 3);
      }
      scaled_index_6 = 4LL * shifted_bits_4 * loaded_word_2 + 15;
      if ( scaled_index_6 <= 4LL * shifted_bits_4 * loaded_word_2 )
        scaled_index_6 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_7 = alloca(scaled_index_6 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_4 = (int *)alloca_result_7;
      sub_1401A35F0(loaded_word_6, (__int64)saved_alloca_result_3, (__int64)saved_alloca_result_4, (__int64)saved_alloca_result, loaded_word_8, loaded_word_2, shifted_bits_10);
      comparison_result_8 = shifted_bits_5 >= 15 * loaded_word_2 && !saved_comparison_result && *(int *)(a1 + 28) >= 2 && !*(_DWORD *)(a1 + 68);
      saved_comparison_result_5 = comparison_result_8;
      scaled_index_7 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_7 <= 4LL * loaded_word_3 )
        scaled_index_7 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_8 = alloca(scaled_index_7 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_7 = (int *)alloca_result_8;
      scaled_index_8 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_8 <= 4LL * loaded_word_3 )
        scaled_index_8 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_9 = alloca(scaled_index_8 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_10 = (int *)alloca_result_9;
      scaled_index_9 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_9 <= 4LL * loaded_word_3 )
        scaled_index_9 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_10 = alloca(scaled_index_9 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_11 = (int *)alloca_result_10;
      weighted_sum_9 = sub_1401B1250(
        (__int64)source_buffer_2,
        (__int64)destination_buffer,
        loaded_word_3,
        loaded_word_7,
        loaded_word_4,
        loaded_word_2,
        saved_alloca_result_7,
        *(_DWORD *)(a1 + 64),
        *(_QWORD *)(loaded_word_6 + 64),
        call_result_8,
        *(_DWORD *)(a1 + 48),
        *(_DWORD *)(a1 + 56),
        loaded_word_12,
        i,
        shifted_bits_5,
        scratch_buffer,
        *(_DWORD *)(a1 + 68),
        (__int64)p_j,
        (_DWORD *)(a1 + 124),
        (__int64)saved_alloca_result_10,
        (__int64)saved_alloca_result_11);
      scaled_index_10 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_10 <= 4LL * loaded_word_3 )
        scaled_index_10 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_11 = alloca(scaled_index_10 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_2 = (int *)alloca_result_11;
      if ( saved_comparison_result_5 )
      {
        if ( 20480 / shifted_bits_5 + 2 >= 80 )
          integer_quotient = 20480 / shifted_bits_5 + 2;
        else
          integer_quotient = 80;
        unused_written_slot_6 = integer_quotient;
        call_result_9 = sub_1401AF4F0(loaded_word_6, loaded_word_8, call_result_8, (__int64)saved_alloca_result_2, integer_quotient, (__int64)saved_alloca_result_4, shifted_bits_4, i, selected_scalar, selection_flag, (__int64)saved_alloca_result_10);
        for ( j = loaded_word_8; j < loaded_word_4; ++j )
          saved_alloca_result_2[j] = saved_alloca_result_2[loaded_word_8 - 1];
      }
      else if ( saved_comparison_result && selection_flag_2 )
      {
        for ( j = 0; j < loaded_word_4; ++j )
          saved_alloca_result_2[j] = 1;
        call_result_9 = 0;
      }
      else if ( !saved_comparison_result || shifted_bits_5 >= 15 || *(_DWORD *)(a1 + 188) == 2 )
      {
        for ( j = 0; j < loaded_word_4; ++j )
          saved_alloca_result_2[j] = call_result_8;
        call_result_9 = 0;
      }
      else
      {
        for ( j = 0; j < loaded_word_4; ++j )
          saved_alloca_result_2[j] = 0;
        call_result_9 = call_result_8;
      }
      scaled_index_11 = 4LL * loaded_word_3 * loaded_word_2 + 15;
      if ( scaled_index_11 <= 4LL * loaded_word_3 * loaded_word_2 )
        scaled_index_11 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_12 = alloca(scaled_index_11 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_5 = (__m128i *)alloca_result_12;
      k = 0;
      do
      {
        for ( j = loaded_word_7; j < loaded_word_4; ++j )
        {
          combined_products_2 = SR_VEC_READ_LANES(128, sub_140244390((float)(*(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[loaded_word_3 * k + j]
                                               - *(float *)&SR_VEC_PTR_LANES(128, source_buffer, i32)[loaded_word_3 * k + j])), f64)[0];
          if ( combined_products_2 < 2.0 )
            *(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[loaded_word_3 * k + j] = *(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[loaded_word_3 * k + j]
                                                   - (float)(*(float *)&state_address[2 * loaded_word_3 * k + 2 * j] * 0.25);
        }
        ++k;
      }
      while ( k < loaded_word_2 );
      comparison_result_9 = *(_DWORD *)(a1 + 28) >= 4;
      sub_1401A6FC0(
        loaded_word_6,
        loaded_word_7,
        loaded_word_4,
        loaded_word_8,
        (__int64)source_buffer_2,
        source_buffer,
        scaled_index_17,
        saved_alloca_result_5,
        a6,
        loaded_word_2,
        i,
        shifted_bits,
        *(_DWORD *)(a1 + 16),
        (float *)(a1 + 88),
        comparison_result_9,
        *(_DWORD *)(a1 + 60),
        *(_DWORD *)(a1 + 68));
      sub_1401B0110(loaded_word_7, loaded_word_4, call_result_8, (__int64)saved_alloca_result_2, i, call_result_9, a6);
      call_result_4 = sub_14019A0A0((__int64)a6);
      if ( call_result_4 + 4 <= scaled_index_17 )
      {
        if ( *(_DWORD *)(a1 + 68) )
        {
          *(_DWORD *)(a1 + 104) = 0;
          *(_DWORD *)(a1 + 84) = 2;
        }
        else if ( saved_comparison_result )
        {
          if ( *(_DWORD *)(a1 + 28) )
          {
            if ( call_result_8 )
              *(_DWORD *)(a1 + 84) = 2;
            else
              *(_DWORD *)(a1 + 84) = 3;
          }
          else
          {
            *(_DWORD *)(a1 + 84) = 0;
          }
        }
        else if ( saved_shifted_bits || *(int *)(a1 + 28) < 3 || shifted_bits < 10 * loaded_word_2 )
        {
          if ( *(_DWORD *)(a1 + 28) )
            *(_DWORD *)(a1 + 84) = 2;
          else
            *(_DWORD *)(a1 + 84) = 0;
        }
        else
        {
          comparison_result_10 = call_result_13 != 0;
          *(_DWORD *)(a1 + 84) = sub_1401A3A00(
                                   loaded_word_6,
                                   (__int64)saved_alloca_result_4,
                                   (int *)(a1 + 92),
                                   *(_DWORD *)(a1 + 84),
                                   (int *)(a1 + 100),
                                   (_DWORD *)(a1 + 104),
                                   comparison_result_10,
                                   loaded_word_8,
                                   loaded_word_2,
                                   shifted_bits_10,
                                   (__int64)saved_alloca_result_11);
        }
        sub_14019A4F0(a6, *(_DWORD *)(a1 + 84), (__int64)&unk_140279CE4, 5);
      }
      if ( *(_DWORD *)(a1 + 68) )
      {
        if ( shifted_bits_5 / 3 <= 8 )
          integer_quotient_2 = shifted_bits_5 / 3;
        else
          integer_quotient_2 = 8;
        *saved_alloca_result_7 = integer_quotient_2;
      }
      scaled_index_12 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_12 <= 4LL * loaded_word_3 )
        scaled_index_12 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_13 = alloca(scaled_index_12 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_8 = (int *)alloca_result_13;
      sub_1401A12E0(loaded_word_6, (__int64)saved_alloca_result_8, i, loaded_word_2);
      cached_integer_difference = 6;
      scaled_index_17 *= 8;
      running_total = 0;
      call_result_7 = sub_14019A0E0((__int64)a6);
      for ( j = loaded_word_7; j < loaded_word_4; ++j )
      {
        shifted_bits_8 = ((*(__int16 *)(loaded_word_12 + 2LL * (j + 1)) - *(__int16 *)(loaded_word_12 + 2LL * j)) * loaded_word_2) << i;
        if ( shifted_bits_8 >= 48 )
          saved_shifted_bits_4 = shifted_bits_8;
        else
          saved_shifted_bits_4 = 48;
        if ( 8 * shifted_bits_8 >= saved_shifted_bits_4 )
        {
          if ( shifted_bits_8 >= 48 )
            saved_shifted_bits_5 = shifted_bits_8;
          else
            saved_shifted_bits_5 = 48;
          scaled_index_18 = saved_shifted_bits_5;
        }
        else
        {
          scaled_index_18 = 8 * shifted_bits_8;
        }
        cached_scaled_index = scaled_index_18;
        cached_integer_difference_2 = cached_integer_difference;
        running_total_4 = 0;
        for ( n = 0; call_result_7 + 8 * cached_integer_difference_2 < scaled_index_17 - running_total; ++n )
        {
          if ( running_total_4 >= saved_alloca_result_8[j] )
            break;
          comparison_result_11 = n < saved_alloca_result_7[j];
          saved_comparison_result_4 = comparison_result_11;
          sub_14019A450(a6, comparison_result_11, cached_integer_difference_2);
          call_result_7 = sub_14019A0E0((__int64)a6);
          if ( !saved_comparison_result_4 )
            break;
          running_total_4 += cached_scaled_index;
          running_total += cached_scaled_index;
          cached_integer_difference_2 = 1;
        }
        if ( n )
        {
          if ( cached_integer_difference - 1 >= 2 )
            integer_difference = cached_integer_difference - 1;
          else
            integer_difference = 2;
          cached_integer_difference = integer_difference;
        }
        saved_alloca_result_7[j] = running_total_4;
      }
      if ( loaded_word_2 == 2 )
      {
        if ( i )
          call_result_12 = sub_1401B0C90(loaded_word_6, (__int64)saved_alloca_result_4, i, shifted_bits_4);
        *(_DWORD *)(a1 + 236) = sub_1401A5C90(
                                  (float)(shifted_bits_6 / 1000),
                                  (__int64)&unk_14027BBC0,
                                  (__int64)&unk_14027BC20,
                                  21,
                                  *(_DWORD *)(a1 + 236));
        if ( loaded_word_7 <= *(_DWORD *)(a1 + 236) )
          loaded_word_14 = *(_DWORD *)(a1 + 236);
        else
          loaded_word_14 = loaded_word_7;
        if ( loaded_word_4 >= loaded_word_14 )
        {
          if ( loaded_word_7 <= *(_DWORD *)(a1 + 236) )
            loaded_word_15 = *(_DWORD *)(a1 + 236);
          else
            loaded_word_15 = loaded_word_7;
          saved_loaded_word_3 = loaded_word_15;
        }
        else
        {
          saved_loaded_word_3 = loaded_word_4;
        }
        *(_DWORD *)(a1 + 236) = saved_loaded_word_3;
      }
      loaded_word_10 = 5;
      if ( call_result_7 + 48 <= scaled_index_17 - running_total )
      {
        if ( loaded_word_7 > 0 || *(_DWORD *)(a1 + 68) )
        {
          *(_DWORD *)(a1 + 232) = 0;
          loaded_word_10 = 5;
        }
        else
        {
          loaded_word_10 = sub_1401B0380(
                   loaded_word_6,
                   (__int64)saved_alloca_result_4,
                   (__int64)source_buffer_2,
                   loaded_word_4,
                   i,
                   loaded_word_2,
                   shifted_bits_4,
                   a1 + 124,
                   (float *)(a1 + 232),
                   selected_scalar,
                   *(_DWORD *)(a1 + 236),
                   scaled_value_4,
                   shifted_bits_6);
        }
        sub_14019A4F0(a6, loaded_word_10, (__int64)&unk_14027BB88, 7);
        call_result_7 = sub_14019A0E0((__int64)a6);
      }
      if ( shifted_bits_3 > 0 )
      {
        loaded_word_16 = *(_DWORD *)(loaded_word_6 + 40) - i;
        unused_written_slot_7 = 1275;
        if ( saved_shifted_bits_11 >= 1275 >> (3 - i) )
        {
          unused_written_slot_8 = 1275;
          shifted_bits_13 = 1275 >> (3 - i);
        }
        else
        {
          shifted_bits_13 = saved_shifted_bits_11;
        }
        saved_shifted_bits_11 = shifted_bits_13;
        if ( saved_comparison_result )
        {
          if ( shifted_bits_3 - (72 * loaded_word_2 + 32) >= 0 )
            scaled_index_19 = shifted_bits_3 - (72 * loaded_word_2 + 32);
          else
            scaled_index_19 = 0;
          running_total_3 = scaled_index_19;
        }
        else
        {
          running_total_3 = shifted_bits_3 - (320 * loaded_word_2 + 160);
        }
        if ( *(_DWORD *)(a1 + 56) )
        {
          unused_written_slot_10 = a1;
          running_total_3 += *(int *)(a1 + 220) >> loaded_word_16;
        }
        if ( saved_comparison_result )
        {
          shifted_bits_2 = running_total_3;
          if ( *(int *)(a1 + 192) < 100 )
          {
            scratch_buffer[1] = 96;
            shifted_bits_2 += 96 >> (3 - i);
          }
          if ( *(int *)(a1 + 192) > 100 )
          {
            scratch_buffer[2] = 144;
            shifted_bits_2 -= 144 >> (3 - i);
          }
          shifted_bits_2 += (int)(float)((float)(selected_scalar - 0.25) * 400.0);
          if ( selected_scalar > 0.69999999 )
          {
            if ( shifted_bits_2 <= 400 )
              saved_shifted_bits_6 = 400;
            else
              saved_shifted_bits_6 = shifted_bits_2;
            shifted_bits_2 = saved_shifted_bits_6;
          }
        }
        else
        {
          comparison_result_12 = *(_QWORD *)(a1 + 240) != 0;
          shifted_bits_2 = sub_1401B32A0(
                  loaded_word_6,
                  a1 + 124,
                  running_total_3,
                  i,
                  shifted_bits_6,
                  *(_DWORD *)(a1 + 96),
                  loaded_word_2,
                  *(_DWORD *)(a1 + 236),
                  *(_DWORD *)(a1 + 56),
                  *(float *)(a1 + 232),
                  scratch_buffer[0],
                  selected_scalar,
                  selection_flag_3,
                  weighted_sum_9,
                  *(_DWORD *)(a1 + 68),
                  comparison_result_12,
                  saved_scaled_ratio,
                  combined_products_4);
        }
        shifted_bits_2 += call_result_7;
        shifted_bits_9 = ((call_result_7 + running_total + 63) >> 6) + 2;
        if ( saved_comparison_result )
        {
          if ( shifted_bits_9 <= (call_result_11 + running_total + 359) >> 6 )
            shifted_bits_14 = (call_result_11 + running_total + 359) >> 6;
          else
            shifted_bits_14 = shifted_bits_9;
          shifted_bits_9 = shifted_bits_14;
        }
        shifted_bits = (shifted_bits_2 + 32) >> 6;
        if ( shifted_bits_9 <= shifted_bits )
          saved_shifted_bits_7 = shifted_bits;
        else
          saved_shifted_bits_7 = shifted_bits_9;
        shifted_bits = saved_shifted_bits_7;
        if ( saved_shifted_bits_11 >= saved_shifted_bits_7 )
          saved_shifted_bits_8 = shifted_bits;
        else
          saved_shifted_bits_8 = saved_shifted_bits_11;
        shifted_bits = saved_shifted_bits_8;
        integer_difference_2 = shifted_bits_2 - shifted_bits_3;
        shifted_bits_2 = saved_shifted_bits_8 << 6;
        if ( saved_comparison_result_2 )
        {
          shifted_bits = 2;
          shifted_bits_2 = 128;
          integer_difference_2 = 0;
        }
        if ( *(int *)(a1 + 224) >= 970 )
          weighted_sum_6 = 0.001;
        else
          weighted_sum_6 = 1.0 / (float)(++*(_DWORD *)(a1 + 224) + 20);
        if ( *(_DWORD *)(a1 + 56) )
          *(_DWORD *)(a1 + 212) += shifted_bits_2 - shifted_bits_3;
        if ( *(_DWORD *)(a1 + 56) )
        {
          scratch_buffer[3] = 1;
          *(_DWORD *)(a1 + 216) += (int)(float)(weighted_sum_6
                                              * (float)((1 << loaded_word_16) * integer_difference_2
                                                      - *(_DWORD *)(a1 + 220)
                                                      - *(_DWORD *)(a1 + 216)));
          *(_DWORD *)(a1 + 220) = -*(_DWORD *)(a1 + 216);
        }
        if ( *(_DWORD *)(a1 + 56) && *(int *)(a1 + 212) < 0 )
        {
          shifted_bits_17 = (((-*(_DWORD *)(a1 + 212) >> 31) & 0x3F) - *(_DWORD *)(a1 + 212)) >> 6;
          if ( saved_comparison_result_2 )
            saved_shifted_bits_9 = 0;
          else
            saved_shifted_bits_9 = shifted_bits_17;
          shifted_bits += saved_shifted_bits_9;
          *(_DWORD *)(a1 + 212) = 0;
        }
        if ( saved_shifted_bits_11 >= shifted_bits )
          saved_shifted_bits_10 = shifted_bits;
        else
          saved_shifted_bits_10 = saved_shifted_bits_11;
        saved_shifted_bits_11 = saved_shifted_bits_10;
        sub_14019A8F0((__int64)a6, saved_shifted_bits_10);
      }
      scaled_index_13 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_13 <= 4LL * loaded_word_3 )
        scaled_index_13 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_14 = alloca(scaled_index_13 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_9 = (int *)alloca_result_14;
      scaled_index_14 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_14 <= 4LL * loaded_word_3 )
        scaled_index_14 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_15 = alloca(scaled_index_14 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_12 = (int *)alloca_result_15;
      scaled_index_15 = 4LL * loaded_word_3 + 15;
      if ( scaled_index_15 <= 4LL * loaded_word_3 )
        scaled_index_15 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_16 = alloca(scaled_index_15 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_13 = (int *)alloca_result_16;
      shifted_bits_18 = saved_shifted_bits_11 << 6;
      call_result_5 = sub_14019A0E0((__int64)a6);
      remaining_amount = shifted_bits_18 - call_result_5 - 1;
      if ( call_result_8 && i >= 2 && remaining_amount >= 8 * i + 16 )
        selection_code_2 = 8;
      else
        selection_code_2 = 0;
      cached_selection_code = selection_code_2;
      remaining_amount -= selection_code_2;
      saved_loaded_word_2 = loaded_word_4 - 1;
      if ( *(_DWORD *)(a1 + 124) )
      {
        if ( shifted_bits_6 >= 32000 * loaded_word_2 )
        {
          if ( shifted_bits_6 >= 48000 * loaded_word_2 )
          {
            if ( shifted_bits_6 >= 60000 * loaded_word_2 )
            {
              if ( shifted_bits_6 >= 80000 * loaded_word_2 )
                selection_code = 20;
              else
                selection_code = 19;
            }
            else
            {
              selection_code = 18;
            }
          }
          else
          {
            selection_code = 16;
          }
        }
        else
        {
          selection_code = 13;
        }
        if ( *(_DWORD *)(a1 + 156) <= selection_code )
          loaded_word_17 = selection_code;
        else
          loaded_word_17 = *(_DWORD *)(a1 + 156);
        saved_loaded_word_2 = loaded_word_17;
      }
      if ( *(_DWORD *)(a1 + 68) )
        saved_loaded_word_2 = 1;
      masked_bits = sub_1401A29F0(
              loaded_word_6,
              loaded_word_7,
              loaded_word_4,
              (__int64)saved_alloca_result_7,
              (__int64)saved_alloca_result_8,
              loaded_word_10,
              (int *)(a1 + 236),
              &call_result_12,
              remaining_amount,
              (int *)&callee_output_word,
              (__int64)saved_alloca_result_12,
              (__int64)saved_alloca_result_9,
              (__int64)saved_alloca_result_13,
              loaded_word_2,
              i,
              a6,
              1,
              *(_DWORD *)(a1 + 96),
              saved_loaded_word_2);
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( *(_DWORD *)(a1 + 96) - 1 <= masked_bits )
          saved_masked_bits = masked_bits;
        else
          saved_masked_bits = *(_DWORD *)(a1 + 96) - 1;
        if ( *(_DWORD *)(a1 + 96) + 1 >= saved_masked_bits )
        {
          if ( *(_DWORD *)(a1 + 96) - 1 <= masked_bits )
            saved_masked_bits_2 = masked_bits;
          else
            saved_masked_bits_2 = *(_DWORD *)(a1 + 96) - 1;
          loaded_word_18 = saved_masked_bits_2;
        }
        else
        {
          loaded_word_18 = *(_DWORD *)(a1 + 96) + 1;
        }
        *(_DWORD *)(a1 + 96) = loaded_word_18;
      }
      else
      {
        *(_DWORD *)(a1 + 96) = masked_bits;
      }
      sub_1401A7710(loaded_word_6, loaded_word_7, loaded_word_4, (__int64)source_buffer, (__int64)saved_alloca_result_5, (__int64)saved_alloca_result_9, a6, loaded_word_2);
      scaled_index_16 = loaded_word_3 * loaded_word_2 + 15LL;
      if ( scaled_index_16 <= loaded_word_3 * loaded_word_2 )
        scaled_index_16 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_17 = alloca(scaled_index_16 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_14 = (int *)alloca_result_17;
      if ( loaded_word_2 == 2 )
        state_address_2 = &saved_alloca_result_4[shifted_bits_4];
      else
        state_address_2 = nullptr;
      sub_1401A4050(
        1u,
        loaded_word_6,
        loaded_word_7,
        loaded_word_4,
        (__int64)saved_alloca_result_4,
        (__int64)state_address_2,
        (__int64)saved_alloca_result_14,
        (__int64)saved_alloca_result,
        (__int64)saved_alloca_result_12,
        saved_shifted_bits,
        *(_DWORD *)(a1 + 84),
        call_result_12,
        *(_DWORD *)(a1 + 236),
        (__int64)saved_alloca_result_2,
        (saved_shifted_bits_11 << 6) - cached_selection_code,
        callee_output_word,
        a6,
        i,
        masked_bits,
        (_DWORD *)(a1 + 80),
        *(_DWORD *)(a1 + 28),
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 72));
      if ( cached_selection_code > 0 )
      {
        comparison_result_13 = *(_DWORD *)(a1 + 120) < 2;
        unused_written_slot_2 = comparison_result_13;
        sub_14019A6D0(a6, comparison_result_13, 1);
      }
      scaled_index_21 = 8 * saved_shifted_bits_11;
      call_result_6 = sub_14019A0A0((__int64)a6);
      sub_1401A7930(loaded_word_6, loaded_word_7, loaded_word_4, (__int64)source_buffer, (__int64)saved_alloca_result_5, (__int64)saved_alloca_result_9, (__int64)saved_alloca_result_13, scaled_index_21 - call_result_6, a6, loaded_word_2);
      crt_memset((void *)(uintptr_t)(state_address), 0, 4LL * loaded_word_5 * loaded_word_3);
      k = 0;
      do
      {
        for ( j = loaded_word_7; j < loaded_word_4; ++j )
        {
          if ( *(float *)&SR_VEC_PTR_LANES(128, saved_alloca_result_5, i32)[loaded_word_3 * k + j] <= 0.5 )
            weighted_sum_7 = *(float *)&SR_VEC_PTR_LANES(128, saved_alloca_result_5, i32)[loaded_word_3 * k + j];
          else
            weighted_sum_7 = 0.5;
          if ( weighted_sum_7 >= -0.5 )
          {
            if ( *(float *)&SR_VEC_PTR_LANES(128, saved_alloca_result_5, i32)[loaded_word_3 * k + j] <= 0.5 )
              scaled_index_20 = SR_VEC_PTR_LANES(128, saved_alloca_result_5, i32)[loaded_word_3 * k + j];
            else
              scaled_index_20 = 1056964608;
            integer_difference_3 = scaled_index_20;
          }
          else
          {
            integer_difference_3 = -1090519040;
          }
          *(_DWORD *)&state_address[2 * loaded_word_3 * k + 2 * j] = integer_difference_3;
        }
        ++k;
      }
      while ( k < loaded_word_2 );
      if ( saved_comparison_result_2 )
      {
        for ( j = 0; j < loaded_word_3 * loaded_word_2; ++j )
          SR_VEC_PTR_LANES(128, source_buffer, i32)[j] = -1042284544;
      }
      *(_DWORD *)(a1 + 108) = remaining_count;
      *(float *)(a1 + 112) = selected_scalar_2;
      *(_DWORD *)(a1 + 116) = loaded_word_11;
      if ( loaded_word_5 == 2 && loaded_word_2 == 1 )
        crt_memcpy((__m128i *)((char *)source_buffer + 4 * loaded_word_3), source_buffer, 4LL * loaded_word_3);
      if ( call_result_8 )
      {
        for ( j = 0; j < loaded_word_3 * loaded_word_5; ++j )
        {
          if ( *(float *)&SR_VEC_PTR_LANES(128, source_buffer, i32)[j] <= *(float *)&SR_VEC_PTR_LANES(128, source_buffer_3, i32)[j] )
            table_value_2 = SR_VEC_PTR_LANES(128, source_buffer, i32)[j];
          else
            table_value_2 = SR_VEC_PTR_LANES(128, source_buffer_3, i32)[j];
          SR_VEC_PTR_LANES(128, source_buffer_3, i32)[j] = table_value_2;
        }
      }
      else
      {
        crt_memcpy(destination_buffer_2, source_buffer_3, 4LL * loaded_word_3 * loaded_word_5);
        crt_memcpy(source_buffer_3, source_buffer, 4LL * loaded_word_3 * loaded_word_5);
      }
      k = 0;
      do
      {
        for ( j = 0; j < loaded_word_7; ++j )
        {
          SR_VEC_PTR_LANES(128, source_buffer, i32)[j + loaded_word_3 * k] = 0;
          SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[j + loaded_word_3 * k] = -1042284544;
          SR_VEC_PTR_LANES(128, source_buffer_3, i32)[j + loaded_word_3 * k] = -1042284544;
        }
        for ( j = loaded_word_4; j < loaded_word_3; ++j )
        {
          SR_VEC_PTR_LANES(128, source_buffer, i32)[j + loaded_word_3 * k] = 0;
          SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[j + loaded_word_3 * k] = -1042284544;
          SR_VEC_PTR_LANES(128, source_buffer_3, i32)[j + loaded_word_3 * k] = -1042284544;
        }
        ++k;
      }
      while ( k < loaded_word_5 );
      if ( call_result_8 || selection_flag_4 )
        ++*(_DWORD *)(a1 + 120);
      else
        *(_DWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 80) = a6[8];
      sub_14019A9C0(a6);
      if ( unknown_libname_997((__int64)a6) )
        return -3;
    }
  }
  return saved_shifted_bits_11; /* original output byte count in EAX */
}

// 14019D9E1: conditional instruction was optimized away because %var_394.4==0

//----- (000000014019F0E0) ----------------------------------------------------
__int64            sub_14019F0E0(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  __int64 call_result;
  unsigned int call_result_2;

  call_result = sub_1401990A0(48000, 960, nullptr);
  call_result_2 = sub_1401AE3C0(a1, call_result, a3, a4);
  if ( call_result_2 )
    return call_result_2;
  a1[8] = sub_1401A0850(a2);
  return 0;
}

//----- (000000014019F150) ----------------------------------------------------
__int64            sub_14019F150(int a1)
{
  __int64 call_result;

  call_result = sub_1401990A0(48000, 960, nullptr);
  return sub_1401B38C0(call_result, a1);
}

//----- (000000014019F190) ----------------------------------------------------
__int64            sub_14019F190(_DWORD *a1, int a2, unsigned int a3)
{
  __int64 call_result;
  unsigned int call_result_2;

  call_result = sub_1401990A0(48000, 960, nullptr);
  call_result_2 = sub_1401B3920(a1, call_result, a3);
  if ( call_result_2 )
    return call_result_2;
  a1[5] = sub_1401A0850(a2);
  if ( a1[5] )
    return 0;
  else
    return 0xFFFFFFFFLL;
}

//----- (000000014019F210) ----------------------------------------------------
__int64            sub_14019F210(__int64 *a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int *a6, int a7)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 float_word;
  void *alloca_result_2;
  unsigned __int64 scaled_index_2;
  void *alloca_result_3;
  unsigned __int64 scaled_index_3;
  void *alloca_result_4;
  int call_result;
  unsigned __int64 scaled_index_4;
  void *alloca_result_5;
  unsigned __int64 scaled_index_5;
  void *alloca_result_6;
       __m128i *source_buffer;
  unsigned __int64 scaled_index_6;
  void *alloca_result_7;
  unsigned __int64 scaled_index_7;
  void *alloca_result_8;
  int call_result_2;
  int loaded_word;
  int j;
  int k;
  int loaded_word_2;
  int i;
  int record_word_offset;
  int loaded_word_3;
  int record_word_offset_2;
  __int64 loaded_word_4;
  void *Src;
  int loaded_word_5;
  int loaded_word_6;
  int loaded_word_7;
  int loaded_word_8;
  int shifted_bits;
  BOOL call_result_3;
  int running_total;
  int call_result_4;
  int loaded_word_9;
  void *source_buffer_2;
  int cached_integer_difference;
  int remaining_amount;
  int cached_integer_difference_2;
  int cached_selection_code;
  int loaded_word_10;
  int shifted_bits_2;
  float weighted_sum;
  int masked_bits;
  int shifted_bits_3;
  float scaled_value;
  void *destination_buffer;
  int saved_shifted_bits;
  int saved_shifted_bits_2;
  int scaled_index_8;
  int cached_scaled_index;
  int integer_difference;
  int masked_bits_2;
  int selection_code;
  int selection_flag;
  int selection_flag_2;
  int masked_bits_3;
  int saved_shifted_bits_3;
  int call_result_5;
  int loaded_word_11;
  int loaded_word_12;
  float weighted_sum_2;
  int loaded_word_13;
  BOOL comparison_result;
  int loaded_word_14;
  int call_result_6;
  int call_result_7;
  int *saved_alloca_result;
  int unused_written_slot;
  BOOL call_result_8;
  int shifted_bits_4;
  int saved_masked_bits;
  int unused_written_slot_2;
  int masked_bits_4;
  unsigned int callee_output_word;
  int record_word_offset_3;
  int unused_written_slot_3;
  int unused_written_slot_4;
  int unused_written_slot_5;
  int call_result_9;
  int *saved_alloca_result_2;
  int *saved_alloca_result_3;
  int *saved_alloca_result_4;
  char *float_word_2;
  __int64 scratch_buffer[2];
  __int64 loaded_word_15;
  int *saved_alloca_result_5;
  int *p_j;
  int *state_address;
  int *saved_alloca_result_6;
  int *saved_alloca_result_7;
  void *scratch_buffer_2[2];
  char *byte_cursor;
  __int64 unused_written_slot_6;
  __int64 unused_written_slot_7;
  __m128i *table_value;
  _DWORD scratch_buffer_3[14];
  __int64 unused_local;
  int loaded_word_16;

  loaded_word_8 = *((_DWORD *)a1 + 3);
  selection_flag = 0;
  selection_flag_2 = 0;
  call_result_5 = 0;
  loaded_word_3 = *((_DWORD *)a1 + 4);
  loaded_word_4 = *a1;
  loaded_word_2 = *(_DWORD *)(loaded_word_4 + 8);
  loaded_word_9 = *(_DWORD *)(loaded_word_4 + 4);
  loaded_word_15 = *(_QWORD *)(loaded_word_4 + 32);
  loaded_word_5 = *((_DWORD *)a1 + 6);
  loaded_word_7 = *((_DWORD *)a1 + 7);
  loaded_word_16 = *((_DWORD *)a1 + 5) * a5;
  byte_cursor = (char *)a1 + 4 * loaded_word_8 * (loaded_word_9 + 2048) + 96;
  Src = &byte_cursor[96 * loaded_word_8];
  source_buffer_2 = (char *)Src + 8 * loaded_word_2;
  destination_buffer = (char *)source_buffer_2 + 8 * loaded_word_2;
  float_word_2 = (char *)destination_buffer + 8 * loaded_word_2;
  for ( i = 0; i <= *(_DWORD *)(loaded_word_4 + 40); ++i )
  {
    unused_written_slot_6 = loaded_word_4;
    if ( *(_DWORD *)(loaded_word_4 + 48) << i == loaded_word_16 )
      break;
  }
  if ( i > *(_DWORD *)(loaded_word_4 + 40) )
    return (unsigned int)-1; /* 0x14019F3AB: mov eax, 0xffffffff */
  {
    unused_written_slot_3 = 1;
    shifted_bits_3 = 1 << i;
    if ( (unsigned int)a3 >= 0x4FC || !a4 )
      return (unsigned int)-1; /* 0x14019F3F3: mov eax, 0xffffffff */
    {
      {
        loaded_word_6 = *(_DWORD *)(loaded_word_4 + 48) * shifted_bits_3;
        k = 0;
        do
        {
          scratch_buffer_2[k] = (char *)a1 + 4 * (loaded_word_9 + 2048) * k + 96;
          scratch_buffer[k] = (__int64)scratch_buffer_2[k] - 4 * loaded_word_6 + 0x2000;
          ++k;
        }
        while ( k < loaded_word_8 );
        loaded_word_10 = loaded_word_7;
        if ( loaded_word_7 > *(_DWORD *)(loaded_word_4 + 12) )
          loaded_word_10 = *(_DWORD *)(loaded_word_4 + 12);
        if ( a2 && a3 > 1 )
        {
          comparison_result = *((_DWORD *)a1 + 14) != 0;
          *((_DWORD *)a1 + 15) = comparison_result;
          if ( !a6 )
          {
            sub_14019AC50(scratch_buffer_3, a2, a3);
            a6 = scratch_buffer_3;
          }
          if ( loaded_word_3 == 1 )
          {
            for ( j = 0; j < loaded_word_2; ++j )
            {
              if ( *((float *)Src + j) <= *((float *)Src + j + loaded_word_2) )
                loaded_word_14 = *((_DWORD *)Src + j + loaded_word_2);
              else
                loaded_word_14 = *((_DWORD *)Src + j);
              *((_DWORD *)Src + j) = loaded_word_14;
            }
          }
          record_word_offset_2 = 8 * a3;
          record_word_offset = sub_14019A0A0((__int64)a6);
          if ( record_word_offset < 8 * a3 )
            call_result_4 = record_word_offset == 1 && sub_14019AF20(a6, 15);
          else
            call_result_4 = 1;
          if ( call_result_4 )
          {
            record_word_offset = 8 * a3;
            a6[6] += 8 * a3 - sub_14019A0A0((__int64)a6);
          }
          weighted_sum = 0.0;
          shifted_bits_2 = 0;
          masked_bits = 0;
          if ( !loaded_word_5 && record_word_offset + 16 <= record_word_offset_2 )
          {
            if ( sub_14019AF20(a6, 1) )
            {
              call_result_6 = sub_14019B0A0(a6, 6);
              unused_written_slot_4 = 16;
              unused_written_slot_5 = 16 << call_result_6;
              shifted_bits_2 = (16 << call_result_6) + sub_14019B1C0(a6, call_result_6 + 4) - 1;
              call_result_9 = sub_14019B1C0(a6, 3u);
              if ( (int)(sub_14019A0A0((__int64)a6) + 2) <= record_word_offset_2 )
                masked_bits = sub_14019AFE0(a6, (__int64)&unk_140279CE8, 2);
              weighted_sum = 0.09375 * (float)(call_result_9 + 1);
            }
            record_word_offset = sub_14019A0A0((__int64)a6);
          }
          if ( i <= 0 || record_word_offset + 3 > record_word_offset_2 )
          {
            call_result_3 = 0;
          }
          else
          {
            call_result_3 = sub_14019AF20(a6, 3);
            record_word_offset = sub_14019A0A0((__int64)a6);
          }
          if ( call_result_3 )
            saved_shifted_bits_3 = shifted_bits_3;
          else
            saved_shifted_bits_3 = 0;
          call_result_7 = record_word_offset + 3 <= record_word_offset_2 && sub_14019AF20(a6, 3);
          unused_written_slot = call_result_7;
          sub_1401A7B50(loaded_word_4, loaded_word_5, loaded_word_7, (__int64)Src, call_result_7, a6, loaded_word_3, i);
          scaled_index = 4LL * loaded_word_2 + 15;
          if ( scaled_index <= 4LL * loaded_word_2 )
            scaled_index = 0xFFFFFFFFFFFFFF0LL;
          alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
          p_j = alloca_result;
          sub_1401B4530(loaded_word_5, loaded_word_7, call_result_3, (__int64)&j, i, a6);
          record_word_offset = sub_14019A0A0((__int64)a6);
          masked_bits_3 = 2;
          if ( record_word_offset + 4 <= record_word_offset_2 )
            masked_bits_3 = sub_14019AFE0(a6, (__int64)&unk_140279CE4, 5);
          float_word = 4LL * loaded_word_2 + 15;
          if ( float_word <= 4LL * loaded_word_2 )
            float_word = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_2 = alloca(float_word & 0xFFFFFFFFFFFFFFF0uLL);
          saved_alloca_result_2 = alloca_result_2;
          sub_1401A12E0(loaded_word_4, (__int64)&j, i, loaded_word_3);
          scaled_index_2 = 4LL * loaded_word_2 + 15;
          if ( scaled_index_2 <= 4LL * loaded_word_2 )
            scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_3 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
          saved_alloca_result_5 = alloca_result_3;
          cached_integer_difference = 6;
          record_word_offset_2 *= 8;
          record_word_offset = sub_14019A0E0((__int64)a6);
          for ( j = loaded_word_5; j < loaded_word_7; ++j )
          {
            shifted_bits = ((*(__int16 *)(loaded_word_15 + 2LL * (j + 1)) - *(__int16 *)(loaded_word_15 + 2LL * j)) * loaded_word_3) << i;
            if ( shifted_bits >= 48 )
              saved_shifted_bits = shifted_bits;
            else
              saved_shifted_bits = 48;
            if ( 8 * shifted_bits >= saved_shifted_bits )
            {
              if ( shifted_bits >= 48 )
                saved_shifted_bits_2 = shifted_bits;
              else
                saved_shifted_bits_2 = 48;
              scaled_index_8 = saved_shifted_bits_2;
            }
            else
            {
              scaled_index_8 = 8 * shifted_bits;
            }
            cached_scaled_index = scaled_index_8;
            cached_integer_difference_2 = cached_integer_difference;
            running_total = 0;
            while ( record_word_offset + 8 * cached_integer_difference_2 < record_word_offset_2 )
            {
              if ( running_total >= saved_alloca_result_2[j] )
                break;
              call_result_8 = sub_14019AF20(a6, cached_integer_difference_2);
              record_word_offset = sub_14019A0E0((__int64)a6);
              if ( !call_result_8 )
                break;
              running_total += cached_scaled_index;
              record_word_offset_2 -= cached_scaled_index;
              cached_integer_difference_2 = 1;
            }
            saved_alloca_result_5[j] = running_total;
            if ( running_total > 0 )
            {
              if ( cached_integer_difference - 1 >= 2 )
                integer_difference = cached_integer_difference - 1;
              else
                integer_difference = 2;
              cached_integer_difference = integer_difference;
            }
          }
          scaled_index_3 = 4LL * loaded_word_2 + 15;
          if ( scaled_index_3 <= 4LL * loaded_word_2 )
            scaled_index_3 = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_4 = alloca(scaled_index_3 & 0xFFFFFFFFFFFFFFF0uLL);
          saved_alloca_result_3 = alloca_result_4;
          if ( record_word_offset + 48 > record_word_offset_2 )
            masked_bits_2 = 5;
          else
            masked_bits_2 = sub_14019AFE0(a6, (__int64)&unk_14027BB88, 7);
          saved_masked_bits = masked_bits_2;
          shifted_bits_4 = a3 << 6;
          call_result = sub_14019A0E0((__int64)a6);
          remaining_amount = shifted_bits_4 - call_result - 1;
          if ( call_result_3 && i >= 2 && remaining_amount >= 8 * i + 16 )
            selection_code = 8;
          else
            selection_code = 0;
          cached_selection_code = selection_code;
          remaining_amount -= selection_code;
          scaled_index_4 = 4LL * loaded_word_2 + 15;
          if ( scaled_index_4 <= 4LL * loaded_word_2 )
            scaled_index_4 = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_5 = alloca(scaled_index_4 & 0xFFFFFFFFFFFFFFF0uLL);
          saved_alloca_result_4 = alloca_result_5;
          scaled_index_5 = 4LL * loaded_word_2 + 15;
          if ( scaled_index_5 <= 4LL * loaded_word_2 )
            scaled_index_5 = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_6 = alloca(scaled_index_5 & 0xFFFFFFFFFFFFFFF0uLL);
          saved_alloca_result_6 = alloca_result_6;
          masked_bits_4 = sub_1401A29F0(
                  loaded_word_4,
                  loaded_word_5,
                  loaded_word_7,
                  (__int64)saved_alloca_result_5,
                  (__int64)saved_alloca_result_2,
                  saved_masked_bits,
                  &selection_flag,
                  &selection_flag_2,
                  remaining_amount,
                  (int *)&callee_output_word,
                  (__int64)saved_alloca_result_4,
                  (__int64)saved_alloca_result_3,
                  (__int64)&j,
                  loaded_word_3,
                  i,
                  a6,
                  0,
                  0,
                  0);
          sub_1401A7EC0(loaded_word_4, loaded_word_5, loaded_word_7, (__int64)Src, (__int64)saved_alloca_result_3, a6, loaded_word_3);
          k = 0;
          do
          {
            unused_written_slot_2 = 2048 - loaded_word_6;
            source_buffer = (     __m128i *)((char *)scratch_buffer_2[k] + 4 * loaded_word_6);
            unused_written_slot_7 = k;
            crt_memcpy((__m128i *)scratch_buffer_2[k++], source_buffer, 4LL * (loaded_word_9 / 2 + 2048 - loaded_word_6));
          }
          while ( k < loaded_word_8 );
          scaled_index_6 = loaded_word_2 * loaded_word_3 + 15LL;
          if ( scaled_index_6 <= loaded_word_2 * loaded_word_3 )
            scaled_index_6 = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_7 = alloca(scaled_index_6 & 0xFFFFFFFFFFFFFFF0uLL);
          saved_alloca_result_7 = alloca_result_7;
          scaled_index_7 = 4LL * loaded_word_6 * loaded_word_3 + 15;
          if ( scaled_index_7 <= 4LL * loaded_word_6 * loaded_word_3 )
            scaled_index_7 = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_8 = alloca(scaled_index_7 & 0xFFFFFFFFFFFFFFF0uLL);
          saved_alloca_result = alloca_result_8;
          if ( loaded_word_3 == 2 )
            state_address = &saved_alloca_result[loaded_word_6];
          else
            state_address = nullptr;
          sub_1401A4050(
            0,
            loaded_word_4,
            loaded_word_5,
            loaded_word_7,
            (__int64)saved_alloca_result,
            (__int64)state_address,
            (__int64)saved_alloca_result_7,
            0,
            (__int64)saved_alloca_result_4,
            saved_shifted_bits_3,
            masked_bits_3,
            selection_flag_2,
            selection_flag,
            (__int64)p_j,
            (a3 << 6) - cached_selection_code,
            callee_output_word,
            a6,
            i,
            masked_bits_4,
            (_DWORD *)a1 + 11,
            0,
            *((_DWORD *)a1 + 10),
            *((_DWORD *)a1 + 9));
          if ( cached_selection_code > 0 )
            call_result_5 = sub_14019B1C0(a6, 1u);
          record_word_offset_3 = 8 * a3;
          call_result_2 = sub_14019A0A0((__int64)a6);
          sub_1401A8000(loaded_word_4, loaded_word_5, loaded_word_7, (__int64)Src, (__int64)saved_alloca_result_3, (__int64)saved_alloca_result_6, record_word_offset_3 - call_result_2, a6, loaded_word_3);
          if ( call_result_5 )
            sub_1401A5710(
              loaded_word_4,
              (__int64)saved_alloca_result,
              (__int64)saved_alloca_result_7,
              i,
              loaded_word_3,
              loaded_word_6,
              loaded_word_5,
              loaded_word_7,
              (__int64)Src,
              (__int64)source_buffer_2,
              (__int64)destination_buffer,
              (__int64)saved_alloca_result_4,
              *((_DWORD *)a1 + 11));
          if ( call_result_4 )
          {
            for ( j = 0; j < loaded_word_2 * loaded_word_3; ++j )
              *((_DWORD *)Src + j) = -1042284544;
          }
          sub_1401B3E40(loaded_word_4, (__int64)saved_alloca_result, scratch_buffer, (__int64)Src, loaded_word_5, loaded_word_10, loaded_word_3, loaded_word_8, call_result_3, i, *((_DWORD *)a1 + 5), call_result_4);
          k = 0;
          do
          {
            if ( *((int *)a1 + 16) <= 15 )
              loaded_word_11 = 15;
            else
              loaded_word_11 = *((_DWORD *)a1 + 16);
            *((_DWORD *)a1 + 16) = loaded_word_11;
            if ( *((int *)a1 + 17) <= 15 )
              loaded_word_12 = 15;
            else
              loaded_word_12 = *((_DWORD *)a1 + 17);
            *((_DWORD *)a1 + 17) = loaded_word_12;
            sub_1401A0C20(
              (__m128i *)scratch_buffer[k],
              (     __m128i *)scratch_buffer[k],
              *((_DWORD *)a1 + 17),
              *((_DWORD *)a1 + 16),
              *(_DWORD *)(loaded_word_4 + 48),
              *((float *)a1 + 19),
              *((float *)a1 + 18),
              *((_DWORD *)a1 + 21),
              *((_DWORD *)a1 + 20),
              *(_QWORD *)(loaded_word_4 + 72),
              loaded_word_9);
            if ( i )
            {
              loaded_word = *(_DWORD *)(loaded_word_4 + 48);
              table_value = (__m128i *)(scratch_buffer[k] + 4LL * loaded_word);
              sub_1401A0C20(
                table_value,
                table_value,
                *((_DWORD *)a1 + 16),
                shifted_bits_2,
                loaded_word_6 - loaded_word,
                *((float *)a1 + 18),
                weighted_sum,
                *((_DWORD *)a1 + 20),
                masked_bits,
                *(_QWORD *)(loaded_word_4 + 72),
                loaded_word_9);
            }
            ++k;
          }
          while ( k < loaded_word_8 );
          *((_DWORD *)a1 + 17) = *((_DWORD *)a1 + 16);
          *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 18);
          *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          *((_DWORD *)a1 + 16) = shifted_bits_2;
          *((float *)a1 + 18) = weighted_sum;
          *((_DWORD *)a1 + 20) = masked_bits;
          if ( i )
          {
            *((_DWORD *)a1 + 17) = *((_DWORD *)a1 + 16);
            *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 18);
            *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          }
          if ( loaded_word_3 == 1 )
            crt_memcpy((__m128i *)((char *)Src + 4 * loaded_word_2), (     __m128i *)Src, 4LL * loaded_word_2);
          if ( call_result_3 )
          {
            for ( j = 0; j < 2 * loaded_word_2; ++j )
            {
              if ( *((float *)Src + j) <= *((float *)source_buffer_2 + j) )
                loaded_word_13 = *((_DWORD *)Src + j);
              else
                loaded_word_13 = *((_DWORD *)source_buffer_2 + j);
              *((_DWORD *)source_buffer_2 + j) = loaded_word_13;
            }
          }
          else
          {
            crt_memcpy((__m128i *)destination_buffer, (     __m128i *)source_buffer_2, 8LL * loaded_word_2);
            crt_memcpy((__m128i *)source_buffer_2, (     __m128i *)Src, 8LL * loaded_word_2);
            if ( *((int *)a1 + 14) >= 10 )
              scaled_value = 1.0;
            else
              scaled_value = (float)shifted_bits_3 * 0.001;
            for ( j = 0; j < 2 * loaded_word_2; ++j )
            {
              if ( *((float *)Src + j) <= (float)(*(float *)&float_word_2[4 * j] + scaled_value) )
                weighted_sum_2 = *((float *)Src + j);
              else
                weighted_sum_2 = *(float *)&float_word_2[4 * j] + scaled_value;
              *(float *)&float_word_2[4 * j] = weighted_sum_2;
            }
          }
          for ( k = 0; k < 2; ++k )
          {
            for ( j = 0; j < loaded_word_5; ++j )
            {
              *((_DWORD *)Src + j + loaded_word_2 * k) = 0;
              *((_DWORD *)destination_buffer + j + loaded_word_2 * k) = -1042284544;
              *((_DWORD *)source_buffer_2 + j + loaded_word_2 * k) = -1042284544;
            }
            for ( j = loaded_word_7; j < loaded_word_2; ++j )
            {
              *((_DWORD *)Src + j + loaded_word_2 * k) = 0;
              *((_DWORD *)destination_buffer + j + loaded_word_2 * k) = -1042284544;
              *((_DWORD *)source_buffer_2 + j + loaded_word_2 * k) = -1042284544;
            }
          }
          *((_DWORD *)a1 + 11) = a6[8];
          sub_1401B3BD0(scratch_buffer, a4, loaded_word_6, loaded_word_8, *((_DWORD *)a1 + 5), (float *)(loaded_word_4 + 16), (float *)a1 + 22, a7);
          *((_DWORD *)a1 + 14) = 0;
          if ( (int)sub_14019A0A0((__int64)a6) > 8 * a3 )
            return (unsigned int)-3; /* 0x1401A07ED: mov eax, 0xfffffffd */
          if ( (unsigned int)unknown_libname_997((__int64)a6) )
            *((_DWORD *)a1 + 12) = 1;
        }
        else
        {
          sub_1401B4830((__int64)a1, loaded_word_6, i);
          sub_1401B3BD0(scratch_buffer, a4, loaded_word_6, loaded_word_8, *((_DWORD *)a1 + 5), (float *)(loaded_word_4 + 16), (float *)a1 + 22, a7);
        }
      }
    }
  }
  return (unsigned int)(a5 / (int)*((_DWORD *)a1 + 5)); /* 0x1401A0820: idiv dword ptr [rcx + 0x14] with eax = [rbp + 0x220] */
}
