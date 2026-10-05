/* Address: 0x1402593d8 | Name: sub_1402593D8 | Size: 108 bytes */
__int64 __fastcall sub_1402593D8(_WORD *a1, __int64 a2, __int64 a3)
{
  int *v3; // rax
  unsigned int v4; // ebx
  _WORD *v6; // r9
  __int64 v7; // r8
  __int16 v8; // ax

  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v3 = errno();
    v4 = 22;
LABEL_6:
    *v3 = v4;
    sub_14024CF6C();
    return v4;
  }
  v6 = a1;
  v7 = a3 - (_QWORD)a1;
  do
  {
    v8 = *(_WORD *)((char *)v6 + v7);
    *v6++ = v8;
    if ( !v8 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    v3 = errno();
    v4 = 34;
    goto LABEL_6;
  }
  return 0;
}

