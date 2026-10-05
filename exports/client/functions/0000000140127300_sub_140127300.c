/* Address: 0x140127300 | Name: sub_140127300 | Size: 508 bytes */
void sub_140127300()
{
  unsigned int v0; // edi
  int v1; // eax
  unsigned int v2; // ebx
  char v3; // al
  signed int v4; // ecx
  __int64 v5; // rax
  __int128 v6; // xmm1
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int *v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  unsigned int v16; // edx
  int v17; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065873];
  if ( (int)dword_140404A6C[19065873] < (int)dword_140404A6C[19065874] )
  {
    if ( dword_140404A6C[19065873] + 0x10000 >= dword_140404A6C[19065869] )
    {
      v1 = dword_140404A6C[289317483];
    }
    else
    {
      MEMORY[0x1401FC920](
        &dword_140404A6C[289317486],
        *(_QWORD *)&dword_140404A6C[19065875] + (int)dword_140404A6C[19065873]);
      v1 = 0x10000;
      dword_140404A6C[289317483] = 0x10000;
    }
    v2 = 0;
    *(_QWORD *)&dword_140404A6C[289317484] = 0;
    if ( v1 < 1 )
    {
      v3 = v17;
    }
    else
    {
      v3 = dword_140404A6C[289317486];
      dword_140404A6C[289317484] = 1;
    }
    if ( v3 == 6 )
    {
      sub_140115AE0(&dword_140404A6C[283831312], 4);
      v4 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 32) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v4 = dword_140404A6C[289317484] + 1;
          dword_140404A6C[289317485] = 0;
          ++dword_140404A6C[289317484];
        }
        v5 = v4;
        v4 += 32;
        v6 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v5);
        *(_OWORD *)&dword_140404A6C[283831313] = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v5);
        *(_OWORD *)&dword_140404A6C[283831317] = v6;
      }
      v7 = v4 + 1;
      dword_140404A6C[19065873] = v7 + v0;
      dword_140404A6C[289317484] = v7;
    }
    else
    {
      ++dword_140404A6C[283831474];
      sub_140115AE0(&dword_140404A6C[283831448], 4);
      sub_140115AE0(&dword_140404A6C[283831450], 24);
      sub_140115AE0(&dword_140404A6C[179992853], 30);
      sub_14018F1B0();
      sub_140115AE0(&v17, 16);
      sub_140115AE0(&dword_140404A6C[308307070], 16);
      if ( v17 > 0 )
      {
        v11 = (unsigned int)v17;
        do
        {
          sub_14018DBF0(dword_140404A6C[308307070], v8, v9, v10);
          ++dword_140404A6C[308307070];
          HIWORD(dword_140404A6C[308307070]) = 0;
          --v11;
        }
        while ( v11 );
      }
      v12 = &dword_140404A6C[421831854];
      dword_140404A6C[19065873] += ++dword_140404A6C[289317484];
      do
      {
        v13 = v2 + 1;
        if ( !*(v12 - 4) )
          v13 = v2;
        v14 = v13 + 1;
        if ( !*v12 )
          v14 = v13;
        v15 = v12 + 8;
        v16 = v14 + 1;
        if ( !v12[4] )
          v16 = v14;
        v12 += 16;
        v2 = v16 + 1;
        if ( !*v15 )
          v2 = v16;
      }
      while ( (__int64)v12 < (__int64)&dword_140404A6C[421835950] );
      dword_140404A6C[19065879] = v2;
    }
  }
}

