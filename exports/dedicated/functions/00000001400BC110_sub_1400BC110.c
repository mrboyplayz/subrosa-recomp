/* Address: 0x1400bc110 | Name: sub_1400BC110 | Size: 202 bytes */
__int64 __fastcall sub_1400BC110(_BYTE *a1)
{
  int v2; // r10d
  char *v3; // rdx
  _BYTE *v4; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  char Buffer[512]; // [rsp+20h] [rbp-228h] BYREF

  *a1 = 0;
  v2 = rand() % 3;
  switch ( v2 )
  {
    case 0:
      v3 = "the laboratory at %s and %s has the data. ";
LABEL_7:
      sub_1400DBB30(Buffer, v3);
      break;
    case 1:
      v3 = "the lab at %s and %s has made great strides. ";
      goto LABEL_7;
    case 2:
      v3 = "we are increasing development at the %s and %s laboratory. ";
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

