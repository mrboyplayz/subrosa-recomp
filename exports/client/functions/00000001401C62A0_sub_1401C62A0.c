/* Address: 0x1401c62a0 | Name: sub_1401C62A0 | Size: 492 bytes */
__int64 __fastcall sub_1401C62A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-38h]
  int v8; // [rsp+4h] [rbp-34h]
  int v9; // [rsp+4h] [rbp-34h]
  int v10; // [rsp+8h] [rbp-30h]
  int v11; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+Ch] [rbp-2Ch]
  int v13; // [rsp+Ch] [rbp-2Ch]
  int i; // [rsp+10h] [rbp-28h]
  int v15; // [rsp+18h] [rbp-20h]
  int v16; // [rsp+1Ch] [rbp-1Ch]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    v12 = 0;
    v10 = 0;
    for ( j = a6 - 2; j >= 0; j -= 2 )
    {
      v8 = *(__int16 *)(a4 + 2LL * (j + 1))
         * (__int16)(*(_WORD *)(a2 + 2LL * (j + 1)) - (*(unsigned __int8 *)(a3 + j + 1) << 7));
      if ( v8 - (v10 >> 1) <= 0 )
        v15 = (v10 >> 1) - v8;
      else
        v15 = v8 - (v10 >> 1);
      v13 = v15 + v12;
      v11 = *(__int16 *)(a4 + 2LL * (j + 1))
          * (__int16)(*(_WORD *)(a2 + 2LL * (j + 1)) - (*(unsigned __int8 *)(a3 + j + 1) << 7));
      v9 = *(__int16 *)(a4 + 2LL * j) * (__int16)(*(_WORD *)(a2 + 2LL * j) - (*(unsigned __int8 *)(a3 + j) << 7));
      if ( v9 - (v11 >> 1) <= 0 )
        v16 = (v11 >> 1) - v9;
      else
        v16 = v9 - (v11 >> 1);
      v12 = v16 + v13;
      v10 = *(__int16 *)(a4 + 2LL * j) * (__int16)(*(_WORD *)(a2 + 2LL * j) - (*(unsigned __int8 *)(a3 + j) << 7));
    }
    *(_DWORD *)(a1 + 4LL * i) = v12;
    a3 += a6;
    a4 += 2LL * a6;
  }
  return result;
}

