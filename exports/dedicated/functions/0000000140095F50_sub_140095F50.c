/* Address: 0x140095f50 | Name: sub_140095F50 | Size: 473 bytes */
__int64 __fastcall sub_140095F50(int a1)
{
  int v1; // eax
  int v2; // r10d
  int v4; // r8d
  int v5; // r9d
  int *v6; // rcx
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  _DWORD *v22; // rcx
  __int64 result; // rax
  int v24; // r8d
  _DWORD *v25; // rcx

  v1 = dword_191546F00[0];
  v2 = 0;
  v4 = 0;
  if ( dword_191546F00[0] > 0 )
  {
    v5 = dword_191546F00[0];
    v6 = dword_191546F04;
    do
    {
      if ( *v6 == a1 )
      {
        dword_191546F00[0] = v5 - 1;
        *v6 = *((_DWORD *)&unk_191541180 + v5 + 5984);
        v1 = dword_191546F00[0];
      }
      else
      {
        ++v4;
        ++v6;
      }
      v5 = v1;
    }
    while ( v4 < v1 );
  }
  v7 = dword_19154CAC4;
  v8 = 0;
  if ( dword_19154CAC4 > 0 )
  {
    v9 = dword_19154CAC4;
    v10 = &unk_19154CAC8;
    do
    {
      if ( *v10 == a1 )
      {
        dword_19154CAC4 = v9 - 1;
        *v10 = *((_DWORD *)&unk_191541180 + v9 + 11857);
        v7 = dword_19154CAC4;
      }
      else
      {
        ++v8;
        ++v10;
      }
      v9 = v7;
    }
    while ( v8 < v7 );
  }
  v11 = dword_191552688;
  v12 = 0;
  if ( dword_191552688 > 0 )
  {
    v13 = dword_191552688;
    v14 = &unk_19155268C;
    do
    {
      if ( *v14 == a1 )
      {
        dword_191552688 = v13 - 1;
        *v14 = *((_DWORD *)&unk_191541180 + v13 + 17730);
        v11 = dword_191552688;
      }
      else
      {
        ++v12;
        ++v14;
      }
      v13 = v11;
    }
    while ( v12 < v11 );
  }
  v15 = dword_19155824C;
  v16 = 0;
  if ( dword_19155824C > 0 )
  {
    v17 = dword_19155824C;
    v18 = &unk_191558250;
    do
    {
      if ( *v18 == a1 )
      {
        dword_19155824C = v17 - 1;
        *v18 = *((_DWORD *)&unk_191541180 + v17 + 23603);
        v15 = dword_19155824C;
      }
      else
      {
        ++v16;
        ++v18;
      }
      v17 = v15;
    }
    while ( v16 < v15 );
  }
  v19 = dword_19155DE10;
  v20 = 0;
  if ( dword_19155DE10 > 0 )
  {
    v21 = dword_19155DE10;
    v22 = &unk_19155DE14;
    do
    {
      if ( *v22 == a1 )
      {
        dword_19155DE10 = v21 - 1;
        *v22 = *((_DWORD *)&unk_191541180 + v21 + 29476);
        v19 = dword_19155DE10;
      }
      else
      {
        ++v20;
        ++v22;
      }
      v21 = v19;
    }
    while ( v20 < v19 );
  }
  result = (unsigned int)dword_1915639D4;
  if ( dword_1915639D4 > 0 )
  {
    v24 = dword_1915639D4;
    v25 = &unk_1915639D8;
    do
    {
      if ( *v25 == a1 )
      {
        dword_1915639D4 = v24 - 1;
        *v25 = *((_DWORD *)&unk_191541180 + v24 + 35349);
        result = (unsigned int)dword_1915639D4;
      }
      else
      {
        ++v2;
        ++v25;
      }
      v24 = result;
    }
    while ( v2 < (int)result );
  }
  return result;
}

