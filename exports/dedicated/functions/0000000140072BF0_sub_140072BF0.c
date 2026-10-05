/* Address: 0x140072bf0 | Name: sub_140072BF0 | Size: 826 bytes */
void __fastcall sub_140072BF0(signed int a1)
{
  __int64 v2; // r9
  __int64 v3; // r11
  signed int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  int v31; // r8d
  __int64 v32; // rdx

  v2 = 7040LL * a1;
  v3 = a1;
  if ( !*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5744) && (int)--*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5740) <= 0 )
  {
    if ( *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5732) )
    {
      v4 = 16 - ((*(int *)((char *)&unk_19025F0C0 + v2 + 5736) >> 1) & 0xFFFFFFFC);
      if ( v4 < 4 )
        v4 = 4;
      *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5740) = v4;
      v5 = 880 * v3;
      v6 = 880 * v3 + (*(_DWORD *)((_BYTE *)&unk_19025F0C0 + v2 + 5752) & 0x3F);
      v7 = ((unsigned __int8)*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5752) + 1) & 0x3F;
      v8 = *((_DWORD *)&unk_19025F0C0 + 2 * v6 + 1440);
      v9 = *((_DWORD *)&unk_19025F0C0 + 2 * v6 + 1441);
      v10 = *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5748);
      *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5752) = v7;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v12 = v9 + 1;
          v9 = 0;
          if ( v12 < 22 )
            v9 = v12;
        }
        else if ( v10 == 2 )
        {
          if ( --v8 < 0 )
            v8 = 30;
        }
        else if ( v10 == 3 && --v9 < 0 )
        {
          v9 = 21;
        }
      }
      else
      {
        v11 = v8 + 1;
        v8 = 0;
        if ( v11 < 31 )
          v8 = v11;
      }
      v13 = v5 + v7;
      v14 = 220 * v3;
      *((_DWORD *)&unk_19025F0C0 + 2 * v13 + 1440) = v8;
      *((_DWORD *)&unk_19025F0C0 + 2 * v13 + 1441) = v9;
      v15 = v8 + 32 * (v14 + v9);
      if ( *((_BYTE *)&unk_19025F0C0 + v15 + 6272) == 4 )
      {
        *((_BYTE *)&unk_19025F0C0 + v15 + 6272) = 0;
        *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5728) += 5;
        --*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5732);
        *(_WORD *)((char *)&unk_19025F0C0 + v2 + 5730) = 0;
        if ( *(int *)((char *)&unk_19025F0C0 + v2 + 5732) <= 0 )
        {
          *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5740) = 32;
          *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5732) = 0;
        }
        v16 = *(int *)((char *)&unk_19025F0C0 + v2 + 5756);
        v17 = v5 + v16;
        v18 = *((_DWORD *)&unk_19025F0C0 + 2 * v5 + 2 * v16 + 1440);
        v19 = ((_BYTE)v16 - 1) & 0x3F;
        v20 = *((_DWORD *)&unk_19025F0C0 + 2 * v17 + 1441);
        *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) = v19;
        v21 = v5 + v19;
        *((_DWORD *)&unk_19025F0C0 + 2 * v21 + 1440) = v18;
        *((_DWORD *)&unk_19025F0C0 + 2 * v21 + 1441) = v20;
        v22 = ((unsigned __int8)*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) - 1) & 0x3F;
        *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) = v22;
        v23 = v5 + v22;
        *((_DWORD *)&unk_19025F0C0 + 2 * v23 + 1440) = v18;
        *((_DWORD *)&unk_19025F0C0 + 2 * v23 + 1441) = v20;
        v24 = ((unsigned __int8)*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) - 1) & 0x3F;
        *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) = v24;
        v25 = v5 + v24;
        *((_DWORD *)&unk_19025F0C0 + 2 * v25 + 1440) = v18;
        *((_DWORD *)&unk_19025F0C0 + 2 * v25 + 1441) = v20;
        v26 = ((unsigned __int8)*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) - 1) & 0x3F;
        *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) = v26;
        v27 = v5 + v26;
        *((_DWORD *)&unk_19025F0C0 + 2 * v27 + 1440) = v18;
        *((_DWORD *)&unk_19025F0C0 + 2 * v27 + 1441) = v20;
      }
      v28 = v5 + *(int *)((char *)&unk_19025F0C0 + v2 + 5752);
      if ( *((_BYTE *)&unk_19025F0C0
           + 32 * v14
           + 32 * *((int *)&unk_19025F0C0 + 2 * v28 + 1441)
           + *((int *)&unk_19025F0C0 + 2 * v28 + 1440)
           + 6272) )
        *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5744) = 1;
      v29 = v5 + *(int *)((char *)&unk_19025F0C0 + v2 + 5756);
      *((_BYTE *)&unk_19025F0C0
      + 32 * v14
      + 32 * *((int *)&unk_19025F0C0 + 2 * v29 + 1441)
      + *((int *)&unk_19025F0C0 + 2 * v29 + 1440)
      + 6272) = 0;
      v30 = ((unsigned __int8)*(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) + 1) & 0x3F;
      v31 = *(_DWORD *)((_BYTE *)&unk_19025F0C0 + v2 + 5752) & 0x3F;
      for ( *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5756) = v30; v30 != v31; *((_BYTE *)&unk_19025F0C0 + v32 + 6272) = 2 )
      {
        v32 = *((int *)&unk_19025F0C0 + 2 * v5 + 2 * v30 + 1440)
            + 32 * (v14 + *((int *)&unk_19025F0C0 + 2 * v5 + 2 * v30 + 1441));
        v30 = ((_BYTE)v30 + 1) & 0x3F;
      }
      *((_BYTE *)&unk_19025F0C0
      + 32 * v14
      + 32 * *((int *)&unk_19025F0C0 + 2 * v5 + 2 * v30 + 1441)
      + *((int *)&unk_19025F0C0 + 2 * v5 + 2 * v30 + 1440)
      + 6272) = 3;
      sub_1400721D0(a1);
    }
    else
    {
      sub_140072680(a1);
    }
  }
}

