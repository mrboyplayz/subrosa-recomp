#include "shared_client.h"

//----- (0000000140144700) ----------------------------------------------------
void sub_140144700()
{
  int v0; // edi
  __int64 v1; // rsi
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  char *v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // rdx
  char v13; // cl

  sr_pad_mappings(sr_pad_file("gamecontrollerdb.txt","rb"),1);
  dword_140404A6C[285101109] = 0;
  dword_140404A6C[285101233] = 0;
  dword_140404A6C[285101357] = 0;
  dword_140404A6C[285101481] = 0;
  dword_140404A6C[285101605] = 0;
  dword_140404A6C[285101729] = 0;
  dword_140404A6C[285101853] = 0;
  dword_140404A6C[285101977] = 0;
  dword_140404A6C[285102101] = 0;
  dword_140404A6C[285102225] = 0;
  dword_140404A6C[285102349] = 0;
  dword_140404A6C[285102473] = 0;
  dword_140404A6C[285102597] = 0;
  dword_140404A6C[285102721] = 0;
  dword_140404A6C[285102845] = 0;
  dword_140404A6C[285102969] = 0;
  dword_140404A6C[285103093] = 0;
  dword_140404A6C[285103217] = 0;
  dword_140404A6C[285103341] = 0;
  dword_140404A6C[285103465] = 0;
  dword_140404A6C[285103589] = 0;
  dword_140404A6C[285103713] = 0;
  dword_140404A6C[285103837] = 0;
  dword_140404A6C[285103961] = 0;
  dword_140404A6C[285104085] = 0;
  dword_140404A6C[285104209] = 0;
  dword_140404A6C[285104333] = 0;
  dword_140404A6C[285104457] = 0;
  dword_140404A6C[285104581] = 0;
  dword_140404A6C[285104705] = 0;
  dword_140404A6C[285104829] = 0;
  dword_140404A6C[285104953] = 0;
  dword_140404A6C[285105213] = sr_pad_count();
  v0 = 0;
  if ( (int)dword_140404A6C[285105213] > 0 )
  {
    v1 = 0;
    do
    {
      if ( v0 < 32 )
      {
        if ( (unsigned int)sr_pad_is_controller(v0) )
        {
          v2 = (__int64)(uintptr_t)sr_pad_controller_open(v0);
          *(_QWORD *)&dword_140404A6C[v1 + 285105085] = v2;
          if ( v2 )
          {
            *(_QWORD *)&dword_140404A6C[v1 + 285105149] = (__int64)(uintptr_t)sr_pad_controller_joystick((void *)(uintptr_t)v2);
            v3 = sr_pad_instance((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            if ( v3 > 31 )
              v3 = 31;
            v4 = (__int64)(uintptr_t)sr_pad_name(v0);
            v5 = 124LL * v3;
            v6 = (char *)&dword_140404A6C[285101198] + v5 * 4 - v4;
            do
            {
              v7 = *(_BYTE *)v4;
              v6[v4] = *(_BYTE *)v4;
              ++v4;
            }
            while ( v7 );
            dword_140404A6C[v5 + 285101115] = 6;
            dword_140404A6C[v5 + 285101132] = 16;
            dword_140404A6C[v5 + 285101165] = 0;
            dword_140404A6C[v5 + 285101109] = 1;
          }
        }
        else
        {
          v8 = (__int64)(uintptr_t)sr_pad_open(v0);
          *(_QWORD *)&dword_140404A6C[v1 + 285105149] = v8;
          if ( v8 )
          {
            v9 = sr_pad_instance((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            if ( v9 > 31 )
              v9 = 31;
            v10 = (__int64)(uintptr_t)sr_pad_name(v0);
            v11 = 124LL * v9;
            v12 = (char *)&dword_140404A6C[285101198] + v11 * 4 - v10;
            do
            {
              v13 = *(_BYTE *)v10;
              v12[v10] = *(_BYTE *)v10;
              ++v10;
            }
            while ( v13 );
            dword_140404A6C[v11 + 285101115] = sr_pad_axes((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            dword_140404A6C[v11 + 285101132] = sr_pad_buttons((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            dword_140404A6C[v11 + 285101165] = sr_pad_hats((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149]);
            dword_140404A6C[v11 + 285101109] = 1;
          }
        }
      }
      ++v0;
      v1 += 2;
    }
    while ( v0 < (int)dword_140404A6C[285105213] );
  }
  SDL_JoystickEventState(0);
}

// 1401449A7: control flows out of bounds to 140198F4D
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 184397B40: using guessed type unsigned int;
// 184397D30: using guessed type unsigned int;
// 184397F20: using guessed type unsigned int;
// 184398110: using guessed type unsigned int;
// 184398300: using guessed type unsigned int;
// 1843984F0: using guessed type unsigned int;
// 1843986E0: using guessed type unsigned int;
// 1843988D0: using guessed type unsigned int;
// 184398AC0: using guessed type unsigned int;
// 184398CB0: using guessed type unsigned int;
// 184398EA0: using guessed type unsigned int;
// 184399090: using guessed type unsigned int;
// 184399280: using guessed type unsigned int;
// 184399470: using guessed type unsigned int;
// 184399660: using guessed type unsigned int;
// 184399850: using guessed type unsigned int;
// 184399A40: using guessed type unsigned int;
// 184399C30: using guessed type unsigned int;
// 184399E20: using guessed type unsigned int;
// 18439A010: using guessed type unsigned int;
// 18439A200: using guessed type unsigned int;
// 18439A3F0: using guessed type unsigned int;
// 18439A5E0: using guessed type unsigned int;
// 18439A7D0: using guessed type unsigned int;
// 18439A9C0: using guessed type unsigned int;
// 18439ABB0: using guessed type unsigned int;
// 18439ADA0: using guessed type unsigned int;
// 18439AF90: using guessed type unsigned int;
// 18439B180: using guessed type unsigned int;
// 18439B370: using guessed type unsigned int;
// 18439B560: using guessed type unsigned int;
// 18439B750: using guessed type unsigned int;

//----- (00000001401449C0) ----------------------------------------------------
double            sub_1401449C0(int a1, int a2)
{
  int v2; // eax
  signed int v3; // r13d
  int v4; // edi
  float *v5; // rbx
  __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm6_4
  __int64 v10; // rdx
  float v11; // xmm8_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  __int64 v14; // rax
  float *v15; // rdx
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // edx
  unsigned int *v20; // rcx
  int v21; // r14d
  unsigned int *v22; // rcx
  int v23; // r15d
  unsigned int *v24; // rdx
  int v25; // r8d
  int v26; // edi
  int v27; // ebp
  int *v28; // rsi
  int *v29; // r10
  int v30; // r11d
  unsigned int *v31; // rbx
  _DWORD *v32; // r9
  __int64 v33; // r12
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ebx
  signed int v47; // ebp
  __int64 v48; // rdi
  signed int v49; // r15d
  signed int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  __int64 v58; // rdx
  int v59; // r11d
  int v60; // r10d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rdx
  int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // rdx
  unsigned int v78; // r14d
  float v79; // xmm2_4
  float v80; // xmm2_4
  float v81; // xmm2_4
  unsigned int v82; // eax
  float v83; // xmm2_4
  unsigned int v84; // eax
  float v85; // xmm2_4
  unsigned int v86; // eax
  float v87; // xmm2_4
  float v88; // xmm2_4
  float v89; // xmm2_4
  float v90; // xmm2_4
  unsigned int v91; // eax
  float v92; // xmm2_4
  unsigned int v93; // eax
  float v94; // xmm2_4
  unsigned int v95; // eax
  float v96; // xmm2_4
  unsigned int v97; // r11d
  float v98; // xmm2_4
  unsigned int v99; // r10d
  float v100; // xmm2_4
  unsigned int v101; // r9d
  float v102; // xmm2_4
  int v103; // edx
  unsigned int *v104; // rcx
  int v105; // r8d
  int v106; // esi
  int v107; // ecx
  unsigned int *v108; // rdx
  int v109; // r8d
  int v110; // edx
  unsigned int *v111; // r9
  unsigned int *v112; // r10
  unsigned int v113; // eax
  int v114; // ecx
  unsigned int v115; // eax
  unsigned int v116; // eax
  unsigned int v117; // eax
  __int64 v118; // rbx
  void *v119; // rcx
  __m128i *v120; // rax
  unsigned int v121; // ecx
  unsigned int v122; // eax
  void *v123; // rcx
  __int64 v124; // rax
  bool v125; // cc
  __int64 v126; // r8
  __int64 v127; // rdx
  __m128i *v128; // rax
  unsigned int v129; // ecx
  __m128i *v130; // rax
  unsigned int v131; // ecx
  __m128i *v132; // rax
  unsigned int v133; // ecx
  __m128i *v134; // rax
  unsigned int v135; // ecx
  void *v136; // rcx
  __m128i *v137; // rax
  unsigned int v138; // ecx
  __int64 v139; // r8
  __int64 v140; // r8
  __int64 v141; // r8
  __int64 v142; // r8
  unsigned int *v144; // [rsp+20h] [rbp-88h]
  unsigned int *v147; // [rsp+C8h] [rbp+20h]

  v2 = dword_140404A6C[177495247];
  v3 = 0;
  v4 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v5 = (float *)&dword_140404A6C[177814739];
    do
    {
      v6 = 3 * *((_DWORD *)v5 - 319491);
      v7 = *(float *)&dword_140404A6C[v6 + 177167567];
      v8 = *(float *)&dword_140404A6C[v6 + 177167568];
      v9 = *(float *)&dword_140404A6C[v6 + 177167569];
      v10 = 3 * *((_DWORD *)v5 - 319490);
      v11 = *(float *)&dword_140404A6C[v10 + 177167568] - v8;
      v12 = *(float *)&dword_140404A6C[v10 + 177167569] - v9;
      v13 = *(float *)&dword_140404A6C[v10 + 177167567] - v7;
      v14 = 3 * *((_DWORD *)v5 - 319489);
      v15 = v5 - 2;
      v16 = *(float *)&dword_140404A6C[v14 + 177167568] - v8;
      v17 = *(float *)&dword_140404A6C[v14 + 177167569] - v9;
      v18 = *(float *)&dword_140404A6C[v14 + 177167567] - v7;
      *v15 = (float)(v16 * v12) - (float)(v17 * v11);
      *v5 = (float)(v11 * v18) - (float)(v16 * v13);
      *(v5 - 1) = (float)(v17 * v13) - (float)(v12 * v18);
      sub_14007A240((__int64)v15, v15);
      v2 = dword_140404A6C[177495247];
      ++v4;
      v5 += 3;
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  v19 = 0;
  if ( v2 > 0 )
  {
    v20 = &dword_140404A6C[178158802];
    do
    {
      *(_QWORD *)(v20 - 1) = -1;
      ++v19;
      v20[1] = -1;
      v20 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v19 < (int)dword_140404A6C[177495247] );
  }
  v21 = 0;
  if ( v2 > 0 )
  {
    v22 = &dword_140404A6C[178158801];
    v23 = 0;
    v24 = &dword_140404A6C[178224338];
    v144 = &dword_140404A6C[178158801];
    v147 = &dword_140404A6C[178224338];
    do
    {
      v25 = v21 + 1;
      v26 = v21 + 1;
      if ( v21 + 1 < v2 )
      {
        v27 = v23 + 5;
        v28 = (int *)(v24 + 8);
        v29 = (int *)(v22 + 3);
        do
        {
          v30 = 0;
          v31 = v24;
          v32 = v22;
          v33 = 3;
          do
          {
            if ( *v32 == -1 )
            {
              if ( *v29 == -1 )
              {
                v34 = 3 * *(v32 - 663553);
                v35 = 3 * dword_140404A6C[v27 + 177495247];
                if ( *(float *)&dword_140404A6C[v35 + 177167567] == *(float *)&dword_140404A6C[v34 + 177167567]
                  && *(float *)&dword_140404A6C[v35 + 177167568] == *(float *)&dword_140404A6C[v34 + 177167568]
                  && *(float *)&dword_140404A6C[v35 + 177167569] == *(float *)&dword_140404A6C[v34 + 177167569] )
                {
                  v36 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                  v37 = 3 * *(v29 - 663553);
                  if ( *(float *)&dword_140404A6C[v37 + 177167567] == *(float *)&dword_140404A6C[v36 + 177167567]
                    && *(float *)&dword_140404A6C[v37 + 177167568] == *(float *)&dword_140404A6C[v36 + 177167568]
                    && *(float *)&dword_140404A6C[v37 + 177167569] == *(float *)&dword_140404A6C[v36 + 177167569] )
                  {
                    *v32 = v26;
                    *v31 = 2;
                    *v29 = v21;
                    *(v28 - 2) = (v30 + 2) % 3;
                  }
                }
              }
              if ( *v32 == -1 )
              {
                if ( v29[1] == -1 )
                {
                  v38 = 3 * *(v32 - 663553);
                  v39 = 3 * dword_140404A6C[v27 + 177495248];
                  if ( *(float *)&dword_140404A6C[v39 + 177167567] == *(float *)&dword_140404A6C[v38 + 177167567]
                    && *(float *)&dword_140404A6C[v39 + 177167568] == *(float *)&dword_140404A6C[v38 + 177167568]
                    && *(float *)&dword_140404A6C[v39 + 177167569] == *(float *)&dword_140404A6C[v38 + 177167569] )
                  {
                    v40 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                    v41 = 3 * *(v29 - 663552);
                    if ( *(float *)&dword_140404A6C[v41 + 177167567] == *(float *)&dword_140404A6C[v40 + 177167567]
                      && *(float *)&dword_140404A6C[v41 + 177167568] == *(float *)&dword_140404A6C[v40 + 177167568]
                      && *(float *)&dword_140404A6C[v41 + 177167569] == *(float *)&dword_140404A6C[v40 + 177167569] )
                    {
                      *v32 = v26;
                      *v31 = 0;
                      v29[1] = v21;
                      *v28 = (v30 + 2) % 3;
                    }
                  }
                }
                if ( *v32 == -1 && v29[2] == -1 )
                {
                  v42 = 3 * *(v32 - 663553);
                  v43 = 3 * dword_140404A6C[v27 + 177495246];
                  if ( *(float *)&dword_140404A6C[v43 + 177167567] == *(float *)&dword_140404A6C[v42 + 177167567]
                    && *(float *)&dword_140404A6C[v43 + 177167568] == *(float *)&dword_140404A6C[v42 + 177167568]
                    && *(float *)&dword_140404A6C[v43 + 177167569] == *(float *)&dword_140404A6C[v42 + 177167569] )
                  {
                    v44 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                    v45 = 3 * *(v29 - 663551);
                    if ( *(float *)&dword_140404A6C[v45 + 177167567] == *(float *)&dword_140404A6C[v44 + 177167567]
                      && *(float *)&dword_140404A6C[v45 + 177167568] == *(float *)&dword_140404A6C[v44 + 177167568]
                      && *(float *)&dword_140404A6C[v45 + 177167569] == *(float *)&dword_140404A6C[v44 + 177167569] )
                    {
                      *v32 = v26;
                      *v31 = 1;
                      v29[2] = v21;
                      v28[2] = (v30 + 2) % 3;
                    }
                  }
                }
              }
            }
            ++v30;
            ++v32;
            v31 += 2;
            --v33;
          }
          while ( v33 );
          v2 = dword_140404A6C[177495247];
          ++v26;
          v22 = v144;
          v27 += 3;
          v24 = v147;
          v29 += 3;
          v28 += 6;
        }
        while ( v26 < (int)dword_140404A6C[177495247] );
        v25 = v21 + 1;
      }
      v24 += 6;
      v22 += 3;
      v23 += 3;
      v147 = v24;
      v144 = v22;
      v21 = v25;
    }
    while ( v25 < v2 );
  }
  dword_140404A6C[177167566] = 8;
  v46 = 0;
  if ( v2 > 0 )
  {
    v47 = dword_140404A6C[283827702];
    v48 = 0;
    v49 = dword_140404A6C[283827765];
    v50 = dword_140404A6C[283827734];
    do
    {
      v51 = (int)(3 * dword_140404A6C[3 * v48 + 177495248]);
      v52 = 3 * v46 * dword_140404A6C[177167566];
      dword_140404A6C[v52 + 177347791] = dword_140404A6C[v51 + 177167567];
      dword_140404A6C[v52 + 177347792] = dword_140404A6C[v51 + 177167568];
      dword_140404A6C[v52 + 177347793] = dword_140404A6C[v51 + 177167569];
      v53 = 3 * v46 * dword_140404A6C[177167566];
      dword_140404A6C[v53 + 177347794] = dword_140404A6C[6 * v48 + 178011345];
      dword_140404A6C[v53 + 177347795] = dword_140404A6C[6 * v48 + 178011346];
      if ( a2 || (v56 = dword_140404A6C[v48 + 178207953], v56 == -2) )
      {
        v54 = 3 * v46 * dword_140404A6C[177167566];
        dword_140404A6C[v54 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v54 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v55 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v56 == -1 )
          v57 = dword_140404A6C[3 * v48 + 177495248];
        else
          v57 = dword_140404A6C[v46 + v56 + 2 * v46 + 177495248];
        v58 = (int)(3 * v57);
        v54 = 3 * v46 * dword_140404A6C[177167566];
        dword_140404A6C[v54 + 177347796] = dword_140404A6C[v58 + 177249487];
        dword_140404A6C[v54 + 177347797] = dword_140404A6C[v58 + 177249488];
        v55 = dword_140404A6C[v58 + 177249489];
      }
      dword_140404A6C[v54 + 177347798] = v55;
      v59 = 3 * v46;
      v60 = 3 * v46 + 1;
      v61 = (int)(3 * dword_140404A6C[3 * v48 + 177495249]);
      v62 = dword_140404A6C[177167566] * v60;
      dword_140404A6C[v62 + 177347791] = dword_140404A6C[v61 + 177167567];
      dword_140404A6C[v62 + 177347792] = dword_140404A6C[v61 + 177167568];
      dword_140404A6C[v62 + 177347793] = dword_140404A6C[v61 + 177167569];
      v63 = dword_140404A6C[177167566] * v60;
      dword_140404A6C[v63 + 177347794] = dword_140404A6C[6 * v48 + 178011347];
      dword_140404A6C[v63 + 177347795] = dword_140404A6C[6 * v48 + 178011348];
      if ( a2 || (v66 = dword_140404A6C[v48 + 178207953], v66 == -2) )
      {
        v64 = dword_140404A6C[177167566] * v60;
        dword_140404A6C[v64 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v64 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v65 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v66 == -1 )
          v67 = dword_140404A6C[3 * v48 + 177495249];
        else
          v67 = dword_140404A6C[v59 + v66 + 177495248];
        v68 = (int)(3 * v67);
        v64 = dword_140404A6C[177167566] * v60;
        dword_140404A6C[v64 + 177347796] = dword_140404A6C[v68 + 177249487];
        dword_140404A6C[v64 + 177347797] = dword_140404A6C[v68 + 177249488];
        v65 = dword_140404A6C[v68 + 177249489];
      }
      dword_140404A6C[v64 + 177347798] = v65;
      v69 = v59 + 2;
      v70 = (int)(3 * dword_140404A6C[3 * v48 + 177495250]);
      v71 = dword_140404A6C[177167566] * (v59 + 2);
      dword_140404A6C[v71 + 177347791] = dword_140404A6C[v70 + 177167567];
      dword_140404A6C[v71 + 177347792] = dword_140404A6C[v70 + 177167568];
      dword_140404A6C[v71 + 177347793] = dword_140404A6C[v70 + 177167569];
      v72 = dword_140404A6C[177167566] * (v59 + 2);
      dword_140404A6C[v72 + 177347794] = dword_140404A6C[6 * v48 + 178011349];
      dword_140404A6C[v72 + 177347795] = dword_140404A6C[6 * v48 + 178011350];
      if ( a2 || (v75 = dword_140404A6C[v48 + 178207953], v75 == -2) )
      {
        v73 = dword_140404A6C[177167566] * v69;
        dword_140404A6C[v73 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v73 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v74 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v75 == -1 )
          v76 = dword_140404A6C[3 * v48 + 177495250];
        else
          v76 = dword_140404A6C[v59 + v75 + 177495248];
        v77 = (int)(3 * v76);
        v73 = dword_140404A6C[177167566] * v69;
        dword_140404A6C[v73 + 177347796] = dword_140404A6C[v77 + 177249487];
        dword_140404A6C[v73 + 177347797] = dword_140404A6C[v77 + 177249488];
        v74 = dword_140404A6C[v77 + 177249489];
      }
      v78 = dword_140404A6C[283826991];
      dword_140404A6C[v73 + 177347798] = v74;
      if ( a1 >= v47 && a1 <= (int)dword_140404A6C[283827733] || a1 >= v50 && a1 <= v49 )
      {
        v79 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v79 >= 0.9375 && v79 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347794] = 1099169792;
        v80 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v80 >= 0.9375 && v80 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347794] = 1099169792;
        v81 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v81 >= 0.9375 && v81 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347794] = 1099169792;
        v82 = dword_140404A6C[177167566] * v59;
        v83 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v83 >= 0.8125 && v83 < 0.875 && *(float *)&dword_140404A6C[v82 + 177347794] < 0.5 )
          dword_140404A6C[v82 + 177347794] = 1099169792;
        v84 = dword_140404A6C[177167566] * v60;
        v85 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v85 >= 0.8125 && v85 < 0.875 && *(float *)&dword_140404A6C[v84 + 177347794] < 0.5 )
          dword_140404A6C[v84 + 177347794] = 1099169792;
        v86 = dword_140404A6C[177167566] * v69;
        v87 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v87 >= 0.8125 && v87 < 0.875 && *(float *)&dword_140404A6C[v86 + 177347794] < 0.5 )
          dword_140404A6C[v86 + 177347794] = 1099169792;
        v88 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v88 >= 0.75 && v88 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347794] = 1099694080;
        v89 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v89 >= 0.75 && v89 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347794] = 1099694080;
        v90 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v90 >= 0.75 && v90 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347794] = 1099694080;
        v91 = dword_140404A6C[177167566] * v59;
        v92 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v92 >= 0.875 && v92 < 0.9375 && *(float *)&dword_140404A6C[v91 + 177347794] < 0.5 )
          dword_140404A6C[v91 + 177347794] = 1100218368;
        v93 = dword_140404A6C[177167566] * v60;
        v94 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v94 >= 0.875 && v94 < 0.9375 && *(float *)&dword_140404A6C[v93 + 177347794] < 0.5 )
          dword_140404A6C[v93 + 177347794] = 1100218368;
        v95 = dword_140404A6C[177167566] * v69;
        v96 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v96 >= 0.875 && v96 < 0.9375 && *(float *)&dword_140404A6C[v95 + 177347794] < 0.5 )
          dword_140404A6C[v95 + 177347794] = 1100218368;
      }
      if ( a1 == v78 )
      {
        v97 = dword_140404A6C[177167566] * v59;
        v98 = *(float *)&dword_140404A6C[v97 + 177347795];
        if ( v98 >= 0.875 && v98 < 0.9375 && *(float *)&dword_140404A6C[v97 + 177347794] < 0.0625 )
          dword_140404A6C[v97 + 177347794] = 1099169792;
        v99 = dword_140404A6C[177167566] * v60;
        v100 = *(float *)&dword_140404A6C[v99 + 177347795];
        if ( v100 >= 0.875 && v100 < 0.9375 && *(float *)&dword_140404A6C[v99 + 177347794] < 0.0625 )
          dword_140404A6C[v99 + 177347794] = 1099169792;
        v101 = dword_140404A6C[177167566] * v69;
        v102 = *(float *)&dword_140404A6C[v101 + 177347795];
        if ( v102 >= 0.875 && v102 < 0.9375 && *(float *)&dword_140404A6C[v101 + 177347794] < 0.0625 )
          dword_140404A6C[v101 + 177347794] = 1099169792;
      }
      v2 = dword_140404A6C[177495247];
      ++v46;
      ++v48;
    }
    while ( v46 < (int)dword_140404A6C[177495247] );
    v3 = 0;
  }
  v103 = 0;
  if ( v2 > 0 )
  {
    v104 = &dword_140404A6C[178109649];
    do
    {
      ++v103;
      *v104 = *(v104 - 614401);
      v104[1] = *(v104 - 614400);
      v104[2] = *(v104 - 614399);
      v104 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v103 < (int)dword_140404A6C[177495247] );
  }
  v105 = 0;
  v106 = 2;
  if ( v2 > 0 )
  {
    v107 = 2;
    v108 = &dword_140404A6C[177495249];
    do
    {
      v108[1] = v107;
      *(v108 - 1) = v107 - 2;
      v108 += 3;
      ++v105;
      *(v108 - 3) = v107 - 1;
      v107 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v105 < (int)dword_140404A6C[177495247] );
  }
  v109 = 0;
  if ( v2 > 0 )
  {
    v110 = 2;
    v111 = &dword_140404A6C[178224338];
    v112 = &dword_140404A6C[178158802];
    do
    {
      v113 = v110 - 2;
      *(v111 - 1) = v110 - 2;
      v114 = *(v112 - 1);
      if ( v114 != -1 )
        v113 = dword_140404A6C[*v111 + 3 * v114 + 177495248];
      *v111 = v113;
      v115 = v110 - 1;
      v111[1] = v110 - 1;
      if ( *v112 != -1 )
        v115 = dword_140404A6C[v111[2] + 3 * *v112 + 177495248];
      v111[2] = v115;
      v111[3] = v110;
      v116 = v112[1];
      if ( v116 == -1 )
        v117 = v110;
      else
        v117 = dword_140404A6C[v111[4] + 3 * v116 + 177495248];
      v111[4] = v117;
      ++v109;
      v111 += 6;
      v110 += 3;
      v112 += 3;
    }
    while ( v109 < (int)dword_140404A6C[177495247] );
    v3 = 0;
  }
  v118 = 908LL * a1;
  v119 = *(void **)&dword_140404A6C[v118 + 178527463];
  dword_140404A6C[v118 + 178527461] = dword_140404A6C[177167565];
  dword_140404A6C[v118 + 178527462] = dword_140404A6C[177167566];
  free(v119);
  v120 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247] * dword_140404A6C[177167566]);
  v121 = dword_140404A6C[177495247] * dword_140404A6C[177167566];
  *(_QWORD *)&dword_140404A6C[v118 + 178527463] = (uint64)(uintptr_t)(v120);
  sub_1401FC920(v120, (     __m128i *)&dword_140404A6C[177347791], (int)(12 * v121));
  v122 = dword_140404A6C[177495247];
  v123 = *(void **)&dword_140404A6C[v118 + 178527467];
  dword_140404A6C[v118 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v118 + 178527475] = v122;
  free(v123);
  v124 = sr_path_malloc(12 * dword_140404A6C[177495247]);
  v125 = (int)dword_140404A6C[v118 + 178527465] <= 0;
  *(_QWORD *)&dword_140404A6C[v118 + 178527467] = v124;
  if ( !v125 )
  {
    v126 = 0;
    v127 = 0;
    do
    {
      ++v3;
      v126 += 12;
      v127 += 12;
      *(_DWORD *)(v126 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 12) = v106 - 2;
      *(_DWORD *)(v127 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 8) = v106 - 1;
      *(_DWORD *)(v127 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 4) = v106;
      v106 += 3;
    }
    while ( v3 < (int)dword_140404A6C[v118 + 178527465] );
  }
  free(*(void **)&dword_140404A6C[v118 + 178527469]);
  v128 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v129 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527469] = (uint64)(uintptr_t)(v128);
  sub_1401FC920(v128, (     __m128i *)&dword_140404A6C[178109649], (int)(12 * v129));
  free(*(void **)&dword_140404A6C[v118 + 178527471]);
  v130 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v131 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527471] = (uint64)(uintptr_t)(v130);
  sub_1401FC920(v130, (     __m128i *)&dword_140404A6C[177814737], (int)(12 * v131));
  free(*(void **)&dword_140404A6C[v118 + 178527473]);
  v132 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v133 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527473] = (uint64)(uintptr_t)(v132);
  sub_1401FC920(v132, (     __m128i *)&dword_140404A6C[178158801], (int)(12 * v133));
  free(*(void **)&dword_140404A6C[v118 + 178527477]);
  v134 = (__m128i *)sr_path_malloc(24 * dword_140404A6C[177495247]);
  v135 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527477] = (uint64)(uintptr_t)(v134);
  sub_1401FC920(v134, (     __m128i *)&dword_140404A6C[178224337], (int)(24 * v135));
  v136 = *(void **)&dword_140404A6C[v118 + 178527481];
  dword_140404A6C[v118 + 178527479] = dword_140404A6C[178519250];
  free(v136);
  v137 = (__m128i *)sr_path_malloc(8 * dword_140404A6C[178519250]);
  v138 = dword_140404A6C[178519250];
  *(_QWORD *)&dword_140404A6C[v118 + 178527481] = (uint64)(uintptr_t)(v137);
  sub_1401FC920(v137, (     __m128i *)&dword_140404A6C[178519251], (int)(8 * v138));
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793813], v139);
  unk_140404190(
    34962,
    (int)(12 * dword_140404A6C[v118 + 178527465] * dword_140404A6C[v118 + 178527462]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527463],
    35044);
  qword_140404170(34962, 0, v140);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793814], v141);
  unk_140404190(
    34963,
    (int)(24 * dword_140404A6C[v118 + 178527465]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527477],
    35044);
  return qword_140404170(34963, 0, v142);
}

// 140278F80: using guessed type __int128 xmmword_140278F80;
// 140278FE0: using guessed type __int128 xmmword_140278FE0;
// 140278FF0: using guessed type __int128 xmmword_140278FF0;
// 140279020: using guessed type __int128 xmmword_140279020;
// 140279040: using guessed type __int128 xmmword_140279040;
// 140279060: using guessed type __int128 xmmword_140279060;
// 140279070: using guessed type __int128 xmmword_140279070;
// 140279330: using guessed type __int128 xmmword_140279330;
// 140279350: using guessed type __int128 xmmword_140279350;
// 140279360: using guessed type __int128 xmmword_140279360;
// 140279370: using guessed type __int128 xmmword_140279370;
// 140279380: using guessed type __int128 xmmword_140279380;
// 140279390: using guessed type __int128 xmmword_140279390;
// 1402793A0: using guessed type __int128 xmmword_1402793A0;
// 1402793B0: using guessed type __int128 xmmword_1402793B0;
// 1402793C0: using guessed type __int128 xmmword_1402793C0;
// 1402793D0: using guessed type __int128 xmmword_1402793D0;
// 1402793E0: using guessed type __int128 xmmword_1402793E0;
// 1402793F0: using guessed type __int128 xmmword_1402793F0;
// 140279440: using guessed type __int128 xmmword_140279440;
// 140279450: using guessed type __int128 xmmword_140279450;
// 140279740: using guessed type __int128 xmmword_140279740;
// 140279750: using guessed type __int128 xmmword_140279750;
// 140279790: using guessed type __int128 xmmword_140279790;
// 1402797A0: using guessed type __int128 xmmword_1402797A0;
// 1402797B0: using guessed type __int128 xmmword_1402797B0;
// 1402797C0: using guessed type __int128 xmmword_1402797C0;
// 1402798D0: using guessed type __int128 xmmword_1402798D0;
// 1402798E0: using guessed type __int128 xmmword_1402798E0;
// 1402798F0: using guessed type __int128 xmmword_1402798F0;
// 140279900: using guessed type __int128 xmmword_140279900;
// 140279910: using guessed type __int128 xmmword_140279910;
// 140279920: using guessed type __int128 xmmword_140279920;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E9A680: using guessed type unsigned int;
// 192E9A688: using guessed type int[];
// 192E9A6B4: using guessed type unsigned int;
// 192E9A6B8: using guessed type unsigned int;
// 192EB1EF4: using guessed type unsigned int;
// 192EB2998: using guessed type unsigned int;
// 192EB2C48: using guessed type unsigned int;
// 192EB2C74: using guessed type unsigned int;
// 192EB2C78: using guessed type unsigned int;
// 192EB2C80: using guessed type unsigned int;
// 192EB3184: using guessed type unsigned int;
// 192EB3494: using guessed type unsigned int;
// 192ECA4B4: using guessed type unsigned int;
// 192ECAEBC: using guessed type unsigned int;
// 192ECAEC0: using guessed type unsigned int;
// 192ECAF58: using guessed type unsigned int;
// 192ECAF5C: using guessed type unsigned int;
// 192ECAF6C: using guessed type unsigned int;
// 192ECAF7C: using guessed type unsigned int;
// 192ECB208: using guessed type unsigned int;
// 192ECB234: using guessed type unsigned int;
// 192ECB238: using guessed type unsigned int;
// 192ECB240: using guessed type unsigned int;
// 192ECB744: using guessed type unsigned int;
// 192EE2A74: using guessed type unsigned int;
// 192EE347C: using guessed type unsigned int;
// 192EE3480: using guessed type unsigned int;
// 192EE3518: using guessed type unsigned int;
// 192EE351C: using guessed type unsigned int;
// 192EE352C: using guessed type unsigned int;
// 192EE3530: using guessed type unsigned int;
// 192EE37C8: using guessed type unsigned int;
// 192EE37F4: using guessed type unsigned int;
// 192EE37F8: using guessed type unsigned int;
// 192EE3800: using guessed type unsigned int;
// 192EE3D04: using guessed type unsigned int;
// 192EFB034: using guessed type unsigned int;
// 192EFBA3C: using guessed type unsigned int;
// 192EFBA40: using guessed type unsigned int;
// 192EFBAD8: using guessed type unsigned int;
// 192EFBADC: using guessed type unsigned int;
// 192EFBAEC: using guessed type unsigned int;
// 192EFBAFC: using guessed type unsigned int;
// 192EFBD80: using guessed type unsigned int;
// 192EFBD88: using guessed type unsigned int;
// 192EFBDB4: using guessed type unsigned int;
// 192EFBDB8: using guessed type unsigned int;
// 192F135F4: using guessed type unsigned int;
// 192F14098: using guessed type unsigned int;
// 192F1409C: using guessed type unsigned int;
// 192F140AC: using guessed type unsigned int;
// 192F140B0: using guessed type unsigned int;
// 192F14340: using guessed type unsigned int;
// 192F14348: using guessed type unsigned int;
// 192F14354: using guessed type unsigned int;
// 192F14374: using guessed type unsigned int;
// 192F14378: using guessed type unsigned int;
// 192F2BBB4: using guessed type unsigned int;
// 192F2C658: using guessed type unsigned int;
// 192F2C65C: using guessed type unsigned int;
// 192F2C66C: using guessed type unsigned int;
// 192F2C670: using guessed type unsigned int;
// 192F2C900: using guessed type unsigned int;
// 192F2C908: using guessed type unsigned int;
// 192F2C934: using guessed type unsigned int;
// 192F2C938: using guessed type unsigned int;
// 192F44174: using guessed type unsigned int;
// 192F44C18: using guessed type unsigned int;
// 192F44C1C: using guessed type unsigned int;
// 192F44C2C: using guessed type unsigned int;
// 192F44C3C: using guessed type unsigned int;
// 192F44EC0: using guessed type unsigned int;
// 192F44EC8: using guessed type unsigned int;
// 192F44ED4: using guessed type unsigned int;
// 192F44EF4: using guessed type unsigned int;
// 192F44EF8: using guessed type unsigned int;
// 192F5C734: using guessed type unsigned int;
// 192F5D1D8: using guessed type unsigned int;
// 192F5D1DC: using guessed type unsigned int;
// 192F5D1EC: using guessed type unsigned int;
// 192F5D1FC: using guessed type unsigned int;
// 192F5D20C: using guessed type unsigned int;
// 192F5D21C: using guessed type unsigned int;
// 192F5D220: using guessed type unsigned int;
// 192F5D480: using guessed type unsigned int;
// 192F5D488: using guessed type unsigned int;
// 192F5D4B4: using guessed type unsigned int;
// 192F5D4B8: using guessed type unsigned int;
// 192F74CF4: using guessed type unsigned int;
// 192F75798: using guessed type unsigned int;
// 192F7579C: using guessed type unsigned int;
// 192F757AC: using guessed type unsigned int;
// 192F757BC: using guessed type unsigned int;
// 192F757CC: using guessed type unsigned int;
// 192F757DC: using guessed type unsigned int;
// 192F757E0: using guessed type unsigned int;
// 192F75A40: using guessed type unsigned int;
// 192F75A48: using guessed type unsigned int;
// 192F75A54: using guessed type unsigned int;
// 192F75A74: using guessed type unsigned int;
// 192F75A78: using guessed type unsigned int;
// 192F8D2B4: using guessed type unsigned int;
// 192F8DD58: using guessed type unsigned int;
// 192F8DD5C: using guessed type unsigned int;
// 192F8DD6C: using guessed type unsigned int;
// 192F8DD7C: using guessed type unsigned int;
// 192F8DD8C: using guessed type unsigned int;
// 192F8DD9C: using guessed type unsigned int;
// 192F8DDA0: using guessed type unsigned int;
// 192F8E008: using guessed type unsigned int;
// 192F8E034: using guessed type unsigned int;
// 192F8E038: using guessed type unsigned int;
// 192F8E040: using guessed type unsigned int;
// 192F8E544: using guessed type unsigned int;
// 192FA5874: using guessed type unsigned int;
// 192FA627C: using guessed type unsigned int;
// 192FA6280: using guessed type unsigned int;
// 192FA6318: using guessed type unsigned int;
// 192FA631C: using guessed type unsigned int;
// 192FA632C: using guessed type unsigned int;
// 192FA6330: using guessed type unsigned int;
// 192FA65C8: using guessed type unsigned int;
// 192FA65D4: using guessed type unsigned int;
// 192FA65F4: using guessed type unsigned int;
// 192FA65F8: using guessed type unsigned int;
// 192FA6600: using guessed type unsigned int;
// 192FA6B04: using guessed type unsigned int;
// 192FBE83C: using guessed type unsigned int;
// 192FBE840: using guessed type unsigned int;
// 192FBE8D8: using guessed type unsigned int;
// 193007CC0: using guessed type unsigned int;
// 193007CC8: using guessed type unsigned int;
// 193007CF4: using guessed type unsigned int;
// 193007CF8: using guessed type unsigned int;
// 19301F534: using guessed type unsigned int;
// 19301FFD8: using guessed type unsigned int;
// 19301FFDC: using guessed type unsigned int;
// 19301FFEC: using guessed type unsigned int;
// 19301FFFC: using guessed type unsigned int;
// 193020280: using guessed type unsigned int;
// 193020288: using guessed type unsigned int;
// 1930202B4: using guessed type unsigned int;
// 1930202B8: using guessed type unsigned int;
// 193037AF4: using guessed type unsigned int;
// 193038598: using guessed type unsigned int;
// 19303859C: using guessed type unsigned int;
// 1930385AC: using guessed type unsigned int;
// 1930385B0: using guessed type unsigned int;

