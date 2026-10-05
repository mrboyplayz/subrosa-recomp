/* Address: 0x14024b4cc | Name: sub_14024B4CC | Size: 91 bytes */
__int64 __fastcall sub_14024B4CC(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v4 = j__malloc_base(a2);
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

