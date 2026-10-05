/* Address: 0x1401bbf70 | Name: sub_1401BBF70 | Size: 190 bytes */
__int64 __fastcall sub_1401BBF70(__int64 a1, unsigned int a2)
{
  __int64 v3; // [rsp+0h] [rbp-A8h] BYREF
  int i; // [rsp+20h] [rbp-88h]
  int v5; // [rsp+24h] [rbp-84h]
  _DWORD v6[24]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v7; // [rsp+90h] [rbp-18h]

  v5 = 0;
  for ( i = 0; i < (int)a2; ++i )
  {
    v5 += *(__int16 *)(a1 + 2LL * i);
    v6[i] = *(__int16 *)(a1 + 2LL * i) << 12;
  }
  if ( v5 < 4096 )
    sub_1401DC4C0(v6, a2);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v3 ^ v7);
}