//----- (000000014014A8E0) ----------------------------------------------------
__int64 sub_14014A8E0()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx

  strcpy((char *)&dword_140404A6C[347007050], "Helicopter");
  dword_140404A6C[347007059] = 1148846080;
  dword_140404A6C[347007047] = 2;
  dword_140404A6C[347007058] = 1000000;
  dword_140404A6C[347007045] = 1;
  asset_load_vehicle_sbv_candidate(12, "park5");
  dword_140404A6C[347031139] = 0;
  dword_140404A6C[335742911] = 0;
  dword_140404A6C[335741246] = 0;
  sub_140103270(12, "data/helitest.tst");
  sub_14014D6D0(12, 0.375, 12.0, 0);
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031820] = -1094713344;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031822] = -1084227584;
  v0 = (int)dword_140404A6C[347031819]++;
  dword_140404A6C[3 * v0 + 347031823] = 1052770304;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031822] = -1084227584;
  v1 = (int)dword_140404A6C[347031819]++;
  dword_140404A6C[3 * v1 + 347031823] = -1094713344;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031822] = 1061158912;
  v2 = (int)dword_140404A6C[347031819]++;
  dword_140404A6C[3 * v2 + 347031823] = 1052770304;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819]++ + 347031822] = 1061158912;
  return sub_14014AAE0(12);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1904C4F64: using guessed type unsigned int;
// 1904C6968: using guessed type unsigned int;
// 192FBEB80: using guessed type unsigned int;
// 192FBEB88: using guessed type unsigned int;
// 192FBEBB4: using guessed type unsigned int;
// 192FBEBB8: using guessed type unsigned int;
// 192FD63F8: using guessed type unsigned int;
// 192FD6E98: using guessed type unsigned int;

//----- (000000014014AAE0) ----------------------------------------------------
__int64            sub_14014AAE0(int a1)
{
  unsigned int v1; // edi
  float v2; // xmm7_4
  float v3; // xmm0_4
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rcx
  float *v8; // rax
  float v9; // xmm1_4
  float *v10; // rax
  int v11; // ecx
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  __int64 v16; // rcx
  float *v17; // rax
  signed int v18; // ecx
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float *v23; // rax
  __int64 v24; // r11
  float v25; // xmm8_4
  float v26; // xmm9_4
  float v27; // xmm10_4
  __int64 v28; // rcx
  float *v29; // rax
  __int64 v30; // rcx
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // xmm10_4
  float *v36; // rax
  float v37; // xmm1_4
  float v38; // xmm3_4
  __int64 v39; // rdx
  unsigned int *v40; // rcx
  unsigned int *v41; // r8
  unsigned int v42; // eax
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm8_4
  float v47; // xmm9_4
  float v48; // xmm10_4
  unsigned int *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  float v53; // xmm8_4
  unsigned int *v54; // r9
  unsigned int *v55; // r8
  __int64 v56; // r10
  float v57; // xmm10_4
  __int64 v58; // rax
  __int64 v59; // rdx
  float v60; // xmm3_4
  float v61; // xmm2_4
  int v62; // edx
  float v63; // xmm2_4
  float v64; // xmm3_4
  __int64 v65; // rcx
  float *v66; // rax
  __int64 result; // rax
  signed int v68; // r8d
  float v69; // xmm11_4
  float v70; // xmm7_4
  float v71; // xmm2_4
  float v72; // xmm3_4
  float *v73; // rdx
  __int64 v74; // rax
  float v75; // xmm0_4
  signed int v76; // r8d
  unsigned int *v77; // rdx
  float v78; // [rsp+20h] [rbp-68h] BYREF
  float v79; // [rsp+24h] [rbp-64h]
  float v80; // [rsp+28h] [rbp-60h]

  v1 = 0;
  v2 = 0.0;
  v3 = 0.0;
  v5 = 24944LL * a1;
  v6 = dword_140404A6C[v5 + 346707733];
  if ( v6 <= 0 )
  {
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
  }
  else
  {
    v7 = (unsigned int)v6;
    v8 = (float *)&dword_140404A6C[v5 + 346707738];
    do
    {
      v3 = v3 + *v8;
      v8 += 5;
      --v7;
    }
    while ( v7 );
    v9 = 1.0 / v3;
    v10 = (float *)&dword_140404A6C[v5 + 346707738];
    v11 = 0;
    do
    {
      ++v11;
      v12 = v9 * *v10;
      v10 += 5;
      *(v10 - 5) = v12;
      v6 = dword_140404A6C[v5 + 346707733];
    }
    while ( v11 < v6 );
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
    if ( v6 > 0 )
    {
      v16 = (unsigned int)v6;
      v17 = (float *)&dword_140404A6C[v5 + 346707737];
      do
      {
        v13 = v13 + *(v17 - 2);
        v14 = v14 + *(v17 - 1);
        v15 = v15 + *v17;
        v17 += 5;
        --v16;
      }
      while ( v16 );
    }
  }
  v18 = 0;
  v19 = 1.0 / (float)v6;
  v20 = v13 * v19;
  v21 = v14 * v19;
  v22 = v15 * v19;
  *(float *)&dword_140404A6C[v5 + 346708247] = v20;
  *(float *)&dword_140404A6C[v5 + 346708248] = v21;
  *(float *)&dword_140404A6C[v5 + 346708249] = v22;
  if ( (int)dword_140404A6C[v5 + 346731811] > 0 )
  {
    v23 = (float *)&dword_140404A6C[v5 + 346731822];
    do
    {
      ++v18;
      *(v23 - 2) = *(v23 - 2) - v20;
      *(v23 - 1) = *(v23 - 1) - v21;
      *v23 = *v23 - v22;
      v23 += 20;
    }
    while ( v18 < (int)dword_140404A6C[v5 + 346731811] );
  }
  v24 = dword_140404A6C[v5 + 346708054];
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  if ( (int)v24 > 0 )
  {
    v28 = (unsigned int)v24;
    v29 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      v25 = v25 + *(v29 - 2);
      v26 = v26 + *(v29 - 1);
      v27 = v27 + *v29;
      v29 += 5;
      --v28;
    }
    while ( v28 );
  }
  v30 = dword_140404A6C[v5 + 346707733];
  v31 = 0.0;
  dword_140404A6C[v5 + 346707732] = 0;
  v32 = 1.0 / (float)(int)v24;
  v33 = v25 * v32;
  v34 = v26 * v32;
  v35 = v27 * v32;
  if ( (int)v30 > 0 )
  {
    v36 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      v37 = fsqrt(
              (float)((float)((float)(v34 - *(v36 - 1)) * (float)(v34 - *(v36 - 1)))
                    + (float)((float)(v33 - *(v36 - 2)) * (float)(v33 - *(v36 - 2))))
            + (float)((float)(v35 - *v36) * (float)(v35 - *v36)));
      if ( v31 < v37 )
      {
        *(float *)&dword_140404A6C[v5 + 346707732] = v37;
        v31 = v37;
      }
      v36 += 5;
      --v30;
    }
    while ( v30 );
  }
  v38 = v31 * 1.125;
  *(float *)&dword_140404A6C[v5 + 346707732] = v38;
  if ( dword_140404A6C[v5 + 346707717] )
  {
    v46 = 0.0;
    v47 = 0.0;
    v48 = 0.0;
    if ( (int)v24 <= 0 )
    {
      v53 = 0.0;
      v34 = 0.0;
      v57 = 0.0;
    }
    else
    {
      v49 = &dword_140404A6C[v5 + 346708055];
      v50 = v24;
      do
      {
        v51 = (int)*v49++;
        v52 = v5 * 4 + 20 * v51;
        v46 = v46 + *(float *)((char *)&dword_140404A6C[346707735] + v52);
        v47 = v47 + *(float *)((char *)&dword_140404A6C[346707736] + v52);
        v48 = v48 + *(float *)((char *)&dword_140404A6C[346707737] + v52);
        --v50;
      }
      while ( v50 );
      v53 = v46 * v32;
      v54 = &dword_140404A6C[v5 + 346708055];
      v55 = &dword_140404A6C[346706183];
      v56 = v24;
      v34 = v47 * v32;
      v57 = v48 * v32;
      do
      {
        v58 = (int)*v54;
        v55 += 3;
        ++v54;
        v59 = v5 * 4 + 20 * v58;
        *(v55 - 5) = *(unsigned int *)((char *)&dword_140404A6C[346707735] + v59);
        *(v55 - 4) = *(unsigned int *)((char *)&dword_140404A6C[346707736] + v59);
        *(v55 - 3) = *(unsigned int *)((char *)&dword_140404A6C[346707737] + v59);
        --v56;
      }
      while ( v56 );
    }
    v60 = v38 * 0.25;
    v78 = (float)(*(float *)&dword_1402F6198 * v60) + v53;
    v79 = (float)(*(float *)&dword_1402F619C * v60) + v34;
    v80 = (float)(*(float *)&dword_1402F61A0 * v60) + v57;
    sub_14002E730((__int64)&dword_140404A6C[v5 + 346708183], v24, (__int64)&dword_140404A6C[346706181], &v78);
    v61 = *(float *)&dword_140404A6C[v5 + 346707732] * 0.25;
    v45 = v61 * *(float *)&dword_1402F617C;
    v78 = (float)(v61 * *(float *)&dword_1402F6178) + v53;
    v80 = (float)(v61 * *(float *)&dword_1402F6180) + v57;
  }
  else
  {
    if ( (int)v24 > 0 )
    {
      v39 = v24;
      v40 = &dword_140404A6C[v5 + 346707737];
      v41 = &dword_140404A6C[346706183];
      do
      {
        v42 = *(v40 - 2);
        v40 += 5;
        *(v41 - 2) = v42;
        v41 += 3;
        *(v41 - 4) = *(v40 - 6);
        *(v41 - 3) = *(v40 - 5);
        --v39;
      }
      while ( v39 );
    }
    v43 = v38 * 0.25;
    v78 = (float)(*(float *)&dword_1402F6198 * v43) + v33;
    v79 = (float)(*(float *)&dword_1402F619C * v43) + v34;
    v80 = (float)(*(float *)&dword_1402F61A0 * v43) + v35;
    sub_14002E730((__int64)&dword_140404A6C[v5 + 346708183], v24, (__int64)&dword_140404A6C[346706181], &v78);
    v44 = *(float *)&dword_140404A6C[v5 + 346707732] * 0.25;
    v45 = *(float *)&dword_1402F617C * v44;
    v78 = (float)(*(float *)&dword_1402F6178 * v44) + v33;
    v80 = (float)(*(float *)&dword_1402F6180 * v44) + v35;
  }
  v79 = v45 + v34;
  sub_14002E730(
    (__int64)&dword_140404A6C[v5 + 346708119],
    dword_140404A6C[v5 + 346708054],
    (__int64)&dword_140404A6C[346706181],
    &v78);
  v62 = dword_140404A6C[v5 + 346708054];
  v63 = 0.0;
  v64 = 0.0;
  if ( v62 > 0 )
  {
    v65 = (unsigned int)v62;
    v66 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      v2 = v2 + *(v66 - 2);
      v63 = v63 + *(v66 - 1);
      v64 = v64 + *v66;
      v66 += 5;
      --v65;
    }
    while ( v65 );
  }
  result = 0;
  v68 = 0;
  dword_140404A6C[v5 + 346715422] = 0;
  v69 = 1.0 / (float)v62;
  v70 = v2 * v69;
  v71 = v63 * v69;
  v72 = v64 * v69;
  if ( (int)dword_140404A6C[v5 + 346707733] > 0 )
  {
    v73 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      ++v68;
      v74 = v5 * 4 + 12LL * (int)result;
      *(float *)((char *)&dword_140404A6C[346715423] + v74) = *(v73 - 2) - v70;
      *(float *)((char *)&dword_140404A6C[346715424] + v74) = *(v73 - 1) - v71;
      v75 = *v73;
      v73 += 5;
      *(float *)((char *)&dword_140404A6C[346715425] + v74) = v75 - v72;
      result = dword_140404A6C[v5 + 346715422] + 1;
      dword_140404A6C[v5 + 346715422] = result;
    }
    while ( v68 < (int)dword_140404A6C[v5 + 346707733] );
  }
  v76 = 0;
  dword_140404A6C[v5 + 346718495] = 0;
  if ( (int)dword_140404A6C[v5 + 346709019] > 0 )
  {
    v77 = &dword_140404A6C[v5 + 346709020];
    do
    {
      if ( v77[15] != 1 )
      {
        dword_140404A6C[13 * (int)v1 + 346718496 + v5] = *v77;
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718497 + v5] = v77[1];
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718498 + v5] = v77[2];
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718499 + v5] = v77[3];
        result = v77[4];
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718500 + v5] = result;
        v1 = dword_140404A6C[v5 + 346718495] + 1;
        dword_140404A6C[v5 + 346718495] = v1;
      }
      ++v76;
      v77 += 16;
    }
    while ( v76 < (int)dword_140404A6C[v5 + 346709019] );
  }
  if ( !a1 )
  {
    dword_140404A6C[13 * (int)v1 + 346718496 + v5] = 4;
    dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718497 + v5] = 10;
    dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718498 + v5] = 11;
    dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718499 + v5] = 13;
    result = (int)dword_140404A6C[v5 + 346718495];
    dword_140404A6C[13 * result + 346718500 + v5] = 12;
    ++dword_140404A6C[v5 + 346718495];
  }
  return result;
}

// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6198: using guessed type int dword_1402F6198;
// 1402F619C: using guessed type int dword_1402F619C;
// 1402F61A0: using guessed type int dword_1402F61A0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014B210) ----------------------------------------------------
__int64 sub_14014B210()
{
  strcpy((char *)&dword_140404A6C[347031994], "Train");
  dword_140404A6C[347032003] = 1218199552;
  dword_140404A6C[347031989] = 1;
  dword_140404A6C[347032002] = 1000;
  dword_140404A6C[347031991] = 0;
  asset_load_vehicle_sbv_candidate(13, "train04");
  return sub_14014E9C0(13, 0.375, 12.0, 0);
}

// 140301DB0: using guessed type char *off_140301DB0[3];
// 140404288: using guessed type __int64 (__fastcall *unk_140404288)(_QWORD, _QWORD);
// 1404042D0: using guessed type __int64 (__fastcall *unk_1404042D0)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404330: using guessed type __int64 (__fastcall *unk_140404330)(_QWORD, _QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404340: using guessed type __int64 (__fastcall *unk_140404340)(_QWORD, _QWORD, _QWORD);
// 140404538: using guessed type __int64 (__fastcall *unk_140404538)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014C390) ----------------------------------------------------
__int64 sub_14014C390()
{
  unsigned int v0; // ebx
  signed int v1; // eax
  signed int v2; // r8d
  unsigned int *v3; // rdx
  int v4; // edx
  unsigned int *v5; // r15
  int v6; // eax
  __int64 v7; // rax
  signed int v8; // r14d
  __int64 v9; // r12
  bool v10; // cc
  signed int v11; // ebp
  __int64 v12; // r13
  signed int *v13; // rdi
  signed int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // rcx
       char *v17; // r8
  unsigned int *v18; // rdx
  char v19; // al
  __int64 v20; // r9
       char *v21; // r8
  unsigned int *v22; // rdx
  char v23; // al
  signed int v24; // ebp
  unsigned int *v25; // r14
  unsigned int v26; // ebx
  __int64 v27; // rdi
  unsigned int *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v33; // [rsp+50h] [rbp+8h]

  v0 = 0;
  dword_140404A6C[487149972] = 0;
  if ( dword_140404A6C[283831312] != 8 )
  {
    if ( dword_140404A6C[283831312] != 4 )
      goto LABEL_37;
    v4 = 0;
    v33 = 0;
    if ( (int)dword_140404A6C[225641186] <= 0 )
      goto LABEL_37;
    v5 = &dword_140404A6C[225654181];
    while ( 1 )
    {
      v6 = *(v5 - 12978);
      if ( v6 != 1 )
        goto LABEL_24;
      v7 = (int)*(v5 - 12856);
      v8 = 0;
      v9 = 5873 * v7;
      v10 = (int)*v5 <= 0;
      v11 = 0;
      dword_140404A6C[5873 * v7 + 283831511] = 0;
      if ( !v10 )
        break;
LABEL_36:
      ++v4;
      v5 += 14019;
      v33 = v4;
      if ( v4 >= (int)dword_140404A6C[225641186] )
        goto LABEL_37;
    }
    v12 = 5873 * v7;
    v13 = (signed int *)(v5 + 4);
    do
    {
      v14 = sub_140050EF0(0x2710u);
      v15 = 2570LL * v14;
      *v13 = v14;
      v16 = (int)dword_140404A6C[v15 + 275754072];
      if ( (int)v16 < 256 )
      {
        dword_140404A6C[6 * v16 + 275754073 + v15] = 0;
        v17 = "MISSION.EXE";
        v18 = &dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072] + 275754074 + v15];
        do
        {
          v19 = *v17++;
          *(_BYTE *)v18 = v19;
          v18 = (unsigned int *)((char *)v18 + 1);
        }
        while ( v19 );
        dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072]++ + 275754078 + v15] = 0;
        LODWORD(v16) = dword_140404A6C[v15 + 275754072];
      }
      v20 = 2570LL * v14;
      if ( (int)v16 < 256 )
      {
        v21 = "DECRYPT.EXE";
        dword_140404A6C[6 * (int)v16 + 275754073 + v20] = 0;
        v22 = &dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072] + 275754074 + v20];
        do
        {
          v23 = *v21++;
          *(_BYTE *)v22 = v23;
          v22 = (unsigned int *)((char *)v22 + 1);
        }
        while ( v23 );
        dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072]++ + 275754078 + v20] = 0;
      }
      ++v11;
      v13 += 4;
      dword_140404A6C[v12 + 283831512 + v8] = v14;
      v8 = dword_140404A6C[v9 + 283831511] + 1;
      dword_140404A6C[v9 + 283831511] = v8;
    }
    while ( v11 < (int)*v5 );
    v6 = *(v5 - 12978);
    v0 = dword_140404A6C[487149972];
    v4 = v33;
LABEL_24:
    if ( v6 == 4 )
    {
      v24 = 0;
      *(v5 - 12855) = v0;
      dword_140404A6C[259 * v0 + 487149973] = v4;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
      v10 = (int)*v5 <= 0;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
      if ( !v10 )
      {
        v25 = v5 + 4;
        do
        {
          v26 = 0;
          v27 = 0;
          v28 = &dword_140404A6C[275753045];
          while ( *v28 )
          {
            ++v26;
            ++v27;
            v28 += 2570;
            if ( (__int64)v28 >= (__int64)&dword_140404A6C[278384725] )
            {
              v26 = -1;
              goto LABEL_33;
            }
          }
          if ( v26 != -1 )
          {
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[2570 * v26 + 275753045]), 0, 0x2828u);
            v29 = 2570 * v27;
            dword_140404A6C[v29 + 275753045] = 1;
            dword_140404A6C[v29 + 275753046] = 10000;
          }
LABEL_33:
          v30 = (int)dword_140404A6C[487149972];
          v31 = 259LL * (int)dword_140404A6C[487149972];
          *v25 = v26;
          ++v24;
          v25 += 4;
          dword_140404A6C[259 * v30 + 487149976 + (int)dword_140404A6C[v31 + 487149975]] = v26;
          ++dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975];
        }
        while ( v24 < (int)*v5 );
        v4 = v33;
      }
      v0 = ++dword_140404A6C[487149972];
    }
    goto LABEL_36;
  }
  v1 = dword_140404A6C[225641186];
  v2 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v3 = &dword_140404A6C[225641326];
    do
    {
      if ( *(v3 - 123) == 4 )
      {
        *v3 = v0;
        dword_140404A6C[259 * v0 + 487149973] = v2;
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
        v1 = dword_140404A6C[225641186];
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
        v0 = ++dword_140404A6C[487149972];
      }
      ++v2;
      v3 += 14019;
    }
    while ( v2 < v1 );
  }
LABEL_37:
  dword_140404A6C[487148756] = 1154924544;
  dword_140404A6C[487148758] = 1151188992;
  dword_140404A6C[487148775] = 1155416064;
  dword_140404A6C[487148757] = 1110966272;
  dword_140404A6C[487148777] = 1148944384;
  strcpy((char *)&dword_140404A6C[487148759], "Hondo Park");
  dword_140404A6C[487148794] = 1152892928;
  dword_140404A6C[487148776] = 1106247680;
  dword_140404A6C[487148796] = 1153089536;
  strcpy((char *)&dword_140404A6C[487148778], "Rio Granary");
  dword_140404A6C[487148813] = 1151352832;
  dword_140404A6C[487148795] = 1112014848;
  dword_140404A6C[487148815] = 1153417216;
  *(_OWORD *)&dword_140404A6C[487148797] = xmmword_1402772B8;
  dword_140404A6C[487148814] = 1115160576;
  dword_140404A6C[487148832] = 1154564096;
  strcpy((char *)&dword_140404A6C[487148816], "Park above the Kamel Building");
  dword_140404A6C[487148834] = 1153220608;
  dword_140404A6C[487148833] = 1115947008;
  dword_140404A6C[487148851] = 1151877120;
  strcpy((char *)&dword_140404A6C[487148835], "Bobson Dugnutt Museum");
  strcpy((char *)&dword_140404A6C[487148854], "The Mall");
  dword_140404A6C[487148853] = 1151483904;
  dword_140404A6C[487148870] = 1154007040;
  dword_140404A6C[487148871] = 1104150528;
  dword_140404A6C[487148872] = 1150402560;
  strcpy((char *)&dword_140404A6C[487148873], "Gas Station");
  dword_140404A6C[487148889] = 1153515520;
  dword_140404A6C[487148891] = 1151320064;
  dword_140404A6C[487148852] = 1108869120;
  dword_140404A6C[487148890] = 1108869120;
  strcpy((char *)&dword_140404A6C[487148892], "Red Cube Park");
  dword_140404A6C[487148755] = 8;
  return 107;
}

// 1402772B8: using guessed type __int128 xmmword_1402772B8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760C55F4: using guessed type unsigned int;
// 1B4657DB8: using guessed type unsigned int;
// 1B4657DBC: using guessed type unsigned int;
// 1B4657DC0: using guessed type unsigned int;
// 1B4657DC4: using guessed type unsigned int;
// 1B4657E08: using guessed type unsigned int;
// 1B4657E0C: using guessed type unsigned int;
// 1B4657E10: using guessed type unsigned int;
// 1B4657E54: using guessed type unsigned int;
// 1B4657E58: using guessed type unsigned int;
// 1B4657E5C: using guessed type unsigned int;
// 1B4657E60: using guessed type unsigned int;
// 1B4657EA0: using guessed type unsigned int;
// 1B4657EA4: using guessed type unsigned int;
// 1B4657EA8: using guessed type unsigned int;
// 1B4657EEC: using guessed type unsigned int;
// 1B4657EF0: using guessed type unsigned int;
// 1B4657EF4: using guessed type unsigned int;
// 1B4657F38: using guessed type unsigned int;
// 1B4657F3C: using guessed type unsigned int;
// 1B4657F40: using guessed type unsigned int;
// 1B4657F84: using guessed type unsigned int;
// 1B4657F88: using guessed type unsigned int;
// 1B4657F8C: using guessed type unsigned int;
// 1B4657FD0: using guessed type unsigned int;
// 1B4657FD4: using guessed type unsigned int;
// 1B4657FD8: using guessed type unsigned int;
// 1B46590BC: using guessed type unsigned int;

//----- (000000014014CA70) ----------------------------------------------------
__int64 sub_14014CA70()
{
  unsigned int *v0; // rbx
  void *v1; // rcx
  _WORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax

  v0 = &dword_140404A6C[18182167];
  do
  {
    v1 = *((void **)v0 - 2);
    *(v0 - 6) = 1;
    *v0 = 1086324736;
    *(v0 - 5) = 0x40000;
    free(v1);
    v2 = (_WORD *)sr_path_malloc(0x100000);
    *((_QWORD *)v0 - 2) = (uint64)(uintptr_t)(v2);
    sub_1401FCD30((void *)(uintptr_t)(v2), 0, 0x100000u);
    v3 = 0;
    v4 = 384;
    *((_QWORD *)v0 - 1) = 0;
    do
    {
      *(_DWORD *)(*((_QWORD *)v0 - 2) + 4 * v3) = 0;
      v5 = *((_QWORD *)v0 - 2);
      v6 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v6;
      *(_DWORD *)(v5 + 4 * v6) = 0;
      v7 = *((_QWORD *)v0 - 2);
      v8 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v8;
      *(_DWORD *)(v7 + 4 * v8) = 0;
      v9 = *((_QWORD *)v0 - 2);
      v10 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v10;
      *(_DWORD *)(v9 + 4 * v10) = 0;
      v11 = *((_QWORD *)v0 - 2);
      v12 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v12;
      *(_DWORD *)(v11 + 4 * v12) = 0;
      v13 = *((_QWORD *)v0 - 2);
      v14 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v14;
      *(_DWORD *)(v13 + 4 * v14) = 0;
      v15 = *((_QWORD *)v0 - 2);
      v16 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v16;
      *(_DWORD *)(v15 + 4 * v16) = 0;
      v17 = *((_QWORD *)v0 - 2);
      v18 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v18;
      *(_DWORD *)(v17 + 4 * v18) = 0;
      v19 = *((_QWORD *)v0 - 2);
      v20 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v20;
      *(_DWORD *)(v19 + 4 * v20) = 0;
      v21 = *((_QWORD *)v0 - 2);
      v22 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v22;
      *(_DWORD *)(v21 + 4 * v22) = 0;
      result = (*(v0 - 2) + 1) & 0x3FFFF;
      v3 = (unsigned int)result;
      *(v0 - 2) = result;
      --v4;
    }
    while ( v4 );
    v0 += 8;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[18182231] );
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014CBE0) ----------------------------------------------------
void sub_14014CBE0()
{
  __int64 v0; // rbp
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  unsigned int *v5; // rbx
  unsigned int *v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
       __m128i *v10; // rdx
  signed int v11; // esi
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r11d
  __int64 v30; // r8
  __int64 v31; // rax
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // r11d
  __int64 v45; // r8
  __int64 v46; // rax
  float v47; // xmm3_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8

  v0 = 6;
  dword_140404A6C[159842279] = 6;
  dword_140404A6C[159842283] = 8;
  free(*(void **)&dword_140404A6C[159842281]);
  *(_QWORD *)&dword_140404A6C[159842281] = sr_path_malloc(12 * dword_140404A6C[159842279]);
  free(*(void **)&dword_140404A6C[159842285]);
  *(_QWORD *)&dword_140404A6C[159842285] = sr_path_malloc(12 * dword_140404A6C[159842283]);
  **(_DWORD **)&dword_140404A6C[159842281] = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 4LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 16LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 20LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 24LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 40LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 44LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 48LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 56LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 60LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 64LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 68LL) = 0;
  **(_DWORD **)&dword_140404A6C[159842285] = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 4LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 8LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 16LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 20LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 24LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 28LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 32LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 40LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 44LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 48LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 52LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 56LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 60LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 64LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 68LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 72LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 76LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 80LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 84LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 88LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 92LL) = 5;
  unk_140404180(1, &dword_140404A6C[159842277]);
  unk_140404180(1, &dword_140404A6C[159842278]);
  qword_140404170(34962, dword_140404A6C[159842277], v1);
  unk_140404190(34962, 12 * dword_140404A6C[159842279], *(_QWORD *)&dword_140404A6C[159842281], 35044);
  qword_140404170(34962, 0, v2);
  qword_140404170(34963, dword_140404A6C[159842278], v3);
  unk_140404190(34963, 12 * dword_140404A6C[159842283], *(_QWORD *)&dword_140404A6C[159842285], 35044);
  qword_140404170(34963, 0, v4);
  v5 = &dword_140404A6C[159842289];
  v6 = &dword_140404A6C[159842288];
  do
  {
    free(*((void **)v5 + 1));
    v7 = sr_path_malloc((int)(12 * (*(v5 - 10) + 3 * *(v5 - 6))));
    v8 = *((void **)v5 + 3);
    *((_QWORD *)v5 + 1) = v7;
    free(v8);
    v9 = sr_path_malloc((int)(48 * *(v5 - 6)));
    v10 = *((     __m128i **)v5 - 4);
    *((_QWORD *)v5 + 3) = v9;
    LODWORD(v9) = *(v5 - 10);
    *v5 = v9;
    sub_1401FC920(*((__m128i **)v5 + 1), v10, 12 * (int)v9);
    v11 = 0;
    v5[4] = 0;
    if ( (int)*(v5 - 6) > 0 )
    {
      v12 = 0;
      do
      {
        v13 = *((_QWORD *)v5 - 4);
        v14 = *((_QWORD *)v5 - 2);
        v15 = 3 * *(_DWORD *)(v12 + v14);
        v16 = 3 * *(_DWORD *)(v12 + v14 + 4);
        v17 = *(float *)(v13 + 4 * v16) + *(float *)(v13 + 4 * v15);
        v18 = *(float *)(v13 + 4 * v16 + 4) + *(float *)(v13 + 4 * v15 + 4);
        v19 = *(float *)(v13 + 4 * v16 + 8) + *(float *)(v13 + 4 * v15 + 8);
        v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
        if ( v20 == 0.0 )
        {
          v22 = 0.0;
          v23 = 0.0;
          v24 = 0.0;
        }
        else
        {
          v21 = 1.0 / v20;
          v22 = (float)(1.0 / v20) * v17;
          v23 = v21 * v18;
          v24 = v21 * v19;
        }
        v25 = *((_QWORD *)v5 + 1);
        v26 = (int)(3 * *v5);
        *(float *)(v25 + 4 * v26) = v22;
        *(float *)(v25 + 4 * v26 + 4) = v23;
        *(float *)(v25 + 4 * v26 + 8) = v24;
        v27 = *((_QWORD *)v5 - 4);
        v28 = *((_QWORD *)v5 - 2);
        v29 = *v5 + 1;
        *v5 = v29;
        v30 = 3 * *(_DWORD *)(v12 + v28 + 4);
        v31 = 3 * *(_DWORD *)(v12 + v28 + 8);
        v32 = *(float *)(v27 + 4 * v31 + 4) + *(float *)(v27 + 4 * v30 + 4);
        v33 = *(float *)(v27 + 4 * v30) + *(float *)(v27 + 4 * v31);
        v34 = *(float *)(v27 + 4 * v31 + 8) + *(float *)(v27 + 4 * v30 + 8);
        v35 = fsqrt((float)((float)(v32 * v32) + (float)(v33 * v33)) + (float)(v34 * v34));
        if ( v35 == 0.0 )
        {
          v37 = 0.0;
          v38 = 0.0;
          v39 = 0.0;
        }
        else
        {
          v36 = 1.0 / v35;
          v37 = (float)(1.0 / v35) * v33;
          v38 = v36 * v32;
          v39 = v36 * v34;
        }
        v40 = 3 * v29;
        v41 = *((_QWORD *)v5 + 1);
        *(float *)(v41 + 4 * v40) = v37;
        *(float *)(v41 + 4 * v40 + 4) = v38;
        *(float *)(v41 + 4 * v40 + 8) = v39;
        v42 = *((_QWORD *)v5 - 4);
        v43 = *((_QWORD *)v5 - 2);
        v44 = *v5 + 1;
        *v5 = v44;
        v45 = 3 * *(_DWORD *)(v12 + v43 + 8);
        v46 = 3 * *(_DWORD *)(v12 + v43);
        v47 = *(float *)(v42 + 4 * v46) + *(float *)(v42 + 4 * v45);
        v48 = *(float *)(v42 + 4 * v46 + 4) + *(float *)(v42 + 4 * v45 + 4);
        v49 = *(float *)(v42 + 4 * v46 + 8) + *(float *)(v42 + 4 * v45 + 8);
        v50 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49));
        if ( v50 == 0.0 )
        {
          v52 = 0.0;
          v53 = 0.0;
          v54 = 0.0;
        }
        else
        {
          v51 = 1.0 / v50;
          v52 = (float)(1.0 / v50) * v47;
          v53 = v51 * v48;
          v54 = v51 * v49;
        }
        v55 = 3 * v44;
        v56 = *((_QWORD *)v5 + 1);
        *(float *)(v56 + 4 * v55) = v52;
        *(float *)(v56 + 4 * v55 + 4) = v53;
        *(float *)(v56 + 4 * v55 + 8) = v54;
        ++*v5;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2));
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 3;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 2;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2) + 8);
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 3;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 2;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 3;
        ++v11;
        LODWORD(v56) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2) + 4);
        v12 += 12;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = v56;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 2;
      }
      while ( v11 < (int)*(v5 - 6) );
    }
    unk_140404180(1, v6 - 1);
    unk_140404180(1, v6);
    qword_140404170(34962, *(v5 - 2), v57);
    unk_140404190(34962, (int)(12 * *v5), *((_QWORD *)v5 + 1), 35044);
    qword_140404170(34962, 0, v58);
    qword_140404170(34963, *(v5 - 1), v59);
    unk_140404190(34963, (int)(12 * v5[4]), *((_QWORD *)v5 + 3), 35044);
    qword_140404170(34963, 0, v60);
    v6 += 10;
    v5 += 10;
    --v0;
  }
  while ( v0 );
}

// 14014CEAF: variable 'v1' is possibly undefined
// 14014CEE2: variable 'v2' is possibly undefined
// 14014CEF3: variable 'v3' is possibly undefined
// 14014CF26: variable 'v4' is possibly undefined
// 14014D33B: variable 'v57' is possibly undefined
// 14014D367: variable 'v58' is possibly undefined
// 14014D375: variable 'v59' is possibly undefined
// 14014D3A2: variable 'v60' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1665C4A08: using guessed type unsigned int;
// 1665C4A18: using guessed type unsigned int;

//----- (000000014014D3E0) ----------------------------------------------------
void            sub_14014D3E0(int a1, int a2)
{
  __int64 v2; // rsi
  int v4; // eax
  int v5; // ebx
  unsigned int *v6; // rdi
  signed int v7; // edi
  void **v8; // rbx

  v2 = 44LL * a1;
  qword_140404050(3553, dword_140404A6C[v2 + 284024944]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10242,
    dword_140404A6C[v2 + 284024938]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10243,
    dword_140404A6C[v2 + 284024939]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10240,
    dword_140404A6C[v2 + 284024940]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10241,
    dword_140404A6C[v2 + 284024941]);
  v4 = dword_140404A6C[v2 + 284024935];
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = &dword_140404A6C[v2 + 284024945];
    do
    {
      (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, _QWORD))&dword_140404A6C[18215083])(
        3553,
        (unsigned int)v5,
        dword_140404A6C[v2 + 284024937],
        (unsigned int)((int)dword_140404A6C[v2 + 284024933] >> v5),
        (int)dword_140404A6C[v2 + 284024934] >> v5,
        0,
        dword_140404A6C[v2 + 284024936],
        5121,
        *(_QWORD *)v6);
      v4 = dword_140404A6C[v2 + 284024935];
      v6 += 2;
      ++v5;
    }
    while ( v5 < v4 );
  }
  /* Rendering recovery: a single-level texture with a mipmap min filter is
     incomplete and samples black (driver id 131204, units 0/2). Downgrade to
     LINEAR so Practice terrain/city stays lit even when mip generation was
     skipped. Matches the standalone render-test's complete-texture behavior. */
  if ( (int)dword_140404A6C[v2 + 284024935] <= 1 )
  {
    unsigned int sr_min = dword_140404A6C[v2 + 284024941];
    if ( sr_min == 9984u || sr_min == 9985u || sr_min == 9986u || sr_min == 9987u )
    {
      dword_140404A6C[v2 + 284024941] = 9729u;
      (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
        3553,
        10241,
        9729u);
    }
  }
  if ( a2 )
  {
    v7 = 0;
    if ( v4 > 0 )
    {
      v8 = (void **)&dword_140404A6C[v2 + 284024945];
      do
      {
        if ( *v8 )
        {
          free(*v8);
          *v8 = nullptr;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < (int)dword_140404A6C[v2 + 284024935] );
    }
  }
}

// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);

