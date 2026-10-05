/* Address: 0x140198e20 | Name: sub_140198E20 | Size: 25 bytes */
__int64 sub_140198E20()
{
  __int64 result; // rax

  result = SteamAPI_Shutdown();
  dword_140404A6C[19063857] = 0;
  return result;
}

