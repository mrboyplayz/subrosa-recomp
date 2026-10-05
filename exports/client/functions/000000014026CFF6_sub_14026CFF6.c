/* Address: 0x14026cff6 | Name: sub_14026CFF6 | Size: 150 bytes */
__int64 __fastcall sub_14026CFF6(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  *(_QWORD *)(a2 + 56) = a1;
  *(_QWORD *)(a2 + 48) = a1;
  if ( *(_BYTE *)(a2 + 88) )
  {
    *(_QWORD *)(a2 + 40) = **(_QWORD **)(a2 + 48);
    if ( **(_DWORD **)(a2 + 40) == -529697949
      && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 24LL) == 4
      && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065504
       || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065505
       || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065506) )
    {
      *(_QWORD *)(sub_1401FD83C() + 32) = *(_QWORD *)(a2 + 40);
      v3 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL);
      *(_QWORD *)(sub_1401FD83C() + 40) = v3;
      terminate();
    }
  }
  *(_DWORD *)(a2 + 32) = 0;
  return *(unsigned int *)(a2 + 32);
}

