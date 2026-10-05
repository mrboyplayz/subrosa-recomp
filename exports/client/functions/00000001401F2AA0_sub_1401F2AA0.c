/* Address: 0x1401f2aa0 | Name: sub_1401F2AA0 | Size: 5046 bytes */
__int64 __fastcall sub_1401F2AA0(int *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  void *v9; // rsp
  unsigned __int64 v10; // rcx
  int *v11; // rdx
  void *v12; // rsp
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  int *v20; // r8
  int *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  float v25; // xmm0_4
  int i; // [rsp+40h] [rbp+0h] BYREF
  int v28; // [rsp+44h] [rbp+4h]
  int v29; // [rsp+48h] [rbp+8h]
  int v30; // [rsp+4Ch] [rbp+Ch]
  int v31; // [rsp+50h] [rbp+10h]
  BOOL v32; // [rsp+54h] [rbp+14h]
  int v33; // [rsp+58h] [rbp+18h] BYREF
  int v34; // [rsp+5Ch] [rbp+1Ch]
  __int64 *v35; // [rsp+60h] [rbp+20h]
  int v36; // [rsp+68h] [rbp+28h]
  int v37; // [rsp+6Ch] [rbp+2Ch]
  int v38; // [rsp+70h] [rbp+30h]
  BOOL v39; // [rsp+74h] [rbp+34h]
  _BYTE v40[4]; // [rsp+78h] [rbp+38h] BYREF
  int v41; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v42; // [rsp+80h] [rbp+40h]
  int v43; // [rsp+84h] [rbp+44h]
  int j; // [rsp+88h] [rbp+48h]
  int v45; // [rsp+8Ch] [rbp+4Ch]
  int v46; // [rsp+90h] [rbp+50h]
  int v47; // [rsp+94h] [rbp+54h]
  int v48; // [rsp+98h] [rbp+58h]
  int v49; // [rsp+9Ch] [rbp+5Ch] BYREF
  int v50; // [rsp+A0h] [rbp+60h]
  int *v51; // [rsp+A8h] [rbp+68h]
  int v52; // [rsp+B0h] [rbp+70h]
  int v53; // [rsp+B4h] [rbp+74h]
  int v54; // [rsp+B8h] [rbp+78h]
  int v55; // [rsp+BCh] [rbp+7Ch]
  int v56; // [rsp+C0h] [rbp+80h]
  int v57; // [rsp+C4h] [rbp+84h]
  int v58; // [rsp+C8h] [rbp+88h]
  BOOL v59; // [rsp+CCh] [rbp+8Ch]
  int v60; // [rsp+D0h] [rbp+90h]
  int v61; // [rsp+D4h] [rbp+94h]
  BOOL v62; // [rsp+D8h] [rbp+98h]
  int v63; // [rsp+DCh] [rbp+9Ch]
  int v64; // [rsp+E0h] [rbp+A0h]
  int v65; // [rsp+E4h] [rbp+A4h]
  unsigned int v66; // [rsp+E8h] [rbp+A8h]
  int v67; // [rsp+ECh] [rbp+ACh]
  BOOL v68; // [rsp+F0h] [rbp+B0h]
  int v69; // [rsp+F4h] [rbp+B4h]
  int v70; // [rsp+F8h] [rbp+B8h]
  int v71; // [rsp+FCh] [rbp+BCh]
  int *v72; // [rsp+100h] [rbp+C0h]
  int *v73; // [rsp+108h] [rbp+C8h]
  __int64 v74; // [rsp+110h] [rbp+D0h]
  int v75; // [rsp+118h] [rbp+D8h]
  int v76; // [rsp+11Ch] [rbp+DCh]
  float v77; // [rsp+120h] [rbp+E0h]
  float v78; // [rsp+124h] [rbp+E4h]
  int v79; // [rsp+128h] [rbp+E8h]
  BOOL v80; // [rsp+12Ch] [rbp+ECh]
  int v81; // [rsp+130h] [rbp+F0h]
  __int64 v82; // [rsp+138h] [rbp+F8h] BYREF
  _DWORD *v83; // [rsp+140h] [rbp+100h]
  __int64 v84; // [rsp+148h] [rbp+108h]
  int *v85; // [rsp+150h] [rbp+110h]
  int *p_i; // [rsp+158h] [rbp+118h]
  int *v87; // [rsp+160h] [rbp+120h]
  __int64 v88; // [rsp+168h] [rbp+128h]
  int *v89; // [rsp+170h] [rbp+130h]
  int *v90; // [rsp+178h] [rbp+138h]
  unsigned int v91; // [rsp+180h] [rbp+140h] BYREF
  int v92; // [rsp+188h] [rbp+148h]
  int v93; // [rsp+1A0h] [rbp+160h]
  __int64 v94; // [rsp+1B8h] [rbp+178h]
  int v97; // [rsp+1E0h] [rbp+1A0h]
  __int64 v98; // [rsp+1E8h] [rbp+1A8h]
  int v99; // [rsp+1F0h] [rbp+1B0h]
  int v100; // [rsp+1F0h] [rbp+1B0h]

  v98 = a4;
  v97 = a3;
  v60 = 0;
  v48 = 0;
  v51 = nullptr;
  v45 = 0;
  v32 = 0;
  v38 = 0;
  v39 = 0;
  v33 = 0;
  v83 = (int *)((char *)a1 + a1[1]);
  v35 = (__int64 *)((char *)a1 + *a1);
  v34 = a1[3] / 50;
  v36 = v34 >> 1;
  v31 = v34 >> 2;
  v30 = v34 >> 3;
  if ( a5 < v34 >> 3 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
  v6 = (unsigned int)(a1[3] >> 31);
  LODWORD(v6) = a1[3] % 25;
  if ( a5 >= 3 * (a1[3] / 25) )
  {
    v6 = (unsigned int)(a1[3] >> 31);
    LODWORD(v6) = a1[3] % 25;
    v70 = 3 * (a1[3] / 25);
  }
  else
  {
    v70 = a5;
  }
  v99 = v70;
  if ( a3 <= 1 )
  {
    a2 = 0;
    if ( v70 >= a1[16] )
      v71 = a1[16];
    else
      v71 = v70;
    v99 = v71;
  }
  if ( a2 )
  {
    v28 = a1[16];
    v29 = a1[14];
    v37 = a1[13];
    sub_14019AC50((__int64)&v91, a2, a3);
  }
  else
  {
    v28 = v99;
    v29 = a1[15];
    v37 = 0;
    if ( !v29 )
    {
      for ( i = 0; i < a1[2] * v28; ++i )
        *(_DWORD *)(a4 + 4LL * i) = 0;
      return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
    }
    if ( v28 > v34 )
    {
      do
      {
        if ( v28 >= v34 )
          v52 = v34;
        else
          v52 = v28;
        v46 = sub_1401F2AA0((_DWORD)a1, 0, 0, v98, v52, 0);
        if ( v46 < 0 )
          break;
        LODWORD(v98) = v98 + 4 * a1[2] * v46;
        v28 -= v46;
      }
      while ( v28 > 0 );
      return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
    }
    if ( v28 < v34 )
    {
      if ( v28 <= v36 )
      {
        if ( v29 != 1000 && v28 > v31 && v28 < v36 )
          v28 = v31;
      }
      else
      {
        v28 = v36;
      }
    }
  }
  v43 = 0;
  v50 = 0;
  v53 = 0;
  if ( a2 && a1[15] > 0 && (v29 == 1002 && a1[15] != 1002 && !a1[17] || v29 != 1002 && a1[15] == 1002) )
  {
    v45 = 1;
    if ( v29 == 1002 )
      v53 = a1[2] * v31;
    else
      v50 = a1[2] * v31;
  }
  v7 = 4LL * v53 + 15;
  if ( v7 <= 4LL * v53 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(sub_1401F89D0(v7 & 0xFFFFFFFFFFFFFFF0uLL, v6));
  p_i = &i;
  if ( v45 && v29 == 1002 )
  {
    v51 = p_i;
    if ( v31 >= v28 )
      v54 = v28;
    else
      v54 = v31;
    sub_1401F2AA0((_DWORD)a1, 0, 0, (_DWORD)v51, v54, 0);
  }
  if ( v28 <= v99 )
  {
    v100 = v28;
    if ( v29 == 1002 || v43 )
    {
      v56 = 0;
    }
    else
    {
      if ( v36 <= v28 )
        v55 = v28;
      else
        v55 = v36;
      v56 = a1[2] * v55;
    }
    v79 = v56;
    v10 = 2LL * v56 + 15;
    if ( v10 <= 2LL * v56 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v12 = alloca(sub_1401F89D0(v10 & 0xFFFFFFFFFFFFFFF0uLL, v8));
    v85 = &i;
    if ( v29 != 1002 )
    {
      v73 = v85;
      if ( a1[15] == 1002 )
        sub_1401CCAC0((__int64)v83);
      if ( 1000 * v28 / a1[3] >= 10 )
        v57 = 1000 * v28 / a1[3];
      else
        v57 = 10;
      a1[8] = v57;
      if ( a2 )
      {
        a1[5] = a1[12];
        if ( v29 == 1000 )
        {
          if ( v37 == 1101 )
          {
            a1[7] = 8000;
          }
          else if ( v37 == 1102 )
          {
            a1[7] = 12000;
          }
          else
          {
            a1[7] = 16000;
          }
        }
        else
        {
          a1[7] = 16000;
        }
      }
      if ( a2 )
        v58 = 2 * a6;
      else
        v58 = 1;
      v61 = v58;
      v47 = 0;
      do
      {
        v59 = v47 == 0;
        v80 = v59;
        v60 = sub_1401CCB60(v83, a1 + 4, v61, v59, (__int64)&v91, v73, &v49, a1[11]);
        if ( v60 )
        {
          if ( !v61 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
          v49 = v100;
          for ( i = 0; i < a1[2] * v100; ++i )
          {
            v11 = v73;
            *((_WORD *)v73 + i) = 0;
          }
        }
        v73 = (int *)((char *)v73 + 2 * a1[2] * v49);
        v47 += v49;
      }
      while ( v47 < v100 );
    }
    v66 = 0;
    if ( !a6 && v29 != 1002 )
    {
      if ( a2 )
      {
        v62 = a1[14] == 1001;
        v13 = sub_14019A0A0((__int64)&v91);
        if ( v13 + 20 * v62 + 17 <= 8 * v97 )
        {
          v32 = v29 != 1001 || sub_14019AF20((__int64)&v91, 12);
          if ( v32 )
          {
            v39 = sub_14019AF20((__int64)&v91, 1);
            if ( v29 == 1001 )
              v63 = sub_14019B0A0(&v91, 256) + 2;
            else
              v63 = v97 - ((int)(sub_14019A0A0((__int64)&v91) + 7) >> 3);
            v38 = v63;
            v97 -= v63;
            v81 = 8 * v97;
            v14 = sub_14019A0A0((__int64)&v91);
            if ( v81 < v14 )
            {
              v97 = 0;
              v38 = 0;
              v32 = 0;
            }
            v92 -= v38;
          }
        }
      }
    }
    if ( v29 != 1002 )
      v66 = 17;
    if ( v32 )
    {
      v45 = 0;
      v50 = 0;
    }
    v15 = 4LL * v50 + 15;
    if ( v15 <= 4LL * v50 )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = alloca(sub_1401F89D0(v15 & 0xFFFFFFFFFFFFFFF0uLL, v11));
    v87 = &i;
    if ( v45 && v29 != 1002 )
    {
      v51 = v87;
      if ( v31 >= v28 )
        v64 = v28;
      else
        v64 = v31;
      sub_1401F2AA0((_DWORD)a1, 0, 0, (_DWORD)v51, v64, 0);
    }
    if ( !v37 )
      goto LABEL_203;
    v42 = 21;
    v41 = v37;
    if ( v37 == 1101 )
    {
      v42 = 13;
    }
    else if ( v41 > 1101 )
    {
      if ( v41 <= 1103 )
      {
        v42 = 17;
      }
      else if ( v41 == 1104 )
      {
        v42 = 19;
      }
      else if ( v41 == 1105 )
      {
        v42 = 21;
      }
    }
    if ( !(unsigned int)sub_140199AA0(v35, 10012, (int *)v42) )
    {
LABEL_203:
      if ( !(unsigned int)sub_140199AA0(v35, 10008, (int *)(unsigned int)a1[12]) )
      {
        if ( v32 )
          v65 = a1[2] * v31;
        else
          v65 = 0;
        v75 = v65;
        v18 = 4LL * v65 + 15;
        if ( v18 <= 4LL * v65 )
          v18 = 0xFFFFFFFFFFFFFF0LL;
        v19 = alloca(sub_1401F89D0(v18 & 0xFFFFFFFFFFFFFFF0uLL, v17));
        v72 = &i;
        if ( !v32
          || !v39
          || !(unsigned int)sub_140199AA0(v35, 10010, nullptr)
          && (sub_14019F210(v35, v97 + a2, v38, (__int64)v72, v31, nullptr, 0),
              !(unsigned int)sub_140199AA0(v35, 4031, &v33)) )
        {
          if ( !(unsigned int)sub_140199AA0(v35, 10010, (int *)v66) )
          {
            if ( v29 == 1000 )
            {
              v40[0] = -1;
              v40[1] = -1;
              if ( !v43 )
              {
                for ( i = 0; i < a1[2] * v100; ++i )
                  *(_DWORD *)(v98 + 4LL * i) = 0;
              }
              if ( a1[15] == 1001 && (!v32 || !v39 || !a1[17]) )
              {
                if ( (unsigned int)sub_140199AA0(v35, 10010, nullptr) )
                  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
                sub_14019F210(v35, (__int64)v40, 2, v98, v30, nullptr, v43);
              }
            }
            else
            {
              if ( v34 >= v100 )
                v67 = v100;
              else
                v67 = v34;
              v76 = v67;
              if ( v29 != a1[15] && a1[15] > 0 && !a1[17] && (unsigned int)sub_140199AA0(v35, 4028, v20) )
                return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
              if ( a6 )
                v84 = 0;
              else
                v84 = a2;
              v48 = sub_14019F210(v35, v84, v97, v98, v76, &v91, v43);
            }
            if ( v29 != 1002 && !v43 )
            {
              for ( i = 0; i < a1[2] * v100; ++i )
                *(float *)(v98 + 4LL * i) = *(float *)(v98 + 4LL * i)
                                          + (float)(0.000030517578 * (float)*((__int16 *)v85 + i));
            }
            if ( !(unsigned int)sub_140199AA0(v35, 10015, (int *)&v82) )
            {
              v74 = *(_QWORD *)(v82 + 72);
              if ( v32 && !v39 )
              {
                if ( (unsigned int)sub_140199AA0(v35, 4028, v21) )
                  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
                if ( (unsigned int)sub_140199AA0(v35, 10010, nullptr) )
                  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
                sub_14019F210(v35, v97 + a2, v38, (__int64)v72, v31, nullptr, 0);
                if ( (unsigned int)sub_140199AA0(v35, 4031, &v33) )
                  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
                v22 = (__int64)&v72[v30 * a1[2]];
                v88 = v98 + 4LL * (v100 - v30) * a1[2];
                sub_1401F2910(v88, v22, v88, v30, a1[2], v74, a1[3]);
              }
              if ( v32 && v39 )
              {
                for ( j = 0; j < a1[2]; ++j )
                {
                  for ( i = 0; i < v30; ++i )
                    *(_DWORD *)(v98 + 4LL * (j + i * a1[2])) = v72[j + i * a1[2]];
                }
                v23 = v98 + 4LL * v30 * a1[2];
                v89 = &v72[v30 * a1[2]];
                sub_1401F2910((__int64)v89, v23, v23, v30, a1[2], v74, a1[3]);
              }
              if ( v45 )
              {
                if ( v28 < v31 )
                {
                  sub_1401F2910((__int64)v51, v98, v98, v30, a1[2], v74, a1[3]);
                }
                else
                {
                  for ( i = 0; i < v30 * a1[2]; ++i )
                    *(_DWORD *)(v98 + 4LL * i) = v51[i];
                  v24 = v98 + 4LL * v30 * a1[2];
                  v90 = &v51[v30 * a1[2]];
                  sub_1401F2910((__int64)v90, v24, v24, v30, a1[2], v74, a1[3]);
                }
              }
              if ( a1[10] )
              {
                v25 = exp(0.6931471805599453 * (float)(0.00064881408 * (float)a1[10]));
                v77 = v25;
                for ( i = 0; i < a1[2] * v100; ++i )
                {
                  v78 = *(float *)(v98 + 4LL * i) * v77;
                  *(float *)(v98 + 4LL * i) = v78;
                }
              }
              if ( v97 > 1 )
                a1[21] = v33 ^ v93;
              else
                a1[21] = 0;
              a1[15] = v29;
              v68 = v32 && !v39;
              a1[17] = v68;
              if ( v48 >= 0 )
                sub_1401A2600();
              if ( v48 >= 0 )
                v69 = v28;
              else
                v69 = v48;
            }
          }
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v94);
}

