/* Address: 0x140232658 | Name: sub_140232658 | Size: 37 bytes */
__int64 __fastcall sub_140232658(_QWORD *a1)
{
  __int64 result; // rax

  result = j__fgetwc_nolock(*a1);
  if ( (_WORD)result != 0xFFFF )
    ++a1[1];
  return result;
}

