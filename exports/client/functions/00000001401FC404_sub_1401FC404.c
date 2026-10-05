/* Address: 0x1401fc404 | Name: sub_1401FC404 | Size: 60 bytes */
void sub_1401FC404()
{
  void (**i)(void); // rbx

  for ( i = &qword_140294670; i < &qword_140294670; ++i )
  {
    if ( *i )
      (*i)();
  }
}

