/* Address: 0x14005d130 | Name: sub_14005D130 | Size: 1582 bytes */
__int64 __fastcall sub_14005D130(unsigned int a1, int a2)
{
  int *v2; // r14
  __int64 result; // rax
  int v4; // r13d
  int v5; // ebx
  __int64 v6; // r15
  __int64 v7; // r12
  float v8; // xmm3_4
  __int64 v9; // rdi
  __int64 v10; // rsi
  float v11; // xmm7_4
  float v12; // xmm8_4
  __int64 v13; // rcx
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm3_4
  float v19; // xmm6_4
  __int64 v20; // r10
  __int64 v21; // r13
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24; // edx
  __int64 v25; // rcx
  float v26; // xmm3_4
  float v27; // xmm2_4
  __int64 v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm5_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  float v46; // [rsp+58h] [rbp-B0h] BYREF
  float v47; // [rsp+5Ch] [rbp-ACh]
  float v48; // [rsp+60h] [rbp-A8h]
  float v49; // [rsp+68h] [rbp-A0h] BYREF
  float v50; // [rsp+6Ch] [rbp-9Ch]
  __int128 v51; // [rsp+70h] [rbp-98h]

  v2 = dword_1910415F8;
  result = a1;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v5 != 12 && v5 != 15 )
    {
      v8 = *((float *)v2 + 1);
      v9 = 7166LL * (int)result;
      v10 = v6 * 4 + v9 * 4;
      v11 = *(float *)&dword_190941BEC[v6 + v9];
      v12 = *(float *)&dword_190941BF0[v6 + v9];
      v13 = v9 * 4 + 12 * (v7 + *v2);
      v14 = *(float *)((char *)&xmmword_190941C1C + v13);
      v15 = *(float *)((char *)&xmmword_190941C1C + v13 + 4);
      v16 = *(float *)((char *)&xmmword_190941C1C + v13 + 8);
      v17 = *(float *)&dword_190941BF4[v6 + v9];
      v46 = (float)(v14 * (float)(v8 * -0.5)) + v11;
      v47 = (float)(v15 * (float)(v8 * -0.5)) + v12;
      v48 = (float)(v16 * (float)(v8 * -0.5)) + v17;
      if ( v5 == 11 || v5 == 14 )
      {
        v46 = (float)(v14 * (float)(v8 * -0.125)) + v11;
        v47 = (float)(v15 * (float)(v8 * -0.125)) + v12;
        v48 = (float)(v16 * (float)(v8 * -0.125)) + v17;
      }
      v18 = v8 * 0.5;
      *(float *)&v51 = (float)(v16 * v18) + v17;
      v19 = *((float *)v2 + 2);
      v49 = (float)(v14 * v18) + v11;
      v50 = (float)(v15 * v18) + v12;
      if ( sub_1400278B0(v4, &v46, &v49, v19) )
      {
        v20 = *(int *)((char *)dword_190941BE8 + v10);
        v21 = 5210LL * v4;
        v22 = *(float *)&qword_16E18CA44 - *((float *)&unk_140249618 + 47 * v20 + 1);
        v46 = unk_16E18CA40 - *((float *)&unk_140249618 + 47 * v20);
        v23 = *((float *)&qword_16E18CA44 + 1) - *((float *)&unk_140249618 + 47 * v20 + 2);
        v47 = v22;
        v24 = dword_16E6A3C88[v21];
        v25 = 188LL * v24;
        v48 = v23;
        v26 = *(float *)&qword_16E18CA44 - *(float *)((char *)&unk_140249618 + v25 + 4);
        v27 = *((float *)&qword_16E18CA44 + 1) - *(float *)((char *)&unk_140249618 + v25 + 8);
        v49 = unk_16E18CA40 - *(float *)((char *)&unk_140249618 + v25);
        v50 = v26;
        *(float *)&v51 = v27;
        sub_140002C40(
          v20,
          v24,
          &v46,
          &v49,
          &qword_16E18CA4C,
          v19 - *(float *)&dword_16E18CA5C,
          1053609165,
          0.03125,
          1031798784);
        if ( a2 == dword_1909419F8[v9] || v5 != 7 && (unsigned int)v5 > 4 && (unsigned int)v5 < 0xA )
          goto LABEL_30;
        v28 = 188LL * dword_16E6A3C88[v21];
        v29 = *(float *)&qword_16E18CA44 - *(float *)((char *)&unk_14024961C + v28);
        v30 = *((float *)&qword_16E18CA44 + 1) - *(float *)((char *)&unk_140249620 + v28);
        v31 = unk_16E18CA40 - *(float *)((char *)&unk_140249618 + v28);
        v32 = *(float *)((char *)&unk_14024966C + v28);
        v33 = v32 * v29;
        v34 = (float)(v32 * v30) - (float)(*(float *)((char *)&unk_140249674 + v28) * v31);
        v35 = 0.2;
        v36 = (float)((float)(*(float *)((char *)&unk_140249670 + v28) * v31) - v33)
            + *(float *)((char *)&unk_14024962C + v28);
        v46 = (float)((float)(*(float *)((char *)&unk_140249674 + v28) * v29)
                    - (float)(*(float *)((char *)&unk_140249670 + v28) * v30))
            + *(float *)((char *)&unk_140249624 + v28);
        v37 = v34 + *(float *)((char *)&unk_140249628 + v28);
        v38 = v46 - *(float *)((char *)&unk_190941C04 + v10);
        v48 = v36;
        v39 = v36 - *(float *)((char *)&unk_190941C0C + v10);
        v47 = v37;
        v49 = v38;
        v40 = v37 - *(float *)((char *)&unk_190941C08 + v10);
        *(float *)&v51 = v39;
        v50 = v40;
        if ( (unsigned int)(v5 - 10) <= 1 || (unsigned int)(v5 - 13) <= 1 )
          v35 = 0.33333334;
        if ( *(_DWORD *)&algn_190941A08[v9 * 4] )
          goto LABEL_30;
        if ( (float)((float)((float)(v40 * *((float *)&qword_16E18CA4C + 1)) + (float)(v38 * *(float *)&qword_16E18CA4C))
                   + (float)(v39 * *(float *)&dword_16E18CA54)) <= v35 )
          goto LABEL_30;
        dword_190941A04[v9] -= 120;
        if ( (unsigned int)dword_190941A04[v9] < 0xFFFFFF89 && dword_190941A04[v9] != 0 )
          goto LABEL_30;
        if ( dword_163D75B60 )
        {
          v41 = dword_191541414;
          v42 = (__int64)dword_196199564++ << 7;
          *(_DWORD *)((char *)&unk_195999560 + v42) = 9;
          *(_DWORD *)((char *)&unk_195999564 + v42) = v41;
          *(int *)((char *)&dword_195999580 + v42) = dword_191536D0C;
          *(_DWORD *)((char *)&qword_195999568 + v42) = dword_190941A48[v9];
          *(_DWORD *)((char *)&qword_195999568 + v42 + 4) = dword_190941A4C[v9];
          *(int *)((char *)&dword_195999570 + v42) = dword_190941A50[v9];
          *(int *)((char *)&dword_195999590 + v42) = 1065353216;
          HIWORD(dword_196199564) = 0;
          *(int *)((char *)&dword_195999594 + v42) = 1056964608;
        }
        v43 = dword_16E6A3C74[v21];
        if ( (_DWORD)v43 != -1 )
        {
          v44 = (unsigned int)dword_1909419D0[v9];
          if ( (_DWORD)v44 != -1 )
            sub_1400B0DA0((unsigned int)v43, v44, 100);
        }
        v45 = dword_1909419D0[v9];
        if ( (_DWORD)v45 == -1 || (_DWORD)v43 == -1 || dword_16D67D624[3597 * v43] != dword_16D67D624[3597 * v45] )
        {
LABEL_30:
          v4 = a2;
        }
        else
        {
          sub_1400B3400((unsigned int)v43, 100);
          v4 = a2;
        }
      }
      result = a1;
    }
    ++v5;
    v7 += 26;
    v2 += 25;
    v6 += 78;
  }
  while ( v5 < 16 );
  return result;
}

