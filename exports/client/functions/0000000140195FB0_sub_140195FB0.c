/* Address: 0x140195fb0 | Name: sub_140195FB0 | Size: 842 bytes */
__int64 __fastcall sub_140195FB0(int a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  char *v7; // rcx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned int *v10; // rbx
  unsigned int *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  int v15; // edi
  unsigned int *v16; // rbx
  const char **v17; // r14
  __int64 v18; // rsi
  int v19; // r9d
  signed int v20; // eax
  __int64 v22; // [rsp+0h] [rbp-478h] BYREF
  __int64 v23; // [rsp+20h] [rbp-458h]
  __int64 v24; // [rsp+28h] [rbp-450h]
  char v25[1024]; // [rsp+30h] [rbp-448h] BYREF
  __int64 v26; // [rsp+430h] [rbp-48h]

  v2 = 34653LL * a1;
  v3 = a2;
  v4 = 539LL * a2;
  LODWORD(v23) = a2;
  v24 = v4 * 4;
  v5 = v4 * 4 + v2 * 4;
  if ( !dword_140404A6C[v4 + 180001073 + v2] )
  {
    *(unsigned int *)((char *)&dword_140404A6C[180001073] + v5) = 1;
    if ( (int)dword_140404A6C[v2 + 180001071] < 2 )
    {
      v6 = *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5);
      v7 = (char *)&dword_140404A6C[180001084] + v5;
      v8 = (int *)((char *)&dword_140404A6C[180001083] + v5);
      if ( v6 <= 0 )
      {
        *v8 = 0;
        sub_140158AB0((__int64)v7, "TRADE");
        ++*v8;
        sub_140158AB0((__int64)&dword_140404A6C[180001596] + v5, "Trade");
        v14 = v23;
        v15 = 0;
        v16 = &dword_140404A6C[v2 + 180001083];
        v17 = (const char **)off_1402B2890;
        v18 = 0;
        do
        {
          if ( v15 != v14 )
          {
            v19 = *(v16 - 9);
            if ( v19 > 0 )
            {
              if ( dword_140404A6C[v2 + 180001071] )
              {
                v20 = *v16;
              }
              else
              {
                *v16 = 0;
                v20 = 0;
              }
              sub_140158AB0(
                (__int64)&dword_140404A6C[64 * (__int64)v20 + 180001084 + v18 + v2],
                "%s HAS THE FILE  VALUE: $%d",
                off_1402B2890[v3],
                v19);
              ++*v16;
              sub_140158AB0((__int64)&dword_140404A6C[v2 + 180001596 + v18], "Trade");
              sub_140158AB0(
                (__int64)v25,
                "%s has obtained the file for the\n%s project",
                off_1402B2890[v3],
                (const char *)&dword_140404A6C[v2 + 180035705]);
              sub_140195D20(v15, v25);
              sub_140158AB0(
                (__int64)&dword_140404A6C[64 * (__int64)*v8 + 180001084 + v2] + v24,
                "%s WANTS THE FILE",
                *v17);
              ++*v8;
              v14 = v23;
            }
          }
          ++v15;
          v18 += 539;
          v16 += 539;
          ++v17;
        }
        while ( v15 < 6 );
        dword_140404A6C[v2 + 180001071] = 1;
      }
      else
      {
        dword_140404A6C[5 * v3 + 188872237] += v6;
        v23 = 20 * v3;
        *v8 = 0;
        sub_140158AB0((__int64)v7, "MISSION SUCCESS");
        sub_140158AB0(
          (__int64)&dword_140404A6C[64 * (__int64)++*v8 + 180001084 + v2 + v4],
          "VALUE: $%d",
          *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5));
        ++*v8;
        sub_140158AB0((__int64)&dword_140404A6C[180001596] + v5, "Success");
        v9 = 0;
        v10 = &dword_140404A6C[v2 + 180001083];
        v11 = &dword_140404A6C[v2 + 180001596];
        v12 = 6;
        do
        {
          if ( v9 != v3 )
          {
            *v10 = 0;
            sub_140158AB0((__int64)(v11 - 512), "MISSION CLOSED");
            ++*v10;
            sub_140158AB0((__int64)v11, "Closed");
          }
          v11 += 539;
          ++v9;
          v10 += 539;
          --v12;
        }
        while ( v12 );
        v13 = v23;
        dword_140404A6C[v2 + 180001071] = 2;
        if ( *(int *)((char *)&dword_140404A6C[188872240] + v13) > 0 )
          *(unsigned int *)((char *)&dword_140404A6C[188872240] + v13) = 1;
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v26);
}

