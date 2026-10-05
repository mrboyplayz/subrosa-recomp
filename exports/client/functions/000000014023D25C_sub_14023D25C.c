/* Address: 0x14023d25c | Name: sub_14023D25C | Size: 212 bytes */
__int64 __fastcall sub_14023D25C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int128 ThreadId; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  if ( !a3 )
  {
    *errno() = 22;
    sub_14024CF6C(v8);
    return 0;
  }
  v10 = sub_14023D0A8(a3, a4);
  if ( v10 )
  {
    v11 = ((__int64 (__fastcall *)(__int64, __int64, void (__fastcall __noreturn *)(__int64), _QWORD *, _DWORD, __int128 *))CreateThread)(
            a1,
            v6,
            unknown_libname_719,
            v10,
            a5,
            &ThreadId);
    if ( v11 )
    {
      if ( a6 )
        *a6 = ThreadId;
      v10 = nullptr;
      goto LABEL_7;
    }
    v12 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v12);
  }
  v11 = 0;
LABEL_7:
  if ( v10 )
  {
    if ( v10[2] )
      ((void (*)(void))CloseHandle)();
    if ( v10[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(v10);
  }
  return v11;
}

