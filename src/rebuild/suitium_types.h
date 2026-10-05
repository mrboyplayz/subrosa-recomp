/* Sub Rosa game-state type layouts, expressed in C for the rebuild.
 *
 * Layout source: Suitium (https://github.com/jpxs-intl/Suitium), GPL-3.0,
 * vendored at third_party/suitium. The struct field layouts below are a C
 * rendering of Suitium's reverse-engineered definitions; sizes were
 * verified by compiling the originals (see docs/suitium-reference.md):
 *
 *   CBoolean 4 | CVector3 12 | COrientation 36 | Bone 312
 *   InventorySlot 40 | ItemType 5072 (0x13D0) | VehicleType 99776 (0x185C0)
 *   Human 28664 (0x6FF8) | Item 7040 (0x1B80) | Vehicle 20840 (0x5168)
 *
 * Human array stride is 28664 bytes. The 563328-byte stride seen elsewhere
 * belongs to a 64-entry history buffer, not to adjacent Human records.
 *
 * This file is a derivative work of GPL-3.0 material and inherits that
 * license for distribution.
 */
#ifndef SR_SUITIUM_TYPES_H
#define SR_SUITIUM_TYPES_H

#include <stdint.h>
#include <stddef.h>

#if defined(__cplusplus)
#define SR_LAYOUT_ASSERT static_assert
#else
#define SR_LAYOUT_ASSERT _Static_assert
#endif
SR_LAYOUT_ASSERT(sizeof(uintptr_t) == 8, "Suitium layouts require x64");

#if defined(_MSC_VER)
#pragma pack(push, 1)
#define SR_PACKED
#else
#define SR_PACKED __attribute__((packed))
#endif

/* --- Shared conventions (Common.hpp) --- */

typedef struct SR_PACKED { int32_t i; } SrCInteger;
typedef struct SR_PACKED { uint8_t b1, b2, b3, b4; } SrCBoolean; /* value in b1 */
typedef struct SR_PACKED { float x, y, z; } SrCVector3;
typedef struct SR_PACKED { SrCVector3 right, up, back; } SrCOrientation;

/* --- Human (256 vanilla slots) --- */

typedef struct SR_PACKED {
    int32_t rigidBodyID;
    SrCVector3 position;
    SrCVector3 alternativePosition;
    SrCVector3 velocity;
    uint8_t pad1[12];
    SrCOrientation orientation;
    uint8_t pad2[224];
} SrBone; /* 312 */

typedef struct SR_PACKED {
    int32_t numberOfPlaces;
    int32_t firstPlaceItemID;
    int32_t secondPlaceItemID;
    uint8_t pad1[28];
} SrInventorySlot; /* 40 */

typedef struct SR_PACKED {
    SrCBoolean isActive;
    SrCBoolean isPhysicsEnabled;
    int32_t playerID;
    int32_t accountID;
    uint8_t pad1[12];
    int32_t stamina;
    int32_t maximumStamina;
    uint8_t pad2[4];
    int32_t vehicleID;
    int32_t vehicleSeatID;
    int32_t lastVehicleID;
    uint8_t pad3[4];
    int32_t despawnTimer;
    uint8_t pad4[4];
    int32_t isEliminator;
    uint8_t pad5[12];
    uint32_t spawnProtectionTimer;
    SrCBoolean isOnGround;
    int32_t movementStateID;
    uint8_t pad6[4];
    int32_t zoomLevel;
    uint8_t pad7[20];
    int32_t damage;
    SrCBoolean isStanding;
    SrCVector3 position;
    SrCVector3 alternativePosition;
    float viewYaw;
    float viewPitch;
    uint8_t pad8[56];
    float alternativeViewYaw;
    uint8_t pad9[80];
    float rightInput;
    uint8_t pad10[4];
    float forwardInput;
    uint8_t pad11[4];
    float alternativeViewPitch;
    uint8_t pad12[212];
    uint32_t inputFlags;
    uint32_t previousInputFlags;
    uint8_t pad13[4];
    SrBone bones[16];
    uint8_t pad14[21808];
    SrInventorySlot inventorySlots[6];
    uint8_t pad15[400];
    int32_t health;
    int32_t bloodLevel;
    SrCBoolean isBleeding;
    int32_t torsoHealth;
    uint8_t pad16[4];
    int32_t headHealth;
    uint8_t pad17[4];
    int32_t leftArmHealth;
    uint8_t pad18[4];
    int32_t rightArmHealth;
    uint8_t pad19[4];
    int32_t leftLegHealth;
    uint8_t pad20[4];
    int32_t rightLegHealth;
    uint8_t pad21[84];
    int32_t progressBar;
    int32_t inventoryAnimationFlags;
    float inventoryAnimationProgress;
    int32_t inventoryAnimationDuration;
    int32_t inventoryAnimationHand;
    int32_t inventoryAnimationSlot;
    SrCBoolean inventoryAnimationCounterFinished;
    int32_t inventoryAnimationCounter;
    uint8_t pad22[388];
    int32_t genderID;
    int32_t headModelID;
    int32_t skinColorID;
    int32_t hairColorID;
    int32_t hairModelID;
    int32_t eyeColorID;
    int32_t modelID;
    int32_t suitColorID;
    int32_t tieColorID;
    uint8_t pad23[4];
    int32_t necklaceID;
    int32_t lastUpdatedWantedGroup;
    uint8_t pad24[72];
} SrHuman; /* 28664-byte array stride; unknown fields remain explicit padding */

