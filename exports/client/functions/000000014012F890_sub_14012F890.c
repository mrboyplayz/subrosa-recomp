/* Address: 0x14012f890 | Name: sub_14012F890 | Size: 718 bytes */
__int64 __fastcall sub_14012F890(_BYTE *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v10; // ecx
  char *v11; // rcx
  bool v12; // zf
  char *v13; // rcx
  int v14; // ecx
  char *v15; // rdx
  int v16; // r8d
  _OWORD *v17; // rax
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
  const char *v21; // rdx
  char *v22; // rbx
  __int64 v24; // [rsp+0h] [rbp-258h] BYREF
  char v25[512]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v26; // [rsp+220h] [rbp-38h]

  *a1 = 0;
  v10 = rand() % 3;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v13 = a1 - 1;
      do
        v12 = *++v13 == 0;
      while ( !v12 );
      strcpy(v13, "Reports indicate that ");
    }
  }
  else
  {
    v11 = a1 - 1;
    do
      v12 = *++v11 == 0;
    while ( !v12 );
    strcpy(v11, "We have received reports that ");
  }
  v14 = rand() % 3;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      sub_140158AB0(v25, "the lab at %s and %s ", a3, a4);
    }
    else if ( v14 == 2 )
    {
      sub_140158AB0(v25, "%s and %s laboratory ", a3, a4);
    }
  }
  else
  {
    sub_140158AB0(v25, "the laboratory at %s and %s ", a3, a4);
  }
  v15 = a1 - 1;
  do
    v12 = *++v15 == 0;
  while ( !v12 );
  strcpy(v15, v25);
  v16 = rand() % 3;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v18 = a1 - 1;
      do
        v12 = *++v18 == 0;
      while ( !v12 );
      strcpy(v18, "has disks containing info");
    }
    else if ( v16 == 2 )
    {
      v19 = a1 - 1;
      do
        v12 = *++v19 == 0;
      while ( !v12 );
      strcpy(v19, "may have disks");
    }
  }
  else
  {
    v17 = a1 - 1;
    do
    {
      v12 = *((_BYTE *)v17 + 1) == 0;
      v17 = (_OWORD *)((char *)v17 + 1);
    }
    while ( !v12 );
    *v17 = xmmword_1402773D8;
  }
  sub_140158AB0(v25, " the filename is %s ", a2);
  v20 = a1 - 1;
  do
    v12 = *++v20 == 0;
  while ( !v12 );
  strcpy(v20, v25);
  v21 = "project %s is high value";
  if ( !a6 )
    v21 = "project %s is normal value";
  sub_140158AB0(v25, v21, a5);
  v22 = a1 - 1;
  do
    v12 = *++v22 == 0;
  while ( !v12 );
  strcpy(v22, v25);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v26);
}

