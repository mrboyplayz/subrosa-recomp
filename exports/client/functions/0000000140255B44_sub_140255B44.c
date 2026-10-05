/* Address: 0x140255b44 | Name: sub_140255B44 | Size: 167 bytes */
struct __acrt_ptd *sub_140255B44()
{
  unsigned int v0; // ecx
  __int64 v1; // rax
  struct __acrt_ptd *v2; // rbx
  __int64 v3; // rax
  struct __acrt_ptd *v4; // rcx

  v0 = dword_140302410;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(v0, -1) )
      goto LABEL_15;
    v3 = calloc_base(1u, 0x3C8u);
    v2 = (struct __acrt_ptd *)v3;
    if ( v3 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v3) )
      {
        sub_140255524(v2);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      v4 = v2;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      v4 = nullptr;
    }
    free_base(v4);
    goto LABEL_15;
  }
  v1 = sub_14024EFE4(dword_140302410);
  v2 = (struct __acrt_ptd *)v1;
  if ( !v1 )
  {
    v0 = dword_140302410;
    goto LABEL_6;
  }
  if ( v1 == -1 )
    goto LABEL_15;
LABEL_13:
  if ( !v2 )
LABEL_15:
    abort();
  return v2;
}

