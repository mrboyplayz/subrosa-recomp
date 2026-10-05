/* Address: 0x14006a240 | Name: sub_14006A240 | Size: 311 bytes */
__int64 __fastcall sub_14006A240(int a1, int a2, unsigned int *a3, float a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbx

  v7 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v9 = 278720LL * a1;
    if ( !dword_140404A6C[v9 + 327697] )
    {
      MEMORY[0x1401FCD30](&dword_140404A6C[v9 + 327698], 0, 1114876);
      *(float *)&dword_140404A6C[v9 + 327699] = a4;
      *(_QWORD *)&dword_140404A6C[v9 + 327697] = 1;
      dword_140404A6C[v9 + 327772] = 0;
      dword_140404A6C[v9 + 589917] = 0;
      *(float *)&dword_140404A6C[v9 + 327704] = a4;
      *(float *)&dword_140404A6C[v9 + 327705] = a4;
      dword_140404A6C[v9 + 327706] = a5;
      dword_140404A6C[v9 + 327707] = a5;
      dword_140404A6C[v9 + 327700] = 1;
      dword_140404A6C[v9 + 327702] = v7;
      dword_140404A6C[v9 + 327708] = a6;
      *(_QWORD *)&dword_140404A6C[8 * v7 + 18165781] = 0;
      dword_140404A6C[v9 + 606302] = *a3;
      dword_140404A6C[v9 + 606303] = a3[1];
      dword_140404A6C[v9 + 606304] = a3[2];
      result = dword_140404A6C[8 * v7 + 18165783];
      dword_140404A6C[v9 + 606308] = result;
      dword_140404A6C[v9 + 606310] = 1;
      dword_140404A6C[v9 + 606414] = 0;
    }
  }
  return result;
}

