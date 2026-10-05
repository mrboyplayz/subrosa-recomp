/* Address: 0x14004a0d0 | Name: sub_14004A0D0 | Size: 243 bytes */
int __fastcall sub_14004A0D0(int a1, u_short a2, int a3, _BYTE *a4)
{
  __int64 v7; // rsi
  int v8; // eax
  int result; // eax
  SOCKET v10; // rcx
  u_long argp; // [rsp+58h] [rbp+10h] BYREF

  v7 = 4195128LL * a1;
  v8 = socket(2, 2, 17);
  *(_WORD *)((char *)&unk_191625F60 + v7 + 16) = 2;
  *(_DWORD *)((char *)&unk_191625F60 + v7 + 12) = v8;
  *(_WORD *)((char *)&unk_191625F60 + v7 + 36) = a2;
  *(_DWORD *)((char *)&unk_191625F60 + v7 + 20) = 0;
  *(_WORD *)((char *)&unk_191625F60 + v7 + 18) = htons(a2);
  *(_DWORD *)((char *)&unk_191625F60 + v7 + 32) = 16;
  if ( !a3
    || (result = bind(
                   *(int *)((char *)&unk_191625F60 + v7 + 12),
                   (const struct sockaddr *)((char *)&unk_191625F60 + v7 + 16),
                   16)) == 0 )
  {
    if ( a4 )
    {
      *((_BYTE *)&unk_191625F60 + v7 + 4) = *a4;
      *((_BYTE *)&unk_191625F60 + v7 + 5) = a4[1];
      *(_WORD *)((char *)&unk_191625F60 + v7 + 6) = (unsigned __int8)a4[2];
    }
    v10 = *(int *)((char *)&unk_191625F60 + v7 + 12);
    argp = 1;
    result = ioctlsocket(v10, -2147195266, &argp);
    *(_DWORD *)((char *)&unk_191625F60 + v7) = 1;
  }
  return result;
}

