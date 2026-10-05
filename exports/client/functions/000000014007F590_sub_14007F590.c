/* Address: 0x14007f590 | Name: sub_14007F590 | Size: 983 bytes */
unsigned int *__fastcall sub_14007F590(signed int a1)
{
  unsigned int *result; // rax
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rsi
  int *v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  unsigned int *v14; // rdx
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

  result = (unsigned int *)&retaddr;
  v2 = a1;
  if ( (unsigned int)a1 <= 0xFF )
  {
    v3 = 7166LL * a1;
    v4 = (int)dword_140404A6C[v3 + 280651305];
    if ( (_DWORD)v4 != -1 && dword_140404A6C[3597 * v4 + 71856292] == a1 )
      dword_140404A6C[3597 * v4 + 71856292] = -1;
    v5 = 0;
    v6 = 0;
    v7 = (int *)&dword_140404A6C[v3 + 280658139];
    do
    {
      while ( *v7 > 0 )
        sub_1400CA7C0(dword_140404A6C[7166 * v2 + 280658139 + v6 + *v7], (unsigned int)v2, (unsigned int)v5);
      ++v5;
      v6 += 10;
      v7 += 10;
    }
    while ( v5 < 8 );
    v8 = dword_140404A6C[7166 * v2 + 280654224];
    if ( v8 > 0 )
    {
      v9 = (unsigned int)v8;
      v10 = &dword_140404A6C[v3 + 280654225];
      do
      {
        v11 = (int)*v10;
        v10 += 3;
        dword_140404A6C[61 * v11 + 486149253] = 0;
        --v9;
      }
      while ( v9 );
    }
    v12 = dword_140404A6C[7166 * v2 + 280652687];
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = &dword_140404A6C[v3 + 280652688];
      do
      {
        v15 = (int)*v14;
        v14 += 12;
        dword_140404A6C[61 * v15 + 486149253] = 0;
        --v13;
      }
      while ( v13 );
    }
    v16 = (int)dword_140404A6C[7166 * v2 + 280651439];
    if ( (unsigned int)v16 < 0x2000 )
      dword_140404A6C[47 * v16 + 18215709] = 0;
    v17 = (int)dword_140404A6C[7166 * v2 + 280651517];
    if ( (unsigned int)v17 < 0x2000 )
      dword_140404A6C[47 * v17 + 18215709] = 0;
    v18 = (int)dword_140404A6C[7166 * v2 + 280651595];
    if ( (unsigned int)v18 < 0x2000 )
      dword_140404A6C[47 * v18 + 18215709] = 0;
    v19 = (int)dword_140404A6C[7166 * v2 + 280651673];
    if ( (unsigned int)v19 < 0x2000 )
      dword_140404A6C[47 * v19 + 18215709] = 0;
    v20 = (int)dword_140404A6C[7166 * v2 + 280651751];
    if ( (unsigned int)v20 < 0x2000 )
      dword_140404A6C[47 * v20 + 18215709] = 0;
    v21 = (int)dword_140404A6C[7166 * v2 + 280651829];
    if ( (unsigned int)v21 < 0x2000 )
      dword_140404A6C[47 * v21 + 18215709] = 0;
    v22 = (int)dword_140404A6C[7166 * v2 + 280651907];
    if ( (unsigned int)v22 < 0x2000 )
      dword_140404A6C[47 * v22 + 18215709] = 0;
    v23 = (int)dword_140404A6C[7166 * v2 + 280651985];
    if ( (unsigned int)v23 < 0x2000 )
      dword_140404A6C[47 * v23 + 18215709] = 0;
    v24 = (int)dword_140404A6C[7166 * v2 + 280652063];
    if ( (unsigned int)v24 < 0x2000 )
      dword_140404A6C[47 * v24 + 18215709] = 0;
    v25 = (int)dword_140404A6C[7166 * v2 + 280652141];
    if ( (unsigned int)v25 < 0x2000 )
      dword_140404A6C[47 * v25 + 18215709] = 0;
    v26 = (int)dword_140404A6C[7166 * v2 + 280652219];
    if ( (unsigned int)v26 < 0x2000 )
      dword_140404A6C[47 * v26 + 18215709] = 0;
    v27 = (int)dword_140404A6C[7166 * v2 + 280652297];
    if ( (unsigned int)v27 < 0x2000 )
      dword_140404A6C[47 * v27 + 18215709] = 0;
    v28 = (int)dword_140404A6C[7166 * v2 + 280652375];
    if ( (unsigned int)v28 < 0x2000 )
      dword_140404A6C[47 * v28 + 18215709] = 0;
    v29 = (int)dword_140404A6C[7166 * v2 + 280652453];
    if ( (unsigned int)v29 < 0x2000 )
      dword_140404A6C[47 * v29 + 18215709] = 0;
    v30 = (int)dword_140404A6C[7166 * v2 + 280652531];
    if ( (unsigned int)v30 < 0x2000 )
      dword_140404A6C[47 * v30 + 18215709] = 0;
    result = (unsigned int *)(int)dword_140404A6C[7166 * v2 + 280652609];
    if ( (unsigned int)result < 0x2000 )
      dword_140404A6C[47 * (_QWORD)result + 18215709] = 0;
    v31 = dword_140404A6C[132792829];
    if ( (int)dword_140404A6C[132792829] > 0 )
    {
      result = &dword_140404A6C[132400638];
      do
      {
        if ( *result == (_DWORD)v2 )
          *result = -1;
        result += 383;
        --v31;
      }
      while ( v31 );
    }
    v32 = dword_140404A6C[456202453] == 0;
    dword_140404A6C[7166 * v2 + 280651303] = 0;
    if ( !v32 )
      ++dword_140404A6C[v2 + 282485789];
  }
  return result;
}

