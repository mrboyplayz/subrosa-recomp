/* Address: 0x1401b5f50 | Name: sub_1401B5F50 | Size: 87 bytes */
__int64 __fastcall sub_1401B5F50(__int64 a1, char a2)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 28)) >= *(_DWORD *)(a1 + 8) )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 28))++) = a2;
  return 0;
}

