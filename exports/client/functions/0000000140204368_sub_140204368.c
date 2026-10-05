/* Address: 0x140204368 | Name: sub_140204368 | Size: 594 bytes */
__int64 __fastcall sub_140204368(__int64 a1)
{
  char v1; // r15
  char *v3; // rcx
  int v4; // r8d
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  char *v8; // rsi
  _BYTE *v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  int *v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+28h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v23[16]; // [rsp+70h] [rbp-10h] BYREF

  *(_QWORD *)a1 = 0;
  v1 = 1;
  *(_DWORD *)(a1 + 8) = 0;
  BYTE1(dword_140404A6C[19064560]) = 1;
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v3 = *(char **)&dword_140404A6C[19064555];
    do
    {
      if ( (*v3 & 0xBF) == 0 )
        break;
      v4 = *v3;
      v5 = 0;
      v17 = 0;
      v18 = 0;
      if ( (unsigned int)(v4 - 48) <= 9 )
      {
        *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
        v6 = MEMORY[0x1401FE684](*(_QWORD *)&dword_140404A6C[19064553], v21);
        v7 = *(_QWORD *)v6;
        LODWORD(v6) = *(_DWORD *)(v6 + 8);
        v17 = v7;
        v18 = v6;
LABEL_28:
        v3 = *(char **)&dword_140404A6C[19064555];
LABEL_29:
        if ( v7 )
        {
          if ( !v1 && *(char *)(a1 + 8) <= 1 )
          {
            if ( *(_QWORD *)a1 )
            {
              v15 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
              if ( v15 )
              {
                *(_BYTE *)(v15 + 8) = 44;
                *(_QWORD *)v15 = off_1402846F0;
              }
              sub_1401FDE58((__int64 *)a1, v15);
            }
            else
            {
              *(_QWORD *)a1 = 0;
              *(_DWORD *)(a1 + 8) = 0;
              sub_1401FFB98((#89 *)a1, 44);
            }
          }
          sub_1401FE908(a1, (__int64)&v17);
          if ( v5 )
          {
            DWORD2(v19) = 3;
            *(_QWORD *)&v19 = "...";
            v20 = v19;
            sub_1401FE888(a1, (__int64)&v20);
          }
          v3 = *(char **)&dword_140404A6C[19064555];
        }
        goto LABEL_40;
      }
      v8 = v3;
      if ( *v3 != 36 )
      {
LABEL_22:
        v10 = sub_140204CC0(v23);
        goto LABEL_23;
      }
      if ( v3[1] == 36 )
      {
        switch ( v3[2] )
        {
          case '$':
            if ( v3[3] == 86 )
            {
              v3 += 4;
              goto LABEL_21;
            }
            break;
          case 'U':
            goto LABEL_17;
          case 'V':
            goto LABEL_18;
          case 'W':
            v5 = 1;
LABEL_17:
            v3 += 3;
            *(_QWORD *)&dword_140404A6C[19064555] = v3;
            break;
          case 'Z':
LABEL_18:
            v3 += 3;
LABEL_21:
            *(_QWORD *)&dword_140404A6C[19064555] = v3;
            goto LABEL_40;
        }
      }
      if ( *v3 != 36 )
        goto LABEL_22;
      v9 = v3 + 1;
      if ( *v9 == 36 )
        goto LABEL_22;
      *(_QWORD *)&dword_140404A6C[19064555] = v9;
      v10 = sub_140204850(v22);
LABEL_23:
      v11 = *(_DWORD *)(v10 + 8);
      v7 = *(_QWORD *)v10;
      v3 = *(char **)&dword_140404A6C[19064555];
      v18 = v11;
      v17 = v7;
      if ( (__int64)(*(_QWORD *)&dword_140404A6C[19064555] - (_QWORD)v8) <= 1 )
        goto LABEL_29;
      v12 = *(int **)&dword_140404A6C[19064553];
      if ( **(_DWORD **)&dword_140404A6C[19064553] == 9 )
        goto LABEL_29;
      if ( v7 )
      {
        v13 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v13 )
        {
          *(_QWORD *)v13 = v7;
          *(_DWORD *)(v13 + 8) = v11;
          v14 = *v12;
          *v12 = v14 + 1;
          *(_QWORD *)&v12[2 * v14 + 4] = v13;
        }
        goto LABEL_28;
      }
LABEL_40:
      v1 = 0;
    }
    while ( !*(_BYTE *)(a1 + 8) );
  }
  BYTE1(dword_140404A6C[19064560]) = 0;
  return a1;
}

