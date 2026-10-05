/* Address: 0x140070ff0 | Name: sub_140070FF0 | Size: 467 bytes */
__int64 __fastcall sub_140070FF0(
        int a1,
        float a2,
        float a3,
        float a4,
        int a5,
        unsigned int a6,
        float *a7,
        float a8,
        float a9)
{
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  float v12; // xmm1_4

  v9 = sub_14006C670("Scrollbar", a1 + (dword_140404A6C[70087064] << 16) + (dword_140404A6C[70087046] << 8));
  v10 = sub_140070380(v9, a2, a3, a4, a5, 0);
  v11 = 122LL * (int)v10;
  *(float *)&dword_140404A6C[v11 + 70087220] = a8;
  *(float *)&dword_140404A6C[v11 + 70087221] = a9;
  dword_140404A6C[v11 + 70087219] = a6;
  dword_140404A6C[v11 + 70087115] = 7;
  *(_QWORD *)&dword_140404A6C[v11 + 70087217] = a7;
  if ( dword_140404A6C[70317817] || (dword_140404A6C[v11 + 70087215] = 0, dword_140404A6C[70317817]) )
  {
    if ( !dword_140404A6C[70317856] )
    {
      if ( v10 != dword_140404A6C[70087109] )
        goto LABEL_12;
      dword_140404A6C[v11 + 70087215] = 1;
    }
  }
  if ( v10 == dword_140404A6C[70087109] )
  {
    v12 = *a7 - (float)((float)(int)dword_140404A6C[137297772] * 16.0);
    if ( v12 < a8 )
      v12 = a8;
    if ( v12 > a9 )
      v12 = a9;
    *a7 = v12;
  }
LABEL_12:
  if ( dword_140404A6C[v11 + 70087215] )
    **(float **)&dword_140404A6C[v11 + 70087217] = fminf(
                                                     fmaxf(
                                                       (float)((float)((float)(*(float *)&dword_140404A6C[468760126]
                                                                             - *(float *)&dword_140404A6C[v11 + 70087135])
                                                                     - (float)(*(float *)&dword_140404A6C[v11 + 70087219]
                                                                             * 0.5))
                                                             / (float)(*(float *)&dword_140404A6C[v11 + 70087128]
                                                                     - *(float *)&dword_140404A6C[v11 + 70087219]))
                                                     * (float)(*(float *)&dword_140404A6C[v11 + 70087221]
                                                             - *(float *)&dword_140404A6C[v11 + 70087220]),
                                                       *(float *)&dword_140404A6C[v11 + 70087220]),
                                                     *(float *)&dword_140404A6C[v11 + 70087221]);
  return v10;
}

