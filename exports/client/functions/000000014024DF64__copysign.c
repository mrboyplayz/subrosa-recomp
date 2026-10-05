/* Address: 0x14024df64 | Name: _copysign | Size: 52 bytes */
double __cdecl copysign(double Number, double Sign)
{
  if ( (__int64)(*(_QWORD *)&Number ^ *(_QWORD *)&Sign) < 0 )
    *(_QWORD *)&Number ^= 0x8000000000000000uLL;
  return Number;
}

