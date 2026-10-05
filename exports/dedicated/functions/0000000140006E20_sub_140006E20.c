/* Address: 0x140006e20 | Name: sub_140006E20 | Size: 302 bytes */
void __fastcall sub_140006E20(int a1, int a2)
{
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  int *v6; // rdx
  int *v7; // r9
  int v8; // eax
  int v9; // xmm0_4
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // xmm1_4
  int v13; // xmm2_4
  int v14; // xmm3_4
  int v15; // xmm1_4
  int v16; // xmm2_4

  v3 = 5210LL * a1;
  if ( dword_16E6A3C64[v3] != 13 )
  {
    v4 = dword_16E6A3C6C[v3];
    if ( v4 > 0 )
    {
      v5 = v4 - a2;
      dword_16E6A3C6C[v3] = v5;
      if ( v5 <= 0 )
      {
        v6 = &dword_16E6A3CEC[v3];
        v7 = &dword_16E6A3C8C[v3];
        if ( dword_163D75B60 )
        {
          v8 = dword_191541414;
          v9 = 0;
          v10 = dword_196199564;
          v11 = (__int64)dword_196199564 << 7;
          *(_DWORD *)((char *)&unk_195999560 + v11) = 4;
          *(_DWORD *)((char *)&unk_195999564 + v11) = v8;
          *(int *)((char *)&dword_195999580 + v11) = a1;
          *(_QWORD *)((char *)&dword_195999584 + v11) = 2;
          if ( v7 )
          {
            v12 = v7[2];
            v13 = v7[1];
            v14 = *v7;
          }
          else
          {
            v12 = 0;
            v13 = 0;
            v14 = 0;
          }
          *(_DWORD *)((char *)&qword_195999568 + v11) = v14;
          *(_DWORD *)((char *)&qword_195999568 + v11 + 4) = v13;
          *(int *)((char *)&dword_195999570 + v11) = v12;
          if ( v6 )
          {
            v9 = v6[2];
            v15 = v6[1];
            v16 = *v6;
          }
          else
          {
            v15 = 0;
            v16 = 0;
          }
          *(_DWORD *)((char *)&qword_195999574 + v11) = v16;
          *(_DWORD *)((char *)&qword_195999574 + v11 + 4) = v15;
          *(int *)((char *)&dword_19599957C + v11) = v9;
          dword_196199564 = v10 + 1;
          HIWORD(dword_196199564) = 0;
        }
      }
    }
  }
}

