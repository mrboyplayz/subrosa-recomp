/* Address: 0x140232fe0 | Name: sub_140232FE0 | Size: 1448 bytes */
__int64 __fastcall sub_140232FE0(#107 *this, struct __crt_strtox::big_integer *a2)
{
  int v2; // r8d
  unsigned int v4; // eax
  unsigned int v5; // r15d
  int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // r10d
  char *v12; // r11
  unsigned __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // al
  unsigned int v20; // esi
  unsigned int *v21; // r15
  __int64 v22; // rbx
  int v23; // r10d
  unsigned __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // rdx
  char *v30; // r12
  unsigned int v31; // r13d
  unsigned int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // rdi
  unsigned __int64 v35; // r10
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  int v42; // r8d
  __int64 v43; // rax
  int v45; // r10d
  char *v46; // r11
  unsigned __int64 v47; // r8
  unsigned int v48; // r9d
  __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+24h] [rbp-DCh]
  unsigned int v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+2Ch] [rbp-D4h]
  char *v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+40h] [rbp-C0h]
  _BYTE v60[460]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v61; // [rsp+210h] [rbp+110h]
  _DWORD v62[115]; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v63; // [rsp+3E0h] [rbp+2E0h]
  _DWORD v64[115]; // [rsp+3E4h] [rbp+2E4h] BYREF
  __int64 v65; // [rsp+5B0h] [rbp+4B0h]

  v2 = (int)a2;
  v57 = (int)a2;
  v4 = (unsigned int)a2 / 0xA;
  v56 = (unsigned int)a2 / 0xA;
  v5 = (unsigned int)a2 / 0xA;
  v54 = (unsigned int)a2 / 0xA;
  if ( (unsigned int)a2 / 0xA )
  {
    while ( 1 )
    {
      v6 = v5;
      if ( v5 > 0x26 )
        v6 = 38;
      v55 = v6;
      v7 = *(unsigned __int8 *)(0x140000002LL + 4LL * (unsigned int)(v6 - 1) + 2643440);
      v8 = *(unsigned __int8 *)(0x140000003LL + 4LL * (unsigned int)(v6 - 1) + 2643440);
      v9 = v7;
      v63 = v8 + v7;
      MEMORY[0x1401FCD30](v64, 0, 4 * v7);
      MEMORY[0x1401FC920](
        (__m128i *)&v64[v9],
        (const __m128i *)((char *)&unk_140284CE0
                        + 4 * *(unsigned __int16 *)(0x140000000LL + 4LL * (unsigned int)(v6 - 1) + 2643440)),
        4 * v8);
      v10 = v63;
      if ( v63 <= 1 )
      {
        if ( v64[0] )
        {
          if ( v64[0] != 1 )
          {
            v11 = *(_DWORD *)this;
            if ( *(_DWORD *)this )
            {
              v12 = (char *)this + 4;
              LODWORD(v13) = 0;
              v14 = 0;
              v15 = v64[0];
              do
              {
                v16 = v14++;
                v17 = (unsigned int)v13 + v15 * *(unsigned int *)&v12[4 * v16];
                *(_DWORD *)&v12[4 * v16] = v17;
                v13 = HIDWORD(v17);
              }
              while ( v14 != v11 );
              if ( HIDWORD(v17) )
              {
                v18 = *(unsigned int *)this;
                if ( (unsigned int)v18 >= 0x73 )
                {
                  v63 = 0;
                  *(_DWORD *)this = 0;
                  sub_140236F50((char *)this + 4, 460, v64, 0);
                  v19 = 0;
                  goto LABEL_51;
                }
                *((_DWORD *)this + v18 + 1) = HIDWORD(v17);
                ++*(_DWORD *)this;
              }
            }
          }
        }
        else
        {
          v61 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((char *)this + 4, 460, v62, 0);
        }
        goto LABEL_50;
      }
      v20 = *(_DWORD *)this;
      v21 = (unsigned int *)((char *)this + 4);
      if ( *(_DWORD *)this <= 1u )
      {
        v22 = *v21;
        *(_DWORD *)this = v63;
        sub_140236F50((char *)this + 4, 460, v64, 4 * v10);
        if ( (_DWORD)v22 )
        {
          if ( (_DWORD)v22 != 1 )
          {
            v23 = *(_DWORD *)this;
            if ( *(_DWORD *)this )
            {
              LODWORD(v24) = 0;
              v25 = 0;
              do
              {
                v26 = v25++;
                v27 = (unsigned int)v24 + v22 * v21[v26];
                v21[v26] = v27;
                v24 = HIDWORD(v27);
              }
              while ( v25 != v23 );
              if ( HIDWORD(v27) )
              {
                v28 = *(unsigned int *)this;
                if ( (unsigned int)v28 >= 0x73 )
                {
                  v63 = 0;
                  *(_DWORD *)this = 0;
                  sub_140236F50((char *)this + 4, 460, v64, 0);
                  v5 = v54;
                  v19 = 0;
                }
                else
                {
                  v5 = v54;
                  *((_DWORD *)this + v28 + 1) = HIDWORD(v27);
                  v19 = 1;
                  ++*(_DWORD *)this;
                }
                goto LABEL_51;
              }
            }
          }
        }
        else
        {
          v63 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((char *)this + 4, 460, v64, 0);
        }
        v5 = v54;
        v19 = 1;
        goto LABEL_51;
      }
      v29 = (char *)v64;
      if ( v63 >= v20 )
        v29 = (char *)this + 4;
      v58 = v29;
      if ( v63 >= v20 )
      {
        v31 = v20;
        v30 = (char *)v64;
        v20 = v63;
      }
      else
      {
        v30 = (char *)this + 4;
        v31 = v63;
      }
      v32 = 0;
      v33 = 0;
      v61 = 0;
      if ( !v31 )
      {
LABEL_49:
        *(_DWORD *)this = v32;
        sub_140236F50((char *)this + 4, 460, v62, 4LL * v32);
        v5 = v54;
        v6 = v55;
LABEL_50:
        v19 = 1;
        goto LABEL_51;
      }
      while ( 1 )
      {
        v34 = *(unsigned int *)&v29[4 * v33];
        if ( !(_DWORD)v34 )
        {
          if ( (_DWORD)v33 == v32 )
          {
            v32 = v33 + 1;
            v62[v33] = 0;
            v61 = v33 + 1;
          }
          goto LABEL_48;
        }
        LODWORD(v35) = 0;
        v36 = v33;
        if ( v20 )
        {
          do
          {
            if ( v36 == 115 )
              break;
            v37 = v36;
            if ( v36 == v32 )
            {
              v62[v36] = 0;
              v61 = v36 + 1;
            }
            v38 = v36 - (unsigned int)v33;
            ++v36;
            v39 = (unsigned int)v62[v37] + (unsigned int)v35 + v34 * *(unsigned int *)&v30[4 * v38];
            v62[v37] = v39;
            v35 = HIDWORD(v39);
            v32 = v61;
          }
          while ( v36 - (_DWORD)v33 != v20 );
          if ( (_DWORD)v35 )
            break;
        }
LABEL_46:
        if ( v36 == 115 )
          goto LABEL_58;
        v29 = v58;
LABEL_48:
        v33 = (unsigned int)(v33 + 1);
        if ( (_DWORD)v33 == v31 )
          goto LABEL_49;
      }
      while ( v36 != 115 )
      {
        v40 = v36;
        if ( v36 == v32 )
        {
          v62[v36] = 0;
          v61 = v36 + 1;
        }
        ++v36;
        v41 = (unsigned int)v35 + (unsigned __int64)(unsigned int)v62[v40];
        v62[v40] = v41;
        v32 = v61;
        LODWORD(v35) = HIDWORD(v41);
        if ( !HIDWORD(v41) )
          goto LABEL_46;
      }
LABEL_58:
      v59 = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((char *)this + 4, 460, v60, 0);
      v5 = v54;
      v19 = 0;
      v6 = v55;
LABEL_51:
      if ( !v19 )
        goto LABEL_56;
      v5 -= v6;
      v54 = v5;
      if ( !v5 )
      {
        v4 = v56;
        v2 = v57;
        break;
      }
    }
  }
  v42 = v2 - 10 * v4;
  if ( v42 )
  {
    v43 = (unsigned int)dword_140285688[v42 - 1];
    if ( !(_DWORD)v43 )
    {
LABEL_56:
      v59 = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((char *)this + 4, 460, v60, 0);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v53 ^ v65);
    }
    if ( (_DWORD)v43 != 1 )
    {
      v45 = *(_DWORD *)this;
      if ( *(_DWORD *)this )
      {
        v46 = (char *)this + 4;
        LODWORD(v47) = 0;
        v48 = 0;
        v49 = v43;
        do
        {
          v50 = v48++;
          v51 = (unsigned int)v47 + v49 * *(unsigned int *)&v46[4 * v50];
          *(_DWORD *)&v46[4 * v50] = v51;
          v47 = HIDWORD(v51);
        }
        while ( v48 != v45 );
        if ( HIDWORD(v51) )
        {
          v52 = *(unsigned int *)this;
          if ( (unsigned int)v52 < 0x73 )
          {
            *((_DWORD *)this + v52 + 1) = HIDWORD(v51);
            ++*(_DWORD *)this;
            return MEMORY[0x1401F8B20]((unsigned __int64)&v53 ^ v65);
          }
          goto LABEL_56;
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v53 ^ v65);
}

