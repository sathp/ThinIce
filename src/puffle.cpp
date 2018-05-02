#include <stdio.h>
#include "puffle.h"

// Constructor
Puffle::Puffle() {
    name = "Puffle";
    color = Puffle::Color(0);
}
Puffle::Puffle(string name, int color) {
    name = name;
    color = Puffle::Color(color);
}

// ofMethods
void Puffle::setup() {
    sprite.load("sprites/unicorn.png");
}
void Puffle::draw(float x, float y) {
    pos_x = x;
    pos_y = y;
    sprite.draw(x, y, 24, 24);
}

// Modifier
void Puffle::move(int dir) {
    if (dir == 0) { // Move up
        if (true) {
            //TODO
        }
    } else if (dir == 1) { // Move left
        if (true) {
            //TODO
        }
    } else if (dir == 2) { // Move down
        if (true) {
            //TODO
        }
    } else if (dir == 3) { // Move right
        if (true) {
            //TODO
        }
    }
}
