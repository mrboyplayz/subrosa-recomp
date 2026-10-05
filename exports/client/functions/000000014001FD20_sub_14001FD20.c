/* Address: 0x14001fd20 | Name: sub_14001FD20 | Size: 732 bytes */
__int64 __fastcall sub_14001FD20(float *a1, float *a2)
{
  float *v4; // rdx
  int i; // ecx
  float *v6; // rax
  float v7; // xmm2_4
  unsigned int v8; // eax
  float v9; // xmm8_4
  float v10; // xmm7_4

  qword_1402B27D0 = 0;
  dword_1402B27D8 = 1065353216;
  sub_14007A240(&qword_1402B27D0, &qword_1402B27D0);
  qword_1402B27DC = 1065353216;
  dword_1402B27E4 = 1065353216;
  sub_14007A240(&qword_1402B27DC, &qword_1402B27DC);
  dword_1402B27E8 = -1082130432;
  dword_1402B27EC = 0;
  dword_1402B27F0 = 1065353216;
  sub_14007A240(&dword_1402B27E8, &dword_1402B27E8);
  dword_1402B27F8 = 1061158912;
  dword_1402B27F4 = 0;
  dword_1402B27FC = 1065353216;
  sub_14007A240(&dword_1402B27F4, &dword_1402B27F4);
  dword_1402B2804 = -1086324736;
  dword_1402B2800 = 0;
  dword_1402B2808 = 1065353216;
  sub_14007A240(&dword_1402B2800, &dword_1402B2800);
  v4 = (float *)&dword_1402B27D8;
  while ( 2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 8 )
        return 0;
      v6 = a1;
      if ( i >= 4 )
        v6 = a2;
      v7 = *v6;
      v8 = i & 3;
      if ( v8 >= 2 )
      {
        v9 = a2[1];
      }
      else
      {
        v9 = a1[1];
        if ( (i & 3) == 0 )
          goto LABEL_8;
      }
      if ( v8 == 3 )
      {
LABEL_8:
        v10 = a1[2];
        goto LABEL_9;
      }
      v10 = a2[2];
LABEL_9:
      if ( (float)((float)((float)((float)((float)((float)(*(v4 - 2) * *(float *)&dword_140404A6C[284024505])
                                                 + (float)(*(v4 - 1) * *(float *)&dword_140404A6C[284024508]))
                                         + (float)(*v4 * *(float *)&dword_140404A6C[284024511]))
                                 * (float)(v7 - *(float *)&dword_140404A6C[284024502]))
                         + (float)((float)((float)((float)(*(v4 - 2) * *(float *)&dword_140404A6C[284024506])
                                                 + (float)(*(v4 - 1) * *(float *)&dword_140404A6C[284024509]))
                                         + (float)(*v4 * *(float *)&dword_140404A6C[284024512]))
                                 * (float)(v9 - *(float *)&dword_140404A6C[284024503])))
                 + (float)((float)((float)((float)(*(v4 - 2) * *(float *)&dword_140404A6C[284024507])
                                         + (float)(*(v4 - 1) * *(float *)&dword_140404A6C[284024510]))
                                 + (float)(*v4 * *(float *)&dword_140404A6C[284024513]))
                         * (float)(v10 - *(float *)&dword_140404A6C[284024504]))) < 0.0 )
        break;
    }
    v4 += 3;
    if ( (__int64)v4 < (__int64)((float *)&off_1402B2810 + 1) )
      continue;
    return 1;
  }
}

