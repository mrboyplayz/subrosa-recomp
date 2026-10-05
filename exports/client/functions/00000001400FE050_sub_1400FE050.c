/* Address: 0x1400fe050 | Name: sub_1400FE050 | Size: 346 bytes */
__int64 sub_1400FE050()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct hostent *v4; // rax
  struct hostent *v5; // rdi
  _QWORD *v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-238h] BYREF
  char name[512]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v14; // [rsp+220h] [rbp-18h]

  dword_140404A6C[456202453] = 0;
  MEMORY[0x1401FCD30](&dword_140404A6C[421831837], 0, 36112484);
  dword_140404A6C[283831447] = -1;
  dword_140404A6C[179662126] = MEMORY[0x140198F9B](v1, v0, v2, v3);
  dword_140404A6C[179662117] = 0;
  dword_140404A6C[179473694] = 0;
  dword_140404A6C[179473693] = 0;
  if ( MEMORY[0x140199037](name, 512) != -1 )
  {
    v4 = MEMORY[0x140199031](name);
    v5 = v4;
    if ( v4 )
    {
      v6 = *((_QWORD **)v4 + 3);
      v7 = dword_140404A6C[179473694];
      if ( *v6 )
      {
        v8 = 0;
        do
        {
          if ( v8 >= 16 )
            break;
          v9 = ntohl(*(unsigned int *)v6[v8]);
          v10 = (int)dword_140404A6C[179473694];
          ++v8;
          dword_140404A6C[2 * dword_140404A6C[179473694] + 179457309] = v9 | 0xFF;
          LOWORD(dword_140404A6C[2 * v10 + 179457310]) = dword_140404A6C[289301091];
          v7 = v10 + 1;
          dword_140404A6C[179473694] = v7;
          v6 = *((_QWORD **)v5 + 3);
        }
        while ( v6[v8] );
      }
      dword_140404A6C[179473693] = v7;
    }
  }
  dword_140404A6C[179662128] = 0;
  dword_140404A6C[179662129] = -1;
  dword_140404A6C[179662131] = 0;
  dword_140404A6C[179662127] = 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v14);
}

