/* Address: 0x14000f320 | Name: sub_14000F320 | Size: 877 bytes */
int *__fastcall sub_14000F320(int a1, float *a2)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  int v16; // eax

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      v4 = 0.875;
      v5 = 0.0;
      v7 = 1.0;
      v13 = 0.0;
      v9 = 0.0;
      qword_15ADEF160 = 0x3F60000000000000LL;
      v15 = 0.0;
      dword_15ADEF168 = 1065353216;
      v6 = 1.0;
      qword_15ADEF184 = 0x3F6000003F800000LL;
      v10 = 0.875;
      v8 = 1.0;
      dword_15ADEF18C = 1065353216;
      v11 = 1.0;
      *(_QWORD *)&xmmword_15ADEF214 = 0x3F6000003F800000LL;
      v12 = 0.875;
      v14 = 0.875;
      DWORD2(xmmword_15ADEF214) = 0;
      v16 = 196608;
      qword_15ADEF1F0 = 0x3F60000000000000LL;
      dword_15ADEF1F8 = 0;
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
      v16 = sub_1400117A0((unsigned int)(a1 - 1), 393216);
      v8 = *(float *)&dword_15ADEF18C;
      v10 = *((float *)&qword_15ADEF184 + 1);
      v6 = *(float *)&qword_15ADEF184;
      v7 = *(float *)&dword_15ADEF168;
      v4 = *((float *)&qword_15ADEF160 + 1);
      v5 = *(float *)&qword_15ADEF160;
      v13 = *((float *)&xmmword_15ADEF214 + 2);
      v12 = *((float *)&xmmword_15ADEF214 + 1);
      v11 = *(float *)&xmmword_15ADEF214;
      v15 = *(float *)&dword_15ADEF1F8;
      v14 = *((float *)&qword_15ADEF1F0 + 1);
      v9 = *(float *)&qword_15ADEF1F0;
    }
  }
  else
  {
    v4 = 0.0625;
    v5 = 0.0;
    v6 = 1.0;
    v7 = 0.0;
    v8 = 0.0;
    qword_15ADEF160 = 0x3D80000000000000LL;
    v9 = 0.0;
    dword_15ADEF168 = 0;
    v10 = 0.0625;
    qword_15ADEF184 = 0x3D8000003F800000LL;
    v11 = 1.0;
    v12 = 0.0625;
    dword_15ADEF18C = 0;
    v13 = 1.0;
    *(_QWORD *)&xmmword_15ADEF214 = 0x3D8000003F800000LL;
    v14 = 0.0625;
    v15 = 1.0;
    DWORD2(xmmword_15ADEF214) = 1065353216;
    v16 = 0x40000;
    qword_15ADEF1F0 = 0x3D80000000000000LL;
    dword_15ADEF1F8 = 1065353216;
  }
  *(float *)&qword_15ADEF160 = v5 + *a2;
  *((float *)&qword_15ADEF160 + 1) = v4 + a2[1];
  *(float *)&dword_15ADEF168 = v7 + a2[2];
  *(float *)&qword_15ADEF184 = v6 + *a2;
  *((float *)&qword_15ADEF184 + 1) = v10 + a2[1];
  *(float *)&dword_15ADEF18C = v8 + a2[2];
  *(float *)&xmmword_15ADEF214 = v11 + *a2;
  *((float *)&xmmword_15ADEF214 + 1) = v12 + a2[1];
  *((float *)&xmmword_15ADEF214 + 2) = v13 + a2[2];
  *(float *)&qword_15ADEF1F0 = v9 + *a2;
  *((float *)&qword_15ADEF1F0 + 1) = v14 + a2[1];
  *(float *)&dword_15ADEF1F8 = v15 + a2[2];
  sub_140001320((__int64)&qword_15ADEF160, (__int64)&xmmword_15ADEF214 + 12, 1, 1, 1, 1, a1 | v16);
  dword_1607F18A8[dword_1607918A4 - 1] = 128;
  return dword_1607F18A8;
}

