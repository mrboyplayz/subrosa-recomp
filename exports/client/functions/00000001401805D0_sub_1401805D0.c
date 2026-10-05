/* Address: 0x1401805d0 | Name: sub_1401805D0 | Size: 101 bytes */
__int64 __fastcall sub_1401805D0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  result = (__int64)sub_1401803B0(&v9, a1, a2);
  v7 = v4;
  v9 = *(_OWORD *)result;
  if ( (int)v4 > 0 )
  {
    v8 = 0;
    do
    {
      result = HIDWORD(v9);
      if ( SDWORD2(v9) >= SHIDWORD(v9) )
        break;
      result = sub_14017F5B0((__int64)&v9);
      *(_DWORD *)(a4 + 4 * v8++) = result;
    }
    while ( v8 < v7 );
  }
  return result;
}

