/* Address: 0x1402491b0 | Name: sub_1402491B0 | Size: 101 bytes */
void __fastcall sub_1402491B0(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  _QWORD *v4; // rdi
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF

  if ( a3 > 0 )
  {
    v3 = 0;
    v4 = &v7 + 14;
    do
    {
      if ( (unsigned int)sub_14025ACB4(a1, a2, *++v4) )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        JUMPOUT(0x140249214LL);
      }
      ++v3;
    }
    while ( v3 < a3 );
  }
}

