/* Address: 0x1402558b8 | Name: unknown_libname_876 | Size: 200 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
struct __acrt_ptd *unknown_libname_876()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  __int64 v3; // rax
  struct __acrt_ptd *v4; // rdi
  __int64 v5; // rax
  struct __acrt_ptd *v6; // rcx

  v0 = ((__int64 (*)(void))GetLastError)();
  v1 = dword_140302410;
  v2 = v0;
  if ( dword_140302410 != -1 )
  {
    v3 = sub_14024EFE4(dword_140302410);
    v4 = (struct __acrt_ptd *)v3;
    if ( v3 )
    {
      if ( v3 == -1 )
        v4 = nullptr;
      goto LABEL_15;
    }
    v1 = dword_140302410;
  }
  if ( (unsigned int)sub_14024F02C(v1, -1) )
  {
    v5 = calloc_base(1u, 0x3C8u);
    v4 = (struct __acrt_ptd *)v5;
    if ( v5 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v5) )
      {
        sub_140255524(v4);
        free_base(nullptr);
        goto LABEL_15;
      }
      sub_14024F02C(dword_140302410, 0);
      v6 = v4;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      v6 = nullptr;
    }
    free_base(v6);
  }
  v4 = nullptr;
LABEL_15:
  ((void (__fastcall *)(_QWORD))SetLastError)(v2);
  return v4;
}

