/* Address: 0x14020cc60 | Name: sub_14020CC60 | Size: 426 bytes */
unsigned __int64 __fastcall sub_14020CC60(const __m128i *Buf, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  const __m128i *v7; // r13
  __int64 v8; // rcx
  int v10; // r15d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  bool i; // zf
  int v14; // eax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned int v17; // ebp
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+58h] [rbp+10h]

  v7 = Buf;
  if ( !a2 || !a3 )
    return 0;
  if ( !a4 || !Buf || a3 > 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    *errno() = 22;
    sub_14024CF6C(v8);
    return 0;
  }
  if ( (*(_DWORD *)(a4 + 20) & 0x4C0) != 0 )
    v10 = *(_DWORD *)(a4 + 32);
  else
    v10 = 4096;
  v11 = a3 * a2;
  v12 = a3 * a2;
  for ( i = a3 * a2 == 0; !i; i = v12 == 0 )
  {
    if ( (*(_DWORD *)(a4 + 20) & 0xC0) != 0 && (v14 = *(_DWORD *)(a4 + 16)) != 0 )
    {
      if ( v14 < 0 )
        goto LABEL_31;
      if ( (*(_DWORD *)(a4 + 20) & 1) != 0 )
        return (v11 - v12) / a2;
      v15 = v12;
      if ( v12 >= *(int *)(a4 + 16) )
        v15 = *(int *)(a4 + 16);
      MEMORY[0x1401FC920](*(__m128i **)a4, v7, v15);
      *(_DWORD *)(a4 + 16) -= v15;
      v12 -= v15;
      *(_QWORD *)a4 += v15;
    }
    else if ( v12 < (unsigned int)v10 )
    {
      if ( (unsigned int)sub_140251DA8((unsigned int)v7->m128i_i8[0], a4) == -1 )
        return (v11 - v12) / a2;
      v10 = *(_DWORD *)(a4 + 32);
      --v12;
      v15 = 1;
      if ( v10 <= 0 )
        v10 = 1;
    }
    else
    {
      if ( (*(_DWORD *)(a4 + 20) & 0xC0) != 0 && (unsigned int)sub_1402501C4((FILE *)a4) )
        return (v11 - v12) / a2;
      v16 = v12;
      if ( v10 )
        v16 = v12 - v12 % (unsigned int)v10;
      v17 = -2;
      if ( v16 < 0xFFFFFFFE )
        v17 = v16;
      v21 = v17;
      v18 = fileno((FILE *)a4);
      v19 = write(v18, v7, v17);
      if ( v19 == -1 )
        goto LABEL_31;
      v20 = v19;
      if ( v19 > v17 )
        v20 = v17;
      v15 = v20;
      v12 -= v20;
      if ( v19 < v21 )
      {
LABEL_31:
        _InterlockedOr((volatile signed __int32 *)(a4 + 20), 0x10u);
        return (v11 - v12) / a2;
      }
    }
    v7 = (const __m128i *)((char *)v7 + v15);
  }
  return a3;
}

