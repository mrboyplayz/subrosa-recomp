/* Address: 0x14008eb80 | Name: sub_14008EB80 | Size: 192 bytes */
__int64 __fastcall sub_14008EB80(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 argp; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  v1 = a1;
  dword_140404A6C[v1 + 289301078] = socket(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  result = bind((int)dword_140404A6C[v1 + 289301078], &dword_140404A6C[289301086], 16);
  if ( !(_DWORD)result )
  {
    v3 = (int)dword_140404A6C[v1 + 289301078];
    LODWORD(argp) = 1;
    result = ioctlsocket(v3, 2147772030LL, &argp);
    dword_140404A6C[v1 + 289301070] = 1;
  }
  return result;
}

