/* Address: 0x140019940 | Name: sub_140019940 | Size: 705 bytes */
unsigned __int64 __fastcall sub_140019940(
        unsigned int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int *a9)
{
  int *v10; // r14
  int v11; // ebx
  int v12; // edi
  unsigned __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // edx

  v10 = dword_1402B3664;
  v11 = 0;
  v12 = 1;
  do
  {
    result = a8 & (unsigned int)v12;
    if ( (_DWORD)result == v12 )
    {
      v15 = 3LL * *(v10 - 1);
      v16 = *v10;
      *(float *)&dword_140404A6C[19928789] = (float)(a5 * *(float *)&dword_1402B34F0[3 * *(v10 - 1)]) + a2;
      *(float *)&dword_140404A6C[19928790] = (float)(a6 * *(float *)&dword_1402B34F0[v15 + 1]) + a3;
      v17 = a7 * *(float *)&dword_1402B34F0[v15 + 2];
      v18 = 3 * v16;
      v19 = v10[1];
      *(float *)&dword_140404A6C[19928791] = v17 + a4;
      *(float *)&dword_140404A6C[19928798] = (float)(a5 * *(float *)&dword_1402B34F0[v18]) + a2;
      *(float *)&dword_140404A6C[19928799] = (float)(a6 * *(float *)&dword_1402B34F0[v18 + 1]) + a3;
      v20 = a7 * *(float *)&dword_1402B34F0[v18 + 2];
      v21 = 3 * v19;
      v22 = v10[2];
      *(float *)&dword_140404A6C[19928800] = v20 + a4;
      *(float *)&dword_140404A6C[19928834] = (float)(a5 * *(float *)&dword_1402B34F0[v21]) + a2;
      *(float *)&dword_140404A6C[19928835] = (float)(a6 * *(float *)&dword_1402B34F0[v21 + 1]) + a3;
      *(float *)&dword_140404A6C[19928836] = (float)(a7 * *(float *)&dword_1402B34F0[v21 + 2]) + a4;
      *(float *)&dword_140404A6C[19928825] = (float)(a5 * *(float *)&dword_1402B34F0[3 * v22]) + a2;
      *(float *)&dword_140404A6C[19928826] = (float)(a6 * *(float *)&dword_1402B34F0[3 * v22 + 1]) + a3;
      *(float *)&dword_140404A6C[19928827] = (float)(a7 * *(float *)&dword_1402B34F0[3 * v22 + 2]) + a4;
      if ( v11 )
      {
        switch ( v11 )
        {
          case 1:
            v23 = 393216;
            break;
          case 2:
            v23 = 0x10000;
            break;
          case 3:
            v23 = 327680;
            break;
          default:
            v23 = 0x40000;
            if ( v11 == 4 )
              v23 = 0x20000;
            break;
        }
      }
      else
      {
        v23 = 196608;
      }
      v24 = sub_14001B5C0(a1, v23);
      v25 = *a9;
      if ( (unsigned int)(*a9 - 1) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 1;
      if ( (unsigned int)(v25 - 9) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 9;
      result = sub_140001F20(
                 (__int64)&dword_140404A6C[19928789],
                 (__int64)&dword_140404A6C[19928837],
                 1,
                 1,
                 1,
                 1,
                 v24 | (unsigned int)v25);
    }
    ++v11;
    v12 = __ROL4__(v12, 1);
    v10 += 4;
    ++a9;
  }
  while ( v11 < 6 );
  return result;
}

