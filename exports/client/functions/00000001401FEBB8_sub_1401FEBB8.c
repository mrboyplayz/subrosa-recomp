/* Address: 0x1401febb8 | Name: sub_1401FEBB8 | Size: 66 bytes */
void __fastcall sub_1401FEBB8(_HeapManager *this)
{
  __int64 v2; // rax

  if ( *((_QWORD *)this + 1) )
  {
    v2 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v2;
    while ( v2 )
    {
      *((_QWORD *)this + 2) = **((_QWORD **)this + 3);
      (*((void (**)(void))this + 1))();
      v2 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 3) = v2;
    }
  }
}

