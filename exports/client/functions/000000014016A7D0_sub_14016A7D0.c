/* Address: 0x14016a7d0 | Name: sub_14016A7D0 | Size: 490 bytes */
__int64 __fastcall sub_14016A7D0(__int64 a1, char *a2, char *a3, int *a4)
{
  char *v4; // rax
  char *v5; // r14
  char *v7; // r15
  unsigned __int64 v8; // rcx
  int *v9; // rsi
  char v10; // di
  char *v11; // rax
  char v12; // cl
  char *v13; // rax
  int v14; // eax
  char *v15; // rax
  char v16; // cl
  char *v17; // rax
  char v19; // [rsp+40h] [rbp+8h] BYREF
  char v20; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(char **)(a1 + 208);
  v5 = &v20;
  *(_QWORD *)(a1 + 192) = v4;
  v7 = &v20;
  v8 = *(_QWORD *)(a1 + 216);
  v9 = (int *)&v20;
  if ( a2 )
    v5 = a2;
  if ( a3 )
    v7 = a3;
  *(_QWORD *)(a1 + 200) = v8;
  if ( a4 )
    v9 = a4;
  if ( (unsigned __int64)v4 >= v8 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v10 = 0;
      goto LABEL_13;
    }
    sub_14016D910(a1, a2);
    v4 = *(char **)(a1 + 192);
    v8 = *(_QWORD *)(a1 + 200);
  }
  v10 = *v4;
  v11 = v4 + 1;
  *(_QWORD *)(a1 + 192) = v11;
  if ( (unsigned __int64)v11 < v8 )
  {
    v12 = *v11;
    *(_QWORD *)(a1 + 192) = v11 + 1;
    goto LABEL_16;
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1, a2);
    v13 = *(char **)(a1 + 192);
    v12 = *v13;
    *(_QWORD *)(a1 + 192) = v13 + 1;
  }
  else
  {
    v12 = 0;
  }
LABEL_16:
  if ( v10 == 80 && (unsigned __int8)(v12 - 53) <= 1u )
  {
    v14 = 1;
    if ( v12 == 54 )
      v14 = 3;
    *v9 = v14;
    v15 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, 3);
        v17 = *(char **)(a1 + 192);
        v16 = *v17;
        *(_QWORD *)(a1 + 192) = v17 + 1;
      }
      else
      {
        v16 = 0;
      }
    }
    else
    {
      v16 = *v15;
      *(_QWORD *)(a1 + 192) = v15 + 1;
    }
    v19 = v16;
    sub_14016ABA0(a1, &v19);
    *(_DWORD *)v5 = sub_14016A6A0(a1, &v19);
    sub_14016ABA0(a1, &v19);
    *(_DWORD *)v7 = sub_14016A6A0(a1, &v19);
    sub_14016ABA0(a1, &v19);
    if ( (int)sub_14016A6A0(a1, &v19) <= 255 )
      return 1;
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "max value > 255";
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  }
  return 0;
}

