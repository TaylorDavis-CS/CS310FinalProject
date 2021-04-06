#pragma once
#include "ofMain.h"
#include "Notes.h"

class NoteB : public Notes{
public:
    NoteB(string s){
        this->x = 220;
        this->y = -this->size;
        this->r = 0;
        this->g = 255;
        this->b = 0;
        this->button = 'B';
        this->player.load(s);
    }
    void draw(){
        ofSetColor(r, g, b);
        ofDrawRectangle(x, y, size, size);
    }
};
