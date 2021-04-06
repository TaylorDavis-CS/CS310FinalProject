#pragma once
#include "ofMain.h"
#include "Notes.h"
class NoteC : public Notes{
public:
    NoteC(string s){
        this->x = 420;
        this->y = -this->size;
        this->r = 0;
        this->g = 0;
        this->b = 255;
        this->button = 'C';
        this->player.load(s);
    }
    void draw(){
        ofSetColor(r, g, b);
        ofDrawCircle(x, y, size);
    }
};

