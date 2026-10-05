/* Address: 0x1402543a8 | Name: ?CreateIndirect@CDialog@@UEAAHPEBUDLGTEMPLATE@@PEAVCWnd@@PEAX@Z | Size: 20 bytes */
__int64 __fastcall CDialog::CreateIndirect(CDialog *this, const struct DLGTEMPLATE *a2, struct CWnd *a3, void *a4)
{
  return wctomb_s_l((int *)this, a2, (unsigned __int64)a3, (unsigned __int16)a4, nullptr);
}

