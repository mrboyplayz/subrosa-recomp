/* Address: 0x140259444 | Name: sub_140259444 | Size: 101 bytes */
__int64 __fastcall sub_140259444(_WORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int *v4; // rax
  _WORD *v6; // r9
  __int64 v7; // r8
  __int16 v8; // ax

  v3 = 0;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v4 = errno();
    v3 = 22;
LABEL_6:
    *v4 = v3;
    sub_14024CF6C();
    return v3;
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
    v4 = errno();
    v3 = 34;
    goto LABEL_6;
  }
  return v3;
}

