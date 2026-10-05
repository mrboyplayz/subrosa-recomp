/* Address: 0x1401fe40c | Name: sub_1401FE40C | Size: 136 bytes */
__int64 __fastcall sub_1401FE40C(DName *this, unsigned __int64 a2)
{
  char *v2; // r9
  int v4; // esp
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  char v7; // [rsp+34h] [rbp-14h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = &v7;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = 0;
  do
  {
    *--v2 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  sub_1401FE028((__int64)this, v2, v4 + 52 - (_DWORD)v2);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v8);
}

