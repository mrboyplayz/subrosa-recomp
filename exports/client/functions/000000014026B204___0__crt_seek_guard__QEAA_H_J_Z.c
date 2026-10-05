/* Address: 0x14026b204 | Name: ??0__crt_seek_guard@@QEAA@H_J@Z | Size: 85 bytes */
__crt_seek_guard *__fastcall __crt_seek_guard::__crt_seek_guard(__crt_seek_guard *this, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax

  *(_QWORD *)this = lseeki64_nolock(a2, 0, 1);
  v6 = lseeki64_nolock(a2, 0, 2);
  *((_QWORD *)this + 1) = v6;
  *((_QWORD *)this + 2) = a3 - v6;
  *((_DWORD *)this + 6) = a2;
  return this;
}

