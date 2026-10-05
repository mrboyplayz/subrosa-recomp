/* Address: 0x14004dd20 | Name: sub_14004DD20 | Size: 192 bytes */
int __fastcall sub_14004DD20(int a1)
{
  __int64 v1; // rbx
  int result; // eax
  SOCKET v3; // rcx
  u_long argp; // [rsp+30h] [rbp+8h] BYREF

  word_197BC7258 = dword_16E54DBE0;
  v1 = a1;
  dword_197BC7200[v1 + 9] = socket(2, 2, 17);
  to.sa_family = 2;
  *(_DWORD *)&to.sa_data[2] = 0;
  *(_WORD *)to.sa_data = htons(word_197BC7258);
  tolen = 16;
  result = bind(dword_197BC7200[v1 + 9], &to, 16);
  if ( !result )
  {
    v3 = dword_197BC7200[v1 + 9];
    argp = 1;
    result = ioctlsocket(v3, -2147195266, &argp);
    dword_197BC7200[v1 + 1] = 1;
  }
  return result;
}

