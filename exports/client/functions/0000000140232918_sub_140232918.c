/* Address: 0x140232918 | Name: sub_140232918 | Size: 75 bytes */
bool __fastcall sub_140232918(void **a1)
{
  bool v2; // zf
  __int64 v3; // rbx

  v2 = *a1 == nullptr;
  if ( !*a1 )
  {
    v3 = calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = (void *)v3;
    free_base(nullptr);
    v2 = *a1 == nullptr;
  }
  return !v2;
}

