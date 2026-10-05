/* Address: 0x140248534 | Name: sub_140248534 | Size: 63 bytes */
__int64 __fastcall sub_140248534(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_140260D80(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, a3);
  if ( (_DWORD)result )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140248572LL);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}

