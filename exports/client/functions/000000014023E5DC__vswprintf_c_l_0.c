/* Address: 0x14023e5dc | Name: _vswprintf_c_l_0 | Size: 98 bytes */
__int64 __fastcall vswprintf_c_l_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 ArgList)
{
  unsigned int *v9; // rax
  __int64 result; // rax

  v9 = sub_140001BB0();
  result = sub_140225120(*(_QWORD *)v9, a1, a2, a3, a4, ArgList);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

