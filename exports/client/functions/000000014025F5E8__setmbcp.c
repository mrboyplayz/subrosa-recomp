/* Address: 0x14025f5e8 | Name: _setmbcp | Size: 37 bytes */
int __cdecl setmbcp(int CodePage)
{
  struct __acrt_ptd *v2; // rax

  v2 = (struct __acrt_ptd *)sub_140255A70();
  return setmbcp_internal(CodePage, 0, v2, (struct __crt_multibyte_data **const)&dword_140404A6C[19065829]);
}

