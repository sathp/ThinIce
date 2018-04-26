#include "iceBlock.h"

namespace thinice {
    
    class Level {
        Block maze[15][19] = {0}; // Initializing an array of disabled blocks
        Block *starting_point; // Pointer to starting point
        Block *target; // Pointer to ending point
    };
}