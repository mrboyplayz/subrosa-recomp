/* Address: 0x140257b98 | Name: ?ungetwc_text_mode_nolock@@YAGGV__crt_stdio_stream@@@Z | Size: 312 bytes */
__int64 __fastcall ungetwc_text_mode_nolock(unsigned __int16 a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE *v5; // rdx
  char v6; // al
  int v7; // edx
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  char v10; // al
  __int64 v12; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int16 v13; // [rsp+20h] [rbp-20h]
  int SizeConverted; // [rsp+28h] [rbp-18h] BYREF
  char MbCh[4]; // [rsp+2Ch] [rbp-14h] BYREF
  char v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+38h] [rbp-8h]

  v13 = a1;
  if ( fileno((FILE *)a2) == -1 || fileno((FILE *)a2) == -2 )
  {
    v5 = &unk_1403022C0;
  }
  else
  {
    v4 = (__int64)fileno((FILE *)a2) >> 6;
    v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (fileno((FILE *)a2) & 0x3F));
  }
  v6 = v5[57];
  SizeConverted = 0;
  *(_DWORD *)MbCh = 0;
  v16 = 0;
  if ( v6 )
  {
    v7 = 2;
    MbCh[1] = HIBYTE(v13);
    SizeConverted = 2;
    MbCh[0] = a1;
  }
  else
  {
    if ( (unsigned int)CDialog::CreateIndirect(
                         (CDialog *)&SizeConverted,
                         (const struct DLGTEMPLATE *)MbCh,
                         (struct CWnd *)5,
                         (void *)a1) )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v17);
    v7 = SizeConverted;
  }
  v8 = v7 + *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 < v8 )
  {
    if ( *(_DWORD *)(a2 + 16) || v7 > *(_DWORD *)(a2 + 32) )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v17);
    *(_QWORD *)a2 = v8;
  }
  v9 = v7 - 1;
  if ( v7 - 1 >= 0 )
  {
    do
    {
      --*(_QWORD *)a2;
      v10 = MbCh[v9--];
      **(_BYTE **)a2 = v10;
    }
    while ( v9 >= 0 );
    v7 = SizeConverted;
  }
  *(_DWORD *)(a2 + 16) += v7;
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v17);
}

