/* Address: 0x14006ca30 | Name: sub_14006CA30 | Size: 303 bytes */
__int64 __fastcall sub_14006CA30(unsigned int a1, unsigned int a2)
{
  dword_140404A6C[433435853] = a1;
  dword_140404A6C[433435854] = a2;
  dword_140404A6C[433435865] = 0;
  free(*(void **)&dword_140404A6C[433435863]);
  *(_QWORD *)&dword_140404A6C[433435863] = j__malloc_base(4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  MEMORY[0x1401FCD30](
    *(_QWORD *)&dword_140404A6C[433435863],
    255,
    4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  unk_140404060(1, &dword_140404A6C[433435861]);
  unk_140404050(3553, dword_140404A6C[433435861]);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    6408,
    dword_140404A6C[433435853],
    dword_140404A6C[433435854],
    0,
    6408,
    5121,
    *(_QWORD *)&dword_140404A6C[433435863]);
  return 0;
}

