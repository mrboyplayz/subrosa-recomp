/* Address: 0x14026ad9c | Name: _msize | Size: 57 bytes */
__int64 __fastcall msize(__int64 a1)
{
  if ( a1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))HeapSize)(*(_QWORD *)&dword_140404A6C[19065847], 0, a1);
  *errno() = 22;
  sub_14024CF6C();
  return -1;
}

