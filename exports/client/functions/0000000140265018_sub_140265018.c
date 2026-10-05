/* Address: 0x140265018 | Name: sub_140265018 | Size: 140 bytes */
__int64 __fastcall sub_140265018(__int64 a1, unsigned int *a2, int **a3, unsigned int *a4)
{
  __int64 osfhandle; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rbx

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) == 0 )
    goto LABEL_4;
  osfhandle = get_osfhandle(**a3);
  v7 = 0;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64))FlushFileBuffers)(osfhandle) )
  {
    v8 = sub_14024D19C();
    *v8 = ((__int64 (*)(void))GetLastError)();
LABEL_4:
    *errno() = 9;
    v7 = -1;
  }
  sub_140261150(*a4);
  return v7;
}

