/* Address: 0x140008020 | Name: sub_140008020 | Size: 1048 bytes */
void sub_140008020()
{
  unsigned int *v0; // r8
  unsigned int *v1; // r12
  int v2; // r13d
  __int64 v3; // r9
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r10
  float v7; // xmm2_4
  float v8; // xmm3_4
  __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rax
  float v12; // xmm1_4
  __int64 v13; // rax
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned int *v19; // rbp
  __int64 v20; // rsi
  unsigned int *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx

  v0 = nullptr;
  v1 = &dword_140404A6C[133450256];
  v2 = 0;
  v3 = (__int64)&dword_140404A6C[280658140];
  do
  {
    if ( *(v1 - 3) )
    {
      v4 = v1[1];
      if ( v4 > 0 )
        v1[1] = --v4;
      if ( (((unsigned __int8)v2 ^ LOBYTE(dword_140404A6C[283831474])) & 0x1F) == 0 )
      {
        v5 = 0;
        if ( !v4 )
        {
          v6 = (int)*v1;
          if ( (_DWORD)v6 == -1 )
          {
            v7 = *((float *)v1 + 2);
            v8 = *((float *)v1 + 4);
          }
          else
          {
            v7 = *(float *)&dword_140404A6C[7166 * v6 + 280651335];
            v8 = *(float *)&dword_140404A6C[7166 * v6 + 280651337];
          }
          v0 = &dword_140404A6C[280658608];
          v3 = 64;
          do
          {
            if ( *(v0 - 7305) )
            {
              v9 = (int)*(v0 - 7303);
              if ( (_DWORD)v9 != -1 && !dword_140404A6C[3597 * v9 + 71859139] && (int)*(v0 - 7290) > 0 && (int)v5 < 2 )
              {
                v10 = (float)((float)(v8 - *((float *)v0 - 7166)) * (float)(v8 - *((float *)v0 - 7166)))
                    + (float)((float)(v7 - *((float *)v0 - 7168)) * (float)(v7 - *((float *)v0 - 7168)));
                if ( v10 >= 9216.0 )
                {
                  if ( v10 < 10816.0 )
                    v5 = 1;
                }
                else
                {
                  v5 = 2;
                }
              }
            }
            if ( *(v0 - 139) )
            {
              v11 = (int)*(v0 - 137);
              if ( (_DWORD)v11 != -1 && !dword_140404A6C[3597 * v11 + 71859139] && (int)*(v0 - 124) > 0 && (int)v5 < 2 )
              {
                v12 = (float)((float)(v8 - *(float *)v0) * (float)(v8 - *(float *)v0))
                    + (float)((float)(v7 - *((float *)v0 - 2)) * (float)(v7 - *((float *)v0 - 2)));
                if ( v12 >= 9216.0 )
                {
                  if ( v12 < 10816.0 )
                    v5 = 1;
                }
                else
                {
                  v5 = 2;
                }
              }
            }
            if ( v0[7027] )
            {
              v13 = (int)v0[7029];
              if ( (_DWORD)v13 != -1 && !dword_140404A6C[3597 * v13 + 71859139] && (int)v0[7042] > 0 && (int)v5 < 2 )
              {
                v14 = (float)((float)(v8 - *((float *)v0 + 7166)) * (float)(v8 - *((float *)v0 + 7166)))
                    + (float)((float)(v7 - *((float *)v0 + 7164)) * (float)(v7 - *((float *)v0 + 7164)));
                if ( v14 >= 9216.0 )
                {
                  if ( v14 < 10816.0 )
                    v5 = 1;
                }
                else
                {
                  v5 = 2;
                }
              }
            }
            if ( v0[14193] )
            {
              v15 = (int)v0[14195];
              if ( (_DWORD)v15 != -1 && !dword_140404A6C[3597 * v15 + 71859139] && (int)v0[14208] > 0 && (int)v5 < 2 )
              {
                v16 = (float)((float)(v8 - *((float *)v0 + 14332)) * (float)(v8 - *((float *)v0 + 14332)))
                    + (float)((float)(v7 - *((float *)v0 + 14330)) * (float)(v7 - *((float *)v0 + 14330)));
                if ( v16 >= 9216.0 )
                {
                  if ( v16 < 10816.0 )
                    v5 = 1;
                }
                else
                {
                  v5 = 2;
                }
              }
            }
            v0 += 28664;
            --v3;
          }
          while ( v3 );
          if ( (_DWORD)v5 == 2 )
          {
            if ( (_DWORD)v6 != -1 )
              goto LABEL_65;
            sub_140007C90(v2);
LABEL_64:
            LODWORD(v6) = *v1;
            if ( *v1 == -1 )
            {
LABEL_69:
              v0 = nullptr;
              v3 = (__int64)&dword_140404A6C[280658140];
              goto LABEL_70;
            }
LABEL_65:
            if ( (int)dword_140404A6C[7166 * (int)v6 + 280651318] <= 0 )
            {
              v24 = *(v1 - 1);
              *v1 = -1;
              if ( (_DWORD)v24 != -1 )
              {
                sub_1400802F0(v24, v5, v0, v3);
                *(v1 - 1) = -1;
              }
              v1[1] = 18000;
            }
            goto LABEL_69;
          }
          if ( (_DWORD)v5 )
            goto LABEL_64;
          v0 = nullptr;
          v3 = (__int64)&dword_140404A6C[280658140];
        }
        v17 = (int)*v1;
        if ( (_DWORD)v17 != -1 )
        {
          v18 = 8;
          v19 = &dword_140404A6C[7166 * v17 + 280658140];
          do
          {
            v20 = (int)*(v19 - 1);
            if ( v20 > 0 )
            {
              v21 = v19;
              do
              {
                v5 = (int)*v21;
                v22 = 1760 * v5;
                if ( (int)dword_140404A6C[1760 * v5 + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[v22 + 278845907] + 278845900] = 0;
                  sub_1400CA9B0(dword_140404A6C[v22 + 278845907], v5, 0, v3);
                }
                ++v21;
                dword_140404A6C[v22 + 278845900] = 0;
                --v20;
              }
              while ( v20 );
            }
            v19 += 10;
            --v18;
          }
          while ( v18 );
          sub_14007F590(*v1, v5, 0, v3);
          *v1 = -1;
        }
        v23 = *(v1 - 1);
        if ( (_DWORD)v23 != -1 )
        {
          sub_1400802F0(v23, v5, v0, v3);
          *(v1 - 1) = -1;
        }
        goto LABEL_64;
      }
    }
LABEL_70:
    ++v2;
    v1 += 202;
  }
  while ( v2 < 1024 );
}

