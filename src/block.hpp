#ifndef block_hpp
#define block_hpp

#include <stdio.h>
#include "ofMain.h"
#include "ofxGui.h"

// ENUM that holds the state of the a Block
enum State {
    LIQUID = 0, // Ice is completely melted.
    THIN_ICE, // Becomes LIQUID if stepped on.
    THICK_ICE, // Becomes THIN_ICE if stepped on.
    GOLD, // Block that contains gold
    KEY, // Block that contains a key
    CHEST, // Block that contains a chest
    TARGET, // Target Block
    SOURCE, // Source Block
    WALL, // Boundary that restricts sprite's movements.
    DISABLED // Areas of the screen that cannot be seen be reached by the player, hence, disabled.
};

class Block {
    
private:
    State state_; // Contains state of the given block
    
public:
    
    // Constructors
    Block(); // Default Block Constructor
    Block(State s);
    
    // Properties
    const int width = 24;
    const int height = 24;
    int pos_x;
    int pos_y;
    
    // Getters
    State getState();
    void setState(State s);
    
    // Assets
    ofImage image;
    
    // ofMethods
    void setup();
    void draw(float x, float y);
    
    // Utilities and Modifiers
    void melt(); // Melts Blocks
    bool operator==(const Block &rhs) const; // Checks equality
    
};

#endif /* block_hpp */
