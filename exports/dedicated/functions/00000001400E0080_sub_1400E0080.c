/* Address: 0x1400e0080 | Name: sub_1400E0080 | Size: 816 bytes */
unsigned __int8 __fastcall sub_1400E0080(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8)
{
  int v8; // r10d
  _DWORD *v11; // rdx
  int v12; // r9d
  int v13; // ebp
  unsigned __int8 *v14; // rdx
  unsigned __int8 result; // al
  __int64 v16; // r14
  char *v17; // r9
  __int64 v18; // rdi
  char v19; // al
  char v20; // cl
  int v21; // r11d
  unsigned __int8 *v22; // r9
  __int64 v23; // r10
  int v24; // r11d
  unsigned __int8 *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r9
  char *v28; // r11
  __int64 v29; // r9
  int v30; // eax
  int v31; // ecx
  int v32; // r11d
  unsigned __int8 *v33; // rdi
  char *v34; // r15
  __int64 v35; // rsi
  int v36; // r11d
  unsigned __int8 *v37; // r9
  __int64 v38; // r10
  int v39; // r11d
  unsigned __int8 *v40; // r9
  __int64 v41; // r10

  v8 = a5;
  v11 = &unk_140148118;
  if ( a5 )
    v11 = &unk_140148100;
  v12 = a4 - a5 - 1;
  v13 = v11[a7];
  if ( dword_1402495F0 )
    v8 = v12;
  v14 = (unsigned __int8 *)(a1 + a2 * v8);
  if ( dword_1402495F0 )
    a2 = -a2;
  if ( !v13 )
    return (unsigned __int8)memcpy(a8, v14, a6 * a3);
  v16 = a2;
  if ( a6 > 0 )
  {
    v17 = (char *)v14;
    v18 = a6;
    do
    {
      switch ( v13 )
      {
        case 1:
        case 5:
        case 6:
          v19 = *v17;
          goto LABEL_18;
        case 2:
          v19 = *v17 - v17[-a2];
          goto LABEL_18;
        case 3:
          v19 = *v17 - ((unsigned __int8)v17[-a2] >> 1);
          goto LABEL_18;
        case 4:
          v20 = 0;
          if ( v17[-a2] )
            v20 = v17[-a2];
          v19 = *v17 - v20;
LABEL_18:
          v17[a8 - (char *)v14] = v19;
          break;
        default:
          break;
      }
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  result = v13 - 1;
  switch ( v13 )
  {
    case 1:
      v21 = a6 * a3;
      if ( a6 < (__int64)v21 )
      {
        v22 = &v14[a6];
        v23 = v21 - (__int64)a6;
        do
        {
          result = (_BYTE)v22 - a6;
          v22[a8 - (char *)v14] = *v22 - v22[-a6];
          ++v22;
          --v23;
        }
        while ( v23 );
      }
      break;
    case 2:
      v24 = a6 * a3;
      if ( a6 < (__int64)v24 )
      {
        v25 = &v14[a6];
        v26 = v24 - (__int64)a6;
        do
        {
          result = (_BYTE)v25 - a2;
          v25[a8 - (char *)v14] = *v25 - v25[-a2];
          ++v25;
          --v26;
        }
        while ( v26 );
      }
      break;
    case 3:
      v27 = a6 * a3;
      if ( a6 < v27 )
      {
        v28 = &a8[a6 - (_QWORD)v14];
        v29 = v27 - a6;
        do
        {
          v30 = *v14;
          v31 = (v14++)[a6 - (__int64)a2];
          result = v14[a6 - 1] - ((unsigned int)(v30 + v31) >> 1);
          v14[(_QWORD)v28 - 1] = result;
          --v29;
        }
        while ( v29 );
      }
      break;
    case 4:
      v32 = a6 * a3;
      if ( a6 < (__int64)v32 )
      {
        v33 = &v14[a6 - (__int64)a2];
        v34 = &a8[a2 - (_QWORD)v14];
        v35 = v32 - (__int64)a6;
        do
        {
          result = sub_1400E1160(v33[v16 - a6], *v33, v33[-a6]);
          v33[(_QWORD)v34] = v33[v16] - result;
          ++v33;
          --v35;
        }
        while ( v35 );
      }
      break;
    case 5:
      v36 = a6 * a3;
      if ( a6 < (__int64)v36 )
      {
        v37 = &v14[a6];
        v38 = v36 - (__int64)a6;
        do
        {
          result = *v37 - (v37[-a6] >> 1);
          (v37++)[a8 - (char *)v14] = result;
          --v38;
        }
        while ( v38 );
      }
      break;
    case 6:
      v39 = a6 * a3;
      if ( a6 < (__int64)v39 )
      {
        v40 = &v14[a6];
        v41 = v39 - (__int64)a6;
        do
        {
          result = (_BYTE)v40 - a6;
          v40[a8 - (char *)v14] = *v40 - v40[-a6];
          ++v40;
          --v41;
        }
        while ( v41 );
      }
      break;
    default:
      result = v13 - 1;
      break;
  }
  return result;
}

