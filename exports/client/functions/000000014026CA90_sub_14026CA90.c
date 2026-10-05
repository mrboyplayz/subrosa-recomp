/* Address: 0x14026ca90 | Name: sub_14026CA90 | Size: 45 bytes */
_BOOL8 __fastcall MEMORY[0x14026CA90](__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = false;
  if ( *(_WORD *)a1 == 23117 )
  {
    v1 = a1 + *(int *)(a1 + 60);
    if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 523 )
      return true;
  }
  return result;
}