//----- (000000014014D6D0) ----------------------------------------------------
__int64            sub_14014D6D0(int a1, float a2, float a3, unsigned int a4)
{
  signed int v4; // r12d
  int v5; // ebx
  float v6; // xmm11_4
  __int64 v8; // r15
  float v9; // xmm14_4
  __int64 v10; // rsi
  int v11; // r10d
  __int64 v12; // r8
  char *v13; // r9
  unsigned int v14; // eax
  __int64 v15; // r11
  __int64 v16; // rdi
  unsigned int v17; // eax
  float v18; // xmm2_4
  unsigned int v19; // xmm1_4
  float v20; // xmm2_4
  unsigned int v21; // xmm1_4
  __int64 v22; // rcx
  float v23; // xmm2_4
  unsigned int v24; // xmm1_4
  __int64 v25; // rcx
  float v26; // xmm2_4
  unsigned int v27; // xmm1_4
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r8
  unsigned int *v31; // r9
  __int64 v32; // r10
  float v33; // xmm2_4
  unsigned int v34; // xmm1_4
  unsigned int v35; // eax
  __int64 v36; // rdi
  unsigned int *v37; // rbx
  __int64 result; // rax
  __int64 v39; // rbx
  __int64 v40; // r13
  float v41; // xmm10_4
  float *v42; // rbp
  int v43; // r14d
  float v44; // xmm3_4
  float v45; // xmm12_4
  signed int v46; // r10d
  unsigned int v47; // esi
  signed int v48; // edx
  __int64 v49; // rdi
  float v50; // xmm4_4
  float v51; // xmm5_4
  float v52; // xmm6_4
  float *v53; // rcx
  int v54; // r8d
  float v55; // xmm7_4
  float v56; // xmm1_4
  signed int v57; // eax
  float v58; // xmm9_4
  float v59; // xmm1_4
  int v60; // r9d
  float v61; // xmm8_4
  float v62; // xmm1_4
  signed int v63; // eax
  float v64; // xmm7_4
  float v65; // xmm1_4
  float *v66; // rax
  signed int v67; // ecx
  float v68; // xmm4_4
  float v69; // xmm1_4
  signed int v70; // r8d
  __int64 v71; // rdx
  __int64 v72; // r9
  int v73; // r11d
  float v74; // xmm10_4
  float v75; // xmm11_4
  float v76; // xmm8_4
  float v77; // xmm4_4
  float v78; // xmm9_4
  float v79; // xmm7_4
  float v80; // xmm0_4
  float *v81; // rax
  float v82; // xmm2_4
  float v83; // xmm8_4
  float v84; // xmm4_4
  float v85; // xmm11_4
  float v86; // xmm9_4
  float v87; // xmm7_4
  float v88; // xmm0_4
  float v89; // xmm0_4
  float *v90; // rax
  float v91; // xmm5_4
  float v92; // xmm6_4
  float v93; // xmm3_4
  float v94; // xmm9_4
  float v95; // xmm10_4
  float v96; // xmm8_4
  float v97; // xmm0_4
  float v98; // xmm11_4
  float v99; // xmm9_4
  float v100; // xmm5_4
  float v101; // xmm6_4
  float v102; // xmm10_4
  float v103; // xmm8_4
  float v104; // xmm0_4
  float v105; // xmm10_4
  float v106; // xmm11_4
  float v107; // xmm9_4
  float v108; // xmm0_4
  float v109; // xmm2_4
  float v110; // xmm0_4
  float v111; // xmm1_4
  float v112; // xmm2_4
  float v113; // xmm0_4
  float v114; // xmm2_4
  float v115; // xmm1_4
  float v116; // xmm6_4
  float v117; // xmm2_4
  float v118; // xmm2_4
  float v119; // xmm0_4
  float v120; // xmm1_4
  unsigned int v121; // xmm2_4
  float v122; // xmm0_4
  float v123; // xmm4_4
  signed int v124; // ecx
  float v125; // xmm2_4
  float v126; // xmm3_4
  float v127; // xmm1_4
  float v128; // xmm1_4
  float v129; // xmm7_4
  signed int v130; // ecx
  float v131; // xmm2_4
  float v132; // xmm3_4
  float v133; // xmm5_4
  float v134; // xmm6_4
  float v135; // xmm4_4
  float v136; // xmm1_4
  float v137; // xmm3_4
  float v138; // xmm2_4
  float v139; // xmm0_4
  float v140; // xmm1_4
  float v141; // xmm2_4
  int v142; // edx
  __int64 v143; // rcx
  signed int v144; // r9d
  float v145; // xmm15_4
  float *v146; // r8
  float v147; // xmm6_4
  float *v148; // rdx
  float v149; // xmm2_4
  float v150; // xmm4_4
  float v151; // xmm3_4
  float v152; // xmm5_4
  float v153; // [rsp+60h] [rbp-138h]
  int v154; // [rsp+64h] [rbp-134h]
  __int64 v155; // [rsp+70h] [rbp-128h]
  __int64 v156; // [rsp+88h] [rbp-110h]
  float v157[8]; // [rsp+90h] [rbp-108h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = a2;
  v8 = 180288LL * a1;
  v9 = 0.0;
  v10 = a1;
  v156 = v8;
  v11 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v8);
  if ( v11 < 4 )
  {
    if ( v11 <= 0 )
      goto LABEL_20;
    v16 = 0;
    goto LABEL_16;
  }
  v12 = 24944LL * a1;
  v13 = (char *)&dword_140404A6C[335157369] + v8;
  v14 = ((unsigned int)(v11 - 4) >> 2) + 1;
  v15 = v14;
  v5 = 4 * v14;
  v16 = 4LL * v14;
  v17 = dword_140404A6C[v12 + 346707733];
  do
  {
    v18 = *((float *)v13 + 1);
    v19 = 1065353216;
    if ( v18 < 0.0 )
      v19 = 0x40000000;
    dword_140404A6C[5 * (int)v17 + 346707735 + v12] = *(_DWORD *)v13;
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707736 + v12] = v18;
    v20 = *((float *)v13 + 5);
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707737 + v12] = *((_DWORD *)v13 + 2);
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707738 + v12] = v19;
    v21 = 1065353216;
    v22 = (int)dword_140404A6C[v12 + 346707733];
    dword_140404A6C[v12 + 346707733] = v22 + 1;
    if ( v20 < 0.0 )
      v21 = 0x40000000;
    dword_140404A6C[5 * v22 + 346707740 + v12] = *((_DWORD *)v13 + 4);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707736 + v12] = v20;
    v23 = *((float *)v13 + 9);
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707737 + v12] = *((_DWORD *)v13 + 6);
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707738 + v12] = v21;
    v24 = 1065353216;
    v25 = (int)dword_140404A6C[v12 + 346707733];
    dword_140404A6C[v12 + 346707733] = v25 + 1;
    if ( v23 < 0.0 )
      v24 = 0x40000000;
    dword_140404A6C[5 * v25 + 346707740 + v12] = *((_DWORD *)v13 + 8);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707736 + v12] = v23;
    v26 = *((float *)v13 + 13);
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707737 + v12] = *((_DWORD *)v13 + 10);
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707738 + v12] = v24;
    v27 = 1065353216;
    v28 = (int)dword_140404A6C[v12 + 346707733];
    dword_140404A6C[v12 + 346707733] = v28 + 1;
    if ( v26 < 0.0 )
      v27 = 0x40000000;
    dword_140404A6C[5 * v28 + 346707740 + v12] = *((_DWORD *)v13 + 12);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707736 + v12] = v26;
    v29 = *((_DWORD *)v13 + 14);
    v13 += 64;
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733] + 346707737 + v12] = v29;
    dword_140404A6C[5 * (int)dword_140404A6C[v12 + 346707733]++ + 346707738 + v12] = v27;
    v17 = dword_140404A6C[v12 + 346707733];
    --v15;
  }
  while ( v15 );
  if ( v5 < v11 )
  {
LABEL_16:
    v30 = 24944 * v10;
    v31 = &dword_140404A6C[45072 * v10 + 335157369 + 4 * v16];
    v32 = (unsigned int)(v11 - v5);
    do
    {
      v33 = *((float *)v31 + 1);
      v34 = 1065353216;
      if ( v33 < 0.0 )
        v34 = 0x40000000;
      dword_140404A6C[5 * (int)dword_140404A6C[v30 + 346707733] + 346707735 + v30] = *v31;
      *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v30 + 346707733] + 346707736 + v30] = v33;
      v35 = v31[2];
      v31 += 4;
      dword_140404A6C[5 * (int)dword_140404A6C[v30 + 346707733] + 346707737 + v30] = v35;
      dword_140404A6C[5 * (int)dword_140404A6C[v30 + 346707733]++ + 346707738 + v30] = v34;
      --v32;
    }
    while ( v32 );
  }
LABEL_20:
  v36 = *(int *)((char *)&dword_140404A6C[335158393] + v8);
  if ( v36 > 0 )
  {
    v37 = (unsigned int *)((char *)&dword_140404A6C[335158395] + v8);
    do
    {
      sub_14010C850(a1, 0, *v37, v37[1]);
      v37 += 3;
      --v36;
    }
    while ( v36 );
  }
  result = 99776 * v10;
  v39 = 99776 * v10;
  v154 = 0;
  v155 = 99776 * v10;
  dword_140404A6C[24944 * v10 + 346708054] = 8;
  *(unsigned int *)((char *)&dword_140404A6C[346708055] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[346708056] + result) = 1;
  *(unsigned int *)((char *)&dword_140404A6C[346708057] + result) = 2;
  *(unsigned int *)((char *)&dword_140404A6C[346708058] + result) = 3;
  *(unsigned int *)((char *)&dword_140404A6C[346708059] + result) = 4;
  *(unsigned int *)((char *)&dword_140404A6C[346708060] + result) = 5;
  *(unsigned int *)((char *)&dword_140404A6C[346708061] + result) = 6;
  *(unsigned int *)((char *)&dword_140404A6C[346708062] + result) = 7;
  if ( *(int *)((char *)&dword_140404A6C[335202047] + v8) > 0 )
  {
    v40 = 11268 * v10;
    v41 = 1.6 / (float)(v6 * v6);
    v42 = (float *)((char *)&dword_140404A6C[335202050] + v8);
    v153 = v41;
    while ( 1 )
    {
      v43 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v8);
      v44 = 65536.0;
      v45 = 65536.0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      if ( v43 >= 4 )
      {
        v50 = *(v42 - 1);
        v51 = *v42;
        v52 = v42[1];
        v53 = (float *)((char *)&dword_140404A6C[335157371] + v8);
        v49 = 4LL * (((unsigned int)(v43 - 4) >> 2) + 1);
        v54 = 2;
        do
        {
          v55 = v44;
          v56 = fsqrt(
                  (float)((float)((float)((float)(v51 - *(v53 - 1)) * (float)(v51 - *(v53 - 1))) * 16.0)
                        + (float)((float)(v50 - *(v53 - 2)) * (float)(v50 - *(v53 - 2))))
                + (float)((float)(v52 - *v53) * (float)(v52 - *v53)));
          if ( v56 < v44 )
            v44 = v56;
          v57 = v48;
          if ( v55 <= v56 )
            v57 = v46;
          v58 = v44;
          v59 = fsqrt(
                  (float)((float)((float)((float)(v51 - v53[3]) * (float)(v51 - v53[3])) * 16.0)
                        + (float)((float)(v50 - v53[2]) * (float)(v50 - v53[2])))
                + (float)((float)(v52 - v53[4]) * (float)(v52 - v53[4])));
          if ( v59 < v44 )
            v44 = v59;
          v60 = v54 - 1;
          if ( v58 <= v59 )
            v60 = v57;
          v61 = v44;
          v62 = fsqrt(
                  (float)((float)((float)((float)(v51 - v53[7]) * (float)(v51 - v53[7])) * 16.0)
                        + (float)((float)(v50 - v53[6]) * (float)(v50 - v53[6])))
                + (float)((float)(v52 - v53[8]) * (float)(v52 - v53[8])));
          if ( v62 < v44 )
            v44 = v62;
          v63 = v54;
          if ( v61 <= v62 )
            v63 = v60;
          v64 = v44;
          v65 = fsqrt(
                  (float)((float)((float)((float)(v51 - v53[11]) * (float)(v51 - v53[11])) * 16.0)
                        + (float)((float)(v50 - v53[10]) * (float)(v50 - v53[10])))
                + (float)((float)(v52 - v53[12]) * (float)(v52 - v53[12])));
          if ( v65 < v44 )
            v44 = v65;
          v46 = v54 + 1;
          if ( v64 <= v65 )
            v46 = v63;
          v53 += 16;
          v48 += 4;
          v54 += 4;
        }
        while ( v48 < v43 - 3 );
      }
      if ( v48 < v43 )
      {
        v66 = (float *)&dword_140404A6C[4 * v49 + 335157371 + 4 * v40];
        do
        {
          v67 = v46;
          v68 = v44;
          v69 = fsqrt(
                  (float)((float)((float)((float)(*v42 - *(v66 - 1)) * (float)(*v42 - *(v66 - 1))) * 16.0)
                        + (float)((float)(*(v42 - 1) - *(v66 - 2)) * (float)(*(v42 - 1) - *(v66 - 2))))
                + (float)((float)(v42[1] - *v66) * (float)(v42[1] - *v66)));
          if ( v69 < v44 )
            v44 = v69;
          v46 = v48;
          if ( v68 <= v69 )
            v46 = v67;
          v66 += 4;
          ++v48;
        }
        while ( v48 < v43 );
      }
      v70 = 0;
      v71 = 0;
      if ( v43 >= 4 )
        break;
      if ( v43 > 0 )
      {
        v72 = v46;
        goto LABEL_74;
      }
LABEL_81:
      v109 = *(float *)&dword_140404A6C[4 * v40 + 335157369 + 4 * (int)v47] - *(v42 - 1);
      v110 = *(float *)&dword_140404A6C[4 * v40 + 335157370 + 4 * (int)v47] - *v42;
      v111 = *(float *)&dword_140404A6C[4 * v40 + 335157371 + 4 * (int)v47] - v42[1];
      v112 = (float)(v109 * v109) + (float)(v110 * v110);
      v113 = *(float *)&dword_140404A6C[4 * v40 + 335157370 + 4 * v46] - *v42;
      v114 = v112 + (float)(v111 * v111);
      v115 = *(float *)&dword_140404A6C[4 * v40 + 335157371 + 4 * v46] - v42[1];
      v116 = fsqrt(v114);
      v117 = *(float *)&dword_140404A6C[4 * v40 + 335157369 + 4 * v46] - *(v42 - 1);
      v118 = fsqrt((float)((float)(v117 * v117) + (float)(v113 * v113)) + (float)(v115 * v115));
      v119 = 1.0 / (float)(v118 + v116);
      v120 = v119 * v118;
      v121 = 1059061760;
      v157[1] = v120;
      v157[0] = v119 * v116;
      v122 = -0.03125;
      if ( a1 )
      {
        if ( (unsigned int)(a1 - 4) <= 1 )
        {
          v121 = 1061158912;
          v122 = 0.0;
        }
      }
      else
      {
        v122 = -0.0625;
        v121 = 1056964608;
      }
      sub_14010CAC0(a1, 0, v46, v47, v157, LODWORD(v6), LODWORD(a3), LODWORD(v41), v122, 0x3E800000u, 0x3F000000u, v121);
      v8 = v156;
      v42 += 5;
      *(unsigned int *)((char *)&dword_140404A6C[20 * *(unsigned int *)((char *)&dword_140404A6C[346731811] + v39)
                                               + 346731808]
                      + v39) = a4;
      result = (unsigned int)(v154 + 1);
      v154 = result;
      if ( (int)result >= *(int *)((char *)&dword_140404A6C[335202047] + v156) )
        goto LABEL_86;
    }
    v72 = v46;
    v73 = 2;
    do
    {
      if ( v71 != v46 )
      {
        v74 = *(float *)&dword_140404A6C[4 * v71 + 335157369 + 4 * v40];
        v75 = *(float *)&dword_140404A6C[4 * v71 + 335157370 + 4 * v40];
        v76 = *(float *)&dword_140404A6C[4 * v46 + 335157369 + 4 * v40];
        v77 = *(float *)&dword_140404A6C[4 * v46 + 335157370 + 4 * v40];
        v78 = *(float *)&dword_140404A6C[4 * v71 + 335157371 + 4 * v40];
        v79 = *(float *)&dword_140404A6C[4 * v46 + 335157371 + 4 * v40];
        v80 = fsqrt(
                (float)((float)((float)((float)(*(v42 - 1) - v74) * (float)(*(v42 - 1) - v74))
                              + (float)((float)(*v42 - v75) * (float)(*v42 - v75)))
                      * 16.0)
              + (float)((float)(v42[1] - v78) * (float)(v42[1] - v78)));
        if ( (float)((float)((float)((float)(v75 - v77) * (float)(*v42 - v77))
                           + (float)((float)(v74 - v76) * (float)(*(v42 - 1) - v76)))
                   + (float)((float)(v78 - v79) * (float)(v42[1] - v79))) >= 0.0
          && v80 < v45 )
        {
          v47 = v70;
          v45 = v80;
        }
      }
      if ( v71 + 1 != v46 )
      {
        v81 = (float *)&dword_140404A6C[4 * v71 + 335157373 + 4 * v40];
        v82 = *(v42 - 1);
        v83 = *(float *)&dword_140404A6C[4 * v46 + 335157369 + 4 * v40];
        v84 = *(float *)&dword_140404A6C[4 * v46 + 335157370 + 4 * v40];
        v85 = v81[1];
        v86 = v81[2];
        v87 = *(float *)&dword_140404A6C[4 * v46 + 335157371 + 4 * v40];
        v88 = fsqrt(
                (float)((float)((float)((float)(v82 - *v81) * (float)(v82 - *v81))
                              + (float)((float)(*v42 - v85) * (float)(*v42 - v85)))
                      * 16.0)
              + (float)((float)(v42[1] - v86) * (float)(v42[1] - v86)));
        if ( (float)((float)((float)((float)(v85 - v84) * (float)(*v42 - v84))
                           + (float)((float)(*v81 - v83) * (float)(v82 - v83)))
                   + (float)((float)(v86 - v87) * (float)(v42[1] - v87))) >= 0.0
          && v88 < v45 )
        {
          v47 = v73 - 1;
          v45 = v88;
        }
      }
      if ( v71 + 2 != v46 )
      {
        v89 = *(v42 - 1);
        v90 = (float *)&dword_140404A6C[4 * v71 + 335157377 + 4 * v40];
        v91 = *(float *)&dword_140404A6C[4 * v46 + 335157369 + 4 * v40];
        v92 = *(float *)&dword_140404A6C[4 * v46 + 335157370 + 4 * v40];
        v93 = v89 - v91;
        v94 = v90[1];
        v95 = v90[2];
        v96 = *(float *)&dword_140404A6C[4 * v46 + 335157371 + 4 * v40];
        v97 = fsqrt(
                (float)((float)((float)((float)(*v42 - v94) * (float)(*v42 - v94))
                              + (float)((float)(v89 - *v90) * (float)(v89 - *v90)))
                      * 16.0)
              + (float)((float)(v42[1] - v95) * (float)(v42[1] - v95)));
        if ( (float)((float)((float)((float)(*v90 - v91) * v93) + (float)((float)(v94 - v92) * (float)(*v42 - v92)))
                   + (float)((float)(v95 - v96) * (float)(v42[1] - v96))) >= 0.0
          && v97 < v45 )
        {
          v47 = v73;
          v45 = v97;
        }
      }
      if ( v71 + 3 != v46 )
      {
        v98 = *(float *)&dword_140404A6C[4 * v71 + 335157381 + 4 * v40];
        v99 = *(float *)&dword_140404A6C[4 * v71 + 335157382 + 4 * v40];
        v100 = *(float *)&dword_140404A6C[4 * v46 + 335157369 + 4 * v40];
        v101 = *(float *)&dword_140404A6C[4 * v46 + 335157370 + 4 * v40];
        v102 = *(float *)&dword_140404A6C[4 * v71 + 335157383 + 4 * v40];
        v103 = *(float *)&dword_140404A6C[4 * v46 + 335157371 + 4 * v40];
        v104 = fsqrt(
                 (float)((float)((float)((float)(*v42 - v99) * (float)(*v42 - v99))
                               + (float)((float)(*(v42 - 1) - v98) * (float)(*(v42 - 1) - v98)))
                       * 16.0)
               + (float)((float)(v42[1] - v102) * (float)(v42[1] - v102)));
        if ( (float)((float)((float)((float)(v98 - v100) * (float)(*(v42 - 1) - v100))
                           + (float)((float)(v99 - v101) * (float)(*v42 - v101)))
                   + (float)((float)(v102 - v103) * (float)(v42[1] - v103))) >= 0.0
          && v104 < v45 )
        {
          v47 = v73 + 1;
          v45 = v104;
        }
      }
      v71 += 4;
      v70 += 4;
      v73 += 4;
    }
    while ( v70 < v43 - 3 );
    v4 = 0;
    v39 = v155;
    if ( v70 < v43 )
    {
      do
      {
LABEL_74:
        if ( v71 != v72 )
        {
          v105 = *(float *)&dword_140404A6C[4 * v71 + 335157369 + 4 * v40];
          v106 = *(float *)&dword_140404A6C[4 * v71 + 335157370 + 4 * v40];
          v107 = *(float *)&dword_140404A6C[4 * v71 + 335157371 + 4 * v40];
          v108 = fsqrt(
                   (float)((float)((float)((float)(*(v42 - 1) - v105) * (float)(*(v42 - 1) - v105))
                                 + (float)((float)(*v42 - v106) * (float)(*v42 - v106)))
                         * 16.0)
                 + (float)((float)(v42[1] - v107) * (float)(v42[1] - v107)));
          if ( (float)((float)((float)((float)(v106 - *(float *)&dword_140404A6C[4 * v72 + 335157370 + 4 * v40])
                                     * (float)(*v42 - *(float *)&dword_140404A6C[4 * v72 + 335157370 + 4 * v40]))
                             + (float)((float)(v105 - *(float *)&dword_140404A6C[4 * v72 + 335157369 + 4 * v40])
                                     * (float)(*(v42 - 1) - *(float *)&dword_140404A6C[4 * v72 + 335157369 + 4 * v40])))
                     + (float)((float)(v107 - *(float *)&dword_140404A6C[4 * v72 + 335157371 + 4 * v40])
                             * (float)(v42[1] - *(float *)&dword_140404A6C[4 * v72 + 335157371 + 4 * v40]))) >= 0.0
            && v108 < v45 )
          {
            v47 = v70;
            v45 = v108;
          }
        }
        ++v71;
        ++v70;
      }
      while ( v70 < v43 );
      v39 = v155;
      v4 = 0;
    }
    v6 = a2;
    v41 = v153;
    goto LABEL_81;
  }
