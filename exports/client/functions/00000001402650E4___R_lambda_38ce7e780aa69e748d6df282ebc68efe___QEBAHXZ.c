/* Address: 0x1402650e4 | Name: ??R_lambda_38ce7e780aa69e748d6df282ebc68efe_@@QEBAHXZ | Size: 105 bytes */
__int64 __fastcall _lambda_38ce7e780aa69e748d6df282ebc68efe_::operator()(int **a1)
{
  __int64 v1; // rcx
  __int64 osfhandle; // rax
  _DWORD *v4; // rbx

  v1 = **a1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401] + 72 * (v1 & 0x3F) + 56) & 1) != 0 )
  {
    osfhandle = get_osfhandle(v1);
    if ( (unsigned int)((__int64 (__fastcall *)(__int64))FlushFileBuffers)(osfhandle) )
      return 0;
    v4 = sub_14024D19C();
    *v4 = ((__int64 (*)(void))GetLastError)();
  }
  *errno() = 9;
  return 0xFFFFFFFFLL;
}

