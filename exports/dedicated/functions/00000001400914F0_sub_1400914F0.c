/* Address: 0x1400914f0 | Name: sub_1400914F0 | Size: 2214 bytes */
void __fastcall sub_1400914F0(signed int a1, int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r15
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // r13
  __int64 v10; // r8
  float v11; // xmm0_4
  float v12; // xmm1_4
  int v13; // eax
  int v14; // ecx
  float v15; // xmm1_4
  int v16; // edx
  int v17; // eax
  float v18; // xmm1_4
  int v19; // edx
  int v20; // ecx
  float v21; // xmm1_4
  __int64 v22; // rdx
  int v23; // eax
  float v24; // xmm1_4
  int v25; // ecx
  int v26; // ebp
  float v27; // xmm0_4
  int v28; // ecx
  __int64 v29; // r12
  unsigned int v30; // ebx
  _DWORD *v31; // rbx
  unsigned int v32; // esi
  int v33; // ebx
  int v34; // xmm1_4
  int v35; // xmm0_4
  int v36; // eax
  signed int v37; // r13d
  __int64 v38; // rdx
  int i; // ebp
  int v40; // edx
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rbp
  int v44; // r15d
  int v45; // esi
  __int64 v46; // rdx
  BOOL v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // xmm1_4
  int v51; // xmm0_4
  signed int v52; // eax
  __int64 v53; // r10
  __int64 v54; // r12
  int v55; // ebx
  _DWORD *v56; // rsi
  __int64 v57; // r8
  __int64 v58; // rdx
  int *v59; // rax
  __int64 v60; // [rsp+20h] [rbp-88h]
  __int64 v61; // [rsp+28h] [rbp-80h]
  int v62; // [rsp+30h] [rbp-78h] BYREF
  int v63; // [rsp+34h] [rbp-74h]
  int v64; // [rsp+38h] [rbp-70h]
  __int128 v65; // [rsp+40h] [rbp-68h] BYREF
  __int128 v66; // [rsp+50h] [rbp-58h]
  int v67; // [rsp+60h] [rbp-48h]
  int v69; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v4 = 3597LL * a1;
  v7 = dword_16D67D63C[v4];
  v69 = v7;
  if ( (_DWORD)v7 != -1 )
  {
    v8 = 0;
    v9 = 7166 * v7;
    v60 = dword_16D67D63C[v4];
    v10 = 1;
    v11 = *(float *)&dword_190941A48[7166 * v7];
    if ( v11 < *(float *)dword_191541440
      || v11 >= *(float *)dword_19154144C
      || (v12 = *(float *)&dword_190941A50[7166 * v7], v12 < *(float *)dword_191541448)
      || (v13 = 1, v12 >= *(float *)dword_191541454) )
    {
      v13 = 0;
    }
    v14 = 0;
    if ( !v13 )
      v14 = -1;
    if ( v11 < *(float *)&dword_191547004
      || v11 >= *(float *)&dword_191547010
      || (v15 = *(float *)&dword_190941A50[v9], v15 < *(float *)&dword_19154700C)
      || (v16 = 1, v15 >= *(float *)&dword_191547018) )
    {
      v16 = 0;
    }
    v17 = 1;
    if ( !v16 )
      v17 = v14;
    if ( v11 < *(float *)&dword_19154CBC8
      || v11 >= *(float *)&dword_19154CBD4
      || (v18 = *(float *)&dword_190941A50[v9], v18 < *(float *)&dword_19154CBD0)
      || (v19 = 1, v18 >= *(float *)&dword_19154CBDC) )
    {
      v19 = 0;
    }
    v20 = 2;
    if ( !v19 )
      v20 = v17;
    if ( v11 < *(float *)&dword_19155278C
      || v11 >= *(float *)&dword_191552798
      || (v21 = *(float *)&dword_190941A50[v9], v21 < *(float *)&dword_191552794)
      || (v22 = 1, v21 >= *(float *)&dword_1915527A0) )
    {
      v22 = 0;
    }
    v23 = 3;
    if ( !(_DWORD)v22 )
      v23 = v20;
    if ( v11 < *(float *)&dword_191558350
      || v11 >= *(float *)&dword_19155835C
      || (v24 = *(float *)&dword_190941A50[v9], v24 < *(float *)&dword_191558358)
      || (v25 = 1, v24 >= *(float *)&dword_191558364) )
    {
      v25 = 0;
    }
    v26 = 4;
    if ( !v25 )
      v26 = v23;
    if ( v11 >= *(float *)&dword_19155DF14 && v11 < *(float *)&dword_19155DF20 )
    {
      v27 = *(float *)&dword_190941A50[v9];
      if ( v27 >= *(float *)&dword_19155DF1C && v27 < *(float *)&dword_19155DF28 )
        v26 = 5;
    }
    if ( v26 != -1 )
    {
      if ( (unsigned int)(a2 - 21) <= 5 && (a3 & 0x1000000) != 0 )
      {
        if ( (_BYTE)a3 )
        {
          switch ( (unsigned __int8)a3 )
          {
            case 1u:
              dword_16D67D704[v4] = 22;
              break;
            case 2u:
              dword_16D67D704[v4] = 23;
              break;
            case 3u:
              dword_16D67D704[v4] = 24;
              break;
            case 4u:
              dword_16D67D704[v4] = 25;
              break;
          }
        }
        else
        {
          dword_16D67D704[v4] = 21;
        }
        return;
      }
      if ( a2 == 24 && dword_16D67D624[v4] == v26 && !a3 )
      {
        sub_1400C4990(v3, 17);
        sub_14003A3D0(v3);
      }
      v28 = dword_16D67D624[v4];
      v29 = v26;
      if ( v28 == v26 && dword_1915414A4[5873 * v26] == v3 )
      {
        if ( a2 == 22 )
        {
          v30 = a3 >> 16;
          if ( (_BYTE)a3 == 3 )
          {
            sub_1400C4990(v30, (unsigned int)v26);
            sub_14003A3D0(v30);
            sub_140095F50(v30);
            v31 = (_DWORD *)((char *)&unk_1915415DC + 23492 * v26);
            do
            {
              if ( *v31 )
                sub_14003A1E0(v26, v8);
              ++v8;
              v31 += 279;
            }
            while ( v8 < 16 );
          }
          return;
        }
        if ( a2 == 23 )
        {
          v32 = a3 >> 16;
          if ( v32 != v3 && dword_16D67D624[3597 * v32] == v26 )
          {
            sub_1400C4990(v32, 17);
            sub_14003A3D0(v32);
          }
          return;
        }
      }
      if ( a2 == 25 )
      {
        if ( v28 != v26 )
          return;
        v61 = 5873LL * v26;
        if ( dword_1915414A4[v61] == -1 )
          return;
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            v33 = 15;
          }
          else if ( a3 == 6 )
          {
            v33 = 26;
          }
          else
          {
            if ( (unsigned int)(a3 - 7) > 5 )
            {
LABEL_111:
              if ( a3 == 2 && dword_190948498[7166 * v60] > 0 )
              {
                v42 = dword_19094849C[7166 * v60];
                v43 = 1760 * v42;
                if ( dword_19025F0D4[1760 * v42] == 18 )
                {
                  *((_DWORD *)&qword_17AE3AD40 + 5 * v29) += sub_14006D030(v42);
                  dword_19025F0DC[v43] = 0;
                }
              }
              if ( dword_1915414A4[v61] == v3 && (unsigned int)(a3 - 3) <= 2 )
              {
                if ( a3 == 4 )
                {
                  v44 = 5;
                }
                else
                {
                  v44 = 3;
                  if ( a3 == 5 )
                    v44 = 6;
                }
                v45 = *((_DWORD *)&qword_17AE3AD40 + 5 * v29) - dword_140146B90[v44];
                if ( v45 >= -*((_DWORD *)&qword_17AE3AD40 + 5 * v29 + 1) )
                {
                  v46 = 7166 * v60;
                  v47 = 0;
                  if ( dword_190948498[7166 * v60] > 0 )
                    v47 = dword_19025F0D4[1760 * dword_19094849C[v46]] != 18;
                  v48 = v46 * 4 + 40LL * v47;
                  if ( *(int *)((char *)dword_190948498 + v48) <= 0 )
                  {
                    v50 = dword_190941A4C[v46];
                    v62 = dword_190941A48[v46];
                    v51 = dword_190941A50[v46];
                    v63 = v50;
                    v64 = v51;
                    v65 = xmmword_1400F78B0;
                    v67 = 1065353216;
                    v66 = xmmword_1400F78B0;
                    v52 = sub_14003B080(18, &v62, nullptr, (int *)&v65);
                    v53 = 7040LL * v52;
                    *(_DWORD *)((char *)&unk_19025F364 + v53) = 0;
                    *(_DWORD *)((char *)&unk_19025F368 + v53) = v44;
                    sub_140089E50(v52, -1, v69, v47);
                    *((_DWORD *)&qword_17AE3AD40 + 5 * v29) -= dword_140146B90[v44];
                  }
                  else
                  {
                    v49 = *(int *)((char *)dword_19094849C + v48);
                    if ( dword_19025F0D4[1760 * v49] == 18 && (unsigned int)sub_14006CDD0(v49, 0, v44) )
                      *((_DWORD *)&qword_17AE3AD40 + 5 * v29) = v45;
                  }
                }
              }
              return;
            }
            switch ( a3 )
            {
              case 7:
                v33 = 11;
                break;
              case 8:
                v33 = 12;
                break;
              case 9:
                v33 = 7;
                break;
              case 10:
                v33 = 8;
                break;
              case 11:
                v33 = 14;
                break;
              default:
                v33 = 25;
                break;
            }
          }
        }
        else
        {
          v33 = 19;
        }
        if ( *(int *)((char *)&unk_16D67D608 + v4 * 4) < 10 )
        {
          if ( v33 == 25 )
            sub_140096130((unsigned int)v26, v22, v10);
          v34 = dword_190941A4C[v9];
          v62 = dword_190941A48[v9];
          v35 = dword_190941A50[v9];
          v63 = v34;
          v64 = v35;
          v65 = xmmword_1400F78B0;
          v67 = 1065353216;
          v66 = xmmword_1400F78B0;
          v36 = sub_14003B080(v33, &v62, nullptr, (int *)&v65);
          v37 = v36;
          if ( v36 != -1 )
          {
            switch ( v33 )
            {
              case 19:
                *((_DWORD *)&unk_19025F3F4 + 1760 * v36) = sub_140039500(360);
                break;
              case 26:
                LODWORD(qword_19025F428[880 * v36]) = v26;
                break;
              case 25:
                v38 = 7040LL * v36;
                *(_DWORD *)((char *)&unk_19025F338 + v38) = 0;
                *(_DWORD *)((char *)&unk_19025F220 + v38) = 1111 * (v26 + 1);
                sub_140039F50(v36);
                break;
            }
            for ( i = 0; i < 7; ++i )
            {
              if ( (unsigned int)sub_140089E50(v37, -1, v69, i) )
                break;
            }
            v40 = *((_DWORD *)&qword_17AE3AD40 + 5 * v29);
            if ( v33 == 25 )
              v41 = v40 - 100;
            else
              v41 = v40 - dword_1901220C4[1268 * v33];
            ++*(_DWORD *)((char *)&unk_16D67D608 + v4 * 4);
            v3 = a1;
            *((_DWORD *)&qword_17AE3AD40 + 5 * v29) = v41;
          }
        }
        goto LABEL_111;
      }
      if ( a2 == 20 )
      {
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            v57 = 5873LL * v26;
            if ( dword_1915414A4[v57] != -1 )
            {
              v58 = dword_191546F00[v57];
              if ( (int)v58 <= 0 )
              {
LABEL_143:
                if ( (int)v58 < 32 )
                {
                  dword_191546F04[5873 * v26 + v58] = v3;
                  ++dword_191546F00[v57];
                }
              }
              else
              {
                v59 = &dword_191546F04[v57];
                while ( *v59 != v3 )
                {
                  ++v8;
                  ++v59;
                  if ( v8 >= (int)v58 )
                    goto LABEL_143;
                }
              }
            }
          }
        }
        else
        {
          v54 = 5873LL * v26;
          if ( dword_1915414A4[v54] == -1 )
          {
            sub_140095F50(v3);
            sub_1400C4990(v3, (unsigned int)v26);
            sub_1400969C0((unsigned int)v26, v3);
            dword_16D67D704[v4] = 25;
            sub_14003A3D0(v3);
            v55 = 0;
            v56 = (_DWORD *)((char *)&unk_1915415DC + v54 * 4);
            do
            {
              if ( *v56 )
                sub_14003A1E0(v26, v55);
              ++v55;
              v56 += 279;
            }
            while ( v55 < 16 );
            dword_191546F00[v54] = 0;
          }
        }
      }
    }
  }
}

