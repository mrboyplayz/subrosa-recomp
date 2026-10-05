/* Address: 0x140198640 | Name: sub_140198640 | Size: 39 bytes */
__int64 __fastcall sub_140198640(__int64 *a1)
{
  unsigned int HSteamUser; // eax
  __int64 result; // rax

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamFriends017");
  *a1 = result;
  return result;
}

