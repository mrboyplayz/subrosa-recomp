/* Address: 0x140262508 | Name: sub_140262508 | Size: 156 bytes */
__int64 __fastcall sub_140262508(__int64 a1)
{
  struct __crt_lc_time_data *v1; // rdi
  struct __crt_lc_time_data *v3; // rbx
  struct __crt_lc_time_data *v4; // rax

  v1 = nullptr;
  if ( *(_QWORD *)(a1 + 336) )
  {
    v4 = (struct __crt_lc_time_data *)calloc_base(1u, 0x2C0u);
    v3 = v4;
    if ( v4 )
    {
      if ( initialize_lc_time(v4, (struct __crt_locale_data *const)a1) )
      {
        *((_DWORD *)v3 + 87) = 1;
        free_base(nullptr);
        goto LABEL_8;
      }
      sub_140262400((void **)v3);
      v1 = v3;
    }
    free_base(v1);
    return 1;
  }
  v3 = (struct __crt_lc_time_data *)&off_14028B0E0;
LABEL_8:
  MEMORY[0x140262A0C](*(_QWORD *)(a1 + 288));
  *(_QWORD *)(a1 + 288) = v3;
  return 0;
}

