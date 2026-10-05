/* Address: 0x140167010 | Name: sub_140167010 | Size: 89 bytes */
__int64 __fastcall sub_140167010(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  int v7; // ebx
  int v8; // r8d

  v7 = a1;
  if ( (unsigned int)sub_140166EE0(a1) )
    return j__malloc_base(a5 + a4 * v8 * a2 * v7);
  else
    return 0;
}

