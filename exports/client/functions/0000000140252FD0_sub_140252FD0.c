/* Address: 0x140252fd0 | Name: sub_140252FD0 | Size: 51 bytes */
__int64 __fastcall sub_140252FD0(void *const a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 NewFilePointer; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned int)((__int64 (__fastcall *)(void *const, __int64, __int64 *, _QWORD))SetFilePointerEx)(
                       a1,
                       a2,
                       &NewFilePointer,
                       a3) )
    return NewFilePointer;
  v3 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v3);
  return -1;
}

