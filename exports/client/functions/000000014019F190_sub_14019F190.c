/* Address: 0x14019f190 | Name: sub_14019F190 | Size: 115 bytes */
__int64 __fastcall sub_14019F190(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v3 = sub_1401990A0(48000, 960, nullptr);
  v5 = sub_1401B3920(a1, v3, a3);
  if ( v5 )
    return v5;
  *(_DWORD *)(a1 + 20) = sub_1401A0850(a2);
  if ( *(_DWORD *)(a1 + 20) )
    return 0;
  else
    return 0xFFFFFFFFLL;
}

