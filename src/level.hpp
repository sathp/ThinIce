#ifndef level_hpp
#define level_hpp

#include <stdio.h>

#include "block.hpp"
#include "puffle.h"

class Level {

public:
    // Constructor
    Level();
    Level(int input[15][19]);
    
    // Constants
    const int row = 15;
    const int col = 19;
    
    // Assets
    Block maze[15][19] = {Block(State(0))};
    Puffle *player = new Puffle();
    
    // Pointers
    Block *curr;
    Block *starting;
    Block *target;
    
    // Modififers
    void reset();
    
    // Getters and Setters
    int getLevelScore();
    void setLevelScore(int score);
    void setPlayer(Puffle player);
    Puffle getPlayer();
    
private:
    int level_score_;
    Puffle player_;
};

#endif /* level_hpp */
