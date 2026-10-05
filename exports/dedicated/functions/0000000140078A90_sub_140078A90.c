/* Address: 0x140078a90 | Name: sub_140078A90 | Size: 1538 bytes */
__int64 __fastcall sub_140078A90(int a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm9_4
  float v17; // xmm12_4
  float v18; // xmm1_4
  int v19; // ecx
  int v20; // r9d
  float v21; // xmm12_4
  float v22; // xmm10_4
  float v23; // xmm0_4
  float v24; // xmm11_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  float v31; // xmm10_4
  float v32; // xmm11_4
  int v33; // edx
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // [rsp+20h] [rbp-A8h] BYREF
  float v41; // [rsp+24h] [rbp-A4h]
  float v42; // [rsp+28h] [rbp-A0h]
  float v43[4]; // [rsp+30h] [rbp-98h] BYREF

  v2 = 7040LL * a1;
  result = *(unsigned int *)((char *)&unk_19025F1FC + v2);
  v4 = dword_19025F0D4[v2 / 4];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    *(_DWORD *)((char *)&unk_19025F1FC + v2) = result;
  }
  v5 = *(int *)((char *)&unk_19025F0E4 + v2);
  if ( (_DWORD)v5 != -1 && dword_1915413AC == 2 )
  {
    v6 = dword_19025F118[v2 / 4];
    result = *(_DWORD *)&byte_19025F210[v2] & 1;
    if ( !(_DWORD)result )
      *(_DWORD *)((char *)&unk_19025F20C + v2) = 0;
    if ( ((_DWORD)v4 == 11 || (_DWORD)v4 == 5) && !(_DWORD)result )
    {
      *(_DWORD *)((char *)&unk_19025F1FC + v2) = 0;
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
    }
    else
    {
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
      if ( (_DWORD)result )
      {
        result = *(unsigned int *)((char *)&unk_19025F20C + v2);
        if ( (int)result < v7 || (_DWORD)v4 == 11 || (_DWORD)v4 == 5 )
        {
          result = (unsigned int)(result + 1);
          *(_DWORD *)((char *)&unk_19025F20C + v2) = result;
        }
      }
    }
    if ( !*(_DWORD *)((char *)&unk_19025F204 + v2) && dword_19025F0F4[v2 / 4] > 0 )
    {
      result = dword_19025F0F8[v2 / 4];
      if ( *((int *)&unk_19025F204 + 1760 * result) > 0 )
      {
        *(_DWORD *)((char *)&unk_19025F204 + v2) = 1;
        result = dword_19025F0F8[v2 / 4];
        --*((_DWORD *)&unk_19025F204 + 1760 * result);
      }
    }
    if ( *(int *)((char *)&unk_19025F1FC + v2) <= 0
      && *(_DWORD *)((char *)&unk_19025F20C + v2) == v7
      && *(int *)((char *)&unk_19025F204 + v2) > 0 )
    {
      v8 = v5;
      v9 = 188 * v6;
      v10 = 1268 * v4;
      v11 = *((float *)&unk_140249624 + 47 * v6);
      v12 = *((float *)&unk_140249628 + 47 * v6);
      v13 = *((float *)&unk_14024962C + 47 * v6);
      v14 = *((float *)&unk_140249658 + 47 * v6);
      v15 = *((float *)&unk_14024965C + 47 * v6);
      v16 = -*(float *)&dword_1901220E8[1268 * v4];
      v17 = *((float *)&unk_140249654 + 47 * v6);
      sub_140051570(&v40, *(float *)&dword_1901220EC[1268 * v4], 0.0);
      v18 = *(float *)((char *)&unk_14024961C + v9);
      v19 = dword_1901220DC[v10];
      v20 = dword_1909419D0[7166 * v8];
      v21 = (float)((float)(v17 * v16) + v11) + v40;
      v40 = *(float *)((char *)&unk_140249618 + v9);
      v22 = (float)((float)(v14 * v16) + v12) + v41;
      v23 = *(float *)((char *)&unk_140249620 + v9);
      v24 = (float)((float)(v15 * v16) + v13) + v42;
      v43[0] = v21;
      v41 = v18;
      v43[1] = v22;
      v42 = v23;
      v43[2] = v24;
      sub_140038FD0(v19, &v40, v43, v20);
      v25 = *(float *)((char *)&unk_140249618 + v9) - *(float *)((char *)&unk_140249624 + v9);
      v26 = *(float *)((char *)&unk_14024961C + v9) - *(float *)((char *)&unk_140249628 + v9);
      v27 = *(float *)((char *)&unk_140249620 + v9) - *(float *)((char *)&unk_14024962C + v9);
      v40 = v25;
      v41 = v26;
      v42 = v27;
      if ( dword_163D75B60 )
      {
        v28 = dword_191541414;
        v29 = (__int64)dword_196199564++ << 7;
        HIWORD(dword_196199564) = 0;
        *(_DWORD *)((char *)&unk_195999560 + v29) = 0;
        *(_DWORD *)((char *)&unk_195999564 + v29) = v28;
        v30 = dword_1901220DC[v10];
        *(float *)((char *)&qword_195999568 + v29) = v25;
        *(float *)((char *)&qword_195999568 + v29 + 4) = v26;
        *(float *)((char *)&dword_195999570 + v29) = v27;
        *(float *)((char *)&qword_195999574 + v29) = v21;
        *(float *)((char *)&qword_195999574 + v29 + 4) = v22;
        *(float *)((char *)&dword_19599957C + v29) = v24;
        *(int *)((char *)&dword_195999580 + v29) = v30;
        *(int *)((char *)&dword_195999584 + v29) = a1;
      }
      sub_140051570(&v40, *(float *)&dword_1901220EC[v10] + *(float *)&dword_1901220EC[v10], 0.0);
      v31 = v22 + v41;
      v32 = v24 + v42;
      v33 = *(_DWORD *)((char *)&unk_19025F204 + v2);
      v34 = v40 + v21;
      v35 = *(float *)&dword_1417D95A0[6 * dword_1901220DC[v10]];
      *(_DWORD *)((char *)&unk_19025F1FC + v2) = dword_1901220D8[v10];
      result = (unsigned int)(v33 - 1);
      *(_DWORD *)((char *)&unk_19025F204 + v2) = result;
      v36 = (float)(v35 + v35) / *(float *)((char *)&unk_19025F0D8 + v2);
      *(float *)((char *)&unk_140249624 + v9) = (float)((float)-v36 * v34) + *(float *)((char *)&unk_140249624 + v9);
      *(float *)((char *)&unk_140249628 + v9) = (float)((float)-v36 * v31) + *(float *)((char *)&unk_140249628 + v9);
      *(float *)((char *)&unk_14024962C + v9) = (float)((float)-v36 * v32) + *(float *)((char *)&unk_14024962C + v9);
      v37 = (float)(*(float *)((char *)&unk_140249648 + v9) * 0.03125)
          - (float)(*(float *)((char *)&unk_140249654 + v9) * 0.625);
      v38 = (float)(*(float *)((char *)&unk_14024964C + v9) * 0.03125)
          - (float)(*(float *)((char *)&unk_140249658 + v9) * 0.625);
      v39 = (float)(*(float *)((char *)&unk_140249650 + v9) * 0.03125)
          - (float)(*(float *)((char *)&unk_14024965C + v9) * 0.625);
      *(float *)((char *)&unk_140249660 + v9) = (float)((float)((float)(v38 * v32) - (float)(v39 * v31)) * v36)
                                              + *(float *)((char *)&unk_140249660 + v9);
      *(float *)((char *)&unk_140249664 + v9) = (float)((float)((float)(v34 * v39) - (float)(v37 * v32)) * v36)
                                              + *(float *)((char *)&unk_140249664 + v9);
      *(float *)((char *)&unk_140249668 + v9) = (float)((float)((float)(v37 * v31) - (float)(v34 * v38)) * v36)
                                              + *(float *)((char *)&unk_140249668 + v9);
      if ( v33 == 1 && dword_19025F0F4[v2 / 4] > 0 )
      {
        result = dword_19025F0F8[v2 / 4];
        if ( *((int *)&unk_19025F204 + 1760 * result) > 0 )
        {
          *(_DWORD *)((char *)&unk_19025F204 + v2) = 1;
          result = dword_19025F0F8[v2 / 4];
          --*((_DWORD *)&unk_19025F204 + 1760 * result);
        }
      }
    }
  }
  return result;
}

