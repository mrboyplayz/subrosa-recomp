/* Address: 0x1400fb870 | Name: sub_1400FB870 | Size: 472 bytes */
__int64 sub_1400FB870()
{
  int v0; // eax
  unsigned int v1; // ecx
  __int64 result; // rax

  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087074] = 41;
  v0 = ui_button_candidate((__int64)"Back");
  v1 = dword_140404A6C[283831310];
  if ( v0 )
    v1 = 0;
  dword_140404A6C[283831310] = v1;
  dword_140404A6C[70087067] = 1107296256;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 64.0;
  ui_select_value_candidate((__int64)"Female", (int *)&dword_140404A6C[73991647], 0);
  ui_select_value_candidate((__int64)"Male", (int *)&dword_140404A6C[73991647], 1);
  ui_int_slider_candidate((__int64)"Head", (int *)&dword_140404A6C[73991648], 0, 4, 1);
  ui_int_slider_candidate((__int64)"Eyes", (int *)&dword_140404A6C[73991652], 0, 7, 1);
  ui_int_slider_candidate((__int64)"Hair", (int *)&dword_140404A6C[73991651], 0, 8, 1);
  ui_int_slider_candidate((__int64)"Hair Color", (int *)&dword_140404A6C[73991650], 0, 11, 1);
  ui_int_slider_candidate((__int64)"Skin", (int *)&dword_140404A6C[73991649], 0, 5, 1);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

