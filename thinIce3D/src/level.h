#ifndef LEVEL_H
#define LEVEL_H

#include "iceBlock.h"

namespace thinice {
class Level {
    
    // ENUM that holds the state of the a Block
    typedef enum {
        DISABLED, // Areas of the screen that cannot be seen be reached by the player, hence, disabled.
        WALL, // Boundary that restricts sprite's movements.
        TARGET, // Target Block
        CHEST, // Block that contains a chest
        KEY, // Block that contains a key
        GOLD, // Block that contains gold
        THICK_ICE, // Becomes THIN_ICE if stepped on.
        THIN_ICE, // Becomes LIQUID if stepped on.
        LIQUID // Ice is completely melted. 
    } State;

    // Internal Structure for a Block
    struct Block {

        // Constructors
        Block(); // Default Block Constructor
        Block(const State s); // Constructor that sets state of block
        
        // Properties
        private:
            State state_; // Contains state of the given block
            ofVec2f position_;
        public:
            State getState(); // Getters
            ofVec2f getPosition();
        
        // Utilities and Modifiers
        void melt(); // Melts Blocks
        bool operator==(const Block &rhs) const; // Checks equality
    };

Block *starting_point; // Pointer to starting point
Block *target; // Pointer to ending point
Block *current; // Pointer to sprite's current position
int score;

private:
    const int row = 15;
    const int col = 19;

public:
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