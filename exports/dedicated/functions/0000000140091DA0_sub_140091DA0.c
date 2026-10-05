/* Address: 0x140091da0 | Name: sub_140091DA0 | Size: 321 bytes */
__int64 __fastcall sub_140091DA0(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // r9d
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // xmm1_4
  signed int v11; // esi
  int i; // ebx
  int v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-18h]

  result = a1;
  v3 = 3597LL * a1;
  v4 = a2;
  v5 = *(_DWORD *)((char *)&unk_16D67D608 + v3 * 4);
  if ( v5 < 10 )
  {
    v6 = dword_16D67D5EC[v3];
    v7 = 4673LL * dword_16D67D708[v3];
    v8 = dword_16D67D63C[v3];
    result = 3 * (v4 + v7);
    v9 = *((_DWORD *)&qword_183A8AAA4 + 3 * v4 + 3 * v7 + 1);
    if ( v6 >= v9 )
    {
      result = (unsigned int)(v5 + 1);
      dword_16D67D5EC[v3] = v6 - v9;
      *(_DWORD *)((char *)&unk_16D67D608 + v3 * 4) = result;
      if ( (_DWORD)v4 == 1 && (_DWORD)v8 != -1 )
      {
        v10 = dword_190941A48[7166 * v8 + 1];
        v13[0] = dword_190941A48[7166 * v8];
        v13[2] = dword_190941A48[7166 * v8 + 2];
        v13[1] = v10;
        v15 = 1065353216;
        v14[0] = xmmword_1400F78B0;
        v14[1] = xmmword_1400F78B0;
        v11 = sub_14003B080(30, v13, nullptr, (int *)v14);
        for ( i = 0; i < 7; ++i )
        {
          result = sub_140089E50(v11, -1, v8, i);
          if ( (_DWORD)result )
            break;
        }
      }
    }
  }
  return result;
}

