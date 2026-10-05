/* Address: 0x1401941f0 | Name: sub_1401941F0 | Size: 912 bytes */
void __fastcall sub_1401941F0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // sf
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebp
  __int64 v15; // r8
  int v16; // eax
  unsigned int *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r15d
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // edx
  unsigned int v28; // [rsp+70h] [rbp+8h]
  __int64 v29; // [rsp+80h] [rbp+18h]

  v2 = a1;
  v3 = 3246088LL * a1;
  if ( !dword_140404A6C[v3 + 312324428] )
  {
    v4 = v3 * 4 + 24LL * a2;
    v5 = *(int *)((char *)&dword_140404A6C[312226124] + v4);
    v6 = *(int *)((char *)&dword_140404A6C[312226123] + v4);
    if ( (int)v6 >= 0
      && (int)v6 < (int)(dword_140404A6C[v3 + 309078343] - 1)
      && (int)v5 >= 0
      && (int)v5 < (int)dword_140404A6C[v3 + 309078345] )
    {
      v7 = 3074 * v6;
      v8 = 12296 * v6 + v3 * 4;
      if ( *(int *)((char *)&dword_140404A6C[309078347] + v8) > 0 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[312226123] + v4) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[312226124] + v4) = -1;
        --*(unsigned int *)((char *)&dword_140404A6C[309078347] + v8);
        v9 = 12 * v5 + v8;
        v29 = 3 * v5;
        v10 = *(unsigned int *)((char *)&dword_140404A6C[309078349] + v9);
        v11 = (int)(*(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) - v10) < 0;
        *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) -= v10;
        v12 = *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8);
        v13 = 0;
        if ( v11 )
          v12 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) = v12;
        dword_140404A6C[v3 + 312324427] -= *(unsigned int *)((char *)&dword_140404A6C[309078349] + v9);
        v14 = *(unsigned int *)((char *)&dword_140404A6C[309078348] + v9);
        unk_140404170(
          dword_140404A6C[v3 + 309078341],
          dword_140404A6C[2 * dword_140404A6C[v2 + 283791462] + 283793813],
          v2);
        v16 = *(unsigned int *)((char *)&dword_140404A6C[309078347] + v8);
        if ( dword_140404A6C[284024930] )
        {
          if ( (int)v5 < v16 )
          {
            v17 = &dword_140404A6C[v3 + 309078349 + v7 + v29];
            do
            {
              v18 = (int)v17[4];
              v17 += 3;
              v19 = (int)*v17;
              v20 = v5;
              LODWORD(v5) = v5 + 1;
              dword_140404A6C[6 * v18 + 312226124 + v3] = v20;
              unk_140404170(36663, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v15);
              unk_1404047B0(
                dword_140404A6C[v3 + 309078341],
                36663,
                (int)(*(v17 - 1) + dword_140404A6C[v3 + 309078344] * v6),
                0,
                v19);
              unk_140404170(36662, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v21);
              unk_1404047B0(
                36662,
                dword_140404A6C[v3 + 309078341],
                0,
                (int)(v14 + dword_140404A6C[v3 + 309078344] * v6),
                v19);
              *(v17 - 3) = *v17;
              v22 = v17[1];
              *(v17 - 4) = v14;
              v14 += v19;
              *(v17 - 2) = v22;
            }
            while ( (int)v5 < *(int *)((char *)&dword_140404A6C[309078347] + v8) );
          }
        }
        else if ( (int)v5 < v16 )
        {
          v28 = v14;
          v23 = dword_140404A6C[3 * v5 + 309078351 + v3 + v7];
          v24 = &dword_140404A6C[v3 + 309078349 + v7 + v29];
          do
          {
            v25 = (int)v24[4];
            v24 += 3;
            v13 += *v24;
            v26 = (unsigned int)v5;
            LODWORD(v5) = v5 + 1;
            dword_140404A6C[6 * v25 + 312226124 + v3] = v26;
            v27 = *v24;
            LODWORD(v25) = v24[1];
            *(v24 - 4) = v14;
            v14 += v27;
            *(v24 - 3) = v27;
            *(v24 - 2) = v25;
          }
          while ( (int)v5 < *(int *)((char *)&dword_140404A6C[309078347] + v8) );
          unk_140404170(36663, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v26);
          unk_1404047B0(
            dword_140404A6C[v3 + 309078341],
            36663,
            (int)(v23 + dword_140404A6C[v3 + 309078344] * v6),
            0,
            v13);
          unk_1404047B0(
            36663,
            dword_140404A6C[v3 + 309078341],
            0,
            (int)(v28 + dword_140404A6C[v3 + 309078344] * v6),
            v13);
        }
      }
    }
  }
}

