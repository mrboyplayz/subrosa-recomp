/* Address: 0x140047d70 | Name: sub_140047D70 | Size: 230 bytes */
float __fastcall sub_140047D70(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // r9d
  int v4; // r10d
  char v5; // r8
  float v7; // [rsp+20h] [rbp-428h]
  char Buffer[1024]; // [rsp+30h] [rbp-418h] BYREF

  v2 = (unsigned int)dword_195899540;
  v3 = dword_195899544;
  if ( dword_195899540 < dword_195899544 )
  {
    do
    {
      a2 = *((unsigned __int8 *)&dword_195899540 + (int)v2 + 8);
      if ( (_BYTE)a2 != 47 && (char)a2 > 44 && (char)a2 < 58 )
        break;
      v2 = (unsigned int)(v2 + 1);
      dword_195899540 = v2;
    }
    while ( (int)v2 < dword_195899544 );
  }
  v4 = 0;
  if ( (int)v2 < dword_195899544 )
  {
    a2 = 0;
    do
    {
      if ( a2 >= 255 )
        break;
      v5 = *((_BYTE *)&dword_195899540 + (int)v2 + 8);
      if ( (unsigned __int8)(v5 - 48) > 9u && (unsigned __int8)(v5 - 45) > 1u )
        break;
      v2 = (unsigned int)(v2 + 1);
      Buffer[a2++] = v5;
      dword_195899540 = v2;
      ++v4;
    }
    while ( (int)v2 < v3 );
  }
  if ( (unsigned __int64)v4 >= 0x400 )
    _report_rangecheckfailure(v2, a2);
  Buffer[v4] = 0;
  sub_1400DBFB0(Buffer, "%f");
  return v7;
}

