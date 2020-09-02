//
// Created by strunov on 4/21/2020.
//

#ifndef TEMPLATE_SPRITE_H
#define TEMPLATE_SPRITE_H

#include <tonc.h>

typedef struct IMG_DATA {
    const void *palSrc;
    const u8 palLen;
    const void *tilesSrc;
    const u16 tilesLen;
    const u16 wide;
    const u16 size;
    const u8 offsetTickMask;
} IMG_DATA;

typedef struct SPRITE {
    IMG_DATA *data;
    u8 palBank;
    u8 baseTid;
} SPRITE;

void sprite_load(SPRITE *sprite, IMG_DATA *data, u8 palBank, u8 baseTid);

#endif //TEMPLATE_SPRITE_H
