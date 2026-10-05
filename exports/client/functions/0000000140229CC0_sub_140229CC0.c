/* Address: 0x140229cc0 | Name: sub_140229CC0 | Size: 666 bytes */
__int64 __fastcall sub_140229CC0(char *a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // dl
  __int64 i; // rdi
  unsigned __int64 v7; // rax
  bool v8; // zf
  FILE **v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // r10d
  FILE **v16; // rdx
  unsigned __int64 v17; // rcx
  FILE **v18; // rdi
  int v19; // eax
  unsigned __int64 v21; // rax
  FILE **v22; // rdi
  int v23; // eax
  char v24; // cl
  unsigned __int64 v25; // rax
  FILE **v26; // rdx
  char v27; // al
  int v28; // ecx
  unsigned __int64 v29; // rax
  FILE **v30; // rdx
  unsigned __int64 v31; // rax
  FILE **v32; // rdi
  _QWORD v33[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp+18h] BYREF

  v34 = a3;
  v33[0] = a2;
  v33[2] = &v34;
  v4 = *a1;
  v33[1] = a1;
  for ( i = 0; i != 3; ++i )
  {
    if ( v4 != byte_140285934[i + 24] && v4 != byte_140285934[i + 28] )
    {
      sub_14022EB44(v33);
      return 7;
    }
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v7;
    if ( !v8 && v7 > *(_QWORD *)(a2 + 8) || (v9 = *(FILE ***)a2, v10 = getc_nolock(**(FILE ***)a2), v4 = v10, v10 == -1) )
      v4 = 0;
    else
      v9[1] = (FILE *)((char *)v9[1] + 1);
    *a1 = v4;
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v4 )
    {
      if ( v4 != -1 )
      {
        v15 = v4;
        v16 = *(FILE ***)a2;
        if ( v15 != -1 )
        {
          v16[1] = (FILE *)((char *)v16[1] - 1);
          sub_14020CE90(v15, (__int64)*v16);
          v13 = *(_QWORD *)(a2 + 16);
          v14 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  v34 = v13;
  v17 = v13 + 1;
  *(_QWORD *)(a2 + 16) = v17;
  if ( v14 && v17 > v14 || (v18 = *(FILE ***)a2, v19 = getc_nolock(**(FILE ***)a2), v19 == -1) )
    LOBYTE(v19) = 0;
  else
    v18[1] = (FILE *)((char *)v18[1] + 1);
  *a1 = v19;
  if ( (_BYTE)v19 != 40 )
    return (unsigned __int8)sub_14022EB44(v33) != 0 ? 4 : 7;
  v21 = *(_QWORD *)(a2 + 16) + 1LL;
  v8 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v21;
  if ( !v8 && v21 > *(_QWORD *)(a2 + 8) || (v22 = *(FILE ***)a2, v23 = getc_nolock(**(FILE ***)a2), v23 == -1) )
    LOBYTE(v23) = 0;
  else
    v22[1] = (FILE *)((char *)v22[1] + 1);
  *a1 = v23;
  if ( (unsigned __int8)sub_14022AB34(a1, a2) )
  {
    v24 = *a1;
    v25 = *(_QWORD *)(a2 + 16) - 1LL;
    v8 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v25;
    if ( (v8 || v25 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v24 + 1) > 1u )
    {
      v26 = *(FILE ***)a2;
      if ( v24 != -1 )
      {
        v26[1] = (FILE *)((char *)v26[1] - 1);
        sub_14020CE90(v24, (__int64)*v26);
      }
    }
    return 5;
  }
  else
  {
    v27 = sub_14022A8F0(a1, a2);
    LOBYTE(v28) = *a1;
    if ( v27 )
    {
      v29 = *(_QWORD *)(a2 + 16) - 1LL;
      v8 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v29;
      if ( (v8 || v29 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v28 + 1) > 1u )
      {
        v30 = *(FILE ***)a2;
        if ( (char)v28 != -1 )
        {
          v30[1] = (FILE *)((char *)v30[1] - 1);
          sub_14020CE90((char)v28, (__int64)*v30);
        }
      }
      return 6;
    }
    else
    {
      while ( (_BYTE)v28 != 41 )
      {
        if ( !(_BYTE)v28
          || (unsigned __int8)(v28 - 48) > 9u
          && (unsigned __int8)(v28 - 97) > 0x19u
          && (unsigned __int8)(v28 - 65) > 0x19u
          && (_BYTE)v28 != 95 )
        {
          return (unsigned __int8)sub_14022EB44(v33) != 0 ? 4 : 7;
        }
        v31 = *(_QWORD *)(a2 + 16) + 1LL;
        v8 = *(_QWORD *)(a2 + 8) == 0;
        *(_QWORD *)(a2 + 16) = v31;
        if ( !v8 && v31 > *(_QWORD *)(a2 + 8) || (v32 = *(FILE ***)a2, v28 = getc_nolock(**(FILE ***)a2), v28 == -1) )
          LOBYTE(v28) = 0;
        else
          v32[1] = (FILE *)((char *)v32[1] + 1);
        *a1 = v28;
      }
      return 4;
    }
  }
}

