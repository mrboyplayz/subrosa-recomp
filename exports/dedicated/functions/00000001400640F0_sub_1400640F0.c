/* Address: 0x1400640f0 | Name: sub_1400640F0 | Size: 3175 bytes */
__int64 __fastcall sub_1400640F0(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm9_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm11_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  _BOOL8 v25; // rdx
  __int64 v26; // r8
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm2_4
  int v30; // xmm6_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm2_4
  int v36; // xmm6_4
  float v37; // xmm3_4
  float v38; // xmm1_4
  float *v39; // rdi
  __int64 v40; // r14
  float *v41; // rsi
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm7_4
  float v45; // xmm1_4
  float v46; // xmm8_4
  float v47; // xmm7_4
  float v48; // xmm8_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm6_4
  float v52; // xmm0_4
  bool v53; // zf
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm2_4
  _BOOL8 v58; // rcx
  __int64 v59; // rdx
  int v60; // ecx
  __int64 result; // rax
  int v62; // ecx
  float v63; // xmm0_4
  float v64; // xmm0_4
  float v65; // [rsp+28h] [rbp-79h] BYREF
  float v66; // [rsp+2Ch] [rbp-75h]
  float v67; // [rsp+30h] [rbp-71h]
  float v68; // [rsp+38h] [rbp-69h] BYREF
  float v69; // [rsp+3Ch] [rbp-65h]
  float v70; // [rsp+40h] [rbp-61h]

  v6 = 28664LL * a1;
  v7 = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26924);
  if ( v7 > 0 )
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26924) = v7 - 1;
  v8 = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27144);
  if ( v8 > 0 )
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27144) = v8 - 1;
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) == 1 && *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) == 1 )
  {
    v9 = *(float *)((char *)&unk_1909419A0 + v6 + 26560) * 8.0;
    v66 = 0.0;
    v10 = *(float *)((char *)&unk_1909419A0 + v6 + 26568) * 8.0;
    v69 = 0.0;
    v11 = *(float *)((char *)&unk_1909419A0 + v6 + 26492);
    v12 = (float)(v9 + *(float *)((char *)&unk_1909419A0 + v6 + 26484))
        + (float)(*(float *)((char *)&unk_1909419A0 + v6 + 26796) * 16.0);
    v13 = *(float *)((char *)&unk_1909419A0 + v6 + 636) * 0.09375;
    v14 = *(float *)((char *)&unk_1909419A0 + v6 + 644) * 0.09375;
    v15 = (float)(v10 + v11) + (float)(*(float *)((char *)&unk_1909419A0 + v6 + 26804) * 16.0);
    v16 = *(float *)((char *)&unk_1909419A0 + v6 + 660) * 0.03125;
    v17 = *(float *)((char *)&unk_1909419A0 + v6 + 668) * 0.03125;
    v18 = *(float *)((char *)&unk_1909419A0 + v6 + 4332) - (float)((float)(v12 - v13) - v16);
    v19 = *(float *)((char *)&unk_1909419A0 + v6 + 4340) - (float)((float)(v15 - v14) - v17);
    v20 = fsqrt((float)(v19 * v19) + (float)(v18 * v18));
    v21 = *(float *)((char *)&unk_1909419A0 + v6 + 5276) - (float)((float)(v14 + v15) - v17);
    v65 = *(float *)((char *)&unk_1909419A0 + v6 + 5268) - (float)((float)(v13 + v12) - v16);
    v67 = v21;
    v22 = fsqrt((float)(v21 * v21) + (float)(v65 * v65));
    v23 = (float)((float)(*(float *)((char *)&unk_1909419A0 + v6 + 4340) + *(float *)((char *)&unk_1909419A0 + v6 + 5276))
                * 0.5)
        - v11;
    v68 = (float)((float)(*(float *)((char *)&unk_1909419A0 + v6 + 5268) + *(float *)((char *)&unk_1909419A0 + v6 + 4332))
                * 0.5)
        - *(float *)((char *)&unk_1909419A0 + v6 + 26484);
    v70 = v23;
    v24 = fsqrt((float)(v23 * v23) + (float)(v68 * v68));
    if ( v20 > 0.125 || v22 > 0.125 || v24 > 0.125 )
    {
      v25 = v22 > v20;
      v26 = v6 + 220 * v25;
      if ( !*(_DWORD *)((char *)&unk_1909419A0 + v26 + 26924)
        || *(_DWORD *)((char *)&unk_1909419A0 + 220 * (v22 <= v20) + v6 + 26924) )
      {
        *(_DWORD *)((char *)&unk_1909419A0 + v26 + 26932) = 3;
        *(_DWORD *)((char *)&unk_1909419A0 + v26 + 26940) = 0;
        *(float *)((char *)&unk_1909419A0 + v26 + 26944) = *(float *)(a3 + 12 * v25) - *(float *)(a2 + 12 * v25);
        *(float *)((char *)&unk_1909419A0 + v26 + 26948) = *(float *)(a3 + 12 * v25 + 4) - *(float *)(a2 + 12 * v25 + 4);
        *(float *)((char *)&unk_1909419A0 + v26 + 26952) = *(float *)(a3 + 12 * v25 + 8) - *(float *)(a2 + 12 * v25 + 8);
      }
    }
  }
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) == 1 )
  {
    if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 4632) )
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27040) = 0;
    v27 = *(float *)((char *)&unk_1909419A0 + v6 + 26968);
    v28 = *(float *)((char *)&unk_1909419A0 + v6 + 26976);
    v29 = *(float *)((char *)&unk_1909419A0 + v6 + 4332) - v27;
    v30 = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26972);
    v31 = *(float *)((char *)&unk_1909419A0 + v6 + 4340) - v28;
    v66 = 0.0;
    v65 = v29;
    v67 = v31;
    v32 = fsqrt((float)(v31 * v31) + (float)(v29 * v29));
    if ( v32 > 0.03125 )
    {
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26972) = v30;
      *(float *)((char *)&unk_1909419A0 + v6 + 26968) = (float)((float)(v29 * (float)(1.0 / v32)) * 0.03125) + v27;
      *(float *)((char *)&unk_1909419A0 + v6 + 26976) = (float)((float)(v31 * (float)(1.0 / v32)) * 0.03125) + v28;
    }
  }
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) == 1 )
  {
    if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 5568) )
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27260) = 0;
    v33 = *(float *)((char *)&unk_1909419A0 + v6 + 27188);
    v34 = *(float *)((char *)&unk_1909419A0 + v6 + 27196);
    v35 = *(float *)((char *)&unk_1909419A0 + v6 + 5268) - v33;
    v36 = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27192);
    v37 = *(float *)((char *)&unk_1909419A0 + v6 + 5276) - v34;
    v66 = 0.0;
    v65 = v35;
    v67 = v37;
    v38 = fsqrt((float)(v37 * v37) + (float)(v35 * v35));
    if ( v38 > 0.03125 )
    {
      *(float *)((char *)&unk_1909419A0 + v6 + 27188) = (float)((float)(v35 * (float)(1.0 / v38)) * 0.03125) + v33;
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27192) = v36;
      *(float *)((char *)&unk_1909419A0 + v6 + 27196) = (float)((float)(v37 * (float)(1.0 / v38)) * 0.03125) + v34;
    }
  }
  v39 = (float *)((char *)&unk_1909482DC + v6);
  v40 = 2;
  v41 = (float *)((char *)&unk_190942A94 + v6);
  do
  {
    if ( *((_DWORD *)v39 - 2) == 3 && *v39 >= 1.0 )
    {
      v42 = *(float *)&qword_140146A28;
      v43 = *((float *)&qword_140146A28 + 1);
      v44 = *(float *)&qword_140146A28;
      v45 = *(float *)&dword_140146A30;
      v46 = *((float *)&qword_140146A28 + 1);
      *v39 = 1.0;
      v47 = v44 * 0.375;
      v48 = v46 * 0.375;
      v49 = v47 + *(v41 - 2);
      v50 = v48 + *(v41 - 1);
      v68 = v49;
      v69 = v50;
      v51 = (float)(v45 * 0.375) + *v41;
      v65 = v49 - (float)(v42 * 0.75);
      v70 = v51;
      v66 = v50 - (float)(v43 * 0.75);
      v67 = v51 - (float)(v45 * 0.75);
      v52 = *(float *)((char *)&unk_1909419A0 + v6 + 592);
      if ( v50 > v52 )
      {
        v69 = *(float *)((char *)&unk_1909419A0 + v6 + 592);
        v65 = v49 - v47;
        v66 = v52 - v48;
        v67 = v51 - (float)(v45 * 0.375);
      }
      if ( (unsigned int)sub_140062890(a1, (__int64)&v68, (__int64)&v65) )
      {
        *((_DWORD *)v39 - 2) = 1;
        v39[25] = 0.0;
        *((_DWORD *)v39 - 4) = 5;
        v39[7] = *(v41 - 2);
        v39[8] = *(v41 - 1);
        v39[9] = *v41;
        v39[8] = 0.03125;
        v39[29] = *(float *)((char *)&unk_1909419A0 + v6 + 192);
      }
    }
    v41 += 234;
    v39 += 55;
    --v40;
  }
  while ( v40 );
  if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932)
    && *(float *)((char *)&unk_1909419A0 + v6 + 26564) < 0.033333335
    && *(int *)((char *)&unk_1909419A0 + v6 + 4632) > 0 )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) = 1;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26924) = 5;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26968) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4332);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26972) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4336);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26976) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4340);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26972) = 1023410176;
    *(float *)((char *)&unk_1909419A0 + v6 + 27056) = atan2f(
                                                        -*(float *)((char *)&unk_1909419A0 + v6 + 4404),
                                                        *(float *)((char *)&unk_1909419A0 + v6 + 4412));
  }
  if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152)
    && *(float *)((char *)&unk_1909419A0 + v6 + 26564) < 0.033333335
    && *(int *)((char *)&unk_1909419A0 + v6 + 5568) > 0 )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) = 1;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27144) = 5;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27188) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5268);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27192) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5272);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27196) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5276);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27192) = 1023410176;
    *(float *)((char *)&unk_1909419A0 + v6 + 27276) = atan2f(
                                                        -*(float *)((char *)&unk_1909419A0 + v6 + 5340),
                                                        *(float *)((char *)&unk_1909419A0 + v6 + 5348));
  }
  if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 128) && *(float *)((char *)&unk_1909419A0 + v6 + 26512) < 0.5 )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26460) = 0;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) = 0;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) = 0;
    if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 124) )
    {
      if ( fsqrt(
             (float)((float)(*(float *)((char *)&unk_1909419A0 + v6 + 26560)
                           * *(float *)((char *)&unk_1909419A0 + v6 + 26560))
                   + (float)(*(float *)((char *)&unk_1909419A0 + v6 + 26564)
                           * *(float *)((char *)&unk_1909419A0 + v6 + 26564)))
           + (float)(*(float *)((char *)&unk_1909419A0 + v6 + 26568) * *(float *)((char *)&unk_1909419A0 + v6 + 26568))) < 0.0083333338 )
        *(_DWORD *)((char *)&unk_1909419A0 + v6 + 128) = 5;
    }
  }
  if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932)
    && *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) == 1
    && *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5568) )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) = 1;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26924) = 5;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26968) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4332);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26972) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4336);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26976) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4340);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26972) = 1023410176;
    *(float *)((char *)&unk_1909419A0 + v6 + 27056) = atan2f(
                                                        -*(float *)((char *)&unk_1909419A0 + v6 + 4404),
                                                        *(float *)((char *)&unk_1909419A0 + v6 + 4412));
  }
  if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152)
    && *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) == 1
    && *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4632) )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) = 1;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27144) = 5;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27188) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5268);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27192) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5272);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27196) = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5276);
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27192) = 1023410176;
    *(float *)((char *)&unk_1909419A0 + v6 + 27276) = atan2f(
                                                        -*(float *)((char *)&unk_1909419A0 + v6 + 5340),
                                                        *(float *)((char *)&unk_1909419A0 + v6 + 5348));
  }
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 128) == 5 )
  {
    v53 = (*((_BYTE *)&unk_1909419A0 + v6 + 572) & 8) == 0;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26460) = 0;
    if ( v53 )
    {
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) = 0;
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) = 0;
    }
    else
    {
      v54 = *(float *)((char *)&unk_1909419A0 + v6 + 26484);
      v55 = *(float *)((char *)&unk_1909419A0 + v6 + 26492);
      v56 = fsqrt(
              (float)((float)(*(float *)((char *)&unk_1909419A0 + v6 + 4340) - v55)
                    * (float)(*(float *)((char *)&unk_1909419A0 + v6 + 4340) - v55))
            + (float)((float)(*(float *)((char *)&unk_1909419A0 + v6 + 4332) - v54)
                    * (float)(*(float *)((char *)&unk_1909419A0 + v6 + 4332) - v54)));
      v57 = fsqrt(
              (float)((float)(*(float *)((char *)&unk_1909419A0 + v6 + 5276) - v55)
                    * (float)(*(float *)((char *)&unk_1909419A0 + v6 + 5276) - v55))
            + (float)((float)(*(float *)((char *)&unk_1909419A0 + v6 + 5268) - v54)
                    * (float)(*(float *)((char *)&unk_1909419A0 + v6 + 5268) - v54)));
      if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) && !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) )
      {
        v58 = v56 > v57;
        v59 = v6 + 220 * v58;
        *(_DWORD *)((char *)&unk_1909419A0 + v59 + 26932) = 3;
        *(_DWORD *)((char *)&unk_1909419A0 + v59 + 26940) = 0;
        *(float *)((char *)&unk_1909419A0 + v59 + 26944) = *(float *)(a3 + 12 * v58) - *(float *)(a2 + 12 * v58);
        *(float *)((char *)&unk_1909419A0 + v59 + 26948) = *(float *)(a3 + 12 * v58 + 4) - *(float *)(a2 + 12 * v58 + 4);
        *(float *)((char *)&unk_1909419A0 + v59 + 26952) = *(float *)(a3 + 12 * v58 + 8) - *(float *)(a2 + 12 * v58 + 8);
      }
    }
    if ( *(float *)((char *)&unk_1909419A0 + v6 + 26512) > 0.5 )
    {
      if ( (int)++*(_DWORD *)((char *)&unk_1909419A0 + v6 + 132) >= 10 )
        *(_DWORD *)((char *)&unk_1909419A0 + v6 + 128) = 0;
    }
    else
    {
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 132) = 0;
    }
  }
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 4632) || *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) != 1 )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26936) = 0;
    v60 = 0;
  }
  else
  {
    v60 = ++*(_DWORD *)((char *)&unk_1909419A0 + v6 + 26936);
  }
  result = *(unsigned int *)((char *)&unk_1909419A0 + v6 + 26932);
  if ( (_DWORD)result == 1 && v60 >= 30 )
  {
    result = 0;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 26932) = 0;
  }
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 5568) || *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) != 1 )
  {
    v53 = *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) == 1;
    v62 = 0;
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27156) = 0;
    if ( !v53 )
      goto LABEL_75;
  }
  else
  {
    v62 = ++*(_DWORD *)((char *)&unk_1909419A0 + v6 + 27156);
  }
  if ( v62 >= 30 )
    *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) = 0;
LABEL_75:
  if ( (_DWORD)result == 1 )
  {
    v63 = *(float *)((char *)&unk_1909419A0 + v6 + 27040);
    if ( v63 < 1.0 )
      *(float *)((char *)&unk_1909419A0 + v6 + 27040) = v63 + 0.5;
    if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 4632) )
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27040) = 0;
  }
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27152) == 1 )
  {
    v64 = *(float *)((char *)&unk_1909419A0 + v6 + 27260);
    if ( v64 < 1.0 )
      *(float *)((char *)&unk_1909419A0 + v6 + 27260) = v64 + 0.5;
    if ( !*(_DWORD *)((char *)&unk_1909419A0 + v6 + 5568) )
      *(_DWORD *)((char *)&unk_1909419A0 + v6 + 27260) = 0;
  }
  return result;
}

