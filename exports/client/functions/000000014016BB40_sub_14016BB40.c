/* Address: 0x14016bb40 | Name: sub_14016BB40 | Size: 2013 bytes */
__int64 __fastcall sub_14016BB40(__int64 *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // ebp
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rdi
  int v9; // r14d
  __int64 v10; // rbx
  char *v11; // rax
  char v12; // cl
  char *v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // r14d
  __int64 v18; // rbx
  char *v19; // rax
  char v20; // cl
  char *v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int8 *v28; // rax
  unsigned __int8 v29; // cl
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // r12d
  __int64 v33; // rbx
  unsigned __int8 *v34; // rax
  unsigned __int8 v35; // cl
  unsigned __int8 *v36; // rax
  unsigned int v37; // ebp
  __int64 v38; // rdi
  unsigned __int64 v39; // r14
  __int64 v40; // rbx
  __int16 v41; // cx
  _BYTE *v42; // rax
  _BYTE *v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  int v47; // r12d
  __int64 v48; // rbx
  int v49; // r15d
  unsigned __int8 *v50; // rax
  unsigned __int8 v51; // cl
  unsigned __int8 *v52; // rax
  unsigned int v53; // r14d
  unsigned int v54; // r13d
  int *v55; // rdi
  __int64 v56; // rbp
  __int64 v57; // rbx
  unsigned __int8 *v58; // rax
  unsigned __int8 v59; // cl
  unsigned __int8 *v60; // rax
  __int64 v61; // r15
  __int64 *v62; // r12
  __int64 v63; // rax
  __int64 v64; // rbp
  __int64 *v65; // r14
  __int64 i; // rdi
  __int64 v67; // rbx
  char *v68; // rax
  char v69; // cl
  char *v70; // rax
  __int64 *v71; // r10
  unsigned __int8 *v72; // rbx
  int j; // r11d
  __int64 v74; // rax
  int v75; // edi
  int v76; // r9d
  int v77; // r8d
  __int64 v79; // [rsp+0h] [rbp-A8h] BYREF
  int v80; // [rsp+20h] [rbp-88h]
  int v81; // [rsp+24h] [rbp-84h]
  int v82[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v83; // [rsp+70h] [rbp-38h]

  v3 = a2;
  switch ( (_DWORD)a2 )
  {
    case 0xC4:
      v47 = sub_1401604F0(*a1, a2) - 2;
      if ( v47 > 0 )
      {
        while ( 1 )
        {
          v48 = *a1;
          v49 = 0;
          v50 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)v50 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(v48 + 48) )
            {
              sub_14016D910(*a1, v46);
              v52 = *(unsigned __int8 **)(v48 + 192);
              v51 = *v52;
              *(_QWORD *)(v48 + 192) = v52 + 1;
            }
            else
            {
              v51 = 0;
            }
          }
          else
          {
            v51 = *v50;
            *(_QWORD *)(v48 + 192) = v50 + 1;
          }
          v53 = v51 & 0xF;
          v54 = v51 >> 4;
          if ( v54 > 1 || v53 > 3 )
            break;
          v55 = v82;
          v56 = 16;
          do
          {
            v57 = *a1;
            v58 = *(unsigned __int8 **)(*a1 + 192);
            if ( (unsigned __int64)v58 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v57 + 48) )
              {
                sub_14016D910(*a1, v46);
                v60 = *(unsigned __int8 **)(v57 + 192);
                v59 = *v60;
                *(_QWORD *)(v57 + 192) = v60 + 1;
              }
              else
              {
                v59 = 0;
              }
            }
            else
            {
              v59 = *v58;
              *(_QWORD *)(v57 + 192) = v58 + 1;
            }
            *v55 = v59;
            v49 += v59;
            ++v55;
            --v56;
          }
          while ( v56 );
          v80 = v49;
          v81 = v47 - 17;
          v61 = v53;
          v62 = &a1[210 * v53];
          if ( v54 )
          {
            if ( !(unsigned int)sub_14015CCB0((__int64)(v62 + 841), v82) )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
            v63 = 969;
          }
          else
          {
            if ( !(unsigned int)sub_14015CCB0((__int64)(v62 + 1), v82) )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
            v63 = 129;
          }
          v64 = v80;
          v65 = &v62[v63];
          for ( i = 0; i < v64; *((_BYTE *)v65 + i++) = v69 )
          {
            v67 = *a1;
            v68 = *(char **)(*a1 + 192);
            if ( (unsigned __int64)v68 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v67 + 48) )
              {
                sub_14016D910(*a1, v46);
                v70 = *(char **)(v67 + 192);
                v69 = *v70;
                *(_QWORD *)(v67 + 192) = v70 + 1;
              }
              else
              {
                v69 = 0;
              }
            }
            else
            {
              v69 = *v68;
              *(_QWORD *)(v67 + 192) = v68 + 1;
            }
          }
          if ( v54 )
          {
            v71 = &a1[128 * v61 + 1745];
            v72 = (unsigned __int8 *)(v62 + 841);
            for ( j = 0; j < 512; ++j )
            {
              v74 = *v72;
              *(_WORD *)v71 = 0;
              if ( (_BYTE)v74 != 0xFF )
              {
                v75 = *((unsigned __int8 *)v62 + v74 + 8008);
                v76 = *((_BYTE *)v62 + v74 + 7752) & 0xF;
                if ( v76 )
                {
                  if ( (unsigned int)(v75 + v76) <= 9 )
                  {
                    v77 = ((j << v75) & 0x1FF) >> (9 - v76);
                    if ( v77 < 1 << (v76 - 1) )
                    {
                      v46 = (unsigned int)(1 << v76);
                      v77 += 1 - v46;
                    }
                    if ( (unsigned int)(v77 + 128) <= 0xFF )
                      *(_WORD *)v71 = v75 + v76 + 16 * ((*((unsigned __int8 *)v62 + v74 + 7752) >> 4) + 16 * v77);
                  }
                }
              }
              ++v72;
              v71 = (__int64 *)((char *)v71 + 2);
            }
          }
          v47 = v81 - v80;
          if ( v81 - v80 <= 0 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
        }
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad DHT header";
      }
      break;
    case 0xDB:
      v32 = sub_1401604F0(*a1, a2) - 2;
      if ( v32 > 0 )
      {
        while ( 1 )
        {
          v33 = *a1;
          v34 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)v34 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(v33 + 48) )
            {
              sub_14016D910(*a1, v31);
              v36 = *(unsigned __int8 **)(v33 + 192);
              v35 = *v36;
              *(_QWORD *)(v33 + 192) = v36 + 1;
            }
            else
            {
              v35 = 0;
            }
          }
          else
          {
            v35 = *v34;
            *(_QWORD *)(v33 + 192) = v34 + 1;
          }
          v37 = v35 >> 4;
          if ( v37 > 1 )
            break;
          if ( (v35 & 0xFu) > 3 )
          {
            *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad DQT table";
            return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
          }
          v38 = 0;
          v39 = (unsigned __int64)(v35 & 0xF) << 6;
          do
          {
            v40 = *a1;
            if ( v37 )
            {
              v41 = sub_1401604F0(*a1, v31);
            }
            else
            {
              v42 = *(_BYTE **)(v40 + 192);
              if ( (unsigned __int64)v42 >= *(_QWORD *)(v40 + 200) )
              {
                if ( *(_DWORD *)(v40 + 48) )
                {
                  sub_14016D910(*a1, v31);
                  v43 = *(_BYTE **)(v40 + 192);
                  LOBYTE(v41) = *v43;
                  *(_QWORD *)(v40 + 192) = v43 + 1;
                }
                else
                {
                  LOBYTE(v41) = 0;
                }
              }
              else
              {
                LOBYTE(v41) = *v42;
                *(_QWORD *)(v40 + 192) = v42 + 1;
              }
              v41 = (unsigned __int8)v41;
            }
            v44 = byte_14026FC80[v38++];
            *((_WORD *)a1 + v39 + v44 + 6724) = v41;
          }
          while ( v38 < 64 );
          v45 = 65;
          if ( v37 )
            v45 = 129;
          v32 -= v45;
          if ( v32 <= 0 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
        }
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad DQT type";
      }
      break;
    case 0xDD:
      if ( (unsigned int)sub_1401604F0(*a1, a2) == 4 )
        *((_DWORD *)a1 + 4634) = sub_1401604F0(*a1, v30);
      else
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad DRI len";
      break;
    case 0xFF:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "expected marker";
      return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
    default:
      if ( (unsigned int)(a2 - 224) > 0xF && (_DWORD)a2 != 254 )
      {
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unknown marker";
        return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
      }
      v5 = sub_1401604F0(*a1, a2);
      if ( v5 < 2 )
      {
        v6 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
        if ( v3 == 254 )
          *(_QWORD *)(v6 + 16) = "bad COM len";
        else
          *(_QWORD *)(v6 + 16) = "bad APP len";
        return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
      }
      v7 = v5 - 2;
      if ( v3 == 224 )
      {
        if ( v7 >= 5 )
        {
          v8 = 0;
          v9 = 1;
          do
          {
            v10 = *a1;
            v11 = *(char **)(*a1 + 192);
            if ( (unsigned __int64)v11 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v10 + 48) )
              {
                sub_14016D910(*a1, v4);
                v13 = *(char **)(v10 + 192);
                v12 = *v13;
                *(_QWORD *)(v10 + 192) = v13 + 1;
              }
              else
              {
                v12 = 0;
              }
            }
            else
            {
              v12 = *v11;
              *(_QWORD *)(v10 + 192) = v11 + 1;
            }
            v14 = 0;
            if ( v12 == MEMORY[0x14026E908][v8] )
              v14 = v9;
            ++v8;
            v9 = v14;
          }
          while ( v8 < 5 );
          v7 -= 5;
          if ( v14 )
          {
            v15 = *a1;
            *((_DWORD *)a1 + 4626) = 1;
            sub_14016E0F0(v15, (unsigned int)v7);
            return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
          }
        }
