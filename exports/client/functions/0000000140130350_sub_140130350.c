/* Address: 0x140130350 | Name: sub_140130350 | Size: 598 bytes */
void __fastcall sub_140130350(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  signed int v3; // edi
  unsigned int v6; // ebp
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // esi
  char v10; // al
  __int64 v11; // r9
  int v12; // eax

  v3 = dword_140404A6C[289301092];
  v6 = a1;
  if ( (int)dword_140404A6C[289301093] > 0 )
  {
    v3 = dword_140404A6C[289301092] + 1;
    dword_140404A6C[289301093] = 0;
    ++dword_140404A6C[289301092];
  }
  if ( v3 > 1200 )
  {
    v7 = 0;
    dword_140404A6C[291021664] = 0;
    v8 = 0;
    v9 = (v3 >> 10) + 1;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        *(_QWORD *)&dword_140404A6C[291021662] = 0;
        if ( v7 )
        {
          unk_1402B26C0 = dword_140404A6C[291021665];
          LOWORD(dword_140404A6C[289333870]) = dword_140404A6C[291021666];
        }
        else
        {
          dword_140404A6C[291021665] = unk_1402B26C0;
          LOWORD(dword_140404A6C[291021666]) = dword_140404A6C[289333870];
          BYTE2(dword_140404A6C[291021666]) = v8;
        }
        v10 = HIBYTE(dword_140404A6C[291021666]);
        v11 = (unsigned int)v3;
        if ( !v7 )
          v10 = v9;
        dword_140404A6C[291021661] = 8;
        HIBYTE(dword_140404A6C[291021666]) = v10;
        v12 = v3;
        if ( v3 > 1024 )
          v11 = 1024;
        v3 -= 1024;
        if ( v12 <= 1024 )
          v3 = 0;
        sub_14015AFD0(0, &dword_140404A6C[256 * v8 + 289301094], 1, v11);
        if ( v6 )
        {
          dword_140404A6C[289301087] = htonl(v6);
          HIWORD(dword_140404A6C[289301086]) = htons(a2);
          sendto(
            (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
            &dword_140404A6C[291021665],
            dword_140404A6C[291021661],
            0,
            &dword_140404A6C[289301086],
            dword_140404A6C[289301090]);
        }
        else
        {
          sub_140198DC0(a3, &dword_140404A6C[291021665], dword_140404A6C[291021661]);
        }
        if ( ++v8 >= v9 )
          break;
        v7 = dword_140404A6C[291021664];
      }
    }
    ++LOWORD(dword_140404A6C[289333870]);
  }
  else if ( (_DWORD)a1 )
  {
    if ( dword_140404A6C[dword_140404A6C[289301069] + 289301070] )
    {
      dword_140404A6C[289301087] = htonl(a1);
      HIWORD(dword_140404A6C[289301086]) = htons(a2);
      sendto(
        (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
        &dword_140404A6C[289301094],
        dword_140404A6C[289301092],
        0,
        &dword_140404A6C[289301086],
        dword_140404A6C[289301090]);
    }
  }
  else
  {
    sub_140198DC0(a3, &dword_140404A6C[289301094], (unsigned int)v3);
  }
}

