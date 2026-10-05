/* Address: 0x1402320f0 | Name: sub_1402320F0 | Size: 1065 bytes */
__int64 __fastcall sub_1402320F0(
        __crt_strtox *this,
        struct __crt_strtox::big_integer *a2,
        const struct __crt_strtox::big_integer *a3)
{
  unsigned int v5; // edi
  __int64 v6; // r10
  unsigned int v7; // eax
  unsigned __int64 v8; // r12
  int v9; // ebp
  unsigned int v10; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rtt
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r11
  _DWORD *v21; // rcx
  unsigned int v22; // r9d
  unsigned int v23; // ebp
  bool v24; // zf
  int v25; // eax
  int v26; // r11d
  char v27; // bl
  unsigned int v28; // eax
  unsigned int v29; // r9d
  unsigned int v30; // ebp
  int v31; // r14d
  __int64 v32; // r12
  unsigned __int64 v33; // rbx
  __int64 v34; // r13
  unsigned int v35; // edx
  __int64 v36; // r11
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  unsigned int v43; // r11d
  unsigned int *v44; // rbx
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  unsigned int v47; // r8d
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int64 v50; // rdx
  unsigned int v51; // r10d
  unsigned __int64 v52; // r8
  unsigned int *v53; // r11
  __int64 v54; // rax
  __int64 v55; // rcx
  char *v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rdx
  unsigned int i; // ecx
  __int64 v61; // rax
  char v62; // [rsp+20h] [rbp-238h]
  unsigned __int64 v63; // [rsp+28h] [rbp-230h]
  char v64; // [rsp+30h] [rbp-228h]
  unsigned __int64 v65; // [rsp+38h] [rbp-220h]
  _BYTE Source[468]; // [rsp+44h] [rbp-214h] BYREF
  unsigned int v67; // [rsp+260h] [rbp+8h]
  int v69; // [rsp+270h] [rbp+18h]
  unsigned int v70; // [rsp+278h] [rbp+20h]

  if ( !*(_DWORD *)this )
    return 0;
  v5 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
    return 0;
  v6 = (unsigned int)(*(_DWORD *)this - 1);
  v7 = v5 - 1;
  if ( v5 == 1 )
  {
    v8 = *((unsigned int *)a2 + 1);
    v9 = 0;
    if ( (_DWORD)v8 == 1 )
    {
      v10 = *((_DWORD *)this + 1);
      *(_DWORD *)this = 0;
      sub_140236F50((char *)this + 4, 460, Source, 0);
      return v10;
    }
    else if ( *(_DWORD *)this == 1 )
    {
      v12 = *((_DWORD *)this + 1);
      *(_DWORD *)this = 0;
      sub_140236F50((char *)this + 4, 460, Source, 0);
      *((_DWORD *)this + 1) = v12 % (unsigned int)v8;
      LOBYTE(v9) = v12 % (unsigned int)v8 != 0;
      *(_DWORD *)this = v9;
      return v12 / (unsigned int)v8;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      if ( *(_DWORD *)this )
      {
        do
        {
          v15 = *((unsigned int *)this + v6 + 1);
          v6 = (unsigned int)(v6 - 1);
          v16 = (v14 << 32) | v15;
          v14 = v16 % v8;
          v13 = (unsigned int)(v16 / v8) + (v13 << 32);
        }
        while ( (_DWORD)v6 != -1 );
      }
      *(_DWORD *)this = 0;
      sub_140236F50((char *)this + 4, 460, Source, 0);
      *(_QWORD *)((char *)this + 4) = v14;
      LOBYTE(v9) = HIDWORD(v14) != 0;
      *(_DWORD *)this = v9 + 1;
      return v13;
    }
  }
  if ( v7 > (unsigned int)v6 )
    return 0;
  v17 = (int)v6;
  v18 = v6 - v7;
  v19 = *(_DWORD *)this - 1;
  if ( (int)v6 < (__int64)(int)(v6 - v7) )
    goto LABEL_18;
  v20 = (struct __crt_strtox::big_integer *)((char *)a2 - 4 * v18) - this;
  v21 = (_DWORD *)((char *)this + 4 * (int)v6 + 4);
  while ( *(_DWORD *)((char *)v21 + v20) == *v21 )
  {
    --v19;
    --v17;
    --v21;
    if ( v17 < v18 )
      goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + v19 - v18 + 1) < *((_DWORD *)this + v19 + 1) )
