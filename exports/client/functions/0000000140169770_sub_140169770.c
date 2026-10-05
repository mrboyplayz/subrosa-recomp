/* Address: 0x140169770 | Name: sub_140169770 | Size: 2715 bytes */
__int64 __fastcall sub_140169770(__int64 a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v5; // r14
  char v6; // r15
  __int64 v7; // r13
  char *v10; // rax
  unsigned __int64 v11; // rcx
  _BYTE *v12; // rsi
  int v13; // eax
  char v14; // bp
  char *v15; // rax
  int v16; // eax
  char v17; // dl
  char *v18; // rax
  int v19; // eax
  char v20; // dl
  char *v21; // rax
  char v22; // cl
  int v23; // eax
  char *v24; // rax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // r12d
  _BYTE *v29; // rax
  __int64 v30; // rdx
  _BYTE *v31; // r13
  int v32; // ecx
  int v33; // ecx
  unsigned __int8 *v34; // rdi
  unsigned __int8 *v35; // rax
  unsigned __int8 v36; // cl
  unsigned __int8 *v37; // rax
  unsigned int v38; // r15d
  unsigned __int8 *v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int8 *v41; // rax
  int v42; // r15d
  unsigned __int8 v43; // cl
  int v44; // r15d
  unsigned __int8 *v45; // rax
  unsigned __int8 v46; // cl
  int v47; // ebp
  int v48; // esi
  __int64 v49; // rdi
  char *v50; // rax
  unsigned __int64 v51; // rcx
  char v52; // cl
  char *v53; // rax
  char v54; // al
  char v55; // r8
  char v56; // r9
  __int64 v57; // rcx
  int v58; // r14d
  int v59; // ebp
  int v60; // esi
  __int64 v61; // rdi
  char *v62; // rax
  unsigned __int64 v63; // rcx
  char v64; // cl
  char *v65; // rax
  int v66; // r15d
  unsigned __int8 *v67; // r12
  unsigned __int8 *v68; // rax
  unsigned __int8 v69; // di
  unsigned __int8 *v70; // rax
  int v71; // ebp
  int v72; // esi
  unsigned __int8 v73; // r14
  __int64 j; // rdi
  char *v75; // rax
  unsigned __int64 v76; // rcx
  char v77; // cl
  char *v78; // rax
  char v79; // al
  __int64 v80; // rcx
  char v81; // r8
  char v82; // r9
  int v83; // r15d
  int v84; // r14d
  int v85; // ebp
  __int64 i; // rsi
  char *v87; // rax
  unsigned __int64 v88; // rcx
  char v89; // cl
  int v90; // eax
  char *v91; // rax
  const char *v92; // rdx
  __int64 v93; // rax
  __int64 v95; // [rsp+0h] [rbp-C8h] BYREF
  int v96; // [rsp+20h] [rbp-A8h]
  _BYTE v97[4]; // [rsp+24h] [rbp-A4h]
  _BYTE v98[4]; // [rsp+28h] [rbp-A0h]
  int v99; // [rsp+2Ch] [rbp-9Ch]
  int v100; // [rsp+30h] [rbp-98h]
  int v101; // [rsp+34h] [rbp-94h]
  __int64 *v102; // [rsp+38h] [rbp-90h]
  char *v103; // [rsp+40h] [rbp-88h]
  __int64 v104; // [rsp+48h] [rbp-80h]
  __int64 v105; // [rsp+50h] [rbp-78h]
  __int64 v106; // [rsp+58h] [rbp-70h]
  _BYTE *v107; // [rsp+60h] [rbp-68h]
  _QWORD v108[5]; // [rsp+68h] [rbp-60h] BYREF

  v5 = v108;
  v6 = 0;
  v7 = 0;
  v105 = a5;
  v99 = a3;
  v96 = a2;
  do
  {
    if ( v7 == 10 )
      goto LABEL_190;
    v10 = *(char **)(a1 + 192);
    ++v7;
    v11 = *(_QWORD *)(a1 + 200);
    v12 = v5;
    v5 = (_QWORD *)((char *)v5 + 3);
    v106 = v7;
    if ( (unsigned __int64)v10 >= v11 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v14 = 0;
        goto LABEL_12;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v13 )
      {
        v11 = v13 + a1 + 56;
        *(_QWORD *)(a1 + 200) = v11;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        v11 = *(_QWORD *)(a1 + 200);
      }
      v10 = *(char **)(a1 + 192);
    }
    v14 = *v10;
    v15 = v10 + 1;
    *(_QWORD *)(a1 + 192) = v15;
    if ( (unsigned __int64)v15 < v11 )
      goto LABEL_17;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v16 )
      {
        v11 = v16 + a1 + 56;
        *(_QWORD *)(a1 + 200) = v11;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        v11 = *(_QWORD *)(a1 + 200);
      }
      v15 = *(char **)(a1 + 192);
