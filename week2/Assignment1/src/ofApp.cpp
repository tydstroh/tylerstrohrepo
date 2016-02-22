#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    
    Earth.height = 50;
    Earth.name = "earth";
    Moon.height = 20;
    Sun.height = 150;
    Sun.r = 255;
    Sun.g = 218;
    Sun.b = 34;
    Earth.r = 0;
    Earth.g = 0;
    Earth.b = 255;
    Moon.r = 193;
    Moon.g = 193;
    Moon.b = 193;
    Mars.height = 35;
    Mars.r = 255;
    Mars.g = 0;
    Mars.b = 0;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    cout << "Earth height: " << Earth.height << endl;
    cout << "Earth name: " << Earth.name << endl;

}

//--------------------------------------------------------------
void ofApp::drawWord(string word){
    ofDrawBitmapString(word, ofGetWidth()/2, ofGetHeight()/2);
    
}

void ofApp::draw(){
    Earth.draw(ofGetWidth()/2, ofGetHeight()/2);
    Moon.draw(ofGetWidth()/2, ofGetHeight()/3);
        Sun.draw(ofGetWidth()/2 - 2*Sun.height, ofGetHeight()/3);
    Mars.draw(ofGetWidth()/1.5 - 1.5*Mars.height, ofGetHeight()/1.5);


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
