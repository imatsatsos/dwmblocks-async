#include "config.h"
#include "block.h"
#include "util.h"

Block blocks[] = {
    {"border=#6aa6e6 $HOME/.local/bin/status/kbdlayout", 0,  7},
    {"border=#6aa6e6 $HOME/.local/bin/status/cputemp",   5,  0},
    {"border=#6aa6e6 $HOME/.local/bin/status/cpu",       3,  0},
    {"border=#6aa6e6 $HOME/.local/bin/status/ram",      13,  8},
    {"border=#6aa6e6 $HOME/.local/bin/status/wifi",     29,  9},
    {"border=#6aa6e6 $HOME/.local/bin/status/volume",    0,  11},
    {"border=#6aa6e6 $HOME/.local/bin/status/battery",  59,  0},
    {"date '+%a %d, %H:%M'",                             5,  0}
};

const unsigned short blockCount = LEN(blocks);
