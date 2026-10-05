/* Address: 0x1400bc060 | Name: sub_1400BC060 | Size: 176 bytes */
__int64 __fastcall sub_1400BC060(_BYTE *a1)
{
  int v2; // edi
  _BYTE *v3; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  char Buffer[512]; // [rsp+20h] [rbp-218h] BYREF

  *a1 = 0;
  v2 = rand() % 2;
  sub_1400DBB30(Buffer, "this project is extremely high value. ");
  if ( v2 == 1 )
    sub_1400DBB30(Buffer, "this is a high priority project. ");
  v3 = a1 - 1;
  while ( *++v3 != 0 )
    ;
  v5 = 0;
  do
  {
    result = (unsigned __int8)Buffer[v5];
    v3[v5++] = result;
  }
  while ( (_BYTE)result );
  return result;
}

