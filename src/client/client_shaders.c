#include "shared_client.h"


//----- (000000014004C4E0) ----------------------------------------------------
__int64            sub_14004C4E0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  char *v7; // rcx
  bool v8; // zf
  char v9; // al
  __int64 v10; // r8
  char *v11; // rdx
  char v12; // al
  char *v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rdx
  char *v18; // rcx
  char v19; // al
  __int64 v20; // r8
  char *v21; // rdx
  char v22; // al
  char *v23; // rcx
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rdx
  char *v28; // rcx
  char v29; // al
  __int64 v30; // r8
  char *v31; // rdx
  char v32; // al
  char *v33; // rcx
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // rsi
  char *v37; // rdx
  __int64 v38; // r8
  char v39; // al
  __int64 v40; // rcx
  char *v41; // rbx
  __int64 v42; // rcx
  char v43; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C4E0[592];
#define v45 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 0)) /* [rsp+0h] */
#define v46 (*(int (*))(void *)(sr_frame_14004C4E0 + 32)) /* [rsp+20h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 40)) /* [rsp+28h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 48)) /* [rsp+30h] */
#define v49 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 56)) /* [rsp+38h] */
#define v50 (*(_BYTE (*)[512])(void *)(sr_frame_14004C4E0 + 64)) /* [rsp+40h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 576)) /* [rsp+240h] */

  v4 = a1;
  v49 = a2;
  v47 = a3;
  v48 = a4;
  LOBYTE(dword_140404A6C[71807077]) = 0;
  if ( a2 )
  {
    v5 = 60LL * a1;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[v5 + 71737686], 1, (const char *const *)&v49, nullptr);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v7 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v7 == 0;
      while ( !v8 );
      v6 = 0;
      do
      {
        v9 = *((_BYTE *)&dword_140404A6C[71807077] + v6);
        v7[v6++] = v9;
      }
      while ( v9 );
    }
    unk_140404200(dword_140404A6C[v5 + 71737686], v6);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v11 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v11 == 0;
      while ( !v8 );
      v10 = 0;
      do
      {
        v12 = *((_BYTE *)&dword_140404A6C[71807077] + v10);
        v11[v10++] = v12;
      }
      while ( v12 );
    }
    unk_1404041F0(dword_140404A6C[v5 + 71737685], dword_140404A6C[v5 + 71737686], v10);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v13 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v13 == 0;
      while ( !v8 );
      v14 = 0;
      do
      {
        v15 = *((_BYTE *)&dword_140404A6C[71807077] + v14);
        v13[v14++] = v15;
      }
      while ( v15 );
    }
  }
  else if ( !a3 && !a4 )
  {
    return dword_140404A6C[60 * (__int64)a1 + 71737689];
  }
  if ( v47 )
  {
    v16 = 60 * v4;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[60 * v4 + 71737687], 1, (const char *const *)&v47, nullptr);
    unk_140404268(dword_140404A6C[60 * v4 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v18 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v18 == 0;
      while ( !v8 );
      v17 = 0;
      do
      {
        v19 = *((_BYTE *)&dword_140404A6C[71807077] + v17);
        v18[v17++] = v19;
      }
      while ( v19 );
    }
    unk_140404200(dword_140404A6C[v16 + 71737687], v17);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v21 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v21 == 0;
      while ( !v8 );
      v20 = 0;
      do
      {
        v22 = *((_BYTE *)&dword_140404A6C[71807077] + v20);
        v21[v20++] = v22;
      }
      while ( v22 );
    }
    unk_1404041F0(dword_140404A6C[v16 + 71737685], dword_140404A6C[v16 + 71737687], v20);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v23 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v23 == 0;
      while ( !v8 );
      v24 = 0;
      do
      {
        v25 = *((_BYTE *)&dword_140404A6C[71807077] + v24);
        v23[v24++] = v25;
      }
      while ( v25 );
    }
  }
  if ( v48 )
  {
    v26 = 60 * v4;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[60 * v4 + 71737688], 1, (const char *const *)&v48, nullptr);
    unk_140404268(dword_140404A6C[60 * v4 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v28 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v28 == 0;
      while ( !v8 );
      v27 = 0;
      do
      {
        v29 = *((_BYTE *)&dword_140404A6C[71807077] + v27);
        v28[v27++] = v29;
      }
      while ( v29 );
    }
    unk_140404200(dword_140404A6C[v26 + 71737688], v27);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v31 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v31 == 0;
      while ( !v8 );
      v30 = 0;
      do
      {
        v32 = *((_BYTE *)&dword_140404A6C[71807077] + v30);
        v31[v30++] = v32;
      }
      while ( v32 );
    }
    unk_1404041F0(dword_140404A6C[v26 + 71737685], dword_140404A6C[v26 + 71737688], v30);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v33 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v33 == 0;
      while ( !v8 );
      v34 = 0;
      do
      {
        v35 = *((_BYTE *)&dword_140404A6C[71807077] + v34);
        v33[v34++] = v35;
      }
      while ( v35 );
    }
  }
  v36 = 60 * v4;
  unk_1404042D0(dword_140404A6C[v36 + 71737685]);
  unk_140404268(dword_140404A6C[v36 + 71737685], 0x10000, &v46, &dword_140404A6C[71807077]);
  if ( v46 > 0 )
  {
    v37 = (char *)&dword_140404A6C[71741524] + 3;
    do
      v8 = *++v37 == 0;
    while ( !v8 );
    v38 = 0;
    do
    {
      v39 = *((_BYTE *)&dword_140404A6C[71807077] + v38);
      v37[v38++] = v39;
    }
    while ( v39 );
  }
  v40 = dword_140404A6C[v36 + 71737685];
  dword_140404A6C[v36 + 71737689] = 1;
  unk_140404380(v40, v37, v38);
  sub_140158AB0(v50, "\r\n\r\n");
  v41 = (char *)&dword_140404A6C[71741524] + 3;
  do
    v8 = *++v41 == 0;
  while ( !v8 );
  v42 = 0;
  do
  {
    v43 = v50[v42];
    v41[v42++] = v43;
  }
  while ( v43 );
  return dword_140404A6C[60 * (__int64)a1 + 71737689];
}
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

