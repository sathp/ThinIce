#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    player -> setup();
    game -> setup();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    player -> draw(24, 24);
    game -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (state == GameState(0)) {
        if (key == OF_KEY_RETURN) {
            game -> draw();
        }
    } else {
        if (key == OF_KEY_LEFT) {
            
        }
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

