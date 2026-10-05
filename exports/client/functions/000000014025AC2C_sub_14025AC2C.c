/* Address: 0x14025ac2c | Name: sub_14025AC2C | Size: 134 bytes */
__int64 __fastcall sub_14025AC2C(_WORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // r9
  int *v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int16 v8; // ax

  v3 = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v4 = errno();
    v5 = 22;
LABEL_6:
    *v4 = v5;
    sub_14024CF6C();
    return v5;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v3 = 0;
    goto LABEL_5;
  }
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = *(_WORD *)((char *)a1 + v7);
    *a1++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *v3 = 0;
    v4 = errno();
    v5 = 34;
    goto LABEL_6;
  }
  return 0;
}

