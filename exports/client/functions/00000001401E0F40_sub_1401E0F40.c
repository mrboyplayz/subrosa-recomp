/* Address: 0x1401e0f40 | Name: sub_1401E0F40 | Size: 4912 bytes */
__int64 sub_1401E0F40(int *a1, int a2, ...)
{
  _QWORD *v2; // r8
  __int64 v4; // [rsp+0h] [rbp-1F8h] BYREF
  va_list v5; // [rsp+20h] [rbp-1D8h]
  int v6; // [rsp+28h] [rbp-1D0h]
  int v7; // [rsp+2Ch] [rbp-1CCh]
  int v8; // [rsp+30h] [rbp-1C8h]
  int v9; // [rsp+34h] [rbp-1C4h]
  int v10; // [rsp+38h] [rbp-1C0h]
  int v11; // [rsp+3Ch] [rbp-1BCh]
  int v12; // [rsp+40h] [rbp-1B8h]
  unsigned int v13; // [rsp+44h] [rbp-1B4h]
  unsigned int v14; // [rsp+48h] [rbp-1B0h]
  unsigned int v15; // [rsp+4Ch] [rbp-1ACh]
  int v16; // [rsp+50h] [rbp-1A8h]
  int v17; // [rsp+54h] [rbp-1A4h]
  int i; // [rsp+58h] [rbp-1A0h]
  _DWORD *v19; // [rsp+60h] [rbp-198h]
  int v20; // [rsp+68h] [rbp-190h]
  unsigned int v21; // [rsp+6Ch] [rbp-18Ch]
  unsigned int v22; // [rsp+70h] [rbp-188h]
  int v23; // [rsp+74h] [rbp-184h]
  unsigned int v24; // [rsp+78h] [rbp-180h]
  int v25; // [rsp+7Ch] [rbp-17Ch]
  unsigned int v26; // [rsp+80h] [rbp-178h]
  unsigned int v27; // [rsp+84h] [rbp-174h]
  BOOL *v28; // [rsp+88h] [rbp-170h]
  unsigned int v29; // [rsp+90h] [rbp-168h]
  BOOL v30; // [rsp+94h] [rbp-164h]
  BOOL v31; // [rsp+98h] [rbp-160h]
  int *v32; // [rsp+A0h] [rbp-158h]
  _QWORD *v33; // [rsp+A8h] [rbp-150h]
  _QWORD *v34; // [rsp+B0h] [rbp-148h]
  _QWORD *v35; // [rsp+B8h] [rbp-140h]
  _DWORD *v36; // [rsp+C0h] [rbp-138h]
  _DWORD *v37; // [rsp+C8h] [rbp-130h]
  _DWORD *v38; // [rsp+D0h] [rbp-128h]
  _DWORD *v39; // [rsp+D8h] [rbp-120h]
  _DWORD *v40; // [rsp+E0h] [rbp-118h]
  _DWORD *v41; // [rsp+E8h] [rbp-110h]
  _DWORD *v42; // [rsp+F0h] [rbp-108h]
  _DWORD *v43; // [rsp+F8h] [rbp-100h]
  _DWORD *v44; // [rsp+100h] [rbp-F8h]
  _DWORD *v45; // [rsp+108h] [rbp-F0h]
  _DWORD *v46; // [rsp+110h] [rbp-E8h]
  _DWORD *v47; // [rsp+118h] [rbp-E0h]
  _DWORD *v48; // [rsp+120h] [rbp-D8h]
  _DWORD *v49; // [rsp+128h] [rbp-D0h]
  _DWORD *v50; // [rsp+130h] [rbp-C8h]
  _DWORD *v51; // [rsp+138h] [rbp-C0h]
  _DWORD *v52; // [rsp+140h] [rbp-B8h]
  _DWORD *v53; // [rsp+148h] [rbp-B0h]
  int *v54; // [rsp+150h] [rbp-A8h]
  __int64 v55; // [rsp+158h] [rbp-A0h]
  char *v56; // [rsp+160h] [rbp-98h]
  _BYTE v57[112]; // [rsp+170h] [rbp-88h] BYREF
  __int64 v58; // [rsp+1E0h] [rbp-18h]
  va_list va; // [rsp+210h] [rbp+18h] BYREF

  va_start(va, a2);
  v10 = 0;
  va_copy(v5, va);
  v19 = (int *)((char *)a1 + *a1);
  v6 = a2;
  if ( a2 <= 10015 )
  {
    if ( v6 != 10015 )
    {
      v6 -= 4000;
      switch ( v6 )
      {
        case 0:
          v9 = *((_DWORD *)++v5 - 2);
          if ( (v9 == 2048 || v9 == 2049 || v9 == 2051) && (a1[3563] || a1[27] == v9) )
          {
            a1[27] = v9;
            a1[48] = v9;
          }
          else
          {
            v10 = -1;
          }
          goto LABEL_151;
        case 1:
          v36 = *v5++;
          if ( !v36 )
            goto LABEL_152;
          *v36 = a1[27];
          goto LABEL_151;
        case 2:
          v8 = *((_DWORD *)++v5 - 2);
          if ( v8 == -1000 || v8 == -1 )
            goto LABEL_26;
          if ( v8 <= 0 )
            goto LABEL_152;
          if ( v8 > 500 )
          {
            if ( v8 > 300000 * a1[28] )
              v8 = 300000 * a1[28];
          }
          else
          {
            v8 = 500;
          }
LABEL_26:
          a1[41] = v8;
          break;
        case 3:
          v37 = *v5++;
          if ( !v37 )
            goto LABEL_152;
          *v37 = sub_1401F4B00(a1, (unsigned int)a1[3559], 1276);
          goto LABEL_151;
        case 4:
          v20 = *((_DWORD *)++v5 - 2);
          if ( v20 < 1101 || v20 > 1105 )
            goto LABEL_152;
          a1[33] = v20;
          if ( a1[33] == 1101 )
          {
            a1[5] = 8000;
          }
          else if ( a1[33] == 1102 )
          {
            a1[5] = 12000;
          }
          else
          {
            a1[5] = 16000;
          }
          goto LABEL_151;
        case 5:
          v39 = *v5++;
          if ( !v39 )
            goto LABEL_152;
          *v39 = a1[33];
          goto LABEL_151;
        case 6:
          v15 = *(_DWORD *)v5;
          if ( v15 >= 2 )
            goto LABEL_152;
          a1[37] = v15;
          a1[15] = 1 - v15;
          goto LABEL_151;
        case 7:
          v45 = *v5++;
          if ( !v45 )
            goto LABEL_152;
          *v45 = a1[37];
          goto LABEL_151;
        case 8:
          v12 = *((_DWORD *)++v5 - 2);
          if ( (v12 < 1101 || v12 > 1105) && v12 != -1000 )
            goto LABEL_152;
          a1[32] = v12;
          if ( a1[32] == 1101 )
          {
            a1[5] = 8000;
          }
          else if ( a1[32] == 1102 )
          {
            a1[5] = 12000;
          }
          else
          {
            a1[5] = 16000;
          }
          goto LABEL_151;
        case 9:
          v40 = *v5++;
          if ( !v40 )
            goto LABEL_152;
          *v40 = a1[3560];
          goto LABEL_151;
        case 10:
          v13 = *(_DWORD *)v5;
          if ( v13 > 0xA )
            goto LABEL_152;
          a1[11] = v13;
          sub_140199190(v19, 4010, (_QWORD *)v13);
          goto LABEL_151;
        case 11:
          v42 = *v5++;
          if ( !v42 )
            goto LABEL_152;
          *v42 = a1[11];
          goto LABEL_151;
        case 12:
          v22 = *(_DWORD *)v5;
          if ( v22 >= 2 )
            goto LABEL_152;
          a1[12] = v22;
          goto LABEL_151;
        case 13:
          v43 = *v5++;
          if ( !v43 )
            goto LABEL_152;
          *v43 = a1[12];
          goto LABEL_151;
        case 14:
          v14 = *(_DWORD *)v5;
          if ( v14 > 0x64 )
            goto LABEL_152;
          a1[10] = v14;
          sub_140199190(v19, 4014, (_QWORD *)v14);
          goto LABEL_151;
        case 15:
          v44 = *v5++;
          if ( !v44 )
            goto LABEL_152;
          *v44 = a1[10];
          goto LABEL_151;
        case 16:
          v21 = *(_DWORD *)v5;
          if ( v21 >= 2 )
            goto LABEL_152;
          a1[46] = v21;
          goto LABEL_151;
        case 17:
          v41 = *v5++;
          if ( !v41 )
            goto LABEL_152;
          *v41 = a1[46];
          goto LABEL_151;
        case 20:
          v24 = *(_DWORD *)v5;
          if ( v24 >= 2 )
            goto LABEL_152;
          a1[38] = v24;
          goto LABEL_151;
        case 21:
          v47 = *v5++;
          if ( !v47 )
            goto LABEL_152;
          *v47 = a1[38];
          goto LABEL_151;
        case 22:
          v11 = *((_DWORD *)++v5 - 2);
          if ( (v11 < 1 || v11 > a1[28]) && v11 != -1000 )
            goto LABEL_152;
          a1[30] = v11;
          goto LABEL_151;
        case 23:
          v38 = *v5++;
          if ( !v38 )
            goto LABEL_152;
          *v38 = a1[30];
          goto LABEL_151;
        case 24:
          v16 = *(_DWORD *)v5;
          if ( v16 != -1000 && v16 != 3001 && v16 != 3002 )
            goto LABEL_152;
          a1[31] = v16;
          goto LABEL_151;
        case 25:
          v48 = *v5++;
          if ( !v48 )
            goto LABEL_152;
          *v48 = a1[31];
          goto LABEL_151;
        case 27:
          v32 = (int *)*v5++;
          if ( !v32 )
            goto LABEL_152;
          *v32 = a1[36] / 400;
          if ( a1[27] != 2051 )
            *v32 += a1[29];
          goto LABEL_151;
        case 28:
          v55 = (__int64)a1 + a1[1];
          sub_1401EBF00(a1 + 47);
          v54 = a1 + 3548;
          MEMORY[0x1401FCD30](a1 + 3548, 0, 3952);
          sub_140199190(v19, 4028, v2);
          sub_1401CAAD0(v55, a1[45], (__int64)v57);
          a1[3548] = a1[28];
          *((_WORD *)a1 + 7098) = 0x4000;
          a1[3551] = 1065353216;
          a1[3563] = 1;
          a1[3556] = 1001;
          a1[3560] = 1105;
          a1[3550] = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
          goto LABEL_151;
        case 29:
          v49 = *v5++;
          if ( !v49 )
            goto LABEL_152;
          *v49 = a1[36];
          goto LABEL_151;
        case 31:
          v50 = *v5++;
          if ( !v50 )
            goto LABEL_152;
          *v50 = a1[4535];
          goto LABEL_151;
        case 36:
          v25 = *(_DWORD *)v5;
          if ( v25 < 8 || v25 > 24 )
            goto LABEL_152;
          a1[42] = v25;
          goto LABEL_151;
        case 37:
          v51 = *v5++;
          if ( !v51 )
            goto LABEL_152;
          *v51 = a1[42];
          goto LABEL_151;
        case 40:
          v7 = *(_DWORD *)v5;
          if ( v7 != 5000
            && v7 != 5001
            && v7 != 5002
            && v7 != 5003
            && v7 != 5004
            && v7 != 5005
            && v7 != 5006
            && v7 != 5007
            && v7 != 5008
            && v7 != 5009 )
          {
            goto LABEL_152;
          }
          a1[39] = v7;
          goto LABEL_151;
        case 41:
          v52 = *v5++;
          if ( !v52 )
            goto LABEL_152;
          *v52 = a1[39];
          goto LABEL_151;
        case 42:
          v26 = *(_DWORD *)v5;
          if ( v26 >= 2 )
            goto LABEL_152;
          a1[19] = v26;
          goto LABEL_151;
        case 43:
          v53 = *v5++;
          if ( !v53 )
            goto LABEL_152;
          *v53 = a1[19];
          goto LABEL_151;
        case 46:
          v27 = *(_DWORD *)v5;
          if ( v27 >= 2 )
            goto LABEL_152;
          sub_140199190(v19, 4046, (_QWORD *)v27);
          goto LABEL_151;
        case 47:
          v33 = *v5;
          if ( !v33 )
            goto LABEL_152;
          sub_140199190(v19, 4047, v33);
          goto LABEL_151;
        case 49:
          v28 = (BOOL *)*v5++;
          if ( !v28 )
            goto LABEL_152;
          if ( a1[14] && (a1[3557] == 1000 || a1[3557] == 1001) )
          {
            v56 = (char *)a1 + a1[1];
            *v28 = 1;
            for ( i = 0; i < a1[3]; ++i )
            {
              v30 = *v28 && *(int *)&v56[10088 * i + 6104] >= 10;
              *v28 = v30;
            }
          }
          else if ( a1[46] )
          {
            v31 = a1[4532] >= 10;
            *v28 = v31;
          }
          else
          {
            *v28 = 0;
          }
          goto LABEL_151;
        default:
          goto LABEL_150;
      }
      goto LABEL_151;
    }
    v35 = *v5;
    if ( v35 )
    {
      v10 = sub_140199190(v19, 10015, v35);
      goto LABEL_151;
    }
LABEL_152:
    v5 = nullptr;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v58);
  }
  switch ( v6 )
  {
    case 10024:
      v29 = *(_DWORD *)v5;
      a1[44] = v29;
      v10 = sub_140199190(v19, 10024, (_QWORD *)v29);
      break;
    case 10026:
      v34 = *v5;
      *((_QWORD *)a1 + 1782) = v34;
      v10 = sub_140199190(v19, 10026, v34);
      break;
    case 11002:
      v17 = *(_DWORD *)v5;
      if ( (v17 < 1000 || v17 > 1002) && v17 != -1000 )
        goto LABEL_152;
      a1[34] = v17;
      break;
    case 11018:
      v23 = *(_DWORD *)v5;
      if ( v23 < -1 || v23 > 100 )
        goto LABEL_152;
      a1[35] = v23;
      break;
    case 11019:
      v46 = *v5++;
      if ( !v46 )
        goto LABEL_152;
      *v46 = a1[35];
      break;
    default:
LABEL_150:
      v10 = -5;
      break;
  }
LABEL_151:
  v5 = nullptr;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v58);
}

