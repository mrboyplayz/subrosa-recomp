/* Address: 0x140205f84 | Name: sub_140205F84 | Size: 262 bytes */
__m128i *__fastcall sub_140205F84(__m128i *a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __m128i *v7; // rbx
  void (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _DWORD v11[22]; // [rsp+20h] [rbp-B8h] BYREF
  int v12; // [rsp+78h] [rbp-60h] BYREF

  if ( !a4 )
    return nullptr;
  *(_QWORD *)&dword_140404A6C[19064573] = 0;
  *(_QWORD *)&dword_140404A6C[19064561] = 0;
  dword_140404A6C[19064563] = 0;
  dword_140404A6C[19064564] = 0;
  *(_QWORD *)&dword_140404A6C[19064567] = a5;
  v11[0] = -1;
  v12 = -1;
  *(_QWORD *)&dword_140404A6C[19064551] = &v12;
  *(_QWORD *)&dword_140404A6C[19064557] = a2;
  *(_QWORD *)&dword_140404A6C[19064555] = a2;
  *(_QWORD *)&dword_140404A6C[19064549] = v11;
  dword_140404A6C[19064559] = a6;
  *(_QWORD *)&dword_140404A6C[19064565] = a4;
  *(_OWORD *)&dword_140404A6C[19064569] = 0;
  LOBYTE(dword_140404A6C[19064560]) = 0;
  v7 = sub_140200880((UnDecorator *)v11, a1, a3);
  v8 = *(void (__fastcall **)(__int64))&dword_140404A6C[19064567];
  if ( *(_QWORD *)&dword_140404A6C[19064567] )
  {
    v9 = *(_QWORD **)&dword_140404A6C[19064569];
    *(_QWORD *)&dword_140404A6C[19064571] = *(_QWORD *)&dword_140404A6C[19064569];
    v10 = *(_QWORD *)&dword_140404A6C[19064569];
    if ( *(_QWORD *)&dword_140404A6C[19064569] )
    {
      while ( 1 )
      {
        *(_QWORD *)&dword_140404A6C[19064569] = *v9;
        v8(v10);
        v9 = *(_QWORD **)&dword_140404A6C[19064569];
        *(_QWORD *)&dword_140404A6C[19064571] = *(_QWORD *)&dword_140404A6C[19064569];
        v10 = *(_QWORD *)&dword_140404A6C[19064569];
        if ( !*(_QWORD *)&dword_140404A6C[19064569] )
          break;
        v8 = *(void (__fastcall **)(__int64))&dword_140404A6C[19064567];
      }
    }
  }
  return v7;
}

