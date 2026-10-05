/* Address: 0x14023a90c | Name: sub_14023A90C | Size: 219 bytes */
__int64 __fastcall sub_14023A90C(int a1, int a2, struct __crt_locale_pointers *const a3)
{
  __int64 v3; // rax
  int v7; // edi
  int v8; // ecx
  int *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 result; // rax
  bool v13; // zf
  char v14; // [rsp+80h] [rbp+30h] BYREF
  char v15; // [rsp+81h] [rbp+31h]
  char v16; // [rsp+82h] [rbp+32h]
  __int16 v17; // [rsp+88h] [rbp+38h] BYREF
  char v18; // [rsp+8Ah] [rbp+3Ah]

  v3 = *(_QWORD *)a3;
  v16 = 0;
  if ( *(int *)(v3 + 8) > 1 && (v7 = a1 >> 8, (unsigned int)isleadbyte_l(BYTE1(a1), a3)) )
  {
    v14 = v7;
    v8 = 2;
    v15 = a1;
    v16 = 0;
  }
  else
  {
    v9 = errno();
    v8 = 1;
    *v9 = 42;
    v14 = a1;
    v15 = 0;
  }
  v10 = *(_QWORD *)a3;
  v17 = 0;
  v18 = 0;
  v11 = sub_14025A004(
          (_DWORD)a3,
          *(_QWORD *)(v10 + 312),
          a2,
          (unsigned int)&v14,
          v8,
          (__int64)&v17,
          3,
          *(_DWORD *)(v10 + 12),
          1);
  if ( !v11 )
    return (unsigned int)a1;
  v13 = v11 == 1;
  result = (unsigned __int8)v17;
  if ( !v13 )
    return HIBYTE(v17) | ((unsigned __int8)v17 << 8);
  return result;
}

