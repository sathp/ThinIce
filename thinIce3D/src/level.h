#ifndef LEVEL_H
#define LEVEL_H

#include "block.h"
#include "ofMain.h"

namespace thinice {
class Level {

private:
    const int row = 15;
    const int col = 19;
    int score;

public:
    // Pointers
    Block *starting_point; // Pointer to starting point
    Block *target; // Pointer to ending point
    Block *curr; // Pointer to sprite's current position

    // Constructors
    Level(); // Default Constructor
    Level(const Level& source); // Copy Constructor
    Level(Level&& source); // Move Constructor
    ~Level(); // Deconstructor

    // Utilities or Modifiers
    void reset();
    int getScore();
    bool isLevelFinished();
};

} // namespace thinice
#endif //LEVEL_H