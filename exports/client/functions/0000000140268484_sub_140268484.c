/* Address: 0x140268484 | Name: sub_140268484 | Size: 20 bytes */
int __fastcall sub_140268484(_anonymous_namespace_::scoped_fp_state_reset *this)
{
  int result; // eax

  if ( *((_BYTE *)this + 8) )
    return fesetenv(this);
  return result;
}

