#include "BallGreen.hpp"

void BallGreen::draw(){
    ofSetColor(ofColor::green);    // this is a shortcut for full green color ;)
    ofDrawCircle(x, y, dim);
}