LABEL_86:
  v123 = 0.0;
  v124 = 0;
  v125 = 0.0;
  v126 = 0.0;
  v127 = 0.0;
  *(float *)((char *)&dword_140404A6C[346732453] + v39) = fabs(
                                                            *(float *)((char *)&dword_140404A6C[335202051] + v8)
                                                          - *(float *)((char *)&dword_140404A6C[335202061] + v8));
  *(float *)((char *)&dword_140404A6C[346732452] + v39) = fabs(
                                                            *(float *)((char *)&dword_140404A6C[335202049] + v8)
                                                          - *(float *)((char *)&dword_140404A6C[335202054] + v8));
  *(_QWORD *)((char *)&dword_140404A6C[346732623] + v39) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[346732625] + v39) = 0;
  if ( *(int *)((char *)&dword_140404A6C[346707733] + v39) > 0 )
  {
    result = (__int64)&dword_140404A6C[346707737] + v39;
    do
    {
      if ( *(float *)(result - 4) >= 0.0 )
      {
        v128 = *(float *)(result + 4);
      }
      else
      {
        *(_DWORD *)(result + 4) = 1082130432;
        v128 = 4.0;
      }
      ++v124;
      v125 = (float)(v128 * *(float *)(result - 8)) + *(float *)((char *)&dword_140404A6C[346732623] + v39);
      *(float *)((char *)&dword_140404A6C[346732623] + v39) = v125;
      v126 = (float)(v128 * *(float *)(result - 4)) + *(float *)((char *)&dword_140404A6C[346732624] + v39);
      *(float *)((char *)&dword_140404A6C[346732624] + v39) = v126;
      v127 = (float)(v128 * *(float *)result) + *(float *)((char *)&dword_140404A6C[346732625] + v39);
      *(float *)((char *)&dword_140404A6C[346732625] + v39) = v127;
      v123 = v123 + *(float *)(result + 4);
      result += 20;
    }
    while ( v124 < *(int *)((char *)&dword_140404A6C[346707733] + v39) );
  }
  v129 = 0.0;
  v130 = 0;
  *(float *)((char *)&dword_140404A6C[346732623] + v39) = v125 * (float)(1.0 / v123);
  v131 = 0.0;
  *(float *)((char *)&dword_140404A6C[346732624] + v39) = v126 * (float)(1.0 / v123);
  v132 = 0.0;
  *(float *)((char *)&dword_140404A6C[346732625] + v39) = v127 * (float)(1.0 / v123);
  *(_QWORD *)((char *)&dword_140404A6C[346732629] + v39) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[346732631] + v39) = 0;
  if ( *(int *)((char *)&dword_140404A6C[346707733] + v39) > 0 )
  {
    v133 = *(float *)((char *)&dword_140404A6C[346732630] + v39);
    v134 = *(float *)((char *)&dword_140404A6C[346732631] + v39);
    result = (__int64)&dword_140404A6C[346707738] + v39;
    v135 = 0.0;
    do
    {
      ++v130;
      v136 = (float)(*(float *)(result - 4) - *(float *)((char *)&dword_140404A6C[346732625] + v39))
           * (float)(*(float *)(result - 4) - *(float *)((char *)&dword_140404A6C[346732625] + v39));
      v137 = (float)(*(float *)(result - 8) - *(float *)((char *)&dword_140404A6C[346732624] + v39))
           * (float)(*(float *)(result - 8) - *(float *)((char *)&dword_140404A6C[346732624] + v39));
      v138 = (float)(*(float *)(result - 12) - *(float *)((char *)&dword_140404A6C[346732623] + v39))
           * (float)(*(float *)(result - 12) - *(float *)((char *)&dword_140404A6C[346732623] + v39));
      v135 = v135 + (float)((float)(v136 + v137) * *(float *)result);
      *(float *)((char *)&dword_140404A6C[346732629] + v39) = v135;
      v133 = v133 + (float)((float)(v136 + v138) * *(float *)result);
      *(float *)((char *)&dword_140404A6C[346732630] + v39) = v133;
      v134 = v134 + (float)((float)(v137 + v138) * *(float *)result);
      *(float *)((char *)&dword_140404A6C[346732631] + v39) = v134;
      v129 = v129 + *(float *)result;
      result += 20;
    }
    while ( v130 < *(int *)((char *)&dword_140404A6C[346707733] + v39) );
    v131 = v133;
    v132 = v134;
  }
  v139 = (float)(1.0 / v129) * *(float *)((char *)&dword_140404A6C[346732629] + v39);
  v140 = 0.0;
  *(float *)((char *)&dword_140404A6C[346732630] + v39) = v131 * (float)(1.0 / v129);
  v141 = 0.0;
  *(float *)((char *)&dword_140404A6C[346732629] + v39) = v139;
  *(float *)((char *)&dword_140404A6C[346732631] + v39) = v132 * (float)(1.0 / v129);
  v142 = *(unsigned int *)((char *)&dword_140404A6C[346707733] + v39);
  if ( v142 > 0 )
  {
    v143 = (unsigned int)v142;
    result = (__int64)&dword_140404A6C[346707737] + v39;
    do
    {
      v9 = v9 + *(float *)(result - 8);
      v140 = v140 + *(float *)(result - 4);
      v141 = v141 + *(float *)result;
      result += 20;
      --v143;
    }
    while ( v143 );
  }
  v144 = 0;
  v145 = 1.0 / (float)v142;
  *(float *)((char *)&dword_140404A6C[346732626] + v39) = (float)(v9 * v145)
                                                        - *(float *)((char *)&dword_140404A6C[346732623] + v39);
  *(float *)((char *)&dword_140404A6C[346732627] + v39) = (float)(v140 * v145)
                                                        - *(float *)((char *)&dword_140404A6C[346732624] + v39);
  *(float *)((char *)&dword_140404A6C[346732628] + v39) = (float)(v141 * v145)
                                                        - *(float *)((char *)&dword_140404A6C[346732625] + v39);
  if ( *(int *)((char *)&dword_140404A6C[346731811] + v39) > 0 )
  {
    v146 = (float *)((char *)&dword_140404A6C[346731831] + v39);
    do
    {
      v147 = *(v146 - 15);
      ++v144;
      v148 = (float *)((char *)&dword_140404A6C[5 * *((int *)v146 - 18) + 346707735] + v39);
      result = v39 + 20LL * *((int *)v146 - 17);
      v149 = v148[1];
      v150 = v148[2];
      v151 = *(float *)((char *)&dword_140404A6C[346707736] + result);
      v152 = *(float *)((char *)&dword_140404A6C[346707737] + result);
      *(v146 - 2) = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[346707735] + result) - *v148) * v147)
                          + *v148)
                  - *(float *)((char *)&dword_140404A6C[346732623] + v39);
      *(v146 - 1) = (float)((float)((float)(v151 - v149) * v147) + v149)
                  - *(float *)((char *)&dword_140404A6C[346732624] + v39);
      *v146 = (float)((float)((float)(v152 - v150) * v147) + v150)
            - *(float *)((char *)&dword_140404A6C[346732625] + v39);
      v146 += 20;
    }
    while ( v144 < *(int *)((char *)&dword_140404A6C[346731811] + v39) );
  }
  if ( *(int *)((char *)&dword_140404A6C[346732632] + v39) > 0 )
  {
    result = (__int64)&dword_140404A6C[346732635] + v39;
    do
    {
      ++v4;
      *(float *)(result - 8) = *(float *)((char *)&dword_140404A6C[346732626] + v39) + *(float *)(result - 8);
      *(float *)(result - 4) = *(float *)(result - 4) + *(float *)((char *)&dword_140404A6C[346732627] + v39);
      *(float *)result = *(float *)((char *)&dword_140404A6C[346732628] + v39) + *(float *)result;
      result += 28;
    }
    while ( v4 < *(int *)((char *)&dword_140404A6C[346732632] + v39) );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (000000014014FCF0) ----------------------------------------------------
void               sub_14014FCF0(float *a1, unsigned int *a2, unsigned int *a3)
{
  union { __int64 first; float coordinates[3]; } sr_position;
  unsigned int v4; // r15d
  float v5; // xmm1_4
  unsigned int v6; // r13d
  unsigned int v7; // xmm0_4
  unsigned int *v8; // rcx
  unsigned int v9; // xmm0_4
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int *v12; // r14
  int v13; // edx
  unsigned int *v14; // rsi
  int v15; // r11d
  float *v16; // rbp
  int v17; // ecx
  float v18; // xmm7_4
  unsigned int *v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r10
  int v23; // edi
  __int64 v24; // rbx
  float v25; // xmm3_4
  unsigned int *v26; // r9
  __int64 v27; // rax
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebp
  unsigned int *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  float v38; // xmm7_4
  float v39; // xmm9_4
  float v40; // xmm10_4
  signed int v41; // eax
  float v42; // xmm7_4
  float v43; // xmm1_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm9_4
  float v47; // xmm1_4
  float v48; // xmm10_4
  bool v49; // zf
  __int64 v50; // rcx
  unsigned int v51; // eax
  float v52; // xmm6_4
  float v53; // xmm8_4
  float v54; // xmm6_4
  float v55; // xmm6_4
  float v56; // xmm7_4
  __int64 v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm9_4
  float v60; // xmm7_4
  float v61; // xmm8_4
  float v62; // xmm0_4
  float v63; // xmm9_4
  float v64; // xmm6_4
  __int64 v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rcx
  float v68; // xmm10_4
  float v69; // xmm6_4
  __int64 v70; // rcx
  float v71; // xmm6_4
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // r8d
  unsigned int *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // r8d
  unsigned int v79; // edx
  unsigned int *v80; // rax
  float v81; // xmm3_4
  unsigned int *v82; // rbx
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm6_4
  float v86; // xmm7_4
  unsigned int *v87; // rdx
  float v88; // xmm8_4
  __int64 v89; // r10
  int v90; // r8d
  __int64 v91; // r9
  __int64 v92; // rax
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm2_4
  __int64 v96; // rax
  unsigned int v97; // r8d
  __int64 v98; // r9
  __int64 v99; // rax
  float v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  __int64 v103; // rax
  int **v104; // r8
  __int64 v105; // r14
  int v106; // r13d
  unsigned int *v107; // rdi
  __int64 v108; // r15
  unsigned int v109; // ecx
  int v110; // edx
  __int64 v111; // rsi
  unsigned int v112; // eax
  __int64 v113; // rcx
  int **v114; // r12
  __int64 v115; // rbp
  __int64 v116; // rcx
  __int64 v117; // rdx
  int v118; // r8d
  int *v119; // rcx
  unsigned int *v120; // r9
  __int16 *v121; // r8
  int v122; // edx
  __int64 v123; // r9
  __m128i v124; // xmm0
  int v125; // ecx
  signed int v126; // edx
  signed int v127; // r8d
  int v128; // ecx
  float *v129; // r12
  unsigned int *v130; // r11
  __int64 v131; // rdx
  float v132; // xmm0_4
  float v133; // xmm3_4
  float v134; // xmm4_4
  __int64 v135; // rcx
  int v136; // eax
  float v137; // xmm6_4
  float v138; // xmm6_4
  float v139; // xmm6_4
  __int64 v141; // [rsp+0h] [rbp-128h] BYREF
  int v142; // [rsp+20h] [rbp-108h]
  unsigned int v143; // [rsp+28h] [rbp-100h]
  unsigned int *v144; // [rsp+30h] [rbp-F8h]
  float *v145; // [rsp+38h] [rbp-F0h]
  unsigned int *v146; // [rsp+40h] [rbp-E8h]
  __int64 v149; // [rsp+58h] [rbp-D0h]

  v4 = dword_140404A6C[283831309];
  v5 = 1.0;
  v6 = dword_140404A6C[283831448];
  v146 = a3;
  v145 = a1;
  if ( dword_140404A6C[283831309] && dword_140404A6C[283831448] == 2 )
    v5 = fminf(fmaxf((float)(int)dword_140404A6C[283831450] * 0.016666668f, 0.0), 1.0);
  *(float *)&dword_140404A6C[18198666] = (float)((float)((float)(int)dword_140404A6C[73991612] * v5)
                                               * (float)((float)(int)dword_140404A6C[73991612] * v5))
                                       * 0.000099999997f;
  dword_140404A6C[18198546] = *(unsigned int *)a1;
  __builtin_memcpy(&dword_140404A6C[18198547], a1 + 1, 4);
  v7 = *((_DWORD *)a1 + 2);
  v8 = &dword_140404A6C[129721918];
  dword_140404A6C[18198548] = v7;
  dword_140404A6C[18198549] = *a2;
  dword_140404A6C[18198550] = a2[1];
  dword_140404A6C[18198551] = a2[2];
  dword_140404A6C[18198552] = a2[3];
  dword_140404A6C[18198553] = a2[4];
  dword_140404A6C[18198554] = a2[5];
  dword_140404A6C[18198555] = a2[6];
  dword_140404A6C[18198556] = a2[7];
  dword_140404A6C[18198557] = a2[8];
  dword_140404A6C[18198558] = *a3;
  dword_140404A6C[18198559] = a3[1];
  v9 = a3[2];
  v10 = 512;
  dword_140404A6C[18198560] = v9;
  do
  {
    v11 = (int)*v8;
    if ( (_DWORD)v11 != -1 && (!*(v8 - 5209) || !v4) )
    {
      if ( !dword_140404A6C[278720 * v11 + 327698] )
        dword_140404A6C[278720 * v11 + 327698] = 1;
      *v8 = -1;
    }
    v8 += 5210;
    --v10;
  }
  while ( v10 );
  v12 = &dword_140404A6C[70326528];
  v13 = dword_140404A6C[70326525];
  if ( !v4 )
    goto LABEL_91;
  if ( v6 != 3 )
  {
    v14 = &dword_140404A6C[129716710];
    v15 = 0;
    v16 = (float *)&dword_140404A6C[285044403];
    do
    {
      if ( *(v14 - 1) && ((*v14 - 12) & 0xFFFFFFFD) != 0 && (int)v14[3659] > 0 )
      {
        v17 = 0;
        v18 = fsqrt(
                (float)((float)((float)(a1[1] - *(v16 - 1)) * (float)(a1[1] - *(v16 - 1)))
                      + (float)((float)(*a1 - *(v16 - 2)) * (float)(*a1 - *(v16 - 2))))
              + (float)((float)(a1[2] - *v16) * (float)(a1[2] - *v16)));
        if ( v13 <= 0 )
        {
LABEL_22:
          if ( v13 >= 8 )
          {
            v21 = 0;
            v22 = 0;
            v23 = -1;
            v24 = -1;
            v25 = 65536.0;
            v26 = &dword_140404A6C[70326526];
            do
            {
              v27 = (int)*v26;
              if ( (_DWORD)v27 != v15 )
              {
                v28 = a1[1] - *(float *)&dword_140404A6C[77 * v27 + 285044402];
                v29 = a1[2] - *(float *)&dword_140404A6C[77 * v27 + 285044403];
                v30 = fsqrt(
                        (float)((float)(v28 * v28)
                              + (float)((float)(*a1 - *(float *)&dword_140404A6C[77 * v27 + 285044401])
                                      * (float)(*a1 - *(float *)&dword_140404A6C[77 * v27 + 285044401])))
                      + (float)(v29 * v29));
                if ( v18 < v30 && v25 > v30 )
                {
                  v23 = v21;
                  v24 = v22;
                  v25 = v30;
                }
              }
              ++v21;
              ++v22;
              v26 += 5;
            }
            while ( v21 < v13 );
            if ( v23 != -1 )
            {
              v31 = (int)dword_140404A6C[5 * v24 + 70326527];
              if ( (_DWORD)v31 != -1 && !dword_140404A6C[278720 * v31 + 327698] )
                dword_140404A6C[278720 * v31 + 327698] = 1;
              v32 = (int)dword_140404A6C[5 * v24 + 70326528];
              if ( (_DWORD)v32 != -1 && !dword_140404A6C[278720 * v32 + 327698] )
                dword_140404A6C[278720 * v32 + 327698] = 1;
              dword_140404A6C[5 * v24 + 70326526] = v15;
              *(_QWORD *)&dword_140404A6C[5 * v24 + 70326529] = 0;
              *(_QWORD *)&dword_140404A6C[5 * v24 + 70326527] = -1;
              v13 = dword_140404A6C[70326525];
            }
          }
          else
          {
            v20 = 5LL * v13;
            dword_140404A6C[v20 + 70326526] = v15;
            dword_140404A6C[5 * v13 + 70326527] = -1;
            dword_140404A6C[v20 + 70326528] = -1;
            *(_QWORD *)&dword_140404A6C[v20 + 70326529] = 0;
            v13 = ++dword_140404A6C[70326525];
          }
        }
        else
        {
          v19 = &dword_140404A6C[70326526];
          while ( *v19 != v15 )
          {
            ++v17;
            v19 += 5;
            if ( v17 >= v13 )
              goto LABEL_22;
          }
        }
      }
      ++v15;
      v14 += 5210;
      v16 += 77;
    }
    while ( v15 < 512 );
    v4 = dword_140404A6C[283831309];
    v33 = 0;
    if ( v13 > 0 )
    {
      v34 = &dword_140404A6C[70326527];
      while ( 1 )
      {
        v35 = (int)*(v34 - 1);
        v36 = 77 * v35;
        v37 = 5210 * v35;
        v38 = *(float *)&dword_140404A6C[77 * v35 + 285044401];
        v39 = *(float *)&dword_140404A6C[77 * v35 + 285044402];
        v40 = *(float *)&dword_140404A6C[77 * v35 + 285044403];
        if ( dword_140404A6C[5210 * v35 + 129716709]
          && (float)((float)((float)((float)(a1[1] - v39) * (float)(a1[1] - v39))
                           + (float)((float)(*a1 - v38) * (float)(*a1 - v38)))
                   + (float)((float)(a1[2] - v40) * (float)(a1[2] - v40))) < 65536.0
          && (int)dword_140404A6C[v37 + 129720369] > 0 )
        {
          v41 = *v34;
          v42 = (float)(v38 - (float)(*(float *)&dword_140404A6C[v36 + 285044410] * 2.5))
              - (float)(*(float *)&dword_140404A6C[v36 + 285044407] * 0.25);
          v43 = *(float *)&dword_140404A6C[v36 + 285044408] * 0.25;
          v44 = v39 - (float)(*(float *)&dword_140404A6C[v36 + 285044411] * 2.5);
          v45 = *(float *)&dword_140404A6C[v36 + 285044412] * 2.5;
          *(float *)&sr_position.first = v42;
          v46 = v44 - v43;
          v47 = *(float *)&dword_140404A6C[v36 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = v46;
          v48 = (float)(v40 - v45) - v47;
          sr_position.coordinates[2] = v48;
          if ( v41 != -1
            || ((v49 = dword_140404A6C[v37 + 129716710] == 13, v142 = 1, !v49)
              ? (v41 = sub_140069FA0(dword_140404A6C[283785942], (unsigned int *)&sr_position.first, 0.5, 1.0, v142))
              : (v41 = sub_140069FA0(dword_140404A6C[283786013], (unsigned int *)&sr_position.first, 0.125, 1.0, v142)),
                *v34 = v41,
                v41 != -1) )
          {
            v50 = 278720LL * v41;
            v51 = dword_140404A6C[v37 + 129716744];
            *(float *)&dword_140404A6C[v50 + 606302] = v42;
            *(float *)&dword_140404A6C[v50 + 606303] = v46;
            *(float *)&dword_140404A6C[v50 + 606304] = v48;
            dword_140404A6C[v50 + 606305] = v51;
            dword_140404A6C[v50 + 606306] = dword_140404A6C[v37 + 129716745];
            dword_140404A6C[v50 + 606307] = dword_140404A6C[v37 + 129716746];
            v52 = (float)(int)dword_140404A6C[v37 + 129720369];
            if ( (int)dword_140404A6C[v37 + 129720369] < 100 )
              v53 = 0.29882812;
            else
              v53 = (float)(v52 * 0.00048828125) + 0.25;
            if ( dword_140404A6C[v37 + 129716710] == 13 )
            {
              v55 = v52 * 0.0078125;
              if ( v55 < 0.25 )
                v55 = 0.0;
              v54 = fminf(v55, 1.0);
              v53 = fmaxf(v53, 0.5) * 0.5;
            }
            else
            {
              v54 = fminf(v52 * 0.015625, 0.5);
            }
            if ( (float)((float)((float)((float)(a1[1] - v46) * (float)(a1[1] - v46))
                               + (float)((float)(*a1 - v42) * (float)(*a1 - v42)))
                       + (float)((float)(a1[2] - v48) * (float)(a1[2] - v48))) <= 16384.0 )
            {
              v56 = 1.0;
              if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
                v56 = 0.5;
            }
            else
            {
              v56 = 0.5;
            }
            v57 = 278720LL * (int)*v34;
            v58 = (float)((float)((float)((float)(v56 * v54) * 0.5) - *((float *)v34 + 2)) * 0.125)
                + *((float *)v34 + 2);
            *(float *)&dword_140404A6C[v57 + 327704] = v58;
            *(float *)&dword_140404A6C[v57 + 327706] = v53;
            *((float *)v34 + 2) = v58;
          }
          v49 = dword_140404A6C[v37 + 129716710] == 13;
          v59 = (float)(*(float *)&dword_140404A6C[v36 + 285044412] * 0.125)
              + *(float *)&dword_140404A6C[v36 + 285044403];
          v60 = (float)((float)(*(float *)&dword_140404A6C[v36 + 285044410] * 0.125)
                      + *(float *)&dword_140404A6C[v36 + 285044401])
              - (float)(*(float *)&dword_140404A6C[v36 + 285044407] * 0.25);
          v61 = (float)((float)(*(float *)&dword_140404A6C[v36 + 285044411] * 0.125)
                      + *(float *)&dword_140404A6C[v36 + 285044402])
              - (float)(*(float *)&dword_140404A6C[v36 + 285044408] * 0.25);
          *(float *)&sr_position.first = v60;
          v62 = *(float *)&dword_140404A6C[v36 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = v61;
          v63 = v59 - v62;
          sr_position.coordinates[2] = v63;
          if ( !v49 && v34[1] == -1 )
          {
            v64 = fminf(
                    (float)(*(float *)&dword_140404A6C[v37 + 129720536] + *(float *)&dword_140404A6C[v37 + 129720493])
                  + (float)(*(float *)&dword_140404A6C[v37 + 129720450] + *(float *)&dword_140404A6C[v37 + 129720407]),
                    0.25);
            if ( v64 > 0.0625 )
            {
              v34[1] = sub_140069FA0(dword_140404A6C[283785946], (unsigned int *)&sr_position.first, v64, 1.0, 1u);
              *((float *)v34 + 3) = v64;
            }
          }
          v65 = (int)v34[1];
          if ( (_DWORD)v65 == -1 )
            goto LABEL_86;
          v66 = dword_140404A6C[v37 + 129716744];
          v67 = 278720 * v65;
          v68 = fminf(
                  (float)(*(float *)&dword_140404A6C[v37 + 129720536] + *(float *)&dword_140404A6C[v37 + 129720493])
                + (float)(*(float *)&dword_140404A6C[v37 + 129720450] + *(float *)&dword_140404A6C[v37 + 129720407]),
                  1.0);
          *(float *)&dword_140404A6C[v67 + 606302] = v60;
          *(float *)&dword_140404A6C[v67 + 606303] = v61;
          *(float *)&dword_140404A6C[v67 + 606304] = v63;
          dword_140404A6C[v67 + 606305] = v66;
          dword_140404A6C[v67 + 606306] = dword_140404A6C[v37 + 129716745];
          dword_140404A6C[v67 + 606307] = dword_140404A6C[v37 + 129716746];
          if ( (float)((float)((float)((float)(a1[1] - v61) * (float)(a1[1] - v61))
                             + (float)((float)(*a1 - v60) * (float)(*a1 - v60)))
                     + (float)((float)(a1[2] - v63) * (float)(a1[2] - v63))) <= 16384.0 )
          {
            v69 = 1.0;
            if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
              v69 = 0.5;
            LODWORD(v65) = v34[1];
          }
          else
          {
            v69 = 0.5;
          }
          v70 = 278720LL * (int)v65;
          v71 = (float)((float)((float)(v69 * v68) - *((float *)v34 + 3)) * 0.125) + *((float *)v34 + 3);
          *((float *)v34 + 3) = v71;
          *(float *)&dword_140404A6C[v70 + 327704] = v71;
          if ( v71 >= 0.0625 || (_DWORD)v65 == -1 )
            goto LABEL_86;
          if ( !dword_140404A6C[v70 + 327698] )
            dword_140404A6C[v70 + 327698] = 1;
        }
        else
        {
          v72 = (int)*v34;
          if ( (_DWORD)v72 != -1 )
          {
            if ( !dword_140404A6C[278720 * v72 + 327698] )
              dword_140404A6C[278720 * v72 + 327698] = 1;
            *v34 = -1;
            v13 = dword_140404A6C[70326525];
          }
          v73 = (int)v34[1];
          if ( (_DWORD)v73 == -1 )
            goto LABEL_87;
          if ( !dword_140404A6C[278720 * v73 + 327698] )
            dword_140404A6C[278720 * v73 + 327698] = 1;
        }
        v34[1] = -1;
LABEL_86:
        v13 = dword_140404A6C[70326525];
LABEL_87:
        ++v33;
        v34 += 5;
        if ( v33 >= v13 )
        {
          v6 = dword_140404A6C[283831448];
          v4 = dword_140404A6C[283831309];
          break;
        }
      }
    }
  }
  if ( !v4 || v6 == 3 )
  {
LABEL_91:
    v74 = 0;
    if ( v13 > 0 )
    {
      v75 = &dword_140404A6C[70326528];
      do
      {
        v76 = (int)*(v75 - 1);
        if ( (_DWORD)v76 != -1 )
        {
          if ( !dword_140404A6C[278720 * v76 + 327698] )
            dword_140404A6C[278720 * v76 + 327698] = 1;
          *(v75 - 1) = -1;
          v13 = dword_140404A6C[70326525];
        }
        v77 = (int)*v75;
        if ( (_DWORD)v77 != -1 )
        {
          if ( !dword_140404A6C[278720 * v77 + 327698] )
            dword_140404A6C[278720 * v77 + 327698] = 1;
          *v75 = -1;
          v13 = dword_140404A6C[70326525];
        }
        ++v74;
        v75 += 5;
      }
      while ( v74 < v13 );
    }
  }
  v78 = 0;
  while ( v78 < v13 )
  {
    if ( *(v12 - 1) == -1 && *v12 == -1 )
    {
      v79 = v13 - 1;
      dword_140404A6C[70326525] = v79;
      __builtin_memcpy(v12 - 2, &dword_140404A6C[5 * v79 + 70326526], 16);
      v12[2] = dword_140404A6C[5 * v79 + 70326530];
      v13 = dword_140404A6C[70326525];
    }
    else
    {
      ++v78;
      v12 += 5;
    }
  }
  v80 = &dword_140404A6C[71856270];
  do
  {
    *v80 = 0;
    v80 += 3597;
  }
  while ( (__int64)v80 < (__int64)&dword_140404A6C[72777102] );
  if ( !v4 )
  {
    dword_140404A6C[308307077] = 0;
    dword_140404A6C[308403478] = 0;
    dword_140404A6C[308499879] = 0;
    dword_140404A6C[308596280] = 0;
    dword_140404A6C[308692681] = 0;
    dword_140404A6C[308789082] = 0;
    dword_140404A6C[308885483] = 0;
    dword_140404A6C[308981884] = 0;
  }
  v81 = *(float *)&dword_140404A6C[284024513];
  v82 = &dword_140404A6C[308307086];
  v83 = *(float *)&dword_140404A6C[284024512];
  v84 = *(float *)&dword_140404A6C[284024511];
  v85 = *(float *)&dword_140404A6C[284024504];
  v86 = *(float *)&dword_140404A6C[284024503];
  v87 = &dword_140404A6C[308307086];
  v88 = *(float *)&dword_140404A6C[284024502];
  v89 = 4;
  do
  {
    v90 = *(v87 - 9);
    if ( v90 )
    {
      v91 = (int)*(v87 - 7);
      if ( (_DWORD)v91 != -1 && dword_140404A6C[v91 + 284023074] )
      {
        *(v87 - 9) = 0;
        v90 = 0;
      }
      v92 = (int)*(v87 - 5);
      if ( (_DWORD)v92 == -1 || v6 == 3 )
      {
        v96 = (int)*(v87 - 4);
        if ( (_DWORD)v96 == -1 )
        {
          v93 = v85 - v81;
          v94 = v86 - v83;
          v95 = v88 - v84;
        }
        else
        {
          v93 = *(float *)&dword_140404A6C[13 * v96 + 285083827];
          v94 = *(float *)&dword_140404A6C[13 * v96 + 285083826];
          v95 = *(float *)&dword_140404A6C[13 * v96 + 285083825];
        }
      }
      else
      {
        v93 = *(float *)&dword_140404A6C[344 * v92 + 284956409];
        v94 = *(float *)&dword_140404A6C[344 * v92 + 284956408];
        v95 = *(float *)&dword_140404A6C[344 * v92 + 284956407];
      }
      *((float *)v87 - 2) = v95;
      *((float *)v87 - 1) = v94;
      *(float *)v87 = v93;
      if ( v90 && (_DWORD)v91 != -1 )
        dword_140404A6C[3597 * v91 + 71856270] = 1;
    }
    v97 = v87[96392];
    if ( v97 )
    {
      v98 = (int)v87[96394];
      if ( (_DWORD)v98 != -1 && dword_140404A6C[v98 + 284023074] )
      {
        v87[96392] = 0;
        v97 = 0;
      }
      v99 = (int)v87[96396];
      if ( (_DWORD)v99 == -1 || v6 == 3 )
      {
        v103 = (int)v87[96397];
        if ( (_DWORD)v103 == -1 )
        {
          v100 = v85 - v81;
          v101 = v86 - v83;
          v102 = v88 - v84;
        }
        else
        {
          v100 = *(float *)&dword_140404A6C[13 * v103 + 285083827];
          v101 = *(float *)&dword_140404A6C[13 * v103 + 285083826];
          v102 = *(float *)&dword_140404A6C[13 * v103 + 285083825];
        }
      }
      else
      {
        v100 = *(float *)&dword_140404A6C[344 * v99 + 284956409];
        v101 = *(float *)&dword_140404A6C[344 * v99 + 284956408];
        v102 = *(float *)&dword_140404A6C[344 * v99 + 284956407];
      }
      *((float *)v87 + 96399) = v102;
      *((float *)v87 + 96400) = v101;
      *((float *)v87 + 96401) = v100;
      if ( v97 && (_DWORD)v98 != -1 )
        dword_140404A6C[3597 * v98 + 71856270] = 1;
    }
    v87 += 192802;
    --v89;
  }
  while ( v89 );
  v104 = (int **)&dword_140404A6C[299853565];
  v105 = 0;
  v144 = &dword_140404A6C[299853565];
  v106 = 2048;
  sr_position.first = 8;
  v107 = &dword_140404A6C[18182165];
  v108 = 0;
  do
  {
    v109 = *(v82 - 9);
    v110 = v106 - 1992;
    v82[63623] = v106 - 1992;
    if ( v109 && (!*(v82 - 8) || *(v82 - 6) != *(v82 - 7)) )
    {
      sub_1401E27C0(*v104, 4028, (int *)v104);
      v109 = *(v82 - 9);
      v110 = v82[63623];
      v82[30726] = ((unsigned __int8)v82[30725] - 8) & 0x3F;
    }
    *(v82 - 6) = *(v82 - 7);
    *(v82 - 8) = v109;
    if ( v109 )
    {
      if ( dword_140404A6C[7] )
      {
        v111 = 278720LL * v110;
        if ( !dword_140404A6C[v111 + 327697] )
        {
          sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v111 + 327698]), 0, 0x1102FCu);
          v112 = *(v82 - 2);
          dword_140404A6C[v111 + 327772] = 0;
          dword_140404A6C[v111 + 589917] = 0;
          *(_QWORD *)&dword_140404A6C[v111 + 327697] = 1;
          dword_140404A6C[v111 + 327699] = 1065353216;
          dword_140404A6C[v111 + 327700] = 1;
          dword_140404A6C[v111 + 327702] = v106;
          dword_140404A6C[v111 + 327704] = 1065353216;
          dword_140404A6C[v111 + 327705] = 1065353216;
          dword_140404A6C[v111 + 327706] = 1065353216;
          dword_140404A6C[v111 + 327707] = 1065353216;
          dword_140404A6C[v111 + 327708] = 1;
          *(_QWORD *)v107 = 0;
          dword_140404A6C[v111 + 606302] = v112;
          dword_140404A6C[v111 + 606303] = *(v82 - 1);
          dword_140404A6C[v111 + 606304] = *v82;
          dword_140404A6C[v111 + 606308] = v107[2];
          dword_140404A6C[v111 + 606310] = 1;
          dword_140404A6C[v111 + 606414] = 0;
        }
      }
    }
    else
    {
      v113 = 278720LL * v110;
      if ( !dword_140404A6C[v113 + 327698] )
        dword_140404A6C[v113 + 327698] = 1;
    }
    v114 = (int **)v144;
    v115 = 8;
    do
    {
      if ( (int)sub_14007D6C0(v106) < 5760 )
      {
        v116 = (int)v82[30726];
        if ( (_DWORD)v116 != (v82[30725] & 0x3F) )
        {
          v143 = 0;
          v117 = v116;
          v142 = 2048;
          v118 = dword_140404A6C[v105 + 308337813 + v116];
          v119 = *v114;
          v120 = &dword_140404A6C[v108 + 308307091];
          if ( v118 <= 0 )
          {
            sub_1401E25C0(v119, nullptr, 0, (__int64)v120, v142, v143);
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v108 + 308307091]), 0, 0x780u);
          }
          else
          {
            sub_1401E25C0(
              v119,
              (char *)&dword_140404A6C[512 * v117 + 308337941 + v108],
              v118,
              (__int64)v120,
              v142,
              v143);
          }
          v121 = (__int16 *)v82 + 11;
          v122 = 0;
          dword_140404A6C[v105 + 308337813 + (int)v82[30726]] = 0;
          v123 = 96;
          do
          {
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107) & 0x3FFFF)) = (float)*(v121 - 1) * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 1) & 0x3FFFF)) = (float)*v121 * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 2) & 0x3FFFF)) = (float)v121[1] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 3) & 0x3FFFF)) = (float)v121[2] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 4) & 0x3FFFF)) = (float)v121[3] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 5) & 0x3FFFF)) = (float)v121[4] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 6) & 0x3FFFF)) = (float)v121[5] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 7) & 0x3FFFF)) = (float)v121[6] * 0.000030517578;
            v124 = _mm_cvtsi32_si128(v121[7]);
            v121 += 10;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 8) & 0x3FFFF)) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v124), f32)[0]
                                                                                     * 0.000030517578;
            v125 = v122 + *v107;
            v122 += 10;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v125 + 9) & 0x3FFFF)) = (float)*(v121 - 2) * 0.000030517578;
            --v123;
          }
          while ( v123 );
          *v107 = (*v107 + 960) & 0x3FFFF;
          v82[30726] = ((unsigned __int8)v82[30726] + 1) & 0x3F;
        }
      }
      --v115;
    }
    while ( v115 );
    v126 = v82[30725];
    v127 = v82[30726];
    v128 = v126 - v127;
    v129 = v145;
    if ( *(v82 - 9) )
    {
      if ( v126 < v127 )
        v128 += 64;
      if ( v128 > 16 )
        v82[30726] = ((_BYTE)v126 - 8) & 0x3F;
    }
    v130 = v146;
    v131 = (int)v82[63623];
    v132 = *((float *)v82 - 2);
    v133 = *((float *)v82 - 1);
    v134 = *(float *)v82;
    v135 = 278720 * v131;
    v49 = *(v82 - 4) == -1;
    *(float *)&dword_140404A6C[v135 + 606302] = v132;
    *(float *)&dword_140404A6C[v135 + 606303] = v133;
    *(float *)&dword_140404A6C[v135 + 606304] = v134;
    dword_140404A6C[v135 + 606305] = *v130;
    dword_140404A6C[v135 + 606306] = v130[1];
    dword_140404A6C[v135 + 606307] = v130[2];
    if ( v49 )
    {
      v136 = *(v82 - 3);
      if ( v136 )
      {
        if ( v136 == 1 )
          dword_140404A6C[v135 + 606308] = 1086324736;
        else
          dword_140404A6C[v135 + 606308] = 1098907648;
      }
      else
      {
        dword_140404A6C[v135 + 606308] = 0x40000000;
      }
    }
    else
    {
      dword_140404A6C[v135 + 606308] = 1065353216;
    }
    if ( (float)((float)((float)((float)(v129[1] - v133) * (float)(v129[1] - v133))
                       + (float)((float)(*v129 - v132) * (float)(*v129 - v132)))
               + (float)((float)(v129[2] - v134) * (float)(v129[2] - v134))) <= 16384.0 )
    {
      v137 = 1.0;
      if ( (unsigned int)sub_1400DC050((float *)v82 - 2, v129, 0) )
        v137 = 0.5;
      LODWORD(v131) = v82[63623];
    }
    else
    {
      v137 = 0.5;
    }
    ++v106;
    v104 = (int **)(v144 + 2);
    v138 = (float)(v137 - *((float *)v82 + 4)) * 0.125;
    v108 += 96401;
    v144 += 2;
    v139 = v138 + *((float *)v82 + 4);
    v105 += 96401;
    v107 += 8;
    *((float *)v82 + 4) = v139;
    v82 += 96401;
    v49 = sr_position.first-- == 1;
    *(float *)&dword_140404A6C[278720 * (int)v131 + 327704] = v139;
  }
  while ( !v49 );
  return; /* native void spatial audio update */
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140153040) ----------------------------------------------------
_BOOL8            sub_140153040(__int64 a1, __int64 a2, float *a3, float *a4, float *a5, float a6)
{
  int v6; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm12_4
  float v15; // xmm15_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  __int64 v20; // rax
  float v21; // xmm14_4
  float v22; // xmm13_4
  float v23; // xmm8_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm14_4
  __int64 v31; // rax
  float v32; // xmm8_4
  float v33; // xmm6_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm6_4
  float v43; // xmm1_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm12_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm7_4
  float v51; // xmm7_4
  float v52; // xmm3_4
  float v53; // xmm6_4
  float v54; // xmm3_4
  float v55; // xmm9_4
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm3_4
  float v64; // xmm15_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm12_4
  float v68; // xmm12_4
  float v69; // xmm13_4
  float v70; // xmm14_4
  __int64 v71; // rax
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm6_4
  float v75; // xmm5_4
  float v76; // xmm3_4
  float v77; // xmm1_4
  float v78; // xmm6_4
  float v79; // xmm5_4
  float v80; // xmm4_4
  float v81; // xmm6_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm0_4
  float v87; // xmm4_4
  float v88; // xmm5_4
  float v89; // xmm6_4
  float v90; // xmm3_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  float v93; // xmm5_4
  float v94; // xmm0_4
  float v96; // [rsp+48h] [rbp-C0h] BYREF
  float v97; // [rsp+4Ch] [rbp-BCh]
  float v98; // [rsp+50h] [rbp-B8h]
  float v99; // [rsp+58h] [rbp-B0h] BYREF
  float v100; // [rsp+5Ch] [rbp-ACh]
  float v101; // [rsp+60h] [rbp-A8h]
  float v102; // [rsp+68h] [rbp-A0h] BYREF
  float v103; // [rsp+6Ch] [rbp-9Ch]
  float v104; // [rsp+70h] [rbp-98h]
  float v105; // [rsp+78h] [rbp-90h] BYREF
  float v106; // [rsp+7Ch] [rbp-8Ch]
  float v107; // [rsp+80h] [rbp-88h]
  float v108; // [rsp+88h] [rbp-80h]
  float v109; // [rsp+8Ch] [rbp-7Ch]
  float v110; // [rsp+90h] [rbp-78h]
  float v111; // [rsp+94h] [rbp-74h]
  float v112; // [rsp+98h] [rbp-70h]
  float v113[4]; // [rsp+A0h] [rbp-68h] BYREF
  float v114[4]; // [rsp+B0h] [rbp-58h] BYREF
  float v115[4]; // [rsp+C0h] [rbp-48h] BYREF
  float v116[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v117; // [rsp+E0h] [rbp-28h] BYREF
  float v118; // [rsp+1C8h] [rbp+C0h]
  float v119; // [rsp+1D0h] [rbp+C8h]

  v6 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( *(int *)(a2 + 48) <= 0 )
    return 0;
  v11 = 0;
  do
  {
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *(_QWORD *)(a2 + 56);
    v14 = a4[3];
    v15 = *a4;
    v16 = 3 * *(_DWORD *)(v11 + v13 + 8);
    v17 = *(float *)(v12 + 4 * v16);
    v18 = *(float *)(v12 + 4 * v16 + 4);
    v19 = *(float *)(v12 + 4 * v16 + 8);
    v20 = 3 * *(_DWORD *)(v11 + v13 + 12);
    v21 = a4[4] * v18;
    v22 = (float)(v14 * v18) + (float)(*a4 * v17);
    v23 = a4[5] * v18;
    v24 = *(float *)(v12 + 4 * v20 + 4);
    v25 = *(float *)(v12 + 4 * v20);
    v26 = v22 + (float)(a4[6] * v19);
    v27 = v21 + (float)(a4[1] * v17);
    v28 = a4[2] * v17;
    v29 = *(float *)(v12 + 4 * v20 + 8);
    v30 = v27 + (float)(a4[7] * v19);
    v31 = 3 * *(_DWORD *)(v11 + v13 + 16);
    v32 = (float)(v23 + v28) + (float)(a4[8] * v19);
    v33 = v25;
    v34 = (float)((float)(v25 * *a4) + (float)(v24 * v14)) + (float)(v29 * a4[6]);
    v35 = *(float *)(v12 + 4 * v31);
    v36 = v29 * a4[7];
    v37 = (float)(v25 * a4[2]) + (float)(v24 * a4[5]);
    v38 = (float)(v33 * a4[1]) + (float)(v24 * a4[4]);
    v39 = *(float *)(v12 + 4 * v31 + 4);
    v40 = v37 + (float)(v29 * a4[8]);
    v41 = *(float *)(v12 + 4 * v31 + 8);
    v42 = v38 + v36;
    v118 = v32;
    v43 = v41 * a4[6];
    v119 = v34;
    v108 = v42;
    v109 = v40;
    v44 = (float)((float)(v35 * v15) + (float)(v39 * v14)) + v43;
    v45 = v39 * a4[4];
    v46 = v34 - v26;
    v47 = v35 * a4[1];
    v48 = v41 * a4[7];
    v49 = v41 * a4[8];
    v50 = (float)(v35 * a4[2]) + (float)(v39 * a4[5]);
    v110 = v44;
    v51 = v50 + v49;
    v52 = v42;
    v111 = (float)(v47 + v45) + v48;
    v53 = v44 - v26;
    v54 = v52 - v30;
    v112 = v51;
    v55 = (float)((float)(v111 - v30) * (float)(v40 - v32)) - (float)((float)(v51 - v32) * v54);
    v56 = (float)((float)(v51 - v32) * v46) - (float)(v53 * (float)(v40 - v32));
    v57 = (float)(v53 * v54) - (float)((float)(v111 - v30) * v46);
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      v96 = 0.0;
      v59 = 0.0;
      v97 = 0.0;
      v60 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      v96 = v59;
      v61 = (float)(1.0 / v58) * v57;
      v97 = v60;
    }
    v62 = *(_DWORD *)(v11 + v13 + 4) == 4;
    v63 = *a3;
    v64 = a3[1];
    v65 = *a3 + v119;
    v66 = a3[2];
    v67 = *a3;
    v98 = v61;
    v68 = v67 + v26;
    v115[0] = v65;
    v69 = v64 + v30;
    v70 = v66 + v118;
    v115[1] = v64 + v108;
    v114[0] = v68;
    v115[2] = v66 + v109;
    v114[1] = v69;
    v113[0] = v63 + v110;
    v114[2] = v66 + v118;
    v113[1] = v64 + v111;
    v113[2] = v66 + v112;
    if ( v62 )
    {
      v71 = 3 * *(_DWORD *)(v11 + v13 + 20);
      v72 = *(float *)(v12 + 4 * v71);
      v73 = (float)((float)(v72 * *a4) + (float)(*(float *)(v12 + 4 * v71 + 4) * a4[3]))
          + (float)((float)(*(float *)(v12 + 4 * v71 + 8) * a4[6]) + v63);
      v74 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[8]) + (float)(v72 * a4[2]);
      v75 = *(float *)(v12 + 4 * v71 + 4) * a4[5];
      v76 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[7]) + (float)(v72 * a4[1]);
      v77 = (float)(*(float *)(v12 + 4 * v71 + 4) * a4[4]) + v64;
      v116[0] = v73;
      v78 = v74 + (float)(v75 + a3[2]);
      v116[1] = v76 + v77;
      v116[2] = v78;
    }
    v79 = a5[1];
    v80 = *a5;
    v81 = a5[2];
    v82 = *a5 - v68;
    v103 = v79 - v69;
    v102 = v82;
    v104 = v81 - v70;
    v83 = (float)((float)(v60 * (float)(v79 - v69)) + (float)(v59 * v82)) + (float)(v61 * (float)(v81 - v70));
    if ( v83 <= a6 && v83 >= 0.0 )
    {
      v102 = (float)(v59 * (float)-a6) + v80;
      v103 = (float)(v60 * (float)-a6) + v79;
      v104 = (float)(v61 * (float)-a6) + v81;
      if ( sub_140077FA0(&v99, &v96, (float *)&v117, a5, &v102, v114, v115, v113) )
      {
        v84 = v100;
        v85 = v101;
        v86 = fsqrt(
                (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                      + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
              + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
        if ( (float)(a6 - v86) > *(float *)(a1 + 28) )
        {
          *(float *)a1 = v99;
          *(float *)(a1 + 4) = v84;
          *(float *)(a1 + 8) = v85;
          *(float *)(a1 + 12) = v59;
          *(float *)(a1 + 16) = v60;
          *(float *)(a1 + 20) = v61;
          *(float *)(a1 + 28) = a6 - v86;
        }
      }
    }
    if ( *(_DWORD *)(v11 + *(_QWORD *)(a2 + 56) + 4) == 4 )
    {
      v87 = *a5;
      v88 = a5[1];
      v89 = a5[2];
      v90 = v59 * (float)(*a5 - v68);
      v105 = *a5 - v68;
      v106 = v88 - v69;
      v107 = v89 - v70;
      v91 = (float)(v90 + (float)(v60 * (float)(v88 - v69))) + (float)(v61 * (float)(v89 - v70));
      if ( v91 <= a6 && v91 >= 0.0 )
      {
        v105 = (float)(v59 * (float)-a6) + v87;
        v106 = (float)(v60 * (float)-a6) + v88;
        v107 = (float)(v61 * (float)-a6) + v89;
        if ( sub_140077FA0(&v99, &v96, (float *)&v117 + 1, a5, &v105, v114, v113, v116) )
        {
          v92 = v100;
          v93 = v101;
          v94 = fsqrt(
                  (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                        + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
                + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
          if ( (float)(a6 - v94) > *(float *)(a1 + 28) )
          {
            *(float *)a1 = v99;
            *(float *)(a1 + 4) = v92;
            *(float *)(a1 + 8) = v93;
            *(float *)(a1 + 12) = v59;
            *(float *)(a1 + 16) = v60;
            *(float *)(a1 + 20) = v61;
            *(float *)(a1 + 28) = a6 - v94;
          }
        }
      }
    }
    ++v6;
    v11 += 36;
  }
  while ( v6 < *(_DWORD *)(a2 + 48) );
  return *(float *)(a1 + 28) > 0.0;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401540B0) ----------------------------------------------------
__int64            sub_1401540B0(float *a1, float a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  signed int v4; // ebx
  __int64 v7; // [rsp+28h] [rbp-40h]
  float v8[4]; // [rsp+30h] [rbp-38h] BYREF
  float v9[4]; // [rsp+40h] [rbp-28h] BYREF
  float v10; // [rsp+88h] [rbp+20h] BYREF

  v2 = &dword_140404A6C[111579637];
  v3 = 0;
  dword_140404A6C[73006987] = 1065353216;
  v4 = 0;
  dword_140404A6C[73006988] = 1199570944;
  dword_140404A6C[73007012] = -1;
  dword_140404A6C[73007015] = -1;
  do
  {
    if ( *v2 )
    {
      *(float *)&v7 = a2;
      if ( (unsigned int)sub_140151190(v8, v9, &v10, v4, a1, v7) )
      {
        if ( *(float *)&dword_140404A6C[73006988] > v10 )
        {
          *(float *)&dword_140404A6C[73006981] = v8[0];
          *(float *)&dword_140404A6C[73006982] = v8[1];
          *(float *)&dword_140404A6C[73006983] = v8[2];
          *(float *)&dword_140404A6C[73006984] = v9[0];
          *(float *)&dword_140404A6C[73006985] = v9[1];
          *(float *)&dword_140404A6C[73006986] = v9[2];
          *(float *)&dword_140404A6C[73006988] = v10;
          dword_140404A6C[73007002] = v4;
        }
      }
    }
    ++v4;
    v2 += 263004;
  }
  while ( v4 < 4 );
  LOBYTE(v3) = *(float *)&dword_140404A6C[73006988] < 65536.0;
  return v3;
}

// 140154130: variable 'v7' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848D4: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (0000000140154200) ----------------------------------------------------
__int64            sub_140154200(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7)
{
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm4_4

  v7 = 0.0;
  v8 = *a7 - *a6;
  v9 = a7[1] - a6[1];
  v10 = a7[2] - a6[2];
  v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  if ( v11 == 0.0 )
  {
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v12 = v8 * (float)(1.0 / v11);
    v13 = v9 * (float)(1.0 / v11);
    v14 = v10 * (float)(1.0 / v11);
  }
  v15 = (float)((float)((float)(*a4 - *a6) * v12) + (float)((float)(a4[1] - a6[1]) * v13))
      + (float)((float)(a4[2] - a6[2]) * v14);
  if ( v15 <= 0.0 )
    return 0;
  if ( v15 >= v11 )
    return 0;
  v16 = (float)(v12 * v15) + *a6;
  *a1 = v16;
  v17 = (float)(v13 * v15) + a6[1];
  a1[1] = v17;
  v18 = (float)(v14 * v15) + a6[2];
  a1[2] = v18;
  v19 = *a4 - v16;
  v20 = a4[1] - v17;
  v21 = a4[2] - v18;
  v22 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
  if ( v22 >= a5 )
    return 0;
  if ( v22 == 0.0 )
  {
    v23 = 0.0;
    v24 = 0.0;
  }
  else
  {
    v7 = (float)(1.0 / v22) * v21;
    v23 = (float)(1.0 / v22) * v20;
    v24 = (float)(1.0 / v22) * v19;
  }
  *a2 = v24;
  a2[1] = v23;
  a2[2] = v7;
  *a3 = v22;
  return 1;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B34F0: using guessed type int sr_static_voxel_vertices[];
// 1402B3558: using guessed type int (sr_static_voxel_normals+2)[18];
// 1402B3664: using guessed type int (sr_static_voxel_faces+1)[];

//----- (00000001401550A0) ----------------------------------------------------
_BOOL8            sub_1401550A0(int a1, float *a2, float a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  signed int v7; // esi
  int *v8; // rdi
  __int64 v9; // rax
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm15_4
  __int64 v13; // rax
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rax
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  __int64 v25; // rax
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  __int64 v29; // rax
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm13_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm8_4
  float v36; // xmm3_4
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  float v40; // xmm12_4
  float v41; // xmm13_4
  float v42; // xmm11_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm6_4
  float v46; // xmm5_4
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v51; // [rsp+48h] [rbp-C0h] BYREF
  float v52; // [rsp+50h] [rbp-B8h]
  unsigned int v53; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+5Ch] [rbp-ACh]
  unsigned int v55; // [rsp+60h] [rbp-A8h]
  float v56[3]; // [rsp+68h] [rbp-A0h] BYREF
  float v57[4]; // [rsp+78h] [rbp-90h] BYREF
  float v58[4]; // [rsp+88h] [rbp-80h] BYREF
  float v59[6]; // [rsp+98h] [rbp-70h] BYREF
  float v60; // [rsp+188h] [rbp+80h] BYREF
  float v61; // [rsp+190h] [rbp+88h]
  float v62; // [rsp+198h] [rbp+90h]

  v3 = a1;
  v4 = 5210LL * a1;
  if ( (float)(*a2 + a3) < *(float *)&dword_140404A6C[v4 + 129716753] )
    return 0;
  if ( (float)(a2[1] + a3) < *(float *)&dword_140404A6C[v4 + 129716754] )
    return 0;
  if ( (float)(a2[2] + a3) < *(float *)&dword_140404A6C[v4 + 129716755] )
    return 0;
  if ( (float)(*a2 - a3) > *(float *)&dword_140404A6C[v4 + 129716756] )
    return 0;
  if ( (float)(a2[1] - a3) > *(float *)&dword_140404A6C[v4 + 129716757] )
    return 0;
  if ( (float)(a2[2] - a3) > *(float *)&dword_140404A6C[v4 + 129716758] )
    return 0;
  v7 = 0;
  dword_140404A6C[73006988] = 1199570944;
  if ( (int)dword_140404A6C[v4 + 129717219] <= 0 )
    return 0;
  v8 = (int *)&dword_140404A6C[v4 + 129717222];
  do
  {
    if ( dword_140404A6C[v4 + 129716710] != 13 || v8[13] > 0 )
    {
      v9 = v4 * 4 + 16LL * *(v8 - 1);
      v10 = *(float *)((char *)&dword_140404A6C[129719654] + v9);
      v11 = *(float *)((char *)&dword_140404A6C[129719655] + v9);
      v12 = *(float *)((char *)&dword_140404A6C[129719653] + v9);
      v13 = *v8;
      v62 = v10;
      v57[1] = v10;
      v14 = v4 * 4 + 16 * v13;
      v61 = v11;
      v57[2] = v11;
      v57[0] = v12;
      v15 = *(float *)((char *)&dword_140404A6C[129719653] + v14);
      v16 = *(float *)((char *)&dword_140404A6C[129719654] + v14);
      v17 = *(float *)((char *)&dword_140404A6C[129719655] + v14);
      v18 = v4 * 4 + 16LL * v8[1];
      v58[1] = v16;
      v19 = v16 - v10;
      v58[2] = v17;
      v20 = v17 - v11;
      v58[0] = v15;
      v21 = v15 - v12;
      v22 = *(float *)((char *)&dword_140404A6C[129719654] + v18);
      v23 = *(float *)((char *)&dword_140404A6C[129719655] + v18);
      v24 = *(float *)((char *)&dword_140404A6C[129719653] + v18);
      v25 = v8[2];
      v56[1] = v22;
      v26 = v22 - v10;
      v56[2] = v23;
      v27 = v23 - v11;
      v56[0] = v24;
      v28 = v24 - v12;
      v29 = v4 * 4 + 16 * v25;
      v30 = *(float *)((char *)&dword_140404A6C[129719653] + v29);
      v31 = *(float *)((char *)&dword_140404A6C[129719654] + v29);
      v32 = *(float *)((char *)&dword_140404A6C[129719655] + v29);
      v33 = (float)(v26 * v20) - (float)(v27 * v19);
      v59[0] = v30;
      v59[1] = v31;
      v34 = (float)(v27 * v21) - (float)(v28 * v20);
      v59[2] = v32;
      v35 = (float)(v28 * v19) - (float)(v26 * v21);
      v36 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
      if ( v36 == 0.0 )
      {
        v51 = 0;
        v52 = 0.0;
      }
      else
      {
        *(float *)&v51 = v33 * (float)(1.0 / v36);
        *((float *)&v51 + 1) = v34 * (float)(1.0 / v36);
        v52 = v35 * (float)(1.0 / v36);
      }
      if ( sub_140158760((float *)&v53, (float *)&v51, &v60, a2, a3, v57, v58, v56)
        && *(float *)&dword_140404A6C[73006988] > v60 )
      {
        v37 = v4 * 4 + 16LL * *(v8 - 1);
        dword_140404A6C[73006981] = v53;
        dword_140404A6C[73006982] = v54;
        dword_140404A6C[73006983] = v55;
        v38 = 5210 * v3 + *(int *)((char *)&dword_140404A6C[129719656] + v37);
        *(_QWORD *)&dword_140404A6C[73006984] = v51;
        *(float *)&dword_140404A6C[73006986] = v52;
        dword_140404A6C[73006994] = dword_140404A6C[v38 + 129716769];
        v39 = v4 * 4 + 16LL * *v8;
        *(float *)&dword_140404A6C[73006988] = v60;
        dword_140404A6C[73006993] = v7;
        dword_140404A6C[73006995] = dword_140404A6C[5210 * v3
                                                  + 129716769
                                                  + *(int *)((char *)&dword_140404A6C[129719656] + v39)];
        dword_140404A6C[73006996] = dword_140404A6C[5210 * v3
                                                  + 129716769
                                                  + (int)dword_140404A6C[4 * v8[1] + 129719656 + v4]];
        sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], v57, v58, v56);
      }
      if ( *(v8 - 2) == 4 )
      {
        v40 = v31 - v62;
        v41 = v32 - v61;
        v42 = v30 - v12;
        v43 = (float)(v27 * v40) - (float)(v26 * v41);
        v44 = (float)(v28 * v41) - (float)(v27 * v42);
        v45 = (float)(v26 * v42) - (float)(v28 * v40);
        v46 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
        if ( v46 == 0.0 )
        {
          v51 = 0;
          v52 = 0.0;
        }
        else
        {
          *(float *)&v51 = v43 * (float)(1.0 / v46);
          *((float *)&v51 + 1) = v44 * (float)(1.0 / v46);
          v52 = v45 * (float)(1.0 / v46);
        }
        if ( sub_140158760((float *)&v53, (float *)&v51, &v60, a2, a3, v57, v56, v59)
          && *(float *)&dword_140404A6C[73006988] > v60 )
        {
          v47 = v4 * 4 + 16LL * *(v8 - 1);
          dword_140404A6C[73006981] = v53;
          dword_140404A6C[73006982] = v54;
          dword_140404A6C[73006983] = v55;
          v48 = 5210 * v3 + *(int *)((char *)&dword_140404A6C[129719656] + v47);
          *(_QWORD *)&dword_140404A6C[73006984] = v51;
          *(float *)&dword_140404A6C[73006986] = v52;
          dword_140404A6C[73006994] = dword_140404A6C[v48 + 129716769];
          v49 = v4 * 4 + 16LL * v8[1];
          *(float *)&dword_140404A6C[73006988] = v60;
          dword_140404A6C[73006993] = v7;
          dword_140404A6C[73006995] = dword_140404A6C[5210 * v3
                                                    + 129716769
                                                    + *(int *)((char *)&dword_140404A6C[129719656] + v49)];
          dword_140404A6C[73006996] = dword_140404A6C[5210 * v3
                                                    + 129716769
                                                    + (int)dword_140404A6C[4 * v8[2] + 129719656 + v4]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], v57, v56, v59);
        }
      }
    }
    ++v7;
    v8 += 16;
  }
  while ( v7 < (int)dword_140404A6C[v4 + 129717219] );
  return *(float *)&dword_140404A6C[73006988] < 65536.0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;
