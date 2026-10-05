#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140200244) ----------------------------------------------------
__int64            sub_140200244(__int64 a1)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF

  v7 = *sub_1401FEC0C(&v8, 0);
  sub_1401FE248((DName *)&v5, (     struct StringLiteral *)&v7);
  v2 = **(_BYTE **)&dword_140404A6C[19064555];
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    sub_1401FEABC((__int64)&v5, 1u);
    goto LABEL_9;
  }
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v2 == 48 )
  {
    DWORD2(v7) = 4;
    *(_QWORD *)&v7 = (uint64)(uintptr_t)("void");
    sub_1401FE888((__int64)&v5, (__int64)&v7);
    goto LABEL_9;
  }
  if ( v2 == 50 )
  {
    v3 = sub_140203DE0((__int64)&v8);
    sub_1401FE908((__int64)&v5, v3);
    goto LABEL_9;
  }
  if ( v2 != 53 )
  {
LABEL_9:
    DWORD2(v7) = 2;
    *(_QWORD *)&v7 = (uint64)(uintptr_t)(") ");
    sub_1401FE888((__int64)&v5, (__int64)&v7);
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v6;
    return a1;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 2;
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020033C) ----------------------------------------------------
DName *           sub_14020033C(DName *a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned __int8 *v5; // r8
  char *v6; // rdx
  int v7; // r8d
  unsigned int v8; // ebx
  int v9; // r8d
  char *v10; // rdx
  DName *v11; // rbx
  DName *v12; // rax
  __int64 v13; // r8
       char **v14; // rcx
  __int64 v15; // rax
       char *v16; // rcx
  int v17; // edx
  int v18; // eax
       char *v19; // rdx
  int v20; // ecx
  int v21; // ecx
  int v22; // ebx
  __int64 v23; // rax
  unsigned __int8 v24; // bl
       char *v25; // rax
  DName *v26; // rax
       char *v28; // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+28h] [rbp-28h]
       char *v30; // [rsp+30h] [rbp-20h] BYREF
  int v31; // [rsp+38h] [rbp-18h]
       char *v32; // [rsp+40h] [rbp-10h] BYREF
  int v33; // [rsp+48h] [rbp-8h]

  v4 = (unsigned __int8)**(_BYTE **)&dword_140404A6C[19064555];
  if ( !(_BYTE)v4 )
  {
    v33 = 0;
    v32 = (     char *)&off_1402848D0;
    v14 = &v32;
    v13 = a2;
    goto LABEL_86;
  }
  v28 = nullptr;
  v5 = (unsigned __int8 *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
  v29 = 0;
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v4 <= 0x4E )
  {
    if ( v4 != 78 )
    {
      if ( v4 >= 0x43 )
      {
        if ( v4 <= 0x45 )
        {
          v7 = 4;
          v6 = "char";
          goto LABEL_12;
        }
        if ( v4 <= 0x47 )
        {
          v6 = "short";
          goto LABEL_11;
        }
        if ( v4 <= 0x49 )
        {
          v7 = 3;
          v6 = "int";
          goto LABEL_12;
        }
        if ( v4 <= 0x4B )
        {
          v7 = 4;
          v6 = "long";
          goto LABEL_12;
        }
        if ( v4 == 77 )
        {
          v6 = "float";
LABEL_11:
          v7 = 5;
LABEL_12:
          sub_1401FDF84((__int64)&v28, v6, v7);
LABEL_74:
          if ( (_BYTE)v4 == 67 )
          {
            v25 = "signed ";
            v33 = 7;
            goto LABEL_81;
          }
          if ( (((_BYTE)v4 - 69) & 0xF9) != 0 )
            goto LABEL_82;
LABEL_79:
          v25 = "unsigned ";
          v33 = 9;
LABEL_81:
          v32 = v25;
          v26 = sub_1401FE248((DName *)&v30, (     struct StringLiteral *)&v32);
          sub_1401FE7C0((__int64)v26, (__int64)&v32, (__int64)&v28);
          v28 = v32;
          v29 = v33;
LABEL_82:
          if ( *(_QWORD *)a2 )
          {
            v32 = nullptr;
            v33 = 0;
            sub_1401FFB98((sr_anon_89 *)&v32, 32);
            sub_1401FE7C0((__int64)&v32, (__int64)&v30, a2);
            sub_1401FE908((__int64)&v28, (__int64)&v30);
          }
          *(_QWORD *)a1 = (uint64)(uintptr_t)(v28);
          *((_DWORD *)a1 + 2) = v29;
          return a1;
        }
      }
      goto LABEL_70;
    }
LABEL_73:
    v33 = 6;
    v32 = "double";
    sub_1401FE888((__int64)&v28, (__int64)&v32);
    goto LABEL_74;
  }
  if ( v4 == 79 )
  {
    sub_1401FDF84((__int64)&v28, "long ", 5);
    goto LABEL_73;
  }
  if ( v4 <= 0x53 )
  {
    v18 = v4 & 3;
  }
  else
  {
    if ( v4 == 88 )
    {
      v7 = 4;
      v6 = "void";
      goto LABEL_12;
    }
    if ( (_BYTE)v4 != 95 )
    {
LABEL_70:
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5 - 1);
      v23 = sub_14020197C((__int64)&v32);
      v16 = *(     char **)v23;
      v17 = *(_DWORD *)(v23 + 8);
      v28 = v16;
      v29 = v17;
      if ( v16 )
        goto LABEL_74;
LABEL_47:
      *(_QWORD *)a1 = (uint64)(uintptr_t)(v16);
      *((_DWORD *)a1 + 2) = v17;
      return a1;
    }
    v8 = *v5;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5 + 1);
    if ( v8 <= 0x4E )
    {
      if ( v8 == 78 )
      {
        v9 = 4;
        v10 = "bool";
        goto LABEL_55;
      }
      if ( v8 > 0x47 )
      {
        if ( v8 <= 0x49 )
        {
          v10 = "__int32";
        }
        else
        {
          if ( v8 > 0x4B )
          {
            v9 = 8;
            v10 = "__int128";
            goto LABEL_55;
          }
          v10 = "__int64";
        }
      }
      else
      {
        if ( v8 < 0x46 )
        {
          if ( (_BYTE)v8 )
          {
            if ( v8 != 36 )
            {
              if ( v8 - 68 <= 1 )
              {
                v9 = 6;
                v10 = "__int8";
LABEL_55:
                sub_1401FDF84((__int64)&v28, v10, v9);
                goto LABEL_77;
              }
LABEL_48:
              v10 = "UNKNOWN";
              goto LABEL_54;
            }
            v33 = 6;
            v32 = "__w64 ";
            v11 = sub_14020033C((DName *)&v30, a2);
            v12 = sub_1401FE248((DName *)&v28, (     struct StringLiteral *)&v32);
            v13 = (__int64)v11;
            v14 = (     char **)v12;
LABEL_86:
            sub_1401FE7C0((__int64)v14, (__int64)a1, v13);
            return a1;
          }
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5);
          v28 = (     char *)&off_1402848D0;
          v29 = 1;
LABEL_77:
          v24 = v8 - 69;
          if ( v24 > 8u || (v24 & 1) != 0 )
            goto LABEL_82;
          goto LABEL_79;
        }
        v10 = "__int16";
      }
LABEL_54:
      v9 = 7;
      goto LABEL_55;
    }
    if ( v8 != 79 )
    {
      switch ( v8 )
      {
        case 'Q':
          v10 = "char8_t";
          goto LABEL_54;
        case 'R':
          v9 = 9;
          v10 = "<unknown>";
          goto LABEL_55;
        case 'S':
          v9 = 8;
          v10 = "char16_t";
          goto LABEL_55;
        case 'U':
          v9 = 8;
          v10 = "char32_t";
          goto LABEL_55;
        case 'W':
          v10 = "wchar_t";
          goto LABEL_54;
      }
      if ( v8 <= 0x57 || (unsigned __int8)v8 > 0x59u )
        goto LABEL_48;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5);
      v15 = sub_14020197C((__int64)&v32);
      v16 = *(     char **)v15;
      v17 = *(_DWORD *)(v15 + 8);
      v28 = v16;
      v29 = v17;
      if ( !v16 )
        goto LABEL_47;
      goto LABEL_77;
    }
    v18 = -2;
  }
  v28 = nullptr;
  v29 = 0;
  v19 = *(     char **)a2;
  v20 = *(_DWORD *)(a2 + 8);
  v32 = v19;
  v33 = v20;
  if ( v18 == -2 )
  {
    v33 = v20 | 0x800;
    sub_14020353C((DName *)&v30, &v28, (__int64)&v32, 0);
    v21 = v31;
    if ( (v31 & 0x800) == 0 )
    {
      v33 = 2;
      v32 = "[]";
      sub_1401FE888((__int64)&v30, (__int64)&v32);
      v21 = v31;
    }
    *(_QWORD *)a1 = (uint64)(uintptr_t)(v30);
    *((_DWORD *)a1 + 2) = v21;
  }
  else
  {
    if ( !v19 )
    {
      v22 = v18 & 2;
      if ( (v18 & 1) != 0 )
      {
        sub_1401FDF84((__int64)&v28, "const", 5);
        if ( v22 )
        {
          v31 = 9;
          v30 = " volatile";
          sub_1401FE888((__int64)&v28, (__int64)&v30);
        }
      }
      else if ( (v18 & 2) != 0 )
      {
        sub_1401FDF84((__int64)&v28, "volatile", 8);
      }
    }
    sub_14020353C(a1, &v28, (__int64)&v32, 1);
  }
  return a1;
}

// 140200411: conditional instruction was optimized away because esi.4 is in (50..FF)
// 140200502: conditional instruction was optimized away because ebx.4 is in (4C..4D)
// 140200797: conditional instruction was optimized away because si.1 is in (1..42|44..4F|54..5E|>=60u)
// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140200880) ----------------------------------------------------
__m128i *           sub_140200880(UnDecorator *this, __m128i *a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __m128i *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int Str2; // [rsp+58h] [rbp+20h] BYREF

  v3 = (int)a3;
  v4 = a2;
  sub_140205C58((__int64)v9, (__int64)a2, a3);
  if ( v9[8] )
    return nullptr;
  if ( !dword_140404A6C[19064563] )
    return nullptr;
  v5 = -1;
  v6 = -1;
  do
    ++v6;
  while ( *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064557] + v6) );
  if ( dword_140404A6C[19064563] >= v6 )
    return nullptr;
  Str2 = 6824996;
  do
    ++v5;
  while ( *((_BYTE *)&Str2 + v5) );
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[19064557] + dword_140404A6C[19064563]), (const char *)(uintptr_t)(&Str2), v5) )
    return nullptr;
  v7 = v5 + v6 + 1;
  if ( v7 < v6 )
    return nullptr;
  if ( v4 )
  {
    if ( v7 >= v3 )
      return nullptr;
  }
  else
  {
    v4 = (__m128i *)(*(__int64 (           **)(unsigned __int64))&dword_140404A6C[19064565])((v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v4 )
      return nullptr;
  }
  sub_1401FC920(v4, *(     __m128i **)&dword_140404A6C[19064557], dword_140404A6C[19064563]);
  sub_1401FC920((__m128i *)((char *)v4 + dword_140404A6C[19064563]), (     __m128i *)&Str2, v5);
  sub_1401FC920(
    (__m128i *)((char *)v4 + v5 + dword_140404A6C[19064563]),
    (     __m128i *)(dword_140404A6C[19064563] + *(_QWORD *)&dword_140404A6C[19064557]),
    v6 - dword_140404A6C[19064563] + 1);
  return v4;
}

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402009A0) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1402009A0(__int64 a1)
{
  sub_1402017C8(a1, 0);
  return a1;
}


//----- (00000001402009BC) ----------------------------------------------------
__int64            sub_1402009BC(__int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // edx
  int v4; // edx
  _OWORD *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return a1;
  }
  v2 = (char)**(_BYTE **)&dword_140404A6C[19064555] - 65;
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v2 > 0x14 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  v8 = 2;
  v7 = 0;
  if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
  {
    v3 = v2 & 0xFFFFFFFE;
    if ( v3 > 0xC )
    {
      switch ( v3 )
      {
        case 0xEu:
          v4 = 8;
          goto LABEL_25;
        case 0x10u:
          v4 = 6;
          goto LABEL_25;
        case 0x12u:
          v4 = 9;
          goto LABEL_25;
        case 0x14u:
          v4 = 10;
          goto LABEL_25;
      }
    }
    else
    {
      switch ( v3 )
      {
        case 0xCu:
          v4 = 7;
          goto LABEL_25;
        case 0u:
          v4 = 1;
          goto LABEL_25;
        case 2u:
          v4 = 2;
          goto LABEL_25;
        case 4u:
          v4 = 4;
          goto LABEL_25;
        case 6u:
          v4 = 3;
          goto LABEL_25;
        case 8u:
          v4 = 5;
LABEL_25:
          v5 = sub_1401FEC0C(&v9, v4);
          v8 = 0;
          sub_1401FDF84((__int64)&v7, *(char **)v5, *((_DWORD *)v5 + 2));
          break;
      }
    }
  }
  *(_QWORD *)a1 = v7;
  *(_DWORD *)(a1 + 8) = v8;
  return a1;
}

// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140200AFC) ----------------------------------------------------
__int64            sub_140200AFC(__int64 a1, __int64 a2, int a3, _QWORD *a4, int a5)
{
  int v8; // r13d
  int v9; // eax
  __int64 v10; // r12
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // edx
  __int64 v16; // rax
  char *v17; // rdx
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  _OWORD *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  DName *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // cl
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  DName *v45; // rax
  DName *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int128 *v50; // rdx
  _QWORD *v51; // r8
  int v52; // ebx
  __int64 v53; // rax
  _QWORD *v54; // r8
  __int128 *v55; // rcx
  _BYTE v57[8]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v58; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v59; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-B0h]
  __int64 v61; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-98h] BYREF
  int v64; // [rsp+78h] [rbp-90h]
  _BYTE v65[16]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v66; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+98h] [rbp-70h]
  _BYTE v68[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v69; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v70[16]; // [rsp+C0h] [rbp-48h] BYREF
  char v71; // [rsp+D0h] [rbp-38h] BYREF
  char v72; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v73; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v74[16]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v75[16]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v76; // [rsp+120h] [rbp+18h] BYREF
  __int128 v77; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v78[24]; // [rsp+140h] [rbp+38h] BYREF
  int v79; // [rsp+198h] [rbp+90h] BYREF

  v79 = a3;
  v66 = 0;
  v67 = 0;
  v57[0] = 0;
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( !a5 )
    {
      if ( *(_QWORD *)a2 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 && *a4 )
        {
          DWORD2(v58) = 0;
          *(_QWORD *)&v58 = (uint64)(uintptr_t)(&off_1402848D0);
          sub_1401FE7C0((__int64)&v58, (__int64)&v66, (__int64)a4);
          v53 = sub_1401FE7EC((__int64)&v66, (__int64)v65, 32);
          v54 = (_QWORD *)a2;
          v55 = (__int128 *)v53;
LABEL_97:
          sub_1401FE7C0((__int64)v55, a1, (__int64)v54);
          return a1;
        }
        v54 = (_QWORD *)a2;
LABEL_99:
        DWORD2(v58) = 0;
        *(_QWORD *)&v58 = (uint64)(uintptr_t)(&off_1402848D0);
        v55 = &v58;
        goto LABEL_97;
      }
      if ( *a4 )
      {
        v54 = a4;
        goto LABEL_99;
      }
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return a1;
  }
  v8 = a5;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 36 )
  {
    sub_140201C9C((__int64)&v61, &v79, v57, a5);
    if ( v61 )
    {
      *(_QWORD *)a1 = v61;
      v9 = v62;
      goto LABEL_5;
    }
  }
  v10 = 0;
  v63 = 0;
  v64 = 0;
  v61 = 0;
  v11 = 22;
  v12 = (char)**(_BYTE **)&dword_140404A6C[19064555];
  LODWORD(v62) = 0;
  LOWORD(v60) = 0;
  v13 = 0;
  if ( (char)v12 >= 65 )
    v11 = 65;
  v14 = v12 - v11;
  while ( 1 )
  {
    switch ( v14 )
    {
      case 4u:
        if ( (~((dword_140404A6C[19064559] | HIWORD(dword_140404A6C[19064559])) >> 1) & 1) == 0 )
          break;
        v15 = 11;
        if ( !v10 )
        {
          v19 = v65;
          goto LABEL_31;
        }
        v59 = *sub_1401FEC0C(&v77, 11);
        v16 = sub_1401FE7EC((__int64)&v63, (__int64)v78, 32);
        v17 = v68;
        goto LABEL_17;
      case 5u:
        if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
        {
          if ( v13 )
          {
            v59 = *sub_1401FEC0C(&v73, 13);
            v20 = sub_1401FE7EC((__int64)&v61, (__int64)v74, 32);
            v21 = sub_1401FE794(v20, (__int64)v75, (__int64)&v59);
            v22 = *(_QWORD *)v21;
            LODWORD(v21) = *(_DWORD *)(v21 + 8);
            v61 = v22;
            LODWORD(v62) = v21;
          }
          else
          {
            v23 = sub_1401FEC0C(&v76, 13);
            v61 = 0;
            LODWORD(v62) = 0;
            sub_1401FDF84((__int64)&v61, *(char **)v23, *((_DWORD *)v23 + 2));
          }
        }
        break;
      case 6u:
        if ( !v8 )
          goto LABEL_57;
        LOBYTE(v60) = 1;
        break;
      case 7u:
        if ( !v8 )
          goto LABEL_57;
        BYTE1(v60) = 1;
        break;
      case 8u:
        if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
        {
          v15 = 12;
          if ( !v10 )
          {
            v19 = &v72;
LABEL_31:
            v24 = sub_1401FEC0C(v19, v15);
            v63 = 0;
            v64 = 0;
            sub_1401FDF84((__int64)&v63, *(char **)v24, *((_DWORD *)v24 + 2));
            v10 = v63;
            break;
          }
          v59 = *sub_1401FEC0C(&v69, 12);
          v16 = sub_1401FE7EC((__int64)&v63, (__int64)v70, 32);
          v17 = &v71;
LABEL_17:
          v18 = sub_1401FE794(v16, (__int64)v17, (__int64)&v59);
          v10 = *(_QWORD *)v18;
          LODWORD(v18) = *(_DWORD *)(v18 + 8);
          v63 = v10;
          v64 = v18;
        }
        break;
      default:
        if ( **(_BYTE **)&dword_140404A6C[19064555] )
          ++*(_QWORD *)&dword_140404A6C[19064555];
        if ( v14 > 0x1F )
          goto LABEL_57;
        v58 = *((_OWORD *)&off_140283B20 + v79);
        sub_1401FE248((DName *)&v59, (     struct StringLiteral *)&v58);
        v26 = sub_1401FE7C0((__int64)&v66, (__int64)v65, (__int64)&v59);
        v29 = *(_DWORD *)(v26 + 8);
        *(_QWORD *)&v59 = *(_QWORD *)v26;
        DWORD2(v59) = v29;
        if ( v10 )
        {
          v30 = sub_1401FE7EC((__int64)&v59, (__int64)v65, 32);
          v31 = sub_1401FE7C0(v30, (__int64)v68, (__int64)&v63);
          v29 = *(_DWORD *)(v31 + 8);
          *(_QWORD *)&v59 = *(_QWORD *)v31;
          DWORD2(v59) = v29;
        }
        if ( v61 )
        {
          v32 = sub_1401FE7EC((__int64)&v61, (__int64)v65, 32);
          v33 = sub_1401FE7C0(v32, (__int64)v68, (__int64)&v59);
          v29 = *(_DWORD *)(v33 + 8);
          *(_QWORD *)&v59 = *(_QWORD *)v33;
          DWORD2(v59) = v29;
        }
        if ( (v14 & 0x10) != 0 )
        {
          if ( v8 )
          {
LABEL_57:
            *(_DWORD *)(a1 + 8) = 0;
            *(_BYTE *)(a1 + 8) = 2;
            *(_QWORD *)a1 = 0;
            return a1;
          }
          if ( SDWORD2(v58) > 0 )
          {
            DWORD2(v58) = 2;
            *(_QWORD *)&v58 = (uint64)(uintptr_t)("::");
            v34 = sub_1401FE248((DName *)v65, (     struct StringLiteral *)&v58);
            sub_1401FE7C0((__int64)v34, (__int64)&v58, (__int64)&v59);
            *(_QWORD *)&v59 = v58;
            DWORD2(v59) = DWORD2(v58);
            if ( **(_BYTE **)&dword_140404A6C[19064555] )
            {
              v37 = sub_14020392C((__int64)v65, v35, v36);
              v38 = sub_1401FE7C0(v37, (__int64)v68, (__int64)&v59);
              v29 = *(_DWORD *)(v38 + 8);
              *(_QWORD *)&v59 = *(_QWORD *)v38;
            }
            else
            {
              DWORD2(v58) = 0;
              *(_QWORD *)&v58 = (uint64)(uintptr_t)(&off_1402848D0);
              sub_1401FE7C0((__int64)&v58, (__int64)&v66, (__int64)&v59);
              v29 = v67;
              *(_QWORD *)&v59 = v66;
            }
LABEL_54:
            DWORD2(v59) = v29;
            goto LABEL_55;
          }
          if ( !**(_BYTE **)&dword_140404A6C[19064555] )
            goto LABEL_58;
          v39 = sub_14020392C((__int64)v65, v27, v28);
          if ( BYTE8(v59) != 3 && *(char *)(v39 + 8) > 1 )
          {
            v29 = *(unsigned __int8 *)(v39 + 8) | v29 & 0xFFFFFF00;
            goto LABEL_54;
          }
LABEL_55:
          v40 = **(_BYTE **)&dword_140404A6C[19064555];
          if ( **(_BYTE **)&dword_140404A6C[19064555] )
          {
            ++*(_QWORD *)&dword_140404A6C[19064555];
            if ( v40 != 64 )
              goto LABEL_57;
          }
          else
          {
LABEL_58:
            sub_1401FEABC((__int64)&v59, 1u);
            v29 = DWORD2(v59);
          }
        }
        v41 = v14 & 0xC;
        if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
        {
          if ( v41 == 12 )
          {
            if ( v8 )
              goto LABEL_57;
            v42 = sub_140200244((__int64)v65);
            v43 = sub_1401FE7C0(v42, (__int64)v68, (__int64)&v59);
            v29 = *(_DWORD *)(v43 + 8);
            *(_QWORD *)&v59 = *(_QWORD *)v43;
LABEL_67:
            DWORD2(v59) = v29;
          }
        }
        else if ( v41 == 12 )
        {
          v44 = sub_140200244((__int64)v65);
          if ( BYTE8(v59) != 3 && *(char *)(v44 + 8) > 1 )
          {
            v29 = *(unsigned __int8 *)(v44 + 8) | v29 & 0xFFFFFF00;
            goto LABEL_67;
          }
        }
        if ( (v14 & 2) != 0 )
        {
          DWORD2(v58) = 9;
          *(_QWORD *)&v58 = (uint64)(uintptr_t)("volatile ");
          v45 = sub_1401FE248((DName *)v65, (     struct StringLiteral *)&v58);
          sub_1401FE7C0((__int64)v45, (__int64)&v58, (__int64)&v59);
          v29 = DWORD2(v58);
          *(_QWORD *)&v59 = v58;
          DWORD2(v59) = DWORD2(v58);
        }
        if ( (v14 & 1) != 0 )
        {
          DWORD2(v58) = 6;
          *(_QWORD *)&v58 = (uint64)(uintptr_t)("const ");
          v46 = sub_1401FE248((DName *)v65, (     struct StringLiteral *)&v58);
          sub_1401FE7C0((__int64)v46, (__int64)&v58, (__int64)&v59);
          v29 = DWORD2(v58);
          *(_QWORD *)&v59 = v58;
          DWORD2(v59) = DWORD2(v58);
        }
        if ( (_BYTE)v60 )
        {
          DWORD2(v58) = 2;
          *(_QWORD *)&v58 = (uint64)(uintptr_t)("& ");
          v47 = sub_1401FE794((__int64)&v59, (__int64)v65, (__int64)&v58);
          v29 = *(_DWORD *)(v47 + 8);
          *(_QWORD *)&v59 = *(_QWORD *)v47;
          DWORD2(v59) = v29;
        }
        if ( BYTE1(v60) )
        {
          DWORD2(v58) = 3;
          *(_QWORD *)&v58 = (uint64)(uintptr_t)("&& ");
          v48 = sub_1401FE794((__int64)&v59, (__int64)v65, (__int64)&v58);
          v29 = *(_DWORD *)(v48 + 8);
          *(_QWORD *)&v59 = *(_QWORD *)v48;
          DWORD2(v59) = v29;
        }
        if ( !v8 )
        {
          if ( *(_QWORD *)a2 )
          {
            v29 = *(_DWORD *)(a2 + 8);
            if ( (v29 & 0x100) == 0 && *a4 )
            {
              v61 = 0;
              LODWORD(v62) = 0;
              sub_1401FFB98((sr_anon_89 *)&v61, 32);
              sub_1401FE7C0((__int64)&v61, (__int64)&v58, (__int64)a4);
              v49 = sub_1401FE7EC((__int64)&v58, (__int64)v65, 32);
              v50 = (__int128 *)sub_1401FE7C0(v49, (__int64)v68, a2);
              goto LABEL_87;
            }
            if ( (v29 & 0x800) != 0 )
            {
              *(_QWORD *)&v59 = *(_QWORD *)a2;
              goto LABEL_88;
            }
            v61 = 0;
            LODWORD(v62) = 0;
            sub_1401FFB98((sr_anon_89 *)&v61, 32);
            v51 = (_QWORD *)a2;
          }
          else
          {
            if ( !*a4 )
              goto LABEL_88;
            v61 = 0;
            LODWORD(v62) = 0;
            sub_1401FFB98((sr_anon_89 *)&v61, 32);
            v51 = a4;
          }
          sub_1401FE7C0((__int64)&v61, (__int64)&v58, (__int64)v51);
          v50 = &v58;
LABEL_87:
          sub_1401FE908((__int64)&v59, (__int64)v50);
          v29 = DWORD2(v59);
        }
LABEL_88:
        v52 = v29 | 0x100;
        if ( v57[0] )
          v52 |= 0x2000u;
        *(_QWORD *)a1 = v59;
        *(_DWORD *)(a1 + 8) = v52;
        return a1;
    }
    ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 36 )
    {
      sub_140201C9C((__int64)&v58, &v79, v57, v8);
      if ( (_QWORD)v58 )
        break;
    }
    v25 = 22;
    if ( (char)**(_BYTE **)&dword_140404A6C[19064555] >= 65 )
      v25 = 65;
    v14 = (char)**(_BYTE **)&dword_140404A6C[19064555] - v25;
    v13 = v61;
  }
  *(_QWORD *)a1 = v58;
  v9 = DWORD2(v58);
LABEL_5:
  *(_DWORD *)(a1 + 8) = v9;
  return a1;
}

// 140200F5D: variable 'v35' is possibly undefined
// 140200F5D: variable 'v36' is possibly undefined
// 140200FC3: variable 'v27' is possibly undefined
// 140200FC3: variable 'v28' is possibly undefined
// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 140283B20: using guessed type char (*off_140283B20)[7];
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140201394) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140201394(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp-10h]

  v3 = 0;
  v5 = 0;
  v4 = 0;
  v6 = 0;
  sub_140200AFC(a1, (__int64)&v5, 0, &v3, 0);
  return a1;
}


//----- (00000001402013D0) ----------------------------------------------------
DName *           sub_1402013D0(DName *a1, struct DName *a2)
{
       char **v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
       char *v8; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+48h] [rbp-18h]
  _BYTE v10[16]; // [rsp+50h] [rbp-10h] BYREF

  sub_1401FE2A4((DName *)&v6, a2);
  switch ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    case 0:
      v9 = 0;
      v8 = (     char *)&off_1402848D0;
      v3 = &v8;
      goto LABEL_10;
    case 0x3F:
      v8 = nullptr;
      v9 = 0;
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v4 = sub_140200AFC((__int64)v10, (__int64)&v6, 0, &v8, 0);
      v6 = *(_QWORD *)v4;
      v7 = *(_DWORD *)(v4 + 8);
      break;
    case 0x58:
      ++*(_QWORD *)&dword_140404A6C[19064555];
      if ( !v6 )
      {
        v9 = 4;
        v8 = "void";
        sub_1401FE248(a1, (     struct StringLiteral *)&v8);
        return a1;
      }
      v9 = 5;
      v8 = "void ";
      v3 = (     char **)sub_1401FE248((DName *)v10, (     struct StringLiteral *)&v8);
LABEL_10:
      sub_1401FE7C0((__int64)v3, (__int64)a1, (__int64)&v6);
      return a1;
  }
  sub_1402030E0(a1, (__int64)&v6);
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1401FE2A4: using guessed type DName *__fastcall sub_1401FE2A4(DName *this, struct DName *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402014E4) ----------------------------------------------------
__int64            sub_1402014E4(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  _BYTE *i; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // esi
  __int64 v11; // r14
  BOOL v12; // r12d
  int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-50h] BYREF
  int v25; // [rsp+38h] [rbp-48h]
       char *v26; // [rsp+40h] [rbp-40h] BYREF
  int v27; // [rsp+48h] [rbp-38h]
  _BYTE v28[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[32]; // [rsp+60h] [rbp-20h] BYREF

  ++dword_140404A6C[19064564];
  if ( (dword_140404A6C[19064559] & 0x2000) != 0 )
  {
    dword_140404A6C[19064559] &= ~0x2000u;
    sub_1402013D0((DName *)&v24, nullptr);
    dword_140404A6C[19064559] |= 0x2000u;
LABEL_3:
    *(_QWORD *)a1 = v24;
    *(_DWORD *)(a1 + 8) = v25;
    goto LABEL_47;
  }
  v4 = **(_BYTE **)&dword_140404A6C[19064555];
  LOBYTE(a2) = 63;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5);
    if ( *v5 == 63 )
    {
      v6 = v5 + 1;
      if ( *v6 == 63 )
      {
        sub_1402014E4((__int64)&v24, a2, a3);
        for ( i = *(_BYTE **)&dword_140404A6C[19064555]; *i; *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i) )
          ++i;
        goto LABEL_3;
      }
      if ( *v6 == 36 )
      {
        sub_1402045BC((__int64)&v22, 1);
      }
      else
      {
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6);
        sub_14020285C(&v22, 0, nullptr);
      }
    }
    else
    {
      sub_140205810((__int64)&v22, 1, 0);
    }
    v10 = v23;
    v11 = v22;
    v12 = v22 && (v23 & 0x200) != 0;
    v13 = (v23 >> 15) & 1;
    if ( (char)v23 > 1 )
    {
LABEL_20:
      *(_QWORD *)a1 = v11;
      *(_DWORD *)(a1 + 8) = v10;
      goto LABEL_47;
    }
    if ( (**(_BYTE **)&dword_140404A6C[19064555] & 0xBF) != 0 )
    {
      sub_14020392C((__int64)&v24, v8, v9);
      if ( v24 )
      {
        if ( !LOBYTE(dword_140404A6C[19064560]) )
        {
          v26 = "::";
          v27 = 2;
          v18 = sub_1401FE794((__int64)&v24, (__int64)v29, (__int64)&v26);
          v19 = v28;
          goto LABEL_27;
        }
        LOBYTE(dword_140404A6C[19064560]) = 0;
        v14 = sub_1401FE7C0((__int64)&v22, (__int64)&v26, (__int64)&v24);
        v11 = *(_QWORD *)v14;
        v22 = *(_QWORD *)v14;
        v10 = *(_DWORD *)(v14 + 8);
        v23 = v10;
        if ( **(_BYTE **)&dword_140404A6C[19064555] != 64 )
        {
          v17 = sub_14020392C((__int64)&v26, v15, v16);
          v24 = *(_QWORD *)v17;
          v25 = *(_DWORD *)(v17 + 8);
          v26 = "::";
          v27 = 2;
          v18 = sub_1401FE794((__int64)&v24, (__int64)v28, (__int64)&v26);
          v19 = v29;
LABEL_27:
          v20 = sub_1401FE7C0(v18, (__int64)v19, (__int64)&v22);
          v10 = *(_DWORD *)(v20 + 8);
          v11 = *(_QWORD *)v20;
          v23 = v10;
          v22 = v11;
        }
      }
    }
    if ( v12 && v11 )
    {
      v10 |= 0x200u;
      v23 = v10;
    }
    if ( v13 )
    {
      v10 |= 0x8000u;
      v23 = v10;
    }
    if ( v11 && (v10 & 0x1000) == 0 )
    {
      if ( **(_BYTE **)&dword_140404A6C[19064555] )
      {
        if ( **(_BYTE **)&dword_140404A6C[19064555] != 64 )
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_BYTE *)(a1 + 8) = 2;
          *(_QWORD *)a1 = 0;
          goto LABEL_47;
        }
        ++*(_QWORD *)&dword_140404A6C[19064555];
      }
      if ( (dword_140404A6C[19064559] & 0x1000) == 0 || v12 || (v10 & 0x8000) != 0 )
      {
        sub_1401FEC58(a1, &v22);
        goto LABEL_47;
      }
      v26 = nullptr;
      v27 = 0;
      sub_1401FEC58((__int64)v29, (__int64 *)&v26);
    }
    goto LABEL_20;
  }
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v4 )
    *(_BYTE *)(a1 + 8) = 2;
  else
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
LABEL_47:
  --dword_140404A6C[19064564];
  return a1;
}

// 140201611: variable 'v8' is possibly undefined
// 140201611: variable 'v9' is possibly undefined
// 140201663: variable 'v15' is possibly undefined
// 140201663: variable 'v16' is possibly undefined
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE62C: using guessed type unsigned int;
// 144CBE63C: using guessed type unsigned int;

//----- (00000001402017C8) ----------------------------------------------------
__int64            sub_1402017C8(__int64 a1, char a2)
{
  char *v3; // rcx
  char v5; // bl
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  DName *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  DName *v11; // rax
  __int64 *v12; // rax
  DName *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  _UNKNOWN ***v16; // rax
  char v17; // cl
  unsigned __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  char v20; // [rsp+28h] [rbp-38h]
  _BYTE v21[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-10h] BYREF

  v3 = *(char **)&dword_140404A6C[19064555];
  v5 = 0;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 81 )
  {
    v3 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
    v5 = 1;
    ++*(_QWORD *)&dword_140404A6C[19064555];
  }
  v6 = *v3;
  if ( (_BYTE)v6 )
  {
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      sub_1402053CC((__int64)&v19);
      if ( !v20 )
      {
        v16 = &off_1402848D0;
        if ( **(_BYTE **)&dword_140404A6C[19064555] )
          v16 = nullptr;
        v17 = -**(_BYTE **)&dword_140404A6C[19064555];
        *(_QWORD *)a1 = (uint64)(uintptr_t)(v16);
        v15 = v17 != 0 ? 2 : 0;
        goto LABEL_24;
      }
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v7 = v19;
      if ( a2 )
      {
        if ( !v5 )
        {
          v12 = (__int64 *)sub_1401FE364((DName *)v21, v19);
          goto LABEL_12;
        }
        v9 = sub_1401FE364((DName *)v23, v19);
        goto LABEL_9;
      }
      if ( v5 )
      {
        v8 = (DName *)v23;
        goto LABEL_8;
      }
      v13 = (DName *)v21;
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
      if ( v5 )
      {
        v7 = (int)v6 - 47;
        v8 = (DName *)v21;
LABEL_8:
        v9 = sub_1401FE40C(v8, v7);
LABEL_9:
        v10 = v9;
        v11 = sub_1401FE248((DName *)v22, (     struct StringLiteral *)&off_1403020D0);
        sub_1401FE7C0((__int64)v11, (__int64)&v19, v10);
        v12 = (__int64 *)&v19;
LABEL_12:
        v14 = *v12;
        v15 = *((_DWORD *)v12 + 2);
        *(_QWORD *)a1 = v14;
LABEL_24:
        *(_DWORD *)(a1 + 8) = v15;
        return a1;
      }
      v7 = v6 - 47;
      v13 = (DName *)v23;
    }
    v12 = (__int64 *)sub_1401FE40C(v13, v7);
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 1403020D0: using guessed type char *off_1403020D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140201914) ----------------------------------------------------
__int64            sub_140201914(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)&dword_140404A6C[19064555];
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 95
    && *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) == 95
    && (*(_QWORD *)&dword_140404A6C[19064555] += 2LL,
        v2 = *(char *)(v1 + 2) - 65,
        *(_QWORD *)&dword_140404A6C[19064555] = v1 + 3,
        v2 > 3) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140201960) ----------------------------------------------------
__int64            sub_140201960(__int64 a1)
{
  sub_1402017C8(a1, 1);
  return a1;
}


//----- (000000014020197C) ----------------------------------------------------
__int64            sub_14020197C(__int64 a1)
{
  int v2; // r8d
  DName *v3; // rax
  int v5; // r8d
  char *v6; // rdx
  __int64 v7; // rbx
  DName *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+28h] [rbp-48h]
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-10h] BYREF

  v2 = (char)**(_BYTE **)&dword_140404A6C[19064555];
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    *(_QWORD *)&v11 = 0;
    DWORD2(v11) = 0;
    if ( (_BYTE)v2 == 87 )
    {
      if ( (dword_140404A6C[19064559] & 0x8000) != 0 )
        goto LABEL_5;
    }
    else if ( (~(dword_140404A6C[19064559] >> 15) & 1) == 0 || (dword_140404A6C[19064559] & 0x1000) != 0 )
    {
LABEL_5:
      ++*(_QWORD *)&dword_140404A6C[19064555];
      if ( (_BYTE)v2 == 87 )
        sub_140201B74((__int64)v14);
      goto LABEL_7;
    }
    v9 = 0;
    v10 = 0;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    switch ( v2 )
    {
      case 'T':
        v6 = "union ";
        break;
      case 'U':
        v5 = 7;
        v6 = "struct ";
        goto LABEL_24;
      case 'V':
        v6 = "class ";
        break;
      default:
        switch ( v2 )
        {
          case 'W':
            DWORD2(v12) = 5;
            *(_QWORD *)&v12 = (uint64)(uintptr_t)("enum ");
            v7 = sub_140201B74((__int64)v13);
            v8 = sub_1401FE248((DName *)v14, (     struct StringLiteral *)&v12);
            sub_1401FE7C0((__int64)v8, (__int64)&v12, v7);
            v9 = v12;
            v10 = DWORD2(v12);
            break;
          case 'X':
            v5 = 8;
            v6 = "coclass ";
            goto LABEL_24;
          case 'Y':
            v5 = 12;
            v6 = "cointerface ";
LABEL_24:
            sub_1401FDF84((__int64)&v9, v6, v5);
            break;
        }
        *(_QWORD *)&v11 = v9;
        DWORD2(v11) = v10;
LABEL_7:
        sub_140203DE0((__int64)&v12);
        sub_1401FE908((__int64)&v11, (__int64)&v12);
        *(_QWORD *)a1 = v11;
        *(_DWORD *)(a1 + 8) = DWORD2(v11);
        return a1;
    }
    v5 = 6;
    goto LABEL_24;
  }
  DWORD2(v11) = 14;
  *(_QWORD *)&v11 = (uint64)(uintptr_t)("`unknown ecsu'");
  v12 = v11;
  v3 = sub_1401FE248((DName *)&v11, (     struct StringLiteral *)&v12);
  sub_1401FE844((__int64)v3, a1, 1u);
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140201B5C) ----------------------------------------------------
__int64            sub_140201B5C(__int64 a1)
{
  sub_140203DE0(a1);
  return a1;
}


//----- (0000000140201B74) ----------------------------------------------------
__int64            sub_140201B74(__int64 a1)
{
  char v2; // al
  char *v3; // rdx
  int v4; // r8d
  char v5; // cl
  DName *v6; // rax
       char *v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
       char *v10; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+38h] [rbp-18h]
  _BYTE v12[16]; // [rsp+40h] [rbp-10h] BYREF

  v8 = nullptr;
  v9 = 0;
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return a1;
  }
  v2 = **(_BYTE **)&dword_140404A6C[19064555];
  if ( (char)**(_BYTE **)&dword_140404A6C[19064555] < 48 )
    goto LABEL_19;
  if ( v2 <= 49 )
  {
    v3 = "char ";
    goto LABEL_12;
  }
  if ( v2 <= 51 )
  {
    v4 = 6;
    v3 = "short ";
    goto LABEL_13;
  }
  if ( v2 != 52 )
  {
    if ( v2 != 53 )
    {
      if ( (unsigned __int8)(v2 - 54) <= 1u )
      {
        v3 = "long ";
LABEL_12:
        v4 = 5;
        goto LABEL_13;
      }
LABEL_19:
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
      return a1;
    }
    v4 = 4;
    v3 = "int ";
LABEL_13:
    sub_1401FDF84((__int64)&v8, v3, v4);
  }
  v5 = **(_BYTE **)&dword_140404A6C[19064555];
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( ((v5 - 49) & 0xF9) == 0 && v5 != 55 || v5 == 55 )
  {
    v11 = 9;
    v10 = "unsigned ";
    v6 = sub_1401FE248((DName *)v12, (     struct StringLiteral *)&v10);
    sub_1401FE7C0((__int64)v6, (__int64)&v10, (__int64)&v8);
    v8 = v10;
    v9 = v11;
  }
  *(_QWORD *)a1 = (uint64)(uintptr_t)(v8);
  *(_DWORD *)(a1 + 8) = v9;
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140201C9C) ----------------------------------------------------
__int64            sub_140201C9C(__int64 a1, _DWORD *a2, _BYTE *a3, int a4)
{
  char *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _UNKNOWN ***v11; // rcx
  int v12; // edx
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _UNKNOWN ***v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+28h] [rbp-28h]
  _BYTE v19[16]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-10h] BYREF

  v17 = nullptr;
  v18 = 0;
  v5 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
  *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5);
  switch ( *v5 )
  {
    case 'A':
      if ( !a4 )
      {
        if ( (unsigned int)(*a2 - 2) <= 1 )
        {
          *a2 = 5;
          goto LABEL_30;
        }
        if ( *a2 == 1 )
        {
          *a2 = 4;
LABEL_30:
          v5 = *(char **)&dword_140404A6C[19064555];
        }
      }
      v15 = (__int64)(v5 + 1);
      goto LABEL_32;
    case 'B':
      if ( a4 )
        goto LABEL_22;
      *a3 = 1;
      sub_1401FFB98((sr_anon_89 *)&v17, 62);
      goto LABEL_24;
    case 'C':
      *a2 = 5;
LABEL_24:
      v15 = *(_QWORD *)&dword_140404A6C[19064555] + 1LL;
LABEL_32:
      *(_QWORD *)a1 = 0;
      *(_QWORD *)&dword_140404A6C[19064555] = v15;
      goto LABEL_33;
  }
  if ( !*v5 || !v5[1] )
  {
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
LABEL_33:
    *(_DWORD *)(a1 + 8) = 0;
    return a1;
  }
  if ( a4 )
  {
LABEL_22:
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
    return a1;
  }
  v6 = 16 * *v5 + v5[1] - 816;
  *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5 + 2);
  if ( v6 > 1 )
  {
    sub_1401FFB98((sr_anon_89 *)&v17, 44);
    v7 = sub_1401FE40C((DName *)v19, v6);
    v8 = sub_1401FE7C0((__int64)&v17, (__int64)v20, v7);
    v9 = *(_QWORD *)v8;
    LODWORD(v8) = *(_DWORD *)(v8 + 8);
    v17 = (_UNKNOWN ***)v9;
    v18 = v8;
  }
  v10 = sub_1401FE7EC((__int64)&v17, (__int64)v20, 62);
  v11 = *(_UNKNOWN ****)v10;
  v12 = *(_DWORD *)(v10 + 8);
  v17 = *(_UNKNOWN ****)v10;
  v18 = v12;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 36 )
  {
    v13 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
  }
  else
  {
    v14 = sub_1401FE7EC((__int64)&v17, (__int64)v20, 94);
    v11 = *(_UNKNOWN ****)v14;
    v12 = *(_DWORD *)(v14 + 8);
    v13 = *(_BYTE **)&dword_140404A6C[19064555];
    v17 = v11;
    v18 = v12;
  }
  if ( *v13 )
  {
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v13 + 1);
  }
  else if ( (char)v18 <= 1 )
  {
    if ( v11 )
    {
      sub_1401FDDF4((unsigned __int64 *)&v17, (__int64)&off_1402848D0);
      v12 = v18;
      v11 = v17;
    }
    else
    {
      v12 = 1;
      v11 = &off_1402848D0;
    }
  }
  *(_QWORD *)a1 = (uint64)(uintptr_t)(v11);
  *(_DWORD *)(a1 + 8) = v12 | 0x4000;
  return a1;
}

// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140201EA4) ----------------------------------------------------
DName *           sub_140201EA4(DName *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  struct DName *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-40h]
  char v13[16]; // [rsp+50h] [rbp-38h] BYREF
  char v14[16]; // [rsp+60h] [rbp-28h] BYREF
  char v15[16]; // [rsp+70h] [rbp-18h] BYREF

  v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
  v5 = (struct DName *)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0;
    *(_DWORD *)(v4 + 8) = 0;
  }
  else
  {
    v5 = nullptr;
  }
  sub_1402013D0(a1, v5);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  sub_140200AFC((__int64)v13, (__int64)&v11, 0, &v9, 0);
  v6 = sub_1401FE7EC((__int64)v13, (__int64)v14, 32);
  v7 = sub_1401FE7C0(v6, (__int64)v15, a2);
  *(_QWORD *)v5 = *(_QWORD *)v7;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(v7 + 8);
  return a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140201F64) ----------------------------------------------------
__int64            sub_140201F64(DName *a1, int a2)
{
  int v4; // eax
  long double v5; // xmm3_8
  _UNKNOWN ***v6; // rax
  char v7; // cl
  __int64 v9; // [rsp+0h] [rbp-98h] BYREF
  long double v10; // [rsp+20h] [rbp-78h] BYREF
  char v11; // [rsp+28h] [rbp-70h]
  char v12[80]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+80h] [rbp-18h]

  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    *((_DWORD *)a1 + 2) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return sub_1401F8B20((unsigned __int64)&v9 ^ v13);
  }
  if ( (unsigned __int8)(**(_BYTE **)&dword_140404A6C[19064555] - 48) <= 9u )
  {
    v4 = (char)**(_BYTE **)&dword_140404A6C[19064555] - 47;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    sub_1401FE40C(a1, v4);
    return sub_1401F8B20((unsigned __int64)&v9 ^ v13);
  }
  sub_1402053CC((__int64)&v10);
  if ( v11 )
  {
    if ( a2 == 66 )
    {
      v5 = v10;
LABEL_8:
      sub_140158C70(v12, 65, (__int64)"%lf", v5);
      sub_1401FDBF8((__int64)a1, v12);
      return sub_1401F8B20((unsigned __int64)&v9 ^ v13);
    }
    if ( a2 == 65 )
    {
      v5 = *(float *)&v10;
      goto LABEL_8;
    }
  }
  v6 = &off_1402848D0;
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
    v6 = nullptr;
  v7 = -**(_BYTE **)&dword_140404A6C[19064555];
  *(_QWORD *)a1 = (uint64)(uintptr_t)(v6);
  *((_DWORD *)a1 + 2) = v7 != 0 ? 2 : 0;
  return sub_1401F8B20((unsigned __int64)&v9 ^ v13);
}

// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140202084) ----------------------------------------------------
__int64            sub_140202084(__int64 a1, __int64 *a2)
{
  __int128 *v4; // rcx
  __int64 *v5; // r8
  int v6; // esi
  _BYTE *v7; // rcx
  _BYTE *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  int v11; // r12d
  DName *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  _BYTE *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  struct DName *v31; // rsi
  DName *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  DName *v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v43; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v44; // [rsp+40h] [rbp-31h]
  __int64 v45; // [rsp+48h] [rbp-29h] BYREF
  int v46; // [rsp+50h] [rbp-21h]
  __int128 v47; // [rsp+58h] [rbp-19h] BYREF
  __int64 v48; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-1h]
  __int128 v50; // [rsp+78h] [rbp+7h] BYREF
  __int64 v51; // [rsp+88h] [rbp+17h] BYREF
  int v52; // [rsp+90h] [rbp+1Fh]
  _BYTE v53[16]; // [rsp+98h] [rbp+27h] BYREF

  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
    goto LABEL_2;
  if ( (unsigned __int8)(**(_BYTE **)&dword_140404A6C[19064555] - 54) > 3u
    && **(_BYTE **)&dword_140404A6C[19064555] != 95 )
  {
    goto LABEL_63;
  }
  v6 = (char)**(_BYTE **)&dword_140404A6C[19064555] - 54;
  v7 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v6 != 41 )
  {
    if ( v6 < 0 )
      goto LABEL_63;
    v8 = v7;
    if ( v6 > 3 )
      goto LABEL_63;
    goto LABEL_13;
  }
  if ( *v7 )
  {
    v8 = v7 + 1;
    v6 = (char)*v7 - 61;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(++v7);
    if ( (unsigned int)(v6 - 4) > 3 )
      v6 = -1;
LABEL_13:
    if ( v6 != -1 )
    {
      v9 = *a2;
      v10 = *((_DWORD *)a2 + 2);
      v45 = 0;
      v46 = 0;
      v43 = v9;
      v44 = v10;
      v11 = v6 & 2;
      if ( (v6 & 2) == 0 )
        goto LABEL_26;
      if ( *v7 == 64 )
      {
        v18 = v8 + 1;
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v8 + 1);
      }
      else
      {
        DWORD2(v47) = 2;
        *(_QWORD *)&v47 = (uint64)(uintptr_t)("::");
        v50 = v47;
        v12 = sub_1401FE248((DName *)&v48, (     struct StringLiteral *)&v50);
        sub_1401FE7C0((__int64)v12, (__int64)&v47, (__int64)&v43);
        v43 = v47;
        v44 = DWORD2(v47);
        if ( **(_BYTE **)&dword_140404A6C[19064555] )
        {
          v15 = sub_14020392C((__int64)&v48, v13, v14);
          *(_QWORD *)&v47 = 0;
          DWORD2(v47) = 0;
          v16 = v15;
          sub_1401FFB98((sr_anon_89 *)&v47, 32);
          sub_1401FE7C0((__int64)&v47, (__int64)&v50, v16);
          v17 = sub_1401FE7C0((__int64)&v50, (__int64)v53, (__int64)&v43);
          v10 = *(_DWORD *)(v17 + 8);
          v43 = *(_QWORD *)v17;
        }
        else
        {
          DWORD2(v47) = 0;
          *(_QWORD *)&v47 = (uint64)(uintptr_t)(&off_1402848D0);
          sub_1401FE7C0((__int64)&v47, (__int64)&v48, (__int64)&v43);
          v10 = v49;
          v43 = v48;
        }
        v18 = *(_BYTE **)&dword_140404A6C[19064555];
        v44 = v10;
      }
      if ( !*v18 )
      {
        DWORD2(v50) = 0;
        v5 = &v43;
        *(_QWORD *)&v50 = (uint64)(uintptr_t)(&off_1402848D0);
        v4 = &v50;
        goto LABEL_3;
      }
      if ( *v18 == 64 )
      {
        v48 = 0;
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v18 + 1);
        v49 = 0;
        if ( (dword_140404A6C[19064559] & 0x60) == 0x60 )
        {
          *(_QWORD *)&v50 = 0;
          DWORD2(v50) = 0;
          sub_140200AFC((__int64)&v47, (__int64)&v48, 0, &v50, 1);
          if ( SBYTE8(v47) <= 1 )
          {
LABEL_26:
            if ( (v6 & 4) == 0 )
              goto LABEL_36;
            if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
            {
              v20 = sub_140200244((__int64)v53);
              *(_QWORD *)&v47 = 0;
              DWORD2(v47) = 0;
              v21 = v20;
              sub_1401FFB98((sr_anon_89 *)&v47, 32);
              sub_1401FE7C0((__int64)&v47, (__int64)&v50, v21);
              v22 = sub_1401FE7C0((__int64)&v50, (__int64)&v48, (__int64)&v43);
              v10 = *(_DWORD *)(v22 + 8);
              v43 = *(_QWORD *)v22;
            }
            else
            {
              v23 = sub_140200244((__int64)v53);
              if ( (_BYTE)v44 == 3 || *(char *)(v23 + 8) <= 1 )
              {
LABEL_36:
                if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
                {
                  v24 = sub_1402009BC((__int64)v53);
                  v25 = sub_1401FE7C0(v24, (__int64)&v50, (__int64)&v43);
                  v26 = *(_QWORD *)v25;
                  LODWORD(v25) = *(_DWORD *)(v25 + 8);
                  v43 = v26;
                  v44 = v25;
                }
                else
                {
                  v27 = sub_1402009BC((__int64)v53);
                  if ( (_BYTE)v44 != 3 && *(char *)(v27 + 8) > 1 )
                    v44 = *(unsigned __int8 *)(v27 + 8) | v10 & 0xFFFFFF00;
                }
                if ( *a2 )
                {
                  *(_QWORD *)&v47 = 0;
                  DWORD2(v47) = 0;
                  sub_1401FFB98((sr_anon_89 *)&v47, 40);
                  sub_1401FE7C0((__int64)&v47, (__int64)&v50, (__int64)&v43);
                  v28 = sub_1401FE7EC((__int64)&v50, (__int64)v53, 41);
                  v29 = *(_QWORD *)v28;
                  LODWORD(v28) = *(_DWORD *)(v28 + 8);
                  v43 = v29;
                  v44 = v28;
                }
                v30 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
                v31 = (struct DName *)v30;
                if ( v30 )
                {
                  *(_QWORD *)v30 = 0;
                  *(_DWORD *)(v30 + 8) = 0;
                }
                else
                {
                  v31 = nullptr;
                }
                sub_1402038F8((DName *)&v51, v31);
                v32 = sub_1401FFDD8((DName *)v53);
                *(_QWORD *)&v47 = 0;
                DWORD2(v47) = 0;
                v33 = (__int64)v32;
                sub_1401FFB98((sr_anon_89 *)&v47, 40);
                sub_1401FE7C0((__int64)&v47, (__int64)&v50, v33);
                v34 = sub_1401FE7EC((__int64)&v50, (__int64)&v48, 41);
                sub_1401FE908((__int64)&v43, v34);
                v35 = dword_140404A6C[19064559];
                if ( (dword_140404A6C[19064559] & 0x60) != 0x60 && v11 )
                {
                  sub_1401FE908((__int64)&v43, (__int64)&v45);
                  v35 = dword_140404A6C[19064559];
                }
                if ( (v35 & 0x80000) != 0 )
                {
                  v37 = sub_14020372C((__int64)v53);
                  if ( (_BYTE)v44 != 3 && *(char *)(v37 + 8) > 1 )
                    v44 = *(unsigned __int8 *)(v37 + 8) | v44 & 0xFFFFFF00;
                }
                else
                {
                  v36 = sub_14020372C((__int64)v53);
                  sub_1401FE908((__int64)&v43, v36);
                }
                v38 = sub_140202784((DName *)v53);
                sub_1401FE908((__int64)&v43, (__int64)v38);
                if ( (~(dword_140404A6C[19064559] >> 8) & 1) != 0 )
                {
                  v39 = sub_140204E68((__int64)v53);
                  sub_1401FE908((__int64)&v43, v39);
                }
                else
                {
                  v41 = sub_140204E68((__int64)v53);
                  if ( (_BYTE)v44 != 3 && *(char *)(v41 + 8) > 1 )
                  {
                    v40 = *(unsigned __int8 *)(v41 + 8) | v44 & 0xFFFFFF00;
                    goto LABEL_57;
                  }
                }
                v40 = v44;
LABEL_57:
                if ( v31 )
                {
                  *(_QWORD *)v31 = v43;
                  *((_DWORD *)v31 + 2) = v40;
                  *(_QWORD *)a1 = v51;
                  *(_DWORD *)(a1 + 8) = v52;
                  return a1;
                }
                *(_DWORD *)(a1 + 8) = 0;
                *(_BYTE *)(a1 + 8) = 3;
LABEL_64:
                *(_QWORD *)a1 = 0;
                return a1;
              }
              v10 = *(unsigned __int8 *)(v23 + 8) | v10 & 0xFFFFFF00;
            }
            v44 = v10;
            goto LABEL_36;
          }
          v19 = BYTE8(v47);
        }
        else
        {
          *(_QWORD *)&v47 = 0;
          DWORD2(v47) = 0;
          sub_140200AFC((__int64)&v50, (__int64)&v47, 0, &v48, 1);
          v45 = v50;
          v19 = DWORD2(v50);
        }
        v46 = v19;
        goto LABEL_26;
      }
    }
LABEL_63:
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 2;
    goto LABEL_64;
  }
LABEL_2:
  DWORD2(v47) = 0;
  *(_QWORD *)&v47 = (uint64)(uintptr_t)(&off_1402848D0);
  v4 = &v47;
  v5 = a2;
LABEL_3:
  sub_1401FE7C0((__int64)v4, a1, (__int64)v5);
  return a1;
}

// 1402021D4: variable 'v13' is possibly undefined
// 1402021D4: variable 'v14' is possibly undefined
// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE628: using guessed type unsigned int;

//----- (00000001402025BC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1402025BC(__int64 a1)
{
  sub_1402017C8(a1, 0);
  return a1;
}


//----- (0000000140202604) ----------------------------------------------------
__int64            sub_140202604(pDNameNode *this)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((__int64 **)this + 1);
  result = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return (*(__int64 (           **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140202630) ----------------------------------------------------
__int64            sub_140202630(pairNode *this)
{
  __int64 result; // rax

  result = (*(__int64 (           **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  if ( !(_BYTE)result )
    return (*(__int64 (           **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014020267C) ----------------------------------------------------
__int64            sub_14020267C(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = sub_1402017C8((__int64)v7, 0);
  sub_1401FFB98((sr_anon_89 *)&v4, 96);
  sub_1401FE7C0((__int64)&v4, (__int64)v6, v2);
  sub_1401FE7EC((__int64)v6, a1, 39);
  return a1;
}


//----- (00000001402026E0) ----------------------------------------------------
unsigned __int64            sub_1402026E0(_HeapManager *this, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rbx

  v2 = *((_QWORD *)this + 4);
  v3 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v3 )
    v3 = 8;
  if ( v2 >= v3 )
    goto LABEL_10;
  v2 = 4096;
  if ( v3 <= 0x1000 )
  {
    v5 = (_QWORD *)sub_1401FE568(4104, (struct _HeapManager *)&dword_140404A6C[19064565], 1);
    if ( v5 )
    {
      *v5 = 0;
      v6 = *((_QWORD **)this + 3);
      if ( v6 )
        *v6 = (uint64)(uintptr_t)(v5);
      else
        *((_QWORD *)this + 2) = (uint64)(uintptr_t)(v5);
      *((_QWORD *)this + 3) = (uint64)(uintptr_t)(v5);
LABEL_10:
      v7 = v2 - v3;
      *((_QWORD *)this + 4) = v7;
      return v7 + *((_QWORD *)this + 3) + 8LL;
    }
  }
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140202784) ----------------------------------------------------
DName *           sub_140202784(DName *a1)
{
       char *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  if ( **(_WORD **)&dword_140404A6C[19064555] == 17759 )
  {
    v4 = 9;
    *(_QWORD *)&dword_140404A6C[19064555] += 2LL;
    v3 = " noexcept";
    sub_1401FE248(a1, (     struct StringLiteral *)&v3);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
  }
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402027E8) ----------------------------------------------------
__int64 sub_1402027E8()
{
  _BYTE *v0; // rcx
  int v1; // edx
  unsigned int v3; // r8d
  char v4; // al

  v0 = *(_BYTE **)&dword_140404A6C[19064555];
  v1 = (char)**(_BYTE **)&dword_140404A6C[19064555];
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
    return 0;
  if ( (unsigned __int8)(v1 - 48) > 9u )
  {
    v3 = 0;
    while ( (_BYTE)v1 != 64 )
    {
      if ( !(_BYTE)v1 )
        return 0;
      if ( (unsigned __int8)(v1 - 65) > 0xFu )
        return 0xFFFFFFFFLL;
      v3 = (char)v1 + 16 * v3 - 65;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(++v0);
      LOBYTE(v1) = *v0;
    }
    v4 = *v0;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v0 + 1);
    if ( v4 != 64 )
      return 0xFFFFFFFFLL;
    return v3;
  }
  else
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    return (unsigned int)(v1 - 47);
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020285C) ----------------------------------------------------
_DWORD *           sub_14020285C(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  char v5; // cl
  char *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  DName *v9; // rax
  int v10; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
       char *v17; // rcx
  char *v18; // rax
  int v19; // ecx
  char *v20; // rdx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  char v24; // cl
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  char v28; // cl
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rcx
  _DWORD *v40; // rax
  int v41; // edx
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  _DWORD *v46; // rax
  char v47; // dl
  char v48; // cl
       char *v49; // [rsp+20h] [rbp-50h] BYREF
  int v50; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h] BYREF
  int v52; // [rsp+38h] [rbp-38h]
  __int64 v53; // [rsp+40h] [rbp-30h] BYREF
  int v54; // [rsp+48h] [rbp-28h]
       char *v55; // [rsp+50h] [rbp-20h] BYREF
  int v56; // [rsp+58h] [rbp-18h]
  _DWORD v57[4]; // [rsp+60h] [rbp-10h] BYREF

  v49 = nullptr;
  v50 = 0;
  v51 = 0;
  v5 = **(_BYTE **)&dword_140404A6C[19064555];
  v6 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
  v52 = 0;
  v7 = 0;
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v5 <= 65 )
  {
    if ( v5 != 65 )
    {
      if ( v5 )
      {
        if ( v5 <= 47 )
          goto LABEL_66;
        if ( v5 > 49 )
        {
          if ( v5 <= 57 )
          {
            v8 = *(v6 - 1) - 50LL;
LABEL_8:
            sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * v8], (int)(&off_1402835A0)[2 * v8 + 1]);
            goto LABEL_9;
          }
LABEL_66:
          a1[2] = 0;
          *((_BYTE *)a1 + 8) = 2;
          *(_QWORD *)a1 = 0;
          return a1;
        }
        v51 = 0;
        v12 = 0;
        v52 = 0;
        if ( !(_BYTE)a2 )
        {
LABEL_35:
          v16 = sub_140205810((__int64)v57, 0, 0);
          v17 = *(     char **)v16;
          LODWORD(v16) = *(_DWORD *)(v16 + 8);
          v49 = v17;
          v50 = v16;
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6);
          if ( v17 && *(v6 - 1) == 49 )
          {
            v53 = 0;
            v54 = 0;
            sub_1401FFB98((sr_anon_89 *)&v53, 126);
            sub_1401FE7C0((__int64)&v53, (__int64)&v55, (__int64)&v49);
            v49 = v55;
            v50 = v56;
          }
          if ( v12 )
            sub_1401FE908((__int64)&v49, (__int64)&v51);
          goto LABEL_11;
        }
        v53 = 0;
        v54 = 0;
        v13 = sub_140204368((__int64)v57, a2);
        sub_1401FFB98((sr_anon_89 *)&v53, 60);
        sub_1401FE7C0((__int64)&v53, (__int64)&v55, v13);
        sub_1401FE908((__int64)&v51, (__int64)&v55);
        v12 = v51;
        if ( v51 && (*(unsigned __int8 (           **)(unsigned __int64))(*(_QWORD *)v51 + 16LL))(v51) == 62 )
        {
          if ( (char)v52 > 1 )
          {
LABEL_30:
            if ( a3 )
              *a3 = 1;
            if ( !**(_BYTE **)&dword_140404A6C[19064555] )
            {
              v10 = v52;
              *(_QWORD *)a1 = v12;
              goto LABEL_12;
            }
            v6 = (char *)++*(_QWORD *)&dword_140404A6C[19064555];
            goto LABEL_35;
          }
          v14 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
          if ( v14 )
          {
            *(_QWORD *)v14 = (uint64)(uintptr_t)(off_1402846F0);
            *(_BYTE *)(v14 + 8) = 32;
          }
          else
          {
            v14 = 0;
          }
          sub_1401FDE58(&v51, v14);
          v12 = v51;
        }
        if ( (char)v52 <= 1 )
        {
          if ( v12 )
          {
            v15 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
            if ( v15 )
            {
              *(_QWORD *)v15 = (uint64)(uintptr_t)(off_1402846F0);
              *(_BYTE *)(v15 + 8) = 62;
            }
            else
            {
              v15 = 0;
            }
            sub_1401FDE58(&v51, v15);
          }
          else
          {
            v51 = 0;
            v52 = 0;
            sub_1401FFB98((sr_anon_89 *)&v51, 62);
          }
          v12 = v51;
        }
        goto LABEL_30;
      }
      v18 = v6 - 1;
      goto LABEL_41;
    }
LABEL_118:
    sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * *(v6 - 1) - 114], (int)(&off_1402835A0)[2 * *(v6 - 1) - 113]);
    if ( v7 )
    {
      if ( v49 )
        v50 |= 0x200u;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( v5 == 66 )
  {
    v7 = 1;
    goto LABEL_118;
  }
  if ( v5 <= 90 )
    goto LABEL_118;
  if ( v5 != 95 )
    goto LABEL_66;
  v19 = *v6;
  v20 = v6 + 1;
  *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 1);
  if ( v19 <= 79 )
  {
    if ( v19 < 68 )
    {
      if ( v19 <= 57 )
      {
        if ( v19 != 57 )
        {
          if ( !v19 )
          {
            *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6);
            goto LABEL_42;
          }
          if ( v19 <= 47 )
            goto LABEL_66;
          if ( v19 <= 54 )
          {
            v8 = *v6 - 14LL;
            goto LABEL_8;
          }
          v21 = *v6 - 14;
LABEL_54:
          sub_1401FE248((DName *)a1, (     struct StringLiteral *)&(&off_1402835A0)[2 * v21]);
          return a1;
        }
        sub_1401FE248((DName *)&v55, (     struct StringLiteral *)&(&off_1402835A0)[2 * *v6 - 28]);
        v22 = v56 | 0x8000;
LABEL_58:
        *(_QWORD *)a1 = (uint64)(uintptr_t)(v55);
        a1[2] = v22;
        return a1;
      }
      if ( v19 == 63 )
      {
        v24 = *v20;
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 2);
        if ( !v24 )
        {
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 1);
          goto LABEL_42;
        }
        if ( v24 != 48 )
          goto LABEL_66;
        v23 = 1;
        goto LABEL_63;
      }
      if ( v19 <= 64 )
        goto LABEL_66;
      if ( v19 > 66 )
      {
        v23 = 0;
LABEL_63:
        sub_1402041A0((__int64)&v55, v23);
        v22 = v56 | 0x1000;
        goto LABEL_58;
      }
    }
LABEL_115:
    v21 = *v6 - 21;
    goto LABEL_54;
  }
  if ( v19 > 84 )
  {
    if ( v19 <= 86 )
    {
      v8 = *v6 - 21LL;
      goto LABEL_8;
    }
    if ( v19 <= 87 )
      goto LABEL_66;
    if ( v19 <= 89 )
      goto LABEL_115;
    if ( v19 != 95 )
      goto LABEL_66;
    v42 = *v20;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 2);
    if ( v42 <= 75 )
    {
      if ( v42 == 75 )
      {
        sub_1401FE248((DName *)&v53, (     struct StringLiteral *)&(&off_1402835A0)[2 * v6[1] + 8]);
        while ( **(_BYTE **)&dword_140404A6C[19064555] )
        {
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
          {
            ++*(_QWORD *)&dword_140404A6C[19064555];
            break;
          }
          v47 = **(_BYTE **)&dword_140404A6C[19064555];
          ++*(_QWORD *)&dword_140404A6C[19064555];
          sub_1401FE9BC((__int64)&v53, v47);
        }
      }
      else
      {
        if ( v42 < 65 )
          goto LABEL_66;
        if ( v42 <= 68 || v42 > 70 )
          goto LABEL_98;
        sub_1401FE248((DName *)&v53, (     struct StringLiteral *)&(&off_1402835A0)[2 * v6[1] + 8]);
        if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
        {
          v45 = sub_1402014E4((__int64)v57, v43, v44);
          sub_1401FE908((__int64)&v53, v45);
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
            ++*(_QWORD *)&dword_140404A6C[19064555];
        }
        else
        {
          v46 = sub_14020431C(v57);
          sub_1401FE908((__int64)&v53, (__int64)v46);
        }
        v56 = 2;
        v55 = "''";
        sub_1401FE888((__int64)&v53, (__int64)&v55);
      }
      *(_QWORD *)a1 = v53;
      v10 = v54;
      goto LABEL_12;
    }
    if ( v42 > 77 )
    {
      if ( v42 == 78 )
      {
        v48 = v6[2];
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 3);
        if ( v48 == 50 )
        {
          sub_140205440((__int64)a1);
          return a1;
        }
      }
      goto LABEL_66;
    }
LABEL_98:
    v21 = v6[1] + 4;
    goto LABEL_54;
  }
  if ( v19 >= 83 )
    goto LABEL_115;
  v25 = v19 - 80;
  if ( !v25 )
  {
    sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * *v6 - 42], (int)(&off_1402835A0)[2 * *v6 - 41]);
    v40 = sub_14020285C(v57, 0, nullptr);
    v41 = v40[2];
    v51 = *(_QWORD *)v40;
    v52 = v41;
    if ( v51 && (v41 & 0x400) != 0 )
      goto LABEL_66;
    goto LABEL_88;
  }
  v26 = v25 - 1;
  if ( v26 )
  {
    if ( v26 != 1 )
      goto LABEL_66;
    sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * *v6 - 42], (int)(&off_1402835A0)[2 * *v6 - 41]);
    v27 = (char)**(_BYTE **)&dword_140404A6C[19064555];
    if ( !(_BYTE)v27 )
    {
      sub_1401FE844((__int64)&v49, (__int64)a1, 1u);
      return a1;
    }
    if ( (char)v27 < 48 || (unsigned __int64)(v27 - 48) >= 5 )
      goto LABEL_66;
    sub_1401FDF84((__int64)&v51, (&off_140283AD0)[2 * v27 - 96], (int)(&off_140283AD0)[2 * v27 - 95]);
    v28 = **(_BYTE **)&dword_140404A6C[19064555];
    v29 = ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( v28 == 48 )
    {
      sub_1402013D0((DName *)&v55, nullptr);
      v38 = sub_1401FE7EC((__int64)&v55, (__int64)v57, 32);
      v39 = (_QWORD *)sub_1401FE7C0(v38, (__int64)&v53, (__int64)&v49);
LABEL_85:
      sub_1401FE7C0((__int64)v39, (__int64)a1, (__int64)&v51);
      return a1;
    }
    if ( v28 == 49 )
    {
      sub_1401FE7C0((__int64)&v49, (__int64)&v53, (__int64)&v51);
      v30 = sub_140203F1C((__int64)v57);
      v31 = sub_1401FE7EC(v30, (__int64)&v55, 44);
      sub_1401FE908((__int64)&v53, v31);
      v32 = sub_140203F1C((__int64)v57);
      v33 = sub_1401FE7EC(v32, (__int64)&v55, 44);
      sub_1401FE908((__int64)&v53, v33);
      v34 = sub_140203F1C((__int64)v57);
      v35 = sub_1401FE7EC(v34, (__int64)&v55, 44);
      sub_1401FE908((__int64)&v53, v35);
      v36 = sub_1402017C8((__int64)v57, 0);
      v37 = sub_1401FE7EC(v36, (__int64)&v55, 41);
      sub_1401FE908((__int64)&v53, v37);
      sub_1401FE7EC((__int64)&v53, (__int64)a1, 39);
      return a1;
    }
    if ( v28 <= 49 || v28 > 52 )
    {
      v18 = (char *)(v29 - 1);
LABEL_41:
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v18);
LABEL_42:
      a1[2] = 0;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
      return a1;
    }
LABEL_88:
    v39 = &v49;
    goto LABEL_85;
  }
LABEL_9:
  if ( v49 )
  {
    v56 = 8;
    v55 = "operator";
    v9 = sub_1401FE248((DName *)v57, (     struct StringLiteral *)&v55);
    sub_1401FE7C0((__int64)v9, (__int64)&v55, (__int64)&v49);
    v49 = v55;
    v50 = v56;
  }
LABEL_11:
  *(_QWORD *)a1 = (uint64)(uintptr_t)(v49);
  v10 = v50;
LABEL_12:
  a1[2] = v10;
  return a1;
}

// 140202B4B: conditional instruction was optimized away because cl.1>=43
// 140202BA3: conditional instruction was optimized away because ecx.4 is in (37..38)
// 140202EFC: conditional instruction was optimized away because al.1 is in (47..4A)
// 140202F3F: variable 'v43' is possibly undefined
// 140202F3F: variable 'v44' is possibly undefined
// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 1402835A0: using guessed type char *off_1402835A0;
// 140283AD0: using guessed type char *off_140283AD0;
// 1402846F0: using guessed type int (*off_1402846F0[2])(CMFCToolBarImages *__hidden this, int);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402030A4) ----------------------------------------------------
DName *           sub_1402030A4(DName *a1, _QWORD *a2, __int64 a3)
{
  sub_14020353C(a1, a2, a3, 1);
  return a1;
}


//----- (00000001402030C4) ----------------------------------------------------
DName *           sub_1402030C4(DName *a1, _QWORD *a2, __int64 a3)
{
  sub_14020353C(a1, a2, a3, 0);
  return a1;
}


//----- (00000001402030E0) ----------------------------------------------------
_DWORD *           sub_1402030E0(_DWORD *a1, __int64 a2)
{
  _BYTE *v3; // rdx
  __int64 v5; // rdx
  int v6; // r8d
  char *v7; // rdx
  int v8; // r9d
  int v9; // eax
  char v10; // al
       char **v11; // rcx
  int v13; // r8d
  char *v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
       char *v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]

  v3 = *(_BYTE **)&dword_140404A6C[19064555];
  v15 = 0;
  v16 = 0;
  switch ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    case 0:
      goto LABEL_15;
    case 0x24:
      v10 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
      if ( v10 != 36 )
      {
        if ( !v10 )
        {
LABEL_15:
          v18 = 0;
          v17 = (     char *)&off_1402848D0;
          v11 = &v17;
LABEL_16:
          sub_1401FE7C0((__int64)v11, (__int64)a1, a2);
          return a1;
        }
LABEL_27:
        a1[2] = 0;
        *((_BYTE *)a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
        return a1;
      }
      v3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 2LL);
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3);
      switch ( *v3 )
      {
        case 0:
          goto LABEL_15;
        case 0x41:
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
          sub_140202084((__int64)a1, (__int64 *)a2);
          return a1;
        case 0x42:
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
          sub_140203370((DName *)a1, a2, 1);
          return a1;
        case 0x43:
          v17 = nullptr;
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
          v18 = 0;
          v5 = sub_140200AFC((__int64)&v15, a2, 0, &v17, 0);
          goto LABEL_6;
      }
      if ( *v3 != 81 )
      {
        if ( *v3 != 82 )
        {
          switch ( *v3 )
          {
            case 'S':
              *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
              break;
            case 'T':
              *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
              if ( !*(_QWORD *)a2 )
              {
                v18 = 14;
                v17 = "std::nullptr_t";
                sub_1401FE248((DName *)a1, (     struct StringLiteral *)&v17);
                return a1;
              }
              v18 = 15;
              v17 = "std::nullptr_t ";
              v11 = (     char **)sub_1401FE248((DName *)&v15, (     struct StringLiteral *)&v17);
              goto LABEL_16;
            case 'Y':
              *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
              sub_140203DE0((__int64)a1);
              return a1;
          }
          goto LABEL_27;
        }
        if ( *(_QWORD *)a2 )
        {
          v13 = 9;
          v14 = "volatile ";
        }
        else
        {
          v13 = 8;
          v14 = "volatile";
        }
        sub_1401FDF84((__int64)&v15, v14, v13);
        v3 = *(_BYTE **)&dword_140404A6C[19064555];
      }
      v8 = 3;
      goto LABEL_12;
    case 0x41:
LABEL_11:
      v8 = 2;
LABEL_12:
      v17 = *(     char **)a2;
      v9 = *(_DWORD *)(a2 + 8) | 0x100;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
      v18 = v9;
      sub_14020353C((DName *)a1, &v15, (__int64)&v17, v8);
      return a1;
    case 0x42:
      if ( *(_QWORD *)a2 )
      {
        v6 = 9;
        v7 = "volatile ";
      }
      else
      {
        v6 = 8;
        v7 = "volatile";
      }
      sub_1401FDF84((__int64)&v15, v7, v6);
      v3 = *(_BYTE **)&dword_140404A6C[19064555];
      goto LABEL_11;
  }
  v5 = a2;
LABEL_6:
  sub_14020033C((DName *)a1, v5);
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140203370) ----------------------------------------------------
DName *           sub_140203370(DName *a1, __int64 a2, int a3)
{
  _BYTE *v3; // rax
       char *v6; // rax
       char *v7; // rax
  DName *v8; // rcx
       char *v9; // rax
  DName *v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-10h] BYREF

  v3 = *(_BYTE **)&dword_140404A6C[19064555];
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    DWORD2(v15) = 0;
    *(_QWORD *)&v15 = (uint64)(uintptr_t)(&off_1402848D0);
    v8 = (DName *)&v15;
    goto LABEL_29;
  }
  if ( !a3 )
  {
LABEL_13:
    if ( *v3 == 36 )
    {
      if ( v3[1] == 36 && v3[2] == 84 )
      {
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 3);
        if ( !*(_QWORD *)a2 )
        {
          v6 = "std::nullptr_t";
          DWORD2(v14) = 14;
          goto LABEL_6;
        }
        v7 = "std::nullptr_t ";
        DWORD2(v14) = 15;
        goto LABEL_8;
      }
    }
    else if ( *v3 == 89 )
    {
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v3 + 1);
      sub_1401FFFFC(a1, a2);
      return a1;
    }
    sub_14020033C((DName *)&v14, a2);
    if ( (*(_DWORD *)(a2 + 8) & 0x4000) != 0 )
    {
      v9 = "cli::array<";
      DWORD2(v15) = 11;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x2000) == 0 )
      {
        v12 = DWORD2(v14);
        v11 = v14;
        goto LABEL_27;
      }
      v9 = "cli::pin_ptr<";
      DWORD2(v15) = 13;
    }
    *(_QWORD *)&v15 = (uint64)(uintptr_t)(v9);
    v10 = sub_1401FE248((DName *)v16, (     struct StringLiteral *)&v15);
    sub_1401FE7C0((__int64)v10, (__int64)&v15, (__int64)&v14);
    v11 = v15;
    v12 = DWORD2(v15);
LABEL_27:
    *(_QWORD *)a1 = v11;
    *((_DWORD *)a1 + 2) = v12;
    return a1;
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] != 88 )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 95
      && *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) == 95
      && *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 2LL) == 90 )
    {
      v3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 3LL);
      *(_QWORD *)&dword_140404A6C[19064555] += 3LL;
    }
    goto LABEL_13;
  }
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( *(_QWORD *)a2 )
  {
    v7 = "void ";
    DWORD2(v14) = 5;
LABEL_8:
    *(_QWORD *)&v14 = (uint64)(uintptr_t)(v7);
    v15 = v14;
    v8 = sub_1401FE248((DName *)v16, (     struct StringLiteral *)&v15);
LABEL_29:
    sub_1401FE7C0((__int64)v8, (__int64)a1, a2);
    return a1;
  }
  v6 = "void";
  DWORD2(v14) = 4;
LABEL_6:
  *(_QWORD *)&v14 = (uint64)(uintptr_t)(v6);
  v15 = v14;
  sub_1401FE248(a1, (     struct StringLiteral *)&v15);
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020353C) ----------------------------------------------------
DName *           sub_14020353C(DName *a1, _QWORD *a2, __int64 a3, int a4)
{
  int v6; // ebx
  char v9; // cl
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  _UNKNOWN ***v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+38h] [rbp-18h]
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  v15 = *((_OWORD *)&off_140283B20 + a4);
  v9 = **(_BYTE **)&dword_140404A6C[19064555];
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( (unsigned __int8)(v9 - 54) <= 3u || v9 == 95 )
    {
      sub_1401FE248((DName *)&v13, (     struct StringLiteral *)&v15);
      if ( *a2 && (!*(_QWORD *)a3 || (*(_DWORD *)(a3 + 8) & 0x100) == 0) )
        sub_1401FE908((__int64)&v13, (__int64)a2);
      if ( *(_QWORD *)a3 )
        sub_1401FE908((__int64)&v13, a3);
      sub_140202084((__int64)a1, (__int64 *)&v13);
    }
    else
    {
      sub_140200AFC((__int64)&v15, a3, a4, a2, 0);
      LOBYTE(v6) = a4 == 1;
      sub_140203370(a1, (__int64)&v15, v6);
    }
  }
  else
  {
    v13 = &off_1402848D0;
    v14 = 0;
    if ( SDWORD2(v15) > 0 )
    {
      v10 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 24);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 16) = DWORD2(v15);
        *(_QWORD *)v10 = (uint64)(uintptr_t)(&off_140284718);
        *(_QWORD *)(v10 + 8) = v15;
      }
      else
      {
        v10 = 0;
      }
      sub_1401FDF20((unsigned __int64 *)&v13, v10);
    }
    if ( *a2 )
      sub_1401FE908((__int64)&v13, (__int64)a2);
    if ( *(_QWORD *)a3 )
    {
      if ( *a2 && (char)v14 <= 1 )
      {
        if ( v13 )
        {
          v11 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
          if ( v11 )
          {
            *(_BYTE *)(v11 + 8) = 32;
            *(_QWORD *)v11 = (uint64)(uintptr_t)(off_1402846F0);
          }
          else
          {
            v11 = 0;
          }
          sub_1401FDE58((unsigned __int64 *)&v13, v11);
        }
        else
        {
          v13 = nullptr;
          v14 = 0;
          sub_1401FFB98((sr_anon_89 *)&v13, 32);
        }
      }
      sub_1401FE908((__int64)&v13, a3);
    }
    *(_QWORD *)a1 = (uint64)(uintptr_t)(v13);
    *((_DWORD *)a1 + 2) = v14;
  }
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 140283B20: using guessed type char (*off_140283B20)[7];
// 1402846F0: using guessed type int (*off_1402846F0[2])(CMFCToolBarImages *__hidden this, int);
// 140284718: using guessed type _UNKNOWN *off_140284718;
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140203714) ----------------------------------------------------
DName *           sub_140203714(DName *a1, _QWORD *a2, __int64 a3, int a4)
{
  sub_14020353C(a1, a2, a3, a4);
  return a1;
}


//----- (000000014020372C) ----------------------------------------------------
__int64            sub_14020372C(__int64 a1)
{
  char *v2; // rax
  unsigned int v3; // esi
  __int128 v4; // xmm0
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+28h] [rbp-48h]
  __int128 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  __int128 v12; // [rsp+60h] [rbp-10h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] == 95
    && (v2 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL),
        *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL))
    && *v2 <= 68 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    v3 = *v2 - 65;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v2 + 1);
    if ( v3 > 3 )
    {
LABEL_20:
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 2;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
      {
        sub_1401FFB98((sr_anon_89 *)&v7, 32);
        v11 = *sub_1401FEC0C(&v12, 14);
        sub_1401FE888((__int64)&v7, (__int64)&v11);
        if ( v3 )
        {
          while ( 1 )
          {
            if ( (v3 & -v3) == 1 )
            {
              DWORD2(v10) = 3;
              *(_QWORD *)&v10 = (uint64)(uintptr_t)("cpu");
              v4 = v10;
            }
            else
            {
              if ( (v3 & -v3) != 2 )
                goto LABEL_20;
              DWORD2(v9) = 3;
              *(_QWORD *)&v9 = (uint64)(uintptr_t)("amp");
              v4 = v9;
            }
            v12 = v4;
            sub_1401FE888((__int64)&v7, (__int64)&v12);
            v3 &= ~(v3 & -v3);
            if ( !v3 )
              break;
            DWORD2(v11) = 2;
            *(_QWORD *)&v11 = (uint64)(uintptr_t)(&word_140274678);
            v12 = v11;
            sub_1401FE888((__int64)&v7, (__int64)&v12);
          }
        }
        if ( (char)v8 <= 1 )
        {
          if ( v7 )
          {
            v5 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
            if ( v5 )
            {
              *(_BYTE *)(v5 + 8) = 41;
              *(_QWORD *)v5 = (uint64)(uintptr_t)(off_1402846F0);
            }
            sub_1401FDE58(&v7, v5);
          }
          else
          {
            v7 = 0;
            v8 = 0;
            sub_1401FFB98((sr_anon_89 *)&v7, 41);
          }
        }
      }
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = v8;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return a1;
}

// 140274678: using guessed type __int16 word_140274678;
// 1402846F0: using guessed type int (*off_1402846F0[2])(CMFCToolBarImages *__hidden this, int);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402038F8) ----------------------------------------------------
DName *           sub_1402038F8(DName *a1, struct DName *a2)
{
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    sub_1401FE2A4(a1, a2);
  }
  else
  {
    sub_1402013D0(a1, a2);
  }
  return a1;
}

// 1401FE2A4: using guessed type DName *__fastcall sub_1401FE2A4(DName *this, struct DName *a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020392C) ----------------------------------------------------
__int64            sub_14020392C(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  DName *v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  DName *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+28h] [rbp-E0h] BYREF
  int v27; // [rsp+30h] [rbp-D8h]
  __int128 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-78h]
  __int128 v38; // [rsp+98h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B8h] [rbp-50h] BYREF
  int v41; // [rsp+C0h] [rbp-48h]
  __int64 v42; // [rsp+C8h] [rbp-40h] BYREF
  int v43; // [rsp+D0h] [rbp-38h]
  __int128 v44; // [rsp+D8h] [rbp-30h]
  __int128 v45; // [rsp+E8h] [rbp-20h]
  _BYTE v46[16]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v47[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v48[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v49[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v50[16]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v51[16]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v52[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v53[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v54[16]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v55[16]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v56[16]; // [rsp+198h] [rbp+90h] BYREF
  _DWORD v57[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v58[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v59[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v60[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v61; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v62[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v63[16]; // [rsp+208h] [rbp+100h] BYREF
  char v64; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v65[16]; // [rsp+228h] [rbp+120h] BYREF
  char v66; // [rsp+238h] [rbp+130h] BYREF

  *(_QWORD *)a1 = 0;
  v3 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  while ( (**(_BYTE **)&dword_140404A6C[19064555] & 0xBF) != 0 )
  {
    if ( LOBYTE(dword_140404A6C[19064560]) && !BYTE1(dword_140404A6C[19064560]) )
      return a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)&v39 = (uint64)(uintptr_t)("::");
      DWORD2(v39) = 2;
      v29 = v39;
      v5 = sub_1401FE248((DName *)v50, (     struct StringLiteral *)&v29);
      sub_1401FE7C0((__int64)v5, (__int64)&v40, a1);
      *(_QWORD *)a1 = v40;
      *(_DWORD *)(a1 + 8) = v41;
      if ( v3 )
      {
        v30 = 0;
        LODWORD(v31) = 0;
        sub_1401FFB98((sr_anon_89 *)&v30, 91);
        sub_1401FE7C0((__int64)&v30, (__int64)&v42, a1);
        v3 = 0;
        *(_QWORD *)a1 = v42;
        *(_DWORD *)(a1 + 8) = v43;
      }
    }
    v6 = *(_BYTE **)&dword_140404A6C[19064555];
    if ( **(_BYTE **)&dword_140404A6C[19064555] != 63 )
    {
      v8 = sub_140205810((__int64)v49, 1, 0);
      v9 = v48;
      goto LABEL_37;
    }
    v7 = ++*(_QWORD *)&dword_140404A6C[19064555];
    switch ( v6[1] )
    {
      case '$':
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6);
        v8 = sub_140205810((__int64)v63, 1, 0);
        v9 = &v64;
LABEL_37:
        v17 = sub_1401FE7C0(v8, (__int64)v9, a1);
        goto LABEL_38;
      case '%':
        goto LABEL_33;
      case '?':
        if ( v6[2] == 95 && v6[3] == 63 )
        {
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 2);
          v18 = sub_14020285C(v57, 0, nullptr);
          v19 = sub_1401FE7C0((__int64)v18, (__int64)v58, a1);
          *(_QWORD *)a1 = *(_QWORD *)v19;
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(v19 + 8);
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
LABEL_31:
            ++*(_QWORD *)&dword_140404A6C[19064555];
          goto LABEL_39;
        }
        v20 = sub_1402014E4((__int64)v59, v7, a3);
        v36 = 0;
        v37 = 0;
        v21 = v20;
        sub_1401FFB98((sr_anon_89 *)&v36, 96);
        sub_1401FE7C0((__int64)&v36, (__int64)v47, v21);
        v8 = sub_1401FE7EC((__int64)v47, (__int64)v60, 39);
        v9 = &v61;
        goto LABEL_37;
      case 'A':
LABEL_33:
        sub_1401FE198((DName *)&v38, (char **)&dword_140404A6C[19064555], 64);
        DWORD2(v45) = 21;
        *(_QWORD *)&v45 = (uint64)(uintptr_t)("`anonymous namespace'");
        v29 = v45;
        v22 = sub_1401FE248((DName *)v62, (     struct StringLiteral *)&v29);
        sub_1401FE7C0((__int64)v22, (__int64)&v28, a1);
        *(_QWORD *)a1 = v28;
        *(_DWORD *)(a1 + 8) = DWORD2(v28);
        if ( **(_DWORD **)&dword_140404A6C[19064551] != 9 )
          sub_1401FEB28(*(int **)&dword_140404A6C[19064551], (__int64)&v38);
        goto LABEL_39;
    }
    if ( v6[1] != 73 )
    {
      if ( v6[1] == 81 )
      {
        v10 = 0;
        v27 = 0;
        v26 = 0;
        *(_QWORD *)&dword_140404A6C[19064555] = v7 + 1;
        while ( 1 )
        {
          sub_140205810((__int64)&v32, 1, 0);
          v11 = v33;
          if ( (_BYTE)v33 )
          {
            v27 = 2;
            v10 = 0;
          }
          else
          {
            if ( v10 )
            {
              *(_QWORD *)&v44 = (uint64)(uintptr_t)("::");
              DWORD2(v44) = 2;
              v29 = v44;
              v12 = sub_1401FE794((__int64)&v32, (__int64)v65, (__int64)&v29);
              v13 = sub_1401FE7C0(v12, (__int64)v52, (__int64)&v26);
              v10 = *(_QWORD *)v13;
              v11 = *(_DWORD *)(v13 + 8);
            }
            else
            {
              v10 = v32;
            }
            v27 = v11;
          }
          v26 = v10;
          if ( (_BYTE)v27 )
            break;
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
          {
            v34 = 0;
            v35 = 0;
            sub_1401FFB98((sr_anon_89 *)&v34, 91);
            sub_1401FE7C0((__int64)&v34, (__int64)v46, (__int64)&v26);
            v14 = sub_1401FE7EC((__int64)v46, (__int64)v53, 93);
            *(_QWORD *)a1 = *(_QWORD *)v14;
            *(_DWORD *)(a1 + 8) = *(_DWORD *)(v14 + 8);
            goto LABEL_31;
          }
        }
        *(_DWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
        goto LABEL_39;
      }
      v8 = sub_14020267C((__int64)v51);
      v9 = &v66;
      goto LABEL_37;
    }
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 2);
    v15 = sub_140205810((__int64)v54, 1, 0);
    v16 = sub_1401FE7EC(v15, (__int64)v55, 93);
    v17 = sub_1401FE7C0(v16, (__int64)v56, a1);
    v3 = 1;
LABEL_38:
    *(_QWORD *)a1 = *(_QWORD *)v17;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v17 + 8);
LABEL_39:
    if ( *(_BYTE *)(a1 + 8) )
      break;
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] != 64 )
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)&v28 = (uint64)(uintptr_t)("::");
    DWORD2(v28) = 2;
    v38 = v28;
    DWORD2(v28) = 0;
    *(_QWORD *)&v28 = (uint64)(uintptr_t)(&off_1402848D0);
    v23 = sub_1401FE794((__int64)&v28, (__int64)v48, (__int64)&v38);
    v24 = sub_1401FE7C0(v23, (__int64)v49, a1);
    *(_QWORD *)a1 = *(_QWORD *)v24;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v24 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

// 140203C22: variable 'a3' is possibly undefined
// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140203DE0) ----------------------------------------------------
__int64            sub_140203DE0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  bool v6; // zf
  _BYTE *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v2 = sub_140205810((__int64)&v16, 1, 0);
  v5 = *(_QWORD *)v2;
  *(_QWORD *)a1 = *(_QWORD *)v2;
  LODWORD(v2) = *(_DWORD *)(v2 + 8);
  v6 = (_BYTE)v2 == 0;
  *(_DWORD *)(a1 + 8) = v2;
  v7 = *(_BYTE **)&dword_140404A6C[19064555];
  if ( v6 && **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
    {
LABEL_6:
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v7 + 1);
      return a1;
    }
    *(_QWORD *)&v15 = (uint64)(uintptr_t)("::");
    DWORD2(v15) = 2;
    v8 = sub_14020392C((__int64)&v16, v3, v4);
    v9 = sub_1401FE794(v8, (__int64)v17, (__int64)&v15);
    v10 = sub_1401FE7C0(v9, (__int64)v18, a1);
    v5 = *(_QWORD *)v10;
    *(_QWORD *)a1 = *(_QWORD *)v10;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v10 + 8);
    v7 = *(_BYTE **)&dword_140404A6C[19064555];
  }
  if ( *v7 == 64 )
    goto LABEL_6;
  if ( *v7 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else if ( v5 )
  {
    *(_QWORD *)&v15 = (uint64)(uintptr_t)("::");
    DWORD2(v15) = 2;
    v11 = v15;
    DWORD2(v15) = 0;
    v16 = v11;
    *(_QWORD *)&v15 = (uint64)(uintptr_t)(&off_1402848D0);
    v12 = sub_1401FE794((__int64)&v15, (__int64)v18, (__int64)&v16);
    v13 = sub_1401FE7C0(v12, (__int64)v17, a1);
    *(_QWORD *)a1 = *(_QWORD *)v13;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v13 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

// 140203E4B: variable 'v3' is possibly undefined
// 140203E4B: variable 'v4' is possibly undefined
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140203F1C) ----------------------------------------------------
__int64            sub_140203F1C(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
    {
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v4 = 0;
      v5 = 0;
      v2 = sub_1402017C8((__int64)v6, 0);
      sub_1401FFB98((sr_anon_89 *)&v4, 45);
      sub_1401FE7C0((__int64)&v4, a1, v2);
    }
    else
    {
      sub_1402017C8(a1, 0);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140203FA4) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140203FA4(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp-10h]

  v3 = 0;
  v5 = 0;
  v4 = 0;
  v6 = 0;
  sub_140200AFC(a1, (__int64)&v5, 0, &v3, 0);
  return a1;
}


//----- (0000000140203FFC) ----------------------------------------------------
char *           sub_140203FFC(DName *this, char *a2, int a3)
{
  __int64 (           ***v5)(_QWORD); // rcx
  char *v6; // rbx
  char *v7; // rax

  v5 = *(__int64 (           ****)(_QWORD))this;
  v6 = a2;
  if ( v5 )
  {
    if ( a2
      || (a3 = (**v5)(v5) + 1, (v6 = (char *)sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], a3)) != nullptr) )
    {
      if ( *(_QWORD *)this )
        v7 = (char *)(*(__int64 (           **)(_QWORD, char *, char *))(**(_QWORD **)this + 24LL))(
                       *(_QWORD *)this,
                       v6,
                       &v6[a3 - 1]);
      else
        v7 = v6;
      *v7 = 0;
    }
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return v6;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402040EC) ----------------------------------------------------
char *           sub_1402040EC(pDNameNode *this, char *a2, char *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rcx

  v3 = *((__int64 **)this + 1);
  if ( v3 )
  {
    v4 = *v3;
    if ( v4 )
      return (char *)(*(__int64 (           **)(__int64, char *, char *))(*(_QWORD *)v4 + 24LL))(v4, a2, a3);
  }
  return a2;
}

// 1402040EC: using guessed type char *__fastcall sub_1402040EC(pDNameNode *this, char *a2, char *a3);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014020411C) ----------------------------------------------------
unsigned __int64            sub_14020411C(pairNode *this, char *a2, char *a3)
{
  unsigned __int64 result; // rax

  result = (*(__int64 (           **)(_QWORD, char *))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), a2);
  if ( result < (unsigned __int64)a3 )
    return (*(unsigned __int64 (           **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 2) + 24LL))(
             *((_QWORD *)this + 2),
             result,
             a3);
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (00000001402041A0) ----------------------------------------------------
__int64            sub_1402041A0(__int64 a1, int a2)
{
  char v3; // dl
  char *v4; // rcx
  char v5; // al
  _BYTE *v6; // rcx
  _BYTE *i; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  sub_1401FE248((DName *)&v9, (     struct StringLiteral *)&(&off_140283B80)[2 * a2]);
  v3 = **(_BYTE **)&dword_140404A6C[19064555];
  v4 = (char *)++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v3 == 64 && (v5 = *v4, v6 = v4 + 1, *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6), v5 == 95) )
  {
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 1);
    sub_1402017C8((__int64)v11, 0);
    sub_1402017C8((__int64)v11, 0);
    for ( i = *(_BYTE **)&dword_140404A6C[19064555]; *i && *i != 64; *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i) )
      ++i;
    if ( *i )
    {
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i + 1);
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 8) = v10;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i - 1);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 140283B80: using guessed type char *off_140283B80;
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402042B4) ----------------------------------------------------
__int64            sub_1402042B4(__int64 a1)
{
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[19064555]), (const char *)(uintptr_t)("??_C"), 4) )
    {
      *(_QWORD *)&dword_140404A6C[19064555] += 4LL;
      sub_1402041A0(a1, 0);
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020431C) ----------------------------------------------------
_DWORD *           sub_14020431C(_DWORD *a1)
{
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    if ( *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) == 36 )
    {
      sub_1402045BC((__int64)a1, 1);
    }
    else
    {
      ++*(_QWORD *)&dword_140404A6C[19064555];
      sub_14020285C(a1, 0, nullptr);
    }
  }
  else
  {
    sub_140205810((__int64)a1, 1, 0);
  }
  return a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140204368) ----------------------------------------------------
__int64            sub_140204368(__int64 a1, __int64 a2)
{
  char v2; // r15
  char *v4; // rcx
  int v5; // r8d
  char v6; // r12
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  char *v10; // rsi
  _BYTE *v11; // rcx
  __int64 v12; // rax
  int v13; // r14d
  int *v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  int v19; // [rsp+28h] [rbp-58h]
  __int128 v20; // [rsp+30h] [rbp-50h]
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-10h] BYREF

  *(_QWORD *)a1 = 0;
  v2 = 1;
  *(_DWORD *)(a1 + 8) = 0;
  BYTE1(dword_140404A6C[19064560]) = 1;
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v4 = *(char **)&dword_140404A6C[19064555];
    do
    {
      if ( (*v4 & 0xBF) == 0 )
        break;
      v5 = *v4;
      v6 = 0;
      v18 = 0;
      v7 = (unsigned int)(v5 - 48);
      v19 = 0;
      if ( (unsigned int)v7 <= 9 )
      {
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v4 + 1);
        v8 = sub_1401FE684(*(signed int **)&dword_140404A6C[19064553], (__int64)v22, v7);
        v9 = *(_QWORD *)v8;
        LODWORD(v8) = *(_DWORD *)(v8 + 8);
        v18 = v9;
        v19 = v8;
LABEL_28:
        v4 = *(char **)&dword_140404A6C[19064555];
LABEL_29:
        if ( v9 )
        {
          if ( !v2 && *(char *)(a1 + 8) <= 1 )
          {
            if ( *(_QWORD *)a1 )
            {
              v16 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
              if ( v16 )
              {
                *(_BYTE *)(v16 + 8) = 44;
                *(_QWORD *)v16 = (uint64)(uintptr_t)(off_1402846F0);
              }
              sub_1401FDE58((unsigned __int64 *)a1, v16);
            }
            else
            {
              *(_QWORD *)a1 = 0;
              *(_DWORD *)(a1 + 8) = 0;
              sub_1401FFB98((sr_anon_89 *)a1, 44);
            }
          }
          sub_1401FE908(a1, (__int64)&v18);
          if ( v6 )
          {
            DWORD2(v20) = 3;
            *(_QWORD *)&v20 = (uint64)(uintptr_t)("...");
            v21 = v20;
            sub_1401FE888(a1, (__int64)&v21);
          }
          v4 = *(char **)&dword_140404A6C[19064555];
        }
        goto LABEL_40;
      }
      v10 = v4;
      if ( *v4 != 36 )
      {
LABEL_22:
        v12 = sub_140204CC0((DName *)v24);
        goto LABEL_23;
      }
      if ( v4[1] == 36 )
      {
        a2 = (unsigned int)(v4[2] - 36);
        if ( v4[2] == 36 )
        {
          if ( v4[3] == 86 )
          {
            v4 += 4;
            goto LABEL_21;
          }
        }
        else
        {
          a2 = (unsigned int)(v4[2] - 85);
          if ( v4[2] == 85 )
            goto LABEL_17;
          a2 = (unsigned int)(v4[2] - 86);
          if ( v4[2] == 86 )
            goto LABEL_18;
          a2 = (unsigned int)(v4[2] - 87);
          if ( v4[2] == 87 )
          {
            v6 = 1;
LABEL_17:
            v4 += 3;
            *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v4);
            goto LABEL_13;
          }
          if ( v4[2] == 90 )
          {
LABEL_18:
            v4 += 3;
LABEL_21:
            *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v4);
            goto LABEL_40;
          }
        }
      }
LABEL_13:
      if ( *v4 != 36 )
        goto LABEL_22;
      v11 = v4 + 1;
      if ( *v11 == 36 )
        goto LABEL_22;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v11);
      v12 = sub_140204850((DName *)v23, a2, v7);
LABEL_23:
      v13 = *(_DWORD *)(v12 + 8);
      v9 = *(_QWORD *)v12;
      v4 = *(char **)&dword_140404A6C[19064555];
      v19 = v13;
      v18 = v9;
      if ( (__int64)(*(_QWORD *)&dword_140404A6C[19064555] - (_QWORD)v10) <= 1 )
        goto LABEL_29;
      v14 = *(int **)&dword_140404A6C[19064553];
      if ( **(_DWORD **)&dword_140404A6C[19064553] == 9 )
        goto LABEL_29;
      if ( v9 )
      {
        v15 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v15 )
        {
          *(_QWORD *)v15 = v9;
          *(_DWORD *)(v15 + 8) = v13;
          a2 = *v14;
          *v14 = a2 + 1;
          *(_QWORD *)&v14[2 * a2 + 4] = v15;
        }
        goto LABEL_28;
      }
LABEL_40:
      v2 = 0;
    }
    while ( !*(_BYTE *)(a1 + 8) );
  }
  BYTE1(dword_140404A6C[19064560]) = 0;
  return a1;
}

// 140204442: variable 'a2' is possibly undefined
// 1402846F0: using guessed type int (*off_1402846F0[2])(CMFCToolBarImages *__hidden this, int);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE610: using guessed type unsigned int;

//----- (00000001402045BC) ----------------------------------------------------
__int64            sub_1402045BC(__int64 a1, char a2)
{
  __int64 v4; // r13
  _BYTE *v5; // rax
  char v6; // r15
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+30h] [rbp-D0h]
  _DWORD v20[6]; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+B0h] [rbp-50h] BYREF
  int v23; // [rsp+110h] [rbp+10h] BYREF
  char v24; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v25; // [rsp+1B8h] [rbp+B8h]

  if ( **(_BYTE **)&dword_140404A6C[19064555] != 63 || *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) != 36 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
    return a1;
  }
  v4 = *(_QWORD *)&dword_140404A6C[19064549];
  v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 2LL);
  v25 = *(_QWORD *)&dword_140404A6C[19064551];
  v6 = 0;
  v19 = *(_QWORD *)&dword_140404A6C[19064553];
  v21 = -1;
  *(_QWORD *)&dword_140404A6C[19064549] = (uint64)(uintptr_t)(&v21);
  *(_QWORD *)&dword_140404A6C[19064551] = (uint64)(uintptr_t)(&v22);
  *(_QWORD *)&dword_140404A6C[19064553] = (uint64)(uintptr_t)(&v23);
  v22 = -1;
  v23 = -1;
  *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5);
  v7 = *v5 == 63;
  v24 = 0;
  if ( v7 )
  {
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5 + 1);
    v8 = (__int64)sub_14020285C(v20, 4294967041LL, &v24);
    v6 = v24;
  }
  else
  {
    v8 = sub_140205810((__int64)v20, 1, 1);
  }
  v10 = *(_QWORD *)v8;
  v18 = *(_DWORD *)(v8 + 8);
  v11 = dword_140404A6C[19064560];
  if ( !v10 )
    v11 = 1;
  v17 = v10;
  LOBYTE(dword_140404A6C[19064560]) = v11;
  if ( !v6 )
  {
    if ( (char)v18 <= 1 )
    {
      if ( v10 )
      {
        v12 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v12 )
        {
          *(_QWORD *)v12 = (uint64)(uintptr_t)(off_1402846F0);
          *(_BYTE *)(v12 + 8) = 60;
        }
        sub_1401FDE58(&v17, v12);
      }
      else
      {
        v17 = 0;
        v18 = 0;
        sub_1401FFB98((sr_anon_89 *)&v17, 60);
      }
    }
    v13 = sub_140204368((__int64)v20, v9);
    sub_1401FE908((__int64)&v17, v13);
    v10 = v17;
    if ( v17 && (*(unsigned __int8 (           **)(unsigned __int64))(*(_QWORD *)v17 + 16LL))(v17) == 62 )
    {
      if ( (char)v18 > 1 )
      {
LABEL_28:
        if ( a2 && **(_BYTE **)&dword_140404A6C[19064555] )
          ++*(_QWORD *)&dword_140404A6C[19064555];
        goto LABEL_31;
      }
      v14 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
      if ( v14 )
      {
        *(_QWORD *)v14 = (uint64)(uintptr_t)(off_1402846F0);
        *(_BYTE *)(v14 + 8) = 32;
      }
      sub_1401FDE58(&v17, v14);
      v10 = v17;
    }
    if ( (char)v18 <= 1 )
    {
      if ( v10 )
      {
        v15 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v15 )
        {
          *(_QWORD *)v15 = (uint64)(uintptr_t)(off_1402846F0);
          *(_BYTE *)(v15 + 8) = 62;
        }
        sub_1401FDE58(&v17, v15);
      }
      else
      {
        v17 = 0;
        v18 = 0;
        sub_1401FFB98((sr_anon_89 *)&v17, 62);
      }
      v10 = v17;
    }
    goto LABEL_28;
  }
LABEL_31:
  *(_QWORD *)&dword_140404A6C[19064551] = v25;
  *(_QWORD *)&dword_140404A6C[19064553] = v19;
  *(_DWORD *)(a1 + 8) = v18;
  *(_QWORD *)&dword_140404A6C[19064549] = v4;
  *(_QWORD *)a1 = v10;
  return a1;
}

// 14020471D: variable 'v9' is possibly undefined
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 1402846F0: using guessed type int (*off_1402846F0[2])(CMFCToolBarImages *__hidden this, int);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE600: using guessed type unsigned int;
// 144CBE608: using guessed type unsigned int;
// 144CBE610: using guessed type unsigned int;
// 144CBE62C: using guessed type unsigned int;

//----- (0000000140204850) ----------------------------------------------------
__int64            sub_140204850(DName *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  _BYTE *v5; // rax
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int16 v10; // bx
  char *v11; // rax
  int v12; // r14d
  int v13; // r14d
  int v14; // r14d
       char *v15; // rax
  DName *v16; // rax
  char v17; // r8
  unsigned __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v31; // [rsp+0h] [rbp-70h] BYREF
  __int128 v32; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v33[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v34; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-20h] BYREF
  int v36; // [rsp+58h] [rbp-18h]
  char v37; // [rsp+5Fh] [rbp-11h] BYREF
  __int64 v38; // [rsp+60h] [rbp-10h]

  v4 = (char)**(_BYTE **)&dword_140404A6C[19064555];
  v5 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
  v6 = v4;
  if ( (char)v4 > 69 )
  {
    if ( (char)v4 > 74 )
    {
      if ( (_BYTE)v4 == 77 )
      {
        sub_140204CC0((DName *)v33);
        sub_140204850(a1, v19, v20);
        return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
      }
      if ( (_BYTE)v4 == 81 )
        goto LABEL_24;
      if ( (_BYTE)v4 != 82 )
      {
        if ( (_BYTE)v4 == 83 )
        {
          *(_QWORD *)a1 = 0;
          *((_DWORD *)a1 + 2) = 0;
          return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
        }
        if ( (unsigned __int8)(v4 - 84) > 2u )
          goto LABEL_24;
      }
      sub_140203F1C((__int64)&v32);
      if ( (_QWORD)v32 )
        *(_BYTE *)(*(__int64 (           **)(_QWORD, unsigned __int64 *, char *))(*(_QWORD *)v32 + 24LL))(
                    v32,
                    &v35,
                    &v37) = 0;
      else
        LOBYTE(v35) = 0;
      v10 = unknown_libname_852((__int64)&v35);
      if ( (dword_140404A6C[19064559] & 0x4000) != 0 )
      {
        if ( *(_QWORD *)&dword_140404A6C[19064561] )
        {
          v11 = (char *)(*(__int64 (           **)(_QWORD))&dword_140404A6C[19064561])(v10 & 0xFFF);
          if ( v11 )
          {
            sub_1401FDCAC((__int64)a1, v11);
            return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
          }
        }
      }
      sub_140158C70(&v35, 16, (__int64)"%d", v10 & 0xFFF);
      sub_1401FDBF8((__int64)&v34, (char *)&v35);
      v12 = v6 - 82;
      if ( v12 && (v13 = v12 - 2) != 0 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
            goto LABEL_24;
          v15 = "`generic-method-parameter-";
          DWORD2(v32) = 26;
          goto LABEL_38;
        }
        v15 = "`generic-class-parameter-";
      }
      else
      {
        v15 = "`template-type-parameter-";
      }
      DWORD2(v32) = 25;
LABEL_38:
      *(_QWORD *)&v32 = (uint64)(uintptr_t)(v15);
      v16 = sub_1401FE248((DName *)v33, (     struct StringLiteral *)&v32);
      sub_1401FE7C0((__int64)v16, (__int64)&v32, (__int64)&v34);
      v17 = 39;
      v18 = (unsigned __int64 *)&v32;
LABEL_70:
      sub_1401FE7EC((__int64)v18, (__int64)a1, v17);
      return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
    }
    v35 = 0;
    v36 = 0;
    sub_1401FFB98((sr_anon_89 *)&v35, 123);
    if ( (unsigned __int8)(v4 - 72) <= 2u )
    {
      v23 = sub_1402014E4((__int64)v33, v21, v22);
      sub_1401FE908((__int64)&v35, v23);
      if ( (char)v36 <= 1 )
      {
        if ( v35 )
        {
          v24 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
          if ( v24 )
          {
            *(_QWORD *)v24 = (uint64)(uintptr_t)(off_1402846F0);
            *(_BYTE *)(v24 + 8) = 44;
          }
          else
          {
            v24 = 0;
          }
          sub_1401FDE58(&v35, v24);
        }
        else
        {
          v35 = 0;
          v36 = 0;
          sub_1401FFB98((sr_anon_89 *)&v35, 44);
        }
      }
    }
    if ( v4 != 70 )
    {
      if ( v4 == 71 )
        goto LABEL_55;
      if ( v4 == 72 )
      {
LABEL_69:
        v29 = sub_140203F1C((__int64)v33);
        sub_1401FE908((__int64)&v35, v29);
        v17 = 125;
        v18 = &v35;
        goto LABEL_70;
      }
      if ( v4 != 73 )
      {
LABEL_55:
        v25 = sub_140203F1C((__int64)v33);
        sub_1401FE908((__int64)&v35, v25);
        if ( (char)v36 <= 1 )
        {
          if ( v35 )
          {
            v26 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
            if ( v26 )
            {
              *(_QWORD *)v26 = (uint64)(uintptr_t)(off_1402846F0);
              *(_BYTE *)(v26 + 8) = 44;
            }
            else
            {
              v26 = 0;
            }
            sub_1401FDE58(&v35, v26);
          }
          else
          {
            v35 = 0;
            v36 = 0;
            sub_1401FFB98((sr_anon_89 *)&v35, 44);
          }
        }
      }
    }
    v27 = sub_140203F1C((__int64)v33);
    sub_1401FE908((__int64)&v35, v27);
    if ( (char)v36 <= 1 )
    {
      if ( v35 )
      {
        v28 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v28 )
        {
          *(_QWORD *)v28 = (uint64)(uintptr_t)(off_1402846F0);
          *(_BYTE *)(v28 + 8) = 44;
        }
        else
        {
          v28 = 0;
        }
        sub_1401FDE58(&v35, v28);
      }
      else
      {
        v35 = 0;
        v36 = 0;
        sub_1401FFB98((sr_anon_89 *)&v35, 44);
      }
    }
    goto LABEL_69;
  }
  switch ( (_BYTE)v4 )
  {
    case 0x45:
      sub_1402014E4((__int64)a1, a2, a3);
      return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
    case 0:
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5 - 1);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
      *((_DWORD *)a1 + 2) = 0;
      return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
    case 0x30:
      sub_140203F1C((__int64)a1);
      return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
  }
  if ( (_BYTE)v4 != 49 )
  {
    if ( (_BYTE)v4 == 50 )
    {
      sub_140205440((__int64)a1);
      return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
    }
    if ( (_BYTE)v4 == 52 )
    {
      sub_1402042B4((__int64)a1);
      return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
    }
    if ( (unsigned __int8)(v4 - 65) <= 1u )
    {
      sub_140201F64(a1, v4);
      return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
    }
LABEL_24:
    *((_DWORD *)a1 + 2) = 0;
    *((_BYTE *)a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
  }
  if ( *v5 == 64 )
  {
    DWORD2(v34) = 4;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v5 + 1);
    *(_QWORD *)&v34 = (uint64)(uintptr_t)("NULL");
    v32 = v34;
    sub_1401FE248(a1, (     struct StringLiteral *)&v32);
  }
  else
  {
    v35 = 0;
    v36 = 0;
    sub_1401FFB98((sr_anon_89 *)&v35, 38);
    v9 = sub_1402014E4((__int64)&v32, v7, v8);
    sub_1401FE7C0((__int64)&v35, (__int64)a1, v9);
  }
  return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
}

// 140204BAB: conditional instruction was optimized away because ebx.4==4A
// 14020493D: variable 'v7' is possibly undefined
// 14020493D: variable 'v8' is possibly undefined
// 140204AF5: variable 'v19' is possibly undefined
// 140204AF5: variable 'v20' is possibly undefined
// 140204B2A: variable 'v21' is possibly undefined
// 140204B2A: variable 'v22' is possibly undefined
// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 1402846F0: using guessed type int (*off_1402846F0[2])(CMFCToolBarImages *__hidden this, int);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE630: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (0000000140204CC0) ----------------------------------------------------
__int64            sub_140204CC0(DName *a1)
{
  __int64 (           *v2)(_QWORD); // rdi
  unsigned int v3; // eax
  char *v4; // rax
  DName *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-70h] BYREF
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v11[15]; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+5Fh] [rbp-11h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]

  if ( **(_BYTE **)&dword_140404A6C[19064555] == 88 )
  {
    DWORD2(v9) = 4;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    *(_QWORD *)&v9 = (uint64)(uintptr_t)("void");
    v8 = v9;
    sub_1401FE248(a1, (     struct StringLiteral *)&v8);
  }
  else if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    sub_140203F1C((__int64)&v9);
    if ( (dword_140404A6C[19064559] & 0x4000) != 0
      && (v2 = *(__int64 (           **)(_QWORD))&dword_140404A6C[19064561]) != nullptr
      && (!(_QWORD)v9
        ? (__int64 (           *)(_QWORD))(v11[0] = 0)
        : (*(_BYTE *)(*(__int64 (           **)(_QWORD, _BYTE *, char *))(*(_QWORD *)v9 + 24LL))(v9, v11, &v12) = 0,
           v2 = *(__int64 (           **)(_QWORD))&dword_140404A6C[19064561]),
          v3 = unknown_libname_852((__int64)v11),
          (v4 = (char *)v2(v3)) != nullptr) )
    {
      sub_1401FDCAC((__int64)a1, v4);
    }
    else
    {
      DWORD2(v8) = 19;
      *(_QWORD *)&v8 = (uint64)(uintptr_t)("`template-parameter");
      v5 = sub_1401FE248((DName *)v10, (     struct StringLiteral *)&v8);
      sub_1401FE7C0((__int64)v5, (__int64)&v8, (__int64)&v9);
      sub_1401FE7EC((__int64)&v8, (__int64)a1, 39);
    }
  }
  else
  {
    *(_QWORD *)&v8 = 0;
    DWORD2(v8) = 0;
    sub_1402030E0(a1, (__int64)&v8);
  }
  return sub_1401F8B20((unsigned __int64)&v7 ^ v13);
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE630: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (0000000140204E28) ----------------------------------------------------
__int64            sub_140204E28(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp-10h]

  v3 = 0;
  v5 = 0;
  v4 = 0;
  v6 = 0;
  sub_140200AFC(a1, (__int64)&v5, 0, &v3, 1);
  return a1;
}


//----- (0000000140204E68) ----------------------------------------------------
__int64            sub_140204E68(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  bool v3; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)&dword_140404A6C[19064555];
  v2 = **(_BYTE **)&dword_140404A6C[19064555];
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = v2 == 90;
  result = a1;
  if ( v3 )
    *(_QWORD *)&dword_140404A6C[19064555] = v1 + 1;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140204E8C) ----------------------------------------------------
int sub_140204E8C()
{
  _BYTE *i; // r8
  int v1; // edx
  char *v2; // r8
  int v3; // ecx
  char *v4; // r8
  int v6; // edx
  int v7; // r10d
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // al
  int v12; // ecx
  int v13; // r9d
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // r9d
  int v24; // ecx
  int v25; // eax
  int v26; // r9d

  for ( i = *(_BYTE **)&dword_140404A6C[19064555]; ; *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i) )
  {
    v1 = 0;
    if ( *i == 95 )
    {
      ++i;
      v1 = 0x4000;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i);
    }
    if ( (unsigned __int8)(*i - 65) <= 0x19u )
    {
      v23 = (char)*i - 65;
      v24 = v1 | 0x8000;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i + 1);
      v6 = v1 | 0xA000;
      if ( (v23 & 1) == 0 )
        v6 = v24;
      if ( v23 < 24 )
      {
        v6 |= 0x800u;
        v25 = v23 & 0x18;
        if ( (v23 & 0x18) != 0 )
        {
          if ( v25 == 8 )
          {
            v6 |= 0x80u;
          }
          else if ( v25 != 16 )
          {
            return 0xFFFF;
          }
        }
        else
        {
          v6 |= 0x40u;
        }
        v26 = v23 & 6;
        if ( v26 )
        {
          switch ( v26 )
          {
            case 2:
              return v6 | 0x200;
            case 4:
              return v6 | 0x100;
            case 6:
              return v6 | 0x400;
            default:
              return 0xFFFF;
          }
        }
      }
      return v6;
    }
    if ( *i != 36 )
      break;
    v2 = i + 1;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v2);
    v3 = *v2;
    if ( v3 > 66 )
    {
      v8 = v3 - 67;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 13 )
              return 0xFFFF;
            *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(++v2);
            v11 = *v2;
            if ( *v2 < 48 )
              return 0xFFFF - (v11 != 0);
            v7 = 1;
            if ( v11 > 53 )
              return 0xFFFF - (v11 != 0);
            goto LABEL_39;
          }
          v6 = v1 | 0x9200;
        }
        else
        {
          v6 = v1 | 0x9100;
        }
      }
      else
      {
        v6 = 31744;
      }
LABEL_51:
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v2 + 1);
      return v6;
    }
    if ( v3 == 66 )
    {
      v6 = v1 | 0x9800;
      goto LABEL_51;
    }
    if ( !*v2 )
    {
      v6 = 65534;
      --v2;
      goto LABEL_51;
    }
    if ( v3 != 36 )
    {
      if ( v3 <= 47 )
        return 0xFFFF;
      v7 = 0;
      if ( v3 > 53 )
      {
        if ( v3 != 65 )
          return 0xFFFF;
        v6 = v1 | 0x9000;
        goto LABEL_51;
      }
LABEL_39:
      v12 = v1 | ((v7 + 5) << 8) | 0x8800;
      v6 = v1 | ((v7 + 5) << 8) | 0xA800;
      if ( (*v2 & 1) == 0 )
        v6 = v12;
      v13 = *v2 & 6;
      if ( (*v2 & 6) != 0 )
      {
        if ( v13 == 2 )
        {
          v6 |= 0x80u;
        }
        else if ( v13 != 4 )
        {
          return 0xFFFF;
        }
      }
      else
      {
        v6 |= 0x40u;
      }
      goto LABEL_51;
    }
    if ( v2[1] == 80 )
      ++v2;
    v4 = v2 + 1;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v4);
    if ( *v4 > 77 )
    {
      if ( *v4 <= 79 )
        goto LABEL_24;
      if ( *v4 != 81 )
      {
        if ( *v4 != 104 )
          return 0xFFFF;
        dword_140404A6C[19064563] = 0;
      }
    }
    else if ( *v4 < 76 )
    {
      if ( !*v4 )
        return 65534;
      if ( ((*v4 - 70) & 0xFD) != 0 )
      {
        if ( *v4 != 74 )
          return 0xFFFF;
LABEL_24:
        v2 = v4 + 1;
        *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v2);
        if ( (unsigned __int8)(*v2 - 48) <= 9u )
        {
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(&v2[*v2 - 47]);
          return sub_140204E8C() | 0x10000;
        }
        v6 = 0xFFFF;
        goto LABEL_51;
      }
    }
    i = v4 + 1;
  }
  v14 = (char)*i;
  if ( (unsigned __int8)(*i - 48) > 8u )
  {
    if ( (_BYTE)v14 == 57 )
    {
      v6 = 65533;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i + 1);
    }
    else if ( (_BYTE)v14 == 59 )
    {
      v6 = 27648;
      *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i + 1);
    }
    else
    {
      return ((_BYTE)v14 != 0) + 65534;
    }
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(i + 1);
    v15 = v14 - 48;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    if ( v22 != 1 )
                      return 0xFFFF;
                    return 30720;
                  }
                  else
                  {
                    return 28672;
                  }
                }
                else
                {
                  return 26624;
                }
              }
              else
              {
                return 24576;
              }
            }
            else
            {
              return 0x2000;
            }
          }
          else
          {
            return 0x4000;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 4096;
      }
    }
    else
    {
      return 2048;
    }
  }
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE638: using guessed type unsigned int;

//----- (0000000140205200) ----------------------------------------------------
char *           sub_140205200(UnDecorator *this, char *a2, __int64 a3)
{
  int v3; // esi
  char *v4; // rbx
  __int64 v6; // rdi
  int v7; // eax
  char v8; // cl
  char *v9; // rax
  char *i; // rdx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v3 = a3;
  v4 = a2;
  sub_140205C58((__int64)&v11, (__int64)a2, a3);
  if ( v12 == 3 )
    return nullptr;
  if ( v12 == 2 || (dword_140404A6C[19064559] & 0x1000) == 0 && **(_BYTE **)&dword_140404A6C[19064555] )
    v6 = *(_QWORD *)sub_1401FDBA0((__int64)&v11, *(char **)&dword_140404A6C[19064557]);
  else
    v6 = v11;
  if ( v4
    || (v6 ? (v7 = (**(__int64 (           ***)(__int64))v6)(v6)) : (v7 = 0),
        v3 = v7 + 1,
        (v4 = (char *)(*(__int64 (           **)(unsigned __int64))&dword_140404A6C[19064565])((v7 + 1 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)) != nullptr) )
  {
    if ( v6 )
      *(_BYTE *)(*(__int64 (           **)(__int64, char *, char *))(*(_QWORD *)v6 + 24LL))(v6, v4, &v4[v3 - 1]) = 0;
    else
      *v4 = 0;
    v8 = *v4;
    v9 = v4;
    for ( i = v4; *v9; ++i )
    {
      ++v9;
      if ( v8 == 32 )
      {
        *i = 32;
        while ( *v9 == 32 )
          ++v9;
      }
      else
      {
        *i = v8;
      }
      v8 = *v9;
    }
    *i = v8;
  }
  return v4;
}

// 1402052B9: conditional instruction was optimized away because rbx.8!=0
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140205354) ----------------------------------------------------
DName *           sub_140205354(DName *a1)
{
       char *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 65 )
    {
      v4 = 6;
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v3 = "{flat}";
      sub_1401FE248(a1, (     struct StringLiteral *)&v3);
    }
    else
    {
      *((_DWORD *)a1 + 2) = 0;
      *((_BYTE *)a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
    }
  }
  else
  {
    *((_DWORD *)a1 + 2) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001402053CC) ----------------------------------------------------
__int64            sub_1402053CC(__int64 a1)
{
  char *v1; // r8
  __int64 v2; // rdx
  char v4; // cl
  _QWORD *v6; // rax
  __int64 i; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(char **)&dword_140404A6C[19064555];
  v2 = 0;
  for ( i = 0; ; v2 = i )
  {
    v4 = *v1;
    if ( !*v1 )
    {
LABEL_6:
      *(_OWORD *)a1 = 0;
      return a1;
    }
    if ( v4 == 64 )
      break;
    if ( (unsigned __int8)(v4 - 65) > 0xFu )
      goto LABEL_6;
    ++v1;
    i = 16 * v2 + v4 - 65;
    *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v1);
  }
  v6 = (_QWORD *)sub_1401FE158((__int64)&i);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = *v6;
  return a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140205440) ----------------------------------------------------
__int64            sub_140205440(__int64 a1)
{
  _BYTE *v2; // rcx
  char i; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-60h] BYREF
  int v10; // [rsp+28h] [rbp-58h]
  _BYTE v11[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v15[16]; // [rsp+70h] [rbp-10h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    sub_140204CC0((DName *)&v9);
    sub_1401FE9BC((__int64)&v9, 123);
    v2 = *(_BYTE **)&dword_140404A6C[19064555];
    for ( i = 0; ; i = 1 )
    {
      if ( i )
      {
        sub_1401FE9BC((__int64)&v9, 44);
        v2 = *(_BYTE **)&dword_140404A6C[19064555];
      }
      switch ( *v2 )
      {
        case '2':
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v2 + 1);
          v7 = sub_140205440((__int64)v15);
          break;
        case '3':
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v2 + 1);
          v7 = sub_1401FFF34((__int64)v14);
          break;
        case '4':
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v2 + 1);
          v7 = sub_1402042B4((__int64)v13);
          break;
        default:
          v4 = sub_140204CC0((DName *)v11);
          sub_1401FE908((__int64)&v9, v4);
          sub_1401FE9BC((__int64)&v9, 58);
          v7 = sub_140204850((DName *)v12, v5, v6);
          break;
      }
      sub_1401FE908((__int64)&v9, v7);
      v2 = *(_BYTE **)&dword_140404A6C[19064555];
      if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
        break;
    }
    ++*(_QWORD *)&dword_140404A6C[19064555];
    sub_1401FE9BC((__int64)&v9, 125);
    *(_QWORD *)a1 = v9;
    *(_DWORD *)(a1 + 8) = v10;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

// 1402054DB: variable 'v5' is possibly undefined
// 1402054DB: variable 'v6' is possibly undefined
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140205574) ----------------------------------------------------
__int64            sub_140205574(__int64 a1, __int64 a2)
{
  sub_140205608(a1, a2);
  return a1;
}


//----- (000000014020558C) ----------------------------------------------------
__int64            sub_14020558C(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
       char *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  v9 = 5;
  *(_DWORD *)(a1 + 8) = v3;
  v8 = "{for ";
  sub_1401FE888(a1, (__int64)&v8);
  v6 = sub_14020392C((__int64)&v8, v4, v5);
  sub_1401FE908(a1, v6);
  sub_1401FE9BC(a1, 125);
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
    ++*(_QWORD *)&dword_140404A6C[19064555];
  return a1;
}

// 1402055CF: variable 'v4' is possibly undefined
// 1402055CF: variable 'v5' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140205608) ----------------------------------------------------
__int64            sub_140205608(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE *v6; // rax
  __int128 *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-9h] BYREF
  int v16; // [rsp+38h] [rbp-1h]
  __int128 v17; // [rsp+40h] [rbp+7h] BYREF
  __int128 v18; // [rsp+50h] [rbp+17h] BYREF
  __int128 v19; // [rsp+60h] [rbp+27h] BYREF
  _BYTE v20[16]; // [rsp+70h] [rbp+37h] BYREF
  _BYTE v21[16]; // [rsp+80h] [rbp+47h] BYREF

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v3;
  if ( (char)v3 <= 1 )
  {
    DWORD2(v17) = 0;
    if ( **(_BYTE **)&dword_140404A6C[19064555] )
    {
      v15 = 0;
      v16 = 0;
      *(_QWORD *)&v17 = 0;
      sub_140200AFC((__int64)&v18, (__int64)&v17, 0, &v15, 0);
      v4 = sub_1401FE7EC((__int64)&v18, (__int64)&v19, 32);
      v5 = sub_1401FE7C0(v4, (__int64)v20, a1);
      *(_QWORD *)a1 = *(_QWORD *)v5;
      LODWORD(v5) = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(a1 + 8) = v5;
      if ( (char)v5 <= 1 )
      {
        v6 = *(_BYTE **)&dword_140404A6C[19064555];
        if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
          goto LABEL_19;
        DWORD2(v17) = 5;
        *(_QWORD *)&v17 = (uint64)(uintptr_t)("{for ");
        v7 = &v18;
        v18 = v17;
LABEL_6:
        sub_1401FE888(a1, (__int64)v7);
        v10 = *(_BYTE *)(a1 + 8);
        v6 = *(_BYTE **)&dword_140404A6C[19064555];
        while ( v10 <= 1 )
        {
          if ( !*v6 )
            goto LABEL_16;
          if ( *v6 == 64 )
          {
            if ( !*v6 )
LABEL_16:
              sub_1401FEABC(a1, 1u);
            sub_1401FE9BC(a1, 125);
            v6 = *(_BYTE **)&dword_140404A6C[19064555];
            break;
          }
          v11 = sub_14020392C((__int64)v20, v8, v9);
          v15 = 0;
          v16 = 0;
          v12 = v11;
          sub_1401FFB98((sr_anon_89 *)&v15, 96);
          sub_1401FE7C0((__int64)&v15, (__int64)&v18, v12);
          v13 = sub_1401FE7EC((__int64)&v18, (__int64)v21, 39);
          sub_1401FE908(a1, v13);
          v6 = *(_BYTE **)&dword_140404A6C[19064555];
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
            v6 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
          v10 = *(_BYTE *)(a1 + 8);
          if ( v10 > 1 )
            break;
          if ( *v6 != 64 )
          {
            DWORD2(v17) = 2;
            *(_QWORD *)&v17 = (uint64)(uintptr_t)("s ");
            v7 = &v19;
            v19 = v17;
            goto LABEL_6;
          }
        }
        if ( *v6 == 64 )
LABEL_19:
          *(_QWORD *)&dword_140404A6C[19064555] = (uint64)(uintptr_t)(v6 + 1);
      }
    }
    else
    {
      *(_QWORD *)&v17 = (uint64)(uintptr_t)(&off_1402848D0);
      sub_1401FE7C0((__int64)&v17, (__int64)&v15, a1);
      *(_QWORD *)a1 = v15;
      *(_DWORD *)(a1 + 8) = v16;
    }
  }
  return a1;
}

// 140205799: conditional instruction was optimized away because cl.1<2
// 140205704: variable 'v8' is possibly undefined
// 140205704: variable 'v9' is possibly undefined
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140205810) ----------------------------------------------------
__int64            sub_140205810(__int64 a1, char a2, char a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rax
  _UNKNOWN ***v8; // rbx
  int v9; // edi
  char v10; // cl
  __int64 v11; // rax
       char *v12; // rax
  _BYTE *v13; // rcx
  int v14; // r8d
       char *v15; // rax
  __int64 v16; // r9
       char *v17; // rax
  _BYTE *v18; // rcx
  int v19; // r8d
  __int64 (           *v20)(_QWORD); // rbx
  unsigned int v21; // eax
  char *v22; // rax
  __int64 v23; // rax
  DName *v24; // rax
  _BYTE *v25; // rdx
  DName *v26; // rax
  int *v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v31; // [rsp+8h] [rbp-49h] BYREF
  _OWORD v32[2]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v33; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v34[16]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v35[16]; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v36[15]; // [rsp+78h] [rbp+27h] BYREF
  char v37; // [rsp+87h] [rbp+36h] BYREF
  __int64 v38; // [rsp+88h] [rbp+37h]

  v6 = (char)**(_BYTE **)&dword_140404A6C[19064555] - 48;
  if ( v6 <= 9 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    sub_1401FE684(*(signed int **)&dword_140404A6C[19064551], a1, v6);
    return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    v7 = sub_1402045BC((__int64)v32, 0);
    v8 = *(_UNKNOWN ****)v7;
    v9 = *(_DWORD *)(v7 + 8);
    v10 = **(_BYTE **)&dword_140404A6C[19064555];
    v11 = ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( v10 != 64 )
    {
      v8 = &off_1402848D0;
      *(_QWORD *)&dword_140404A6C[19064555] = v11 - 1;
      v9 = (*(_BYTE *)(v11 - 1) != 0) + 1;
      if ( *(_BYTE *)(v11 - 1) )
        v8 = nullptr;
    }
    goto LABEL_35;
  }
  v12 = "template-parameter-";
  v13 = *(_BYTE **)&dword_140404A6C[19064555];
  v14 = 18;
  do
  {
    if ( !*v13 )
      break;
    if ( *v13 != *v12 )
      break;
    ++v13;
    ++v12;
    --v14;
  }
  while ( v14 );
  if ( *v13 == *v12 )
  {
    v15 = "`template-parameter-";
    DWORD2(v32[0]) = 20;
    v16 = *(_QWORD *)&dword_140404A6C[19064555] + 19LL;
LABEL_20:
    *(_QWORD *)&v32[0] = (uint64)(uintptr_t)(v15);
    v33 = v32[0];
    *(_QWORD *)&dword_140404A6C[19064555] = v16;
    sub_140203F1C((__int64)v32);
    if ( (dword_140404A6C[19064559] & 0x4000) != 0
      && (v20 = *(__int64 (           **)(_QWORD))&dword_140404A6C[19064561]) != nullptr )
    {
      if ( *(_QWORD *)&v32[0] )
      {
        *(_BYTE *)(*(__int64 (           **)(_QWORD, _BYTE *, char *))(**(_QWORD **)&v32[0] + 24LL))(
                    *(_QWORD *)&v32[0],
                    v36,
                    &v37) = 0;
        v20 = *(__int64 (           **)(_QWORD))&dword_140404A6C[19064561];
      }
      else
      {
        v36[0] = 0;
      }
      v21 = unknown_libname_852((__int64)v36);
      v22 = (char *)v20(v21);
      if ( v22 )
      {
        v23 = sub_1401FDCAC((__int64)v32, v22);
        goto LABEL_34;
      }
      v24 = sub_1401FE248((DName *)v35, (     struct StringLiteral *)&v33);
      sub_1401FE7C0((__int64)v24, (__int64)&v33, (__int64)v32);
      v25 = v34;
    }
    else
    {
      v26 = sub_1401FE248((DName *)v34, (     struct StringLiteral *)&v33);
      sub_1401FE7C0((__int64)v26, (__int64)&v33, (__int64)v32);
      v25 = v35;
    }
    v23 = sub_1401FE7EC((__int64)&v33, (__int64)v25, 39);
    goto LABEL_34;
  }
  v17 = "generic-type-";
  v18 = *(_BYTE **)&dword_140404A6C[19064555];
  v19 = 12;
  do
  {
    if ( !*v18 )
      break;
    if ( *v18 != *v17 )
      break;
    ++v18;
    ++v17;
    --v19;
  }
  while ( v19 );
  if ( *v18 == *v17 )
  {
    v15 = "`generic-type-";
    DWORD2(v32[0]) = 14;
    v16 = *(_QWORD *)&dword_140404A6C[19064555] + 13LL;
    goto LABEL_20;
  }
  if ( a3 && **(_BYTE **)&dword_140404A6C[19064555] == 64 )
  {
    v8 = nullptr;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    v9 = 0;
    goto LABEL_35;
  }
  v23 = (__int64)sub_1401FE198((DName *)v34, (char **)&dword_140404A6C[19064555], 64);
LABEL_34:
  v8 = *(_UNKNOWN ****)v23;
  v9 = *(_DWORD *)(v23 + 8);
LABEL_35:
  if ( a2 )
  {
    v27 = *(int **)&dword_140404A6C[19064551];
    if ( **(_DWORD **)&dword_140404A6C[19064551] != 9 )
    {
      if ( v8 )
      {
        v28 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v28 )
        {
          *(_QWORD *)v28 = (uint64)(uintptr_t)(v8);
          *(_DWORD *)(v28 + 8) = v9;
          v29 = *v27;
          *v27 = v29 + 1;
          *(_QWORD *)&v27[2 * v29 + 4] = v28;
        }
      }
    }
  }
  *(_QWORD *)a1 = (uint64)(uintptr_t)(v8);
  *(_DWORD *)(a1 + 8) = v9;
  return sub_1401F8B20((unsigned __int64)&v31 ^ v38);
}

// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 1402848D0: using guessed type _UNKNOWN **off_1402848D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE608: using guessed type unsigned int;
// 144CBE630: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (0000000140205BC4) ----------------------------------------------------
__int64            sub_140205BC4(sr_anon_84 *this)
{
  __int64 (           ****v1)(_QWORD); // rcx
  __int64 result; // rax
  __int64 (           ***v3)(_QWORD); // rcx

  v1 = *((__int64 (           *****)(_QWORD))this + 1);
  result = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return (**v3)(v3);
  }
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140205BEC) ----------------------------------------------------
__int64            sub_140205BEC(sr_anon_119 *this)
{
  __int64 result; // rax
  int v3; // ebx

  result = *((unsigned int *)this + 6);
  if ( (int)result < 0 )
  {
    v3 = (***((__int64 (           ****)(_QWORD))this + 2))(*((_QWORD *)this + 2));
    result = v3 + (***((unsigned int (           ****)(_QWORD))this + 1))(*((_QWORD *)this + 1));
    *((_DWORD *)this + 6) = result;
  }
  return result;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140205C58) ----------------------------------------------------
__int64            sub_140205C58(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rax
  __int64 v5; // rbx
  DName *v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
       char *v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h]
  _BYTE v15[16]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-10h] BYREF

  v3 = *(_BYTE **)&dword_140404A6C[19064557];
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v3 )
  {
    if ( *v3 != 63 )
    {
LABEL_10:
      v10 = sub_1402014E4((__int64)v16, a2, a3);
      v11 = *(_QWORD *)v10;
      v7 = *(_DWORD *)(v10 + 8);
      *(_QWORD *)a1 = v11;
      goto LABEL_11;
    }
    if ( v3[1] == 64 )
    {
      *(_QWORD *)&dword_140404A6C[19064555] += 2LL;
      v13 = "CV: ";
      v14 = 4;
      v5 = sub_1402014E4((__int64)v15, a2, a3);
      v6 = sub_1401FE248((DName *)v16, (     struct StringLiteral *)&v13);
      sub_1401FE7C0((__int64)v6, (__int64)&v13, v5);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(v13);
      v7 = v14;
LABEL_11:
      *(_DWORD *)(a1 + 8) = v7;
      return a1;
    }
    if ( v3[1] != 36 )
    {
      if ( v3[1] == 63 && v3[2] == 64 )
      {
        *(_BYTE *)(a1 + 8) = 2;
        return a1;
      }
      goto LABEL_10;
    }
    v8 = sub_1402045BC((__int64)v16, 0);
    v9 = *(_QWORD *)v8;
    LODWORD(v8) = *(_DWORD *)(v8 + 8);
    *(_QWORD *)a1 = v9;
    *(_DWORD *)(a1 + 8) = v8;
    if ( (_BYTE)v8 == 2 || (dword_140404A6C[19064559] & 0x1000) == 0 && **(_BYTE **)&dword_140404A6C[19064555] )
    {
      *(_QWORD *)&dword_140404A6C[19064555] = *(_QWORD *)&dword_140404A6C[19064557];
      goto LABEL_10;
    }
  }
  return a1;
}

// 140205D35: variable 'a2' is possibly undefined
// 140205D35: variable 'a3' is possibly undefined
// 1401FE248: using guessed type DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE620: using guessed type unsigned int;

//----- (0000000140205E28) ----------------------------------------------------
char *           sub_140205E28(char *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, unsigned __int16 a6)
{
  return sub_140205E50(a1, a2, a3, a4, a5, 0, a6);
}


//----- (0000000140205E50) ----------------------------------------------------
char *           sub_140205E50(char *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  char *v12; // rbx
  void (*v13)(void); // rax
  _DWORD v14[22]; // [rsp+20h] [rbp-B8h] BYREF
  int v15; // [rsp+78h] [rbp-60h] BYREF

  if ( !a4 )
    return nullptr;
  sub_1401FDA08(0);
  *(_QWORD *)&dword_140404A6C[19064565] = a4;
  *(_QWORD *)&dword_140404A6C[19064567] = a5;
  *(_QWORD *)&dword_140404A6C[19064573] = 0;
  *(_OWORD *)&dword_140404A6C[19064569] = 0;
  v14[0] = -1;
  v15 = -1;
  *(_QWORD *)&dword_140404A6C[19064557] = a2;
  *(_QWORD *)&dword_140404A6C[19064555] = a2;
  *(_QWORD *)&dword_140404A6C[19064551] = (uint64)(uintptr_t)(&v15);
  *(_QWORD *)&dword_140404A6C[19064549] = (uint64)(uintptr_t)(v14);
  dword_140404A6C[19064559] = a7;
  *(_QWORD *)&dword_140404A6C[19064561] = a6;
  LOBYTE(dword_140404A6C[19064560]) = 0;
  dword_140404A6C[19064563] = 0;
  dword_140404A6C[19064564] = 0;
  v12 = sub_140205200((UnDecorator *)v14, a1, a3);
  v13 = *(void (**)(void))&dword_140404A6C[19064567];
  if ( *(_QWORD *)&dword_140404A6C[19064567] )
  {
    while ( 1 )
    {
      *(_QWORD *)&dword_140404A6C[19064571] = *(_QWORD *)&dword_140404A6C[19064569];
      if ( !*(_QWORD *)&dword_140404A6C[19064569] )
        break;
      *(_QWORD *)&dword_140404A6C[19064569] = **(_QWORD **)&dword_140404A6C[19064569];
      v13();
      v13 = *(void (**)(void))&dword_140404A6C[19064567];
    }
  }
  sub_1401FDA5C(0);
  return v12;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE600: using guessed type unsigned int;
// 144CBE608: using guessed type unsigned int;
// 144CBE620: using guessed type unsigned int;
// 144CBE628: using guessed type unsigned int;
// 144CBE62C: using guessed type unsigned int;
// 144CBE630: using guessed type __int64 (__fastcall *)(_QWORD);
// 144CBE638: using guessed type unsigned int;
// 144CBE63C: using guessed type unsigned int;
// 144CBE640: using guessed type unsigned int;
// 144CBE648: using guessed type unsigned int;
// 144CBE650: using guessed type unsigned int;
// 144CBE658: using guessed type unsigned int;
// 144CBE660: using guessed type unsigned int;

//----- (0000000140205F84) ----------------------------------------------------
__m128i *           sub_140205F84(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __m128i *v7; // rbx
  void (           *v8)(__int64); // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _DWORD v11[22]; // [rsp+20h] [rbp-B8h] BYREF
  int v12; // [rsp+78h] [rbp-60h] BYREF

  if ( !a4 )
    return nullptr;
  *(_QWORD *)&dword_140404A6C[19064573] = 0;
  *(_QWORD *)&dword_140404A6C[19064561] = 0;
  dword_140404A6C[19064563] = 0;
  dword_140404A6C[19064564] = 0;
  *(_QWORD *)&dword_140404A6C[19064567] = a5;
  v11[0] = -1;
  v12 = -1;
  *(_QWORD *)&dword_140404A6C[19064551] = (uint64)(uintptr_t)(&v12);
  *(_QWORD *)&dword_140404A6C[19064557] = a2;
  *(_QWORD *)&dword_140404A6C[19064555] = a2;
  *(_QWORD *)&dword_140404A6C[19064549] = (uint64)(uintptr_t)(v11);
  dword_140404A6C[19064559] = a6;
  *(_QWORD *)&dword_140404A6C[19064565] = a4;
  *(_OWORD *)&dword_140404A6C[19064569] = 0;
  LOBYTE(dword_140404A6C[19064560]) = 0;
  v7 = sub_140200880((UnDecorator *)v11, a1, a3);
  v8 = *(void (           **)(__int64))&dword_140404A6C[19064567];
  if ( *(_QWORD *)&dword_140404A6C[19064567] )
  {
    v9 = *(_QWORD **)&dword_140404A6C[19064569];
    *(_QWORD *)&dword_140404A6C[19064571] = *(_QWORD *)&dword_140404A6C[19064569];
    v10 = *(_QWORD *)&dword_140404A6C[19064569];
    if ( *(_QWORD *)&dword_140404A6C[19064569] )
    {
      while ( 1 )
      {
        *(_QWORD *)&dword_140404A6C[19064569] = *v9;
        v8(v10);
        v9 = *(_QWORD **)&dword_140404A6C[19064569];
        *(_QWORD *)&dword_140404A6C[19064571] = *(_QWORD *)&dword_140404A6C[19064569];
        v10 = *(_QWORD *)&dword_140404A6C[19064569];
        if ( !*(_QWORD *)&dword_140404A6C[19064569] )
          break;
        v8 = *(void (           **)(__int64))&dword_140404A6C[19064567];
      }
    }
  }
  return v7;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE600: using guessed type unsigned int;
// 144CBE608: using guessed type unsigned int;
// 144CBE620: using guessed type unsigned int;
// 144CBE628: using guessed type unsigned int;
// 144CBE62C: using guessed type unsigned int;
// 144CBE630: using guessed type __int64 (__fastcall *)(_QWORD);
// 144CBE638: using guessed type unsigned int;
// 144CBE63C: using guessed type unsigned int;
// 144CBE640: using guessed type unsigned int;
// 144CBE648: using guessed type unsigned int;
// 144CBE650: using guessed type unsigned int;
// 144CBE658: using guessed type unsigned int;
// 144CBE660: using guessed type unsigned int;

//----- (0000000140206150) ----------------------------------------------------
__int64            sub_140206150(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int16 *v6; // r14

  v3 = a1;
  if ( a1 == a2 )
    return 0;
  while ( 1 )
  {
    v4 = *v3;
    v5 = *(_QWORD *)&dword_140404A6C[2 * v4 + 19064575];
    if ( !v5 )
      break;
    if ( v5 != -1 )
      return v5;
LABEL_10:
    if ( ++v3 == a2 )
      return 0;
  }
  v6 = off_140284900[v4];
  v5 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v6, 0, 2048);
  if ( !v5
    && ((unsigned int)((__int64 (*)(void))GetLastError)() != 87
     || !(unsigned int)wcsncmp_sr(v6, L"api-ms-", 7)
     || (v5 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v6, 0, 0)) == 0) )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19064575], -1);
    goto LABEL_10;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19064575], v5) )
    ((void (           *)(__int64))FreeLibrary)(v5);
  return v5;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 140284900: using guessed type __int16 *off_140284900[3];
// 1402849B0: using guessed type __int16 aApiMs[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140206244) ----------------------------------------------------
__int64            sub_140206244(unsigned int a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rdi
  unsigned int *v6; // rbp
  __int64 result; // rax
  bool i; // zf
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int16 *v12; // r15

  v4 = a1;
  v6 = a3;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19064581];
  if ( result != -1 )
  {
    if ( result )
      return result;
    for ( i = a3 == a4; !i; i = v6 == a4 )
    {
      v10 = *v6;
      v11 = *(_QWORD *)&dword_140404A6C[2 * v10 + 19064575];
      if ( v11 )
      {
        if ( v11 != -1 )
          goto LABEL_16;
      }
      else
      {
        v12 = off_140284900[v10];
        v11 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v12, 0, 2048);
        if ( v11
          || (unsigned int)((__int64 (*)(void))GetLastError)() == 87
          && (unsigned int)wcsncmp_sr(v12, L"api-ms-", 7)
          && (v11 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v12, 0, 0)) != 0 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v10 + 19064575], v11) )
            ((void (           *)(__int64))FreeLibrary)(v11);
LABEL_16:
          result = ((__int64 (           *)(__int64, __int64))GetProcAddress)(v11, a2);
          if ( result )
          {
            _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19064581], result);
            return result;
          }
          break;
        }
        _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v10 + 19064575], -1);
      }
      ++v6;
    }
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19064581], -1);
  }
  return 0;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 140284900: using guessed type __int16 *off_140284900[3];
// 1402849B0: using guessed type __int16 aApiMs[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140206390) ----------------------------------------------------
__int64            sub_140206390(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int16 *v3; // rsi
  __int64 v4; // rbx

  v1 = a1;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19064575];
  if ( result )
  {
    if ( result == -1 )
      return 0;
  }
  else
  {
    v3 = off_140284900[a1];
    v4 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v3, 0, 2048);
    if ( v4
      || (unsigned int)((__int64 (*)(void))GetLastError)() == 87
      && (unsigned int)wcsncmp_sr(v3, L"api-ms-", 7)
      && (v4 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v3, 0, 0)) != 0 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19064575], v4) )
        ((void (           *)(__int64))FreeLibrary)(v4);
      return v4;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19064575], -1);
      return 0;
    }
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 140284900: using guessed type __int16 *off_140284900[3];
// 1402849B0: using guessed type __int16 aApiMs[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140206474) ----------------------------------------------------
__int64            sub_140206474(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int16 *v8; // r14

  v4 = a2;
  if ( a2 == a3 )
    return 0;
  while ( 1 )
  {
    v6 = *v4;
    v7 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19064575];
    if ( !v7 )
      break;
    if ( v7 != -1 )
      return ((__int64 (           *)(__int64, __int64))GetProcAddress)(v7, a1);
LABEL_10:
    if ( ++v4 == a3 )
      return 0;
  }
  v8 = off_140284900[v6];
  v7 = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v8, 0, 2048);
  if ( !v7
    && ((unsigned int)((__int64 (*)(void))GetLastError)() != 87
     || !(unsigned int)wcsncmp_sr(v8, L"api-ms-", 7)
     || (v7 = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v8, 0, 0)) == 0) )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19064575], -1);
    goto LABEL_10;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19064575], v7) )
    ((void (           *)(__int64))FreeLibrary)(v7);
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(v7, a1);
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 140284900: using guessed type __int16 *off_140284900[3];
// 1402849B0: using guessed type __int16 aApiMs[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140206580) ----------------------------------------------------
__int64            sub_140206580(_WORD *a1)
{
  __int64 result; // rax

  result = ((__int64 (           *)(_WORD *, _QWORD, __int64))LoadLibraryExW)(a1, 0, 2048);
  if ( !result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87 || !(unsigned int)wcsncmp_sr(a1, L"api-ms-", 7) )
      return 0;
    else
      return ((__int64 (           *)(_WORD *, _QWORD, _QWORD))LoadLibraryExW)(a1, 0, 0);
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 1402849B0: using guessed type __int16 aApiMs[8];

//----- (00000001402065DC) ----------------------------------------------------
__int64            sub_1402065DC(__int64 a1)
{
  __int64 (           *v2)(__int64); // rax

  v2 = (__int64 (           *)(__int64))sub_140206244(
                                          0,
                                          (__int64)"FlsAlloc",
                                          (unsigned int *)&unk_1402849C0,
                                          (unsigned int *)"FlsAlloc");
  if ( v2 )
    return v2(a1);
  else
    return ((__int64 (*)(void))TlsAlloc)();
}

// 14026E230: invalid function type 'DWORD (__stdcall *TlsAlloc)()' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140206624) ----------------------------------------------------
__int64            sub_140206624(unsigned int a1)
{
  __int64 (           *v2)(_QWORD); // rax

  v2 = (__int64 (           *)(_QWORD))sub_140206244(
                                         1u,
                                         (__int64)"FlsFree",
                                         (unsigned int *)&unk_1402849D8,
                                         (unsigned int *)"FlsFree");
  if ( v2 )
    return v2(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsFree)(a1);
}

// 14026E218: invalid function type 'BOOL (__stdcall *TlsFree)(DWORD dwTlsIndex)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014020666C) ----------------------------------------------------
__int64            sub_14020666C(unsigned int a1)
{
  __int64 (           *v2)(_QWORD); // rax

  v2 = (__int64 (           *)(_QWORD))sub_140206244(
                                         2u,
                                         (__int64)"FlsGetValue",
                                         (unsigned int *)&unk_1402849E8,
                                         (unsigned int *)"FlsGetValue");
  if ( v2 )
    return v2(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsGetValue)(a1);
}

// 14026E228: invalid function type 'LPVOID (__stdcall *TlsGetValue)(DWORD dwTlsIndex)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (00000001402066B4) ----------------------------------------------------
__int64            sub_1402066B4(unsigned int a1, __int64 a2)
{
  __int64 (           *v4)(_QWORD, __int64); // rax

  v4 = (__int64 (           *)(_QWORD, __int64))sub_140206244(
                                                  3u,
                                                  (__int64)"FlsSetValue",
                                                  (unsigned int *)&unk_140284A00,
                                                  (unsigned int *)"FlsSetValue");
  if ( v4 )
    return v4(a1, a2);
  else
    return ((__int64 (           *)(_QWORD, __int64))TlsSetValue)(a1, a2);
}

// 14026E220: invalid function type 'BOOL (__stdcall *TlsSetValue)(DWORD dwTlsIndex, LPVOID lpTlsValue)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140206708) ----------------------------------------------------
__int64            sub_140206708(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 (           *v6)(__int64, _QWORD, _QWORD); // rax

  v6 = (__int64 (           *)(__int64, _QWORD, _QWORD))sub_140206244(
                                                          4u,
                                                          (__int64)"InitializeCriticalSectionEx",
                                                          (unsigned int *)&unk_140284A18,
                                                          (unsigned int *)"InitializeCriticalSectionEx");
  if ( v6 )
    return v6(a1, a2, a3);
  else
    return ((__int64 (           *)(__int64, _QWORD))InitializeCriticalSectionAndSpinCount)(a1, a2);
}

// 14026E238: invalid function type 'BOOL (__stdcall *InitializeCriticalSectionAndSpinCount)(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140206794) ----------------------------------------------------
__int64            sub_140206794(
        struct EHExceptionRecord **a1,
        __int64 a2,
        unsigned __int64 *a3,
        struct CMFCToolBarImages *a4,
        __int64 a5,
        struct _s_FuncInfo *a6,
        int a7,
        _DWORD *a8)
{
  __int64 v11; // rbx

  *(_QWORD *)(sub_1401FD83C() + 112) = a2;
  v11 = *((_QWORD *)*a1 + 7);
  *(_QWORD *)(sub_1401FD83C() + 104) = v11;
  sub_140209250(*a1, a3, a4, a5, a6, 0, 0, 1);
  *(_QWORD *)(sub_1401FD83C() + 112) = 0;
  *a8 = 1;
  return 1;
}


//----- (000000014020682C) ----------------------------------------------------
__int64            sub_14020682C(
        struct EHExceptionRecord **a1,
        __int64 a2,
        unsigned __int64 *a3,
        struct CMFCToolBarImages *a4,
        __int64 a5,
        struct FH4__FuncInfo4 *a6,
        int a7,
        _DWORD *a8)
{
  __int64 v11; // rbx

  *(_QWORD *)(sub_1401FD83C() + 112) = a2;
  v11 = *((_QWORD *)*a1 + 7);
  *(_QWORD *)(sub_1401FD83C() + 104) = v11;
  *(_DWORD *)(sub_1401FD83C() + 120) = a7;
  sub_140209488(*a1, a3, a4, a5, a6, 0, 0, 1);
  *(_QWORD *)(sub_1401FD83C() + 112) = 0;
  *a8 = 1;
  return 1;
}


//----- (00000001402068D0) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1402068D0(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+58h] [rbp-20h] BYREF

  v6[0] = (uint64)(uintptr_t)(a1);
  v6[1] = a3;
  v4 = sub_1401FD83C();
  (*(void (           **)(_QWORD, _QWORD *))(v4 + 16))(*a1, v6);
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140206924) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140206924(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+58h] [rbp-20h] BYREF

  v6[0] = (uint64)(uintptr_t)(a1);
  v6[1] = a3;
  v4 = sub_1401FD83C();
  (*(void (           **)(_QWORD, _QWORD *))(v4 + 16))(*a1, v6);
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140206A78) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140206A78(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 12);
  while ( v2 )
  {
    result = *(_QWORD *)(sub_1401FD83C() + 96) + 20LL * (unsigned int)--v2 + *(int *)(a1 + 16);
    if ( a2 > *(_DWORD *)(result + 4) && a2 <= *(_DWORD *)(result + 8) )
      return result;
  }
  return 0;
}


//----- (0000000140206ACC) ----------------------------------------------------
__int64            sub_140206ACC(FH4 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, int a4)
{
  return sub_140206AE0(this, a2, a3, a4, 0);
}


//----- (0000000140206AE0) ----------------------------------------------------
__int64            sub_140206AE0(FH4 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, int a4, char a5)
{
  unsigned __int8 v5; // bl
  _BYTE *v6; // r10
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  _BYTE *v15; // r8
  int v16; // r9d
  __int64 v17; // rcx
  int *v18; // rdx
  unsigned int v19; // r10d
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx

  v5 = *(_BYTE *)this;
  v6 = (char *)this + 1;
  *a2 = *(_BYTE *)this;
  if ( (v5 & 4) != 0 )
  {
    v11 = *v6 & 0xF;
    v6 -= byte_140284A40[v11];
    *((_DWORD *)a2 + 1) = *((_DWORD *)v6 - 1) >> byte_140284A40[v11 + 16];
  }
  if ( (v5 & 8) != 0 )
  {
    v12 = *(_DWORD *)v6;
    v6 += 4;
    *((_DWORD *)a2 + 2) = v12;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)v6;
    v6 += 4;
    *((_DWORD *)a2 + 3) = v13;
  }
  v14 = *(int *)v6;
  v15 = v6 + 4;
  v16 = 0;
  if ( a5 || (v5 & 2) == 0 )
  {
    *((_DWORD *)a2 + 4) = v14;
  }
  else
  {
    v17 = *((_BYTE *)a3 + v14) & 0xF;
    v18 = (int *)((char *)a3 + v14 - byte_140284A40[v17]);
    v19 = (unsigned int)*(v18 - 1) >> byte_140284A40[v17 + 16];
    *((_DWORD *)a2 + 4) = 0;
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = *v18;
        v21 = v18[1];
        v18 += 2;
        if ( v20 == a4 )
          break;
        if ( ++v16 >= v19 )
          goto LABEL_15;
      }
      *((_DWORD *)a2 + 4) = v21;
    }
  }
LABEL_15:
  if ( (v5 & 1) != 0 )
  {
    v22 = *v15 & 0xF;
    v15 -= byte_140284A40[v22];
    *((_DWORD *)a2 + 5) = *((_DWORD *)v15 - 1) >> byte_140284A40[v22 + 16];
  }
  return v15 - (_BYTE *)this;
}


//----- (0000000140206C98) ----------------------------------------------------
bool            sub_140206C98(struct _xDISPATCHER_CONTEXT *a1,      struct _s_FuncInfo *a2)
{
  int v3; // eax

  v3 = sub_140207818(a2, a1);
  return sub_140206A78((__int64)a2, v3) != 0;
}


//----- (0000000140206CC4) ----------------------------------------------------
char            sub_140206CC4(struct _xDISPATCHER_CONTEXT *a1, struct FH4__FuncInfo4 *a2)
{
  return *(_BYTE *)a2 & 1;
}


//----- (0000000140206CCC) ----------------------------------------------------
void            sub_140206CCC(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  unsigned __int64 *v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  unsigned __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v5 = sub_140206D64(a1, a2, a3, &v9);
  v6 = sub_140207818(a3, a2);
  v7 = sub_140206A78((__int64)a3, v6);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 4);
  else
    v8 = -1;
  sub_14020A2C4(v5, a2, a3, v8);
}


//----- (0000000140206D30) ----------------------------------------------------
void            sub_140206D30(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, struct FH4__FuncInfo4 *a3)
{
  bool v3; // zf
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(_BYTE *)a3 & 1) == 0;
  v4 = *a1;
  v5 = v4;
  if ( !v3 )
    v5 = *(_QWORD *)(*((unsigned int *)a3 + 5) + v4);
  sub_14020A450(&v5, a2, a3, 0xFFFFFFFF);
}


//----- (0000000140206D64) ----------------------------------------------------
unsigned __int64 *           sub_140206D64(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
             struct _s_FuncInfo *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rdi
  int v9; // ebp
  _DWORD *v10; // rbx
  unsigned int *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned int v14; // r9d
  _DWORD *v15; // rdx
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v4) = *((_DWORD *)a3 + 3);
  v9 = sub_140207818(a3, a2);
  *a4 = *a1;
  while ( (_DWORD)v4 )
  {
    v4 = (unsigned int)(v4 - 1);
    v10 = (_DWORD *)(*((_QWORD *)a2 + 1) + *((int *)a3 + 4) + 20 * v4);
    if ( v9 > v10[1] && v9 <= v10[2] )
    {
      v11 = (unsigned int *)((__int64 (           *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
                              *(_QWORD *)a2,
                              &ImageBase,
                              0);
      v12 = 0;
      v13 = ImageBase + (int)v10[4];
      v14 = v10[3];
      if ( v14 )
      {
        v15 = (_DWORD *)(v13 + 12);
        while ( *v15 != (unsigned __int64)*v11 )
        {
          v12 = (unsigned int)(v12 + 1);
          v15 += 5;
          if ( (unsigned int)v12 >= v14 )
            goto LABEL_9;
        }
LABEL_10:
        *a4 = *(_QWORD *)(*(int *)(v13 + 20 * v12 + 16) + *a1);
        return a4;
      }
LABEL_9:
      if ( (unsigned int)v12 < v14 )
        goto LABEL_10;
    }
  }
  return a4;
}

// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (0000000140206E30) ----------------------------------------------------
unsigned __int64 *           sub_140206E30(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        struct FH4__FuncInfo4 *a3,
        unsigned __int64 *a4)
{
  *a4 = *a1;
  if ( (*(_BYTE *)a3 & 1) != 0 )
    *a4 = *(_QWORD *)(*((unsigned int *)a3 + 5) + *a1);
  return a4;
}


//----- (0000000140206E54) ----------------------------------------------------
_OWORD *           sub_140206E54(_OWORD *a1, __int64 a2, int a3, __int64 a4, struct _s_FuncInfo *a5)
{
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // r10d
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r11
  int v15; // r9d
  int v16; // r13d
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  unsigned int i; // r8d
  int v23; // eax
  int v24; // eax
  __int128 v26; // [rsp+20h] [rbp-48h]
  __int128 v27; // [rsp+30h] [rbp-38h]

  v9 = *((_DWORD *)a5 + 3);
  v10 = sub_140207818(a5, (struct _xDISPATCHER_CONTEXT *)a4);
  v11 = 0;
  v12 = v10;
  if ( !v9 )
    abort();
  v13 = *(_QWORD *)(a4 + 8);
  v14 = *((int *)a5 + 4);
  v15 = -1;
  v16 = -1;
  v17 = v9;
  while ( 1 )
  {
    v18 = v17 - 1;
    v19 = v13 + 20 * v18;
    if ( v12 > *(_DWORD *)(v19 + v14 + 4) && v12 <= *(_DWORD *)(v19 + v14 + 8) )
      break;
    --v17;
    if ( !(_DWORD)v18 )
    {
      v20 = 0;
      goto LABEL_8;
    }
  }
  v20 = v13 + v14 + 20LL * (v17 - 1);
LABEL_8:
  v21 = (_DWORD *)(v13 + v14);
  for ( i = 0; i < v9; ++i )
  {
    if ( (!v20 || *v21 > *(_DWORD *)(v20 + 4) && v21[1] <= *(_DWORD *)(v20 + 8)) && a3 >= *v21 && a3 <= v21[1] )
    {
      v23 = i;
      v16 = i;
      if ( v15 != -1 )
        v23 = v15;
      v15 = v23;
    }
    v21 += 5;
  }
  *(_QWORD *)&v26 = a2;
  v24 = 0;
  *(_QWORD *)&v27 = a2;
  if ( v15 != -1 )
    v24 = v15;
  DWORD2(v26) = v24;
  if ( v15 != -1 )
    v11 = v16 + 1;
  DWORD2(v27) = v11;
  *a1 = v26;
  a1[1] = v27;
  return a1;
}

// 140206F72: variable 'v26' is possibly undefined
// 140206F77: variable 'v27' is possibly undefined

//----- (0000000140206F94) ----------------------------------------------------
_OWORD *           sub_140206F94(_OWORD *a1, int *a2, int a3)
{
  __int128 v5; // xmm6
  int v7; // esi
  int v8; // r9d
  int v9; // r8d
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int128 v21; // [rsp+20h] [rbp-40h]
  __int128 v22; // [rsp+30h] [rbp-30h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&v21 = (uint64)(uintptr_t)(a2);
  *(_QWORD *)&v22 = (uint64)(uintptr_t)(a2);
  DWORD2(v21) = 0;
  v5 = v21;
  v23 = v21;
  v7 = 0;
  sub_140207378((__int64)a2, (__int64)&v23);
  v8 = *a2;
  v9 = 0;
  if ( *a2 )
  {
    do
    {
      v10 = *((_QWORD *)a2 + 3);
      if ( a3 >= (int)v10 && a3 <= SHIDWORD(v10) )
      {
        v7 = v9;
        DWORD2(v21) = 0;
      }
      v11 = *((_BYTE **)a2 + 1);
      ++v9;
      v12 = *v11 & 0xF;
      v13 = &v11[-byte_140284A40[v12]];
      v14 = *((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16];
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(v13);
      a2[6] = v14;
      v15 = *v13 & 0xF;
      v16 = &v13[-byte_140284A40[v15]];
      v17 = *((_DWORD *)v16 - 1) >> byte_140284A40[v15 + 16];
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(v16);
      a2[7] = v17;
      v18 = *v16 & 0xF;
      v19 = &v16[-byte_140284A40[v18]];
      a2[8] = *(v19 - 1) >> byte_140284A40[v18 + 16];
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(v19);
      LODWORD(v18) = *v19;
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(v19 + 1);
      a2[9] = v18;
    }
    while ( v9 != v8 );
    v5 = v21;
  }
  v23 = v5;
  DWORD2(v22) = v7 + 1;
  sub_140207378((__int64)a2, (__int64)&v23);
  *a1 = v5;
  a1[1] = v22;
  return a1;
}

// 14020700D: conditional instruction was optimized away because edi.4==0
// 140206FCA: variable 'v21' is possibly undefined
// 1402070DF: variable 'v22' is possibly undefined

//----- (0000000140207130) ----------------------------------------------------
__int64            sub_140207130(
        unsigned __int64 *a1,
        struct EHExceptionRecord *a2,
        struct _CONTEXT *a3,
        unsigned __int64 *a4,
        void *a5,
             struct _s_FuncInfo *a6,
        int a7,
        int a8,
             struct _s_HandlerType *a9,
        struct _xDISPATCHER_CONTEXT *a10,
        unsigned __int8 a11)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+0h] [rbp-C1h] BYREF
  __int64 HistoryTable; // [rsp+28h] [rbp-99h]
  _OWORD ExceptionRecord[10]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+Fh]

  ExceptionRecord[0] = unk_140284B00;
  ExceptionRecord[1] = unk_140284B10;
  ExceptionRecord[2] = unk_140284B20;
  memset(&ExceptionRecord[3], 0, 104);
  v11 = *a1;
  *(_QWORD *)&ExceptionRecord[2] = (uintptr_t)sub_140209C48;
  *(_QWORD *)&ExceptionRecord[3] = (uint64)(uintptr_t)(a5);
  *((_QWORD *)&ExceptionRecord[3] + 1) = a7;
  *((_QWORD *)&ExceptionRecord[4] + 1) = (uint64)(uintptr_t)(a6);
  *((_QWORD *)&ExceptionRecord[5] + 1) = a11;
  HistoryTable = *((_QWORD *)a10 + 8);
  v12 = *((_QWORD *)a10 + 5);
  *((_QWORD *)&ExceptionRecord[2] + 1) = (uint64)(uintptr_t)(a4);
  *(_QWORD *)&ExceptionRecord[4] = (uint64)(uintptr_t)(a3);
  *(_QWORD *)&ExceptionRecord[5] = (uint64)(uintptr_t)(a2);
  v13 = *(_QWORD *)a10;
  *(_QWORD *)&ExceptionRecord[6] = 429065504;
  ((void (           *)(__int64, __int64, _OWORD *, _QWORD, __int64, __int64))RtlUnwindEx)(
    v11,
    v13,
    ExceptionRecord,
    0,
    v12,
    HistoryTable);
  return sub_1401F8B20((unsigned __int64)&v15 ^ v18);
}

// 14026E278: invalid function type 'void (__stdcall *RtlUnwindEx)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (0000000140207234) ----------------------------------------------------
__int64            sub_140207234(
        unsigned __int64 *a1,
        struct EHExceptionRecord *a2,
        struct _CONTEXT *a3,
        unsigned __int64 *a4,
        void *a5,
        struct FH4__FuncInfo4 *a6,
        int a7,
        int a8,
        struct FH4__HandlerType4 *a9,
        struct _xDISPATCHER_CONTEXT *a10,
        unsigned __int8 a11)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // [rsp+0h] [rbp-C1h] BYREF
  __int64 HistoryTable; // [rsp+28h] [rbp-99h]
  _OWORD ExceptionRecord[10]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+Fh]

  ExceptionRecord[0] = unk_140284A60;
  ExceptionRecord[1] = unk_140284A70;
  *((_QWORD *)&ExceptionRecord[2] + 1) = unk_140284A88;
  *((_QWORD *)&ExceptionRecord[4] + 1) = unk_140284AA8;
  *(_QWORD *)&ExceptionRecord[5] = unk_140284AB0;
  memset(&ExceptionRecord[6], 0, 56);
  *(_QWORD *)&ExceptionRecord[2] = (uintptr_t)sub_140209E34;
  *(_QWORD *)&ExceptionRecord[3] = (uint64)(uintptr_t)(a5);
  *(_QWORD *)&ExceptionRecord[4] = (uint64)(uintptr_t)(a3);
  *((_QWORD *)&ExceptionRecord[3] + 1) = a7;
  *((_QWORD *)&ExceptionRecord[5] + 1) = a11;
  v12 = *((_QWORD *)a10 + 1) + *((_QWORD *)a9 + 3);
  v13 = *((_QWORD *)a10 + 1) + *((_QWORD *)a9 + 4);
  *((_QWORD *)&ExceptionRecord[7] + 1) = a8;
  HistoryTable = *((_QWORD *)a10 + 8);
  v14 = *((_QWORD *)a10 + 5);
  *((_QWORD *)&ExceptionRecord[2] + 1) = (uint64)(uintptr_t)(a4);
  *((_QWORD *)&ExceptionRecord[4] + 1) = v12;
  v15 = *a1;
  *(_QWORD *)&ExceptionRecord[5] = (uint64)(uintptr_t)(a2);
  v16 = *(_QWORD *)a10;
  *((_QWORD *)&ExceptionRecord[6] + 1) = v13;
  *(_QWORD *)&ExceptionRecord[6] = 429065504;
  ((void (           *)(__int64, __int64, _OWORD *, _QWORD, __int64, __int64))RtlUnwindEx)(
    v15,
    v16,
    ExceptionRecord,
    0,
    v14,
    HistoryTable);
  return sub_1401F8B20((unsigned __int64)&v18 ^ v21);
}

// 14026E278: invalid function type 'void (__stdcall *RtlUnwindEx)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (0000000140207378) ----------------------------------------------------
_DWORD *           sub_140207378(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // r8
  _DWORD *result; // rax
  int v15; // r8d
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rdx

  v2 = *(_BYTE **)(a1 + 16);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2);
  v5 = *v2 & 0xF;
  v6 = byte_140284A40[v5];
  LOBYTE(v5) = byte_140284A40[v5 + 16];
  v7 = &v2[-v6];
  LODWORD(v6) = *((_DWORD *)v7 - 1);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v7);
  *(_DWORD *)(a1 + 24) = (unsigned int)v6 >> v5;
  v8 = *v7 & 0xF;
  v9 = byte_140284A40[v8];
  LOBYTE(v8) = byte_140284A40[v8 + 16];
  v10 = &v7[-v9];
  LODWORD(v9) = *((_DWORD *)v10 - 1);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v10);
  *(_DWORD *)(a1 + 28) = (unsigned int)v9 >> v8;
  v11 = *v10 & 0xF;
  v12 = byte_140284A40[v11];
  LOBYTE(v11) = byte_140284A40[v11 + 16];
  v13 = &v10[-v12];
  LODWORD(v12) = *(v13 - 1);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v13);
  *(_DWORD *)(a1 + 32) = (unsigned int)v12 >> v11;
  result = v13 + 1;
  LODWORD(v11) = *v13;
  v15 = 0;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(result);
  *(_DWORD *)(a1 + 36) = v11;
  if ( *(_DWORD *)(a2 + 8) )
  {
    do
    {
      v16 = *(_BYTE **)(a1 + 8);
      ++v15;
      v17 = *v16 & 0xF;
      v18 = byte_140284A40[v17];
      LOBYTE(v17) = byte_140284A40[v17 + 16];
      v19 = &v16[-v18];
      LODWORD(v18) = *((_DWORD *)v19 - 1);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v19);
      *(_DWORD *)(a1 + 24) = (unsigned int)v18 >> v17;
      v20 = *v19 & 0xF;
      v21 = byte_140284A40[v20];
      LOBYTE(v20) = byte_140284A40[v20 + 16];
      v22 = &v19[-v21];
      LODWORD(v21) = *((_DWORD *)v22 - 1);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v22);
      *(_DWORD *)(a1 + 28) = (unsigned int)v21 >> v20;
      v23 = *v22 & 0xF;
      v24 = byte_140284A40[v23];
      LOBYTE(v23) = byte_140284A40[v23 + 16];
      v25 = &v22[-v24];
      LODWORD(v24) = *(v25 - 1);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v25);
      *(_DWORD *)(a1 + 32) = (unsigned int)v24 >> v23;
      LODWORD(v24) = *v25++;
      *(_DWORD *)(a1 + 36) = v24;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v25);
      v26 = *(_BYTE *)v25 & 0xF;
      v27 = (char *)v25 - byte_140284A40[v26];
      LODWORD(v24) = *((_DWORD *)v27 - 1) >> byte_140284A40[v26 + 16];
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v27);
      *(_DWORD *)(a1 + 24) = v24;
      v28 = *v27 & 0xF;
      v29 = &v27[-byte_140284A40[v28]];
      LODWORD(v24) = *((_DWORD *)v29 - 1) >> byte_140284A40[v28 + 16];
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v29);
      *(_DWORD *)(a1 + 28) = v24;
      v30 = *v29 & 0xF;
      v31 = &v29[-byte_140284A40[v30]];
      *(_DWORD *)(a1 + 32) = *(v31 - 1) >> byte_140284A40[v30 + 16];
      result = v31 + 1;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v31);
      LODWORD(v30) = *v31;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v31 + 1);
      *(_DWORD *)(a1 + 36) = v30;
    }
    while ( v15 != *(_DWORD *)(a2 + 8) );
  }
  return result;
}


//----- (000000014020753C) ----------------------------------------------------
_QWORD *           sub_14020753C(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx

  *a1 = a2;
  if ( (unsigned __int64)a1 >= *(_QWORD *)(sub_1401FD83C() + 88) )
    v3 = 0;
  else
    v3 = *(_QWORD *)(sub_1401FD83C() + 88);
  a1[1] = v3;
  *(_QWORD *)(sub_1401FD83C() + 88) = (uint64)(uintptr_t)(a1);
  return a1;
}


//----- (0000000140207578) ----------------------------------------------------
__int64            sub_140207578(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != *(_QWORD *)(sub_1401FD83C() + 88) || (v2 = *(_QWORD *)(sub_1401FD83C() + 88)) == 0 )
LABEL_7:
    abort();
  while ( 1 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( a1 == v2 )
      break;
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v3 )
      goto LABEL_7;
  }
  result = sub_1401FD83C();
  *(_QWORD *)(result + 88) = v3;
  return result;
}


//----- (00000001402075CC) ----------------------------------------------------
__int64 sub_1402075CC()
{
  return *(_QWORD *)(sub_1401FD83C() + 96);
}


//----- (00000001402075E0) ----------------------------------------------------
__int64 sub_1402075E0()
{
  return *(_QWORD *)(sub_1401FD83C() + 104);
}


//----- (00000001402075F4) ----------------------------------------------------
__int64            sub_1402075F4(__int64 a1)
{
  __int64 result; // rax

  result = sub_1401FD83C();
  *(_QWORD *)(result + 96) = a1;
  return result;
}


//----- (000000014020760C) ----------------------------------------------------
__int64            sub_14020760C(__int64 a1)
{
  __int64 result; // rax

  result = sub_1401FD83C();
  *(_QWORD *)(result + 104) = a1;
  return result;
}


//----- (0000000140207634) ----------------------------------------------------
__int64            sub_140207634(__int64 a1, unsigned __int64 a2, struct CMFCToolBarImages *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  v11 = a2;
  *(_QWORD *)(sub_1401FD83C() + 96) = v4;
  v8 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(sub_1401FD83C() + 104) = v8;
  v9 = sub_1401FD83C();
  return sub_140209250(
           (struct EHExceptionRecord *)a1,
           &v11,
           a3,
           a4,
           (struct _s_FuncInfo *)(*(_QWORD *)(v9 + 96) + **(unsigned int **)(a4 + 56)),
           0,
           0,
           0);
}


//----- (00000001402076BC) ----------------------------------------------------
__int64            sub_1402076BC(
        struct EHExceptionRecord *a1,
        unsigned __int64 a2,
        struct CMFCToolBarImages *a3,
        __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int8 v11[4]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+44h] [rbp-24h]
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]
  int v15; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+54h] [rbp-14h]
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v7 = *(_QWORD *)(a4 + 8);
  v11[0] = 0;
  v17 = a2;
  *(_QWORD *)(sub_1401FD83C() + 96) = v7;
  v8 = *((_QWORD *)a1 + 7);
  *(_QWORD *)(sub_1401FD83C() + 104) = v8;
  v9 = sub_1401FD83C();
  sub_140206AE0(
    (FH4 *)(*(_QWORD *)(v9 + 96) + **(unsigned int **)(a4 + 56)),
    v11,
    *(struct FH4__FuncInfo4 **)(a4 + 8),
    **(_DWORD **)(a4 + 16),
    0);
  return sub_140209488(a1, &v17, a3, a4, (struct FH4__FuncInfo4 *)v11, 0, 0, 0);
}


//----- (000000014020777C) ----------------------------------------------------
__int64            sub_14020777C(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(*((int *)a3 + 7) + *a1);
  if ( (_DWORD)result == -2 )
    return sub_140207828(a3, a2, *(_QWORD *)a2);
  return result;
}


//----- (00000001402077A4) ----------------------------------------------------
__int64            sub_1402077A4(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = *sub_140206D64(a1, a2, a3, &v7);
  v5 = *((int *)a3 + 7);
  v7 = v4;
  return *(unsigned int *)(v5 + v4 + 4);
}


//----- (00000001402077D0) ----------------------------------------------------
void            sub_1402077D0(unsigned __int64 *a1,      struct _s_FuncInfo *a2, int a3)
{
  *(_DWORD *)(*((int *)a2 + 7) + *a1) = a3;
}


//----- (00000001402077DC) ----------------------------------------------------
void            sub_1402077DC(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
             struct _s_FuncInfo *a3,
        int a4)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v6 = *sub_140206D64(a1, a2, a3, &v8);
  v7 = *((int *)a3 + 7);
  v8 = v6;
  if ( a4 > *(_DWORD *)(v7 + v6 + 4) )
    *(_DWORD *)(v7 + v6 + 4) = a4;
}


//----- (0000000140207818) ----------------------------------------------------
__int64            sub_140207818(     struct _s_FuncInfo *a1, struct _xDISPATCHER_CONTEXT *a2)
{
  return sub_140207828(a1, a2, *(_QWORD *)a2);
}


//----- (0000000140207820) ----------------------------------------------------
__int64            sub_140207820(struct FH4__FuncInfo4 *a1, struct _xDISPATCHER_CONTEXT *a2)
{
  return sub_140207890(a1, a2, *(_QWORD *)a2);
}


//----- (0000000140207828) ----------------------------------------------------
__int64            sub_140207828(     struct _s_FuncInfo *a1, struct _xDISPATCHER_CONTEXT *a2, unsigned __int64 a3)
{
  __int64 v4; // r11
  __int64 v5; // r10
  unsigned int v6; // r8d
  __int64 v7; // r9

  if ( !a1 || (v4 = *((int *)a1 + 6), v5 = *((_QWORD *)a2 + 1), !(v4 + v5)) )
    abort();
  v6 = *((_DWORD *)a1 + 5);
  v7 = 0;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( a3 < v5 + *(int *)(v4 + 8 * v7 + v5) )
      break;
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < v6 );
  if ( (_DWORD)v7 )
    return *(unsigned int *)(v4 + 8LL * (unsigned int)(v7 - 1) + v5 + 4);
  else
    return 0xFFFFFFFFLL;
}


//----- (0000000140207890) ----------------------------------------------------
__int64            sub_140207890(struct FH4__FuncInfo4 *a1, struct _xDISPATCHER_CONTEXT *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  _BYTE *v7; // r9
  unsigned int v8; // edx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  _BYTE *v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // r10
  __int64 v14; // rcx
  _BYTE *v15; // r9
  __int64 v16; // rcx

  if ( !*((_DWORD *)a1 + 4) )
    return 0xFFFFFFFFLL;
  v5 = *((_QWORD *)a2 + 1);
  v6 = 0;
  v7 = (_BYTE *)(v5 + *((int *)a1 + 4));
  v8 = -1;
  v9 = 0;
  v10 = *v7 & 0xF;
  v11 = &v7[-byte_140284A40[v10]];
  v12 = *((_DWORD *)v11 - 1) >> byte_140284A40[v10 + 16];
  if ( !v12 )
    return 0xFFFFFFFFLL;
  v13 = **((unsigned int **)a2 + 2);
  do
  {
    v14 = *v11 & 0xF;
    v15 = &v11[-byte_140284A40[v14]];
    v6 += *((_DWORD *)v15 - 1) >> byte_140284A40[v14 + 16];
    if ( a3 < v5 + v13 + (unsigned __int64)v6 )
      break;
    ++v9;
    v16 = *v15 & 0xF;
    v11 = &v15[-byte_140284A40[v16]];
    v8 = (*((_DWORD *)v11 - 1) >> byte_140284A40[v16 + 16]) - 1;
  }
  while ( v9 < v12 );
  if ( v9 )
    return v8;
  else
    return 0xFFFFFFFFLL;
}


//----- (0000000140207994) ----------------------------------------------------
__int64            sub_140207994(__int64 a1, __m128i *a2, int *a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
       __m128i *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
       __m128i *v18; // rax
  __int64 v19; // rcx

  v8 = 0;
  if ( a3[1] )
  {
    v9 = a3[1];
    v10 = v9 + sub_1402075CC();
  }
  else
  {
    v10 = 0;
    LODWORD(v9) = 0;
  }
  if ( v10 )
  {
    v11 = (_DWORD)v9 ? a3[1] + sub_1402075CC() : 0LL;
    if ( *(_BYTE *)(v11 + 16) && (a3[2] || *a3 < 0) )
    {
      if ( *a3 >= 0 )
        a2 = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + a3[2]);
      if ( *(char *)a3 < 0 && (*(_BYTE *)a4 & 0x10) != 0 && *(_QWORD *)&dword_140404A6C[19064501] )
      {
        v12 = (*(__int64 (**)(void))&dword_140404A6C[19064501])();
        if ( !v12 || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = v12;
        v13 = v12;
      }
      else if ( (*(_BYTE *)a3 & 8) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 40);
        if ( !v13 || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = v13;
      }
      else
      {
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          if ( *(_DWORD *)(a4 + 24) )
          {
            v15 = *(int *)(a4 + 24);
            v16 = v15 + sub_1402075E0();
          }
          else
          {
            v16 = 0;
            LODWORD(v15) = 0;
          }
          if ( v16 )
          {
            if ( !*(_QWORD *)(a1 + 40)
              || !a2
              || (!(_DWORD)v15 ? (v19 = 0) : (v19 = *(int *)(a4 + 24) + sub_1402075E0()), !v19) )
            {
              abort();
            }
            return (unsigned int)((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else
          {
            if ( !*(_QWORD *)(a1 + 40) || !a2 )
              abort();
            v17 = *(int *)(a4 + 20);
            v18 = (     __m128i *)sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
            sub_1401FC920(a2, v18, v17);
          }
          return v8;
        }
        v14 = *(     __m128i **)(a1 + 40);
        if ( !v14 || !a2 )
          abort();
        sub_1401FC920(a2, v14, *(int *)(a4 + 20));
        if ( *(_DWORD *)(a4 + 20) != 8 || !SR_VEC_PTR_LANES(128, a2, i64)[0] )
          return v8;
        v13 = SR_VEC_PTR_LANES(128, a2, i64)[0];
      }
      SR_VEC_PTR_LANES(128, a2, i64)[0] = sub_1401FD298(v13, (int *)(a4 + 8));
      return v8;
    }
  }
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE540: using guessed type __int64 (*)(void);

//----- (0000000140207B94) ----------------------------------------------------
__int64            sub_140207B94(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
       __m128i *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
       __m128i *v18; // rax
  __int64 v19; // rcx

  v8 = 0;
  if ( *(_DWORD *)(a3 + 8) )
  {
    v9 = *(int *)(a3 + 8);
    v10 = v9 + sub_1402075CC();
  }
  else
  {
    v10 = 0;
    LODWORD(v9) = 0;
  }
  if ( v10 )
  {
    v11 = (_DWORD)v9 ? *(int *)(a3 + 8) + sub_1402075CC() : 0LL;
    if ( *(_BYTE *)(v11 + 16) && (*(_DWORD *)(a3 + 12) || *(int *)(a3 + 4) < 0) )
    {
      if ( *(int *)(a3 + 4) >= 0 )
        a2 = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + *(unsigned int *)(a3 + 12));
      if ( *(char *)(a3 + 4) < 0 && (*(_BYTE *)a4 & 0x10) != 0 && *(_QWORD *)&dword_140404A6C[19064501] )
      {
        v12 = (*(__int64 (**)(void))&dword_140404A6C[19064501])();
        if ( !v12 || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = v12;
        v13 = v12;
      }
      else if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 40);
        if ( !v13 || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = v13;
      }
      else
      {
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          if ( *(_DWORD *)(a4 + 24) )
          {
            v15 = *(int *)(a4 + 24);
            v16 = v15 + sub_1402075E0();
          }
          else
          {
            v16 = 0;
            LODWORD(v15) = 0;
          }
          if ( v16 )
          {
            if ( !*(_QWORD *)(a1 + 40)
              || !a2
              || (!(_DWORD)v15 ? (v19 = 0) : (v19 = *(int *)(a4 + 24) + sub_1402075E0()), !v19) )
            {
              abort();
            }
            return (unsigned int)((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else
          {
            if ( !*(_QWORD *)(a1 + 40) || !a2 )
              abort();
            v17 = *(int *)(a4 + 20);
            v18 = (     __m128i *)sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
            sub_1401FC920(a2, v18, v17);
          }
          return v8;
        }
        v14 = *(     __m128i **)(a1 + 40);
        if ( !v14 || !a2 )
          abort();
        sub_1401FC920(a2, v14, *(int *)(a4 + 20));
        if ( *(_DWORD *)(a4 + 20) != 8 || !SR_VEC_PTR_LANES(128, a2, i64)[0] )
          return v8;
        v13 = SR_VEC_PTR_LANES(128, a2, i64)[0];
      }
      SR_VEC_PTR_LANES(128, a2, i64)[0] = sub_1401FD298(v13, (int *)(a4 + 8));
      return v8;
    }
  }
  return 0;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE540: using guessed type __int64 (*)(void);

//----- (0000000140207D98) ----------------------------------------------------
__int64            sub_140207D98(__int64 a1, __m128i *a2, int *a3, __int64 a4)
{
  __int64 (           *v6)(__int64, __int64); // rbx
  __m128i *v7; // rsi
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r14

  v6 = nullptr;
  if ( *a3 >= 0 )
    v7 = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + a3[2]);
  else
    v7 = a2;
  result = (unsigned int)sub_140207994(a1, a2, a3, a4) - 1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v9 = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
      if ( *(_DWORD *)(a4 + 24) )
        v6 = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
      return sub_14020AB20((__int64)v7, (__int64 (           *)(__int64, __int64, _QWORD))v6, v9, 1u);
    }
  }
  else
  {
    v10 = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
    if ( *(_DWORD *)(a4 + 24) )
      v6 = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
    return sub_14020AB14((__int64)v7, v6, v10);
  }
  return result;
}


//----- (0000000140207E58) ----------------------------------------------------
__int64            sub_140207E58(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 (           *v6)(__int64, __int64); // rbx
  __m128i *v7; // rsi
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r14

  v6 = nullptr;
  if ( *(int *)(a3 + 4) >= 0 )
    v7 = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + *(unsigned int *)(a3 + 12));
  else
    v7 = a2;
  result = (unsigned int)sub_140207B94(a1, a2, a3, a4) - 1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v9 = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
      if ( *(_DWORD *)(a4 + 24) )
        v6 = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
      return sub_14020AB20((__int64)v7, (__int64 (           *)(__int64, __int64, _QWORD))v6, v9, 1u);
    }
  }
  else
  {
    v10 = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
    if ( *(_DWORD *)(a4 + 24) )
      v6 = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
    return sub_14020AB14((__int64)v7, v6, v10);
  }
  return result;
}


//----- (0000000140207F1C) ----------------------------------------------------
__int64            sub_140207F1C(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct _s_FuncInfo *a5,
        struct _s_HandlerType *a6,
        __int64 a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
       struct _s_FuncInfo *v12; // r13
  __m128i *v16; // rax
  unsigned __int64 *v17; // r14
  struct _s_HandlerType *v18; // rsi
  int v19; // ebx
  int v20; // edi
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  struct CMFCToolBarImages *v24; // [rsp+B0h] [rbp+18h]

  v24 = a3;
  v12 = a5;
  v16 = (__m128i *)sub_140206D64(a2, a4, a5, &v23);
  v17 = (unsigned __int64 *)v16;
  v18 = a6;
  if ( a7 )
    sub_140207D98((__int64)a1, v16, (int *)a6, a7);
  v19 = a8[2];
  v20 = *a8;
  v21 = sub_1402075CC();
  return sub_140207130(a2, a1, v24, v17, (void *)(*((int *)v18 + 3) + v21), v12, v20, v19, v18, a4, a12);
}


//----- (0000000140207FF0) ----------------------------------------------------
__int64            sub_140207FF0(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct FH4__FuncInfo4 *a5,
        struct sr_anon_94 *a6,
        __int64 a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  struct FH4__FuncInfo4 *v12; // r13
  __m128i *v16; // rax
  unsigned __int64 *v17; // r14
  struct sr_anon_94 *v18; // rsi
  int v19; // ebx
  int v20; // edi
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  struct CMFCToolBarImages *v24; // [rsp+B0h] [rbp+18h]

  v24 = a3;
  v12 = a5;
  v16 = (__m128i *)sub_140206E30(a2, a4, a5, &v23);
  v17 = (unsigned __int64 *)v16;
  v18 = a6;
  if ( a7 )
    sub_140207E58((__int64)a1, v16, (__int64)a6, a7);
  v19 = a8[2];
  v20 = *a8;
  v21 = sub_1402075CC();
  return sub_140207234(a2, a1, v24, v17, (void *)(*((int *)v18 + 4) + v21), v12, v20, v19, v18, a4, a12);
}


//----- (00000001402080C4) ----------------------------------------------------
__int64            sub_1402080C4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct _s_FuncInfo *a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 *v8; // r12
  struct CMFCToolBarImages *v9; // r15
  char v11; // r13
  int v13; // eax
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rcx
       struct _s_ESTypeList *v17; // r15
  __int64 v18; // r9
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // r8
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r13
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  _BYTE *v28; // r8
       struct _s_ESTypeList *v29; // rdx
  unsigned __int64 *v30; // rax
  __int64 v32; // [rsp+0h] [rbp-100h] BYREF
  struct _s_FuncInfo *v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+50h] [rbp-B0h]
  char v35; // [rsp+60h] [rbp-A0h]
  _BYTE v36[7]; // [rsp+61h] [rbp-9Fh]
  struct CMFCToolBarImages *v37; // [rsp+68h] [rbp-98h]
  int *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v40; // [rsp+80h] [rbp-80h]
  int v41[2]; // [rsp+88h] [rbp-78h]
  unsigned __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v45; // [rsp+B0h] [rbp-50h]
  _QWORD v46[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v47; // [rsp+C8h] [rbp-38h]
  __int128 v48; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int128 pExceptionObject; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int64 v52; // [rsp+110h] [rbp+10h]

  v8 = a2;
  v9 = a3;
  v37 = a3;
  v40 = a2;
  v11 = 0;
  *(_QWORD *)v41 = a8;
  v36[0] = 0;
  v35 = 0;
  v13 = sub_14020A738(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
  v14 = v13;
  if ( v13 < -1 || v13 >= *((_DWORD *)a5 + 1) )
    goto LABEL_55;
  if ( *(_DWORD *)a1 != -529697949
    || *((_DWORD *)a1 + 6) != 4
    || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2
    || *((_QWORD *)a1 + 6) )
  {
LABEL_17:
    v46[1] = *(_QWORD *)(a4 + 8);
    v46[0] = (uint64)(uintptr_t)(a5);
    if ( *(_DWORD *)a1 != -529697949 || *((_DWORD *)a1 + 6) != 4 || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2 )
    {
      if ( *((_DWORD *)a5 + 3) )
      {
        if ( a6 )
          goto LABEL_55;
        sub_140208AC4(a1, v8, v9, a4, (__int64)a5, v14, a7, v41[0]);
      }
      goto LABEL_51;
    }
    if ( *((_DWORD *)a5 + 3) )
    {
      LODWORD(v33) = a7;
      sub_140206E54(&v48, (__int64)v46, v14, a4, a5);
      v47 = v48;
      if ( DWORD2(v48) < (unsigned int)v49 )
      {
        v18 = v48;
        v19 = DWORD2(v47);
        v39 = v48;
        do
        {
          v20 = *(_QWORD *)(v18 + 8);
          v21 = *(int *)(*(_QWORD *)v47 + 16LL) + 20LL * v19;
          v22 = *(__m128i *)(v21 + v20);
          v23 = *(int *)(v21 + v20 + 16);
          v45 = *(_DWORD *)(v21 + v20 + 16);
          *(__m128i *)v44 = v22;
          if ( _mm_cvtsi128_si32(v22) <= v14 && v14 <= SHIDWORD(v44[0]) )
          {
            v24 = *(_QWORD *)(a4 + 8) + v23;
            v25 = 0;
            v26 = HIDWORD(v44[1]);
            v43 = v24;
            if ( HIDWORD(v44[1]) )
            {
              while ( 1 )
              {
                pExceptionObject = *(_OWORD *)(v24 + 20 * v25);
                LODWORD(v51) = *(_DWORD *)(v24 + 20 * v25 + 16);
                v38 = (int *)(*(int *)(*((_QWORD *)a1 + 6) + 12LL) + sub_1402075E0() + 4);
                *(_DWORD *)&v36[3] = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
                if ( *(int *)&v36[3] > 0 )
                  break;
LABEL_29:
                v25 = (unsigned int)(v25 + 1);
                if ( (_DWORD)v25 == (_DWORD)v26 )
                {
                  v18 = v39;
                  goto LABEL_33;
                }
                v24 = v43;
              }
              while ( 1 )
              {
                v27 = sub_1402075E0();
                v28 = *((_BYTE **)a1 + 6);
                v42 = *v38 + v27;
                if ( (unsigned int)sub_140208FCC((__int64)&pExceptionObject, v42, v28) )
                  break;
                ++v38;
                --*(_DWORD *)&v36[3];
                if ( *(int *)&v36[3] <= 0 )
                  goto LABEL_29;
              }
              v11 = 1;
              LOBYTE(v34) = v36[0];
              v35 = 1;
              sub_140207F1C(
                a1,
                v40,
                v37,
                (struct _xDISPATCHER_CONTEXT *)a4,
                a5,
                (struct _s_HandlerType *)&pExceptionObject,
                v42,
                (int *)v44,
                a7,
                v41[0],
                v34,
                a6);
              v18 = v39;
            }
            else
            {
LABEL_33:
              v11 = v35;
            }
          }
          ++v19;
        }
        while ( v19 < (unsigned int)v49 );
        if ( v11 )
        {
LABEL_51:
          if ( !*(_QWORD *)(sub_1401FD83C() + 56) )
            return sub_1401F8B20((unsigned __int64)&v32 ^ v52);
LABEL_55:
          abort();
        }
        v8 = v40;
      }
    }
    if ( (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521
      && (*((_DWORD *)a5 + 8) && *((int *)a5 + 8) + sub_1402075CC()
       || (*((_DWORD *)a5 + 9) & 4) != 0 && !sub_140206C98((struct _xDISPATCHER_CONTEXT *)a4, a5)) )
    {
      if ( (*((_DWORD *)a5 + 9) & 4) != 0 )
      {
        *(_QWORD *)(sub_1401FD83C() + 32) = (uint64)(uintptr_t)(a1);
        *(_QWORD *)(sub_1401FD83C() + 40) = (uint64)(uintptr_t)(v37);
        terminate_sr();
      }
      if ( *((_DWORD *)a5 + 8) )
        v29 = (     struct _s_ESTypeList *)(*((int *)a5 + 8) + sub_1402075CC());
      else
        v29 = nullptr;
      if ( !sub_14020A870(a1, v29) )
      {
        v30 = sub_140206D64(v8, (struct _xDISPATCHER_CONTEXT *)a4, a5, &v42);
        sub_140207130(v8, a1, v37, v30, nullptr, a5, -1, -1, nullptr, (struct _xDISPATCHER_CONTEXT *)a4, a6);
      }
    }
    goto LABEL_51;
  }
  if ( *(_QWORD *)(sub_1401FD83C() + 32) )
  {
    a1 = *(struct EHExceptionRecord **)(sub_1401FD83C() + 32);
    v15 = sub_1401FD83C();
    v16 = *((_QWORD *)a1 + 7);
    v36[0] = 1;
    v9 = *(struct CMFCToolBarImages **)(v15 + 40);
    v37 = v9;
    sub_14020760C(v16);
    if ( *(_DWORD *)a1 == -529697949
      && *((_DWORD *)a1 + 6) == 4
      && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2
      && !*((_QWORD *)a1 + 6) )
    {
      goto LABEL_55;
    }
    if ( *(_QWORD *)(sub_1401FD83C() + 56) )
    {
      v17 = *(     struct _s_ESTypeList **)(sub_1401FD83C() + 56);
      *(_QWORD *)(sub_1401FD83C() + 56) = 0;
      if ( !sub_14020A870(a1, v17) )
      {
        if ( sub_14020A95C(v17) )
        {
          sub_1401FD18C((__int64)a1);
          sub_140209928(&pExceptionObject);
          sub_14020B0A4(&pExceptionObject, (_ThrowInfo *)&pThrowInfo);
        }
        terminate_sr();
      }
      v9 = v37;
    }
    goto LABEL_17;
  }
  return sub_1401F8B20((unsigned __int64)&v32 ^ v52);
}


//----- (00000001402085B4) ----------------------------------------------------
__int64            FindHandler____FrameHandler4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4__FuncInfo4 *a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 *v8; // r15
  int v12; // edi
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
       struct _s_ESTypeList *v17; // r15
  __int64 v18; // r15
  int v19; // r12d
  int v20; // r15d
  __int64 v21; // r12
  _BYTE *v22; // rdx
  __int64 v23; // rcx
  _BYTE *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  _BYTE *v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  __int64 v32; // [rsp+0h] [rbp-100h] BYREF
  struct FH4__FuncInfo4 *v33; // [rsp+20h] [rbp-E0h]
  struct sr_anon_94 *v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+64h] [rbp-9Ch]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  int *v40; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  int pExceptionObject[6]; // [rsp+88h] [rbp-78h] BYREF
  int v44[2]; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+C0h] [rbp-40h]
  _OWORD v47[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-18h]
  int v49[12]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v50[6]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v51; // [rsp+138h] [rbp+38h]
  __int128 v52; // [rsp+148h] [rbp+48h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  __int64 v54; // [rsp+170h] [rbp+70h]

  v8 = a2;
  v41 = a2;
  *(_QWORD *)v44 = a8;
  LOWORD(v36) = 0;
  v12 = sub_140207820(a5, (struct _xDISPATCHER_CONTEXT *)a4);
  if ( *(_DWORD *)(a4 + 72) )
  {
    if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
      goto LABEL_54;
    v12 = *(_DWORD *)(a4 + 72) - 2;
  }
  else if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
  {
    v12 = *(_DWORD *)(sub_1401FD83C() + 120);
    *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  }
  if ( v12 < -1 )
    goto LABEL_54;
  if ( *((_DWORD *)a5 + 2) )
  {
    v13 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
    v14 = *(_DWORD *)&v13[-byte_140284A40[*v13 & 0xF] - 4] >> byte_140284A40[(*v13 & 0xF) + 16];
  }
  else
  {
    v14 = 0;
  }
  if ( v12 >= v14 )
    goto LABEL_54;
  if ( *(_DWORD *)a1 != -529697949
    || *((_DWORD *)a1 + 6) != 4
    || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2
    || *((_QWORD *)a1 + 6) )
  {
LABEL_25:
    sub_1402097C4((FH4__TryBlockMap4 *)v49, a5, *(_QWORD *)(a4 + 8));
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) == 4 && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2 )
    {
      if ( !v49[0] )
        goto LABEL_45;
      LODWORD(v34) = a7;
      v33 = a5;
      sub_140206F94(&v45, v49, v12);
      *(_OWORD *)pExceptionObject = v45;
      if ( DWORD2(v45) >= v46 )
        goto LABEL_45;
      v18 = v45;
      v42 = v45;
      v38 = pExceptionObject[2];
      do
      {
        *(_OWORD *)pExceptionObject = *(_OWORD *)(v18 + 24);
        if ( pExceptionObject[0] <= v12 && v12 <= pExceptionObject[1] )
        {
          sub_14020971C(
            (FH4__HandlerMap4 *)v50,
            (     struct FH4__TryBlockMapEntry4 *)pExceptionObject,
            *(_QWORD *)(a4 + 8),
            **(_DWORD **)(a4 + 16));
          v19 = 0;
          v37 = 0;
          v39 = v50[0];
          if ( v50[0] )
          {
            while ( 1 )
            {
              v47[0] = v51;
              v48 = v53;
              v47[1] = v52;
              v40 = (int *)(*(int *)(*((_QWORD *)a1 + 6) + 12LL) + sub_1402075E0() + 4);
              v20 = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
              if ( v20 > 0 )
                break;
LABEL_38:
              sub_14020A084((FH4__HandlerMap4 *)v50);
              v37 = ++v19;
              if ( v19 == v39 )
                goto LABEL_41;
            }
            while ( 1 )
            {
              v21 = *v40 + sub_1402075E0();
              if ( (unsigned int)sub_14020910C((__int64)v47, v21, *((_BYTE **)a1 + 6)) )
                break;
              ++v40;
              if ( --v20 <= 0 )
              {
                v19 = v37;
                goto LABEL_38;
              }
            }
            LOBYTE(v35) = v36;
            BYTE1(v36) = 1;
            sub_140207FF0(
              a1,
              v41,
              a3,
              (struct _xDISPATCHER_CONTEXT *)a4,
              a5,
              (struct sr_anon_94 *)v47,
              v21,
              pExceptionObject,
              a7,
              v44[0],
              v35,
              a6);
LABEL_41:
            v18 = v42;
          }
        }
        v22 = *(_BYTE **)(v18 + 8);
        v23 = *v22 & 0xF;
        v24 = &v22[-byte_140284A40[v23]];
        v25 = *((_DWORD *)v24 - 1) >> byte_140284A40[v23 + 16];
        *(_QWORD *)(v18 + 8) = (uint64)(uintptr_t)(v24);
        *(_DWORD *)(v18 + 24) = v25;
        v26 = *v24 & 0xF;
        v27 = &v24[-byte_140284A40[v26]];
        v28 = *((_DWORD *)v27 - 1) >> byte_140284A40[v26 + 16];
        *(_QWORD *)(v18 + 8) = (uint64)(uintptr_t)(v27);
        *(_DWORD *)(v18 + 28) = v28;
        v29 = *v27 & 0xF;
        v30 = &v27[-byte_140284A40[v29]];
        *(_DWORD *)(v18 + 32) = *(v30 - 1) >> byte_140284A40[v29 + 16];
        *(_QWORD *)(v18 + 8) = (uint64)(uintptr_t)(v30);
        *(_DWORD *)(v18 + 36) = *v30;
        LODWORD(v29) = v38 + 1;
        *(_QWORD *)(v18 + 8) = (uint64)(uintptr_t)(v30 + 1);
        v38 = v29;
      }
      while ( (unsigned int)v29 < v46 );
      if ( !BYTE1(v36) )
      {
LABEL_45:
        if ( (*(_BYTE *)a5 & 0x40) != 0 && !sub_140206CC4((struct _xDISPATCHER_CONTEXT *)a4, a5) )
        {
          *(_QWORD *)(sub_1401FD83C() + 32) = (uint64)(uintptr_t)(a1);
          *(_QWORD *)(sub_1401FD83C() + 40) = (uint64)(uintptr_t)(a3);
          terminate_sr();
        }
      }
    }
    else if ( v49[0] )
    {
      if ( a6 )
        goto LABEL_54;
      sub_140208CDC(a1, v8, a3, a4, a5, v12, a7, a8);
    }
    if ( !*(_QWORD *)(sub_1401FD83C() + 56) )
      return sub_1401F8B20((unsigned __int64)&v32 ^ v54);
LABEL_54:
    abort();
  }
  if ( *(_QWORD *)(sub_1401FD83C() + 32) )
  {
    a1 = *(struct EHExceptionRecord **)(sub_1401FD83C() + 32);
    v15 = sub_1401FD83C();
    v16 = *((_QWORD *)a1 + 7);
    LOBYTE(v36) = 1;
    a3 = *(struct CMFCToolBarImages **)(v15 + 40);
    sub_14020760C(v16);
    if ( *(_DWORD *)a1 == -529697949
      && *((_DWORD *)a1 + 6) == 4
      && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2
      && !*((_QWORD *)a1 + 6) )
    {
      goto LABEL_54;
    }
    if ( *(_QWORD *)(sub_1401FD83C() + 56) )
    {
      v17 = *(     struct _s_ESTypeList **)(sub_1401FD83C() + 56);
      *(_QWORD *)(sub_1401FD83C() + 56) = 0;
      if ( !sub_14020A870(a1, v17) )
      {
        if ( sub_14020A95C(v17) )
        {
          sub_1401FD18C((__int64)a1);
          sub_140209928(pExceptionObject);
          sub_14020B0A4(pExceptionObject, (_ThrowInfo *)&pThrowInfo);
        }
        terminate_sr();
      }
      v8 = v41;
    }
    goto LABEL_25;
  }
  return sub_1401F8B20((unsigned __int64)&v32 ^ v54);
}


//----- (0000000140208AC4) ----------------------------------------------------
__int64            sub_140208AC4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // r13d
  __int64 v14; // r9
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // r8
  __m128i v18; // xmm0
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // r13
  int v22; // [rsp+58h] [rbp-69h]
  _QWORD v23[2]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v24; // [rsp+78h] [rbp-49h]
  __int64 v25[2]; // [rsp+88h] [rbp-39h] BYREF
  int v26; // [rsp+98h] [rbp-29h]
  __int128 v27; // [rsp+A0h] [rbp-21h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp-9h]
  __int64 vars8; // [rsp+100h] [rbp+3Fh] BYREF
  __int64 v30; // [rsp+108h] [rbp+47h]

  result = (__int64)&vars8;
  if ( *(_DWORD *)a1 != -2147483645 )
  {
    if ( !*(_QWORD *)(sub_1401FD83C() + 16)
      || (v12 = ((__int64 (           *)(_QWORD))EncodePointer)(0), *(_QWORD *)(sub_1401FD83C() + 16) == v12)
      || *(_DWORD *)a1 == -532459699 )
    {
      v13 = a7;
    }
    else
    {
      v13 = a7;
      if ( *(_DWORD *)a1 != -532462766 )
      {
        result = sub_1402068D0((unsigned int *)a1, (__int64)a2, (__int64)a3);
        if ( (_DWORD)result )
          return result;
      }
    }
    v23[1] = *(_QWORD *)(a4 + 8);
    v23[0] = a5;
    if ( !*(_DWORD *)(a5 + 12) )
      abort();
    sub_140206E54(&v27, (__int64)v23, a6, a4, (struct _s_FuncInfo *)a5);
    v24 = v27;
    result = DWORD2(v27);
    if ( DWORD2(v27) < v28 )
    {
      v14 = v27;
      v15 = DWORD2(v24);
      v30 = v27;
      do
      {
        v16 = *(_QWORD *)(v14 + 8);
        v17 = *(int *)(*(_QWORD *)v24 + 16LL) + 20LL * v15;
        v18 = *(__m128i *)(v17 + v16);
        v19 = *(int *)(v17 + v16 + 16);
        v26 = *(_DWORD *)(v17 + v16 + 16);
        result = (unsigned int)_mm_cvtsi128_si32(v18);
        *(__m128i *)v25 = v18;
        if ( (int)result <= a6 )
        {
          result = HIDWORD(v25[0]);
          if ( a6 <= SHIDWORD(v25[0]) )
          {
            v20 = *(_QWORD *)(a4 + 8) + v19 + 20 * (HIDWORD(v25[1]) - 1);
            if ( *(_DWORD *)(v20 + 4) )
            {
              v21 = *(int *)(v20 + 4);
              result = v21 + sub_1402075CC();
              if ( result )
              {
                result = (_DWORD)v21 ? *(int *)(v20 + 4) + sub_1402075CC() : 0LL;
                if ( *(_BYTE *)(result + 16) )
                  goto LABEL_23;
              }
              v13 = a7;
            }
            if ( (*(_BYTE *)v20 & 0x40) == 0 )
            {
              LOBYTE(v22) = 1;
              result = sub_140207F1C(
                         a1,
                         a2,
                         a3,
                         (struct _xDISPATCHER_CONTEXT *)a4,
                         (struct _s_FuncInfo *)a5,
                         (struct _s_HandlerType *)v20,
                         0,
                         (int *)v25,
                         v13,
                         a8,
                         v22,
                         0);
            }
          }
        }
LABEL_23:
        v13 = a7;
        ++v15;
        v14 = v30;
      }
      while ( v15 < v28 );
    }
  }
  return result;
}

// 14026E208: invalid function type 'PVOID (__stdcall *EncodePointer)(PVOID Ptr)' has been ignored
// 140208CB4: variable 'v22' is possibly undefined

//----- (0000000140208CDC) ----------------------------------------------------
__int64            sub_140208CDC(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4__FuncInfo4 *a5,
        int a6,
        int a7,
        __int64 a8)
{
  bool v8; // zf
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  _BYTE *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 v27; // [rsp+0h] [rbp-100h] BYREF
  struct FH4__FuncInfo4 *v28; // [rsp+20h] [rbp-E0h]
  struct sr_anon_94 *v29; // [rsp+28h] [rbp-D8h]
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  int v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  struct CMFCToolBarImages *v36; // [rsp+78h] [rbp-88h]
  __int64 v37[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v38; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  _BYTE v43[8]; // [rsp+C8h] [rbp-38h] BYREF
  int v44; // [rsp+D0h] [rbp-30h]
  int v45[10]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]

  v8 = *(_DWORD *)a1 == -2147483645;
  v35 = a8;
  v36 = a3;
  if ( !v8 )
  {
    if ( !*(_QWORD *)(sub_1401FD83C() + 16)
      || (v12 = ((__int64 (           *)(_QWORD))EncodePointer)(0), *(_QWORD *)(sub_1401FD83C() + 16) == v12)
      || *(_DWORD *)a1 == -532459699
      || *(_DWORD *)a1 == -532462766
      || (LODWORD(v31) = a6,
          v30 = v35,
          LODWORD(v29) = a7,
          v28 = a5,
          !(unsigned int)sub_140206924((unsigned int *)a1, (__int64)a2, (__int64)v36)) )
    {
      sub_1402097C4((FH4__TryBlockMap4 *)v45, a5, *(_QWORD *)(a4 + 8));
      if ( !v45[0] )
        abort();
      LODWORD(v29) = a7;
      v28 = a5;
      sub_140206F94(&v38, v45, a6);
      *(_OWORD *)v37 = v38;
      if ( DWORD2(v38) < v39 )
      {
        v13 = v38;
        v34 = v38;
        v33 = v37[1];
        do
        {
          *(_OWORD *)v37 = *(_OWORD *)(v13 + 24);
          if ( SLODWORD(v37[0]) <= a6 && a6 <= SHIDWORD(v37[0]) )
          {
            sub_14020971C(
              (FH4__HandlerMap4 *)&v40,
              (     struct FH4__TryBlockMapEntry4 *)v37,
              *(_QWORD *)(a4 + 8),
              **(_DWORD **)(a4 + 16));
            v41 = v42;
            sub_14020A084((FH4__HandlerMap4 *)&v40);
            v14 = v40;
            v41 = v42;
            sub_14020A084((FH4__HandlerMap4 *)&v40);
            v15 = (unsigned int)(v14 - 1);
            if ( (_DWORD)v15 )
            {
              do
              {
                sub_14020A084((FH4__HandlerMap4 *)&v40);
                --v15;
              }
              while ( v15 );
            }
            if ( !v44
              || !(v44 + sub_1402075CC())
              || (!v44 ? (v16 = 0) : (v16 = v44 + sub_1402075CC()), !*(_BYTE *)(v16 + 16)) )
            {
              if ( (v43[4] & 0x40) == 0 )
              {
                LOBYTE(v32) = 1;
                sub_140207FF0(
                  a1,
                  a2,
                  v36,
                  (struct _xDISPATCHER_CONTEXT *)a4,
                  a5,
                  (struct sr_anon_94 *)v43,
                  0,
                  (int *)v37,
                  a7,
                  v35,
                  v32,
                  0);
              }
            }
            v13 = v34;
          }
          v17 = *(_BYTE **)(v13 + 8);
          v18 = *v17 & 0xF;
          v19 = &v17[-byte_140284A40[v18]];
          v20 = *((_DWORD *)v19 - 1) >> byte_140284A40[v18 + 16];
          *(_QWORD *)(v13 + 8) = (uint64)(uintptr_t)(v19);
          *(_DWORD *)(v13 + 24) = v20;
          v21 = *v19 & 0xF;
          v22 = &v19[-byte_140284A40[v21]];
          v23 = *((_DWORD *)v22 - 1) >> byte_140284A40[v21 + 16];
          *(_QWORD *)(v13 + 8) = (uint64)(uintptr_t)(v22);
          *(_DWORD *)(v13 + 28) = v23;
          v24 = *v22 & 0xF;
          v25 = &v22[-byte_140284A40[v24]];
          *(_DWORD *)(v13 + 32) = *(v25 - 1) >> byte_140284A40[v24 + 16];
          *(_QWORD *)(v13 + 8) = (uint64)(uintptr_t)(v25);
          *(_DWORD *)(v13 + 36) = *v25;
          LODWORD(v24) = v33 + 1;
          *(_QWORD *)(v13 + 8) = (uint64)(uintptr_t)(v25 + 1);
          v33 = v24;
        }
        while ( (unsigned int)v24 < v39 );
      }
    }
  }
  return sub_1401F8B20((unsigned __int64)&v27 ^ v46);
}

// 14026E208: invalid function type 'PVOID (__stdcall *EncodePointer)(PVOID Ptr)' has been ignored

//----- (0000000140208FCC) ----------------------------------------------------
__int64            sub_140208FCC(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int8 *v13; // rax
  __int64 v14; // r8
  int v15; // edx
  int v16; // ecx

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  v7 = *(int *)(a1 + 4);
  if ( !(v7 + sub_1402075CC()) )
    return 1;
  if ( (_DWORD)v7 )
  {
    v8 = *(int *)(a1 + 4);
    v9 = v8 + sub_1402075CC();
  }
  else
  {
    v9 = 0;
    LODWORD(v8) = 0;
  }
  if ( !*(_BYTE *)(v9 + 16) || *(char *)a1 < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  if ( (_DWORD)v8 )
    v10 = *(int *)(a1 + 4) + sub_1402075CC();
  else
    v10 = 0;
  if ( v10 != *(int *)(a2 + 4) + sub_1402075E0() )
  {
    v11 = *(_DWORD *)(a1 + 4) ? *(int *)(a1 + 4) + sub_1402075CC() : 0LL;
    v12 = sub_1402075E0() + *(int *)(a2 + 4) + 16LL;
    v13 = (unsigned __int8 *)(v11 + 16);
    v14 = v12 - (v11 + 16);
    do
    {
      v15 = v13[v14];
      v16 = *v13 - v15;
      if ( v16 )
        break;
      ++v13;
    }
    while ( v15 );
    if ( v16 )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)a1 & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)a1 & 1) != 0)
    && ((*a3 & 4) == 0 || (*(_BYTE *)a1 & 4) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)a1 & 2) != 0) )
  {
    return 1;
  }
  return v3;
}


//----- (000000014020910C) ----------------------------------------------------
__int64            sub_14020910C(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int8 *v13; // rax
  __int64 v14; // r8
  int v15; // edx
  int v16; // ecx

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 8) )
    return 1;
  v7 = *(int *)(a1 + 8);
  if ( !(v7 + sub_1402075CC()) )
    return 1;
  if ( (_DWORD)v7 )
  {
    v8 = *(int *)(a1 + 8);
    v9 = v8 + sub_1402075CC();
  }
  else
  {
    v9 = 0;
    LODWORD(v8) = 0;
  }
  if ( !*(_BYTE *)(v9 + 16) || *(char *)(a1 + 4) < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  if ( (_DWORD)v8 )
    v10 = *(int *)(a1 + 8) + sub_1402075CC();
  else
    v10 = 0;
  if ( v10 != *(int *)(a2 + 4) + sub_1402075E0() )
  {
    v11 = *(_DWORD *)(a1 + 8) ? *(int *)(a1 + 8) + sub_1402075CC() : 0LL;
    v12 = sub_1402075E0() + *(int *)(a2 + 4) + 16LL;
    v13 = (unsigned __int8 *)(v11 + 16);
    v14 = v12 - (v11 + 16);
    do
    {
      v15 = v13[v14];
      v16 = *v13 - v15;
      if ( v16 )
        break;
      ++v13;
    }
    while ( v15 );
    if ( v16 )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)(a1 + 4) & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)(a1 + 4) & 1) != 0)
    && ((*a3 & 4) == 0 || (*(_BYTE *)(a1 + 4) & 4) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)(a1 + 4) & 2) != 0) )
  {
    return 1;
  }
  return v3;
}


//----- (0000000140209250) ----------------------------------------------------
__int64            sub_140209250(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct _s_FuncInfo *a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  bool v12; // zf
  int v13; // eax
  int v14; // r9d
  unsigned __int64 *v15; // rcx
  __int64 (           *v16)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct _s_FuncInfo *, int, __int64, _DWORD); // r10

  sub_1401FDACC((__int64)a3);
  if ( *(_DWORD *)(sub_1401FD83C() + 64) || *(_DWORD *)a1 == -529697949 )
    goto LABEL_10;
  if ( *(_DWORD *)a1 != -2147483607 )
  {
    v12 = *(_DWORD *)a1 == -2147483610;
LABEL_7:
    if ( v12 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( *((_DWORD *)a1 + 6) == 15 )
  {
    v12 = *((_QWORD *)a1 + 12) == 429065504;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930522 && (*((_BYTE *)a5 + 36) & 1) != 0 )
    return 1;
LABEL_10:
  if ( (*((_BYTE *)a1 + 4) & 0x66) != 0 )
  {
    if ( !*((_DWORD *)a5 + 1) || a6 )
      return 1;
    if ( (*((_BYTE *)a1 + 4) & 0x20) != 0 )
    {
      if ( *(_DWORD *)a1 == -2147483610 )
      {
        v13 = sub_140207828(a5, (struct _xDISPATCHER_CONTEXT *)a4, *(_QWORD *)(a4 + 32));
        if ( v13 >= -1 && v13 < *((_DWORD *)a5 + 1) )
        {
          v14 = v13;
          v15 = a2;
LABEL_18:
          sub_14020A2C4(v15, (struct _xDISPATCHER_CONTEXT *)a4, a5, v14);
          return 1;
        }
        goto LABEL_38;
      }
      if ( *(_DWORD *)a1 == -2147483607 )
      {
        v14 = *((_DWORD *)a1 + 14);
        if ( v14 >= -1 && v14 < *((_DWORD *)a5 + 1) )
        {
          v15 = *((unsigned __int64 **)a1 + 5);
          goto LABEL_18;
        }
LABEL_38:
        abort();
      }
    }
    sub_140206CCC(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
    return 1;
  }
  if ( *((_DWORD *)a5 + 3)
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521 && *((_DWORD *)a5 + 8) && *((int *)a5 + 8) + sub_1402075CC()
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930522 && (*((_DWORD *)a5 + 9) & 4) != 0 )
  {
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) >= 3u && *((_DWORD *)a1 + 8) > 0x19930522u )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 6) + 8LL) )
      {
        v16 = (__int64 (           *)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct _s_FuncInfo *, int, __int64, _DWORD))(*(int *)(*((_QWORD *)a1 + 6) + 8LL) + sub_1402075E0());
        if ( v16 )
          return v16(a1, a2, a3, a4, a5, a6, a7, a8);
      }
    }
    sub_1402080C4(a1, a2, a3, a4, a5, a8, a6, a7);
  }
  return 1;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (0000000140209488) ----------------------------------------------------
__int64            sub_140209488(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4__FuncInfo4 *a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  signed int v12; // esi
  _BYTE *v13; // rdx
  signed int v14; // r9d
  _BYTE *v15; // rdx
  unsigned __int64 *v16; // rcx
  _BYTE *v17; // rdx
  __int64 (           *v18)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct FH4__FuncInfo4 *, int, __int64, _DWORD); // r10
  _DWORD v20[12]; // [rsp+50h] [rbp-48h] BYREF

  sub_1401FDACC((__int64)a3);
  v12 = 0;
  if ( !*(_DWORD *)(sub_1401FD83C() + 64) && *(_DWORD *)a1 != -529697949 )
  {
    if ( *(_DWORD *)a1 != -2147483607 )
      goto LABEL_6;
    if ( *((_DWORD *)a1 + 6) != 15 )
      goto LABEL_7;
    if ( *((_QWORD *)a1 + 12) != 429065504 )
    {
LABEL_6:
      if ( *(_DWORD *)a1 != -2147483610 )
      {
LABEL_7:
        if ( (*(_BYTE *)a5 & 0x20) != 0 )
          return 1;
      }
    }
  }
  if ( (*((_BYTE *)a1 + 4) & 0x66) != 0 )
  {
    if ( !*((_DWORD *)a5 + 2) )
      return 1;
    v13 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
    if ( !(*(_DWORD *)&v13[-byte_140284A40[*v13 & 0xF] - 4] >> byte_140284A40[(*v13 & 0xF) + 16]) || a6 )
      return 1;
    if ( (*((_BYTE *)a1 + 4) & 0x20) != 0 )
    {
      if ( *(_DWORD *)a1 == -2147483610 )
      {
        v14 = sub_140207890(a5, (struct _xDISPATCHER_CONTEXT *)a4, *(_QWORD *)(a4 + 32));
        if ( v14 >= -1 )
        {
          if ( *((_DWORD *)a5 + 2) )
          {
            v15 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
            v12 = *(_DWORD *)&v15[-byte_140284A40[*v15 & 0xF] - 4] >> byte_140284A40[(*v15 & 0xF) + 16];
          }
          if ( v14 < v12 )
          {
            v16 = a2;
LABEL_19:
            sub_14020A450(v16, (struct _xDISPATCHER_CONTEXT *)a4, a5, v14);
            return 1;
          }
        }
        goto LABEL_35;
      }
      if ( *(_DWORD *)a1 == -2147483607 )
      {
        v14 = *((_DWORD *)a1 + 14);
        if ( v14 >= -1 )
        {
          v17 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
          if ( v14 < *(_DWORD *)&v17[-byte_140284A40[*v17 & 0xF] - 4] >> byte_140284A40[(*v17 & 0xF) + 16] )
          {
            v16 = *((unsigned __int64 **)a1 + 5);
            goto LABEL_19;
          }
        }
LABEL_35:
        abort();
      }
    }
    sub_140206D30(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
    return 1;
  }
  sub_1402097C4((FH4__TryBlockMap4 *)v20, a5, *(_QWORD *)(a4 + 8));
  if ( v20[0] || (*(_BYTE *)a5 & 0x40) != 0 )
  {
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) >= 3u && *((_DWORD *)a1 + 8) > 0x19930522u )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 6) + 8LL) )
      {
        v18 = (__int64 (           *)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct FH4__FuncInfo4 *, int, __int64, _DWORD))(*(int *)(*((_QWORD *)a1 + 6) + 8LL) + sub_1402075E0());
        if ( v18 )
          return v18(a1, a2, a3, a4, a5, a6, a7, a8);
      }
    }
    FindHandler____FrameHandler4(a1, a2, a3, a4, a5, a8, a6, a7);
  }
  return 1;
}

// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014020971C) ----------------------------------------------------
FH4__HandlerMap4 *           sub_14020971C(
        FH4__HandlerMap4 *this,
             struct FH4__TryBlockMapEntry4 *a2,
        __int64 a3,
        int a4)
{
  _BYTE *v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  int v8; // eax

  *((_BYTE *)this + 24) = 0;
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_QWORD *)this + 8) = a3;
  *((_DWORD *)this + 18) = a4;
  if ( *((_DWORD *)a2 + 3) )
  {
    v5 = (_BYTE *)(a3 + *((int *)a2 + 3));
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v5);
    v6 = *v5 & 0xF;
    v7 = &v5[-byte_140284A40[v6]];
    v8 = *((_DWORD *)v7 - 1) >> byte_140284A40[v6 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v7);
    *(_DWORD *)this = v8;
    *((_QWORD *)this + 2) = (uint64)(uintptr_t)(v7);
    sub_14020A084(this);
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}


//----- (00000001402097C4) ----------------------------------------------------
FH4__TryBlockMap4 *           sub_1402097C4(FH4__TryBlockMap4 *this,      struct FH4__FuncInfo4 *a2, __int64 a3)
{
  _BYTE *v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD *v15; // rdx

  if ( *((_DWORD *)a2 + 3) )
  {
    v4 = (_BYTE *)(a3 + *((int *)a2 + 3));
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4);
    v5 = *v4 & 0xF;
    v6 = &v4[-byte_140284A40[v5]];
    v7 = *((_DWORD *)v6 - 1) >> byte_140284A40[v5 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v6);
    *(_DWORD *)this = v7;
    *((_QWORD *)this + 2) = (uint64)(uintptr_t)(v6);
    v8 = *v6 & 0xF;
    v9 = &v6[-byte_140284A40[v8]];
    v10 = *((_DWORD *)v9 - 1) >> byte_140284A40[v8 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v9);
    *((_DWORD *)this + 6) = v10;
    v11 = *v9 & 0xF;
    v12 = &v9[-byte_140284A40[v11]];
    v13 = *((_DWORD *)v12 - 1) >> byte_140284A40[v11 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v12);
    *((_DWORD *)this + 7) = v13;
    v14 = *v12 & 0xF;
    v15 = &v12[-byte_140284A40[v14]];
    *((_DWORD *)this + 8) = *(v15 - 1) >> byte_140284A40[v14 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v15);
    LODWORD(v14) = *v15;
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v15 + 1);
    *((_DWORD *)this + 9) = v14;
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}


//----- (00000001402098EC) ----------------------------------------------------
__int64            sub_1402098EC(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284BA0);
  *(_OWORD *)(a1 + 8) = 0;
  sub_14020AFEC(a2 + 8, a1 + 8);
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284BD0);
  return a1;
}

// 140284BA0: using guessed type void *(__fastcall *off_140284BA0)(CMenuHash *__hidden this, unsigned int);
// 140284BD0: using guessed type void *(__fastcall *off_140284BD0)(CMenuHash *__hidden this, unsigned int);

//----- (0000000140209928) ----------------------------------------------------
_QWORD *           sub_140209928(_QWORD *a1)
{
  a1[2] = 0;
  a1[1] = (uint64)(uintptr_t)("bad exception");
  *a1 = (uint64)(uintptr_t)(&off_140284BD0);
  return a1;
}

// 140284BD0: using guessed type void *(__fastcall *off_140284BD0)(CMenuHash *__hidden this, unsigned int);

//----- (0000000140209948) ----------------------------------------------------
std__exception *           sub_140209948(std__exception *this,      struct std__exception *a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(&off_140284BA0);
  *(_OWORD *)((char *)this + 8) = 0;
  sub_14020AFEC((__int64)a2 + 8, (__int64)this + 8);
  return this;
}

// 140284BA0: using guessed type void *(__fastcall *off_140284BA0)(CMenuHash *__hidden this, unsigned int);

//----- (0000000140209A18) ----------------------------------------------------
bool            sub_140209A18(__int64 a1, __int64 a2)
{
  return (unsigned int)sub_1401FD570(a1 + 8, a2 + 8) == 0;
}


//----- (0000000140209AC0) ----------------------------------------------------
_OWORD *           sub_140209AC0(__int64 a1, _OWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  FH4__UWMap4 *v6; // rax
  __int128 v7; // xmm0

  v2 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  sub_14020A9E4(*(FH4__UWMap4 **)a1, (unsigned __int8 **)(a1 + 8));
  v6 = *(FH4__UWMap4 **)a1;
  *v2 = v4;
  v7 = *((_OWORD *)v6 + 1);
  *a2 = v7;
  return a2;
}


//----- (0000000140209B14) ----------------------------------------------------
__int64            sub_140209B14(__int64 a1)
{
  sub_14020A084(*(FH4__HandlerMap4 **)a1);
  ++*(_DWORD *)(a1 + 8);
  return a1;
}


//----- (0000000140209B44) ----------------------------------------------------
__int64            sub_140209B44(__int64 a1)
{
  sub_14020A9E4(*(FH4__UWMap4 **)a1, (unsigned __int8 **)(a1 + 8));
  return a1;
}


//----- (0000000140209BA0) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
CMenuHash *           CMenuHash___scalar_deleting_destructor_(CMenuHash *this, char a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(&off_140284BA0);
  sub_14020B07C((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    j_j_free(this);
  return this;
}

// 140284BA0: using guessed type void *(__fastcall *off_140284BA0)(CMenuHash *__hidden this, unsigned int);

//----- (0000000140209BE4) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
CMenuHash *           CMenuHash___scalar_deleting_destructor__dup2(CMenuHash *this, char a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(&off_140284BA0);
  sub_14020B07C((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    j_j_free(this);
  return this;
}

// 140284BA0: using guessed type void *(__fastcall *off_140284BA0)(CMenuHash *__hidden this, unsigned int);

//----- (0000000140209C48) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140209C48(_QWORD *a1)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+48h] [rbp-60h]
  _QWORD v12[9]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+18h]

  v2 = *(_QWORD *)(sub_1401FD83C() + 40);
  v13 = *(_QWORD *)(sub_1401FD83C() + 32);
  v3 = a1[10];
  v10 = a1[9];
  v4 = a1[8];
  v11 = a1[6];
  v5 = (_QWORD *)a1[5];
  sub_1401FDACC(v4);
  *(_QWORD *)(sub_1401FD83C() + 32) = v3;
  *(_QWORD *)(sub_1401FD83C() + 40) = v4;
  v6 = sub_1401FD83C();
  v7 = sub_14020753C(v12, *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL));
  if ( a1[11] )
    sub_1401FD83C();
  v8 = sub_14020AE90(v11, v5, 256);
  sub_140207578((__int64)v7);
  if ( *(_DWORD *)v3 == -529697949
    && *(_DWORD *)(v3 + 24) == 4
    && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2
    && (unsigned int)sub_1401FD260(*(_QWORD *)(v3 + 40)) )
  {
    sub_1401FD18C(v3);
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = v13;
  *(_QWORD *)(sub_1401FD83C() + 40) = v2;
  *(_QWORD *)(*(int *)(v10 + 28) + *v5) = -2;
  return v8;
}

// 140209D15: ignored the value written to the shadow area of the succeeding call

//----- (0000000140209E34) ----------------------------------------------------
__int64            sub_140209E34(struct _EXCEPTION_RECORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-A8h]
  __int64 v11; // [rsp+38h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-88h]
  _QWORD v13[3]; // [rsp+70h] [rbp-68h]
  __int64 v14[10]; // [rsp+88h] [rbp-50h] BYREF
  int v15; // [rsp+E0h] [rbp+8h]

  v11 = *(_QWORD *)(sub_1401FD83C() + 40);
  v10 = *(_QWORD *)(sub_1401FD83C() + 32);
  v2 = *((_QWORD *)a1 + 10);
  v3 = *((_QWORD *)a1 + 8);
  v12 = *((_QWORD *)a1 + 6);
  v4 = *((_QWORD **)a1 + 5);
  v13[0] = *((_QWORD *)a1 + 9);
  v13[1] = *((_QWORD *)a1 + 13);
  v15 = *((_DWORD *)a1 + 14);
  sub_1401FDACC(v3);
  *(_QWORD *)(sub_1401FD83C() + 32) = v2;
  *(_QWORD *)(sub_1401FD83C() + 40) = v3;
  v5 = sub_1401FD83C();
  v6 = sub_14020753C(v14, *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL));
  if ( *((_QWORD *)a1 + 11) )
    sub_1401FD83C();
  v7 = sub_14020AEE0(v12, v4, 256);
  v8 = v7;
  if ( v7 < 2 )
  {
    v8 = v13[v7];
    if ( !v8 )
      abort();
  }
  sub_14020AF10(v8, v4);
  sub_140207578((__int64)v6);
  if ( *(_DWORD *)v2 == -529697949
    && *(_DWORD *)(v2 + 24) == 4
    && (unsigned int)(*(_DWORD *)(v2 + 32) - 429065504) <= 2
    && (unsigned int)sub_1401FD260(*(_QWORD *)(v2 + 40)) )
  {
    sub_1401FD18C(v2);
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = v10;
  *(_QWORD *)(sub_1401FD83C() + 40) = v11;
  *(_DWORD *)(sub_1401FD83C() + 120) = v15;
  *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  return v8;
}

// 140209F31: ignored the value written to the shadow area of the succeeding call

//----- (000000014020A084) ----------------------------------------------------
char            sub_14020A084(FH4__HandlerMap4 *this)
{
  char *v2; // rax
  char v3; // r10
  _BYTE *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // r9
  int v14; // edx
  __int64 v15; // rcx
  _BYTE *v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  _BYTE *v19; // r9

  *((_BYTE *)this + 24) = 0;
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_OWORD *)this + 3) = 0;
  v2 = *((char **)this + 1);
  v3 = *v2;
  v4 = v2 + 1;
  *((_BYTE *)this + 24) = *v2;
  *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v2 + 1);
  if ( (v3 & 1) != 0 )
  {
    v5 = *v4 & 0xF;
    v4 -= byte_140284A40[v5];
    *((_DWORD *)this + 7) = *((_DWORD *)v4 - 1) >> byte_140284A40[v5 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4);
  }
  if ( (v3 & 2) != 0 )
  {
    v6 = *(_DWORD *)v4;
    v4 += 4;
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4);
    *((_DWORD *)this + 8) = v6;
  }
  if ( (v3 & 4) != 0 )
  {
    v7 = *v4 & 0xF;
    v4 -= byte_140284A40[v7];
    *((_DWORD *)this + 9) = *((_DWORD *)v4 - 1) >> byte_140284A40[v7 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4);
  }
  v8 = (int *)(v4 + 4);
  *((_DWORD *)this + 10) = *(_DWORD *)v4;
  LOBYTE(v9) = v3 & 0x30;
  *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4 + 4);
  if ( (v3 & 8) == 0 )
  {
    if ( (_BYTE)v9 == 16 )
    {
      v12 = *(_BYTE *)v8 & 0xF;
      v13 = (char *)v8 - byte_140284A40[v12];
      v9 = (unsigned int)((*((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16]) + *((_DWORD *)this + 18));
      *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v13);
      *((_QWORD *)this + 6) = v9;
      return v9;
    }
    if ( (_BYTE)v9 != 32 )
      return v9;
    v14 = *((_DWORD *)this + 18);
    v15 = *(_BYTE *)v8 & 0xF;
    v16 = (char *)v8 - byte_140284A40[v15];
    v17 = *((_DWORD *)v16 - 1) >> byte_140284A40[v15 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v16);
    *((_QWORD *)this + 6) = (unsigned int)(v14 + v17);
    v18 = *v16 & 0xF;
    v19 = &v16[-byte_140284A40[v18]];
    LODWORD(v9) = *((_DWORD *)v19 - 1) >> byte_140284A40[v18 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v19);
    v11 = (unsigned int)(v14 + v9);
    goto LABEL_16;
  }
  if ( (_BYTE)v9 != 16 )
  {
    if ( (_BYTE)v9 != 32 )
      return v9;
    v9 = *v8;
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4 + 8);
    *((_QWORD *)this + 6) = v9;
    LOBYTE(v9) = (_BYTE)v4 + 12;
    v11 = *((int *)v4 + 2);
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4 + 12);
LABEL_16:
    *((_QWORD *)this + 7) = v11;
    return v9;
  }
  v10 = *v8;
  *((_QWORD *)this + 1) = (uint64)(uintptr_t)(v4 + 8);
  *((_QWORD *)this + 6) = v10;
  LOBYTE(v9) = (_BYTE)v4 + 8;
  return v9;
}


//----- (000000014020A20C) ----------------------------------------------------
__int64            sub_14020A20C(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int *a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)a1;
  *a3 = 0;
  if ( *(_DWORD *)v3 != -529697949 )
    return 0;
  if ( *(_DWORD *)(v3 + 24) != 4 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2 && *(_QWORD *)(v3 + 40) == *((_QWORD *)a2 + 5) )
  {
    *a3 = 1;
    if ( *(_DWORD *)v3 != -529697949 )
      return 0;
  }
  if ( *(_DWORD *)(v3 + 24) != 4 || (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) > 2 || *(_QWORD *)(v3 + 48) )
    return 0;
  *(_DWORD *)(sub_1401FD83C() + 64) = 1;
  *a3 = 1;
  return 1;
}

// 14020A20C: using guessed type __int64 __fastcall sub_14020A20C(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int *a3);

//----- (000000014020A294) ----------------------------------------------------
__int64            sub_14020A294(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int a3, int *a4)
{
  unsigned int v5; // ebx

  v5 = sub_14020A20C(a1, a2, a4);
  if ( !v5 )
    *(_DWORD *)(sub_1401FD83C() + 120) = a3;
  return v5;
}

// 14020A20C: using guessed type __int64 __fastcall sub_14020A20C(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int *a3);

//----- (000000014020A2C4) ----------------------------------------------------
void            sub_14020A2C4(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
             struct _s_FuncInfo *a3,
        int a4)
{
  __int64 v8; // r13
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax

  v8 = sub_1402075CC();
  v9 = sub_14020777C(a1, a2, a3);
  v10 = sub_1401FD83C();
  ++*(_DWORD *)(v10 + 48);
  while ( v9 != -1 && v9 > a4 )
  {
    if ( v9 <= -1 || v9 >= *((_DWORD *)a3 + 1) )
      abort();
    v11 = v9;
    v9 = *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8LL * v9);
    if ( *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4) )
    {
      v12 = *(int *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4);
      v13 = v12 + sub_1402075CC();
    }
    else
    {
      v13 = 0;
    }
    if ( v13 )
    {
      sub_1402077D0(a1, a3, v9);
      if ( *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4) )
      {
        v14 = *(int *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4);
        v15 = v14 + sub_1402075CC();
      }
      else
      {
        v15 = 0;
      }
      sub_14020AE90(v15, a1, 259);
      sub_1402075F4(v8);
    }
  }
  if ( *(int *)(sub_1401FD83C() + 48) > 0 )
  {
    v16 = sub_1401FD83C();
    --*(_DWORD *)(v16 + 48);
  }
  if ( v9 != -1 && v9 > a4 )
    abort();
  sub_1402077D0(a1, a3, v9);
}


//----- (000000014020A450) ----------------------------------------------------
__int64            sub_14020A450(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        struct FH4__FuncInfo4 *a3,
        unsigned int a4)
{
  __int64 v8; // r13
  int v9; // esi
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rcx
  sr_anon_95 *v13; // rdx
  sr_anon_95 *v14; // r14
  sr_anon_95 *v15; // rbx
  __int128 v16; // xmm6
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // [rsp+0h] [rbp-128h] BYREF
  sr_anon_95 *v23[2]; // [rsp+30h] [rbp-F8h] BYREF
  int v24; // [rsp+40h] [rbp-E8h]
  int v25; // [rsp+44h] [rbp-E4h]
  unsigned int v26; // [rsp+48h] [rbp-E0h]
  int *v27; // [rsp+50h] [rbp-D8h] BYREF
  sr_anon_95 *v28; // [rsp+58h] [rbp-D0h]
  __int64 *v29; // [rsp+60h] [rbp-C8h]
  __int64 v30; // [rsp+68h] [rbp-C0h]
  unsigned __int64 *v31; // [rsp+70h] [rbp-B8h]
  struct _xDISPATCHER_CONTEXT *v32; // [rsp+78h] [rbp-B0h]
  __int128 v33; // [rsp+80h] [rbp-A8h]
  int *v34; // [rsp+90h] [rbp-98h]
  sr_anon_95 *v35; // [rsp+98h] [rbp-90h]
  __int128 v36; // [rsp+A0h] [rbp-88h] BYREF
  int v37; // [rsp+B0h] [rbp-78h] BYREF
  sr_anon_95 *v38; // [rsp+B8h] [rbp-70h]
  __int64 v39; // [rsp+D0h] [rbp-58h]

  v31 = a1;
  v29 = (__int64 *)a1;
  v32 = a2;
  v26 = a4;
  v8 = sub_1402075CC();
  v30 = v8;
  v9 = sub_140207820(a3, a2);
  if ( *((_DWORD *)a2 + 18) )
  {
    if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
      abort();
    v9 = *((_DWORD *)a2 + 18) - 2;
  }
  else if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
  {
    v9 = *(_DWORD *)(sub_1401FD83C() + 120);
    *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  }
  v10 = sub_1401FD83C();
  ++*(_DWORD *)(v10 + 48);
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = (_BYTE *)(*((_QWORD *)a2 + 1) + *((int *)a3 + 2));
    v12 = *v11 & 0xF;
    v13 = (sr_anon_95 *)&v11[-byte_140284A40[v12]];
    v37 = *((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16];
    v38 = v13;
  }
  else
  {
    v37 = 0;
    v13 = v38;
  }
  v23[0] = (sr_anon_95 *)&v37;
  v23[1] = v13;
  v27 = &v37;
  v28 = v13;
  sub_14020AC30((FH4__UWMap4 *)&v37, v9, a4, (struct FH4__UWMap4__iterator *)v23, (struct FH4__UWMap4__iterator *)&v27);
  while ( 1 )
  {
    v34 = &v37;
    v35 = v38;
    v14 = v23[1];
    if ( v23[1] < v38 || v23[1] <= v28 )
      break;
    sub_14020A9E4(v23[0], (unsigned __int8 **)&v23[1]);
    v23[1] = v14;
    v15 = v23[0];
    v33 = *((_OWORD *)v23[0] + 1);
    v16 = v33;
    v36 = *(_OWORD *)v23;
    sub_14020A9E4(v23[0], (unsigned __int8 **)&v23[1]);
    v23[1] = (sr_anon_95 *)((char *)v14 - *((unsigned int *)v15 + 4));
    v9 = sub_14020AD00(
           (     struct FH4__UWMap4__iterator *)&v27,
           a4,
           (     struct FH4__UWMap4__iterator *)&v36,
           v9,
           (     struct FH4__UWMap4__iterator *)v23);
    v25 = v9;
    v24 = 0;
    v17 = 0;
    if ( DWORD1(v16) )
      v17 = DWORD2(v16);
    v24 = v17;
    if ( v17 )
    {
      *((_DWORD *)a2 + 18) = v9 + 2;
      if ( (unsigned int)(DWORD1(v16) - 1) <= 1 )
      {
        v18 = *v29;
        if ( DWORD1(v16) == 2 )
          v19 = *(_QWORD *)(HIDWORD(v33) + v18);
        else
          v19 = v18 + HIDWORD(v33);
        sub_14020AF40(*((_QWORD *)a2 + 1) + v17, v18, v19, 0x103u);
      }
      else
      {
        sub_14020AE90(*((_QWORD *)a2 + 1) + v17, a1, 259);
      }
      sub_1402075F4(v8);
    }
  }
  if ( *(int *)(sub_1401FD83C() + 48) > 0 )
  {
    v20 = sub_1401FD83C();
    --*(_DWORD *)(v20 + 48);
  }
  return sub_1401F8B20((unsigned __int64)&v22 ^ v39);
}


//----- (000000014020A738) ----------------------------------------------------
__int64            sub_14020A738(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  int v6; // ebx
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = sub_140207818(a3, a2);
  sub_140206D64(a1, a2, a3, &v8);
  if ( v6 <= (int)sub_1402077A4(a1, a2, a3) )
  {
    return (unsigned int)sub_1402077A4(a1, a2, a3);
  }
  else
  {
    sub_1402077D0(&v8, a3, v6);
    sub_1402077DC(a1, a2, a3, v6);
  }
  return (unsigned int)v6;
}


//----- (000000014020A7D0) ----------------------------------------------------
__int64            sub_14020A7D0(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, struct FH4__FuncInfo4 *a3)
{
  unsigned int v4; // ebx

  v4 = sub_140207820(a3, a2);
  if ( *((_DWORD *)a2 + 18) )
  {
    if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
      abort();
    return (unsigned int)(*((_DWORD *)a2 + 18) - 2);
  }
  else if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
  {
    v4 = *(_DWORD *)(sub_1401FD83C() + 120);
    *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  }
  return v4;
}


//----- (000000014020A870) ----------------------------------------------------
char            sub_14020A870(struct EHExceptionRecord *a1,      struct _s_ESTypeList *a2)
{
  char v4; // r15
  __int64 i; // rsi
  int *v6; // r12
  int v7; // r14d
  __int64 v8; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax

  if ( !a2 )
    abort();
  v4 = 0;
  for ( i = 0; (int)i < *(_DWORD *)a2; i = (unsigned int)(i + 1) )
  {
    v6 = (int *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL) + 4LL);
    v7 = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v8 = sub_1402075E0();
        v9 = *((_BYTE **)a1 + 6);
        v10 = *v6 + v8;
        v11 = sub_1402075CC();
        if ( (unsigned int)sub_140208FCC(v11 + 20 * i + *((int *)a2 + 1), v10, v9) )
          break;
        --v7;
        ++v6;
        if ( v7 <= 0 )
          goto LABEL_8;
      }
      v4 = 1;
    }
LABEL_8:
    ;
  }
  return v4;
}


//----- (000000014020A95C) ----------------------------------------------------
char            sub_14020A95C(     struct _s_ESTypeList *a1)
{
  int v1; // ebp
  __int64 i; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax

  v1 = 0;
  if ( *(int *)a1 <= 0 )
    return 0;
  for ( i = 0; ; i += 20 )
  {
    if ( *(_DWORD *)(*((int *)a1 + 1) + i + sub_1402075CC() + 4) )
    {
      v4 = *(int *)(*((int *)a1 + 1) + i + sub_1402075CC() + 4);
      v5 = v4 + sub_1402075CC();
    }
    else
    {
      v5 = 0;
    }
    if ( !(unsigned int)sub_1401FD570(v5 + 8, (__int64)&qword_140302EE0) )
      break;
    if ( ++v1 >= *(_DWORD *)a1 )
      return 0;
  }
  return 1;
}

// 140302EE0: using guessed type __int64 qword_140302EE0;

//----- (000000014020A9E4) ----------------------------------------------------
unsigned __int8 *           sub_14020A9E4(FH4__UWMap4 *this, unsigned __int8 **a2)
{
  __int64 v4; // rcx
  unsigned __int8 *v5; // r8
  unsigned int v6; // eax
  int v7; // ecx
  unsigned __int8 *result; // rax
  int v9; // ecx
  int v10; // ecx
  int *v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // rdx

  v4 = **a2 & 0xF;
  v5 = &(*a2)[-byte_140284A40[v4]];
  v6 = *((_DWORD *)v5 - 1) >> byte_140284A40[v4 + 16];
  *a2 = v5;
  v7 = v6 & 3;
  result = (unsigned __int8 *)(v6 >> 2);
  *((_DWORD *)this + 5) = v7;
  *((_DWORD *)this + 4) = (_DWORD)result;
  if ( v7 == 1 || v7 == 2 )
  {
    v10 = *(_DWORD *)*a2;
    *a2 += 4;
    *((_DWORD *)this + 6) = v10;
    v11 = (int *)*a2;
    v12 = *(_BYTE *)v11 & 0xF;
    v13 = (unsigned __int8 *)v11 - byte_140284A40[v12];
    result = (unsigned __int8 *)(unsigned int)(*((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16]);
    *a2 = v13;
    *((_DWORD *)this + 7) = (_DWORD)result;
  }
  else if ( v7 == 3 )
  {
    v9 = *(_DWORD *)*a2;
    result = *a2 + 4;
    *a2 = result;
    *((_DWORD *)this + 6) = v9;
  }
  return result;
}


//----- (000000014020AA94) ----------------------------------------------------
__int64            sub_14020AA94(FH4__UWMap4 *this, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // rdi
  __int64 result; // rax

  v2 = *a2;
  sub_14020A9E4(this, a2);
  result = *((unsigned int *)this + 4);
  *a2 = &v2[-result];
  return result;
}


//----- (000000014020AACC) ----------------------------------------------------
__int64            sub_14020AACC(FH4__UWMap4__iterator *this)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)this;
  v2 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  sub_14020A9E4(*(FH4__UWMap4 **)this, (unsigned __int8 **)this + 1);
  result = *(unsigned int *)(v1 + 16);
  *v2 = v3 - result;
  return result;
}


//----- (000000014020AB14) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14020AB14(__int64 a1, __int64 (           *a2)(__int64, __int64), __int64 a3)
{
  return a2(a1, a3);
}


//----- (000000014020AB20) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14020AB20(
        __int64 a1,
        __int64 (           *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        unsigned int a4)
{
  return a2(a1, a3, a4);
}


//----- (000000014020AB84) ----------------------------------------------------
__int64            sub_14020AB84(     struct _s_FuncInfo *a1)
{
  __int64 v1; // rdx

  v1 = 0;
  if ( *((_DWORD *)a1 + 8) )
    return *((int *)a1 + 8) + sub_1402075CC();
  return v1;
}


//----- (000000014020ABB0) ----------------------------------------------------
char *           sub_14020ABB0(FH4__HandlerMap4 *this)
{
  int v2; // edi
  __int64 v3; // rdi

  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  sub_14020A084(this);
  v2 = *(_DWORD *)this;
  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  sub_14020A084(this);
  v3 = (unsigned int)(v2 - 1);
  if ( (_DWORD)v3 )
  {
    do
    {
      sub_14020A084(this);
      --v3;
    }
    while ( v3 );
  }
  return (char *)this + 24;
}


//----- (000000014020AC30) ----------------------------------------------------
struct FH4__UWMap4__iterator *           sub_14020AC30(
        FH4__UWMap4 *this,
        int a2,
        int a3,
        struct FH4__UWMap4__iterator *a4,
        struct FH4__UWMap4__iterator *a5)
{
  unsigned __int8 *v5; // rax
  char v6; // bp
  char v7; // r14
  int v8; // edi
  struct FH4__UWMap4__iterator *v9; // r12
  unsigned __int8 *v12; // rsi
  unsigned __int8 *v13; // r15
  int v14; // r12d
  _OWORD *v15; // rax
  struct FH4__UWMap4__iterator *result; // rax
  _OWORD *v17; // rcx
  unsigned __int8 *v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h]
  struct FH4__UWMap4__iterator *v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v19 = a2;
  v5 = *((unsigned __int8 **)this + 1);
  v6 = 0;
  v7 = 0;
  v18 = v5;
  v8 = 0;
  v9 = a4;
  v12 = v5 - 1;
  v13 = v5 - 1;
  if ( *(int *)this > 0 )
  {
    v14 = v19;
    while ( 1 )
    {
      if ( v8 == v14 )
      {
        v12 = v5;
        v6 = 1;
      }
      if ( v8 == a3 )
      {
        v13 = v5;
        v7 = 1;
      }
      if ( v6 && v7 )
        break;
      sub_14020A9E4(this, &v18);
      if ( ++v8 >= *(_DWORD *)this )
        break;
      v5 = v18;
    }
    v9 = v20;
  }
  v15 = *(_OWORD **)v9;
  *((_QWORD *)v9 + 1) = (uint64)(uintptr_t)(v12);
  *v15 = *(_OWORD *)this;
  v15[1] = *((_OWORD *)this + 1);
  result = a5;
  v17 = *(_OWORD **)a5;
  *((_QWORD *)a5 + 1) = (uint64)(uintptr_t)(v13);
  *v17 = *(_OWORD *)this;
  v17[1] = *((_OWORD *)this + 1);
  return result;
}


//----- (000000014020AD00) ----------------------------------------------------
__int64            sub_14020AD00(
             struct FH4__UWMap4__iterator *a1,
        unsigned int a2,
             struct FH4__UWMap4__iterator *a3,
        unsigned int a4,
             struct FH4__UWMap4__iterator *a5)
{
  unsigned __int64 v7; // r10
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v7 = *((_QWORD *)a5 + 1);
  if ( v7 > *((_QWORD *)a3 + 1) || *((_QWORD *)a1 + 1) > v7 )
    return 0xFFFFFFFFLL;
  if ( (__int64)(v7 - *((_QWORD *)a1 + 1)) >= (__int64)(*((_QWORD *)a3 + 1) - v7) )
  {
    a2 = a4;
    v9 = *(__m128i *)a5;
    if ( *((_QWORD *)a3 + 1) > SR_VEC_READ_LANES(128, _mm_srli_si128(v9, 8), u64)[0] )
    {
      do
      {
        sub_14020A9E4((FH4__UWMap4 *)SR_VEC_LANES(128, v9, i64)[0], (unsigned __int8 **)&SR_VEC_LANES(128, v9, i64)[1]);
        --a2;
      }
      while ( *((_QWORD *)a3 + 1) > SR_VEC_LANES(128, v9, i64)[1] );
    }
  }
  else
  {
    v9 = *(__m128i *)a1;
    if ( v7 > SR_VEC_READ_LANES(128, _mm_srli_si128(v9, 8), u64)[0] )
    {
      do
      {
        sub_14020A9E4((FH4__UWMap4 *)SR_VEC_LANES(128, v9, i64)[0], (unsigned __int8 **)&SR_VEC_LANES(128, v9, i64)[1]);
        ++a2;
      }
      while ( *((_QWORD *)a5 + 1) > SR_VEC_LANES(128, v9, i64)[1] );
    }
  }
  return a2;
}


//----- (000000014020AE10) ----------------------------------------------------
char            sub_14020AE10(FH4__HandlerMap4 *this, unsigned int a2)
{
  __int64 v3; // rdi
  char result; // al

  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  v3 = a2;
  result = sub_14020A084(this);
  if ( (_DWORD)v3 )
  {
    do
    {
      result = sub_14020A084(this);
      --v3;
    }
    while ( v3 );
  }
  return result;
}


//----- (000000014020AE90) ----------------------------------------------------
__int64 sub_14020AE90(__int64 a1, _QWORD *a2, int a3)
{
  return (__int64)sr_client_call_funclet((uintptr_t)a1, (const uintptr_t *)a2, (unsigned)a3, 1);
}

// 14020AEAE: variable 'v2' is possibly undefined

//----- (000000014020AEE0) ----------------------------------------------------
__int64 sub_14020AEE0(__int64 a1, _QWORD *a2, int a3)
{
  return (__int64)sr_client_call_funclet((uintptr_t)a1, (const uintptr_t *)a2, (unsigned)a3, 0);
}

// 14020AEFE: variable 'v2' is possibly undefined

//----- (000000014020AF10) ----------------------------------------------------
void            sub_14020AF10(__int64 a1, _QWORD *a2)
{
  sub_1401FDA90();
}


//----- (000000014020AF40) ----------------------------------------------------
void            sub_14020AF40(__int64 a1, __int64 a2, __int64 a3, ...)
{
  void (           *v3)(__int64); // rax

  sub_1401FDA90();
  v3(a3);
  _NLG_Return2_sr();
  sub_1401FDA90();
}

// 14020AF68: variable 'v3' is possibly undefined

//----- (000000014020AF98) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1008(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}


//----- (000000014020AFD0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1009(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}


//----- (000000014020AFEC) ----------------------------------------------------
void            sub_14020AFEC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rbx

  if ( *(_BYTE *)(a1 + 8) && *(_QWORD *)a1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( *(_BYTE *)(*(_QWORD *)a1 + v4) );
    v5 = j__malloc_base();
    v6 = (void *)v5;
    if ( v5 )
    {
      strcpy_s_sr(v5, v4 + 1, *(_QWORD *)a1);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = (uint64)(uintptr_t)(v6);
      v6 = nullptr;
    }
    free(v6);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)a1;
    *(_BYTE *)(a2 + 8) = 0;
  }
}

// 14024C810: using guessed type __int64 __fastcall strcpy_s(_QWORD, _QWORD, _QWORD);

//----- (000000014020B07C) ----------------------------------------------------
void            sub_14020B07C(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    free(*(void **)a1);
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 0;
}


//----- (000000014020B0A4) ----------------------------------------------------
void           __attribute__((noreturn)) sub_14020B0A4(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 BaseOfImage; // [rsp+20h] [rbp-38h] BYREF
  _QWORD Arguments[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = pThrowInfo;
  v4 = 429065504;
  if ( pThrowInfo && (*(_BYTE *)pThrowInfo & 0x10) != 0 )
  {
    v5 = *(_QWORD *)pExceptionObject - 8LL;
    v2 = *(_ThrowInfo **)(*(_QWORD *)v5 + 48LL);
    (*(void (           **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  }
  v6 = ((__int64 (           *)(_ThrowInfo *, __int64 *))RtlPcToFileHeader)(v2, &BaseOfImage);
  BaseOfImage = v6;
  if ( v2 && ((*(_BYTE *)v2 & 8) != 0 || !v6) )
    v4 = 26820608;
  Arguments[0] = v4;
  Arguments[1] = (uint64)(uintptr_t)(pExceptionObject);
  Arguments[2] = (uint64)(uintptr_t)(v2);
  Arguments[3] = v6;
  ((void (           *)(__int64, __int64, __int64, _QWORD *, __int64))RaiseException)(
    3765269347LL,
    1,
    4,
    Arguments,
    BaseOfImage);
}

// 14026E1F8: invalid function type 'PVOID (__stdcall *RtlPcToFileHeader)(PVOID PcValue, PVOID *BaseOfImage)' has been ignored
// 14026E200: invalid function type 'void (__stdcall *RaiseException)(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments)' has been ignored
// 14026E698: using guessed type __int64 (__fastcall *_guard_dispatch_icall_fptr)(_QWORD);

//----- (000000014020B144) ----------------------------------------------------
double            sub_14020B144(double result, int *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ecx
  double v6; // xmm3_8

  if ( !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0.0;
  }
  v3 = ctrlfp(8064, 65472);
  if ( (HIWORD(result) & 0x7FF0) == 0x7FF0 )
  {
    *a2 = -1;
    v4 = sptype_sr(result) - 1;
    if ( v4 && (unsigned int)(v4 - 1) >= 2 )
    {
      v5 = 8;
      v6 = result + 1.0;
LABEL_7:
      except1(v5, 23, result, v6, v3);
      return result;
    }
  }
  else
  {
    if ( result == 0.0 && (unsigned int)sub_14024D0E0(result) )
    {
      *a2 = 0;
      v6 = -0.0;
      v5 = 0;
      goto LABEL_7;
    }
    decomp_sr(result, a2);
  }
  ctrlfp(v3, 65472);
  return result;
}


//----- (000000014020B23C) ----------------------------------------------------
__int64            sub_14020B23C(double a1, int a2)
{
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v7; // ecx
  double v8; // xmm0_8
  int v9; // edx
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = ctrlfp(8064, 65472);
  if ( (HIWORD(a1) & 0x7FF0) != 0x7FF0 )
  {
    if ( a1 == 0.0 )
      return ctrlfp(v4, 65472);
    decomp_sr(a1, &v10);
    if ( a2 >= 0 )
    {
      if ( v10 > 0x7FFFFFFF - a2 )
        goto LABEL_22;
    }
    else if ( v10 < (int)(0x80000000 - a2) )
    {
      goto LABEL_17;
    }
    v9 = v10 + a2;
    if ( v10 + a2 <= 2560 )
    {
      if ( v9 > 1024 )
      {
        v8 = set_exp_sr(a1, (unsigned __int16)v9 - 1536);
LABEL_23:
        v7 = 17;
        return except2(v7, 25, a1, (double)a2, v8, v4);
      }
      if ( v9 >= -2557 )
      {
        if ( v9 >= -1021 )
        {
          set_exp_sr(a1, v9);
          return ctrlfp(v4, 65472);
        }
        v8 = set_exp_sr(a1, (unsigned __int16)v9 + 1536);
        goto LABEL_18;
      }
LABEL_17:
      v8 = a1 * 0.0;
LABEL_18:
      v7 = 18;
      return except2(v7, 25, a1, (double)a2, v8, v4);
    }
LABEL_22:
    v8 = copysign(INFINITY, a1);
    goto LABEL_23;
  }
  v5 = sptype_sr(a1);
  if ( v5 > 0 )
  {
    if ( v5 <= 2 )
      return ctrlfp(v4, 65472);
    if ( v5 == 3 )
    {
      handle_qnan2_sr(a1, (double)a2);
      return ctrlfp(v4, 65472);
    }
  }
  v7 = 8;
  v8 = a1 + 1.0;
  return except2(v7, 25, a1, (double)a2, v8, v4);
}


//----- (000000014020B3C4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1010(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (000000014020B3EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1011(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}


//----- (000000014020B408) ----------------------------------------------------
__int64 sub_14020B408()
{
  signed int v0; // eax
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  _DWORD *v5; // rsi
  char *v6; // r14

  v0 = dword_140404A6C[19064591];
  v1 = 0;
  v2 = 3;
  if ( dword_140404A6C[19064591] )
  {
    if ( (int)dword_140404A6C[19064591] < 3 )
      v0 = 3;
  }
  else
  {
    v0 = 512;
  }
  dword_140404A6C[19064591] = v0;
  *(_QWORD *)&dword_140404A6C[19064593] = sr_directory_calloc(v0, 8);
  free_base(nullptr);
  if ( !*(_QWORD *)&dword_140404A6C[19064593] )
  {
    dword_140404A6C[19064591] = 3;
    *(_QWORD *)&dword_140404A6C[19064593] = sr_directory_calloc(3, 8);
    free_base(nullptr);
    if ( !*(_QWORD *)&dword_140404A6C[19064593] )
      return 0xFFFFFFFFLL;
  }
  v4 = 0;
  v5 = &unk_1403020F8;
  v6 = (char *)&unk_1403020E0;
  do
  {
    _acrt_InitializeCriticalSectionEx((__int64)(v6 + 48), 0xFA0u, 0);
    *(_QWORD *)(v1 + *(_QWORD *)&dword_140404A6C[19064593]) = (uint64)(uintptr_t)(v6);
    if ( *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401] + 72 * (v4 & 0x3F) + 40) >= 0xFFFFFFFFFFFFFFFEuLL
      || *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401] + 72 * (v4 & 0x3F) + 40) == 0 )
    {
      *v5 = -2;
    }
    ++v4;
    v6 += 88;
    v1 += 8;
    v5 += 22;
    --v2;
  }
  while ( v2 );
  return 0;
}

// 14024DF98: using guessed type __int64 __fastcall calloc_base(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBE6A8: using guessed type unsigned int;

//----- (000000014020B528) ----------------------------------------------------
char *           sub_14020B528(unsigned int a1)
{
  return (char *)&unk_1403020E0 + 88 * a1;
}


//----- (000000014020B53C) ----------------------------------------------------
void sub_14020B53C()
{
  __int64 i; // rbx

  flushall();
  fcloseall();
  for ( i = 0; i != 24; i += 8 )
  {
    sub_1402502FC(*(_QWORD *)(i + *(_QWORD *)&dword_140404A6C[19064593]));
    ((void (           *)(__int64))DeleteCriticalSection)(*(_QWORD *)(i + *(_QWORD *)&dword_140404A6C[19064593]) + 48LL);
  }
  free_base(*(void **)&dword_140404A6C[19064593]);
  *(_QWORD *)&dword_140404A6C[19064593] = 0;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020B598) ----------------------------------------------------
__int64            sub_14020B598(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  if ( a1 )
  {
    if ( a2 )
      *a2 = a1 + 8;
    if ( a3 )
      *a3 = a1;
    if ( a4 )
      *a4 = a1 + 16;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
}


//----- (000000014020B5E0) ----------------------------------------------------
__int64            sub_14020B5E0(__int64 a1)
{
  return ((__int64 (           *)(__int64))EnterCriticalSection)(a1 + 48);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (000000014020B5EC) ----------------------------------------------------
__int64            sub_14020B5EC(__int64 a1)
{
  return ((__int64 (           *)(__int64))LeaveCriticalSection)(a1 + 48);
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (000000014020B5F8) ----------------------------------------------------
__int64            common_fopen_s__char(__int64 *a1, char *a2, char *a3)
{
  __int64 v5; // rax

  if ( a1 )
  {
    v5 = sub_14020B6A0(a2, a3, 128);
    *a1 = v5;
    if ( v5 )
      return 0;
    else
      return (unsigned int)*errno_sr();
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
}


//----- (000000014020B64C) ----------------------------------------------------
__int64            common_fopen_s__wchar_t(__int64 *a1, sr_anon_49 *a2, __int16 *a3)
{
  __int64 v5; // rax

  if ( a1 )
  {
    v5 = sub_14020B75C(a2, a3, 128);
    *a1 = v5;
    if ( v5 )
      return 0;
    else
      return (unsigned int)*errno_sr();
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 22;
  }
}


//----- (000000014020B6A0) ----------------------------------------------------
__int64            sub_14020B6A0(char *a1, char *a2, int a3)
{
  __int64 v7; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !*a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( !*a1 )
  {
    *errno_sr() = 22;
    return 0;
  }
  sub_140250604(&v8);
  if ( !v8 )
  {
    *errno_sr() = 24;
    return 0;
  }
  v7 = sub_140251044(a1, a2, a3, v8);
  if ( !v7 )
    sub_14025065C(v8);
  sub_14020B5EC(v8);
  return v7;
}


//----- (000000014020B75C) ----------------------------------------------------
__int64            sub_14020B75C(sr_anon_49 *a1, __int16 *a2, int a3)
{
  __int64 v7; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !*a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( !*(_WORD *)a1 )
  {
    *errno_sr() = 22;
    return 0;
  }
  sub_140250604(&v8);
  if ( !v8 )
  {
    *errno_sr() = 24;
    return 0;
  }
  v7 = wopenfile(a1, a2, a3, v8);
  if ( !v7 )
    sub_14025065C(v8);
  sub_14020B5EC(v8);
  return v7;
}


//----- (000000014020B878) ----------------------------------------------------
__int64            sub_14020B878(__int64 *a1, sr_anon_49 *a2, __int16 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax

  v3 = 0;
  if ( a1 )
  {
    v5 = sub_14020B75C(a2, a3, 128);
    *a1 = v5;
    if ( !v5 )
      return (unsigned int)*errno_sr();
  }
  else
  {
    v3 = 22;
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014020B8D8) ----------------------------------------------------
__int64            sub_14020B8D8(char *a1, char *a2)
{
  return sub_14020B6A0(a1, a2, 64);
}


//----- (000000014020B8E4) ----------------------------------------------------
__int64            sub_14020B8E4(__int64 *a1, char *a2, char *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax

  v3 = 0;
  if ( a1 )
  {
    v5 = sub_14020B6A0(a2, a3, 128);
    *a1 = v5;
    if ( !v5 )
      return (unsigned int)*errno_sr();
  }
  else
  {
    v3 = 22;
    *errno_sr() = 22;
    sub_14024CF6C();
  }
  return v3;
}


//----- (000000014020B964) ----------------------------------------------------
__int64            sub_14020B964(FILE *Stream)
{
  unsigned int v3; // edi
  int v4; // eax
  void *v5; // rcx

  if ( Stream )
  {
    v3 = -1;
    if ( (*((_DWORD *)Stream + 5) & 0x2000) != 0 )
    {
      v3 = sub_1402501C4(Stream);
      sub_1402502FC((__int64)Stream);
      v4 = fileno(Stream);
      if ( (int)sub_14025130C(v4) >= 0 )
      {
        v5 = *((void **)Stream + 5);
        if ( v5 )
        {
          free_base(v5);
          *((_QWORD *)Stream + 5) = 0;
        }
      }
      else
      {
        v3 = -1;
      }
    }
    sub_14025065C((__int64)Stream);
    return v3;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 14020B964: using guessed type __int64 __fastcall sub_14020B964(FILE *Stream);
// 1402501C4: using guessed type __int64 __fastcall sub_1402501C4(FILE *Stream);

//----- (000000014020B9E8) ----------------------------------------------------
__int64            sub_14020B9E8(__int64 a1)
{
  unsigned int v3; // edi

  if ( !a1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x1000) != 0 )
  {
    sub_14025065C(a1);
    return 0xFFFFFFFFLL;
  }
  sub_14020B5E0(a1);
  v3 = sub_14020B964((FILE *)a1);
  sub_14020B5EC(a1);
  return v3;
}

// 14020B964: using guessed type __int64 __fastcall sub_14020B964(FILE *Stream);

//----- (000000014020BA70) ----------------------------------------------------
__int64            sub_14020BA70(__int64 a1)
{
  if ( a1 )
    return (*(_DWORD *)(a1 + 20) >> 3) & 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (000000014020BA9C) ----------------------------------------------------
__int64            sub_14020BA9C(__int64 a1)
{
  if ( a1 )
    return (*(_DWORD *)(a1 + 20) >> 4) & 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (000000014020BAC8) ----------------------------------------------------
__int64            getc_nolock_0(FILE *a1)
{
  unsigned __int8 *v4; // rax
  unsigned int v5; // ecx

  if ( a1 )
  {
    if ( (int32_t)(*((_DWORD *)a1 + 4) -= 1u) < 0 )
    {
      return sub_140251818(a1);
    }
    else
    {
      v4 = *(unsigned __int8 **)a1;
      v5 = **(unsigned __int8 **)a1;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(v4 + 1);
      return v5;
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 140251818: using guessed type __int64 __fastcall sub_140251818(FILE *Stream);

//----- (000000014020BB0C) ----------------------------------------------------
int         fgetchar_0()
{
  char *v0; // rax

  v0 = sub_14020B528(0);
  return sub_14020BB2C((FILE *)v0);
}

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);

//----- (000000014020BB24) ----------------------------------------------------
// attributes: thunk
int         getc_nolock(FILE *Stream)
{
  return getc_nolock_0(Stream);
}


//----- (000000014020BB2C) ----------------------------------------------------
__int64            sub_14020BB2C(FILE *Stream)
{
  int v3; // eax
  _BYTE *v4; // r9
  _BYTE *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+20h] [rbp-18h]

  v8 = &v7;
  if ( Stream )
  {
    sub_14020B5E0((__int64)Stream);
    if ( (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
      goto LABEL_12;
    v3 = fileno(Stream);
    if ( (unsigned int)(v3 + 2) <= 1 )
    {
      v5 = &unk_1403022C0;
      v4 = &unk_1403022C0;
    }
    else
    {
      v4 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v3 >> 6) + 19065401] + 72LL * (v3 & 0x3F));
      v5 = &unk_1403022C0;
    }
    if ( v4[57] )
      goto LABEL_11;
    if ( (unsigned int)(v3 + 2) > 1 )
      v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v3 >> 6) + 19065401] + 72LL * (v3 & 0x3F));
    if ( (v5[61] & 1) != 0 )
    {
LABEL_11:
      *errno_sr() = 22;
      sub_14024CF6C();
      sub_14026CD20((__int64)v8, (__int64)&loc_14020BC13);
      return 0xFFFFFFFFLL;
    }
    else
    {
LABEL_12:
      v6 = getc_nolock_0(Stream);
      sub_14020B5EC((__int64)Stream);
      return v6;
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020BC3C) ----------------------------------------------------
__int64 sub_14020BC3C()
{
  char *v0; // rax

  v0 = sub_14020B528(0);
  return sub_14020BB2C((FILE *)v0);
}

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);

//----- (000000014020BC54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_207(unsigned __int8 a1, __int64 a2)
{
  if ( (int32_t)(*(_DWORD *)(a2 + 16) -= 1u) < 0 )
    return sub_140251DA8(a1, a2);
  *(_BYTE *)(*(_QWORD *)a2)++ = a1;
  return a1;
}


//----- (000000014020BC6C) ----------------------------------------------------
__int64            sub_14020BC6C(char a1)
{
  char *v2; // rax

  v2 = sub_14020B528(1u);
  return sub_14020BCA8(a1, (__int64)v2);
}


//----- (000000014020BCA8) ----------------------------------------------------
__int64            sub_14020BCA8(char a1, __int64 a2)
{
  unsigned int v3; // edi
  int v5; // eax
  _BYTE *v6; // r9
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+20h] [rbp-18h]

  v10 = &v9;
  LOBYTE(v3) = a1;
  if ( a2 )
  {
    sub_14020B5E0(a2);
    if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
      goto LABEL_12;
    v5 = fileno((FILE *)a2);
    if ( (unsigned int)(v5 + 2) <= 1 )
    {
      v7 = &unk_1403022C0;
      v6 = &unk_1403022C0;
    }
    else
    {
      v6 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v5 >> 6) + 19065401] + 72LL * (v5 & 0x3F));
      v7 = &unk_1403022C0;
    }
    if ( v6[57] )
      goto LABEL_11;
    if ( (unsigned int)(v5 + 2) > 1 )
      v7 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v5 >> 6) + 19065401] + 72LL * (v5 & 0x3F));
    if ( (v7[61] & 1) != 0 )
    {
LABEL_11:
      *errno_sr() = 22;
      sub_14024CF6C();
      sub_14026CD20((__int64)v10, (__int64)&loc_14020BD94);
      return 0xFFFFFFFFLL;
    }
    else
    {
LABEL_12:
      if ( --*(_DWORD *)(a2 + 16) < 0 )
      {
        v3 = sub_140251DA8(v3, a2);
      }
      else
      {
        *(_BYTE *)(*(_QWORD *)a2)++ = v3;
        v3 = (unsigned __int8)v3;
      }
      sub_14020B5EC(a2);
      return v3;
    }
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020BE18) ----------------------------------------------------
unsigned __int64            fread_nolock(__m128i *a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4)
{
  return sub_14020BE38(a1, 0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4);
}

// 14020BE18: invalid function type '#66 __cdecl fread_nolock(void *Buffer, #66 ElementSize, #66 ElementCount, FILE *Stream)' has been ignored

//----- (000000014020BE38) ----------------------------------------------------
unsigned __int64            sub_14020BE38(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        FILE *Stream)
{
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdi
  __m128i *v12; // r10
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
       __m128i *v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rax
  int v19; // eax
  int nolock; // eax
  int v21; // eax
  __m128i *v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+88h] [rbp+20h]
  unsigned int Streama; // [rsp+90h] [rbp+28h]

  v24 = a4;
  if ( !a3 || !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( !Stream || a4 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
  {
    if ( a2 != -1 )
    {
      sub_1401FCD30((void *)(uintptr_t)(a1), 0, a2);
      a4 = v24;
    }
    if ( !Stream || a4 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
    {
LABEL_4:
      *errno_sr() = 22;
      goto LABEL_5;
    }
  }
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) != 0 )
    v10 = *((_DWORD *)Stream + 8);
  else
    v10 = 4096;
  Streama = v10;
  v11 = a4 * a3;
  v12 = a1;
  v22 = a1;
  v13 = a4 * a3;
  v14 = a2;
  if ( !(a4 * a3) )
    return a4;
  while ( 1 )
  {
    if ( (*((_DWORD *)Stream + 5) & 0x4C0) != 0 )
    {
      v15 = *((int *)Stream + 4);
      if ( (_DWORD)v15 )
      {
        if ( (v15 & 0x80000000) != 0LL )
          goto LABEL_53;
        if ( v13 < v15 )
          v15 = (unsigned int)v13;
        if ( v15 > v14 )
          goto LABEL_50;
        v16 = *(     __m128i **)Stream;
        v23 = *(_QWORD *)Stream;
        if ( !v15 )
          goto LABEL_34;
        if ( !v12 )
          goto LABEL_25;
        if ( v16 && v14 >= v15 )
        {
          sub_1401FC920(v12, v16, v15);
        }
        else
        {
          sub_1401FCD30((void *)(uintptr_t)(v12), 0, v14);
          if ( !v23 )
          {
LABEL_25:
            *errno_sr() = 22;
LABEL_32:
            sub_14024CF6C();
            goto LABEL_33;
          }
          if ( v14 < v15 )
          {
            *errno_sr() = 34;
            goto LABEL_32;
          }
        }
LABEL_33:
        v12 = v22;
LABEL_34:
        *((_DWORD *)Stream + 4) -= v15;
        v13 -= v15;
        *(_QWORD *)Stream += v15;
        v10 = Streama;
        v14 -= v15;
        goto LABEL_47;
      }
    }
    if ( v13 < v10 )
      break;
    v17 = v13;
    if ( v13 > 0x7FFFFFFF )
      v17 = 0x7FFFFFFF;
    if ( v10 )
      v17 -= v17 % v10;
    if ( v17 > v14 )
      goto LABEL_50;
    v18 = *((_QWORD *)Stream + 1);
    *((_DWORD *)Stream + 4) = 0;
    *(_QWORD *)Stream = v18;
    v19 = fileno(Stream);
    nolock = read_nolock(v19, SR_VEC_PTR_LANES(128, v22, i16), v17);
    if ( !nolock )
    {
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 8u);
      return (v11 - v13) / a3;
    }
    if ( nolock < 0 )
    {
LABEL_53:
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
      return (v11 - v13) / a3;
    }
    v10 = Streama;
    v12 = v22;
    v15 = nolock;
    v13 -= nolock;
    v14 -= nolock;
LABEL_47:
    v12 = (__m128i *)((char *)v12 + v15);
    v22 = v12;
    if ( !v13 )
      return v24;
  }
  v21 = sub_140251818(Stream);
  if ( v21 == -1 )
    return (v11 - v13) / a3;
  if ( v14 )
  {
    v12 = v22;
    --v13;
    --v14;
    v15 = 1;
    SR_VEC_PTR_LANES(128, v22, i8)[0] = v21;
    v10 = *((_DWORD *)Stream + 8);
    Streama = v10;
    goto LABEL_47;
  }
LABEL_50:
  if ( a2 != -1 )
    sub_1401FCD30((void *)(uintptr_t)(a1), 0, a2);
  *errno_sr() = 34;
LABEL_5:
  sub_14024CF6C();
  return 0;
}

// 140251818: using guessed type __int64 __fastcall sub_140251818(FILE *Stream);

//----- (000000014020C0C8) ----------------------------------------------------
unsigned __int64            fread_sr(void *a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4)
{
  return sub_14020C0E8(a1, 0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4);
}

// 14020C0C8: invalid function type '#66 __cdecl fread(void *Buffer, #66 ElementSize, #66 ElementCount, FILE *Stream)' has been ignored

//----- (000000014020C0E8) ----------------------------------------------------
unsigned __int64            sub_14020C0E8(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        FILE *a5)
{
  unsigned __int64 v10; // rdi

  if ( !a3 || !a4 )
    return 0;
  if ( !a5 )
  {
    if ( a2 != -1 )
      sub_1401FCD30((void *)(uintptr_t)(a1), 0, a2);
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  sub_14020B5E0((__int64)a5);
  v10 = sub_14020BE38(a1, a2, a3, a4, a5);
  sub_14020B5EC((__int64)a5);
  return v10;
}


//----- (000000014020C190) ----------------------------------------------------
__int64            sub_14020C190(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    sub_1401FC920(a1, a3, a4);
    return 0;
  }
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = errno_sr();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    sub_14024CF6C();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = errno_sr();
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}


//----- (000000014020C248) ----------------------------------------------------
__int64            sub_14020C248(__int64 a1, signed __int64 a2, unsigned int a3)
{
  unsigned int v7; // edi

  if ( a1 && a3 <= 2 )
  {
    sub_14020B5E0(a1);
    v7 = sub_14020C398(a1, a2, a3);
    sub_14020B5EC(a1);
    return v7;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014020C2B4) ----------------------------------------------------
char            sub_14020C2B4(__int64 a1, signed __int64 a2, int a3)
{
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx

  if ( a3 == 2 )
    return 0;
  if ( (*(_DWORD *)(a1 + 20) & 0x4C0) == 0 )
    return 0;
  if ( (*(_DWORD *)(a1 + 20) & 6) != 0 )
    return 0;
  if ( *(int *)(a1 + 16) <= 0 )
    return 0;
  v5 = *(int *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 24) & 0x3F;
  v7 = *(_QWORD *)&dword_140404A6C[2 * (v5 >> 6) + 19065401];
  if ( *(char *)(v7 + 72 * v6 + 56) < 0 || *(_BYTE *)(v7 + 72 * v6 + 57) )
    return 0;
  if ( !a3 )
  {
    v8 = lseeki64_nolock(v5, 0, 1u);
    if ( v8 < 0 )
      return 0;
    v9 = a2;
    v10 = v8 - *(int *)(a1 + 16);
    v11 = (unsigned __int64)a2 >> 63;
    v12 = v9 - v10;
    if ( (_DWORD)v11 != v10 >> 63 && (_DWORD)v11 != v12 >> 63 )
      return 0;
    a2 = v12;
  }
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 <= a2 && a2 <= *(int *)(a1 + 16) )
  {
    *(_QWORD *)a1 += a2;
    *(_DWORD *)(a1 + 16) -= a2;
    return 1;
  }
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020C398) ----------------------------------------------------
__int64            sub_14020C398(__int64 a1, signed __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v7; // rax

  v3 = a3;
  v4 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 0x2000) == 0 )
  {
    *errno_sr() = 22;
    return 0xFFFFFFFFLL;
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFF7);
  if ( !sub_14020C2B4(a1, a2, a3) )
  {
    if ( v3 == 1 )
    {
      v4 += ftelli64_nolock_sr((FILE *)a1);
      v3 = 0;
    }
    sub_1402501C4((FILE *)a1);
    v7 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)a1 = v7;
    if ( (*(_DWORD *)(a1 + 20) & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFFC);
    }
    else if ( (*(_BYTE *)(a1 + 20) & 0x41) == 0x41 && (*(_DWORD *)(a1 + 20) & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 32) = 512;
    }
    if ( lseeki64_nolock(*(_DWORD *)(a1 + 24), v4, v3) == -1 )
      return 0xFFFFFFFFLL;
  }
  return 0;
}

// 1402501C4: using guessed type __int64 __fastcall sub_1402501C4(FILE *Stream);

//----- (000000014020C4A8) ----------------------------------------------------
__int64            sub_14020C4A8(__int64 a1, int a2, unsigned int a3)
{
  return sub_14020C248(a1, a2, a3);
}


//----- (000000014020C4B0) ----------------------------------------------------
int         ftell_0(FILE *Stream)
{
  signed __int64 v3; // rax
  int v4; // edi

  if ( Stream )
  {
    sub_14020B5E0((__int64)Stream);
    v3 = ftelli64_nolock_0(Stream);
    v4 = v3;
    if ( v3 > 0x7FFFFFFF )
    {
      *errno_sr() = 22;
      v4 = -1;
    }
    sub_14020B5EC((__int64)Stream);
    return v4;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return -1;
  }
}


//----- (000000014020C520) ----------------------------------------------------
unsigned __int64            sub_14020C520(FILE *a1)
{
  unsigned __int64 v3; // rdi

  if ( a1 )
  {
    sub_14020B5E0((__int64)a1);
    v3 = ftelli64_nolock_0(a1);
    sub_14020B5EC((__int64)a1);
    return v3;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return -1;
  }
}


//----- (000000014020C574) ----------------------------------------------------
int         sub_14020C574(FILE *Stream)
{
  signed __int64 v1; // rax

  v1 = ftelli64_nolock_0(Stream);
  if ( v1 > 0x7FFFFFFF )
  {
    *errno_sr() = 22;
    LODWORD(v1) = -1;
  }
  return v1;
}


//----- (000000014020C598) ----------------------------------------------------
__int64            ftelli64_nolock_0(FILE *a1)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // r11

  if ( !a1 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return -1;
  }
  v3 = fileno(a1);
  v4 = v3;
  if ( *((int *)a1 + 4) < 0 )
    *((_DWORD *)a1 + 4) = 0;
  v5 = lseeki64_sr(v3, 0, 1);
  if ( v5 < 0 )
    return -1;
  if ( (*((_DWORD *)a1 + 5) & 0xC0) == 0 )
    return v5 - *((int *)a1 + 4);
  v6 = v4 >> 6;
  v7 = *(_QWORD *)a1 - *((_QWORD *)a1 + 1);
  v8 = 9 * (v4 & 0x3F);
  v9 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401] + 72 * (v4 & 0x3F) + 57);
  if ( (*((_DWORD *)a1 + 5) & 3) != 0 )
  {
    if ( v9 == 1 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v8 + 61) & 2) != 0 )
      return sub_14020C8A8((__int64)a1, v5);
    if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v8 + 56) < 0 )
    {
      v10 = sub_14020CA24(*((_WORD **)a1 + 1), *(_QWORD *)a1, v9);
      v7 = v10 + v11;
    }
  }
  else if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
  {
    *errno_sr() = 22;
    return -1;
  }
  if ( !v5 )
    return v7;
  if ( (*((_DWORD *)a1 + 5) & 1) != 0 )
    return sub_14020C75C((__int64)a1, v5, v7);
  if ( v9 == 1 )
    v7 >>= 1;
  return v7 + v5;
}

// 14020C66C: variable 'v11' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020C75C) ----------------------------------------------------
__int64            sub_14020C75C(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rax
  char v10; // si
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // [rsp+60h] [rbp+8h]

  v5 = fileno((FILE *)a1);
  v6 = 0;
  v7 = v5 & 0x3F;
  v16 = (__int64)v5 >> 6;
  v8 = 9 * v7;
  v9 = *(_QWORD *)&dword_140404A6C[2 * v16 + 19065401];
  v10 = *(_BYTE *)(v9 + 72 * v7 + 57);
  if ( !*(_DWORD *)(a1 + 16) )
    return a2;
  v12 = *(_QWORD *)a1 + *(int *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  if ( *(char *)(v9 + 72 * v7 + 56) < 0 )
  {
    if ( lseeki64_sr(v5, 0, 2) == a2 )
    {
      v14 = sub_14020CA24(*(_WORD **)(a1 + 8), *(_QWORD *)(a1 + 8) + v12, v10) + v12;
      v15 = (*(_DWORD *)(a1 + 20) & 0x20) == 0;
    }
    else
    {
      result = lseeki64_sr(v5, a2, 0);
      if ( result == -1 )
        return result;
      v14 = 512;
      if ( v12 > 512 || (*(_DWORD *)(a1 + 20) & 0x40) == 0 || (*(_DWORD *)(a1 + 20) & 0x100) != 0 )
        v14 = *(int *)(a1 + 32);
      v15 = (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v16 + 19065401] + 8 * v8 + 56) & 4) == 0;
    }
    if ( !v15 )
    {
      LOBYTE(v6) = (unsigned __int8)(v10 - 1) <= 1u;
      v14 += v6 + 1;
    }
    v13 = v14;
  }
  else
  {
    v13 = *(_QWORD *)a1 + *(int *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  }
  return a2 + a3 / ((v10 == 1) + 1LL) - v13 / ((v10 == 1) + 1LL);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020C8A8) ----------------------------------------------------
__int64            sub_14020C8A8(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rcx
  __int64 v12; // [rsp-20h] [rbp-20C8h] BYREF
  _DWORD v13[4]; // [rsp+10h] [rbp-2098h] BYREF
  _BYTE v14[4096]; // [rsp+20h] [rbp-2088h] BYREF
  __int64 v15; // [rsp+1020h] [rbp-1088h]

  v4 = 0;
  v5 = fileno((FILE *)a1);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v6 = (*(_QWORD *)a1 - *(_QWORD *)(a1 + 8)) / 2LL;
    v7 = lseeki64_sr(v5, *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (v5 >> 6) + 19065401] + 72 * (v5 & 0x3F) + 48), 0);
    v8 = *(_QWORD *)&dword_140404A6C[2 * (v5 >> 6) + 19065401];
    if ( v7 == *(_QWORD *)(v8 + 72 * (v5 & 0x3F) + 48) )
    {
      if ( (unsigned int)((__int64 (           *)(_QWORD, _BYTE *, __int64, _DWORD *, _QWORD))ReadFile)(
                           *(_QWORD *)(v8 + 72 * (v5 & 0x3F) + 40),
                           v14,
                           4096,
                           v13,
                           0) )
      {
        if ( lseeki64_sr(v5, a2, 0) >= 0 && v6 <= v13[0] )
        {
          v9 = &v14[v13[0]];
          v10 = v14;
          if ( v6 )
          {
            do
            {
              if ( v10 >= v9 )
                break;
              if ( *v10 == 13 )
              {
                if ( v10 < v9 - 1 && v10[1] == 10 )
                  ++v10;
              }
              else
              {
                v10 += byte_140302310[*v10];
              }
              ++v4;
              ++v10;
            }
            while ( v4 != v6 );
          }
        }
      }
    }
  }
  return sub_1401F8B20((unsigned __int64)&v12 ^ v15);
}

// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020CA24) ----------------------------------------------------
__int64            sub_14020CA24(_WORD *a1, unsigned __int64 a2, char a3)
{
  _WORD *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  _BYTE *v12; // r10
  __int64 v13; // rcx

  v3 = a1;
  if ( (unsigned __int8)(a3 - 1) > 1u )
  {
    v10 = 0;
    v11 = a2 - (_QWORD)a1;
    v12 = a1;
    if ( (unsigned __int64)a1 > a2 )
      v11 = 0;
    if ( v11 )
    {
      do
      {
        v13 = v10 + 1;
        if ( *v12 != 10 )
          v13 = v10;
        ++v12;
        v10 = v13;
      }
      while ( v12 - (_BYTE *)v3 != v11 );
    }
    return v10;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = (a2 - (unsigned __int64)a1 + 1) >> 1;
    if ( (unsigned __int64)v3 > a2 )
      v6 = 0;
    if ( v6 )
    {
      do
      {
        v7 = *v3 == 10;
        v8 = v4 + 1;
        ++v3;
        if ( !v7 )
          v8 = v4;
        ++v5;
        v4 = v8;
      }
      while ( v5 != v6 );
    }
    return 2 * v4;
  }
}


//----- (000000014020CADC) ----------------------------------------------------
int         sub_14020CADC(FILE *Stream)
{
  __int64 v1; // rax

  v1 = ftelli64_nolock_0(Stream);
  if ( v1 > 0x7FFFFFFF )
  {
    *errno_sr() = 22;
    LODWORD(v1) = -1;
  }
  return v1;
}


//----- (000000014020CB08) ----------------------------------------------------
// attributes: thunk
__int64         ftelli64_nolock_sr(FILE *Stream)
{
  return ftelli64_nolock_0(Stream);
}


//----- (000000014020CB20) ----------------------------------------------------
// attributes: thunk
int         ftell_sr(FILE *Stream)
{
  return ftell_0(Stream);
}


//----- (000000014020CB28) ----------------------------------------------------
unsigned __int64            sub_14020CB28(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  unsigned __int64 v6; // rdi

  sub_14020B5E0(*a2);
  v6 = _lambda_532e024f4337e6fc7ad266c2bef9f4ed___operator_call(a3);
  sub_14020B5EC(*a4);
  return v6;
}


//----- (000000014020CB68) ----------------------------------------------------
unsigned __int64            sub_14020CB68(__int64 a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14020CB28((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014020CBC0) ----------------------------------------------------
__acrt_stdio_temporary_buffering_guard *           sub_14020CBC0(
        __acrt_stdio_temporary_buffering_guard *this,
        struct _iobuf *     a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(a2);
  *((_BYTE *)this + 8) = sub_140253DEC((__int64)a2);
  return this;
}

// 14020CBC0: using guessed type __acrt_stdio_temporary_buffering_guard *__fastcall sub_14020CBC0(__acrt_stdio_temporary_buffering_guard *this, struct _iobuf *const a2);

//----- (000000014020CBFC) ----------------------------------------------------
unsigned __int64            _lambda_532e024f4337e6fc7ad266c2bef9f4ed___operator_call(__int64 **a1)
{
  __int64 v2; // rsi
  char v3; // di
  unsigned __int64 v4; // rbx

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  v4 = sub_14020CC60((     __m128i *)*a1[1], *a1[2], *a1[3], **a1);
  sub_140253EBC(v3, v2);
  return v4;
}


//----- (000000014020CC60) ----------------------------------------------------
unsigned __int64            sub_14020CC60(     __m128i *Buf, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
       __m128i *v7; // r13
  int v9; // r15d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  bool i; // zf
  int v13; // eax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned int v16; // ebp
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+58h] [rbp+10h]

  v7 = Buf;
  if ( !a2 || !a3 )
    return 0;
  if ( !a4 || !Buf || a3 > 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( (*(_DWORD *)(a4 + 20) & 0x4C0) != 0 )
    v9 = *(_DWORD *)(a4 + 32);
  else
    v9 = 4096;
  v10 = a3 * a2;
  v11 = a3 * a2;
  for ( i = a3 * a2 == 0; !i; i = v11 == 0 )
  {
    if ( (*(_DWORD *)(a4 + 20) & 0xC0) != 0 && (v13 = *(_DWORD *)(a4 + 16)) != 0 )
    {
      if ( v13 < 0 )
        goto LABEL_31;
      if ( (*(_DWORD *)(a4 + 20) & 1) != 0 )
        return (v10 - v11) / a2;
      v14 = v11;
      if ( v11 >= *(int *)(a4 + 16) )
        v14 = *(int *)(a4 + 16);
      sub_1401FC920(*(__m128i **)a4, v7, v14);
      *(_DWORD *)(a4 + 16) -= v14;
      v11 -= v14;
      *(_QWORD *)a4 += v14;
    }
    else if ( v11 < (unsigned int)v9 )
    {
      if ( (unsigned int)sub_140251DA8(SR_VEC_PTR_LANES(128, v7, i8)[0], a4) == -1 )
        return (v10 - v11) / a2;
      v9 = *(_DWORD *)(a4 + 32);
      --v11;
      v14 = 1;
      if ( v9 <= 0 )
        v9 = 1;
    }
    else
    {
      if ( (*(_DWORD *)(a4 + 20) & 0xC0) != 0 && (unsigned int)sub_1402501C4((FILE *)a4) )
        return (v10 - v11) / a2;
      v15 = v11;
      if ( v9 )
        v15 = v11 - v11 % (unsigned int)v9;
      v16 = -2;
      if ( v15 < 0xFFFFFFFE )
        v16 = v15;
      v20 = v16;
      v17 = fileno((FILE *)a4);
      v18 = write(v17, v7, v16);
      if ( v18 == -1 )
        goto LABEL_31;
      v19 = v18;
      if ( v18 > v16 )
        v19 = v16;
      v14 = v19;
      v11 -= v19;
      if ( v18 < v20 )
      {
LABEL_31:
        _InterlockedOr((volatile signed __int32 *)(a4 + 20), 0x10u);
        return (v10 - v11) / a2;
      }
    }
    v7 = (     __m128i *)((char *)v7 + v14);
  }
  return a3;
}

// 1402501C4: using guessed type __int64 __fastcall sub_1402501C4(FILE *Stream);

//----- (000000014020CE0C) ----------------------------------------------------
unsigned __int64            sub_14020CE0C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( !a2 || !a3 )
    return 0;
  if ( !a4 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
  v6 = a4;
  v8[0] = &v12;
  v7 = a4;
  v8[1] = &v9;
  v8[2] = &v10;
  v8[3] = &v11;
  return sub_14020CB28((__int64)v5, &v7, v8, &v6);
}


//----- (000000014020CE90) ----------------------------------------------------
__int64            sub_14020CE90(int a1, __int64 a2)
{
  int v4; // eax
  _BYTE *v5; // r9
  _BYTE *v6; // r10
  int v8; // ecx
  __int64 v9; // rax
  _BYTE *v10; // rcx
  int v11; // eax

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
  {
    v4 = fileno((FILE *)a2);
    v5 = &unk_1403022C0;
    v6 = (unsigned int)(v4 + 2) <= 1
       ? &unk_1403022C0
       : (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v4 >> 6) + 19065401] + 72LL * (v4 & 0x3F));
    if ( v6[57] )
      goto LABEL_9;
    if ( (unsigned int)(v4 + 2) > 1 )
      v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v4 >> 6) + 19065401] + 72LL * (v4 & 0x3F));
    if ( (v5[61] & 1) != 0 )
    {
LABEL_9:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
  }
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  v8 = *(_DWORD *)(a2 + 20);
  if ( (v8 & 1) == 0 && (v8 & 6) != 6 )
    return 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
  {
    sub_140253EF8(a2);
    v9 = *(_QWORD *)(a2 + 8);
  }
  if ( *(_QWORD *)a2 == v9 )
  {
    if ( *(_DWORD *)(a2 + 16) )
      return 0xFFFFFFFFLL;
    ++*(_QWORD *)a2;
  }
  v10 = (_BYTE *)(*(_QWORD *)a2 - 1LL);
  v11 = *(_DWORD *)(a2 + 20) >> 12;
  *(_QWORD *)a2 = (uint64)(uintptr_t)(v10);
  if ( (v11 & 1) != 0 )
  {
    if ( *v10 != (_BYTE)a1 )
    {
      *(_QWORD *)a2 = (uint64)(uintptr_t)(v10 + 1);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *v10 = a1;
  }
  ++*(_DWORD *)(a2 + 16);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
  return (unsigned __int8)a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014020CFB8) ----------------------------------------------------
int         sub_14020CFB8(int Character, FILE *Stream)
{
  int v5; // edi

  if ( Stream )
  {
    sub_14020B5E0((__int64)Stream);
    v5 = sub_14020CE90(Character, (__int64)Stream);
    sub_14020B5EC((__int64)Stream);
    return v5;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return -1;
  }
}


//----- (000000014020D010) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_210(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D094) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_211(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 1152) = v6;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}


//----- (000000014020D134) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_212(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D1B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_213(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D240) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_214(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 1152) = v6;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}


//----- (000000014020D2E4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_215(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D36C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_216(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D3F0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_217(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 1152) = v6;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}


//----- (000000014020D490) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_218(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D514) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_219(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D59C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_220(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 1152) = v6;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}


//----- (000000014020D640) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_221(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r10

  v6 = *a4;
  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}


//----- (000000014020D6C8) ----------------------------------------------------
__int64            sub_14020D6C8(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = _lambda_7e489fec146d5348dbc86d3cce37c1b5___operator_call(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (000000014020D708) ----------------------------------------------------
__int64            sub_14020D708(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = sub_140213FD0(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (000000014020D748) ----------------------------------------------------
__int64            sub_14020D748(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = _lambda_ee59099aa97e0ff6f003b984c1584058___operator_call(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (000000014020D788) ----------------------------------------------------
__int64            sub_14020D788(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = _lambda_32f117a32e8f8eb613cbf2ca819ed45e___operator_call(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (000000014020D7C8) ----------------------------------------------------
__int64            sub_14020D7C8(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = _lambda_a2288fdbbd702c8f223b438290af01a4___operator_call(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (000000014020D808) ----------------------------------------------------
__int64            sub_14020D808(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  sub_14020B5E0(*a2);
  LODWORD(a3) = sub_140213BD4(a3);
  sub_14020B5EC(*a4);
  return (unsigned int)a3;
}


//----- (000000014020D848) ----------------------------------------------------
__int64            sub_14020D848(__int64 a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14020D808((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014020D870) ----------------------------------------------------
__int64            sub_14020D870(__int64 a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14020D748((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014020D898) ----------------------------------------------------
__int64            sub_14020D898(__int64 a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14020D7C8((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014020D8C0) ----------------------------------------------------
__int64            sub_14020D8C0(__int64 a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14020D708((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014020D8E8) ----------------------------------------------------
__int64            sub_14020D8E8(__int64 a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14020D6C8((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014020D910) ----------------------------------------------------
__int64            sub_14020D910(__int64 a1, __int64 **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  return sub_14020D788((__int64)&v3, &v5, a2, &v4);
}


//----- (000000014020D938) ----------------------------------------------------
__int64 sub_14020D938(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = &v10;
    v7 = a2;
    v8[1] = &v12;
    v8[2] = &v9;
    v8[3] = &v11;
    memcpy(&v8[4], &va, sizeof(va));
    return sub_14020D788((__int64)v5, &v7, v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014020D9C0) ----------------------------------------------------
__int64 sub_14020D9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = &v10;
    v7 = a2;
    v8[1] = &v12;
    v8[2] = &v9;
    v8[3] = &v11;
    memcpy(&v8[4], &va, sizeof(va));
    return sub_14020D6C8((__int64)v5, &v7, v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014020DA48) ----------------------------------------------------
__int64 sub_14020DA48(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = &v10;
    v7 = a2;
    v8[1] = &v12;
    v8[2] = &v9;
    v8[3] = &v11;
    memcpy(&v8[4], &va, sizeof(va));
    return sub_14020D7C8((__int64)v5, &v7, v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014020DAD0) ----------------------------------------------------
__int64 sub_14020DAD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = &v10;
    v7 = a2;
    v8[1] = &v12;
    v8[2] = &v9;
    v8[3] = &v11;
    memcpy(&v8[4], &va, sizeof(va));
    return sub_14020D748((__int64)v5, &v7, v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014020DB58) ----------------------------------------------------
__int64 sub_14020DB58(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = &v10;
    v7 = a2;
    v8[1] = &v12;
    v8[2] = &v9;
    v8[3] = &v11;
    memcpy(&v8[4], &va, sizeof(va));
    return sub_14020D808((__int64)v5, &v7, v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014020DBE0) ----------------------------------------------------
__int64 sub_14020DBE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v8[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a4);
  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( a2 && a3 )
  {
    v6 = a2;
    v8[0] = &v10;
    v7 = a2;
    v8[1] = &v12;
    v8[2] = &v9;
    v8[3] = &v11;
    memcpy(&v8[4], &va, sizeof(va));
    return sub_14020D708((__int64)v5, &v7, v8, &v6);
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}


//----- (000000014020DC68) ----------------------------------------------------
__int64            sub_14020DC68(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct __crt_locale_pointers *a6,
        __int64 a7)
{
  int *v11; // rax
  __int64 result; // rax
  int v13; // ebp
  int v14; // ebp

  if ( !a5 )
  {
    v11 = errno_sr();
LABEL_3:
    *v11 = 22;
    goto LABEL_4;
  }
  if ( a4 )
  {
    if ( !a2 )
      goto LABEL_14;
  }
  else if ( !a2 )
  {
    if ( !a3 )
      return 0;
    goto LABEL_14;
  }
  if ( a3 )
  {
    v13 = 1;
    goto LABEL_15;
  }
LABEL_14:
  v13 = 0;
LABEL_15:
  v11 = errno_sr();
  if ( !v13 )
    goto LABEL_3;
  v14 = *v11;
  if ( a3 > a4 )
  {
    result = sub_14020DE94(a1, a2, a4 + 1, a5, a6, a7);
    if ( (_DWORD)result != -2 )
      goto LABEL_18;
LABEL_23:
    if ( *errno_sr() == 34 )
      *errno_sr() = v14;
    return 0xFFFFFFFFLL;
  }
  result = sub_14020DE94(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( (_DWORD)result == -2 )
  {
    if ( a4 != -1 )
      goto LABEL_19;
    goto LABEL_23;
  }
LABEL_18:
  if ( (int)result < 0 )
  {
LABEL_19:
    *a2 = 0;
    if ( (_DWORD)result != -2 )
      return 0xFFFFFFFFLL;
    *errno_sr() = 34;
LABEL_4:
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  return result;
}


//----- (000000014020DD7C) ----------------------------------------------------
__int64            sub_14020DD7C(
        __int64 a1,
        _WORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct __crt_locale_pointers *a6,
        __int64 a7)
{
  int *v11; // rax
  __int64 result; // rax
  int v13; // ebp
  int v14; // ebp

  if ( !a5 )
  {
    v11 = errno_sr();
LABEL_3:
    *v11 = 22;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    if ( !a2 )
    {
      if ( !a3 )
        return 0;
      goto LABEL_13;
    }
LABEL_12:
    v13 = 1;
    if ( a3 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
    goto LABEL_12;
LABEL_13:
  v13 = 0;
LABEL_14:
  v11 = errno_sr();
  if ( !v13 )
    goto LABEL_3;
  v14 = *v11;
  if ( a3 > a4 )
  {
    result = sub_14020E060(a1, a2, a4 + 1, a5, a6, a7);
    if ( (_DWORD)result != -2 )
      goto LABEL_17;
LABEL_22:
    if ( *errno_sr() == 34 )
      *errno_sr() = v14;
    return 0xFFFFFFFFLL;
  }
  result = sub_14020E060(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( (_DWORD)result == -2 )
  {
    if ( a4 != -1 )
      goto LABEL_18;
    goto LABEL_22;
  }
LABEL_17:
  if ( (int)result < 0 )
  {
LABEL_18:
    *a2 = 0;
    if ( (_DWORD)result != -2 )
      return 0xFFFFFFFFLL;
    *errno_sr() = 34;
LABEL_4:
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  return result;
}


//----- (000000014020DE94) ----------------------------------------------------
__int64            sub_14020DE94(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h]
  char v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+39h] [rbp-C7h]
  __int16 v20; // [rsp+3Dh] [rbp-C3h]
  char v21; // [rsp+3Fh] [rbp-C1h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[7]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+98h] [rbp-68h]
  __int16 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+B0h] [rbp-50h]
  char v28; // [rsp+B4h] [rbp-4Ch]
  __int64 v29; // [rsp+4B8h] [rbp+3B8h]
  void *Block; // [rsp+4C0h] [rbp+3C0h]
  _QWORD *v31; // [rsp+4C8h] [rbp+3C8h]
  int v32; // [rsp+4D0h] [rbp+3D0h]
  __int64 v33; // [rsp+4E0h] [rbp+3E0h]

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return sub_1401F8B20((unsigned __int64)&v15 ^ v33);
  }
  sub_140213644((_LocaleUpdate *)&v22, a5);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16[0] = (uint64)(uintptr_t)(a2);
  v16[1] = a3;
  v17 = 0;
  if ( (a1 & 2) != 0 || (v18 = 0, !a2) )
    v18 = 1;
  v24[2] = 0;
  v31 = v16;
  v24[5] = 0;
  v24[1] = (uint64)(uintptr_t)(v23);
  v24[4] = a6;
  v24[6] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  Block = nullptr;
  v24[0] = a1;
  v24[3] = a4;
  v32 = 0;
  v12 = sub_1402161BC((__int64)v24, v10, v11);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && v12 )
        goto LABEL_20;
      v13 = v17;
      if ( v17 == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( v12 < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      v13 = v17;
      if ( v17 != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      v13 = v17;
      if ( v17 != a3 )
      {
LABEL_19:
        a2[v13] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( v23[16] )
    *(_DWORD *)(v22 + 936) &= ~2u;
  return sub_1401F8B20((unsigned __int64)&v15 ^ v33);
}

// 14020DFA0: variable 'v10' is possibly undefined
// 14020DFA0: variable 'v11' is possibly undefined
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *__hidden this, struct __crt_locale_pointers *const);

//----- (000000014020E060) ----------------------------------------------------
__int64            sub_14020E060(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h]
  char v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+39h] [rbp-C7h]
  __int16 v20; // [rsp+3Dh] [rbp-C3h]
  char v21; // [rsp+3Fh] [rbp-C1h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[7]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+98h] [rbp-68h]
  char v26; // [rsp+A0h] [rbp-60h]
  __int16 v27; // [rsp+A2h] [rbp-5Eh]
  int v28; // [rsp+B0h] [rbp-50h]
  char v29; // [rsp+B4h] [rbp-4Ch]
  __int64 v30; // [rsp+4B8h] [rbp+3B8h]
  void *Block; // [rsp+4C0h] [rbp+3C0h]
  _QWORD *v32; // [rsp+4C8h] [rbp+3C8h]
  int v33; // [rsp+4D0h] [rbp+3D0h]
  __int64 v34; // [rsp+4E0h] [rbp+3E0h]

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return sub_1401F8B20((unsigned __int64)&v15 ^ v34);
  }
  sub_140213644((_LocaleUpdate *)&v22, a5);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16[0] = (uint64)(uintptr_t)(a2);
  v16[1] = a3;
  v17 = 0;
  if ( (a1 & 2) != 0 || (v18 = 0, !a2) )
    v18 = 1;
  v24[2] = 0;
  v32 = v16;
  v24[5] = 0;
  v24[1] = (uint64)(uintptr_t)(v23);
  v24[4] = a6;
  v24[6] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  Block = nullptr;
  v24[0] = a1;
  v24[3] = a4;
  v33 = 0;
  v12 = sub_140217010((__int64)v24, v10, v11);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && v12 )
        goto LABEL_20;
      v13 = v17;
      if ( v17 == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( v12 < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      v13 = v17;
      if ( v17 != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      v13 = v17;
      if ( v17 != a3 )
      {
LABEL_19:
        a2[v13] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( v23[16] )
    *(_DWORD *)(v22 + 936) &= ~2u;
  return sub_1401F8B20((unsigned __int64)&v15 ^ v34);
}

// 14020E170: variable 'v10' is possibly undefined
// 14020E170: variable 'v11' is possibly undefined
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *__hidden this, struct __crt_locale_pointers *const);

//----- (000000014020E234) ----------------------------------------------------
__int64            sub_14020E234(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  int v10; // eax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h]
  char v16; // [rsp+38h] [rbp-C8h]
  int v17; // [rsp+39h] [rbp-C7h]
  __int16 v18; // [rsp+3Dh] [rbp-C3h]
  char v19; // [rsp+3Fh] [rbp-C1h]
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[24]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[7]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+98h] [rbp-68h]
  __int16 v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-50h]
  char v26; // [rsp+B4h] [rbp-4Ch]
  __int64 v27; // [rsp+4B8h] [rbp+3B8h]
  void *Block; // [rsp+4C0h] [rbp+3C0h]
  _QWORD *v29; // [rsp+4C8h] [rbp+3C8h]
  int v30; // [rsp+4D0h] [rbp+3D0h]
  __int64 v31; // [rsp+4D8h] [rbp+3D8h]
  __int64 v32; // [rsp+4E0h] [rbp+3E0h]
  int v33; // [rsp+E48h] [rbp+D48h]
  int v34; // [rsp+E4Ch] [rbp+D4Ch]
  __int64 v35; // [rsp+E50h] [rbp+D50h]

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return sub_1401F8B20((unsigned __int64)&v13 ^ v35);
  }
  sub_140213644((_LocaleUpdate *)&v20, a5);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v14[0] = (uint64)(uintptr_t)(a2);
  v14[1] = a3;
  v15 = 0;
  if ( (a1 & 2) != 0 || (v16 = 0, !a2) )
    v16 = 1;
  v33 = -1;
  v34 = -1;
  v29 = v14;
  v22[1] = (uint64)(uintptr_t)(v21);
  v22[4] = a6;
  v22[2] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  Block = nullptr;
  v22[0] = a1;
  v22[3] = a4;
  v30 = 0;
  v31 = 0;
  v32 = a4;
  v10 = sub_1402163D4((__int64)v22);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && v10 )
        goto LABEL_20;
      v11 = v15;
      if ( v15 == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( v10 < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      v11 = v15;
      if ( v15 != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      v11 = v15;
      if ( v15 != a3 )
      {
LABEL_19:
        a2[v11] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( v21[16] )
    *(_DWORD *)(v20 + 936) &= ~2u;
  return sub_1401F8B20((unsigned __int64)&v13 ^ v35);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *__hidden this, struct __crt_locale_pointers *const);

//----- (000000014020E41C) ----------------------------------------------------
__int64            sub_14020E41C(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, struct sr_anon_68 *a5, __int64 a6)
{
  int v10; // eax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h]
  char v16; // [rsp+38h] [rbp-C8h]
  int v17; // [rsp+39h] [rbp-C7h]
  __int16 v18; // [rsp+3Dh] [rbp-C3h]
  char v19; // [rsp+3Fh] [rbp-C1h]
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[24]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[7]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+98h] [rbp-68h]
  char v24; // [rsp+A0h] [rbp-60h]
  __int16 v25; // [rsp+A2h] [rbp-5Eh]
  int v26; // [rsp+B0h] [rbp-50h]
  char v27; // [rsp+B4h] [rbp-4Ch]
  __int64 v28; // [rsp+4B8h] [rbp+3B8h]
  void *Block; // [rsp+4C0h] [rbp+3C0h]
  _QWORD *v30; // [rsp+4C8h] [rbp+3C8h]
  int v31; // [rsp+4D0h] [rbp+3D0h]
  __int64 v32; // [rsp+4D8h] [rbp+3D8h]
  __int64 v33; // [rsp+4E0h] [rbp+3E0h]
  int v34; // [rsp+E48h] [rbp+D48h]
  int v35; // [rsp+E4Ch] [rbp+D4Ch]
  __int64 v36; // [rsp+E50h] [rbp+D50h]

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return sub_1401F8B20((unsigned __int64)&v13 ^ v36);
  }
  sub_140213644((_LocaleUpdate *)&v20, a5);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v14[0] = (uint64)(uintptr_t)(a2);
  v14[1] = a3;
  v15 = 0;
  if ( (a1 & 2) != 0 || (v16 = 0, !a2) )
    v16 = 1;
  v34 = -1;
  v35 = -1;
  v30 = v14;
  v22[1] = (uint64)(uintptr_t)(v21);
  v22[4] = a6;
  v22[2] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  Block = nullptr;
  v22[0] = a1;
  v22[3] = a4;
  v31 = 0;
  v32 = 0;
  v33 = a4;
  v10 = sub_140217298((__int64)v22);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && v10 )
        goto LABEL_20;
      v11 = v15;
      if ( v15 == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( v10 < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      v11 = v15;
      if ( v15 != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      v11 = v15;
      if ( v15 != a3 )
      {
LABEL_19:
        a2[v11] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( v21[16] )
    *(_DWORD *)(v20 + 936) &= ~2u;
  return sub_1401F8B20((unsigned __int64)&v13 ^ v36);
}

__int64 sub_14020E60C(__int64 options, _BYTE *destination, __int64 capacity,
                     __int64 format, struct __crt_locale_pointers *provided_locale,
                     __int64 arguments)
{
  sr_format_locale locale;
  sr_format_output output;
  sr_format_processor processor;
  int result;
  if (!format || (capacity && !destination))
  {
    *errno_sr()=22;
    sub_14024CF6C();
    return UINT32_MAX;
  }
  sub_140213644((_LocaleUpdate *)(void *)&locale, provided_locale);
  output.destination=(unsigned char *)destination;
  output.capacity=(uint64_t)capacity;
  output.used=0;
  output.count_only=(options&2)!=0 || !destination;
  memset(output.padding,0,sizeof output.padding);
  /* Initialize precisely the fields written by the original constructor. */
  processor.options=options;
  processor.locale=locale.pair;
  processor.reserved16=0;
  processor.format=(const char *)(uintptr_t)format;
  processor.arguments=arguments;
  processor.result=processor.state=0;
  processor.flags=processor.width=0;
  processor.precision=0;
  processor.character=0;
  processor.error_flags=0;
  processor.error_tail=0;
  processor.scratch_capacity=0;
  processor.allocation=NULL;
  processor.output=&output;
  processor.passes=0;
  /* The extra exported registers only reach helpers that ignore them. */
  result=(int)sub_14021666C((__int64)(uintptr_t)&processor,0,0);
  if (destination)
  {
    if (options&1)
    {
      if (!capacity && result) result=-1;
      else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
      else if (result>=0 && (uint64_t)result>(uint64_t)capacity) result=-1;
    }
    else if (options&2)
    {
      if (capacity)
      {
        if (result<0) destination[0]=0;
        else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
        else destination[(uint64_t)capacity-1]=0;
      }
    }
    else if (!capacity) result=-1;
    else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
    else
    {
      result=-2;
      destination[(uint64_t)capacity-1]=0;
    }
  }
  free_base(processor.allocation);
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  /* Native EAX return is zero-extended even for negative signed int results. */
  return (unsigned int)result;
}


//----- (000000014020E7D8) ----------------------------------------------------
__int64            sub_14020E7D8(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h]
  char v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+39h] [rbp-C7h]
  __int16 v20; // [rsp+3Dh] [rbp-C3h]
  char v21; // [rsp+3Fh] [rbp-C1h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[7]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+98h] [rbp-68h]
  char v26; // [rsp+A0h] [rbp-60h]
  __int16 v27; // [rsp+A2h] [rbp-5Eh]
  int v28; // [rsp+B0h] [rbp-50h]
  char v29; // [rsp+B4h] [rbp-4Ch]
  __int64 v30; // [rsp+4B8h] [rbp+3B8h]
  void *Block; // [rsp+4C0h] [rbp+3C0h]
  _QWORD *v32; // [rsp+4C8h] [rbp+3C8h]
  int v33; // [rsp+4D0h] [rbp+3D0h]
  __int64 v34; // [rsp+4E0h] [rbp+3E0h]

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return sub_1401F8B20((unsigned __int64)&v15 ^ v34);
  }
  sub_140213644((_LocaleUpdate *)&v22, a5);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16[0] = (uint64)(uintptr_t)(a2);
  v16[1] = a3;
  v17 = 0;
  if ( (a1 & 2) != 0 || (v18 = 0, !a2) )
    v18 = 1;
  v24[2] = 0;
  v32 = v16;
  v24[5] = 0;
  v24[1] = (uint64)(uintptr_t)(v23);
  v24[4] = a6;
  v24[6] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  Block = nullptr;
  v24[0] = a1;
  v24[3] = a4;
  v33 = 0;
  v12 = sub_14021754C((__int64)v24, v10, v11);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && v12 )
        goto LABEL_20;
      v13 = v17;
      if ( v17 == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( v12 < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      v13 = v17;
      if ( v17 != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      v13 = v17;
      if ( v17 != a3 )
      {
LABEL_19:
        a2[v13] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( v23[16] )
    *(_DWORD *)(v22 + 936) &= ~2u;
  return sub_1401F8B20((unsigned __int64)&v15 ^ v34);
}

// 14020E8E8: variable 'v10' is possibly undefined
// 14020E8E8: variable 'v11' is possibly undefined
// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *__hidden this, struct __crt_locale_pointers *const);

//----- (000000014020E9AC) ----------------------------------------------------
__int64            sub_14020E9AC(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 result; // rax

  if ( !a4 || !a2 || !a3 )
  {
    *errno_sr() = 22;
    goto LABEL_9;
  }
  result = sub_14020DE94(a1, a2, a3, a4, a5, a6);
  if ( (int)result < 0 )
    *a2 = 0;
  if ( (_DWORD)result == -2 )
  {
    *errno_sr() = 34;
LABEL_9:
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  return result;
}


//----- (000000014020EA10) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_222(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 result; // rax

  if ( !a4 || !a2 || !a3 )
  {
    *errno_sr() = 22;
    goto LABEL_9;
  }
  result = sub_14020E060(a1, a2, a3, a4, a5, a6);
  if ( (int)result < 0 )
    *a2 = 0;
  if ( (_DWORD)result == -2 )
  {
    *errno_sr() = 34;
LABEL_9:
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  return result;
}


//----- (000000014020EAD8) ----------------------------------------------------
char            sub_14020EAD8(__int64 a1, unsigned __int64 a2)
{
  char v4; // si
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx

  if ( a2 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 0;
    v5 = 2 * a2;
    if ( (*(_QWORD *)(a1 + 1032) || v5 > 0x400) && v5 > *(_QWORD *)(a1 + 1024) )
    {
      v6 = malloc_base(2 * a2);
      if ( v6 )
      {
        free_base(*(void **)(a1 + 1032));
        *(_QWORD *)(a1 + 1032) = v6;
        v4 = 1;
        *(_QWORD *)(a1 + 1024) = v5;
      }
      free_base(nullptr);
      return v4;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *errno_sr() = 12;
    return 0;
  }
}

// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

//----- (000000014020EB80) ----------------------------------------------------
char            sub_14020EB80(__int64 a1, unsigned __int64 a2)
{
  char v4; // si
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx

  if ( a2 <= 0x3FFFFFFFFFFFFFFFLL )
  {
    v4 = 0;
    v5 = 4 * a2;
    if ( (*(_QWORD *)(a1 + 1032) || v5 > 0x400) && v5 > *(_QWORD *)(a1 + 1024) )
    {
      v6 = malloc_base(4 * a2);
      if ( v6 )
      {
        free_base(*(void **)(a1 + 1032));
        *(_QWORD *)(a1 + 1032) = v6;
        v4 = 1;
        *(_QWORD *)(a1 + 1024) = v5;
      }
      free_base(nullptr);
      return v4;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *errno_sr() = 12;
    return 0;
  }
}

// 140253F60: using guessed type __int64 __fastcall malloc_base(_QWORD);

//----- (000000014020EC2C) ----------------------------------------------------
char            sub_14020EC2C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020ECE8) ----------------------------------------------------
char            sub_14020ECE8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020EDA4) ----------------------------------------------------
char            sub_14020EDA4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020EE64) ----------------------------------------------------
char            sub_14020EE64(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020EF74) ----------------------------------------------------
char            sub_14020EF74(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F030) ----------------------------------------------------
char            sub_14020F030(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F0EC) ----------------------------------------------------
char            sub_14020F0EC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F1AC) ----------------------------------------------------
char            sub_14020F1AC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F2BC) ----------------------------------------------------
char            sub_14020F2BC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F378) ----------------------------------------------------
char            sub_14020F378(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F434) ----------------------------------------------------
char            sub_14020F434(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F4F4) ----------------------------------------------------
char            sub_14020F4F4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F604) ----------------------------------------------------
char            sub_14020F604(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_BYTE **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F6BC) ----------------------------------------------------
char            sub_14020F6BC(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_BYTE **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F79C) ----------------------------------------------------
char            sub_14020F79C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F858) ----------------------------------------------------
char            sub_14020F858(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F914) ----------------------------------------------------
char            sub_14020F914(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020F9D4) ----------------------------------------------------
char            sub_14020F9D4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FAE4) ----------------------------------------------------
char            sub_14020FAE4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FBA0) ----------------------------------------------------
char            sub_14020FBA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FC5C) ----------------------------------------------------
char            sub_14020FC5C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FD18) ----------------------------------------------------
char            sub_14020FD18(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FDD4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_244(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FE24) ----------------------------------------------------
char            sub_14020FE24(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FEE0) ----------------------------------------------------
char            sub_14020FEE0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014020FF9C) ----------------------------------------------------
char            sub_14020FF9C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210058) ----------------------------------------------------
char            sub_140210058(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210164) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_252(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210220) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_253(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402102DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_254(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210398) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_255(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402104B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_261(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402105B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_265(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402106A8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_269(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402107A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_273(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210884) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_276(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210940) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_277(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402109FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_278(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210AB8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_279(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 3, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 3;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210BC4) ----------------------------------------------------
char            sub_140210BC4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v5; // rax
  int v6; // r8d
  char v7; // r9
  __int64 v8; // rdx
  char v9; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v3 = *(int *)(a1 + 3564);
    if ( (unsigned int)v3 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v5 = 3 * v3;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      v2 = **(_QWORD **)(a1 + 8 * v5 + 1168);
      goto LABEL_13;
    }
    v6 = *(_DWORD *)(a1 + 60);
    v7 = *(_BYTE *)(a1 + 65);
    v8 = a1 + 1160 + 8 * v5;
    v9 = 0;
    if ( *(_DWORD *)v8 )
    {
      if ( !sub_140214A64(a1, v8, 4, v7, v6) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v9;
      }
    }
    else
    {
      *(_DWORD *)v8 = 4;
      *(_BYTE *)(v8 + 4) = v7;
      *(_DWORD *)(v8 + 16) = v6;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = v2;
  return 1;
}


//----- (0000000140210C80) ----------------------------------------------------
char            sub_140210C80(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v5; // rax
  int v6; // r8d
  char v7; // r9
  __int64 v8; // rdx
  char v9; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v3 = *(int *)(a1 + 3564);
    if ( (unsigned int)v3 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v5 = 3 * v3;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      v2 = **(_QWORD **)(a1 + 8 * v5 + 1168);
      goto LABEL_13;
    }
    v6 = *(_DWORD *)(a1 + 60);
    v7 = *(_BYTE *)(a1 + 65);
    v8 = a1 + 1160 + 8 * v5;
    v9 = 0;
    if ( *(_DWORD *)v8 )
    {
      if ( !sub_140214C94(a1, v8, 4, v7, v6) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v9;
      }
    }
    else
    {
      *(_DWORD *)v8 = 4;
      *(_BYTE *)(v8 + 4) = v7;
      *(_DWORD *)(v8 + 16) = v6;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = v2;
  return 1;
}


//----- (0000000140210D3C) ----------------------------------------------------
char            sub_140210D3C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  char v9; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v3 = *(int *)(a1 + 3564);
    if ( (unsigned int)v3 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v5 = 3 * v3;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      v2 = **(_QWORD **)(a1 + 8 * v5 + 1168);
      goto LABEL_13;
    }
    v6 = *(_DWORD *)(a1 + 60);
    v7 = *(_WORD *)(a1 + 66);
    v8 = a1 + 1160 + 8 * v5;
    v9 = 0;
    if ( *(_DWORD *)v8 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v8, 4, v7, v6) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v9;
      }
    }
    else
    {
      *(_DWORD *)v8 = 4;
      *(_WORD *)(v8 + 4) = v7;
      *(_DWORD *)(v8 + 16) = v6;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = v2;
  return 1;
}


//----- (0000000140210DF8) ----------------------------------------------------
char            sub_140210DF8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  char v9; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v3 = *(int *)(a1 + 3564);
    if ( (unsigned int)v3 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v5 = 3 * v3;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      v2 = **(_QWORD **)(a1 + 8 * v5 + 1168);
      goto LABEL_13;
    }
    v6 = *(_DWORD *)(a1 + 60);
    v7 = *(_WORD *)(a1 + 66);
    v8 = a1 + 1160 + 8 * v5;
    v9 = 0;
    if ( *(_DWORD *)v8 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v8, 4, v7, v6) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v9;
      }
    }
    else
    {
      *(_DWORD *)v8 = 4;
      *(_WORD *)(v8 + 4) = v7;
      *(_DWORD *)(v8 + 16) = v6;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = v2;
  return 1;
}


//----- (0000000140210EB4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_284(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210F14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_288(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140210FD0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_289(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014021108C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_290(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140211148) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_291(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140211254) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_296(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140211310) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_297(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402113CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_298(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140211488) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_299(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 2, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 2;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140211594) ----------------------------------------------------
char            sub_140211594(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140211650) ----------------------------------------------------
char            sub_140211650(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r8d
  char v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_BYTE *)(a1 + 65);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214C94(a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_BYTE *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (000000014021170C) ----------------------------------------------------
char            sub_14021170C(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (00000001402117CC) ----------------------------------------------------
char            sub_1402117CC(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  char v8; // bl

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v4 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * v4 + 1168);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 60);
    v6 = *(_WORD *)(a1 + 66);
    v7 = a1 + 1160 + 8 * v4;
    v8 = 0;
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, v7, 1, v6, v5) )
      {
        *errno_sr() = 22;
        sub_14024CF6C();
        return v8;
      }
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_WORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 16) = v5;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}


//----- (0000000140211A94) ----------------------------------------------------
bool            sub_140211A94(char a1, __int16 a2, int a3)
{
  __int64 v3; // rcx
  bool result; // al

  if ( a3 == 2 )
    return 0;
  if ( a3 == 3 || a3 == 12 || a3 == 13 )
    return 1;
  v3 = a1 & 4;
  result = (_DWORD)v3 != 0;
  if ( ((a2 - 99) & 0xFFEF) != 0 )
    return v3 == 0;
  return result;
}


//----- (0000000140211CCC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_347(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  char v10; // dl

  v4 = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    v4 = *(_QWORD *)(a1 + 1120);
    v7 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v7 = 512;
  }
  v8 = v7 + v4 - 1;
  for ( *(_QWORD *)(a1 + 72) = v8; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v10 = a2 % a3 + 48;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v10;
  }
  *(_DWORD *)(a1 + 80) = v8 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140211D54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_348(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  char v10; // dl

  v4 = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    v4 = *(_QWORD *)(a1 + 1120);
    v7 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v7 = 512;
  }
  v8 = v7 + v4 - 1;
  for ( *(_QWORD *)(a1 + 72) = v8; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v10 = a2 % a3 + 48;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v10;
  }
  *(_DWORD *)(a1 + 80) = v8 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140211DDC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_349(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  char v10; // dl

  v4 = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    v4 = *(_QWORD *)(a1 + 1120);
    v7 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v7 = 512;
  }
  v8 = v7 + v4 - 1;
  for ( *(_QWORD *)(a1 + 72) = v8; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v10 = a2 % a3 + 48;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v10;
  }
  *(_DWORD *)(a1 + 80) = v8 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140211E64) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_350(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  char v10; // dl

  v4 = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    v4 = *(_QWORD *)(a1 + 1120);
    v7 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v7 = 512;
  }
  v8 = v7 + v4 - 1;
  for ( *(_QWORD *)(a1 + 72) = v8; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v10 = a2 % a3 + 48;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v10;
  }
  *(_DWORD *)(a1 + 80) = v8 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140211EEC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_351(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  char v10; // dl

  v4 = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    v4 = *(_QWORD *)(a1 + 1120);
    v7 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v7 = 512;
  }
  v8 = v7 + v4 - 1;
  for ( *(_QWORD *)(a1 + 72) = v8; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v10 = a2 % a3 + 48;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v10;
  }
  *(_DWORD *)(a1 + 80) = v8 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140211F74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_352(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  char v10; // dl

  v4 = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    v4 = *(_QWORD *)(a1 + 1120);
    v7 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v7 = 512;
  }
  v8 = v7 + v4 - 1;
  for ( *(_QWORD *)(a1 + 72) = v8; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v10 = a2 % a3 + 48;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v10;
  }
  *(_DWORD *)(a1 + 80) = v8 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140211FFC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_353(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % a3 + 48;
    a2 /= a3;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (00000001402120A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_354(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % a3 + 48;
    a2 /= a3;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (0000000140212144) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_355(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % a3 + 48;
    a2 /= a3;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (00000001402121E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_356(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % a3 + 48;
    a2 /= a3;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (000000014021228C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_357(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % a3 + 48;
    a2 /= a3;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (0000000140212330) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_358(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % a3 + 48;
    a2 /= a3;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (00000001402123D4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_359(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  char v12; // dl

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v9 = 512;
  }
  v10 = v9 + v6 - 1;
  for ( *(_QWORD *)(a1 + 72) = v10; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v12 = a2 % v7 + 48;
    a2 /= v7;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v12;
  }
  *(_DWORD *)(a1 + 80) = v10 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140212464) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_360(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  char v12; // dl

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v9 = 512;
  }
  v10 = v9 + v6 - 1;
  for ( *(_QWORD *)(a1 + 72) = v10; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v12 = a2 % v7 + 48;
    a2 /= v7;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v12;
  }
  *(_DWORD *)(a1 + 80) = v10 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (00000001402124F4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_361(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  char v12; // dl

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v9 = 512;
  }
  v10 = v9 + v6 - 1;
  for ( *(_QWORD *)(a1 + 72) = v10; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v12 = a2 % v7 + 48;
    a2 /= v7;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v12;
  }
  *(_DWORD *)(a1 + 80) = v10 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140212584) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_362(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  char v12; // dl

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v9 = 512;
  }
  v10 = v9 + v6 - 1;
  for ( *(_QWORD *)(a1 + 72) = v10; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v12 = a2 % v7 + 48;
    a2 /= v7;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v12;
  }
  *(_DWORD *)(a1 + 80) = v10 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140212614) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_363(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  char v12; // dl

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v9 = 512;
  }
  v10 = v9 + v6 - 1;
  for ( *(_QWORD *)(a1 + 72) = v10; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v12 = a2 % v7 + 48;
    a2 /= v7;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v12;
  }
  *(_DWORD *)(a1 + 80) = v10 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (00000001402126A4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_364(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  char v12; // dl

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v9 = 512;
  }
  v10 = v9 + v6 - 1;
  for ( *(_QWORD *)(a1 + 72) = v10; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v12 = a2 % v7 + 48;
    a2 /= v7;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v12;
  }
  *(_DWORD *)(a1 + 80) = v10 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}


//----- (0000000140212734) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_365(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % v7 + 48;
    a2 /= v7;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (00000001402127D8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_366(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % v7 + 48;
    a2 /= v7;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (000000014021287C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_367(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % v7 + 48;
    a2 /= v7;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (0000000140212920) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_368(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % v7 + 48;
    a2 /= v7;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (00000001402129C4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_369(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % v7 + 48;
    a2 /= v7;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (0000000140212A68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_370(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % v7 + 48;
    a2 /= v7;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}


//----- (0000000140212B0C) ----------------------------------------------------
void            sub_140212B0C(__int64 *a1, unsigned __int8 a2, int a3, _DWORD *a4)
{
  int i; // edi
  int v9; // eax

  if ( a3 > 0 )
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8))
        && (unsigned int)unknown_libname_207(a2, *a1) == -1 )
      {
        *a4 = -1;
        v9 = -1;
      }
      else
      {
        v9 = ++*a4;
      }
      if ( v9 == -1 )
        break;
    }
  }
}


//----- (0000000140212B98) ----------------------------------------------------
void            sub_140212B98(__int64 *a1, char a2, int a3, _DWORD *a4)
{
  unsigned __int16 v5; // r14
  int i; // edi
  int v9; // eax

  if ( a3 > 0 )
  {
    v5 = a2;
    for ( i = 0; i < a3; ++i )
    {
      if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8))
        && (unsigned __int16)sub_140256B38(v5, *a1) == 0xFFFF )
      {
        *a4 = -1;
        v9 = -1;
      }
      else
      {
        v9 = ++*a4;
      }
      if ( v9 == -1 )
        break;
    }
  }
}


//----- (0000000140212C2C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_371(__int64 *a1, char a2, int a3, int *a4)
{
  int v4; // r10d
  int i; // r11d
  __int64 result; // rax

  if ( a3 > 0 )
  {
    v4 = *a4;
    for ( i = 0; i < a3; ++i )
    {
      result = *(_QWORD *)(*a1 + 8);
      if ( *(_QWORD *)(*a1 + 16) == result )
      {
        if ( *(_BYTE *)(*a1 + 24) )
          ++v4;
        else
          v4 = -1;
        *a4 = v4;
      }
      else
      {
        *a4 = v4 + 1;
        ++*(_QWORD *)(*a1 + 16);
        **(_BYTE **)*a1 = a2;
        result = *a1;
        ++*(_QWORD *)*a1;
        v4 = *a4;
      }
      if ( v4 == -1 )
        break;
    }
  }
  return result;
}


//----- (0000000140212CA4) ----------------------------------------------------
__int64            sub_140212CA4(__int64 *a1, char a2, int a3, int *a4)
{
  int v4; // r10d
  int i; // r11d
  __int64 result; // rax

  if ( a3 > 0 )
  {
    v4 = *a4;
    for ( i = 0; i < a3; ++i )
    {
      result = *(_QWORD *)(*a1 + 8);
      if ( *(_QWORD *)(*a1 + 16) == result )
      {
        if ( *(_BYTE *)(*a1 + 24) )
          ++v4;
        else
          v4 = -1;
        *a4 = v4;
      }
      else
      {
        *a4 = v4 + 1;
        ++*(_QWORD *)(*a1 + 16);
        **(_WORD **)*a1 = a2;
        result = *a1;
        *(_QWORD *)*a1 += 2LL;
        v4 = *a4;
      }
      if ( v4 == -1 )
        break;
    }
  }
  return result;
}


//----- (0000000140213644) ----------------------------------------------------
_LocaleUpdate *           sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *     a2)
{
  __int64 *v3; // rsi
  __int128 v4; // xmm0
  unsigned __int64 v5; // rax
  int v6; // eax

  *((_BYTE *)this + 24) = 0;
  v3 = (__int64 *)((char *)this + 8);
  if ( a2 )
  {
    v4 = *(_OWORD *)a2;
LABEL_5:
    *(_OWORD *)v3 = v4;
    return this;
  }
  if ( !dword_140404A6C[19065283] )
  {
    v4 = *(_OWORD *)&off_140302578;
    goto LABEL_5;
  }
  v5 = sub_140255A70();
  *(_QWORD *)this = v5;
  *v3 = *(_QWORD *)(v5 + 144);
  *((_QWORD *)this + 2) = *(_QWORD *)(v5 + 136);
  sub_140255D2C(v5, v3);
  sub_140255D60(*(_QWORD *)this, (__int64 *)this + 2);
  v6 = *(_DWORD *)(*(_QWORD *)this + 936LL);
  if ( (v6 & 2) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)this + 936LL) = v6 | 2;
    *((_BYTE *)this + 24) = 1;
  }
  return this;
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);
// 140302578: using guessed type __int16 **off_140302578;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014021370C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_394(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213730) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_395(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213754) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_396(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213778) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_397(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (000000014021379C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_398(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (00000001402137C0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_399(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (00000001402137E4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_400(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213808) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_401(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (000000014021382C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_402(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213850) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_403(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213874) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_404(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213898) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_405(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (00000001402138BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_406(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (00000001402138E0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_407(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213904) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_408(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213928) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_409(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (000000014021394C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_410(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213970) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_411(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213994) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_412(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (00000001402139B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_413(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (00000001402139DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_414(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213A00) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_415(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213A24) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_416(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213A48) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_417(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213A6C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_418(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213A90) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_419(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213AB4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_420(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213AD8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_421(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213AFC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_422(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213B20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_423(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}


//----- (0000000140213B6C) ----------------------------------------------------
void            sub_140213B6C(void **this)
{
  free_base(*(this + 129));
  *(this + 129) = nullptr;
}


//----- (0000000140213B90) ----------------------------------------------------
void **           __crt_unique_heap_ptr__wchar_t____crt_internal_free_policy__operator_assign(void **a1, void **a2)
{
  free_base(*a1);
  *a1 = nullptr;
  *a1 = *a2;
  *a2 = nullptr;
  return a1;
}


//----- (0000000140213BD4)
__int64 sub_140213BD4(__int64 **a1)
{
  struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
  uint64_t context[143]={0};
  __int64 stream=**a1;
  char buffering=sub_140253DEC(stream);
  sub_140213644((_LocaleUpdate *)(void *)&locale,(struct __crt_locale_pointers *)(uintptr_t)*a1[1]);
  context[0]=*a1[2];
  context[1]=(uintptr_t)&locale.locale;
  context[3]=*a1[3];
  context[4]=*a1[4];
  context[141]=stream;
  unsigned int result=(unsigned int)sub_140215FA4((__int64)(uintptr_t)context);
  free_base((void *)(uintptr_t)context[140]);
  context[140]=0;
  if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
  sub_140253EBC(buffering,stream);
  return result;
}

//----- (0000000140213D1C) ----------------------------------------------------
__int64            _lambda_ee59099aa97e0ff6f003b984c1584058___operator_call(__int64 **a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v9; // [rsp+0h] [rbp-100h] BYREF
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[7]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  char v14; // [rsp+80h] [rbp-80h]
  __int16 v15; // [rsp+82h] [rbp-7Eh]
  int v16; // [rsp+90h] [rbp-70h]
  char v17; // [rsp+94h] [rbp-6Ch]
  __int64 v18; // [rsp+498h] [rbp+398h]
  void *Block; // [rsp+4A0h] [rbp+3A0h]
  __int64 v20; // [rsp+4A8h] [rbp+3A8h]
  int v21; // [rsp+4B0h] [rbp+3B0h]
  __int64 v22; // [rsp+4B8h] [rbp+3B8h]
  __int64 v23; // [rsp+4C0h] [rbp+3C0h]
  int v24; // [rsp+E28h] [rbp+D28h]
  int v25; // [rsp+E2Ch] [rbp+D2Ch]
  __int64 v26; // [rsp+E30h] [rbp+D30h]

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  sub_140213644((_LocaleUpdate *)&v10, (struct __crt_locale_pointers *    )*a1[1]);
  v4 = *a1[4];
  v5 = **a1;
  v6 = *a1[3];
  v7 = *a1[2];
  v12[1] = (uint64)(uintptr_t)(v11);
  v20 = v5;
  v24 = -1;
  v25 = -1;
  v12[2] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  Block = nullptr;
  v12[0] = v7;
  v12[3] = v6;
  v12[4] = v4;
  v21 = 0;
  v22 = 0;
  v23 = v6;
  sub_140216AF0((__int64)v12);
  free_base(Block);
  Block = nullptr;
  if ( v11[16] )
    *(_DWORD *)(v10 + 936) &= ~2u;
  sub_140253EBC(v3, v2);
  return sub_1401F8B20((unsigned __int64)&v9 ^ v26);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140213E84) ----------------------------------------------------
__int64            _lambda_a2288fdbbd702c8f223b438290af01a4___operator_call(__int64 **a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v9; // [rsp+0h] [rbp-100h] BYREF
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[7]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  __int16 v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+90h] [rbp-70h]
  char v16; // [rsp+94h] [rbp-6Ch]
  __int64 v17; // [rsp+498h] [rbp+398h]
  void *Block; // [rsp+4A0h] [rbp+3A0h]
  __int64 v19; // [rsp+4A8h] [rbp+3A8h]
  int v20; // [rsp+4B0h] [rbp+3B0h]
  __int64 v21; // [rsp+4B8h] [rbp+3B8h]
  __int64 v22; // [rsp+4C0h] [rbp+3C0h]
  int v23; // [rsp+E28h] [rbp+D28h]
  int v24; // [rsp+E2Ch] [rbp+D2Ch]
  __int64 v25; // [rsp+E30h] [rbp+D30h]

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  sub_140213644((_LocaleUpdate *)&v10, (struct __crt_locale_pointers *    )*a1[1]);
  v4 = *a1[4];
  v5 = **a1;
  v6 = *a1[3];
  v7 = *a1[2];
  v12[1] = (uint64)(uintptr_t)(v11);
  v19 = v5;
  v23 = -1;
  v24 = -1;
  v12[2] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  Block = nullptr;
  v12[0] = v7;
  v12[3] = v6;
  v12[4] = v4;
  v20 = 0;
  v21 = 0;
  v22 = v6;
  sub_140215CFC((__int64)v12);
  free_base(Block);
  Block = nullptr;
  if ( v11[16] )
    *(_DWORD *)(v10 + 936) &= ~2u;
  sub_140253EBC(v3, v2);
  return sub_1401F8B20((unsigned __int64)&v9 ^ v25);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140213FD0) ----------------------------------------------------
__int64            sub_140213FD0(__int64 **a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+0h] [rbp-100h] BYREF
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[7]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  char v14; // [rsp+80h] [rbp-80h]
  __int16 v15; // [rsp+82h] [rbp-7Eh]
  int v16; // [rsp+90h] [rbp-70h]
  char v17; // [rsp+94h] [rbp-6Ch]
  __int64 v18; // [rsp+498h] [rbp+398h]
  void *Block; // [rsp+4A0h] [rbp+3A0h]
  __int64 v20; // [rsp+4A8h] [rbp+3A8h]
  int v21; // [rsp+4B0h] [rbp+3B0h]
  __int64 v22; // [rsp+4C0h] [rbp+3C0h]

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  sub_140213644((_LocaleUpdate *)&v10, (struct __crt_locale_pointers *    )*a1[1]);
  v4 = *a1[4];
  v5 = *a1[3];
  v6 = a1[2];
  v7 = *v6;
  v20 = **a1;
  v12[2] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  Block = nullptr;
  v12[0] = v7;
  v12[1] = (uint64)(uintptr_t)(v11);
  v12[3] = v5;
  v12[4] = v4;
  v21 = 0;
  sub_140216DA4((__int64)v12, (__int64)v6, v7);
  free_base(Block);
  Block = nullptr;
  if ( v11[16] )
    *(_DWORD *)(v10 + 936) &= ~2u;
  sub_140253EBC(v3, v2);
  return sub_1401F8B20((unsigned __int64)&v9 ^ v22);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140214114) ----------------------------------------------------
__int64            _lambda_7e489fec146d5348dbc86d3cce37c1b5___operator_call(__int64 **a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+0h] [rbp-100h] BYREF
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[7]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  char v14; // [rsp+80h] [rbp-80h]
  __int16 v15; // [rsp+82h] [rbp-7Eh]
  int v16; // [rsp+90h] [rbp-70h]
  char v17; // [rsp+94h] [rbp-6Ch]
  __int64 v18; // [rsp+498h] [rbp+398h]
  void *Block; // [rsp+4A0h] [rbp+3A0h]
  __int64 v20; // [rsp+4A8h] [rbp+3A8h]
  int v21; // [rsp+4B0h] [rbp+3B0h]
  __int64 v22; // [rsp+4C0h] [rbp+3C0h]

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  sub_140213644((_LocaleUpdate *)&v10, (struct __crt_locale_pointers *    )*a1[1]);
  v4 = *a1[4];
  v5 = *a1[3];
  v6 = a1[2];
  v7 = *v6;
  v20 = **a1;
  v12[2] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  Block = nullptr;
  v12[0] = v7;
  v12[1] = (uint64)(uintptr_t)(v11);
  v12[3] = v5;
  v12[4] = v4;
  v21 = 0;
  sub_140216878((__int64)v12, (__int64)v6, v7);
  free_base(Block);
  Block = nullptr;
  if ( v11[16] )
    *(_DWORD *)(v10 + 936) &= ~2u;
  sub_140253EBC(v3, v2);
  return sub_1401F8B20((unsigned __int64)&v9 ^ v22);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (0000000140214248) ----------------------------------------------------
__int64            _lambda_32f117a32e8f8eb613cbf2ca819ed45e___operator_call(__int64 **a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v8; // [rsp+0h] [rbp-100h] BYREF
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v11[7]; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+78h] [rbp-88h]
  __int16 v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+90h] [rbp-70h]
  char v15; // [rsp+94h] [rbp-6Ch]
  __int64 v16; // [rsp+498h] [rbp+398h]
  void *Block; // [rsp+4A0h] [rbp+3A0h]
  __int64 v18; // [rsp+4A8h] [rbp+3A8h]
  int v19; // [rsp+4B0h] [rbp+3B0h]
  __int64 v20; // [rsp+4C0h] [rbp+3C0h]

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  sub_140213644((_LocaleUpdate *)&v9, (struct __crt_locale_pointers *    )*a1[1]);
  v4 = *a1[4];
  v5 = *a1[3];
  v6 = *a1[2];
  v18 = **a1;
  v11[2] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  Block = nullptr;
  v11[0] = v6;
  v11[1] = (uint64)(uintptr_t)(v10);
  v11[3] = v5;
  v11[4] = v4;
  v19 = 0;
  sub_140215AD4((__int64)v11);
  free_base(Block);
  Block = nullptr;
  if ( v10[16] )
    *(_DWORD *)(v9 + 936) &= ~2u;
  sub_140253EBC(v3, v2);
  return sub_1401F8B20((unsigned __int64)&v8 ^ v20);
}

// 140213644: using guessed type _LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2);

//----- (00000001402145B0) ----------------------------------------------------
void            sub_1402145B0(sr_anon_105 *this, char *a2, struct sr_anon_68 *     a3)
{
  char v3; // r9
  char v4; // al
  char v5; // dl
  char *v6; // rcx
  char *v7; // r8
  char *v8; // rdx
  char v9; // al

  v3 = ***(_BYTE ***)(*(_QWORD *)a2 + 248LL);
  v4 = *(_BYTE *)this;
  if ( *(_BYTE *)this )
  {
    v5 = *(_BYTE *)this;
    do
    {
      v4 = v5;
      if ( v5 == v3 )
        break;
      this = (sr_anon_105 *)((char *)this + 1);
      v4 = *(_BYTE *)this;
      v5 = *(_BYTE *)this;
    }
    while ( *(_BYTE *)this );
  }
  v6 = (char *)this + 1;
  if ( v4 )
  {
    while ( *v6 && ((*v6 - 69) & 0xDF) != 0 )
      ++v6;
    v7 = v6;
    do
      --v6;
    while ( *v6 == 48 );
    v8 = v6 - 1;
    if ( *v6 != v3 )
      v8 = v6;
    do
    {
      v9 = *v7;
      ++v8;
      ++v7;
      *v8 = v9;
    }
    while ( v9 );
  }
}


//----- (00000001402148E4) ----------------------------------------------------
int *           sub_1402148E4(int **this)
{
  int *result; // rax

  result = *this;
  if ( !*this )
  {
    result = errno_sr();
    *this = result;
  }
  return result;
}


//----- (0000000140214A64) ----------------------------------------------------
bool            sub_140214A64(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  char v5; // cl
  bool v8; // zf
  char v9; // r9
  __int64 v10; // r8
  char v11; // cl
  char v12; // al
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // r8
  int v20; // edx
  int v21; // edx
  int v22; // r8d
  int v23; // r8d
  int v25; // r8d
  char v26; // dl

  v5 = *(_BYTE *)(a2 + 4);
  if ( v5 == 112 )
  {
    v8 = a4 == 112;
  }
  else
  {
    v8 = a4 == 112;
    if ( a4 != 112 )
    {
      v9 = 0;
      if ( ((v5 - 83) & 0xDF) != 0 )
      {
        if ( ((a4 - 83) & 0xDF) == 0 )
          return 0;
        if ( ((v5 - 67) & 0xDF) != 0 )
        {
          if ( ((a4 - 67) & 0xDF) != 0 )
          {
            v10 = 0x120821001LL;
            if ( (unsigned __int8)(v5 - 88) <= 0x20u && _bittest64(&v10, (char)(v5 - 88))
              || (v8 = v5 == 42, v11 = 0, v8) )
            {
              v11 = 1;
            }
            if ( (unsigned __int8)(a4 - 88) <= 0x20u && _bittest64(&v10, (char)(a4 - 88)) || (v12 = 0, a4 == 42) )
              v12 = 1;
            if ( !v11 )
            {
              if ( !v12 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( v11 == v12 )
            {
              v14 = *(_DWORD *)(a2 + 16);
              if ( (v14 == 9) == (a5 == 9) )
              {
                v15 = 8;
                if ( v14 > 5 )
                {
                  v22 = v14 - 6;
                  if ( !v22 )
                    goto LABEL_27;
                  v23 = v22 - 1;
                  if ( !v23 )
                    goto LABEL_27;
                  v17 = v23 - 2;
                  if ( !v17 )
                    goto LABEL_27;
                }
                else
                {
                  if ( v14 == 5 )
                  {
LABEL_27:
                    v19 = 8;
                    goto LABEL_28;
                  }
                  if ( !v14 )
                    goto LABEL_36;
                  v16 = v14 - 1;
                  if ( !v16 )
                  {
                    v19 = 1;
                    goto LABEL_28;
                  }
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
                    v19 = 2;
                    goto LABEL_28;
                  }
                }
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 )
                    goto LABEL_27;
                  v19 = 0;
LABEL_28:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_50:
                        v15 = 4;
                        return v19 == v15;
                      }
                      if ( a5 == 1 )
                      {
                        v15 = 1;
                      }
                      else
                      {
                        v20 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_33;
                        v15 = 2;
                      }
                    }
                    return v19 == v15;
                  }
                  if ( a5 == 6 )
                    return v19 == v15;
                  if ( a5 == 7 )
                    return v19 == v15;
                  v20 = a5 - 9;
                  if ( a5 == 9 )
                    return v19 == v15;
LABEL_33:
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    if ( v21 != 1 )
                      v15 = 0;
                    return v19 == v15;
                  }
                  goto LABEL_50;
                }
LABEL_36:
                v19 = 4;
                goto LABEL_28;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((v5 - 83) & 0xDF) == 0) != (((a4 - 83) & 0xDF) == 0) )
      {
        return 0;
      }
      if ( (((v5 - 67) & 0xDF) == 0) != (((a4 - 67) & 0xDF) == 0) )
        return 0;
      v25 = *(_DWORD *)(a2 + 16);
      if ( v25 != 2 )
      {
        if ( v25 == 3 || v25 == 12 )
        {
          v26 = 1;
          goto LABEL_62;
        }
        if ( v25 != 13 )
        {
          v26 = ((v5 - 99) & 0xEF) != 0;
          goto LABEL_62;
        }
      }
      v26 = 0;
LABEL_62:
      if ( a5 != 2 )
      {
        if ( a5 == 3 || a5 == 12 )
        {
          v9 = 1;
        }
        else if ( a5 != 13 )
        {
          v9 = ((a4 - 99) & 0xEF) != 0;
        }
      }
      return v26 == v9;
    }
  }
  return (v5 == 112) ^ !v8;
}


//----- (0000000140214C94) ----------------------------------------------------
bool            sub_140214C94(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  char v5; // cl
  bool v8; // zf
  char v9; // r9
  __int64 v10; // r8
  char v11; // cl
  char v12; // al
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // r8
  int v20; // edx
  int v21; // edx
  int v22; // r8d
  int v23; // r8d
  int v25; // r8d
  char v26; // dl

  v5 = *(_BYTE *)(a2 + 4);
  if ( v5 == 112 )
  {
    v8 = a4 == 112;
  }
  else
  {
    v8 = a4 == 112;
    if ( a4 != 112 )
    {
      v9 = 0;
      if ( ((v5 - 83) & 0xDF) != 0 )
      {
        if ( ((a4 - 83) & 0xDF) == 0 )
          return 0;
        if ( ((v5 - 67) & 0xDF) != 0 )
        {
          if ( ((a4 - 67) & 0xDF) != 0 )
          {
            v10 = 0x120821001LL;
            if ( (unsigned __int8)(v5 - 88) <= 0x20u && _bittest64(&v10, (char)(v5 - 88))
              || (v8 = v5 == 42, v11 = 0, v8) )
            {
              v11 = 1;
            }
            if ( (unsigned __int8)(a4 - 88) <= 0x20u && _bittest64(&v10, (char)(a4 - 88)) || (v12 = 0, a4 == 42) )
              v12 = 1;
            if ( !v11 )
            {
              if ( !v12 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( v11 == v12 )
            {
              v14 = *(_DWORD *)(a2 + 16);
              if ( (v14 == 9) == (a5 == 9) )
              {
                v15 = 8;
                if ( v14 > 5 )
                {
                  v22 = v14 - 6;
                  if ( !v22 )
                    goto LABEL_27;
                  v23 = v22 - 1;
                  if ( !v23 )
                    goto LABEL_27;
                  v17 = v23 - 2;
                  if ( !v17 )
                    goto LABEL_27;
                }
                else
                {
                  if ( v14 == 5 )
                  {
LABEL_27:
                    v19 = 8;
                    goto LABEL_28;
                  }
                  if ( !v14 )
                    goto LABEL_36;
                  v16 = v14 - 1;
                  if ( !v16 )
                  {
                    v19 = 1;
                    goto LABEL_28;
                  }
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
                    v19 = 2;
                    goto LABEL_28;
                  }
                }
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 )
                    goto LABEL_27;
                  v19 = 0;
LABEL_28:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_50:
                        v15 = 4;
                        return v19 == v15;
                      }
                      if ( a5 == 1 )
                      {
                        v15 = 1;
                      }
                      else
                      {
                        v20 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_33;
                        v15 = 2;
                      }
                    }
                    return v19 == v15;
                  }
                  if ( a5 == 6 )
                    return v19 == v15;
                  if ( a5 == 7 )
                    return v19 == v15;
                  v20 = a5 - 9;
                  if ( a5 == 9 )
                    return v19 == v15;
LABEL_33:
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    if ( v21 != 1 )
                      v15 = 0;
                    return v19 == v15;
                  }
                  goto LABEL_50;
                }
LABEL_36:
                v19 = 4;
                goto LABEL_28;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((v5 - 83) & 0xDF) == 0) != (((a4 - 83) & 0xDF) == 0) )
      {
        return 0;
      }
      if ( (((v5 - 67) & 0xDF) == 0) != (((a4 - 67) & 0xDF) == 0) )
        return 0;
      v25 = *(_DWORD *)(a2 + 16);
      if ( v25 != 2 )
      {
        if ( v25 == 3 || v25 == 12 )
        {
          v26 = 1;
          goto LABEL_62;
        }
        if ( v25 != 13 )
        {
          v26 = ((v5 - 99) & 0xEF) != 0;
          goto LABEL_62;
        }
      }
      v26 = 0;
LABEL_62:
      if ( a5 != 2 )
      {
        if ( a5 == 3 || a5 == 12 )
        {
          v9 = 1;
        }
        else if ( a5 != 13 )
        {
          v9 = ((a4 - 99) & 0xEF) != 0;
        }
      }
      return v26 == v9;
    }
  }
  return (v5 == 112) ^ !v8;
}


//----- (0000000140214EC4) ----------------------------------------------------
char            sub_140214EC4(_QWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int16 v8; // dx
  bool v10; // zf
  __int64 v11; // r8
  char v12; // cl
  char v13; // al
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // r8
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  int v24; // r8d
  bool v26; // bl

  v8 = *(_WORD *)(a2 + 4);
  if ( v8 == 112 )
  {
    v10 = a4 == 112;
  }
  else
  {
    v10 = a4 == 112;
    if ( a4 != 112 )
    {
      if ( ((v8 - 83) & 0xFFDF) != 0 )
      {
        if ( ((a4 - 83) & 0xFFDF) == 0 )
          return 0;
        if ( ((v8 - 67) & 0xFFDF) != 0 )
        {
          if ( ((a4 - 67) & 0xFFDF) != 0 )
          {
            v11 = 0x120821001LL;
            v12 = (unsigned __int16)(v8 - 88) <= 0x20u && _bittest64(&v11, (unsigned __int16)(v8 - 88)) || v8 == 42;
            v13 = (unsigned __int16)(a4 - 88) <= 0x20u && _bittest64(&v11, (unsigned __int16)(a4 - 88)) || a4 == 42;
            if ( !v12 )
            {
              if ( !v13 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( v12 == v13 )
            {
              v15 = *(_DWORD *)(a2 + 16);
              if ( (v15 == 9) == (a5 == 9) )
              {
                v16 = 8;
                if ( v15 > 5 )
                {
                  v23 = v15 - 6;
                  if ( !v23 )
                    goto LABEL_29;
                  v24 = v23 - 1;
                  if ( !v24 )
                    goto LABEL_29;
                  v18 = v24 - 2;
                  if ( !v18 )
                    goto LABEL_29;
                }
                else
                {
                  if ( v15 == 5 )
                  {
LABEL_29:
                    v20 = 8;
                    goto LABEL_30;
                  }
                  if ( !v15 )
                    goto LABEL_38;
                  v17 = v15 - 1;
                  if ( !v17 )
                  {
                    v20 = 1;
                    goto LABEL_30;
                  }
                  v18 = v17 - 1;
                  if ( !v18 )
                  {
                    v20 = 2;
                    goto LABEL_30;
                  }
                }
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 )
                    goto LABEL_29;
                  v20 = 0;
LABEL_30:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_52:
                        v16 = 4;
                        return v20 == v16;
                      }
                      if ( a5 == 1 )
                      {
                        v16 = 1;
                      }
                      else
                      {
                        v21 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_35;
                        v16 = 2;
                      }
                    }
                    return v20 == v16;
                  }
                  if ( a5 == 6 )
                    return v20 == v16;
                  if ( a5 == 7 )
                    return v20 == v16;
                  v21 = a5 - 9;
                  if ( a5 == 9 )
                    return v20 == v16;
LABEL_35:
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    if ( v22 != 1 )
                      v16 = 0;
                    return v20 == v16;
                  }
                  goto LABEL_52;
                }
LABEL_38:
                v20 = 4;
                goto LABEL_30;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((v8 - 83) & 0xFFDF) == 0) != (((a4 - 83) & 0xFFDF) == 0) )
      {
        return 0;
      }
      if ( (((v8 - 67) & 0xFFDF) == 0) == (((a4 - 67) & 0xFFDF) == 0) )
      {
        v26 = sub_140211A94(*a1, v8, *(_DWORD *)(a2 + 16));
        if ( v26 == sub_140211A94(*a1, a4, a5) )
          return 1;
      }
      return 0;
    }
  }
  return (v8 == 112) ^ !v10;
}


//----- (00000001402150C4) ----------------------------------------------------
char            sub_1402150C4(_QWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int16 v8; // dx
  bool v10; // zf
  __int64 v11; // r8
  char v12; // cl
  char v13; // al
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // r8
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  int v24; // r8d
  bool v26; // bl

  v8 = *(_WORD *)(a2 + 4);
  if ( v8 == 112 )
  {
    v10 = a4 == 112;
  }
  else
  {
    v10 = a4 == 112;
    if ( a4 != 112 )
    {
      if ( ((v8 - 83) & 0xFFDF) != 0 )
      {
        if ( ((a4 - 83) & 0xFFDF) == 0 )
          return 0;
        if ( ((v8 - 67) & 0xFFDF) != 0 )
        {
          if ( ((a4 - 67) & 0xFFDF) != 0 )
          {
            v11 = 0x120821001LL;
            v12 = (unsigned __int16)(v8 - 88) <= 0x20u && _bittest64(&v11, (unsigned __int16)(v8 - 88)) || v8 == 42;
            v13 = (unsigned __int16)(a4 - 88) <= 0x20u && _bittest64(&v11, (unsigned __int16)(a4 - 88)) || a4 == 42;
            if ( !v12 )
            {
              if ( !v13 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( v12 == v13 )
            {
              v15 = *(_DWORD *)(a2 + 16);
              if ( (v15 == 9) == (a5 == 9) )
              {
                v16 = 8;
                if ( v15 > 5 )
                {
                  v23 = v15 - 6;
                  if ( !v23 )
                    goto LABEL_29;
                  v24 = v23 - 1;
                  if ( !v24 )
                    goto LABEL_29;
                  v18 = v24 - 2;
                  if ( !v18 )
                    goto LABEL_29;
                }
                else
                {
                  if ( v15 == 5 )
                  {
LABEL_29:
                    v20 = 8;
                    goto LABEL_30;
                  }
                  if ( !v15 )
                    goto LABEL_38;
                  v17 = v15 - 1;
                  if ( !v17 )
                  {
                    v20 = 1;
                    goto LABEL_30;
                  }
                  v18 = v17 - 1;
                  if ( !v18 )
                  {
                    v20 = 2;
                    goto LABEL_30;
                  }
                }
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 )
                    goto LABEL_29;
                  v20 = 0;
LABEL_30:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_52:
                        v16 = 4;
                        return v20 == v16;
                      }
                      if ( a5 == 1 )
                      {
                        v16 = 1;
                      }
                      else
                      {
                        v21 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_35;
                        v16 = 2;
                      }
                    }
                    return v20 == v16;
                  }
                  if ( a5 == 6 )
                    return v20 == v16;
                  if ( a5 == 7 )
                    return v20 == v16;
                  v21 = a5 - 9;
                  if ( a5 == 9 )
                    return v20 == v16;
LABEL_35:
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    if ( v22 != 1 )
                      v16 = 0;
                    return v20 == v16;
                  }
                  goto LABEL_52;
                }
LABEL_38:
                v20 = 4;
                goto LABEL_30;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((v8 - 83) & 0xFFDF) == 0) != (((a4 - 83) & 0xFFDF) == 0) )
      {
        return 0;
      }
      if ( (((v8 - 67) & 0xFFDF) == 0) == (((a4 - 67) & 0xFFDF) == 0) )
      {
        v26 = sub_140211A94(*a1, v8, *(_DWORD *)(a2 + 16));
        if ( v26 == sub_140211A94(*a1, a4, a5) )
          return 1;
      }
      return 0;
    }
  }
  return (v8 == 112) ^ !v10;
}


//----- (0000000140215324) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_450(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *a2 = sub_14023CCCC(v7 - 1, (__int64 *)&v10, 0xAu);
  v8 = *(int **)(a1 + 16);
  if ( !v8 )
  {
    v8 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v8);
  }
  if ( *v8 == 34 || v10 < *(_QWORD *)(a1 + 24) )
    v6 = 0;
  else
    *(_QWORD *)(a1 + 24) = v10;
  if ( !*v2 && v5 )
    *v2 = v5;
  return v6;
}


//----- (00000001402153C8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_451(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *a2 = sub_14023CCCC(v7 - 1, (__int64 *)&v10, 0xAu);
  v8 = *(int **)(a1 + 16);
  if ( !v8 )
  {
    v8 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v8);
  }
  if ( *v8 == 34 || v10 < *(_QWORD *)(a1 + 24) )
    v6 = 0;
  else
    *(_QWORD *)(a1 + 24) = v10;
  if ( !*v2 && v5 )
    *v2 = v5;
  return v6;
}


//----- (000000014021546C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_452(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *a2 = sub_14023CCCC(v7 - 1, (__int64 *)&v10, 0xAu);
  v8 = *(int **)(a1 + 16);
  if ( !v8 )
  {
    v8 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v8);
  }
  if ( *v8 == 34 || v10 < *(_QWORD *)(a1 + 24) )
    v6 = 0;
  else
    *(_QWORD *)(a1 + 24) = v10;
  if ( !*v2 && v5 )
    *v2 = v5;
  return v6;
}


//----- (0000000140215510) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_453(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *a2 = sub_14023CCCC(v7 - 1, (__int64 *)&v10, 0xAu);
  v8 = *(int **)(a1 + 16);
  if ( !v8 )
  {
    v8 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v8);
  }
  if ( *v8 == 34 || v10 < *(_QWORD *)(a1 + 24) )
    v6 = 0;
  else
    *(_QWORD *)(a1 + 24) = v10;
  if ( !*v2 && v5 )
    *v2 = v5;
  return v6;
}


//----- (00000001402155B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_454(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *a2 = sub_14023CCCC(v7 - 1, (__int64 *)&v10, 0xAu);
  v8 = *(int **)(a1 + 16);
  if ( !v8 )
  {
    v8 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v8);
  }
  if ( *v8 == 34 || v10 < *(_QWORD *)(a1 + 24) )
    v6 = 0;
  else
    *(_QWORD *)(a1 + 24) = v10;
  if ( !*v2 && v5 )
    *v2 = v5;
  return v6;
}


//----- (0000000140215658) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_455(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *a2 = sub_14023CCCC(v7 - 1, (__int64 *)&v10, 0xAu);
  v8 = *(int **)(a1 + 16);
  if ( !v8 )
  {
    v8 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v8);
  }
  if ( *v8 == 34 || v10 < *(_QWORD *)(a1 + 24) )
    v6 = 0;
  else
    *(_QWORD *)(a1 + 24) = v10;
  if ( !*v2 && v5 )
    *v2 = v5;
  return v6;
}


//----- (00000001402156FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_456(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  int *v7; // rax
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(v6 - 2), (unsigned __int16 *)&v9, 0xAu);
  v7 = *(int **)(a1 + 16);
  if ( !v7 )
  {
    v7 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v7);
  }
  if ( *v7 == 34 || v9 < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
    result = 1;
  }
  if ( !*v2 )
  {
    if ( v5 )
      *v2 = v5;
  }
  return result;
}


//----- (00000001402157A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_457(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  int *v7; // rax
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(v6 - 2), (unsigned __int16 *)&v9, 0xAu);
  v7 = *(int **)(a1 + 16);
  if ( !v7 )
  {
    v7 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v7);
  }
  if ( *v7 == 34 || v9 < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
    result = 1;
  }
  if ( !*v2 )
  {
    if ( v5 )
      *v2 = v5;
  }
  return result;
}


//----- (0000000140215844) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_458(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  int *v7; // rax
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(v6 - 2), (unsigned __int16 *)&v9, 0xAu);
  v7 = *(int **)(a1 + 16);
  if ( !v7 )
  {
    v7 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v7);
  }
  if ( *v7 == 34 || v9 < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
    result = 1;
  }
  if ( !*v2 )
  {
    if ( v5 )
      *v2 = v5;
  }
  return result;
}


//----- (00000001402158E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_459(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  int *v7; // rax
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(v6 - 2), (unsigned __int16 *)&v9, 0xAu);
  v7 = *(int **)(a1 + 16);
  if ( !v7 )
  {
    v7 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v7);
  }
  if ( *v7 == 34 || v9 < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
    result = 1;
  }
  if ( !*v2 )
  {
    if ( v5 )
      *v2 = v5;
  }
  return result;
}


//----- (000000014021598C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_460(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  int *v7; // rax
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(v6 - 2), (unsigned __int16 *)&v9, 0xAu);
  v7 = *(int **)(a1 + 16);
  if ( !v7 )
  {
    v7 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v7);
  }
  if ( *v7 == 34 || v9 < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
    result = 1;
  }
  if ( !*v2 )
  {
    if ( v5 )
      *v2 = v5;
  }
  return result;
}


//----- (0000000140215A30) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_461(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  int *v7; // rax
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v2);
  }
  v5 = *v2;
  *v2 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(v6 - 2), (unsigned __int16 *)&v9, 0xAu);
  v7 = *(int **)(a1 + 16);
  if ( !v7 )
  {
    v7 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(v7);
  }
  if ( *v7 == 34 || v9 < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
    result = 1;
  }
  if ( !*v2 )
  {
    if ( v5 )
      *v2 = v5;
  }
  return result;
}


//----- (0000000140215AD4) ----------------------------------------------------
__int64            sub_140215AD4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v5; // cl
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char v15; // al
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  char v19; // al
  char *v20; // rax
  char v21; // cl

  v2 = *(_QWORD *)(a1 + 1128);
  if ( !v2 )
    goto LABEL_53;
  if ( sub_14022389C(v2) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
LABEL_6:
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v20 = *(char **)(a1 + 24);
            v21 = *v20;
            *(_BYTE *)(a1 + 65) = *v20;
            if ( !v21 )
            {
              ++*(_QWORD *)(a1 + 24);
LABEL_49:
              if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
              {
                if ( ++*(_DWORD *)(a1 + 1136) == 2 )
                  return *(unsigned int *)(a1 + 40);
                goto LABEL_6;
              }
LABEL_53:
              *errno_sr() = 22;
              sub_14024CF6C();
              return 0xFFFFFFFFLL;
            }
            ++*(_QWORD *)(a1 + 24);
            if ( *(int *)(a1 + 40) < 0 )
              goto LABEL_49;
            v5 = *(_BYTE *)(a1 + 65);
            v6 = *(unsigned int *)(a1 + 44);
            if ( (unsigned __int8)(v5 - 32) > 0x5Au )
            {
              v7 = 0;
            }
            else
            {
              _mm_lfence();
              v7 = byte_140284C60[v5 - 32] & 0xF;
            }
            v8 = byte_140284C60[(unsigned int)(v6 + 8 * v7 + v7)] >> 4;
            *(_DWORD *)(a1 + 44) = v8;
            if ( v8 == 8 )
              goto LABEL_53;
            if ( !v8 )
            {
              v15 = sub_140217CE0(a1);
              goto LABEL_46;
            }
            v9 = v8 - 1;
            if ( v9 )
              break;
            *(_DWORD *)(a1 + 52) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 56) = -1;
            *(_BYTE *)(a1 + 84) = 0;
          }
          v10 = v9 - 1;
          if ( v10 )
            break;
          v19 = *(_BYTE *)(a1 + 65);
          switch ( v19 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
        v11 = v10 - 1;
        if ( v11 )
          break;
        if ( *(_BYTE *)(a1 + 65) == 42 )
        {
          *(_QWORD *)(a1 + 32) += 8LL;
          v18 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
          *(_DWORD *)(a1 + 52) = v18;
          if ( v18 < 0 )
          {
            *(_DWORD *)(a1 + 48) |= 4u;
            *(_DWORD *)(a1 + 52) = -v18;
          }
          goto LABEL_33;
        }
        v16 = (_DWORD *)(a1 + 52);
LABEL_24:
        v15 = unknown_libname_450(a1, v16);
LABEL_46:
        if ( !v15 )
          return 0xFFFFFFFFLL;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              return 0xFFFFFFFFLL;
            v15 = sub_14021A044(a1, v6, v3);
          }
          else
          {
            v15 = sub_140218DFC(a1, v6, v3);
          }
          goto LABEL_46;
        }
        if ( *(_BYTE *)(a1 + 65) == 42 )
        {
          *(_QWORD *)(a1 + 32) += 8LL;
          v17 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
          if ( v17 < 0 )
            v17 = -1;
          *(_DWORD *)(a1 + 56) = v17;
LABEL_33:
          v15 = 1;
          goto LABEL_46;
        }
        v16 = (_DWORD *)(a1 + 56);
        goto LABEL_24;
      }
      *(_DWORD *)(a1 + 56) = 0;
    }
  }
  return 0xFFFFFFFFLL;
}

// 140215BCD: variable 'v3' is possibly undefined
// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (0000000140215CFC) ----------------------------------------------------
__int64            sub_140215CFC(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // eax
  _BYTE *v5; // rax
  int *v6; // r14
  int *v7; // rsi
  char v8; // cl
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  char v17; // al
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  int v20; // eax
  char v21; // al
  char *v22; // rax
  char v23; // cl

  v2 = *(_QWORD *)(a1 + 1128);
  if ( !v2 )
  {
LABEL_2:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( !sub_14022389C(v2) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v4 = ++*(_DWORD *)(a1 + 1144);
    if ( v4 == 3 || v4 == 2 && *(_DWORD *)(a1 + 1148) == 1 )
      return *(unsigned int *)(a1 + 40);
    v5 = *(_BYTE **)(a1 + 1152);
    v6 = (int *)(a1 + 52);
    v7 = (int *)(a1 + 56);
    *(_DWORD *)(a1 + 1148) = 0;
    *(_DWORD *)(a1 + 3560) = -1;
    *(_DWORD *)(a1 + 3564) = -1;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5);
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    LOBYTE(v5) = *v5;
    *(_BYTE *)(a1 + 65) = (_BYTE)v5;
    if ( (_BYTE)v5 )
    {
      do
      {
        ++*(_QWORD *)(a1 + 24);
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_59;
        v8 = *(_BYTE *)(a1 + 65);
        if ( (unsigned __int8)(v8 - 32) > 0x5Au )
        {
          v9 = 0;
        }
        else
        {
          _mm_lfence();
          v9 = byte_140284C60[v8 - 32] & 0xF;
        }
        *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v9 + v9] >> 4;
        if ( !unknown_libname_567(a1) )
          return 0xFFFFFFFFLL;
        v10 = *(_DWORD *)(a1 + 44);
        if ( v10 == 8 )
          goto LABEL_2;
        if ( !v10 )
        {
          v17 = sub_140217D50(a1);
          goto LABEL_56;
        }
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    if ( v16 != 1 )
                      return 0xFFFFFFFFLL;
                    v17 = sub_14021A2C8(a1);
                  }
                  else
                  {
                    v17 = sub_140218F70(a1);
                  }
                  goto LABEL_56;
                }
                v18 = a1;
                if ( *(_BYTE *)(a1 + 65) != 42 )
                {
                  v19 = (_DWORD *)(a1 + 56);
LABEL_29:
                  v17 = unknown_libname_451(v18, v19);
                  goto LABEL_56;
                }
                if ( !sub_140222840(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  if ( *v7 < 0 )
                    *v7 = -1;
                  goto LABEL_43;
                }
              }
              else
              {
                *v7 = 0;
              }
            }
            else
            {
              v18 = a1;
              if ( *(_BYTE *)(a1 + 65) != 42 )
              {
                v19 = (_DWORD *)(a1 + 52);
                goto LABEL_29;
              }
              if ( !sub_140222390(a1) )
                return 0xFFFFFFFFLL;
              if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
              {
                v20 = *v6;
                if ( *v6 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *v6 = -v20;
                }
LABEL_43:
                v17 = 1;
LABEL_56:
                if ( !v17 )
                  return 0xFFFFFFFFLL;
              }
            }
          }
          else
          {
            v21 = *(_BYTE *)(a1 + 65);
            switch ( v21 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *v6 = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          *v7 = -1;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 84) = 0;
        }
        v22 = *(char **)(a1 + 24);
        v23 = *v22;
        *(_BYTE *)(a1 + 65) = *v22;
      }
      while ( v23 );
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_59:
    if ( !unknown_libname_575(a1) )
      return 0xFFFFFFFFLL;
  }
}

// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (0000000140215FA4) ----------------------------------------------------
__int64            sub_140215FA4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // r8
  char v5; // cl
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // al
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  char v19; // al
  char *v20; // rax
  char v21; // cl

  v2 = *(_QWORD *)(a1 + 1128);
  if ( !v2 )
  {
LABEL_2:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( !sub_14022389C(v2) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  do
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      v20 = *(char **)(a1 + 24);
      v21 = *v20;
      *(_BYTE *)(a1 + 65) = *v20;
      if ( !v21 )
        break;
      ++*(_QWORD *)(a1 + 24);
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_51;
      v5 = *(_BYTE *)(a1 + 65);
      v6 = *(unsigned int *)(a1 + 44);
      if ( (unsigned __int8)(v5 - 32) > 0x5Au )
      {
        v7 = 0;
      }
      else
      {
        _mm_lfence();
        v7 = byte_140284C00[v5 - 32] & 0xF;
      }
      v8 = byte_140284C00[(unsigned int)(v6 + 8 * v7)] >> 4;
      *(_DWORD *)(a1 + 44) = v8;
      if ( v8 == 8 )
        goto LABEL_2;
      if ( !v8 )
      {
        v15 = sub_140217DE4(a1);
        goto LABEL_48;
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 != 1 )
                    return 0xFFFFFFFFLL;
                  v15 = sub_14021A564(a1, v6, v4);
                }
                else
                {
                  v15 = sub_1402190E4(a1, v6, v4);
                }
                goto LABEL_48;
              }
              if ( *(_BYTE *)(a1 + 65) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v17 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                if ( v17 < 0 )
                  v17 = -1;
                *(_DWORD *)(a1 + 56) = v17;
LABEL_35:
                v15 = 1;
                goto LABEL_48;
              }
              v16 = (_DWORD *)(a1 + 56);
              goto LABEL_26;
            }
            *(_DWORD *)(a1 + 56) = 0;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 65) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v18 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = v18;
              if ( v18 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -v18;
              }
              goto LABEL_35;
            }
            v16 = (_DWORD *)(a1 + 52);
LABEL_26:
            v15 = unknown_libname_452(a1, v16);
LABEL_48:
            if ( !v15 )
              return 0xFFFFFFFFLL;
          }
        }
        else
        {
          v19 = *(_BYTE *)(a1 + 65);
          switch ( v19 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 52) = 0;
        *(_DWORD *)(a1 + 48) = 0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_51:
    ++*(_DWORD *)(a1 + 1136);
  }
  while ( *(_DWORD *)(a1 + 1136) != 2 );
  return *(unsigned int *)(a1 + 40);
}

// 1402160B3: variable 'v4' is possibly undefined
// 140284C00: using guessed type unsigned __int8 byte_140284C00[96];

//----- (00000001402161BC) ----------------------------------------------------
__int64            sub_1402161BC(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // cl
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char v15; // al
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  char v19; // al
  char *v20; // rax
  char v21; // cl

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_52;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  while ( 2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      v20 = *(char **)(a1 + 24);
      v21 = *v20;
      *(_BYTE *)(a1 + 65) = *v20;
      if ( !v21 )
        break;
      ++*(_QWORD *)(a1 + 24);
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_48;
      v5 = *(_BYTE *)(a1 + 65);
      v6 = *(unsigned int *)(a1 + 44);
      if ( (unsigned __int8)(v5 - 32) > 0x5Au )
      {
        v7 = 0;
      }
      else
      {
        _mm_lfence();
        v7 = byte_140284C60[v5 - 32] & 0xF;
      }
      v8 = byte_140284C60[(unsigned int)(v6 + 8 * v7 + v7)] >> 4;
      *(_DWORD *)(a1 + 44) = v8;
      if ( v8 == 8 )
        goto LABEL_52;
      if ( !v8 )
      {
        v15 = sub_140217E54(a1);
        goto LABEL_45;
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 != 1 )
                    return 0xFFFFFFFFLL;
                  v15 = sub_14021A7E8(a1, v6, a3);
                }
                else
                {
                  v15 = sub_140219258(a1, v6, a3);
                }
                goto LABEL_45;
              }
              if ( *(_BYTE *)(a1 + 65) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v17 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                if ( v17 < 0 )
                  v17 = -1;
                *(_DWORD *)(a1 + 56) = v17;
LABEL_32:
                v15 = 1;
                goto LABEL_45;
              }
              v16 = (_DWORD *)(a1 + 56);
              goto LABEL_23;
            }
            *(_DWORD *)(a1 + 56) = 0;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 65) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v18 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = v18;
              if ( v18 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -v18;
              }
              goto LABEL_32;
            }
            v16 = (_DWORD *)(a1 + 52);
LABEL_23:
            v15 = unknown_libname_453(a1, v16);
LABEL_45:
            if ( !v15 )
              return 0xFFFFFFFFLL;
          }
        }
        else
        {
          v19 = *(_BYTE *)(a1 + 65);
          switch ( v19 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_48:
    if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    {
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
      continue;
    }
    break;
  }
LABEL_52:
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0xFFFFFFFFLL;
}

// 1402162A8: variable 'a3' is possibly undefined
// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (00000001402163D4) ----------------------------------------------------
__int64            sub_1402163D4(__int64 a1)
{
  int v3; // eax
  _BYTE *v4; // rax
  int *v5; // r14
  int *v6; // rsi
  char v7; // cl
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  char v20; // al
  char *v21; // rax
  char v22; // cl

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      v3 = ++*(_DWORD *)(a1 + 1144);
      if ( v3 == 3 || v3 == 2 && *(_DWORD *)(a1 + 1148) == 1 )
        return *(unsigned int *)(a1 + 40);
      v4 = *(_BYTE **)(a1 + 1152);
      v5 = (int *)(a1 + 52);
      v6 = (int *)(a1 + 56);
      *(_DWORD *)(a1 + 1148) = 0;
      *(_DWORD *)(a1 + 3560) = -1;
      *(_DWORD *)(a1 + 3564) = -1;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4);
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v4) = *v4;
      *(_BYTE *)(a1 + 65) = (_BYTE)v4;
      if ( (_BYTE)v4 )
      {
        do
        {
          ++*(_QWORD *)(a1 + 24);
          if ( *(int *)(a1 + 40) < 0 )
            goto LABEL_56;
          v7 = *(_BYTE *)(a1 + 65);
          if ( (unsigned __int8)(v7 - 32) > 0x5Au )
          {
            v8 = 0;
          }
          else
          {
            _mm_lfence();
            v8 = byte_140284C60[v7 - 32] & 0xF;
          }
          *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v8 + v8] >> 4;
          if ( !unknown_libname_568(a1) )
            return 0xFFFFFFFFLL;
          v9 = *(_DWORD *)(a1 + 44);
          if ( v9 == 8 )
            goto LABEL_58;
          if ( !v9 )
          {
            v16 = sub_140217EC8(a1);
            goto LABEL_53;
          }
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    v15 = v14 - 1;
                    if ( v15 )
                    {
                      if ( v15 != 1 )
                        return 0xFFFFFFFFLL;
                      v16 = sub_14021AA50(a1);
                    }
                    else
                    {
                      v16 = sub_1402193CC(a1);
                    }
                    goto LABEL_53;
                  }
                  v17 = a1;
                  if ( *(_BYTE *)(a1 + 65) != 42 )
                  {
                    v18 = (_DWORD *)(a1 + 56);
LABEL_26:
                    v16 = unknown_libname_454(v17, v18);
                    goto LABEL_53;
                  }
                  if ( !sub_140222958(a1) )
                    return 0xFFFFFFFFLL;
                  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                  {
                    if ( *v6 < 0 )
                      *v6 = -1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  *v6 = 0;
                }
              }
              else
              {
                v17 = a1;
                if ( *(_BYTE *)(a1 + 65) != 42 )
                {
                  v18 = (_DWORD *)(a1 + 52);
                  goto LABEL_26;
                }
                if ( !sub_1402224A8(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  v19 = *v5;
                  if ( *v5 < 0 )
                  {
                    *(_DWORD *)(a1 + 48) |= 4u;
                    *v5 = -v19;
                  }
LABEL_40:
                  v16 = 1;
LABEL_53:
                  if ( !v16 )
                    return 0xFFFFFFFFLL;
                }
              }
            }
            else
            {
              v20 = *(_BYTE *)(a1 + 65);
              switch ( v20 )
              {
                case ' ':
                  *(_DWORD *)(a1 + 48) |= 2u;
                  break;
                case '#':
                  *(_DWORD *)(a1 + 48) |= 0x20u;
                  break;
                case '+':
                  *(_DWORD *)(a1 + 48) |= 1u;
                  break;
                case '-':
                  *(_DWORD *)(a1 + 48) |= 4u;
                  break;
                case '0':
                  *(_DWORD *)(a1 + 48) |= 8u;
                  break;
              }
            }
          }
          else
          {
            *v5 = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *v6 = -1;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 84) = 0;
          }
          v21 = *(char **)(a1 + 24);
          v22 = *v21;
          *(_BYTE *)(a1 + 65) = *v21;
        }
        while ( v22 );
      }
      ++*(_QWORD *)(a1 + 24);
LABEL_56:
      if ( !unknown_libname_576(a1) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_58:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (000000014021666C) ----------------------------------------------------
__int64            sub_14021666C(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // cl
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // al
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  char v19; // al
  char *v20; // rax
  char v21; // cl

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      while ( 1 )
      {
        v20 = *(char **)(a1 + 24);
        v21 = *v20;
        *(_BYTE *)(a1 + 65) = *v20;
        if ( !v21 )
          break;
        ++*(_QWORD *)(a1 + 24);
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_48;
        v5 = *(_BYTE *)(a1 + 65);
        v6 = *(unsigned int *)(a1 + 44);
        if ( (unsigned __int8)(v5 - 32) > 0x5Au )
        {
          v7 = 0;
        }
        else
        {
          _mm_lfence();
          v7 = byte_140284C00[v5 - 32] & 0xF;
        }
        v8 = byte_140284C00[(unsigned int)(v6 + 8 * v7)] >> 4;
        *(_DWORD *)(a1 + 44) = v8;
        if ( v8 == 8 )
          goto LABEL_50;
        if ( !v8 )
        {
          v15 = sub_140217F60(a1);
          goto LABEL_45;
        }
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    if ( v14 != 1 )
                      return 0xFFFFFFFFLL;
                    v15 = sub_14021ACCC(a1, v6, a3);
                  }
                  else
                  {
                    v15 = sub_140219540(a1, v6, a3);
                  }
                  goto LABEL_45;
                }
                if ( *(_BYTE *)(a1 + 65) == 42 )
                {
                  *(_QWORD *)(a1 + 32) += 8LL;
                  v17 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                  if ( v17 < 0 )
                    v17 = -1;
                  *(_DWORD *)(a1 + 56) = v17;
LABEL_32:
                  v15 = 1;
                  goto LABEL_45;
                }
                v16 = (_DWORD *)(a1 + 56);
                goto LABEL_23;
              }
              *(_DWORD *)(a1 + 56) = 0;
            }
            else
            {
              if ( *(_BYTE *)(a1 + 65) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v18 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                *(_DWORD *)(a1 + 52) = v18;
                if ( v18 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *(_DWORD *)(a1 + 52) = -v18;
                }
                goto LABEL_32;
              }
              v16 = (_DWORD *)(a1 + 52);
LABEL_23:
              v15 = unknown_libname_455(a1, v16);
LABEL_45:
              if ( !v15 )
                return 0xFFFFFFFFLL;
            }
          }
          else
          {
            v19 = *(_BYTE *)(a1 + 65);
            switch ( v19 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 52) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 56) = -1;
          *(_BYTE *)(a1 + 84) = 0;
        }
      }
      ++*(_QWORD *)(a1 + 24);
LABEL_48:
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
    }
  }
LABEL_50:
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0xFFFFFFFFLL;
}

// 140216754: variable 'a3' is possibly undefined
// 140284C00: using guessed type unsigned __int8 byte_140284C00[96];

//----- (0000000140216878) ----------------------------------------------------
__int64            sub_140216878(__int64 a1, ...)
{
  unsigned __int16 v3; // cx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  char v12; // al
  _DWORD *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int16 v16; // ax
  unsigned __int16 v17; // cx
  __int16 v18; // cx

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_56;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  while ( 2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      v18 = **(_WORD **)(a1 + 24);
      *(_WORD *)(a1 + 66) = v18;
      if ( !v18 )
        break;
      *(_QWORD *)(a1 + 24) += 2LL;
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_52;
      v3 = *(_WORD *)(a1 + 66);
      if ( (unsigned __int16)(v3 - 32) > 0x5Au )
      {
        v4 = 0;
      }
      else
      {
        _mm_lfence();
        v4 = byte_140284C60[v3 - 32] & 0xF;
      }
      v5 = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v4 + v4] >> 4;
      *(_DWORD *)(a1 + 44) = v5;
      if ( v5 == 8 )
        goto LABEL_56;
      if ( !v5 )
      {
        v17 = *(_WORD *)(a1 + 66);
        *(_BYTE *)(a1 + 84) = 1;
        if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
          && (unsigned __int16)sub_140256B38(v17, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
        {
          *(_DWORD *)(a1 + 40) = -1;
        }
        else
        {
          ++*(_DWORD *)(a1 + 40);
        }
        goto LABEL_48;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v15 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = v15;
              if ( v15 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -v15;
              }
              goto LABEL_48;
            }
            v13 = (_DWORD *)(a1 + 52);
            goto LABEL_23;
          }
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 != 1 )
                  return 0xFFFFFFFFLL;
                v12 = sub_14021AF34(a1);
              }
              else
              {
                v12 = sub_1402196B4(a1);
              }
              goto LABEL_49;
            }
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v14 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              if ( v14 < 0 )
                v14 = -1;
              *(_DWORD *)(a1 + 56) = v14;
LABEL_48:
              v12 = 1;
              goto LABEL_49;
            }
            v13 = (_DWORD *)(a1 + 56);
LABEL_23:
            v12 = unknown_libname_456(a1, v13);
LABEL_49:
            if ( !v12 )
              return 0xFFFFFFFFLL;
          }
          else
          {
            *(_DWORD *)(a1 + 56) = 0;
          }
        }
        else
        {
          v16 = *(_WORD *)(a1 + 66);
          switch ( v16 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
    if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    {
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
      continue;
    }
    break;
  }
LABEL_56:
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0xFFFFFFFFLL;
}

// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (0000000140216AF0) ----------------------------------------------------
__int64            sub_140216AF0(__int64 a1)
{
  int v3; // eax
  _WORD *v4; // rax
  int *v5; // r14
  int *v6; // rsi
  unsigned __int16 v7; // cx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  __int16 v20; // ax
  __int16 v21; // cx

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      v3 = ++*(_DWORD *)(a1 + 1144);
      if ( v3 == 3 || v3 == 2 && *(_DWORD *)(a1 + 1148) == 1 )
        return *(unsigned int *)(a1 + 40);
      v4 = *(_WORD **)(a1 + 1152);
      v5 = (int *)(a1 + 52);
      v6 = (int *)(a1 + 56);
      *(_DWORD *)(a1 + 1148) = 0;
      *(_DWORD *)(a1 + 3560) = -1;
      *(_DWORD *)(a1 + 3564) = -1;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4);
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      LOWORD(v4) = *v4;
      *(_WORD *)(a1 + 66) = (_WORD)v4;
      if ( (_WORD)v4 )
      {
        do
        {
          *(_QWORD *)(a1 + 24) += 2LL;
          if ( *(int *)(a1 + 40) < 0 )
            goto LABEL_56;
          v7 = *(_WORD *)(a1 + 66);
          if ( (unsigned __int16)(v7 - 32) > 0x5Au )
          {
            v8 = 0;
          }
          else
          {
            _mm_lfence();
            v8 = byte_140284C60[v7 - 32] & 0xF;
          }
          *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v8 + v8] >> 4;
          if ( !unknown_libname_569(a1) )
            return 0xFFFFFFFFLL;
          v9 = *(_DWORD *)(a1 + 44);
          if ( v9 == 8 )
            goto LABEL_58;
          if ( !v9 )
          {
            v16 = sub_14021802C(a1);
            goto LABEL_53;
          }
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    v15 = v14 - 1;
                    if ( v15 )
                    {
                      if ( v15 != 1 )
                        return 0xFFFFFFFFLL;
                      v16 = sub_14021B214(a1);
                    }
                    else
                    {
                      v16 = sub_14021984C(a1);
                    }
                    goto LABEL_53;
                  }
                  v17 = a1;
                  if ( *(_WORD *)(a1 + 66) != 42 )
                  {
                    v18 = (_DWORD *)(a1 + 56);
LABEL_26:
                    v16 = unknown_libname_457(v17, v18);
                    goto LABEL_53;
                  }
                  if ( !sub_140222A70(a1) )
                    return 0xFFFFFFFFLL;
                  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                  {
                    if ( *v6 < 0 )
                      *v6 = -1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  *v6 = 0;
                }
              }
              else
              {
                v17 = a1;
                if ( *(_WORD *)(a1 + 66) != 42 )
                {
                  v18 = (_DWORD *)(a1 + 52);
                  goto LABEL_26;
                }
                if ( !sub_1402225C0(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  v19 = *v5;
                  if ( *v5 < 0 )
                  {
                    *(_DWORD *)(a1 + 48) |= 4u;
                    *v5 = -v19;
                  }
LABEL_40:
                  v16 = 1;
LABEL_53:
                  if ( !v16 )
                    return 0xFFFFFFFFLL;
                }
              }
            }
            else
            {
              v20 = *(_WORD *)(a1 + 66);
              switch ( v20 )
              {
                case ' ':
                  *(_DWORD *)(a1 + 48) |= 2u;
                  break;
                case '#':
                  *(_DWORD *)(a1 + 48) |= 0x20u;
                  break;
                case '+':
                  *(_DWORD *)(a1 + 48) |= 1u;
                  break;
                case '-':
                  *(_DWORD *)(a1 + 48) |= 4u;
                  break;
                case '0':
                  *(_DWORD *)(a1 + 48) |= 8u;
                  break;
              }
            }
          }
          else
          {
            *v5 = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *v6 = -1;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 84) = 0;
          }
          v21 = **(_WORD **)(a1 + 24);
          *(_WORD *)(a1 + 66) = v21;
        }
        while ( v21 );
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_56:
      if ( !unknown_libname_577(a1) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_58:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (0000000140216DA4) ----------------------------------------------------
__int64            sub_140216DA4(__int64 a1, ...)
{
  unsigned __int16 v3; // cx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // al
  _DWORD *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int16 v16; // ax
  unsigned __int16 v17; // cx
  __int16 v18; // cx

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      while ( 1 )
      {
        v18 = **(_WORD **)(a1 + 24);
        *(_WORD *)(a1 + 66) = v18;
        if ( !v18 )
          break;
        *(_QWORD *)(a1 + 24) += 2LL;
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_52;
        v3 = *(_WORD *)(a1 + 66);
        if ( (unsigned __int16)(v3 - 32) > 0x5Au )
        {
          v4 = 0;
        }
        else
        {
          _mm_lfence();
          v4 = byte_140284C00[v3 - 32] & 0xF;
        }
        v5 = byte_140284C00[*(_DWORD *)(a1 + 44) + 8 * v4] >> 4;
        *(_DWORD *)(a1 + 44) = v5;
        if ( v5 == 8 )
          goto LABEL_54;
        if ( !v5 )
        {
          v17 = *(_WORD *)(a1 + 66);
          *(_BYTE *)(a1 + 84) = 1;
          if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
            && (unsigned __int16)sub_140256B38(v17, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
          {
            *(_DWORD *)(a1 + 40) = -1;
          }
          else
          {
            ++*(_DWORD *)(a1 + 40);
          }
          goto LABEL_48;
        }
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  v11 = v10 - 1;
                  if ( v11 )
                  {
                    if ( v11 != 1 )
                      return 0xFFFFFFFFLL;
                    v12 = sub_14021B508(a1);
                  }
                  else
                  {
                    v12 = sub_1402199E4(a1);
                  }
                  goto LABEL_49;
                }
                if ( *(_WORD *)(a1 + 66) == 42 )
                {
                  *(_QWORD *)(a1 + 32) += 8LL;
                  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                  if ( v14 < 0 )
                    v14 = -1;
                  *(_DWORD *)(a1 + 56) = v14;
LABEL_48:
                  v12 = 1;
                  goto LABEL_49;
                }
                v13 = (_DWORD *)(a1 + 56);
                goto LABEL_23;
              }
              *(_DWORD *)(a1 + 56) = 0;
            }
            else
            {
              if ( *(_WORD *)(a1 + 66) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v15 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                *(_DWORD *)(a1 + 52) = v15;
                if ( v15 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *(_DWORD *)(a1 + 52) = -v15;
                }
                goto LABEL_48;
              }
              v13 = (_DWORD *)(a1 + 52);
LABEL_23:
              v12 = unknown_libname_458(a1, v13);
LABEL_49:
              if ( !v12 )
                return 0xFFFFFFFFLL;
            }
          }
          else
          {
            v16 = *(_WORD *)(a1 + 66);
            switch ( v16 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *(_QWORD *)(a1 + 48) = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 56) = -1;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 84) = 0;
        }
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
    }
  }
LABEL_54:
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0xFFFFFFFFLL;
}

// 140284C00: using guessed type unsigned __int8 byte_140284C00[96];

//----- (0000000140217010) ----------------------------------------------------
__int64            sub_140217010(__int64 a1, ...)
{
  unsigned __int16 v3; // cx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  char v12; // al
  _DWORD *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int16 v16; // ax
  __int16 v17; // dx
  __int64 v18; // rcx
  __int16 v19; // cx

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_56;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  while ( 2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      v19 = **(_WORD **)(a1 + 24);
      *(_WORD *)(a1 + 66) = v19;
      if ( !v19 )
        break;
      *(_QWORD *)(a1 + 24) += 2LL;
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_52;
      v3 = *(_WORD *)(a1 + 66);
      if ( (unsigned __int16)(v3 - 32) > 0x5Au )
      {
        v4 = 0;
      }
      else
      {
        _mm_lfence();
        v4 = byte_140284C60[v3 - 32] & 0xF;
      }
      v5 = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v4 + v4] >> 4;
      *(_DWORD *)(a1 + 44) = v5;
      if ( v5 == 8 )
        goto LABEL_56;
      if ( !v5 )
      {
        v17 = *(_WORD *)(a1 + 66);
        *(_BYTE *)(a1 + 84) = 1;
        v18 = *(_QWORD *)(a1 + 1128);
        if ( *(_QWORD *)(v18 + 16) == *(_QWORD *)(v18 + 8) )
        {
          if ( *(_BYTE *)(v18 + 24) )
            ++*(_DWORD *)(a1 + 40);
          else
            *(_DWORD *)(a1 + 40) = -1;
        }
        else
        {
          ++*(_DWORD *)(a1 + 40);
          ++*(_QWORD *)(*(_QWORD *)(a1 + 1128) + 16LL);
          ***(_WORD ***)(a1 + 1128) = v17;
          **(_QWORD **)(a1 + 1128) += 2LL;
        }
LABEL_48:
        v12 = 1;
        goto LABEL_49;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v15 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = v15;
              if ( v15 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -v15;
              }
              goto LABEL_48;
            }
            v13 = (_DWORD *)(a1 + 52);
            goto LABEL_23;
          }
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 != 1 )
                  return 0xFFFFFFFFLL;
                v12 = sub_14021B7E8(a1);
              }
              else
              {
                v12 = sub_140219B7C(a1);
              }
              goto LABEL_49;
            }
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v14 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              if ( v14 < 0 )
                v14 = -1;
              *(_DWORD *)(a1 + 56) = v14;
              goto LABEL_48;
            }
            v13 = (_DWORD *)(a1 + 56);
LABEL_23:
            v12 = unknown_libname_459(a1, v13);
LABEL_49:
            if ( !v12 )
              return 0xFFFFFFFFLL;
          }
          else
          {
            *(_DWORD *)(a1 + 56) = 0;
          }
        }
        else
        {
          v16 = *(_WORD *)(a1 + 66);
          switch ( v16 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
    if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    {
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
      continue;
    }
    break;
  }
LABEL_56:
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0xFFFFFFFFLL;
}

// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (0000000140217298) ----------------------------------------------------
__int64            sub_140217298(__int64 a1)
{
  int v3; // eax
  _WORD *v4; // rax
  int *v5; // r14
  int *v6; // rsi
  unsigned __int16 v7; // cx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  __int16 v20; // ax
  __int16 v21; // cx

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      v3 = ++*(_DWORD *)(a1 + 1144);
      if ( v3 == 3 || v3 == 2 && *(_DWORD *)(a1 + 1148) == 1 )
        return *(unsigned int *)(a1 + 40);
      v4 = *(_WORD **)(a1 + 1152);
      v5 = (int *)(a1 + 52);
      v6 = (int *)(a1 + 56);
      *(_DWORD *)(a1 + 1148) = 0;
      *(_DWORD *)(a1 + 3560) = -1;
      *(_DWORD *)(a1 + 3564) = -1;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4);
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      LOWORD(v4) = *v4;
      *(_WORD *)(a1 + 66) = (_WORD)v4;
      if ( (_WORD)v4 )
      {
        do
        {
          *(_QWORD *)(a1 + 24) += 2LL;
          if ( *(int *)(a1 + 40) < 0 )
            goto LABEL_56;
          v7 = *(_WORD *)(a1 + 66);
          if ( (unsigned __int16)(v7 - 32) > 0x5Au )
          {
            v8 = 0;
          }
          else
          {
            _mm_lfence();
            v8 = byte_140284C60[v7 - 32] & 0xF;
          }
          *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v8 + v8] >> 4;
          if ( !unknown_libname_570(a1) )
            return 0xFFFFFFFFLL;
          v9 = *(_DWORD *)(a1 + 44);
          if ( v9 == 8 )
            goto LABEL_58;
          if ( !v9 )
          {
            v16 = sub_140218154(a1);
            goto LABEL_53;
          }
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    v15 = v14 - 1;
                    if ( v15 )
                    {
                      if ( v15 != 1 )
                        return 0xFFFFFFFFLL;
                      v16 = sub_14021BAB4(a1);
                    }
                    else
                    {
                      v16 = sub_140219D14(a1);
                    }
                    goto LABEL_53;
                  }
                  v17 = a1;
                  if ( *(_WORD *)(a1 + 66) != 42 )
                  {
                    v18 = (_DWORD *)(a1 + 56);
LABEL_26:
                    v16 = unknown_libname_460(v17, v18);
                    goto LABEL_53;
                  }
                  if ( !sub_140222B88(a1) )
                    return 0xFFFFFFFFLL;
                  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                  {
                    if ( *v6 < 0 )
                      *v6 = -1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  *v6 = 0;
                }
              }
              else
              {
                v17 = a1;
                if ( *(_WORD *)(a1 + 66) != 42 )
                {
                  v18 = (_DWORD *)(a1 + 52);
                  goto LABEL_26;
                }
                if ( !sub_1402226D8(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  v19 = *v5;
                  if ( *v5 < 0 )
                  {
                    *(_DWORD *)(a1 + 48) |= 4u;
                    *v5 = -v19;
                  }
LABEL_40:
                  v16 = 1;
LABEL_53:
                  if ( !v16 )
                    return 0xFFFFFFFFLL;
                }
              }
            }
            else
            {
              v20 = *(_WORD *)(a1 + 66);
              switch ( v20 )
              {
                case ' ':
                  *(_DWORD *)(a1 + 48) |= 2u;
                  break;
                case '#':
                  *(_DWORD *)(a1 + 48) |= 0x20u;
                  break;
                case '+':
                  *(_DWORD *)(a1 + 48) |= 1u;
                  break;
                case '-':
                  *(_DWORD *)(a1 + 48) |= 4u;
                  break;
                case '0':
                  *(_DWORD *)(a1 + 48) |= 8u;
                  break;
              }
            }
          }
          else
          {
            *v5 = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *v6 = -1;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 84) = 0;
          }
          v21 = **(_WORD **)(a1 + 24);
          *(_WORD *)(a1 + 66) = v21;
        }
        while ( v21 );
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_56:
      if ( !unknown_libname_578(a1) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_58:
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

// 140284C60: using guessed type unsigned __int8 byte_140284C60[96];

//----- (000000014021754C) ----------------------------------------------------
__int64            sub_14021754C(__int64 a1, ...)
{
  unsigned __int16 v3; // cx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // al
  _DWORD *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int16 v16; // ax
  __int16 v17; // dx
  __int64 v18; // rcx
  __int16 v19; // cx

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      while ( 1 )
      {
        v19 = **(_WORD **)(a1 + 24);
        *(_WORD *)(a1 + 66) = v19;
        if ( !v19 )
          break;
        *(_QWORD *)(a1 + 24) += 2LL;
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_52;
        v3 = *(_WORD *)(a1 + 66);
        if ( (unsigned __int16)(v3 - 32) > 0x5Au )
        {
          v4 = 0;
        }
        else
        {
          _mm_lfence();
          v4 = byte_140284C00[v3 - 32] & 0xF;
        }
        v5 = byte_140284C00[*(_DWORD *)(a1 + 44) + 8 * v4] >> 4;
        *(_DWORD *)(a1 + 44) = v5;
        if ( v5 == 8 )
          goto LABEL_54;
        if ( !v5 )
        {
          v17 = *(_WORD *)(a1 + 66);
          *(_BYTE *)(a1 + 84) = 1;
          v18 = *(_QWORD *)(a1 + 1128);
          if ( *(_QWORD *)(v18 + 16) == *(_QWORD *)(v18 + 8) )
          {
            if ( *(_BYTE *)(v18 + 24) )
              ++*(_DWORD *)(a1 + 40);
            else
              *(_DWORD *)(a1 + 40) = -1;
          }
          else
          {
            ++*(_DWORD *)(a1 + 40);
            ++*(_QWORD *)(*(_QWORD *)(a1 + 1128) + 16LL);
            ***(_WORD ***)(a1 + 1128) = v17;
            **(_QWORD **)(a1 + 1128) += 2LL;
          }
LABEL_48:
          v12 = 1;
          goto LABEL_49;
        }
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( !v8 )
            {
              if ( *(_WORD *)(a1 + 66) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v15 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                *(_DWORD *)(a1 + 52) = v15;
                if ( v15 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *(_DWORD *)(a1 + 52) = -v15;
                }
                goto LABEL_48;
              }
              v13 = (_DWORD *)(a1 + 52);
              goto LABEL_23;
            }
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  if ( v11 != 1 )
                    return 0xFFFFFFFFLL;
                  v12 = sub_14021BD94(a1);
                }
                else
                {
                  v12 = sub_140219EAC(a1);
                }
                goto LABEL_49;
              }
              if ( *(_WORD *)(a1 + 66) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v14 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                if ( v14 < 0 )
                  v14 = -1;
                *(_DWORD *)(a1 + 56) = v14;
                goto LABEL_48;
              }
              v13 = (_DWORD *)(a1 + 56);
LABEL_23:
              v12 = unknown_libname_461(a1, v13);
LABEL_49:
              if ( !v12 )
                return 0xFFFFFFFFLL;
            }
            else
            {
              *(_DWORD *)(a1 + 56) = 0;
            }
          }
          else
          {
            v16 = *(_WORD *)(a1 + 66);
            switch ( v16 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *(_QWORD *)(a1 + 48) = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 56) = -1;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 84) = 0;
        }
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
    }
  }
LABEL_54:
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0xFFFFFFFFLL;
}

// 140284C00: using guessed type unsigned __int8 byte_140284C00[96];

//----- (0000000140217CE0) ----------------------------------------------------
char            sub_140217CE0(__int64 a1)
{
  if ( unknown_libname_496(a1) )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (0000000140217D50) ----------------------------------------------------
char            sub_140217D50(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 1144);
  if ( v1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( v1 == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  if ( unknown_libname_497(a1) )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (0000000140217DE4) ----------------------------------------------------
char            sub_140217DE4(__int64 a1)
{
  if ( unknown_libname_498(a1) )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (0000000140217E54) ----------------------------------------------------
char            sub_140217E54(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // r8

  if ( sub_140218844(a1) )
  {
    v2 = *(_QWORD *)(a1 + 1128);
    v3 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v2 + 16) == *(_QWORD *)(v2 + 8) )
    {
      if ( *(_BYTE *)(v2 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v2 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v3;
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (0000000140217EC8) ----------------------------------------------------
char            sub_140217EC8(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  char v4; // r8

  v1 = *(_DWORD *)(a1 + 1144);
  if ( v1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( v1 == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  if ( sub_1402188EC(a1) )
  {
    v3 = *(_QWORD *)(a1 + 1128);
    v4 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
    {
      if ( *(_BYTE *)(v3 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v3 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v4;
    }
    return 1;
  }
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (0000000140217F60) ----------------------------------------------------
char            sub_140217F60(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // r8

  if ( sub_140218994(a1) )
  {
    v2 = *(_QWORD *)(a1 + 1128);
    v3 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v2 + 16) == *(_QWORD *)(v2 + 8) )
    {
      if ( *(_BYTE *)(v2 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v2 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v3;
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    sub_14024CF6C();
    return 0;
  }
}


//----- (0000000140217FD4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_486(__int64 a1)
{
  unsigned __int16 v2; // cx

  *(_BYTE *)(a1 + 84) = 1;
  v2 = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v2, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}


//----- (000000014021802C) ----------------------------------------------------
char            sub_14021802C(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax
  unsigned __int16 v4; // cx

  v1 = *(_DWORD *)(a1 + 1144);
  if ( v1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( v1 == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v3 = *(_QWORD *)(a1 + 1128);
  v4 = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(v3 + 20) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v4, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}


//----- (00000001402180A8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_487(__int64 a1)
{
  unsigned __int16 v2; // cx

  *(_BYTE *)(a1 + 84) = 1;
  v2 = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v2, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}


//----- (0000000140218100) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_488(__int64 a1)
{
  __int16 v1; // r9
  __int64 v3; // rcx

  v1 = *(_WORD *)(a1 + 66);
  *(_BYTE *)(a1 + 84) = 1;
  v3 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
  {
    if ( *(_BYTE *)(v3 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(v3 + 16);
    ***(_WORD ***)(a1 + 1128) = v1;
    **(_QWORD **)(a1 + 1128) += 2LL;
  }
  return 1;
}


//----- (0000000140218154) ----------------------------------------------------
char            sub_140218154(__int64 a1)
{
  int v1; // eax
  __int16 v3; // r9
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 1144);
  if ( v1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
    goto LABEL_6;
  }
  if ( v1 != 2 || *(_DWORD *)(a1 + 1148) )
  {
LABEL_6:
    v3 = *(_WORD *)(a1 + 66);
    *(_BYTE *)(a1 + 84) = 1;
    v4 = *(_QWORD *)(a1 + 1128);
    if ( *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    {
      if ( *(_BYTE *)(v4 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v4 + 16);
      ***(_WORD ***)(a1 + 1128) = v3;
      **(_QWORD **)(a1 + 1128) += 2LL;
    }
  }
  return 1;
}


//----- (0000000140218220) ----------------------------------------------------
char            sub_140218220(__int64 a1)
{
  char result; // al

  result = unknown_libname_496(a1);
  if ( result )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  return result;
}


//----- (000000014021827C) ----------------------------------------------------
char            sub_14021827C(__int64 a1)
{
  char result; // al

  result = unknown_libname_497(a1);
  if ( result )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  return result;
}


//----- (00000001402182D8) ----------------------------------------------------
char            sub_1402182D8(__int64 a1)
{
  char result; // al

  result = unknown_libname_498(a1);
  if ( result )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  return result;
}


//----- (0000000140218334) ----------------------------------------------------
char            sub_140218334(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  char v4; // r8

  result = sub_140218844(a1);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 1128);
    v4 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
    {
      if ( *(_BYTE *)(v3 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v3 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v4;
    }
    return 1;
  }
  return result;
}


//----- (0000000140218394) ----------------------------------------------------
char            sub_140218394(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  char v4; // r8

  result = sub_1402188EC(a1);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 1128);
    v4 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
    {
      if ( *(_BYTE *)(v3 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v3 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v4;
    }
    return 1;
  }
  return result;
}


//----- (00000001402183F4) ----------------------------------------------------
char            sub_1402183F4(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  char v4; // r8

  result = sub_140218994(a1);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 1128);
    v4 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
    {
      if ( *(_BYTE *)(v3 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v3 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v4;
    }
    return 1;
  }
  return result;
}


//----- (0000000140218454) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_490(__int64 a1)
{
  unsigned __int16 v2; // cx

  *(_BYTE *)(a1 + 84) = 1;
  v2 = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v2, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}


//----- (00000001402184AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_491(__int64 a1)
{
  unsigned __int16 v2; // cx

  *(_BYTE *)(a1 + 84) = 1;
  v2 = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v2, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}


//----- (0000000140218504) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_492(__int64 a1)
{
  unsigned __int16 v2; // cx

  *(_BYTE *)(a1 + 84) = 1;
  v2 = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v2, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}


//----- (000000014021855C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_493(__int64 a1)
{
  __int16 v1; // r9
  __int64 v3; // rcx

  v1 = *(_WORD *)(a1 + 66);
  *(_BYTE *)(a1 + 84) = 1;
  v3 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
  {
    if ( *(_BYTE *)(v3 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(v3 + 16);
    ***(_WORD ***)(a1 + 1128) = v1;
    **(_QWORD **)(a1 + 1128) += 2LL;
  }
  return 1;
}


//----- (0000000140218658) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_496(__int64 a1)
{
  __int64 v1; // r8
  int v3; // ecx
  char *v4; // rax
  char v5; // cl

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned int)unknown_libname_207(v1, *(_QWORD *)(a1 + 1128)) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  v4 = *(char **)(a1 + 24);
  v5 = *v4;
  *(_BYTE *)(a1 + 65) = *v4;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4 + 1);
  if ( v5 )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (00000001402186FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_497(__int64 a1)
{
  __int64 v1; // r8
  int v3; // ecx
  char *v4; // rax
  char v5; // cl

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned int)unknown_libname_207(v1, *(_QWORD *)(a1 + 1128)) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  v4 = *(char **)(a1 + 24);
  v5 = *v4;
  *(_BYTE *)(a1 + 65) = *v4;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4 + 1);
  if ( v5 )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (00000001402187A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_498(__int64 a1)
{
  __int64 v1; // r8
  int v3; // ecx
  char *v4; // rax
  char v5; // cl

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned int)unknown_libname_207(v1, *(_QWORD *)(a1 + 1128)) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  v4 = *(char **)(a1 + 24);
  v5 = *v4;
  *(_BYTE *)(a1 + 65) = *v4;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v4 + 1);
  if ( v5 )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (0000000140218844) ----------------------------------------------------
char            sub_140218844(__int64 a1)
{
  __int64 v1; // r9
  int v3; // ecx
  __int64 v4; // rcx
  char *v5; // rax
  char v6; // cl

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
  v4 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
  {
    if ( *(_BYTE *)(v4 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(v4 + 16);
    *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v1;
  }
  v5 = *(char **)(a1 + 24);
  v6 = *v5;
  *(_BYTE *)(a1 + 65) = *v5;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
  if ( v6 )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (00000001402188EC) ----------------------------------------------------
char            sub_1402188EC(__int64 a1)
{
  __int64 v1; // r9
  int v3; // ecx
  __int64 v4; // rcx
  char *v5; // rax
  char v6; // cl

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
  v4 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
  {
    if ( *(_BYTE *)(v4 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(v4 + 16);
    *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v1;
  }
  v5 = *(char **)(a1 + 24);
  v6 = *v5;
  *(_BYTE *)(a1 + 65) = *v5;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
  if ( v6 )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (0000000140218994) ----------------------------------------------------
char            sub_140218994(__int64 a1)
{
  __int64 v1; // r9
  int v3; // ecx
  __int64 v4; // rcx
  char *v5; // rax
  char v6; // cl

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
  v4 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
  {
    if ( *(_BYTE *)(v4 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(v4 + 16);
    *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v1;
  }
  v5 = *(char **)(a1 + 24);
  v6 = *v5;
  *(_BYTE *)(a1 + 65) = *v5;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
  if ( v6 )
    return 1;
  *errno_sr() = 22;
  sub_14024CF6C();
  return 0;
}


//----- (0000000140218BB4) ----------------------------------------------------
char            sub_140218BB4(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_451(a1, (_DWORD *)(a1 + 56));
  result = sub_140222840(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}


//----- (0000000140218C50) ----------------------------------------------------
char            sub_140218C50(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_454(a1, (_DWORD *)(a1 + 56));
  result = sub_140222958(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}


//----- (0000000140218CEC) ----------------------------------------------------
char            sub_140218CEC(__int64 a1)
{
  char result; // al

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_457(a1, (_DWORD *)(a1 + 56));
  result = sub_140222A70(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}


//----- (0000000140218D88) ----------------------------------------------------
char            sub_140218D88(__int64 a1)
{
  char result; // al

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_460(a1, (_DWORD *)(a1 + 56));
  result = sub_140222B88(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}


//----- (0000000140218DFC) ----------------------------------------------------
char            sub_140218DFC(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rax
  char *v8; // rdx
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rdx

  v3 = *(_BYTE *)(a1 + 65);
  if ( v3 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A044(a1, a2, a3);
    }
    return 1;
  }
  if ( v3 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v3 )
    {
      case 'I':
        v8 = *(char **)(a1 + 24);
        v9 = *v8;
        if ( *v8 == 51 && v8[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else if ( v9 == 54 && v8[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else
        {
          v10 = v9 - 88;
          if ( v10 <= 0x20u )
          {
            v11 = 0x120821001LL;
            if ( _bittest64(&v11, (char)v10) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v7 = *(_BYTE **)(a1 + 24);
        if ( *v7 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v7 + 1);
          v6 = 1;
        }
        else
        {
          v6 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v5 = *(_BYTE **)(a1 + 24);
        if ( *v5 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v6 = 4;
        }
        else
        {
          v6 = 3;
        }
        break;
      default:
        switch ( v3 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v6;
  }
  return 1;
}


//----- (0000000140218F70) ----------------------------------------------------
char            sub_140218F70(__int64 a1)
{
  char v1; // al
  _BYTE *v3; // rax
  int v4; // eax
  _BYTE *v5; // rax
  char *v6; // rdx
  char v7; // al
  unsigned __int8 v8; // al
  __int64 v9; // rdx

  v1 = *(_BYTE *)(a1 + 65);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A2C8(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(char **)(a1 + 24);
        v7 = *v6;
        if ( *v6 == 51 && v6[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, (char)v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_BYTE **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_BYTE **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (00000001402190E4) ----------------------------------------------------
char            sub_1402190E4(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rax
  char *v8; // rdx
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rdx

  v3 = *(_BYTE *)(a1 + 65);
  if ( v3 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A564(a1, a2, a3);
    }
    return 1;
  }
  if ( v3 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v3 )
    {
      case 'I':
        v8 = *(char **)(a1 + 24);
        v9 = *v8;
        if ( *v8 == 51 && v8[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else if ( v9 == 54 && v8[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else
        {
          v10 = v9 - 88;
          if ( v10 <= 0x20u )
          {
            v11 = 0x120821001LL;
            if ( _bittest64(&v11, (char)v10) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v7 = *(_BYTE **)(a1 + 24);
        if ( *v7 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v7 + 1);
          v6 = 1;
        }
        else
        {
          v6 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v5 = *(_BYTE **)(a1 + 24);
        if ( *v5 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v6 = 4;
        }
        else
        {
          v6 = 3;
        }
        break;
      default:
        switch ( v3 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v6;
  }
  return 1;
}


//----- (0000000140219258) ----------------------------------------------------
char            sub_140219258(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rax
  char *v8; // rdx
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rdx

  v3 = *(_BYTE *)(a1 + 65);
  if ( v3 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A7E8(a1, a2, a3);
    }
    return 1;
  }
  if ( v3 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v3 )
    {
      case 'I':
        v8 = *(char **)(a1 + 24);
        v9 = *v8;
        if ( *v8 == 51 && v8[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else if ( v9 == 54 && v8[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else
        {
          v10 = v9 - 88;
          if ( v10 <= 0x20u )
          {
            v11 = 0x120821001LL;
            if ( _bittest64(&v11, (char)v10) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v7 = *(_BYTE **)(a1 + 24);
        if ( *v7 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v7 + 1);
          v6 = 1;
        }
        else
        {
          v6 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v5 = *(_BYTE **)(a1 + 24);
        if ( *v5 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v6 = 4;
        }
        else
        {
          v6 = 3;
        }
        break;
      default:
        switch ( v3 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v6;
  }
  return 1;
}


//----- (00000001402193CC) ----------------------------------------------------
char            sub_1402193CC(__int64 a1)
{
  char v1; // al
  _BYTE *v3; // rax
  int v4; // eax
  _BYTE *v5; // rax
  char *v6; // rdx
  char v7; // al
  unsigned __int8 v8; // al
  __int64 v9; // rdx

  v1 = *(_BYTE *)(a1 + 65);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021AA50(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(char **)(a1 + 24);
        v7 = *v6;
        if ( *v6 == 51 && v6[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, (char)v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_BYTE **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_BYTE **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (0000000140219540) ----------------------------------------------------
char            sub_140219540(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  _BYTE *v5; // rax
  int v6; // eax
  _BYTE *v7; // rax
  char *v8; // rdx
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rdx

  v3 = *(_BYTE *)(a1 + 65);
  if ( v3 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021ACCC(a1, a2, a3);
    }
    return 1;
  }
  if ( v3 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v3 )
    {
      case 'I':
        v8 = *(char **)(a1 + 24);
        v9 = *v8;
        if ( *v8 == 51 && v8[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else if ( v9 == 54 && v8[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v8 + 2);
        }
        else
        {
          v10 = v9 - 88;
          if ( v10 <= 0x20u )
          {
            v11 = 0x120821001LL;
            if ( _bittest64(&v11, (char)v10) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v7 = *(_BYTE **)(a1 + 24);
        if ( *v7 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v7 + 1);
          v6 = 1;
        }
        else
        {
          v6 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v5 = *(_BYTE **)(a1 + 24);
        if ( *v5 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v6 = 4;
        }
        else
        {
          v6 = 3;
        }
        break;
      default:
        switch ( v3 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v6;
  }
  return 1;
}


//----- (00000001402196B4) ----------------------------------------------------
char            sub_1402196B4(__int64 a1)
{
  __int16 v1; // ax
  _WORD *v3; // rax
  int v4; // eax
  _WORD *v5; // rax
  __int16 *v6; // rdx
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int64 v9; // rdx

  v1 = *(_WORD *)(a1 + 66);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021AF34(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(__int16 **)(a1 + 24);
        v7 = *v6;
        if ( *(_DWORD *)v6 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_WORD **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_WORD **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (000000014021984C) ----------------------------------------------------
char            sub_14021984C(__int64 a1)
{
  __int16 v1; // ax
  _WORD *v3; // rax
  int v4; // eax
  _WORD *v5; // rax
  __int16 *v6; // rdx
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int64 v9; // rdx

  v1 = *(_WORD *)(a1 + 66);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021B214(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(__int16 **)(a1 + 24);
        v7 = *v6;
        if ( *(_DWORD *)v6 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_WORD **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_WORD **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (00000001402199E4) ----------------------------------------------------
char            sub_1402199E4(__int64 a1)
{
  __int16 v1; // ax
  _WORD *v3; // rax
  int v4; // eax
  _WORD *v5; // rax
  __int16 *v6; // rdx
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int64 v9; // rdx

  v1 = *(_WORD *)(a1 + 66);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021B508(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(__int16 **)(a1 + 24);
        v7 = *v6;
        if ( *(_DWORD *)v6 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_WORD **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_WORD **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (0000000140219B7C) ----------------------------------------------------
char            sub_140219B7C(__int64 a1)
{
  __int16 v1; // ax
  _WORD *v3; // rax
  int v4; // eax
  _WORD *v5; // rax
  __int16 *v6; // rdx
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int64 v9; // rdx

  v1 = *(_WORD *)(a1 + 66);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021B7E8(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(__int16 **)(a1 + 24);
        v7 = *v6;
        if ( *(_DWORD *)v6 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_WORD **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_WORD **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (0000000140219D14) ----------------------------------------------------
char            sub_140219D14(__int64 a1)
{
  __int16 v1; // ax
  _WORD *v3; // rax
  int v4; // eax
  _WORD *v5; // rax
  __int16 *v6; // rdx
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int64 v9; // rdx

  v1 = *(_WORD *)(a1 + 66);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021BAB4(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(__int16 **)(a1 + 24);
        v7 = *v6;
        if ( *(_DWORD *)v6 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_WORD **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_WORD **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (0000000140219EAC) ----------------------------------------------------
char            sub_140219EAC(__int64 a1)
{
  __int16 v1; // ax
  _WORD *v3; // rax
  int v4; // eax
  _WORD *v5; // rax
  __int16 *v6; // rdx
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int64 v9; // rdx

  v1 = *(_WORD *)(a1 + 66);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021BD94(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v6 = *(__int16 **)(a1 + 24);
        v7 = *v6;
        if ( *(_DWORD *)v6 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else if ( v7 == 54 && v6[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v6 + 2);
        }
        else
        {
          v8 = v7 - 88;
          if ( v8 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, v8) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v5 = *(_WORD **)(a1 + 24);
        if ( *v5 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v5 + 1);
          v4 = 1;
        }
        else
        {
          v4 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v3 = *(_WORD **)(a1 + 24);
        if ( *v3 == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3 + 1);
          v4 = 4;
        }
        else
        {
          v4 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v4;
  }
  return 1;
}


//----- (000000014021A044) ----------------------------------------------------
char            sub_14021A044(__int64 a1, ...)
{
  char v1; // al
  __int64 v2; // rbx
  char v3; // si
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v9; // edx
  __int64 v10; // rdi
  char v11; // cl
  bool v12; // r8
  int v13; // ebp
  int *v14; // rsi
  int v15; // ecx
  __int16 v16; // [rsp+50h] [rbp+8h] BYREF
  char v17; // [rsp+52h] [rbp+Ah]

  v1 = *(_BYTE *)(a1 + 65);
  v2 = a1;
  v3 = 120;
  if ( v1 > 100 )
  {
    if ( v1 <= 103 )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_527(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v2 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v2;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14021F310(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_535(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return 0;
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021E928(a1);
      goto LABEL_35;
    }
    if ( v1 <= 68 )
      return 0;
    if ( v1 > 71 )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021C4F0(a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = unknown_libname_515(a1);
LABEL_35:
  if ( !v4 )
    return 0;
  if ( !*(_BYTE *)(v2 + 64) )
  {
    v9 = *(_DWORD *)(v2 + 48);
    v16 = 0;
    v10 = 0;
    v17 = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_46;
    if ( (v9 & 0x40) != 0 )
    {
      LOBYTE(v16) = 45;
    }
    else if ( (v9 & 1) != 0 )
    {
      LOBYTE(v16) = 43;
    }
    else
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_46;
      LOBYTE(v16) = 32;
    }
    v10 = 1;
LABEL_46:
    v11 = *(_BYTE *)(v2 + 65);
    v12 = ((v11 - 88) & 0xDF) == 0 && (v9 & 0x20) != 0;
    if ( v12 || ((v11 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&v16 + v10) = 48;
      if ( v11 == 88 || v11 == 65 )
        v3 = 88;
      *((_BYTE *)&v16 + v10 + 1) = v3;
      LODWORD(v10) = v10 + 2;
    }
    v13 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 80) - v10;
    if ( (v9 & 0xC) == 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x20u, v13, (_DWORD *)(v2 + 40));
    v14 = (int *)(v2 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v2 + 1128) + 8LL) )
      sub_1402248A8((int **)(v2 + 1128), (char *)&v16, v10, (_DWORD *)(v2 + 40), (int **)(v2 + 16));
    else
      *v14 += v10;
    v15 = *(_DWORD *)(v2 + 48);
    if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x30u, v13, (_DWORD *)(v2 + 40));
    unknown_libname_581(v2);
    if ( *v14 >= 0 && (*(_DWORD *)(v2 + 48) & 4) != 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x20u, v13, (_DWORD *)(v2 + 40));
  }
  return 1;
}


//----- (000000014021A2C8) ----------------------------------------------------
char            sub_14021A2C8(__int64 a1)
{
  char v1; // al
  __int64 v2; // rbx
  char v3; // si
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v9; // edx
  __int64 v10; // rdi
  char v11; // cl
  bool v12; // r8
  int v13; // ebp
  int *v14; // rsi
  int v15; // ecx
  __int16 v16; // [rsp+50h] [rbp+8h] BYREF
  char v17; // [rsp+52h] [rbp+Ah]

  v1 = *(_BYTE *)(a1 + 65);
  v2 = a1;
  v3 = 120;
  if ( v1 > 100 )
  {
    if ( v1 <= 103 )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = sub_140220A54(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v2 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v2;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14021F4D8(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = sub_1402217A0(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return 0;
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021E9E4(a1);
      goto LABEL_35;
    }
    if ( v1 <= 68 )
      return 0;
    if ( v1 > 71 )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021C564(a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = sub_14021CFF8(a1);
LABEL_35:
  if ( !v4 )
    return 0;
  if ( (*(_DWORD *)(v2 + 1148) != 2 || *(_DWORD *)(v2 + 1144) != 1) && !*(_BYTE *)(v2 + 64) )
  {
    v9 = *(_DWORD *)(v2 + 48);
    v16 = 0;
    v10 = 0;
    v17 = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_48;
    if ( (v9 & 0x40) != 0 )
    {
      LOBYTE(v16) = 45;
    }
    else if ( (v9 & 1) != 0 )
    {
      LOBYTE(v16) = 43;
    }
    else
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_48;
      LOBYTE(v16) = 32;
    }
    v10 = 1;
LABEL_48:
    v11 = *(_BYTE *)(v2 + 65);
    v12 = ((v11 - 88) & 0xDF) == 0 && (v9 & 0x20) != 0;
    if ( v12 || ((v11 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&v16 + v10) = 48;
      if ( v11 == 88 || v11 == 65 )
        v3 = 88;
      *((_BYTE *)&v16 + v10 + 1) = v3;
      LODWORD(v10) = v10 + 2;
    }
    v13 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 80) - v10;
    if ( (v9 & 0xC) == 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x20u, v13, (_DWORD *)(v2 + 40));
    v14 = (int *)(v2 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v2 + 1128) + 8LL) )
      sub_1402248A8((int **)(v2 + 1128), (char *)&v16, v10, (_DWORD *)(v2 + 40), (int **)(v2 + 16));
    else
      *v14 += v10;
    v15 = *(_DWORD *)(v2 + 48);
    if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x30u, v13, (_DWORD *)(v2 + 40));
    unknown_libname_582(v2);
    if ( *v14 >= 0 && (*(_DWORD *)(v2 + 48) & 4) != 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x20u, v13, (_DWORD *)(v2 + 40));
  }
  return 1;
}


//----- (000000014021A564) ----------------------------------------------------
char            sub_14021A564(__int64 a1, ...)
{
  char v1; // al
  __int64 v2; // rbx
  char v3; // si
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v9; // edx
  __int64 v10; // rdi
  char v11; // cl
  bool v12; // r8
  int v13; // ebp
  int *v14; // rsi
  int v15; // ecx
  __int16 v16; // [rsp+50h] [rbp+8h] BYREF
  char v17; // [rsp+52h] [rbp+Ah]

  v1 = *(_BYTE *)(a1 + 65);
  v2 = a1;
  v3 = 120;
  if ( v1 > 100 )
  {
    if ( v1 <= 103 )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_528(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v2 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v2;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14021F6DC(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_536(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return 0;
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021EAE4(a1);
      goto LABEL_35;
    }
    if ( v1 <= 68 )
      return 0;
    if ( v1 > 71 )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021C6BC(a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = unknown_libname_516(a1);
LABEL_35:
  if ( !v4 )
    return 0;
  if ( !*(_BYTE *)(v2 + 64) )
  {
    v9 = *(_DWORD *)(v2 + 48);
    v16 = 0;
    v10 = 0;
    v17 = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_46;
    if ( (v9 & 0x40) != 0 )
    {
      LOBYTE(v16) = 45;
    }
    else if ( (v9 & 1) != 0 )
    {
      LOBYTE(v16) = 43;
    }
    else
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_46;
      LOBYTE(v16) = 32;
    }
    v10 = 1;
LABEL_46:
    v11 = *(_BYTE *)(v2 + 65);
    v12 = ((v11 - 88) & 0xDF) == 0 && (v9 & 0x20) != 0;
    if ( v12 || ((v11 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&v16 + v10) = 48;
      if ( v11 == 88 || v11 == 65 )
        v3 = 88;
      *((_BYTE *)&v16 + v10 + 1) = v3;
      LODWORD(v10) = v10 + 2;
    }
    v13 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 80) - v10;
    if ( (v9 & 0xC) == 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x20u, v13, (_DWORD *)(v2 + 40));
    v14 = (int *)(v2 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v2 + 1128) + 8LL) )
      sub_1402248A8((int **)(v2 + 1128), (char *)&v16, v10, (_DWORD *)(v2 + 40), (int **)(v2 + 16));
    else
      *v14 += v10;
    v15 = *(_DWORD *)(v2 + 48);
    if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x30u, v13, (_DWORD *)(v2 + 40));
    unknown_libname_583(v2);
    if ( *v14 >= 0 && (*(_DWORD *)(v2 + 48) & 4) != 0 )
      sub_140212B0C((__int64 *)(v2 + 1128), 0x20u, v13, (_DWORD *)(v2 + 40));
  }
  return 1;
}


//----- (000000014021A7E8) ----------------------------------------------------
char            sub_14021A7E8(__int64 a1, ...)
{
  char v1; // al
  __int64 v2; // rbx
  __int8 v3; // si
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v9; // edx
  __int64 v10; // rdi
  char v11; // cl
  bool v12; // r8
  int v13; // esi
  int v14; // ecx
  __m128i v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 65);
  v2 = a1;
  v3 = 120;
  if ( v1 > 100 )
  {
    if ( v1 <= 103 )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_529(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v2 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v2;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14021F8A4(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_537(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return 0;
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021EBA0(a1);
      goto LABEL_35;
    }
    if ( v1 <= 68 )
      return 0;
    if ( v1 > 71 )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021C730(a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = unknown_libname_517(a1);
LABEL_35:
  if ( !v4 )
    return 0;
  if ( !*(_BYTE *)(v2 + 64) )
  {
    v9 = *(_DWORD *)(v2 + 48);
    SR_VEC_LANES(128, v15, i16)[0] = 0;
    v10 = 0;
    SR_VEC_LANES(128, v15, i8)[2] = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_46;
    if ( (v9 & 0x40) != 0 )
    {
      SR_VEC_LANES(128, v15, i8)[0] = 45;
    }
    else if ( (v9 & 1) != 0 )
    {
      SR_VEC_LANES(128, v15, i8)[0] = 43;
    }
    else
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_46;
      SR_VEC_LANES(128, v15, i8)[0] = 32;
    }
    v10 = 1;
LABEL_46:
    v11 = *(_BYTE *)(v2 + 65);
    v12 = ((v11 - 88) & 0xDF) == 0 && (v9 & 0x20) != 0;
    if ( v12 || ((v11 - 65) & 0xDF) == 0 )
    {
      SR_VEC_LANES(128, v15, i8)[v10] = 48;
      if ( v11 == 88 || v11 == 65 )
        v3 = 88;
      SR_VEC_LANES(128, v15, i8)[v10 + 1] = v3;
      LODWORD(v10) = v10 + 2;
    }
    v13 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 80) - v10;
    if ( (v9 & 0xC) == 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 32, v13, (int *)(v2 + 40));
    unknown_libname_593(v2 + 1128, &v15, v10, (_DWORD *)(v2 + 40));
    v14 = *(_DWORD *)(v2 + 48);
    if ( (v14 & 8) != 0 && (v14 & 4) == 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 48, v13, (int *)(v2 + 40));
    unknown_libname_584(v2);
    if ( *(int *)(v2 + 40) >= 0 && (*(_DWORD *)(v2 + 48) & 4) != 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 32, v13, (int *)(v2 + 40));
  }
  return 1;
}


//----- (000000014021AA50) ----------------------------------------------------
char            sub_14021AA50(__int64 a1)
{
  char v1; // al
  __int64 v2; // rbx
  __int8 v3; // si
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v9; // edx
  __int64 v10; // rdi
  char v11; // cl
  bool v12; // r8
  int v13; // esi
  int v14; // ecx
  __m128i v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 65);
  v2 = a1;
  v3 = 120;
  if ( v1 > 100 )
  {
    if ( v1 <= 103 )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = sub_140220D10(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v2 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v2;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14021FA6C(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = sub_140221988(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return 0;
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021EC5C(a1);
      goto LABEL_35;
    }
    if ( v1 <= 68 )
      return 0;
    if ( v1 > 71 )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021C7A4(a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = sub_14021D67C(a1);
LABEL_35:
  if ( !v4 )
    return 0;
  if ( (*(_DWORD *)(v2 + 1148) != 2 || *(_DWORD *)(v2 + 1144) != 1) && !*(_BYTE *)(v2 + 64) )
  {
    v9 = *(_DWORD *)(v2 + 48);
    SR_VEC_LANES(128, v15, i16)[0] = 0;
    v10 = 0;
    SR_VEC_LANES(128, v15, i8)[2] = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_48;
    if ( (v9 & 0x40) != 0 )
    {
      SR_VEC_LANES(128, v15, i8)[0] = 45;
    }
    else if ( (v9 & 1) != 0 )
    {
      SR_VEC_LANES(128, v15, i8)[0] = 43;
    }
    else
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_48;
      SR_VEC_LANES(128, v15, i8)[0] = 32;
    }
    v10 = 1;
LABEL_48:
    v11 = *(_BYTE *)(v2 + 65);
    v12 = ((v11 - 88) & 0xDF) == 0 && (v9 & 0x20) != 0;
    if ( v12 || ((v11 - 65) & 0xDF) == 0 )
    {
      SR_VEC_LANES(128, v15, i8)[v10] = 48;
      if ( v11 == 88 || v11 == 65 )
        v3 = 88;
      SR_VEC_LANES(128, v15, i8)[v10 + 1] = v3;
      LODWORD(v10) = v10 + 2;
    }
    v13 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 80) - v10;
    if ( (v9 & 0xC) == 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 32, v13, (int *)(v2 + 40));
    unknown_libname_593(v2 + 1128, &v15, v10, (_DWORD *)(v2 + 40));
    v14 = *(_DWORD *)(v2 + 48);
    if ( (v14 & 8) != 0 && (v14 & 4) == 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 48, v13, (int *)(v2 + 40));
    unknown_libname_585(v2);
    if ( *(int *)(v2 + 40) >= 0 && (*(_DWORD *)(v2 + 48) & 4) != 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 32, v13, (int *)(v2 + 40));
  }
  return 1;
}


//----- (000000014021ACCC) ----------------------------------------------------
char            sub_14021ACCC(__int64 a1, ...)
{
  char v1; // al
  __int64 v2; // rbx
  __int8 v3; // si
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v9; // edx
  __int64 v10; // rdi
  char v11; // cl
  bool v12; // r8
  int v13; // esi
  int v14; // ecx
  __m128i v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 65);
  v2 = a1;
  v3 = 120;
  if ( v1 > 100 )
  {
    if ( v1 <= 103 )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_530(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v2 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v2;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14021FC70(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_538(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return 0;
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021ED5C(a1);
      goto LABEL_35;
    }
    if ( v1 <= 68 )
      return 0;
    if ( v1 > 71 )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021C8FC(a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = unknown_libname_518(a1);
LABEL_35:
  if ( !v4 )
    return 0;
  if ( !*(_BYTE *)(v2 + 64) )
  {
    v9 = *(_DWORD *)(v2 + 48);
    SR_VEC_LANES(128, v15, i16)[0] = 0;
    v10 = 0;
    SR_VEC_LANES(128, v15, i8)[2] = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_46;
    if ( (v9 & 0x40) != 0 )
    {
      SR_VEC_LANES(128, v15, i8)[0] = 45;
    }
    else if ( (v9 & 1) != 0 )
    {
      SR_VEC_LANES(128, v15, i8)[0] = 43;
    }
    else
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_46;
      SR_VEC_LANES(128, v15, i8)[0] = 32;
    }
    v10 = 1;
LABEL_46:
    v11 = *(_BYTE *)(v2 + 65);
    v12 = ((v11 - 88) & 0xDF) == 0 && (v9 & 0x20) != 0;
    if ( v12 || ((v11 - 65) & 0xDF) == 0 )
    {
      SR_VEC_LANES(128, v15, i8)[v10] = 48;
      if ( v11 == 88 || v11 == 65 )
        v3 = 88;
      SR_VEC_LANES(128, v15, i8)[v10 + 1] = v3;
      LODWORD(v10) = v10 + 2;
    }
    v13 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 80) - v10;
    if ( (v9 & 0xC) == 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 32, v13, (int *)(v2 + 40));
    unknown_libname_593(v2 + 1128, &v15, v10, (_DWORD *)(v2 + 40));
    v14 = *(_DWORD *)(v2 + 48);
    if ( (v14 & 8) != 0 && (v14 & 4) == 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 48, v13, (int *)(v2 + 40));
    unknown_libname_586(v2);
    if ( *(int *)(v2 + 40) >= 0 && (*(_DWORD *)(v2 + 48) & 4) != 0 )
      unknown_libname_371((__int64 *)(v2 + 1128), 32, v13, (int *)(v2 + 40));
  }
  return 1;
}


//----- (000000014021AF34) ----------------------------------------------------
__int64            sub_14021AF34(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int16 v2; // si
  __int64 v3; // rbx
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int16 v11; // dx
  bool v12; // r8
  int v13; // esi
  int *v14; // rbp
  int v15; // ecx
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int16 v19; // [rsp+34h] [rbp-34h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 66);
  v2 = 120;
  v3 = a1;
  if ( v1 > 0x64u )
  {
    if ( v1 <= 0x67u )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_531(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v3 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v3;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14021FE38(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_539(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 == 65 )
    goto LABEL_34;
  if ( v1 != 67 )
  {
    if ( v1 <= 0x44u )
      return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
    if ( v1 <= 0x47u )
      goto LABEL_34;
    if ( v1 != 83 )
    {
      if ( v1 != 88 )
      {
        if ( v1 == 90 )
        {
          v4 = unknown_libname_511(a1);
          goto LABEL_35;
        }
        if ( v1 != 97 )
        {
          if ( v1 != 99 )
            return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
          goto LABEL_12;
        }
LABEL_34:
        v4 = unknown_libname_519(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  v4 = unknown_libname_523(a1);
LABEL_35:
  if ( !v4 || *(_BYTE *)(v3 + 64) )
    return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
  v8 = *(_DWORD *)(v3 + 48);
  v18 = 0;
  v9 = 0;
  v19 = 0;
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v10 = 45;
    }
    else
    {
      if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 2) == 0 )
          goto LABEL_47;
        LOWORD(v18) = 32;
        goto LABEL_46;
      }
      v10 = 43;
    }
    LOWORD(v18) = v10;
LABEL_46:
    v9 = 1;
  }
LABEL_47:
  v11 = *(_WORD *)(v3 + 66);
  v12 = ((v11 - 88) & 0xFFDF) == 0 && (v8 & 0x20) != 0;
  if ( v12 || ((v11 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&v18 + v9) = 48;
    if ( v11 == 88 || v11 == 65 )
      v2 = 88;
    *((_WORD *)&v18 + v9 + 1) = v2;
    LODWORD(v9) = v9 + 2;
  }
  v13 = *(_DWORD *)(v3 + 52) - *(_DWORD *)(v3 + 80) - v9;
  if ( (v8 & 0xC) == 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 32, v13, (_DWORD *)(v3 + 40));
  v14 = (int *)(v3 + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v3 + 1128) + 8LL) )
    sub_1402249A0((int **)(v3 + 1128), (unsigned __int16 *)&v18, v9, (_DWORD *)(v3 + 40), (int **)(v3 + 16));
  else
    *v14 += v9;
  v15 = *(_DWORD *)(v3 + 48);
  if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 48, v13, (_DWORD *)(v3 + 40));
  unknown_libname_587(v3);
  if ( *v14 >= 0 && (*(_DWORD *)(v3 + 48) & 4) != 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 32, v13, (_DWORD *)(v3 + 40));
  return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
}


//----- (000000014021B214) ----------------------------------------------------
__int64            sub_14021B214(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int16 v2; // si
  __int64 v3; // rbx
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int16 v11; // dx
  bool v12; // r8
  int v13; // esi
  int *v14; // rbp
  int v15; // ecx
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int16 v19; // [rsp+34h] [rbp-34h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 66);
  v2 = 120;
  v3 = a1;
  if ( v1 > 0x64u )
  {
    if ( v1 <= 0x67u )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = sub_140220FCC(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v3 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v3;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_140220004(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = sub_140221BA0(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021EEC0(a1);
      goto LABEL_35;
    }
    if ( v1 <= 0x44u )
      return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
    if ( v1 > 0x47u )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021C9EC((_QWORD *)a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 != 99 )
              return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
            goto LABEL_12;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = sub_14021DD24(a1);
LABEL_35:
  if ( !v4 || *(_DWORD *)(v3 + 1148) == 2 && *(_DWORD *)(v3 + 1144) == 1 || *(_BYTE *)(v3 + 64) )
    return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
  v8 = *(_DWORD *)(v3 + 48);
  v18 = 0;
  v9 = 0;
  v19 = 0;
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v10 = 45;
    }
    else
    {
      if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 2) == 0 )
          goto LABEL_49;
        LOWORD(v18) = 32;
        goto LABEL_48;
      }
      v10 = 43;
    }
    LOWORD(v18) = v10;
LABEL_48:
    v9 = 1;
  }
LABEL_49:
  v11 = *(_WORD *)(v3 + 66);
  v12 = ((v11 - 88) & 0xFFDF) == 0 && (v8 & 0x20) != 0;
  if ( v12 || ((v11 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&v18 + v9) = 48;
    if ( v11 == 88 || v11 == 65 )
      v2 = 88;
    *((_WORD *)&v18 + v9 + 1) = v2;
    LODWORD(v9) = v9 + 2;
  }
  v13 = *(_DWORD *)(v3 + 52) - *(_DWORD *)(v3 + 80) - v9;
  if ( (v8 & 0xC) == 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 32, v13, (_DWORD *)(v3 + 40));
  v14 = (int *)(v3 + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v3 + 1128) + 8LL) )
    sub_1402249A0((int **)(v3 + 1128), (unsigned __int16 *)&v18, v9, (_DWORD *)(v3 + 40), (int **)(v3 + 16));
  else
    *v14 += v9;
  v15 = *(_DWORD *)(v3 + 48);
  if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 48, v13, (_DWORD *)(v3 + 40));
  unknown_libname_588(v3);
  if ( *v14 >= 0 && (*(_DWORD *)(v3 + 48) & 4) != 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 32, v13, (_DWORD *)(v3 + 40));
  return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
}


//----- (000000014021B508) ----------------------------------------------------
__int64            sub_14021B508(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int16 v2; // si
  __int64 v3; // rbx
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int16 v11; // dx
  bool v12; // r8
  int v13; // esi
  int *v14; // rbp
  int v15; // ecx
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int16 v19; // [rsp+34h] [rbp-34h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 66);
  v2 = 120;
  v3 = a1;
  if ( v1 > 0x64u )
  {
    if ( v1 <= 0x67u )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_532(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v3 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v3;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_14022020C(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_540(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 == 65 )
    goto LABEL_34;
  if ( v1 != 67 )
  {
    if ( v1 <= 0x44u )
      return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
    if ( v1 <= 0x47u )
      goto LABEL_34;
    if ( v1 != 83 )
    {
      if ( v1 != 88 )
      {
        if ( v1 == 90 )
        {
          v4 = unknown_libname_512(a1);
          goto LABEL_35;
        }
        if ( v1 != 97 )
        {
          if ( v1 != 99 )
            return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
          goto LABEL_12;
        }
LABEL_34:
        v4 = unknown_libname_520(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  v4 = unknown_libname_524(a1);
LABEL_35:
  if ( !v4 || *(_BYTE *)(v3 + 64) )
    return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
  v8 = *(_DWORD *)(v3 + 48);
  v18 = 0;
  v9 = 0;
  v19 = 0;
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v10 = 45;
    }
    else
    {
      if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 2) == 0 )
          goto LABEL_47;
        LOWORD(v18) = 32;
        goto LABEL_46;
      }
      v10 = 43;
    }
    LOWORD(v18) = v10;
LABEL_46:
    v9 = 1;
  }
LABEL_47:
  v11 = *(_WORD *)(v3 + 66);
  v12 = ((v11 - 88) & 0xFFDF) == 0 && (v8 & 0x20) != 0;
  if ( v12 || ((v11 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&v18 + v9) = 48;
    if ( v11 == 88 || v11 == 65 )
      v2 = 88;
    *((_WORD *)&v18 + v9 + 1) = v2;
    LODWORD(v9) = v9 + 2;
  }
  v13 = *(_DWORD *)(v3 + 52) - *(_DWORD *)(v3 + 80) - v9;
  if ( (v8 & 0xC) == 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 32, v13, (_DWORD *)(v3 + 40));
  v14 = (int *)(v3 + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v3 + 1128) + 8LL) )
    sub_1402249A0((int **)(v3 + 1128), (unsigned __int16 *)&v18, v9, (_DWORD *)(v3 + 40), (int **)(v3 + 16));
  else
    *v14 += v9;
  v15 = *(_DWORD *)(v3 + 48);
  if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 48, v13, (_DWORD *)(v3 + 40));
  unknown_libname_589(v3);
  if ( *v14 >= 0 && (*(_DWORD *)(v3 + 48) & 4) != 0 )
    sub_140212B98((__int64 *)(v3 + 1128), 32, v13, (_DWORD *)(v3 + 40));
  return sub_1401F8B20((unsigned __int64)&v17 ^ v20);
}


//----- (000000014021B7E8) ----------------------------------------------------
__int64            sub_14021B7E8(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int16 v2; // si
  __int64 v3; // rbx
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int16 v11; // cx
  bool v12; // r8
  int v13; // ebp
  int v14; // ecx
  _QWORD v16[6]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v17; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 66);
  v2 = 120;
  v3 = a1;
  if ( v1 > 0x64u )
  {
    if ( v1 <= 0x67u )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_533(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v3 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v3;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_1402203D8(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_541(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 == 65 )
    goto LABEL_34;
  if ( v1 != 67 )
  {
    if ( v1 <= 0x44u )
      return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
    if ( v1 <= 0x47u )
      goto LABEL_34;
    if ( v1 != 83 )
    {
      if ( v1 != 88 )
      {
        if ( v1 == 90 )
        {
          v4 = unknown_libname_513(a1);
          goto LABEL_35;
        }
        if ( v1 != 97 )
        {
          if ( v1 != 99 )
            return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
          goto LABEL_12;
        }
LABEL_34:
        v4 = unknown_libname_521(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  v4 = unknown_libname_525(a1);
LABEL_35:
  if ( !v4 || *(_BYTE *)(v3 + 64) )
    return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
  v8 = *(_DWORD *)(v3 + 48);
  SR_VEC_LANES(128, v17, i32)[0] = 0;
  v9 = 0;
  SR_VEC_LANES(128, v17, i16)[2] = 0;
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v10 = 45;
    }
    else
    {
      if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 2) == 0 )
          goto LABEL_47;
        SR_VEC_LANES(128, v17, i16)[0] = 32;
        goto LABEL_46;
      }
      v10 = 43;
    }
    SR_VEC_LANES(128, v17, i16)[0] = v10;
LABEL_46:
    v9 = 1;
  }
LABEL_47:
  v11 = *(_WORD *)(v3 + 66);
  v12 = ((v11 - 88) & 0xFFDF) == 0 && (v8 & 0x20) != 0;
  if ( v12 || ((v11 - 65) & 0xFFDF) == 0 )
  {
    SR_VEC_LANES(128, v17, i16)[v9] = 48;
    if ( v11 == 88 || v11 == 65 )
      v2 = 88;
    SR_VEC_LANES(128, v17, i16)[v9 + 1] = v2;
    LODWORD(v9) = v9 + 2;
  }
  v13 = *(_DWORD *)(v3 + 52) - *(_DWORD *)(v3 + 80) - v9;
  if ( (v8 & 0xC) == 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 32, v13, (int *)(v3 + 40));
  v16[4] = v3 + 16;
  unknown_libname_594(v3 + 1128, &v17, v9, (_DWORD *)(v3 + 40));
  v14 = *(_DWORD *)(v3 + 48);
  if ( (v14 & 8) != 0 && (v14 & 4) == 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 48, v13, (int *)(v3 + 40));
  unknown_libname_590(v3);
  if ( *(int *)(v3 + 40) >= 0 && (*(_DWORD *)(v3 + 48) & 4) != 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 32, v13, (int *)(v3 + 40));
  return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
}


//----- (000000014021BAB4) ----------------------------------------------------
__int64            sub_14021BAB4(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int16 v2; // si
  __int64 v3; // rbx
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int16 v11; // cx
  bool v12; // r8
  int v13; // ebp
  int v14; // ecx
  _QWORD v16[6]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v17; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 66);
  v2 = 120;
  v3 = a1;
  if ( v1 > 0x64u )
  {
    if ( v1 <= 0x67u )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = sub_140221288(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v3 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v3;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_1402205A4(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = sub_140221E1C(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 != 65 )
  {
    if ( v1 == 67 )
    {
LABEL_12:
      v4 = sub_14021F0DC(a1);
      goto LABEL_35;
    }
    if ( v1 <= 0x44u )
      return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
    if ( v1 > 0x47u )
    {
      if ( v1 != 83 )
      {
        if ( v1 != 88 )
        {
          if ( v1 == 90 )
          {
            v4 = sub_14021CC24((_QWORD *)a1);
            goto LABEL_35;
          }
          if ( v1 != 97 )
          {
            if ( v1 != 99 )
              return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
            goto LABEL_12;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v4 = sub_14021E414(a1);
LABEL_35:
  if ( !v4 || *(_DWORD *)(v3 + 1148) == 2 && *(_DWORD *)(v3 + 1144) == 1 || *(_BYTE *)(v3 + 64) )
    return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
  v8 = *(_DWORD *)(v3 + 48);
  SR_VEC_LANES(128, v17, i32)[0] = 0;
  v9 = 0;
  SR_VEC_LANES(128, v17, i16)[2] = 0;
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v10 = 45;
    }
    else
    {
      if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 2) == 0 )
          goto LABEL_49;
        SR_VEC_LANES(128, v17, i16)[0] = 32;
        goto LABEL_48;
      }
      v10 = 43;
    }
    SR_VEC_LANES(128, v17, i16)[0] = v10;
LABEL_48:
    v9 = 1;
  }
LABEL_49:
  v11 = *(_WORD *)(v3 + 66);
  v12 = ((v11 - 88) & 0xFFDF) == 0 && (v8 & 0x20) != 0;
  if ( v12 || ((v11 - 65) & 0xFFDF) == 0 )
  {
    SR_VEC_LANES(128, v17, i16)[v9] = 48;
    if ( v11 == 88 || v11 == 65 )
      v2 = 88;
    SR_VEC_LANES(128, v17, i16)[v9 + 1] = v2;
    LODWORD(v9) = v9 + 2;
  }
  v13 = *(_DWORD *)(v3 + 52) - *(_DWORD *)(v3 + 80) - v9;
  if ( (v8 & 0xC) == 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 32, v13, (int *)(v3 + 40));
  v16[4] = v3 + 16;
  unknown_libname_594(v3 + 1128, &v17, v9, (_DWORD *)(v3 + 40));
  v14 = *(_DWORD *)(v3 + 48);
  if ( (v14 & 8) != 0 && (v14 & 4) == 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 48, v13, (int *)(v3 + 40));
  unknown_libname_591(v3);
  if ( *(int *)(v3 + 40) >= 0 && (*(_DWORD *)(v3 + 48) & 4) != 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 32, v13, (int *)(v3 + 40));
  return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
}


//----- (000000014021BD94) ----------------------------------------------------
__int64            sub_14021BD94(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int16 v2; // si
  __int64 v3; // rbx
  char v4; // al
  unsigned int v5; // edx
  char v6; // r8
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int16 v11; // cx
  bool v12; // r8
  int v13; // ebp
  int v14; // ecx
  _QWORD v16[6]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v17; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 66);
  v2 = 120;
  v3 = a1;
  if ( v1 > 0x64u )
  {
    if ( v1 <= 0x67u )
      goto LABEL_34;
    if ( v1 != 105 )
    {
      switch ( v1 )
      {
        case 'n':
          v4 = unknown_libname_534(a1);
          goto LABEL_35;
        case 'o':
          v7 = *(_DWORD *)(a1 + 48);
          if ( (v7 & 0x20) != 0 )
            *(_DWORD *)(v3 + 48) = v7 | 0x80;
          v5 = 8;
          a1 = v3;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          v6 = 1;
          v5 = 16;
LABEL_33:
          v4 = sub_1402207AC(a1, v5, v6);
          goto LABEL_35;
        case 's':
LABEL_23:
          v4 = unknown_libname_542(a1);
          goto LABEL_35;
      }
      if ( v1 != 117 )
      {
        if ( v1 != 120 )
          return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
        v5 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v5 = 10;
LABEL_32:
      v6 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v1 == 100 )
    goto LABEL_30;
  if ( v1 == 65 )
    goto LABEL_34;
  if ( v1 != 67 )
  {
    if ( v1 <= 0x44u )
      return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
    if ( v1 <= 0x47u )
      goto LABEL_34;
    if ( v1 != 83 )
    {
      if ( v1 != 88 )
      {
        if ( v1 == 90 )
        {
          v4 = unknown_libname_514(a1);
          goto LABEL_35;
        }
        if ( v1 != 97 )
        {
          if ( v1 != 99 )
            return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
          goto LABEL_12;
        }
LABEL_34:
        v4 = unknown_libname_522(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  v4 = unknown_libname_526(a1);
LABEL_35:
  if ( !v4 || *(_BYTE *)(v3 + 64) )
    return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
  v8 = *(_DWORD *)(v3 + 48);
  SR_VEC_LANES(128, v17, i32)[0] = 0;
  v9 = 0;
  SR_VEC_LANES(128, v17, i16)[2] = 0;
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v10 = 45;
    }
    else
    {
      if ( (v8 & 1) == 0 )
      {
        if ( (v8 & 2) == 0 )
          goto LABEL_47;
        SR_VEC_LANES(128, v17, i16)[0] = 32;
        goto LABEL_46;
      }
      v10 = 43;
    }
    SR_VEC_LANES(128, v17, i16)[0] = v10;
LABEL_46:
    v9 = 1;
  }
LABEL_47:
  v11 = *(_WORD *)(v3 + 66);
  v12 = ((v11 - 88) & 0xFFDF) == 0 && (v8 & 0x20) != 0;
  if ( v12 || ((v11 - 65) & 0xFFDF) == 0 )
  {
    SR_VEC_LANES(128, v17, i16)[v9] = 48;
    if ( v11 == 88 || v11 == 65 )
      v2 = 88;
    SR_VEC_LANES(128, v17, i16)[v9 + 1] = v2;
    LODWORD(v9) = v9 + 2;
  }
  v13 = *(_DWORD *)(v3 + 52) - *(_DWORD *)(v3 + 80) - v9;
  if ( (v8 & 0xC) == 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 32, v13, (int *)(v3 + 40));
  v16[4] = v3 + 16;
  unknown_libname_594(v3 + 1128, &v17, v9, (_DWORD *)(v3 + 40));
  v14 = *(_DWORD *)(v3 + 48);
  if ( (v14 & 8) != 0 && (v14 & 4) == 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 48, v13, (int *)(v3 + 40));
  unknown_libname_592(v3);
  if ( *(int *)(v3 + 40) >= 0 && (*(_DWORD *)(v3 + 48) & 4) != 0 )
    sub_140212CA4((__int64 *)(v3 + 1128), 32, v13, (int *)(v3 + 40));
  return sub_1401F8B20((unsigned __int64)v16 ^ SR_VEC_LANES(128, v17, i64)[1]);
}


//----- (000000014021C094) ----------------------------------------------------
char            sub_14021C094(__int64 a1)
{
  char result; // al
  int v3; // ecx

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_451(a1, (_DWORD *)(a1 + 52));
  result = sub_140222390(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = *(_DWORD *)(a1 + 52);
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -v3;
      }
    }
    return 1;
  }
  return result;
}


//----- (000000014021C14C) ----------------------------------------------------
char            sub_14021C14C(__int64 a1)
{
  char result; // al
  int v3; // ecx

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_454(a1, (_DWORD *)(a1 + 52));
  result = sub_1402224A8(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = *(_DWORD *)(a1 + 52);
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -v3;
      }
    }
    return 1;
  }
  return result;
}


//----- (000000014021C204) ----------------------------------------------------
char            sub_14021C204(__int64 a1)
{
  char result; // al
  int v3; // ecx

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_457(a1, (_DWORD *)(a1 + 52));
  result = sub_1402225C0(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = *(_DWORD *)(a1 + 52);
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -v3;
      }
    }
    return 1;
  }
  return result;
}


//----- (000000014021C2C0) ----------------------------------------------------
char            sub_14021C2C0(__int64 a1)
{
  char result; // al
  int v3; // ecx

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_460(a1, (_DWORD *)(a1 + 52));
  result = sub_1402226D8(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = *(_DWORD *)(a1 + 52);
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -v3;
      }
    }
    return 1;
  }
  return result;
}


//----- (000000014021C4F0) ----------------------------------------------------
char            sub_14021C4F0(__int64 a1)
{
  unsigned __int16 *v1; // r8
  __int64 v2; // r9
  bool v3; // dl
  unsigned int v4; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v1 || (v2 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v4 = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v3 = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v3 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  v3 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = v2;
  v4 = *v1;
  if ( !v3 )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v4 >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = v4;
  return 1;
}


//----- (000000014021C564) ----------------------------------------------------
char            sub_14021C564(__int64 a1)
{
  unsigned __int16 *v1; // rdi
  __int64 v3; // rdx
  bool v4; // cl
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  char v8; // r9
  __int64 v9; // rdx
  char v10; // al
  unsigned int v12; // eax

  v1 = nullptr;
  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v5 = *(int *)(a1 + 3564);
    if ( (unsigned int)v5 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v6 = 3 * v5;
    if ( *(_DWORD *)(a1 + 1144) == 1 )
    {
      v7 = *(_DWORD *)(a1 + 60);
      v8 = *(_BYTE *)(a1 + 65);
      v9 = a1 + 1160 + 8 * v6;
      if ( *(_DWORD *)v9 )
      {
        if ( !sub_140214A64(a1, v9, 3, v8, v7) )
        {
          *errno_sr() = 22;
          sub_14024CF6C();
          v10 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        *(_DWORD *)v9 = 3;
        *(_BYTE *)(v9 + 4) = v8;
        *(_DWORD *)(v9 + 16) = v7;
      }
    }
    else
    {
      v1 = **(unsigned __int16 ***)(a1 + 8 * v6 + 1168);
    }
    v10 = 1;
LABEL_21:
    if ( v10 )
      goto LABEL_3;
    return 0;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_3:
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !v1 || (v3 = *((_QWORD *)v1 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    v12 = 6;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v4 = 1;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_25;
    }
  }
  v4 = 0;
LABEL_25:
  *(_QWORD *)(a1 + 72) = v3;
  v12 = *v1;
  if ( !v4 )
  {
LABEL_28:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v12 >>= 1;
LABEL_29:
  *(_DWORD *)(a1 + 80) = v12;
  return 1;
}


//----- (000000014021C6BC) ----------------------------------------------------
char            sub_14021C6BC(__int64 a1)
{
  unsigned __int16 *v1; // r8
  __int64 v2; // r9
  bool v3; // dl
  unsigned int v4; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v1 || (v2 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v4 = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v3 = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v3 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  v3 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = v2;
  v4 = *v1;
  if ( !v3 )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v4 >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = v4;
  return 1;
}


//----- (000000014021C730) ----------------------------------------------------
char            sub_14021C730(__int64 a1)
{
  unsigned __int16 *v1; // r8
  __int64 v2; // r9
  bool v3; // dl
  unsigned int v4; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v1 || (v2 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v4 = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v3 = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v3 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  v3 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = v2;
  v4 = *v1;
  if ( !v3 )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v4 >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = v4;
  return 1;
}


//----- (000000014021C7A4) ----------------------------------------------------
char            sub_14021C7A4(__int64 a1)
{
  unsigned __int16 *v1; // rdi
  __int64 v3; // rdx
  bool v4; // cl
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  char v8; // r9
  __int64 v9; // rdx
  char v10; // al
  unsigned int v12; // eax

  v1 = nullptr;
  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v5 = *(int *)(a1 + 3564);
    if ( (unsigned int)v5 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v6 = 3 * v5;
    if ( *(_DWORD *)(a1 + 1144) == 1 )
    {
      v7 = *(_DWORD *)(a1 + 60);
      v8 = *(_BYTE *)(a1 + 65);
      v9 = a1 + 1160 + 8 * v6;
      if ( *(_DWORD *)v9 )
      {
        if ( !sub_140214C94(a1, v9, 3, v8, v7) )
        {
          *errno_sr() = 22;
          sub_14024CF6C();
          v10 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        *(_DWORD *)v9 = 3;
        *(_BYTE *)(v9 + 4) = v8;
        *(_DWORD *)(v9 + 16) = v7;
      }
    }
    else
    {
      v1 = **(unsigned __int16 ***)(a1 + 8 * v6 + 1168);
    }
    v10 = 1;
LABEL_21:
    if ( v10 )
      goto LABEL_3;
    return 0;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_3:
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !v1 || (v3 = *((_QWORD *)v1 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    v12 = 6;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v4 = 1;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_25;
    }
  }
  v4 = 0;
LABEL_25:
  *(_QWORD *)(a1 + 72) = v3;
  v12 = *v1;
  if ( !v4 )
  {
LABEL_28:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v12 >>= 1;
LABEL_29:
  *(_DWORD *)(a1 + 80) = v12;
  return 1;
}


//----- (000000014021C8FC) ----------------------------------------------------
char            sub_14021C8FC(__int64 a1)
{
  unsigned __int16 *v1; // r8
  __int64 v2; // r9
  bool v3; // dl
  unsigned int v4; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v1 || (v2 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v4 = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v3 = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v3 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  v3 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = v2;
  v4 = *v1;
  if ( !v3 )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v4 >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = v4;
  return 1;
}


//----- (000000014021C970) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_511(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rsi
  bool v4; // al
  unsigned int v5; // ecx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v2 || (v3 = *((_QWORD *)v2 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    v5 = 6;
    goto LABEL_6;
  }
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = v3;
  v5 = *v2;
  if ( !v4 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v5 >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = v5;
  return 1;
}


//----- (000000014021C9EC) ----------------------------------------------------
char            sub_14021C9EC(_QWORD *a1)
{
  unsigned __int16 *v1; // rdi
  __int64 v3; // rsi
  bool v4; // al
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int16 v9; // r9
  _QWORD *v10; // rdx
  char v11; // al

  v1 = nullptr;
  if ( *((_DWORD *)a1 + 287) != 1 )
  {
    v6 = *((int *)a1 + 891);
    if ( (unsigned int)v6 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v7 = 3 * v6;
    if ( *((_DWORD *)a1 + 286) == 1 )
    {
      v8 = *((_DWORD *)a1 + 15);
      v9 = *((_WORD *)a1 + 33);
      v10 = &a1[v7 + 145];
      if ( *(_DWORD *)v10 )
      {
        if ( !sub_140214EC4(a1, (__int64)v10, 3, v9, v8) )
        {
          *errno_sr() = 22;
          sub_14024CF6C();
          v11 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        *(_DWORD *)v10 = 3;
        *((_WORD *)v10 + 2) = v9;
        *((_DWORD *)v10 + 4) = v8;
      }
    }
    else
    {
      v1 = *(unsigned __int16 **)a1[v7 + 146];
    }
    v11 = 1;
LABEL_18:
    if ( v11 )
      goto LABEL_3;
    return 0;
  }
  a1[4] += 8LL;
  v1 = *(unsigned __int16 **)(a1[4] - 8LL);
LABEL_3:
  if ( *((_DWORD *)a1 + 286) == 1 && *((_DWORD *)a1 + 287) != 1 )
    return 1;
  if ( !v1 || (v3 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v5 = 6;
    a1[9] = (uint64)(uintptr_t)("(null)");
    goto LABEL_21;
  }
  v4 = sub_140211A94(*a1, *((_WORD *)a1 + 33), *((_DWORD *)a1 + 15));
  a1[9] = v3;
  v5 = *v1;
  if ( !v4 )
  {
LABEL_21:
    *((_BYTE *)a1 + 84) = 0;
    goto LABEL_22;
  }
  *((_BYTE *)a1 + 84) = 1;
  v5 >>= 1;
LABEL_22:
  *((_DWORD *)a1 + 20) = v5;
  return 1;
}


//----- (000000014021CB2C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_512(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rsi
  bool v4; // al
  unsigned int v5; // ecx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v2 || (v3 = *((_QWORD *)v2 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    v5 = 6;
    goto LABEL_6;
  }
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = v3;
  v5 = *v2;
  if ( !v4 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v5 >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = v5;
  return 1;
}


//----- (000000014021CBA8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_513(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rsi
  bool v4; // al
  unsigned int v5; // ecx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v2 || (v3 = *((_QWORD *)v2 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    v5 = 6;
    goto LABEL_6;
  }
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = v3;
  v5 = *v2;
  if ( !v4 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v5 >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = v5;
  return 1;
}


//----- (000000014021CC24) ----------------------------------------------------
char            sub_14021CC24(_QWORD *a1)
{
  unsigned __int16 *v1; // rdi
  __int64 v3; // rsi
  bool v4; // al
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int16 v9; // r9
  _QWORD *v10; // rdx
  char v11; // al

  v1 = nullptr;
  if ( *((_DWORD *)a1 + 287) != 1 )
  {
    v6 = *((int *)a1 + 891);
    if ( (unsigned int)v6 > 0x63 )
    {
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
    }
    v7 = 3 * v6;
    if ( *((_DWORD *)a1 + 286) == 1 )
    {
      v8 = *((_DWORD *)a1 + 15);
      v9 = *((_WORD *)a1 + 33);
      v10 = &a1[v7 + 145];
      if ( *(_DWORD *)v10 )
      {
        if ( !sub_1402150C4(a1, (__int64)v10, 3, v9, v8) )
        {
          *errno_sr() = 22;
          sub_14024CF6C();
          v11 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        *(_DWORD *)v10 = 3;
        *((_WORD *)v10 + 2) = v9;
        *((_DWORD *)v10 + 4) = v8;
      }
    }
    else
    {
      v1 = *(unsigned __int16 **)a1[v7 + 146];
    }
    v11 = 1;
LABEL_18:
    if ( v11 )
      goto LABEL_3;
    return 0;
  }
  a1[4] += 8LL;
  v1 = *(unsigned __int16 **)(a1[4] - 8LL);
LABEL_3:
  if ( *((_DWORD *)a1 + 286) == 1 && *((_DWORD *)a1 + 287) != 1 )
    return 1;
  if ( !v1 || (v3 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v5 = 6;
    a1[9] = (uint64)(uintptr_t)("(null)");
    goto LABEL_21;
  }
  v4 = sub_140211A94(*a1, *((_WORD *)a1 + 33), *((_DWORD *)a1 + 15));
  a1[9] = v3;
  v5 = *v1;
  if ( !v4 )
  {
LABEL_21:
    *((_BYTE *)a1 + 84) = 0;
    goto LABEL_22;
  }
  *((_BYTE *)a1 + 84) = 1;
  v5 >>= 1;
LABEL_22:
  *((_DWORD *)a1 + 20) = v5;
  return 1;
}


//----- (000000014021CD64) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_514(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rsi
  bool v4; // al
  unsigned int v5; // ecx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v2 || (v3 = *((_QWORD *)v2 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    v5 = 6;
    goto LABEL_6;
  }
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = v3;
  v5 = *v2;
  if ( !v4 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v5 >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = v5;
  return 1;
}


//----- (000000014021CDE0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_515(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  char v17; // r10
  _BYTE *v18; // rdx
  char *v19; // rdx
  char v20; // al
  char v21; // cl
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (v2 = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  v12 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(unsigned __int8 **)(a1 + 72);
    v15 = *(_QWORD **)v13;
    v11 = *v14;
    v16 = *(_QWORD *)(*(_QWORD *)v13 + 272LL);
    if ( *(_BYTE *)(v11 + v16) != 101 )
    {
      do
        v11 = *++v14;
      while ( (*(_BYTE *)(*v15 + 2 * v11) & 4) != 0 );
    }
    v17 = *(_BYTE *)((unsigned __int8)v11 + v16);
    if ( v17 == 120 )
      LOBYTE(v11) = v14[2];
    v12 = v15[31];
    v18 = v14 + 2;
    if ( v17 != 120 )
      v18 = v14;
    *v18 = **(_BYTE **)v12;
    v19 = v18 + 1;
    do
    {
      v20 = *v19;
      v21 = v11;
      *v19++ = v11;
      LOBYTE(v11) = v20;
    }
    while ( v21 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v12) = v23 - 73;
  if ( (unsigned __int8)v12 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v12) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021CF9E: variable 'v11' is possibly undefined
// 14021CFCA: variable 'v12' is possibly undefined

//----- (000000014021CFF8) ----------------------------------------------------
char            sub_14021CFF8(__int64 a1)
{
  int v3; // eax
  char *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  char v17; // r10
  _BYTE *v18; // rdx
  char *v19; // rdx
  char v20; // al
  char v21; // cl
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_140223614(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        if ( *(_BYTE *)(a1 + 65) == 103 || (v3 = 0, *(_BYTE *)(a1 + 65) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v3 = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = v3;
    }
    v4 = (char *)(a1 + 88);
    v5 = 512;
    if ( !sub_14020EAD8(a1 + 88, v3 + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(v6) = 512;
      *(_DWORD *)(a1 + 56) = v6 - 349;
    }
    v7 = *(_QWORD *)(a1 + 1120);
    if ( !v7 )
      v7 = a1 + 88;
    v26 = 0;
    *(_QWORD *)(a1 + 72) = v7;
    if ( sub_140210BC4(a1, &v26) )
    {
      v8 = *(_QWORD *)(a1 + 1120);
      if ( v8 )
        v9 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        v9 = 512;
      if ( v8 )
      {
        v4 = *(char **)(a1 + 1120);
        v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
        v5 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v10 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&v26,
        v4,
        v5,
        v10,
        v9,
        *(char *)(a1 + 65),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      v12 = *(_DWORD *)(a1 + 48) >> 5;
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = *(unsigned __int8 **)(a1 + 72);
        v15 = *(_QWORD **)v13;
        v11 = *v14;
        v16 = *(_QWORD *)(*(_QWORD *)v13 + 272LL);
        if ( *(_BYTE *)(v11 + v16) != 101 )
        {
          do
            v11 = *++v14;
          while ( (*(_BYTE *)(*v15 + 2 * v11) & 4) != 0 );
        }
        v17 = *(_BYTE *)((unsigned __int8)v11 + v16);
        if ( v17 == 120 )
          LOBYTE(v11) = v14[2];
        v12 = v15[31];
        v18 = v14 + 2;
        if ( v17 != 120 )
          v18 = v14;
        *v18 = **(_BYTE **)v12;
        v19 = v18 + 1;
        do
        {
          v20 = *v19;
          v21 = v11;
          *v19++ = v11;
          LOBYTE(v11) = v20;
        }
        while ( v21 );
      }
      if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
      {
        v12 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
      }
      v22 = *(char **)(a1 + 72);
      v23 = *v22;
      if ( *v22 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
        v23 = *v22;
      }
      LOBYTE(v12) = v23 - 73;
      if ( (unsigned __int8)v12 <= 0x25u )
      {
        v24 = 0x2100000021LL;
        if ( _bittest64(&v24, v12) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_BYTE *)(a1 + 65) = 115;
        }
      }
      v25 = -1;
      do
        ++v25;
      while ( v22[v25] );
      *(_DWORD *)(a1 + 80) = v25;
      return 1;
    }
  }
  return 0;
}

// 14021D1E9: variable 'v11' is possibly undefined
// 14021D215: variable 'v12' is possibly undefined

//----- (000000014021D24C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_516(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  char v17; // r10
  _BYTE *v18; // rdx
  char *v19; // rdx
  char v20; // al
  char v21; // cl
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (v2 = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  v12 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(unsigned __int8 **)(a1 + 72);
    v15 = *(_QWORD **)v13;
    v11 = *v14;
    v16 = *(_QWORD *)(*(_QWORD *)v13 + 272LL);
    if ( *(_BYTE *)(v11 + v16) != 101 )
    {
      do
        v11 = *++v14;
      while ( (*(_BYTE *)(*v15 + 2 * v11) & 4) != 0 );
    }
    v17 = *(_BYTE *)((unsigned __int8)v11 + v16);
    if ( v17 == 120 )
      LOBYTE(v11) = v14[2];
    v12 = v15[31];
    v18 = v14 + 2;
    if ( v17 != 120 )
      v18 = v14;
    *v18 = **(_BYTE **)v12;
    v19 = v18 + 1;
    do
    {
      v20 = *v19;
      v21 = v11;
      *v19++ = v11;
      LOBYTE(v11) = v20;
    }
    while ( v21 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v12) = v23 - 73;
  if ( (unsigned __int8)v12 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v12) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021D40A: variable 'v11' is possibly undefined
// 14021D436: variable 'v12' is possibly undefined

//----- (000000014021D464) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_517(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  char v17; // r10
  _BYTE *v18; // rdx
  char *v19; // rdx
  char v20; // al
  char v21; // cl
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (v2 = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  v12 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(unsigned __int8 **)(a1 + 72);
    v15 = *(_QWORD **)v13;
    v11 = *v14;
    v16 = *(_QWORD *)(*(_QWORD *)v13 + 272LL);
    if ( *(_BYTE *)(v11 + v16) != 101 )
    {
      do
        v11 = *++v14;
      while ( (*(_BYTE *)(*v15 + 2 * v11) & 4) != 0 );
    }
    v17 = *(_BYTE *)((unsigned __int8)v11 + v16);
    if ( v17 == 120 )
      LOBYTE(v11) = v14[2];
    v12 = v15[31];
    v18 = v14 + 2;
    if ( v17 != 120 )
      v18 = v14;
    *v18 = **(_BYTE **)v12;
    v19 = v18 + 1;
    do
    {
      v20 = *v19;
      v21 = v11;
      *v19++ = v11;
      LOBYTE(v11) = v20;
    }
    while ( v21 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v12) = v23 - 73;
  if ( (unsigned __int8)v12 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v12) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021D622: variable 'v11' is possibly undefined
// 14021D64E: variable 'v12' is possibly undefined

//----- (000000014021D67C) ----------------------------------------------------
char            sub_14021D67C(__int64 a1)
{
  int v3; // eax
  char *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  char v17; // r10
  _BYTE *v18; // rdx
  char *v19; // rdx
  char v20; // al
  char v21; // cl
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_1402236B0(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        if ( *(_BYTE *)(a1 + 65) == 103 || (v3 = 0, *(_BYTE *)(a1 + 65) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v3 = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = v3;
    }
    v4 = (char *)(a1 + 88);
    v5 = 512;
    if ( !sub_14020EAD8(a1 + 88, v3 + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(v6) = 512;
      *(_DWORD *)(a1 + 56) = v6 - 349;
    }
    v7 = *(_QWORD *)(a1 + 1120);
    if ( !v7 )
      v7 = a1 + 88;
    v26 = 0;
    *(_QWORD *)(a1 + 72) = v7;
    if ( sub_140210C80(a1, &v26) )
    {
      v8 = *(_QWORD *)(a1 + 1120);
      if ( v8 )
        v9 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        v9 = 512;
      if ( v8 )
      {
        v4 = *(char **)(a1 + 1120);
        v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
        v5 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v10 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&v26,
        v4,
        v5,
        v10,
        v9,
        *(char *)(a1 + 65),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      v12 = *(_DWORD *)(a1 + 48) >> 5;
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = *(unsigned __int8 **)(a1 + 72);
        v15 = *(_QWORD **)v13;
        v11 = *v14;
        v16 = *(_QWORD *)(*(_QWORD *)v13 + 272LL);
        if ( *(_BYTE *)(v11 + v16) != 101 )
        {
          do
            v11 = *++v14;
          while ( (*(_BYTE *)(*v15 + 2 * v11) & 4) != 0 );
        }
        v17 = *(_BYTE *)((unsigned __int8)v11 + v16);
        if ( v17 == 120 )
          LOBYTE(v11) = v14[2];
        v12 = v15[31];
        v18 = v14 + 2;
        if ( v17 != 120 )
          v18 = v14;
        *v18 = **(_BYTE **)v12;
        v19 = v18 + 1;
        do
        {
          v20 = *v19;
          v21 = v11;
          *v19++ = v11;
          LOBYTE(v11) = v20;
        }
        while ( v21 );
      }
      if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
      {
        v12 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
      }
      v22 = *(char **)(a1 + 72);
      v23 = *v22;
      if ( *v22 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
        v23 = *v22;
      }
      LOBYTE(v12) = v23 - 73;
      if ( (unsigned __int8)v12 <= 0x25u )
      {
        v24 = 0x2100000021LL;
        if ( _bittest64(&v24, v12) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_BYTE *)(a1 + 65) = 115;
        }
      }
      v25 = -1;
      do
        ++v25;
      while ( v22[v25] );
      *(_DWORD *)(a1 + 80) = v25;
      return 1;
    }
  }
  return 0;
}

// 14021D86D: variable 'v11' is possibly undefined
// 14021D899: variable 'v12' is possibly undefined

//----- (000000014021D8D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_518(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  char v17; // r10
  _BYTE *v18; // rdx
  char *v19; // rdx
  char v20; // al
  char v21; // cl
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (v2 = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  v12 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(unsigned __int8 **)(a1 + 72);
    v15 = *(_QWORD **)v13;
    v11 = *v14;
    v16 = *(_QWORD *)(*(_QWORD *)v13 + 272LL);
    if ( *(_BYTE *)(v11 + v16) != 101 )
    {
      do
        v11 = *++v14;
      while ( (*(_BYTE *)(*v15 + 2 * v11) & 4) != 0 );
    }
    v17 = *(_BYTE *)((unsigned __int8)v11 + v16);
    if ( v17 == 120 )
      LOBYTE(v11) = v14[2];
    v12 = v15[31];
    v18 = v14 + 2;
    if ( v17 != 120 )
      v18 = v14;
    *v18 = **(_BYTE **)v12;
    v19 = v18 + 1;
    do
    {
      v20 = *v19;
      v21 = v11;
      *v19++ = v11;
      LOBYTE(v11) = v20;
    }
    while ( v21 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v12) = v23 - 73;
  if ( (unsigned __int8)v12 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v12) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021DA8E: variable 'v11' is possibly undefined
// 14021DABA: variable 'v12' is possibly undefined

//----- (000000014021DAE8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_519(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // r10
  _BYTE *v17; // rdx
  char *v18; // rdx
  char v19; // al
  char v20; // cl
  unsigned __int64 v21; // rax
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (v2 = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v12 = *(__int64 **)(a1 + 8);
    v13 = *(unsigned __int8 **)(a1 + 72);
    v14 = *v12;
    v11 = *v13;
    v15 = *(_QWORD *)(*v12 + 272);
    if ( *(_BYTE *)(v11 + v15) != 101 )
    {
      do
        v11 = *++v13;
      while ( (*(_BYTE *)(*(_QWORD *)v14 + 2 * v11) & 4) != 0 );
    }
    v16 = *(_BYTE *)((unsigned __int8)v11 + v15);
    if ( v16 == 120 )
      LOBYTE(v11) = v13[2];
    v17 = v13 + 2;
    if ( v16 != 120 )
      v17 = v13;
    *v17 = ***(_BYTE ***)(v14 + 248);
    v18 = v17 + 1;
    do
    {
      v19 = *v18;
      v20 = v11;
      *v18++ = v11;
      LOBYTE(v11) = v19;
    }
    while ( v20 );
  }
  v21 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(v21) = v21 - 71;
  if ( (v21 & 0xFFDF) == 0 )
  {
    v21 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v21) = v23 - 73;
  if ( (unsigned __int8)v21 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v21) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021DCBF: variable 'v11' is possibly undefined
// 14021DCEB: variable 'v21' is possibly undefined

//----- (000000014021DD24) ----------------------------------------------------
char            sub_14021DD24(__int64 a1)
{
  int v3; // eax
  char *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // r10
  _BYTE *v17; // rdx
  char *v18; // rdx
  char v19; // al
  char v20; // cl
  unsigned __int64 v21; // rax
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_14022374C(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        if ( *(_WORD *)(a1 + 66) == 103 || (v3 = 0, *(_WORD *)(a1 + 66) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v3 = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = v3;
    }
    v4 = (char *)(a1 + 88);
    v5 = 512;
    if ( !sub_14020EAD8(a1 + 88, v3 + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(v6) = 512;
      *(_DWORD *)(a1 + 56) = v6 - 349;
    }
    v7 = *(_QWORD *)(a1 + 1120);
    if ( !v7 )
      v7 = a1 + 88;
    v26 = 0;
    *(_QWORD *)(a1 + 72) = v7;
    if ( sub_140210D3C(a1, &v26) )
    {
      v8 = *(_QWORD *)(a1 + 1120);
      if ( v8 )
        v9 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        v9 = 512;
      if ( v8 )
      {
        v4 = *(char **)(a1 + 1120);
        v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
        v5 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v10 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&v26,
        v4,
        v5,
        v10,
        v9,
        *(char *)(a1 + 66),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        v12 = *(__int64 **)(a1 + 8);
        v13 = *(unsigned __int8 **)(a1 + 72);
        v14 = *v12;
        v11 = *v13;
        v15 = *(_QWORD *)(*v12 + 272);
        if ( *(_BYTE *)(v11 + v15) != 101 )
        {
          do
            v11 = *++v13;
          while ( (*(_BYTE *)(*(_QWORD *)v14 + 2 * v11) & 4) != 0 );
        }
        v16 = *(_BYTE *)((unsigned __int8)v11 + v15);
        if ( v16 == 120 )
          LOBYTE(v11) = v13[2];
        v17 = v13 + 2;
        if ( v16 != 120 )
          v17 = v13;
        *v17 = ***(_BYTE ***)(v14 + 248);
        v18 = v17 + 1;
        do
        {
          v19 = *v18;
          v20 = v11;
          *v18++ = v11;
          LOBYTE(v11) = v19;
        }
        while ( v20 );
      }
      v21 = *(unsigned __int16 *)(a1 + 66);
      LOWORD(v21) = v21 - 71;
      if ( (v21 & 0xFFDF) == 0 )
      {
        v21 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
      }
      v22 = *(char **)(a1 + 72);
      v23 = *v22;
      if ( *v22 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
        v23 = *v22;
      }
      LOBYTE(v21) = v23 - 73;
      if ( (unsigned __int8)v21 <= 0x25u )
      {
        v24 = 0x2100000021LL;
        if ( _bittest64(&v24, v21) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_WORD *)(a1 + 66) = 115;
        }
      }
      v25 = -1;
      do
        ++v25;
      while ( v22[v25] );
      *(_DWORD *)(a1 + 80) = v25;
      return 1;
    }
  }
  return 0;
}

// 14021DF2E: variable 'v11' is possibly undefined
// 14021DF5A: variable 'v21' is possibly undefined

//----- (000000014021DF9C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_520(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // r10
  _BYTE *v17; // rdx
  char *v18; // rdx
  char v19; // al
  char v20; // cl
  unsigned __int64 v21; // rax
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (v2 = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v12 = *(__int64 **)(a1 + 8);
    v13 = *(unsigned __int8 **)(a1 + 72);
    v14 = *v12;
    v11 = *v13;
    v15 = *(_QWORD *)(*v12 + 272);
    if ( *(_BYTE *)(v11 + v15) != 101 )
    {
      do
        v11 = *++v13;
      while ( (*(_BYTE *)(*(_QWORD *)v14 + 2 * v11) & 4) != 0 );
    }
    v16 = *(_BYTE *)((unsigned __int8)v11 + v15);
    if ( v16 == 120 )
      LOBYTE(v11) = v13[2];
    v17 = v13 + 2;
    if ( v16 != 120 )
      v17 = v13;
    *v17 = ***(_BYTE ***)(v14 + 248);
    v18 = v17 + 1;
    do
    {
      v19 = *v18;
      v20 = v11;
      *v18++ = v11;
      LOBYTE(v11) = v19;
    }
    while ( v20 );
  }
  v21 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(v21) = v21 - 71;
  if ( (v21 & 0xFFDF) == 0 )
  {
    v21 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v21) = v23 - 73;
  if ( (unsigned __int8)v21 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v21) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021E173: variable 'v11' is possibly undefined
// 14021E19F: variable 'v21' is possibly undefined

//----- (000000014021E1D8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_521(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // r10
  _BYTE *v17; // rdx
  char *v18; // rdx
  char v19; // al
  char v20; // cl
  unsigned __int64 v21; // rax
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (v2 = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v12 = *(__int64 **)(a1 + 8);
    v13 = *(unsigned __int8 **)(a1 + 72);
    v14 = *v12;
    v11 = *v13;
    v15 = *(_QWORD *)(*v12 + 272);
    if ( *(_BYTE *)(v11 + v15) != 101 )
    {
      do
        v11 = *++v13;
      while ( (*(_BYTE *)(*(_QWORD *)v14 + 2 * v11) & 4) != 0 );
    }
    v16 = *(_BYTE *)((unsigned __int8)v11 + v15);
    if ( v16 == 120 )
      LOBYTE(v11) = v13[2];
    v17 = v13 + 2;
    if ( v16 != 120 )
      v17 = v13;
    *v17 = ***(_BYTE ***)(v14 + 248);
    v18 = v17 + 1;
    do
    {
      v19 = *v18;
      v20 = v11;
      *v18++ = v11;
      LOBYTE(v11) = v19;
    }
    while ( v20 );
  }
  v21 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(v21) = v21 - 71;
  if ( (v21 & 0xFFDF) == 0 )
  {
    v21 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v21) = v23 - 73;
  if ( (unsigned __int8)v21 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v21) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021E3AF: variable 'v11' is possibly undefined
// 14021E3DB: variable 'v21' is possibly undefined

//----- (000000014021E414) ----------------------------------------------------
char            sub_14021E414(__int64 a1)
{
  int v3; // eax
  char *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // r10
  _BYTE *v17; // rdx
  char *v18; // rdx
  char v19; // al
  char v20; // cl
  unsigned __int64 v21; // rax
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_1402237EC(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        if ( *(_WORD *)(a1 + 66) == 103 || (v3 = 0, *(_WORD *)(a1 + 66) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v3 = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = v3;
    }
    v4 = (char *)(a1 + 88);
    v5 = 512;
    if ( !sub_14020EAD8(a1 + 88, v3 + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(v6) = 512;
      *(_DWORD *)(a1 + 56) = v6 - 349;
    }
    v7 = *(_QWORD *)(a1 + 1120);
    if ( !v7 )
      v7 = a1 + 88;
    v26 = 0;
    *(_QWORD *)(a1 + 72) = v7;
    if ( sub_140210DF8(a1, &v26) )
    {
      v8 = *(_QWORD *)(a1 + 1120);
      if ( v8 )
        v9 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        v9 = 512;
      if ( v8 )
      {
        v4 = *(char **)(a1 + 1120);
        v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
        v5 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v10 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&v26,
        v4,
        v5,
        v10,
        v9,
        *(char *)(a1 + 66),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        v12 = *(__int64 **)(a1 + 8);
        v13 = *(unsigned __int8 **)(a1 + 72);
        v14 = *v12;
        v11 = *v13;
        v15 = *(_QWORD *)(*v12 + 272);
        if ( *(_BYTE *)(v11 + v15) != 101 )
        {
          do
            v11 = *++v13;
          while ( (*(_BYTE *)(*(_QWORD *)v14 + 2 * v11) & 4) != 0 );
        }
        v16 = *(_BYTE *)((unsigned __int8)v11 + v15);
        if ( v16 == 120 )
          LOBYTE(v11) = v13[2];
        v17 = v13 + 2;
        if ( v16 != 120 )
          v17 = v13;
        *v17 = ***(_BYTE ***)(v14 + 248);
        v18 = v17 + 1;
        do
        {
          v19 = *v18;
          v20 = v11;
          *v18++ = v11;
          LOBYTE(v11) = v19;
        }
        while ( v20 );
      }
      v21 = *(unsigned __int16 *)(a1 + 66);
      LOWORD(v21) = v21 - 71;
      if ( (v21 & 0xFFDF) == 0 )
      {
        v21 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
      }
      v22 = *(char **)(a1 + 72);
      v23 = *v22;
      if ( *v22 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
        v23 = *v22;
      }
      LOBYTE(v21) = v23 - 73;
      if ( (unsigned __int8)v21 <= 0x25u )
      {
        v24 = 0x2100000021LL;
        if ( _bittest64(&v24, v21) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_WORD *)(a1 + 66) = 115;
        }
      }
      v25 = -1;
      do
        ++v25;
      while ( v22[v25] );
      *(_DWORD *)(a1 + 80) = v25;
      return 1;
    }
  }
  return 0;
}

// 14021E61E: variable 'v11' is possibly undefined
// 14021E64A: variable 'v21' is possibly undefined

//----- (000000014021E68C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_522(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // r10
  _BYTE *v17; // rdx
  char *v18; // rdx
  char v19; // al
  char v20; // cl
  unsigned __int64 v21; // rax
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (v2 = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = (char *)(v8 + (*(_QWORD *)(a1 + 1112) >> 1));
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&v27,
    (char *)v3,
    v5,
    v10,
    v9,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v12 = *(__int64 **)(a1 + 8);
    v13 = *(unsigned __int8 **)(a1 + 72);
    v14 = *v12;
    v11 = *v13;
    v15 = *(_QWORD *)(*v12 + 272);
    if ( *(_BYTE *)(v11 + v15) != 101 )
    {
      do
        v11 = *++v13;
      while ( (*(_BYTE *)(*(_QWORD *)v14 + 2 * v11) & 4) != 0 );
    }
    v16 = *(_BYTE *)((unsigned __int8)v11 + v15);
    if ( v16 == 120 )
      LOBYTE(v11) = v13[2];
    v17 = v13 + 2;
    if ( v16 != 120 )
      v17 = v13;
    *v17 = ***(_BYTE ***)(v14 + 248);
    v18 = v17 + 1;
    do
    {
      v19 = *v18;
      v20 = v11;
      *v18++ = v11;
      LOBYTE(v11) = v19;
    }
    while ( v20 );
  }
  v21 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(v21) = v21 - 71;
  if ( (v21 & 0xFFDF) == 0 )
  {
    v21 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++v22);
    v23 = *v22;
  }
  LOBYTE(v21) = v23 - 73;
  if ( (unsigned __int8)v21 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v21) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

// 14021E863: variable 'v11' is possibly undefined
// 14021E88F: variable 'v21' is possibly undefined

//----- (000000014021E928) ----------------------------------------------------
char            sub_14021E928(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  bool v4; // al
       struct DLGTEMPLATE *v5; // rdx
  __int64 v6; // r8
  _BYTE *v7; // r8
  char result; // al
  __int64 v9; // rdx

  v2 = *(_DWORD *)(a1 + 60) - 2;
  if ( !v2 )
  {
    v4 = 0;
LABEL_7:
    if ( v4 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      v5 = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v6 = 512;
        v5 = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           v5,
                           (struct CWnd *)v6,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v3 = v2 - 1;
  if ( !v3 || v3 == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  v7 = *(_BYTE **)(a1 + 1120);
  if ( !v7 )
    v7 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *v7 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  v9 = *(_QWORD *)(a1 + 1120);
  if ( !v9 )
    v9 = a1 + 88;
  *(_QWORD *)(a1 + 72) = v9;
  return result;
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (000000014021E9E4) ----------------------------------------------------
char            sub_14021E9E4(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  bool v4; // al
       struct DLGTEMPLATE *v5; // rdx
  __int64 v6; // r8
  _BYTE *v7; // rdx
  __int64 v9; // rcx
  unsigned __int16 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 60) - 2;
  if ( !v2 )
  {
    v4 = 0;
LABEL_7:
    if ( v4 )
      goto LABEL_8;
    goto LABEL_16;
  }
  v3 = v2 - 1;
  if ( !v3 || v3 == 9 )
  {
LABEL_8:
    v10 = 0;
    if ( sub_140211594(a1, &v10) )
    {
      if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
      {
        v5 = *(     struct DLGTEMPLATE **)(a1 + 1120);
        if ( v5 )
        {
          v6 = *(_QWORD *)(a1 + 1112) >> 1;
        }
        else
        {
          v6 = 512;
          v5 = (     struct DLGTEMPLATE *)(a1 + 88);
        }
        if ( (unsigned int)CDialog__CreateIndirect((CDialog *)(a1 + 80), v5, (struct CWnd *)v6, (void *)v10) )
          *(_BYTE *)(a1 + 64) = 1;
        goto LABEL_23;
      }
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_16:
  v7 = *(_BYTE **)(a1 + 1120);
  if ( !v7 )
    v7 = (_BYTE *)(a1 + 88);
  if ( !sub_14020F604(a1, v7) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    *(_DWORD *)(a1 + 80) = 1;
LABEL_23:
    v9 = *(_QWORD *)(a1 + 1120);
    if ( !v9 )
      v9 = a1 + 88;
    *(_QWORD *)(a1 + 72) = v9;
  }
  return 1;
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (000000014021EAE4) ----------------------------------------------------
char            sub_14021EAE4(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  bool v4; // al
       struct DLGTEMPLATE *v5; // rdx
  __int64 v6; // r8
  _BYTE *v7; // r8
  char result; // al
  __int64 v9; // rdx

  v2 = *(_DWORD *)(a1 + 60) - 2;
  if ( !v2 )
  {
    v4 = 0;
LABEL_7:
    if ( v4 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      v5 = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v6 = 512;
        v5 = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           v5,
                           (struct CWnd *)v6,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v3 = v2 - 1;
  if ( !v3 || v3 == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  v7 = *(_BYTE **)(a1 + 1120);
  if ( !v7 )
    v7 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *v7 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  v9 = *(_QWORD *)(a1 + 1120);
  if ( !v9 )
    v9 = a1 + 88;
  *(_QWORD *)(a1 + 72) = v9;
  return result;
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (000000014021EBA0) ----------------------------------------------------
char            sub_14021EBA0(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  bool v4; // al
       struct DLGTEMPLATE *v5; // rdx
  __int64 v6; // r8
  _BYTE *v7; // r8
  char result; // al
  __int64 v9; // rdx

  v2 = *(_DWORD *)(a1 + 60) - 2;
  if ( !v2 )
  {
    v4 = 0;
LABEL_7:
    if ( v4 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      v5 = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v6 = 512;
        v5 = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           v5,
                           (struct CWnd *)v6,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v3 = v2 - 1;
  if ( !v3 || v3 == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  v7 = *(_BYTE **)(a1 + 1120);
  if ( !v7 )
    v7 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *v7 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  v9 = *(_QWORD *)(a1 + 1120);
  if ( !v9 )
    v9 = a1 + 88;
  *(_QWORD *)(a1 + 72) = v9;
  return result;
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (000000014021EC5C) ----------------------------------------------------
char            sub_14021EC5C(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  bool v4; // al
       struct DLGTEMPLATE *v5; // rdx
  __int64 v6; // r8
  _BYTE *v7; // rdx
  __int64 v9; // rcx
  unsigned __int16 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 60) - 2;
  if ( !v2 )
  {
    v4 = 0;
LABEL_7:
    if ( v4 )
      goto LABEL_8;
    goto LABEL_16;
  }
  v3 = v2 - 1;
  if ( !v3 || v3 == 9 )
  {
LABEL_8:
    v10 = 0;
    if ( sub_140211650(a1, &v10) )
    {
      if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
      {
        v5 = *(     struct DLGTEMPLATE **)(a1 + 1120);
        if ( v5 )
        {
          v6 = *(_QWORD *)(a1 + 1112) >> 1;
        }
        else
        {
          v6 = 512;
          v5 = (     struct DLGTEMPLATE *)(a1 + 88);
        }
        if ( (unsigned int)CDialog__CreateIndirect((CDialog *)(a1 + 80), v5, (struct CWnd *)v6, (void *)v10) )
          *(_BYTE *)(a1 + 64) = 1;
        goto LABEL_23;
      }
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_16:
  v7 = *(_BYTE **)(a1 + 1120);
  if ( !v7 )
    v7 = (_BYTE *)(a1 + 88);
  if ( !sub_14020F6BC(a1, v7) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    *(_DWORD *)(a1 + 80) = 1;
LABEL_23:
    v9 = *(_QWORD *)(a1 + 1120);
    if ( !v9 )
      v9 = a1 + 88;
    *(_QWORD *)(a1 + 72) = v9;
  }
  return 1;
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (000000014021ED5C) ----------------------------------------------------
char            sub_14021ED5C(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  bool v4; // al
       struct DLGTEMPLATE *v5; // rdx
  __int64 v6; // r8
  _BYTE *v7; // r8
  char result; // al
  __int64 v9; // rdx

  v2 = *(_DWORD *)(a1 + 60) - 2;
  if ( !v2 )
  {
    v4 = 0;
LABEL_7:
    if ( v4 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      v5 = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v6 = 512;
        v5 = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           v5,
                           (struct CWnd *)v6,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v3 = v2 - 1;
  if ( !v3 || v3 == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  v7 = *(_BYTE **)(a1 + 1120);
  if ( !v7 )
    v7 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *v7 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  v9 = *(_QWORD *)(a1 + 1120);
  if ( !v9 )
    v9 = a1 + 88;
  *(_QWORD *)(a1 + 72) = v9;
  return result;
}

// 1402543A8: using guessed type __int64 __fastcall CDialog::CreateIndirect(CDialog *__hidden this, const struct DLGTEMPLATE *, struct CWnd *, void *);

//----- (000000014021EE18) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_523(__int64 a1)
{
  __int64 v1; // rdi
  __int16 v3; // si
  bool v4; // al
  sr_anon_115 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  char result; // al
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+31h] [rbp+9h]

  *(_BYTE *)(a1 + 84) = 1;
  v1 = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  v5 = *(sr_anon_115 **)(v1 + 1032);
  if ( v4 )
  {
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    *(_WORD *)v5 = v3;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v9 = v3;
    v10 = 0;
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    if ( (int)mbtowc_l(v5, (sr_anon_49 *)&v9, (char *)*(int *)(*(_QWORD *)v6 + 8LL), (struct __crt_locale_pointers *)v6) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  v7 = *(_QWORD *)(v1 + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !v7 )
    v7 = v1;
  *(_QWORD *)(a1 + 72) = v7;
  return result;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014021EEC0) ----------------------------------------------------
char            sub_14021EEC0(__int64 a1)
{
  char result; // al
  bool v3; // al
  sr_anon_115 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 84) = 1;
  v7 = 0;
  result = sub_14021170C(a1, &v7);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
      v4 = *(sr_anon_115 **)(a1 + 1120);
      if ( v3 )
      {
        if ( !v4 )
          v4 = (sr_anon_115 *)(a1 + 88);
        *(_WORD *)v4 = v7;
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 8);
        HIBYTE(v7) = 0;
        if ( !v4 )
          v4 = (sr_anon_115 *)(a1 + 88);
        if ( (int)mbtowc_l(v4, (sr_anon_49 *)&v7, (char *)*(int *)(*(_QWORD *)v5 + 8LL), (struct __crt_locale_pointers *)v5) < 0 )
          *(_BYTE *)(a1 + 64) = 1;
      }
      v6 = *(_QWORD *)(a1 + 1120);
      *(_DWORD *)(a1 + 80) = 1;
      if ( !v6 )
        v6 = a1 + 88;
      *(_QWORD *)(a1 + 72) = v6;
    }
    return 1;
  }
  return result;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014021EF8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_524(__int64 a1)
{
  __int64 v1; // rdi
  __int16 v3; // si
  bool v4; // al
  sr_anon_115 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  char result; // al
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+31h] [rbp+9h]

  *(_BYTE *)(a1 + 84) = 1;
  v1 = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  v5 = *(sr_anon_115 **)(v1 + 1032);
  if ( v4 )
  {
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    *(_WORD *)v5 = v3;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v9 = v3;
    v10 = 0;
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    if ( (int)mbtowc_l(v5, (sr_anon_49 *)&v9, (char *)*(int *)(*(_QWORD *)v6 + 8LL), (struct __crt_locale_pointers *)v6) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  v7 = *(_QWORD *)(v1 + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !v7 )
    v7 = v1;
  *(_QWORD *)(a1 + 72) = v7;
  return result;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014021F034) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_525(__int64 a1)
{
  __int64 v1; // rdi
  __int16 v3; // si
  bool v4; // al
  sr_anon_115 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  char result; // al
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+31h] [rbp+9h]

  *(_BYTE *)(a1 + 84) = 1;
  v1 = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  v5 = *(sr_anon_115 **)(v1 + 1032);
  if ( v4 )
  {
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    *(_WORD *)v5 = v3;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v9 = v3;
    v10 = 0;
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    if ( (int)mbtowc_l(v5, (sr_anon_49 *)&v9, (char *)*(int *)(*(_QWORD *)v6 + 8LL), (struct __crt_locale_pointers *)v6) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  v7 = *(_QWORD *)(v1 + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !v7 )
    v7 = v1;
  *(_QWORD *)(a1 + 72) = v7;
  return result;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014021F0DC) ----------------------------------------------------
char            sub_14021F0DC(__int64 a1)
{
  char result; // al
  bool v3; // al
  sr_anon_115 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 84) = 1;
  v7 = 0;
  result = sub_1402117CC(a1, &v7);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
      v4 = *(sr_anon_115 **)(a1 + 1120);
      if ( v3 )
      {
        if ( !v4 )
          v4 = (sr_anon_115 *)(a1 + 88);
        *(_WORD *)v4 = v7;
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 8);
        HIBYTE(v7) = 0;
        if ( !v4 )
          v4 = (sr_anon_115 *)(a1 + 88);
        if ( (int)mbtowc_l(v4, (sr_anon_49 *)&v7, (char *)*(int *)(*(_QWORD *)v5 + 8LL), (struct __crt_locale_pointers *)v5) < 0 )
          *(_BYTE *)(a1 + 64) = 1;
      }
      v6 = *(_QWORD *)(a1 + 1120);
      *(_DWORD *)(a1 + 80) = 1;
      if ( !v6 )
        v6 = a1 + 88;
      *(_QWORD *)(a1 + 72) = v6;
    }
    return 1;
  }
  return result;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014021F1A8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_526(__int64 a1)
{
  __int64 v1; // rdi
  __int16 v3; // si
  bool v4; // al
  sr_anon_115 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  char result; // al
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+31h] [rbp+9h]

  *(_BYTE *)(a1 + 84) = 1;
  v1 = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  v5 = *(sr_anon_115 **)(v1 + 1032);
  if ( v4 )
  {
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    *(_WORD *)v5 = v3;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v9 = v3;
    v10 = 0;
    if ( !v5 )
      v5 = (sr_anon_115 *)v1;
    if ( (int)mbtowc_l(v5, (sr_anon_49 *)&v9, (char *)*(int *)(*(_QWORD *)v6 + 8LL), (struct __crt_locale_pointers *)v6) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  v7 = *(_QWORD *)(v1 + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !v7 )
    v7 = v1;
  *(_QWORD *)(a1 + 72) = v7;
  return result;
}

// 140253FC0: using guessed type __int64 __fastcall mbtowc_l(#115 *this, #49 *, char *);

//----- (000000014021F310) ----------------------------------------------------
char            sub_14021F310(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( v10 == 8 )
    unknown_libname_359(a1, v14, a2, a3);
  else
    unknown_libname_347(a1, v14, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}


//----- (000000014021F4D8) ----------------------------------------------------
char            sub_14021F4D8(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  int v15; // ecx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_15;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_15:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  v18 = 0;
  switch ( v10 )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020EC2C(a1, &v18);
      else
        v14 = sub_14020EF74(a1, &v18);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020F2BC(a1, &v18);
      else
        v14 = sub_14020F79C(a1, &v18);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020FAE4(a1, &v18);
      else
        v14 = sub_14020FE24(a1, &v18);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = unknown_libname_288(a1, &v18);
      else
        v14 = unknown_libname_296(a1, &v18);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  if ( !v14 )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    v15 = *(_DWORD *)(a1 + 48);
    v16 = v18;
    if ( (v15 & 0x10) != 0 && v18 < 0 )
    {
      v16 = -v18;
      v15 |= 0x40u;
      *(_DWORD *)(a1 + 48) = v15;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      v17 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = v15 & 0xFFFFFFF7;
      sub_14020EAD8(a1 + 88, v17);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !v16 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 0;
    if ( v10 == 8 )
      unknown_libname_360(a1, v16, a2, a3);
    else
      unknown_libname_348(a1, v16, a2, a3);
    if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
    {
      *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  return 1;
}


//----- (000000014021F6DC) ----------------------------------------------------
char            sub_14021F6DC(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( v10 == 8 )
    unknown_libname_361(a1, v14, a2, a3);
  else
    unknown_libname_349(a1, v14, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}


//----- (000000014021F8A4) ----------------------------------------------------
char            sub_14021F8A4(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( v10 == 8 )
    unknown_libname_362(a1, v14, a2, a3);
  else
    unknown_libname_350(a1, v14, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}


//----- (000000014021FA6C) ----------------------------------------------------
char            sub_14021FA6C(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  int v15; // ecx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_15;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_15:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  v18 = 0;
  switch ( v10 )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020ECE8(a1, &v18);
      else
        v14 = sub_14020F030(a1, &v18);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020F378(a1, &v18);
      else
        v14 = sub_14020F858(a1, &v18);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = sub_14020FBA0(a1, &v18);
      else
        v14 = sub_14020FEE0(a1, &v18);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v14 = unknown_libname_289(a1, &v18);
      else
        v14 = unknown_libname_297(a1, &v18);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  if ( !v14 )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    v15 = *(_DWORD *)(a1 + 48);
    v16 = v18;
    if ( (v15 & 0x10) != 0 && v18 < 0 )
    {
      v16 = -v18;
      v15 |= 0x40u;
      *(_DWORD *)(a1 + 48) = v15;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      v17 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = v15 & 0xFFFFFFF7;
      sub_14020EAD8(a1 + 88, v17);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !v16 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 0;
    if ( v10 == 8 )
      unknown_libname_363(a1, v16, a2, a3);
    else
      unknown_libname_351(a1, v16, a2, a3);
    if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
    {
      *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  return 1;
}


//----- (000000014021FC70) ----------------------------------------------------
char            sub_14021FC70(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( v10 == 8 )
    unknown_libname_364(a1, v14, a2, a3);
  else
    unknown_libname_352(a1, v14, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}


//----- (000000014021FE38) ----------------------------------------------------
char            sub_14021FE38(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_8;
    v8 = v13 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_14;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v20 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v20 & 0x10) == 0;
      v21 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int8 *)(v21 - 8);
      else
        v14 = *(char *)(v21 - 8);
      break;
    case 2LL:
      v18 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v18 & 0x10) == 0;
      v19 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned __int16 *)(v19 - 8);
      else
        v14 = *(__int16 *)(v19 - 8);
      break;
    case 4LL:
      v15 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v16 = (v15 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v16 )
        v14 = *(unsigned int *)(v17 - 8);
      else
        v14 = *(int *)(v17 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      sub_14024CF6C();
      return 0;
  }
  v22 = *(_DWORD *)(a1 + 48);
  if ( (v22 & 0x10) != 0 && v14 < 0 )
  {
    v14 = -v14;
    v22 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v22;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v23 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v22 & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, v23);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v14 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( v10 == 8 )
    unknown_libname_365(a1, v14, a2, a3);
  else
    unknown_libname_353(a1, v14, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
  {
    *(_QWORD *)(a1 + 72) -= 2LL;
    **(_WORD **)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}
