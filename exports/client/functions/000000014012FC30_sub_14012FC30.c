/* Address: 0x14012fc30 | Name: sub_14012FC30 | Size: 176 bytes */
__int64 __fastcall sub_14012FC30(_BYTE *a1)
{
  int v2; // edi
  char *v3; // rbx
  __int64 v6; // [rsp+0h] [rbp-238h] BYREF
  char v7[512]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v8; // [rsp+220h] [rbp-18h]

  *a1 = 0;
  v2 = rand() % 2;
  sub_140158AB0(v7, "this project is extremely high value. ");
  if ( v2 == 1 )
    sub_140158AB0(v7, "this is a high priority project. ");
  v3 = a1 - 1;
  while ( *++v3 != 0 )
    ;
  strcpy(v3, v7);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v8);
}

