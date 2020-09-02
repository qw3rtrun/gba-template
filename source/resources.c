//
// Created by strunov on 4/21/2020.
//

#include <tonc.h>
#include "resources.h"
#include "idle.h"
#include "run.h"

IMG_DATA idle_data = {
        idlePal,
        idlePalLen,
        idleTiles,
        idleTilesLen,
        ATTR0_TALL,
        ATTR1_SIZE_16x32,
        0x38
};

IMG_DATA run_data = {
        runPal,
        runPalLen,
        runTiles,
        runTilesLen,
        ATTR0_TALL,
        ATTR1_SIZE_16x32,
        0x38
};