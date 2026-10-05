/* Address: 0x140196320 | Name: sub_140196320 | Size: 1208 bytes */
__int64 __fastcall sub_140196320(int a1, char *a2, unsigned int a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  unsigned int *v8; // rcx
  char v9; // al
  __int64 v10; // rsi
  int v11; // r12d
  int i; // r15d
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // [rsp+60h] [rbp+8h] BYREF

  result = a1;
  v5 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v5 + 293512629] && dword_140404A6C[265228 * a1 + 293512631] )
  {
    dword_140404A6C[265228 * a1 + 293512635 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]] = a3;
    v8 = &dword_140404A6C[265228 * a1 + 293512638 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]];
    do
    {
      v9 = *a2++;
      *(_BYTE *)v8 = v9;
      v8 = (unsigned int *)((char *)v8 + 1);
    }
    while ( v9 );
    dword_140404A6C[16 * (unsigned __int64)dword_140404A6C[v5 + 293512634] + 293512636 + v5] = ftell(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    switch ( a3 )
    {
      case 0x585A0001u:
        v10 = *(_QWORD *)&dword_140404A6C[v5 + 293512629];
        if ( v10 )
        {
          v26 = 1;
          sub_14020CE0C(&v26, 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852365], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852366], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852367], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852368], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852369], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852370], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852371], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852372], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852373], 4, 1, v10);
          sub_14020CE0C(&dword_140404A6C[19852374], 4, 1, v10);
          v11 = 0;
          for ( i = 0; i < (int)dword_140404A6C[19852374]; ++i )
          {
            v13 = 87LL * i;
            sub_14020CE0C(&dword_140404A6C[v13 + 19852378], 4, 1, v10);
            sub_14020CE0C(&dword_140404A6C[v13 + 19852376], 4, 1, v10);
            sub_14020CE0C(&dword_140404A6C[v13 + 19852379], 4, 1, v10);
            sub_14020CE0C(&dword_140404A6C[v13 + 19852377], 4, 1, v10);
            sub_14020CE0C(&dword_140404A6C[v13 + 19852460], 4, 1, v10);
            sub_14020CE0C(&dword_140404A6C[v13 + 19852461], 4, 1, v10);
            v14 = 4;
            v15 = &dword_140404A6C[v13 + 19852428];
            v16 = 0x140000000LL + v13 * 4 + 83622876;
            do
            {
              v17 = 4;
              do
              {
                sub_14020CE0C(v16, 4, 3, v10);
                sub_14020CE0C(v15, 4, 2, v10);
                v16 += 12;
                v15 += 2;
                --v17;
              }
              while ( v17 );
              --v14;
            }
            while ( v14 );
          }
          sub_14020CE0C(&dword_140404A6C[19896919], 4, 1, v10);
          if ( (int)dword_140404A6C[19896919] > 0 )
          {
            do
            {
              v18 = 8;
              v19 = 124LL * v11;
              v20 = 0x140000000LL + v19 + 83801036;
              do
              {
                sub_14020CE0C(v20, 4, 3, v10);
                v20 += 12;
                --v18;
              }
              while ( v18 );
              v21 = 6;
              v22 = 0x140000000LL + v19 + 83801132;
              do
              {
                sub_14020CE0C(v22, 4, 1, v10);
                v22 += 4;
                --v21;
              }
              while ( v21 );
              sub_14020CE0C(0x140000000LL + v19 + 83801156, 4, 1, v10);
              ++v11;
            }
            while ( v11 < (int)dword_140404A6C[19896919] );
          }
        }
        break;
      case 0x585A0002u:
        sub_140196D60(a4, *(FILE **)&dword_140404A6C[v5 + 293512629]);
        break;
      case 0x585A0004u:
        sub_140197630(*a4, *(_QWORD *)&dword_140404A6C[v5 + 293512629], 1);
        break;
    }
    v23 = ftell(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    v24 = v5 * 4 + ((unsigned __int64)dword_140404A6C[v5 + 293512634] << 6);
    *(unsigned int *)((char *)&dword_140404A6C[293512637] + v24) = v23
                                                                 - *(unsigned int *)((char *)&dword_140404A6C[293512636]
                                                                                   + v24);
    v25 = dword_140404A6C[v5 + 293512634];
    dword_140404A6C[v5 + 293512633] += dword_140404A6C[16 * (unsigned __int64)v25 + 293512637 + v5];
    result = v25 + 1;
    dword_140404A6C[v5 + 293512634] = result;
  }
  return result;
}

