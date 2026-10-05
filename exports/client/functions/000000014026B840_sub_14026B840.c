/* Address: 0x14026b840 | Name: sub_14026B840 | Size: 59 bytes */
__int64 sub_14026B840()
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(const __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
             L"CONOUT$",
             0x40000000,
             3,
             0,
             3,
             0,
             0);
  hObject = result;
  return result;
}

