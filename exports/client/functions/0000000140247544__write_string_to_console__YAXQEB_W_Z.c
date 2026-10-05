/* Address: 0x140247544 | Name: ?write_string_to_console@@YAXQEB_W@Z | Size: 167 bytes */
__int64 __fastcall write_string_to_console(char *a1)
{
  __int64 v2; // r10
  char *v3; // rdx
  __int16 v4; // ax
  __int64 v6; // [rsp+0h] [rbp-258h] BYREF
  __int128 NumberOfBytesWritten; // [rsp+30h] [rbp-228h] BYREF
  _BYTE Buffer[500]; // [rsp+40h] [rbp-218h] BYREF
  char v9; // [rsp+234h] [rbp-24h] BYREF
  __int64 v10; // [rsp+240h] [rbp-18h]

  v2 = ((__int64 (__fastcall *)(__int64))GetStdHandle)(4294967284LL);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = Buffer;
    do
    {
      *v3++ = *a1;
      if ( v3 == &v9 )
        break;
      v4 = *(_WORD *)a1;
      a1 += 2;
    }
    while ( v4 );
    Buffer[499] = 0;
    LODWORD(NumberOfBytesWritten) = 0;
    ((void (__fastcall *)(__int64, _BYTE *, _QWORD, __int128 *, _QWORD))WriteFile)(
      v2,
      Buffer,
      (unsigned int)v3 - (unsigned int)Buffer - 1,
      &NumberOfBytesWritten,
      0);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v10);
}

