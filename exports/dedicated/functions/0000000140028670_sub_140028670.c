/* Address: 0x140028670 | Name: sub_140028670 | Size: 333 bytes */
void sub_140028670()
{
  int v0; // edx
  int v1; // r15d
  int v2; // r9d
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  int *v8; // rdi
  signed int i; // r14d
  signed int v10; // esi
  int v11; // eax
  int v12; // ebx

  v0 = dword_16CDE9ED8[0];
  v1 = 0;
  dword_196AC59A0 = 0;
  v2 = 0;
  if ( dword_16CDE9ED8[0] > 0 )
  {
    v3 = dword_16CDE9EDC[0];
    v4 = dword_16CDE9ED4[0];
    do
    {
      v5 = 0;
      if ( v3 > 0 )
      {
        do
        {
          v6 = 0;
          if ( v4 > 0 )
          {
            do
            {
              v7 = v6 + v4 * (v5 + v2 * v3);
              ++v6;
              *(_DWORD *)(qword_196AC5980[0] + 4LL * v7) = -1;
              v4 = dword_16CDE9ED4[0];
              v3 = dword_16CDE9EDC[0];
            }
            while ( v6 < dword_16CDE9ED4[0] );
          }
          ++v5;
        }
        while ( v5 < v3 );
        v0 = dword_16CDE9ED8[0];
      }
      ++v2;
    }
    while ( v2 < v0 );
  }
  dword_196BC59A4 = 0;
  v8 = (int *)&unk_19025F1E8;
  do
  {
    if ( *(v8 - 74) )
    {
      if ( dword_1901220CC[1268 * *(v8 - 69)] )
      {
        for ( i = *(v8 - 2); i <= v8[1]; ++i )
        {
          v10 = *(v8 - 1);
          if ( v10 <= v8[2] )
          {
            v11 = *v8;
            do
            {
              v12 = *(v8 - 3);
              if ( v12 <= v11 )
              {
                do
                {
                  sub_140028470(0, v12, i, v10, v1 | 0x8000);
                  v11 = *v8;
                  ++v12;
                }
                while ( v12 <= *v8 );
              }
              ++v10;
            }
            while ( v10 <= v8[2] );
          }
        }
      }
    }
    ++v1;
    v8 += 1760;
  }
  while ( v1 < 1024 );
}

