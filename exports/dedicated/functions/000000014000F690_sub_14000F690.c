/* Address: 0x14000f690 | Name: sub_14000F690 | Size: 1161 bytes */
int *__fastcall sub_14000F690(int a1, float *a2, char a3)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm12_4
  float v14; // xmm6_4
  float v15; // xmm13_4
  float v16; // xmm7_4
  int v17; // eax

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      v5 = 0.875;
      v6 = 0.0;
      v8 = 1.0;
      v14 = 0.0;
      v10 = 0.0;
      v16 = 0.0;
      qword_15ADEF160 = 0x3F60000000000000LL;
      v7 = 1.0;
      v11 = 0.875;
      dword_15ADEF168 = 1065353216;
      v9 = 1.0;
      qword_15ADEF184 = 0x3F6000003F800000LL;
      v12 = 1.0;
      v13 = 0.875;
      dword_15ADEF18C = 1065353216;
      v15 = 0.875;
      *(_QWORD *)&xmmword_15ADEF214 = 0x3F6000003F800000LL;
      DWORD2(xmmword_15ADEF214) = 0;
      qword_15ADEF1F0 = 0x3F60000000000000LL;
      dword_15ADEF1F8 = 0;
      if ( (a3 & 2) != 0 )
      {
        v14 = 0.0625;
        v16 = 0.0625;
        DWORD2(xmmword_15ADEF214) = 1031798784;
        dword_15ADEF1F8 = 1031798784;
      }
      if ( (a3 & 4) != 0 )
      {
        v7 = 0.9375;
        LODWORD(xmmword_15ADEF214) = 1064304640;
        LODWORD(qword_15ADEF184) = 1064304640;
        v12 = 0.9375;
      }
      if ( (a3 & 8) != 0 )
      {
        v8 = 0.9375;
        v9 = 0.9375;
        dword_15ADEF168 = 1064304640;
        dword_15ADEF18C = 1064304640;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v6 = 0.0625;
        v10 = 0.0625;
        LODWORD(qword_15ADEF160) = 1031798784;
        LODWORD(qword_15ADEF1F0) = 1031798784;
      }
      v17 = 196608;
    }
    else
    {
      qword_15ADEF160 = 0x3F80000000000000LL;
      dword_15ADEF168 = 1031798784;
      qword_15ADEF184 = 0x3F8000003F800000LL;
      dword_15ADEF18C = 1031798784;
      *(_QWORD *)&xmmword_15ADEF214 = 1065353216;
      DWORD2(xmmword_15ADEF214) = 1031798784;
      qword_15ADEF1F0 = 0;
      dword_15ADEF1F8 = 1031798784;
      v17 = sub_1400117A0((unsigned int)(a1 - 1), 393216);
      v10 = *(float *)&qword_15ADEF1F0;
      v9 = *(float *)&dword_15ADEF18C;
      v7 = *(float *)&qword_15ADEF184;
      v8 = *(float *)&dword_15ADEF168;
      v5 = *((float *)&qword_15ADEF160 + 1);
      v6 = *(float *)&qword_15ADEF160;
      v14 = *((float *)&xmmword_15ADEF214 + 2);
      v13 = *((float *)&xmmword_15ADEF214 + 1);
      v12 = *(float *)&xmmword_15ADEF214;
      v16 = *(float *)&dword_15ADEF1F8;
      v15 = *((float *)&qword_15ADEF1F0 + 1);
      v11 = *((float *)&qword_15ADEF184 + 1);
    }
  }
  else
  {
    v5 = 0.0625;
    v6 = 0.0;
    v7 = 1.0;
    v8 = 0.0;
    qword_15ADEF160 = 0x3D80000000000000LL;
    v9 = 0.0;
    v10 = 0.0;
    dword_15ADEF168 = 0;
    v11 = 0.0625;
    qword_15ADEF184 = 0x3D8000003F800000LL;
    v12 = 1.0;
    v13 = 0.0625;
    dword_15ADEF18C = 0;
    v14 = 1.0;
    *(_QWORD *)&xmmword_15ADEF214 = 0x3D8000003F800000LL;
    v15 = 0.0625;
    v16 = 1.0;
    DWORD2(xmmword_15ADEF214) = 1065353216;
    qword_15ADEF1F0 = 0x3D80000000000000LL;
    dword_15ADEF1F8 = 1065353216;
    if ( (a3 & 2) != 0 )
    {
      dword_15ADEF168 = 1031798784;
      v8 = 0.0625;
      dword_15ADEF18C = 1031798784;
      v9 = 0.0625;
    }
    if ( (a3 & 4) != 0 )
    {
      v7 = 0.9375;
      LODWORD(xmmword_15ADEF214) = 1064304640;
      LODWORD(qword_15ADEF184) = 1064304640;
      v12 = 0.9375;
    }
    if ( (a3 & 8) != 0 )
    {
      v14 = 0.9375;
      v16 = 0.9375;
      DWORD2(xmmword_15ADEF214) = 1064304640;
      dword_15ADEF1F8 = 1064304640;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(qword_15ADEF160) = 1031798784;
      v6 = 0.0625;
      LODWORD(qword_15ADEF1F0) = 1031798784;
      v10 = 0.0625;
    }
    v17 = 0x40000;
  }
  *(float *)&qword_15ADEF160 = v6 + *a2;
  *((float *)&qword_15ADEF160 + 1) = v5 + a2[1];
  *(float *)&dword_15ADEF168 = v8 + a2[2];
  *(float *)&qword_15ADEF184 = v7 + *a2;
  *((float *)&qword_15ADEF184 + 1) = v11 + a2[1];
  *(float *)&dword_15ADEF18C = v9 + a2[2];
  *(float *)&xmmword_15ADEF214 = v12 + *a2;
  *((float *)&xmmword_15ADEF214 + 1) = v13 + a2[1];
  *((float *)&xmmword_15ADEF214 + 2) = v14 + a2[2];
  *(float *)&qword_15ADEF1F0 = v10 + *a2;
  *((float *)&qword_15ADEF1F0 + 1) = v15 + a2[1];
  *(float *)&dword_15ADEF1F8 = v16 + a2[2];
  sub_140001320((__int64)&qword_15ADEF160, (__int64)&xmmword_15ADEF214 + 12, 1, 1, 1, 1, a1 | v17);
  dword_1607F18A8[dword_1607918A4 - 1] = 128;
  return dword_1607F18A8;
}

