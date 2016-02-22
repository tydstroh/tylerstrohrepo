#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<myAliens.size(); i++) {
        myAliens[i].update();
    
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    bob.draw();
//    sarah.draw();
        for(int i=0; i<myAliens.size(); i++) {
            myAliens[i].draw();
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
    Alien tempAlien;
    tempAlien.setup(x,y);
    //vectorName.push(object);
    myAliens.push_back(tempAlien);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for(int i=0; i<myAliens.size(); i++){
float dist = ofDist(x,y, myALiens[i].xPos, myAliens[i].yPos)}
  
    if(dist<myAliens[i].diam){
        myAliens[i].erase(myAliens[i].begin+i);
    }
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
