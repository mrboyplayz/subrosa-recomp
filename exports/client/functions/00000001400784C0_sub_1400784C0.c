/* Address: 0x1400784c0 | Name: sub_1400784C0 | Size: 333 bytes */
__int64 __fastcall sub_1400784C0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  char *v7; // rdx
  unsigned int *v8; // rcx
  char v9; // al
  char *v10; // rdx
  unsigned int *v11; // rax
  char v12; // cl
  __int64 v14; // [rsp+0h] [rbp-178h] BYREF
  _BYTE v15[36]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v16[268]; // [rsp+44h] [rbp-134h] BYREF
  __int64 v17; // [rsp+150h] [rbp-28h]

  v4 = 32769LL * a2;
  v5 = sub_14023A198(a1, v15);
  dword_140404A6C[v4 + 133657101] = 0;
  if ( (_DWORD)v5 != -1 )
  {
    while ( 1 )
    {
      v6 = (int)dword_140404A6C[v4 + 133657101];
      if ( (int)v6 >= 1024 )
        goto LABEL_14;
      if ( a3 )
        break;
      if ( (v15[0] & 0x10) == 0 )
      {
        v7 = v16;
        v8 = &dword_140404A6C[32 * v6 + 133657102 + v4];
        do
        {
          v9 = *v7++;
          *(_BYTE *)v8 = v9;
          v8 = (unsigned int *)((char *)v8 + 1);
        }
        while ( v9 );
LABEL_12:
        ++dword_140404A6C[v4 + 133657101];
      }
LABEL_13:
      if ( (unsigned int)sub_14023A5C4(v5, v15) == -1 )
        goto LABEL_14;
    }
    if ( (v15[0] & 0x10) == 0 || v16[0] == 46 )
      goto LABEL_13;
    v10 = v16;
    v11 = &dword_140404A6C[32 * v6 + 133657102 + v4];
    do
    {
      v12 = *v10++;
      *(_BYTE *)v11 = v12;
      v11 = (unsigned int *)((char *)v11 + 1);
    }
    while ( v12 );
    goto LABEL_12;
  }
LABEL_14:
  LOBYTE(dword_140404A6C[32 * (__int64)(int)dword_140404A6C[v4 + 133657101] + 133657102 + v4]) = 0;
  sub_140239CCC(v5);
  sub_14023AE00(&dword_140404A6C[v4 + 133657102], (int)dword_140404A6C[v4 + 133657101], 128, sub_14006C980);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v17);
}

