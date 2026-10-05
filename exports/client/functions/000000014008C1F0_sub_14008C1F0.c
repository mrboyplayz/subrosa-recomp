/* Address: 0x14008c1f0 | Name: sub_14008C1F0 | Size: 276 bytes */
void sub_14008C1F0()
{
  unsigned int *v0; // rsi
  unsigned int *v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi

  v0 = &dword_140404A6C[335047158];
  v1 = &dword_140404A6C[335047158];
  do
  {
    if ( *v1 )
    {
      if ( (rand() & 7) == 0 )
        *v1 = 0;
    }
    v1 += 4;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[335047190] );
  do
  {
    if ( *v0 )
      goto LABEL_21;
    v2 = rand() & 0xF;
    if ( v2 < 2 )
    {
      v3 = 7;
LABEL_19:
      v4 = v3;
      goto LABEL_20;
    }
    if ( v2 >= 6 )
    {
      if ( v2 < 0xA )
      {
        v3 = 15;
        goto LABEL_19;
      }
      if ( v2 < 0xD )
      {
        v3 = 9;
        goto LABEL_19;
      }
      if ( v2 < 0xF )
      {
        v3 = 6;
        goto LABEL_19;
      }
      LODWORD(v3) = 4;
      v4 = 4;
      if ( (rand() & 0xF) == 0 )
      {
        v3 = 5;
        goto LABEL_19;
      }
    }
    else
    {
      LODWORD(v3) = 0;
      v4 = 0;
    }
LABEL_20:
    *v0 = 1;
    v0[1] = v3;
    v0[3] = dword_140404A6C[24944 * v4 + 346707730];
    v0[2] = rand() % 6;
LABEL_21:
    v0 += 4;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[335047190] );
}