// 14004C5C5: variable 'v6' is possibly undefined
// 14004C61A: variable 'v10' is possibly undefined
// 14004C6D5: variable 'v17' is possibly undefined
// 14004C72A: variable 'v20' is possibly undefined
// 14004C7E5: variable 'v27' is possibly undefined
// 14004C83A: variable 'v30' is possibly undefined
// 14004C8EE: variable 'v37' is possibly undefined
// 14004C8EE: variable 'v38' is possibly undefined
// 1404041F0: using guessed type __int64 (__fastcall *unk_1404041F0)(_QWORD, _QWORD, _QWORD);
// 140404200: using guessed type __int64 (__fastcall *unk_140404200)(_QWORD, _QWORD);
// 140404268: using guessed type __int64 (__fastcall *unk_140404268)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404042D0: using guessed type __int64 (__fastcall *unk_1404042D0)(_QWORD);
// 1404042D8: using guessed type __int64 (__fastcall *unk_1404042D8)(_QWORD, _QWORD, _QWORD);
// 140404380: using guessed type __int64 (__fastcall *unk_140404380)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1515F0C00: using guessed type unsigned int;

//----- (000000014014FAB0) ----------------------------------------------------
void            sub_14014FAB0(     char *a1, char *a2, char *a3, char *a4)
{
  __int64 v4; // r10
  int v8; // ebx
  char v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  char v12; // dl
  int v13; // ecx
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rax

  v4 = *(_QWORD *)&dword_140404A6C[71856245];
  if ( *(_QWORD *)&dword_140404A6C[71856245] )
  {
    v8 = 0;
    if ( a2 )
    {
      v9 = *a2;
      v10 = 0;
      if ( *a2 )
      {
        v11 = 0;
        do
        {
          *((_BYTE *)&dword_140404A6C[71823477] + v11) = v9;
          ++v10;
          ++v11;
          if ( *a2 == 10 )
          {
            ++v10;
            *((_BYTE *)&dword_140404A6C[71823477] + v11++) = 34;
          }
          v9 = *++a2;
          if ( v9 == 13 )
          {
            *(_WORD *)((char *)&dword_140404A6C[71823477] + v11) = 28252;
            v10 += 3;
            *((_BYTE *)&dword_140404A6C[71823477] + v11 + 2) = 34;
            v11 += 3;
            v9 = *a2;
          }
        }
        while ( v9 );
      }
      if ( (unsigned __int64)v10 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&dword_140404A6C[71823477] + v10) = 0;
      sub_1400920F0(v4, "char %svs[]=\"%s\";\r\n\r\n", a1, (     char *)&dword_140404A6C[71823477]);
      v4 = *(_QWORD *)&dword_140404A6C[71856245];
    }
    if ( a3 )
    {
      v12 = *a3;
      v13 = 0;
      if ( *a3 )
      {
        v14 = 0;
        do
        {
          *((_BYTE *)&dword_140404A6C[71823477] + v14) = v12;
          ++v13;
          ++v14;
          if ( *a3 == 10 )
          {
            ++v13;
            *((_BYTE *)&dword_140404A6C[71823477] + v14++) = 34;
          }
          v12 = *++a3;
          if ( v12 == 13 )
          {
            *(_WORD *)((char *)&dword_140404A6C[71823477] + v14) = 28252;
            v13 += 3;
            *((_BYTE *)&dword_140404A6C[71823477] + v14 + 2) = 34;
            v14 += 3;
            v12 = *a3;
          }
        }
        while ( v12 );
      }
      if ( (unsigned __int64)v13 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&dword_140404A6C[71823477] + v13) = 0;
      sub_1400920F0(v4, "char %sfs[]=\"%s\";\r\n\r\n", a1, (     char *)&dword_140404A6C[71823477]);
      v4 = *(_QWORD *)&dword_140404A6C[71856245];
    }
    if ( !a4 )
      return;
    v15 = *a4;
    if ( *a4 )
    {
      v16 = 0;
      do
      {
        *((_BYTE *)&dword_140404A6C[71823477] + v16) = v15;
        ++v8;
        ++v16;
        if ( *a4 == 10 )
        {
          ++v8;
          *((_BYTE *)&dword_140404A6C[71823477] + v16++) = 34;
        }
        v15 = *++a4;
        if ( v15 == 13 )
        {
          *(_WORD *)((char *)&dword_140404A6C[71823477] + v16) = 28252;
          v8 += 3;
          *((_BYTE *)&dword_140404A6C[71823477] + v16 + 2) = 34;
          v16 += 3;
          v15 = *a4;
        }
      }
      while ( v15 );
    }
    if ( (unsigned __int64)v8 < 0x20000 )
    {
      *((_BYTE *)&dword_140404A6C[71823477] + v8) = 0;
      sub_1400920F0(v4, "char %sgs[]=\"%s\";\r\n\r\n", a1, (     char *)&dword_140404A6C[71823477]);
      return;
    }
LABEL_33:
    sub_1401F8694();
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151620C40: using guessed type unsigned int;

