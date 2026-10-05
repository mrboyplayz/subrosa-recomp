/* Address: 0x1400bc2b0 | Name: sub_1400BC2B0 | Size: 208 bytes */
__int64 __fastcall sub_1400BC2B0(_BYTE *a1)
{
  int v2; // edi
  char *v3; // rdx
  _BYTE *v4; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  char Buffer[512]; // [rsp+20h] [rbp-218h] BYREF

  *a1 = 0;
  v2 = rand() % 4;
  sub_1400DBB30(Buffer, "we are now adding coversheets to tps reports. ");
  switch ( v2 )
  {
    case 1:
      v3 = "the company picnic is next saturday. ";
LABEL_7:
      sub_1400DBB30(Buffer, v3);
      break;
    case 2:
      v3 = "next friday is hawaiian shirt day. ";
      goto LABEL_7;
    case 3:
      v3 = "we need to create more synergy. ";
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

