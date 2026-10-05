/* Address: 0x1401986d0 | Name: sub_1401986D0 | Size: 39 bytes */
__int64 __fastcall sub_1401986D0(__int64 *a1)
{
  unsigned int HSteamUser; // eax
  __int64 result; // rax

  HSteamUser = SteamAPI_GetHSteamUser();
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser, "SteamUser020");
  *a1 = result;
  return result;
}

