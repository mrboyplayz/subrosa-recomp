/* Address: 0x140255818 | Name: ?internal_get_ptd_head@@YAPEAU__acrt_ptd@@XZ | Size: 159 bytes */
__int64 internal_get_ptd_head()
{
  unsigned int v0; // ecx
  struct __acrt_ptd *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rax
  unsigned int v4; // ecx
  struct __acrt_ptd *v5; // rbx
  struct __acrt_ptd *v6; // rcx

  v0 = dword_140302410;
  v1 = nullptr;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(v0, -1) )
      return 0;
    v3 = calloc_base(1u, 0x3C8u);
    v4 = dword_140302410;
    v5 = (struct __acrt_ptd *)v3;
    if ( v3 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v3) )
      {
        sub_140255524(v5);
        v6 = v5;
        v5 = nullptr;
        v1 = v6;
        goto LABEL_13;
      }
      v4 = dword_140302410;
    }
    sub_14024F02C(v4, 0);
LABEL_13:
    free_base(v5);
    return (__int64)v1;
  }
  result = sub_14024EFE4(dword_140302410);
  if ( !result )
  {
    v0 = dword_140302410;
    goto LABEL_6;
  }
  if ( result == -1 )
    return 0;
  return result;
}

