/* Address: 0x140001c90 | Name: sub_140001C90 | Size: 101 bytes */
__int64 __fastcall sub_140001C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  __int64 result; // rax

  v8 = (_QWORD *)sub_140001BB0();
  result = sub_1402250AC(*v8 | 1LL, a1, -1, a2, a3, a4);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

