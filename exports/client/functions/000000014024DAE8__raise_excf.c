/* Address: 0x14024dae8 | Name: _raise_excf | Size: 42 bytes */
__int64 __fastcall raise_excf(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 1);
}

