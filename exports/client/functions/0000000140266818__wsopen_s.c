/* Address: 0x140266818 | Name: _wsopen_s | Size: 50 bytes */
__int64 __fastcall wsopen_s(unsigned int *a1, __int64 a2, unsigned int a3, int a4, int PermissionFlag)
{
  return common_sopen_dispatch<wchar_t>(a2, a3, a4, PermissionFlag, a1, 1);
}

