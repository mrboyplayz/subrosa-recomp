/* Address: 0x1401b5fb0 | Name: sub_1401B5FB0 | Size: 108 bytes */
__int64 __fastcall sub_1401B5FB0(__int64 a1, char a2)
{
  int v3; // [rsp+0h] [rbp-18h]

  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 28)) >= *(_DWORD *)(a1 + 8) )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 12) + 1;
  *(_DWORD *)(a1 + 12) = v3;
  *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - v3)) = a2;
  return 0;
}

