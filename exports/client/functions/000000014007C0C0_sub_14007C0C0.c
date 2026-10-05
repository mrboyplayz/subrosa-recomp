/* Address: 0x14007c0c0 | Name: sub_14007C0C0 | Size: 243 bytes */
__int64 __fastcall sub_14007C0C0(int a1, unsigned __int16 a2, int a3, _BYTE *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 argp; // [rsp+58h] [rbp+10h] BYREF

  v7 = 1048782LL * a1;
  v8 = socket(2, 2, 17);
  LOWORD(dword_140404A6C[v7 + 112673945]) = 2;
  dword_140404A6C[v7 + 112673944] = v8;
  LOWORD(dword_140404A6C[v7 + 112673950]) = a2;
  dword_140404A6C[v7 + 112673946] = 0;
  HIWORD(dword_140404A6C[v7 + 112673945]) = htons(a2);
  dword_140404A6C[v7 + 112673949] = 16;
  if ( !a3
    || (result = bind((int)dword_140404A6C[v7 + 112673944], &dword_140404A6C[v7 + 112673945], 16), !(_DWORD)result) )
  {
    if ( a4 )
    {
      LOBYTE(dword_140404A6C[v7 + 112673942]) = *a4;
      BYTE1(dword_140404A6C[v7 + 112673942]) = a4[1];
      HIWORD(dword_140404A6C[v7 + 112673942]) = (unsigned __int8)a4[2];
    }
    v10 = (int)dword_140404A6C[v7 + 112673944];
    LODWORD(argp) = 1;
    result = ioctlsocket(v10, 2147772030LL, &argp);
    dword_140404A6C[v7 + 112673941] = 1;
  }
  return result;
}

