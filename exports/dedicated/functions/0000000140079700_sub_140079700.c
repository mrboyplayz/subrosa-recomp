/* Address: 0x140079700 | Name: sub_140079700 | Size: 673 bytes */
__int64 sub_140079700()
{
  char *v0; // r15
  int i; // r14d
  int v2; // esi
  __int64 result; // rax
  __int64 v4; // rbp
  int j; // edi
  int k; // ebx

  v0 = (char *)&unk_17AE3D2B0;
  for ( i = 0; i < 0x4000; i += 8 )
  {
    v2 = 0;
    result = (__int64)v0;
    do
    {
      v4 = result + 4;
      for ( j = 0; j < 8; ++j )
      {
        for ( k = 0; k < 8; ++k )
          sub_14007A520((unsigned int)(v2 + k), (unsigned int)(i + j));
      }
      v2 += 8;
      result = v4;
    }
    while ( v2 < 0x4000 );
    v0 += 8196;
  }
  if ( !dword_1915FDF00 )
  {
    sub_14007A8F0(2);
    sub_14007A8F0(40);
    sub_14007A8F0(32);
    sub_14007A8F0(46);
    sub_14007A8F0(45);
    sub_14007A8F0(47);
    sub_14007A8F0(28);
    sub_14007A8F0(10);
    sub_14007A8F0(33);
    sub_14007A8F0(42);
    sub_14007A8F0(35);
    sub_14007A8F0(13);
    sub_14007A8F0(59);
    sub_14007A8F0(31);
    sub_14007A8F0(52);
    sub_14007A8F0(48);
    sub_14007A8F0(50);
    sub_14007A8F0(19);
    sub_14007A8F0(22);
    sub_14007A8F0(58);
    sub_14007A8F0(62);
    sub_14007A8F0(61);
    sub_14007A8F0(41);
    sub_14007A8F0(36);
    sub_14007A8F0(43);
    sub_14007A8F0(44);
    sub_14007A8F0(38);
    return sub_14007A8F0(39);
  }
  return result;
}

