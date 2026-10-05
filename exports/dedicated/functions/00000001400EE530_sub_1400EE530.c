/* Address: 0x1400ee530 | Name: sub_1400EE530 | Size: 2312 bytes */
__int64 __fastcall sub_1400EE530(char *Buffer, FILE *Stream, int a3)
{
  int v3; // ebx
  int *v6; // rsi
  _DWORD *v7; // rbp
  int *v8; // r14
  _DWORD *v9; // r12
  int i; // edi
  char *v11; // rcx
  char *v12; // rcx
  int j; // edi
  char *v14; // rcx
  char *v15; // rcx
  int k; // edi
  char *v17; // rcx
  char *v18; // rcx
  int m; // edi
  char *v20; // rcx
  int v21; // ecx
  int v22; // eax
  int v23; // edi
  __int64 v24; // r12
  __int64 v25; // rbx
  char *v26; // rcx
  int v28; // [rsp+20h] [rbp-58h]
  int Buffera; // [rsp+88h] [rbp+10h] BYREF
  int v30; // [rsp+90h] [rbp+18h]
  int n; // [rsp+98h] [rbp+20h]

  v30 = a3;
  v3 = a3;
  if ( !Stream )
    return 0;
  Buffera = 1;
  if ( a3 )
  {
    fwrite(&Buffera, 4u, 1u, Stream);
    fwrite(Buffer, 1u, 0x40u, Stream);
    v6 = (int *)(Buffer + 64);
    fwrite(Buffer + 64, 4u, 1u, Stream);
    v7 = Buffer + 68;
    fwrite(Buffer + 68, 4u, 1u, Stream);
    v8 = (int *)(Buffer + 72);
    fwrite(Buffer + 72, 4u, 1u, Stream);
    fwrite(Buffer + 76, 4u, 1u, Stream);
    fwrite(Buffer + 80, 4u, 1u, Stream);
    fwrite(Buffer + 84, 4u, 1u, Stream);
    v9 = Buffer + 47187628;
    fwrite(Buffer + 47187628, 4u, 1u, Stream);
    goto LABEL_6;
  }
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 17) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  fread(&Buffera, 4u, 1u, Stream);
  if ( Buffera != 1 )
    return 0;
  fread(Buffer, 1u, 0x40u, Stream);
  v6 = (int *)(Buffer + 64);
  fread(Buffer + 64, 4u, 1u, Stream);
  v7 = Buffer + 68;
  fread(Buffer + 68, 4u, 1u, Stream);
  v8 = (int *)(Buffer + 72);
  fread(Buffer + 72, 4u, 1u, Stream);
  fread(Buffer + 76, 4u, 1u, Stream);
  fread(Buffer + 80, 4u, 1u, Stream);
  fread(Buffer + 84, 4u, 1u, Stream);
  v9 = Buffer + 47187628;
  fread(Buffer + 47187628, 4u, 1u, Stream);
