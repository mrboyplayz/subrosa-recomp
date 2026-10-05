/* Address: 0x14007cc30 | Name: input_poll_events_candidate | Size: 860 bytes */
// Candidate SDL event pump: tracks wheel delta, key events, Alt+Enter fullscreen toggle, resize/viewport state.
__int64 input_poll_events_candidate()
{
  int v0; // r8d
  int v1; // edx
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // r11d
  int v5; // ecx
  int v6; // r10d
  int v7; // eax
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v10; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v11; // [rsp+24h] [rbp-54h] BYREF
  _DWORD v12[3]; // [rsp+28h] [rbp-50h] BYREF
  char v13; // [rsp+34h] [rbp-44h]
  int v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int16 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  MEMORY[0x1B0032404] = MEMORY[0x1B0032400][0];
  MEMORY[0x160FC481C] = 0;
  while ( (unsigned int)MEMORY[0x140198F8F](v12) )
  {
    if ( v12[0] == 1027 )
    {
      MEMORY[0x160FC481C] += v15;
    }
    else
    {
      if ( v12[0] == 768 )
      {
        v0 = v14;
        v1 = v16;
        if ( v14 != 40 || (v16 & 0x300) == 0 )
        {
          MEMORY[0x1B0032400][5 * MEMORY[0x1B0032400][0] + 2] = 0;
          MEMORY[0x1B0032400][5 * MEMORY[0x1B0032400][0] + 3] = v0;
          goto LABEL_14;
        }
        MEMORY[0x160FC4804] ^= 1u;
        if ( MEMORY[0x160FC4804] )
          v2 = 4097;
        else
          v2 = 0;
        MEMORY[0x140198EDB](MEMORY[0x160FC47C8], v2);
      }
      if ( v12[0] == 769 )
      {
        v1 = v16;
        MEMORY[0x1B0032400][5 * MEMORY[0x1B0032400][0] + 2] = 1;
        MEMORY[0x1B0032400][5 * MEMORY[0x1B0032400][0] + 3] = v14;
LABEL_14:
        MEMORY[0x1B0032400][5 * MEMORY[0x1B0032400][0] + 4] = v15;
        MEMORY[0x1B0032400][5 * MEMORY[0x1B0032400][0] + 5] = v1;
        MEMORY[0x1B0032400][5 * MEMORY[0x1B0032400][0] + 6] = 0;
        MEMORY[0x1B0032400][0] = (LOWORD(MEMORY[0x1B0032400][0]) + 1) & 0x3FF;
        continue;
      }
      if ( v12[0] != 512 )
        goto LABEL_31;
      if ( v13 != 8 )
        goto LABEL_19;
      if ( !MEMORY[0x160FC4804] )
      {
        MEMORY[0x140198ED5](MEMORY[0x160FC47C8]);
        MEMORY[0x140198EDB](MEMORY[0x160FC47C8], 4097);
        MEMORY[0x160FC4804] = 1;
LABEL_19:
        if ( v13 == 6 )
        {
          MEMORY[0x140198ECF](MEMORY[0x160FC47C8], &MEMORY[0x160FC47D8], (char *)&MEMORY[0x160FC47D8] + 4);
          v3 = 0;
          MEMORY[0x160FC47E8] = MEMORY[0x160FC47D8];
          v4 = 0;
          v5 = 16 * HIDWORD(MEMORY[0x160FC47D8]) / 9;
          if ( (int)MEMORY[0x160FC47D8] <= v5 )
            v5 = MEMORY[0x160FC47D8];
          MEMORY[0x160FC47F0] = v5;
          v6 = (v5 + 8 * (v5 + 1)) / 16;
          MEMORY[0x160FC47F4] = v6;
          if ( (int)MEMORY[0x160FC47D8] > v5 )
            v3 = ((int)MEMORY[0x160FC47D8] - v5) / 2;
          if ( SHIDWORD(MEMORY[0x160FC47D8]) > v6 )
            v4 = (HIDWORD(MEMORY[0x160FC47D8]) - v6) / 2;
          MEMORY[0x160FC47F8] = v3;
          MEMORY[0x160FC47FC] = v4;
          MEMORY[0x160FC4820] = 1;
          if ( MEMORY[0x160FC4810] )
          {
            *(float *)&MEMORY[0x1A8BF79C4] = (float)(int)MEMORY[0x160FC47D8];
            *(float *)&MEMORY[0x1A8BF79C8] = (float)SHIDWORD(MEMORY[0x160FC47D8]);
          }
        }
        if ( v13 == 5 && !MEMORY[0x160FC4804] )
        {
          MEMORY[0x140198ECF](MEMORY[0x160FC47C8], &v10, &v11);
          v10 = ((int)MEMORY[0x160FC47D8] + 16 * HIDWORD(MEMORY[0x160FC47D8]) / 9) / 2;
          v11 = (int)(v10 + 8 * (v10 + 1)) / 16;
          MEMORY[0x140198EC9](MEMORY[0x160FC47C8], v10, v11);
        }
LABEL_31:
        v7 = MEMORY[0x160FC47C0];
        if ( v12[0] == 256 )
          v7 = 1;
        MEMORY[0x160FC47C0] = v7;
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v17);
}

