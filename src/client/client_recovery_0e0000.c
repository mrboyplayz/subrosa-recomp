#include "shared_client.h"

//----- (00000001400E35D0) ----------------------------------------------------
__int64 sub_1400E35D0(int item, int child, int human, int slot)
{
  extern unsigned long long item_transfer(int, int, int, int);
  /* src/engine/item_state.c */
  return (__int64)item_transfer(item, child, human, slot);
}

//----- (00000001400E38A0) ----------------------------------------------------
__int64 sub_1400E38A0(int parent, int child)
{
  extern unsigned long long item_attach_child(int, int);
  /* src/engine/item_state.c */
  return (__int64)item_attach_child(parent, child);
}

//----- (00000001400E3960) ----------------------------------------------------
__int64            sub_1400E3960(_BYTE *a1, int a2, int a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char *v7;
  unsigned int *v8;
  char v9;
  char *v10;
  unsigned int *v11;
  char v12;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E3960[352];
#define v14 (*(__int64 (*))(void *)(sr_frame_1400E3960 + 0)) /* [rsp+0h] */
#define v15 (*(_BYTE (*)[36])(void *)(sr_frame_1400E3960 + 32)) /* [rsp+20h] */
#define v16 (*(_BYTE (*)[268])(void *)(sr_frame_1400E3960 + 68)) /* [rsp+44h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1400E3960 + 336)) /* [rsp+150h] */

  v4 = 16385LL * a2;
  v5 = sub_14023A198(a1, (__int64)v15);
  dword_140404A6C[v4 + 293119325] = 0;
  if ( (_DWORD)v5 != -1 )
  {
    while ( 1 )
    {
      v6 = (int)dword_140404A6C[v4 + 293119325];
      if ( (int)v6 >= 1024 )
        goto LABEL_14;
      if ( a3 )
        break;
      if ( (v15[0] & 0x10) == 0 )
      {
        v7 = v16;
        v8 = &dword_140404A6C[16 * v6 + 293119326 + v4];
        do
        {
          v9 = *v7++;
          *(_BYTE *)v8 = v9;
          v8 = (unsigned int *)((char *)v8 + 1);
        }
        while ( v9 );
LABEL_12:
        ++dword_140404A6C[v4 + 293119325];
      }
LABEL_13:
      if ( (unsigned int)sub_14023A5C4(v5, (__int64)v15) == -1 )
        goto LABEL_14;
    }
    if ( (v15[0] & 0x10) == 0 || v16[0] == 46 )
      goto LABEL_13;
    v10 = v16;
    v11 = &dword_140404A6C[16 * v6 + 293119326 + v4];
    do
    {
      v12 = *v10++;
      *(_BYTE *)v11 = v12;
      v11 = (unsigned int *)((char *)v11 + 1);
    }
    while ( v12 );
    goto LABEL_12;
  }
LABEL_14:
  LOBYTE(dword_140404A6C[16 * (__int64)(int)dword_140404A6C[v4 + 293119325] + 293119326 + v4]) = 0;
  sub_140239CCC(v5);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[v4 + 293119326],
    (int)dword_140404A6C[v4 + 293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  return 0; /* the function has no caller */
}
#undef v14
#undef v15
#undef v16
#undef v17

//----- (00000001400E3B90) ----------------------------------------------------
__int64 (           *           sub_1400E3B90(__int64 (           *a1)(_QWORD)))(_QWORD, _QWORD)
{
  __int64 (           *result)(_QWORD, _QWORD);

  result = (__int64 (           *)(_QWORD, _QWORD))a1;
  if ( unk_14040488C )
  {
    result = (__int64 (           *)(_QWORD, _QWORD))a1("glClipControl");
    glClipControl = result;
  }
  return result;
}

//----- (00000001400E54D0) ----------------------------------------------------
__int64            sub_1400E54D0(_QWORD *a1, int *a2, _DWORD *a3, int *a4, unsigned int a5)
{
  __int64 v5;
  __int64 v6;
  _QWORD *v7;
  int v8;
  int *v9;
  __int64 v10;
  void **v11;
  void *v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int *v19;
  int *v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  int v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  void *v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  int *v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _BYTE *v42;
  _QWORD *v43;
  __int64 v44;
  int *v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  void **v51;
  void *v52;
  void *v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  char v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  void (           *v64)(_BYTE *, __int64, __int64, __int64, int, int);
  __int64 v65;
  int v66;
  __int64 v67;
  char v68;
  int v69;
  __int64 v70;
  __int16 v71;
  __int16 v72;
  __int16 v73;
  __int16 v74;
  __int16 v75;
  __int16 v76;
  int v77;
  __int64 v78;
  int v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;
  int v84;
  int v85;
  int v86;
  __int64 v87;
  char v88;
  __int64 v89;
  void **v90;
  void *v91;
  void *v92;
  __int64 v94;
  void **v95;
  void *v96;
  void *v97;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E54D0[352];
#define v98 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 8)) /* [rsp+0h] */
#define v99 (*(int (*))(void *)(sr_frame_1400E54D0 + 40)) /* [rsp+20h] */
#define v100 (*(int (*))(void *)(sr_frame_1400E54D0 + 48)) /* [rsp+28h] */
#define v101 (*(int (*))(void *)(sr_frame_1400E54D0 + 56)) /* [rsp+30h] */
#define v102 (*(unsigned int (*))(void *)(sr_frame_1400E54D0 + 60)) /* [rsp+34h] */
#define v103 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 64)) /* [rsp+38h] */
#define v104 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 72)) /* [rsp+40h] */
#define v105 (*(_QWORD * (*))(void *)(sr_frame_1400E54D0 + 80)) /* [rsp+48h] */
#define v106 (*(int * (*))(void *)(sr_frame_1400E54D0 + 88)) /* [rsp+50h] */
#define v107 (*(_DWORD * (*))(void *)(sr_frame_1400E54D0 + 96)) /* [rsp+58h] */
#define v108 (*(int * (*))(void *)(sr_frame_1400E54D0 + 104)) /* [rsp+60h] */
#define v109 (*(__int128 (*))(void *)(sr_frame_1400E54D0 + 112)) /* [rsp+68h] */
#define v110 (*(__int128 (*))(void *)(sr_frame_1400E54D0 + 128)) /* [rsp+78h] */
#define v111 (*(char (*))(void *)(sr_frame_1400E54D0 + 176)) /* [rsp+A8h] */
#define v112 (*(char (*))(void *)(sr_frame_1400E54D0 + 188)) /* [rsp+B4h] */
#define v113 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 344)) /* [rsp+150h] */

  LODWORD(v5) = a5;
  v6 = *a1;
  v7 = a1;
  v108 = a4;
  v107 = a3;
  v106 = a2;
  *(_DWORD *)(v6 + 8) = 0;
  v105 = a1;
  v101 = a5;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
    return 0; /* 0x1400E5EA4: xor eax, eax */
  }
  v8 = sub_14015FAD0(a1);
  v9 = (int *)*v7;
  if ( !v8 )
  {
    v10 = v9[2];
    if ( v10 > 0 )
    {
      v11 = (void **)(v7 + 2267);
      do
      {
        if ( *v11 )
        {
          free(*v11);
          *v11 = nullptr;
          *(v11 - 1) = nullptr;
        }
        v12 = v11[1];
        if ( v12 )
        {
          free(v12);
          v11[1] = nullptr;
          v11[3] = nullptr;
        }
        v13 = v11[2];
        if ( v13 )
        {
          free(v13);
          v11[2] = nullptr;
        }
        v11 += 12;
        --v10;
      }
      while ( v10 );
    }
    return 0; /* 0x1400E5596: xor eax, eax */
  }
  v14 = v9[2];
  v15 = 1;
  if ( !a5 )
  {
    LODWORD(v5) = 1;
    if ( v14 >= 3 )
      LODWORD(v5) = 3;
    v101 = v5;
  }
  if ( v14 == 3 && (*((_DWORD *)v7 + 4628) == 3 || !*((_DWORD *)v7 + 4627) && !*((_DWORD *)v7 + 4626)) )
  {
    v16 = 1;
    v103 = 1;
LABEL_23:
    if ( (int)v5 < 3 && !v16 )
      v14 = 1;
    goto LABEL_26;
  }
  v103 = 0;
  v16 = 0;
  if ( v14 == 3 )
    goto LABEL_23;
LABEL_26:
  v17 = v14;
  v104 = v14;
  v109 = 0;
  v110 = 0;
  if ( v14 <= 0 )
    goto LABEL_42;
  v18 = 0;
  v19 = (unsigned int *)&v111;
  v20 = (int *)v7 + 4521;
  do
  {
    v21 = sr_path_malloc((unsigned int)(*(_DWORD *)*v7 + 3));
    *(_QWORD *)(v20 + 17) = v21;
    if ( !v21 )
    {
      v50 = *(int *)(*v7 + 8LL);
      if ( v50 > 0 )
      {
        v51 = (void **)(v7 + 2267);
        do
        {
          if ( *v51 )
          {
            free(*v51);
            *v51 = nullptr;
            *(v51 - 1) = nullptr;
          }
          v52 = v51[1];
          if ( v52 )
          {
            free(v52);
            v51[1] = nullptr;
            v51[3] = nullptr;
          }
          v53 = v51[2];
          if ( v53 )
          {
            free(v53);
            v51[2] = nullptr;
          }
          v51 += 12;
          --v50;
        }
        while ( v50 );
      }
      goto LABEL_144;
    }
    v22 = *((int *)v7 + 4514);
    v19[4] = 0;
    v23 = v22 / *v20;
    *v19 = v23;
    v24 = *((_DWORD *)v7 + 4515) / v20[1];
    v19[1] = v24;
    v25 = v24;
    v19[3] = v24 >> 1;
    v26 = *(_QWORD *)(v20 + 11);
    v27 = v23 + *(_DWORD *)*v7 - 1;
    *((_QWORD *)v19 - 1) = v26;
    *((_QWORD *)v19 - 2) = v26;
    v19[2] = v27 / v23;
    if ( v23 == 1 )
    {
      if ( v25 == 1 )
      {
        v28 = sub_140127900;
        goto LABEL_40;
      }
      if ( v25 == 2 )
      {
        v28 = sub_14016DD80;
        goto LABEL_40;
      }
    }
    else if ( v23 == 2 )
    {
      if ( v25 == 1 )
      {
        v28 = sub_14016D9D0;
        goto LABEL_40;
      }
      if ( v25 == 2 )
      {
        v28 = (void *)v7[2320];
        goto LABEL_40;
      }
    }
    v28 = sub_14016D990;
LABEL_40:
    *((_QWORD *)v19 - 3) = (uint64)(uintptr_t)(v28);
    ++v18;
    v19 += 12;
    v20 += 24;
  }
  while ( v18 < v17 );
  v9 = (int *)*v7;
LABEL_42:
  v29 = v9[1];
  v30 = *v9;
  if ( (int)v5 < 0
    || v30 < 0
    || v30 && (int)v5 > 0x7FFFFFFF / v30
    || (int)v5 * v30 < 0
    || v29 < 0
    || v29 && (int)v5 * v30 > 0x7FFFFFFF / v29
    || (v31 = v5 * v29 * v30, v31 == 0x7FFFFFFF) )
  {
    v33 = (int *)*v7;
LABEL_135:
    v94 = v33[2];
    if ( v94 > 0 )
    {
      v95 = (void **)(v7 + 2267);
      do
      {
        if ( *v95 )
        {
          free(*v95);
          *v95 = nullptr;
          *(v95 - 1) = nullptr;
        }
        v96 = v95[1];
        if ( v96 )
        {
          free(v96);
          v95[1] = nullptr;
          v95[3] = nullptr;
        }
        v97 = v95[2];
        if ( v97 )
        {
          free(v97);
          v95[2] = nullptr;
        }
        v95 += 12;
        --v94;
      }
      while ( v94 );
    }
LABEL_144:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0; /* 0x1400E5E7A: xor eax, eax */
  }
  v32 = sr_path_malloc(v31 + 1);
  v33 = (int *)*v7;
  v34 = v32;
  if ( !v32 )
    goto LABEL_135;
  v35 = 0;
  v102 = 0;
  if ( !v33[1] )
    goto LABEL_119;
  v36 = *((_QWORD *)&v110 + 1);
  v37 = v110;
  v38 = *((_QWORD *)&v109 + 1);
  v39 = v109;
  while ( 2 )
  {
    v40 = (unsigned int)v5 * v35 * *v33;
    v41 = 0;
    v42 = (_BYTE *)(v34 + v40);
    if ( v104 > 0 )
    {
      v43 = v7 + 2264;
      v44 = v104;
      v45 = (int *)&v112;
      do
      {
        v46 = *(v45 - 2);
        v47 = *v45;
        if ( *v45 < v46 >> 1 )
        {
          v48 = *(_QWORD *)(v45 - 7);
          v49 = *(_QWORD *)(v45 - 5);
        }
        else
        {
          v48 = *(_QWORD *)(v45 - 5);
          v49 = *(_QWORD *)(v45 - 7);
        }
        *((_QWORD *)&v109 + v41) = (*(__int64 (           **)(_QWORD, __int64, __int64, _QWORD, _DWORD))(v45 - 9))(
                                     v43[5],
                                     v48,
                                     v49,
                                     (unsigned int)*(v45 - 1),
                                     *(v45 - 3));
        *v45 = v47 + 1;
        if ( v47 + 1 >= v46 )
        {
          v54 = ++v45[1];
          v55 = *(_QWORD *)(v45 - 5);
          *v45 = 0;
          *(_QWORD *)(v45 - 7) = v55;
          if ( v54 < *(_DWORD *)v43 )
            *(_QWORD *)(v45 - 5) = v55 + *((int *)v43 + 1);
        }
        ++v41;
        v45 += 12;
        v43 += 12;
      }
      while ( v41 < v44 );
      v7 = v105;
      v36 = *((_QWORD *)&v110 + 1);
      v37 = v110;
      v38 = *((_QWORD *)&v109 + 1);
      v33 = (int *)*v105;
      v39 = v109;
    }
    v5 = v101;
    if ( v101 < 3 )
    {
      if ( v103 )
      {
        v69 = *v33;
        v70 = 0;
        if ( v101 == 1 )
        {
          if ( v69 )
          {
            do
            {
              ++v42;
              v71 = 150 * *(unsigned __int8 *)(v70 + v38);
              v72 = 29 * *(unsigned __int8 *)(v70 + v37);
              v73 = *(unsigned __int8 *)(v70 + v39);
              v70 = (unsigned int)(v70 + 1);
              *(v42 - 1) = (unsigned __int16)(77 * v73 + v72 + v71) >> 8;
              v33 = (int *)*v7;
            }
            while ( (unsigned int)v70 < *(_DWORD *)*v7 );
          }
        }
        else if ( v69 )
        {
          do
          {
            v42 += 2;
            v74 = 150 * *(unsigned __int8 *)(v70 + v38);
            v75 = 29 * *(unsigned __int8 *)(v70 + v37);
            v76 = *(unsigned __int8 *)(v70 + v39);
            v70 = (unsigned int)(v70 + 1);
            *(v42 - 1) = -1;
            *(v42 - 2) = (unsigned __int16)(77 * v76 + v75 + v74) >> 8;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v70 < *(_DWORD *)*v7 );
        }
        goto LABEL_117;
      }
      if ( v33[2] != 4 )
        goto LABEL_111;
      v77 = *((_DWORD *)v7 + 4627);
      if ( !v77 )
      {
        v78 = 0;
        if ( *v33 )
        {
          do
          {
            v79 = *(unsigned __int8 *)(v78 + v36);
            v80 = *(unsigned __int8 *)(v78 + v38);
            v81 = *(unsigned __int8 *)(v78 + v37);
            v82 = *(unsigned __int8 *)(v78 + v39);
            v78 = (unsigned int)(v78 + 1);
            v42[1] = -1;
            *v42 = (unsigned __int16)(77
                                    * (unsigned __int8)((unsigned __int16)(v79 * v82
                                                                         + 128
                                                                         + ((unsigned int)(v79 * v82 + 128) >> 8)) >> 8)
                                    + 29
                                    * (unsigned __int8)((unsigned __int16)(v79 * v81
                                                                         + 128
                                                                         + ((unsigned int)(v79 * v81 + 128) >> 8)) >> 8)
                                    + 150
                                    * (unsigned __int8)((unsigned __int16)(v79 * v80
                                                                         + 128
                                                                         + ((unsigned int)(v79 * v80 + 128) >> 8)) >> 8)) >> 8;
            v42 += v5;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v78 < *(_DWORD *)*v7 );
        }
        goto LABEL_117;
      }
      if ( v77 == 2 )
      {
        v83 = 0;
        if ( *v33 )
        {
          do
          {
            v84 = (unsigned __int8)~*(_BYTE *)(v83 + v39);
            v85 = *(unsigned __int8 *)(v83 + v36);
            v83 = (unsigned int)(v83 + 1);
            v42[1] = -1;
            *v42 = (unsigned __int16)(v85 * v84 + 128 + ((unsigned int)(v85 * v84 + 128) >> 8)) >> 8;
            v42 += v5;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v83 < *(_DWORD *)*v7 );
        }
      }
      else
      {
LABEL_111:
        v86 = *v33;
        v87 = 0;
        if ( v101 == 1 )
        {
          if ( v86 )
          {
            do
            {
              v42[v87] = *(_BYTE *)(v87 + v39);
              v87 = (unsigned int)(v87 + 1);
              v33 = (int *)*v7;
            }
            while ( (unsigned int)v87 < *(_DWORD *)*v7 );
          }
        }
        else if ( v86 )
        {
          do
          {
            v88 = *(_BYTE *)(v87 + v39);
            v87 = (unsigned int)(v87 + 1);
            *v42 = v88;
            v42[1] = -1;
            v42 += 2;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v87 < *(_DWORD *)*v7 );
        }
      }
    }
    else
    {
      v56 = v33[2];
      if ( v56 == 3 )
      {
        if ( !v103 )
        {
          ((void (           *)(_BYTE *, __int64, __int64, __int64, int, int))v7[2319])(v42, v39, v38, v37, *v33, v101);
          v33 = (int *)*v7;
          goto LABEL_117;
        }
        v57 = 0;
        if ( *v33 )
        {
          do
          {
            *v42 = *(_BYTE *)(v57 + v39);
            v42[1] = *(_BYTE *)(v57 + v38);
            v58 = *(_BYTE *)(v57 + v37);
            v57 = (unsigned int)(v57 + 1);
            v42[2] = v58;
            v42[3] = -1;
            v42 += v5;
          }
          while ( (unsigned int)v57 < *(_DWORD *)*v7 );
          v33 = (int *)*v7;
          goto LABEL_117;
        }
LABEL_93:
        v33 = (int *)*v7;
        goto LABEL_117;
      }
      if ( v56 != 4 )
      {
        v67 = 0;
        if ( *v33 )
        {
          do
          {
            v68 = *(_BYTE *)(v67 + v39);
            v67 = (unsigned int)(v67 + 1);
            v42[2] = v68;
            v42[1] = v68;
            *v42 = v68;
            v42[3] = -1;
            v42 += v5;
          }
          while ( (unsigned int)v67 < *(_DWORD *)*v7 );
        }
        goto LABEL_93;
      }
      v59 = *((_DWORD *)v7 + 4627);
      if ( v59 )
      {
        v63 = *v33;
        v64 = (void (           *)(_BYTE *, __int64, __int64, __int64, int, int))v7[2319];
        v100 = v101;
        v99 = v63;
        if ( v59 != 2 )
        {
          v64(v42, v39, v38, v37, v99, v100);
          v33 = (int *)*v7;
          goto LABEL_117;
        }
        v64(v42, v39, v38, v37, v99, v100);
        v65 = 0;
        if ( !*(_DWORD *)*v7 )
          goto LABEL_93;
        do
        {
          v66 = *(unsigned __int8 *)(v65 + v36);
          v65 = (unsigned int)(v65 + 1);
          *v42 = (unsigned __int16)(v66 * (unsigned __int8)~*v42
                                  + 128
                                  + ((v66 * (unsigned int)(unsigned __int8)~*v42 + 128) >> 8)) >> 8;
          v42[1] = (unsigned __int16)(v66 * (unsigned __int8)~v42[1]
                                    + 128
                                    + ((v66 * (unsigned int)(unsigned __int8)~v42[1] + 128) >> 8)) >> 8;
          v42[2] = (unsigned __int16)(v66 * (unsigned __int8)~v42[2]
                                    + 128
                                    + ((v66 * (unsigned int)(unsigned __int8)~v42[2] + 128) >> 8)) >> 8;
          v42 += v5;
        }
        while ( (unsigned int)v65 < *(_DWORD *)*v7 );
        v33 = (int *)*v7;
      }
      else
      {
        v60 = 0;
        if ( !*v33 )
          goto LABEL_93;
        do
        {
          v61 = *(unsigned __int8 *)(v60 + v36);
          *v42 = (unsigned __int16)(v61 * *(unsigned __int8 *)(v60 + v39)
                                  + 128
                                  + ((v61 * (unsigned int)*(unsigned __int8 *)(v60 + v39) + 128) >> 8)) >> 8;
          v42[1] = (unsigned __int16)(v61 * *(unsigned __int8 *)(v60 + v38)
                                    + 128
                                    + ((v61 * (unsigned int)*(unsigned __int8 *)(v60 + v38) + 128) >> 8)) >> 8;
          v62 = *(unsigned __int8 *)(v60 + v37);
          v60 = (unsigned int)(v60 + 1);
          v42[3] = -1;
          v42[2] = (unsigned __int16)(v61 * v62 + 128 + ((unsigned int)(v61 * v62 + 128) >> 8)) >> 8;
          v42 += v5;
        }
        while ( (unsigned int)v60 < *(_DWORD *)*v7 );
        v33 = (int *)*v7;
      }
    }
LABEL_117:
    v35 = v102 + 1;
    v102 = v35;
    if ( v35 < v33[1] )
      continue;
    break;
  }
  v15 = 1;
LABEL_119:
  v89 = v33[2];
  if ( v89 > 0 )
  {
    v90 = (void **)(v7 + 2267);
    do
    {
      if ( *v90 )
      {
        free(*v90);
        *v90 = nullptr;
        *(v90 - 1) = nullptr;
      }
      v91 = v90[1];
      if ( v91 )
      {
        free(v91);
        v90[1] = nullptr;
        v90[3] = nullptr;
      }
      v92 = v90[2];
      if ( v92 )
      {
        free(v92);
        v90[2] = nullptr;
      }
      v90 += 12;
      --v89;
    }
    while ( v89 );
    v33 = (int *)*v7;
  }
  *v106 = *v33;
  *v107 = *(_DWORD *)(*v7 + 4LL);
  if ( v108 )
  {
    if ( *(int *)(*v7 + 8LL) >= 3 )
      v15 = 3;
    *v108 = v15;
  }
  return v34; /* 0x1400E5DB2: mov rax, r12 */
}
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113

//----- (00000001400E5EB0) ----------------------------------------------------
__int64 sub_1400E5EB0()
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E5EB0[112];
#define v1 (*(__int64 (*))(void *)(sr_frame_1400E5EB0 + 0)) /* [rsp+0h] */
#define v2 (*(_BYTE (*)[64])(void *)(sr_frame_1400E5EB0 + 32)) /* [rsp+20h] */
#define v3 (*(__int64 (*))(void *)(sr_frame_1400E5EB0 + 96)) /* [rsp+60h] */

  g_1602E12E0 = 0;
  crt_chdir(&g_182A7D340);
  crt_sprintf(v2, "client2.csk");
  return crt_chdir(&g_182A7D140); /* 0x1400E5EF1: the result of this call is still in rax at the exit */
}
#undef v1
#undef v2
#undef v3

