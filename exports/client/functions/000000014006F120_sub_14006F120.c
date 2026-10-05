/* Address: 0x14006f120 | Name: sub_14006F120 | Size: 172 bytes */
// UI label copy helper. Copies text to widget label buffer and stops visible label at null or ## hidden-ID marker.
__int64 __fastcall sub_14006F120(__int64 a1, char *a2)
{
  __int64 v3; // r8
  char v4; // al
  int v5; // edx
  _BYTE *v6; // rax
  __int64 v7; // r8
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl

  v3 = a1 - (_QWORD)a2;
  do
  {
    v4 = *a2;
    a2[v3] = *a2;
    ++a2;
  }
  while ( v4 );
  v5 = 0;
  v6 = (_BYTE *)(a1 + 2);
  v7 = -2 - a1;
  do
  {
    v8 = *(v6 - 2);
    if ( !v8 || v8 == 35 && *(v6 - 1) == 35 )
      break;
    v9 = *(v6 - 1);
    ++v5;
    if ( !v9 || v9 == 35 && *v6 == 35 )
      break;
    ++v5;
    if ( !*v6 || *v6 == 35 && v6[1] == 35 )
      break;
    v10 = v6[1];
    ++v5;
    if ( !v10 || v10 == 35 && v6[2] == 35 )
      break;
    v11 = v6[2];
    ++v5;
    if ( !v11 || v11 == 35 && v6[3] == 35 )
      break;
    v6 += 5;
    ++v5;
  }
  while ( (__int64)&v6[v7] < 255 );
  *(_BYTE *)(v5 + a1) = 0;
  return v5;
}

