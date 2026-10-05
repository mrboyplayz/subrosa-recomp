/* Address: 0x1401986a0 | Name: sub_1401986A0 | Size: 39 bytes */
__int64 __fastcall sub_1401986A0(__int64 *a1)
{
  unsigned int HSteamUser; // eax
  __int64 result; // rax

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamNetworking006");
  *a1 = result;
  return result;
}

