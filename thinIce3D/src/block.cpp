#include "Block.h"

Block::Block(const State s, int x_ind, int y_ind) {
    state_ = State(s);
}

// Openframeworks Setup Method. Loads image file and 
// sets position relative to screen.
void Block::setup() {
    int state = currentState();
    image.load("blocks/" + state + ".png");
}

// Draws Block object at ofVec2f position
void Block::draw() {
    image.draw(10, 100);
}

// Melts a block if it is THICK_ICE or THIN_ICE
void Block::melt() {
    int state = currentState();
    if (state == 2 || state == 1) {
        state--;
        state_ = State(state);
    }
    if (state == 3 || state == 4 || state == 5) {
        state = 0;
        state_ = State(state);
    }
}

// Overriding operator ==
bool Block::operator==(const Block &rhs) const {
    if (position == rhs.position && currentState() == rhs.currentState()) {
        return true;
    }
    return false;
}

State Block::currentState() {
    return state_;
}