LABEL_47:
        sub_14016E0F0(*a1, (unsigned int)v7);
        return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
      }
      if ( v3 != 238 || v7 < 12 )
        goto LABEL_47;
      v16 = 0;
      v17 = 1;
      do
      {
        v18 = *a1;
        v19 = *(char **)(*a1 + 192);
        if ( (unsigned __int64)v19 >= *(_QWORD *)(*a1 + 200) )
        {
          if ( *(_DWORD *)(v18 + 48) )
          {
            sub_14016D910(*a1, v4);
            v21 = *(char **)(v18 + 192);
            v20 = *v21;
            *(_QWORD *)(v18 + 192) = v21 + 1;
          }
          else
          {
            v20 = 0;
          }
        }
        else
        {
          v20 = *v19;
          *(_QWORD *)(v18 + 192) = v19 + 1;
        }
        v22 = 0;
        if ( v20 == byte_14026E9C8[v16] )
          v22 = v17;
        ++v16;
        v17 = v22;
      }
      while ( v16 < 6 );
      v7 -= 6;
      if ( !v22 )
        goto LABEL_47;
      v23 = *a1;
      v24 = *(_QWORD *)(*a1 + 192);
      if ( v24 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( *(_DWORD *)(v23 + 48) )
        {
          sub_14016D910(*a1, v4);
          ++*(_QWORD *)(v23 + 192);
        }
      }
      else
      {
        *(_QWORD *)(v23 + 192) = v24 + 1;
      }
      sub_1401604F0(*a1, v4);
      sub_1401604F0(*a1, v25);
      v27 = *a1;
      v28 = *(unsigned __int8 **)(*a1 + 192);
      if ( (unsigned __int64)v28 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( !*(_DWORD *)(v27 + 48) )
        {
          v29 = 0;
          goto LABEL_46;
        }
        sub_14016D910(*a1, v26);
        v28 = *(unsigned __int8 **)(v27 + 192);
      }
      v29 = *v28;
      *(_QWORD *)(v27 + 192) = v28 + 1;
LABEL_46:
      v7 -= 6;
      *((_DWORD *)a1 + 4627) = v29;
      goto LABEL_47;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v79 ^ v83);
}

