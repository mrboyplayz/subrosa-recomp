/* Address: 0x1400c5c00 | Name: sub_1400C5C00 | Size: 2424 bytes */
__int64 __fastcall sub_1400C5C00(signed int a1)
{
  __int64 v1; // r8
  __int64 v2; // r13
  unsigned int *v3; // rcx
  _BYTE *v4; // rdx
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  signed int v8; // edi
  int v9; // edx
  int v10; // r8d
  int v11; // ebx
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbp
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
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
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r14
  _BYTE *v53; // rbx
  unsigned __int8 v54; // al
  __int64 v55; // rcx
  __int64 v56; // r10
  __int64 v57; // r9
  char *v58; // rax
  const char *v59; // rcx
  __int64 v60; // r8
  char v61; // dl
  char v62; // dl
  __int64 v64; // [rsp+0h] [rbp-298h] BYREF
  int v65; // [rsp+20h] [rbp-278h]
  int v66; // [rsp+24h] [rbp-274h]
  unsigned int v67; // [rsp+28h] [rbp-270h]
  __int64 v68; // [rsp+30h] [rbp-268h]
  __int64 v69; // [rsp+38h] [rbp-260h]
  __int64 v70; // [rsp+40h] [rbp-258h]
  __int64 v71; // [rsp+48h] [rbp-250h]
  __int64 v72; // [rsp+50h] [rbp-248h]
  _BYTE v73[512]; // [rsp+60h] [rbp-238h] BYREF
  __int64 v74; // [rsp+260h] [rbp-38h]

  v1 = a1;
  v2 = 1760LL * a1;
  v67 = a1;
  v69 = a1;
  v71 = v2 * 4;
  v70 = (int)dword_140404A6C[v2 + 278847454];
  v3 = &dword_140404A6C[290 * v70 + 273377350];
  v4 = (_BYTE *)(v73 - (_BYTE *)v3);
  do
  {
    v5 = *(_BYTE *)v3;
    *((_BYTE *)v3 + (_QWORD)v4) = *(_BYTE *)v3;
    v3 = (unsigned int *)((char *)v3 + 1);
  }
  while ( v5 );
  v6 = -1;
  v68 = 110 * v1;
  v7 = 1760 * v1;
  v8 = 0;
  v72 = v7 * 4;
  v9 = 0;
  v66 = 0;
  v65 = 0;
  v10 = 0;
  LOBYTE(dword_140404A6C[v7 + 278847325]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847341]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847357]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847373]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847389]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847405]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847421]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847437]) = 0;
  dword_140404A6C[v2 + 278847584] = 0;
  do
    ++v6;
  while ( v73[v6] );
  v11 = 59;
  if ( (int)v6 < 59 )
    v11 = v6;
  v12 = v11;
  if ( v11 > 30LL )
  {
    do
    {
      if ( v73[v12] == 32 )
        break;
      --v11;
      --v12;
    }
    while ( v12 > 30 );
  }
  v13 = v6 - 1;
  v14 = (int)v6 - 1LL;
  v15 = 0;
  v16 = 0;
  do
  {
    if ( !v73[v15] )
      break;
    v17 = toupper((char)v73[v15]);
    v10 = v66;
    v18 = v2 * 4 + v16++;
    v9 = ++v65;
    *((_BYTE *)&dword_140404A6C[278847325] + v18) = v17;
    if ( v9 > v11 )
    {
      ++v10;
      v19 = v2 * 4 + v16;
      v66 = v10;
      v11 = 59;
      v2 += 16;
      v9 = 0;
      v16 = 0;
      v65 = 0;
      *((_BYTE *)&dword_140404A6C[278847325] + v19) = 0;
      v20 = 59;
      if ( v13 >= 59 || (v11 = v13, v20 = v14, v14 > 30) )
      {
        do
        {
          if ( v73[v15 + 1 + v20] == 32 )
            break;
          --v11;
          --v20;
        }
        while ( v20 > 30 );
      }
    }
    --v13;
    ++v15;
    --v14;
  }
  while ( v15 < 256 );
  v21 = 1760 * v69;
  v22 = v68;
  v23 = v71;
  *((_BYTE *)&dword_140404A6C[16 * (v68 + v10) + 278847325] + v9) = 0;
  v24 = 290 * v70;
  dword_140404A6C[v21 + 278847455] = dword_140404A6C[290 * v70 + 273377607];
  dword_140404A6C[v21 + 278847456] = dword_140404A6C[v24 + 273377608];
  dword_140404A6C[v21 + 278847457] = dword_140404A6C[v24 + 273377609];
  dword_140404A6C[v21 + 278847458] = dword_140404A6C[v24 + 273377610];
  dword_140404A6C[v21 + 278847459] = dword_140404A6C[v24 + 273377611];
  dword_140404A6C[v21 + 278847460] = dword_140404A6C[v24 + 273377612];
  dword_140404A6C[v21 + 278847461] = dword_140404A6C[v24 + 273377613];
  dword_140404A6C[v21 + 278847462] = dword_140404A6C[v24 + 273377614];
  dword_140404A6C[v21 + 278847463] = dword_140404A6C[v24 + 273377615];
  dword_140404A6C[v21 + 278847464] = dword_140404A6C[v24 + 273377616];
  dword_140404A6C[v21 + 278847465] = dword_140404A6C[v24 + 273377617];
  dword_140404A6C[v21 + 278847466] = dword_140404A6C[v24 + 273377618];
  dword_140404A6C[v21 + 278847467] = dword_140404A6C[v24 + 273377619];
  dword_140404A6C[v21 + 278847468] = dword_140404A6C[v24 + 273377620];
  dword_140404A6C[v21 + 278847469] = dword_140404A6C[v24 + 273377621];
  dword_140404A6C[v21 + 278847470] = dword_140404A6C[v24 + 273377622];
  dword_140404A6C[v21 + 278847471] = dword_140404A6C[v24 + 273377623];
  dword_140404A6C[v21 + 278847472] = dword_140404A6C[v24 + 273377624];
  dword_140404A6C[v21 + 278847473] = dword_140404A6C[v24 + 273377625];
  dword_140404A6C[v21 + 278847474] = dword_140404A6C[v24 + 273377626];
  dword_140404A6C[v21 + 278847475] = dword_140404A6C[v24 + 273377627];
  dword_140404A6C[v21 + 278847476] = dword_140404A6C[v24 + 273377628];
  dword_140404A6C[v21 + 278847477] = dword_140404A6C[v24 + 273377629];
  dword_140404A6C[v21 + 278847478] = dword_140404A6C[v24 + 273377630];
  dword_140404A6C[v21 + 278847479] = dword_140404A6C[v24 + 273377631];
  dword_140404A6C[v21 + 278847480] = dword_140404A6C[v24 + 273377632];
  *(unsigned int *)((char *)&dword_140404A6C[278847583] + v23) = -1;
  dword_140404A6C[v21 + 278847487 + (int)dword_140404A6C[v21 + 278847455]] = 0;
  v25 = v21 + (int)dword_140404A6C[v21 + 278847456];
  dword_140404A6C[v21 + 278847519] = 0;
  dword_140404A6C[v21 + 278847551] = -1;
  dword_140404A6C[v25 + 278847487] = 1;
  v26 = v21 + (int)dword_140404A6C[v21 + 278847457];
  dword_140404A6C[v21 + 278847520] = 0;
  dword_140404A6C[v21 + 278847552] = -1;
  dword_140404A6C[v26 + 278847487] = 2;
  v27 = v21 + (int)dword_140404A6C[v21 + 278847458];
  dword_140404A6C[v21 + 278847521] = 0;
  dword_140404A6C[v21 + 278847553] = -1;
  dword_140404A6C[v27 + 278847487] = 3;
  v28 = 8;
  v29 = v21 + (int)dword_140404A6C[v21 + 278847459];
  dword_140404A6C[v21 + 278847522] = 0;
  dword_140404A6C[v21 + 278847554] = -1;
  dword_140404A6C[v29 + 278847487] = 4;
  v30 = v21 + (int)dword_140404A6C[v21 + 278847460];
  dword_140404A6C[v21 + 278847523] = 0;
  dword_140404A6C[v21 + 278847555] = -1;
  dword_140404A6C[v30 + 278847487] = 5;
  v31 = v21 + (int)dword_140404A6C[v21 + 278847461];
  dword_140404A6C[v21 + 278847524] = 0;
  dword_140404A6C[v21 + 278847556] = -1;
  dword_140404A6C[v31 + 278847487] = 6;
  v32 = v21 + (int)dword_140404A6C[v21 + 278847462];
  dword_140404A6C[v21 + 278847525] = 0;
  dword_140404A6C[v21 + 278847557] = -1;
  dword_140404A6C[v32 + 278847487] = 7;
  v33 = v21 + (int)dword_140404A6C[v21 + 278847463];
  dword_140404A6C[v21 + 278847526] = 0;
  dword_140404A6C[v21 + 278847558] = -1;
  dword_140404A6C[v33 + 278847487] = 8;
  v34 = v21 + (int)dword_140404A6C[v21 + 278847464];
  dword_140404A6C[v21 + 278847527] = 0;
  dword_140404A6C[v21 + 278847559] = -1;
  dword_140404A6C[v34 + 278847487] = 9;
  v35 = v21 + (int)dword_140404A6C[v21 + 278847465];
  dword_140404A6C[v21 + 278847528] = 0;
  dword_140404A6C[v21 + 278847560] = -1;
  dword_140404A6C[v35 + 278847487] = 10;
  v36 = v21 + (int)dword_140404A6C[v21 + 278847466];
  dword_140404A6C[v21 + 278847529] = 0;
  dword_140404A6C[v21 + 278847561] = -1;
  dword_140404A6C[v36 + 278847487] = 11;
  v37 = v21 + (int)dword_140404A6C[v21 + 278847467];
  dword_140404A6C[v21 + 278847530] = 0;
  dword_140404A6C[v21 + 278847562] = -1;
  dword_140404A6C[v37 + 278847487] = 12;
  v38 = v21 + (int)dword_140404A6C[v21 + 278847468];
  dword_140404A6C[v21 + 278847531] = 0;
  dword_140404A6C[v21 + 278847563] = -1;
  dword_140404A6C[v38 + 278847487] = 13;
  v39 = v21 + (int)dword_140404A6C[v21 + 278847469];
  dword_140404A6C[v21 + 278847532] = 0;
  dword_140404A6C[v21 + 278847564] = -1;
  dword_140404A6C[v39 + 278847487] = 14;
  v40 = v21 + (int)dword_140404A6C[v21 + 278847470];
  dword_140404A6C[v21 + 278847533] = 0;
  dword_140404A6C[v21 + 278847565] = -1;
  dword_140404A6C[v40 + 278847487] = 15;
  v41 = v21 + (int)dword_140404A6C[v21 + 278847471];
  dword_140404A6C[v21 + 278847534] = 0;
  dword_140404A6C[v21 + 278847566] = -1;
  dword_140404A6C[v41 + 278847487] = 16;
  v42 = v21 + (int)dword_140404A6C[v21 + 278847472];
  dword_140404A6C[v21 + 278847535] = 0;
  dword_140404A6C[v21 + 278847567] = -1;
  dword_140404A6C[v42 + 278847487] = 17;
  v43 = v21 + (int)dword_140404A6C[v21 + 278847473];
  dword_140404A6C[v21 + 278847536] = 0;
  dword_140404A6C[v21 + 278847568] = -1;
  dword_140404A6C[v43 + 278847487] = 18;
  v44 = v21 + (int)dword_140404A6C[v21 + 278847474];
  dword_140404A6C[v21 + 278847537] = 0;
  dword_140404A6C[v21 + 278847569] = -1;
  dword_140404A6C[v44 + 278847487] = 19;
  v45 = v21 + (int)dword_140404A6C[v21 + 278847475];
  dword_140404A6C[v21 + 278847538] = 0;
  dword_140404A6C[v21 + 278847570] = -1;
  v46 = 0x140000000LL + v23 + 1119602656;
  dword_140404A6C[v45 + 278847487] = 20;
  v47 = v21 + (int)dword_140404A6C[v21 + 278847476];
  dword_140404A6C[v21 + 278847539] = 0;
  dword_140404A6C[v21 + 278847571] = -1;
  dword_140404A6C[v47 + 278847487] = 21;
  v48 = v21 + (int)dword_140404A6C[v21 + 278847477];
  dword_140404A6C[v21 + 278847540] = 0;
  dword_140404A6C[v21 + 278847572] = -1;
  dword_140404A6C[v48 + 278847487] = 22;
  v49 = v21 + (int)dword_140404A6C[v21 + 278847478];
  dword_140404A6C[v21 + 278847541] = 0;
  dword_140404A6C[v21 + 278847573] = -1;
  dword_140404A6C[v49 + 278847487] = 23;
  v50 = v21 + (int)dword_140404A6C[v21 + 278847479];
  dword_140404A6C[v21 + 278847542] = 0;
  dword_140404A6C[v21 + 278847574] = -1;
  dword_140404A6C[v50 + 278847487] = 24;
  v51 = v21 + (int)dword_140404A6C[v21 + 278847480];
  dword_140404A6C[v21 + 278847543] = 0;
  dword_140404A6C[v21 + 278847575] = -1;
  v52 = -v46;
  dword_140404A6C[v51 + 278847487] = 25;
  dword_140404A6C[v21 + 278847544] = 0;
  dword_140404A6C[v21 + 278847576] = -1;
  do
  {
    v53 = (_BYTE *)v46;
    do
    {
      if ( !*v53 )
        break;
      v54 = toupper((unsigned __int8)*v53);
      *v53 = v54;
      if ( (unsigned __int8)(v54 - 65) <= 0x19u )
      {
        v55 = v21 + (int)dword_140404A6C[v21 + 278847390 + v54];
        ++dword_140404A6C[v55 + 278847519];
      }
      ++v53;
    }
    while ( (__int64)&v53[v52] < 62 );
    v52 -= 64;
    v46 += 64;
    --v28;
  }
  while ( v28 );
  v56 = v72;
  v57 = 0;
  *(_QWORD *)((char *)&dword_140404A6C[278846111] + v23) = 0;
  do
  {
    if ( v57 )
    {
      LOBYTE(dword_140404A6C[16 * (v57 + v22) + 278846114]) = 0;
    }
    else
    {
      v58 = (char *)(0x140000000LL + v23 + 1119597812);
      v59 = "DECRYPTER     Ctrl-R RESET   Ctrl-P PRINT    Ctrl-X EXIT";
      v60 = 31;
      do
      {
        v61 = *v59;
        if ( *v59 )
          ++v59;
        else
          v61 = 32;
        *v58 = v61;
        v62 = *v59;
        v58[2048] = 31;
        if ( v62 )
          ++v59;
        else
          v62 = 32;
        v58[1] = v62;
        v58[2049] = 31;
        v58 += 2;
        --v60;
      }
      while ( v60 );
      *((_BYTE *)&dword_140404A6C[278846129] + v56 + 2) = 0;
    }
    ++v57;
  }
  while ( v57 < 24 );
  sub_1400C5750(v67);
  do
    sub_140050F90(v67, v8++);
  while ( v8 < 24 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v64 ^ v74);
}

