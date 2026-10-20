#include "shared_client.h"
#include "../engine/menu.h"

//----- (000000014006F1F0) ----------------------------------------------------
// Immediate-mode button helper. Widget type code 0; returns true on active click/press interaction.
__int64            sr_DrawMenuButton(unsigned __int8 *a1)
{
  return menu_button(a1);
}

//----- (000000014006F5A0) ----------------------------------------------------
__int64            sr_DrawMenuButtonSelectable(unsigned __int8 *a1, int *a2, int a3)
{
  return menu_selectable(a1, a2, a3);
}

//----- (000000014006FD10) ----------------------------------------------------
__int64            sr_menu_group(unsigned __int8 *a1)
{
  return menu_group(a1);
}

//----- (0000000140070380) ----------------------------------------------------
// Immediate-mode widget allocator/layout helper. Reuses/allows up to 1024 widget slots, records local/screen rects, style/parent, and advances cursor by size + 4.
__int64            sr_menu_allocate_widget(unsigned int a1, float a2, float a3, float a4, unsigned int a5, unsigned int a6)
{
  return menu_allocate_widget(a1, a2, a3, a4, COERCE_FLOAT(a5), a6);
}

//----- (0000000140071440) ----------------------------------------------------
// Immediate-mode integer slider helper. Widget type code 11; stores int pointer, min, max, and step.
__int64            sr_DrawMenuSlider(unsigned __int8 *a1, int *a2, int a3, signed int a4, int a5)
{
  return menu_slider(a1, a2, a3, a4, a5);
}

//----- (0000000140071910) ----------------------------------------------------
// Immediate-mode checkbox helper. Widget type code 1; stores int pointer and toggles value on activation.
__int64            sr_DrawMenuToggle(unsigned __int8 *a1, _DWORD *a2)
{
  return menu_toggle(a1, a2);
}

//----- (0000000140071AA0) ----------------------------------------------------
__int64            sr_menu_toggle_mask(unsigned __int8 *a1, _DWORD *a2, unsigned int a3)
{
  return menu_toggle_mask(a1, a2, a3);
}

