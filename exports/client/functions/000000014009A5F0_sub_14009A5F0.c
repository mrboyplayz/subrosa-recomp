/* Address: 0x14009a5f0 | Name: sub_14009A5F0 | Size: 2984 bytes */
__int64 __fastcall sub_14009A5F0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6; // r11d
  int v7; // esi
  __int64 v8; // r14
  int v9; // xmm8_4
  int v10; // xmm9_4
  int v11; // xmm10_4
  int v12; // r10d
  unsigned int v13; // r11d
  int v14; // r15d
  signed int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // r9d
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // r9d
  int v23; // edx
  int v24; // r8d
  int v25; // r13d
  int v26; // edi
  int v27; // esi
  int v28; // ebp
  int v29; // ecx
  int v30; // edx
  int v31; // r8d
  int v32; // eax
  float v33; // xmm6_4
  float v34; // xmm0_4
  int v35; // r8d
  signed int v36; // r9d
  int v37; // r8d
  int v38; // r8d
  float v39; // xmm0_4
  bool v40; // cf
  float v41; // xmm0_4
  __int64 v42; // rbx
  __int64 v43; // rax
  signed int v44; // r10d
  signed int i; // r9d
  __int64 v46; // r8
  signed int v47; // eax
  int v49; // [rsp+110h] [rbp+8h]

  v6 = dword_140404A6C[283829878];
  v7 = a2;
  v8 = a1;
  if ( a1 == dword_140404A6C[283829877] )
  {
    v9 = dword_1402B2830[0];
    v10 = dword_1402B2834[0];
    v11 = dword_1402B2838[0];
  }
  else if ( a1 == dword_140404A6C[283829878] )
  {
    v9 = dword_1402B283C;
    v10 = dword_1402B2840;
    v11 = dword_1402B2844;
  }
  else if ( a1 == dword_140404A6C[283829879] )
  {
    v9 = dword_1402B2848;
    v10 = dword_1402B284C;
    v11 = dword_1402B2850;
  }
  else
  {
    v9 = a2;
    v10 = a2;
    v11 = a2;
  }
  if ( a1 == dword_140404A6C[283830649] || a1 == dword_140404A6C[283830650] || a1 == dword_140404A6C[283830651] )
  {
    *(float *)&v9 = *(float *)&dword_1402B2848 * 0.5;
    *(float *)&v10 = *(float *)&dword_1402B284C * 0.5;
    *(float *)&v11 = *(float *)&dword_1402B2850 * 0.5;
  }
  else if ( a1 >= (int)dword_140404A6C[283830652] && a1 <= (int)dword_140404A6C[283830656] )
  {
    *(float *)&v9 = 0.125;
    *(float *)&v11 = 0.375;
    *(float *)&v10 = 0.125;
  }
  v12 = 0;
  if ( a1 != dword_140404A6C[283830649] )
  {
    v21 = dword_140404A6C[283830695];
    v14 = 128;
    v22 = dword_140404A6C[283830690];
    v15 = 128;
    v23 = dword_140404A6C[283830660];
    v24 = dword_140404A6C[283830658];
    dword_140404A6C[468765293] = 128;
    dword_140404A6C[468765294] = 128;
    v49 = 0;
    while ( 1 )
    {
      v25 = 0;
      if ( v14 > 0 )
        break;
LABEL_160:
      v49 = ++v12;
      if ( v12 >= v15 )
      {
        v7 = a2;
        goto LABEL_162;
      }
    }
    while ( 1 )
    {
      v26 = 0;
      v27 = 255;
      v28 = 255;
      v29 = 32;
      if ( (int)v8 < v24 || (int)v8 > v23 )
        goto LABEL_63;
      if ( (unsigned int)(v25 - 40) > 0x2F )
        break;
      if ( (unsigned int)(v12 - 84) <= 0x17 && (_DWORD)v8 == v24 )
      {
        v29 = 255;
LABEL_61:
        v26 = 32;
        goto LABEL_62;
      }
      if ( (unsigned int)(v12 - 52) <= 0x17 && (_DWORD)v8 == dword_140404A6C[283830659] )
      {
        v26 = 255;
        v29 = 255;
      }
      else
      {
        if ( (unsigned int)(v12 - 20) > 0x17 || (_DWORD)v8 != v23 )
          break;
        v27 = 32;
        v26 = 255;
        v29 = 255;
      }
LABEL_62:
      v21 = dword_140404A6C[283830695];
      v28 = 32;
LABEL_63:
      if ( (int)v8 >= v22 && (int)v8 <= v21 )
      {
        if ( (_DWORD)v8 == v22 )
        {
          v27 = 32;
          v26 = 32;
          v28 = 32;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830691] )
        {
          v27 = 32;
          v26 = 80;
          v28 = 32;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830692] )
        {
          v27 = 32;
          v26 = 32;
          v28 = 128;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830693] )
        {
          v27 = 192;
          v26 = 192;
          v28 = 192;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830694] )
        {
          v27 = 247;
          v28 = 25;
          v26 = 181;
        }
        if ( (_DWORD)v8 == v21 )
        {
          v26 = 16;
          v27 = 64;
          v28 = 16;
        }
        v29 = 32;
        if ( v12 >= 88
          && (unsigned int)(v25 - 32) <= 0x3F
          && ((unsigned int)(v12 - 92) > 0x1B || (unsigned int)(v25 - 40) > 0xF) )
        {
          v27 = 96;
          v29 = 192;
          v26 = 96;
          v28 = 96;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283829874] )
      {
        v27 = 16;
        v29 = 32;
        v28 = 16;
        v26 = 64;
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830696] )
      {
        if ( v25 >= 64 )
        {
          v27 = 32;
          v26 = 32;
          v28 = 32;
          v29 = 32;
        }
        else
        {
          v27 = 128;
          v26 = 120;
          v28 = 112;
          v29 = 1;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830698] )
      {
        if ( v25 >= 64 )
        {
          v27 = 64;
          v29 = 32;
          v26 = 24;
          v28 = 12;
        }
        else
        {
          v27 = 16;
          v29 = 192;
          v26 = 16;
          v28 = 16;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830699] )
      {
        v27 = 160;
        v28 = 32;
        v29 = 192;
        v26 = 96;
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830689] )
      {
        v30 = 192;
        v31 = 112;
        v32 = 110;
        if ( (float)((float)((float)((float)v12 - 64.0) * (float)((float)v12 - 64.0))
                   + (float)((float)((float)v25 - 64.0) * (float)((float)v25 - 64.0))) >= 2304.0 )
        {
          v32 = 32;
          v30 = 4;
          v31 = 32;
        }
        v26 = v32;
        v27 = v32;
        v28 = v31;
        v29 = v30;
        if ( v12 >= 120 && v12 < 124 && v25 >= 56 && v25 < 72 )
        {
          v28 = 64;
          v29 = 4;
          v26 = 64;
          v27 = 64;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283829875] )
      {
        v29 = 0;
        v27 = 255;
        v26 = 255;
        v28 = 255;
        if ( (float)((float)((float)(64 - v12) * (float)(64 - v12)) + (float)((float)(64 - v25) * (float)(64 - v25))) < 2304.0 )
          v29 = 192;
      }
      if ( (_DWORD)v8 == dword_140404A6C[283829876] )
      {
        v27 = 255;
        v26 = 255;
        v28 = 255;
        v33 = fsqrt((float)((float)(64 - v12) * (float)(64 - v12)) + (float)((float)(64 - v25) * (float)(64 - v25)));
        v34 = sub_1400384F0((float)v25 * 0.0625, (float)v12 * 0.0625, -1).m128_f32[0];
        v29 = 0;
        v12 = v49;
        v6 = dword_140404A6C[283829878];
        if ( (float)((float)(v34 * 6.0) + 48.0) > v33 )
          v29 = 192;
      }
      if ( (int)v8 >= (int)dword_140404A6C[283830649] && (int)v8 <= (int)dword_140404A6C[283830656] )
      {
        v26 = 16;
        v27 = 128;
        if ( (_DWORD)v8 != dword_140404A6C[283830650] )
        {
          v26 = 32;
          v27 = 32;
        }
        v28 = v26;
        if ( (_DWORD)v8 == dword_140404A6C[283830651] )
        {
          v27 = 32;
          v26 = 32;
          v28 = 96;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830652] )
        {
          v27 = 128;
          v26 = 128;
          v28 = 128;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830653] )
        {
          v27 = 224;
          v26 = 224;
          v28 = 224;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830654] )
        {
          v27 = 219;
          v26 = 192;
          v28 = 89;
        }
        if ( v25 >= 64 )
        {
          v27 = 64;
          v26 = 64;
          v28 = 64;
        }
        v29 = 128;
      }
      if ( (int)v8 >= (int)dword_140404A6C[283829877] && (int)v8 <= (int)dword_140404A6C[283829880] )
      {
        v29 = 32;
        if ( v25 >= 64 )
        {
          if ( v12 >= 64 )
          {
            if ( v12 >= 96 )
            {
              v27 = 56;
              v26 = 64;
              v28 = 253;
              v39 = (float)((float)(111.5 - (float)v12) * (float)(111.5 - (float)v12))
                  + (float)((float)(79.5 - (float)v25) * (float)(79.5 - (float)v25));
              v40 = v39 < 36.0;
              v41 = fsqrt(v39);
              if ( !v40 )
              {
                v27 = 253;
                v26 = 253;
              }
              if ( v41 < 3.5 )
              {
                v28 = 64;
                v26 = 64;
                v27 = 64;
              }
            }
            else
            {
              v26 = 128;
              v28 = 32;
              v27 = 160;
            }
          }
          else
          {
            v28 = 159;
            v26 = 180;
            v27 = 253;
          }
        }
        else
        {
          v28 = 96;
          v26 = 96;
          v27 = 96;
          if ( (int)v8 <= v6 && (unsigned int)(v12 - 96) <= 3 && (unsigned int)(v25 - 42) <= 5 )
          {
            v29 = 192;
            v28 = (int)(float)(*(float *)&v11 * 255.0);
            v26 = (int)(float)(*(float *)&v10 * 255.0);
            v27 = (int)(float)(*(float *)&v9 * 255.0);
          }
          v35 = (v12 - 80) >> 2;
          v36 = abs32(v25 - 32);
          if ( v36 < v35 || (int)abs32(v25 - 31) < v35 )
          {
            v29 = 0;
            v28 = 192;
            v26 = 192;
            v27 = 192;
            if ( (_DWORD)v8 == dword_140404A6C[283829879] )
            {
              if ( v12 < 126 && (unsigned int)(v25 - 31) <= 1 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
              if ( v12 < 124 && (unsigned int)(v25 - 30) <= 3 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
            }
            if ( (int)v8 <= v6 && v12 < 126 )
            {
              v37 = (v12 - 112) >> 1;
              if ( v36 < v37 || (int)abs32(v25 - 31) < v37 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
              v38 = (120 - v12) >> 2;
              if ( v36 < v38 || (int)abs32(v25 - 31) < v38 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
            }
          }
        }
      }
      if ( dword_140404A6C[293250409] )
        dword_140404A6C[v12 * v14 + 468765295 + v25] = (v28 << 8) + v29 + (v26 << 16) + (v27 << 24);
      else
        dword_140404A6C[v12 * v14 + 468765295 + v25] = (v29 << 24) + v27 + (v28 << 16) + (v26 << 8);
      v14 = dword_140404A6C[468765293];
      ++v25;
      v23 = dword_140404A6C[283830660];
      v24 = dword_140404A6C[283830658];
      v21 = dword_140404A6C[283830695];
      v22 = dword_140404A6C[283830690];
      if ( v25 >= (int)dword_140404A6C[468765293] )
      {
        v15 = dword_140404A6C[468765294];
        goto LABEL_160;
      }
    }
    v27 = 32;
    goto LABEL_61;
  }
  v13 = dword_140404A6C[293250409];
  v14 = 16;
  v15 = 16;
  dword_140404A6C[468765293] = 16;
  dword_140404A6C[468765294] = 16;
  do
  {
    v16 = 0;
    if ( v14 <= 0 )
      goto LABEL_44;
    do
    {
      if ( v12 == 15 )
      {
        if ( v16 < 8 )
        {
LABEL_34:
          v17 = 32;
          v19 = 32;
          v20 = 32;
          v18 = 32;
          if ( v12 != 1 )
            goto LABEL_39;
          v17 = 255;
          v19 = 255;
          v20 = 255;
          if ( v16 != 1 )
            goto LABEL_39;
          v17 = 192;
          v18 = 192;
LABEL_37:
          v19 = 16;
        }
        else
        {
          v17 = 96;
          v18 = 32;
          v19 = 96;
        }
LABEL_38:
        v20 = v19;
        goto LABEL_39;
      }
      if ( v12 )
        goto LABEL_34;
      v17 = 32;
      v19 = 32;
      v20 = 32;
      v18 = 192;
      switch ( v16 )
      {
        case 1:
          v17 = 128;
          goto LABEL_37;
        case 2:
          v20 = 96;
          break;
        case 3:
          v17 = 128;
          v19 = 128;
          goto LABEL_38;
        case 4:
          v17 = 224;
          v19 = 224;
          goto LABEL_38;
        case 5:
          v17 = 219;
          v20 = 89;
          v19 = 192;
          break;
        case 6:
          v17 = 0;
          v19 = 0;
          v20 = 0;
          break;
      }
LABEL_39:
      if ( v13 )
        dword_140404A6C[v16 + 468765295 + v12 * v14] = (v20 << 8) + v18 + (v19 << 16) + (v17 << 24);
      else
        dword_140404A6C[v16 + 468765295 + v12 * v14] = (v18 << 24) + v17 + (v20 << 16) + (v19 << 8);
      v14 = dword_140404A6C[468765293];
      ++v16;
    }
    while ( v16 < (int)dword_140404A6C[468765293] );
    v15 = dword_140404A6C[468765294];
LABEL_44:
    ++v12;
  }
  while ( v12 < v15 );
LABEL_162:
  v42 = 44 * v8;
  dword_140404A6C[v42 + 284024938] = a3;
  dword_140404A6C[v42 + 284024939] = a4;
  dword_140404A6C[v42 + 284024940] = a5;
  dword_140404A6C[v42 + 284024941] = a6;
  dword_140404A6C[v42 + 284024933] = v14;
  dword_140404A6C[v42 + 284024934] = v15;
  dword_140404A6C[v42 + 284024935] = 1;
  dword_140404A6C[v42 + 284024936] = 6408;
  dword_140404A6C[v42 + 284024937] = 6408;
  dword_140404A6C[v42 + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * v8 + 284024945]);
  v43 = j__malloc_base((int)(4 * dword_140404A6C[v42 + 284024933] * dword_140404A6C[v42 + 284024934]));
  v44 = 0;
  *(_QWORD *)&dword_140404A6C[v42 + 284024945] = v43;
  if ( (int)dword_140404A6C[44 * v8 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v42 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v42 + 284024945] + 4LL * v47) = dword_140404A6C[v46 + 468765295] )
      {
        v46 = i + v44 * dword_140404A6C[468765293];
        v47 = i + dword_140404A6C[v42 + 284024933] * v44;
        ++i;
      }
      ++v44;
    }
    while ( v44 < (int)dword_140404A6C[v42 + 284024934] );
  }
  if ( v7 )
    sub_14009A370(v8);
  return sub_14014D3E0((unsigned int)v8, 1);
}

