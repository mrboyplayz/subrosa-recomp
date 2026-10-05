/* Address: 0x140235d1c | Name: sub_140235D1C | Size: 108 bytes */
__int64 __fastcall sub_140235D1C(void **a1, unsigned __int16 a2)
{
  _BYTE *v2; // r8
  __int64 v5; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( !*a1 )
  {
    v5 = calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = (void *)v5;
    free_base(nullptr);
    v2 = *a1;
  }
  result = a2 & 7;
  v2[(unsigned __int64)a2 >> 3] |= 1 << result;
  return result;
}

