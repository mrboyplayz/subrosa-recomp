/* Address: 0x1401fe684 | Name: sub_1401FE684 | Size: 64 bytes */
__int64 __fastcall MEMORY[0x1401FE684](signed int *a1, __int64 a2, signed int a3)
{
  __int64 v3; // rcx

  if ( (unsigned int)a3 > 9 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 8) = 3;
    goto LABEL_7;
  }
  if ( *a1 == -1 || a3 > *a1 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 8) = 2;
LABEL_7:
    *(_QWORD *)a2 = 0;
    return a2;
  }
  v3 = *(_QWORD *)&a1[2 * a3 + 2];
  *(_QWORD *)a2 = *(_QWORD *)v3;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8);
  return a2;
}

