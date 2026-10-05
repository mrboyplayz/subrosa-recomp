/* Address: 0x14022a55c | Name: sub_14022A55C | Size: 916 bytes */
__int64 __fastcall sub_14022A55C(unsigned __int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int16 v4; // dx
  char v5; // di
  __int64 v6; // r9
  __int64 i; // r10
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // cx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int16 *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  bool v23; // cc
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  __int16 *v26; // rax
  unsigned __int16 v27; // cx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  unsigned __int16 v31; // dx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int16 v34; // r8
  unsigned __int64 v35; // rax
  __int16 *v36; // rax
  unsigned __int16 v37; // dx
  unsigned __int64 v38; // rax

  v4 = *a1;
  v5 = 0;
  LOWORD(v6) = *a1;
  for ( i = 0; i != 6; i += 2 )
  {
    if ( v4 != *(_WORD *)((char *)&unk_1402858C4 + i) && v4 != *(_WORD *)((char *)&unk_1402858CC + i) )
    {
      v16 = a2[2] - 1;
      a2[2] = v16;
      if ( (!a2[1] || v16 <= a2[1]) && (unsigned __int16)(v6 - 1) <= 0xFFFDu )
      {
        v17 = *(_QWORD *)(*a2 + 16);
        if ( v17 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16) = v17 - 2;
      }
      *a1 = 0;
      if ( a3 != a2[2] )
        *(_BYTE *)a2[3] = 0;
      return 7;
    }
    v9 = a2[2] + 1;
    a2[2] = v9;
    if ( a2[1] && v9 > a2[1] )
    {
      v4 = 0;
    }
    else
    {
      v10 = *(unsigned __int16 **)(*a2 + 16);
      if ( v10 == *(unsigned __int16 **)(*a2 + 8) || (v4 = *v10, *(_QWORD *)(*a2 + 16) = v10 + 1, v4 == 0xFFFF) )
        v4 = 0;
    }
    *a1 = v4;
    v6 = v4;
  }
  v11 = a2[1];
  v12 = a2[2] - 1;
  a2[2] = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v4 )
    {
      v6 = *(_QWORD *)(*a2 + 16);
      if ( v6 != *(_QWORD *)*a2 )
      {
        *(_QWORD *)(*a2 + 16) = v6 - 2;
        v13 = a2[2];
        v14 = a2[1];
      }
    }
  }
  a2[2] = v13 + 1;
  if ( v14 && v13 + 1 > v14 )
  {
    v15 = 0;
  }
  else
  {
    v19 = *(__int16 **)(*a2 + 16);
    if ( v19 == *(__int16 **)(*a2 + 8) || (v15 = *v19, *(_QWORD *)(*a2 + 16) = v19 + 1, v15 == 0xFFFF) )
      v15 = 0;
  }
  *a1 = v15;
  v20 = a2[2];
  v21 = a2[1];
  if ( v15 != 40 )
  {
    v22 = v20 - 1;
    a2[2] = v22;
    if ( v21 )
    {
      v23 = v22 <= v21;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  a2[2] = v20 + 1;
  if ( v21 && v20 + 1 > v21 )
  {
    v25 = 0;
  }
  else
  {
    v26 = *(__int16 **)(*a2 + 16);
    if ( v26 == *(__int16 **)(*a2 + 8) || (v25 = *v26, *(_QWORD *)(*a2 + 16) = v26 + 1, v25 == 0xFFFF) )
      v25 = 0;
  }
  *a1 = v25;
  if ( (unsigned __int8)sub_14022ACE8(a1, a2, v11, v6) )
  {
    v27 = *a1;
    v28 = a2[2] - 1;
    a2[2] = v28;
    if ( (!a2[1] || v28 <= a2[1]) && (unsigned __int16)(v27 - 1) <= 0xFFFDu )
    {
      v29 = *(_QWORD *)(*a2 + 16);
      if ( v29 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16) = v29 - 2;
    }
    return 5;
  }
  else
  {
    v30 = sub_14022AAA4(a1, a2);
    v31 = *a1;
    if ( !v30 )
    {
      v15 = *a1;
      if ( v31 == 41 )
        return 4;
      v34 = *a1;
      while ( v34
           && ((unsigned int)v34 - 48 <= 9
            || (unsigned int)v34 - 97 <= 0x19
            || (unsigned int)v34 - 65 <= 0x19
            || v34 == 95) )
      {
        v35 = a2[2] + 1;
        a2[2] = v35;
        if ( a2[1] && v35 > a2[1] )
        {
          v15 = 0;
        }
        else
        {
          v36 = *(__int16 **)(*a2 + 16);
          if ( v36 == *(__int16 **)(*a2 + 8) || (v37 = *v36, *(_QWORD *)(*a2 + 16) = v36 + 1, v15 = v37, v37 == 0xFFFF) )
            v15 = 0;
        }
        *a1 = v15;
        v34 = v15;
        if ( v15 == 41 )
          return 4;
      }
      v38 = a2[2] - 1;
      a2[2] = v38;
      if ( !a2[1] )
        goto LABEL_34;
      v23 = v38 <= a2[1];
LABEL_33:
      if ( v23 )
      {
LABEL_34:
        if ( (unsigned __int16)(v15 - 1) <= 0xFFFDu )
        {
          v24 = *(_QWORD *)(*a2 + 16);
          if ( v24 != *(_QWORD *)*a2 )
            *(_QWORD *)(*a2 + 16) = v24 - 2;
        }
      }
      *a1 = 0;
      if ( v13 == a2[2] )
        v5 = 1;
      else
        *(_BYTE *)a2[3] = 0;
      return v5 != 0 ? 4 : 7;
    }
    v32 = a2[2] - 1;
    a2[2] = v32;
    if ( (!a2[1] || v32 <= a2[1]) && (unsigned __int16)(v31 - 1) <= 0xFFFDu )
    {
      v33 = *(_QWORD *)(*a2 + 16);
      if ( v33 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16) = v33 - 2;
    }
    return 6;
  }
}

