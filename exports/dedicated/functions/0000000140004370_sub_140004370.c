/* Address: 0x140004370 | Name: sub_140004370 | Size: 646 bytes */
float __fastcall sub_140004370(int a1, int a2, int a3, float a4, int a5)
{
  float v5; // xmm5_4
  int v6; // r9d
  __int64 v7; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  int *v12; // rdx
  int *v13; // r11
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm3_4

  v5 = 65536.0;
  v6 = 0;
  v7 = a1;
  dword_16D4ED520 = 0;
  if ( a2 == -1 )
    return 65536.0;
  v10 = 1584LL * a2;
  v11 = *(int *)((char *)&unk_1839AC114 + v10);
  if ( v11 <= 0 )
    return 65536.0;
  v12 = &dword_1839AC118[v10 / 4];
  v13 = dword_16D4ED524;
  do
  {
    v14 = *v12++;
    dword_16D4ED524[v6] = v14;
    v6 = ++dword_16D4ED520;
    --v11;
  }
  while ( v11 );
  if ( v6 <= 0 )
    return 65536.0;
  v15 = (unsigned int)v6;
  do
  {
    v16 = *v13;
    if ( (_DWORD)v16 != (_DWORD)v7 )
    {
      v17 = *(_DWORD *)((char *)&unk_1839ABF20 + v10);
      v18 = 0;
      v19 = 0;
      if ( v17 > 0 )
      {
        v20 = 1532 * v16;
        v21 = 1;
        do
        {
          if ( v19 == *((_DWORD *)&unk_16D4FDB1C + 383 * v7)
            && (v21 & a3) != 0
            && (v21 & *(_DWORD *)((_BYTE *)&unk_16D4FDB54 + v20)) != 0 )
          {
            v18 = 1;
          }
          ++v19;
          v21 = __ROL4__(v21, 1);
        }
        while ( v19 < v17 );
        if ( v18 )
        {
          v22 = *(float *)((char *)&unk_16D4FDB3C + v20);
          if ( a5 )
          {
            if ( a4 <= v22 )
              goto LABEL_22;
            v23 = fsqrt(
                    (float)((float)(*(float *)((char *)&unk_16D4FD59C + v20) * *(float *)((char *)&unk_16D4FD59C + v20))
                          + (float)(*(float *)((char *)&unk_16D4FD5A0 + v20) * *(float *)((char *)&unk_16D4FD5A0 + v20)))
                  + (float)(*(float *)((char *)&unk_16D4FD5A4 + v20) * *(float *)((char *)&unk_16D4FD5A4 + v20)))
                - (float)((float)((float)(*(float *)((char *)&unk_16D4FDB40 + v20) - a4) * 0.0083333338) + 0.016666668);
          }
          else
          {
            if ( a4 >= v22 )
              goto LABEL_22;
            v23 = fsqrt(
                    (float)((float)(*(float *)((char *)&unk_16D4FD59C + v20) * *(float *)((char *)&unk_16D4FD59C + v20))
                          + (float)(*(float *)((char *)&unk_16D4FD5A0 + v20) * *(float *)((char *)&unk_16D4FD5A0 + v20)))
                  + (float)(*(float *)((char *)&unk_16D4FD5A4 + v20) * *(float *)((char *)&unk_16D4FD5A4 + v20)))
                + (float)((float)((float)(*(float *)((char *)&unk_16D4FDB40 + v20) - a4) - 2.0) * 0.0083333338);
          }
          v5 = fminf(fmaxf(v23, 0.0), v5);
        }
      }
    }
LABEL_22:
    ++v13;
    --v15;
  }
  while ( v15 );
  return v5;
}