LABEL_18:
    ++v18;
  if ( !v18 )
    return 0;
  v22 = *((_DWORD *)a2 + v5);
  v23 = *((_DWORD *)a2 + v5 - 1);
  v24 = !_BitScanReverse((unsigned int *)&v25, v22);
  v67 = v23;
  if ( v24 )
    v26 = 32;
  else
    v26 = 31 - v25;
  v27 = 32 - v26;
  v69 = v26;
  v62 = 32 - v26;
  if ( v26 )
  {
    v28 = v22 << v26;
    v29 = v23 >> v27;
    v30 = v23 << v26;
    v22 = v28 | v29;
    v67 = v30;
    if ( v5 > 2 )
      v67 = (*((_DWORD *)a2 + v5 - 2) >> v27) | v30;
  }
  v31 = v18 - 1;
  v32 = 0;
  if ( v18 - 1 >= 0 )
  {
    v33 = v22;
    v34 = v31 + v5;
    v65 = v22;
    v64 = 32 - v26;
    do
    {
      if ( (unsigned int)v34 > (unsigned int)v6 )
        v35 = 0;
      else
        v35 = *((_DWORD *)this + v34 + 1);
      v70 = v35;
      v36 = *((unsigned int *)this + (unsigned int)(v34 - 2) + 1);
      LODWORD(v63) = *((_DWORD *)this + (unsigned int)(v34 - 1) + 1);
      HIDWORD(v63) = v35;
      if ( v69 )
      {
        v37 = (v63 << v69) | ((unsigned __int64)(unsigned int)v36 >> v64);
        v36 = (unsigned int)((_DWORD)v36 << v69);
        if ( (unsigned int)v34 >= 3 )
          v36 = (*((_DWORD *)this + (unsigned int)(v34 - 3) + 1) >> v62) | (unsigned int)v36;
      }
      else
      {
        v37 = v63;
      }
      v38 = v37 / v33;
      v39 = (unsigned int)(v37 % v33);
      v40 = v38;
      if ( v38 > 0xFFFFFFFF )
      {
        v40 = 0xFFFFFFFFLL;
        v39 += v33 * (v38 - 0xFFFFFFFF);
      }
      if ( v39 <= 0xFFFFFFFF )
      {
        v41 = v40 * v67;
        do
        {
          if ( v41 <= (v36 | (v39 << 32)) )
            break;
          --v40;
          v41 -= v67;
          v39 += v33;
        }
        while ( v39 <= 0xFFFFFFFF );
      }
      if ( v40 )
      {
        v42 = 0;
        v43 = 0;
        if ( v5 )
        {
          v44 = (unsigned int *)((char *)a2 + 4);
          do
          {
            v45 = *v44++;
            v46 = v40 * v45 + v42;
            v47 = v46;
            v48 = v43 + v31;
            v49 = *((_DWORD *)this + v48 + 1);
            v50 = HIDWORD(v46);
            v42 = HIDWORD(v46) + 1;
            if ( v49 >= v47 )
              v42 = v50;
            ++v43;
            *((_DWORD *)this + v48 + 1) = v49 - v47;
          }
          while ( v43 < v5 );
          v33 = v65;
        }
        if ( v70 < v42 )
        {
          v51 = 0;
          if ( v5 )
          {
            v52 = 0;
            v53 = (unsigned int *)((char *)a2 + 4);
            do
            {
              v54 = v51 + v31;
              ++v51;
              v55 = *((unsigned int *)this + v54 + 1);
              v56 = (char *)this + 4 * v54;
              v57 = *v53++;
              v58 = v55 + v57 + v52;
              *((_DWORD *)v56 + 1) = v58;
              v52 = HIDWORD(v58);
            }
            while ( v51 < v5 );
          }
          LODWORD(v40) = v40 - 1;
        }
        LODWORD(v6) = v34 - 1;
      }
      v34 = (unsigned int)(v34 - 1);
      v32 = (unsigned int)v40 + (v32 << 32);
      --v31;
    }
    while ( v31 >= 0 );
  }
  LODWORD(v59) = v6 + 1;
  for ( i = v6 + 1; i < *(_DWORD *)this; *((_DWORD *)this + v61 + 1) = 0 )
    v61 = i++;
  *(_DWORD *)this = v59;
  if ( (_DWORD)v6 != -1 )
  {
    do
    {
      v59 = (unsigned int)(v59 - 1);
      if ( *((_DWORD *)this + v59 + 1) )
        break;
      *(_DWORD *)this = v59;
    }
    while ( (_DWORD)v59 );
  }
  return v32;
}

