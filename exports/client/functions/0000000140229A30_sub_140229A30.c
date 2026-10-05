/* Address: 0x140229a30 | Name: sub_140229A30 | Size: 656 bytes */
__int64 __fastcall sub_140229A30(__int16 *a1, _QWORD *a2, __int64 a3)
{
  __int16 v3; // r9
  __int16 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v8; // rax
  __int16 *v9; // rax
  __int16 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  __int16 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int16 *v20; // rax
  __int64 v21; // r9
  __int16 v22; // cx
  unsigned __int64 v23; // rax
  __int16 *v24; // rax
  __int16 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax

  v3 = *a1;
  v4 = *a1;
  v5 = 0;
  while ( v3 == *(_WORD *)((char *)&unk_140285898 + v5) || v3 == *(_WORD *)((char *)&unk_1402858A0 + v5) )
  {
    v8 = a2[2] + 1LL;
    a2[2] = v8;
    if ( a2[1] && v8 > a2[1] )
    {
      v3 = 0;
    }
    else
    {
      v9 = *(__int16 **)(*a2 + 16LL);
      if ( v9 == *(__int16 **)(*a2 + 8LL) || (v10 = *v9, *(_QWORD *)(*a2 + 16LL) = v9 + 1, v3 = v10, v10 == -1) )
        v3 = 0;
    }
    v5 += 2;
    *a1 = v3;
    v4 = v3;
    if ( v5 == 6 )
    {
      v11 = a2[1];
      v12 = a2[2] - 1LL;
      a2[2] = v12;
      if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
      {
        v13 = v12;
        v14 = v11;
        if ( v3 )
        {
          if ( v3 != -1 )
          {
            v15 = *(_QWORD *)(*a2 + 16LL);
            if ( v15 != *(_QWORD *)*a2 )
            {
              *(_QWORD *)(*a2 + 16LL) = v15 - 2;
              v13 = a2[2];
              v14 = a2[1];
            }
          }
        }
      }
      a2[2] = v13 + 1;
      if ( v14 && v13 + 1 > v14 )
      {
        v16 = 0;
      }
      else
      {
        v20 = *(__int16 **)(*a2 + 16LL);
        if ( v20 == *(__int16 **)(*a2 + 8LL) || (v16 = *v20, *(_QWORD *)(*a2 + 16LL) = v20 + 1, v16 == -1) )
          v16 = 0;
      }
      *a1 = v16;
      v21 = 0;
      v22 = v16;
      while ( v16 == *(_WORD *)((char *)&unk_1402858A8 + v21) || v16 == *(_WORD *)((char *)&unk_1402858B8 + v21) )
      {
        v23 = a2[2] + 1LL;
        a2[2] = v23;
        if ( a2[1] && v23 > a2[1] )
        {
          v22 = 0;
        }
        else
        {
          v24 = *(__int16 **)(*a2 + 16LL);
          if ( v24 == *(__int16 **)(*a2 + 8LL) || (v25 = *v24, *(_QWORD *)(*a2 + 16LL) = v24 + 1, v22 = v25, v25 == -1) )
            v22 = 0;
        }
        v21 += 2;
        *a1 = v22;
        v16 = v22;
        if ( v21 == 10 )
        {
          v26 = a2[2] - 1LL;
          a2[2] = v26;
          if ( (!a2[1] || v26 <= a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
          {
            v27 = *(_QWORD *)(*a2 + 16LL);
            if ( v27 != *(_QWORD *)*a2 )
              *(_QWORD *)(*a2 + 16LL) = v27 - 2;
          }
          return 3;
        }
      }
      v28 = a2[2] - 1LL;
      a2[2] = v28;
      if ( (!a2[1] || v28 <= a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
      {
        v29 = *(_QWORD *)(*a2 + 16LL);
        if ( v29 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = v29 - 2;
      }
      *a1 = 0;
      if ( v13 == a2[2] )
        return 3;
      goto LABEL_26;
    }
  }
  v17 = a2[2] - 1LL;
  a2[2] = v17;
  if ( (!a2[1] || v17 <= a2[1]) && (unsigned __int16)(v4 - 1) <= 0xFFFDu )
  {
    v18 = *(_QWORD *)(*a2 + 16LL);
    if ( v18 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v18 - 2;
  }
  *a1 = 0;
  if ( a3 != a2[2] )
LABEL_26:
    *(_BYTE *)a2[3] = 0;
  return 7;
}

