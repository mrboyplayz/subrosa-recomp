/* Address: 0x14024d07c | Name: _dpcomp | Size: 99 bytes */
int __cdecl dpcomp(double X, double Y)
{
  int v2; // ebx
  double Px; // [rsp+30h] [rbp+8h] BYREF
  double v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = Y;
  Px = X;
  v2 = 2;
  if ( dtest(&Px) == 2 || dtest(&v5) == 2 )
    return 0;
  if ( v5 > Px )
    return 1;
  if ( Px > v5 )
    return 4;
  return v2;
}

