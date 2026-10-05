/* Address: 0x1402513b0 | Name: _close_nolock | Size: 189 bytes */
__int64 __fastcall close_nolock(unsigned int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 osfhandle; // rbx
  __int64 v4; // rax

  v1 = (int)a1;
  if ( get_osfhandle(a1) == -1
    || ((_DWORD)v1 == 1 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 200LL) & 1) != 0
     || (_DWORD)v1 == 2 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 128LL) & 1) != 0)
    && (osfhandle = get_osfhandle(2), get_osfhandle(1) == osfhandle)
    || (v4 = get_osfhandle((unsigned int)v1), (unsigned int)((__int64 (__fastcall *)(__int64))CloseHandle)(v4)) )
  {
    v2 = 0;
  }
  else
  {
    v2 = ((__int64 (*)(void))GetLastError)();
  }
  free_osfhnd((unsigned int)v1);
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401] + 72 * (v1 & 0x3F) + 56) = 0;
  if ( !v2 )
    return 0;
  sub_14024D14C(v2);
  return 0xFFFFFFFFLL;
}

