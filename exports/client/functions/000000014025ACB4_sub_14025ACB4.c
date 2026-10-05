/* Address: 0x14025acb4 | Name: sub_14025ACB4 | Size: 127 bytes */
__int64 __fastcall sub_14025ACB4(_WORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _WORD *v4; // r9
  int *v5; // rax
  __int64 v7; // r8
  __int16 v8; // ax

  v3 = 0;
  v4 = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v5 = errno();
    v3 = 22;
LABEL_6:
    *v5 = v3;
    sub_14024CF6C();
    return v3;
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
    *v4 = 0;
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
    *v4 = 0;
    v5 = errno();
    v3 = 34;
    goto LABEL_6;
  }
  return v3;
}

