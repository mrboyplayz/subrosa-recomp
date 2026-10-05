/* Address: 0x1400e6960 | Name: sub_1400E6960 | Size: 1264 bytes */
__int64 sub_1400E6960()
{
  __int64 result; // rax
  int v1; // ebx
  int v2; // esi
  unsigned int *v3; // r13
  __int64 v4; // r14
  int v5; // r9d
  unsigned int *v6; // r10
  unsigned int *v7; // r11
  unsigned int *v8; // rax
  int v9; // ecx
  int v10; // edx
  signed int v11; // r15d
  __int64 v12; // r12
  __int64 v13; // rbp
  int v14; // r9d
  unsigned int *v15; // r10
  unsigned int *v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // r9d
  unsigned int *v20; // r10
  unsigned int *v21; // rax
  int v22; // ecx
  int v23; // edx
  int v24; // r9d
  __int64 v25; // rdi
  unsigned int *v26; // r10
  unsigned int *v27; // rax
  int v28; // ecx
  int v29; // edx
  int v30; // r9d
  unsigned int *v31; // r10
  unsigned int *v32; // rax
  int v33; // ecx
  int v34; // edx
  int v35; // r9d
  __int64 v36; // rbx
  unsigned int *v37; // r10
  unsigned int *v38; // rax
  int v39; // ecx
  int v40; // edx
  int v41; // r9d
  unsigned int *v42; // r10
  unsigned int *v43; // rax
  int v44; // ecx
  int v45; // edx
  int v46; // r9d
  unsigned int *v47; // r10
  unsigned int *v48; // rax
  int v49; // ecx
  int v50; // edx
  int v51; // r9d
  unsigned int *v52; // r10
  unsigned int *v53; // rax
  int v54; // ecx
  int v55; // edx
  int v56; // [rsp+40h] [rbp+8h]
  __int64 v57; // [rsp+48h] [rbp+10h]

  result = 0;
  v56 = 0;
  if ( (int)dword_140404A6C[193082758] > 0 )
  {
    v1 = dword_140404A6C[19928869];
    v2 = dword_140404A6C[421784253];
    v3 = &dword_140404A6C[193082775];
    v4 = 0;
    do
    {
      *v3 = 0x40000000;
      if ( *((_BYTE *)v3 - 64) )
      {
        v5 = 0;
        if ( v1 > 0 )
        {
          v6 = &dword_140404A6C[20074597];
          v7 = &dword_140404A6C[4242 * (int)result + 193082759];
          do
          {
            v8 = v7;
            do
            {
              v9 = *((unsigned __int8 *)v8 + (char *)v6 - (char *)v7);
              v10 = *(unsigned __int8 *)v8 - v9;
              if ( v10 )
                break;
              v8 = (unsigned int *)((char *)v8 + 1);
            }
            while ( v9 );
            if ( !v10 )
              *v3 = v5 | 0x80000000;
            ++v5;
            v6 += 58;
          }
          while ( v5 < v1 );
          LODWORD(result) = v56;
        }
      }
      v11 = 0;
      if ( (int)v3[1] > 0 )
      {
        v12 = (int)result;
        v13 = 0;
        v57 = (int)result;
        do
        {
          v14 = 0;
          if ( v2 > 0 )
          {
            v15 = &dword_140404A6C[421784739];
            do
            {
              v16 = &dword_140404A6C[4242 * v12 + 193082777 + 132 * v11];
              do
              {
                v17 = *((unsigned __int8 *)v16
                      + (char *)v15
                      - (char *)&dword_140404A6C[4242 * v12 + 193082777 + 132 * v11]);
                v18 = *(unsigned __int8 *)v16 - v17;
                if ( v18 )
                  break;
                v16 = (unsigned int *)((char *)v16 + 1);
              }
              while ( v17 );
              if ( !v18 )
                LOWORD(dword_140404A6C[v4 + 193082905 + v13]) = v14;
              ++v14;
              v15 += 46;
            }
            while ( v14 < v2 );
          }
          v19 = 0;
          if ( v2 > 0 )
          {
            v20 = &dword_140404A6C[421784739];
            do
            {
              v21 = &dword_140404A6C[4242 * v12 + 193082793 + 132 * v11];
              do
              {
                v22 = *((unsigned __int8 *)v21
                      + (char *)v20
                      - (char *)&dword_140404A6C[4242 * v12 + 193082793 + 132 * v11]);
                v23 = *(unsigned __int8 *)v21 - v22;
                if ( v23 )
                  break;
                v21 = (unsigned int *)((char *)v21 + 1);
              }
              while ( v22 );
              if ( !v23 )
                HIWORD(dword_140404A6C[v4 + 193082905 + v13]) = v19;
              ++v19;
              v20 += 46;
            }
            while ( v19 < v2 );
          }
          v24 = 0;
          v25 = 4242 * v12;
          if ( v2 > 0 )
          {
            v26 = &dword_140404A6C[421784739];
            do
            {
              v27 = &dword_140404A6C[132 * v11 + 193082809 + v25];
              do
              {
                v28 = *((unsigned __int8 *)v27 + (char *)v26 - (char *)&dword_140404A6C[132 * v11 + 193082809 + v25]);
                v29 = *(unsigned __int8 *)v27 - v28;
                if ( v29 )
                  break;
                v27 = (unsigned int *)((char *)v27 + 1);
              }
              while ( v28 );
              if ( !v29 )
                LOWORD(dword_140404A6C[v4 + 193082906 + v13]) = v24;
              ++v24;
              v26 += 46;
            }
            while ( v24 < v2 );
            v12 = v57;
          }
          v30 = 0;
          if ( v2 > 0 )
          {
            v31 = &dword_140404A6C[421784739];
            do
            {
              v32 = &dword_140404A6C[132 * v11 + 193082825 + v25];
              do
              {
                v33 = *((unsigned __int8 *)v32 + (char *)v31 - (char *)&dword_140404A6C[132 * v11 + 193082825 + v25]);
                v34 = *(unsigned __int8 *)v32 - v33;
                if ( v34 )
                  break;
                v32 = (unsigned int *)((char *)v32 + 1);
              }
              while ( v33 );
              if ( !v34 )
                HIWORD(dword_140404A6C[v4 + 193082906 + v13]) = v30;
              ++v30;
              v31 += 46;
            }
            while ( v30 < v2 );
            v12 = v57;
          }
          v35 = 0;
          v36 = 132LL * v11;
          if ( v2 > 0 )
          {
            v37 = &dword_140404A6C[421784739];
            do
            {
              v38 = &dword_140404A6C[v25 + 193082841 + v36];
              do
              {
                v39 = *((unsigned __int8 *)v38 + (char *)v37 - (char *)&dword_140404A6C[v25 + 193082841 + v36]);
                v40 = *(unsigned __int8 *)v38 - v39;
                if ( v40 )
                  break;
                v38 = (unsigned int *)((char *)v38 + 1);
              }
              while ( v39 );
              if ( !v40 )
                LOWORD(dword_140404A6C[v4 + 193082907 + v13]) = v35;
              ++v35;
              v37 += 46;
            }
            while ( v35 < v2 );
            v12 = v57;
          }
          v41 = 0;
          if ( v2 > 0 )
          {
            v42 = &dword_140404A6C[421784739];
            do
            {
              v43 = &dword_140404A6C[v25 + 193082857 + v36];
              do
              {
                v44 = *((unsigned __int8 *)v43 + (char *)v42 - (char *)&dword_140404A6C[v25 + 193082857 + v36]);
                v45 = *(unsigned __int8 *)v43 - v44;
                if ( v45 )
                  break;
                v43 = (unsigned int *)((char *)v43 + 1);
              }
              while ( v44 );
              if ( !v45 )
                HIWORD(dword_140404A6C[v4 + 193082907 + v13]) = v41;
              ++v41;
              v42 += 46;
            }
            while ( v41 < v2 );
            v12 = v57;
          }
          v46 = 0;
          if ( v2 > 0 )
          {
            v47 = &dword_140404A6C[421784739];
            do
            {
              v48 = &dword_140404A6C[v25 + 193082873 + v36];
              do
              {
                v49 = *((unsigned __int8 *)v48 + (char *)v47 - (char *)&dword_140404A6C[v25 + 193082873 + v36]);
                v50 = *(unsigned __int8 *)v48 - v49;
                if ( v50 )
                  break;
                v48 = (unsigned int *)((char *)v48 + 1);
              }
              while ( v49 );
              if ( !v50 )
                LOWORD(dword_140404A6C[v4 + 193082908 + v13]) = v46;
              ++v46;
              v47 += 46;
            }
            while ( v46 < v2 );
            v12 = v57;
          }
          v51 = 0;
          if ( v2 > 0 )
          {
            v52 = &dword_140404A6C[421784739];
            do
            {
              v53 = &dword_140404A6C[v25 + 193082889 + v36];
              do
              {
                v54 = *((unsigned __int8 *)v53 + (char *)v52 - (char *)&dword_140404A6C[v25 + 193082889 + v36]);
                v55 = *(unsigned __int8 *)v53 - v54;
                if ( v55 )
                  break;
                v53 = (unsigned int *)((char *)v53 + 1);
              }
              while ( v54 );
              if ( !v55 )
                HIWORD(dword_140404A6C[v4 + 193082908 + v13]) = v51;
              ++v51;
              v52 += 46;
            }
            while ( v51 < v2 );
            v12 = v57;
          }
          ++v11;
          v13 += 132;
        }
        while ( v11 < (int)v3[1] );
        v1 = dword_140404A6C[19928869];
        LODWORD(result) = v56;
      }
      result = (unsigned int)(result + 1);
      v3 += 4242;
      v4 += 4242;
      v56 = result;
    }
    while ( (int)result < (int)dword_140404A6C[193082758] );
  }
  return result;
}

