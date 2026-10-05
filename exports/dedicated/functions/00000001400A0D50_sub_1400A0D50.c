/* Address: 0x1400a0d50 | Name: sub_1400A0D50 | Size: 1551 bytes */
__int64 sub_1400A0D50()
{
  __int64 result; // rax
  int *v1; // r9
  float *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // r8
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm10_4
  float v8; // xmm5_4
  float v9; // xmm11_4
  float v10; // xmm4_4
  float v11; // xmm12_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm15_4
  int v17; // eax
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  __int64 v22; // rdx
  __int64 v23; // rcx
  float v24; // xmm13_4
  float *v25; // rax
  float v26; // xmm12_4
  float v27; // xmm11_4
  float v28; // xmm10_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm5_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  int v36; // eax
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm1_4
  signed int v40; // r14d
  signed int i; // ebp
  signed int j; // edi
  unsigned int v43; // esi
  signed int v44; // ebx
  __int64 v45; // r15
  int v46; // r12d
  __int64 v47; // rcx
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h] BYREF
  int *v49; // [rsp+100h] [rbp+8h]

  result = (__int64)&retaddr;
  v1 = dword_16E6A3D10;
  v2 = (float *)&unk_16E6A3CD8;
  v49 = dword_16E6A3D10;
  do
  {
    if ( *((_DWORD *)v2 - 30) )
    {
      v3 = *((int *)v2 - 29);
      *(v2 - 16) = *(v2 - 19);
      *(v2 - 15) = *(v2 - 18);
      *(v2 - 14) = *(v2 - 17);
      *(v2 - 4) = *(v2 - 13);
      *(v2 - 3) = *(v2 - 12);
      *(v2 - 2) = *(v2 - 11);
      *(v2 - 1) = *(v2 - 10);
      *v2 = *(v2 - 9);
      v2[1] = *(v2 - 8);
      v2[2] = *(v2 - 7);
      v2[3] = *(v2 - 6);
      v2[4] = *(v2 - 5);
      v4 = 188LL * *((int *)v2 - 20);
      v3 *= 99776;
      v5 = *(float *)((char *)&unk_140249648 + v4);
      v6 = *(float *)((char *)&unk_140249654 + v4);
      v7 = *(float *)((char *)&unk_14024964C + v4);
      v8 = *(float *)((char *)&unk_140249658 + v4);
      v9 = *(float *)((char *)&unk_140249650 + v4);
      v10 = *(float *)((char *)&unk_14024965C + v4);
      v11 = *(float *)((char *)&unk_14AA2D814 + v3);
      v12 = *(float *)((char *)&unk_14AA2D818 + v3);
      v13 = *(float *)((char *)&unk_14AA2D81C + v3);
      v14 = *(float *)((char *)&unk_14024963C + v4);
      v15 = *(float *)((char *)&unk_14024963C + v4 + 4);
      v16 = *(float *)((char *)&unk_14024963C + v4 + 8);
      v17 = *(_DWORD *)((char *)&unk_140249624 + v4);
      v18 = (float)((float)(v15 * v11) + *(float *)((char *)&unk_14024961C + v4)) + (float)(v7 * v12);
      *(v2 - 19) = (float)((float)((float)(v14 * v11) + *(float *)((char *)&unk_140249618 + v4)) + (float)(v5 * v12))
                 + (float)(v6 * v13);
      v19 = (float)(v16 * v11) + *(float *)((char *)&unk_140249620 + v4);
      *(v2 - 18) = v18 + (float)(v8 * v13);
      *(v2 - 17) = (float)(v19 + (float)(v9 * v12)) + (float)(v10 * v13);
      *(v2 - 13) = v14;
      *(v2 - 12) = v15;
      *(v2 - 11) = v16;
      *(v2 - 10) = v5;
      *(v2 - 9) = v7;
      *(v2 - 8) = v9;
      *(v2 - 7) = v6;
      *(v2 - 6) = v8;
      *(v2 - 5) = v10;
      v20 = 65536.0;
      *((_DWORD *)v2 + 5) = v17;
      v21 = -65536.0;
      v2[6] = *(float *)((char *)&unk_140249628 + v4);
      v2[7] = *(float *)((char *)&unk_14024962C + v4);
      v2[11] = *(float *)((char *)&unk_14024966C + v4);
      v2[12] = *(float *)((char *)&unk_140249670 + v4);
      v2[13] = *(float *)((char *)&unk_140249674 + v4);
      *v1 = 1199570944;
      v1[3] = -947912704;
      v1[1] = 1199570944;
      v1[4] = -947912704;
      v1[2] = 1199570944;
      v1[5] = -947912704;
      v22 = 45072LL * *((int *)v2 - 29);
      v23 = dword_143DB3AFC[v22];
      if ( v23 > 0 )
      {
        v24 = 65536.0;
        v25 = (float *)((char *)&unk_143DB3B04 + v22 * 4);
        v26 = -65536.0;
        v27 = 65536.0;
        v28 = -65536.0;
        v29 = 65536.0;
        v30 = -65536.0;
        do
        {
          v31 = (float)((float)((float)(*(v25 - 1) * *(v2 - 13)) + *(v2 - 19)) + (float)(*v25 * *(v2 - 10)))
              + (float)(v25[1] * *(v2 - 7));
          v32 = v25[1];
          v20 = v31;
          v21 = (float)((float)((float)(*(v25 - 1) * *(v2 - 11)) + *(v2 - 17)) + (float)(*v25 * *(v2 - 8)))
              + (float)(v32 * *(v2 - 5));
          v33 = (float)((float)((float)(*(v25 - 1) * *(v2 - 12)) + *(v2 - 18)) + (float)(*v25 * *(v2 - 9)))
              + (float)(v32 * *(v2 - 6));
          if ( v24 <= v31 )
          {
            v20 = *(float *)v1;
          }
          else
          {
            *(float *)v1 = v31;
            v24 = v31;
          }
          if ( v26 < v31 )
          {
            *((float *)v1 + 3) = v31;
            v26 = v31;
          }
          if ( v27 > v33 )
          {
            *((float *)v1 + 1) = v33;
            v27 = v33;
          }
          if ( v28 < v33 )
          {
            *((float *)v1 + 4) = v33;
            v28 = v33;
          }
          if ( v29 > v21 )
          {
            *((float *)v1 + 2) = v21;
            v29 = v21;
          }
          if ( v30 >= v21 )
          {
            v21 = *((float *)v1 + 5);
          }
          else
          {
            *((float *)v1 + 5) = v21;
            v30 = v21;
          }
          v25 += 3;
          --v23;
        }
        while ( v23 );
      }
      v34 = *((float *)v1 + 3) * 0.25;
      v35 = *((float *)v1 + 1) * 0.25;
      v1[6] = (int)(float)(v20 * 0.25);
      v36 = (int)v34;
      v37 = *((float *)v1 + 4);
      v1[9] = v36;
      v38 = (int)v35;
      v39 = *((float *)v1 + 2);
      v1[7] = v38;
      v1[10] = (int)(float)(v37 * 0.25);
      v1[8] = (int)(float)(v39 * 0.25);
      result = (unsigned int)(int)(float)(v21 * 0.25);
      v1[11] = result;
      v40 = *((_DWORD *)v2 + 21);
      if ( v40 <= *((_DWORD *)v2 + 24) )
      {
        do
        {
          for ( i = *((_DWORD *)v2 + 22); i <= *((_DWORD *)v2 + 25); ++i )
          {
            for ( j = *((_DWORD *)v2 + 20); j <= *((_DWORD *)v2 + 23); ++j )
            {
              result = sub_14000CC70(0, j, v40, i);
              v43 = result;
              if ( (_DWORD)result )
              {
                result = sub_14000CDB0(0, j, v40, i);
                v44 = 0;
                v45 = 3792LL * (v43 & 0x3FF);
                v46 = result;
                if ( *(int *)((char *)&unk_18E9EA9CC + v45) > 0 )
                {
                  do
                  {
                    if ( !_bittest(&v46, v44) )
                    {
                      result = sub_140076FF0(v43, v44, 0, j, v40, i);
                      if ( (_DWORD)result != -1 )
                      {
                        result = (int)result;
                        v47 = 1760LL * (int)result;
                        dword_19025F0C8[v47] = 1;
                        *(_DWORD *)((char *)&unk_19025F0C4 + v47 * 4) = 1;
                      }
                    }
                    ++v44;
                  }
                  while ( v44 < *(_DWORD *)((char *)&unk_18E9EA9CC + v45) );
                }
              }
            }
          }
          ++v40;
        }
        while ( v40 <= *((_DWORD *)v2 + 24) );
        v1 = v49;
      }
    }
    v1 += 5210;
    v2 += 5210;
    v49 = v1;
  }
  while ( (__int64)v2 < (__int64)flt_16F0D0CD8 );
  return result;
}

