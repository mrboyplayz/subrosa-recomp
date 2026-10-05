/* Address: 0x140010770 | Name: sub_140010770 | Size: 1017 bytes */
__int64 __fastcall sub_140010770(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  int v4; // xmm13_4
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // r11d
  float *v11; // r9
  int v12; // r8d
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  int v18; // xmm5_4
  int v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  int v22; // xmm9_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  int v25; // xmm12_4
  __int64 v26; // rdx
  int *v27; // rax
  float v28; // xmm0_4
  int v29; // xmm2_4
  int v30; // xmm1_4
  float v31; // xmm0_4
  int v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx

  v3 = 12352LL * a2;
  v4 = 1015021568;
  result = a3;
  v6 = a1;
  v7 = 768LL * a3;
  v8 = v7 + v3;
  if ( *(_DWORD *)&byte_143C7A200[v7 + 64 + v3] == 1 )
    v4 = 998244352;
  v9 = *(int *)&byte_143C7A200[v8 + 116];
  if ( v9 > 0 )
  {
    v10 = *(_DWORD *)&byte_143C7A200[v7 + 64 + v3];
    v11 = (float *)((char *)&unk_143C7A280 + v8);
    v12 = dword_160A130F4;
    do
    {
      if ( v10 == 1 && (int)v6 >= 2 )
      {
        v13 = *(v11 - 1);
        v14 = *v11;
      }
      else
      {
        v14 = *v11;
        v13 = 1.0 - (float)(*v11 + *(v11 - 1));
      }
      v15 = v11[1];
      v16 = v14 + v13;
      *(float *)&qword_15ADEF160 = v13;
      v17 = v15 + v11[2];
      *((float *)&xmmword_15ADEF214 + 1) = v15;
      DWORD2(xmmword_15ADEF214) = v4;
      v18 = v4;
      dword_15ADEF168 = v4;
      v19 = v4;
      *(float *)&qword_15ADEF184 = v16;
      v20 = v16;
      *((float *)&qword_15ADEF160 + 1) = v17;
      v21 = v17;
      *((float *)&qword_15ADEF184 + 1) = v17;
      v22 = v4;
      dword_15ADEF18C = v4;
      v23 = v13;
      *(float *)&xmmword_15ADEF214 = v16;
      v24 = v15;
      *(float *)&qword_15ADEF1F0 = v13;
      v25 = v4;
      *((float *)&qword_15ADEF1F0 + 1) = v15;
      dword_15ADEF1F8 = v4;
      if ( (int)v6 > 0 )
      {
        v26 = v6;
        do
        {
          v27 = &dword_15ADEF168;
          do
          {
            v28 = 1.0 - *(float *)v27;
            v29 = v27[1];
            *v27 = *(v27 - 2);
            v30 = v27[4];
            *((float *)v27 - 2) = v28;
            v31 = 1.0 - *((float *)v27 + 3);
            v27[3] = v29;
            v32 = v27[7];
            *((float *)v27 + 1) = v31;
            v33 = 1.0 - *((float *)v27 + 6);
            v27[6] = v30;
            *((float *)v27 + 4) = v33;
            v34 = 1.0 - *((float *)v27 + 9);
            v27[9] = v32;
            *((float *)v27 + 7) = v34;
            v27 += 12;
          }
          while ( (__int64)v27 < (__int64)dword_15ADEF228 );
          --v26;
        }
        while ( v26 );
        v22 = DWORD2(xmmword_15ADEF214);
        v15 = *((float *)&xmmword_15ADEF214 + 1);
        v20 = *(float *)&xmmword_15ADEF214;
        v25 = dword_15ADEF1F8;
        v24 = *((float *)&qword_15ADEF1F0 + 1);
        v23 = *(float *)&qword_15ADEF1F0;
        v19 = dword_15ADEF18C;
        v21 = *((float *)&qword_15ADEF184 + 1);
        v16 = *(float *)&qword_15ADEF184;
        v18 = dword_15ADEF168;
        v17 = *((float *)&qword_15ADEF160 + 1);
        v13 = *(float *)&qword_15ADEF160;
      }
      v11 += 5;
      v35 = 10LL * v12;
      *((float *)&unk_160A1310C + 2 * v35) = v13;
      *((float *)&unk_160A1310C + 2 * v35 + 1) = v17;
      *((_DWORD *)&unk_160A1310C + 2 * v35 + 2) = v18;
      v36 = 10LL * dword_160A130F4;
      flt_160A13118[2 * v36] = v16;
      flt_160A13118[2 * v36 + 1] = v21;
      LODWORD(flt_160A13118[2 * v36 + 2]) = v19;
      v37 = 10LL * dword_160A130F4;
      flt_160A13124[2 * v37] = v20;
      flt_160A13124[2 * v37 + 1] = v15;
      LODWORD(flt_160A13124[2 * v37 + 2]) = v22;
      result = dword_160A130F4;
      v38 = 10LL * dword_160A130F4;
      flt_160A13130[2 * v38] = v23;
      flt_160A13130[2 * v38 + 1] = v24;
      LODWORD(flt_160A13130[2 * v38 + 2]) = v25;
      v12 = ++dword_160A130F4;
      --v9;
    }
    while ( v9 );
  }
  return result;
}

