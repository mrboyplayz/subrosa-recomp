/* Address: 0x14016b5f0 | Name: sub_14016B5F0 | Size: 1345 bytes */
__int64 __fastcall sub_14016B5F0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rdi
  unsigned __int8 v5; // cl
  int v7; // r11d
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r13d
  int v11; // r15d
  int v12; // eax
  int v13; // ecx
  int v14; // r14d
  _BYTE *v15; // rax
  int v16; // eax
  int v17; // r12d
  int v18; // ebp
  int v19; // esi
  __int64 v20; // r9
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // cl
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rax
  unsigned __int8 v25; // cl
  int v26; // eax
  unsigned __int8 *v27; // rax
  int v28; // r10d
  int v29; // r10d
  __int64 v30; // rdx
  char v31; // cl
  int v32; // r10d
  int v33; // ecx
  unsigned int v34; // esi
  __int64 v35; // rcx
  unsigned __int8 *v36; // rcx
  unsigned __int8 v37; // dl
  int v38; // eax
  int v39; // eax
  unsigned __int8 *v40; // rax
  int v41; // r8d
  __int64 v42; // rcx
  int i; // [rsp+20h] [rbp-68h]
  int v44; // [rsp+24h] [rbp-64h]
  int v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+90h] [rbp+8h]
  int v49; // [rsp+A0h] [rbp+18h]
  unsigned int v50; // [rsp+A8h] [rbp+20h]

  v2 = *(unsigned __int8 **)(a1 + 192);
  v3 = a2;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    sub_14016D910(a1, a2);
    v2 = *(unsigned __int8 **)(a1 + 192);
  }
  v5 = *v2;
  *(_QWORD *)(a1 + 192) = v2 + 1;
  if ( v5 > 0xCu )
    return 0;
LABEL_7:
  v7 = 1;
  LODWORD(v8) = 0;
  v9 = (unsigned int)(1 << v5);
  v44 = v5 + 1;
  v10 = 0;
  v11 = v44;
  v50 = v9;
  v12 = 1 << (v5 + 1);
  v13 = 0;
  v49 = 1;
  v45 = v12 - 1;
  v14 = v12 - 1;
  v47 = 0;
  if ( (int)v9 > 0 )
  {
    v15 = (_BYTE *)(v3 + 2102);
    do
    {
      *v15 = v13;
      v15[1] = v13++;
      *((_WORD *)v15 - 1) = -1;
      v15 += 4;
    }
    while ( v13 < (int)v9 );
  }
  v16 = v9 + 2;
  v17 = -1;
  v18 = v9 + 2;
  v19 = 0;
  v20 = (int)v9 + 2;
  v46 = v20;
  for ( i = v9 + 2; ; v16 = i )
  {
    while ( 1 )
    {
      while ( v10 < v11 )
      {
        if ( !v19 )
        {
          v21 = *(unsigned __int8 **)(a1 + 192);
          if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              sub_14016D910(a1, v9);
              v23 = *(unsigned __int8 **)(a1 + 192);
              LODWORD(v8) = v47;
              v22 = *v23;
              *(_QWORD *)(a1 + 192) = v23 + 1;
            }
            else
            {
              v22 = 0;
            }
          }
          else
          {
            v22 = *v21;
            *(_QWORD *)(a1 + 192) = v21 + 1;
          }
          v19 = v22;
          if ( !v22 )
            return *(_QWORD *)(v3 + 8);
        }
        v24 = *(unsigned __int8 **)(a1 + 192);
        --v19;
        if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52),
                    v20);
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v26 )
            {
              *(_QWORD *)(a1 + 200) = v26 + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            v27 = *(unsigned __int8 **)(a1 + 192);
            v3 = a2;
            LODWORD(v8) = v47;
            v25 = *v27;
            *(_QWORD *)(a1 + 192) = v27 + 1;
          }
          else
          {
            v25 = 0;
          }
        }
        else
        {
          v25 = *v24;
          *(_QWORD *)(a1 + 192) = v24 + 1;
        }
        v9 = v50;
        v20 = v46;
        v7 = v49;
        LODWORD(v8) = (v25 << v10) | v8;
        v16 = i;
        v47 = v8;
        v10 += 8;
      }
      v28 = v8;
      v8 = (unsigned int)((int)v8 >> v11);
      v29 = v14 & v28;
      v10 -= v11;
      v47 = v8;
      if ( v29 != (_DWORD)v9 )
        break;
      v11 = v44;
      v18 = v16;
      v14 = v45;
      v17 = -1;
      v20 = (int)v9 + 2LL;
      v7 = 0;
      v46 = v20;
      v49 = 0;
    }
    if ( v29 == (_DWORD)v9 + 1 )
      break;
    if ( v29 > v18 )
      goto LABEL_46;
    if ( v7 )
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "no clear code";
      return 0;
    }
    if ( v17 < 0 )
    {
      if ( v29 == v18 )
      {
LABEL_46:
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "illegal code in raster";
        return 0;
      }
    }
    else
    {
      v30 = v3 + 4 * v20;
      ++v18;
      v46 = v20 + 1;
      if ( v18 > 0x2000 )
      {
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "too many codes";
        return 0;
      }
      *(_WORD *)(v30 + 2100) = v17;
      v31 = *(_BYTE *)(v3 + 4LL * v17 + 2102);
      *(_BYTE *)(v30 + 2102) = v31;
      if ( v29 != v18 )
        v31 = *(_BYTE *)(v3 + 4LL * v29 + 2102);
      *(_BYTE *)(v30 + 2103) = v31;
    }
    sub_1401670A0(v3, v29);
    if ( (v18 & v14) == 0 && v18 <= 4095 )
      v14 = (1 << ++v11) - 1;
    v9 = v50;
    v17 = v32;
    LODWORD(v8) = v47;
    v20 = v46;
  }
  if ( v19 )
  {
    if ( v19 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v33 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v33 < v19) )
      {
        v34 = v19 - v33;
        v35 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a1 + 24))(v35, v34, v8, v20);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += v19;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    }
  }
  while ( 1 )
  {
    v36 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52),
                v20);
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v39 )
        {
          *(_QWORD *)(a1 + 200) = v39 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v40 = *(unsigned __int8 **)(a1 + 192);
        v37 = *v40;
        v36 = v40 + 1;
        *(_QWORD *)(a1 + 192) = v40 + 1;
      }
      else
      {
        v37 = 0;
      }
      v38 = (int)v36;
    }
    else
    {
      v37 = *v36;
      v38 = (_DWORD)v36 + 1;
      *(_QWORD *)(a1 + 192) = ++v36;
    }
    if ( !v37 )
      break;
    if ( *(_QWORD *)(a1 + 16) && (v41 = *(_DWORD *)(a1 + 200) - v38, v41 < v37) )
    {
      v42 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v42, (unsigned int)v37 - v41);
    }
    else
    {
      *(_QWORD *)(a1 + 192) = &v36[v37];
    }
  }
  return *(_QWORD *)(a2 + 8);
}

