/* Address: 0x14004b880 | Name: sub_14004B880 | Size: 983 bytes */
_DWORD *__fastcall sub_14004B880(signed int a1)
{
  _DWORD *result; // rax
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rsi
  int *v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  int *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  int *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = a1;
  if ( (unsigned int)a1 <= 0xFF )
  {
    v3 = 7166LL * a1;
    v4 = dword_1909419D0[v3];
    if ( (_DWORD)v4 != -1 && dword_16D67D63C[3597 * v4] == a1 )
      dword_16D67D63C[3597 * v4] = -1;
    v5 = 0;
    v6 = 0;
    v7 = &dword_190948498[v3];
    do
    {
      while ( *v7 > 0 )
        sub_140073BA0((unsigned int)dword_190948498[7166 * v2 + v6 + *v7], (unsigned int)v2, (unsigned int)v5);
      ++v5;
      v6 += 10;
      v7 += 10;
    }
    while ( v5 < 8 );
    v8 = dword_19094476C[7166 * v2];
    if ( v8 > 0 )
    {
      v9 = (unsigned int)v8;
      v10 = (int *)((char *)&unk_190944770 + v3 * 4);
      do
      {
        v11 = *v10;
        v10 += 3;
        *((_DWORD *)&unk_14B883320 + 61 * v11) = 0;
        --v9;
      }
      while ( v9 );
    }
    v12 = dword_190942F68[7166 * v2];
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = (int *)((char *)&unk_190942F6C + v3 * 4);
      do
      {
        v15 = *v14;
        v14 += 12;
        *((_DWORD *)&unk_14B883320 + 61 * v15) = 0;
        --v13;
      }
      while ( v13 );
    }
    v16 = dword_190941BE8[7166 * v2];
    if ( (unsigned int)v16 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v16) = 0;
    v17 = dword_190941D20[7166 * v2];
    if ( (unsigned int)v17 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v17) = 0;
    v18 = dword_190941E58[7166 * v2];
    if ( (unsigned int)v18 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v18) = 0;
    v19 = dword_190941F90[7166 * v2];
    if ( (unsigned int)v19 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v19) = 0;
    v20 = dword_1909420C8[7166 * v2];
    if ( (unsigned int)v20 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v20) = 0;
    v21 = dword_190942200[7166 * v2];
    if ( (unsigned int)v21 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v21) = 0;
    v22 = dword_190942338[7166 * v2];
    if ( (unsigned int)v22 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v22) = 0;
    v23 = dword_190942470[7166 * v2];
    if ( (unsigned int)v23 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v23) = 0;
    v24 = dword_1909425A8[7166 * v2];
    if ( (unsigned int)v24 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v24) = 0;
    v25 = dword_1909426E0[7166 * v2];
    if ( (unsigned int)v25 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v25) = 0;
    v26 = dword_190942818[7166 * v2];
    if ( (unsigned int)v26 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v26) = 0;
    v27 = dword_190942950[7166 * v2];
    if ( (unsigned int)v27 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v27) = 0;
    v28 = dword_190942A88[7166 * v2];
    if ( (unsigned int)v28 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v28) = 0;
    v29 = dword_190942BC0[7166 * v2];
    if ( (unsigned int)v29 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v29) = 0;
    v30 = dword_190942CF8[7166 * v2];
    if ( (unsigned int)v30 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v30) = 0;
    result = (_DWORD *)dword_190942E30[7166 * v2];
    if ( (unsigned int)result < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * (_QWORD)result) = 0;
    v31 = (unsigned int)dword_16D67C580;
    if ( dword_16D67C580 > 0 )
    {
      result = &unk_16D4FD584;
      do
      {
        if ( *result == (_DWORD)v2 )
          *result = -1;
        result += 383;
        --v31;
      }
      while ( v31 );
    }
    v32 = dword_163D75B60 == 0;
    dword_1909419C8[7166 * v2] = 0;
    if ( !v32 )
      ++dword_1910411A0[v2];
  }
  return result;
}

