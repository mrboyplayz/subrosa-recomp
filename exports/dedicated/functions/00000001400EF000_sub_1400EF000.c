/* Address: 0x1400ef000 | Name: sub_1400EF000 | Size: 260 bytes */
int __fastcall sub_1400EF000(int a1)
{
  int result; // eax
  __int64 v2; // rdi
  FILE *v3; // rcx
  unsigned int i; // ebx

  result = a1;
  v2 = 1060912LL * a1;
  v3 = *(FILE **)((char *)&Stream + v2);
  if ( v3 )
  {
    if ( *(_DWORD *)((char *)&Stream + v2 + 8) )
    {
      fseek(v3, 4, 0);
      fwrite((char *)&Stream + v2 + 16, 4u, 1u, *(FILE **)((char *)&Stream + v2));
      fwrite((char *)&Stream + v2 + 20, 4u, 1u, *(FILE **)((char *)&Stream + v2));
      fseek(*(FILE **)((char *)&Stream + v2), *(_DWORD *)((char *)&Stream + v2 + 16), 0);
      for ( i = 0; i < *(_DWORD *)((char *)&Stream + v2 + 20); ++i )
        fwrite((char *)&unk_1407A92B8 + 64 * (__int64)(int)i + v2, 0x40u, 1u, *(FILE **)((char *)&Stream + v2));
    }
    result = fclose(*(FILE **)((char *)&Stream + v2));
    *(FILE **)((char *)&Stream + v2) = nullptr;
  }
  return result;
}

