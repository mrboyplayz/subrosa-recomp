/* Address: 0x1400378d0 | Name: sub_1400378D0 | Size: 383 bytes */
void __fastcall sub_1400378D0(int a1, int a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // r10
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r10
  int *v12; // r11
  _BYTE *v13; // r8
  __int64 v14; // rcx
  _BYTE v15[4]; // [rsp+0h] [rbp-11Ch] BYREF
  _DWORD v16[64]; // [rsp+4h] [rbp-118h]

  v3 = a2;
  if ( a2 == 2 )
  {
    v4 = a1;
    v5 = 1760LL * a1;
    v6 = *(_DWORD *)((char *)&unk_19025F3F4 + v5 * 4);
  }
  else
  {
    if ( a2 )
      return;
    v4 = a1;
    v5 = 1760LL * a1;
    if ( dword_19025F0F4[v5] <= 0 )
      return;
    v6 = *((_DWORD *)&unk_19025F3F4 + 1760 * dword_19025F0F8[v5]);
  }
  if ( v6 != -1 )
  {
    if ( (_DWORD)a3 )
    {
      v7 = 1;
      v8 = 1;
      v16[0] = a3;
      do
      {
        LODWORD(a3) = *((_DWORD *)&unk_18F7174D8 + 2570 * v6 + 4 * (int)a3);
        if ( !(_DWORD)a3 )
          break;
        v16[v8] = a3;
        ++v7;
        ++v8;
      }
      while ( v8 < 8 );
      v9 = v5 * 4 + 72 * v3;
      v10 = v3;
      v11 = v7;
      v12 = (int *)((char *)&unk_1902604BC + v9);
      *(_DWORD *)((char *)&unk_1902604BC + v9) = 0;
      *(int *)((char *)dword_1902604C0 + v9) = 0;
      if ( v7 >= 1LL )
      {
        v13 = &v15[4 * v7];
        do
        {
          v14 = *v12;
          v13 -= 4;
          *v12 = v14 + 1;
          dword_1902604C4[1760 * v4 + 18 * v10 + v14] = *((_DWORD *)v13 + 1);
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      *(_QWORD *)((char *)&unk_1902604BC + 72 * a2 + v5 * 4) = a3;
    }
  }
}

