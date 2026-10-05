/* Address: 0x1400405e0 | Name: sub_1400405E0 | Size: 1459 bytes */
void __fastcall sub_1400405E0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbp
  int v8; // ecx
  int v9; // ebx
  int v10; // esi
  int v11; // ecx
  __int64 i; // rbx
  __int64 v13; // rax
  int v14; // ecx
  float v15; // xmm1_4
  float v16; // xmm0_4
  int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // r12
  _DWORD *v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // esi
  __int64 v30; // rdi
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-D8h]
  int v35; // [rsp+24h] [rbp-D4h]
  int v36; // [rsp+28h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C0h] BYREF
  float v39; // [rsp+40h] [rbp-B8h]
  _OWORD v40[2]; // [rsp+48h] [rbp-B0h] BYREF
  int v41; // [rsp+68h] [rbp-90h]
  _DWORD v42[4]; // [rsp+70h] [rbp-88h]
  _DWORD v43[8]; // [rsp+80h] [rbp-78h] BYREF

  v3 = a2;
  v4 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_178C5B8E0 + 414000;
    if ( dword_178C5B8E0 + 414000 > 3870000 )
      v5 = 3870000;
    v6 = 0;
    v34 = v5;
    v7 = 3;
    do
    {
      v8 = dword_163D94A44;
      v9 = 1000;
      v42[v6] = 1000;
      v10 = v8 + 19;
      v11 = v8 + 1;
      v43[v6] = v10;
      if ( v11 + 19 > 24 )
        v11 = 0;
      dword_163D94A44 = v11;
      if ( (rand() & 1) == 0 )
      {
        v9 = 1500;
        v42[v6] = 1500;
      }
      if ( (rand() & 1) == 0 )
      {
        v9 += 500;
        v42[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 500;
        v42[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 1000;
        v42[v6] = v9;
      }
      if ( v10 == 23 )
        v42[v6] = 5 * v9;
      ++v6;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < 3; ++i )
    {
      v41 = 1065353216;
      v40[0] = xmmword_1400F78B0;
      v40[1] = xmmword_1400F78B0;
      v13 = *(int *)((char *)&v43[i] + v4 - (_QWORD)v43);
      v14 = v43[i];
      v15 = (float)(*((float *)&unk_19154145C + 5873 * v13) + *((float *)&unk_191541468 + 5873 * v13)) * 0.5;
      *(float *)&v38 = (float)(*((float *)&unk_191541464 + 5873 * v13) + *((float *)&unk_191541458 + 5873 * v13)) * 0.5;
      v16 = *((float *)&unk_191541460 + 5873 * v13) + *((float *)&unk_19154146C + 5873 * v13);
      *((float *)&v38 + 1) = v15;
      v39 = v16 * 0.5;
      dword_163D94B4C[i] = sub_14003B080(v14, (int *)&v38, nullptr, (int *)v40);
      v17 = dword_163D94A40;
      v43[i + 4] = dword_163D94A40;
      dword_163D94A40 = v17 + 1;
    }
    v38 = v3;
    if ( (_DWORD)v3 )
    {
      v36 = v42[2];
      v18 = 0;
      v35 = v43[6];
      do
      {
        v19 = *(int *)(v4 + 4 * v18);
        v20 = v18++;
        v21 = v18;
        if ( v18 >= 3 )
          v21 = v18 % 3uLL;
        v22 = 0;
        v23 = 0;
        v24 = 23492 * v19;
        v25 = (_DWORD *)((char *)&unk_191541A38 + 23492 * v19);
        v26 = v25;
        while ( *(v26 - 279) )
        {
          if ( !*v26 )
          {
            ++v23;
            ++v22;
            break;
          }
          if ( !v26[279] )
          {
            v23 += 2;
            v22 += 2;
            break;
          }
          if ( !v26[558] )
          {
            v23 += 3;
            v22 += 3;
            break;
          }
          v23 += 4;
          v26 += 1116;
          v22 += 4;
          if ( v23 >= 16 )
            break;
        }
        memset((char *)&unk_1915415DC + 1116 * v22 + v24, 0, 0x45Cu);
        v27 = v24 + 1116 * v23;
        *(_DWORD *)((char *)&unk_1915415E4 + v27) = v43[v21 + 4];
        *(_DWORD *)((char *)&unk_1915415DC + v27) = 1;
        *(_DWORD *)((char *)&unk_1915415E8 + v27) = 6 - (v20 < 3);
        v28 = dword_163D94B4C[v21];
        *(int *)((char *)&dword_1915415EC + v27) = v28;
        *(_DWORD *)((char *)&unk_191541624 + v27) = -1;
        *(_DWORD *)((char *)&unk_191541618 + v27) = dword_19025F0D4[1760 * v28];
        LODWORD(v28) = v42[v21];
        *(_DWORD *)((char *)&unk_19154161C + v27) = v28;
        *(_DWORD *)((char *)&unk_191541620 + v27) = v34;
        *(float *)((char *)&unk_191541634 + v27) = (float)(int)v28 * -0.0000125;
        *(float *)((char *)&unk_191541630 + v27) = (float)(int)v28 * 0.000024999999;
        *(_DWORD *)((char *)&unk_1915415F8 + v27) = *(_DWORD *)(a3 + 4 * v21);
        *(_DWORD *)((char *)&unk_191541628 + v27) = 0;
        sub_14003A000(v19, v22);
        if ( !v20 && (rand() & 7) == 0 )
        {
          v29 = 0;
          v30 = 0;
          while ( *(v25 - 279) )
          {
            if ( !*v25 )
            {
              ++v30;
              ++v29;
              break;
            }
            if ( !v25[279] )
            {
              v30 += 2;
              v29 += 2;
              break;
            }
            if ( !v25[558] )
            {
              v30 += 3;
              v29 += 3;
              break;
            }
            v30 += 4;
            v25 += 1116;
            v29 += 4;
            if ( v30 >= 16 )
              break;
          }
          memset((char *)&unk_1915415DC + 1116 * v29 + v24, 0, 0x45Cu);
          v31 = 1116 * v30 + 23492 * v19;
          *(_DWORD *)((char *)&unk_1915415E4 + v31) = v35;
          v32 = dword_163D94B54;
          v33 = 1760LL * dword_163D94B54;
          *(float *)((char *)&unk_191541630 + v31) = (float)v36 * 0.000024999999;
          *(float *)((char *)&unk_191541634 + v31) = (float)v36 * -0.0000125;
          *(int *)((char *)&dword_1915415EC + v31) = v32;
          *(_DWORD *)((char *)&unk_1915415DC + v31) = 1;
          *(_DWORD *)((char *)&unk_1915415E8 + v31) = 6;
          *(_DWORD *)((char *)&unk_19154161C + v31) = v36;
          *(_DWORD *)((char *)&unk_191541618 + v31) = dword_19025F0D4[v33];
          *(_DWORD *)((char *)&unk_191541620 + v31) = v34;
          *(_DWORD *)((char *)&unk_1915415F8 + v31) = *(_DWORD *)(a3 + 8);
          *(_DWORD *)((char *)&unk_191541628 + v31) = 0;
          sub_14003A000(v19, v29);
        }
        v4 = a3;
      }
      while ( v18 < v38 );
    }
  }
}

