/* Address: 0x140232088 | Name: sub_140232088 | Size: 69 bytes */
void *__fastcall sub_140232088(void **a1)
{
  void *result; // rax
  __int64 v3; // rbx

  result = *a1;
  if ( !*a1 )
  {
    v3 = calloc_base(0x2000, 1);
    free_base(*a1);
    *a1 = (void *)v3;
    free_base(nullptr);
    return *a1;
  }
  return result;
}