//----- (00000001400E65F0) ----------------------------------------------------
__int64 sub_1400E65F0()
{
  int v0;
  unsigned int *i;
  __int64 v2;
  __int64 v3;
       char *v4;
  __int64 v5;
  __int64 v6;
  FILE *v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  FILE *v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E65F0[608];
#define v20 (*(__int64 (*))(void *)(sr_frame_1400E65F0 + 0)) /* [rsp+0h] */
#define v21 (*(char (*)[512])(void *)(sr_frame_1400E65F0 + 80)) /* [rsp+50h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400E65F0 + 592)) /* [rsp+250h] */

  v0 = 0;
  if ( (int)g_1A4CFF8D4 > 0 )
  {
    for ( i = &g_1A4CFF8D8; ; ++i )
    {
      v2 = (int)*i;
      v3 = 46 * v2;
      v4 = (     char *)&dword_140404A6C[46 * v2 + 421784739];
      crt_sprintf(v21, "texture/%s.png", v4);
      v5 = crt_fopen(v21, "rb");
      v6 = 46 * v2;
      v7 = (FILE *)v5;
      if ( v5 )
      {
        sub_14020C4A8(v5, 0, 2u);
        dword_140404A6C[v6 + 421784755] = ftell_sr(v7);
        sub_14020C4A8((__int64)v7, 0, 0);
        v8 = sr_path_malloc((int)dword_140404A6C[v3 + 421784755]);
        v9 = (int)dword_140404A6C[v3 + 421784755];
        *(_QWORD *)&dword_140404A6C[v3 + 421784757] = v8;
        fread_sr((void *)(uintptr_t)(v8), 1, v9, (FILE *)(uintptr_t)(v7));
        crt_fclose((__int64)v7);
      }
      else
      {
        dword_140404A6C[v6 + 421784755] = 0;
      }
      v10 = dword_140404A6C[v3 + 421784755];
      v11 = 2 * v2;
      v12 = dword_140404A6C[2 * v11 + 283827814];
      if ( v10 <= 0 )
        sub_140138590(v12, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
      else
        sub_1400EE0A0(v12, v10, *(_QWORD *)&dword_140404A6C[v3 + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
      glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
      crt_sprintf(v21, "texturematerial/%s.png", v4);
      v13 = crt_fopen(v21, "rb");
      v14 = (FILE *)v13;
      if ( !v13 )
        break;
      sub_14020C4A8(v13, 0, 2u);
      dword_140404A6C[v3 + 421784759] = ftell_sr(v14);
      sub_14020C4A8((__int64)v14, 0, 0);
      v15 = sr_path_malloc((int)dword_140404A6C[v3 + 421784759]);
      v16 = (int)dword_140404A6C[v3 + 421784759];
      *(_QWORD *)&dword_140404A6C[v3 + 421784761] = v15;
      fread_sr((void *)(uintptr_t)(v15), 1, v16, (FILE *)(uintptr_t)(v14));
      crt_fclose((__int64)v14);
      v17 = dword_140404A6C[v3 + 421784759];
      v18 = dword_140404A6C[2 * v11 + 283827815];
      if ( v17 <= 0 )
        goto LABEL_13;
      sub_1400EE0A0(v18, v17, *(_QWORD *)&dword_140404A6C[v3 + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
LABEL_14:
      glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
      if ( ++v0 >= (int)g_1A4CFF8D4 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v18 = dword_140404A6C[2 * v11 + 283827815];
    dword_140404A6C[v3 + 421784759] = 0;
LABEL_13:
    sub_140138590(v18, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
    goto LABEL_14;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v20
#undef v21
#undef v22

//----- (00000001400E6960) ----------------------------------------------------
__int64 sub_1400E6960()
{
  __int64 result;
  int v1;
  int v2;
  unsigned int *v3;
  __int64 v4;
  int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int *v8;
  int v9;
  int v10;
  signed int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int *v15;
  unsigned int *v16;
  int v17;
  int v18;
  int v19;
  unsigned int *v20;
  unsigned int *v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  unsigned int *v26;
  unsigned int *v27;
  int v28;
  int v29;
  int v30;
  unsigned int *v31;
  unsigned int *v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned int *v37;
  unsigned int *v38;
  int v39;
  int v40;
  int v41;
  unsigned int *v42;
  unsigned int *v43;
  int v44;
  int v45;
  int v46;
  unsigned int *v47;
  unsigned int *v48;
  int v49;
  int v50;
  int v51;
  unsigned int *v52;
  unsigned int *v53;
  int v54;
  int v55;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E6960[16];
#define v56 (*(int (*))(void *)(sr_frame_1400E6960 + 0)) /* [rsp+40h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1400E6960 + 8)) /* [rsp+48h] */

  result = 0;
  v56 = 0;
  if ( (int)g_16E492084 > 0 )
  {
    v1 = g_14500A700;
    v2 = g_1A4CFF560;
    v3 = &g_16E4920C8;
    v4 = 0;
    do
    {
      *v3 = 0x40000000;
      if ( *((_BYTE *)v3 - 64) )
      {
        v5 = 0;
        if ( v1 > 0 )
        {
          v6 = &g_145098C00;
          v7 = &dword_140404A6C[4242 * (int)result + 193082759];
          do
          {
            v8 = v7;
            do
            {
              v9 = *((unsigned __int8 *)v8 + ((char *)v6 - (char *)v7));
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
            v15 = &g_1A4CFFCF8;
            do
            {
              v16 = &dword_140404A6C[4242 * v12 + 193082777 + 132 * v11];
              do
              {
                v17 = *((unsigned __int8 *)v16 + ((char *)v15 - (char *)&dword_140404A6C[4242 * v12 + 193082777 + 132 * v11]));
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
            v20 = &g_1A4CFFCF8;
            do
            {
              v21 = &dword_140404A6C[4242 * v12 + 193082793 + 132 * v11];
              do
              {
                v22 = *((unsigned __int8 *)v21 + ((char *)v20 - (char *)&dword_140404A6C[4242 * v12 + 193082793 + 132 * v11]));
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
            v26 = &g_1A4CFFCF8;
            do
            {
              v27 = &dword_140404A6C[132 * v11 + 193082809 + v25];
              do
              {
                v28 = *((unsigned __int8 *)v27 + ((char *)v26 - (char *)&dword_140404A6C[132 * v11 + 193082809 + v25]));
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
            v31 = &g_1A4CFFCF8;
            do
            {
              v32 = &dword_140404A6C[132 * v11 + 193082825 + v25];
              do
              {
                v33 = *((unsigned __int8 *)v32 + ((char *)v31 - (char *)&dword_140404A6C[132 * v11 + 193082825 + v25]));
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
            v37 = &g_1A4CFFCF8;
            do
            {
              v38 = &dword_140404A6C[v25 + 193082841 + v36];
              do
              {
                v39 = *((unsigned __int8 *)v38 + ((char *)v37 - (char *)&dword_140404A6C[v25 + 193082841 + v36]));
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
            v42 = &g_1A4CFFCF8;
            do
            {
              v43 = &dword_140404A6C[v25 + 193082857 + v36];
              do
              {
                v44 = *((unsigned __int8 *)v43 + ((char *)v42 - (char *)&dword_140404A6C[v25 + 193082857 + v36]));
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
            v47 = &g_1A4CFFCF8;
            do
            {
              v48 = &dword_140404A6C[v25 + 193082873 + v36];
              do
              {
                v49 = *((unsigned __int8 *)v48 + ((char *)v47 - (char *)&dword_140404A6C[v25 + 193082873 + v36]));
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
            v52 = &g_1A4CFFCF8;
            do
            {
              v53 = &dword_140404A6C[v25 + 193082889 + v36];
              do
              {
                v54 = *((unsigned __int8 *)v53 + ((char *)v52 - (char *)&dword_140404A6C[v25 + 193082889 + v36]));
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
        v1 = g_14500A700;
        LODWORD(result) = v56;
      }
      result = (unsigned int)(result + 1);
      v3 += 4242;
      v4 += 4242;
      v56 = result;
    }
    while ( (int)result < (int)g_16E492084 );
  }
  return result;
}
#undef v56
#undef v57

//----- (00000001400E7270) ----------------------------------------------------
__int64            sub_1400E7270(int a1, char *a2)
{
  __int64 v2;
  int v4;
  int v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int *v11;
  signed int i;
  __int64 v13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7270[576];
#define v15 (*(__int64 (*))(void *)(sr_frame_1400E7270 + 0)) /* [rsp+0h] */
#define Buffer (*(_DWORD (*)[4])(void *)(sr_frame_1400E7270 + 32)) /* [rsp+20h] */
#define v17 (*(char (*)[512])(void *)(sr_frame_1400E7270 + 48)) /* [rsp+30h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_1400E7270 + 560)) /* [rsp+230h] */

  v2 = a1;
  v4 = crt_chdir("data");
  v5 = crt_chdir("mission");
  v6 = v17 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = crt_fopen(v17, "rb");
  v9 = v8;
  if ( v8 )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 4, 1, (FILE *)(uintptr_t)(v8));
    if ( Buffer[0] != 1 )
    {
      crt_fclose(v9);
      return 0; /* the function has no caller */
    }
    v10 = 4100 * v2;
    v11 = &dword_140404A6C[1025 * v2 + 486132853];
    fread_sr((void *)(uintptr_t)(v11), 4, 1, (FILE *)(uintptr_t)(v9));
    for ( i = 0; i < (int)*v11; ++i )
    {
      v13 = v10 + 16LL * i;
      fread_sr((void *)(uintptr_t)((char *)&g_1B4277C44 + v13), 4, 3, (FILE *)(uintptr_t)(v9));
      fread_sr((void *)(uintptr_t)((char *)&g_1B4277C50 + v13), 4, 1, (FILE *)(uintptr_t)(v9));
    }
    crt_fclose(v9);
  }
  if ( !v5 )
    crt_chdir("..");
  if ( !v4 )
    crt_chdir("..");
  return 0; /* the function has no caller */
}
#undef v15
#undef Buffer
#undef v17
#undef v18

//----- (00000001400E7410) ----------------------------------------------------
double            sub_1400E7410(int a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = 46LL * a1;
  v2 = 2LL * a1;
  v3 = dword_140404A6C[v1 + 421784755];
  v4 = dword_140404A6C[4 * a1 + 283827814];
  if ( v3 <= 0 )
    sub_140138590(v4, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
  else
    sub_1400EE0A0(v4, v3, *(_QWORD *)&dword_140404A6C[v1 + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  v5 = dword_140404A6C[v1 + 421784759];
  v6 = dword_140404A6C[2 * v2 + 283827815];
  if ( v5 <= 0 )
    sub_140138590(v6, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
  else
    sub_1400EE0A0(v6, v5, *(_QWORD *)&dword_140404A6C[v1 + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}

//----- (00000001400E7590) ----------------------------------------------------
__int64            sub_1400E7590(char *a1)
{
  __int64 result;
  unsigned __int8 *v2;
  signed int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  signed int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;

  result = sub_140170C30(a1, (int *)&g_1B0037420, (int *)&g_1B0037424, &v18, 0);
  v2 = (unsigned __int8 *)result;
  if ( result )
  {
    v3 = g_1B0037424;
    v4 = v18;
    v5 = g_1B0037420;
    v6 = v18 * g_1B0037420;
    v7 = 0;
    v18 *= g_1B0037420;
    if ( (int)g_1B0037424 > 0 )
    {
      v8 = g_1862AE010;
      v9 = 0;
      do
      {
        v10 = 0;
        if ( v5 > 0 )
        {
          v11 = v9;
          v12 = v9;
          do
          {
            v13 = v2[v12];
            v14 = v2[v12 + 1];
            v15 = v2[v12 + 2];
            if ( v4 == 4 )
              v16 = v2[v11 + 3];
            else
              v16 = 255;
            v17 = v5 * (v3 - v7 - 1);
            if ( v8 )
              dword_140404A6C[v10 + 468765295 + v17] = (v15 << 8) + v16 + (v14 << 16) + (v13 << 24);
            else
              dword_140404A6C[v10 + 468765295 + v17] = (v16 << 24) + v13 + (v15 << 16) + (v14 << 8);
            v5 = g_1B0037420;
            ++v10;
            v3 = g_1B0037424;
            v12 += v4;
            v11 += 4;
          }
          while ( v10 < (int)g_1B0037420 );
          v6 = v18;
        }
        ++v7;
        v9 += v6;
      }
      while ( v7 < v3 );
    }
    free(v2);
    return 1;
  }
  return result;
}

//----- (00000001400E7720) ----------------------------------------------------
__int64            sub_1400E7720(int a1, __int64 a2)
{
  __m128i *v2;
  signed int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  signed int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7720[304];
#define v19 (*(_BYTE (*)[32])(void *)(sr_frame_1400E7720 + 0)) /* [rsp+0h] */
#define v20 (*(unsigned int (*)[4])(void *)(sr_frame_1400E7720 + 48)) /* [rsp+30h] */
#define v21 (*(_BYTE (*)[16])(void *)(sr_frame_1400E7720 + 64)) /* [rsp+40h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 80)) /* [rsp+50h] */
#define v23 (*(int (*))(void *)(sr_frame_1400E7720 + 112)) /* [rsp+70h] */
#define v24 (*(int (*))(void *)(sr_frame_1400E7720 + 248)) /* [rsp+F8h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 256)) /* [rsp+100h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 272)) /* [rsp+110h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 280)) /* [rsp+118h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 288)) /* [rsp+120h] */

  if ( !a1 )
    return 0; /* the function has no caller */
  v22 = 0;
  v23 = 0;
  v27 = a2;
  v28 = a2 + a1;
  v26 = v28;
  v25 = a2;
  v24 = 0;
  v2 = sub_140166160((__int64)v21, (int *)&g_1B0037420, (int *)&g_1B0037424, v20, 0);
  if ( !v2 )
    return 0; /* the function has no caller */
  v3 = g_1B0037424;
  v4 = v20[0];
  v5 = g_1B0037420;
  v6 = v20[0] * g_1B0037420;
  v7 = 0;
  v20[0] *= g_1B0037420;
  if ( (int)g_1B0037424 > 0 )
  {
    v8 = g_1862AE010;
    v9 = 0;
    do
    {
      v10 = 0;
      if ( v5 > 0 )
      {
        v11 = v9;
        v12 = v9;
        do
        {
          v13 = SR_VEC_PTR_LANES(128, v2, u8)[v12];
          v14 = SR_VEC_PTR_LANES(128, v2, u8)[v12 + 1];
          v15 = SR_VEC_PTR_LANES(128, v2, u8)[v12 + 2];
          if ( v4 == 4 )
            v16 = SR_VEC_PTR_LANES(128, v2, u8)[v11 + 3];
          else
            v16 = 255;
          v17 = v5 * (v3 - v7 - 1);
          if ( v8 )
            dword_140404A6C[v10 + 468765295 + v17] = (v15 << 8) + v16 + (v14 << 16) + (v13 << 24);
          else
            dword_140404A6C[v10 + 468765295 + v17] = (v16 << 24) + v13 + (v15 << 16) + (v14 << 8);
          v5 = g_1B0037420;
          ++v10;
          v3 = g_1B0037424;
          v12 += v4;
          v11 += 4;
        }
        while ( v10 < (int)g_1B0037420 );
        v6 = v20[0];
      }
      ++v7;
      v9 += v6;
    }
    while ( v7 < v3 );
  }
  free(v2);
  return 0; /* the function has no caller */
}
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29

//----- (00000001400E7C40) ----------------------------------------------------
__int64            sub_1400E7C40(int a1, char *a2)
{
  __int64 v2;
  int v4;
  int v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int *v11;
  __int64 v12;
  void *v13;
  signed int v14;
  int v15;
  int v16;
  signed int v17;
  int v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7C40[608];
#define v20 (*(__int64 (*))(void *)(sr_frame_1400E7C40 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400E7C40 + 64)) /* [rsp+40h] */
#define v22 (*(int (*))(void *)(sr_frame_1400E7C40 + 68)) /* [rsp+44h] */
#define v23 (*(int (*))(void *)(sr_frame_1400E7C40 + 72)) /* [rsp+48h] */
#define FileName (*(char (*)[512])(void *)(sr_frame_1400E7C40 + 80)) /* [rsp+50h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_1400E7C40 + 592)) /* [rsp+250h] */

  v2 = a1;
  v23 = a1;
  v22 = crt_chdir("data");
  v4 = v22;
  v5 = crt_chdir("item");
  v6 = FileName - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = crt_fopen(FileName, "rb");
  v9 = v8;
  if ( v8 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v8));
    if ( Buffer != 2 )
    {
      if ( !v5 )
        crt_chdir("..");
      if ( !v4 )
        crt_chdir("..");
      crt_fclose(v9);
      return 0; /* the function has no caller */
    }
    v10 = 50 * v2;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[50 * v2 + 272248205]), 1, 64, (FILE *)(uintptr_t)(v9));
    v11 = &dword_140404A6C[50 * v2 + 272248222];
    fread_sr((void *)(uintptr_t)(v11), 4, 1, (FILE *)(uintptr_t)(v9));
    free(*(void **)&dword_140404A6C[50 * v2 + 272248223]);
    v12 = sr_path_malloc((int)(12 * *v11));
    v13 = *(void **)&dword_140404A6C[50 * v2 + 272248225];
    *(_QWORD *)&dword_140404A6C[50 * v2 + 272248223] = v12;
    free(v13);
    *(_QWORD *)&dword_140404A6C[50 * v2 + 272248225] = sr_path_malloc((int)(8 * *v11));
    v14 = 0;
    if ( (int)*v11 > 0 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v10 + 272248223] + 4LL * v16), 4, 3, (FILE *)(uintptr_t)(v9));
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v10 + 272248225] + 4LL * v15), 4, 2, (FILE *)(uintptr_t)(v9));
        ++v14;
        v16 += 3;
        v15 += 2;
      }
      while ( v14 < (int)*v11 );
      v4 = v22;
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 272248227]), 4, 1, (FILE *)(uintptr_t)(v9));
    free(*(void **)&dword_140404A6C[v10 + 272248229]);
    v17 = 0;
    *(_QWORD *)&dword_140404A6C[v10 + 272248229] = sr_path_malloc((int)(12 * dword_140404A6C[v10 + 272248227]));
    if ( (int)dword_140404A6C[v10 + 272248227] > 0 )
    {
      v18 = 0;
      do
      {
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v10 + 272248229] + 4LL * v18), 4, 3, (FILE *)(uintptr_t)(v9));
        ++v17;
        v18 += 3;
      }
      while ( v17 < (int)dword_140404A6C[v10 + 272248227] );
    }
    crt_fclose(v9);
    LODWORD(v2) = v23;
  }
  if ( !v5 )
    crt_chdir("..");
  if ( !v4 )
    crt_chdir("..");
  crt_sprintf(FileName, "data/item/%s", (     char *)&dword_140404A6C[50 * (int)v2 + 272248205]);
  sub_1400EDED0(dword_140404A6C[(int)v2 + 283830981], FileName, 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  return 0; /* the function has no caller */
}
#undef v20
#undef Buffer
#undef v22
#undef v23
#undef FileName
#undef v25

//----- (00000001400E7F80) ----------------------------------------------------
__m128i *           sub_1400E7F80(int a1, char *a2)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  __int64 v5;
  __int64 v6;
  signed int v7;
  __int64 v8;
  __int64 v9;
  void *v10;
  signed int v11;
  int v12;
  int v13;
  int v14;
  unsigned int *v15;
  signed int i;
  int v17;
  signed int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int *v25;
  void *v26;
  __m128i *v27;
  unsigned int v28;
  __m128i *result;
  float *v30;
  float v31;
  _DWORD Buffer; // native four-byte header object

  v2 = a1;
  v3 = crt_fopen(a2, "rb");
  v4 = 0;
  v5 = v3;
  if ( v3 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v3));
    v6 = 1268 * v2;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[1268 * v2 + 278522403]), 4, 3, (FILE *)(uintptr_t)(v5));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[1268 * v2 + 278522406]), 4, 3, (FILE *)(uintptr_t)(v5));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[1268 * v2 + 278522409]), 4, 1, (FILE *)(uintptr_t)(v5));
    v7 = 0;
    if ( (int)dword_140404A6C[1268 * v2 + 278522409] > 0 )
    {
      do
      {
        v8 = 4 * (317 * v2 + v7);
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v8 + 278522410]), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v8 + 278522411]), 4, 3, (FILE *)(uintptr_t)(v5));
        ++v7;
      }
      while ( v7 < (int)dword_140404A6C[1268 * v2 + 278522409] );
      LODWORD(v2) = a1;
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 278522541]), 4, 1, (FILE *)(uintptr_t)(v5));
    free(*(void **)&dword_140404A6C[v6 + 278522543]);
    v9 = sr_path_malloc((int)(12 * dword_140404A6C[v6 + 278522541]));
    v10 = *(void **)&dword_140404A6C[v6 + 278522545];
    *(_QWORD *)&dword_140404A6C[v6 + 278522543] = v9;
    free(v10);
    v11 = 0;
    *(_QWORD *)&dword_140404A6C[v6 + 278522545] = sr_path_malloc((int)(8 * dword_140404A6C[v6 + 278522541]));
    if ( (int)dword_140404A6C[v6 + 278522541] > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v6 + 278522543] + 4LL * v13), 4, 3, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v6 + 278522545] + 4LL * v12), 4, 2, (FILE *)(uintptr_t)(v5));
        ++v11;
        v13 += 3;
        v12 += 2;
      }
      while ( v11 < (int)dword_140404A6C[v6 + 278522541] );
      LODWORD(v2) = a1;
    }
    fread_sr((void *)(uintptr_t)(&g_16A94BDAC), 4, 1, (FILE *)(uintptr_t)(v5));
    v14 = 0;
    if ( (int)g_16A94BDAC > 0 )
    {
      v15 = &g_16A94BDB0;
      do
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[5 * v14 + 177544401]), 4, 1, (FILE *)(uintptr_t)(v5));
        for ( i = 0; i < (int)*v15; ++i )
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[5 * v14 + 177544402 + i]), 4, 1, (FILE *)(uintptr_t)(v5));
        ++v14;
        v15 += 5;
      }
      while ( v14 < (int)g_16A94BDAC );
    }
    crt_fclose(v5);
  }
  v17 = 0;
  v18 = 0;
  v19 = 1268LL * (int)v2;
  if ( (int)dword_140404A6C[v19 + 278522541] <= 0 )
  {
    v22 = g_16A94BDAC;
  }
  else
  {
    v20 = *(_QWORD *)&dword_140404A6C[v19 + 278522543];
    v21 = 0;
    do
    {
      *(float *)(v21 + v20) = *(float *)(v21 + v20) - *(float *)&dword_140404A6C[v19 + 278522403];
      *(float *)(v21 + v20 + 4) = *(float *)(v21 + v20 + 4) - *(float *)&dword_140404A6C[v19 + 278522404];
      *(float *)(v21 + v20 + 8) = *(float *)(v21 + v20 + 8) - *(float *)&dword_140404A6C[v19 + 278522405];
      v20 = *(_QWORD *)&dword_140404A6C[v19 + 278522543];
      if ( (float)((float)((float)(*(float *)(v21 + v20) * *(float *)(v21 + v20))
                         + (float)(*(float *)(v21 + v20 + 4) * *(float *)(v21 + v20 + 4)))
                 + (float)(*(float *)(v21 + v20 + 8) * *(float *)(v21 + v20 + 8))) > 1.0 )
        v17 = 1;
      ++v18;
      v21 += 12;
    }
    while ( v18 < (int)dword_140404A6C[v19 + 278522541] );
    v22 = g_16A94BDAC;
    if ( v17 )
      v22 = 0;
    g_16A94BDAC = v22;
  }
  v23 = 0;
  mesh_triangle_count = 0;
  v24 = 0;
  if ( v22 > 0 )
  {
    v25 = &g_16A94BDB4;
    do
    {
      dword_140404A6C[3 * v23 + 177495248] = *v25;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = v25[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = v25[2];
      v23 = ++mesh_triangle_count;
      if ( *(v25 - 1) == 4 )
      {
        dword_140404A6C[3 * v23 + 177495248] = *v25;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = v25[2];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = v25[3];
        v23 = ++mesh_triangle_count;
      }
      ++v24;
      v25 += 5;
    }
    while ( v24 < (int)g_16A94BDAC );
  }
  v26 = *(void **)&dword_140404A6C[v19 + 278522549];
  dword_140404A6C[v19 + 278522547] = v23;
  free(v26);
  v27 = (__m128i *)sr_path_malloc((int)(12 * dword_140404A6C[v19 + 278522547]));
  v28 = dword_140404A6C[v19 + 278522547];
  *(_QWORD *)&dword_140404A6C[v19 + 278522549] = (uint64)(uintptr_t)(v27);
  result = crt_memcpy(v27, (     __m128i *)&g_16A91BDAC, (int)(12 * v28));
  if ( (int)dword_140404A6C[v19 + 278522409] > 0 )
  {
    v30 = (float *)&dword_140404A6C[v19 + 278522413];
    do
    {
      v31 = *(v30 - 2) - *(float *)&dword_140404A6C[v19 + 278522403];
      *(v30 - 2) = v31;
      *(v30 - 1) = *(v30 - 1) - *(float *)&dword_140404A6C[v19 + 278522404];
      *v30 = *v30 - *(float *)&dword_140404A6C[v19 + 278522405];
      result = (__m128i *)*((unsigned int *)v30 - 3);
      if ( !(_DWORD)result )
      {
        *(float *)&dword_140404A6C[v19 + 278521313] = v31;
        dword_140404A6C[v19 + 278521314] = *((_DWORD *)v30 - 1);
        dword_140404A6C[v19 + 278521315] = *(_DWORD *)v30;
        result = (__m128i *)*((unsigned int *)v30 - 3);
      }
      if ( (_DWORD)result == 1 )
      {
        dword_140404A6C[v19 + 278521317] = *((_DWORD *)v30 - 2);
        dword_140404A6C[v19 + 278521318] = *((_DWORD *)v30 - 1);
        dword_140404A6C[v19 + 278521319] = *(_DWORD *)v30;
        result = (__m128i *)*((unsigned int *)v30 - 3);
      }
      if ( (_DWORD)result == 2 )
      {
        dword_140404A6C[v19 + 278521320] = *((_DWORD *)v30 - 2);
        dword_140404A6C[v19 + 278521321] = *((_DWORD *)v30 - 1);
        dword_140404A6C[v19 + 278521322] = *(_DWORD *)v30;
        result = (__m128i *)*((unsigned int *)v30 - 3);
      }
      if ( (_DWORD)result == 4 )
      {
        dword_140404A6C[v19 + 278521323] = *((_DWORD *)v30 - 2);
        dword_140404A6C[v19 + 278521324] = *((_DWORD *)v30 - 1);
        result = (__m128i *)*(unsigned int *)v30;
        dword_140404A6C[v19 + 278521325] = (unsigned int)result;
      }
      ++v4;
      v30 += 4;
    }
    while ( v4 < (int)dword_140404A6C[v19 + 278522409] );
  }
  return result;
}

// 1400E8E0A: conditional instruction was optimized away because r8.8 is in (1..F|<0)
// 1400E8F0C: conditional instruction was optimized away because r8.8 is in (1..F|<0)

