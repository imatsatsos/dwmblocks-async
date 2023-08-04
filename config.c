#include "config.h"
#include "block.h"
#include "util.h"

Block blocks[] = {
  {"$HOME/.local/bin/status/kbdlayout",  0, 7},
  {"$HOME/.local/bin/status/cputemp",    5, 1},
  {"$HOME/.local/bin/status/cpu",        3, 2},
  {"$HOME/.local/bin/status/ram",       13, 8},
  {"$HOME/.local/bin/status/bluetooth", 39, 4},
  {"$HOME/.local/bin/status/wifi",      29, 9},
  {"$HOME/.local/bin/status/volume",     0, 11},
  {"$HOME/.local/bin/status/battery",   59, 3},
  {"$HOME/.local/bin/status/time",       5, 5},
};

const unsigned short blockCount = LEN(blocks);
