/* Address: 0x14012fce0 | Name: sub_14012FCE0 | Size: 187 bytes */
__int64 __fastcall sub_14012FCE0(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v6; // r10d
  char *v7; // rbx
  __int64 v10; // [rsp+0h] [rbp-248h] BYREF
  char v11[512]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v12; // [rsp+220h] [rbp-28h]

  *a1 = 0;
  v6 = rand() % 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      sub_140158AB0(v11, "the lab at %s and %s has made great strides. ", a2, a3);
    }
    else if ( v6 == 2 )
    {
      sub_140158AB0(v11, "we are increasing development at the %s and %s laboratory. ", a2, a3);
    }
  }
  else
  {
    sub_140158AB0(v11, "the laboratory at %s and %s has the data. ", a2, a3);
  }
  v7 = a1 - 1;
  while ( *++v7 != 0 )
    ;
  strcpy(v7, v11);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v12);
}

