/* Address: 0x140262bb0 | Name: GetLocaleNameFromDefault | Size: 165 bytes */
__int64 __fastcall GetLocaleNameFromDefault(__int64 a1)
{
  __int64 v2; // r9
  _QWORD v4[6]; // [rsp+0h] [rbp-F8h] BYREF
  _WORD v5[88]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+E0h] [rbp-18h]

  *(_DWORD *)(a1 + 16) |= 0x104u;
  if ( (int)sub_14024F2EC((__int64)v5, 0x55u) > 1 )
  {
    v2 = -1;
    do
      ++v2;
    while ( v5[v2] );
    if ( (unsigned int)sub_140260D80((_WORD *)(a1 + 600), 85, (__int64)v5, v2 + 1) )
    {
      v4[4] = 0;
      sub_14024CFBC();
      JUMPOUT(0x140262C54LL);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v4 ^ v6);
}

