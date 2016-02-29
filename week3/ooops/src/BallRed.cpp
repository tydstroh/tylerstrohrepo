#include "BallRed.hpp"

void BallRed::draw(){
    ofSetColor(ofColor::red);    // this is a shortcut for full red color ;)
    ofDrawCircle(x, y, dim);
}