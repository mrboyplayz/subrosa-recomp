/* Address: 0x14017a3c0 | Name: sub_14017A3C0 | Size: 299 bytes */
int __fastcall sub_14017A3C0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 v11; // dx
  __int16 v12; // ax
  unsigned __int8 *v13; // r8

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(int *)(a1 + 36);
  v6 = *(unsigned __int8 *)(v5 + v4 + 34);
  v7 = *(unsigned __int8 *)(v5 + v4 + 35);
  v8 = v7 + (*(unsigned __int8 *)(v5 + v4 + 34) << 8);
  if ( a2 >= v8 )
  {
    if ( a3 )
    {
      LODWORD(v5) = (__int16)((*(unsigned __int8 *)(v4 + *(int *)(a1 + 40) + 4 * (v7 + (v6 << 8)) - 4) << 8)
                            + *(unsigned __int8 *)(v4 + *(int *)(a1 + 40) + 4 * (v7 + (v6 << 8)) - 3));
      *a3 = v5;
    }
    if ( a4 )
    {
      v13 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 40) + 2 * (a2 - v8) + 4 * (v7 + (v6 << 8)));
      v11 = *v13;
      v12 = v13[1];
      goto LABEL_10;
    }
  }
  else
  {
    if ( a3 )
    {
      LODWORD(v5) = (__int16)((*(unsigned __int8 *)(4 * a2 + v4 + *(int *)(a1 + 40)) << 8)
                            + *(unsigned __int8 *)(4 * a2 + v4 + *(int *)(a1 + 40) + 1));
      *a3 = v5;
    }
    if ( a4 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = 4 * a2 + (__int64)*(int *)(a1 + 40);
      v11 = *(unsigned __int8 *)(v10 + v9 + 2);
      v12 = *(unsigned __int8 *)(v10 + v9 + 3);
LABEL_10:
      LODWORD(v5) = (__int16)((v11 << 8) + v12);
      *a4 = v5;
    }
  }
  return v5;
}

