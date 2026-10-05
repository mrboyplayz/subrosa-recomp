/* Address: 0x1402454ec | Name: ?is_managed_app@@YA_NXZ_0 | Size: 82 bytes */
bool is_managed_app()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  bool result; // al

  v0 = ((__int64 (__fastcall *)(_QWORD))GetModuleHandleW)(0);
  result = false;
  if ( v0 )
  {
    if ( *(_WORD *)v0 == 23117 )
    {
      v1 = v0 + *(int *)(v0 + 60);
      if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 523 && *(_DWORD *)(v1 + 132) > 0xEu && *(_DWORD *)(v1 + 248) )
        return true;
    }
  }
  return result;
}

