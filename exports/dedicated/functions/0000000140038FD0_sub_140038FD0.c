/* Address: 0x140038fd0 | Name: sub_140038FD0 | Size: 701 bytes */
__int64 __fastcall sub_140038FD0(int a1, _DWORD *a2, float *a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v8; // r14
  float *v9; // rbx
  float *v10; // rdi
  int v11; // xmm3_4
  int v12; // xmm2_4
  int v13; // xmm1_4
  float *v14; // rdx
  int v15; // eax

  v4 = dword_143988FC0;
  v6 = a1;
  if ( dword_143988FC0 >= 0x4000 )
    return 0xFFFFFFFFLL;
  v8 = 92LL * dword_143988FC0;
  v9 = (float *)((char *)&unk_143819010 + v8);
  *(_OWORD *)((char *)&unk_143818FC4 + v8) = 0;
  *(_OWORD *)((char *)&unk_143818FD4 + v8) = 0;
  *(_OWORD *)((char *)&unk_143818FE4 + v8) = 0;
  *(_OWORD *)((char *)&unk_143818FF4 + v8) = 0;
  *(_OWORD *)((char *)&unk_143819004 + v8) = 0;
  *(_QWORD *)((char *)&unk_143819014 + v8) = 0;
  *(_DWORD *)((char *)&unk_143818FC0 + v8) = a1;
  *(_DWORD *)((char *)&unk_143818FC8 + v8) = a4;
  *(_DWORD *)((char *)&unk_143818FC4 + v8) = 600;
  *(_DWORD *)((char *)&unk_143818FD4 + v8) = *a2;
  *(_DWORD *)((char *)&unk_143818FD8 + v8) = a2[1];
  *(_DWORD *)((char *)&unk_143818FDC + v8) = a2[2];
  *(_DWORD *)((char *)&unk_143818FE0 + v8) = *a2;
  *(_DWORD *)((char *)&unk_143818FE4 + v8) = a2[1];
  *(_DWORD *)((char *)&unk_143818FE8 + v8) = a2[2];
  *v9 = -*a3;
  v9[1] = -a3[1];
  v9[2] = -a3[2];
  sub_140049260((char *)&unk_143819010 + v8, (char *)&unk_143819010 + 92 * v4);
  v10 = (float *)((char *)&unk_143818FF8 + v8);
  if ( fabs(*(float *)((char *)&unk_143819014 + v8)) >= 0.70700002 )
  {
    v11 = dword_140146A1C;
    v12 = dword_140146A20;
    *v10 = (float)(*(float *)&dword_140146A1C * v9[2]) - (float)(*(float *)&dword_140146A20 * v9[1]);
    v13 = dword_140146A18;
  }
  else
  {
    v11 = dword_140146A2C;
    v12 = dword_140146A30;
    *v10 = (float)(*(float *)&dword_140146A2C * v9[2]) - (float)(*(float *)&dword_140146A30 * v9[1]);
    v13 = dword_140146A28;
  }
  v10[1] = (float)(*(float *)&v12 * *v9) - (float)(*(float *)&v13 * v9[2]);
  v10[2] = (float)(*(float *)&v13 * v9[1]) - (float)(*(float *)&v11 * *v9);
  sub_140049260((char *)&unk_143818FF8 + v8, (char *)&unk_143818FF8 + v8);
  v14 = (float *)((char *)&unk_143819004 + v8);
  *v14 = (float)(v9[1] * v10[2]) - (float)(v9[2] * v10[1]);
  v14[1] = (float)(*v10 * v9[2]) - (float)(*v9 * v10[2]);
  v14[2] = (float)(*v9 * v10[1]) - (float)(*v10 * v9[1]);
  sub_140049260(v14, v14);
  *(float *)((char *)&unk_143818FEC + v8) = *a3;
  *(float *)((char *)&unk_143818FF0 + v8) = a3[1];
  v15 = *((_DWORD *)a3 + 2);
  ++dword_191536C10;
  *(_DWORD *)((char *)&unk_143818FF4 + v8) = v15;
  *(_DWORD *)((char *)&unk_143818FCC + v8) = dword_1417D95A0[6 * v6];
  *(_DWORD *)((char *)&unk_143818FD0 + v8) = 993158992;
  dword_143988FC0 = v4 + 1;
  return (unsigned int)v4;
}

