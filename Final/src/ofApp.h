#pragma once

#include "ofMain.h"
#include "Notes.h"
#include "NoteA.h"
#include "NoteB.h"
#include "NoteC.h"
#include "NoteD.h"


class ofApp : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y );
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void mouseEntered(int x, int y);
        void mouseExited(int x, int y);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
    NoteA *a;
    NoteB *b;
    NoteC *c;
    NoteD *d;
    ofSerial serial;
    int buad = 9600;
    string device = "/dev/tty.usbmodem141201";
    bool canOpen;
    int score;
    vector<Notes *> notes;
    bool isGame;
    bool pause;
    bool instrument;
};


