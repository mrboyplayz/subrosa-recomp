/* Address: 0x1401979d0 | Name: sub_1401979D0 | Size: 500 bytes */
__int64 __fastcall sub_1401979D0(int a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // eax
  unsigned int *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int *v10; // r14
  unsigned int *v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-258h] BYREF
  char v14[512]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v15; // [rsp+220h] [rbp-38h]

  v2 = a1;
  v3 = 265228LL * a1;
  strcpy(v14, "test.csx");
  if ( a2 )
  {
    v4 = MEMORY[0x14020B8D8](v14, "wb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = dword_1402B2314;
      dword_140404A6C[v3 + 293512631] = 1;
      v7 = &dword_140404A6C[v3 + 293512632];
      *(_QWORD *)&dword_140404A6C[v3 + 293512633] = 12;
      *v7 = v6;
      sub_14020CE0C(v7, 12, 1, v5);
      MEMORY[0x1401FCD30](&dword_140404A6C[v3 + 293774779], 0, 12308);
    }
  }
  else
  {
    v8 = MEMORY[0x14020B8D8](v14, "rb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v8;
    if ( v8 )
    {
      v9 = 0;
      dword_140404A6C[v3 + 293512631] = 0;
      fread(&dword_140404A6C[v3 + 293512632], 12, 1, v8);
      MEMORY[0x1401FCD30](&dword_140404A6C[v3 + 293774779], 0, 12308);
      v10 = &dword_140404A6C[v3 + 293512629];
      if ( dword_140404A6C[v3 + 293512632] == dword_1402B2314 )
      {
        MEMORY[0x14020C4A8](*(_QWORD *)&dword_140404A6C[v3 + 293512629], dword_140404A6C[v3 + 293512633], 0);
        if ( v10[5] )
        {
          v11 = &dword_140404A6C[v3 + 293512635];
          do
          {
            fread(
              &dword_140404A6C[16 * (__int64)(int)v9 + 293512635 + v3],
              64,
              1,
              *(_QWORD *)&dword_140404A6C[v3 + 293512629]);
            if ( *v11 == 1482293250 )
              dword_140404A6C[265228 * v2 + 293775805 + (int)dword_140404A6C[v3 + 293775804]++] = v9;
            ++v9;
            v11 += 16;
          }
          while ( v9 < v10[5] );
        }
      }
      else
      {
        v10[5] = 0;
        sub_1401977E0(v2);
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v15);
}

