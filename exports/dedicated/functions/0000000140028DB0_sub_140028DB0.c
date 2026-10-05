/* Address: 0x140028db0 | Name: sub_140028DB0 | Size: 39 bytes */
size_t (__cdecl *sub_140028DB0())(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  qword_19AAD8648 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))fread;
  qword_19AAD8640 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))fwrite;
  dword_1406A6760 = 0;
  return fwrite;
}

