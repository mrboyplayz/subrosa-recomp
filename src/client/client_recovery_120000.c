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
         COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fsqrt(*(float *)&v4) * 0.5f)),
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


//----- (000000014012C450) ----------------------------------------------------
__int64 sub_14012C450()
{
  sub_14024C22C(&dword_140404A6C[278520373]);
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
