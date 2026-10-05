/* Address: 0x1401b0110 | Name: sub_1401B0110 | Size: 607 bytes */
__int64 __fastcall sub_1401B0110(int a1, signed int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+24h] [rbp-34h]
  unsigned int v11; // [rsp+28h] [rbp-30h]
  unsigned int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+34h] [rbp-24h]
  int v16; // [rsp+38h] [rbp-20h]
  BOOL v17; // [rsp+3Ch] [rbp-1Ch]
  int v18; // [rsp+40h] [rbp-18h]

  v11 = 8 * *(_DWORD *)(a7 + 8);
  v15 = sub_14019A0A0(a7);
  if ( a3 )
    v16 = 2;
  else
    v16 = 4;
  v14 = v16;
  v17 = a5 > 0 && v15 + v16 + 1 <= v11;
  v12 = v11 - v17;
  v10 = 0;
  v13 = 0;
  for ( i = a1; i < a2; ++i )
  {
    if ( v14 + v15 > v12 )
    {
      *(_DWORD *)(a4 + 4LL * i) = v13;
    }
    else
    {
      sub_14019A450(a7, v13 ^ *(_DWORD *)(a4 + 4LL * i), v14);
      v15 = sub_14019A0A0(a7);
      v13 = *(_DWORD *)(a4 + 4LL * i);
      v10 |= v13;
    }
    if ( a3 )
      v18 = 4;
    else
      v18 = 5;
    v14 = v18;
  }
  if ( !v17 || byte_14027BB98[8 * a5 + 4 * a3 + v10] == byte_14027BB98[8 * a5 + 2 + 4 * a3 + v10] )
    a6 = 0;
  else
    sub_14019A450(a7, a6, 1);
  for ( j = a1; ; ++j )
  {
    result = (unsigned int)a2;
    if ( j >= a2 )
      break;
    *(_DWORD *)(a4 + 4LL * j) = byte_14027BB98[8 * a5 + 4 * a3 + 2 * a6 + *(_DWORD *)(a4 + 4LL * j)];
  }
  return result;
}

