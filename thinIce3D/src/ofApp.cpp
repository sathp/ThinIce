#include "ofApp.h"

//--------------------------------------------------------------
void thinice::ofApp::setup(){
    ofSetWindowTitle("Thin Ice");
    block.load("blocks/starwars.jpg");
}

//--------------------------------------------------------------
void thinice::ofApp::update(){

}

//--------------------------------------------------------------
void thinice::ofApp::draw(){
    block.draw(ofGetWidth()/2 - block.getWidth()/2, ofGetHeight()/2 - block.getHeight()/2);
    
}

//--------------------------------------------------------------
void thinice::ofApp::keyPressed(int key){
    if (key == '1') {
        block.draw(100, 0);
    }
}


//--------------------------------------------------------------
void thinice::ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void thinice::ofApp::gotMessage(ofMessage msg){

}
