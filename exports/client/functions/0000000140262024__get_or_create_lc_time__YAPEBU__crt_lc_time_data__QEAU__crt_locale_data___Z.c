/* Address: 0x140262024 | Name: ?get_or_create_lc_time@@YAPEBU__crt_lc_time_data@@QEAU__crt_locale_data@@@Z | Size: 119 bytes */
struct __crt_lc_time_data *__fastcall get_or_create_lc_time(struct __crt_locale_data *const a1)
{
  struct __crt_lc_time_data *v3; // rax
  struct __crt_lc_time_data *v4; // rbx
  struct __crt_lc_time_data *v5; // rdi

  if ( !*((_QWORD *)a1 + 42) )
    return (struct __crt_lc_time_data *)&off_14028B0E0;
  v3 = (struct __crt_lc_time_data *)calloc_base(1u, 0x2C0u);
  v4 = v3;
  if ( v3 )
  {
    if ( initialize_lc_time(v3, a1) )
    {
      *((_DWORD *)v4 + 87) = 1;
      v5 = v4;
      v4 = nullptr;
      goto LABEL_7;
    }
    sub_140262400(v4);
  }
  v5 = nullptr;
LABEL_7:
  free_base(v4);
  return v5;
}

