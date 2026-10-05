/* Address: 0x14010e080 | Name: sub_14010E080 | Size: 78 bytes */
__int64 __fastcall sub_14010E080(_DWORD *a1, char *a2, int a3, int a4)
{
  __int64 result; // rax

  if ( a4 )
    return sub_1400920F0(a3, "%s%d\r\n", a2, *a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    result = sub_1400A3D70();
    *a1 = result;
  }
  dword_140404A6C[293250413] = 0;
  return result;
}

