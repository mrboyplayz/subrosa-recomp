/* Address: 0x14004c4e0 | Name: sub_14004C4E0 | Size: 1147 bytes */
__int64 __fastcall sub_14004C4E0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  char *v7; // rcx
  bool v8; // zf
  char v9; // al
  __int64 v10; // r8
  char *v11; // rdx
  char v12; // al
  char *v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rdx
  char *v18; // rcx
  char v19; // al
  __int64 v20; // r8
  char *v21; // rdx
  char v22; // al
  char *v23; // rcx
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rdx
  char *v28; // rcx
  char v29; // al
  __int64 v30; // r8
  char *v31; // rdx
  char v32; // al
  char *v33; // rcx
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // rsi
  char *v37; // rdx
  __int64 v38; // r8
  char v39; // al
  __int64 v40; // rcx
  char *v41; // rbx
  __int64 v42; // rcx
  char v43; // al
  __int64 v45; // [rsp+0h] [rbp-100h] BYREF
  int v46; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v50[512]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+240h] [rbp+140h]

  v4 = a1;
  v49 = a2;
  v47 = a3;
  v48 = a4;
  LOBYTE(dword_140404A6C[71807077]) = 0;
  if ( a2 )
  {
    v5 = 60LL * a1;
    unk_1404042D8(dword_140404A6C[v5 + 71737686], 1, &v49);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v7 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v7 == 0;
      while ( !v8 );
      v6 = 0;
      do
      {
        v9 = *((_BYTE *)&dword_140404A6C[71807077] + v6);
        v7[v6++] = v9;
      }
      while ( v9 );
    }
    unk_140404200(dword_140404A6C[v5 + 71737686], v6);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v11 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v11 == 0;
      while ( !v8 );
      v10 = 0;
      do
      {
        v12 = *((_BYTE *)&dword_140404A6C[71807077] + v10);
        v11[v10++] = v12;
      }
      while ( v12 );
    }
    unk_1404041F0(dword_140404A6C[v5 + 71737685], dword_140404A6C[v5 + 71737686], v10);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v13 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v13 == 0;
      while ( !v8 );
      v14 = 0;
      do
      {
        v15 = *((_BYTE *)&dword_140404A6C[71807077] + v14);
        v13[v14++] = v15;
      }
      while ( v15 );
    }
  }
  else if ( !a3 && !a4 )
  {
    return MEMORY[0x1401F8B20]((unsigned __int64)&v45 ^ v51);
  }
  if ( v47 )
  {
    v16 = 60 * v4;
    unk_1404042D8(dword_140404A6C[60 * v4 + 71737687], 1, &v47);
    unk_140404268(dword_140404A6C[60 * v4 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v18 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v18 == 0;
      while ( !v8 );
      v17 = 0;
      do
      {
        v19 = *((_BYTE *)&dword_140404A6C[71807077] + v17);
        v18[v17++] = v19;
      }
      while ( v19 );
    }
    unk_140404200(dword_140404A6C[v16 + 71737687], v17);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v21 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v21 == 0;
      while ( !v8 );
      v20 = 0;
      do
      {
        v22 = *((_BYTE *)&dword_140404A6C[71807077] + v20);
        v21[v20++] = v22;
      }
      while ( v22 );
    }
    unk_1404041F0(dword_140404A6C[v16 + 71737685], dword_140404A6C[v16 + 71737687], v20);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v23 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v23 == 0;
      while ( !v8 );
      v24 = 0;
      do
      {
        v25 = *((_BYTE *)&dword_140404A6C[71807077] + v24);
        v23[v24++] = v25;
      }
      while ( v25 );
    }
  }
  if ( v48 )
  {
    v26 = 60 * v4;
    unk_1404042D8(dword_140404A6C[60 * v4 + 71737688], 1, &v48);
    unk_140404268(dword_140404A6C[60 * v4 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v28 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v28 == 0;
      while ( !v8 );
      v27 = 0;
      do
      {
        v29 = *((_BYTE *)&dword_140404A6C[71807077] + v27);
        v28[v27++] = v29;
      }
      while ( v29 );
    }
    unk_140404200(dword_140404A6C[v26 + 71737688], v27);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v31 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v31 == 0;
      while ( !v8 );
      v30 = 0;
      do
      {
        v32 = *((_BYTE *)&dword_140404A6C[71807077] + v30);
        v31[v30++] = v32;
      }
      while ( v32 );
    }
    unk_1404041F0(dword_140404A6C[v26 + 71737685], dword_140404A6C[v26 + 71737688], v30);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v33 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v33 == 0;
      while ( !v8 );
      v34 = 0;
      do
      {
        v35 = *((_BYTE *)&dword_140404A6C[71807077] + v34);
        v33[v34++] = v35;
      }
      while ( v35 );
    }
  }
  v36 = 60 * v4;
  unk_1404042D0(dword_140404A6C[v36 + 71737685]);
  unk_140404268(dword_140404A6C[v36 + 71737685], 0x10000, &v46, &dword_140404A6C[71807077]);
  if ( v46 > 0 )
  {
    v37 = (char *)&dword_140404A6C[71741524] + 3;
    do
      v8 = *++v37 == 0;
    while ( !v8 );
    v38 = 0;
    do
    {
      v39 = *((_BYTE *)&dword_140404A6C[71807077] + v38);
      v37[v38++] = v39;
    }
    while ( v39 );
  }
  v40 = dword_140404A6C[v36 + 71737685];
  dword_140404A6C[v36 + 71737689] = 1;
  unk_140404380(v40, v37, v38);
  sub_140158AB0(v50, "\r\n\r\n");
  v41 = (char *)&dword_140404A6C[71741524] + 3;
  do
    v8 = *++v41 == 0;
  while ( !v8 );
  v42 = 0;
  do
  {
    v43 = v50[v42];
    v41[v42++] = v43;
  }
  while ( v43 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v45 ^ v51);
}

