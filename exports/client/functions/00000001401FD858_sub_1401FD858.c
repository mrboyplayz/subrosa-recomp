/* Address: 0x1401fd858 | Name: sub_1401FD858 | Size: 191 bytes */
__int64 sub_1401FD858()
{
  unsigned int v1; // edi
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  _DWORD *v7; // rax

  if ( LODWORD(dwTlsIndex.m256d_f64[0]) == -1 )
    return 0;
  v1 = ((__int64 (*)(void))GetLastError)();
  v2 = sub_14020666C(LODWORD(dwTlsIndex.m256d_f64[0]));
  v3 = 0;
  if ( v2 != -1 )
  {
    if ( v2 )
    {
      v3 = v2;
      goto LABEL_13;
    }
    if ( !(unsigned int)sub_1402066B4(LODWORD(dwTlsIndex.m256d_f64[0]), -1) )
      goto LABEL_13;
    v4 = j__calloc_base(1);
    v5 = LODWORD(dwTlsIndex.m256d_f64[0]);
    v6 = (_DWORD *)v4;
    if ( v4 )
    {
      if ( (unsigned int)sub_1402066B4(LODWORD(dwTlsIndex.m256d_f64[0]), v4) )
      {
        v7 = v6;
        v6[30] = -2;
        v6 = nullptr;
        v3 = (__int64)v7;
LABEL_12:
        free(v6);
        goto LABEL_13;
      }
      v5 = LODWORD(dwTlsIndex.m256d_f64[0]);
    }
    sub_1402066B4(v5, 0);
    goto LABEL_12;
  }
LABEL_13:
  ((void (__fastcall *)(_QWORD))SetLastError)(v1);
  return v3;
}

