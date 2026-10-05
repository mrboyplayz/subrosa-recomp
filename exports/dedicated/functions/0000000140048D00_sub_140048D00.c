/* Address: 0x140048d00 | Name: sub_140048D00 | Size: 177 bytes */
int __fastcall sub_140048D00(const char *a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  int v3; // eax

  dword_195899544 = 0;
  v1 = fopen(a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    fseek(v1, 0, 2);
    dword_195899544 = ftell(v2);
    fseek(v2, 0, 0);
    v3 = dword_195899544;
    if ( dword_195899544 > 1048574 )
      v3 = 1048574;
    dword_195899544 = v3;
    fread(byte_195899548, v3, 1u, v2);
    byte_195899548[dword_195899544] = 0;
    LODWORD(v1) = fclose(v2);
  }
  dword_195899540 = 0;
  return (int)v1;
}

