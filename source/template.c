#include <tonc.h>
#include "items.h"
#include "map_sample.h"
#include "bg0.h"
#include "sprite.h"
#include "idle.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"

void v3_template() {
    REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;
    for (int y = 0; y < 128; y++) {
        memcpy32(vid_mem + y * M3_WIDTH, items + y * 256, 64);
    }
}

void v4_template() {
    REG_DISPCNT = DCNT_MODE4 | DCNT_BG2;
    vid_page = vid_mem;

    memcpy16(pal_bg_mem, map_samplePal, 8);
    memcpy32(vid_page, map_sampleBitmap, 240 * 160 / 4);

}

void tiles_template() {
    u16 x = 0, y = 0;

    memcpy16(pal_bg_mem, bg0Pal, bg0PalLen);
    memcpy16(&tile_mem[0], bg0Tiles, bg0TilesLen);
    memcpy16(&se_mat[30], &bg0Map, bg0MapLen);

    REG_BG0CNT = BG_CBB(0) | BG_4BPP | BG_SBB(30) | BG_REG_64x32;
    REG_DISPCNT = DCNT_MODE0 | DCNT_BG0;

    while (1) {
        vid_vsync();
        key_poll();
        y += key_tri_vert();
        x += key_tri_horz();
        REG_BG0VOFS = y;
        REG_BG0HOFS = x;
    }
}

void sprite_template() {
    OBJ_ATTR obj_buffer[128];
    u32 tid = 0, pb = 0;

    memcpy16(pal_obj_mem, spritePal, spritePalLen / 2);
    memcpy16(tile_mem_obj, spriteTiles, spriteTilesLen / 2);

    oam_init(obj_buffer, 128);

    REG_DISPCNT = DCNT_OBJ | DCNT_OBJ_1D;

    while (1) {
        OBJ_ATTR *sprite = obj_buffer;
        obj_set_attr(sprite,
                     ATTR0_TALL,
                     ATTR1_SIZE_16x32,
                     ATTR2_PALBANK(tid | pb));
        obj_set_pos(sprite, SCREEN_WIDTH / 2 - 16, SCREEN_HEIGHT / 2 - 8);
        oam_copy(oam_mem, obj_buffer, 1);
        vid_vsync();
    }
}

void animation_template() {
    OBJ_ATTR obj_buffer[128];
    u32 tid = 0, pb = 0;
    u32 tick = 0;

    memcpy16(pal_obj_mem, idlePal, idlePalLen / 2);
    for (int i=0; i < 4; i++) {
        memcpy16(&tile_mem_obj[0][i*32], idleTiles+ i*768, 384);
    }

    oam_init(obj_buffer, 128);

    REG_DISPCNT = DCNT_OBJ | DCNT_OBJ_2D;

    while (1) {
        OBJ_ATTR *sprite = obj_buffer;
        obj_set_attr(sprite,
                     ATTR0_TALL,
                     ATTR1_SIZE_16x32,
                     ATTR2_BUILD(tid, 0, 1));
        obj_set_pos(sprite, SCREEN_WIDTH / 2 - 16, SCREEN_HEIGHT / 2 - 8);
        oam_copy(oam_mem, obj_buffer, 1);
        vid_vsync();
        tick++;
        tid = ((tick >> 3) % 12) * 2;
    }
}

void scene_template() {
    OBJ_ATTR obj_buffer[128];
    u32 tid = 0, pb = 0;
    u32 tick = 0;

    memcpy16(pal_bg_mem, bg0Pal, bg0PalLen);
    memcpy16(&tile_mem[0], bg0Tiles, bg0TilesLen);
    memcpy16(&se_mat[30], &bg0Map, bg0MapLen);

    memcpy16(pal_obj_mem, idlePal, idlePalLen / 2);
    for (int i=0; i < 4; i++) {
        memcpy16(&tile_mem_obj[0][i*32], idleTiles+ i*512, 256);
    }

    oam_init(obj_buffer, 128);

    REG_BG0CNT = BG_CBB(0) | BG_4BPP | BG_SBB(30) | BG_REG_64x32;
    REG_DISPCNT = DCNT_MODE0 | DCNT_BG0 | DCNT_OBJ | DCNT_OBJ_2D;

    REG_BG0VOFS = 43;
    REG_BG0HOFS = -70;

    while (1) {
        OBJ_ATTR *sprite = obj_buffer;
        obj_set_attr(sprite,
                     ATTR0_TALL,
                     ATTR1_SIZE_16x32,
                     ATTR2_BUILD(tid, 0, 1));
        obj_set_pos(sprite, SCREEN_WIDTH / 2 - 16, SCREEN_HEIGHT / 2 - 8);
        oam_copy(oam_mem, obj_buffer, 1);
        vid_vsync();
        tick++;
        tid = ((tick >> 3) & 0x07) * 2;

    }
}

int main() {

    scene_template();

    return 0;
}


#pragma clang diagnostic pop