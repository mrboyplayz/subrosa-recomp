/* Address: 0x14016a4a0 | Name: sub_14016A4A0 | Size: 87 bytes */
__int64 __fastcall sub_14016A4A0(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+40h] [rbp-18h]

  v3[0] = a1;
  if ( (unsigned int)sub_140167D10(v3, 2, 0) && v4 == 16 )
    return 1;
  v1 = v3[0];
  *(_QWORD *)(v3[0] + 192LL) = *(_QWORD *)(v3[0] + 208LL);
  *(_QWORD *)(v1 + 200) = *(_QWORD *)(v1 + 216);
  return 0;
}

