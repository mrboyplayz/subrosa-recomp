#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (000000014004C960) ----------------------------------------------------
__int64            sr_disk_for_item_drive(int a1, int a2)
{
  return disk_for_item_drive(a1, a2);
}

//----- (0000000140080690) ----------------------------------------------------
__int64            sr_disk_add_file(int a1, unsigned int a2, char *a3, unsigned int a4)
{
  return disk_add_file(a1, a2, a3, a4);
}

