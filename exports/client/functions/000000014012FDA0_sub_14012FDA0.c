/* Address: 0x14012fda0 | Name: sub_14012FDA0 | Size: 193 bytes */
__int64 __fastcall sub_14012FDA0(_BYTE *a1, __int64 a2)
{
  int v4; // r9d
  char *v5; // rbx
  __int64 v8; // [rsp+0h] [rbp-238h] BYREF
  char v9[512]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v10; // [rsp+220h] [rbp-18h]

  *a1 = 0;
  v4 = rand() % 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      sub_140158AB0(v9, "there are new developments in the %s project. ", a2);
    }
    else if ( v4 == 2 )
    {
      sub_140158AB0(v9, "the %s project will revolutionize the industry. ", a2);
    }
  }
  else
  {
    sub_140158AB0(v9, "project %s has made progress in many areas. ", a2);
  }
  v5 = a1 - 1;
  while ( *++v5 != 0 )
    ;
  strcpy(v5, v9);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v10);
}