//----- (00000001400E9A60) ----------------------------------------------------
void            sub_1400E9A60(int a1, int a2,      char *a3)
{
  int v3;
  int v4;
  char *v5;
  bool v6;
  char *v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int *v13;
  __int64 v14;
  bool v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  signed int v21;
  __int64 v22;
  signed int v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  signed int v27;
  signed int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  float *v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  int v42;
  unsigned int v43;
  unsigned int *v44;
  int v45;
  int *v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  signed int v58;
  __int64 v59;
  unsigned int *v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  unsigned int *v68;
  __int64 v69;
  __int64 v70;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E9A60[160];
#define v72 (*(_BYTE (*)[32])(void *)(sr_frame_1400E9A60 + 0)) /* [rsp+0h] */
#define v73 (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 32)) /* [rsp+20h] */
#define v74 (*(int (*))(void *)(sr_frame_1400E9A60 + 40)) /* [rsp+28h] */
#define v75 (*(int (*))(void *)(sr_frame_1400E9A60 + 44)) /* [rsp+2Ch] */
#define v76 (*(int (*))(void *)(sr_frame_1400E9A60 + 48)) /* [rsp+30h] */
#define v77 (*(int (*))(void *)(sr_frame_1400E9A60 + 52)) /* [rsp+34h] */
#define v78 (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 56)) /* [rsp+38h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 64)) /* [rsp+40h] */
#define v80 (*(char (*)[8])(void *)(sr_frame_1400E9A60 + 72)) /* [rsp+48h] */
#define v81 (*(char (*)[64])(void *)(sr_frame_1400E9A60 + 80)) /* [rsp+50h] */
#define v82 (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 144)) /* [rsp+90h] */

  v3 = a1;
  v4 = a2;
  v76 = a1;
  v5 = v81;
  v75 = a2;
  strcpy(v81, "data/model/");
  while ( *v5 )
    ++v5;
  strcpy(v5, a3);
  v7 = v81;
  while ( *v7 )
    ++v7;
  strcpy(v7, ".cmo");
  v8 = crt_fopen(v81, "rb");
  v9 = 0;
  v10 = v8;
  v79 = 1;
  if ( v8 )
  {
    (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(v80, 1, 4, v8);
    v80[4] = 0;
    if ( strcmp_sr(v80, off_1402B2C88)
      || ((*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(&v74, 4, 1, v10),
          (unsigned int)(v74 - 1) > 2) )
    {
      crt_fclose(v10);
      return;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169CBB160,
      4,
      1,
      v10);
    v11 = 0;
    if ( (int)g_169CBB160 > 0 )
    {
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[2 * v11 + 174250430 + v11],
          4,
          3,
          v10);
        if ( v74 >= 3 )
          (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
            &dword_140404A6C[2 * v11 + 174348734],
            4,
            2,
            v10);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[v11++ + 174512574],
          4,
          1,
          v10);
      }
      while ( v11 < (int)g_169CBB160 );
      v9 = 0;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169DDB164,
      4,
      1,
      v10);
    v12 = 0;
    if ( (int)g_169DDB164 > 0 )
    {
      v13 = &g_169DDB168;
      do
      {
        v14 = 11LL * v12;
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[v14 + 174545343],
          4,
          1,
          v10);
        if ( (int)*v13 > 0 )
        {
          do
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              &dword_140404A6C[11 * v12 + 174545344 + v9++],
              4,
              1,
              v10);
          while ( v9 < (int)*v13 );
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[v14 + 174545352],
          4,
          1,
          v10);
        v9 = 0;
        v15 = v74 < 2;
        v13[10] = 0;
        if ( !v15 )
          (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
            &dword_140404A6C[v14 + 174545353],
            4,
            1,
            v10);
        ++v12;
        v13 += 11;
      }
      while ( v12 < (int)g_169DDB164 );
      v3 = v76;
      v4 = v75;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169F3B168,
      4,
      1,
      v10);
    if ( (int)g_169F3B168 > 0 )
    {
      do
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[v9++ + 174905792],
          4,
          1,
          v10);
      while ( v9 < (int)g_169F3B168 );
    }
    crt_fclose(v10);
  }
  v16 = g_169CBB160;
  v17 = 0;
  v18 = v74;
  v19 = v4;
  mesh_vertex_count = g_169CBB160;
  v73 = v4;
  v77 = v74;
  if ( (int)g_169CBB160 <= 0 )
  {
    v42 = g_169DDB164;
  }
  else
  {
    v20 = 0;
    v21 = g_183EBC2C4;
    v22 = 0;
    v23 = g_183EBC300;
    v24 = g_169CBB160;
    v25 = g_183EBC340;
    v26 = g_183EBC2C0;
    v27 = g_183EBC280;
    v28 = g_183EBC244;
    v29 = g_183EBB728;
    v30 = g_183EBB6D0;
    v78 = *(_QWORD *)&g_183EBB72C;
    do
    {
      v31 = dword_140404A6C[v20 + 174250430];
      v32 = dword_140404A6C[v20 + 174250431];
      v33 = (float *)&dword_140404A6C[v20 + 177167569];
      v34 = *(float *)&dword_140404A6C[v20 + 174250432];
      if ( v73 == -1 )
      {
        dword_140404A6C[v20 + 177167567] = v31;
        v37 = *(float *)&v32;
        dword_140404A6C[v20 + 177167568] = v32;
        v38 = v34;
        *v33 = v34;
        if ( v3 == v29 )
        {
          v38 = v34 * 0.125;
          *v33 = v34 * 0.125;
          *(float *)&dword_140404A6C[v20 + 177167567] = *(float *)&v31 * 0.125;
          v37 = *(float *)&v32 * 0.125;
          *(float *)&dword_140404A6C[v20 + 177167568] = *(float *)&v32 * 0.125;
        }
        if ( v3 == (_DWORD)v78 )
        {
          v37 = *(float *)&v32 * 0.09375;
          v38 = v34 * 0.09375;
          *(float *)&dword_140404A6C[v20 + 177167568] = *(float *)&v32 * 0.09375;
          *(float *)&dword_140404A6C[v20 + 177167567] = *(float *)&v31 * 0.09375;
          *v33 = v34 * 0.09375;
        }
        v39 = v38;
        if ( v3 >= v28 )
        {
          if ( v3 <= v26 )
          {
            v39 = *v33;
            v37 = v37 - 0.0234375;
            *(float *)&dword_140404A6C[v20 + 177167568] = v37;
          }
          if ( v3 <= v27 )
          {
            v37 = v37 - 0.03125;
            *(float *)&dword_140404A6C[v20 + 177167568] = v37;
          }
        }
        if ( v3 >= v21 )
        {
          if ( v3 <= v25 )
          {
            v37 = v37 - 0.0234375;
            *(float *)&dword_140404A6C[v20 + 177167568] = v37;
          }
          if ( v3 <= v23 )
            *(float *)&dword_140404A6C[v20 + 177167568] = v37 - 0.03125;
        }
        if ( v3 == v30 )
          v39 = *v33 - 0.03125;
        v36 = -v39;
        v35 = -*(float *)&dword_140404A6C[v20 + 177167567];
      }
      else
      {
        v35 = *(float *)&v31 * 0.375;
        *(float *)&dword_140404A6C[v20 + 177167568] = *(float *)&v32 * 0.375;
        v36 = v34 * 0.375;
      }
      *(float *)&dword_140404A6C[v20 + 177167567] = v35;
      v19 = v73;
      *v33 = v36;
      v40 = *(float *)&dword_140404A6C[v20 + 177167568];
      v41 = *(float *)&dword_140404A6C[v20 + 177167569];
      *(_QWORD *)&dword_140404A6C[v22 + 177216719] = 0;
      if ( (float)((float)((float)(v40 * v40) + (float)(v35 * v35)) + (float)(v41 * v41)) > 1.0 )
        v17 = v79;
      if ( v77 >= 3 )
      {
        dword_140404A6C[v22 + 177216719] = dword_140404A6C[v22 + 174348734];
        dword_140404A6C[v22 + 177216720] = dword_140404A6C[v22 + 174348735];
        v19 = v73;
      }
      v20 += 3;
      v22 += 2;
      --v24;
    }
    while ( v24 );
    v42 = g_169DDB164;
    v16 = mesh_vertex_count;
    v18 = v77;
    if ( v17 )
      v42 = 0;
    v4 = v75;
    g_169DDB164 = v42;
  }
  mesh_triangle_count = 0;
  v43 = 0;
  v44 = &g_169DDB16C;
  v45 = 0;
  if ( v42 > 0 )
  {
    v46 = (int *)&g_169DDB16C;
    while ( 1 )
    {
      v47 = *(v46 - 1);
      if ( v47 == 3 )
      {
        v48 = *v46;
        v49 = v46[1];
        v50 = v46[2];
        dword_140404A6C[3 * v43 + 177495248] = v48;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = v49;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = v50;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        if ( v18 >= 3 )
        {
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = dword_140404A6C[2 * v48 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = dword_140404A6C[2 * v48 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = dword_140404A6C[2 * v49 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = dword_140404A6C[2 * v49 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = dword_140404A6C[2 * v50 + 174348734];
          v51 = 3 * mesh_triangle_count;
          v52 = dword_140404A6C[2 * v50 + 174348735];
LABEL_66:
          dword_140404A6C[2 * v51 + 178011350] = v52;
        }
      }
      else
      {
        if ( v47 != 4 || v46[9] )
          goto LABEL_68;
        v53 = *v46;
        v54 = v46[1];
        v55 = v46[2];
        dword_140404A6C[3 * v43 + 177495248] = v53;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = v54;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = v55;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        if ( v18 >= 3 )
        {
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = dword_140404A6C[2 * v53 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = dword_140404A6C[2 * v53 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = dword_140404A6C[2 * v54 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = dword_140404A6C[2 * v54 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = dword_140404A6C[2 * v55 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011350] = dword_140404A6C[2 * v55 + 174348735];
        }
        v56 = v55;
        ++mesh_triangle_count;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = v53;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = v55;
        v57 = v46[3];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = v57;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        if ( v18 >= 3 )
        {
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = dword_140404A6C[2 * v53 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = dword_140404A6C[2 * v53 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = dword_140404A6C[2 * v56 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = dword_140404A6C[2 * v56 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = dword_140404A6C[2 * v57 + 174348734];
          v51 = 3 * mesh_triangle_count;
          v52 = dword_140404A6C[2 * v57 + 174348735];
          goto LABEL_66;
        }
      }
      v43 = ++mesh_triangle_count;
LABEL_68:
      ++v45;
      v46 += 11;
      if ( v45 >= v42 )
      {
        v4 = v75;
        v16 = mesh_vertex_count;
        v19 = v75;
        v3 = v76;
        break;
      }
    }
  }
  if ( v4 != -1 )
  {
    v58 = 0;
    dword_140404A6C[1268 * v19 + 278521668] = 0;
    if ( v16 > 0 )
    {
      v59 = (unsigned int)v16;
      v60 = (unsigned int *)&g_16A7DBDB0;
      v61 = 1268 * v19;
      do
      {
        v60 += 3;
        v62 = v61 * 4 + 12LL * v58;
        *(unsigned int *)((char *)&g_182A7E780 + v62) = *(v60 - 5);
        *(unsigned int *)((char *)&g_182A7E784 + v62) = *(v60 - 4);
        *(unsigned int *)((char *)&g_182A7E788 + v62) = *(v60 - 3);
        v58 = dword_140404A6C[v61 + 278521668] + 1;
        dword_140404A6C[v61 + 278521668] = v58;
        --v59;
      }
      while ( v59 );
    }
    dword_140404A6C[1268 * v19 + 278521861] = 0;
    v63 = 0;
    if ( v42 > 0 )
    {
      v64 = 1268 * v19;
      v65 = (unsigned int)v42;
      do
      {
        v66 = *(v44 - 1);
        v67 = 0;
        dword_140404A6C[6 * (int)v63 + 278521863 + v64] = v66;
        if ( v66 > 0 )
        {
          v68 = v44;
          v69 = (unsigned int)v66;
          do
          {
            ++v68;
            v70 = 1268 * v19 + v67 + 6LL * (int)dword_140404A6C[v64 + 278521861];
            ++v67;
            dword_140404A6C[v70 + 278521864] = *(v68 - 1);
            --v69;
          }
          while ( v69 );
        }
        v44 += 11;
        v63 = dword_140404A6C[v64 + 278521861] + 1;
        dword_140404A6C[v64 + 278521861] = v63;
        --v65;
      }
      while ( v65 );
      v3 = v76;
    }
  }
  sub_1401449C0(v3, 1);
  return;
}
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82

//----- (00000001400EA7C0) ----------------------------------------------------
void            sub_1400EA7C0(int a1)
{
  int v1;
  signed int i;
  __int64 v3;
  int v4;
  char v5;
  unsigned int v6;
  signed int v7;
  __int64 v8;
  signed int v9;
  char v10;
  unsigned int v11;
  signed int v12;
  __int64 v13;
  signed int v14;
  char v15;
  __int64 v16;
  __int64 v17;

  if ( a1 )
  {
    v16 = crt_fopen("debugconfig.txt", "wb");
    v17 = v16;
    if ( v16 )
    {
      sub_1400920F0(v16, "%s%d\r\n", "startposition0=", g_16B2A222C);
      sub_1400920F0(v17, "%s%d\r\n", "startposition1=", g_16B2A2230);
      sub_1400920F0(v17, "%s%d\r\n", "startposition2=", g_16B2A2234);
      crt_fclose(v17);
    }
  }
  else
  {
    g_16B2A222C = 1508;
    g_16B2A2230 = 62;
    g_16B2A2234 = 1472;
    sub_1400ED940("debugconfig.txt");
    v1 = g_1862AE020;
    for ( i = g_1862AE024; v1 < (int)g_1862AE024; g_1862AE020 = ++v1 )
    {
      v3 = 0;
      if ( v1 < (int)g_1862AE024 )
      {
        v4 = v1;
        do
        {
          v5 = sr_mem_140273b60[v3];
          if ( !v5 )
            break;
          if ( v5 != *((_BYTE *)&g_1862AE028 + v4) )
            break;
          ++v4;
          ++v3;
        }
        while ( v4 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140273b60[v3] )
        break;
    }
    g_1862AE020 = v1 + 15;
    if ( v1 + 15 < (int)g_1862AE024 )
    {
      v6 = sub_1400A3D70();
      i = g_1862AE024;
      g_16B2A222C = v6;
    }
    v7 = 0;
    for ( g_1862AE020 = 0; v7 < i; g_1862AE020 = ++v7 )
    {
      v8 = 0;
      if ( v7 < i )
      {
        v9 = v7;
        do
        {
          v10 = sr_mem_140273b70[v8];
          if ( !v10 )
            break;
          if ( v10 != *((_BYTE *)&g_1862AE028 + v9) )
            break;
          ++v9;
          ++v8;
        }
        while ( v9 < i );
      }
      if ( !sr_mem_140273b70[v8] )
        break;
    }
    g_1862AE020 = v7 + 15;
    if ( v7 + 15 < i )
    {
      v11 = sub_1400A3D70();
      i = g_1862AE024;
      g_16B2A2230 = v11;
    }
    v12 = 0;
    for ( g_1862AE020 = 0; v12 < i; g_1862AE020 = ++v12 )
    {
      v13 = 0;
      if ( v12 < i )
      {
        v14 = v12;
        do
        {
          v15 = sr_mem_140273b80[v13];
          if ( !v15 )
            break;
          if ( v15 != *((_BYTE *)&g_1862AE028 + v14) )
            break;
          ++v14;
          ++v13;
        }
        while ( v14 < i );
      }
      if ( !sr_mem_140273b80[v13] )
        break;
    }
    g_1862AE020 = v12 + 15;
    if ( v12 + 15 < i )
      g_16B2A2234 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
}

//----- (00000001400EC410) ----------------------------------------------------
double            sub_1400EC410(int a1)
{
  __m128i si128;
  int v3;
  signed int v4;
  __int64 i;
  __int64 v6;
  int v7;
  char v8;
  unsigned int v9;
  signed int v10;
  __int64 v11;
  signed int v12;
  char v13;
  unsigned int v14;
  signed int v15;
  __int64 v16;
  signed int v17;
  char v18;
  unsigned int v19;
  signed int v20;
  __int64 v21;
  signed int v22;
  char v23;
  unsigned int v24;
  signed int v25;
  __int64 v26;
  signed int v27;
  char v28;
  int v29;
  __int64 v30;
  unsigned int v31;

  if ( a1 )
  {
    v30 = crt_fopen("config_round.txt", "wb");
    i = v30;
    if ( !v30 )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(v30, "%s%d\r\n", "roundtime=", g_183F7A5AC);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", g_183F7A5B0);
    sub_1400920F0(i, "%s%d\r\n", "weekly=", g_183F7A5B4);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", g_183F7A5B8);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", g_183F7A5BC);
    v29 = g_183F7A5BC;
  }
  else
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140278EC0);
    *(__m128i_u *)&g_183F7A5AC = si128;
    g_183F7A5BC = 50;
    sub_1400ED940("config_round.txt");
    v3 = g_1862AE020;
    v4 = g_1862AE024;
    for ( i = 0; v3 < (int)g_1862AE024; g_1862AE020 = ++v3 )
    {
      v6 = 0;
      if ( v3 < (int)g_1862AE024 )
      {
        v7 = v3;
        do
        {
          v8 = sr_mem_140276c18[v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&g_1862AE028 + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276c18[v6] )
        break;
    }
    g_1862AE020 = v3 + 10;
    if ( v3 + 10 < (int)g_1862AE024 )
    {
      v9 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5AC = v9;
    }
    v10 = 0;
    for ( g_1862AE020 = 0; v10 < v4; g_1862AE020 = ++v10 )
    {
      v11 = 0;
      if ( v10 < v4 )
      {
        v12 = v10;
        do
        {
          v13 = sr_mem_140276e60[v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&g_1862AE028 + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !sr_mem_140276e60[v11] )
        break;
    }
    g_1862AE020 = v10 + 10;
    if ( v10 + 10 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5B0 = v14;
    }
    v15 = 0;
    for ( g_1862AE020 = 0; v15 < v4; g_1862AE020 = ++v15 )
    {
      v16 = 0;
      if ( v15 < v4 )
      {
        v17 = v15;
        do
        {
          v18 = sr_mem_140276eb8[v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&g_1862AE028 + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !sr_mem_140276eb8[v16] )
        break;
    }
    g_1862AE020 = v15 + 7;
    if ( v15 + 7 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5B4 = v19;
    }
    v20 = 0;
    for ( g_1862AE020 = 0; v20 < v4; g_1862AE020 = ++v20 )
    {
      v21 = 0;
      if ( v20 < v4 )
      {
        v22 = v20;
        do
        {
          v23 = sr_mem_140276ec0[v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&g_1862AE028 + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !sr_mem_140276ec0[v21] )
        break;
    }
    g_1862AE020 = v20 + 11;
    if ( v20 + 11 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5B8 = v24;
    }
    v25 = 0;
    for ( g_1862AE020 = 0; v25 < v4; g_1862AE020 = ++v25 )
    {
      v26 = 0;
      if ( v25 < v4 )
      {
        v27 = v25;
        do
        {
          v28 = sr_mem_140276ed0[v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&g_1862AE028 + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !sr_mem_140276ed0[v26] )
        break;
    }
    g_1862AE020 = v25 + 11;
    if ( v25 + 11 >= v4 )
      v29 = g_183F7A5BC;
    else
      v29 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  if ( (int)g_183F7A5AC >= 1 )
  {
    v31 = g_183F7A5AC;
    if ( (int)g_183F7A5AC > 60 )
      v31 = 60;
    g_183F7A5AC = v31;
  }
  else
  {
    g_183F7A5AC = 1;
  }
  if ( v29 >= 0 )
  {
    if ( v29 > 200 )
      v29 = 200;
    g_183F7A5BC = v29;
  }
  else
  {
    g_183F7A5BC = 0;
  }
  if ( a1 )
    crt_fclose(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

//----- (00000001400EC7E0) ----------------------------------------------------
double            sub_1400EC7E0(int a1)
{
  __m128i si128;
  int v3;
  signed int v4;
  __int64 i;
  __int64 v6;
  int v7;
  char v8;
  unsigned int v9;
  signed int v10;
  __int64 v11;
  signed int v12;
  char v13;
  unsigned int v14;
  signed int v15;
  __int64 v16;
  signed int v17;
  char v18;
  unsigned int v19;
  signed int v20;
  __int64 v21;
  signed int v22;
  char v23;
  unsigned int v24;
  signed int v25;
  __int64 v26;
  signed int v27;
  char v28;
  unsigned int v29;
  signed int v30;
  __int64 v31;
  signed int v32;
  char v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;

  if ( a1 )
  {
    v34 = crt_fopen("config_versus.txt", "wb");
    i = v34;
    if ( !v34 )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(v34, "%s%d\r\n", "allowrespawn=", g_183F7A5F8);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", g_183F7A5FC);
    sub_1400920F0(i, "%s%d\r\n", "roundtime=", g_183F7A600);
    sub_1400920F0(i, "%s%d\r\n", "movedelay=", g_183F7A604);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", g_183F7A608);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", g_183F7A60C);
  }
  else
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140278E10);
    strcpy((char *)&g_183F7A614, "versus");
    g_183F7A654 = 0x32737573726576LL;
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5F8, si128);
    g_183F7A608 = 1;
    g_183F7A60C = 50;
    sub_1400ED940("config_versus.txt");
    v3 = g_1862AE020;
    v4 = g_1862AE024;
    for ( i = 0; v3 < (int)g_1862AE024; g_1862AE020 = ++v3 )
    {
      v6 = 0;
      if ( v3 < (int)g_1862AE024 )
      {
        v7 = v3;
        do
        {
          v8 = sr_mem_140276ef8[v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&g_1862AE028 + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276ef8[v6] )
        break;
    }
    g_1862AE020 = v3 + 13;
    if ( v3 + 13 < (int)g_1862AE024 )
    {
      v9 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5F8 = v9;
    }
    v10 = 0;
    for ( g_1862AE020 = 0; v10 < v4; g_1862AE020 = ++v10 )
    {
      v11 = 0;
      if ( v10 < v4 )
      {
        v12 = v10;
        do
        {
          v13 = sr_mem_140276e60[v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&g_1862AE028 + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !sr_mem_140276e60[v11] )
        break;
    }
    g_1862AE020 = v10 + 10;
    if ( v10 + 10 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5FC = v14;
    }
    v15 = 0;
    for ( g_1862AE020 = 0; v15 < v4; g_1862AE020 = ++v15 )
    {
      v16 = 0;
      if ( v15 < v4 )
      {
        v17 = v15;
        do
        {
          v18 = sr_mem_140276c18[v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&g_1862AE028 + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !sr_mem_140276c18[v16] )
        break;
    }
    g_1862AE020 = v15 + 10;
    if ( v15 + 10 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A600 = v19;
    }
    v20 = 0;
    for ( g_1862AE020 = 0; v20 < v4; g_1862AE020 = ++v20 )
    {
      v21 = 0;
      if ( v20 < v4 )
      {
        v22 = v20;
        do
        {
          v23 = sr_mem_140276f08[v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&g_1862AE028 + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !sr_mem_140276f08[v21] )
        break;
    }
    g_1862AE020 = v20 + 10;
    if ( v20 + 10 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A604 = v24;
    }
    v25 = 0;
    for ( g_1862AE020 = 0; v25 < v4; g_1862AE020 = ++v25 )
    {
      v26 = 0;
      if ( v25 < v4 )
      {
        v27 = v25;
        do
        {
          v28 = sr_mem_140276ec0[v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&g_1862AE028 + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !sr_mem_140276ec0[v26] )
        break;
    }
    g_1862AE020 = v25 + 11;
    if ( v25 + 11 < v4 )
    {
      v29 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A608 = v29;
    }
    v30 = 0;
    for ( g_1862AE020 = 0; v30 < v4; g_1862AE020 = ++v30 )
    {
      v31 = 0;
      if ( v30 < v4 )
      {
        v32 = v30;
        do
        {
          v33 = sr_mem_140276ed0[v31];
          if ( !v33 )
            break;
          if ( v33 != *((_BYTE *)&g_1862AE028 + v32) )
            break;
          ++v32;
          ++v31;
        }
        while ( v32 < v4 );
      }
      if ( !sr_mem_140276ed0[v31] )
        break;
    }
    g_1862AE020 = v30 + 11;
    if ( v30 + 11 < v4 )
      g_183F7A60C = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  sub_14010E0D0((char *)&g_183F7A614, "map01=", 30, i, a1);
  sub_14010E0D0((char *)(unsigned int *)&g_183F7A654, "map02=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A694, "map03=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A6D4, "map04=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A714, "map05=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A754, "map06=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A794, "map07=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A7D4, "map08=", 30, i, a1);
  v35 = g_183F7A600;
  if ( (int)g_183F7A600 >= 1 )
  {
    if ( (int)g_183F7A600 > 60 )
      v35 = 60;
    g_183F7A600 = v35;
  }
  else
  {
    g_183F7A600 = 1;
  }
  v36 = g_183F7A60C;
  if ( (g_183F7A60C & 0x80000000) == 0 )
  {
    if ( (int)g_183F7A60C > 200 )
      v36 = 200;
    g_183F7A60C = v36;
  }
  else
  {
    g_183F7A60C = 0;
  }
  if ( a1 )
    crt_fclose(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

//----- (00000001400ECD70) ----------------------------------------------------
double            sub_1400ECD70(int a1)
{
  __m128i si128;
  int v3;
  signed int v4;
  __int64 i;
  __int64 v6;
  int v7;
  char v8;
  unsigned int v9;
  signed int v10;
  __int64 v11;
  signed int v12;
  char v13;
  unsigned int v14;
  signed int v15;
  __int64 v16;
  signed int v17;
  char v18;
  unsigned int v19;
  signed int v20;
  __int64 v21;
  signed int v22;
  char v23;
  unsigned int v24;
  signed int v25;
  __int64 v26;
  signed int v27;
  char v28;
  unsigned int v29;
  signed int v30;
  __int64 v31;
  signed int v32;
  char v33;
  unsigned int v34;
  signed int v35;
  __int64 v36;
  signed int v37;
  char v38;
  unsigned int v39;
  signed int v40;
  __int64 v41;
  signed int v42;
  char v43;
  unsigned int v44;
  signed int v45;
  __int64 v46;
  signed int v47;
  char v48;
  unsigned int v49;
  signed int v50;
  __int64 v51;
  signed int v52;
  char v53;
  unsigned int v54;
  signed int v55;
  __int64 v56;
  signed int v57;
  char v58;
  unsigned int v59;
  signed int v60;
  __int64 v61;
  signed int v62;
  char v63;
  unsigned int v64;
  signed int v65;
  __int64 v66;
  signed int v67;
  char v68;
  unsigned int v69;
  signed int v70;
  __int64 v71;
  signed int v72;
  char v73;
  __int64 v74;
  unsigned int v75;
  unsigned int v76;

  if ( a1 )
  {
    v74 = crt_fopen("config_world.txt", "wb");
    i = v74;
    if ( !v74 )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(v74, "%s%d\r\n", "traffic=", g_183F7A5C0);
    sub_1400920F0(i, "%s%d\r\n", "crimecivciv=", g_183F7A5C4);
    sub_1400920F0(i, "%s%d\r\n", "crimecivteam=", g_183F7A5C8);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamciv=", g_183F7A5CC);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteam=", g_183F7A5D0);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteaminbase=", g_183F7A5D4);
    sub_1400920F0(i, "%s%d\r\n", "crimevscriminal=", g_183F7A5D8);
    sub_1400920F0(i, "%s%d\r\n", "crimenobuy=", g_183F7A5DC);
    sub_1400920F0(i, "%s%d\r\n", "crimenospawn=", g_183F7A5E0);
    sub_1400920F0(i, "%s%d\r\n", "crimekick=", g_183F7A5E4);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", g_183F7A5E8);
    sub_1400920F0(i, "%s%d\r\n", "mincash=", g_183F7A5EC);
    sub_1400920F0(i, "%s%d\r\n", "showjoinexit=", g_183F7A5F0);
    sub_1400920F0(i, "%s%d\r\n", "respawnteam=", g_183F7A5F4);
  }
  else
  {
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5C0, _mm_load_si128((     __m128i *)&xmmword_1402790F0));
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279190);
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5E0, si128);
    *(_QWORD *)&g_183F7A5F0 = 1;
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5D0, _mm_load_si128((     __m128i *)&xmmword_140279180));
    sub_1400ED940("config_world.txt");
    v3 = g_1862AE020;
    v4 = g_1862AE024;
    for ( i = 0; v3 < (int)g_1862AE024; g_1862AE020 = ++v3 )
    {
      v6 = 0;
      if ( v3 < (int)g_1862AE024 )
      {
        v7 = v3;
        do
        {
          v8 = sr_mem_140276db0[v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&g_1862AE028 + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276db0[v6] )
        break;
    }
    g_1862AE020 = v3 + 8;
    if ( v3 + 8 < (int)g_1862AE024 )
    {
      v9 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5C0 = v9;
    }
    v10 = 0;
    for ( g_1862AE020 = 0; v10 < v4; g_1862AE020 = ++v10 )
    {
      v11 = 0;
      if ( v10 < v4 )
      {
        v12 = v10;
        do
        {
          v13 = sr_mem_140276dc0[v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&g_1862AE028 + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !sr_mem_140276dc0[v11] )
        break;
    }
    g_1862AE020 = v10 + 12;
    if ( v10 + 12 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5C4 = v14;
    }
    v15 = 0;
    for ( g_1862AE020 = 0; v15 < v4; g_1862AE020 = ++v15 )
    {
      v16 = 0;
      if ( v15 < v4 )
      {
        v17 = v15;
        do
        {
          v18 = sr_mem_140276dd0[v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&g_1862AE028 + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !sr_mem_140276dd0[v16] )
        break;
    }
    g_1862AE020 = v15 + 13;
    if ( v15 + 13 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5C8 = v19;
    }
    v20 = 0;
    for ( g_1862AE020 = 0; v20 < v4; g_1862AE020 = ++v20 )
    {
      v21 = 0;
      if ( v20 < v4 )
      {
        v22 = v20;
        do
        {
          v23 = sr_mem_140276de0[v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&g_1862AE028 + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !sr_mem_140276de0[v21] )
        break;
    }
    g_1862AE020 = v20 + 13;
    if ( v20 + 13 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5CC = v24;
    }
    v25 = 0;
    for ( g_1862AE020 = 0; v25 < v4; g_1862AE020 = ++v25 )
    {
      v26 = 0;
      if ( v25 < v4 )
      {
        v27 = v25;
        do
        {
          v28 = sr_mem_140276df0[v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&g_1862AE028 + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !sr_mem_140276df0[v26] )
        break;
    }
    g_1862AE020 = v25 + 14;
    if ( v25 + 14 < v4 )
    {
      v29 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5D0 = v29;
    }
    v30 = 0;
    for ( g_1862AE020 = 0; v30 < v4; g_1862AE020 = ++v30 )
    {
      v31 = 0;
      if ( v30 < v4 )
      {
        v32 = v30;
        do
        {
          v33 = sr_mem_140276e00[v31];
          if ( !v33 )
            break;
          if ( v33 != *((_BYTE *)&g_1862AE028 + v32) )
            break;
          ++v32;
          ++v31;
        }
        while ( v32 < v4 );
      }
      if ( !sr_mem_140276e00[v31] )
        break;
    }
    g_1862AE020 = v30 + 20;
    if ( v30 + 20 < v4 )
    {
      v34 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5D4 = v34;
    }
    v35 = 0;
    for ( g_1862AE020 = 0; v35 < v4; g_1862AE020 = ++v35 )
    {
      v36 = 0;
      if ( v35 < v4 )
      {
        v37 = v35;
        do
        {
          v38 = sr_mem_140276e18[v36];
          if ( !v38 )
            break;
          if ( v38 != *((_BYTE *)&g_1862AE028 + v37) )
            break;
          ++v37;
          ++v36;
        }
        while ( v37 < v4 );
      }
      if ( !sr_mem_140276e18[v36] )
        break;
    }
    g_1862AE020 = v35 + 16;
    if ( v35 + 16 < v4 )
    {
      v39 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5D8 = v39;
    }
    v40 = 0;
    for ( g_1862AE020 = 0; v40 < v4; g_1862AE020 = ++v40 )
    {
      v41 = 0;
      if ( v40 < v4 )
      {
        v42 = v40;
        do
        {
          v43 = sr_mem_140276e30[v41];
          if ( !v43 )
            break;
          if ( v43 != *((_BYTE *)&g_1862AE028 + v42) )
            break;
          ++v42;
          ++v41;
        }
        while ( v42 < v4 );
      }
      if ( !sr_mem_140276e30[v41] )
        break;
    }
    g_1862AE020 = v40 + 11;
    if ( v40 + 11 < v4 )
    {
      v44 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5DC = v44;
    }
    v45 = 0;
    for ( g_1862AE020 = 0; v45 < v4; g_1862AE020 = ++v45 )
    {
      v46 = 0;
      if ( v45 < v4 )
      {
        v47 = v45;
        do
        {
          v48 = sr_mem_140276e40[v46];
          if ( !v48 )
            break;
          if ( v48 != *((_BYTE *)&g_1862AE028 + v47) )
            break;
          ++v47;
          ++v46;
        }
        while ( v47 < v4 );
      }
      if ( !sr_mem_140276e40[v46] )
        break;
    }
    g_1862AE020 = v45 + 13;
    if ( v45 + 13 < v4 )
    {
      v49 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5E0 = v49;
    }
    v50 = 0;
    for ( g_1862AE020 = 0; v50 < v4; g_1862AE020 = ++v50 )
    {
      v51 = 0;
      if ( v50 < v4 )
      {
        v52 = v50;
        do
        {
          v53 = sr_mem_140276e50[v51];
          if ( !v53 )
            break;
          if ( v53 != *((_BYTE *)&g_1862AE028 + v52) )
            break;
          ++v52;
          ++v51;
        }
        while ( v52 < v4 );
      }
      if ( !sr_mem_140276e50[v51] )
        break;
    }
    g_1862AE020 = v50 + 10;
    if ( v50 + 10 < v4 )
    {
      v54 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5E4 = v54;
    }
    v55 = 0;
    for ( g_1862AE020 = 0; v55 < v4; g_1862AE020 = ++v55 )
    {
      v56 = 0;
      if ( v55 < v4 )
      {
        v57 = v55;
        do
        {
          v58 = sr_mem_140276e60[v56];
          if ( !v58 )
            break;
          if ( v58 != *((_BYTE *)&g_1862AE028 + v57) )
            break;
          ++v57;
          ++v56;
        }
        while ( v57 < v4 );
      }
      if ( !sr_mem_140276e60[v56] )
        break;
    }
    g_1862AE020 = v55 + 10;
    if ( v55 + 10 < v4 )
    {
      v59 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5E8 = v59;
    }
    v60 = 0;
    for ( g_1862AE020 = 0; v60 < v4; g_1862AE020 = ++v60 )
    {
      v61 = 0;
      if ( v60 < v4 )
      {
        v62 = v60;
        do
        {
          v63 = sr_mem_140276e70[v61];
          if ( !v63 )
            break;
          if ( v63 != *((_BYTE *)&g_1862AE028 + v62) )
            break;
          ++v62;
          ++v61;
        }
        while ( v62 < v4 );
      }
      if ( !sr_mem_140276e70[v61] )
        break;
    }
    g_1862AE020 = v60 + 8;
    if ( v60 + 8 < v4 )
    {
      v64 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5EC = v64;
    }
    v65 = 0;
    for ( g_1862AE020 = 0; v65 < v4; g_1862AE020 = ++v65 )
    {
      v66 = 0;
      if ( v65 < v4 )
      {
        v67 = v65;
        do
        {
          v68 = sr_mem_140276e80[v66];
          if ( !v68 )
            break;
          if ( v68 != *((_BYTE *)&g_1862AE028 + v67) )
            break;
          ++v67;
          ++v66;
        }
        while ( v67 < v4 );
      }
      if ( !sr_mem_140276e80[v66] )
        break;
    }
    g_1862AE020 = v65 + 13;
    if ( v65 + 13 < v4 )
    {
      v69 = sub_1400A3D70();
      v4 = g_1862AE024;
      g_183F7A5F0 = v69;
    }
    v70 = 0;
    for ( g_1862AE020 = 0; v70 < v4; g_1862AE020 = ++v70 )
    {
      v71 = 0;
      if ( v70 < v4 )
      {
        v72 = v70;
        do
        {
          v73 = sr_mem_140276e90[v71];
          if ( !v73 )
            break;
          if ( v73 != *((_BYTE *)&g_1862AE028 + v72) )
            break;
          ++v72;
          ++v71;
        }
        while ( v72 < v4 );
      }
      if ( !sr_mem_140276e90[v71] )
        break;
    }
    g_1862AE020 = v70 + 12;
    if ( v70 + 12 < v4 )
      g_183F7A5F4 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  if ( (g_183F7A5C0 & 0x80000000) == 0 )
  {
    v75 = g_183F7A5C0;
    if ( (int)g_183F7A5C0 > 512 )
      v75 = 512;
    g_183F7A5C0 = v75;
  }
  else
  {
    g_183F7A5C0 = 0;
  }
  v76 = g_183F7A5E4;
  if ( (int)g_183F7A5E4 < 1 )
    v76 = 1;
  g_183F7A5E4 = v76;
  if ( a1 )
    crt_fclose(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

//----- (00000001400ED690) ----------------------------------------------------
__int64            sub_1400ED690(char *a1)
{
  char *v2;
  FILE *v4;
  int v5;
  FILE *v6;
  int v7;
  unsigned int *v8;
  unsigned __int64 v9;
  __m128i *v10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400ED690[560];
#define v12 (*(__int64 (*))(void *)(sr_frame_1400ED690 + 0)) /* [rsp+0h] */
#define v13 (*(char (*)[512])(void *)(sr_frame_1400ED690 + 32)) /* [rsp+20h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1400ED690 + 544)) /* [rsp+220h] */

  crt_sprintf(v13, "%s\r\n", a1);
  v2 = (char *)&g_1515B0BBC + 3;
  while ( *++v2 != 0 )
    ;
  v4 = (FILE *)strcpy(v2, v13);
  v5 = 0;
  v6 = (FILE *)crt_fopen(a1, "rb");
  if ( v6 )
  {
    v7 = sub_14020BB2C(v6);
    if ( v7 != -1 )
    {
      v8 = &g_151600C40;
      do
      {
        *(_BYTE *)v8 = v7;
        v8 = (unsigned int *)((char *)v8 + 1);
        ++v5;
        v7 = sub_14020BB2C(v4);
      }
      while ( v7 != -1 );
    }
    if ( (unsigned __int64)v5 >= 0x20000 )
      sub_1401F8694();
    *((_BYTE *)&g_151600C40 + v5) = 0;
    crt_fclose((__int64)v4);
    v9 = v5 + 1;
    v10 = (__m128i *)sr_path_malloc(v9);
    crt_memcpy(v10, (     __m128i *)&g_151600C40, v9);
  }
  return 0; /* the function has no caller */
}
#undef v12
#undef v13
#undef v14

//----- (00000001400ED7D0) ----------------------------------------------------
void sub_1400ED7D0()
{
  int i;
  __int64 v1;
  int v2;
  char v3;
  int v4;
  char v5;
  __int64 v6;
  char v7;
  __int64 v8;

  sub_1400ED940("serversteamban.txt");
  for ( g_1606E1348 = 0; ; ++g_1606E1348 )
  {
    for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
    {
      v1 = 0;
      if ( i < (int)g_1862AE024 )
      {
        v2 = i;
        do
        {
          v3 = aSteamban[v1];
          if ( !v3 )
            break;
          if ( v3 != *((_BYTE *)&g_1862AE028 + v2) )
            break;
          ++v2;
          ++v1;
        }
        while ( v2 < (int)g_1862AE024 );
      }
      if ( !aSteamban[v1] )
        break;
    }
    v4 = i + 9;
    g_1862AE020 = i + 9;
    if ( i + 9 >= (int)g_1862AE024 )
      break;
    do
    {
      v5 = *((_BYTE *)&g_1862AE028 + v4);
      if ( (unsigned __int8)(v5 - 48) <= 9u )
        break;
      if ( v5 == 45 )
        break;
      g_1862AE020 = ++v4;
    }
    while ( v4 < (int)g_1862AE024 );
    v6 = 0;
    if ( v4 < (int)g_1862AE024 )
    {
      do
      {
        if ( v6 >= 255 )
          break;
        v7 = *((_BYTE *)&g_1862AE028 + v4);
        if ( (unsigned __int8)(v7 - 48) > 9u && v7 != 45 )
          break;
        *((_BYTE *)&g_1863AE028 + v6++) = v7;
        v4 = ++g_1862AE020;
      }
      while ( (int)g_1862AE020 < (int)g_1862AE024 );
    }
    *((_BYTE *)&g_1863AE028 + v6) = 0;
    crt_sscanf((__int64)&g_1863AE028, "%I64u", &v8);
    *(_QWORD *)&dword_140404A6C[2 * g_1606E1348 + 134967865] = v8;
  }
}

//----- (00000001400ED940) ----------------------------------------------------
void            sub_1400ED940(char *a1)
{
  FILE *v1;
  FILE *v2;
  int i;

  g_1862AE024 = 0;
  v1 = (FILE *)crt_fopen(a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    for ( i = sub_14020BB2C(v1); i != -1; i = sub_14020BB2C(v2) )
      *((_BYTE *)&g_1862AE028 + (int)g_1862AE024++) = i;
    *((_BYTE *)&g_1862AE028 + (int)g_1862AE024) = 0;
    crt_fclose((__int64)v2);
  }
  g_1862AE020 = 0;
}

//----- (00000001400ED9D0) ----------------------------------------------------
__int64            sub_1400ED9D0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7;
  char *v10;
  __int64 result;
  signed __int64 v12;
  char v13;
  unsigned int v14;
  __int64 v15;
  unsigned int *v16;
  unsigned int *v17;
  void **v18;
  __int64 v19;
  signed int v20;
  signed int i;
  signed int v22;

  v7 = a1;
  v10 = a2;
  result = sub_1400E7590(a2);
  if ( (_DWORD)result )
  {
    v12 = (char *)&g_18402CC20 - v10;
    do
    {
      v13 = *v10;
      v10[v12] = *v10;
      ++v10;
    }
    while ( v13 );
    v14 = g_1B0037420;
    v15 = 44 * v7;
    v16 = &dword_140404A6C[44 * v7 + 284024933];
    v17 = &dword_140404A6C[44 * v7 + 284024934];
    dword_140404A6C[v15 + 284024938] = a4;
    *v16 = v14;
    v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
    *v17 = g_1B0037424;
    dword_140404A6C[v15 + 284024939] = a5;
    dword_140404A6C[v15 + 284024940] = a6;
    dword_140404A6C[v15 + 284024941] = a7;
    dword_140404A6C[v15 + 284024935] = 1;
    dword_140404A6C[v15 + 284024936] = 6408;
    dword_140404A6C[v15 + 284024937] = 6408;
    dword_140404A6C[v15 + 284024943] = 0;
    free(*v18);
    v19 = sr_path_malloc((int)(4 * *v16 * *v17));
    v20 = 0;
    for ( *v18 = (void *)v19; v20 < (int)*v17; ++v20 )
    {
      for ( i = 0; i < (int)*v16; *((_DWORD *)*v18 + v22) = dword_140404A6C[v22 + 468765295] )
      {
        v22 = i + *v16 * v20;
        ++i;
      }
    }
    if ( a3 )
      sub_14009A370(v7);
    sub_14014D3E0(v7, 1);
    return 1;
  }
  return result;
}

//----- (00000001400EDB70) ----------------------------------------------------
__int64            sub_1400EDB70(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7;
  char *v10;
  __int64 result;
  signed __int64 v12;
  char v13;
  unsigned int v14;
  __int64 v15;
  unsigned int *v16;
  unsigned int *v17;
  void **v18;
  __int64 v19;
  signed int v20;
  signed int i;
  signed int v22;

  v7 = a1;
  v10 = a2;
  result = sub_1400E7590(a2);
  if ( (_DWORD)result )
  {
    v12 = (char *)&g_18402CC20 - v10;
    do
    {
      v13 = *v10;
      v10[v12] = *v10;
      ++v10;
    }
    while ( v13 );
    v14 = g_1B0037420;
    v15 = 44 * v7;
    v16 = &dword_140404A6C[44 * v7 + 284024933];
    v17 = &dword_140404A6C[44 * v7 + 284024934];
    dword_140404A6C[v15 + 284024938] = a4;
    *v16 = v14;
    v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
    *v17 = g_1B0037424;
    dword_140404A6C[v15 + 284024939] = a5;
    dword_140404A6C[v15 + 284024940] = a6;
    dword_140404A6C[v15 + 284024941] = a7;
    dword_140404A6C[v15 + 284024935] = 1;
    dword_140404A6C[v15 + 284024936] = 6408;
    dword_140404A6C[v15 + 284024937] = 6408;
    dword_140404A6C[v15 + 284024943] = 0;
    free(*v18);
    v19 = sr_path_malloc((int)(4 * *v16 * *v17));
    v20 = 0;
    for ( *v18 = (void *)v19; v20 < (int)*v17; ++v20 )
    {
      for ( i = 0; i < (int)*v16; *((_DWORD *)*v18 + v22) = dword_140404A6C[v22 + 468765295] )
      {
        v22 = i + *v16 * v20;
        ++i;
      }
    }
    if ( a3 )
      sub_14009A370(v7);
    sub_14014D3E0(v7, 1);
    return 1;
  }
  return result;
}

//----- (00000001400EDD10) ----------------------------------------------------
void            sub_1400EDD10(int a1, char *a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  __int64 v7;
  char *v9;
  signed __int64 v10;
  char v11;
  __int64 v12;
  unsigned int *v13;
  unsigned int *v14;
  void **v15;
  __int64 v16;
  int v17;
  signed int v18;
  unsigned int v19;
  signed int i;

  v7 = a1;
  v9 = a2;
  if ( strcmp_sr((     char *)&g_18402CC20, a2) )
  {
    if ( !(unsigned int)sub_1400E7590(v9) )
      return;
    v10 = (char *)&g_18402CC20 - v9;
    do
    {
      v11 = *v9;
      v9[v10] = *v9;
      ++v9;
    }
    while ( v11 );
  }
  v12 = 44 * v7;
  v13 = &dword_140404A6C[44 * v7 + 284024933];
  v14 = &dword_140404A6C[44 * v7 + 284024934];
  v15 = (void **)&dword_140404A6C[44 * v7 + 284024945];
  dword_140404A6C[v12 + 284024935] = 1;
  dword_140404A6C[v12 + 284024936] = 6408;
  dword_140404A6C[v12 + 284024933] = a5;
  dword_140404A6C[v12 + 284024934] = a6;
  dword_140404A6C[v12 + 284024937] = 6408;
  dword_140404A6C[v12 + 284024943] = 0;
  dword_140404A6C[v12 + 284024938] = 33071;
  dword_140404A6C[v12 + 284024939] = 33071;
  dword_140404A6C[v12 + 284024940] = 9729;
  dword_140404A6C[v12 + 284024941] = 9729;
  free(*v15);
  v16 = sr_path_malloc((int)(4 * *v13 * *v14));
  v17 = 0;
  *v15 = (void *)v16;
  if ( (int)*v14 > 0 )
  {
    v18 = g_1B0037420;
    do
    {
      if ( v17 < (int)g_1B0037424 )
      {
        v19 = *v13;
        for ( i = 0; i < (int)*v13; ++i )
        {
          if ( i < v18 )
          {
            *((_DWORD *)*v15 + (int)(i + v17 * v19)) = dword_140404A6C[a3 + 468765295 + i + v18 * (v17 + a4)];
            v18 = g_1B0037420;
          }
          v19 = *v13;
        }
      }
      ++v17;
    }
    while ( v17 < (int)*v14 );
  }
  sub_14014D3E0(v7, 0);
}

//----- (00000001400EDED0) ----------------------------------------------------
__int64            sub_1400EDED0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v8;
  char *v11;
  unsigned int v12;
  unsigned int v13;
  signed __int64 v14;
  char v15;
  __int64 v16;
  unsigned int *v17;
  unsigned int *v18;
  void **v19;
  __int64 v20;
  signed int v21;
  unsigned int v22;
  signed int i;
  signed int v24;

  v8 = a1;
  v11 = a2;
  if ( !(unsigned int)sub_1400E7590(a2) )
    return 0;
  v12 = g_1B0037420;
  if ( (v12 & (v12 - 1)) != 0 )
    return 0;
  v13 = g_1B0037424;
  if ( (v13 & (v13 - 1)) != 0 )
    return 0;
  v14 = (char *)&g_18402CC20 - v11;
  do
  {
    v15 = *v11;
    v11[v14] = *v11;
    ++v11;
  }
  while ( v15 );
  v16 = 44 * v8;
  v17 = &dword_140404A6C[44 * v8 + 284024933];
  v18 = &dword_140404A6C[44 * v8 + 284024934];
  dword_140404A6C[v16 + 284024938] = a4;
  dword_140404A6C[v16 + 284024939] = a5;
  v19 = (void **)&dword_140404A6C[44 * v8 + 284024945];
  dword_140404A6C[v16 + 284024940] = a6;
  *v17 = v12;
  *v18 = v13;
  dword_140404A6C[v16 + 284024935] = 1;
  dword_140404A6C[v16 + 284024936] = 6408;
  dword_140404A6C[v16 + 284024937] = 6408;
  dword_140404A6C[v16 + 284024943] = 0;
  dword_140404A6C[v16 + 284024941] = a7;
  free(*v19);
  v20 = sr_path_malloc((int)(4 * *v17 * *v18));
  v21 = 0;
  for ( *v19 = (void *)v20; v21 < (int)*v18; ++v21 )
  {
    v22 = *v17;
    for ( i = 0; i < (int)*v17; v22 = *v17 )
    {
      v24 = i + v22 * v21;
      if ( g_1862AE010 )
      {
        LOBYTE(dword_140404A6C[v24 + 468765295]) = 0;
        dword_140404A6C[v24 + 468765295] |= a8;
      }
      else
      {
        HIBYTE(dword_140404A6C[v24 + 468765295]) = 0;
        dword_140404A6C[v24 + 468765295] |= a8 << 24;
      }
      ++i;
      *((_DWORD *)*v19 + v24) = dword_140404A6C[v24 + 468765295];
    }
  }
  if ( a3 )
    sub_14009A370(v8);
  sub_14014D3E0(v8, 0);
  return 1;
}

//----- (00000001400EE0A0) ----------------------------------------------------
__int64            sub_1400EE0A0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  int v9;
  int v10;
  __m128i *v11;
  int v12;
  signed int v13;
  unsigned int v14;
  unsigned int v15;
  signed int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int *v28;
  __int64 v29;
  signed int v30;
  unsigned int v31;
  signed int i;
  signed int v33;
  _Alignas(8) unsigned char v39[224];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE0A0[304];
#define v35 (*(__int64 (*))(void *)(sr_frame_1400EE0A0 + 0)) /* [rsp+0h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1400EE0A0 + 48)) /* [rsp+30h] */
#define v37 (*(int (*))(void *)(sr_frame_1400EE0A0 + 52)) /* [rsp+34h] */
#define v38 (*(int (*))(void *)(sr_frame_1400EE0A0 + 56)) /* [rsp+38h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_1400EE0A0 + 288)) /* [rsp+120h] */

  v37 = a4;
  v9 = a4;
  v38 = a1;
  v10 = a1;
  if ( a2 )
  {
    (*(_QWORD *)(void *)(v39+16)) = 0;
    (*(_DWORD *)(void *)(v39+48)) = 0;
    (*(_QWORD *)(void *)(v39+208)) = a3;
    (*(_QWORD *)(void *)(v39+216)) = a3 + a2;
    (*(_QWORD *)(void *)(v39+200)) = (*(_QWORD *)(void *)(v39+216));
    (*(_QWORD *)(void *)(v39+192)) = a3;
    (*(_DWORD *)(void *)(v39+184)) = 0;
    v11 = sub_140166160((__int64)v39, (int *)&g_1B0037420, (int *)&g_1B0037424, &v36, 0);
    if ( v11 )
    {
      v12 = g_1B0037420;
      v13 = g_1B0037424;
      v14 = v36;
      v15 = v36 * g_1B0037420;
      v16 = 0;
      v36 *= g_1B0037420;
      if ( (int)g_1B0037424 > 0 )
      {
        v17 = g_1862AE010;
        v18 = 0;
        do
        {
          v19 = 0;
          if ( v12 > 0 )
          {
            v20 = v18;
            v21 = v18;
            do
            {
              v22 = SR_VEC_PTR_LANES(128, v11, u8)[v21];
              v23 = SR_VEC_PTR_LANES(128, v11, u8)[v21 + 1];
              v24 = SR_VEC_PTR_LANES(128, v11, u8)[v21 + 2];
              if ( v14 == 4 )
                v25 = SR_VEC_PTR_LANES(128, v11, u8)[v20 + 3];
              else
                v25 = 255;
              v26 = v13 - v16;
              if ( v17 )
                dword_140404A6C[v19 + 468765295 + v12 * (v26 - 1)] = (v24 << 8) + v25 + (v23 << 16) + (v22 << 24);
              else
                dword_140404A6C[v19 + 468765295 + v12 * (v26 - 1)] = (v25 << 24) + v22 + (v24 << 16) + (v23 << 8);
              v12 = g_1B0037420;
              ++v19;
              v13 = g_1B0037424;
              v21 += v14;
              v20 += 4;
            }
            while ( v19 < (int)g_1B0037420 );
            v15 = v36;
          }
          ++v16;
          v18 += v15;
        }
        while ( v16 < v13 );
        v10 = v38;
        v9 = v37;
      }
      free(v11);
      if ( ((g_1B0037420 - 1) & g_1B0037420) == 0 )
      {
        v27 = g_1B0037424;
        if ( ((g_1B0037424 - 1) & g_1B0037424) == 0 )
        {
          v28 = &dword_140404A6C[44 * v10 + 284024933];
          *v28 = g_1B0037420;
          v28[1] = v27;
          LOBYTE(g_18402CC20) = 0;
          v28[5] = a5;
          v28[6] = a6;
          v28[7] = a7;
          v28[8] = a8;
          v28[2] = 1;
          v28[3] = 6408;
          v28[4] = 6408;
          v28[10] = 0;
          free(*((void **)v28 + 6));
          v29 = sr_path_malloc((int)(4 * *v28 * v28[1]));
          v30 = 0;
          *((_QWORD *)v28 + 6) = v29;
          if ( (int)v28[1] > 0 )
          {
            do
            {
              v31 = *v28;
              for ( i = 0; i < (int)*v28; v31 = *v28 )
              {
                v33 = i + v31 * v30;
                if ( g_1862AE010 )
                {
                  LOBYTE(dword_140404A6C[v33 + 468765295]) = 0;
                  dword_140404A6C[v33 + 468765295] |= a9;
                }
                else
                {
                  HIBYTE(dword_140404A6C[v33 + 468765295]) = 0;
                  dword_140404A6C[v33 + 468765295] |= a9 << 24;
                }
                ++i;
                *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL * v33) = dword_140404A6C[v33 + 468765295];
              }
              ++v30;
            }
            while ( v30 < (int)v28[1] );
            v9 = v37;
          }
          if ( v9 )
            sub_14009A370(v10);
          sub_14014D3E0(v10, 0);
        }
      }
    }
  }
  return 0; /* native EAX=0 on the shared epilogue */
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef v47

//----- (00000001400EE5F0) ----------------------------------------------------
__int64            sub_1400EE5F0(int a1, int a2)
{
  int v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned int *v7;
  signed int v8;
  signed int i;
  float v10;
  unsigned int *v11;
  int v12;

  v3 = a2;
  v4 = 3LL * a1;
  v5 = dword_140404A6C[6 * a1 + 335047061];
  if ( v5 > 0 )
    *(float *)&dword_140404A6C[6 * a1 + 335047062] = (float)((float)a2 / (float)v5)
                                                   + *(float *)&dword_140404A6C[6 * a1 + 335047062];
  v6 = dword_140404A6C[5873 * a1 + 283831506];
  if ( v6 > 0 )
    v3 = a2 / v6;
  v7 = &g_151620CE4;
  v8 = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v7 - 33) && *v7 == a1 )
    {
      *(v7 - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)(int)v7[2] / (float)v5), 0.0), 1.0) * (float)v3);
      sub_140051F50(i);
    }
    v7 += 3597;
  }
  v10 = *(float *)&dword_140404A6C[2 * v4 + 335047062];
  if ( v10 > 500.0 )
  {
    v11 = &g_151620CEC;
    *(float *)&dword_140404A6C[2 * v4 + 335047062] = v10 * 0.2;
    do
    {
      if ( *(v11 - 35) && *(v11 - 2) == a1 )
      {
        v5 += 4 * *v11;
        v12 = 5 * *v11;
        dword_140404A6C[2 * v4 + 335047061] = v5;
        *v11 = v12;
        sub_140051F50(v8);
      }
      ++v8;
      v11 += 3597;
    }
    while ( v8 < 256 );
  }
  return sub_140052090();
}

//----- (00000001400EF980) ----------------------------------------------------
__int64            sub_1400EF980(int a1, int a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  signed int v6;
  __int64 v7;
  __int64 v8;
  signed int v9;
  float v10;
  signed int v11;
  int i;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EF980[64];
#define v13 (*(float (*)[4])(void *)(sr_frame_1400EF980 + 0)) /* [rsp+20h] */
#define v14 (*(_OWORD (*)[2])(void *)(sr_frame_1400EF980 + 16)) /* [rsp+30h] */
#define v15 (*(int (*))(void *)(sr_frame_1400EF980 + 48)) /* [rsp+50h] */

  result = a1;
  v3 = 3597LL * a1;
  v4 = a2;
  v5 = dword_140404A6C[v3 + 71856279];
  if ( v5 < 10 )
  {
    v6 = dword_140404A6C[v3 + 71856272];
    v7 = 4673LL * (int)dword_140404A6C[v3 + 71856343];
    v8 = (int)dword_140404A6C[v3 + 71856292];
    result = 3 * (v4 + v7);
    v9 = dword_140404A6C[3 * v4 + 225654127 + 3 * v7];
    if ( v6 >= v9 )
    {
      result = (unsigned int)(v5 + 1);
      dword_140404A6C[v3 + 71856272] = v6 - v9;
      dword_140404A6C[v3 + 71856279] = result;
      if ( (_DWORD)v4 == 1 && (_DWORD)v8 != -1 )
      {
        v10 = *(float *)&dword_140404A6C[7166 * v8 + 280651336];
        LODWORD(v13[0]) = dword_140404A6C[7166 * v8 + 280651335];
        LODWORD(v13[2]) = dword_140404A6C[7166 * v8 + 280651337];
        v13[1] = v10;
        v15 = 1065353216;
        v14[0] = xmmword_140278D30;
        v14[1] = xmmword_140278D30;
        v11 = sr_CreateItem(30, v13, nullptr, (float *)v14);
        for ( i = 0; i < 7; ++i )
        {
          result = sub_1400E35D0(v11, -1, v8, i);
          if ( (_DWORD)result )
            break;
        }
      }
    }
  }
  return result;
}
#undef v13
#undef v14
#undef v15

//----- (00000001400EFAD0) ----------------------------------------------------
__int64            sub_1400EFAD0(int a1, int a2)
{
  int v2;
  int v3;
  unsigned int *v4;
  int v5;
  float *v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned int *v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EFAD0[16];
#define v18 (*(__int64 (*))(void *)(sr_frame_1400EFAD0 + 0)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_1400EFAD0 + 8)) /* [rsp+88h] */

  v2 = 0;
  v3 = 0;
  v4 = &g_182BBB194;
  v5 = 0;
  v6 = (float *)&g_182BBB1DC;
  v7 = a1;
  v18 = 5873LL * a1;
  v19 = 279LL * a2;
  do
  {
    if ( *(v4 - 5) && sub_14011B960(v6, v7, 0.0) )
    {
      if ( *v4 == 18 )
      {
        v3 += sub_1400C3D10(v5);
      }
      else if ( dword_140404A6C[v19 + 283831591 + v18] && v5 == dword_140404A6C[v19 + 283831592 + v18] )
      {
        v2 = 1;
      }
    }
    ++v5;
    v6 += 1760;
    v4 += 1760;
  }
  while ( v5 < 1024 );
  v8 = v7;
  v9 = 0;
  if ( (int)dword_140404A6C[2570 * v8 + 276011072] > 0 )
  {
    v10 = 0;
    v11 = &dword_140404A6C[2570 * v8 + 276011073];
    while ( *v11 != dword_140404A6C[v19 + 283831594 + v18] )
    {
      ++v9;
      ++v10;
      v11 += 6;
      if ( v10 >= (int)dword_140404A6C[2570 * v8 + 276011072] )
        goto LABEL_17;
    }
    v2 = 1;
  }
LABEL_17:
  v12 = v19 * 4 + v18 * 4;
  v13 = dword_140404A6C[v19 + 283831591 + v18];
  if ( v13 <= 1 )
  {
    if ( v2 )
      v16 = *(int *)((char *)&g_183EBFF3C + v12) / 10;
    else
      v16 = -10;
    v15 = v3 / 10 + v16;
    if ( v2 )
      return v15;
  }
  else
  {
    v14 = v3 / 10 - *(int *)((char *)&g_183EBFF48 + v12) / 10;
    if ( v13 == 2 )
    {
      v15 = v14 + 50;
      if ( v14 < 0 )
        v15 = v3 / 10 - *(int *)((char *)&g_183EBFF48 + v12) / 10;
      if ( v2 )
      {
        if ( (int)v15 >= -10 )
          v15 += 10;
        else
          return (unsigned int)-10;
        return v15;
      }
    }
    else
    {
      v15 = v3 / 10 - *(int *)((char *)&g_183EBFF48 + v12) / 10;
      if ( v2 )
        return (unsigned int)(*(int *)((char *)&g_183EBFF3C + v12) / 10 + v14);
    }
  }
  if ( v3 > 0 )
    return v15;
  result = 4294957296LL;
  if ( (int)game_day_time > *(int *)((char *)&g_183EBFF40 + v12) )
    return v15;
  return result;
}
#undef v18
#undef v19

//----- (00000001400EFD20) ----------------------------------------------------
__int64            sub_1400EFD20(int a1, int a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int128 v12;
  __int128 v13;
  unsigned int v14;
  unsigned int v15;
  signed int v16;
  int i;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EFD20[112];
#define v25 (*(__int64 (*))(void *)(sr_frame_1400EFD20 + 0)) /* [rsp+0h] */
#define v26 (*(float (*)[4])(void *)(sr_frame_1400EFD20 + 48)) /* [rsp+30h] */
#define v27 (*(_OWORD (*)[2])(void *)(sr_frame_1400EFD20 + 64)) /* [rsp+40h] */
#define v28 (*(unsigned int (*))(void *)(sr_frame_1400EFD20 + 96)) /* [rsp+60h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1400EFD20 + 104)) /* [rsp+68h] */

  v3 = 3597LL * a1;
  v4 = dword_140404A6C[v3 + 71856292];
  if ( v4 != -1 && (int)dword_140404A6C[v3 + 71856280] < 3 )
  {
    v5 = (int)dword_140404A6C[v3 + 71856343];
    v6 = a2;
    if ( (int)dword_140404A6C[v3 + 71856272] >= (int)dword_140404A6C[14019 * v5 + 225654127 + 3 * a2] )
    {
      v7 = 14019 * v5;
      v8 = (float)-dword_140404A6C[14019 * v5 + 225654177] * 4.0;
      v9 = (float)(v8 * *(float *)&dword_140404A6C[v7 + 225641216]) + *(float *)&dword_140404A6C[v7 + 225654178];
      v10 = (float)(v8 * *(float *)&dword_140404A6C[v7 + 225641218]) + *(float *)&dword_140404A6C[v7 + 225654180];
      v11 = (float)(v8 * *(float *)&dword_140404A6C[v7 + 225641217]) + *(float *)&dword_140404A6C[v7 + 225654179];
      dword_140404A6C[v7 + 225654177] = ((unsigned __int8)dword_140404A6C[v7 + 225654177] + 1) & 7;
      v26[0] = v9;
      v12 = *(_OWORD *)&dword_140404A6C[14019 * v5 + 225641210];
      v26[2] = v10;
      v27[0] = v12;
      v13 = *(_OWORD *)&dword_140404A6C[14019 * v5 + 225641214];
      v26[1] = v11;
      v27[1] = v13;
      v28 = dword_140404A6C[14019 * v5 + 225641218];
      sub_14007B2A0((__int64)v27, (float *)&dword_1402F6188, sr_export_float_lane_container(1070141403));
      v14 = sr_CreateVehicle(
              dword_140404A6C[14019 * (int)dword_140404A6C[v3 + 71856343] + 225654126 + 3 * v6],
              v26,
              nullptr,
              (unsigned int *)v27,
              dword_140404A6C[14019 * (int)dword_140404A6C[v3 + 71856343] + 225654128 + 3 * v6]);
      v15 = v14;
      if ( v14 != -1 )
        dword_140404A6C[5210 * v14 + 129716718] = a1;
      dword_140404A6C[v3 + 71856272] -= dword_140404A6C[14019 * (int)dword_140404A6C[v3 + 71856343] + 225654127 + 3 * v6];
      v16 = sr_CreateItem(27, v26, nullptr, (float *)v27);
      dword_140404A6C[1760 * v16 + 278846053] = v15;
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sub_1400E35D0(v16, -1, v4, i) )
          break;
      }
      ++dword_140404A6C[v3 + 71856280];
      sub_140051DC0(a1);
      if ( game_type == 3 )
        sub_140051F50(a1);
      v18 = (int)dword_140404A6C[v3 + 71856343];
      v19 = 14019 * v18;
      v20 = (int)dword_140404A6C[14019 * v18 + 225654128];
      if ( (int)v20 > 0 )
      {
        v21 = 4673 * v18;
        dword_140404A6C[v19 + 225654128] = v20 - 1;
        v22 = 3 * (v21 + v20);
        v23 = 3 * (v21 + v6);
        *(_QWORD *)&dword_140404A6C[v23 + 225654126] = *(_QWORD *)&dword_140404A6C[v22 + 225654126];
        dword_140404A6C[v23 + 225654128] = dword_140404A6C[v22 + 225654128];
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29

//----- (00000001400F00D0) ----------------------------------------------------
__int64            sub_1400F00D0(int a1, int a2, unsigned int a3)
{
  __int64 v4;
  unsigned int v5;
  int v6;
  unsigned int *i;
  __int64 v9;

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v4 = 5873LL * a2;
  v5 = 0;
  v6 = dword_140404A6C[v4 + 283836331];
  if ( v6 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 283836332]; *i; i += 13 )
  {
    if ( (int)++v5 >= v6 )
      return 0xFFFFFFFFLL;
  }
  v9 = v4 * 4 + 52LL * v5;
  *(unsigned int *)((char *)&g_183EC491C + v9) = 1;
  return sr_CreateVehicle(
           a1,
           (float *)((char *)&g_183EC4920 + v9),
           nullptr,
           (unsigned int *)((char *)&g_183EC492C + v9),
           a3);
}

//----- (00000001400F04F0) ----------------------------------------------------
void            sub_1400F04F0(int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  signed int v5;
  int v6;
  int v7;
  __int64 v8;
  float v9;
  signed int v10;
  int i;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F04F0[64];
#define v12 (*(float (*)[4])(void *)(sr_frame_1400F04F0 + 0)) /* [rsp+20h] */
#define v13 (*(_OWORD (*)[2])(void *)(sr_frame_1400F04F0 + 16)) /* [rsp+30h] */
#define v14 (*(int (*))(void *)(sr_frame_1400F04F0 + 48)) /* [rsp+50h] */

  v3 = 3597LL * a1;
  if ( (int)dword_140404A6C[v3 + 71856279] < 20 )
  {
    v4 = a2 + 4673LL * (int)dword_140404A6C[v3 + 71856343];
    v5 = dword_140404A6C[3 * v4 + 225654127];
    v6 = dword_140404A6C[3 * v4 + 225654126];
    if ( (int)dword_140404A6C[v3 + 71856272] >= v5 )
    {
      v7 = dword_140404A6C[v3 + 71856292];
      v8 = 7166LL * v7;
      v9 = *(float *)&dword_140404A6C[v8 + 280651336];
      LODWORD(v12[0]) = dword_140404A6C[v8 + 280651335];
      LODWORD(v12[2]) = dword_140404A6C[v8 + 280651337];
      v12[1] = v9;
      v14 = 1065353216;
      v13[0] = xmmword_140278D30;
      v13[1] = xmmword_140278D30;
      v10 = sr_CreateItem(v6, v12, nullptr, (float *)v13);
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sub_1400E35D0(v10, -1, v7, i) )
          break;
      }
      dword_140404A6C[v3 + 71856272] -= v5;
      ++dword_140404A6C[v3 + 71856279];
      sub_140051DC0(a1);
    }
  }
}
#undef v12
#undef v13
#undef v14

//----- (00000001400F3B30) ----------------------------------------------------
__int64            sub_1400F3B30(int a1)
{
  signed int v1;
  int v2;
  signed int v4;
  unsigned int v5;
  unsigned int *v6;
  signed int v7;
  signed int v8;
  unsigned int v9;
  unsigned int *v10;
  signed int v11;
  signed int v12;
  unsigned int v13;
  unsigned int *v14;
  signed int v15;
  signed int v16;
  unsigned int v17;
  unsigned int *v18;
  signed int v19;
  signed int v20;
  unsigned int v21;
  unsigned int *v22;
  __int64 result;
  unsigned int v24;
  unsigned int *v25;

  v1 = g_183EC5820;
  v2 = 0;
  v4 = 0;
  if ( (int)g_183EC5820 > 0 )
  {
    v5 = g_183EC5820;
    v6 = &g_183EC5824;
    do
    {
      if ( *v6 == a1 )
      {
        g_183EC5820 = v5 - 1;
        *v6 = dword_140404A6C[v5 + 283837293];
        v1 = g_183EC5820;
      }
      else
      {
        ++v4;
        ++v6;
      }
      v5 = v1;
    }
    while ( v4 < v1 );
  }
  v7 = g_183ECB3E4;
  v8 = 0;
  if ( (int)g_183ECB3E4 > 0 )
  {
    v9 = g_183ECB3E4;
    v10 = &g_183ECB3E8;
    do
    {
      if ( *v10 == a1 )
      {
        g_183ECB3E4 = v9 - 1;
        *v10 = dword_140404A6C[v9 + 283843166];
        v7 = g_183ECB3E4;
      }
      else
      {
        ++v8;
        ++v10;
      }
      v9 = v7;
    }
    while ( v8 < v7 );
  }
  v11 = g_183ED0FA8;
  v12 = 0;
  if ( (int)g_183ED0FA8 > 0 )
  {
    v13 = g_183ED0FA8;
    v14 = &g_183ED0FAC;
    do
    {
      if ( *v14 == a1 )
      {
        g_183ED0FA8 = v13 - 1;
        *v14 = dword_140404A6C[v13 + 283849039];
        v11 = g_183ED0FA8;
      }
      else
      {
        ++v12;
        ++v14;
      }
      v13 = v11;
    }
    while ( v12 < v11 );
  }
  v15 = g_183ED6B6C;
  v16 = 0;
  if ( (int)g_183ED6B6C > 0 )
  {
    v17 = g_183ED6B6C;
    v18 = &g_183ED6B70;
    do
    {
      if ( *v18 == a1 )
      {
        g_183ED6B6C = v17 - 1;
        *v18 = dword_140404A6C[v17 + 283854912];
        v15 = g_183ED6B6C;
      }
      else
      {
        ++v16;
        ++v18;
      }
      v17 = v15;
    }
    while ( v16 < v15 );
  }
  v19 = g_183EDC730;
  v20 = 0;
  if ( (int)g_183EDC730 > 0 )
  {
    v21 = g_183EDC730;
    v22 = &g_183EDC734;
    do
    {
      if ( *v22 == a1 )
      {
        g_183EDC730 = v21 - 1;
        *v22 = dword_140404A6C[v21 + 283860785];
        v19 = g_183EDC730;
      }
      else
      {
        ++v20;
        ++v22;
      }
      v21 = v19;
    }
    while ( v20 < v19 );
  }
  result = g_183EE22F4;
  if ( (int)g_183EE22F4 > 0 )
  {
    v24 = g_183EE22F4;
    v25 = &g_183EE22F8;
    do
    {
      if ( *v25 == a1 )
      {
        g_183EE22F4 = v24 - 1;
        *v25 = dword_140404A6C[v24 + 283866658];
        result = g_183EE22F4;
      }
      else
      {
        ++v2;
        ++v25;
      }
      v24 = result;
    }
    while ( v2 < (int)result );
  }
  return result;
}

//----- (00000001400F3D10) ----------------------------------------------------
void            sub_1400F3D10(int a1)
{
  unsigned int *v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;

  v2 = &g_182BBB2DC;
  v3 = 1024;
  do
  {
    if ( *(v2 - 87) && *(v2 - 82) == 25 )
    {
      v4 = v2[1];
      if ( v4 == 1111 * a1 + 1111 )
      {
        v5 = (int)*v2;
        if ( (_DWORD)v5 != -1 )
        {
          dword_140404A6C[1760 * v5 + 278846052] = 0;
          dword_140404A6C[1760 * *v2 + 278845980] = -1;
          dword_140404A6C[1760 * *v2 + 278845983] = 0;
          sub_140051940(*v2);
          v4 = v2[1];
        }
        v2[72] = 0;
        *v2 = -1;
        *(v2 - 80) = 0;
      }
      if ( v4 == 1111 * a1 + 1112 )
      {
        v6 = (int)*v2;
        if ( (_DWORD)v6 != -1 )
        {
          dword_140404A6C[1760 * v6 + 278846052] = 0;
          dword_140404A6C[1760 * *v2 + 278845980] = -1;
          dword_140404A6C[1760 * *v2 + 278845983] = 0;
          sub_140051940(*v2);
        }
        v2[72] = 0;
        *v2 = -1;
        *(v2 - 80) = 0;
      }
    }
    v2 += 1760;
    --v3;
  }
  while ( v3 );
}

//----- (00000001400F3E60) ----------------------------------------------------
__int64 sub_1400F3E60()
{
  signed int v0;
  int v1;
  int *v2;
  int v3;
  int i;
  int v5;
  unsigned int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int *v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  int *v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  float v43;
  float v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  float v53;
  float v54;
  __int64 v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  float v63;
  float v64;
  unsigned int *v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  float v70;
  unsigned int *v71;
  unsigned int *v72;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F3E60[112];
#define v74 (*(__int64 (*))(void *)(sr_frame_1400F3E60 + 0)) /* [rsp+0h] */
#define v75 (*(int (*))(void *)(sr_frame_1400F3E60 + 32)) /* [rsp+20h] */
#define v76 (*(int (*))(void *)(sr_frame_1400F3E60 + 36)) /* [rsp+24h] */
#define v77 (*(int (*))(void *)(sr_frame_1400F3E60 + 40)) /* [rsp+28h] */
#define v78 (*(int (*))(void *)(sr_frame_1400F3E60 + 64)) /* [rsp+40h] */
#define v79 (*(int (*))(void *)(sr_frame_1400F3E60 + 68)) /* [rsp+44h] */
#define v80 (*(int (*))(void *)(sr_frame_1400F3E60 + 72)) /* [rsp+48h] */
#define v81 (*(__int64 (*))(void *)(sr_frame_1400F3E60 + 96)) /* [rsp+60h] */

  v0 = 0;
  if ( g_183F7A5B8 )
  {
    v1 = 256;
    v2 = &v78;
    v3 = 0;
    for ( i = 0; i < 3; ++i )
    {
      v5 = 0;
      *v2 = 0;
      v6 = &g_151623978;
      do
      {
        if ( *(v6 - 2886) && !*v6 && *(v6 - 2853) == i )
          *v2 = ++v5;
        v6 += 3597;
      }
      while ( (__int64)v6 < (__int64)&g_1519A6D78 );
      if ( v5 > 0 )
      {
        v7 = v5;
        if ( v3 >= v5 )
          v7 = v3;
        v3 = v7;
        if ( v1 > v5 )
          v1 = v5;
      }
      ++v2;
    }
    v8 = 1;
    if ( v78 <= 0 )
      v75 = 1;
    else
      v75 = v78 / v1;
    if ( v79 <= 0 )
      v9 = 1;
    else
      v9 = v79 / v1;
    v76 = v9;
    if ( v80 > 0 )
      v8 = v80 / v1;
  }
  else
  {
    v8 = 1;
    v75 = 1;
    v76 = 1;
  }
  v10 = 0;
  v11 = 0;
  v12 = g_183EBFCB0;
  v77 = v8;
  do
  {
    v13 = 5873 * v11;
    v14 = &g_182BBCD64;
    v15 = dword_140404A6C[5873 * v11 + 283831504];
    do
    {
      if ( *(v14 - 1785) )
      {
        if ( *(v14 - 1780) == 17 )
        {
          v16 = *((float *)v14 - 1762);
          if ( v16 >= *(float *)&dword_140404A6C[v13 + 283831485] && v16 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v17 = *((float *)v14 - 1760);
            if ( v17 >= *(float *)&dword_140404A6C[v13 + 283831487] && v17 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      if ( *(v14 - 25) )
      {
        if ( *(v14 - 20) == 17 )
        {
          v18 = *((float *)v14 - 2);
          if ( v18 >= *(float *)&dword_140404A6C[v13 + 283831485]
            && v18 < *(float *)&dword_140404A6C[v13 + 283831488]
            && *(float *)v14 >= *(float *)&dword_140404A6C[v13 + 283831487]
            && *(float *)v14 < *(float *)&dword_140404A6C[v13 + 283831490] )
          {
            v15 += 250;
          }
        }
      }
      if ( v14[1735] )
      {
        if ( v14[1740] == 17 )
        {
          v19 = *((float *)v14 + 1758);
          if ( v19 >= *(float *)&dword_140404A6C[v13 + 283831485] && v19 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v20 = *((float *)v14 + 1760);
            if ( v20 >= *(float *)&dword_140404A6C[v13 + 283831487] && v20 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      if ( v14[3495] )
      {
        if ( v14[3500] == 17 )
        {
          v21 = *((float *)v14 + 3518);
          if ( v21 >= *(float *)&dword_140404A6C[v13 + 283831485] && v21 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v22 = *((float *)v14 + 3520);
            if ( v22 >= *(float *)&dword_140404A6C[v13 + 283831487] && v22 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      v14 += 7040;
    }
    while ( (__int64)v14 < (__int64)&g_18329CD64 );
    v23 = 4;
    v24 = (int *)&dword_140404A6C[v13 + 283831592];
    do
    {
      if ( *(v24 - 4) )
      {
        v25 = *v24;
        if ( (_DWORD)v25 != -1 )
        {
          v26 = *(float *)&dword_140404A6C[v13 + 283831485];
          v27 = *(float *)&dword_140404A6C[1760 * v25 + 278845916];
          if ( v27 >= v26 )
          {
            v28 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v27 < v28 )
            {
              v29 = *(float *)&dword_140404A6C[1760 * v25 + 278845918];
              v30 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v29 >= v30 )
              {
                v31 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v29 < v31 )
                {
                  if ( (unsigned int)(*(v24 - 1) - 7) > 2
                    || (v32 = v24[1], (_DWORD)v32 == -1)
                    || (v33 = *(float *)&dword_140404A6C[1760 * v32 + 278845916], v33 >= v26)
                    && v33 < v28
                    && (v34 = *(float *)&dword_140404A6C[1760 * v32 + 278845918], v34 >= v30)
                    && v34 < v31 )
                  {
                    v15 += v24[12];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[275] )
      {
        v35 = v24[279];
        if ( (_DWORD)v35 != -1 )
        {
          v36 = *(float *)&dword_140404A6C[v13 + 283831485];
          v37 = *(float *)&dword_140404A6C[1760 * v35 + 278845916];
          if ( v37 >= v36 )
          {
            v38 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v37 < v38 )
            {
              v39 = *(float *)&dword_140404A6C[1760 * v35 + 278845918];
              v40 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v39 >= v40 )
              {
                v41 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v39 < v41 )
                {
                  if ( (unsigned int)(v24[278] - 7) > 2
                    || (v42 = v24[280], (_DWORD)v42 == -1)
                    || (v43 = *(float *)&dword_140404A6C[1760 * v42 + 278845916], v43 >= v36)
                    && v43 < v38
                    && (v44 = *(float *)&dword_140404A6C[1760 * v42 + 278845918], v44 >= v40)
                    && v44 < v41 )
                  {
                    v15 += v24[291];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[554] )
      {
        v45 = v24[558];
        if ( (_DWORD)v45 != -1 )
        {
          v46 = *(float *)&dword_140404A6C[v13 + 283831485];
          v47 = *(float *)&dword_140404A6C[1760 * v45 + 278845916];
          if ( v47 >= v46 )
          {
            v48 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v47 < v48 )
            {
              v49 = *(float *)&dword_140404A6C[1760 * v45 + 278845918];
              v50 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v49 >= v50 )
              {
                v51 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v49 < v51 )
                {
                  if ( (unsigned int)(v24[557] - 7) > 2
                    || (v52 = v24[559], (_DWORD)v52 == -1)
                    || (v53 = *(float *)&dword_140404A6C[1760 * v52 + 278845916], v53 >= v46)
                    && v53 < v48
                    && (v54 = *(float *)&dword_140404A6C[1760 * v52 + 278845918], v54 >= v50)
                    && v54 < v51 )
                  {
                    v15 += v24[570];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[833] )
      {
        v55 = v24[837];
        if ( (_DWORD)v55 != -1 )
        {
          v56 = *(float *)&dword_140404A6C[v13 + 283831485];
          v57 = *(float *)&dword_140404A6C[1760 * v55 + 278845916];
          if ( v57 >= v56 )
          {
            v58 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v57 < v58 )
            {
              v59 = *(float *)&dword_140404A6C[1760 * v55 + 278845918];
              v60 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v59 >= v60 )
              {
                v61 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v59 < v61 )
                {
                  if ( (unsigned int)(v24[836] - 7) > 2
                    || (v62 = v24[838], (_DWORD)v62 == -1)
                    || (v63 = *(float *)&dword_140404A6C[1760 * v62 + 278845916], v63 >= v56)
                    && v63 < v58
                    && (v64 = *(float *)&dword_140404A6C[1760 * v62 + 278845918], v64 >= v60)
                    && v64 < v61 )
                  {
                    v15 += v24[849];
                  }
                }
              }
            }
          }
        }
      }
      v24 += 1116;
      --v23;
    }
    while ( v23 );
    v65 = &g_151620CAC;
    v66 = 256;
    do
    {
      if ( *(v65 - 19) )
      {
        if ( v65[14] == v10 )
        {
          v67 = v15 / *(&v75 + v11);
          *v65 += v67 + 250;
          if ( v12 == 1 )
          {
            v68 = (int)*(v65 - 4);
            if ( (_DWORD)v68 != -1 )
              dword_140404A6C[28 * v68 + 134050374] += v67;
          }
        }
      }
      v65 += 3597;
      --v66;
    }
    while ( v66 );
    dword_140404A6C[v13 + 283831505] = v15;
    v69 = 3 * v11;
    v70 = (float)((float)((float)v15 * 0.000020000001) + 1.0) * *(float *)&dword_140404A6C[6 * v11 + 335047062];
    if ( v70 < 50.0 )
      v70 = 50.0;
    v12 = g_183EBFCB0;
    *(float *)&dword_140404A6C[6 * v11 + 335047062] = v70;
    if ( v12 != 1 && v70 >= 500.0 )
    {
      v70 = v70 * 0.2;
      v71 = &g_151620CEC;
      *(float *)&dword_140404A6C[6 * v11 + 335047062] = v70;
      do
      {
        if ( *(v71 - 35) && *(v71 - 2) == v10 )
          *v71 *= 5;
        v71 += 3597;
      }
      while ( (__int64)v71 < (__int64)&g_1519A40EC );
    }
    ++v10;
    ++v11;
    dword_140404A6C[2 * v69 + 335047064] = (int)(float)(v70 * 10.0);
  }
  while ( v10 < 3 );
  sub_140052090();
  v72 = &g_151620C60;
  do
  {
    if ( *v72 )
      sub_140051F50(v0);
    ++v0;
    v72 += 3597;
  }
  while ( v0 < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81

// 1400F3F3B: conditional instruction was optimized away because r10d.4>=1

//----- (00000001400F45A0) ----------------------------------------------------
__int64            sub_1400F45A0(signed int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned int *v8;
  int v9;
  unsigned int *v10;
  int v11;
  unsigned int *v12;
  int v13;
  unsigned int *v14;
  int v15;
  unsigned int *v16;
  int v17;
  unsigned int *v18;
  int v19;
  float v20;
  double v21;
  signed int v22;
  __int64 v23;
       char *v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v28;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F45A0[1136];
#define v30 (*(__int64 (*))(void *)(sr_frame_1400F45A0 + 0)) /* [rsp+0h] */
#define v31 (*(float (*)[4])(void *)(sr_frame_1400F45A0 + 32)) /* [rsp+20h] */
#define v32 (*(_OWORD (*)[2])(void *)(sr_frame_1400F45A0 + 48)) /* [rsp+30h] */
#define v33 (*(int (*))(void *)(sr_frame_1400F45A0 + 80)) /* [rsp+50h] */
#define Src (*(__m128i (*)[64])(void *)(sr_frame_1400F45A0 + 96)) /* [rsp+60h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_1400F45A0 + 1120)) /* [rsp+460h] */

  v2 = a1;
  v3 = a2;
  if ( (unsigned int)a1 <= 5 )
  {
    v4 = 5873LL * a1;
    if ( dword_140404A6C[v4 + 283831510] == -1 )
    {
      if ( game_type == 4 )
      {
        v5 = 3597LL * a2;
        v6 = dword_140404A6C[v5 + 71856275];
        if ( v6 <= 0 )
          v6 = 0;
        dword_140404A6C[5 * v2 + 188872238] = v6;
        if ( !g_16B2AAF28 && (int)dword_140404A6C[539 * v2 + 180001074] > 0 )
        {
          v7 = 0;
          if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
            v7 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
          if ( v7 > 1000 )
            v7 = 1000;
          dword_140404A6C[539 * v2 + 180001074] = g_16B2AAF2C
                                                + (signed int)(v7 * g_16B2AAF2C) / 100;
        }
        if ( !g_16B2CCC9C )
        {
          v8 = &dword_140404A6C[539 * v2 + 180035727];
          if ( (int)*v8 > 0 )
          {
            v9 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v9 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v9 > 1000 )
              v9 = 1000;
            *v8 = g_16B2CCCA0 + (signed int)(v9 * g_16B2CCCA0) / 100;
          }
        }
        if ( !g_16B2EEA10 )
        {
          v10 = &dword_140404A6C[539 * v2 + 180070380];
          if ( (int)*v10 > 0 )
          {
            v11 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v11 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v11 > 1000 )
              v11 = 1000;
            *v10 = g_16B2EEA14 + (signed int)(v11 * g_16B2EEA14) / 100;
          }
        }
        if ( !g_16B310784 )
        {
          v12 = &dword_140404A6C[539 * v2 + 180105033];
          if ( (int)*v12 > 0 )
          {
            v13 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v13 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v13 > 1000 )
              v13 = 1000;
            *v12 = g_16B310788 + (signed int)(v13 * g_16B310788) / 100;
          }
        }
        if ( !g_16B3324F8 )
        {
          v14 = &dword_140404A6C[539 * v2 + 180139686];
          if ( (int)*v14 > 0 )
          {
            v15 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v15 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v15 > 1000 )
              v15 = 1000;
            *v14 = g_16B3324FC + (signed int)(v15 * g_16B3324FC) / 100;
          }
        }
        if ( !g_16B35426C )
        {
          v16 = &dword_140404A6C[539 * v2 + 180174339];
          if ( (int)*v16 > 0 )
          {
            v17 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v17 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v17 > 1000 )
              v17 = 1000;
            *v16 = g_16B354270 + (signed int)(v17 * g_16B354270) / 100;
          }
        }
        if ( !g_16B375FE0 )
        {
          v18 = &dword_140404A6C[539 * v2 + 180208992];
          if ( (int)*v18 > 0 )
          {
            v19 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v19 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v19 > 1000 )
              v19 = 1000;
            *v18 = g_16B375FE4 + (signed int)(v19 * g_16B375FE4) / 100;
          }
        }
      }
      sub_1400F3D10(v2);
      v20 = *(float *)&dword_140404A6C[v4 + 283831499];
      LODWORD(v31[0]) = dword_140404A6C[v4 + 283831498];
      LODWORD(v31[2]) = dword_140404A6C[v4 + 283831500];
      v31[1] = v20;
      v33 = 1065353216;
      v21 = *(float *)&dword_140404A6C[v4 + 283831497];
      v32[0] = xmmword_140278D30;
      v32[1] = xmmword_140278D30;
      sub_14007B2A0((__int64)v32, (float *)v32 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v21 - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
      v22 = sr_CreateItem(25, v31, nullptr, (float *)v32);
      if ( v22 != -1 )
      {
        v23 = 1760LL * v22;
        dword_140404A6C[v23 + 278846051] = 0;
        dword_140404A6C[v23 + 278845981] = 1111 * (v2 + 1);
        sub_140051940(v22);
      }
      v24 = off_1402B2890[v2];
      dword_140404A6C[v4 + 283831510] = v3;
      crt_sprintf(Src, "%s is now manager of %s", (     char *)&dword_140404A6C[3597 * v3 + 71856254], v24);
      if ( game_connected )
      {
        v25 = -1;
        do
          ++v25;
        while ( SR_VEC_LANES(128, Src[0], i8)[v25] );
        v26 = world_event_count;
        if ( (int)v25 > 63 )
          LODWORD(v25) = 63;
        v27 = game_tick;
        v28 = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + v28) = 2;
        *(unsigned int *)((char *)&g_1873DE464 + v28) = v27;
        crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v28), Src, (int)v25);
        *((_BYTE *)&g_1873DE4A0 + v28 + (int)v25) = 0;
        *(unsigned int *)((char *)&g_1873DE480 + v28) = v25;
        *(unsigned int *)((char *)&g_1873DE484 + v28) = 0;
        *(unsigned int *)((char *)&g_1873DE488 + v28) = -1;
        world_event_count = v26 + 1;
        *(unsigned int *)((char *)&g_1873DE48C + v28) = 0;
        HIWORD(world_event_count) = 0;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v30
#undef v31
#undef v32
#undef v33
#undef Src
#undef v35

//----- (00000001400F4BC0) ----------------------------------------------------
void            sub_1400F4BC0(int a1, int a2)
{
  __int64 v3;
  __int64 v5;
  signed int v6;
  signed int v7;
  int v8;
  unsigned int v9;

  v3 = 3597LL * a1;
  v5 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v5 != -1 )
  {
    v6 = dword_140404A6C[v3 + 71856272];
    v7 = dword_140404A6C[14019 * dword_140404A6C[v3 + 71856343] + 225654127 + 3 * a2];
    if ( v6 >= v7 )
    {
      if ( (unsigned int)(a2 - 1) <= 2 )
      {
        v8 = a2 == 1 ? 3 : (a2 == 2) + 7;
        if ( dword_140404A6C[v3 + 71859822] != v8 )
        {
          ++dword_140404A6C[v5 + 282485789];
          v6 -= v7;
          dword_140404A6C[v3 + 71859822] = v8;
          dword_140404A6C[v3 + 71856272] = v6;
          dword_140404A6C[7166 * v5 + 280658446] = v8;
        }
      }
      if ( (unsigned int)(a2 - 4) <= 1 )
      {
        if ( a2 == 4 )
          v9 = 1;
        else
          v9 = 2;
        if ( dword_140404A6C[v3 + 71859826] != v9 )
        {
          ++dword_140404A6C[v5 + 282485789];
          dword_140404A6C[v3 + 71859826] = v9;
          dword_140404A6C[v3 + 71856272] = v6 - v7;
          dword_140404A6C[7166 * v5 + 280658449] = v9;
        }
      }
      sub_140051DC0(a1);
      if ( game_type == 3 )
        sub_140051F50(a1);
    }
  }
}

// 1400F4C9B: conditional instruction was optimized away because r8d.4==5

//----- (00000001400F4D00) ----------------------------------------------------
__int64            sub_1400F4D00(int a1, int a2)
{
  int v2;
  unsigned int *v3;
  __int64 v4;
  unsigned int *v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  unsigned int *v10;
  __int64 v11;
  char *v12;
  unsigned int v13;
  signed int v14;
  unsigned int *v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  float *v21;
  float v22;
  signed int v23;
  unsigned int *v24;
  unsigned int v25;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F4D00[208];
#define v27 (*(__int64 (*))(void *)(sr_frame_1400F4D00 + 0)) /* [rsp+20h] */
#define v29 (*(unsigned int (*))(void *)(sr_frame_1400F4D00 + 184)) /* [rsp+D8h] */
#define v30 (*(unsigned int * (*))(void *)(sr_frame_1400F4D00 + 192)) /* [rsp+E0h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_1400F4D00 + 200)) /* [rsp+E8h] */

  v2 = 0;
  v3 = &g_19021F0C4;
  v4 = a1;
  v5 = &g_183EBFF04;
  v30 = &g_183EBFF04;
  v6 = -(__int64)&g_183EBFF04;
  v27 = -(__int64)&g_183EBFF04;
  v7 = dword_140404A6C[5873 * v4 + 283831590 + 279 * a2];
  v8 = 23492 * v4 + 56;
  v31 = v8;
  v29 = v7;
  do
  {
    v9 = 0;
    v10 = v5;
    do
    {
      if ( !*(v10 - 2) || *(v10 - 1) || *v10 != v7 )
        goto LABEL_37;
      v11 = (int)v10[2];
      if ( (unsigned int)v11 <= 0x3FF )
      {
        dword_140404A6C[1760 * v11 + 278845900] = 0;
        v5 = v30;
      }
      *(v10 - 1) = 1;
      if ( v2 == (_DWORD)v4 )
      {
        v12 = (char *)v5 + v6;
        v13 = game_type;
        v14 = 0;
        v15 = &g_151620CAC;
        *(float *)v3 = (float)(*((float *)v10 + 19) + 1.0) * *(float *)v3;
        do
        {
          if ( *(v15 - 19) )
          {
            if ( v15[14] == v2 )
            {
              *v15 += *(_DWORD *)&v12[(_QWORD)v10 + 56];
              if ( v13 == 3 )
                sub_140051F50(v14);
            }
          }
          ++v14;
          v15 += 3597;
        }
        while ( v14 < 256 );
        if ( v10[1] <= 1 )
          *(_OWORD *)(v10 + 21) = xmmword_1402763F0;
        else
          *(_OWORD *)(v10 + 21) = xmmword_140276408;
        strcpy((char *)v10 + 100, "ccess");
        goto LABEL_26;
      }
      if ( *(int *)((char *)v10 + v8) > 0 )
      {
        v16 = v10[1];
        *(float *)v3 = (float)(*((float *)v10 + 20) + 1.0) * *(float *)v3;
        if ( v16 <= 1 )
        {
          qmemcpy(v10 + 21, "Acquisition:  Failed", 20);
        }
        else
        {
          if ( v16 == 2 )
          {
            strcpy((char *)v10 + 84, "Transaction:  Success");
LABEL_26:
            sub_140051BD0(v2, v9);
            LODWORD(v4) = a1;
            v8 = v31;
            v6 = v27;
            goto LABEL_27;
          }
          qmemcpy(v10 + 21, "Transaction:  Failed", 20);
        }
        *((_BYTE *)v10 + 104) = 0;
        goto LABEL_26;
      }
LABEL_27:
      v17 = v10[17];
      if ( v17 > 0 )
      {
        if ( v2 == (_DWORD)v4 && v17 > (int)v10[18] )
          v17 = v10[18];
        v18 = v17 - v3[4];
        v19 = *(v3 - 1);
        if ( v18 < 0 )
          v18 = 0;
        v3[4] = 0;
        if ( v19 > 0 )
          *(float *)v3 = *(float *)v3 - (float)((float)v18 / (float)v19);
        v10[17] = 0;
      }
      v7 = v29;
      v5 = v30;
LABEL_37:
      ++v9;
      v10 += 279;
    }
    while ( v9 < 16 );
    v8 -= 23492;
    v5 += 5873;
    v6 -= 23492;
    v31 = v8;
    ++v2;
    v30 = v5;
    v3 += 6;
    v27 = v6;
  }
  while ( v2 < 6 );
  v20 = 0;
  v21 = (float *)&g_19021F0C4;
  do
  {
    v22 = *v21;
    if ( *v21 >= 10.0 )
    {
      if ( v22 > 500.0 )
      {
        v23 = 0;
        v24 = &g_151620CEC;
        *v21 = v22 * 0.2;
        do
        {
          if ( *(v24 - 35) && *(v24 - 2) == v20 )
          {
            v25 = *v24;
            *((_DWORD *)v21 - 1) += 4 * *v24;
            *v24 = 5 * v25;
            sub_140051F50(v23);
          }
          ++v23;
          v24 += 3597;
        }
        while ( v23 < 256 );
      }
    }
    else
    {
      *v21 = 10.0;
    }
    ++v20;
    v21 += 6;
  }
  while ( v20 < 6 );
  return sub_140052090();
}
#undef v27
#undef v29
#undef v30
#undef v31

//----- (00000001400F50D0) ----------------------------------------------------
__int64            sub_1400F50D0(int a1, int a2, int a3, int a4)
{
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int *v13;
       char *v14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F50D0[560];
#define v16 (*(__int64 (*))(void *)(sr_frame_1400F50D0 + 0)) /* [rsp+0h] */
#define v17 (*(_BYTE (*)[512])(void *)(sr_frame_1400F50D0 + 32)) /* [rsp+20h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_1400F50D0 + 544)) /* [rsp+220h] */

  v8 = a2 + 1;
  v9 = 1116LL * a2 + 23492LL * a1;
  if ( *(unsigned int *)((char *)&g_183EBFF08 + v9) <= 1 )
  {
    crt_sprintf(v17, "Acquisition(%d)", v8);
    if ( a3 )
      LODWORD(v11) = *(int *)((char *)&g_183EBFF3C + v9) / 10;
    else
      LODWORD(v11) = -10;
    v12 = 1717986919LL * a4;
    goto LABEL_15;
  }
  crt_sprintf(v17, "Transaction(%d)", v8);
  v10 = a4 / 10 - *(int *)((char *)&g_183EBFF48 + v9) / 10;
  if ( *(unsigned int *)((char *)&g_183EBFF08 + v9) != 2 )
  {
    v11 = (unsigned int)v10;
    if ( !a3 )
      goto LABEL_16;
    v12 = 1717986919LL * *(int *)((char *)&g_183EBFF3C + v9);
LABEL_15:
    v11 = (unsigned int)((HIDWORD(v12) >> 31) + (SHIDWORD(v12) >> 2) + v11);
    goto LABEL_16;
  }
  v11 = (unsigned int)(v10 + 50);
  if ( v10 < 0 )
    v11 = (unsigned int)v10;
  if ( a3 )
  {
    if ( (int)v11 >= -10 )
      v11 = (unsigned int)(v11 + 10);
    else
      v11 = 4294967286LL;
  }
LABEL_16:
  v13 = &g_151620CAC;
  do
  {
    if ( *(v13 - 19) && v13[14] == a1 )
    {
      if ( (int)v11 > 0 )
        *v13 += 10 * v11;
      v13[3] += v11;
    }
    v13 += 3597;
  }
  while ( (__int64)v13 < (__int64)&g_1519A40AC );
  v14 = "%s: Complete   Rating:  %d";
  if ( (int)game_day_time >= *(int *)((char *)&g_183EBFF40 + v9) )
    v14 = "%s: Expired    Rating:  %d";
  crt_sprintf((_BYTE *)&g_183EBFF58 + v9, v14, v17, v11);
  *(unsigned int *)((char *)&g_183EBFF00 + v9) = 1;
  sub_140051BD0(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v16
#undef v17
#undef v18

//----- (00000001400F52D0) ----------------------------------------------------
__int64            sub_1400F52D0(unsigned int a1)
{
  int v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  signed int v6;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F52D0[304];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400F52D0 + 0)) /* [rsp+0h] */
#define Src (*(__m128i (*)[16])(void *)(sr_frame_1400F52D0 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1400F52D0 + 288)) /* [rsp+120h] */

  if ( a1 <= 0xFF )
  {
    v1 = (signed int)g_183F7A31C / 3;
    crt_sprintf(Src, "%s has died", (     char *)&dword_140404A6C[3597 * a1 + 71856254]);
    if ( game_connected )
    {
      v2 = -1;
      do
        ++v2;
      while ( SR_VEC_LANES(128, Src[0], i8)[v2] );
      v3 = world_event_count;
      if ( (int)v2 > 63 )
        LODWORD(v2) = 63;
      v4 = game_tick;
      v5 = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + v5) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + v5) = v4;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v5), Src, (int)v2);
      *((_BYTE *)&g_1873DE4A0 + v5 + (int)v2) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + v5) = v2;
      *(unsigned int *)((char *)&g_1873DE484 + v5) = 3;
      *(unsigned int *)((char *)&g_1873DE488 + v5) = -1;
      world_event_count = v3 + 1;
      *(unsigned int *)((char *)&g_1873DE48C + v5) = 0;
      HIWORD(world_event_count) = 0;
    }
    v6 = g_183EBFCD4;
    if ( (int)g_183EBFCD4 <= 50400 )
    {
      if ( v1 > 0 )
        v6 = 18000 / v1 + g_183EBFCD4;
      if ( v6 > 50400 )
        v6 = 50400;
      g_183EBFCD4 = v6;
    }
    return 0; /* the function has no caller */
  }
  return result;
}
#undef v8
#undef Src
#undef v10

//----- (00000001400F5480) ----------------------------------------------------
__int64 sub_1400F5480()
{
  signed int v0;
  int *v1;
  int i;
  int v3;
  unsigned int *v4;
  int v5;
  int *v6;
  int v7;
  unsigned int *v8;
  int v9;
  unsigned int *v10;
  __int64 v11;
  signed int v12;
  unsigned int *v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  unsigned int *v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned int *v30;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F5480[112];
#define v32 (*(__int64 (*))(void *)(sr_frame_1400F5480 + 0)) /* [rsp+0h] */
#define v33 (*(int (*))(void *)(sr_frame_1400F5480 + 32)) /* [rsp+20h] */
#define v34 (*(int (*))(void *)(sr_frame_1400F5480 + 36)) /* [rsp+24h] */
#define v35 (*(int (*))(void *)(sr_frame_1400F5480 + 64)) /* [rsp+40h] */
#define v36 (*(int (*))(void *)(sr_frame_1400F5480 + 68)) /* [rsp+44h] */
#define v37 (*(__int64 (*))(void *)(sr_frame_1400F5480 + 96)) /* [rsp+60h] */

  v0 = 0;
  v1 = &v33;
  for ( i = 0; i < 2; ++i )
  {
    v3 = 0;
    *v1 = 0;
    v4 = &g_151623978;
    do
    {
      if ( *(v4 - 2886) && !*v4 && *(v4 - 2853) == i )
        *v1 = ++v3;
      v4 += 3597;
    }
    while ( (__int64)v4 < (__int64)&g_1519A6D78 );
    ++v1;
  }
  if ( !g_183F7A608 || !v33 || !v34 )
  {
    v35 = 2;
    goto LABEL_16;
  }
  if ( v33 >= v34 )
  {
    v35 = 2 * v33 / v34;
LABEL_16:
    v36 = 2;
    goto LABEL_17;
  }
  v35 = 2;
  v36 = 2 * v34 / v33;
LABEL_17:
  v5 = 0;
  v6 = &v33;
  do
  {
    v7 = 0;
    *v6 = 0;
    v8 = &g_151623978;
    do
    {
      if ( *(v8 - 2886) && !*v8 && *(v8 - 2853) == v5 && *(v8 - 2847) != -1 )
        *v6 = ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)&g_1519A6D78 );
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  v9 = 0;
  v10 = &g_183EBFD78;
  v11 = 0;
  do
  {
    v12 = 0;
    if ( *(int *)((char *)&v33 + v11 * 4) > 0 )
    {
      v13 = &g_182BBB1E4;
      v14 = (unsigned int)v9 ^ 1LL;
      do
      {
        if ( *(v13 - 25) && *(v13 - 20) == 17 )
        {
          if ( (v15 = *((float *)v13 - 2), v15 >= *(float *)v10)
            && v15 < *((float *)v10 + 3)
            && (v16 = *((float *)v13 - 1), v16 >= *((float *)v10 + 1))
            && v16 < *((float *)v10 + 4)
            && *(float *)v13 >= *((float *)v10 + 2)
            && *(float *)v13 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[1735] && v13[1740] == 17 )
        {
          if ( (v17 = *((float *)v13 + 1758), v17 >= *(float *)v10)
            && v17 < *((float *)v10 + 3)
            && (v18 = *((float *)v13 + 1759), v18 >= *((float *)v10 + 1))
            && v18 < *((float *)v10 + 4)
            && (v19 = *((float *)v13 + 1760), v19 >= *((float *)v10 + 2))
            && v19 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[3495] && v13[3500] == 17 )
        {
          if ( (v20 = *((float *)v13 + 3518), v20 >= *(float *)v10)
            && v20 < *((float *)v10 + 3)
            && (v21 = *((float *)v13 + 3519), v21 >= *((float *)v10 + 1))
            && v21 < *((float *)v10 + 4)
            && (v22 = *((float *)v13 + 3520), v22 >= *((float *)v10 + 2))
            && v22 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[5255] && v13[5260] == 17 )
        {
          if ( (v23 = *((float *)v13 + 5278), v23 >= *(float *)v10)
            && v23 < *((float *)v10 + 3)
            && (v24 = *((float *)v13 + 5279), v24 >= *((float *)v10 + 1))
            && v24 < *((float *)v10 + 4)
            && (v25 = *((float *)v13 + 5280), v25 >= *((float *)v10 + 2))
            && v25 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        v13 += 7040;
      }
      while ( (__int64)v13 < (__int64)&g_18329B1E4 );
    }
    v26 = &g_151620CAC;
    v27 = 256;
    do
    {
      if ( *(v26 - 19) )
      {
        if ( v26[14] == v9 )
        {
          v28 = v12 / *(int *)((char *)&v35 + v11 * 4);
          *v26 += v28 + 250;
          v29 = (int)*(v26 - 4);
          if ( (_DWORD)v29 != -1 )
            dword_140404A6C[28 * v29 + 134050374] += v28;
        }
      }
      v26 += 3597;
      --v27;
    }
    while ( v27 );
    v10[14] = v12;
    ++v9;
    dword_140404A6C[v11 + 284023018] += v12;
    v10 += 5873;
    ++v11;
  }
  while ( v9 < 2 );
  v30 = &g_151620C60;
  do
  {
    if ( *v30 )
      sub_140051F50(v0);
    ++v0;
    v30 += 3597;
  }
  while ( v0 < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37

//----- (00000001400F5820) ----------------------------------------------------
unsigned int *           sub_1400F5820(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int *v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  unsigned int *v9;
  int i;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int *result;
  unsigned int *v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v3 = game_state;
  if ( game_state == 2 )
  {
    sub_14018A3E0(a1, a2, a3);
    sub_140008020();
    v3 = game_state;
  }
  if ( !game_type && v3 == 1 )
  {
    if ( (int)g_183EBFCD4 <= 0 )
    {
      v4 = g_183EBFCE0;
      game_state = 2;
    }
    else
    {
      v4 = g_183EBFCD4 - 1;
    }
    g_183EBFCD4 = v4;
  }
  v5 = &g_151620C60;
  v6 = 0;
  v7 = 256;
  do
  {
    if ( *v5 )
      sub_1400F1950(v6);
    ++v6;
    v5 += 3597;
  }
  while ( v6 < 256 );
  v8 = game_type;
  v9 = &g_151620DC4;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v9 - 89) )
    {
      if ( *(v9 - 50) == -1 )
      {
        if ( v8 - 2 <= 1 || v8 - 5 <= 2 )
        {
          v11 = 0;
          if ( game_state == 1 )
            v11 = 2;
          *v9 = v11;
        }
      }
      else
      {
        sub_1400F0640(i);
        v8 = game_type;
      }
    }
    v9 += 3597;
  }
  g_1A87C6BA4 = g_19021F0C0;
  g_1A87C6BA8 = g_19021F0D8;
  g_1A87C6BAC = g_19021F0F0;
  g_1A87C6BB0 = g_19021F108;
  g_1A87C6BB4 = g_19021F120;
  g_1A87C6BB8 = g_19021F138;
  renderer_sort_count = 6;
  sub_14007D710();
  g_183EBFDB4 = 0;
  g_183EC5978 = 0;
  g_183ECB53C = 0;
  g_19021F080 = dword_140404A6C[g_1A85C6BB8 + 437192782];
  g_183ED1100 = 0;
  g_183ED6CC4 = 0;
  g_183EDC888 = 0;
  g_19021F084 = dword_140404A6C[g_1A85C6BB4 + 437192782];
  g_19021F088 = dword_140404A6C[g_1A85C6BB0 + 437192782];
  g_19021F08C = dword_140404A6C[g_1A85C6BAC + 437192782];
  g_19021F090 = dword_140404A6C[g_1A85C6BA8 + 437192782];
  g_19021F094 = dword_140404A6C[g_1A85C6BA4 + 437192782];
  result = &g_151620CE4;
  v15 = &g_151620CE4;
  do
  {
    if ( *(v15 - 33) )
    {
      v16 = (int)*v15;
      if ( (unsigned int)v16 <= 5 && (v15[6] != -1 || v8 == 3) )
      {
        v12 = 23492 * v16;
        ++dword_140404A6C[5873 * v16 + 283831506];
        v8 = game_type;
      }
      v13 = *(v15 - 17);
      if ( (int)v13 > 0 )
      {
        v13 = (unsigned int)(v13 - 1);
        *(v15 - 17) = v13;
      }
    }
    v15 += 3597;
    --v7;
  }
  while ( v7 );
  if ( g_1AD04B218 )
  {
    v17 = g_1AD04B21C;
    v18 = g_1AD04B21C - 3;
    if ( (v18 & 0xFFFFFFFD) == 0 && v8 != g_1AD04B21C )
    {
      v18 = (__int64)&g_1519A40E4;
      do
      {
        if ( *(result - 33) )
          *result = 17;
        if ( result[3564] )
          result[3597] = 17;
        result += 7194;
      }
      while ( (__int64)result < (__int64)&g_1519A40E4 );
      game_type = v17;
    }
    result = (unsigned int *)sr_ResetGame(v18, v17, (__int64)v15);
    v8 = game_type;
    g_1AD04B218 = 0;
  }
  if ( v8 == 2 )
  {
    result = (unsigned int *)sub_1400F6170(v13, v12, (__int64)v15);
    v8 = game_type;
  }
  if ( v8 == 3 )
  {
    result = (unsigned int *)sub_1400F6C50();
    v8 = game_type;
  }
  if ( v8 == 4 )
  {
    result = (unsigned int *)sub_1400FA3A0();
    v8 = game_type;
  }
  if ( v8 == 5 )
  {
    result = (unsigned int *)sub_1400F80A0(v13, v12, (__int64)v15);
    v8 = game_type;
  }
  if ( v8 == 6 )
  {
    result = (unsigned int *)sub_1400F5B60(v13);
    v8 = game_type;
  }
  if ( v8 == 7 )
    return (unsigned int *)sub_1400F99A0();
  return result;
}

//----- (00000001400F6030) ----------------------------------------------------
void sub_1400F6030()
{
  __int64 v0;
  unsigned int *v1;
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  int v7;
  float *v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;

  v0 = g_183F79E00;
  v1 = &g_151620CFC;
  v2 = 1;
  v3 = 256;
  do
  {
    if ( *(v1 - 39) )
    {
      v4 = (int)*v1;
      if ( (_DWORD)v4 != -1 )
      {
        v5 = *(v1 - 10);
        if ( v5 < (int)v0 && (int)v0 > 0 )
        {
          v6 = *(v1 - 9);
          v7 = 1;
          v8 = (float *)(unsigned int *)&g_183F79E0C;
          v9 = v0;
          do
          {
            if ( (v6 & v7) == 0 )
            {
              v10 = *(v8 - 1) - *(float *)&dword_140404A6C[7166 * v4 + 280651336];
              v11 = *(v8 - 2) - *(float *)&dword_140404A6C[7166 * v4 + 280651335];
              v12 = *v8 - *(float *)&dword_140404A6C[7166 * v4 + 280651337];
              if ( (float)((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)) >= 16.0 )
              {
                v2 = 0;
              }
              else
              {
                v6 |= v7;
                *(v1 - 10) = ++v5;
              }
            }
            v7 = __ROL4__(v7, 1);
            v8 += 3;
            --v9;
          }
          while ( v9 );
          *(v1 - 9) = v6;
        }
      }
    }
    v1 += 3597;
    --v3;
  }
  while ( v3 );
  if ( !v2 )
    ++g_183EBFCD4;
}

//----- (00000001400F6C50) ----------------------------------------------------
__int64 sub_1400F6C50()
{
  unsigned int *v0;
  __int64 v1;
  unsigned int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  float v10;
  float v11;
  float v12;
  int v13;
  __int64 v14;
  double v15;
  bool v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  bool v27;
  unsigned int *v28;
  unsigned int *v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int *v34;
       char **v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  unsigned int *v46;
  unsigned int v47;
  signed int v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  unsigned int *v53;
  double v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  signed int v61;
  __int64 v62;
  signed int v63;
  __int64 v64;
  int v65;
  int j;
  unsigned int *v67;
  __int64 v68;
  __int64 v69;
  int v70;
  unsigned int *v71;
  int v72;
  _DWORD *v73;
  __int64 v74;
  int v75;
  signed int v76;
  unsigned int *v77;
  __int64 v78;
  int v79;
  unsigned int *v80;
  int v81;
  __int64 v82;
  unsigned int *v83;
  int v84;
  __int64 v85;
  unsigned int v86;
  float v87;
  BOOL v88;
  float v89;
  float v90;
  float v91;
  int v92;
  float *v93;
  int v94;
  unsigned int *v95;
  __int64 v96;
  float v97;
  float v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int *v101;
  __int64 v102;
  unsigned int *v103;
  __int64 v104;
  __int64 v105;
  int v106;
  float *i;
  int v108;
  float v109;
  float *v110;
  float v111;
  float v112;
  unsigned int *v113;
  signed int v114;
  unsigned int *v115;
  int v116;
  __int64 v117;
  unsigned int v118;
  unsigned int *v119;
  int v120;
  float *v121;
  __int64 v122;
  __int64 v123;
  int v124;
  int v125;
  __int64 v126;
  unsigned int *v127;
  __int64 v128;
  int v129;
  float v130;
  __int64 v131;
  int v132;
  float v133;
  __int64 v134;
  int v135;
  float v136;
  __int64 v137;
  int v138;
  float v139;
  unsigned int *v140;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F6C50[656];
#define v142 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 0)) /* [rsp+0h] */
#define v143 (*(unsigned int (*))(void *)(sr_frame_1400F6C50 + 32)) /* [rsp+20h] */
#define v144 (*(float (*))(void *)(sr_frame_1400F6C50 + 48)) /* [rsp+30h] */
#define v145 (*(float (*))(void *)(sr_frame_1400F6C50 + 52)) /* [rsp+34h] */
#define v146 (*(float (*))(void *)(sr_frame_1400F6C50 + 56)) /* [rsp+38h] */
#define v147 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 64)) /* [rsp+40h] */
#define v148 (*(unsigned int * (*))(void *)(sr_frame_1400F6C50 + 72)) /* [rsp+48h] */
#define v149 (*(__int128 (*))(void *)(sr_frame_1400F6C50 + 80)) /* [rsp+50h] */
#define v150 (*(__int128 (*))(void *)(sr_frame_1400F6C50 + 96)) /* [rsp+60h] */
#define v151 (*(float (*))(void *)(sr_frame_1400F6C50 + 112)) /* [rsp+70h] */
#define v152 (*(__m128i (*)[6])(void *)(sr_frame_1400F6C50 + 128)) /* [rsp+80h] */
#define v153 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 640)) /* [rsp+280h] */

  v0 = &g_151620CE8;
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && (int)*v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  if ( game_state != 1 )
  {
    if ( game_state == 2 )
    {
      v76 = game_state_time + 1;
      v75 = --g_183EBFCD4;
      ++game_state_time;
      if ( g_183EBFCD4 == 3600 * ((signed int)g_183EBFCD4 / 3600) )
      {
        v77 = &g_151620CCC;
        v78 = 256;
        do
        {
          v79 = *v77;
          *(v77 - 1) = 0;
          if ( v79 > 0 )
            *v77 = v79 - 1;
          v77[1] = 0;
          v77 += 3597;
          --v78;
        }
        while ( v78 );
      }
      v80 = &g_151620CE4;
      v81 = 1;
      v82 = 1024;
      if ( v76 >= 7200 )
      {
        v83 = &g_182BBB180;
        v84 = 1;
        v85 = 1024;
        do
        {
          if ( *v83 )
          {
            v86 = v83[5];
            if ( v86 == 17 || v86 - 19 <= 5 )
            {
              v87 = *((float *)v83 + 23);
              v88 = 0;
              if ( v87 >= g_183EBFD60 && v87 < g_183EBFD6C )
              {
                v89 = *((float *)v83 + 25);
                if ( v89 >= g_183EBFD68 )
                  v88 = g_183EBFD74 > v89;
              }
              if ( v87 >= g_183EC5924 && v87 < g_183EC5930 )
              {
                v90 = *((float *)v83 + 25);
                if ( v90 >= g_183EC592C && g_183EC5938 > v90 )
                  v88 = 1;
              }
              if ( v87 < g_183ECB4E8
                || v87 >= g_183ECB4F4
                || (v91 = *((float *)v83 + 25), v91 < g_183ECB4F0)
                || v91 >= g_183ECB4FC )
              {
                if ( !v88 )
                  v84 = 0;
              }
            }
          }
          v83 += 1760;
          --v85;
        }
        while ( v85 );
        if ( !v84 )
        {
          v92 = 0;
          v93 = (float *)(unsigned int *)&g_183EBFD6C;
          do
          {
            v94 = 0;
            v95 = &g_151620CE4;
            do
            {
              if ( *(v95 - 33) )
              {
                if ( *v95 == v92 )
                {
                  v96 = (int)v95[6];
                  if ( (_DWORD)v96 != -1 )
                  {
                    v97 = *(float *)&dword_140404A6C[7166 * v96 + 280651335];
                    if ( v97 < *(v93 - 3) )
                      goto LABEL_155;
                    if ( v97 >= *v93 )
                      goto LABEL_155;
                    v98 = *(float *)&dword_140404A6C[7166 * v96 + 280651337];
                    if ( v98 < *(v93 - 1) || v98 >= v93[2] )
                      goto LABEL_155;
                  }
                }
              }
              ++v94;
              v95 += 3597;
            }
            while ( v94 < 256 );
            ++v92;
            v93 += 5873;
          }
          while ( (__int64)v93 < (__int64)(unsigned int *)&g_183ED10B8 );
          v75 -= 9;
          g_183EBFCD4 = v75;
LABEL_155:
          v81 = 1;
        }
      }
      v99 = game_tick;
      v100 = game_connected;
      if ( !g_183EBFDC0 )
      {
        v101 = &g_151620CE4;
        do
        {
          if ( *(v101 - 33) && !*v101 && v101[6] != -1 )
            goto LABEL_165;
          v101 += 3597;
        }
        while ( (__int64)v101 < (__int64)&g_1519A40E4 );
        if ( game_connected )
        {
          v102 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + v102) = 10;
          *(unsigned int *)((char *)&g_1873DE464 + v102) = v99;
          *(unsigned int *)((char *)&g_1873DE480 + v102) = 0;
          *(unsigned int *)((char *)&g_1873DE484 + v102) = 1;
        }
        g_183EBFDC0 = 1;
      }
LABEL_165:
      if ( !g_183EC5984 )
      {
        v103 = &g_151620CE4;
        do
        {
          if ( *(v103 - 33) && *v103 == 1 && v103[6] != -1 )
            goto LABEL_174;
          v103 += 3597;
        }
        while ( (__int64)v103 < (__int64)&g_1519A40E4 );
        if ( v100 )
        {
          v104 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + v104) = 10;
          *(unsigned int *)((char *)&g_1873DE464 + v104) = v99;
          *(unsigned int *)((char *)&g_1873DE480 + v104) = 1;
          *(unsigned int *)((char *)&g_1873DE484 + v104) = 1;
        }
        g_183EC5984 = 1;
      }
LABEL_174:
      if ( !g_183ECB548 )
      {
        do
        {
          if ( *(v80 - 33) && *v80 == 2 && v80[6] != -1 )
            goto LABEL_182;
          v80 += 3597;
        }
        while ( (__int64)v80 < (__int64)&g_1519A40E4 );
        if ( v100 )
        {
          v105 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + v105) = 10;
          *(unsigned int *)((char *)&g_1873DE464 + v105) = v99;
          *(unsigned int *)((char *)&g_1873DE480 + v105) = 2;
          *(unsigned int *)((char *)&g_1873DE484 + v105) = 1;
        }
        g_183ECB548 = 1;
      }
LABEL_182:
      v106 = 1;
      for ( i = (float *)&g_182BBB1DC; ; i += 1760 )
      {
        if ( *((_DWORD *)i - 23) )
        {
          v108 = *((_DWORD *)i - 18);
          if ( v108 == 17 || (unsigned int)(v108 - 19) <= 5 )
          {
            v109 = *i;
            v110 = (float *)&g_183EBFD84;
            do
            {
              if ( v109 >= *(v110 - 3) && v109 < *v110 )
              {
                v111 = i[1];
                if ( v111 >= *(v110 - 2) && v111 < v110[1] )
                {
                  v112 = i[2];
                  if ( v112 >= *(v110 - 1) && v112 < v110[2] )
                    goto LABEL_195;
                }
              }
              v110 += 5873;
            }
            while ( (__int64)v110 < (__int64)&g_183ED10D0 );
            v106 = 0;
          }
        }
LABEL_195:
        if ( !--v82 )
        {
          if ( v106 )
          {
            if ( v75 > 60 )
              v75 = 60;
            g_183EBFCD4 = v75;
          }
          v113 = &g_151623978;
          do
          {
            if ( *(v113 - 2886) && !*v113 && *(v113 - 2847) != -1 )
              v81 = 0;
            v113 += 3597;
          }
          while ( (__int64)v113 < (__int64)&g_1519A6D78 );
          if ( v81 && v75 > 60 )
          {
            g_183EBFCD4 = 60;
          }
          else if ( v75 <= 0 )
          {
            sub_1400F3E60();
            game_state = 3;
            g_183EBFCD4 = g_183EBFD30;
          }
          return 0; /* no result: rax is residue at the exit */
        }
      }
    }
    if ( game_state != 3 )
      return 0; /* no result: rax is residue at the exit */
    v114 = g_183EBFCD4 - 1;
    g_183EBFCD4 = v114;
    if ( v114 == 1250 )
    {
      sub_1400F0160(-1);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 1200 )
    {
      sub_1400F0160(0);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 1080 )
    {
      sub_1400F0160(1);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 960 )
    {
      sub_1400F0160(2);
      v114 = g_183EBFCD4;
    }
    v147 = 3;
    if ( v114 == 840 )
    {
      sub_1400F0160(3);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 720 )
    {
      sub_1400F0160(4);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 600 )
    {
      sub_1400F0160(5);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 480 )
    {
      sub_1400F0160(6);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 360 )
    {
      sub_1400F0160(7);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 240 )
    {
      sub_1400F0160(8);
      v114 = g_183EBFCD4;
    }
    if ( v114 == 120 )
    {
      sub_1400F0160(9);
      v114 = g_183EBFCD4;
    }
    if ( v114 > 0 )
      return 0; /* no result: rax is residue at the exit */
    v115 = &g_151620CF0;
    v116 = 0;
    v117 = (__int64)&g_1519A40F0;
    do
    {
      if ( *(v115 - 36) )
        *v115 = 0;
      if ( v115[3561] )
        v115[3597] = 0;
      v115 += 7194;
    }
    while ( (__int64)v115 < (__int64)&g_1519A40F0 );
    v118 = g_183EBFCB0;
    v119 = &g_183EBFDC4;
    v120 = 0;
    v121 = (float *)&g_19021F0C4;
LABEL_242:
    v122 = -1;
    v123 = 2;
    v124 = -1;
    v125 = 2;
    v126 = 0;
    v127 = &g_151620CE4;
    while ( 1 )
    {
      if ( *(v127 - 33) && *v127 == v120 )
      {
        if ( v118 == 1 )
        {
          v128 = (int)*(v127 - 18);
          if ( (_DWORD)v128 != -1 )
          {
            v117 = 112 * v128;
            v129 = dword_140404A6C[28 * v128 + 134050374];
            if ( (int)v126 < v129 )
            {
              v126 = (unsigned int)v129;
LABEL_251:
              v122 = v123 - 2;
              v124 = v125 - 2;
            }
          }
        }
        else
        {
          v130 = (float)((float)(int)v127[2] * *v121) + (float)(int)*(v127 - 14);
          if ( (float)(int)v126 < v130 )
          {
            v126 = (unsigned int)(int)v130;
            goto LABEL_251;
          }
        }
      }
      if ( v127[3564] && v127[3597] == v120 )
      {
        if ( v118 == 1 )
        {
          v131 = (int)v127[3579];
          if ( (_DWORD)v131 != -1 )
          {
            v117 = 112 * v131;
            v132 = dword_140404A6C[28 * v131 + 134050374];
            if ( (int)v126 < v132 )
            {
              v126 = (unsigned int)v132;
LABEL_260:
              v122 = v123 - 1;
              v124 = v125 - 1;
            }
          }
        }
        else
        {
          v133 = (float)((float)(int)v127[3599] * *v121) + (float)(int)v127[3583];
          if ( (float)(int)v126 < v133 )
          {
            v126 = (unsigned int)(int)v133;
            goto LABEL_260;
          }
        }
      }
      if ( v127[7161] && v127[7194] == v120 )
      {
        if ( v118 == 1 )
        {
          v134 = (int)v127[7176];
          if ( (_DWORD)v134 != -1 )
          {
            v117 = 112 * v134;
            v135 = dword_140404A6C[28 * v134 + 134050374];
            if ( (int)v126 < v135 )
            {
              v126 = (unsigned int)v135;
LABEL_269:
              v122 = v123;
              v124 = v125;
            }
          }
        }
        else
        {
          v136 = (float)((float)(int)v127[7196] * *v121) + (float)(int)v127[7180];
          if ( (float)(int)v126 < v136 )
          {
            v126 = (unsigned int)(int)v136;
            goto LABEL_269;
          }
        }
      }
      if ( !v127[10758] || v127[10791] != v120 )
        goto LABEL_279;
      if ( v118 == 1 )
      {
        v137 = (int)v127[10773];
        if ( (_DWORD)v137 == -1 )
          goto LABEL_279;
        v117 = 112 * v137;
        v138 = dword_140404A6C[28 * v137 + 134050374];
        if ( (int)v126 >= v138 )
          goto LABEL_279;
        v126 = (unsigned int)v138;
        goto LABEL_278;
      }
      v139 = (float)((float)(int)v127[10793] * *v121) + (float)(int)v127[10777];
      if ( (float)(int)v126 < v139 )
      {
        v126 = (unsigned int)(int)v139;
LABEL_278:
        v122 = v123 + 1;
        v124 = v125 + 1;
      }
LABEL_279:
      v125 += 4;
      v123 += 4;
      v127 += 14388;
      if ( v125 - 2 >= 256 )
      {
        if ( v124 != -1 )
        {
          v117 = (__int64)&g_151620CF0;
          dword_140404A6C[3597 * v122 + 71856289] = 1;
        }
        if ( *v119 != v124 )
        {
          *v119 = v124;
          v119[5654] = 0;
          v118 = g_183EBFCB0;
        }
        ++v120;
        v121 += 6;
        v119 += 5873;
        if ( !--v147 )
        {
          v140 = &g_151623978;
          do
          {
            if ( *(v140 - 2886) && !*v140 )
              sub_140117340(v116);
            ++v116;
            v140 += 3597;
          }
          while ( v116 < 256 );
          sr_ResetGame(v117, (__int64)v127, v126);
          return 0; /* no result: rax is residue at the exit */
        }
        goto LABEL_242;
      }
    }
  }
  v2 = &g_151623978;
  v3 = g_183EBFCD4;
  v4 = 0;
  v5 = 0;
  v6 = 1;
  do
  {
    if ( *(v2 - 2886) && !*v2 )
    {
      v7 = (int)*(v2 - 2853);
      if ( (unsigned int)v7 <= 2 )
        ++v4;
      v8 = 0;
      if ( *(v2 - 2868) )
        v8 = v6;
      v6 = v8;
      v9 = v8;
      if ( v3 < 5400 && *(v2 - 2847) == -1 && (_DWORD)v7 != -1 && (int)v7 < 3 )
      {
        v10 = *(float *)&dword_140404A6C[5873 * v7 + 283831501];
        v11 = *(float *)&dword_140404A6C[5873 * v7 + 283831502];
        v12 = *(float *)&dword_140404A6C[5873 * v7 + 283831503];
        v144 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v10;
        v13 = (unsigned __int8)rand();
        v14 = (int)*(v2 - 2853);
        v151 = 1.0;
        v145 = v11 - 0.25;
        *(_QWORD *)&v15 = dword_140404A6C[5873 * v14 + 283831497];
        v146 = (float)((float)(v13 - 127) * 0.0234375) + v12;
        *(float *)&v15 = *(float *)&v15 + 1.5707964;
        v149 = xmmword_140278D30;
        v150 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v149, (float *)&v149 + 3, v15);
        v16 = (int)v2[683] <= 2;
        v17 = *(v2 - 2853);
        v2[682] = 1;
        if ( v16 )
          v2[683] = v17;
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            v2[684] = 9;
          }
          else if ( v17 == 2 )
          {
            v2[684] = 8;
          }
        }
        else
        {
          v2[684] = 2;
        }
        v18 = sub_140053840(&v144, (float *)&v149, v5);
        *(v2 - 2847) = v18;
        *(v2 - 2797) = 0;
        dword_140404A6C[7166 * v18 + 280651341] = LODWORD(v15);
        sub_140051DC0(v5);
        sub_140117020(v5);
        v3 = g_183EBFCD4;
        v6 = v9;
      }
    }
    ++v5;
    v2 += 3597;
  }
  while ( v5 < 256 );
  v19 = game_tick;
  v20 = 0;
  if ( v4 )
    v20 = v6;
  if ( v3 == g_183EBFCDC && game_connected )
  {
    v21 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    v22 = (int)world_event_count;
    *(unsigned int *)((char *)&g_1873DE460 + v21) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + v21) = v19;
    *(_QWORD *)((char *)&g_1873DE480 + v21) = 0;
    v23 = v22 << 7;
    world_event_count = v22 + 1;
    HIWORD(world_event_count) = 0;
    v24 = (int)world_event_count;
    *(unsigned int *)((char *)&g_1873DE460 + v23) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + v23) = v19;
    *(_QWORD *)((char *)&g_1873DE480 + v23) = 1;
    v25 = v24 << 7;
    world_event_count = v24 + 1;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + v25) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + v25) = v19;
    *(_QWORD *)((char *)&g_1873DE480 + v25) = 2;
  }
  v26 = v3 - 1;
  g_183EBFCD4 = v26;
  if ( !v4 )
  {
    if ( (unsigned int)(v26 - 5401) <= 0x5DA )
      v26 = 6900;
    g_183EBFCD4 = v26;
  }
  if ( !v20 )
  {
    v27 = v26 == 5400;
LABEL_41:
    if ( !v27 )
      goto LABEL_92;
    goto LABEL_42;
  }
  v27 = v26 == 5400;
  if ( v26 <= 5400 )
    goto LABEL_41;
  g_183EBFCD4 = 5400;
LABEL_42:
  sub_14012E960(128);
  v28 = &g_19021F244;
  v29 = &g_19021F244;
  do
  {
    if ( *v29 && (rand() & 7) == 0 )
      *v29 = 0;
    v29 += 4;
  }
  while ( (__int64)v29 < (__int64)&g_19021F2C4 );
  do
  {
    if ( *v28 )
      goto LABEL_62;
    v30 = rand() & 0xF;
    if ( v30 < 2 )
    {
      v31 = 7;
LABEL_60:
      v32 = v31;
      goto LABEL_61;
    }
    if ( v30 >= 6 )
    {
      if ( v30 < 0xA )
      {
        v31 = 15;
        goto LABEL_60;
      }
      if ( v30 < 0xD )
      {
        v31 = 9;
        goto LABEL_60;
      }
      if ( v30 < 0xF )
      {
        v31 = 6;
        goto LABEL_60;
      }
      LODWORD(v31) = 4;
      v32 = 4;
      if ( (rand() & 0xF) == 0 )
      {
        v31 = 5;
        goto LABEL_60;
      }
    }
    else
    {
      LODWORD(v31) = 0;
      v32 = 0;
    }
LABEL_61:
    *v28 = 1;
    v28[1] = v31;
    v28[3] = dword_140404A6C[24944 * v32 + 346707730];
    v28[2] = rand() % 6;
LABEL_62:
    v28 += 4;
  }
  while ( (__int64)v28 < (__int64)&g_19021F2C4 );
  sub_14005E520();
  v33 = 3;
  v34 = &g_183EBFDC4;
  v35 = (     char **)off_1402B2890;
  v148 = &g_183EBFDC4;
  v147 = 3;
  do
  {
    v36 = (int)*v34;
    if ( (_DWORD)v36 != -1 )
    {
      crt_sprintf(v152, "%s Manager: %s", *v35, (     char *)&dword_140404A6C[3597 * v36 + 71856254]);
      if ( game_connected )
      {
        v37 = -1;
        do
          ++v37;
        while ( SR_VEC_LANES(128, v152[0], i8)[v37] );
        v38 = game_tick;
        v39 = world_event_count;
        if ( (int)v37 > 63 )
          LODWORD(v37) = 63;
        v40 = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + v40) = 2;
        *(unsigned int *)((char *)&g_1873DE464 + v40) = v38;
        crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v40), v152, (int)v37);
        v33 = v147;
        *((_BYTE *)&g_1873DE4A0 + v40 + (int)v37) = 0;
        *(unsigned int *)((char *)&g_1873DE480 + v40) = v37;
        *(unsigned int *)((char *)&g_1873DE484 + v40) = 0;
        *(unsigned int *)((char *)&g_1873DE488 + v40) = -1;
        *(unsigned int *)((char *)&g_1873DE48C + v40) = 0;
        world_event_count = v39 + 1;
        HIWORD(world_event_count) = 0;
      }
    }
    ++v35;
    v34 = v148 + 5873;
    --v33;
    v148 += 5873;
    v147 = v33;
  }
  while ( v33 );
  v41 = 0;
  v42 = 0;
  do
  {
    v43 = dword_140404A6C[v42 + 283836331];
    v44 = 0;
    v45 = 0;
    if ( v43 <= 0 )
    {
LABEL_77:
      v47 = -1;
    }
    else
    {
      v46 = &dword_140404A6C[v42 + 283836332];
      while ( *v46 )
      {
        ++v44;
        ++v45;
        v46 += 13;
        if ( v44 >= v43 )
          goto LABEL_77;
      }
      v143 = 0;
      dword_140404A6C[13 * v45 + 283836332 + v42] = 1;
      v47 = sr_CreateVehicle(
              0,
              (float *)&dword_140404A6C[5873 * v41 + 283836333 + 13 * v44],
              nullptr,
              &dword_140404A6C[5873 * v41 + 283836336 + 13 * v44],
              v143);
    }
    v48 = sub_14012CEB0(0, 0, 0, 0, 0, 0.0);
    v49 = 383LL * v48;
    dword_140404A6C[v49 + 132400668] = 0;
    dword_140404A6C[v49 + 132400639] = v47;
    v16 = (int)dword_140404A6C[v42 + 283831506] <= 4;
    dword_140404A6C[5210 * v47 + 129720183] = v48;
    if ( !v16 )
    {
      v50 = dword_140404A6C[v42 + 283836331];
      v51 = 0;
      v52 = 0;
      if ( v50 > 0 )
      {
        v53 = &dword_140404A6C[v42 + 283836332];
        while ( *v53 )
        {
          ++v51;
          ++v52;
          v53 += 13;
          if ( v51 >= v50 )
            goto LABEL_86;
        }
        v143 = 0;
        dword_140404A6C[13 * v52 + 283836332 + v42] = 1;
        sr_CreateVehicle(
          9,
          (float *)&dword_140404A6C[5873 * v41 + 283836333 + 13 * v51],
          nullptr,
          &dword_140404A6C[5873 * v41 + 283836336 + 13 * v51],
          v143);
      }
    }
LABEL_86:
    *(_QWORD *)&v54 = dword_140404A6C[v42 + 283831497];
    v55 = *(float *)&dword_140404A6C[v42 + 283831498];
    *(float *)&v54 = *(float *)&v54 - 1.5707964;
    v56 = *(float *)&dword_140404A6C[v42 + 283831499];
    v57 = *(float *)&dword_140404A6C[v42 + 283831500];
    v149 = xmmword_140278D30;
    v151 = 1.0;
    v150 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v149, (float *)&v149 + 3, v54);
    sub_14007B2A0((__int64)&v149, (float *)&v149 + 3, sr_export_float_lane_container(1078530011));
    v58 = (float)(*((float *)&v150 + 2) * 7.75) + v55;
    v59 = (float)(*((float *)&v150 + 3) * 7.75) + v56;
    v144 = v58;
    v145 = v59;
    v60 = (float)(v151 * 7.75) + v57;
    v146 = v60;
    v61 = sr_CreateItem(25, &v144, nullptr, (float *)&v149);
    if ( v61 != -1 )
    {
      v62 = 1760LL * v61;
      dword_140404A6C[v62 + 278846051] = 0;
      dword_140404A6C[v62 + 278845981] = 1111 * (v41 + 1);
      sub_140051940(v61);
    }
    v144 = (float)(*(float *)&v149 * 0.5) + v58;
    v145 = (float)(*((float *)&v149 + 1) * 0.5) + v59;
    v146 = (float)(*((float *)&v149 + 2) * 0.5) + v60;
    v63 = sr_CreateItem(25, &v144, nullptr, (float *)&v149);
    if ( v63 != -1 )
    {
      v64 = 1760LL * v63;
      dword_140404A6C[v64 + 278846051] = 1;
      dword_140404A6C[v64 + 278845981] = 1111 * v41 + 1112;
      sub_140051940(v63);
    }
    ++v41;
    v42 += 5873;
  }
  while ( v41 < 3 );
  v19 = game_tick;
  v26 = g_183EBFCD4;
LABEL_92:
  if ( v26 < 5400 )
  {
    v65 = 1;
    for ( j = 0; j < 3; ++j )
    {
      v67 = &g_151620CE4;
      v68 = 256;
      do
      {
        if ( *(v67 - 33) )
        {
          if ( *v67 == j )
          {
            v69 = (int)v67[6];
            if ( (_DWORD)v69 != -1 && dword_140404A6C[7166 * v69 + 280651313] == -1 )
              v65 = 0;
          }
        }
        v67 += 3597;
        --v68;
      }
      while ( v68 );
    }
    if ( v65 )
    {
      v26 -= 7;
      g_183EBFCD4 = v26;
    }
  }
  if ( v26 <= 0 )
  {
    v70 = 0;
    v71 = &g_183EBFDC0;
    while ( 1 )
    {
      v72 = 0;
      v73 = v71 + 79;
      do
      {
        if ( *v73 )
          sub_1400519F0(v70, v72);
        ++v72;
        v73 += 279;
      }
      while ( v72 < 16 );
      if ( game_connected )
      {
        v74 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v74) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v74) = v19;
        *(unsigned int *)((char *)&g_1873DE480 + v74) = v70;
        *(unsigned int *)((char *)&g_1873DE484 + v74) = 1;
      }
      *v71 = 1;
      ++v70;
      v71 += 5873;
      if ( v70 >= 3 )
        break;
      v19 = game_tick;
    }
    game_state = 2;
    g_183EBFCD4 = 3600 * g_183F7A5AC;
  }
  return 0; /* no result: rax is residue at the exit */
}
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152
#undef v153

//----- (00000001400F99A0) ----------------------------------------------------
__int64 sub_1400F99A0()
{
  unsigned int *v0;
  __int64 v1;
  unsigned int *v2;
  int v3;
  int v4;
  unsigned int *v5;
  __int64 v6;
  int v7;
  int i;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  int v13;
  __int64 v14;
  double v15;
  bool v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  signed int v27;
  signed int v28;
  bool v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int *v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  int v39;
  __int64 v40;
  double v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  float *v45;
  float v46;
  float *v47;
  float v48;
  float v49;
  int v50;
  __int128 *v51;
  int j;
  int v53;
  unsigned int *v54;
  int v55;
  unsigned int *v56;
  __int64 v57;
  int v58;
  unsigned int *v59;
  int v60;
  unsigned int *v61;
  __int64 v62;
  signed int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  signed int v67;
  unsigned int *v68;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F99A0[96];
#define v70 (*(__int64 (*))(void *)(sr_frame_1400F99A0 + 0)) /* [rsp+0h] */
#define v71 (*(float (*))(void *)(sr_frame_1400F99A0 + 32)) /* [rsp+20h] */
#define v72 (*(float (*))(void *)(sr_frame_1400F99A0 + 36)) /* [rsp+24h] */
#define v73 (*(float (*))(void *)(sr_frame_1400F99A0 + 40)) /* [rsp+28h] */
#define v74 (*(__int128 (*))(void *)(sr_frame_1400F99A0 + 48)) /* [rsp+30h] */
#define v75 (*(__int128 (*))(void *)(sr_frame_1400F99A0 + 64)) /* [rsp+40h] */
#define v76 (*(int (*))(void *)(sr_frame_1400F99A0 + 80)) /* [rsp+50h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_1400F99A0 + 88)) /* [rsp+58h] */

  v0 = &g_151620CE8;
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && (int)*v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  switch ( game_state )
  {
    case 1u:
      v2 = &g_151623978;
      v3 = 1;
      v4 = 0;
      v5 = &g_151623978;
      v6 = 256;
      do
      {
        if ( *(v5 - 2886) && !*v5 )
        {
          if ( *(v5 - 2853) <= 1 )
            ++v4;
          if ( !*(v5 - 2868) )
            v3 = 0;
        }
        v5 += 3597;
        --v6;
      }
      while ( v6 );
      v7 = --g_183EBFCD4;
      if ( v3 )
      {
        if ( v7 > 60 )
          v7 = 60;
        g_183EBFCD4 = v7;
      }
      if ( !v4 )
      {
        g_183EBFCD4 = 1800;
        return 0; /* no result: rax is residue at the exit */
      }
      if ( v7 > 0 )
        return 0; /* no result: rax is residue at the exit */
      for ( i = 0; i < 256; ++i )
      {
        if ( *(v2 - 2886) )
        {
          if ( !*v2 && *(v2 - 2847) == -1 )
          {
            v9 = (int)*(v2 - 2853);
            if ( (_DWORD)v9 != -1 && (int)v9 < 2 )
            {
              v10 = *(float *)&dword_140404A6C[5873 * v9 + 283831501];
              v11 = *(float *)&dword_140404A6C[5873 * v9 + 283831502];
              v12 = *(float *)&dword_140404A6C[5873 * v9 + 283831503];
              v71 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v10;
              v13 = (unsigned __int8)rand();
              v14 = (int)*(v2 - 2853);
              v76 = 1065353216;
              v72 = v11 - 0.25;
              *(_QWORD *)&v15 = dword_140404A6C[5873 * v14 + 283831497];
              v73 = (float)((float)(v13 - 127) * 0.0234375) + v12;
              *(float *)&v15 = *(float *)&v15 + 1.5707964;
              v74 = xmmword_140278D30;
              v75 = xmmword_140278D30;
              sub_14007B2A0((__int64)&v74, (float *)&v74 + 3, v15);
              v16 = (int)v2[683] <= 2;
              v17 = *(v2 - 2853);
              v2[682] = 1;
              if ( v16 )
                v2[683] = v17;
              if ( v17 )
              {
                if ( v17 == 1 )
                {
                  v2[684] = 9;
                }
                else if ( v17 == 2 )
                {
                  v2[684] = 8;
                }
              }
              else
              {
                v2[684] = 2;
              }
              v18 = sub_140053840(&v71, (float *)&v74, i);
              *(v2 - 2847) = v18;
              *(v2 - 2797) = 0;
              dword_140404A6C[7166 * v18 + 280651341] = LODWORD(v15);
              sub_140051DC0(i);
              sub_140117020(i);
            }
          }
        }
        v2 += 3597;
      }
      v19 = (v4 >> 2) + 2;
      v76 = 1065353216;
      if ( v19 > 12 )
        v19 = 12;
      v20 = (float)(g_183EC596C + g_183EBFDA8) * 0.5;
      v71 = (float)(g_183EC5964 + g_183EBFDA0) * 0.5;
      v72 = (float)(g_183EC5968 + g_183EBFDA4) * 0.5;
      v74 = xmmword_140278D30;
      v75 = xmmword_140278D30;
      if ( g_183EBFCC4 == 5 )
        v19 *= 2;
      if ( v19 <= 18 )
      {
        v21 = v20 - (float)((float)v19 * 0.3125);
        v73 = v21;
        if ( v19 < 0 )
        {
LABEL_50:
          game_state = 2;
          g_183EBFCD4 = 3600 * g_183F7A600;
          return 0; /* no result: rax is residue at the exit */
        }
      }
      else
      {
        v21 = v20 - 5.625;
        v19 = 18;
        v73 = v21;
      }
      v22 = (unsigned int)(v19 + 1);
      do
      {
        v23 = (int)sr_CreateItem(15, &v71, nullptr, (float *)&v74);
        v24 = 1760 * v23;
        dword_140404A6C[v24 + 278845898] = 16;
        v25 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v25, -1, 0);
        v26 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v26, -1, 0);
        v27 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v27, -1, 0);
        v28 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v28, -1, 0);
        v29 = game_connected == 0;
        dword_140404A6C[v24 + 278845898] = 15;
        if ( !v29 && (unsigned int)v23 <= 0x3FF )
          ++dword_140404A6C[v23 + 280648157];
        v21 = v21 + 0.625;
        v73 = v21;
        --v22;
      }
      while ( v22 );
      goto LABEL_50;
    case 2u:
      v30 = 1;
      ++game_state_time;
      v31 = g_183F7A5F8;
      v32 = --g_183EBFCD4;
      if ( g_183F7A5F8 )
      {
        v33 = 0;
        v34 = &g_151623978;
        do
        {
          if ( *(v34 - 2886) )
          {
            if ( !*v34 && *(v34 - 2847) == -1 )
            {
              v35 = (int)*(v34 - 2853);
              if ( (_DWORD)v35 != -1 && (int)v35 < 2 )
              {
                v36 = *(float *)&dword_140404A6C[5873 * v35 + 283831501];
                v37 = *(float *)&dword_140404A6C[5873 * v35 + 283831502];
                v38 = *(float *)&dword_140404A6C[5873 * v35 + 283831503];
                v71 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v36;
                v39 = (unsigned __int8)rand();
                v40 = (int)*(v34 - 2853);
                v76 = 1065353216;
                v72 = v37 - 0.25;
                *(_QWORD *)&v41 = dword_140404A6C[5873 * v40 + 283831497];
                v73 = (float)((float)(v39 - 127) * 0.0234375) + v38;
                *(float *)&v41 = *(float *)&v41 + 1.5707964;
                v74 = xmmword_140278D30;
                v75 = xmmword_140278D30;
                sub_14007B2A0((__int64)&v74, (float *)&v74 + 3, v41);
                v16 = (int)v34[683] <= 2;
                v42 = *(v34 - 2853);
                v34[682] = 1;
                if ( v16 )
                  v34[683] = v42;
                if ( v42 )
                {
                  if ( v42 == 1 )
                  {
                    v34[684] = 9;
                  }
                  else if ( v42 == 2 )
                  {
                    v34[684] = 8;
                  }
                }
                else
                {
                  v34[684] = 2;
                }
                v43 = sub_140053840(&v71, (float *)&v74, v33);
                *(v34 - 2847) = v43;
                *(v34 - 2797) = 0;
                *(v34 - 2860) = 0;
                dword_140404A6C[7166 * v43 + 280651341] = LODWORD(v41);
                sub_140051DC0(v33);
              }
            }
          }
          ++v33;
          v34 += 3597;
        }
        while ( v33 < 256 );
        v31 = g_183F7A5F8;
        v32 = g_183EBFCD4;
      }
      v44 = 1;
      v45 = (float *)&g_182BBB1DC;
      do
      {
        if ( *((_DWORD *)v45 - 23) && *((_DWORD *)v45 - 18) == 17 )
        {
          v46 = *v45;
          v47 = (float *)&g_183EBFD84;
          while ( 1 )
          {
            if ( v46 >= *(v47 - 3) && v46 < *v47 )
            {
              v48 = v45[1];
              if ( v48 >= *(v47 - 2) && v48 < v47[1] )
              {
                v49 = v45[2];
                if ( v49 >= *(v47 - 1) && v49 < v47[2] )
                  break;
              }
            }
            v47 += 5873;
            if ( (__int64)v47 >= (__int64)&g_183ECB50C )
            {
              v44 = 0;
              break;
            }
          }
        }
        v45 += 1760;
      }
      while ( (__int64)v45 < (__int64)&g_18329B1DC );
      if ( v44 )
      {
        v32 -= 5;
        g_183EBFCD4 = v32;
      }
      v50 = 0;
      v51 = &v74;
      for ( j = 0; j < 2; ++j )
      {
        v53 = 0;
        *(_DWORD *)v51 = 0;
        v54 = &g_151623978;
        do
        {
          if ( *(v54 - 2886) )
          {
            if ( !*v54 && *(v54 - 2853) == j )
            {
              v50 |= 1 << j;
              if ( *(v54 - 2847) != -1 )
                *(_DWORD *)v51 = ++v53;
            }
          }
          v54 += 3597;
        }
        while ( (__int64)v54 < (__int64)&g_1519A6D78 );
        v51 = (__int128 *)((char *)v51 + 4);
      }
      if ( v31 )
        goto LABEL_105;
      if ( (unsigned int)(v50 - 1) <= 1 && ((int)v74 > 0 || SDWORD1(v74) > 0) )
        v30 = 0;
      if ( v50 == 3 && (int)v74 > 0 && SDWORD1(v74) > 0 || !v30 || v32 <= 60 )
      {
LABEL_105:
        if ( v32 <= 0 )
        {
          sub_1400F5480();
          game_state = 3;
          g_183EBFCD4 = 720;
        }
      }
      else
      {
        g_183EBFCD4 = 60;
      }
      break;
    case 3u:
      if ( (int)--g_183EBFCD4 <= 0 )
      {
        v55 = 0;
        v56 = &g_151620CF0;
        v57 = (__int64)&g_1519A40F0;
        do
        {
          if ( *(v56 - 36) )
            *v56 = 0;
          if ( v56[3561] )
            v56[3597] = 0;
          v56 += 7194;
        }
        while ( (__int64)v56 < (__int64)&g_1519A40F0 );
        v58 = 0;
        v59 = &g_183EBFDC4;
        do
        {
          v60 = -1;
          v61 = &g_151620CE4;
          v62 = -1;
          v63 = 0;
          LODWORD(v64) = 0;
          v65 = 0;
          do
          {
            if ( *(v61 - 33) )
            {
              if ( *v61 == v58 )
              {
                v66 = (int)*(v61 - 18);
                if ( (_DWORD)v66 != -1 )
                {
                  v57 = 112 * v66;
                  v67 = dword_140404A6C[28 * v66 + 134050374];
                  if ( v63 < v67 )
                  {
                    v60 = v64;
                    v62 = v65;
                    v63 = v67;
                  }
                }
              }
            }
            v64 = (unsigned int)(v64 + 1);
            ++v65;
            v61 += 3597;
          }
          while ( (int)v64 < 256 );
          if ( v60 != -1 )
            dword_140404A6C[3597 * v62 + 71856289] = 1;
          if ( *v59 != v60 )
          {
            *v59 = v60;
            v59[5654] = 0;
          }
          ++v58;
          v59 += 5873;
        }
        while ( (__int64)v59 < (__int64)&g_183ECB54C );
        v68 = &g_151623978;
        do
        {
          if ( *(v68 - 2886) && !*v68 )
            sub_140117340(v55);
          ++v55;
          v68 += 3597;
        }
        while ( v55 < 256 );
        sr_ResetGame(v57, (__int64)v61, v64);
      }
      break;
  }
  return 0; /* no result: rax is residue at the exit */
}
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77

//----- (00000001400FA3A0) ----------------------------------------------------
__int64 sub_1400FA3A0()
{
  signed int v0;
  unsigned int *v1;
  __int64 v2;
  __int64 v3;
  signed int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int *v9;
  int v10;
  unsigned int *v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  int v16;
  unsigned int *v17;
  int v18;
  __int64 v19;
  int i;
  int v21;
  unsigned int *v22;
  int *v23;
  int j;
  unsigned int *v25;
  int k;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  unsigned int *v33;
  unsigned int *v34;
  int v35;
  unsigned int *v36;
  int v37;
  unsigned int *v38;
  unsigned int *v39;
  __int64 v40;
  unsigned int *v41;
  __int64 v42;
  int v43;
  int v44;
  unsigned int *v45;
  __int64 v46;
  __int64 v47;
  signed int v48;
  signed int v49;
  unsigned int *v50;
  signed int v51;
  signed int v52;
  unsigned int *v53;
  int v54;
  signed int v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  unsigned int *v61;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FA3A0[176];
#define v62 (*(float (*)[2])(void *)(sr_frame_1400FA3A0 + 0)) /* [rsp+20h] */
#define v63 (*(float (*))(void *)(sr_frame_1400FA3A0 + 8)) /* [rsp+28h] */
#define v64 (*(_OWORD (*)[2])(void *)(sr_frame_1400FA3A0 + 16)) /* [rsp+30h] */
#define v65 (*(int (*))(void *)(sr_frame_1400FA3A0 + 48)) /* [rsp+50h] */
#define v66 (*(unsigned int (*))(void *)(sr_frame_1400FA3A0 + 160)) /* [rsp+C0h] */
#define v67 (*(__int64 (*))(void *)(sr_frame_1400FA3A0 + 168)) /* [rsp+C8h] */

  v0 = game_day_time;
  v1 = &g_151620C60;
  v2 = 256;
  v66 = game_day_time;
  v67 = 256;
  do
  {
    if ( *v1 && v1[2886] )
    {
      v3 = (int)v1[39];
      if ( (_DWORD)v3 == -1 )
        *v1 = 0;
      v4 = v1[3513];
      if ( v4 && v0 > v4 )
      {
        if ( (_DWORD)v3 != -1 )
        {
          v5 = 7166 * v3;
          v6 = (int)dword_140404A6C[7166 * v3 + 280651313];
          if ( (_DWORD)v6 != -1 )
          {
            v7 = (int)dword_140404A6C[5210 * v6 + 129720183];
            if ( (_DWORD)v7 != -1 )
              *(_QWORD *)&dword_140404A6C[383 * v7 + 132400668] = 1;
          }
          v8 = 8;
          v9 = &dword_140404A6C[v5 + 280658140];
          do
          {
            v10 = *(v9 - 1);
            if ( v10 > 0 )
            {
              v11 = v9;
              v12 = (unsigned int)v10;
              do
              {
                v13 = (int)*v11;
                v14 = 1760 * v13;
                if ( (int)dword_140404A6C[1760 * v13 + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[v14 + 278845907] + 278845900] = 0;
                  sub_1400CA9B0(dword_140404A6C[v14 + 278845907], v13);
                }
                ++v11;
                dword_140404A6C[v14 + 278845900] = 0;
                --v12;
              }
              while ( v12 );
            }
            v9 += 10;
            --v8;
          }
          while ( v8 );
          v2 = v67;
          dword_140404A6C[v5 + 280651317] = 0;
          dword_140404A6C[v5 + 280651305] = -1;
          v0 = v66;
        }
        *v1 = 0;
      }
    }
    v1 += 3597;
    v67 = --v2;
  }
  while ( v2 );
  result = game_state;
  if ( game_state == 1 )
  {
    g_183EBFCD4 = g_183EBFCE0;
    game_state = 2;
    game_day_time = 1728000;
    g_16B2A2EC4 = 10;
    sub_140061950();
    sub_14012E960(g_183F7A5C0);
    v16 = 0;
    if ( (int)item_block_region_count > 0 )
    {
      v17 = &g_1760C5638;
      do
      {
        if ( *v17 == 4 )
          sub_140195480(v16, 0);
        ++v16;
        v17 += 14019;
      }
      while ( v16 < (int)item_block_region_count );
    }
    v0 = game_day_time;
    result = game_state;
    v62[0] = g_16B2A2EC8;
    v63 = *(float *)&g_16B2A2ED0;
    g_16D482320 = 0;
    g_16D48232C = 0;
    g_16D482334 = 0;
    g_16D482340 = 0;
    g_16D482348 = 0;
    g_16D482354 = 0;
    g_16D48235C = 0;
    g_16D482368 = 0;
    g_16D482370 = 0;
    g_16D48237C = 0;
    g_16D482384 = 0;
    g_16D482390 = 0;
  }
  if ( (_DWORD)result == 2 )
  {
    v18 = g_16B2A2EC4 + v0;
    game_day_time = v18;
    if ( v18 == 1728060 )
    {
      crt_memset((void *)(uintptr_t)(&g_1B4037440), 0, 0x800u);
      v19 = 7;
      g_16B2AAF18 = rand() % 7;
      do
      {
        sub_140194D40();
        --v19;
      }
      while ( v19 );
      sub_140195970();
      v18 = game_day_time;
    }
    if ( v18 == 54000 * (v18 / 54000) && v18 < 3672000 )
    {
      for ( i = 0; i < 6; ++i )
        sub_1401949C0(i);
      v21 = 0;
      v22 = &g_16D48232C;
      v23 = (int *)&g_183EBFDB4;
      do
      {
        if ( *v23 > 0 )
        {
          if ( (int)*v22 <= 0 )
            sub_14012EB50(v21);
          else
            --*v22;
        }
        ++v21;
        v23 += 5873;
        v22 += 5;
      }
      while ( v21 < 6 );
      v18 = game_day_time;
    }
    if ( v18 < 4104000 )
    {
      v31 = 0;
      if ( (int)item_block_region_count > 0 )
      {
        v32 = 0;
        v33 = &g_1760D202C;
        do
        {
          if ( *(v33 - 12925) == 9 )
          {
            *(_QWORD *)v33 = 0;
            dword_140404A6C[3 * v32 + 225654130] = 20;
            ++*v33;
          }
          ++v31;
          v32 += 4673;
          v33 += 14019;
        }
        while ( v31 < (int)item_block_region_count );
      }
      v34 = &g_183EBFF40;
      v35 = 0;
      v36 = &g_19021F0CC;
      do
      {
        v37 = 0;
        v38 = v34;
        *v36 = (int)(float)(*((float *)v36 - 2) * 10.0);
        do
        {
          if ( *(v38 - 17) )
          {
            if ( !*(v38 - 16) && v18 == *v38 )
            {
              sub_1401300C0(*(v38 - 15));
              if ( !*(v38 - 16) )
              {
                sub_1400F50D0(v35, v37, 0, 0);
                v18 = game_day_time;
              }
            }
          }
          ++v37;
          v38 += 279;
        }
        while ( v37 < 16 );
        ++v35;
        v36 += 6;
        v34 += 5873;
      }
      while ( v35 < 6 );
      v39 = &g_151620C9C;
      v40 = 256;
      if ( v18 == 18000 * (v18 / 18000) )
      {
        v41 = &g_18329E328;
        v42 = 256;
        do
        {
          if ( *(v41 - 8) )
          {
            v43 = *(v41 - 3);
            if ( v43 > 0 )
              *(v41 - 3) = v43 - 1;
            if ( (int)*v41 > 7 )
            {
              v44 = *v41 - 1;
              *v41 = v44;
              if ( v44 > 7 )
                *v41 = v44 - 1;
            }
          }
          v41 += 7166;
          --v42;
        }
        while ( v42 );
        sub_14008C030();
        sub_14008C310();
        sub_14012C480();
        v45 = &g_151620C9C;
        v46 = 256;
        do
        {
          if ( *(v45 - 15) )
          {
            v47 = (int)*v45;
            if ( (_DWORD)v47 != -1 )
              dword_140404A6C[28 * v47 + 134050378] += 5;
          }
          v45 += 3597;
          --v46;
        }
        while ( v46 );
        v48 = g_160361344;
        v49 = 0;
        if ( (int)g_160361344 > 0 )
        {
          v50 = &g_160361380;
          do
          {
            if ( (int)*v50 > 0 )
            {
              --*v50;
              v48 = g_160361344;
            }
            ++v49;
            v50 += 28;
          }
          while ( v49 < v48 );
        }
        sub_140132B00();
        sub_140052090();
        v18 = game_day_time;
      }
      if ( v18 == 54000 * (v18 / 54000) )
      {
        v51 = g_160361344;
        v52 = 0;
        if ( (int)g_160361344 > 0 )
        {
          v53 = &g_16036138C;
          do
          {
            if ( (int)*v53 > 0 )
            {
              v54 = *v53 - 16;
              if ( v54 < 0 )
                v54 = 0;
              *v53 = v54;
              v51 = g_160361344;
            }
            ++v52;
            v53 += 28;
          }
          while ( v52 < v51 );
        }
        v55 = g_183F7A5DC;
        g_16D482330 = 0;
        g_16D482344 = 0;
        g_16D482358 = 0;
        g_16D48236C = 0;
        g_16D482380 = 0;
        g_16D482394 = 0;
        g_16D4823A8 = 0;
        g_16D4823BC = 0;
        g_16D4823D0 = 0;
        g_16D4823E4 = 0;
        g_16D4823F8 = 0;
        g_16D48240C = 0;
        g_16D482420 = 0;
        g_16D482434 = 0;
        g_16D482448 = 0;
        g_16D48245C = 0;
        g_16D482470 = 0;
        g_16D482484 = 0;
        g_16D482498 = 0;
        g_16D4824AC = 0;
        g_16D4824C0 = 0;
        g_16D4824D4 = 0;
        g_16D4824E8 = 0;
        g_16D4824FC = 0;
        g_16D482510 = 0;
        g_16D482524 = 0;
        g_16D482538 = 0;
        g_16D48254C = 0;
        g_16D482560 = 0;
        g_16D482574 = 0;
        g_16D482588 = 0;
        g_16D48259C = 0;
        g_16D4825B0 = 0;
        g_16D4825C4 = 0;
        g_16D4825D8 = 0;
        g_16D4825EC = 0;
        g_16D482600 = 0;
        g_16D482614 = 0;
        g_16D482628 = 0;
        g_16D48263C = 0;
        g_16D482650 = 0;
        g_16D482664 = 0;
        g_16D482678 = 0;
        g_16D48268C = 0;
        g_16D4826A0 = 0;
        g_16D4826B4 = 0;
        g_16D4826C8 = 0;
        g_16D4826DC = 0;
        g_16D4826F0 = 0;
        g_16D482704 = 0;
        g_16D482718 = 0;
        g_16D48272C = 0;
        g_16D482740 = 0;
        g_16D482754 = 0;
        g_16D482768 = 0;
        g_16D48277C = 0;
        g_16D482790 = 0;
        g_16D4827A4 = 0;
        g_16D4827B8 = 0;
        g_16D4827CC = 0;
        g_16D4827E0 = 0;
        g_16D4827F4 = 0;
        g_16D482808 = 0;
        g_16D48281C = 0;
        do
        {
          v56 = v39[8];
          if ( v56 > 0 && v39[24] != -1 )
          {
            v57 = (int)*v39;
            if ( (_DWORD)v57 != -1 )
              dword_140404A6C[28 * v57 + 134050376] += 8;
          }
          v58 = v39[12];
          v39[11] = 0;
          if ( v58 > 0 )
            v39[12] = v58 - 1;
          v39[13] = 0;
          if ( v56 > 0 )
            v39[8] = --v56;
          if ( v56 >= v55 )
          {
            v39[11] = 100;
            v39[12] = 4;
          }
          v39 += 3597;
          --v40;
        }
        while ( v40 );
      }
      if ( (int)world_item_29_count < 8 )
      {
        do
        {
          v62[1] = g_16B2A2ECC;
          v64[0] = xmmword_140278D30;
          v65 = 1065353216;
          v63 = *(float *)&g_16B2A2ED0 + 1.0;
          v62[0] = g_16B2A2EC8 + -4.0;
          v64[1] = xmmword_140278D30;
          v59 = sr_CreateItem(29, v62, nullptr, (float *)v64);
          if ( v59 == -1 )
          {
            v60 = world_item_29_count;
          }
          else
          {
            sub_1400584B0(v59, (     __m128i *)&g_183E93124);
            v60 = ++world_item_29_count;
          }
        }
        while ( v60 < 8 );
      }
      result = (__int64)&g_151623978;
      do
      {
        if ( *(_DWORD *)(result - 11544) && !*(_DWORD *)result && *(_DWORD *)(result - 11388) == -1 )
          *(_DWORD *)(result - 11188) = 1;
        result += 14388;
      }
      while ( result < (__int64)&g_1519A6D78 );
      v61 = &g_183EBFF0C;
      do
      {
        if ( *(v61 - 4) )
        {
          result = (int)*v61;
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[275] )
        {
          result = (int)v61[279];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[554] )
        {
          result = (int)v61[558];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[833] )
        {
          result = (int)v61[837];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1112] )
        {
          result = (int)v61[1116];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1391] )
        {
          result = (int)v61[1395];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1670] )
        {
          result = (int)v61[1674];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1949] )
        {
          result = (int)v61[1953];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2228] )
        {
          result = (int)v61[2232];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2507] )
        {
          result = (int)v61[2511];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2786] )
        {
          result = (int)v61[2790];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3065] )
        {
          result = (int)v61[3069];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3344] )
        {
          result = (int)v61[3348];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3623] )
        {
          result = (int)v61[3627];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3902] )
        {
          result = (int)v61[3906];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[4181] )
        {
          result = (int)v61[4185];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        v61 += 5873;
      }
      while ( (__int64)v61 < (__int64)&g_183EE25A4 );
    }
    else
    {
      for ( j = 0; j < 6; ++j )
        sub_140194C10(j);
      g_16B2A2EE0 = 0;
      v25 = &g_151624484;
      for ( k = 0; k < 256; ++k )
      {
        if ( *(v25 - 3593) )
        {
          sub_140117340(k);
          v27 = (int)*(v25 - 3554);
          if ( (_DWORD)v27 == -1 )
          {
            *(v25 - 3) = 0;
          }
          else
          {
            *(v25 - 3) = 1;
            *(v25 - 2) = dword_140404A6C[7166 * v27 + 280651440];
            *(v25 - 1) = dword_140404A6C[7166 * v27 + 280651441];
            *v25 = dword_140404A6C[7166 * v27 + 280651442];
            v25[1] = dword_140404A6C[7166 * v27 + 280651490];
            v25[2] = dword_140404A6C[7166 * v27 + 280651313];
            v25[3] = dword_140404A6C[7166 * v27 + 280651314];
          }
        }
        v25 += 3597;
      }
      sub_14012C480();
      return sr_ResetGame(v29, v28, v30);
    }
  }
  return result;
}
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67

//----- (00000001400FB0A0) ----------------------------------------------------
__int64 sub_1400FB0A0()
{
  unsigned int v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  char v13;
  signed int i;
  int v15;
  __int64 v16;
  char v17;
  void **v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FB0A0[688];
#define v20 (*(_DWORD (*)[20])(void *)(sr_frame_1400FB0A0 + 0)) /* [rsp+0h] */
#define v21 (*(_DWORD (*)[16])(void *)(sr_frame_1400FB0A0 + 96)) /* [rsp+60h] */
#define v22 (*(_BYTE (*)[512])(void *)(sr_frame_1400FB0A0 + 160)) /* [rsp+A0h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_1400FB0A0 + 672)) /* [rsp+2A0h] */

  sub_140198FA7();
  g_16B097ED4 = 39;
  v0 = sub_140237448(nullptr);
  srand(v0);
  *(_QWORD *)&g_183F7C2F8 = 0;
  glClearColor(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f) /* native XMM0-3 */;
  glClear(16640);
  sub_14007BB00();
  sr_text_draw_recovered("generating", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FB184 */;
  sub_140198EF3();
  sub_140075650();
  *(_OWORD *)&menu_item_width = xmmword_140279780;
  sub_140139E90(v6, v5, 0.0 /* unused native input */);
  g_175FD13A0 = xmmword_140279810;
  g_175FD13E4 = 1061158912;
  g_175FD13E0 = 1115684864;
  g_175FD13B0 = xmmword_140279710;
  g_175FD13C0 = xmmword_140279490;
  g_175FD13D0 = xmmword_140279490;
  sub_14007B2A0((__int64)&g_175FD13BC, (float *)&g_175FD13BC, sr_export_float_lane_container(1070141403));
  g_16E486868 = 3;
  g_16E48686C = 3;
  g_16E486848 = -1;
  g_16E486864 = -1;
  sub_14013CDF0();
  glClearColor(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f) /* native XMM0-3 */;
  glClear(16640);
  sub_14007BB00();
  v20[16] = 1065353216;
  v20[14] = 1065353216;
  v20[12] = 1065353216;
  v20[10] = 1065353216;
  v20[8] = 1;
  sr_text_draw_recovered("connecting", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FB2CD */;
  sub_140198EF3();
  if ( !(unsigned int)sr_ConnectMasterServer() )
  {
    v11 = inet_addr_sr("66.226.72.227");
    g_18329C1E0 = ntohl_sr(v11);
    LOWORD(g_18329C1E4) = 27592;
  }
  sub_1400E5F10();
  if ( (unsigned int)sub_140198AF0((__int64)v22) )
  {
    v22[63] = 0;
    v12 = 0;
    do
    {
      v13 = v22[v12];
      *((_BYTE *)(unsigned int *)&g_151E4594C + v12++) = v13;
    }
    while ( v13 );
    HIBYTE(g_151E45968) = 0;
  }
  g_1829F8BC0 = sub_140198A50((unsigned int *)&g_1829F8BC8);
  g_1829F8FDC = sub_1401988C0(4u);
  for ( i = 0; i < (int)g_1829F8FDC; ++i )
    sub_140198820(
      (__int64 *)&dword_140404A6C[132LL * i + 278384989],
      (__int64)&dword_140404A6C[132 * i + 278384992],
      i,
      4u);
  g_1602E12E0 = 0;
  crt_chdir(&g_182A7D340);
  crt_sprintf(v21, "client2.csk");
  crt_chdir(&g_182A7D140);
  sub_14008EAD0(1);
  g_18539D3A0 = 1;
  v15 = sub_140198F9B();
  game_type = 0;
  g_16B165F44 = v15 - 1000;
  v16 = 0;
  g_183EBFCE0 = 25200;
  do
  {
    v17 = *((_BYTE *)&g_151E45B4C + v16);
    *((_BYTE *)(unsigned int *)&g_1AD04ADD4 + v16++) = v17;
  }
  while ( v17 );
  g_1AD04B1F4 = 1;
  game_connected = 1;
  *(_QWORD *)&g_151E4614C = 0;
  sr_ClientMain();
  closesocket_sr((int)g_18539D3C8);
  g_18539D3A8 = 0;
  sub_1401E0F20(*(void **)&g_187BDE460);
  v18 = (void **)&g_187BDE660;
  do
    sub_1401E2C30(*v18++);
  while ( (__int64)v18 < (__int64)&g_187BDE6A0 );
  return 0; /* the function has no caller */
}
#undef v20
#undef v21
#undef v22
#undef v23

//----- (00000001400FB4D0) ----------------------------------------------------
__int64 sub_1400FB4D0()
{
  unsigned int *v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FB4D0[96];
#define v7 (*(__int64 (*))(void *)(sr_frame_1400FB4D0 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[4])(void *)(sr_frame_1400FB4D0 + 64)) /* [rsp+40h] */
#define v9 (*(_WORD (*)[2])(void *)(sr_frame_1400FB4D0 + 68)) /* [rsp+44h] */
#define FileName (*(char (*)[13])(void *)(sr_frame_1400FB4D0 + 72)) /* [rsp+48h] */
#define v11 (*(__int16 (*))(void *)(sr_frame_1400FB4D0 + 85)) /* [rsp+55h] */
#define v12 (*(char (*))(void *)(sr_frame_1400FB4D0 + 87)) /* [rsp+57h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1400FB4D0 + 88)) /* [rsp+58h] */

  v11 = 0;
  v12 = 0;
  strcpy(FileName, "scsht000.tga");
  glReadBuffer(1029);
  v0 = &g_1839A3100;
  glReadPixels(0, 0, 512, 512, 6408, 5121, &g_1839A3100);
  v1 = crt_fopen(FileName, "wb");
  v2 = v1;
  if ( v1 )
  {
    v8[0] = 0;
    crt_fread((__int64)v8, 1, 1, v1);
    v8[0] = 0;
    crt_fread((__int64)v8, 1, 1, v2);
    v8[0] = 2;
    crt_fread((__int64)v8, 1, 1, v2);
    v9[0] = 0;
    crt_fread((__int64)v9, 2, 1, v2);
    v9[0] = 0;
    crt_fread((__int64)v9, 2, 1, v2);
    v8[0] = 0;
    crt_fread((__int64)v8, 1, 1, v2);
    v9[0] = 0;
    crt_fread((__int64)v9, 2, 1, v2);
    v9[0] = 0;
    crt_fread((__int64)v9, 2, 1, v2);
    v9[0] = 512;
    crt_fread((__int64)v9, 2, 1, v2);
    v9[0] = 512;
    crt_fread((__int64)v9, 2, 1, v2);
    v8[0] = 24;
    crt_fread((__int64)v8, 1, 1, v2);
    v8[0] = 0;
    crt_fread((__int64)v8, 1, 1, v2);
    v3 = 512;
    do
    {
      v4 = 512;
      do
      {
        v5 = *v0;
        sub_14020BCA8(BYTE2(*v0), v2);
        sub_14020BCA8(SBYTE1(v5), v2);
        sub_14020BCA8(v5, v2);
        ++v0;
        --v4;
      }
      while ( v4 );
      --v3;
    }
    while ( v3 );
    crt_fclose(v2);
  }
  return 0; /* the function has no caller */
}
#undef v7
#undef v8
#undef v9
#undef FileName
#undef v11
#undef v12
#undef v13

//----- (00000001400FB870) ----------------------------------------------------
__int64 sub_1400FB870()
{
  int v0;
  unsigned int v1;
  __int64 result;

  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1128267776;
  menu_item_height = 1103101952;
  g_150F610F4 = 41;
  v0 = sr_DrawMenuButton("Back");
  v1 = g_183EBFAA4;
  if ( v0 )
    v1 = 0;
  g_183EBFAA4 = v1;
  *(unsigned int *)&menu_x = 1107296256;
  menu_y = menu_y + 64.0;
  sr_DrawMenuButtonSelectable("Female", (int *)&g_151E461E8, 0);
  sr_DrawMenuButtonSelectable("Male", (int *)&g_151E461E8, 1);
  sr_DrawMenuSlider("Head", (int *)&g_151E461EC, 0, 4, 1);
  sr_DrawMenuSlider("Eyes", (int *)&g_151E461FC, 0, 7, 1);
  sr_DrawMenuSlider("Hair", (int *)&g_151E461F8, 0, 8, 1);
  sr_DrawMenuSlider("Hair Color", (int *)&g_151E461F4, 0, 11, 1);
  sr_DrawMenuSlider("Skin", (int *)&g_151E461F0, 0, 5, 1);
  result = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    result = (int)result - 1;
    menu_item_width = dword_140404A6C[2 * (int)result + 70317963];
    menu_item_height = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

//----- (00000001400FC480) ----------------------------------------------------
__int64 sub_1400FC480()
{
  int v0;
  unsigned int v1;
  __int64 result;
  unsigned int v3;
  char v4;
  signed int v5;
  __int128 v6;
  signed int v7;
  __int128 v8;
  signed int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  char v15;
  int v16;
  signed int v17;
  __int128 v18;
  __int128 v19;
  int v20;

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  v0 = sr_DrawMenuButton("Cancel");
  v1 = g_183EBFAA4;
  if ( v0 )
    v1 = 1;
  g_183EBFAA4 = v1;
  if ( !g_16B15FF3C )
  {
    *(unsigned int *)&menu_x = 1138229248;
    *(unsigned int *)&menu_y = 1131413504;
    menu_item_width = 1126170624;
    menu_item_height = 1101004800;
    g_150F61100 = 1;
    sub_140070200("Password", (__int64)(unsigned int *)&g_16B15FF40, 0x18u);
    menu_y = menu_y + 16.0;
    result = sr_DrawMenuButton("Connect");
    if ( (_DWORD)result )
      g_16B15FF3C = 1;
    return result;
  }
  if ( (unsigned int)sub_140198F9B() - g_16B15FF24 <= 0xC8 )
  {
    v4 = v20;
  }
  else
  {
    g_16B15FF24 = sub_140198F9B();
    v3 = g_16B15FF3C;
    if ( g_16B15FF3C == 1 )
    {
      v4 = 75;
      packet_out_data = dword_1402B2658;
      *(unsigned int *)((char *)&g_18539D408 + 1) = g_1603612E4;
      *(unsigned int *)((char *)&g_18539D40C + 1) = g_1603612F4;
      *(unsigned int *)((char *)&g_18539D410 + 1) = g_1AD04B1E8;
      *(_WORD *)((char *)&g_18539D414 + 1) = g_1AD04B1EC;
      *(_QWORD *)&packet_out_byte = 19;
      LOBYTE(g_18539D408) = 75;
      sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      v3 = g_16B15FF3C;
    }
    else
    {
      v4 = v20;
    }
    if ( v3 == 2 )
    {
      v4 = 2;
      *(_QWORD *)&packet_out_byte = 5;
      LOBYTE(g_18539D408) = 2;
      packet_out_data = dword_1402B2658;
      sub_140115D90(&dword_1402B231C, 8);
      v5 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v5 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + v5) = g_1603612E4;
        v5 = packet_out_byte + 4;
        packet_out_byte = v5;
        if ( v5 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v5;
            packet_out_bit = 0;
            packet_out_byte = v5;
          }
          *(unsigned int *)((char *)&packet_out_data + v5) = g_1603612F8;
          v5 = packet_out_byte + 4;
          packet_out_byte = v5;
          if ( v5 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++v5;
              packet_out_bit = 0;
              packet_out_byte = v5;
            }
            v6 = g_151E4595C;
            *(_OWORD *)((char *)&packet_out_data + v5) = g_151E4594C;
            *(_OWORD *)((char *)&g_18539D414 + v5) = v6;
            v5 = packet_out_byte + 32;
            packet_out_byte += 32;
          }
        }
      }
      if ( v5 < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++v5;
          packet_out_bit = 0;
          packet_out_byte = v5;
        }
        *(unsigned int *)((char *)&packet_out_data + v5) = g_151E461E8
                                                                    + 2
                                                                    * (g_151E461EC
                                                                     + 16
                                                                     * (g_151E461F0
                                                                      + 8
                                                                      * (g_151E461F4
                                                                       + 16
                                                                       * (g_151E461F8
                                                                        + 16 * g_151E461FC))));
        v7 = packet_out_byte + 4;
        packet_out_byte = v7;
        if ( v7 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v7;
            packet_out_bit = 0;
            packet_out_byte = v7;
          }
          v8 = g_16B15FF50;
          *(_OWORD *)((char *)&packet_out_data + v7) = g_16B15FF40;
          *(_OWORD *)((char *)&g_18539D414 + v7) = v8;
          packet_out_byte += 32;
        }
      }
      sub_140115D90(&dword_1402B26C8, 8);
      v9 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v9 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + v9) = g_1603612F0;
        packet_out_byte += 4;
      }
      sub_140130350(g_1AD04B1D4, g_1AD04B1D8, *(__int64 *)&g_1AD04B1E0);
    }
  }
  result = sub_14011C760();
  if ( (int)result > 0 )
  {
    v10 = v20;
    do
    {
      v11 = packet_in_byte;
      if ( (int)packet_in_byte >= 0x10000
        || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
      {
        v12 = packet_in_bit;
      }
      else
      {
        v12 = packet_in_bit;
        if ( (int)packet_in_bit > 0 )
        {
          v11 = ++packet_in_byte;
          v12 = 0;
          packet_in_bit = 0;
        }
        v13 = v11++;
        v4 = *((_BYTE *)&packet_in_data + v13);
        packet_in_byte = v11;
      }
      switch ( v4 )
      {
        case 75:
          if ( v11 < 0x10000 && v11 + 4 <= (int)packet_in_length )
          {
            if ( v12 > 0 )
            {
              ++v11;
              packet_in_bit = 0;
              packet_in_byte = v11;
            }
            g_1603612F8 = *(unsigned int *)((char *)&packet_in_data + v11);
            packet_in_byte = v11 + 4;
          }
          g_16B15FF3C = 2;
          break;
        case 6:
          if ( v11 < 0x10000 && v11 + 4 <= (int)packet_in_length )
          {
            if ( v12 > 0 )
            {
              ++v11;
              packet_in_bit = 0;
              packet_in_byte = v11;
            }
            game_unknown_1a4d2dce4 = *(unsigned int *)((char *)&packet_in_data + v11);
            packet_in_byte = v11 + 4;
          }
          sub_140115AE0(&game_type, 4);
          sub_140115AE0(&g_183EBFCB0, 4);
          sub_140115AE0(&g_183EBFCC4, 8);
          v17 = packet_in_byte;
          if ( (int)packet_in_byte < 0x10000
            && (signed int)(packet_in_byte + 32) <= (int)packet_in_length )
          {
            if ( (int)packet_in_bit > 0 )
            {
              v17 = packet_in_byte + 1;
              packet_in_bit = 0;
              ++packet_in_byte;
            }
            v18 = *(_OWORD *)((char *)&packet_in_data + v17);
            v19 = *(_OWORD *)((char *)&g_1853AD434 + v17);
            packet_in_byte = v17 + 32;
            g_183EBFAB0 = v18;
            g_183EBFAC0 = v19;
          }
          sub_14018D440((float *)(unsigned int *)&game_sun_angle, 16);
          sub_14018D440((float *)(unsigned int *)&game_unknown_183ebfd58, 16);
          if ( game_type == 7 )
            sub_140115AE0(&g_183F7A604, 8);
          g_16B15FF3C = 3;
          g_183EBFAA4 = 0;
          return sub_140095B00();
        case 3:
          v14 = 6;
          if ( v11 < 0x10000 )
          {
            if ( v11 <= (int)packet_in_length )
            {
              v10 = 0;
              v15 = 0;
              while ( 1 )
              {
                v16 = 8 - v12;
                v10 |= (~(-1 << v14)
                      & (*((unsigned __int8 *)&packet_in_data + v11) >> SLOBYTE(packet_in_bit))) << v15;
                if ( v14 < (unsigned int)(8 - v12) )
                  break;
                v12 = 0;
                packet_in_bit = 0;
                if ( v14 == v16 )
                {
                  packet_in_byte = ++v11;
                  goto LABEL_60;
                }
                ++v11;
                v14 -= v16;
                v15 += v16;
                packet_in_byte = v11;
                if ( v14 <= 0 )
                  goto LABEL_60;
              }
              v12 += v14;
              packet_in_bit = v12;
            }
LABEL_60:
            if ( v11 < 0x10000 && v11 + v10 <= (int)packet_in_length )
            {
              if ( v12 > 0 )
              {
                ++v11;
                packet_in_bit = 0;
                packet_in_byte = v11;
              }
              crt_memcpy(
                (__m128i *)&g_16B160340,
                (     __m128i *)((char *)&packet_in_data + v11),
                v10);
              packet_in_byte = v10 + v11;
            }
          }
          *((_BYTE *)&g_16B160340 + v10) = 0;
          g_16B15FF3C = 4;
          break;
      }
      result = sub_14011C760();
    }
    while ( (int)result > 0 );
  }
  return result;
}

//----- (00000001400FCB50) ----------------------------------------------------
void sub_1400FCB50()
{
  unsigned int v0;

  v0 = g_16B15FF3C;
  if ( g_16B15FF3C - 1 <= 1 )
  {
    sr_text_draw_recovered("Connecting", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FCBBC */;
    v0 = g_16B15FF3C;
  }
  if ( v0 == 4 )
    sr_text_draw_recovered((char *)&g_16B160340, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FCC19 */;
}

//----- (00000001400FCC30) ----------------------------------------------------
__int64 sub_1400FCC30()
{
  __int64 result;
  unsigned int v1;

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  result = sr_DrawMenuButton("Back");
  v1 = g_183EBFAA4;
  if ( (_DWORD)result )
    v1 = 0;
  g_183EBFAA4 = v1;
  return result;
}

//----- (00000001400FCC90) ----------------------------------------------------
void sub_1400FCC90()
{
  sr_text_draw_recovered("Design//Programming",16.0f,64.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Alex Austin",16.0f,96.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Art",16.0f,144.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Sofia da Silva",16.0f,176.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Design//Art",16.0f,224.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Brendon Chung",16.0f,256.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Luke Hetherington",16.0f,272.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Production",16.0f,320.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Justin Woodward",16.0f,352.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Community Manager",16.0f,400.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("W1nters",16.0f,432.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
}

//----- (00000001400FDD80) ----------------------------------------------------
void sub_1400FDD80()
{
  sr_CSDrawText("Name", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))), 20.0);
  sr_text_draw_recovered("Ping", 480.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDE3F */;
  sr_text_draw_recovered("Players", 560.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDE8B */;
  sr_text_draw_recovered("Game Type", 672.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDED7 */;
  sr_text_draw_recovered("Version", 784.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDF23 */;
  sr_text_draw_recovered("Password", 878.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDF6F */;
  sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B0A7EE4}) /* 0x1400FDFD3 */;
  sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43CE0000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B15FF2C}) /* 0x1400FE02F */;
}

//----- (00000001400FE050) ----------------------------------------------------
__int64 sub_1400FE050()
{
  struct hostent *v0;
  struct hostent *v1;
  _QWORD *v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FE050[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400FE050 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400FE050 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1400FE050 + 544)) /* [rsp+220h] */

  game_connected = 0;
  crt_memset((void *)(uintptr_t)(&game_unknown_1a4d2dce0), 0, 0x2270864u);
  game_unknown_183ebfcc8 = -1;
  g_16B15FF24 = sub_140198F9B();
  g_16B15FF00 = 0;
  g_16B0A7EE4 = 0;
  g_16B0A7EE0 = 0;
  if ( sub_140199037(name, 512) != -1 )
  {
    v0 = sub_140199031(name);
    v1 = v0;
    if ( v0 )
    {
      v2 = *((_QWORD **)v0 + 3);
      v3 = g_16B0A7EE4;
      if ( *v2 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= 16 )
            break;
          v5 = ntohl_sr(*(unsigned int *)v2[v4]);
          v6 = (int)g_16B0A7EE4;
          ++v4;
          dword_140404A6C[2 * g_16B0A7EE4 + 179457309] = v5 | 0xFF;
          LOWORD(dword_140404A6C[2 * v6 + 179457310]) = g_18539D3F8;
          v3 = v6 + 1;
          g_16B0A7EE4 = v3;
          v2 = *((_QWORD **)v1 + 3);
        }
        while ( v2[v4] );
      }
      g_16B0A7EE0 = v3;
    }
  }
  g_16B15FF2C = 0;
  g_16B15FF30 = -1;
  g_16B15FF38 = 0;
  g_16B15FF28 = 0;
  return 0; /* the function has no caller */
}
#undef v8
#undef name
#undef v10

//----- (00000001400FE5D0) ----------------------------------------------------
void sub_1400FE5D0()
{
  sr_text_draw_recovered("Sub Rosa", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 16.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE62E */;
  sr_text_draw_recovered("ALPHA /i/c", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43300000u))))), 16.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE697 */;
  sr_text_draw_recovered((char *)off_1402B2810, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43400000u))))), 14.0, 65u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE6E9 */;
  if ( g_1829F8BC0 )
    sr_text_draw_recovered("Steam", 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE745 */;
}

//----- (00000001400FE870) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sub_1400FE870(__int64 a1, int a2, double a3, double a4, float a5, float a6, char a7)
{
  double v7 = a3; // xmm2_8: x arrives in xmm2 (0x1400FE8C0 movaps xmm12, xmm2); Hex-Rays had lost it
  __m128i v8;
  __int64 v9;
  __int64 v10;
  __m128i v11;
  int v12;
  __int64 v13;
  float v14;
  float v15;
  unsigned int v16;
  __m128i v17;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FE870[608];
#define v19 (*(__int64 (*))(void *)(sr_frame_1400FE870 + 0)) /* [rsp+0h] */
#define v20 (*(int (*))(void *)(sr_frame_1400FE870 + 32)) /* [rsp+20h] */
#define v21 (*(int (*))(void *)(sr_frame_1400FE870 + 40)) /* [rsp+28h] */
#define v22 (*(int (*))(void *)(sr_frame_1400FE870 + 48)) /* [rsp+30h] */
#define v23 (*(int (*))(void *)(sr_frame_1400FE870 + 56)) /* [rsp+38h] */
#define v24 (*(int (*))(void *)(sr_frame_1400FE870 + 64)) /* [rsp+40h] */
#define v25 (*(char (*)[512])(void *)(sr_frame_1400FE870 + 80)) /* [rsp+50h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400FE870 + 592)) /* [rsp+250h] */

  v8 = *(__m128i_u *)&a4;
  v9 = a2;
  /* 0x1400FE908: width a5 ([rsp+2F0h], 0x1400FE8D0), not the third argument */
  sub_14006D660(v7, a4, sr_text_float_bits(a5), a6, 0, 1061158912, 1061158912, 1061158912, 1065353216);
  v11 = *(__m128i_u *)&a4;
  *(float *)SR_VEC_LANES(128, v11, i32) = *(float *)&a4 + 2.0;
  if ( (a7 & 1) != 0 )
    v12 = 1056964608;
  else
    v12 = 1048576000;
  /* 0x1400FE97E: x + 2 (0x1400FE932), width - 4 (0x1400FE919); the C had passed x and an undefined width */
  sub_14006D660(
    sr_export_float_lane_container(sr_text_float_bits(*(float *)&v7 + 2.0f)),
    *(double *)SR_VEC_LANES(128, v11, i64),
    sr_text_float_bits(a5 - 4.0f),
    a6 - 4.0,
    0,
    v12,
    v12,
    v12,
    1065353216);
  v13 = (int)dword_140404A6C[v9 + 280649319];
  v14 = 16.0;
  if ( !dword_140404A6C[3597 * v13 + 71856270] || dword_140404A6C[v13 + 284023074] )
    v14 = 12.0;
  v24 = 1065353216;
  v23 = 1065353216;
  v22 = 1065353216;
  v15 = (float)(a5 * 0.5) + *(float *)&v7;
  v21 = 1065353216;
  v20 = 1;
  sr_text_draw_recovered((char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 14388 * v13 + 291638372), v15, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v11))), v14, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FEA10 */;
  v16 = dword_140404A6C[3597 * dword_140404A6C[v9 + 280649319] + 71856265];
  crt_sprintf(v25, "%03d-%04d", v16 / 0x2710, v16 % 0x2710);
  v24 = 1065353216;
  v17 = v8;
  *(float *)SR_VEC_LANES(128, v17, i32) = *(float *)SR_VEC_LANES(128, v8, i32) + 18.0;
  v23 = 1065353216;
  v22 = 1065353216;
  v21 = 1065353216;
  v20 = 1;
  sr_text_draw_recovered(v25, v15, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 12.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FEA9E */;
  if ( dword_140404A6C[dword_140404A6C[v9 + 280649319] + 284023074] )
  {
    *(float *)SR_VEC_LANES(128, v8, i32) = *(float *)SR_VEC_LANES(128, v8, i32) + 30.0;
    v24 = 1065353216;
    v23 = 1065353216;
    v22 = 1065353216;
    v21 = 1065353216;
    v20 = 1;
    sr_text_draw_recovered("MUTED", v15, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v8))), 16.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FEAFD */;
  }
  return 0; /* no result: rax is residue at 0x1400FEB02 */
}
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

