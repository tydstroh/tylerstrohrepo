#include "BallBlue.hpp"

void BallBlue::draw(){
    ofSetColor(ofColor::blue);    // this is a shortcut for full blue color ;)
    ofDrawCircle(x, y, dim);
}