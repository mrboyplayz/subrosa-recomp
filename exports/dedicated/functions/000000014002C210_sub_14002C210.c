/* Address: 0x14002c210 | Name: sub_14002C210 | Size: 252 bytes */
int *__fastcall sub_14002C210(int a1, int a2, float a3)
{
  __int64 v4; // rcx
  int *result; // rax
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // r8

  if ( (unsigned int)a1 <= 0xFFE && (unsigned int)a2 <= 0xFFE && !dword_1915FDF00 )
  {
    v4 = a1 + (a2 << 12);
    result = dword_183989E80;
    if ( a3 > *(float *)&dword_183989E80[v4 + 28997758] )
      *(float *)&dword_183989E80[v4 + 28997758] = a3;
    if ( a3 > *(float *)&dword_183989E80[v4 + 28997759] )
      *(float *)&dword_183989E80[v4 + 28997759] = a3;
    if ( a3 > *(float *)&dword_183989E80[v4 + 29001854] )
      *(float *)&dword_183989E80[v4 + 29001854] = a3;
    if ( a3 > *(float *)&dword_183989E80[v4 + 29001855] )
      *(float *)&dword_183989E80[v4 + 29001855] = a3;
    if ( a1 >= (int)xmmword_183989EC4
      && a1 <= SHIDWORD(xmmword_183989EC4)
      && a2 >= SDWORD2(xmmword_183989EC4)
      && a2 <= dword_183989ED8 )
    {
      v6 = a1 + 1024;
      v7 = a2 + 1024;
      if ( (unsigned int)v6 <= 0xFFF && (unsigned int)v7 <= 0xFFF )
      {
        v8 = (v6 >> 2) + (v7 >> 2 << 10);
        *(_WORD *)(qword_18E9B8950 + 2 * v8) &= ~(1 << ((v6 & 3) + 4 * (a2 & 3)));
        return (int *)((v6 & 3) + 4 * (a2 & 3u));
      }
    }
  }
  return result;
}

