/* Address: 0x1400b3750 | Name: sub_1400B3750 | Size: 451 bytes */
__int64 __fastcall sub_1400B3750(int a1)
{
  int v2; // ebp
  char v3; // r14
  int v4; // eax
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // ebx
  int v9; // edx
  int v10; // r8d

  memcpy(dword_19A257E30, &Src, a1);
  v2 = (unsigned __int8)byte_19A257E36;
  v3 = byte_19A257E37;
  dword_19A257E2C = 1;
  *(_QWORD *)&qword_19A257E20 = 8;
  dword_19A257E28 = a1;
  if ( (unsigned __int8)byte_19A257E36 >= 0x10u || (unsigned __int8)byte_19A257E37 > 0x10u )
    return 0;
  v4 = dword_197BE7288;
  v5 = -1;
  while ( v4 != dword_197BE728C )
  {
    if ( dword_197BC7200[16387 * v4 + 32804] == (unsigned __int16)word_19A257E34 )
      v5 = v4;
    else
      v4 = ((_BYTE)v4 + 1) & 0x3F;
    if ( v5 != -1 )
      goto LABEL_12;
  }
  v6 = 16387LL * dword_197BE728C;
  v5 = dword_197BE728C;
  dword_197BC7200[v6 + 32804] = (unsigned __int16)word_19A257E34;
  *(_QWORD *)&dword_197BC7200[v6 + 32805] = 0;
  dword_197BE728C = ((_BYTE)dword_197BE728C + 1) & 0x3F;
  if ( dword_197BE7288 == dword_197BE728C )
    dword_197BE7288 = ((_BYTE)dword_197BE7288 + 1) & 0x3F;
LABEL_12:
  v7 = 16387LL * v5;
  v8 = a1 - 8;
  memcpy((char *)&unk_197BE729C + v7 * 4 + (unsigned int)(v2 << 10), &unk_19A257E38, v8);
  v9 = v8 + (v2 << 10);
  if ( dword_197BC7200[v7 + 32806] < v9 )
    dword_197BC7200[v7 + 32806] = v9;
  v10 = dword_197BC7200[v7 + 32805] | (1 << v2);
  dword_197BC7200[v7 + 32805] = v10;
  if ( (((1 << v3) - 1) & v10) != (1 << v3) - 1 )
    return 0;
  qword_197BD727C = 4;
  memcpy(&Src, (char *)&unk_197BE729C + v7 * 4, dword_197BC7200[v7 + 32806]);
  return (unsigned int)dword_197BC7200[v7 + 32806];
}

