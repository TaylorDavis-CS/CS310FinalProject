#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    score = 0;
    canOpen = serial.setup(device, buad);
    isGame = false;
    pause = false;
    
    if(canOpen){
        cout << "Serial ok" << endl;
    }
    else{
        cout << "Serial Not Ok" << endl;
        std::exit(1);
    }
    notes.push_back(new NoteA("APiano.wav"));
    notes.push_back(new NoteB("BPiano.wav"));
    notes.push_back(new NoteC("CPiano.wav"));
    notes.push_back(new NoteD("DPiano.wav"));
}

//--------------------------------------------------------------
void ofApp::update(){
    char input = '0';
        if(serial.available()){
            input = serial.readByte();
            // = keypress for backup to arduino
        }
    if(isGame == true){
        for(int i=0; i<notes.size(); i++){
            if(notes[i]->update(input)){
                score += 10;
            }
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(isGame == true){
        for(int i=0; i<notes.size(); i++){
            notes[i]->draw();
        }
    }
    ofDrawLine(0, ofGetHeight()-100, ofGetWidth(), ofGetHeight()-100);
    ofSetColor(255,0,0);
    ofDrawBitmapString("Score: " + ofToString(score), 0, 25);
    if(isGame == false){
        ofDrawBitmapString("Press Space to Start and p to Pause", ofGetWidth()/2, 25);
    }
    if(pause == true){
        ofDrawBitmapString("PAUSE", ofGetWidth()/2, ofGetHeight()/2);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'p'){
        for(int i=0; i<notes.size(); i++){
            notes[i]->pause();
        }
        pause = !pause;
    }
    if(key == ' '){
        isGame = true;
    }
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

