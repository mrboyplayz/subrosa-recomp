/* Address: 0x14015cf70 | Name: sub_14015CF70 | Size: 1161 bytes */
__int64 __fastcall sub_14015CF70(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // r12d
  int v5; // eax
  unsigned int v6; // r12d
  int v7; // esi
  int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // r9d
  int v12; // r10d
  int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // esi
  char v19; // r11
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  signed int v24; // r13d
  unsigned int v25; // esi
  int v26; // edx
  unsigned __int64 v27; // r10
  unsigned int v28; // r9d
  int v29; // r8d
  unsigned __int8 *v30; // rax
  unsigned __int8 v31; // cl
  unsigned int v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // edi
  unsigned __int8 v36; // r11
  int v37; // edx
  unsigned int v38; // r9d
  int v39; // r8d
  unsigned __int64 v40; // r10
  unsigned __int8 *v41; // rax
  unsigned __int8 v42; // cl
  int v43; // edi
  int v44; // ecx
  int v45; // edi
  int v46; // eax
  int v47; // ecx
  int v48; // edi
  int v49; // eax
  __int64 v51; // [rsp+0h] [rbp-A48h] BYREF
  unsigned int v52; // [rsp+20h] [rbp-A28h]
  int v53; // [rsp+24h] [rbp-A24h]
  _WORD v54[1016]; // [rsp+30h] [rbp-A18h] BYREF
  __int128 v55; // [rsp+820h] [rbp-228h] BYREF
  __int16 v56; // [rsp+830h] [rbp-218h]
  char v57; // [rsp+832h] [rbp-216h]
  _BYTE v59[464]; // [rsp+840h] [rbp-208h] BYREF
  __int64 v60; // [rsp+A10h] [rbp-38h]

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 < 5 )
  {
    sub_140160350(a1);
    v2 = *(_DWORD *)(a1 + 16);
  }
  v3 = v2 - 5;
  v4 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = v3;
  v5 = v4 & 0x1F;
  v6 = v4 >> 5;
  *(_DWORD *)(a1 + 20) = v6;
  v7 = v5 + 257;
  v53 = v5 + 257;
  if ( v3 < 5 )
  {
    sub_140160350(a1);
    v3 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 20);
  }
  v8 = v3 - 5;
  v9 = v6 >> 5;
  v10 = (v6 & 0x1F) + 1;
  *(_DWORD *)(a1 + 20) = v9;
  *(_DWORD *)(a1 + 16) = v3 - 5;
  if ( v3 - 5 < 4 )
  {
    sub_140160350(a1);
    v9 = *(_DWORD *)(a1 + 20);
    v8 = *(_DWORD *)(a1 + 16);
  }
  v11 = v9 >> 4;
  v12 = v8 - 4;
  *(_DWORD *)(a1 + 20) = v9 >> 4;
  *(_DWORD *)(a1 + 16) = v12;
  v13 = 0;
  v56 = 0;
  v57 = 0;
  v14 = (v9 & 0xF) + 4;
  v52 = v10 + v7;
  v55 = 0;
  v15 = 0;
  v16 = v12;
  do
  {
    v17 = v11;
    if ( v12 < 3 )
    {
      v18 = v11;
      v19 = v12;
      if ( v11 >= 1 << v12 )
      {
LABEL_16:
        v17 = v11;
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v21 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)a1 < v20 )
          {
            v22 = *v21;
            *(_QWORD *)a1 = v21 + 1;
          }
          else
          {
            v22 = 0;
          }
          v16 = v12 + 8;
          *(_DWORD *)(a1 + 16) = v12 + 8;
          v17 = v18 | (v22 << v19);
          *(_DWORD *)(a1 + 20) = v17;
          if ( v12 + 8 > 24 )
            break;
          v19 = v12 + 8;
          v11 = v17;
          v12 += 8;
          v18 = v17;
          if ( v17 >= 1 << v16 )
            goto LABEL_16;
        }
      }
    }
    v23 = byte_14026FED0[v15];
    v16 -= 3;
    *(_DWORD *)(a1 + 16) = v16;
    v11 = v17 >> 3;
    ++v15;
    *(_DWORD *)(a1 + 20) = v17 >> 3;
    *((_BYTE *)&v55 + v23) = v17 & 7;
    v12 = v16;
  }
  while ( v15 < v14 );
  v24 = v52;
  v25 = v53;
  if ( (unsigned int)sub_14016F730(v54, &v55, 19) )
  {
    do
    {
      v26 = *(_DWORD *)(a1 + 16);
      if ( v26 < 16 )
      {
        v27 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 >= v27 )
          goto LABEL_60;
        v28 = *(_DWORD *)(a1 + 20);
        v29 = *(_DWORD *)(a1 + 16);
        if ( v28 >= 1 << v26 )
        {
LABEL_27:
          *(_QWORD *)a1 = v27;
        }
        else
        {
          while ( 1 )
          {
            v30 = *(unsigned __int8 **)a1;
            if ( *(_QWORD *)a1 < v27 )
            {
              v31 = *v30;
              *(_QWORD *)a1 = v30 + 1;
            }
            else
            {
              v31 = 0;
            }
            v26 = v29 + 8;
            *(_DWORD *)(a1 + 16) = v29 + 8;
            v28 |= v31 << v29;
            *(_DWORD *)(a1 + 20) = v28;
            if ( v29 + 8 > 24 )
              break;
            v29 += 8;
            if ( v28 >= 1 << v26 )
              goto LABEL_27;
          }
        }
      }
      v32 = (unsigned __int16)v54[*(_DWORD *)(a1 + 20) & 0x1FF];
      if ( v54[*(_DWORD *)(a1 + 20) & 0x1FF] )
      {
        v33 = v26 - (v32 >> 9);
        *(_DWORD *)(a1 + 20) >>= v32 >> 9;
        v34 = v32 & 0x1FF;
        *(_DWORD *)(a1 + 16) = v33;
      }
      else
      {
        v34 = sub_14016FB90(a1, v54);
      }
      if ( (unsigned int)v34 > 0x12 )
        goto LABEL_60;
      if ( v34 >= 16 )
      {
        v36 = 0;
        if ( v34 == 16 )
        {
          v37 = *(_DWORD *)(a1 + 16);
          if ( v37 < 2 )
          {
            v38 = *(_DWORD *)(a1 + 20);
            v39 = *(_DWORD *)(a1 + 16);
            if ( v38 >= 1 << v37 )
            {
LABEL_43:
              *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
            }
            else
            {
              v40 = *(_QWORD *)(a1 + 8);
              while ( 1 )
              {
                v41 = *(unsigned __int8 **)a1;
                if ( *(_QWORD *)a1 < v40 )
                {
                  v42 = *v41;
                  *(_QWORD *)a1 = v41 + 1;
                }
                else
                {
                  v42 = 0;
                }
                v37 = v39 + 8;
                *(_DWORD *)(a1 + 16) = v39 + 8;
                v38 |= v42 << v39;
                *(_DWORD *)(a1 + 20) = v38;
                if ( v39 + 8 > 24 )
                  break;
                v39 += 8;
                if ( v38 >= 1 << v37 )
                  goto LABEL_43;
              }
            }
          }
          v43 = *(_DWORD *)(a1 + 20) & 3;
          *(_DWORD *)(a1 + 20) >>= 2;
          v35 = v43 + 3;
          *(_DWORD *)(a1 + 16) = v37 - 2;
          if ( !v13 )
            goto LABEL_60;
          v36 = v59[v13 - 1];
        }
        else
        {
          if ( v34 == 17 )
          {
            v44 = *(_DWORD *)(a1 + 16);
            if ( v44 < 3 )
            {
              sub_140160350(a1);
              v44 = *(_DWORD *)(a1 + 16);
            }
            v45 = *(_DWORD *)(a1 + 20) & 7;
            *(_DWORD *)(a1 + 20) >>= 3;
            v35 = v45 + 3;
            v46 = v44 - 3;
          }
          else
          {
            v47 = *(_DWORD *)(a1 + 16);
            if ( v47 < 7 )
            {
              sub_140160350(a1);
              v47 = *(_DWORD *)(a1 + 16);
            }
            v48 = *(_DWORD *)(a1 + 20) & 0x7F;
            *(_DWORD *)(a1 + 20) >>= 7;
            v35 = v48 + 11;
            v46 = v47 - 7;
          }
          *(_DWORD *)(a1 + 16) = v46;
        }
        if ( v24 - v13 < v35 )
          goto LABEL_60;
        MEMORY[0x1401FCD30](&v59[v13], v36, (unsigned int)v35);
      }
      else
      {
        v35 = 1;
        v59[v13] = v34;
      }
      v49 = v35 + v13;
      v13 = v49;
    }
    while ( v49 < v24 );
    if ( v49 != v24 )
    {
LABEL_60:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad codelengths";
      return MEMORY[0x1401F8B20]((unsigned __int64)&v51 ^ v60);
    }
    if ( (unsigned int)sub_14016F730(a1 + 52, v59, v25) )
      sub_14016F730(a1 + 2072, &v59[v25], v10);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v51 ^ v60);
}

