/* Address: 0x140001c20 | Name: sub_140001C20 | Size: 104 bytes */
__int64 __fastcall sub_140001C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // rax
  __int64 result; // rax

  v9 = (_QWORD *)sub_140001BB0();
  result = sub_1402250AC(*v9 | 1LL, a1, a2, a3, a4, a5);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

