/* Address: 0x140201914 | Name: sub_140201914 | Size: 76 bytes */
__int64 __fastcall MEMORY[0x140201914](__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)&dword_140404A6C[19064555];
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 95
    && *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) == 95
    && (*(_QWORD *)&dword_140404A6C[19064555] += 2LL,
        v2 = *(char *)(v1 + 2) - 65,
        *(_QWORD *)&dword_140404A6C[19064555] = v1 + 3,
        v2 > 3) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return a1;
}

