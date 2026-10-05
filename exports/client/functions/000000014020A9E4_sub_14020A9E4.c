/* Address: 0x14020a9e4 | Name: sub_14020A9E4 | Size: 158 bytes */
unsigned __int8 *__fastcall MEMORY[0x14020A9E4](FH4::UWMap4 *this, unsigned __int8 **a2)
{
  __int64 v4; // rcx
  unsigned __int8 *v5; // r8
  unsigned int v6; // eax
  int v7; // ecx
  unsigned __int8 *result; // rax
  int v9; // ecx
  int v10; // ecx
  int *v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // rdx

  v4 = **a2 & 0xF;
  v5 = &(*a2)[-byte_140284A40[v4]];
  v6 = *((_DWORD *)v5 - 1) >> byte_140284A40[v4 + 16];
  *a2 = v5;
  v7 = v6 & 3;
  result = (unsigned __int8 *)(v6 >> 2);
  *((_DWORD *)this + 5) = v7;
  *((_DWORD *)this + 4) = (_DWORD)result;
  if ( v7 == 1 || v7 == 2 )
  {
    v10 = *(_DWORD *)*a2;
    *a2 += 4;
    *((_DWORD *)this + 6) = v10;
    v11 = (int *)*a2;
    v12 = *(_BYTE *)v11 & 0xF;
    v13 = (unsigned __int8 *)v11 - byte_140284A40[v12];
    result = (unsigned __int8 *)(unsigned int)(*((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16]);
    *a2 = v13;
    *((_DWORD *)this + 7) = (_DWORD)result;
  }
  else if ( v7 == 3 )
  {
    v9 = *(_DWORD *)*a2;
    result = *a2 + 4;
    *a2 = result;
    *((_DWORD *)this + 6) = v9;
  }
  return result;
}

