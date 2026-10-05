/* Address: 0x1401beb10 | Name: sub_1401BEB10 | Size: 158 bytes */
__int64 __fastcall sub_1401BEB10(_DWORD *a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax

  if ( a1[579] != a1[1069] )
  {
    sub_1401BEA90(a1);
    a1[1069] = a1[579];
  }
  if ( !a4 )
    return sub_1401D9A80(a1, a2);
  sub_1401D9E20(a1, a2, a3, a5);
  result = (unsigned int)(a1[1046] + 1);
  a1[1046] = result;
  return result;
}

