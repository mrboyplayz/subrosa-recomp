/* Address: 0x140269cd8 | Name: ?to_machine_sse_control@@YA?AW4__acrt_fenv_machine_sse_control@@W4__acrt_fenv_abstract_control@@@Z | Size: 311 bytes */
__int16 __fastcall to_machine_sse_control(unsigned int a1)
{
  __int16 v1; // r9
  unsigned int v2; // edx
  int v3; // ecx
  __int16 v4; // r10
  int v5; // eax

  v1 = 0;
  v2 = ((a1 >> 2) | a1 & 0xC03FFFFF) >> 22;
  v3 = a1 & 0xC00;
  switch ( v3 )
  {
    case 1024:
      v4 = -32704;
      break;
    case 2048:
      v4 = 64;
      break;
    case 3072:
      v4 = 0x8000;
      break;
    default:
      v4 = 0;
      break;
  }
  v5 = v2 & 0x300;
  if ( (v2 & 0x300) != 0 )
  {
    switch ( v5 )
    {
      case 256:
        v1 = 0x2000;
        break;
      case 512:
        v1 = 0x4000;
        break;
      case 768:
        v1 = 24576;
        break;
    }
  }
  return v1
       | v4
       | (((v2 >> 4) & 1) << 7)
       | (((v2 >> 5) & 1) << 8)
       | (((v2 >> 3) & 1) << 9)
       | (((v2 >> 2) & 1) << 10)
       | (((v2 >> 1) & 1) << 11)
       | ((v2 & 1) << 12);
}

