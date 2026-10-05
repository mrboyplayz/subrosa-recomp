/* Address: 0x14005f520 | Name: sub_14005F520 | Size: 1131 bytes */
int __fastcall sub_14005F520(int a1)
{
  int v1; // r11d
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  _DWORD *v6; // rdi
  int v7; // ecx
  int v8; // eax
  int v9; // r8d
  _DWORD *v10; // rsi
  int v11; // r9d
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  float v20; // xmm1_4
  float v21; // xmm2_4
  int v22; // xmm3_4

  v1 = dword_19154118C;
  v2 = a1;
  if ( dword_19154118C == 6 && *((int *)&unk_190948718 + 7166 * a1) < 50 )
    dword_190941A04[7166 * a1] = 0;
  v3 = 28664LL * a1;
  v4 = a1;
  v5 = dword_1909419D0[v3 / 4];
  if ( (_DWORD)v5 != -1 && *((_DWORD *)&unk_16D6802B8 + 3597 * v5) && *(int *)((char *)&unk_190948718 + v3) < 50 )
    dword_190941A04[v3 / 4] = 0;
  if ( *(_DWORD *)&algn_190941A08[v3] )
  {
    LODWORD(v5) = *(_DWORD *)&algn_190941A08[v3 + 4];
    if ( (int)v5 > 0 )
    {
      LODWORD(v5) = v5 - 1;
      *(_DWORD *)&algn_190941A08[v3 + 4] = v5;
    }
    v6 = (_DWORD *)((char *)&unk_190948718 + v3);
    v7 = *(_DWORD *)((char *)&unk_190948718 + v3);
    if ( v7 < 50 )
      *(_DWORD *)&algn_190941A08[v3 + 4] = 1800;
  }
  else
  {
    v6 = (_DWORD *)((char *)&unk_190948718 + v3);
    v7 = *(_DWORD *)((char *)&unk_190948718 + v3);
    if ( v7 < 75 )
    {
      LODWORD(v5) = 2 * (75 - v7);
      if ( (int)v5 > 60 )
        LODWORD(v5) = 60;
      if ( *(_DWORD *)((char *)&unk_190941A40 + v3) < (int)v5 )
        *(_DWORD *)((char *)&unk_190941A40 + v3) = v5;
    }
  }
  if ( dword_190941A04[v3 / 4] > 0 )
  {
    if ( v7 < 0 )
      *v6 = 0;
    v8 = dword_190948724[7166 * v2];
    if ( v8 < 0 )
    {
      v8 = 0;
      dword_190948724[7166 * v4] = 0;
    }
    if ( dword_19094872C[7166 * v4] < 0 )
      dword_19094872C[7166 * v4] = 0;
    if ( dword_190948734[7166 * v4] < 0 )
      dword_190948734[7166 * v4] = 0;
    if ( dword_19094873C[7166 * v4] < 0 )
      dword_19094873C[7166 * v4] = 0;
    if ( dword_190948744[7166 * v4] < 0 )
      dword_190948744[7166 * v4] = 0;
    if ( dword_19094874C[7166 * v4] < 0 )
      dword_19094874C[7166 * v4] = 0;
    v9 = *(_DWORD *)&algn_190941A08[v3];
    if ( v9 )
      goto LABEL_41;
    if ( v8 <= 0 )
      dword_190941A04[v3 / 4] = 0;
    if ( dword_19094872C[7166 * v4] > 0 )
    {
LABEL_41:
      v10 = (_DWORD *)((char *)&unk_190948720 + v3);
      LODWORD(v5) = 63;
      v11 = *(_DWORD *)((char *)&unk_190948720 + v3);
      if ( !v11 )
        LODWORD(v5) = 31;
      if ( v9 )
        LODWORD(v5) = 7;
    }
    else
    {
      dword_190941A04[v3 / 4] = 0;
      v10 = (_DWORD *)((char *)&unk_190948720 + v3);
      LODWORD(v5) = 63;
      v11 = *(_DWORD *)((char *)&unk_190948720 + v3);
      if ( !v11 )
        LODWORD(v5) = 31;
    }
    v12 = dword_191541414;
    if ( (dword_191541414 & (unsigned int)v5) == 0 )
    {
      LODWORD(v5) = *v6;
      if ( (int)*v6 < 100 )
      {
        LODWORD(v5) = v5 + 1;
        *v6 = v5;
      }
    }
    if ( !v11 || v9 )
    {
      if ( !(_BYTE)v12 )
      {
        v13 = *(_DWORD *)((char *)&unk_19094871C + v3);
        if ( v13 < 100 )
          *(_DWORD *)((char *)&unk_19094871C + v3) = v13 + 1;
      }
      LODWORD(v5) = 15;
      if ( !v9 )
        LODWORD(v5) = 63;
      if ( ((unsigned int)v5 & v12) == 0 )
      {
        v14 = dword_190948724[7166 * v2];
        if ( v14 < 100 )
          dword_190948724[7166 * v2] = v14 + 1;
        v15 = dword_19094872C[7166 * v2];
        if ( v15 < 100 )
          dword_19094872C[7166 * v2] = v15 + 1;
        v16 = dword_190948734[7166 * v2];
        if ( v16 < 100 )
          dword_190948734[7166 * v2] = v16 + 1;
        v17 = dword_19094873C[7166 * v2];
        if ( v17 < 100 )
          dword_19094873C[7166 * v2] = v17 + 1;
        v18 = dword_190948744[7166 * v2];
        if ( v18 < 100 )
          dword_190948744[7166 * v2] = v18 + 1;
        LODWORD(v5) = dword_19094874C[7166 * v2];
        if ( (int)v5 < 100 )
        {
          LODWORD(v5) = v5 + 1;
          dword_19094874C[7166 * v2] = v5;
        }
      }
    }
    if ( *v10 )
    {
      if ( v1 == 6 )
      {
        LODWORD(v5) = rand();
        v12 = dword_191541414;
        if ( (v5 & 0x1FF) == 0 )
          *v10 = 0;
      }
      v19 = *(_DWORD *)((char *)&unk_19094871C + v3);
      if ( v19 < 20 )
      {
        LODWORD(v5) = 2 * v19 + 10;
        if ( *v6 > (int)v5 )
          *v6 = v5;
      }
      if ( v19 > 0 )
      {
        LODWORD(v5) = v12 ^ (v2 * v2 * v2);
        if ( (unsigned __int8)v12 == (unsigned __int8)(v2 * v2 * v2) )
        {
          if ( !*(_DWORD *)&algn_190941A08[v3] )
          {
            LODWORD(v5) = v19 - 3;
            *(_DWORD *)((char *)&unk_19094871C + v3) = v19 - 3;
          }
          v20 = (float)(*(float *)&qword_140146A28 * 0.5) + *(float *)&algn_190941D24[v3];
          v21 = (float)(*((float *)&qword_140146A28 + 1) * 0.5) + *(float *)((char *)&unk_190941D28 + v3);
          *(float *)&v22 = (float)(*(float *)&dword_140146A30 * 0.5) + *(float *)((char *)&unk_190941D2C + v3);
          if ( dword_163D75B60 )
          {
            v5 = (__int64)dword_196199564++ << 7;
            HIWORD(dword_196199564) = 0;
            *(_DWORD *)((char *)&unk_195999560 + v5) = 1;
            *(_DWORD *)((char *)&unk_195999564 + v5) = v12;
            *(float *)((char *)&qword_195999568 + v5) = v20;
            *(float *)((char *)&qword_195999568 + v5 + 4) = v21;
            *(int *)((char *)&dword_195999570 + v5) = v22;
            *(float *)((char *)&qword_195999574 + v5) = v20;
            *(float *)((char *)&qword_195999574 + v5 + 4) = v21;
            *(int *)((char *)&dword_19599957C + v5) = v22;
            *(int *)((char *)&dword_195999580 + v5) = 0;
            *(int *)((char *)&dword_195999584 + v5) = 3;
          }
        }
      }
    }
    if ( !*(_DWORD *)&algn_190941A08[v3] && *(int *)((char *)&unk_19094871C + v3) <= 10 )
      dword_190941A04[v3 / 4] = 0;
  }
  else
  {
    *(_DWORD *)((char *)&unk_190948720 + v3) = 0;
    *v6 = 0;
  }
  return v5;
}

