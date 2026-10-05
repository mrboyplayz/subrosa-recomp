/* Address: 0x14004e330 | Name: sub_14004E330 | Size: 297 bytes */
void sub_14004E330()
{
  int v0; // edi
  int v1; // r13d
  __int64 v2; // rax
  int v3; // r15d
  __int64 v4; // r12
  unsigned int *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int v9; // eax

  v0 = dword_196199560;
  v1 = dword_196199564;
  if ( dword_196199560 != dword_196199564 )
  {
    do
    {
      v2 = (__int64)v0 << 7;
      if ( *(_DWORD *)((char *)&unk_195999560 + v2) == 10 )
      {
        v3 = *(_DWORD *)((char *)&unk_195999560 + v2 + 36);
        v4 = 2;
        v5 = (unsigned int *)((char *)&unk_1915415C0 + 23492 * *(int *)((char *)&unk_195999560 + v2 + 32));
        do
        {
          v6 = *(v5 - 1);
          v7 = *v5;
          v8 = v5[1];
          if ( v3 )
            v9 = 0;
          else
            v9 = (v5[2] << 10) | 6;
          sub_14000D600(0, v6, v7, v8, v9);
          sub_14000D730(0, v6, v7, v8);
          v5 += 4;
          --v4;
        }
        while ( v4 );
        v1 = dword_196199564;
      }
      dword_196199560 = v0 + 1;
      HIWORD(dword_196199560) = 0;
      v0 = dword_196199560;
    }
    while ( dword_196199560 != v1 );
    dword_1915FC5D0 = dword_196199560;
  }
}

