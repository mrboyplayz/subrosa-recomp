/* Address: 0x140167230 | Name: sub_140167230 | Size: 2077 bytes */
__int64 __fastcall sub_140167230(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ecx
  bool v5; // zf
  int v6; // eax
  __int64 v7; // r12
  int v8; // r14d
  __int64 v9; // rsi
  int v10; // r15d
  int v11; // r13d
  int v12; // edi
  int v13; // ebp
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  __int64 v18; // rdx
  int v19; // r13d
  int v20; // r8d
  int *v21; // rax
  __int64 v22; // r12
  int v23; // r15d
  __int64 v24; // rbp
  int v25; // edi
  int v26; // r14d
  int v27; // esi
  int v28; // ecx
  int v29; // eax
  __int64 v30; // r14
  int v31; // esi
  __int64 v32; // r12
  int v33; // ebp
  int v34; // r15d
  int v35; // edi
  __int64 v36; // rdx
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // eax
  int v41; // r12d
  int v42; // r15d
  int v43; // r13d
  int *v44; // rax
  __int64 v45; // r14
  int v46; // ebp
  __int64 v47; // rsi
  int v48; // eax
  int v49; // edi
  int v50; // ecx
  int v51; // eax
  __int64 v52; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-C8h]
  int v54; // [rsp+44h] [rbp-C4h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  _OWORD v56[8]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-38h]

  *(_DWORD *)(a1 + 18392) = 0;
  *(_DWORD *)(a1 + 18296) = 0;
  *(_DWORD *)(a1 + 18200) = 0;
  *(_DWORD *)(a1 + 18104) = 0;
  v3 = *(_DWORD *)(a1 + 18536);
  *(_QWORD *)(a1 + 18464) = 0;
  *(_DWORD *)(a1 + 18476) = 0;
  *(_BYTE *)(a1 + 18472) = -1;
  v4 = 0x7FFFFFFF;
  if ( v3 )
    v4 = v3;
  *(_DWORD *)(a1 + 18500) = 0;
  v5 = *(_DWORD *)(a1 + 18480) == 0;
  v6 = *(_DWORD *)(a1 + 18516);
  *(_DWORD *)(a1 + 18540) = v4;
  if ( v5 )
  {
    if ( v6 == 1 )
    {
      v7 = *(int *)(a1 + 18520);
      v8 = 0;
      v9 = a1 + 96 * v7;
      v10 = (*(_DWORD *)(v9 + 18108) + 7) >> 3;
      v11 = (*(_DWORD *)(v9 + 18112) + 7) >> 3;
      if ( v11 > 0 )
      {
        while ( 1 )
        {
          v12 = 0;
          if ( v10 > 0 )
            break;
LABEL_17:
          if ( ++v8 >= v11 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
        }
        v13 = 0;
        while ( (unsigned int)sub_140164500(
                                a1,
                                v56,
                                1680LL * *(int *)(v9 + 18096) + a1 + 8,
                                1680LL * *(int *)(v9 + 18100) + a1 + 6728,
                                ((__int64)*(int *)(v9 + 18100) << 10) + a1 + 13960,
                                v7,
                                (_WORD *)(((__int64)*(int *)(v9 + 18092) << 7) + a1 + 13448)) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _OWORD *))(a1 + 18544))(
            v13 + *(_QWORD *)(v9 + 18128) + 8 * v8 * *(_DWORD *)(v9 + 18116),
            *(unsigned int *)(v9 + 18116),
            v56);
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1, v14);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
            *(_DWORD *)(a1 + 18392) = 0;
            v15 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            v16 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( v16 )
              v15 = v16;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = v15;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          ++v12;
          v13 += 8;
          if ( v12 >= v10 )
            goto LABEL_17;
        }
      }
    }
    else
    {
      v18 = 0;
      v53 = 0;
      if ( *(int *)(a1 + 18068) > 0 )
      {
        while ( 1 )
        {
          v19 = 0;
          if ( *(int *)(a1 + 18064) > 0 )
            break;
LABEL_38:
          v18 = (unsigned int)(v18 + 1);
          v53 = v18;
          if ( (int)v18 >= *(_DWORD *)(a1 + 18068) )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
        }
        while ( 1 )
        {
          v20 = 0;
          v54 = 0;
          if ( *(int *)(a1 + 18516) > 0 )
            break;
LABEL_30:
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1, v18);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
            *(_DWORD *)(a1 + 18392) = 0;
            v28 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            v29 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( v29 )
              v28 = v29;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = v28;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          v18 = v53;
          if ( ++v19 >= *(_DWORD *)(a1 + 18064) )
            goto LABEL_38;
        }
        v21 = (int *)(a1 + 18520);
        v55 = a1 + 18520;
        while ( 1 )
        {
          v22 = *v21;
          v23 = 0;
          v24 = a1 + 96 * v22;
          if ( *(int *)(v24 + 18088) > 0 )
            break;
LABEL_29:
          ++v20;
          v21 = (int *)(v55 + 4);
          v54 = v20;
          v55 += 4;
          if ( v20 >= *(_DWORD *)(a1 + 18516) )
            goto LABEL_30;
        }
        while ( 1 )
        {
          v25 = *(_DWORD *)(v24 + 18084);
          v26 = 0;
          if ( v25 > 0 )
            break;
LABEL_27:
          if ( ++v23 >= *(_DWORD *)(v24 + 18088) )
          {
            v20 = v54;
            goto LABEL_29;
          }
        }
        while ( 1 )
        {
          v27 = v23 + v18 * *(_DWORD *)(v24 + 18088);
          if ( !(unsigned int)sub_140164500(
                                a1,
                                v56,
                                1680LL * *(int *)(v24 + 18096) + a1 + 8,
                                1680LL * *(int *)(v24 + 18100) + a1 + 6728,
                                ((__int64)*(int *)(v24 + 18100) << 10) + a1 + 13960,
                                v22,
                                (_WORD *)(((__int64)*(int *)(v24 + 18092) << 7) + a1 + 13448)) )
            break;
          (*(void (__fastcall **)(__int64, _QWORD, _OWORD *))(a1 + 18544))(
            *(_QWORD *)(v24 + 18128) + 8 * *(_DWORD *)(v24 + 18116) * v27 + (__int64)(8 * (v26 + v19 * v25)),
            *(unsigned int *)(v24 + 18116),
            v56);
          v25 = *(_DWORD *)(v24 + 18084);
          ++v26;
          v18 = v53;
          if ( v26 >= v25 )
            goto LABEL_27;
        }
      }
    }
  }
  else if ( v6 == 1 )
  {
    v30 = *(int *)(a1 + 18520);
    v31 = 0;
    v32 = 96 * v30;
    v33 = (*(_DWORD *)(96 * v30 + a1 + 18108) + 7) >> 3;
    v34 = (*(_DWORD *)(96 * v30 + a1 + 18112) + 7) >> 3;
    if ( v34 > 0 )
    {
      while ( 1 )
      {
        v35 = 0;
        if ( v33 > 0 )
          break;
LABEL_55:
        if ( ++v31 >= v34 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
      }
      while ( 1 )
      {
        v36 = *(_QWORD *)(v32 + a1 + 18160) + 2LL * ((v35 + v31 * *(_DWORD *)(v32 + a1 + 18168)) << 6);
        if ( !(*(_DWORD *)(a1 + 18484)
             ? sub_140164A80(
                 a1,
                 v36,
                 1680LL * *(int *)(a1 + v32 + 18100) + a1 + 6728,
                 ((__int64)*(int *)(a1 + v32 + 18100) << 10) + a1 + 13960)
             : (unsigned int)sub_140165200(a1, v36, 1680LL * *(int *)(a1 + v32 + 18096) + a1 + 8, v30)) )
          break;
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1, v38);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
          *(_DWORD *)(a1 + 18392) = 0;
          v39 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          v40 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( v40 )
            v39 = v40;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = v39;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++v35 >= v33 )
          goto LABEL_55;
      }
    }
  }
  else
  {
    v41 = 0;
    if ( *(int *)(a1 + 18068) > 0 )
    {
      while ( 1 )
      {
        v42 = 0;
        if ( *(int *)(a1 + 18064) > 0 )
          break;
LABEL_75:
        if ( ++v41 >= *(_DWORD *)(a1 + 18068) )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
      }
      while ( 1 )
      {
        v43 = 0;
        if ( *(int *)(a1 + 18516) > 0 )
          break;
LABEL_67:
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1, a2);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
          *(_DWORD *)(a1 + 18392) = 0;
          v50 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          v51 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( v51 )
            v50 = v51;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = v50;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++v42 >= *(_DWORD *)(a1 + 18064) )
          goto LABEL_75;
      }
      v44 = (int *)(a1 + 18520);
      v55 = a1 + 18520;
      while ( 1 )
      {
        v45 = *v44;
        v46 = 0;
        v47 = a1 + 96 * v45;
        if ( *(int *)(v47 + 18088) > 0 )
          break;
LABEL_66:
        ++v43;
        v44 = (int *)(v55 + 4);
        v55 += 4;
        if ( v43 >= *(_DWORD *)(a1 + 18516) )
          goto LABEL_67;
      }
      while ( 1 )
      {
        v48 = *(_DWORD *)(v47 + 18084);
        v49 = 0;
        if ( v48 > 0 )
          break;
LABEL_65:
        if ( ++v46 >= *(_DWORD *)(v47 + 18088) )
          goto LABEL_66;
      }
      while ( (unsigned int)sub_140165200(
                              a1,
                              *(_QWORD *)(v47 + 18160)
                            + 2LL
                            * ((v49 + *(_DWORD *)(v47 + 18168) * (v46 + *(_DWORD *)(v47 + 18088) * v41) + v42 * v48) << 6),
                              1680LL * *(int *)(v47 + 18096) + a1 + 8,
                              v45) )
      {
        v48 = *(_DWORD *)(v47 + 18084);
        if ( ++v49 >= v48 )
          goto LABEL_65;
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v57);
}

