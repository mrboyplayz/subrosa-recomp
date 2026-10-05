/* Address: 0x1400720e0 | Name: sub_1400720E0 | Size: 240 bytes */
_DWORD *__fastcall sub_1400720E0(unsigned int a1, int a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  char *v5; // rax
  __int64 v8; // [rsp+0h] [rbp-848h] BYREF
  _BYTE v9[1024]; // [rsp+20h] [rbp-828h] BYREF
  char Buffer[1024]; // [rsp+420h] [rbp-428h] BYREF

  v9[0] = 0;
  v3 = 23;
  v4 = HIDWORD(qword_19025F428[880 * a2]);
  do
  {
    sub_1400DBB30(Buffer, "%s\n");
    v5 = (char *)&v8 + 31;
    while ( *++v5 != 0 )
      ;
    strcpy(v5, Buffer);
    LOBYTE(v4) = (v4 + 1) & 0x1F;
    --v3;
  }
  while ( v3 );
  return sub_14003E1A0(a1, v9);
}

