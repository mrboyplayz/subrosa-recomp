/* Address: 0x14022fbfc | Name: sub_14022FBFC | Size: 57 bytes */
__int64 __fastcall sub_14022FBFC(__crt_strtox::floating_point_value *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    sub_14024CFBC(
      L"!_is_double",
      L"__crt_strtox::floating_point_value::as_float",
      L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",
      421,
      0);
    JUMPOUT(0x14022FC34LL);
  }
  return *(_QWORD *)this;
}

