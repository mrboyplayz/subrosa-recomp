/* Address: 0x1401b5dd0 | Name: sub_1401B5DD0 | Size: 85 bytes */
__int64 __fastcall sub_1401B5DD0(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 28) >= *(_DWORD *)(a1 + 8) )
    return 0;
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 28))++);
}

