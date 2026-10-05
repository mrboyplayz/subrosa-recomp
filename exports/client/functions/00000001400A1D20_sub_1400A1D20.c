/* Address: 0x1400a1d20 | Name: sub_1400A1D20 | Size: 1155 bytes */
__int64 __fastcall sub_1400A1D20(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rbx
  bool v4; // zf
  int v5; // edx
  float v6; // xmm2_4
  unsigned int v7; // ecx
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  unsigned int v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4

  v1 = a1;
  result = 14388LL * a1;
  v3 = a1;
  if ( *(unsigned int *)((char *)&dword_140404A6C[71856340] + result) != 3 )
  {
    *(_QWORD *)((char *)&dword_140404A6C[71856296] + result) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = 0;
  }
  v4 = dword_140404A6C[280649838] == 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856330] + result) = 1;
  *(_QWORD *)((char *)&dword_140404A6C[71856293] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856295] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) = 0;
  if ( v4 )
  {
    v5 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + result);
    if ( v5 != -1 )
    {
      v6 = 0.0;
      v7 = dword_140404A6C[284024633];
      if ( !dword_140404A6C[284024634] || dword_140404A6C[284024633] )
      {
        if ( *(float *)&dword_140404A6C[421831839] >= -1.0 )
        {
          if ( *(float *)&dword_140404A6C[421831839] <= 1.0 )
            v11 = 0.0;
          else
            v11 = *(float *)&dword_140404A6C[421831839] + -1.0;
        }
        else
        {
          v11 = *(float *)&dword_140404A6C[421831839] + 1.0;
        }
        if ( *(float *)&dword_140404A6C[421831840] >= -1.0 )
        {
          if ( *(float *)&dword_140404A6C[421831840] <= 1.0 )
            v12 = 0.0;
          else
            v12 = *(float *)&dword_140404A6C[421831840] + -1.0;
        }
        else
        {
          v12 = *(float *)&dword_140404A6C[421831840] + 1.0;
        }
        *(float *)&dword_140404A6C[421831839] = v11
                                              + (float)((float)(*(float *)&dword_140404A6C[284024599] * 0.125) * 0.5);
        *(float *)&v13 = v12 + (float)((float)(*(float *)&dword_140404A6C[284024600] * 0.125) * 0.5);
        v14 = *(float *)((char *)&dword_140404A6C[71856293] + result);
        *(float *)((char *)&dword_140404A6C[71856295] + result) = *(float *)&dword_140404A6C[421831839]
                                                                + *(float *)((char *)&dword_140404A6C[71856295] + result);
        dword_140404A6C[421831840] = v13;
        *(float *)((char *)&dword_140404A6C[71856293] + result) = v14 - *(float *)&v13;
        if ( !v7 )
        {
          *(float *)((char *)&dword_140404A6C[71856297] + result) = *(float *)((char *)&dword_140404A6C[71856297]
                                                                             + result)
                                                                  * 0.875;
          *(float *)((char *)&dword_140404A6C[71856298] + result) = *(float *)((char *)&dword_140404A6C[71856298]
                                                                             + result)
                                                                  * 0.875;
        }
      }
      else
      {
        v8 = 1.0 - *(float *)((char *)&dword_140404A6C[71856332] + result);
        v9 = (float)((float)(*(float *)&dword_140404A6C[284024599] * v8) * 0.0015384615)
           + *(float *)((char *)&dword_140404A6C[71856297] + result);
        v10 = (float)((float)(*(float *)&dword_140404A6C[284024600] * v8) * 0.0015384615)
            + *(float *)((char *)&dword_140404A6C[71856298] + result);
        if ( v9 >= -2.74889357189125 )
        {
          *(float *)((char *)&dword_140404A6C[71856297] + result) = v9;
          if ( v9 > 2.74889357189125 )
            *(unsigned int *)((char *)&dword_140404A6C[71856297] + result) = 1076882911;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[71856297] + result) = -1070600737;
        }
        if ( v10 >= -1.570796326795 )
        {
          *(float *)((char *)&dword_140404A6C[71856298] + result) = v10;
          if ( v10 > 1.570796326795 )
            *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = 1070141403;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = -1077342245;
        }
      }
      v15 = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
          + *(float *)((char *)&dword_140404A6C[71856331] + result);
      if ( v15 >= 0.0 )
      {
        v6 = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
           + *(float *)((char *)&dword_140404A6C[71856331] + result);
        if ( v15 > 0.875 )
          v6 = 0.875;
      }
      v4 = dword_140404A6C[280648133] == 0;
      v16 = *(float *)((char *)&dword_140404A6C[71856332] + result);
      *(float *)((char *)&dword_140404A6C[71856331] + result) = v6;
      *(float *)((char *)&dword_140404A6C[71856332] + result) = (float)((float)(v6 - v16) * 0.0625) + v16;
      if ( v4 )
      {
        if ( BYTE2(dword_140404A6C[284024771]) )
          *(float *)((char *)&dword_140404A6C[71856296] + result) = *(float *)((char *)&dword_140404A6C[71856296]
                                                                             + result)
                                                                  + 0.03125;
        if ( BYTE2(dword_140404A6C[284024770]) )
          *(float *)((char *)&dword_140404A6C[71856296] + result) = *(float *)((char *)&dword_140404A6C[71856296]
                                                                             + result)
                                                                  - 0.03125;
        if ( LOBYTE(dword_140404A6C[284024766]) )
          *(float *)((char *)&dword_140404A6C[71856294] + result) = *(float *)((char *)&dword_140404A6C[71856294]
                                                                             + result)
                                                                  - 1.0;
        if ( HIBYTE(dword_140404A6C[284024766]) )
          *(float *)((char *)&dword_140404A6C[71856294] + result) = *(float *)((char *)&dword_140404A6C[71856294]
                                                                             + result)
                                                                  + 1.0;
        if ( LOBYTE(dword_140404A6C[284024776]) )
          *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) |= 4u;
        if ( LOBYTE(dword_140404A6C[284024821]) )
          *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) |= 8u;
        if ( BYTE1(dword_140404A6C[284024821]) )
          dword_140404A6C[3597 * v1 + 71856325] |= 0x10u;
        if ( LOBYTE(dword_140404A6C[284024767]) )
          dword_140404A6C[3597 * v1 + 71856325] |= 0x800u;
      }
      sub_14009EA20(v1, v5);
      result = 3597 * v3;
      v17 = *(float *)&dword_140404A6C[3597 * v3 + 71856293];
      if ( v17 >= -1.0 )
      {
        if ( v17 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856293] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856293] = -1082130432;
      }
      v18 = *(float *)&dword_140404A6C[3597 * v3 + 71856294];
      if ( v18 >= -1.0 )
      {
        if ( v18 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856294] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856294] = -1082130432;
      }
      v19 = *(float *)&dword_140404A6C[3597 * v3 + 71856295];
      if ( v19 >= -1.0 )
      {
        if ( v19 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856295] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856295] = -1082130432;
      }
      v20 = *(float *)&dword_140404A6C[3597 * v3 + 71856296];
      if ( v20 >= -1.0 )
      {
        if ( v20 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856296] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856296] = -1082130432;
      }
    }
  }
  return result;
}

