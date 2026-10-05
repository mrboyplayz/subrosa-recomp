/* Address: 0x14026bb2c | Name: __acrt_CompareStringW | Size: 189 bytes */
__int64 __fastcall _acrt_CompareStringW(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  int v10; // eax
  __int64 result; // rax
  int v12; // ebx

  v6 = a4;
  if ( a4 > 0 )
    v6 = MEMORY[0x140254F48](a3, a4);
  v10 = a6;
  if ( a6 > 0 )
    v10 = MEMORY[0x140254F48](a5, a6);
  if ( v6 && v10 )
    return sub_14024EDE0(a1, a2, a3, v6, a5, v10, 0, 0, 0);
  v12 = v6 - v10;
  result = ((v12 >> 31) & 0xFFFFFFFE) + 3;
  if ( !v12 )
    return 2;
  return result;
}

