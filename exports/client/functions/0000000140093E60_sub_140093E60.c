/* Address: 0x140093e60 | Name: sub_140093E60 | Size: 2093 bytes */
__int64 sub_140093E60()
{
  int i; // edi
  float *v1; // rdx
  float *v2; // rax
  float *v3; // r8
  signed __int64 v4; // rcx
  __int64 v5; // r10
  float v6; // xmm3_4
  __int64 v7; // rdx
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  int j; // ebx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v15; // [rsp+8h] [rbp-100h] BYREF
  __int128 v16; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+48h] [rbp-C0h]
  unsigned int v18; // [rsp+58h] [rbp-B0h]
  float v19; // [rsp+60h] [rbp-A8h] BYREF
  float v20; // [rsp+64h] [rbp-A4h]
  float v21; // [rsp+68h] [rbp-A0h]
  _OWORD v22[3]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp-60h]
  float v24; // [rsp+ACh] [rbp-5Ch]
  float v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  _OWORD v27[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-10h]

  qword_140302F58(515);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790136] + 283791765]);
  for ( i = 0; i < 6; ++i )
  {
    unk_140404718(
      36160,
      36064,
      (unsigned int)(i + 34069),
      dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944],
      0);
    (*(void (**)(void))&dword_140404A6C[18215089])();
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
    (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215091])(0);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(17664);
    (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215095])(0);
    v18 = 1065353216;
    v16 = xmmword_140278D30;
    v17 = xmmword_140278D30;
    if ( (unsigned int)i <= 1 )
    {
LABEL_8:
      v1 = (float *)&v16 + 3;
      goto LABEL_9;
    }
    switch ( i )
    {
      case 2:
        sub_14007B2A0((__int64)&v16, (float *)&v16);
        break;
      case 3:
        v1 = (float *)&v16;
LABEL_9:
        sub_14007B2A0((__int64)&v16, v1);
        break;
      case 5:
        goto LABEL_8;
    }
    qword_140302FE8(0, 0, 512, 512);
    *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278D80;
    *(_QWORD *)&dword_140404A6C[431564493] = 0;
    *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D30;
    dword_140404A6C[431564496] = -1082130432;
    *(_QWORD *)&dword_140404A6C[431564497] = 0;
    dword_140404A6C[431564532] = 1065353216;
    *(_OWORD *)&dword_140404A6C[431564500] = xmmword_140278D80;
    *(float *)&dword_140404A6C[431564495] = (float)(*(float *)&dword_140404A6C[284545216]
                                                  + *(float *)&dword_140404A6C[284545217])
                                          * (float)(-1.0
                                                  / (float)(*(float *)&dword_140404A6C[284545217]
                                                          - *(float *)&dword_140404A6C[284545216]));
    *(_OWORD *)&dword_140404A6C[431564504] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564512] = 0;
    *(_OWORD *)&dword_140404A6C[431564508] = xmmword_140279490;
    *(_OWORD *)&dword_140404A6C[431564520] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564516] = xmmword_140278D90;
    *(_OWORD *)&dword_140404A6C[431564528] = 0;
    *(float *)&dword_140404A6C[431564499] = (float)((float)(*(float *)&dword_140404A6C[284545217] * -2.0)
                                                  * *(float *)&dword_140404A6C[284545216])
                                          / (float)(*(float *)&dword_140404A6C[284545217]
                                                  - *(float *)&dword_140404A6C[284545216]);
    *(_OWORD *)&dword_140404A6C[431564524] = xmmword_140279490;
    sub_140105840(&dword_140404A6C[431564533], &dword_140404A6C[431564517], &dword_140404A6C[431564501]);
    sub_140105840(&dword_140404A6C[431564549], &dword_140404A6C[431564501], &dword_140404A6C[431564485]);
    sub_140105840(&dword_140404A6C[431564565], &dword_140404A6C[431564533], &dword_140404A6C[431564485]);
    dword_140404A6C[431564501] = v16;
    dword_140404A6C[431564509] = DWORD2(v16);
    dword_140404A6C[431564506] = v17;
    dword_140404A6C[431564505] = DWORD1(v16);
    dword_140404A6C[431564503] = DWORD2(v17);
    dword_140404A6C[431564502] = HIDWORD(v16);
    dword_140404A6C[431564511] = v18;
    dword_140404A6C[431564510] = DWORD1(v17);
    v22[0] = xmmword_140278D30;
    dword_140404A6C[431564507] = HIDWORD(v17);
    *(_QWORD *)&dword_140404A6C[431564513] = 0;
    dword_140404A6C[431564515] = 0;
    dword_140404A6C[431564504] = 0;
    dword_140404A6C[431564508] = 0;
    dword_140404A6C[431564512] = 0;
    dword_140404A6C[431564516] = 1065353216;
    v2 = (float *)v27;
    v3 = (float *)v22 + 1;
    v22[1] = xmmword_140278D80;
    v4 = (char *)&dword_140404A6C[431564505] - (char *)v27;
    v5 = 4;
    v22[2] = xmmword_140278E20;
    v23 = dword_140404A6C[284024502] ^ 0x80000000;
    v24 = -*(float *)&dword_140404A6C[284024503];
    v25 = -*(float *)&dword_140404A6C[284024504];
    v26 = 1065353216;
    do
    {
      v6 = *(v3 - 1);
      v7 = 4;
      v8 = *v3;
      v9 = v3[1];
      v10 = v3[2];
      do
      {
        *v2 = (float)((float)(v10 * *(float *)((char *)v2 + v4 + 32)) + (float)(v9 * *(float *)((char *)v2 + v4 + 16)))
            + (float)((float)(v8 * *(float *)((char *)v2 + v4)) + (float)(v6 * *(float *)((char *)v2 + v4 - 16)));
        ++v2;
        --v7;
      }
      while ( v7 );
      v3 += 4;
      v4 -= 16LL;
      --v5;
    }
    while ( v5 );
    *(_OWORD *)&dword_140404A6C[431564501] = v27[0];
    *(_OWORD *)&dword_140404A6C[431564505] = v27[1];
    *(_OWORD *)&dword_140404A6C[431564509] = v27[2];
    *(_OWORD *)&dword_140404A6C[431564513] = v27[3];
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
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
    unk_1404042E0(dword_140404A6C[71738165]);
    unk_140404338(dword_140404A6C[71738170], 1, &dword_140404A6C[284550403]);
    v19 = *(float *)&dword_140404A6C[284545205] * 0.5;
    v20 = *(float *)&dword_140404A6C[284545206] * 0.5;
    v21 = *(float *)&dword_140404A6C[284545207] * 0.5;
    unk_140404338(dword_140404A6C[71738171], 1, &v19);
    v19 = *(float *)&dword_140404A6C[284545209] * 0.5;
    v20 = *(float *)&dword_140404A6C[284545210] * 0.5;
    v21 = *(float *)&dword_140404A6C[284545211] * 0.5;
    unk_140404338(dword_140404A6C[71738172], 1, &v19);
    unk_140404378(dword_140404A6C[71738174], 1, 0, &dword_140404A6C[431564565]);
    unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830714] + 284024944]);
    unk_140404098(33985);
    unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830715] + 284024944]);
    unk_140404098(33986);
    unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830717] + 284024944]);
    unk_140404098(33988);
    unk_140404050(3553, dword_140404A6C[451221642]);
    unk_140404098(33987);
    unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944]);
    unk_140404238(0);
    for ( j = 0; j < 64; ++j )
      sub_1400D2B90((unsigned int)j);
    unk_140404230(0);
    unk_140404098(33984);
    unk_1404042E0(0);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(32823);
  }
  unk_1404046F0(36160, 0);
  unk_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  sub_14001B6A0();
  v12 = dword_140404A6C[73991626];
  if ( dword_140404A6C[73991626] )
  {
    qword_140302F58(518);
    v12 = dword_140404A6C[73991626];
  }
  if ( unk_14040488C && unk_140404A60 )
  {
    v13 = 37727;
    if ( !v12 )
      v13 = 37726;
    unk_140404A60(36001, v13);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v28);
}