// 151A848B8: using guessed type unsigned int;
// 151A848BC: using guessed type unsigned int;

//----- (0000000140155790) ----------------------------------------------------
__int64            sub_140155790(int a1, float *a2, float a3)
{
  float v3; // xmm3_4
  float *v4; // r14
  float v6; // xmm0_4
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r15
  signed int v10; // edi
  __int64 v11; // r11
  __int64 v12; // rdx
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm13_4
  float v19; // xmm14_4
  float v20; // xmm15_4
  float *v21; // rax
  signed __int64 v22; // r12
  signed __int64 v23; // rbx
  signed __int64 v24; // r13
  signed __int64 v25; // r14
  signed __int64 v26; // rsi
  signed __int64 v27; // rdi
  char *v28; // rcx
  signed __int64 v29; // r15
  signed __int64 v30; // r9
  unsigned __int64 v31; // rcx
  signed __int64 v32; // rdx
  __int64 v33; // rcx
  signed __int64 v34; // r11
  float v35; // xmm4_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm5_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm6_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm0_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm4_4
  float v55; // xmm1_4
  float v56; // xmm6_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  float v64; // xmm5_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  float v67; // xmm6_4
  float v68; // xmm2_4
  __int64 v69; // r10
  float v70; // xmm1_4
  float v71; // xmm0_4
  signed __int64 v72; // r10
  float v73; // xmm1_4
  float v74; // xmm7_4
  float v75; // xmm8_4
  float v76; // xmm9_4
  float v77; // xmm11_4
  float v78; // xmm12_4
  float v79; // xmm13_4
  float v80; // xmm14_4
  float v81; // xmm15_4
  float *v82; // rcx
  __int64 v83; // rdx
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm6_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm3_4
  float v90; // xmm1_4
  int *v91; // rbx
  _DWORD *v92; // rsi
  float v93; // xmm11_4
  float v94; // xmm12_4
  float v95; // xmm13_4
  __int64 v96; // rcx
  float v97; // xmm1_4
  float v98; // xmm3_4
  __int64 v99; // rax
  float v100; // xmm1_4
  float v101; // xmm3_4
  float v102; // xmm9_4
  float v103; // xmm7_4
  float v104; // xmm8_4
  float v105; // xmm9_4
  float v106; // xmm7_4
  float v107; // xmm4_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  float v110; // xmm0_4
  __int64 v111; // rax
  __int64 v112; // rax
  float v113; // xmm3_4
  float v114; // xmm4_4
  float v115; // xmm3_4
  float v116; // xmm4_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  float v119; // xmm4_4
  float v120; // xmm1_4
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v124; // [rsp+40h] [rbp-C0h] BYREF
  float v125; // [rsp+48h] [rbp-B8h]
  __int64 v126; // [rsp+50h] [rbp-B0h] BYREF
  float v127; // [rsp+58h] [rbp-A8h]
  __int64 v128; // [rsp+60h] [rbp-A0h] BYREF
  float v129; // [rsp+68h] [rbp-98h]
  __int64 v130; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v131; // [rsp+78h] [rbp-88h]
  signed __int64 v132; // [rsp+80h] [rbp-80h] BYREF
  float v133; // [rsp+88h] [rbp-78h]
  signed __int64 v134; // [rsp+90h] [rbp-70h]
  signed __int64 v135; // [rsp+98h] [rbp-68h]
  signed __int64 v136; // [rsp+A0h] [rbp-60h]
  signed __int64 v137; // [rsp+A8h] [rbp-58h]
  signed __int64 v138; // [rsp+B0h] [rbp-50h]
  signed __int64 v139; // [rsp+B8h] [rbp-48h]
  __int64 v140; // [rsp+C0h] [rbp-40h]
  float v141; // [rsp+1B0h] [rbp+B0h] BYREF
  float *v142; // [rsp+1B8h] [rbp+B8h]
  signed __int64 v143; // [rsp+1C8h] [rbp+C8h]

  v142 = a2;
  v3 = *a2;
  v4 = a2;
  v6 = *a2 + a3;
  v7 = a1;
  v8 = 5210LL * a1;
  v124 = a1;
  if ( v6 < *(float *)&dword_140404A6C[v8 + 129716753]
    || (float)(a2[1] + a3) < *(float *)&dword_140404A6C[v8 + 129716754]
    || (float)(a2[2] + a3) < *(float *)&dword_140404A6C[v8 + 129716755]
    || (float)(v3 - a3) > *(float *)&dword_140404A6C[v8 + 129716756]
    || (float)(a2[1] - a3) > *(float *)&dword_140404A6C[v8 + 129716757]
    || (float)(a2[2] - a3) > *(float *)&dword_140404A6C[v8 + 129716758] )
  {
    return 0;
  }
  v9 = 99776LL * (int)dword_140404A6C[v8 + 129716710];
  v10 = 0;
  dword_140404A6C[73006988] = 1199570944;
  v126 = v9;
  v11 = 0;
  v12 = *(int *)((char *)&dword_140404A6C[346715422] + v9);
  v130 = v12;
  if ( v12 >= 4 )
  {
    v13 = *(float *)&dword_140404A6C[v8 + 129716726];
    v14 = *(float *)&dword_140404A6C[v8 + 129716720];
    v15 = *(float *)&dword_140404A6C[v8 + 129716727];
    v16 = *(float *)&dword_140404A6C[v8 + 129716721];
    v17 = *(float *)&dword_140404A6C[v8 + 129716728];
    v18 = *(float *)&dword_140404A6C[v8 + 129716722];
    v19 = *(float *)&dword_140404A6C[v8 + 129716729];
    v20 = *(float *)&dword_140404A6C[v8 + 129716730];
    v21 = (float *)((char *)&dword_140404A6C[346715424] + v9);
    v143 = (char *)&dword_140404A6C[19060722] - v9 - (char *)&dword_140404A6C[346715424];
    v22 = v143;
    v23 = (char *)&dword_140404A6C[19060718] - v9 - (char *)&dword_140404A6C[346715424];
    v134 = (char *)&dword_140404A6C[19060724] - v9 - (char *)&dword_140404A6C[346715424];
    v24 = (char *)&dword_140404A6C[19060721] - v9 - (char *)&dword_140404A6C[346715424];
    v25 = v134;
    v135 = (char *)&dword_140404A6C[19060725] - v9 - (char *)&dword_140404A6C[346715424];
    v26 = (char *)&dword_140404A6C[19060719] - v9 - (char *)&dword_140404A6C[346715424];
    v27 = v135;
    v136 = (char *)&dword_140404A6C[19060727] - v9 - (char *)&dword_140404A6C[346715424];
    v132 = (char *)&dword_140404A6C[19060728] - v9 - (char *)&dword_140404A6C[346715424];
    v137 = (char *)&dword_140404A6C[19060717] - v9 - (char *)&dword_140404A6C[346715424];
    v138 = (char *)&dword_140404A6C[19060720] - v9 - (char *)&dword_140404A6C[346715424];
    v139 = (char *)&dword_140404A6C[19060723] - v9 - (char *)&dword_140404A6C[346715424];
    v28 = (char *)&dword_140404A6C[19060726] - v9;
    v29 = v137;
    v30 = v136;
    v140 = v28 - (char *)&dword_140404A6C[346715424];
    v31 = v12 - 4;
    v32 = v138;
    v33 = (v31 >> 2) + 1;
    v128 = 4 * v33;
    v34 = v139;
    do
    {
      v35 = *(v21 - 1);
      v36 = v21[1];
      v37 = *(float *)&dword_140404A6C[v8 + 129716731] * *v21;
      v38 = v21[3];
      v39 = (float)((float)((float)(v15 * v35) + v16) + (float)(v20 * *v21))
          + (float)(*(float *)&dword_140404A6C[v8 + 129716733] * v36);
      v40 = *(float *)&dword_140404A6C[v8 + 129716734];
      *(float *)((char *)v21 + v29) = (float)((float)((float)(v13 * v35) + v14) + (float)(v19 * *v21))
                                    + (float)(*(float *)&dword_140404A6C[v8 + 129716732] * v36);
      v41 = v17 * v35;
      v42 = v21[2];
      v43 = v40 * v36;
      v44 = v21[4];
      *(float *)((char *)v21 + v23) = v39;
      v45 = (float)((float)(v41 + v18) + v37) + v43;
      v46 = *(float *)&dword_140404A6C[v8 + 129716732] * v44;
      *(float *)((char *)v21 + v26) = v45;
      v47 = (float)((float)((float)(v13 * v42) + v14) + (float)(v19 * v38)) + v46;
      v48 = (float)((float)(v15 * v42) + v16) + (float)(v20 * v38);
      v49 = *(float *)&dword_140404A6C[v8 + 129716731] * v38;
      v50 = v21[6];
      v51 = v48 + (float)(*(float *)&dword_140404A6C[v8 + 129716733] * v44);
      v52 = *(float *)&dword_140404A6C[v8 + 129716734];
      *(float *)((char *)v21 + v32) = v47;
      v53 = v17 * v42;
      v54 = v21[5];
      v55 = v52 * v44;
      v56 = v21[7];
      *(float *)((char *)v21 + v24) = v51;
      v57 = (float)((float)(v53 + v18) + v49) + v55;
      v58 = *(float *)&dword_140404A6C[v8 + 129716732] * v56;
      *(float *)((char *)v21 + v22) = v57;
      *(float *)((char *)v21 + v34) = (float)((float)((float)(v13 * v54) + v14) + (float)(v19 * v50)) + v58;
      v59 = (float)(v17 * v54) + v18;
      v60 = v15 * v54;
      v61 = v21[8];
      v62 = (float)(v60 + v16) + (float)(v20 * v50);
      v63 = *(float *)&dword_140404A6C[v8 + 129716731] * v50;
      v64 = v21[9];
      v65 = v62 + (float)(*(float *)&dword_140404A6C[v8 + 129716733] * v56);
      v66 = *(float *)&dword_140404A6C[v8 + 129716734] * v56;
      v67 = v21[10];
      *(float *)((char *)v21 + v25) = v65;
      v68 = (float)(v59 + v63) + v66;
      v69 = v140;
      v70 = *(float *)&dword_140404A6C[v8 + 129716732] * v67;
      *(float *)((char *)v21 + v27) = v68;
      *(float *)((char *)v21 + v69) = (float)((float)((float)(v13 * v61) + v14) + (float)(v19 * v64)) + v70;
      v71 = *(float *)&dword_140404A6C[v8 + 129716731] * v64;
      v72 = v132;
      v73 = *(float *)&dword_140404A6C[v8 + 129716734] * v67;
      *(float *)((char *)v21 + v30) = (float)((float)((float)(v15 * v61) + v16) + (float)(v20 * v64))
                                    + (float)(*(float *)&dword_140404A6C[v8 + 129716733] * v67);
      *(float *)((char *)v21 + v72) = (float)((float)((float)(v17 * v61) + v18) + v71) + v73;
      v21 += 12;
      --v33;
    }
    while ( v33 );
    v12 = v130;
    v11 = v128;
    v4 = v142;
    v10 = 0;
    v9 = v126;
    v7 = v124;
    if ( v128 >= v130 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( v12 > 0 )
  {
LABEL_11:
    v74 = *(float *)&dword_140404A6C[v8 + 129716726];
    v75 = *(float *)&dword_140404A6C[v8 + 129716720];
    v76 = *(float *)&dword_140404A6C[v8 + 129716727];
    v77 = *(float *)&dword_140404A6C[v8 + 129716721];
    v78 = *(float *)&dword_140404A6C[v8 + 129716728];
    v79 = *(float *)&dword_140404A6C[v8 + 129716722];
    v80 = *(float *)&dword_140404A6C[v8 + 129716729];
    v81 = *(float *)&dword_140404A6C[v8 + 129716730];
    v82 = (float *)((char *)&dword_140404A6C[3 * v11 + 346715424] + v9);
    v83 = v12 - v11;
    do
    {
      v84 = *(v82 - 1);
      v85 = *v82;
      v86 = v82[1];
      v87 = *(float *)&dword_140404A6C[v8 + 129716733] * v86;
      v88 = *(float *)&dword_140404A6C[v8 + 129716731] * *v82;
      *(float *)((uintptr_t)v82 + (uintptr_t)&dword_140404A6C[19060717] - v9 - (uintptr_t)&dword_140404A6C[346715424]) = (float)((float)((float)(v74 * v84) + v75) + (float)(v80 * *v82)) + (float)(*(float *)&dword_140404A6C[v8 + 129716732] * v86);
      v89 = (float)((float)((float)(v76 * v84) + v77) + (float)(v81 * v85)) + v87;
      v90 = *(float *)&dword_140404A6C[v8 + 129716734] * v86;
      *(float *)((uintptr_t)v82 + (uintptr_t)&dword_140404A6C[19060718] - v9 - (uintptr_t)&dword_140404A6C[346715424]) = v89;
      *(float *)((uintptr_t)v82 + (uintptr_t)&dword_140404A6C[19060719] - v9 - (uintptr_t)&dword_140404A6C[346715424]) = (float)((float)((float)(v78 * v84) + v79) + v88) + v90;
      v82 += 3;
      --v83;
    }
    while ( v83 );
  }
LABEL_13:
  if ( *(int *)((char *)&dword_140404A6C[346718495] + v9) > 0 )
  {
    v91 = (int *)((char *)&dword_140404A6C[346718497] + v9);
    v92 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v8 * 4 + 523082236);
    do
    {
      LODWORD(v93) = dword_140404A6C[3 * *v91 + 19060717];
      LODWORD(v94) = dword_140404A6C[3 * *v91 + 19060718];
      v95 = *(float *)&dword_140404A6C[3 * *v91 + 19060719];
      v96 = 3LL * v91[1];
      v132 = __PAIR64__(LODWORD(v94), LODWORD(v93));
      v97 = *(float *)&dword_140404A6C[v96 + 19060719];
      v98 = *(float *)&dword_140404A6C[v96 + 19060717];
      v99 = v91[2];
      HIDWORD(v128) = dword_140404A6C[v96 + 19060718];
      v129 = v97;
      v100 = v97 - v95;
      *(float *)&v128 = v98;
      v101 = v98 - v93;
      v102 = *(float *)&dword_140404A6C[3 * v99 + 19060719];
      v103 = *(float *)&dword_140404A6C[3 * v99 + 19060717];
      HIDWORD(v126) = dword_140404A6C[3 * v99 + 19060718];
      v104 = *((float *)&v126 + 1) - v94;
      v127 = v102;
      v105 = v102 - v95;
      *(float *)&v126 = v103;
      v106 = v103 - v93;
      v133 = v95;
      v107 = (float)((float)(*((float *)&v126 + 1) - v94) * v100) - (float)(v105 * (float)(*((float *)&v128 + 1) - v94));
      v108 = (float)(v105 * v101) - (float)(v106 * v100);
      v109 = (float)(v106 * (float)(*((float *)&v128 + 1) - v94)) - (float)((float)(*((float *)&v126 + 1) - v94) * v101);
      v110 = fsqrt((float)((float)(v108 * v108) + (float)(v107 * v107)) + (float)(v109 * v109));
      if ( v110 == 0.0 )
      {
        v124 = 0;
        v125 = 0.0;
      }
      else
      {
        *(float *)&v124 = (float)(1.0 / v110) * v107;
        *((float *)&v124 + 1) = (float)(1.0 / v110) * v108;
        v125 = (float)(1.0 / v110) * v109;
      }
      if ( sub_140158760((float *)&v130, (float *)&v124, &v141, v4, a3, (float *)&v132, (float *)&v128, (float *)&v126)
        && *(float *)&dword_140404A6C[73006988] > v141 )
      {
        v111 = *v91;
        *(_QWORD *)&dword_140404A6C[73006981] = v130;
        dword_140404A6C[73006983] = v131;
        *(_QWORD *)&dword_140404A6C[73006984] = v124;
        dword_140404A6C[73006994] = dword_140404A6C[5210 * v7 + 129716769 + v111];
        v112 = 5210 * v7 + v91[1];
        *(float *)&dword_140404A6C[73006986] = v125;
        *(float *)&dword_140404A6C[73006988] = v141;
        dword_140404A6C[73006993] = v10;
        dword_140404A6C[73006995] = dword_140404A6C[v112 + 129716769];
        dword_140404A6C[73006996] = dword_140404A6C[5210 * v7 + 129716769 + v91[2]];
        sub_14002D370(
          (float *)&dword_140404A6C[73006998],
          (float *)&dword_140404A6C[73006981],
          (float *)&v132,
          (float *)&v128,
          (float *)&v126);
      }
      if ( *v92 == 4 )
      {
        v128 = v126;
        v129 = v127;
        v113 = *(float *)&dword_140404A6C[3 * v91[3] + 19060719];
        v114 = *(float *)&dword_140404A6C[3 * v91[3] + 19060717];
        HIDWORD(v126) = dword_140404A6C[3 * v91[3] + 19060718];
        v127 = v113;
        v115 = v113 - v95;
        *(float *)&v126 = v114;
        v116 = v114 - v93;
        v117 = (float)((float)(*((float *)&v126 + 1) - v94) * v105) - (float)(v115 * v104);
        v118 = (float)(v115 * v106) - (float)(v116 * v105);
        v119 = (float)(v116 * v104) - (float)((float)(*((float *)&v126 + 1) - v94) * v106);
        v120 = fsqrt((float)((float)(v118 * v118) + (float)(v117 * v117)) + (float)(v119 * v119));
        if ( v120 == 0.0 )
        {
          v124 = 0;
          v125 = 0.0;
        }
        else
        {
          *(float *)&v124 = v117 * (float)(1.0 / v120);
          *((float *)&v124 + 1) = v118 * (float)(1.0 / v120);
          v125 = v119 * (float)(1.0 / v120);
        }
        if ( sub_140158760(
               (float *)&v130,
               (float *)&v124,
               &v141,
               v4,
               a3,
               (float *)&v132,
               (float *)&v128,
               (float *)&v126)
          && *(float *)&dword_140404A6C[73006988] > v141 )
        {
          v121 = *v91;
          *(_QWORD *)&dword_140404A6C[73006981] = v130;
          dword_140404A6C[73006983] = v131;
          *(_QWORD *)&dword_140404A6C[73006984] = v124;
          dword_140404A6C[73006994] = dword_140404A6C[5210 * v7 + 129716769 + v121];
          v122 = 5210 * v7 + v91[2];
          *(float *)&dword_140404A6C[73006986] = v125;
          *(float *)&dword_140404A6C[73006988] = v141;
          dword_140404A6C[73006993] = v10;
          dword_140404A6C[73006995] = dword_140404A6C[v122 + 129716769];
          dword_140404A6C[73006996] = dword_140404A6C[5210 * v7 + 129716769 + v91[3]];
          sub_14002D370(
            (float *)&dword_140404A6C[73006998],
            (float *)&dword_140404A6C[73006981],
            (float *)&v132,
            (float *)&v128,
            (float *)&v126);
        }
      }
      ++v10;
      v92 += 16;
      v91 += 13;
    }
    while ( v10 < *(int *)((char *)&dword_140404A6C[346718495] + v9) );
    if ( *(float *)&dword_140404A6C[73006988] < 65536.0 )
      return 1;
  }
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;
// 151A848B8: using guessed type unsigned int;
// 151A848BC: using guessed type unsigned int;

//----- (00000001401563E0) ----------------------------------------------------
__int64            sub_1401563E0(_DWORD *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v6 = *a4 - *a6;
  v7 = a4[1] - a6[1];
  v8 = a4[2] - a6[2];
  v9 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  if ( v9 < a5 )
  {
    *a2 = (float)(1.0 / v9) * v6;
    a2[1] = (float)(1.0 / v9) * v7;
    a2[2] = (float)(1.0 / v9) * v8;
    *a1 = *(_DWORD *)a4;
    a1[1] = *((_DWORD *)a4 + 1);
    a1[2] = *((_DWORD *)a4 + 2);
    *a3 = a5 - v9;
  }
  return 0;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140158610) ----------------------------------------------------
__int64            sub_140158610(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v17; // xmm0_4
  float v18[4]; // [rsp+40h] [rbp-28h] BYREF

  v11 = a2[1];
  v12 = a2[2];
  v13 = (float)((float)((float)(a4[1] - a6[1]) * v11) + (float)((float)(*a4 - *a6) * *a2))
      + (float)((float)(a4[2] - a6[2]) * v12);
  if ( v13 > a5 )
    return 0;
  if ( v13 < 0.0 )
    return 0;
  v14 = (float)(v11 * (float)-a5) + a4[1];
  v15 = (float)(v12 * (float)-a5) + a4[2];
  v18[0] = (float)(*a2 * (float)-a5) + *a4;
  v18[1] = v14;
  v18[2] = v15;
  if ( !sub_140077FA0(a1, a2, &a5, a4, v18, a6, a7, a8) )
    return 0;
  v17 = a1[2] - a4[2];
  *a3 = fsqrt(
          (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
        + (float)(v17 * v17));
  return 1;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140158760) ----------------------------------------------------
_BOOL8            sub_140158760(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float *v8; // r15
  float v11; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm2_4
  float *v21; // r12
  float *v22; // r13
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm6_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  int v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  int v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  int v40; // xmm1_4
  float v41; // xmm0_4
  float v43; // [rsp+48h] [rbp-59h] BYREF
  float v44; // [rsp+4Ch] [rbp-55h]
  float v45; // [rsp+50h] [rbp-51h]
  int v46; // [rsp+58h] [rbp-49h] BYREF
  float v47; // [rsp+5Ch] [rbp-45h]
  float v48; // [rsp+60h] [rbp-41h]
  float v49[20]; // [rsp+68h] [rbp-39h] BYREF

  v8 = a6;
  *a3 = 65536.0;
  v11 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  v15 = *a2;
  v17 = a5;
  v18 = a2[1];
  v19 = a2[2];
  v20 = (float)((float)((float)(v13 - v8[1]) * v18) + (float)((float)(*a4 - *v8) * *a2))
      + (float)((float)(v14 - v8[2]) * v19);
  if ( v20 > a5 || v20 < 0.0 )
    return 0;
  v21 = a7;
  v22 = a8;
  v46 = *(_DWORD *)a2;
  v47 = v18;
  v48 = v19;
  v49[0] = (float)(v15 * (float)-a5) + v11;
  v49[1] = (float)(v18 * (float)-a5) + v13;
  v49[2] = (float)(v19 * (float)-a5) + v14;
  if ( sub_140077FA0(&v43, (float *)&v46, &a5, a4, v49, v8, a7, a8) )
  {
    v23 = v43;
    v24 = v44;
    v25 = v45;
    a1[1] = v44;
    *a1 = v23;
    a1[2] = v25;
    *a2 = v15;
    a2[1] = v18;
    a2[2] = v19;
    v26 = fsqrt(
            (float)((float)((float)(v24 - a4[1]) * (float)(v24 - a4[1]))
                  + (float)((float)(v23 - *a4) * (float)(v23 - *a4)))
          + (float)((float)(v25 - a4[2]) * (float)(v25 - a4[2])));
    *a3 = v26;
  }
  else
  {
    v26 = *a3;
  }
  if ( v26 == 65536.0 )
  {
    if ( (unsigned int)sub_140154200(&v43, (float *)&v46, &a5, a4, v17, v8, v21) )
    {
      v27 = a5;
      if ( v26 > a5 )
      {
        v28 = v44;
        *a1 = v43;
        v29 = v45;
        a1[1] = v28;
        v30 = v46;
        a1[2] = v29;
        v31 = v47;
        *(_DWORD *)a2 = v30;
        a2[2] = v48;
        a2[1] = v31;
        *a3 = v27;
      }
    }
    if ( (unsigned int)sub_140154200(&v43, (float *)&v46, &a5, a4, v17, v21, v22) )
    {
      v32 = a5;
      if ( a5 < *a3 )
      {
        v33 = v44;
        *a1 = v43;
        v34 = v45;
        a1[1] = v33;
        v35 = v46;
        a1[2] = v34;
        v36 = v47;
        *(_DWORD *)a2 = v35;
        a2[2] = v48;
        a2[1] = v36;
        *a3 = v32;
      }
    }
    if ( (unsigned int)sub_140154200(&v43, (float *)&v46, &a5, a4, v17, v22, v8) )
    {
      v37 = a5;
      if ( a5 < *a3 )
      {
        v38 = v44;
        *a1 = v43;
        v39 = v45;
        a1[1] = v38;
        v40 = v46;
        a1[2] = v39;
        v41 = v47;
        *(_DWORD *)a2 = v40;
        a2[2] = v48;
        a2[1] = v41;
        *a3 = v37;
      }
    }
  }
  return *a3 < 65536.0;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140158AB0) ----------------------------------------------------
void sub_140158AB0(_BYTE *a1,      char *a2, ...)
{
  unsigned int *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = sub_140001BB0();
  sub_1402250AC(*(_QWORD *)v4 | 1LL, a1, -1, (__int64)a2, nullptr, (__int64)va);
}


//----- (0000000140158B10) ----------------------------------------------------
void            sub_140158B10(_BYTE *a1, unsigned int a2)
{
  if ( (int)a2 < 1000000000 )
  {
    if ( (int)a2 < 1000000 )
    {
      if ( (int)a2 < 1000 )
        sub_140158AB0(a1, "%d", a2);
      else
        sub_140158AB0(a1, "%d,%03d", a2 / 0x3E8, a2 % 0x3E8);
    }
    else
    {
      sub_140158AB0(a1, "%d,%03d,%03d", a2 / 0xF4240, (int)(a2 / 0x3E8) % 1000, a2 % 0x3E8);
    }
  }
  else
  {
    sub_140158AB0(
      a1,
      "%d,%03d,%03d,%03d",
      a2 / 0x3B9ACA00,
      (int)(a2 / 0xF4240) % 1000,
      (int)(a2 / 0x3E8) % 1000,
      a2 % 0x3E8);
  }
}


//----- (0000000140158C70) ----------------------------------------------------
__int64 sub_140158C70(_BYTE *a1, __int64 a2, __int64 a3, ...)
{
  __int64 *v6; // rax
  __int64 result; // rax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = (__int64 *)sub_140001BB0();
  result = sub_1402250BC(*v6, a1, a2, a3, nullptr, (__int64)va);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 183F7C550: using guessed type unsigned int;
// 183F7C560: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 1A724E720: using guessed type unsigned int;
// 1A729E724: using guessed type unsigned int;

//----- (000000014015AE10) ----------------------------------------------------
__int64            sub_14015AE10(int a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  signed int v4; // r9d
  unsigned int v6; // r11d
  unsigned int j; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // ebp
  char v11; // bl
  char v12; // cl
  unsigned int i; // edi
  unsigned int v14; // eax

  v3 = 16388LL * a1;
  v4 = dword_140404A6C[v3 + 291021661];
  if ( v4 + (a3 >> 8) >= 0x10000 )
    return 0;
  if ( dword_140404A6C[v3 + 291021664] )
  {
    v10 = 0;
    v11 = 0;
    if ( a3 > 0 )
    {
      v12 = dword_140404A6C[v3 + 291021662];
      for ( i = dword_140404A6C[v3 + 291021662]; ; i = 0 )
      {
        v14 = 8 - i;
        v10 |= (~(-1 << a3) & (*((unsigned __int8 *)&dword_140404A6C[v3 + 291021665] + v4) >> v12)) << v11;
        if ( a3 < 8 - i )
          break;
        *(_QWORD *)&dword_140404A6C[v3 + 291021661] = (unsigned int)++v4;
        if ( a3 == v14 )
          goto LABEL_18;
        a3 -= v14;
        v11 += v14;
        if ( a3 <= 0 )
          goto LABEL_18;
        v12 = 0;
      }
      dword_140404A6C[v3 + 291021662] = i + a3;
    }
LABEL_18:
    *a2 = v10;
    return 1;
  }
  v6 = *a2 & ~(-1 << a3);
  if ( a3 <= 0 )
    return 1;
  for ( j = dword_140404A6C[v3 + 291021662]; ; LOBYTE(j) = 0 )
  {
    *((_BYTE *)&dword_140404A6C[v3 + 291021665] + v4) &= ~(((1 << a3) - 1) << j);
    *((_BYTE *)&dword_140404A6C[v3 + 291021665] + (int)dword_140404A6C[v3 + 291021661]) |= (_BYTE)v6 << dword_140404A6C[v3 + 291021662];
    v8 = dword_140404A6C[v3 + 291021662];
    v9 = 8 - v8;
    if ( a3 < 8 - v8 )
      break;
    v4 = dword_140404A6C[v3 + 291021661] + 1;
    *(_QWORD *)&dword_140404A6C[v3 + 291021661] = (unsigned int)v4;
    if ( a3 == v9 )
      return 1;
    a3 -= v9;
    v6 >>= v9;
    if ( a3 <= 0 )
      return 1;
  }
  dword_140404A6C[v3 + 291021662] = a3 + v8;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015AFD0) ----------------------------------------------------
__int64            sub_14015AFD0(int a1,      __m128i *a2, int a3, int a4)
{
  __int64 v4; // rdi
       __m128i *v5; // r10
  __int64 v6; // rcx
  int v7; // ebx
  __m128i *v9; // rcx

  v4 = 16388LL * a1;
  v5 = a2;
  if ( (int)dword_140404A6C[v4 + 291021662] > 0 )
  {
    ++dword_140404A6C[v4 + 291021661];
    dword_140404A6C[v4 + 291021662] = 0;
  }
  v6 = (int)dword_140404A6C[v4 + 291021661];
  v7 = a4 * a3;
  if ( (int)v6 + a4 * a3 >= 0x10000 )
    return 0;
  if ( dword_140404A6C[v4 + 291021664] )
  {
    a2 = (     __m128i *)((char *)&dword_140404A6C[v4 + 291021665] + v6);
    v9 = (__m128i *)v5;
  }
  else
  {
    v9 = (__m128i *)((char *)&dword_140404A6C[v4 + 291021665] + v6);
  }
  sub_1401FC920(v9, a2, v7);
  dword_140404A6C[v4 + 291021661] += v7;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015B070) ----------------------------------------------------
__int64 sub_14015B070(__int64 a1,      char *a2, ...)
{
  __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = (__int64 *)sub_140001BC0();
  return sub_140236BF4(*v4, a1, -1, (__int64)a2, nullptr, (__int64)va);
}


//----- (000000014015B0D0) ----------------------------------------------------
__int64 sub_14015B0D0(__int64 a1,      char *a2, ...)
{
  unsigned int *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)v4 | 1LL, a1, -1, (__int64)a2, nullptr, (__int64)va);
}


//----- (000000014015B140) ----------------------------------------------------
void            sub_14015B140(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5, int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v7; // rbx
  _BYTE *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  int v15; // r8d
  int v16; // edx
  char v17; // cl
  char v18; // cl
  char v19; // cl

  v6 = a5;
  v7 = a4;
  if ( a5 > 0 )
  {
    v8 = (_BYTE *)(a1 + 2);
    v9 = a2 - (_QWORD)a4;
    v10 = a3 - (_QWORD)a4;
    do
    {
      v11 = *v7;
      v12 = v7[v10];
      v13 = (v7[v9] << 20) + 0x80000;
      v14 = (v13 + 1470208 * (v11 - 128)) >> 20;
      v15 = (int)(v13 + ((360960 * (128 - v12)) & 0xFFFF0000) + 748800 * (128 - v11)) >> 20;
      v16 = (v13 + 1858048 * (v12 - 128)) >> 20;
      if ( (unsigned int)v14 > 0xFF )
      {
        v17 = -1;
        if ( v14 < 0 )
          v17 = 0;
        LOBYTE(v14) = v17;
      }
      if ( (unsigned int)v15 > 0xFF )
      {
        v18 = -1;
        if ( v15 < 0 )
          v18 = 0;
        LOBYTE(v15) = v18;
      }
      if ( (unsigned int)v16 > 0xFF )
      {
        v19 = -1;
        if ( v16 < 0 )
          v19 = 0;
        LOBYTE(v16) = v19;
      }
      *(v8 - 2) = v14;
      ++v7;
      *(v8 - 1) = v15;
      *v8 = v16;
      v8[1] = -1;
      v8 += a6;
      --v6;
    }
    while ( v6 );
  }
}


//----- (000000014015B270) ----------------------------------------------------
__int64            sub_14015B270(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // r8d
  __m128i si128; // xmm5
  __m128i v9; // xmm7
  __m128i v10; // xmm8
  __m128i v11; // xmm9
  __m128i v12; // xmm10
  __m128i v13; // xmm11
  __int64 v14; // rax
  __m128i v15; // xmm2
  __m128i v16; // xmm4
  __m128i v17; // xmm1
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm1
  __m128i v21; // xmm3
  __int64 result; // rax
  __int8 *v23; // r11
  __int64 v24; // rbp
  __int64 v25; // rsi
  unsigned __int8 *v26; // rbx
  __int64 v27; // rdi
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // r10d
  int v32; // edx
  char v33; // cl
  char v34; // cl
  unsigned int v35; // ecx

  v7 = 0;
  if ( a6 == 4 )
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279880);
    v9 = _mm_load_si128((     __m128i *)&xmmword_140279240);
    v10 = _mm_load_si128((     __m128i *)&xmmword_140279970);
    v11 = _mm_load_si128((     __m128i *)&xmmword_140279990);
    v12 = _mm_load_si128((     __m128i *)&xmmword_140279250);
    v13 = _mm_load_si128((     __m128i *)&xmmword_1402791D0);
    if ( a5 > 7 )
    {
      do
      {
        v14 = v7;
        v7 += 8;
        v15 = _mm_unpacklo_epi8(_mm_cvtsi32_si128((int)(0LL)), _mm_xor_si128(_mm_loadl_epi64((     __m128i *)(v14 + a4)), si128));
        v16 = _mm_unpacklo_epi8(_mm_cvtsi32_si128((int)(0LL)), _mm_xor_si128(_mm_loadl_epi64((     __m128i *)(v14 + a3)), si128));
        v17 = _mm_srli_epi16(_mm_unpacklo_epi8(si128, _mm_loadl_epi64((     __m128i *)(v14 + a2))), 4u);
        v18 = _mm_packus_epi16(
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(v15, v9), v17), 4u),
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(v16, v12), v17), 4u));
        v19 = _mm_packus_epi16(
                _mm_srai_epi16(
                  _mm_add_epi16(_mm_add_epi16(_mm_mulhi_epi16(v16, v11), v17), _mm_mulhi_epi16(v15, v10)),
                  4u),
                v13);
        v20 = _mm_unpacklo_epi8(v18, v19);
        v21 = _mm_unpackhi_epi8(v18, v19);
        *a1 = _mm_unpacklo_epi16(v20, v21);
        a1[1] = _mm_unpackhi_epi16(v20, v21);
        a1 += 2;
      }
      while ( v7 + 7 < a5 );
    }
  }
  result = v7;
  if ( v7 < (__int64)a5 )
  {
    v23 = &SR_VEC_PTR_LANES(128, a1, i8)[2];
    v24 = a2 - a4;
    v25 = a3 - a4;
    v26 = (unsigned __int8 *)(v7 + a4);
    v27 = a5 - (__int64)v7;
    do
    {
      v28 = *v26;
      v29 = v26[v25];
      v30 = (v26[v24] << 20) + 0x80000;
      v31 = (v30 + 1470208 * (v28 - 128)) >> 20;
      v32 = (int)(v30 + ((360960 * (128 - v29)) & 0xFFFF0000) + 748800 * (128 - v28)) >> 20;
      result = (unsigned int)((v30 + 1858048 * (v29 - 128)) >> 20);
      if ( (unsigned int)v31 > 0xFF )
      {
        v33 = -1;
        if ( v31 < 0 )
          v33 = 0;
        LOBYTE(v31) = v33;
      }
      if ( (unsigned int)v32 > 0xFF )
      {
        v34 = -1;
        if ( v32 < 0 )
          v34 = 0;
        LOBYTE(v32) = v34;
      }
      if ( (unsigned int)result > 0xFF )
      {
        v35 = 255;
        if ( (int)result < 0 )
          v35 = 0;
        result = v35;
      }
      *(v23 - 2) = v31;
      ++v26;
      *(v23 - 1) = v32;
      *v23 = result;
      v23[1] = -1;
      v23 += a6;
      --v27;
    }
    while ( v27 );
  }
  return result;
}