LABEL_17:
      v17 = *v15;
      v18 = v15 + 1;
      *(_QWORD *)(a1 + 192) = v18;
      *v12 = v17;
      if ( (unsigned __int64)v18 < v11 )
        goto LABEL_25;
      goto LABEL_20;
    }
    *v12 = 0;
LABEL_20:
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v12[1] = 0;
      goto LABEL_28;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
            *(_QWORD *)(a1 + 40),
            a1 + 56,
            *(unsigned int *)(a1 + 52));
    *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 192) = a1 + 56;
    if ( v19 )
    {
      v11 = v19 + a1 + 56;
      *(_QWORD *)(a1 + 200) = v11;
    }
    else
    {
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 200) = a1 + 57;
      *(_BYTE *)(a1 + 56) = 0;
      v11 = *(_QWORD *)(a1 + 200);
    }
    v18 = *(char **)(a1 + 192);
LABEL_25:
    v20 = *v18;
    v21 = v18 + 1;
    *(_QWORD *)(a1 + 192) = v21;
    v12[1] = v20;
    if ( (unsigned __int64)v21 < v11 )
    {
      v22 = *v21;
      *(_QWORD *)(a1 + 192) = v21 + 1;
      goto LABEL_34;
    }
LABEL_28:
    if ( *(_DWORD *)(a1 + 48) )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v23 )
      {
        *(_QWORD *)(a1 + 200) = v23 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v24 = *(char **)(a1 + 192);
      v22 = *v24;
      *(_QWORD *)(a1 + 192) = v24 + 1;
    }
    else
    {
      v22 = 0;
    }
LABEL_34:
    v6 |= v22;
    v12[2] = v22;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_38;
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_189;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
LABEL_38:
    if ( *v12 != 8 )
      goto LABEL_190;
  }
  while ( v14 );
  v25 = 0;
  v101 = 0;
  *a4 = ((v6 & 0x10) != 0) + 3;
  if ( v99 <= 0 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v95 ^ v108[4]);
  v26 = v99;
  v102 = (__int64 *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
  while ( 1 )
  {
    v27 = 0;
    v100 = 0;
    v104 = 0;
    if ( v7 > 0 )
      break;
LABEL_184:
    v101 = ++v25;
    if ( v25 >= v26 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v95 ^ v108[4]);
  }
  v28 = v96;
  v29 = (_BYTE *)(v105 + 4 * v25 * v96);
  v107 = v29;
LABEL_44:
  v30 = 3 * v27;
  v31 = v29;
  v32 = *((unsigned __int8 *)v108 + 3 * v27 + 1);
  if ( !v32 )
  {
    v83 = 0;
    if ( v28 <= 0 )
      goto LABEL_182;
    v84 = *((unsigned __int8 *)v108 + v30 + 2);
    while ( 1 )
    {
      v85 = 128;
      for ( i = 0; i < 4; ++i )
      {
        if ( (v85 & v84) == 0 )
          goto LABEL_177;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_167;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_167:
          v87 = *(char **)(a1 + 192);
          v88 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)v87 >= v88 )
          {
LABEL_188:
            v92 = "bad file";
            v93 = *v102;
LABEL_191:
            *(_QWORD *)(v93 + 16) = v92;
            return MEMORY[0x1401F8B20]((unsigned __int64)&v95 ^ v108[4]);
          }
          goto LABEL_168;
        }
        v87 = *(char **)(a1 + 192);
        v88 = *(_QWORD *)(a1 + 200);
LABEL_168:
        if ( (unsigned __int64)v87 >= v88 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v90 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v90 )
            {
              *(_QWORD *)(a1 + 200) = v90 + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            v91 = *(char **)(a1 + 192);
            v89 = *v91;
            *(_QWORD *)(a1 + 192) = v91 + 1;
          }
          else
          {
            v89 = 0;
          }
        }
        else
        {
          v89 = *v87;
          *(_QWORD *)(a1 + 192) = v87 + 1;
        }
        v31[i] = v89;
