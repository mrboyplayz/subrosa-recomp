/* Address: 0x1400f50d0 | Name: sub_1400F50D0 | Size: 456 bytes */
__int64 __fastcall sub_1400F50D0(int a1, int a2, int a3, int a4)
{
  int v8; // r8d
  __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // r9
  __int64 v12; // kr00_8
  unsigned int *v13; // rax
  const char *v14; // rdx
  __int64 v16; // [rsp+0h] [rbp-258h] BYREF
  _BYTE v17[512]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v18; // [rsp+220h] [rbp-38h]

  v8 = a2 + 1;
  v9 = 1116LL * a2 + 23492LL * a1;
  if ( *(unsigned int *)((char *)&dword_140404A6C[283831591] + v9) <= 1 )
  {
    sub_140158AB0(v17, "Acquisition(%d)", v8);
    if ( a3 )
      LODWORD(v11) = *(int *)((char *)&dword_140404A6C[283831604] + v9) / 10;
    else
      LODWORD(v11) = -10;
    v12 = 1717986919LL * a4;
    goto LABEL_15;
  }
  sub_140158AB0(v17, "Transaction(%d)", v8);
  v10 = a4 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v9) / 10;
  if ( *(unsigned int *)((char *)&dword_140404A6C[283831591] + v9) != 2 )
  {
    v11 = (unsigned int)v10;
    if ( !a3 )
      goto LABEL_16;
    v12 = 1717986919LL * *(int *)((char *)&dword_140404A6C[283831604] + v9);
LABEL_15:
    v11 = (unsigned int)((HIDWORD(v12) >> 31) + (SHIDWORD(v12) >> 2) + v11);
    goto LABEL_16;
  }
  v11 = (unsigned int)(v10 + 50);
  if ( v10 < 0 )
    v11 = (unsigned int)v10;
  if ( a3 )
  {
    if ( (int)v11 >= -10 )
      v11 = (unsigned int)(v11 + 10);
    else
      v11 = 4294967286LL;
  }
LABEL_16:
  v13 = &dword_140404A6C[71856272];
  do
  {
    if ( *(v13 - 19) && v13[14] == a1 )
    {
      if ( (int)v11 > 0 )
        *v13 += 10 * v11;
      v13[3] += v11;
    }
    v13 += 3597;
  }
  while ( (__int64)v13 < (__int64)&dword_140404A6C[72777104] );
  v14 = "%s: Complete   Rating:  %d";
  if ( (int)dword_140404A6C[179992853] >= *(int *)((char *)&dword_140404A6C[283831605] + v9) )
    v14 = "%s: Expired    Rating:  %d";
  sub_140158AB0((char *)&dword_140404A6C[283831611] + v9, v14, v17, v11);
  *(unsigned int *)((char *)&dword_140404A6C[283831589] + v9) = 1;
  sub_140051BD0(a1, a2);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v18);
}

