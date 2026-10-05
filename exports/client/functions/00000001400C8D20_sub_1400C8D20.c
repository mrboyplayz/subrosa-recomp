/* Address: 0x1400c8d20 | Name: sub_1400C8D20 | Size: 240 bytes */
__int64 __fastcall sub_1400C8D20(signed int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // ebx
  char *v6; // rax
  _BYTE v9[32]; // [rsp+0h] [rbp-848h] BYREF
  _BYTE v10[1024]; // [rsp+20h] [rbp-828h] BYREF
  char v11[1024]; // [rsp+420h] [rbp-428h] BYREF
  __int64 v12; // [rsp+820h] [rbp-28h]

  v10[0] = 0;
  v3 = 110LL * a2;
  v4 = 23;
  v5 = dword_140404A6C[1760 * a2 + 278846112];
  do
  {
    sub_140158AB0(v11, "%s\n", (const char *)&dword_140404A6C[16 * (v3 + v5) + 278846114]);
    v6 = &v9[31];
    while ( *++v6 != 0 )
      ;
    strcpy(v6, v11);
    v5 = ((_BYTE)v5 + 1) & 0x1F;
    --v4;
  }
  while ( v4 );
  sub_1400584B0(a1, (__int64)v10);
  return MEMORY[0x1401F8B20]((unsigned __int64)v9 ^ v12);
}

