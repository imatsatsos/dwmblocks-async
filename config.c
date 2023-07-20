#include "config.h"
#include "block.h"
#include "util.h"

Block blocks[] = {
    {"$HOME/.config/i3/scripts/kblayout", 3,  0},
    {"$HOME/.local/bin/status/cputemp",   5,  0},
    {"$HOME/.local/bin/status/ram",      13,  8},
    {"$HOME/.local/bin/status/wifi",     29,  9},
    {"$HOME/.local/bin/status/volume",   27,  11},
    {"$HOME/.local/bin/status/battery",  29,  0},
    {"date '+%a %d, %H:%M'",	          5,  0}
};

const unsigned short blockCount = LEN(blocks);
