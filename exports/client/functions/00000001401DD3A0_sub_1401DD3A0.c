/* Address: 0x1401dd3a0 | Name: sub_1401DD3A0 | Size: 1017 bytes */
__int64 __fastcall sub_1401DD3A0(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-38h]
  int v6; // [rsp+0h] [rbp-38h]
  int v7; // [rsp+0h] [rbp-38h]
  int v8; // [rsp+0h] [rbp-38h]
  int v9; // [rsp+0h] [rbp-38h]
  int v10; // [rsp+0h] [rbp-38h]
  int v11; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+8h] [rbp-30h]
  int v13; // [rsp+8h] [rbp-30h]
  int v14; // [rsp+8h] [rbp-30h]
  int i; // [rsp+Ch] [rbp-2Ch]
  int v16; // [rsp+10h] [rbp-28h]
  int v17; // [rsp+10h] [rbp-28h]
  int v18; // [rsp+14h] [rbp-24h]
  int v19; // [rsp+18h] [rbp-20h]
  __int16 v20; // [rsp+1Ch] [rbp-1Ch]
  int v21; // [rsp+20h] [rbp-18h]
  __int16 v22; // [rsp+24h] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    v18 = *(__int16 *)(a3 + 2LL * i) << 10;
    v5 = (unk_14027E928 * (__int64)(v18 - *a1)) >> 16;
    v11 = v5 + *a1;
    *a1 = v5 + v18;
    v6 = (unk_14027E92A * (__int64)(v11 - a1[1])) >> 16;
    v16 = v6 + a1[1];
    a1[1] = v6 + v11;
    v7 = ((unk_14027E92C * (__int64)(v16 - a1[2])) >> 16) + v16 - a1[2];
    v12 = v7 + a1[2];
    a1[2] = v7 + v16;
    if ( ((v12 >> 9) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v12 >> 9) + 1) >> 1 >= -32768 )
        v19 = ((v12 >> 9) + 1) >> 1;
      else
        LOWORD(v19) = 0x8000;
      v20 = v19;
    }
    else
    {
      v20 = 0x7FFF;
    }
    *(_WORD *)(a2 + 4LL * i) = v20;
    v8 = (unk_14027E9D8 * (__int64)(v18 - a1[3])) >> 16;
    v13 = v8 + a1[3];
    a1[3] = v8 + v18;
    v9 = (unk_14027E9DA * (__int64)(v13 - a1[4])) >> 16;
    v17 = v9 + a1[4];
    a1[4] = v9 + v13;
    v10 = ((unk_14027E9DC * (__int64)(v17 - a1[5])) >> 16) + v17 - a1[5];
    v14 = v10 + a1[5];
    a1[5] = v10 + v17;
    if ( ((v14 >> 9) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v14 >> 9) + 1) >> 1 >= -32768 )
        v21 = ((v14 >> 9) + 1) >> 1;
      else
        LOWORD(v21) = 0x8000;
      v22 = v21;
    }
    else
    {
      v22 = 0x7FFF;
    }
    *(_WORD *)(a2 + 2LL * (2 * i + 1)) = v22;
  }
  return result;
}

