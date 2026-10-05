/* Address: 0x14022fbc0 | Name: sub_14022FBC0 | Size: 57 bytes */
__int64 __fastcall sub_14022FBC0(__crt_strtox::floating_point_value *this)
{
  if ( !*((_BYTE *)this + 8) )
  {
    sub_14024CFBC(
      L"_is_double",
      L"__crt_strtox::floating_point_value::as_double",
      L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",
      415,
      0);
    JUMPOUT(0x14022FBF8LL);
  }
  return *(_QWORD *)this;
}