LABEL_6:
  for ( i = 0; i < *v9; ++i )
  {
    v11 = &Buffer[64 * (__int64)i + 47187632];
    if ( v3 )
      fwrite(v11, 1u, 0x40u, Stream);
    else
      fread(v11, 1u, 0x40u, Stream);
  }
  v12 = Buffer + 47208112;
  if ( v3 )
    fwrite(v12, 4u, 1u, Stream);
  else
    fread(v12, 4u, 1u, Stream);
  for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
  {
    v14 = &Buffer[64 * (__int64)j + 47208116];
    if ( v3 )
      fwrite(v14, 1u, 0x40u, Stream);
    else
      fread(v14, 1u, 0x40u, Stream);
  }
  v15 = Buffer + 47277748;
  if ( v3 )
    fwrite(v15, 4u, 1u, Stream);
  else
    fread(v15, 4u, 1u, Stream);
  for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
  {
    v17 = &Buffer[64 * (__int64)k + 47277752];
    if ( v3 )
      fwrite(v17, 1u, 0x40u, Stream);
    else
      fread(v17, 1u, 0x40u, Stream);
  }
  v18 = Buffer + 47282872;
  if ( v3 )
    fwrite(v18, 4u, 1u, Stream);
  else
    fread(v18, 4u, 1u, Stream);
  for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
  {
    v20 = &Buffer[64 * (__int64)m + 47282876];
    if ( v3 )
      fwrite(v20, 1u, 0x40u, Stream);
    else
      fread(v20, 1u, 0x40u, Stream);
  }
  v21 = 0;
  v28 = 0;
  if ( *v8 > 0 )
  {
    do
    {
      v22 = 0;
      for ( n = 0; v22 <= *v7; n = v22 )
      {
        v23 = 0;
        if ( *v6 >= 0 )
        {
          v24 = (v22 + ((__int64)v21 << 6)) << 6;
          do
          {
            v25 = 60 * (v24 + v23);
            v26 = &Buffer[v25 + 92];
            if ( v30 )
            {
              fwrite(v26, 4u, 1u, Stream);
              fwrite(&Buffer[v25 + 96], 4u, 1u, Stream);
              fwrite(&Buffer[v25 + 88], 4u, 1u, Stream);
              fwrite(&Buffer[v25 + 100], 4u, 1u, Stream);
              fwrite(&Buffer[v25 + 104], 4u, 1u, Stream);
              fwrite(&Buffer[v25 + 108], 4u, 1u, Stream);
              fwrite(&Buffer[v25 + 112], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 114], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 116], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 118], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 120], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 122], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 124], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 126], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 128], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 130], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 132], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 134], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 136], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 138], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 140], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 142], 2u, 1u, Stream);
              fwrite(&Buffer[v25 + 144], 4u, 1u, Stream);
            }
            else
            {
              fread(v26, 4u, 1u, Stream);
              fread(&Buffer[v25 + 96], 4u, 1u, Stream);
              fread(&Buffer[v25 + 88], 4u, 1u, Stream);
              fread(&Buffer[v25 + 100], 4u, 1u, Stream);
              fread(&Buffer[v25 + 104], 4u, 1u, Stream);
              fread(&Buffer[v25 + 108], 4u, 1u, Stream);
              fread(&Buffer[v25 + 112], 2u, 1u, Stream);
              fread(&Buffer[v25 + 114], 2u, 1u, Stream);
              fread(&Buffer[v25 + 116], 2u, 1u, Stream);
              fread(&Buffer[v25 + 118], 2u, 1u, Stream);
              fread(&Buffer[v25 + 120], 2u, 1u, Stream);
              fread(&Buffer[v25 + 122], 2u, 1u, Stream);
              fread(&Buffer[v25 + 124], 2u, 1u, Stream);
              fread(&Buffer[v25 + 126], 2u, 1u, Stream);
              fread(&Buffer[v25 + 128], 2u, 1u, Stream);
              fread(&Buffer[v25 + 130], 2u, 1u, Stream);
              fread(&Buffer[v25 + 132], 2u, 1u, Stream);
              fread(&Buffer[v25 + 134], 2u, 1u, Stream);
              fread(&Buffer[v25 + 136], 2u, 1u, Stream);
              fread(&Buffer[v25 + 138], 2u, 1u, Stream);
              fread(&Buffer[v25 + 140], 2u, 1u, Stream);
              fread(&Buffer[v25 + 142], 2u, 1u, Stream);
              fread(&Buffer[v25 + 144], 4u, 1u, Stream);
            }
            ++v23;
          }
          while ( v23 <= *v6 );
          v22 = n;
          v21 = v28;
        }
        ++v22;
      }
      v28 = ++v21;
    }
    while ( v21 < *v8 );
    v3 = v30;
  }
  sub_14001C7C0((__int64)Buffer, Stream, v3);
  return 1;
}