// 1402791D0: using guessed type __int128 xmmword_1402791D0;
// 140279240: using guessed type __int128 xmmword_140279240;
// 140279250: using guessed type __int128 xmmword_140279250;
// 140279880: using guessed type __int128 xmmword_140279880;
// 140279970: using guessed type __int128 xmmword_140279970;
// 140279990: using guessed type __int128 xmmword_140279990;

//----- (000000014015B530) ----------------------------------------------------
__int64            sub_14015B530(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
  result = (*(__int64 (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
    return result;
  return !*(_DWORD *)(a1 + 48) || *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
}


//----- (000000014015B580) ----------------------------------------------------
__int64            sub_14015B580(int a1, int a2)
{
  char v2; // bl
  int v4; // eax
  int v5; // edi
  unsigned int v6; // ecx

  v2 = a2;
  if ( a2 > 16 )
    sub_14023E640((char *)L"bits <= 16", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0xFA6u);
  v4 = a1;
  v5 = 2 * (a1 & 0x5555);
  v6 = (16 * ((4 * (v5 & 0x3333 | (v4 >> 1) & 0x1111)) & 0xF0F | ((v5 | (v4 >> 1) & 0x5555u) >> 2) & 0x303))
     | (((4 * (v5 & 0x3333 | (v4 >> 1) & 0x1111)) | ((v5 | (v4 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4) & 0xF0F;
  return (int)((v6 >> 8) | ((unsigned __int8)v6 << 8)) >> (16 - v2);
}

// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 1402727C8: using guessed type __int16[11];

//----- (000000014015B6D0) ----------------------------------------------------
__int64            sub_14015B6D0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  _DWORD v9[6]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]

  v11 = 255;
  result = sub_14015C5E0(a1, (__int64)v9);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  if ( result )
  {
    if ( a2 )
      *a2 = *(_DWORD *)a1;
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 4);
    if ( a4 )
    {
      if ( v9[0] == 24 && v10 == -16777216 )
        *a4 = 3;
      else
        *a4 = (v10 != 0) + 3;
    }
    return 1;
  }
  return result;
}


//----- (000000014015B780) ----------------------------------------------------
__int64            sub_14015B780(unsigned int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v6; // r12d
  unsigned int v7; // eax
  int v8; // r13d
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r15d
  signed int v12; // ecx
  __int64 v13; // rax
       char *v14; // rdx
  int v15; // r14d
  int v16; // eax
  int v17; // r11d
  int v18; // r9d
  int v19; // ecx
  int v20; // ecx
  char *v21; // rax
  char *v22; // rsi
  signed int v23; // edi
  int v24; // r13d
  char *v25; // rax
  __int64 v26; // r15
  int v27; // esi
  unsigned __int64 v28; // rcx
  char v29; // dl
  __int64 v30; // r14
  __int64 v31; // r8
  char v32; // dl
  char v33; // cl
  char *v34; // rax
  unsigned int v35; // r12d
  int v36; // eax
  int v37; // r12d
  __int64 v38; // rdi
  unsigned __int8 *v39; // rax
  int v40; // r14d
  unsigned __int8 v41; // cl
  unsigned __int8 *v42; // rax
  int v43; // edx
  signed int v44; // r15d
  __int64 i; // r8
  unsigned __int8 *v46; // rax
  unsigned __int8 v47; // cl
  unsigned __int8 *v48; // rax
  signed int v49; // ecx
  signed int v50; // ecx
  int v51; // r14d
  unsigned __int8 *v52; // r8
  unsigned __int8 v53; // cl
  unsigned __int8 *v54; // rax
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // edi
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // r9d
  unsigned __int8 v63; // cl
  unsigned __int8 *v64; // rax
  __int64 v65; // rcx
  int v66; // edi
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rax
  signed int v70; // ecx
  int v71; // r12d
  unsigned int v72; // r8d
  int v73; // r8d
  __int64 v74; // r15
  unsigned int v75; // r10d
  unsigned int v76; // r10d
  unsigned int v77; // edi
  unsigned int v78; // r11d
  unsigned int v79; // r11d
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  unsigned int v82; // r10d
  unsigned int v83; // ecx
  int v84; // edi
  int v85; // eax
  int v86; // r14d
  unsigned __int8 *v87; // rcx
  unsigned __int8 *v88; // rdi
  unsigned __int64 v89; // rax
  unsigned __int8 v90; // dl
  unsigned __int8 *v91; // rax
  unsigned __int8 v92; // dl
  unsigned __int8 *v93; // rax
  unsigned __int8 v94; // dl
  unsigned __int8 *v95; // rax
  unsigned __int8 v96; // dl
  unsigned __int8 *v97; // rax
  signed int v98; // edi
  char *v99; // r15
  int v100; // esi
  unsigned int v101; // eax
  unsigned int v102; // r14d
  char v103; // al
  int v104; // r8d
  unsigned int v105; // ecx
  int v106; // edx
  char v107; // al
  int v108; // r8d
  unsigned int v109; // ecx
  int v110; // edx
  char v111; // al
  int v112; // r9d
  int v113; // eax
  signed int v114; // ecx
  signed int v115; // eax
  __int64 k; // rcx
  int v117; // edx
  int v118; // r10d
  signed int v119; // r8d
  __int64 v120; // rdx
  __int64 v121; // rax
  char *v122; // rdx
  __int64 v123; // r9
  char v124; // cl
  __int64 v126; // [rsp+0h] [rbp-100h] BYREF
  unsigned int j; // [rsp+30h] [rbp-D0h]
  int v128; // [rsp+34h] [rbp-CCh]
  int v129; // [rsp+38h] [rbp-C8h]
  __int64 v130; // [rsp+3Ch] [rbp-C4h]
  int v131; // [rsp+44h] [rbp-BCh]
  int v132; // [rsp+48h] [rbp-B8h]
  signed int v133; // [rsp+4Ch] [rbp-B4h]
  int v134; // [rsp+50h] [rbp-B0h]
  int v135; // [rsp+54h] [rbp-ACh]
  unsigned int v136; // [rsp+58h] [rbp-A8h]
  int v137; // [rsp+5Ch] [rbp-A4h]
  unsigned int v138; // [rsp+60h] [rbp-A0h]
  int v139; // [rsp+64h] [rbp-9Ch]
  int v140; // [rsp+68h] [rbp-98h]
  int v141; // [rsp+6Ch] [rbp-94h]
  int v142; // [rsp+70h] [rbp-90h]
  int v143; // [rsp+74h] [rbp-8Ch]
  int v144; // [rsp+78h] [rbp-88h]
  __int64 v145; // [rsp+80h] [rbp-80h]
  char *v146; // [rsp+88h] [rbp-78h]
  int v147; // [rsp+90h] [rbp-70h] BYREF
  int v148; // [rsp+94h] [rbp-6Ch]
  int v149; // [rsp+98h] [rbp-68h]
  unsigned int v150; // [rsp+9Ch] [rbp-64h]
  int v151; // [rsp+A0h] [rbp-60h]
  int v152; // [rsp+A4h] [rbp-5Ch]
  __int64 v153; // [rsp+A8h] [rbp-58h]
  int v154; // [rsp+B0h] [rbp-50h]
  _DWORD *v155; // [rsp+B8h] [rbp-48h]
  _DWORD *v156; // [rsp+C0h] [rbp-40h]
  _DWORD *v157; // [rsp+C8h] [rbp-38h]
  _BYTE v158[1024]; // [rsp+D0h] [rbp-30h]
  __int64 v159; // [rsp+4D0h] [rbp+3D0h]

  v155 = a2;
  v6 = 0;
  v157 = a4;
  v156 = a3;
  v143 = a5;
  HIDWORD(v153) = 255;
  if ( !sub_14015C5E0((__int64)a1, (__int64)&v147) )
    return sub_1401F8B20((unsigned __int64)&v126 ^ v159);
  v144 = a1[1];
  v7 = abs32(v144);
  a1[1] = v7;
  if ( v7 > 0x1000000 || *a1 > 0x1000000 )
    goto LABEL_213;
  v8 = v149;
  v9 = v148;
  v10 = v153;
  v11 = v147;
  j = v150;
  v131 = v151;
  v135 = v152;
  v128 = v154;
  v130 = v153;
  v132 = v148;
  v129 = v149;
  v134 = v147;
  if ( v149 == 12 )
  {
    if ( v147 < 24 )
    {
      v6 = (v148 - v154 - 24) / 3;
      goto LABEL_9;
    }
  }
  else if ( v147 < 16 )
  {
    v6 = (v148 - v154 - v149) >> 2;
LABEL_9:
    if ( v6 )
      goto LABEL_14;
  }
  v12 = a1[46];
  if ( v148 != v12 + a1[48] - a1[52] )
  {
    sub_14023E640(
      (char *)L"info.offset == s->callback_already_read + (int) (s->img_buffer - s->img_buffer_original)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x1515u);
    v12 = a1[46];
  }
  if ( v9 != *((_QWORD *)a1 + 24) - 56LL + v12 - (_QWORD)a1 )
  {
    v13 = sr_client_static_tls();
    v14 = "bad offset";
LABEL_214:
    *(_QWORD *)(v13 + 16) = (uint64)(uintptr_t)(v14);
    return sub_1401F8B20((unsigned __int64)&v126 ^ v159);
  }
LABEL_14:
  if ( v11 == 24 && v10 == -16777216 )
    v15 = 3;
  else
    v15 = (v10 != 0) + 3;
  v16 = v143;
  a1[2] = v15;
  v17 = *a1;
  v18 = a1[1];
  v19 = *a1;
  if ( v16 >= 3 )
    v15 = v16;
  if ( v19 < 0
    || v19 && v15 > 0x7FFFFFFF / v19
    || (v20 = v15 * v19, v20 < 0)
    || v18 < 0
    || v18 && v20 > 0x7FFFFFFF / v18 )
  {
LABEL_213:
    v13 = sr_client_static_tls();
    v14 = "too large";
    goto LABEL_214;
  }
  if ( v17 && v15 > 0x7FFFFFFF / v17
    || v18 && v20 > 0x7FFFFFFF / v18
    || (v21 = (char *)sr_path_malloc((int)(v18 * v15 * *a1)), v146 = v21, (v22 = v21) == nullptr) )
  {
    v13 = sr_client_static_tls();
    v14 = "outofmem";
    goto LABEL_214;
  }
  if ( v11 >= 16 )
  {
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v132 = 0;
    v71 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v142 = 0;
    sub_14016E0F0((__int64)a1, v9 - v128 - v8);
    if ( v11 == 24 )
    {
      v72 = 3 * *a1;
    }
    else if ( v11 == 16 )
    {
      v72 = 2 * *a1;
    }
    else
    {
      v72 = 0;
    }
    v73 = -v72 & 3;
    v128 = v73;
    if ( v11 == 24 )
    {
      v74 = 1;
      v145 = 1;
      goto LABEL_145;
    }
    if ( v11 == 32 && v135 == 255 && v131 == 65280 && j == 16711680 )
    {
      if ( (_DWORD)v130 == -16777216 )
      {
        v74 = 2;
        v145 = 2;
        goto LABEL_145;
      }
    }
    else if ( !j || !v131 || !v135 )
    {
      goto LABEL_211;
    }
    v137 = sub_140162FB0(j) - 7;
    v136 = (unsigned __int8)(((unsigned __int16)(((((j & 0x5555) + ((j >> 1) & 0x5555)) & 0x3333)
                                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((j & 0x55) + ((j >> 1) & 0x55)) & 0x33)
                             + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    v139 = sub_140162FB0(v75) - 7;
    v77 = (unsigned __int8)(((unsigned __int16)(((((v76 & 0x5555) + ((v76 >> 1) & 0x5555)) & 0x3333)
                                               + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                               + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                                                 + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                              & 0xF0F) >> 8)
                          + (((((v76 & 0x55) + ((v76 >> 1) & 0x55)) & 0x33)
                            + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33)
                            + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                           & 0xF)
                          + ((((((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F) >> 8)
                            + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                              + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                             & 0xF0F0F0F)) >> 16));
    v138 = v77;
    v141 = sub_140162FB0(v78) - 7;
    v140 = (unsigned __int8)(((unsigned __int16)(((((v79 & 0x5555) + ((v79 >> 1) & 0x5555)) & 0x3333)
                                                + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((v79 & 0x55) + ((v79 >> 1) & 0x55)) & 0x33)
                             + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    v132 = sub_140162FB0(v80) - 7;
    v83 = (((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
        + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v142 = (unsigned __int8)(((unsigned __int16)((v83 + (v83 >> 4)) & 0xF0F) >> 8)
                           + ((v83 + (v83 >> 4)) & 0xF)
                           + (((((v83 + (v83 >> 4)) & 0xF0F0F0F) >> 8) + ((v83 + (v83 >> 4)) & 0xF0F0F0F)) >> 16));
    if ( v136 <= 8 && v77 <= 8 && v82 <= 8 )
    {
      v74 = 0;
      v145 = 0;
      if ( (unsigned __int8)(((unsigned __int16)((v83
                                                + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + ((v83
                             + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + (((((v83
                                + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + ((v83
                               + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16)) <= 8u )
      {
        v73 = v128;
LABEL_145:
        v36 = a1[1];
        v84 = 0;
        v129 = 0;
        v24 = v15;
        if ( v36 <= 0 )
          goto LABEL_195;
        while ( 1 )
        {
          v85 = *a1;
          if ( v74 )
          {
            v86 = 0;
            if ( v85 > 0 )
            {
              v87 = *((unsigned __int8 **)a1 + 24);
              v88 = (unsigned __int8 *)&v22[v71];
              while ( 1 )
              {
                v89 = *((_QWORD *)a1 + 25);
                if ( (unsigned __int64)v87 >= v89 )
                {
                  if ( !a1[12] )
                  {
                    v88[2] = 0;
                    goto LABEL_156;
                  }
                  sub_14016D910((__int64)a1);
                  v91 = *((unsigned __int8 **)a1 + 24);
                  v90 = *v91;
                  v87 = v91 + 1;
                  v89 = *((_QWORD *)a1 + 25);
                }
                else
                {
                  v90 = *v87++;
                }
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                v88[2] = v90;
                if ( (unsigned __int64)v87 < v89 )
                {
                  v92 = *v87++;
                  goto LABEL_158;
                }
LABEL_156:
                if ( !a1[12] )
                {
                  v88[1] = 0;
                  goto LABEL_161;
                }
                sub_14016D910((__int64)a1);
                v93 = *((unsigned __int8 **)a1 + 24);
                v92 = *v93;
                v87 = v93 + 1;
                v89 = *((_QWORD *)a1 + 25);
LABEL_158:
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                v88[1] = v92;
                if ( (unsigned __int64)v87 < v89 )
                {
                  v94 = *v87++;
                  *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                  goto LABEL_164;
                }
LABEL_161:
                if ( a1[12] )
                {
                  sub_14016D910((__int64)a1);
                  v95 = *((unsigned __int8 **)a1 + 24);
                  v94 = *v95;
                  v87 = v95 + 1;
                  *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v95 + 1);
                }
                else
                {
                  v94 = 0;
                }
LABEL_164:
                *v88 = v94;
                v71 += 3;
                v88 += 3;
                if ( v74 == 2 )
                {
                  if ( (unsigned __int64)v87 >= *((_QWORD *)a1 + 25) )
                  {
                    if ( a1[12] )
                    {
                      sub_14016D910((__int64)a1);
                      v97 = *((unsigned __int8 **)a1 + 24);
                      v96 = *v97;
                      v87 = v97 + 1;
                      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v97 + 1);
                    }
                    else
                    {
                      v96 = 0;
                    }
                  }
                  else
                  {
                    v96 = *v87++;
                    *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                  }
                }
                else
                {
                  v96 = -1;
                }
                HIDWORD(v130) |= v96;
                if ( v24 == 4 )
                {
                  ++v71;
                  *v88++ = v96;
                }
                if ( ++v86 >= (int)*a1 )
                  goto LABEL_187;
              }
            }
          }
          else
          {
            v98 = 0;
            v133 = 0;
            if ( v85 > 0 )
            {
              v99 = &v22[v71];
              v100 = v134;
              do
              {
                v101 = sub_1401605B0((__int64)a1);
                if ( v100 == 16 )
                {
                  v102 = v101;
                }
                else
                {
                  v102 = v101 + ((unsigned int)sub_1401605B0((__int64)a1) << 16);
                  v98 = v133;
                }
                v103 = sub_14016E050(j & v102, v137, v136);
                v104 = v138;
                v105 = v131 & v102;
                v106 = v139;
                *v99 = v103;
                v107 = sub_14016E050(v105, v106, v104);
                v108 = v140;
                v109 = v135 & v102;
                v110 = v141;
                v99[1] = v107;
                v111 = sub_14016E050(v109, v110, v108);
                v112 = v130;
                v71 += 3;
                v99[2] = v111;
                v99 += 3;
                if ( v112 )
                  v113 = sub_14016E050(v112 & v102, v132, v142);
                else
                  v113 = 255;
                HIDWORD(v130) |= v113;
                if ( v24 == 4 )
                {
                  ++v71;
                  *v99++ = v113;
                }
                v133 = ++v98;
              }
              while ( v98 < (int)*a1 );
              v22 = v146;
              v74 = v145;
LABEL_187:
              v73 = v128;
            }
            v84 = v129;
          }
          if ( v73 )
          {
            if ( *((_QWORD *)a1 + 2) && (v114 = a1[50] - a1[48], v114 < v73) )
            {
              *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
              (*((void (           **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(v73 - v114));
              v73 = v128;
            }
            else
            {
              *((_QWORD *)a1 + 24) += (unsigned int)v73;
            }
          }
          v36 = a1[1];
          v129 = ++v84;
          if ( v84 >= v36 )
            goto LABEL_195;
        }
      }
    }
LABEL_211:
    free(v22);
    v13 = sr_client_static_tls();
    v14 = "bad masks";
    goto LABEL_214;
  }
  v23 = 0;
  v133 = 0;
  if ( !v6 || v6 > 256 )
  {
    free(v21);
    v13 = sr_client_static_tls();
    v14 = "invalid";
    goto LABEL_214;
  }
  v24 = v15;
  if ( v6 <= 0 )
    goto LABEL_58;
  v25 = *((char **)a1 + 24);
  v26 = 0;
  v27 = v129;
  do
  {
    v28 = *((_QWORD *)a1 + 25);
    if ( (unsigned __int64)v25 < v28 )
      goto LABEL_40;
    if ( a1[12] )
    {
      sub_14016D910((__int64)a1);
      v25 = *((char **)a1 + 24);
      v28 = *((_QWORD *)a1 + 25);
LABEL_40:
      v29 = *v25;
      v30 = 4 * v26;
      ++v25;
      v158[4 * v26 + 2] = v29;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
      v31 = 4 * v26;
      if ( (unsigned __int64)v25 < v28 )
        goto LABEL_45;
      goto LABEL_43;
    }
    v30 = 4 * v26;
    v158[4 * v26 + 2] = 0;
    v31 = 4 * v26;
LABEL_43:
    if ( !a1[12] )
    {
      v158[v31 + 1] = 0;
      goto LABEL_48;
    }
    sub_14016D910((__int64)a1);
    v25 = *((char **)a1 + 24);
    v28 = *((_QWORD *)a1 + 25);
LABEL_45:
    v32 = *v25++;
    *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
    v158[v30 + 1] = v32;
    if ( (unsigned __int64)v25 < v28 )
    {
      v33 = *v25++;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
      goto LABEL_51;
    }
LABEL_48:
    if ( a1[12] )
    {
      sub_14016D910((__int64)a1);
      v34 = *((char **)a1 + 24);
      v33 = *v34;
      v25 = v34 + 1;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
    }
    else
    {
      v33 = 0;
    }
LABEL_51:
    v158[v30] = v33;
    if ( v27 != 12 )
    {
      if ( (unsigned __int64)v25 >= *((_QWORD *)a1 + 25) )
      {
        if ( a1[12] )
        {
          sub_14016D910((__int64)a1);
          v25 = (char *)++*((_QWORD *)a1 + 24);
        }
      }
      else
      {
        *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(++v25);
      }
    }
    ++v26;
    v158[v30 + 3] = -1;
  }
  while ( v26 < v6 );
  v23 = v133;
  v22 = v146;
  v11 = v134;
LABEL_58:
  sub_14016E0F0((__int64)a1, v132 - v6 * ((v129 != 12) + 3) - v128 - v129);
  if ( v11 != 1 )
  {
    if ( v11 == 4 )
    {
      v35 = (*a1 + 1) >> 1;
      goto LABEL_64;
    }
    if ( v11 == 8 )
    {
      v35 = *a1;
      goto LABEL_64;
    }
    free(v22);
    v13 = sr_client_static_tls();
    v14 = "bad bpp";
    goto LABEL_214;
  }
  v35 = (*a1 + 7) >> 3;
LABEL_64:
  v36 = a1[1];
  v37 = -v35 & 3;
  if ( v11 == 1 )
  {
    LODWORD(v130) = 0;
    if ( v36 > 0 )
    {
      v38 = 0;
      do
      {
        v39 = *((unsigned __int8 **)a1 + 24);
        v40 = 7;
        if ( (unsigned __int64)v39 >= *((_QWORD *)a1 + 25) )
        {
          if ( a1[12] )
          {
            sub_14016D910((__int64)a1);
            v42 = *((unsigned __int8 **)a1 + 24);
            v41 = *v42;
            *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v42 + 1);
          }
          else
          {
            v41 = 0;
          }
        }
        else
        {
          v41 = *v39;
          *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v39 + 1);
        }
        v43 = *a1;
        v44 = 0;
        for ( i = v41; v44 < (int)*a1; v43 = *a1 )
        {
          v22[v38] = v158[4 * (((int)i >> v40) & 1)];
          v22[v38 + 1] = v158[4 * (((int)i >> v40) & 1) + 1];
          v22[v38 + 2] = v158[4 * (((int)i >> v40) & 1) + 2];
          v38 += 3;
          if ( v24 == 4 )
            v22[v38++] = -1;
          if ( ++v44 == v43 )
            break;
          if ( --v40 < 0 )
          {
            v46 = *((unsigned __int8 **)a1 + 24);
            v40 = 7;
            if ( (unsigned __int64)v46 >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                sub_14016D910((__int64)a1);
                v48 = *((unsigned __int8 **)a1 + 24);
                v47 = *v48;
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v48 + 1);
              }
              else
              {
                v47 = 0;
              }
            }
            else
            {
              v47 = *v46;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v46 + 1);
            }
            i = v47;
          }
        }
        if ( v37 )
        {
          if ( *((_QWORD *)a1 + 2) && (v49 = a1[50] - a1[48], v49 < v37) )
          {
            *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
            (*((void (           **)(_QWORD, _QWORD, __int64))a1 + 3))(
              *((_QWORD *)a1 + 5),
              (unsigned int)(v37 - v49),
              i);
          }
          else
          {
            *((_QWORD *)a1 + 24) += (unsigned int)v37;
          }
        }
        v36 = a1[1];
        LODWORD(v130) = v130 + 1;
      }
      while ( (int)v130 < v36 );
    }
  }
  else
  {
    v50 = 0;
    for ( j = 0; v50 < v36; j = v50 )
    {
      v51 = 0;
      if ( (int)*a1 > 0 )
      {
        do
        {
          v52 = *((unsigned __int8 **)a1 + 24);
          if ( (unsigned __int64)v52 >= *((_QWORD *)a1 + 25) )
          {
            if ( a1[12] )
            {
              sub_14016D910((__int64)a1);
              v54 = *((unsigned __int8 **)a1 + 24);
              v53 = *v54;
              v52 = v54 + 1;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v54 + 1);
            }
            else
            {
              v53 = 0;
            }
          }
          else
          {
            v53 = *v52++;
            *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v52);
          }
          v55 = 0;
          v56 = v53;
          if ( v11 == 4 )
          {
            v55 = v53 & 0xF;
            v56 = v53 >> 4;
          }
          v57 = v23;
          v58 = v23 + 1;
          v22[v57] = v158[4 * v56];
          v59 = v58++;
          v22[v59] = v158[4 * v56 + 1];
          v60 = v58;
          v23 = v58 + 1;
          v22[v60] = v158[4 * v56 + 2];
          if ( v24 == 4 )
          {
            v61 = v23++;
            v22[v61] = -1;
          }
          v62 = *a1;
          if ( v51 + 1 == *a1 )
            break;
          if ( v11 == 8 )
          {
            if ( (unsigned __int64)v52 >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                sub_14016D910((__int64)a1);
                v64 = *((unsigned __int8 **)a1 + 24);
                v63 = *v64;
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v64 + 1);
                v62 = *a1;
              }
              else
              {
                v63 = 0;
              }
            }
            else
            {
              v63 = *v52;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v52 + 1);
            }
            v55 = v63;
          }
          v65 = v23;
          v66 = v23 + 1;
          v22[v65] = v158[4 * v55];
          v67 = v66++;
          v22[v67] = v158[4 * v55 + 1];
          v68 = v66;
          v23 = v66 + 1;
          v22[v68] = v158[4 * v55 + 2];
          if ( v24 == 4 )
          {
            v69 = v23++;
            v22[v69] = -1;
          }
          v51 += 2;
        }
        while ( v51 < v62 );
        v50 = j;
      }
      if ( v37 )
      {
        if ( *((_QWORD *)a1 + 2) && (v70 = a1[50] - a1[48], v70 < v37) )
        {
          *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
          (*((void (           **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(v37 - v70));
        }
        else
        {
          *((_QWORD *)a1 + 24) += (unsigned int)v37;
        }
        v50 = j;
      }
      v36 = a1[1];
      ++v50;
    }
  }
LABEL_195:
  if ( v24 == 4 && !HIDWORD(v130) )
  {
    v115 = 4 * *a1 * v36 - 1;
    for ( k = v115; k >= 0; k -= 4 )
      v22[k] = -1;
  }
  if ( v144 > 0 )
  {
    v117 = a1[1];
    v118 = 0;
    if ( v117 >= 0 && (v117 & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v119 = 0;
        v120 = v24 * *a1 * (v117 - v118 - 1);
        v121 = (unsigned int)v120;
        v122 = &v22[v120];
        if ( (int)(v24 * *a1) > 0 )
        {
          v123 = v24 * v118 * *a1 - v121;
          do
          {
            ++v119;
            v124 = v122[v123];
            v122[v123] = *v122;
            *v122++ = v124;
          }
          while ( v119 < (int)(v24 * *a1) );
        }
        v117 = a1[1];
        ++v118;
      }
      while ( v118 < v117 >> 1 );
    }
  }
  if ( !v143 || v143 == v24 || sub_14015D7E0(v22, v24, v143, *a1, a1[1]) )
  {
    *v155 = *a1;
    *v156 = a1[1];
    if ( v157 )
      *v157 = a1[2];
  }
  return sub_1401F8B20((unsigned __int64)&v126 ^ v159);
}

// 14015C060: variable 'v75' is possibly undefined
// 14015C07A: variable 'v76' is possibly undefined
// 14015C0BA: variable 'v78' is possibly undefined
// 14015C0D4: variable 'v79' is possibly undefined
// 14015C116: variable 'v80' is possibly undefined
// 14015C130: variable 'v81' is possibly undefined
// 14015C184: variable 'v82' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272B60: using guessed type __int16[89];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015C5E0) ----------------------------------------------------
__int64            sub_14015C5E0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char v5; // cl
  char *v6; // rax
  char v7; // cl
  int v8; // edi
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
       char *v14; // rdx
  int v16; // eax
  int v17; // edi
  __int64 v18; // rdi
  int v19; // eax
  int v20; // ecx

  v2 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_42;
    sub_14016D910(a1);
    v2 = *(char **)(a1 + 192);
  }
  v5 = *v2;
  v6 = v2 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6);
  if ( v5 != 66 )
    goto LABEL_42;
  if ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 200) )
    goto LABEL_8;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_42:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not BMP");
    return 0;
  }
  sub_14016D910(a1);
  v6 = *(char **)(a1 + 192);
LABEL_8:
  v7 = *v6;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6 + 1);
  if ( v7 != 77 )
    goto LABEL_42;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  v8 = sub_1401605B0(a1);
  *(_DWORD *)(a2 + 4) = v8 + ((unsigned int)sub_1401605B0(a1) << 16);
  v9 = sub_1401605B0(a1);
  v10 = sub_1401605B0(a1);
  *(_DWORD *)(a2 + 32) = 14;
  *(_QWORD *)(a2 + 20) = 0;
  v11 = (unsigned int)(v9 + (v10 << 16));
  *(_QWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = v11;
  if ( *(int *)(a2 + 4) < 0 )
    goto LABEL_40;
  if ( (unsigned int)v11 > 0x38 || (v12 = 0x100010000001000LL, !_bittest64(&v12, v11)) )
  {
    if ( (_DWORD)v11 != 108 && (_DWORD)v11 != 124 )
    {
      v13 = sr_client_static_tls();
      v14 = "unknown BMP";
LABEL_15:
      *(_QWORD *)(v13 + 16) = (uint64)(uintptr_t)(v14);
      return 0;
    }
  }
  if ( (_DWORD)v11 == 12 )
  {
    *(_DWORD *)a1 = sub_1401605B0(a1);
    v16 = sub_1401605B0(a1);
  }
  else
  {
    *(_DWORD *)a1 = sub_1401606A0(a1);
    v16 = sub_1401606A0(a1);
  }
  *(_DWORD *)(a1 + 4) = v16;
  if ( (unsigned int)sub_1401605B0(a1) != 1 )
    goto LABEL_40;
  *(_DWORD *)a2 = sub_1401605B0(a1);
  if ( (_DWORD)v11 == 12 )
    return 1;
  v17 = sub_1401606A0(a1);
  if ( (unsigned int)(v17 - 1) <= 1 )
  {
    v13 = sr_client_static_tls();
    v14 = "BMP RLE";
    goto LABEL_15;
  }
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  if ( (_DWORD)v11 != 40 )
  {
    if ( (_DWORD)v11 != 56 )
    {
      if ( (((_DWORD)v11 - 108) & 0xFFFFFFEF) == 0 )
      {
        *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 20) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 24) = sub_1401606A0(a1);
        sub_1401606A0(a1);
        v18 = 12;
        do
        {
          sub_1401605B0(a1);
          sub_1401605B0(a1);
          --v18;
        }
        while ( v18 );
        if ( (_DWORD)v11 == 124 )
        {
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
        }
        return 1;
      }
LABEL_40:
      v13 = sr_client_static_tls();
      v14 = "bad BMP";
      goto LABEL_15;
    }
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
  }
  if ( ((*(_DWORD *)a2 - 16) & 0xFFFFFFEF) != 0 )
    return 1;
  if ( v17 )
  {
    if ( v17 == 3 )
    {
      *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
      v19 = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 32) += 12;
      v20 = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 20) = v19;
      if ( *(_DWORD *)(a2 + 12) != v20 || v20 != v19 )
        return 1;
    }
    goto LABEL_40;
  }
  if ( *(_DWORD *)a2 == 32 )
  {
    *(_DWORD *)(a2 + 24) = -16777216;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 12) = 16711680;
    *(_DWORD *)(a2 + 16) = 65280;
    *(_DWORD *)(a2 + 20) = 255;
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 31744;
    *(_DWORD *)(a2 + 16) = 992;
    *(_DWORD *)(a2 + 20) = 31;
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015C9B0) ----------------------------------------------------
__int64            sub_14015C9B0(__int64 a1)
{
  char *v1; // rax
  char v3; // cl
  char *v4; // rax
  char v5; // cl
  int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_14;
    sub_14016D910(a1);
    v1 = *(char **)(a1 + 192);
  }
  v3 = *v1;
  v4 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  if ( v3 != 66 )
    goto LABEL_14;
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v4 = *(char **)(a1 + 192);
      goto LABEL_8;
    }
LABEL_14:
    result = 0;
    goto LABEL_15;
  }
LABEL_8:
  v5 = *v4;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
  if ( v5 != 77 )
    goto LABEL_14;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  v6 = sub_1401605B0(a1);
  v7 = v6 + ((unsigned int)sub_1401605B0(a1) << 16);
  if ( (unsigned int)v7 > 0x38 || (v8 = 0x100010000001000LL, !_bittest64(&v8, v7)) )
  {
    if ( (_DWORD)v7 != 108 && (_DWORD)v7 != 124 )
      goto LABEL_14;
  }
  result = 1;
LABEL_15:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return result;
}


//----- (000000014015CAD0) ----------------------------------------------------
__int64            sub_14015CAD0(__int64 a1)
{
  char *v1; // rax
  char v3; // cl
  char *v4; // rax
  char v5; // cl
  int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      return 0;
    sub_14016D910(a1);
    v1 = *(char **)(a1 + 192);
  }
  v3 = *v1;
  v4 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  if ( v3 == 66 )
  {
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        return 0;
      sub_14016D910(a1);
      v4 = *(char **)(a1 + 192);
    }
    v5 = *v4;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
    if ( v5 == 77 )
    {
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      v6 = sub_1401605B0(a1);
      v7 = v6 + ((unsigned int)sub_1401605B0(a1) << 16);
      if ( (unsigned int)v7 <= 0x38 )
      {
        v8 = 0x100010000001000LL;
        if ( _bittest64(&v8, v7) )
          return 1;
      }
      if ( (_DWORD)v7 == 108 || (_DWORD)v7 == 124 )
        return 1;
    }
  }
  return 0;
}


//----- (000000014015CBD0) ----------------------------------------------------
__int16            sub_14015CBD0(_WORD *a1, unsigned __int8 *a2)
{
  int v2; // r10d
  unsigned __int8 *v4; // r11
  __int64 v5; // rax
  int v6; // ebx
  int v7; // edi
  int v8; // r8d

  v2 = 0;
  v4 = a2;
  do
  {
    v5 = *v4;
    *a1 = 0;
    if ( (_BYTE)v5 != 0xFF )
    {
      v6 = a2[v5 + 1280];
      v7 = a2[v5 + 1024] >> 4;
      v8 = a2[v5 + 1024] & 0xF;
      if ( v8 )
      {
        LOWORD(v5) = v6 + v8;
        if ( (unsigned int)(v6 + v8) <= 9 )
        {
          LODWORD(v5) = ((v2 << v6) & 0x1FF) >> (9 - v8);
          if ( (int)v5 < 1 << (v8 - 1) )
            LODWORD(v5) = 1 - (1 << v8) + v5;
          if ( (unsigned int)(v5 + 128) <= 0xFF )
          {
            LOWORD(v5) = v6 + v8 + 16 * (v7 + 16 * v5);
            *a1 = v5;
          }
        }
      }
    }
    ++v2;
    ++v4;
    ++a1;
  }
  while ( v2 < 512 );
  return v5;
}


//----- (000000014015CCB0) ----------------------------------------------------
__int64            sub_14015CCB0(_WORD *a1, int *a2)
{
  int v2; // edi
  int v4; // r9d
  int v5; // r11d
  __int64 v6; // r8
  int v7; // eax
  char *v8; // rcx
  __int64 v9; // rax
  unsigned int *v10; // r15
  int v11; // r10d
  unsigned int v12; // edx
  int v13; // ebx
  __int64 v14; // r9
  int i; // esi
  unsigned __int8 *v16; // rcx
  _WORD *v17; // r8
  unsigned int v18; // r11d
  unsigned int v19; // eax
  unsigned __int8 *v20; // rsi
  unsigned __int16 *v21; // rbp
  unsigned int v22; // eax
  char v23; // cl
  int v24; // eax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = 0;
    if ( *a2 > 0 )
    {
      v8 = (char *)a1 + v6 + 1280;
      do
      {
        *v8++ = v5 + 1;
        ++v4;
        ++v6;
        ++v7;
      }
      while ( v7 < *a2 );
    }
    ++v5;
    ++a2;
  }
  while ( v5 < 16 );
  v9 = v4;
  v10 = (unsigned int *)(a1 + 772);
  v11 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *((_BYTE *)a1 + v9 + 1280) = 0;
  for ( i = 15; i >= 0; --i )
  {
    v16 = (unsigned __int8 *)a1 + v14 + 1280;
    v10[18] = v13 - v12;
    if ( *v16 == v11 )
    {
      v17 = &a1[v14 + 256];
      do
      {
        *v17 = v12;
        ++v16;
        ++v17;
        v18 = v12;
        ++v13;
        ++v14;
        ++v12;
      }
      while ( *v16 == v11 );
      if ( v18 >= 1 << v11 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad code lengths");
        return 0;
      }
    }
    v19 = v12 << i;
    v12 *= 2;
    *v10 = v19;
    ++v11;
    ++v10;
  }
  *(_DWORD *)&a1[2 * v11 + 770] = -1;
  sub_1401FCD30((void *)(uintptr_t)(a1), 0xFFu, 0x200u);
  if ( v13 > 0 )
  {
    v20 = (unsigned __int8 *)(a1 + 640);
    v21 = a1 + 256;
    do
    {
      v22 = *v20;
      if ( v22 <= 9 )
      {
        v23 = 9 - v22;
        v24 = 1 << (9 - v22);
        if ( v24 > 0 )
          sub_1401FCD30((void *)(uintptr_t)((_WORD *)((char *)a1 + (*v21 << v23))), v2, v24);
      }
      ++v2;
      ++v21;
      ++v20;
    }
    while ( v2 < v13 );
  }
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015CE80) ----------------------------------------------------
__int64            sub_14015CE80(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rax
  unsigned char v4; // cl
  char *v5; // rax

  v2 = 0;
  while ( 1 )
  {
    v3 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1);
        v5 = *(char **)(a1 + 192);
        v4 = *v5;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = *v3;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v3 + 1);
    }
    if ( v4 != byte_14026E760[v2] )
      break;
    if ( ++v2 >= 8 )
      return 1;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad png sig");
  return 0;
}

// 14026E760: using guessed type _BYTE byte_14026E760[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015CF70) ----------------------------------------------------
__int64            sub_14015CF70(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // r12d
  int v5; // eax
  unsigned int v6; // r12d
  int v7; // esi
  int v8; // r10d
  unsigned int v9; // eax
  int v10; // r12d
  unsigned int v11; // r9d
  int v12; // r10d
  int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // esi
  char v19; // r11
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  int v24; // r13d
  int v25; // esi
  int v26; // edx
  unsigned __int64 v27; // r10
  unsigned int v28; // r9d
  int v29; // r8d
  unsigned __int8 *v30; // rax
  unsigned __int8 v31; // cl
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // edi
  unsigned __int8 v36; // r11
  int v37; // edx
  unsigned int v38; // r9d
  int v39; // r8d
  unsigned __int64 v40; // r10
  unsigned __int8 *v41; // rax
  unsigned __int8 v42; // cl
  int v43; // edi
  int v44; // ecx
  int v45; // edi
  int v46; // eax
  int v47; // ecx
  int v48; // edi
  int v49; // eax
  __int64 v51; // [rsp+0h] [rbp-A48h] BYREF
  int v52; // [rsp+20h] [rbp-A28h]
  int v53; // [rsp+24h] [rbp-A24h]
  _WORD v54[1016]; // [rsp+30h] [rbp-A18h] BYREF
  unsigned char v55[19]; // [rsp+820h] [rbp-228h] BYREF
  __int16 v56; // [rsp+830h] [rbp-218h]
  char v57; // [rsp+832h] [rbp-216h]
  unsigned __int8 v59[464]; // [rsp+840h] [rbp-208h] BYREF
  __int64 v60; // [rsp+A10h] [rbp-38h]

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 < 5 )
  {
    sub_140160350(a1);
    v2 = *(_DWORD *)(a1 + 16);
  }
  v3 = v2 - 5;
  v4 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = v3;
  v5 = v4 & 0x1F;
  v6 = v4 >> 5;
  *(_DWORD *)(a1 + 20) = v6;
  v7 = v5 + 257;
  v53 = v5 + 257;
  if ( v3 < 5 )
  {
    sub_140160350(a1);
    v3 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 20);
  }
  v8 = v3 - 5;
  v9 = v6 >> 5;
  v10 = (v6 & 0x1F) + 1;
  *(_DWORD *)(a1 + 20) = v9;
  *(_DWORD *)(a1 + 16) = v3 - 5;
  if ( v3 - 5 < 4 )
  {
    sub_140160350(a1);
    v9 = *(_DWORD *)(a1 + 20);
    v8 = *(_DWORD *)(a1 + 16);
  }
  v11 = v9 >> 4;
  v12 = v8 - 4;
  *(_DWORD *)(a1 + 20) = v9 >> 4;
  *(_DWORD *)(a1 + 16) = v12;
  v13 = 0;


  v14 = (v9 & 0xF) + 4;
  v52 = v10 + v7;
  memset(v55,0,sizeof(v55));
  v15 = 0;
  v16 = v12;
  do
  {
    v17 = v11;
    if ( v12 < 3 )
    {
      v18 = v11;
      v19 = v12;
      if ( v11 >= 1 << v12 )
      {
LABEL_16:
        v17 = v11;
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v21 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)a1 < v20 )
          {
            v22 = *v21;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(v21 + 1);
          }
          else
          {
            v22 = 0;
          }
          v16 = v12 + 8;
          *(_DWORD *)(a1 + 16) = v12 + 8;
          v17 = v18 | (v22 << v19);
          *(_DWORD *)(a1 + 20) = v17;
          if ( v12 + 8 > 24 )
            break;
          v19 = v12 + 8;
          v11 = v17;
          v12 += 8;
          v18 = v17;
          if ( v17 >= 1 << v16 )
            goto LABEL_16;
        }
      }
    }
    v23 = byte_14026FED0[v15];
    v16 -= 3;
    *(_DWORD *)(a1 + 16) = v16;
    v11 = v17 >> 3;
    ++v15;
    *(_DWORD *)(a1 + 20) = v17 >> 3;
    *((_BYTE *)&v55 + v23) = v17 & 7;
    v12 = v16;
  }
  while ( v15 < v14 );
  v24 = v52;
  v25 = v53;
  if ( (unsigned int)sub_14016F730((__int64)v54, (unsigned __int8 *)&v55, 19) )
  {
    do
    {
      v26 = *(_DWORD *)(a1 + 16);
      if ( v26 < 16 )
      {
        v27 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 >= v27 )
          goto LABEL_60;
        v28 = *(_DWORD *)(a1 + 20);
        v29 = *(_DWORD *)(a1 + 16);
        if ( v28 >= 1 << v26 )
        {
LABEL_27:
          *(_QWORD *)a1 = v27;
        }
        else
        {
          while ( 1 )
          {
            v30 = *(unsigned __int8 **)a1;
            if ( *(_QWORD *)a1 < v27 )
            {
              v31 = *v30;
              *(_QWORD *)a1 = (uint64)(uintptr_t)(v30 + 1);
            }
            else
            {
              v31 = 0;
            }
            v26 = v29 + 8;
            *(_DWORD *)(a1 + 16) = v29 + 8;
            v28 |= v31 << v29;
            *(_DWORD *)(a1 + 20) = v28;
            if ( v29 + 8 > 24 )
              break;
            v29 += 8;
            if ( v28 >= 1 << v26 )
              goto LABEL_27;
          }
        }
      }
      v32 = (unsigned __int16)v54[*(_DWORD *)(a1 + 20) & 0x1FF];
      if ( v54[*(_DWORD *)(a1 + 20) & 0x1FF] )
      {
        v33 = v32 >> 9;
        *(_DWORD *)(a1 + 20) >>= v32 >> 9;
        v34 = v32 & 0x1FF;
        *(_DWORD *)(a1 + 16) = v26 - v33;
      }
      else
      {
        v34 = sub_14016FB90(a1, (__int64)v54);
      }
      if ( (unsigned int)v34 > 0x12 )
        goto LABEL_60;
      if ( v34 >= 16 )
      {
        v36 = 0;
        if ( v34 == 16 )
        {
          v37 = *(_DWORD *)(a1 + 16);
          if ( v37 < 2 )
          {
            v38 = *(_DWORD *)(a1 + 20);
            v39 = *(_DWORD *)(a1 + 16);
            if ( v38 >= 1 << v37 )
            {
LABEL_43:
              *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
            }
            else
            {
              v40 = *(_QWORD *)(a1 + 8);
              while ( 1 )
              {
                v41 = *(unsigned __int8 **)a1;
                if ( *(_QWORD *)a1 < v40 )
                {
                  v42 = *v41;
                  *(_QWORD *)a1 = (uint64)(uintptr_t)(v41 + 1);
                }
                else
                {
                  v42 = 0;
                }
                v37 = v39 + 8;
                *(_DWORD *)(a1 + 16) = v39 + 8;
                v38 |= v42 << v39;
                *(_DWORD *)(a1 + 20) = v38;
                if ( v39 + 8 > 24 )
                  break;
                v39 += 8;
                if ( v38 >= 1 << v37 )
                  goto LABEL_43;
              }
            }
          }
          v43 = *(_DWORD *)(a1 + 20) & 3;
          *(_DWORD *)(a1 + 20) >>= 2;
          v35 = v43 + 3;
          *(_DWORD *)(a1 + 16) = v37 - 2;
          if ( !v13 )
            goto LABEL_60;
          v36 = v59[v13 - 1];
        }
        else
        {
          if ( v34 == 17 )
          {
            v44 = *(_DWORD *)(a1 + 16);
            if ( v44 < 3 )
            {
              sub_140160350(a1);
              v44 = *(_DWORD *)(a1 + 16);
            }
            v45 = *(_DWORD *)(a1 + 20) & 7;
            *(_DWORD *)(a1 + 20) >>= 3;
            v35 = v45 + 3;
            v46 = v44 - 3;
          }
          else
          {
            v47 = *(_DWORD *)(a1 + 16);
            if ( v47 < 7 )
            {
              sub_140160350(a1);
              v47 = *(_DWORD *)(a1 + 16);
            }
            v48 = *(_DWORD *)(a1 + 20) & 0x7F;
            *(_DWORD *)(a1 + 20) >>= 7;
            v35 = v48 + 11;
            v46 = v47 - 7;
          }
          *(_DWORD *)(a1 + 16) = v46;
        }
        if ( v24 - v13 < v35 )
          goto LABEL_60;
        sub_1401FCD30((void *)(uintptr_t)(&v59[v13]), v36, (unsigned int)v35);
      }
      else
      {
        v35 = 1;
        v59[v13] = v34;
      }
      v49 = v35 + v13;
      v13 = v49;
    }
    while ( v49 < v24 );
    if ( v49 != v24 )
    {
LABEL_60:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad codelengths");
      return 0;
    }
    if (!(unsigned int)sub_14016F730(a1 + 52, v59, v25)) return 0;
    if (!(unsigned int)sub_14016F730(a1 + 2072, &v59[v25], v10)) return 0;
    return 1;
  }
  return 0;
}

