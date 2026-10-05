/* Address: 0x140263294 | Name: TestDefaultCountry | Size: 99 bytes */
__int64 __fastcall TestDefaultCountry(__int64 a1)
{
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v4[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( (unsigned int)sub_14024F174(a1, 0x59u, (__int64)v4, 9u) )
    wcsncmp(v4, a1, 9);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v3 ^ v5);
}

