/* Address: 0x1401fc3c8 | Name: sub_1401FC3C8 | Size: 60 bytes */
void sub_1401FC3C8()
{
  void (**i)(void); // rbx

  for ( i = qword_140294660; i < qword_140294660; ++i )
  {
    if ( *i )
      (*i)();
  }
}

