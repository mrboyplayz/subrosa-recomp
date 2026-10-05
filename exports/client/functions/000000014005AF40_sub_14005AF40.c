/* Address: 0x14005af40 | Name: sub_14005AF40 | Size: 2288 bytes */
void __fastcall sub_14005AF40(__int64 a1, int a2, unsigned int *a3)
{
  int v5; // edi
  int v6; // ebx
  int v7; // r14d
  int *v8; // rdi
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  int v13; // ebx
  const char *v14; // rax
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
  unsigned int v27; // eax
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
  unsigned int *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  unsigned int v47; // eax
  int v48; // r8d
  __int64 v49; // rsi
  char *v50; // rbx
  int v51; // edi
  const char *v52; // rax
  int v53; // r9d
  __int64 v54; // r12
  unsigned int *v55; // rax
  int v56; // r8d
  char *v57; // rbx
  __int64 v59; // rcx
  float v60; // xmm1_4
  unsigned int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // [rsp+8h] [rbp-100h] BYREF
  __int64 v64; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-B0h]
  __int64 v67; // [rsp+60h] [rbp-A8h]
  signed int v68; // [rsp+68h] [rbp-A0h]
  int v69; // [rsp+6Ch] [rbp-9Ch]
  const char *v70; // [rsp+70h] [rbp-98h]
  unsigned int *v71; // [rsp+78h] [rbp-90h]
  int v72; // [rsp+80h] [rbp-88h]
  int v73; // [rsp+88h] [rbp-80h]
  int v74; // [rsp+8Ch] [rbp-7Ch]
  _OWORD v75[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v76; // [rsp+C8h] [rbp-40h]
  _DWORD v77[10]; // [rsp+D0h] [rbp-38h] BYREF
  char v78[1024]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v79; // [rsp+4F8h] [rbp+3F0h]

  if ( a2 < 2 )
    return;
  v71 = a3;
  v69 = a2;
  v5 = ((rand() & 1) == 0) + 1;
  v6 = v5;
  if ( a2 > 3 && (rand() & 1) == 0 )
    v6 = v5 + 1;
  v7 = a2 - 1;
  v8 = v77;
  if ( v6 <= a2 - 1 )
    v7 = v6;
  v9 = dword_140404A6C[179992853] + 522000;
  if ( (signed int)(dword_140404A6C[179992853] + 522000) > 3870000 )
    v9 = 3870000;
  v68 = v9;
  v10 = 0;
  v11 = dword_140404A6C[487148678] + 19;
  v12 = dword_140404A6C[487148678] + 1;
  LODWORD(v64) = dword_140404A6C[487148678] + 19;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v12 = 0;
  dword_140404A6C[487148678] = v12;
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
  v14 = (const char *)((char *)a3 - (char *)v77);
  v15 = v7;
  v70 = (const char *)((char *)a3 - (char *)v77);
  v16 = 0;
  v67 = v7;
  v17 = 0;
  do
  {
    v75[0] = xmmword_140278D30;
    v76 = 1065353216;
    v18 = &v77[v16];
    v19 = *(int *)&v14[(_QWORD)v18];
    v75[1] = xmmword_140278D30;
    v20 = *(float *)&dword_140404A6C[5873 * v19 + 283831498];
    v21 = *(float *)&dword_140404A6C[5873 * v19 + 283831499];
    v22 = *(float *)&dword_140404A6C[5873 * v19 + 283831500];
    sub_14007B2A0(v75, (char *)v75 + 12);
    v23 = v20 - (float)(*(float *)v75 * 1.5);
    *(float *)&v65 = v23;
    v24 = v21 - (float)(*((float *)v75 + 1) * 1.5);
    *((float *)&v65 + 1) = v24;
    v25 = v22 - (float)(*((float *)v75 + 2) * 1.5);
    *(float *)&v66 = v25;
    if ( !v17 )
    {
      v26 = v64;
      v27 = sub_140054130(v64, (unsigned int *)&v65, nullptr, (unsigned int *)v75);
      v28 = *(float *)v75 * 0.75;
      dword_140404A6C[487148744] = v27;
      v29 = *((float *)v75 + 1) * 0.75;
      *(&v73 + v16) = 0;
      *(float *)&v65 = v28 + v23;
      *((float *)&v65 + 1) = v29 + v24;
      *(float *)&v66 = (float)(*((float *)v75 + 2) * 0.75) + v25;
      goto LABEL_52;
    }
    *(&v73 + v16) = 0;
    if ( v16 <= v15 )
    {
      v30 = *v18 - 500;
      *(&v73 + v16) = v30;
      if ( v30 >= 5000 )
      {
        if ( (rand() & 1) != 0 )
        {
LABEL_33:
          if ( (rand() & 1) != 0 )
            goto LABEL_36;
          v30 -= 1000;
          *(&v73 + v16) = v30;
LABEL_35:
          if ( v30 < 1000 )
          {
LABEL_40:
            if ( v30 > 0 )
            {
              do
              {
                v31 = sub_140054130(16, (unsigned int *)&v65, nullptr, (unsigned int *)v75);
                if ( v31 != -1 )
                {
                  v32 = 4;
                  do
                  {
                    if ( v30 > 0 )
                    {
                      v33 = (int)sub_140054130(18, (unsigned int *)&v65, nullptr, (unsigned int *)v75);
                      v30 -= 100;
                      v34 = 1760 * v33;
                      dword_140404A6C[v34 + 278846062] = 0;
                      for ( dword_140404A6C[v34 + 278846063] = 5; v30 > 0; v30 -= 100 )
                      {
                        if ( !(unsigned int)sub_1400C3AB0((unsigned int)v33, 0, 5) )
                          break;
                      }
                      sub_1400E35D0(v31, (unsigned int)v33, 0xFFFFFFFFLL, 0);
                    }
                    --v32;
                  }
                  while ( v32 );
                }
                v23 = v23 + (float)(*(float *)v75 * 0.75);
                v24 = v24 + (float)(*((float *)v75 + 1) * 0.75);
                v65 = __PAIR64__(LODWORD(v24), LODWORD(v23));
                v25 = v25 + (float)(*((float *)v75 + 2) * 0.75);
                *(float *)&v66 = v25;
              }
              while ( v30 > 0 );
              v15 = v67;
            }
            goto LABEL_51;
          }
LABEL_36:
          if ( (rand() & 1) != 0 || (*(&v73 + v16) = v30 - 500, v30 -= 500, v30 >= 1000) )
          {
            if ( (rand() & 3) == 0 )
            {
              v30 -= 500;
              *(&v73 + v16) = v30;
            }
          }
          goto LABEL_40;
        }
        v30 -= 2000;
        *(&v73 + v16) = v30;
      }
      if ( v30 < 3000 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_51:
    v26 = v64;
LABEL_52:
    v14 = v70;
    ++v17;
    ++v16;
  }
  while ( v17 < v69 );
  v35 = v74;
  v73 = v74;
  if ( v74 < 5000 )
    goto LABEL_56;
  if ( (rand() & 1) != 0 )
    goto LABEL_57;
  v35 -= 2000;
  v73 = v35;
LABEL_56:
  if ( v35 >= 3000 )
  {
LABEL_57:
    if ( (rand() & 1) == 0 )
    {
      v35 -= 1000;
      v73 = v35;
      goto LABEL_59;
    }
LABEL_60:
    if ( (rand() & 3) == 3 || (v35 -= 500, v73 = v35, v35 >= 1000) )
    {
      if ( (rand() & 1) == 0 )
        v73 = v35 - 500;
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
  v70 = (const char *)&dword_140404A6C[1268 * v26 + 278521297];
  LODWORD(v64) = v68 / 3600;
  v38 = (char *)v71 - (char *)v77;
  v65 = (char *)v71 - (char *)v77;
  do
  {
    v39 = 0;
    v40 = &v77[v36];
    v41 = 0;
    v42 = *(int *)((char *)v40 + v38);
    v72 = v42;
    v43 = v42;
    v44 = &dword_140404A6C[5873 * v42 + 283831867];
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
    MEMORY[0x1401FCD30]((char *)&dword_140404A6C[283831588] + v46, 0, 1116);
    v47 = dword_140404A6C[487148677];
    v48 = v39 + 1;
    v49 = v45 + 1116 * v41;
    v50 = (char *)&dword_140404A6C[283831611] + v46;
    v51 = *v40;
    *(unsigned int *)((char *)&dword_140404A6C[283831588] + v49) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[283831590] + v49) = v47;
    if ( v37 )
    {
      v54 = v67;
      v55 = v71;
      if ( v36 > v67 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 4;
        sub_140158AB0(
          v50,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Acquire the disk by any means neccessary.\n"
          "\n"
          "%s value:               $%d Bonus",
          v48,
          off_1402B2890[*v55],
          v70,
          v51);
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 3;
        sub_140158AB0(
          v50,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Negotiate the best terms and execute the deal.\n"
          "You have been provided with $%d.\n"
          "\n"
          "%s value:               $%d Bonus",
          v48,
          off_1402B2890[*v55],
          *(&v73 + v36),
          v70,
          v51);
      }
    }
    else
    {
      v52 = v70;
      v53 = *(&v73 + v36);
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 2;
      sub_140158AB0(
        v50,
        "Transaction(%d):\n"
        "We have acquired a disk that has information that can be\n"
        "traded for money with another corporation.\n"
        "The corporation expects at least $%d from this deal.\n"
        "\n"
        "%s value:               $%d Bonus",
        v48,
        v53,
        v52,
        v51);
      v54 = v67;
    }
    v56 = (int)v64 / 60 % -12;
    if ( !v56 )
      v56 = 12;
    sub_140158AB0(v78, "\nThis mission expires at %d:%d%d\n\n", v56, (int)v64 % 60 / 10 % 6, (int)v64 % 60 % 10);
    v57 = v50 - 1;
    while ( *++v57 != 0 )
      ;
    strcpy(v57, v78);
    sub_140051BD0(v72, v39);
    v59 = 1760LL * (int)dword_140404A6C[487148744];
    *(unsigned int *)((char *)&dword_140404A6C[283831592] + v49) = dword_140404A6C[487148744];
    *(unsigned int *)((char *)&dword_140404A6C[283831606] + v49) = -1;
    *(unsigned int *)((char *)&dword_140404A6C[283831603] + v49) = dword_140404A6C[v59 + 278845898];
    if ( v37 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v49) = v51;
      v60 = (float)v51 * -0.0000125;
      *(float *)((char *)&dword_140404A6C[283831609] + v49) = (float)v51 * 0.000024999999;
    }
    else
    {
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v49) = 0;
      v60 = 0.0;
      *(unsigned int *)((char *)&dword_140404A6C[283831609] + v49) = 0;
    }
    v61 = v68;
    *(float *)((char *)&dword_140404A6C[283831610] + v49) = v60;
    ++v37;
    *(unsigned int *)((char *)&dword_140404A6C[283831605] + v49) = v61;
    v67 = v54;
    *(unsigned int *)((char *)&dword_140404A6C[283831595] + v49) = *v71;
    v62 = *(&v73 + v36++);
    *(unsigned int *)((char *)&dword_140404A6C[283831607] + v49) = v62;
    v38 = v65;
  }
  while ( v37 < v69 );
  ++dword_140404A6C[487148677];
  MEMORY[0x1401F8B20]((unsigned __int64)&v63 ^ v79);
}

