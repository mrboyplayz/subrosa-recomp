/* Address: 0x14004ccb0 | Name: sub_14004CCB0 | Size: 383 bytes */
__int64 __fastcall sub_14004CCB0(int a1, int a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // r10
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r10
  int *v12; // r11
  int *v13; // r8
  __int64 v14; // rcx
  int v16; // [rsp+0h] [rbp-118h] BYREF
  __int64 v17; // [rsp+100h] [rbp-18h]

  v3 = a2;
  if ( a2 == 2 )
  {
    v4 = a1;
    v5 = 1760LL * a1;
    v6 = dword_140404A6C[v5 + 278846098];
  }
  else
  {
    if ( a2 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v17);
    v4 = a1;
    v5 = 1760LL * a1;
    if ( (int)dword_140404A6C[v5 + 278845906] <= 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v17);
    v6 = dword_140404A6C[1760 * dword_140404A6C[v5 + 278845907] + 278846098];
  }
  if ( v6 != -1 )
  {
    if ( (_DWORD)a3 )
    {
      v7 = 1;
      v8 = 1;
      v16 = a3;
      do
      {
        LODWORD(a3) = dword_140404A6C[2570 * v6 + 275753051 + 4 * (int)a3];
        if ( !(_DWORD)a3 )
          break;
        *(&v16 + v8) = a3;
        ++v7;
        ++v8;
      }
      while ( v8 < 8 );
      v9 = v5 * 4 + 72 * v3;
      v10 = v3;
      v11 = v7;
      v12 = (int *)((char *)&dword_140404A6C[278847172] + v9);
      *(unsigned int *)((char *)&dword_140404A6C[278847172] + v9) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[278847173] + v9) = 0;
      if ( v7 >= 1LL )
      {
        v13 = &v16 + v7 - 1;
        do
        {
          v14 = *v12;
          --v13;
          *v12 = v14 + 1;
          dword_140404A6C[1760 * v4 + 278847174 + 18 * v10 + v14] = v13[1];
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * a2 + 278847172 + v5] = a3;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v17);
}

