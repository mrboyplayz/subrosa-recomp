/* Address: 0x14019f210 | Name: sub_14019F210 | Size: 5675 bytes */
__int64 __fastcall sub_14019F210(__int64 *a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int *a6, int a7)
{
  void *v7; // rsp
  void *v8; // rsp
  void *v9; // rsp
  void *v10; // rsp
  int v11; // eax
  void *v12; // rsp
  void *v13; // rsp
  char *v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  int v17; // eax
  int v18; // eax
  int j; // [rsp+C0h] [rbp+0h] BYREF
  int k; // [rsp+C4h] [rbp+4h]
  int v22; // [rsp+C8h] [rbp+8h]
  int i; // [rsp+CCh] [rbp+Ch]
  int v24; // [rsp+D0h] [rbp+10h]
  unsigned int v25; // [rsp+D4h] [rbp+14h]
  int v26; // [rsp+D8h] [rbp+18h]
  __int64 v27; // [rsp+E0h] [rbp+20h]
  void *Src; // [rsp+E8h] [rbp+28h]
  int v29; // [rsp+F0h] [rbp+30h]
  int v30; // [rsp+F4h] [rbp+34h]
  int v31; // [rsp+F8h] [rbp+38h]
  int v32; // [rsp+FCh] [rbp+3Ch]
  int v33; // [rsp+100h] [rbp+40h]
  BOOL v34; // [rsp+104h] [rbp+44h]
  int v35; // [rsp+108h] [rbp+48h]
  BOOL v36; // [rsp+10Ch] [rbp+4Ch]
  int v37; // [rsp+110h] [rbp+50h]
  void *v38; // [rsp+118h] [rbp+58h]
  int v39; // [rsp+120h] [rbp+60h]
  int v40; // [rsp+124h] [rbp+64h]
  int v41; // [rsp+128h] [rbp+68h]
  int v42; // [rsp+12Ch] [rbp+6Ch]
  int v43; // [rsp+130h] [rbp+70h]
  int v44; // [rsp+134h] [rbp+74h]
  float v45; // [rsp+138h] [rbp+78h]
  int v46; // [rsp+13Ch] [rbp+7Ch]
  int v47; // [rsp+140h] [rbp+80h]
  float v48; // [rsp+144h] [rbp+84h]
  void *v49; // [rsp+148h] [rbp+88h]
  int v50; // [rsp+150h] [rbp+90h]
  int v51; // [rsp+154h] [rbp+94h]
  int v52; // [rsp+158h] [rbp+98h]
  int v53; // [rsp+15Ch] [rbp+9Ch]
  int v54; // [rsp+160h] [rbp+A0h]
  int v55; // [rsp+164h] [rbp+A4h]
  int v56; // [rsp+168h] [rbp+A8h]
  int v57; // [rsp+16Ch] [rbp+ACh] BYREF
  int v58; // [rsp+170h] [rbp+B0h] BYREF
  int v59; // [rsp+174h] [rbp+B4h]
  int v60; // [rsp+178h] [rbp+B8h]
  int v61; // [rsp+17Ch] [rbp+BCh]
  int v62; // [rsp+180h] [rbp+C0h]
  int v63; // [rsp+184h] [rbp+C4h]
  float v64; // [rsp+188h] [rbp+C8h]
  int v65; // [rsp+18Ch] [rbp+CCh]
  BOOL v66; // [rsp+190h] [rbp+D0h]
  int v67; // [rsp+194h] [rbp+D4h]
  int v68; // [rsp+198h] [rbp+D8h]
  BOOL v69; // [rsp+19Ch] [rbp+DCh]
  int *v70; // [rsp+1A0h] [rbp+E0h]
  BOOL v71; // [rsp+1A8h] [rbp+E8h]
  BOOL v72; // [rsp+1ACh] [rbp+ECh]
  int v73; // [rsp+1B0h] [rbp+F0h]
  int v74; // [rsp+1B4h] [rbp+F4h]
  int v75; // [rsp+1B8h] [rbp+F8h]
  int v76; // [rsp+1BCh] [rbp+FCh]
  int v77; // [rsp+1C0h] [rbp+100h] BYREF
  int v78; // [rsp+1C4h] [rbp+104h]
  int v79; // [rsp+1C8h] [rbp+108h]
  int v80; // [rsp+1CCh] [rbp+10Ch]
  int v81; // [rsp+1D0h] [rbp+110h]
  int v82; // [rsp+1D4h] [rbp+114h]
  int *v83; // [rsp+1D8h] [rbp+118h]
  int *v84; // [rsp+1E0h] [rbp+120h]
  int *v85; // [rsp+1E8h] [rbp+128h]
  char *v86; // [rsp+1F0h] [rbp+130h]
  _QWORD v87[2]; // [rsp+1F8h] [rbp+138h] BYREF
  __int64 v88; // [rsp+208h] [rbp+148h]
  int *v89; // [rsp+210h] [rbp+150h]
  int *p_j; // [rsp+218h] [rbp+158h]
  int *v91; // [rsp+220h] [rbp+160h]
  int *v92; // [rsp+228h] [rbp+168h]
  int *v93; // [rsp+230h] [rbp+170h]
  void *v94[2]; // [rsp+238h] [rbp+178h]
  __int64 v95; // [rsp+248h] [rbp+188h]
  __int64 v96; // [rsp+250h] [rbp+190h]
  __int64 v97; // [rsp+258h] [rbp+198h]
  __int64 v98; // [rsp+260h] [rbp+1A0h]
  _BYTE v99[56]; // [rsp+268h] [rbp+1A8h] BYREF
  __int64 v100; // [rsp+2A0h] [rbp+1E0h]
  int v103; // [rsp+2D8h] [rbp+218h]
  int v104; // [rsp+2E0h] [rbp+220h]

  v103 = a4;
  v32 = *((_DWORD *)a1 + 3);
  v57 = 0;
  v58 = 0;
  v61 = 0;
  v25 = *((_DWORD *)a1 + 4);
  v27 = *a1;
  v22 = *(_DWORD *)(v27 + 8);
  v37 = *(_DWORD *)(v27 + 4);
  v88 = *(_QWORD *)(v27 + 32);
  v29 = *((_DWORD *)a1 + 6);
  v31 = *((_DWORD *)a1 + 7);
  v104 = *((_DWORD *)a1 + 5) * a5;
  v95 = (__int64)a1 + 4 * v32 * (v37 + 2048) + 96;
  Src = (void *)(v95 + 96LL * v32);
  v38 = (char *)Src + 8 * v22;
  v49 = (char *)v38 + 8 * v22;
  v86 = (char *)v49 + 8 * v22;
  for ( i = 0; i <= *(_DWORD *)(v27 + 40); ++i )
  {
    v96 = v27;
    if ( *(_DWORD *)(v27 + 48) << i == v104 )
      break;
  }
  if ( i <= *(_DWORD *)(v27 + 40) )
  {
    v79 = 1;
    v47 = 1 << i;
    if ( (unsigned int)a3 < 0x4FC )
    {
      if ( a4 )
      {
        v30 = *(_DWORD *)(v27 + 48) * v47;
        k = 0;
        do
        {
          v94[k] = (char *)a1 + 4 * (v37 + 2048) * k + 96;
          v87[k] = (char *)v94[k] - 4 * v30 + 0x2000;
          ++k;
        }
        while ( k < v32 );
        v43 = v31;
        if ( v31 > *(_DWORD *)(v27 + 12) )
          v43 = *(_DWORD *)(v27 + 12);
        if ( a2 && a3 > 1 )
        {
          v66 = *((_DWORD *)a1 + 14) != 0;
          *((_DWORD *)a1 + 15) = v66;
          if ( !a6 )
          {
            sub_14019AC50((__int64)v99, a2, a3);
            a6 = (unsigned int *)v99;
          }
          if ( v25 == 1 )
          {
            for ( j = 0; j < v22; ++j )
            {
              if ( *((float *)Src + j) <= *((float *)Src + j + v22) )
                v67 = *((_DWORD *)Src + j + v22);
              else
                v67 = *((_DWORD *)Src + j);
              *((_DWORD *)Src + j) = v67;
            }
          }
          v26 = 8 * a3;
          v24 = sub_14019A0A0((__int64)a6);
          if ( v24 < 8 * a3 )
            v36 = v24 == 1 && sub_14019AF20((__int64)a6, 15);
          else
            v36 = 1;
          if ( v36 )
          {
            v24 = 8 * a3;
            a6[6] += 8 * a3 - sub_14019A0A0((__int64)a6);
          }
          v45 = 0.0;
          v44 = 0;
          v46 = 0;
          if ( !v29 && v24 + 16 <= v26 )
          {
            if ( sub_14019AF20((__int64)a6, 1) )
            {
              v68 = sub_14019B0A0(a6, 6);
              v80 = 16;
              v81 = 16 << v68;
              v44 = (16 << v68) + sub_14019B1C0(a6, v68 + 4) - 1;
              v82 = sub_14019B1C0(a6, 3u);
              if ( (int)(sub_14019A0A0((__int64)a6) + 2) <= v26 )
                v46 = sub_14019AFE0((__int64)a6, (__int64)&unk_140279CE8, 2);
              v45 = 0.09375 * (float)(v82 + 1);
            }
            v24 = sub_14019A0A0((__int64)a6);
          }
          if ( i <= 0 || v24 + 3 > v26 )
          {
            v34 = 0;
          }
          else
          {
            v34 = sub_14019AF20((__int64)a6, 3);
            v24 = sub_14019A0A0((__int64)a6);
          }
          if ( v34 )
            v60 = v47;
          else
            v60 = 0;
          v69 = v24 + 3 <= v26 && sub_14019AF20((__int64)a6, 3);
          v71 = v69;
          sub_1401A7B50(v27, v29, v31, (_DWORD)Src, v69, (__int64)a6, v25, i);
          v7 = alloca(sub_1401F89D0());
          p_j = &j;
          sub_1401B4530(v29, v31, v34, (unsigned int)&j, i, (__int64)a6);
          v24 = sub_14019A0A0((__int64)a6);
          v59 = 2;
          if ( v24 + 4 <= v26 )
            v59 = sub_14019AFE0((__int64)a6, (__int64)&unk_140279CE4, 5);
          v8 = alloca(sub_1401F89D0());
          v83 = &j;
          sub_1401A12E0(v27, &j, (unsigned int)i, v25);
          v9 = alloca(sub_1401F89D0());
          v89 = &j;
          v39 = 6;
          v26 *= 8;
          v24 = sub_14019A0E0((__int64)a6);
          for ( j = v29; j < v31; ++j )
          {
            v33 = ((*(__int16 *)(v88 + 2LL * (j + 1)) - *(__int16 *)(v88 + 2LL * j)) * v25) << i;
            if ( v33 >= 48 )
              v50 = v33;
            else
              v50 = 48;
            if ( 8 * v33 >= v50 )
            {
              if ( v33 >= 48 )
                v51 = v33;
              else
                v51 = 48;
              v52 = v51;
            }
            else
            {
              v52 = 8 * v33;
            }
            v53 = v52;
            v41 = v39;
            v35 = 0;
            while ( v24 + 8 * v41 < v26 )
            {
              if ( v35 >= v83[j] )
                break;
              v72 = sub_14019AF20((__int64)a6, v41);
              v24 = sub_14019A0E0((__int64)a6);
              if ( !v72 )
                break;
              v35 += v53;
              v26 -= v53;
              v41 = 1;
            }
            v89[j] = v35;
            if ( v35 > 0 )
            {
              if ( v39 - 1 >= 2 )
                v54 = v39 - 1;
              else
                v54 = 2;
              v39 = v54;
            }
          }
          v10 = alloca(sub_1401F89D0());
          v84 = &j;
          if ( v24 + 48 > v26 )
            v55 = 5;
          else
            v55 = sub_14019AFE0((__int64)a6, (__int64)&unk_14027BB88, 7);
          v74 = v55;
          v73 = a3 << 6;
          v11 = sub_14019A0E0((__int64)a6);
          v40 = v73 - v11 - 1;
          if ( v34 && i >= 2 && v40 >= 8 * i + 16 )
            v56 = 8;
          else
            v56 = 0;
          v42 = v56;
          v40 -= v56;
          v12 = alloca(sub_1401F89D0());
          v85 = &j;
          v13 = alloca(sub_1401F89D0());
          v92 = &j;
          v76 = sub_1401A29F0(
                  v27,
                  v29,
                  v31,
                  (_DWORD)v89,
                  (__int64)v83,
                  v74,
                  (__int64)&v57,
                  (__int64)&v58,
                  v40,
                  (__int64)&v77,
                  (__int64)v85,
                  (__int64)v84,
                  (__int64)&j,
                  v25,
                  i,
                  (__int64)a6,
                  0,
                  0,
                  0);
          sub_1401A7EC0(v27, v29, v31, (_DWORD)Src, (__int64)v84, (__int64)a6, v25);
          k = 0;
          do
          {
            v75 = 2048 - v30;
            v14 = (char *)v94[k] + 4 * v30;
            v97 = k;
            MEMORY[0x1401FC920](v94[k++], v14);
          }
          while ( k < v32 );
          v15 = alloca(sub_1401F89D0());
          v93 = &j;
          v16 = alloca(sub_1401F89D0());
          v70 = &j;
          if ( v25 == 2 )
            v91 = &v70[v30];
          else
            v91 = nullptr;
          sub_1401A4050(
            0,
            v27,
            v29,
            v31,
            (__int64)v70,
            (__int64)v91,
            (__int64)v93,
            0,
            (__int64)v85,
            v60,
            v59,
            v58,
            v57,
            (__int64)p_j,
            (a3 << 6) - v42,
            v77,
            (__int64)a6,
            i,
            v76,
            (__int64)a1 + 44,
            0,
            *((_DWORD *)a1 + 10),
            *((_DWORD *)a1 + 9));
          if ( v42 > 0 )
            v61 = sub_14019B1C0(a6, 1u);
          v78 = 8 * a3;
          v17 = sub_14019A0A0((__int64)a6);
          sub_1401A8000(v27, v29, v31, (_DWORD)Src, (__int64)v84, (__int64)v92, v78 - v17, (__int64)a6, v25);
          if ( v61 )
            sub_1401A5710(
              v27,
              (_DWORD)v70,
              (_DWORD)v93,
              i,
              v25,
              v30,
              v29,
              v31,
              (__int64)Src,
              (__int64)v38,
              (__int64)v49,
              (__int64)v85,
              *((_DWORD *)a1 + 11),
              *((_DWORD *)a1 + 10));
          if ( v36 )
          {
            for ( j = 0; j < (int)(v22 * v25); ++j )
              *((_DWORD *)Src + j) = -1042284544;
          }
          sub_1401B3E40(
            v27,
            (_DWORD)v70,
            (unsigned int)v87,
            (_DWORD)Src,
            v29,
            v43,
            v25,
            v32,
            v34,
            i,
            *((_DWORD *)a1 + 5),
            v36,
            *((_DWORD *)a1 + 10));
          k = 0;
          do
          {
            if ( *((int *)a1 + 16) <= 15 )
              v62 = 15;
            else
              v62 = *((_DWORD *)a1 + 16);
            *((_DWORD *)a1 + 16) = v62;
            if ( *((int *)a1 + 17) <= 15 )
              v63 = 15;
            else
              v63 = *((_DWORD *)a1 + 17);
            *((_DWORD *)a1 + 17) = v63;
            sub_1401A0C20(
              v87[k],
              v87[k],
              *((_DWORD *)a1 + 17),
              *((_DWORD *)a1 + 16),
              *(_DWORD *)(v27 + 48),
              *((_DWORD *)a1 + 19),
              *((_DWORD *)a1 + 18),
              *((_DWORD *)a1 + 21),
              *((_DWORD *)a1 + 20),
              *(_QWORD *)(v27 + 72),
              v37);
            if ( i )
            {
              v18 = *(_DWORD *)(v27 + 48);
              v98 = v87[k] + 4LL * v18;
              sub_1401A0C20(
                v98,
                v98,
                *((_DWORD *)a1 + 16),
                v44,
                v30 - v18,
                *((_DWORD *)a1 + 18),
                LODWORD(v45),
                *((_DWORD *)a1 + 20),
                v46,
                *(_QWORD *)(v27 + 72),
                v37);
            }
            ++k;
          }
          while ( k < v32 );
          *((_DWORD *)a1 + 17) = *((_DWORD *)a1 + 16);
          *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 18);
          *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          *((_DWORD *)a1 + 16) = v44;
          *((float *)a1 + 18) = v45;
          *((_DWORD *)a1 + 20) = v46;
          if ( i )
          {
            *((_DWORD *)a1 + 17) = *((_DWORD *)a1 + 16);
            *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 18);
            *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          }
          if ( v25 == 1 )
            MEMORY[0x1401FC920]((char *)Src + 4 * v22, Src);
          if ( v34 )
          {
            for ( j = 0; j < 2 * v22; ++j )
            {
              if ( *((float *)Src + j) <= *((float *)v38 + j) )
                v65 = *((_DWORD *)Src + j);
              else
                v65 = *((_DWORD *)v38 + j);
              *((_DWORD *)v38 + j) = v65;
            }
          }
          else
          {
            MEMORY[0x1401FC920](v49, v38);
            MEMORY[0x1401FC920](v38, Src);
            if ( *((int *)a1 + 14) >= 10 )
              v48 = 1.0;
            else
              v48 = (float)v47 * 0.001;
            for ( j = 0; j < 2 * v22; ++j )
            {
              if ( *((float *)Src + j) <= (float)(*(float *)&v86[4 * j] + v48) )
                v64 = *((float *)Src + j);
              else
                v64 = *(float *)&v86[4 * j] + v48;
              *(float *)&v86[4 * j] = v64;
            }
          }
          for ( k = 0; k < 2; ++k )
          {
            for ( j = 0; j < v29; ++j )
            {
              *((_DWORD *)Src + j + v22 * k) = 0;
              *((_DWORD *)v49 + j + v22 * k) = -1042284544;
              *((_DWORD *)v38 + j + v22 * k) = -1042284544;
            }
            for ( j = v31; j < v22; ++j )
            {
              *((_DWORD *)Src + j + v22 * k) = 0;
              *((_DWORD *)v49 + j + v22 * k) = -1042284544;
              *((_DWORD *)v38 + j + v22 * k) = -1042284544;
            }
          }
          *((_DWORD *)a1 + 11) = a6[8];
          sub_1401B3BD0((unsigned int)v87, v103, v30, v32, *((_DWORD *)a1 + 5), v27 + 16, (__int64)(a1 + 11), a7);
          *((_DWORD *)a1 + 14) = 0;
          if ( (int)sub_14019A0A0((__int64)a6) <= 8 * a3 && (unsigned int)unknown_libname_997(a6) )
            *((_DWORD *)a1 + 12) = 1;
        }
        else
        {
          sub_1401B4830(a1, (unsigned int)v30, (unsigned int)i);
          sub_1401B3BD0((unsigned int)v87, v103, v30, v32, *((_DWORD *)a1 + 5), v27 + 16, (__int64)(a1 + 11), a7);
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v100);
}

