#pragma once

#include "ofMain.h"

namespace thinice {

enum GameState {
	RUNNING,
	PAUSED,
	FINISHED_LEVEL
}
class ofApp : public ofBaseApp{

	private:
		// Game Objects
		GameState current_state_ = RUNNING;
		ThinIce game;
		
		// Basic Display Functions
		void drawLevel();
		void drawSprite();
		void drawGameOver();
		void drawInfo();

		// Additional Functions
		void drownSprite();
		void restartLevel();

		// Reset Game
		void reset()

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void windowResized(int w, int h);
		void gotMessage(ofMessage msg);
		
};

}
