#pragma once

#include "ofMain.h"
#include "puffle.h"
#include "thinIce.hpp"

enum GameState {
    START_SCREEN = 0,
    RUNNING,
    FINISHED
};

class ofApp : public ofBaseApp{

public:
    GameState state;
    
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void mousePressed(int x, int y, int button);
    
    Puffle *player = new Puffle();
    ThinIce *game = new ThinIce();
		
};
