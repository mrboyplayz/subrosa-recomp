/* Address: 0x1401f8d10 | Name: ?configure_argv@__scrt_narrow_argv_policy@@SAHXZ | Size: 20 bytes */
__int64 __fastcall __scrt_narrow_argv_policy::configure_argv(CMFCToolBarImages *a1, int a2)
{
  unsigned int updated; // eax

  updated = CMFCToolBarImages::UpdateInternalImage(a1, a2);
  return sub_140245EA8(updated);
}

