/* Address: 0x14004a090 | Name: sub_14004A090 | Size: 55 bytes */
int __fastcall sub_14004A090(int a1)
{
  __int64 v1; // rbx
  int result; // eax

  v1 = 4195128LL * a1;
  result = closesocket(*(int *)((char *)&unk_191625F60 + v1 + 12));
  *(_DWORD *)((char *)&unk_191625F60 + v1) = 0;
  return result;
}

