/* Address: 0x14023d0a8 | Name: sub_14023D0A8 | Size: 93 bytes */
_QWORD *__fastcall sub_14023D0A8(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  v4 = (_QWORD *)calloc_base(1, 40);
  free_base(nullptr);
  result = nullptr;
  if ( v4 )
  {
    *v4 = a1;
    v4[1] = a2;
    ((void (__fastcall *)(__int64, __int64, _QWORD *))GetModuleHandleExW)(4, a1, v4 + 3);
    return v4;
  }
  return result;
}

