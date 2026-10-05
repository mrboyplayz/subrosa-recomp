/* Address: 0x140235d88 | Name: unknown_libname_657 | Size: 32 bytes */
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_657(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  result = (unsigned int)(v1 - 3);
  if ( (result & 0xFFFFFFFA) == 0 && v1 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  return result;
}

