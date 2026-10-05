/* Address: 0x1402065dc | Name: sub_1402065DC | Size: 69 bytes */
__int64 __fastcall sub_1402065DC(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = (__int64 (__fastcall *)(__int64))sub_140206244(
                                          0,
                                          (__int64)"FlsAlloc",
                                          (unsigned int *)&unk_1402849C0,
                                          (unsigned int *)"FlsAlloc");
  if ( v2 )
    return v2(a1);
  else
    return ((__int64 (*)(void))TlsAlloc)();
}

