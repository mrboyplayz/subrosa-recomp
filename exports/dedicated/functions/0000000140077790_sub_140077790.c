/* Address: 0x140077790 | Name: sub_140077790 | Size: 3560 bytes */
_UNKNOWN **sub_140077790()
{
  _UNKNOWN **result; // rax
  __int64 v1; // r14
  int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // rdi
  __int64 v5; // r9
  int *v6; // rdx
  int v7; // eax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm2_4
  int v13; // eax
  __int64 v14; // rdx
  BOOL v15; // eax
  int v16; // ecx
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned __int64 v23; // r13
  int v24; // eax
  float v25; // xmm2_4
  int v26; // esi
  _DWORD *v27; // r14
  int v28; // eax
  float v29; // xmm1_4
  float v30; // xmm0_4
  unsigned __int64 v31; // rax
  bool v32; // cc
  int v33; // r12d
  __int16 v34; // di
  float *v35; // r15
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm3_4
  float v45; // xmm0_4
  int v46; // edx
  int v47; // esi
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // r15d
  float *v51; // r14
  unsigned int v52; // eax
  float v53; // xmm2_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm5_4
  float v62; // xmm4_4
  float v63; // xmm3_4
  float v64; // xmm1_4
  float v65; // xmm2_4
  float v66; // xmm5_4
  float v67; // xmm1_4
  float v68; // xmm2_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  int v71; // edx
  int i; // esi
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  int v78; // [rsp+48h] [rbp-C0h]
  int v79; // [rsp+4Ch] [rbp-BCh]
  __int64 v80; // [rsp+50h] [rbp-B8h]
  __int64 v81; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v82; // [rsp+60h] [rbp-A8h]
  float v83; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+6Ch] [rbp-9Ch]
  __int64 v85; // [rsp+78h] [rbp-90h] BYREF
  int v86; // [rsp+80h] [rbp-88h]
  float v87; // [rsp+88h] [rbp-80h] BYREF
  float v88; // [rsp+8Ch] [rbp-7Ch]
  float v89; // [rsp+90h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF

  result = &retaddr;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v78 = 0;
  v80 = 0;
  do
  {
    v4 = 7040 * v3;
    v82 = 7040 * v3;
    if ( *((_DWORD *)&unk_19025F0C0 + 1760 * v3) )
    {
      v5 = *(int *)((char *)dword_19025F0D4 + v4);
      if ( *(float *)((char *)dword_19025F120 + v4) < -32.0 )
        *(int *)((char *)dword_19025F0DC + v4) = 0;
      if ( *(int *)((char *)&unk_19025F1F8 + v4) <= 0 )
      {
        v6 = (int *)((char *)&unk_19025F140 + v4);
        if ( dword_163D75B60 )
        {
          v7 = dword_191541414;
          v8 = dword_196199564;
          v9 = (__int64)dword_196199564 << 7;
          *(_DWORD *)((char *)&unk_195999560 + v9) = 1;
          *(_DWORD *)((char *)&unk_195999564 + v9) = v7;
          *(_DWORD *)((char *)&qword_195999568 + v9) = *(int *)((char *)dword_19025F11C + v4);
          *(_DWORD *)((char *)&qword_195999568 + v9 + 4) = *(int *)((char *)dword_19025F120 + v4);
          *(int *)((char *)&dword_195999570 + v9) = *(int *)((char *)dword_19025F124 + v4);
          if ( v6 )
          {
            v10 = v6[2];
            v11 = v6[1];
            v12 = *v6;
          }
          else
          {
            v10 = 0;
            v11 = 0;
            v12 = 0;
          }
          *(_DWORD *)((char *)&qword_195999574 + v9) = v12;
          *(_DWORD *)((char *)&qword_195999574 + v9 + 4) = v11;
          *(int *)((char *)&dword_19599957C + v9) = v10;
          dword_196199564 = v8 + 1;
          HIWORD(dword_196199564) = 0;
          *(_QWORD *)((char *)&dword_195999580 + v9) = 0;
        }
        *(int *)((char *)dword_19025F0DC + v4) = 0;
      }
      v13 = *(_DWORD *)&byte_19025F210[v4 + 8];
      if ( v13 > 0 )
        *(_DWORD *)&byte_19025F210[v4 + 8] = v13 - 1;
      v14 = *(int *)((char *)&unk_19025F0E8 + v4);
      *(_DWORD *)((char *)&unk_19025F0F0 + v4) = 0;
      if ( (_DWORD)v14 != -1 )
      {
        v15 = dword_19025F0D4[1760 * v14] == 15;
        *(_DWORD *)((char *)&unk_19025F0F0 + v4) = v15;
        if ( *((_DWORD *)&unk_19025F0E4 + 1760 * v14) != -1 )
        {
          if ( *((int *)&unk_19025F0EC + 1760 * v14) > 2 )
            v15 = 1;
          *(_DWORD *)((char *)&unk_19025F0F0 + v4) = v15;
        }
      }
      v16 = *(_DWORD *)((char *)&unk_19025F0E4 + v4);
      if ( v16 != -1 && (unsigned int)(v5 - 25) > 1 )
      {
        v17 = *(_DWORD *)((char *)&unk_19025F0F0 + v4);
        if ( *(int *)((char *)&unk_19025F0EC + v4) > 2 )
          v17 = 1;
        *(_DWORD *)((char *)&unk_19025F0F0 + v4) = v17;
      }
      v18 = *(_DWORD *)((char *)&unk_19025F0D0 + v4) == 0;
      *(_DWORD *)((char *)&unk_19025F0C4 + v4) = 0;
      if ( v18 )
      {
        if ( (unsigned int)(v5 - 39) <= 1 || (unsigned int)(v5 - 42) <= 1 )
          *(int *)((char *)dword_19025F0C8 + v4) = 1;
        if ( (_DWORD)v14 == -1 && (v16 == -1 || *(int *)((char *)&unk_19025F0EC + v4) < 2) )
        {
          v20 = *(int *)((char *)dword_19025F118 + v4);
          v79 = *(int *)((char *)dword_19025F118 + v4);
          if ( *(int *)((char *)dword_19025F0C8 + v4) )
          {
            v21 = 188 * v20;
            *(_QWORD *)((char *)&unk_140249624 + v21) = 0;
            *(_DWORD *)((char *)&unk_14024962C + v21) = 0;
            *(_QWORD *)((char *)&unk_14024966C + v21) = 0;
            *(_DWORD *)((char *)&unk_140249674 + v21) = 0;
            *(_QWORD *)((char *)&unk_140249660 + v21) = 0;
            *(_DWORD *)((char *)&unk_140249668 + v21) = 0;
            *(_DWORD *)((char *)&unk_140249608 + v21) = 1;
          }
          else
          {
            *(_DWORD *)((char *)&unk_19025F0C4 + v4) = 1;
            *(_DWORD *)((char *)&unk_19025F134 + v4) = *(_DWORD *)((char *)&unk_19025F140 + v4);
            *(_DWORD *)((char *)&unk_19025F138 + v4) = *(_DWORD *)((char *)&unk_19025F144 + v4);
            *(_DWORD *)((char *)&unk_19025F13C + v4) = *(_DWORD *)((char *)&unk_19025F148 + v4);
            v22 = 188 * v20;
            v23 = 1268 * v5;
            *(_DWORD *)((char *)&unk_19025F194 + v4) = *(_DWORD *)((char *)&unk_19025F188 + v4);
            *(_DWORD *)((char *)&unk_19025F198 + v4) = *(_DWORD *)((char *)&unk_19025F18C + v4);
            v24 = *(_DWORD *)((char *)&unk_19025F190 + v4);
            *((_DWORD *)&unk_140249608 + 47 * v20) = 0;
            *(_DWORD *)((char *)&unk_19025F19C + v4) = v24;
            if ( dword_1901220CC[1268 * v5] )
            {
              sub_1400735A0(v2);
              v2 = v78;
            }
            if ( *(int *)((char *)dword_19025F0D4 + v4) == 35 )
            {
              sub_140073810(v2);
              v25 = 65536.0;
              dword_16E18CA58 = 1065353216;
              v26 = 0;
              dword_16E18CA5C = 1199570944;
              dword_16E18CABC = -1;
              v27 = dword_16CDE9EA0;
              dword_16E18CAC8 = -1;
              do
              {
                if ( *v27 )
                {
                  v28 = sub_1400D4210(
                          (unsigned int)&v83,
                          (unsigned int)&v85,
                          (unsigned int)&v81,
                          v26,
                          (__int64)&unk_140249618 + v22,
                          1038174126);
                  v25 = *(float *)&dword_16E18CA5C;
                  if ( v28 )
                  {
                    if ( *(float *)&dword_16E18CA5C > *(float *)&v81 )
                    {
                      v25 = *(float *)&v81;
                      flt_16E18CA40 = v83;
                      qword_16E18CA44 = v84;
                      qword_16E18CA4C = v85;
                      dword_16E18CA54 = v86;
                      dword_16E18CA5C = v81;
                      dword_16E18CA94 = v26;
                    }
                  }
                }
                ++v26;
                v27 += 263004;
              }
              while ( v26 < 4 );
              if ( v25 < 65536.0 )
              {
                v29 = *(float *)&qword_16E18CA44 - *(float *)((char *)&unk_14024961C + v22);
                v87 = flt_16E18CA40 - *(float *)((char *)&unk_140249618 + v22);
                v30 = *((float *)&qword_16E18CA44 + 1) - *(float *)((char *)&unk_140249620 + v22);
                v88 = v29;
                v89 = v30;
                sub_140002AE0(v20, &v87, &qword_16E18CA4C, 0.11 - v25, 1058642330, 0.015625, 1023410176);
                *(float *)((char *)&unk_140249660 + v22) = *(float *)((char *)&unk_140249660 + v22) * 0.9375;
                *(float *)((char *)&unk_140249664 + v22) = *(float *)((char *)&unk_140249664 + v22) * 0.9375;
                *(float *)((char *)&unk_140249668 + v22) = *(float *)((char *)&unk_140249668 + v22) * 0.9375;
              }
              v1 = 0;
            }
            v31 = *(unsigned int *)((char *)dword_19025F0D4 + v4);
            v32 = (unsigned int)v31 <= 0x2C;
            if ( (_DWORD)v31 == 44 )
            {
              v33 = 0;
              if ( dword_190122FC8[v23] > 0 )
              {
                v34 = v79;
                v35 = (float *)((char *)&unk_140249618 + v22);
                do
                {
                  v36 = qword_190122FD0[v23 / 2];
                  v37 = *(float *)(v1 + v36 + 8) * *(float *)((char *)&unk_140249658 + v22);
                  v38 = (float)((float)(*(float *)(v1 + v36) * *(float *)((char *)&unk_140249640 + v22)) + v35[1])
                      + (float)(*(float *)(v1 + v36 + 4) * *(float *)((char *)&unk_14024964C + v22));
                  v39 = *(float *)(v1 + v36 + 8) * *(float *)((char *)&unk_14024965C + v22);
                  v40 = (float)((float)(*(float *)(v1 + v36) * *(float *)((char *)&unk_140249644 + v22)) + v35[2])
                      + (float)(*(float *)(v1 + v36 + 4) * *(float *)((char *)&unk_140249650 + v22));
                  v87 = (float)((float)((float)(*(float *)(v1 + v36) * *(float *)((char *)&unk_14024963C + v22)) + *v35)
                              + (float)(*(float *)(v1 + v36 + 4) * *(float *)((char *)&unk_140249648 + v22)))
                      + (float)(*(float *)(v1 + v36 + 8) * *(float *)((char *)&unk_140249654 + v22));
                  v88 = v38 + v37;
                  v89 = v40 + v39;
                  if ( (unsigned int)sub_1400828D0(v35, &v87, 1) )
                  {
                    v41 = *((float *)&qword_16E18CA44 + 1) - v89;
                    v42 = *(float *)&qword_16E18CA44 - v35[1];
                    v89 = *((float *)&qword_16E18CA44 + 1) - v35[2];
                    v43 = flt_16E18CA40 - *v35;
                    v44 = *((float *)&qword_16E18CA4C + 1) * (float)(*(float *)&qword_16E18CA44 - v88);
                    v88 = v42;
                    v45 = *(float *)&qword_16E18CA4C * (float)(flt_16E18CA40 - v87);
                    v87 = v43;
                    sub_140002AE0(
                      v34,
                      &v87,
                      &qword_16E18CA4C,
                      (float)(v44 + v45) + (float)(*(float *)&dword_16E18CA54 * v41),
                      1058642330,
                      0.015625,
                      1023410176);
                    if ( dword_16E18CAC8 != -1 )
                    {
                      v46 = dword_16E18CAC0;
                      v47 = 0;
                      if ( *((int *)&unk_18E9EA9CC + 948 * dword_16E18CAC0) > 0 )
                      {
                        do
                        {
                          sub_140076FF0(
                            v46 + (dword_16E18CAC4 << 24),
                            v47,
                            dword_16E18CA94,
                            dword_16E18CA98,
                            dword_16E18CA9C,
                            dword_16E18CAA0);
                          v46 = dword_16E18CAC0;
                          ++v47;
                        }
                        while ( v47 < *((_DWORD *)&unk_18E9EA9CC + 948 * dword_16E18CAC0) );
                        v34 = v79;
                      }
                    }
                  }
                  ++v33;
                  v1 += 12;
                }
                while ( v33 < dword_190122FC8[v23] );
                v4 = v82;
                v31 = (unsigned int)dword_19025F0D4[v82 / 4];
              }
              LOWORD(v20) = v79;
              v32 = (unsigned int)v31 <= 0x2C;
            }
            if ( !v32 || (v48 = 0x100810000000LL, !_bittest64(&v48, v31)) )
            {
              v49 = *(int *)((char *)&unk_19025F0E4 + v4);
              if ( (_DWORD)v49 == -1 || dword_1909419F0[7166 * v49] == -1 )
              {
                v50 = 0;
                v51 = (float *)((char *)&unk_140249618 + v22);
                do
                {
                  v52 = v50 & 3;
                  if ( (v50 & 3) == 0 || v52 == 3 )
                    v53 = -*(float *)&dword_1901221C4[v23];
                  else
                    v53 = *(float *)&dword_1901221C4[v23];
                  v54 = *(float *)&dword_1901221C8[v23];
                  v55 = (float)(v53 * *(float *)((char *)&unk_140249640 + v22)) + v51[1];
                  v56 = (float)(v53 * *(float *)((char *)&unk_14024963C + v22)) + *v51;
                  v57 = (float)(v53 * *(float *)((char *)&unk_140249644 + v22)) + v51[2];
                  if ( (unsigned int)v50 < 4 )
                    v54 = -v54;
                  v58 = v54 * *(float *)((char *)&unk_14024964C + v22);
                  v59 = v54 * *(float *)((char *)&unk_140249648 + v22);
                  v60 = v57 + (float)(v54 * *(float *)((char *)&unk_140249650 + v22));
                  v61 = *(float *)&dword_1901221CC[v23];
                  v62 = v55 + v58;
                  v63 = v56 + v59;
                  if ( v52 < 2 )
                    v61 = -v61;
                  v64 = v61 * *(float *)((char *)&unk_140249658 + v22);
                  v65 = v60 + (float)(v61 * *(float *)((char *)&unk_14024965C + v22));
                  v87 = v63 + (float)(v61 * *(float *)((char *)&unk_140249654 + v22));
                  v88 = v62 + v64;
                  v89 = v65;
                  if ( (unsigned int)sub_1400828D0(v51, &v87, 1) )
                  {
                    v66 = *((float *)&qword_16E18CA44 + 1) - v89;
                    v67 = *(float *)&qword_16E18CA44 - v51[1];
                    v89 = *((float *)&qword_16E18CA44 + 1) - v51[2];
                    v68 = flt_16E18CA40 - *v51;
                    v69 = *((float *)&qword_16E18CA4C + 1) * (float)(*(float *)&qword_16E18CA44 - v88);
                    v88 = v67;
                    v70 = *(float *)&qword_16E18CA4C * (float)(flt_16E18CA40 - v87);
                    v87 = v68;
                    sub_140002AE0(
                      v20,
                      &v87,
                      &qword_16E18CA4C,
                      (float)(v69 + v70) + (float)(*(float *)&dword_16E18CA54 * v66),
                      1058642330,
                      0.015625,
                      1023410176);
                    if ( dword_16E18CAC8 != -1 )
                    {
                      v71 = dword_16E18CAC0;
                      for ( i = 0; i < *((_DWORD *)&unk_18E9EA9CC + 948 * dword_16E18CAC0); ++i )
                      {
                        sub_140076FF0(
                          v71 + (dword_16E18CAC4 << 24),
                          i,
                          dword_16E18CA94,
                          dword_16E18CA98,
                          dword_16E18CA9C,
                          dword_16E18CAA0);
                        v71 = dword_16E18CAC0;
                      }
                    }
                  }
                  ++v50;
                }
                while ( v50 < 8 );
                v4 = v82;
              }
            }
            if ( *(_DWORD *)((char *)&unk_19025F0E4 + v4) == -1
              && fsqrt(
                   (float)((float)(*(float *)((char *)&unk_19025F140 + v4) * *(float *)((char *)&unk_19025F140 + v4))
                         + (float)(*(float *)((char *)&unk_19025F144 + v4) * *(float *)((char *)&unk_19025F144 + v4)))
                 + (float)(*(float *)((char *)&unk_19025F148 + v4) * *(float *)((char *)&unk_19025F148 + v4))) < 0.0041666669
              && fsqrt(
                   (float)((float)(*(float *)((char *)&unk_19025F188 + v4) * *(float *)((char *)&unk_19025F188 + v4))
                         + (float)(*(float *)((char *)&unk_19025F18C + v4) * *(float *)((char *)&unk_19025F18C + v4)))
                 + (float)(*(float *)((char *)&unk_19025F190 + v4) * *(float *)((char *)&unk_19025F190 + v4))) < 0.0041666669 )
            {
              v73 = *(_DWORD *)((char *)&unk_19025F0CC + v4);
              if ( v73 >= 60 || (v74 = v73 + 1, *(_DWORD *)((char *)&unk_19025F0CC + v4) = v74, v74 >= 60) )
                *(int *)((char *)dword_19025F0C8 + v4) = 1;
              v1 = 0;
            }
            else
            {
              v1 = 0;
              *(_DWORD *)((char *)&unk_19025F0CC + v4) = 0;
            }
            v2 = v78;
            v3 = v80;
          }
        }
        else
        {
          *(_QWORD *)((char *)&unk_19025F140 + v4) = 0;
          *(_DWORD *)((char *)&unk_19025F148 + v4) = 0;
          *(_QWORD *)((char *)&unk_19025F188 + v4) = 0;
          *(_DWORD *)((char *)&unk_19025F190 + v4) = 0;
          v75 = *(int *)((char *)&unk_19025F0E4 + v4);
          if ( (_DWORD)v75 != -1 )
          {
            *(_DWORD *)((char *)&unk_19025F140 + v4) = *((_DWORD *)&unk_190941C04 + 7166 * v75);
            *(_DWORD *)((char *)&unk_19025F144 + v4) = *((_DWORD *)&unk_190941C04 + 7166 * v75 + 1);
            *(_DWORD *)((char *)&unk_19025F148 + v4) = *((_DWORD *)&unk_190941C04 + 7166 * v75 + 2);
          }
          v76 = 188LL * *(int *)((char *)dword_19025F118 + v4);
          v77 = *(int *)((char *)dword_19025F11C + v4);
          *(_QWORD *)((char *)&unk_140249660 + v76) = 0;
          *(_QWORD *)((char *)&unk_140249668 + v76) = 0;
          *(_DWORD *)((char *)&unk_140249618 + v76) = v77;
          *(_DWORD *)((char *)&unk_14024961C + v76) = *(int *)((char *)dword_19025F120 + v4);
          *(_DWORD *)((char *)&unk_140249620 + v76) = *(int *)((char *)dword_19025F124 + v4);
          *(_DWORD *)((char *)&unk_140249624 + v76) = *(_DWORD *)((char *)&unk_19025F140 + v4);
          *(_DWORD *)((char *)&unk_140249628 + v76) = *(_DWORD *)((char *)&unk_19025F144 + v4);
          *(_DWORD *)((char *)&unk_14024962C + v76) = *(_DWORD *)((char *)&unk_19025F148 + v4);
          *(_DWORD *)((char *)&unk_14024963C + v76) = *(int *)((char *)dword_19025F164 + v4);
          *(_DWORD *)((char *)&unk_140249640 + v76) = *(int *)((char *)dword_19025F168 + v4);
          *(_DWORD *)((char *)&unk_140249644 + v76) = *(int *)((char *)dword_19025F16C + v4);
          *(_DWORD *)((char *)&unk_140249648 + v76) = *(int *)((char *)dword_19025F170 + v4);
          *(_DWORD *)((char *)&unk_14024964C + v76) = *(int *)((char *)dword_19025F174 + v4);
          *(_DWORD *)((char *)&unk_140249650 + v76) = *(int *)((char *)dword_19025F178 + v4);
          *(_DWORD *)((char *)&unk_140249654 + v76) = *(int *)((char *)dword_19025F17C + v4);
          *(_DWORD *)((char *)&unk_140249658 + v76) = *(int *)((char *)dword_19025F180 + v4);
          *(_DWORD *)((char *)&unk_14024965C + v76) = *(int *)((char *)dword_19025F184 + v4);
          *(_QWORD *)((char *)&unk_140249670 + v76) = 0;
          *(_DWORD *)((char *)&unk_140249608 + v76) = 1;
          *(_QWORD *)((char *)dword_19025F0C8 + v4) = 0;
        }
      }
      else
      {
        v19 = 188LL * *(int *)((char *)dword_19025F118 + v4);
        *(_QWORD *)((char *)&unk_140249624 + v19) = 0;
        *(_DWORD *)((char *)&unk_14024962C + v19) = 0;
        *(_QWORD *)((char *)&unk_14024966C + v19) = 0;
        *(_DWORD *)((char *)&unk_140249674 + v19) = 0;
        *(_QWORD *)((char *)&unk_140249660 + v19) = 0;
        *(_DWORD *)((char *)&unk_140249668 + v19) = 0;
        *(_DWORD *)((char *)&unk_140249608 + v19) = 1;
      }
      *(_DWORD *)((char *)&unk_19025F128 + v4) = *(int *)((char *)dword_19025F11C + v4);
      *(_DWORD *)((char *)&unk_19025F12C + v4) = *(int *)((char *)dword_19025F120 + v4);
      result = (_UNKNOWN **)*(unsigned int *)((char *)dword_19025F124 + v4);
      *(_DWORD *)((char *)&unk_19025F130 + v4) = (_DWORD)result;
    }
    ++v2;
    ++v3;
    v78 = v2;
    v80 = v3;
  }
  while ( v2 < 1024 );
  return result;
}

