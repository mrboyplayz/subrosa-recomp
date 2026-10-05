/* Address: 0x1401048e0 | Name: sub_1401048E0 | Size: 1012 bytes */
FILE *__fastcall sub_1401048E0(__int64 a1, unsigned int a2, __int64 a3)
{
  FILE *result; // rax
  FILE *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int *v9; // r10
  signed int v10; // r8d
  unsigned int *v11; // r11
  unsigned int *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm2_4
  unsigned int v18; // xmm3_4
  unsigned int v19; // xmm4_4
  signed int v20; // ecx
  float *v21; // rax
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm0_4

  result = (FILE *)MEMORY[0x14020B8D8](a3, "rb");
  v5 = result;
  if ( result )
  {
    sub_140091310(result, 0);
    sub_14020B9E8(v5);
    dword_140404A6C[177167565] = dword_140404A6C[160294486];
    if ( (int)dword_140404A6C[160294486] > 0 )
    {
      v6 = 0;
      v7 = dword_140404A6C[160294486];
      do
      {
        dword_140404A6C[v6 + 177167567] = dword_140404A6C[v6 + 160294487];
        dword_140404A6C[v6 + 177167568] = dword_140404A6C[v6 + 160294488];
        dword_140404A6C[v6 + 177167569] = dword_140404A6C[v6 + 160294489];
        v6 += 3;
        --v7;
      }
      while ( v7 );
    }
    v8 = 0;
    dword_140404A6C[177495247] = 0;
    if ( (int)dword_140404A6C[160343639] > 0 )
    {
      v9 = &dword_140404A6C[160409177];
      v10 = dword_140404A6C[159842357];
      v11 = &dword_140404A6C[160392792];
      v12 = &dword_140404A6C[160343641];
      v13 = dword_140404A6C[160343639];
      do
      {
        dword_140404A6C[3 * v8 + 177495248] = *(v12 - 1);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v12;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v12[1];
        v14 = (int)*v11;
        if ( (unsigned int)v14 > 0xFF )
        {
          *(float *)&v23 = (float)(*(float *)v9 * 0.75) + 0.25;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 1);
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = v23;
          *(float *)&v24 = (float)(*((float *)v9 + 2) * 0.75) + 0.25;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = v9[1];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = v24;
          *(float *)&v25 = (float)(*((float *)v9 + 4) * 0.75) + 0.25;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v9[3];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = v25;
        }
        else
        {
          v15 = dword_140404A6C[6 * v14 + 160292955];
          v16 = dword_140404A6C[6 * v14 + 160292954];
          v17 = dword_140404A6C[6 * v14 + 160292952];
          v18 = dword_140404A6C[6 * v14 + 160292951];
          v19 = dword_140404A6C[6 * v14 + 160292950];
          v20 = 0;
          if ( v10 <= 0 )
          {
LABEL_16:
            if ( v10 <= 0x10000 )
            {
              dword_140404A6C[6 * v10 + 159842358] = v19;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842359] = v18;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842360] = v17;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842362] = v16;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842363] = v15;
              v10 = dword_140404A6C[159842357] + 1;
              dword_140404A6C[159842357] = v10;
              LOBYTE(v20) = v10 - 1;
            }
            else
            {
              LOBYTE(v20) = 0;
            }
          }
          else
          {
            v21 = (float *)&dword_140404A6C[159842359];
            while ( *(float *)&v19 != *(v21 - 1)
                 || *(float *)&v18 != *v21
                 || *(float *)&v17 != v21[1]
                 || *(float *)&v16 != v21[3]
                 || *(float *)&v15 != v21[4] )
            {
              ++v20;
              v21 += 6;
              if ( v20 >= v10 )
                goto LABEL_16;
            }
          }
          *(float *)&v22 = (float)((float)(v20 & 0xF) * 0.03125) + 0.015625;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 1065353216;
        }
        v12 += 3;
        v8 = dword_140404A6C[177495247] + 1;
        ++v11;
        v9 += 6;
        ++dword_140404A6C[177495247];
        --v13;
      }
      while ( v13 );
    }
    return (FILE *)sub_1401449C0(a2, 1);
  }
  return result;
}

