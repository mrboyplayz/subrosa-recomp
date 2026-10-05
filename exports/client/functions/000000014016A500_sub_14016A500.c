/* Address: 0x14016a500 | Name: sub_14016A500 | Size: 357 bytes */
char *__fastcall sub_14016A500(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
{
  char *v6; // rdi
  char *v10; // rbp
  int v11; // eax
  _DWORD *v12; // rbx
  int v13; // edx
  int v14; // r9d
  char *v15; // rax
  int v17; // [rsp+20h] [rbp-58h]
  _QWORD v18[3]; // [rsp+30h] [rbp-48h] BYREF
  char *v19; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+50h] [rbp-28h]

  v6 = nullptr;
  v18[0] = a1;
  v10 = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad req_comp";
    return nullptr;
  }
  if ( !(unsigned int)sub_140167D10(v18, 0, a5) )
  {
    v6 = v19;
LABEL_18:
    free(v6);
    free((void *)v18[2]);
    free((void *)v18[1]);
    return v10;
  }
  v11 = v20;
  if ( v20 <= 8 )
  {
    v11 = 8;
    goto LABEL_6;
  }
  if ( v20 == 16 )
  {
LABEL_6:
    *a6 = v11;
    v10 = v19;
    v12 = (_DWORD *)v18[0];
    if ( !a5
      || (v13 = *(_DWORD *)(v18[0] + 12LL), a5 == v13)
      || ((v14 = *(_DWORD *)v18[0], v17 = *(_DWORD *)(v18[0] + 4LL), v11 != 8)
        ? (v15 = sub_14015DD00(v19, v13, a5, v14, v17))
        : (v15 = sub_14015D7E0(v19, v13, a5, v14, v17)),
          v12[3] = a5,
          (v10 = v15) != nullptr) )
    {
      *a2 = *v12;
      *a3 = v12[1];
      if ( a4 )
        *a4 = v12[2];
      goto LABEL_18;
    }
    return nullptr;
  }
  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad bits_per_channel";
  return nullptr;
}

