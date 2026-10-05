/* Address: 0x140209be4 | Name: ??_GCMenuHash@@UEAAPEAXI@Z_0 | Size: 66 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
CMenuHash *__fastcall CMenuHash::`scalar deleting destructor'(CMenuHash *this, char a2)
{
  *(_QWORD *)this = &off_140284BA0;
  sub_14020B07C((char *)this + 8);
  if ( (a2 & 1) != 0 )
    j_j_free(this);
  return this;
}

