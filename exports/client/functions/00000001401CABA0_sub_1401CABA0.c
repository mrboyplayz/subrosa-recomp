/* Address: 0x1401caba0 | Name: sub_1401CABA0 | Size: 7900 bytes */
__int64 __fastcall sub_1401CABA0(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        unsigned __int8 **a5,
        int *a6,
        int a7,
        unsigned int a8)
{
  int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  char v17; // al
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // rdi
  __int64 v21; // rsi
  int i; // [rsp+60h] [rbp+0h] BYREF
  __int64 v24; // [rsp+68h] [rbp+8h]
  int j; // [rsp+70h] [rbp+10h]
  int v26; // [rsp+74h] [rbp+14h]
  int v27; // [rsp+78h] [rbp+18h]
  int v28; // [rsp+7Ch] [rbp+1Ch]
  int v29; // [rsp+80h] [rbp+20h]
  int v30; // [rsp+84h] [rbp+24h]
  int v31; // [rsp+88h] [rbp+28h]
  _BYTE v32[4]; // [rsp+8Ch] [rbp+2Ch] BYREF
  int v33; // [rsp+90h] [rbp+30h]
  int v34; // [rsp+94h] [rbp+34h]
  int v35; // [rsp+98h] [rbp+38h]
  int v36; // [rsp+9Ch] [rbp+3Ch]
  int v37; // [rsp+A0h] [rbp+40h]
  void *p_i; // [rsp+A8h] [rbp+48h]
  int v39; // [rsp+B0h] [rbp+50h]
  int v40; // [rsp+B4h] [rbp+54h]
  unsigned int v41; // [rsp+B8h] [rbp+58h]
  int v42; // [rsp+BCh] [rbp+5Ch]
  int v43; // [rsp+C0h] [rbp+60h]
  int v44; // [rsp+C4h] [rbp+64h]
  int v45; // [rsp+C8h] [rbp+68h]
  BOOL v46; // [rsp+CCh] [rbp+6Ch]
  int v47; // [rsp+D0h] [rbp+70h]
  int v48; // [rsp+D4h] [rbp+74h]
  int v49; // [rsp+D8h] [rbp+78h]
  int v50; // [rsp+DCh] [rbp+7Ch]
  int v51; // [rsp+E0h] [rbp+80h]
  int v52; // [rsp+E4h] [rbp+84h]
  BOOL v53; // [rsp+E8h] [rbp+88h]
  BOOL v54; // [rsp+ECh] [rbp+8Ch]
  int v55; // [rsp+F0h] [rbp+90h]
  int v56; // [rsp+F4h] [rbp+94h]
  BOOL v57; // [rsp+F8h] [rbp+98h]
  int v58; // [rsp+FCh] [rbp+9Ch]
  int v59; // [rsp+100h] [rbp+A0h]
  int v60; // [rsp+104h] [rbp+A4h]
  BOOL v61; // [rsp+108h] [rbp+A8h]
  int v62; // [rsp+10Ch] [rbp+ACh]
  int v63; // [rsp+110h] [rbp+B0h]
  int v64; // [rsp+114h] [rbp+B4h]
  int v65; // [rsp+118h] [rbp+B8h]
  int v66; // [rsp+11Ch] [rbp+BCh]
  int v67; // [rsp+120h] [rbp+C0h]
  int v68; // [rsp+124h] [rbp+C4h]
  int v69; // [rsp+128h] [rbp+C8h]
  BOOL v70; // [rsp+12Ch] [rbp+CCh]
  int v71[2]; // [rsp+130h] [rbp+D0h] BYREF
  __int64 v72; // [rsp+138h] [rbp+D8h]
  __int64 v73; // [rsp+140h] [rbp+E0h]
  __int64 v74; // [rsp+148h] [rbp+E8h]
  _DWORD v75[5]; // [rsp+150h] [rbp+F0h] BYREF
  __int64 v76; // [rsp+168h] [rbp+108h]

  v59 = 0;
  v60 = 0;
  v26 = 0;
  v28 = 0;
  v24 = a1;
  if ( a2[17] )
  {
    *(_DWORD *)(v24 + 4664) = 1;
    *(_DWORD *)(v24 + 14752) = 1;
  }
  *(_DWORD *)(v24 + 15852) = 0;
  *(_DWORD *)(v24 + 5764) = 0;
  v26 = sub_1401C1090(a2);
  if ( !v26 )
  {
    a2[22] = 0;
    if ( a2[1] > *(_DWORD *)(v24 + 20244) )
    {
      v26 += sub_1401D26F0(v24 + 10088, *(unsigned int *)(v24 + 5108));
      MEMORY[0x1401FCD30](v24 + 20176, 0, 4);
      MEMORY[0x1401FCD30](v24 + 20184, 0, 4);
      *(_DWORD *)(v24 + 20188) = 0;
      *(_DWORD *)(v24 + 20192) = 1;
      *(_DWORD *)(v24 + 20196) = 0;
      *(_DWORD *)(v24 + 20200) = 1;
      *(_WORD *)(v24 + 20206) = 0;
      *(_WORD *)(v24 + 20204) = 0x4000;
      if ( *(_DWORD *)(v24 + 20240) == 2 )
      {
        MEMORY[0x1401FC920](v24 + 15880, v24 + 5792);
        MEMORY[0x1401FC920](v24 + 10088, v24);
      }
    }
    v61 = a2[6] != *(_DWORD *)(v24 + 4612) || *(_DWORD *)(v24 + 20244) != a2[1];
    v70 = v61;
    *(_DWORD *)(v24 + 20240) = *a2;
    *(_DWORD *)(v24 + 20244) = a2[1];
    v33 = 100 * a4 / a2[2];
    if ( v33 <= 1 )
      v62 = 1;
    else
      v62 = v33 >> 1;
    v37 = v62;
    v35 = 0;
    if ( a7 )
    {
      if ( v33 != 1 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v76);
      if ( a7 == 2 )
      {
        qmemcpy(v75, (const void *)(v24 + 16), sizeof(v75));
        v75[4] = *(_DWORD *)(v24 + 4576);
      }
      for ( i = 0; i < a2[1]; ++i )
      {
        v26 = sub_1401D26F0(10088LL * i + v24, *(unsigned int *)(v24 + 10088LL * i + 5108));
        if ( a7 == 2 )
          qmemcpy((void *)(v24 + 10088LL * i + 16), v75, 0x14u);
      }
      v59 = a2[6];
      a2[6] = 10;
      v60 = a2[9];
      a2[9] = 0;
      for ( i = 0; i < a2[1]; ++i )
      {
        *(_DWORD *)(v24 + 10088LL * i + 4668) = 0;
        *(_DWORD *)(v24 + 10088LL * i + 4680) = 1;
      }
    }
    else if ( a2[2] * v33 != 100 * a4 || a4 < 0 || 1000 * a4 > a2[2] * a2[6] )
    {
      return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v76);
    }
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( i == 1 )
        v42 = *(_DWORD *)(v24 + 4576);
      else
        v42 = 0;
      v63 = v42;
      v26 = sub_1401D2790(10088 * i + (int)v24, (_DWORD)a2, *(_DWORD *)(v24 + 20256), i, v42);
      if ( v26 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v76);
      if ( *(_DWORD *)(v24 + 10088LL * i + 4664) || v70 )
      {
        for ( j = 0; j < *(_DWORD *)(v24 + 5760); ++j )
          *(_DWORD *)(10088LL * i + v24 + 4LL * j + 4740) = 0;
      }
      *(_DWORD *)(v24 + 10088LL * i + 6100) = *(_DWORD *)(v24 + 10088LL * i + 6096);
    }
    v39 = *(_DWORD *)(v24 + 4576) * 10 * v33;
    v8 = 1000 * *(_DWORD *)(v24 + 4576);
    v9 = (unsigned int)((*(_DWORD *)(v24 + 4556) * v39) >> 31);
    LODWORD(v9) = *(_DWORD *)(v24 + 4556) * v39 % v8;
    v69 = *(_DWORD *)(v24 + 4556) * v39 / v8;
    v10 = 2LL * v69 + 15;
    if ( v10 <= 2LL * v69 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(sub_1401F89D0(v10 & 0xFFFFFFFFFFFFFFF0uLL, v9));
    p_i = &i;
    while ( 1 )
    {
      v29 = *(_DWORD *)(v24 + 4584) - *(_DWORD *)(v24 + 5756);
      v43 = v29 >= v39 ? v39 : v29;
      v29 = v43;
      v28 = *(_DWORD *)(v24 + 4556) * v43 / (1000 * *(_DWORD *)(v24 + 4576));
      if ( *a2 == 2 && a2[1] == 2 )
      {
        v64 = *(_DWORD *)(v24 + 5764);
        for ( i = 0; i < v28; ++i )
          *((_WORD *)p_i + i) = *(_WORD *)(a3 + 4LL * i);
        if ( *(_DWORD *)(v24 + 20248) == 1 && !v64 )
          MEMORY[0x1401FC920](v24 + 15880, v24 + 5792);
        v12 = sub_1401BAA30((_DWORD *)(v24 + 5792), v24 + 2LL * (*(_DWORD *)(v24 + 5756) + 2) + 5112, (__int64)p_i, v28);
        v26 += v12;
        *(_DWORD *)(v24 + 5756) += v29;
        v29 = *(_DWORD *)(v24 + 14672) - *(_DWORD *)(v24 + 15844);
        v44 = v29 >= *(_DWORD *)(v24 + 14664) * 10 * v33 ? *(_DWORD *)(v24 + 14664) * 10 * v33 : v29;
        v29 = v44;
        for ( i = 0; i < v28; ++i )
          *((_WORD *)p_i + i) = *(_WORD *)(a3 + 2LL * (2 * i + 1));
        v13 = sub_1401BAA30(
                (_DWORD *)(v24 + 15880),
                v24 + 10088 + 2LL * (*(_DWORD *)(v24 + 15844) + 2) + 5112,
                (__int64)p_i,
                v28);
        v26 += v13;
        *(_DWORD *)(v24 + 15844) += v29;
      }
      else if ( *a2 == 2 && a2[1] == 1 )
      {
        for ( i = 0; i < v28; ++i )
        {
          v45 = *(__int16 *)(a3 + 2LL * (2 * i + 1)) + *(__int16 *)(a3 + 4LL * i);
          *((_WORD *)p_i + i) = (v45 & 1) + (v45 >> 1);
        }
        v14 = sub_1401BAA30((_DWORD *)(v24 + 5792), v24 + 2LL * (*(_DWORD *)(v24 + 5756) + 2) + 5112, (__int64)p_i, v28);
        v26 += v14;
        if ( *(_DWORD *)(v24 + 20248) == 2 && !*(_DWORD *)(v24 + 5764) )
        {
          v15 = sub_1401BAA30(
                  (_DWORD *)(v24 + 15880),
                  v24 + 10088 + 2LL * (*(_DWORD *)(v24 + 15844) + 2) + 5112,
                  (__int64)p_i,
                  v28);
          v26 += v15;
          for ( i = 0; i < *(_DWORD *)(v24 + 4584); ++i )
            *(_WORD *)(v24 + 2LL * (*(_DWORD *)(v24 + 5756) + i + 2) + 5112) = (*(__int16 *)(v24
                                                                                           + 10088
                                                                                           + 2LL
                                                                                           * (*(_DWORD *)(v24 + 15844)
                                                                                            + i
                                                                                            + 2)
                                                                                           + 5112)
                                                                              + *(__int16 *)(v24
                                                                                           + 2LL
                                                                                           * (*(_DWORD *)(v24 + 5756)
                                                                                            + i
                                                                                            + 2)
                                                                                           + 5112)) >> 1;
        }
        *(_DWORD *)(v24 + 5756) += v29;
      }
      else
      {
        MEMORY[0x1401FC920](p_i, a3);
        v16 = sub_1401BAA30((_DWORD *)(v24 + 5792), v24 + 2LL * (*(_DWORD *)(v24 + 5756) + 2) + 5112, (__int64)p_i, v28);
        v26 += v16;
        *(_DWORD *)(v24 + 5756) += v29;
      }
      a3 += 2LL * *a2 * v28;
      a4 -= v28;
      *(_DWORD *)(v24 + 20256) = 0;
      if ( *(_DWORD *)(v24 + 5756) < *(_DWORD *)(v24 + 4584) )
        break;
      if ( !*(_DWORD *)(v24 + 5764) && !a7 )
      {
        v32[0] = 0;
        v32[1] = 0;
        v17 = *((_BYTE *)a2 + 4) * (*(_BYTE *)(v24 + 5760) + 1);
        v65 = 256;
        v32[0] = -(char)(256 >> v17);
        sub_14019A4F0((__int64)a5, 0, (__int64)v32, 8);
        for ( i = 0; i < a2[1]; ++i )
        {
          v36 = 0;
          for ( j = 0; j < *(_DWORD *)(v24 + 10088LL * i + 5760); ++j )
          {
            v72 = j;
            v36 |= *(_DWORD *)(10088LL * i + v24 + 4LL * j + 4740) << j;
          }
          v46 = v36 > 0;
          *(_BYTE *)(v24 + 10088LL * i + 4739) = v46;
          if ( v36 && *(int *)(v24 + 10088LL * i + 5760) > 1 )
            sub_14019A4F0(
              (__int64)a5,
              v36 - 1,
              (__int64)*(&off_1402827E0 + *(_DWORD *)(v24 + 10088LL * i + 5760) - 2),
              8);
        }
        for ( j = 0; j < *(_DWORD *)(v24 + 5760); ++j )
        {
          for ( i = 0; i < a2[1]; ++i )
          {
            if ( *(_DWORD *)(10088LL * i + v24 + 4LL * j + 4740) )
            {
              if ( a2[1] == 2 && !i )
              {
                sub_1401C0940((__int64)a5, v24 + 6LL * j + 20210);
                if ( !*(_DWORD *)(v24 + 10088 + 4LL * j + 4740) )
                  sub_1401C0A60((__int64)a5, *(_BYTE *)(v24 + j + 20228));
              }
              if ( j > 0 && *(_DWORD *)(10088LL * i + v24 + 4LL * (j - 1) + 4740) )
                v47 = 2;
              else
                v47 = 0;
              sub_1401CA330(10088LL * i + v24, (__int64)a5, j, 1, v47);
              sub_1401C1790(
                (__int64)a5,
                *(char *)(10088LL * i + v24 + 36LL * j + 6149),
                *(char *)(10088LL * i + v24 + 36LL * j + 6150),
                10088LL * i + v24 + 320LL * j + 6228,
                *(_DWORD *)(v24 + 10088LL * i + 4584));
            }
          }
        }
        for ( i = 0; i < a2[1]; ++i )
          MEMORY[0x1401FCD30](v24 + 10088LL * i + 4740, 0, 12);
        v18 = sub_14019A0A0((__int64)a5);
        *(_DWORD *)(v24 + 20232) = v18;
      }
      sub_1401D1380(v24);
      v34 = a2[6] * a2[7] / 1000;
      if ( !a7 )
        v34 -= *(_DWORD *)(v24 + 20232);
      v73 = 0;
      v34 /= *(int *)(v24 + 5760);
      if ( a2[6] == 10 )
        v27 = 100 * (__int16)v34;
      else
        v27 = 50 * (__int16)v34;
      v27 -= 1000 * *(_DWORD *)(v24 + 20236) / 500;
      if ( !a7 && *(int *)(v24 + 5764) > 0 )
      {
        v19 = sub_14019A0A0((__int64)a5);
        v66 = v19 - *(_DWORD *)(v24 + 20232) - *(_DWORD *)(v24 + 5764) * v34;
        v27 -= 1000 * v66 / 500;
      }
      if ( (int)a2[7] <= 5000 )
      {
        if ( v27 <= 5000 )
        {
          v50 = v27 >= a2[7] ? v27 : a2[7];
          v51 = v50;
        }
        else
        {
          v51 = 5000;
        }
        v52 = v51;
      }
      else
      {
        if ( v27 <= a2[7] )
        {
          v48 = v27 >= 5000 ? v27 : 5000;
          v49 = v48;
        }
        else
        {
          v49 = a2[7];
        }
        v52 = v49;
      }
      v27 = v52;
      if ( a2[1] == 2 )
      {
        v20 = (_BYTE *)(v24 + *(int *)(v24 + 5764) + 20228);
        v21 = v24 + 6LL * *(int *)(v24 + 5764) + 20210;
        v74 = v24 + 5116;
        sub_1401BEE10(
          (__int16 *)(v24 + 20176),
          v24 + 5116,
          v24 + 15204,
          v21,
          v20,
          v71,
          v27,
          *(_DWORD *)(v24 + 4532),
          a2[15],
          *(_DWORD *)(v24 + 4576),
          *(_DWORD *)(v24 + 4584));
        if ( *(_BYTE *)(v24 + *(int *)(v24 + 5764) + 20228) )
        {
          *(_BYTE *)(v24 + 10088 + *(int *)(v24 + 5764) + 4736) = 0;
        }
        else
        {
          if ( *(_DWORD *)(v24 + 20260) == 1 )
          {
            MEMORY[0x1401FCD30](v24 + 17280, 0, 12);
            MEMORY[0x1401FCD30](v24 + 10236, 0, 4352);
            MEMORY[0x1401FCD30](v24 + 14588, 0, 32);
            MEMORY[0x1401FCD30](v24 + 10104, 0, 8);
            *(_DWORD *)(v24 + 14632) = 100;
            *(_DWORD *)(v24 + 14564) = 100;
            *(_BYTE *)(v24 + 17280) = 10;
            *(_BYTE *)(v24 + 14629) = 0;
            *(_DWORD *)(v24 + 14580) = 0x10000;
            *(_DWORD *)(v24 + 14752) = 1;
          }
          sub_1401D1630(v24 + 10088, a8);
        }
        if ( !a7 )
        {
          sub_1401C0940((__int64)a5, v24 + 6LL * *(int *)(v24 + 5764) + 20210);
          if ( !*(_BYTE *)(v24 + 10088 + *(int *)(v24 + 5764) + 4736) )
            sub_1401C0A60((__int64)a5, *(_BYTE *)(v24 + *(int *)(v24 + 5764) + 20228));
        }
      }
      else
      {
        MEMORY[0x1401FC920](v24 + 5112, v24 + 20180);
        MEMORY[0x1401FC920](v24 + 20180, v24 + 2LL * *(int *)(v24 + 4584) + 5112);
      }
      sub_1401D1630(v24, a8);
      for ( i = 0; i < a2[1]; ++i )
      {
        v30 = a2[14];
        if ( v37 != 2 || v35 )
        {
          if ( v37 == 3 )
          {
            if ( v35 )
            {
              if ( v35 == 1 )
                v30 = 3 * v30 / 4;
            }
            else
            {
              v30 = 2 * v30 / 5;
            }
          }
        }
        else
        {
          v30 = 3 * v30 / 5;
        }
        v53 = a2[13] && v35 == v37 - 1;
        v54 = v53;
        if ( a2[1] == 1 )
        {
          v40 = v27;
        }
        else
        {
          v40 = v71[i];
          if ( !i && v71[1] > 0 )
          {
            v54 = 0;
            v67 = 2 * v37;
            v30 -= a2[14] / (2 * v37);
          }
        }
        if ( v40 > 0 )
        {
          sub_1401C1660((_DWORD *)(10088LL * i + v24), v40);
          if ( *(_DWORD *)(v24 + 5764) - i > 0 )
          {
            if ( i > 0 && *(_DWORD *)(v24 + 20260) )
              v41 = 1;
            else
              v41 = 2;
          }
          else
          {
            v41 = 0;
          }
          v26 = sub_1401D1780(10088LL * i + v24, a6, a5, v41, v30, v54);
        }
        *(_DWORD *)(v24 + 10088LL * i + 4668) = 0;
        *(_DWORD *)(v24 + 10088LL * i + 5756) = 0;
        ++*(_DWORD *)(v24 + 10088LL * i + 5764);
      }
      *(_DWORD *)(v24 + 20260) = *(char *)(v24 + *(_DWORD *)(v24 + 5764) - 1 + 20228);
      if ( *a6 > 0 && *(_DWORD *)(v24 + 5764) == *(_DWORD *)(v24 + 5760) )
      {
        v31 = 0;
        for ( i = 0; i < a2[1]; ++i )
        {
          for ( j = 0; j < *(_DWORD *)(v24 + 10088LL * i + 5760); ++j )
          {
            v31 *= 2;
            v31 |= *(char *)(10088LL * i + v24 + j + 4736);
          }
          v31 *= 2;
          v31 |= *(char *)(v24 + 10088LL * i + 4739);
        }
        if ( !a7 )
          sub_14019A7C0(a5, v31, *((_BYTE *)a2 + 4) * (*(_BYTE *)(v24 + 5760) + 1));
        if ( *(_DWORD *)(v24 + 6100) && (a2[1] == 1 || *(_DWORD *)(v24 + 16188)) )
          *a6 = 0;
        *(_DWORD *)(v24 + 20236) += 8 * *a6;
        *(_DWORD *)(v24 + 20236) -= a2[6] * a2[7] / 1000;
        if ( *(int *)(v24 + 20236) <= 10000 )
        {
          if ( *(int *)(v24 + 20236) >= 0 )
            v55 = *(_DWORD *)(v24 + 20236);
          else
            v55 = 0;
          v56 = v55;
        }
        else
        {
          v56 = 10000;
        }
        *(_DWORD *)(v24 + 20236) = v56;
        v68 = ((3188LL * *(__int16 *)(v24 + 20252)) >> 16) + 13;
        if ( *(_DWORD *)(v24 + 4532) >= v68 )
        {
          *(_DWORD *)(v24 + 20256) = 0;
          *(_DWORD *)(v24 + 20252) += a2[6];
        }
        else
        {
          *(_DWORD *)(v24 + 20256) = 1;
          *(_DWORD *)(v24 + 20252) = 0;
        }
      }
      if ( !a4 )
        break;
      ++v35;
    }
    *(_DWORD *)(v24 + 20248) = a2[1];
    a2[19] = *(_DWORD *)(v24 + 20256);
    v57 = *(_DWORD *)(v24 + 4576) == 16 && !*(_DWORD *)(v24 + 28);
    a2[20] = v57;
    a2[18] = 1000 * *(__int16 *)(v24 + 4576);
    if ( a2[15] )
      v58 = 0;
    else
      v58 = *(__int16 *)(v24 + 20204);
    a2[21] = v58;
    if ( a7 )
    {
      a2[6] = v59;
      a2[9] = v60;
      for ( i = 0; i < a2[1]; ++i )
      {
        *(_DWORD *)(v24 + 10088LL * i + 4668) = 0;
        *(_DWORD *)(v24 + 10088LL * i + 4680) = 0;
      }
    }
    a2[23] = *(char *)(v24 + 4781);
    a2[24] = word_1402827F8[2 * (*(char *)(v24 + 4781) >> 1) + *(char *)(v24 + 4782)];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v76);
}

