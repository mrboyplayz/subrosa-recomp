/* Address: 0x140070bd0 | Name: sub_140070BD0 | Size: 1041 bytes */
__int64 __fastcall sub_140070BD0(int a1, unsigned int a2, const char *a3, const char *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  char *v9; // rdx
  unsigned int *v10; // rcx
  char v11; // al
  int v12; // eax
  const char *v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rdx
  char v17; // al
  unsigned int v18; // eax
  __int64 v20; // [rsp+0h] [rbp-5D8h] BYREF
  _BYTE v21[36]; // [rsp+50h] [rbp-588h] BYREF
  char v22; // [rsp+74h] [rbp-564h] BYREF
  int v23; // [rsp+180h] [rbp-458h] BYREF
  char v24; // [rsp+184h] [rbp-454h]
  __int64 v25; // [rsp+580h] [rbp-58h]

  v4 = 517LL * a1;
  if ( (int)dword_140404A6C[v4 + 70315979] <= 1 && a2 <= 1 )
  {
    sub_140158AB0(&v23, "%s/%s", a3, a4);
    v6 = sub_14023A198(&v23, v21);
    v7 = 0;
    v8 = v6;
    dword_140404A6C[133657101] = 0;
    if ( (_DWORD)v6 != -1 )
    {
      do
      {
        if ( v7 >= 1024 )
          break;
        if ( (v21[0] & 0x10) == 0 )
        {
          v9 = &v22;
          v10 = &dword_140404A6C[32 * (__int64)v7 + 133657102];
          do
          {
            v11 = *v9++;
            *(_BYTE *)v10 = v11;
            v10 = (unsigned int *)((char *)v10 + 1);
          }
          while ( v11 );
          ++dword_140404A6C[133657101];
        }
        v12 = sub_14023A5C4(v8, v21);
        v7 = dword_140404A6C[133657101];
      }
      while ( v12 != -1 );
    }
    LOBYTE(dword_140404A6C[32 * (__int64)v7 + 133657102]) = 0;
    sub_140239CCC(v8);
    sub_14023AE00(&dword_140404A6C[133657102], (int)dword_140404A6C[133657101], 128, sub_14006C980);
    LOBYTE(dword_140404A6C[v4 + 70315984]) = 0;
    LOBYTE(dword_140404A6C[v4 + 70316240]) = 0;
    *(_QWORD *)&dword_140404A6C[v4 + 70315982] = -1;
  }
  dword_140404A6C[v4 + 70315979] = 3;
  dword_140404A6C[v4 + 70315980] = a2;
  if ( a2 <= 1 )
  {
    v13 = "Open File";
    if ( a2 )
      v13 = "Save File";
    dword_140404A6C[v4 + 70315981] = sub_140071C20((_DWORD)v13, a2, (_DWORD)a3, (_DWORD)a4, 1134559232, 1095761920, 256);
    sub_1400707C0(
      "Files",
      256.0,
      128.0,
      256.0,
      0x41A00000u,
      1u,
      &dword_140404A6C[v4 + 70315982],
      (__int64)&dword_140404A6C[133657102],
      0x80u,
      dword_140404A6C[133657101]);
    v14 = (int)dword_140404A6C[v4 + 70315982];
    if ( (_DWORD)v14 != dword_140404A6C[v4 + 70315983] && (int)v14 >= 0 && (int)v14 < (int)dword_140404A6C[133657101] )
    {
      v15 = &dword_140404A6C[32 * v14 + 133657102];
      v16 = &dword_140404A6C[v4 + 70315984];
      do
      {
        v17 = *(_BYTE *)v15;
        v15 = (unsigned int *)((char *)v15 + 1);
        *(_BYTE *)v16 = v17;
        v16 = (unsigned int *)((char *)v16 + 1);
      }
      while ( v17 );
    }
    sub_140070200("Filename", (__int64)&dword_140404A6C[v4 + 70315984], 0x100u);
    dword_140404A6C[70087067] = 1134690304;
    dword_140404A6C[70087068] = 1082130432;
    if ( (int)dword_140404A6C[70317962] < 16 )
    {
      dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
      dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
    }
    dword_140404A6C[70087070] = 1103101952;
    dword_140404A6C[70087069] = 1124073472;
    if ( a2 )
      v23 = 1702256979;
    else
      v23 = 1852141647;
    v24 = 0;
    if ( (unsigned int)ui_button_candidate((__int64)&v23) )
      sub_140158AB0(&dword_140404A6C[v4 + 70316240], "%s", (const char *)&dword_140404A6C[v4 + 70315984]);
    dword_140404A6C[70087074] = 41;
    ui_button_candidate((__int64)"Cancel");
    v18 = dword_140404A6C[70317962];
    if ( (int)dword_140404A6C[70317962] > 0 )
    {
      --dword_140404A6C[70317962];
      dword_140404A6C[70087069] = dword_140404A6C[2 * (v18 - 1) + 70317963];
      dword_140404A6C[70087070] = dword_140404A6C[2 * (v18 - 1) + 70317964];
    }
  }
  dword_140404A6C[v4 + 70315983] = dword_140404A6C[v4 + 70315982];
  sub_140077230();
  return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v25);
}

