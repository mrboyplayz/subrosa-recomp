/* Address: 0x140168c80 | Name: sub_140168C80 | Size: 373 bytes */
__int64 __fastcall sub_140168C80(char **a1)
{
  int v1; // eax
  int v3; // r9d
  int v4; // r11d
  int v5; // r8d
  bool v6; // sf
  unsigned int v7; // ecx
  unsigned __int8 *v8; // rdx
  int v9; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  char *v13; // rax
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // rdi
  char *v17; // rdx
  unsigned __int8 v18; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v19; // [rsp+31h] [rbp+9h]
  unsigned __int8 v20; // [rsp+32h] [rbp+Ah]
  unsigned __int8 v21; // [rsp+33h] [rbp+Bh]

  v1 = *((_DWORD *)a1 + 4);
  v3 = v1;
  v4 = v1 & 7;
  if ( (v1 & 7) != 0 )
  {
    if ( v1 < v4 )
    {
      sub_140160350(a1);
      v1 = *((_DWORD *)a1 + 4);
    }
    *((_DWORD *)a1 + 5) >>= v4;
    v1 -= v4;
    *((_DWORD *)a1 + 4) = v1;
    v3 = v1;
  }
  v5 = 0;
  v6 = v1 < 0;
  if ( v1 > 0 )
  {
    v7 = *((_DWORD *)a1 + 5);
    v8 = &v18;
    do
    {
      ++v5;
      *v8++ = *((_BYTE *)a1 + 20);
      v9 = v3 - 8;
      v7 >>= 8;
      *((_DWORD *)a1 + 5) = v7;
      v3 = v9;
      v6 = v9 < 0;
    }
    while ( v9 > 0 );
    *((_DWORD *)a1 + 4) = v9;
  }
  if ( v6 )
    goto LABEL_10;
  v11 = v5;
  if ( v5 < 4LL )
  {
    v12 = (unsigned __int64)a1[1];
    v13 = *a1;
    do
    {
      if ( (unsigned __int64)v13 < v12 )
      {
        v14 = *v13++;
        *a1 = v13;
      }
      else
      {
        v14 = 0;
      }
      *(&v18 + v11++) = v14;
    }
    while ( v11 < 4 );
  }
  v15 = v18 + (v19 << 8);
  if ( v20 + (v21 << 8) != ((v18 + (v19 << 8)) ^ 0xFFFF) )
  {
LABEL_10:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "zlib corrupt";
    return 0;
  }
  v16 = (unsigned int)v15;
  if ( &(*a1)[(unsigned int)v15] > a1[1] )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "read past buffer";
    return 0;
  }
  v17 = a1[3];
  if ( &v17[v15] > a1[5] && !(unsigned int)sub_14016F9E0(a1, v17, v15) )
    return 0;
  MEMORY[0x1401FC920](a1[3], *a1);
  *a1 += v16;
  a1[3] += v16;
  return 1;
}

