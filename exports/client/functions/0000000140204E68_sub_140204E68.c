/* Address: 0x140204e68 | Name: sub_140204E68 | Size: 35 bytes */
__int64 __fastcall MEMORY[0x140204E68](__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  bool v3; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)&dword_140404A6C[19064555];
  v2 = **(_BYTE **)&dword_140404A6C[19064555];
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = v2 == 90;
  result = a1;
  if ( v3 )
    *(_QWORD *)&dword_140404A6C[19064555] = v1 + 1;
  return result;
}

