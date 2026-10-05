/* Address: 0x14023d4f4 | Name: sub_14023D4F4 | Size: 196 bytes */
__int64 __fastcall sub_14023D4F4(int a1, int a2, int a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-4D8h] BYREF
  _WORD v12[576]; // [rsp+30h] [rbp-4A8h] BYREF
  __int64 v13; // [rsp+4B0h] [rbp-28h]

  MEMORY[0x1401FCD30](v12, 0, 0x480u);
  sub_14023DA68((unsigned int)v12, 576, a1, a2, a3, a4);
  v8 = unknown_libname_892(v12, L"Microsoft Visual C++ Runtime Library", 73746) - 3;
  if ( !v8 )
  {
    sub_14025BC64(22);
    COleServerDoc::NotifyClosed((COleServerDoc *)3);
    __debugbreak();
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      abort();
  }
  else
  {
    __debugbreak();
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v11 ^ v13);
}

