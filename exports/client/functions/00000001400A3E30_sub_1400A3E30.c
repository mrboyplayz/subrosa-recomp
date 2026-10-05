/* Address: 0x1400a3e30 | Name: sub_1400A3E30 | Size: 252 bytes */
__int64 sub_1400A3E30()
{
  struct hostent *v0; // rax
  struct hostent *v1; // rdi
  _QWORD *v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-238h] BYREF
  char name[512]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v10; // [rsp+220h] [rbp-18h]

  if ( MEMORY[0x140199037](name, 512) != -1 )
  {
    v0 = MEMORY[0x140199031](name);
    v1 = v0;
    if ( v0 )
    {
      v2 = *((_QWORD **)v0 + 3);
      v3 = dword_140404A6C[179473694];
      if ( *v2 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= 16 )
            break;
          v5 = ntohl(*(unsigned int *)v2[v4]);
          v6 = (int)dword_140404A6C[179473694];
          ++v4;
          dword_140404A6C[2 * dword_140404A6C[179473694] + 179457309] = v5 | 0xFF;
          LOWORD(dword_140404A6C[2 * v6 + 179457310]) = dword_140404A6C[289301091];
          v3 = v6 + 1;
          dword_140404A6C[179473694] = v3;
          v2 = *((_QWORD **)v1 + 3);
        }
        while ( v2[v4] );
      }
      dword_140404A6C[179473693] = v3;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v10);
}

