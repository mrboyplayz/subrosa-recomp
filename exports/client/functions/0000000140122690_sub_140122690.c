/* Address: 0x140122690 | Name: sub_140122690 | Size: 1550 bytes */
__int64 __fastcall sub_140122690(float a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, a3);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(1);
  qword_140302FE8(
    0,
    0,
    (unsigned int)(int)*(float *)&dword_140404A6C[284545191],
    (unsigned int)(int)*(float *)&dword_140404A6C[284545192]);
  *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D40;
  *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278DA0;
  *(_OWORD *)&dword_140404A6C[431564493] = xmmword_140278E80;
  *(_OWORD *)&dword_140404A6C[431564497] = xmmword_140279760;
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  unk_1404042E0(dword_140404A6C[71738045]);
  unk_140404338(dword_140404A6C[71738052], 1, &dword_140404A6C[284677591]);
  unk_140404338(dword_140404A6C[71738054], 1, &dword_140404A6C[284550403]);
  unk_140404378(dword_140404A6C[71738055], 1, 0, &dword_140404A6C[431564565]);
  unk_140404308(dword_140404A6C[71738086], 0);
  unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829866] + 284024944]);
  *(_QWORD *)&dword_140404A6C[456217208] = 6;
  dword_140404A6C[456217210] = 1065353216;
  dword_140404A6C[456217211] = -964689984;
  dword_140404A6C[456217215] = 1065353216;
  dword_140404A6C[456217216] = 1065353216;
  dword_140404A6C[456217217] = -964689984;
  *(float *)&dword_140404A6C[456217212] = (float)((float)(*(float *)&dword_140404A6C[284024505]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * -1.0))
                                                + (float)(*(float *)&dword_140404A6C[284024508]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1)))
                                        - *(float *)&dword_140404A6C[284024511];
  *(float *)&dword_140404A6C[456217213] = (float)((float)(*(float *)&dword_140404A6C[284024506]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * -1.0))
                                                + (float)(*(float *)&dword_140404A6C[284024509]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1)))
                                        - *(float *)&dword_140404A6C[284024512];
  *(float *)&dword_140404A6C[456217214] = (float)((float)(*(float *)&dword_140404A6C[284024507]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * -1.0))
                                                + (float)(*(float *)&dword_140404A6C[284024510]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1)))
                                        - *(float *)&dword_140404A6C[284024513];
  *(float *)&dword_140404A6C[456217220] = (float)((float)(*(float *)&dword_140404A6C[284024510]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1))
                                                + (float)(*(float *)&dword_140404A6C[284024507]
                                                        * *(float *)&dword_140404A6C[284024514]))
                                        - *(float *)&dword_140404A6C[284024513];
  *(float *)&dword_140404A6C[456217218] = (float)((float)(*(float *)&dword_140404A6C[284024508]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1))
                                                + (float)(*(float *)&dword_140404A6C[284024505]
                                                        * *(float *)&dword_140404A6C[284024514]))
                                        - *(float *)&dword_140404A6C[284024511];
  *(float *)&dword_140404A6C[456217219] = (float)((float)(*(float *)&dword_140404A6C[284024509]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1))
                                                + (float)(*(float *)&dword_140404A6C[284024506]
                                                        * *(float *)&dword_140404A6C[284024514]))
                                        - *(float *)&dword_140404A6C[284024512];
  *(float *)&dword_140404A6C[456217225] = (float)((float)(*(float *)&dword_140404A6C[284024506]
                                                        * *(float *)&dword_140404A6C[284024514])
                                                - (float)((float)(*(float *)&dword_140404A6C[284024514] * a1)
                                                        * *(float *)&dword_140404A6C[284024509]))
                                        - *(float *)&dword_140404A6C[284024512];
  v4 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
  *(_QWORD *)&dword_140404A6C[456217221] = 1065353216;
  *(float *)&dword_140404A6C[456217224] = (float)((float)(*(float *)&dword_140404A6C[284024505]
                                                        * *(float *)&dword_140404A6C[284024514])
                                                - (float)(*(float *)&dword_140404A6C[284024508]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1)))
                                        - *(float *)&dword_140404A6C[284024511];
  dword_140404A6C[456217223] = -964689984;
  *(_QWORD *)&dword_140404A6C[456217227] = 0;
  dword_140404A6C[456217229] = -964689984;
  dword_140404A6C[456217207] = 4;
  *(float *)&dword_140404A6C[456217226] = (float)((float)(*(float *)&dword_140404A6C[284024507]
                                                        * *(float *)&dword_140404A6C[284024514])
                                                - (float)((float)(*(float *)&dword_140404A6C[284024514] * a1)
                                                        * *(float *)&dword_140404A6C[284024510]))
                                        - *(float *)&dword_140404A6C[284024513];
  *(float *)&dword_140404A6C[456217230] = (float)((float)(*(float *)&dword_140404A6C[284024505]
                                                        * (float)-*(float *)&dword_140404A6C[284024514])
                                                - (float)(*(float *)&dword_140404A6C[284024508]
                                                        * (float)(*(float *)&dword_140404A6C[284024514] * a1)))
                                        - *(float *)&dword_140404A6C[284024511];
  *(float *)&dword_140404A6C[456217232] = (float)((float)(*(float *)&dword_140404A6C[284024507]
                                                        * (float)-*(float *)&dword_140404A6C[284024514])
                                                - (float)((float)(*(float *)&dword_140404A6C[284024514] * a1)
                                                        * *(float *)&dword_140404A6C[284024510]))
                                        - *(float *)&dword_140404A6C[284024513];
  *(float *)&dword_140404A6C[456217231] = (float)((float)(*(float *)&dword_140404A6C[284024506]
                                                        * (float)-*(float *)&dword_140404A6C[284024514])
                                                - (float)((float)(*(float *)&dword_140404A6C[284024514] * a1)
                                                        * *(float *)&dword_140404A6C[284024509]))
                                        - *(float *)&dword_140404A6C[284024512];
  unk_140404170(34962, v4, v5);
  unk_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  unk_1404043C8(1);
  unk_140404238(0);
  unk_140404238(1);
  unk_1404044A8(0, 3, 5126);
  unk_1404044A8(1, 3, 5126);
  qword_140302FF8(6, 0, dword_140404A6C[456217207]);
  unk_140404230(0);
  unk_140404230(1);
  unk_140404170(34962, 0, v6);
  unk_1404042E0(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  if ( dword_140404A6C[73991626] )
    qword_140302F58(518);
  LOBYTE(v7) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v7);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2884);
  return (*(__int64 (__fastcall **)(__int64))&dword_140404A6C[18215061])(2304);
}