//----- (00000001400FF3C0) ----------------------------------------------------
double            sub_1400FF3C0(__int64 a1, int a2)
{
  int v4;
  __int64 v5;
  unsigned int *v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;

  mesh_vertex_count = *(_DWORD *)a1;
  v4 = 0;
  if ( *(int *)a1 > 0 )
  {
    v5 = 0;
    v6 = (unsigned int *)&g_16A7DBDB0;
    do
    {
      v7 = *(_QWORD *)(a1 + 8);
      v5 += 16;
      ++v4;
      v6 += 3;
      *(v6 - 5) = *(_DWORD *)(v5 + v7 - 16);
      *(v6 - 4) = *(_DWORD *)(v5 + v7 - 12);
      *(v6 - 3) = *(_DWORD *)(v5 + v7 - 8);
    }
    while ( v4 < *(_DWORD *)a1 );
  }
  v8 = 0;
  v9 = 0;
  mesh_triangle_count = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v10 = 0;
    do
    {
      dword_140404A6C[3 * v8 + 177495248] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 8);
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 12);
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 16);
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
      v8 = ++mesh_triangle_count;
      v11 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(v10 + v11 + 4) == 4 )
      {
        dword_140404A6C[3 * v8 + 177495248] = *(_DWORD *)(v10 + v11 + 8);
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 16);
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 24) + 20);
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        v8 = ++mesh_triangle_count;
      }
      ++v9;
      v10 += 36;
    }
    while ( v9 < *(_DWORD *)(a1 + 16) );
  }
  return sub_1401449C0(a2, 1);
}

