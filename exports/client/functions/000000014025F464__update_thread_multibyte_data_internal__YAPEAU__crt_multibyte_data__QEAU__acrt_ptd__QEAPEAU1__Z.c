/* Address: 0x14025f464 | Name: ?update_thread_multibyte_data_internal@@YAPEAU__crt_multibyte_data@@QEAU__acrt_ptd@@QEAPEAU1@@Z | Size: 184 bytes */
struct __crt_multibyte_data *__fastcall update_thread_multibyte_data_internal(
        struct __acrt_ptd *const a1,
        struct __crt_multibyte_data **const a2)
{
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rax

  if ( (dword_140302B88 & *((_DWORD *)a1 + 234)) != 0 && *((_QWORD *)a1 + 18) )
  {
    v4 = *((volatile signed __int32 **)a1 + 17);
  }
  else
  {
    sub_140258B64(5);
    v4 = *((volatile signed __int32 **)a1 + 17);
    if ( v4 != (volatile signed __int32 *)*a2 )
    {
      if ( v4 && _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 && v4 != (volatile signed __int32 *)&unk_1403025A0 )
        free_base((void *)v4);
      v5 = (volatile signed __int32 *)*a2;
      *((_QWORD *)a1 + 17) = *a2;
      _InterlockedIncrement(v5);
      v4 = v5;
    }
    sub_140258BB8(5);
  }
  if ( !v4 )
    abort();
  return (struct __crt_multibyte_data *)v4;
}

