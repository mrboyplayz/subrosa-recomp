/* Address: 0x14024c7ac | Name: sub_14024C7AC | Size: 98 bytes */
__int64 __fastcall sub_14024C7AC(_BYTE *a1, __int64 a2, __int64 a3)
{
  int *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _BYTE *v7; // r9
  __int64 v8; // r8
  char v9; // al

  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v3 = errno();
    v5 = 22;
LABEL_6:
    *v3 = v5;
    sub_14024CF6C(v4);
    return v5;
  }
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  do
  {
    v9 = v7[v8];
    *v7++ = v9;
    if ( !v9 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    v3 = errno();
    v5 = 34;
    goto LABEL_6;
  }
  return 0;
}

