/* Address: 0x1402484bc | Name: sub_1402484BC | Size: 119 bytes */
__int64 __fastcall sub_1402484BC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned int)sub_140260D80(*(_QWORD *)(a1 + 16) + 600LL, 85, a2, a3)
    || (result = sub_140260D80(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, a3), (_DWORD)result) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140248532LL);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}

