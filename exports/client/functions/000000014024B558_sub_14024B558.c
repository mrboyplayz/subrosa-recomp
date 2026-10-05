/* Address: 0x14024b558 | Name: sub_14024B558 | Size: 92 bytes */
__int64 __fastcall sub_14024B558(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v4 = j__malloc_base(2 * a2);
  *(_QWORD *)(a1 + 16) = v4;
  result = v4 == 0 ? 0xC : 0;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = a2;
    return 0;
  }
  return result;
}

