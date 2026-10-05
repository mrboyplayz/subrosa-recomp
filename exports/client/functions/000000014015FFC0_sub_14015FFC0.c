/* Address: 0x14015ffc0 | Name: sub_14015FFC0 | Size: 356 bytes */
char *__fastcall sub_14015FFC0(int **a1, int *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
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
  const char *v21; // rdx

  v10 = nullptr;
  if ( a5 > 4 )
  {
    v20 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v21 = "bad req_comp";
    goto LABEL_17;
  }
  if ( !(unsigned int)sub_140167D10(a1, 0, a5) )
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
    v20 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v21 = "bad bits_per_channel";
LABEL_17:
    *(_QWORD *)(v20 + 16) = v21;
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

