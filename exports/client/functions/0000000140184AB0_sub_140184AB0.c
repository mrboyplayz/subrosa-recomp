/* Address: 0x140184ab0 | Name: sub_140184AB0 | Size: 255 bytes */
void __fastcall sub_140184AB0(int a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( a1 >= 0 )
  {
    v1 = dword_140404A6C[70998846];
    if ( a1 < (int)dword_140404A6C[70998846] )
    {
      v2 = a1;
      --dword_140404A6C[70998846];
      v3 = 2LL * a1;
      dword_140404A6C[2 * v3 + 70998847] = dword_140404A6C[4 * (v1 - 1) + 70998847];
      dword_140404A6C[2 * v3 + 70998848] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
      dword_140404A6C[2 * v3 + 70998849] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
      dword_140404A6C[2 * v3 + 70998850] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
      v4 = 3 * v2;
      dword_140404A6C[v2 + 71064383] = dword_140404A6C[dword_140404A6C[70998846] + 71064383];
      dword_140404A6C[v2 + 71097151] = dword_140404A6C[dword_140404A6C[70998846] + 71097151];
      v5 = 3LL * (int)dword_140404A6C[70998846];
      dword_140404A6C[v4 + 71113535] = dword_140404A6C[3 * dword_140404A6C[70998846] + 71113535];
      dword_140404A6C[v4 + 71113536] = dword_140404A6C[v5 + 71113536];
      dword_140404A6C[v4 + 71113537] = dword_140404A6C[v5 + 71113537];
    }
  }
}

