/* Address: 0x140257e6c | Name: sub_140257E6C | Size: 69 bytes */
int __cdecl sub_140257E6C()
{
  unsigned int control; // eax
  int common_round_control; // eax

  control = _acrt_fenv_get_control();
  common_round_control = _acrt_fenv_get_common_round_control(control);
  switch ( common_round_control )
  {
    case 0:
      return 1;
    case 256:
      return 3;
    case 512:
      return 2;
  }
  return -(common_round_control != 768);
}

