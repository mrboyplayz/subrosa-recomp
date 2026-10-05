/* Address: 0x1401ea7f0 | Name: sub_1401EA7F0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1401EA7F0(
        unsigned int *a1,
        void (__fastcall *a2)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int),
        __int64 a3,
        int a4,
        _BYTE *a5,
        int a6,
        int a7,
        void (__fastcall *a8)(__int64, int *, _QWORD, _QWORD, int, int, int),
        int a9,
        __int64 a10)
{
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  int v14; // eax
  _BYTE v16[9728]; // [rsp+50h] [rbp-2600h] BYREF
  int i; // [rsp+2650h] [rbp+0h] BYREF
  int v18; // [rsp+2654h] [rbp+4h]
  int v19; // [rsp+2658h] [rbp+8h] BYREF
  int v20; // [rsp+265Ch] [rbp+Ch]
  int v21; // [rsp+2660h] [rbp+10h]
  int k; // [rsp+2664h] [rbp+14h]
  int *v23; // [rsp+2668h] [rbp+18h]
  int v24; // [rsp+2670h] [rbp+20h]
  signed int v25; // [rsp+2674h] [rbp+24h]
  int j; // [rsp+2678h] [rbp+28h]
  int v27; // [rsp+267Ch] [rbp+2Ch] BYREF
  int v28; // [rsp+2680h] [rbp+30h]
  int *v29; // [rsp+2688h] [rbp+38h]
  int v30; // [rsp+2690h] [rbp+40h]
  int v31; // [rsp+2694h] [rbp+44h]
  int v32; // [rsp+2698h] [rbp+48h]
  int v33; // [rsp+269Ch] [rbp+4Ch]
  int v34; // [rsp+26A0h] [rbp+50h]
  int v35; // [rsp+26A4h] [rbp+54h]
  int v36; // [rsp+26A8h] [rbp+58h]
  int v37; // [rsp+26ACh] [rbp+5Ch]
  unsigned int v38; // [rsp+26B0h] [rbp+60h]
  int v39; // [rsp+26B4h] [rbp+64h]
  int v40; // [rsp+26B8h] [rbp+68h]
  int v41; // [rsp+26BCh] [rbp+6Ch]
  int v42; // [rsp+26C0h] [rbp+70h]
  BOOL v43; // [rsp+26C4h] [rbp+74h]
  BOOL v44; // [rsp+26C8h] [rbp+78h]
  int v45; // [rsp+26CCh] [rbp+7Ch]
  int v46; // [rsp+26D0h] [rbp+80h]
  _BYTE *v47; // [rsp+26D8h] [rbp+88h]
  _BYTE *v48; // [rsp+26E0h] [rbp+90h]
  int v49; // [rsp+26E8h] [rbp+98h]
  int v50; // [rsp+26ECh] [rbp+9Ch]
  signed int v51; // [rsp+26F0h] [rbp+A0h]
  int v52; // [rsp+26F4h] [rbp+A4h]
  signed int v53; // [rsp+26F8h] [rbp+A8h]
  int v54; // [rsp+26FCh] [rbp+ACh]
  signed int v55; // [rsp+2700h] [rbp+B0h]
  int v56; // [rsp+2704h] [rbp+B4h]
  signed int v57; // [rsp+2708h] [rbp+B8h]
  int v58; // [rsp+270Ch] [rbp+BCh]
  int v60; // [rsp+2714h] [rbp+C4h]
  int v61; // [rsp+2718h] [rbp+C8h]
  int v62; // [rsp+271Ch] [rbp+CCh]
  __int64 v63; // [rsp+2720h] [rbp+D0h] BYREF
  int *v64; // [rsp+2728h] [rbp+D8h]
  char *v65; // [rsp+2730h] [rbp+E0h]
  __int64 v66; // [rsp+2738h] [rbp+E8h]
  _BYTE v67[496]; // [rsp+2740h] [rbp+F0h] BYREF
  _DWORD v68[44]; // [rsp+2930h] [rbp+2E0h] BYREF
  _DWORD v69[256]; // [rsp+29E0h] [rbp+390h] BYREF
  __m128i v70[479]; // [rsp+2DE0h] [rbp+790h] BYREF
  __int64 v71; // [rsp+4BD0h] [rbp+2580h]

  v66 = 0;
  v65 = nullptr;
  if ( a1[71] == 1 )
  {
    v65 = sub_1401F6230(a1);
    v66 = sub_1401F6300((__int64)a1);
  }
  v23 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  sub_1401E0F40(v23, 4029, &v19);
  sub_1401E0F40(v23, 4007, &v27);
  sub_1401E0F40(v23, 10015, &v63);
  v18 = sub_1401E52C0(a4, a1[70], v19);
  if ( v18 > 0 )
  {
    v21 = 2 * a1[1] - 1;
    if ( v19 / v18 == 10 )
      v21 += a1[1];
    if ( a6 >= v21 )
    {
      v10 = 8LL * v18 + 15;
      if ( v10 <= 8LL * v18 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      v48 = v16;
      v36 = sub_1401E06F0(2);
      v37 = sub_1401E06F0(1);
      v12 = 4LL * (int)(21 * *a1) + 15;
      if ( v12 <= 4LL * (int)(21 * *a1) )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      v47 = v16;
      if ( a1[71] == 1 )
        sub_1401F68D0(v63, a3, (__int64)v47, v66, (__int64)v65, v18, 120, *a1, v19, a2, a1[67]);
      v45 = sub_1401F7C80(a1, (__int64)v69, v18);
      if ( !v27 )
      {
        if ( a1[72] == -1000 )
        {
          v61 = 3 * v45;
          v62 = 24 * v19 / v18;
          if ( a6 >= 3 * v45 / v62 )
          {
            v49 = 3 * v45;
            v50 = 24 * v19 / v18;
            v46 = 3 * v45 / v50;
          }
          else
          {
            v46 = a6;
          }
          a6 = v46;
        }
        else if ( a1[72] != -1 )
        {
          v51 = 3 * a1[72];
          v52 = 24 * v19 / v18;
          if ( v21 <= v51 / v52 )
          {
            v53 = 3 * a1[72];
            v54 = 24 * v19 / v18;
            v33 = v53 / v54;
          }
          else
          {
            v33 = v21;
          }
          if ( a6 >= v33 )
          {
            v55 = 3 * a1[72];
            v56 = 24 * v19 / v18;
            if ( v21 <= v55 / v56 )
            {
              v57 = 3 * a1[72];
              v58 = 24 * v19 / v18;
              v34 = v57 / v58;
            }
            else
            {
              v34 = v21;
            }
            v35 = v34;
          }
          else
          {
            v35 = a6;
          }
          a6 = v35;
        }
      }
      v23 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
      for ( i = 0; i < (int)a1[1]; ++i )
      {
        v29 = v23;
        if ( i >= (int)a1[2] )
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v37));
        else
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v36));
        sub_1401E0F40(v29, 4002, (unsigned int)v69[i]);
        if ( a1[71] == 1 )
        {
          v25 = a1[72];
          if ( 50 * v18 < v19 )
            v25 -= *a1 * 60 * (v19 / v18 - 50);
          if ( v25 <= (int)(10000 * *a1) )
          {
            if ( v25 <= (int)(7000 * *a1) )
            {
              if ( v25 <= (int)(5000 * *a1) )
                sub_1401E0F40(v29, 4008, 1101);
              else
                sub_1401E0F40(v29, 4008, 1103);
            }
            else
            {
              sub_1401E0F40(v29, 4008, 1104);
            }
          }
          else
          {
            sub_1401E0F40(v29, 4008, 1105);
          }
          if ( i < (int)a1[2] )
          {
            sub_1401E0F40(v29, 11002, 1002);
            sub_1401E0F40(v29, 4022, 2);
          }
        }
        else if ( a1[71] == 2 )
        {
          sub_1401E0F40(v29, 11002, 1002);
        }
      }
      v23 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
      v28 = 0;
      for ( i = 0; i < (int)a1[1]; ++i )
      {
        sub_1401E37F0(v67);
        v64 = v23;
        if ( i >= (int)a1[2] )
        {
          v32 = sub_1401E4DF0((int *)a1, i, -1);
          ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            v48,
            1,
            a3,
            *a1,
            v32,
            v18,
            a10);
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v37));
          if ( a1[71] == 1 )
          {
            for ( j = 0; j < 21; ++j )
              v68[j] = *(_DWORD *)&v47[84 * v32 + 4 * j];
          }
          v42 = v32;
          v41 = -1;
        }
        else
        {
          v30 = sub_1401E4CF0((int *)a1, i, -1);
          v31 = sub_1401E4D70((int *)a1, i, -1);
          ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            v48,
            2,
            a3,
            *a1,
            v30,
            v18,
            a10);
          ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            v48 + 4,
            2,
            a3,
            *a1,
            v31,
            v18,
            a10);
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v36));
          if ( a1[71] == 1 )
          {
            for ( k = 0; k < 21; ++k )
            {
              v68[k] = *(_DWORD *)&v47[84 * v30 + 4 * k];
              v68[k + 21] = *(_DWORD *)&v47[84 * v31 + 4 * k];
            }
          }
          v42 = v30;
          v41 = v31;
        }
        if ( a1[71] == 1 )
          sub_1401E0F40(v64, 10026, v68);
        v20 = a6 - v28;
        if ( (int)(2 * (a1[1] - i) - 3) >= 0 )
          v38 = 2 * (a1[1] - i) - 3;
        else
          v38 = 0;
        v20 -= v38;
        if ( v19 / v18 == 10 )
          v20 -= a1[1] - i - 1;
        if ( v20 >= 7662 )
          v39 = 7662;
        else
          v39 = v20;
        v20 = v39;
        if ( i != a1[1] - 1 )
        {
          if ( v20 <= 253 )
            v40 = 1;
          else
            v40 = 2;
          v20 -= v40;
        }
        if ( !v27 && i == a1[1] - 1 )
          sub_1401E0F40(v64, 4002, (unsigned int)(8 * v19 / v18 * v20));
        v24 = sub_1401E5400(v64, (__int64)v48, v18, v70, v20, a7, a3, a4, v42, v41, *a1, a8, a9);
        if ( v24 < 0 )
          break;
        if ( (unsigned int)sub_1401E3870((__int64)v67, v70[0].m128i_i8, v24) )
          break;
        v43 = !v27 && i == a1[1] - 1;
        v44 = i != a1[1] - 1;
        v60 = a6 - v28;
        v14 = unknown_libname_998(v67);
        v24 = sub_1401EA090((__int64)v67, 0, v14, a5, v60, v44, v43);
        a5 += v24;
        v28 += v24;
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v71);
}

