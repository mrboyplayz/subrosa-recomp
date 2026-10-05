/* Address: 0x14009da50 | Name: sub_14009DA50 | Size: 1112 bytes */
__int64 __fastcall sub_14009DA50(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r8
  signed __int64 v4; // r15
  signed __int64 v5; // r12
  signed __int64 v6; // rbp
  signed __int64 v7; // r13
  signed __int64 v8; // r9
  signed __int64 v9; // r11
  signed __int64 v10; // rsi
  signed __int64 v11; // r10
  signed __int64 v12; // r14
  _DWORD *v13; // rcx
  char *v14; // rax
  signed __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  int *v21; // r8
  int v22; // r10d
  int v23; // edx
  bool v24; // zf
  signed __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]

  a1 = (int)a1;
  v1 = 180288LL * (int)a1;
  v29 = (int)a1;
  v27 = v1;
  v2 = 0;
  dword_1782D6BA0[0] = *(int *)((char *)dword_143DB3AFC + v1);
  v3 = dword_1782D6BA0[0];
  v26 = dword_1782D6BA0[0];
  if ( dword_1782D6BA0[0] >= 4LL )
  {
    v4 = (_UNKNOWN *)((char *)&unk_1782D6BB8 - v1) - &unk_143DB3B08;
    v5 = (_UNKNOWN *)((char *)&unk_1782D6BBC - v1) - &unk_143DB3B08;
    v6 = (_UNKNOWN *)((char *)&unk_1782D6BC4 - v1) - &unk_143DB3B08;
    v7 = (_UNKNOWN *)((char *)&unk_1782D6BC8 - v1) - &unk_143DB3B08;
    v8 = (_UNKNOWN *)((char *)&unk_1782D6BD0 - v1) - &unk_143DB3B08;
    v9 = (char *)dword_1782D6BA8 - v1 - (char *)&unk_143DB3B08;
    v10 = (char *)dword_1782D6BAC - v1 - (char *)&unk_143DB3B08;
    v11 = (_UNKNOWN *)((char *)&unk_1782D6BD4 - v1) - &unk_143DB3B08;
    v12 = (char *)dword_1782D6BB0 - v1 - (char *)&unk_143DB3B08;
    v13 = (_DWORD *)((char *)&unk_143DB3B08 + v1);
    v25 = (_UNKNOWN *)((char *)&unk_1782D6BC0 - v1) - &unk_143DB3B08;
    v14 = (char *)&unk_1782D6BCC - v1;
    v15 = (_UNKNOWN *)((char *)&unk_1782D6BB4 - v1) - &unk_143DB3B08;
    v16 = ((unsigned __int64)(dword_1782D6BA0[0] - 4LL) >> 2) + 1;
    v28 = 4 * v16;
    do
    {
      *(_DWORD *)((char *)v13 + v9) = *(v13 - 2);
      *(_DWORD *)((char *)v13 + v10) = *(v13 - 1);
      *(_DWORD *)((char *)v13 + v12) = *v13;
      *(_DWORD *)((char *)v13 + v15) = v13[1];
      *(_DWORD *)((char *)v13 + v4) = v13[2];
      *(_DWORD *)((char *)v13 + v5) = v13[3];
      *(_DWORD *)((char *)v13 + v25) = v13[4];
      *(_DWORD *)((char *)v13 + v6) = v13[5];
      *(_DWORD *)((char *)v13 + v7) = v13[6];
      *(_DWORD *)((char *)v13 + v14 - (char *)&unk_143DB3B08) = v13[7];
      *(_DWORD *)((char *)v13 + v8) = v13[8];
      *(_DWORD *)((char *)v13 + v11) = v13[9];
      v13 += 12;
      --v16;
    }
    while ( v16 );
    v3 = v26;
    v1 = v27;
    v2 = v28;
    a1 = v29;
  }
  if ( v2 < v3 )
  {
    v17 = (_DWORD *)(0x140000000LL + 12 * (v2 + 15024 * a1) + 64699144);
    v18 = v3 - v2;
    do
    {
      *(_DWORD *)((char *)v17 + (char *)dword_1782D6BA8 - v1 - (char *)&unk_143DB3B08) = *(v17 - 2);
      *(_DWORD *)((char *)v17 + (char *)dword_1782D6BAC - v1 - (char *)&unk_143DB3B08) = *(v17 - 1);
      *(_DWORD *)((char *)v17 + (char *)dword_1782D6BB0 - v1 - (char *)&unk_143DB3B08) = *v17;
      v17 += 3;
      --v18;
    }
    while ( v18 );
  }
  v19 = *(int *)((char *)dword_143DB6B00 + v1);
  result = 0;
  dword_178416BA8 = 0;
  if ( v19 > 0 )
  {
    v21 = (int *)((char *)&unk_143DB6B10 + v1);
    do
    {
      v22 = *(v21 - 1);
      dword_178416BAC[3 * (_DWORD)result] = v22;
      dword_178416BB0[3 * dword_178416BA8] = *v21;
      v23 = v21[1];
      dword_178416BB4[3 * dword_178416BA8] = v23;
      dword_17860EBB0[6 * dword_178416BA8] = 1099169792;
      dword_17860EBB4[6 * dword_178416BA8] = 0;
      dword_17860EBB8[6 * dword_178416BA8] = 1099169792;
      dword_17860EBBC[6 * dword_178416BA8] = 0;
      dword_17860EBC0[6 * dword_178416BA8] = 1099169792;
      dword_17860EBC4[6 * dword_178416BA8] = 0;
      result = (unsigned int)(dword_178416BA8 + 1);
      v24 = *(v21 - 2) == 4;
      ++dword_178416BA8;
      if ( v24 )
      {
        dword_178416BAC[3 * (_DWORD)result] = v22;
        dword_178416BB0[3 * dword_178416BA8] = v23;
        dword_178416BB4[3 * dword_178416BA8] = v21[2];
        dword_17860EBB0[6 * dword_178416BA8] = 1099169792;
        dword_17860EBB4[6 * dword_178416BA8] = 0;
        dword_17860EBB8[6 * dword_178416BA8] = 1099169792;
        dword_17860EBBC[6 * dword_178416BA8] = 0;
        dword_17860EBC0[6 * dword_178416BA8] = 1099169792;
        dword_17860EBC4[6 * dword_178416BA8] = 0;
        result = (unsigned int)++dword_178416BA8;
      }
      v21 += 26;
      --v19;
    }
    while ( v19 );
  }
  return result;
}