// 14015D05E: conditional instruction was optimized away because eax.4<10u
// 14015D307: conditional instruction was optimized away because eax.4==12
// 14015D356: variable 'v36' is possibly undefined
// 14026FED0: using guessed type unsigned __int8 byte_14026FED0[32];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015D400) ----------------------------------------------------
__int64            sub_14015D400(_QWORD *a1, _BYTE *a2, int a3)
{
  _BYTE *v4; // rdi
  unsigned int v5; // esi
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  char v9; // cl
  bool v10; // zf

  v4 = (_BYTE *)a1[3];
  v5 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4LL);
  if ( a3 == 2 )
  {
    if ( v5 )
    {
      v8 = v5;
      do
      {
        v9 = -1;
        v10 = *v4 == *a2;
        v4 += 2;
        if ( v10 )
          v9 = 0;
        *(v4 - 1) = v9;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( a3 != 4 )
      sub_14023E640(
        (char *)L"out_n == 2 || out_n == 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x12C3u);
    if ( v5 )
    {
      v6 = v4 + 2;
      v7 = v5;
      do
      {
        if ( *(v6 - 2) == *a2 && *(v6 - 1) == a2[1] && *v6 == a2[2] )
          v6[1] = 0;
        v6 += 4;
        --v7;
      }
      while ( v7 );
    }
  }
  return 1;
}

// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272960: using guessed type __int16[25];

//----- (000000014015D4C0) ----------------------------------------------------
__int64            sub_14015D4C0(_QWORD *a1, _WORD *a2, int a3)
{
  _WORD *v4; // rdi
  unsigned int v5; // esi
  _WORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int16 v9; // cx
  bool v10; // zf

  v4 = (_WORD *)a1[3];
  v5 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4LL);
  if ( a3 == 2 )
  {
    if ( v5 )
    {
      v8 = v5;
      do
      {
        v9 = -1;
        v10 = *v4 == *a2;
        v4 += 2;
        if ( v10 )
          v9 = 0;
        *(v4 - 1) = v9;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( a3 != 4 )
      sub_14023E640(
        (char *)L"out_n == 2 || out_n == 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x12DCu);
    if ( v5 )
    {
      v6 = v4 + 2;
      v7 = v5;
      do
      {
        if ( *(v6 - 2) == *a2 && *(v6 - 1) == a2[1] && *v6 == a2[2] )
          v6[1] = 0;
        v6 += 4;
        --v7;
      }
      while ( v7 );
    }
  }
  return 1;
}

// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272960: using guessed type __int16[25];

//----- (000000014015D5D0) ----------------------------------------------------
__int64            sub_14015D5D0(char *Block, int a2, int a3, int a4)
{
  int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v9; // ecx
  int v10; // ebx
  __int64 v11; // rdx
  char *v12; // r9
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 i; // rax

  v5 = a4 * a3 * a2;
  v6 = v5;
  v7 = sr_path_malloc(v5);
  if ( v7 )
  {
    v9 = 0;
    if ( v5 >= 32 )
    {
      v10 = v5 - (v5 & 0x1F);
      v11 = v7 + 16;
      v12 = Block + 32;
      v13 = _mm_cvtsi32_si128(8u);
      do
      {
        v14 = _mm_loadu_si128((     __m128i *)v12 - 2);
        v11 += 32;
        v9 += 32;
        v15 = _mm_loadu_si128((     __m128i *)v12 - 1);
        v12 += 64;
        v16 = _mm_and_si128(_mm_srl_epi16(v14, v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        v17 = _mm_and_si128(_mm_srl_epi16(v15, v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_QWORD *)(v11 - 48) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v16, v16), u64)[0];
        *(_QWORD *)(v11 - 40) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v17, v17), u64)[0];
        v18 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128((     __m128i *)v12 - 4), v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        v19 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128((     __m128i *)v12 - 3), v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_QWORD *)(v11 - 32) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v18, v18), u64)[0];
        *(_QWORD *)(v11 - 24) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v19, v19), u64)[0];
      }
      while ( -16 - v7 + v11 < v10 );
    }
    for ( i = v9; i < v6; ++i )
      *(_BYTE *)(i + v7) = Block[2 * i + 1];
    free(Block);
    return v7;
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
}

// 14015D648: conditional instruction was optimized away because ebx.4>=20
// 14015D643: mask 0x8000001F is shortened because ebx.4 <= 0x7FFFFFFF
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 1402791D0: using guessed type __int128 xmmword_1402791D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015D730) ----------------------------------------------------
__int64            sub_14015D730(unsigned __int8 *Block, int a2, int a3, int a4)
{
  int v5; // esi
  __int64 v6; // rbx
  __int64 i; // rax

  v5 = a4 * a3 * a2;
  v6 = sr_path_malloc(2 * v5);
  if ( v6 )
  {
    if ( v5 > 0 )
    {
      for ( i = 0; i < v5; ++i )
        *(_WORD *)(v6 + 2 * i) = 257 * Block[i];
    }
    free(Block);
    return v6;
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015D7E0) ----------------------------------------------------
char *sub_14015D7E0(char *Block,int source_channels,int channels,int width,int height)
{
  if(channels==source_channels)return Block;
  if((unsigned)(channels-1)>3)
    sub_14023E640((char *)L"req_comp >= 1 && req_comp <= 4",(char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",0x6a4);
  if(channels<0 || width<0 || (width && channels>INT32_MAX/width) || height<0)
    goto outofmem;
  int row_bytes=width*channels;
  if(row_bytes<0 || (height && row_bytes>INT32_MAX/height))goto outofmem;
  unsigned char *out=(void *)(uintptr_t)sr_path_malloc(height*row_bytes);
  if(!out)goto outofmem;
  if(source_channels<1 || source_channels>4 || channels<1 || channels>4){
    sub_14023E640((char *)L"0",(char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",0x6c1);
    free(Block);free(out);
    *(const char **)(*(_QWORD *)(__readgsqword(0x58)+8LL*dword_140404A6C[19064470])+16)="unsupported";
    return NULL;
  }
  for(int y=0;y<height;y++){
    const unsigned char *in=(const unsigned char *)Block+(int64_t)width*source_channels*y;
    unsigned char *row=out+(int64_t)row_bytes*y;
    for(int x=0;x<width;x++,in+=source_channels,row+=channels){
      unsigned r=in[0],g=source_channels<3?r:in[1],b=source_channels<3?r:in[2];
      unsigned alpha=source_channels==2?in[1]:source_channels==4?in[3]:255;
      if(channels<3){row[0]=(unsigned char)((77*r+150*g+29*b)>>8);if(channels==2)row[1]=(unsigned char)alpha;}
      else {row[0]=(unsigned char)r;row[1]=(unsigned char)g;row[2]=(unsigned char)b;if(channels==4)row[3]=(unsigned char)alpha;}
    }
  }
  free(Block);return (char *)out;
outofmem:
  free(Block);
  *(const char **)(*(_QWORD *)(__readgsqword(0x58)+8LL*dword_140404A6C[19064470])+16)="outofmem";
  return NULL;
}

//----- (000000014015DD00) ----------------------------------------------------
char *           sub_14015DD00(char *Block, int a2, int a3, int a4, int a5)
{
  char *v10; // r14
  int v11; // r11d
  char *v12; // r9
  char *v13; // rax
  int i; // edx
  int j; // edx
  __int16 v16; // cx
  int k; // edx
  __int16 v18; // cx
  int m; // edx
  int n; // edx
  __int16 v21; // cx
  int ii; // edx
  __int16 v23; // cx
  int mm; // edx
  __int16 v25; // cx
  int jj; // r10d
  int v27; // r8d
  int v28; // ecx
  int kk; // r10d
  int v30; // r8d
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  int nn; // r10d
  int v35; // r8d
  int v36; // ecx
  int i1; // r10d
  int v38; // r8d
  int v39; // ecx
  int i2; // edx
  __int16 v41; // cx

  if ( a3 == a2 )
    return Block;
  if ( (unsigned int)(a3 - 1) > 3 )
    sub_14023E640(
      (char *)L"req_comp >= 1 && req_comp <= 4",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x6DDu);
  v10 = (char *)sr_path_malloc((unsigned int)(2 * a5 * a4 * a3));
  if ( v10 )
  {
    v11 = 0;
    if ( a5 > 0 )
    {
      while ( 2 )
      {
        v12 = &Block[2 * a4 * a2 * v11];
        v13 = &v10[2 * a4 * a3 * v11];
        switch ( a3 + 8 * a2 - 10 )
        {
          case 0:
            for ( i = a4 - 1; i >= 0; v13 += 4 )
            {
              --i;
              *(_WORD *)v13 = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = -1;
            }
            goto LABEL_44;
          case 1:
            for ( j = a4 - 1; j >= 0; v13 += 6 )
            {
              --j;
              v16 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = v16;
              *(_WORD *)v13 = v16;
            }
            goto LABEL_44;
          case 2:
            for ( k = a4 - 1; k >= 0; v13 += 8 )
            {
              --k;
              v18 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = v18;
              *(_WORD *)v13 = v18;
              *((_WORD *)v13 + 3) = -1;
            }
            goto LABEL_44;
          case 7:
            for ( m = a4 - 1; m >= 0; v12 += 4 )
            {
              --m;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 2;
            }
            goto LABEL_44;
          case 9:
            for ( n = a4 - 1; n >= 0; v13 += 6 )
            {
              --n;
              v21 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 4;
              *((_WORD *)v13 + 1) = v21;
              *(_WORD *)v13 = v21;
            }
            goto LABEL_44;
          case 10:
            for ( ii = a4 - 1; ii >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 1) )
            {
              --ii;
              v23 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 4;
              *((_WORD *)v13 + 1) = v23;
              *(_WORD *)v13 = v23;
              v13 += 8;
            }
            goto LABEL_44;
          case 15:
            for ( jj = a4 - 1;
                  jj >= 0;
                  *((_WORD *)v13 - 1) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 3) + 29 * v28 + v27) >> 8 )
            {
              v13 += 2;
              v27 = 150 * *((unsigned __int16 *)v12 + 1);
              v28 = *((unsigned __int16 *)v12 + 2);
              v12 += 6;
              --jj;
            }
            goto LABEL_44;
          case 16:
            for ( kk = a4 - 1; kk >= 0; *((_WORD *)v13 - 2) = (unsigned int)(77 * v33 + v32 + v30) >> 8 )
            {
              v13 += 4;
              v30 = 150 * *((unsigned __int16 *)v12 + 1);
              v31 = *((unsigned __int16 *)v12 + 2);
              v12 += 6;
              v32 = 29 * v31;
              v33 = *((unsigned __int16 *)v12 - 3);
              *((_WORD *)v13 - 1) = -1;
              --kk;
            }
            goto LABEL_44;
          case 18:
            for ( mm = a4 - 1; mm >= 0; *((_WORD *)v13 - 1) = -1 )
            {
              --mm;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 8;
              v25 = *((_WORD *)v12 + 1);
              v12 += 6;
              *((_WORD *)v13 - 3) = v25;
              *((_WORD *)v13 - 2) = *((_WORD *)v12 - 1);
            }
            goto LABEL_44;
          case 23:
            for ( nn = a4 - 1;
                  nn >= 0;
                  *((_WORD *)v13 - 1) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 4) + 29 * v36 + v35) >> 8 )
            {
              v13 += 2;
              v35 = 150 * *((unsigned __int16 *)v12 + 1);
              v36 = *((unsigned __int16 *)v12 + 2);
              v12 += 8;
              --nn;
            }
            goto LABEL_44;
          case 24:
            for ( i1 = a4 - 1; i1 >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 1) )
            {
              v13 += 4;
              v38 = 150 * *((unsigned __int16 *)v12 + 1);
              v39 = *((unsigned __int16 *)v12 + 2);
              v12 += 8;
              --i1;
              *((_WORD *)v13 - 2) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 4) + 29 * v39 + v38) >> 8;
            }
            goto LABEL_44;
          case 25:
            for ( i2 = a4 - 1; i2 >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 2) )
            {
              --i2;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 6;
              v41 = *((_WORD *)v12 + 1);
              v12 += 8;
              *((_WORD *)v13 - 2) = v41;
            }
LABEL_44:
            if ( ++v11 >= a5 )
              break;
            continue;
          default:
            sub_14023E640((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x6FAu);
            free(Block);
            free(v10);
            *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported");
            return nullptr;
        }
        break;
      }
    }
    free(Block);
    return v10;
  }
  else
  {
    free(Block);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return nullptr;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 1402724F0: using guessed type __int16[31];
// 140272530: using guessed type __int16[2];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015E240)
__int64 sub_14015E240(void) { return sr_client_cpu_leaf1_edx(); }


//----- (000000014015E260) ----------------------------------------------------
__int64            sub_14015E260(__int64 a1, unsigned __int8 *a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int8 *v7; // r14
  int *v9; // rcx
  unsigned int v10; // r11d
  int v11; // edi
  int v12; // r8d
  int v13; // ecx
  int v14; // ecx
  void *v15; // rax
  int v16; // r10d
  __int64 v17; // r15
  int *v18; // r8
  unsigned int v19; // r9d
  unsigned __int32 v20; // ecx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // r9d
  int v25; // ecx
  int v26; // esi
  unsigned int v27; // ebx
  int v28; // r14d
  int v29; // ecx
  int v30; // eax
  int v31; // esi
  int v32; // r8d
  int v33; // ebx
  __int64 v35; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h]
  void *Block; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+58h] [rbp-A8h]
  unsigned int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h]
  unsigned int v44; // [rsp+64h] [rbp-9Ch]
  int v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  unsigned int v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+74h] [rbp-8Ch]
  int v49; // [rsp+78h] [rbp-88h]
  unsigned int v50; // [rsp+7Ch] [rbp-84h]
  unsigned __int8 *v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __m128i v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A4h] [rbp-5Ch]
  int v56; // [rsp+A8h] [rbp-58h]
  __m128i si128; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C4h] [rbp-3Ch]
  __m128i v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E4h] [rbp-1Ch]
  int v63; // [rsp+E8h] [rbp-18h]
  __m128i v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]
  __int64 v67; // [rsp+110h] [rbp+10h]

  v51 = a2;
  v41 = a4;
  v7 = a2;
  v36 = a3;
  v9 = *(int **)a1;
  v10 = a3;
  v11 = a4 * ((a5 == 16) + 1);
  if ( a7 )
  {
    v12 = v9[1];
    v13 = *v9;
    if ( v13 < 0
      || v12 < 0
      || v12 && v13 > 0x7FFFFFFF / v12
      || (v14 = v12 * v13, v14 < 0)
      || v11 < 0
      || v11 && v14 > 0x7FFFFFFF / v11 )
    {
      Block = nullptr;
    }
    else
    {
      v15 = (void *)sr_path_malloc(v11 * v14);
      v10 = v36;
      Block = v15;
    }
    v16 = 0;
    v39 = 0;
    v17 = 0;
    v52 = 0;
    while ( 1 )
    {
      v18 = *(int **)a1;
      si128 = _mm_load_si128((     __m128i *)&xmmword_140278F00);
      v54 = 2;
      v64 = _mm_load_si128((     __m128i *)&xmmword_140278E00);
      v55 = 2;
      v53 = _mm_load_si128((     __m128i *)&xmmword_140278F70);
      v56 = 1;
      v19 = *(unsigned __int32 *)((char *)SR_VEC_LANES(128, v53, u32) + v17);
      v58 = 0;
      v59 = 1;
      v20 = v19 - *(__int32 *)((char *)SR_VEC_LANES(128, si128, i32) + v17);
      v45 = *(__int32 *)((char *)SR_VEC_LANES(128, si128, i32) + v17);
      v21 = *v18 - 1;
      v61 = 4;
      v62 = 2;
      v22 = (v20 + v21) / v19;
      v60 = _mm_load_si128((     __m128i *)&xmmword_140278F90);
      v23 = v22;
      v63 = 2;
      v44 = v19;
      v24 = *(unsigned __int32 *)((char *)SR_VEC_LANES(128, v60, u32) + v17);
      v47 = v22;
      v65 = 2;
      v66 = 1;
      v42 = v24;
      if ( v22 )
      {
        v25 = v18[1] - *(__int32 *)((char *)SR_VEC_LANES(128, v64, i32) + v17);
        v43 = *(__int32 *)((char *)SR_VEC_LANES(128, v64, i32) + v17);
        v48 = (v25 + v24 - 1) / v24;
        v26 = v48;
        if ( v48 )
        {
          v27 = v48 * (((int)(a5 * v22 * v18[2] + 7) >> 3) + 1);
          v50 = v27;
          if ( !(unsigned int)sub_14015E5F0((_QWORD *)a1, v7, v10, v41, v22, v48, a5, a6) )
          {
            free(Block);
            return 0;
          }
          v28 = 0;
          v37 = 0;
          if ( v48 > 0 )
          {
            v29 = 0;
            v30 = v11 * v23;
            v38 = 0;
            v49 = v11 * v23;
            do
            {
              if ( (int)v23 > 0 )
              {
                v31 = v29;
                v32 = v43 + v28 * v42;
                v46 = v32;
                v33 = v11 * v45;
                do
                {
                  sub_1401FC920(
                    (__m128i *)((char *)Block + (unsigned int)(v11 * v32 * **(_DWORD **)a1) + v33),
                    (     __m128i *)(*(_QWORD *)(a1 + 24) + v31),
                    v11);
                  v32 = v46;
                  v31 += v11;
                  v33 += v11 * v44;
                  --v23;
                }
                while ( v23 );
                v28 = v37;
                v29 = v38;
                v23 = v47;
                v26 = v48;
                v30 = v49;
              }
              ++v28;
              v29 += v30;
              v37 = v28;
              v38 = v29;
            }
            while ( v28 < v26 );
            v27 = v50;
            v17 = v52;
          }
          free(*(void **)(a1 + 24));
          v10 = v36 - v27;
          v16 = v39;
          v7 = &v51[v27];
          v36 -= v27;
          v51 = v7;
        }
      }
      ++v16;
      v17 += 4;
      v39 = v16;
      v52 = v17;
      if ( v16 >= 7 )
      {
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(Block);
        return 1;
      }
    }
  }
  return sub_14015E5F0((_QWORD *)a1, a2, a3, a4, *v9, v9[1], a5, a6);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140278E00: using guessed type __int128 xmmword_140278E00;
// 140278F00: using guessed type __int128 xmmword_140278F00;
// 140278F70: using guessed type __int128 xmmword_140278F70;
// 140278F90: using guessed type __int128 xmmword_140278F90;

