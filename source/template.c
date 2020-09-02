#include <tonc.h>
#include "resources.h"

int running = 1;

typedef struct OBJECT {
    SPRITE *sprite;
    OBJ_ATTR *objAttr;
    u16 x;
    u16 y;
    bool hflip;
} OBJECT;

void object_init(OBJECT *obj, OBJ_ATTR *attrs, SPRITE *sprite, u16 x, u16 y) {
    obj->sprite = sprite;
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
    obj_set_attr(obj->objAttr,
                 obj->sprite->data->wide,
                 obj->sprite->data->size  | (obj->hflip ? ATTR1_HFLIP : 0),
                 ATTR2_BUILD(obj->sprite->baseTid + (tick & obj->sprite->data->offsetTickMask) ,
                             obj->sprite->palBank, 1));
    obj_set_pos(obj->objAttr, obj->x, obj->y);
}

void object_flip(OBJECT *obj, bool flip) {
    obj->hflip = flip;
}

int main() {

    OBJ_ATTR obj_buffer[128];
    u32 tick = 0;

    SPRITE idle;
    SPRITE run;

    sprite_load(&idle, &idle_data, 0, 0);
    sprite_load(&run, &run_data, 1, 64);

    oam_init(obj_buffer, 128);

    REG_DISPCNT = DCNT_MODE0 | DCNT_OBJ | DCNT_OBJ_1D;

    OBJ_ATTR *guyAttr1 = obj_buffer;
    OBJ_ATTR *guyAttr2 = obj_buffer + 1;
    OBJECT guy1, guy2;
    object_init(&guy1, guyAttr1, &idle, SCREEN_WIDTH / 2 - 8 - 32, SCREEN_HEIGHT / 2 - 16);
    object_init(&guy2, guyAttr2, &run, SCREEN_WIDTH / 2 - 8 + 32, SCREEN_HEIGHT / 2 - 16);

    while (running) {
        key_poll();
        if (key_tri_horz() != 0) {
            object_flip(&guy1, key_tri_horz() < 0);
        }
        object_tick(&guy1, tick);
        object_tick(&guy2, tick - 35);
        vid_vsync();
        oam_copy(oam_mem, obj_buffer, 2);
        tick++;
    }

    return 0;
}