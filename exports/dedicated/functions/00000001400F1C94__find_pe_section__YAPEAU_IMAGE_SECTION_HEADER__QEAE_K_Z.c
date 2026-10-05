/* Address: 0x1400f1c94 | Name: ?find_pe_section@@YAPEAU_IMAGE_SECTION_HEADER@@QEAE_K@Z | Size: 73 bytes */
struct _IMAGE_SECTION_HEADER *__fastcall find_pe_section(unsigned __int8 *const a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 *v3; // r9
  unsigned __int8 *v4; // r8
  unsigned __int64 v5; // rcx

  v2 = *((int *)a1 + 15);
  v3 = &a1[v2 + 24 + *(unsigned __int16 *)&a1[v2 + 20]];
  v4 = &v3[40 * *(unsigned __int16 *)&a1[v2 + 6]];
  while ( v3 != v4 )
  {
    v5 = *((unsigned int *)v3 + 3);
    if ( a2 >= v5 && a2 < (unsigned int)(v5 + *((_DWORD *)v3 + 2)) )
      return (struct _IMAGE_SECTION_HEADER *)v3;
    v3 += 40;
  }
  return nullptr;
}

