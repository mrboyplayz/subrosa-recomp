/* Address: 0x14019f0e0 | Name: sub_14019F0E0 | Size: 105 bytes */
__int64 __fastcall sub_14019F0E0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v4 = sub_1401990A0(48000, 960, nullptr);
  v6 = sub_1401AE3C0(a1, v4, a3, a4);
  if ( v6 )
    return v6;
  *(_DWORD *)(a1 + 32) = sub_1401A0850(a2);
  return 0;
}