//----- (00000001400FF660) ----------------------------------------------------
double            sub_1400FF660(__int64 a1, int a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  signed __int64 v7;
  signed __int64 v8;
  signed __int64 v9;
  signed __int64 v10;
  signed __int64 v11;
  signed __int64 v12;
  signed __int64 v13;
  signed __int64 v14;
  _DWORD *v15;
  char *v16;
  signed __int64 v17;
  unsigned __int64 v18;
  _DWORD *v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int *v23;
  unsigned int v24;
  unsigned int v25;
  bool v26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FF660[48];
#define v28 (*(signed __int64 (*))(void *)(sr_frame_1400FF660 + 0)) /* [rsp+30h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1400FF660 + 16)) /* [rsp+40h] */
#define v30 (*(__int64 (*))(void *)(sr_frame_1400FF660 + 24)) /* [rsp+48h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_1400FF660 + 32)) /* [rsp+50h] */
#define v32 (*(__int64 (*))(void *)(sr_frame_1400FF660 + 40)) /* [rsp+58h] */

  a1 = (int)a1;
  v2 = 180288LL * (int)a1;
  v3 = a2;
  v32 = (int)a1;
  v30 = v2;
  v4 = 0;
  mesh_vertex_count = *(unsigned int *)((char *)&g_190297C5C + v2);
  v5 = (int)mesh_vertex_count;
  v29 = (int)mesh_vertex_count;
  if ( (int)mesh_vertex_count >= 4LL )
  {
    v6 = (char *)(unsigned int *)&g_16A7DBDB8 - v2 - (char *)&g_190297C68;
    v7 = (char *)(unsigned int *)&g_16A7DBDBC - v2 - (char *)&g_190297C68;
    v8 = (char *)(unsigned int *)&g_16A7DBDC4 - v2 - (char *)&g_190297C68;
    v9 = (char *)(unsigned int *)&g_16A7DBDC8 - v2 - (char *)&g_190297C68;
    v10 = (char *)(unsigned int *)&g_16A7DBDD0 - v2 - (char *)&g_190297C68;
    v11 = (char *)(unsigned int *)&g_16A7DBDAC - v2 - (char *)&g_190297C68;
    v12 = (char *)(unsigned int *)&g_16A7DBDA8 - v2 - (char *)&g_190297C68;
    v13 = (char *)(unsigned int *)&g_16A7DBDD4 - v2 - (char *)&g_190297C68;
    v14 = (char *)(unsigned int *)&g_16A7DBDB0 - v2 - (char *)&g_190297C68;
    v15 = (unsigned int *)((char *)&g_190297C68 + v2);
    v28 = (char *)(unsigned int *)&g_16A7DBDC0 - v2 - (char *)&g_190297C68;
    v16 = (char *)(unsigned int *)&g_16A7DBDCC - v2;
    v17 = (char *)(unsigned int *)&g_16A7DBDB4 - v2 - (char *)&g_190297C68;
    v18 = ((unsigned __int64)((int)mesh_vertex_count - 4LL) >> 2) + 1;
    v31 = 4 * v18;
    do
    {
      *(_DWORD *)((char *)v15 + v12) = *(v15 - 2);
      *(_DWORD *)((char *)v15 + v11) = *(v15 - 1);
      *(_DWORD *)((char *)v15 + v14) = *v15;
      *(_DWORD *)((char *)v15 + v17) = v15[1];
      *(_DWORD *)((char *)v15 + v6) = v15[2];
      *(_DWORD *)((char *)v15 + v7) = v15[3];
      *(_DWORD *)((char *)v15 + v28) = v15[4];
      *(_DWORD *)((char *)v15 + v8) = v15[5];
      *(_DWORD *)((char *)v15 + v9) = v15[6];
      *(_DWORD *)((uintptr_t)v15 + (uintptr_t)v16 - (uintptr_t)&g_190297C68) = v15[7];
      *(_DWORD *)((char *)v15 + v10) = v15[8];
      *(_DWORD *)((char *)v15 + v13) = v15[9];
      v15 += 12;
      --v18;
    }
    while ( v18 );
    v5 = v29;
    v2 = v30;
    v4 = v31;
    a1 = v32;
    v3 = a2;
  }
  if ( v4 < v5 )
  {
    v19 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v4 + 15024 * a1) + 1344896104);
    v20 = v5 - v4;
    do
    {
      *(_DWORD *)((uintptr_t)v19 + (uintptr_t)(unsigned int *)&g_16A7DBDA8 - v2 - (uintptr_t)&g_190297C68) = *(v19 - 2);
      *(_DWORD *)((uintptr_t)v19 + (uintptr_t)(unsigned int *)&g_16A7DBDAC - v2 - (uintptr_t)&g_190297C68) = *(v19 - 1);
      *(_DWORD *)((uintptr_t)v19 + (uintptr_t)(unsigned int *)&g_16A7DBDB0 - v2 - (uintptr_t)&g_190297C68) = *v19;
      v19 += 3;
      --v20;
    }
    while ( v20 );
  }
  v21 = *(int *)((char *)&g_19029AC60 + v2);
  v22 = 0;
  mesh_triangle_count = 0;
  if ( v21 > 0 )
  {
    v23 = (unsigned int *)((char *)&g_19029AC70 + v2);
    do
    {
      v24 = *(v23 - 1);
      dword_140404A6C[3 * v22 + 177495248] = v24;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *v23;
      v25 = v23[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = v25;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
      v22 = mesh_triangle_count + 1;
      v26 = *(v23 - 2) == 4;
      ++mesh_triangle_count;
      if ( v26 )
      {
        dword_140404A6C[3 * v22 + 177495248] = v24;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = v25;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = v23[2];
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        v22 = ++mesh_triangle_count;
      }
      v23 += 26;
      --v21;
    }
    while ( v21 );
  }
  return sub_1401449C0(v3, 1);
}
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32

