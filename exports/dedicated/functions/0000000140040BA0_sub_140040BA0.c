/* Address: 0x140040ba0 | Name: sub_140040BA0 | Size: 2320 bytes */
void __fastcall sub_140040BA0(__int64 a1, int a2, char *a3)
{
  int v5; // edi
  int v6; // ebx
  int v7; // r14d
  int *v8; // rdi
  int v9; // eax
  int v10; // esi
  int v11; // r15d
  int v12; // ecx
  int v13; // ebx
  int *v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  int v17; // r12d
  _DWORD *v18; // rbx
  __int64 v19; // rax
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm8_4
  int v26; // edi
  int v27; // eax
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // ebx
  unsigned int v31; // r14d
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // r15
  int v37; // r13d
  unsigned __int64 v38; // rax
  int v39; // r14d
  int *v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rsi
  char *v49; // rbx
  int v50; // edi
  __int64 v51; // r12
  char *v52; // rbx
  __int64 v54; // rcx
  float v55; // xmm1_4
  int v56; // eax
  int v57; // eax
  int v58; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-B0h]
  __int64 v61; // [rsp+60h] [rbp-A8h]
  int v62; // [rsp+68h] [rbp-A0h]
  int v63; // [rsp+6Ch] [rbp-9Ch]
  int *v64; // [rsp+70h] [rbp-98h]
  char *v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+80h] [rbp-88h]
  int v67; // [rsp+88h] [rbp-80h]
  int v68; // [rsp+8Ch] [rbp-7Ch]
  _OWORD v69[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v70; // [rsp+C8h] [rbp-40h]
  _DWORD v71[10]; // [rsp+D0h] [rbp-38h] BYREF
  char Buffer[1024]; // [rsp+F8h] [rbp-10h] BYREF

  if ( a2 < 2 )
    return;
  v65 = a3;
  v63 = a2;
  v5 = ((rand() & 1) == 0) + 1;
  v6 = v5;
  if ( a2 > 3 && (rand() & 1) == 0 )
    v6 = v5 + 1;
  v7 = a2 - 1;
  v8 = v71;
  if ( v6 <= a2 - 1 )
    v7 = v6;
  v9 = dword_178C5B8E0 + 522000;
  if ( dword_178C5B8E0 + 522000 > 3870000 )
    v9 = 3870000;
  v62 = v9;
  v10 = 0;
  v11 = dword_163D94A44 + 19;
  v12 = dword_163D94A44 + 1;
  v58 = dword_163D94A44 + 19;
  if ( dword_163D94A44 + 20 > 24 )
    v12 = 0;
  dword_163D94A44 = v12;
  do
  {
    if ( v10 )
    {
      v13 = 2000;
      *v8 = 2000;
      if ( (rand() & 1) == 0 )
      {
        v13 = 2500;
        *v8 = 2500;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( v11 == 23 )
        *v8 = 5 * v13;
    }
    else
    {
      *v8 = 0;
    }
    ++v10;
    ++v8;
  }
  while ( v10 < a2 );
  v14 = (int *)(a3 - (char *)v71);
  v15 = v7;
  v64 = (int *)(a3 - (char *)v71);
  v16 = 0;
  v61 = v7;
  v17 = 0;
  do
  {
    v69[0] = xmmword_1400F78B0;
    v70 = 1065353216;
    v18 = &v71[v16];
    v19 = *(int *)((char *)v14 + (_QWORD)v18);
    v69[1] = xmmword_1400F78B0;
    v20 = *((float *)&unk_191541474 + 5873 * v19);
    v21 = *((float *)&unk_191541478 + 5873 * v19);
    v22 = *((float *)&unk_19154147C + 5873 * v19);
    sub_140049C20(v69, (char *)v69 + 12);
    v23 = v20 - (float)(*(float *)v69 * 1.5);
    *(float *)&v59 = v23;
    v24 = v21 - (float)(*((float *)v69 + 1) * 1.5);
    *((float *)&v59 + 1) = v24;
    v25 = v22 - (float)(*((float *)v69 + 2) * 1.5);
    *(float *)&v60 = v25;
    if ( !v17 )
    {
      v26 = v58;
      v27 = sub_14003B080(v58, (int *)&v59, nullptr, (int *)v69);
      v28 = *(float *)v69 * 0.75;
      dword_163D94B4C[0] = v27;
      v29 = *((float *)v69 + 1) * 0.75;
      *(&v67 + v16) = 0;
      *(float *)&v59 = v28 + v23;
      *((float *)&v59 + 1) = v29 + v24;
      *(float *)&v60 = (float)(*((float *)v69 + 2) * 0.75) + v25;
      goto LABEL_52;
    }
    *(&v67 + v16) = 0;
    if ( v16 <= v15 )
    {
      v30 = *v18 - 500;
      *(&v67 + v16) = v30;
      if ( v30 >= 5000 )
      {
        if ( (rand() & 1) != 0 )
        {
LABEL_33:
          if ( (rand() & 1) != 0 )
            goto LABEL_36;
          v30 -= 1000;
          *(&v67 + v16) = v30;
LABEL_35:
          if ( v30 < 1000 )
          {
LABEL_40:
            if ( v30 > 0 )
            {
              do
              {
                v31 = sub_14003B080(16, (int *)&v59, nullptr, (int *)v69);
                if ( v31 != -1 )
                {
                  v32 = 4;
                  do
                  {
                    if ( v30 > 0 )
                    {
                      v33 = (int)sub_14003B080(18, (int *)&v59, nullptr, (int *)v69);
                      v30 -= 100;
                      v34 = 7040 * v33;
                      *(_DWORD *)((char *)&unk_19025F364 + v34) = 0;
                      for ( *(_DWORD *)((char *)&unk_19025F368 + v34) = 5; v30 > 0; v30 -= 100 )
                      {
                        if ( !(unsigned int)sub_14006CDD0((unsigned int)v33, 0, 5) )
                          break;
                      }
                      sub_140089E50(v31, (unsigned int)v33, 0xFFFFFFFFLL, 0);
                    }
                    --v32;
                  }
                  while ( v32 );
                }
                v23 = v23 + (float)(*(float *)v69 * 0.75);
                v24 = v24 + (float)(*((float *)v69 + 1) * 0.75);
                v59 = __PAIR64__(LODWORD(v24), LODWORD(v23));
                v25 = v25 + (float)(*((float *)v69 + 2) * 0.75);
                *(float *)&v60 = v25;
              }
              while ( v30 > 0 );
              v15 = v61;
            }
            goto LABEL_51;
          }
LABEL_36:
          if ( (rand() & 1) != 0 || (*(&v67 + v16) = v30 - 500, v30 -= 500, v30 >= 1000) )
          {
            if ( (rand() & 3) == 0 )
            {
              v30 -= 500;
              *(&v67 + v16) = v30;
            }
          }
          goto LABEL_40;
        }
        v30 -= 2000;
        *(&v67 + v16) = v30;
      }
      if ( v30 < 3000 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_51:
    v26 = v58;
LABEL_52:
    v14 = v64;
    ++v17;
    ++v16;
  }
  while ( v17 < v63 );
  v35 = v68;
  v67 = v68;
  if ( v68 < 5000 )
    goto LABEL_56;
  if ( (rand() & 1) != 0 )
    goto LABEL_57;
  v35 -= 2000;
  v67 = v35;
LABEL_56:
  if ( v35 >= 3000 )
  {
LABEL_57:
    if ( (rand() & 1) == 0 )
    {
      v35 -= 1000;
      v67 = v35;
      goto LABEL_59;
    }
LABEL_60:
    if ( (rand() & 3) == 3 || (v35 -= 500, v67 = v35, v35 >= 1000) )
    {
      if ( (rand() & 1) == 0 )
        v67 = v35 - 500;
    }
  }
  else
  {
LABEL_59:
    if ( v35 >= 1000 )
      goto LABEL_60;
  }
  v36 = 0;
  v37 = 0;
  v64 = &dword_1901220F0[1268 * v26];
  v38 = v65 - (char *)v71;
  v59 = v65 - (char *)v71;
  do
  {
    v39 = 0;
    v40 = &v71[v36];
    v41 = 0;
    v42 = *(int *)((char *)v40 + v38);
    v66 = v42;
    v43 = v42;
    v44 = (_DWORD *)((char *)&unk_191541A38 + 23492 * v42);
    while ( *(v44 - 279) )
    {
      if ( !*v44 )
      {
        ++v41;
        ++v39;
        break;
      }
      if ( !v44[279] )
      {
        v41 += 2;
        v39 += 2;
        break;
      }
      if ( !v44[558] )
      {
        v41 += 3;
        v39 += 3;
        break;
      }
      v41 += 4;
      v44 += 1116;
      v39 += 4;
      if ( v41 >= 16 )
        break;
    }
    v45 = 23492 * v43;
    v46 = 23492 * v43 + 1116LL * v39;
    memset((char *)&unk_1915415DC + v46, 0, 0x45Cu);
    v47 = dword_163D94A40;
    v48 = v45 + 1116 * v41;
    v49 = &byte_191541638[v46];
    v50 = *v40;
    *(_DWORD *)((char *)&unk_1915415DC + v48) = 1;
    *(_DWORD *)((char *)&unk_1915415E4 + v48) = v47;
    if ( v37 )
    {
      v51 = v61;
      if ( v36 > v61 )
      {
        *(_DWORD *)((char *)&unk_1915415E8 + v48) = 4;
        sub_1400DBB30(
          v49,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Acquire the disk by any means neccessary.\n"
          "\n"
          "%s value:               $%d Bonus");
      }
      else
      {
        *(_DWORD *)((char *)&unk_1915415E8 + v48) = 3;
        sub_1400DBB30(
          v49,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Negotiate the best terms and execute the deal.\n"
          "You have been provided with $%d.\n"
          "\n"
          "%s value:               $%d Bonus");
      }
    }
    else
    {
      *(_DWORD *)((char *)&unk_1915415E8 + v48) = 2;
      sub_1400DBB30(
        v49,
        "Transaction(%d):\n"
        "We have acquired a disk that has information that can be\n"
        "traded for money with another corporation.\n"
        "The corporation expects at least $%d from this deal.\n"
        "\n"
        "%s value:               $%d Bonus");
      v51 = v61;
    }
    sub_1400DBB30(Buffer, "\nThis mission expires at %d:%d%d\n\n");
    v52 = v49 - 1;
    while ( *++v52 != 0 )
      ;
    strcpy(v52, Buffer);
    sub_14003A1E0(v66, v39);
    v54 = 1760LL * dword_163D94B4C[0];
    *(int *)((char *)&dword_1915415EC + v48) = dword_163D94B4C[0];
    *(_DWORD *)((char *)&unk_191541624 + v48) = -1;
    *(_DWORD *)((char *)&unk_191541618 + v48) = dword_19025F0D4[v54];
    if ( v37 )
    {
      *(_DWORD *)((char *)&unk_19154161C + v48) = v50;
      v55 = (float)v50 * -0.0000125;
      *(float *)((char *)&unk_191541630 + v48) = (float)v50 * 0.000024999999;
    }
    else
    {
      *(_DWORD *)((char *)&unk_19154161C + v48) = 0;
      v55 = 0.0;
      *(_DWORD *)((char *)&unk_191541630 + v48) = 0;
    }
    v56 = v62;
    *(float *)((char *)&unk_191541634 + v48) = v55;
    ++v37;
    *(_DWORD *)((char *)&unk_191541620 + v48) = v56;
    v61 = v51;
    *(_DWORD *)((char *)&unk_1915415F8 + v48) = *(_DWORD *)v65;
    v57 = *(&v67 + v36++);
    *(_DWORD *)((char *)&unk_191541628 + v48) = v57;
    v38 = v59;
  }
  while ( v37 < v63 );
  ++dword_163D94A40;
}

