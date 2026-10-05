/* Address: 0x14005ed40 | Name: sub_14005ED40 | Size: 225 bytes */
__int64 __fastcall sub_14005ED40(int a1, float *a2, int a3, int a4)
{
  int v4; // ebx
  __int64 v5; // rdi

  v4 = (int)a2;
  v5 = a1;
  if ( fsqrt(
         (float)((float)((float)(*(float *)&dword_140404A6C[284024503] - a2[1])
                       * (float)(*(float *)&dword_140404A6C[284024503] - a2[1]))
               + (float)((float)(*(float *)&dword_140404A6C[284024502] - *a2)
                       * (float)(*(float *)&dword_140404A6C[284024502] - *a2)))
       + (float)((float)(*(float *)&dword_140404A6C[284024504] - a2[2])
               * (float)(*(float *)&dword_140404A6C[284024504] - a2[2]))) <= 128.0 )
    sub_1400DC050(a2, &dword_140404A6C[284024502], 0);
  if ( dword_140404A6C[8 * v5 + 18165777] )
    sub_140069FA0(v5, v4, a3, a4, 0);
  return 0xFFFFFFFFLL;
}

