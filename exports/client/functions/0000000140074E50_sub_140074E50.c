/* Address: 0x140074e50 | Name: sub_140074E50 | Size: 1198 bytes */
void sub_140074E50()
{
  int v0; // edi
  __int64 v1; // rbp
  unsigned int *v2; // r14
  unsigned int *v3; // r15
  int v4; // esi
  int *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned int *v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int *v19; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  unsigned int *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int *v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rcx
  unsigned int *v38; // rcx
  unsigned int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 i; // rax
  unsigned int *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  _DWORD *v46; // rcx

  v0 = 0;
  dword_140404A6C[70326263] = 0;
  v1 = 0;
  v2 = &dword_140404A6C[70326264];
  v3 = &dword_140404A6C[70326249];
  do
  {
    v4 = 0;
    v5 = (int *)v3;
    v6 = 2;
    do
    {
      v7 = v5[15];
      if ( (_DWORD)v7 == -1 )
        goto LABEL_30;
      v8 = v5[16];
      if ( v8 == -1 )
      {
        if ( v4 <= 0 )
          goto LABEL_9;
        dword_140404A6C[122 * v7 + 70087141] = *v2;
        v9 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v7 + 70087141] = v8;
        v9 = v5[16];
      }
      dword_140404A6C[122 * v9 + 70087140] = v7;
LABEL_9:
      v10 = v6 - 2;
      v11 = v6 - 2;
      if ( v6 - 2 > 0 )
      {
        v12 = v5 + 31;
        do
        {
          if ( *v12 != -1 )
            break;
          --v11;
          --v12;
        }
        while ( v11 > 0 );
      }
      v13 = &dword_140404A6C[v1 + 70087029 + v11];
      v14 = v13[239251];
      if ( v14 == -1 )
      {
        if ( !v0 )
          goto LABEL_30;
        v17 = v6 - 2;
        if ( v10 > 0 )
        {
          do
          {
            if ( dword_140404A6C[v17 + 70326264] != -1 )
              break;
            --v17;
          }
          while ( v17 > 0 );
        }
        v15 = 122 * v7;
        dword_140404A6C[122 * v7 + 70087139] = dword_140404A6C[v17 + 70326264];
        v18 = (int)dword_140404A6C[v17 + 70326264];
        if ( dword_140404A6C[122 * v18 + 70087138] == -1 )
          dword_140404A6C[122 * v18 + 70087138] = v7;
LABEL_24:
        if ( dword_140404A6C[v15 + 70087138] == -1 )
        {
          if ( v10 > 0 )
          {
            v19 = v5 - 1;
            do
            {
              if ( *v19 != -1 )
                break;
              --v10;
              --v19;
            }
            while ( v10 > 0 );
          }
          dword_140404A6C[v15 + 70087138] = dword_140404A6C[v10 + 70326248 + v1];
        }
        goto LABEL_30;
      }
      v15 = 122 * v7;
      dword_140404A6C[122 * v7 + 70087139] = v14;
      v16 = (int)v13[239251];
      if ( dword_140404A6C[122 * v16 + 70087138] == -1 )
        dword_140404A6C[122 * v16 + 70087138] = v7;
      if ( v0 )
        goto LABEL_24;
LABEL_30:
      v20 = v5[16];
      if ( (_DWORD)v20 == -1 )
        goto LABEL_57;
      v21 = v5[17];
      if ( v21 == -1 )
      {
        if ( v4 + 1 <= 0 )
          goto LABEL_36;
        dword_140404A6C[122 * v20 + 70087141] = *v2;
        v22 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v20 + 70087141] = v21;
        v22 = v5[17];
      }
      dword_140404A6C[122 * v22 + 70087140] = v20;
LABEL_36:
      v23 = v6 - 1;
      v24 = v6 - 1;
      if ( v6 - 1 > 0 )
      {
        v25 = v5 + 32;
        do
        {
          if ( *v25 != -1 )
            break;
          --v24;
          --v25;
        }
        while ( v24 > 0 );
      }
      v26 = &dword_140404A6C[v1 + 70087029 + v24];
      v27 = v26[239251];
      if ( v27 == -1 )
      {
        if ( !v0 )
          goto LABEL_57;
        v30 = v6 - 1;
        if ( v23 > 0 )
        {
          do
          {
            if ( dword_140404A6C[v30 + 70326264] != -1 )
              break;
            --v30;
          }
          while ( v30 > 0 );
        }
        v28 = 122 * v20;
        dword_140404A6C[122 * v20 + 70087139] = dword_140404A6C[v30 + 70326264];
        v31 = (int)dword_140404A6C[v30 + 70326264];
        if ( dword_140404A6C[122 * v31 + 70087138] == -1 )
          dword_140404A6C[122 * v31 + 70087138] = v20;
LABEL_51:
        if ( dword_140404A6C[v28 + 70087138] == -1 )
        {
          if ( v23 > 0 )
          {
            v32 = v5;
            do
            {
              if ( *v32 != -1 )
                break;
              --v23;
              --v32;
            }
            while ( v23 > 0 );
          }
          dword_140404A6C[v28 + 70087138] = dword_140404A6C[v23 + 70326248 + v1];
        }
        goto LABEL_57;
      }
      v28 = 122 * v20;
      dword_140404A6C[122 * v20 + 70087139] = v27;
      v29 = (int)v26[239251];
      if ( dword_140404A6C[122 * v29 + 70087138] == -1 )
        dword_140404A6C[122 * v29 + 70087138] = v20;
      if ( v0 )
        goto LABEL_51;
LABEL_57:
      v33 = v5[17];
      if ( (_DWORD)v33 == -1 )
        goto LABEL_84;
      v34 = v5[18];
      if ( v34 == -1 )
      {
        if ( v4 + 2 <= 0 )
          goto LABEL_63;
        dword_140404A6C[122 * v33 + 70087141] = *v2;
        v35 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v33 + 70087141] = v34;
        v35 = v5[18];
      }
      dword_140404A6C[122 * v35 + 70087140] = v33;
