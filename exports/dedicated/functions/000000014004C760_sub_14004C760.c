/* Address: 0x14004c760 | Name: sub_14004C760 | Size: 57 bytes */
int __fastcall sub_14004C760(int a1)
{
  __int64 v1; // rbx
  int result; // eax

  v1 = a1;
  result = closesocket(dword_197BC7200[v1 + 9]);
  dword_197BC7200[v1 + 1] = 0;
  return result;
}

