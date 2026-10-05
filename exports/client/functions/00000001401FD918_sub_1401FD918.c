/* Address: 0x1401fd918 | Name: sub_1401FD918 | Size: 77 bytes */
__int64 sub_1401FD918()
{
  unsigned int v1; // ebx
  __int64 v2; // rdi

  if ( LODWORD(dwTlsIndex.m256d_f64[0]) == -1 )
    return 0;
  v1 = ((__int64 (*)(void))GetLastError)();
  v2 = sub_14020666C(LODWORD(dwTlsIndex.m256d_f64[0]));
  ((void (__fastcall *)(_QWORD))SetLastError)(v1);
  if ( v2 == -1 )
    return 0;
  return v2;
}

