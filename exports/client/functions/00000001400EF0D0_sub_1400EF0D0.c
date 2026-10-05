/* Address: 0x1400ef0d0 | Name: sub_1400EF0D0 | Size: 2214 bytes */
void __fastcall sub_1400EF0D0(signed int a1, int a2, int a3)
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
  unsigned int v28; // ecx
  __int64 v29; // r12
  unsigned int v30; // ebx
  unsigned int *v31; // rbx
  unsigned int v32; // esi
  int v33; // ebx
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm0_4
  signed int v36; // eax
  signed int v37; // r13d
  __int64 v38; // rdx
  int i; // ebp
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rbp
  int v44; // r15d
  signed int v45; // esi
  __int64 v46; // rdx
  BOOL v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // xmm1_4
  unsigned int v51; // xmm0_4
  signed int v52; // eax
  __int64 v53; // r10
  __int64 v54; // r12
  int v55; // ebx
  unsigned int *v56; // rsi
  __int64 v57; // r8
  __int64 v58; // rdx
  unsigned int *v59; // rax
  __int64 v60; // [rsp+20h] [rbp-88h]
  __int64 v61; // [rsp+28h] [rbp-80h]
  unsigned int v62; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+34h] [rbp-74h]
  unsigned int v64; // [rsp+38h] [rbp-70h]
  __int128 v65; // [rsp+40h] [rbp-68h] BYREF
  __int128 v66; // [rsp+50h] [rbp-58h]
  int v67; // [rsp+60h] [rbp-48h]
  int v69; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v4 = 3597LL * a1;
  v7 = (int)dword_140404A6C[v4 + 71856292];
  v69 = v7;
  if ( (_DWORD)v7 != -1 )
  {
    v8 = 0;
    v9 = 7166 * v7;
    v60 = (int)dword_140404A6C[v4 + 71856292];
    v10 = 1;
    v11 = *(float *)&dword_140404A6C[7166 * v7 + 280651335];
    if ( v11 < *(float *)&dword_140404A6C[283831485]
      || v11 >= *(float *)&dword_140404A6C[283831488]
      || (v12 = *(float *)&dword_140404A6C[7166 * v7 + 280651337], v12 < *(float *)&dword_140404A6C[283831487])
      || (v13 = 1, v12 >= *(float *)&dword_140404A6C[283831490]) )
    {
      v13 = 0;
    }
    v14 = 0;
    if ( !v13 )
      v14 = -1;
    if ( v11 < *(float *)&dword_140404A6C[283837358]
      || v11 >= *(float *)&dword_140404A6C[283837361]
      || (v15 = *(float *)&dword_140404A6C[v9 + 280651337], v15 < *(float *)&dword_140404A6C[283837360])
      || (v16 = 1, v15 >= *(float *)&dword_140404A6C[283837363]) )
    {
      v16 = 0;
    }
    v17 = 1;
    if ( !v16 )
      v17 = v14;
    if ( v11 < *(float *)&dword_140404A6C[283843231]
      || v11 >= *(float *)&dword_140404A6C[283843234]
      || (v18 = *(float *)&dword_140404A6C[v9 + 280651337], v18 < *(float *)&dword_140404A6C[283843233])
      || (v19 = 1, v18 >= *(float *)&dword_140404A6C[283843236]) )
    {
      v19 = 0;
    }
    v20 = 2;
    if ( !v19 )
      v20 = v17;
    if ( v11 < *(float *)&dword_140404A6C[283849104]
      || v11 >= *(float *)&dword_140404A6C[283849107]
      || (v21 = *(float *)&dword_140404A6C[v9 + 280651337], v21 < *(float *)&dword_140404A6C[283849106])
      || (v22 = 1, v21 >= *(float *)&dword_140404A6C[283849109]) )
    {
      v22 = 0;
    }
    v23 = 3;
    if ( !(_DWORD)v22 )
      v23 = v20;
    if ( v11 < *(float *)&dword_140404A6C[283854977]
      || v11 >= *(float *)&dword_140404A6C[283854980]
      || (v24 = *(float *)&dword_140404A6C[v9 + 280651337], v24 < *(float *)&dword_140404A6C[283854979])
      || (v25 = 1, v24 >= *(float *)&dword_140404A6C[283854982]) )
    {
      v25 = 0;
    }
    v26 = 4;
    if ( !v25 )
      v26 = v23;
    if ( v11 >= *(float *)&dword_140404A6C[283860850] && v11 < *(float *)&dword_140404A6C[283860853] )
    {
      v27 = *(float *)&dword_140404A6C[v9 + 280651337];
      if ( v27 >= *(float *)&dword_140404A6C[283860852] && v27 < *(float *)&dword_140404A6C[283860855] )
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
              dword_140404A6C[v4 + 71856342] = 22;
              break;
            case 2u:
              dword_140404A6C[v4 + 71856342] = 23;
              break;
            case 3u:
              dword_140404A6C[v4 + 71856342] = 24;
              break;
            case 4u:
              dword_140404A6C[v4 + 71856342] = 25;
              break;
          }
        }
        else
        {
          dword_140404A6C[v4 + 71856342] = 21;
        }
        return;
      }
      if ( a2 == 24 && dword_140404A6C[v4 + 71856286] == v26 && !a3 )
      {
        sub_140138430(v3, 17);
        sub_140051DC0(v3);
      }
      v28 = dword_140404A6C[v4 + 71856286];
      v29 = v26;
      if ( v28 == v26 && dword_140404A6C[5873 * v26 + 283831510] == v3 )
      {
        if ( a2 == 22 )
        {
          v30 = a3 >> 16;
          if ( (_BYTE)a3 == 3 )
          {
            sub_140138430(v30, (unsigned int)v26);
            sub_140051DC0(v30);
            sub_1400F3B30(v30);
            v31 = &dword_140404A6C[5873 * v26 + 283831588];
            do
            {
              if ( *v31 )
                sub_140051BD0(v26, v8);
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
          if ( v32 != v3 && dword_140404A6C[3597 * v32 + 71856286] == v26 )
          {
            sub_140138430(v32, 17);
            sub_140051DC0(v32);
          }
          return;
        }
      }
      if ( a2 == 25 )
      {
        if ( v28 != v26 )
          return;
        v61 = 5873LL * v26;
        if ( dword_140404A6C[v61 + 283831510] == -1 )
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
              if ( a3 == 2 && (int)dword_140404A6C[7166 * v60 + 280658139] > 0 )
              {
                v42 = (int)dword_140404A6C[7166 * v60 + 280658140];
                v43 = 1760 * v42;
                if ( dword_140404A6C[1760 * v42 + 278845898] == 18 )
                {
                  dword_140404A6C[5 * v29 + 188872237] += sub_1400C3D10(v42);
                  dword_140404A6C[v43 + 278845900] = 0;
                }
              }
              if ( dword_140404A6C[v61 + 283831510] == v3 && (unsigned int)(a3 - 3) <= 2 )
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
                v45 = dword_140404A6C[5 * v29 + 188872237] - dword_1402B2960[v44];
                if ( v45 >= (signed int)-dword_140404A6C[5 * v29 + 188872238] )
                {
                  v46 = 7166 * v60;
                  v47 = 0;
                  if ( (int)dword_140404A6C[7166 * v60 + 280658139] > 0 )
                    v47 = dword_140404A6C[1760 * dword_140404A6C[v46 + 280658140] + 278845898] != 18;
                  v48 = v46 * 4 + 40LL * v47;
                  if ( *(int *)((char *)&dword_140404A6C[280658139] + v48) <= 0 )
                  {
                    v50 = dword_140404A6C[v46 + 280651336];
                    v62 = dword_140404A6C[v46 + 280651335];
                    v51 = dword_140404A6C[v46 + 280651337];
                    v63 = v50;
                    v64 = v51;
                    v65 = xmmword_140278D30;
                    v67 = 1065353216;
                    v66 = xmmword_140278D30;
                    v52 = sub_140054130(18, &v62, nullptr, (unsigned int *)&v65);
                    v53 = 1760LL * v52;
                    dword_140404A6C[v53 + 278846062] = 0;
                    dword_140404A6C[v53 + 278846063] = v44;
                    sub_1400E35D0(v52, -1, v69, v47);
                    dword_140404A6C[5 * v29 + 188872237] -= dword_1402B2960[v44];
                  }
                  else
                  {
                    v49 = *(int *)((char *)&dword_140404A6C[280658140] + v48);
                    if ( dword_140404A6C[1760 * v49 + 278845898] == 18 && (unsigned int)sub_1400C3AB0(v49, 0, v44) )
                      dword_140404A6C[5 * v29 + 188872237] = v45;
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
        if ( (int)dword_140404A6C[v4 + 71856279] < 10 )
        {
          if ( v33 == 25 )
            sub_1400F3D10((unsigned int)v26, v22, v10);
          v34 = dword_140404A6C[v9 + 280651336];
          v62 = dword_140404A6C[v9 + 280651335];
          v35 = dword_140404A6C[v9 + 280651337];
          v63 = v34;
          v64 = v35;
          v65 = xmmword_140278D30;
          v67 = 1065353216;
          v66 = xmmword_140278D30;
          v36 = sub_140054130(v33, &v62, nullptr, (unsigned int *)&v65);
          v37 = v36;
          if ( v36 != -1 )
          {
            switch ( v33 )
            {
              case 19:
                dword_140404A6C[1760 * v36 + 278846098] = sub_140050EF0(0x168u);
                break;
              case 26:
                dword_140404A6C[1760 * v36 + 278846111] = v26;
                break;
              case 25:
                v38 = 1760LL * v36;
                dword_140404A6C[v38 + 278846051] = 0;
                dword_140404A6C[v38 + 278845981] = 1111 * (v26 + 1);
                sub_140051940((unsigned int)v36);
                break;
            }
            for ( i = 0; i < 7; ++i )
            {
              if ( (unsigned int)sub_1400E35D0(v37, -1, v69, i) )
                break;
            }
            v40 = dword_140404A6C[5 * v29 + 188872237];
            if ( v33 == 25 )
              v41 = v40 - 100;
            else
              v41 = v40 - dword_140404A6C[1268 * v33 + 278521286];
            ++dword_140404A6C[v4 + 71856279];
            v3 = a1;
            dword_140404A6C[5 * v29 + 188872237] = v41;
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
            if ( dword_140404A6C[v57 + 283831510] != -1 )
            {
              v58 = (int)dword_140404A6C[v57 + 283837293];
              if ( (int)v58 <= 0 )
              {
LABEL_143:
                if ( (int)v58 < 32 )
                {
                  dword_140404A6C[5873 * v26 + 283837294 + v58] = v3;
                  ++dword_140404A6C[v57 + 283837293];
                }
              }
              else
              {
                v59 = &dword_140404A6C[v57 + 283837294];
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
          if ( dword_140404A6C[v54 + 283831510] == -1 )
          {
            sub_1400F3B30(v3);
            sub_140138430(v3, (unsigned int)v26);
            sub_1400F45A0((unsigned int)v26, v3);
            dword_140404A6C[v4 + 71856342] = 25;
            sub_140051DC0(v3);
            v55 = 0;
            v56 = &dword_140404A6C[v54 + 283831588];
            do
            {
              if ( *v56 )
                sub_140051BD0(v26, v55);
              ++v55;
              v56 += 279;
            }
            while ( v55 < 16 );
            dword_140404A6C[v54 + 283837293] = 0;
          }
        }
      }
    }
  }
}

