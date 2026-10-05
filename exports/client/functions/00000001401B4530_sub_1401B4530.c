/* Address: 0x1401b4530 | Name: sub_1401B4530 | Size: 566 bytes */
__int64 __fastcall sub_1401B4530(int a1, signed int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+24h] [rbp-34h]
  unsigned int v10; // [rsp+28h] [rbp-30h]
  unsigned int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+2Ch] [rbp-2Ch]
  int v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+34h] [rbp-24h]
  int v15; // [rsp+38h] [rbp-20h]
  BOOL v16; // [rsp+3Ch] [rbp-1Ch]
  int v17; // [rsp+40h] [rbp-18h]
  BOOL v18; // [rsp+48h] [rbp-10h]

  v10 = 8 * *(_DWORD *)(a6 + 8);
  v14 = sub_14019A0A0(a6);
  if ( a3 )
    v15 = 2;
  else
    v15 = 4;
  v12 = v15;
  v16 = a5 > 0 && v14 + v15 + 1 <= v10;
  v11 = v10 - v16;
  v9 = 0;
  v13 = 0;
  for ( i = a1; i < a2; ++i )
  {
    if ( v12 + v14 <= v11 )
    {
      v9 ^= sub_14019AF20(a6, v12);
      v14 = sub_14019A0A0(a6);
      v13 |= v9;
    }
    *(_DWORD *)(a4 + 4LL * i) = v9;
    if ( a3 )
      v17 = 4;
    else
      v17 = 5;
    v12 = v17;
  }
  v18 = 0;
  if ( v16 && byte_14027BB98[8 * a5 + 4 * a3 + v13] != byte_14027BB98[8 * a5 + 2 + 4 * a3 + v13] )
    v18 = sub_14019AF20(a6, 1);
  for ( j = a1; ; ++j )
  {
    result = (unsigned int)a2;
    if ( j >= a2 )
      break;
    *(_DWORD *)(a4 + 4LL * j) = byte_14027BB98[8 * a5 + 4 * a3 + 2 * v18 + *(_DWORD *)(a4 + 4LL * j)];
  }
  return result;
}

