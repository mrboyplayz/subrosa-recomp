/* Address: 0x140269ff0 | Name: __acrt_fenv_get_status | Size: 83 bytes */
__int64 _acrt_fenv_get_status()
{
  int v0; // edx
  char v2; // [rsp+8h] [rbp+8h]

  v2 = _mm_getcsr();
  v0 = ((unsigned __int8)(v2 & 0x3F) >> 5)
     | (16 * (v2 & 1))
     | (2 * (((unsigned __int8)(v2 & 0x3F) >> 4) & 1))
     | (4 * (((unsigned __int8)(v2 & 0x3F) >> 3) & 1))
     | (8 * (((unsigned __int8)(v2 & 0x3F) >> 2) & 1))
     | (32 * (((unsigned __int8)(v2 & 0x3F) >> 1) & 1));
  return v0 | (unsigned int)(v0 << 24);
}

