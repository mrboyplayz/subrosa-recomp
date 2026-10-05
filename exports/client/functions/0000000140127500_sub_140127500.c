/* Address: 0x140127500 | Name: sub_140127500 | Size: 299 bytes */
__int64 sub_140127500()
{
  int v0; // ebx
  __int64 i; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-88h] BYREF
  int v6; // [rsp+20h] [rbp-68h] BYREF
  int v7[3]; // [rsp+24h] [rbp-64h] BYREF
  _BYTE v8[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  v0 = 1;
  sub_140158AB0(v8, "replay%03d.srp", 1);
  for ( i = MEMORY[0x14020B8D8](v8, "rb"); i; i = MEMORY[0x14020B8D8](v8, "rb") )
  {
    if ( v0 >= 1000 )
      break;
    sub_14020B9E8(i);
    sub_140158AB0(v8, "replay%03d.srp", ++v0);
  }
  v2 = MEMORY[0x14020B8D8](v8, "wb");
  v3 = v2;
  if ( v2 )
  {
    v6 = 1;
    sub_14020CE0C(&v6, 4, 1, v2);
    v7[0] = dword_1402B26C8;
    sub_14020CE0C(v7, 4, 1, v3);
    sub_14020CE0C(&dword_140404A6C[19065874], 4, 1, v3);
    sub_14020CE0C(*(_QWORD *)&dword_140404A6C[19065875], 1, (int)dword_140404A6C[19065874], v3);
    sub_14020B9E8(v3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v9);
}

