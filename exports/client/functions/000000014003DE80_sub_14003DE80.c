/* Address: 0x14003de80 | Name: sub_14003DE80 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14003DE80(float *a1, float *a2, float a3)
{
  float v5; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  unsigned int v9; // xmm0_4
  signed int v10; // ebx
  unsigned int *v11; // rdi
  __int64 v13; // [rsp-20h] [rbp-121C0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-12190h]
  float v15; // [rsp+20h] [rbp-12180h] BYREF
  float v16; // [rsp+24h] [rbp-1217Ch]
  float v17; // [rsp+28h] [rbp-12178h]
  unsigned int v18; // [rsp+30h] [rbp-12170h] BYREF
  float v19; // [rsp+34h] [rbp-1216Ch]
  float v20; // [rsp+38h] [rbp-12168h]
  float v21; // [rsp+40h] [rbp-12160h] BYREF
  __int128 v22; // [rsp+48h] [rbp-12158h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-12148h]
  unsigned int v24; // [rsp+5Ch] [rbp-12144h]
  float v25; // [rsp+12124h] [rbp-7Ch]
  int v26[18436]; // [rsp+12130h] [rbp-70h] BYREF
  __int64 v27; // [rsp+24140h] [rbp+11FA0h]

  dword_140404A6C[73006987] = 1065353216;
  dword_140404A6C[73006988] = 1199570944;
  dword_140404A6C[73007012] = -1;
  dword_140404A6C[73007015] = -1;
  v5 = *a1;
  v7 = a1[1];
  v8 = a1[2];
  *(float *)&v9 = *a1 - a3;
  v26[0] = 0;
  v26[8193] = 0;
  v26[16386] = 0;
  v18 = v9;
  v19 = v7 - a3;
  v15 = v5 + a3;
  v16 = v7 + a3;
  v17 = v8 + a3;
  v20 = v8 - a3;
  sub_1400D05B0(v26, (float *)&v18, &v15);
  if ( sub_14003DAE0((float *)&v22, (__int64)v26, a1, a2, a3) && *(float *)&dword_140404A6C[73006988] > v25 )
  {
    dword_140404A6C[73006987] = 0;
    *(_OWORD *)&dword_140404A6C[73006981] = v22;
    dword_140404A6C[73007006] = 0;
    dword_140404A6C[73006985] = v23;
    dword_140404A6C[73006986] = v24;
    *(float *)&dword_140404A6C[73006988] = v25;
    dword_140404A6C[73007002] = 0;
  }
  v10 = 0;
  v11 = &dword_140404A6C[111579637];
  do
  {
    if ( *v11 )
    {
      *(float *)&v14 = a3;
      if ( (unsigned int)sub_14003C760((float *)&v18, &v15, &v21, v10, a1, a2, v14) )
      {
        if ( *(float *)&dword_140404A6C[73006988] > v21 )
        {
          dword_140404A6C[73006981] = v18;
          *(float *)&dword_140404A6C[73006982] = v19;
          *(float *)&dword_140404A6C[73006983] = v20;
          *(float *)&dword_140404A6C[73006984] = v15;
          *(float *)&dword_140404A6C[73006985] = v16;
          *(float *)&dword_140404A6C[73006986] = v17;
          *(float *)&dword_140404A6C[73006988] = v21;
          dword_140404A6C[73006987] = 0;
          dword_140404A6C[73007006] = dword_140404A6C[73007007];
          dword_140404A6C[73007002] = v10;
        }
      }
    }
    ++v10;
    v11 += 263004;
  }
  while ( v10 < 4 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v27);
}

