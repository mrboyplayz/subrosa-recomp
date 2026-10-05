/* Address: 0x14023e008 | Name: sub_14023E008 | Size: 335 bytes */
void __fastcall __noreturn sub_14023E008(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // rax
  char *v10; // rax
  int v11; // [rsp+28h] [rbp-D8h]
  __int64 NumberOfCharsWritten; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  char *v17; // [rsp+58h] [rbp-A8h] BYREF
  _WORD Buffer[576]; // [rsp+60h] [rbp-A0h] BYREF

  v15 = a1;
  v14 = a2;
  v13 = a3;
  v6 = ((__int64 (__fastcall *)(__int64))GetStdHandle)(4294967284LL);
  v7 = v6;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (unsigned int)((__int64 (__fastcall *)(__int64))GetFileType)(v6) == 2 )
  {
    v11 = a3;
    if ( (int)swprintf_0(Buffer, 576, L"Assertion failed: %Ts, file %Ts, line %d\n", a1, a2, v11) >= 0 )
    {
      v8 = -1;
      do
        ++v8;
      while ( Buffer[v8] );
      LODWORD(NumberOfCharsWritten) = 0;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, _WORD *, _QWORD, __int64 *, _QWORD))WriteConsoleW)(
                           v7,
                           Buffer,
                           (unsigned int)v8,
                           &NumberOfCharsWritten,
                           0) )
        abort();
    }
  }
  if ( (*((_DWORD *)MEMORY[0x14020B528](2u) + 5) & 0x4C0) == 0 )
  {
    v9 = MEMORY[0x14020B528](2u);
    setvbuf(v9, 0, 4);
  }
  v16 = sub_14023E450(0);
  v17 = MEMORY[0x14020B528](2u);
  sub_14023E178(&v17, &v16, &v15, &v14, &v13);
  v10 = MEMORY[0x14020B528](2u);
  fflush((FILE *)v10);
  abort();
}

