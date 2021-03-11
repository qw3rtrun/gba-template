#pragma clang diagnostic push
#pragma ide diagnostic ignored "Simplify"
#pragma ide diagnostic ignored "EndlessLoop"
#include <tonc.h>
#include "bg0.h"

int main() {
    REG_DISPCNT = DCNT_MODE0 | DCNT_BG0;
    bg0_draw();

    u16 x = 0, y = 0;
    while (1) {
        vid_vsync();
        key_poll();
        y += key_tri_vert();
        x += key_tri_horz();
        REG_BG0VOFS = y;
        REG_BG0HOFS = x;
    }
}
#pragma clang diagnostic pop