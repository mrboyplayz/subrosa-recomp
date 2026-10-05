/* Address: 0x140205e50 | Name: sub_140205E50 | Size: 306 bytes */
char *__fastcall sub_140205E50(char *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  char *v12; // rbx
  void (*v13)(void); // rax
  _DWORD v14[22]; // [rsp+20h] [rbp-B8h] BYREF
  int v15; // [rsp+78h] [rbp-60h] BYREF

  if ( !a4 )
    return nullptr;
  sub_1401FDA08(0);
  *(_QWORD *)&dword_140404A6C[19064565] = a4;
  *(_QWORD *)&dword_140404A6C[19064567] = a5;
  *(_QWORD *)&dword_140404A6C[19064573] = 0;
  *(_OWORD *)&dword_140404A6C[19064569] = 0;
  v14[0] = -1;
  v15 = -1;
  *(_QWORD *)&dword_140404A6C[19064557] = a2;
  *(_QWORD *)&dword_140404A6C[19064555] = a2;
  *(_QWORD *)&dword_140404A6C[19064551] = &v15;
  *(_QWORD *)&dword_140404A6C[19064549] = v14;
  dword_140404A6C[19064559] = a7;
  *(_QWORD *)&dword_140404A6C[19064561] = a6;
  LOBYTE(dword_140404A6C[19064560]) = 0;
  dword_140404A6C[19064563] = 0;
  dword_140404A6C[19064564] = 0;
  v12 = sub_140205200((UnDecorator *)v14, a1, a3);
  v13 = *(void (**)(void))&dword_140404A6C[19064567];
  if ( *(_QWORD *)&dword_140404A6C[19064567] )
  {
    while ( 1 )
    {
      *(_QWORD *)&dword_140404A6C[19064571] = *(_QWORD *)&dword_140404A6C[19064569];
      if ( !*(_QWORD *)&dword_140404A6C[19064569] )
        break;
      *(_QWORD *)&dword_140404A6C[19064569] = **(_QWORD **)&dword_140404A6C[19064569];
      v13();
      v13 = *(void (**)(void))&dword_140404A6C[19064567];
    }
  }
  sub_1401FDA5C(0);
  return v12;
}