LABEL_63:
      v36 = v6;
      if ( v6 > 0 )
      {
        v37 = v5 + 33;
        do
        {
          if ( *v37 != -1 )
            break;
          --v36;
          --v37;
        }
        while ( v36 > 0 );
      }
      v38 = &dword_140404A6C[v1 + 70087029 + v36];
      v39 = v38[239251];
      if ( v39 == -1 )
      {
        if ( !v0 )
          goto LABEL_84;
        for ( i = v6; i > 0; --i )
        {
          if ( dword_140404A6C[i + 70326264] != -1 )
            break;
        }
        v43 = &dword_140404A6C[i + 70087029];
        v40 = 122 * v33;
        dword_140404A6C[122 * v33 + 70087139] = v43[239235];
        v44 = (int)v43[239235];
        if ( dword_140404A6C[122 * v44 + 70087138] == -1 )
          dword_140404A6C[122 * v44 + 70087138] = v33;
LABEL_78:
        if ( dword_140404A6C[v40 + 70087138] == -1 )
        {
          v45 = v6;
          if ( v6 > 0 )
          {
            v46 = v5 + 1;
            do
            {
              if ( *v46 != -1 )
                break;
              --v45;
              --v46;
            }
            while ( v45 > 0 );
          }
          dword_140404A6C[v40 + 70087138] = dword_140404A6C[v1 + 70326248 + v45];
        }
        goto LABEL_84;
      }
      v40 = 122 * v33;
      dword_140404A6C[122 * v33 + 70087139] = v39;
      v41 = (int)v38[239251];
      if ( dword_140404A6C[122 * v41 + 70087138] == -1 )
        dword_140404A6C[122 * v41 + 70087138] = v33;
      if ( v0 )
        goto LABEL_78;
LABEL_84:
      v4 += 3;
      v5 += 3;
      v6 += 3;
    }
    while ( v4 < 15 );
    ++v0;
    v1 += 16;
    v3 += 16;
    v2 += 16;
  }
  while ( v0 < 15 );
}

