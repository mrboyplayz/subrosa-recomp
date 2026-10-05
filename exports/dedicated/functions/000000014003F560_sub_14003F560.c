/* Address: 0x14003f560 | Name: sub_14003F560 | Size: 1971 bytes */
void __fastcall sub_14003F560(__int64 a1, int a2, _DWORD *a3)
{
  signed __int64 v3; // r14
  int v5; // eax
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v9; // r12d
  int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  int *v15; // rdi
  __int64 v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  int v26; // eax
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  int v32; // edi
  int v33; // ebx
  __int64 v34; // rsi
  float v35; // xmm0_4
  int v36; // r15d
  unsigned __int64 v37; // rbx
  int v38; // r12d
  unsigned int v39; // edi
  int v40; // r14d
  _DWORD *v41; // r13
  __int64 v42; // rsi
  int v43; // edx
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // r10
  __int64 v47; // rcx
  float v48; // [rsp+28h] [rbp-E0h] BYREF
  float v49; // [rsp+2Ch] [rbp-DCh]
  float v50; // [rsp+30h] [rbp-D8h]
  __int64 v51; // [rsp+38h] [rbp-D0h]
  signed __int64 v52; // [rsp+40h] [rbp-C8h]
  _DWORD *v53; // [rsp+48h] [rbp-C0h]
  _OWORD v54[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v55; // [rsp+70h] [rbp-98h]
  _DWORD v56[8]; // [rsp+78h] [rbp-90h]

  v3 = a2;
  v53 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_178C5B8E0 + 414000;
    if ( dword_178C5B8E0 + 414000 > 3870000 )
      v5 = 3870000;
    v6 = 0;
    LODWORD(v51) = v5;
    v7 = 0;
    v8 = 0;
    v9 = dword_163D94A44 + 19;
    v10 = dword_163D94A44 + 1;
    if ( dword_163D94A44 + 20 > 24 )
      v10 = 0;
    dword_163D94A44 = v10;
    do
    {
      if ( (unsigned int)v8 >= 2 )
      {
        v12 = 250 * (rand() % 5 + 4);
        if ( v7 > 1 )
          v12 += 250 * (rand() % 5);
        if ( v9 == 23 )
          v12 *= 4;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 100;
      }
      v56[v7] = v11;
      ++v8;
      ++v7;
    }
    while ( v8 < (int)v3 );
    v52 = v3;
    if ( (_DWORD)v3 )
    {
      v13 = 0;
      v14 = (char *)a3 - (char *)dword_163D94B4C;
      do
      {
        v15 = &dword_163D94B4C[v13];
        v16 = *(int *)((char *)v15 + v14);
        v54[0] = xmmword_1400F78B0;
        v54[1] = xmmword_1400F78B0;
        v55 = 1065353216;
        v17 = *((float *)&unk_191541474 + 5873 * v16);
        v18 = *((float *)&unk_191541478 + 5873 * v16);
        v19 = *((float *)&unk_19154147C + 5873 * v16);
        sub_140049C20(v54, (char *)v54 + 12);
        sub_140049C20(v54, (char *)v54 + 12);
        v20 = *(float *)v54;
        v21 = *((float *)v54 + 1);
        v22 = *((float *)v54 + 2);
        v23 = (float)(*(float *)v54 * 0.5) + v17;
        v48 = v23;
        v24 = (float)(*((float *)v54 + 1) * 0.5) + v18;
        v25 = (float)(*((float *)v54 + 2) * 0.5) + v19;
        v49 = v24;
        v50 = v25;
        if ( v13 >= 2 )
        {
          if ( v6 < 3 )
          {
            v32 = rand() % 5 + 4;
            if ( v9 == 23 )
              v32 += rand() % 3 + 2;
            v33 = 0;
            if ( v32 > 0 )
            {
              v34 = 5873 * v16;
              do
              {
                if ( (v33 & 3) == 0 )
                {
                  v48 = v23 + (float)(v20 * 0.75);
                  v49 = v24 + (float)(v21 * 0.75);
                  v50 = v25 + (float)(v22 * 0.75);
                  sub_14003B080(15, (int *)&v48, nullptr, (int *)v54);
                  v23 = (float)(*(float *)v54 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
                  v24 = (float)(*((float *)v54 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
                  v25 = (float)(*((float *)v54 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
                  v48 = v23;
                  v49 = v24;
                  v50 = v25;
                }
                sub_14003B080(17, (int *)&v48, nullptr, (int *)v54);
                v20 = *(float *)v54;
                v21 = *((float *)v54 + 1);
                v35 = *(float *)v54;
                v22 = *((float *)v54 + 2);
                ++v33;
                dword_19154148C[v34] -= 250;
                v23 = v23 + (float)(v35 * 0.5);
                v48 = v23;
                v24 = v24 + (float)(v21 * 0.5);
                v49 = v24;
                v25 = v25 + (float)(v22 * 0.5);
                v50 = v25;
              }
              while ( v33 < v32 );
            }
          }
        }
        else
        {
          v26 = sub_14003B080(v9, (int *)&v48, nullptr, (int *)v54);
          v27 = *(float *)v54;
          v28 = *(float *)v54;
          *v15 = v26;
          dword_19154148C[5873 * v16] -= v56[v13];
          v29 = (float)((float)(v28 * 0.5) + v23) + (float)(v27 * 0.75);
          v48 = v29;
          v30 = (float)((float)(*((float *)v54 + 1) * 0.5) + v24) + (float)(*((float *)v54 + 1) * 0.75);
          v49 = v30;
          v31 = (float)((float)(*((float *)v54 + 2) * 0.5) + v25) + (float)(*((float *)v54 + 2) * 0.75);
          v50 = v31;
          sub_14003B080(15, (int *)&v48, nullptr, (int *)v54);
          v48 = (float)(*(float *)v54 * 0.75) + v29;
          v49 = (float)(*((float *)v54 + 1) * 0.75) + v30;
          v50 = (float)(*((float *)v54 + 2) * 0.75) + v31;
        }
        ++v6;
        ++v13;
      }
      while ( (__int64)v13 < v52 );
      v36 = dword_163D94B4C[0];
      v37 = 0;
      v38 = dword_163D94B50;
      v39 = 0;
      v40 = dword_163D94A40;
      v41 = v53;
      v48 = *(float *)&dword_19025F0D4[1760 * dword_163D94B4C[0]];
      do
      {
        v42 = (int)v41[v37];
        v43 = 0;
        v44 = 0;
        v45 = (_DWORD *)((char *)&unk_191541A38 + 23492 * v42);
        while ( *(v45 - 279) )
        {
          if ( !*v45 )
          {
            ++v44;
            ++v43;
            break;
          }
          if ( !v45[279] )
          {
            v44 += 2;
            v43 += 2;
            break;
          }
          if ( !v45[558] )
          {
            v44 += 3;
            v43 += 3;
            break;
          }
          v44 += 4;
          v45 += 1116;
          v43 += 4;
          if ( v44 >= 16 )
            break;
        }
        v46 = 1116 * v44;
        v47 = 23492 * v42 + 1116 * v44;
        *(_DWORD *)((char *)&unk_1915415DC + v47) = 1;
        *(_DWORD *)((char *)&unk_1915415E4 + v47) = v40;
        if ( v37 >= 2 )
        {
          if ( v39 < 3 )
            *(_DWORD *)((char *)&unk_1915415E8 + v47) = 8;
        }
        else
        {
          *(_DWORD *)((char *)&unk_1915415E8 + v47) = 7;
        }
        *(float *)((char *)&unk_191541618 + v47) = v48;
        *(_DWORD *)((char *)&unk_19154161C + v47) = v56[v37];
        *(_DWORD *)((char *)&unk_191541620 + v47) = v51;
        *(int *)((char *)&dword_1915415EC + v47) = v36;
        *(_DWORD *)((char *)&unk_1915415F0 + v47) = v38;
        if ( v37 >= 2 )
        {
          *(_DWORD *)((char *)&unk_1915415F8 + v47) = *v41;
          *(_DWORD *)((char *)&unk_1915415FC + v47) = v41[1];
          *(_DWORD *)((char *)&unk_191541628 + v47) = 0;
          if ( v39 < 3 )
            *(_DWORD *)((char *)&unk_191541628 + 23492 * v42 + v46) = -dword_19154148C[5873 * v42];
        }
        else
        {
          *(_DWORD *)((char *)&unk_1915415F8 + v47) = v41[2];
          *(_DWORD *)((char *)&unk_191541628 + v47) = 0;
        }
        sub_14003A000(v42, v43);
        ++v39;
        ++v37;
      }
      while ( (__int64)v37 < v52 );
    }
    else
    {
      v40 = dword_163D94A40;
    }
    dword_163D94A40 = v40 + 1;
  }
}

