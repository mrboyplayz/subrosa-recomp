/* Address: 0x14025f580 | Name: sub_14025F580 | Size: 28 bytes */
struct __crt_multibyte_data *sub_14025F580()
{
  struct __acrt_ptd *v0; // rax

  v0 = (struct __acrt_ptd *)sub_140255A70();
  return update_thread_multibyte_data_internal(v0, (struct __crt_multibyte_data **const)&dword_140404A6C[19065829]);
}

