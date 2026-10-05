/* Address: 0x140261bbc | Name: sub_140261BBC | Size: 108 bytes */
void __fastcall sub_140261BBC(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  if ( a1 )
  {
    v2 = *(void **)a1;
    if ( v2 != off_140302AE0 )
      free_base(v2);
    v3 = *(void **)(a1 + 8);
    if ( v3 != off_140302AE8 )
      free_base(v3);
    v4 = *(void **)(a1 + 16);
    if ( v4 != off_140302AF0 )
      free_base(v4);
    v5 = *(void **)(a1 + 88);
    if ( v5 != off_140302B38 )
      free_base(v5);
    v6 = *(void **)(a1 + 96);
    if ( v6 != off_140302B40 )
      free_base(v6);
  }
}

