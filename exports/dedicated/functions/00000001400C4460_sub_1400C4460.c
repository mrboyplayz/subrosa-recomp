/* Address: 0x1400c4460 | Name: sub_1400C4460 | Size: 393 bytes */
void __fastcall sub_1400C4460(int a1)
{
  _DWORD *v1; // rdi
  char *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  int v5; // eax
  int v6; // eax
  __int128 v7; // xmm1
  int v8; // eax

  v1 = &unk_160F23920;
  qmemcpy(dword_197BC7264, "7DFP\t", 5);
  v2 = (char *)&unk_160F23928;
  v3 = a1;
  *(_QWORD *)&qword_197BC725C = 5;
  v4 = 256;
  do
  {
    sub_1400AFDB0((_DWORD *)v2 - 2, 1);
    if ( *v1 )
    {
      v5 = qword_197BC725C;
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          v5 = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        *(_DWORD *)&dword_197BC7264[v5] = *(_DWORD *)v2;
        v6 = qword_197BC725C + 4;
        qword_197BC725C = v6;
        if ( v6 < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            ++v6;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = v6;
          }
          v7 = *(_OWORD *)(v2 + 20);
          *(_OWORD *)&dword_197BC7264[v6] = *(_OWORD *)(v2 + 4);
          *(_OWORD *)((char *)&unk_197BC7274 + v6) = v7;
          v8 = qword_197BC725C + 32;
          qword_197BC725C = v8;
          if ( v8 < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              ++v8;
              *(&qword_197BC725C + 1) = 0;
              qword_197BC725C = v8;
            }
            *(_DWORD *)&dword_197BC7264[v8] = *((_DWORD *)v2 + 17);
            qword_197BC725C += 4;
          }
        }
      }
    }
    v2 += 80;
    v1 += 20;
    --v4;
  }
  while ( v4 );
  sub_1400BC790(*((_DWORD *)&unk_160F29960 + 47224 * v3), *((_WORD *)&unk_160F29964 + 94448 * v3));
}

