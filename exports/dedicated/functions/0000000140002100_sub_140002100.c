/* Address: 0x140002100 | Name: sub_140002100 | Size: 371 bytes */
__int64 __fastcall sub_140002100(int a1, int a2, int a3, int a4)
{
  int *v4; // rbx
  __int64 v5; // r8
  int v6; // r9d
  int v7; // eax
  __int64 result; // rax

  dword_183989E80[12 * dword_183A71EE8 + 237595] = a3;
  dword_183989E80[12 * dword_183A71EE8 + 237596] = a4;
  v4 = &dword_183989E80[34 * a1];
  dword_183989E80[12 * dword_183A71EE8 + 237597] = v4[35] + v4[25];
  dword_183989E80[12 * dword_183A71EE8 + 237599] = v4[36] + v4[27];
  v5 = 34LL * a2;
  dword_183989E80[12 * dword_183A71EE8 + 237598] = v4[26];
  v6 = dword_183A71EE8;
  v7 = dword_183989E80[v5 + 26];
  if ( dword_183989E80[12 * dword_183A71EE8 + 237598] > v7 )
  {
    dword_183989E80[12 * dword_183A71EE8 + 237598] = v7;
    v6 = dword_183A71EE8;
  }
  dword_183989E80[12 * v6 + 237600] = dword_183989E80[v5 + 25] - dword_183989E80[v5 + 37] - v4[25] - v4[35];
  dword_183989E80[12 * dword_183A71EE8 + 237601] = dword_183989E80[v5 + 27]
                                                 - dword_183989E80[v5 + 38]
                                                 - v4[27]
                                                 - dword_183989E80[34 * a1 + 36];
  result = dword_183A71EE8;
  dword_183989E80[12 * dword_183A71EE8++ + 237602] = 0;
  return result;
}

