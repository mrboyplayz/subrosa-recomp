/* Address: 0x1402551a8 | Name: sub_1402551A8 | Size: 69 bytes */
__int64 __fastcall sub_1402551A8(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  replace_current_thread_locale_nolock(
    **(struct __acrt_ptd *const **)a3,
    ***(struct __crt_locale_data *const ***)(a3 + 8));
  return sub_140258BB8(*a4);
}

