/* Address: 0x14004bc60 | Name: sub_14004BC60 | Size: 1160 bytes */
void __fastcall sub_14004BC60(signed int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  int v13; // r8d
  int *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = a1;
  if ( (unsigned int)a1 <= 0x3FF )
  {
    v5 = a1;
    v6 = 1760LL * a1;
    if ( *(_DWORD *)((char *)&unk_19025F3D8 + v6 * 4) && *(int *)((char *)&unk_19025F1F8 + v6 * 4) > 0 )
      sub_140077410((unsigned int)a1);
    if ( dword_19025F0D4[v6] == 29 )
      --dword_1915FC5C8;
    v7 = *(unsigned int *)((char *)&unk_19025F0E4 + v6 * 4);
    if ( (_DWORD)v7 != -1 )
      sub_140073BA0((unsigned int)v4, v7, *(unsigned int *)((char *)&unk_19025F0EC + v6 * 4));
    v8 = dword_19025F0F4[v6];
    v9 = dword_163D75B60;
    if ( v8 > 0 )
    {
      a3 = 1760 * v4;
      do
      {
        dword_19025F0F4[v6] = v8 - 1;
        v10 = dword_19025F0F4[a3 + (unsigned int)v8];
        *((_DWORD *)&unk_19025F0E8 + 1760 * v10) = -1;
        if ( v9 && (unsigned int)v10 <= 0x3FF )
          ++dword_19093F0C0[v10];
        v8 = dword_19025F0F4[v6];
      }
      while ( v8 > 0 );
    }
    v11 = *(unsigned int *)((char *)&unk_19025F0E8 + v6 * 4);
    if ( (_DWORD)v11 != -1 )
      sub_140073D90((unsigned int)v4, v11, a3, a4);
    v12 = 1760 * v4;
    v13 = 1;
    v14 = (int *)((char *)&unk_19025F240 + 7040 * v5);
    v15 = 2;
    v16 = 4;
    do
    {
      if ( (v13 & dword_19025F230[v12 + ((v15 - 2) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * *(v14 - 2)) = 0;
      if ( (__ROL4__(v13, 1) & dword_19025F230[v12 + ((v15 - 1) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * *(v14 - 1)) = 0;
      if ( (__ROL4__(v13, 2) & dword_19025F230[v12 + (v15 >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * *v14) = 0;
      if ( (__ROL4__(v13, 3) & dword_19025F230[v12 + ((v15 + 1) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[1]) = 0;
      if ( (__ROL4__(v13, 4) & dword_19025F230[v12 + ((v15 + 2) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[2]) = 0;
      if ( (__ROL4__(v13, 5) & dword_19025F230[v12 + ((v15 + 3) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[3]) = 0;
      if ( (__ROL4__(v13, 6) & dword_19025F230[v12 + ((v15 + 4) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[4]) = 0;
      if ( (__ROL4__(v13, 7) & dword_19025F230[v12 + ((v15 + 5) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[5]) = 0;
      if ( (__ROL4__(v13, 8) & dword_19025F230[v12 + ((v15 + 6) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[6]) = 0;
      if ( (__ROL4__(v13, 9) & dword_19025F230[v12 + ((v15 + 7) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[7]) = 0;
      if ( (__ROL4__(v13, 10) & dword_19025F230[v12 + ((v15 + 8) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[8]) = 0;
      if ( (__ROL4__(v13, 11) & dword_19025F230[v12 + ((v15 + 9) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[9]) = 0;
      if ( (__ROL4__(v13, 12) & dword_19025F230[v12 + ((v15 + 10) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[10]) = 0;
      if ( (__ROL4__(v13, 13) & dword_19025F230[v12 + ((v15 + 11) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[11]) = 0;
      if ( (__ROL4__(v13, 14) & dword_19025F230[v12 + ((v15 + 12) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[12]) = 0;
      if ( (__ROL4__(v13, 15) & dword_19025F230[v12 + ((v15 + 13) >> 5)]) != 0 )
        *((_DWORD *)&unk_195629300 + 39 * v14[13]) = 0;
      v15 += 16;
      v13 = __ROL4__(v13, 16);
      v14 += 16;
      --v16;
    }
    while ( v16 );
    if ( dword_19025F0D4[v6] == 27 )
    {
      v17 = dword_19025F340[v6];
      if ( (unsigned int)v17 <= 0x1FF )
        *((_DWORD *)&unk_16E6A3C7C + 5210 * v17) = 0;
    }
    v18 = dword_19025F118[v6];
    if ( (unsigned int)v18 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v18) = 0;
    *(_DWORD *)((char *)&unk_19025F0C0 + v6 * 4) = 0;
    if ( v9 )
      ++dword_19093F0C0[v5];
  }
}

