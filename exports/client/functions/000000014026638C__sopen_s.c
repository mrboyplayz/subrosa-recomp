/* Address: 0x14026638c | Name: _sopen_s | Size: 50 bytes */
__int64 __fastcall sopen_s(int a1, int a2, int a3, int a4, unsigned int PermissionMode)
{
  return common_sopen_dispatch<char>(a2, a3, a4, PermissionMode, a1);
}

