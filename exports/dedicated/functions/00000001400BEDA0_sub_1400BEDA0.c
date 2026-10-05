/* Address: 0x1400beda0 | Name: sub_1400BEDA0 | Size: 74 bytes */
int sub_1400BEDA0()
{
  FILE *v0; // rax

  v0 = fopen("serverlog.txt", "wb");
  qword_1962BCBC8 = v0;
  if ( v0 )
  {
    sub_14004F330(v0, "Server log\n");
    LODWORD(v0) = fclose(qword_1962BCBC8);
  }
  return (int)v0;
}

