#pragma clang diagnostic push
#pragma ide diagnostic ignored "Simplify"
#pragma ide diagnostic ignored "EndlessLoop"
#include <tonc.h>
#include "bg0.h"
#include "player.h"

int main() {
    REG_DISPCNT = DCNT_MODE0 | DCNT_BG0 | DCNT_OBJ | DCNT_OBJ_1D;
    OBJ_ATTR obj_buffer[128];
    oam_init(obj_buffer, 128);

    bg0_draw();
    player_draw(obj_buffer);

    u8 px = 0;
    u8 py = 0;
    obj_set_pos(obj_buffer, 16 * px + 48, 16 * py + 8 );
    oam_copy(oam_mem, obj_buffer, 1);

    while (1) {
        vid_vsync();
        key_poll();
        if (key_hit(KEY_DOWN)) {
            py = (py + 1) % 9;
        }
        if (key_hit(KEY_UP)) {
            py = py > 0 ? py -1 : 8;
        }

        if (key_hit(KEY_RIGHT)) {
            px = (px + 1) % 9;
        }
        if (key_hit(KEY_LEFT)) {
            px = px > 0 ? px - 1 : 8;
        }
        //px = (px + key_hit(KEY_RIGHT) - key_hit(KEY_LEFT)) % 9;
        obj_set_pos(obj_buffer, 16 * px + 48, 16 * py + 8 );
        oam_copy(oam_mem, obj_buffer, 1);
    }
}
#pragma clang diagnostic pop