/* Address: 0x140075a40 | Name: sub_140075A40 | Size: 1249 bytes */
__int64 __fastcall sub_140075A40(int a1, float a2, double a3)
{
  unsigned int v3; // ebp
  double v4; // xmm6_8
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rcx
  unsigned int *v10; // rdx
  char v11; // al
  unsigned __int64 v12; // rsi
  signed int v13; // r8d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // edi
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // edi
  unsigned __int64 v21; // rcx
  signed int v22; // edx
  int v23; // r8d
  _BYTE *v24; // r9
  char *v25; // rdx
  char v26; // cl
  unsigned int v27; // r8d
  char *v28; // rdx
  char v29; // cl
  __int64 v30; // rdi
  unsigned int v31; // eax
  float *v32; // rcx
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 result; // rax
  signed int *v36; // rax
  signed int v37; // ecx
  signed int v38; // ecx
  _BYTE *v39; // rcx
  char v40; // al

  v3 = 0;
  v4 = a3;
  v5 = a1;
  dword_140404A6C[70318064] = 1;
  if ( dword_140404A6C[70087108] == a1 )
  {
    if ( dword_140404A6C[70317817] )
    {
      if ( dword_140404A6C[70317856] )
      {
        v16 = dword_140404A6C[70318065];
      }
      else
      {
        v16 = sub_140074C50(a1, a2);
        dword_140404A6C[70318065] = v16;
      }
      v17 = sub_140074C50(v5, a2);
      dword_140404A6C[70318066] = v17;
    }
    else
    {
      v17 = dword_140404A6C[70318066];
      v16 = dword_140404A6C[70318065];
    }
    v7 = &dword_140404A6C[70318069];
    if ( v16 < 0 )
      v16 = 0;
    v18 = -1;
    dword_140404A6C[70318065] = v16;
    do
      ++v18;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v18) );
    if ( v16 > v18 )
      v16 = v18;
    dword_140404A6C[70318065] = v16;
    v19 = -1;
    if ( v17 < 0 )
      v17 = 0;
    dword_140404A6C[70318066] = v17;
    do
      ++v19;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v19) );
    if ( v17 > v19 )
      v17 = v19;
    dword_140404A6C[70318066] = v17;
    v20 = sub_140075FE0((unsigned int)v5, 255);
    if ( v20 != -1 )
    {
      while ( v20 != 11 && v20 != 1 )
      {
        if ( v20 < 32 )
        {
          if ( v20 == 9 )
          {
            if ( !(unsigned int)sub_1400722C0() )
            {
              v25 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
              if ( *v25 )
              {
                do
                {
                  v26 = v25[1];
                  *v25++ = v26;
                }
                while ( v26 );
              }
            }
          }
          else if ( v20 == 10 && !(unsigned int)sub_1400722C0() )
          {
            v27 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] > 0 )
            {
              v28 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
              if ( *v28 )
              {
                do
                {
                  v29 = v28[1];
                  *v28++ = v29;
                }
                while ( v29 );
                v27 = dword_140404A6C[70318066];
              }
              dword_140404A6C[70318066] = v27 - 1;
              dword_140404A6C[70318065] = v27 - 1;
            }
          }
        }
        else
        {
          sub_1400722C0();
          v21 = -1;
          do
            ++v21;
          while ( *((_BYTE *)&dword_140404A6C[70318069] + v21) );
          if ( v21 < (int)dword_140404A6C[70318068] )
          {
            v22 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] < 0x2000 )
            {
              if ( dword_140404A6C[70318067] )
              {
                if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
                {
                  *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
                  v22 = dword_140404A6C[70318066];
                }
              }
              else
              {
                v23 = v21 + 1;
                if ( (int)v21 + 1 > (int)dword_140404A6C[70318066] )
                {
                  v24 = (char *)&dword_140404A6C[70318069] + v23;
                  do
                  {
                    --v23;
                    *v24 = *(v24 - 1);
                    --v24;
                    v22 = dword_140404A6C[70318066];
                  }
                  while ( v23 > (int)dword_140404A6C[70318066] );
                }
              }
              *((_BYTE *)&dword_140404A6C[70318069] + v22) = v20;
              dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
            }
          }
        }
        v20 = sub_140075FE0((unsigned int)v5, 255);
        if ( v20 == -1 )
          goto LABEL_75;
      }
      dword_140404A6C[70087106] = -1;
      v3 = 1;
      if ( v20 != 11 )
        v3 = -1;
    }
  }
  else
  {
    v6 = 122LL * a1;
    v7 = &dword_140404A6C[70318069];
    v8 = dword_140404A6C[122 * v5 + 70087115];
    if ( v8 == 4 )
    {
      a3 = **(float **)&dword_140404A6C[v6 + 70087217];
      sub_140158AB0(&dword_140404A6C[70318069], "%.3f", a3);
    }
    else if ( v8 == 5 )
    {
      sub_140158AB0(&dword_140404A6C[70318069], "%d", **(_DWORD **)&dword_140404A6C[v6 + 70087217]);
    }
    else
    {
      v9 = *(char **)&dword_140404A6C[v6 + 70087215];
      v10 = &dword_140404A6C[70318069];
      do
      {
        v11 = *v9++;
        *(_BYTE *)v10 = v11;
        v10 = (unsigned int *)((char *)v10 + 1);
      }
      while ( v11 );
    }
    v12 = -1;
    if ( !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    {
      v13 = 0;
      dword_140404A6C[70318065] = 0;
      v14 = -1;
      do
        ++v14;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v14) );
      dword_140404A6C[70318066] = v14;
    }
    else
    {
      a3 = v4;
      dword_140404A6C[70318065] = sub_140074C50(v5, a2);
      v13 = dword_140404A6C[70318065];
      dword_140404A6C[70318066] = dword_140404A6C[70318065];
      LODWORD(v14) = dword_140404A6C[70318065];
      if ( (dword_140404A6C[70318065] & 0x80000000) != 0 )
      {
        v13 = 0;
        dword_140404A6C[70318065] = 0;
      }
    }
    v15 = -1;
    do
      ++v15;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v15) );
    if ( v13 > v15 )
      v13 = v15;
    dword_140404A6C[70318065] = v13;
    if ( (int)v14 < 0 )
      LODWORD(v14) = 0;
    dword_140404A6C[70318066] = v14;
    do
      ++v12;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    if ( (int)v14 > v12 )
      dword_140404A6C[70318066] = v12;
  }
