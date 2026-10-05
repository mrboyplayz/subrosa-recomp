/* Address: 0x140069630 | Name: sub_140069630 | Size: 697 bytes */
__int64 sub_140069630()
{
  int v0; // eax
  unsigned int v1; // ebx
  char *v2; // rax
  int v3; // r8d
  char *v4; // rdx
  char v5; // cl
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rax
  int v9; // r8d
  char *v10; // rdx
  char v11; // cl
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // eax
  int v16; // [rsp+30h] [rbp-48h] BYREF
  __int16 v17; // [rsp+34h] [rbp-44h]
  char v18; // [rsp+36h] [rbp-42h]
  __int16 v19; // [rsp+38h] [rbp-40h]
  void (__fastcall *v20)(__int64, __int64); // [rsp+40h] [rbp-38h]
  _BYTE v21[8]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int16 v22; // [rsp+58h] [rbp-20h]

  dword_140404A6C[18198666] = 1048576000;
  sub_140069A00();
  v0 = MEMORY[0x140198E7B](0);
  *(_QWORD *)&dword_140404A6C[18198670] = 0x746C7561666544LL;
  v1 = 0;
  if ( v0 < 0 )
    v0 = 0;
  dword_140404A6C[18198669] = v0;
  if ( v0 > 0 )
  {
    do
    {
      v2 = (char *)MEMORY[0x140198E81](v1, 0);
      v3 = v1 + 1;
      v4 = (char *)&dword_140404A6C[1] + ((__int64)(int)v1 << 9) - (_QWORD)v2;
      do
      {
        v5 = *v2;
        v2[(_QWORD)v4 + 72795188] = *v2;
        ++v2;
      }
      while ( v5 );
      v0 = dword_140404A6C[18198669];
      ++v1;
    }
    while ( v3 < (int)dword_140404A6C[18198669] );
  }
  dword_140404A6C[18198669] = v0 + 1;
  v6 = MEMORY[0x140198E7B](1);
  *(_QWORD *)&dword_140404A6C[18206865] = 0x746C7561666544LL;
  v7 = 0;
  if ( v6 < 0 )
    v6 = 0;
  dword_140404A6C[18206864] = v6;
  if ( v6 > 0 )
  {
    do
    {
      v8 = (char *)MEMORY[0x140198E81](v7, 1);
      v9 = v7 + 1;
      v10 = (char *)&dword_140404A6C[1] + ((__int64)(int)v7 << 9) - (_QWORD)v8;
      do
      {
        v11 = *v8;
        v8[(_QWORD)v10 + 72827968] = *v8;
        ++v8;
      }
      while ( v11 );
      v6 = dword_140404A6C[18206864];
      ++v7;
    }
    while ( v9 < (int)dword_140404A6C[18206864] );
  }
  dword_140404A6C[18206864] = v6 + 1;
  *(_QWORD *)&dword_140404A6C[1] = MEMORY[0x140198E5D](0);
  *(_QWORD *)&dword_140404A6C[3] = MEMORY[0x140198E6F](
                                     sub_14006BB10,
                                     "cs_audio_updatethread",
                                     0,
                                     &sub_14023D25C,
                                     sub_14023D33C);
  MEMORY[0x140198E57](&v16, 0, 32);
  v16 = 48000;
  v17 = -32480;
  v18 = 2;
  v20 = sub_140069400;
  v19 = 1024;
  v12 = MEMORY[0x140198E87](0, 0, &v16, v21, 0);
  dword_140404A6C[8] = v22;
  if ( v21[6] != v18 )
    v12 = 0;
  if ( v22 != v19 )
    v12 = 0;
  dword_140404A6C[7] = v12;
  MEMORY[0x140198E57](&v16, 0, 32);
  MEMORY[0x140198E57](v21, 0, 32);
  v16 = 48000;
  v17 = -32752;
  v18 = 1;
  v20 = (void (__fastcall *)(__int64, __int64))sub_14006A380;
  v19 = 1024;
  v13 = MEMORY[0x140198E81](0, 1);
  v14 = MEMORY[0x140198E87](v13, 1, &v16, v21, 0);
  dword_140404A6C[5] = 1124856083;
  *(_OWORD *)&dword_140404A6C[18198549] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[18198553] = xmmword_140278D30;
  dword_140404A6C[18198557] = 1065353216;
  dword_140404A6C[196619] = v14;
  if ( !dword_140404A6C[7] )
    return 0;
  MEMORY[0x140198E8D](dword_140404A6C[7], 0);
  MEMORY[0x140198E8D](dword_140404A6C[196619], 0);
  return 1;
}

