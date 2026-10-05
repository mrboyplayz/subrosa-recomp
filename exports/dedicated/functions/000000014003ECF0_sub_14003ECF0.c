/* Address: 0x14003ecf0 | Name: sub_14003ECF0 | Size: 1417 bytes */
void __fastcall sub_14003ECF0(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // eax
  _DWORD *v4; // r13
  int *v5; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  int v9; // r14d
  int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  int v14; // ebp
  int v15; // r12d
  __int64 v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm6_4
  int v19; // eax
  unsigned __int64 i; // r14
  int v21; // esi
  __int64 v22; // rbx
  _DWORD *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdi
  float v26; // xmm1_4
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // r11d
  int v32; // eax
  int v33; // r8d
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // [rsp+20h] [rbp-E8h]
  __int64 v38; // [rsp+28h] [rbp-E0h] BYREF
  float v39; // [rsp+30h] [rbp-D8h]
  int v40; // [rsp+38h] [rbp-D0h]
  int v41; // [rsp+3Ch] [rbp-CCh]
  _DWORD *v42; // [rsp+40h] [rbp-C8h]
  _OWORD v43[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v44; // [rsp+68h] [rbp-A0h]
  _DWORD v45[8]; // [rsp+70h] [rbp-98h] BYREF

  if ( a2 >= 3 )
  {
    v3 = dword_178C5B8E0 + 414000;
    v4 = a3;
    if ( dword_178C5B8E0 + 414000 > 3870000 )
      v3 = 3870000;
    v5 = v45;
    v7 = 0;
    v8 = 0;
    v9 = dword_163D94A44 + 19;
    v10 = dword_163D94A44 + 1;
    v40 = v3;
    v42 = a3;
    v41 = a2;
    if ( dword_163D94A44 + 20 > 24 )
      v10 = 0;
    dword_163D94A44 = v10;
    do
    {
      if ( v8 >= 2 )
      {
        v12 = 1000;
        *v5 = 1000;
        if ( (rand() & 1) == 0 )
        {
          v12 = 1500;
          *v5 = 1500;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
          v12 += 500;
        if ( v9 == 23 )
          v12 *= 5;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 0;
      }
      *v5 = v11;
      ++v8;
      ++v5;
    }
    while ( (int)v8 < a2 );
    v13 = 0;
    v14 = dword_163D94B4C;
    v15 = dword_163D94A40;
    do
    {
      v16 = 23492LL * (int)v4[v13];
      v43[0] = xmmword_1400F78B0;
      v43[1] = xmmword_1400F78B0;
      v44 = 1065353216;
      v17 = (float)(*(float *)((char *)&unk_191541458 + v16) + *(float *)((char *)&unk_191541464 + v16)) * 0.5;
      v18 = (float)(*(float *)((char *)&unk_191541460 + v16) + *(float *)((char *)&unk_19154146C + v16)) * 0.5;
      *((float *)&v38 + 1) = (float)(*(float *)((char *)&unk_19154145C + v16) + *(float *)((char *)&unk_191541468 + v16))
                           * 0.5;
      *(float *)&v38 = v17 + (float)((float)(v15 & 7) * 0.75);
      v39 = v18 - 1.0;
      if ( !v13 )
      {
        v19 = sub_14003B080(v9, (int *)&v38, nullptr, (int *)v43);
        v15 = dword_163D94A40;
        v14 = v19;
        dword_163D94B4C = v19;
        v39 = v18 + 1.0;
      }
      ++v13;
    }
    while ( v13 < 2 );
    for ( i = 0; ; ++i )
    {
      v21 = 0;
      v37 = v4[i];
      v22 = 0;
      v23 = (_DWORD *)((char *)&unk_191541A38 + 23492 * v37);
      while ( *(v23 - 279) )
      {
        if ( !*v23 )
        {
          ++v22;
          ++v21;
          break;
        }
        if ( !v23[279] )
        {
          v22 += 2;
          v21 += 2;
          break;
        }
        if ( !v23[558] )
        {
          v22 += 3;
          v21 += 3;
          break;
        }
        v22 += 4;
        v23 += 1116;
        v21 += 4;
        if ( v22 >= 16 )
          break;
      }
      v24 = 23492LL * v37;
      memset((char *)&unk_1915415DC + 1116 * v21 + v24, 0, 0x45Cu);
      v38 = 1116 * v22;
      v25 = 1116 * v22 + v24;
      *(_DWORD *)((char *)&unk_1915415DC + v25) = 1;
      *(_DWORD *)((char *)&unk_1915415E4 + v25) = v15;
      *(int *)((char *)&dword_1915415EC + v25) = v14;
      if ( v7 >= 2 )
      {
        if ( i <= 1 )
          *(_DWORD *)((char *)&unk_1915415E8 + v25) = 8;
        *(_DWORD *)((char *)&unk_191541618 + v25) = dword_19025F0D4[1760 * v14];
        v27 = v45[i];
        if ( v7 < 3 )
          v27 *= 2;
        v26 = (float)v27;
        *(_DWORD *)((char *)&unk_19154161C + v25) = v27;
        *(float *)((char *)&unk_191541630 + v25) = (float)v27 * 0.000024999999;
      }
      else
      {
        v26 = 0.0;
        *(_DWORD *)((char *)&unk_1915415E8 + v25) = 7;
        *(_QWORD *)((char *)&unk_191541618 + v25) = (unsigned int)dword_19025F0D4[1760 * v14];
        *(_DWORD *)((char *)&unk_191541630 + v25) = 0;
        if ( !v7 )
          goto LABEL_45;
      }
      v26 = v26 * -0.0000125;
LABEL_45:
      v28 = v40;
      *(float *)((char *)&unk_191541634 + v25) = v26;
      *(_DWORD *)((char *)&unk_191541620 + v25) = v28;
      *(_DWORD *)((char *)&unk_1915415F8 + v25) = *v42;
      *(_DWORD *)((char *)&unk_191541628 + v25) = 0;
      if ( v7 == 2 )
      {
        v29 = v45[i];
        v30 = rand();
        v31 = v37;
        v32 = v29 / 1000
            + v30
            % (int)(((int)((unsigned __int64)(91625969LL * v29) >> 32) >> 4)
                  + 1
                  + ((unsigned int)((unsigned __int64)(91625969LL * v29) >> 32) >> 31));
        if ( v32 < 1 )
          v32 = 1;
        v33 = 500 * v32;
        v34 = dword_1961996A0[6 * v37];
        if ( v34 <= 0 )
        {
          v35 = 0;
        }
        else
        {
          v36 = 50
              * ((25
                - (int)(float)((float)((float)v34 * *(float *)&dword_1961996A4[6 * v37])
                             * (float)((float)v33 * -0.000024999999)))
               / 50);
          v35 = v36;
          if ( v33 >= v36 )
            v36 = v33;
          v33 = v36;
        }
        *(_DWORD *)((char *)&unk_19154162C + v24 + v38) = v35;
        dword_1961996B4[6 * v37] += v33;
        v14 = dword_163D94B4C;
        v15 = dword_163D94A40;
        *(_DWORD *)((char *)&unk_191541628 + v25) = v33;
      }
      else
      {
        v31 = v37;
      }
      sub_14003A000(v31, v21);
      v4 = v42;
      if ( (int)++v7 >= v41 )
      {
        dword_163D94A40 = v15 + 1;
        return;
      }
    }
  }
}

