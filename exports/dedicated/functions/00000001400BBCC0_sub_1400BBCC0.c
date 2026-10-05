/* Address: 0x1400bbcc0 | Name: sub_1400BBCC0 | Size: 718 bytes */
__int64 __fastcall sub_1400BBCC0(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // ecx
  char *v8; // rcx
  bool v9; // zf
  char *v10; // rcx
  int v11; // ecx
  char *v12; // rdx
  char *v13; // rdx
  int v14; // r8d
  _OWORD *v15; // rax
  char *v16; // rcx
  char *v17; // rcx
  char *v18; // rcx
  char *v19; // rdx
  _BYTE *v20; // rbx
  __int64 v21; // rcx
  __int64 result; // rax
  char Buffer[512]; // [rsp+20h] [rbp-238h] BYREF

  *a1 = 0;
  v7 = rand() % 3;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v10 = a1 - 1;
      do
        v9 = *++v10 == 0;
      while ( !v9 );
      strcpy(v10, "Reports indicate that ");
    }
  }
  else
  {
    v8 = a1 - 1;
    do
      v9 = *++v8 == 0;
    while ( !v9 );
    strcpy(v8, "We have received reports that ");
  }
  v11 = rand() % 3;
  switch ( v11 )
  {
    case 0:
      v12 = "the laboratory at %s and %s ";
LABEL_15:
      sub_1400DBB30(Buffer, v12);
      break;
    case 1:
      v12 = "the lab at %s and %s ";
      goto LABEL_15;
    case 2:
      v12 = "%s and %s laboratory ";
      goto LABEL_15;
  }
  v13 = a1 - 1;
  do
    v9 = *++v13 == 0;
  while ( !v9 );
  strcpy(v13, Buffer);
  v14 = rand() % 3;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v16 = a1 - 1;
      do
        v9 = *++v16 == 0;
      while ( !v9 );
      strcpy(v16, "has disks containing info");
    }
    else if ( v14 == 2 )
    {
      v17 = a1 - 1;
      do
        v9 = *++v17 == 0;
      while ( !v9 );
      strcpy(v17, "may have disks");
    }
  }
  else
  {
    v15 = a1 - 1;
    do
    {
      v9 = *((_BYTE *)v15 + 1) == 0;
      v15 = (_OWORD *)((char *)v15 + 1);
    }
    while ( !v9 );
    *v15 = xmmword_1400F64D0;
  }
  sub_1400DBB30(Buffer, " the filename is %s ");
  v18 = a1 - 1;
  do
    v9 = *++v18 == 0;
  while ( !v9 );
  strcpy(v18, Buffer);
  v19 = "project %s is high value";
  if ( !a6 )
    v19 = "project %s is normal value";
  sub_1400DBB30(Buffer, v19);
  v20 = a1 - 1;
  do
    v9 = *++v20 == 0;
  while ( !v9 );
  v21 = 0;
  do
  {
    result = (unsigned __int8)Buffer[v21];
    v20[v21++] = result;
  }
  while ( (_BYTE)result );
  return result;
}

