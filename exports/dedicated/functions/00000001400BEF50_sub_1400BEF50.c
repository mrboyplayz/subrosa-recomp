/* Address: 0x1400bef50 | Name: sub_1400BEF50 | Size: 103 bytes */
int __fastcall sub_1400BEF50(const char *a1)
{
  FILE *v2; // rax

  v2 = fopen("serverlog.txt", "rb+");
  qword_1962BCBC8 = v2;
  if ( v2 )
  {
    fseek(v2, 0, 2);
    sub_14004F330(qword_1962BCBC8, "%s\n", a1);
    LODWORD(v2) = fclose(qword_1962BCBC8);
  }
  return (int)v2;
}

