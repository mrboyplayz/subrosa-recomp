/* Address: 0x1400e9a60 | Name: sub_1400E9A60 | Size: 3423 bytes */
__int64 __fastcall sub_1400E9A60(signed int a1, int a2, const char *a3)
{
  signed int v3; // r12d
  int v4; // r13d
  char *v5; // rcx
  bool v6; // zf
  char *v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // esi
  int v12; // r14d
  unsigned int *v13; // rsi
  __int64 v14; // r15
  bool v15; // cc
  int v16; // r11d
  int v17; // r8d
  int v18; // r15d
  __int64 v19; // r14
  __int64 v20; // rcx
  signed int v21; // edi
  __int64 v22; // rdx
  signed int v23; // ebx
  __int64 v24; // r9
  signed int v25; // r11d
  signed int v26; // esi
  signed int v27; // r15d
  signed int v28; // r13d
  unsigned int v29; // ebp
  unsigned int v30; // r10d
  unsigned int v31; // xmm2_4
  unsigned int v32; // xmm4_4
  float *v33; // rax
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  int v42; // ebx
  unsigned int v43; // eax
  unsigned int *v44; // rdi
  int v45; // r10d
  int *v46; // r9
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // r11
  __int64 v50; // rsi
  unsigned int v51; // ecx
  unsigned int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 v55; // r11
  __int64 v56; // r8
  __int64 v57; // r11
  signed int v58; // eax
  __int64 v59; // r10
  unsigned int *v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // r11
  __int64 v65; // rsi
  int v66; // edx
  __int64 v67; // r9
  unsigned int *v68; // r8
  __int64 v69; // r10
  __int64 v70; // rdx
  _BYTE v72[32]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v73; // [rsp+20h] [rbp-118h]
  int v74; // [rsp+28h] [rbp-110h] BYREF
  int v75; // [rsp+2Ch] [rbp-10Ch]
  signed int v76; // [rsp+30h] [rbp-108h]
  int v77; // [rsp+34h] [rbp-104h]
  __int64 v78; // [rsp+38h] [rbp-100h]
  __int64 v79; // [rsp+40h] [rbp-F8h]
  char v80[8]; // [rsp+48h] [rbp-F0h] BYREF
  char v81[64]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v82; // [rsp+90h] [rbp-A8h]

  v3 = a1;
  v4 = a2;
  v76 = a1;
  v5 = &v72[79];
  v75 = a2;
  strcpy(v81, "data/model/");
  do
    v6 = *++v5 == 0;
  while ( !v6 );
  strcpy(v5, a3);
  v7 = &v72[79];
  do
    v6 = *++v7 == 0;
  while ( !v6 );
  strcpy(v7, ".cmo");
  v8 = MEMORY[0x14020B8D8](v81, "rb");
  v9 = 0;
  v10 = v8;
  v79 = 1;
  if ( v8 )
  {
    (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(v80, 1, 4, v8);
    v80[4] = 0;
    if ( strcmp(v80, off_1402B2C88)
      || ((*(void (__fastcall **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(&v74, 4, 1, v10),
          (unsigned int)(v74 - 1) > 2) )
    {
      sub_14020B9E8(v10);
      return MEMORY[0x1401F8B20]((unsigned __int64)v72 ^ v82);
    }
    (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
      &dword_140404A6C[174250429],
      4,
      1,
      v10);
    v11 = 0;
    if ( (int)dword_140404A6C[174250429] > 0 )
    {
      do
      {
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[2 * v11 + 174250430 + v11],
          4,
          3,
          v10);
        if ( v74 >= 3 )
          (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
            &dword_140404A6C[2 * v11 + 174348734],
            4,
            2,
            v10);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v11++ + 174512574],
          4,
          1,
          v10);
      }
      while ( v11 < (int)dword_140404A6C[174250429] );
      v9 = 0;
    }
    (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
      &dword_140404A6C[174545342],
      4,
      1,
      v10);
    v12 = 0;
    if ( (int)dword_140404A6C[174545342] > 0 )
    {
      v13 = &dword_140404A6C[174545343];
      do
      {
        v14 = 11LL * v12;
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v14 + 174545343],
          4,
          1,
          v10);
        if ( (int)*v13 > 0 )
        {
          do
            (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              &dword_140404A6C[11 * v12 + 174545344 + v9++],
              4,
              1,
              v10);
          while ( v9 < (int)*v13 );
        }
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v14 + 174545352],
          4,
          1,
          v10);
        v9 = 0;
        v15 = v74 < 2;
        v13[10] = 0;
        if ( !v15 )
          (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
            &dword_140404A6C[v14 + 174545353],
            4,
            1,
            v10);
        ++v12;
        v13 += 11;
      }
      while ( v12 < (int)dword_140404A6C[174545342] );
      v3 = v76;
      v4 = v75;
    }
    (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
      &dword_140404A6C[174905791],
      4,
      1,
      v10);
    if ( (int)dword_140404A6C[174905791] > 0 )
    {
      do
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v9++ + 174905792],
          4,
          1,
          v10);
      while ( v9 < (int)dword_140404A6C[174905791] );
    }
    sub_14020B9E8(v10);
  }
  v16 = dword_140404A6C[174250429];
  v17 = 0;
  v18 = v74;
  v19 = v4;
  dword_140404A6C[177167565] = dword_140404A6C[174250429];
  v73 = v4;
  v77 = v74;
  if ( (int)dword_140404A6C[174250429] <= 0 )
  {
    v42 = dword_140404A6C[174545342];
  }
  else
  {
    v20 = 0;
    v21 = dword_140404A6C[283827734];
    v22 = 0;
    v23 = dword_140404A6C[283827749];
    v24 = dword_140404A6C[174250429];
    v25 = dword_140404A6C[283827765];
    v26 = dword_140404A6C[283827733];
    v27 = dword_140404A6C[283827717];
    v28 = dword_140404A6C[283827702];
    v29 = dword_140404A6C[283826991];
    v30 = dword_140404A6C[283826969];
    v78 = *(_QWORD *)&dword_140404A6C[283826992];
    do
    {
      v31 = dword_140404A6C[v20 + 174250430];
      v32 = dword_140404A6C[v20 + 174250431];
      v33 = (float *)&dword_140404A6C[v20 + 177167569];
      v34 = *(float *)&dword_140404A6C[v20 + 174250432];
      if ( v73 == -1 )
      {
        dword_140404A6C[v20 + 177167567] = v31;
        v37 = *(float *)&v32;
        dword_140404A6C[v20 + 177167568] = v32;
        v38 = v34;
        *v33 = v34;
        if ( v3 == v29 )
        {
          v38 = v34 * 0.125;
          *v33 = v34 * 0.125;
          *(float *)&dword_140404A6C[v20 + 177167567] = *(float *)&v31 * 0.125;
          v37 = *(float *)&v32 * 0.125;
          *(float *)&dword_140404A6C[v20 + 177167568] = *(float *)&v32 * 0.125;
        }
        if ( v3 == (_DWORD)v78 )
        {
          v37 = *(float *)&v32 * 0.09375;
          v38 = v34 * 0.09375;
          *(float *)&dword_140404A6C[v20 + 177167568] = *(float *)&v32 * 0.09375;
          *(float *)&dword_140404A6C[v20 + 177167567] = *(float *)&v31 * 0.09375;
          *v33 = v34 * 0.09375;
        }
        v39 = v38;
        if ( v3 >= v28 )
        {
          if ( v3 <= v26 )
          {
            v39 = *v33;
            v37 = v37 - 0.0234375;
            *(float *)&dword_140404A6C[v20 + 177167568] = v37;
          }
          if ( v3 <= v27 )
          {
            v37 = v37 - 0.03125;
            *(float *)&dword_140404A6C[v20 + 177167568] = v37;
          }
        }
        if ( v3 >= v21 )
        {
          if ( v3 <= v25 )
          {
            v37 = v37 - 0.0234375;
            *(float *)&dword_140404A6C[v20 + 177167568] = v37;
          }
          if ( v3 <= v23 )
            *(float *)&dword_140404A6C[v20 + 177167568] = v37 - 0.03125;
        }
        if ( v3 == v30 )
          v39 = *v33 - 0.03125;
        v36 = -v39;
        v35 = -*(float *)&dword_140404A6C[v20 + 177167567];
      }
      else
      {
        v35 = *(float *)&v31 * 0.375;
        *(float *)&dword_140404A6C[v20 + 177167568] = *(float *)&v32 * 0.375;
        v36 = v34 * 0.375;
      }
      *(float *)&dword_140404A6C[v20 + 177167567] = v35;
      v19 = v73;
      *v33 = v36;
      v40 = *(float *)&dword_140404A6C[v20 + 177167568];
      v41 = *(float *)&dword_140404A6C[v20 + 177167569];
      *(_QWORD *)&dword_140404A6C[v22 + 177216719] = 0;
      if ( (float)((float)((float)(v40 * v40) + (float)(v35 * v35)) + (float)(v41 * v41)) > 1.0 )
        v17 = v79;
      if ( v77 >= 3 )
      {
        dword_140404A6C[v22 + 177216719] = dword_140404A6C[v22 + 174348734];
        dword_140404A6C[v22 + 177216720] = dword_140404A6C[v22 + 174348735];
        v19 = v73;
      }
      v20 += 3;
      v22 += 2;
      --v24;
    }
    while ( v24 );
    v42 = dword_140404A6C[174545342];
    v16 = dword_140404A6C[177167565];
    v18 = v77;
    if ( v17 )
      v42 = 0;
    v4 = v75;
    dword_140404A6C[174545342] = v42;
  }
  dword_140404A6C[177495247] = 0;
  v43 = 0;
  v44 = &dword_140404A6C[174545344];
  v45 = 0;
  if ( v42 > 0 )
  {
    v46 = (int *)&dword_140404A6C[174545344];
    while ( 1 )
    {
      v47 = *(v46 - 1);
      if ( v47 == 3 )
      {
        v48 = *v46;
        v49 = v46[1];
        v50 = v46[2];
        dword_140404A6C[3 * v43 + 177495248] = v48;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v49;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v50;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1065353216;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        if ( v18 >= 3 )
        {
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = dword_140404A6C[2 * v48 + 174348734];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = dword_140404A6C[2 * v48 + 174348735];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = dword_140404A6C[2 * v49 + 174348734];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = dword_140404A6C[2 * v49 + 174348735];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = dword_140404A6C[2 * v50 + 174348734];
          v51 = 3 * dword_140404A6C[177495247];
          v52 = dword_140404A6C[2 * v50 + 174348735];
LABEL_66:
          dword_140404A6C[2 * v51 + 178011350] = v52;
        }
      }
      else
      {
        if ( v47 != 4 || v46[9] )
          goto LABEL_68;
        v53 = *v46;
        v54 = v46[1];
        v55 = v46[2];
        dword_140404A6C[3 * v43 + 177495248] = v53;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v54;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        if ( v18 >= 3 )
        {
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = dword_140404A6C[2 * v53 + 174348734];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = dword_140404A6C[2 * v53 + 174348735];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = dword_140404A6C[2 * v54 + 174348734];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = dword_140404A6C[2 * v54 + 174348735];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = dword_140404A6C[2 * v55 + 174348734];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = dword_140404A6C[2 * v55 + 174348735];
        }
        v56 = v55;
        ++dword_140404A6C[177495247];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v53;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v55;
        v57 = v46[3];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v57;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        if ( v18 >= 3 )
        {
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = dword_140404A6C[2 * v53 + 174348734];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = dword_140404A6C[2 * v53 + 174348735];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = dword_140404A6C[2 * v56 + 174348734];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = dword_140404A6C[2 * v56 + 174348735];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = dword_140404A6C[2 * v57 + 174348734];
          v51 = 3 * dword_140404A6C[177495247];
          v52 = dword_140404A6C[2 * v57 + 174348735];
          goto LABEL_66;
        }
      }
      v43 = ++dword_140404A6C[177495247];
LABEL_68:
      ++v45;
      v46 += 11;
      if ( v45 >= v42 )
      {
        v4 = v75;
        v16 = dword_140404A6C[177167565];
        v19 = v75;
        v3 = v76;
        break;
      }
    }
  }
  if ( v4 != -1 )
  {
    v58 = 0;
    dword_140404A6C[1268 * v19 + 278521668] = 0;
    if ( v16 > 0 )
    {
      v59 = (unsigned int)v16;
      v60 = &dword_140404A6C[177167569];
      v61 = 1268 * v19;
      do
      {
        v60 += 3;
        v62 = v61 * 4 + 12LL * v58;
        *(unsigned int *)((char *)&dword_140404A6C[278521669] + v62) = *(v60 - 5);
        *(unsigned int *)((char *)&dword_140404A6C[278521670] + v62) = *(v60 - 4);
        *(unsigned int *)((char *)&dword_140404A6C[278521671] + v62) = *(v60 - 3);
        v58 = dword_140404A6C[v61 + 278521668] + 1;
        dword_140404A6C[v61 + 278521668] = v58;
        --v59;
      }
      while ( v59 );
    }
    dword_140404A6C[1268 * v19 + 278521861] = 0;
    v63 = 0;
    if ( v42 > 0 )
    {
      v64 = 1268 * v19;
      v65 = (unsigned int)v42;
      do
      {
        v66 = *(v44 - 1);
        v67 = 0;
        dword_140404A6C[6 * (int)v63 + 278521863 + v64] = v66;
        if ( v66 > 0 )
        {
          v68 = v44;
          v69 = (unsigned int)v66;
          do
          {
            ++v68;
            v70 = 1268 * v19 + v67 + 6LL * (int)dword_140404A6C[v64 + 278521861];
            ++v67;
            dword_140404A6C[v70 + 278521864] = *(v68 - 1);
            --v69;
          }
          while ( v69 );
        }
        v44 += 11;
        v63 = dword_140404A6C[v64 + 278521861] + 1;
        dword_140404A6C[v64 + 278521861] = v63;
        --v65;
      }
      while ( v65 );
      v3 = v76;
    }
  }
  sub_1401449C0((unsigned int)v3, 1);
  return MEMORY[0x1401F8B20]((unsigned __int64)v72 ^ v82);
}

