#include "thinIce.hpp"

// Default Constructor
ThinIce::ThinIce() {
    score_ = 0;
    level_ = 1;
    x_dim = ofGetWidth()*0.1;
    y_dim = ofGetHeight()*0.05;
    width = ofGetWidth()*0.8;
    height = ofGetHeight()*0.75;
}

// Getters and Setters
void ThinIce::setScore(int score) {
    score_ = score;
}
int ThinIce::getScore() {
    return score_;
}
void ThinIce::addScore(int levelScore) {
    score_ += levelScore;
}
void ThinIce::setLevel(int level) {
    level_ = level;
}
int ThinIce::getLevel() {
    return level_;
}
void ThinIce::nextLevel() {
    level_++;
}

// openFrameworks
void ThinIce::setup() {
    background.load("images/background.png");
    headings.load("fonts/title.ttf", 30);
    numbers.load("fonts/title_alt.ttf", 30);
}
void ThinIce::draw() {
    ofBackground(43, 44, 44);  // Clear the screen with a black color
    background.draw(0, 0, ofGetWidth(), ofGetHeight());
    drawCanvas();
//    drawInfo();
}

// 456 x 410

void ThinIce::drawCanvas() {
    ofSetColor(217, 241, 255);
    ofDrawRectRounded(143, 22, 456, 410, 12);
}
