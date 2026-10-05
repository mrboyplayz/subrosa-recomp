/* Address: 0x1402668d4 | Name: ?__mbrtowc_utf8@__crt_mbstring@@YA_KPEA_WPEBD_KPEAU_Mbstatet@@@Z | Size: 57 bytes */
unsigned __int64 __fastcall __crt_mbstring::__mbrtowc_utf8(#115 *this, #49 *a2, const char *a3)
{
  unsigned __int64 result; // rax
  __int16 v5; // dx
  unsigned int v6[6]; // [rsp+20h] [rbp-18h] BYREF

  result = __crt_mbstring::__mbrtoc32_utf8(v6, a2, a3);
  if ( result <= 4 )
  {
    v5 = v6[0];
    if ( v6[0] > 0xFFFF )
      v5 = -3;
    if ( this )
      *(_WORD *)this = v5;
  }
  return result;
}

