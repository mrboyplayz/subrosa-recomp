/* Address: 0x140257eb4 | Name: fegetround_0 | Size: 20 bytes */
int __cdecl fegetround_0()
{
  unsigned int control; // eax

  control = _acrt_fenv_get_control();
  return _acrt_fenv_get_common_round_control(control);
}

