/* Address: 0x140001d00 | Name: _vswprintf_c_l | Size: 100 bytes */
__int64 __fastcall vswprintf_c_l(int a1, int a2, int a3, __int64 a4, __int64 ArgList)
{
  _QWORD *v9; // rax
  __int64 result; // rax

  v9 = (_QWORD *)sub_140001BB0();
  result = sub_1402250BC(*v9, a1, a2, a3, a4, ArgList);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

