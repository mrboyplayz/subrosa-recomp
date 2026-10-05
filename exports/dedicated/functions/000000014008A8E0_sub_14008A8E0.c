/* Address: 0x14008a8e0 | Name: sub_14008A8E0 | Size: 1264 bytes */
__int64 sub_14008A8E0()
{
  __int64 result; // rax
  int v1; // ebx
  int v2; // esi
  unsigned int *v3; // r13
  __int64 v4; // r14
  int v5; // r9d
  _BYTE *v6; // r10
  char *v7; // r11
  unsigned __int8 *v8; // rax
  int v9; // ecx
  int v10; // edx
  signed int v11; // r15d
  __int64 v12; // r12
  __int64 v13; // rbp
  int v14; // r9d
  __int64 *v15; // r10
  unsigned __int8 *v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // r9d
  __int64 *v20; // r10
  unsigned __int8 *v21; // rax
  int v22; // ecx
  int v23; // edx
  int v24; // r9d
  __int64 v25; // rdi
  __int64 *v26; // r10
  unsigned __int8 *v27; // rax
  int v28; // ecx
  int v29; // edx
  int v30; // r9d
  __int64 *v31; // r10
  unsigned __int8 *v32; // rax
  int v33; // ecx
  int v34; // edx
  int v35; // r9d
  __int64 v36; // rbx
  __int64 *v37; // r10
  unsigned __int8 *v38; // rax
  int v39; // ecx
  int v40; // edx
  int v41; // r9d
  __int64 *v42; // r10
  unsigned __int8 *v43; // rax
  int v44; // ecx
  int v45; // edx
  int v46; // r9d
  __int64 *v47; // r10
  unsigned __int8 *v48; // rax
  int v49; // ecx
  int v50; // edx
  int v51; // r9d
  __int64 *v52; // r10
  unsigned __int8 *v53; // rax
  int v54; // ecx
  int v55; // edx
  int v56; // [rsp+40h] [rbp+8h]
  __int64 v57; // [rsp+48h] [rbp+10h]

  result = 0;
  v56 = 0;
  if ( dword_17BE4AB04 > 0 )
  {
    v1 = dword_15ADEF2A0;
    v2 = dword_15AD75F80;
    v3 = (unsigned int *)&unk_17BE4AB48;
    v4 = 0;
    do
    {
      *v3 = 0x40000000;
      if ( *((_BYTE *)v3 - 64) )
      {
        v5 = 0;
        if ( v1 > 0 )
        {
          v6 = byte_15AE31760;
          v7 = (char *)&unk_17BE4AB08 + 16968 * (int)result;
          do
          {
            v8 = (unsigned __int8 *)v7;
            do
            {
              v9 = v8[v6 - v7];
              v10 = *v8 - v9;
              if ( v10 )
                break;
              ++v8;
            }
            while ( v9 );
            if ( !v10 )
              *v3 = v5 | 0x80000000;
            ++v5;
            v6 += 232;
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
            v15 = &qword_15ADC0F98;
            do
            {
              v16 = (unsigned __int8 *)&unk_17BE4AB50 + 16968 * v12 + 528 * v11;
              do
              {
                v17 = v16[(char *)v15 - ((char *)&unk_17BE4AB50 + 16968 * v12 + 528 * v11)];
                v18 = *v16 - v17;
                if ( v18 )
                  break;
                ++v16;
              }
              while ( v17 );
              if ( !v18 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23880) = v14;
              ++v14;
              v15 += 23;
            }
            while ( v14 < v2 );
          }
          v19 = 0;
          if ( v2 > 0 )
          {
            v20 = &qword_15ADC0F98;
            do
            {
              v21 = (unsigned __int8 *)&unk_17BE4AB90 + 16968 * v12 + 528 * v11;
              do
              {
                v22 = v21[(char *)v20 - ((char *)&unk_17BE4AB90 + 16968 * v12 + 528 * v11)];
                v23 = *v21 - v22;
                if ( v23 )
                  break;
                ++v21;
              }
              while ( v22 );
              if ( !v23 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23881) = v19;
              ++v19;
              v20 += 23;
            }
            while ( v19 < v2 );
          }
          v24 = 0;
          v25 = 16968 * v12;
          if ( v2 > 0 )
          {
            v26 = &qword_15ADC0F98;
            do
            {
              v27 = (unsigned __int8 *)&unk_17BE4ABD0 + 528 * v11 + v25;
              do
              {
                v28 = v27[(char *)v26 - ((char *)&unk_17BE4ABD0 + 528 * v11 + v25)];
                v29 = *v27 - v28;
                if ( v29 )
                  break;
                ++v27;
              }
              while ( v28 );
              if ( !v29 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23882) = v24;
              ++v24;
              v26 += 23;
            }
            while ( v24 < v2 );
            v12 = v57;
          }
          v30 = 0;
          if ( v2 > 0 )
          {
            v31 = &qword_15ADC0F98;
            do
            {
              v32 = (unsigned __int8 *)&unk_17BE4AC10 + 528 * v11 + v25;
              do
              {
                v33 = v32[(char *)v31 - ((char *)&unk_17BE4AC10 + 528 * v11 + v25)];
                v34 = *v32 - v33;
                if ( v34 )
                  break;
                ++v32;
              }
              while ( v33 );
              if ( !v34 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23883) = v30;
              ++v30;
              v31 += 23;
            }
            while ( v30 < v2 );
            v12 = v57;
          }
          v35 = 0;
          v36 = 528LL * v11;
          if ( v2 > 0 )
          {
            v37 = &qword_15ADC0F98;
            do
            {
              v38 = (unsigned __int8 *)&unk_17BE4AC50 + v25 + v36;
              do
              {
                v39 = v38[(char *)v37 - ((char *)&unk_17BE4AC50 + v25 + v36)];
                v40 = *v38 - v39;
                if ( v40 )
                  break;
                ++v38;
              }
              while ( v39 );
              if ( !v40 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23884) = v35;
              ++v35;
              v37 += 23;
            }
            while ( v35 < v2 );
            v12 = v57;
          }
          v41 = 0;
          if ( v2 > 0 )
          {
            v42 = &qword_15ADC0F98;
            do
            {
              v43 = (unsigned __int8 *)&unk_17BE4AC90 + v25 + v36;
              do
              {
                v44 = v43[(char *)v42 - ((char *)&unk_17BE4AC90 + v25 + v36)];
                v45 = *v43 - v44;
                if ( v45 )
                  break;
                ++v43;
              }
              while ( v44 );
              if ( !v45 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23885) = v41;
              ++v41;
              v42 += 23;
            }
            while ( v41 < v2 );
            v12 = v57;
          }
          v46 = 0;
          if ( v2 > 0 )
          {
            v47 = &qword_15ADC0F98;
            do
            {
              v48 = (unsigned __int8 *)&unk_17BE4ACD0 + v25 + v36;
              do
              {
                v49 = v48[(char *)v47 - ((char *)&unk_17BE4ACD0 + v25 + v36)];
                v50 = *v48 - v49;
                if ( v50 )
                  break;
                ++v48;
              }
              while ( v49 );
              if ( !v50 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23886) = v46;
              ++v46;
              v47 += 23;
            }
            while ( v46 < v2 );
            v12 = v57;
          }
          v51 = 0;
          if ( v2 > 0 )
          {
            v52 = &qword_15ADC0F98;
            do
            {
              v53 = (unsigned __int8 *)&unk_17BE4AD10 + v25 + v36;
              do
              {
                v54 = v53[(char *)v52 - ((char *)&unk_17BE4AD10 + v25 + v36)];
                v55 = *v53 - v54;
                if ( v55 )
                  break;
                ++v53;
              }
              while ( v54 );
              if ( !v55 )
                *((_WORD *)&unk_17BE3F2C0 + v4 + v13 + 23887) = v51;
              ++v51;
              v52 += 23;
            }
            while ( v51 < v2 );
            v12 = v57;
          }
          ++v11;
          v13 += 264;
        }
        while ( v11 < (int)v3[1] );
        v1 = dword_15ADEF2A0;
        LODWORD(result) = v56;
      }
      result = (unsigned int)(result + 1);
      v3 += 4242;
      v4 += 8484;
      v56 = result;
    }
    while ( (int)result < dword_17BE4AB04 );
  }
  return result;
}

