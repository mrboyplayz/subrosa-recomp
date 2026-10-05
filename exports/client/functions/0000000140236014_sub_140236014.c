/* Address: 0x140236014 | Name: sub_140236014 | Size: 118 bytes */
bool __fastcall sub_140236014(void **a1, unsigned __int16 a2)
{
  _BYTE *v2; // r8
  __int64 v5; // rbx

  v2 = *a1;
  if ( !*a1 )
  {
    v5 = calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = (void *)v5;
    free_base(nullptr);
    v2 = *a1;
  }
  return ((unsigned __int8)(1 << (a2 & 7)) & v2[(unsigned __int64)a2 >> 3]) != 0;
}

