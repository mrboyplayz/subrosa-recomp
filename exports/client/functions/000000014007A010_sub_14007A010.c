/* Address: 0x14007a010 | Name: sub_14007A010 | Size: 196 bytes */
__int64 __fastcall sub_14007A010(__int64 a1, __int64 a2, __int64 a3)
{
  float *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  float *v7; // rdx
  __int64 v8; // r9
  float v9; // xmm3_4
  __int64 v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm5_4
  _OWORD v14[2]; // [rsp+0h] [rbp-38h] BYREF
  int v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]

  v4 = (float *)v14;
  v5 = 3;
  v6 = a3 - (_QWORD)v14;
  v7 = (float *)(a2 + 8);
  v8 = v6 + 24;
  do
  {
    v9 = *(v7 - 2);
    v10 = 3;
    v11 = *(v7 - 1);
    v12 = *v7;
    do
    {
      *v4 = (float)((float)(v9 * *(float *)((char *)v4 + v6)) + (float)(v11 * *(float *)((char *)v4 + v6 + 12)))
          + (float)(v12 * *(float *)((char *)v4 + v8));
      ++v4;
      --v10;
    }
    while ( v10 );
    v7 += 3;
    v8 -= 12;
    v6 -= 12;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)a1 = v14[0];
  *(_OWORD *)(a1 + 16) = v14[1];
  *(_DWORD *)(a1 + 32) = v15;
  return MEMORY[0x1401F8B20]((unsigned __int64)v14 ^ v16);
}

