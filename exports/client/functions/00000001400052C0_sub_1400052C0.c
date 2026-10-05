/* Address: 0x1400052c0 | Name: sub_1400052C0 | Size: 556 bytes */
__int64 __fastcall sub_1400052C0(
        int a1,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        float a6,
        unsigned int a7,
        float a8,
        unsigned int a9)
{
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rbp
  int v14; // r10d
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  float v18; // xmm3_4
  float v19; // xmm0_4

  v9 = a1;
  result = (__int64)&dword_140404A6C[486149253];
  v11 = a2;
  v14 = 0;
  while ( *(_DWORD *)result )
  {
    ++v14;
    result += 244;
    if ( result >= (__int64)&dword_140404A6C[487148677] )
      return result;
  }
  if ( v14 != -1 )
  {
    v15 = v14;
    v16 = 61LL * v14;
    MEMORY[0x1401FCD30](&dword_140404A6C[v16 + 486149254], 0, 240);
    v17 = 18 * v15;
    dword_140404A6C[v16 + 486149253] = 1;
    dword_140404A6C[v16 + 486149254] = 6;
    *(_QWORD *)&dword_140404A6C[v16 + 486149256] = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543029] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543033] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543037] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543041] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543045] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543049] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543053] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v17 + 485543057] + 2) = 0;
    *(_QWORD *)((char *)&dword_140404A6C[2 * v17 + 485543061] + 2) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[2 * v17 + 485543063] + 2) = 0;
    HIWORD(dword_140404A6C[2 * v17 + 485543064]) = 0;
    LOWORD(dword_140404A6C[2 * v17 + 485543029]) = v9;
    HIWORD(dword_140404A6C[2 * v17 + 485543029]) = v11;
    dword_140404A6C[2 * v17 + 485543037] = *a3;
    dword_140404A6C[2 * v17 + 485543038] = a3[1];
    dword_140404A6C[2 * v17 + 485543039] = a3[2];
    dword_140404A6C[2 * v17 + 485543040] = *a4;
    dword_140404A6C[2 * v17 + 485543041] = a4[1];
    dword_140404A6C[2 * v17 + 485543042] = a4[2];
    dword_140404A6C[2 * v17 + 485543033] = *a5;
    dword_140404A6C[2 * v17 + 485543034] = a5[1];
    result = a5[2];
    dword_140404A6C[2 * v17 + 485543035] = result;
    *(float *)&dword_140404A6C[2 * v17 + 485543036] = a6 * a8;
    dword_140404A6C[2 * v17 + 485543046] = a9;
    dword_140404A6C[2 * v17 + 485543047] = a7;
    v18 = *(float *)&dword_140404A6C[47 * v9 + 18215714];
    v19 = *(float *)&dword_140404A6C[47 * v11 + 18215714] + v18;
    *(float *)&dword_140404A6C[2 * v17 + 485543044] = *(float *)&dword_140404A6C[47 * v11 + 18215714]
                                                    * (float)(1.0 / v19);
    *(float *)&dword_140404A6C[2 * v17 + 485543045] = v18 * (float)(1.0 / v19);
  }
  return result;
}

