/* Address: 0x1400b4380 | Name: sub_1400B4380 | Size: 308 bytes */
int sub_1400B4380()
{
  int v0; // ebx
  FILE *i; // rax
  FILE *v2; // rax
  FILE *v3; // rbx
  int Buffer; // [rsp+20h] [rbp-68h] BYREF
  int v6[3]; // [rsp+24h] [rbp-64h] BYREF
  char FileName[64]; // [rsp+30h] [rbp-58h] BYREF

  v0 = 1;
  sub_1400DBB30(FileName, "replay%03d.srp");
  for ( i = fopen(FileName, "rb"); i; i = fopen(FileName, "rb") )
  {
    if ( v0 >= 1000 )
      break;
    fclose(i);
    ++v0;
    sub_1400DBB30(FileName, "replay%03d.srp");
  }
  v2 = fopen(FileName, "wb");
  v3 = v2;
  if ( v2 )
  {
    Buffer = 1;
    fwrite(&Buffer, 4u, 1u, v2);
    v6[0] = dword_1401469EC;
    fwrite(v6, 4u, 1u, v3);
    fwrite((char *)&qword_16D1ED470 + 4, 4u, 1u, v3);
    fwrite(::Buffer, 1u, SHIDWORD(qword_16D1ED470), v3);
    LODWORD(v2) = fclose(v3);
  }
  return (int)v2;
}

