/* Address: 0x14006a140 | Name: sub_14006A140 | Size: 250 bytes */
__int64 __fastcall sub_14006A140(int a1, int a2, float a3, float a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx

  v5 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v7 = 278720LL * a1;
    if ( !dword_140404A6C[v7 + 327697] )
    {
      MEMORY[0x1401FCD30](&dword_140404A6C[v7 + 327698], 0, 1114876);
      *(_QWORD *)&dword_140404A6C[v7 + 327697] = 1;
      dword_140404A6C[v7 + 327772] = 0;
      dword_140404A6C[v7 + 589917] = 0;
      *(float *)&dword_140404A6C[v7 + 327704] = a3;
      *(float *)&dword_140404A6C[v7 + 327705] = a3;
      *(float *)&dword_140404A6C[v7 + 327706] = a4;
      *(float *)&dword_140404A6C[v7 + 327707] = a4;
      dword_140404A6C[v7 + 327700] = 1;
      dword_140404A6C[v7 + 327702] = v5;
      dword_140404A6C[v7 + 327708] = a5;
      result = dword_140404A6C[8 * v5 + 18165783];
      dword_140404A6C[v7 + 606308] = result;
      *(_QWORD *)&dword_140404A6C[8 * v5 + 18165781] = 0;
    }
  }
  return result;
}

