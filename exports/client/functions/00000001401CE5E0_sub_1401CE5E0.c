/* Address: 0x1401ce5e0 | Name: sub_1401CE5E0 | Stack analysis corrected in export snapshot. */
__int64 sub_1401CE5E0()
{
  float v0; // xmm0_4
  float v1; // xmm0_4
  float v2; // xmm0_4
  float v3; // xmm0_4
  _DWORD v5[12]; // [rsp-20h] [rbp-6DF0h] BYREF
  int i; // [rsp+20h] [rbp-6DB0h]
  int j; // [rsp+24h] [rbp-6DACh]
  int m; // [rsp+28h] [rbp-6DA8h]
  int k; // [rsp+2Ch] [rbp-6DA4h]
  int v10; // [rsp+30h] [rbp-6DA0h]
  int v11; // [rsp+34h] [rbp-6D9Ch]
  signed int v12; // [rsp+38h] [rbp-6D98h]
  int v13; // [rsp+3Ch] [rbp-6D94h]
  float v14; // [rsp+40h] [rbp-6D90h]
  int v15; // [rsp+44h] [rbp-6D8Ch]
  int v16; // [rsp+48h] [rbp-6D88h]
  int v17; // [rsp+4Ch] [rbp-6D84h]
  int v18; // [rsp+50h] [rbp-6D80h]
  signed int v19; // [rsp+54h] [rbp-6D7Ch]
  int v20; // [rsp+58h] [rbp-6D78h]
  float *v21; // [rsp+60h] [rbp-6D70h]
  int v22; // [rsp+68h] [rbp-6D68h]
  int v23; // [rsp+6Ch] [rbp-6D64h]
  float v24; // [rsp+70h] [rbp-6D60h]
  float v25; // [rsp+74h] [rbp-6D5Ch]
  double v26; // [rsp+78h] [rbp-6D58h]
  float *v27; // [rsp+80h] [rbp-6D50h]
  int v28; // [rsp+88h] [rbp-6D48h]
  int v29; // [rsp+8Ch] [rbp-6D44h]
  int v30; // [rsp+90h] [rbp-6D40h]
  float v31; // [rsp+94h] [rbp-6D3Ch]
  int v32; // [rsp+98h] [rbp-6D38h]
  int v33; // [rsp+9Ch] [rbp-6D34h]
  int v34; // [rsp+A0h] [rbp-6D30h]
  int v35; // [rsp+A4h] [rbp-6D2Ch]
  char *v36; // [rsp+A8h] [rbp-6D28h]
  float v37; // [rsp+B0h] [rbp-6D20h]
  float v38; // [rsp+B4h] [rbp-6D1Ch]
  float v39; // [rsp+B8h] [rbp-6D18h]
  int v40; // [rsp+BCh] [rbp-6D14h]
  signed int v41; // [rsp+C0h] [rbp-6D10h]
  signed int v42; // [rsp+C4h] [rbp-6D0Ch]
  signed int v43; // [rsp+C8h] [rbp-6D08h]
  signed int v44; // [rsp+CCh] [rbp-6D04h]
  int v45; // [rsp+D0h] [rbp-6D00h]
  int v46; // [rsp+D4h] [rbp-6CFCh]
  signed int v47; // [rsp+D8h] [rbp-6CF8h]
  signed int v48; // [rsp+DCh] [rbp-6CF4h]
  int v49; // [rsp+E0h] [rbp-6CF0h]
  int v50; // [rsp+E4h] [rbp-6CECh]
  int v51; // [rsp+E8h] [rbp-6CE8h]
  int v52; // [rsp+ECh] [rbp-6CE4h]
  int v53; // [rsp+F0h] [rbp-6CE0h]
  int v54; // [rsp+F4h] [rbp-6CDCh]
  int v55; // [rsp+F8h] [rbp-6CD8h]
  int v56; // [rsp+FCh] [rbp-6CD4h]
  float v57; // [rsp+100h] [rbp-6CD0h]
  float v58; // [rsp+104h] [rbp-6CCCh]
  float v59; // [rsp+108h] [rbp-6CC8h]
  double v60; // [rsp+110h] [rbp-6CC0h]
  double v61; // [rsp+118h] [rbp-6CB8h]
  float v62; // [rsp+120h] [rbp-6CB0h]
  int v63; // [rsp+124h] [rbp-6CACh]
  float v64; // [rsp+128h] [rbp-6CA8h]
  int v65; // [rsp+12Ch] [rbp-6CA4h]
  double v66; // [rsp+130h] [rbp-6CA0h]
  unsigned __int64 v67; // [rsp+138h] [rbp-6C98h]
  double v68; // [rsp+140h] [rbp-6C90h]
  __m128i v69[4]; // [rsp+148h] [rbp-6C88h] BYREF
  _DWORD v70[24]; // [rsp+190h] [rbp-6C40h] BYREF
  float v71[160]; // [rsp+1F0h] [rbp-6BE0h] BYREF
  float v72[68]; // [rsp+470h] [rbp-6960h] BYREF
  _DWORD v73[596]; // [rsp+580h] [rbp-6850h] BYREF
  _BYTE v74[640]; // [rsp+ED0h] [rbp-5F00h] BYREF
  __int64 v75; // [rsp+1150h] [rbp-5C80h] BYREF
  _QWORD v76[340]; // [rsp+13D0h] [rbp-5A00h] BYREF
  _QWORD v77[378]; // [rsp+1E70h] [rbp-4F60h] BYREF
  _WORD v78[320]; // [rsp+2A40h] [rbp-4390h] BYREF
  _BYTE v79[320]; // [rsp+2CC0h] [rbp-4110h] BYREF
  _BYTE v80[960]; // [rsp+2E00h] [rbp-3FD0h] BYREF
  _BYTE v81[1280]; // [rsp+31C0h] [rbp-3C10h] BYREF
  __int64 v82; // [rsp+36C0h] [rbp-3710h]
  __int64 v83; // [rsp+36E0h] [rbp-36F0h]
  _WORD *v84; // [rsp+36E8h] [rbp-36E8h]
  _WORD *v85; // [rsp+36F0h] [rbp-36E0h]
  _BYTE *v86; // [rsp+36F8h] [rbp-36D8h]
  float *v87; // [rsp+3700h] [rbp-36D0h]
  int v88; // [rsp+3708h] [rbp-36C8h]
  float v89; // [rsp+3710h] [rbp-36C0h]
  float v90; // [rsp+3718h] [rbp-36B8h]
  int v91; // [rsp+3720h] [rbp-36B0h]
  int v92; // [rsp+3728h] [rbp-36A8h]
  int v93; // [rsp+3730h] [rbp-36A0h]
  int v94; // [rsp+3738h] [rbp-3698h]

  v28 = v91 * (5 * v93 + 20);
  v56 = 20 * v93 + 80;
  v29 = 40 * v93 + 160;
  v33 = 5 * v91;
  v65 = 20;
  v13 = 40;
  v12 = 2 * v91;
  v11 = 8;
  v15 = 16;
  v19 = 18 * v91 - 1;
  v17 = 72;
  v23 = 143;
  if ( v91 == 16 )
  {
    sub_1401D1210((__int64)v81, v83, v28);
    MEMORY[0x1401FCD30](v69, 0, 8u);
    sub_1401BAD00(v69, (__int64)v78, (__int64)v81, v28);
    sub_1401D12E0((__int64)v74, (__int64)v78, v29);
  }
  else if ( v91 == 12 )
  {
    sub_1401D1210((__int64)v80, v83, v28);
    MEMORY[0x1401FCD30](v69, 0, 0x18u);
    sub_1401BAEE0(v69, v78, (__int64)v80, v28);
    sub_1401D12E0((__int64)v74, (__int64)v78, v29);
  }
  else
  {
    sub_1401D1210((__int64)v78, v83, v29);
  }
  MEMORY[0x1401FCD30](v69, 0, 8u);
  sub_1401BAD00(v69, (__int64)v79, (__int64)v78, v29);
  sub_1401D12E0((__int64)v71, (__int64)v79, v56);
  for ( i = v56 - 1; i > 0; --i )
  {
    if ( (float)((float)(int)v71[i] + v71[i - 1]) <= 32767.0 )
    {
      if ( (float)((float)(int)v71[i] + v71[i - 1]) >= -32768.0 )
        v57 = (float)(int)v71[i] + v71[i - 1];
      else
        v57 = -32768.0;
      v58 = v57;
    }
    else
    {
      v58 = 32767.0;
    }
    v71[i] = (float)(__int16)(int)v58;
  }
  MEMORY[0x1401FCD30](v73, 0, 596LL * v93);
  v21 = &v71[4 * v65];
  for ( j = 0; j < v93 >> 1; ++j )
  {
    v27 = &v21[-v11];
    v5[10] = v94;
    sub_1401A9C80(v21, (__int64)&v21[-v17], (__int64)v72, v13, v17 - v11 + 1);
    v26 = v72[v17 - v11];
    v68 = sub_1401D1050((__int64)v21, v13);
    v61 = v68 + sub_1401D1050((__int64)v27, v13) + (float)((float)v13 * 4000.0);
    v0 = 2.0 * v26 / v61;
    *(float *)&v73[v11] = *(float *)&v73[v11] + v0;
    for ( k = v11 + 1; k <= v17; ++k )
    {
      --v27;
      v26 = v72[v17 - k];
      v61 = v61 + *v27 * *v27 - v27[v13] * v27[v13];
      v1 = 2.0 * v26 / v61;
      *(float *)&v73[k] = *(float *)&v73[k] + v1;
    }
    v21 += v13;
  }
  for ( i = v17; i >= v11; --i )
    *(float *)&v73[i] = *(float *)&v73[i] - (float)((float)(*(float *)&v73[i] * (float)i) / 4096.0);
  v16 = 2 * v92 + 4;
  sub_1401CFF30((__int64)&v73[v11], (__int64)v70, v17 - v11 + 1, v16);
  v59 = *(float *)&v73[v11];
  if ( v59 >= 0.2 )
  {
    v62 = v89 * v59;
    for ( i = 0; i < v16; ++i )
    {
      if ( *(float *)&v73[i + v11] <= v62 )
      {
        v16 = i;
        break;
      }
      v70[i] = 2 * (v11 + v70[i]);
    }
    for ( i = v15 - 5; i < v23 + 5; ++i )
    {
      v67 = 2LL * i;
      if ( v67 >= 0x12A )
        sub_1401F8694();
      *(_WORD *)((char *)&v77[340] + v67) = 0;
    }
    for ( i = 0; i < v16; ++i )
      *((_WORD *)&v77[340] + (int)v70[i]) = 1;
    for ( i = v23 + 3; i >= v15; --i )
      *((_WORD *)&v77[340] + i) += *((_WORD *)&v77[339] + i + 2) + *((_WORD *)&v77[339] + i + 3);
    v16 = 0;
    for ( i = v15; i < v23 + 1; ++i )
    {
      if ( *((__int16 *)&v77[340] + i + 1) > 0 )
        v70[v16++] = i;
    }
    for ( i = v23 + 3; i >= v15; --i )
      *((_WORD *)&v77[340] + i) += *((_WORD *)&v77[339] + i + 1)
                                 + *((_WORD *)&v77[339] + i + 2)
                                 + *((_WORD *)&v77[339] + i + 3);
    v30 = 0;
    for ( i = v15; i < v23 + 4; ++i )
    {
      if ( *((__int16 *)&v77[340] + i) > 0 )
        *((_WORD *)&v77[340] + v30++) = i - 2;
    }
    MEMORY[0x1401FCD30](v73, 0, 0x950u);
    if ( v91 == 8 )
      v21 = (float *)(v83 + 640);
    else
      v21 = (float *)&v75;
    for ( j = 0; j < v93; ++j )
    {
      v66 = sub_1401D1050((__int64)v21, v13) + 1.0;
      for ( m = 0; m < v30; ++m )
      {
        k = *((__int16 *)&v77[340] + m);
        v27 = &v21[-k];
        v26 = sub_1401D0EF0((__int64)v27, (__int64)v21, v13);
        if ( v26 <= 0.0 )
        {
          v73[149 * j + k] = 0;
        }
        else
        {
          v60 = sub_1401D1050((__int64)v27, v13);
          v2 = 2.0 * v26 / (v60 + v66);
          *(float *)&v73[149 * j + k] = v2;
        }
      }
      v21 += v13;
    }
    v25 = 0.0;
    v39 = -1000.0;
    v20 = 0;
    v10 = -1;
    if ( v88 <= 0 )
    {
      v38 = 0.0;
    }
    else
    {
      if ( v91 == 12 )
      {
        v88 = 2 * v88 / 3;
      }
      else if ( v91 == 16 )
      {
        v88 >>= 1;
      }
      v38 = sub_1401D1340((float)v88);
    }
    if ( v93 == 4 )
    {
      v22 = 11;
      v36 = (char *)&unk_14027E290;
      if ( v91 == 8 && v92 > 0 )
        v18 = 11;
      else
        v18 = 3;
    }
    else
    {
      v22 = 3;
      v36 = (char *)&unk_14027BC14;
      v18 = 3;
    }
    for ( j = 0; j < v16; ++j )
    {
      k = v70[j];
      for ( m = 0; m < v18; ++m )
      {
        v69[1].m128i_i32[m + 2] = 0;
        for ( i = 0; i < v93; ++i )
          *(float *)&v69[1].m128i_i32[m + 2] = *(float *)&v69[1].m128i_i32[m + 2]
                                             + *(float *)&v73[149 * i + v36[m + v22 * i] + k];
      }
      v14 = -1000.0;
      v40 = 0;
      for ( i = 0; i < v18; ++i )
      {
        if ( *(float *)&v69[1].m128i_i32[i + 2] > v14 )
        {
          v14 = *(float *)&v69[1].m128i_i32[i + 2];
          v40 = i;
        }
      }
      v37 = sub_1401D1340((float)k);
      v31 = v14 - (float)((float)(0.2 * (float)v93) * v37);
      if ( v88 > 0 )
      {
        v24 = (float)(v37 - v38) * (float)(v37 - v38);
        v31 = v31 - (float)((float)((float)((float)(0.2 * (float)v93) * *v87) * v24) / (float)(v24 + 0.5));
      }
      if ( v31 > v39 && v14 > (float)((float)v93 * v90) )
      {
        v39 = v31;
        v25 = v14;
        v10 = k;
        v20 = v40;
      }
    }
    if ( v10 == -1 )
    {
      MEMORY[0x1401FCD30](v84, 0, 0x10u);
      *v87 = 0.0;
      *v85 = 0;
      *v86 = 0;
    }
    else
    {
      *v87 = v25 / (float)v93;
      if ( v91 <= 8 )
      {
        for ( j = 0; j < v93; ++j )
        {
          *(_DWORD *)&v84[2 * j] = v36[v20 + v22 * j] + v10;
          if ( v15 <= 144 )
          {
            if ( *(int *)&v84[2 * j] <= 144 )
            {
              if ( *(_DWORD *)&v84[2 * j] >= v15 )
                v53 = *(_DWORD *)&v84[2 * j];
              else
                v53 = v15;
              v54 = v53;
            }
            else
            {
              v54 = 144;
            }
            v55 = v54;
          }
          else
          {
            if ( *(_DWORD *)&v84[2 * j] <= v15 )
            {
              if ( *(int *)&v84[2 * j] >= 144 )
                v51 = *(_DWORD *)&v84[2 * j];
              else
                v51 = 144;
              v52 = v51;
            }
            else
            {
              v52 = v15;
            }
            v55 = v52;
          }
          *(_DWORD *)&v84[2 * j] = v55;
        }
        *v85 = v10 - v15;
        *v86 = v20;
      }
      else
      {
        if ( v91 == 12 )
          v10 = ((3 * (_BYTE)v10) & 1) + ((3 * (__int16)v10) >> 1);
        else
          v10 *= 2;
        if ( v12 <= v19 )
        {
          if ( v10 <= v19 )
          {
            if ( v10 >= v12 )
              v43 = v10;
            else
              v43 = v12;
            v44 = v43;
          }
          else
          {
            v44 = v19;
          }
          v45 = v44;
        }
        else
        {
          if ( v10 <= v12 )
          {
            if ( v10 >= v19 )
              v41 = v10;
            else
              v41 = v19;
            v42 = v41;
          }
          else
          {
            v42 = v12;
          }
          v45 = v42;
        }
        v10 = v45;
        v34 = sub_1401BE3A0(v45 - 2, v12);
        v63 = sub_1401BE320(v45 + 2, v19);
        v35 = v45;
        v20 = 0;
        v25 = -1000.0;
        sub_1401E0010((__int64)v77, v83, v34, v33, v93, v92, v94);
        sub_1401E0340((__int64)v76, v83, v34, v33, v93, v92);
        v32 = 0;
        v64 = 0.050000001 / (float)v45;
        if ( v93 == 4 )
        {
          v18 = byte_14027BB84[v92];
          v22 = 34;
          v36 = byte_14027E2C0;
        }
        else
        {
          v18 = 12;
          v22 = 12;
          v36 = (char *)&unk_14027CC28;
        }
        v21 = (float *)(v83 + 80LL * v91);
        v66 = sub_1401D1050((__int64)v21, v33 * v93) + 1.0;
        for ( k = v34; k <= v63; ++k )
        {
          for ( m = 0; m < v18; ++m )
          {
            v26 = 0.0;
            v60 = v66;
            for ( j = 0; j < v93; ++j )
            {
              v26 = v26 + *((float *)&v77[85 * j] + 5 * m + v32);
              v60 = v60 + *((float *)&v76[85 * j] + 5 * m + v32);
            }
            if ( v26 <= 0.0 )
            {
              v14 = 0.0;
            }
            else
            {
              v3 = 2.0 * v26 / v60;
              v14 = v3 * (float)(1.0 - (float)(v64 * (float)m));
            }
            if ( v14 > v25 && byte_14027E2C0[m] + k <= v19 )
            {
              v25 = v14;
              v35 = k;
              v20 = m;
            }
          }
          ++v32;
        }
        for ( j = 0; j < v93; ++j )
        {
          *(_DWORD *)&v84[2 * j] = v36[v20 + v22 * j] + v35;
          if ( v12 <= 18 * v91 )
          {
            if ( *(_DWORD *)&v84[2 * j] <= 18 * v91 )
            {
              if ( *(_DWORD *)&v84[2 * j] >= v12 )
                v48 = *(_DWORD *)&v84[2 * j];
              else
                v48 = v12;
              v49 = v48;
            }
            else
            {
              v49 = 18 * v91;
            }
            v50 = v49;
          }
          else
          {
            if ( *(_DWORD *)&v84[2 * j] <= v12 )
            {
              if ( *(_DWORD *)&v84[2 * j] >= 18 * v91 )
                v46 = *(_DWORD *)&v84[2 * j];
              else
                v46 = 18 * v91;
              v47 = v46;
            }
            else
            {
              v47 = v12;
            }
            v50 = v47;
          }
          *(_DWORD *)&v84[2 * j] = v50;
        }
        *v85 = v35 - v12;
        *v86 = v20;
      }
    }
  }
  else
  {
    MEMORY[0x1401FCD30](v84, 0, 4LL * v93);
    *v87 = 0.0;
    *v85 = 0;
    *v86 = 0;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v5 ^ v82);
}

