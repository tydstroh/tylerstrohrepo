#include "testApp.h"

void testApp::diamond(ofPoint center, float length, float width()){
    ofLine(center.x - width/2, center.y + length/2, center.x, center.y-length/2);
    ofLine(center.x, center.y-length/2, center.x + width/2, center.y + length/2);
    ofLine(center.x + width/2, center.y + length/2, center.x, center.y+length);
    ofLine(center.x, center.y + length, center.x-width/2, center.y+length/2);
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(100,90,50);
    ofFill();
    ofEllipse(ofGetWidth(), ofGetHeight(), 100, 100);
    ofLine(0,0,ofGetWidth(),ofGetHeight());
    
    ofPoint bob;
    bob.x = ofGetWidth()/2;
    bob.y = ofGetHeight()/2;
    float length = ofGetHeight()/4;
    float width = ofGetHeight()/4;
    diamond(bob, length, width);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
