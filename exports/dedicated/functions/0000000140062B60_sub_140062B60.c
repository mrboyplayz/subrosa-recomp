/* Address: 0x140062b60 | Name: sub_140062B60 | Size: 301 bytes */
__int64 __fastcall sub_140062B60(int a1, int a2)
{
  int *v2; // rbx
  float *v3; // rsi
  float v4; // xmm6_4
  unsigned int v6; // r14d
  int v7; // edi
  float *v8; // r15
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v13[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = dword_19025F0D4;
  v3 = (float *)dword_19025F11C;
  v4 = 0.5;
  v6 = -1;
  v7 = 0;
  v8 = (float *)((char *)&unk_1909419A0 + 28664 * a1);
  v9 = v8[401] * 1.5;
  v10 = v8[400] * 1.5;
  v13[0] = v8[381] - (float)(v8[399] * 1.5);
  v13[1] = v8[382] - v10;
  v13[2] = v8[383] - v9;
  do
  {
    if ( *(v2 - 5) && (a2 == -1 || *v2 == a2) && v2[4] == -1 )
    {
      v11 = sub_1400492D0(v8 + 381, v13, v3);
      if ( v11 < v4 )
      {
        v6 = v7;
        v4 = v11;
      }
    }
    ++v7;
    v3 += 1760;
    v2 += 1760;
  }
  while ( v7 < 1024 );
  return v6;
}

