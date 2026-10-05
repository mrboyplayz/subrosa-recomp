/* Address: 0x14026b2e8 | Name: _chsize_nolock | Size: 364 bytes */
__int64 __fastcall chsize_nolock(__int64 FileHandle, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // edi
  __m128i *v8; // rbx
  int v9; // r14d
  unsigned int v10; // r8d
  int v11; // eax
  __int64 osfhandle; // rax
  _DWORD *v13; // rbx

  v3 = FileHandle;
  v4 = lseeki64_nolock(FileHandle, 0, 1);
  v5 = lseeki64_nolock(v3, 0, 2);
  v6 = a2 - v5;
  if ( v4 == -1 || v5 == -1 )
    goto LABEL_20;
  v7 = 0;
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      goto LABEL_21;
    if ( lseeki64_nolock(v3, a2, 0) != -1 )
    {
      osfhandle = get_osfhandle(v3);
      if ( (unsigned int)((__int64 (__fastcall *)(__int64))SetEndOfFile)(osfhandle) )
        goto LABEL_21;
      *errno() = 13;
      v13 = sub_14024D19C();
      *v13 = ((__int64 (*)(void))GetLastError)();
    }
LABEL_20:
    v7 = *errno();
    goto LABEL_21;
  }
  v8 = (__m128i *)calloc_base(0x1000u, 1u);
  if ( v8 )
  {
    v9 = sub_140247C1C(v3, 0x8000);
    while ( 1 )
    {
      v10 = v6;
      if ( v6 >= 4096 )
        v10 = 4096;
      v11 = sub_140253B04(v3, v8, v10);
      if ( v11 == -1 )
        break;
      v6 -= v11;
      if ( v6 <= 0 )
      {
        sub_140247C1C(v3, v9);
        goto LABEL_14;
      }
    }
    if ( *(_DWORD *)sub_14024D19C() == 5 )
      *errno() = 13;
  }
  else
  {
    *errno() = 12;
  }
  v7 = *errno();
LABEL_14:
  free_base(v8);
LABEL_21:
  lseeki64_nolock(v3, v4, 0);
  return v7;
}

