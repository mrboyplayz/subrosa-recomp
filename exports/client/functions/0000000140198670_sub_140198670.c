/* Address: 0x140198670 | Name: sub_140198670 | Size: 39 bytes */
__int64 __fastcall sub_140198670(__int64 *a1)
{
  unsigned int HSteamUser; // eax
  __int64 result; // rax

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamMatchMaking009");
  *a1 = result;
  return result;
}

