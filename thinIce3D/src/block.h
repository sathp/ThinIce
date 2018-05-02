#ifndef BLOCK_H
#define BLOCK_H

#include "ofMain.h"

class Block {
    
    // Constants
    const int MAX_X = 19;
    const int MAX_Y = 15;

    // ENUM that holds the state of the a Block
    typedef enum {
        LIQUID = 0, // Ice is completely melted. 
        THIN_ICE, // Becomes LIQUID if stepped on.
        THICK_ICE, // Becomes THIN_ICE if stepped on.
        GOLD, // Block that contains gold
        KEY, // Block that contains a key
        CHEST, // Block that contains a chest
        TARGET, // Target Block
        WALL, // Boundary that restricts sprite's movements.
        DISABLED // Areas of the screen that cannot be seen be reached by the player, hence, disabled.
    } State;
    
    private:
        State state_; // Contains state of the given block

    public:
        // Constructors
        Block(); // Default Block Constructor
        Block(const State s, int x_ind, int y_ind); // Constructor that sets state of block
        
        // Assets
//        ofImage image;
//        ofVec2f position;
    
        // ofMethods
        void setup();
        void draw();
    
        // Utilities and Modifiers
        void melt(); // Melts Blocks
        bool operator==(const Block &rhs) const; // Checks equality

        // Getters
        State currentState(); 
}

#endif // BLOCK_H
