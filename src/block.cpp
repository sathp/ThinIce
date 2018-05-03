#include "block.hpp"

// Constructor
Block::Block() {
    state_ = State(0);
}
Block::Block(State s) {
    state_ = s;
}

// Getters and Setters
State Block::getState() {
    return state_;
}
void Block::setState(State s) {
    state_ = s;
}

// ofMethods
void Block::setup() {
    image.load("images/" +  to_string(getState()) + ".png");
}
void Block::draw(float x, float y) {
    image.draw(x, y, 24, 24);
}

// Utilities and Modifiers
void Block::melt() {
    int state = getState();
    if (state == 2 || state == 1) {
        state--;
        state_ = State(state);
    }
    if (state == 3 || state == 4 || state == 5) {
        state = 0;
        state_ = State(state);
    }
}

bool Block::operator==(const Block &rhs) const{
    if (pos_x == rhs.pos_x && pos_y == rhs.pos_y) {
        return true;
    }
    return false;
}
