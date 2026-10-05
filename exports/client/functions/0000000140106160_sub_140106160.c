/* Address: 0x140106160 | Name: sub_140106160 | Size: 480 bytes */
__int64 __fastcall sub_140106160(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rbp
  int v8; // edx
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int *v13; // rcx
  __int64 v14; // r10
  int v15; // edx
  __int64 v16; // r11
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int *v19; // rdx
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned int *v25; // rcx

  v1 = a1;
  v2 = 47224LL * a1;
  v3 = dword_140404A6C[v2 + 438887426];
  result = dword_140404A6C[456202728] - v3;
  if ( (int)result < 192 )
  {
    v5 = 0;
    v6 = 1;
    v7 = (unsigned __int8)v3;
    v8 = 1;
    v9 = 0;
    v10 = 0;
    v11 = 256;
    v12 = 88LL * (unsigned __int8)v3 + 47224 * v1;
    v13 = &dword_140404A6C[v2 + 438888533];
    do
    {
      if ( (v8 & dword_140404A6C[v12 + 438897493 + (v10 >> 5)]) != 0 )
      {
        v13[2] = dword_140404A6C[v2 + 438887426];
        *v13 = dword_140404A6C[79616 * v7 + 137297854 + v9];
      }
      ++v10;
      v8 = __ROL4__(v8, 1);
      v9 += 121;
      v13 += 3;
      --v11;
    }
    while ( v11 );
    v14 = 0;
    v15 = 1;
    v16 = 0;
    v17 = 512;
    do
    {
      if ( (v15 & dword_140404A6C[v12 + 438897501 + (v16 >> 5)]) != 0 )
        dword_140404A6C[47224 * v1 + 438887510 + 2 * v14] = dword_140404A6C[v2 + 438887426];
      ++v16;
      v15 = __ROL4__(v15, 1);
      ++v14;
      --v17;
    }
    while ( v17 );
    v18 = 1024;
    v19 = &dword_140404A6C[v2 + 438889301];
    v20 = 1024;
    v21 = 1;
    v22 = 0;
    v23 = 0;
    do
    {
      if ( (v21 & dword_140404A6C[v12 + 438897517 + (v23 >> 5)]) != 0 )
      {
        v19[2] = dword_140404A6C[v2 + 438887426];
        *v19 = dword_140404A6C[79616 * v7 + 137358014 + v22];
      }
      ++v23;
      v21 = __ROL4__(v21, 1);
      v22 += 9;
      v19 += 5;
      --v20;
    }
    while ( v20 );
    v24 = 0;
    v25 = &dword_140404A6C[v2 + 438894421];
    do
    {
      result = v12 + (v24 >> 5);
      if ( (v6 & dword_140404A6C[result + 438897549]) != 0 )
      {
        v25[2] = dword_140404A6C[v2 + 438887426];
        result = dword_140404A6C[79616 * v7 + 137367230 + v5];
        *v25 = result;
      }
      ++v24;
      v6 = __ROL4__(v6, 1);
      v5 += 10;
      v25 += 3;
      --v18;
    }
    while ( v18 );
  }
  return result;
}

