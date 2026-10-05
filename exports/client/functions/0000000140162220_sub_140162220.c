/* Address: 0x140162220 | Name: sub_140162220 | Size: 447 bytes */
__int64 __fastcall sub_140162220(_QWORD *a1, char *a2, char *a3, char *a4)
{
  int v4; // edi
  char *v5; // r14
  char *v6; // rsi
  char *v7; // r15
  const char *v9; // rax
  int v10; // eax
  _BYTE *v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-478h] BYREF
  __int64 v14; // [rsp+20h] [rbp-458h] BYREF
  char v15; // [rsp+28h] [rbp-450h] BYREF
  _BYTE v16[1024]; // [rsp+30h] [rbp-448h] BYREF
  __int64 v17; // [rsp+430h] [rbp-48h]

  v4 = 0;
  v5 = &v15;
  v6 = &v15;
  v7 = &v15;
  if ( a2 )
    v5 = a2;
  if ( a3 )
    v6 = a3;
  if ( a4 )
    v7 = a4;
  if ( (unsigned int)sub_140162BB0() )
  {
    v9 = (const char *)sub_140162030((__int64)a1, (__int64)v16);
    v14 = (__int64)v9;
    if ( !*v9 )
      goto LABEL_19;
    do
    {
      if ( !strcmp(v9, "FORMAT=32-bit_rle_rgbe") )
        v4 = 1;
      v9 = (const char *)sub_140162030((__int64)a1, (__int64)v16);
      v14 = (__int64)v9;
    }
    while ( *v9 );
    if ( !v4 )
      goto LABEL_19;
    v14 = sub_140162030((__int64)a1, (__int64)v16);
    if ( (unsigned int)strncmp(v14, "-Y ", 3) )
      goto LABEL_19;
    v14 += 3;
    v10 = sub_14023CCCC(v14, &v14, 10);
    v11 = (_BYTE *)v14;
    for ( *(_DWORD *)v6 = v10; *v11 == 32; v14 = (__int64)v11 )
      ++v11;
    if ( !(unsigned int)strncmp(v11, "+X ", 3) )
    {
      v14 += 3;
      *(_DWORD *)v5 = sub_14023CCCC(v14, 0, 10);
      *(_DWORD *)v7 = 3;
    }
    else
    {
LABEL_19:
      a1[24] = a1[26];
      a1[25] = a1[27];
    }
  }
  else
  {
    a1[24] = a1[26];
    a1[25] = a1[27];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v17);
}

