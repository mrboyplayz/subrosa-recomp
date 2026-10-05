/* Address: 0x140266e3c | Name: btowc | Size: 102 bytes */
__int16 __fastcall btowc(int a1)
{
  __int16 result; // ax
  char v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( a1 == -1 )
    return -1;
  v4 = -1;
  v2 = a1;
  v5 = 0;
  LOWORD(v3) = 0;
  _mbrtowc_s_l(&v4, (#49 *)&v3, (#49 *)&v2, (const char *)1, (struct _Mbstatet *)&v5, nullptr);
  result = v3;
  if ( v4 < 0 )
    return -1;
  return result;
}

