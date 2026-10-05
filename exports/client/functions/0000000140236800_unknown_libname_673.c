/* Address: 0x140236800 | Name: unknown_libname_673 | Size: 170 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_673(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        const struct DLGTEMPLATE **a4,
        struct CWnd **a5,
        unsigned __int16 a6)
{
  const struct DLGTEMPLATE *v8; // rdx
  int Indirect; // eax
  __int64 v10; // rcx
  struct CWnd **v11; // rax
  struct CWnd **v12; // rdi
  __int64 v14; // rax
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  v8 = *a4;
  if ( a3 == -1 )
  {
    Indirect = CDialog::CreateIndirect((CDialog *)&v15, v8, (struct CWnd *)5, (void *)a6);
    if ( Indirect )
    {
      if ( Indirect == 22 || Indirect == 34 )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        JUMPOUT(0x1402368A9LL);
      }
    }
    else
    {
      v10 = v15;
      v11 = a5;
      *a4 = (const struct DLGTEMPLATE *)((char *)*a4 + v15);
      *v11 = (struct CWnd *)((char *)*v11 - v10);
    }
  }
  else
  {
    v12 = a5;
    if ( (unsigned int)CDialog::CreateIndirect((CDialog *)&v15, v8, *a5, (void *)a6) == 34 )
    {
      *a2 = 0;
      return 0;
    }
    v14 = v15;
    if ( v15 > 0 )
    {
      *a4 = (const struct DLGTEMPLATE *)((char *)*a4 + v15);
      *v12 = (struct CWnd *)((char *)*v12 - v14);
    }
  }
  return 1;
}

