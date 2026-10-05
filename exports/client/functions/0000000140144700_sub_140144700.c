/* Address: 0x140144700 | Name: sub_140144700 | Size: 684 bytes */
void sub_140144700()
{
  __int64 v0; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  char *v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rbx
  char *v14; // rdx
  char v15; // cl
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx

  v0 = MEMORY[0x140198E75]("gamecontrollerdb.txt", "rb");
  MEMORY[0x140198F65](v0, 1);
  dword_140404A6C[285101109] = 0;
  dword_140404A6C[285101233] = 0;
  dword_140404A6C[285101357] = 0;
  dword_140404A6C[285101481] = 0;
  dword_140404A6C[285101605] = 0;
  dword_140404A6C[285101729] = 0;
  dword_140404A6C[285101853] = 0;
  dword_140404A6C[285101977] = 0;
  dword_140404A6C[285102101] = 0;
  dword_140404A6C[285102225] = 0;
  dword_140404A6C[285102349] = 0;
  dword_140404A6C[285102473] = 0;
  dword_140404A6C[285102597] = 0;
  dword_140404A6C[285102721] = 0;
  dword_140404A6C[285102845] = 0;
  dword_140404A6C[285102969] = 0;
  dword_140404A6C[285103093] = 0;
  dword_140404A6C[285103217] = 0;
  dword_140404A6C[285103341] = 0;
  dword_140404A6C[285103465] = 0;
  dword_140404A6C[285103589] = 0;
  dword_140404A6C[285103713] = 0;
  dword_140404A6C[285103837] = 0;
  dword_140404A6C[285103961] = 0;
  dword_140404A6C[285104085] = 0;
  dword_140404A6C[285104209] = 0;
  dword_140404A6C[285104333] = 0;
  dword_140404A6C[285104457] = 0;
  dword_140404A6C[285104581] = 0;
  dword_140404A6C[285104705] = 0;
  dword_140404A6C[285104829] = 0;
  dword_140404A6C[285104953] = 0;
  dword_140404A6C[285105213] = MEMORY[0x140198F17]();
  v1 = 0;
  if ( (int)dword_140404A6C[285105213] > 0 )
  {
    v2 = 0;
    do
    {
      if ( (int)v1 < 32 )
      {
        if ( (unsigned int)MEMORY[0x140198F6B](v1) )
        {
          v3 = MEMORY[0x140198F71](v1);
          *(_QWORD *)&dword_140404A6C[v2 + 285105085] = v3;
          if ( v3 )
          {
            v4 = MEMORY[0x140198F7D](v3);
            *(_QWORD *)&dword_140404A6C[v2 + 285105149] = v4;
            v5 = MEMORY[0x140198F2F](v4);
            if ( v5 > 31 )
              v5 = 31;
            v6 = MEMORY[0x140198F1D](v1);
            v7 = 124LL * v5;
            v8 = (char *)&dword_140404A6C[285101198] + v7 * 4 - v6;
            do
            {
              v9 = *(_BYTE *)v6;
              v8[v6] = *(_BYTE *)v6;
              ++v6;
            }
            while ( v9 );
            dword_140404A6C[v7 + 285101115] = 6;
            dword_140404A6C[v7 + 285101132] = 16;
            dword_140404A6C[v7 + 285101165] = 0;
            dword_140404A6C[v7 + 285101109] = 1;
          }
        }
        else
        {
          v10 = MEMORY[0x140198F23](v1);
          *(_QWORD *)&dword_140404A6C[v2 + 285105149] = v10;
          if ( v10 )
          {
            v11 = MEMORY[0x140198F2F](v10);
            if ( v11 > 31 )
              v11 = 31;
            v12 = MEMORY[0x140198F1D](v1);
            v13 = 124LL * v11;
            v14 = (char *)&dword_140404A6C[285101198] + v13 * 4 - v12;
            do
            {
              v15 = *(_BYTE *)v12;
              v14[v12] = *(_BYTE *)v12;
              ++v12;
            }
            while ( v15 );
            v16 = MEMORY[0x140198F35](*(_QWORD *)&dword_140404A6C[v2 + 285105149]);
            v17 = *(_QWORD *)&dword_140404A6C[v2 + 285105149];
            dword_140404A6C[v13 + 285101115] = v16;
            v18 = MEMORY[0x140198F41](v17);
            v19 = *(_QWORD *)&dword_140404A6C[v2 + 285105149];
            dword_140404A6C[v13 + 285101132] = v18;
            dword_140404A6C[v13 + 285101165] = MEMORY[0x140198F3B](v19);
            dword_140404A6C[v13 + 285101109] = 1;
          }
        }
      }
      ++v1;
      v2 += 2;
    }
    while ( (int)v1 < (int)dword_140404A6C[285105213] );
  }
  JUMPOUT(0x140198F4DLL);
}

