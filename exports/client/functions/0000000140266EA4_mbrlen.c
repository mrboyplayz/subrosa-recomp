/* Address: 0x140266ea4 | Name: mbrlen | Size: 62 bytes */
__int64 __fastcall mbrlen(#49 *a1, const char *a2, struct _Mbstatet *a3)
{
  struct _Mbstatet *v3; // rax
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = -1;
  v3 = (struct _Mbstatet *)&dword_140404A6C[19065855];
  if ( a3 )
    v3 = a3;
  _mbrtowc_s_l(&v5, nullptr, a1, a2, v3, nullptr);
  return v5;
}

