/* Address: 0x1400bbf90 | Name: sub_1400BBF90 | Size: 193 bytes */
__int64 __fastcall sub_1400BBF90(_BYTE *a1)
{
  int v2; // r9d
  char *v3; // rdx
  _BYTE *v4; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  char Buffer[512]; // [rsp+20h] [rbp-218h] BYREF

  *a1 = 0;
  v2 = rand() % 3;
  switch ( v2 )
  {
    case 0:
      v3 = "the data is stored in the file %s. ";
LABEL_7:
      sub_1400DBB30(Buffer, v3);
      break;
    case 1:
      v3 = "the file named %s contains the data. ";
      goto LABEL_7;
    case 2:
      v3 = "the secret info is located in %s. ";
      goto LABEL_7;
  }
  v4 = a1 - 1;
  while ( *++v4 != 0 )
    ;
  v6 = 0;
  do
  {
    result = (unsigned __int8)Buffer[v6];
    v4[v6++] = result;
  }
  while ( (_BYTE)result );
  return result;
}

