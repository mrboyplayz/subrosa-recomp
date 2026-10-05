/* Address: 0x14012e620 | Name: sub_14012E620 | Size: 818 bytes */
_UNKNOWN **__fastcall sub_14012E620(signed int a1, int a2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // r15d
  __int64 v4; // rsi
  int v5; // r12d
  int v6; // ebx
  int v7; // ebx
  char v8; // al
  int v9; // edi
  int v10; // r14d
  int v11; // ebp
  int v12; // edx
  int i; // ebx
  unsigned int v14; // xmm6_4
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // xmm7_4
  unsigned int *v18; // rax
  unsigned int v19; // xmm8_4
  unsigned int v20; // xmm9_4
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // xmm1_4
  __int64 v25; // rbx
  unsigned int v26[4]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD v27[2]; // [rsp+30h] [rbp-D8h] BYREF
  int v28; // [rsp+50h] [rbp-B8h]
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a1;
  v4 = 14019LL * a1;
  v5 = a2;
  if ( (int)dword_140404A6C[v4 + 225641327] > 0 )
  {
    MEMORY[0x1401FCD30](&dword_140404A6C[19063789], 0, 256);
    v6 = rand() & 1;
    v7 = (rand() & 1) + v6;
    v8 = rand();
    v9 = dword_140404A6C[v4 + 225641327];
    v10 = v9;
    if ( (v8 & 1) + v7 + 2 <= v9 )
      v10 = (v8 & 1) + v7 + 2;
    v11 = 0;
    if ( v10 > 0 )
    {
      do
      {
        v12 = 0;
        if ( v9 > 0 )
        {
          v9 = dword_140404A6C[v4 + 225641327];
          v12 = rand() % v9;
          for ( i = 0; i < 512; ++i )
          {
            if ( !dword_140404A6C[v12 + 19063789] )
              break;
            v9 = dword_140404A6C[v4 + 225641327];
            v12 = rand() % v9;
          }
        }
        v14 = 0;
        dword_140404A6C[v12 + 19063789] = 1;
        v15 = v4 * 4 + 788LL * v12;
        v16 = *(unsigned int *)((char *)&dword_140404A6C[225641331] + v15);
        switch ( v16 )
        {
          case 1:
            v14 = 1070141403;
            break;
          case 2:
            v14 = 1078530011;
            break;
          case 3:
            v14 = -1077342245;
            break;
        }
        v17 = *(unsigned int *)((char *)&dword_140404A6C[225641328] + v15);
        v18 = &dword_140404A6C[133450253];
        v19 = *(unsigned int *)((char *)&dword_140404A6C[225641329] + v15);
        v20 = *(unsigned int *)((char *)&dword_140404A6C[225641330] + v15);
        v21 = 0;
        v22 = 0;
        while ( *v18 )
        {
          ++v21;
          ++v22;
          v18 += 202;
          if ( (__int64)v18 >= (__int64)&dword_140404A6C[133657101] )
            goto LABEL_21;
        }
        if ( v21 != -1 )
        {
          MEMORY[0x1401FCD30](&dword_140404A6C[202 * v21 + 133450253], 0, 808);
          v23 = 202 * v22;
          *(_QWORD *)&dword_140404A6C[v23 + 133450253] = 1;
          dword_140404A6C[v23 + 133450258] = v17;
          dword_140404A6C[v23 + 133450259] = v19;
          dword_140404A6C[v23 + 133450260] = v20;
          dword_140404A6C[v23 + 133450261] = v14;
          *(_QWORD *)&dword_140404A6C[v23 + 133450255] = -1;
        }
LABEL_21:
        ++v11;
      }
      while ( v11 < v10 );
      v3 = a1;
      v5 = a2;
    }
    v24 = dword_140404A6C[v4 + 225653937];
    v26[0] = dword_140404A6C[v4 + 225653936];
    v26[2] = dword_140404A6C[v4 + 225653938];
    v26[1] = v24;
    v28 = 1065353216;
    v27[0] = xmmword_140278D30;
    v27[1] = xmmword_140278D30;
    v25 = (int)sub_140054130(v5, v26, nullptr, (unsigned int *)v27);
    result = (_UNKNOWN **)sub_140050EF0(0x168u);
    dword_140404A6C[487148744] = v25;
    dword_140404A6C[487148753] = v3;
    dword_140404A6C[1760 * v25 + 278846098] = (unsigned int)result;
  }
  return result;
}

