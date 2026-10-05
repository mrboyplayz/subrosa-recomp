/* Address: 0x1401b5e30 | Name: sub_1401B5E30 | Size: 101 bytes */
__int64 __fastcall sub_1401B5E30(__int64 a1)
{
  int v2; // [rsp+0h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 12) + 1;
    *(_DWORD *)(a1 + 12) = v2;
    return *(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - v2));
  }
}

