/* Address: 0x140259b90 | Name: isleadbyte | Size: 77 bytes */
int __cdecl isleadbyte(int C)
{
  __int64 v1; // rbx
  int result; // eax
  _QWORD v3[3]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+38h] [rbp-10h]

  v1 = C;
  sub_140213644((_LocaleUpdate *)v3, nullptr);
  if ( (unsigned int)(v1 + 1) > 0x100 )
    result = 0;
  else
    result = *(_WORD *)(*(_QWORD *)v3[1] + 2 * v1) & 0x8000;
  if ( v4 )
    *(_DWORD *)(v3[0] + 936LL) &= ~2u;
  return result;
}

