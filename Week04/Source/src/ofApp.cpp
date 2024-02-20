#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    ofSetWindowTitle("10 PRINT Pattern");
    fbo.begin();
    ofBackgroundHex(0xC0FFEE);
    
    int step = 40;
    
    for (int i=0; i<2; i++){
        for (int x=0; x<ofGetWidth(); x += step) {
            for (int y=0; y<ofGetHeight(); y += step) {
                ofSetHexColor(0x023649);
                ofSetLineWidth(3);
                if (ofRandom(1) < 0.5) {
                    ofDrawLine(x, y, x + step, y + step);
                } else {
                    ofDrawLine(x, y + step, x + step, y);
                }
            }
        }
    }
    fbo.end();
}

// NoLoop code from
// https://forum.openframeworks.cc/t/looponce-noloop-equivalent/41932

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.draw(0.f, 0.f);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
