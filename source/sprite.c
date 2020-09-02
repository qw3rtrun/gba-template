//
// Created by strunov on 4/21/2020.
//
#include <tonc.h>
#include "resources.h"
#include "sprite.h"

void sprite_load(SPRITE *sprite, IMG_DATA *data, u8 palBank, u8 baseTid) {
    sprite->data = data;
    sprite->baseTid = baseTid;
    sprite->palBank = palBank;
    memcpy16(&pal_obj_bank[palBank], data->palSrc, data->palLen / 2);
    memcpy16(&tile_mem_obj[0][baseTid], data->tilesSrc, data->tilesLen / 2);
}