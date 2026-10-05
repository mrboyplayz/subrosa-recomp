/* Address: 0x140046eb0 | Name: sub_140046EB0 | Size: 87 bytes */
__int64 __fastcall sub_140046EB0(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    return sub_140046D00(a1, a2, a3, a4);
  sub_140046D00(a1, &v7, a3, 0);
  result = v7;
  if ( v7 == (1 << a3) - 1 )
    result = 0xFFFFFFFFLL;
  *a2 = result;
  return result;
}

