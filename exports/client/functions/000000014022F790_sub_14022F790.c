/* Address: 0x14022f790 | Name: sub_14022F790 | Size: 139 bytes */
char __fastcall sub_14022F790(__crt_strtox *this, struct __crt_strtox::big_integer *a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _BYTE v8[468]; // [rsp+24h] [rbp-1D4h] BYREF

  LODWORD(v2) = (_DWORD)a2;
  if ( !(_DWORD)a2 )
    return 1;
  v3 = *(unsigned int *)this;
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    do
    {
      v5 = v4++;
      v6 = (unsigned int)v2 + (unsigned __int64)*((unsigned int *)this + v5 + 1);
      *((_DWORD *)this + v5 + 1) = v6;
      v3 = *(unsigned int *)this;
      v2 = HIDWORD(v6);
    }
    while ( v4 != (_DWORD)v3 );
  }
  if ( !(_DWORD)v2 )
    return 1;
  if ( (unsigned int)v3 < 0x73 )
  {
    *((_DWORD *)this + v3 + 1) = v2;
    ++*(_DWORD *)this;
    return 1;
  }
  *(_DWORD *)this = 0;
  sub_140236F50((char *)this + 4, 460, v8, 0);
  return 0;
}

