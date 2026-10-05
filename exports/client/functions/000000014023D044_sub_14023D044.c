/* Address: 0x14023d044 | Name: sub_14023D044 | Size: 97 bytes */
void __fastcall __noreturn sub_14023D044(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  v2 = sub_140255BEC();
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 960);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 32) )
        sub_14024F784();
      if ( (unsigned __int64)(*(_QWORD *)(v3 + 16) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        ((void (*)(void))CloseHandle)();
      v4 = *(_QWORD *)(v3 + 24);
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        ((void (__fastcall __noreturn *)(__int64, _QWORD))FreeLibraryAndExitThread)(v4, a1);
    }
  }
  ((void (__fastcall __noreturn *)(_QWORD))ExitThread)(a1);
}

