/* Address: 0x1402326e8 | Name: sub_1402326E8 | Size: 118 bytes */
char *__fastcall sub_1402326E8(void **a1)
{
  _BYTE *v1; // rdx
  __int64 v3; // rbx
  char *result; // rax
  _BYTE *v5; // rcx

  v1 = *a1;
  if ( !*a1 )
  {
    v3 = calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = (void *)v3;
    free_base(nullptr);
    v1 = *a1;
  }
  result = v1 + 0x2000;
  v5 = v1;
  if ( v1 < v1 + 0x2000 )
  {
    do
    {
      *v5 = ~*v5;
      result = (char *)(++v5 - v1);
    }
    while ( v5 - v1 != (v1 + 0x2000 >= v1 ? 0x2000 : 0) );
  }
  return result;
}

