/* Address: 0x140178410 | Name: sub_140178410 | Size: 992 bytes */
__int64 __fastcall sub_140178410(__int64 a1, int a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int16 v6; // r11
  unsigned int v8; // edx
  __int64 v9; // r8
  __int16 v10; // r8
  __int16 v11; // r11
  __int16 v12; // ax
  unsigned __int16 v13; // r12
  unsigned __int16 v14; // r10
  __int16 v15; // dx
  __int64 v16; // r14
  int v17; // r9d
  unsigned __int16 v18; // r10
  __int16 v19; // r11
  unsigned __int16 v20; // r8
  unsigned int i; // r9d
  __int64 v22; // rbp
  __int64 v23; // rcx
  int v24; // r8d
  unsigned __int16 v25; // r9
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r10d
  int v29; // eax
  __int64 v30; // r14
  unsigned __int8 *v31; // r8
  unsigned int v32; // r9d
  unsigned int v33; // edx

  v2 = *(unsigned int *)(a1 + 52);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  v6 = *(unsigned __int8 *)(v2 + v3 + 1) + (*(unsigned __int8 *)(v2 + v3) << 8);
  switch ( v6 )
  {
    case 0:
      if ( a2 < *(unsigned __int8 *)(v2 + v3 + 3) - 6 + (*(unsigned __int8 *)(v2 + v3 + 2) << 8) )
        return *(unsigned __int8 *)(v2 + a2 + v3 + 6);
      return 0;
    case 6:
      v8 = *(unsigned __int8 *)(v2 + v3 + 7) + (*(unsigned __int8 *)(v2 + v3 + 6) << 8);
      if ( a2 >= v8 && a2 < v8 + (*(unsigned __int8 *)(v2 + v3 + 8) << 8) + *(unsigned __int8 *)(v2 + v3 + 9) )
        return (*(unsigned __int8 *)(v2 + 2 * (a2 - v8) + v3 + 10) << 8)
             + (unsigned int)*(unsigned __int8 *)(v2 + 2 * (a2 - v8) + v3 + 11);
      return 0;
    case 2:
      v9 = 1463;
LABEL_10:
      sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", v9);
      return 0;
    case 4:
      v10 = *(unsigned __int8 *)(v2 + v3 + 12);
      v11 = *(unsigned __int8 *)(v2 + v3 + 11);
      v12 = *(unsigned __int8 *)(v2 + v3 + 13);
      v13 = (unsigned __int16)(*(unsigned __int8 *)(v2 + v3 + 7) + (*(unsigned __int8 *)(v2 + v3 + 6) << 8)) >> 1;
      v14 = (*(unsigned __int8 *)(v2 + v3 + 8) << 8) + *(unsigned __int8 *)(v2 + v3 + 9);
      v15 = *(unsigned __int8 *)(v2 + v3 + 10) << 8;
      v16 = (unsigned int)(v2 + 14);
      v17 = v16;
      v18 = v14 >> 1;
      v19 = v15 + v11;
      v20 = (unsigned __int16)(v12 + (v10 << 8)) >> 1;
      if ( a2 <= 0xFFFF )
      {
        if ( a2 >= *(unsigned __int8 *)(v16 + 2LL * v20 + v3 + 1) + (*(unsigned __int8 *)(v16 + 2LL * v20 + v3) << 8) )
          v17 = v16 + 2 * v20;
        for ( i = v17 - 2; v19; --v19 )
        {
          v18 >>= 1;
          if ( a2 > *(unsigned __int8 *)(v3 + i + 2LL * v18 + 1) + (*(unsigned __int8 *)(v3 + i + 2LL * v18) << 8) )
            i += 2 * v18;
        }
        v22 = 2LL * (unsigned __int16)((i - (unsigned int)v16 + 2) >> 1);
        if ( a2 > *(unsigned __int8 *)(v16 + v22 + v3 + 1) + (*(unsigned __int8 *)(v16 + v22 + v3) << 8) )
          sub_14023E640(
            L"unicode_codepoint <= ttUSHORT(data + endCount + 2*item)",
            L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            1499);
        v23 = v4 + v22 + 2 * (unsigned int)v13;
        v24 = *(unsigned __int8 *)(v23 + v3 + 17) + (*(unsigned __int8 *)(v23 + v3 + 16) << 8);
        if ( a2 >= v24 )
        {
          v25 = *(unsigned __int8 *)(v4 + 6 * (unsigned int)v13 + v22 + v3 + 17)
              + (*(unsigned __int8 *)(v4 + 6 * (unsigned int)v13 + v22 + v3 + 16) << 8);
          if ( !v25 )
            return (unsigned __int16)(a2
                                    + (*(unsigned __int8 *)(v4 + v22 + 4 * (unsigned int)v13 + v3 + 16) << 8)
                                    + *(unsigned __int8 *)(v4 + v22 + 4 * (unsigned int)v13 + v3 + 17));
          v26 = v4 + v22 + 6 * (unsigned int)v13 + (__int64)(2 * (a2 - v24)) + v25;
          return (*(unsigned __int8 *)(v26 + v3 + 16) << 8) + (unsigned int)*(unsigned __int8 *)(v26 + v3 + 17);
        }
      }
      return 0;
  }
  if ( (unsigned __int16)(v6 - 12) > 1u )
  {
    v9 = 1534;
    goto LABEL_10;
  }
  v27 = 0;
  v28 = *(unsigned __int8 *)(v2 + v3 + 15)
      + ((*(unsigned __int8 *)(v2 + v3 + 14)
        + ((*(unsigned __int8 *)(v2 + v3 + 13) + (*(unsigned __int8 *)(v2 + v3 + 12) << 8)) << 8)) << 8);
  if ( v28 <= 0 )
    return 0;
  while ( 1 )
  {
    v29 = v27 + ((v28 - v27) >> 1);
    v30 = 12 * v29;
    v31 = (unsigned __int8 *)(v3 + v30 + v4);
    v32 = v31[19] + (v31[16] << 24) + (v31[18] << 8) + (v31[17] << 16);
    if ( a2 >= v32 )
      break;
    v28 = v27 + ((v28 - v27) >> 1);
LABEL_33:
    if ( v27 >= v28 )
      return 0;
  }
  if ( a2 > (unsigned int)(v31[23] + (v31[20] << 24) + (v31[22] << 8) + (v31[21] << 16)) )
  {
    v27 = v29 + 1;
    goto LABEL_33;
  }
  v33 = *(unsigned __int8 *)(v3 + v30 + v4 + 27)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 24) << 24)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 26) << 8)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 25) << 16);
  if ( v6 == 12 )
    return a2 + v33 - v32;
  else
    return v33;
}

