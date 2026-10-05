/* Address: 0x1400b92b0 | Name: sub_1400B92B0 | Size: 1118 bytes */
__int64 __fastcall sub_1400B92B0(int a1, int a2, int a3, int a4, int a5, float a6)
{
  __int64 v6; // r15
  unsigned __int64 v9; // rbx
  int v11; // ecx
  int v12; // edx
  float v13; // xmm1_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  __int64 v16; // r8
  int v17; // eax
  unsigned __int64 v18; // rax
  float v19; // xmm7_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  unsigned __int64 v24; // rax
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm4_4
  float v31; // xmm7_4
  unsigned __int64 v32; // r14
  float v33; // xmm7_4
  float v34; // xmm1_4
  int v35; // eax
  int v36; // eax
  int v37; // ebx
  unsigned __int64 v38; // rdi
  char v39; // al
  char *v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // ecx
  float v44; // [rsp+30h] [rbp-98h] BYREF
  float v45; // [rsp+34h] [rbp-94h]
  float v46; // [rsp+38h] [rbp-90h]
  float v47[4]; // [rsp+40h] [rbp-88h] BYREF

  v6 = a1;
  v9 = 1584LL * a3;
  v11 = 0;
  v12 = *(_DWORD *)((char *)&unk_1839ABF20 + v9);
  v13 = *(float *)&dword_1839AC0E4[v9 / 4 + 1];
  v14 = *(float *)&dword_1839AC0E4[v9 / 4 + 2];
  v15 = *(float *)&dword_1839AC0E4[v9 / 4];
  v16 = *(int *)((char *)&unk_1839ABF10 + v9);
  if ( (v12 >> 1) - a5 - 1 >= 0 )
    v11 = (*(int *)((char *)&unk_1839ABF20 + v9) >> 1) - a5 - 1;
  v17 = v12 - 1;
  if ( v11 <= v12 - 1 )
    v17 = v11;
  if ( a4 )
  {
    v15 = -v15;
    v13 = -v13;
    v14 = -v14;
    v24 = v9 + 28LL * v17;
    v22 = *(float *)((char *)&unk_1839ABF28 + v24);
    v23 = *(float *)((char *)&unk_1839ABF30 + v24);
    v19 = *(float *)((char *)&unk_1839ABF34 + v24);
    v20 = *(float *)((char *)&unk_1839ABF38 + v24);
    v21 = *(float *)((char *)&unk_1839ABF3C + v24);
  }
  else
  {
    v18 = v9 + 28LL * (v12 - v17);
    v19 = *(float *)((char *)dword_1839ABF0C + v18);
    v20 = *(float *)((char *)&unk_1839ABF10 + v18);
    v21 = *(float *)((char *)&unk_1839ABF14 + v18);
    v22 = *(float *)((char *)&unk_1839ABF18 + v18);
    v23 = *(float *)((char *)&unk_1839ABF20 + v18);
  }
  v25 = -1.5707964;
  v26 = a6 * fsqrt((float)((float)(v23 - v21) * (float)(v23 - v21)) + (float)((float)(v22 - v19) * (float)(v22 - v19)));
  if ( !*(_DWORD *)((char *)&unk_1839ABF14 + v9) )
    v25 = -3.1415927;
  if ( !a4 )
    v25 = v25 + 3.14159265359;
  v27 = (float)(v13 * v26) + v20;
  v28 = (float)(v15 * v26) + v19;
  v29 = *((float *)&unk_183989EF4 + 34 * dword_1839ABF0C[v9 / 4]);
  v30 = (float)(v14 * v26) + v21;
  v44 = v28;
  v46 = v30;
  if ( v27 < v29 )
    v27 = v29;
  if ( v27 < *((float *)&unk_183989EF4 + 34 * v16) )
    v27 = *((float *)&unk_183989EF4 + 34 * v16);
  v45 = v27 + 2.0;
  v47[0] = v28 - (float)(*(float *)&qword_140146A28 * 128.0);
  v47[1] = (float)(v27 + 2.0) - (float)(*((float *)&qword_140146A28 + 1) * 128.0);
  v47[2] = v30 - (float)(*(float *)&dword_140146A30 * 128.0);
  if ( (unsigned int)sub_1400828D0(&v44, v47, 0) )
    v31 = *(float *)&qword_16E18CA44;
  else
    v31 = v45;
  v32 = 1532LL * dword_16D67C580;
  v33 = v31 + (float)(0.375 - *((float *)&unk_14AA2CB80 + 24944 * v6));
  memset((char *)&unk_16D4FD584 + v32, 0, 0x5F8u);
  v34 = v46;
  v35 = *(_DWORD *)((char *)&unk_1839ABF18 + v9);
  *(float *)((char *)&unk_16D4FD590 + v32) = v44;
  *(float *)((char *)&unk_16D4FD598 + v32) = v34;
  *(float *)((char *)&unk_16D4FD594 + v32) = v33;
  *(_DWORD *)((char *)&unk_16D4FD580 + v32) = v6;
  *(_QWORD *)((char *)&unk_16D4FD584 + v32) = -1;
  *(float *)((char *)&unk_16D4FD5A8 + v32) = v25;
  *(_DWORD *)((char *)&unk_16D4FDB58 + v32) = a2;
  *(_DWORD *)((char *)&unk_16D4FD5D8 + v32) = 1080033280;
  *(_DWORD *)((char *)&unk_16D4FD5DC + v32) = -1090519040;
  *(_DWORD *)((char *)&unk_16D4FD5E0 + v32) = 1077936128;
  *(_DWORD *)((char *)&unk_16D4FD5FC + v32) = 1;
  if ( a4 )
    v36 = v35 - a5 - 1;
  else
    v36 = a5 + v35;
  *(_DWORD *)((char *)&unk_16D4FDB1C + v32) = v36;
  *(_DWORD *)((char *)&unk_16D4FDB20 + v32) = v36;
  dword_16D4FD60C[v32 / 4 + 321] = a3;
  dword_16D4FD60C[v32 / 4 + 322] = a4;
  dword_16D4FD60C[v32 / 4 + 323] = -1;
  *(_DWORD *)((char *)&unk_16D4FDB28 + v32) = 0;
  v37 = rand() % dword_1839ABEE4;
  v38 = 1532LL * dword_16D67C580;
  v39 = rand();
  sub_140004600(dword_16D67C580, dword_16D4FD60C[v38 / 4 + 321], a4, v37, v39 & 1);
  v40 = (char *)&unk_16D4FD5AC + v38;
  *(_QWORD *)v40 = 1065353216;
  *((_QWORD *)v40 + 1) = 0;
  *((_QWORD *)v40 + 2) = 1065353216;
  *((_QWORD *)v40 + 3) = 0;
  *((_DWORD *)v40 + 8) = 1065353216;
  sub_140049C20((__int64)&unk_16D4FD5AC + v38, (float *)((char *)&unk_16D4FD5B8 + v38), v41);
  v42 = dword_16D67C580;
  ++dword_16D67C5A0[dword_16D67C580];
  dword_16D67C580 = v42 + 1;
  return v42;
}

