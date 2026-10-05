/* Address: 0x14009c040 | Name: sub_14009C040 | Size: 1591 bytes */
__int64 __fastcall sub_14009C040(int a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  float v6; // xmm10_4
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // xmm8_4
  unsigned int v30; // xmm9_4
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rcx
  float v40; // [rsp+40h] [rbp-98h] BYREF
  int v41; // [rsp+44h] [rbp-94h]

  v2 = 0;
  v5 = 44LL * (int)a2;
  dword_140404A6C[468765293] = 512;
  dword_140404A6C[468765294] = 512;
  dword_140404A6C[v5 + 284024933] = 512;
  dword_140404A6C[v5 + 284024934] = 512;
  dword_140404A6C[v5 + 284024935] = 1;
  dword_140404A6C[v5 + 284024936] = 6408;
  dword_140404A6C[v5 + 284024937] = 6408;
  dword_140404A6C[v5 + 284024943] = 0;
  dword_140404A6C[v5 + 284024938] = 10497;
  dword_140404A6C[v5 + 284024939] = 10497;
  dword_140404A6C[v5 + 284024940] = 9729;
  dword_140404A6C[v5 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v5 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v5 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v5 + 284024944], 0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
  sub_14007A2C0(0, 0, 512, 512, 512.0, 512.0, 512.0);
  dword_140404A6C[438291414] = 1140850688;
  dword_140404A6C[438291415] = 1140850688;
  qword_140302FE8(0, 0, 512, 512);
  v6 = 0.0;
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, 1);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(0x4000);
  unk_140404050(3553, dword_140404A6C[451221642]);
  *(_OWORD *)&dword_140404A6C[456807033] = 0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(v8, v7, v9);
  sub_14007D420(v11, v10, v12);
  sub_14007D420(v14, v13, v15);
  sub_14007D420(v17, v16, v18);
  sub_14006E0D0(v20, v19, v21);
  LOBYTE(v22) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v22);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  v23 = dword_140404A6C[438291413];
  dword_140404A6C[438291413] = 3;
  if ( a1 != -1 )
  {
    unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283831303] + 284024944]);
    dword_140404A6C[456217205] = 1;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    do
    {
      if ( v2 >= 1000 )
        break;
      v27 = (unsigned __int8)aHelloWorld[v2];
      v28 = 39;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
      if ( (unsigned __int8)(v27 - 65) <= 0x19u )
        v28 = v27 - 52;
      v41 = 1107296256;
      v6 = v6 + 16.0;
      *(float *)&v29 = (float)(v28 >> 4) * 0.0625;
      v40 = v6;
      *(float *)&v30 = (float)(v28 & 0xF) * 0.0625;
      dword_140404A6C[456807037] = v30;
      *(float *)&dword_140404A6C[456807038] = *(float *)&v29 + 0.0625;
      sub_14007D320((unsigned int *)&v40, v27, v26);
      *(float *)&dword_140404A6C[456807038] = *(float *)&v29 + 0.0625;
      v40 = v6 + 16.0;
      *(float *)&dword_140404A6C[456807037] = *(float *)&v30 + 0.0625;
      sub_14007D320((unsigned int *)&v40, v31, v32);
      *(float *)&dword_140404A6C[456807037] = *(float *)&v30 + 0.0625;
      dword_140404A6C[456807038] = v29;
      v41 = 1098907648;
      sub_14007D320((unsigned int *)&v40, v33, v34);
      v40 = v6;
      dword_140404A6C[456807037] = v30;
      dword_140404A6C[456807038] = v29;
      sub_14007D320((unsigned int *)&v40, v35, v36);
      ++v2;
    }
    while ( aHelloWorld[v2] );
    sub_14006E0D0(v25, v24, v26);
    sub_140187860(40);
    sub_140187860(40);
  }
  unk_1404046F0(36160, 0);
  dword_140404A6C[438291413] = v23;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v37) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v37);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1141899264;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v38) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v38);
  return (*(__int64 (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
}

