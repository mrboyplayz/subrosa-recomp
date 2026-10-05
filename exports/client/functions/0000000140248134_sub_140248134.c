/* Address: 0x140248134 | Name: sub_140248134 | Size: 89 bytes */
_expandlocale_locale_name_cache *__fastcall sub_140248134(
        #128 *this,
        #49 *const a2,
        __int64 a3,
        struct __crt_qualified_locale_data *const a4)
{
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 1) = a3;
  *((_BYTE *)this + 24) = 0;
  if ( (unsigned int)sub_140260D80(a2, a3, (char *)a4 + 600, 85) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x14024818CLL);
  }
  return this;
}

