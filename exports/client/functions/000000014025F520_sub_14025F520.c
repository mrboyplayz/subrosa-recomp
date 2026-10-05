/* Address: 0x14025f520 | Name: sub_14025F520 | Size: 96 bytes */
char sub_14025F520()
{
  struct __acrt_ptd *v0; // rax

  if ( !LOBYTE(dword_140404A6C[19065832]) )
  {
    *(_QWORD *)&dword_140404A6C[19065827] = &unk_1403028E0;
    *(_QWORD *)&dword_140404A6C[19065829] = &unk_1403025A0;
    *(_QWORD *)&dword_140404A6C[19065825] = &unk_1403027D0;
    v0 = sub_140255B44();
    setmbcp_internal(0xFFFFFFFD, 1, v0, (struct __crt_multibyte_data **const)&dword_140404A6C[19065829]);
    LOBYTE(dword_140404A6C[19065832]) = 1;
  }
  return 1;
}

