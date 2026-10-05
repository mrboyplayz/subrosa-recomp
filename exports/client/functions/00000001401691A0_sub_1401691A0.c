/* Address: 0x1401691a0 | Name: sub_1401691A0 | Size: 708 bytes */
__int64 __fastcall sub_1401691A0(__int64 a1, int *a2, int *a3, char *a4)
{
  __int64 v4; // r15
  int *v5; // rsi
  int *v6; // r14
  char *v7; // rax
  unsigned __int64 *v9; // rdi
  char v10; // r13
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  char *v17; // r12
  char *v18; // rcx
  char *v19; // rsi
  unsigned __int64 v20; // rax
  char v21; // r14
  char *v22; // rcx
  char v23; // bp
  unsigned __int64 v24; // rcx
  unsigned __int8 *v25; // rcx
  __int64 v27; // [rsp+0h] [rbp-A8h] BYREF
  char v28; // [rsp+20h] [rbp-88h] BYREF
  char *v29; // [rsp+28h] [rbp-80h]
  char v30; // [rsp+30h] [rbp-78h] BYREF
  __int64 v31; // [rsp+50h] [rbp-58h]

  v4 = 0;
  v5 = (int *)&v28;
  v6 = (int *)&v28;
  v7 = &v28;
  if ( a2 )
    v5 = a2;
  v9 = (unsigned __int64 *)(a1 + 192);
  v10 = 0;
  if ( a3 )
    v6 = a3;
  if ( a4 )
    v7 = a4;
  v29 = v7;
  if ( !(unsigned int)sub_140169470(a1, &unk_140272D00) )
    goto LABEL_8;
  if ( *(_QWORD *)(a1 + 16) && (v12 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v12 < 88) )
  {
    *v9 = *(_QWORD *)(a1 + 200);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(88 - v12));
  }
  else
  {
    *v9 += 88LL;
  }
  *v5 = sub_1401604F0(a1, v11);
  *v6 = sub_1401604F0(a1, v13);
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_16:
    if ( *v9 >= *(_QWORD *)(a1 + 200) )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_17:
  v15 = *v5;
  if ( !*v5 || (v14 = (unsigned int)(0x10000000 % v15), 0x10000000 / v15 >= *v6) )
  {
    if ( *(_QWORD *)(a1 + 16) && (v16 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v16 < 8) )
    {
      *v9 = *(_QWORD *)(a1 + 200);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(8 - v16));
    }
    else
    {
      *v9 += 8LL;
    }
    v17 = &v30;
    while ( 1 )
    {
      if ( v4 == 10 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v27 ^ v31);
      v18 = (char *)*v9;
      v19 = v17;
      v20 = *(_QWORD *)(a1 + 200);
      v17 += 3;
      ++v4;
      if ( *v9 >= v20 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v21 = 0;
          goto LABEL_32;
        }
        sub_14016D910(a1, v14);
        v21 = *(_BYTE *)*v9;
        v22 = (char *)(*v9 + 1);
        v20 = *(_QWORD *)(a1 + 200);
      }
      else
      {
        v21 = *v18;
        v22 = v18 + 1;
      }
      *v9 = (unsigned __int64)v22;
      if ( (unsigned __int64)v22 < v20 )
      {
        v23 = *v22;
        v24 = (unsigned __int64)(v22 + 1);
        goto LABEL_34;
      }
LABEL_32:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v23 = 0;
        goto LABEL_37;
      }
      sub_14016D910(a1, v14);
      v23 = *(_BYTE *)*v9;
      v24 = *v9 + 1;
      v20 = *(_QWORD *)(a1 + 200);
LABEL_34:
      *v9 = v24;
      if ( v24 < v20 )
      {
        v25 = (unsigned __int8 *)(v24 + 1);
        goto LABEL_39;
      }
LABEL_37:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v19[1] = 0;
        goto LABEL_42;
      }
      sub_14016D910(a1, v14);
      v20 = *(_QWORD *)(a1 + 200);
      v25 = (unsigned __int8 *)(*v9 + 1);
LABEL_39:
      *v9 = (unsigned __int64)v25;
      if ( (unsigned __int64)v25 < v20 )
      {
        v14 = *v25;
        *v9 = (unsigned __int64)(v25 + 1);
        goto LABEL_45;
      }
LABEL_42:
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, v14);
        v14 = *(unsigned __int8 *)(*v9)++;
      }
      else
      {
        LOBYTE(v14) = 0;
      }
LABEL_45:
      v10 |= v14;
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_49;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_52;
      }
      if ( *v9 >= *(_QWORD *)(a1 + 200) )
        goto LABEL_52;
LABEL_49:
      if ( v23 != 8 )
      {
LABEL_52:
        *v9 = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        return MEMORY[0x1401F8B20]((unsigned __int64)&v27 ^ v31);
      }
      if ( !v21 )
      {
        *(_DWORD *)v29 = ((v10 & 0x10) != 0) + 3;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v27 ^ v31);
      }
    }
  }
LABEL_8:
  *v9 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v27 ^ v31);
}

