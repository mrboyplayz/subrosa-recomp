/* Address: 0x140247c1c | Name: sub_140247C1C | Size: 222 bytes */
__int64 __fastcall sub_140247C1C(int a1, int a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // r9
  char v5; // cl
  char v6; // r11
  __int64 result; // rax

  v2 = (__int64)a1 >> 6;
  v3 = a1 & 0x3F;
  v4 = *(_QWORD *)&dword_140404A6C[2 * v2 + 19065401];
  v5 = *(_BYTE *)(v4 + 72 * v3 + 56);
  v6 = *(_BYTE *)(v4 + 72 * v3 + 57);
  if ( a2 == 0x4000 )
  {
    *(_BYTE *)(v4 + 72 * v3 + 56) = v5 | 0x80;
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 72 * v3 + 57) = 0;
  }
  else if ( a2 == 0x8000 )
  {
    *(_BYTE *)(v4 + 72 * v3 + 56) = v5 & 0x7F;
  }
  else if ( ((a2 - 0x10000) & 0xFFFEFFFF) != 0 )
  {
    if ( a2 == 0x40000 )
    {
      *(_BYTE *)(v4 + 72 * v3 + 56) = v5 | 0x80;
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 72 * v3 + 57) = 1;
    }
  }
  else
  {
    *(_BYTE *)(v4 + 72 * v3 + 56) = v5 | 0x80;
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 72 * v3 + 57) = 2;
  }
  if ( (v5 & 0x80) == 0 )
    return 0x8000;
  if ( !v6 )
    return 0x4000;
  result = 0x10000;
  if ( v6 == 1 )
    return 0x40000;
  return result;
}

