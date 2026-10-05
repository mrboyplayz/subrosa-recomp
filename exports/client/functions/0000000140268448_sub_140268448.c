/* Address: 0x140268448 | Name: sub_140268448 | Size: 59 bytes */
_anonymous_namespace_::scoped_fp_state_reset *__fastcall sub_140268448(
        _anonymous_namespace_::scoped_fp_state_reset *this)
{
  int v2; // edi
  bool v3; // zf

  fegetenv(this);
  v2 = *(_DWORD *)this & 0x1F;
  v3 = v2 == 31;
  if ( v2 != 31 )
  {
    feholdexcept(this);
    v3 = v2 == 31;
  }
  *((_BYTE *)this + 8) = !v3;
  return this;
}

