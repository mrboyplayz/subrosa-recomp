/* Address: 0x14023e370 | Name: sub_14023E370 | Size: 214 bytes */
__int64 __fastcall sub_14023E370(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-4E8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-4C0h]
  __int128 NumberOfCharsWritten; // [rsp+30h] [rbp-4B8h] BYREF
  _WORD Buffer[576]; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 v14; // [rsp+4C0h] [rbp-28h]

  v6 = ((__int64 (__fastcall *)(__int64))GetStdHandle)(4294967284LL);
  v7 = v6;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (unsigned int)((__int64 (__fastcall *)(__int64))GetFileType)(v6) == 2 )
  {
    LODWORD(v11) = a3;
    if ( (int)swprintf_0(Buffer, 576, L"Assertion failed: %Ts, file %Ts, line %d\n", a1, a2, v11) >= 0 )
    {
      v8 = -1;
      do
        ++v8;
      while ( Buffer[v8] );
      LODWORD(NumberOfCharsWritten) = 0;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, _WORD *, _QWORD, __int128 *, _QWORD))WriteConsoleW)(
                           v7,
                           Buffer,
                           (unsigned int)v8,
                           &NumberOfCharsWritten,
                           0) )
        abort();
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v14);
}

