#ifndef thinIce_hpp
#define thinIce_hpp

#include <stdio.h>

#include "level.hpp"
#include "ofMain.h"
#include "ofxGui.h"

class ThinIce {
public:
    // Constructor
    ThinIce();
    
    // Getters and Setters
    void setScore(int score);
    int getScore();
    void addScore(int levelScore);
    void setLevel(int level);
    int getLevel();
    void nextLevel();
    
    
    // Assets
    ofImage background;
    ofTrueTypeFont headings;
    ofTrueTypeFont numbers;
    const string level = "LEVEL";
    const string solved = "SOLVED";
    const string points = "POINTS";
    const string reset = "RESET";
    float x_dim;
    float y_dim;
    float width;
    float height;
    
    // Game Components
    vector<Level> levels;
    
    // oF
    void setup();
    void draw();
    void drawCanvas();
    void drawInfo();
    
private:
    int score_;
    int level_;
};

#endif /* thinIce_hpp */
