/* Address: 0x140132990 | Name: sub_140132990 | Size: 340 bytes */
void __fastcall sub_140132990(unsigned int a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  unsigned int v9; // r9d
  signed int v10; // eax
  signed int v11; // r8d
  unsigned int v12; // ecx
  int v13; // edx

  v8 = -1;
  do
    ++v8;
  while ( *(_BYTE *)(a4 + v8) );
  *(_QWORD *)&dword_140404A6C[289301092] = 5;
  LOBYTE(dword_140404A6C[289301095]) = 3;
  if ( (int)v8 > 63 )
    LODWORD(v8) = 63;
  dword_140404A6C[289301094] = dword_1402B2658;
  v9 = v8 & 0x3F;
  v10 = 5;
  v11 = 6;
  while ( 1 )
  {
    *((_BYTE *)&dword_140404A6C[289301094] + v10) &= -1 << v11;
    *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v9 << SLOBYTE(dword_140404A6C[289301093]);
    v12 = 8 - dword_140404A6C[289301093];
    v10 = dword_140404A6C[289301092];
    if ( v11 < 8 - dword_140404A6C[289301093] )
      break;
    v13 = 0;
    dword_140404A6C[289301093] = 0;
    if ( v11 == v12 )
    {
      v10 = ++dword_140404A6C[289301092];
      goto LABEL_12;
    }
    v10 = dword_140404A6C[289301092] + 1;
    v9 >>= v12;
    v11 -= v12;
    ++dword_140404A6C[289301092];
    if ( v11 <= 0 )
      goto LABEL_12;
  }
  v13 = v11 + dword_140404A6C[289301093];
  dword_140404A6C[289301093] += v11;
LABEL_12:
  if ( v10 < 0x10000 )
  {
    if ( v13 > 0 )
    {
      ++v10;
      dword_140404A6C[289301093] = 0;
      dword_140404A6C[289301092] = v10;
    }
    MEMORY[0x1401FC920]((char *)&dword_140404A6C[289301094] + v10, a4);
    dword_140404A6C[289301092] += v8;
  }
  sub_140130350(a1, a2, a3);
}

