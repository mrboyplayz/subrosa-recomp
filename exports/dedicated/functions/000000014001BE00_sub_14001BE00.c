/* Address: 0x14001be00 | Name: sub_14001BE00 | Size: 1359 bytes */
__int64 sub_14001BE00()
{
  int *v0; // rbx
  int v1; // eax
  int v2; // esi
  int v3; // r11d
  int v4; // r9d
  __int64 *v5; // r10
  unsigned __int8 *v6; // rax
  int v7; // ecx
  int v8; // edx
  int *v9; // rbx
  int v10; // eax
  int v11; // esi
  int v12; // r11d
  int v13; // r9d
  const char *v14; // r10
  int *v15; // rbx
  int v16; // eax
  int v17; // esi
  int v18; // r11d
  int v19; // r9d
  char *v20; // r10
  unsigned __int8 *v21; // rax
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // esi
  __int64 result; // rax
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // r11d
  __int64 v30; // rbx
  int v31; // r10d
  __int64 v32; // rcx
  unsigned int *v33; // rdx
  _WORD *v34; // r9
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  __int16 v37; // cx
  __int16 v38; // ax
  __int16 v39; // cx
  __int16 v40; // ax
  __int16 v41; // cx
  __int16 v42; // ax
  __int16 v43; // cx
  __int16 v44; // ax
  __int16 v45; // cx
  __int16 v46; // ax
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // cx
  int v50; // ecx
  int v51; // eax

  v0 = (int *)&unk_14A9AF2D0;
  memset(&unk_14A9AF2D0, 0, 0x400u);
  v1 = dword_14A9AB2CC;
  v2 = 0;
  if ( dword_14A9AB2CC > 0 )
  {
    v3 = dword_15AD75F80;
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &qword_15ADC0F98;
        do
        {
          v6 = (unsigned __int8 *)&unk_14A9AB2D0 + 64 * (__int64)v2;
          do
          {
            v7 = v6[(char *)v5 - ((char *)&unk_14A9AB2D0 + 64 * (__int64)v2)];
            v8 = *v6 - v7;
            if ( v8 )
              break;
            ++v6;
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 23;
        }
        while ( v4 < v3 );
        v1 = dword_14A9AB2CC;
      }
      ++v2;
      ++v0;
    }
    while ( v2 < v1 );
  }
  v9 = (int *)&unk_14A9C02D4;
  memset(&unk_14A9C02D4, 0, 0x1000u);
  v10 = dword_14A9B02D0;
  v11 = 0;
  if ( dword_14A9B02D0 > 0 )
  {
    v12 = dword_15ADEF2A0;
    do
    {
      v13 = 0;
      if ( v12 > 0 )
      {
        v14 = byte_15AE31760;
        do
        {
          if ( !strcmp(&byte_14A9B02D4[64 * (__int64)v11], v14) )
            *v9 = v13;
          ++v13;
          v14 += 232;
        }
        while ( v13 < v12 );
        v10 = dword_14A9B02D0;
      }
      ++v11;
      ++v9;
    }
    while ( v11 < v10 );
  }
  sub_14001A8B0();
  v15 = (int *)&unk_14A9D26DC;
  memset(&unk_14A9D26DC, 0, 0x1000u);
  v16 = dword_14A9C26D8;
  v17 = 0;
  if ( dword_14A9C26D8 > 0 )
  {
    v18 = dword_18ED9E980;
    do
    {
      v19 = 0;
      if ( v18 > 0 )
      {
        v20 = (char *)&unk_18E9EA980;
        do
        {
          v21 = (unsigned __int8 *)&unk_14A9C26DC + 64 * (__int64)v17;
          do
          {
            v22 = v21[v20 - ((char *)&unk_14A9C26DC + 64 * (__int64)v17)];
            v23 = *v21 - v22;
            if ( v23 )
              break;
            ++v21;
          }
          while ( v22 );
          if ( !v23 )
            *v15 = v19;
          ++v19;
          v20 += 3792;
        }
        while ( v19 < v18 );
        v16 = dword_14A9C26D8;
      }
      ++v17;
      ++v15;
    }
    while ( v17 < v16 );
  }
  v24 = dword_147CAAC68;
  v25 = 0;
  result = (unsigned int)dword_147CAAC60;
  v27 = dword_147CAAC64;
  dword_148BAAC78 = dword_147CAAC60;
  dword_148BAAC7C = dword_147CAAC64;
  dword_148BAAC80 = dword_147CAAC68;
  if ( dword_147CAAC68 > 0 )
  {
    v28 = 0;
    do
    {
      v29 = 0;
      v30 = 0;
      if ( v27 >= 0 )
      {
        do
        {
          v31 = 0;
          if ( (int)result >= 0 )
          {
            v32 = 3840 * (v28 + v30);
            v33 = (unsigned int *)((char *)&unk_148BAAC94 + v32);
            v34 = (_WORD *)((char *)&unk_148BAACAA + v32);
            do
            {
              v35 = *(v33 - 3932166);
              *v33 = v35;
              if ( (v35 & 0xE0000000) == 0x80000000 )
                *v33 = (HIBYTE(v35) & 3) + (*((_DWORD *)&unk_147CAAC20 + (v35 & 0x3FF) + 11818413) | 0x80000000);
              v36 = *(v33 - 3932165);
              v33[1] = v36;
              if ( (v36 & 0xE0000000) == 0x80000000 )
                v33[1] = (HIBYTE(v36) & 3) + (*((_DWORD *)&unk_147CAAC20 + (v36 & 0x3FF) + 11818413) | 0x80000000);
              *(v33 - 1) = *((_DWORD *)&unk_147CAAC20 + (int)*(v33 - 3932167) + 11819694);
              v33[2] = *(v33 - 3932164);
              v33[3] = *(v33 - 3932163);
              v33[4] = *(v33 - 3932162);
              v37 = *(v34 - 7864332);
              *(v34 - 1) = *(v34 - 7864333) & 0xFF00
                         | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864333) + 23602008);
              v38 = v37 & 0xFF00 | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)v37 + 23602008);
              v39 = *(v34 - 7864331);
              *v34 = v38;
              v40 = v39 & 0xFF00 | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)v39 + 23602008);
              v41 = *(v34 - 7864330);
              v34[1] = v40;
              v42 = v41 & 0xFF00 | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)v41 + 23602008);
              v43 = *(v34 - 7864329);
              v34[2] = v42;
              v44 = v43 & 0xFF00 | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)v43 + 23602008);
              v45 = *(v34 - 7864328);
              v34[3] = v44;
              v46 = v45 & 0xFF00 | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)v45 + 23602008);
              v47 = *(v34 - 7864327);
              v34[4] = v46;
              v48 = v47 & 0xFF00 | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)v47 + 23602008);
              v49 = *(v34 - 7864326);
              v34[5] = v48;
              v34[6] = v49 & 0xFF00 | *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)v49 + 23602008);
              v34[7] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864325) + 23602008);
              v34[8] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864324) + 23602008);
              v34[9] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864323) + 23602008);
              v34[10] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864322) + 23602008);
              v34[11] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864321) + 23602008);
              v34[12] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864320) + 23602008);
              v34[13] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864319) + 23602008);
              v34[14] = *((_WORD *)&unk_147CAAC20 + 2 * (unsigned __int8)*(v34 - 7864318) + 23602008);
              v50 = *(v33 - 3932153);
              if ( v50 )
                v51 = *((_DWORD *)&unk_147CAAC20 + (v50 & 0x3FF) + 11837103) | v50 & 0x3000000 | 0x40000000;
              else
                v51 = 0;
              v33[13] = v51;
              ++v31;
              result = (unsigned int)dword_148BAAC78;
              v33 += 15;
              v34 += 30;
            }
            while ( v31 <= dword_148BAAC78 );
            v27 = dword_148BAAC7C;
          }
          ++v29;
          ++v30;
        }
        while ( v29 <= v27 );
        v24 = dword_148BAAC80;
      }
      ++v25;
      v28 += 64;
    }
    while ( v25 < v24 );
  }
  return result;
}

