/* Address: 0x1400a0eb0 | Name: sub_1400A0EB0 | Size: 1934 bytes */
void __fastcall sub_1400A0EB0(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  bool v4; // zf
  __int64 v5; // r12
  __int64 v6; // rcx
  unsigned int v7; // ebp
  float v8; // xmm1_4
  unsigned int v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  unsigned int *v13; // rsi
  float v14; // xmm0_4
  unsigned int *v15; // rdi
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // rcx
  double v25; // xmm2_8
  unsigned int v26; // xmm0_4
  unsigned int v27; // xmm1_4
  double v28; // xmm0_8
  double v29; // xmm1_8
  double v30; // xmm2_8
  unsigned int v31; // eax
  float v32; // xmm0_4

  v2 = 3597LL * a1;
  v3 = a1;
  v4 = dword_140404A6C[280649838] == 0;
  dword_140404A6C[v2 + 71856325] = 0;
  if ( v4 )
  {
    v5 = (int)dword_140404A6C[v2 + 71856292];
    if ( (_DWORD)v5 != -1 )
    {
      v6 = 7166 * v5;
      if ( dword_140404A6C[7166 * v5 + 280651313] != -1 )
      {
        v7 = -1;
        if ( (int)dword_140404A6C[v6 + 280658139] > 0 )
          v7 = dword_140404A6C[v6 + 280658140];
        v4 = dword_140404A6C[v2 + 71856340] == 2;
        dword_140404A6C[v2 + 71856330] = 1;
        if ( !v4 )
        {
          *(_QWORD *)&dword_140404A6C[v2 + 71856297] = 0;
          dword_140404A6C[v2 + 71856293] = 0x40000000;
          dword_140404A6C[v2 + 71856295] = -1082130432;
        }
        if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 18 )
          *(float *)&dword_140404A6C[v2 + 71856331] = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
                                                    + *(float *)&dword_140404A6C[v2 + 71856331];
        else
          sub_1400A2C00((unsigned int)a1, v7);
        v8 = *(float *)&dword_140404A6C[v2 + 71856331];
        if ( v8 >= 0.0 )
        {
          if ( v8 > 0.625 )
          {
            v8 = 0.625;
            dword_140404A6C[v2 + 71856331] = 1059061760;
          }
        }
        else
        {
          v8 = 0.0;
          dword_140404A6C[v2 + 71856331] = 0;
        }
        v4 = dword_140404A6C[284024634] == 0;
        *(float *)&v9 = (float)((float)(v8 - *(float *)&dword_140404A6C[v2 + 71856332]) * 0.0625)
                      + *(float *)&dword_140404A6C[v2 + 71856332];
        dword_140404A6C[v2 + 71856332] = v9;
        v10 = 1.0 - *(float *)&v9;
        if ( v4 )
        {
          v4 = dword_140404A6C[73991627] == 0;
          v11 = *(float *)&dword_140404A6C[v2 + 71856298];
          *(float *)&dword_140404A6C[v2 + 71856297] = (float)((float)(*(float *)&dword_140404A6C[284024599] * v10)
                                                            * 0.001953125)
                                                    + *(float *)&dword_140404A6C[v2 + 71856297];
          if ( v4 )
            v12 = (float)((float)(*(float *)&dword_140404A6C[284024600] * v10) * 0.001953125) + v11;
          else
            v12 = v11 - (float)((float)(*(float *)&dword_140404A6C[284024600] * v10) * 0.001953125);
          *(float *)&dword_140404A6C[v2 + 71856298] = v12;
          v13 = &dword_140404A6C[v2 + 71856293];
          v14 = *(float *)&dword_140404A6C[v2 + 71856293];
          if ( v14 >= 0.5 )
          {
            if ( v14 >= 1.5 )
              *v13 = 0x40000000;
            else
              *v13 = 1065353216;
          }
          else
          {
            *v13 = 0;
          }
          v15 = &dword_140404A6C[v2 + 71856295];
          v16 = *(float *)&dword_140404A6C[v2 + 71856295];
          if ( v16 >= -0.375 )
          {
            if ( v16 <= 0.375 )
              *v15 = 0;
            else
              *v15 = 1065353216;
          }
          else
          {
            *v15 = -1082130432;
          }
        }
        else
        {
          v13 = &dword_140404A6C[v2 + 71856293];
          v15 = &dword_140404A6C[v2 + 71856295];
          v17 = (float)(*(float *)&dword_140404A6C[284024599] * 0.0066666668)
              + *(float *)&dword_140404A6C[v2 + 71856293];
          v18 = (float)(*(float *)&dword_140404A6C[284024600] * 0.0066666668)
              + *(float *)&dword_140404A6C[v2 + 71856295];
          *(float *)&dword_140404A6C[v2 + 71856293] = v17;
          *(float *)&dword_140404A6C[v2 + 71856295] = v18;
          if ( v17 >= -0.125 )
          {
            if ( v17 > 2.125 )
              *v13 = 1074266112;
          }
          else
          {
            *v13 = -1107296256;
          }
          if ( v18 >= -1.0 )
          {
            if ( v18 > 1.0 )
              *v15 = 1065353216;
          }
          else
          {
            *v15 = -1082130432;
          }
          dword_140404A6C[v2 + 71856325] |= 2u;
        }
        v19 = *(float *)&dword_140404A6C[v2 + 71856297];
        if ( v19 >= -3.14159265359 )
        {
          if ( v19 > 3.14159265359 )
            dword_140404A6C[v2 + 71856297] = 1078530011;
        }
        else
        {
          dword_140404A6C[v2 + 71856297] = -1068953637;
        }
        v20 = *(float *)&dword_140404A6C[v2 + 71856298];
        if ( v20 >= -1.570796326795 )
        {
          if ( v20 > 1.570796326795 )
            dword_140404A6C[v2 + 71856298] = 1070141403;
        }
        else
        {
          dword_140404A6C[v2 + 71856298] = -1077342245;
        }
        if ( !dword_140404A6C[280648133] )
        {
          v21 = *(float *)&dword_140404A6C[v2 + 71856296];
          if ( BYTE2(dword_140404A6C[284024771]) )
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 + 0.03125;
          }
          else if ( BYTE2(dword_140404A6C[284024770]) )
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 - 0.03125;
          }
          else if ( v21 < 0.125 )
          {
            if ( v21 > -0.125 )
              dword_140404A6C[v2 + 71856296] = 0;
            else
              *(float *)&dword_140404A6C[v2 + 71856296] = v21 + 0.125;
          }
          else
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 - 0.125;
          }
          v22 = *(float *)&dword_140404A6C[v2 + 71856294];
          if ( LOBYTE(dword_140404A6C[284024766]) )
          {
            if ( v22 <= -0.72187501 )
            {
              v22 = -0.75;
              dword_140404A6C[v2 + 71856294] = -1086324736;
              v23 = -0.75;
            }
            else
            {
              v22 = v22 - 0.028125001;
              *(float *)&dword_140404A6C[v2 + 71856294] = v22;
              v23 = v22;
            }
          }
          else if ( v22 >= -0.037500001 )
          {
            v23 = *(float *)&dword_140404A6C[v2 + 71856294];
            if ( v22 < 0.0 )
            {
              v22 = 0.0;
              dword_140404A6C[v2 + 71856294] = 0;
              v23 = 0.0;
            }
          }
          else
          {
            v22 = v22 + 0.037500001;
            *(float *)&dword_140404A6C[v2 + 71856294] = v22;
            v23 = v22;
          }
          if ( HIBYTE(dword_140404A6C[284024766]) )
          {
            if ( v22 >= 0.72187501 )
              dword_140404A6C[v2 + 71856294] = 1061158912;
            else
              *(float *)&dword_140404A6C[v2 + 71856294] = v23 + 0.028125001;
          }
          else if ( v22 <= 0.037500001 )
          {
            if ( v22 > 0.0 )
              dword_140404A6C[v2 + 71856294] = 0;
          }
          else
          {
            *(float *)&dword_140404A6C[v2 + 71856294] = v23 - 0.037500001;
          }
          if ( LOBYTE(dword_140404A6C[284024776]) )
            dword_140404A6C[v2 + 71856325] |= 4u;
          if ( LOBYTE(dword_140404A6C[284024821]) )
            dword_140404A6C[v2 + 71856325] |= 8u;
          if ( BYTE1(dword_140404A6C[284024821]) )
            dword_140404A6C[v2 + 71856325] |= 0x10u;
          if ( v7 != -1 )
          {
            v24 = 1760LL * (int)v7;
            if ( dword_140404A6C[v24 + 278845898] == 25 && dword_140404A6C[v24 + 278846052] == 1 )
              sub_1400A2DC0((unsigned int)a1, v7);
          }
          if ( LOBYTE(dword_140404A6C[284024767]) )
            dword_140404A6C[v2 + 71856325] |= 0x800u;
          if ( BYTE1(dword_140404A6C[284024770]) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x1000u;
          if ( BYTE1(dword_140404A6C[284024767]) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x2000u;
          if ( LOBYTE(dword_140404A6C[284024784]) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x40000u;
        }
        if ( dword_140404A6C[284024356] )
        {
          v4 = dword_140404A6C[285101134] == 0;
          v25 = *(float *)&dword_140404A6C[285101118] * 2.3561944901925;
          *(float *)&v26 = fabs(*(float *)&dword_140404A6C[285101116]) * *(float *)&dword_140404A6C[285101116] * 0.75;
          *(float *)&v27 = *(float *)&dword_140404A6C[285101121] - *(float *)&dword_140404A6C[285101120];
          dword_140404A6C[v2 + 71856294] = v26;
          v28 = *(float *)&dword_140404A6C[v2 + 71856297];
          dword_140404A6C[v2 + 71856296] = v27;
          v29 = *(float *)&dword_140404A6C[v2 + 71856298];
          *(float *)&v28 = (v25 - v28) * 0.0625 + v28;
          v30 = *(float *)&dword_140404A6C[285101119];
          dword_140404A6C[v2 + 71856297] = LODWORD(v28);
          *(float *)&dword_140404A6C[v2 + 71856298] = (v30 * 2.3561944901925 - v29) * 0.0625 + v29;
          if ( !v4 )
            dword_140404A6C[v2 + 71856325] |= 4u;
          if ( dword_140404A6C[285101135] && !dword_140404A6C[285097167] )
            dword_140404A6C[v2 + 71856329] = -1;
          if ( dword_140404A6C[285101133] && !dword_140404A6C[285097165] )
            dword_140404A6C[v2 + 71856329] = 0;
          v31 = dword_140404A6C[v2 + 71856329];
          if ( !v31 )
          {
            *v13 = 0x40000000;
            *v15 = -1082130432;
            v31 = dword_140404A6C[v2 + 71856329];
          }
          if ( v31 == -1 )
          {
            *v13 = 0x40000000;
            *v15 = 1065353216;
          }
        }
        sub_14009EA20(a1, v5);
        v32 = *(float *)&dword_140404A6C[v2 + 71856296];
        if ( v32 >= -1.0 )
        {
          if ( v32 > 1.0 )
            dword_140404A6C[v2 + 71856296] = 1065353216;
        }
        else
        {
          dword_140404A6C[v2 + 71856296] = -1082130432;
        }
      }
    }
  }
}

