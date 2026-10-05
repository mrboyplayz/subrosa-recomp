/* Address: 0x1402026e0 | Name: sub_1402026E0 | Size: 142 bytes */
unsigned __int64 __fastcall sub_1402026E0(_HeapManager *this, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rbx

  v2 = *((_QWORD *)this + 4);
  v3 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v3 )
    v3 = 8;
  if ( v2 >= v3 )
    goto LABEL_10;
  v2 = 4096;
  if ( v3 <= 0x1000 )
  {
    v5 = MEMORY[0x1401FE568](0x1008u, (struct _HeapManager *)&dword_140404A6C[19064565], 1);
    if ( v5 )
    {
      *v5 = 0;
      v6 = *((_QWORD **)this + 3);
      if ( v6 )
        *v6 = v5;
      else
        *((_QWORD *)this + 2) = v5;
      *((_QWORD *)this + 3) = v5;
LABEL_10:
      v7 = v2 - v3;
      *((_QWORD *)this + 4) = v7;
      return v7 + *((_QWORD *)this + 3) + 8LL;
    }
  }
  return 0;
}

