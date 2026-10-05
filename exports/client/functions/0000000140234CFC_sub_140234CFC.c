/* Address: 0x140234cfc | Name: sub_140234CFC | Size: 87 bytes */
void __fastcall sub_140234CFC(void **a1)
{
  _WORD *v2; // rcx
  __int64 v3; // rbx

  v2 = *a1;
  if ( v2 || (v3 = calloc_base(0x2000, 1), free_base(*a1), *a1 = (void *)v3, free_base(nullptr), (v2 = *a1) != nullptr) )
    MEMORY[0x1401FCD30](v2, 0, 0x2000u);
}

