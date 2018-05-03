#include "ofMain.h"
#include "ofxGui.h"

#ifndef puffle_h
#define puffle_h

class Puffle {
    
    typedef enum {
        RED = 0,
        GREEN,
        BLUE,
        YELLOW
    } Color;
    
public:
    // Constructor
    Puffle();
    Puffle(string name, int color);
    
    // Assets
    ofImage sprite;
    string name;
    Color color;
    float pos_x;
    float pos_y;
    const int step = 24;
    
    //oF
    void setup();
    void draw(float x, float y);
    void move(int dir);
};

#endif /* puffle_h */
