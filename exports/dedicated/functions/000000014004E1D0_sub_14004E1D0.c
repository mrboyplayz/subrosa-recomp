/* Address: 0x14004e1d0 | Name: sub_14004E1D0 | Size: 329 bytes */
void sub_14004E1D0()
{
  int *v0; // rbx
  char *v1; // r14
  __int64 v2; // r15
  int v3; // eax
  unsigned __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  size_t v7; // rsi
  __int64 v8; // rdi

  v0 = (int *)&unk_195629310;
  v1 = (char *)&unk_19562931C;
  v2 = 0x4000;
  do
  {
    if ( *(v0 - 4) && !*(v0 - 3) )
    {
      v3 = *(v0 - 2);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v5 = v0[2];
          if ( v5 > 63 )
          {
            v5 = 63;
            v0[2] = 63;
          }
          v6 = *v0;
          v7 = v5;
          v8 = (110 * v6 + v0[1]) << 6;
          memcpy((char *)&unk_19025F434 + v8, v1, v5);
          *((_BYTE *)&unk_19025F0C0 + v8 + v7 + 884) = 0;
          memcpy((char *)&unk_19025FC34 + v8, v1 + 64, v7);
          *((_DWORD *)&unk_19025F0C0 + 1760 * v6 + 208) = 0;
        }
      }
      else
      {
        v4 = 7040LL * *v0;
        memcpy(&qword_19025F428[8 * v0[1] + v4 / 8], v1, v0[2]);
        *((_BYTE *)&unk_19025F0C0 + v4 + 1895) = 0;
        *(_DWORD *)((char *)&unk_19025F0C0 + v4 + 832) = 0;
      }
      *(v0 - 3) = 1;
    }
    v1 += 156;
    v0 += 39;
    --v2;
  }
  while ( v2 );
}

