/* Address: 0x1402053cc | Name: sub_1402053CC | Size: 115 bytes */
__int64 __fastcall sub_1402053CC(__int64 a1)
{
  char *v1; // r8
  __int64 v2; // rdx
  char v4; // cl
  _QWORD *v6; // rax
  __int64 i; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(char **)&dword_140404A6C[19064555];
  v2 = 0;
  for ( i = 0; ; v2 = i )
  {
    v4 = *v1;
    if ( !*v1 )
    {
LABEL_6:
      *(_OWORD *)a1 = 0;
      return a1;
    }
    if ( v4 == 64 )
      break;
    if ( (unsigned __int8)(v4 - 65) > 0xFu )
      goto LABEL_6;
    ++v1;
    i = 16 * v2 + v4 - 65;
    *(_QWORD *)&dword_140404A6C[19064555] = v1;
  }
  v6 = (_QWORD *)sub_1401FE158(&i);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = *v6;
  return a1;
}

