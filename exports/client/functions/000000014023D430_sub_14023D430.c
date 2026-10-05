/* Address: 0x14023d430 | Name: sub_14023D430 | Size: 196 bytes */
__int64 __fastcall sub_14023D430(int a1, int a2, int a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-298h] BYREF
  _WORD v12[288]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v13; // [rsp+270h] [rbp-28h]

  MEMORY[0x1401FCD30](v12, 0, 0x240u);
  sub_14023D5B8((unsigned int)v12, 576, a1, a2, a3, a4);
  v8 = unknown_libname_891(v12, "Microsoft Visual C++ Runtime Library", 73746) - 3;
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

