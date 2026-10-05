/* Address: 0x140073ba0 | Name: sub_140073BA0 | Size: 493 bytes */
void __fastcall sub_140073BA0(int a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // r8d
  __int64 v15; // r11
  int v16; // edx
  __int64 v17; // rax
  int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // rsi
  int *v21; // rcx

  v3 = a1;
  v4 = a3;
  if ( a1 != -1 && a2 != -1 )
  {
    v5 = 7040LL * a1;
    v6 = a2;
    if ( *(int *)((char *)&unk_19025F0EC + v5) >= 2 )
    {
      v7 = *((float *)&unk_190941E64 + 7166 * a2);
      v8 = *((float *)&unk_190941E5C + 7166 * a2) - (float)(*((float *)&unk_190941E98 + 7166 * a2) * 0.25);
      v9 = *((float *)&unk_190941E60 + 7166 * a2) - (float)(*((float *)&xmmword_190941E9C + 7166 * a2) * 0.25);
      *(float *)&dword_19025F11C[v5 / 4] = v8;
      v10 = *((float *)&xmmword_190941E9C + 7166 * a2 + 1) * 0.25;
      *(float *)&dword_19025F120[v5 / 4] = v9;
      v11 = v7 - v10;
      *(float *)&dword_19025F124[v5 / 4] = v11;
      v12 = 188LL * dword_19025F118[v5 / 4];
      *(float *)((char *)&unk_140249618 + v12) = v8;
      *(float *)((char *)&unk_140249618 + v12 + 4) = v9;
      *(float *)((char *)&unk_140249618 + v12 + 8) = v11;
    }
    v13 = a3;
    v14 = 0;
    *(_DWORD *)((char *)&unk_19025F128 + v5) = *((_DWORD *)&unk_190941E5C + 7166 * a2);
    *(_DWORD *)((char *)&unk_19025F12C + v5) = *((_DWORD *)&unk_190941E60 + 7166 * a2);
    *(_DWORD *)((char *)&unk_19025F130 + v5) = *((_DWORD *)&unk_190941E64 + 7166 * a2);
    v15 = 28664LL * a2 + 40 * v4;
    v16 = *(int *)((char *)dword_190948498 + v15);
    if ( v16 > 0 )
    {
      v17 = 5 * v13;
      v18 = dword_163D75B60;
      v19 = 10 * v13;
      v20 = 7166 * v6;
      v21 = &dword_19094849C[2 * v17 + v20];
      do
      {
        if ( *v21 == (_DWORD)v3 )
        {
          *(_DWORD *)((char *)&unk_19025F0E4 + v5) = -1;
          *(int *)((char *)dword_190948498 + v15) = v16 - 1;
          *v21 = dword_190948498[v20 + v19 + v16];
          if ( v18 )
          {
            if ( (unsigned int)v3 <= 0x3FF )
              ++dword_19093F0C0[v3];
          }
        }
        else
        {
          ++v14;
          ++v21;
        }
        v16 = *(int *)((char *)dword_190948498 + v15);
      }
      while ( v14 < v16 );
    }
  }
}