/* --- Item (1024 vanilla slots) --- */

/* Suitium's CustomData: int + std::string* packed = 12 bytes on x64. */
typedef struct SR_PACKED { int32_t index; uintptr_t typeIDPtr; } SrCustomData;

typedef struct SR_PACKED {
    uint8_t pad1[4];             /*   0 */
    int32_t price;               /*   4 */
    float mass;                  /*   8 */
    uint8_t pad2[4];             /*  12 */
    SrCBoolean isGun;            /*  16 */
    SrCBoolean useAlternativeAim;/*  20 */
    int32_t fireRate;            /*  24 */
    int32_t bulletTypeID;        /*  28 */
    uint8_t pad3[4];             /*  32 */
    int32_t ammoCount;           /*  36 */
    float bulletVelocity;        /*  40 */
    float bulletSpread;          /*  44 */
    char name[64];               /*  48 */
    uint8_t pad4[12];            /* 112 */
    int32_t handCount;           /* 124 */
    SrCVector3 rightHandOffset;  /* 128 */
    SrCVector3 leftHandOffset;   /* 140 */
    uint8_t pad5[24];            /* 152 */
    float primaryGripStiffness;  /* 176 */
    uint8_t pad6[8];             /* 180 */
    float primaryGripRotation;   /* 188 */
    float secondaryGripStiffness;/* 192 */
    uint8_t pad7[8];             /* 196 */
    float secondaryGripRotation; /* 204 */
    uint8_t pad8[52];            /* 208 */
    SrCVector3 boundsCenter;     /* 260 */
    uint8_t pad9[12];            /* 272 */
    SrCBoolean linkableMap[46];  /* 284 */
    SrCustomData customData;     /* 468 */
    uint8_t pad10[4532];         /* 480 */
    SrCVector3 gunHoldPosition;  /* 5012 */
    uint8_t pad11[48];           /* 5024 */
} SrItemType; /* 5072 */

typedef struct SR_PACKED {
    SrCBoolean isActive, isPhysicsEnabled, isPhysicsSettled;
    int32_t physicsSettledTimer;
    SrCBoolean isStatic;
    int32_t typeID;
    uint8_t pad1[4];
    int32_t despawnTimer, grenadePrimerID, parentHumanID, parentItemID, parentInventorySlotID;
    uint8_t pad2[40];
    int32_t rigidBodyID;
    SrCVector3 position, alternativePosition, velocity, alternativeVelocities[3];
    SrCOrientation orientation;
    uint8_t pad3[116];
    int32_t cooldown;
    uint8_t pad4[4];
    int32_t ammoCount;
    uint8_t pad5[20];
    int32_t connectedPhoneItemID, phoneNumber;
    uint8_t pad6[4];
    int32_t displayPhoneNumber, enteredPhoneNumber;
    uint8_t pad7[264];
    int32_t phoneTextureID;
    uint8_t pad8[4];
    int32_t keyVehicleID;
    uint8_t pad9[28];
    int32_t cashSpread, cashBillAmount, cashPureValue;
    uint8_t pad10[188];
    uint32_t computerCurrentLine, computerTopLine;
    int32_t computerCursor;
    char computerChars[32][64];
    uint8_t computerColors[32][64];
    uint8_t pad11[740];
    int32_t computerTeamID;
    uint8_t pad12[1316];
} SrItem;

/* --- Vehicle (512 vanilla slots) --- */

