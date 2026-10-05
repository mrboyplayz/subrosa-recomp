/* Address: 0x14026a18c | Name: __acrt_fenv_set_status | Size: 131 bytes */
__int64 __fastcall _acrt_fenv_set_status(int a1)
{
  int v1; // et0
  int v2; // r8d

  v1 = _mm_getcsr();
  v2 = (2 * ((a1 & 0x20000000) != 0)) & 0x3F
     | ((a1 & 0x10000000) != 0)
     | ((unsigned __int8)(4 * ((a1 & 0x8000000) != 0))
      | (unsigned __int8)((8 * ((a1 & 0x4000000) != 0)) | (16 * ((a1 & 0x2000000) != 0)) | (32 * (HIBYTE(a1) & 1))))
     & 0x3F;
  _mm_setcsr(v2 | v1 & 0xFFFFFFC0);
  return v2 | v1 & 0xFFFFFFC0;
}

