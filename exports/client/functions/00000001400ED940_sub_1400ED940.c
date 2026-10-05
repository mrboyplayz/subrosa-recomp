/* Address: 0x1400ed940 | Name: sub_1400ED940 | Size: 135 bytes */
void __fastcall sub_1400ED940(__int64 a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  int i; // eax

  dword_140404A6C[293250414] = 0;
  v1 = (FILE *)MEMORY[0x14020B8D8](a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    for ( i = sub_14020BB2C(v1); i != -1; i = sub_14020BB2C(v2) )
      *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]++) = i;
    *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]) = 0;
    sub_14020B9E8(v2);
  }
  dword_140404A6C[293250413] = 0;
}

