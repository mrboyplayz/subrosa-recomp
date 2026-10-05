/* Address: 0x1400a83b0 | Name: sub_1400A83B0 | Size: 545 bytes */
void sub_1400A83B0()
{
  unsigned int v0; // esi
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  float v5; // xmm6_4
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rax
  float v9; // xmm2_4
  unsigned int *v10; // rbx
  float *v11; // rbp
  float *v12; // r14
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16[4]; // [rsp+20h] [rbp-38h] BYREF

  v0 = -1;
  dword_140404A6C[282486845] = -1;
  if ( dword_140404A6C[284024501] != -1 )
  {
    v1 = 3597LL * (int)dword_140404A6C[284024501];
    v2 = (int)dword_140404A6C[v1 + 71856292];
    if ( (_DWORD)v2 != -1 )
    {
      v3 = 7166 * v2;
      if ( dword_140404A6C[7166 * v2 + 280651313] == -1 )
      {
        v4 = dword_140404A6C[v1 + 71856325] & 0x10;
        v5 = 0.5;
        v6 = 0;
        v7 = (v4 != 0 ? 0x28 : 0) + v3 * 4;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v7) <= 0 )
          goto LABEL_8;
        v8 = 10;
        if ( v4 )
          v8 = 0;
        if ( (int)dword_140404A6C[v3 + 280658139 + v8] <= 0 )
        {
LABEL_8:
          v9 = *(float *)&dword_140404A6C[v3 + 280651694];
          v10 = &dword_140404A6C[278845902];
          v11 = (float *)&dword_140404A6C[278845916];
          v12 = (float *)&dword_140404A6C[v3 + 280651674];
          v13 = *(float *)&dword_140404A6C[v3 + 280651693] * 1.5;
          v16[0] = *(float *)&dword_140404A6C[v3 + 280651674]
                 - (float)(*(float *)&dword_140404A6C[v3 + 280651692] * 1.5);
          v16[1] = *(float *)&dword_140404A6C[v3 + 280651675] - v13;
          v16[2] = *(float *)&dword_140404A6C[v3 + 280651676] - (float)(v9 * 1.5);
          do
          {
            if ( *(v10 - 9) )
            {
              if ( *v10 == -1 )
              {
                v14 = (int)v10[1];
                if ( (_DWORD)v14 == -1 || dword_140404A6C[1760 * v14 + 278845902] == -1 )
                {
                  v15 = sub_14007ABA0(v12, v16, v11);
                  if ( v15 < v5 )
                  {
                    v0 = v6;
                    v5 = v15;
                  }
                }
              }
            }
            ++v6;
            v11 += 1760;
            v10 += 1760;
          }
          while ( v6 < 1024 );
          dword_140404A6C[282486845] = v0;
          if ( v0 != -1 && *(int *)((char *)&dword_140404A6C[280658139] + v7) > 0 )
          {
            if ( !dword_140404A6C[1268
                                * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v7)
                                                + 278845898]
                                + 278521356
                                + dword_140404A6C[1760 * v0 + 278845898]] )
              v0 = -1;
            dword_140404A6C[282486845] = v0;
          }
        }
      }
    }
  }
}

