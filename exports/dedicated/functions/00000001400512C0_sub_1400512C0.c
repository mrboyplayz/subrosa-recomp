/* Address: 0x1400512c0 | Name: sub_1400512C0 | Size: 144 bytes */
__int64 __fastcall sub_1400512C0(__int64 a1)
{
  int v1; // r10d
  char *v2; // r9
  __int64 i; // rdx
  char v4; // r8
  unsigned int v6; // [rsp+20h] [rbp-228h]
  char Buffer[512]; // [rsp+30h] [rbp-218h] BYREF

  v1 = 0;
  v2 = Buffer;
  for ( i = 0; i < 16; ++i )
  {
    v4 = *(_BYTE *)(i + a1);
    if ( !v4 )
      break;
    if ( (unsigned __int8)(v4 - 48) <= 9u )
    {
      ++v1;
      *v2++ = v4;
    }
  }
  if ( (unsigned __int64)v1 >= 0x200 )
    _report_rangecheckfailure(a1, i);
  Buffer[v1] = 0;
  sub_1400DBFB0(Buffer, "%u");
  return v6;
}

