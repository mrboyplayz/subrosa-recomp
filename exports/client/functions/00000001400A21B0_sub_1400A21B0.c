/* Address: 0x1400a21b0 | Name: sub_1400A21B0 | Size: 2637 bytes */
void __fastcall sub_1400A21B0(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned int v6; // eax
  _BOOL8 v7; // rax
  signed int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  double v11; // xmm0_8
  int v12; // eax
  float v13; // xmm1_4
  int v14; // xmm0_4
  float v15; // xmm8_4
  unsigned int v16; // r12d
  float v17; // xmm9_4
  float v18; // xmm7_4
  unsigned int v19; // xmm1_4
  float v20; // xmm8_4
  float v21; // xmm7_4
  float v22; // xmm10_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  unsigned int v25; // ebx
  unsigned int v26; // xmm6_4
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  double v30; // xmm0_8
  unsigned int v31; // xmm10_4
  float v32; // xmm7_4
  float *v33; // rax
  float v34; // xmm0_4
  float v35; // xmm0_4
  unsigned int v36; // r15d
  unsigned int v37; // xmm0_4
  float v38; // xmm1_4
  unsigned int v39; // ecx
  float v40; // xmm8_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  unsigned int v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm7_4
  unsigned int v48; // xmm4_4
  float v49; // xmm4_4
  float v50; // xmm2_4
  unsigned int v51; // xmm0_4
  unsigned int v52; // xmm0_4
  float v53; // xmm4_4
  float v54; // xmm7_4
  float v55; // xmm4_4
  unsigned int v56; // xmm0_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm1_4
  __int64 v60; // rcx
  int v61; // [rsp+B0h] [rbp+8h]

  v2 = 3597LL * a1;
  v3 = a1;
  *(_QWORD *)&dword_140404A6C[v2 + 71856294] = 0;
  dword_140404A6C[v2 + 71856296] = 0;
  v4 = (int)dword_140404A6C[v2 + 71856292];
  dword_140404A6C[v2 + 71856325] = 0;
  v61 = v4;
  if ( (_DWORD)v4 != -1 )
  {
    v5 = v4;
    if ( dword_140404A6C[v2 + 71856340] != 1 )
    {
      dword_140404A6C[v2 + 71856293] = 0;
      dword_140404A6C[v2 + 71856298] = dword_140404A6C[7166 * v4 + 280651342];
      v6 = dword_140404A6C[7166 * v4 + 280651357];
      dword_140404A6C[v2 + 71856336] = 0;
      dword_140404A6C[v2 + 71856301] = v6;
    }
    if ( !dword_140404A6C[280649838] )
    {
      v7 = BYTE1(dword_140404A6C[284024821]) != 0;
      v8 = -1;
      v9 = 5 * v7;
      v10 = 28664 * v5 + 40 * v7;
      if ( *(int *)((char *)&dword_140404A6C[280658139] + v10) > 0 )
        v8 = *(unsigned int *)((char *)&dword_140404A6C[280658140] + v10);
      if ( dword_140404A6C[v2 + 71856341] != v8 )
      {
        v9 = 7040LL * v8;
        if ( *(unsigned int *)((char *)&dword_140404A6C[278845898] + v9) == 28 )
        {
          v11 = sub_14023F704(v9, v10);
          dword_140404A6C[v2 + 71856293] = LODWORD(v11);
        }
      }
      dword_140404A6C[v2 + 71856341] = v8;
      if ( v8 == -1 || (v9 = 7040LL * v8, *(unsigned int *)((char *)&dword_140404A6C[278845898] + v9) != 18) )
      {
        dword_140404A6C[v2 + 71856330] += dword_140404A6C[137297772];
        dword_140404A6C[137297772] = 0;
      }
      else
      {
        sub_1400A2C00((unsigned int)a1, (unsigned int)v8);
      }
      v12 = dword_140404A6C[v2 + 71856330];
      if ( v12 < 0 )
      {
        dword_140404A6C[v2 + 71856330] = 0;
        dword_140404A6C[v2 + 71856331] = 0;
        goto LABEL_23;
      }
      if ( v12 <= 2 )
      {
        if ( !v12 )
        {
          dword_140404A6C[v2 + 71856331] = 0;
          goto LABEL_23;
        }
        if ( v12 == 1 )
        {
          dword_140404A6C[v2 + 71856331] = 1031798784;
          goto LABEL_23;
        }
      }
      else
      {
        dword_140404A6C[v2 + 71856330] = 2;
      }
      dword_140404A6C[v2 + 71856331] = 1056964608;
LABEL_23:
      v13 = *(float *)&dword_140404A6C[v2 + 71856331];
      v14 = -1098907648;
      if ( v13 >= -0.25 )
      {
        v14 = 1061158912;
        if ( v13 <= 0.75 )
          goto LABEL_28;
        dword_140404A6C[v2 + 71856331] = 1061158912;
      }
      else
      {
        dword_140404A6C[v2 + 71856331] = -1098907648;
      }
      v13 = *(float *)&v14;
LABEL_28:
      v15 = *(float *)&dword_140404A6C[284024599];
      v16 = dword_140404A6C[73991627];
      v17 = *(float *)&dword_140404A6C[284024600];
      v18 = *(float *)&dword_140404A6C[284024600];
      *(float *)&v19 = (float)((float)(v13 - *(float *)&dword_140404A6C[v2 + 71856332]) * 0.0625)
                     + *(float *)&dword_140404A6C[v2 + 71856332];
      dword_140404A6C[v2 + 71856332] = v19;
      v20 = v15 * (float)(1.0 - *(float *)&v19);
      v21 = v18 * (float)(1.0 - *(float *)&v19);
      v22 = v20 * 0.001953125;
      if ( v16 )
        v23 = v21 * -0.0009765625;
      else
        v23 = v21 * 0.0009765625;
      v24 = (float)(v22 * 0.5) + *(float *)&dword_140404A6C[v2 + 71856309];
      *(float *)&dword_140404A6C[v2 + 71856310] = (float)(v23 + *(float *)&dword_140404A6C[v2 + 71856310]) * 0.9375;
      *(float *)&dword_140404A6C[v2 + 71856309] = v24 * 0.9375;
      v25 = dword_140404A6C[280648133];
      if ( !dword_140404A6C[280648133] && dword_140404A6C[280649845] )
      {
        v26 = dword_140404A6C[7166 * v5 + 280651357];
        sub_14000B5F0(v9, v10, 0);
        v30 = sub_14000B5F0(v28, v27, v29);
        *(float *)&v31 = v22 + *(float *)&dword_140404A6C[v2 + 71856299];
        v32 = v21 * 0.001953125;
        v33 = (float *)&dword_140404A6C[v2 + 71856300];
        dword_140404A6C[v2 + 71856297] = LODWORD(v30);
        dword_140404A6C[v2 + 71856301] = v26;
        dword_140404A6C[v2 + 71856299] = v31;
        v34 = *(float *)&dword_140404A6C[v2 + 71856300];
        if ( v16 )
          v35 = v34 - v32;
        else
          v35 = v34 + v32;
        v36 = dword_140404A6C[280649843];
        *v33 = v35;
        dword_140404A6C[v2 + 71856325] |= 2u;
LABEL_63:
        v48 = dword_140404A6C[v2 + 71856297];
        goto LABEL_64;
      }
      v36 = dword_140404A6C[280649843];
      if ( v8 == -1
        || (v9 = 7040LL * v8, *(unsigned int *)((char *)&dword_140404A6C[278845898] + v9) != 28)
        && !dword_140404A6C[280649843] )
      {
        v52 = dword_140404A6C[7166 * v5 + 280651357];
        dword_140404A6C[v2 + 71856301] = v52;
        sub_14000B5F0(v9, v10, 0);
        v53 = *(float *)&dword_140404A6C[v2 + 71856298];
        v54 = v21 * 0.001953125;
        if ( v16 )
          v55 = v53 - v54;
        else
          v55 = v53 + v54;
        v33 = (float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&v56 = (float)(*(float *)&dword_140404A6C[v2 + 71856299] * 0.125)
                       + (float)((float)(*(float *)&dword_140404A6C[v2 + 71856297] - *(float *)&v52) + v22);
        v57 = *(float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856299] = *(float *)&dword_140404A6C[v2 + 71856299] * 0.875;
        dword_140404A6C[v2 + 71856297] = v56;
        *(float *)&dword_140404A6C[v2 + 71856300] = v57 * 0.875;
        *(float *)&dword_140404A6C[v2 + 71856298] = (float)(v57 * 0.125) + v55;
        *(_QWORD *)&dword_140404A6C[v2 + 71856364] = 0;
        dword_140404A6C[v2 + 71856366] = 0;
        goto LABEL_63;
      }
      if ( !dword_140404A6C[280649843] )
      {
        sub_1400A1AE0(a1);
        v36 = dword_140404A6C[280649843];
        v25 = dword_140404A6C[280648133];
        v33 = (float *)&dword_140404A6C[v2 + 71856300];
        v49 = *(float *)&dword_140404A6C[v2 + 71856299];
        v50 = *(float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856299] = v49 * 0.875;
        *(float *)&v48 = (float)(v49 * 0.125) + *(float *)&dword_140404A6C[v2 + 71856297];
        *(float *)&v51 = (float)(v50 * 0.125) + *(float *)&dword_140404A6C[v2 + 71856298];
        dword_140404A6C[v2 + 71856297] = v48;
        *(float *)&dword_140404A6C[v2 + 71856300] = v50 * 0.875;
        dword_140404A6C[v2 + 71856298] = v51;
        goto LABEL_64;
      }
      v37 = dword_140404A6C[7166 * v5 + 280651357];
      sub_14000B5F0(v9, v10, 0);
      v38 = *(float *)&dword_140404A6C[v2 + 71856297] - *(float *)&v37;
      dword_140404A6C[v2 + 71856301] = v37;
      if ( v38 < -3.14159265359 )
        v38 = v38 + 6.28318530718;
      if ( v38 > 3.14159265359 )
        v38 = v38 - 6.28318530718;
      v39 = dword_140404A6C[284024633];
      v40 = (float)(v20 * 0.00048828125) + v38;
      *(float *)&dword_140404A6C[v2 + 71856297] = v40;
      if ( !v39 )
        *(float *)&dword_140404A6C[v2 + 71856364] = (float)(*(float *)&dword_140404A6C[73991630] * v17)
                                                  + *(float *)&dword_140404A6C[v2 + 71856364];
      v41 = *(float *)&dword_140404A6C[v2 + 71856364];
      if ( v41 >= -1.570796326795 )
      {
        if ( v41 > 1.570796326795 )
        {
          v41 = 1.5707964;
          dword_140404A6C[v2 + 71856364] = 1070141403;
        }
      }
      else
      {
        v41 = -1.5707964;
        dword_140404A6C[v2 + 71856364] = -1077342245;
      }
      v42 = *(float *)&dword_140404A6C[v2 + 71856365];
      v43 = 0.03125;
      v44 = fmaxf((float)(v41 - v42) * 0.125, -0.03125);
      if ( v44 <= 0.03125 )
        v43 = v44;
      v33 = (float *)&dword_140404A6C[v2 + 71856300];
      *(float *)&v45 = (float)(v43 - (float)(*(float *)&dword_140404A6C[v2 + 71856366] * 0.25))
                     + *(float *)&dword_140404A6C[v2 + 71856366];
      dword_140404A6C[v2 + 71856366] = v45;
      *(float *)&dword_140404A6C[v2 + 71856365] = *(float *)&v45 + v42;
      *(float *)&dword_140404A6C[v2 + 71856300] = v41 * 0.125;
      if ( v39 )
      {
        v46 = *(float *)&dword_140404A6C[v2 + 71856298];
        v47 = v21 * 0.0009765625;
        if ( !v16 )
        {
          *(float *)&v48 = v40;
          *(float *)&dword_140404A6C[v2 + 71856298] = v46 + v47;
LABEL_64:
          if ( *(float *)&v48 >= -2.74889357189125 )
          {
            if ( *(float *)&v48 > 2.74889357189125 )
              dword_140404A6C[v2 + 71856297] = 1076882911;
          }
          else
          {
            dword_140404A6C[v2 + 71856297] = -1070600737;
          }
          v58 = *(float *)&dword_140404A6C[v2 + 71856298];
          if ( v58 >= -1.570796326795 )
          {
            if ( v58 > 1.570796326795 )
              dword_140404A6C[v2 + 71856298] = 1070141403;
          }
          else
          {
            dword_140404A6C[v2 + 71856298] = -1077342245;
          }
          v59 = *(float *)&dword_140404A6C[v2 + 71856299];
          if ( v59 >= -2.74889357189125 )
          {
            if ( v59 > 2.74889357189125 )
              dword_140404A6C[v2 + 71856299] = 1076882911;
          }
          else
          {
            dword_140404A6C[v2 + 71856299] = -1070600737;
          }
          if ( *v33 >= -1.570796326795 )
          {
            if ( *v33 > 1.570796326795 )
              *v33 = 1.5707964;
          }
          else
          {
            *v33 = -1.5707964;
          }
          if ( !v25 )
          {
            if ( BYTE2(dword_140404A6C[284024771]) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] + 1.0;
            if ( BYTE2(dword_140404A6C[284024770]) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] - 1.0;
            if ( LOBYTE(dword_140404A6C[284024766]) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] - 1.0;
            if ( HIBYTE(dword_140404A6C[284024766]) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] + 1.0;
            if ( LOBYTE(dword_140404A6C[284024776]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 4u;
            if ( v36 )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( dword_140404A6C[284024356] && dword_140404A6C[285101134] )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( BYTE1(dword_140404A6C[284024770]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x1000u;
            if ( LOBYTE(dword_140404A6C[284024784]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x40000u;
            if ( BYTE1(dword_140404A6C[284024821]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x10u;
            if ( LOBYTE(dword_140404A6C[284024821]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 8u;
            if ( BYTE1(dword_140404A6C[284024772]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x80000u;
            if ( v8 != -1 )
            {
              v60 = 1760LL * v8;
              if ( ((dword_140404A6C[v60 + 278845898] - 25) & 0xFFFFFFF7) == 0 && dword_140404A6C[v60 + 278846052] == 1 )
                sub_1400A2DC0((unsigned int)a1, (unsigned int)v8);
            }
            if ( LOBYTE(dword_140404A6C[284024767]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x800u;
            if ( BYTE1(dword_140404A6C[284024767]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x2000u;
          }
          sub_14009EA20(a1, v61);
          return;
        }
        *(float *)&dword_140404A6C[v2 + 71856298] = v46 - v47;
      }
      *(float *)&v48 = v40;
      goto LABEL_64;
    }
  }
}

