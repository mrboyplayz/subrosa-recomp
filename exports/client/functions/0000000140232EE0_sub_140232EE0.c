/* Address: 0x140232ee0 | Name: sub_140232EE0 | Size: 237 bytes */
char __fastcall sub_140232EE0(#107 *this, struct __crt_strtox::big_integer *a2)
{
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rsi
  unsigned int v6; // r11d
  char *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE Source[460]; // [rsp+24h] [rbp-1D4h] BYREF

  if ( !(_DWORD)a2 )
  {
    *(_DWORD *)this = 0;
    sub_140236F50((char *)this + 4, 460, Source, 0);
    return 1;
  }
  if ( (_DWORD)a2 != 1 )
  {
    v3 = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      LODWORD(v4) = 0;
      v5 = (unsigned int)a2;
      v6 = 0;
      v7 = (char *)this + 4;
      do
      {
        v8 = v6++;
        v9 = (unsigned int)v4 + v5 * *(unsigned int *)&v7[4 * v8];
        *(_DWORD *)&v7[4 * v8] = v9;
        v4 = HIDWORD(v9);
      }
      while ( v6 != v3 );
      if ( HIDWORD(v9) )
      {
        v10 = *(unsigned int *)this;
        if ( (unsigned int)v10 >= 0x73 )
        {
          *(_DWORD *)this = 0;
          sub_140236F50(v7, 460, Source, 0);
          return 0;
        }
        *((_DWORD *)this + v10 + 1) = HIDWORD(v9);
        ++*(_DWORD *)this;
      }
    }
  }
  return 1;
}

