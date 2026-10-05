/* Address: 0x140124320 | Name: sub_140124320 | Size: 1310 bytes */
__int64 sub_140124320()
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int *v9; // rbx
  __int64 v10; // r14
  unsigned int *v11; // rsi
  unsigned int *v12; // rdi
  unsigned int *v13; // rbp
  __int64 v14; // r8
  _DWORD v15[10]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  float v18; // [rsp+48h] [rbp-70h]
  _OWORD v19[2]; // [rsp+50h] [rbp-68h] BYREF
  int v20; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+78h] [rbp-40h]

  if ( dword_140404A6C[284024893] )
  {
    dword_140404A6C[282486846] = 1148190720;
    dword_140404A6C[282486848] = 1147142144;
    dword_140404A6C[282486847] = 0;
    return MEMORY[0x1401F8B20]((unsigned __int64)v15 ^ v21);
  }
  else
  {
    v1 = dword_140404A6C[283830700];
    v2 = 44LL * (int)dword_140404A6C[283830700];
    dword_140404A6C[v2 + 284024933] = 512;
    dword_140404A6C[v2 + 284024934] = 512;
    dword_140404A6C[v2 + 284024935] = 1;
    dword_140404A6C[v2 + 284024936] = 6408;
    dword_140404A6C[v2 + 284024937] = 6408;
    dword_140404A6C[v2 + 284024938] = 33071;
    dword_140404A6C[v2 + 284024939] = 33071;
    dword_140404A6C[v2 + 284024940] = 9729;
    dword_140404A6C[v2 + 284024941] = 9729;
    v3 = *(void **)&dword_140404A6C[v2 + 284024945];
    *(_QWORD *)&dword_140404A6C[282486846] = 1147142144;
    dword_140404A6C[282486848] = 1147142144;
    free(v3);
    *(_QWORD *)&dword_140404A6C[v2 + 284024945] = 0;
    sub_14014D3E0(v1, 0);
    if ( unk_140404A60 )
      unk_140404A60(36001, 37726);
    (*(void (**)(void))&dword_140404A6C[18215093])();
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
    qword_140302F58(515);
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v4);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2884);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215061])(2304);
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
    (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, 1);
    (*(void (**)(void))&dword_140404A6C[18215089])();
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(16640);
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v5);
    HIDWORD(v17) = 0;
    v19[0] = xmmword_140278D30;
    v20 = 1065353216;
    v19[1] = xmmword_140278D30;
    *(float *)&v17 = *(float *)&dword_140404A6C[282486846] + 1024.0;
    v18 = *(float *)&dword_140404A6C[282486848] + 1024.0;
    sub_14007B2A0((__int64)v19, (float *)v19);
    sub_14007A2C0(0, 0, 1024, 640, 1024.0, 1024.0, 1024.0);
    sub_14007BE20((float *)&v17, (unsigned int *)v19);
    qword_140302FE8(0, 0, 512, 512);
    sub_14011CC30(0);
    if ( !dword_140404A6C[315570516] && !dword_140404A6C[318816604] )
    {
      unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791463] + 283793813], v6);
      unk_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791464] + 283793813], v7);
      unk_140404238(0);
      unk_140404238(1);
      unk_1404044A8(0, 3, 5126);
      v16 = 36;
      unk_1404044A8(1, 3, 5126);
      v15[8] = 1065353216;
      unk_140404468(2);
      v9 = &dword_140404A6C[40714349];
      v10 = 256;
      v11 = &dword_140404A6C[283827814];
      v12 = &dword_140404A6C[40714605];
      v13 = &dword_140404A6C[57491821];
      do
      {
        if ( (int)*v9 > 0 )
        {
          unk_1404042E0(dword_140404A6C[451221605]);
          unk_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
          unk_140404098(33984);
          unk_140404050(3553, dword_140404A6C[44 * *v11 + 284024944]);
          unk_140404808(4, v12, 5125, v13, *v9, v12 + 25165824);
        }
        v12 += 0x4000;
        v13 += 0x8000;
        v11 += 4;
        ++v9;
        --v10;
      }
      while ( v10 );
      unk_140404170(34963, 0, v8);
      unk_140404170(34962, 0, v14);
      unk_140404230(1);
      unk_140404230(0);
    }
    unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830700] + 284024944]);
    LODWORD(v16) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int64, int, int, __int64, float))&flt_140384000[131086])(
      3553,
      0,
      0,
      0,
      0,
      v16,
      512,
      512,
      v17,
      COERCE_FLOAT(LODWORD(v18)));
    return MEMORY[0x1401F8B20]((unsigned __int64)v15 ^ v21);
  }
}

