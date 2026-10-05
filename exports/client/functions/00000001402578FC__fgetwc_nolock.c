/* Address: 0x1402578fc | Name: _fgetwc_nolock | Size: 419 bytes */
__int64 __fastcall fgetwc_nolock(FILE *Stream)
{
  __int64 v2; // rsi
  char *v3; // rbp
  __int64 v4; // rbx
  _BYTE *v5; // rdx
  unsigned __int16 *v6; // rbx
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int16 v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+52h] [rbp+Ah] BYREF
  __int64 DstCh; // [rsp+58h] [rbp+10h] BYREF
  char SrcCh; // [rsp+60h] [rbp+18h] BYREF
  char v17; // [rsp+61h] [rbp+19h]

  v2 = 1;
  v3 = (char *)&unk_1403022C0;
  if ( (*((_DWORD *)Stream + 5) & 0x1000) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      v5 = &unk_1403022C0;
    }
    else
    {
      v4 = (__int64)fileno(Stream) >> 6;
      v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( v5[57] )
    {
      v6 = &v13;
      while ( 1 )
      {
        v7 = getc_nolock(Stream);
        if ( v7 == -1 )
          break;
        *(_BYTE *)v6 = v7;
        v6 = (unsigned __int16 *)((char *)v6 + 1);
        if ( v6 == (unsigned __int16 *)&v14 )
          return v13;
      }
      return 0xFFFF;
    }
  }
  if ( (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    goto LABEL_25;
  if ( fileno(Stream) != -1 && fileno(Stream) != -2 )
  {
    v9 = (__int64)fileno(Stream) >> 6;
    v3 = (char *)(*(_QWORD *)&dword_140404A6C[2 * v9 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
  }
  if ( v3[56] >= 0 )
  {
LABEL_25:
    v12 = *((_DWORD *)Stream + 4);
    if ( v12 < 2 )
    {
      return _acrt_stdio_refill_and_read_wide_nolock(Stream);
    }
    else
    {
      *((_DWORD *)Stream + 4) = v12 - 2;
      result = **(unsigned __int16 **)Stream;
      *(_QWORD *)Stream += 2LL;
    }
  }
  else
  {
    v10 = getc_nolock(Stream);
    if ( v10 == -1 )
      return 0xFFFF;
    SrcCh = v10;
    if ( (sub_140256DC0()[(unsigned __int8)v10] & 0x8000u) != 0 )
    {
      v11 = getc_nolock(Stream);
      if ( v11 == -1 )
      {
        sub_14020CFB8(SrcCh, Stream);
        return 0xFFFF;
      }
      v17 = v11;
      v2 = 2;
    }
    if ( (unsigned int)MEMORY[0x140254140](&DstCh, &SrcCh, v2) == -1 )
    {
      *errno() = 42;
      return 0xFFFF;
    }
    return (unsigned __int16)DstCh;
  }
  return result;
}

