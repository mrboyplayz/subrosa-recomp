/* Address: 0x1400fb0a0 | Name: sub_1400FB0A0 | Size: 1070 bytes */
__int64 sub_1400FB0A0()
{
  unsigned int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // eax
  __int64 v6; // rcx
  char v7; // al
  int i; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  unsigned int *v16; // rbx
  _DWORD v18[20]; // [rsp+0h] [rbp-2C8h] BYREF
  _DWORD v19[4]; // [rsp+50h] [rbp-278h] BYREF
  _DWORD v20[16]; // [rsp+60h] [rbp-268h] BYREF
  _DWORD v21[2]; // [rsp+A0h] [rbp-228h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-220h]
  char v23; // [rsp+DFh] [rbp-1E9h]
  __int64 v24; // [rsp+2A0h] [rbp-28h]

  MEMORY[0x140198FA7](v19);
  dword_140404A6C[179457306] = 39;
  v0 = sub_140237448(0);
  srand(v0);
  *(_QWORD *)&dword_140404A6C[284024355] = 0;
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  sub_14006D930(
    "generating",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
    1);
  MEMORY[0x140198EF3](*(_QWORD *)&dword_140404A6C[137297751]);
  sub_140075650();
  *(_OWORD *)&dword_140404A6C[70087069] = xmmword_140279780;
  sub_140139E90(
    v2,
    v1,
    v3,
    v4,
    v18[8],
    1065353216,
    1065353216,
    1065353216,
    1065353216,
    v18[18],
    v19[0],
    v19[2],
    v20[0],
    v20[2],
    v20[4],
    v20[6],
    v20[8],
    v20[10],
    v20[12],
    v20[14],
    v21[0],
    v22);
  *(_OWORD *)&dword_140404A6C[225391181] = xmmword_140279810;
  dword_140404A6C[225391198] = 1061158912;
  dword_140404A6C[225391197] = 1115684864;
  *(_OWORD *)&dword_140404A6C[225391185] = xmmword_140279710;
  *(_OWORD *)&dword_140404A6C[225391189] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[225391193] = xmmword_140279490;
  sub_14007B2A0((__int64)&dword_140404A6C[225391188], (float *)&dword_140404A6C[225391188]);
  dword_140404A6C[193070975] = 3;
  *(_QWORD *)&dword_140404A6C[193070976] = 3;
  *(_QWORD *)&dword_140404A6C[193070967] = -1;
  dword_140404A6C[193070974] = -1;
  sub_14013CDF0();
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  v18[16] = 1065353216;
  v18[14] = 1065353216;
  v18[12] = 1065353216;
  v18[10] = 1065353216;
  sub_14006D930(
    "connecting",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
    1);
  MEMORY[0x140198EF3](*(_QWORD *)&dword_140404A6C[137297751]);
  if ( !(unsigned int)sub_1400A3F30() )
  {
    v5 = inet_addr("66.226.72.227");
    dword_140404A6C[280649181] = ntohl(v5);
    LOWORD(dword_140404A6C[280649182]) = 27592;
  }
  sub_1400E5F10();
  if ( (unsigned int)sub_140198AF0(v21) )
  {
    v23 = 0;
    v6 = 0;
    do
    {
      v7 = *((_BYTE *)v21 + v6);
      *((_BYTE *)&dword_140404A6C[73991096] + v6++) = v7;
    }
    while ( v7 );
    HIBYTE(dword_140404A6C[73991103]) = 0;
  }
  dword_140404A6C[278384725] = sub_140198A50(&dword_140404A6C[278384727]);
  dword_140404A6C[278384988] = sub_1401988C0(4);
  for ( i = 0; i < (int)dword_140404A6C[278384988]; ++i )
    sub_140198820(0x140000000LL + 528LL * i + 1117753312, &dword_140404A6C[132 * i + 278384992], (unsigned int)i, 4);
  dword_140404A6C[133919261] = 0;
  sub_14024C22C(&dword_140404A6C[278520373]);
  sub_140158AB0(v20, "client2.csk");
  sub_14024C22C(&dword_140404A6C[278520245]);
  sub_14008EAD0(1);
  dword_140404A6C[289301069] = 1;
  v13 = MEMORY[0x140198F9B](v10, v9, v11, v12);
  dword_140404A6C[283831312] = 0;
  dword_140404A6C[179668278] = v13 - 1000;
  v14 = 0;
  dword_140404A6C[283831453] = 25200;
  do
  {
    v15 = *((_BYTE *)&dword_140404A6C[73991224] + v14);
    *((_BYTE *)&dword_140404A6C[456202458] + v14++) = v15;
  }
  while ( v15 );
  dword_140404A6C[456202722] = 1;
  dword_140404A6C[456202453] = 1;
  *(_QWORD *)&dword_140404A6C[73991608] = 0;
  game_frame_update_candidate();
  closesocket((int)dword_140404A6C[289301079]);
  dword_140404A6C[289301071] = 0;
  sub_1401E0F20(*(_QWORD *)&dword_140404A6C[299853437]);
  v16 = &dword_140404A6C[299853565];
  do
  {
    sub_1401E2C30(*(_QWORD *)v16);
    v16 += 2;
  }
  while ( (__int64)v16 < (__int64)&dword_140404A6C[299853581] );
  return MEMORY[0x1401F8B20]((unsigned __int64)v18 ^ v24);
}

