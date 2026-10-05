/* Address: 0x14015fad0 | Name: sub_14015FAD0 | Size: 1257 bytes */
__int64 __fastcall sub_14015FAD0(_QWORD *a1)
{
  __int64 v1; // rbp
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  char *v8; // rax
  int v9; // eax
  char v10; // cl
  __int64 v11; // rbx
  char *v12; // rax
  char v13; // cl
  char *v14; // rax
  char v15; // cl
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // rax
  int v20; // edi
  unsigned __int8 v21; // cl
  unsigned __int8 *v22; // rax
  __int64 v23; // rbx
  int v24; // ebp
  unsigned __int64 v25; // rcx
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rax
  int v28; // edi
  unsigned __int8 v29; // cl
  unsigned __int8 *v30; // rax
  int v31; // r13d
  _QWORD *v32; // rbx
  int v33; // r14d
  int v34; // r15d
  int v35; // r12d
  int v36; // edi
  __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // rax
  char *v40; // r9
  __int16 v41; // cx
  __int16 v42; // dx

  v1 = 0;
  a1[2267] = 0;
  a1[2268] = 0;
  a1[2279] = 0;
  a1[2280] = 0;
  a1[2291] = 0;
  a1[2292] = 0;
  a1[2303] = 0;
  a1[2304] = 0;
  *((_DWORD *)a1 + 4634) = 0;
  if ( !sub_14015F960(a1, 0) )
    return 0;
  v3 = (unsigned __int8)sub_140160790(a1);
  if ( (unsigned __int8)v3 == 217 )
    goto LABEL_47;
  do
  {
    if ( v3 != 218 )
    {
      if ( v3 != 220 )
      {
        if ( (unsigned int)sub_14016BB40(a1, v3) )
          goto LABEL_46;
        return 0;
      }
      v16 = *a1;
      v17 = *(_QWORD *)(*a1 + 200LL);
      v18 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v18 >= v17 )
      {
        if ( !*(_DWORD *)(v16 + 48) )
        {
          v20 = 0;
          goto LABEL_30;
        }
        sub_14016D910(*a1, v4);
        v18 = *(unsigned __int8 **)(v16 + 192);
        v17 = *(_QWORD *)(v16 + 200);
      }
      v4 = *v18;
      v19 = v18 + 1;
      *(_QWORD *)(v16 + 192) = v19;
      v20 = (unsigned __int8)v4;
      if ( (unsigned __int64)v19 < v17 )
      {
        v21 = *v19;
        *(_QWORD *)(v16 + 192) = v19 + 1;
        goto LABEL_33;
      }
LABEL_30:
      if ( *(_DWORD *)(v16 + 48) )
      {
        sub_14016D910(v16, v4);
        v22 = *(unsigned __int8 **)(v16 + 192);
        v21 = *v22;
        *(_QWORD *)(v16 + 192) = v22 + 1;
      }
      else
      {
        v21 = 0;
      }
LABEL_33:
      v23 = *a1;
      v24 = (v20 << 8) + v21;
      v25 = *(_QWORD *)(*a1 + 200LL);
      v26 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v26 >= v25 )
      {
        if ( !*(_DWORD *)(v23 + 48) )
        {
          v28 = 0;
          goto LABEL_39;
        }
        sub_14016D910(*a1, v4);
        v26 = *(unsigned __int8 **)(v23 + 192);
        v25 = *(_QWORD *)(v23 + 200);
      }
      v4 = *v26;
      v27 = v26 + 1;
      *(_QWORD *)(v23 + 192) = v27;
      v28 = (unsigned __int8)v4;
      if ( (unsigned __int64)v27 < v25 )
      {
        v29 = *v27;
        *(_QWORD *)(v23 + 192) = v27 + 1;
LABEL_42:
        if ( v24 != 4 )
        {
          *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad DNL len";
          return 0;
        }
        if ( v29 + (v28 << 8) == *(_DWORD *)(*a1 + 4LL) )
        {
          v1 = 0;
          goto LABEL_46;
        }
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad DNL height";
        return 0;
      }
LABEL_39:
      if ( *(_DWORD *)(v23 + 48) )
      {
        sub_14016D910(v23, v4);
        v30 = *(unsigned __int8 **)(v23 + 192);
        v29 = *v30;
        *(_QWORD *)(v23 + 192) = v30 + 1;
      }
      else
      {
        v29 = 0;
      }
      goto LABEL_42;
    }
    if ( !(unsigned int)sub_14016C320(a1) || !(unsigned int)sub_140167230(a1) )
      return 0;
    if ( *((_BYTE *)a1 + 18472) != 0xFF )
      goto LABEL_46;
    while ( 1 )
    {
      v6 = *a1;
      if ( *(_QWORD *)(*a1 + 16LL) )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(v6 + 32))(*(_QWORD *)(v6 + 40)) )
          goto LABEL_11;
        if ( !*(_DWORD *)(v6 + 48) )
          goto LABEL_46;
      }
      if ( *(_QWORD *)(v6 + 192) >= *(_QWORD *)(v6 + 200) )
        goto LABEL_46;
