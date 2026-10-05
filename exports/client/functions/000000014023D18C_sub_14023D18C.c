/* Address: 0x14023d18c | Name: sub_14023D18C | Size: 206 bytes */
__int64 __fastcall sub_14023D18C(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return -1;
  }
  v6 = sub_14023D0A8(a1, a3);
  if ( v6 )
  {
    LODWORD(ThreadId) = 0;
    v7 = ((__int64 (__fastcall *)(_QWORD, __int64, void (__fastcall __noreturn *)(__int64), _QWORD *, int, __int64 *))CreateThread)(
           0,
           v3,
           StartAddress,
           v6,
           4,
           &ThreadId);
    v8 = v7;
    if ( v7 )
    {
      v6[2] = v7;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64))ResumeThread)(v7) != -1 )
      {
        v6 = nullptr;
        goto LABEL_7;
      }
    }
    v9 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v9);
  }
  v8 = -1;
LABEL_7:
  if ( v6 )
  {
    if ( v6[2] )
      ((void (*)(void))CloseHandle)();
    if ( v6[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(v6);
  }
  return v8;
}

