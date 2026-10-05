/* Address: 0x1400efe3c | Name: ?configure_argv@__scrt_narrow_argv_policy@@SAHXZ | Size: 20 bytes */
errno_t __fastcall __scrt_narrow_argv_policy::configure_argv(charNode *a1)
{
  _crt_argv_mode v1; // eax

  v1 = (unsigned int)charNode::raw_length(a1);
  return configure_narrow_argv(v1);
}

