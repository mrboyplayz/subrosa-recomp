/* Address: 0x1400e3b90 | Name: sub_1400E3B90 | Size: 37 bytes */
__int64 (__fastcall *__fastcall sub_1400E3B90(__int64 (__fastcall *a1)(_QWORD)))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = (__int64 (__fastcall *)(_QWORD, _QWORD))a1;
  if ( unk_14040488C )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD))a1("glClipControl");
    unk_140404A60 = result;
  }
  return result;
}

