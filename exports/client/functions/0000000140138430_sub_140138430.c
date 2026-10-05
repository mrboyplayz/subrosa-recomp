/* Address: 0x140138430 | Name: sub_140138430 | Size: 338 bytes */
__int64 __fastcall sub_140138430(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rcx

  v3 = a2;
  if ( a1 != -1 )
  {
    v4 = 3597LL * a1;
    v5 = (int)dword_140404A6C[v4 + 71856286];
    if ( (_DWORD)v5 != a2 )
    {
      if ( (unsigned int)v5 <= 5 && dword_140404A6C[5873 * v5 + 283831510] == a1 )
      {
        if ( dword_140404A6C[283831312] == 4 )
        {
          sub_140194C10(v5);
          LODWORD(v5) = dword_140404A6C[v4 + 71856286];
        }
        result = (int)v5;
        dword_140404A6C[5873 * (int)v5 + 283831510] = -1;
      }
      v7 = (int)dword_140404A6C[v4 + 71856292];
      dword_140404A6C[v4 + 71856286] = v3;
      if ( (unsigned int)v3 <= 5 )
      {
        v8 = dword_140404A6C[v4 + 71859822];
        dword_140404A6C[v4 + 71859821] = 1;
        if ( ((v8 - 3) & 0xFFFFFFFA) != 0 || v8 == 4 )
          dword_140404A6C[v4 + 71859822] = dword_1402B2980[v3];
        result = (unsigned int)dword_1402B29A0[v3];
        dword_140404A6C[v4 + 71859823] = result;
      }
      if ( (_DWORD)v3 == 17 )
      {
        v9 = dword_140404A6C[v4 + 71859822];
        dword_140404A6C[v4 + 71859821] = 0;
        result = v9 - 3;
        if ( (result & 0xFFFFFFFA) != 0 || v9 == 4 )
          dword_140404A6C[v4 + 71859822] = 0;
        dword_140404A6C[v4 + 71859823] = 0;
      }
      if ( (_DWORD)v7 != -1 )
      {
        v10 = dword_140404A6C[v4 + 71859821];
        v11 = 7166 * v7;
        ++dword_140404A6C[v7 + 282485789];
        dword_140404A6C[v11 + 280658445] = v10;
        dword_140404A6C[v11 + 280658446] = dword_140404A6C[v4 + 71859822];
        result = dword_140404A6C[v4 + 71859823];
        dword_140404A6C[v11 + 280658447] = result;
      }
    }
  }
  return result;
}

