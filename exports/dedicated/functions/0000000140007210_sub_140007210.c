/* Address: 0x140007210 | Name: sub_140007210 | Size: 2087 bytes */
unsigned __int64 __fastcall sub_140007210(_DWORD *a1, unsigned int a2, float *a3, float *a4)
{
  unsigned __int64 result; // rax
  int v5; // esi
  int v6; // ecx
  int v7; // r12d
  int v8; // r10d
  int v9; // ebx
  int v10; // r11d
  int v11; // r8d
  __int64 v12; // r13
  __int64 v13; // rbp
  int v14; // r15d
  int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rax
  int *v18; // r9
  int *v19; // r10
  int *v20; // r11
  _DWORD *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r13
  int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  unsigned int v30; // edi
  unsigned int v31; // esi
  __int64 v32; // rcx
  unsigned int v33; // ebp
  _DWORD *v34; // rax
  int v35; // eax
  int v36; // edx
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rax
  unsigned int v41; // edi
  unsigned int v42; // esi
  __int64 v43; // rcx
  unsigned int v44; // ebp
  _DWORD *v45; // rax
  int v46; // eax
  unsigned int v47; // [rsp+40h] [rbp-10B8h]
  int v48; // [rsp+44h] [rbp-10B4h]
  _DWORD *v49; // [rsp+48h] [rbp-10B0h]
  int *v50; // [rsp+50h] [rbp-10A8h]
  int *v51; // [rsp+58h] [rbp-10A0h]
  int *v52; // [rsp+60h] [rbp-1098h]
  __int64 v53; // [rsp+68h] [rbp-1090h]
  int v54; // [rsp+70h] [rbp-1088h]
  __int64 v55; // [rsp+78h] [rbp-1080h]
  int v59; // [rsp+98h] [rbp-1060h]
  int v60; // [rsp+9Ch] [rbp-105Ch]
  int v61; // [rsp+A0h] [rbp-1058h]
  int v62; // [rsp+A4h] [rbp-1054h]
  _BYTE v63[4]; // [rsp+B0h] [rbp-1048h] BYREF
  _BYTE v64[4092]; // [rsp+B4h] [rbp-1044h] BYREF

  result = (unsigned __int64)a1;
  v54 = (int)a1;
  v5 = 0;
  v48 = 0;
  *a1 = 0;
  a1[8193] = 0;
  a1[16386] = 0;
  v6 = (int)(float)(*a3 * 0.25);
  v59 = v6;
  v7 = (int)(float)(a3[1] * 0.25);
  v8 = (int)(float)(*a4 * 0.25);
  v47 = v8;
  v9 = (int)(float)(a4[1] * 0.25);
  v62 = v9;
  v10 = (int)(float)(a3[2] * 0.25);
  v11 = (int)(float)(a4[2] * 0.25);
  v61 = v10;
  v60 = v11;
  if ( v7 <= v9 )
  {
    v12 = (int)a2;
    v53 = (int)a2;
    while ( 1 )
    {
      if ( v7 >= 0 )
      {
        v13 = 1052016 * v12;
        v55 = 263004 * v12;
        result = (unsigned int)(dword_16CDE9ED8[263004 * v12] << 6);
        if ( v7 < (int)result )
        {
          v14 = v10;
          if ( v10 <= v11 )
            break;
        }
      }
LABEL_78:
      if ( ++v7 > v9 )
        return result;
    }
    while ( 1 )
    {
      if ( v14 >= 0 )
      {
        result = (unsigned int)(*(int *)((char *)dword_16CDE9EDC + v13) << 6);
        if ( v14 < (int)result )
        {
          v15 = v6;
          if ( v6 <= v8 )
            break;
        }
      }
LABEL_76:
      if ( ++v14 > v11 )
      {
        v10 = v61;
        v9 = v62;
        goto LABEL_78;
      }
    }
    v16 = v5;
    v17 = 16LL * v5;
    v18 = (int *)&v64[v17 + 8];
    v19 = (int *)&v64[v17 + 4];
    v50 = (int *)&v64[v17 + 8];
    v20 = (int *)&v64[v17];
    v51 = (int *)&v64[v17 + 4];
    v21 = &v63[v17];
    v52 = (int *)&v64[v17];
    result = v47;
    v49 = v21;
    while ( v15 < 0 )
    {
LABEL_74:
      v18 = v50;
      ++v15;
      v19 = v51;
      v20 = v52;
      v21 = v49;
      v5 = v48;
      v13 = v55 * 4;
      if ( v15 > (int)result )
      {
        v8 = v47;
        v6 = v59;
        v11 = v60;
        goto LABEL_76;
      }
    }
    if ( v15 >= *(int *)((char *)dword_16CDE9ED4 + v13) << 6
      || (v22 = *(int *)(*(__int64 *)((char *)qword_16CDE9EE8 + v13)
                       + 4LL
                       * ((v15 >> 6)
                        + *(int *)((char *)dword_16CDE9ED4 + v13)
                        * ((v14 >> 6) + *(int *)((char *)dword_16CDE9EDC + v13) * (v7 >> 6)))),
          (_DWORD)v22 == -1)
      || (v23 = dword_16CDEA410[263004 * v12
                              + 513 * v22
                              + 64 * ((v7 >> 3) & 7)
                              + 8 * ((v14 >> 3) & 7)
                              + ((v15 >> 3) & 7)],
          (_DWORD)v23 == -1) )
    {
LABEL_73:
      result = v47;
      goto LABEL_74;
    }
    v24 = 6930 * v23 + (v15 & 7) + 8 * ((v14 & 7) + 8 * (v7 & 7u));
    v25 = dword_1661A1EA8[v24];
    if ( v25 )
    {
      v26 = v25 & 0xE0000000;
      if ( (v25 & 0xE0000000) == 0x40000000 )
      {
        sub_140007D80(v54, v15, v7, v14, v25, *(int *)((char *)dword_16CDE9EE0 + v13));
LABEL_31:
        v18 = v50;
        v19 = v51;
        v20 = v52;
        goto LABEL_44;
      }
      if ( v26 == 0x80000000 )
      {
        v27 = 58LL * (unsigned __int16)v25;
        if ( dword_15AE31820[v27] != 1 || dword_15AE31824[v27] != 1 || dword_15AE31828[v27] != 1 )
        {
          v28 = 0;
          if ( v16 > 0 )
          {
            v29 = v64;
            while ( *(v29 - 1) || *v29 != v15 || v29[1] != v7 || v29[2] != v14 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= v16 )
                goto LABEL_28;
            }
            goto LABEL_44;
          }
LABEL_28:
          if ( v16 < 256 )
          {
            ++v5;
            *v21 = 0;
            v21 += 4;
            *v20 = v15;
            *v19 = v7;
            *v18 = v14;
            ++v16;
            v48 = v5;
            v49 = v21;
            v50 = v18 + 4;
            v52 = v20 + 4;
            v51 = v19 + 4;
          }
        }
        sub_140008440(v54, v15, v7, v14, v25, *(int *)((char *)dword_16CDE9EE0 + v13), (__int64)a3, (__int64)a4);
        goto LABEL_31;
      }
      if ( v26 == -1073741824 )
      {
        v30 = v15 - (unsigned __int8)v25;
        v31 = v7 - BYTE2(v25);
        v32 = 0;
        v33 = v14 - BYTE1(v25);
        if ( v16 <= 0 )
        {
LABEL_40:
          if ( v16 < 256 )
          {
            ++v16;
            ++v48;
            *v20 = v30;
            *v19 = v31;
            *v49 = 0;
            *v18 = v33;
            v50 = v18 + 4;
            v49 += 4;
            v52 = v20 + 4;
            v51 = v19 + 4;
          }
          v35 = sub_14000BE30(a2, v30, v31, v33);
          sub_140008440(v54, v30, v31, v33, v35, dword_16CDE9EE0[v55], (__int64)a3, (__int64)a4);
          v18 = v50;
          v19 = v51;
          v20 = v52;
        }
        else
        {
          v34 = v64;
          while ( *(v34 - 1) || *v34 != v30 || v34[1] != v31 || v34[2] != v33 )
          {
            ++v32;
            v34 += 4;
            if ( v32 >= v16 )
              goto LABEL_40;
          }
        }
        v13 = v55 * 4;
        v5 = v48;
        v21 = v49;
      }
    }
LABEL_44:
    v36 = dword_1661A4EA8[v24];
    if ( v36 )
    {
      v37 = v36 & 0xE0000000;
      if ( (v36 & 0xE0000000) == 0x40000000 )
      {
        sub_140007D80(v54, v15, v7, v14, v36, *(int *)((char *)dword_16CDE9EE0 + v13));
      }
      else
      {
        if ( v37 != 0x80000000 )
        {
          if ( v37 == -1073741824 )
          {
            v41 = v15 - (unsigned __int8)v36;
            v42 = v7 - BYTE2(v36);
            v43 = 0;
            v44 = v14 - BYTE1(v36);
            if ( v16 <= 0 )
            {
LABEL_69:
              if ( v16 < 256 )
              {
                ++v16;
                ++v48;
                *v20 = v41;
                *v19 = v42;
                *v49 = 1;
                *v18 = v44;
                v50 = v18 + 4;
                v49 += 4;
                v52 = v20 + 4;
                v51 = v19 + 4;
              }
              v46 = sub_14000C850(a2, v41, v42, v44);
              sub_140008440(v54, v41, v42, v44, v46, dword_16CDE9EE0[v55], (__int64)a3, (__int64)a4);
            }
            else
            {
              v45 = v64;
              while ( *(v45 - 1) != 1 || *v45 != v41 || v45[1] != v42 || v45[2] != v44 )
              {
                ++v43;
                v45 += 4;
                if ( v43 >= v16 )
                  goto LABEL_69;
              }
            }
          }
          goto LABEL_72;
        }
        v38 = 58LL * (unsigned __int16)v36;
        if ( dword_15AE31820[v38] != 1 || dword_15AE31824[v38] != 1 || dword_15AE31828[v38] != 1 )
        {
          v39 = 0;
          if ( v16 > 0 )
          {
            v40 = v64;
            while ( *(v40 - 1) != 1 || *v40 != v15 || v40[1] != v7 || v40[2] != v14 )
            {
              ++v39;
              v40 += 4;
              if ( v39 >= v16 )
                goto LABEL_58;
            }
            goto LABEL_72;
          }
LABEL_58:
          if ( v16 < 256 )
          {
            *v21 = 1;
            *v20 = v15;
            *v19 = v7;
            *v18 = v14;
            ++v16;
            v48 = v5 + 1;
            v49 = v21 + 4;
            v50 = v18 + 4;
            v52 = v20 + 4;
            v51 = v19 + 4;
          }
        }
        sub_140008440(v54, v15, v7, v14, v36, *(int *)((char *)dword_16CDE9EE0 + v13), (__int64)a3, (__int64)a4);
      }
    }
LABEL_72:
    v12 = v53;
    goto LABEL_73;
  }
  return result;
}

