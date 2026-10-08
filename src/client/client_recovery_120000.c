#include "shared_client.h"

// 14012250F: conditional instruction was optimized away because edx.4==2
// 14011FF96: variable 'v2' is possibly undefined
// 1401200EB: variable 'v5' is possibly undefined
// 1401200EB: variable 'v4' is possibly undefined
// 1401200EB: variable 'v6' is possibly undefined
// 1401200EB: variable 'v7' is possibly undefined
// 1401201B0: variable 'v10' is possibly undefined
// 1401201B0: variable 'v8' is possibly undefined
// 140120200: variable 'v11' is possibly undefined
// 140120345: variable 'v12' is possibly undefined
// 140120352: variable 'v18' is possibly undefined
// 1401203F6: variable 'v19' is possibly undefined
// 140120410: variable 'v20' is possibly undefined
// 14012044E: variable 'v21' is possibly undefined
// 14012045B: variable 'v25' is possibly undefined
// 140120773: variable 'v48' is possibly undefined
// 140120773: variable 'v49' is possibly undefined
// 140120782: variable 'v50' is possibly undefined
// 140120782: variable 'v51' is possibly undefined
// 1401207E2: variable 'v52' is possibly undefined
// 1401207E2: variable 'v53' is possibly undefined
// 1401211C3: variable 'v112' is possibly undefined
// 1401211F7: variable 'v113' is possibly undefined
// 140121256: variable 'v114' is possibly undefined
// 140121256: variable 'v115' is possibly undefined
// 140121256: variable 'v116' is possibly undefined
// 1401213AA: variable 'v118' is possibly undefined
// 14012140E: variable 'v119' is possibly undefined
// 14012161A: variable 'v140' is possibly undefined
// 140121699: variable 'v142' is possibly undefined
// 140121699: variable 'v141' is possibly undefined
// 1401216A3: variable 'v144' is possibly undefined
// 1401216A3: variable 'v143' is possibly undefined
// 140122532: variable 'v146' is possibly undefined
// 140122547: variable 'v258' is possibly undefined
// 140122547: variable 'v259' is possibly undefined
// 14012254C: variable 'v261' is possibly undefined
// 14012254C: variable 'v260' is possibly undefined
// 14012254C: variable 'v262' is possibly undefined
// 140122553: variable 'v145' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 1402794A0: using guessed type __int128 xmmword_1402794A0;
// 140279530: using guessed type __int128 xmmword_140279530;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F61BC: using guessed type int dword_1402F61BC;
// 1402F61C4: using guessed type int dword_1402F61C4;
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404043C8: using guessed type __int64 (__fastcall *unk_1404043C8)(_QWORD);
// 140404468: using guessed type double (__fastcall *unk_140404468)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404808: using guessed type __int64 (__fastcall *unk_140404808)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD);
// 140404A60: using guessed type __int64 (__fastcall *unk_140404A60)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980CD0: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD);
// 144980CE0: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD);
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D38: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D48: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 151E461B8: using guessed type unsigned int;
// 183EBC414: using guessed type unsigned int;
// 183EBF118: using guessed type unsigned int;
// 183F7A564: using guessed type unsigned int;
// 183F7A570: using guessed type unsigned int;
// 183F7A578: using guessed type unsigned int;
// 183F7C540: using guessed type unsigned int;
// 183F7C550: using guessed type unsigned int;
// 183F7C554: using guessed type unsigned int;
// 183F7C558: using guessed type unsigned int;
// 183F7C55C: using guessed type unsigned int;
// 183F7C560: using guessed type unsigned int;
// 183F7C564: using guessed type unsigned int;
// 183F7C568: using guessed type unsigned int;
// 183F7C56C: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 183F7C574: using guessed type unsigned int;
// 184178D00: using guessed type unsigned int;
// 184178D6C: using guessed type unsigned int;
// 184178D70: using guessed type unsigned int;
// 184178D74: using guessed type unsigned int;
// 18417DE78: using guessed type unsigned int;
// 18417DE7C: using guessed type unsigned int;
// 18417DE80: using guessed type unsigned int;
// 18417DE84: using guessed type unsigned int;
// 1841FA224: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5C4: using guessed type unsigned int;
// 1A724E5C8: using guessed type unsigned int;
// 1A724E5CC: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5D4: using guessed type unsigned int;
// 1A724E5D8: using guessed type unsigned int;
// 1A724E5DC: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5E4: using guessed type unsigned int;
// 1A724E5E8: using guessed type unsigned int;
// 1A724E5EC: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E5F8: using guessed type unsigned int;
// 1A724E5FC: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E634: using guessed type unsigned int;
// 1A724E638: using guessed type unsigned int;
// 1A724E63C: using guessed type unsigned int;
// 1A724E640: using guessed type unsigned int;
// 1A724E650: using guessed type unsigned int;
// 1A724E660: using guessed type unsigned int;
// 1A724E670: using guessed type unsigned int;
// 1A724E680: using guessed type unsigned int;
// 1A724E690: using guessed type unsigned int;
// 1A724E6A0: using guessed type unsigned int;
// 1A724E6B0: using guessed type unsigned int;
// 1A724E6C0: using guessed type unsigned int;
// 1A724E6D0: using guessed type unsigned int;
// 1A724E6E0: using guessed type unsigned int;
// 1A724E6F0: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (0000000140122690) ----------------------------------------------------
__int64            sub_140122690(float a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx

  LOBYTE(a3) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(1,770);
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
  qword_1404042E0(dword_140404A6C[71738045]);
  qword_140404338(dword_140404A6C[71738052], 1, &dword_140404A6C[284677591]);
  qword_140404338(dword_140404A6C[71738054], 1, &dword_140404A6C[284550403]);
  qword_140404378(dword_140404A6C[71738055], 1, 0, &dword_140404A6C[431564565]);
  qword_140404308(dword_140404A6C[71738086], 0);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829866] + 284024944]);
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
  qword_140404170(34962, v4, v5);
  qword_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  ((void (*)(unsigned,float,float))unk_1404043C8)(1,0.5f,0.5f);
  qword_140404238(0);
  qword_140404238(1);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(0));
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(12));
  qword_140302FF8(6, 0, dword_140404A6C[456217207]);
  qword_140404230(0);
  qword_140404230(1);
  qword_140404170(34962, 0, v6);
  qword_1404042E0(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  if ( dword_140404A6C[73991626] )
    qword_140302F58(518);
  LOBYTE(v7) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v7);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  return (*(__int64 (           **)(__int64))&dword_140404A6C[18215061])(2304);
}

// 140122B32: variable 'v5' is possibly undefined
// 140122C13: variable 'v6' is possibly undefined
// 140122C4D: variable 'v7' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D40: using guessed type __int128 xmmword_140278D40;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278DA0: using guessed type __int128 xmmword_140278DA0;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140278E80: using guessed type __int128 xmmword_140278E80;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279760: using guessed type __int128 xmmword_140279760;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404043C8: using guessed type __int64 (__fastcall *unk_1404043C8)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E580: using guessed type unsigned int;
// 1A724E590: using guessed type unsigned int;
// 1A724E5A0: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD059454: using guessed type unsigned int;
// 1AD059458: using guessed type unsigned int;
// 1AD059468: using guessed type unsigned int;
// 1AD05946C: using guessed type unsigned int;
// 1AD059470: using guessed type unsigned int;
// 1AD059480: using guessed type unsigned int;
// 1AD059488: using guessed type unsigned int;
// 1AD059498: using guessed type unsigned int;
// 1AD0594A0: using guessed type unsigned int;

//----- (0000000140122CA0) ----------------------------------------------------
double            sub_140122CA0(float a1, float *a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned int v6; // xmm0_4
  unsigned int v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  unsigned int v12; // xmm0_4
  unsigned int v13; // xmm2_4
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm2_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm6_4
  __int64 v19; // r8
  __int64 v20; // rcx

  LOBYTE(a3) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(1,770);
  qword_140302FE8(0, 0, 512, 512);
  *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D40;
  *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278DA0;
  *(_OWORD *)&dword_140404A6C[431564493] = xmmword_140278EB0;
  *(_OWORD *)&dword_140404A6C[431564497] = xmmword_140279730;
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
  qword_1404042E0(dword_140404A6C[71738045]);
  qword_140404338(dword_140404A6C[71738052], 1, &dword_140404A6C[284677591]);
  qword_140404338(dword_140404A6C[71738054], 1, &dword_140404A6C[284550403]);
  qword_140404378(dword_140404A6C[71738055], 1, 0, &dword_140404A6C[431564565]);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830721] + 284024944]);
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 6;
  v5 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
  *(float *)&v6 = (float)((float)(a1 * a2[5]) - a2[2]) - a2[8];
  *(float *)&v7 = (float)((float)(a1 * a2[3]) - *a2) - a2[6];
  *(float *)&dword_140404A6C[456217213] = (float)((float)(a1 * a2[4]) - a2[1]) - a2[7];
  v8 = a1;
  dword_140404A6C[456217214] = v6;
  v9 = a1;
  dword_140404A6C[456217207] = 1;
  dword_140404A6C[456217209] = 0;
  dword_140404A6C[456217212] = v7;
  v10 = a1;
  v11 = -a1;
  *(_QWORD *)&dword_140404A6C[456217210] = 1065353216;
  *(float *)&v12 = (float)((float)(v9 * a2[5]) + a2[2]) - a2[8];
  *(float *)&v13 = (float)((float)(v10 * a2[3]) + *a2) - a2[6];
  *(float *)&dword_140404A6C[456217219] = (float)((float)(v8 * a2[4]) + a2[1]) - a2[7];
  dword_140404A6C[456217220] = v12;
  dword_140404A6C[456217207] = 2;
  dword_140404A6C[456217215] = 1065353216;
  dword_140404A6C[456217218] = v13;
  *(_QWORD *)&dword_140404A6C[456217216] = 1065353216;
  *(float *)&v14 = (float)((float)(v11 * a2[5]) + a2[2]) - a2[8];
  *(float *)&v15 = (float)((float)(v11 * a2[3]) + *a2) - a2[6];
  *(float *)&dword_140404A6C[456217225] = (float)((float)(v11 * a2[4]) + a2[1]) - a2[7];
  dword_140404A6C[456217226] = v14;
  dword_140404A6C[456217207] = 3;
  *(_QWORD *)&dword_140404A6C[456217221] = 1065353216;
  dword_140404A6C[456217224] = v15;
  dword_140404A6C[456217223] = 0;
  *(float *)&v16 = (float)((float)(v11 * a2[3]) - *a2) - a2[6];
  *(float *)&v17 = (float)((float)(v11 * a2[4]) - a2[1]) - a2[7];
  *(float *)&v18 = (float)((float)(v11 * a2[5]) - a2[2]) - a2[8];
  *(_QWORD *)&dword_140404A6C[456217227] = 0;
  dword_140404A6C[456217229] = 0;
  dword_140404A6C[456217230] = v16;
  dword_140404A6C[456217231] = v17;
  dword_140404A6C[456217232] = v18;
  dword_140404A6C[456217207] = 4;
  qword_140404170(34962, v5, v19);
  qword_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  qword_140404238(0);
  qword_140404238(1);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(0));
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(12));
  qword_140302FF8(6, 0, dword_140404A6C[456217207]);
  qword_140404230(0);
  qword_140404230(1);
  qword_1404042E0(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v20) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v20);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  return (*(double (           **)(__int64))&dword_140404A6C[18215101])(3042);
}

// 140123063: variable 'v19' is possibly undefined
// 14012313C: variable 'v20' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D40: using guessed type __int128 xmmword_140278D40;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278DA0: using guessed type __int128 xmmword_140278DA0;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140278EB0: using guessed type __int128 xmmword_140278EB0;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279730: using guessed type __int128 xmmword_140279730;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E580: using guessed type unsigned int;
// 1A724E590: using guessed type unsigned int;
// 1A724E5A0: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD059450: using guessed type unsigned int;
// 1AD059454: using guessed type unsigned int;
// 1AD05945C: using guessed type unsigned int;
// 1AD059464: using guessed type unsigned int;
// 1AD059468: using guessed type unsigned int;
// 1AD05946C: using guessed type unsigned int;
// 1AD059474: using guessed type unsigned int;
// 1AD05947C: using guessed type unsigned int;
// 1AD059480: using guessed type unsigned int;
// 1AD059488: using guessed type unsigned int;
// 1AD05948C: using guessed type unsigned int;
// 1AD059494: using guessed type unsigned int;
// 1AD059498: using guessed type unsigned int;
// 1AD0594A0: using guessed type unsigned int;
// 1AD0594A4: using guessed type unsigned int;
// 1AD0594A8: using guessed type unsigned int;
// 1AD0594AC: using guessed type unsigned int;

//----- (0000000140123190)


// 140123063: variable 'v19' is possibly undefined
// 14012313C: variable 'v20' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D40: using guessed type __int128 xmmword_140278D40;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278DA0: using guessed type __int128 xmmword_140278DA0;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140278EB0: using guessed type __int128 xmmword_140278EB0;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279730: using guessed type __int128 xmmword_140279730;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E580: using guessed type unsigned int;
// 1A724E590: using guessed type unsigned int;
// 1A724E5A0: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD059450: using guessed type unsigned int;
// 1AD059454: using guessed type unsigned int;
// 1AD05945C: using guessed type unsigned int;
// 1AD059464: using guessed type unsigned int;
// 1AD059468: using guessed type unsigned int;
// 1AD05946C: using guessed type unsigned int;
// 1AD059474: using guessed type unsigned int;
// 1AD05947C: using guessed type unsigned int;
// 1AD059480: using guessed type unsigned int;
// 1AD059488: using guessed type unsigned int;
// 1AD05948C: using guessed type unsigned int;
// 1AD059494: using guessed type unsigned int;
// 1AD059498: using guessed type unsigned int;
// 1AD0594A0: using guessed type unsigned int;
// 1AD0594A4: using guessed type unsigned int;
// 1AD0594A8: using guessed type unsigned int;
// 1AD0594AC: using guessed type unsigned int;



// 140123063: variable 'v19' is possibly undefined
// 14012313C: variable 'v20' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D40: using guessed type __int128 xmmword_140278D40;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278DA0: using guessed type __int128 xmmword_140278DA0;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140278EB0: using guessed type __int128 xmmword_140278EB0;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279730: using guessed type __int128 xmmword_140279730;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E580: using guessed type unsigned int;
// 1A724E590: using guessed type unsigned int;
// 1A724E5A0: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD059450: using guessed type unsigned int;
// 1AD059454: using guessed type unsigned int;
// 1AD05945C: using guessed type unsigned int;
// 1AD059464: using guessed type unsigned int;
// 1AD059468: using guessed type unsigned int;
// 1AD05946C: using guessed type unsigned int;
// 1AD059474: using guessed type unsigned int;
// 1AD05947C: using guessed type unsigned int;
// 1AD059480: using guessed type unsigned int;
// 1AD059488: using guessed type unsigned int;
// 1AD05948C: using guessed type unsigned int;
// 1AD059494: using guessed type unsigned int;
// 1AD059498: using guessed type unsigned int;
// 1AD0594A0: using guessed type unsigned int;
// 1AD0594A4: using guessed type unsigned int;
// 1AD0594A8: using guessed type unsigned int;
// 1AD0594AC: using guessed type unsigned int;

__int64 sub_140123190()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int *v8; // rdi
  __int64 v9; // r14
  unsigned int *v10; // rbx
  unsigned int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // edi
  int *v17; // rbx
  __int64 v18; // r8
  int v19; // esi
  unsigned int *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r8
  float *v29; // rsi
  float *v30; // rax
  float *v31; // r8
  signed __int64 v32; // rcx
  __int64 v33; // r10
  float v34; // xmm3_4
  __int64 v35; // rdx
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float *v39; // r14
  float *v40; // rax
  __int64 v41; // r11
  float *v42; // r8
  signed __int64 v43; // rcx
  float v44; // xmm3_4
  __int64 v45; // rdx
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm6_4
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rdx
  float *v57; // rax
  signed __int64 v58; // rdi
  __int64 v59; // r8
  float v60; // xmm3_4
  __int64 v61; // rcx
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm6_4
  float *v65; // rax
  float *v66; // r8
  signed __int64 v67; // rcx
  __int64 v68; // r10
  float v69; // xmm3_4
  __int64 v70; // rdx
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm6_4
  float *v74; // rax
  __int64 v75; // r8
  signed __int64 v76; // rbx
  float v77; // xmm3_4
  __int64 v78; // rcx
  float v79; // xmm4_4
  float v80; // xmm5_4
  float v81; // xmm6_4
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v100; // [rsp+8h] [rbp-69h] BYREF
  __int64 v101; // [rsp+28h] [rbp-49h]
  __int64 v102; // [rsp+30h] [rbp-41h]
  _Alignas(16) unsigned sr_stencil_pass_matrix[16];
  __int64 v107; // [rsp+78h] [rbp+7h]

  unk_140404718(36160, 36064, 3553, dword_140404A6C[44 * dword_140404A6C[283829866] + 284024944], 0);
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215091])(0);
  if ( dword_140404A6C[73991626] )
    (*(void (**)(double))&dword_140404A6C[18215093])(0.0);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(17664);
  if ( dword_140404A6C[73991626] )
    (*(void (**)(double))&dword_140404A6C[18215093])(0x1.0000000000000p+0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215095])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  qword_1404042E0(dword_140404A6C[71737985]);
  qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
  qword_140404378(dword_140404A6C[71737991], 1, 0, &dword_140404A6C[431564533]);
  if ( !dword_140404A6C[315570516] && !dword_140404A6C[318816604] )
  {
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791463] + 283793813], v5);
    qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791464] + 283793813], v6);
    qword_140404238(0);
    v102 = 0;
    LODWORD(v101) = 64;
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0,3,5126,0,64,NULL);
    v8 = &dword_140404A6C[40714349];
    v9 = 256;
    v10 = &dword_140404A6C[40714605];
    v11 = &dword_140404A6C[57491821];
    do
    {
      if ( (int)*v8 > 0 )
        unk_140404808(4, v10, 5125, v11, *v8, v10 + 25165824);
      v10 += 0x4000;
      v11 += 0x8000;
      ++v8;
      --v9;
    }
    while ( v9 );
    qword_140404170(34963, 0, v7);
    qword_140404170(34962, 0, v12);
    qword_140404230(0);
  }
  sub_140189E80(1, v4, v5);
  qword_140404238(0);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791462] + 283793813], v13);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791465] + 283793813], v14);
  v16 = 0;
  if ( (int)dword_140404A6C[70074733] > 0 )
  {
    v17 = (int *)&dword_140404A6C[70074734];
    do
    {
      sub_14011DDB0(*v17, 1);
      ++v16;
      ++v17;
    }
    while ( v16 < (int)dword_140404A6C[70074733] );
  }
  qword_140404170(34963, 0, v15);
  qword_140404170(34962, 0, v18);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(32823);
  qword_140404230(0);
  qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
  qword_140404378(dword_140404A6C[71737991], 1, 0, &dword_140404A6C[431564533]);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944]);
  qword_140404308(dword_140404A6C[71738025], 1);
  sub_1400D22E0(1);
  qword_140404308(dword_140404A6C[71738025], 0);
  sub_140124AF0(1, 0);
  v19 = 0;
  if ( (int)dword_140404A6C[431564581] > 0 )
  {
    v20 = &dword_140404A6C[431138501];
    do
    {
      if ( v20[2] )
      {
        v21 = *v20;
        v22 = 26LL * v19;
        if ( !*v20 )
        {
          v23 = (int)dword_140404A6C[283827574];
          sub_14007B990(&dword_140404A6C[v22 + 431138504], &dword_140404A6C[v22 + 431138510]);
          qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
          qword_140404238(0);
          qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v23 + 283790166] + 283793813], v24);
          v102 = 0;
          v23 *= 3632;
          LODWORD(v101) = 4 * *(unsigned int *)((char *)&dword_140404A6C[178527462] + v23);
          ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0,3,5126,0,(int)(uint32_t)v101,NULL);
          unk_140404470(3, &dword_140404A6C[284554733]);
          qword_140302FF8(4, 0, 3 * *(unsigned int *)((char *)&dword_140404A6C[178527465] + v23));
          qword_140404170(34962, 0, v25);
          qword_140404230(0);
          *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
          *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
          *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
          sub_14007A0E0(
            &dword_140404A6C[431564533],
            (__int64)&dword_140404A6C[431564517],
            (__int64)&dword_140404A6C[431564501]);
          sub_14007A0E0(
            &dword_140404A6C[431564565],
            (__int64)&dword_140404A6C[431564533],
            (__int64)&dword_140404A6C[431564485]);
          v21 = *v20;
        }
        if ( v21 == 1 )
        {
          v26 = (int)dword_140404A6C[283827769];
          sub_14007B990(&dword_140404A6C[v22 + 431138504], &dword_140404A6C[v22 + 431138510]);
          qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
          qword_140404238(0);
          qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v26 + 283790166] + 283793813], v27);
          v102 = 0;
          v26 *= 3632;
          LODWORD(v101) = 4 * *(unsigned int *)((char *)&dword_140404A6C[178527462] + v26);
          ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0,3,5126,0,(int)(uint32_t)v101,NULL);
          unk_140404470(3, &dword_140404A6C[284554733]);
          qword_140302FF8(4, 0, 3 * *(unsigned int *)((char *)&dword_140404A6C[178527465] + v26));
          qword_140404170(34962, 0, v28);
          qword_140404230(0);
          *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
          *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
          *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
          sub_14007A0E0(
            &dword_140404A6C[431564533],
            (__int64)&dword_140404A6C[431564517],
            (__int64)&dword_140404A6C[431564501]);
          sub_14007A0E0(
            &dword_140404A6C[431564565],
            (__int64)&dword_140404A6C[431564533],
            (__int64)&dword_140404A6C[431564485]);
        }
      }
      ++v19;
      v20 += 26;
    }
    while ( v19 < (int)dword_140404A6C[431564581] );
  }
  v29 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v30 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v31 = (float *)&dword_140404A6C[431564518];
  v32 = (char *)&dword_140404A6C[431564505] - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v33 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v34 = *(v31 - 1);
    v35 = 4;
    v36 = *v31;
    v37 = v31[1];
    v38 = v31[2];
    do
    {
      *v30 = (float)((float)((float)(v34 * *(float *)((char *)v30 + v32 - 16))
                           + (float)(v36 * *(float *)((char *)v30 + v32)))
                   + (float)(v37 * *(float *)((char *)v30 + v32 + 16)))
           + (float)(v38 * *(float *)((char *)v30 + v32 + 32));
      ++v30;
      --v35;
    }
    while ( v35 );
    v31 += 4;
    v32 -= 16LL;
    --v33;
  }
  while ( v33 );
  v39 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564533] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v40 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  v41 = 4;
  v42 = (float *)&dword_140404A6C[431564534];
  v43 = (char *)&dword_140404A6C[431564489] - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    v44 = *(v42 - 1);
    v45 = 4;
    v46 = *v42;
    v47 = v42[1];
    v48 = v42[2];
    do
    {
      *v40 = (float)((float)((float)(v44 * *(float *)((char *)v40 + v43 - 16))
                           + (float)(v46 * *(float *)((char *)v40 + v43)))
                   + (float)(v47 * *(float *)((char *)v40 + v43 + 16)))
           + (float)(v48 * *(float *)((char *)v40 + v43 + 32));
      ++v40;
      --v45;
    }
    while ( v45 );
    v42 += 4;
    v43 -= 16LL;
    --v41;
  }
  while ( v41 );
  *(_OWORD *)&dword_140404A6C[431564565] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
  sub_1401259B0(1, v49, v50);
  qword_1404042E0(0);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944], 0);
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.0f,0.0f,0.0f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(0,0,0,0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  v55 = 518;
  if ( dword_140404A6C[73991626] )
    v55 = 515;
  qword_140302F58(v55);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2960);
  unk_1404041E0(1029, 519, 0, 0xFFFFFFFFLL);
  unk_1404041E8(1029, 0xFFFFFFFFLL);
  unk_1404041D8(1029, 7680, 7680, 34056);
  unk_1404041E0(1028, 519, 0, 0xFFFFFFFFLL);
  unk_1404041E8(1028, 0xFFFFFFFFLL);
  unk_1404041D8(1028, 7680, 7680, 34055);
  sub_1400946D0();
  LOBYTE(v56) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,0,0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2960);
  (*(void (           **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
  qword_140302F50(7680, 7680, 7680);
  qword_140302F48(514, 0, 0xFFFFFFFFLL);
  qword_140302FE8(
    0,
    0,
    (unsigned int)(int)*(float *)&dword_140404A6C[284545191],
    (unsigned int)(int)*(float *)&dword_140404A6C[284545192]);
  *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564493] = xmmword_140278E90;
  *(_OWORD *)&dword_140404A6C[431564497] = xmmword_140279720;
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v57 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v58 = (char *)&dword_140404A6C[431564505] - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v59 = 4;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  do
  {
    v60 = *(v29 - 1);
    v61 = 4;
    v62 = *v29;
    v63 = v29[1];
    v64 = v29[2];
    do
    {
      *v57 = (float)((float)((float)(v60 * *(float *)((char *)v57 + v58 - 16))
                           + (float)(v62 * *(float *)((char *)v57 + v58)))
                   + (float)(v63 * *(float *)((char *)v57 + v58 + 16)))
           + (float)(v64 * *(float *)((char *)v57 + v58 + 32));
      ++v57;
      --v61;
    }
    while ( v61 );
    v29 += 4;
    v58 -= 16LL;
    --v59;
  }
  while ( v59 );
  v65 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v66 = (float *)&dword_140404A6C[431564502];
  *(_OWORD *)&dword_140404A6C[431564533] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v67 = (char *)&dword_140404A6C[431564489] - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v68 = 4;
  *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    v69 = *(v66 - 1);
    v70 = 4;
    v71 = *v66;
    v72 = v66[1];
    v73 = v66[2];
    do
    {
      *v65 = (float)((float)((float)(v69 * *(float *)((char *)v65 + v67 - 16))
                           + (float)(v71 * *(float *)((char *)v65 + v67)))
                   + (float)(v72 * *(float *)((char *)v65 + v67 + 16)))
           + (float)(v73 * *(float *)((char *)v65 + v67 + 32));
      ++v65;
      --v70;
    }
    while ( v70 );
    v66 += 4;
    v67 -= 16LL;
    --v68;
  }
  while ( v68 );
  v74 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  *(_OWORD *)&dword_140404A6C[431564549] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  v75 = 4;
  v76 = (char *)&dword_140404A6C[431564489] - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  *(_OWORD *)&dword_140404A6C[431564553] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  *(_OWORD *)&dword_140404A6C[431564557] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  *(_OWORD *)&dword_140404A6C[431564561] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    v77 = *(v39 - 1);
    v78 = 4;
    v79 = *v39;
    v80 = v39[1];
    v81 = v39[2];
    do
    {
      *v74 = (float)((float)((float)(v77 * *(float *)((char *)v74 + v76 - 16))
                           + (float)(v79 * *(float *)((char *)v74 + v76)))
                   + (float)(v80 * *(float *)((char *)v74 + v76 + 16)))
           + (float)(v81 * *(float *)((char *)v74 + v76 + 32));
      ++v74;
      --v78;
    }
    while ( v78 );
    v39 += 4;
    v76 -= 16LL;
    --v75;
  }
  while ( v75 );
  *(_OWORD *)&dword_140404A6C[431564565] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  qword_140404050(3553, dword_140404A6C[451221642]);
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796E0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(-1.0f, 1.0f, 0.0f);
  sub_14007D420(1.0f, 1.0f, 0.0f);
  sub_14007D420(1.0f, -1.0f, 0.0f);
  sub_14007D420(-1.0f, -1.0f, 0.0f);
  sub_14006E0D0(v95, v94, v96);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2960);
  LOBYTE(v97) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  if ( dword_140404A6C[73991626] )
    qword_140302F58(518);
  LOBYTE(v98) = 1;
  (*(void (**)(unsigned char))&dword_140404A6C[18215099])(1);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  return 0; /* compatibility result discarded by all reviewed callers */
}
//----- (0000000140123F80) ----------------------------------------------------
__int64            sub_140123F80(int a1)
{
  int i; // ebx
  float sr_terrain_light[3]; // native rsp+20h..28h vec3 upload
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140123F80[64];
#define v4 (*(__int64 (*))(void *)(sr_frame_140123F80 + 0)) /* [rsp+0h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_140123F80 + 48)) /* [rsp+30h] */

  if ( !a1 )
  {
    qword_1404042E0(dword_140404A6C[71738165]);
    qword_140404338(dword_140404A6C[71738170], 1, &dword_140404A6C[284550403]);
    sr_terrain_light[0] = *(float *)&dword_140404A6C[284545205] * 0.5;
    sr_terrain_light[2] = *(float *)&dword_140404A6C[284545207] * 0.5;
    sr_terrain_light[1] = *(float *)&dword_140404A6C[284545206] * 0.5;
    qword_140404338(dword_140404A6C[71738171], 1, sr_terrain_light);
    sr_terrain_light[0] = *(float *)&dword_140404A6C[284545209] * 0.5;
    sr_terrain_light[1] = *(float *)&dword_140404A6C[284545210] * 0.5;
    sr_terrain_light[2] = *(float *)&dword_140404A6C[284545211] * 0.5;
    qword_140404338(dword_140404A6C[71738172], 1, sr_terrain_light);
    qword_140404378(dword_140404A6C[71738174], 1, 0, &dword_140404A6C[431564565]);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830717] + 284024944]);
    unk_140404098(33985);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830715] + 284024944]);
    unk_140404098(33986);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830717] + 284024944]);
    unk_140404098(33988);
    qword_140404050(3553, dword_140404A6C[451221642]);
  }
  unk_140404098(33987);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944]);
  qword_140404238(0);
  for ( i = 0; i < 64; ++i )
    sub_1400D2B90(i);
  qword_140404230(0);
  if ( !a1 )
  {
    unk_140404098(33984);
    qword_1404042E0(0);
  }
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(32823);
  return 0; /* the function has no caller */
}
#undef v4
#undef v8

// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);

//----- (00000001401241B0) ----------------------------------------------------
double            sub_1401241B0(int a1)
{
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(32823);
  (*(void (**)(float,float))&flt_140384000[131078])(1.0f, 1.0f); /* glPolygonOffset: native XMM0, XMM1 */
  if ( !a1 )
  {
    qword_1404042E0(dword_140404A6C[71738165]);
    qword_140404338(dword_140404A6C[71738170], 1, &dword_140404A6C[284550403]);
    qword_140404338(dword_140404A6C[71738171], 1, &dword_140404A6C[284545205]);
    qword_140404338(dword_140404A6C[71738172], 1, &dword_140404A6C[284545209]);
    qword_140404378(dword_140404A6C[71738174], 1, 0, &dword_140404A6C[431564565]);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830714] + 284024944]);
    unk_140404098(33985);
    (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830715] + 284024944]);
    unk_140404098(33986);
    (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830716] + 284024944]);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
    unk_140404098(33985);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
    unk_140404098(33984);
    qword_1404042E0(0);
  }
  return (*(double (           **)(__int64))&dword_140404A6C[18215101])(32823);
}

// 140384000: using guessed type float flt_140384000[131092];
// 140404018: using guessed type __int64 (*)(void);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (0000000140124320) ----------------------------------------------------
__int64 sub_140124320()
{
  int v1; // edi
  __int64 v2; // rbx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int *v13; // rbx
  __int64 v14; // r14
  unsigned int *v15; // rsi
  unsigned int *v16; // rdi
  unsigned int *v17; // rbp
  __int64 v18; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140124320[128];
#define v19 (*(_DWORD (*)[10])(void *)(sr_frame_140124320 + 0)) /* [rsp+0h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140124320 + 40)) /* [rsp+28h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_140124320 + 64)) /* [rsp+40h] */
#define v22 (*(float (*))(void *)(sr_frame_140124320 + 72)) /* [rsp+48h] */
#define v23 (*(_OWORD (*)[2])(void *)(sr_frame_140124320 + 80)) /* [rsp+50h] */
#define v24 (*(int (*))(void *)(sr_frame_140124320 + 112)) /* [rsp+70h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140124320 + 120)) /* [rsp+78h] */

  if ( dword_140404A6C[284024893] )
  {
    dword_140404A6C[282486846] = 1148190720;
    dword_140404A6C[282486848] = 1147142144;
    dword_140404A6C[282486847] = 0;
    return 0; /* reset caller ignores native EAX */
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
    (*(void (**)(double))&dword_140404A6C[18215093])(1.0);
    (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
    qword_140302F58(515);
    LOBYTE(v4) = 1;
    (*(void (**)(unsigned char))&dword_140404A6C[18215099])(1);
    (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
    (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
    (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,1);
    (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.0f,0.0f,0.0f,1.0f);
    (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
    LOBYTE(v9) = 1;
    (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
    HIDWORD(v21) = 0;
    v23[0] = xmmword_140278D30;
    v24 = 1065353216;
    v23[1] = xmmword_140278D30;
    *(float *)&v21 = *(float *)&dword_140404A6C[282486846] + 1024.0;
    v22 = *(float *)&dword_140404A6C[282486848] + 1024.0;
    sub_14007B2A0((__int64)v23, (float *)v23, sr_export_float_lane_container(1070141403));
    sub_14007A2C0(0, 0, 1024, 640, 1024.0, 1024.0, 1024.0);
    sub_14007BE20((float *)&v21, (unsigned int *)v23);
    qword_140302FE8(0, 0, 512, 512);
    sub_14011CC30(0);
    if ( !dword_140404A6C[315570516] && !dword_140404A6C[318816604] )
    {
      qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791463] + 283793813], v10);
      qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791464] + 283793813], v11);
      qword_140404238(0);
      qword_140404238(1);
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      v20 = 36;
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      v19[8] = 1065353216;
      ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
      v13 = &dword_140404A6C[40714349];
      v14 = 256;
      v15 = &dword_140404A6C[283827814];
      v16 = &dword_140404A6C[40714605];
      v17 = &dword_140404A6C[57491821];
      do
      {
        if ( (int)*v13 > 0 )
        {
          qword_1404042E0(dword_140404A6C[451221605]);
          qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
          unk_140404098(33984);
          qword_140404050(3553, dword_140404A6C[44 * *v15 + 284024944]);
          unk_140404808(4, v16, 5125, v17, *v13, v16 + 25165824);
        }
        v16 += 0x4000;
        v17 += 0x8000;
        v15 += 4;
        ++v13;
        --v14;
      }
      while ( v14 );
      qword_140404170(34963, 0, v12);
      qword_140404170(34962, 0, v18);
      qword_140404230(1);
      qword_140404230(0);
    }
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830700] + 284024944]);
    LODWORD(v20) = 0;
    (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int64, int, int, __int64, float))&flt_140384000[131086])(
      3553,
      0,
      0,
      0,
      0,
      v20,
      512,
      512,
      v21,
      COERCE_FLOAT(LODWORD(v22)));
    return 0; /* reset caller ignores native EAX */
  }
}
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

// 1401244A4: variable 'v4' is possibly undefined
// 1401244F4: variable 'v6' is possibly undefined
// 1401244F4: variable 'v5' is possibly undefined
// 1401244F4: variable 'v7' is possibly undefined
// 1401244F4: variable 'v8' is possibly undefined
// 140124513: variable 'v9' is possibly undefined
// 14012461B: variable 'v10' is possibly undefined
// 140124635: variable 'v11' is possibly undefined
// 140124776: variable 'v12' is possibly undefined
// 140124783: variable 'v18' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140384000: using guessed type float flt_140384000[131092];
// 140404038: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD, _QWORD, _DWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404468: using guessed type double (__fastcall *unk_140404468)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404808: using guessed type __int64 (__fastcall *unk_140404808)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD);
// 140404A60: using guessed type __int64 (__fastcall *unk_140404A60)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D40: using guessed type __int64 (*)(void);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 18399EB64: using guessed type unsigned int;
// 18399EB68: using guessed type unsigned int;
// 18399EB6C: using guessed type unsigned int;
// 183EBF11C: using guessed type unsigned int;

//----- (0000000140124840) ----------------------------------------------------
double            sub_140124840(int a1, unsigned int *a2, _DWORD *a3, int a4, int *a5, __int64 a6)
{
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  double result; // xmm0_8

  v8 = a1;
  if ( a4 )
  {
    if ( a4 == 2 )
    {
      qword_140404050(3553, dword_140404A6C[44 * *a5 + 284024944]);
      sub_14007B990(a2, a3);
    }
    else
    {
      sub_14007B990(a2, a3);
      if ( a4 == 1 )
        qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
    }
    v10 = 0;
  }
  else
  {
    unk_140404098(33984);
    qword_140404050(3553, dword_140404A6C[44 * *a5 + 284024944]);
    unk_140404098(33986);
    qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
    sub_14007B990(a2, a3);
    qword_140404378(dword_140404A6C[71737874], 1, 0, &dword_140404A6C[431564565]);
    qword_140404238(0);
    qword_140404238(1);
    v10 = 2;
  }
  qword_140404238(v10);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v8 + 283790166] + 283793813], v11);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v8+178527462]),(const void *)(intptr_t)(0));
  if ( !a4 )
  {
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v8+178527462]),(const void *)(intptr_t)(12));
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v8+178527462]),(const void *)(intptr_t)(20));
  }
  unk_140404470(3, a6);
  qword_140302FF8(4, 0, 3 * dword_140404A6C[908 * v8 + 178527465]);
  qword_140404170(34962, 0, v12);
  qword_140404230(0);
  if ( !a4 )
  {
    qword_140404230(1);
    qword_140404230(2);
  }
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  result = 0.0;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  if ( !a4 )
    return unk_140404098(33984);
  return result;
}

// 140124980: variable 'v11' is possibly undefined
// 140124A40: variable 'v12' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (0000000140124AF0) ----------------------------------------------------
double            sub_140124AF0(int a1, int a2)
{
  int v2; // edi
  signed int v4; // ecx
  signed int v5; // r12d
  unsigned int v6; // ebp
  unsigned int *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  double result; // xmm0_8
  int v15; // [rsp+80h] [rbp+18h]

  v2 = a2;
  if ( !dword_140404A6C[179668287] )
  {
    qword_140404308(dword_140404A6C[71737885], 0);
    qword_140404238(0);
    if ( (a1 & 0xFFFFFFFD) == 0 )
    {
      qword_140404238(1);
      qword_140404238(2);
      if ( !a1 )
      {
        unk_140404098(33985);
        qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
        unk_140404098(33986);
        qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
      }
    }
    v4 = dword_140404A6C[284550610];
    v5 = 0;
    v6 = -1;
    v15 = -1;
    if ( (int)dword_140404A6C[284550610] > 0 )
    {
      v7 = &dword_140404A6C[284550611];
      while ( 1 )
      {
        v8 = 30LL * (int)*v7;
        if ( (dword_140404A6C[v8 + 284554710] & 2) == 0 || v2 )
          break;
LABEL_21:
        ++v5;
        ++v7;
        if ( v5 >= v4 )
          goto LABEL_22;
      }
      v9 = (int)dword_140404A6C[v8 + 284554707];
      if ( a1 )
      {
        sub_14007B990(&dword_140404A6C[v8 + 284554715], &dword_140404A6C[v8 + 284554718]);
        if ( a1 != 1 )
        {
LABEL_16:
          if ( (_DWORD)v9 != v15 )
          {
            qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v9 + 283790166] + 283793813], v12);
            ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v9+178527462]),(const void *)(intptr_t)(0));
            if ( (a1 & 0xFFFFFFFD) == 0 )
            {
              ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v9+178527462]),(const void *)(intptr_t)(12));
              ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v9+178527462]),(const void *)(intptr_t)(20));
            }
            v15 = v9;
          }
          unk_140404470(3, &dword_140404A6C[v8 + 284554733]);
          qword_140302FF8(4, 0, 3 * dword_140404A6C[908 * v9 + 178527465]);
          v4 = dword_140404A6C[284550610];
          v2 = a2;
          goto LABEL_21;
        }
        qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
        v10 = dword_140404A6C[71737991];
        v11 = &dword_140404A6C[431564533];
      }
      else
      {
        if ( dword_140404A6C[v8 + 284554711] != v6 )
        {
          unk_140404098(33984);
          qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[v8 + 284554711] + 284024944]);
          v6 = dword_140404A6C[v8 + 284554711];
        }
        qword_140404338(dword_140404A6C[71737871], 1, &dword_140404A6C[284024502]);
        qword_140404338(dword_140404A6C[71737872], 1, &dword_140404A6C[v8 + 284554715]);
        unk_140404370(dword_140404A6C[71737873], 1, 0, &dword_140404A6C[v8 + 284554718]);
        qword_140404338(dword_140404A6C[71737875], 1, &dword_140404A6C[284550403]);
        qword_140404338(dword_140404A6C[71737876], 1, &dword_140404A6C[284545205]);
        qword_140404338(dword_140404A6C[71737877], 1, &dword_140404A6C[284545209]);
        qword_140404338(dword_140404A6C[71737878], 1, &dword_140404A6C[284024511]);
        sub_14007B990(&dword_140404A6C[v8 + 284554715], &dword_140404A6C[v8 + 284554718]);
        v10 = dword_140404A6C[71737874];
        v11 = &dword_140404A6C[431564565];
      }
      qword_140404378(v10, 1, 0, v11);
      goto LABEL_16;
    }
LABEL_22:
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
    sub_14007A0E0(
      &dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564517],
      (__int64)&dword_140404A6C[431564501]);
    sub_14007A0E0(
      &dword_140404A6C[431564565],
      (__int64)&dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564485]);
    qword_140404170(34962, 0, v13);
    if ( a1 )
    {
      if ( a1 != 2 )
        return qword_140404230(0);
    }
    else
    {
      unk_140404098(33986);
      qword_140404050(34067, 0);
      unk_140404098(33984);
    }
    qword_140404230(0);
    qword_140404230(1);
    return qword_140404230(2);
  }
  return result;
}

// 140124DB4: variable 'v12' is possibly undefined
// 140124F46: variable 'v13' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404370: using guessed type __int64 (__fastcall *unk_140404370)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18417E1B4: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (0000000140124FE0) ----------------------------------------------------
__int64            sub_140124FE0(int a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140124FE0[80];
#define v14 (*(_DWORD (*)[10])(void *)(sr_frame_140124FE0 + 0)) /* [rsp+0h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140124FE0 + 40)) /* [rsp+28h] */
#define v16 (*(float (*)[4])(void *)(sr_frame_140124FE0 + 48)) /* [rsp+30h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140124FE0 + 64)) /* [rsp+40h] */

  v4 = a2;
  v5 = a1;
  v6 = *(float *)&dword_140404A6C[284550405] * *(float *)(a4 + 32);
  v7 = *(float *)&dword_140404A6C[284550405] * *(float *)(a4 + 20);
  v8 = (float)(*(float *)&dword_140404A6C[284550404] * *(float *)(a4 + 16))
     + (float)(*(float *)&dword_140404A6C[284550403] * *(float *)(a4 + 12));
  v9 = (float)(*(float *)&dword_140404A6C[284550404] * *(float *)(a4 + 28))
     + (float)(*(float *)&dword_140404A6C[284550403] * *(float *)(a4 + 24));
  v16[0] = (float)((float)(*(float *)&dword_140404A6C[284550404] * *(float *)(a4 + 4))
                 + (float)(*(float *)&dword_140404A6C[284550403] * *(float *)a4))
         + (float)(*(float *)&dword_140404A6C[284550405] * *(float *)(a4 + 8));
  v16[1] = v8 + v7;
  v16[2] = v9 + v6;
  sub_14007B990(a3, (_DWORD *)a4);
  qword_1404042E0(dword_140404A6C[71738225]);
  qword_140404378(dword_140404A6C[71738230], 1, 0, &dword_140404A6C[431564517]);
  qword_140404378(dword_140404A6C[71738231], 1, 0, &dword_140404A6C[431564565]);
  qword_140404378(dword_140404A6C[71738234], 1, 0, &dword_140404A6C[431564485]);
  qword_140404378(dword_140404A6C[71738235], 1, 0, &dword_140404A6C[431564501]);
  qword_140404338(dword_140404A6C[71738232], 1, v16);
  ((void (*)(int,float))unk_1404042E8)((int)dword_140404A6C[71738233],0x1.0000000000000p+6f);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v5 + 283790166] + 283793813], v10);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[v4 + 283790166] + 283793814], v11);
  qword_140404238(0);
  v15 = 0;
  v14[8] = 4 * dword_140404A6C[908 * v5 + 178527462];
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v5+178527462]),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6 * dword_140404A6C[908 * v4 + 178527475]),5125,NULL);
  qword_140404230(0);
  qword_140404170(34963, 0, v12);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v14
#undef v15
#undef v16
#undef v17

// 14012514F: variable 'v10' is possibly undefined
// 140125169: variable 'v11' is possibly undefined
// 1401251DF: variable 'v12' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 1404042E8: using guessed type __int64 (__fastcall *unk_1404042E8)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (0000000140125270) ----------------------------------------------------
__int64            sub_140125270(int a1, unsigned int *a2, _DWORD *a3, __int64 a4, float a5)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r8

  v5 = a1;
  sub_14007B990(a2, a3);
  sub_14007B6F0(a5, a5, a5);
  qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v5 + 283790166] + 283793813], v6);
  qword_140404238(0);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*v5+178527462]),(const void *)(intptr_t)(0));
  qword_140302FF8(4, 0, 3 * dword_140404A6C[908 * v5 + 178527465]);
  qword_140404230(0);
  qword_140404170(34962, 0, v7);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

// 1401252D1: variable 'v6' is possibly undefined
// 140125337: variable 'v7' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (00000001401253C0) ----------------------------------------------------
double sub_1401253C0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int *v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  int v6; // ebp
  float v7; // xmm8_4
  __int64 v8; // rdi
  __int64 v9; // rsi
  float v10; // xmm5_4
  float v11; // xmm6_4
  __int64 v12; // rdx
  __int64 v13; // rax
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  __int64 v25; // rcx
  unsigned int v27[4]; // [rsp+20h] [rbp-98h] BYREF

  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  qword_140404050(3553, dword_140404A6C[451221642]);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,1);
  v3 = &dword_140404A6C[278845942];
  v4 = 1024;
  v5 = dword_140404A6C[159842283];
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279300;
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    if ( *(v3 - 49) )
    {
      v1 = v3[37];
      if ( (int)v1 > 0 )
      {
        v6 = 0;
        v7 = (float)((float)(int)v1 * 0.015625) + 0.125;
        if ( v5 > 0 )
        {
          v8 = 0;
          do
          {
            v9 = 3;
            do
            {
              v10 = *((float *)v3 - 1);
              v11 = *(float *)v3;
              v12 = *(unsigned int *)(*(_QWORD *)&dword_140404A6C[159842285] + v8);
              v13 = 3 * (int)v12;
              v14 = v7 * *(float *)(*(_QWORD *)&dword_140404A6C[159842281] + 4 * v13);
              v15 = v7 * *(float *)(*(_QWORD *)&dword_140404A6C[159842281] + 4 * v13 + 4);
              v16 = (float)((float)(v14 * *((float *)v3 - 8)) + *((float *)v3 - 26)) + (float)(v15 * *((float *)v3 - 5));
              v17 = (float)((float)(v14 * *((float *)v3 - 7)) + *((float *)v3 - 25)) + (float)(v15 * *((float *)v3 - 4));
              v18 = v7 * *(float *)(*(_QWORD *)&dword_140404A6C[159842281] + 4LL * (3 * (int)v12 + 2));
              v19 = (float)((float)(v14 * *((float *)v3 - 6)) + *((float *)v3 - 24)) + (float)(v15 * *((float *)v3 - 3));
              if ( (_DWORD)v12 == 1 )
                v20 = v18 * 1.5;
              else
                v20 = v18 * 3.0;
              v21 = (float)(*((float *)v3 - 2) * v20) + v16;
              v22 = (float)(v10 * v20) + v17;
              v23 = v11 * v20;
              v24 = *(float *)&dword_140404A6C[1268 * *(v3 - 44) + 278521315] - v7;
              *(float *)v27 = v21 + (float)(*((float *)v3 - 2) * v24);
              *(float *)&v27[1] = v22 + (float)(v10 * v24);
              *(float *)&v27[2] = (float)(v23 + v19) + (float)(v11 * v24);
              sub_14007D520(v27, v12, *(__int64 *)&dword_140404A6C[159842281]);
              v8 += 4;
              --v9;
            }
            while ( v9 );
            v5 = dword_140404A6C[159842283];
            ++v6;
          }
          while ( v6 < (int)dword_140404A6C[159842283] );
        }
      }
    }
    v3 += 1760;
    --v4;
  }
  while ( v4 );
  sub_14006E0D0(v1, v0, v2);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  LOBYTE(v25) = 1;
  return (*(double (           **)(__int64))&dword_140404A6C[18215099])(v25);
}

// 140125612: variable 'v1' is possibly undefined
// 140125612: variable 'v0' is possibly undefined
// 140125612: variable 'v2' is possibly undefined
// 140125666: variable 'v25' is possibly undefined
// 140279300: using guessed type __int128 xmmword_140279300;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1665C4A18: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (0000000140125670) ----------------------------------------------------
__int64            sub_140125670(unsigned int *a1, float a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8

  v3 = a3;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  if ( a1 )
  {
    dword_140404A6C[431564529] = *a1;
    dword_140404A6C[431564530] = a1[1];
    dword_140404A6C[431564531] = a1[2];
  }
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  sub_14007B6F0(a2, a2, a2);
  qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  v4 = 5 * v3;
  qword_140404170(34962, dword_140404A6C[2 * v4 + 159842277], v5);
  qword_140404170(34963, dword_140404A6C[2 * v4 + 159842278], v6);
  qword_140404238(0);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[2 * v4 + 159842283]),5125,NULL);
  qword_140404230(0);
  qword_140404170(34963, 0, v7);
  qword_140404170(34962, 0, v8);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

// 140125757: variable 'v5' is possibly undefined
// 140125766: variable 'v6' is possibly undefined
// 1401257C3: variable 'v7' is possibly undefined
// 1401257D0: variable 'v8' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E634: using guessed type unsigned int;
// 1A724E638: using guessed type unsigned int;

//----- (0000000140125860) ----------------------------------------------------
__int64            sub_140125860(unsigned int *a1, _DWORD *a2, float a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8

  v4 = a4;
  sub_14007B990(a1, a2);
  sub_14007B6F0(a3, a3, a3);
  qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  v4 *= 5;
  qword_140404170(34962, dword_140404A6C[2 * v4 + 159842277], v5);
  qword_140404170(34963, dword_140404A6C[2 * v4 + 159842278], v6);
  qword_140404238(0);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[2 * v4 + 159842283]),5125,NULL);
  qword_140404230(0);
  qword_140404170(34963, 0, v7);
  qword_140404170(34962, 0, v8);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

// 1401258B2: variable 'v5' is possibly undefined
// 1401258C1: variable 'v6' is possibly undefined
// 14012591E: variable 'v7' is possibly undefined
// 14012592B: variable 'v8' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (00000001401259B0) ----------------------------------------------------
void            sub_1401259B0(int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8

  if ( dword_140404A6C[73991655] )
  {
    v4 = dword_140404A6C[431744815];
    if ( dword_140404A6C[431744816] != dword_140404A6C[431744815] )
    {
      qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791446] + 283793813], a3);
      qword_140404198(34962, 0, 32 * dword_140404A6C[431744815], &dword_140404A6C[431744817]);
      qword_140404170(34962, 0, v5);
      v4 = dword_140404A6C[431744815];
    }
    dword_140404A6C[431744816] = v4;
    v6 = dword_140404A6C[432269105];
    if ( dword_140404A6C[432269106] != dword_140404A6C[432269105] )
    {
      qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791447] + 283793813], a3);
      qword_140404198(34962, 0, 32 * dword_140404A6C[432269105], &dword_140404A6C[432269107]);
      qword_140404170(34962, 0, v7);
      v6 = dword_140404A6C[432269105];
    }
    dword_140404A6C[432269106] = v6;
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830699] + 284024944]);
    qword_140404238(0);
    if ( !a1 )
    {
      qword_140404238(1);
      qword_140404238(2);
      unk_140404098(33985);
      qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
      unk_140404098(33986);
      qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
    }
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791446] + 283793813], v8);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(32),(const void *)(intptr_t)(0));
    if ( a1 )
    {
      qword_140302FF8(4, 0, dword_140404A6C[431744815]);
    }
    else
    {
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(32),(const void *)(intptr_t)(12));
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(32),(const void *)(intptr_t)(20));
      qword_140302FF8(4, 0, dword_140404A6C[431744815]);
      unk_140404098(33984);
      qword_140404230(1);
      qword_140404230(2);
    }
    qword_140404230(0);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283827818] + 284024944]);
    qword_140404238(0);
    if ( !a1 )
    {
      qword_140404238(1);
      qword_140404238(2);
      unk_140404098(33985);
      qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
      unk_140404098(33986);
      qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
    }
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791447] + 283793813], v9);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(32),(const void *)(intptr_t)(0));
    if ( a1 )
    {
      qword_140302FF8(4, 0, dword_140404A6C[432269105]);
      qword_140404170(34962, 0, v11);
    }
    else
    {
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(32),(const void *)(intptr_t)(12));
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(32),(const void *)(intptr_t)(20));
      qword_140302FF8(4, 0, dword_140404A6C[432269105]);
      qword_140404170(34962, 0, v10);
      unk_140404098(33984);
      qword_140404230(1);
      qword_140404230(2);
    }
    qword_140404230(0);
  }
}

// 140125A1F: variable 'v5' is possibly undefined
// 140125A52: variable 'a3' is possibly undefined
// 140125A7F: variable 'v7' is possibly undefined
// 140125B38: variable 'v8' is possibly undefined
// 140125CA6: variable 'v9' is possibly undefined
// 140125D44: variable 'v10' is possibly undefined
// 140125D8E: variable 'v11' is possibly undefined
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A72FE728: using guessed type unsigned int;
// 1A72FE72C: using guessed type unsigned int;
// 1A74FE730: using guessed type unsigned int;
// 1A74FE734: using guessed type unsigned int;

//----- (0000000140125DB0) ----------------------------------------------------
double            sub_140125DB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        __int64 __return_address)
{
  signed int v30; // r9d
  float v31; // xmm6_4
  int v32; // edi
  int v33; // r10d
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm11_4
  float v37; // xmm12_4
  __int64 v38; // rdx
  float v39; // xmm13_4
  float *v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // r8
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  int v52; // eax
  float v53; // xmm2_4
  int v54; // eax
  float v55; // xmm2_4
  unsigned int *v56; // r8
  float *v57; // rcx
  __int64 v58; // rdx
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm2_4
  unsigned int v62; // r12d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int *v66; // rsi
  int v67; // r15d
  unsigned int *v68; // r14
  __int64 v69; // rbx
  float v70; // xmm6_4
  float v71; // xmm0_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  float v76; // xmm1_4
  __int64 v77; // rdx
  __int64 v78; // r8
  float v79; // xmm2_4
  float v80; // xmm1_4
  __int64 v81; // rdx
  __int64 v82; // r8
  float v83; // xmm2_4
  float v84; // xmm1_4
  __int64 v85; // rdx
  __int64 v86; // r8
  bool v87; // zf
  float v88; // xmm6_4
  float v89; // xmm7_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  float v92; // xmm2_4
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96; // xmm1_4
  float v97; // xmm1_4
  float v98; // xmm0_4
  __int64 v99; // rdx
  __int64 v100; // r8
  float v101; // xmm1_4
  float v102; // xmm2_4
  float v103; // xmm6_4
  float v104; // xmm2_4
  float v105; // xmm0_4
  __int64 v106; // rdx
  __int64 v107; // r8
  float v108; // xmm1_4
  float v109; // xmm0_4
  float v110; // xmm0_4
  __int64 v111; // rdx
  __int64 v112; // r8
  unsigned int *v113; // r8
  int v114; // eax
  __int64 i; // r10
  __int64 v116; // r9
  __int64 v117; // rdx
  unsigned int v118; // ecx
  float v119; // xmm3_4
  float v120; // xmm4_4
  float v121; // xmm5_4
  float v122; // xmm2_4
  float v123; // xmm12_4
  float v124; // xmm11_4
  float v125; // xmm1_4
  __int64 v126; // rax
  float v127; // xmm3_4
  float v128; // xmm13_4
  float v129; // xmm5_4
  float v130; // xmm6_4
  float v131; // xmm4_4
  float v132; // xmm14_4
  float v133; // xmm13_4
  float v134; // xmm0_4
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rcx
  float v138; // xmm12_4
  float v139; // xmm11_4
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rdx
  unsigned int v149; // xmm12_4
  unsigned int v150; // xmm13_4
  float v151; // xmm2_4
  float v152; // xmm5_4
  unsigned int v153; // xmm11_4
  float v154; // xmm1_4
  unsigned int v155; // xmm15_4
  unsigned int v156; // xmm14_4
  float v157; // xmm7_4
  float v158; // xmm0_4
  float v159; // xmm6_4
  float v160; // xmm5_4
  float v161; // xmm3_4
  unsigned int v162; // xmm7_4
  unsigned int v163; // xmm5_4
  unsigned int v164; // xmm6_4
  unsigned int v165; // xmm0_4
  unsigned int v166; // xmm1_4
  unsigned int v167; // xmm2_4
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // rcx
  unsigned int v171; // xmm0_4
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // rcx
  __int64 v178; // rbx
  signed int v179; // eax
  float v180; // xmm0_4
  __int64 v181; // rdx
  __int64 v182; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140125DB0[288];
#define v184 (*(float (*))(void *)(sr_frame_140125DB0 + 0)) /* [rsp+38h] */
#define v185 (*(float (*))(void *)(sr_frame_140125DB0 + 4)) /* [rsp+3Ch] */
#define v186 (*(float (*))(void *)(sr_frame_140125DB0 + 8)) /* [rsp+40h] */
#define v187 (*(float (*))(void *)(sr_frame_140125DB0 + 12)) /* [rsp+44h] */
#define v188 (*(float (*))(void *)(sr_frame_140125DB0 + 16)) /* [rsp+48h] */
#define v189 (*(unsigned int (*))(void *)(sr_frame_140125DB0 + 264)) /* [rsp+140h] */
#define v190 (*(unsigned int (*))(void *)(sr_frame_140125DB0 + 272)) /* [rsp+148h] */
#define v191 (*(unsigned int (*))(void *)(sr_frame_140125DB0 + 280)) /* [rsp+150h] */

  v30 = dword_140404A6C[433435845];
  v31 = *(float *)&dword_140404A6C[284024513];
  v32 = 0;
  v33 = 0;
  v34 = *(float *)&dword_140404A6C[284024512];
  v35 = *(float *)&dword_140404A6C[284024511];
  if ( (int)dword_140404A6C[433435845] < 4 )
  {
    if ( (int)dword_140404A6C[433435845] <= 0 )
      goto LABEL_10;
    v36 = *(float *)&dword_140404A6C[284024502];
    v38 = 0;
    v37 = *(float *)&dword_140404A6C[284024503];
    v39 = *(float *)&dword_140404A6C[284024504];
    goto LABEL_8;
  }
  v36 = *(float *)&dword_140404A6C[284024502];
  v37 = *(float *)&dword_140404A6C[284024503];
  v38 = 0;
  v39 = *(float *)&dword_140404A6C[284024504];
  v40 = (float *)&dword_140404A6C[432826954];
  v41 = ((dword_140404A6C[433435845] - 4) >> 2) + 1;
  v42 = v41;
  v33 = 4 * v41;
  do
  {
    v43 = v40[109];
    v44 = v40[110];
    v45 = v34 * v40[36];
    v46 = v31 * v40[37];
    v47 = v35 * v40[35];
    dword_140404A6C[v38 + 437192782] = (int)(float)((float)((float)((float)((float)(v35 * *(v40 - 2))
                                                                          + (float)(v34 * *(v40 - 1)))
                                                                  + (float)(v31 * *v40))
                                                          * 1024.0)
                                                  + 16777216.0);
    v48 = v47 + v45;
    v49 = v34 * v40[73];
    v50 = v48 + v46;
    v51 = v31 * v40[74];
    v52 = (int)(float)((float)(v50 * 1024.0) + 16777216.0);
    v53 = v35 * v40[72];
    dword_140404A6C[v38 + 437192783] = v52;
    v186 = v43 - v36;
    v187 = v44 - v37;
    v54 = (int)(float)((float)((float)((float)(v53 + v49) + v51) * 1024.0) + 16777216.0);
    v55 = v40[111];
    v40 += 148;
    dword_140404A6C[v38 + 437192784] = v54;
    v188 = v55 - v39;
    dword_140404A6C[v38 + 437192785] = (int)(float)((float)((float)((float)((float)(v44 * v34) + (float)(v43 * v35))
                                                                  + (float)(v55 * v31))
                                                          * 1024.0)
                                                  + 16777216.0);
    v38 += 4;
    --v42;
  }
  while ( v42 );
  if ( v33 < v30 )
  {
LABEL_8:
    v56 = &dword_140404A6C[v38 + 437192782];
    v57 = (float *)&dword_140404A6C[37 * v38 + 432826954];
    v58 = (unsigned int)(v30 - v33);
    do
    {
      v59 = *(v57 - 2);
      v60 = *v57;
      v61 = *(v57 - 1);
      v57 += 37;
      v186 = v59 - v36;
      v187 = v61 - v37;
      v188 = v60 - v39;
      *v56++ = (int)(float)((float)((float)((float)((float)(v35 * v59) + (float)(v34 * v61)) + (float)(v31 * v60))
                                  * 1024.0)
                          + 16777216.0);
      --v58;
    }
    while ( v58 );
  }
LABEL_10:
  dword_140404A6C[436668493] = v30;
  sub_14007D710();
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  v62 = 6;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 6;
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829876] + 284024944]);
  v66 = &dword_140404A6C[436668494];
  v67 = 0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  if ( (int)dword_140404A6C[433435845] > 0 )
  {
    v68 = &dword_140404A6C[436668494];
    do
    {
      v69 = 37LL * (int)*v68;
      if ( dword_140404A6C[v69 + 432826949] == 2 )
      {
        v70 = *(float *)&dword_140404A6C[v69 + 432826984];
        v71 = (float)(int)dword_140404A6C[v69 + 432826950];
        dword_140404A6C[456807033] = 1065353216;
        dword_140404A6C[456807034] = 1065353216;
        dword_140404A6C[456807035] = 1061158912;
        dword_140404A6C[456807037] = 0;
        dword_140404A6C[456807038] = 1065353216;
        v72 = (float)(*(float *)&dword_140404A6C[284024505] * (float)-v70) + *(float *)&dword_140404A6C[v69 + 432826952];
        v73 = (float)(*(float *)&dword_140404A6C[284024506] * (float)-v70) + *(float *)&dword_140404A6C[v69 + 432826953];
        dword_140404A6C[456807036] = fminf(v71 * 0.03125, 1.0);
        v186 = v72 + (float)(*(float *)&dword_140404A6C[284024508] * v70);
        v74 = (float)(*(float *)&dword_140404A6C[284024507] * (float)-v70) + *(float *)&dword_140404A6C[v69 + 432826954];
        v187 = v73 + (float)(*(float *)&dword_140404A6C[284024509] * v70);
        v188 = v74 + (float)(*(float *)&dword_140404A6C[284024510] * v70);
        sub_14007D520((unsigned int *)&v186, v63, v65);
        dword_140404A6C[456807037] = 1065353216;
        dword_140404A6C[456807038] = 1065353216;
        v75 = (float)(*(float *)&dword_140404A6C[284024506] * v70) + *(float *)&dword_140404A6C[v69 + 432826953];
        v186 = (float)((float)(*(float *)&dword_140404A6C[284024505] * v70) + *(float *)&dword_140404A6C[v69 + 432826952])
             + (float)(*(float *)&dword_140404A6C[284024508] * v70);
        v76 = (float)(*(float *)&dword_140404A6C[284024507] * v70) + *(float *)&dword_140404A6C[v69 + 432826954];
        v187 = v75 + (float)(*(float *)&dword_140404A6C[284024509] * v70);
        v188 = v76 + (float)(*(float *)&dword_140404A6C[284024510] * v70);
        sub_14007D520((unsigned int *)&v186, v77, v78);
        v79 = (float)(*(float *)&dword_140404A6C[284024506] * v70) + *(float *)&dword_140404A6C[v69 + 432826953];
        v186 = (float)((float)(*(float *)&dword_140404A6C[284024505] * v70) + *(float *)&dword_140404A6C[v69 + 432826952])
             + (float)(*(float *)&dword_140404A6C[284024508] * (float)-v70);
        v80 = (float)(*(float *)&dword_140404A6C[284024507] * v70) + *(float *)&dword_140404A6C[v69 + 432826954];
        v187 = v79 + (float)(*(float *)&dword_140404A6C[284024509] * (float)-v70);
        v188 = v80 + (float)(*(float *)&dword_140404A6C[284024510] * (float)-v70);
        *(_QWORD *)&dword_140404A6C[456807037] = 1065353216;
        sub_14007D520((unsigned int *)&v186, v81, v82);
        *(_QWORD *)&dword_140404A6C[456807037] = 0;
        v83 = (float)(*(float *)&dword_140404A6C[284024506] * (float)-v70) + *(float *)&dword_140404A6C[v69 + 432826953];
        v186 = (float)((float)(*(float *)&dword_140404A6C[284024505] * (float)-v70)
                     + *(float *)&dword_140404A6C[v69 + 432826952])
             + (float)(*(float *)&dword_140404A6C[284024508] * (float)-v70);
        v84 = (float)(*(float *)&dword_140404A6C[284024507] * (float)-v70) + *(float *)&dword_140404A6C[v69 + 432826954];
        v187 = v83 + (float)(*(float *)&dword_140404A6C[284024509] * (float)-v70);
        v188 = v84 + (float)(*(float *)&dword_140404A6C[284024510] * (float)-v70);
        sub_14007D520((unsigned int *)&v186, v85, v86);
      }
      v87 = dword_140404A6C[v69 + 432826949] == 1;
      if ( dword_140404A6C[v69 + 432826949] <= 1 )
      {
        dword_140404A6C[456807036] = fminf((float)(int)dword_140404A6C[v69 + 432826950] * 0.03125, 1.0);
        if ( v87 )
        {
          *(_QWORD *)&dword_140404A6C[456807034] = 0;
          *(float *)&dword_140404A6C[456807033] = *(float *)&dword_140404A6C[284545205] * 0.25;
        }
        else
        {
          *(_QWORD *)&dword_140404A6C[456807033] = 0;
          dword_140404A6C[456807035] = 0;
        }
        v88 = *(float *)&dword_140404A6C[v69 + 432826984];
        dword_140404A6C[456807037] = 0;
        v89 = -v88;
        dword_140404A6C[456807038] = 1065353216;
        v90 = (float)((float)-v88 * *(float *)&dword_140404A6C[v69 + 432826962])
            + *(float *)&dword_140404A6C[v69 + 432826953];
        v91 = v88 * *(float *)&dword_140404A6C[v69 + 432826965];
        v186 = (float)((float)((float)-v88 * *(float *)&dword_140404A6C[v69 + 432826961])
                     + *(float *)&dword_140404A6C[v69 + 432826952])
             + (float)(v88 * *(float *)&dword_140404A6C[v69 + 432826964]);
        v92 = v90 + v91;
        v93 = v88 * *(float *)&dword_140404A6C[v69 + 432826966];
        v94 = (float)((float)-v88 * *(float *)&dword_140404A6C[v69 + 432826963])
            + *(float *)&dword_140404A6C[v69 + 432826954];
        v187 = v92;
        v188 = v94 + v93;
        sub_14007D520((unsigned int *)&v186, v63, v65);
        v95 = *(float *)&dword_140404A6C[v69 + 432826961] + *(float *)&dword_140404A6C[v69 + 432826964];
        v96 = *(float *)&dword_140404A6C[v69 + 432826965] + *(float *)&dword_140404A6C[v69 + 432826962];
        dword_140404A6C[456807037] = 1065353216;
        dword_140404A6C[456807038] = 1065353216;
        v97 = (float)(v96 * v88) + *(float *)&dword_140404A6C[v69 + 432826953];
        v186 = (float)(v95 * v88) + *(float *)&dword_140404A6C[v69 + 432826952];
        v98 = *(float *)&dword_140404A6C[v69 + 432826966] + *(float *)&dword_140404A6C[v69 + 432826963];
        v187 = v97;
        v188 = (float)(v98 * v88) + *(float *)&dword_140404A6C[v69 + 432826954];
        sub_14007D520((unsigned int *)&v186, v99, v100);
        *(_QWORD *)&dword_140404A6C[456807037] = 1065353216;
        v101 = v88 * *(float *)&dword_140404A6C[v69 + 432826961];
        v102 = v88 * *(float *)&dword_140404A6C[v69 + 432826962];
        v103 = (float)(v88 * *(float *)&dword_140404A6C[v69 + 432826963]) + *(float *)&dword_140404A6C[v69 + 432826954];
        v104 = (float)(v102 + *(float *)&dword_140404A6C[v69 + 432826953])
             + (float)(v89 * *(float *)&dword_140404A6C[v69 + 432826965]);
        v186 = (float)(v101 + *(float *)&dword_140404A6C[v69 + 432826952])
             + (float)(v89 * *(float *)&dword_140404A6C[v69 + 432826964]);
        v105 = v89 * *(float *)&dword_140404A6C[v69 + 432826966];
        v187 = v104;
        v188 = v103 + v105;
        sub_14007D520((unsigned int *)&v186, v106, v107);
        v108 = (float)((float)(*(float *)&dword_140404A6C[v69 + 432826965] + *(float *)&dword_140404A6C[v69 + 432826962])
                     * v89)
             + *(float *)&dword_140404A6C[v69 + 432826953];
        v186 = (float)((float)(*(float *)&dword_140404A6C[v69 + 432826961] + *(float *)&dword_140404A6C[v69 + 432826964])
                     * v89)
             + *(float *)&dword_140404A6C[v69 + 432826952];
        v109 = *(float *)&dword_140404A6C[v69 + 432826966];
        v187 = v108;
        v110 = v109 + *(float *)&dword_140404A6C[v69 + 432826963];
        *(_QWORD *)&dword_140404A6C[456807037] = 0;
        v188 = (float)(v110 * v89) + *(float *)&dword_140404A6C[v69 + 432826954];
        sub_14007D520((unsigned int *)&v186, v111, v112);
      }
      ++v67;
      ++v68;
    }
    while ( v67 < (int)dword_140404A6C[433435845] );
  }
  sub_14006E0D0(v64, v63, v65);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(1,771);
  qword_1404042E0(dword_140404A6C[71737805]);
  qword_140404338(dword_140404A6C[71737811], 1, &dword_140404A6C[284024502]);
  qword_140404338(dword_140404A6C[71737815], 1, &dword_140404A6C[284550403]);
  qword_140404378(dword_140404A6C[71737819], 1, 0, &dword_140404A6C[431564565]);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[4 * dword_140404A6C[421784429] + 283827814] + 284024944]);
  qword_140404338(dword_140404A6C[71737820], 1, &dword_140404A6C[284545205]);
  qword_140404338(dword_140404A6C[71737821], 1, &dword_140404A6C[284545209]);
  unk_140404098(33985);
  qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  unk_140404098(33984);
  v114 = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 6;
  if ( (int)dword_140404A6C[433435845] > 0 )
  {
    v113 = &dword_140404A6C[436668494];
    for ( i = dword_140404A6C[433435845]; i; --i )
    {
      if ( v114 < 16376 )
      {
        v116 = (int)*v113;
        v117 = 37 * v116;
        v118 = dword_140404A6C[37 * v116 + 432826949];
        if ( v118 == 3 )
        {
          v119 = *(float *)&dword_140404A6C[v117 + 432826967];
          v120 = *(float *)&dword_140404A6C[v117 + 432826968];
          v121 = *(float *)&dword_140404A6C[v117 + 432826969];
          *(float *)&v191 = v119;
          *(float *)&v190 = v120;
          *(float *)&v189 = v121;
          if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[v117 + 432826953]
                                             - *(float *)&dword_140404A6C[284024503])
                                     * v120)
                             + (float)((float)(*(float *)&dword_140404A6C[v117 + 432826952]
                                             - *(float *)&dword_140404A6C[284024502])
                                     * v119))
                     + (float)((float)(*(float *)&dword_140404A6C[v117 + 432826954]
                                     - *(float *)&dword_140404A6C[284024504])
                             * v121)) < 0.0 )
          {
            *(float *)&v191 = -v119;
            *(float *)&v190 = -v120;
            *(float *)&v189 = -v121;
          }
          v122 = *(float *)&dword_140404A6C[v117 + 432826984];
          v123 = *(float *)&dword_140404A6C[v117 + 432826965];
          v124 = *(float *)&dword_140404A6C[v117 + 432826966];
          v125 = *(float *)&dword_140404A6C[v117 + 432826964] * v122;
          v126 = (int)(v62 * v114);
          v127 = v124 * v122;
          v128 = *(float *)&dword_140404A6C[v117 + 432826963];
          v184 = (float)(*(float *)&dword_140404A6C[v117 + 432826961] * (float)-v122)
               + *(float *)&dword_140404A6C[v117 + 432826952];
          v129 = (float)(*(float *)&dword_140404A6C[v117 + 432826962] * v122)
               + *(float *)&dword_140404A6C[v117 + 432826953];
          v130 = (float)(v128 * v122) + *(float *)&dword_140404A6C[v117 + 432826954];
          v131 = (float)(*(float *)&dword_140404A6C[v117 + 432826961] * v122)
               + *(float *)&dword_140404A6C[v117 + 432826952];
          v185 = (float)(*(float *)&dword_140404A6C[v117 + 432826962] * (float)-v122)
               + *(float *)&dword_140404A6C[v117 + 432826953];
          v132 = *(float *)&dword_140404A6C[v117 + 432826964] * (float)-v122;
          v133 = (float)(v128 * (float)-v122) + *(float *)&dword_140404A6C[v117 + 432826954];
          v134 = v123 * v122;
          *(float *)&dword_140404A6C[v126 + 456217209] = v125 + v184;
          *(float *)&dword_140404A6C[v126 + 456217211] = (float)(v124 * v122) + v133;
          *(float *)&dword_140404A6C[v126 + 456217210] = (float)(v123 * v122) + v185;
          v135 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v135 + 456217212] = v191;
          dword_140404A6C[v135 + 456217213] = v190;
          dword_140404A6C[v135 + 456217214] = v189;
          v136 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
          *(float *)&dword_140404A6C[v136 + 456217209] = v131 + v125;
          *(float *)&dword_140404A6C[v136 + 456217211] = v130 + (float)(v124 * v122);
          *(float *)&dword_140404A6C[v136 + 456217210] = v129 + (float)(v123 * v122);
          v137 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v137 + 456217212] = v191;
          dword_140404A6C[v137 + 456217213] = v190;
          dword_140404A6C[v137 + 456217214] = v189;
          ++dword_140404A6C[456217207];
          v138 = v123 * (float)-v122;
          v139 = v124 * (float)-v122;
          v140 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          *(float *)&dword_140404A6C[v140 + 456217209] = v132 + v131;
          *(float *)&dword_140404A6C[v140 + 456217210] = v138 + v129;
          *(float *)&dword_140404A6C[v140 + 456217211] = v139 + v130;
          v141 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v141 + 456217212] = v191;
          dword_140404A6C[v141 + 456217213] = v190;
          dword_140404A6C[v141 + 456217214] = v189;
          v142 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
          *(float *)&dword_140404A6C[v142 + 456217209] = v125 + v184;
          *(float *)&dword_140404A6C[v142 + 456217210] = v134 + v185;
          *(float *)&dword_140404A6C[v142 + 456217211] = v127 + v133;
          v143 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v143 + 456217212] = v191;
          dword_140404A6C[v143 + 456217213] = v190;
          dword_140404A6C[v143 + 456217214] = v189;
          v144 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
          *(float *)&dword_140404A6C[v144 + 456217211] = v139 + v130;
          *(float *)&dword_140404A6C[v144 + 456217209] = v132 + v131;
          *(float *)&dword_140404A6C[v144 + 456217210] = v138 + v129;
          v145 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v145 + 456217212] = v191;
          dword_140404A6C[v145 + 456217213] = v190;
          dword_140404A6C[v145 + 456217214] = v189;
          v146 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
          *(float *)&dword_140404A6C[v146 + 456217209] = v132 + v184;
          *(float *)&dword_140404A6C[v146 + 456217210] = v138 + v185;
          *(float *)&dword_140404A6C[v146 + 456217211] = v139 + v133;
          v147 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v147 + 456217212] = v191;
          dword_140404A6C[v147 + 456217213] = v190;
          dword_140404A6C[v147 + 456217214] = v189;
LABEL_34:
          v62 = dword_140404A6C[456217208];
          v114 = ++dword_140404A6C[456217207];
          goto LABEL_35;
        }
        if ( v118 == 4 )
        {
          v148 = 37 * v116;
          v149 = dword_140404A6C[37 * v116 + 432826962];
          v150 = dword_140404A6C[37 * v116 + 432826963];
          v151 = *(float *)&dword_140404A6C[37 * v116 + 432826968] - *(float *)&v149;
          v152 = *(float *)&dword_140404A6C[37 * v116 + 432826969] - *(float *)&v150;
          v153 = dword_140404A6C[37 * v116 + 432826961];
          v154 = *(float *)&dword_140404A6C[37 * v116 + 432826966] - *(float *)&v150;
          v155 = dword_140404A6C[37 * v116 + 432826965];
          v156 = dword_140404A6C[37 * v116 + 432826964];
          v157 = (float)(v151 * v154) - (float)(v152 * (float)(*(float *)&v155 - *(float *)&v149));
          v158 = *(float *)&dword_140404A6C[37 * v116 + 432826967] - *(float *)&v153;
          v159 = (float)(v158 * (float)(*(float *)&v155 - *(float *)&v149))
               - (float)(v151 * (float)(*(float *)&v156 - *(float *)&v153));
          v160 = (float)(v152 * (float)(*(float *)&v156 - *(float *)&v153)) - (float)(v158 * v154);
          v161 = fsqrt((float)((float)(v157 * v157) + (float)(v160 * v160)) + (float)(v159 * v159));
          if ( v161 == 0.0 )
          {
            *(float *)&v162 = 0.0;
            *(float *)&v163 = 0.0;
            *(float *)&v164 = 0.0;
          }
          else
          {
            *(float *)&v162 = v157 * (float)(1.0 / v161);
            *(float *)&v163 = v160 * (float)(1.0 / v161);
            *(float *)&v164 = v159 * (float)(1.0 / v161);
          }
          if ( (float)((float)((float)((float)(*(float *)&v149 - *(float *)&dword_140404A6C[284024503]) * *(float *)&v163)
                             + (float)((float)(*(float *)&v153 - *(float *)&dword_140404A6C[284024502]) * *(float *)&v162))
                     + (float)((float)(*(float *)&v150 - *(float *)&dword_140404A6C[284024504]) * *(float *)&v164)) < 0.0 )
          {
            *(float *)&v162 = -*(float *)&v162;
            *(float *)&v163 = -*(float *)&v163;
            *(float *)&v164 = -*(float *)&v164;
          }
          v165 = dword_140404A6C[v148 + 432826966];
          v166 = dword_140404A6C[v148 + 432826968];
          v167 = dword_140404A6C[v148 + 432826969];
          v168 = (int)(v62 * v114);
          dword_140404A6C[v168 + 456217209] = v153;
          dword_140404A6C[v168 + 456217210] = v149;
          dword_140404A6C[v168 + 456217211] = v150;
          v169 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v169 + 456217212] = v162;
          dword_140404A6C[v169 + 456217213] = v163;
          dword_140404A6C[v169 + 456217214] = v164;
          v170 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v170 + 456217211] = v165;
          v171 = dword_140404A6C[v148 + 432826967];
          dword_140404A6C[v170 + 456217209] = v156;
          dword_140404A6C[v170 + 456217210] = v155;
          v172 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v172 + 456217212] = v162;
          dword_140404A6C[v172 + 456217213] = v163;
          dword_140404A6C[v172 + 456217214] = v164;
          v173 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v173 + 456217209] = v171;
          dword_140404A6C[v173 + 456217210] = v166;
          dword_140404A6C[v173 + 456217211] = v167;
          v174 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
          dword_140404A6C[v174 + 456217212] = v162;
          dword_140404A6C[v174 + 456217213] = v163;
          dword_140404A6C[v174 + 456217214] = v164;
          goto LABEL_34;
        }
      }
LABEL_35:
      ++v113;
    }
  }
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813], v113);
  qword_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  ((void (*)(unsigned,float,float))unk_1404043C8)(1,0.5f,0.5f);
  qword_140404238(0);
  qword_140404238(2);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(0));
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(12));
  qword_140302FF8(4, 0, dword_140404A6C[456217207]);
  qword_140404230(0);
  qword_140404230(2);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  qword_140404050(3553, dword_140404A6C[451221642]);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2848);
  v177 = dword_140404A6C[433435845];
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  if ( (int)dword_140404A6C[433435845] > 0 )
  {
    do
    {
      v178 = 37LL * (int)*v66;
      if ( dword_140404A6C[v178 + 432826949] == 5 )
      {
        v179 = dword_140404A6C[v178 + 432826950] - 1;
        dword_140404A6C[456807033] = 1065353216;
        dword_140404A6C[456807034] = 1065353216;
        dword_140404A6C[456807035] = 1065353216;
        dword_140404A6C[456807036] = fmaxf(fminf((float)v179 * 0.5, 1.0) * 0.5, 0.0);
        sub_14007D520(&dword_140404A6C[v178 + 432826955], v175, v176);
        v180 = (float)(int)dword_140404A6C[v178 + 432826950];
        dword_140404A6C[456807033] = 1065353216;
        dword_140404A6C[456807034] = 1065353216;
        dword_140404A6C[456807035] = 1065353216;
        *(float *)&dword_140404A6C[456807036] = fminf(v180 * 0.5, 1.0) * 0.5;
        sub_14007D520(&dword_140404A6C[v178 + 432826952], v181, v182);
        v177 = dword_140404A6C[433435845];
      }
      ++v32;
      ++v66;
    }
    while ( v32 < (int)v177 );
  }
  sub_14006E0D0(v177, v175, v176);
  return (*(double (           **)(__int64))&dword_140404A6C[18215101])(2848);
}
#undef v184
#undef v185
#undef v186
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191

// 140126260: variable 'v63' is possibly undefined
// 140126260: variable 'v65' is possibly undefined
// 140126302: variable 'v77' is possibly undefined
// 140126302: variable 'v78' is possibly undefined
// 14012639B: variable 'v81' is possibly undefined
// 14012639B: variable 'v82' is possibly undefined
// 140126430: variable 'v85' is possibly undefined
// 140126430: variable 'v86' is possibly undefined
// 1401265D6: variable 'v99' is possibly undefined
// 1401265D6: variable 'v100' is possibly undefined
// 140126672: variable 'v106' is possibly undefined
// 140126672: variable 'v107' is possibly undefined
// 1401266FB: variable 'v111' is possibly undefined
// 1401266FB: variable 'v112' is possibly undefined
// 14012671C: variable 'v64' is possibly undefined
// 140126FB9: variable 'v113' is possibly undefined
// 140127181: variable 'v175' is possibly undefined
// 140127181: variable 'v176' is possibly undefined
// 1401271D0: variable 'v181' is possibly undefined
// 1401271D0: variable 'v182' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404043C8: using guessed type __int64 (__fastcall *unk_1404043C8)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 183F7C544: using guessed type unsigned int;
// 183F7C548: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 183F7C568: using guessed type unsigned int;
// 183F7C56C: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 1A7971D80: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

//----- (0000000140127240) ----------------------------------------------------
void            sub_140127240(char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140127240[16];
#define Buffer (*(int (*))(void *)(sr_frame_140127240 + 0)) /* [rsp+38h] */
#define v4 (*(int (*))(void *)(sr_frame_140127240 + 8)) /* [rsp+40h] */

  dword_140404A6C[19065874] = 0;
  v1 = sub_14020B8D8(a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&v4), 4, 1, (FILE *)(uintptr_t)(v2));
      if ( v4 == dword_1402B26C8 )
      {
        dword_140404A6C[19065873] = 0;
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[19065874]), 4, 1, (FILE *)(uintptr_t)(v2));
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[19065875]), 1, (int)dword_140404A6C[19065874], (FILE *)(uintptr_t)(v2));
      }
    }
    sub_14020B9E8(v2);
  }
}
#undef Buffer
#undef v4

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 1402B26C8: using guessed type int dword_1402B26C8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAB0: using guessed type unsigned int;
// 144CBFAB4: using guessed type unsigned int;

//----- (0000000140127300) ----------------------------------------------------
void sub_140127300()
{
  unsigned int v0; // edi
  int v1; // eax
  unsigned int v2; // ebx
  char v3; // al
  signed int v4; // ecx
  __int64 v5; // rax
  __int128 v6; // xmm1
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned int *v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // ecx
  _DWORD *v12; // rax
  unsigned int v13; // edx
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065873];
  if ( (int)dword_140404A6C[19065873] < (int)dword_140404A6C[19065874] )
  {
    if ( dword_140404A6C[19065873] + 0x10000 >= dword_140404A6C[19065869] )
    {
      v1 = dword_140404A6C[289317483];
    }
    else
    {
      sub_1401FC920(
        (__m128i *)&dword_140404A6C[289317486],
        (     __m128i *)(*(_QWORD *)&dword_140404A6C[19065875] + (int)dword_140404A6C[19065873]),
        0x10000u);
      v1 = 0x10000;
      dword_140404A6C[289317483] = 0x10000;
    }
    v2 = 0;
    *(_QWORD *)&dword_140404A6C[289317484] = 0;
    if ( v1 < 1 )
    {
      v3 = v14;
    }
    else
    {
      v3 = dword_140404A6C[289317486];
      dword_140404A6C[289317484] = 1;
    }
    if ( v3 == 6 )
    {
      sub_140115AE0(&dword_140404A6C[283831312], 4);
      v4 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 32) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v4 = dword_140404A6C[289317484] + 1;
          dword_140404A6C[289317485] = 0;
          ++dword_140404A6C[289317484];
        }
        v5 = v4;
        v4 += 32;
        v6 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v5);
        *(_OWORD *)&dword_140404A6C[283831313] = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v5);
        *(_OWORD *)&dword_140404A6C[283831317] = v6;
      }
      v7 = v4 + 1;
      dword_140404A6C[19065873] = v7 + v0;
      dword_140404A6C[289317484] = v7;
    }
    else
    {
      ++dword_140404A6C[283831474];
      sub_140115AE0(&dword_140404A6C[283831448], 4);
      sub_140115AE0(&dword_140404A6C[283831450], 24);
      sub_140115AE0(&dword_140404A6C[179992853], 30);
      sub_14018F1B0();
      sub_140115AE0(&v14, 16);
      sub_140115AE0(&dword_140404A6C[308307070], 16);
      if ( v14 > 0 )
      {
        v8 = (unsigned int)v14;
        do
        {
          sub_14018DBF0(dword_140404A6C[308307070]);
          ++dword_140404A6C[308307070];
          HIWORD(dword_140404A6C[308307070]) = 0;
          --v8;
        }
        while ( v8 );
      }
      v9 = &dword_140404A6C[421831854];
      dword_140404A6C[19065873] += ++dword_140404A6C[289317484];
      do
      {
        v10 = v2 + 1;
        if ( !*(v9 - 4) )
          v10 = v2;
        v11 = v10 + 1;
        if ( !*v9 )
          v11 = v10;
        v12 = v9 + 8;
        v13 = v11 + 1;
        if ( !v9[4] )
          v13 = v11;
        v9 += 16;
        v2 = v13 + 1;
        if ( !*v12 )
          v2 = v13;
      }
      while ( (__int64)v9 < (__int64)&dword_140404A6C[421835950] );
      dword_140404A6C[19065879] = v2;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAB0: using guessed type unsigned int;
// 144CBFAC8: using guessed type unsigned int;
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAC0: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140127500) ----------------------------------------------------
__int64 sub_140127500()
{
  int v0; // ebx
  __int64 i; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140127500[128];
#define v5 (*(__int64 (*))(void *)(sr_frame_140127500 + 0)) /* [rsp+0h] */
#define v6 (*(int (*))(void *)(sr_frame_140127500 + 32)) /* [rsp+20h] */
#define v7 (*(int (*)[3])(void *)(sr_frame_140127500 + 36)) /* [rsp+24h] */
#define v8 (*(char (*)[64])(void *)(sr_frame_140127500 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_140127500 + 112)) /* [rsp+70h] */

  v0 = 1;
  sub_140158AB0(v8, "replay%03d.srp", 1);
  for ( i = sub_14020B8D8(v8, "rb"); i; i = sub_14020B8D8(v8, "rb") )
  {
    if ( v0 >= 1000 )
      break;
    sub_14020B9E8(i);
    sub_140158AB0(v8, "replay%03d.srp", ++v0);
  }
  v2 = sub_14020B8D8(v8, "wb");
  v3 = v2;
  if ( v2 )
  {
    v6 = 1;
    sub_14020CE0C((__int64)&v6, 4, 1, v2);
    v7[0] = dword_1402B26C8;
    sub_14020CE0C((__int64)v7, 4, 1, v3);
    sub_14020CE0C((__int64)&dword_140404A6C[19065874], 4, 1, v3);
    sub_14020CE0C(*(__int64 *)&dword_140404A6C[19065875], 1, (int)dword_140404A6C[19065874], v3);
    sub_14020B9E8(v3);
  }
  return 0; /* the function has no caller */
}
#undef v5
#undef v6
#undef v7
#undef v8
#undef v9

// 1402B26C8: using guessed type int dword_1402B26C8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140127630) ----------------------------------------------------
__int64 sub_140127630()
{
  unsigned int v0; // ebx
  signed int v1; // eax
  __int128 v2; // xmm1
  unsigned int v3; // eax
  int v4; // edi
  signed int v5; // r8d
  __int64 v6; // rbx
  signed int v7; // eax
  char v8; // r9
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  signed int v11; // r8d
  __int64 result; // rax

  v0 = dword_140404A6C[19065873];
  if ( !dword_140404A6C[19065873] )
  {
    *(_QWORD *)&dword_140404A6C[289301092] = 1;
    LOBYTE(dword_140404A6C[289301094]) = 6;
    sub_140115D90(&dword_140404A6C[283831312], 4);
    v1 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v1 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v2 = *(_OWORD *)&dword_140404A6C[283831317];
      *(_OWORD *)((char *)&dword_140404A6C[289301094] + v1) = *(_OWORD *)&dword_140404A6C[283831313];
      *(_OWORD *)((char *)&dword_140404A6C[289301098] + v1) = v2;
      v1 = dword_140404A6C[289301092] + 32;
    }
    v3 = v1 + 1;
    dword_140404A6C[289301092] = v3;
    if ( v3 < dword_140404A6C[19065869] )
    {
      sub_1401FC920(
        *(__m128i **)&dword_140404A6C[19065875],
        (     __m128i *)&dword_140404A6C[289301094],
        (int)v3);
      v0 = dword_140404A6C[289301092] + dword_140404A6C[19065873];
      dword_140404A6C[19065873] += dword_140404A6C[289301092];
    }
    dword_140404A6C[19065874] = v0;
  }
  *(_QWORD *)&dword_140404A6C[289301092] = 1;
  LOBYTE(dword_140404A6C[289301094]) = 5;
  sub_140115D90(&dword_140404A6C[283831448], 4);
  sub_140115D90(&dword_140404A6C[283831450], 24);
  sub_140115D90(&dword_140404A6C[179992853], 30);
  *(_QWORD *)&dword_140404A6C[450962141] = 0;
  dword_140404A6C[450962143] = 0;
  sub_140110D00(255, -1);
  dword_140404A6C[450929546] = dword_140404A6C[456202728];
  sub_140106160(255);
  v4 = dword_140404A6C[19065872];
  v5 = 16;
  dword_140404A6C[450976488] = dword_140404A6C[450976486];
  v6 = dword_140404A6C[308307070] - dword_140404A6C[19065872] + 0x10000;
  v7 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[308307070] >= (int)dword_140404A6C[19065872] )
    v6 = dword_140404A6C[308307070] - dword_140404A6C[19065872];
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v8 = dword_140404A6C[289301093];
    v9 = (unsigned __int16)v6;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v7) &= ~(((1 << v5) - 1) << v8);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v9 << SLOBYTE(dword_140404A6C[289301093]);
      v10 = 8 - dword_140404A6C[289301093];
      if ( v5 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v5 == v10 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_19;
      }
      v5 -= v10;
      v7 = dword_140404A6C[289301092] + 1;
      v9 >>= v10;
      ++dword_140404A6C[289301092];
      v8 = 0;
      if ( v5 <= 0 )
        goto LABEL_19;
    }
    dword_140404A6C[289301093] += v5;
  }
LABEL_19:
  sub_140115D90(&dword_140404A6C[19065872], 16);
  if ( (int)v6 > 0 )
  {
    while ( 1 )
    {
      sub_14010EFF0(v4, 255);
      ++dword_140404A6C[19065872];
      HIWORD(dword_140404A6C[19065872]) = 0;
      if ( !--v6 )
        break;
      v4 = dword_140404A6C[19065872];
    }
  }
  v11 = dword_140404A6C[289301092] + 1;
  dword_140404A6C[289301092] = v11;
  result = v11 + dword_140404A6C[19065873];
  if ( (unsigned int)result >= dword_140404A6C[19065869] )
  {
    dword_140404A6C[19065874] = dword_140404A6C[19065873];
  }
  else
  {
    sub_1401FC920(
      (__m128i *)(*(_QWORD *)&dword_140404A6C[19065875] + (int)dword_140404A6C[19065873]),
      (     __m128i *)&dword_140404A6C[289301094],
      v11);
    result = dword_140404A6C[289301092] + dword_140404A6C[19065873];
    dword_140404A6C[19065873] = result;
    dword_140404A6C[19065874] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAAC: using guessed type unsigned int;
// 144CBFAB0: using guessed type unsigned int;
// 144CBFAB4: using guessed type unsigned int;
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAC0: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 1ABC2D894: using guessed type unsigned int;
// 1ABC4D5E0: using guessed type unsigned int;
// 1ABC4D5E8: using guessed type unsigned int;
// 1ABC5B604: using guessed type unsigned int;
// 1ABC5B60C: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (0000000140127900) ----------------------------------------------------
__int64            sub_140127900(__int64 a1, __int64 a2)
{
  return a2;
}

// 140127BF7: variable 'a3' is possibly undefined
// 1401294D2: variable 'v88' is possibly undefined
// 1401294D2: variable 'v87' is possibly undefined
// 1401294D2: variable 'v89' is possibly undefined
// 1401294D2: variable 'v90' is possibly undefined
// 1401296D2: variable 'v101' is possibly undefined
// 1401296D2: variable 'v100' is possibly undefined
// 1401296D2: variable 'v102' is possibly undefined
// 1401296D2: variable 'v103' is possibly undefined
// 140129E08: variable 'v136' is possibly undefined
// 140129E08: variable 'v137' is possibly undefined
// 140129E08: variable 'v135' is possibly undefined
// 140274DA8: using guessed type int dword_140274DA8;
// 140274E04: using guessed type int dword_140274E04;
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279820: using guessed type __int128 xmmword_140279820;
// 1402B26C8: using guessed type int dword_1402B26C8;
// 1402B2980: using guessed type int dword_1402B2980[8];
// 1402B29A0: using guessed type int dword_1402B29A0[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144CBFAA8: using guessed type unsigned int;
// 144CBFAAC: using guessed type unsigned int;
// 144CBFAB0: using guessed type unsigned int;
// 15104AE60: using guessed type unsigned int;
// 151620C60: using guessed type unsigned int;
// 151620CE4: using guessed type unsigned int;
// 151620DB8: using guessed type unsigned int;
// 151E44920: using guessed type unsigned int;
// 15B1AC860: using guessed type unsigned int;
// 15FE95260: using guessed type unsigned int;
// 16B2A2EC0: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;
// 16B2AAF1C: using guessed type unsigned int;
// 175FD1400: using guessed type unsigned int;
// 1816DEB80: using guessed type unsigned int;
// 18329CC24: using guessed type unsigned int;
// 18329E52C: using guessed type unsigned int;
// 18329E530: using guessed type unsigned int;
// 18329E534: using guessed type unsigned int;
// 183E53120: using guessed type unsigned int;
// 183E93524: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAB4: using guessed type unsigned int;
// 183EBFCC4: using guessed type unsigned int;
// 183EBFCC8: using guessed type unsigned int;
// 183EBFCCC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFCDC: using guessed type unsigned int;
// 183EBFCE0: using guessed type unsigned int;
// 183EBFCE8: using guessed type unsigned int;
// 183EBFCEC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183EBFD54: using guessed type unsigned int;
// 183EBFD58: using guessed type unsigned int;
// 183EBFDC0: using guessed type unsigned int;
// 183EC5984: using guessed type unsigned int;
// 183ECB548: using guessed type unsigned int;
// 183ED110C: using guessed type unsigned int;
// 183ED6CD0: using guessed type unsigned int;
// 183EDC894: using guessed type unsigned int;
// 183F775E0: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F79DE8: using guessed type unsigned int;
// 183F79DF8: using guessed type unsigned int;
// 183F79F84: using guessed type unsigned int;
// 183F7A320: using guessed type unsigned int;
// 183F7A570: using guessed type unsigned int;
// 183F7A5B0: using guessed type unsigned int;
// 183F7A5BC: using guessed type unsigned int;
// 183F7A5FC: using guessed type unsigned int;
// 183F7A60C: using guessed type unsigned int;
// 183F7AE14: using guessed type unsigned int;
// 183F7AEE8: using guessed type unsigned int;
// 183F7C384: using guessed type unsigned int;
// 183F7C388: using guessed type unsigned int;
// 183F7C38C: using guessed type unsigned int;
// 183F7C588: using guessed type unsigned int;
// 183F7CBC0: using guessed type unsigned int;
// 183F7CBD0: using guessed type unsigned int;
// 183F7CBD4: using guessed type unsigned int;
// 18417DE78: using guessed type unsigned int;
// 18417DE7C: using guessed type unsigned int;
// 18417DE80: using guessed type unsigned int;
// 18417DE84: using guessed type unsigned int;
// 189C1DC60: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 189C1DC80: using guessed type unsigned int;
// 189C7BEC4: using guessed type unsigned int;
// 189CDA108: using guessed type unsigned int;
// 189D3834C: using guessed type unsigned int;
// 189D96590: using guessed type unsigned int;
// 189DF47D4: using guessed type unsigned int;
// 189E52A18: using guessed type unsigned int;
// 189EB0C5C: using guessed type unsigned int;
// 19021F0C0: using guessed type unsigned int;
// 19021F0C4: using guessed type unsigned int;
// 19021F0CC: using guessed type unsigned int;
// 19021F0D8: using guessed type unsigned int;
// 19021F0DC: using guessed type unsigned int;
// 19021F0E4: using guessed type unsigned int;
// 19021F0F0: using guessed type unsigned int;
// 19021F0F4: using guessed type unsigned int;
// 19021F0FC: using guessed type unsigned int;
// 1A4BF08E0: using guessed type unsigned int;
// 1A4D2DCE0: using guessed type unsigned int;
// 1A4D2DCE4: using guessed type unsigned int;
// 1A4D31D14: using guessed type unsigned int;
// 1A4D3BD1C: using guessed type unsigned int;
// 1A70AE560: using guessed type unsigned int;
// 1A70AE564: using guessed type unsigned int;
// 1A724E700: using guessed type unsigned int;
// 1A724E720: using guessed type unsigned int;
// 1A729E724: using guessed type unsigned int;
// 1A72FE728: using guessed type unsigned int;
// 1A74FE730: using guessed type unsigned int;
// 1A796F380: using guessed type unsigned int;
// 1A796F3D4: using guessed type unsigned int;
// 1A796F428: using guessed type unsigned int;
// 1A796F47C: using guessed type unsigned int;
// 1A796F4D0: using guessed type unsigned int;
// 1A796F524: using guessed type unsigned int;
// 1A796F578: using guessed type unsigned int;
// 1A796F5CC: using guessed type unsigned int;
// 1A796F620: using guessed type unsigned int;
// 1A796F674: using guessed type unsigned int;
// 1A796F6C8: using guessed type unsigned int;
// 1A796F71C: using guessed type unsigned int;
// 1A796F770: using guessed type unsigned int;
// 1A796F7C4: using guessed type unsigned int;
// 1A796F818: using guessed type unsigned int;
// 1A796F86C: using guessed type unsigned int;
// 1A796F8C0: using guessed type unsigned int;
// 1A796F914: using guessed type unsigned int;
// 1A796F968: using guessed type unsigned int;
// 1A796F9BC: using guessed type unsigned int;
// 1A796FA10: using guessed type unsigned int;
// 1A796FA64: using guessed type unsigned int;
// 1A796FAB8: using guessed type unsigned int;
// 1A796FB0C: using guessed type unsigned int;
// 1A796FB60: using guessed type unsigned int;
// 1A796FBB4: using guessed type unsigned int;
// 1A796FC08: using guessed type unsigned int;
// 1A796FC5C: using guessed type unsigned int;
// 1A796FCB0: using guessed type unsigned int;
// 1A796FD04: using guessed type unsigned int;
// 1A796FD58: using guessed type unsigned int;
// 1A796FDAC: using guessed type unsigned int;
// 1A796FE00: using guessed type unsigned int;
// 1A796FE54: using guessed type unsigned int;
// 1A796FEA8: using guessed type unsigned int;
// 1A796FEFC: using guessed type unsigned int;
// 1A796FF50: using guessed type unsigned int;
// 1A796FFA4: using guessed type unsigned int;
// 1A796FFF8: using guessed type unsigned int;
// 1A797004C: using guessed type unsigned int;
// 1A79700A0: using guessed type unsigned int;
// 1A79700F4: using guessed type unsigned int;
// 1A7970148: using guessed type unsigned int;
// 1A797019C: using guessed type unsigned int;
// 1A79701F0: using guessed type unsigned int;
// 1A7970244: using guessed type unsigned int;
// 1A7970298: using guessed type unsigned int;
// 1A79702EC: using guessed type unsigned int;
// 1A7970340: using guessed type unsigned int;
// 1A7970394: using guessed type unsigned int;
// 1A79703E8: using guessed type unsigned int;
// 1A797043C: using guessed type unsigned int;
// 1A7970490: using guessed type unsigned int;
// 1A79704E4: using guessed type unsigned int;
// 1A7970538: using guessed type unsigned int;
// 1A797058C: using guessed type unsigned int;
// 1A79705E0: using guessed type unsigned int;
// 1A7970634: using guessed type unsigned int;
// 1A7970688: using guessed type unsigned int;
// 1A79706DC: using guessed type unsigned int;
// 1A7970730: using guessed type unsigned int;
// 1A7970784: using guessed type unsigned int;
// 1A79707D8: using guessed type unsigned int;
// 1A797082C: using guessed type unsigned int;
// 1A7970880: using guessed type unsigned int;
// 1A79708D4: using guessed type unsigned int;
// 1A7970928: using guessed type unsigned int;
// 1A797097C: using guessed type unsigned int;
// 1A79709D0: using guessed type unsigned int;
// 1A7970A24: using guessed type unsigned int;
// 1A7970A78: using guessed type unsigned int;
// 1A7970ACC: using guessed type unsigned int;
// 1A7970B20: using guessed type unsigned int;
// 1A7970B74: using guessed type unsigned int;
// 1A7970BC8: using guessed type unsigned int;
// 1A7970C1C: using guessed type unsigned int;
// 1A7970C70: using guessed type unsigned int;
// 1A7970CC4: using guessed type unsigned int;
// 1A7970D18: using guessed type unsigned int;
// 1A7970D6C: using guessed type unsigned int;
// 1A7970DC0: using guessed type unsigned int;
// 1A7970E14: using guessed type unsigned int;
// 1A7970E68: using guessed type unsigned int;
// 1A7970EBC: using guessed type unsigned int;
// 1A7970F10: using guessed type unsigned int;
// 1A7970F64: using guessed type unsigned int;
// 1A7970FB8: using guessed type unsigned int;
// 1A797100C: using guessed type unsigned int;
// 1A7971060: using guessed type unsigned int;
// 1A79710B4: using guessed type unsigned int;
// 1A7971108: using guessed type unsigned int;
// 1A797115C: using guessed type unsigned int;
// 1A79711B0: using guessed type unsigned int;
// 1A7971204: using guessed type unsigned int;
// 1A7971258: using guessed type unsigned int;
// 1A79712AC: using guessed type unsigned int;
// 1A7971300: using guessed type unsigned int;
// 1A7971354: using guessed type unsigned int;
// 1A79713A8: using guessed type unsigned int;
// 1A79713FC: using guessed type unsigned int;
// 1A7971450: using guessed type unsigned int;
// 1A79714A4: using guessed type unsigned int;
// 1A79714F8: using guessed type unsigned int;
// 1A797154C: using guessed type unsigned int;
// 1A79715A0: using guessed type unsigned int;
// 1A79715F4: using guessed type unsigned int;
// 1A7971648: using guessed type unsigned int;
// 1A797169C: using guessed type unsigned int;
// 1A79716F0: using guessed type unsigned int;
// 1A7971744: using guessed type unsigned int;
// 1A7971798: using guessed type unsigned int;
// 1A79717EC: using guessed type unsigned int;
// 1A7971840: using guessed type unsigned int;
// 1A7971894: using guessed type unsigned int;
// 1A79718E8: using guessed type unsigned int;
// 1A797193C: using guessed type unsigned int;
// 1A7971990: using guessed type unsigned int;
// 1A79719E4: using guessed type unsigned int;
// 1A7971A38: using guessed type unsigned int;
// 1A7971A8C: using guessed type unsigned int;
// 1A7971AE0: using guessed type unsigned int;
// 1A7971B34: using guessed type unsigned int;
// 1A7971B88: using guessed type unsigned int;
// 1A7971BDC: using guessed type unsigned int;
// 1A7971C30: using guessed type unsigned int;
// 1A7971C84: using guessed type unsigned int;
// 1A7971CD8: using guessed type unsigned int;
// 1A7971D2C: using guessed type unsigned int;
// 1A7971D80: using guessed type unsigned int;
// 1A8E379D4: using guessed type unsigned int;
// 1ABC2D894: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04B214: using guessed type unsigned int;
// 1AD04B21C: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;

//----- (000000014012AF00) ----------------------------------------------------
void sub_14012AF00()
{
  unsigned int *v0; // rbp
  __int64 v1; // r14
  unsigned __int64 v2; // rsi
  unsigned int *v3; // rax
  __int64 v4; // r8
  __int64 i; // rbx
  __int64 v6; // rdi

  v0 = &dword_140404A6C[83197431];
  v1 = 0;
  v2 = 0;
  do
  {
    if ( *(v0 - 3074) )
    {
      v3 = v0;
      v4 = 512;
      do
      {
        if ( (*v3 & 0xE0000000) == 0x80000000 )
          *v3 &= 0xFF00FFFF;
        v3[2560] = 0;
        ++v3;
        --v4;
      }
      while ( v4 );
      for ( i = 0; i < 4; ++i )
      {
        if ( v2 <= 0x6C413B8 )
        {
          v6 = (int)dword_140404A6C[v1 + 83200503 + i];
          dword_140404A6C[v1 + 83200503 + i] = -1;
          if ( (unsigned int)v6 <= 0x3FF )
          {
            dword_140404A6C[8969 * v6 + 73991662] = -1;
            sub_1401941F0(0, v6);
            sub_1401941F0(3, v6);
            sub_1401941F0(5, v6);
          }
        }
      }
    }
    v2 += 27720LL;
    v0 += 6930;
    v1 += 6930;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[111582711] );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012B090) ----------------------------------------------------
unsigned int *           sub_14012B090(int a1, float *a2, float *a3)
{
  __int64 v3; // rcx
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4

  v3 = 47LL * a1;
  *(float *)&dword_140404A6C[v3 + 18215718] = *(float *)&dword_140404A6C[v3 + 18215718] + *a3;
  *(float *)&dword_140404A6C[v3 + 18215719] = *(float *)&dword_140404A6C[v3 + 18215719] + a3[1];
  *(float *)&dword_140404A6C[v3 + 18215720] = *(float *)&dword_140404A6C[v3 + 18215720] + a3[2];
  v5 = a2[1];
  v6 = a3[1];
  v7 = a3[2];
  v8 = *a3;
  v9 = a2[2] * *a3;
  v10 = *a2;
  v11 = *a2 * v6;
  *(float *)&dword_140404A6C[v3 + 18215733] = (float)((float)(a2[2] * v6) - (float)(v5 * v7))
                                            + *(float *)&dword_140404A6C[v3 + 18215733];
  *(float *)&dword_140404A6C[v3 + 18215734] = (float)((float)(v10 * v7) - v9)
                                            + *(float *)&dword_140404A6C[v3 + 18215734];
  *(float *)&dword_140404A6C[v3 + 18215735] = (float)((float)(v5 * v8) - v11)
                                            + *(float *)&dword_140404A6C[v3 + 18215735];
  return &dword_140404A6C[18215709];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012B170) ----------------------------------------------------
unsigned int *           sub_14012B170(float *a1, int a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm1_4
  __int64 v5; // rdx
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm8_4

  v3 = a3[2];
  v4 = a3[1];
  v5 = 47LL * a2;
  v7 = *(float *)&dword_140404A6C[v5 + 18215738];
  v8 = *(float *)&dword_140404A6C[v5 + 18215736];
  v9 = *(float *)&dword_140404A6C[v5 + 18215737];
  v10 = *a3 * v7;
  v11 = (float)(*a3 * v9) - (float)(v8 * v4);
  *a1 = (float)((float)(v4 * v7) - (float)(v3 * v9)) + *(float *)&dword_140404A6C[v5 + 18215718];
  a1[1] = (float)((float)(v8 * v3) - v10) + *(float *)&dword_140404A6C[v5 + 18215719];
  a1[2] = v11 + *(float *)&dword_140404A6C[v5 + 18215720];
  return &dword_140404A6C[18215709];
}


//----- (000000014012BD30) ----------------------------------------------------
void            sub_14012BD30(__int64 a1, float *a2, double a3)
{
  __m128 v5; // xmm0
  float v6; // xmm8_4
  float v7; // xmm12_4
  float v8; // xmm10_4
  float v9; // xmm9_4
  float v10; // xmm2_4
  float v11; // xmm11_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm6_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm3_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm3_4

  v5 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(a3)), (__int64)a2, a3);
  v6 = a2[2];
  v7 = SR_VEC_LANES(128, v5, f32)[0];
  v8 = a2[1];
  v9 = *a2;
  v10 = *(float *)(a1 + 8);
  v11 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v5, v5, 1), f32)[0];
  v12 = (float)(v10 * *a2) - (float)(*(float *)a1 * v6);
  v13 = (float)((float)(*(float *)(a1 + 4) * v8) + (float)(*(float *)a1 * *a2)) + (float)(v10 * v6);
  v14 = (float)((float)(*(float *)a1 * v8) - (float)(*(float *)(a1 + 4) * *a2)) * SR_VEC_LANES(128, v5, f32)[0];
  v15 = (float)((float)((float)((float)((float)((float)(*(float *)a1 * v8) - (float)(*(float *)(a1 + 4) * *a2)) * v8)
                              - (float)(v12 * v6))
                      * v11)
              + (float)(*a2 * v13))
      + (float)((float)((float)(*(float *)(a1 + 4) * v6) - (float)(v10 * v8)) * SR_VEC_LANES(128, v5, f32)[0]);
  v16 = v12;
  v17 = (float)((float)((float)((float)(*(float *)(a1 + 4) * v6) - (float)(*(float *)(a1 + 8) * v8)) * v6)
              - (float)((float)((float)(*(float *)a1 * v8) - (float)(*(float *)(a1 + 4) * *a2)) * *a2))
      * v11;
  v18 = (float)(v12 * *a2) - (float)((float)((float)(*(float *)(a1 + 4) * v6) - (float)(*(float *)(a1 + 8) * v8)) * v8);
  *(float *)a1 = v15;
  *(float *)(a1 + 4) = (float)(v17 + (float)(v8 * v13)) + (float)(v16 * SR_VEC_LANES(128, v5, f32)[0]);
  *(float *)(a1 + 8) = (float)((float)(v18 * v11) + (float)(v6 * v13)) + v14;
  v19 = *(float *)(a1 + 20);
  v20 = (float)(*(float *)(a1 + 16) * v6) - (float)(v19 * v8);
  SR_VEC_LANES(128, v5, i32)[0] = *(_DWORD *)(a1 + 12);
  v21 = (float)(v19 * v9) - (float)(SR_VEC_LANES(128, v5, f32)[0] * v6);
  v22 = (float)(SR_VEC_LANES(128, v5, f32)[0] * v8) - (float)(*(float *)(a1 + 16) * v9);
  v23 = (float)((float)(SR_VEC_LANES(128, v5, f32)[0] * v9) + (float)(*(float *)(a1 + 16) * v8)) + (float)(v19 * v6);
  *(float *)(a1 + 12) = v9 * v23;
  *(float *)(a1 + 16) = v8 * v23;
  *(float *)(a1 + 20) = v6 * v23;
  *(float *)(a1 + 12) = (float)((float)((float)(v22 * v8) - (float)(v21 * v6)) * v11) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)((float)((float)(v20 * v6) - (float)(v22 * v9)) * v11) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)((float)((float)(v21 * v9) - (float)(v20 * v8)) * v11) + *(float *)(a1 + 20);
  *(float *)(a1 + 12) = (float)(v20 * v7) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)(v21 * v7) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)(v22 * v7) + *(float *)(a1 + 20);
  v24 = *(float *)(a1 + 24);
  v25 = (float)(*(float *)(a1 + 28) * v6) - (float)(*(float *)(a1 + 32) * v8);
  v26 = (float)(*(float *)(a1 + 32) * v9) - (float)(v24 * v6);
  v27 = (float)(v24 * v8) - (float)(*(float *)(a1 + 28) * v9);
  v28 = (float)((float)(v24 * v9) + (float)(*(float *)(a1 + 28) * v8)) + (float)(*(float *)(a1 + 32) * v6);
  *(float *)(a1 + 24) = v9 * v28;
  *(float *)(a1 + 28) = v8 * v28;
  *(float *)(a1 + 32) = v6 * v28;
  *(float *)(a1 + 24) = (float)((float)((float)(v27 * v8) - (float)(v26 * v6)) * v11) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)((float)((float)(v25 * v6) - (float)(v27 * v9)) * v11) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)((float)((float)(v26 * v9) - (float)(v25 * v8)) * v11) + *(float *)(a1 + 32);
  *(float *)(a1 + 24) = (float)(v25 * v7) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)(v26 * v7) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)(v27 * v7) + *(float *)(a1 + 32);
}


//----- (000000014012C100) ----------------------------------------------------
void            sub_14012C100(float *a1, float *a2)
{
  double v4; // xmm2_8
  __m128 v5; // xmm0
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm5_4

  *(_QWORD *)&v4 = *(unsigned int *)a2;
  *(float *)&v4 = (float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]);
  v5 = sub_1401F8AC0(
         COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fsqrt(*(float *)&v4) * 0.5)),
         (__int64)a2,
         v4);
  v6 = SR_VEC_LANES(128, v5, f32)[0];
  v7 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v5, v5, 1), f32)[0];
  v8 = 0.0;
  a1[3] = v7;
  v9 = *a2;
  v10 = fsqrt((float)((float)(v9 * v9) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
  }
  else
  {
    v11 = v9 * (float)(1.0 / v10);
    *a1 = v11;
    v12 = (float)(1.0 / v10) * a2[1];
    a1[1] = v12;
    v8 = (float)(1.0 / v10) * a2[2];
  }
  a1[2] = v8;
  v13 = v11 * v6;
  v14 = v12 * v6;
  v15 = v6 * a1[2];
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v15;
}


//----- (000000014012C1F0) ----------------------------------------------------
void sub_14012C1F0()
{
  signed int v0; // r10d
  float v1; // xmm3_4
  int v2; // edx
  unsigned int v3; // ebx
  unsigned int *v4; // r8
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  unsigned int *v9; // r11
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  float v13; // xmm0_4
  bool v14; // zf
  float v15; // xmm0_4

  if ( (int)dword_140404A6C[133383688] <= 0 )
  {
    v0 = 0;
    v1 = 65536.0;
    v2 = 0;
    v3 = 0;
    if ( (int)dword_140404A6C[132793861] > 0 )
    {
      v4 = &dword_140404A6C[132793864];
      do
      {
        if ( v4[10] == 1 )
        {
          v5 = *(float *)&dword_140404A6C[18 * dword_140404A6C[133383687] + 132793862] - *((float *)v4 - 2);
          v6 = *(float *)&dword_140404A6C[18 * dword_140404A6C[133383687] + 132793863];
          v7 = *(float *)&dword_140404A6C[18 * dword_140404A6C[133383687] + 132793864];
          v8 = (float)(fsqrt(
                         (float)((float)((float)(v6 - *((float *)v4 - 1)) * (float)(v6 - *((float *)v4 - 1)))
                               + (float)(v5 * v5))
                       + (float)((float)(v7 - *(float *)v4) * (float)(v7 - *(float *)v4)))
                     * 0.0078125)
             + *((float *)v4 + 11);
          if ( v1 > v8 )
          {
            v3 = v2;
            v1 = v8;
          }
        }
        ++v2;
        v4 += 18;
      }
      while ( v2 < (int)dword_140404A6C[132793861] );
    }
    if ( dword_140404A6C[18 * v3 + 132793874] == 1 )
    {
      dword_140404A6C[18 * v3 + 132793874] = 2;
      if ( (int)dword_140404A6C[18 * v3 + 132793865] > 0 )
      {
        v9 = &dword_140404A6C[18 * v3 + 132793866];
        v10 = 1;
        do
        {
          v11 = (int)*v9;
          v12 = dword_140404A6C[18 * v11 + 132793874];
          if ( v12 != 2 )
          {
            if ( v12 )
            {
              if ( (float)(*(float *)&dword_140404A6C[18 * v3 + 132793875] + 1.0) < *(float *)&dword_140404A6C[18 * v11 + 132793875] )
              {
                v14 = dword_140404A6C[18 * v11 + 132793879] == 0;
                dword_140404A6C[18 * v11 + 132793876] = v3;
                v15 = *(float *)&dword_140404A6C[18 * v3 + 132793875] + 1.0;
                *(float *)&dword_140404A6C[18 * v11 + 132793875] = v15;
                if ( !v14 )
                  *(float *)&dword_140404A6C[18 * v11 + 132793875] = v15 + 256.0;
                if ( (_DWORD)v11 == dword_140404A6C[133383687] )
                {
                  dword_140404A6C[133383689] = v11;
                  for ( dword_140404A6C[133383688] = 1;
                        (_DWORD)v11 != dword_140404A6C[133383686];
                        ++dword_140404A6C[133383688] )
                  {
                    LODWORD(v11) = dword_140404A6C[18 * (int)v11 + 132793876];
                    dword_140404A6C[v10 + 133383689] = v11;
                    v10 = dword_140404A6C[133383688] + 1;
                  }
                  return;
                }
              }
            }
            else
            {
              dword_140404A6C[18 * v11 + 132793874] = 1;
              dword_140404A6C[18 * v11 + 132793876] = v3;
              v13 = *(float *)&dword_140404A6C[18 * v3 + 132793875] + 1.0;
              *(float *)&dword_140404A6C[18 * v11 + 132793875] = v13;
              if ( dword_140404A6C[18 * v11 + 132793879] )
                *(float *)&dword_140404A6C[18 * v11 + 132793875] = v13 + 256.0;
              if ( (_DWORD)v11 == dword_140404A6C[133383687] )
              {
                dword_140404A6C[133383689] = v11;
                for ( dword_140404A6C[133383688] = 1;
                      (_DWORD)v11 != dword_140404A6C[133383686];
                      ++dword_140404A6C[133383688] )
                {
                  LODWORD(v11) = dword_140404A6C[18 * (int)v11 + 132793876];
                  dword_140404A6C[v10 + 133383689] = v11;
                  v10 = dword_140404A6C[133383688] + 1;
                }
                return;
              }
            }
          }
          ++v0;
          ++v9;
        }
        while ( v0 < (int)dword_140404A6C[18 * v3 + 132793865] );
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1600D628C: using guessed type unsigned int;
// 1600D6290: using guessed type unsigned int;

//----- (000000014012C450) ----------------------------------------------------
__int64 sub_14012C450()
{
  sub_14024C22C(&dword_140404A6C[278520373]);
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012C480) ----------------------------------------------------
__int64 sub_14012C480()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  int i; // esi
  __int64 v3; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C480[32];
#define v5 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v6 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v7 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v8 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v9 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v10 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v11 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v12 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v13 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v14 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v15 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v16 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v17 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v18 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v19 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v20 (*(int (*))(void *)(sr_frame_14012C480 + 0)) /* [rsp+20h] */
#define v21 (*(int (*))(void *)(sr_frame_14012C480 + 16)) /* [rsp+30h] */

  sub_14024C22C(&dword_140404A6C[278520373]);
  v0 = sub_14020B8D8("server.srk", "wb");
  v1 = v0;
  if ( v0 )
  {
    v21 = 8;
    (*(void (           **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250405])(&v21, 4, 1, v0);
    (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
      &dword_140404A6C[134050357],
      4,
      1,
      v1,
      v5);
    (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
      &dword_140404A6C[134050358],
      4,
      1,
      v1,
      v6);
    for ( i = 0; i < (int)dword_140404A6C[134050358]; ++i )
    {
      v3 = 28LL * i;
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050361],
        4,
        1,
        v1,
        v7);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050362],
        4,
        1,
        v1,
        v8);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050363],
        8,
        1,
        v1,
        v9);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050359],
        4,
        1,
        v1,
        v10);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050360],
        4,
        1,
        v1,
        v11);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050365],
        1,
        32,
        v1,
        v12);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050374],
        4,
        1,
        v1,
        v13);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050375],
        4,
        1,
        v1,
        v14);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050376],
        4,
        1,
        v1,
        v15);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050378],
        4,
        1,
        v1,
        v16);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050380],
        4,
        1,
        v1,
        v17);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050381],
        4,
        1,
        v1,
        v18);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050382],
        4,
        1,
        v1,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050385],
        4,
        1,
        v1,
        v20);
    }
    sub_14020B9E8(v1);
  }
  return sub_14024C22C(&dword_140404A6C[278520245]);
}
#undef v5
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

// 14012C4F0: variable 'v5' is possibly undefined
// 14012C509: variable 'v6' is possibly undefined
// 14012C54A: variable 'v7' is possibly undefined
// 14012C563: variable 'v8' is possibly undefined
// 14012C57C: variable 'v9' is possibly undefined
// 14012C595: variable 'v10' is possibly undefined
// 14012C5AE: variable 'v11' is possibly undefined
// 14012C5C7: variable 'v12' is possibly undefined
// 14012C5E0: variable 'v13' is possibly undefined
// 14012C5F9: variable 'v14' is possibly undefined
// 14012C612: variable 'v15' is possibly undefined
// 14012C62B: variable 'v16' is possibly undefined
// 14012C644: variable 'v17' is possibly undefined
// 14012C65D: variable 'v18' is possibly undefined
// 14012C676: variable 'v19' is possibly undefined
// 14012C68F: variable 'v20' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE000: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);

//----- (000000014012C6D0) ----------------------------------------------------
__int64            sub_14012C6D0(int a1, char *a2)
{
  __int64 v3; // rsi
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int *v11; // rbp
  signed int i; // esi
  __int64 v13; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C6D0[576];
#define v15 (*(__int64 (*))(void *)(sr_frame_14012C6D0 + 0)) /* [rsp+0h] */
#define v16 (*(int (*)[4])(void *)(sr_frame_14012C6D0 + 32)) /* [rsp+20h] */
#define v17 (*(char (*)[512])(void *)(sr_frame_14012C6D0 + 48)) /* [rsp+30h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_14012C6D0 + 560)) /* [rsp+230h] */

  v3 = a1;
  v4 = sub_14024C22C("data");
  v5 = sub_14024C22C("mission");
  v6 = v17 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = sub_14020B8D8(v17, "wb");
  v9 = v8;
  if ( v8 )
  {
    v16[0] = 1;
    sub_14020CE0C((__int64)v16, 4, 1, v8);
    v10 = 4100 * v3;
    v11 = &dword_140404A6C[1025 * v3 + 486132853];
    sub_14020CE0C((__int64)v11, 4, 1, v9);
    for ( i = 0; i < (int)*v11; ++i )
    {
      v13 = v10 + 16LL * i;
      sub_14020CE0C((__int64)&dword_140404A6C[486132854] + v13, 4, 3, v9);
      sub_14020CE0C((__int64)&dword_140404A6C[486132857] + v13, 4, 1, v9);
    }
    sub_14020B9E8(v9);
  }
  if ( !v5 )
    sub_14024C22C("..");
  if ( !v4 )
    sub_14024C22C("..");
  return 1; /* 0x14012C86B: mov eax, 1 */
}
#undef v15
#undef v16
#undef v17
#undef v18

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012C890) ----------------------------------------------------
__int64            sub_14012C890(int a1, char *a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned int *v14; // rsi
  signed int i; // ebp
  __int64 v16; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C890[576];
#define v18 (*(__int64 (*))(void *)(sr_frame_14012C890 + 0)) /* [rsp+0h] */
#define v19 (*(int (*)[4])(void *)(sr_frame_14012C890 + 32)) /* [rsp+20h] */
#define v20 (*(char (*)[512])(void *)(sr_frame_14012C890 + 48)) /* [rsp+30h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_14012C890 + 560)) /* [rsp+230h] */

  v3 = a1;
  v6 = sub_14024C22C("data");
  v7 = sub_14024C22C("itemset");
  v8 = v20 - a2;
  do
  {
    v9 = *a2;
    a2[v8] = *a2;
    ++a2;
  }
  while ( v9 );
  if ( a3 || (v10 = sub_14020B8D8(v20, "rb")) == 0 )
  {
    v11 = sub_14020B8D8(v20, "wb");
    v12 = v11;
    if ( v11 )
    {
      v19[0] = 1;
      sub_14020CE0C((__int64)v19, 4, 1, v11);
      v13 = 3792 * v3;
      v14 = &dword_140404A6C[948 * v3 + 272299397];
      sub_14020CE0C((__int64)(v14 + 19), 4, 1, v12);
      for ( i = 0; i < (int)v14[19]; ++i )
      {
        v16 = v13 + 116LL * i;
        sub_14020CE0C((__int64)&dword_140404A6C[272299417] + v16, 1, 64, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299434] + v16, 4, 3, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299437] + v16, 4, 3, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299440] + v16, 4, 3, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299443] + v16, 4, 3, v12);
      }
      sub_14020B9E8(v12);
    }
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  else
  {
    sub_14020B9E8(v10);
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  return 0; /* the function has no caller */
}
#undef v18
#undef v19
#undef v20
#undef v21

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012CAC0) ----------------------------------------------------
__int64            sub_14012CAC0(int a1, char *a2, int a3)
{
  __int64 v3; // rbp
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r15
  signed int v14; // ebx
  signed int v15; // r14d
  int v16; // edi
  int v17; // ebp
  int v18; // edi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012CAC0[576];
#define v20 (*(__int64 (*))(void *)(sr_frame_14012CAC0 + 0)) /* [rsp+0h] */
#define v21 (*(int (*))(void *)(sr_frame_14012CAC0 + 32)) /* [rsp+20h] */
#define v22 (*(int (*))(void *)(sr_frame_14012CAC0 + 36)) /* [rsp+24h] */
#define FileName (*(char (*)[512])(void *)(sr_frame_14012CAC0 + 48)) /* [rsp+30h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_14012CAC0 + 560)) /* [rsp+230h] */

  v3 = a1;
  v22 = sub_14024C22C("data");
  v6 = v22;
  v7 = sub_14024C22C("item");
  v8 = FileName - a2;
  do
  {
    v9 = *a2;
    a2[v8] = *a2;
    ++a2;
  }
  while ( v9 );
  if ( a3 || (v10 = sub_14020B8D8(FileName, "rb")) == 0 )
  {
    v11 = sub_14020B8D8(FileName, "wb");
    v12 = v11;
    if ( v11 )
    {
      v21 = 2;
      sub_14020CE0C((__int64)&v21, 4, 1, v11);
      v13 = 50 * v3;
      sub_14020CE0C((__int64)&dword_140404A6C[50 * v3 + 272248205], 1, 64, v12);
      sub_14020CE0C((__int64)&dword_140404A6C[50 * v3 + 272248222], 4, 1, v12);
      v14 = 0;
      v15 = 0;
      if ( (int)dword_140404A6C[50 * v3 + 272248222] > 0 )
      {
        v16 = 0;
        v17 = 0;
        do
        {
          sub_14020CE0C(*(_QWORD *)&dword_140404A6C[v13 + 272248223] + 4LL * v17, 4, 3, v12);
          sub_14020CE0C(*(_QWORD *)&dword_140404A6C[v13 + 272248225] + 4LL * v16, 4, 2, v12);
          ++v15;
          v17 += 3;
          v16 += 2;
        }
        while ( v15 < (int)dword_140404A6C[v13 + 272248222] );
        v6 = v22;
      }
      sub_14020CE0C((__int64)&dword_140404A6C[v13 + 272248227], 4, 1, v12);
      if ( (int)dword_140404A6C[v13 + 272248227] > 0 )
      {
        v18 = 0;
        do
        {
          sub_14020CE0C(*(_QWORD *)&dword_140404A6C[v13 + 272248229] + 4LL * v18, 4, 3, v12);
          ++v14;
          v18 += 3;
        }
        while ( v14 < (int)dword_140404A6C[v13 + 272248227] );
      }
      sub_14020B9E8(v12);
    }
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  else
  {
    sub_14020B9E8(v10);
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  return 0; /* the function has no caller */
}
#undef v20
#undef v21
#undef v22
#undef FileName
#undef v24

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012CD60) ----------------------------------------------------
void            sub_14012CD60(int a1, int a2, int a3)
{
  __int64 v6; // r9
  float *v7; // rbp
  float *v8; // rsi
  signed int v9; // eax
  signed int v10; // eax
  int v11; // ebx
  signed int v12; // eax
  signed int v13; // eax
  signed int v14; // eax

  if ( a1 != -1 )
  {
    v6 = 7166LL * a1;
    v7 = (float *)&dword_140404A6C[v6 + 280651440];
    v8 = (float *)&dword_140404A6C[v6 + 280651452];
    if ( a2 == 14 )
    {
      v13 = sr_CreateItem(14, v7, nullptr, v8);
      sub_1400E35D0(v13, -1, a1, 6);
      v14 = sr_CreateItem(14, v7, nullptr, v8);
      sub_1400E35D0(v14, -1, a1, 6);
    }
    else
    {
      v9 = sr_CreateItem(a2, v7, nullptr, v8);
      sub_1400E35D0(v9, -1, a1, 0);
      v10 = sr_CreateItem(a2 + 1, v7, nullptr, v8);
      v11 = 1;
      sub_1400E35D0(v10, -1, a1, 1);
      if ( a3 > 1 )
      {
        do
        {
          v12 = sr_CreateItem(a2 + 1, v7, nullptr, v8);
          sub_1400E35D0(v12, -1, a1, ((v11++ - 1) >> 1) + 3);
        }
        while ( v11 < a3 );
      }
    }
  }
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84884: using guessed type unsigned int;
// 15FE95260: using guessed type unsigned int;

//----- (000000014012D310) ----------------------------------------------------
void            sub_14012D310(int a1, unsigned int a2)
{
  int v3; // edi
  signed int v4; // ebx
  unsigned __int8 v5; // al
  signed int v6; // eax
  __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rsi
  char v10; // al
  unsigned int *v11; // rdi
  unsigned int *v12; // rbx
  float v13; // xmm7_4
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm8_4
  float v17; // xmm11_4
  float v18; // xmm14_4
  float v19; // xmm9_4
  int v20; // r10d
  float v21; // xmm1_4
  float v22; // xmm12_4
  unsigned int v23; // eax
  __int64 v24; // rcx
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  signed int v29; // r13d
  __int64 v30; // r15
  __int64 v31; // rsi
  unsigned int v32; // eax
  float v33; // xmm1_4
  unsigned int v34; // xmm0_4
  float *v35; // r14
  signed int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rcx
  signed int v39; // eax
  int v40; // r8d
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rdi
  float v44; // xmm1_4
  unsigned int v45; // eax
  signed int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  float v51; // xmm1_4
  unsigned int v52; // eax
  signed int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdi
  float v58; // xmm1_4
  unsigned int v59; // eax
  signed int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // r9
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012D310[80];
#define v63 (*(float (*))(void *)(sr_frame_14012D310 + 0)) /* [rsp+38h] */
#define v64 (*(float (*))(void *)(sr_frame_14012D310 + 4)) /* [rsp+3Ch] */
#define v65 (*(float (*))(void *)(sr_frame_14012D310 + 8)) /* [rsp+40h] */
#define v66 (*(unsigned int (*)[4])(void *)(sr_frame_14012D310 + 16)) /* [rsp+48h] */
#define v67 (*(__int128 (*))(void *)(sr_frame_14012D310 + 32)) /* [rsp+58h] */
#define v68 (*(__int128 (*))(void *)(sr_frame_14012D310 + 48)) /* [rsp+68h] */
#define v69 (*(int (*))(void *)(sr_frame_14012D310 + 64)) /* [rsp+78h] */

  if ( dword_140404A6C[225426046] )
  {
    v3 = rand() & 1;
    v4 = sub_140130000();
    v5 = rand();
    v6 = sub_14012CEB0(0, 0, v4, v3, 1, (float)v5 * 0.00390625);
    v7 = v6;
    dword_140404A6C[179992045] = v6;
    v8 = sub_140130000();
    v9 = 383 * v7;
    v10 = rand();
    sub_140008E40(v7, dword_140404A6C[383 * v7 + 132400993], v3, v8, v10 & 1);
    v11 = &dword_140404A6C[383 * v7 + 132400648];
    v12 = &dword_140404A6C[383 * v7 + 132400651];
    dword_140404A6C[v9 + 132400668] = 0;
    *(_QWORD *)v11 = 1065353216;
    *((_QWORD *)v11 + 1) = 0;
    *((_QWORD *)v11 + 2) = 1065353216;
    *((_QWORD *)v11 + 3) = 0;
    v11[8] = 1065353216;
    sub_14007B2A0(
      (__int64)&dword_140404A6C[v9 + 132400648],
      (float *)&dword_140404A6C[v9 + 132400651],
      sr_export_float_lane_container(1070141403));
    sub_14007B2A0(
      (__int64)&dword_140404A6C[v9 + 132400648],
      (float *)&dword_140404A6C[v9 + 132400651],
      sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v9 + 132400647]));
    LODWORD(v13) = *v12;
    LODWORD(v14) = v12[1];
    LODWORD(v15) = v12[2];
    LODWORD(v16) = *v11;
    LODWORD(v17) = v11[1];
    LODWORD(v18) = v11[2];
    v19 = *(float *)&dword_140404A6C[383 * v7 + 132400655];
    DWORD2(v68) = dword_140404A6C[383 * v7 + 132400654];
    *(_QWORD *)&v67 = __PAIR64__(LODWORD(v17), LODWORD(v16));
    *((_QWORD *)&v67 + 1) = __PAIR64__(LODWORD(v13), LODWORD(v18));
    *(_QWORD *)&v68 = __PAIR64__(LODWORD(v15), LODWORD(v14));
    v20 = dword_140404A6C[383 * v7 + 132400637];
    v21 = *(float *)&dword_140404A6C[383 * v7 + 132400641];
    v22 = *(float *)&dword_140404A6C[383 * v7 + 132400656];
    v23 = dword_140404A6C[383 * v7 + 132401011];
    v24 = 24944LL * v20;
    *((float *)&v68 + 3) = v19;
    v69 = LODWORD(v22);
    v25 = -*(float *)&dword_140404A6C[v24 + 346708247];
    v26 = -*(float *)&dword_140404A6C[v24 + 346708248];
    v27 = -*(float *)&dword_140404A6C[v24 + 346708249];
    v63 = (float)((float)((float)(v21 - (float)(*((float *)&v68 + 2) * 1.5)) + (float)(v16 * v25)) + (float)(v13 * v26))
        + (float)(*((float *)&v68 + 2) * v27);
    v64 = (float)((float)((float)(*(float *)&dword_140404A6C[383 * v7 + 132400642] - (float)(v19 * 1.5))
                        + (float)(v17 * v25))
                + (float)(v14 * v26))
        + (float)(v19 * v27);
    v28 = *(float *)&dword_140404A6C[383 * v7 + 132400643] - (float)(v22 * 1.5);
    v66[0] = dword_140404A6C[383 * v7 + 132400644];
    v66[2] = dword_140404A6C[383 * v7 + 132400646];
    v65 = (float)((float)(v28 + (float)(v18 * v25)) + (float)(v15 * v26)) + (float)(v22 * v27);
    v66[1] = dword_140404A6C[383 * v7 + 132400645];
    v29 = sr_CreateVehicle(v20, &v63, v66, (unsigned int *)&v67, v23);
    v30 = 5210LL * v29;
    dword_140404A6C[v9 + 132400639] = v29;
    dword_140404A6C[v30 + 129720183] = v7;
    LODWORD(v11) = sub_14005CCF0();
    v31 = 3597LL * (int)v11;
    dword_140404A6C[v31 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[v31 + 71856254], Parameters);
    v32 = dword_140404A6C[487148677];
    v33 = *(float *)&dword_140404A6C[v30 + 129716721];
    v63 = *(float *)&dword_140404A6C[v30 + 129716720];
    dword_140404A6C[v31 + 71859139] = 1;
    dword_140404A6C[v31 + 71859766] = a2;
    dword_140404A6C[v31 + 71859767] = v32;
    dword_140404A6C[v31 + 71859816] = 1;
    dword_140404A6C[v31 + 71859821] = 2;
    dword_140404A6C[v31 + 71859822] = 1;
    v34 = dword_140404A6C[v30 + 129716722];
    v35 = (float *)&dword_140404A6C[v30 + 129716726];
    v64 = v33;
    v65 = *(float *)&v34;
    v36 = sub_140053840(&v63, (float *)&dword_140404A6C[v30 + 129716726], (int)v11);
    v37 = v36;
    dword_140404A6C[v31 + 71856292] = v36;
    sub_140051DC0((int)v11);
    v38 = 7166 * v37;
    v63 = 62.0;
    v65 = 60.0;
    v64 = 10.0;
    v69 = 1065353216;
    dword_140404A6C[v38 + 280651313] = v29;
    dword_140404A6C[v38 + 280651314] = 0;
    v67 = xmmword_140278D30;
    v68 = xmmword_140278D30;
    v39 = sr_CreateItem(27, &v63, nullptr, (float *)&v67);
    v40 = dword_140404A6C[v31 + 71856292];
    dword_140404A6C[1760 * v39 + 278846053] = v29;
    sub_1400E35D0(v39, -1, v40, 4);
    LODWORD(v11) = sr_CreateItem(15, &v63, nullptr, (float *)&v67);
    v41 = 1760LL * (int)v11;
    dword_140404A6C[v41 + 278845898] = 16;
    dword_140404A6C[487148744] = sr_CreateItem(a1, &v63, nullptr, (float *)&v67);
    dword_140404A6C[487148753] = 255;
    sub_1400E35D0((signed int)v11, dword_140404A6C[487148744], -1, 0);
    dword_140404A6C[v41 + 278845898] = 15;
    sub_1400E35D0((signed int)v11, -1, dword_140404A6C[v31 + 71856292], 3);
    dword_140404A6C[v31 + 71856286] = 7;
    *(_QWORD *)&dword_140404A6C[v31 + 71859146] = 0;
    dword_140404A6C[v31 + 71859142] = 1;
    v42 = (int)sub_14005CCF0();
    v43 = 3597 * v42;
    dword_140404A6C[v43 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[3597 * v42 + 71856254], Parameters);
    v44 = *(float *)&dword_140404A6C[v30 + 129716721];
    v45 = dword_140404A6C[487148677];
    v63 = *(float *)&dword_140404A6C[v30 + 129716720];
    v65 = *(float *)&dword_140404A6C[v30 + 129716722];
    v64 = v44;
    dword_140404A6C[v43 + 71859139] = 1;
    dword_140404A6C[v43 + 71859766] = a2;
    dword_140404A6C[v43 + 71859767] = v45;
    dword_140404A6C[v43 + 71859816] = 1;
    dword_140404A6C[v43 + 71859821] = 2;
    dword_140404A6C[v43 + 71859822] = 1;
    v46 = sub_140053840(&v63, (float *)&dword_140404A6C[v30 + 129716726], v42);
    v47 = v46;
    dword_140404A6C[v43 + 71856292] = v46;
    sub_140051DC0(v42);
    v48 = 7166 * v47;
    dword_140404A6C[v48 + 280651313] = v29;
    dword_140404A6C[v48 + 280651314] = 1;
    sub_14012CD60(v47, 11, 4);
    if ( (rand() & 1) == 0 )
    {
      v49 = (int)sub_14005CCF0();
      v50 = 3597 * v49;
      dword_140404A6C[v50 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v49 + 71856254], Parameters);
      v51 = *(float *)&dword_140404A6C[v30 + 129716721];
      v52 = dword_140404A6C[487148677];
      v63 = *(float *)&dword_140404A6C[v30 + 129716720];
      v65 = *(float *)&dword_140404A6C[v30 + 129716722];
      v64 = v51;
      dword_140404A6C[v50 + 71859139] = 1;
      dword_140404A6C[v50 + 71859766] = a2;
      dword_140404A6C[v50 + 71859767] = v52;
      dword_140404A6C[v50 + 71859816] = 1;
      dword_140404A6C[v50 + 71859821] = 2;
      dword_140404A6C[v50 + 71859822] = 1;
      v53 = sub_140053840(&v63, v35, v49);
      v54 = v53;
      dword_140404A6C[v50 + 71856292] = v53;
      sub_140051DC0(v49);
      v55 = 7166 * v54;
      dword_140404A6C[v55 + 280651313] = v29;
      dword_140404A6C[v55 + 280651314] = 2;
      sub_14012CD60(v54, 11, 4);
    }
    if ( (rand() & 1) == 0 )
    {
      v56 = (int)sub_14005CCF0();
      v57 = 3597 * v56;
      dword_140404A6C[v57 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v56 + 71856254], Parameters);
      v58 = *(float *)&dword_140404A6C[v30 + 129716721];
      v59 = dword_140404A6C[487148677];
      v63 = *(float *)&dword_140404A6C[v30 + 129716720];
      v65 = *(float *)&dword_140404A6C[v30 + 129716722];
      v64 = v58;
      dword_140404A6C[v57 + 71859139] = 1;
      dword_140404A6C[v57 + 71859766] = a2;
      dword_140404A6C[v57 + 71859767] = v59;
      dword_140404A6C[v57 + 71859816] = 1;
      dword_140404A6C[v57 + 71859821] = 2;
      dword_140404A6C[v57 + 71859822] = 1;
      v60 = sub_140053840(&v63, v35, v56);
      v61 = v60;
      dword_140404A6C[v57 + 71856292] = v60;
      sub_140051DC0(v56);
      v62 = 7166 * v61;
      dword_140404A6C[v62 + 280651313] = v29;
      dword_140404A6C[v62 + 280651314] = 3;
      sub_14012CD60(v61, 11, 4);
    }
  }
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2220: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657DB0: using guessed type unsigned int;

//----- (000000014012DC20) ----------------------------------------------------
__int64            sub_14012DC20(char *a1, unsigned int a2, unsigned int a3)
{
  int v4; // r12d
  signed int v5; // ebx
  unsigned __int8 v6; // al
  signed int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // r8d
  int v11; // ebx
  int v12; // edi
  int i; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rsi
  char v20; // al
  unsigned int *v21; // rdi
  unsigned int *v22; // rbx
  float v23; // xmm10_4
  float v24; // xmm13_4
  float v25; // xmm4_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  float v28; // xmm2_4
  int v29; // r10d
  float v30; // xmm11_4
  float v31; // xmm14_4
  float v32; // xmm12_4
  __int64 v33; // rcx
  float v34; // xmm6_4
  float v35; // xmm5_4
  float v36; // xmm7_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  unsigned int v39; // xmm0_4
  signed int v40; // r12d
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // rsi
  unsigned int v44; // xmm1_4
  signed int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rcx
  signed int v48; // eax
  int v49; // r8d
  int v50; // eax
  __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rdi
  unsigned int v55; // xmm1_4
  signed int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  unsigned int v61; // xmm1_4
  signed int v62; // eax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned int v67; // xmm1_4
  signed int v68; // eax
  __int64 v69; // rbx
  __int64 v70; // r9
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012DC20[96];
#define v71 (*(unsigned int (*))(void *)(sr_frame_14012DC20 + 0)) /* [rsp+20h] */
#define v72 (*(float (*))(void *)(sr_frame_14012DC20 + 16)) /* [rsp+30h] */
#define v73 (*(float (*))(void *)(sr_frame_14012DC20 + 20)) /* [rsp+34h] */
#define v74 (*(float (*))(void *)(sr_frame_14012DC20 + 24)) /* [rsp+38h] */
#define v75 (*(unsigned int (*)[4])(void *)(sr_frame_14012DC20 + 32)) /* [rsp+40h] */
#define v76 (*(__int128 (*))(void *)(sr_frame_14012DC20 + 48)) /* [rsp+50h] */
#define v77 (*(__int128 (*))(void *)(sr_frame_14012DC20 + 64)) /* [rsp+60h] */
#define v78 (*(int (*))(void *)(sr_frame_14012DC20 + 80)) /* [rsp+70h] */

  if ( !dword_140404A6C[225426046] )
    return 0xFFFFFFFFLL;
  v4 = rand() & 1;
  v5 = sub_140130000();
  v6 = rand();
  v7 = sub_14012CEB0(0, 0, v5, v4, 1, (float)v6 * 0.00390625);
  v8 = v7;
  dword_140404A6C[179992045] = v7;
  v9 = sub_140130000();
  v10 = dword_140404A6C[225426046];
  v11 = 0;
  v12 = v9;
  for ( i = 0; i < 1024; ++i )
  {
    v14 = 396LL * (int)dword_140404A6C[383 * v8 + 132400993];
    v15 = 396LL * v12;
    if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[v14 + 225426181]
                                       - *(float *)&dword_140404A6C[v15 + 225426181])
                               * (float)(*(float *)&dword_140404A6C[v14 + 225426181]
                                       - *(float *)&dword_140404A6C[v15 + 225426181]))
                       + (float)((float)(*(float *)&dword_140404A6C[v14 + 225426180]
                                       - *(float *)&dword_140404A6C[v15 + 225426180])
                               * (float)(*(float *)&dword_140404A6C[v14 + 225426180]
                                       - *(float *)&dword_140404A6C[v15 + 225426180])))
               + (float)((float)(*(float *)&dword_140404A6C[v14 + 225426182]
                               - *(float *)&dword_140404A6C[v15 + 225426182])
                       * (float)(*(float *)&dword_140404A6C[v14 + 225426182]
                               - *(float *)&dword_140404A6C[v15 + 225426182]))) >= 589824.0 )
      break;
    if ( v10 )
    {
      v16 = rand();
      v10 = dword_140404A6C[225426046];
      v12 = v16 % (signed int)dword_140404A6C[225426046];
      do
      {
        v17 = 396LL * v12;
        if ( (int)dword_140404A6C[v17 + 225426059] <= 3 && (int)dword_140404A6C[v17 + 225426060] <= 3 )
          break;
        v18 = rand();
        v10 = dword_140404A6C[225426046];
        ++v11;
        v12 = v18 % (signed int)dword_140404A6C[225426046];
      }
      while ( v11 < 1024 );
      v11 = 0;
    }
    else
    {
      v12 = 0;
    }
  }
  v19 = 383 * v8;
  v20 = rand();
  sub_140008E40(v8, dword_140404A6C[383 * v8 + 132400993], v4, v12, v20 & 1);
  dword_140404A6C[v19 + 132400668] = 0;
  v21 = &dword_140404A6C[383 * v8 + 132400648];
  v22 = &dword_140404A6C[383 * v8 + 132400651];
  *(_QWORD *)v21 = 1065353216;
  *((_QWORD *)v21 + 1) = 0;
  *((_QWORD *)v21 + 2) = 1065353216;
  *((_QWORD *)v21 + 3) = 0;
  v21[8] = 1065353216;
  sub_14007B2A0(
    (__int64)&dword_140404A6C[v19 + 132400648],
    (float *)&dword_140404A6C[v19 + 132400651],
    sr_export_float_lane_container(1070141403));
  sub_14007B2A0(
    (__int64)&dword_140404A6C[v19 + 132400648],
    (float *)&dword_140404A6C[v19 + 132400651],
    sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v19 + 132400647]));
  LODWORD(v23) = v22[1];
  LODWORD(v24) = v22[2];
  LODWORD(v25) = dword_140404A6C[383 * v8 + 132400654];
  LODWORD(v26) = dword_140404A6C[383 * v8 + 132400655];
  LODWORD(v27) = *v21;
  v28 = *(float *)&dword_140404A6C[383 * v8 + 132400641];
  v29 = dword_140404A6C[383 * v8 + 132400637];
  LODWORD(v30) = v21[1];
  v31 = *((float *)v21 + 2);
  v32 = *(float *)&dword_140404A6C[383 * v8 + 132400656];
  v33 = 24944LL * v29;
  HIDWORD(v76) = *v22;
  *(_QWORD *)&v76 = __PAIR64__(LODWORD(v30), LODWORD(v27));
  *((float *)&v76 + 2) = v31;
  *(_QWORD *)&v77 = __PAIR64__(LODWORD(v24), LODWORD(v23));
  *((_QWORD *)&v77 + 1) = __PAIR64__(LODWORD(v26), LODWORD(v25));
  v34 = -*(float *)&dword_140404A6C[v33 + 346708248];
  v35 = -*(float *)&dword_140404A6C[v33 + 346708249];
  v36 = -*(float *)&dword_140404A6C[v33 + 346708247];
  v78 = LODWORD(v32);
  v72 = (float)((float)((float)(v28 - (float)(v25 * 1.5)) + (float)(v27 * v36)) + (float)(v34 * *((float *)&v76 + 3)))
      + (float)(v35 * v25);
  v37 = (float)((float)((float)(*(float *)&dword_140404A6C[383 * v8 + 132400642] - (float)(v26 * 1.5))
                      + (float)(v30 * v36))
              + (float)(v34 * v23))
      + (float)(v35 * v26);
  v38 = *(float *)&dword_140404A6C[383 * v8 + 132400643];
  v71 = dword_140404A6C[383 * v8 + 132401011];
  v75[0] = dword_140404A6C[383 * v8 + 132400644];
  v39 = dword_140404A6C[383 * v8 + 132400646];
  v73 = v37;
  v75[2] = v39;
  v74 = (float)((float)((float)(v38 - (float)(v32 * 1.5)) + (float)(v31 * v36)) + (float)(v34 * v24))
      + (float)(v35 * v32);
  v75[1] = dword_140404A6C[383 * v8 + 132400645];
  v40 = sr_CreateVehicle(v29, &v72, v75, (unsigned int *)&v76, v71);
  v41 = 5210LL * v40;
  dword_140404A6C[v19 + 132400639] = v40;
  dword_140404A6C[v41 + 129720183] = v8;
  v42 = (int)sub_14005CCF0();
  v43 = 3597 * v42;
  dword_140404A6C[v43 + 71856286] = 7;
  sub_140158AB0(&dword_140404A6C[3597 * v42 + 71856254], Parameters);
  v44 = dword_140404A6C[v41 + 129716721];
  v72 = *(float *)&dword_140404A6C[v41 + 129716720];
  v74 = *(float *)&dword_140404A6C[v41 + 129716722];
  v73 = *(float *)&v44;
  dword_140404A6C[v43 + 71859139] = 1;
  dword_140404A6C[v43 + 71859766] = a3;
  dword_140404A6C[v43 + 71859816] = 1;
  dword_140404A6C[v43 + 71859821] = 2;
  dword_140404A6C[v43 + 71859822] = 1;
  v45 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v42);
  v46 = v45;
  dword_140404A6C[v43 + 71856292] = v45;
  sub_140051DC0(v42);
  v47 = 7166 * v46;
  v72 = 62.0;
  v74 = 60.0;
  v73 = 10.0;
  v78 = 1065353216;
  dword_140404A6C[v47 + 280651313] = v40;
  dword_140404A6C[v47 + 280651314] = 0;
  v76 = xmmword_140278D30;
  v77 = xmmword_140278D30;
  v48 = sr_CreateItem(27, &v72, nullptr, (float *)&v76);
  v49 = dword_140404A6C[3597 * v42 + 71856292];
  dword_140404A6C[1760 * v48 + 278846053] = v40;
  sub_1400E35D0(v48, -1, v49, 4);
  v50 = sr_CreateItem(24, &v72, nullptr, (float *)&v76);
  v51 = v50;
  if ( v50 != -1 )
  {
    v52 = sub_140050EF0(0x168u);
    dword_140404A6C[1760 * v51 + 278846098] = v52;
    sub_140080690(v52, 0, a1, a2);
    sub_1400E35D0(v51, -1, dword_140404A6C[v43 + 71856292], 3);
  }
  dword_140404A6C[v43 + 71856286] = 7;
  dword_140404A6C[v43 + 71859142] = 1;
  *(_QWORD *)&dword_140404A6C[v43 + 71859146] = 0;
  v53 = (int)sub_14005CCF0();
  v54 = 3597 * v53;
  dword_140404A6C[v54 + 71856286] = 7;
  sub_140158AB0(&dword_140404A6C[3597 * v53 + 71856254], Parameters);
  v55 = dword_140404A6C[v41 + 129716721];
  v72 = *(float *)&dword_140404A6C[v41 + 129716720];
  v74 = *(float *)&dword_140404A6C[v41 + 129716722];
  v73 = *(float *)&v55;
  dword_140404A6C[v54 + 71859139] = 1;
  dword_140404A6C[v54 + 71859766] = a3;
  dword_140404A6C[v54 + 71859816] = 1;
  dword_140404A6C[v54 + 71859821] = 2;
  dword_140404A6C[v54 + 71859822] = 1;
  v56 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v53);
  v57 = v56;
  dword_140404A6C[v54 + 71856292] = v56;
  sub_140051DC0(v53);
  v58 = 7166 * v57;
  dword_140404A6C[v58 + 280651313] = v40;
  dword_140404A6C[v58 + 280651314] = 1;
  sub_14012CD60(v57, 11, 4);
  if ( (rand() & 1) == 0 )
  {
    v59 = (int)sub_14005CCF0();
    v60 = 3597 * v59;
    dword_140404A6C[v60 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[3597 * v59 + 71856254], Parameters);
    v61 = dword_140404A6C[v41 + 129716721];
    v72 = *(float *)&dword_140404A6C[v41 + 129716720];
    v74 = *(float *)&dword_140404A6C[v41 + 129716722];
    v73 = *(float *)&v61;
    dword_140404A6C[v60 + 71859139] = 1;
    dword_140404A6C[v60 + 71859766] = a3;
    dword_140404A6C[v60 + 71859816] = 1;
    dword_140404A6C[v60 + 71859821] = 2;
    dword_140404A6C[v60 + 71859822] = 1;
    v62 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v59);
    v63 = v62;
    dword_140404A6C[v60 + 71856292] = v62;
    sub_140051DC0(v59);
    v64 = 7166 * v63;
    dword_140404A6C[v64 + 280651313] = v40;
    dword_140404A6C[v64 + 280651314] = 2;
    sub_14012CD60(v63, 11, 4);
  }
  if ( (rand() & 1) == 0 )
  {
    v65 = (int)sub_14005CCF0();
    v66 = 3597 * v65;
    dword_140404A6C[v66 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[3597 * v65 + 71856254], Parameters);
    v67 = dword_140404A6C[v41 + 129716721];
    v72 = *(float *)&dword_140404A6C[v41 + 129716720];
    v74 = *(float *)&dword_140404A6C[v41 + 129716722];
    v73 = *(float *)&v67;
    dword_140404A6C[v66 + 71859139] = 1;
    dword_140404A6C[v66 + 71859766] = a3;
    dword_140404A6C[v66 + 71859816] = 1;
    dword_140404A6C[v66 + 71859821] = 2;
    dword_140404A6C[v66 + 71859822] = 1;
    v68 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v65);
    v69 = v68;
    dword_140404A6C[v66 + 71856292] = v68;
    sub_140051DC0(v65);
    v70 = 7166 * v69;
    dword_140404A6C[v70 + 280651313] = v40;
    dword_140404A6C[v70 + 280651314] = 3;
    sub_14012CD60(v69, 11, 4);
  }
  return (unsigned int)v8;
}
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2220: using guessed type unsigned int;
// 175FF3464: using guessed type unsigned int;

//----- (000000014012E620) ----------------------------------------------------
_UNKNOWN **           sub_14012E620(signed int a1, int a2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // r15d
  __int64 v4; // rsi
  int v5; // r12d
  int v6; // ebx
  int v7; // ebx
  char v8; // al
  int v9; // edi
  int v10; // r14d
  int v11; // ebp
  int v12; // edx
  int i; // ebx
  unsigned int v14; // xmm6_4
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // xmm7_4
  unsigned int *v18; // rax
  unsigned int v19; // xmm8_4
  unsigned int v20; // xmm9_4
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rax
  float v24; // xmm1_4
  __int64 v25; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012E620[240];
#define v26 (*(float (*)[4])(void *)(sr_frame_14012E620 + 0)) /* [rsp+20h] */
#define v27 (*(_OWORD (*)[2])(void *)(sr_frame_14012E620 + 16)) /* [rsp+30h] */
#define v28 (*(int (*))(void *)(sr_frame_14012E620 + 48)) /* [rsp+50h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14012E620 + 232)) /* [rsp+108h] */

  result = &retaddr;
  v3 = a1;
  v4 = 14019LL * a1;
  v5 = a2;
  if ( (int)dword_140404A6C[v4 + 225641327] > 0 )
  {
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[19063789]), 0, 0x100u);
    v6 = rand() & 1;
    v7 = (rand() & 1) + v6;
    v8 = rand();
    v9 = dword_140404A6C[v4 + 225641327];
    v10 = v9;
    if ( (v8 & 1) + v7 + 2 <= v9 )
      v10 = (v8 & 1) + v7 + 2;
    v11 = 0;
    if ( v10 > 0 )
    {
      do
      {
        v12 = 0;
        if ( v9 > 0 )
        {
          v9 = dword_140404A6C[v4 + 225641327];
          v12 = rand() % v9;
          for ( i = 0; i < 512; ++i )
          {
            if ( !dword_140404A6C[v12 + 19063789] )
              break;
            v9 = dword_140404A6C[v4 + 225641327];
            v12 = rand() % v9;
          }
        }
        v14 = 0;
        dword_140404A6C[v12 + 19063789] = 1;
        v15 = v4 * 4 + 788LL * v12;
        v16 = *(unsigned int *)((char *)&dword_140404A6C[225641331] + v15);
        switch ( v16 )
        {
          case 1:
            v14 = 1070141403;
            break;
          case 2:
            v14 = 1078530011;
            break;
          case 3:
            v14 = -1077342245;
            break;
        }
        v17 = *(unsigned int *)((char *)&dword_140404A6C[225641328] + v15);
        v18 = &dword_140404A6C[133450253];
        v19 = *(unsigned int *)((char *)&dword_140404A6C[225641329] + v15);
        v20 = *(unsigned int *)((char *)&dword_140404A6C[225641330] + v15);
        v21 = 0;
        v22 = 0;
        while ( *v18 )
        {
          ++v21;
          ++v22;
          v18 += 202;
          if ( (__int64)v18 >= (__int64)&dword_140404A6C[133657101] )
            goto LABEL_21;
        }
        if ( v21 != -1 )
        {
          sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[202 * v21 + 133450253]), 0, 0x328u);
          v23 = 202 * v22;
          *(_QWORD *)&dword_140404A6C[v23 + 133450253] = 1;
          dword_140404A6C[v23 + 133450258] = v17;
          dword_140404A6C[v23 + 133450259] = v19;
          dword_140404A6C[v23 + 133450260] = v20;
          dword_140404A6C[v23 + 133450261] = v14;
          *(_QWORD *)&dword_140404A6C[v23 + 133450255] = -1;
        }
LABEL_21:
        ++v11;
      }
      while ( v11 < v10 );
      v3 = a1;
      v5 = a2;
    }
    v24 = *(float *)&dword_140404A6C[v4 + 225653937];
    LODWORD(v26[0]) = dword_140404A6C[v4 + 225653936];
    LODWORD(v26[2]) = dword_140404A6C[v4 + 225653938];
    v26[1] = v24;
    v28 = 1065353216;
    v27[0] = xmmword_140278D30;
    v27[1] = xmmword_140278D30;
    v25 = (int)sr_CreateItem(v5, v26, nullptr, (float *)v27);
    result = (_UNKNOWN **)sub_140050EF0(0x168u);
    dword_140404A6C[487148744] = v25;
    dword_140404A6C[487148753] = v3;
    dword_140404A6C[1760 * v25 + 278846098] = (unsigned int)result;
  }
  return result;
}
#undef v26
#undef v27
#undef v28
#undef retaddr

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B4657D8C: using guessed type unsigned int;
// 1B4657DB0: using guessed type unsigned int;

//----- (000000014012E960) ----------------------------------------------------
__int64            sub_14012E960(int a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  int v3; // ebp
  signed int v4; // ebx
  int v5; // esi
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // edi
  float v9; // xmm6_4
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( dword_140404A6C[225426046] && a1 > 0 )
  {
    v2 = (unsigned int)a1;
    do
    {
      v3 = rand() & 1;
      v4 = rand() % (signed int)dword_140404A6C[225426046];
      if ( dword_140404A6C[284024893] )
      {
        while ( v4 == 67 || v4 == 23 )
          v4 = rand() % (signed int)dword_140404A6C[225426046];
      }
      v5 = rand() & 1;
      if ( dword_140404A6C[283831312] == 5 )
      {
        v6 = 396LL * v4;
        if ( dword_140404A6C[34 * dword_140404A6C[v6 + 225426056] + 225391231] == dword_140404A6C[34
                                                                                                * dword_140404A6C[v6 + 225426057]
                                                                                                + 225391231]
          && dword_140404A6C[v6 + 225426059] == 3 )
        {
          v5 = rand() % 3;
        }
      }
      v7 = rand() & 0xF;
      if ( v7 >= 3 )
      {
        if ( v7 >= 9 )
        {
          if ( v7 >= 0xD )
          {
            v8 = 15;
            if ( v7 < 0xE )
              v8 = 7;
          }
          else
          {
            v8 = 9;
          }
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        v8 = 7;
      }
      v9 = (float)(unsigned __int8)rand() * 0.00390625;
      v10 = rand();
      result = sub_14012CEB0(v8, v10 % 6, v4, v3, v5, v9);
      if ( v5 == 2 )
      {
        result = (int)result;
        dword_140404A6C[383 * (int)result + 132400668] = 0;
      }
      --v2;
    }
    while ( v2 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012EB50) ----------------------------------------------------
__int64            sub_14012EB50(int a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // r12d
  __int64 v3; // r8
  signed int v4; // edx
  int v5; // eax
  int v6; // r9d
  signed int v7; // r11d
  signed int v8; // esi
  signed int v9; // r15d
  signed int v10; // r13d
  signed int v11; // ecx
  int v12; // edx
  signed int v13; // eax
  int v14; // ecx
  signed int v15; // edx
  int v16; // eax
  signed int v17; // ecx
  int v18; // edx
  signed int v19; // eax
  int v20; // ecx
  signed int v21; // edx
  bool v22; // cc
  signed int v23; // r8d
  int v24; // edx
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edi
  int v35; // eax
  BOOL v36; // ecx
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rcx
  int *v44; // rsi
  int v45; // eax
  int v46; // r10d
  char *v47; // rcx
  char *v48; // rcx
  int v49; // r9d
  char *v50; // rcx
  char *v51; // rcx
  int v52; // ebx
  char *v53; // rcx
  int v54; // ebx
  char *v55; // rcx
  __int64 v56; // rdx
  char v57; // al
  char *v58; // rcx
  __int64 v59; // rdx
  char v60; // al
  int v61; // r13d
  unsigned int *v62; // rax
  signed int v63; // edi
  signed int v64; // esi
  __int64 v65; // rcx
  char *v66; // rdx
  char v67; // al
  signed int v68; // r14d
  __int64 v69; // r8
  unsigned int v70; // r15d
  __int64 v71; // rsi
  char *v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // r8d
  unsigned int v75; // edx
  char *v76; // rcx
  char *v77; // rcx
  __int64 v78; // rdx
  char v79; // al
  __int64 v80; // rcx
  unsigned int v81; // r8d
  unsigned int v82; // edx
  char *v83; // rcx
  char *v84; // rcx
  __int64 v85; // rdx
  char v86; // al
       char *v87; // rdx
  char *v88; // rdx
  __int64 v89; // r14
  float v90; // xmm1_4
  int v91; // eax
  __int64 v92; // r15
  signed int v93; // edx
  unsigned int *v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // r9
  __int64 v97; // rax
  char *v98; // r8
  unsigned int *v99; // rdx
  char v100; // al
  char *v101; // rcx
  __int64 v102; // rdx
  char v103; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012EB50[2720];
#define v105 (*(__int64 (*))(void *)(sr_frame_14012EB50 + 0)) /* [rsp+0h] */
#define v106 (*(int (*))(void *)(sr_frame_14012EB50 + 48)) /* [rsp+30h] */
#define v107 (*(signed int (*))(void *)(sr_frame_14012EB50 + 52)) /* [rsp+34h] */
#define v108 (*(signed int (*))(void *)(sr_frame_14012EB50 + 56)) /* [rsp+38h] */
#define v109 (*(float (*)[4])(void *)(sr_frame_14012EB50 + 64)) /* [rsp+40h] */
#define v110 (*(_OWORD (*)[2])(void *)(sr_frame_14012EB50 + 80)) /* [rsp+50h] */
#define v111 (*(int (*))(void *)(sr_frame_14012EB50 + 112)) /* [rsp+70h] */
#define v112 (*(_DWORD (*)[255])(void *)(sr_frame_14012EB50 + 144)) /* [rsp+90h] */
#define v113 (*(char (*))(void *)(sr_frame_14012EB50 + 1167)) /* [rsp+48Fh] */
#define v114 (*(char (*)[511])(void *)(sr_frame_14012EB50 + 1168)) /* [rsp+490h] */
#define v115 (*(char (*))(void *)(sr_frame_14012EB50 + 1679)) /* [rsp+68Fh] */
#define v116 (*(char (*)[512])(void *)(sr_frame_14012EB50 + 1680)) /* [rsp+690h] */
#define v117 (*(char (*)[512])(void *)(sr_frame_14012EB50 + 2192)) /* [rsp+890h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_14012EB50 + 2704)) /* [rsp+A90h] */

  v1 = dword_140404A6C[180070377];
  v2 = dword_140404A6C[180105030];
  v3 = 539LL * a1;
  v4 = 256;
  v106 = a1;
  v5 = dword_140404A6C[180001071];
  v6 = dword_140404A6C[v3 + 180001075];
  v7 = dword_140404A6C[v3 + 180035728];
  v8 = dword_140404A6C[v3 + 180070381];
  if ( v6 < 256 )
    v4 = dword_140404A6C[v3 + 180001075];
  v9 = dword_140404A6C[v3 + 180105034];
  v10 = dword_140404A6C[v3 + 180139687];
  if ( (int)dword_140404A6C[180001071] >= 256 )
    v5 = 256;
  v11 = dword_140404A6C[v3 + 180035728];
  if ( v4 <= v7 )
    v11 = v4;
  v12 = dword_140404A6C[180035724];
  if ( v5 <= (int)dword_140404A6C[180035724] )
    v12 = v5;
  v13 = dword_140404A6C[v3 + 180070381];
  if ( v11 <= v8 )
    v13 = v11;
  v14 = dword_140404A6C[180070377];
  if ( v12 <= (int)dword_140404A6C[180070377] )
    v14 = v12;
  v15 = dword_140404A6C[v3 + 180105034];
  if ( v13 <= v9 )
    v15 = v13;
  v16 = dword_140404A6C[180105030];
  if ( v14 <= (int)dword_140404A6C[180105030] )
    v16 = v14;
  v17 = dword_140404A6C[v3 + 180139687];
  if ( v15 <= v10 )
    v17 = v15;
  v18 = dword_140404A6C[180139683];
  if ( v16 <= (int)dword_140404A6C[180139683] )
    v18 = v16;
  v19 = dword_140404A6C[v3 + 180174340];
  v107 = v19;
  if ( v17 <= v19 )
    v19 = v17;
  v20 = dword_140404A6C[180174336];
  if ( v18 <= (int)dword_140404A6C[180174336] )
    v20 = v18;
  v21 = dword_140404A6C[v3 + 180208993];
  v22 = v19 <= v21;
  v23 = v21;
  v108 = v21;
  v24 = dword_140404A6C[180208989];
  if ( v22 )
    v23 = v19;
  if ( v20 <= (int)dword_140404A6C[180208989] )
    v24 = v20;
  if ( v24 <= 0 )
  {
    v25 = 0;
    if ( v6 == v23 && dword_140404A6C[180001071] == v24 )
    {
      v112[0] = 0;
      v25 = 1;
    }
    if ( v7 == v23 && dword_140404A6C[180035724] == v24 )
    {
      v26 = v25++;
      v112[v26] = 1;
    }
    if ( v8 == v23 && v1 == v24 )
    {
      v27 = v25++;
      v112[v27] = 2;
    }
    if ( v9 == v23 )
    {
      v28 = v2 == v24;
      v29 = 3;
      if ( v28 )
      {
        v30 = v25++;
        v112[v30] = 3;
      }
    }
    else
    {
      v29 = 3;
    }
    if ( v10 == v23 && dword_140404A6C[180139683] == v24 )
    {
      v31 = v25++;
      v112[v31] = 4;
    }
    if ( v107 == v23 && dword_140404A6C[180174336] == v24 )
    {
      v32 = v25++;
      v112[v32] = 5;
    }
    if ( v108 == v23 && dword_140404A6C[180208989] == v24 )
    {
      v33 = v25++;
      v112[v33] = 6;
    }
    if ( v25 )
    {
      v34 = 0;
      do
      {
        v35 = rand();
        v36 = 1;
        v37 = (int)v112[v35 % (int)v25];
        if ( (int)dword_140404A6C[283831506] > 0 )
          v36 = (int)dword_140404A6C[34653 * v37 + 180001074] <= 0;
        if ( (int)dword_140404A6C[283837379] > 0 && (int)dword_140404A6C[34653 * v37 + 180001613] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283843252] > 0 && (int)dword_140404A6C[34653 * v37 + 180002152] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283849125] > 0 && (int)dword_140404A6C[34653 * v37 + 180002691] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283854998] > 0 && (int)dword_140404A6C[34653 * v37 + 180003230] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283860871] > 0 && (int)dword_140404A6C[34653 * v37 + 180003769] > 0 )
          v36 = 0;
        ++v34;
      }
      while ( v34 < 100 && v36 );
      LODWORD(v110[0]) = 0;
      v38 = 64;
      *(_QWORD *)((char *)v110 + 4) = 0x200000001LL;
      do
      {
        v39 = rand() % 3;
        v40 = *((_DWORD *)v110 + v39);
        v41 = rand() % 3;
        *((_DWORD *)v110 + v39) = *((_DWORD *)v110 + v41);
        *((_DWORD *)v110 + v41) = v40;
        --v38;
      }
      while ( v38 );
      v42 = 34653 * v37;
      v43 = v106;
      v116[0] = 0;
      v44 = (int *)v110;
      ++dword_140404A6C[34653 * v37 + 180001075 + 539 * v106];
      dword_140404A6C[5 * v43 + 188872240] = 11;
      do
      {
        v45 = *v44;
        if ( *v44 )
        {
          if ( v45 == 1 )
          {
            v114[0] = 0;
            v49 = rand() % 3;
            if ( v49 )
            {
              if ( v49 == 1 )
              {
                sub_140158AB0(v112, "there are new developments in the %s project. ", &dword_140404A6C[v42 + 180035705]);
              }
              else if ( v49 == 2 )
              {
                sub_140158AB0(
                  v112,
                  "the %s project will revolutionize the industry. ",
                  &dword_140404A6C[v42 + 180035705]);
              }
            }
            else
            {
              sub_140158AB0(v112, "project %s has made progress in many areas. ", &dword_140404A6C[v42 + 180035705]);
            }
            v50 = &v113;
            do
              v28 = *++v50 == 0;
            while ( !v28 );
            strcpy(v50, (     char *)v112);
            v51 = &v115;
            do
              v28 = *++v51 == 0;
            while ( !v28 );
            strcpy(v51, v114);
          }
          else if ( v45 == 2 )
          {
            v114[0] = 0;
            if ( (_DWORD)v37 == dword_140404A6C[180001067] )
            {
              v54 = rand() % 2;
              sub_140158AB0(v112, "this project is extremely high value. ");
              if ( v54 == 1 )
                sub_140158AB0(v112, "this is a high priority project. ");
              v55 = &v113;
              do
                v28 = *++v55 == 0;
              while ( !v28 );
              v56 = 0;
              do
              {
                v57 = *((_BYTE *)v112 + v56);
                v55[v56++] = v57;
              }
              while ( v57 );
            }
            else
            {
              v52 = rand() % 4;
              sub_140158AB0(v112, "we are now adding coversheets to tps reports. ");
              switch ( v52 )
              {
                case 1:
                  sub_140158AB0(v112, "the company picnic is next saturday. ");
                  break;
                case 2:
                  sub_140158AB0(v112, "next friday is hawaiian shirt day. ");
                  break;
                case 3:
                  sub_140158AB0(v112, "we need to create more synergy. ");
                  break;
              }
              v53 = &v113;
              do
                v28 = *++v53 == 0;
              while ( !v28 );
              strcpy(v53, (     char *)v112);
            }
            v58 = &v115;
            do
              v28 = *++v58 == 0;
            while ( !v28 );
            v59 = 0;
            do
            {
              v60 = v114[v59];
              v58[v59++] = v60;
            }
            while ( v60 );
          }
        }
        else
        {
          v114[0] = 0;
          v46 = rand() % 3;
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              sub_140158AB0(
                v112,
                "the lab at %s and %s has made great strides. ",
                &dword_140404A6C[v42 + 180035673],
                &dword_140404A6C[v42 + 180035689]);
            }
            else if ( v46 == 2 )
            {
              sub_140158AB0(
                v112,
                "we are increasing development at the %s and %s laboratory. ",
                &dword_140404A6C[v42 + 180035673],
                &dword_140404A6C[v42 + 180035689]);
            }
          }
          else
          {
            sub_140158AB0(
              v112,
              "the laboratory at %s and %s has the data. ",
              &dword_140404A6C[v42 + 180035673],
              &dword_140404A6C[v42 + 180035689]);
          }
          v47 = &v113;
          do
            v28 = *++v47 == 0;
          while ( !v28 );
          strcpy(v47, (     char *)v112);
          v48 = &v115;
          do
            v28 = *++v48 == 0;
          while ( !v28 );
          strcpy(v48, v114);
        }
        ++v44;
        --v29;
      }
      while ( v29 );
      v61 = v106;
      v62 = &dword_140404A6C[273377349];
      v63 = 0;
      while ( 1 )
      {
        v64 = -1;
        if ( !*v62 )
          break;
        ++v63;
        v62 += 290;
        if ( (__int64)v62 >= (__int64)&dword_140404A6C[275753029] )
        {
          v63 = -1;
          goto LABEL_128;
        }
      }
      if ( v63 != -1 )
      {
        v65 = 290LL * v63;
        dword_140404A6C[v65 + 273377349] = 1;
        dword_140404A6C[v65 + 273377606] = 0;
      }
LABEL_128:
      v66 = v116;
      do
      {
        v67 = *v66;
        v66[(_QWORD)&dword_140404A6C[273377349] + 1160LL * v63 - (_QWORD)v116 + 4] = *v66;
        ++v66;
      }
      while ( v67 );
      sub_140115FF0(v63);
      v116[0] = 0;
      sub_140158AB0(v117, "INTEL%02d.CDE", ++dword_140404A6C[180001068]);
      if ( (rand() & 1) != 0 )
      {
        v89 = 14019LL * (int)dword_140404A6C[259 * (rand() % (signed int)dword_140404A6C[487149972]) + 487149973];
        v90 = *(float *)&dword_140404A6C[v89 + 225653937];
        LODWORD(v109[0]) = dword_140404A6C[v89 + 225653936];
        LODWORD(v109[2]) = dword_140404A6C[v89 + 225653938];
        v109[1] = v90;
        v111 = 1065353216;
        v110[0] = xmmword_140278D30;
        v110[1] = xmmword_140278D30;
        v91 = sr_CreateItem(21, v109, nullptr, (float *)v110);
        v92 = v91;
        if ( v91 != -1 )
        {
          v93 = 0;
          v94 = &dword_140404A6C[275753045];
          while ( *v94 )
          {
            ++v93;
            v94 += 2570;
            if ( (__int64)v94 >= (__int64)&dword_140404A6C[278384725] )
              goto LABEL_173;
          }
          v64 = v93;
          if ( v93 != -1 )
          {
            v95 = 2570LL * v93;
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v95 + 275753046]), 0, 0x2824u);
            dword_140404A6C[v95 + 275753045] = 1;
            dword_140404A6C[v95 + 275753046] = 360;
          }
LABEL_173:
          v96 = 2570LL * v64;
          v97 = (int)dword_140404A6C[v96 + 275754072];
          dword_140404A6C[1760 * v92 + 278846098] = v64;
          if ( (int)v97 < 256 )
          {
            dword_140404A6C[6 * v97 + 275754073 + v96] = v63;
            v98 = v117;
            v99 = &dword_140404A6C[6 * (int)dword_140404A6C[v96 + 275754072] + 275754074 + v96];
            do
            {
              v100 = *v98++;
              *(_BYTE *)v99 = v100;
              v99 = (unsigned int *)((char *)v99 + 1);
            }
            while ( v100 );
            dword_140404A6C[6 * (int)dword_140404A6C[v96 + 275754072]++ + 275754078 + v96] = 0;
          }
        }
        sub_140158AB0(
          v114,
          "We have intercepted communications\n"
          "The disk with the info in the lobby of the lab at\n"
          "%s and %s\n"
          "Filename: %s",
          (     char *)&dword_140404A6C[396 * dword_140404A6C[v89 + 225641321] + 225426047],
          (     char *)&dword_140404A6C[396 * dword_140404A6C[v89 + 225641322] + 225426047],
          v117);
        v101 = &v115;
        do
          v28 = *++v101 == 0;
        while ( !v28 );
        v102 = 0;
        do
        {
          v103 = v114[v102];
          v101[v102++] = v103;
        }
        while ( v103 );
        goto LABEL_181;
      }
      v68 = dword_140404A6C[179992853] + 216000;
      v69 = (int)sub_14012DC20(v117, v63, dword_140404A6C[179992853] + 216000);
      v70 = v68 / 3600 / 60 % -12;
      if ( !v70 )
        v70 = 12;
      if ( (_DWORD)v69 != -1 )
      {
        v71 = 383 * v69;
        if ( (int)dword_140404A6C[383 * v69 + 132400671] > 0 )
        {
          sub_140158AB0(v114, "There is in a town car driving around the city with\nvaluable information.\n");
          v72 = &v115;
          do
            v28 = *++v72 == 0;
          while ( !v28 );
          strcpy(v72, v114);
          v73 = 34LL * (int)dword_140404A6C[396 * dword_140404A6C[v71 + 132400672] + 225426056];
          v74 = dword_140404A6C[v73 + 225391236];
          if ( v74 == -1 )
            v74 = dword_140404A6C[v73 + 225391238];
          v75 = dword_140404A6C[v73 + 225391237];
          if ( v75 == -1 )
            v75 = dword_140404A6C[v73 + 225391239];
          if ( v74 != -1 && v75 != -1 )
          {
            v76 = &v115;
            do
              v28 = *++v76 == 0;
            while ( !v28 );
            strcpy(v76, "The car will be driving from ");
            sub_140158AB0(
              v114,
              "%s and %s\n",
              (     char *)&dword_140404A6C[396 * v74 + 225426047],
              (     char *)&dword_140404A6C[396 * v75 + 225426047]);
            v77 = &v115;
            do
              v28 = *++v77 == 0;
            while ( !v28 );
            v78 = 0;
            do
            {
              v79 = v114[v78];
              v77[v78++] = v79;
            }
            while ( v79 );
          }
          v80 = 34LL
              * (int)dword_140404A6C[396 * dword_140404A6C[5 * (int)dword_140404A6C[v71 + 132400671] + 132400667 + v71]
                                   + 225426056];
          v81 = dword_140404A6C[v80 + 225391236];
          if ( v81 == -1 )
            v81 = dword_140404A6C[v80 + 225391238];
          v82 = dword_140404A6C[v80 + 225391237];
          if ( v82 == -1 )
            v82 = dword_140404A6C[v80 + 225391239];
          if ( v81 != -1 && v82 != -1 )
          {
            v83 = &v115;
            do
              v28 = *++v83 == 0;
            while ( !v28 );
            *(_DWORD *)v83 = 2125684;
            sub_140158AB0(
              v114,
              "%s and %s.\n",
              (     char *)&dword_140404A6C[396 * v81 + 225426047],
              (     char *)&dword_140404A6C[396 * v82 + 225426047]);
            v84 = &v115;
            do
              v28 = *++v84 == 0;
            while ( !v28 );
            v85 = 0;
            do
            {
              v86 = v114[v85];
              v84[v85++] = v86;
            }
            while ( v86 );
          }
          v87 = "This mission expires at %d:%02d AM.\n";
          if ( v68 >= 2592000 )
            v87 = "This mission expires at %d:%02d PM.\n";
          sub_140158AB0(v114, v87, v70, (unsigned int)(v68 / 3600 % 60));
          v88 = &v115;
          do
            v28 = *++v88 == 0;
          while ( !v28 );
          strcpy(v88, v114);
LABEL_181:
          sub_140195D20(v61, v116);
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 16B2AAF1C: using guessed type unsigned int;
// 16B2AAF28: using guessed type unsigned int;
// 16B2CCC9C: using guessed type unsigned int;
// 16B2EEA10: using guessed type unsigned int;
// 16B310784: using guessed type unsigned int;
// 16B3324F8: using guessed type unsigned int;
// 16B35426C: using guessed type unsigned int;
// 16B375FE0: using guessed type unsigned int;

//----- (000000014012F890) ----------------------------------------------------
__int64            sub_14012F890(_BYTE *a1,      char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v10; // ecx
  char *v11; // rcx
  bool v12; // zf
  char *v13; // rcx
  int v14; // ecx
  char *v15; // rdx
  int v16; // r8d
  _OWORD *v17; // rax
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
       char *v21; // rdx
  char *v22; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012F890[560];
#define v24 (*(__int64 (*))(void *)(sr_frame_14012F890 + 0)) /* [rsp+0h] */
#define v25 (*(char (*)[512])(void *)(sr_frame_14012F890 + 32)) /* [rsp+20h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14012F890 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v10 = rand() % 3;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v13 = a1 - 1;
      do
        v12 = *++v13 == 0;
      while ( !v12 );
      strcpy(v13, "Reports indicate that ");
    }
  }
  else
  {
    v11 = a1 - 1;
    do
      v12 = *++v11 == 0;
    while ( !v12 );
    strcpy(v11, "We have received reports that ");
  }
  v14 = rand() % 3;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      sub_140158AB0(v25, "the lab at %s and %s ", a3, a4);
    }
    else if ( v14 == 2 )
    {
      sub_140158AB0(v25, "%s and %s laboratory ", a3, a4);
    }
  }
  else
  {
    sub_140158AB0(v25, "the laboratory at %s and %s ", a3, a4);
  }
  v15 = a1 - 1;
  do
    v12 = *++v15 == 0;
  while ( !v12 );
  strcpy(v15, v25);
  v16 = rand() % 3;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v18 = a1 - 1;
      do
        v12 = *++v18 == 0;
      while ( !v12 );
      strcpy(v18, "has disks containing info");
    }
    else if ( v16 == 2 )
    {
      v19 = a1 - 1;
      do
        v12 = *++v19 == 0;
      while ( !v12 );
      strcpy(v19, "may have disks");
    }
  }
  else
  {
    v17 = a1 - 1;
    do
    {
      v12 = *((_BYTE *)v17 + 1) == 0;
      v17 = (_OWORD *)((char *)v17 + 1);
    }
    while ( !v12 );
    *v17 = xmmword_1402773D8;
  }
  sub_140158AB0(v25, " the filename is %s ", a2);
  v20 = a1 - 1;
  do
    v12 = *++v20 == 0;
  while ( !v12 );
  strcpy(v20, v25);
  v21 = "project %s is high value";
  if ( !a6 )
    v21 = "project %s is normal value";
  sub_140158AB0(v25, v21, a5);
  v22 = a1 - 1;
  do
    v12 = *++v22 == 0;
  while ( !v12 );
  strcpy(v22, v25);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v24
#undef v25
#undef v26

// 1402773D8: using guessed type __int128 xmmword_1402773D8;

//----- (000000014012FB60) ----------------------------------------------------
__int64            sub_14012FB60(_BYTE *a1, __int64 a2)
{
  int v4; // r9d
  char *v5; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FB60[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FB60 + 0)) /* [rsp+0h] */
#define v9 (*(char (*)[512])(void *)(sr_frame_14012FB60 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_14012FB60 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v4 = rand() % 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      sub_140158AB0(v9, "the file named %s contains the data. ", a2);
    }
    else if ( v4 == 2 )
    {
      sub_140158AB0(v9, "the secret info is located in %s. ", a2);
    }
  }
  else
  {
    sub_140158AB0(v9, "the data is stored in the file %s. ", a2);
  }
  v5 = a1 - 1;
  while ( *++v5 != 0 )
    ;
  strcpy(v5, v9);
  return 0; /* the function has no caller */
}
#undef v8
#undef v9
#undef v10


//----- (000000014012FC30) ----------------------------------------------------
__int64            sub_14012FC30(_BYTE *a1)
{
  int v2; // edi
  char *v3; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FC30[560];
#define v6 (*(__int64 (*))(void *)(sr_frame_14012FC30 + 0)) /* [rsp+0h] */
#define v7 (*(char (*)[512])(void *)(sr_frame_14012FC30 + 32)) /* [rsp+20h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FC30 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v2 = rand() % 2;
  sub_140158AB0(v7, "this project is extremely high value. ");
  if ( v2 == 1 )
    sub_140158AB0(v7, "this is a high priority project. ");
  v3 = a1 - 1;
  while ( *++v3 != 0 )
    ;
  strcpy(v3, v7);
  return 0; /* the function has no caller */
}
#undef v6
#undef v7
#undef v8


//----- (000000014012FCE0) ----------------------------------------------------
__int64            sub_14012FCE0(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v6; // r10d
  char *v7; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FCE0[560];
#define v10 (*(__int64 (*))(void *)(sr_frame_14012FCE0 + 0)) /* [rsp+0h] */
#define v11 (*(char (*)[512])(void *)(sr_frame_14012FCE0 + 32)) /* [rsp+20h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14012FCE0 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v6 = rand() % 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      sub_140158AB0(v11, "the lab at %s and %s has made great strides. ", a2, a3);
    }
    else if ( v6 == 2 )
    {
      sub_140158AB0(v11, "we are increasing development at the %s and %s laboratory. ", a2, a3);
    }
  }
  else
  {
    sub_140158AB0(v11, "the laboratory at %s and %s has the data. ", a2, a3);
  }
  v7 = a1 - 1;
  while ( *++v7 != 0 )
    ;
  strcpy(v7, v11);
  return 0; /* the function has no caller */
}
#undef v10
#undef v11
#undef v12


//----- (000000014012FDA0) ----------------------------------------------------
__int64            sub_14012FDA0(_BYTE *a1, __int64 a2)
{
  int v4; // r9d
  char *v5; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FDA0[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FDA0 + 0)) /* [rsp+0h] */
#define v9 (*(char (*)[512])(void *)(sr_frame_14012FDA0 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_14012FDA0 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v4 = rand() % 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      sub_140158AB0(v9, "there are new developments in the %s project. ", a2);
    }
    else if ( v4 == 2 )
    {
      sub_140158AB0(v9, "the %s project will revolutionize the industry. ", a2);
    }
  }
  else
  {
    sub_140158AB0(v9, "project %s has made progress in many areas. ", a2);
  }
  v5 = a1 - 1;
  while ( *++v5 != 0 )
    ;
  strcpy(v5, v9);
  return 0; /* the function has no caller */
}
#undef v8
#undef v9
#undef v10


//----- (000000014012FE70) ----------------------------------------------------
__int64            sub_14012FE70(_BYTE *a1)
{
  int v2; // edi
  char *v3; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FE70[560];
#define v6 (*(__int64 (*))(void *)(sr_frame_14012FE70 + 0)) /* [rsp+0h] */
#define v7 (*(char (*)[512])(void *)(sr_frame_14012FE70 + 32)) /* [rsp+20h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FE70 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v2 = rand() % 4;
  sub_140158AB0(v7, "we are now adding coversheets to tps reports. ");
  switch ( v2 )
  {
    case 1:
      sub_140158AB0(v7, "the company picnic is next saturday. ");
      break;
    case 2:
      sub_140158AB0(v7, "next friday is hawaiian shirt day. ");
      break;
    case 3:
      sub_140158AB0(v7, "we need to create more synergy. ");
      break;
  }
  v3 = a1 - 1;
  while ( *++v3 != 0 )
    ;
  strcpy(v3, v7);
  return 0; /* the function has no caller */
}
#undef v6
#undef v7
#undef v8


//----- (0000000140130000) ----------------------------------------------------
__int64 sub_140130000()
{
  int v1; // ebx
  int v2; // edx
  __int64 v3; // rcx

  if ( !dword_140404A6C[225426046] )
    return 0;
  v1 = 0;
  v2 = rand() % (signed int)dword_140404A6C[225426046];
  do
  {
    v3 = 396LL * v2;
    if ( (int)dword_140404A6C[v3 + 225426059] <= 3 && (int)dword_140404A6C[v3 + 225426060] <= 3 )
      break;
    ++v1;
    v2 = rand() % (signed int)dword_140404A6C[225426046];
  }
  while ( v1 < 1024 );
  return (unsigned int)v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401300C0) ----------------------------------------------------
unsigned int *           sub_1401300C0(int a1)
{
  unsigned int *v2; // r10
  unsigned int *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = &dword_140404A6C[283831868];
  do
  {
    result = v2;
    v4 = 2;
    do
    {
      if ( *(result - 280) && !*(result - 279) && *(result - 278) == a1 )
      {
        v5 = (int)*(result - 276);
        if ( (unsigned int)v5 < 0x400 )
          dword_140404A6C[1760 * v5 + 278845900] = 0;
        *(result - 276) = -1;
      }
      if ( *(result - 1) && !*result && result[1] == a1 )
      {
        v6 = (int)result[3];
        if ( (unsigned int)v6 < 0x400 )
          dword_140404A6C[1760 * v6 + 278845900] = 0;
        result[3] = -1;
      }
      if ( result[278] && !result[279] && result[280] == a1 )
      {
        v7 = (int)result[282];
        if ( (unsigned int)v7 < 0x400 )
          dword_140404A6C[1760 * v7 + 278845900] = 0;
        result[282] = -1;
      }
      if ( result[557] && !result[558] && result[559] == a1 )
      {
        v8 = (int)result[561];
        if ( (unsigned int)v8 < 0x400 )
          dword_140404A6C[1760 * v8 + 278845900] = 0;
        result[561] = -1;
      }
      if ( result[836] && !result[837] && result[838] == a1 )
      {
        v9 = (int)result[840];
        if ( (unsigned int)v9 < 0x400 )
          dword_140404A6C[1760 * v9 + 278845900] = 0;
        result[840] = -1;
      }
      if ( result[1115] && !result[1116] && result[1117] == a1 )
      {
        v10 = (int)result[1119];
        if ( (unsigned int)v10 < 0x400 )
          dword_140404A6C[1760 * v10 + 278845900] = 0;
        result[1119] = -1;
      }
      if ( result[1394] && !result[1395] && result[1396] == a1 )
      {
        v11 = (int)result[1398];
        if ( (unsigned int)v11 < 0x400 )
          dword_140404A6C[1760 * v11 + 278845900] = 0;
        result[1398] = -1;
      }
      if ( result[1673] && !result[1674] && result[1675] == a1 )
      {
        v12 = (int)result[1677];
        if ( (unsigned int)v12 < 0x400 )
          dword_140404A6C[1760 * v12 + 278845900] = 0;
        result[1677] = -1;
      }
      result += 2232;
      --v4;
    }
    while ( v4 );
    v2 += 5873;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[283867106] );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140130350) ----------------------------------------------------
void            sub_140130350(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  signed int v3; // edi
  unsigned int v6; // ebp
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // esi
  char v10; // al
  int v11; // r9d
  int v12; // eax

  v3 = dword_140404A6C[289301092];
  v6 = a1;
  if ( (int)dword_140404A6C[289301093] > 0 )
  {
    v3 = dword_140404A6C[289301092] + 1;
    dword_140404A6C[289301093] = 0;
    ++dword_140404A6C[289301092];
  }
  if ( v3 > 1200 )
  {
    v7 = 0;
    dword_140404A6C[291021664] = 0;
    v8 = 0;
    v9 = (v3 >> 10) + 1;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        *(_QWORD *)&dword_140404A6C[291021662] = 0;
        if ( v7 )
        {
          unk_1402B26C0 = dword_140404A6C[291021665];
          LOWORD(dword_140404A6C[289333870]) = dword_140404A6C[291021666];
        }
        else
        {
          dword_140404A6C[291021665] = unk_1402B26C0;
          LOWORD(dword_140404A6C[291021666]) = dword_140404A6C[289333870];
          BYTE2(dword_140404A6C[291021666]) = v8;
        }
        v10 = HIBYTE(dword_140404A6C[291021666]);
        v11 = v3;
        if ( !v7 )
          v10 = v9;
        dword_140404A6C[291021661] = 8;
        HIBYTE(dword_140404A6C[291021666]) = v10;
        v12 = v3;
        if ( v3 > 1024 )
          v11 = 1024;
        v3 -= 1024;
        if ( v12 <= 1024 )
          v3 = 0;
        sub_14015AFD0(0, (     __m128i *)&dword_140404A6C[256 * v8 + 289301094], 1, v11);
        if ( v6 )
        {
          dword_140404A6C[289301087] = htonl_sr(v6);
          HIWORD(dword_140404A6C[289301086]) = htons_sr(a2);
          sendto_sr(
            (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
            &dword_140404A6C[291021665],
            dword_140404A6C[291021661],
            0,
            &dword_140404A6C[289301086],
            dword_140404A6C[289301090]);
        }
        else
        {
          sub_140198DC0(a3, (__int64)&dword_140404A6C[291021665], dword_140404A6C[291021661]);
        }
        if ( ++v8 >= v9 )
          break;
        v7 = dword_140404A6C[291021664];
      }
    }
    ++LOWORD(dword_140404A6C[289333870]);
  }
  else if ( (_DWORD)a1 )
  {
    if ( dword_140404A6C[dword_140404A6C[289301069] + 289301070] )
    {
      dword_140404A6C[289301087] = htonl_sr(a1);
      HIWORD(dword_140404A6C[289301086]) = htons_sr(a2);
      sendto_sr(
        (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
        &dword_140404A6C[289301094],
        dword_140404A6C[289301092],
        0,
        &dword_140404A6C[289301086],
        dword_140404A6C[289301090]);
    }
  }
  else
  {
    sub_140198DC0(a3, (__int64)&dword_140404A6C[289301094], v3);
  }
}

// 140198FEF: using guessed type __int64 __fastcall htonl(_QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 140199025: using guessed type __int64 __fastcall sendto(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;
// 1853BD424: using guessed type unsigned int;
// 185A2D7E4: using guessed type unsigned int;
// 185A2D7EC: using guessed type unsigned int;
// 185A2D7F4: using guessed type unsigned int;

//----- (00000001401305F0) ----------------------------------------------------
__m128            sub_1401305F0(float a1, float a2, int a3)
{
  int v4; // r11d
  __int128 v5; // xmm5
  int v6; // r8d
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  float v11; // xmm7_4
  int v12; // r9d
  int v13; // edi
  int v14; // ecx
  float v15; // xmm8_4

  v4 = (int)a2;
  v5 = 0x3F800000u;
  v6 = a3 & ((int)a1 + 1);
  v7 = ((57 * v4 + (int)a1) << 13) ^ (57 * v4 + (int)a1);
  v8 = 15731 * v7 * v7;
  v9 = ((v6 + 57 * v4) << 13) ^ (v6 + 57 * v4);
  v10 = 57 * (a3 & ((int)a2 + 1));
  v11 = (float)(3.0 - (float)((float)(a1 - (float)(int)a1) + (float)(a1 - (float)(int)a1)))
      * (float)((float)(a1 - (float)(int)a1) * (float)(a1 - (float)(int)a1));
  v12 = 15731 * (((v10 + (int)a1) << 13) ^ (v10 + (int)a1)) * (((v10 + (int)a1) << 13) ^ (v10 + (int)a1)) + 789221;
  v13 = (15731 * v9 * v9 + 789221) * (15731 * v9 * v9 + 789221) - 771171059;
  v14 = (((v10 + v6) << 13) ^ (v10 + v6)) * (((v10 + v6) << 13) ^ (v10 + v6));
  v15 = (float)(3.0 - (float)((float)(a2 - (float)(int)a2) + (float)(a2 - (float)(int)a2)))
      * (float)((float)(a2 - (float)(int)a2) * (float)(a2 - (float)(int)a2));
  *(float *)&v5 = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * (float)(1.0 - v11))
                                + (float)((float)(1.0 - (float)((float)(v13 & 0x7FFFFFFF) * 9.3132257e-10)) * v11))
                        * (float)(1.0 - v15))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((v12 * v12 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                        * (float)(1.0 - v11))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * v14 + 789221) * (15731 * v14 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * v11))
                        * v15);
  return (__m128)v5;
}


//----- (00000001401307D0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1401307D0(int a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // edx
  __int8 v8; // al
  int v9; // edx
  int v10; // edx
  __int64 v11; // r9
  int v12; // r9d
  int v13; // eax
  char *v14; // rcx
  char v15; // al
  unsigned __int8 *v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int64 v25; // rdi
  int v26; // edx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r14
  unsigned int v31; // eax
  unsigned int v32; // esi
  __int64 v33; // rdi
  int v34; // edx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r14
  unsigned int v38; // eax
  unsigned int v39; // esi
  __int64 v40; // rdi
  int v41; // edx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r14
  unsigned int v45; // eax
  unsigned int v46; // esi
  __int64 v47; // rdi
  int v48; // edx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned int v52; // eax
  unsigned int v53; // esi
  __int64 v54; // rdi
  int v55; // edx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r14
  unsigned int v59; // eax
  unsigned int v60; // esi
  __int64 v61; // rdi
  __int8 *v62; // rcx
  __int8 v63; // al
  unsigned int v64; // r8d
  __int64 v65; // r14
  unsigned int v66; // esi
  unsigned int v67; // eax
  __int64 v68; // rdi
  bool v69; // zf
  unsigned int v70; // eax
  unsigned int v71; // edx
  __int64 v72; // rcx
  unsigned int v73; // eax
  __int64 v74; // rax
  float v75; // xmm2_4
  float v76; // xmm1_4
  float v77; // xmm0_4
  __int64 v78; // rax
  float v79; // xmm2_4
  float v80; // xmm1_4
  float v81; // xmm0_4
  __int64 v82; // rax
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm0_4
  __int64 v86; // rax
  float v87; // xmm2_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  __int64 v90; // rax
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm0_4
  __int64 v94; // rax
  float v95; // xmm2_4
  float v96; // xmm1_4
  float v97; // xmm0_4
  int i; // edi
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rax
  signed int v102; // eax
  int v103; // r8d
  __int64 v104; // rdi
  __int8 *v105; // rcx
  int v106; // ebx
  __int8 v107; // al
  __int64 v108; // rsi
  signed int v109; // eax
  signed int v110; // eax
  __int64 v111; // rcx
  __int8 *v112; // rcx
  __int8 v113; // al
  unsigned int v114; // r8d
  __int64 v115; // r14
  unsigned int v116; // eax
  unsigned int v117; // esi
  __int64 v118; // rdi
  char v119; // al
  unsigned int *v120; // r12
  __int8 *v121; // rcx
  __int8 v122; // al
  int v123; // r9d
  __int8 *v124; // r8
  __int64 j; // rcx
  __int8 v126; // dl
  int v127; // eax
  unsigned int *v128; // rcx
  __int8 *v129; // rcx
  __int8 v130; // al
  __int64 v131; // rcx
  __int8 v132; // al
  __int64 v133; // rax
  int v134; // eax
  int v135; // ebx
  unsigned int *v136; // rcx
  __int8 *v137; // rcx
  __int8 v138; // al
  __int64 v139; // rcx
  __int8 v140; // al
  __int64 v141; // rax
  int v142; // eax
  int v143; // ebx
  __int8 *v144; // rcx
  __int8 v145; // al
  __int64 v146; // rcx
  __int64 v147; // r14
  unsigned int v148; // eax
  unsigned int v149; // esi
  __int64 v150; // rdi
  unsigned int v151; // eax
  __int64 v152; // rcx
  int v153; // r10d
  int v154; // r9d
  __int64 v155; // rax
  __int64 v156; // r8
  unsigned __int8 *v157; // rax
  char *v158; // r8
  int v159; // ecx
  int v160; // edx
  unsigned int v161; // edx
  __int64 v162; // r9
  __m128i v163; // xmm1
  __m128i v164; // xmm0
  __m128i v165; // xmm1
  __int64 v166; // r14
  unsigned int v167; // eax
  unsigned int v168; // esi
  __int64 v169; // rdi
  int v170; // eax
  unsigned int v171; // ecx
  __int64 v173; // r14
  unsigned int v174; // eax
  unsigned int v175; // esi
  __int64 v176; // rdi
  int v177; // r10d
  int v178; // ecx
  __int64 v179; // r9
  __int64 v180; // rdx
  __int64 v181; // r14
  unsigned int v182; // esi
  unsigned int v183; // eax
  __int64 v184; // rdi
  unsigned int v185; // r10d
  int v186; // ecx
  __int64 v187; // r9
  __int64 v188; // r14
  unsigned int v189; // eax
  unsigned int v190; // esi
  __int64 v191; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401307D0[912];
#define v192 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 0)) /* [rsp+0h] */
#define v193 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 32)) /* [rsp+20h] */
#define v194 (*(int (*))(void *)(sr_frame_1401307D0 + 48)) /* [rsp+30h] */
#define v195 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 56)) /* [rsp+38h] */
#define v196 (*(float (*))(void *)(sr_frame_1401307D0 + 64)) /* [rsp+40h] */
#define v197 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 72)) /* [rsp+48h] */
#define v198 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 80)) /* [rsp+50h] */
#define v199 (*(sr_frame_i128 (*))(void *)(sr_frame_1401307D0 + 88)) /* [rsp+58h] */
#define v200 (*(sr_frame_i128 (*))(void *)(sr_frame_1401307D0 + 104)) /* [rsp+68h] */
#define v201 (*(int (*))(void *)(sr_frame_1401307D0 + 120)) /* [rsp+78h] */
#define v202 (*(__m128i (*)[16])(void *)(sr_frame_1401307D0 + 128)) /* [rsp+80h] */
#define v203 (*(_BYTE (*)[512])(void *)(sr_frame_1401307D0 + 384)) /* [rsp+180h] */
#define v204 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 896)) /* [rsp+380h] */

  v3 = a2;
  v195 = a2;
  if ( a1 == -1 )
    return 0; /* 0x140130805: xor eax, eax */
  v4 = 14388LL * a1;
  v5 = a1;
  v198 = a1;
  v197 = v4;
  if ( *(int *)((char *)&dword_140404A6C[71856269] + v4) > 0 )
    return 1; /* 0x140130858: jg -> mov eax, 1 */
  *(_BYTE *)(a2 + 63) = 0;
  v6 = -1;
  do
    ++v6;
  while ( *(_BYTE *)(a2 + v6) );
  v7 = 0;
  v194 = 0;
  if ( (int)v6 <= 63 )
  {
    if ( (int)v6 <= 0 )
      goto LABEL_9;
  }
  else
  {
    LODWORD(v6) = 63;
  }
  do
  {
    v8 = tolower(*(char *)(v7 + v3));
    v9 = v194;
    SR_VEC_LANES(128, v202[0], i8)[v194] = v8;
    v7 = v9 + 1;
    v194 = v7;
  }
  while ( v7 < (int)v6 );
LABEL_9:
  if ( (unsigned __int64)(int)v6 >= 0x100 )
    sub_1401F8694();
  v10 = 0;
  SR_VEC_LANES(128, v202[0], i8)[(int)v6] = 0;
  v194 = 0;
  *((_BYTE *)&dword_140404A6C[71859827] + v4) = 0;
  v11 = -1;
  do
    ++v11;
  while ( SR_VEC_LANES(128, v202[0], i8)[v11] );
  v12 = v11 - 5;
  if ( v12 > 0 )
  {
    v13 = 0;
    do
    {
      if ( SR_VEC_LANES(128, v202[0], i8)[v13] == 110
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 1] == 105
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 2] == 103
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 3] == 103
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 4] == 101
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 5] == 114 )
      {
        v14 = (char *)v3;
        do
        {
          v15 = *v14;
          v14[(_QWORD)&dword_140404A6C[71859827] + v4 - v3] = *v14;
          ++v14;
        }
        while ( v15 );
        strcpy((char *)v3, "i'm an idiot");
      }
      v13 = ++v10;
    }
    while ( v10 < v12 );
    v194 = v10;
  }
  if ( *(_BYTE *)v3 != 47 )
    return 0; /* 0x1401309A7: jne -> xor eax, eax */
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/admin "), 7) && (int)++*(unsigned int *)((char *)&dword_140404A6C[71856267] + v4) < 5 )
  {
    if ( LOBYTE(dword_140404A6C[73991352]) )
    {
      v16 = (unsigned __int8 *)(v3 + 7);
      do
      {
        v17 = *((unsigned __int8 *)&dword_140404A6C[73991350] + (_QWORD)v16 - v3 + 1);
        v18 = *v16 - v17;
        if ( v18 )
          break;
        ++v16;
      }
      while ( v17 );
      if ( !v18 )
      {
        v19 = -1;
        v194 = 0;
        if ( (int)dword_140404A6C[456202445] > 0 )
        {
          v20 = 0;
          do
          {
            v21 = v20;
            if ( dword_140404A6C[47224 * v20 + 438887411] != a1 )
              v21 = v19;
            ++v20;
            v19 = v21;
          }
          while ( v20 < (int)dword_140404A6C[456202445] );
          v194 = v20;
        }
        *(unsigned int *)((char *)&dword_140404A6C[71856266] + v4) = 1;
        if ( v19 != -1 )
          dword_140404A6C[47224 * v19 + 438887410] = 1;
        sub_140158AB0(v202, "%s admin", (     char *)&dword_140404A6C[71856254] + v4);
        if ( dword_140404A6C[456202453] )
        {
          v22 = -1;
          do
            ++v22;
          while ( SR_VEC_LANES(128, v202[0], i8)[v22] );
          v23 = dword_140404A6C[308307070];
          if ( (int)v22 > 63 )
            LODWORD(v22) = 63;
          v24 = dword_140404A6C[283831474];
          v25 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v25) = 2;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v25) = v24;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v25), v202, (int)v22);
          dword_140404A6C[308307070] = v23 + 1;
          *((_BYTE *)&dword_140404A6C[297756301] + (int)v22 + v25) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v25) = v22;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v25) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v25) = -1;
          *(unsigned int *)((char *)&dword_140404A6C[297756296] + v25) = 0;
        }
      }
    }
  }
  if ( !*(unsigned int *)((char *)&dword_140404A6C[71856266] + v4) )
    return 1; /* 0x140130B6A: je -> mov eax, 1 */
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/hlist"), 6) )
  {
    v26 = 0;
    v194 = 0;
    v27 = 0;
    do
    {
      v28 = 7166LL * v27;
      if ( dword_140404A6C[v28 + 280651303] )
      {
        v29 = (int)dword_140404A6C[v28 + 280651305];
        if ( (_DWORD)v29 == -1 )
          sub_140158AB0(v202, "%d:%d", v26, -1);
        else
          sub_140158AB0(v202, "%d:%d %s", v26, v29, (     char *)&dword_140404A6C[3597 * v29 + 71856254]);
        if ( dword_140404A6C[456202453] )
        {
          v30 = -1;
          do
            ++v30;
          while ( SR_VEC_LANES(128, v202[0], i8)[v30] );
          v31 = dword_140404A6C[283831474];
          v32 = dword_140404A6C[308307070];
          if ( (int)v30 > 63 )
            LODWORD(v30) = 63;
          v33 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v33) = 2;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v33) = v31;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v33), v202, (int)v30);
          *((_BYTE *)&dword_140404A6C[297756301] + (int)v30 + v33) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v33) = v30;
          dword_140404A6C[308307070] = v32 + 1;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v33) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v33) = -1;
          *(unsigned int *)((char *)&dword_140404A6C[297756296] + v33) = 0;
          HIWORD(dword_140404A6C[308307070]) = 0;
        }
        v26 = v194;
      }
      v194 = ++v26;
      v27 = v26;
    }
    while ( v26 < 10 );
    v3 = v195;
    v4 = v197;
    v5 = v198;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list1"), 6) )
  {
    v34 = 0;
    v194 = 0;
    if ( (int)dword_140404A6C[456202445] > 0 )
    {
      v35 = 0;
      do
      {
        if ( v35 < 10 )
        {
          v36 = (int)dword_140404A6C[47224 * v35 + 438887411];
          if ( (_DWORD)v36 != -1 )
          {
            sub_140158AB0(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v36 + 71856254],
              dword_140404A6C[3597 * v36 + 71856265]);
            if ( dword_140404A6C[456202453] )
            {
              v37 = -1;
              do
                ++v37;
              while ( SR_VEC_LANES(128, v202[0], i8)[v37] );
              v38 = dword_140404A6C[283831474];
              v39 = dword_140404A6C[308307070];
              if ( (int)v37 > 63 )
                LODWORD(v37) = 63;
              v40 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v40) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v40) = v38;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v40), v202, (int)v37);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v37 + v40) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v40) = v37;
              dword_140404A6C[308307070] = v39 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v40) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v40) = -1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v40) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            v34 = v194;
          }
        }
        v35 = ++v34;
        v194 = v34;
      }
      while ( v34 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list2"), 6) )
  {
    v41 = 10;
    v194 = 10;
    if ( (int)dword_140404A6C[456202445] > 10 )
    {
      v42 = 10;
      do
      {
        if ( v42 < 20 )
        {
          v43 = (int)dword_140404A6C[47224 * v42 + 438887411];
          if ( (_DWORD)v43 != -1 )
          {
            sub_140158AB0(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v43 + 71856254],
              dword_140404A6C[3597 * v43 + 71856265]);
            if ( dword_140404A6C[456202453] )
            {
              v44 = -1;
              do
                ++v44;
              while ( SR_VEC_LANES(128, v202[0], i8)[v44] );
              v45 = dword_140404A6C[283831474];
              v46 = dword_140404A6C[308307070];
              if ( (int)v44 > 63 )
                LODWORD(v44) = 63;
              v47 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v47) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v47) = v45;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v47), v202, (int)v44);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v44 + v47) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v47) = v44;
              dword_140404A6C[308307070] = v46 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v47) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v47) = -1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v47) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            v41 = v194;
          }
        }
        v42 = ++v41;
        v194 = v41;
      }
      while ( v41 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list3"), 6) )
  {
    v48 = 20;
    v194 = 20;
    if ( (int)dword_140404A6C[456202445] > 20 )
    {
      v49 = 20;
      do
      {
        if ( v49 < 30 )
        {
          v50 = (int)dword_140404A6C[47224 * v49 + 438887411];
          if ( (_DWORD)v50 != -1 )
          {
            sub_140158AB0(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v50 + 71856254],
              dword_140404A6C[3597 * v50 + 71856265]);
            if ( dword_140404A6C[456202453] )
            {
              v51 = -1;
              do
                ++v51;
              while ( SR_VEC_LANES(128, v202[0], i8)[v51] );
              v52 = dword_140404A6C[283831474];
              v53 = dword_140404A6C[308307070];
              if ( (int)v51 > 63 )
                LODWORD(v51) = 63;
              v54 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v54) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v54) = v52;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v54), v202, (int)v51);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v51 + v54) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v54) = v51;
              dword_140404A6C[308307070] = v53 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v54) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v54) = -1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v54) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            v48 = v194;
          }
        }
        v49 = ++v48;
        v194 = v48;
      }
      while ( v48 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list4"), 6) )
  {
    v55 = 30;
    v194 = 30;
    if ( (int)dword_140404A6C[456202445] > 30 )
    {
      v56 = 30;
      do
      {
        v57 = (int)dword_140404A6C[47224 * v56 + 438887411];
        if ( (_DWORD)v57 != -1 )
        {
          sub_140158AB0(
            v202,
            "%s  %d",
            (     char *)&dword_140404A6C[3597 * v57 + 71856254],
            dword_140404A6C[3597 * v57 + 71856265]);
          if ( dword_140404A6C[456202453] )
          {
            v58 = -1;
            do
              ++v58;
            while ( SR_VEC_LANES(128, v202[0], i8)[v58] );
            v59 = dword_140404A6C[283831474];
            v60 = dword_140404A6C[308307070];
            if ( (int)v58 > 63 )
              LODWORD(v58) = 63;
            v61 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v61) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v61) = v59;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v61), v202, (int)v58);
            *((_BYTE *)&dword_140404A6C[297756301] + (int)v58 + v61) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v61) = v58;
            dword_140404A6C[308307070] = v60 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v61) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v61) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v61) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
          v55 = v194;
        }
        v56 = ++v55;
        v194 = v55;
      }
      while ( v55 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/traffic"), 8);
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/savereplay"), 11) )
  {
    if ( *(_BYTE *)(v3 + 11) == 32 )
    {
      v62 = (__int8 *)(v3 + 12);
      do
      {
        v63 = *v62;
        SR_VEC_LANES(128, v202[0], i8)[(_QWORD)v62 - 12 - v3] = *v62;
        ++v62;
      }
      while ( v63 );
      if ( !SR_VEC_LANES(128, v202[0], i8)[0]
        || (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) == -1
        || (v64 = v194, v194 < 0) )
      {
        v64 = dword_140404A6C[19065871];
        goto LABEL_128;
      }
    }
    else
    {
      v64 = dword_140404A6C[19065871] + 1;
    }
    dword_140404A6C[19065871] = v64;
LABEL_128:
    sub_140158AB0(v202, "savereplay: %d", v64);
    if ( dword_140404A6C[456202453] )
    {
      v65 = -1;
      do
        ++v65;
      while ( SR_VEC_LANES(128, v202[0], i8)[v65] );
      v66 = dword_140404A6C[308307070];
      if ( (int)v65 > 63 )
        LODWORD(v65) = 63;
      v67 = dword_140404A6C[283831474];
      v68 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v68) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v68) = v67;
      sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v68), v202, (int)v65);
      dword_140404A6C[308307070] = v66 + 1;
      *((_BYTE *)&dword_140404A6C[297756301] + (int)v65 + v68) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v68) = v65;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v68) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v68) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v68) = 0;
    }
  }
  if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/godmode"), 8) )
    goto LABEL_141;
  v69 = *(unsigned int *)((char *)&dword_140404A6C[71856277] + v4) == 1;
  *(unsigned int *)((char *)&dword_140404A6C[71856277] + v4) ^= 1u;
  if ( v69 )
  {
    if ( !dword_140404A6C[456202453] )
      goto LABEL_141;
    v73 = dword_140404A6C[283831474];
    v71 = dword_140404A6C[308307070];
    v72 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v72) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v72) = v73;
    *(_QWORD *)((char *)&dword_140404A6C[297756301] + v72) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&dword_140404A6C[297756303] + v72) = 26223;
    *(_WORD *)((char *)&dword_140404A6C[297756303] + v72 + 2) = 102;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v72) = 11;
  }
  else
  {
    if ( !dword_140404A6C[456202453] )
      goto LABEL_141;
    v70 = dword_140404A6C[283831474];
    v71 = dword_140404A6C[308307070];
    v72 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v72) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v72) = v70;
    *(_QWORD *)((char *)&dword_140404A6C[297756301] + v72) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&dword_140404A6C[297756303] + v72) = 28271;
    *((_BYTE *)&dword_140404A6C[297756303] + v72 + 2) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v72) = 10;
  }
  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v72) = 4;
  dword_140404A6C[308307070] = v71 + 1;
  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v72) = -1;
  HIWORD(dword_140404A6C[308307070]) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[297756296] + v72) = 0;
LABEL_141:
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/heli"), 5) )
  {
    v74 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v74 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v75 = *(float *)&dword_140404A6C[7166 * v74 + 280651459] * 4.0;
      v76 = *(float *)&dword_140404A6C[7166 * v74 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v74 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v74 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v74 + 280651441] - v75;
      v77 = *(float *)&dword_140404A6C[7166 * v74 + 280651442] - v76;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v77;
      sr_CreateVehicle(12, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/car"), 4) )
  {
    v78 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v78 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v79 = *(float *)&dword_140404A6C[7166 * v78 + 280651459] * 4.0;
      v80 = *(float *)&dword_140404A6C[7166 * v78 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v78 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v78 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v78 + 280651441] - v79;
      v81 = *(float *)&dword_140404A6C[7166 * v78 + 280651442] - v80;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v81;
      sr_CreateVehicle(0, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/beamer"), 7) )
  {
    v82 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v82 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v83 = *(float *)&dword_140404A6C[7166 * v82 + 280651459] * 4.0;
      v84 = *(float *)&dword_140404A6C[7166 * v82 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v82 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v82 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v82 + 280651441] - v83;
      v85 = *(float *)&dword_140404A6C[7166 * v82 + 280651442] - v84;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v85;
      sr_CreateVehicle(6, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/pickup"), 7) )
  {
    v86 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v86 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v87 = *(float *)&dword_140404A6C[7166 * v86 + 280651459] * 4.0;
      v88 = *(float *)&dword_140404A6C[7166 * v86 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v86 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v86 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v86 + 280651441] - v87;
      v89 = *(float *)&dword_140404A6C[7166 * v86 + 280651442] - v88;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v89;
      sr_CreateVehicle(17, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/turbo"), 6) )
  {
    v90 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v90 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v91 = *(float *)&dword_140404A6C[7166 * v90 + 280651459] * 4.0;
      v92 = *(float *)&dword_140404A6C[7166 * v90 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v90 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v90 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v90 + 280651441] - v91;
      v93 = *(float *)&dword_140404A6C[7166 * v90 + 280651442] - v92;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v93;
      sr_CreateVehicle(5, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/van"), 4) )
  {
    v94 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v94 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v95 = *(float *)&dword_140404A6C[7166 * v94 + 280651459] * 4.0;
      v96 = *(float *)&dword_140404A6C[7166 * v94 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v94 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v94 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v94 + 280651441] - v95;
      v97 = *(float *)&dword_140404A6C[7166 * v94 + 280651442] - v96;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v97;
      sr_CreateVehicle(7, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/phone"), 6) )
  {
    for ( i = 0; i < 1024; ++i )
    {
      v99 = 1760LL * i;
      if ( dword_140404A6C[v99 + 278845893]
        && dword_140404A6C[v99 + 278845898] == 25
        && dword_140404A6C[v99 + 278845981] == 9999 )
      {
        v100 = (int)dword_140404A6C[v99 + 278845980];
        if ( (_DWORD)v100 != -1 )
        {
          dword_140404A6C[1760 * v100 + 278846052] = 0;
          dword_140404A6C[1760 * dword_140404A6C[v99 + 278845980] + 278845980] = -1;
          dword_140404A6C[1760 * dword_140404A6C[v99 + 278845980] + 278845983] = 0;
          sub_140051940(dword_140404A6C[v99 + 278845980]);
        }
        dword_140404A6C[v99 + 278845900] = 0;
      }
    }
    v101 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    v194 = i;
    v102 = sr_CreateItem(
             25,
             (float *)&dword_140404A6C[7166 * v101 + 280651440],
             nullptr,
             (float *)&dword_140404A6C[7166 * v101 + 280651452]);
    v103 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v4);
    dword_140404A6C[1760 * v102 + 278845981] = 9999;
    sub_1400E35D0(v102, -1, v103, 6);
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/arm"), 4) )
  {
    v104 = 3597 * v5;
    if ( dword_140404A6C[3597 * v5 + 71856292] != -1 )
    {
      v105 = (__int8 *)(v3 + 5);
      v106 = 3;
      do
      {
        v107 = *v105;
        v105[(_QWORD)((char *)SR_VEC_LANES(128, v202[0], i64) - v3 - 5)] = *v105;
        ++v105;
      }
      while ( v107 );
      if ( SR_VEC_LANES(128, v202[0], i8)[0] && (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) != -1 )
      {
        if ( v194 == 1 )
        {
          v106 = 1;
        }
        else if ( v194 != 2 )
        {
          switch ( v194 )
          {
            case 3:
              v106 = 7;
              break;
            case 4:
              v106 = 9;
              break;
            case 5:
              v106 = 11;
              break;
          }
        }
      }
      sub_14012CD60(dword_140404A6C[v104 + 71856292], v106, 4);
      v108 = (int)dword_140404A6C[v104 + 71856292];
      if ( (_DWORD)v108 != -1 )
      {
        v109 = sr_CreateItem(
                 14,
                 (float *)&dword_140404A6C[7166 * v108 + 280651440],
                 nullptr,
                 (float *)&dword_140404A6C[7166 * v108 + 280651452]);
        sub_1400E35D0(v109, -1, v108, 6);
        v110 = sr_CreateItem(
                 14,
                 (float *)&dword_140404A6C[7166 * v108 + 280651440],
                 nullptr,
                 (float *)&dword_140404A6C[7166 * v108 + 280651452]);
        sub_1400E35D0(v110, -1, v108, 6);
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/cash"), 5) )
    dword_140404A6C[3597 * v5 + 71856272] += 100000;
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/kill"), 5) )
  {
    v111 = (int)dword_140404A6C[3597 * v5 + 71856292];
    if ( (_DWORD)v111 != -1 )
      dword_140404A6C[7166 * v111 + 280651318] = 0;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/setmap"), 7) && *(_BYTE *)(v3 + 7) == 32 )
  {
    v112 = (__int8 *)(v3 + 8);
    do
    {
      v113 = *v112;
      v112[(_QWORD)&SR_VEC_LANES(128, v202[0], i64)[-1] - v3] = *v112;
      ++v112;
    }
    while ( v113 );
    if ( !SR_VEC_LANES(128, v202[0], i8)[0] || (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) == -1 )
    {
      v114 = dword_140404A6C[284022505];
    }
    else
    {
      v114 = v194 - 1;
      if ( (unsigned int)(v194 - 1) > 0x1F )
        v114 = 0;
      dword_140404A6C[284022505] = v114;
    }
    sub_140158AB0(v202, "mapnum: %d", v114 + 1);
    if ( dword_140404A6C[456202453] )
    {
      v115 = -1;
      do
        ++v115;
      while ( SR_VEC_LANES(128, v202[0], i8)[v115] );
      v116 = dword_140404A6C[283831474];
      v117 = dword_140404A6C[308307070];
      if ( (int)v115 > 63 )
        LODWORD(v115) = 63;
      v118 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v118) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v118) = v116;
      sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v118), v202, (int)v115);
      *((_BYTE *)&dword_140404A6C[297756301] + v118 + (int)v115) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v118) = v115;
      dword_140404A6C[308307070] = v117 + 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v118) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v118) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v118) = 0;
      HIWORD(dword_140404A6C[308307070]) = 0;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/resetgame"), 10) )
  {
    dword_140404A6C[456202731] = 1;
    if ( *(_BYTE *)(v3 + 10) == 32 )
    {
      v119 = *(_BYTE *)(v3 + 11);
      if ( v119 == 114 )
      {
        dword_140404A6C[456202732] = 3;
        dword_140404A6C[283831446] = 5;
        v119 = *(_BYTE *)(v3 + 11);
      }
      if ( v119 == 101 )
      {
        dword_140404A6C[456202732] = 5;
        v119 = *(_BYTE *)(v3 + 11);
      }
      if ( v119 == 118 )
      {
        dword_140404A6C[456202732] = 7;
        dword_140404A6C[283831446] = 5;
      }
    }
  }
  v120 = &dword_140404A6C[134050362];
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/ban "), 5) )
  {
    v121 = (__int8 *)(v3 + 5);
    do
    {
      v122 = *v121;
      v121[(_QWORD)((char *)SR_VEC_LANES(128, v202[0], i64) - v3 - 5)] = *v121;
      ++v121;
    }
    while ( v122 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0] )
    {
      v123 = 0;
      v124 = v203;
      for ( j = 0; j < 16; ++j )
      {
        v126 = SR_VEC_LANES(128, v202[0], i8)[j];
        if ( !v126 )
          break;
        if ( (unsigned __int8)(v126 - 48) <= 9u )
        {
          ++v123;
          *v124++ = v126;
        }
      }
      if ( (unsigned __int64)v123 >= 0x200 )
        sub_1401F8694();
      v203[v123] = 0;
      sub_14015B070((__int64)v203, "%u", &v197);
      v127 = 0;
      if ( (int)dword_140404A6C[134050358] > 0 )
      {
        v128 = &dword_140404A6C[134050362];
        while ( *v128 != (_DWORD)v197 )
        {
          ++v127;
          v128 += 28;
          if ( v127 >= (int)dword_140404A6C[134050358] )
            goto LABEL_229;
        }
        if ( v127 >= 0 && v127 < (int)dword_140404A6C[134050358] )
        {
          dword_140404A6C[456202730] = v127;
          sub_140158AB0(
            v202,
            "%s(%d) ban?",
            (     char *)&dword_140404A6C[28 * v127 + 134050365],
            dword_140404A6C[28 * v127 + 134050362]);
          if ( dword_140404A6C[456202453] )
          {
            v173 = -1;
            do
              ++v173;
            while ( SR_VEC_LANES(128, v202[0], i8)[v173] );
            v174 = dword_140404A6C[283831474];
            v175 = dword_140404A6C[308307070];
            if ( (int)v173 > 63 )
              LODWORD(v173) = 63;
            v176 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v176) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v176) = v174;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v176), v202, (int)v173);
            *((_BYTE *)&dword_140404A6C[297756301] + v176 + (int)v173) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v176) = v173;
            dword_140404A6C[308307070] = v175 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v176) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v176) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v176) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
        }
      }
    }
  }
LABEL_229:
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/give "), 6) )
  {
    v129 = (__int8 *)(v3 + 6);
    do
    {
      v130 = *v129;
      v129[(_QWORD)((char *)SR_VEC_LANES(128, v202[0], i64) - v3 - 6)] = *v129;
      ++v129;
    }
    while ( v130 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0] )
    {
      v131 = 0;
      do
      {
        v132 = SR_VEC_LANES(128, v202[0], i8)[v131];
        *((_BYTE *)&dword_140404A6C[293250415] + v131++) = v132;
      }
      while ( v132 );
      dword_140404A6C[293250413] = 0;
      v133 = -1;
      do
        ++v133;
      while ( SR_VEC_LANES(128, v202[0], i8)[v133] );
      dword_140404A6C[293250414] = v133;
      v134 = sub_140115360();
      v135 = 0;
      if ( (int)dword_140404A6C[134050358] <= 0 )
      {
LABEL_241:
        sub_1400A3D70();
      }
      else
      {
        v136 = &dword_140404A6C[134050362];
        while ( *v136 != v134 )
        {
          ++v135;
          v136 += 28;
          if ( v135 >= (int)dword_140404A6C[134050358] )
            goto LABEL_241;
        }
        v177 = sub_1400A3D70();
        if ( v135 >= 0 && v135 < (int)dword_140404A6C[134050358] )
        {
          v178 = 0;
          v179 = 28LL * v135;
          dword_140404A6C[v179 + 134050374] += v177;
          do
          {
            v180 = 3597LL * v178;
            if ( dword_140404A6C[v180 + 71856253] && dword_140404A6C[v180 + 71856268] == v135 )
              dword_140404A6C[v180 + 71856272] += v177;
            ++v178;
          }
          while ( v178 < 256 );
          v194 = v178;
          sub_140158AB0(
            v202,
            "%s(%d) %d cash",
            (     char *)&dword_140404A6C[v179 + 134050365],
            dword_140404A6C[v179 + 134050362],
            v177);
          if ( dword_140404A6C[456202453] )
          {
            v181 = -1;
            do
              ++v181;
            while ( SR_VEC_LANES(128, v202[0], i8)[v181] );
            v182 = dword_140404A6C[308307070];
            if ( (int)v181 > 63 )
              LODWORD(v181) = 63;
            v183 = dword_140404A6C[283831474];
            v184 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v184) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v184) = v183;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v184), v202, (int)v181);
            *((_BYTE *)&dword_140404A6C[297756301] + (int)v181 + v184) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v184) = v181;
            dword_140404A6C[308307070] = v182 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v184) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v184) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v184) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
        }
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/setrating "), 11) )
  {
    v137 = (__int8 *)(v3 + 11);
    do
    {
      v138 = *v137;
      v137[(_QWORD)((char *)&SR_VEC_LANES(128, v202[0], i64)[-1] - v3 - 3)] = *v137;
      ++v137;
    }
    while ( v138 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0] )
    {
      v139 = 0;
      do
      {
        v140 = SR_VEC_LANES(128, v202[0], i8)[v139];
        *((_BYTE *)&dword_140404A6C[293250415] + v139++) = v140;
      }
      while ( v140 );
      dword_140404A6C[293250413] = 0;
      v141 = -1;
      do
        ++v141;
      while ( SR_VEC_LANES(128, v202[0], i8)[v141] );
      dword_140404A6C[293250414] = v141;
      v142 = sub_140115360();
      v143 = 0;
      if ( (int)dword_140404A6C[134050358] <= 0 )
      {
LABEL_253:
        sub_1400A3D70();
      }
      else
      {
        while ( *v120 != v142 )
        {
          ++v143;
          v120 += 28;
          if ( v143 >= (int)dword_140404A6C[134050358] )
            goto LABEL_253;
        }
        v185 = sub_1400A3D70();
        if ( v143 >= 0 && v143 < (int)dword_140404A6C[134050358] )
        {
          v186 = 0;
          v187 = 28LL * v143;
          dword_140404A6C[v187 + 134050376] = v185;
          do
          {
            if ( dword_140404A6C[3597 * v186 + 71856253] && dword_140404A6C[3597 * v186 + 71856268] == v143 )
              dword_140404A6C[3597 * v186 + 71856276] = v185;
            ++v186;
          }
          while ( v186 < 256 );
          v194 = v186;
          sub_140158AB0(
            v202,
            "%s(%d) %d rating",
            (     char *)&dword_140404A6C[v187 + 134050365],
            dword_140404A6C[v187 + 134050362],
            v185);
          if ( dword_140404A6C[456202453] )
          {
            v188 = -1;
            do
              ++v188;
            while ( SR_VEC_LANES(128, v202[0], i8)[v188] );
            v189 = dword_140404A6C[283831474];
            v190 = dword_140404A6C[308307070];
            if ( (int)v188 > 63 )
              LODWORD(v188) = 63;
            v191 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v191) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v191) = v189;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v191), v202, (int)v188);
            *((_BYTE *)&dword_140404A6C[297756301] + (int)v188 + v191) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v191) = v188;
            dword_140404A6C[308307070] = v190 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v191) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v191) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v191) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
        }
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/bany "), 6) )
  {
    v144 = (__int8 *)(v3 + 6);
    do
    {
      v145 = *v144;
      SR_VEC_LANES(128, v202[0], i8)[(_QWORD)v144 - 6 - v3] = *v144;
      ++v144;
    }
    while ( v145 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0]
      && (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) != -1
      && (dword_140404A6C[456202730] & 0x80000000) == 0
      && (int)dword_140404A6C[456202730] < (int)dword_140404A6C[134050358] )
    {
      v146 = 28LL * (int)dword_140404A6C[456202730];
      LODWORD(v193) = v194;
      dword_140404A6C[v146 + 134050385] = v194;
      sub_140158AB0(
        v202,
        "%s(%d) banned %d",
        (     char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v146 * 4 + 540414816),
        dword_140404A6C[v146 + 134050362],
        v193);
      if ( dword_140404A6C[456202453] )
      {
        v147 = -1;
        do
          ++v147;
        while ( SR_VEC_LANES(128, v202[0], i8)[v147] );
        v148 = dword_140404A6C[283831474];
        v149 = dword_140404A6C[308307070];
        if ( (int)v147 > 63 )
          LODWORD(v147) = 63;
        v150 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v150) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v150) = v148;
        sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v150), v202, (int)v147);
        *((_BYTE *)&dword_140404A6C[297756301] + (int)v147 + v150) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v150) = v147;
        dword_140404A6C[308307070] = v149 + 1;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v150) = 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v150) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v150) = 0;
        HIWORD(dword_140404A6C[308307070]) = 0;
      }
      dword_140404A6C[456202730] = -1;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/bann"), 5) )
  {
    if ( dword_140404A6C[456202453] )
    {
      v151 = dword_140404A6C[283831474];
      v152 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v152) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v152) = v151;
      *(_QWORD *)((char *)&dword_140404A6C[297756301] + v152) = 0x636E6163206E6162LL;
      *(unsigned int *)((char *)&dword_140404A6C[297756303] + v152) = 1684368485;
      *((_BYTE *)&dword_140404A6C[297756304] + v152) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v152) = 12;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v152) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v152) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v152) = 0;
    }
    dword_140404A6C[456202730] = -1;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/kick "), 6) )
  {
    v153 = -1;
    v194 = 0;
    if ( (int)dword_140404A6C[456202445] > 0 )
    {
      v154 = 0;
      do
      {
        v155 = (int)dword_140404A6C[47224 * v154 + 438887411];
        if ( (_DWORD)v155 != -1 )
        {
          v156 = 3597 * v155;
          v157 = (unsigned __int8 *)(v3 + 6);
          v158 = (char *)&dword_140404A6C[v156 + 71856252] - v3 + 2;
          do
          {
            v159 = (unsigned __int8)v158[(_QWORD)v157];
            v160 = *v157 - v159;
            if ( v160 )
              break;
            ++v157;
          }
          while ( v159 );
          if ( !v160 )
            v153 = v154;
        }
        ++v154;
      }
      while ( v154 < (int)dword_140404A6C[456202445] );
      v194 = v154;
      if ( v153 != -1 )
      {
        v161 = dword_140404A6C[438887397];
        v162 = 47224LL * v153;
        dword_140404A6C[dword_140404A6C[438887397] + 438886373] = dword_140404A6C[v162 + 438887405];
        dword_140404A6C[438887397] = v161 + 1;
        dword_140404A6C[v162 + 438887414] = 1200;
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/message "), 9) )
  {
    v163 = *(__m128i *)(v3 + 25);
    v202[0] = *(__m128i *)(v3 + 9);
    v164 = *(__m128i *)(v3 + 41);
    v202[1] = v163;
    v165 = *(__m128i *)(v3 + 57);
    v202[2] = v164;
    v202[3] = v165;
    if ( dword_140404A6C[456202453] )
    {
      v166 = -1;
      do
        ++v166;
      while ( SR_VEC_LANES(128, v202[0], i8)[v166] );
      v167 = dword_140404A6C[283831474];
      v168 = dword_140404A6C[308307070];
      if ( (int)v166 > 63 )
        LODWORD(v166) = 63;
      v169 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v169) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v169) = v167;
      sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v169), v202, (int)v166);
      *((_BYTE *)&dword_140404A6C[297756301] + (int)v166 + v169) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v169) = v166;
      dword_140404A6C[308307070] = v168 + 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v169) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v169) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v169) = 0;
      HIWORD(dword_140404A6C[308307070]) = 0;
    }
  }
  v170 = strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/clearkick"), 10);
  v171 = dword_140404A6C[438887397];
  if ( !v170 )
    v171 = 0;
  dword_140404A6C[438887397] = v171;
  return 1; /* 0x140132565: mov eax, 1 */
}
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAA8: using guessed type unsigned int;
// 183EBFCC4: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183F7A610: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1A8E3DA00: using guessed type unsigned int;
// 1AD04B214: using guessed type unsigned int;
// 1AD04B218: using guessed type unsigned int;
// 1AD04B21C: using guessed type unsigned int;

//----- (0000000140132990) ----------------------------------------------------
void            sub_140132990(unsigned int a1, unsigned __int16 a2, __int64 a3,      __m128i *a4)
{
  __int64 v8; // rbx
  unsigned int v9; // r9d
  signed int v10; // eax
  signed int v11; // r8d
  unsigned int v12; // ecx
  int v13; // edx

  v8 = -1;
  do
    ++v8;
  while ( SR_VEC_PTR_LANES(128, a4, i8)[v8] );
  *(_QWORD *)&dword_140404A6C[289301092] = 5;
  LOBYTE(dword_140404A6C[289301095]) = 3;
  if ( (int)v8 > 63 )
    LODWORD(v8) = 63;
  dword_140404A6C[289301094] = dword_1402B2658;
  v9 = v8 & 0x3F;
  v10 = 5;
  v11 = 6;
  while ( 1 )
  {
    *((_BYTE *)&dword_140404A6C[289301094] + v10) &= -1 << v11;
    *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v9 << SLOBYTE(dword_140404A6C[289301093]);
    v12 = 8 - dword_140404A6C[289301093];
    v10 = dword_140404A6C[289301092];
    if ( v11 < 8 - dword_140404A6C[289301093] )
      break;
    v13 = 0;
    dword_140404A6C[289301093] = 0;
    if ( v11 == v12 )
    {
      v10 = ++dword_140404A6C[289301092];
      goto LABEL_12;
    }
    v10 = dword_140404A6C[289301092] + 1;
    v9 >>= v12;
    v11 -= v12;
    ++dword_140404A6C[289301092];
    if ( v11 <= 0 )
      goto LABEL_12;
  }
  v13 = v11 + dword_140404A6C[289301093];
  dword_140404A6C[289301093] += v11;
LABEL_12:
  if ( v10 < 0x10000 )
  {
    if ( v13 > 0 )
    {
      ++v10;
      dword_140404A6C[289301093] = 0;
      dword_140404A6C[289301092] = v10;
    }
    sub_1401FC920((__m128i *)((char *)&dword_140404A6C[289301094] + v10), a4, (int)v8);
    dword_140404A6C[289301092] += v8;
  }
  sub_140130350(a1, a2, a3);
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;

//----- (0000000140132B00) ----------------------------------------------------
__int64 sub_140132B00()
{
  int v0; // ebx
  unsigned int v1; // edi
  int v2; // edx
  __m128i v3; // xmm5
  __m128i v4; // xmm4
  __m128i si128; // xmm6
  __int64 v6; // rcx
  __m128i v7; // xmm7
  unsigned int *v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm3
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // xmm4
  __m128i v17; // xmm4
  unsigned int *v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // kr00_4
  unsigned int v21; // ebp
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int *v24; // rdi
  unsigned int v25; // r8d
  unsigned int v26; // ecx
       char *v27; // r9
  unsigned int v28; // edx

  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (int)dword_140404A6C[134050358] >= 8 )
  {
    v3 = _mm_cvtsi64_si128((long long)(0));
    v4 = _mm_cvtsi64_si128((long long)(0));
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279930);
    v6 = 0;
    v7 = _mm_cvtsi32_si128(3u);
    v8 = &dword_140404A6C[134050434];
    do
    {
      v9 = _mm_cvtsi32_si128(v8[28]);
      v2 += 8;
      v10 = _mm_cvtsi32_si128(*(v8 - 28));
      v6 += 8;
      v11 = _mm_cvtsi32_si128(*v8);
      v12 = _mm_cvtsi32_si128(*(v8 - 56));
      v8 += 224;
      v13 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v12, v10), _mm_unpacklo_epi32(v11, v9));
      v3 = _mm_add_epi32(
             _mm_srl_epi32(
               (__m128i)_mm_shuffle_ps(
                          (__m128)_mm_mul_epu32(_mm_unpacklo_epi32(v13, v13), si128),
                          (__m128)_mm_mul_epu32(_mm_unpackhi_epi32(v13, v13), si128),
                          221),
               v7),
             v3);
      v14 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v8 - 168)), _mm_cvtsi32_si128(*(v8 - 140))),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v8 - 112)), _mm_cvtsi32_si128(*(v8 - 84))));
      v15 = _mm_add_epi32(
              _mm_srl_epi32(
                (__m128i)_mm_shuffle_ps(
                           (__m128)_mm_mul_epu32(_mm_unpacklo_epi32(v14, v14), si128),
                           (__m128)_mm_mul_epu32(_mm_unpackhi_epi32(v14, v14), si128),
                           221),
                v7),
              v4);
      v4 = v15;
    }
    while ( v6 < dword_140404A6C[134050358] - (signed int)dword_140404A6C[134050358] % 8 );
    v16 = _mm_add_epi32(v15, v3);
    v17 = _mm_add_epi32(v16, _mm_srli_si128(v16, 8));
    v1 = _mm_cvtsi128_si32(_mm_add_epi32(v17, _mm_srli_si128(v17, 4)));
  }
  if ( v2 < (int)dword_140404A6C[134050358] )
  {
    v18 = &dword_140404A6C[28 * v2 + 134050378];
    v19 = dword_140404A6C[134050358] - v2;
    do
    {
      v20 = *v18;
      v18 += 28;
      v1 += v20 / 0xA;
      --v19;
    }
    while ( v19 );
  }
  v21 = 0;
  if ( (int)dword_140404A6C[134050358] > 0 )
    v21 = v1 / dword_140404A6C[134050358];
  sub_14024C22C(&dword_140404A6C[278520373]);
  v22 = sub_14020B8D8("stats.txt", "w");
  v23 = v22;
  if ( v22 )
  {
    sub_1400920F0(v22, "numofmissions=%d\r\n", dword_140404A6C[283785906]);
    sub_1400920F0(v23, "numofbullets=%d\r\n", dword_140404A6C[283785905]);
    sub_1400920F0(v23, "users=%d\r\n", dword_140404A6C[134050358]);
    sub_1400920F0(v23, "totaltime=%d\r\n", v1);
    sub_1400920F0(v23, "averagetime=%d\r\n", v21);
    sub_1400920F0(v23, "\r\n");
    if ( (int)dword_140404A6C[134050358] > 0 )
    {
      v24 = &dword_140404A6C[134050361];
      do
      {
        v25 = v24[24];
        v26 = *v24;
        v27 = (     char *)&dword_140404A6C[28 * v0 + 134050365];
        v28 = v24[17] / 0xA;
        if ( v25 )
          sub_1400920F0(v23, "%d:%s:%d (%d) BANNED %d\r\n", v0, v27, v28, v26, v25);
        else
          sub_1400920F0(v23, "%d:%s:%d (%d)\r\n", v0, v27, v28, v26);
        ++v0;
        v24 += 28;
      }
      while ( v0 < (int)dword_140404A6C[134050358] );
    }
    sub_14020B9E8(v23);
  }
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

// 140279930: using guessed type __int128 xmmword_140279930;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140132E00) ----------------------------------------------------
__int64 sub_140132E00()
{
  unsigned int v0; // ecx
  unsigned int *v1; // rax

  v0 = 0;
  v1 = &dword_140404A6C[438881245];
  while ( *v1 )
  {
    ++v0;
    v1 += 20;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[438886365] )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140132E30) ----------------------------------------------------
__int64 sub_140132E30()
{
  __int64 v0; // rcx
  unsigned int *v1; // rax
  __int64 result; // rax
  unsigned int *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // edi
  signed int v8; // ecx
  __int128 v9; // xmm1
  __int64 v10; // rcx

  v0 = 256;
  v1 = &dword_140404A6C[438881245];
  do
  {
    if ( *v1 )
    {
      if ( (--v1[1] & 0x80000000) != 0 )
        *v1 = 0;
    }
    v1 += 20;
    --v0;
  }
  while ( v0 );
  result = dword_140404A6C[456202445];
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v4 = &dword_140404A6C[438934628];
    v5 = dword_140404A6C[456202445];
    do
    {
      result = (int)*(v4 - 47217);
      if ( (_DWORD)result != -1 )
      {
        v6 = 3597 * result;
        v7 = dword_140404A6C[3597 * result + 71856268];
        if ( v7 != -1 )
        {
          v8 = *v4;
          if ( *v4 != -1 )
            goto LABEL_17;
          v8 = 0;
          result = (__int64)&dword_140404A6C[438881247];
          while ( !*(_DWORD *)(result - 8) || *(_DWORD *)result != v7 )
          {
            ++v8;
            result += 80;
            if ( result >= (__int64)&dword_140404A6C[438886367] )
            {
              result = sub_140132E00();
              v8 = result;
              *v4 = result;
              goto LABEL_16;
            }
          }
          *v4 = v8;
LABEL_16:
          if ( v8 != -1 )
          {
LABEL_17:
            v9 = *(_OWORD *)&dword_140404A6C[v6 + 71856258];
            result = dword_140404A6C[v6 + 71856265];
            v10 = 10LL * v8;
            *(_OWORD *)&dword_140404A6C[2 * v10 + 438881248] = *(_OWORD *)&dword_140404A6C[v6 + 71856254];
            dword_140404A6C[2 * v10 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * v10 + 438881252] = v9;
            dword_140404A6C[2 * v10 + 438881246] = 3600;
            dword_140404A6C[2 * v10 + 438881247] = v7;
            dword_140404A6C[2 * v10 + 438881264] = result;
          }
        }
      }
      v4 += 47224;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140132F90) ----------------------------------------------------
void sub_140132F90()
{
  unsigned int *v0; // rcx
  __int64 v1; // r9
  int v2; // eax
  __int64 v3; // rdx
  unsigned int *v4; // r8
  signed int v5; // ecx
  signed int v6; // eax

  if ( dword_140404A6C[73991608] && dword_140404A6C[73991609] && (dword_140404A6C[283831474] & 0x3FF) == 0 )
  {
    dword_140404A6C[289301094] = dword_1402B2658;
    *(_QWORD *)&dword_140404A6C[289301092] = 5;
    LOBYTE(dword_140404A6C[289301095]) = 64;
    sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
  }
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v0 = &dword_140404A6C[438887413];
    v1 = dword_140404A6C[456202445];
    v2 = (signed int)dword_140404A6C[73991094] / (signed int)dword_140404A6C[456202445];
    v3 = dword_140404A6C[456202445];
    do
    {
      *v0 = v2;
      v0 += 47224;
      --v3;
    }
    while ( v3 );
    v4 = &dword_140404A6C[438887412];
    do
    {
      v5 = v4[1];
      v4 += 47224;
      *(v4 - 47224) += ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                     + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      v6 = *(v4 - 47224);
      if ( v6 < (int)(((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                    + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5)) )
        v6 = ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
           + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      *(v4 - 47224) = v6;
      --v1;
    }
    while ( v1 );
  }
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D408: using guessed type unsigned int;

//----- (0000000140133090) ----------------------------------------------------
__int64 sub_140133090()
{
  unsigned int *v0; // rcx
  int v1; // eax
  int v2; // eax
  int v3; // edx
  unsigned int *v4; // rcx
  int v5; // r8d
  unsigned int *v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  unsigned int *v9; // r15
  unsigned int *v10; // rax
  __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int *v17; // rcx
  char v18; // al
  _QWORD *v19; // rax
  bool v20; // zf
  __int64 v21; // r14
  unsigned int v22; // esi
  unsigned int v23; // eax
  __int64 v24; // rdi
  int v25; // ebx
  unsigned int v26; // r11d
  int v27; // r13d
  char v28; // si
  int v29; // r12d
  __int128 v30; // xmm8
  int v31; // ecx
  unsigned int v32; // r14d
  unsigned int *v33; // rax
  signed int v34; // r8d
  signed int v35; // edi
  int v36; // r9d
  __int64 v37; // rax
  int v38; // r10d
  char v39; // r11
  int v40; // eax
  unsigned int v41; // r10d
  signed int v42; // eax
  signed int v43; // r9d
  unsigned int v44; // ecx
  int v45; // r8d
  signed int v46; // r9d
  unsigned int v47; // r10d
  unsigned int v48; // ecx
  signed int v49; // r9d
  unsigned int v50; // r10d
  unsigned int v51; // ecx
  signed int v52; // r9d
  unsigned int v53; // r10d
  unsigned int v54; // ecx
  __int128 v55; // xmm1
  signed int v56; // r9d
  unsigned int v57; // r10d
  unsigned int v58; // ecx
  signed int v59; // r9d
  unsigned int v60; // r10d
  unsigned int v61; // ecx
  signed int v62; // r9d
  unsigned int v63; // r10d
  unsigned int v64; // ecx
  int v65; // r10d
  char v66; // r11
  int v67; // eax
  __int64 v68; // rsi
  int v69; // ecx
  unsigned __int16 v70; // r15
  __int64 v71; // rdx
  unsigned int v72; // r12d
  unsigned int *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int128 v77; // xmm0
  __int64 v78; // rax
  __int64 v79; // rax
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  int v82; // r10d
  int v83; // ebx
  char v84; // r11
  int v85; // eax
       __m128i *v86; // r9
  __int64 v87; // r8
  unsigned __int16 v88; // dx
  unsigned int v89; // ecx
  int v90; // eax
  unsigned int v92; // r9d
  unsigned __int8 *v93; // rax
  int v94; // ecx
  int v95; // edx
  int v96; // r8d
  char *v97; // rdx
  unsigned int *v98; // rcx
  char v99; // al
  signed int v100; // eax
  signed int v101; // ebx
  __int64 v102; // rdi
  int v103; // eax
  int v104; // r12d
  __int64 v105; // r14
  unsigned int *v106; // r13
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  unsigned int v109; // eax
  __int128 v110; // xmm0
  __int64 v111; // r9
  signed int v112; // esi
  int v113; // r8d
  __int64 v114; // rdi
  unsigned int *v115; // rdx
  __int64 v116; // rbx
  unsigned int v117; // ecx
  unsigned int v118; // edi
  unsigned int v119; // ebx
  unsigned int v120; // eax
  unsigned int v121; // eax
  unsigned int v122; // eax
  unsigned int v123; // eax
  unsigned int v124; // eax
  __int64 v125; // rcx
  int v126; // eax
  unsigned int *v127; // r10
  int v128; // r11d
  unsigned int *v129; // rdx
  __int64 v130; // r9
  int v131; // ecx
  int v132; // r8d
  __int64 v133; // r9
  float v134; // xmm0_4
  float v135; // xmm1_4
  int v136; // eax
  unsigned int v137; // eax
  __int8 *v138; // rcx
  __int8 v139; // al
  _QWORD *v140; // rax
  __int64 v141; // r15
  unsigned int v142; // esi
  unsigned int v143; // eax
  __int64 v144; // rdi
  __int64 v145; // rdx
  unsigned int v146; // eax
  char v147; // al
  int v148; // esi
  int v149; // r15d
  __int64 v150; // r10
  int v151; // ecx
  __int64 v152; // rdx
  unsigned int *v153; // rax
  __int64 v154; // r11
  int v155; // ebx
  __int64 v156; // r10
  __int64 v157; // rdx
  __int64 v158; // r14
  __int64 v159; // r13
  int v160; // r10d
  char v161; // r11
  int v162; // eax
  float v163; // xmm2_4
  int v164; // r10d
  char v165; // r11
  int v166; // eax
  float v167; // xmm2_4
  int v168; // r10d
  int v169; // ebx
  char v170; // r11
  int v171; // eax
  float v172; // xmm2_4
  int v173; // r10d
  int v174; // ebx
  char v175; // r11
  int v176; // eax
  float v177; // xmm2_4
  int v178; // r10d
  int v179; // ebx
  char v180; // r11
  int v181; // eax
  float v182; // xmm2_4
  int v183; // r10d
  int v184; // ebx
  char v185; // r11
  int v186; // eax
  float v187; // xmm2_4
  int v188; // r10d
  int v189; // ebx
  char v190; // r11
  int v191; // eax
  float v192; // xmm2_4
  int v193; // r10d
  int v194; // ebx
  char v195; // r11
  int v196; // eax
  float v197; // xmm2_4
  int v198; // r10d
  int v199; // ebx
  char v200; // r11
  int v201; // eax
  float v202; // xmm2_4
  int v203; // r10d
  int v204; // ebx
  char v205; // r11
  int v206; // eax
  float v207; // xmm2_4
  int v208; // r10d
  int v209; // ebx
  char v210; // r11
  int v211; // eax
  float v212; // xmm2_4
  __int64 v213; // r12
  int v214; // ebx
  signed int v215; // esi
  int v216; // edi
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // xmm0_8
  int v220; // r8d
  int v221; // r10d
  char v222; // r9
  int v223; // eax
  unsigned int *v224; // rsi
  int v225; // ecx
  __int64 v226; // r15
  __int64 v227; // rdx
  __int64 v228; // rax
  signed int v229; // ebx
  signed int v230; // r9d
  __int64 v231; // rcx
  int v232; // edi
  __int64 v233; // rax
  __int64 v234; // r8
  __int64 v235; // r10
  unsigned int v236; // eax
  __int64 v237; // rax
  unsigned int v238; // eax
  __int64 v239; // rax
  unsigned int v240; // eax
  __int64 v241; // rax
  unsigned int v242; // eax
  __int64 v243; // rax
  unsigned int v244; // eax
  __int64 v245; // rax
  unsigned int v246; // eax
  __int64 v247; // rax
  unsigned int v248; // eax
  __int64 v249; // rax
  unsigned int v250; // eax
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // r8
  signed int v254; // r12d
  signed int v255; // r10d
  int v256; // r9d
  int v257; // edx
  __int64 v258; // r8
  unsigned int v259; // eax
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rax
  int v263; // r8d
  unsigned int *v264; // r10
  int v265; // r11d
  char v266; // r9
  int v267; // eax
  int v268; // eax
  unsigned int v269; // ecx
  __int64 v270; // r8
  int v271; // eax
  signed int v272; // r9d
  __int64 v273; // rax
  __int64 v274; // rax
  __int64 v275; // r12
  __int64 v276; // r10
  __int64 v277; // r13
  int v278; // r8d
  int v279; // r11d
  char v280; // r9
  int v281; // eax
  __int64 v282; // rsi
  __int64 v283; // rbx
  unsigned int *v284; // rdi
  unsigned int *v285; // r15
  __m128i *v286; // rsi
  unsigned __int64 v287; // r14
  signed int v288; // r9d
  int v289; // r8d
  unsigned int v290; // r10d
  unsigned int v291; // r15d
  char v292; // r11
  unsigned int v293; // eax
  unsigned int v294; // eax
  __int64 v295; // rbx
  __int64 v296; // rax
  __int64 v297; // rax
  int v298; // r8d
  __int64 v299; // r9
  int v300; // ecx
  __int64 v301; // rdx
  unsigned int *v302; // rax
  __int64 v303; // rax
  signed int v304; // ecx
  __int64 v305; // rax
  __int64 v306; // rax
  __int64 v307; // rax
  __int64 v308; // rax
  __int64 v309; // rdx
  __int128 v310; // xmm0
  __int128 v311; // xmm1
  int v312; // r8d
  __int64 v313; // r10
  __int64 v314; // rdx
  unsigned int *v315; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140133090[1712];
#define v316 (*(__int64 (*))(void *)(sr_frame_140133090 + 0)) /* [rsp+0h] */
#define v317 (*(char (*))(void *)(sr_frame_140133090 + 32)) /* [rsp+20h] */
#define v318 (*(int (*))(void *)(sr_frame_140133090 + 36)) /* [rsp+24h] */
#define v319 (*(int (*))(void *)(sr_frame_140133090 + 40)) /* [rsp+28h] */
#define v320 (*(int (*))(void *)(sr_frame_140133090 + 44)) /* [rsp+2Ch] */
#define v321 (*(int (*))(void *)(sr_frame_140133090 + 48)) /* [rsp+30h] */
#define v322 (*(unsigned int (*))(void *)(sr_frame_140133090 + 52)) /* [rsp+34h] */
#define v323 (*(int (*))(void *)(sr_frame_140133090 + 56)) /* [rsp+38h] */
#define v324 (*(int (*))(void *)(sr_frame_140133090 + 60)) /* [rsp+3Ch] */
#define v325 (*(int (*))(void *)(sr_frame_140133090 + 64)) /* [rsp+40h] */
#define v326 (*(int (*))(void *)(sr_frame_140133090 + 68)) /* [rsp+44h] */
#define v327 (*(int (*))(void *)(sr_frame_140133090 + 72)) /* [rsp+48h] */
#define v328 (*(int (*))(void *)(sr_frame_140133090 + 76)) /* [rsp+4Ch] */
#define v329 (*(int (*))(void *)(sr_frame_140133090 + 80)) /* [rsp+50h] */
#define v330 (*(int (*))(void *)(sr_frame_140133090 + 84)) /* [rsp+54h] */
#define v331 (*(int (*))(void *)(sr_frame_140133090 + 88)) /* [rsp+58h] */
#define v332 (*(int (*))(void *)(sr_frame_140133090 + 92)) /* [rsp+5Ch] */
#define v333 (*(unsigned int (*))(void *)(sr_frame_140133090 + 96)) /* [rsp+60h] */
#define v334 (*(unsigned int (*))(void *)(sr_frame_140133090 + 100)) /* [rsp+64h] */
#define v335 (*(unsigned int (*))(void *)(sr_frame_140133090 + 104)) /* [rsp+68h] */
#define v336 (*(int (*))(void *)(sr_frame_140133090 + 108)) /* [rsp+6Ch] */
#define v337 (*(int (*))(void *)(sr_frame_140133090 + 112)) /* [rsp+70h] */
#define v338 (*(int (*))(void *)(sr_frame_140133090 + 116)) /* [rsp+74h] */
#define v339 (*(int (*))(void *)(sr_frame_140133090 + 120)) /* [rsp+78h] */
#define v340 (*(__int64 (*))(void *)(sr_frame_140133090 + 128)) /* [rsp+80h] */
#define v341 (*(__int64 (*))(void *)(sr_frame_140133090 + 136)) /* [rsp+88h] */
#define v342 (*(__int64 (*))(void *)(sr_frame_140133090 + 144)) /* [rsp+90h] */
#define v343 (*(__int64 (*))(void *)(sr_frame_140133090 + 152)) /* [rsp+98h] */
#define Src (*(__m128i (*)[32])(void *)(sr_frame_140133090 + 160)) /* [rsp+A0h] */
#define v345 (*(__int128 (*))(void *)(sr_frame_140133090 + 672)) /* [rsp+2A0h] */
#define v346 (*(__int128 (*))(void *)(sr_frame_140133090 + 688)) /* [rsp+2B0h] */
#define v347 (*(__int128 (*))(void *)(sr_frame_140133090 + 1184)) /* [rsp+4A0h] */
#define v348 (*(__int128 (*))(void *)(sr_frame_140133090 + 1200)) /* [rsp+4B0h] */
#define v349 (*(__int64 (*))(void *)(sr_frame_140133090 + 1696)) /* [rsp+6A0h] */

  v0 = &dword_140404A6C[71859139];
  v1 = 0;
  dword_140404A6C[456202724] = 0;
  do
  {
    if ( *(v0 - 2886) && !*v0 )
      dword_140404A6C[456202724] = ++v1;
    if ( v0[711] && !v0[3597] )
      dword_140404A6C[456202724] = ++v1;
    if ( v0[4308] && !v0[7194] )
      dword_140404A6C[456202724] = ++v1;
    if ( v0[7905] && !v0[10791] )
      dword_140404A6C[456202724] = ++v1;
    v0 += 14388;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[72779971] );
  v2 = dword_140404A6C[456202733];
  v3 = 0;
  if ( (int)dword_140404A6C[456202733] > 0 )
  {
    v4 = &dword_140404A6C[456202748];
    do
    {
      ++*v4;
      v4 += 14;
      v2 = dword_140404A6C[456202733];
      ++v3;
    }
    while ( v3 < (int)dword_140404A6C[456202733] );
  }
  v5 = 0;
  if ( v2 > 0 )
  {
    v6 = &dword_140404A6C[456202735];
    do
    {
      if ( (int)v6[13] < 1800 )
      {
        ++v5;
        v6 += 14;
      }
      else
      {
        dword_140404A6C[456202733] = v2 - 1;
        v7 = 14LL * (v2 - 1);
        *(_OWORD *)v6 = *(_OWORD *)&dword_140404A6C[v7 + 456202735];
        *((_OWORD *)v6 + 1) = *(_OWORD *)&dword_140404A6C[v7 + 456202739];
        *((_OWORD *)v6 + 2) = *(_OWORD *)&dword_140404A6C[v7 + 456202743];
        *((_QWORD *)v6 + 6) = *(_QWORD *)&dword_140404A6C[v7 + 456202747];
        v2 = dword_140404A6C[456202733];
      }
    }
    while ( v5 < v2 );
  }
  v8 = dword_140404A6C[456202445];
  v9 = &dword_140404A6C[438887414];
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v10 = &dword_140404A6C[438887414];
    v11 = dword_140404A6C[456202445];
    do
    {
      ++*v10;
      v10 += 47224;
      --v11;
    }
    while ( v11 );
  }
  v12 = 0;
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      v13 = (int)*(v9 - 3);
      if ( (_DWORD)v13 == -1 )
        break;
      v14 = 3597 * v13;
      v15 = (int)dword_140404A6C[3597 * v13 + 71856268];
      if ( (int)v15 >= 0 && (int)v15 < (int)dword_140404A6C[134050358] )
      {
        v16 = (int)dword_140404A6C[3597 * v13 + 71856268];
        if ( (int)dword_140404A6C[28 * v15 + 134050385] > 0 )
        {
          *v9 = 1800;
          goto LABEL_35;
        }
      }
      if ( (int)*v9 >= 1800 )
      {
        v16 = (int)dword_140404A6C[3597 * v13 + 71856268];
        if ( (_DWORD)v15 != -1 )
LABEL_35:
          dword_140404A6C[28 * v16 + 134050373] = 2;
        sub_1400802F0(v13);
        if ( dword_140404A6C[283831312] != 4 || dword_140404A6C[284022497] )
        {
          v17 = &dword_140404A6C[v14 + 71856254];
          do
          {
            v18 = *(_BYTE *)v17;
            *((_BYTE *)v17 + ((char *)Src - (char *)&dword_140404A6C[v14 + 71856254])) = *(_BYTE *)v17;
            v17 = (unsigned int *)((char *)v17 + 1);
          }
          while ( v18 );
          v19 = (__int64 *)((char *)&v343 + 7);
          do
          {
            v20 = *((_BYTE *)v19 + 1) == 0;
            v19 = (_QWORD *)((char *)v19 + 1);
          }
          while ( !v20 );
          v20 = dword_140404A6C[456202453] == 0;
          *v19 = 0x64657469784520LL;
          if ( !v20 )
          {
            v21 = -1;
            do
              ++v21;
            while ( SR_VEC_LANES(128, Src[0], i8)[v21] );
            v22 = dword_140404A6C[308307070];
            if ( (int)v21 > 63 )
              LODWORD(v21) = 63;
            v23 = dword_140404A6C[283831474];
            v24 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v24) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v24) = v23;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v24), Src, (int)v21);
            *((_BYTE *)&dword_140404A6C[297756301] + v24 + (int)v21) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v24) = v21;
            dword_140404A6C[308307070] = v22 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v24) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v24) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v24) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
        }
        sub_140158AB0(
          Src,
          "%s(%d) Exited",
          (     char *)&dword_140404A6C[v14 + 71856254],
          dword_140404A6C[v14 + 71856265]);
        v8 = dword_140404A6C[456202445];
LABEL_51:
        dword_140404A6C[456202445] = --v8;
        sub_1401FC920(
          (__m128i *)&dword_140404A6C[47224 * v12 + 438887405],
          (     __m128i *)&dword_140404A6C[47224 * v8 + 438887405],
          0x2E1E0u);
        goto LABEL_52;
      }
      ++v12;
      v9 += 47224;
LABEL_52:
      if ( v12 >= v8 )
        goto LABEL_53;
    }
    *v9 = 1800;
    goto LABEL_51;
  }
LABEL_53:
  if ( (int)sub_14011C760() > 0 )
  {
    v25 = v318;
    v26 = v318;
    v27 = v318;
    v28 = v317;
    v29 = v318;
    v321 = v318;
    v336 = v318;
    v322 = v318;
    v337 = v318;
    v320 = v318;
    v323 = v318;
    v324 = v318;
    v325 = v318;
    v326 = v318;
    v327 = v318;
    v328 = v318;
    v329 = v318;
    v330 = v318;
    v331 = v318;
    v332 = v318;
    v30 = v345;
    v338 = v318;
    v319 = v318;
    v335 = v318;
    v339 = v318;
    v333 = v318;
    do
    {
      ++dword_140404A6C[456202729];
      v31 = 0;
      v32 = dword_140404A6C[289317478];
      if ( (int)dword_140404A6C[438887397] > 0 )
      {
        v33 = &dword_140404A6C[438886373];
        while ( *v33 != dword_140404A6C[289317478] )
        {
          ++v31;
          ++v33;
          if ( v31 >= (int)dword_140404A6C[438887397] )
            goto LABEL_59;
        }
        goto LABEL_220;
      }
LABEL_59:
      v34 = dword_140404A6C[289317484];
      v35 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v36 = dword_140404A6C[289317485];
      }
      else
      {
        v36 = dword_140404A6C[289317485];
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v34 = ++dword_140404A6C[289317484];
          v36 = 0;
          dword_140404A6C[289317485] = 0;
        }
        v37 = v34++;
        v28 = *((_BYTE *)&dword_140404A6C[289317486] + v37);
        v317 = v28;
        dword_140404A6C[289317484] = v34;
      }
      if ( !v28 )
      {
        v38 = 8;
        if ( v34 < 0x10000 )
        {
          if ( v34 + 1 <= (int)dword_140404A6C[289317483] )
          {
            v25 = 0;
            v39 = 0;
            while ( 1 )
            {
              v40 = 8 - v36;
              v25 |= (~(-1 << v38)
                    & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v39;
              v319 = v25;
              if ( v38 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v38 == v40 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_75;
              }
              ++v34;
              v38 -= v40;
              v39 += v40;
              dword_140404A6C[289317484] = v34;
              if ( v38 <= 0 )
                goto LABEL_75;
            }
            v36 += v38;
            dword_140404A6C[289317485] = v36;
LABEL_75:
            v26 = v335;
          }
          if ( v34 < 0x10000 && v34 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v36 > 0 )
            {
              ++v34;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v34;
            }
            v26 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v34);
            v335 = v26;
            dword_140404A6C[289317484] = v34 + 4;
          }
        }
        v41 = (unsigned __int8)dword_1402B231C;
        v28 = 1;
        dword_140404A6C[289301094] = dword_1402B2658;
        v317 = 1;
        v42 = 5;
        LOBYTE(dword_140404A6C[289301095]) = 1;
        v43 = 8;
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v42) &= -1 << v43;
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v41 << SLOBYTE(dword_140404A6C[289301093]);
          v44 = 8 - dword_140404A6C[289301093];
          v42 = dword_140404A6C[289301092];
          if ( v43 < 8 - dword_140404A6C[289301093] )
            break;
          v45 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v43 == v44 )
          {
            v42 = ++dword_140404A6C[289301092];
            goto LABEL_88;
          }
          v42 = dword_140404A6C[289301092] + 1;
          v41 >>= v44;
          v43 -= v44;
          ++dword_140404A6C[289301092];
          if ( v43 <= 0 )
            goto LABEL_88;
        }
        v45 = v43 + dword_140404A6C[289301093];
        dword_140404A6C[289301093] += v43;
LABEL_88:
        if ( v42 < 0x10000 )
        {
          if ( v45 > 0 )
          {
            ++v42;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v42;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v42) = v26;
          v45 = dword_140404A6C[289301093];
          v42 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] += 4;
        }
        v46 = 4;
        if ( v42 < 0x10000 )
        {
          v47 = dword_140404A6C[283831312] & 0xF;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v42) &= ~(((1 << v46) - 1) << v45);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v47 << SLOBYTE(dword_140404A6C[289301093]);
            v48 = 8 - dword_140404A6C[289301093];
            v42 = dword_140404A6C[289301092];
            if ( v46 < 8 - dword_140404A6C[289301093] )
              break;
            v45 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v46 == v48 )
            {
              v42 = ++dword_140404A6C[289301092];
              goto LABEL_100;
            }
            v42 = dword_140404A6C[289301092] + 1;
            v47 >>= v48;
            v46 -= v48;
            ++dword_140404A6C[289301092];
            if ( v46 <= 0 )
              goto LABEL_100;
          }
          v45 = v46 + dword_140404A6C[289301093];
          dword_140404A6C[289301093] += v46;
        }
LABEL_100:
        v49 = 8;
        if ( v42 < 0x10000 )
        {
          v50 = LOBYTE(dword_140404A6C[456202724]);
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v42) &= ~(((1 << v49) - 1) << v45);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v50 << SLOBYTE(dword_140404A6C[289301093]);
            v51 = 8 - dword_140404A6C[289301093];
            v42 = dword_140404A6C[289301092];
            if ( v49 < 8 - dword_140404A6C[289301093] )
              break;
            v45 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v49 == v51 )
            {
              v42 = ++dword_140404A6C[289301092];
              goto LABEL_108;
            }
            v42 = dword_140404A6C[289301092] + 1;
            v50 >>= v51;
            v49 -= v51;
            ++dword_140404A6C[289301092];
            if ( v49 <= 0 )
              goto LABEL_108;
          }
          v45 = v49 + dword_140404A6C[289301093];
          dword_140404A6C[289301093] += v49;
        }
LABEL_108:
        v52 = 8;
        if ( v42 < 0x10000 )
        {
          v53 = LOBYTE(dword_140404A6C[456202722]);
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v42) &= ~(((1 << v52) - 1) << v45);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v53 << SLOBYTE(dword_140404A6C[289301093]);
            v54 = 8 - dword_140404A6C[289301093];
            v42 = dword_140404A6C[289301092];
            if ( v52 < 8 - dword_140404A6C[289301093] )
              break;
            v45 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v52 == v54 )
            {
              v42 = ++dword_140404A6C[289301092];
              goto LABEL_116;
            }
            v42 = dword_140404A6C[289301092] + 1;
            v53 >>= v54;
            v52 -= v54;
            ++dword_140404A6C[289301092];
            if ( v52 <= 0 )
              goto LABEL_116;
          }
          v45 = v52 + dword_140404A6C[289301093];
          dword_140404A6C[289301093] += v52;
LABEL_116:
          if ( v42 < 0x10000 )
          {
            if ( v45 > 0 )
            {
              ++v42;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v42;
            }
            v55 = *(_OWORD *)&dword_140404A6C[456202462];
            *(_OWORD *)((char *)&dword_140404A6C[289301094] + v42) = *(_OWORD *)&dword_140404A6C[456202458];
            *(_OWORD *)((char *)&dword_140404A6C[289301098] + v42) = v55;
            v45 = dword_140404A6C[289301093];
            v42 = dword_140404A6C[289301092] + 32;
            dword_140404A6C[289301092] += 32;
          }
        }
        if ( v25 >= 7 && v42 < 0x10000 )
        {
          if ( v45 > 0 )
          {
            ++v42;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v42;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v42) = dword_140404A6C[134050357];
          v45 = dword_140404A6C[289301093];
          v42 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] += 4;
        }
        if ( v25 >= 27 && v42 < 0x10000 )
        {
          if ( v45 > 0 )
          {
            ++v42;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v42;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v42) = dword_140404A6C[456202719];
          v42 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v42;
          if ( v42 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v42;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v42;
            }
            *(_WORD *)((char *)&dword_140404A6C[289301094] + v42) = dword_140404A6C[456202720];
            v42 = dword_140404A6C[289301092] + 2;
            dword_140404A6C[289301092] += 2;
          }
          LOBYTE(v45) = dword_140404A6C[289301093];
        }
        if ( v25 >= 30 )
        {
          v56 = 1;
          if ( v42 < 0x10000 )
          {
            v57 = dword_140404A6C[456202721] & 1;
            while ( 1 )
            {
              *((_BYTE *)&dword_140404A6C[289301094] + v42) &= ~(((1 << v56) - 1) << v45);
              *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v57 << SLOBYTE(dword_140404A6C[289301093]);
              v58 = 8 - dword_140404A6C[289301093];
              v42 = dword_140404A6C[289301092];
              if ( v56 < 8 - dword_140404A6C[289301093] )
                break;
              LOBYTE(v45) = 0;
              dword_140404A6C[289301093] = 0;
              if ( v56 == v58 )
              {
                v42 = ++dword_140404A6C[289301092];
                goto LABEL_143;
              }
              v42 = dword_140404A6C[289301092] + 1;
              v57 >>= v58;
              v56 -= v58;
              ++dword_140404A6C[289301092];
              if ( v56 <= 0 )
                goto LABEL_143;
            }
            LOBYTE(v45) = v56 + LOBYTE(dword_140404A6C[289301093]);
            dword_140404A6C[289301093] += v56;
          }
        }
LABEL_143:
        if ( v25 >= 34 )
        {
          v59 = 8;
          if ( v42 < 0x10000 )
          {
            v60 = (unsigned __int8)dword_1402B23DC;
            while ( 1 )
            {
              *((_BYTE *)&dword_140404A6C[289301094] + v42) &= ~(((1 << v59) - 1) << v45);
              *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v60 << SLOBYTE(dword_140404A6C[289301093]);
              v61 = 8 - dword_140404A6C[289301093];
              v42 = dword_140404A6C[289301092];
              if ( v59 < 8 - dword_140404A6C[289301093] )
                break;
              LOBYTE(v45) = 0;
              dword_140404A6C[289301093] = 0;
              if ( v59 == v61 )
              {
                v42 = ++dword_140404A6C[289301092];
                goto LABEL_152;
              }
              v42 = dword_140404A6C[289301092] + 1;
              v60 >>= v61;
              v59 -= v61;
              ++dword_140404A6C[289301092];
              if ( v59 <= 0 )
                goto LABEL_152;
            }
            LOBYTE(v45) = v59 + LOBYTE(dword_140404A6C[289301093]);
            dword_140404A6C[289301093] += v59;
          }
LABEL_152:
          v62 = 8;
          if ( v42 < 0x10000 )
          {
            v63 = (unsigned __int8)dword_1402B26C8;
            while ( 1 )
            {
              *((_BYTE *)&dword_140404A6C[289301094] + v42) &= ~(((1 << v62) - 1) << v45);
              *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v63 << SLOBYTE(dword_140404A6C[289301093]);
              v64 = 8 - dword_140404A6C[289301093];
              if ( v62 < 8 - dword_140404A6C[289301093] )
                break;
              dword_140404A6C[289301093] = 0;
              if ( v62 == v64 )
              {
                ++dword_140404A6C[289301092];
                goto LABEL_160;
              }
              v62 -= v64;
              v42 = dword_140404A6C[289301092] + 1;
              v63 >>= v64;
              ++dword_140404A6C[289301092];
              LOBYTE(v45) = 0;
              if ( v62 <= 0 )
                goto LABEL_160;
            }
            dword_140404A6C[289301093] += v62;
          }
        }
LABEL_160:
        sub_140130350(dword_140404A6C[289317478], dword_140404A6C[289317479], *(__int64 *)&dword_140404A6C[289317481]);
        goto LABEL_219;
      }
      if ( v28 == 2 )
      {
        v65 = 8;
        if ( v34 >= 0x10000 || v34 + 1 > (int)dword_140404A6C[289317483] )
          goto LABEL_219;
        v25 = 0;
        v66 = 0;
        while ( 1 )
        {
          v67 = 8 - v36;
          v25 |= (~(-1 << v65)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v66;
          v319 = v25;
          if ( v65 < (unsigned int)(8 - v36) )
            break;
          v36 = 0;
          dword_140404A6C[289317485] = 0;
          if ( v65 == v67 )
          {
            dword_140404A6C[289317484] = ++v34;
            goto LABEL_171;
          }
          ++v34;
          v65 -= v67;
          v66 += v67;
          dword_140404A6C[289317484] = v34;
          if ( v65 <= 0 )
            goto LABEL_171;
        }
        v36 += v65;
        dword_140404A6C[289317485] = v36;
LABEL_171:
        if ( v25 != dword_1402B231C )
          goto LABEL_219;
        v68 = *(_QWORD *)&dword_140404A6C[289317481];
        v69 = 0;
        v70 = dword_140404A6C[289317479];
        v71 = 0;
        v72 = dword_140404A6C[456202445];
        if ( (int)dword_140404A6C[456202445] > 0 )
        {
          v73 = &dword_140404A6C[438887406];
          while ( dword_140404A6C[289317478] != *(v73 - 1)
               || LOWORD(dword_140404A6C[289317479]) != *(_WORD *)v73
               || *(_QWORD *)&dword_140404A6C[289317481] != *(_QWORD *)(v73 + 1) )
          {
            ++v69;
            ++v71;
            v73 += 47224;
            if ( v69 >= (int)dword_140404A6C[456202445] )
              goto LABEL_178;
          }
          dword_140404A6C[47224 * v71 + 438887414] = 0;
          goto LABEL_218;
        }
LABEL_178:
        if ( v34 < 0x10000 )
        {
          if ( v34 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v36 > 0 )
            {
              ++v34;
              v36 = 0;
              dword_140404A6C[289317484] = v34;
              dword_140404A6C[289317485] = 0;
            }
            v74 = v34;
            v34 += 4;
            v27 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v74);
            v318 = v27;
            dword_140404A6C[289317484] = v34;
          }
          if ( v34 < 0x10000 )
          {
            if ( v34 + 4 <= (int)dword_140404A6C[289317483] )
            {
              if ( v36 > 0 )
              {
                ++v34;
                v36 = 0;
                dword_140404A6C[289317484] = v34;
                dword_140404A6C[289317485] = 0;
              }
              v75 = v34;
              v34 += 4;
              v321 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v75);
              dword_140404A6C[289317484] = v34;
            }
            if ( v34 < 0x10000 && v34 + 32 <= (int)dword_140404A6C[289317483] )
            {
              if ( v36 > 0 )
              {
                ++v34;
                v36 = 0;
                dword_140404A6C[289317484] = v34;
                dword_140404A6C[289317485] = 0;
              }
              v76 = v34;
              v34 += 32;
              v30 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v76);
              v77 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v76);
              dword_140404A6C[289317484] = v34;
              v345 = v30;
              v346 = v77;
            }
          }
        }
        HIBYTE(v346) = 0;
        if ( v34 < 0x10000 )
        {
          if ( v34 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v36 > 0 )
            {
              ++v34;
              v36 = 0;
              dword_140404A6C[289317484] = v34;
              dword_140404A6C[289317485] = 0;
            }
            v78 = v34;
            v34 += 4;
            v336 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v78);
            dword_140404A6C[289317484] = v34;
          }
          if ( v34 < 0x10000 && v34 + 32 <= (int)dword_140404A6C[289317483] )
          {
            if ( v36 > 0 )
            {
              ++v34;
              v36 = 0;
              dword_140404A6C[289317484] = v34;
              dword_140404A6C[289317485] = 0;
            }
            v79 = v34;
            v34 += 32;
            v80 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v79);
            v81 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v79);
            dword_140404A6C[289317484] = v34;
            v347 = v80;
            v348 = v81;
          }
        }
        HIBYTE(v348) = 0;
        v82 = 8;
        if ( v34 < 0x10000 && v34 + 1 <= (int)dword_140404A6C[289317483] )
        {
          v83 = 0;
          v84 = 0;
          while ( 1 )
          {
            v85 = 8 - v36;
            v83 |= (~(-1 << v82)
                  & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v84;
            if ( v82 < (unsigned int)(8 - v36) )
              break;
            if ( v82 == v85 )
            {
              dword_140404A6C[289317484] = ++v34;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              goto LABEL_213;
            }
            ++v34;
            v36 = 0;
            v82 -= v85;
            dword_140404A6C[289317484] = v34;
            v84 += v85;
            dword_140404A6C[289317485] = 0;
            if ( v82 <= 0 )
              goto LABEL_213;
          }
          v36 += v82;
          dword_140404A6C[289317485] = v36;
LABEL_213:
          if ( v83 != dword_1402B26C8 )
          {
            v86 = (     __m128i *)"Incompatible version";
            goto LABEL_215;
          }
          if ( v34 >= 0x10000 || v34 + 4 > (int)dword_140404A6C[289317483] )
          {
            v92 = v322;
          }
          else
          {
            if ( v36 > 0 )
            {
              ++v34;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v34;
            }
            v92 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v34);
            v322 = v92;
            dword_140404A6C[289317484] = v34 + 4;
          }
          if ( dword_140404A6C[456202721] )
          {
            v93 = (unsigned __int8 *)&v347;
            do
            {
              v94 = v93[(char *)&dword_140404A6C[73991480] - (char *)&v347];
              v95 = *v93 - v94;
              if ( v95 )
                break;
              ++v93;
            }
            while ( v94 );
            if ( v95 )
            {
              v86 = (     __m128i *)"Incorrect password";
              goto LABEL_215;
            }
          }
          v96 = v321;
          if ( !dword_140404A6C[289317478] && (int)dword_140404A6C[456202733] < 1024 )
          {
            v97 = (char *)&v345;
            dword_140404A6C[14 * dword_140404A6C[456202733] + 456202735] = v27;
            dword_140404A6C[14 * dword_140404A6C[456202733] + 456202736] = v92;
            *(_QWORD *)&dword_140404A6C[14 * dword_140404A6C[456202733] + 456202737] = v68;
            dword_140404A6C[14 * dword_140404A6C[456202733] + 456202739] = v96;
            v98 = &dword_140404A6C[14 * dword_140404A6C[456202733] + 456202740];
            do
            {
              v99 = *v97++;
              *(_BYTE *)v98 = v99;
              v98 = (unsigned int *)((char *)v98 + 1);
            }
            while ( v99 );
            dword_140404A6C[14 * dword_140404A6C[456202733]++ + 456202748] = 0;
          }
          if ( dword_140404A6C[73991095] )
          {
            v100 = sub_14004D750(v27, v96);
            v101 = v100;
            if ( v100 == -2 )
              goto LABEL_217;
            if ( v100 == -1 )
            {
              v87 = *(_QWORD *)&dword_140404A6C[289317481];
              v86 = (     __m128i *)"Connection failed";
              v88 = dword_140404A6C[289317479];
              v89 = dword_140404A6C[289317478];
              goto LABEL_216;
            }
            if ( (int)dword_140404A6C[28 * v100 + 134050385] > 0 )
            {
              v87 = *(_QWORD *)&dword_140404A6C[289317481];
              v86 = (     __m128i *)"You are banned from this server";
              v88 = dword_140404A6C[289317479];
              v89 = dword_140404A6C[289317478];
LABEL_216:
              sub_140132990(v89, v88, v87, v86);
LABEL_217:
              v25 = v319;
              goto LABEL_218;
            }
            v72 = dword_140404A6C[456202445];
            v68 = *(_QWORD *)&dword_140404A6C[289317481];
            v70 = dword_140404A6C[289317479];
            v32 = dword_140404A6C[289317478];
          }
          else
          {
            v101 = -1;
          }
          if ( (int)dword_140404A6C[456202724] < (int)dword_140404A6C[456202722] )
          {
            v102 = v101;
          }
          else
          {
            if ( v101 == -1 )
            {
              v86 = (     __m128i *)"Server is full";
LABEL_215:
              v87 = v68;
              v88 = v70;
              v89 = v32;
              goto LABEL_216;
            }
            v102 = v101;
            if ( !dword_140404A6C[28 * v101 + 134050386] )
            {
              v86 = (     __m128i *)"Server is full";
              goto LABEL_215;
            }
          }
          sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[47224 * v72 + 438887405]), 0, 0x2E1E0u);
          v103 = sub_14005CCF0();
          v104 = v103;
          if ( v103 == -1 )
            goto LABEL_217;
          v105 = 3597LL * v103;
          dword_140404A6C[v105 + 71856268] = v101;
          v106 = &dword_140404A6C[v105 + 71856254];
          if ( dword_140404A6C[73991095] )
          {
            v20 = dword_140404A6C[28 * v102 + 134050386] == 0;
            v107 = *(_OWORD *)&dword_140404A6C[28 * v102 + 134050365];
            dword_140404A6C[v105 + 71856264] = dword_140404A6C[28 * v102 + 134050361];
            v108 = *(_OWORD *)&dword_140404A6C[28 * v102 + 134050369];
            v109 = dword_140404A6C[28 * v102 + 134050362];
            *(_OWORD *)v106 = v107;
            dword_140404A6C[v105 + 71856265] = v109;
            *((_OWORD *)v106 + 1) = v108;
            if ( !v20 )
              dword_140404A6C[v105 + 71856266] = 1;
          }
          else
          {
            v110 = v346;
            *(_OWORD *)v106 = v30;
            *((_OWORD *)v106 + 1) = v110;
          }
          sub_140091E60(v104);
          v111 = (int)dword_140404A6C[v105 + 71856268];
          if ( (_DWORD)v111 != -1 )
          {
            v112 = dword_140404A6C[456202445];
            v113 = 0;
            v114 = 0;
            if ( (int)dword_140404A6C[456202445] > 0 )
            {
              v115 = &dword_140404A6C[438887411];
              while ( 1 )
              {
                v116 = (int)*v115;
                if ( (_DWORD)v116 != -1 && dword_140404A6C[3597 * v116 + 71856268] == dword_140404A6C[v105 + 71856268] )
                  break;
                ++v113;
                ++v114;
                v115 += 47224;
                if ( v113 >= (int)dword_140404A6C[456202445] )
                  goto LABEL_264;
              }
              sub_1400802F0(v104);
              v104 = v116;
              dword_140404A6C[47224 * v114 + 438887411] = -1;
              goto LABEL_321;
            }
          }
LABEL_264:
          v117 = v336;
          v118 = dword_140404A6C[456202453];
          v119 = dword_140404A6C[283831312];
          dword_140404A6C[v105 + 71859816] = v336 & 1;
          v120 = (v117 >> 1) & 0xF;
          if ( v120 > 4 )
            v120 = 4;
          dword_140404A6C[v105 + 71859825] = v120;
          v121 = (unsigned __int8)v117 >> 5;
          if ( v121 > 5 )
            v121 = 5;
          dword_140404A6C[v105 + 71859817] = v121;
          v122 = (v117 >> 8) & 0xF;
          if ( v122 > 0xB )
            v122 = 11;
          dword_140404A6C[v105 + 71859818] = v122;
          v123 = (unsigned __int16)v117 >> 12;
          if ( v123 > 8 )
            v123 = 8;
          dword_140404A6C[v105 + 71859819] = v123;
          v124 = HIWORD(v117) & 0xF;
          if ( v124 > 7 )
            v124 = 7;
          dword_140404A6C[v105 + 71859820] = v124;
          if ( (_DWORD)v111 != -1 )
          {
            if ( v119 - 3 <= 1 )
            {
              v125 = 28 * v111;
              dword_140404A6C[v105 + 71856272] = dword_140404A6C[28 * v111 + 134050374];
              v126 = dword_140404A6C[28 * v111 + 134050375];
              if ( v126 < 0 )
              {
                v126 = 0;
                dword_140404A6C[v125 + 134050375] = 0;
              }
              dword_140404A6C[v105 + 71856275] = v126;
              dword_140404A6C[v105 + 71856276] = dword_140404A6C[v125 + 134050376];
              dword_140404A6C[v105 + 71856291] = dword_140404A6C[v125 + 134050377];
            }
            v127 = &dword_140404A6C[282485789];
            v128 = 0;
            v129 = &dword_140404A6C[280651306];
            do
            {
              if ( *(v129 - 3) && *v129 == dword_140404A6C[v105 + 71856268] )
              {
                v130 = (int)v129[7132];
                *(v129 - 1) = v104;
                dword_140404A6C[v105 + 71856292] = v128;
                dword_140404A6C[v105 + 71856286] = v130;
                if ( v119 == 4 )
                {
                  v131 = v129[1];
                  if ( (_DWORD)v130 != -1 )
                  {
                    v132 = dword_140404A6C[v105 + 71856288];
                    if ( v132 < 10000 )
                    {
                      if ( v132 + v131 >= 10000 )
                        v131 = 10000 - v132;
                    }
                    else
                    {
                      v131 = 0;
                    }
                    v133 = 3 * v130;
                    v134 = (float)(int)dword_140404A6C[v105 + 71856272];
                    v135 = (float)v131 * *(float *)&dword_140404A6C[2 * v133 + 335047062];
                    if ( v134 > v135 )
                    {
                      dword_140404A6C[2 * v133 + 335047061] += v131;
                      dword_140404A6C[v105 + 71856272] = (int)(float)(v134 - v135);
                      dword_140404A6C[v105 + 71856288] = v132 + v131;
                    }
                  }
                }
                else
                {
                  dword_140404A6C[v105 + 71856342] = 0;
                  dword_140404A6C[v105 + 71859821] = 1;
                  dword_140404A6C[v105 + 71859822] = v130;
                }
                if ( v118 )
                  ++*v127;
              }
              ++v128;
              v129 += 7166;
              ++v127;
            }
            while ( v128 < 256 );
            v106 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v105 * 4 + 291638372);
          }
          v136 = dword_140404A6C[v105 + 71856272];
          if ( v136 < -10000 )
          {
            v136 = -10000;
            dword_140404A6C[v105 + 71856272] = -10000;
          }
          if ( dword_140404A6C[v105 + 71856292] == -1 )
          {
            if ( v119 == 4 )
            {
              if ( v136 < (int)dword_140404A6C[284022496] )
                dword_140404A6C[v105 + 71856272] = dword_140404A6C[284022496];
              goto LABEL_308;
            }
            if ( v119 == 7 )
            {
              v137 = dword_140404A6C[284022500];
              goto LABEL_307;
            }
            if ( v119 == 3 && dword_140404A6C[283831441] == 1 )
            {
              v137 = dword_140404A6C[284022481];
LABEL_307:
              dword_140404A6C[v105 + 71856272] = v137;
            }
          }
LABEL_308:
          ++dword_140404A6C[456202724];
          sub_140051DC0(v104);
          sub_140051F50(v104);
          if ( v119 != 4 || dword_140404A6C[284022497] )
          {
            v138 = (__int8 *)v106;
            do
            {
              v139 = *v138;
              v138[(char *)Src - (char *)v106] = *v138;
              ++v138;
            }
            while ( v139 );
            v140 = (__int64 *)((char *)&v343 + 7);
            do
            {
              v20 = *((_BYTE *)v140 + 1) == 0;
              v140 = (_QWORD *)((char *)v140 + 1);
            }
            while ( !v20 );
            *v140 = 0x64656E696F4A20LL;
            if ( v118 )
            {
              v141 = -1;
              do
                ++v141;
              while ( SR_VEC_LANES(128, Src[0], i8)[v141] );
              v142 = dword_140404A6C[308307070];
              if ( (int)v141 > 63 )
                LODWORD(v141) = 63;
              v143 = dword_140404A6C[283831474];
              v144 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v144) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v144) = v143;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v144), Src, (int)v141);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v141 + v144) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v144) = v141;
              dword_140404A6C[308307070] = v142 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v144) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v144) = -1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v144) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
          }
          sub_140158AB0(Src, "%s(%d) Joined", (     char *)v106, dword_140404A6C[v105 + 71856265]);
          v112 = dword_140404A6C[456202445];
LABEL_321:
          v145 = 47224LL * v112;
          dword_140404A6C[v145 + 438887405] = dword_140404A6C[289317478];
          LOWORD(dword_140404A6C[v145 + 438887406]) = dword_140404A6C[289317479];
          *(_QWORD *)&dword_140404A6C[v145 + 438887407] = *(_QWORD *)&dword_140404A6C[289317481];
          dword_140404A6C[v145 + 438887411] = v104;
          dword_140404A6C[v145 + 438887414] = 0;
          dword_140404A6C[v145 + 438887424] = 0;
          dword_140404A6C[v145 + 438887409] = -1;
          dword_140404A6C[v145 + 438887426] = -1;
          dword_140404A6C[v145 + 438887410] = 0;
          v146 = dword_140404A6C[v145 + 438887410];
          if ( dword_140404A6C[3597 * v104 + 71856266] )
            v146 = 1;
          dword_140404A6C[v145 + 438887410] = v146;
          dword_140404A6C[v145 + 438934628] = -1;
          dword_140404A6C[456202445] = v112 + 1;
          goto LABEL_217;
        }
      }
      else
      {
        v147 = v317;
        v148 = dword_140404A6C[456202445];
        v334 = dword_140404A6C[456202445];
        if ( v317 == 4 )
        {
          v149 = -1;
          v150 = -1;
          v151 = 0;
          v152 = 0;
          if ( (int)dword_140404A6C[456202445] <= 0 )
            goto LABEL_218;
          v153 = &dword_140404A6C[438887406];
          do
          {
            if ( dword_140404A6C[289317478] == *(v153 - 1)
              && LOWORD(dword_140404A6C[289317479]) == *(_WORD *)v153
              && *(_QWORD *)&dword_140404A6C[289317481] == *(_QWORD *)(v153 + 1) )
            {
              v149 = v151;
              v150 = v152;
            }
            ++v151;
            ++v152;
            v153 += 47224;
          }
          while ( v151 < (int)dword_140404A6C[456202445] );
          if ( v149 == -1 )
            goto LABEL_217;
          v154 = 47224 * v150;
          v155 = 0;
          v342 = v154 * 4;
          v156 = (int)dword_140404A6C[47224 * v150 + 438887411];
          dword_140404A6C[v154 + 438887414] = 0;
          if ( v34 < 0x10000 && v34 + 4 <= v35 )
          {
            if ( v36 > 0 )
            {
              ++v34;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v34;
              v36 = 0;
            }
            v157 = v34;
            v34 += 4;
            dword_140404A6C[47224 * v149 + 438887409] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v157);
            dword_140404A6C[289317484] = v34;
          }
          if ( dword_140404A6C[v154 + 438887409] != dword_140404A6C[283831447] )
            goto LABEL_217;
          v158 = 3597 * v156;
          v340 = v156;
          v159 = v156;
          v160 = 24;
          if ( v34 < 0x10000 && v34 + 3 <= v35 )
          {
            v29 = 0;
            v161 = 0;
            while ( 1 )
            {
              v29 |= (~(-1 << v160)
                    & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v161;
              v339 = v29;
              v162 = 8 - v36;
              if ( v160 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v160 == v162 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_348;
              }
              ++v34;
              v160 -= v162;
              v161 += v162;
              dword_140404A6C[289317484] = v34;
              if ( v160 <= 0 )
                goto LABEL_348;
            }
            v36 += v160;
            dword_140404A6C[289317485] = v36;
          }
LABEL_348:
          v163 = (float)(v29 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856293] = v163;
          if ( (v29 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856293] = -v163;
          v164 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v155 = v323;
          }
          else
          {
            v165 = 0;
            while ( 1 )
            {
              v155 |= (~(-1 << v164)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v165;
              v323 = v155;
              v166 = 8 - v36;
              if ( v164 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v164 == v166 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_360;
              }
              ++v34;
              v164 -= v166;
              v165 += v166;
              dword_140404A6C[289317484] = v34;
              if ( v164 <= 0 )
                goto LABEL_360;
            }
            v36 += v164;
            dword_140404A6C[289317485] = v36;
          }
LABEL_360:
          v167 = (float)(v155 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856294] = v167;
          if ( (v155 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856294] = -v167;
          v168 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v169 = v324;
          }
          else
          {
            v169 = 0;
            v170 = 0;
            while ( 1 )
            {
              v169 |= (~(-1 << v168)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v170;
              v324 = v169;
              v171 = 8 - v36;
              if ( v168 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v168 == v171 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_372;
              }
              ++v34;
              v168 -= v171;
              v170 += v171;
              dword_140404A6C[289317484] = v34;
              if ( v168 <= 0 )
                goto LABEL_372;
            }
            v36 += v168;
            dword_140404A6C[289317485] = v36;
          }
LABEL_372:
          v172 = (float)(v169 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856295] = v172;
          if ( (v169 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856295] = -v172;
          v173 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v174 = v325;
          }
          else
          {
            v174 = 0;
            v175 = 0;
            while ( 1 )
            {
              v174 |= (~(-1 << v173)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v175;
              v325 = v174;
              v176 = 8 - v36;
              if ( v173 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v173 == v176 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_384;
              }
              ++v34;
              v173 -= v176;
              v175 += v176;
              dword_140404A6C[289317484] = v34;
              if ( v173 <= 0 )
                goto LABEL_384;
            }
            v36 += v173;
            dword_140404A6C[289317485] = v36;
          }
LABEL_384:
          v177 = (float)(v174 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856296] = v177;
          if ( (v174 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856296] = -v177;
          v178 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v179 = v326;
          }
          else
          {
            v179 = 0;
            v180 = 0;
            while ( 1 )
            {
              v179 |= (~(-1 << v178)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v180;
              v326 = v179;
              v181 = 8 - v36;
              if ( v178 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v178 == v181 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_396;
              }
              ++v34;
              v178 -= v181;
              v180 += v181;
              dword_140404A6C[289317484] = v34;
              if ( v178 <= 0 )
                goto LABEL_396;
            }
            v36 += v178;
            dword_140404A6C[289317485] = v36;
          }
LABEL_396:
          v182 = (float)(v179 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856297] = v182;
          if ( (v179 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856297] = -v182;
          v183 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v184 = v327;
          }
          else
          {
            v184 = 0;
            v185 = 0;
            while ( 1 )
            {
              v184 |= (~(-1 << v183)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v185;
              v327 = v184;
              v186 = 8 - v36;
              if ( v183 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v183 == v186 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_408;
              }
              ++v34;
              v183 -= v186;
              v185 += v186;
              dword_140404A6C[289317484] = v34;
              if ( v183 <= 0 )
                goto LABEL_408;
            }
            v36 += v183;
            dword_140404A6C[289317485] = v36;
          }
LABEL_408:
          v187 = (float)(v184 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856298] = v187;
          if ( (v184 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856298] = -v187;
          v188 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v189 = v328;
          }
          else
          {
            v189 = 0;
            v190 = 0;
            while ( 1 )
            {
              v189 |= (~(-1 << v188)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v190;
              v328 = v189;
              v191 = 8 - v36;
              if ( v188 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v188 == v191 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_420;
              }
              ++v34;
              v188 -= v191;
              v190 += v191;
              dword_140404A6C[289317484] = v34;
              if ( v188 <= 0 )
                goto LABEL_420;
            }
            v36 += v188;
            dword_140404A6C[289317485] = v36;
          }
LABEL_420:
          v192 = (float)(v189 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856299] = v192;
          if ( (v189 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856299] = -v192;
          v193 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v194 = v329;
          }
          else
          {
            v194 = 0;
            v195 = 0;
            while ( 1 )
            {
              v194 |= (~(-1 << v193)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v195;
              v329 = v194;
              v196 = 8 - v36;
              if ( v193 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v193 == v196 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_432;
              }
              ++v34;
              v193 -= v196;
              v195 += v196;
              dword_140404A6C[289317484] = v34;
              if ( v193 <= 0 )
                goto LABEL_432;
            }
            v36 += v193;
            dword_140404A6C[289317485] = v36;
          }
LABEL_432:
          v197 = (float)(v194 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856300] = v197;
          if ( (v194 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856300] = -v197;
          v198 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v199 = v330;
          }
          else
          {
            v199 = 0;
            v200 = 0;
            while ( 1 )
            {
              v199 |= (~(-1 << v198)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v200;
              v330 = v199;
              v201 = 8 - v36;
              if ( v198 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v198 == v201 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_444;
              }
              ++v34;
              v198 -= v201;
              v200 += v201;
              dword_140404A6C[289317484] = v34;
              if ( v198 <= 0 )
                goto LABEL_444;
            }
            v36 += v198;
            dword_140404A6C[289317485] = v36;
          }
LABEL_444:
          v202 = (float)(v199 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856301] = v202;
          if ( (v199 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856301] = -v202;
          v203 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v204 = v331;
          }
          else
          {
            v204 = 0;
            v205 = 0;
            while ( 1 )
            {
              v204 |= (~(-1 << v203)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v205;
              v331 = v204;
              v206 = 8 - v36;
              if ( v203 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v203 == v206 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_456;
              }
              ++v34;
              v203 -= v206;
              v205 += v206;
              dword_140404A6C[289317484] = v34;
              if ( v203 <= 0 )
                goto LABEL_456;
            }
            v36 += v203;
            dword_140404A6C[289317485] = v36;
          }
LABEL_456:
          v207 = (float)(v204 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856309] = v207;
          if ( (v204 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856309] = -v207;
          v208 = 24;
          if ( v34 >= 0x10000 || v34 + 3 > v35 )
          {
            v209 = v332;
          }
          else
          {
            v209 = 0;
            v210 = 0;
            while ( 1 )
            {
              v209 |= (~(-1 << v208)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v34) >> SLOBYTE(dword_140404A6C[289317485]))) << v210;
              v332 = v209;
              v211 = 8 - v36;
              if ( v208 < (unsigned int)(8 - v36) )
                break;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v208 == v211 )
              {
                dword_140404A6C[289317484] = ++v34;
                goto LABEL_468;
              }
              ++v34;
              v208 -= v211;
              v210 += v211;
              dword_140404A6C[289317484] = v34;
              if ( v208 <= 0 )
                goto LABEL_468;
            }
            v36 += v208;
            dword_140404A6C[289317485] = v36;
          }
LABEL_468:
          v212 = (float)(v209 & 0x7FFFFF) * 0.0000007490140565848351;
          *(float *)&dword_140404A6C[v158 + 71856310] = v212;
          if ( (v209 & 0x800000) != 0 )
            *(float *)&dword_140404A6C[v158 + 71856310] = -v212;
          if ( v34 < 0x10000 && v34 + 4 <= v35 )
          {
            if ( v36 > 0 )
            {
              ++v34;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v34;
            }
            dword_140404A6C[v158 + 71856325] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v34);
            dword_140404A6C[289317484] = v34 + 4;
          }
          sub_140115AE0(&dword_140404A6C[v158 + 71856339], 8);
          sub_140115AE0(&dword_140404A6C[v158 + 71856330], 4);
          v213 = 47224LL * v149;
          v343 = v213 * 4;
          sub_140115AE0(&dword_140404A6C[v213 + 438887424], 16);
          v214 = dword_140404A6C[289317484];
          v215 = dword_140404A6C[289317483];
          if ( (int)dword_140404A6C[289317484] >= 0x10000
            || (signed int)(dword_140404A6C[289317484] + 4) > (int)dword_140404A6C[289317483] )
          {
            v216 = dword_140404A6C[289317485];
          }
          else
          {
            v216 = dword_140404A6C[289317485];
            if ( (int)dword_140404A6C[289317485] > 0 )
            {
              v214 = ++dword_140404A6C[289317484];
              v216 = 0;
              dword_140404A6C[289317485] = 0;
            }
            v217 = v214;
            v214 += 4;
            dword_140404A6C[v213 + 438887426] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v217);
            dword_140404A6C[289317484] = v214;
          }
          sub_140106160(v149);
          if ( v214 < 0x10000 && v214 + 12 <= v215 )
          {
            if ( v216 > 0 )
            {
              dword_140404A6C[289317484] = ++v214;
              v216 = 0;
              dword_140404A6C[289317485] = 0;
            }
            v218 = v214;
            v214 += 12;
            v219 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v218);
            LODWORD(v218) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v218);
            *(_QWORD *)&dword_140404A6C[v213 + 438920021] = v219;
            dword_140404A6C[v213 + 438920023] = v218;
            dword_140404A6C[289317484] = v214;
          }
          v220 = 4;
          if ( v214 < 0x10000 && v214 <= v215 )
          {
            v221 = 0;
            v222 = 0;
            while ( 1 )
            {
              v223 = 8 - v216;
              v221 |= (~(-1 << v220)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v214) >> SLOBYTE(dword_140404A6C[289317485]))) << v222;
              v337 = v221;
              if ( v220 < (unsigned int)(8 - v216) )
                break;
              dword_140404A6C[289317485] = 0;
              if ( v220 == v223 )
              {
                dword_140404A6C[289317484] = v214 + 1;
                goto LABEL_495;
              }
              ++v214;
              v220 -= v223;
              v222 += v223;
              dword_140404A6C[289317484] = v214;
              v216 = 0;
              if ( v220 <= 0 )
                goto LABEL_495;
            }
            dword_140404A6C[289317485] = v220 + v216;
          }
LABEL_495:
          v224 = &dword_140404A6C[v158 + 71856362];
          sub_140115AE0(&dword_140404A6C[v158 + 71856362], 8);
          if ( v337 <= 0 )
          {
            v232 = dword_140404A6C[289317485];
            v229 = dword_140404A6C[289317484];
          }
          else
          {
            v225 = *v224;
            v226 = (unsigned int)v337;
            v341 = (unsigned int)v337;
            do
            {
              sub_140115AE0(&dword_140404A6C[21 * v225 + 71856367 + v158], 4);
              v227 = (int)*v224;
              v228 = v158 * 4 + 84 * v227;
              if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v228) )
              {
                v232 = dword_140404A6C[289317485];
                v229 = dword_140404A6C[289317484];
              }
              else
              {
                sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v228 + 291638828), 8);
                v229 = dword_140404A6C[289317484];
                v230 = dword_140404A6C[289317483];
                v231 = v158 * 4 + 84LL * (int)*v224;
                if ( (int)dword_140404A6C[289317484] >= 0x10000
                  || (signed int)(dword_140404A6C[289317484] + 4) > (int)dword_140404A6C[289317483] )
                {
                  v232 = dword_140404A6C[289317485];
                }
                else
                {
                  v232 = dword_140404A6C[289317485];
                  if ( (int)dword_140404A6C[289317485] > 0 )
                  {
                    v229 = dword_140404A6C[289317484] + 1;
                    dword_140404A6C[289317485] = 0;
                    ++dword_140404A6C[289317484];
                    v232 = 0;
                  }
                  v233 = v229;
                  v229 += 4;
                  *(unsigned int *)((char *)&dword_140404A6C[71856369] + v231) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                                 + v233);
                  dword_140404A6C[289317484] = v229;
                }
                v234 = 2;
                v320 = 16;
                v235 = 2;
                do
                {
                  v227 = (int)*v224;
                  if ( v229 < 0x10000 )
                  {
                    v236 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v236;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v237 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * v227 + 71856371] + v234 + v158 * 4 + 2) = *((_BYTE *)&dword_140404A6C[289317486]
                                                                                                 + v237);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  if ( v229 < 0x10000 )
                  {
                    v238 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v238;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v239 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * (int)v227 + 71856371] + v234 + v158 * 4 + 3) = *((_BYTE *)&dword_140404A6C[289317486] + v239);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  if ( v229 < 0x10000 )
                  {
                    v240 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v240;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v241 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * (int)v227 + 71856372] + v234 + v158 * 4) = *((_BYTE *)&dword_140404A6C[289317486]
                                                                                                  + v241);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  if ( v229 < 0x10000 )
                  {
                    v242 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v242;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v243 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * (int)v227 + 71856372] + v234 + v158 * 4 + 1) = *((_BYTE *)&dword_140404A6C[289317486] + v243);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  if ( v229 < 0x10000 )
                  {
                    v244 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v244;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v245 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * (int)v227 + 71856372] + v234 + v158 * 4 + 2) = *((_BYTE *)&dword_140404A6C[289317486] + v245);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  if ( v229 < 0x10000 )
                  {
                    v246 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v246;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v247 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * (int)v227 + 71856372] + v234 + v158 * 4 + 3) = *((_BYTE *)&dword_140404A6C[289317486] + v247);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  if ( v229 < 0x10000 )
                  {
                    v248 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v248;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v249 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * (int)v227 + 71856373] + v234 + v158 * 4) = *((_BYTE *)&dword_140404A6C[289317486]
                                                                                                  + v249);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  if ( v229 < 0x10000 )
                  {
                    v250 = v229 + 1;
                    if ( v229 + 1 <= v230 )
                    {
                      if ( v232 > 0 )
                      {
                        ++v229;
                        dword_140404A6C[289317484] = v250;
                        v232 = 0;
                        dword_140404A6C[289317485] = 0;
                      }
                      v251 = v229++;
                      *((_BYTE *)&dword_140404A6C[21 * (int)v227 + 71856373] + v234 + v158 * 4 + 1) = *((_BYTE *)&dword_140404A6C[289317486] + v251);
                      LODWORD(v227) = *v224;
                      dword_140404A6C[289317484] = v229;
                    }
                  }
                  v234 += 8;
                  --v235;
                }
                while ( v235 );
                v226 = v341;
              }
              v252 = v158 * 4 + 84LL * (int)v227;
              if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v252) == 1 )
              {
                sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v252 + 291638828), 6);
                v253 = (int)*v224;
                v254 = 0;
                v320 = 0;
                if ( (int)dword_140404A6C[21 * v253 + 71856368 + v158] > 0 )
                {
                  v255 = dword_140404A6C[289317483];
                  v256 = dword_140404A6C[289317485];
                  v257 = dword_140404A6C[289317484];
                  do
                  {
                    v258 = v158 * 4 + 84LL * (int)v253 + v254;
                    if ( v257 < 0x10000 )
                    {
                      v259 = v257 + 1;
                      if ( v257 + 1 <= v255 )
                      {
                        if ( v256 > 0 )
                        {
                          ++v257;
                          dword_140404A6C[289317484] = v259;
                          v256 = 0;
                          dword_140404A6C[289317485] = 0;
                        }
                        v260 = v257++;
                        *((_BYTE *)&dword_140404A6C[71856372] + v258) = *((_BYTE *)&dword_140404A6C[289317486] + v260);
                        dword_140404A6C[289317484] = v257;
                      }
                    }
                    v253 = (int)*v224;
                    ++v254;
                  }
                  while ( v254 < (int)dword_140404A6C[21 * v253 + 71856368 + v158] );
                  v320 = v254;
                }
                *((_BYTE *)&dword_140404A6C[21 * (int)v253 + 71856372 + v158]
                + (int)dword_140404A6C[21 * (int)v253 + 71856368 + v158]) = 0;
                sub_140115AE0(&dword_140404A6C[21 * (int)*v224 + 71856369 + v158], 4);
                LODWORD(v227) = *v224;
                v232 = dword_140404A6C[289317485];
                v229 = dword_140404A6C[289317484];
              }
              v261 = v158 * 4 + 84LL * (int)v227;
              if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v261) == 2 )
              {
                sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v261 + 291638828), 16);
                sub_140115AE0(&dword_140404A6C[21 * (int)*v224 + 71856369 + v158], 16);
                LODWORD(v227) = *v224;
                v232 = dword_140404A6C[289317485];
                v229 = dword_140404A6C[289317484];
              }
              v262 = v158 * 4 + 84LL * (int)v227;
              if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v262) == 3 )
              {
                sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v262 + 291638828), 16);
                sub_140115AE0(&dword_140404A6C[21 * (int)*v224 + 71856369 + v158], 16);
                v263 = 16;
                v229 = dword_140404A6C[289317484];
                v264 = &dword_140404A6C[21 * (int)*v224 + 71856370 + v158];
                if ( (int)dword_140404A6C[289317484] >= 0x10000
                  || (signed int)(dword_140404A6C[289317484] + 2) > (int)dword_140404A6C[289317483] )
                {
                  v232 = dword_140404A6C[289317485];
                  v265 = v338;
                }
                else
                {
                  v232 = dword_140404A6C[289317485];
                  v265 = 0;
                  v266 = 0;
                  while ( 1 )
                  {
                    v267 = 8 - v232;
                    v265 |= (~(-1 << v263)
                           & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v229) >> SLOBYTE(dword_140404A6C[289317485]))) << v266;
                    v338 = v265;
                    if ( v263 < (unsigned int)(8 - v232) )
                      break;
                    v232 = 0;
                    dword_140404A6C[289317485] = 0;
                    if ( v263 == v267 )
                    {
                      dword_140404A6C[289317484] = ++v229;
                      goto LABEL_572;
                    }
                    ++v229;
                    v263 -= v267;
                    v266 += v267;
                    dword_140404A6C[289317484] = v229;
                    if ( v263 <= 0 )
                      goto LABEL_572;
                  }
                  v232 += v263;
                  dword_140404A6C[289317485] = v232;
                }
LABEL_572:
                v268 = v265;
                if ( v265 == 0xFFFF )
                  v268 = -1;
                *v264 = v268;
              }
              v269 = *v224;
              v270 = v158 * 4 + 84LL * (int)*v224;
              v271 = *(unsigned int *)((char *)&dword_140404A6C[71856367] + v270);
              if ( v271 >= 4 && v271 <= 5 )
              {
                v272 = dword_140404A6C[289317483];
                if ( v229 < 0x10000 && v229 + 4 <= (int)dword_140404A6C[289317483] )
                {
                  if ( v232 > 0 )
                  {
                    ++v229;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v229;
                    v232 = 0;
                  }
                  v273 = v229;
                  v229 += 4;
                  *(unsigned int *)((char *)&dword_140404A6C[71856368] + v270) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                                 + v273);
                  v269 = *v224;
                  dword_140404A6C[289317484] = v229;
                }
                if ( v229 < 0x10000 && v229 + 4 <= v272 )
                {
                  if ( v232 > 0 )
                  {
                    ++v229;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v229;
                    v232 = 0;
                  }
                  v274 = v229;
                  v229 += 4;
                  dword_140404A6C[21 * (int)v269 + 71856369 + v158] = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v274);
                  v269 = *v224;
                  dword_140404A6C[289317484] = v229;
                }
              }
              v225 = ((_BYTE)v269 + 1) & 0x3F;
              --v226;
              *v224 = v225;
              v341 = v226;
            }
            while ( v226 );
            v159 = v340;
          }
          v275 = 32901 * v159;
          v276 = 32901 * v159;
          v277 = 6;
          v340 = v276;
          do
          {
            v278 = 6;
            if ( v229 >= 0x10000 || v229 > (int)dword_140404A6C[289317483] )
            {
              v279 = v320;
            }
            else
            {
              v279 = 0;
              v280 = 0;
              while ( 1 )
              {
                v281 = 8 - v232;
                v279 |= (~(-1 << v278)
                       & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v229) >> SLOBYTE(dword_140404A6C[289317485]))) << v280;
                v320 = v279;
                if ( v278 < (unsigned int)(8 - v232) )
                  break;
                dword_140404A6C[289317485] = 0;
                if ( v278 == v281 )
                {
                  dword_140404A6C[289317484] = v229 + 1;
                  goto LABEL_601;
                }
                ++v229;
                v278 -= v281;
                v280 += v281;
                dword_140404A6C[289317484] = v229;
                v232 = 0;
                if ( v278 <= 0 )
                  goto LABEL_601;
              }
              dword_140404A6C[289317485] = v278 + v232;
            }
LABEL_601:
            v282 = v279;
            v283 = v276 + v279;
            v284 = &dword_140404A6C[v283 + 299853762];
            sub_140115AE0(v284, 11);
            v285 = &dword_140404A6C[v283 + 299853698];
            sub_140115AE0(v285, 2);
            v229 = dword_140404A6C[289317484];
            v286 = (__m128i *)&dword_140404A6C[512 * v282 + 299853826 + v275];
            if ( (int)dword_140404A6C[289317484] >= 0x10000
              || (v287 = (int)*v284, (signed int)(v287 + dword_140404A6C[289317484]) > (int)dword_140404A6C[289317483]) )
            {
              v232 = dword_140404A6C[289317485];
            }
            else
            {
              v232 = dword_140404A6C[289317485];
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                v229 = ++dword_140404A6C[289317484];
                v232 = 0;
                dword_140404A6C[289317485] = 0;
              }
              sub_1401FC920(v286, (     __m128i *)((char *)&dword_140404A6C[289317486] + v229), v287);
              v229 += v287;
              dword_140404A6C[289317484] = v229;
            }
            v276 = v340;
            dword_140404A6C[v275 + 299853695] = *v285;
            --v277;
          }
          while ( v277 );
          dword_140404A6C[v275 + 299853696] = ((_BYTE)v320 + 1) & 0x3F;
          sub_140115AE0(&dword_140404A6C[v275 + 299853693], 1);
          v288 = dword_140404A6C[289317484];
          v289 = 8;
          if ( (int)dword_140404A6C[289317484] >= 0x10000
            || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
          {
            v291 = v333;
          }
          else
          {
            v290 = dword_140404A6C[289317485];
            v291 = 0;
            v292 = 0;
            while ( 1 )
            {
              v293 = 8 - v290;
              v291 |= (~(-1 << v289)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v288) >> SLOBYTE(dword_140404A6C[289317485]))) << v292;
              v333 = v291;
              if ( v289 < 8 - v290 )
                break;
              dword_140404A6C[289317485] = 0;
              if ( v289 == v293 )
              {
                dword_140404A6C[289317484] = v288 + 1;
                goto LABEL_618;
              }
              ++v288;
              v289 -= v293;
              v292 += v293;
              dword_140404A6C[289317484] = v288;
              v290 = 0;
              if ( v289 <= 0 )
                goto LABEL_618;
            }
            dword_140404A6C[289317485] = v289 + v290;
          }
LABEL_618:
          v294 = v291;
          v295 = v343;
          if ( v291 == 255 )
            v294 = -1;
          *(unsigned int *)((char *)&dword_140404A6C[438887508] + v342) = v294;
          sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[438924125] + v295), 11);
          sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[438934368] + v295), 8);
          v34 = dword_140404A6C[289317484];
          v35 = dword_140404A6C[289317483];
          v36 = dword_140404A6C[289317485];
          if ( (int)dword_140404A6C[289317484] >= 0x10000 )
            goto LABEL_630;
          if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
          {
            if ( (int)dword_140404A6C[289317485] > 0 )
            {
              v34 = dword_140404A6C[289317484] + 1;
              dword_140404A6C[289317485] = 0;
              ++dword_140404A6C[289317484];
              v36 = 0;
            }
            v296 = v34;
            v34 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[438934625] + v295) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                            + v296);
            dword_140404A6C[289317484] = v34;
          }
          if ( v34 >= 0x10000 || v34 + 4 > v35 )
          {
LABEL_630:
            v32 = dword_140404A6C[289317478];
            v148 = v334;
            v25 = v319;
            v147 = v317;
          }
          else
          {
            if ( v36 > 0 )
            {
              dword_140404A6C[289317484] = ++v34;
              v36 = 0;
              dword_140404A6C[289317485] = 0;
            }
            v32 = dword_140404A6C[289317478];
            v148 = v334;
            v297 = v34;
            v34 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[438934626] + v295) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                            + v297);
            v25 = v319;
            v147 = v317;
            dword_140404A6C[289317484] = v34;
          }
        }
        if ( v147 != 7 )
        {
          v28 = v317;
          if ( v317 == 64 )
          {
            if ( v32 == dword_140404A6C[280649181]
              && LOWORD(dword_140404A6C[289317479]) == LOWORD(dword_140404A6C[280649182])
              && v34 < 0x10000 )
            {
              if ( v34 + 4 <= v35 )
              {
                if ( v36 > 0 )
                {
                  ++v34;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v34;
                  v36 = 0;
                }
                v303 = v34;
                v34 += 4;
                dword_140404A6C[456202719] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v303);
                dword_140404A6C[289317484] = v34;
              }
              if ( v34 < 0x10000 && v34 + 2 <= v35 )
              {
                if ( v36 > 0 )
                {
                  ++v34;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v34;
                }
                LOWORD(dword_140404A6C[456202720]) = *(_WORD *)((char *)&dword_140404A6C[289317486] + v34);
                dword_140404A6C[289317484] = v34 + 2;
              }
            }
          }
          else if ( v317 == 66
                 && v32 == dword_140404A6C[280649181]
                 && LOWORD(dword_140404A6C[289317479]) == LOWORD(dword_140404A6C[280649182]) )
          {
            v304 = dword_140404A6C[456202733];
            if ( (int)dword_140404A6C[456202733] < 1024 )
            {
              if ( v34 < 0x10000 && v34 + 4 <= v35 )
              {
                if ( v36 > 0 )
                {
                  ++v34;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v34;
                  v36 = 0;
                }
                v305 = v34;
                v34 += 4;
                dword_140404A6C[14 * dword_140404A6C[456202733] + 456202735] = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                               + v305);
                v304 = dword_140404A6C[456202733];
                dword_140404A6C[289317484] = v34;
              }
              if ( v34 < 0x10000 && v34 + 4 <= v35 )
              {
                if ( v36 > 0 )
                {
                  ++v34;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v34;
                  v36 = 0;
                }
                v306 = v34;
                v34 += 4;
                dword_140404A6C[14 * v304 + 456202736] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v306);
                v304 = dword_140404A6C[456202733];
                dword_140404A6C[289317484] = v34;
              }
              if ( v34 < 0x10000 && v34 + 8 <= v35 )
              {
                if ( v36 > 0 )
                {
                  ++v34;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v34;
                  v36 = 0;
                }
                v307 = v34;
                v34 += 8;
                *(_QWORD *)&dword_140404A6C[14 * v304 + 456202737] = *(_QWORD *)((char *)&dword_140404A6C[289317486]
                                                                               + v307);
                v304 = dword_140404A6C[456202733];
                dword_140404A6C[289317484] = v34;
              }
              if ( v34 < 0x10000 && v34 + 4 <= v35 )
              {
                if ( v36 > 0 )
                {
                  ++v34;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v34;
                  v36 = 0;
                }
                v308 = v34;
                v34 += 4;
                dword_140404A6C[14 * v304 + 456202739] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v308);
                v304 = dword_140404A6C[456202733];
                dword_140404A6C[289317484] = v34;
              }
              v309 = 14LL * v304;
              if ( v34 < 0x10000 && v34 + 32 <= v35 )
              {
                if ( v36 > 0 )
                {
                  ++v34;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v34;
                }
                v310 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v34);
                v311 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v34);
                dword_140404A6C[289317484] = v34 + 32;
                *(_OWORD *)&dword_140404A6C[v309 + 456202740] = v310;
                *(_OWORD *)&dword_140404A6C[v309 + 456202744] = v311;
                v304 = dword_140404A6C[456202733];
              }
              v312 = 0;
              v313 = 0;
              dword_140404A6C[14 * v304 + 456202748] = 0;
              if ( (int)dword_140404A6C[456202733] <= 0 )
              {
LABEL_690:
                ++dword_140404A6C[456202733];
              }
              else
              {
                v314 = 14LL * (int)dword_140404A6C[456202733];
                v315 = &dword_140404A6C[456202736];
                while ( *(v315 - 1) != dword_140404A6C[14 * dword_140404A6C[456202733] + 456202735]
                     || *v315 != dword_140404A6C[v314 + 456202736]
                     || *(_QWORD *)(v315 + 1) != *(_QWORD *)&dword_140404A6C[v314 + 456202737]
                     || v315[3] != dword_140404A6C[v314 + 456202739] )
                {
                  ++v312;
                  ++v313;
                  v315 += 14;
                  if ( v312 >= (int)dword_140404A6C[456202733] )
                    goto LABEL_690;
                }
                dword_140404A6C[14 * v313 + 456202748] = 0;
              }
            }
          }
          goto LABEL_219;
        }
        v298 = -1;
        v299 = -1;
        v300 = 0;
        v301 = 0;
        if ( v148 > 0 )
        {
          v302 = &dword_140404A6C[438887406];
          do
          {
            if ( v32 == *(v302 - 1)
              && LOWORD(dword_140404A6C[289317479]) == *(_WORD *)v302
              && *(_QWORD *)&dword_140404A6C[289317481] == *(_QWORD *)(v302 + 1) )
            {
              v298 = v300;
              v299 = v301;
            }
            ++v300;
            ++v301;
            v302 += 47224;
          }
          while ( v300 < v148 );
          v28 = v317;
          if ( v298 != -1 )
            dword_140404A6C[47224 * v299 + 438887414] = 3000;
          goto LABEL_219;
        }
      }
LABEL_218:
      v28 = v317;
LABEL_219:
      v29 = v339;
      v27 = v318;
LABEL_220:
      v90 = sub_14011C760();
      v26 = v335;
    }
    while ( v90 > 0 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v316
#undef v317
#undef v318
#undef v319
#undef v320
#undef v321
#undef v322
#undef v323
#undef v324
#undef v325
#undef v326
#undef v327
#undef v328
#undef v329
#undef v330
#undef v331
#undef v332
#undef v333
#undef v334
#undef v335
#undef v336
#undef v337
#undef v338
#undef v339
#undef v340
#undef v341
#undef v342
#undef v343
#undef Src
#undef v345
#undef v346
#undef v347
#undef v348
#undef v349

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B231C: using guessed type int dword_1402B231C;
// 1402B23DC: using guessed type int dword_1402B23DC;
// 1402B2658: using guessed type int dword_1402B2658;
// 1402B26C8: using guessed type int dword_1402B26C8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160361340: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183F7A5B0: using guessed type unsigned int;
// 183F7A5EC: using guessed type unsigned int;
// 183F7A5FC: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;
// 1853AD404: using guessed type unsigned int;
// 1853AD408: using guessed type unsigned int;
// 1853AD410: using guessed type unsigned int;
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADA0: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04ADD4: using guessed type unsigned int;
// 1AD04ADE4: using guessed type unsigned int;
// 1AD04B1E8: using guessed type unsigned int;
// 1AD04B1EC: using guessed type unsigned int;
// 1AD04B1FC: using guessed type unsigned int;
// 1AD04B210: using guessed type unsigned int;
// 1AD04B220: using guessed type unsigned int;

//----- (0000000140136450) ----------------------------------------------------
void sub_140136450()
{
  __int64 v0; // r14
  __int64 v1; // rcx
  unsigned int *v2; // rax
  __int64 v3; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  signed int v10; // ecx
  unsigned int *v11; // rax
  __int128 v12; // xmm1
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ebx
  unsigned int v20; // r8d
  signed int v21; // edx
  __int128 v22; // xmm1
  signed int v23; // r9d
  char v24; // r8
  int v25; // eax
  unsigned int v26; // r10d
  unsigned int v27; // ecx
  signed int v28; // r9d
  int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // ecx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned __int16 v35; // dx
  __int64 v36; // r13
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // xmm0_4
  unsigned int *v41; // rcx
  unsigned int *v42; // rbx
  __int64 v43; // rdi
  unsigned int *v44; // rbx
  unsigned int *v45; // rdi
  signed int v46; // eax
  signed int v47; // r9d
  char v48; // r8
  unsigned int v49; // r10d
  unsigned int v50; // ecx
  signed int v51; // r9d
  unsigned int v52; // r10d
  unsigned int v53; // ecx
  signed int v54; // r9d
  unsigned int v55; // r10d
  unsigned int v56; // ecx
  signed int v57; // eax
  signed int v58; // r8d
  char v59; // r9
  unsigned int v60; // r10d
  unsigned int v61; // ecx
  __int64 v62; // r12
  unsigned int *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  signed int v68; // eax
  signed int v69; // eax
  signed int v70; // eax
  signed int v71; // eax
  signed int v72; // eax
  signed int v73; // eax
  signed int v74; // eax
  signed int v75; // eax
  int *v76; // rbx
  __int64 v77; // rdi
  unsigned int *v78; // rbx
  signed int v79; // eax
  signed int v80; // eax
  signed int v81; // eax
  signed int v82; // eax
  signed int v83; // eax
  __int64 v84; // rbp
  int *v85; // r14
  _DWORD *v86; // rbx
  __int64 v87; // rdi
  int v88; // eax
  int v89; // r8d
  signed int v90; // edx
  __int64 v91; // rdi
  __int64 v92; // rbp
  __int64 v93; // rsi
  __int64 v94; // rbx
  unsigned int v95; // ebx
  signed int v96; // r9d
  unsigned int v97; // r10d
  unsigned int v98; // ecx
  __int64 v99; // rsi
  unsigned int *v100; // rdi
  unsigned int *v101; // r13
  __int64 v102; // rax
  __int64 v103; // r15
  unsigned int v104; // r14d
  __int64 v105; // rbp
  signed int v106; // ebx
  __int64 v107; // r12
  signed int v108; // r8d
  char v109; // r9
  unsigned int v110; // r10d
  unsigned int v111; // ecx
  unsigned __int64 v112; // rdi
  signed int v113; // r10d
  signed int v114; // r8d
  unsigned int v115; // edi
  unsigned int v116; // r9d
  unsigned int v117; // ecx
  int v118; // ebp
  int v119; // r14d
  signed int v120; // r8d
  char v121; // r10
  unsigned int v122; // r9d
  signed int v123; // eax
  unsigned int v124; // ecx
  __int64 v125; // r15
  __int64 v126; // r15
  signed int v127; // r8d
  int v128; // r10d
  signed int v129; // r9d
  unsigned int v130; // ecx
  unsigned __int16 v131; // dx
  __int64 v132; // rcx
  int v133; // ebp
  unsigned int *v134; // r14
  unsigned int *v135; // rdi
  unsigned int *v136; // rbx
  __int64 v137; // rsi
  signed int v138; // eax
  signed int v139; // eax
  __int128 v140; // xmm1
  signed int v141; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140136450[208];
#define v142 (*(__int64 (*))(void *)(sr_frame_140136450 + 0)) /* [rsp+20h] */
#define v143 (*(__int64 (*))(void *)(sr_frame_140136450 + 8)) /* [rsp+28h] */
#define v144 (*(__int64 (*))(void *)(sr_frame_140136450 + 16)) /* [rsp+30h] */
#define v145 (*(__int64 (*))(void *)(sr_frame_140136450 + 24)) /* [rsp+38h] */
#define v146 (*(__int64 (*))(void *)(sr_frame_140136450 + 32)) /* [rsp+40h] */
#define v147 (*(unsigned int (*))(void *)(sr_frame_140136450 + 40)) /* [rsp+48h] */
#define v148 (*(unsigned int (*))(void *)(sr_frame_140136450 + 176)) /* [rsp+D0h] */
#define v149 (*(int (*))(void *)(sr_frame_140136450 + 176)) /* [rsp+D0h] */
#define v150 (*(unsigned int * (*))(void *)(sr_frame_140136450 + 184)) /* [rsp+D8h] */
#define v151 (*(__int64 (*))(void *)(sr_frame_140136450 + 192)) /* [rsp+E0h] */
#define v152 (*(unsigned int * (*))(void *)(sr_frame_140136450 + 200)) /* [rsp+E8h] */

  v0 = (int)dword_140404A6C[456202445];
  ++dword_140404A6C[456202728];
  sub_1400299C0();
  sub_140127630();
  v1 = 256;
  v2 = &dword_140404A6C[438881245];
  v3 = 0;
  do
  {
    if ( *v2 )
    {
      if ( (--v2[1] & 0x80000000) != 0 )
        *v2 = 0;
    }
    v2 += 20;
    --v1;
  }
  while ( v1 );
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v5 = &dword_140404A6C[438934628];
    v6 = dword_140404A6C[456202445];
    do
    {
      v7 = (int)*(v5 - 47217);
      if ( (_DWORD)v7 != -1 )
      {
        v8 = 3597 * v7;
        v9 = dword_140404A6C[3597 * v7 + 71856268];
        if ( v9 != -1 )
        {
          v10 = *v5;
          if ( *v5 != -1 )
            goto LABEL_17;
          v10 = 0;
          v11 = &dword_140404A6C[438881247];
          while ( !*(v11 - 2) || *v11 != v9 )
          {
            ++v10;
            v11 += 20;
            if ( (__int64)v11 >= (__int64)&dword_140404A6C[438886367] )
            {
              v10 = sub_140132E00();
              *v5 = v10;
              goto LABEL_16;
            }
          }
          *v5 = v10;
LABEL_16:
          if ( v10 != -1 )
          {
LABEL_17:
            v12 = *(_OWORD *)&dword_140404A6C[v8 + 71856258];
            v13 = dword_140404A6C[v8 + 71856265];
            v14 = 10LL * v10;
            *(_OWORD *)&dword_140404A6C[2 * v14 + 438881248] = *(_OWORD *)&dword_140404A6C[v8 + 71856254];
            dword_140404A6C[2 * v14 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * v14 + 438881252] = v12;
            dword_140404A6C[2 * v14 + 438881246] = 3600;
            dword_140404A6C[2 * v14 + 438881247] = v9;
            dword_140404A6C[2 * v14 + 438881264] = v13;
          }
        }
      }
      v5 += 47224;
      --v6;
    }
    while ( v6 );
    v3 = 0;
  }
  v148 = 0;
  v15 = 0;
  v151 = v0;
  if ( (int)v0 > 0 )
  {
    v16 = 0;
    v17 = v0;
    v145 = 0;
    while ( 1 )
    {
      v18 = 47224 * v16;
      v143 = 47224 * v16;
      v19 = dword_140404A6C[47224 * v16 + 438887412];
      if ( v19 <= 0 )
        break;
LABEL_239:
      ++v15;
      v16 = v145 + 1;
      v148 = v15;
      v145 = v16;
      if ( v16 >= v17 )
        goto LABEL_240;
    }
    v20 = dword_140404A6C[283831447];
    if ( dword_140404A6C[v18 + 438887409] != dword_140404A6C[283831447] )
    {
      dword_140404A6C[289301094] = dword_1402B2658;
      *(_QWORD *)&dword_140404A6C[289301092] = 9;
      LOBYTE(dword_140404A6C[289301095]) = 6;
      *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = dword_140404A6C[283831447];
      sub_140115D90(&dword_140404A6C[283831312], 4);
      sub_140115D90(&dword_140404A6C[283831441], 4);
      sub_140115D90(&dword_140404A6C[283831446], 8);
      v21 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v21 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v22 = *(_OWORD *)&dword_140404A6C[283831317];
        *(_OWORD *)((char *)&dword_140404A6C[289301094] + v21) = *(_OWORD *)&dword_140404A6C[283831313];
        *(_OWORD *)((char *)&dword_140404A6C[289301098] + v21) = v22;
        v21 = dword_140404A6C[289301092] + 32;
        dword_140404A6C[289301092] += 32;
      }
      v23 = 16;
      v24 = dword_140404A6C[289301093];
      v25 = (int)(fabs(*(float *)&dword_140404A6C[283831482]) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v26 = v25 | 0x8000;
        if ( *(float *)&dword_140404A6C[283831482] >= 0.0 )
          v26 = v25;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v21) &= ~(((1 << v23) - 1) << v24);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v26 << SLOBYTE(dword_140404A6C[289301093]);
          v27 = 8 - dword_140404A6C[289301093];
          v21 = dword_140404A6C[289301092];
          if ( v23 < 8 - dword_140404A6C[289301093] )
            break;
          v24 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v23 == v27 )
          {
            v21 = ++dword_140404A6C[289301092];
            goto LABEL_38;
          }
          v21 = dword_140404A6C[289301092] + 1;
          v26 >>= v27;
          v23 -= v27;
          ++dword_140404A6C[289301092];
          if ( v23 <= 0 )
            goto LABEL_38;
        }
        v24 = v23 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v23;
      }
LABEL_38:
      v28 = 16;
      v29 = (int)(fabs(*(float *)&dword_140404A6C[283831483]) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v30 = v29 | 0x8000;
        if ( *(float *)&dword_140404A6C[283831483] >= 0.0 )
          v30 = v29;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v21) &= ~(((1 << v28) - 1) << v24);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
          v31 = 8 - dword_140404A6C[289301093];
          v21 = dword_140404A6C[289301092];
          if ( v28 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v28 == v31 )
          {
            v21 = ++dword_140404A6C[289301092];
            goto LABEL_47;
          }
          v21 = dword_140404A6C[289301092] + 1;
          v30 >>= v31;
          v28 -= v31;
          ++dword_140404A6C[289301092];
          v24 = 0;
          if ( v28 <= 0 )
            goto LABEL_47;
        }
        dword_140404A6C[289301093] += v28;
      }
LABEL_47:
      if ( dword_140404A6C[283831312] == 7 )
      {
        sub_140115D90(&dword_140404A6C[284022502], 8);
        v21 = dword_140404A6C[289301092];
      }
      v32 = *(_QWORD *)&dword_140404A6C[v18 + 438887407];
      v33 = v19 + v21;
      v34 = dword_140404A6C[v18 + 438887405];
      dword_140404A6C[456202456] = v21;
      v35 = dword_140404A6C[v18 + 438887406];
      dword_140404A6C[v18 + 438887412] = v33;
      sub_140130350(v34, v35, v32);
LABEL_238:
      v17 = v151;
      goto LABEL_239;
    }
    v36 = (int)dword_140404A6C[v18 + 438887411];
    v37 = dword_140404A6C[283831448];
    if ( (_DWORD)v36 == -1
      || (v38 = (int)dword_140404A6C[3597 * v36 + 71856292], (_DWORD)v38 == -1)
      || (v39 = 7166 * v38, (int)dword_140404A6C[7166 * v38 + 280651318] <= 0) )
    {
      v41 = &dword_140404A6C[v18 + 438920024];
      if ( dword_140404A6C[283831448] == 2 )
      {
        *v41 = dword_140404A6C[v18 + 438920021];
        v41[1] = dword_140404A6C[v18 + 438920022];
        v40 = dword_140404A6C[v18 + 438920023];
      }
      else
      {
        *(_QWORD *)v41 = 0;
        v40 = 0;
      }
    }
    else
    {
      v40 = dword_140404A6C[v39 + 280651337];
      v41 = &dword_140404A6C[v18 + 438920024];
      *v41 = dword_140404A6C[v39 + 280651335];
      v41[1] = dword_140404A6C[v39 + 280651336];
    }
    v41[2] = v40;
    dword_140404A6C[289301094] = dword_1402B2658;
    *(unsigned int *)((char *)&dword_140404A6C[289301096] + 1) = dword_140404A6C[283831474];
    *(_QWORD *)&dword_140404A6C[289301092] = 13;
    LOBYTE(dword_140404A6C[289301095]) = 5;
    *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = v20;
    sub_140115D90(&dword_140404A6C[283831448], 4);
    if ( v37 == 1 )
    {
      v42 = &dword_140404A6C[71856271];
      v43 = 32;
      do
      {
        sub_140115D90(v42, 1);
        v42 += 3597;
        --v43;
      }
      while ( v43 );
    }
    else if ( v37 != 3 )
    {
LABEL_64:
      v46 = dword_140404A6C[289301092];
      v47 = 24;
      v48 = dword_140404A6C[289301093];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v49 = dword_140404A6C[283831450] & 0xFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v47) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v49 << SLOBYTE(dword_140404A6C[289301093]);
          v50 = 8 - dword_140404A6C[289301093];
          v46 = dword_140404A6C[289301092];
          if ( v47 < 8 - dword_140404A6C[289301093] )
            break;
          v48 = v3;
          dword_140404A6C[289301093] = v3;
          if ( v47 == v50 )
          {
            v46 = ++dword_140404A6C[289301092];
            goto LABEL_72;
          }
          v46 = dword_140404A6C[289301092] + 1;
          v49 >>= v50;
          v47 -= v50;
          ++dword_140404A6C[289301092];
          if ( v47 <= 0 )
            goto LABEL_72;
        }
        v48 = v47 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v47;
      }
LABEL_72:
      v51 = 16;
      if ( v46 < 0x10000 )
      {
        v52 = LOWORD(dword_140404A6C[284022086]);
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v51) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v52 << SLOBYTE(dword_140404A6C[289301093]);
          v53 = 8 - dword_140404A6C[289301093];
          v46 = dword_140404A6C[289301092];
          if ( v51 < 8 - dword_140404A6C[289301093] )
            break;
          v48 = v3;
          dword_140404A6C[289301093] = v3;
          if ( v51 == v53 )
          {
            v46 = ++dword_140404A6C[289301092];
            goto LABEL_80;
          }
          v46 = dword_140404A6C[289301092] + 1;
          v52 >>= v53;
          v51 -= v53;
          ++dword_140404A6C[289301092];
          if ( v51 <= 0 )
            goto LABEL_80;
        }
        v48 = v51 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v51;
      }
LABEL_80:
      v54 = 30;
      if ( v46 < 0x10000 )
      {
        v55 = dword_140404A6C[179992853] & 0x3FFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v54) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v55 << SLOBYTE(dword_140404A6C[289301093]);
          v56 = 8 - dword_140404A6C[289301093];
          if ( v54 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = v3;
          if ( v54 == v56 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_88;
          }
          v54 -= v56;
          v46 = dword_140404A6C[289301092] + 1;
          v55 >>= v56;
          ++dword_140404A6C[289301092];
          v48 = v3;
          if ( v54 <= 0 )
            goto LABEL_88;
        }
        dword_140404A6C[289301093] += v54;
      }
LABEL_88:
      sub_140115D90(&dword_140404A6C[283831506], 6);
      sub_140115D90(&dword_140404A6C[283837379], 6);
      sub_140115D90(&dword_140404A6C[283843252], 6);
      sub_140115D90(&dword_140404A6C[283849125], 6);
      sub_140115D90(&dword_140404A6C[283854998], 6);
      v57 = dword_140404A6C[289301092];
      v58 = 8;
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v59 = dword_140404A6C[289301093];
        v60 = (unsigned __int8)v36;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v57) &= ~(((1 << v58) - 1) << v59);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v60 << SLOBYTE(dword_140404A6C[289301093]);
          v61 = 8 - dword_140404A6C[289301093];
          if ( v58 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = v3;
          if ( v58 == v61 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_96;
          }
          v58 -= v61;
          v57 = dword_140404A6C[289301092] + 1;
          v60 >>= v61;
          ++dword_140404A6C[289301092];
          v59 = v3;
          if ( v58 <= 0 )
            goto LABEL_96;
        }
        dword_140404A6C[289301093] += v58;
      }
LABEL_96:
      v62 = 3597 * v36;
      v63 = &dword_140404A6C[3597 * v36 + 71856292];
      sub_140115D90(v63, 10);
      v146 = 0;
      v147 = 0;
      if ( (_DWORD)v36 != -1 )
      {
        v64 = (int)*v63;
        if ( (_DWORD)v64 != -1 )
        {
          dword_140404A6C[v62 + 71856327] = dword_140404A6C[7166 * v64 + 280651341];
          dword_140404A6C[v62 + 71856328] = dword_140404A6C[7166 * *v63 + 280651342];
          v65 = 7166LL * (int)*v63;
          v146 = *(_QWORD *)&dword_140404A6C[v65 + 280651680];
          v147 = dword_140404A6C[v65 + 280651682];
        }
      }
      v66 = (int)*v63;
      if ( (_DWORD)v66 != -1 )
      {
        v67 = 28664 * v66;
        v68 = dword_140404A6C[289301092];
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            v68 = dword_140404A6C[289301092] + 1;
            dword_140404A6C[289301093] = v3;
            ++dword_140404A6C[289301092];
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v68) = dword_140404A6C[v67 / 4 + 280651341];
          v69 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v69;
          if ( v69 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v69;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v69;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v69) = dword_140404A6C[v67 / 4 + 280651342];
            v70 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] = v70;
            if ( v70 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v70;
                dword_140404A6C[289301093] = v3;
                dword_140404A6C[289301092] = v70;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v70) = dword_140404A6C[v67 / 4 + 280651365];
              v71 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v71;
              if ( v71 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v71;
                  dword_140404A6C[289301093] = v3;
                  dword_140404A6C[289301092] = v71;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v71) = dword_140404A6C[v67 / 4 + 280651366];
                v72 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] = v72;
                if ( v72 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v72;
                    dword_140404A6C[289301093] = v3;
                    dword_140404A6C[289301092] = v72;
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[289301094] + v72) = dword_140404A6C[v67 / 4 + 280651357];
                  dword_140404A6C[289301092] += 4;
                }
              }
            }
          }
        }
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818692), 1);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818688), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846696), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846704), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846708), 4);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846712), 4);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846692), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846552), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846564), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846572), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846580), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846588), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846596), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846604), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818596), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818600), 8);
      }
      v73 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v73 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = v3;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v73) = v146;
        v74 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v74;
        if ( v74 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v74;
            dword_140404A6C[289301093] = v3;
            dword_140404A6C[289301092] = v74;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v74) = HIDWORD(v146);
          v75 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v75;
          if ( v75 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v75;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v75;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v75) = v147;
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856289], 1);
      sub_140115D90(&dword_140404A6C[v62 + 71856342], 8);
      sub_140115D90(&dword_140404A6C[v62 + 71856343], 16);
      if ( dword_140404A6C[v62 + 71856342] == 10 )
      {
        v76 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 56076LL * (int)dword_140404A6C[v62 + 71856343] + 906829868);
        sub_140115D90(v76, 8);
        if ( *v76 > 0 )
        {
          v77 = (unsigned int)*v76;
          v78 = &dword_140404A6C[14019 * dword_140404A6C[v62 + 71856343] + 225654130];
          do
          {
            sub_140115D90(v78 - 1, 8);
            sub_140115D90(v78, 24);
            sub_140115D90(v78 + 1, 4);
            v78 += 3;
            --v77;
          }
          while ( v77 );
        }
      }
      v79 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v79 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = v3;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v79) = dword_140404A6C[v62 + 71856272];
        v80 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v80;
        if ( v80 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v80;
            dword_140404A6C[289301093] = v3;
            dword_140404A6C[289301092] = v80;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v80) = dword_140404A6C[v62 + 71856273];
          v81 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v81;
          if ( v81 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v81;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v81;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v81) = dword_140404A6C[v62 + 71856274];
            v82 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] = v82;
            if ( v82 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v82;
                dword_140404A6C[289301093] = v3;
                dword_140404A6C[289301092] = v82;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v82) = dword_140404A6C[v62 + 71856275];
              v83 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v83;
              if ( v83 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v83;
                  dword_140404A6C[289301093] = v3;
                  dword_140404A6C[289301092] = v83;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v83) = dword_140404A6C[v62 + 71856276];
                dword_140404A6C[289301092] += 4;
              }
            }
          }
        }
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856291], 16);
      sub_140115D90(&dword_140404A6C[v62 + 71856362], 8);
      sub_140115D90(&dword_140404A6C[v62 + 71857711], 10);
      sub_140115D90(&dword_140404A6C[v62 + 71857712], 6);
      sub_140115D90(&dword_140404A6C[v62 + 71857713], 8);
      v84 = 7;
      v85 = (int *)&dword_140404A6C[v62 + 71857714];
      do
      {
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71857714] + v3 + v62 * 4), 4);
        if ( *v85 > 0 )
        {
          v86 = (unsigned int *)((char *)&dword_140404A6C[v62 + 71857715] + v3);
          v87 = (unsigned int)*v85;
          do
          {
            sub_140115D90(v86++, 16);
            --v87;
          }
          while ( v87 );
        }
        v3 += 36;
        v85 += 9;
        --v84;
      }
      while ( v84 );
      sub_140115D90(&dword_140404A6C[v62 + 71857986], 8);
      v88 = dword_140404A6C[v62 + 71857986];
      if ( v88 > 0 )
      {
        v89 = dword_140404A6C[289301093];
        v90 = dword_140404A6C[289301092];
        v91 = 0;
        v92 = (unsigned int)v88;
        do
        {
          v93 = v62 * 4 + 72 * v91;
          if ( v90 < 0x10000 )
          {
            if ( v89 > 0 )
            {
              ++v90;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v90;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v90) = *(unsigned int *)((char *)&dword_140404A6C[71857987]
                                                                                           + v93);
            v89 = dword_140404A6C[289301093];
            v90 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] += 4;
          }
          v94 = -1;
          do
            ++v94;
          while ( *((_BYTE *)&dword_140404A6C[71857988] + v93 + v94) );
          v95 = v94 & 0x3F;
          v96 = 6;
          if ( v90 < 0x10000 )
          {
            v97 = v95;
            while ( 1 )
            {
              *((_BYTE *)&dword_140404A6C[289301094] + v90) &= ~(((1 << v96) - 1) << v89);
              *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v97 << SLOBYTE(dword_140404A6C[289301093]);
              v98 = 8 - dword_140404A6C[289301093];
              v90 = dword_140404A6C[289301092];
              if ( v96 < 8 - dword_140404A6C[289301093] )
                break;
              v89 = 0;
              dword_140404A6C[289301093] = 0;
              if ( v96 == v98 )
              {
                v90 = ++dword_140404A6C[289301092];
                goto LABEL_168;
              }
              v90 = dword_140404A6C[289301092] + 1;
              v97 >>= v98;
              v96 -= v98;
              ++dword_140404A6C[289301092];
              if ( v96 <= 0 )
                goto LABEL_168;
            }
            v89 = v96 + dword_140404A6C[289301093];
            dword_140404A6C[289301093] += v96;
LABEL_168:
            if ( v90 < 0x10000 )
            {
              if ( v89 > 0 )
              {
                ++v90;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v90;
              }
              sub_1401FC920(
                (__m128i *)((char *)&dword_140404A6C[289301094] + v90),
                (     __m128i *)((char *)&dword_140404A6C[71857988] + v93),
                v95);
              v89 = dword_140404A6C[289301093];
              v90 = v95 + dword_140404A6C[289301092];
              dword_140404A6C[289301092] = v90;
              if ( v90 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v90;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v90;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v90) = *(unsigned int *)((char *)&dword_140404A6C[71858004]
                                                                                               + v93);
                v89 = dword_140404A6C[289301093];
                v90 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] += 4;
              }
            }
          }
          ++v91;
          --v92;
        }
        while ( v92 );
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856282], 8);
      sub_140110D00(v148, v36);
      sub_14002DB60(v148, dword_140404A6C[v143 + 438887411]);
      v99 = 8;
      v100 = &dword_140404A6C[v143 + 438887429];
      v144 = 47224LL * v148;
      v152 = &dword_140404A6C[v143 + 438887429];
      v101 = &dword_140404A6C[v144 + 438887429];
      v142 = 8;
      v150 = &dword_140404A6C[v144 + 438887429];
      do
      {
        sub_140115D90(v101 - 1, 1);
        if ( !*(v100 - 1) )
          goto LABEL_194;
        sub_140115D90(v101, 8);
        sub_140115D90(v101 + 1, 8);
        sub_140115D90(v101 + 2, 8);
        v102 = (int)*v100;
        v103 = 32901 * v102;
        v104 = dword_140404A6C[32901 * v102 + 299853696] & 0x3F;
        dword_140404A6C[32901 * v102 + 299853696] = v104;
        v105 = ((_BYTE)v104 - 4) & 0x3F;
        if ( (_DWORD)v105 == v104 )
        {
LABEL_194:
          v106 = dword_140404A6C[289301092];
        }
        else
        {
          v106 = dword_140404A6C[289301092];
          v107 = 32901 * v102;
          do
          {
            v108 = 6;
            if ( v106 < 0x10000 )
            {
              v109 = dword_140404A6C[289301093];
              v110 = v105;
              while ( 1 )
              {
                *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v108) - 1) << v109);
                *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v110 << SLOBYTE(dword_140404A6C[289301093]);
                v111 = 8 - dword_140404A6C[289301093];
                if ( v108 < 8 - dword_140404A6C[289301093] )
                  break;
                dword_140404A6C[289301093] = 0;
                if ( v108 == v111 )
                {
                  ++dword_140404A6C[289301092];
                  goto LABEL_188;
                }
                v108 -= v111;
                v106 = dword_140404A6C[289301092] + 1;
                v110 >>= v111;
                ++dword_140404A6C[289301092];
                v109 = 0;
                if ( v108 <= 0 )
                  goto LABEL_188;
              }
              dword_140404A6C[289301093] += v108;
            }
LABEL_188:
            sub_140115D90(&dword_140404A6C[v107 + 299853762 + v105], 11);
            sub_140115D90(&dword_140404A6C[v107 + 299853698 + v105], 2);
            v112 = (int)dword_140404A6C[v107 + 299853762 + v105];
            v106 = dword_140404A6C[289301092];
            if ( (int)dword_140404A6C[289301092] < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                v106 = dword_140404A6C[289301092] + 1;
                dword_140404A6C[289301093] = 0;
                ++dword_140404A6C[289301092];
              }
              sub_1401FC920(
                (__m128i *)((char *)&dword_140404A6C[289301094] + v106),
                (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)v105 + 299853826 + v103],
                v112);
              v106 = v112 + dword_140404A6C[289301092];
              dword_140404A6C[289301092] += v112;
            }
            v105 = ((_BYTE)v105 + 1) & 0x3F;
          }
          while ( (_DWORD)v105 != v104 );
          v101 = v150;
          v100 = v152;
          v99 = v142;
        }
        v101 += 10;
        v100 += 10;
        --v99;
        v150 = v101;
        v142 = v99;
        v152 = v100;
      }
      while ( v99 );
      v113 = dword_140404A6C[308307070];
      v114 = 16;
      v115 = dword_140404A6C[289301093];
      if ( v106 < 0x10000 )
      {
        v116 = LOWORD(dword_140404A6C[308307070]);
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v114) - 1) << v115);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v116 << SLOBYTE(dword_140404A6C[289301093]);
          v117 = 8 - dword_140404A6C[289301093];
          v106 = dword_140404A6C[289301092];
          if ( v114 < 8 - dword_140404A6C[289301093] )
            break;
          v115 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v114 == v117 )
          {
            v106 = ++dword_140404A6C[289301092];
            goto LABEL_204;
          }
          v106 = dword_140404A6C[289301092] + 1;
          v116 >>= v117;
          v114 -= v117;
          ++dword_140404A6C[289301092];
          if ( v114 <= 0 )
            goto LABEL_204;
        }
        v115 = v114 + dword_140404A6C[289301093];
        dword_140404A6C[289301093] += v114;
      }
LABEL_204:
      LOBYTE(v99) = 0;
      v118 = dword_140404A6C[v143 + 438887424];
      v119 = v113 - v118 + 0x10000;
      if ( v113 >= v118 )
        v119 = v113 - v118;
      if ( v119 > 63 )
        v119 = 63;
      v120 = 6;
      if ( !dword_140404A6C[456202445] )
        v119 = 0;
      if ( v106 < 0x10000 )
      {
        v121 = v115;
        v122 = v119 & 0x3F;
        v123 = v106;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v123) &= ~(((1 << v120) - 1) << v121);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v122 << SLOBYTE(dword_140404A6C[289301093]);
          v124 = 8 - dword_140404A6C[289301093];
          if ( v120 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v120 == v124 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_218;
          }
          v120 -= v124;
          v123 = dword_140404A6C[289301092] + 1;
          v122 >>= v124;
          ++dword_140404A6C[289301092];
          v121 = 0;
          if ( v120 <= 0 )
            goto LABEL_218;
        }
        dword_140404A6C[289301093] += v120;
      }
LABEL_218:
      v125 = 47224LL * v148;
      sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v144 * 4 + 1759763052), 16);
      v15 = v148;
      if ( v119 > 0 )
      {
        v126 = (unsigned int)v119;
        LOBYTE(v99) = v119;
        do
        {
          sub_14010EFF0(v118, v148);
          v118 = (unsigned __int16)(v118 + 1);
          --v126;
        }
        while ( v126 );
        v125 = 47224LL * v148;
      }
      v127 = dword_140404A6C[289301092];
      v128 = dword_140404A6C[289301093];
      v129 = 6;
      dword_140404A6C[v143 + 438887424] = v118;
      dword_140404A6C[289301092] = v106;
      dword_140404A6C[289301093] = v115;
      if ( v106 < 0x10000 )
      {
        do
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v129) - 1) << v115);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v99 << SLOBYTE(dword_140404A6C[289301093]);
          v130 = 8 - dword_140404A6C[289301093];
          if ( v129 <= 8 - dword_140404A6C[289301093] )
            break;
          v129 -= v130;
          v106 = dword_140404A6C[289301092] + 1;
          LODWORD(v99) = (unsigned int)v99 >> v130;
          ++dword_140404A6C[289301092];
          LOBYTE(v115) = 0;
          dword_140404A6C[289301093] = 0;
        }
        while ( v129 > 0 );
        v15 = v148;
      }
      dword_140404A6C[289301092] = v127;
      dword_140404A6C[289301093] = v128;
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          dword_140404A6C[289301092] = ++v127;
          dword_140404A6C[289301093] = 0;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934627];
        v128 = dword_140404A6C[289301093];
        v127 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      ++dword_140404A6C[v143 + 438934627];
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          dword_140404A6C[289301092] = ++v127;
          dword_140404A6C[289301093] = 0;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934625];
        v127 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v127;
        if ( v127 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v127;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v127;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934626];
          v127 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] += 4;
        }
      }
      dword_140404A6C[v143 + 438887412] += v127;
      v131 = dword_140404A6C[v143 + 438887406];
      v132 = dword_140404A6C[v143 + 438887405];
      dword_140404A6C[456202456] = v127;
      sub_140130350(v132, v131, *(_QWORD *)&dword_140404A6C[v143 + 438887407]);
      v3 = 0;
      goto LABEL_238;
    }
    v44 = &dword_140404A6C[284023018];
    v3 = 3;
    v45 = &dword_140404A6C[283831505];
    do
    {
      sub_140115D90(v45, 16);
      sub_140115D90(v44, 16);
      v45 += 5873;
      ++v44;
      --v3;
    }
    while ( v3 );
    goto LABEL_64;
  }
LABEL_240:
  v133 = 0;
  v149 = 0;
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v134 = &dword_140404A6C[438887407];
    do
    {
      if ( v134[3] && (((unsigned __int8)v133 ^ LOBYTE(dword_140404A6C[283831474])) & 0x7F) == 0 )
      {
        v135 = &dword_140404A6C[438881245];
        dword_140404A6C[289301094] = dword_1402B2658;
        v136 = &dword_140404A6C[438881247];
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        v137 = 256;
        LOBYTE(dword_140404A6C[289301095]) = 9;
        do
        {
          sub_140115D90(v136 - 2, 1);
          if ( *v135 )
          {
            v138 = dword_140404A6C[289301092];
            if ( (int)dword_140404A6C[289301092] < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                v138 = dword_140404A6C[289301092] + 1;
                dword_140404A6C[289301093] = 0;
                ++dword_140404A6C[289301092];
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v138) = *v136;
              v139 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v139;
              if ( v139 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v139;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v139;
                }
                v140 = *(_OWORD *)(v136 + 5);
                *(_OWORD *)((char *)&dword_140404A6C[289301094] + v139) = *(_OWORD *)(v136 + 1);
                *(_OWORD *)((char *)&dword_140404A6C[289301098] + v139) = v140;
                v141 = dword_140404A6C[289301092] + 32;
                dword_140404A6C[289301092] = v141;
                if ( v141 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v141;
                    dword_140404A6C[289301093] = 0;
                    dword_140404A6C[289301092] = v141;
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[289301094] + v141) = v136[17];
                  dword_140404A6C[289301092] += 4;
                }
              }
            }
          }
          v136 += 20;
          v135 += 20;
          --v137;
        }
        while ( v137 );
        sub_140130350(*(v134 - 2), *((_WORD *)v134 - 2), *(_QWORD *)v134);
        v133 = v149;
      }
      ++v133;
      v134 += 47224;
      v149 = v133;
    }
    while ( v133 < (int)dword_140404A6C[456202445] );
  }
}
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152

// 140137AE6: masking with 0x3F was optimized away because esi.4 <= 0x3F
// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAC0: using guessed type unsigned int;
// 183EBFCC8: using guessed type unsigned int;
// 183EBFCCC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADCC: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (0000000140137E90) ----------------------------------------------------
void            sub_140137E90(int a1)
{
  unsigned int *v1; // rdi
  unsigned int *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  signed int v5; // eax
  signed int v6; // eax
  __int128 v7; // xmm1
  signed int v8; // eax

  v1 = &dword_140404A6C[438881245];
  dword_140404A6C[289301094] = dword_1402B2658;
  v2 = &dword_140404A6C[438881247];
  v3 = a1;
  *(_QWORD *)&dword_140404A6C[289301092] = 5;
  LOBYTE(dword_140404A6C[289301095]) = 9;
  v4 = 256;
  do
  {
    sub_140115D90(v2 - 2, 1);
    if ( *v1 )
    {
      v5 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v5 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v5) = *v2;
        v6 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v6;
        if ( v6 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v6;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v6;
          }
          v7 = *(_OWORD *)(v2 + 5);
          *(_OWORD *)((char *)&dword_140404A6C[289301094] + v6) = *(_OWORD *)(v2 + 1);
          *(_OWORD *)((char *)&dword_140404A6C[289301098] + v6) = v7;
          v8 = dword_140404A6C[289301092] + 32;
          dword_140404A6C[289301092] = v8;
          if ( v8 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v8;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v8;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v8) = v2[17];
            dword_140404A6C[289301092] += 4;
          }
        }
      }
    }
    v2 += 20;
    v1 += 20;
    --v4;
  }
  while ( v4 );
  sub_140130350(
    dword_140404A6C[47224 * v3 + 438887405],
    dword_140404A6C[47224 * v3 + 438887406],
    *(_QWORD *)&dword_140404A6C[47224 * v3 + 438887407]);
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;

//----- (0000000140138020) ----------------------------------------------------
__int64 sub_140138020()
{
  __int64 v0; // rax
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140138020[16];
#define ProcessAffinityMask (*(__int64 (*))(void *)(sr_frame_140138020 + 0)) /* [rsp+30h] */
#define SystemAffinityMask (*(__int64 (*))(void *)(sr_frame_140138020 + 8)) /* [rsp+38h] */

  v0 = ((__int64 (*)(void))GetCurrentProcess)();
  result = ((__int64 (           *)(__int64, __int64 *, __int64 *))GetProcessAffinityMask)(
             v0,
             &ProcessAffinityMask,
             &SystemAffinityMask);
  if ( (_DWORD)result )
  {
    if ( (ProcessAffinityMask & 1) != 0 )
    {
      v2 = ((__int64 (*)(void))GetCurrentProcess)();
      ((void (           *)(__int64, __int64))SetProcessAffinityMask)(v2, 1);
      v3 = ((__int64 (*)(void))GetCurrentProcess)();
      return ((__int64 (           *)(__int64, __int64 *, __int64 *))GetProcessAffinityMask)(
               v3,
               &ProcessAffinityMask,
               &SystemAffinityMask);
    }
  }
  return result;
}
#undef ProcessAffinityMask
#undef SystemAffinityMask

// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2F0: invalid function type 'BOOL (__stdcall *GetProcessAffinityMask)(HANDLE hProcess, PDWORD_PTR lpProcessAffinityMask, PDWORD_PTR lpSystemAffinityMask)' has been ignored
// 14026E2E8: invalid function type 'BOOL (__stdcall *SetProcessAffinityMask)(HANDLE hProcess, DWORD_PTR dwProcessAffinityMask)' has been ignored

//----- (00000001401380F0) ----------------------------------------------------
__int64            sub_1401380F0(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // xmm0_4
  float v6; // xmm4_4
  unsigned int v7; // xmm1_4
  unsigned int v8; // eax
  float v9; // xmm0_4
  unsigned int v10; // eax
  unsigned int v11; // xmm4_4
  float v12; // xmm0_4
  __int64 v13; // rax
  unsigned int *v14; // rcx
  unsigned int v15; // xmm2_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  __int64 v18; // rcx

  result = a1;
  v3 = 1760LL * a1;
  if ( dword_140404A6C[v3 + 278845904] > 1 )
  {
    v4 = 7166LL * a2;
    *(float *)&v5 = -*(float *)&dword_140404A6C[v4 + 280651614];
    v6 = *(float *)&dword_140404A6C[v4 + 280651596];
    *(float *)&v7 = -*(float *)&dword_140404A6C[v4 + 280651616];
    dword_140404A6C[v3 + 278845934] = dword_140404A6C[v4 + 280651608];
    dword_140404A6C[v3 + 278845935] = dword_140404A6C[v4 + 280651609];
    dword_140404A6C[v3 + 278845936] = dword_140404A6C[v4 + 280651610];
    v8 = dword_140404A6C[v4 + 280651611];
    dword_140404A6C[v3 + 278845937] = v5;
    v9 = *(float *)&dword_140404A6C[v4 + 280651615];
    dword_140404A6C[v3 + 278845939] = v7;
    *(float *)&dword_140404A6C[v3 + 278845938] = -v9;
    dword_140404A6C[v3 + 278845940] = v8;
    dword_140404A6C[v3 + 278845941] = dword_140404A6C[v4 + 280651612];
    dword_140404A6C[v3 + 278845942] = dword_140404A6C[v4 + 280651613];
    v10 = dword_140404A6C[v4 + 280651440];
    *(float *)&v11 = v6 - (float)(*(float *)&dword_140404A6C[v3 + 278845937] * 0.25);
    v12 = *(float *)&dword_140404A6C[v4 + 280651597];
    dword_140404A6C[v3 + 278845916] = v11;
    *(float *)&dword_140404A6C[v3 + 278845917] = v12 - (float)(*(float *)&dword_140404A6C[v3 + 278845938] * 0.25);
    *(float *)&dword_140404A6C[v3 + 278845918] = *(float *)&dword_140404A6C[v4 + 280651598]
                                               - (float)(*(float *)&dword_140404A6C[v3 + 278845939] * 0.25);
    *(float *)&dword_140404A6C[v3 + 278845916] = (float)(*(float *)&dword_140404A6C[v3 + 278845934] * 0.125)
                                               + *(float *)&v11;
    *(float *)&dword_140404A6C[v3 + 278845917] = (float)(*(float *)&dword_140404A6C[v3 + 278845935] * 0.125)
                                               + *(float *)&dword_140404A6C[v3 + 278845917];
    *(float *)&dword_140404A6C[v3 + 278845918] = (float)(*(float *)&dword_140404A6C[v3 + 278845936] * 0.125)
                                               + *(float *)&dword_140404A6C[v3 + 278845918];
    dword_140404A6C[v3 + 278845919] = v10;
    dword_140404A6C[v3 + 278845920] = dword_140404A6C[v4 + 280651441];
    dword_140404A6C[v3 + 278845921] = dword_140404A6C[v4 + 280651442];
    v13 = (int)dword_140404A6C[v4 + 280651313];
    if ( (_DWORD)v13 != -1 )
    {
      v14 = &dword_140404A6C[5210 * v13 + 129716720];
      dword_140404A6C[v3 + 278845919] = *v14;
      dword_140404A6C[v3 + 278845920] = v14[1];
      dword_140404A6C[v3 + 278845921] = v14[2];
    }
    v15 = dword_140404A6C[v4 + 280651446];
    v16 = dword_140404A6C[v4 + 280651447];
    v17 = dword_140404A6C[v4 + 280651448];
    dword_140404A6C[v3 + 278845925] = v15;
    dword_140404A6C[v3 + 278845926] = v16;
    dword_140404A6C[v3 + 278845927] = v17;
    v18 = 47LL * (int)dword_140404A6C[v3 + 278845915];
    dword_140404A6C[v18 + 18215718] = v15;
    dword_140404A6C[v18 + 18215719] = v16;
    dword_140404A6C[v18 + 18215720] = v17;
    *(_QWORD *)&dword_140404A6C[v18 + 18215733] = 0;
    *(_QWORD *)&dword_140404A6C[v18 + 18215735] = 0;
    *(_QWORD *)&dword_140404A6C[v18 + 18215737] = 0;
    return 0;
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140138430) ----------------------------------------------------
__int64            sub_140138430(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rcx

  v3 = a2;
  if ( a1 != -1 )
  {
    v4 = 3597LL * a1;
    v5 = (int)dword_140404A6C[v4 + 71856286];
    if ( (_DWORD)v5 != a2 )
    {
      if ( (unsigned int)v5 <= 5 && dword_140404A6C[5873 * v5 + 283831510] == a1 )
      {
        if ( dword_140404A6C[283831312] == 4 )
        {
          sub_140194C10(v5);
          LODWORD(v5) = dword_140404A6C[v4 + 71856286];
        }
        result = (int)v5;
        dword_140404A6C[5873 * (int)v5 + 283831510] = -1;
      }
      v7 = (int)dword_140404A6C[v4 + 71856292];
      dword_140404A6C[v4 + 71856286] = v3;
      if ( (unsigned int)v3 <= 5 )
      {
        v8 = dword_140404A6C[v4 + 71859822];
        dword_140404A6C[v4 + 71859821] = 1;
        if ( ((v8 - 3) & 0xFFFFFFFA) != 0 || v8 == 4 )
          dword_140404A6C[v4 + 71859822] = dword_1402B2980[v3];
        result = (unsigned int)dword_1402B29A0[v3];
        dword_140404A6C[v4 + 71859823] = result;
      }
      if ( (_DWORD)v3 == 17 )
      {
        v9 = dword_140404A6C[v4 + 71859822];
        dword_140404A6C[v4 + 71859821] = 0;
        result = v9 - 3;
        if ( (result & 0xFFFFFFFA) != 0 || v9 == 4 )
          dword_140404A6C[v4 + 71859822] = 0;
        dword_140404A6C[v4 + 71859823] = 0;
      }
      if ( (_DWORD)v7 != -1 )
      {
        v10 = dword_140404A6C[v4 + 71859821];
        v11 = 7166 * v7;
        ++dword_140404A6C[v7 + 282485789];
        dword_140404A6C[v11 + 280658445] = v10;
        dword_140404A6C[v11 + 280658446] = dword_140404A6C[v4 + 71859822];
        result = dword_140404A6C[v4 + 71859823];
        dword_140404A6C[v11 + 280658447] = result;
      }
    }
  }
  return result;
}

// 1402B2980: using guessed type int dword_1402B2980[8];
// 1402B29A0: using guessed type int dword_1402B29A0[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140138590) ----------------------------------------------------
__int64            sub_140138590(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int *v11; // rbx
  __int64 v12; // rax
  signed int v13; // r9d
  signed int i; // ecx
  signed int v15; // eax

  v11 = &dword_140404A6C[44 * a1 + 284024933];
  v11[1] = 1;
  *v11 = 1;
  v11[7] = a5;
  v11[8] = a6;
  v11[2] = 1;
  v11[3] = 6408;
  v11[4] = 6408;
  v11[10] = 0;
  v11[5] = a3;
  v11[6] = a4;
  free(*((void **)v11 + 6));
  v12 = sr_path_malloc((int)(4 * *v11 * v11[1]));
  v13 = 0;
  for ( *((_QWORD *)v11 + 6) = v12; v13 < (int)v11[1]; ++v13 )
  {
    for ( i = 0; i < (int)*v11; *(_DWORD *)(*((_QWORD *)v11 + 6) + 4LL * v15) = (a10 << 24)
                                                                              + a7
                                                                              + (a9 << 16)
                                                                              + (a8 << 8) )
    {
      v15 = i + v13 * *v11;
      ++i;
    }
  }
  sub_14014D3E0(a1, 0);
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401386C0) ----------------------------------------------------
__int64            sub_1401386C0(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v11; // ebx
  unsigned int v12; // edi

  v11 = a4;
  v12 = a3;
  unk_1404041E0(1029, a1, a3, a4);
  unk_1404041E8(1029, 0xFFFFFFFFLL);
  unk_1404041D8(1029, a5, a6, a7);
  unk_1404041E0(1028, a2, v12, v11);
  unk_1404041E8(1028, 0xFFFFFFFFLL);
  return unk_1404041D8(1028, a8, a9, a10);
}

// 1404041D8: using guessed type __int64 (__fastcall *unk_1404041D8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041E0: using guessed type __int64 (__fastcall *unk_1404041E0)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041E8: using guessed type __int64 (__fastcall *unk_1404041E8)(_QWORD, _QWORD);

//----- (0000000140138770) ----------------------------------------------------
unsigned int *sub_140138770()
{
  unsigned int *v0; // rax
  __int64 v1; // rcx
  unsigned int *result; // rax
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm4_4

  *(_OWORD *)&dword_140404A6C[282486052] = xmmword_1402792B0;
  dword_140404A6C[282486045] = 0;
  dword_140404A6C[282486050] = -1107296256;
  *(_OWORD *)&dword_140404A6C[282486077] = xmmword_1402792B0;
  dword_140404A6C[282486051] = 0;
  *(_OWORD *)&dword_140404A6C[282486102] = xmmword_1402792B0;
  dword_140404A6C[282486056] = 1096810496;
  *(_OWORD *)&dword_140404A6C[282486046] = 0;
  dword_140404A6C[282486070] = 0;
  *(_OWORD *)&dword_140404A6C[282486127] = xmmword_1402792D0;
  *(_QWORD *)&dword_140404A6C[282486075] = 1040187392;
  *(_OWORD *)&dword_140404A6C[282486071] = xmmword_140278D50;
  dword_140404A6C[282486081] = 1096810496;
  *(_OWORD *)&dword_140404A6C[282486096] = xmmword_140278D50;
  dword_140404A6C[282486095] = 1;
  *(_OWORD *)&dword_140404A6C[282486302] = xmmword_1402792C0;
  *(_QWORD *)&dword_140404A6C[282486100] = 1040187392;
  *(_OWORD *)&dword_140404A6C[282486327] = xmmword_1402792C0;
  dword_140404A6C[282486106] = 1096810496;
  *(_OWORD *)&dword_140404A6C[282486121] = xmmword_140278D60;
  dword_140404A6C[282486120] = 2;
  dword_140404A6C[282486131] = 1090519040;
  *(_OWORD *)&dword_140404A6C[282486296] = xmmword_1402798A0;
  *(_QWORD *)&dword_140404A6C[282486125] = 1044381696;
  dword_140404A6C[282486295] = 0;
  *(_OWORD *)&dword_140404A6C[282486321] = xmmword_140278DD0;
  *(_QWORD *)&dword_140404A6C[282486300] = 0;
  *(_OWORD *)&dword_140404A6C[282486352] = xmmword_1402792E0;
  dword_140404A6C[282486306] = 1094713344;
  *(_OWORD *)&dword_140404A6C[282486346] = xmmword_140278EA0;
  dword_140404A6C[282486320] = 10;
  dword_140404A6C[282486325] = -1098907648;
  dword_140404A6C[282486397] = -1090519040;
  *(_OWORD *)&dword_140404A6C[282486427] = xmmword_1402792E0;
  dword_140404A6C[282486326] = 0;
  dword_140404A6C[282486423] = -1115684864;
  dword_140404A6C[282486331] = 1088421888;
  dword_140404A6C[282486345] = 11;
  dword_140404A6C[282486350] = -1098907648;
  dword_140404A6C[282486351] = 0;
  dword_140404A6C[282486356] = 1077936128;
  dword_140404A6C[282486370] = 0;
  *(_OWORD *)&dword_140404A6C[282486377] = xmmword_1402792C0;
  dword_140404A6C[282486372] = -1098907648;
  dword_140404A6C[282486373] = 0;
  dword_140404A6C[282486371] = 1035993088;
  *(_QWORD *)&dword_140404A6C[282486375] = 0;
  dword_140404A6C[282486374] = 1035993088;
  dword_140404A6C[282486381] = 1094713344;
  dword_140404A6C[282486395] = 13;
  *(_OWORD *)&dword_140404A6C[282486402] = xmmword_1402792C0;
  dword_140404A6C[282486398] = 0;
  dword_140404A6C[282486396] = 0x80000000;
  dword_140404A6C[282486400] = -1098907648;
  dword_140404A6C[282486401] = 0;
  dword_140404A6C[282486399] = 0x80000000;
  dword_140404A6C[282486406] = 1088421888;
  dword_140404A6C[282486420] = 14;
  dword_140404A6C[282486422] = -1098907648;
  dword_140404A6C[282486421] = 0x80000000;
  dword_140404A6C[282486425] = -1098907648;
  v0 = &dword_140404A6C[282486080];
  *(_OWORD *)&dword_140404A6C[282486152] = xmmword_1402792A0;
  v1 = 4;
  dword_140404A6C[282486426] = 0;
  *(_OWORD *)&dword_140404A6C[282486177] = xmmword_1402792A0;
  dword_140404A6C[282486424] = 0x80000000;
  *(_OWORD *)&dword_140404A6C[282486202] = xmmword_140279290;
  dword_140404A6C[282486431] = 1077936128;
  dword_140404A6C[282486222] = -1110441984;
  *(_OWORD *)&dword_140404A6C[282486146] = xmmword_1402798B0;
  dword_140404A6C[282486145] = 2;
  *(_OWORD *)&dword_140404A6C[282486171] = xmmword_140278DC0;
  *(_QWORD *)&dword_140404A6C[282486150] = 1031798784;
  *(_OWORD *)&dword_140404A6C[282486196] = xmmword_140278DB0;
  dword_140404A6C[282486156] = 1077936128;
  dword_140404A6C[282486160] = 1052770304;
  dword_140404A6C[282486247] = -1096286208;
  *(_OWORD *)&dword_140404A6C[282486277] = xmmword_140279290;
  dword_140404A6C[282486170] = 4;
  dword_140404A6C[282486272] = -1100480512;
  dword_140404A6C[282486175] = -1104674816;
  dword_140404A6C[282486176] = 0;
  dword_140404A6C[282486181] = 1075838976;
  dword_140404A6C[282486195] = 5;
  dword_140404A6C[282486200] = -1104674816;
  dword_140404A6C[282486201] = 0;
  dword_140404A6C[282486206] = 1069547520;
  dword_140404A6C[282486220] = 2;
  *(_OWORD *)&dword_140404A6C[282486227] = xmmword_1402792A0;
  dword_140404A6C[282486223] = 0;
  dword_140404A6C[282486221] = 1044381696;
  *(_QWORD *)&dword_140404A6C[282486225] = 1031798784;
  dword_140404A6C[282486224] = 1044381696;
  dword_140404A6C[282486231] = 1077936128;
  dword_140404A6C[282486245] = 7;
  *(_OWORD *)&dword_140404A6C[282486252] = xmmword_1402792A0;
  dword_140404A6C[282486248] = 0;
  dword_140404A6C[282486246] = 0x80000000;
  dword_140404A6C[282486250] = -1104674816;
  dword_140404A6C[282486251] = 0;
  dword_140404A6C[282486249] = 0x80000000;
  dword_140404A6C[282486256] = 1075838976;
  dword_140404A6C[282486270] = 8;
  dword_140404A6C[282486273] = 0;
  dword_140404A6C[282486271] = 0x80000000;
  dword_140404A6C[282486275] = -1104674816;
  dword_140404A6C[282486276] = 0;
  dword_140404A6C[282486274] = 0x80000000;
  dword_140404A6C[282486281] = 1069547520;
  do
    v0 += 200;
  while ( (__int64)v0 < (__int64)&dword_140404A6C[282486480] );
  result = &dword_140404A6C[282486077];
  do
  {
    v3 = *((float *)result - 25);
    v4 = (float)(*((float *)result - 23) + *((float *)result - 23)) + v3;
    v5 = (float)(*((float *)result - 24) + *((float *)result - 24)) + v3;
    v6 = (float)(*((float *)result - 22) + *((float *)result - 22)) + v3;
    v7 = v4 * v4;
    v8 = v6 * v6;
    *((float *)result - 20) = 9.0 / (float)(v7 + v8);
    *((float *)result - 19) = 9.0 / (float)((float)(v5 * v5) + v8);
    *((float *)result - 18) = 9.0 / (float)((float)(v5 * v5) + v7);
    *((_QWORD *)result - 8) = 0;
    *(_QWORD *)(result - 13) = 0;
    *(result - 14) = 0;
    *(_QWORD *)(result - 11) = 0;
    *(result - 9) = 0;
    *(result - 8) = 1040187392;
    v9 = (float)(*((float *)result + 2) + *((float *)result + 2)) + *(float *)result;
    v10 = (float)(*((float *)result + 1) + *((float *)result + 1)) + *(float *)result;
    v11 = (float)(*((float *)result + 3) + *((float *)result + 3)) + *(float *)result;
    v12 = v9 * v9;
    v13 = v11 * v11;
    *((float *)result + 5) = 9.0 / (float)(v12 + v13);
    *((float *)result + 6) = 9.0 / (float)((float)(v10 * v10) + v13);
    *((float *)result + 7) = 9.0 / (float)((float)(v10 * v10) + v12);
    *(_QWORD *)(result + 9) = 0;
    *((_QWORD *)result + 6) = 0;
    result[11] = 0;
    *((_QWORD *)result + 7) = 0;
    result[16] = 0;
    result[17] = 1040187392;
    v14 = *((float *)result + 25);
    v15 = (float)(*((float *)result + 27) + *((float *)result + 27)) + v14;
    v16 = (float)(*((float *)result + 28) + *((float *)result + 28)) + v14;
    v17 = (float)(*((float *)result + 26) + *((float *)result + 26)) + v14;
    v18 = v15 * v15;
    v19 = v16 * v16;
    *((float *)result + 30) = 9.0 / (float)(v18 + v19);
    *((float *)result + 31) = 9.0 / (float)((float)(v17 * v17) + v19);
    *((float *)result + 32) = 9.0 / (float)((float)(v17 * v17) + v18);
    *((_QWORD *)result + 17) = 0;
    *(_QWORD *)(result + 37) = 0;
    result[36] = 0;
    *(_QWORD *)(result + 39) = 0;
    result[41] = 0;
    result[42] = 1040187392;
    v20 = *((float *)result + 50);
    v21 = (float)((float)(*((float *)result + 52) + *((float *)result + 52)) + v20)
        * (float)((float)(*((float *)result + 52) + *((float *)result + 52)) + v20);
    v22 = (float)((float)(*((float *)result + 53) + *((float *)result + 53)) + v20)
        * (float)((float)(*((float *)result + 53) + *((float *)result + 53)) + v20);
    v23 = (float)((float)(*((float *)result + 51) + *((float *)result + 51)) + v20)
        * (float)((float)(*((float *)result + 51) + *((float *)result + 51)) + v20);
    *((float *)result + 55) = 9.0 / (float)(v21 + v22);
    *((float *)result + 56) = 9.0 / (float)(v23 + v22);
    *((float *)result + 57) = 9.0 / (float)(v23 + v21);
    *(_QWORD *)(result + 59) = 0;
    *((_QWORD *)result + 31) = 0;
    result[61] = 0;
    *((_QWORD *)result + 32) = 0;
    result[66] = 0;
    result[67] = 1040187392;
    result += 100;
    --v1;
  }
  while ( v1 );
  dword_140404A6C[282486144] = 1038090240;
  dword_140404A6C[282486138] = -1089025052;
  dword_140404A6C[282486141] = 1058458596;
  dword_140404A6C[282486067] = 0;
  dword_140404A6C[282486068] = 1044381696;
  dword_140404A6C[282486069] = 1040187392;
  dword_140404A6C[282486092] = 0;
  dword_140404A6C[282486093] = 1040187392;
  dword_140404A6C[282486094] = 1040187392;
  dword_140404A6C[282486117] = 0;
  dword_140404A6C[282486118] = 1040187392;
  dword_140404A6C[282486119] = 1040187392;
  dword_140404A6C[282486142] = 1;
  dword_140404A6C[282486143] = 1031798784;
  dword_140404A6C[282486317] = 1;
  dword_140404A6C[282486318] = 1052770304;
  dword_140404A6C[282486319] = 1035993088;
  dword_140404A6C[282486342] = 1;
  dword_140404A6C[282486343] = 1049624576;
  dword_140404A6C[282486344] = 1031798784;
  dword_140404A6C[282486367] = 2;
  dword_140404A6C[282486368] = 1040187392;
  dword_140404A6C[282486369] = 1031798784;
  dword_140404A6C[282486392] = 1;
  dword_140404A6C[282486393] = 1052770304;
  dword_140404A6C[282486394] = 1035993088;
  dword_140404A6C[282486417] = 1;
  dword_140404A6C[282486418] = 1049624576;
  dword_140404A6C[282486419] = 1031798784;
  dword_140404A6C[282486442] = 2;
  dword_140404A6C[282486443] = 1040187392;
  dword_140404A6C[282486444] = 1031798784;
  dword_140404A6C[282486167] = 1;
  dword_140404A6C[282486168] = 1048576000;
  dword_140404A6C[282486169] = 1031798784;
  dword_140404A6C[282486192] = 1;
  dword_140404A6C[282486193] = 1048576000;
  dword_140404A6C[282486194] = 1031798784;
  dword_140404A6C[282486217] = 1;
  dword_140404A6C[282486218] = 1031798784;
  dword_140404A6C[282486219] = 1031798784;
  dword_140404A6C[282486242] = 1;
  dword_140404A6C[282486243] = 1048576000;
  dword_140404A6C[282486244] = 1031798784;
  dword_140404A6C[282486267] = 1;
  dword_140404A6C[282486268] = 1048576000;
  dword_140404A6C[282486269] = 1031798784;
  dword_140404A6C[282486292] = 1;
  dword_140404A6C[282486293] = 1031798784;
  dword_140404A6C[282486294] = 1031798784;
  dword_140404A6C[282486086] = -1085730853;
  dword_140404A6C[282486089] = 1053364187;
  dword_140404A6C[282486087] = -1085730853;
  dword_140404A6C[282486090] = 1061752795;
  dword_140404A6C[282486088] = -1094119461;
  dword_140404A6C[282486091] = 1053364187;
  dword_140404A6C[282486111] = -1085730853;
  dword_140404A6C[282486114] = 1053364187;
  dword_140404A6C[282486112] = -1085730853;
  dword_140404A6C[282486115] = 1061752795;
  dword_140404A6C[282486113] = -1094119461;
  dword_140404A6C[282486116] = 1053364187;
  dword_140404A6C[282486136] = -1085730853;
  dword_140404A6C[282486139] = 1061752795;
  dword_140404A6C[282486137] = -1080636444;
  dword_140404A6C[282486140] = 1066847204;
  dword_140404A6C[282486311] = -1078989345;
  dword_140404A6C[282486314] = 1070141403;
  dword_140404A6C[282486312] = -1094119461;
  dword_140404A6C[282486315] = 1053364187;
  dword_140404A6C[282486313] = -1094119461;
  dword_140404A6C[282486316] = 1053364187;
  dword_140404A6C[282486336] = -1070600737;
  *(_QWORD *)&dword_140404A6C[282486339] = 0;
  *(_QWORD *)&dword_140404A6C[282486337] = 0;
  dword_140404A6C[282486341] = 0;
  dword_140404A6C[282486361] = -1085730853;
  dword_140404A6C[282486364] = 1061752795;
  dword_140404A6C[282486362] = -1085730853;
  dword_140404A6C[282486365] = 1061752795;
  dword_140404A6C[282486363] = -1094119461;
  dword_140404A6C[282486366] = 1053364187;
  dword_140404A6C[282486386] = -1078989345;
  dword_140404A6C[282486389] = 1070141403;
  dword_140404A6C[282486387] = -1094119461;
  dword_140404A6C[282486390] = 1053364187;
  dword_140404A6C[282486388] = -1094119461;
  dword_140404A6C[282486391] = 1053364187;
  dword_140404A6C[282486411] = -1070600737;
  *(_QWORD *)&dword_140404A6C[282486414] = 0;
  *(_QWORD *)&dword_140404A6C[282486412] = 0;
  dword_140404A6C[282486416] = 0;
  dword_140404A6C[282486436] = -1085730853;
  dword_140404A6C[282486439] = 1061752795;
  dword_140404A6C[282486437] = -1085730853;
  dword_140404A6C[282486440] = 1061752795;
  dword_140404A6C[282486438] = -1094119461;
  dword_140404A6C[282486441] = 1053364187;
  dword_140404A6C[282486161] = -1077342245;
  dword_140404A6C[282486164] = 1070141403;
  dword_140404A6C[282486162] = -1080636444;
  dword_140404A6C[282486165] = 1066847204;
  dword_140404A6C[282486163] = -1077342245;
  dword_140404A6C[282486166] = 1070141403;
  *(_QWORD *)&dword_140404A6C[282486186] = 0;
  *(_QWORD *)&dword_140404A6C[282486189] = 1070141403;
  dword_140404A6C[282486188] = 0;
  dword_140404A6C[282486191] = 0;
  dword_140404A6C[282486211] = -1077342245;
  dword_140404A6C[282486214] = 1070141403;
  dword_140404A6C[282486212] = -1085730853;
  dword_140404A6C[282486215] = 1061752795;
  dword_140404A6C[282486213] = -1074048047;
  dword_140404A6C[282486216] = 1073435601;
  dword_140404A6C[282486236] = -1077342245;
  dword_140404A6C[282486239] = 1070141403;
  dword_140404A6C[282486237] = -1080636444;
  dword_140404A6C[282486240] = 1066847204;
  dword_140404A6C[282486238] = -1077342245;
  dword_140404A6C[282486241] = 1070141403;
  *(_QWORD *)&dword_140404A6C[282486261] = 0;
  *(_QWORD *)&dword_140404A6C[282486264] = 1070141403;
  dword_140404A6C[282486263] = 0;
  dword_140404A6C[282486266] = 0;
  dword_140404A6C[282486286] = -1077342245;
  dword_140404A6C[282486289] = 1070141403;
  dword_140404A6C[282486287] = -1085730853;
  dword_140404A6C[282486290] = 1061752795;
  dword_140404A6C[282486288] = -1074048047;
  dword_140404A6C[282486291] = 1073435601;
  return result;
}

// 140278D50: using guessed type __int128 xmmword_140278D50;
// 140278D60: using guessed type __int128 xmmword_140278D60;
// 140278DB0: using guessed type __int128 xmmword_140278DB0;
// 140278DC0: using guessed type __int128 xmmword_140278DC0;
// 140278DD0: using guessed type __int128 xmmword_140278DD0;
// 140278EA0: using guessed type __int128 xmmword_140278EA0;
// 140279290: using guessed type __int128 xmmword_140279290;
// 1402792A0: using guessed type __int128 xmmword_1402792A0;
// 1402792B0: using guessed type __int128 xmmword_1402792B0;
// 1402792C0: using guessed type __int128 xmmword_1402792C0;
// 1402792D0: using guessed type __int128 xmmword_1402792D0;
// 1402792E0: using guessed type __int128 xmmword_1402792E0;
// 1402798A0: using guessed type __int128 xmmword_1402798A0;
// 1402798B0: using guessed type __int128 xmmword_1402798B0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399DEE0: using guessed type int[];
// 18399DEF4: using guessed type unsigned int;
// 18399DEF8: using guessed type unsigned int;
// 18399DEFC: using guessed type unsigned int;
// 18399DF0C: using guessed type unsigned int;
// 18399DF38: using guessed type unsigned int;
// 18399DF3C: using guessed type unsigned int;
// 18399DF40: using guessed type unsigned int;
// 18399DF44: using guessed type unsigned int;
// 18399DF48: using guessed type unsigned int;
// 18399DF58: using guessed type unsigned int;
// 18399DF60: using guessed type unsigned int;
// 18399DF70: using guessed type unsigned int;
// 18399DF84: using guessed type unsigned int;
// 18399DF88: using guessed type unsigned int;
// 18399DF8C: using guessed type unsigned int;
// 18399DF90: using guessed type unsigned int;
// 18399DF94: using guessed type unsigned int;
// 18399DF98: using guessed type unsigned int;
// 18399DF9C: using guessed type unsigned int;
// 18399DFA0: using guessed type unsigned int;
// 18399DFA4: using guessed type unsigned int;
// 18399DFA8: using guessed type unsigned int;
// 18399DFAC: using guessed type unsigned int;
// 18399DFBC: using guessed type unsigned int;
// 18399DFC4: using guessed type unsigned int;
// 18399DFD4: using guessed type unsigned int;
// 18399DFE8: using guessed type unsigned int;
// 18399DFEC: using guessed type unsigned int;
// 18399DFF0: using guessed type unsigned int;
// 18399DFF4: using guessed type unsigned int;
// 18399DFF8: using guessed type unsigned int;
// 18399DFFC: using guessed type unsigned int;
// 18399E000: using guessed type unsigned int;
// 18399E004: using guessed type unsigned int;
// 18399E008: using guessed type unsigned int;
// 18399E00C: using guessed type unsigned int;
// 18399E010: using guessed type unsigned int;
// 18399E020: using guessed type unsigned int;
// 18399E028: using guessed type unsigned int;
// 18399E038: using guessed type unsigned int;
// 18399E04C: using guessed type unsigned int;
// 18399E050: using guessed type unsigned int;
// 18399E054: using guessed type unsigned int;
// 18399E058: using guessed type unsigned int;
// 18399E05C: using guessed type unsigned int;
// 18399E060: using guessed type unsigned int;
// 18399E064: using guessed type unsigned int;
// 18399E068: using guessed type unsigned int;
// 18399E06C: using guessed type unsigned int;
// 18399E070: using guessed type unsigned int;
// 18399E074: using guessed type unsigned int;
// 18399E084: using guessed type unsigned int;
// 18399E08C: using guessed type unsigned int;
// 18399E09C: using guessed type unsigned int;
// 18399E0AC: using guessed type unsigned int;
// 18399E0B0: using guessed type unsigned int;
// 18399E0B4: using guessed type unsigned int;
// 18399E0B8: using guessed type unsigned int;
// 18399E0BC: using guessed type unsigned int;
// 18399E0C0: using guessed type unsigned int;
// 18399E0C4: using guessed type unsigned int;
// 18399E0C8: using guessed type unsigned int;
// 18399E0CC: using guessed type unsigned int;
// 18399E0D0: using guessed type unsigned int;
// 18399E0D4: using guessed type unsigned int;
// 18399E0D8: using guessed type unsigned int;
// 18399E0E8: using guessed type unsigned int;
// 18399E0EC: using guessed type unsigned int;
// 18399E0F0: using guessed type unsigned int;
// 18399E100: using guessed type unsigned int;
// 18399E114: using guessed type unsigned int;
// 18399E11C: using guessed type unsigned int;
// 18399E120: using guessed type unsigned int;
// 18399E128: using guessed type unsigned int;
// 18399E12C: using guessed type unsigned int;
// 18399E130: using guessed type unsigned int;
// 18399E134: using guessed type unsigned int;
// 18399E138: using guessed type unsigned int;
// 18399E13C: using guessed type unsigned int;
// 18399E14C: using guessed type unsigned int;
// 18399E150: using guessed type unsigned int;
// 18399E154: using guessed type unsigned int;
// 18399E164: using guessed type unsigned int;
// 18399E178: using guessed type unsigned int;
// 18399E17C: using guessed type unsigned int;
// 18399E180: using guessed type unsigned int;
// 18399E184: using guessed type unsigned int;
// 18399E188: using guessed type unsigned int;
// 18399E18C: using guessed type unsigned int;
// 18399E190: using guessed type unsigned int;
// 18399E194: using guessed type unsigned int;
// 18399E198: using guessed type unsigned int;
// 18399E19C: using guessed type unsigned int;
// 18399E1A0: using guessed type unsigned int;
// 18399E1A4: using guessed type unsigned int;
// 18399E1A8: using guessed type unsigned int;
// 18399E1AC: using guessed type unsigned int;
// 18399E1B0: using guessed type unsigned int;
// 18399E1B8: using guessed type unsigned int;
// 18399E1C8: using guessed type unsigned int;
// 18399E1DC: using guessed type unsigned int;
// 18399E1E0: using guessed type unsigned int;
// 18399E1E4: using guessed type unsigned int;
// 18399E1E8: using guessed type unsigned int;
// 18399E1EC: using guessed type unsigned int;
// 18399E1F0: using guessed type unsigned int;
// 18399E1F4: using guessed type unsigned int;
// 18399E1F8: using guessed type unsigned int;
// 18399E1FC: using guessed type unsigned int;
// 18399E200: using guessed type unsigned int;
// 18399E204: using guessed type unsigned int;
// 18399E208: using guessed type unsigned int;
// 18399E20C: using guessed type unsigned int;
// 18399E210: using guessed type unsigned int;
// 18399E214: using guessed type unsigned int;
// 18399E218: using guessed type unsigned int;
// 18399E21C: using guessed type unsigned int;
// 18399E22C: using guessed type unsigned int;
// 18399E240: using guessed type unsigned int;
// 18399E248: using guessed type unsigned int;
// 18399E24C: using guessed type unsigned int;
// 18399E254: using guessed type unsigned int;
// 18399E258: using guessed type unsigned int;
// 18399E25C: using guessed type unsigned int;
// 18399E260: using guessed type unsigned int;
// 18399E264: using guessed type unsigned int;
// 18399E268: using guessed type unsigned int;
// 18399E26C: using guessed type unsigned int;
// 18399E270: using guessed type unsigned int;
// 18399E274: using guessed type unsigned int;
// 18399E278: using guessed type unsigned int;
// 18399E27C: using guessed type unsigned int;
// 18399E280: using guessed type unsigned int;
// 18399E290: using guessed type unsigned int;
// 18399E2A4: using guessed type unsigned int;
// 18399E2A8: using guessed type unsigned int;
// 18399E2AC: using guessed type unsigned int;
// 18399E2B0: using guessed type unsigned int;
// 18399E2B4: using guessed type unsigned int;
// 18399E2B8: using guessed type unsigned int;
// 18399E2BC: using guessed type unsigned int;
// 18399E2C0: using guessed type unsigned int;
// 18399E2C4: using guessed type unsigned int;
// 18399E2C8: using guessed type unsigned int;
// 18399E2CC: using guessed type unsigned int;
// 18399E2DC: using guessed type unsigned int;
// 18399E2E4: using guessed type unsigned int;
// 18399E2F4: using guessed type unsigned int;
// 18399E308: using guessed type unsigned int;
// 18399E30C: using guessed type unsigned int;
// 18399E310: using guessed type unsigned int;
// 18399E314: using guessed type unsigned int;
// 18399E318: using guessed type unsigned int;
// 18399E31C: using guessed type unsigned int;
// 18399E320: using guessed type unsigned int;
// 18399E324: using guessed type unsigned int;
// 18399E328: using guessed type unsigned int;
// 18399E32C: using guessed type unsigned int;
// 18399E330: using guessed type unsigned int;
// 18399E340: using guessed type unsigned int;
// 18399E344: using guessed type unsigned int;
// 18399E348: using guessed type unsigned int;
// 18399E358: using guessed type unsigned int;
// 18399E36C: using guessed type unsigned int;
// 18399E370: using guessed type unsigned int;
// 18399E378: using guessed type unsigned int;
// 18399E380: using guessed type unsigned int;
// 18399E384: using guessed type unsigned int;
// 18399E388: using guessed type unsigned int;
// 18399E38C: using guessed type unsigned int;
// 18399E390: using guessed type unsigned int;
// 18399E394: using guessed type unsigned int;
// 18399E3A4: using guessed type unsigned int;
// 18399E3A8: using guessed type unsigned int;
// 18399E3AC: using guessed type unsigned int;
// 18399E3BC: using guessed type unsigned int;
// 18399E3D0: using guessed type unsigned int;
// 18399E3D4: using guessed type unsigned int;
// 18399E3D8: using guessed type unsigned int;
// 18399E3DC: using guessed type unsigned int;
// 18399E3E0: using guessed type unsigned int;
// 18399E3E4: using guessed type unsigned int;
// 18399E3E8: using guessed type unsigned int;
// 18399E3EC: using guessed type unsigned int;
// 18399E3F0: using guessed type unsigned int;
// 18399E3F4: using guessed type unsigned int;
// 18399E3F8: using guessed type unsigned int;
// 18399E3FC: using guessed type unsigned int;
// 18399E400: using guessed type unsigned int;
// 18399E404: using guessed type unsigned int;
// 18399E408: using guessed type unsigned int;
// 18399E410: using guessed type unsigned int;
// 18399E420: using guessed type unsigned int;
// 18399E434: using guessed type unsigned int;
// 18399E438: using guessed type unsigned int;
// 18399E43C: using guessed type unsigned int;
// 18399E440: using guessed type unsigned int;
// 18399E444: using guessed type unsigned int;
// 18399E448: using guessed type unsigned int;
// 18399E44C: using guessed type unsigned int;
// 18399E450: using guessed type unsigned int;
// 18399E454: using guessed type unsigned int;
// 18399E458: using guessed type unsigned int;
// 18399E45C: using guessed type unsigned int;
// 18399E460: using guessed type unsigned int;
// 18399E464: using guessed type unsigned int;
// 18399E468: using guessed type unsigned int;
// 18399E46C: using guessed type unsigned int;
// 18399E470: using guessed type unsigned int;
// 18399E474: using guessed type unsigned int;
// 18399E484: using guessed type unsigned int;
// 18399E498: using guessed type unsigned int;
// 18399E49C: using guessed type unsigned int;
// 18399E4A4: using guessed type unsigned int;
// 18399E4AC: using guessed type unsigned int;
// 18399E4B0: using guessed type unsigned int;
// 18399E4B4: using guessed type unsigned int;
// 18399E4B8: using guessed type unsigned int;
// 18399E4BC: using guessed type unsigned int;
// 18399E4C0: using guessed type unsigned int;
// 18399E4C4: using guessed type unsigned int;
// 18399E4C8: using guessed type unsigned int;
// 18399E4CC: using guessed type unsigned int;
// 18399E4D0: using guessed type unsigned int;
// 18399E4D4: using guessed type unsigned int;
// 18399E4D8: using guessed type unsigned int;
// 18399E4E8: using guessed type unsigned int;
// 18399E4FC: using guessed type unsigned int;
// 18399E500: using guessed type unsigned int;
// 18399E504: using guessed type unsigned int;
// 18399E508: using guessed type unsigned int;
// 18399E50C: using guessed type unsigned int;
// 18399E510: using guessed type unsigned int;
// 18399E514: using guessed type unsigned int;
// 18399E518: using guessed type unsigned int;
// 18399E51C: using guessed type unsigned int;

//----- (0000000140139560) ----------------------------------------------------
__int64 sub_140139560()
{
  sub_14003FB90(6, 0.0, 2.0, -1.625, 4.0, 4.0, 0.25);
  dword_140404A6C[432545129] = 1080033280;
  sub_14003FB90(1, 0.0, 0.0, 0.0, 0.375, 6.0, 0.375);
  sub_14003FB90(1, 0.0, 3.0, -5.0, 0.25, 0.25, 10.0);
  sub_14003FB90(1, 0.0, 3.0, -6.0, 0.3125, 1.0, 0.5);
  sub_14003FB90(1, 0.0, 3.0, -10.0, 0.3125, 1.0, 0.5);
  dword_140404A6C[432535887] = 1078984704;
  dword_140404A6C[432535888] = -1082130432;
  dword_140404A6C[432535886] = 0;
  dword_140404A6C[432533579] = 1077936128;
  return sub_14003FB90(4, 0.0, 2.625, -8.0, 0.0625, 0.5, 2.0);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A7600B98: using guessed type unsigned int;
// 1A7602FA4: using guessed type unsigned int;
// 1A7602FA8: using guessed type unsigned int;
// 1A7602FAC: using guessed type unsigned int;
// 1A760C010: using guessed type unsigned int;

//----- (0000000140139740) ----------------------------------------------------
__int64            sub_140139740(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  int v3; // r12d
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // eax
  __m128i v7; // xmm7
  float *v8; // r15
  int v9; // r14d
  signed int v10; // eax
  float v11; // xmm7_4
  float v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  bool v15; // zf
  float v16; // xmm2_4
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  float v22; // xmm2_4
  unsigned int v23; // ecx
  float v24; // xmm4_4
  float v25; // xmm8_4
  float v26; // xmm3_4
  float v27; // xmm9_4
  unsigned int v28; // eax
  __m128i v29; // xmm5
  __int64 result; // rax
  float v31; // xmm5_4
  __int64 v32; // rdx
  float v33; // xmm0_4
  float v34; // xmm2_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  float v39; // xmm2_4
  __int64 v40; // rcx
  __int64 v41; // rcx

  v1 = 396LL * a1;
  v2 = dword_140404A6C[v1 + 225426059];
  v3 = dword_140404A6C[v1 + 225426060];
  v4 = 34LL * (int)dword_140404A6C[v1 + 225426057];
  v5 = 34LL * (int)dword_140404A6C[v1 + 225426056];
  if ( dword_140404A6C[v1 + 225426058] )
    v6 = dword_140404A6C[v4 + 225391232]
       - dword_140404A6C[v5 + 225391241]
       - dword_140404A6C[v5 + 225391232]
       - dword_140404A6C[v4 + 225391243];
  else
    v6 = dword_140404A6C[v4 + 225391230]
       - dword_140404A6C[v5 + 225391240]
       - dword_140404A6C[v5 + 225391230]
       - dword_140404A6C[v4 + 225391242];
  v7 = _mm_cvtsi32_si128(v6);
  v8 = (float *)&dword_140404A6C[v1 + 225426174];
  v9 = 0;
  v10 = dword_140404A6C[v4 + 225391230] - dword_140404A6C[v5 + 225391230];
  dword_140404A6C[v1 + 225426175] = 0;
  v11 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v7), f32)[0] * 4.0;
  *v8 = (float)v10;
  *(float *)&dword_140404A6C[v1 + 225426176] = (float)(int)(dword_140404A6C[v4 + 225391232]
                                                          - dword_140404A6C[v5 + 225391232]);
  sub_14007A240((__int64)v8, v8);
  v12 = *v8;
  *(_QWORD *)&dword_140404A6C[v1 + 225426177] = COERCE_UNSIGNED_INT(-*(float *)&dword_140404A6C[v1 + 225426176]);
  *(float *)&dword_140404A6C[v1 + 225426179] = v12;
  if ( dword_140404A6C[v1 + 225426058] )
    v13 = dword_140404A6C[v5 + 225391230];
  else
    v13 = dword_140404A6C[v5 + 225391230] + dword_140404A6C[v5 + 225391240];
  *(float *)&dword_140404A6C[v1 + 225426180] = (float)v13 * 4.0;
  if ( dword_140404A6C[v1 + 225426058] == 1 )
    v14 = dword_140404A6C[v5 + 225391232] + dword_140404A6C[v5 + 225391241];
  else
    v14 = dword_140404A6C[v5 + 225391232];
  *(float *)&dword_140404A6C[v1 + 225426182] = (float)v14 * 4.0;
  v15 = dword_140404A6C[v1 + 225426058] == 0;
  if ( dword_140404A6C[v1 + 225426058] )
    v16 = (float)v3 * 4.0;
  else
    v16 = (float)(int)v2 * -4.0;
  *(float *)&dword_140404A6C[v1 + 225426180] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426177])
                                             + *(float *)&dword_140404A6C[v1 + 225426180];
  *(float *)&dword_140404A6C[v1 + 225426181] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426178])
                                             + *(float *)&dword_140404A6C[v1 + 225426181];
  *(float *)&dword_140404A6C[v1 + 225426182] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426179])
                                             + *(float *)&dword_140404A6C[v1 + 225426182];
  v17 = dword_140404A6C[v4 + 225391230];
  if ( v15 )
    v17 -= dword_140404A6C[v4 + 225391242];
  *(float *)&dword_140404A6C[v1 + 225426183] = (float)v17 * 4.0;
  v18 = dword_140404A6C[v4 + 225391232];
  if ( dword_140404A6C[v1 + 225426058] == 1 )
    v18 -= dword_140404A6C[v4 + 225391243];
  *(float *)&dword_140404A6C[v1 + 225426185] = (float)v18 * 4.0;
  v19 = dword_140404A6C[v5 + 225391231];
  v20 = dword_140404A6C[v4 + 225391231];
  if ( v19 >= v20 )
  {
    *(float *)&dword_140404A6C[v1 + 225426181] = (float)((float)v20 + 1.0) * 4.0;
    v21 = dword_140404A6C[v5 + 225391231];
  }
  else
  {
    *(float *)&dword_140404A6C[v1 + 225426181] = (float)((float)v19 + 1.0) * 4.0;
    v21 = dword_140404A6C[v4 + 225391231];
  }
  *(float *)&dword_140404A6C[v1 + 225426184] = (float)((float)v21 * 4.0) + 8.0;
  if ( dword_140404A6C[v1 + 225426058] )
    v22 = (float)(int)v2 * -4.0;
  else
    v22 = (float)v3 * 4.0;
  *(float *)&dword_140404A6C[v1 + 225426183] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426177])
                                             + *(float *)&dword_140404A6C[v1 + 225426183];
  *(float *)&dword_140404A6C[v1 + 225426184] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426178])
                                             + *(float *)&dword_140404A6C[v1 + 225426184];
  *(float *)&dword_140404A6C[v1 + 225426185] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426179])
                                             + *(float *)&dword_140404A6C[v1 + 225426185];
  v23 = dword_140404A6C[v1 + 225426058];
  if ( !v23 )
  {
    v24 = (float)(int)(dword_140404A6C[v5 + 225391230] + dword_140404A6C[v5 + 225391240]) * 4.0;
    v25 = v24;
    v26 = (float)((float)(int)(dword_140404A6C[v5 + 225391231] + 1) * 4.0) + 0.125;
    v27 = v26;
LABEL_25:
    v28 = dword_140404A6C[v5 + 225391232];
    goto LABEL_26;
  }
  v24 = (float)(int)dword_140404A6C[v5 + 225391230] * 4.0;
  v25 = v24;
  v26 = (float)((float)(int)(dword_140404A6C[v5 + 225391231] + 1) * 4.0) + 0.125;
  v27 = v26;
  if ( v23 != 1 )
    goto LABEL_25;
  v28 = dword_140404A6C[v5 + 225391232] + dword_140404A6C[v5 + 225391241];
LABEL_26:
  v29 = _mm_cvtsi32_si128(v28);
  result = 0;
  dword_140404A6C[v1 + 225426061] = 0;
  v31 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0] * 4.0;
  if ( (int)v2 > 0 )
  {
    v32 = v2;
    do
    {
      v33 = (float)(int)v2;
      LODWORD(v2) = v2 - 1;
      dword_140404A6C[7 * (int)result + 225426062 + v1] = 0;
      v34 = 2.0 - (float)(v33 * 4.0);
      v35 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426063] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v24;
      *(float *)((char *)&dword_140404A6C[225426064] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v26;
      *(float *)((char *)&dword_140404A6C[225426065] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v36 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v24;
      *(float *)((char *)&dword_140404A6C[225426067] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v26;
      *(float *)((char *)&dword_140404A6C[225426068] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v37 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v37) = (float)(v11 * *v8)
                                                            + *(float *)((char *)&dword_140404A6C[225426066] + v37);
      *(float *)((char *)&dword_140404A6C[225426067] + v37) = (float)(v11 * v8[1])
                                                            + *(float *)((char *)&dword_140404A6C[225426067] + v37);
      *(float *)((char *)&dword_140404A6C[225426068] + v37) = (float)(v11 * v8[2])
                                                            + *(float *)((char *)&dword_140404A6C[225426068] + v37);
      result = dword_140404A6C[v1 + 225426061] + 1;
      dword_140404A6C[v1 + 225426061] = result;
      --v32;
    }
    while ( v32 );
  }
  if ( v3 > 0 )
  {
    do
    {
      ++v9;
      dword_140404A6C[7 * (int)result + 225426062 + v1] = 1;
      v38 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      v39 = (float)((float)v9 * 4.0) - 2.0;
      *(float *)((char *)&dword_140404A6C[225426063] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v25;
      *(float *)((char *)&dword_140404A6C[225426064] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v27;
      *(float *)((char *)&dword_140404A6C[225426065] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v40 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v25;
      *(float *)((char *)&dword_140404A6C[225426067] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v27;
      *(float *)((char *)&dword_140404A6C[225426068] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v41 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v41) = (float)(v11 * *v8)
                                                            + *(float *)((char *)&dword_140404A6C[225426066] + v41);
      *(float *)((char *)&dword_140404A6C[225426067] + v41) = (float)(v11 * v8[1])
                                                            + *(float *)((char *)&dword_140404A6C[225426067] + v41);
      *(float *)((char *)&dword_140404A6C[225426068] + v41) = (float)(v11 * v8[2])
                                                            + *(float *)((char *)&dword_140404A6C[225426068] + v41);
      result = dword_140404A6C[v1 + 225426061] + 1;
      dword_140404A6C[v1 + 225426061] = result;
    }
    while ( v9 < v3 );
  }
  return result;
}

// 14013A54F: variable 'v61' is possibly undefined
// 14013A581: variable 'v62' is possibly undefined
// 14013A5C0: variable 'v63' is possibly undefined
// 14013A638: variable 'v65' is possibly undefined
// 14013A688: variable 'v66' is possibly undefined
// 14013C2E2: variable 'v134' is possibly undefined
// 14013C2E2: variable 'v133' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140278F50: using guessed type __int128 xmmword_140278F50;
// 140278FD0: using guessed type __int128 xmmword_140278FD0;
// 140279010: using guessed type __int128 xmmword_140279010;
// 14030186C: using guessed type int dword_14030186C;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404208: using guessed type __int64 (*unk_140404208)(void);
// 140404210: using guessed type __int64 (__fastcall *unk_140404210)(_QWORD);
// 1404046D0: using guessed type __int64 (__fastcall *unk_1404046D0)(_QWORD, _QWORD);
// 140404700: using guessed type __int64 (__fastcall *unk_140404700)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 151E4618C: using guessed type unsigned int;
// 15414F280: using guessed type unsigned int;
// 15414F290: using guessed type unsigned int;
// 15414F2A0: using guessed type unsigned int;
// 15414F2B0: using guessed type unsigned int;
// 15414F2C0: using guessed type unsigned int;
// 15414F2D0: using guessed type unsigned int;
// 15414F2E0: using guessed type unsigned int;
// 15414F2F0: using guessed type unsigned int;
// 15414F300: using guessed type unsigned int;
// 15414F310: using guessed type unsigned int;
// 15414F320: using guessed type unsigned int;
// 15414F330: using guessed type unsigned int;
// 15414F340: using guessed type unsigned int;
// 15414F350: using guessed type unsigned int;
// 15414F360: using guessed type unsigned int;
// 15414F370: using guessed type unsigned int;
// 15414F380: using guessed type unsigned int;
// 15414F390: using guessed type unsigned int;
// 15414F3A0: using guessed type unsigned int;
// 15414F3B0: using guessed type unsigned int;
// 15414F3C0: using guessed type unsigned int;
// 15414F3D0: using guessed type unsigned int;
// 15414F3E0: using guessed type unsigned int;
// 15414F3F0: using guessed type unsigned int;
// 15414F400: using guessed type unsigned int;
// 15414F410: using guessed type unsigned int;
// 15414F420: using guessed type unsigned int;
// 15414F430: using guessed type unsigned int;
// 15414F440: using guessed type unsigned int;
// 15414F450: using guessed type unsigned int;
// 15414F460: using guessed type unsigned int;
// 15414F470: using guessed type unsigned int;
// 15414F480: using guessed type unsigned int;
// 15414F490: using guessed type unsigned int;
// 15414F4A0: using guessed type unsigned int;
// 15414F4B0: using guessed type unsigned int;
// 154150060: using guessed type unsigned int;
// 154150240: using guessed type unsigned int;
// 154150250: using guessed type unsigned int;
// 1541502E0: using guessed type unsigned int;
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;
// 1810FF788: using guessed type unsigned int;
// 18399EBB4: using guessed type unsigned int;
// 18399EBB8: using guessed type unsigned int;
// 183E97740: using guessed type unsigned int;
// 183E97744: using guessed type unsigned int;
// 183E97748: using guessed type unsigned int;
// 183E9774C: using guessed type unsigned int;
// 183E97750: using guessed type unsigned int;
// 183E97760: using guessed type unsigned int;
// 183E97770: using guessed type unsigned int;
// 183E97774: using guessed type unsigned int;
// 183E97790: using guessed type unsigned int;
// 183E97794: using guessed type unsigned int;
// 183E97798: using guessed type unsigned int;
// 183E977A0: using guessed type unsigned int;
// 183E977A4: using guessed type unsigned int;
// 183E98C4C: using guessed type unsigned int;
// 183E9908C: using guessed type unsigned int;
// 183E99094: using guessed type unsigned int;
// 183E990A0: using guessed type unsigned int;
// 183E990A4: using guessed type unsigned int;
// 183EBB768: using guessed type unsigned int;
// 183EBC350: using guessed type unsigned int;
// 183EBC3DC: using guessed type unsigned int;
// 183EBF0F4: using guessed type unsigned int;
// 183EBF128: using guessed type unsigned int;
// 183EBF170: using guessed type unsigned int;
// 1862AE010: using guessed type unsigned int;
// 187BDE460: using guessed type unsigned int;
// 1A4CFF8D0: using guessed type unsigned int;
// 1A7971DA0: using guessed type unsigned int;
// 1A7971DA4: using guessed type unsigned int;
// 1A7971DD0: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;
// 1B0037428: using guessed type int[];
// 1B003742C: using guessed type unsigned int;

//----- (000000014013C6E0) ----------------------------------------------------
__int64 sub_14013C6E0()
{
  int v0; // esi
  __int64 v1; // rax
  int v2; // ecx
  unsigned int *v3; // rdi
  __int64 v4; // rbx
  char *v5; // rdx
  unsigned int *v6; // rcx
  char v7; // al
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  char *v13; // rcx
  char v14; // dl
  char v15; // dl
  char v16; // dl
  signed int v17; // r8d
  unsigned int *v18; // r10
  __int64 v19; // r11
  unsigned int *v20; // rdx
  char v21; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013C6E0[352];
#define v23 (*(__int64 (*))(void *)(sr_frame_14013C6E0 + 0)) /* [rsp+0h] */
#define v24 (*(_BYTE (*)[36])(void *)(sr_frame_14013C6E0 + 32)) /* [rsp+20h] */
#define v25 (*(char (*))(void *)(sr_frame_14013C6E0 + 68)) /* [rsp+44h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14013C6E0 + 336)) /* [rsp+150h] */

  v0 = sub_14024C22C("texture");
  v1 = sub_14023A198("*.png", (__int64)v24);
  v2 = 0;
  v3 = &dword_140404A6C[293119326];
  dword_140404A6C[293119325] = 0;
  v4 = v1;
  if ( (_DWORD)v1 != -1 )
  {
    do
    {
      if ( v2 >= 1024 )
        break;
      if ( (v24[0] & 0x10) == 0 )
      {
        v5 = &v25;
        v6 = &dword_140404A6C[16 * (__int64)v2 + 293119326];
        do
        {
          v7 = *v5++;
          *(_BYTE *)v6 = v7;
          v6 = (unsigned int *)((char *)v6 + 1);
        }
        while ( v7 );
        ++dword_140404A6C[293119325];
      }
      v8 = sub_14023A5C4(v4, (__int64)v24);
      v2 = dword_140404A6C[293119325];
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v2 + 293119326]) = 0;
  sub_140239CCC(v4);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[293119326],
    (int)dword_140404A6C[293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  v9 = dword_140404A6C[293119325];
  v10 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v11 = 0;
    do
    {
      v12 = 0;
      v13 = (char *)&dword_140404A6C[v11 + 293119326] + 1;
      do
      {
        v14 = *(v13 - 1);
        if ( !v14 || v14 == 46 )
          break;
        if ( !*v13 || *v13 == 46 )
        {
          ++v12;
          break;
        }
        v15 = v13[1];
        if ( !v15 || v15 == 46 )
        {
          v12 += 2;
          break;
        }
        v16 = v13[2];
        if ( !v16 || v16 == 46 )
        {
          v12 += 3;
          break;
        }
        v12 += 4;
        v13 += 4;
      }
      while ( v12 < 64 );
      ++v10;
      *((_BYTE *)&dword_140404A6C[v11 + 293119326] + v12) = 0;
      v11 += 16;
      v9 = dword_140404A6C[293119325];
    }
    while ( v10 < (int)dword_140404A6C[293119325] );
  }
  if ( !v0 )
  {
    sub_14024C22C("..");
    v9 = dword_140404A6C[293119325];
  }
  v17 = dword_140404A6C[421784473];
  dword_140404A6C[421784253] = dword_140404A6C[421784473];
  dword_140404A6C[421784474] = 0;
  if ( v9 > 0 )
  {
    v18 = &dword_140404A6C[421784475];
    v19 = (unsigned int)v9;
    do
    {
      v20 = v3;
      do
      {
        v21 = *(_BYTE *)v20;
        *((_BYTE *)v20 + (_QWORD)&dword_140404A6C[421784739] + 184LL * v17 - (_QWORD)v3) = *(_BYTE *)v20;
        v20 = (unsigned int *)((char *)v20 + 1);
      }
      while ( v21 );
      *v18 = v17;
      v3 += 16;
      ++v18;
      ++dword_140404A6C[421784474];
      v17 = ++dword_140404A6C[421784253];
      --v19;
    }
    while ( v19 );
  }
  return 0; /* the function has no caller */
}
#undef v23
#undef v24
#undef v25
#undef v26

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18622DFE0: using guessed type unsigned int;
// 1A4CFF560: using guessed type unsigned int;
// 1A4CFF8D0: using guessed type unsigned int;
// 1A4CFF8D4: using guessed type unsigned int;

//----- (000000014013C920) ----------------------------------------------------
void            sub_14013C920(__int64 a1, __int64 a2, double a3)
{
  unsigned int *v3; // rbx
  float v4; // xmm6_4
  __m128 v5; // xmm0
  unsigned int v6; // xmm6_4
  __int64 v7; // rdx
  __m128 v8; // xmm0
  unsigned int v9; // xmm6_4
  __int64 v10; // rdx
  __m128 v11; // xmm0
  unsigned int v12; // xmm6_4
  __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned int v15; // xmm6_4
  __int64 v16; // rdx
  __m128 v17; // xmm0
  unsigned int v18; // xmm6_4
  __int64 v19; // rdx
  __m128 v20; // xmm0
  unsigned int v21; // xmm6_4
  __int64 v22; // rdx
  __m128 v23; // xmm0
  unsigned int v24; // xmm6_4
  __int64 v25; // rdx
  __m128 v26; // xmm0
  unsigned int v27; // xmm6_4
  __int64 v28; // rdx
  __m128 v29; // xmm0
  unsigned int v30; // xmm6_4
  __int64 v31; // rdx
  __m128 v32; // xmm0
  unsigned int v33; // xmm6_4
  __int64 v34; // rdx
  __m128 v35; // xmm0
  unsigned int v36; // xmm6_4
  __int64 v37; // rdx
  __m128 v38; // xmm0
  unsigned int v39; // xmm6_4
  __int64 v40; // rdx
  __m128 v41; // xmm0
  unsigned int v42; // xmm6_4
  __int64 v43; // rdx
  __m128 v44; // xmm0
  unsigned int v45; // xmm6_4
  __int64 v46; // rdx
  __m128 v47; // xmm0
  unsigned int v48; // xmm6_4
  __int64 v49; // rdx
  __m128 v50; // xmm0
  unsigned int v51; // xmm6_4
  __int64 v52; // rdx
  __m128 v53; // xmm0
  unsigned int v54; // xmm6_4
  __int64 v55; // rdx
  __m128 v56; // xmm0
  unsigned int v57; // xmm6_4
  __int64 v58; // rdx
  __m128 v59; // xmm0
  unsigned int v60; // xmm6_4
  __int64 v61; // rdx
  __m128 v62; // xmm0
  unsigned int v63; // xmm6_4
  __int64 v64; // rdx
  __m128 v65; // xmm0
  unsigned int v66; // xmm6_4
  __int64 v67; // rdx
  __m128 v68; // xmm0
  unsigned int v69; // xmm6_4
  __int64 v70; // rdx
  __m128 v71; // xmm0
  unsigned int v72; // xmm6_4
  __int64 v73; // rdx
  __m128 v74; // xmm0
  unsigned int v75; // xmm6_4
  __int64 v76; // rdx
  __m128 v77; // xmm0
  unsigned int v78; // xmm6_4
  __int64 v79; // rdx
  __m128 v80; // xmm0
  unsigned int v81; // xmm6_4
  __int64 v82; // rdx
  __m128 v83; // xmm0
  unsigned int v84; // xmm6_4
  __int64 v85; // rdx
  __m128 v86; // xmm0
  unsigned int v87; // xmm6_4
  __int64 v88; // rdx
  __m128 v89; // xmm0
  unsigned int v90; // xmm6_4
  __int64 v91; // rdx
  __m128 v92; // xmm0
  unsigned int v93; // xmm6_4
  __int64 v94; // rdx
  __m128 v95; // xmm0
  unsigned int v96; // xmm6_4
  __int64 v97; // rdx
  __m128 v98; // xmm0

  v3 = &dword_140404A6C[346696317];
  v4 = 0.0;
  do
  {
    v5 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(v4)), a2, a3);
    *(v3 - 2) = SR_VEC_LANES(128, v5, i32)[0];
    *(float *)&v6 = v4 + 0.098174773;
    *(v3 - 3) = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v5, v5, 1), u32)[0];
    v8 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v6), v7, a3);
    *v3 = SR_VEC_LANES(128, v8, i32)[0];
    *(float *)&v9 = *(float *)&v6 + 0.098174773;
    *(v3 - 1) = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v8, v8, 1), u32)[0];
    v11 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v9), v10, a3);
    v3[2] = SR_VEC_LANES(128, v11, i32)[0];
    *(float *)&v12 = *(float *)&v9 + 0.098174773;
    v3[1] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v11, v11, 1), u32)[0];
    v14 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v12), v13, a3);
    v3[4] = SR_VEC_LANES(128, v14, i32)[0];
    *(float *)&v15 = *(float *)&v12 + 0.098174773;
    v3[3] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v14, v14, 1), u32)[0];
    v17 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v15), v16, a3);
    v3[6] = SR_VEC_LANES(128, v17, i32)[0];
    *(float *)&v18 = *(float *)&v15 + 0.098174773;
    v3[5] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v17, v17, 1), u32)[0];
    v20 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v18), v19, a3);
    v3[8] = SR_VEC_LANES(128, v20, i32)[0];
    *(float *)&v21 = *(float *)&v18 + 0.098174773;
    v3[7] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v20, v20, 1), u32)[0];
    v23 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v21), v22, a3);
    v3[10] = SR_VEC_LANES(128, v23, i32)[0];
    *(float *)&v24 = *(float *)&v21 + 0.098174773;
    v3[9] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v23, v23, 1), u32)[0];
    v26 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v24), v25, a3);
    v3[12] = SR_VEC_LANES(128, v26, i32)[0];
    *(float *)&v27 = *(float *)&v24 + 0.098174773;
    v3[11] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v26, v26, 1), u32)[0];
    v29 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v27), v28, a3);
    v3[14] = SR_VEC_LANES(128, v29, i32)[0];
    *(float *)&v30 = *(float *)&v27 + 0.098174773;
    v3[13] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v29, v29, 1), u32)[0];
    v32 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v30), v31, a3);
    v3[16] = SR_VEC_LANES(128, v32, i32)[0];
    *(float *)&v33 = *(float *)&v30 + 0.098174773;
    v3[15] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v32, v32, 1), u32)[0];
    v35 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v33), v34, a3);
    v3[18] = SR_VEC_LANES(128, v35, i32)[0];
    *(float *)&v36 = *(float *)&v33 + 0.098174773;
    v3[17] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v35, v35, 1), u32)[0];
    v38 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v36), v37, a3);
    v3[20] = SR_VEC_LANES(128, v38, i32)[0];
    *(float *)&v39 = *(float *)&v36 + 0.098174773;
    v3[19] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v38, v38, 1), u32)[0];
    v41 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v39), v40, a3);
    v3[22] = SR_VEC_LANES(128, v41, i32)[0];
    *(float *)&v42 = *(float *)&v39 + 0.098174773;
    v3[21] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v41, v41, 1), u32)[0];
    v44 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v42), v43, a3);
    v3[24] = SR_VEC_LANES(128, v44, i32)[0];
    *(float *)&v45 = *(float *)&v42 + 0.098174773;
    v3[23] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v44, v44, 1), u32)[0];
    v47 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v45), v46, a3);
    v3[26] = SR_VEC_LANES(128, v47, i32)[0];
    *(float *)&v48 = *(float *)&v45 + 0.098174773;
    v3[25] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v47, v47, 1), u32)[0];
    v50 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v48), v49, a3);
    v3[28] = SR_VEC_LANES(128, v50, i32)[0];
    *(float *)&v51 = *(float *)&v48 + 0.098174773;
    v3[27] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v50, v50, 1), u32)[0];
    v53 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v51), v52, a3);
    v3[30] = SR_VEC_LANES(128, v53, i32)[0];
    *(float *)&v54 = *(float *)&v51 + 0.098174773;
    v3[29] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v53, v53, 1), u32)[0];
    v56 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v54), v55, a3);
    v3[32] = SR_VEC_LANES(128, v56, i32)[0];
    *(float *)&v57 = *(float *)&v54 + 0.098174773;
    v3[31] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v56, v56, 1), u32)[0];
    v59 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v57), v58, a3);
    v3[34] = SR_VEC_LANES(128, v59, i32)[0];
    *(float *)&v60 = *(float *)&v57 + 0.098174773;
    v3[33] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v59, v59, 1), u32)[0];
    v62 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v60), v61, a3);
    v3[36] = SR_VEC_LANES(128, v62, i32)[0];
    *(float *)&v63 = *(float *)&v60 + 0.098174773;
    v3[35] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v62, v62, 1), u32)[0];
    v65 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v63), v64, a3);
    v3[38] = SR_VEC_LANES(128, v65, i32)[0];
    *(float *)&v66 = *(float *)&v63 + 0.098174773;
    v3[37] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v65, v65, 1), u32)[0];
    v68 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v66), v67, a3);
    v3[40] = SR_VEC_LANES(128, v68, i32)[0];
    *(float *)&v69 = *(float *)&v66 + 0.098174773;
    v3[39] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v68, v68, 1), u32)[0];
    v71 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v69), v70, a3);
    v3[42] = SR_VEC_LANES(128, v71, i32)[0];
    *(float *)&v72 = *(float *)&v69 + 0.098174773;
    v3[41] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v71, v71, 1), u32)[0];
    v74 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v72), v73, a3);
    v3[44] = SR_VEC_LANES(128, v74, i32)[0];
    *(float *)&v75 = *(float *)&v72 + 0.098174773;
    v3[43] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v74, v74, 1), u32)[0];
    v77 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v75), v76, a3);
    v3[46] = SR_VEC_LANES(128, v77, i32)[0];
    *(float *)&v78 = *(float *)&v75 + 0.098174773;
    v3[45] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v77, v77, 1), u32)[0];
    v80 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v78), v79, a3);
    v3[48] = SR_VEC_LANES(128, v80, i32)[0];
    *(float *)&v81 = *(float *)&v78 + 0.098174773;
    v3[47] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v80, v80, 1), u32)[0];
    v83 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v81), v82, a3);
    v3[50] = SR_VEC_LANES(128, v83, i32)[0];
    *(float *)&v84 = *(float *)&v81 + 0.098174773;
    v3[49] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v83, v83, 1), u32)[0];
    v86 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v84), v85, a3);
    v3[52] = SR_VEC_LANES(128, v86, i32)[0];
    *(float *)&v87 = *(float *)&v84 + 0.098174773;
    v3[51] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v86, v86, 1), u32)[0];
    v89 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v87), v88, a3);
    v3[54] = SR_VEC_LANES(128, v89, i32)[0];
    *(float *)&v90 = *(float *)&v87 + 0.098174773;
    v3[53] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v89, v89, 1), u32)[0];
    v92 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v90), v91, a3);
    v3[56] = SR_VEC_LANES(128, v92, i32)[0];
    *(float *)&v93 = *(float *)&v90 + 0.098174773;
    v3[55] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v92, v92, 1), u32)[0];
    v95 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v93), v94, a3);
    v3[58] = SR_VEC_LANES(128, v95, i32)[0];
    *(float *)&v96 = *(float *)&v93 + 0.098174773;
    v3[57] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v95, v95, 1), u32)[0];
    v98 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)v96), v97, a3);
    v3[60] = SR_VEC_LANES(128, v98, i32)[0];
    v4 = *(float *)&v96 + 0.098174773;
    v3[59] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v98, v98, 1), u32)[0];
    v3 += 64;
  }
  while ( (__int64)v3 < (__int64)&dword_140404A6C[346696445] );
}

// 14013C957: variable 'a2' is possibly undefined
// 14013C978: variable 'v7' is possibly undefined
// 14013C998: variable 'v10' is possibly undefined
// 14013C9B9: variable 'v13' is possibly undefined
// 14013C9DA: variable 'v16' is possibly undefined
// 14013C9FB: variable 'v19' is possibly undefined
// 14013CA1C: variable 'v22' is possibly undefined
// 14013CA3D: variable 'v25' is possibly undefined
// 14013CA5E: variable 'v28' is possibly undefined
// 14013CA7F: variable 'v31' is possibly undefined
// 14013CAA0: variable 'v34' is possibly undefined
// 14013CAC1: variable 'v37' is possibly undefined
// 14013CAE2: variable 'v40' is possibly undefined
// 14013CB03: variable 'v43' is possibly undefined
// 14013CB24: variable 'v46' is possibly undefined
// 14013CB45: variable 'v49' is possibly undefined
// 14013CB66: variable 'v52' is possibly undefined
// 14013CB87: variable 'v55' is possibly undefined
// 14013CBAB: variable 'v58' is possibly undefined
// 14013CBD2: variable 'v61' is possibly undefined
// 14013CBF9: variable 'v64' is possibly undefined
// 14013CC20: variable 'v67' is possibly undefined
// 14013CC47: variable 'v70' is possibly undefined
// 14013CC6E: variable 'v73' is possibly undefined
// 14013CC95: variable 'v76' is possibly undefined
// 14013CCBC: variable 'v79' is possibly undefined
// 14013CCE3: variable 'v82' is possibly undefined
// 14013CD0A: variable 'v85' is possibly undefined
// 14013CD31: variable 'v88' is possibly undefined
// 14013CD58: variable 'v91' is possibly undefined
// 14013CD7F: variable 'v94' is possibly undefined
// 14013CDA6: variable 'v97' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014013CDF0) ----------------------------------------------------
void sub_14013CDF0()
{
  __int64 v0; // rax
  int v1; // ecx
  __int64 v2; // rbx
  char *v3; // rdx
  unsigned int *v4; // rcx
  char v5; // al
  int v6; // eax
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // rcx
  char v11; // dl
  char v12; // dl
  char v13; // dl
  __int64 v14; // rax
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // r15d
  unsigned int *v19; // r14
       char *v20; // rdi
  unsigned int *v21; // rbx
  signed __int64 v22; // rcx
  char v23; // al
  signed int v24; // r9d
  signed int v25; // r11d
  unsigned int *v26; // r10
  unsigned int *v27; // rcx
  signed __int64 v28; // r8
  int v29; // eax
  int v30; // edx
  _Alignas(8) _BYTE v34[296]; // [rsp+30h] [rbp-568h] BYREF
  /* Native filename is part of the find-data object, at offset 36. */
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013CDF0[1392];
#define v32 (*(__int64 (*))(void *)(sr_frame_14013CDF0 + 0)) /* [rsp+0h] */
#define v33 (*(int (*))(void *)(sr_frame_14013CDF0 + 32)) /* [rsp+20h] */
#define v36 (*(_BYTE (*)[1024])(void *)(sr_frame_14013CDF0 + 352)) /* [rsp+160h] */
#define v37 (*(__int64 (*))(void *)(sr_frame_14013CDF0 + 1376)) /* [rsp+560h] */

  dword_140404A6C[284024395] = 1140850688;
  dword_140404A6C[284024397] = 1145044992;
  dword_140404A6C[284024396] = 1115684864;
  *(_QWORD *)&dword_140404A6C[309078331] = -1;
  dword_140404A6C[309078330] = -1;
  dword_140404A6C[309078326] = -1;
  sub_140158AB0(v36, "data/%s/building/*.sbb", (     char *)&dword_140404A6C[283831313]);
  v0 = sub_14023A198(v36, (__int64)v34);
  v1 = 0;
  dword_140404A6C[293119325] = 0;
  v2 = v0;
  if ( (_DWORD)v0 != -1 )
  {
    do
    {
      if ( v1 >= 1024 )
        break;
      if ( (v34[0] & 0x10) == 0 )
      {
        v3 = (char *)v34 + 36;
        v4 = &dword_140404A6C[16 * (__int64)v1 + 293119326];
        do
        {
          v5 = *v3++;
          *(_BYTE *)v4 = v5;
          v4 = (unsigned int *)((char *)v4 + 1);
        }
        while ( v5 );
        ++dword_140404A6C[293119325];
      }
      v6 = sub_14023A5C4(v2, (__int64)v34);
      v1 = dword_140404A6C[293119325];
    }
    while ( v6 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v1 + 293119326]) = 0;
  sub_140239CCC(v2);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[293119326],
    (int)dword_140404A6C[293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  v7 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v8 = 0;
    do
    {
      v9 = 0;
      v10 = (char *)&dword_140404A6C[v8 + 293119326] + 1;
      do
      {
        v11 = *(v10 - 1);
        if ( !v11 || v11 == 46 )
          break;
        if ( !*v10 || *v10 == 46 )
        {
          ++v9;
          break;
        }
        v12 = v10[1];
        if ( !v12 || v12 == 46 )
        {
          v9 += 2;
          break;
        }
        v13 = v10[2];
        if ( !v13 || v13 == 46 )
        {
          v9 += 3;
          break;
        }
        v9 += 4;
        v10 += 4;
      }
      while ( v9 < 64 );
      v14 = v8 * 4 + v9;
      ++v7;
      v8 += 16;
      *((_BYTE *)&dword_140404A6C[293119326] + v14) = 0;
    }
    while ( v7 < (int)dword_140404A6C[293119325] );
  }
  v33 = sub_14024C22C("data");
  v15 = v33;
  v16 = sub_14024C22C(&dword_140404A6C[283831313]);
  v17 = 0;
  dword_140404A6C[309078327] = dword_140404A6C[293119325];
  v18 = v16;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v19 = &dword_140404A6C[225368670];
    do
    {
      v20 = (     char *)&dword_140404A6C[16 * (__int64)v17 + 293119326];
      asset_load_building_sbb_candidate((char *)&dword_140404A6C[456856205], v20, 1);
      v21 = &dword_140404A6C[22 * v17 + 225368653];
      v22 = (char *)v21 - v20;
      do
      {
        v23 = *v20;
        v20[v22] = *v20;
        ++v20;
      }
      while ( v23 );
      v24 = 0;
      *(v19 - 1) = dword_140404A6C[456856221];
      *v19 = dword_140404A6C[456856222];
      v19[1] = dword_140404A6C[456856223];
      v19[2] = dword_140404A6C[456856224];
      v19[3] = dword_140404A6C[456856225];
      v19[4] = dword_140404A6C[456856226];
      v25 = dword_140404A6C[225171849];
      if ( (int)dword_140404A6C[225171849] > 0 )
      {
        v26 = &dword_140404A6C[225171850];
        do
        {
          v27 = &dword_140404A6C[24 * v24 + 225171851];
          v28 = (char *)v21 - (char *)v27;
          do
          {
            v29 = *((unsigned __int8 *)v27 + v28);
            v30 = *(unsigned __int8 *)v27 - v29;
            if ( v30 )
              break;
            v27 = (unsigned int *)((char *)v27 + 1);
          }
          while ( v29 );
          if ( !v30 )
          {
            *v26 = v17;
            v25 = dword_140404A6C[225171849];
          }
          ++v24;
          v26 += 24;
        }
        while ( v24 < v25 );
      }
      ++v17;
      v19 += 22;
    }
    while ( v17 < (int)dword_140404A6C[293119325] );
    v15 = v33;
  }
  if ( !v18 )
    sub_14024C22C("..");
  if ( !v15 )
    sub_14024C22C("..");
  return; /* native catalog callers discard the compiler cookie result */
}
#undef v32
#undef v33
#undef v36
#undef v37

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 175EFB090: using guessed type unsigned int;
// 183F7C398: using guessed type unsigned int;
// 183F7C39C: using guessed type unsigned int;
// 183F7C3A0: using guessed type unsigned int;
// 18622DFE0: using guessed type unsigned int;
// 189F0EF44: using guessed type unsigned int;
// 189F0EF48: using guessed type unsigned int;
// 189F0EF54: using guessed type unsigned int;
// 189F0EF58: using guessed type unsigned int;
// 1AD2C94E0: using guessed type unsigned int;
// 1AD2C94E4: using guessed type unsigned int;
// 1AD2C94E8: using guessed type unsigned int;
// 1AD2C94EC: using guessed type unsigned int;
// 1AD2C94F0: using guessed type unsigned int;
// 1AD2C94F4: using guessed type unsigned int;

//----- (000000014013D1B0) ----------------------------------------------------
double sub_14013D1B0()
{
  int v0; // ebx
  __m128 v1; // xmm6
  double v2; // xmm0_8
  int i; // ebx
  double v4; // xmm0_8
  double v5; // xmm1_8
  unsigned int *v6; // rdi
  signed int v7; // ebx
  __m128i si128; // xmm7
  double v9; // xmm0_8
  int v10; // edi
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rbx
  int v14; // edi
  __int64 v15; // rbx
  int v16; // edi
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rbx
  int j; // ebx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx

  v0 = 0;
  SR_VEC_LANES(128, v1, i32)[0] = 0;
  do
  {
    v2 = cos((float)v0++ * 0.1847995678582353);
    SR_VEC_LANES(128, v1, f32)[0] = v2 + SR_VEC_LANES(128, v1, f32)[0];
  }
  while ( v0 < 8 );
  for ( i = 1; i < 8; ++i )
  {
    v4 = cos((float)i * 0.1847995678582353);
    v5 = SR_VEC_LANES(128, v1, f32)[0];
    v1 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    SR_VEC_LANES(128, v1, f32)[0] = v4 + v5;
  }
  SR_VEC_LANES(128, v1, f32)[0] = SR_VEC_LANES(128, v1, f32)[0] * 0.875;
  v6 = &dword_140404A6C[284677597];
  v7 = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278F50);
  *(double *)SR_VEC_LANES(128, v1, u64) = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v1, v1, 0), f32)[0];
  do
  {
    v9 = SR_VEC_READ_LANES(128, sub_1401F8B50(
                      SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v7), 0), _mm_move_epi64(si128))), f32)[0]
                    * 0.1847995678582353), f64)[0];
    v7 += 2;
    v6 += 2;
    *((double *)v6 - 1) = v9 / *(double *)SR_VEC_LANES(128, v1, u64);
  }
  while ( v7 < 8 );
  qword_140404050(3553, dword_140404A6C[42 * dword_140404A6C[283829862] + 436582486]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
  (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    34842,
    dword_140404A6C[278520508],
    dword_140404A6C[278520509],
    0,
    6408,
    5126,
    0);
  qword_140404050(3553, dword_140404A6C[42 * dword_140404A6C[283829871] + 436582486]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
  (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    32856,
    dword_140404A6C[278520508],
    dword_140404A6C[278520509],
    0,
    6408,
    5121,
    0);
  qword_140404050(3553, dword_140404A6C[42 * dword_140404A6C[283829873] + 436582486]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
  (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    32856,
    dword_140404A6C[278520508],
    dword_140404A6C[278520509],
    0,
    6408,
    5121,
    0);
  v10 = dword_140404A6C[283829863];
  v11 = 44LL * (int)dword_140404A6C[283829863];
  dword_140404A6C[v11 + 284024933] = dword_140404A6C[278520508];
  dword_140404A6C[v11 + 284024934] = dword_140404A6C[278520509];
  dword_140404A6C[v11 + 284024935] = 1;
  dword_140404A6C[v11 + 284024936] = 6408;
  dword_140404A6C[v11 + 284024937] = 32856;
  dword_140404A6C[v11 + 284024938] = 33071;
  dword_140404A6C[v11 + 284024939] = 33071;
  dword_140404A6C[v11 + 284024940] = 9729;
  dword_140404A6C[v11 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v11 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v11 + 284024945] = 0;
  sub_14014D3E0(v10, 0);
  v12 = dword_140404A6C[283829866];
  v13 = 44LL * (int)dword_140404A6C[283829866];
  dword_140404A6C[v13 + 284024933] = dword_140404A6C[278520508];
  dword_140404A6C[v13 + 284024934] = dword_140404A6C[278520509];
  dword_140404A6C[v13 + 284024935] = 1;
  dword_140404A6C[v13 + 284024936] = 6408;
  dword_140404A6C[v13 + 284024937] = 32856;
  dword_140404A6C[v13 + 284024938] = 33071;
  dword_140404A6C[v13 + 284024939] = 33071;
  dword_140404A6C[v13 + 284024940] = 9728;
  dword_140404A6C[v13 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[v13 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v13 + 284024945] = 0;
  sub_14014D3E0(v12, 0);
  v14 = dword_140404A6C[283829868];
  v15 = 44LL * (int)dword_140404A6C[283829868];
  dword_140404A6C[v15 + 284024933] = dword_140404A6C[278520508];
  dword_140404A6C[v15 + 284024934] = dword_140404A6C[278520509];
  dword_140404A6C[v15 + 284024935] = 1;
  dword_140404A6C[v15 + 284024936] = 6408;
  dword_140404A6C[v15 + 284024937] = 32856;
  dword_140404A6C[v15 + 284024938] = 33071;
  dword_140404A6C[v15 + 284024939] = 33071;
  dword_140404A6C[v15 + 284024940] = 9729;
  dword_140404A6C[v15 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v15 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v15 + 284024945] = 0;
  sub_14014D3E0(v14, 0);
  v16 = dword_140404A6C[283829869];
  v17 = 44LL * (int)dword_140404A6C[283829869];
  dword_140404A6C[v17 + 284024933] = dword_140404A6C[278520508];
  dword_140404A6C[v17 + 284024934] = dword_140404A6C[278520509];
  dword_140404A6C[v17 + 284024935] = 1;
  dword_140404A6C[v17 + 284024936] = 6408;
  dword_140404A6C[v17 + 284024937] = 32856;
  dword_140404A6C[v17 + 284024938] = 33071;
  dword_140404A6C[v17 + 284024939] = 33071;
  dword_140404A6C[v17 + 284024940] = 9729;
  dword_140404A6C[v17 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v17 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v17 + 284024945] = 0;
  sub_14014D3E0(v16, 0);
  v18 = dword_140404A6C[283829870];
  v19 = 44LL * (int)dword_140404A6C[283829870];
  dword_140404A6C[v19 + 284024933] = dword_140404A6C[278520508];
  dword_140404A6C[v19 + 284024934] = dword_140404A6C[278520509];
  dword_140404A6C[v19 + 284024935] = 1;
  dword_140404A6C[v19 + 284024936] = 6408;
  dword_140404A6C[v19 + 284024937] = 32856;
  dword_140404A6C[v19 + 284024938] = 33071;
  dword_140404A6C[v19 + 284024939] = 33071;
  dword_140404A6C[v19 + 284024940] = 9729;
  dword_140404A6C[v19 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v19 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v19 + 284024945] = 0;
  sub_14014D3E0(v18, 0);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829867] + 284024944]);
  (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    36013,
    dword_140404A6C[278520508],
    dword_140404A6C[278520509],
    0,
    34041,
    36269,
    0);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9728);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9728);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(34895);
  qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(34067, 10240, 9729);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(34067, 10241, 9985);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(34067, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(34067, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(34067, 32882, 33071);
  for ( j = 0; j < 6; ++j )
    (*(void (           **)(_QWORD, _QWORD, __int64, __int64, int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
      (unsigned int)(j + 34069),
      0,
      34842,
      512,
      512,
      0,
      6408,
      5126,
      0);
  unk_140404738(34067);
  qword_140404050(34067, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[44 * dword_140404A6C[283829862] + 284024944], 0);
  unk_1404046C0(36161, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791766]);
  v21 = 35056;
  if ( dword_140404A6C[73991625] )
    v21 = 36013;
  unk_1404046D8(36161, v21, dword_140404A6C[278520508], dword_140404A6C[278520509]);
  unk_1404046C0(36161, 0);
  unk_140404728(36160, 33306, 36161, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791766]);
  v22 = unk_140404708(36160);
  if ( dword_140404A6C[73991625] )
  {
    if ( v22 == 36053 )
      goto LABEL_16;
    unk_1404046C0(36161, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791766]);
    unk_1404046D8(36161, 35056, dword_140404A6C[278520508], dword_140404A6C[278520509]);
    unk_1404046C0(36161, 0);
    unk_140404728(36160, 33306, 36161, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791766]);
    v22 = unk_140404708(36160);
  }
  if ( v22 != 36053 )
    sub_140198F95(16, (__int64)"OpenGL Error", (__int64)"Unable to create framebuffer");
LABEL_16:
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790136] + 283791765]);
  unk_140404718(36160, 36064, 34069, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944], 0);
  unk_1404046C0(36161, dword_140404A6C[2 * dword_140404A6C[283790136] + 283791766]);
  unk_1404046D8(36161, 35056, 512, 512);
  unk_1404046C0(36161, 0);
  unk_140404728(36160, 33306, 36161, dword_140404A6C[2 * dword_140404A6C[283790136] + 283791766]);
  if ( (unsigned int)unk_140404708(36160) != 36053 )
    sub_140198F95(16, (__int64)"OpenGL Error", (__int64)"Unable to create cubemap framebuffer");
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790155] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[44 * dword_140404A6C[283829871] + 284024944], 0);
  unk_1404046C0(36161, dword_140404A6C[2 * dword_140404A6C[283790155] + 283791766]);
  v23 = 35056;
  if ( dword_140404A6C[73991625] )
    v23 = 36013;
  unk_1404046D8(36161, v23, dword_140404A6C[278520508], dword_140404A6C[278520509]);
  unk_1404046C0(36161, 0);
  unk_140404728(36160, 33306, 36161, dword_140404A6C[2 * dword_140404A6C[283790155] + 283791766]);
  return unk_1404046F0(36160, 0);
}

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140279490: using guessed type __int128 xmmword_140279490;
// 1402794C0: using guessed type __int128 xmmword_1402794C0;
// 1402794D0: using guessed type __int128 xmmword_1402794D0;
// 1402794F0: using guessed type __int128 xmmword_1402794F0;
// 140279500: using guessed type __int128 xmmword_140279500;
// 140279510: using guessed type __int128 xmmword_140279510;
// 140279520: using guessed type __int128 xmmword_140279520;
// 140279540: using guessed type __int128 xmmword_140279540;
// 140279560: using guessed type __int128 xmmword_140279560;
// 140279570: using guessed type __int128 xmmword_140279570;
// 140279580: using guessed type __int128 xmmword_140279580;
// 140279590: using guessed type __int128 xmmword_140279590;
// 1402795A0: using guessed type __int128 xmmword_1402795A0;
// 1402795B0: using guessed type __int128 xmmword_1402795B0;
// 1402795C0: using guessed type __int128 xmmword_1402795C0;
// 1402795D0: using guessed type __int128 xmmword_1402795D0;
// 1402795E0: using guessed type __int128 xmmword_1402795E0;
// 1402795F0: using guessed type __int128 xmmword_1402795F0;
// 140279600: using guessed type __int128 xmmword_140279600;
// 140279610: using guessed type __int128 xmmword_140279610;
// 140279620: using guessed type __int128 xmmword_140279620;
// 140279630: using guessed type __int128 xmmword_140279630;
// 140279640: using guessed type __int128 xmmword_140279640;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1812C2F9C: using guessed type unsigned int;
// 1812C2FE0: using guessed type unsigned int;
// 1812C2FE4: using guessed type unsigned int;
// 1812C2FF4: using guessed type unsigned int;
// 1812C3004: using guessed type unsigned int;
// 1812C3054: using guessed type unsigned int;
// 1812C3058: using guessed type unsigned int;
// 1812C3068: using guessed type unsigned int;
// 1812C3078: using guessed type unsigned int;
// 1812C30C8: using guessed type unsigned int;
// 1812C30CC: using guessed type unsigned int;
// 1812C30DC: using guessed type unsigned int;
// 1812C30EC: using guessed type unsigned int;
// 1812C313C: using guessed type unsigned int;
// 1812C3140: using guessed type unsigned int;
// 1812C3150: using guessed type unsigned int;
// 1812C3160: using guessed type unsigned int;
// 1812C31B0: using guessed type unsigned int;
// 1812C31B4: using guessed type unsigned int;
// 1812C31C4: using guessed type unsigned int;
// 1812C31D4: using guessed type unsigned int;
// 1812C3224: using guessed type unsigned int;
// 1812C3228: using guessed type unsigned int;
// 1812C3238: using guessed type unsigned int;
// 1812C3248: using guessed type unsigned int;
// 1812C3298: using guessed type unsigned int;
// 1812C329C: using guessed type unsigned int;
// 1812C32AC: using guessed type unsigned int;
// 1812C32BC: using guessed type unsigned int;
// 1812C3E6C: using guessed type unsigned int;
// 1812C3EB0: using guessed type int[];
// 1812C3EB4: using guessed type unsigned int;
// 1812C3EC4: using guessed type unsigned int;
// 1812C3ED4: using guessed type unsigned int;
// 1812C3F24: using guessed type unsigned int;
// 1812C3F28: using guessed type unsigned int;
// 1812C3F38: using guessed type unsigned int;
// 1812C3F48: using guessed type unsigned int;
// 1812C3F98: using guessed type unsigned int;
// 1812C3F9C: using guessed type unsigned int;
// 1812C3FAC: using guessed type unsigned int;
// 1812C3FBC: using guessed type unsigned int;
// 1812C4D3C: using guessed type unsigned int;
// 1812C4D80: using guessed type unsigned int;
// 1812C4D84: using guessed type unsigned int;
// 1812C4D94: using guessed type unsigned int;
// 1812C4DA4: using guessed type unsigned int;
// 1812C4DF4: using guessed type unsigned int;
// 1812C4DF8: using guessed type unsigned int;
// 1812C4E08: using guessed type unsigned int;
// 1812C4E18: using guessed type unsigned int;
// 1812C4E68: using guessed type unsigned int;
// 1812C4E6C: using guessed type unsigned int;
// 1812C4E7C: using guessed type unsigned int;
// 1812C4E8C: using guessed type unsigned int;
// 1812C4EDC: using guessed type unsigned int;
// 1812C4EE0: using guessed type unsigned int;
// 1812C4EF0: using guessed type unsigned int;
// 1812C4F00: using guessed type unsigned int;
// 1812C4F50: using guessed type unsigned int;
// 1812C4F54: using guessed type unsigned int;
// 1812C4F64: using guessed type unsigned int;
// 1812C4F74: using guessed type unsigned int;
// 1812C4FC4: using guessed type unsigned int;
// 1812C4FC8: using guessed type unsigned int;
// 1812C4FD8: using guessed type unsigned int;
// 1812C4FE8: using guessed type unsigned int;
// 1812C5038: using guessed type unsigned int;
// 1812C503C: using guessed type unsigned int;
// 1812C504C: using guessed type unsigned int;
// 1812C505C: using guessed type unsigned int;
// 1812C50AC: using guessed type unsigned int;
// 1812C50B0: using guessed type unsigned int;
// 1812C50C0: using guessed type unsigned int;
// 1812C50D0: using guessed type unsigned int;
// 181676080: using guessed type unsigned int;
// 18622DFE0: using guessed type unsigned int;

//----- (000000014013F590) ----------------------------------------------------
double            sub_14013F590(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // r9
  __int64 v6; // rax
  char *v7; // r11
  char *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // r14
  char *v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // r11
  __int64 v23; // r9
  unsigned int *v24; // r8
  unsigned int *v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // r11
  unsigned int *v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013F590[80];
#define v49 (*(__int64 (*))(void *)(sr_frame_14013F590 + 0)) /* [rsp+20h] */
#define v50 (*(__int64 (*))(void *)(sr_frame_14013F590 + 8)) /* [rsp+28h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_14013F590 + 16)) /* [rsp+30h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_14013F590 + 48)) /* [rsp+50h] */
#define v53 (*(__int64 (*))(void *)(sr_frame_14013F590 + 56)) /* [rsp+58h] */
#define v54 (*(__int64 (*))(void *)(sr_frame_14013F590 + 72)) /* [rsp+68h] */

  v2 = 0;
  v3 = 50LL * a1;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  v4 = 0;
  dword_140404A6C[177167565] = dword_140404A6C[v3 + 272248222];
  v5 = (int)dword_140404A6C[177167565];
  v52 = (int)dword_140404A6C[177167565];
  if ( (int)dword_140404A6C[177167565] < 4LL )
  {
    if ( (int)dword_140404A6C[177167565] <= 0 )
      goto LABEL_10;
    v14 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
    goto LABEL_8;
  }
  v6 = *(_QWORD *)&dword_140404A6C[v3 + 272248223];
  v7 = (char *)&dword_140404A6C[177167568] - v6;
  v54 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
  v8 = (char *)&dword_140404A6C[177167567] - v6;
  v9 = v54 + 20;
  v10 = v6 + 20;
  v11 = (char *)&dword_140404A6C[177167569] - v6;
  v12 = (char *)&dword_140404A6C[177216715] - v54;
  v13 = ((unsigned __int64)((int)dword_140404A6C[177167565] - 4LL) >> 2) + 1;
  v53 = 4 * v13;
  do
  {
    v9 += 32;
    *(_DWORD *)&v8[v10 - 20] = *(_DWORD *)(v10 - 20);
    *(_DWORD *)&v7[v10 - 20] = *(_DWORD *)(v10 - 16);
    *(_DWORD *)&v11[v10 - 20] = *(_DWORD *)(v10 - 12);
    v10 += 48;
    *(unsigned int *)((char *)&dword_140404A6C[177216706] + v9 - v54) = *(_DWORD *)(v9 - 52);
    *(_DWORD *)&v12[v9 - 32] = *(_DWORD *)(v9 - 48);
    *(unsigned int *)((char *)&dword_140404A6C[177167553] + v10 - v6) = *(_DWORD *)(v10 - 56);
    *(unsigned int *)((char *)&dword_140404A6C[177167554] + v10 - v6) = *(_DWORD *)(v10 - 52);
    *(_DWORD *)&v8[v10 - 48] = *(_DWORD *)(v10 - 48);
    *(unsigned int *)((char *)&dword_140404A6C[177216708] + v9 - v54) = *(_DWORD *)(v9 - 44);
    *(unsigned int *)((char *)&dword_140404A6C[177216709] + v9 - v54) = *(_DWORD *)(v9 - 40);
    *(_DWORD *)&v7[v10 - 48] = *(_DWORD *)(v10 - 44);
    *(_DWORD *)&v11[v10 - 48] = *(_DWORD *)(v10 - 40);
    *(unsigned int *)((char *)&dword_140404A6C[177167558] + v10 - v6) = *(_DWORD *)(v10 - 36);
    *(unsigned int *)((char *)&dword_140404A6C[177216710] + v9 - v54) = *(_DWORD *)(v9 - 36);
    *(unsigned int *)((char *)&dword_140404A6C[177216711] + v9 - v54) = *(_DWORD *)(v9 - 32);
    *(unsigned int *)((char *)&dword_140404A6C[177167559] + v10 - v6) = *(_DWORD *)(v10 - 32);
    *(unsigned int *)((char *)&dword_140404A6C[177167560] + v10 - v6) = *(_DWORD *)(v10 - 28);
    *(unsigned int *)((char *)&dword_140404A6C[177167561] + v10 - v6) = *(_DWORD *)(v10 - 24);
    *(unsigned int *)((char *)&dword_140404A6C[177216712] + v9 - v54) = *(_DWORD *)(v9 - 28);
    *(unsigned int *)((char *)&dword_140404A6C[177216713] + v9 - v54) = *(_DWORD *)(v9 - 24);
    v12 = (char *)&dword_140404A6C[177216715] - v54;
    --v13;
  }
  while ( v13 );
  v5 = v52;
  v4 = v53;
  v2 = 0;
  v14 = v54;
  if ( v53 < v52 )
  {
LABEL_8:
    v15 = *(_QWORD *)&dword_140404A6C[v3 + 272248223];
    v16 = &dword_140404A6C[3 * v4 + 177167569];
    v17 = v15 + 4 * (3 * v4 + 2);
    v18 = v15 - (_QWORD)&dword_140404A6C[177167569];
    v19 = v14 + 8 * v4;
    v20 = v5 - v4;
    do
    {
      v19 += 8;
      *(v16 - 2) = *(unsigned int *)((char *)v16 + v18);
      v16 += 3;
      v21 = *(_DWORD *)(v17 - 4);
      v17 += 12;
      *(v16 - 4) = v21;
      *(v16 - 3) = *(_DWORD *)(v17 - 12);
      *(unsigned int *)((char *)&dword_140404A6C[177216717] + v19 - v14) = *(_DWORD *)(v19 - 8);
      *(unsigned int *)((char *)&dword_140404A6C[177216718] + v19 - v14) = *(_DWORD *)(v19 - 4);
      --v20;
    }
    while ( v20 );
  }
LABEL_10:
  dword_140404A6C[177495247] = dword_140404A6C[v3 + 272248227];
  v22 = (int)dword_140404A6C[177495247];
  v51 = (int)dword_140404A6C[177495247];
  if ( (int)dword_140404A6C[177495247] < 4LL )
  {
    if ( (int)dword_140404A6C[177495247] <= 0 )
      return sub_1401449C0(a2, 1);
    v40 = *(_QWORD *)&dword_140404A6C[v3 + 272248229];
    v23 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
    goto LABEL_17;
  }
  v23 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
  v24 = &dword_140404A6C[178011348];
  v49 = *(_QWORD *)&dword_140404A6C[v3 + 272248229];
  v25 = (unsigned int *)(v49 + 8);
  v26 = ((unsigned __int64)((int)dword_140404A6C[177495247] - 4LL) >> 2) + 1;
  v50 = 4 * v26;
  do
  {
    *(unsigned int *)((char *)&dword_140404A6C[177495246] + (_QWORD)v25 - v49) = *(v25 - 2);
    v27 = (int)(2 * *(v25 - 2));
    *(v24 - 3) = *(_DWORD *)(v23 + 4 * v27);
    *(v24 - 2) = *(_DWORD *)(v23 + 4 * v27 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495247] + (_QWORD)v25 - v49) = *(v25 - 1);
    v28 = (int)(2 * *(v25 - 1));
    *(v24 - 1) = *(_DWORD *)(v23 + 4 * v28);
    *v24 = *(_DWORD *)(v23 + 4 * v28 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495248] + (_QWORD)v25 - v49) = *v25;
    v29 = (int)(2 * *v25);
    v24[1] = *(_DWORD *)(v23 + 4 * v29);
    v24[2] = *(_DWORD *)(v23 + 4 * v29 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495249] + (_QWORD)v25 - v49) = v25[1];
    v30 = (int)(2 * v25[1]);
    v24[3] = *(_DWORD *)(v23 + 4 * v30);
    v24[4] = *(_DWORD *)(v23 + 4 * v30 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495250] + (_QWORD)v25 - v49) = v25[2];
    v31 = (int)(2 * v25[2]);
    v24[5] = *(_DWORD *)(v23 + 4 * v31);
    v24[6] = *(_DWORD *)(v23 + 4 * v31 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495251] + (_QWORD)v25 - v49) = v25[3];
    v32 = (int)(2 * v25[3]);
    v24[7] = *(_DWORD *)(v23 + 4 * v32);
    v24[8] = *(_DWORD *)(v23 + 4 * v32 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495252] + (_QWORD)v25 - v49) = v25[4];
    v33 = (int)(2 * v25[4]);
    v24[9] = *(_DWORD *)(v23 + 4 * v33);
    v24[10] = *(_DWORD *)(v23 + 4 * v33 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495253] + (_QWORD)v25 - v49) = v25[5];
    v34 = (int)(2 * v25[5]);
    v24[11] = *(_DWORD *)(v23 + 4 * v34);
    v24[12] = *(_DWORD *)(v23 + 4 * v34 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495254] + (_QWORD)v25 - v49) = v25[6];
    v35 = (int)(2 * v25[6]);
    v24[13] = *(_DWORD *)(v23 + 4 * v35);
    v24[14] = *(_DWORD *)(v23 + 4 * v35 + 4);
    v36 = v25[7];
    v24 += 24;
    v25 += 12;
    *(unsigned int *)((char *)&dword_140404A6C[177495243] + (_QWORD)v25 - v49) = v36;
    v37 = (int)(2 * *(v25 - 5));
    *(v24 - 9) = *(_DWORD *)(v23 + 4 * v37);
    *(v24 - 8) = *(_DWORD *)(v23 + 4 * v37 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495244] + (_QWORD)v25 - v49) = *(v25 - 4);
    v38 = (int)(2 * *(v25 - 4));
    *(v24 - 7) = *(_DWORD *)(v23 + 4 * v38);
    *(v24 - 6) = *(_DWORD *)(v23 + 4 * v38 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495245] + (_QWORD)v25 - v49) = *(v25 - 3);
    v39 = (int)(2 * *(v25 - 3));
    *(v24 - 5) = *(_DWORD *)(v23 + 4 * v39);
    *(v24 - 4) = *(_DWORD *)(v23 + 4 * v39 + 4);
    --v26;
  }
  while ( v26 );
  v22 = v51;
  v2 = v50;
  v40 = v49;
  if ( v50 < v51 )
  {
LABEL_17:
    v41 = v40 + 4 * (v2 + 2 * (v2 + 1));
    v42 = v22 - v2;
    v43 = &dword_140404A6C[6 * v2 + 178011348];
    do
    {
      v43 += 6;
      *(unsigned int *)((char *)&dword_140404A6C[177495246] + v41 - v40) = *(_DWORD *)(v41 - 8);
      v44 = *(_DWORD *)(v41 - 8);
      v41 += 12;
      v45 = 2 * v44;
      *(v43 - 9) = *(_DWORD *)(v23 + 4 * v45);
      *(v43 - 8) = *(_DWORD *)(v23 + 4 * v45 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[177495244] + v41 - v40) = *(_DWORD *)(v41 - 16);
      v46 = 2 * *(_DWORD *)(v41 - 16);
      *(v43 - 7) = *(_DWORD *)(v23 + 4 * v46);
      *(v43 - 6) = *(_DWORD *)(v23 + 4 * v46 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[177495245] + v41 - v40) = *(_DWORD *)(v41 - 12);
      v47 = 2 * *(_DWORD *)(v41 - 12);
      *(v43 - 5) = *(_DWORD *)(v23 + 4 * v47);
      *(v43 - 4) = *(_DWORD *)(v23 + 4 * v47 + 4);
      --v42;
    }
    while ( v42 );
  }
  return sub_1401449C0(a2, 1);
}
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014013FCD0) ----------------------------------------------------
double            sub_14013FCD0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rbp
  int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  char *v9; // r9
  char *v10; // r11
  _DWORD *v11; // rcx
  char *v12; // r14
  char *v13; // r15
  unsigned int *v14; // rdx
  char *v15; // r13
  char *v16; // r12
  char *v17; // rbx
  char *v18; // rsi
  char *v19; // r8
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  unsigned int *v22; // rcx
  __int64 v23; // r11
  unsigned int *v24; // rdx
  float *v25; // r9
  __int64 v26; // r11
  __int64 v27; // rdi
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned int v34; // r12d
  unsigned int v35; // r11d
  unsigned int v36; // ebx
  unsigned int *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013FCD0[128];
#define v43 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 0)) /* [rsp+60h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 8)) /* [rsp+68h] */
#define v45 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 16)) /* [rsp+70h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 120)) /* [rsp+D8h] */

  v2 = 0;
  v4 = 5072LL * a1;
  dword_140404A6C[177495247] = 0;
  v5 = a2;
  dword_140404A6C[178519250] = 0;
  v45 = v4;
  v6 = 0;
  dword_140404A6C[177167565] = *(unsigned int *)((char *)&dword_140404A6C[278522541] + v4);
  v7 = (int)dword_140404A6C[177167565];
  v43 = (int)dword_140404A6C[177167565];
  if ( (int)dword_140404A6C[177167565] < 4LL )
  {
    if ( (int)dword_140404A6C[177167565] <= 0 )
      goto LABEL_18;
    v21 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
    goto LABEL_14;
  }
  v8 = *(_QWORD *)((char *)&dword_140404A6C[278522543] + v4);
  v9 = (char *)&dword_140404A6C[177167568] - v8;
  v47 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
  v10 = (char *)&dword_140404A6C[177167569] - v8;
  v11 = (_DWORD *)(v8 + 20);
  v12 = (char *)&dword_140404A6C[177167566] - v8;
  v13 = (char *)&dword_140404A6C[177167570] - v8;
  v14 = (unsigned int *)(v47 + 20);
  v15 = (char *)&dword_140404A6C[177167573] - v8;
  v16 = (char *)&dword_140404A6C[177167572] - v8;
  v17 = (char *)&dword_140404A6C[177167567] - v8;
  v18 = (char *)&dword_140404A6C[177167565] - v8;
  v19 = (char *)&dword_140404A6C[177167571] - v8;
  v20 = ((unsigned __int64)((int)dword_140404A6C[177167565] - 4LL) >> 2) + 1;
  v44 = 4 * v20;
  do
  {
    *(_DWORD *)&v17[(_QWORD)v11 - 20] = *(v11 - 5);
    *(_DWORD *)((char *)v11 + (_QWORD)v9 - 20) = *(v11 - 4);
    *(_DWORD *)((char *)v11 + (_QWORD)v10 - 20) = *(v11 - 3);
    if ( a1 == 45 )
    {
      *(float *)&v17[(_QWORD)v11 - 20] = *(float *)&v17[(_QWORD)v11 - 20] * 1.5;
      *(float *)((char *)v11 + (_QWORD)v9 - 20) = *(float *)((char *)v11 + (_QWORD)v9 - 20) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v10 - 20) = *(float *)((char *)v11 + (_QWORD)v10 - 20) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216714] + (_QWORD)v14 - v47) = *(v14 - 5);
    *(unsigned int *)((char *)&dword_140404A6C[177216715] + (_QWORD)v14 - v47) = *(v14 - 4);
    *(_DWORD *)&v18[(_QWORD)v11] = *(v11 - 2);
    *(_DWORD *)((char *)v11 + (_QWORD)v12) = *(v11 - 1);
    *(_DWORD *)((char *)v11 + (_QWORD)v17) = *v11;
    if ( a1 == 45 )
    {
      *(float *)&v18[(_QWORD)v11] = *(float *)&v18[(_QWORD)v11] * 1.5;
      *(float *)((char *)v11 + (_QWORD)v12) = *(float *)((char *)v11 + (_QWORD)v12) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v17) = *(float *)((char *)v11 + (_QWORD)v17) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216716] + (_QWORD)v14 - v47) = *(v14 - 3);
    *(unsigned int *)((char *)&dword_140404A6C[177216717] + (_QWORD)v14 - v47) = *(v14 - 2);
    *(_DWORD *)((char *)v11 + (_QWORD)v9) = v11[1];
    *(_DWORD *)((char *)v11 + (_QWORD)v10) = v11[2];
    *(_DWORD *)((char *)v11 + (_QWORD)v13) = v11[3];
    if ( a1 == 45 )
    {
      *(float *)((char *)v11 + (_QWORD)v9) = *(float *)((char *)v11 + (_QWORD)v9) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v10) = *(float *)((char *)v11 + (_QWORD)v10) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v13) = *(float *)((char *)v11 + (_QWORD)v13) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216718] + (_QWORD)v14 - v47) = *(v14 - 1);
    *(unsigned int *)((char *)&dword_140404A6C[177216719] + (_QWORD)v14 - v47) = *v14;
    *(_DWORD *)&v19[(_QWORD)v11] = v11[4];
    *(_DWORD *)&v16[(_QWORD)v11] = v11[5];
    *(_DWORD *)&v15[(_QWORD)v11] = v11[6];
    if ( a1 == 45 )
    {
      *(float *)&v19[(_QWORD)v11] = *(float *)&v19[(_QWORD)v11] * 1.5;
      *(float *)&v16[(_QWORD)v11] = *(float *)&v16[(_QWORD)v11] * 1.5;
      *(float *)&v15[(_QWORD)v11] = *(float *)&v15[(_QWORD)v11] * 1.5;
    }
    v11 += 12;
    *(unsigned int *)((char *)&dword_140404A6C[177216720] + (_QWORD)v14 - v47) = v14[1];
    *(unsigned int *)((char *)&dword_140404A6C[177216721] + (_QWORD)v14 - v47) = v14[2];
    v14 += 8;
    --v20;
  }
  while ( v20 );
  v7 = v43;
  v6 = v44;
  v2 = 0;
  v5 = a2;
  v4 = v45;
  if ( v44 < v43 )
  {
    v21 = v47;
LABEL_14:
    v22 = &dword_140404A6C[3 * v6 + 177167569];
    v23 = *(_QWORD *)((char *)&dword_140404A6C[278522543] + v4);
    v24 = (unsigned int *)(v21 + 8 * v6);
    v25 = (float *)(v23 + 4 * (3 * v6 + 2));
    v26 = v23 - (_QWORD)&dword_140404A6C[177167569];
    v27 = v7 - v6;
    do
    {
      v28 = *(float *)((char *)v22 + v26);
      *((float *)v22 - 2) = v28;
      v29 = *(v25 - 1);
      *((float *)v22 - 1) = v29;
      v30 = *v25;
      *v22 = *(_DWORD *)v25;
      if ( a1 == 45 )
      {
        *((float *)v22 - 2) = v28 * 1.5;
        *((float *)v22 - 1) = v29 * 1.5;
        *(float *)v22 = v30 * 1.5;
      }
      v25 += 3;
      *(unsigned int *)((char *)&dword_140404A6C[177216719] + (_QWORD)v24 - v21) = *v24;
      v22 += 3;
      *(unsigned int *)((char *)&dword_140404A6C[177216720] + (_QWORD)v24 - v21) = v24[1];
      v24 += 2;
      --v27;
    }
    while ( v27 );
  }
LABEL_18:
  dword_140404A6C[177495247] = *(unsigned int *)((char *)&dword_140404A6C[278522547] + v4);
  v31 = (int)dword_140404A6C[177495247];
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v32 = *(_QWORD *)((char *)&dword_140404A6C[278522549] + v4);
    v33 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
    v34 = dword_140404A6C[283827005];
    v35 = dword_140404A6C[283827009];
    v36 = dword_140404A6C[283827006];
    v37 = (unsigned int *)(v32 + 8);
    do
    {
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495246] - v32) = *(v37 - 2);
      v38 = (int)(2 * *(v37 - 2));
      dword_140404A6C[v2 + 178011345] = *(_DWORD *)(v33 + 4 * v38);
      dword_140404A6C[v2 + 178011346] = *(_DWORD *)(v33 + 4 * v38 + 4);
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495247] - v32) = *(v37 - 1);
      v39 = (int)(2 * *(v37 - 1));
      dword_140404A6C[v2 + 178011347] = *(_DWORD *)(v33 + 4 * v39);
      dword_140404A6C[v2 + 178011348] = *(_DWORD *)(v33 + 4 * v39 + 4);
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495248] - v32) = *v37;
      v40 = (int)(2 * *v37);
      dword_140404A6C[v2 + 178011349] = *(_DWORD *)(v33 + 4 * v40);
      dword_140404A6C[v2 + 178011350] = *(_DWORD *)(v33 + 4 * v40 + 4);
      if ( v5 == v34 || v5 == v36 )
      {
        v41 = *(_QWORD *)((char *)&dword_140404A6C[278522551] + v4);
        dword_140404A6C[v2 + 178011345] = *(_DWORD *)(v41 + v2 * 4);
        dword_140404A6C[v2 + 178011346] = *(_DWORD *)(v41 + v2 * 4 + 4);
        dword_140404A6C[v2 + 178011347] = *(_DWORD *)(v41 + v2 * 4 + 8);
        dword_140404A6C[v2 + 178011348] = *(_DWORD *)(v41 + v2 * 4 + 12);
        dword_140404A6C[v2 + 178011349] = *(_DWORD *)(v41 + v2 * 4 + 16);
        dword_140404A6C[v2 + 178011350] = *(_DWORD *)(v41 + v2 * 4 + 20);
      }
      if ( v5 == v35 )
      {
        dword_140404A6C[v2 + 178011345] = 1035993088;
        dword_140404A6C[v2 + 178011346] = 1063780352;
        dword_140404A6C[v2 + 178011347] = 1035993088;
        dword_140404A6C[v2 + 178011348] = 1063780352;
        dword_140404A6C[v2 + 178011349] = 1035993088;
        dword_140404A6C[v2 + 178011350] = 1063780352;
      }
      v37 += 3;
      v2 += 6;
      --v31;
    }
    while ( v31 );
  }
  return sub_1401449C0(v5, 1);
}
#undef v43
#undef v44
#undef v45
#undef v47
