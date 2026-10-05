/* Address: 0x140099dd0 | Name: sub_140099DD0 | Size: 1432 bytes */
double __fastcall sub_140099DD0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6; // edi
  unsigned int v8; // ebx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // r15
  signed int v12; // eax
  __int64 v13; // r14
  float v14; // xmm3_4
  __int64 v15; // r8
  unsigned int *v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // rax
  double v19; // xmm9_8
  double v20; // xmm11_8
  float v21; // xmm12_4
  __int64 v22; // r8
  __int64 v23; // r8

  v6 = 0;
  v8 = a3;
  v9 = a2;
  v10 = 0;
  v11 = 2LL * a1;
  do
  {
    if ( v10 )
      v12 = dword_140404A6C[2 * v11 + 283827815];
    else
      v12 = dword_140404A6C[2 * v11 + 283827814];
    v13 = 44LL * v12;
    dword_140404A6C[468765293] = 128;
    dword_140404A6C[468765294] = 128;
    unk_140404050(35866, dword_140404A6C[v13 + 284024944]);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10242, v8);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10243, a4);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10240, a5);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10241, a6);
    unk_140404078(
      35866,
      0,
      6408,
      dword_140404A6C[468765293],
      dword_140404A6C[468765294],
      dword_140404A6C[421769141],
      0,
      6408,
      5121,
      0);
    unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
    qword_140302FE8(0, 0, dword_140404A6C[468765293], dword_140404A6C[468765294]);
    v14 = (float)(int)dword_140404A6C[468765293];
    dword_140404A6C[431564495] = -1082130432;
    dword_140404A6C[431564496] = 0;
    *(_OWORD *)&dword_140404A6C[431564486] = 0;
    *(_OWORD *)&dword_140404A6C[431564491] = 0;
    *(float *)&dword_140404A6C[431564485] = (float)(1.0 / v14) + (float)(1.0 / v14);
    *(float *)&dword_140404A6C[431564497] = -(float)((float)(1.0 / v14) * v14);
    *(_OWORD *)&dword_140404A6C[431564503] = xmmword_140279490;
    *(float *)&dword_140404A6C[431564490] = (float)(1.0 / (float)(int)dword_140404A6C[468765294])
                                          + (float)(1.0 / (float)(int)dword_140404A6C[468765294]);
    *(_OWORD *)&dword_140404A6C[431564499] = xmmword_140278E70;
    *(_OWORD *)&dword_140404A6C[431564507] = 0;
    *(_OWORD *)&dword_140404A6C[431564511] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564515] = xmmword_140278E60;
    *(float *)&dword_140404A6C[431564498] = -(float)((float)(1.0 / (float)(int)dword_140404A6C[468765294])
                                                   * (float)(int)dword_140404A6C[468765294]);
    *(_OWORD *)&dword_140404A6C[431564519] = xmmword_140279490;
    dword_140404A6C[431564531] = 0;
    dword_140404A6C[431564532] = 1065353216;
    *(_OWORD *)&dword_140404A6C[431564527] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564523] = 0;
    sub_14007A0E0(
      &dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564517],
      (__int64)&dword_140404A6C[431564501]);
    sub_14007A0E0(
      &dword_140404A6C[431564549],
      (__int64)&dword_140404A6C[431564501],
      (__int64)&dword_140404A6C[431564485]);
    sub_14007A0E0(
      &dword_140404A6C[431564565],
      (__int64)&dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564485]);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
    (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
    (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, 1);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2884);
    if ( (int)dword_140404A6C[421769141] > 0 )
    {
      v16 = &dword_140404A6C[421769143];
      do
      {
        unk_140404750(36160, 36064, dword_140404A6C[v13 + 284024944], 0, v6);
        if ( v10 )
          v17 = dword_140404A6C[4 * *(v16 - 1) + 283827815];
        else
          v17 = dword_140404A6C[4 * *(v16 - 1) + 283827814];
        v18 = 768LL * (int)v16[1] + 12352LL * (int)*v16;
        *(_QWORD *)&v19 = *(unsigned int *)((char *)&dword_140404A6C[451023990] + v18);
        *(_QWORD *)&v20 = *(unsigned int *)((char *)&dword_140404A6C[451023992] + v18);
        *(float *)&v19 = *(float *)&v19 * 128.0;
        *(float *)&v20 = *(float *)&v20 * 128.0;
        v21 = *(float *)((char *)&dword_140404A6C[451023993] + v18) * 128.0;
        (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, 1);
        unk_140404050(3553, dword_140404A6C[44 * v17 + 284024944]);
        sub_14006CFF0(0.0, 0.0, v22, 128.0, 128, 1065353216, 1065353216, 1065353216, 1065353216);
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))&dword_140404A6C[18215097])(0, 0, 0);
          unk_140404050(3553, dword_140404A6C[451221642]);
          sub_14006CFF0(v19, v20, v23, v21, 128, 0, 0, 0, 1065353216);
        }
        ++v6;
        v16 += 3;
      }
      while ( v6 < (int)dword_140404A6C[421769141] );
      v9 = a2;
      v8 = a3;
    }
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v15);
    unk_140404050(35866, dword_140404A6C[v13 + 284024944]);
    if ( v9 )
      unk_140404738(35866);
    (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(35866, 34046);
    ++v10;
    v6 = 0;
  }
  while ( v10 < 2 );
  return unk_1404046F0(36160, 0);
}

