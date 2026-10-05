/* Address: 0x140037fe0 | Name: sub_140037FE0 | Size: 333 bytes */
void sub_140037FE0()
{
  signed int v0; // edx
  int v1; // r15d
  signed int v2; // r9d
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // rdi
  signed int i; // r14d
  signed int v10; // esi
  signed int v11; // eax
  int v12; // ebx

  v0 = dword_140404A6C[111579651];
  v1 = 0;
  dword_140404A6C[421506989] = 0;
  v2 = 0;
  if ( (int)dword_140404A6C[111579651] > 0 )
  {
    v3 = dword_140404A6C[111579652];
    v4 = dword_140404A6C[111579650];
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
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421506981] + 4LL * v7) = -1;
              v4 = dword_140404A6C[111579650];
              v3 = dword_140404A6C[111579652];
            }
            while ( v6 < (int)dword_140404A6C[111579650] );
          }
          ++v5;
        }
        while ( v5 < v3 );
        v0 = dword_140404A6C[111579651];
      }
      ++v2;
    }
    while ( v2 < v0 );
  }
  dword_140404A6C[421769134] = 0;
  v8 = &dword_140404A6C[278845967];
  do
  {
    if ( *(v8 - 74) )
    {
      if ( dword_140404A6C[1268 * *(v8 - 69) + 278521288] )
      {
        for ( i = *(v8 - 2); i <= (int)v8[1]; ++i )
        {
          v10 = *(v8 - 1);
          if ( v10 <= (int)v8[2] )
          {
            v11 = *v8;
            do
            {
              v12 = *(v8 - 3);
              if ( v12 <= v11 )
              {
                do
                {
                  sub_140037DE0(0, v12, i, v10, v1 | 0x8000);
                  v11 = *v8;
                  ++v12;
                }
                while ( v12 <= (int)*v8 );
              }
              ++v10;
            }
            while ( v10 <= (int)v8[2] );
          }
        }
      }
    }
    ++v1;
    v8 += 1760;
  }
  while ( v1 < 1024 );
}

