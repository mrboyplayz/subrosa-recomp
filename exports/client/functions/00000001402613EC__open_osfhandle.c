/* Address: 0x1402613ec | Name: _open_osfhandle | Size: 257 bytes */
__int64 __fastcall open_osfhandle(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bl
  int v6; // eax
  unsigned int v7; // eax
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx

  v3 = (unsigned __int8)(4 * (a2 & 8)) | 0x80u;
  v4 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
    v3 = (unsigned __int8)(4 * (a2 & 8));
  v5 = v3 | 0x10;
  LOBYTE(a2) = a2 & 0x80;
  if ( !(_BYTE)a2 )
    v5 = v3;
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))GetFileType)(a1, a2, v3, v4);
  switch ( v6 )
  {
    case 0:
      v7 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v7);
      return 0xFFFFFFFFLL;
    case 2:
      v5 |= 0x40u;
      break;
    case 3:
      v5 |= 8u;
      break;
  }
  v9 = alloc_osfhnd();
  v10 = v9;
  if ( v9 == -1 )
  {
    *errno() = 24;
    *(_DWORD *)sub_14024D19C() = 0;
    return 0xFFFFFFFFLL;
  }
  sub_140261090(v9, a1);
  v11 = 9 * (v10 & 0x3F);
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v10 >> 6) + 19065401] + 8 * v11 + 56) = v5 | 1;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v10 >> 6) + 19065401] + 8 * v11 + 57) = 0;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v10 >> 6) + 19065401] + 8 * v11 + 61) &= ~1u;
  sub_140261150((unsigned int)v10);
  return (unsigned int)v10;
}