LABEL_177:
        v85 >>= 1;
      }
      if ( !v31 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v95 ^ v108[4]);
      ++v83;
      v31 += 4;
      if ( v83 >= v28 )
      {
LABEL_182:
        ++v100;
        v27 = v104 + 1;
        v7 = v106;
        v29 = v107;
        v104 = v27;
        if ( v27 >= v106 )
        {
          v25 = v101;
          v26 = v99;
          goto LABEL_184;
        }
        goto LABEL_44;
      }
    }
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    v66 = v28;
    if ( v28 <= 0 )
      goto LABEL_182;
    v67 = (unsigned __int8 *)v108 + v30 + 2;
    while ( 1 )
    {
      v68 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v68 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v30);
          v70 = *(unsigned __int8 **)(a1 + 192);
          v69 = *v70;
          *(_QWORD *)(a1 + 192) = v70 + 1;
        }
        else
        {
          v69 = 0;
        }
      }
      else
      {
        v69 = *v68;
        *(_QWORD *)(a1 + 192) = v68 + 1;
      }
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_129;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        break;
LABEL_130:
      v71 = *v67;
      v72 = 128;
      v73 = v66;
      if ( v69 <= (unsigned int)v66 )
        v73 = v69;
      for ( j = 0; j < 4; ++j )
      {
        if ( (v72 & v71) == 0 )
          goto LABEL_145;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_138;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_138:
          v75 = *(char **)(a1 + 192);
          v76 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)v75 >= v76 )
            goto LABEL_188;
          goto LABEL_139;
        }
        v75 = *(char **)(a1 + 192);
        v76 = *(_QWORD *)(a1 + 200);
LABEL_139:
        if ( (unsigned __int64)v75 >= v76 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1, v30);
            v78 = *(char **)(a1 + 192);
            v77 = *v78;
            *(_QWORD *)(a1 + 192) = v78 + 1;
          }
          else
          {
            v77 = 0;
          }
        }
        else
        {
          v77 = *v75;
          *(_QWORD *)(a1 + 192) = v75 + 1;
        }
        v98[j] = v77;
LABEL_145:
        v72 >>= 1;
      }
      if ( v73 )
      {
        v79 = v98[0];
        v80 = v73;
        v30 = v98[3];
        v81 = v98[2];
        v82 = v98[1];
        do
        {
          if ( (v71 & 0x80u) != 0 )
            *v31 = v79;
          if ( (v71 & 0x40) != 0 )
            v31[1] = v82;
          if ( (v71 & 0x20) != 0 )
            v31[2] = v81;
          if ( (v71 & 0x10) != 0 )
            v31[3] = v30;
          v31 += 4;
          --v80;
        }
        while ( v80 );
      }
      v66 -= v73;
      if ( v66 <= 0 )
      {
        v28 = v96;
        goto LABEL_182;
      }
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_189;
LABEL_129:
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
    goto LABEL_130;
  }
  if ( v33 != 1 )
  {
LABEL_190:
    v93 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v92 = "bad format";
    goto LABEL_191;
  }
  if ( v96 <= 0 )
  {
    v28 = v96;
    goto LABEL_182;
  }
  v34 = (unsigned __int8 *)v108 + v30 + 2;
  v103 = (char *)v108 + v30 + 2;
  while ( 2 )
  {
    v35 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, v30);
        v37 = *(unsigned __int8 **)(a1 + 192);
        v36 = *v37;
        *(_QWORD *)(a1 + 192) = v37 + 1;
      }
      else
      {
        v36 = 0;
      }
    }
    else
    {
      v36 = *v35;
      *(_QWORD *)(a1 + 192) = v35 + 1;
    }
    v38 = v36;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_189;
        goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_189;
    }
    if ( v38 >= 0x80 )
    {
      if ( v38 == 128 )
      {
        v39 = *(unsigned __int8 **)(a1 + 192);
        v40 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v39 < v40 )
          goto LABEL_63;
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v30);
          v39 = *(unsigned __int8 **)(a1 + 192);
          v40 = *(_QWORD *)(a1 + 200);
