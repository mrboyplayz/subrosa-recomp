/* Address: 0x140255a70 | Name: sub_140255A70 | Size: 212 bytes */
__int64 sub_140255A70()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  __int64 v3; // rax
  struct __acrt_ptd *v4; // rdi
  struct __acrt_ptd *v5; // rsi
  __int64 v6; // rax
  struct __acrt_ptd *v7; // rcx
  __int64 result; // rax

  v0 = ((__int64 (*)(void))GetLastError)();
  v1 = dword_140302410;
  v2 = v0;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(v1, -1) )
      goto LABEL_4;
    v6 = calloc_base(1u, 0x3C8u);
    v4 = (struct __acrt_ptd *)v6;
    if ( v6 )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, v6) )
      {
        sub_140255524(v4);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      v7 = v4;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      v7 = nullptr;
    }
    free_base(v7);
    goto LABEL_4;
  }
  v3 = sub_14024EFE4(dword_140302410);
  v4 = (struct __acrt_ptd *)v3;
  if ( !v3 )
  {
    v1 = dword_140302410;
    goto LABEL_6;
  }
  if ( v3 == -1 )
  {
LABEL_4:
    v4 = nullptr;
    v5 = nullptr;
    goto LABEL_14;
  }
LABEL_13:
  v5 = v4;
LABEL_14:
  ((void (__fastcall *)(_QWORD))SetLastError)(v2);
  result = (unsigned __int64)v5 & -(__int64)(v4 != nullptr);
  if ( !result )
    abort();
  return result;
}

