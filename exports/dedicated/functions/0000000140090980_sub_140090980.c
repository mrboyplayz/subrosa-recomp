/* Address: 0x140090980 | Name: sub_140090980 | Size: 137 bytes */
int __fastcall sub_140090980(const char *a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  int i; // eax

  dword_1406A6784 = 0;
  v1 = fopen(a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    for ( i = fgetc(v1); i != -1; i = fgetc(v2) )
      *((_BYTE *)&dword_1406A6780 + dword_1406A6784++ + 8) = i;
    *((_BYTE *)&dword_1406A6780 + dword_1406A6784 + 8) = 0;
    LODWORD(v1) = fclose(v2);
  }
  dword_1406A6780 = 0;
  return (int)v1;
}