typedef struct SR_PACKED {
    SrCBoolean isActive;
    int32_t typeID;
    int32_t controllerTypeID;
    int32_t health;
    uint8_t pad1[4];
    int32_t lastDriverPlayerID;
    int32_t colorID;
    int16_t despawnTimer;
    int16_t spawnedStateID;
    SrCBoolean isLocked;
    uint8_t pad3[4];
    int32_t rigidBodyID;
    SrCVector3 position;
    SrCVector3 alternativePosition;
    SrCOrientation orientation;
    uint8_t pad4[4];
    SrCVector3 velocity;
    uint8_t pad5[10116];
    SrCBoolean windowBrokenMap[8];
    uint8_t pad6[3556];
    float gearX;
    float steerControl;
    float gearY;
    float gasControl;
    uint8_t pad7[56];
    int32_t trafficCarID;
    uint8_t pad8[740];
    int32_t engineRPM;
    uint8_t pad9[5748];
    int32_t bladeRigidBodyID;
    uint8_t pad10[304];
    int32_t numberOfSeats;
    uint8_t pad11[136];
} SrVehicle; /* 20840 */

/* CustomData belongs to the mod, not a recovered vanilla game field. */
typedef struct SR_PACKED { int32_t health, index; uintptr_t typeIDPtr; } SrVehicleCustomData;
typedef struct SR_PACKED {
    SrCBoolean usesExternalModel, useUnstablePhysics;
    int32_t controllerTypeID;
    uint8_t pad1[8];
    char name[32];
    int32_t price;
    float mass;
    uint8_t pad2[99716 - sizeof(SrVehicleCustomData)];
    SrVehicleCustomData customData;
} SrVehicleType;

#if defined(_MSC_VER)
#pragma pack(pop)
#endif
#undef SR_PACKED

/* Game-state array addresses, verified against this exact client build
 * (SHA256 e9500422...): absolute = 0x140404A6C + 4*index into the export's
 * dword_140404A6C mega-array notation.
 */
#define SR_DATA_BASE   ((uintptr_t)0x140404A6C)
#define SR_HUMANS      ((SrHuman *)   (SR_DATA_BASE + 4ull * 280651303))
#define SR_ITEMS       ((SrItem *)    (SR_DATA_BASE + 4ull * 278845893))
#define SR_VEHICLES    ((SrVehicle *) (SR_DATA_BASE + 4ull * 129716709))
#define SR_ITEM_TYPES  ((SrItemType *)(SR_DATA_BASE + 4ull * 278521285))
#define SR_VEHICLE_TYPES ((SrVehicleType *)(SR_DATA_BASE + 4ull * 346707717))
#define SR_IS_IN_GAME  ((int32_t *)   (SR_DATA_BASE + 4ull * 283831309))
#define SR_GAME_PAUSED ((int32_t *)   (SR_DATA_BASE + 4ull * 283831311))
#define SR_MENU_TYPE_ID ((int32_t *)  (SR_DATA_BASE + 4ull * 283831310))

/* Layout self-verification against the compiled originals. */
SR_LAYOUT_ASSERT(sizeof(SrCBoolean) == 4, "SrCBoolean");
SR_LAYOUT_ASSERT(sizeof(SrCVector3) == 12, "SrCVector3");
SR_LAYOUT_ASSERT(sizeof(SrCOrientation) == 36, "SrCOrientation");
SR_LAYOUT_ASSERT(sizeof(SrBone) == 312, "SrBone");
SR_LAYOUT_ASSERT(sizeof(SrInventorySlot) == 40, "SrInventorySlot");
SR_LAYOUT_ASSERT(sizeof(SrHuman) == 28664, "SrHuman");
SR_LAYOUT_ASSERT(sizeof(SrItem) == 7040, "SrItem");
SR_LAYOUT_ASSERT(sizeof(SrItemType) == 5072, "SrItemType");
SR_LAYOUT_ASSERT(offsetof(SrItemType, gunHoldPosition) == 5012, "gunHoldPosition");
SR_LAYOUT_ASSERT(sizeof(SrVehicle) == 20840, "SrVehicle");
SR_LAYOUT_ASSERT(offsetof(SrVehicle, numberOfSeats) == 20700, "vehicle numberOfSeats");
SR_LAYOUT_ASSERT(sizeof(SrVehicleType) == 99776, "SrVehicleType");
SR_LAYOUT_ASSERT(offsetof(SrVehicleType, name) == 20, "vehicle type name");
#undef SR_LAYOUT_ASSERT

#endif
