/* Address: 0x1401816d0 | Name: sub_1401816D0 | Size: 43 bytes */
void __fastcall sub_1401816D0(_QWORD **a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *a1;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      free(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}

