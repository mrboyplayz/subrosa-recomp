/* Address: 0x14017e1a0 | Name: sub_14017E1A0 | Size: 249 bytes */
int __fastcall sub_14017E1A0(__int64 a1, int a2, int a3)
{
  unsigned __int8 *v3; // r11
  int v4; // r9d
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  unsigned int v9; // ecx

  v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 44));
  if ( !*(_DWORD *)(a1 + 44) )
    return 0;
  if ( !(v3[3] + (v3[2] << 8)) )
    return 0;
  if ( v3[9] + (v3[8] << 8) != 1 )
    return 0;
  v4 = 0;
  v5 = a3 | (a2 << 16);
  v6 = (v3[10] << 8) + v3[11] - 1;
  if ( v6 < 0 )
    return 0;
  while ( 1 )
  {
    v7 = (v6 + v4) >> 1;
    v8 = 6 * v7;
    v9 = v3[v8 + 21] + (v3[v8 + 18] << 24) + (v3[v8 + 20] << 8) + (v3[v8 + 19] << 16);
    if ( v5 >= v9 )
      break;
    v6 = v7 - 1;
LABEL_9:
    if ( v4 > v6 )
      return 0;
  }
  if ( v5 > v9 )
  {
    v4 = v7 + 1;
    goto LABEL_9;
  }
  return (__int16)((v3[v8 + 22] << 8) + v3[v8 + 23]);
}

