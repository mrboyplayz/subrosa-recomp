/* Address: 0x140198610 | Name: sub_140198610 | Size: 39 bytes */
__int64 __fastcall sub_140198610(__int64 *a1)
{
  unsigned int HSteamUser; // eax
  __int64 result; // rax

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "STEAMAPPS_INTERFACE_VERSION008");
  *a1 = result;
  return result;
}

