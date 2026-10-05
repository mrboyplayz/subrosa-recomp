/* Address: 0x14020be38 | Name: sub_14020BE38 | Size: 656 bytes */
unsigned __int64 __fastcall sub_14020BE38(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        FILE *Stream)
{
  __int64 v8; // rcx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdi
  __m128i *v13; // r10
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  const __m128i *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // eax
  int nolock; // eax
  int v23; // eax
  __m128i *v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  unsigned __int64 v26; // [rsp+88h] [rbp+20h]
  unsigned int Streama; // [rsp+90h] [rbp+28h]

  v26 = a4;
  if ( !a3 || !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( !Stream || a4 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
  {
    if ( a2 != -1 )
    {
      MEMORY[0x1401FCD30](a1, 0, a2);
      a4 = v26;
    }
    if ( !Stream || a4 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
    {
LABEL_4:
      *errno() = 22;
      goto LABEL_5;
    }
  }
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) != 0 )
    v11 = *((_DWORD *)Stream + 8);
  else
    v11 = 4096;
  Streama = v11;
  v12 = a4 * a3;
  v13 = a1;
  v24 = a1;
  v14 = a4 * a3;
  v15 = a2;
  if ( !(a4 * a3) )
    return a4;
  while ( 1 )
  {
    if ( (*((_DWORD *)Stream + 5) & 0x4C0) != 0 )
    {
      v16 = *((int *)Stream + 4);
      if ( (_DWORD)v16 )
      {
        if ( (v16 & 0x80000000) != 0LL )
          goto LABEL_53;
        if ( v14 < v16 )
          v16 = (unsigned int)v14;
        if ( v16 > v15 )
          goto LABEL_50;
        v17 = *(const __m128i **)Stream;
        v25 = *(_QWORD *)Stream;
        if ( !v16 )
          goto LABEL_34;
        if ( !v13 )
          goto LABEL_25;
        if ( v17 && v15 >= v16 )
        {
          MEMORY[0x1401FC920](v13, v17, v16);
        }
        else
        {
          MEMORY[0x1401FCD30](v13, 0, v15);
          if ( !v25 )
          {
LABEL_25:
            *errno() = 22;
LABEL_32:
            sub_14024CF6C(v18);
            goto LABEL_33;
          }
          if ( v15 < v16 )
          {
            *errno() = 34;
            goto LABEL_32;
          }
        }
LABEL_33:
        v13 = v24;
LABEL_34:
        *((_DWORD *)Stream + 4) -= v16;
        v14 -= v16;
        *(_QWORD *)Stream += v16;
        v11 = Streama;
        v15 -= v16;
        goto LABEL_47;
      }
    }
    if ( v14 < v11 )
      break;
    v19 = v14;
    if ( v14 > 0x7FFFFFFF )
      v19 = 0x7FFFFFFF;
    if ( v11 )
      v19 -= v19 % v11;
    if ( v19 > v15 )
      goto LABEL_50;
    v20 = *((_QWORD *)Stream + 1);
    *((_DWORD *)Stream + 4) = 0;
    *(_QWORD *)Stream = v20;
    v21 = fileno(Stream);
    nolock = read_nolock(v21, v24, v19);
    if ( !nolock )
    {
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 8u);
      return (v12 - v14) / a3;
    }
    if ( nolock < 0 )
    {
LABEL_53:
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
      return (v12 - v14) / a3;
    }
    v11 = Streama;
    v13 = v24;
    v16 = nolock;
    v14 -= nolock;
    v15 -= nolock;
LABEL_47:
    v13 = (__m128i *)((char *)v13 + v16);
    v24 = v13;
    if ( !v14 )
      return v26;
  }
  v23 = sub_140251818(Stream);
  if ( v23 == -1 )
    return (v12 - v14) / a3;
  if ( v15 )
  {
    v13 = v24;
    --v14;
    --v15;
    v16 = 1;
    v24->m128i_i8[0] = v23;
    v11 = *((_DWORD *)Stream + 8);
    Streama = v11;
    goto LABEL_47;
  }
LABEL_50:
  if ( a2 != -1 )
    MEMORY[0x1401FCD30](a1, 0, a2);
  *errno() = 34;
LABEL_5:
  sub_14024CF6C(v8);
  return 0;
}

