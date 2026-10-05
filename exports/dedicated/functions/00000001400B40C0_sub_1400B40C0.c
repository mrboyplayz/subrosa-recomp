/* Address: 0x1400b40c0 | Name: sub_1400B40C0 | Size: 184 bytes */
int __fastcall sub_1400B40C0(const char *a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  int Buffer; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  HIDWORD(qword_16D1ED470) = 0;
  v1 = fopen(a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    fread(&Buffer, 4u, 1u, v1);
    if ( Buffer == 1 )
    {
      fread(&v5, 4u, 1u, v2);
      if ( v5 == dword_1401469EC )
      {
        LODWORD(qword_16D1ED470) = 0;
        fread((char *)&qword_16D1ED470 + 4, 4u, 1u, v2);
        fread(::Buffer, 1u, SHIDWORD(qword_16D1ED470), v2);
      }
    }
    LODWORD(v1) = fclose(v2);
  }
  return (int)v1;
}