//----- (000000014015E5F0) ----------------------------------------------------
__int64            sub_14015E5F0(
        _QWORD *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  unsigned int v8; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  _QWORD *v12; // r8
  int v13; // ebx
  int v14; // r13d
  int v15; // r14d
  __int64 v17; // rax
  _QWORD *v18; // r11
  int v19; // r8d
  int v20; // r10d
  int v21; // r9d
  int v22; // ecx
  unsigned int v23; // r9d
  __int64 v24; // rax
       char *v25; // rdx
  unsigned int v26; // edx
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rbp
  unsigned __int8 *v31; // rdi
  unsigned __int8 *v32; // r11
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // r10
  unsigned __int8 *v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r8
  unsigned __int8 v39; // al
  unsigned __int8 v40; // al
  unsigned __int8 v41; // cl
       __m128i *v42; // rdi
  char *v43; // rsi
  __m128i *v44; // rbx
  unsigned __int8 *v45; // r12
  unsigned __int8 *v46; // kr08_8
  unsigned int v47; // edx
  __int64 v48; // r9
  __m128i *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r10
  unsigned __int8 *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  signed __int64 v58; // rcx
  signed __int64 v59; // rdx
  unsigned __int8 *v60; // rax
  __m128i v61; // xmm0
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm2
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm1
  __m128i v70; // xmm0
  __m128i v71; // xmm2
  unsigned __int8 *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rbp
  char *v75; // rdx
  __int64 v76; // r9
  int v77; // ecx
  int v78; // eax
  __int64 v79; // rdx
  __int8 *v80; // rcx
  __int64 v81; // r10
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // r12
  __int8 *v85; // r9
  signed __int64 v86; // rcx
  char *v87; // rbx
  signed __int64 v88; // rsi
  unsigned __int8 *v89; // r14
  int v90; // r10d
  int v91; // ebp
  int v92; // r13d
  signed int v93; // r11d
  signed int v94; // ecx
  signed int v95; // eax
  __int64 v96; // r10
  unsigned __int8 *v97; // rcx
  __int64 v98; // rdx
  unsigned __int8 v99; // al
  __int64 v100; // r10
  unsigned __int8 *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // r10d
  __int64 v106; // r9
       __m128i *v107; // rcx
  signed __int64 v108; // rdx
  signed __int64 v109; // rbx
  signed __int64 v110; // rdx
  __int64 v111; // rcx
  char *v112; // r8
  signed __int64 v113; // rcx
  __int64 v114; // r10
  signed __int64 v115; // r8
       __m128i *v116; // rax
  __m128i v117; // xmm0
  __m128i v118; // xmm1
  __m128i v119; // xmm2
  __m128i v120; // xmm1
  __m128i v121; // xmm0
  __m128i v122; // xmm2
  __m128i v123; // xmm0
  __m128i v124; // xmm1
  __m128i v125; // xmm1
  __m128i v126; // xmm0
  __m128i v127; // xmm2
  signed __int64 v128; // rsi
       __m128i *v129; // rcx
  signed __int64 v130; // rbx
  __int64 v131; // r9
  signed __int64 v132; // r8
  signed __int64 v133; // rdx
  signed __int64 v134; // rbx
  int v135; // ecx
  int v136; // eax
  __m128i *v137; // r10
  signed __int64 v138; // r13
  char *v139; // r15
  __int8 *v140; // rbp
  int v141; // r11d
  int v142; // esi
  int v143; // r12d
  signed int v144; // ebx
  signed int v145; // ecx
  signed int v146; // eax
       __m128i *v147; // rcx
  signed __int64 v148; // rdx
  signed __int64 v149; // rbx
  unsigned __int8 v150; // al
       __m128i *v151; // rcx
  signed __int64 v152; // rdx
  signed __int64 v153; // rbx
  __int64 v154; // rbp
  __int64 v155; // rsi
  __int64 v156; // r14
  __int64 v157; // rax
  __int64 v158; // rdi
  char *v159; // r9
  _BYTE *v160; // r8
  char v161; // r10
  int v162; // ebx
  unsigned __int64 v163; // r11
  char v164; // al
  int v165; // ebx
  unsigned __int64 v166; // r11
  char v167; // al
  char v168; // cl
  int v169; // r11d
  unsigned __int64 v170; // rbx
  char v171; // al
  __int64 v172; // rbx
  __int64 i; // rcx
  __int64 v174; // r8
  _BYTE *v175; // rdx
  _BYTE *v176; // rcx
  char v177; // al
  unsigned __int8 *v179; // r9
  unsigned __int8 *v180; // r8
  unsigned int v181; // r14d
  __int64 v182; // r10
  __int16 v183; // dx
  __int16 v184; // cx
  int v185; // [rsp+20h] [rbp-C8h]
  __m128i *v186; // [rsp+28h] [rbp-C0h]
  int v187; // [rsp+28h] [rbp-C0h]
  int v188; // [rsp+30h] [rbp-B8h]
  unsigned int v189; // [rsp+34h] [rbp-B4h]
  int v190; // [rsp+38h] [rbp-B0h]
  unsigned int v191; // [rsp+3Ch] [rbp-ACh]
  unsigned int v192; // [rsp+40h] [rbp-A8h]
  char *v193; // [rsp+48h] [rbp-A0h]
  int v194; // [rsp+50h] [rbp-98h]
  __int64 v195; // [rsp+58h] [rbp-90h]
  __int64 v196; // [rsp+60h] [rbp-88h]
  __int8 *v197; // [rsp+68h] [rbp-80h]
  __int64 v198; // [rsp+70h] [rbp-78h]
  __int64 v199; // [rsp+78h] [rbp-70h]
  __int64 v200; // [rsp+80h] [rbp-68h]
  __int64 v201; // [rsp+98h] [rbp-50h]
  __int64 v202; // [rsp+A0h] [rbp-48h]

  v8 = 0;
  v10 = a6;
  v11 = *(_DWORD *)(*a1 + 8LL);
  v12 = a1;
  v185 = v11;
  v188 = a5;
  v13 = a4 * ((a7 == 16) + 1);
  v14 = ((a7 == 16) + 1) * v11;
  v15 = a4;
  v190 = v14;
  v192 = a5 * v13;
  if ( a4 != v11 && a4 != v11 + 1 )
  {
    sub_14023E640(
      (char *)L"out_n == s->img_n || out_n == s->img_n+1",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x11C8u);
    v12 = a1;
  }
  if ( a5 < 0
    || (a6 & 0x80000000) != 0
    || a6 && a5 > (int)(0x7FFFFFFF / a6)
    || ((a6 * a5) & 0x80000000) != 0
    || v13 < 0
    || v13 && (int)(a6 * a5) > 0x7FFFFFFF / v13 )
  {
    v12[3] = 0;
    goto LABEL_235;
  }
  v17 = sr_path_malloc((int)(a6 * a5 * v13));
  v18 = a1;
  a1[3] = v17;
  if ( !v17 )
  {
LABEL_235:
    v24 = sr_client_static_tls();
    v25 = "outofmem";
    goto LABEL_236;
  }
  v19 = v185;
  if ( v185 < 0
    || (v20 = a5) != 0 && v185 > (int)(0x7FFFFFFFu / a5)
    || (v21 = a5 * v185, v194 = a5 * v185, a5 * v185 < 0)
    || (v22 = a7, a7 < 0)
    || a7 && v21 > (int)(0x7FFFFFFFu / a7)
    || a7 * v21 > 2147483640 )
  {
    v24 = sr_client_static_tls();
    v25 = "too large";
    goto LABEL_236;
  }
  v23 = (unsigned int)(a7 * v21 + 7) >> 3;
  v191 = v23;
  if ( a3 >= a6 * (v23 + 1) )
  {
    v26 = 0;
    v189 = 0;
    if ( !a6 )
      goto LABEL_175;
    v27 = v14;
    v28 = v13;
    v195 = v14;
    v200 = v13;
    while ( 1 )
    {
      v29 = v18[3];
      v30 = *a2;
      v31 = a2 + 1;
      v32 = v31;
      v33 = v192 * v26 + v29;
      v202 = v192 * v26;
      if ( (unsigned int)v30 > 4 )
      {
        v24 = sr_client_static_tls();
        v25 = "invalid filter";
        goto LABEL_236;
      }
      if ( a7 < 8 )
      {
        if ( v23 > v20 )
        {
          v24 = sr_client_static_tls();
          v25 = "invalid width";
          goto LABEL_236;
        }
        v14 = 1;
        v27 = 1;
        v190 = 1;
        v195 = 1;
        v188 = v23;
        v33 += v20 * a4 - v23;
      }
      v34 = v33 - v192;
      if ( !v26 )
        LODWORD(v30) = byte_140301848[v30];
      if ( v27 > 0 )
      {
        v35 = v34 - (_QWORD)v31;
        v36 = v31;
        v37 = v33 - (_QWORD)v31;
        v38 = v27;
        while ( 2 )
        {
          switch ( (int)v30 )
          {
            case 0:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 1:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 2:
              do
              {
                v36[v37] = *v36 + v36[v35];
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 3:
              do
              {
                v39 = (v36++)[v35];
                v36[v37 - 1] = *(v36 - 1) + (v39 >> 1);
                --v38;
              }
              while ( v38 );
              break;
            case 4:
              do
              {
                v40 = (v36++)[v35];
                v41 = 0;
                if ( v40 )
                  v41 = v40;
                v36[v37 - 1] = *(v36 - 1) + v41;
                --v38;
              }
              while ( v38 );
              break;
            case 5:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 6:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              v28 = v200;
              break;
            default:
              ++v36;
              if ( --v38 )
                continue;
              break;
          }
          break;
        }
        v19 = v185;
      }
      if ( a7 == 8 )
      {
        if ( v19 != a4 )
          *(_BYTE *)(v19 + v33) = -1;
        v42 = (     __m128i *)&v31[v19];
        v43 = (char *)(a4 + v34);
        v44 = (__m128i *)(a4 + v33);
        v193 = v43;
        v186 = v44;
        v45 = (unsigned __int8 *)v42;
      }
      else if ( a7 == 16 )
      {
        if ( v19 != a4 )
          *(_WORD *)(v27 + v33) = -1;
        v43 = (char *)(v28 + v34);
        v42 = (     __m128i *)&v31[v14];
        v193 = v43;
        v44 = (__m128i *)(v28 + v33);
        v45 = &v32[v14];
        v186 = v44;
      }
      else
      {
        v42 = (     __m128i *)(v31 + 1);
        v43 = (char *)(v34 + 1);
        v45 = (unsigned __int8 *)v42;
        v44 = (__m128i *)(v33 + 1);
        v193 = v43;
        v186 = v44;
        if ( a7 < 8 )
          break;
      }
      if ( v19 == a4 )
        break;
      if ( v19 + 1 != a4 )
        sub_14023E640((char *)L"img_n+1 == out_n", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x121Cu);
      v46 = (unsigned __int8 *)v42;
      a2 = v45;
      switch ( (int)v30 )
      {
        case 0:
          v47 = a5;
          if ( a5 != 1 )
          {
            v48 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v49 = v44;
                v50 = v27;
                do
                {
                  SR_VEC_PTR_LANES(128, v49, i8)[0] = SR_VEC_PTR_LANES(128, v49, i8)[a2 - (unsigned __int8 *)v44];
                  v49 = (__m128i *)((char *)v49 + 1);
                  --v50;
                }
                while ( v50 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              --v48;
            }
            while ( v48 );
            break;
          }
          goto LABEL_127;
        case 1:
          v47 = a5;
          if ( a5 != 1 )
          {
            v51 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v52 = a2;
                v53 = v27;
                do
                {
                  v52[(char *)v44 - (char *)a2] = *v52 + v52[(char *)v44 - v28 - (char *)a2];
                  ++v52;
                  --v53;
                }
                while ( v53 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              --v51;
            }
            while ( v51 );
            break;
          }
          goto LABEL_127;
        case 2:
          v47 = a5;
          if ( a5 != 1 )
          {
            v54 = (unsigned int)(a5 - 1);
            do
            {
              v55 = 0;
              if ( v14 >= 64 )
              {
                v56 = v14 - 1;
                v57 = (unsigned __int64)SR_VEC_PTR_LANES(128, v44, u64) + v56;
                if ( (v44 > (__m128i *)&a2[v56] || v57 < (unsigned __int64)a2)
                  && (v44 > (__m128i *)&v43[v56] || v57 < (unsigned __int64)v43) )
                {
                  v58 = v43 - (char *)a2;
                  v59 = (char *)v44 - (char *)a2;
                  v60 = a2 + 16;
                  do
                  {
                    v61 = _mm_loadu_si128((     __m128i *)v60 - 1);
                    v55 += 64;
                    v62 = _mm_loadu_si128((     __m128i *)&v60[v58 - 16]);
                    v63 = _mm_loadu_si128((     __m128i *)&v60[v58]);
                    v60 += 64;
                    v64 = _mm_add_epi8(v62, v61);
                    v65 = _mm_loadu_si128((     __m128i *)v60 - 4);
                    { __m128i sr_png_store = v64; __builtin_memcpy((void *)(&v60[v59 - 80]), &sr_png_store, 16); }
                    v66 = _mm_add_epi8(v63, v65);
                    v67 = _mm_loadu_si128((     __m128i *)v60 - 3);
                    v68 = _mm_loadu_si128((     __m128i *)&v60[v58 - 48]);
                    { __m128i sr_png_store = v66; __builtin_memcpy((void *)(&v60[v59 - 64]), &sr_png_store, 16); }
                    v69 = _mm_add_epi8(v68, v67);
                    v70 = _mm_loadu_si128((     __m128i *)v60 - 2);
                    v71 = _mm_loadu_si128((     __m128i *)&v60[v58 - 32]);
                    { __m128i sr_png_store = v69; __builtin_memcpy((void *)(&v60[v59 - 48]), &sr_png_store, 16); }
                    { __m128i sr_png_store = _mm_add_epi8(v71, v70); __builtin_memcpy((void *)(&v60[v59 - 32]), &sr_png_store, 16); }
                  }
                  while ( v55 < v14 - (v14 & 0x3F) );
                }
              }
              if ( v55 < v27 )
              {
                v72 = &a2[v55];
                v73 = v27 - v55;
                do
                {
                  v72[(char *)v44 - (char *)a2] = *v72 + v72[v43 - (char *)a2];
                  ++v72;
                  --v73;
                }
                while ( v73 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              v43 += v28;
              --v54;
            }
            while ( v54 );
            break;
          }
          goto LABEL_127;
        case 3:
          v47 = a5;
          if ( a5 != 1 )
          {
            v74 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v75 = v43;
                v76 = v27;
                do
                {
                  v77 = (unsigned __int8)v75[(char *)v44 - v28 - v43];
                  v78 = (unsigned __int8)*v75++;
                  v75[(char *)v44 - v43 - 1] = v75[a2 - (unsigned __int8 *)v43 - 1] + ((unsigned int)(v78 + v77) >> 1);
                  --v76;
                }
                while ( v76 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              v43 += v28;
              --v74;
            }
            while ( v74 );
            break;
          }
          goto LABEL_127;
        case 4:
          v79 = (unsigned int)(a5 - 1);
          if ( a5 != 1 )
          {
            v80 = &SR_VEC_PTR_LANES(128, v44, i8)[v27];
            v196 = v14;
            v81 = v28 + v27;
            v82 = v14;
            v83 = v28 - (_QWORD)v44;
            v197 = &SR_VEC_PTR_LANES(128, v44, i8)[v27];
            v198 = v28 - (_QWORD)v44;
            v201 = v28 + v27;
            v199 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v84 = v27;
                v85 = &v80[-v81];
                v86 = v43 - (char *)v44;
                v87 = &v43[v83];
                v88 = v86;
                v89 = &a2[v83];
                do
                {
                  v90 = (unsigned __int8)*v85;
                  v91 = (unsigned __int8)v85[v88];
                  v92 = (unsigned __int8)v85[(_QWORD)v87];
                  v93 = abs32(v92 - v91);
                  v94 = abs32(v90 - v91);
                  v95 = abs32(v90 - v91 + v92 - v91);
                  if ( v93 > v94 || v93 > v95 )
                  {
                    LOBYTE(v90) = v85[v88];
                    if ( v94 <= v95 )
                      LOBYTE(v90) = v85[(_QWORD)v87];
                  }
                  v85[v28] = v90 + v85[(_QWORD)v89];
                  ++v85;
                  --v84;
                }
                while ( v84 );
                v44 = v186;
                v43 = v193;
                v27 = v195;
                v83 = v198;
                v80 = v197;
                v79 = v199;
                v82 = v196;
                v81 = v201;
              }
              v44 = (__m128i *)((char *)v44 + v28);
              *v80 = -1;
              v80 += v28;
              v186 = v44;
              v83 -= v28;
              v197 = v80;
              v43 += v28;
              v198 = v83;
              a2 += v82;
              v193 = v43;
              v199 = --v79;
            }
            while ( v79 );
          }
          break;
        case 5:
          v47 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          v96 = (unsigned int)(a5 - 1);
          do
          {
            if ( v27 > 0 )
            {
              v97 = a2;
              v98 = v27;
              do
              {
                v99 = (v97++)[(char *)v44 - v28 - (char *)a2];
                v97[(char *)v44 - (char *)a2 - 1] = *(v97 - 1) + (v99 >> 1);
                --v98;
              }
              while ( v98 );
            }
            SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
            a2 += v14;
            v44 = (__m128i *)((char *)v44 + v28);
            --v96;
          }
          while ( v96 );
          break;
        case 6:
          v47 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          v100 = (unsigned int)(a5 - 1);
          do
          {
            if ( v27 > 0 )
            {
              v101 = a2;
              v102 = v27;
              do
              {
                v101[(char *)v44 - (char *)a2] = *v101 + v101[(char *)v44 - v28 - (char *)a2];
                ++v101;
                --v102;
              }
              while ( v102 );
            }
            SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
            a2 += v14;
            v44 = (__m128i *)((char *)v44 + v28);
            --v100;
          }
          while ( v100 );
          break;
        default:
          a2 = v46;
          break;
      }
      v47 = a5;
LABEL_127:
      v22 = a7;
      v18 = a1;
      if ( a7 == 16 )
      {
        v103 = a1[3] + v202;
        if ( v47 )
        {
          v104 = v47;
          do
          {
            *(_BYTE *)(v27 + v103 + 1) = -1;
            v103 += v28;
            --v104;
          }
          while ( v104 );
        }
LABEL_169:
        v22 = a7;
      }
      v8 = 0;
      v20 = a5;
      v26 = v189 + 1;
      v23 = v191;
      v189 = v26;
      if ( v26 >= a6 )
      {
        v15 = a4;
        v10 = a6;
LABEL_175:
        if ( v22 >= 8 )
        {
          if ( v22 == 16 )
          {
            v179 = (unsigned __int8 *)v18[3];
            v180 = v179;
            v181 = v10 * v20 * v15;
            if ( v181 )
            {
              v182 = v181;
              do
              {
                v183 = *v179;
                v179 += 2;
                v184 = v180[1];
                v180 += 2;
                *((_WORD *)v180 - 1) = v184 | (v183 << 8);
                --v182;
              }
              while ( v182 );
            }
          }
        }
        else if ( v10 )
        {
          v154 = (unsigned int)(v20 * v15);
          v155 = v20;
          v156 = v23;
          while ( 1 )
          {
            v157 = v18[3];
            v158 = v192 * v8;
            v159 = (char *)(v158 + v157 + v154 - v156);
            v160 = (_BYTE *)(v157 + v158);
            if ( a8 )
              v161 = 1;
            else
              v161 = byte_14026E768[v22];
            if ( v22 == 4 )
            {
              v162 = a5 * v185;
              if ( v194 >= 2 )
              {
                v163 = (unsigned __int64)(unsigned int)v194 >> 1;
                v162 = v194 - 2 * ((unsigned int)v194 >> 1);
                do
                {
                  *v160 = v161 * ((unsigned __int8)*v159 >> 4);
                  v164 = *v159++;
                  v160[1] = v161 * (v164 & 0xF);
                  v160 += 2;
                  --v163;
                }
                while ( v163 );
              }
              if ( v162 > 0 )
                *v160 = v161 * ((unsigned __int8)*v159 >> 4);
            }
            else
            {
              if ( v22 == 2 )
              {
                v165 = a5 * v185;
                if ( v194 >= 4 )
                {
                  v166 = (unsigned __int64)(unsigned int)v194 >> 2;
                  v165 = v194 - 4 * ((unsigned int)v194 >> 2);
                  do
                  {
                    *v160 = v161 * ((unsigned __int8)*v159 >> 6);
                    v160[1] = v161 * (((unsigned __int8)*v159 >> 4) & 3);
                    v160[2] = v161 * (((unsigned __int8)*v159 >> 2) & 3);
                    v167 = *v159++;
                    v160[3] = v161 * (v167 & 3);
                    v160 += 4;
                    --v166;
                  }
                  while ( v166 );
                }
                if ( v165 > 0 )
                  *v160++ = v161 * ((unsigned __int8)*v159 >> 6);
                if ( v165 > 1 )
                  *v160++ = v161 * (((unsigned __int8)*v159 >> 4) & 3);
                if ( v165 <= 2 )
                  goto LABEL_216;
                v168 = ((unsigned __int8)*v159 >> 2) & 3;
              }
              else
              {
                if ( v22 != 1 )
                  goto LABEL_216;
                v169 = a5 * v185;
                if ( v194 >= 8 )
                {
                  v170 = (unsigned __int64)(unsigned int)v194 >> 3;
                  v169 = v194 - 8 * ((unsigned int)v194 >> 3);
                  do
                  {
                    *v160 = v161 * ((unsigned __int8)*v159 >> 7);
                    v160[1] = v161 * ((*v159 & 0x40) != 0);
                    v160[2] = v161 * ((*v159 & 0x20) != 0);
                    v160[3] = v161 * ((*v159 & 0x10) != 0);
                    v160[4] = v161 * ((*v159 & 8) != 0);
                    v160[5] = v161 * ((*v159 & 4) != 0);
                    v160[6] = v161 * ((*v159 & 2) != 0);
                    v171 = *v159++;
                    v160[7] = v161 * (v171 & 1);
                    v160 += 8;
                    --v170;
                  }
                  while ( v170 );
                }
                if ( v169 > 0 )
                  *v160++ = v161 * ((unsigned __int8)*v159 >> 7);
                if ( v169 > 1 )
                  *v160++ = v161 * ((*v159 & 0x40) != 0);
                if ( v169 > 2 )
                  *v160++ = v161 * ((*v159 & 0x20) != 0);
                if ( v169 > 3 )
                  *v160++ = v161 * ((*v159 & 0x10) != 0);
                if ( v169 > 4 )
                  *v160++ = v161 * ((*v159 & 8) != 0);
                if ( v169 > 5 )
                  *v160++ = v161 * ((*v159 & 4) != 0);
                if ( v169 <= 6 )
                  goto LABEL_216;
                v168 = (*v159 & 2) != 0;
              }
              *v160 = v161 * v168;
            }
LABEL_216:
            if ( v185 != a4 )
            {
              v172 = v158 + a1[3];
              if ( v185 == 1 )
              {
                for ( i = v155 - 1; i >= 0; --i )
                {
                  *(_BYTE *)(v172 + 2 * i + 1) = -1;
                  *(_BYTE *)(v172 + 2 * i) = *(_BYTE *)(i + v172);
                }
              }
              else
              {
                if ( v185 != 3 )
                  sub_14023E640(
                    (char *)L"img_n == 3",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x1275u);
                v174 = v155 - 1;
                if ( v155 - 1 >= 0 )
                {
                  v175 = (_BYTE *)(v155 + v172 + 2 * (v155 - 1));
                  v176 = (_BYTE *)(v172 + 4 * v174 + 2);
                  do
                  {
                    --v174;
                    v176[1] = -1;
                    v177 = v175[1];
                    v175 -= 3;
                    *v176 = v177;
                    v176 -= 4;
                    v176[3] = v175[3];
                    v176[2] = v175[2];
                  }
                  while ( v174 >= 0 );
                }
              }
            }
            v22 = a7;
            ++v8;
            v18 = a1;
            if ( v8 >= a6 )
              return 1;
          }
        }
        return 1;
      }
      v14 = v190;
      v19 = v185;
    }
    v105 = v14 * (v188 - 1);
    v187 = v105;
    v106 = v105;
    switch ( (int)v30 )
    {
      case 0:
        sub_1401FC920(v44, v42, v105);
        break;
      case 1:
        if ( v105 > 0 )
        {
          v107 = v42;
          v108 = (char *)v44 - v27 - (char *)v42;
          v109 = (char *)v44 - (char *)v42;
          do
          {
            SR_VEC_PTR_LANES(128, v107, i8)[v109] = SR_VEC_PTR_LANES(128, v107, i8)[0] + SR_VEC_PTR_LANES(128, v107, i8)[v108];
            v107 = (     __m128i *)((char *)v107 + 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 2:
        v110 = 0;
        if ( v105 >= 64 )
        {
          v111 = v105 - 1;
          v112 = &SR_VEC_PTR_LANES(128, v44, i8)[v111];
          if ( (v44 > (__m128i *)&SR_VEC_PTR_LANES(128, v42, i8)[v111] || v112 < (char *)v42)
            && (v44 > (__m128i *)&v43[v111] || v112 < v43) )
          {
            v113 = v43 - (char *)v42;
            v114 = v105 - (v105 & 0x3F);
            v115 = (char *)v44 - (char *)v42;
            v116 = v42 + 1;
            do
            {
              v117 = _mm_loadu_si128(v116 - 1);
              v110 += 64LL;
              v118 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113 - 16));
              v119 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113));
              v116 += 4;
              v120 = _mm_add_epi8(v118, v117);
              v121 = _mm_loadu_si128(v116 - 4);
              { __m128i sr_png_store = v120; __builtin_memcpy((void *)(((char *)v116 + v115 - 80)), &sr_png_store, 16); }
              v122 = _mm_add_epi8(v119, v121);
              v123 = _mm_loadu_si128(v116 - 3);
              v124 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113 - 48));
              { __m128i sr_png_store = v122; __builtin_memcpy((void *)(((char *)v116 + v115 - 64)), &sr_png_store, 16); }
              v125 = _mm_add_epi8(v124, v123);
              v126 = _mm_loadu_si128(v116 - 2);
              v127 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113 - 32));
              { __m128i sr_png_store = v125; __builtin_memcpy((void *)(((char *)v116 + v115 - 48)), &sr_png_store, 16); }
              { __m128i sr_png_store = _mm_add_epi8(v127, v126); __builtin_memcpy((void *)(((char *)&v116[-2] + v115)), &sr_png_store, 16); }
            }
            while ( v110 < v114 );
          }
        }
        if ( v110 < v106 )
        {
          v128 = v43 - (char *)v42;
          v129 = &v42[(unsigned __int64)v110 / 0x10];
          v130 = (char *)v44 - (char *)v42;
          v131 = v106 - v110;
          do
          {
            SR_VEC_PTR_LANES(128, v129, i8)[v130] = SR_VEC_PTR_LANES(128, v129, i8)[0] + SR_VEC_PTR_LANES(128, v129, i8)[v128];
            v129 = (     __m128i *)((char *)v129 + 1);
            --v131;
          }
          while ( v131 );
        }
        break;
      case 3:
        if ( v105 > 0 )
        {
          v132 = (char *)v42 - v43;
          v133 = (char *)v44 - v27 - v43;
          v134 = (char *)v44 - v43;
          do
          {
            v135 = (unsigned __int8)v43[v133];
            v136 = (unsigned __int8)*v43++;
            v43[v134 - 1] = v43[v132 - 1] + ((unsigned int)(v136 + v135) >> 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 4:
        if ( v105 > 0 )
        {
          v137 = (__m128i *)((char *)v44 - v27);
          v138 = v43 - (char *)v44;
          v139 = &v43[v27 - (_QWORD)v44];
          v140 = &SR_VEC_PTR_LANES(128, v42, i8)[v27 - (_QWORD)v44];
          do
          {
            v141 = SR_VEC_PTR_LANES(128, v137, u8)[0];
            v142 = SR_VEC_PTR_LANES(128, v137, u8)[v138];
            v143 = SR_VEC_PTR_LANES(128, v137, u8)[(_QWORD)v139];
            v144 = abs32(v143 - v142);
            v145 = abs32(v141 - v142);
            v146 = abs32(v143 + v141 - v142 - v142);
            if ( v144 > v145 || v144 > v146 )
            {
              LOBYTE(v141) = SR_VEC_PTR_LANES(128, v137, i8)[v138];
              if ( v145 <= v146 )
                LOBYTE(v141) = SR_VEC_PTR_LANES(128, v137, i8)[(_QWORD)v139];
            }
            SR_VEC_PTR_LANES(128, v137, i8)[v27] = v141 + v140[(_QWORD)v137];
            v137 = (__m128i *)((char *)v137 + 1);
            --v106;
          }
          while ( v106 );
          v28 = v200;
        }
        break;
      case 5:
        if ( v105 > 0 )
        {
          v147 = v42;
          v148 = (char *)v44 - v27 - (char *)v42;
          v149 = (char *)v44 - (char *)v42;
          do
          {
            v150 = SR_VEC_PTR_LANES(128, v147, u8)[v148];
            v147 = (     __m128i *)((char *)v147 + 1);
            SR_VEC_PTR_LANES(128, v147, i8)[v149 - 1] = SR_VEC_LANES(128, v147[-1], i8)[15] + (v150 >> 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 6:
        if ( v105 > 0 )
        {
          v151 = v42;
          v152 = (char *)v44 - v27 - (char *)v42;
          v153 = (char *)v44 - (char *)v42;
          do
          {
            SR_VEC_PTR_LANES(128, v151, i8)[v153] = SR_VEC_PTR_LANES(128, v151, i8)[0] + SR_VEC_PTR_LANES(128, v151, i8)[v152];
            v151 = (     __m128i *)((char *)v151 + 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      default:
        break;
    }
    v18 = a1;
    a2 = &SR_VEC_PTR_LANES(128, v42, u8)[v187];
    goto LABEL_169;
  }
  v24 = sr_client_static_tls();
  v25 = "not enough pixels";
LABEL_236:
  *(_QWORD *)(v24 + 16) = (uint64)(uintptr_t)(v25);
  return 0;
}

// 14015EB9E: conditional instruction was optimized away because r13d.4>=40
// 14015EFFB: conditional instruction was optimized away because r10d.4>=40
// 14015EB98: mask 0x8000003F is shortened because r13d.4 <= 0x7FFFFFFF
// 14015EFF5: mask 0x8000003F is shortened because r10d.4 <= 0x7FFFFFFF
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14026E768: using guessed type _BYTE byte_14026E768[24];
// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272890: using guessed type __int16[41];
// 140272920: using guessed type __int16[17];
// 140272948: using guessed type __int16[11];
// 140301848: using guessed type unsigned __int8 byte_140301848[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015F820) ----------------------------------------------------
__int64            sub_14015F820(__int64 *a1)
{
  __int64 result; // rax
  _BYTE *v2; // rbx
  unsigned int v3; // edi
  int v4; // ecx
  __int64 v5; // rdx
  char v6; // cl
  unsigned __int8 *v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // r10d
  __int64 v13; // rdx
  char v14; // cl

  result = *a1;
  v2 = (_BYTE *)a1[3];
  v3 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4);
  v4 = *(_DWORD *)(*a1 + 12);
  if ( v4 == 3 )
  {
    if ( v3 )
    {
      v5 = v3;
      do
      {
        v6 = *v2;
        result = (unsigned __int8)v2[2];
        *v2 = result;
        v2[2] = v6;
        v2 += 3;
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( v4 != 4 )
      result = sub_14023E640(
                 (char *)L"s->img_out_n == 4",
                 (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                 0x132Du);
    if ( v3 )
    {
      if ( dword_140404A6C[18215123] )
      {
        v7 = v2 + 2;
        v8 = v3;
        do
        {
          v9 = v7[1];
          v10 = *(v7 - 2);
          v11 = *v7;
          if ( (_BYTE)v9 )
          {
            *(v7 - 1) = ((v9 >> 1) + 255 * *(v7 - 1)) / v9;
            v12 = ((v9 >> 1) + 255 * v10) / v9;
            result = ((v9 >> 1) + 255 * v11) / v9;
          }
          else
          {
            LOBYTE(v12) = *(v7 - 2);
            result = (unsigned __int8)v11;
          }
          *(v7 - 2) = result;
          *v7 = v12;
          v7 += 4;
          --v8;
        }
        while ( v8 );
      }
      else
      {
        v13 = v3;
        do
        {
          v14 = *v2;
          result = (unsigned __int8)v2[2];
          *v2 = result;
          v2[2] = v14;
          v2 += 4;
          --v13;
        }
        while ( v13 );
      }
    }
  }
  return result;
}

// 140272410: using guessed type __int16 aCVisualc2010Co_1[42];
// 140272998: using guessed type __int16[18];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015F960) ----------------------------------------------------
_BOOL8            sub_14015F960(__int64 *a1, int a2)
{
  int v2; // ebp
  int v6; // ecx
  __int64 v7; // rbx

  v2 = 0;
  *((_DWORD *)a1 + 4627) = -1;
  *((_DWORD *)a1 + 4626) = 0;
  *((_BYTE *)a1 + 18472) = -1;
  if ( sub_140160790(a1) != -40 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
    return 0;
  }
  if ( a2 == 1 )
    return 1;
  v6 = (unsigned __int8)sub_140160790(a1);
  if ( v6 == 192 )
  {
LABEL_14:
    LOBYTE(v2) = v6 == 194;
    *((_DWORD *)a1 + 4620) = v2;
    return (unsigned int)sub_14016AEA0((__int64)a1, a2) != 0;
  }
  while ( 1 )
  {
    if ( (unsigned int)(v6 - 193) <= 1 )
      goto LABEL_14;
    if ( !(unsigned int)sub_14016BB40(a1, v6) )
      return 0;
    v6 = (unsigned __int8)sub_140160790(a1);
    if ( v6 == 255 )
      break;
LABEL_13:
    if ( v6 == 192 )
      goto LABEL_14;
  }
  while ( 1 )
  {
    v7 = *a1;
    if ( !*(_QWORD *)(*a1 + 16) )
      break;
    if ( (*(unsigned int (           **)(_QWORD))(v7 + 32))(*(_QWORD *)(v7 + 40)) )
    {
      if ( !*(_DWORD *)(v7 + 48) )
        goto LABEL_17;
      break;
    }
LABEL_12:
    v6 = (unsigned __int8)sub_140160790(a1);
    if ( v6 != 255 )
      goto LABEL_13;
  }
  if ( *(_QWORD *)(v7 + 192) < *(_QWORD *)(v7 + 200) )
    goto LABEL_12;
LABEL_17:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOF");
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015FAD0) ----------------------------------------------------
__int64            sub_14015FAD0(_QWORD *a1)
{
  __int64 v1; // rbp
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  char *v6; // rax
  int v7; // eax
  char v8; // cl
  __int64 v9; // rbx
  char *v10; // rax
  char v11; // cl
  char *v12; // rax
  char v13; // cl
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // rax
  unsigned __int8 v17; // dl
  unsigned __int8 *v18; // rax
  int v19; // edi
  unsigned __int8 v20; // cl
  unsigned __int8 *v21; // rax
  __int64 v22; // rbx
  int v23; // ebp
  unsigned __int64 v24; // rcx
  unsigned __int8 *v25; // rax
  unsigned __int8 v26; // dl
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
      v14 = *a1;
      v15 = *(_QWORD *)(*a1 + 200LL);
      v16 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v16 >= v15 )
      {
        if ( !*(_DWORD *)(v14 + 48) )
        {
          v19 = 0;
          goto LABEL_30;
        }
        sub_14016D910(*a1);
        v16 = *(unsigned __int8 **)(v14 + 192);
        v15 = *(_QWORD *)(v14 + 200);
      }
      v17 = *v16;
      v18 = v16 + 1;
      *(_QWORD *)(v14 + 192) = (uint64)(uintptr_t)(v18);
      v19 = v17;
      if ( (unsigned __int64)v18 < v15 )
      {
        v20 = *v18;
        *(_QWORD *)(v14 + 192) = (uint64)(uintptr_t)(v18 + 1);
        goto LABEL_33;
      }
LABEL_30:
      if ( *(_DWORD *)(v14 + 48) )
      {
        sub_14016D910(v14);
        v21 = *(unsigned __int8 **)(v14 + 192);
        v20 = *v21;
        *(_QWORD *)(v14 + 192) = (uint64)(uintptr_t)(v21 + 1);
      }
      else
      {
        v20 = 0;
      }
LABEL_33:
      v22 = *a1;
      v23 = (v19 << 8) + v20;
      v24 = *(_QWORD *)(*a1 + 200LL);
      v25 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v25 >= v24 )
      {
        if ( !*(_DWORD *)(v22 + 48) )
        {
          v28 = 0;
          goto LABEL_39;
        }
        sub_14016D910(*a1);
        v25 = *(unsigned __int8 **)(v22 + 192);
        v24 = *(_QWORD *)(v22 + 200);
      }
      v26 = *v25;
      v27 = v25 + 1;
      *(_QWORD *)(v22 + 192) = (uint64)(uintptr_t)(v27);
      v28 = v26;
      if ( (unsigned __int64)v27 < v24 )
      {
        v29 = *v27;
        *(_QWORD *)(v22 + 192) = (uint64)(uintptr_t)(v27 + 1);
LABEL_42:
        if ( v23 != 4 )
        {
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DNL len");
          return 0;
        }
        if ( v29 + (v28 << 8) == *(_DWORD *)(*a1 + 4LL) )
        {
          v1 = 0;
          goto LABEL_46;
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DNL height");
        return 0;
      }
LABEL_39:
      if ( *(_DWORD *)(v22 + 48) )
      {
        sub_14016D910(v22);
        v30 = *(unsigned __int8 **)(v22 + 192);
        v29 = *v30;
        *(_QWORD *)(v22 + 192) = (uint64)(uintptr_t)(v30 + 1);
      }
      else
      {
        v29 = 0;
      }
      goto LABEL_42;
    }
    if ( !(unsigned int)sub_14016C320(a1) || !(unsigned int)sub_140167230((__int64)a1) )
      return 0;
    if ( *((_BYTE *)a1 + 18472) != 0xFF )
      goto LABEL_46;
    while ( 1 )
    {
      v4 = *a1;
      if ( *(_QWORD *)(*a1 + 16LL) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(v4 + 32))(*(_QWORD *)(v4 + 40)) )
          goto LABEL_11;
        if ( !*(_DWORD *)(v4 + 48) )
          goto LABEL_46;
      }
      if ( *(_QWORD *)(v4 + 192) >= *(_QWORD *)(v4 + 200) )
        goto LABEL_46;
LABEL_11:
      v5 = *a1;
      v6 = *(char **)(*a1 + 192LL);
      if ( (unsigned __int64)v6 < *(_QWORD *)(*a1 + 200LL) )
        goto LABEL_17;
      if ( *(_DWORD *)(v5 + 48) )
      {
        v7 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(v5 + 16))(
               *(_QWORD *)(v5 + 40),
               v5 + 56,
               *(unsigned int *)(v5 + 52));
        *(_DWORD *)(v5 + 184) += *(_DWORD *)(v5 + 192) - *(_DWORD *)(v5 + 208);
        *(_QWORD *)(v5 + 192) = v5 + 56;
        if ( v7 )
        {
          *(_QWORD *)(v5 + 200) = v7 + v5 + 56;
        }
        else
        {
          *(_DWORD *)(v5 + 48) = 0;
          *(_QWORD *)(v5 + 200) = v5 + 57;
          *(_BYTE *)(v5 + 56) = 0;
        }
        v6 = *(char **)(v5 + 192);
LABEL_17:
        v8 = *v6;
        *(_QWORD *)(v5 + 192) = (uint64)(uintptr_t)(v6 + 1);
        if ( v8 == -1 )
          break;
      }
    }
    v9 = *a1;
    v10 = *(char **)(*a1 + 192LL);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(*a1 + 200LL) )
    {
      if ( *(_DWORD *)(v9 + 48) )
      {
        sub_14016D910(*a1);
        v12 = *(char **)(v9 + 192);
        v13 = *v12;
        *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v12 + 1);
        *((_BYTE *)a1 + 18472) = v13;
      }
      else
      {
        *((_BYTE *)a1 + 18472) = 0;
      }
    }
    else
    {
      v11 = *v10;
      *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v10 + 1);
      *((_BYTE *)a1 + 18472) = v11;
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
                ((void (           *)(__int64))a1[2318])(*(v32 - 4) + v1 + 8 * v33 * *((_DWORD *)v32 - 11));
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014015FFC0) ----------------------------------------------------
char *           sub_14015FFC0(int **a1, int *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
{
  char *v10; // rsi
  int v11; // eax
  int *v12; // rcx
  int v13; // edx
  int v14; // eax
  int v15; // r9d
  char *v16; // rax
  int *v17; // rcx
  int *v18; // rcx
  __int64 v20; // rax
       char *v21; // rdx

  v10 = nullptr;
  if ( a5 > 4 )
  {
    v20 = sr_client_static_tls();
    v21 = "bad req_comp";
    goto LABEL_17;
  }
  if ( !(unsigned int)sub_140167D10((__int64)a1, 0, a5) )
  {
LABEL_14:
    free(a1[3]);
    v17 = a1[2];
    a1[3] = nullptr;
    free(v17);
    v18 = a1[1];
    a1[2] = nullptr;
    free(v18);
    a1[1] = nullptr;
    return v10;
  }
  v11 = *((_DWORD *)a1 + 8);
  if ( v11 <= 8 )
  {
    v11 = 8;
    goto LABEL_6;
  }
  if ( v11 != 16 )
  {
    v20 = sr_client_static_tls();
    v21 = "bad bits_per_channel";
LABEL_17:
    *(_QWORD *)(v20 + 16) = (uint64)(uintptr_t)(v21);
    return nullptr;
  }
LABEL_6:
  *a6 = v11;
  v10 = (char *)a1[3];
  a1[3] = nullptr;
  if ( !a5
    || (v12 = *a1, v13 = (*a1)[3], a5 == v13)
    || ((v14 = v12[1], v15 = *v12, *a6 != 8)
      ? (v16 = sub_14015DD00(v10, v13, a5, v15, v14))
      : (v16 = sub_14015D7E0(v10, v13, a5, v15, v14)),
        v10 = v16,
        (*a1)[3] = a5,
        v16) )
  {
    *a2 = **a1;
    *a3 = (*a1)[1];
    if ( a4 )
      *a4 = (*a1)[2];
    goto LABEL_14;
  }
  return nullptr;
}