//----- (00000001400FFAE0) ----------------------------------------------------
double            sub_1400FFAE0(int a1, float a2, float a3, float a4)
{
  int v5;
  unsigned int *v6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FFAE0[16];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400FFAE0 + 0)) /* [rsp+20h] */
#define v9 (*(int (*))(void *)(sr_frame_1400FFAE0 + 8)) /* [rsp+28h] */

  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  v8 = 0;
  v9 = 0;
  sub_140002D00((float *)&v8, a2, a3, a4);
  v5 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    v6 = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)mesh_triangle_count );
  }
  g_16AB13EA0 = xmmword_1402794B0;
  g_16AB13EB0 = xmmword_140279410;
  g_16AB13EC0 = xmmword_140279430;
  g_16AB13DB0 = xmmword_140279400;
  g_16AB13DC0 = xmmword_140278D70;
  g_16AB13DD0 = xmmword_140278E50;
  if ( a1 == g_183EBB758 )
  {
    g_16AB13DE0 = xmmword_1402796F0;
    g_16AB13E00 = xmmword_140278D90;
    g_16AB13DF0 = xmmword_1402794A0;
  }
  return sub_1401449C0(a1, 0);
}
#undef v8
#undef v9

//----- (00000001400FFCE0) ----------------------------------------------------
__int64            sub_1400FFCE0(int a1, int a2, double a3)
{
  unsigned int *v3;
  int v4;
  float v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  unsigned int v16;
  float v17;
  __int64 v18;
  __m128 v19;
  double v20;
  unsigned int v21;
  float v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __m128 v28;
  double v29;
  unsigned int v30;
  float v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __m128 v37;
  double v38;
  unsigned int v39;
  float v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  __m128 v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  unsigned int v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FFCE0[128];
#define v85 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 0)) /* [rsp+8h] */
#define v86 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 32)) /* [rsp+28h] */
#define v87 (*(unsigned __int64 (*))(void *)(sr_frame_1400FFCE0 + 40)) /* [rsp+30h] */
#define v88 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 48)) /* [rsp+38h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 52)) /* [rsp+3Ch] */
#define v90 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 56)) /* [rsp+40h] */
#define v91 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 60)) /* [rsp+44h] */
#define v92 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 64)) /* [rsp+48h] */
#define v93 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 68)) /* [rsp+4Ch] */
#define v94 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 72)) /* [rsp+50h] */
#define v95 (*(_DWORD (*)[3])(void *)(sr_frame_1400FFCE0 + 76)) /* [rsp+54h] */
#define v96 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 88)) /* [rsp+60h] */
#define v97 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 92)) /* [rsp+64h] */
#define v98 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 96)) /* [rsp+68h] */
#define v99 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 112)) /* [rsp+78h] */

  v3 = &v93;
  v4 = 0;
  v5 = 0.0;
  v6 = mesh_vertex_count;
  LODWORD(v86) = a1;
  v87 = 16LL * a1;
  v7 = a2 + 16;
  v8 = dword_140404A6C[v87 / 4 + 178322642];
  v9 = dword_140404A6C[v87 / 4 + 178322644];
  v10 = dword_140404A6C[v87 / 4 + 178322645];
  v89 = dword_140404A6C[v87 / 4 + 178322643];
  v88 = v8;
  v90 = v9;
  v11 = (int)(3 * v89);
  v12 = (int)(3 * v8);
  v13 = (int)(3 * v9);
  v14 = 3 * (int)v10;
  v91 = v10;
  v15 = (float)((float)((float)(*(float *)&dword_140404A6C[v12 + 177167567] + *(float *)&dword_140404A6C[v11 + 177167567])
                      + *(float *)&dword_140404A6C[v13 + 177167567])
              + *(float *)&dword_140404A6C[v14 + 177167567])
      * 0.25;
  *(float *)&v16 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v12 + 177167569]
                                                 + *(float *)&dword_140404A6C[v11 + 177167569])
                                         + *(float *)&dword_140404A6C[v13 + 177167569])
                                 + *(float *)&dword_140404A6C[v14 + 177167569])
                         * 0.25)
                 + 0.015625;
  v17 = (float)((float)((float)(*(float *)&dword_140404A6C[v12 + 177167568] + *(float *)&dword_140404A6C[v11 + 177167568])
                      + *(float *)&dword_140404A6C[v13 + 177167568])
              + *(float *)&dword_140404A6C[v14 + 177167568])
      * 0.25;
  do
  {
    v19 = _mm_castpd_ps(sub_1401F8A50(v5, v10, a3));
    HIDWORD(v20) = 0;
    *(float *)&v20 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v19, (__m128d)v19, 1), f64)[0] * 0.009765625;
    *(float *)&v21 = *(double *)SR_VEC_LANES(128, v19, u64) * -0.0234375;
    if ( (v4 & 1) != 0 )
      *(float *)&v20 = *(float *)&v20 * 0.875;
    v22 = v5 + 0.78539819;
    dword_140404A6C[2 * v6 + 177216719] = v21;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(v20);
    v23 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[v23 + 177167568] = v17 + *(float *)&v20;
    *(float *)&dword_140404A6C[v23 + 177167567] = v15 + *(float *)&v21;
    dword_140404A6C[v23 + 177167569] = v16;
    v24 = mesh_vertex_count;
    v25 = 7LL * (int)mesh_vertex_count;
    *(v3 - 1) = mesh_vertex_count;
    v26 = v24 + 1;
    mesh_vertex_count = v26;
    dword_140404A6C[v25 + 160235602] = v21;
    dword_140404A6C[v25 + 160235603] = LODWORD(v20);
    dword_140404A6C[v25 + 160235598] = v7;
    dword_140404A6C[v25 + 160235599] = 3;
    dword_140404A6C[v25 + 160235604] = 1015021568;
    v28 = _mm_castpd_ps(sub_1401F8A50(v22, v18, v20));
    HIDWORD(v29) = 0;
    *(float *)&v29 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v28, (__m128d)v28, 1), f64)[0] * 0.009765625;
    *(float *)&v30 = *(double *)SR_VEC_LANES(128, v28, u64) * -0.0234375;
    if ( (((_BYTE)v4 + 3) & 1) != 0 )
      *(float *)&v29 = *(float *)&v29 * 0.875;
    v31 = v22 + 0.78539819;
    dword_140404A6C[2 * v26 + 177216719] = v30;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(v29);
    v32 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[v32 + 177167567] = v15 + *(float *)&v30;
    *(float *)&dword_140404A6C[v32 + 177167568] = v17 + *(float *)&v29;
    dword_140404A6C[v32 + 177167569] = v16;
    v33 = mesh_vertex_count;
    v34 = 7LL * (int)mesh_vertex_count;
    *v3 = mesh_vertex_count;
    v35 = v33 + 1;
    mesh_vertex_count = v35;
    dword_140404A6C[v34 + 160235598] = v7;
    dword_140404A6C[v34 + 160235599] = 3;
    dword_140404A6C[v34 + 160235602] = v30;
    dword_140404A6C[v34 + 160235603] = LODWORD(v29);
    dword_140404A6C[v34 + 160235604] = 1015021568;
    v37 = _mm_castpd_ps(sub_1401F8A50(v31, v27, v29));
    HIDWORD(v38) = 0;
    *(float *)&v38 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v37, (__m128d)v37, 1), f64)[0] * 0.009765625;
    *(float *)&v39 = *(double *)SR_VEC_LANES(128, v37, u64) * -0.0234375;
    if ( (v4 & 1) != 0 )
      *(float *)&v38 = *(float *)&v38 * 0.875;
    v40 = v31 + 0.78539819;
    dword_140404A6C[2 * v35 + 177216719] = v39;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(v38);
    v41 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[v41 + 177167567] = v15 + *(float *)&v39;
    *(float *)&dword_140404A6C[v41 + 177167568] = v17 + *(float *)&v38;
    dword_140404A6C[v41 + 177167569] = v16;
    v42 = mesh_vertex_count;
    v43 = 7LL * (int)mesh_vertex_count;
    v3[1] = mesh_vertex_count;
    v44 = v42 + 1;
    mesh_vertex_count = v44;
    dword_140404A6C[v43 + 160235598] = v7;
    dword_140404A6C[v43 + 160235599] = 3;
    dword_140404A6C[v43 + 160235602] = v39;
    dword_140404A6C[v43 + 160235603] = LODWORD(v38);
    dword_140404A6C[v43 + 160235604] = 1015021568;
    v45 = _mm_castpd_ps(sub_1401F8A50(v40, v36, v38));
    HIDWORD(a3) = 0;
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v45, (__m128d)v45, 1), f64)[0] * 0.009765625;
    *(float *)&v46 = *(double *)SR_VEC_LANES(128, v45, u64) * -0.0234375;
    if ( (((_BYTE)v4 + 3) & 1) != 0 )
      *(float *)&a3 = *(float *)&a3 * 0.875;
    v5 = v40 + 0.78539819;
    v4 += 4;
    dword_140404A6C[2 * v44 + 177216719] = v46;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(a3);
    v47 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[v47 + 177167567] = v15 + *(float *)&v46;
    *(float *)&dword_140404A6C[v47 + 177167568] = v17 + *(float *)&a3;
    dword_140404A6C[v47 + 177167569] = v16;
    v10 = (int)mesh_vertex_count;
    v48 = 7LL * (int)mesh_vertex_count;
    v3[2] = mesh_vertex_count;
    v3 += 4;
    v6 = v10 + 1;
    mesh_vertex_count = v10 + 1;
    dword_140404A6C[v48 + 160235598] = v7;
    dword_140404A6C[v48 + 160235599] = 3;
    dword_140404A6C[v48 + 160235602] = v46;
    dword_140404A6C[v48 + 160235603] = LODWORD(a3);
    dword_140404A6C[v48 + 160235604] = 1015021568;
  }
  while ( v4 < 8 );
  v49 = v88;
  v50 = 0;
  v51 = v92;
  v52 = v89;
  v53 = v97;
  dword_140404A6C[2 * v6 + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
  v54 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[v54 + 177167567] = v15;
  *(float *)&dword_140404A6C[v54 + 177167568] = v17;
  dword_140404A6C[v54 + 177167569] = v16;
  v55 = mesh_vertex_count;
  v56 = 7LL * (int)mesh_vertex_count;
  v98 = mesh_vertex_count++;
  LODWORD(v54) = mesh_triangle_count;
  dword_140404A6C[v56 + 160235598] = v7;
  dword_140404A6C[v56 + 160235599] = 3;
  *(_QWORD *)&dword_140404A6C[v56 + 160235602] = 0;
  dword_140404A6C[v56 + 160235604] = 1015021568;
  dword_140404A6C[3 * (_DWORD)v54 + 177495248] = v49;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v52;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v51;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v57 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v57 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v57 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v57 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v49;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v51;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v53;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v58 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v58 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v58 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v58 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v49;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v53;
  v59 = v96;
  v60 = v94;
  v61 = v90;
  v62 = v93;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v96;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v63 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v63 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v63 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v63 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v52;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v61;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v60;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v64 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v64 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v52;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v60;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v62;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v65 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v65 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v65 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v65 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v52;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v62;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v51;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v66 = v95[1];
  v67 = 6 * mesh_triangle_count;
  v68 = v91;
  v69 = v95[0];
  *(_QWORD *)&dword_140404A6C[v67 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v61;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v68;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v66;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v70 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v70 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v70 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v61;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v66;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v69;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v71 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v71 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v71 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v71 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v61;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v69;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v60;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v72 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v72 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v72 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v72 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  v73 = 2;
  v74 = v95[2];
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v68;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v49;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v59;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v75 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v75 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v75 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v75 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v68;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v59;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v74;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v76 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v76 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v76 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v76 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = v68;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = v74;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = v66;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  v77 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[v77 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v77 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v77 + 178011349] = 1065353216;
  v78 = v87;
  v79 = ++mesh_triangle_count;
  do
  {
    dword_140404A6C[3 * v79 + 177495248] = *(&v92 + v50);
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&v92 + (((_BYTE)v73 - 1) & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v55;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = *(&v93 + v50);
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&v92 + (v73 & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v55;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v95[v50 - 1];
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&v92 + (((_BYTE)v73 + 1) & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v55;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = v95[v50];
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&v92 + (((_BYTE)v73 + 2) & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = v55;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    v73 += 4;
    v50 += 4;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    v79 = ++mesh_triangle_count;
  }
  while ( v50 < 8 );
  v80 = v86;
  if ( (int)v86 >= 0 )
  {
    v81 = g_16AC43DB0;
    if ( (int)v86 < (int)g_16AC43DB0 )
    {
      --g_16AC43DB0;
      *(unsigned int *)((char *)&g_16AC43DB4 + v78) = dword_140404A6C[4 * (v81 - 1) + 178322642];
      *(unsigned int *)((char *)&g_16AC43DB8 + v78) = dword_140404A6C[4 * g_16AC43DB0
                                                                                   + 178322643];
      *(unsigned int *)((char *)&g_16AC43DBC + v78) = dword_140404A6C[4 * g_16AC43DB0
                                                                                   + 178322644];
      *(unsigned int *)((char *)&g_16AC43DC0 + v78) = dword_140404A6C[4 * g_16AC43DB0
                                                                                   + 178322645];
      v82 = 8 * g_16AC43DB0;
      v83 = 8 * v80;
      *(_OWORD *)&dword_140404A6C[v83 + 178388178] = *(_OWORD *)&dword_140404A6C[v82 + 178388178];
      *(_OWORD *)&dword_140404A6C[v83 + 178388182] = *(_OWORD *)&dword_140404A6C[v82 + 178388182];
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
