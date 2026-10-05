/* Address: 0x1401fe364 | Name: sub_1401FE364 | Size: 166 bytes */
__int64 __fastcall sub_1401FE364(DName *this, __int64 a2)
{
  char *v2; // r9
  unsigned __int64 v3; // r8
  int v4; // esp
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  char v7; // [rsp+35h] [rbp-13h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = &v7;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = 0;
  v3 = abs64(a2);
  do
  {
    *--v2 = v3 % 0xA + 48;
    v3 /= 0xAu;
  }
  while ( v3 );
  if ( a2 < 0 )
    *--v2 = 45;
  sub_1401FE028((__int64)this, v2, v4 + 53 - (_DWORD)v2);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v8);
}

