#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (0000000140051230) ----------------------------------------------------
void            sr_event_bullet(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  event_bullet(a1, (const float *)a2, (const float *)a3, a4);
}

//----- (00000001400512D0) ----------------------------------------------------
void            sr_event_bullet_hit(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  event_bullet_hit(a1, a2, (const float *)a3, (const float *)a4);
}

//----- (0000000140051480) ----------------------------------------------------
__int64            sr_event_message(unsigned int a1,      __m128i *a2, unsigned int a3, unsigned int a4)
{
  event_message(a1, (const char *)a2, a3, a4);
  return 0;
}

//----- (0000000140051560) ----------------------------------------------------
void            sr_event_block_update(int a1, int a2, int a3, int a4, unsigned int a5)
{
  event_block_update((unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4, a5);
}

//----- (00000001400515E0) ----------------------------------------------------
__int64            sr_event_sound(unsigned int a1, unsigned int *a2, float a3, float a4)
{
  event_sound(a1, (const float *)a2, a3, a4);
  return 0;
}

//----- (0000000140051650) ----------------------------------------------------
__int64            sr_event_item_sound(unsigned int a1, unsigned int a2, float a3, float a4)
{
  event_item_sound(a1, a2, a3, a4);
  return 0;
}

//----- (0000000140051730) ----------------------------------------------------
void            sr_event_block_hit(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  event_block_hit((unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4, a5, a6, (const float *)a7, (const float *)a8);
}

//----- (00000001400518B0) ----------------------------------------------------
__int64            sr_event_corporation_door(unsigned int a1, unsigned int a2)
{
  event_corporation_door(a1, a2);
  return 0;
}

//----- (00000001400519F0) ----------------------------------------------------
void            sr_event_mission_update(int a1, int a2)
{
  event_mission_update(a1, a2);
}

//----- (0000000140051B00) ----------------------------------------------------
void            sr_event_mission_text_line(int a1, int a2, unsigned int a3, int a4)
{
  event_mission_text_line(a1, a2, a3, a4);
}

//----- (0000000140051BD0) ----------------------------------------------------
void            sr_event_mission_text(int a1, int a2)
{
  event_mission_text(a1, a2);
}

//----- (0000000140051CF0) ----------------------------------------------------
void            sr_event_vehicle_removed(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  event_vehicle_removed(a1, a2, a3, (const float *)a4, (const float *)a5);
}

//----- (0000000140051DC0) ----------------------------------------------------
void            sr_event_player_update(int a1)
{
  event_player_update(a1);
}

//----- (0000000140051F50) ----------------------------------------------------
__int64            sr_event_player_finance(signed int a1)
{
  event_player_finance(a1);
  return 0;
}

//----- (0000000140051FF0) ----------------------------------------------------
void            sr_event_type21(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  event_type21(a1, a2, a3, a4, (const float *)a5);
}

//----- (0000000140052090) ----------------------------------------------------
__int64 sr_event_stock_prices()
{
  event_stock_prices();
  return 0;
}

