/* Address: 0x140180640 | Name: sub_140180640 | Size: 1803 bytes */
void __fastcall sub_140180640(__int64 a1, __int64 a2, int a3, float *a4, float a5)
{
  float *v5; // rdi
  float v8; // xmm15_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  int v12; // r9d
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm12_4
  float v16; // xmm10_4
  float v17; // xmm9_4
  float v18; // xmm8_4
  int v19; // ebx
  float v20; // xmm10_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  int v23; // ebp
  int v24; // ecx
  __int64 v25; // rdx
  float v26; // xmm12_4
  float v27; // xmm7_4
  float v28; // xmm2_4
  float v29; // xmm12_4
  float v30; // xmm6_4
  float *v31; // rax
  unsigned __int64 v32; // rcx
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm12_4
  int v43; // ebx
  float v44; // xmm13_4
  int v45; // ebp
  float v46; // xmm9_4
  float v47; // xmm6_4
  float v48; // xmm8_4
  int v49; // r9d
  int v50; // r9d
  bool v51; // cf
  bool v52; // cf

  if ( a4 )
  {
    v5 = a4;
    v8 = a5 + 1.0;
    while ( 1 )
    {
      if ( a5 > v5[7] )
        sub_14023E640(L"e->ey >= y_top", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2962);
      v10 = v5[3];
      v11 = v5[2];
      if ( v10 == 0.0 )
      {
        if ( v11 < (float)a3 )
        {
          if ( v11 < 0.0 )
          {
            sub_140181350(a2 - 4, 0, (_DWORD)v5, (_DWORD)a4, LODWORD(a5), LODWORD(v11), LODWORD(v8));
          }
          else
          {
            sub_140181350(a1, (int)v11, (_DWORD)v5, (_DWORD)a4, LODWORD(a5), LODWORD(v11), LODWORD(v8));
            sub_140181350(a2 - 4, (int)v11 + 1, (_DWORD)v5, v12, LODWORD(a5), LODWORD(v11), LODWORD(v8));
          }
        }
        goto LABEL_63;
      }
      v13 = v5[6];
      v14 = v5[4];
      v15 = v10 + v11;
      if ( v13 > v8 || (v16 = v5[7], v16 < a5) )
      {
        sub_14023E640(L"e->sy <= y_bottom && e->ey >= y_top", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2981);
        v13 = v5[6];
        v16 = v5[7];
      }
      if ( v13 <= a5 )
      {
        v17 = v11;
        v13 = a5;
      }
      else
      {
        v17 = (float)((float)(v13 - a5) * v10) + v11;
      }
      if ( v16 >= v8 )
      {
        v18 = v10 + v11;
        v16 = a5 + 1.0;
      }
      else
      {
        v18 = (float)((float)(v16 - a5) * v10) + v11;
      }
      if ( v17 >= 0.0 && v18 >= 0.0 && v17 < (float)a3 && v18 < (float)a3 )
      {
        v19 = (int)v17;
        if ( SLODWORD(v17) == SLODWORD(v18) )
        {
          v20 = v16 - v13;
          if ( v19 < 0 || v19 >= a3 )
            sub_14023E640(L"x >= 0 && x < len", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3009);
          *(float *)(a1 + 4LL * v19) = (float)((float)((float)(1.0
                                                             - (float)((float)((float)(v18 - (float)v19)
                                                                             + (float)(v17 - (float)v19))
                                                                     * 0.5))
                                                     * v5[5])
                                             * v20)
                                     + *(float *)(a1 + 4LL * v19);
          *(float *)(a2 + 4LL * v19) = (float)(v20 * v5[5]) + *(float *)(a2 + 4LL * v19);
        }
        else
        {
          if ( v17 > v18 )
          {
            v14 = -v14;
            v11 = v10 + v11;
            v21 = v8 - (float)(v13 - a5);
            v13 = v8 - (float)(v16 - a5);
            v16 = v21;
            v22 = v18;
            v18 = v17;
            v17 = v22;
          }
          v23 = (int)v18;
          v24 = (int)v17 + 1;
          v25 = v24;
          v26 = (float)v24 - v11;
          v27 = v5[5];
          v28 = v27 * v14;
          v29 = (float)(v26 * v14) + a5;
          v30 = (float)(v29 - v13) * v27;
          *(float *)(a1 + 4LL * (int)v17) = (float)((float)(0.5 - (float)((float)(v17 - (float)(int)v17) * 0.5)) * v30)
                                          + *(float *)(a1 + 4LL * (int)v17);
          if ( v24 < (__int64)(int)v18 )
          {
            if ( v23 - (__int64)v24 < 4 )
              goto LABEL_66;
            v31 = (float *)(a1 + 8 + 4LL * v24);
            v32 = ((unsigned __int64)(v23 - (__int64)v24 - 4) >> 2) + 1;
            v33 = v28 * 0.5;
            v25 += 4 * v32;
            do
            {
              v34 = v33 + v30;
              v35 = v30 + v28;
              *(v31 - 2) = v34 + *(v31 - 2);
              v36 = v33 + v35;
              v37 = v35 + v28;
              v38 = v33 + v37;
              v39 = v37 + v28;
              *(v31 - 1) = v36 + *(v31 - 1);
              v40 = v33 + v39;
              v30 = v39 + v28;
              *v31 = v38 + *v31;
              v31[1] = v40 + v31[1];
              v31 += 4;
              --v32;
            }
            while ( v32 );
            if ( v25 < v23 )
            {
LABEL_66:
              do
              {
                v41 = (float)(v28 * 0.5) + v30;
                v30 = v30 + v28;
                *(float *)(a1 + 4 * v25) = v41 + *(float *)(a1 + 4 * v25);
                ++v25;
              }
              while ( v25 < v23 );
            }
          }
          v42 = v29 + (float)((float)(v23 - (int)v17 - 1) * v14);
          if ( fabs(v30) > 1.01 )
            sub_14023E640(L"fabs(area) <= 1.01f", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3046);
          *(float *)(a1 + 4LL * v23) = (float)((float)((float)((float)(1.0 - (float)((float)(v18 - (float)v23) * 0.5))
                                                             * v27)
                                                     * (float)(v16 - v42))
                                             + v30)
                                     + *(float *)(a1 + 4LL * v23);
          *(float *)(a2 + 4LL * v23) = (float)((float)(v16 - v13) * v27) + *(float *)(a2 + 4LL * v23);
        }
        goto LABEL_63;
      }
      v43 = 0;
      if ( a3 > 0 )
        break;
LABEL_63:
      v5 = *(float **)v5;
      if ( !v5 )
        return;
    }
    v44 = 1.0 / v10;
    while ( 1 )
    {
      v45 = v43 + 1;
      v46 = (float)v43;
      v47 = (float)(v43 + 1);
      v48 = (float)((float)(v47 - v11) * v44) + a5;
      if ( v11 >= (float)v43 || v15 <= v47 )
        break;
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140181350)(
        a1,
        v43,
        (_DWORD)v5,
        (_DWORD)a4,
        LODWORD(a5),
        (float)v43,
        (float)((float)((float)v43 - v11) * v44) + a5);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140181350)(
        a1,
        v43,
        (_DWORD)v5,
        v49,
        (float)((float)((float)v43 - v11) * v44) + a5,
        (float)v45,
        (float)((float)((float)v45 - v11) * v44) + a5);
LABEL_62:
      sub_140181350(a1, v43++, (_DWORD)v5, (_DWORD)a4, LODWORD(v48), LODWORD(v15), LODWORD(v8));
      if ( v45 >= a3 )
        goto LABEL_63;
    }
    if ( v15 < v46 && v11 > v47 )
    {
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140181350)(
        a1,
        v43,
        (_DWORD)v5,
        (_DWORD)a4,
        LODWORD(a5),
        (float)v45,
        (float)((float)((float)v45 - v11) * v44) + a5);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140181350)(
        a1,
        v43,
        (_DWORD)v5,
        v50,
        (float)((float)((float)v45 - v11) * v44) + a5,
        (float)v43,
        (float)((float)((float)v43 - v11) * v44) + a5);
LABEL_54:
      v48 = (float)((float)((float)v43 - v11) * v44) + a5;
      goto LABEL_62;
    }
    if ( v11 >= v46 )
    {
      v51 = v15 < v46;
    }
    else
    {
      v51 = v15 < v46;
      if ( v15 > v46 )
      {
LABEL_53:
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140181350)(
          a1,
          v43,
          (_DWORD)v5,
          (_DWORD)a4,
          LODWORD(a5),
          (float)v43,
          (float)((float)((float)v43 - v11) * v44) + a5);
        goto LABEL_54;
      }
    }
    if ( !v51 || v11 <= v46 )
    {
      if ( v11 >= v47 )
      {
        v52 = v15 < v47;
      }
      else
      {
        v52 = v15 < v47;
        if ( v15 > v47 )
        {
LABEL_57:
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140181350)(
            a1,
            v43,
            (_DWORD)v5,
            (_DWORD)a4,
            LODWORD(a5),
            (float)v45,
            (float)((float)((float)v45 - v11) * v44) + a5);
          goto LABEL_62;
        }
      }
      if ( !v52 || v11 <= v47 )
      {
        v48 = a5;
        goto LABEL_62;
      }
      goto LABEL_57;
    }
    goto LABEL_53;
  }
}

