/* Address: 0x1400ca7c0 | Name: sub_1400CA7C0 | Size: 493 bytes */
void __fastcall sub_1400CA7C0(int a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // rsi
  float v7; // xmm2_4
  unsigned int v8; // xmm4_4
  unsigned int v9; // xmm3_4
  float v10; // xmm0_4
  unsigned int v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // r8d
  __int64 v15; // r11
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned int *v21; // rcx

  v3 = a1;
  v4 = a3;
  if ( a1 != -1 && a2 != -1 )
  {
    v5 = 1760LL * a1;
    v6 = a2;
    if ( (int)dword_140404A6C[v5 + 278845904] >= 2 )
    {
      v7 = *(float *)&dword_140404A6C[7166 * a2 + 280651598];
      *(float *)&v8 = *(float *)&dword_140404A6C[7166 * a2 + 280651596]
                    - (float)(*(float *)&dword_140404A6C[7166 * a2 + 280651611] * 0.25);
      *(float *)&v9 = *(float *)&dword_140404A6C[7166 * a2 + 280651597]
                    - (float)(*(float *)&dword_140404A6C[7166 * a2 + 280651612] * 0.25);
      dword_140404A6C[v5 + 278845916] = v8;
      v10 = *(float *)&dword_140404A6C[7166 * a2 + 280651613] * 0.25;
      dword_140404A6C[v5 + 278845917] = v9;
      *(float *)&v11 = v7 - v10;
      dword_140404A6C[v5 + 278845918] = v11;
      v12 = 47LL * (int)dword_140404A6C[v5 + 278845915];
      dword_140404A6C[v12 + 18215715] = v8;
      dword_140404A6C[v12 + 18215716] = v9;
      dword_140404A6C[v12 + 18215717] = v11;
    }
    v13 = a3;
    v14 = 0;
    dword_140404A6C[v5 + 278845919] = dword_140404A6C[7166 * a2 + 280651596];
    dword_140404A6C[v5 + 278845920] = dword_140404A6C[7166 * a2 + 280651597];
    dword_140404A6C[v5 + 278845921] = dword_140404A6C[7166 * a2 + 280651598];
    v15 = 28664LL * a2 + 40 * v4;
    v16 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v15);
    if ( v16 > 0 )
    {
      v17 = 5 * v13;
      v18 = dword_140404A6C[456202453];
      v19 = 10 * v13;
      v20 = 7166 * v6;
      v21 = &dword_140404A6C[2 * v17 + 280658140 + v20];
      do
      {
        if ( *v21 == (_DWORD)v3 )
        {
          dword_140404A6C[v5 + 278845902] = -1;
          *(unsigned int *)((char *)&dword_140404A6C[280658139] + v15) = v16 - 1;
          *v21 = dword_140404A6C[v20 + 280658139 + v19 + v16];
          if ( v18 )
          {
            if ( (unsigned int)v3 <= 0x3FF )
              ++dword_140404A6C[v3 + 280648157];
          }
        }
        else
        {
          ++v14;
          ++v21;
        }
        v16 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v15);
      }
      while ( v14 < v16 );
    }
  }
}

