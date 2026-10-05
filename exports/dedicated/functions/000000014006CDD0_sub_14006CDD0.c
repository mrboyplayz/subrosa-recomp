/* Address: 0x14006cdd0 | Name: sub_14006CDD0 | Size: 226 bytes */
__int64 __fastcall sub_14006CDD0(int a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v4; // r9d
  int v6; // r9d
  unsigned int v7; // r10d
  int v8; // ebx
  __int64 v9; // rdi
  char v10; // cl
  int v11; // edx
  int v12; // eax

  v3 = 7040LL * a1;
  v4 = *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 676);
  if ( v4 >= 9 )
    return 0;
  v6 = v4 + 1;
  *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 676) = v6;
  if ( v6 > a2 )
  {
    v7 = *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 680);
    v8 = 3 * v6;
    v9 = (unsigned int)(v6 - a2);
    LOBYTE(v6) = a2;
    do
    {
      v10 = v8;
      v11 = (v7 >> (v8 - 3)) & 7;
      v12 = 7 << v8;
      v8 -= 3;
      v7 = (v11 << v10) | ~v12 & v7;
      --v9;
    }
    while ( v9 );
    *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 680) = v7;
  }
  *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 680) = (a3 << (3 * v6))
                                                 | *(_DWORD *)((_BYTE *)&unk_19025F0C0 + v3 + 680) & ~(7 << (3 * v6));
  ++*(_DWORD *)((char *)&unk_19025F0C0 + v3 + 672);
  return 1;
}

