/* Address: 0x140072f30 | Name: sub_140072F30 | Size: 372 bytes */
void __fastcall sub_140072F30(signed int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rdi
  __int64 v10; // rax

  v1 = a1;
  v2 = 7040LL * a1;
  v3 = *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5724);
  if ( !v3 )
  {
    sub_14006D1F0(a1);
    v3 = *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5724);
  }
  v4 = v3;
  if ( v3 == 1 )
  {
    v5 = *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 6764);
    if ( v5 > 0 )
    {
      v6 = v5 - 1;
      *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 6764) = v6;
      if ( !v6 )
      {
        v7 = 0;
        v8 = rand() % 26;
        v9 = 1760 * v1;
        do
        {
          v10 = v9 + *((int *)&unk_19025F0C0 + v9 + v8 + 1562);
          if ( *((_DWORD *)&unk_19025F0C0 + v10 + 1626) && *((_DWORD *)&unk_19025F0C0 + v10 + 1658) == -1 )
            break;
          ++v7;
          v8 = rand() % 26;
        }
        while ( v7 < 1000 );
        *((_DWORD *)&unk_19025F0C0 + v9 + *((int *)&unk_19025F0C0 + v9 + v8 + 1562) + 1658) = v8;
        sub_14006EA80(v1);
        *((_BYTE *)&unk_19025F0C0 + v2 + 948) = 0;
        sub_1400395A0(v1, 1u);
        v4 = *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5724);
      }
    }
  }
  if ( v4 == 2 )
  {
    sub_1400718B0(v1);
    v4 = *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5724);
  }
  if ( v4 == 3 )
    sub_140072BF0(v1);
}