LABEL_63:
          v30 = *v39;
          v41 = v39 + 1;
          *(_QWORD *)(a1 + 192) = v41;
          v42 = (unsigned __int8)v30;
          if ( (unsigned __int64)v41 < v40 )
          {
            v43 = *v41;
            *(_QWORD *)(a1 + 192) = v41 + 1;
            v44 = v43 + ((unsigned __int8)v30 << 8);
            goto LABEL_70;
          }
        }
        else
        {
          v42 = 0;
        }
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v30);
          v45 = *(unsigned __int8 **)(a1 + 192);
          v46 = *v45;
          *(_QWORD *)(a1 + 192) = v45 + 1;
          v44 = v46 + (v42 << 8);
        }
        else
        {
          v44 = v42 << 8;
        }
      }
      else
      {
        v44 = v38 - 127;
      }
LABEL_70:
      if ( v44 > v28 )
        goto LABEL_189;
      v47 = *v34;
      v48 = 128;
      v49 = 0;
LABEL_72:
      if ( (v48 & v47) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            v50 = *(char **)(a1 + 192);
            v51 = *(_QWORD *)(a1 + 200);
            goto LABEL_78;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        v50 = *(char **)(a1 + 192);
        v51 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v50 >= v51 )
          goto LABEL_188;
LABEL_78:
        if ( (unsigned __int64)v50 >= v51 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1, v30);
            v53 = *(char **)(a1 + 192);
            v52 = *v53;
            *(_QWORD *)(a1 + 192) = v53 + 1;
          }
          else
          {
            v52 = 0;
          }
        }
        else
        {
          v52 = *v50;
          *(_QWORD *)(a1 + 192) = v50 + 1;
        }
        v97[v49] = v52;
      }
      ++v49;
      v48 >>= 1;
      if ( v49 >= 4 )
      {
        if ( v44 > 0 )
        {
          v54 = v97[0];
          v30 = v97[3];
          v55 = v97[2];
          v56 = v97[1];
          v57 = (unsigned int)v44;
          do
          {
            if ( (v47 & 0x80u) != 0 )
              *v31 = v54;
            if ( (v47 & 0x40) != 0 )
              v31[1] = v56;
            if ( (v47 & 0x20) != 0 )
              v31[2] = v55;
            if ( (v47 & 0x10) != 0 )
              v31[3] = v30;
            v31 += 4;
            --v57;
          }
          while ( v57 );
        }
LABEL_116:
        v34 = (unsigned __int8 *)v103;
LABEL_117:
        v28 -= v44;
        if ( v28 <= 0 )
        {
          v28 = v96;
          goto LABEL_182;
        }
        continue;
      }
      goto LABEL_72;
    }
    break;
  }
  v44 = v38 + 1;
  if ( v44 > (unsigned int)v28 )
  {
LABEL_189:
    v93 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v92 = "bad file";
    goto LABEL_191;
  }
  v58 = 0;
  if ( !v44 )
    goto LABEL_117;
  v59 = *v34;
  while ( 2 )
  {
    v60 = 128;
    v61 = 0;
    while ( 2 )
    {
      if ( (v60 & v59) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            v62 = *(char **)(a1 + 192);
            v63 = *(_QWORD *)(a1 + 200);
            goto LABEL_107;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        v62 = *(char **)(a1 + 192);
        v63 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v62 >= v63 )
          goto LABEL_188;
LABEL_107:
        if ( (unsigned __int64)v62 >= v63 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1, v30);
            v65 = *(char **)(a1 + 192);
            v64 = *v65;
            *(_QWORD *)(a1 + 192) = v65 + 1;
          }
          else
          {
            v64 = 0;
          }
        }
        else
        {
          v64 = *v62;
          *(_QWORD *)(a1 + 192) = v62 + 1;
        }
        v31[v61] = v64;
      }
      ++v61;
      v60 >>= 1;
      if ( v61 < 4 )
        continue;
      break;
    }
    if ( v31 )
    {
      ++v58;
      v31 += 4;
      if ( v58 >= v44 )
        goto LABEL_116;
      continue;
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v95 ^ v108[4]);
  }
}

