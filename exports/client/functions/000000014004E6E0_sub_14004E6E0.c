/* Address: 0x14004e6e0 | Name: sub_14004E6E0 | Size: 437 bytes */
__int64 __fastcall sub_14004E6E0(unsigned int a1, float a2, float a3, float a4)
{
  int v5; // edx
  unsigned int *v6; // rax
  __int64 v8; // [rsp+8h] [rbp-49h] BYREF
  __int64 v9; // [rsp+38h] [rbp-19h] BYREF
  float v10; // [rsp+40h] [rbp-11h]
  __int128 v11; // [rsp+48h] [rbp-9h] BYREF
  __int128 v12; // [rsp+58h] [rbp+7h]
  float v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v10 = 0.0;
  if ( a1 == dword_140404A6C[283826981] )
  {
    v9 = 0;
    sub_140002D00((float *)&v9, a2, a3, a4);
  }
  else
  {
    LODWORD(v9) = 0;
    *((float *)&v9 + 1) = a3 * -0.5;
    v11 = xmmword_140278D30;
    v12 = xmmword_140278D30;
    v13 = 1.0;
    sub_1400066B0((float *)&v9, (float *)&v11, a2, a3 * 0.5, a4, 5);
    sub_14007B2A0(&v11, &v11);
    *(float *)&v9 = (float)(*((float *)&v11 + 3) * (float)(a3 * 0.5)) + (float)(*((float *)&v12 + 2) * a4);
    *((float *)&v9 + 1) = (float)(*(float *)&v12 * (float)(a3 * 0.5)) + (float)(*((float *)&v12 + 3) * a4);
    v10 = (float)(*((float *)&v12 + 1) * (float)(a3 * 0.5)) + (float)(v13 * a4);
    sub_1400066B0((float *)&v9, (float *)&v11, a2, a3 * 0.5, a4, 0);
  }
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  sub_1401449C0(a1, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v14);
}