LABEL_75:
  v30 = 122 * v5;
  v31 = dword_140404A6C[122 * v5 + 70087115];
  if ( v31 == 4 )
  {
    sub_14015B070(&dword_140404A6C[70318069], "%f", a3);
    v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    v33 = *(float *)&dword_140404A6C[v30 + 70087219];
    if ( v33 > *v32 )
    {
      *v32 = v33;
      v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    }
    v34 = *(float *)&dword_140404A6C[v30 + 70087220];
    result = v3;
    if ( v34 < *v32 )
      *v32 = v34;
  }
  else
  {
    if ( v31 == 5 )
    {
      sub_14015B070(&dword_140404A6C[70318069], "%d", *(_QWORD *)&dword_140404A6C[v30 + 70087217]);
      v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      v37 = dword_140404A6C[v30 + 70087219];
      if ( *v36 < v37 )
      {
        *v36 = v37;
        v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      }
      v38 = dword_140404A6C[v30 + 70087220];
      if ( *v36 > v38 )
      {
        *v36 = v38;
        return v3;
      }
    }
    else
    {
      v39 = *(_BYTE **)&dword_140404A6C[v30 + 70087215];
      do
      {
        v40 = *(_BYTE *)v7;
        v7 = (unsigned int *)((char *)v7 + 1);
        *v39++ = v40;
      }
      while ( v40 );
    }
    return v3;
  }
  return result;
}

