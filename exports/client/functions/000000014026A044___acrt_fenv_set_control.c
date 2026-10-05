/* Address: 0x14026a044 | Name: __acrt_fenv_set_control | Size: 327 bytes */
__int64 __fastcall _acrt_fenv_set_control(unsigned int a1)
{
  __int16 v1; // di
  unsigned int v2; // r8d
  int v3; // ecx
  __int16 v4; // r11
  __int16 v5; // r9
  __int16 v6; // bx
  __int16 v7; // r10
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // dx
  __int16 v11; // dx
  __int16 v12; // dx
  __int16 v13; // dx
  __int16 v14; // ax
  __int16 v15; // dx
  __int64 result; // rax

  v1 = 1024;
  v2 = (a1 & 0xC03FFFFF | (a1 >> 2) & 0xFC00000) >> 22;
  v3 = a1 & 0xC00;
  v4 = 2048;
  switch ( v3 )
  {
    case 1024:
      v5 = -32704;
      break;
    case 2048:
      v5 = 64;
      break;
    case 3072:
      v5 = 0x8000;
      break;
    default:
      v5 = 0;
      break;
  }
  v6 = 256;
  v7 = 512;
  v8 = v2 & 0x300;
  if ( (v2 & 0x300) != 0 )
  {
    switch ( v8 )
    {
      case 256:
        v9 = 0x2000;
        goto LABEL_16;
      case 512:
        v9 = 0x4000;
        goto LABEL_16;
      case 768:
        v9 = 24576;
        goto LABEL_16;
    }
  }
  v9 = 0;
LABEL_16:
  if ( (v2 & 1) != 0 )
    v10 = 4096;
  else
    v10 = 0;
  if ( (v2 & 2) == 0 )
    v4 = 0;
  v11 = v4 | v10;
  if ( (v2 & 4) == 0 )
    v1 = 0;
  v12 = v1 | v11;
  if ( (v2 & 8) == 0 )
    v7 = 0;
  v13 = v7 | v12;
  if ( (v2 & 0x10) != 0 )
    v14 = 128;
  else
    v14 = 0;
  v15 = v14 | v13;
  if ( (v2 & 0x20) == 0 )
    v6 = 0;
  result = (unsigned __int16)(v5 | v9 | v6 | v15) & 0xFFC0;
  _mm_setcsr(result | _mm_getcsr() & 0xFFFF003F);
  return result;
}

