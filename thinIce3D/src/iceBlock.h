
#ifndef ICEBLOCK_H
#define ICEBLOCK_H

#include "ofMain.h"

namespace thinice {

    // Internal Block
    class Block {
        // Defines the physical state of the block

    public:
        Block() {}; // Default Constructor
        Block(const int s) {}; // Constructor that sets state of block
        ~Block(); // Destructor

        State get_state() const; // Returns state of block
        void melt(); // Melts block, decreases State value by 1
    };
}

#endif
