/* Address: 0x1402366a0 | Name: sub_1402366A0 | Size: 150 bytes */
char __fastcall sub_1402366A0(_QWORD *a1, __int64 a2, __int64 a3, _WORD **a4, _QWORD *a5, __int16 a6)
{
  __int64 v6; // rdi
  char *v9; // rax
  char v10; // cl
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int16 v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = (unsigned __int8)a6;
  HIBYTE(a6) = 0;
  if ( (sub_140256DC0()[v6] & 0x8000u) != 0 )
  {
    v9 = (char *)a1[3];
    if ( v9 == (char *)a1[2] )
    {
      v10 = -1;
    }
    else
    {
      v10 = *v9;
      a1[3] = v9 + 1;
    }
    HIBYTE(a6) = v10;
  }
  v11 = a1[15];
  v14 = 63;
  mbtowc_l((#115 *)&v14, (#49 *)&a6, (char *)*(int *)(*(_QWORD *)v11 + 8LL));
  **a4 = (char)v6;
  v12 = a5;
  ++*a4;
  --*v12;
  return 1;
}

