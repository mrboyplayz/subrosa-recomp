/* Address: 0x1401c06a0 | Name: sub_1401C06A0 | Size: 653 bytes */
__int64 __fastcall sub_1401C06A0(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-38h]
  int j; // [rsp+4h] [rbp-34h]
  int k; // [rsp+8h] [rbp-30h]
  int v6; // [rsp+Ch] [rbp-2Ch]
  int v7; // [rsp+10h] [rbp-28h]
  int v8; // [rsp+14h] [rbp-24h]
  int v9; // [rsp+1Ch] [rbp-1Ch]
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-14h]

  v10 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v9 = 0x7FFFFFFF;
    for ( j = 0; j < 15; ++j )
    {
      v7 = word_1402827A0[j];
      v11 = (6554LL * (word_1402827A0[j + 1] - v7)) >> 16;
      for ( k = 0; k < 5; ++k )
      {
        v6 = (__int16)(2 * k + 1) * (__int16)v11 + v7;
        if ( a1[i] - v6 <= 0 )
          v8 = v6 - a1[i];
        else
          v8 = a1[i] - v6;
        if ( v8 >= v9 )
          goto LABEL_14;
        v9 = v8;
        v10 = (__int16)(2 * k + 1) * (__int16)v11 + v7;
        *(_BYTE *)(3LL * i + a2) = j;
        *(_BYTE *)(3LL * i + a2 + 1) = k;
      }
    }
LABEL_14:
    *(_BYTE *)(3LL * i + a2 + 2) = *(char *)(3LL * i + a2) / 3;
    *(_BYTE *)(3LL * i + a2) -= 3 * *(_BYTE *)(3LL * i + a2 + 2);
    a1[i] = v10;
  }
  result = (unsigned int)(*a1 - a1[1]);
  *a1 = result;
  return result;
}

