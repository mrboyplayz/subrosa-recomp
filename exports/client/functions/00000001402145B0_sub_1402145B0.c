/* Address: 0x1402145b0 | Name: sub_1402145B0 | Size: 105 bytes */
void __fastcall MEMORY[0x1402145B0](#105 *this, char *a2, struct #68 *const a3)
{
  char v3; // r9
  char v4; // al
  char v5; // dl
  char *v6; // rcx
  char *v7; // r8
  char *v8; // rdx
  char v9; // al

  v3 = ***(_BYTE ***)(*(_QWORD *)a2 + 248LL);
  v4 = *(_BYTE *)this;
  if ( *(_BYTE *)this )
  {
    v5 = *(_BYTE *)this;
    do
    {
      v4 = v5;
      if ( v5 == v3 )
        break;
      this = (#105 *)((char *)this + 1);
      v4 = *(_BYTE *)this;
      v5 = *(_BYTE *)this;
    }
    while ( *(_BYTE *)this );
  }
  v6 = (char *)this + 1;
  if ( v4 )
  {
    while ( *v6 && ((*v6 - 69) & 0xDF) != 0 )
      ++v6;
    v7 = v6;
    do
      --v6;
    while ( *v6 == 48 );
    v8 = v6 - 1;
    if ( *v6 != v3 )
      v8 = v6;
    do
    {
      v9 = *v7;
      ++v8;
      ++v7;
      *v8 = v9;
    }
    while ( v9 );
  }
}

