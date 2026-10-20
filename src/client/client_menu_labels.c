#include "shared_client.h"
#include "../engine/menu.h"

//----- (0000000140071640) ----------------------------------------------------
void            sr_menu_label(char *a1)
{
  menu_label((const unsigned char *)a1);
}

//----- (00000001400764B0) ----------------------------------------------------
void            sr_menu_label_at(char *a1, float a2, float a3, float a4, char a5)
{
  menu_label_at((const unsigned char *)a1, a2, a3, a4, (unsigned char)a5);
}

