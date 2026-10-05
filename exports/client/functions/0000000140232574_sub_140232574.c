/* Address: 0x140232574 | Name: sub_140232574 | Size: 76 bytes */
__int64 __fastcall sub_140232574(__int64 a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = v1;
  if ( *(_QWORD *)(a1 + 8) && v1 > *(_QWORD *)(a1 + 8) )
    return 0;
  v2 = *(_QWORD **)a1;
  result = j__fgetwc_nolock(**(_QWORD **)a1);
  if ( (_WORD)result == 0xFFFF )
    return 0;
  ++v2[1];
  return result;
}

