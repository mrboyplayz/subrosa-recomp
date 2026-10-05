/* Address: 0x140196d60 | Name: sub_140196D60 | Size: 2250 bytes */
__int64 __fastcall sub_140196D60(char *Buffer, FILE *Stream, int a3)
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
  int v29; // [rsp+88h] [rbp+10h] BYREF
  int v30; // [rsp+90h] [rbp+18h]
  int n; // [rsp+98h] [rbp+20h]

  v30 = a3;
  v3 = a3;
  if ( !Stream )
    return 0;
  v29 = 1;
  if ( a3 )
  {
    sub_14020CE0C(&v29, 4, 1, Stream);
    sub_14020CE0C(Buffer, 1, 64, Stream);
    v6 = (int *)(Buffer + 64);
    sub_14020CE0C(Buffer + 64, 4, 1, Stream);
    v7 = Buffer + 68;
    sub_14020CE0C(Buffer + 68, 4, 1, Stream);
    v8 = (int *)(Buffer + 72);
    sub_14020CE0C(Buffer + 72, 4, 1, Stream);
    sub_14020CE0C(Buffer + 76, 4, 1, Stream);
    sub_14020CE0C(Buffer + 80, 4, 1, Stream);
    sub_14020CE0C(Buffer + 84, 4, 1, Stream);
    v9 = Buffer + 47187628;
    sub_14020CE0C(Buffer + 47187628, 4, 1, Stream);
    goto LABEL_6;
  }
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 17) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  fread(&v29, 4, 1, Stream);
  if ( v29 != 1 )
    return 0;
  fread(Buffer, 1, 64, Stream);
  v6 = (int *)(Buffer + 64);
  fread(Buffer + 64, 4, 1, Stream);
  v7 = Buffer + 68;
  fread(Buffer + 68, 4, 1, Stream);
  v8 = (int *)(Buffer + 72);
  fread(Buffer + 72, 4, 1, Stream);
  fread(Buffer + 76, 4, 1, Stream);
  fread(Buffer + 80, 4, 1, Stream);
  fread(Buffer + 84, 4, 1, Stream);
  v9 = Buffer + 47187628;
  fread(Buffer + 47187628, 4, 1, Stream);
LABEL_6:
  for ( i = 0; i < *v9; ++i )
  {
    v11 = &Buffer[64 * (__int64)i + 47187632];
    if ( v3 )
      sub_14020CE0C(v11, 1, 64, Stream);
    else
      fread(v11, 1, 64, Stream);
  }
  v12 = Buffer + 47208112;
  if ( v3 )
    sub_14020CE0C(v12, 4, 1, Stream);
  else
    fread(v12, 4, 1, Stream);
  for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
  {
    v14 = &Buffer[64 * (__int64)j + 47208116];
    if ( v3 )
      sub_14020CE0C(v14, 1, 64, Stream);
    else
      fread(v14, 1, 64, Stream);
  }
  v15 = Buffer + 47277748;
  if ( v3 )
    sub_14020CE0C(v15, 4, 1, Stream);
  else
    fread(v15, 4, 1, Stream);
  for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
  {
    v17 = &Buffer[64 * (__int64)k + 47277752];
    if ( v3 )
      sub_14020CE0C(v17, 1, 64, Stream);
    else
      fread(v17, 1, 64, Stream);
  }
  v18 = Buffer + 47282872;
  if ( v3 )
    sub_14020CE0C(v18, 4, 1, Stream);
  else
    fread(v18, 4, 1, Stream);
  for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
  {
    v20 = &Buffer[64 * (__int64)m + 47282876];
    if ( v3 )
      sub_14020CE0C(v20, 1, 64, Stream);
    else
      fread(v20, 1, 64, Stream);
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
              sub_14020CE0C(v26, 4, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 96], 4, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 88], 4, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 100], 4, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 104], 4, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 108], 4, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 112], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 114], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 116], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 118], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 120], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 122], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 124], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 126], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 128], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 130], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 132], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 134], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 136], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 138], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 140], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 142], 2, 1, Stream);
              sub_14020CE0C(&Buffer[v25 + 144], 4, 1, Stream);
            }
            else
            {
              fread(v26, 4, 1, Stream);
              fread(&Buffer[v25 + 96], 4, 1, Stream);
              fread(&Buffer[v25 + 88], 4, 1, Stream);
              fread(&Buffer[v25 + 100], 4, 1, Stream);
              fread(&Buffer[v25 + 104], 4, 1, Stream);
              fread(&Buffer[v25 + 108], 4, 1, Stream);
              fread(&Buffer[v25 + 112], 2, 1, Stream);
              fread(&Buffer[v25 + 114], 2, 1, Stream);
              fread(&Buffer[v25 + 116], 2, 1, Stream);
              fread(&Buffer[v25 + 118], 2, 1, Stream);
              fread(&Buffer[v25 + 120], 2, 1, Stream);
              fread(&Buffer[v25 + 122], 2, 1, Stream);
              fread(&Buffer[v25 + 124], 2, 1, Stream);
              fread(&Buffer[v25 + 126], 2, 1, Stream);
              fread(&Buffer[v25 + 128], 2, 1, Stream);
              fread(&Buffer[v25 + 130], 2, 1, Stream);
              fread(&Buffer[v25 + 132], 2, 1, Stream);
              fread(&Buffer[v25 + 134], 2, 1, Stream);
              fread(&Buffer[v25 + 136], 2, 1, Stream);
              fread(&Buffer[v25 + 138], 2, 1, Stream);
              fread(&Buffer[v25 + 140], 2, 1, Stream);
              fread(&Buffer[v25 + 142], 2, 1, Stream);
              fread(&Buffer[v25 + 144], 4, 1, Stream);
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
  sub_140029800((__int64)Buffer, (__int64)Stream, v3);
  return 1;
}

