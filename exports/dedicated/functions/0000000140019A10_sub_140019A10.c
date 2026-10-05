/* Address: 0x140019a10 | Name: sub_140019A10 | Size: 1652 bytes */
int __fastcall sub_140019A10(char *Buffer, __int64 a2, int a3)
{
  int *v3; // rsi
  FILE *v6; // rax
  FILE *v7; // rbx
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  int v12; // r13d
  _DWORD *n; // rax
  int v14; // ebp
  int v15; // r15d
  char *v16; // rdi
  int v17; // r12d
  _DWORD *v18; // rbp
  __int64 v19; // r15
  int ii; // esi
  __int64 v21; // rdi
  int Buffera; // [rsp+20h] [rbp-258h] BYREF
  int v24[3]; // [rsp+24h] [rbp-254h] BYREF
  char FileName[512]; // [rsp+30h] [rbp-248h] BYREF

  v3 = (int *)(Buffer + 68);
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  *((_DWORD *)Buffer + 17) = 24;
  sub_1400DBB30(FileName, "building/%s.sbb");
  v6 = fopen(FileName, "rb");
  v7 = v6;
  if ( !v6 )
    return sub_14001A8B0();
  fread(&Buffera, 4u, 1u, v6);
  if ( (unsigned int)(Buffera - 12) <= 2 )
  {
    fread(Buffer, 1u, 0x40u, v7);
    fread(Buffer + 64, 4u, 1u, v7);
    fread(v3, 4u, 1u, v7);
    fread(Buffer + 72, 4u, 1u, v7);
    if ( Buffera >= 13 )
    {
      fread(Buffer + 76, 4u, 1u, v7);
      fread(Buffer + 80, 4u, 1u, v7);
      fread(Buffer + 84, 4u, 1u, v7);
    }
    if ( !a3 )
    {
      fread(Buffer + 47187628, 4u, 1u, v7);
      for ( i = 0; i < *((_DWORD *)Buffer + 11796907); ++i )
        fread(&Buffer[64 * (__int64)i + 47187632], 1u, 0x40u, v7);
      fread(Buffer + 47208112, 4u, 1u, v7);
      for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
        fread(&Buffer[64 * (__int64)j + 47208116], 1u, 0x40u, v7);
      fread(Buffer + 47277748, 4u, 1u, v7);
      for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
        fread(&Buffer[64 * (__int64)k + 47277752], 1u, 0x40u, v7);
      fread(Buffer + 47282872, 4u, 1u, v7);
      for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
        fread(&Buffer[64 * (__int64)m + 47282876], 1u, 0x40u, v7);
      v12 = 0;
      for ( n = Buffer + 72; v12 < *n; ++v12 )
      {
        v14 = 0;
        if ( *v3 >= 0 )
        {
          do
          {
            v15 = 0;
            if ( *((int *)Buffer + 16) >= 0 )
            {
              do
              {
                v16 = &Buffer[3840 * (v14 + ((__int64)v12 << 6)) + 60 * v15];
                fread(v16 + 92, 4u, 1u, v7);
                fread(v16 + 96, 4u, 1u, v7);
                fread(v16 + 88, 4u, 1u, v7);
                fread(v16 + 100, 4u, 1u, v7);
                fread(v16 + 104, 4u, 1u, v7);
                fread(v16 + 108, 4u, 1u, v7);
                fread(v16 + 112, 2u, 1u, v7);
                fread(v16 + 114, 2u, 1u, v7);
                fread(v16 + 116, 2u, 1u, v7);
                fread(v16 + 118, 2u, 1u, v7);
                fread(v16 + 120, 2u, 1u, v7);
                fread(v16 + 122, 2u, 1u, v7);
                fread(v16 + 124, 2u, 1u, v7);
                fread(v16 + 126, 2u, 1u, v7);
                fread(v16 + 128, 2u, 1u, v7);
                fread(v16 + 130, 2u, 1u, v7);
                fread(v16 + 132, 2u, 1u, v7);
                fread(v16 + 134, 2u, 1u, v7);
                fread(v16 + 136, 2u, 1u, v7);
                fread(v16 + 138, 2u, 1u, v7);
                fread(v16 + 140, 2u, 1u, v7);
                fread(v16 + 142, 2u, 1u, v7);
                fread(v16 + 144, 4u, 1u, v7);
                ++v15;
              }
              while ( v15 <= *((_DWORD *)Buffer + 16) );
              v3 = (int *)(Buffer + 68);
            }
            ++v14;
          }
          while ( v14 <= *v3 );
          n = Buffer + 72;
        }
      }
      if ( Buffera >= 14 )
      {
        v24[0] = 1;
        fread(v24, 4u, 1u, v7);
        if ( v24[0] == 1 )
        {
          fread(Buffer + 47352508, 4u, 1u, v7);
          v17 = 0;
          if ( *((int *)Buffer + 11838127) > 0 )
          {
            v18 = Buffer + 47352512;
            do
            {
              v19 = 1028LL * v17;
              fread(&Buffer[v19 + 47352512], 4u, 1u, v7);
              for ( ii = 0; ii < *v18; ++ii )
              {
                v21 = v19 + 16LL * ii;
                fread(&Buffer[v21 + 47352516], 4u, 3u, v7);
                fread(&Buffer[v21 + 47352528], 4u, 1u, v7);
              }
              ++v17;
              v18 += 257;
            }
            while ( v17 < *((_DWORD *)Buffer + 11838127) );
          }
        }
      }
      fclose(v7);
      return sub_14001A8B0();
    }
  }
  return fclose(v7);
}

