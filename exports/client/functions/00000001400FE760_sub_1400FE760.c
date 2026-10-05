/* Address: 0x1400fe760 | Name: sub_1400FE760 | Size: 262 bytes */
__int64 sub_1400FE760()
{
  int v0; // eax
  unsigned int v1; // ecx
  __int64 result; // rax

  *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797E0;
  dword_140404A6C[70087074] = 41;
  v0 = ui_button_candidate((__int64)"Back");
  v1 = dword_140404A6C[283831444];
  if ( v0 )
    v1 = 0;
  *(_QWORD *)&dword_140404A6C[70087081] = sub_1400FE870;
  dword_140404A6C[70087068] = 1115684864;
  dword_140404A6C[70087070] = 1105199104;
  dword_140404A6C[283831444] = v1;
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087067] = 1128267776;
  *(_QWORD *)&dword_140404A6C[70087079] = 0;
  result = sub_1400707C0(
             "mutelist",
             640.0,
             384.0,
             160.0,
             0x42400000u,
             0,
             &dword_140404A6C[280649317],
             0,
             0,
             dword_140404A6C[280649318]);
  if ( (_DWORD)result )
  {
    result = (int)dword_140404A6C[280649317];
    if ( (dword_140404A6C[280649317] & 0x80000000) == 0
      && (int)dword_140404A6C[280649317] < (int)dword_140404A6C[280649318] )
    {
      return sub_140117820(dword_140404A6C[dword_140404A6C[280649317] + 280649319]);
    }
  }
  return result;
}

