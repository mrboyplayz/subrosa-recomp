/* Address: 0x1401fe748 | Name: sub_1401FE748 | Size: 73 bytes */
__int64 __fastcall sub_1401FE748(__int64 a1, int a2, __int64 a3)
{
  unsigned __int8 v4; // r9
  _UNKNOWN ***v5; // rax
  _UNKNOWN ***v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v4 = a2;
  if ( (unsigned int)(a2 - 2) > 1 )
    v4 = 0;
  v8 = v4;
  v5 = &off_1402848D0;
  if ( a2 != 1 )
    v5 = nullptr;
  v7 = v5;
  sub_1401FE7C0(&v7, a1, a3);
  return a1;
}