LABEL_11:
      v7 = *a1;
      v8 = *(char **)(*a1 + 192LL);
      if ( (unsigned __int64)v8 < *(_QWORD *)(*a1 + 200LL) )
        goto LABEL_17;
      if ( *(_DWORD *)(v7 + 48) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v7 + 16))(
               *(_QWORD *)(v7 + 40),
               v7 + 56,
               *(unsigned int *)(v7 + 52));
        *(_DWORD *)(v7 + 184) += *(_DWORD *)(v7 + 192) - *(_DWORD *)(v7 + 208);
        *(_QWORD *)(v7 + 192) = v7 + 56;
        if ( v9 )
        {
          *(_QWORD *)(v7 + 200) = v9 + v7 + 56;
        }
        else
        {
          *(_DWORD *)(v7 + 48) = 0;
          *(_QWORD *)(v7 + 200) = v7 + 57;
          *(_BYTE *)(v7 + 56) = 0;
        }
        v8 = *(char **)(v7 + 192);
LABEL_17:
        v10 = *v8;
        *(_QWORD *)(v7 + 192) = v8 + 1;
        if ( v10 == -1 )
          break;
      }
    }
    v11 = *a1;
    v12 = *(char **)(*a1 + 192LL);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(*a1 + 200LL) )
    {
      if ( *(_DWORD *)(v11 + 48) )
      {
        sub_14016D910(*a1, v5);
        v14 = *(char **)(v11 + 192);
        v15 = *v14;
        *(_QWORD *)(v11 + 192) = v14 + 1;
        *((_BYTE *)a1 + 18472) = v15;
      }
      else
      {
        *((_BYTE *)a1 + 18472) = 0;
      }
    }
    else
    {
      v13 = *v12;
      *(_QWORD *)(v11 + 192) = v12 + 1;
      *((_BYTE *)a1 + 18472) = v13;
    }
LABEL_46:
    v3 = (unsigned __int8)sub_140160790(a1);
  }
  while ( (unsigned __int8)v3 != 217 );
LABEL_47:
  if ( *((_DWORD *)a1 + 4620) )
  {
    v31 = 0;
    if ( *(int *)(*a1 + 8LL) > 0 )
    {
      v32 = a1 + 2270;
      do
      {
        v33 = 0;
        v34 = (*((_DWORD *)v32 - 13) + 7) >> 3;
        v35 = (*((_DWORD *)v32 - 12) + 7) >> 3;
        if ( v35 > 0 )
        {
          do
          {
            v36 = 0;
            if ( v34 > 0 )
            {
              do
              {
                v37 = 16;
                v38 = *v32 + 2LL * ((v36 + v33 * *((_DWORD *)v32 + 2)) << 6);
                v39 = v38 + 2;
                v40 = (char *)&a1[16 * (__int64)*((int *)v32 - 17) + 1681] - v38;
                do
                {
                  v41 = *(_WORD *)&v40[v39 - 2];
                  v42 = *(_WORD *)(v39 - 2);
                  v39 += 8;
                  *(_WORD *)(v39 - 10) = v41 * v42;
                  *(_WORD *)(v39 - 8) *= *(_WORD *)&v40[v39 - 8];
                  *(_WORD *)(v39 - 6) *= *(_WORD *)&v40[v39 - 6];
                  *(_WORD *)(v39 - 4) *= *(_WORD *)&v40[v39 - 4];
                  --v37;
                }
                while ( v37 );
                ((void (__fastcall *)(__int64))a1[2318])(*(v32 - 4) + v1 + 8 * v33 * *((_DWORD *)v32 - 11));
                ++v36;
                v1 += 8;
              }
              while ( v36 < v34 );
              v1 = 0;
            }
            ++v33;
          }
          while ( v33 < v35 );
        }
        ++v31;
        v32 += 12;
      }
      while ( v31 < *(_DWORD *)(*a1 + 8LL) );
    }
  }
  return 1;
}

