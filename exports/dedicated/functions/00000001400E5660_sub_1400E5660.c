/* Address: 0x1400e5660 | Name: sub_1400E5660 | Size: 236 bytes */
__int64 __fastcall sub_1400E5660(int *a1, int a2, int a3)
{
  __int64 result; // rax
  int v7; // ebp
  int v8; // edx
  int v9; // [rsp+48h] [rbp+20h] BYREF

  if ( dword_16E6A344C )
  {
    result = sub_1400AFB00(&v9, 1);
    if ( !v9 )
    {
      *a1 = a2;
      return result;
    }
  }
  sub_1400AFB00(&v9, 1);
  if ( v9 )
  {
    sub_1400AFB00(&v9, 1);
    if ( v9 )
      return sub_1400AFD40(a1, a3);
    v7 = dword_173E9FBC4;
  }
  else
  {
    v7 = dword_173E9FBC0;
  }
  sub_1400AFB00(&v9, v7);
  if ( (v9 & (1 << (v7 - 1))) == 1 << (v7 - 1) )
    v8 = v9 | (-1 << v7);
  else
    v8 = v9;
  *a1 = v8 + a2;
  result = (unsigned int)(v8 + 128);
  if ( (unsigned int)result <= 0xFF )
  {
    ++*((_DWORD *)&unk_16E567160 + (unsigned __int8)v8 + 323773);
    return (__int64)&unk_16E567160;
  }
  return result;
}

