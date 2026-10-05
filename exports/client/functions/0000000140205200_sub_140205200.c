/* Address: 0x140205200 | Name: sub_140205200 | Size: 338 bytes */
char *__fastcall sub_140205200(UnDecorator *this, char *a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  char v8; // cl
  char *v9; // rax
  char *i; // rdx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  sub_140205C58(&v11);
  if ( v12 == 3 )
    return nullptr;
  if ( v12 == 2 || (dword_140404A6C[19064559] & 0x1000) == 0 && **(_BYTE **)&dword_140404A6C[19064555] )
    v6 = *(_QWORD *)sub_1401FDBA0((__int64)&v11, *(_BYTE **)&dword_140404A6C[19064557]);
  else
    v6 = v11;
  if ( a2
    || (v6 ? (v7 = (**(__int64 (__fastcall ***)(__int64))v6)(v6)) : (v7 = 0),
        a3 = v7 + 1,
        (a2 = (char *)(*(__int64 (__fastcall **)(unsigned __int64))&dword_140404A6C[19064565])((v7 + 1 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)) != nullptr) )
  {
    if ( v6 )
      *(_BYTE *)(*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v6 + 24LL))(v6, a2, &a2[a3 - 1]) = 0;
    else
      *a2 = 0;
    v8 = *a2;
    v9 = a2;
    for ( i = a2; *v9; ++i )
    {
      ++v9;
      if ( v8 == 32 )
      {
        *i = 32;
        while ( *v9 == 32 )
          ++v9;
      }
      else
      {
        *i = v8;
      }
      v8 = *v9;
    }
    *i = v8;
  }
  return a2;
}

