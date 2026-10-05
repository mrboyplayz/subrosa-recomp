/* Address: 0x1400bc790 | Name: sub_1400BC790 | Size: 553 bytes */
void __fastcall sub_1400BC790(u_long hostlong, u_short a2)
{
  int v2; // edi
  int v5; // edx
  int v6; // ebx
  int v7; // esi
  char v8; // al
  __int64 v9; // r9
  int v10; // eax

  v2 = qword_197BC725C;
  if ( *(&qword_197BC725C + 1) > 0 )
  {
    v2 = ++qword_197BC725C;
    *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
  }
  if ( v2 > 1200 )
  {
    v5 = 0;
    v6 = 0;
    dword_19A257E2C = 0;
    v7 = (v2 >> 10) + 1;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        *(_QWORD *)(&qword_19A257E20 + 1) = 0;
        if ( v5 )
        {
          unk_140104008 = *(_DWORD *)dword_19A257E30;
          word_197BE7284 = word_19A257E34;
        }
        else
        {
          *(_DWORD *)dword_19A257E30 = unk_140104008;
          word_19A257E34 = word_197BE7284;
          byte_19A257E36 = v6;
        }
        v8 = byte_19A257E37;
        v9 = (unsigned int)v2;
        if ( !v5 )
          v8 = v7;
        qword_19A257E20 = 8;
        byte_19A257E37 = v8;
        v10 = v2;
        if ( v2 > 1024 )
          v9 = 1024;
        v2 -= 1024;
        if ( v10 <= 1024 )
          v2 = 0;
        sub_1400DBF10(0, &dword_197BC7264[1024 * v6], 1, v9);
        if ( hostlong )
        {
          *(_DWORD *)&to.sa_data[2] = htonl(hostlong);
          *(_WORD *)to.sa_data = htons(a2);
          sendto(dword_197BC7200[dword_197BC7200[0] + 9], dword_19A257E30, qword_19A257E20, 0, &to, tolen);
        }
        if ( ++v6 >= v7 )
          break;
        v5 = dword_19A257E2C;
      }
    }
    ++word_197BE7284;
  }
  else if ( hostlong )
  {
    if ( dword_197BC7200[dword_197BC7200[0] + 1] )
    {
      *(_DWORD *)&to.sa_data[2] = htonl(hostlong);
      *(_WORD *)to.sa_data = htons(a2);
      sendto(dword_197BC7200[dword_197BC7200[0] + 9], dword_197BC7264, qword_197BC725C, 0, &to, tolen);
    }
  }
}

