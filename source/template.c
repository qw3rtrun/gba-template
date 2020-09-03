#include <tonc.h>
#include "resources.h"

#define IDLE 0
#define RUN 1

int running = 1;

typedef struct OBJECT {
    SPRITE *sprite;
    u8 activeSprite;
    OBJ_ATTR *objAttr;
    u16 x;
    u16 y;
    bool hflip;
} OBJECT;

void object_init(OBJECT *obj, OBJ_ATTR *attrs, SPRITE *sprite, u16 x, u16 y) {
    obj->sprite = sprite;
    obj->activeSprite = 0;
    obj->objAttr = attrs;
    obj->x = x;
    obj->y = y;
    obj->hflip = false;
    obj_set_attr(obj->objAttr,
                 obj->sprite->data->wide,
                 obj->sprite->data->size,
                 ATTR2_BUILD(obj->sprite->baseTid, obj->sprite->palBank, 1));
    obj_set_pos(obj->objAttr, x, y);
}

void object_tick(OBJECT *obj, u32 tick) {
    u8 i = obj->activeSprite;
    obj_set_attr(obj->objAttr,
                 obj->sprite[i].data->wide,
                 obj->sprite[i].data->size | (obj->hflip ? ATTR1_HFLIP : 0),
                 ATTR2_BUILD(obj->sprite[i].baseTid + (tick & obj->sprite[i].data->offsetTickMask),
                             obj->sprite[i].palBank, 1));
    obj_set_pos(obj->objAttr, obj->x, obj->y);
}

void object_flip(OBJECT *obj, bool flip) {
    obj->hflip = flip;
}

void object_move_x(OBJECT *obj, s8 v) {
    object_flip(obj, key_tri_horz() < 0);
    obj->x += v;
}

void object_activate(OBJECT *obj, u8 i) {
    obj->activeSprite = i;
}

int main() {

    OBJ_ATTR obj_buffer[128];
    u32 tick = 0;

    SPRITE sprites[2];
    sprite_load(&sprites[IDLE], &idle_data, 0, 0);
    sprite_load(&sprites[RUN], &run_data, 1, 64);

    oam_init(obj_buffer, 128);

    REG_DISPCNT = DCNT_MODE0 | DCNT_OBJ | DCNT_OBJ_1D;

    OBJ_ATTR *guyAttr1 = obj_buffer;
    OBJECT guy1;
    object_init(&guy1, guyAttr1, sprites, SCREEN_WIDTH / 2 - 8, SCREEN_HEIGHT / 2 - 16);

    while (running) {
        key_poll();
        if (key_tri_horz() != 0) {
            object_activate(&guy1, RUN);
            object_move_x(&guy1, key_tri_horz());
        } else {
            object_activate(&guy1, IDLE);
        }
        object_tick(&guy1, tick);
        vid_vsync();
        oam_copy(oam_mem, obj_buffer, 1);
        tick++;
    }

    return 0;
}