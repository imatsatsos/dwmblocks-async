#include "config.h"
#include "block.h"
#include "util.h"

Block blocks[] = {
  {"border=#6aa6e6 $HOME/.local/bin/status/kbdlayout",  0, 7},
  {"border=#6aa6e6 $HOME/.local/bin/status/cputemp",    5, 1},
  {"border=#6aa6e6 $HOME/.local/bin/status/cpu",        3, 2},
  {"border=#6aa6e6 $HOME/.local/bin/status/ram",       13, 8},
  {"border=#6aa6e6 $HOME/.local/bin/status/bluetooth", 39, 4},
  {"border=#6aa6e6 $HOME/.local/bin/status/wifi",      29, 9},
  {"border=#6aa6e6 $HOME/.local/bin/status/volume",     0, 11},
  {"border=#6aa6e6 $HOME/.local/bin/status/battery",   59, 3},
  {"date '+%a %d, %H:%M'",                              5, 0}
};

const unsigned short blockCount = LEN(blocks);
