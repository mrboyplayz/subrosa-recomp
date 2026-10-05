/* Address: 0x140005160 | Name: sub_140005160 | Size: 344 bytes */
__int64 __fastcall sub_140005160(
        __int16 a1,
        unsigned int *a2,
        unsigned int *a3,
        float a4,
        unsigned int a5,
        float a6,
        unsigned int a7)
{
  __int64 result; // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx

  result = (__int64)&dword_140404A6C[486149253];
  v11 = 0;
  while ( *(_DWORD *)result )
  {
    ++v11;
    result += 244;
    if ( result >= (__int64)&dword_140404A6C[487148677] )
      return result;
  }
  if ( v11 != -1 )
  {
    v12 = v11;
    v13 = 61LL * v11;
    MEMORY[0x1401FCD30](&dword_140404A6C[v13 + 486149254], 0, 240);
    dword_140404A6C[v13 + 486149253] = 1;
    v14 = 18 * v12;
    dword_140404A6C[v13 + 486149254] = 5;
    *(_QWORD *)&dword_140404A6C[v13 + 486149256] = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543029] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543033] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543037] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543041] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543045] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543049] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543053] + 2) = 0;
    *(_OWORD *)((char *)&dword_140404A6C[2 * v14 + 485543057] + 2) = 0;
    *(_QWORD *)((char *)&dword_140404A6C[2 * v14 + 485543061] + 2) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[2 * v14 + 485543063] + 2) = 0;
    HIWORD(dword_140404A6C[2 * v14 + 485543064]) = 0;
    LOWORD(dword_140404A6C[2 * v14 + 485543029]) = a1;
    dword_140404A6C[2 * v14 + 485543037] = *a2;
    dword_140404A6C[2 * v14 + 485543038] = a2[1];
    dword_140404A6C[2 * v14 + 485543039] = a2[2];
    dword_140404A6C[2 * v14 + 485543033] = *a3;
    dword_140404A6C[2 * v14 + 485543034] = a3[1];
    result = a3[2];
    dword_140404A6C[2 * v14 + 485543035] = result;
    dword_140404A6C[2 * v14 + 485543046] = a7;
    dword_140404A6C[2 * v14 + 485543047] = a5;
    *(float *)&dword_140404A6C[2 * v14 + 485543036] = a4 * a6;
  }
  return result;
}

