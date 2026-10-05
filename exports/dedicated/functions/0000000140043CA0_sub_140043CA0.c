/* Address: 0x140043ca0 | Name: sub_140043CA0 | Size: 827 bytes */
void sub_140043CA0()
{
  int v0; // r8d
  _DWORD *v1; // r10
  int v2; // r9d
  int v3; // edi
  int v4; // r11d
  int v5; // ebx
  int v6; // ecx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  int *v15; // rcx
  __int64 v16; // rax
  int v17; // r9d
  int v18; // ebx
  int v19; // esi
  int v20; // edi
  int v21; // edx
  int *v22; // rcx
  _DWORD v23[8]; // [rsp+20h] [rbp-48h] BYREF

  v0 = dword_178C5B8E0;
  v1 = &unk_1915415E0;
  v2 = 0;
  v3 = 0;
  dword_163D94B74 = 0;
  dword_19154148C[0] = 0;
  v4 = 0;
  dword_191547050 = 0;
  dword_19154CC14 = 0;
  dword_163D94A48 = 0;
  do
  {
    v5 = *(v1 - 83);
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = v1;
      v8 = 16;
      do
      {
        if ( *(v7 - 1) )
        {
          if ( !*v7 && v0 < v7[16] )
          {
            ++v6;
            if ( (int)v7[2] >= 2 )
              ++v6;
          }
        }
        v7 += 279;
        --v8;
      }
      while ( v8 );
      if ( v6 < 1 )
        goto LABEL_20;
      if ( v0 == 216000 * (v0 / 216000) )
      {
        v9 = 0;
        v10 = v1;
        v11 = 16;
        do
        {
          if ( *(v10 - 1) )
          {
            if ( !*v10 && v0 < v10[16] )
            {
              ++v9;
              if ( (int)v10[2] >= 2 )
                ++v9;
            }
          }
          v10 += 279;
          --v11;
        }
        while ( v11 );
        if ( v9 < 2 )
        {
LABEL_20:
          dword_163D94A40[v3 + 3] = v4;
          v3 = dword_163D94A48 + 1;
          v2 = v5 + dword_163D94B74;
          ++dword_163D94A48;
          dword_163D94B74 += v5;
        }
      }
    }
    ++v4;
    v1 += 5873;
  }
  while ( v4 < 3 );
  if ( v3 > 0 )
    v2 /= v3;
  if ( v2 < 1 )
    v2 = 1;
  dword_163D94B74 = v2;
  if ( v3 )
  {
    if ( v3 > 1 )
    {
      v12 = 1024;
      do
      {
        v13 = rand() % dword_163D94A48;
        v14 = rand();
        v15 = &dword_163D94A40[v13];
        v16 = v14 % dword_163D94A48;
        v17 = dword_163D94A40[v16 + 3];
        dword_163D94A40[v16 + 3] = v15[3];
        v15[3] = v17;
        --v12;
      }
      while ( v12 );
      v3 = dword_163D94A48;
    }
    while ( 1 )
    {
      v18 = v3;
      if ( v3 > 0 )
        memcpy(v23, &dword_163D94A4C, 4LL * v3);
      v19 = 1;
      if ( v3 >= 2 && (rand() & 7u) < 6 )
      {
        v19 = 0;
        if ( (rand() & 1) == 0 && v3 > 3 )
          v18 = 3;
        if ( (rand() & 0xF) == 0 && v18 > 2 )
          break;
      }
      if ( v18 != 3 || (rand() & 3) != 0 )
      {
        if ( v19 == 1 )
        {
          if ( (rand() & 3u) < 2 && v18 > 3 )
            v18 = 3;
          if ( (rand() & 3) == 0 && v18 > 2 )
            v18 = 2;
          if ( (rand() & 3) == 0 && v18 > 1 )
            v18 = 1;
          sub_14003F280(1, v18, (__int64)v23);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      sub_14003F560(3, 3, v23);
LABEL_56:
      v20 = dword_163D94A48;
      ++dword_191536C14;
      v21 = 0;
      if ( dword_163D94A48 - v18 > 0 )
      {
        v22 = &dword_163D94A4C;
        do
        {
          ++v21;
          *v22 = v22[v18];
          ++v22;
          v20 = dword_163D94A48;
        }
        while ( v21 < dword_163D94A48 - v18 );
      }
      v3 = v20 - v18;
      dword_163D94A48 = v3;
      if ( v3 <= 0 )
        return;
    }
    v18 = 2;
LABEL_55:
    sub_14003FD20(0, v18, v23);
    goto LABEL_56;
  }
}

