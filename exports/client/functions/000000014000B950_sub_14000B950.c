/* Address: 0x14000b950 | Name: sub_14000B950 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14000B950(int *a1, signed int a2, float *a3, float *a4)
{
  int v4; // esi
  float v5; // xmm1_4
  float v6; // xmm0_4
  int v7; // ecx
  float v8; // xmm0_4
  int v9; // r12d
  float v10; // xmm1_4
  int v11; // r10d
  float v12; // xmm0_4
  int v13; // ebx
  float v14; // xmm0_4
  int v15; // r11d
  int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rbp
  int v19; // r15d
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // r9
  _DWORD *v24; // r10
  _DWORD *v25; // r11
  _DWORD *v26; // rdi
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r13
  unsigned int v31; // edx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  unsigned int v36; // edi
  unsigned int v37; // esi
  __int64 v38; // rcx
  unsigned int v39; // ebp
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  unsigned int v42; // eax
  int v43; // edx
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  int v48; // r9d
  float v49; // xmm0_4
  int v50; // r8d
  int v51; // edx
  unsigned int v52; // edi
  unsigned int v53; // esi
  __int64 v54; // rcx
  unsigned int v55; // ebp
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  unsigned int v58; // eax
  __int64 v60; // [rsp-20h] [rbp-21D8h] BYREF
  unsigned int v61; // [rsp+0h] [rbp-21B8h]
  float v62; // [rsp+8h] [rbp-21B0h]
  float *v63; // [rsp+10h] [rbp-21A8h]
  float *v64; // [rsp+18h] [rbp-21A0h]
  int v65; // [rsp+20h] [rbp-2198h]
  int v66; // [rsp+24h] [rbp-2194h]
  _DWORD *v67; // [rsp+28h] [rbp-2190h]
  _BYTE *v68; // [rsp+30h] [rbp-2188h]
  _BYTE *v69; // [rsp+38h] [rbp-2180h]
  _BYTE *v70; // [rsp+40h] [rbp-2178h]
  __int64 v71; // [rsp+48h] [rbp-2170h]
  int *v72; // [rsp+50h] [rbp-2168h]
  unsigned __int64 v73; // [rsp+58h] [rbp-2160h]
  unsigned int v74; // [rsp+60h] [rbp-2158h]
  float *v75; // [rsp+68h] [rbp-2150h]
  float *v76; // [rsp+70h] [rbp-2148h]
  int v77; // [rsp+78h] [rbp-2140h]
  int v78; // [rsp+7Ch] [rbp-213Ch]
  int v79; // [rsp+80h] [rbp-2138h]
  int v80; // [rsp+84h] [rbp-2134h]
  _BYTE v81[4]; // [rsp+90h] [rbp-2128h] BYREF
  _BYTE v82[4092]; // [rsp+94h] [rbp-2124h] BYREF
  __int64 v83; // [rsp+1090h] [rbp-1128h]

  v72 = a1;
  v4 = 0;
  v66 = 0;
  v76 = a3;
  *a1 = 0;
  a1[8193] = 0;
  a1[16386] = 0;
  v5 = a3[1];
  v6 = *a3 * 0.25;
  v75 = a4;
  v74 = a2;
  v7 = (int)v6;
  v8 = *a4 * 0.25;
  v77 = v7;
  v9 = (int)(float)(v5 * 0.25);
  v10 = a3[2];
  v11 = (int)v8;
  v12 = a4[1] * 0.25;
  v65 = v11;
  v13 = (int)v12;
  v14 = a4[2] * 0.25;
  v80 = v13;
  v15 = (int)(float)(v10 * 0.25);
  v16 = (int)v14;
  v79 = v15;
  v78 = (int)v14;
  if ( v9 <= v13 )
  {
    v17 = a2;
    v71 = a2;
    while ( 1 )
    {
      if ( v9 >= 0 )
      {
        v18 = 1052016 * v17;
        v73 = 1052016 * v17;
        if ( v9 < (int)(dword_140404A6C[263004 * v17 + 111579651] << 6) )
        {
          v19 = v15;
          if ( v15 <= v16 )
            break;
        }
      }
LABEL_79:
      if ( ++v9 > v13 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v60 ^ v83);
    }
    while ( 1 )
    {
      if ( v19 >= 0 && v19 < (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v18) << 6) )
      {
        v20 = v7;
        if ( v7 <= v11 )
          break;
      }
LABEL_77:
      if ( ++v19 > v16 )
      {
        v15 = v79;
        v13 = v80;
        goto LABEL_79;
      }
    }
    v21 = v4;
    v22 = 16LL * v4;
    v23 = &v82[v22 + 8];
    v24 = &v82[v22 + 4];
    v68 = &v82[v22 + 8];
    v25 = &v82[v22];
    v69 = &v82[v22 + 4];
    v26 = &v81[v22];
    v70 = &v82[v22];
    v27 = v65;
    v67 = v26;
    while ( v20 < 0 )
    {
LABEL_75:
      v23 = v68;
      ++v20;
      v24 = v69;
      v25 = v70;
      v26 = v67;
      v4 = v66;
      v18 = v73;
      if ( v20 > v27 )
      {
        v11 = v65;
        v7 = v77;
        v16 = v78;
        goto LABEL_77;
      }
    }
    if ( v20 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v18) << 6)
      || (v28 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v18)
                       + 4LL
                       * (int)((v20 >> 6)
                             + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v18)
                             * ((v19 >> 6) + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v18) * (v9 >> 6)))),
          (_DWORD)v28 == -1)
      || (v29 = (int)dword_140404A6C[263004 * v17
                                   + 111579985
                                   + 513 * v28
                                   + 64 * ((v9 >> 3) & 7)
                                   + 8 * ((v19 >> 3) & 7)
                                   + ((v20 >> 3) & 7)],
          (_DWORD)v29 == -1) )
    {
LABEL_74:
      v27 = v65;
      goto LABEL_75;
    }
    v30 = 6930 * v29 + (v20 & 7) + 8 * ((v19 & 7) + 8 * (v9 & 7u));
    v31 = dword_140404A6C[v30 + 83194359];
    if ( v31 )
    {
      v32 = v31 & 0xE0000000;
      if ( (v31 & 0xE0000000) == 0x40000000 )
      {
        sub_14000E8B0(v72, v20, v9, v19, v31, *(float *)((char *)&dword_140404A6C[111579653] + v18));
LABEL_31:
        v23 = v68;
        v24 = v69;
        v25 = v70;
        goto LABEL_44;
      }
      if ( v32 == 0x80000000 )
      {
        v33 = 58LL * (unsigned __int16)v31;
        if ( dword_140404A6C[v33 + 20074645] != 1
          || dword_140404A6C[v33 + 20074646] != 1
          || dword_140404A6C[v33 + 20074647] != 1 )
        {
          v34 = 0;
          if ( v21 > 0 )
          {
            v35 = v82;
            while ( *(v35 - 1) || *v35 != v20 || v35[1] != v9 || v35[2] != v19 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= v21 )
                goto LABEL_28;
            }
            goto LABEL_44;
          }
LABEL_28:
          if ( v21 < 256 )
          {
            ++v4;
            *v26 = 0;
            v26 += 4;
            *v25 = v20;
            *v24 = v9;
            *v23 = v19;
            ++v21;
            v66 = v4;
            v67 = v26;
            v68 = v23 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
        }
        sub_14000EF70(v72, v20, v9, v19, v31, *(float *)((char *)&dword_140404A6C[111579653] + v18), v76, v75);
        goto LABEL_31;
      }
      if ( v32 == -1073741824 )
      {
        v36 = v20 - (unsigned __int8)v31;
        v37 = v9 - BYTE2(v31);
        v38 = 0;
        v39 = v19 - BYTE1(v31);
        if ( v21 <= 0 )
        {
LABEL_40:
          if ( v21 < 256 )
          {
            v41 = v67;
            ++v21;
            ++v66;
            *v25 = v36;
            *v24 = v37;
            *v41 = 0;
            *v23 = v39;
            v68 = v23 + 4;
            v67 = v41 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
          v42 = sub_1400129D0(v74, v36, v37, v39);
          v64 = v75;
          v63 = v76;
          sub_14000EF70(v72, v36, v37, v39, v42, *(float *)&dword_140404A6C[v73 / 4 + 111579653], v76, v75);
          v23 = v68;
          v24 = v69;
          v25 = v70;
        }
        else
        {
          v40 = v82;
          while ( *(v40 - 1) || *v40 != v36 || v40[1] != v37 || v40[2] != v39 )
          {
            ++v38;
            v40 += 4;
            if ( v38 >= v21 )
              goto LABEL_40;
          }
        }
        v18 = v73;
        v4 = v66;
        v26 = v67;
      }
    }
LABEL_44:
    v43 = dword_140404A6C[v30 + 83197431];
    if ( v43 )
    {
      v44 = v43 & 0xE0000000;
      if ( (v43 & 0xE0000000) != 0x40000000 )
      {
        if ( v44 == 0x80000000 )
        {
          v45 = 58LL * (unsigned __int16)v43;
          if ( dword_140404A6C[v45 + 20074645] != 1
            || dword_140404A6C[v45 + 20074646] != 1
            || dword_140404A6C[v45 + 20074647] != 1 )
          {
            v46 = 0;
            if ( v21 > 0 )
            {
              v47 = v82;
              while ( *(v47 - 1) != 1 || *v47 != v20 || v47[1] != v9 || v47[2] != v19 )
              {
                ++v46;
                v47 += 4;
                if ( v46 >= v21 )
                  goto LABEL_58;
              }
              goto LABEL_73;
            }
LABEL_58:
            if ( v21 < 256 )
            {
              *v26 = 1;
              *v25 = v20;
              *v24 = v9;
              *v23 = v19;
              ++v21;
              v66 = v4 + 1;
              v67 = v26 + 4;
              v68 = v23 + 4;
              v70 = v25 + 4;
              v69 = v24 + 4;
            }
          }
          v48 = v19;
          v49 = *(float *)((char *)&dword_140404A6C[111579653] + v18);
          v50 = v9;
          v64 = v75;
          v63 = v76;
          v62 = v49;
          v61 = v43;
          v51 = v20;
        }
        else
        {
          if ( v44 != -1073741824 )
            goto LABEL_73;
          v52 = v20 - (unsigned __int8)v43;
          v53 = v9 - BYTE2(v43);
          v54 = 0;
          v55 = v19 - BYTE1(v43);
          if ( v21 > 0 )
          {
            v56 = v82;
            while ( *(v56 - 1) != 1 || *v56 != v52 || v56[1] != v53 || v56[2] != v55 )
            {
              ++v54;
              v56 += 4;
              if ( v54 >= v21 )
                goto LABEL_69;
            }
            goto LABEL_73;
          }
LABEL_69:
          if ( v21 < 256 )
          {
            v57 = v67;
            ++v21;
            ++v66;
            *v25 = v52;
            *v24 = v53;
            *v57 = 1;
            *v23 = v55;
            v68 = v23 + 4;
            v67 = v57 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
          v58 = sub_140016450(v74, v52, v53, v55);
          v64 = v75;
          v48 = v55;
          v51 = v52;
          v63 = v76;
          v50 = v53;
          v62 = *(float *)&dword_140404A6C[v73 / 4 + 111579653];
          v61 = v58;
        }
        sub_14000EF70(v72, v51, v50, v48, v61, v62, v63, v64);
        goto LABEL_73;
      }
      sub_14000E8B0(v72, v20, v9, v19, v43, *(float *)((char *)&dword_140404A6C[111579653] + v18));
    }
LABEL_73:
    v17 = v71;
    goto LABEL_74;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v60 ^ v83);
}

