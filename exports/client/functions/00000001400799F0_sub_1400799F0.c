/* Address: 0x1400799f0 | Name: sub_1400799F0 | Size: 171 bytes */
void __fastcall sub_1400799F0(__int64 a1)
{
  __int64 v1; // rax
  FILE *v2; // rbx
  signed int v3; // eax

  dword_140404A6C[129454558] = 0;
  v1 = MEMORY[0x14020B8D8](a1, "rb");
  v2 = (FILE *)v1;
  if ( v1 )
  {
    MEMORY[0x14020C4A8](v1, 0, 2);
    dword_140404A6C[129454558] = ftell(v2);
    MEMORY[0x14020C4A8](v2, 0, 0);
    v3 = dword_140404A6C[129454558];
    if ( (int)dword_140404A6C[129454558] > 1048574 )
      v3 = 1048574;
    dword_140404A6C[129454558] = v3;
    fread(&dword_140404A6C[129454559], v3, 1, v2);
    *((_BYTE *)&dword_140404A6C[129454559] + (int)dword_140404A6C[129454558]) = 0;
    sub_14020B9E8(v2);
  }
  dword_140404A6C[129454557] = 0;
}

